/* File-scope tag declarations; prototype-scope tags die with their list. */
struct WSAData;
struct _CONTEXT;
struct _DISPATCHER_CONTEXT;
struct _EXCEPTION_POINTERS;
struct _EXCEPTION_RECORD;
struct _FILETIME;
struct _IMAGE_RUNTIME_FUNCTION_ENTRY;
struct _IMAGE_SECTION_HEADER;
struct _STARTUPINFOW;
struct _TEB;
struct _exception;
struct _finddata64i32_t;
struct hostent;
struct servent;
struct sockaddr;
struct timeval;
union _SLIST_HEADER;
/* Referenced but undeclared type names; layouts are recovered separately. */
typedef struct charNode charNode;
/* Referenced data symbols the export never declares; sized by
   the Hex-Rays name prefix. Contents are pending type recovery. */
extern float flt_16E18CA40;
extern float flt_16E18CA48;
extern unsigned __int64 qword_16E18CA44;
extern unsigned char unk_16DDCBA40[1];
extern unsigned char unk_1838B3B18[1];
extern unsigned char unk_18F7174CC[1];
extern unsigned char unk_18F7184D4[1];
/* Declarations copied from address-resolved function definitions. */
int         vfprintf_l(FILE *     Stream,      char *     Format,      _locale_t Locale, va_list ArgList);
int         vsnprintf_sr(char *     Buffer,      size_t BufferCount,      char *     Format, va_list ArgList);
__int64            charNode__raw_length(charNode *this);
void         sleep(unsigned int Duration);
void         sleep_0(unsigned int Duration);
BOOL           QueryPerformanceCounter_sr(LARGE_INTEGER *lpPerformanceCount);
int swprintf_sr(wchar_t *     Buffer,      size_t BufferCount,      wchar_t *     Format, ...);
void            unknown_libname_1(_QWORD *a1, __int64 a2, __int64 a3);
__time64_t         time64(__time64_t *Time);
int           _WSAFDIsSet_sr(SOCKET fd, fd_set *a2);
int           bind_sr(SOCKET s,      struct sockaddr *name, int namelen);
int           closesocket_sr(SOCKET s);
int           connect_sr(SOCKET s,      struct sockaddr *name, int namelen);
int           ioctlsocket_sr(SOCKET s, int cmd, u_long *argp);
int           getsockopt_sr(SOCKET s, int level, int optname, char *optval, int *optlen);
u_long           htonl_sr(u_long hostlong);
u_short           htons_sr(u_short hostshort);
unsigned int           inet_addr_sr(     char *cp);
u_long           ntohl_sr(u_long netlong);
u_short           ntohs_sr(u_short netshort);
int           recv_sr(SOCKET s, char *buf, int len, int flags);
int           recvfrom_sr(SOCKET s, char *buf, int len, int flags, struct sockaddr *from, int *fromlen);
int           select_sr(int nfds, fd_set *readfds, fd_set *writefds, fd_set *exceptfds,      struct timeval *timeout);
int           send_sr(SOCKET s,      char *buf, int len, int flags);
int           sendto_sr(SOCKET s,      char *buf, int len, int flags,      struct sockaddr *to, int tolen);
SOCKET           socket_sr(int af, int type, int protocol);
struct hostent *          gethostbyname_sr(     char *name);
int           gethostname(char *name, int namelen);
struct servent *          getservbyname_sr(     char *name,      char *proto);
int           WSAStartup(WORD wVersionRequested, LPWSADATA lpWSAData);
int           WSACleanup();
BOOL            _raise_securityfailure(struct _EXCEPTION_POINTERS *ExceptionInfo);
void         __noreturn _report_gsfailure(uintptr_t StackCookie);
void __noreturn _report_rangecheckfailure_sr();
void            __noreturn _report_securityfailure_sr(unsigned int a1);
void            __noreturn _report_securityfailureEx(unsigned int a1, unsigned int a2, __int64 a3);
struct _IMAGE_RUNTIME_FUNCTION_ENTRY *           capture_current_context_sr(PCONTEXT ContextRecord);
struct _IMAGE_RUNTIME_FUNCTION_ENTRY *           capture_previous_context_sr(PCONTEXT ContextRecord);
__int64            _GSHandlerCheck(__int64 a1, __int64 a2, __int64 a3, __int64 a4);
__int64            _GSHandlerCheckCommon_sr(__int64 a1, __int64 a2);
unsigned __int64            alloca_probe();
__m128            _libm_sse2_sincos__sr(double a1, __int64 a2, double a3);
__m128            _libm_sse2_sincosf__sr(double a1, __int64 a2, double a3);
void         _security_check_cookie(uintptr_t StackCookie);
int         _isa_available_init();
__int64            pre_c_initialization();
__int64            post_pgo_initialization();
void            pre_cpp_initialization();
__int64 _acrt_uninitialize_tmpfile();
__int64            __scrt_common_main_seh();
errno_t            __scrt_narrow_argv_policy__configure_argv(charNode *a1);
void            __noreturn invoke_main();
void            __scrt_file_policy__set_commode();
void            __scrt_file_policy__set_fmode();
__int64 start();
__m128            _sse2_sin2_sr(double a1);
__m128            _sse4_sin2_sr(double a1);
__m128            _sse2_sinf4_sr(double a1, __int64 a2, __int64 a3);
__m128            _sse4_sinf4_sr(double a1, __int64 a2, __int64 a3);
struct _IMAGE_SECTION_HEADER *           find_pe_section(unsigned __int8 *     a1, unsigned __int64 a2);
bool            is_potentially_valid_image_base(char *a1);
struct _TEB *NtCurrentTeb(void);
char _scrt_acquire_startup_lock();
char _scrt_dllmain_after_initialize_c();
bool _scrt_dllmain_before_initialize_c();
char _scrt_dllmain_crt_thread_detach();
int            _scrt_dllmain_exception_filter(
        __int64 a1,
        int a2,
        __int64 a3,
        void (           *a4)(__int64, _QWORD, __int64),
        unsigned int ExceptionNum,
        struct _EXCEPTION_POINTERS *ExceptionPtr);
void _scrt_dllmain_uninitialize_c();
char _scrt_dllmain_uninitialize_critical();
char            _scrt_initialize_crt(int a1);
char            _scrt_initialize_onexit_tables(unsigned int a1);
bool            _scrt_is_nonwritable_in_current_image(__int64 a1);
_BOOL8            _scrt_release_startup_lock(char a1);
char            _scrt_uninitialize_crt(__int64 a1, char a2);
_onexit_t         onexit_sr(_onexit_t Func);
int         at_quick_exit(void (        *a1)());
int         sr_server_atexit(void (        *a1)());
unsigned __int64 _get_entropy();
void         _security_init_cookie_sr();
__int64 get_startup_file_mode_sr();
_QWORD *_scrt_initialize_default_local_stdio_options();
_BOOL8 _scrt_is_user_matherr_present();
void            _scrt_fastfail(unsigned int a1);
WORD _scrt_get_show_window_mode();
bool _scrt_is_managed_app();
LPTOP_LEVEL_EXCEPTION_FILTER _scrt_set_unhandled_exception_filter();
__int64            _scrt_unhandled_exception_filter(_QWORD *a1);
int         guard_icall_checks_enforced();
__int64            _common_ssin_cout_rare_sr(__int64 a1, float *a2);
_BOOL8 _scrt_is_ucrt_dll_in_use();
BOOL           QueryPerformanceCounter_0(LARGE_INTEGER *lpPerformanceCount);
BOOL           QueryPerformanceFrequency_sr(LARGE_INTEGER *lpFrequency);
HANDLE           GetCurrentProcess_sr();
void           GetSystemTimeAsFileTime_sr(LPFILETIME lpSystemTimeAsFileTime);
BOOL           GetProcessAffinityMask(
        HANDLE hProcess,
        PDWORD_PTR lpProcessAffinityMask,
        PDWORD_PTR lpSystemAffinityMask);
BOOL           SetProcessAffinityMask_sr(HANDLE hProcess, DWORD_PTR dwProcessAffinityMask);
void           RtlCaptureContext_sr(PCONTEXT ContextRecord);
PRUNTIME_FUNCTION           RtlLookupFunctionEntry(
        ULONG64 ControlPc,
        PULONG64 ImageBase,
        PUNWIND_HISTORY_TABLE HistoryTable);
PEXCEPTION_ROUTINE           RtlVirtualUnwind_sr(ULONG HandlerType, ULONG64 ImageBase, ULONG64 ControlPc, PRUNTIME_FUNCTION FunctionEntry, PCONTEXT ContextRecord, PVOID *HandlerData, PULONG64 EstablisherFrame, PKNONVOLATILE_CONTEXT_POINTERS ContextPointers);
LONG           UnhandledExceptionFilter_sr(struct _EXCEPTION_POINTERS *ExceptionInfo);
LPTOP_LEVEL_EXCEPTION_FILTER           SetUnhandledExceptionFilter_sr(LPTOP_LEVEL_EXCEPTION_FILTER lpTopLevelExceptionFilter);
BOOL           TerminateProcess_sr(HANDLE hProcess, UINT uExitCode);
BOOL           IsProcessorFeaturePresent_sr(DWORD ProcessorFeature);
DWORD           GetCurrentProcessId_sr();
DWORD           GetCurrentThreadId_sr();
void           InitializeSListHead_sr(PSLIST_HEADER ListHead);
BOOL           IsDebuggerPresent_sr();
void           GetStartupInfoW_sr(LPSTARTUPINFOW lpStartupInfo);
HMODULE           GetModuleHandleW_sr(LPCWSTR lpModuleName);
int         memcmp_sr(     void *Buf1,      void *Buf2, size_t Size);
void *        memcpy_sr(void *a1,      void *Src, size_t Size);
void *        memmove_sr(void *a1,      void *Src, size_t Size);
void *        memset_sr(void *a1, int Val, size_t Size);
EXCEPTION_DISPOSITION         _C_specific_handler(
        struct _EXCEPTION_RECORD *ExceptionRecord,
        void *EstablisherFrame,
        struct _CONTEXT *ContextRecord,
        struct _DISPATCHER_CONTEXT *DispatcherContext);
__int64 _current_exception_sr(void);
__int64 _current_exception_context_sr(void);
double         frexp_sr(double X, int *Y);
FILE *        _acrt_iob_func(unsigned int Ix);
errno_t         fopen_s_sr(FILE **Stream,      char *FileName,      char *Mode);
int         fclose_sr(FILE *Stream);
int         fgetc_sr(FILE *Stream);
FILE *        fopen_sr(     char *FileName,      char *Mode);
int         fputc_sr(int Character, FILE *Stream);
size_t         fread_sr(void *Buffer, size_t ElementSize, size_t ElementCount, FILE *Stream);
int         fseek_sr(FILE *Stream, int Offset, int Origin);
int         ftell_sr(FILE *Stream);
size_t         fwrite_sr(     void *Buffer, size_t ElementSize, size_t ElementCount, FILE *Stream);
int         _stdio_common_vfprintf(
        unsigned __int64 Options,
        FILE *Stream,
             char *Format,
        _locale_t Locale,
        va_list ArgList);
int         _stdio_common_vsprintf(
        unsigned __int64 Options,
        char *Buffer,
        size_t BufferCount,
             char *Format,
        _locale_t Locale,
        va_list ArgList);
int         _stdio_common_vsprintf_s(
        unsigned __int64 Options,
        char *Buffer,
        size_t BufferCount,
             char *Format,
        _locale_t Locale,
        va_list ArgList);
int         _stdio_common_vsscanf(
        unsigned __int64 Options,
             char *Buffer,
        size_t BufferCount,
             char *Format,
        _locale_t Locale,
        va_list ArgList);
int         strncmp_sr(     char *Str1,      char *Str2, size_t MaxCount);
int *        sr_server_daylight();
int *        sr_server_timezone();
__time64_t         time64_0(__time64_t *Time);
void         sr_server_tzset();
int         findclose(intptr_t FindHandle);
intptr_t         findfirst64i32(     char *FileName, struct _finddata64i32_t *FindData);
int         findnext64i32(intptr_t FindHandle, struct _finddata64i32_t *FindData);
int         toupper_sr(int C);
int         tolower_sr(int C);
void         free_sr(void *Block);
void *        malloc_sr(size_t Size);
void *        realloc_sr(void *Block, size_t Size);
void         qsort(
        void *Base,
        size_t NumOfElements,
        size_t SizeOfElements,
        _CoreCrtNonSecureSearchSortCompareFunction CompareFunction);
void         srand_sr(unsigned int Seed);
int         rand_sr();
void         sleep_1(unsigned int Duration);
void         __noreturn wassert(     wchar_t *Message,      wchar_t *File, unsigned int Line);
double         acos_sr(double X);
float         asinf_sr(float X);
double         atan2_sr(double Y, double X);
float         atan2f_sr(float Y, float X);
double         cos_sr(double X);
float         cosf_sr(float X);
double         pow_sr(double X, double Y);
double         sin_sr(double X);
int         strcmp_sr(     char *Str1,      char *Str2);
double         tan_sr(double X);
int         seh_filter_exe(unsigned int ExceptionNum, struct _EXCEPTION_POINTERS *ExceptionPtr);
void         set_app_type_sr(_crt_app_type Type);
void         _setusermatherr_sr(_UserMathErrorFunctionPointer UserMathErrorFunction);
errno_t         configure_narrow_argv(_crt_argv_mode mode);
int         initialize_narrow_environment();
char **        get_initial_narrow_environment_sr();
void         initterm_sr(_PVFV *First, _PVFV *Last);
int         initterm_e(_PIFV *First, _PIFV *Last);
void         __noreturn exit_sr(int Code);
errno_t         set_fmode(int Mode);
int *        _p___argc_sr();
char ***        _p___argv_sr();
void         cexit_sr();
void         c_exit();
void         register_thread_local_exe_atexit_callback_sr(_tls_callback_type Callback);
int         configthreadlocale(int Flag);
int         set_new_mode(int NewMode);
int *        _p__commode_sr();
int         seh_filter_dll(unsigned int ExceptionNum, struct _EXCEPTION_POINTERS *ExceptionPtr);
int         initialize_onexit_table(_onexit_table_t *Table);
int         register_onexit_function(_onexit_table_t *Table, _onexit_t Function);
int         execute_onexit_table(_onexit_table_t *Table);
int         crt_atexit(_PVFV Function);
void __noreturn terminate_sr(void);
char *        getcwd(char *DstBuf, int SizeInBytes);
int         sr_server_chdir(     char *Path);
__int64            sr_server_guard_dispatch();
