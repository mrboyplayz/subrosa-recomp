/* Address: 0x1400f279a | Name: qsort | Size: 6 bytes */
// attributes: thunk
void __cdecl qsort(
        void *Base,
        size_t NumOfElements,
        size_t SizeOfElements,
        _CoreCrtNonSecureSearchSortCompareFunction CompareFunction)
{
  __imp_qsort(Base, NumOfElements, SizeOfElements, CompareFunction);
}

