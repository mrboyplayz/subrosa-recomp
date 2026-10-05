"""Add the recomp's window-mode preference after native SDL ABI recovery."""

def extend(source):
    source = source.replace(b'\r\n', b'\n')
    old = b'  v28 = sr_create_startup_window();'
    new = b'''  sr_recomp_window_load();
  /* Create a normal GL window first; the extension chooses its desktop mode. */
  dword_140404A6C[280648151] = 0;
  dword_140404A6C[137297766] = 0;
  v28 = sr_create_startup_window();
  if (!v28) {
    void *sr_mode_window;
    memcpy(&sr_mode_window, &dword_140404A6C[137297751], 8);
    sr_recomp_window_set(sr_mode_window, sr_recomp_window_mode, 0);
    dword_140404A6C[280648151] = dword_140404A6C[137297766] = sr_recomp_window_mode != 0;
    sr_window_size(sr_mode_window, (int *)&dword_140404A6C[137297755], (int *)&dword_140404A6C[137297756]);
    dword_140404A6C[137297759] = dword_140404A6C[137297755];
    dword_140404A6C[137297760] = dword_140404A6C[137297756];
  }'''
    if source.count(old) != 1: raise ValueError('Borderless startup boundary changed')
    source = source.replace(old, new)
    old = b'''  if ( (unsigned int)sr_DrawMenuToggle("Fullscreen", &dword_140404A6C[137297766]) )
    sr_event_fullscreen(*(void **)&dword_140404A6C[137297751],dword_140404A6C[137297766]?0x1001u:0);'''
    new = b'''  sr_borderless_selected = sr_recomp_window_mode == 1;
  sr_fullscreen_selected = sr_recomp_window_mode == 2;
  if ((unsigned int)sr_DrawMenuToggle("Borderless", &sr_borderless_selected)) {
    sr_recomp_window_set(*(void **)&dword_140404A6C[137297751], sr_borderless_selected ? 1 : 0, 1);
    dword_140404A6C[137297766] = sr_recomp_window_mode != 0;
    sr_fullscreen_selected = sr_recomp_window_mode == 2;
  }
  if ((unsigned int)sr_DrawMenuToggle("Fullscreen", &sr_fullscreen_selected)) {
    sr_recomp_window_set(*(void **)&dword_140404A6C[137297751], sr_fullscreen_selected ? 2 : 0, 1);
    dword_140404A6C[137297766] = sr_recomp_window_mode != 0;
  }'''
    if source.count(old) != 1: raise ValueError('Borderless Options boundary changed')
    source = source.replace(old, new)
    for old in (b'sr_event_fullscreen(sr_event_window, dword_140404A6C[137297766] ? 0x1001u : 0);',
                b'sr_event_fullscreen(sr_event_window, 0x1001u);'):
        if source.count(old) != 1: raise ValueError('Borderless event boundary changed')
        source = source.replace(old, old.replace(b'sr_event_fullscreen', b'sr_recomp_window_toggle'))
    return b'#include "client_window_mode.h"\n' + source, {
        'extension_borderless_startup': 1, 'extension_window_mode_controls': 2,
        'extension_borderless_event_calls': 2}
