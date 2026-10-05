cmake_minimum_required(VERSION 3.20)
project(subrosa_recovered C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)
enable_testing()

option(SR_ENABLE_RENDER_TEST "Build the standalone renderer after build_render_test.py" OFF)
if (SR_ENABLE_RENDER_TEST)
    if (NOT WIN32 OR NOT EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/work/render-test/render_test_capture.h")
        message(FATAL_ERROR "Standalone renderer requires Windows and scripts/build_render_test.py")
    endif()
    add_executable(subrosa_render_test WIN32 src/recovered/render_test.c)
    target_include_directories(subrosa_render_test PRIVATE exports/client/shaders work/render-test)
    target_link_libraries(subrosa_render_test PRIVATE opengl32 gdi32 user32)
    if (CMAKE_C_COMPILER_ID STREQUAL "GNU")
        target_compile_options(subrosa_render_test PRIVATE -O2 -fno-strict-aliasing -Wall -Wextra -Werror)
        target_link_libraries(subrosa_render_test PRIVATE m)
    endif()
    add_test(NAME standalone_render COMMAND subrosa_render_test --test --log "${CMAKE_CURRENT_BINARY_DIR}/render-test.log")
endif()

add_library(sr_server_entities STATIC src/recovered/server_entities.c)
add_executable(sr_server_entities_test src/recovered/server_entities_test.c)
target_link_libraries(sr_server_entities_test PRIVATE sr_server_entities)
if (CMAKE_C_COMPILER_ID STREQUAL "GNU")
    target_compile_options(sr_server_entities PRIVATE -Wall -Wextra -Werror)
    target_compile_options(sr_server_entities_test PRIVATE -Wall -Wextra -Werror)
endif()
add_test(NAME server_entities COMMAND sr_server_entities_test)

add_executable(sr_server_bits_test src/rebuild/server_bits_test.c)
if (CMAKE_C_COMPILER_ID STREQUAL "GNU")
    target_compile_options(sr_server_bits_test PRIVATE -O2 -fno-strict-aliasing -Wall -Wextra -Werror)
endif()
add_test(NAME server_bits COMMAND sr_server_bits_test)

add_executable(sr_server_image_test src/rebuild/server_image_test.c)
if (CMAKE_C_COMPILER_ID STREQUAL "GNU")
    target_compile_options(sr_server_image_test PRIVATE -O2 -Wall -Wextra -Werror)
endif()
add_test(NAME server_image COMMAND sr_server_image_test)

option(SR_ENABLE_ROSASERVER_LAYOUT_CHECK "Compare C entity types with the local RosaServer reference" OFF)
if (SR_ENABLE_ROSASERVER_LAYOUT_CHECK)
    enable_language(CXX)
    add_executable(sr_rosaserver_layout_test src/rebuild/rosaserver_layout_test.cpp)
    target_compile_features(sr_rosaserver_layout_test PRIVATE cxx_std_17)
    target_include_directories(sr_rosaserver_layout_test PRIVATE src/rebuild/layout_test_deps)
    add_test(NAME rosaserver_layouts COMMAND sr_rosaserver_layout_test)
endif()

option(SR_ENABLE_CLIENT_REBUILD "Compile the maintained client C modules" OFF)
if (SR_ENABLE_CLIENT_REBUILD)
    if (NOT CMAKE_C_COMPILER_ID STREQUAL "GNU")
        message(FATAL_ERROR "The client C compatibility layer requires MinGW GCC")
    endif()
    include(src/client/sources.cmake)
    add_library(sr_client_objects OBJECT EXCLUDE_FROM_ALL ${SR_CLIENT_SOURCES})
    target_sources(sr_client_objects PRIVATE src/rebuild/client_debug_console.c)
    target_compile_definitions(sr_client_objects PRIVATE SR_CLIENT_DEBUG_CONSOLE)
    target_include_directories(sr_client_objects PRIVATE src/client src/rebuild)
    target_compile_options(sr_client_objects PRIVATE -std=gnu11 -O0 -msse4.2 -mcmodel=large -Wa,-mbig-obj
        -fms-extensions -fno-strict-aliasing -fmax-errors=0
        -Wno-error=int-conversion -Wno-error=incompatible-pointer-types
        -Wno-error=pointer-to-int-cast -Wno-error=int-to-pointer-cast
        -Wno-error=implicit-function-declaration -Wno-error=return-mismatch -Wno-error=implicit-int
        -include "${CMAKE_CURRENT_SOURCE_DIR}/src/rebuild/export_compat.h")
endif()

option(SR_ENABLE_SHADER_VALIDATION "Compile the local, byte-exact extracted GLSL on the GPU" OFF)
if (SR_ENABLE_SHADER_VALIDATION)
    if (NOT WIN32)
        message(FATAL_ERROR "The shader validation harness currently requires Windows WGL")
    endif()
    if (NOT EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/exports/client/shaders/recovered_shaders.h")
        message(FATAL_ERROR "Run scripts/extract_shaders.py before enabling shader validation")
    endif()
    add_executable(sr_shader_compile_test src/recovered/shader_compile_test.c)
    target_include_directories(sr_shader_compile_test PRIVATE exports/client/shaders)
    target_link_libraries(sr_shader_compile_test PRIVATE opengl32 gdi32 user32)
    if (NOT MSVC)
        target_compile_options(sr_shader_compile_test PRIVATE -Wall -Wextra -Werror)
    endif()
    add_test(NAME original_shader_compilation COMMAND sr_shader_compile_test)
    set_tests_properties(original_shader_compilation PROPERTIES TIMEOUT 60)
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

add_executable(sr_maptool src/sr_maptool.c src/recovered/world_files.c)
target_include_directories(sr_maptool PRIVATE src)
if (NOT MSVC)
    target_compile_options(sr_maptool PRIVATE -Wall -Wextra -Wpedantic)
endif()

add_executable(sr_smallotown_pack src/sr_smallotown_pack.c src/recovered/world_files.c)
target_include_directories(sr_smallotown_pack PRIVATE src)
if (NOT MSVC)
    target_compile_options(sr_smallotown_pack PRIVATE -Wall -Wextra -Wpedantic)
endif()

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
add_test(NAME playable_logic COMMAND sr_play_test)

add_library(sr_recovered_camera STATIC src/recovered/camera.c)
add_library(sr_recovered_rigid_body STATIC src/recovered/rigid_body.c)
add_library(sr_recovered_client_leaf STATIC src/recovered/client_leaf.c)
if (TARGET subrosa_recompiled)
    target_link_libraries(subrosa_recompiled PRIVATE sr_recovered_client_leaf)
endif()
add_executable(sr_client_leaf_test src/recovered/client_leaf_test.c)
target_link_libraries(sr_client_leaf_test PRIVATE sr_recovered_client_leaf)
add_test(NAME recovered_client_leaf COMMAND sr_client_leaf_test)
if (MSVC)
    target_compile_options(sr_recovered_rigid_body PRIVATE /W4 /fp:strict)
else()
    target_compile_options(sr_recovered_rigid_body PRIVATE -O2 -Wall -Wextra -Werror
        -fno-fast-math -ffp-contract=off -frounding-math)
endif()
target_include_directories(sr_recovered_camera PUBLIC src/recovered)
if (MSVC)
    target_compile_options(sr_recovered_camera PRIVATE /W4 /fp:strict)
else()
    target_compile_options(sr_recovered_camera PRIVATE -O2 -Wall -Wextra -Werror
        -fno-fast-math -ffp-contract=off -frounding-math)
endif()
if (WIN32 AND CMAKE_SIZEOF_VOID_P EQUAL 8)
    add_executable(sr_camera_diff_test src/recovered/camera_diff_test.c src/recovered/original_fixture.c)
    target_link_libraries(sr_camera_diff_test PRIVATE sr_recovered_camera bcrypt)
    add_executable(sr_rigid_body_diff_test src/recovered/rigid_body_diff_test.c src/recovered/original_fixture.c)
    target_link_libraries(sr_rigid_body_diff_test PRIVATE sr_recovered_rigid_body bcrypt)
    add_executable(sr_client_leaf_diff_test src/recovered/client_leaf_diff_test.c src/recovered/original_fixture.c)
    target_link_libraries(sr_client_leaf_diff_test PRIVATE sr_recovered_client_leaf bcrypt)
    if (NOT MSVC)
        target_compile_options(sr_camera_diff_test PRIVATE -O2 -Wall -Wextra -Werror
            -fno-fast-math -ffp-contract=off -frounding-math)
    endif()
    # Opt-in: camera tests execute two reviewed, hash-pinned leaf functions.
    set(SR_ORIGINAL_CLIENT "" CACHE FILEPATH "Original client for differential tests")
    if (SR_ORIGINAL_CLIENT)
        add_test(NAME original_camera_equivalence COMMAND sr_camera_diff_test "${SR_ORIGINAL_CLIENT}")
        set_tests_properties(original_camera_equivalence PROPERTIES TIMEOUT 60)
        add_test(NAME original_rigid_body_equivalence COMMAND sr_rigid_body_diff_test "${SR_ORIGINAL_CLIENT}")
        set_tests_properties(original_rigid_body_equivalence PROPERTIES TIMEOUT 60)
        add_test(NAME original_client_leaf_equivalence COMMAND sr_client_leaf_diff_test "${SR_ORIGINAL_CLIENT}")
        set_tests_properties(original_client_leaf_equivalence PROPERTIES TIMEOUT 60)
    endif()
endif()

option(SR_ENABLE_SUITIUM_LAYOUT_CHECK "Compare C layouts to the vendored Suitium C++ headers" OFF)
if (SR_ENABLE_SUITIUM_LAYOUT_CHECK)
    enable_language(CXX)
    add_executable(sr_suitium_layout_test src/rebuild/suitium_layout_test.cpp)
    target_compile_features(sr_suitium_layout_test PRIVATE cxx_std_17)
    target_include_directories(sr_suitium_layout_test PRIVATE src/rebuild/layout_test_deps
        third_party/suitium/Suitium/structs)
    add_test(NAME suitium_layouts COMMAND sr_suitium_layout_test)
endif()

if (MSVC)
    target_compile_options(sr_probe PRIVATE /W4)
    target_compile_options(sr_ui PRIVATE /W4)
    target_compile_options(sr_3d PRIVATE /W4)
else()
    target_compile_options(sr_probe PRIVATE -Wall -Wextra -Wpedantic)
    target_compile_options(sr_ui PRIVATE -Wall -Wextra -Wpedantic)
    target_compile_options(sr_3d PRIVATE -Wall -Wextra -Wpedantic)
endif()
