#include "sr_formats.h"
#include "sr_ui_original.h"

#include <stdio.h>
#include <string.h>

static const char *sr_ext(const char *path) {
    const char *dot = strrchr(path, '.');
    return dot ? dot : "";
}

static int sr_probe_one(const char *path) {
    const char *ext = sr_ext(path);
    if (strcmp(ext, ".sbb") == 0) {
        return sr_parse_sbb(path);
    }
    if (strcmp(ext, ".sbc") == 0) {
        return sr_parse_sbc(path);
    }
    if (strcmp(ext, ".sbl") == 0) {
        return sr_parse_sbl(path);
    }
    if (strcmp(ext, ".sbv") == 0 || strcmp(ext, ".srv") == 0) {
        return sr_parse_sbv(path);
    }
    fprintf(stderr, "%s: unsupported extension %s\n", path, ext);
    return 1;
}

int main(int argc, char **argv) {
    int failures = 0;
    if (argc < 2) {
        fprintf(stderr, "usage: sr_probe <file> [file...] | --ui-options\n");
        return 2;
    }
    if (strcmp(argv[1], "--ui-options") == 0) {
        sr_ui_print_options_menu(stdout);
        return 0;
    }
    for (int i = 1; i < argc; i++) {
        failures += sr_probe_one(argv[i]) != 0;
    }
    return failures ? 1 : 0;
}
