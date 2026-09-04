#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <windowsx.h>

#include "sr_geometry.h"

#include <math.h>
#include <stdio.h>
#include <string.h>

static SrMesh g_mesh;
static char g_mesh_path[MAX_PATH] = "..\\data\\beamer2.sbv";
static float g_angle_y = 0.0f;
static float g_angle_x = -0.28f;
static int g_mouse_down;
static POINT g_last_mouse;

static void sr_draw_text(HDC dc, int x, int y, const char *text) {
    HFONT font = CreateFontA(18, 0, 0, 0, FW_NORMAL, FALSE, FALSE, FALSE,
                             ANSI_CHARSET, OUT_DEFAULT_PRECIS, CLIP_DEFAULT_PRECIS,
                             NONANTIALIASED_QUALITY, DEFAULT_PITCH, "Terminal");
    HFONT old_font = (HFONT)SelectObject(dc, font);
    SetBkMode(dc, TRANSPARENT);
    SetTextColor(dc, RGB(235, 235, 235));
    TextOutA(dc, x, y, text, (int)strlen(text));
    SelectObject(dc, old_font);
    DeleteObject(font);
}

static void sr_project(float x, float y, float z, int w, int h, POINT *out) {
    float cy = cosf(g_angle_y);
    float sy = sinf(g_angle_y);
    float cx = cosf(g_angle_x);
    float sx = sinf(g_angle_x);

    float rx = x * cy - z * sy;
    float rz = x * sy + z * cy;
    float ry = y * cx - rz * sx;
    rz = y * sx + rz * cx;

    float depth = rz + 6.0f;
    float scale = depth > 0.1f ? 260.0f / depth : 260.0f;
    out->x = (LONG)(w * 0.5f + rx * scale);
    out->y = (LONG)(h * 0.53f - ry * scale);
}

static void sr_draw_mesh(HDC dc, RECT client) {
    int w = client.right - client.left;
    int h = client.bottom - client.top;
    float minv[3], maxv[3];
    sr_mesh_bounds(&g_mesh, minv, maxv);

    float center[3] = {
        (minv[0] + maxv[0]) * 0.5f,
        (minv[1] + maxv[1]) * 0.5f,
        (minv[2] + maxv[2]) * 0.5f
    };
    float span_x = maxv[0] - minv[0];
    float span_y = maxv[1] - minv[1];
    float span_z = maxv[2] - minv[2];
    float span = fmaxf(span_x, fmaxf(span_y, span_z));
    float normalize = span > 0.001f ? 3.0f / span : 1.0f;

    HPEN edge_pen = CreatePen(PS_SOLID, 1, RGB(215, 215, 215));
    HPEN tri_pen = CreatePen(PS_SOLID, 1, RGB(95, 150, 125));
    HPEN old_pen = (HPEN)SelectObject(dc, edge_pen);

    if (strcmp(g_mesh.source_format, "cmo") == 0) {
        SelectObject(dc, tri_pen);
        for (size_t i = 0; i < g_mesh.face_count; i++) {
            const SrFace *face = &g_mesh.faces[i];
            POINT p[3];
            for (int j = 0; j < 3; j++) {
                uint32_t index = face->indices[j];
                if (index >= g_mesh.vertex_count) {
                    index = g_mesh.vertex_count ? (uint32_t)g_mesh.vertex_count - 1 : 0;
                }
                const SrVertex *v = &g_mesh.vertices[index];
                sr_project((v->x - center[0]) * normalize,
                           (v->y - center[1]) * normalize,
                           (v->z - center[2]) * normalize, w, h, &p[j]);
            }
            MoveToEx(dc, p[0].x, p[0].y, NULL);
            LineTo(dc, p[1].x, p[1].y);
            LineTo(dc, p[2].x, p[2].y);
            LineTo(dc, p[0].x, p[0].y);
        }
    } else {
        SelectObject(dc, edge_pen);
        for (size_t i = 0; i < g_mesh.vertex_count; i++) {
            POINT a;
            const SrVertex *v = &g_mesh.vertices[i];
            sr_project((v->x - center[0]) * normalize,
                       (v->y - center[1]) * normalize,
                       (v->z - center[2]) * normalize, w, h, &a);
            Ellipse(dc, a.x - 3, a.y - 3, a.x + 3, a.y + 3);
            if (i > 0) {
                POINT b;
                const SrVertex *prev = &g_mesh.vertices[i - 1];
                sr_project((prev->x - center[0]) * normalize,
                           (prev->y - center[1]) * normalize,
                           (prev->z - center[2]) * normalize, w, h, &b);
                MoveToEx(dc, b.x, b.y, NULL);
                LineTo(dc, a.x, a.y);
            }
        }
    }

    SelectObject(dc, old_pen);
    DeleteObject(edge_pen);
    DeleteObject(tri_pen);
}

static void sr_paint(HWND hwnd) {
    PAINTSTRUCT ps;
    RECT client;
    HDC dc = BeginPaint(hwnd, &ps);
    GetClientRect(hwnd, &client);
    int w = client.right - client.left;
    int h = client.bottom - client.top;
    HBRUSH bg = CreateSolidBrush(RGB(12, 14, 13));
    FillRect(dc, &client, bg);
    DeleteObject(bg);

    HPEN grid_pen = CreatePen(PS_SOLID, 1, RGB(32, 40, 36));
    HPEN old_pen = (HPEN)SelectObject(dc, grid_pen);
    for (int x = w / 2 % 48; x < w; x += 48) {
        MoveToEx(dc, x, 0, NULL);
        LineTo(dc, x, h);
    }
    for (int y = h / 2 % 48; y < h; y += 48) {
        MoveToEx(dc, 0, y, NULL);
        LineTo(dc, w, y);
    }
    SelectObject(dc, old_pen);
    DeleteObject(grid_pen);

    if (g_mesh.vertices) {
        sr_draw_mesh(dc, client);
    }

    char line[512];
    snprintf(line, sizeof(line), "%s  format=%s version=%u vertices=%zu",
             g_mesh_path, g_mesh.source_format, g_mesh.version, g_mesh.vertex_count);
    sr_draw_text(dc, 12, 10, line);
    sr_draw_text(dc, 12, 34, "Drag mouse to rotate. Keys: 1 beamer2.sbv, 2 9mm.cmo, 3 ak47.cmo, 4 cellphone.cmo, Esc quit.");
    EndPaint(hwnd, &ps);
}

static void sr_load_mesh(HWND hwnd, const char *path) {
    SrMesh next;
    if (!sr_mesh_load_any(path, &next)) {
        MessageBoxA(hwnd, path, "Could not load mesh", MB_ICONERROR);
        return;
    }
    sr_mesh_free(&g_mesh);
    g_mesh = next;
    strncpy(g_mesh_path, path, sizeof(g_mesh_path) - 1);
    g_mesh_path[sizeof(g_mesh_path) - 1] = 0;
    InvalidateRect(hwnd, NULL, TRUE);
}

static LRESULT CALLBACK sr_window_proc(HWND hwnd, UINT msg, WPARAM wparam, LPARAM lparam) {
    switch (msg) {
    case WM_CREATE:
        SetTimer(hwnd, 1, 16, NULL);
        sr_load_mesh(hwnd, g_mesh_path);
        return 0;
    case WM_TIMER:
        g_angle_y += 0.01f;
        InvalidateRect(hwnd, NULL, FALSE);
        return 0;
    case WM_LBUTTONDOWN:
        g_mouse_down = 1;
        g_last_mouse.x = GET_X_LPARAM(lparam);
        g_last_mouse.y = GET_Y_LPARAM(lparam);
        SetCapture(hwnd);
        return 0;
    case WM_LBUTTONUP:
        g_mouse_down = 0;
        ReleaseCapture();
        return 0;
    case WM_MOUSEMOVE:
        if (g_mouse_down) {
            POINT p = { GET_X_LPARAM(lparam), GET_Y_LPARAM(lparam) };
            g_angle_y += (float)(p.x - g_last_mouse.x) * 0.01f;
            g_angle_x += (float)(p.y - g_last_mouse.y) * 0.01f;
            g_last_mouse = p;
            InvalidateRect(hwnd, NULL, FALSE);
        }
        return 0;
    case WM_KEYDOWN:
        if (wparam == VK_ESCAPE) {
            DestroyWindow(hwnd);
        } else if (wparam == '1') {
            sr_load_mesh(hwnd, "..\\data\\beamer2.sbv");
        } else if (wparam == '2') {
            sr_load_mesh(hwnd, "..\\data\\model\\9mm.cmo");
        } else if (wparam == '3') {
            sr_load_mesh(hwnd, "..\\data\\model\\ak47.cmo");
        } else if (wparam == '4') {
            sr_load_mesh(hwnd, "..\\data\\model\\cellphone.cmo");
        }
        return 0;
    case WM_PAINT:
        sr_paint(hwnd);
        return 0;
    case WM_DESTROY:
        KillTimer(hwnd, 1);
        sr_mesh_free(&g_mesh);
        PostQuitMessage(0);
        return 0;
    default:
        return DefWindowProc(hwnd, msg, wparam, lparam);
    }
}

int WINAPI WinMain(HINSTANCE instance, HINSTANCE prev_instance, LPSTR cmd_line, int show_cmd) {
    (void)prev_instance;
    if (cmd_line && cmd_line[0]) {
        strncpy(g_mesh_path, cmd_line, sizeof(g_mesh_path) - 1);
        g_mesh_path[sizeof(g_mesh_path) - 1] = 0;
    }

    WNDCLASSA wc;
    memset(&wc, 0, sizeof(wc));
    wc.lpfnWndProc = sr_window_proc;
    wc.hInstance = instance;
    wc.lpszClassName = "SubRosaRecovered3D";
    wc.hCursor = LoadCursor(NULL, IDC_ARROW);
    wc.hbrBackground = (HBRUSH)GetStockObject(BLACK_BRUSH);
    if (!RegisterClassA(&wc)) {
        return 1;
    }

    HWND hwnd = CreateWindowExA(0, wc.lpszClassName, "Sub Rosa 3D Reconstruction",
                                WS_OVERLAPPEDWINDOW | WS_VISIBLE,
                                CW_USEDEFAULT, CW_USEDEFAULT, 1120, 820,
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
