#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <windowsx.h>

#include "sr_ui_original.h"

#include <stdio.h>

typedef enum SrOverlay {
    SR_OVERLAY_NONE,
    SR_OVERLAY_MENU,
    SR_OVERLAY_OPTIONS,
    SR_OVERLAY_MAP,
    SR_OVERLAY_PHONE,
    SR_OVERLAY_SPECTATOR
} SrOverlay;

static SrOverlay g_overlay = SR_OVERLAY_NONE;
static POINT g_mouse = { 512, 384 };
static SrUiOptionsState g_options = { 1, 1, 0, 1, 0, 0, 80, 0, 0 };

static COLORREF white(void) { return RGB(245, 245, 245); }
static COLORREF black(void) { return RGB(0, 0, 0); }
static COLORREF red(void) { return RGB(190, 20, 20); }
static COLORREF gray(void) { return RGB(198, 198, 198); }

static void sr_draw_text(HDC dc, int x, int y, const char *text, COLORREF color, int size) {
    HFONT font = CreateFontA(size, 0, 0, 0, FW_NORMAL, FALSE, FALSE, FALSE,
                             ANSI_CHARSET, OUT_DEFAULT_PRECIS, CLIP_DEFAULT_PRECIS,
                             NONANTIALIASED_QUALITY, DEFAULT_PITCH, "Terminal");
    HFONT old_font = (HFONT)SelectObject(dc, font);
    SetBkMode(dc, TRANSPARENT);
    SetTextColor(dc, RGB(20, 20, 20));
    TextOutA(dc, x + 2, y + 2, text, (int)lstrlenA(text));
    SetTextColor(dc, color);
    TextOutA(dc, x, y, text, (int)lstrlenA(text));
    SelectObject(dc, old_font);
    DeleteObject(font);
}

static void sr_fill_rect(HDC dc, int x, int y, int w, int h, COLORREF color) {
    RECT rect = { x, y, x + w, y + h };
    HBRUSH brush = CreateSolidBrush(color);
    FillRect(dc, &rect, brush);
    DeleteObject(brush);
}

static void sr_stroke_rect(HDC dc, int x, int y, int w, int h, COLORREF color, int width) {
    HPEN pen = CreatePen(PS_SOLID, width, color);
    HBRUSH old_brush = (HBRUSH)SelectObject(dc, GetStockObject(NULL_BRUSH));
    HPEN old_pen = (HPEN)SelectObject(dc, pen);
    Rectangle(dc, x, y, x + w, y + h);
    SelectObject(dc, old_pen);
    SelectObject(dc, old_brush);
    DeleteObject(pen);
}

static void sr_draw_world(HDC dc, RECT client) {
    int w = client.right - client.left;
    int h = client.bottom - client.top;
    sr_fill_rect(dc, 0, 0, w, h, RGB(39, 42, 38));
    sr_fill_rect(dc, 0, h / 2, w, h / 2, RGB(55, 54, 48));
    sr_fill_rect(dc, 0, h / 2 + 80, w, h / 2, RGB(42, 42, 39));

    for (int i = 0; i < 9; i++) {
        int x = 60 + i * 120;
        int bh = 130 + (i % 3) * 45;
        sr_fill_rect(dc, x, h / 2 - bh, 82, bh, RGB(92 + i * 7, 83, 65));
        sr_fill_rect(dc, x + 12, h / 2 - bh + 20, 14, 18, RGB(37, 52, 58));
        sr_fill_rect(dc, x + 50, h / 2 - bh + 20, 14, 18, RGB(37, 52, 58));
    }

    sr_fill_rect(dc, 90, h / 2 + 110, 210, 62, RGB(22, 22, 20));
    sr_fill_rect(dc, 120, h / 2 + 70, 116, 52, RGB(30, 32, 29));
    sr_fill_rect(dc, 240, h / 2 + 92, 80, 40, RGB(30, 32, 29));
}

static void sr_draw_top_hud(HDC dc, int w) {
    sr_draw_text(dc, 0, 0, "$19,114", white(), 24);
    sr_draw_text(dc, w / 2 - 80, 0, "Press Tab for Menu", white(), 24);
    sr_draw_text(dc, w - 220, 0, "Wanted Level 44", red(), 24);
    sr_draw_text(dc, w - 48, 0, "8:58", white(), 24);
}

static void sr_draw_inventory(HDC dc, int w, int h) {
    int slot_w = 124;
    int slot_h = 112;
    int start = (w - slot_w * 5) / 2;
    for (int i = 0; i < 5; i++) {
        int x = start + i * slot_w;
        int y = h - slot_h;
        sr_fill_rect(dc, x, y, slot_w - 2, slot_h, RGB(15, 17, 15));
        sr_stroke_rect(dc, x, y, slot_w - 2, slot_h, RGB(34, 34, 34), 1);
        char label[8];
        snprintf(label, sizeof(label), "%d", i + 1);
        sr_draw_text(dc, x + slot_w / 2 - 5, y + 6, label, white(), 18);
    }
    sr_draw_text(dc, start + 26, h - 62, "phone", white(), 18);
    sr_draw_text(dc, start + 150, h - 62, "disk", white(), 18);
    sr_draw_text(dc, start + 268, h - 62, "pistol", white(), 18);
    sr_draw_text(dc, start + 396, h - 62, "clip", white(), 18);
    sr_draw_text(dc, start + 530, h - 62, "key", white(), 18);
}

static void sr_draw_menu(HDC dc, int w, int h) {
    const char *items[] = {
        "Return to Game", "The Players", "Invite", "Mute Player",
        "Admin", "Options", "Exit Game"
    };
    int x = w - 470;
    int y = h - 500;
    for (int i = 0; i < 7; i++) {
        sr_fill_rect(dc, x, y + i * 52, 440, 36, RGB(4, 4, 4));
        sr_stroke_rect(dc, x, y + i * 52, 440, 36, RGB(235, 235, 235), 3);
        sr_draw_text(dc, x + 12, y + i * 52 + 5, items[i], white(), 28);
    }
}

static void sr_draw_options(HDC dc, int w, int h) {
    SrUiContext ui;
    sr_ui_begin(&ui, (float)(w - 470), (float)(h - 620), 440.0f, 36.0f);
    sr_ui_build_options_menu(&ui, &g_options);
    for (int i = 0; i < SR_UI_MAX_WIDGETS; i++) {
        const SrUiWidget *widget = &ui.widgets[i];
        if (!widget->live) {
            continue;
        }
        int x = (int)widget->screen_rect.x;
        int y = (int)widget->screen_rect.y;
        int rw = (int)widget->screen_rect.w;
        int rh = (int)widget->screen_rect.h;
        sr_fill_rect(dc, x, y, rw, rh, RGB(4, 4, 4));
        sr_stroke_rect(dc, x, y, rw, rh, RGB(235, 235, 235), 3);
        sr_draw_text(dc, x + 12, y + 5, widget->label, white(), 26);
        if (widget->kind == SR_UI_WIDGET_CHECKBOX && widget->int_value) {
            sr_draw_text(dc, x + rw - 54, y + 5, *widget->int_value ? "on" : "off", white(), 26);
        } else if (widget->kind == SR_UI_WIDGET_INT_SLIDER && widget->int_value) {
            char text[32];
            snprintf(text, sizeof(text), "%d", *widget->int_value);
            sr_draw_text(dc, x + rw - 54, y + 5, text, white(), 26);
        } else if (widget->kind == SR_UI_WIDGET_COMBO_BOX && widget->items && widget->int_value) {
            sr_draw_text(dc, x + rw - 118, y + 5, widget->items[*widget->int_value], white(), 26);
        }
    }
}

static void sr_draw_phone(HDC dc) {
    const char *lines[] = {
        "Left-click to dial", "Use Numpad or number keys", "",
        "1111 - Goldmen", "2222 - Monsota", "3333 - OXS",
        "4444 - Pentacom", "5555 - Nexaco", "6666 - Prodocon"
    };
    for (int i = 0; i < 9; i++) {
        sr_draw_text(dc, 28, 95 + i * 30, lines[i], white(), 26);
    }
}

static void sr_draw_map(HDC dc, int w) {
    sr_draw_text(dc, 110, 2, "Press C to toggle map", white(), 24);
    sr_fill_rect(dc, 0, 45, 300, 420, RGB(176, 176, 176));
    sr_stroke_rect(dc, 0, 45, 300, 420, RGB(230, 230, 230), 3);
    for (int x = 0; x <= 300; x += 48) {
        sr_stroke_rect(dc, x, 45, 1, 420, RGB(65, 65, 65), 1);
    }
    for (int y = 45; y <= 465; y += 48) {
        sr_stroke_rect(dc, 0, y, 300, 1, RGB(65, 65, 65), 1);
    }
    sr_draw_text(dc, 40, 340, "OXS International", white(), 16);
    sr_draw_text(dc, 116, 185, "Garriott Ave", white(), 16);
    sr_draw_text(dc, 140, 136, "Nexaco", white(), 16);

    sr_fill_rect(dc, w - 650, 18, 650, 756, gray());
    SetBkMode(dc, TRANSPARENT);
    SetTextColor(dc, black());
    sr_draw_text(dc, w - 618, 76, "Cactus42", black(), 24);
    sr_draw_text(dc, w - 618, 106, "319-1101", black(), 24);
    sr_draw_text(dc, w - 618, 136, "Corporate rating: 1088475", black(), 24);
    sr_draw_text(dc, w - 618, 218, "OXS International", black(), 24);
    sr_draw_text(dc, w - 618, 248, "$0", black(), 24);
    sr_draw_text(dc, w - 330, 248, "Budget: $600,861", black(), 24);
}

static void sr_draw_spectator(HDC dc, int w, int h) {
    sr_draw_text(dc, w / 2 - 48, h - 196, "Spectating", white(), 22);
    sr_draw_text(dc, w / 2 - 70, h - 170, "Voracious Puma", RGB(215, 190, 100), 22);
    sr_draw_text(dc, w / 2 - 120, h - 144, "Press Space to switch player", white(), 22);
    sr_draw_text(dc, w / 2 - 76, h - 118, "Press 1 for freecam", white(), 22);
}

static void sr_draw_cursor(HDC dc) {
    HPEN pen = CreatePen(PS_SOLID, 2, RGB(230, 230, 230));
    HPEN old_pen = (HPEN)SelectObject(dc, pen);
    MoveToEx(dc, g_mouse.x, g_mouse.y, NULL);
    LineTo(dc, g_mouse.x + 18, g_mouse.y + 8);
    LineTo(dc, g_mouse.x + 8, g_mouse.y + 12);
    LineTo(dc, g_mouse.x + 3, g_mouse.y + 24);
    LineTo(dc, g_mouse.x, g_mouse.y);
    SelectObject(dc, old_pen);
    DeleteObject(pen);
}

static void sr_paint(HWND hwnd) {
    PAINTSTRUCT ps;
    RECT client;
    HDC dc = BeginPaint(hwnd, &ps);
    GetClientRect(hwnd, &client);
    int w = client.right - client.left;
    int h = client.bottom - client.top;

    sr_draw_world(dc, client);
    sr_draw_top_hud(dc, w);
    if (g_overlay == SR_OVERLAY_MAP) {
        sr_draw_map(dc, w);
    } else if (g_overlay == SR_OVERLAY_MENU) {
        sr_draw_menu(dc, w, h);
    } else if (g_overlay == SR_OVERLAY_OPTIONS) {
        sr_draw_options(dc, w, h);
    } else if (g_overlay == SR_OVERLAY_PHONE) {
        sr_draw_phone(dc);
    } else if (g_overlay == SR_OVERLAY_SPECTATOR) {
        sr_draw_spectator(dc, w, h);
    }
    sr_draw_inventory(dc, w, h);
    sr_draw_cursor(dc);
    EndPaint(hwnd, &ps);
}

static LRESULT CALLBACK sr_window_proc(HWND hwnd, UINT msg, WPARAM wparam, LPARAM lparam) {
    switch (msg) {
    case WM_MOUSEMOVE:
        g_mouse.x = GET_X_LPARAM(lparam);
        g_mouse.y = GET_Y_LPARAM(lparam);
        InvalidateRect(hwnd, NULL, FALSE);
        return 0;
    case WM_LBUTTONDOWN:
        g_overlay = SR_OVERLAY_PHONE;
        InvalidateRect(hwnd, NULL, FALSE);
        return 0;
    case WM_KEYDOWN:
        if (wparam == VK_TAB) {
            g_overlay = g_overlay == SR_OVERLAY_MENU ? SR_OVERLAY_NONE : SR_OVERLAY_MENU;
        } else if (wparam == VK_ESCAPE) {
            g_overlay = SR_OVERLAY_NONE;
        } else if (wparam == 'C') {
            g_overlay = g_overlay == SR_OVERLAY_MAP ? SR_OVERLAY_NONE : SR_OVERLAY_MAP;
        } else if (wparam == 'P') {
            g_overlay = g_overlay == SR_OVERLAY_PHONE ? SR_OVERLAY_NONE : SR_OVERLAY_PHONE;
        } else if (wparam == VK_SPACE) {
            g_overlay = g_overlay == SR_OVERLAY_SPECTATOR ? SR_OVERLAY_NONE : SR_OVERLAY_SPECTATOR;
        } else if (wparam == 'O') {
            g_overlay = SR_OVERLAY_OPTIONS;
        }
        InvalidateRect(hwnd, NULL, FALSE);
        return 0;
    case WM_PAINT:
        sr_paint(hwnd);
        return 0;
    case WM_DESTROY:
        PostQuitMessage(0);
        return 0;
    default:
        return DefWindowProc(hwnd, msg, wparam, lparam);
    }
}

int WINAPI WinMain(HINSTANCE instance, HINSTANCE prev_instance, LPSTR cmd_line, int show_cmd) {
    (void)prev_instance;
    (void)cmd_line;

    WNDCLASSA wc;
    memset(&wc, 0, sizeof(wc));
    wc.lpfnWndProc = sr_window_proc;
    wc.hInstance = instance;
    wc.lpszClassName = "SubRosaRecoveredUi";
    wc.hCursor = NULL;
    wc.hbrBackground = (HBRUSH)GetStockObject(BLACK_BRUSH);
    if (!RegisterClassA(&wc)) {
        return 1;
    }

    HWND hwnd = CreateWindowExA(0, wc.lpszClassName, "Sub Rosa UI Reconstruction",
                                WS_OVERLAPPEDWINDOW | WS_VISIBLE,
                                CW_USEDEFAULT, CW_USEDEFAULT, 1040, 820,
                                NULL, NULL, instance, NULL);
    if (!hwnd) {
        return 1;
    }

    ShowWindow(hwnd, show_cmd);
    UpdateWindow(hwnd);

    MSG msg;
    while (GetMessageA(&msg, NULL, 0, 0) > 0) {
        TranslateMessage(&msg);
        DispatchMessageA(&msg);
    }
    return (int)msg.wParam;
}
