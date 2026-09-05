cmake_minimum_required(VERSION 3.20)
project(subrosa_recovered C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

option(SR_ENABLE_RAW_REBUILD "Expose the unfinished raw-export game build target" OFF)
if (SR_ENABLE_RAW_REBUILD)
    if (NOT CMAKE_C_COMPILER_ID STREQUAL "GNU")
        message(FATAL_ERROR "The raw-export compatibility pass currently uses MinGW GCC")
    endif()
    set(SR_REBUILD_CLIENT_SOURCE "${CMAKE_CURRENT_SOURCE_DIR}/exports/client/subrosa.c"
        CACHE FILEPATH "Client translation unit to rebuild")
    if (NOT EXISTS "${SR_REBUILD_CLIENT_SOURCE}")
        message(FATAL_ERROR "Export the Windows client before configuring the raw rebuild")
    endif()
    add_executable(subrosa_recompiled WIN32 EXCLUDE_FROM_ALL "${SR_REBUILD_CLIENT_SOURCE}")
    target_include_directories(subrosa_recompiled PRIVATE exports/client)
    target_compile_options(subrosa_recompiled PRIVATE -fms-extensions -fno-strict-aliasing -fmax-errors=100
        -include "${CMAKE_CURRENT_SOURCE_DIR}/src/rebuild/export_compat.h")
    target_link_libraries(subrosa_recompiled PRIVATE user32 gdi32 shell32 ws2_32 winmm opengl32)
endif()

add_executable(sr_vector_views_test EXCLUDE_FROM_ALL src/rebuild/vector_views_test.c)
if (CMAKE_C_COMPILER_ID STREQUAL "GNU")
    target_compile_options(sr_vector_views_test PRIVATE -O2 -fno-strict-aliasing -Wall -Wextra -Werror)
endif()

add_executable(sr_probe
    src/main.c
    src/sr_binary.c
    src/sr_geometry.c
    src/sr_sbb.c
    src/sr_sbc.c
    src/sr_sbl.c
    src/sr_sbv.c
    src/sr_runtime.c
    src/sr_ui_original.c
)

target_include_directories(sr_probe PRIVATE src)

add_executable(sr_ui WIN32
    src/sr_ui_win.c
    src/sr_ui_original.c
)

target_include_directories(sr_ui PRIVATE src)

add_executable(sr_3d WIN32
    src/sr_3d_win.c
    src/sr_binary.c
    src/sr_geometry.c
)

target_include_directories(sr_3d PRIVATE src)

add_executable(sr_play WIN32 src/sr_play_win.c src/sr_play.c src/sr_geometry.c src/sr_binary.c)
target_link_libraries(sr_play PRIVATE opengl32 gdi32 user32)
add_executable(sr_play_test src/sr_play_test.c src/sr_play.c)
if (NOT MSVC)
    target_compile_options(sr_play PRIVATE -Wall -Wextra -Wpedantic)
    target_compile_options(sr_play_test PRIVATE -Wall -Wextra -Wpedantic)
endif()
enable_testing()
add_test(NAME playable_logic COMMAND sr_play_test)

if (MSVC)
    target_compile_options(sr_probe PRIVATE /W4)
    target_compile_options(sr_ui PRIVATE /W4)
    target_compile_options(sr_3d PRIVATE /W4)
else()
    target_compile_options(sr_probe PRIVATE -Wall -Wextra -Wpedantic)
    target_compile_options(sr_ui PRIVATE -Wall -Wextra -Wpedantic)
    target_compile_options(sr_3d PRIVATE -Wall -Wextra -Wpedantic)
endif()
