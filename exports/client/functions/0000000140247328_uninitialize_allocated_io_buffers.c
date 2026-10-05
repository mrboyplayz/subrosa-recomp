/* Address: 0x140247328 | Name: uninitialize_allocated_io_buffers | Size: 91 bytes */
char uninitialize_allocated_io_buffers()
{
  free_base(*(void **)&dword_140404A6C[19065659]);
  *(_QWORD *)&dword_140404A6C[19065659] = 0;
  free_base(*(void **)&dword_140404A6C[19065661]);
  *(_QWORD *)&dword_140404A6C[19065661] = 0;
  free_base(*(void **)&dword_140404A6C[19065839]);
  *(_QWORD *)&dword_140404A6C[19065839] = 0;
  free_base(*(void **)&dword_140404A6C[19065841]);
  *(_QWORD *)&dword_140404A6C[19065841] = 0;
  return 1;
}

