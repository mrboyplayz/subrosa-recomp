"""Create a review queue from the prepared Windows client's edit provenance."""

import argparse
from collections import Counter
import hashlib
import json
from pathlib import Path


PROJECT = Path(__file__).resolve().parent.parent
REVIEW_KINDS = {
    "variadic_fix": "Recover the callee's actual register and stack signature from code and call sites.",
    "vector_move_assign": "Confirm movd/movq semantics and all upper-lane values in the original instructions.",
    "duplicate_definition": "Establish whether renamed bodies are distinct functions and how each is called.",
    "data_object_scalar": "Recover the object width, aliasing, initial bytes, and relocation.",
    "prototype_drop": "Compare the remaining declaration with the original call ABI.",
    "address_cast": "Check the original data type and every use of the stored address.",
    "function_binding": "Verify the address match, signature, and indirect-call behavior.",
    "function_definition_binding": "Verify the address and body boundaries against disassembly.",
    "data_object": "Recover the pointed-to storage and its initialization.",
    "simd": "Check storage width and aliasing for the accessed lane.",
    "simd_read": "Check operand evaluation and the lane selected by the instruction.",
}
COUNTER_FIELDS = {
    "recovered_integer_scan_negation": "Integer conversion uses unsigned 64-bit negation to retain native wrapping at INT64_MIN without signed C overflow.",
    "recovered_integer_scan_locale": "Integer scanner keeps thread pointer, locale pair and changed flag in their original contiguous 32-byte object.",
    "recovered_scan_object_layouts": "String scanner uses contiguous 32-byte locale, 24-byte input adapter and 144-byte processor with original initialized fields.",
    "recovered_scan_result_flow": "Original scanner EAX and locale cleanup replace uninitialized frame-cookie return.",
    "recovered_getc_signed_countdown": "Unsigned storage decrements with 32-bit wrapping, then native signed sign-bit test selects refill or direct byte reading.",
    "recovered_file_open_pointer_calls": "File-open filename and descriptor output retain native 64-bit pointers.",
    "recovered_file_open_layouts": "Twelve-byte mode, 32-byte locale and 48-byte conversion objects replace split locals.",
    "recovered_file_open_conversion_forwarding": "Narrow file opening forwards native UTF8/ANSI/OEM code-page policy into the already recovered typed converter.",
    "recovered_file_calloc_calls": "Four file/stream allocation calls use native count and width through the typed recovered allocator.",
    "recovered_standard_stream_bytes": "Three contiguous 88-byte standard streams retain original initialized bytes and public aliases.",
    "recovered_inherited_handle_layout": "GetStartupInfoW writes a complete 104-byte object; inherited handle pointer is read at native offset 72.",
    "recovered_file_startup_stages": "Registered lowio initializer precedes the C stream initializer; lowio failure rolls back prior CRT stages, stream failure returns 255.",
    "recovered_formatter_layouts": "Native 1144-byte format processor, 32-byte output adapter and 32-byte locale-update objects replace split stack locals.",
    "recovered_formatter_returns": "Native EAX result replaces frame-cookie artifacts; native truncation and termination branches retained.",
    "recovered_format_emission_returns": "Native narrow output helper returns AL=1; original emission and buffer adapter agree across controlled conversion boundaries.",
    "recovered_default_locale_pair": "Default locale pointers occupy contiguous 16-byte storage with aliases retaining both original symbol names.",
    "recovered_default_ctype_words": "Native default narrow character classification restores 256 entries and its preceding EOF word.",
    "recovered_thread_calloc_arguments": "Five CRT thread-data getters pass native count 1 and element size 968 to the recovered typed allocator.",
    "recovered_thread_startup_initializers": "Registered lock and fiber/thread-data initializers run around heap initialization in original order before the application entry.",
    "recovered_thread_startup_rollback": "Failed startup initialization rolls back completed heap/lock stages and invokes the original CRT fast-fail-7 route.",
    "recovered_api_module_names": "All 20 API module pointers reference recovered native UTF-16 strings in the rebuilt image, including the former absolute fibers API-set pointer.",
    "recovered_api_module_ranges": "49 CRT API calls in 36 functions use contiguous unsigned module-index arrays and native one-past-end boundaries recovered from original R8/R9 LEAs.",
    "recovered_profile_unaligned_copies": "Four profile defaults match original MOVDQU/MOVUPS destinations; explicit unaligned copies preserve all 16 bytes without requiring aligned global storage.",
    "recovered_world_unaligned_copies": "Three world configuration defaults match original MOVDQU destinations and preserve all 16 bytes at unaligned global addresses.",
    "recovered_versus_unaligned_copies": "Versus configuration default matches the original MOVDQU destination and preserves all 16 bytes without requiring aligned global storage.",
    "recovered_sdl_window_calls": "Startup SDL initialization, cursor, GL attributes, window/context creation, size query and swap interval use recovered arguments and full-width handles.",
    "recovered_c_locale_bytes": "Complete native default C locale descriptor, including scalar fields and pointer slots.",
    "recovered_c_locale_relocations": "Default locale pointer slots rebound to recovered storage.",
    "recovered_locale_case_bytes": "Native lower/upper case mappings preserve signed-character prefixes and all byte indices.",
    "recovered_locale_startup_initializer": "Registered global locale initializer runs before the API cache and PTD startup stages.",
    "recovered_gl_scan_output_pointers": "OpenGL version scanner output arguments retain full pointer width.",
    "recovered_gl_version_returns": "GL version loader returns zero for a null version string or zero-extended native EAX major version, without fabricated frame-cookie calls.",
    "recovered_copy_vector_loads": "Copy helper SIMD reads preserve native bytes without imposing alignment on source buffers.",
    "recovered_copy_vector_stores": "Copy helper SIMD writes preserve native bytes without imposing alignment on destination buffers.",
    "recovered_copy_stream_addresses": "Streaming copy destinations preserve direct addresses without reading vector temporaries.",
    "recovered_copy_rep_registers": "Forward REP copy source and destination return restored from R10/R11 flow.",
    "recovered_malloc_size_calls": "Malloc thunk callers with recovered size expressions use the typed native allocator and preserve the full size argument.",
    "remaining_malloc_missing_size_calls": "Malloc callers without recovered size expressions remain in the native argument recovery queue.",
    "recovered_realloc_null_size_calls": "Realloc with a null block passes its original full-width size into the recovered typed malloc allocator.",
    "recovered_shader_source_calls": "Five shader-source calls pass the native null fourth length-pointer argument through a typed function boundary.",
    "recovered_shader_source_pointers": "Two startup shader text assignments retain full-width char pointer types.",
    "recovered_image_reader_layout": "File image reader uses the original contiguous 224-byte context and 128-byte buffer.",
    "recovered_image_reader_callbacks": "Three file image reader callback slots use original function targets and full pointer width.",
    "recovered_image_reader_return": "File image loader returns the decoded pointer preserved through seek and close.",
    "recovered_ui_asset_return": "UI asset loader returns zero on failure and native EAX one on completed setup without fabricated frame-cookie calls.",
    "recovered_png_signature_byte": "PNG signature compares all eight-bit values without signed char promotion changing byte 0x89.",
    "recovered_stream_buffer_allocation": "Recovered CRT input stream buffer requests native 4096 bytes instead of losing the size at malloc.",
    "recovered_huffman_returns": "Huffman setup returns native EAX zero for bad sizes/codelengths and one on success without fabricated frame cookies.",
    "recovered_huffman_count_bytes": "Huffman histogram uses 17 contiguous 32-bit count entries matching native zeroed stack storage.",
    "recovered_dynamic_huffman_returns": "Dynamic block returns preserve failure from all three Huffman builders and native success one.",
    "recovered_dynamic_code_length_bytes": "Dynamic block code-length scratch uses the original contiguous 19-byte array.",
    "recovered_png_inflate_context_bytes": "PNG decompression uses one 4096-byte native context with output pointers at offsets 24/32/40 and Huffman tables at 52/2072.",
    "recovered_inflate_length_aliases": "Inflater length symbols index native table windows at 0x26fcd0 and 0x26fd50 with the original 257-symbol bias.",
    "recovered_png_status_returns": "PNG metadata, decode and filter paths return native success/failure without fabricated stack cookies.",
    "recovered_joystick_startup_calls": "SDL mapping stream, ownership, device indices, joystick handles and capability calls use recovered typed arguments.",
    "recovered_audio_startup_calls": "Playback/capture enumeration, semaphore/thread creation, spec pointers, callback addresses and device pause calls retain native SDL arguments.",
    "recovered_audio_spec_bytes": "Desired and obtained SDL audio specs are contiguous 32-byte objects with native callback/userdata offsets.",
    "removed_hrtf_cookie_artifact": "HRTF initializer has a void C return and preserves its original data-processing body without a fabricated stack cookie check.",
    "recovered_matrix_multiply": "Matrix multiplication preserves native scalar arithmetic order, overlapping inputs, unaligned output stores and incidental right+48 RAX without a fabricated cookie.",
    "recovered_startup_status_text_calls": "Generating/connecting status calls recover native float coordinates, center flag and four white color components; remaining legacy text callers still need their stack arguments.",
    "recovered_text_emission_gl_calls": "Font vertex emission restores GL stride/offset, normalized flag, index pointer, typed matrix/color pointers and native call signatures.",
    "recovered_text_formatter_scratch_bytes": "Slash formatter uses a contiguous 1024-byte native conversion buffer instead of a split 16-byte SIMD local.",
    "recovered_text_formatter_return": "Slash formatter returns native emitted-byte count instead of a fabricated cookie result.",
    "recovered_sdl_swap_window_calls": "All eight native SDL buffer presentations pass the full stored window handle through the recovered thunk.",
    "recovered_shader_record_status_returns": "Shader compilation returns the original record status through its cookie epilogue.",
    "recovered_item_inertia_unordered_branches": "Y/Z dimension comparisons preserve native unordered fallback branches.",
    "recovered_item_inertia_storage_pointers": "Four item-inertia pointers address recovered shared storage instead of the original fixed image base.",
    "recovered_item_initializer_void_return": "Item setup has one native caller that discards RAX; recovered void initialization removes a fabricated cookie call.",
    "recovered_itemset_storage_aliases": "Five item-set rotation arguments address relocated shared storage using the native 116-byte record stride.",
    "recovered_find_buffer_objects": "Find-first locale and conversion buffers have contiguous native layouts.",
    "recovered_find_handle_returns": "Both find-first wrappers return full native search handles or -1.",
    "recovered_find_time_return": "FILETIME conversion forwards the native epoch result or -1.",
    "recovered_find_conversion_abi": "Find conversion preserves code page, allocation size and capacity slots.",
    "recovered_timezone_startup_initializer": "The original registered timezone initializer runs before the client entry point.",
    "recovered_timezone_capacity_slots": "Timezone name conversion capacity slots have defined high bits.",
    "recovered_local_time_epoch_arithmetic": "Local time conversion restores native 64-bit calendar arithmetic and DST result selection.",
    "recovered_timezone_void_return": "Timezone setup no longer returns a fabricated cookie check; both callers discard RAX.",
    "recovered_timezone_environment_allocation": "Optional TZ environment storage uses the recovered allocator argument ABI.",
    "recovered_find_next_locale_object": "Find-next uses a contiguous 32-byte native locale object.",
    "recovered_find_next_statuses": "Find-next wrappers preserve native zero/-1 EAX statuses and conversion failure.",
    "recovered_find_close_handle": "FindClose receives the complete native search handle.",
    "recovered_sorter_callback_abi": "Quicksort comparators receive the two native pointer arguments.",
    "recovered_sorter_void_returns": "Both quicksort exits are void; all recovered consumers discard RAX.",
    "recovered_generation_void_return": "Both original world-generation callers leave RAX unused through their next call; the epilogue is void.",
    "recovered_itemset_loader_void_return": "The sole item-set loader caller discards RAX; the loader's cookie epilogue is void.",
    "recovered_mesh_storage_aliases": "Mesh builder cursors address relocated shared storage with native strides.",
    "recovered_mesh_position_bytes": "The mesh position passed to shape construction is a contiguous 12-byte object.",
    "recovered_mesh_index_bytes": "The mesh helper receives all eight native vertex indices in one 32-byte object.",
    "recovered_model_path_cursors": "CMO filename scans stay within the native filename object.",
    "recovered_model_void_returns": "CMO loader cookie epilogues return void.",
    "checked_model_return_callers": "All 40 original CMO loader callers discard RAX before their next call.",
    "recovered_procedural_position_bytes": "Procedural shape calls share one native 12-byte position.",
    "recovered_procedural_matrix_bytes": "Procedural shape calls share one native nine-float matrix.",
    "recovered_procedural_void_return": "Both original procedural shape callers discard RAX.",
    "recovered_quad_position_bytes": "Quad construction receives one native 12-byte position.",
    "recovered_quad_matrix_bytes": "Quad construction receives one native nine-float matrix.",
    "recovered_quad_void_return": "The original sole quad-builder caller discards RAX.",
    "recovered_quad_extrusion_void_return": "Both native extrusion consumers overwrite RAX after the call.",
    "recovered_quad_extrusion_position_bytes": "Both extrusion callers pass contiguous three-word position objects.",
    "recovered_layered_position_bytes": "All layered construction calls share one three-word position.",
    "recovered_layered_matrix_bytes": "All layered construction calls share one nine-word matrix.",
    "recovered_layered_void_return": "The original layered builder caller discards RAX.",
    "recovered_branch_position_bytes": "Both branching model positions are contiguous three-word objects.",
    "recovered_branch_axis_bytes": "Branching model rotation receives its complete three-float axis.",
    "recovered_branch_matrix_bytes": "Both branching model matrices are contiguous nine-word objects.",
    "recovered_branch_void_return": "The original branching model caller discards RAX.",
    "recovered_item_header_bytes": "The ITM header read uses its native four-byte stack object.",
    "recovered_character_void_returns": "Both character loader cookie epilogues are void.",
    "checked_character_return_callers": "All twelve original character loader consumers discard RAX.",
    "recovered_body_signed_indices": "Body texture indices retain native signed 32-bit arithmetic and extension.",
    "recovered_png_unaligned_stores": "Eight PNG SIMD writes preserve original MOVDQU semantics on unaligned rows.",
    "recovered_immediate_geometry_gl_arguments": "Immediate geometry supplies original attribute stride/offsets and null element offset.",
    "render_cookie_repairs": "Render setup and atlas return exclude uninitialized compiler-cookie artifacts; native atlas caller discards RAX.",
    "recovered_texture_slot_returns": "Native texture packer returns the saved slot on success and EAX=0xFFFFFFFF on failure.",
    "recovered_sound_load_calls": "Pinned SDL file, WAV decoder and release thunks restore path, ownership and output arguments.",
    "recovered_sound_spec_objects": "Native WAV output uses one 32-byte AudioSpec with frequency at 0 and channels at 6.",
    "recovered_integer_locale_objects": "Native integer scanner uses contiguous 32-byte LocaleUpdate storage, with locale pair at offset 8.",
    "recovered_sound_unaligned_gain_stores": "Original procedural sound gain loop uses four MOVDQU stores; preserve wrapping packed 16-bit addition at unaligned output addresses.",
    "recovered_sound_float_coefficients": "Native procedural sound MULSS constants remain single precision; decimal double promotion changes PCM samples.",
    "recovered_building_void_returns": "Both SBB loader exits share the native cookie epilogue; all five direct callers discard RAX. Full loader comparisons cover valid versions, header-only and full reads.",
    "recovered_building_catalog_find_object": "Native catalog find-data begins at rsp+0x30 with filename at rsp+0x54; preserve one 296-byte aligned object through find-first and find-next.",
    "recovered_building_catalog_void_return": "Both native catalog callers leave RAX unused through the next GL call; omit the uninitialized exported cookie result.",
    "recovered_master_connect_returns": "Native HTTP master exchange returns EAX zero on failure and one after successful IP/port/list parsing; cookie helper is not the result.",
    "recovered_master_sockaddr_object": "Native connect receives one 16-byte sockaddr with address at offset four; preserve object storage.",
    "recovered_master_fdset_copy": "Original MOVUPS loop copies 520 bytes of a Win64 fd_set without alignment requirements.",
    "recovered_master_scan_pointers": "Native sscanf arguments use full-width R8 pointers to the stack integer, not 32-bit truncated addresses.",
    "recovered_steam_context_cache_objects": "Five native 24-byte Steam caches contain callback/counter/interface at offsets 0/8/16; original callbacks and bundled context API pass cache/cross-cache comparisons.",
    "recovered_steam_friend_id_storage_aliases": "All three native friend callers calculate image base + 0x429F8FE0 + 528*index; store through rebuilt dword global index 278384989 + 132*index.",
    "recovered_sdl_event_object": "Native event union starts at rsp+0x28 and occupies 56 bytes; type/subtype/scancode/symbol/modifier use offsets 0/12/16/20/24.",
    "recovered_sdl_event_calls": "Native SDL poll receives its event object, and resize/restore/fullscreen operations receive the real window and output/size/flag arguments.",
    "recovered_event_pump_void_return": "The sole native event-pump caller discards RAX; native cookie epilogue is void.",
    "recovered_master_auth_void_returns": "Three master H/I authentication exits are void; original cookie setup, epilogue and sole caller are pinned against the client binary.",
    "recovered_main_menu_mouse_calls": "Main menu practice path sets relative mode and supplies the original two signed mouse-coordinate output pointers.",
    "recovered_main_menu_signed_mouse_outputs": "Native CVTDQ2PS converts both signed SDL mouse coordinates to float; preserve negative coordinates.",
    "recovered_main_menu_void_return": "Main menu native saved cookie is checked in a void epilogue; the sole caller jumps directly to the common menu continuation.",
    "recovered_frame_clear_color_call": "The main frame calls glClearColor with four float zeros from native XMM9, rather than fabricated integer register locals.",
    "recovered_frame_blit_arguments": "Native framebuffer blitting uses ten arguments; recover source size, centered destination rectangle, color mask and nearest filter.",
    "recovered_terrain_raycast_results": "Native COMISS branches to EAX=1 for a distance below one; exhausted/out-of-bounds traversal returns EAX=0.",
    "recovered_terrain_raycast_temporary_groups": "Restore ten contiguous native direction/grid/vector/normal/triangle temporary groups for indexed writes and three-float call arguments.",
    "recovered_scene_raycast_result": "Native COMISS/SETB returns the closest-hit Boolean in EAX before the security-cookie check; preserve unordered behavior.",
    "recovered_spatial_audio_void_return": "Native spatial audio updater ends with a compiler cookie check; the caller discards RAX and the recovered C function returns void.",
    "recovered_spatial_audio_vector_storage": "Native rsp+0x48/rsp+0x50 temporary is a contiguous three-float vector, also reused for the eight-slot loop count.",
    "recovered_spatial_audio_listener_bits": "MOVSS copies listener Y bits to its global; preserve float bits instead of converting to unsigned integer.",
    "recovered_spatial_audio_unaligned_store": "Native MOVUPS compacts the five-DWORD sound list without requiring 16-byte alignment.",
    "recovered_spatial_audio_float_constants": "Two native MULSS constants require float literals to retain single-precision multiplication and rounding.",
    "recovered_audio_buffer_result": "PCM wrapper returns EAX=-1 when no frames are available, otherwise the dispatch result, before its compiler cookie check.",
    "recovered_audio_buffer_scratch_pointer": "Native RSP subtraction supplies a distinct PCM scratch buffer; do not write through the scalar loop counter's address.",
    "recovered_audio_buffer_sample_count": "Native IMUL computes a signed 32-bit channel-times-frame count before widening the allocation extent.",
    "recovered_audio_buffer_pcm_precision": "Original PCM scaling is MULSS by the exact float 2^-15; use a float literal.",
    "recovered_audio_resample_float_result": "Native MOVSS returns the resampler's saved float through XMM0 before its compiler cookie check.",
    "recovered_audio_resample_scratch_pointers": "Restore both allocated buffers and pass the first scratch pointer to the PCM callback rather than a scalar local.",
    "recovered_audio_resample_float_scale": "Native PCM resampling scale is single-precision 2^-15 before channel division.",
    "recovered_audio_resample_sample_extent": "The 16kHz path widens a signed 32-bit tripled sample count to obtain its allocation extent.",
    "recovered_audio_resample_caller_results": "The analysis caller accumulates the first XMM0 resampler result and stores the second; replace uninitialized exported register locals with explicit call results.",
    "recovered_audio_window_scratch_pointers": "Native analysis allocates two 3840-byte FFT buffers and two 960-byte scratch buffers; bind their exported pointers to those allocations.",
    "recovered_audio_window_void_result": "Analysis updates caller-owned state and returns void; the old export fabricated a compiler-cookie return.",
    "recovered_codec_scratch_pointers": "Native encoder uses three separate RSP allocations for float input, PCM input and transition history.",
    "recovered_codec_history_destination": "Native history copy uses the first allocated buffer; copying over the scalar frame header corrupts the output pointer.",
    "recovered_audio_filter_void_returns": "Native biquad and coefficient wrapper update samples and state; both return void rather than checking fabricated cookie locals.",
    "recovered_audio_filter_float_constants": "Native coefficient scale and tiny state bias are float constants consumed by MULSS/ADDSS.",
    "recovered_audio_filter_wrapped_coefficients": "Coefficient formation uses native 32-bit wrapping arithmetic; express it with unsigned operations before reinterpreting the signed result.",
    "recovered_celt_scratch_pointers": "Seventeen native CELT RSP allocations have separate pointer stores rather than aliases to a scalar local.",
    "recovered_celt_direct_scratch_arguments": "Native scratch clearing, normalization and table calls use the allocated buffer pointer.",
    "recovered_celt_prefilter_scratch": "Native prefilter uses separate history and downsample allocations; its channel pointers and downsample call refer to those allocations.",
    "recovered_codec_result_exits": "Native encoder returns EAX packet length or distinct negative errors, rather than a cookie-check result.",
    "recovered_codec_packet_padding_failure": "Native packet-padding failure returns -3 before the final capacity result.",
    "recovered_scene_raycast_temporary_groups": "Restore the contiguous 28-byte hit record and two three-float broadphase bounds from native stack offsets.",
    "recovered_scene_raycast_scratch_layout": "Native scratch starts at rsp+0x70 and its second count lies at DWORD index 12289; recover the 12292-word extent.",
    "recovered_scene_raycast_unaligned_stores": "Two original MOVUPS hit stores allow arbitrary destination alignment; memcpy preserves the relocated global's alignment tolerance.",
    "recovered_mesh_void_returns": "The original sole mesh-builder caller discards RAX; both cookie epilogues are void.",
    "recovered_itemset_scanner_void_return": "The sole native scanner caller discards RAX; the void scanner removes a fabricated cookie return.",
    "recovered_geometry_unaligned_loads": "Five convex-weight vector reads preserve original MOVUPS alignment tolerance.",
    "recovered_geometry_unaligned_stores": "Five convex-weight vector writes preserve original MOVUPS alignment tolerance.",
    "recovered_vehicle_initializer_void_return": "Vehicle initialization has one caller that discards RAX; its recovered void return removes a fabricated cookie check.",
    "recovered_train_storage_aliases": "Two train geometry pointers address relocated vehicle storage instead of fixed original-image addresses.",
    "recovered_vehicle_storage_aliases": "Six vehicle-loader fields and read cursors address relocated shared storage instead of original-image pointers.",
    "recovered_vehicle_loader_void_return": "Reviewed vehicle-loader callers use initialization for side effects; the void interface removes a fabricated cookie return.",
    "recovered_world_setup_vector_stores": "Thirteen world-setup default copies preserve original unaligned writes.",
    "recovered_item_unaligned_stores": "All 23 item-type vector writes preserve pinned native MOVDQU/MOVUPS alignment tolerance.",
    "recovered_generation_unaligned_stores": "Three world-generation defaults preserve native MOVDQU alignment tolerance.",
    "recovered_camera_resolution_vec2": "Six inverse-resolution uniform uploads use a contiguous native vec2.",
    "recovered_camera_shader_cache_result": "Shader cache preserves native empty-log, open-failure and close return branches.",
    "recovered_file_formatter_context_bytes": "File formatting uses the full native contiguous 1144-byte processor context.",
    "recovered_putc_signed_countdown": "Native putc tests the sign of its decremented 32-bit buffer count before writing or flushing.",
    "recovered_file_formatter_result": "File formatter forwards zero-extended native EAX after cleanup.",
    "recovered_codec_option_slot_bytes": "Codec option varargs retain their original eight-byte slots instead of advancing a byte-oriented va_list.",
    "recovered_codec_option_getters": "Codec getters load full pointer-sized arguments and preserve native output storage.",
    "recovered_codec_option_status_returns": "Codec dispatch returns zero-extended EAX status or native invalid-argument minus one, without fabricated cookies.",
    "reviewed_full_width_pointer_stores": "Compiler-diagnosed pointer-to-uint64 assignments use uintptr_t; 1,271 sites produce identical baseline/cast objects across 389 sections and all relocations, without narrowing destinations.",
    "recovered_byte_fill_calls": "Byte-fill destination is a void * boundary; the internal word cursor keeps its original two-byte scale. Native output, return and guard-page comparisons cover these helpers.",
    "recovered_string_compare_calls": "String comparison uses two byte-string pointer boundaries and uintptr_t address differences; native signed -1/0/+1 returns retained.",
    "recovered_unaligned_fill_stores": "Eleven SSE stores use unaligned intrinsics as required by the original MOVDQU paths; aligned non-temporal stores retain their checked alignment.",
    "recovered_fill_movq_constructions": "Native MOVQ/punpcklbw uses eight replicated input bytes; the decompiler's four-byte MOVD construction zeroed the upper half of each block.",
    "recovered_rep_fill_returns": "REP STOSB returns the destination from native R11; the sole C caller passes that destination explicitly, replacing an uninitialized local return.",
    "recovered_startup_argument_bridge": "Pinned Windows entry preserves SDL calloc count/size, UTF-16LE to UTF-8 conversion, main-ready notification and argument cleanup; verified with the actual game SDL DLL.",
    "recovered_startup_unaligned_stores": "Six startup vector destinations match original RIP-relative MOVDQU stores; explicit storeu preserves their unaligned semantics.",
    "recovered_directory_buffer": "Original getdrive uses a 261-element UTF-16 stack buffer, not the exported two-byte scalar.",
    "recovered_directory_allocator_abi": "Original directory long-path allocator receives capacity in RCX and two-byte width in RDX; scoped typed allocator retains recovered CRT heap policy.",
    "recovered_directory_drive_return": "Original EDI drive value is returned through EAX across the cookie check; ASCII lowercase conversion, long paths and failures match native fixtures.",
    "recovered_encoded_api_cache_startup": "Original registered CRT initializer fills 34 API cache entries with encoded null (_security_cookie) before the Windows game entry.",
    "recovered_path_buffer_layouts": "Native CRT buffers have 48-byte contiguous layout; locale-update is 32 bytes. Two conversion buffers and the getcwd caller now use actual objects.",
    "recovered_path_return_flow": "Native EBX retains each conversion stage result, then EAX returns it across the cookie check; no uninitialized frame-cookie artifact is returned by C.",
    "recovered_path_conversion_abi": "Native code-page, multibyte/wide Win32 arguments and dynamic allocation sizes restored; complete native chain and getcwd caller compared with controlled CRT boundaries.",
    "recovered_chdir_buffer_objects": "Directory-change and dependent narrow/wide wrappers now use contiguous 48-byte CRT buffers and 32-byte locale objects instead of split locals.",
    "recovered_chdir_returns": "Native directory-change and current-directory wrappers return EBX/EAX success/failure, not an uninitialized frame-cookie result.",
    "recovered_chdir_conversion_arguments": "SetCurrentDirectory/SetEnvironmentVariable and current-directory conversion arguments and growth allocations restored from native register flow.",
    "recovered_process_heap_startup": "Original registered process-heap initializer executes before the game entry, establishing the heap used by recovered CRT allocations.",
    "recovered_fread_buffer_declarations": "Native 29-byte fread wrapper leaves RCX unchanged; the public buffer type is void *, with no vector pointer arithmetic introduced.",
    "recovered_fread_buffer_boundaries": "Caller buffer addresses cross the void * boundary through uintptr_t, preserving the native 64-bit RCX argument without altering caller address calculations.",
    "recovered_fread_stream_boundaries": "Caller stream values cross the FILE * boundary through uintptr_t, preserving the native 64-bit R9 argument; CRT stream layout/operation remains separate recovery work.",
    "recovered_native_assembly_definitions": "41 C definitions replaced by relocatable original instructions; 7,913 instruction boundaries, 1,346 relative fixups and 47 original unwind entries checked in the linked PE; whole-client behavior remains unverified.",
    "recovered_ascii_comparison_tails": "ASCII fold loop preserves byte loads, bounded count and raw EAX result; locale and invalid-input branches remain unverified.",
    "recovered_exception_filter_tails": "Original DLL filter forwards only exception E06D7363 to the existing CRT filter body; complete exception handling remains unverified.",
    "recovered_time_object_declarations": "The C locale time object is a 704-byte structure with 87 relocated string pointers and one packed scalar slot; full locale behavior remains unverified.",
    "recovered_native_trap_sites": "63 JUMPOUT destinations checked as native INT3 instructions; surrounding failure and exception paths remain unverified.",
    "recovered_external_tail_calls": "Two SDL import tail calls recover RCX inputs; chained free thunk targets existing local body. Complete surrounding behavior remains unverified.",
    "recovered_codec_declarations": "129 declarations use shared read-only original codec storage with 73 internal DIR64 pointer relocations; complete decoder behavior remains unverified.",
    "recovered_fmod_x87_tails": "Native FPREM iteration and C2 status test recovered as one x87 block; full fmod SSE and error paths remain unverified.",
    "recovered_crt_thunk_bindings": "Four native rel32 tail-jump targets and padding checked against pinned binary; calls bind existing local bodies. Complete CRT target behavior remains unverified.",
    "recovered_funclet_entries": "Two callback entries compared with original machine code over 8192 inputs, including all four register arguments and returned RAX.",
    "reviewed_scalar_word_loads": "Word loads and their cleared upper lanes checked against MOVSS/MOVD.",
    "reviewed_scalar_float_casts": "Scalar float construction checked; rounding modes and MXCSR compared with machine conversion.",
    "reviewed_va_cursor_copies": "Windows x64 pointer cursor layout checked; independent cursor consumption tested.",
    "reviewed_additional_byte_displacements": "Byte offsets checked against SUB and indexed byte loads/stores.",
    "recovered_definition_forwards": "Declarations copied from recovered definitions; underlying ABI recovery remains open.",
    "reviewed_address_arithmetic": "Preserve unsigned 64-bit address ADD/SUB; underlying storage and indices need recovery.",
    "recovered_locale_arguments": "Missing R9 locale inputs restored at fourteen inspected call sites.",
    "reviewed_byte_differences": "Byte displacement subtraction preserved without incompatible C pointer types.",
    "recovered_import_slot_calls": "Import thunk addresses and Winsock argument/return signatures inspected.",
    "reviewed_qword_vector_casts": "MOVQ construction preserves low 64 bits and clears upper 64 bits.",
    "reviewed_vector_storage_copies": "Full vector bytes preserved across integer storage and vector views.",
    "reviewed_x64_flag_expressions": "Reviewed 32-bit subtraction overflow and 64-bit shift carry compared with hardware flags.",
    "reviewed_final_expression_sites": "Reviewed lane loads, full stack-vector loads, raw byte differences, missing arguments, store widths and nested return reads.",
    "paired_double_return_casts": "Paired-double return bits checked against helper and caller instructions; verify complete callers.",
    "reviewed_movss_casts": "Seven memory MOVSS sites inspected; bit patterns and upper-lane clearing tested; verify complete callers.",
    "reviewed_byte_displacements": "Five SUB plus byte-load sites inspected; positive and negative offsets tested; verify storage recovery.",
    "unknown_floats": "Replace marked zero values with original data or computation.",
    "unknown_initializers": "Recover original initializer bytes and lifetime.",
    "const_stripped": "Check writes before deciding whether inferred const was wrong.",
    "register_annotations": "Recover register-bound arguments and returns; removal loses ABI data.",
    "asm_wrapped": "Assemble and compare the wrapped instructions and register effects.",
    "vector_loads": "Check original load width, alignment, and upper lanes.",
    "vector_moves": "Check original move width, zero extension, and upper lanes.",
    "renamed_system_symbols": "Check that local bodies and imported APIs remain distinct.",
    "semantic_renames_applied": "Confirm each name is backed by behavior and address evidence.",
    "callmods_stripped": "Recover any nonstandard internal calling conventions.",
    "noreturn_preserved": "Check the original control flow and that the attribute matches it.",
    "asm_cpuid": "Verify instruction inputs, outputs, and clobbers.",
    "asm_xgetbv": "Verify instruction inputs and returned register values.",
    "recovered_cpu_register_scopes": "Per-call local registers replace shared CPU scratch globals; original XOR ECX setup restored.",
    "restored_cpuid_subleaf_inputs": "Reviewed CPUID ECX=0 setup; preserve queried leaf and output bits.",
    "restored_xgetbv_indices": "Reviewed XGETBV ECX=0 setup; remaining CPU dispatch integration needs verification.",
    "recovered_cpu_probe_entries": "Four entries compared with original CPU instructions, including both math feature state writes.",
    "recovered_float_double_coercions": "Three CVTSS2SD/CVTPS2PD promotions restored; bits and MXCSR compared with native conversion.",
    "recovered_pe_readonly_entry": "PE header widths, relocated image base and section write flag checked against original entry.",
    "recovered_shader_source_addresses": "29 LEA operands restored as source addresses; complete shader loading remains unverified.",
    "recovered_crt_spelling_tables": "Sixteen native pointer slots share checked relocated backing; all slots and spelling bytes compared in a linked fixture.",
    "recovered_angle_pair_preparation": "Small-angle and NaN paths compared with original SIMD instructions over 65536 cases including MXCSR; large-angle packed dispatch remains unverified.",
    "recovered_float_lane_call_containers": "135 third-argument bit casts retain the native XMM2 float word; inferred double declarations remain compatibility containers.",
    "recovered_additional_float_lane_containers": "61 reviewed coordinate/size/angle casts retain the original float words; XMM0/1/2 moves compared in isolated fixtures.",
    "recovered_final_float_lane_containers": "Three XMM2 float words follow CVTSS2SD at 0821d3 and 08925c; other drawing behavior remains unverified.",
    "removed_phantom_constant_coercions": "Four constant coercions belonged to unused native input registers or overwritten scratch locals.",
    "recovered_double_angle_preparation": "65536 small-double-angle/NaN SIMD and MXCSR comparisons against native COMISD/JB path.",
    "recovered_packed_double_inputs": "Both packed polynomial helpers receive full 128-bit angle pairs; complete polynomial/range-reduction accuracy remains unverified.",
    "restored_startup_tls_arguments": "Native startup XOR R8D restores the callback's third null argument; complete startup remains unverified.",
    "recovered_startup_initializer_aliases": "Four aliases share the checked contiguous C/C++ initializer storage, including eight symbolic function relocations.",
    "recovered_startup_initializer_control": "Native initializer return and final thunk result restored; full runtime configuration remains unverified.",
    "recovered_startup_zero_thunks": "Native thunk target is XOR EAX,EAX;RET; isolated comparison checks the returned zero.",
}


def sha256(path):
    return hashlib.sha256(path.read_bytes()).hexdigest()


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--preparation", type=Path,
                        default=PROJECT / "work/rebuild/client/preparation.json")
    parser.add_argument("--compiler-report", type=Path,
                        default=PROJECT / "reports/client-recompile-20260930/client-prepared.json")
    parser.add_argument("--output", type=Path,
                        default=PROJECT / "reports/preparation-audit/client.md")
    args = parser.parse_args()
    prep = json.loads(args.preparation.read_text(encoding="utf-8"))
    from client_sources import read_client_source
    prepared_source = read_client_source()
    prepared_sha = hashlib.sha256(prepared_source).hexdigest()
    compilation = json.loads(args.compiler_report.read_text(encoding="utf-8"))
    if any(sha256(Path(path)) != digest for path, digest in compilation['local_input_sha256'].items()):
        raise RuntimeError("Compiler report belongs to different C module inputs")
    from prepare_rebuild import Language, Parser, nodes, tree_sitter_c
    parsed = Parser(Language(tree_sitter_c.language())).parse(prepared_source)
    parse_errors = [node for node in nodes(parsed.root_node)
                    if node.type == "ERROR" or node.is_missing]
    edits = prep["edits"]
    counts = Counter(item["kind"] for item in edits)
    unclassified = sorted(set(counts) - set(REVIEW_KINDS))
    if unclassified:
        raise RuntimeError("Classify new edit kinds before auditing: " + ", ".join(unclassified))

    lines = ["# Windows Client Preparation Audit", "",
             "Current module fixture view SHA256: `" + prepared_sha + "`.",
             "Compiler errors: " + str(compilation["diagnostic_counts"].get("error", 0)) + ".", "",
             "The counts describe generated edits, not equivalent behaviors. "
             "Every category below needs instruction-level or differential evidence.", "",
             "## Source parse and unresolved expressions", "",
             "- Input tree has parse errors: `" + str(bool(prep["input_has_parse_errors"])).lower() + "`.",
             "- Prepared source parse errors: `" + str(len(parse_errors)) + "`.",
             "- Float initializer words recovered from the pinned binary: `" +
             str(prep.get("recovered_float_bits", 0)) + "`.",
             "- Skipped overlapping edits: `" + str(len(prep["skipped"])) + "`."]
    for item in prep["skipped"]:
        lines.append("  - Input line %s: %s (%s)." %
                     (item.get("line", "?"), item.get("kind", "?"), item.get("reason", "?")))
    if parse_errors:
        lines += ["", "First prepared-source parser errors (line, column, node):", ""]
        for node in parse_errors[:25]:
            lines.append("- `%s:%s` `%s`." %
                         (node.start_point.row + 1, node.start_point.column + 1,
                          node.type if not node.is_missing else "missing " + node.type))
    lines += ["", "## Individual edit queue", "",
              "| Edit kind | Count | Evidence required |", "| --- | ---: | --- |"]
    for kind, count in counts.most_common():
        lines.append(f"| `{kind}` | {count} | {REVIEW_KINDS[kind]} |")
    lines += ["", "## Preprocessing and generated-data queue", "",
              "| Counter | Count | Evidence required |", "| --- | ---: | --- |"]
    for field, instruction in COUNTER_FIELDS.items():
        lines.append(f"| `{field}` | {prep.get(field, 0)} | {instruction} |")
    lines += ["", "## First concrete review targets", ""]
    for kind in ("variadic_fix", "vector_move_assign", "data_object_scalar",
                 "prototype_drop", "address_cast"):
        entries = [item for item in edits if item["kind"] == kind]
        if entries:
            lines.append("- `%s`: input lines %s." %
                         (kind, ", ".join(str(item.get("line", "?")) for item in entries[:5])))
    lines += ["", "The next audit step is to map those input lines to their "
              "original function addresses and inspect the corresponding machine code.", ""]
    output = args.output.resolve()
    output.parent.mkdir(parents=True, exist_ok=True)
    output.write_text("\n".join(lines), encoding="utf-8")
    print(f"Audited {len(edits)} edit records and {sum(prep.get(k, 0) for k in COUNTER_FIELDS)} "
          f"counter events: {output}")


if __name__ == "__main__":
    main()
