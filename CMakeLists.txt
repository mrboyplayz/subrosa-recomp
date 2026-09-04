cmake_minimum_required(VERSION 3.20)
project(subrosa_recovered C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

add_executable(sr_probe
    src/main.c
    src/sr_binary.c
    src/sr_sbb.c
    src/sr_sbc.c
    src/sr_sbl.c
    src/sr_sbv.c
    src/sr_runtime.c
    src/sr_ui_original.c
)

target_include_directories(sr_probe PRIVATE src)

if (MSVC)
    target_compile_options(sr_probe PRIVATE /W4)
else()
    target_compile_options(sr_probe PRIVATE -Wall -Wextra -Wpedantic)
endif()
