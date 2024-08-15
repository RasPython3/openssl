# 1 "crypto/pem/pem_all.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "crypto/pem/pem_all.c"
# 14 "crypto/pem/pem_all.c"
# 1 "include/internal/deprecated.h" 1
# 21 "include/internal/deprecated.h"
        

# 1 "include/openssl/configuration.h" 1
# 16 "include/openssl/configuration.h"
        
# 24 "include/internal/deprecated.h" 2




# 1 "include/openssl/macros.h" 1
# 12 "include/openssl/macros.h"
        

# 1 "include/openssl/opensslconf.h" 1
# 12 "include/openssl/opensslconf.h"
        
# 15 "include/openssl/macros.h" 2
# 1 "include/openssl/opensslv.h" 1
# 15 "include/openssl/opensslv.h"
        
# 16 "include/openssl/macros.h" 2
# 29 "include/internal/deprecated.h" 2
# 15 "crypto/pem/pem_all.c" 2

# 1 "/opt/cegcc/arm-mingw32ce/include/stdio.h" 1 3
# 19 "/opt/cegcc/arm-mingw32ce/include/stdio.h" 3
# 1 "/opt/cegcc/arm-mingw32ce/include/_mingw.h" 1 3
# 31 "/opt/cegcc/arm-mingw32ce/include/_mingw.h" 3
       
# 32 "/opt/cegcc/arm-mingw32ce/include/_mingw.h" 3
# 20 "/opt/cegcc/arm-mingw32ce/include/stdio.h" 2 3






# 1 "/opt/cegcc/lib/gcc/arm-mingw32ce/9.3.0/include/stddef.h" 1 3 4
# 209 "/opt/cegcc/lib/gcc/arm-mingw32ce/9.3.0/include/stddef.h" 3 4

# 209 "/opt/cegcc/lib/gcc/arm-mingw32ce/9.3.0/include/stddef.h" 3 4
typedef unsigned int size_t;
# 321 "/opt/cegcc/lib/gcc/arm-mingw32ce/9.3.0/include/stddef.h" 3 4
typedef short unsigned int wchar_t;
# 350 "/opt/cegcc/lib/gcc/arm-mingw32ce/9.3.0/include/stddef.h" 3 4
typedef short unsigned int wint_t;
# 27 "/opt/cegcc/arm-mingw32ce/include/stdio.h" 2 3

# 1 "/opt/cegcc/lib/gcc/arm-mingw32ce/9.3.0/include/stdarg.h" 1 3 4
# 40 "/opt/cegcc/lib/gcc/arm-mingw32ce/9.3.0/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 29 "/opt/cegcc/arm-mingw32ce/include/stdio.h" 2 3






# 1 "/opt/cegcc/arm-mingw32ce/include/stdlib.h" 1 3
# 21 "/opt/cegcc/arm-mingw32ce/include/stdlib.h" 3
# 1 "/opt/cegcc/arm-mingw32ce/include/stdio.h" 1 3
# 22 "/opt/cegcc/arm-mingw32ce/include/stdlib.h" 2 3






# 1 "/opt/cegcc/lib/gcc/arm-mingw32ce/9.3.0/include/stddef.h" 1 3 4
# 29 "/opt/cegcc/arm-mingw32ce/include/stdlib.h" 2 3
# 78 "/opt/cegcc/arm-mingw32ce/include/stdlib.h" 3
extern int _argc;
extern char** _argv;
# 112 "/opt/cegcc/arm-mingw32ce/include/stdlib.h" 3
extern int __argc;
extern char** __argv;
# 130 "/opt/cegcc/arm-mingw32ce/include/stdlib.h" 3
   int __mb_cur_max (void);
# 326 "/opt/cegcc/arm-mingw32ce/include/stdlib.h" 3
 double __attribute__ ((__nothrow__)) atof (const char*);
 int __attribute__ ((__nothrow__)) atoi (const char*);
 long __attribute__ ((__nothrow__)) atol (const char*);
# 337 "/opt/cegcc/arm-mingw32ce/include/stdlib.h" 3
double __attribute__ ((__nothrow__)) __strtod (const char*, char**);



static

__inline__ double __attribute__ ((__nothrow__))
strtod (const char* __restrict__ __nptr, char** __restrict__ __endptr)
{
  return __strtod(__nptr, __endptr);
}
float __attribute__ ((__nothrow__)) strtof (const char * __restrict__, char ** __restrict__);
long double __attribute__ ((__nothrow__)) strtold (const char * __restrict__, char ** __restrict__);




 long __attribute__ ((__nothrow__)) strtol (const char*, char**, int);
 unsigned long __attribute__ ((__nothrow__)) strtoul (const char*, char**, int);



 long __attribute__ ((__nothrow__)) wcstol (const wchar_t*, wchar_t**, int);
 unsigned long __attribute__ ((__nothrow__)) wcstoul (const wchar_t*, wchar_t**, int);
 double __attribute__ ((__nothrow__)) wcstod (const wchar_t*, wchar_t**);

float __attribute__ ((__nothrow__)) wcstof( const wchar_t * __restrict__, wchar_t ** __restrict__);
long double __attribute__ ((__nothrow__)) wcstold (const wchar_t * __restrict__, wchar_t ** __restrict__);
# 378 "/opt/cegcc/arm-mingw32ce/include/stdlib.h" 3
 size_t __attribute__ ((__nothrow__)) wcstombs (char*, const wchar_t*, size_t);




 size_t __attribute__ ((__nothrow__)) mbstowcs (wchar_t*, const char*, size_t);




 int __attribute__ ((__nothrow__)) rand (void);
 void __attribute__ ((__nothrow__)) srand (unsigned int);

 void* __attribute__ ((__nothrow__)) calloc (size_t, size_t) __attribute__ ((__malloc__));
 void* __attribute__ ((__nothrow__)) malloc (size_t) __attribute__ ((__malloc__));
 void* __attribute__ ((__nothrow__)) realloc (void*, size_t);
 void __attribute__ ((__nothrow__)) free (void*);
 void __attribute__ ((__nothrow__)) abort (void) __attribute__ ((__noreturn__));
 void __attribute__ ((__nothrow__)) exit (int) __attribute__ ((__noreturn__));


int __attribute__ ((__nothrow__)) atexit (void (*)(void));





static inline char *getenv(const char *name) {
 (void)name;
 return 0;
}



 void* bsearch (const void*, const void*, size_t, size_t,
          int (*)(const void*, const void*));
 void qsort(void*, size_t, size_t,
      int (*)(const void*, const void*));

 int __attribute__ ((__nothrow__)) abs (int) __attribute__ ((__const__));
 long __attribute__ ((__nothrow__)) labs (long) __attribute__ ((__const__));
# 428 "/opt/cegcc/arm-mingw32ce/include/stdlib.h" 3
typedef struct { int quot, rem; } div_t;
typedef struct { long quot, rem; } ldiv_t;

 div_t __attribute__ ((__nothrow__)) div (int, int) __attribute__ ((__const__));
 ldiv_t __attribute__ ((__nothrow__)) ldiv (long, long) __attribute__ ((__const__));
# 447 "/opt/cegcc/arm-mingw32ce/include/stdlib.h" 3
 void __attribute__ ((__nothrow__)) _exit (int) __attribute__ ((__noreturn__));



typedef int (* _onexit_t)(void);
_onexit_t __attribute__ ((__nothrow__)) _onexit( _onexit_t );






 char* __attribute__ ((__nothrow__)) _ecvt (double, int, int*, int*);
 char* __attribute__ ((__nothrow__)) _fcvt (double, int, int*, int*);
 char* __attribute__ ((__nothrow__)) _gcvt (double, int, char*);







 char* __attribute__ ((__nothrow__)) _itoa (int, char*, int);
 char* __attribute__ ((__nothrow__)) _ltoa (long, char*, int);
 char* __attribute__ ((__nothrow__)) _ultoa(unsigned long, char*, int);
 wchar_t* __attribute__ ((__nothrow__)) _itow (int, wchar_t*, int);
 wchar_t* __attribute__ ((__nothrow__)) _ltow (long, wchar_t*, int);
 wchar_t* __attribute__ ((__nothrow__)) _ultow (unsigned long, wchar_t*, int);


 long long __attribute__ ((__nothrow__)) _atoi64(const char *);
# 525 "/opt/cegcc/arm-mingw32ce/include/stdlib.h" 3
 unsigned int __attribute__ ((__nothrow__)) _rotl(unsigned int, int) __attribute__ ((__const__));
 unsigned int __attribute__ ((__nothrow__)) _rotr(unsigned int, int) __attribute__ ((__const__));
 unsigned long __attribute__ ((__nothrow__)) _lrotl(unsigned long, int) __attribute__ ((__const__));
 unsigned long __attribute__ ((__nothrow__)) _lrotr(unsigned long, int) __attribute__ ((__const__));
# 537 "/opt/cegcc/arm-mingw32ce/include/stdlib.h" 3
 char* __attribute__ ((__nothrow__)) itoa (int, char*, int);
 char* __attribute__ ((__nothrow__)) ltoa (long, char*, int);


 char* __attribute__ ((__nothrow__)) ecvt (double, int, int*, int*);
 char* __attribute__ ((__nothrow__)) fcvt (double, int, int*, int*);
 char* __attribute__ ((__nothrow__)) gcvt (double, int, char*);
# 554 "/opt/cegcc/arm-mingw32ce/include/stdlib.h" 3
void __attribute__ ((__nothrow__)) _Exit(int) __attribute__ ((__noreturn__));

extern inline __attribute__((__gnu_inline__)) void __attribute__ ((__nothrow__)) _Exit(int __status)
 { _exit (__status); }


typedef struct { long long quot, rem; } lldiv_t;

lldiv_t __attribute__ ((__nothrow__)) lldiv (long long, long long) __attribute__ ((__const__));

long long __attribute__ ((__nothrow__)) llabs(long long);

extern inline __attribute__((__gnu_inline__)) long long __attribute__ ((__nothrow__)) llabs(long long _j)
  {return (_j >= 0 ? _j : -_j);}





extern inline __attribute__((__gnu_inline__)) long long __attribute__ ((__nothrow__)) atoll (const char * _c)
 { return _atoi64 (_c); }



long long __attribute__ ((__nothrow__)) strtoll (const char* __restrict__, char** __restrict, int);
unsigned long long __attribute__ ((__nothrow__)) strtoull (const char* __restrict__, char** __restrict__, int);






long long __attribute__ ((__nothrow__)) atoll (const char * _c);
# 36 "/opt/cegcc/arm-mingw32ce/include/stdio.h" 2 3
# 142 "/opt/cegcc/arm-mingw32ce/include/stdio.h" 3
typedef void FILE;
# 172 "/opt/cegcc/arm-mingw32ce/include/stdio.h" 3
 FILE* _getstdfilex(int);
# 201 "/opt/cegcc/arm-mingw32ce/include/stdio.h" 3
 FILE* __attribute__ ((__nothrow__)) fopen (const char*, const char*);
 FILE* __attribute__ ((__nothrow__)) freopen (const char*, const char*, FILE*);
 int __attribute__ ((__nothrow__)) fflush (FILE*);
 int __attribute__ ((__nothrow__)) fclose (FILE*);




 int __attribute__ ((__nothrow__)) rename (const char*, const char*);






 char* __attribute__ ((__nothrow__)) _tempnam (const char*, const char*);



 int __attribute__ ((__nothrow__)) _unlink (const char*);


 char* __attribute__ ((__nothrow__)) tempnam (const char*, const char*);



 int __attribute__ ((__nothrow__)) unlink (const char*);



 int __attribute__ ((__nothrow__)) setvbuf (FILE*, char*, int, size_t);
# 246 "/opt/cegcc/arm-mingw32ce/include/stdio.h" 3
extern int __attribute__ ((__nothrow__)) __mingw_fprintf(FILE*, const char*, ...);
extern int __attribute__ ((__nothrow__)) __mingw_printf(const char*, ...);
extern int __attribute__ ((__nothrow__)) __mingw_sprintf(char*, const char*, ...);
extern int __attribute__ ((__nothrow__)) __mingw_snprintf(char*, size_t, const char*, ...);
extern int __attribute__ ((__nothrow__)) __mingw_vfprintf(FILE*, const char*, __gnuc_va_list);
extern int __attribute__ ((__nothrow__)) __mingw_vprintf(const char*, __gnuc_va_list);
extern int __attribute__ ((__nothrow__)) __mingw_vsprintf(char*, const char*, __gnuc_va_list);
extern int __attribute__ ((__nothrow__)) __mingw_vsnprintf(char*, size_t, const char*, __gnuc_va_list);
# 335 "/opt/cegcc/arm-mingw32ce/include/stdio.h" 3
 int __attribute__ ((__nothrow__)) fprintf (FILE*, const char*, ...);
 int __attribute__ ((__nothrow__)) printf (const char*, ...);
 int __attribute__ ((__nothrow__)) sprintf (char*, const char*, ...);
 int __attribute__ ((__nothrow__)) vfprintf (FILE*, const char*, __gnuc_va_list);
 int __attribute__ ((__nothrow__)) vprintf (const char*, __gnuc_va_list);
 int __attribute__ ((__nothrow__)) vsprintf (char*, const char*, __gnuc_va_list);
# 350 "/opt/cegcc/arm-mingw32ce/include/stdio.h" 3
 int __attribute__ ((__nothrow__)) __msvcrt_fprintf(FILE*, const char*, ...);
 int __attribute__ ((__nothrow__)) __msvcrt_printf(const char*, ...);
 int __attribute__ ((__nothrow__)) __msvcrt_sprintf(char*, const char*, ...);
 int __attribute__ ((__nothrow__)) __msvcrt_vfprintf(FILE*, const char*, __gnuc_va_list);
 int __attribute__ ((__nothrow__)) __msvcrt_vprintf(const char*, __gnuc_va_list);
 int __attribute__ ((__nothrow__)) __msvcrt_vsprintf(char*, const char*, __gnuc_va_list);





 int __attribute__ ((__nothrow__)) _snprintf (char*, size_t, const char*, ...);
 int __attribute__ ((__nothrow__)) _vsnprintf (char*, size_t, const char*, __gnuc_va_list);
# 372 "/opt/cegcc/arm-mingw32ce/include/stdio.h" 3
int __attribute__ ((__nothrow__)) snprintf (char *, size_t, const char *, ...);
int __attribute__ ((__nothrow__)) vsnprintf (char *, size_t, const char *, __gnuc_va_list);

int __attribute__ ((__nothrow__)) vscanf (const char * __restrict__, __gnuc_va_list);
int __attribute__ ((__nothrow__)) vfscanf (FILE * __restrict__, const char * __restrict__,
       __gnuc_va_list);
int __attribute__ ((__nothrow__)) vsscanf (const char * __restrict__,
       const char * __restrict__, __gnuc_va_list);







 int __attribute__ ((__nothrow__)) fscanf (FILE*, const char*, ...);
 int __attribute__ ((__nothrow__)) scanf (const char*, ...);
 int __attribute__ ((__nothrow__)) sscanf (const char*, const char*, ...);




 int __attribute__ ((__nothrow__)) fgetc (FILE*);
 char* __attribute__ ((__nothrow__)) fgets (char*, int, FILE*);
 int __attribute__ ((__nothrow__)) fputc (int, FILE*);
 int __attribute__ ((__nothrow__)) fputs (const char*, FILE*);
 char* __attribute__ ((__nothrow__)) gets (char*);
 int __attribute__ ((__nothrow__)) puts (const char*);
 int __attribute__ ((__nothrow__)) ungetc (int, FILE*);
# 452 "/opt/cegcc/arm-mingw32ce/include/stdio.h" 3
extern inline __attribute__((__gnu_inline__)) int __attribute__ ((__nothrow__)) getc (FILE* __F) { return fgetc(__F); }
extern inline __attribute__((__gnu_inline__)) int __attribute__ ((__nothrow__)) putc (int __c, FILE* __F) { return fputc (__c, __F); }
 int __attribute__ ((__nothrow__)) getchar (void);
 int __attribute__ ((__nothrow__)) putchar(int __c);







 size_t __attribute__ ((__nothrow__)) fread (void*, size_t, size_t, FILE*);
 size_t __attribute__ ((__nothrow__)) fwrite (const void*, size_t, size_t, FILE*);





 int __attribute__ ((__nothrow__)) fseek (FILE*, long, int);
 long __attribute__ ((__nothrow__)) ftell (FILE*);
# 510 "/opt/cegcc/arm-mingw32ce/include/stdio.h" 3
typedef long fpos_t;


 int __attribute__ ((__nothrow__)) fgetpos (FILE*, fpos_t*);
 int __attribute__ ((__nothrow__)) fsetpos (FILE*, const fpos_t*);





 int __attribute__ ((__nothrow__)) feof (FILE*);
 int __attribute__ ((__nothrow__)) ferror (FILE*);
# 535 "/opt/cegcc/arm-mingw32ce/include/stdio.h" 3
 void __attribute__ ((__nothrow__)) clearerr (FILE*);
 void __attribute__ ((__nothrow__)) perror (const char*);
# 554 "/opt/cegcc/arm-mingw32ce/include/stdio.h" 3
 int __attribute__ ((__nothrow__)) _flushall (void);




 FILE* __attribute__ ((__nothrow__)) _fdopen (int, const char*);





 void * __attribute__ ((__nothrow__)) _fileno (FILE*);



 int __attribute__ ((__nothrow__)) _fcloseall (void);
# 586 "/opt/cegcc/arm-mingw32ce/include/stdio.h" 3
 FILE* __attribute__ ((__nothrow__)) fdopen (int, const char*);
# 597 "/opt/cegcc/arm-mingw32ce/include/stdio.h" 3
 int __attribute__ ((__nothrow__)) fileno (FILE*);
# 638 "/opt/cegcc/arm-mingw32ce/include/stdio.h" 3
 int __attribute__ ((__nothrow__)) fwprintf (FILE*, const wchar_t*, ...);
 int __attribute__ ((__nothrow__)) wprintf (const wchar_t*, ...);
 int __attribute__ ((__nothrow__)) _snwprintf (wchar_t*, size_t, const wchar_t*, ...);
 int __attribute__ ((__nothrow__)) vfwprintf (FILE*, const wchar_t*, __gnuc_va_list);
 int __attribute__ ((__nothrow__)) vwprintf (const wchar_t*, __gnuc_va_list);
 int __attribute__ ((__nothrow__)) _vsnwprintf (wchar_t*, size_t, const wchar_t*, __gnuc_va_list);
 int __attribute__ ((__nothrow__)) fwscanf (FILE*, const wchar_t*, ...);
 int __attribute__ ((__nothrow__)) wscanf (const wchar_t*, ...);
 int __attribute__ ((__nothrow__)) swscanf (const wchar_t*, const wchar_t*, ...);
 wint_t __attribute__ ((__nothrow__)) fgetwc (FILE*);
 wint_t __attribute__ ((__nothrow__)) fputwc (wchar_t, FILE*);
 wint_t __attribute__ ((__nothrow__)) ungetwc (wchar_t, FILE*);



 int __attribute__ ((__nothrow__)) swprintf (wchar_t*, const wchar_t*, ...);
 int __attribute__ ((__nothrow__)) vswprintf (wchar_t*, const wchar_t*, __gnuc_va_list);



 wchar_t* __attribute__ ((__nothrow__)) fgetws (wchar_t*, int, FILE*);
 int __attribute__ ((__nothrow__)) fputws (const wchar_t*, FILE*);
 wint_t __attribute__ ((__nothrow__)) getwchar (void);
 wint_t __attribute__ ((__nothrow__)) putwchar (wint_t);

 wchar_t* _getws (wchar_t*);
 int _putws (const wchar_t*);
 FILE* _wfdopen(int, const wchar_t *);
 FILE* _wfopen (const wchar_t*, const wchar_t*);
 FILE* _wfreopen (const wchar_t*, const wchar_t*, FILE*);
# 691 "/opt/cegcc/arm-mingw32ce/include/stdio.h" 3
 wchar_t* _wtempnam (const wchar_t*, const wchar_t*);
extern inline __attribute__((__gnu_inline__)) wint_t getwc(FILE* f) { return fgetwc(f); }
extern inline __attribute__((__gnu_inline__)) wint_t putwc(wint_t c, FILE* f) { return fputwc(c, f); }



int __attribute__ ((__nothrow__)) snwprintf (wchar_t* s, size_t n, const wchar_t* format, ...);
int __attribute__ ((__nothrow__)) vsnwprintf (wchar_t* s, size_t n, const wchar_t* format, __gnuc_va_list arg);

extern inline __attribute__((__gnu_inline__)) int __attribute__ ((__nothrow__))
vsnwprintf (wchar_t* s, size_t n, const wchar_t* format, __gnuc_va_list arg)
  { return _vsnwprintf ( s, n, format, arg);}

int __attribute__ ((__nothrow__)) vwscanf (const wchar_t * __restrict__, __gnuc_va_list);
int __attribute__ ((__nothrow__)) vfwscanf (FILE * __restrict__,
         const wchar_t * __restrict__, __gnuc_va_list);
int __attribute__ ((__nothrow__)) vswscanf (const wchar_t * __restrict__,
         const wchar_t * __restrict__, __gnuc_va_list);
# 17 "crypto/pem/pem_all.c" 2
# 1 "include/internal/cryptlib.h" 1
# 12 "include/internal/cryptlib.h"
        


# 1 "/opt/cegcc/arm-mingw32ce/include/string.h" 1 3
# 24 "/opt/cegcc/arm-mingw32ce/include/string.h" 3
# 1 "/opt/cegcc/lib/gcc/arm-mingw32ce/9.3.0/include/stddef.h" 1 3 4
# 25 "/opt/cegcc/arm-mingw32ce/include/string.h" 2 3
# 36 "/opt/cegcc/arm-mingw32ce/include/string.h" 3
 void* __attribute__ ((__nothrow__)) memchr (const void*, int, size_t) __attribute__ ((__pure__));
 int __attribute__ ((__nothrow__)) memcmp (const void*, const void*, size_t) __attribute__ ((__pure__));
 void* __attribute__ ((__nothrow__)) memcpy (void*, const void*, size_t);
 void* __attribute__ ((__nothrow__)) memmove (void*, const void*, size_t);
 void* __attribute__ ((__nothrow__)) memset (void*, int, size_t);
 char* __attribute__ ((__nothrow__)) strcat (char*, const char*);
 char* __attribute__ ((__nothrow__)) strchr (const char*, int) __attribute__ ((__pure__));
 int __attribute__ ((__nothrow__)) strcmp (const char*, const char*) __attribute__ ((__pure__));



 char* __attribute__ ((__nothrow__)) strcpy (char*, const char*);
 size_t __attribute__ ((__nothrow__)) strcspn (const char*, const char*) __attribute__ ((__pure__));



 size_t __attribute__ ((__nothrow__)) strlen (const char*) __attribute__ ((__pure__));
 char* __attribute__ ((__nothrow__)) strncat (char*, const char*, size_t);
 int __attribute__ ((__nothrow__)) strncmp (const char*, const char*, size_t) __attribute__ ((__pure__));
 char* __attribute__ ((__nothrow__)) strncpy (char*, const char*, size_t);
 char* __attribute__ ((__nothrow__)) strpbrk (const char*, const char*) __attribute__ ((__pure__));
 char* __attribute__ ((__nothrow__)) strrchr (const char*, int) __attribute__ ((__pure__));
 size_t __attribute__ ((__nothrow__)) strspn (const char*, const char*) __attribute__ ((__pure__));
 char* __attribute__ ((__nothrow__)) strstr (const char*, const char*) __attribute__ ((__pure__));
 char* __attribute__ ((__nothrow__)) strtok (char*, const char*);
# 72 "/opt/cegcc/arm-mingw32ce/include/string.h" 3
 void* __attribute__ ((__nothrow__)) _memccpy (void*, const void*, int, size_t);
 int __attribute__ ((__nothrow__)) _memicmp (const void*, const void*, size_t);
 char* __attribute__ ((__nothrow__)) _strdup (const char*) __attribute__ ((__malloc__));
 int __attribute__ ((__nothrow__)) _strcmpi (const char*, const char*);
 int __attribute__ ((__nothrow__)) _stricmp (const char*, const char*);



 char* __attribute__ ((__nothrow__)) _strlwr (char*);
 int __attribute__ ((__nothrow__)) _strnicmp (const char*, const char*, size_t);
 char* __attribute__ ((__nothrow__)) _strnset (char*, int, size_t);
 char* __attribute__ ((__nothrow__)) _strrev (char*);
 char* __attribute__ ((__nothrow__)) _strset (char*, int);
 char* __attribute__ ((__nothrow__)) _strupr (char*);
 void __attribute__ ((__nothrow__)) _swab (const char*, char*, size_t);
# 99 "/opt/cegcc/arm-mingw32ce/include/string.h" 3
 void* __attribute__ ((__nothrow__)) memccpy (void*, const void*, int, size_t);
 int __attribute__ ((__nothrow__)) memicmp (const void*, const void*, size_t);
 char* __attribute__ ((__nothrow__)) strdup (const char*) __attribute__ ((__malloc__));
 int __attribute__ ((__nothrow__)) strcmpi (const char*, const char*);
 int __attribute__ ((__nothrow__)) stricmp (const char*, const char*);
int __attribute__ ((__nothrow__)) strcasecmp (const char*, const char *);

extern inline __attribute__((__gnu_inline__)) int __attribute__ ((__nothrow__))
strcasecmp (const char * __sz1, const char * __sz2)
  {return _stricmp (__sz1, __sz2);}

 int __attribute__ ((__nothrow__)) stricoll (const char*, const char*);
 char* __attribute__ ((__nothrow__)) strlwr (char*);
 int __attribute__ ((__nothrow__)) strnicmp (const char*, const char*, size_t);
int __attribute__ ((__nothrow__)) strncasecmp (const char *, const char *, size_t);

extern inline __attribute__((__gnu_inline__)) int __attribute__ ((__nothrow__))
strncasecmp (const char * __sz1, const char * __sz2, size_t __sizeMaxCompare)
  {return _strnicmp (__sz1, __sz2, __sizeMaxCompare);}

 char* __attribute__ ((__nothrow__)) strnset (char*, int, size_t);
 char* __attribute__ ((__nothrow__)) strrev (char*);
 char* __attribute__ ((__nothrow__)) strset (char*, int);
 char* __attribute__ ((__nothrow__)) strupr (char*);

 void __attribute__ ((__nothrow__)) swab (const char*, char*, size_t);
# 135 "/opt/cegcc/arm-mingw32ce/include/string.h" 3
 wchar_t* __attribute__ ((__nothrow__)) wcscat (wchar_t*, const wchar_t*);
 wchar_t* __attribute__ ((__nothrow__)) wcschr (const wchar_t*, wchar_t);
 int __attribute__ ((__nothrow__)) wcscmp (const wchar_t*, const wchar_t*);



 wchar_t* __attribute__ ((__nothrow__)) wcscpy (wchar_t*, const wchar_t*);
 size_t __attribute__ ((__nothrow__)) wcscspn (const wchar_t*, const wchar_t*);

 size_t __attribute__ ((__nothrow__)) wcslen (const wchar_t*);
 wchar_t* __attribute__ ((__nothrow__)) wcsncat (wchar_t*, const wchar_t*, size_t);
 int __attribute__ ((__nothrow__)) wcsncmp(const wchar_t*, const wchar_t*, size_t);
 wchar_t* __attribute__ ((__nothrow__)) wcsncpy(wchar_t*, const wchar_t*, size_t);
 wchar_t* __attribute__ ((__nothrow__)) wcspbrk(const wchar_t*, const wchar_t*);
 wchar_t* __attribute__ ((__nothrow__)) wcsrchr(const wchar_t*, wchar_t);
 size_t __attribute__ ((__nothrow__)) wcsspn(const wchar_t*, const wchar_t*);
 wchar_t* __attribute__ ((__nothrow__)) wcsstr(const wchar_t*, const wchar_t*);
 wchar_t* __attribute__ ((__nothrow__)) wcstok(wchar_t*, const wchar_t*);
# 165 "/opt/cegcc/arm-mingw32ce/include/string.h" 3
 wchar_t* __attribute__ ((__nothrow__)) _wcsdup (const wchar_t*);
 int __attribute__ ((__nothrow__)) _wcsicmp (const wchar_t*, const wchar_t*);



 wchar_t* __attribute__ ((__nothrow__)) _wcslwr (wchar_t*);
 int __attribute__ ((__nothrow__)) _wcsnicmp (const wchar_t*, const wchar_t*, size_t);
 wchar_t* __attribute__ ((__nothrow__)) _wcsnset (wchar_t*, wchar_t, size_t);
 wchar_t* __attribute__ ((__nothrow__)) _wcsrev (wchar_t*);
 wchar_t* __attribute__ ((__nothrow__)) _wcsset (wchar_t*, wchar_t);
 wchar_t* __attribute__ ((__nothrow__)) _wcsupr (wchar_t*);
# 188 "/opt/cegcc/arm-mingw32ce/include/string.h" 3
int __attribute__ ((__nothrow__)) wcscmpi (const wchar_t * __ws1, const wchar_t * __ws2);

extern inline __attribute__((__gnu_inline__)) int __attribute__ ((__nothrow__))
wcscmpi (const wchar_t * __ws1, const wchar_t * __ws2)
  {return _wcsicmp (__ws1, __ws2);}

 wchar_t* __attribute__ ((__nothrow__)) wcsdup (const wchar_t*);
 int __attribute__ ((__nothrow__)) wcsicmp (const wchar_t*, const wchar_t*);
 int __attribute__ ((__nothrow__)) wcsicoll (const wchar_t*, const wchar_t*);
 wchar_t* __attribute__ ((__nothrow__)) wcslwr (wchar_t*);
 int __attribute__ ((__nothrow__)) wcsnicmp (const wchar_t*, const wchar_t*, size_t);
 wchar_t* __attribute__ ((__nothrow__)) wcsnset (wchar_t*, wchar_t, size_t);
 wchar_t* __attribute__ ((__nothrow__)) wcsrev (wchar_t*);
 wchar_t* __attribute__ ((__nothrow__)) wcsset (wchar_t*, wchar_t);
 wchar_t* __attribute__ ((__nothrow__)) wcsupr (wchar_t*);
# 16 "include/internal/cryptlib.h" 2
# 24 "include/internal/cryptlib.h"
# 1 "include/openssl/crypto.h" 1
# 18 "include/openssl/crypto.h"
        






# 1 "include/ssl_python.h" 1
# 10 "include/ssl_python.h"
# 1 "/opt/cegcc/arm-mingw32ce/include/time.h" 1 3
# 21 "/opt/cegcc/arm-mingw32ce/include/time.h" 3
# 1 "/opt/cegcc/lib/gcc/arm-mingw32ce/9.3.0/include/stddef.h" 1 3 4
# 22 "/opt/cegcc/arm-mingw32ce/include/time.h" 2 3
# 40 "/opt/cegcc/arm-mingw32ce/include/time.h" 3
typedef long time_t;






typedef long long __time64_t;







typedef long clock_t;
# 64 "/opt/cegcc/arm-mingw32ce/include/time.h" 3
struct 
# 64 "/opt/cegcc/arm-mingw32ce/include/time.h"
      _tm_ignore

# 65 "/opt/cegcc/arm-mingw32ce/include/time.h" 3
{
 int tm_sec;
 int tm_min;
 int tm_hour;
 int tm_mday;
 int tm_mon;
 int tm_year;
 int tm_wday;
 int tm_yday;
 int tm_isdst;

};
# 87 "/opt/cegcc/arm-mingw32ce/include/time.h" 3
 time_t __attribute__ ((__nothrow__)) time (time_t*);
 double __attribute__ ((__nothrow__)) difftime (time_t, time_t);
 time_t __attribute__ ((__nothrow__)) 
# 89 "/opt/cegcc/arm-mingw32ce/include/time.h"
                                      _mktime_ignore 
# 89 "/opt/cegcc/arm-mingw32ce/include/time.h" 3
                                             (struct 
# 89 "/opt/cegcc/arm-mingw32ce/include/time.h"
                                                     _tm_ignore
# 89 "/opt/cegcc/arm-mingw32ce/include/time.h" 3
                                                       *);
# 101 "/opt/cegcc/arm-mingw32ce/include/time.h" 3
 char* __attribute__ ((__nothrow__)) 
# 101 "/opt/cegcc/arm-mingw32ce/include/time.h"
                                      _asctime_ignore 
# 101 "/opt/cegcc/arm-mingw32ce/include/time.h" 3
                                              (const struct 
# 101 "/opt/cegcc/arm-mingw32ce/include/time.h"
                                                            _tm_ignore
# 101 "/opt/cegcc/arm-mingw32ce/include/time.h" 3
                                                              *);
 char* __attribute__ ((__nothrow__)) ctime (const time_t*);
 struct 
# 103 "/opt/cegcc/arm-mingw32ce/include/time.h"
              _tm_ignore
# 103 "/opt/cegcc/arm-mingw32ce/include/time.h" 3
                * __attribute__ ((__nothrow__)) 
# 103 "/opt/cegcc/arm-mingw32ce/include/time.h"
                                           _gmtime_ignore 
# 103 "/opt/cegcc/arm-mingw32ce/include/time.h" 3
                                                  (const time_t*);
 struct 
# 104 "/opt/cegcc/arm-mingw32ce/include/time.h"
              _tm_ignore
# 104 "/opt/cegcc/arm-mingw32ce/include/time.h" 3
                * __attribute__ ((__nothrow__)) 
# 104 "/opt/cegcc/arm-mingw32ce/include/time.h"
                                           _localtime_ignore 
# 104 "/opt/cegcc/arm-mingw32ce/include/time.h" 3
                                                     (const time_t*);

 size_t __attribute__ ((__nothrow__)) strftime (char*, size_t, const char*, const struct 
# 106 "/opt/cegcc/arm-mingw32ce/include/time.h"
                                                                                          _tm_ignore
# 106 "/opt/cegcc/arm-mingw32ce/include/time.h" 3
                                                                                            *);
# 211 "/opt/cegcc/arm-mingw32ce/include/time.h" 3
 size_t __attribute__ ((__nothrow__)) wcsftime (wchar_t*, size_t, const wchar_t*, const struct 
# 211 "/opt/cegcc/arm-mingw32ce/include/time.h"
                                                                                                _tm_ignore
# 211 "/opt/cegcc/arm-mingw32ce/include/time.h" 3
                                                                                                  *);
# 11 "include/ssl_python.h" 2





# 1 "../cpython-wince/PC/pyconfig.h" 1
# 103 "../cpython-wince/PC/pyconfig.h"
# 1 "../cpython-wince/PC/wince_compatibility.h" 1
# 12 "../cpython-wince/PC/wince_compatibility.h"

# 12 "../cpython-wince/PC/wince_compatibility.h"
typedef long HRESULT;


# 1 "/opt/cegcc/arm-mingw32ce/include/windows.h" 1 3
# 16 "/opt/cegcc/arm-mingw32ce/include/windows.h" 3
       
# 17 "/opt/cegcc/arm-mingw32ce/include/windows.h" 3
# 47 "/opt/cegcc/arm-mingw32ce/include/windows.h" 3
# 1 "/opt/cegcc/lib/gcc/arm-mingw32ce/9.3.0/include/stdarg.h" 1 3 4
# 99 "/opt/cegcc/lib/gcc/arm-mingw32ce/9.3.0/include/stdarg.h" 3 4

# 99 "/opt/cegcc/lib/gcc/arm-mingw32ce/9.3.0/include/stdarg.h" 3 4
typedef __gnuc_va_list va_list;
# 48 "/opt/cegcc/arm-mingw32ce/include/windows.h" 2 3
# 1 "/opt/cegcc/arm-mingw32ce/include/windef.h" 1 3



       
# 5 "/opt/cegcc/arm-mingw32ce/include/windef.h" 3
# 252 "/opt/cegcc/arm-mingw32ce/include/windef.h" 3
typedef unsigned long DWORD;
typedef int WINBOOL,*PWINBOOL,*LPWINBOOL;



typedef WINBOOL BOOL;



typedef unsigned char BYTE;

typedef BOOL *PBOOL,*LPBOOL;
typedef unsigned short WORD;
typedef float FLOAT;
typedef FLOAT *PFLOAT;
typedef BYTE *PBYTE,*LPBYTE;
typedef int *PINT,*LPINT;
typedef WORD *PWORD,*LPWORD;
typedef long *LPLONG;
typedef DWORD *PDWORD,*LPDWORD;
typedef const void *PCVOID,*LPCVOID;
typedef int INT;
typedef unsigned int UINT,*PUINT,*LPUINT;

# 1 "/opt/cegcc/arm-mingw32ce/include/winnt.h" 1 3



       
# 5 "/opt/cegcc/arm-mingw32ce/include/winnt.h" 3
# 36 "/opt/cegcc/arm-mingw32ce/include/winnt.h" 3
# 1 "/opt/cegcc/arm-mingw32ce/include/winerror.h" 1 3



       
# 5 "/opt/cegcc/arm-mingw32ce/include/winerror.h" 3
# 37 "/opt/cegcc/arm-mingw32ce/include/winnt.h" 2 3
# 78 "/opt/cegcc/arm-mingw32ce/include/winnt.h" 3
typedef char CHAR;
typedef short SHORT;
typedef long LONG;
typedef char CCHAR, *PCCHAR;
typedef unsigned char UCHAR,*PUCHAR;
typedef unsigned short USHORT,*PUSHORT;
typedef unsigned long ULONG,*PULONG;
typedef char *PSZ;

typedef void *PVOID,*LPVOID;





typedef void* PVOID64;
# 106 "/opt/cegcc/arm-mingw32ce/include/winnt.h" 3
typedef wchar_t WCHAR;
typedef WCHAR *PWCHAR,*LPWCH,*PWCH,*NWPSTR,*LPWSTR,*PWSTR;
typedef const WCHAR *LPCWCH,*PCWCH,*LPCWSTR,*PCWSTR;
typedef CHAR *PCHAR,*LPCH,*PCH,*NPSTR,*LPSTR,*PSTR;
typedef const CHAR *LPCCH,*PCSTR,*LPCSTR;







typedef WCHAR TCHAR;
typedef WCHAR _TCHAR;





typedef TCHAR TBYTE,*PTCH,*PTBYTE;
typedef TCHAR *LPTCH,*PTSTR,*LPTSTR,*LP,*PTCHAR;
typedef const TCHAR *LPCTSTR;
# 146 "/opt/cegcc/arm-mingw32ce/include/winnt.h" 3
typedef SHORT *PSHORT;
typedef LONG *PLONG;

typedef void *HANDLE;





typedef HANDLE *PHANDLE,*LPHANDLE;
typedef DWORD LCID;
typedef PDWORD PLCID;
typedef WORD LANGID;
# 168 "/opt/cegcc/arm-mingw32ce/include/winnt.h" 3
typedef long long LONGLONG;
typedef unsigned long long DWORDLONG;



typedef LONGLONG *PLONGLONG;
typedef DWORDLONG *PDWORDLONG;
typedef DWORDLONG ULONGLONG,*PULONGLONG;
typedef LONGLONG USN;
# 186 "/opt/cegcc/arm-mingw32ce/include/winnt.h" 3
typedef BYTE BOOLEAN,*PBOOLEAN;

typedef BYTE FCHAR;
typedef WORD FSHORT;
typedef DWORD FLONG;


# 1 "/opt/cegcc/arm-mingw32ce/include/basetsd.h" 1 3



       
# 5 "/opt/cegcc/arm-mingw32ce/include/basetsd.h" 3
# 50 "/opt/cegcc/arm-mingw32ce/include/basetsd.h" 3
typedef signed char INT8;
typedef signed short INT16;
typedef int LONG32, *PLONG32;

typedef int INT32, *PINT32;

typedef unsigned char UINT8;
typedef unsigned short UINT16;
typedef unsigned int ULONG32, *PULONG32;
typedef unsigned int DWORD32, *PDWORD32;
typedef unsigned int UINT32, *PUINT32;
# 101 "/opt/cegcc/arm-mingw32ce/include/basetsd.h" 3
typedef int INT_PTR, *PINT_PTR;
typedef unsigned int UINT_PTR, *PUINT_PTR;
typedef long LONG_PTR, *PLONG_PTR;
typedef unsigned long ULONG_PTR, *PULONG_PTR;
typedef unsigned short UHALF_PTR, *PUHALF_PTR;
typedef short HALF_PTR, *PHALF_PTR;
typedef unsigned long HANDLE_PTR;


typedef ULONG_PTR SIZE_T, *PSIZE_T;
typedef LONG_PTR SSIZE_T, *PSSIZE_T;
typedef ULONG_PTR DWORD_PTR, *PDWORD_PTR;
typedef long long LONG64, *PLONG64;
typedef long long INT64, *PINT64;
typedef unsigned long long ULONG64, *PULONG64;
typedef unsigned long long DWORD64, *PDWORD64;
typedef unsigned long long UINT64, *PUINT64;
# 194 "/opt/cegcc/arm-mingw32ce/include/winnt.h" 2 3
# 1781 "/opt/cegcc/arm-mingw32ce/include/winnt.h" 3
typedef DWORD ACCESS_MASK, *PACCESS_MASK;







typedef struct _GUID {
 unsigned long Data1;
 unsigned short Data2;
 unsigned short Data3;
 unsigned char Data4[8];
} GUID, *REFGUID, *LPGUID;


typedef struct _GENERIC_MAPPING {
 ACCESS_MASK GenericRead;
 ACCESS_MASK GenericWrite;
 ACCESS_MASK GenericExecute;
 ACCESS_MASK GenericAll;
} GENERIC_MAPPING, *PGENERIC_MAPPING;
typedef struct _ACE_HEADER {
 BYTE AceType;
 BYTE AceFlags;
 WORD AceSize;
} ACE_HEADER, *PACE_HEADER;
typedef struct _ACCESS_ALLOWED_ACE {
 ACE_HEADER Header;
 ACCESS_MASK Mask;
 DWORD SidStart;
} ACCESS_ALLOWED_ACE, *PACCESS_ALLOWED_ACE;
typedef struct _ACCESS_DENIED_ACE {
 ACE_HEADER Header;
 ACCESS_MASK Mask;
 DWORD SidStart;
} ACCESS_DENIED_ACE, *PACCESS_DENIED_ACE;
typedef struct _SYSTEM_AUDIT_ACE {
 ACE_HEADER Header;
 ACCESS_MASK Mask;
 DWORD SidStart;
} SYSTEM_AUDIT_ACE;
typedef SYSTEM_AUDIT_ACE *PSYSTEM_AUDIT_ACE;
typedef struct _SYSTEM_ALARM_ACE {
 ACE_HEADER Header;
 ACCESS_MASK Mask;
 DWORD SidStart;
} SYSTEM_ALARM_ACE,*PSYSTEM_ALARM_ACE;
typedef struct _ACCESS_ALLOWED_OBJECT_ACE {
 ACE_HEADER Header;
 ACCESS_MASK Mask;
 DWORD Flags;
 GUID ObjectType;
 GUID InheritedObjectType;
 DWORD SidStart;
} ACCESS_ALLOWED_OBJECT_ACE,*PACCESS_ALLOWED_OBJECT_ACE;
typedef struct _ACCESS_DENIED_OBJECT_ACE {
 ACE_HEADER Header;
 ACCESS_MASK Mask;
 DWORD Flags;
 GUID ObjectType;
 GUID InheritedObjectType;
 DWORD SidStart;
} ACCESS_DENIED_OBJECT_ACE,*PACCESS_DENIED_OBJECT_ACE;
typedef struct _SYSTEM_AUDIT_OBJECT_ACE {
 ACE_HEADER Header;
 ACCESS_MASK Mask;
 DWORD Flags;
 GUID ObjectType;
 GUID InheritedObjectType;
 DWORD SidStart;
} SYSTEM_AUDIT_OBJECT_ACE,*PSYSTEM_AUDIT_OBJECT_ACE;
typedef struct _SYSTEM_ALARM_OBJECT_ACE {
 ACE_HEADER Header;
 ACCESS_MASK Mask;
 DWORD Flags;
 GUID ObjectType;
 GUID InheritedObjectType;
 DWORD SidStart;
} SYSTEM_ALARM_OBJECT_ACE,*PSYSTEM_ALARM_OBJECT_ACE;
typedef struct _ACL {
 BYTE AclRevision;
 BYTE Sbz1;
 WORD AclSize;
 WORD AceCount;
 WORD Sbz2;
} ACL,*PACL;
typedef struct _ACL_REVISION_INFORMATION {
 DWORD AclRevision;
} ACL_REVISION_INFORMATION;
typedef struct _ACL_SIZE_INFORMATION {
 DWORD AceCount;
 DWORD AclBytesInUse;
 DWORD AclBytesFree;
} ACL_SIZE_INFORMATION;
# 2366 "/opt/cegcc/arm-mingw32ce/include/winnt.h" 3
typedef struct _CONTEXT {
# 2383 "/opt/cegcc/arm-mingw32ce/include/winnt.h" 3
 ULONG ContextFlags;



 ULONG R0;
 ULONG R1;
 ULONG R2;
 ULONG R3;
 ULONG R4;
 ULONG R5;
 ULONG R6;
 ULONG R7;
 ULONG R8;
 ULONG R9;
 ULONG R10;
 ULONG R11;
 ULONG R12;

 ULONG Sp;
 ULONG Lr;
 ULONG Pc;
 ULONG Psr;



 ULONG Fpscr;
 ULONG FpExc;
 ULONG S[32 +1];
 ULONG FpExtra[8];
} CONTEXT;




typedef CONTEXT *PCONTEXT,*LPCONTEXT;
typedef struct _EXCEPTION_RECORD {
 DWORD ExceptionCode;
 DWORD ExceptionFlags;
 struct _EXCEPTION_RECORD *ExceptionRecord;
 PVOID ExceptionAddress;
 DWORD NumberParameters;
 DWORD ExceptionInformation[15];
} EXCEPTION_RECORD,*PEXCEPTION_RECORD,*LPEXCEPTION_RECORD;
typedef struct _EXCEPTION_POINTERS {
 PEXCEPTION_RECORD ExceptionRecord;
 PCONTEXT ContextRecord;
} EXCEPTION_POINTERS,*PEXCEPTION_POINTERS,*LPEXCEPTION_POINTERS;
typedef union _LARGE_INTEGER {
  struct {
    DWORD LowPart;
    LONG HighPart;
  } u;

  __extension__ struct {
    DWORD LowPart;
    LONG HighPart;
  };

  LONGLONG QuadPart;
} LARGE_INTEGER, *PLARGE_INTEGER;
typedef union _ULARGE_INTEGER {
  struct {
    DWORD LowPart;
    DWORD HighPart;
  } u;

  __extension__ struct {
    DWORD LowPart;
    DWORD HighPart;
  };

  ULONGLONG QuadPart;
} ULARGE_INTEGER, *PULARGE_INTEGER;
typedef struct _LUID {
  DWORD LowPart;
  LONG HighPart;
} LUID, *PLUID;
#pragma pack(push,4)
typedef struct _LUID_AND_ATTRIBUTES {
 LUID Luid;
 DWORD Attributes;
} LUID_AND_ATTRIBUTES, *PLUID_AND_ATTRIBUTES;
#pragma pack(pop)
typedef LUID_AND_ATTRIBUTES LUID_AND_ATTRIBUTES_ARRAY[1];
typedef LUID_AND_ATTRIBUTES_ARRAY *PLUID_AND_ATTRIBUTES_ARRAY;
typedef struct _PRIVILEGE_SET {
 DWORD PrivilegeCount;
 DWORD Control;
 LUID_AND_ATTRIBUTES Privilege[1];
} PRIVILEGE_SET,*PPRIVILEGE_SET;
typedef struct _SECURITY_ATTRIBUTES {
 DWORD nLength;
 LPVOID lpSecurityDescriptor;
 BOOL bInheritHandle;
} SECURITY_ATTRIBUTES,*PSECURITY_ATTRIBUTES,*LPSECURITY_ATTRIBUTES;
typedef enum _SECURITY_IMPERSONATION_LEVEL {
 SecurityAnonymous,
 SecurityIdentification,
 SecurityImpersonation,
 SecurityDelegation
} SECURITY_IMPERSONATION_LEVEL,*PSECURITY_IMPERSONATION_LEVEL;
typedef BOOLEAN SECURITY_CONTEXT_TRACKING_MODE,*PSECURITY_CONTEXT_TRACKING_MODE;
typedef struct _SECURITY_QUALITY_OF_SERVICE {
 DWORD Length;
 SECURITY_IMPERSONATION_LEVEL ImpersonationLevel;
 SECURITY_CONTEXT_TRACKING_MODE ContextTrackingMode;
 BOOLEAN EffectiveOnly;
} SECURITY_QUALITY_OF_SERVICE,*PSECURITY_QUALITY_OF_SERVICE;
typedef PVOID PACCESS_TOKEN;
typedef struct _SE_IMPERSONATION_STATE {
 PACCESS_TOKEN Token;
 BOOLEAN CopyOnOpen;
 BOOLEAN EffectiveOnly;
 SECURITY_IMPERSONATION_LEVEL Level;
} SE_IMPERSONATION_STATE,*PSE_IMPERSONATION_STATE;
typedef struct _SID_IDENTIFIER_AUTHORITY {
 BYTE Value[6];
} SID_IDENTIFIER_AUTHORITY,*PSID_IDENTIFIER_AUTHORITY,*LPSID_IDENTIFIER_AUTHORITY;
typedef PVOID PSID;
typedef struct _SID {
   BYTE Revision;
   BYTE SubAuthorityCount;
   SID_IDENTIFIER_AUTHORITY IdentifierAuthority;
   DWORD SubAuthority[1];
} SID, *PISID;
typedef struct _SID_AND_ATTRIBUTES {
 PSID Sid;
 DWORD Attributes;
} SID_AND_ATTRIBUTES, *PSID_AND_ATTRIBUTES;
typedef SID_AND_ATTRIBUTES SID_AND_ATTRIBUTES_ARRAY[1];
typedef SID_AND_ATTRIBUTES_ARRAY *PSID_AND_ATTRIBUTES_ARRAY;
# 2522 "/opt/cegcc/arm-mingw32ce/include/winnt.h" 3
typedef struct _TOKEN_SOURCE {
 CHAR SourceName[8];
 LUID SourceIdentifier;
} TOKEN_SOURCE,*PTOKEN_SOURCE;
typedef struct _TOKEN_CONTROL {
 LUID TokenId;
 LUID AuthenticationId;
 LUID ModifiedId;
 TOKEN_SOURCE TokenSource;
} TOKEN_CONTROL,*PTOKEN_CONTROL;
typedef struct _TOKEN_DEFAULT_DACL {
 PACL DefaultDacl;
} TOKEN_DEFAULT_DACL,*PTOKEN_DEFAULT_DACL;
typedef struct _TOKEN_GROUPS {
 DWORD GroupCount;
 SID_AND_ATTRIBUTES Groups[1];
} TOKEN_GROUPS,*PTOKEN_GROUPS,*LPTOKEN_GROUPS;
typedef struct _TOKEN_OWNER {
 PSID Owner;
} TOKEN_OWNER,*PTOKEN_OWNER;
typedef struct _TOKEN_PRIMARY_GROUP {
 PSID PrimaryGroup;
} TOKEN_PRIMARY_GROUP,*PTOKEN_PRIMARY_GROUP;
typedef struct _TOKEN_PRIVILEGES {
 DWORD PrivilegeCount;
 LUID_AND_ATTRIBUTES Privileges[1];
} TOKEN_PRIVILEGES,*PTOKEN_PRIVILEGES,*LPTOKEN_PRIVILEGES;
typedef enum tagTOKEN_TYPE {
 TokenPrimary = 1,
 TokenImpersonation
} TOKEN_TYPE,*PTOKEN_TYPE;
typedef struct _TOKEN_STATISTICS {
 LUID TokenId;
 LUID AuthenticationId;
 LARGE_INTEGER ExpirationTime;
 TOKEN_TYPE TokenType;
 SECURITY_IMPERSONATION_LEVEL ImpersonationLevel;
 DWORD DynamicCharged;
 DWORD DynamicAvailable;
 DWORD GroupCount;
 DWORD PrivilegeCount;
 LUID ModifiedId;
} TOKEN_STATISTICS, *PTOKEN_STATISTICS;
typedef struct _TOKEN_USER {
 SID_AND_ATTRIBUTES User;
} TOKEN_USER, *PTOKEN_USER;
# 2592 "/opt/cegcc/arm-mingw32ce/include/winnt.h" 3
typedef DWORD SECURITY_INFORMATION,*PSECURITY_INFORMATION;
typedef WORD SECURITY_DESCRIPTOR_CONTROL,*PSECURITY_DESCRIPTOR_CONTROL;
typedef struct _SECURITY_DESCRIPTOR {
 BYTE Revision;
 BYTE Sbz1;
 SECURITY_DESCRIPTOR_CONTROL Control;
 PSID Owner;
 PSID Group;
 PACL Sacl;
 PACL Dacl;
} SECURITY_DESCRIPTOR, *PSECURITY_DESCRIPTOR, *PISECURITY_DESCRIPTOR;
typedef enum _TOKEN_INFORMATION_CLASS {
 TokenUser=1,
 TokenGroups,
 TokenPrivileges,
 TokenOwner,
 TokenPrimaryGroup,
 TokenDefaultDacl,
 TokenSource,
 TokenType,
 TokenImpersonationLevel,
 TokenStatistics,
 TokenRestrictedSids,
 TokenSessionId,
 TokenGroupsAndPrivileges,
 TokenSessionReference,
 TokenSandBoxInert,
 TokenAuditPolicy,
 TokenOrigin,
# 2634 "/opt/cegcc/arm-mingw32ce/include/winnt.h" 3
 MaxTokenInfoClass
} TOKEN_INFORMATION_CLASS;
typedef enum _SID_NAME_USE {
 SidTypeUser=1,
 SidTypeGroup,
 SidTypeDomain,
 SidTypeAlias,
 SidTypeWellKnownGroup,
 SidTypeDeletedAccount,
 SidTypeInvalid,
 SidTypeUnknown,
 SidTypeComputer
} SID_NAME_USE,*PSID_NAME_USE;
typedef struct _QUOTA_LIMITS {
 SIZE_T PagedPoolLimit;
 SIZE_T NonPagedPoolLimit;
 SIZE_T MinimumWorkingSetSize;
 SIZE_T MaximumWorkingSetSize;
 SIZE_T PagefileLimit;
 LARGE_INTEGER TimeLimit;
} QUOTA_LIMITS,*PQUOTA_LIMITS;
typedef struct _IO_COUNTERS {
 ULONGLONG ReadOperationCount;
 ULONGLONG WriteOperationCount;
 ULONGLONG OtherOperationCount;
 ULONGLONG ReadTransferCount;
 ULONGLONG WriteTransferCount;
 ULONGLONG OtherTransferCount;
} IO_COUNTERS, *PIO_COUNTERS;
typedef struct _FILE_NOTIFY_INFORMATION {
 DWORD NextEntryOffset;
 DWORD Action;
 DWORD FileNameLength;
 WCHAR FileName[1];
} FILE_NOTIFY_INFORMATION,*PFILE_NOTIFY_INFORMATION;
typedef struct _TAPE_ERASE {
 DWORD Type;
 BOOLEAN Immediate;
} TAPE_ERASE,*PTAPE_ERASE;
typedef struct _TAPE_GET_DRIVE_PARAMETERS {
 BOOLEAN ECC;
 BOOLEAN Compression;
 BOOLEAN DataPadding;
 BOOLEAN ReportSetmarks;
  DWORD DefaultBlockSize;
  DWORD MaximumBlockSize;
  DWORD MinimumBlockSize;
  DWORD MaximumPartitionCount;
  DWORD FeaturesLow;
  DWORD FeaturesHigh;
  DWORD EOTWarningZoneSize;
} TAPE_GET_DRIVE_PARAMETERS,*PTAPE_GET_DRIVE_PARAMETERS;
typedef struct _TAPE_GET_MEDIA_PARAMETERS {
 LARGE_INTEGER Capacity;
 LARGE_INTEGER Remaining;
 DWORD BlockSize;
 DWORD PartitionCount;
 BOOLEAN WriteProtected;
} TAPE_GET_MEDIA_PARAMETERS,*PTAPE_GET_MEDIA_PARAMETERS;
typedef struct _TAPE_GET_POSITION {
 ULONG Type;
 ULONG Partition;
 ULONG OffsetLow;
 ULONG OffsetHigh;
} TAPE_GET_POSITION,*PTAPE_GET_POSITION;
typedef struct _TAPE_PREPARE {
 DWORD Operation;
 BOOLEAN Immediate;
} TAPE_PREPARE,*PTAPE_PREPARE;
typedef struct _TAPE_SET_DRIVE_PARAMETERS {
 BOOLEAN ECC;
 BOOLEAN Compression;
 BOOLEAN DataPadding;
 BOOLEAN ReportSetmarks;
 ULONG EOTWarningZoneSize;
} TAPE_SET_DRIVE_PARAMETERS,*PTAPE_SET_DRIVE_PARAMETERS;
typedef struct _TAPE_SET_MEDIA_PARAMETERS {
 ULONG BlockSize;
} TAPE_SET_MEDIA_PARAMETERS,*PTAPE_SET_MEDIA_PARAMETERS;
typedef struct _TAPE_SET_POSITION {
 DWORD Method;
 DWORD Partition;
 LARGE_INTEGER Offset;
 BOOLEAN Immediate;
} TAPE_SET_POSITION,*PTAPE_SET_POSITION;
typedef struct _TAPE_WRITE_MARKS {
 DWORD Type;
 DWORD Count;
 BOOLEAN Immediate;
} TAPE_WRITE_MARKS,*PTAPE_WRITE_MARKS;
typedef struct _TAPE_CREATE_PARTITION {
 DWORD Method;
 DWORD Count;
 DWORD Size;
} TAPE_CREATE_PARTITION,*PTAPE_CREATE_PARTITION;
typedef struct _MEMORY_BASIC_INFORMATION {
 PVOID BaseAddress;
 PVOID AllocationBase;
 DWORD AllocationProtect;
 DWORD RegionSize;
 DWORD State;
 DWORD Protect;
 DWORD Type;
} MEMORY_BASIC_INFORMATION,*PMEMORY_BASIC_INFORMATION;
typedef struct _MESSAGE_RESOURCE_ENTRY {
 WORD Length;
 WORD Flags;
 BYTE Text[1];
} MESSAGE_RESOURCE_ENTRY,*PMESSAGE_RESOURCE_ENTRY;
typedef struct _MESSAGE_RESOURCE_BLOCK {
 DWORD LowId;
 DWORD HighId;
 DWORD OffsetToEntries;
} MESSAGE_RESOURCE_BLOCK,*PMESSAGE_RESOURCE_BLOCK;
typedef struct _MESSAGE_RESOURCE_DATA {
 DWORD NumberOfBlocks;
 MESSAGE_RESOURCE_BLOCK Blocks[1];
} MESSAGE_RESOURCE_DATA,*PMESSAGE_RESOURCE_DATA;
typedef struct _LIST_ENTRY {
 struct _LIST_ENTRY *Flink;
 struct _LIST_ENTRY *Blink;
} LIST_ENTRY,*PLIST_ENTRY;
typedef struct _SINGLE_LIST_ENTRY {
 struct _SINGLE_LIST_ENTRY *Next;
} SINGLE_LIST_ENTRY,*PSINGLE_LIST_ENTRY;






typedef union _SLIST_HEADER {
 ULONGLONG Alignment;
 __extension__ struct {
  SINGLE_LIST_ENTRY Next;
  WORD Depth;
  WORD Sequence;
 } ;
} SLIST_HEADER,*PSLIST_HEADER;


typedef struct _RTL_CRITICAL_SECTION_DEBUG {
 WORD Type;
 WORD CreatorBackTraceIndex;
 struct _RTL_CRITICAL_SECTION *CriticalSection;
 LIST_ENTRY ProcessLocksList;
 DWORD EntryCount;
 DWORD ContentionCount;
 DWORD Spare[2];
} RTL_CRITICAL_SECTION_DEBUG,*PRTL_CRITICAL_SECTION_DEBUG;
typedef struct _RTL_CRITICAL_SECTION {
 PRTL_CRITICAL_SECTION_DEBUG DebugInfo;
 LONG LockCount;
 LONG RecursionCount;
 HANDLE OwningThread;
 HANDLE LockSemaphore;
 DWORD Reserved;
} RTL_CRITICAL_SECTION,*PRTL_CRITICAL_SECTION;
typedef struct _EVENTLOGRECORD {
 DWORD Length;
 DWORD Reserved;
 DWORD RecordNumber;
 DWORD TimeGenerated;
 DWORD TimeWritten;
 DWORD EventID;
 WORD EventType;
 WORD NumStrings;
 WORD EventCategory;
 WORD ReservedFlags;
 DWORD ClosingRecordNumber;
 DWORD StringOffset;
 DWORD UserSidLength;
 DWORD UserSidOffset;
 DWORD DataLength;
 DWORD DataOffset;
} EVENTLOGRECORD,*PEVENTLOGRECORD;
typedef struct _OSVERSIONINFOA {
 DWORD dwOSVersionInfoSize;
 DWORD dwMajorVersion;
 DWORD dwMinorVersion;
 DWORD dwBuildNumber;
 DWORD dwPlatformId;
 CHAR szCSDVersion[128];
} OSVERSIONINFOA,*POSVERSIONINFOA,*LPOSVERSIONINFOA;
typedef struct _OSVERSIONINFOW {
 DWORD dwOSVersionInfoSize;
 DWORD dwMajorVersion;
 DWORD dwMinorVersion;
 DWORD dwBuildNumber;
 DWORD dwPlatformId;
 WCHAR szCSDVersion[128];
} OSVERSIONINFOW,*POSVERSIONINFOW,*LPOSVERSIONINFOW;
typedef struct _OSVERSIONINFOEXA {
 DWORD dwOSVersionInfoSize;
 DWORD dwMajorVersion;
 DWORD dwMinorVersion;
 DWORD dwBuildNumber;
 DWORD dwPlatformId;
 CHAR szCSDVersion[128];
 WORD wServicePackMajor;
 WORD wServicePackMinor;
 WORD wSuiteMask;
 BYTE wProductType;
 BYTE wReserved;
} OSVERSIONINFOEXA, *POSVERSIONINFOEXA, *LPOSVERSIONINFOEXA;
typedef struct _OSVERSIONINFOEXW {
 DWORD dwOSVersionInfoSize;
 DWORD dwMajorVersion;
 DWORD dwMinorVersion;
 DWORD dwBuildNumber;
 DWORD dwPlatformId;
 WCHAR szCSDVersion[128];
 WORD wServicePackMajor;
 WORD wServicePackMinor;
 WORD wSuiteMask;
 BYTE wProductType;
 BYTE wReserved;
} OSVERSIONINFOEXW, *POSVERSIONINFOEXW, *LPOSVERSIONINFOEXW;
#pragma pack(push,2)
typedef struct _IMAGE_VXD_HEADER {
 WORD e32_magic;
 BYTE e32_border;
 BYTE e32_worder;
 DWORD e32_level;
 WORD e32_cpu;
 WORD e32_os;
 DWORD e32_ver;
 DWORD e32_mflags;
 DWORD e32_mpages;
 DWORD e32_startobj;
 DWORD e32_eip;
 DWORD e32_stackobj;
 DWORD e32_esp;
 DWORD e32_pagesize;
 DWORD e32_lastpagesize;
 DWORD e32_fixupsize;
 DWORD e32_fixupsum;
 DWORD e32_ldrsize;
 DWORD e32_ldrsum;
 DWORD e32_objtab;
 DWORD e32_objcnt;
 DWORD e32_objmap;
 DWORD e32_itermap;
 DWORD e32_rsrctab;
 DWORD e32_rsrccnt;
 DWORD e32_restab;
 DWORD e32_enttab;
 DWORD e32_dirtab;
 DWORD e32_dircnt;
 DWORD e32_fpagetab;
 DWORD e32_frectab;
 DWORD e32_impmod;
 DWORD e32_impmodcnt;
 DWORD e32_impproc;
 DWORD e32_pagesum;
 DWORD e32_datapage;
 DWORD e32_preload;
 DWORD e32_nrestab;
 DWORD e32_cbnrestab;
 DWORD e32_nressum;
 DWORD e32_autodata;
 DWORD e32_debuginfo;
 DWORD e32_debuglen;
 DWORD e32_instpreload;
 DWORD e32_instdemand;
 DWORD e32_heapsize;
 BYTE e32_res3[12];
 DWORD e32_winresoff;
 DWORD e32_winreslen;
 WORD e32_devid;
 WORD e32_ddkver;
} IMAGE_VXD_HEADER,*PIMAGE_VXD_HEADER;
#pragma pack(pop)
#pragma pack(push,4)
typedef struct _IMAGE_FILE_HEADER {
 WORD Machine;
 WORD NumberOfSections;
 DWORD TimeDateStamp;
 DWORD PointerToSymbolTable;
 DWORD NumberOfSymbols;
 WORD SizeOfOptionalHeader;
 WORD Characteristics;
} IMAGE_FILE_HEADER, *PIMAGE_FILE_HEADER;
typedef struct _IMAGE_DATA_DIRECTORY {
 DWORD VirtualAddress;
 DWORD Size;
} IMAGE_DATA_DIRECTORY,*PIMAGE_DATA_DIRECTORY;
typedef struct _IMAGE_OPTIONAL_HEADER {
 WORD Magic;
 BYTE MajorLinkerVersion;
 BYTE MinorLinkerVersion;
 DWORD SizeOfCode;
 DWORD SizeOfInitializedData;
 DWORD SizeOfUninitializedData;
 DWORD AddressOfEntryPoint;
 DWORD BaseOfCode;
 DWORD BaseOfData;
 DWORD ImageBase;
 DWORD SectionAlignment;
 DWORD FileAlignment;
 WORD MajorOperatingSystemVersion;
 WORD MinorOperatingSystemVersion;
 WORD MajorImageVersion;
 WORD MinorImageVersion;
 WORD MajorSubsystemVersion;
 WORD MinorSubsystemVersion;
 DWORD Win32VersionValue;
 DWORD SizeOfImage;
 DWORD SizeOfHeaders;
 DWORD CheckSum;
 WORD Subsystem;
 WORD DllCharacteristics;
 DWORD SizeOfStackReserve;
 DWORD SizeOfStackCommit;
 DWORD SizeOfHeapReserve;
 DWORD SizeOfHeapCommit;
 DWORD LoaderFlags;
 DWORD NumberOfRvaAndSizes;
 IMAGE_DATA_DIRECTORY DataDirectory[16];
} IMAGE_OPTIONAL_HEADER32,*PIMAGE_OPTIONAL_HEADER32;
typedef struct _IMAGE_OPTIONAL_HEADER64 {
 WORD Magic;
 BYTE MajorLinkerVersion;
 BYTE MinorLinkerVersion;
 DWORD SizeOfCode;
 DWORD SizeOfInitializedData;
 DWORD SizeOfUninitializedData;
 DWORD AddressOfEntryPoint;
 DWORD BaseOfCode;
 ULONGLONG ImageBase;
 DWORD SectionAlignment;
 DWORD FileAlignment;
 WORD MajorOperatingSystemVersion;
 WORD MinorOperatingSystemVersion;
 WORD MajorImageVersion;
 WORD MinorImageVersion;
 WORD MajorSubsystemVersion;
 WORD MinorSubsystemVersion;
 DWORD Win32VersionValue;
 DWORD SizeOfImage;
 DWORD SizeOfHeaders;
 DWORD CheckSum;
 WORD Subsystem;
 WORD DllCharacteristics;
 ULONGLONG SizeOfStackReserve;
 ULONGLONG SizeOfStackCommit;
 ULONGLONG SizeOfHeapReserve;
 ULONGLONG SizeOfHeapCommit;
 DWORD LoaderFlags;
 DWORD NumberOfRvaAndSizes;
 IMAGE_DATA_DIRECTORY DataDirectory[16];
} IMAGE_OPTIONAL_HEADER64,*PIMAGE_OPTIONAL_HEADER64;




typedef IMAGE_OPTIONAL_HEADER32 IMAGE_OPTIONAL_HEADER;
typedef PIMAGE_OPTIONAL_HEADER32 PIMAGE_OPTIONAL_HEADER;

typedef struct _IMAGE_ROM_OPTIONAL_HEADER {
 WORD Magic;
 BYTE MajorLinkerVersion;
 BYTE MinorLinkerVersion;
 DWORD SizeOfCode;
 DWORD SizeOfInitializedData;
 DWORD SizeOfUninitializedData;
 DWORD AddressOfEntryPoint;
 DWORD BaseOfCode;
 DWORD BaseOfData;
 DWORD BaseOfBss;
 DWORD GprMask;
 DWORD CprMask[4];
 DWORD GpValue;
} IMAGE_ROM_OPTIONAL_HEADER,*PIMAGE_ROM_OPTIONAL_HEADER;
#pragma pack(pop)
#pragma pack(push,2)
typedef struct _IMAGE_DOS_HEADER {
 WORD e_magic;
 WORD e_cblp;
 WORD e_cp;
 WORD e_crlc;
 WORD e_cparhdr;
 WORD e_minalloc;
 WORD e_maxalloc;
 WORD e_ss;
 WORD e_sp;
 WORD e_csum;
 WORD e_ip;
 WORD e_cs;
 WORD e_lfarlc;
 WORD e_ovno;
 WORD e_res[4];
 WORD e_oemid;
 WORD e_oeminfo;
 WORD e_res2[10];
 LONG e_lfanew;
} IMAGE_DOS_HEADER,*PIMAGE_DOS_HEADER;
typedef struct _IMAGE_OS2_HEADER {
 WORD ne_magic;
 CHAR ne_ver;
 CHAR ne_rev;
 WORD ne_enttab;
 WORD ne_cbenttab;
 LONG ne_crc;
 WORD ne_flags;
 WORD ne_autodata;
 WORD ne_heap;
 WORD ne_stack;
 LONG ne_csip;
 LONG ne_sssp;
 WORD ne_cseg;
 WORD ne_cmod;
 WORD ne_cbnrestab;
 WORD ne_segtab;
 WORD ne_rsrctab;
 WORD ne_restab;
 WORD ne_modtab;
 WORD ne_imptab;
 LONG ne_nrestab;
 WORD ne_cmovent;
 WORD ne_align;
 WORD ne_cres;
 BYTE ne_exetyp;
 BYTE ne_flagsothers;
 WORD ne_pretthunks;
 WORD ne_psegrefbytes;
 WORD ne_swaparea;
 WORD ne_expver;
} IMAGE_OS2_HEADER,*PIMAGE_OS2_HEADER;
#pragma pack(pop)
#pragma pack(push,4)
typedef struct _IMAGE_NT_HEADERS {
DWORD Signature;
IMAGE_FILE_HEADER FileHeader;
IMAGE_OPTIONAL_HEADER32 OptionalHeader;
} IMAGE_NT_HEADERS32,*PIMAGE_NT_HEADERS32;
typedef struct _IMAGE_NT_HEADERS64 {
DWORD Signature;
IMAGE_FILE_HEADER FileHeader;
IMAGE_OPTIONAL_HEADER64 OptionalHeader;
} IMAGE_NT_HEADERS64,*PIMAGE_NT_HEADERS64;




typedef IMAGE_NT_HEADERS32 IMAGE_NT_HEADERS;
typedef PIMAGE_NT_HEADERS32 PIMAGE_NT_HEADERS;

typedef struct _IMAGE_ROM_HEADERS {
 IMAGE_FILE_HEADER FileHeader;
 IMAGE_ROM_OPTIONAL_HEADER OptionalHeader;
} IMAGE_ROM_HEADERS,*PIMAGE_ROM_HEADERS;
typedef struct _IMAGE_SECTION_HEADER {
 BYTE Name[8];
 union {
  DWORD PhysicalAddress;
  DWORD VirtualSize;
 } Misc;
 DWORD VirtualAddress;
 DWORD SizeOfRawData;
 DWORD PointerToRawData;
 DWORD PointerToRelocations;
 DWORD PointerToLinenumbers;
 WORD NumberOfRelocations;
 WORD NumberOfLinenumbers;
 DWORD Characteristics;
} IMAGE_SECTION_HEADER,*PIMAGE_SECTION_HEADER;
#pragma pack(pop)
#pragma pack(push,2)
typedef struct _IMAGE_SYMBOL {
 union {
  BYTE ShortName[8];
  struct {
   DWORD Short;
   DWORD Long;
  } Name;
  PBYTE LongName[2];
 } N;
 DWORD Value;
 SHORT SectionNumber;
 WORD Type;
 BYTE StorageClass;
 BYTE NumberOfAuxSymbols;
} IMAGE_SYMBOL,*PIMAGE_SYMBOL;
typedef union _IMAGE_AUX_SYMBOL {
 struct {
  DWORD TagIndex;
  union {
   struct {
    WORD Linenumber;
    WORD Size;
   } LnSz;
   DWORD TotalSize;
  } Misc;
  union {
   struct {
    DWORD PointerToLinenumber;
    DWORD PointerToNextFunction;
   } Function;
   struct {
    WORD Dimension[4];
   } Array;
  } FcnAry;
  WORD TvIndex;
 } Sym;
 struct {
  BYTE Name[18];
 } File;
 struct {
  DWORD Length;
  WORD NumberOfRelocations;
  WORD NumberOfLinenumbers;
  DWORD CheckSum;
  SHORT Number;
  BYTE Selection;
 } Section;
} IMAGE_AUX_SYMBOL,*PIMAGE_AUX_SYMBOL;
typedef struct _IMAGE_COFF_SYMBOLS_HEADER {
 DWORD NumberOfSymbols;
 DWORD LvaToFirstSymbol;
 DWORD NumberOfLinenumbers;
 DWORD LvaToFirstLinenumber;
 DWORD RvaToFirstByteOfCode;
 DWORD RvaToLastByteOfCode;
 DWORD RvaToFirstByteOfData;
 DWORD RvaToLastByteOfData;
} IMAGE_COFF_SYMBOLS_HEADER,*PIMAGE_COFF_SYMBOLS_HEADER;
typedef struct _IMAGE_RELOCATION {
 __extension__ union {
  DWORD VirtualAddress;
  DWORD RelocCount;
 } ;
 DWORD SymbolTableIndex;
 WORD Type;
} IMAGE_RELOCATION,*PIMAGE_RELOCATION;
#pragma pack(pop)
#pragma pack(push,4)
typedef struct _IMAGE_BASE_RELOCATION {
 DWORD VirtualAddress;
 DWORD SizeOfBlock;
} IMAGE_BASE_RELOCATION,*PIMAGE_BASE_RELOCATION;
#pragma pack(pop)
#pragma pack(push,2)
typedef struct _IMAGE_LINENUMBER {
 union {
  DWORD SymbolTableIndex;
  DWORD VirtualAddress;
 } Type;
 WORD Linenumber;
} IMAGE_LINENUMBER,*PIMAGE_LINENUMBER;
#pragma pack(pop)
#pragma pack(push,4)
typedef struct _IMAGE_ARCHIVE_MEMBER_HEADER {
 BYTE Name[16];
 BYTE Date[12];
 BYTE UserID[6];
 BYTE GroupID[6];
 BYTE Mode[8];
 BYTE Size[10];
 BYTE EndHeader[2];
} IMAGE_ARCHIVE_MEMBER_HEADER,*PIMAGE_ARCHIVE_MEMBER_HEADER;
typedef struct _IMAGE_EXPORT_DIRECTORY {
 DWORD Characteristics;
 DWORD TimeDateStamp;
 WORD MajorVersion;
 WORD MinorVersion;
 DWORD Name;
 DWORD Base;
 DWORD NumberOfFunctions;
 DWORD NumberOfNames;
 DWORD AddressOfFunctions;
 DWORD AddressOfNames;
 DWORD AddressOfNameOrdinals;
} IMAGE_EXPORT_DIRECTORY,*PIMAGE_EXPORT_DIRECTORY;
typedef struct _IMAGE_IMPORT_BY_NAME {
 WORD Hint;
 BYTE Name[1];
} IMAGE_IMPORT_BY_NAME,*PIMAGE_IMPORT_BY_NAME;
typedef struct _IMAGE_THUNK_DATA32 {
 union {
  DWORD ForwarderString;
  DWORD Function;
  DWORD Ordinal;
  DWORD AddressOfData;
 } u1;
} IMAGE_THUNK_DATA32,*PIMAGE_THUNK_DATA32;
typedef struct _IMAGE_THUNK_DATA64 {
 union {
  ULONGLONG ForwarderString;
  ULONGLONG Function;
  ULONGLONG Ordinal;
  ULONGLONG AddressOfData;
 } u1;
} IMAGE_THUNK_DATA64, *PIMAGE_THUNK_DATA64;




typedef IMAGE_THUNK_DATA32 IMAGE_THUNK_DATA;
typedef PIMAGE_THUNK_DATA32 PIMAGE_THUNK_DATA;

typedef struct _IMAGE_IMPORT_DESCRIPTOR {
 __extension__ union {
  DWORD Characteristics;
  DWORD OriginalFirstThunk;
 } ;
 DWORD TimeDateStamp;
 DWORD ForwarderChain;
 DWORD Name;
 DWORD FirstThunk;
} IMAGE_IMPORT_DESCRIPTOR,*PIMAGE_IMPORT_DESCRIPTOR;
typedef struct _IMAGE_BOUND_IMPORT_DESCRIPTOR {
 DWORD TimeDateStamp;
 WORD OffsetModuleName;
 WORD NumberOfModuleForwarderRefs;
} IMAGE_BOUND_IMPORT_DESCRIPTOR,*PIMAGE_BOUND_IMPORT_DESCRIPTOR;
typedef struct _IMAGE_BOUND_FORWARDER_REF {
 DWORD TimeDateStamp;
 WORD OffsetModuleName;
 WORD Reserved;
} IMAGE_BOUND_FORWARDER_REF,*PIMAGE_BOUND_FORWARDER_REF;
typedef void( *PIMAGE_TLS_CALLBACK)(PVOID,DWORD,PVOID);
typedef struct _IMAGE_TLS_DIRECTORY32 {
 DWORD StartAddressOfRawData;
 DWORD EndAddressOfRawData;
 DWORD AddressOfIndex;
 DWORD AddressOfCallBacks;
 DWORD SizeOfZeroFill;
 DWORD Characteristics;
} IMAGE_TLS_DIRECTORY32,*PIMAGE_TLS_DIRECTORY32;
typedef struct _IMAGE_TLS_DIRECTORY64 {
 ULONGLONG StartAddressOfRawData;
 ULONGLONG EndAddressOfRawData;
 ULONGLONG AddressOfIndex;
 ULONGLONG AddressOfCallBacks;
 DWORD SizeOfZeroFill;
 DWORD Characteristics;
} IMAGE_TLS_DIRECTORY64, *PIMAGE_TLS_DIRECTORY64;




typedef IMAGE_TLS_DIRECTORY32 IMAGE_TLS_DIRECTORY;
typedef PIMAGE_TLS_DIRECTORY32 PIMAGE_TLS_DIRECTORY;

typedef struct _IMAGE_RESOURCE_DIRECTORY {
 DWORD Characteristics;
 DWORD TimeDateStamp;
 WORD MajorVersion;
 WORD MinorVersion;
 WORD NumberOfNamedEntries;
 WORD NumberOfIdEntries;
} IMAGE_RESOURCE_DIRECTORY,*PIMAGE_RESOURCE_DIRECTORY;
__extension__ typedef struct _IMAGE_RESOURCE_DIRECTORY_ENTRY {
 __extension__ union {
  __extension__ struct {
   DWORD NameOffset:31;
   DWORD NameIsString:1;
  };
  DWORD Name;
  WORD Id;
 } ;
 __extension__ union {
  DWORD OffsetToData;
  __extension__ struct {
   DWORD OffsetToDirectory:31;
   DWORD DataIsDirectory:1;
  } ;
 } ;
} IMAGE_RESOURCE_DIRECTORY_ENTRY,*PIMAGE_RESOURCE_DIRECTORY_ENTRY;
typedef struct _IMAGE_RESOURCE_DIRECTORY_STRING {
 WORD Length;
 CHAR NameString[1];
} IMAGE_RESOURCE_DIRECTORY_STRING,*PIMAGE_RESOURCE_DIRECTORY_STRING;
typedef struct _IMAGE_RESOURCE_DIR_STRING_U {
 WORD Length;
 WCHAR NameString[1];
} IMAGE_RESOURCE_DIR_STRING_U,*PIMAGE_RESOURCE_DIR_STRING_U;
typedef struct _IMAGE_RESOURCE_DATA_ENTRY {
 DWORD OffsetToData;
 DWORD Size;
 DWORD CodePage;
 DWORD Reserved;
} IMAGE_RESOURCE_DATA_ENTRY,*PIMAGE_RESOURCE_DATA_ENTRY;
typedef struct _IMAGE_LOAD_CONFIG_DIRECTORY {
 DWORD Characteristics;
 DWORD TimeDateStamp;
 WORD MajorVersion;
 WORD MinorVersion;
 DWORD GlobalFlagsClear;
 DWORD GlobalFlagsSet;
 DWORD CriticalSectionDefaultTimeout;
 DWORD DeCommitFreeBlockThreshold;
 DWORD DeCommitTotalFreeThreshold;
 PVOID LockPrefixTable;
 DWORD MaximumAllocationSize;
 DWORD VirtualMemoryThreshold;
 DWORD ProcessHeapFlags;
 DWORD Reserved[4];
} IMAGE_LOAD_CONFIG_DIRECTORY,*PIMAGE_LOAD_CONFIG_DIRECTORY;
typedef struct {
 DWORD Characteristics;
 DWORD TimeDateStamp;
 WORD MajorVersion;
 WORD MinorVersion;
 DWORD GlobalFlagsClear;
 DWORD GlobalFlagsSet;
 DWORD CriticalSectionDefaultTimeout;
 ULONGLONG DeCommitFreeBlockThreshold;
 ULONGLONG DeCommitTotalFreeThreshold;
 ULONGLONG LockPrefixTable;
 ULONGLONG MaximumAllocationSize;
 ULONGLONG VirtualMemoryThreshold;
 ULONGLONG ProcessAffinityMask;
 DWORD ProcessHeapFlags;
 WORD CSDFlags;
 WORD Reserved1;
 ULONGLONG EditList;
 DWORD Reserved[2];
} IMAGE_LOAD_CONFIG_DIRECTORY64,*PIMAGE_LOAD_CONFIG_DIRECTORY64;
typedef struct _IMAGE_RUNTIME_FUNCTION_ENTRY {
 DWORD BeginAddress;
 DWORD EndAddress;
 PVOID ExceptionHandler;
 PVOID HandlerData;
 DWORD PrologEndAddress;
} IMAGE_RUNTIME_FUNCTION_ENTRY,*PIMAGE_RUNTIME_FUNCTION_ENTRY;
typedef struct _IMAGE_CE_RUNTIME_FUNCTION_ENTRY {
 unsigned int FuncStart:32;
 unsigned int PrologLen:8;
 unsigned int FuncLen:22;
 unsigned int ThirtyTwoBit:1;
 unsigned int ExceptionFlag:1;
} IMAGE_CE_RUNTIME_FUNCTION_ENTRY,*PIMAGE_CE_RUNTIME_FUNCTION_ENTRY;
typedef struct _IMAGE_DEBUG_DIRECTORY {
 DWORD Characteristics;
 DWORD TimeDateStamp;
 WORD MajorVersion;
 WORD MinorVersion;
 DWORD Type;
 DWORD SizeOfData;
 DWORD AddressOfRawData;
 DWORD PointerToRawData;
} IMAGE_DEBUG_DIRECTORY,*PIMAGE_DEBUG_DIRECTORY;
typedef struct _FPO_DATA {
 DWORD ulOffStart;
 DWORD cbProcSize;
 DWORD cdwLocals;
 WORD cdwParams;
 WORD cbProlog:8;
 WORD cbRegs:3;
 WORD fHasSEH:1;
 WORD fUseBP:1;
 WORD reserved:1;
 WORD cbFrame:2;
} FPO_DATA,*PFPO_DATA;
typedef struct _IMAGE_DEBUG_MISC {
 DWORD DataType;
 DWORD Length;
 BOOLEAN Unicode;
 BYTE Reserved[3];
 BYTE Data[1];
} IMAGE_DEBUG_MISC,*PIMAGE_DEBUG_MISC;
typedef struct _IMAGE_FUNCTION_ENTRY {
 DWORD StartingAddress;
 DWORD EndingAddress;
 DWORD EndOfPrologue;
} IMAGE_FUNCTION_ENTRY,*PIMAGE_FUNCTION_ENTRY;
typedef struct _IMAGE_FUNCTION_ENTRY64 {
 ULONGLONG StartingAddress;
 ULONGLONG EndingAddress;
 __extension__ union {
  ULONGLONG EndOfPrologue;
  ULONGLONG UnwindInfoAddress;
 } ;
} IMAGE_FUNCTION_ENTRY64,*PIMAGE_FUNCTION_ENTRY64;
typedef struct _IMAGE_SEPARATE_DEBUG_HEADER {
 WORD Signature;
 WORD Flags;
 WORD Machine;
 WORD Characteristics;
 DWORD TimeDateStamp;
 DWORD CheckSum;
 DWORD ImageBase;
 DWORD SizeOfImage;
 DWORD NumberOfSections;
 DWORD ExportedNamesSize;
 DWORD DebugDirectorySize;
 DWORD SectionAlignment;
 DWORD Reserved[2];
} IMAGE_SEPARATE_DEBUG_HEADER,*PIMAGE_SEPARATE_DEBUG_HEADER;
#pragma pack(pop)
typedef enum _CM_SERVICE_NODE_TYPE {
 DriverType=1,
 FileSystemType=2,
 Win32ServiceOwnProcess=16,
 Win32ServiceShareProcess=32,
 AdapterType=4,
 RecognizerType=8
} SERVICE_NODE_TYPE;
typedef enum _CM_SERVICE_LOAD_TYPE {
 BootLoad=0,
 SystemLoad=1,
 AutoLoad=2,
 DemandLoad=3,
 DisableLoad=4
} SERVICE_LOAD_TYPE;
typedef enum _CM_ERROR_CONTROL_TYPE {
 IgnoreError=0,
 NormalError=1,
 SevereError=2,
 CriticalError=3
} SERVICE_ERROR_TYPE;
typedef struct _NT_TIB {
 struct _EXCEPTION_REGISTRATION_RECORD *ExceptionList;
 PVOID StackBase;
 PVOID StackLimit;
 PVOID SubSystemTib;
 __extension__ union {
  PVOID FiberData;
  DWORD Version;
 } ;
 PVOID ArbitraryUserPointer;
 struct _NT_TIB *Self;
} NT_TIB,*PNT_TIB;
typedef struct _REPARSE_DATA_BUFFER {
 DWORD ReparseTag;
 WORD ReparseDataLength;
 WORD Reserved;
 __extension__ union {
  struct {
   WORD SubstituteNameOffset;
   WORD SubstituteNameLength;
   WORD PrintNameOffset;
   WORD PrintNameLength;
   ULONG Flags;
   WCHAR PathBuffer[1];
  } SymbolicLinkReparseBuffer;
  struct {
   WORD SubstituteNameOffset;
   WORD SubstituteNameLength;
   WORD PrintNameOffset;
   WORD PrintNameLength;
   WCHAR PathBuffer[1];
  } MountPointReparseBuffer;
  struct {
   BYTE DataBuffer[1];
  } GenericReparseBuffer;
 } ;
} REPARSE_DATA_BUFFER, *PREPARSE_DATA_BUFFER;
typedef struct _REPARSE_GUID_DATA_BUFFER {
 DWORD ReparseTag;
 WORD ReparseDataLength;
 WORD Reserved;
 GUID ReparseGuid;
 struct {
  BYTE DataBuffer[1];
 } GenericReparseBuffer;
} REPARSE_GUID_DATA_BUFFER, *PREPARSE_GUID_DATA_BUFFER;
typedef struct _REPARSE_POINT_INFORMATION {
 WORD ReparseDataLength;
 WORD UnparsedNameLength;
} REPARSE_POINT_INFORMATION, *PREPARSE_POINT_INFORMATION;

typedef union _FILE_SEGMENT_ELEMENT {
 PVOID64 Buffer;
 ULONGLONG Alignment;
}FILE_SEGMENT_ELEMENT, *PFILE_SEGMENT_ELEMENT;
# 3548 "/opt/cegcc/arm-mingw32ce/include/winnt.h" 3
typedef enum _JOBOBJECTINFOCLASS {
 JobObjectBasicAccountingInformation = 1,
 JobObjectBasicLimitInformation,
 JobObjectBasicProcessIdList,
 JobObjectBasicUIRestrictions,
 JobObjectSecurityLimitInformation,
 JobObjectEndOfJobTimeInformation,
 JobObjectAssociateCompletionPortInformation,
 JobObjectBasicAndIoAccountingInformation,
 JobObjectExtendedLimitInformation,
 JobObjectJobSetInformation,
 MaxJobObjectInfoClass
} JOBOBJECTINFOCLASS;
typedef struct _JOBOBJECT_BASIC_ACCOUNTING_INFORMATION {
 LARGE_INTEGER TotalUserTime;
 LARGE_INTEGER TotalKernelTime;
 LARGE_INTEGER ThisPeriodTotalUserTime;
 LARGE_INTEGER ThisPeriodTotalKernelTime;
 DWORD TotalPageFaultCount;
 DWORD TotalProcesses;
 DWORD ActiveProcesses;
 DWORD TotalTerminatedProcesses;
} JOBOBJECT_BASIC_ACCOUNTING_INFORMATION,*PJOBOBJECT_BASIC_ACCOUNTING_INFORMATION;
typedef struct _JOBOBJECT_BASIC_LIMIT_INFORMATION {
 LARGE_INTEGER PerProcessUserTimeLimit;
 LARGE_INTEGER PerJobUserTimeLimit;
 DWORD LimitFlags;
 SIZE_T MinimumWorkingSetSize;
 SIZE_T MaximumWorkingSetSize;
 DWORD ActiveProcessLimit;
 ULONG_PTR Affinity;
 DWORD PriorityClass;
 DWORD SchedulingClass;
} JOBOBJECT_BASIC_LIMIT_INFORMATION,*PJOBOBJECT_BASIC_LIMIT_INFORMATION;
typedef struct _JOBOBJECT_BASIC_PROCESS_ID_LIST {
 DWORD NumberOfAssignedProcesses;
 DWORD NumberOfProcessIdsInList;
 ULONG_PTR ProcessIdList[1];
} JOBOBJECT_BASIC_PROCESS_ID_LIST, *PJOBOBJECT_BASIC_PROCESS_ID_LIST;
typedef struct _JOBOBJECT_BASIC_UI_RESTRICTIONS {
 DWORD UIRestrictionsClass;
} JOBOBJECT_BASIC_UI_RESTRICTIONS,*PJOBOBJECT_BASIC_UI_RESTRICTIONS;
typedef struct _JOBOBJECT_SECURITY_LIMIT_INFORMATION {
 DWORD SecurityLimitFlags;
 HANDLE JobToken;
 PTOKEN_GROUPS SidsToDisable;
 PTOKEN_PRIVILEGES PrivilegesToDelete;
 PTOKEN_GROUPS RestrictedSids;
} JOBOBJECT_SECURITY_LIMIT_INFORMATION,*PJOBOBJECT_SECURITY_LIMIT_INFORMATION;
typedef struct _JOBOBJECT_END_OF_JOB_TIME_INFORMATION {
 DWORD EndOfJobTimeAction;
} JOBOBJECT_END_OF_JOB_TIME_INFORMATION,*PJOBOBJECT_END_OF_JOB_TIME_INFORMATION;
typedef struct _JOBOBJECT_ASSOCIATE_COMPLETION_PORT {
 PVOID CompletionKey;
 HANDLE CompletionPort;
} JOBOBJECT_ASSOCIATE_COMPLETION_PORT,*PJOBOBJECT_ASSOCIATE_COMPLETION_PORT;
typedef struct _JOBOBJECT_BASIC_AND_IO_ACCOUNTING_INFORMATION {
 JOBOBJECT_BASIC_ACCOUNTING_INFORMATION BasicInfo;
 IO_COUNTERS IoInfo;
} JOBOBJECT_BASIC_AND_IO_ACCOUNTING_INFORMATION,*PJOBOBJECT_BASIC_AND_IO_ACCOUNTING_INFORMATION;
typedef struct _JOBOBJECT_EXTENDED_LIMIT_INFORMATION {
 JOBOBJECT_BASIC_LIMIT_INFORMATION BasicLimitInformation;
 IO_COUNTERS IoInfo;
 SIZE_T ProcessMemoryLimit;
 SIZE_T JobMemoryLimit;
 SIZE_T PeakProcessMemoryUsed;
 SIZE_T PeakJobMemoryUsed;
} JOBOBJECT_EXTENDED_LIMIT_INFORMATION,*PJOBOBJECT_EXTENDED_LIMIT_INFORMATION;
typedef struct _JOBOBJECT_JOBSET_INFORMATION {
 DWORD MemberLevel;
} JOBOBJECT_JOBSET_INFORMATION,*PJOBOBJECT_JOBSET_INFORMATION;



# 1 "/opt/cegcc/arm-mingw32ce/include/pshpack4.h" 1 3

#pragma pack(push,4)
# 3623 "/opt/cegcc/arm-mingw32ce/include/winnt.h" 2 3






typedef enum _LATENCY_TIME {
 LT_DONT_CARE,
 LT_LOWEST_LATENCY
} LATENCY_TIME, *PLATENCY_TIME;

typedef enum _SYSTEM_POWER_STATE {
 PowerSystemUnspecified,
 PowerSystemWorking,
 PowerSystemSleeping1,
 PowerSystemSleeping2,
 PowerSystemSleeping3,
 PowerSystemHibernate,
 PowerSystemShutdown,
 PowerSystemMaximum
} SYSTEM_POWER_STATE, *PSYSTEM_POWER_STATE;


typedef enum {
 PowerActionNone,
 PowerActionReserved,
 PowerActionSleep,
 PowerActionHibernate,
 PowerActionShutdown,
 PowerActionShutdownReset,
 PowerActionShutdownOff,
 PowerActionWarmEject
} POWER_ACTION, *PPOWER_ACTION;
# 3666 "/opt/cegcc/arm-mingw32ce/include/winnt.h" 3
typedef enum _DEVICE_POWER_STATE {
 PowerDeviceUnspecified,
 PowerDeviceD0,
 PowerDeviceD1,
 PowerDeviceD2,
 PowerDeviceD3,
 PowerDeviceMaximum
} DEVICE_POWER_STATE, *PDEVICE_POWER_STATE;

typedef struct {
 DWORD Granularity;
 DWORD Capacity;
} BATTERY_REPORTING_SCALE, *PBATTERY_REPORTING_SCALE;

typedef struct _POWER_ACTION_POLICY {
 POWER_ACTION Action;
 ULONG Flags;
 ULONG EventCode;
} POWER_ACTION_POLICY, *PPOWER_ACTION_POLICY;
# 3713 "/opt/cegcc/arm-mingw32ce/include/winnt.h" 3
typedef struct _SYSTEM_POWER_LEVEL {
 BOOLEAN Enable;
 UCHAR Spare[3];
 ULONG BatteryLevel;
 POWER_ACTION_POLICY PowerPolicy;
 SYSTEM_POWER_STATE MinSystemState;
} SYSTEM_POWER_LEVEL, *PSYSTEM_POWER_LEVEL;

typedef struct _SYSTEM_POWER_POLICY {
 ULONG Revision;
 POWER_ACTION_POLICY PowerButton;
 POWER_ACTION_POLICY SleepButton;
 POWER_ACTION_POLICY LidClose;
 SYSTEM_POWER_STATE LidOpenWake;
 ULONG Reserved;
 POWER_ACTION_POLICY Idle;
 ULONG IdleTimeout;
 UCHAR IdleSensitivity;
 UCHAR DynamicThrottle;
 UCHAR Spare2[2];
 SYSTEM_POWER_STATE MinSleep;
 SYSTEM_POWER_STATE MaxSleep;
 SYSTEM_POWER_STATE ReducedLatencySleep;
 ULONG WinLogonFlags;
 ULONG Spare3;
 ULONG DozeS4Timeout;
 ULONG BroadcastCapacityResolution;
 SYSTEM_POWER_LEVEL DischargePolicy[4];
 ULONG VideoTimeout;
 BOOLEAN VideoDimDisplay;
 ULONG VideoReserved[3];
 ULONG SpindownTimeout;
 BOOLEAN OptimizeForPower;
 UCHAR FanThrottleTolerance;
 UCHAR ForcedThrottle;
 UCHAR MinThrottle;
 POWER_ACTION_POLICY OverThrottled;
} SYSTEM_POWER_POLICY, *PSYSTEM_POWER_POLICY;

typedef struct _SYSTEM_POWER_CAPABILITIES {
 BOOLEAN PowerButtonPresent;
 BOOLEAN SleepButtonPresent;
 BOOLEAN LidPresent;
 BOOLEAN SystemS1;
 BOOLEAN SystemS2;
 BOOLEAN SystemS3;
 BOOLEAN SystemS4;
 BOOLEAN SystemS5;
 BOOLEAN HiberFilePresent;
 BOOLEAN FullWake;
 BOOLEAN VideoDimPresent;
 BOOLEAN ApmPresent;
 BOOLEAN UpsPresent;
 BOOLEAN ThermalControl;
 BOOLEAN ProcessorThrottle;
 UCHAR ProcessorMinThrottle;
 UCHAR ProcessorMaxThrottle;
 BOOLEAN FastSystemS4;
 UCHAR spare2[3];
 BOOLEAN DiskSpinDown;
 UCHAR spare3[8];
 BOOLEAN SystemBatteriesPresent;
 BOOLEAN BatteriesAreShortTerm;
 BATTERY_REPORTING_SCALE BatteryScale[3];
 SYSTEM_POWER_STATE AcOnLineWake;
 SYSTEM_POWER_STATE SoftLidWake;
 SYSTEM_POWER_STATE RtcWake;
 SYSTEM_POWER_STATE MinDeviceWakeState;
 SYSTEM_POWER_STATE DefaultLowLatencyWake;
} SYSTEM_POWER_CAPABILITIES, *PSYSTEM_POWER_CAPABILITIES;

typedef struct _SYSTEM_BATTERY_STATE {
 BOOLEAN AcOnLine;
 BOOLEAN BatteryPresent;
 BOOLEAN Charging;
 BOOLEAN Discharging;
 BOOLEAN Spare1[4];
 ULONG MaxCapacity;
 ULONG RemainingCapacity;
 ULONG Rate;
 ULONG EstimatedTime;
 ULONG DefaultAlert1;
 ULONG DefaultAlert2;
} SYSTEM_BATTERY_STATE, *PSYSTEM_BATTERY_STATE;

typedef enum _POWER_INFORMATION_LEVEL {
 SystemPowerPolicyAc,
 SystemPowerPolicyDc,
 VerifySystemPolicyAc,
 VerifySystemPolicyDc,
 SystemPowerCapabilities,
 SystemBatteryState,
 SystemPowerStateHandler,
 ProcessorStateHandler,
 SystemPowerPolicyCurrent,
 AdministratorPowerPolicy,
 SystemReserveHiberFile,
 ProcessorInformation,
 SystemPowerInformation,
 ProcessorStateHandler2,
 LastWakeTime,
 LastSleepTime,
 SystemExecutionState,
 SystemPowerStateNotifyHandler,
 ProcessorPowerPolicyAc,
 ProcessorPowerPolicyDc,
 VerifyProcessorPowerPolicyAc,
 VerifyProcessorPowerPolicyDc,
 ProcessorPowerPolicyCurrent
} POWER_INFORMATION_LEVEL;





typedef struct _SYSTEM_POWER_INFORMATION {
 ULONG MaxIdlenessAllowed;
 ULONG Idleness;
 ULONG TimeRemaining;
 UCHAR CoolingMode;
} SYSTEM_POWER_INFORMATION,*PSYSTEM_POWER_INFORMATION;
# 3897 "/opt/cegcc/arm-mingw32ce/include/winnt.h" 3
typedef struct _PROCESSOR_POWER_POLICY_INFO {
 ULONG TimeCheck;
 ULONG DemoteLimit;
 ULONG PromoteLimit;
 UCHAR DemotePercent;
 UCHAR PromotePercent;
 UCHAR Spare[2];
 ULONG AllowDemotion : 1;
 ULONG AllowPromotion : 1;
 ULONG Reserved : 30;
} PROCESSOR_POWER_POLICY_INFO, *PPROCESSOR_POWER_POLICY_INFO;
typedef struct _PROCESSOR_POWER_POLICY {
 ULONG Revision;
 UCHAR DynamicThrottle;
 UCHAR Spare[3];
 ULONG Reserved;
 ULONG PolicyCount;
 PROCESSOR_POWER_POLICY_INFO Policy[3];
} PROCESSOR_POWER_POLICY, *PPROCESSOR_POWER_POLICY;
typedef struct _ADMINISTRATOR_POWER_POLICY {
 SYSTEM_POWER_STATE MinSleep;
 SYSTEM_POWER_STATE MaxSleep;
 ULONG MinVideoTimeout;
 ULONG MaxVideoTimeout;
 ULONG MinSpindownTimeout;
 ULONG MaxSpindownTimeout;
} ADMINISTRATOR_POWER_POLICY, *PADMINISTRATOR_POWER_POLICY;
# 1 "/opt/cegcc/arm-mingw32ce/include/poppack.h" 1 3

#pragma pack(pop)
# 3925 "/opt/cegcc/arm-mingw32ce/include/winnt.h" 2 3







typedef OSVERSIONINFOW OSVERSIONINFO,*POSVERSIONINFO,*LPOSVERSIONINFO;
typedef OSVERSIONINFOEXW OSVERSIONINFOEX,*POSVERSIONINFOEX,*LPOSVERSIONINFOEX;
# 4047 "/opt/cegcc/arm-mingw32ce/include/winnt.h" 3
typedef unsigned int size_t;
# 277 "/opt/cegcc/arm-mingw32ce/include/windef.h" 2 3

typedef UINT_PTR WPARAM;
typedef LONG_PTR LPARAM;
typedef LONG_PTR LRESULT;





typedef WORD ATOM;

typedef HANDLE HHOOK;
typedef HANDLE HGLOBAL;
typedef HANDLE HLOCAL;
typedef HANDLE GLOBALHANDLE;
typedef HANDLE LOCALHANDLE;
typedef void *HGDIOBJ;
typedef struct HACCEL__{int i;}*HACCEL;
typedef struct HBITMAP__{int i;}*HBITMAP;
typedef struct HBRUSH__{int i;}*HBRUSH;
typedef struct HCOLORSPACE__{int i;}*HCOLORSPACE;
typedef struct HDC__{int i;}*HDC;
typedef struct HGLRC__{int i;}*HGLRC;
typedef struct HDESK__{int i;}*HDESK;
typedef struct HENHMETAFILE__{int i;}*HENHMETAFILE;
typedef struct HFONT__{int i;}*HFONT;
typedef struct HICON__{int i;}*HICON;
typedef struct HKEY__{int i;}*HKEY;

typedef struct HMONITOR__{int i;}*HMONITOR;

typedef struct HTERMINAL__{int i;}*HTERMINAL;
typedef struct HWINEVENTHOOK__{int i;}*HWINEVENTHOOK;

typedef HKEY *PHKEY;
typedef struct HMENU__{int i;}*HMENU;
typedef struct HMETAFILE__{int i;}*HMETAFILE;
typedef struct HINSTANCE__{int i;}*HINSTANCE;
typedef HINSTANCE HMODULE;
typedef struct HPALETTE__{int i;}*HPALETTE;
typedef struct HPEN__{int i;}*HPEN;
typedef struct HRGN__{int i;}*HRGN;
typedef struct HRSRC__{int i;}*HRSRC;
typedef struct HSTR__{int i;}*HSTR;
typedef struct HTASK__{int i;}*HTASK;
typedef struct HWND__{int i;}*HWND;
typedef struct HWINSTA__{int i;}*HWINSTA;
typedef struct HKL__{int i;}*HKL;
typedef int HFILE;
typedef HICON HCURSOR;
typedef DWORD COLORREF;
typedef int ( *FARPROC)();
typedef int ( *NEARPROC)();
typedef int ( *PROC)();
typedef struct tagRECT {
 LONG left;
 LONG top;
 LONG right;
 LONG bottom;
} RECT,*PRECT,*LPRECT;
typedef const RECT *LPCRECT;
typedef struct tagRECTL {
 LONG left;
 LONG top;
 LONG right;
 LONG bottom;
} RECTL,*PRECTL,*LPRECTL;
typedef const RECTL *LPCRECTL;
typedef struct tagPOINT {
 LONG x;
 LONG y;
} POINT,POINTL,*PPOINT,*LPPOINT,*PPOINTL,*LPPOINTL;
typedef struct tagSIZE {
 LONG cx;
 LONG cy;
} SIZE,SIZEL,*PSIZE,*LPSIZE,*PSIZEL,*LPSIZEL;
typedef struct tagPOINTS {
 SHORT x;
 SHORT y;
} POINTS,*PPOINTS,*LPPOINTS;
# 49 "/opt/cegcc/arm-mingw32ce/include/windows.h" 2 3
# 1 "/opt/cegcc/arm-mingw32ce/include/wincon.h" 1 3



       
# 5 "/opt/cegcc/arm-mingw32ce/include/wincon.h" 3
# 62 "/opt/cegcc/arm-mingw32ce/include/wincon.h" 3
typedef struct _CHAR_INFO {
 union {
  WCHAR UnicodeChar;
  CHAR AsciiChar;
 } Char;
 WORD Attributes;
} CHAR_INFO, *PCHAR_INFO;
typedef struct _SMALL_RECT {
 SHORT Left;
 SHORT Top;
 SHORT Right;
 SHORT Bottom;
} SMALL_RECT, *PSMALL_RECT;
typedef struct _CONSOLE_CURSOR_INFO {
 DWORD dwSize;
 BOOL bVisible;
} CONSOLE_CURSOR_INFO,*PCONSOLE_CURSOR_INFO;
typedef struct _COORD {
 SHORT X;
 SHORT Y;
} COORD, *PCOORD;
typedef struct _CONSOLE_FONT_INFO {
 DWORD nFont;
 COORD dwFontSize;
} CONSOLE_FONT_INFO, *PCONSOLE_FONT_INFO;
typedef struct _CONSOLE_SCREEN_BUFFER_INFO {
 COORD dwSize;
 COORD dwCursorPosition;
 WORD wAttributes;
 SMALL_RECT srWindow;
 COORD dwMaximumWindowSize;
} CONSOLE_SCREEN_BUFFER_INFO,*PCONSOLE_SCREEN_BUFFER_INFO;
typedef BOOL( *PHANDLER_ROUTINE)(DWORD);
typedef struct _KEY_EVENT_RECORD {
 BOOL bKeyDown;
 WORD wRepeatCount;
 WORD wVirtualKeyCode;
 WORD wVirtualScanCode;
 union {
  WCHAR UnicodeChar;
  CHAR AsciiChar;
 } uChar;
 DWORD dwControlKeyState;
}


 __attribute__((packed))

KEY_EVENT_RECORD;

typedef struct _MOUSE_EVENT_RECORD {
 COORD dwMousePosition;
 DWORD dwButtonState;
 DWORD dwControlKeyState;
 DWORD dwEventFlags;
} MOUSE_EVENT_RECORD;
typedef struct _WINDOW_BUFFER_SIZE_RECORD { COORD dwSize; } WINDOW_BUFFER_SIZE_RECORD;
typedef struct _MENU_EVENT_RECORD { UINT dwCommandId; } MENU_EVENT_RECORD,*PMENU_EVENT_RECORD;
typedef struct _FOCUS_EVENT_RECORD { BOOL bSetFocus; } FOCUS_EVENT_RECORD;
typedef struct _INPUT_RECORD {
 WORD EventType;
 union {
  KEY_EVENT_RECORD KeyEvent;
  MOUSE_EVENT_RECORD MouseEvent;
  WINDOW_BUFFER_SIZE_RECORD WindowBufferSizeEvent;
  MENU_EVENT_RECORD MenuEvent;
  FOCUS_EVENT_RECORD FocusEvent;
 } Event;
} INPUT_RECORD,*PINPUT_RECORD;

BOOL AllocConsole(void);




HANDLE CreateConsoleScreenBuffer(DWORD,DWORD,const SECURITY_ATTRIBUTES*,DWORD,LPVOID);
BOOL FillConsoleOutputAttribute(HANDLE,WORD,DWORD,COORD,PDWORD);
BOOL FillConsoleOutputCharacterA(HANDLE,CHAR,DWORD,COORD,PDWORD);
BOOL FillConsoleOutputCharacterW(HANDLE,WCHAR,DWORD,COORD,PDWORD);
BOOL FlushConsoleInputBuffer(HANDLE);
BOOL FreeConsole(void);
BOOL GenerateConsoleCtrlEvent(DWORD,DWORD);
UINT GetConsoleCP(void);
BOOL GetConsoleCursorInfo(HANDLE,PCONSOLE_CURSOR_INFO);
BOOL GetConsoleMode(HANDLE,PDWORD);
UINT GetConsoleOutputCP(void);
BOOL GetConsoleScreenBufferInfo(HANDLE,PCONSOLE_SCREEN_BUFFER_INFO);
DWORD GetConsoleTitleA(LPSTR,DWORD);
DWORD GetConsoleTitleW(LPWSTR,DWORD);







COORD GetLargestConsoleWindowSize(HANDLE);
BOOL GetNumberOfConsoleInputEvents(HANDLE,PDWORD);
BOOL GetNumberOfConsoleMouseButtons(PDWORD);
BOOL PeekConsoleInputA(HANDLE,PINPUT_RECORD,DWORD,PDWORD);
BOOL PeekConsoleInputW(HANDLE,PINPUT_RECORD,DWORD,PDWORD);
BOOL ReadConsoleA(HANDLE,PVOID,DWORD,PDWORD,PVOID);
BOOL ReadConsoleW(HANDLE,PVOID,DWORD,PDWORD,PVOID);
BOOL ReadConsoleInputA(HANDLE,PINPUT_RECORD,DWORD,PDWORD);
BOOL ReadConsoleInputW(HANDLE,PINPUT_RECORD,DWORD,PDWORD);
BOOL ReadConsoleOutputAttribute(HANDLE,LPWORD,DWORD,COORD,LPDWORD);
BOOL ReadConsoleOutputCharacterA(HANDLE,LPSTR,DWORD,COORD,PDWORD);
BOOL ReadConsoleOutputCharacterW(HANDLE,LPWSTR,DWORD,COORD,PDWORD);
BOOL ReadConsoleOutputA(HANDLE,PCHAR_INFO,COORD,COORD,PSMALL_RECT);
BOOL ReadConsoleOutputW(HANDLE,PCHAR_INFO,COORD,COORD,PSMALL_RECT);
BOOL ScrollConsoleScreenBufferA(HANDLE,const SMALL_RECT*,const SMALL_RECT*,COORD,const CHAR_INFO*);
BOOL ScrollConsoleScreenBufferW(HANDLE,const SMALL_RECT*,const SMALL_RECT*,COORD,const CHAR_INFO*);
BOOL SetConsoleActiveScreenBuffer(HANDLE);
BOOL SetConsoleCP(UINT);
BOOL SetConsoleCtrlHandler(PHANDLER_ROUTINE,BOOL);
BOOL SetConsoleCursorInfo(HANDLE,const CONSOLE_CURSOR_INFO*);
BOOL SetConsoleCursorPosition(HANDLE,COORD);



BOOL SetConsoleMode(HANDLE,DWORD);
BOOL SetConsoleOutputCP(UINT);
BOOL SetConsoleScreenBufferSize(HANDLE,COORD);
BOOL SetConsoleTextAttribute(HANDLE,WORD);
BOOL SetConsoleTitleA(LPCSTR);
BOOL SetConsoleTitleW(LPCWSTR);
BOOL SetConsoleWindowInfo(HANDLE,BOOL,const SMALL_RECT*);
BOOL WriteConsoleA(HANDLE,PCVOID,DWORD,PDWORD,PVOID);
BOOL WriteConsoleW(HANDLE,PCVOID,DWORD,PDWORD,PVOID);
BOOL WriteConsoleInputA(HANDLE,const INPUT_RECORD*,DWORD,PDWORD);
BOOL WriteConsoleInputW(HANDLE,const INPUT_RECORD*,DWORD,PDWORD);
BOOL WriteConsoleOutputA(HANDLE,const CHAR_INFO*,COORD,COORD,PSMALL_RECT);
BOOL WriteConsoleOutputW(HANDLE,const CHAR_INFO*,COORD,COORD,PSMALL_RECT);
BOOL WriteConsoleOutputAttribute(HANDLE,const WORD*,DWORD,COORD,PDWORD);
BOOL WriteConsoleOutputCharacterA(HANDLE,LPCSTR,DWORD,COORD,PDWORD);
BOOL WriteConsoleOutputCharacterW(HANDLE,LPCWSTR,DWORD,COORD,PDWORD);
# 50 "/opt/cegcc/arm-mingw32ce/include/windows.h" 2 3
# 1 "/opt/cegcc/arm-mingw32ce/include/winbase.h" 1 3



       
# 5 "/opt/cegcc/arm-mingw32ce/include/winbase.h" 3
# 610 "/opt/cegcc/arm-mingw32ce/include/winbase.h" 3
typedef struct _FILETIME {
 DWORD dwLowDateTime;
 DWORD dwHighDateTime;
} FILETIME,*PFILETIME,*LPFILETIME;
typedef struct _BY_HANDLE_FILE_INFORMATION {
 DWORD dwFileAttributes;
 FILETIME ftCreationTime;
 FILETIME ftLastAccessTime;
 FILETIME ftLastWriteTime;
 DWORD dwVolumeSerialNumber;
 DWORD nFileSizeHigh;
 DWORD nFileSizeLow;
 DWORD nNumberOfLinks;
 DWORD nFileIndexHigh;
 DWORD nFileIndexLow;

 DWORD dwOID;

} BY_HANDLE_FILE_INFORMATION,*LPBY_HANDLE_FILE_INFORMATION;
# 709 "/opt/cegcc/arm-mingw32ce/include/winbase.h" 3
typedef struct _DCB {
 DWORD DCBlength;
 DWORD BaudRate;
 DWORD fBinary:1;
 DWORD fParity:1;
 DWORD fOutxCtsFlow:1;
 DWORD fOutxDsrFlow:1;
 DWORD fDtrControl:2;
 DWORD fDsrSensitivity:1;
 DWORD fTXContinueOnXoff:1;
 DWORD fOutX:1;
 DWORD fInX:1;
 DWORD fErrorChar:1;
 DWORD fNull:1;
 DWORD fRtsControl:2;
 DWORD fAbortOnError:1;
 DWORD fDummy2:17;
 WORD wReserved;
 WORD XonLim;
 WORD XoffLim;
 BYTE ByteSize;
 BYTE Parity;
 BYTE StopBits;
 char XonChar;
 char XoffChar;
 char ErrorChar;
 char EofChar;
 char EvtChar;
 WORD wReserved1;
} DCB,*LPDCB;
typedef struct _COMM_CONFIG {
 DWORD dwSize;
 WORD wVersion;
 WORD wReserved;
 DCB dcb;
 DWORD dwProviderSubType;
 DWORD dwProviderOffset;
 DWORD dwProviderSize;
 WCHAR wcProviderData[1];
} COMMCONFIG,*LPCOMMCONFIG;
typedef struct _COMMPROP {
 WORD wPacketLength;
 WORD wPacketVersion;
 DWORD dwServiceMask;
 DWORD dwReserved1;
 DWORD dwMaxTxQueue;
 DWORD dwMaxRxQueue;
 DWORD dwMaxBaud;
 DWORD dwProvSubType;
 DWORD dwProvCapabilities;
 DWORD dwSettableParams;
 DWORD dwSettableBaud;
 WORD wSettableData;
 WORD wSettableStopParity;
 DWORD dwCurrentTxQueue;
 DWORD dwCurrentRxQueue;
 DWORD dwProvSpec1;
 DWORD dwProvSpec2;
 WCHAR wcProvChar[1];
} COMMPROP,*LPCOMMPROP;
typedef struct _COMMTIMEOUTS {
 DWORD ReadIntervalTimeout;
 DWORD ReadTotalTimeoutMultiplier;
 DWORD ReadTotalTimeoutConstant;
 DWORD WriteTotalTimeoutMultiplier;
 DWORD WriteTotalTimeoutConstant;
} COMMTIMEOUTS,*LPCOMMTIMEOUTS;
typedef struct _COMSTAT {
 DWORD fCtsHold:1;
 DWORD fDsrHold:1;
 DWORD fRlsdHold:1;
 DWORD fXoffHold:1;
 DWORD fXoffSent:1;
 DWORD fEof:1;
 DWORD fTxim:1;
 DWORD fReserved:25;
 DWORD cbInQue;
 DWORD cbOutQue;
} COMSTAT,*LPCOMSTAT;
typedef DWORD ( *LPTHREAD_START_ROUTINE)(LPVOID);
typedef struct _CREATE_PROCESS_DEBUG_INFO {
 HANDLE hFile;
 HANDLE hProcess;
 HANDLE hThread;
 LPVOID lpBaseOfImage;
 DWORD dwDebugInfoFileOffset;
 DWORD nDebugInfoSize;
 LPVOID lpThreadLocalBase;
 LPTHREAD_START_ROUTINE lpStartAddress;
 LPVOID lpImageName;
 WORD fUnicode;
} CREATE_PROCESS_DEBUG_INFO,*LPCREATE_PROCESS_DEBUG_INFO;
typedef struct _CREATE_THREAD_DEBUG_INFO {
 HANDLE hThread;
 LPVOID lpThreadLocalBase;
 LPTHREAD_START_ROUTINE lpStartAddress;
} CREATE_THREAD_DEBUG_INFO,*LPCREATE_THREAD_DEBUG_INFO;
typedef struct _EXCEPTION_DEBUG_INFO {
 EXCEPTION_RECORD ExceptionRecord;
 DWORD dwFirstChance;
} EXCEPTION_DEBUG_INFO,*LPEXCEPTION_DEBUG_INFO;
typedef struct _EXIT_THREAD_DEBUG_INFO {
 DWORD dwExitCode;
} EXIT_THREAD_DEBUG_INFO,*LPEXIT_THREAD_DEBUG_INFO;
typedef struct _EXIT_PROCESS_DEBUG_INFO {
 DWORD dwExitCode;
} EXIT_PROCESS_DEBUG_INFO,*LPEXIT_PROCESS_DEBUG_INFO;
typedef struct _LOAD_DLL_DEBUG_INFO {
 HANDLE hFile;
 LPVOID lpBaseOfDll;
 DWORD dwDebugInfoFileOffset;
 DWORD nDebugInfoSize;
 LPVOID lpImageName;
 WORD fUnicode;
} LOAD_DLL_DEBUG_INFO,*LPLOAD_DLL_DEBUG_INFO;
typedef struct _UNLOAD_DLL_DEBUG_INFO {
 LPVOID lpBaseOfDll;
} UNLOAD_DLL_DEBUG_INFO,*LPUNLOAD_DLL_DEBUG_INFO;
typedef struct _OUTPUT_DEBUG_STRING_INFO {
 LPSTR lpDebugStringData;
 WORD fUnicode;
 WORD nDebugStringLength;
} OUTPUT_DEBUG_STRING_INFO,*LPOUTPUT_DEBUG_STRING_INFO;
typedef struct _RIP_INFO {
 DWORD dwError;
 DWORD dwType;
} RIP_INFO,*LPRIP_INFO;
typedef struct _DEBUG_EVENT {
 DWORD dwDebugEventCode;
 DWORD dwProcessId;
 DWORD dwThreadId;
 union {
  EXCEPTION_DEBUG_INFO Exception;
  CREATE_THREAD_DEBUG_INFO CreateThread;
  CREATE_PROCESS_DEBUG_INFO CreateProcessInfo;
  EXIT_THREAD_DEBUG_INFO ExitThread;
  EXIT_PROCESS_DEBUG_INFO ExitProcess;
  LOAD_DLL_DEBUG_INFO LoadDll;
  UNLOAD_DLL_DEBUG_INFO UnloadDll;
  OUTPUT_DEBUG_STRING_INFO DebugString;
  RIP_INFO RipInfo;
 } u;
} DEBUG_EVENT,*LPDEBUG_EVENT;
typedef struct _OVERLAPPED {
 ULONG_PTR Internal;
 ULONG_PTR InternalHigh;
 union {
  struct {
 DWORD Offset;
 DWORD OffsetHigh;
 };
 PVOID Pointer;
 };
 HANDLE hEvent;
} OVERLAPPED,*POVERLAPPED,*LPOVERLAPPED;
typedef struct _STARTUPINFOA {
 DWORD cb;
 LPSTR lpReserved;
 LPSTR lpDesktop;
 LPSTR lpTitle;
 DWORD dwX;
 DWORD dwY;
 DWORD dwXSize;
 DWORD dwYSize;
 DWORD dwXCountChars;
 DWORD dwYCountChars;
 DWORD dwFillAttribute;
 DWORD dwFlags;
 WORD wShowWindow;
 WORD cbReserved2;
 PBYTE lpReserved2;
 HANDLE hStdInput;
 HANDLE hStdOutput;
 HANDLE hStdError;
} STARTUPINFOA,*LPSTARTUPINFOA;
typedef struct _STARTUPINFOW {
 DWORD cb;
 LPWSTR lpReserved;
 LPWSTR lpDesktop;
 LPWSTR lpTitle;
 DWORD dwX;
 DWORD dwY;
 DWORD dwXSize;
 DWORD dwYSize;
 DWORD dwXCountChars;
 DWORD dwYCountChars;
 DWORD dwFillAttribute;
 DWORD dwFlags;
 WORD wShowWindow;
 WORD cbReserved2;
 PBYTE lpReserved2;
 HANDLE hStdInput;
 HANDLE hStdOutput;
 HANDLE hStdError;
} STARTUPINFOW,*LPSTARTUPINFOW;
typedef struct _PROCESS_INFORMATION {
 HANDLE hProcess;
 HANDLE hThread;
 DWORD dwProcessId;
 DWORD dwThreadId;
} PROCESS_INFORMATION,*PPROCESS_INFORMATION,*LPPROCESS_INFORMATION;
typedef struct _CRITICAL_SECTION_DEBUG {
 WORD Type;
 WORD CreatorBackTraceIndex;
 struct _CRITICAL_SECTION *CriticalSection;
 LIST_ENTRY ProcessLocksList;
 DWORD EntryCount;
 DWORD ContentionCount;
 DWORD Spare [2];
} CRITICAL_SECTION_DEBUG,*PCRITICAL_SECTION_DEBUG;

typedef struct _CRITICAL_SECTION {
 DWORD LockCount;
 HANDLE OwnerThread;
 HANDLE hCrit;
 DWORD needtrap;
 DWORD dwContentions;
} CRITICAL_SECTION,*PCRITICAL_SECTION,*LPCRITICAL_SECTION;
# 937 "/opt/cegcc/arm-mingw32ce/include/winbase.h" 3
typedef struct _SYSTEMTIME {
 WORD wYear;
 WORD wMonth;
 WORD wDayOfWeek;
 WORD wDay;
 WORD wHour;
 WORD wMinute;
 WORD wSecond;
 WORD wMilliseconds;
} SYSTEMTIME,*LPSYSTEMTIME;
typedef struct _WIN32_FILE_ATTRIBUTE_DATA {
 DWORD dwFileAttributes;
 FILETIME ftCreationTime;
 FILETIME ftLastAccessTime;
 FILETIME ftLastWriteTime;
 DWORD nFileSizeHigh;
 DWORD nFileSizeLow;
} WIN32_FILE_ATTRIBUTE_DATA,*LPWIN32_FILE_ATTRIBUTE_DATA;
typedef struct _WIN32_FIND_DATAA {
 DWORD dwFileAttributes;
 FILETIME ftCreationTime;
 FILETIME ftLastAccessTime;
 FILETIME ftLastWriteTime;
 DWORD nFileSizeHigh;
 DWORD nFileSizeLow;

    DWORD dwOID;




 CHAR cFileName[260];



} WIN32_FIND_DATAA,*PWIN32_FIND_DATAA,*LPWIN32_FIND_DATAA;
typedef struct _WIN32_FIND_DATAW {
 DWORD dwFileAttributes;
 FILETIME ftCreationTime;
 FILETIME ftLastAccessTime;
 FILETIME ftLastWriteTime;
 DWORD nFileSizeHigh;
 DWORD nFileSizeLow;

    DWORD dwOID;




 WCHAR cFileName[260];



} WIN32_FIND_DATAW,*PWIN32_FIND_DATAW,*LPWIN32_FIND_DATAW;
typedef struct _WIN32_STREAM_ID {
 DWORD dwStreamId;
 DWORD dwStreamAttributes;
 LARGE_INTEGER Size;
 DWORD dwStreamNameSize;
 WCHAR cStreamName[1];
} WIN32_STREAM_ID, *LPWIN32_STREAM_ID;
typedef enum _FINDEX_INFO_LEVELS {
 FindExInfoStandard,
 FindExInfoMaxInfoLevel
} FINDEX_INFO_LEVELS;
typedef enum _FINDEX_SEARCH_OPS {
 FindExSearchNameMatch,
 FindExSearchLimitToDirectories,
 FindExSearchLimitToDevices,
 FindExSearchMaxSearchOp
} FINDEX_SEARCH_OPS;
typedef enum _ACL_INFORMATION_CLASS {
 AclRevisionInformation=1,
 AclSizeInformation
} ACL_INFORMATION_CLASS;
typedef struct tagHW_PROFILE_INFOA {
 DWORD dwDockInfo;
 CHAR szHwProfileGuid[39];
 CHAR szHwProfileName[80];
} HW_PROFILE_INFOA,*LPHW_PROFILE_INFOA;
typedef struct tagHW_PROFILE_INFOW {
 DWORD dwDockInfo;
 WCHAR szHwProfileGuid[39];
 WCHAR szHwProfileName[80];
} HW_PROFILE_INFOW,*LPHW_PROFILE_INFOW;
typedef enum _GET_FILEEX_INFO_LEVELS {
 GetFileExInfoStandard,
 GetFileExMaxInfoLevel
} GET_FILEEX_INFO_LEVELS;
typedef struct _SYSTEM_INFO {
 __extension__ union {
  DWORD dwOemId;
  __extension__ struct {
   WORD wProcessorArchitecture;
   WORD wReserved;
  } ;
 } ;
 DWORD dwPageSize;
 PVOID lpMinimumApplicationAddress;
 PVOID lpMaximumApplicationAddress;
 DWORD dwActiveProcessorMask;
 DWORD dwNumberOfProcessors;
 DWORD dwProcessorType;
 DWORD dwAllocationGranularity;
 WORD wProcessorLevel;
 WORD wProcessorRevision;
} SYSTEM_INFO,*LPSYSTEM_INFO;
# 1055 "/opt/cegcc/arm-mingw32ce/include/winbase.h" 3
typedef struct _SYSTEM_POWER_STATUS_EX {
  BYTE ACLineStatus;
  BYTE BatteryFlag;
  BYTE BatteryLifePercent;
  BYTE Reserved1;
  DWORD BatteryLifeTime;
  DWORD BatteryFullLifeTime;
  BYTE Reserved2;
  BYTE BackupBatteryFlag;
  BYTE BackupBatteryLifePercent;
  BYTE Reserved3;
  DWORD BackupBatteryLifeTime;
  DWORD BackupBatteryFullLifeTime;
} SYSTEM_POWER_STATUS_EX, *PSYSTEM_POWER_STATUS_EX, *LPSYSTEM_POWER_STATUS_EX;
typedef struct _SYSTEM_POWER_STATUS_EX2 {
  BYTE ACLineStatus;
  BYTE BatteryFlag;
  BYTE BatteryLifePercent;
  BYTE Reserved1;
  DWORD BatteryLifeTime;
  DWORD BatteryFullLifeTime;
  BYTE Reserved2;
  BYTE BackupBatteryFlag;
  BYTE BackupBatteryLifePercent;
  BYTE Reserved3;
  DWORD BackupBatteryLifeTime;
  DWORD BackupBatteryFullLifeTime;
  DWORD BatteryVoltage;
  DWORD BatteryCurrent;
  DWORD BatteryAverageCurrent;
  DWORD BatteryAverageInterval;
  DWORD BatterymAHourConsumed;
  DWORD BatteryTemperature;
  DWORD BackupBatteryVoltage;
  BYTE BatteryChemistry;
} SYSTEM_POWER_STATUS_EX2, *PSYSTEM_POWER_STATUS_EX2, *LPSYSTEM_POWER_STATUS_EX2;

typedef struct _TIME_ZONE_INFORMATION {
 LONG Bias;
 WCHAR StandardName[32];
 SYSTEMTIME StandardDate;
 LONG StandardBias;
 WCHAR DaylightName[32];
 SYSTEMTIME DaylightDate;
 LONG DaylightBias;
} TIME_ZONE_INFORMATION,*LPTIME_ZONE_INFORMATION;
typedef struct _MEMORYSTATUS {
 DWORD dwLength;
 DWORD dwMemoryLoad;
 DWORD dwTotalPhys;
 DWORD dwAvailPhys;
 DWORD dwTotalPageFile;
 DWORD dwAvailPageFile;
 DWORD dwTotalVirtual;
 DWORD dwAvailVirtual;
} MEMORYSTATUS,*LPMEMORYSTATUS;


typedef enum {
  DeviceSearchByLegacyName,
  DeviceSearchByDeviceName,
  DeviceSearchByBusName,
  DeviceSearchByGuid,
  DeviceSearchByParent
} DeviceSearchType;
typedef struct _DevmgrDeviceInformation_tag {
  DWORD dwSize;
  HANDLE hDevice;
  HANDLE hParentDevice;
  WCHAR szLegacyName[6];
  WCHAR szDeviceKey[260];
  WCHAR szDeviceName[260];
  WCHAR szBusName[260];
} DEVMGR_DEVICE_INFORMATION, *PDEVMGR_DEVICE_INFORMATION;
# 1143 "/opt/cegcc/arm-mingw32ce/include/winbase.h" 3
typedef struct _LDT_ENTRY {
 WORD LimitLow;
 WORD BaseLow;
 union {
  struct {
   BYTE BaseMid;
   BYTE Flags1;
   BYTE Flags2;
   BYTE BaseHi;
  } Bytes;
  struct {
   DWORD BaseMid:8;
   DWORD Type:5;
   DWORD Dpl:2;
   DWORD Pres:1;
   DWORD LimitHi:4;
   DWORD Sys:1;
   DWORD Reserved_0:1;
   DWORD Default_Big:1;
   DWORD Granularity:1;
   DWORD BaseHi:8;
  } Bits;
 } HighWord;
} LDT_ENTRY,*PLDT_ENTRY,*LPLDT_ENTRY;
typedef struct _PROCESS_HEAP_ENTRY {
 PVOID lpData;
 DWORD cbData;
 BYTE cbOverhead;
 BYTE iRegionIndex;
 WORD wFlags;
 __extension__ union {
  struct {
   HANDLE hMem;
   DWORD dwReserved[3];
  } Block;
  struct {
   DWORD dwCommittedSize;
   DWORD dwUnCommittedSize;
   LPVOID lpFirstBlock;
   LPVOID lpLastBlock;
  } Region;
 } ;
} PROCESS_HEAP_ENTRY,*LPPROCESS_HEAP_ENTRY;
typedef struct _OFSTRUCT {
 BYTE cBytes;
 BYTE fFixedDisk;
 WORD nErrCode;
 WORD Reserved1;
 WORD Reserved2;
 CHAR szPathName[128];
} OFSTRUCT,*LPOFSTRUCT,*POFSTRUCT;
typedef struct _WIN_CERTIFICATE {
      DWORD dwLength;
      WORD wRevision;
      WORD wCertificateType;
      BYTE bCertificate[1];
} WIN_CERTIFICATE, *LPWIN_CERTIFICATE;
# 1286 "/opt/cegcc/arm-mingw32ce/include/winbase.h" 3
typedef DWORD( *LPPROGRESS_ROUTINE)(LARGE_INTEGER,LARGE_INTEGER,LARGE_INTEGER,LARGE_INTEGER,DWORD,DWORD,HANDLE,HANDLE,LPVOID);
typedef void( *LPFIBER_START_ROUTINE)(PVOID);
typedef BOOL( *ENUMRESLANGPROCA)(HMODULE,LPCSTR,LPCSTR,WORD,LONG);
typedef BOOL( *ENUMRESLANGPROCW)(HMODULE,LPCWSTR,LPCWSTR,WORD,LONG);





typedef BOOL( *ENUMRESNAMEPROCA)(HMODULE,LPCSTR,LPSTR,LONG);
typedef BOOL( *ENUMRESNAMEPROCW)(HMODULE,LPCWSTR,LPWSTR,LONG);





typedef BOOL( *ENUMRESTYPEPROCA)(HMODULE,LPSTR,LONG);
typedef BOOL( *ENUMRESTYPEPROCW)(HMODULE,LPWSTR,LONG);





typedef void( *LPOVERLAPPED_COMPLETION_ROUTINE)(DWORD,DWORD,LPOVERLAPPED);
typedef LONG( *PTOP_LEVEL_EXCEPTION_FILTER)(LPEXCEPTION_POINTERS);
typedef PTOP_LEVEL_EXCEPTION_FILTER LPTOP_LEVEL_EXCEPTION_FILTER;
typedef void( *PAPCFUNC)(ULONG_PTR);
typedef void( *PTIMERAPCROUTINE)(PVOID,DWORD,DWORD);
# 1322 "/opt/cegcc/arm-mingw32ce/include/winbase.h" 3
int WinMain(HINSTANCE,HINSTANCE,LPWSTR,int);

int wWinMain(HINSTANCE,HINSTANCE,LPWSTR,int);
 long _hread(HFILE,LPVOID,long);
 long _hwrite(HFILE,LPCSTR,long);
 HFILE _lclose(HFILE);
 HFILE _lcreat(LPCSTR,int);
 LONG _llseek(HFILE,LONG,int);
 HFILE _lopen(LPCSTR,int);
 UINT _lread(HFILE,LPVOID,UINT);
 UINT _lwrite(HFILE,LPCSTR,UINT);

 BOOL AccessCheck(PSECURITY_DESCRIPTOR,HANDLE,DWORD,PGENERIC_MAPPING,PPRIVILEGE_SET,PDWORD,PDWORD,PBOOL);
 BOOL AccessCheckAndAuditAlarmA(LPCSTR,LPVOID,LPSTR,LPSTR,PSECURITY_DESCRIPTOR,DWORD,PGENERIC_MAPPING,BOOL,PDWORD,PBOOL,PBOOL);
 BOOL AccessCheckAndAuditAlarmW(LPCWSTR,LPVOID,LPWSTR,LPWSTR,PSECURITY_DESCRIPTOR,DWORD,PGENERIC_MAPPING,BOOL,PDWORD,PBOOL,PBOOL);



 BOOL AddAccessAllowedAce(PACL,DWORD,DWORD,PSID);
 BOOL AddAccessDeniedAce(PACL,DWORD,DWORD,PSID);




 BOOL AddAce(PACL,DWORD,DWORD,PVOID,DWORD);
 ATOM AddAtomA(LPCSTR);
 ATOM AddAtomW(LPCWSTR);
 BOOL AddAuditAccessAce(PACL,DWORD,DWORD,PSID,BOOL,BOOL);






 BOOL AdjustTokenGroups(HANDLE,BOOL,PTOKEN_GROUPS,DWORD,PTOKEN_GROUPS,PDWORD);
 BOOL AdjustTokenPrivileges(HANDLE,BOOL,PTOKEN_PRIVILEGES,DWORD,PTOKEN_PRIVILEGES,PDWORD);
 BOOL AllocateAndInitializeSid(PSID_IDENTIFIER_AUTHORITY,BYTE,DWORD,DWORD,DWORD,DWORD,DWORD,DWORD,DWORD,DWORD,PSID*);
 BOOL AllocateLocallyUniqueId(PLUID);
 BOOL AreAllAccessesGranted(DWORD,DWORD);
 BOOL AreAnyAccessesGranted(DWORD,DWORD);
 BOOL AreFileApisANSI(void);
 BOOL BackupEventLogA(HANDLE,LPCSTR);
 BOOL BackupEventLogW(HANDLE,LPCWSTR);
 BOOL BackupRead(HANDLE,LPBYTE,DWORD,LPDWORD,BOOL,BOOL,LPVOID*);
 BOOL BackupSeek(HANDLE,DWORD,DWORD,LPDWORD,LPDWORD,LPVOID*);
 BOOL BackupWrite(HANDLE,LPBYTE,DWORD,LPDWORD,BOOL,BOOL,LPVOID*);
 BOOL Beep(DWORD,DWORD);
 HANDLE BeginUpdateResourceA(LPCSTR,BOOL);
 HANDLE BeginUpdateResourceW(LPCWSTR,BOOL);
 BOOL BuildCommDCBA(LPCSTR,LPDCB);
 BOOL BuildCommDCBW(LPCWSTR,LPDCB);
 BOOL BuildCommDCBAndTimeoutsA(LPCSTR,LPDCB,LPCOMMTIMEOUTS);
 BOOL BuildCommDCBAndTimeoutsW(LPCWSTR,LPDCB,LPCOMMTIMEOUTS);
 BOOL CallNamedPipeA(LPCSTR,PVOID,DWORD,PVOID,DWORD,PDWORD,DWORD);
 BOOL CallNamedPipeW(LPCWSTR,PVOID,DWORD,PVOID,DWORD,PDWORD,DWORD);
 BOOL CancelDeviceWakeupRequest(HANDLE);
 BOOL CancelIo(HANDLE);
 BOOL CancelWaitableTimer(HANDLE);
# 1391 "/opt/cegcc/arm-mingw32ce/include/winbase.h" 3
 BOOL ClearCommBreak(HANDLE);
 BOOL ClearCommError(HANDLE,PDWORD,LPCOMSTAT);
 BOOL ClearEventLogA(HANDLE,LPCSTR);
 BOOL ClearEventLogW(HANDLE,LPCWSTR);
 BOOL CloseEventLog(HANDLE);
 BOOL CloseHandle(HANDLE);
 BOOL CommConfigDialogA(LPCSTR,HWND,LPCOMMCONFIG);
 BOOL CommConfigDialogW(LPCWSTR,HWND,LPCOMMCONFIG);
 LONG CompareFileTime(const FILETIME*,const FILETIME*);
 BOOL ConnectNamedPipe(HANDLE,LPOVERLAPPED);
 BOOL ContinueDebugEvent(DWORD,DWORD,DWORD);

 BOOL ConvertFiberToThread(void);

 PVOID ConvertThreadToFiber(PVOID);
 BOOL CopyFileA(LPCSTR,LPCSTR,BOOL);
 BOOL CopyFileW(LPCWSTR,LPCWSTR,BOOL);
 BOOL CopyFileExA(LPCSTR,LPCSTR,LPPROGRESS_ROUTINE,LPVOID,LPBOOL,DWORD);
 BOOL CopyFileExW(LPCWSTR,LPCWSTR,LPPROGRESS_ROUTINE,LPVOID,LPBOOL,DWORD);
# 1418 "/opt/cegcc/arm-mingw32ce/include/winbase.h" 3
 BOOL CopySid(DWORD,PSID,PSID);




 BOOL CreateDirectoryA(LPCSTR,LPSECURITY_ATTRIBUTES);
 BOOL CreateDirectoryW(LPCWSTR,LPSECURITY_ATTRIBUTES);
 BOOL CreateDirectoryExA(LPCSTR,LPCSTR,LPSECURITY_ATTRIBUTES);
 BOOL CreateDirectoryExW(LPCWSTR,LPCWSTR,LPSECURITY_ATTRIBUTES);
 HANDLE CreateEventA(LPSECURITY_ATTRIBUTES,BOOL,BOOL,LPCSTR);
 HANDLE CreateEventW(LPSECURITY_ATTRIBUTES,BOOL,BOOL,LPCWSTR);
 LPVOID CreateFiber(SIZE_T,LPFIBER_START_ROUTINE,LPVOID);

 LPVOID CreateFiberEx(SIZE_T,SIZE_T,DWORD,LPFIBER_START_ROUTINE,LPVOID);

 HANDLE CreateFileA(LPCSTR,DWORD,DWORD,LPSECURITY_ATTRIBUTES,DWORD,DWORD,HANDLE);
 HANDLE CreateFileW(LPCWSTR,DWORD,DWORD,LPSECURITY_ATTRIBUTES,DWORD,DWORD,HANDLE);

HANDLE CreateFileForMappingW(LPCTSTR lpFileName, DWORD dwDesiredAccess, DWORD dwShareMode, LPSECURITY_ATTRIBUTES lpSecurityAttributes, DWORD dwCreationDisposition, DWORD dwFlagsAndAttributes, HANDLE hTemplateFile);

 HANDLE CreateFileMappingA(HANDLE,LPSECURITY_ATTRIBUTES,DWORD,DWORD,DWORD,LPCSTR);
 HANDLE CreateFileMappingW(HANDLE,LPSECURITY_ATTRIBUTES,DWORD,DWORD,DWORD,LPCWSTR);




 HANDLE CreateIoCompletionPort(HANDLE,HANDLE,ULONG_PTR,DWORD);
# 1453 "/opt/cegcc/arm-mingw32ce/include/winbase.h" 3
 HANDLE CreateMailslotA(LPCSTR,DWORD,DWORD,LPSECURITY_ATTRIBUTES);
 HANDLE CreateMailslotW(LPCWSTR,DWORD,DWORD,LPSECURITY_ATTRIBUTES);



 HANDLE CreateMutexA(LPSECURITY_ATTRIBUTES,BOOL,LPCSTR);
 HANDLE CreateMutexW(LPSECURITY_ATTRIBUTES,BOOL,LPCWSTR);
 HANDLE CreateNamedPipeA(LPCSTR,DWORD,DWORD,DWORD,DWORD,DWORD,DWORD,LPSECURITY_ATTRIBUTES);
 HANDLE CreateNamedPipeW(LPCWSTR,DWORD,DWORD,DWORD,DWORD,DWORD,DWORD,LPSECURITY_ATTRIBUTES);
 BOOL CreatePipe(PHANDLE,PHANDLE,LPSECURITY_ATTRIBUTES,DWORD);
 BOOL CreatePrivateObjectSecurity(PSECURITY_DESCRIPTOR,PSECURITY_DESCRIPTOR,PSECURITY_DESCRIPTOR*,BOOL,HANDLE,PGENERIC_MAPPING);
 BOOL CreateProcessA(LPCSTR,LPSTR,LPSECURITY_ATTRIBUTES,LPSECURITY_ATTRIBUTES,BOOL,DWORD,PVOID,LPCSTR,LPSTARTUPINFOA,LPPROCESS_INFORMATION);
 BOOL CreateProcessW(LPCWSTR,LPWSTR,LPSECURITY_ATTRIBUTES,LPSECURITY_ATTRIBUTES,BOOL,DWORD,PVOID,LPCWSTR,LPSTARTUPINFOW,LPPROCESS_INFORMATION);
 BOOL CreateProcessAsUserA(HANDLE,LPCSTR,LPSTR,LPSECURITY_ATTRIBUTES,LPSECURITY_ATTRIBUTES,BOOL,DWORD,PVOID,LPCSTR,LPSTARTUPINFOA,LPPROCESS_INFORMATION);
 BOOL CreateProcessAsUserW(HANDLE,LPCWSTR,LPWSTR,LPSECURITY_ATTRIBUTES,LPSECURITY_ATTRIBUTES,BOOL,DWORD,PVOID,LPCWSTR,LPSTARTUPINFOW,LPPROCESS_INFORMATION);
# 1476 "/opt/cegcc/arm-mingw32ce/include/winbase.h" 3
 HANDLE CreateRemoteThread(HANDLE,LPSECURITY_ATTRIBUTES,DWORD,LPTHREAD_START_ROUTINE,LPVOID,DWORD,LPDWORD);







 HANDLE CreateSemaphoreA(LPSECURITY_ATTRIBUTES,LONG,LONG,LPCSTR);
 HANDLE CreateSemaphoreW(LPSECURITY_ATTRIBUTES,LONG,LONG,LPCWSTR);




 DWORD CreateTapePartition(HANDLE,DWORD,DWORD,DWORD);




 HANDLE CreateThread(LPSECURITY_ATTRIBUTES,DWORD,LPTHREAD_START_ROUTINE,PVOID,DWORD,PDWORD);
 HANDLE CreateWaitableTimerA(LPSECURITY_ATTRIBUTES,BOOL,LPCSTR);
 HANDLE CreateWaitableTimerW(LPSECURITY_ATTRIBUTES,BOOL,LPCWSTR);



 BOOL DebugActiveProcess(DWORD);
# 1514 "/opt/cegcc/arm-mingw32ce/include/winbase.h" 3
 BOOL DefineDosDeviceA(DWORD,LPCSTR,LPCSTR);
 BOOL DefineDosDeviceW(DWORD,LPCWSTR,LPCWSTR);

 BOOL DeleteAce(PACL,DWORD);
 ATOM DeleteAtom(ATOM);
 void DeleteCriticalSection(PCRITICAL_SECTION);
 void DeleteFiber(PVOID);
 BOOL DeleteFileA(LPCSTR);
 BOOL DeleteFileW(LPCWSTR);







 BOOL DeregisterEventSource(HANDLE);
 BOOL DestroyPrivateObjectSecurity(PSECURITY_DESCRIPTOR*);
 BOOL DeviceIoControl(HANDLE,DWORD,PVOID,DWORD,PVOID,DWORD,PDWORD,POVERLAPPED);
 BOOL DisableThreadLibraryCalls(HMODULE);




 BOOL DisconnectNamedPipe(HANDLE);
 BOOL DosDateTimeToFileTime(WORD,WORD,LPFILETIME);
 BOOL DuplicateHandle(HANDLE,HANDLE,HANDLE,PHANDLE,DWORD,BOOL,DWORD);
 BOOL DuplicateToken(HANDLE,SECURITY_IMPERSONATION_LEVEL,PHANDLE);
 BOOL DuplicateTokenEx(HANDLE,DWORD,LPSECURITY_ATTRIBUTES,SECURITY_IMPERSONATION_LEVEL,TOKEN_TYPE,PHANDLE);
 BOOL EncryptFileA(LPCSTR);
 BOOL EncryptFileW(LPCWSTR);
 BOOL EndUpdateResourceA(HANDLE,BOOL);
 BOOL EndUpdateResourceW(HANDLE,BOOL);
 void EnterCriticalSection(LPCRITICAL_SECTION);

 BOOL EnumDeviceInterfaces(HANDLE, DWORD, GUID*, LPWSTR, LPDWORD);
 DWORD EnumDevices(LPTSTR lpszDevList, LPDWORD lpBuflen);

 BOOL EnumResourceLanguagesA(HMODULE,LPCSTR,LPCSTR,ENUMRESLANGPROCA,LONG_PTR);
 BOOL EnumResourceLanguagesW(HMODULE,LPCWSTR,LPCWSTR,ENUMRESLANGPROCW,LONG_PTR);
 BOOL EnumResourceNamesA(HMODULE,LPCSTR,ENUMRESNAMEPROCA,LONG_PTR);
 BOOL EnumResourceNamesW(HMODULE,LPCWSTR,ENUMRESNAMEPROCW,LONG_PTR);
 BOOL EnumResourceTypesA(HMODULE,ENUMRESTYPEPROCA,LONG_PTR);
 BOOL EnumResourceTypesW(HMODULE,ENUMRESTYPEPROCW,LONG_PTR);
 BOOL EqualPrefixSid(PSID,PSID);
 BOOL EqualSid(PSID,PSID);
 DWORD EraseTape(HANDLE,DWORD,BOOL);
 BOOL EscapeCommFunction(HANDLE,DWORD);

 BOOL TerminateProcess(HANDLE,UINT);
# 1 "/opt/cegcc/arm-mingw32ce/include/kfuncs.h" 1 3
# 37 "/opt/cegcc/arm-mingw32ce/include/kfuncs.h" 3
static inline HANDLE GetCurrentProcess()
{
  return ((HANDLE)(2 +64));

}

static inline HANDLE GetCurrentThread()
{
  return ((HANDLE)(1 +64));
}

static inline DWORD GetCurrentThreadId()
{
  return ((DWORD)(((HANDLE *)(((LPBYTE)0xFFFFC800)+0x004))[1]));
}

static inline DWORD GetCurrentProcessId()
{
  return ((DWORD)(((HANDLE *)(((LPBYTE)0xFFFFC800)+0x004))[2]));
}






 BOOL EventModify(HANDLE h, DWORD e);





static inline BOOL PulseEvent (HANDLE x)
{
  return EventModify(x, 1);
}

static inline BOOL ResetEvent (HANDLE x)
{
  return EventModify(x, 2);
}

static inline BOOL SetEvent (HANDLE x)
{
  return EventModify(x, 3);
}





 DWORD TlsCall(DWORD func, DWORD val);

static inline DWORD TlsAlloc (void)
{
  return (TlsCall(0, 0));
}

static inline BOOL TlsFree(DWORD x)
{
  return (TlsCall(1, x));
}
# 1565 "/opt/cegcc/arm-mingw32ce/include/winbase.h" 2 3

static inline void ExitProcess(UINT code)
{
 TerminateProcess(GetCurrentProcess(), code);
 while (1);
}




__attribute__((noreturn)) void ExitThread(DWORD);
 DWORD ExpandEnvironmentStringsA(LPCSTR,LPSTR,DWORD);
 DWORD ExpandEnvironmentStringsW(LPCWSTR,LPWSTR,DWORD);
 void FatalAppExitA(UINT,LPCSTR);
 void FatalAppExitW(UINT,LPCWSTR);
 void FatalExit(int);
 BOOL FileEncryptionStatusA(LPCSTR,LPDWORD);
 BOOL FileEncryptionStatusW(LPCWSTR,LPDWORD);
 BOOL FileTimeToDosDateTime(const FILETIME *,LPWORD,LPWORD);
 BOOL FileTimeToLocalFileTime(const FILETIME *,LPFILETIME);
 BOOL FileTimeToSystemTime(const FILETIME *,LPSYSTEMTIME);





 ATOM FindAtomA(LPCSTR);
 ATOM FindAtomW(LPCWSTR);
 BOOL FindClose(HANDLE);
 BOOL FindCloseChangeNotification(HANDLE);
 HANDLE FindFirstChangeNotificationA(LPCSTR,BOOL,DWORD);
 HANDLE FindFirstChangeNotificationW(LPCWSTR,BOOL,DWORD);

 HANDLE FindFirstDevice(DeviceSearchType,LPCVOID,PDEVMGR_DEVICE_INFORMATION);
 BOOL FindNextDevice(HANDLE,PDEVMGR_DEVICE_INFORMATION);

 HANDLE FindFirstFileA(LPCSTR,LPWIN32_FIND_DATAA);
 HANDLE FindFirstFileW(LPCWSTR,LPWIN32_FIND_DATAW);
 HANDLE FindFirstFileExA(LPCSTR,FINDEX_INFO_LEVELS,PVOID,FINDEX_SEARCH_OPS,PVOID,DWORD);
 HANDLE FindFirstFileExW(LPCWSTR,FINDEX_INFO_LEVELS,PVOID,FINDEX_SEARCH_OPS,PVOID,DWORD);
 BOOL FindFirstFreeAce(PACL,PVOID*);






 BOOL FindNextChangeNotification(HANDLE);
 BOOL FindNextFileA(HANDLE,LPWIN32_FIND_DATAA);
 BOOL FindNextFileW(HANDLE,LPWIN32_FIND_DATAW);
# 1623 "/opt/cegcc/arm-mingw32ce/include/winbase.h" 3
 HRSRC FindResourceA(HMODULE,LPCSTR,LPCSTR);
 HRSRC FindResourceW(HINSTANCE,LPCWSTR,LPCWSTR);
 HRSRC FindResourceExA(HINSTANCE,LPCSTR,LPCSTR,WORD);
 HRSRC FindResourceExW(HINSTANCE,LPCWSTR,LPCWSTR,WORD);




 BOOL FlushFileBuffers(HANDLE);
 BOOL FlushInstructionCache(HANDLE,PCVOID,DWORD);
 BOOL FlushViewOfFile(PCVOID,DWORD);
 DWORD FormatMessageA(DWORD,PCVOID,DWORD,DWORD,LPSTR,DWORD,va_list*);
 DWORD FormatMessageW(DWORD,PCVOID,DWORD,DWORD,LPWSTR,DWORD,va_list*);
 BOOL FreeEnvironmentStringsA(LPSTR);
 BOOL FreeEnvironmentStringsW(LPWSTR);
 BOOL FreeLibrary(HMODULE);
__attribute__((noreturn)) void FreeLibraryAndExitThread(HMODULE,DWORD);



 BOOL FreeResource(HGLOBAL);

 PVOID FreeSid(PSID);
 BOOL GetAce(PACL,DWORD,LPVOID*);
 BOOL GetAclInformation(PACL,PVOID,DWORD,ACL_INFORMATION_CLASS);
 UINT GetAtomNameA(ATOM,LPSTR,int);
 UINT GetAtomNameW(ATOM,LPWSTR,int);
 BOOL GetBinaryTypeA(LPCSTR,PDWORD);
 BOOL GetBinaryTypeW(LPCWSTR,PDWORD);
 LPSTR GetCommandLineA(void);
 LPWSTR GetCommandLineW(void);
 BOOL GetCommConfig(HANDLE,LPCOMMCONFIG,PDWORD);
 BOOL GetCommMask(HANDLE,PDWORD);
 BOOL GetCommModemStatus(HANDLE,PDWORD);
 BOOL GetCommProperties(HANDLE,LPCOMMPROP);
 BOOL GetCommState(HANDLE,LPDCB);
 BOOL GetCommTimeouts(HANDLE,LPCOMMTIMEOUTS);
 DWORD GetCompressedFileSizeA(LPCSTR,PDWORD);
 DWORD GetCompressedFileSizeW(LPCWSTR,PDWORD);
 BOOL GetComputerNameA(LPSTR,PDWORD);
 BOOL GetComputerNameW(LPWSTR,PDWORD);







 DWORD GetCurrentDirectoryA(DWORD,LPSTR);
 DWORD GetCurrentDirectoryW(DWORD,LPWSTR);
 BOOL GetCurrentHwProfileA(LPHW_PROFILE_INFOA);
 BOOL GetCurrentHwProfileW(LPHW_PROFILE_INFOW);
# 1683 "/opt/cegcc/arm-mingw32ce/include/winbase.h" 3
 BOOL GetDefaultCommConfigA(LPCSTR,LPCOMMCONFIG,PDWORD);
 BOOL GetDefaultCommConfigW(LPCWSTR,LPCOMMCONFIG,PDWORD);
 BOOL GetDevicePowerState(HANDLE, BOOL*);

 BOOL GetDeviceInformationByDeviceHandle(HANDLE,PDEVMGR_DEVICE_INFORMATION);
 BOOL GetDeviceInformationByFileHandle(HANDLE,PDEVMGR_DEVICE_INFORMATION);

 BOOL GetDiskFreeSpaceA(LPCSTR,PDWORD,PDWORD,PDWORD,PDWORD);
 BOOL GetDiskFreeSpaceW(LPCWSTR,PDWORD,PDWORD,PDWORD,PDWORD);
 BOOL GetDiskFreeSpaceExA(LPCSTR,PULARGE_INTEGER,PULARGE_INTEGER,PULARGE_INTEGER);
 BOOL GetDiskFreeSpaceExW(LPCWSTR,PULARGE_INTEGER,PULARGE_INTEGER,PULARGE_INTEGER);




 UINT GetDriveTypeA(LPCSTR);
 UINT GetDriveTypeW(LPCWSTR);
 LPCH GetEnvironmentStrings(void);
 LPCH GetEnvironmentStringsA(void);
 LPWCH GetEnvironmentStringsW(void);
 DWORD GetEnvironmentVariableA(LPCSTR,LPSTR,DWORD);
 DWORD GetEnvironmentVariableW(LPCWSTR,LPWSTR,DWORD);
 BOOL GetExitCodeProcess(HANDLE,PDWORD);
 BOOL GetExitCodeThread(HANDLE,PDWORD);
 DWORD GetFileAttributesA(LPCSTR);
 DWORD GetFileAttributesW(LPCWSTR);
 BOOL GetFileAttributesExA(LPCSTR,GET_FILEEX_INFO_LEVELS,PVOID);
 BOOL GetFileAttributesExW(LPCWSTR,GET_FILEEX_INFO_LEVELS,PVOID);
 BOOL GetFileInformationByHandle(HANDLE,LPBY_HANDLE_FILE_INFORMATION);




 BOOL GetFileSecurityA(LPCSTR,SECURITY_INFORMATION,PSECURITY_DESCRIPTOR,DWORD,PDWORD);
 BOOL GetFileSecurityW(LPCWSTR,SECURITY_INFORMATION,PSECURITY_DESCRIPTOR,DWORD,PDWORD);
 DWORD GetFileSize(HANDLE,PDWORD);



 BOOL GetFileTime(HANDLE,LPFILETIME,LPFILETIME,LPFILETIME);
 DWORD GetFileType(HANDLE);






 DWORD GetFullPathNameA(LPCSTR,DWORD,LPSTR,LPSTR*);
 DWORD GetFullPathNameW(LPCWSTR,DWORD,LPWSTR,LPWSTR*);
 BOOL GetHandleInformation(HANDLE,PDWORD);
 BOOL GetKernelObjectSecurity(HANDLE,SECURITY_INFORMATION,PSECURITY_DESCRIPTOR,DWORD,PDWORD);
 DWORD GetLastError(void);
 DWORD GetLengthSid(PSID);
 void GetLocalTime(LPSYSTEMTIME);
 DWORD GetLogicalDrives(void);
 DWORD GetLogicalDriveStringsA(DWORD,LPSTR);
 DWORD GetLogicalDriveStringsW(DWORD,LPWSTR);




 BOOL GetMailslotInfo(HANDLE,PDWORD,PDWORD,PDWORD,PDWORD);
 DWORD GetModuleFileNameA(HINSTANCE,LPSTR,DWORD);
 DWORD GetModuleFileNameW(HINSTANCE,LPWSTR,DWORD);
 HMODULE GetModuleHandleA(LPCSTR);
 HMODULE GetModuleHandleW(LPCWSTR);




 BOOL GetNamedPipeHandleStateA(HANDLE,PDWORD,PDWORD,PDWORD,PDWORD,LPSTR,DWORD);
 BOOL GetNamedPipeHandleStateW(HANDLE,PDWORD,PDWORD,PDWORD,PDWORD,LPWSTR,DWORD);
 BOOL GetNamedPipeInfo(HANDLE,PDWORD,PDWORD,PDWORD,PDWORD);



 BOOL GetNumberOfEventLogRecords(HANDLE,PDWORD);
 BOOL GetOldestEventLogRecord(HANDLE,PDWORD);
 BOOL GetOverlappedResult(HANDLE,LPOVERLAPPED,PDWORD,BOOL);
 DWORD GetPriorityClass(HANDLE);
 BOOL GetPrivateObjectSecurity(PSECURITY_DESCRIPTOR,SECURITY_INFORMATION,PSECURITY_DESCRIPTOR,DWORD,PDWORD);
 UINT GetPrivateProfileIntA(LPCSTR,LPCSTR,INT,LPCSTR);
 UINT GetPrivateProfileIntW(LPCWSTR,LPCWSTR,INT,LPCWSTR);
 DWORD GetPrivateProfileSectionA(LPCSTR,LPSTR,DWORD,LPCSTR);
 DWORD GetPrivateProfileSectionW(LPCWSTR,LPWSTR,DWORD,LPCWSTR);
 DWORD GetPrivateProfileSectionNamesA(LPSTR,DWORD,LPCSTR);
 DWORD GetPrivateProfileSectionNamesW(LPWSTR,DWORD,LPCWSTR);
 DWORD GetPrivateProfileStringA(LPCSTR,LPCSTR,LPCSTR,LPSTR,DWORD,LPCSTR);
 DWORD GetPrivateProfileStringW(LPCWSTR,LPCWSTR,LPCWSTR,LPWSTR,DWORD,LPCWSTR);
 BOOL GetPrivateProfileStructA(LPCSTR,LPCSTR,LPVOID,UINT,LPCSTR);
 BOOL GetPrivateProfileStructW(LPCWSTR,LPCWSTR,LPVOID,UINT,LPCWSTR);


 FARPROC GetProcAddressA(HINSTANCE,LPCSTR);

 FARPROC GetProcAddressW(HINSTANCE,LPCWSTR);



 BOOL GetProcessAffinityMask(HANDLE,PDWORD,PDWORD);






 HANDLE GetProcessHeap(void);
 DWORD GetProcessHeaps(DWORD,PHANDLE);






 BOOL GetProcessPriorityBoost(HANDLE,PBOOL);
 BOOL GetProcessShutdownParameters(PDWORD,PDWORD);
 BOOL GetProcessTimes(HANDLE,LPFILETIME,LPFILETIME,LPFILETIME,LPFILETIME);
 DWORD GetProcessVersion(DWORD);
 HWINSTA GetProcessWindowStation(void);
 BOOL GetProcessWorkingSetSize(HANDLE,PSIZE_T,PSIZE_T);
 UINT GetProfileIntA(LPCSTR,LPCSTR,INT);
 UINT GetProfileIntW(LPCWSTR,LPCWSTR,INT);
 DWORD GetProfileSectionA(LPCSTR,LPSTR,DWORD);
 DWORD GetProfileSectionW(LPCWSTR,LPWSTR,DWORD);
 DWORD GetProfileStringA(LPCSTR,LPCSTR,LPCSTR,LPSTR,DWORD);
 DWORD GetProfileStringW(LPCWSTR,LPCWSTR,LPCWSTR,LPWSTR,DWORD);
 BOOL GetQueuedCompletionStatus(HANDLE,PDWORD,PULONG_PTR,LPOVERLAPPED*,DWORD);
 BOOL GetSecurityDescriptorControl(PSECURITY_DESCRIPTOR,PSECURITY_DESCRIPTOR_CONTROL,PDWORD);
 BOOL GetSecurityDescriptorDacl(PSECURITY_DESCRIPTOR,LPBOOL,PACL*,LPBOOL);
 BOOL GetSecurityDescriptorGroup(PSECURITY_DESCRIPTOR,PSID*,LPBOOL);
 DWORD GetSecurityDescriptorLength(PSECURITY_DESCRIPTOR);
 BOOL GetSecurityDescriptorOwner(PSECURITY_DESCRIPTOR,PSID*,LPBOOL);
 BOOL GetSecurityDescriptorSacl(PSECURITY_DESCRIPTOR,LPBOOL,PACL*,LPBOOL);
 DWORD GetShortPathNameA(LPCSTR,LPSTR,DWORD);
 DWORD GetShortPathNameW(LPCWSTR,LPWSTR,DWORD);
 PSID_IDENTIFIER_AUTHORITY GetSidIdentifierAuthority(PSID);
 DWORD GetSidLengthRequired(UCHAR);
 PDWORD GetSidSubAuthority(PSID,DWORD);
 PUCHAR GetSidSubAuthorityCount(PSID);
 void GetStartupInfoA(LPSTARTUPINFOA);
 void GetStartupInfoW(LPSTARTUPINFOW);
 HANDLE GetStdHandle(DWORD);



 UINT GetSystemDirectoryA(LPSTR,UINT);
 UINT GetSystemDirectoryW(LPWSTR,UINT);
 void GetSystemInfo(LPSYSTEM_INFO);



 DWORD GetSystemPowerStatusEx2(PSYSTEM_POWER_STATUS_EX2,DWORD,BOOL);
 BOOL GetSystemPowerStatusEx(PSYSTEM_POWER_STATUS_EX,BOOL);




 void GetSystemTime(LPSYSTEMTIME);



 BOOL GetSystemTimeAdjustment(PDWORD,PDWORD,PBOOL);
 void GetSystemTimeAsFileTime(LPFILETIME);
# 1854 "/opt/cegcc/arm-mingw32ce/include/winbase.h" 3
 DWORD GetTapeParameters(HANDLE,DWORD,PDWORD,PVOID);
 DWORD GetTapePosition(HANDLE,DWORD,PDWORD,PDWORD,PDWORD);
 DWORD GetTapeStatus(HANDLE);
 UINT GetTempFileNameA(LPCSTR,LPCSTR,UINT,LPSTR);
 UINT GetTempFileNameW(LPCWSTR,LPCWSTR,UINT,LPWSTR);
 DWORD GetTempPathA(DWORD,LPSTR);
 DWORD GetTempPathW(DWORD,LPWSTR);
 BOOL GetThreadContext(HANDLE,LPCONTEXT);



 int GetThreadPriority(HANDLE);
 BOOL GetThreadPriorityBoost(HANDLE,PBOOL);
 BOOL GetThreadSelectorEntry(HANDLE,DWORD,LPLDT_ENTRY);
 BOOL GetThreadTimes(HANDLE,LPFILETIME,LPFILETIME,LPFILETIME,LPFILETIME);
 DWORD GetTickCount(void);
 DWORD GetTimeZoneInformation(LPTIME_ZONE_INFORMATION);
 BOOL GetTokenInformation(HANDLE,TOKEN_INFORMATION_CLASS,PVOID,DWORD,PDWORD);
 BOOL GetUserNameA (LPSTR,PDWORD);
 BOOL GetUserNameW(LPWSTR,PDWORD);
 DWORD GetVersion(void);
 BOOL GetVersionExA(LPOSVERSIONINFOA);
 BOOL GetVersionExW(LPOSVERSIONINFOW);
 BOOL GetVolumeInformationA(LPCSTR,LPSTR,DWORD,PDWORD,PDWORD,PDWORD,LPSTR,DWORD);
 BOOL GetVolumeInformationW(LPCWSTR,LPWSTR,DWORD,PDWORD,PDWORD,PDWORD,LPWSTR,DWORD);
# 1889 "/opt/cegcc/arm-mingw32ce/include/winbase.h" 3
 UINT GetWindowsDirectoryA(LPSTR,UINT);
 UINT GetWindowsDirectoryW(LPWSTR,UINT);
 DWORD GetWindowThreadProcessId(HWND,PDWORD);
 UINT GetWriteWatch(DWORD,PVOID,SIZE_T,PVOID*,PULONG_PTR,PULONG);
 ATOM GlobalAddAtomA(LPCSTR);
 ATOM GlobalAddAtomW( LPCWSTR);
 SIZE_T GlobalCompact(DWORD);
 ATOM GlobalDeleteAtom(ATOM);

 ATOM GlobalFindAtomA(LPCSTR);
 ATOM GlobalFindAtomW(LPCWSTR);
 void GlobalFix(HGLOBAL);
 UINT GlobalGetAtomNameA(ATOM,LPSTR,int);
 UINT GlobalGetAtomNameW(ATOM,LPWSTR,int);
# 1922 "/opt/cegcc/arm-mingw32ce/include/winbase.h" 3
 void GlobalMemoryStatus(LPMEMORYSTATUS);



 void GlobalUnfix(HGLOBAL);
 BOOL GlobalUnWire(HGLOBAL);
 PVOID GlobalWire(HGLOBAL);

 PVOID HeapAlloc(HANDLE,DWORD,DWORD);
SIZE_T HeapCompact(HANDLE,DWORD);
 HANDLE HeapCreate(DWORD,DWORD,DWORD);
 BOOL HeapDestroy(HANDLE);
 BOOL HeapFree(HANDLE,DWORD,PVOID);
 BOOL HeapLock(HANDLE);



 PVOID HeapReAlloc(HANDLE,DWORD,PVOID,DWORD);



 DWORD HeapSize(HANDLE,DWORD,PCVOID);
 BOOL HeapUnlock(HANDLE);
 BOOL HeapValidate(HANDLE,DWORD,PCVOID);
 BOOL HeapWalk(HANDLE,LPPROCESS_HEAP_ENTRY);
 BOOL ImpersonateLoggedOnUser(HANDLE);
 BOOL ImpersonateNamedPipeClient(HANDLE);
 BOOL ImpersonateSelf(SECURITY_IMPERSONATION_LEVEL);
 BOOL InitAtomTable(DWORD);
 BOOL InitializeAcl(PACL,DWORD,DWORD);
 void InitializeCriticalSection(LPCRITICAL_SECTION);
 BOOL InitializeCriticalSectionAndSpinCount(LPCRITICAL_SECTION,DWORD);
 DWORD SetCriticalSectionSpinCount(LPCRITICAL_SECTION,DWORD);
 BOOL InitializeSecurityDescriptor(PSECURITY_DESCRIPTOR,DWORD);
 BOOL InitializeSid (PSID,PSID_IDENTIFIER_AUTHORITY,BYTE);
# 1966 "/opt/cegcc/arm-mingw32ce/include/winbase.h" 3
LONG InterlockedCompareExchange(LONG volatile *,LONG,LONG);



LONG InterlockedDecrement(LONG volatile *);
LONG InterlockedExchange(LONG volatile *,LONG);



LONG InterlockedExchangeAdd(LONG volatile *,LONG);



LONG InterlockedIncrement(LONG volatile *);







 BOOL IsBadCodePtr(FARPROC);
 BOOL IsBadHugeReadPtr(PCVOID,UINT);
 BOOL IsBadHugeWritePtr(PVOID,UINT);
 BOOL IsBadReadPtr(PCVOID,UINT);
 BOOL IsBadStringPtrA(LPCSTR,UINT);
 BOOL IsBadStringPtrW(LPCWSTR,UINT);
 BOOL IsBadWritePtr(PVOID,UINT);
 BOOL IsDebuggerPresent(void);



 BOOL IsProcessorFeaturePresent(DWORD);
 BOOL IsSystemResumeAutomatic(void);
 BOOL IsTextUnicode(PCVOID,int,LPINT);



 BOOL IsValidAcl(PACL);
 BOOL IsValidSecurityDescriptor(PSECURITY_DESCRIPTOR);
 BOOL IsValidSid(PSID);



 void LeaveCriticalSection(LPCRITICAL_SECTION);

 HINSTANCE LoadLibraryA(LPCSTR);
 HINSTANCE LoadLibraryExA(LPCSTR,HANDLE,DWORD);
 HINSTANCE LoadLibraryExW(LPCWSTR,HANDLE,DWORD);
 HINSTANCE LoadLibraryW(LPCWSTR);
 DWORD LoadModule(LPCSTR,PVOID);
 HGLOBAL LoadResource(HINSTANCE,HRSRC);
 HLOCAL LocalAlloc(UINT,SIZE_T);
 SIZE_T LocalCompact(UINT);
 HLOCAL LocalDiscard(HLOCAL);
 BOOL LocalFileTimeToFileTime(const FILETIME *,LPFILETIME);





 HLOCAL LocalFree(HLOCAL);
# 2038 "/opt/cegcc/arm-mingw32ce/include/winbase.h" 3
 HLOCAL LocalReAlloc(HLOCAL,SIZE_T,UINT);
 SIZE_T LocalShrink(HLOCAL,UINT);
 UINT LocalSize(HLOCAL);





 BOOL LockFile(HANDLE,DWORD,DWORD,DWORD,DWORD);
 BOOL LockFileEx(HANDLE,DWORD,DWORD,DWORD,DWORD,LPOVERLAPPED);






 BOOL LogonUserA(LPSTR,LPSTR,LPSTR,DWORD,DWORD,PHANDLE);
 BOOL LogonUserW(LPWSTR,LPWSTR,LPWSTR,DWORD,DWORD,PHANDLE);
 BOOL LookupAccountNameA(LPCSTR,LPCSTR,PSID,PDWORD,LPSTR,PDWORD,PSID_NAME_USE);
 BOOL LookupAccountNameW(LPCWSTR,LPCWSTR,PSID,PDWORD,LPWSTR,PDWORD,PSID_NAME_USE);
 BOOL LookupAccountSidA(LPCSTR,PSID,LPSTR,PDWORD,LPSTR,PDWORD,PSID_NAME_USE);
 BOOL LookupAccountSidW(LPCWSTR,PSID,LPWSTR,PDWORD,LPWSTR,PDWORD,PSID_NAME_USE);
 BOOL LookupPrivilegeDisplayNameA(LPCSTR,LPCSTR,LPSTR,PDWORD,PDWORD);
 BOOL LookupPrivilegeDisplayNameW(LPCWSTR,LPCWSTR,LPWSTR,PDWORD,PDWORD);
 BOOL LookupPrivilegeNameA(LPCSTR,PLUID,LPSTR,PDWORD);
 BOOL LookupPrivilegeNameW(LPCWSTR,PLUID,LPWSTR,PDWORD);
 BOOL LookupPrivilegeValueA(LPCSTR,LPCSTR,PLUID);
 BOOL LookupPrivilegeValueW(LPCWSTR,LPCWSTR,PLUID);
 LPSTR lstrcatA(LPSTR,LPCSTR);
 LPWSTR lstrcatW(LPWSTR,LPCWSTR);
 int lstrcmpA(LPCSTR,LPCSTR);
 int lstrcmpiA(LPCSTR,LPCSTR);
 int lstrcmpiW( LPCWSTR,LPCWSTR);
 int lstrcmpW(LPCWSTR,LPCWSTR);
 LPSTR lstrcpyA(LPSTR,LPCSTR);
 LPSTR lstrcpynA(LPSTR,LPCSTR,int);
 LPWSTR lstrcpynW(LPWSTR,LPCWSTR,int);
 LPWSTR lstrcpyW(LPWSTR,LPCWSTR);
 int lstrlenA(LPCSTR);
 int lstrlenW(LPCWSTR);
 BOOL MakeAbsoluteSD(PSECURITY_DESCRIPTOR,PSECURITY_DESCRIPTOR,PDWORD,PACL,PDWORD,PACL,PDWORD,PSID,PDWORD,PSID,PDWORD);

 BOOL MakeSelfRelativeSD(PSECURITY_DESCRIPTOR,PSECURITY_DESCRIPTOR,PDWORD);
 void MapGenericMask(PDWORD,PGENERIC_MAPPING);
 PVOID MapViewOfFile(HANDLE,DWORD,DWORD,DWORD,DWORD);
 PVOID MapViewOfFileEx(HANDLE,DWORD,DWORD,DWORD,DWORD,PVOID);
 BOOL MoveFileA(LPCSTR,LPCSTR);
 BOOL MoveFileExA(LPCSTR,LPCSTR,DWORD);
 BOOL MoveFileExW(LPCWSTR,LPCWSTR,DWORD);
 BOOL MoveFileW(LPCWSTR,LPCWSTR);




 int MulDiv(int,int,int);
 BOOL NotifyChangeEventLog(HANDLE,HANDLE);
 BOOL ObjectCloseAuditAlarmA(LPCSTR,PVOID,BOOL);
 BOOL ObjectCloseAuditAlarmW(LPCWSTR,PVOID,BOOL);
 BOOL ObjectDeleteAuditAlarmA(LPCSTR,PVOID,BOOL);
 BOOL ObjectDeleteAuditAlarmW(LPCWSTR,PVOID,BOOL);
 BOOL ObjectOpenAuditAlarmA(LPCSTR,PVOID,LPSTR,LPSTR,PSECURITY_DESCRIPTOR,HANDLE,DWORD,DWORD,PPRIVILEGE_SET,BOOL,BOOL,PBOOL);
 BOOL ObjectOpenAuditAlarmW(LPCWSTR,PVOID,LPWSTR,LPWSTR,PSECURITY_DESCRIPTOR,HANDLE,DWORD,DWORD,PPRIVILEGE_SET,BOOL,BOOL,PBOOL);
 BOOL ObjectPrivilegeAuditAlarmA(LPCSTR,PVOID,HANDLE,DWORD,PPRIVILEGE_SET,BOOL);
 BOOL ObjectPrivilegeAuditAlarmW(LPCWSTR,PVOID,HANDLE,DWORD,PPRIVILEGE_SET,BOOL);
 HANDLE OpenBackupEventLogA(LPCSTR,LPCSTR);
 HANDLE OpenBackupEventLogW(LPCWSTR,LPCWSTR);
 HANDLE OpenEventA(DWORD,BOOL,LPCSTR);
 HANDLE OpenEventLogA (LPCSTR,LPCSTR);
 HANDLE OpenEventLogW(LPCWSTR,LPCWSTR);
 HANDLE OpenEventW(DWORD,BOOL,LPCWSTR);
 HFILE OpenFile(LPCSTR,LPOFSTRUCT,UINT);
 HANDLE OpenFileMappingA(DWORD,BOOL,LPCSTR);
 HANDLE OpenFileMappingW(DWORD,BOOL,LPCWSTR);
 HANDLE OpenMutexA(DWORD,BOOL,LPCSTR);
 HANDLE OpenMutexW(DWORD,BOOL,LPCWSTR);
 HANDLE OpenProcess(DWORD,BOOL,DWORD);
 BOOL OpenProcessToken(HANDLE,DWORD,PHANDLE);
 HANDLE OpenSemaphoreA(DWORD,BOOL,LPCSTR);
 HANDLE OpenSemaphoreW(DWORD,BOOL,LPCWSTR);



 BOOL OpenThreadToken(HANDLE,DWORD,BOOL,PHANDLE);
 HANDLE OpenWaitableTimerA(DWORD,BOOL,LPCSTR);
 HANDLE OpenWaitableTimerW(DWORD,BOOL,LPCWSTR);
 void OutputDebugStringA(LPCSTR);
 void OutputDebugStringW(LPCWSTR);
 BOOL PeekNamedPipe(HANDLE,PVOID,DWORD,PDWORD,PDWORD,PDWORD);
 BOOL PostQueuedCompletionStatus(HANDLE,DWORD,ULONG_PTR,LPOVERLAPPED);
 DWORD PrepareTape(HANDLE,DWORD,BOOL);
 BOOL PrivilegeCheck (HANDLE,PPRIVILEGE_SET,PBOOL);
 BOOL PrivilegedServiceAuditAlarmA(LPCSTR,LPCSTR,HANDLE,PPRIVILEGE_SET,BOOL);
 BOOL PrivilegedServiceAuditAlarmW(LPCWSTR,LPCWSTR,HANDLE,PPRIVILEGE_SET,BOOL);




 BOOL PurgeComm(HANDLE,DWORD);



 DWORD QueryDosDeviceA(LPCSTR,LPSTR,DWORD);
 DWORD QueryDosDeviceW(LPCWSTR,LPWSTR,DWORD);



 BOOL QueryPerformanceCounter(PLARGE_INTEGER);
 BOOL QueryPerformanceFrequency(PLARGE_INTEGER);
 DWORD QueueUserAPC(PAPCFUNC,HANDLE,ULONG_PTR);



 void RaiseException(DWORD,DWORD,DWORD,const DWORD*);
 BOOL ReadDirectoryChangesW(HANDLE,PVOID,DWORD,BOOL,DWORD,PDWORD,LPOVERLAPPED,LPOVERLAPPED_COMPLETION_ROUTINE);
 BOOL ReadEventLogA(HANDLE,DWORD,DWORD,PVOID,DWORD,DWORD *,DWORD *);
 BOOL ReadEventLogW(HANDLE,DWORD,DWORD,PVOID,DWORD,DWORD *,DWORD *);
 BOOL ReadFile(HANDLE,PVOID,DWORD,PDWORD,LPOVERLAPPED);
 BOOL ReadFileEx(HANDLE,PVOID,DWORD,LPOVERLAPPED,LPOVERLAPPED_COMPLETION_ROUTINE);
 BOOL ReadFileScatter(HANDLE,FILE_SEGMENT_ELEMENT*,DWORD,LPDWORD,LPOVERLAPPED);
 BOOL ReadProcessMemory(HANDLE,PCVOID,PVOID,DWORD,PDWORD);
 HANDLE RegisterEventSourceA (LPCSTR,LPCSTR);
 HANDLE RegisterEventSourceW(LPCWSTR,LPCWSTR);







 BOOL ReleaseMutex(HANDLE);
 BOOL ReleaseSemaphore(HANDLE,LONG,LPLONG);
 BOOL RemoveDirectoryA(LPCSTR);
 BOOL RemoveDirectoryW(LPCWSTR);
# 2181 "/opt/cegcc/arm-mingw32ce/include/winbase.h" 3
 BOOL ReportEventA(HANDLE,WORD,WORD,DWORD,PSID,WORD,DWORD,LPCSTR*,PVOID);
 BOOL ReportEventW(HANDLE,WORD,WORD,DWORD,PSID,WORD,DWORD,LPCWSTR*,PVOID);





 UINT ResetWriteWatch(LPVOID,SIZE_T);



 DWORD ResumeThread(HANDLE);
 BOOL RevertToSelf(void);
 DWORD SearchPathA(LPCSTR,LPCSTR,LPCSTR,DWORD,LPSTR,LPSTR*);
 DWORD SearchPathW(LPCWSTR,LPCWSTR,LPCWSTR,DWORD,LPWSTR,LPWSTR*);
 BOOL SetAclInformation(PACL,PVOID,DWORD,ACL_INFORMATION_CLASS);
 BOOL SetCommBreak(HANDLE);
 BOOL SetCommConfig(HANDLE,LPCOMMCONFIG,DWORD);
 BOOL SetCommMask(HANDLE,DWORD);
 BOOL SetCommState(HANDLE,LPDCB);
 BOOL SetCommTimeouts(HANDLE,LPCOMMTIMEOUTS);
 BOOL SetComputerNameA(LPCSTR);
 BOOL SetComputerNameW(LPCWSTR);




 BOOL SetCurrentDirectoryA(LPCSTR);
 BOOL SetCurrentDirectoryW(LPCWSTR);
 BOOL SetDefaultCommConfigA(LPCSTR,LPCOMMCONFIG,DWORD);
 BOOL SetDefaultCommConfigW(LPCWSTR,LPCOMMCONFIG,DWORD);




 BOOL SetEndOfFile(HANDLE);
 BOOL SetEnvironmentVariableA(LPCSTR,LPCSTR);
 BOOL SetEnvironmentVariableW(LPCWSTR,LPCWSTR);
 UINT SetErrorMode(UINT);





 void SetFileApisToANSI(void);
 void SetFileApisToOEM(void);
 BOOL SetFileAttributesA(LPCSTR,DWORD);
 BOOL SetFileAttributesW(LPCWSTR,DWORD);
 DWORD SetFilePointer(HANDLE,LONG,PLONG,DWORD);
 BOOL SetFilePointerEx(HANDLE,LARGE_INTEGER,PLARGE_INTEGER,DWORD);
 BOOL SetFileSecurityA(LPCSTR,SECURITY_INFORMATION,PSECURITY_DESCRIPTOR);
 BOOL SetFileSecurityW(LPCWSTR,SECURITY_INFORMATION,PSECURITY_DESCRIPTOR);




 BOOL SetFileTime(HANDLE,const FILETIME*,const FILETIME*,const FILETIME*);







 UINT SetHandleCount(UINT);
 BOOL SetHandleInformation(HANDLE,DWORD,DWORD);
 BOOL SetKernelObjectSecurity(HANDLE,SECURITY_INFORMATION,PSECURITY_DESCRIPTOR);
 void SetLastError(DWORD);
 void SetLastErrorEx(DWORD,DWORD);
 BOOL SetLocalTime(const SYSTEMTIME*);
 BOOL SetMailslotInfo(HANDLE,DWORD);
 BOOL SetNamedPipeHandleState(HANDLE,PDWORD,PDWORD,PDWORD);
 BOOL SetPriorityClass(HANDLE,DWORD);
 BOOL SetPrivateObjectSecurity(SECURITY_INFORMATION,PSECURITY_DESCRIPTOR,PSECURITY_DESCRIPTOR *,PGENERIC_MAPPING,HANDLE);
 BOOL SetProcessAffinityMask(HANDLE,DWORD);



 BOOL SetProcessPriorityBoost(HANDLE,BOOL);
 BOOL SetProcessShutdownParameters(DWORD,DWORD);
 BOOL SetProcessWorkingSetSize(HANDLE,SIZE_T,SIZE_T);
 BOOL SetSecurityDescriptorControl(PSECURITY_DESCRIPTOR,SECURITY_DESCRIPTOR_CONTROL,SECURITY_DESCRIPTOR_CONTROL);
 BOOL SetSecurityDescriptorDacl(PSECURITY_DESCRIPTOR,BOOL,PACL,BOOL);
 BOOL SetSecurityDescriptorGroup(PSECURITY_DESCRIPTOR,PSID,BOOL);
 BOOL SetSecurityDescriptorOwner(PSECURITY_DESCRIPTOR,PSID,BOOL);
 BOOL SetSecurityDescriptorSacl(PSECURITY_DESCRIPTOR,BOOL,PACL,BOOL);
 BOOL SetStdHandle(DWORD,HANDLE);




 BOOL SetSystemTime(const SYSTEMTIME*);
 BOOL SetSystemTimeAdjustment(DWORD,BOOL);
 DWORD SetTapeParameters(HANDLE,DWORD,PVOID);
 DWORD SetTapePosition(HANDLE,DWORD,DWORD,DWORD,DWORD,BOOL);
 DWORD SetThreadAffinityMask(HANDLE,DWORD);
 BOOL SetThreadContext(HANDLE,const CONTEXT*);



 DWORD SetThreadIdealProcessor(HANDLE,DWORD);
 BOOL SetThreadPriority(HANDLE,int);
 BOOL SetThreadPriorityBoost(HANDLE,BOOL);
 BOOL SetThreadToken (PHANDLE,HANDLE);
 BOOL SetTimeZoneInformation(const TIME_ZONE_INFORMATION *);
 BOOL SetTokenInformation(HANDLE,TOKEN_INFORMATION_CLASS,PVOID,DWORD);
 LPTOP_LEVEL_EXCEPTION_FILTER SetUnhandledExceptionFilter(LPTOP_LEVEL_EXCEPTION_FILTER);
 BOOL SetupComm(HANDLE,DWORD,DWORD);
 BOOL SetVolumeLabelA(LPCSTR,LPCSTR);
 BOOL SetVolumeLabelW(LPCWSTR,LPCWSTR);




 BOOL SetWaitableTimer(HANDLE,const LARGE_INTEGER*,LONG,PTIMERAPCROUTINE,PVOID,BOOL);
 DWORD SignalObjectAndWait(HANDLE,HANDLE,DWORD,BOOL);
 DWORD SizeofResource(HINSTANCE,HRSRC);
 void Sleep(DWORD);
 DWORD SleepEx(DWORD,BOOL);
 DWORD SuspendThread(HANDLE);
 void SwitchToFiber(PVOID);
 BOOL SwitchToThread(void);
 BOOL SystemTimeToFileTime(const SYSTEMTIME*,LPFILETIME);



 BOOL SystemTimeToTzSpecificLocalTime(LPTIME_ZONE_INFORMATION,LPSYSTEMTIME,LPSYSTEMTIME);
 BOOL TerminateThread(HANDLE,DWORD);





 PVOID TlsGetValue(DWORD);
 BOOL TlsSetValue(DWORD,PVOID);
 BOOL TransactNamedPipe(HANDLE,PVOID,DWORD,PVOID,DWORD,PDWORD,LPOVERLAPPED);
 BOOL TransmitCommChar(HANDLE,char);
 BOOL TryEnterCriticalSection(LPCRITICAL_SECTION);
 LONG UnhandledExceptionFilter(LPEXCEPTION_POINTERS);
 BOOL UnlockFile(HANDLE,DWORD,DWORD,DWORD,DWORD);
 BOOL UnlockFileEx(HANDLE,DWORD,DWORD,DWORD,LPOVERLAPPED);


 BOOL UnmapViewOfFile(LPCVOID);




 BOOL UpdateResourceA(HANDLE,LPCSTR,LPCSTR,WORD,PVOID,DWORD);
 BOOL UpdateResourceW(HANDLE,LPCWSTR,LPCWSTR,WORD,PVOID,DWORD);
 BOOL VerifyVersionInfoA(LPOSVERSIONINFOEXA,DWORD,DWORDLONG);
 BOOL VerifyVersionInfoW(LPOSVERSIONINFOEXW,DWORD,DWORDLONG);
 PVOID VirtualAlloc(PVOID,DWORD,DWORD,DWORD);
 PVOID VirtualAllocEx(HANDLE,PVOID,DWORD,DWORD,DWORD);
 BOOL VirtualFree(PVOID,DWORD,DWORD);
 BOOL VirtualFreeEx(HANDLE,PVOID,DWORD,DWORD);
 BOOL VirtualLock(PVOID,DWORD);
 BOOL VirtualProtect(PVOID,DWORD,DWORD,PDWORD);
 BOOL VirtualProtectEx(HANDLE,PVOID,DWORD,DWORD,PDWORD);
 DWORD VirtualQuery(LPCVOID,PMEMORY_BASIC_INFORMATION,DWORD);
 DWORD VirtualQueryEx(HANDLE,LPCVOID,PMEMORY_BASIC_INFORMATION,DWORD);
 BOOL VirtualUnlock(PVOID,DWORD);
 BOOL WaitCommEvent(HANDLE,PDWORD,LPOVERLAPPED);
 BOOL WaitForDebugEvent(LPDEBUG_EVENT,DWORD);
 DWORD WaitForMultipleObjects(DWORD,const HANDLE*,BOOL,DWORD);
 DWORD WaitForMultipleObjectsEx(DWORD,const HANDLE*,BOOL,DWORD,BOOL);
 DWORD WaitForSingleObject(HANDLE,DWORD);
 DWORD WaitForSingleObjectEx(HANDLE,DWORD,BOOL);
 BOOL WaitNamedPipeA(LPCSTR,DWORD);
 BOOL WaitNamedPipeW(LPCWSTR,DWORD);
 BOOL WinLoadTrustProvider(GUID*);
 BOOL WriteFile(HANDLE,PCVOID,DWORD,PDWORD,LPOVERLAPPED);
 BOOL WriteFileEx(HANDLE,PCVOID,DWORD,LPOVERLAPPED,LPOVERLAPPED_COMPLETION_ROUTINE);
 BOOL WriteFileGather(HANDLE,FILE_SEGMENT_ELEMENT*,DWORD,LPDWORD,LPOVERLAPPED);
 BOOL WritePrivateProfileSectionA(LPCSTR,LPCSTR,LPCSTR);
 BOOL WritePrivateProfileSectionW(LPCWSTR,LPCWSTR,LPCWSTR);
 BOOL WritePrivateProfileStringA(LPCSTR,LPCSTR,LPCSTR,LPCSTR);
 BOOL WritePrivateProfileStringW(LPCWSTR,LPCWSTR,LPCWSTR,LPCWSTR);
 BOOL WritePrivateProfileStructA(LPCSTR,LPCSTR,LPVOID,UINT,LPCSTR);
 BOOL WritePrivateProfileStructW(LPCWSTR,LPCWSTR,LPVOID,UINT,LPCWSTR);
 BOOL WriteProcessMemory(HANDLE,LPVOID,LPCVOID,SIZE_T,SIZE_T*);
 BOOL WriteProfileSectionA(LPCSTR,LPCSTR);
 BOOL WriteProfileSectionW(LPCWSTR,LPCWSTR);
 BOOL WriteProfileStringA(LPCSTR,LPCSTR,LPCSTR);
 BOOL WriteProfileStringW(LPCWSTR,LPCWSTR,LPCWSTR);
 DWORD WriteTapemark(HANDLE,DWORD,DWORD,BOOL);
# 2379 "/opt/cegcc/arm-mingw32ce/include/winbase.h" 3
typedef struct STORE_INFORMATION {
  DWORD dwStoreSize;
  DWORD dwFreeSize;
} STORE_INFORMATION, *LPSTORE_INFORMATION;
 BOOL GetStoreInformation(LPSTORE_INFORMATION lpsi);



 BOOL CeSetThreadQuantum(HANDLE hThread, DWORD dwTime);



 BOOL CeSetThreadPriority(HANDLE hThread, int nPriority);
 int CeGetThreadPriority(HANDLE hThread);



typedef STARTUPINFOW STARTUPINFO,*LPSTARTUPINFO;
typedef WIN32_FIND_DATAW WIN32_FIND_DATA,*PWIN32_FIND_DATA,*LPWIN32_FIND_DATA;
typedef HW_PROFILE_INFOW HW_PROFILE_INFO,*LPHW_PROFILE_INFO;
# 2827 "/opt/cegcc/arm-mingw32ce/include/winbase.h" 3
 HANDLE ActivateDevice(LPCWSTR, DWORD);
 HANDLE ActivateDeviceEx(LPCWSTR, LPCVOID, DWORD, LPVOID);
 BOOL DeactivateDevice(HANDLE);
 BOOL DeregisterDevice(HANDLE);
 HANDLE RegisterDevice(LPCWSTR, DWORD, LPCWSTR, DWORD);
# 51 "/opt/cegcc/arm-mingw32ce/include/windows.h" 2 3

# 1 "/opt/cegcc/arm-mingw32ce/include/wingdi.h" 1 3




       
# 6 "/opt/cegcc/arm-mingw32ce/include/wingdi.h" 3
# 1348 "/opt/cegcc/arm-mingw32ce/include/wingdi.h" 3
typedef struct _ABC {
 int abcA;
 UINT abcB;
 int abcC;
} ABC,*LPABC;
typedef struct _ABCFLOAT {
 FLOAT abcfA;
 FLOAT abcfB;
 FLOAT abcfC;
} ABCFLOAT,*LPABCFLOAT;
typedef struct tagBITMAP {
 LONG bmType;
 LONG bmWidth;
 LONG bmHeight;
 LONG bmWidthBytes;
 WORD bmPlanes;
 WORD bmBitsPixel;
 LPVOID bmBits;
} BITMAP,*PBITMAP,*LPBITMAP;
typedef struct tagBITMAPCOREHEADER {
 DWORD bcSize;
 WORD bcWidth;
 WORD bcHeight;
 WORD bcPlanes;
 WORD bcBitCount;
} BITMAPCOREHEADER,*LPBITMAPCOREHEADER,*PBITMAPCOREHEADER;
#pragma pack(push,1)
typedef struct tagRGBTRIPLE {
 BYTE rgbtBlue;
 BYTE rgbtGreen;
 BYTE rgbtRed;
} RGBTRIPLE,*LPRGBTRIPLE;
#pragma pack(pop)
#pragma pack(push,2)
typedef struct tagBITMAPFILEHEADER {
 WORD bfType;
 DWORD bfSize;
 WORD bfReserved1;
 WORD bfReserved2;
 DWORD bfOffBits;
} BITMAPFILEHEADER,*LPBITMAPFILEHEADER,*PBITMAPFILEHEADER;
#pragma pack(pop)
typedef struct _BITMAPCOREINFO {
 BITMAPCOREHEADER bmciHeader;
 RGBTRIPLE bmciColors[1];
} BITMAPCOREINFO,*LPBITMAPCOREINFO,*PBITMAPCOREINFO;
typedef struct tagBITMAPINFOHEADER{
 DWORD biSize;
 LONG biWidth;
 LONG biHeight;
 WORD biPlanes;
 WORD biBitCount;
 DWORD biCompression;
 DWORD biSizeImage;
 LONG biXPelsPerMeter;
 LONG biYPelsPerMeter;
 DWORD biClrUsed;
 DWORD biClrImportant;
} BITMAPINFOHEADER,*LPBITMAPINFOHEADER,*PBITMAPINFOHEADER;
typedef struct tagRGBQUAD {
 BYTE rgbBlue;
 BYTE rgbGreen;
 BYTE rgbRed;
 BYTE rgbReserved;
} RGBQUAD,*LPRGBQUAD;
typedef struct tagBITMAPINFO {
 BITMAPINFOHEADER bmiHeader;
 RGBQUAD bmiColors[1];
} BITMAPINFO,*LPBITMAPINFO,*PBITMAPINFO;
typedef long FXPT16DOT16,*LPFXPT16DOT16;
typedef long FXPT2DOT30,*LPFXPT2DOT30;
typedef struct tagCIEXYZ {
 FXPT2DOT30 ciexyzX;
 FXPT2DOT30 ciexyzY;
 FXPT2DOT30 ciexyzZ;
} CIEXYZ,*LPCIEXYZ;
typedef struct tagCIEXYZTRIPLE {
 CIEXYZ ciexyzRed;
 CIEXYZ ciexyzGreen;
 CIEXYZ ciexyzBlue;
} CIEXYZTRIPLE,*LPCIEXYZTRIPLE;
typedef struct {
 DWORD bV4Size;
 LONG bV4Width;
 LONG bV4Height;
 WORD bV4Planes;
 WORD bV4BitCount;
 DWORD bV4V4Compression;
 DWORD bV4SizeImage;
 LONG bV4XPelsPerMeter;
 LONG bV4YPelsPerMeter;
 DWORD bV4ClrUsed;
 DWORD bV4ClrImportant;
 DWORD bV4RedMask;
 DWORD bV4GreenMask;
 DWORD bV4BlueMask;
 DWORD bV4AlphaMask;
 DWORD bV4CSType;
 CIEXYZTRIPLE bV4Endpoints;
 DWORD bV4GammaRed;
 DWORD bV4GammaGreen;
 DWORD bV4GammaBlue;
} BITMAPV4HEADER,*LPBITMAPV4HEADER,*PBITMAPV4HEADER;
typedef struct {
 DWORD bV5Size;
 LONG bV5Width;
 LONG bV5Height;
 WORD bV5Planes;
 WORD bV5BitCount;
 DWORD bV5Compression;
 DWORD bV5SizeImage;
 LONG bV5XPelsPerMeter;
 LONG bV5YPelsPerMeter;
 DWORD bV5ClrUsed;
 DWORD bV5ClrImportant;
 DWORD bV5RedMask;
 DWORD bV5GreenMask;
 DWORD bV5BlueMask;
 DWORD bV5AlphaMask;
 DWORD bV5CSType;
 CIEXYZTRIPLE bV5Endpoints;
 DWORD bV5GammaRed;
 DWORD bV5GammaGreen;
 DWORD bV5GammaBlue;
 DWORD bV5Intent;
 DWORD bV5ProfileData;
 DWORD bV5ProfileSize;
 DWORD bV5Reserved;
} BITMAPV5HEADER,*LPBITMAPV5HEADER,*PBITMAPV5HEADER;
typedef struct tagFONTSIGNATURE {
 DWORD fsUsb[4];
 DWORD fsCsb[2];
} FONTSIGNATURE,*LPFONTSIGNATURE;
typedef struct {
 UINT ciCharset;
 UINT ciACP;
 FONTSIGNATURE fs;
} CHARSETINFO,*LPCHARSETINFO;
typedef struct tagCOLORADJUSTMENT {
 WORD caSize;
 WORD caFlags;
 WORD caIlluminantIndex;
 WORD caRedGamma;
 WORD caGreenGamma;
 WORD caBlueGamma;
 WORD caReferenceBlack;
 WORD caReferenceWhite;
 SHORT caContrast;
 SHORT caBrightness;
 SHORT caColorfulness;
 SHORT caRedGreenTint;
} COLORADJUSTMENT,*LPCOLORADJUSTMENT;
typedef struct _devicemodeA {
  BYTE dmDeviceName[32];
  WORD dmSpecVersion;
  WORD dmDriverVersion;
  WORD dmSize;
  WORD dmDriverExtra;
  DWORD dmFields;
  __extension__ union {
    __extension__ struct {
      short dmOrientation;
      short dmPaperSize;
      short dmPaperLength;
      short dmPaperWidth;
      short dmScale;
      short dmCopies;
      short dmDefaultSource;
      short dmPrintQuality;
    } ;
    __extension__ struct {
      POINTL dmPosition;
      DWORD dmDisplayOrientation;
      DWORD dmDisplayFixedOutput;
    } ;
  } ;

  short dmColor;
  short dmDuplex;
  short dmYResolution;
  short dmTTOption;
  short dmCollate;
  BYTE dmFormName[32];
  WORD dmLogPixels;
  DWORD dmBitsPerPel;
  DWORD dmPelsWidth;
  DWORD dmPelsHeight;
  __extension__ union {
    DWORD dmDisplayFlags;
    DWORD dmNup;
  } ;
  DWORD dmDisplayFrequency;

  DWORD dmICMMethod;
  DWORD dmICMIntent;
  DWORD dmMediaType;
  DWORD dmDitherType;
  DWORD dmReserved1;
  DWORD dmReserved2;

  DWORD dmPanningWidth;
  DWORD dmPanningHeight;


} DEVMODEA,*LPDEVMODEA,*PDEVMODEA;
# 1608 "/opt/cegcc/arm-mingw32ce/include/wingdi.h" 3
typedef struct _devicemodeW {
  WCHAR dmDeviceName[32];
  WORD dmSpecVersion;
  WORD dmDriverVersion;
  WORD dmSize;
  WORD dmDriverExtra;
  DWORD dmFields;
  short dmOrientation;
  short dmPaperSize;
  short dmPaperLength;
  short dmPaperWidth;
  short dmScale;
  short dmCopies;
  short dmDefaultSource;
  short dmPrintQuality;
  short dmColor;
  short dmDuplex;
  short dmYResolution;
  short dmTTOption;
  short dmCollate;
  WCHAR dmFormName[32];
  WORD dmLogPixels;
  DWORD dmBitsPerPel;
  DWORD dmPelsWidth;
  DWORD dmPelsHeight;
  DWORD dmDisplayFlags;
  DWORD dmDisplayFrequency;
  DWORD dmDisplayOrientation;
} DEVMODEW,*PDEVMODEW,*NPDEVMODEW,*LPDEVMODEW;

typedef struct tagDIBSECTION {
 BITMAP dsBm;
 BITMAPINFOHEADER dsBmih;
 DWORD dsBitfields[3];
 HANDLE dshSection;
 DWORD dsOffset;
} DIBSECTION;
typedef struct _DOCINFOA {
 int cbSize;
 LPCSTR lpszDocName;
 LPCSTR lpszOutput;
 LPCSTR lpszDatatype;
 DWORD fwType;
} DOCINFOA,*LPDOCINFOA;
typedef struct _DOCINFOW {
 int cbSize;
 LPCWSTR lpszDocName;
 LPCWSTR lpszOutput;
 LPCWSTR lpszDatatype;
 DWORD fwType;
} DOCINFOW,*LPDOCINFOW;
typedef struct tagEMR {
 DWORD iType;
 DWORD nSize;
} EMR,*PEMR;
typedef struct tagEMRANGLEARC {
 EMR emr;
 POINTL ptlCenter;
 DWORD nRadius;
 FLOAT eStartAngle;
 FLOAT eSweepAngle;
} EMRANGLEARC,*PEMRANGLEARC;
typedef struct tagEMRARC {
 EMR emr;
 RECTL rclBox;
 POINTL ptlStart;
 POINTL ptlEnd;
} EMRARC,*PEMRARC,EMRARCTO,*PEMRARCTO,EMRCHORD,*PEMRCHORD,EMRPIE,*PEMRPIE;
typedef struct _XFORM {
 FLOAT eM11;
 FLOAT eM12;
 FLOAT eM21;
 FLOAT eM22;
 FLOAT eDx;
 FLOAT eDy;
} XFORM,*PXFORM,*LPXFORM;
typedef struct tagEMRBITBLT {
 EMR emr;
 RECTL rclBounds;
 LONG xDest;
 LONG yDest;
 LONG cxDest;
 LONG cyDest;
 DWORD dwRop;
 LONG xSrc;
 LONG ySrc;
 XFORM xformSrc;
 COLORREF crBkColorSrc;
 DWORD iUsageSrc;
 DWORD offBmiSrc;
 DWORD offBitsSrc;
 DWORD cbBitsSrc;
} EMRBITBLT,*PEMRBITBLT;
typedef struct tagLOGBRUSH {
 UINT lbStyle;
 COLORREF lbColor;
 LONG lbHatch;
} LOGBRUSH,*PLOGBRUSH,*LPLOGBRUSH;
typedef LOGBRUSH PATTERN,*PPATTERN,*LPPATTERN;
typedef struct tagEMRCREATEBRUSHINDIRECT {
 EMR emr;
 DWORD ihBrush;
 LOGBRUSH lb;
} EMRCREATEBRUSHINDIRECT,*PEMRCREATEBRUSHINDIRECT;
typedef LONG LCSCSTYPE;
typedef LONG LCSGAMUTMATCH;
typedef struct tagLOGCOLORSPACEA {
 DWORD lcsSignature;
 DWORD lcsVersion;
 DWORD lcsSize;
 LCSCSTYPE lcsCSType;
 LCSGAMUTMATCH lcsIntent;
 CIEXYZTRIPLE lcsEndpoints;
 DWORD lcsGammaRed;
 DWORD lcsGammaGreen;
 DWORD lcsGammaBlue;
 CHAR lcsFilename[260];
} LOGCOLORSPACEA,*LPLOGCOLORSPACEA;
typedef struct tagLOGCOLORSPACEW {
 DWORD lcsSignature;
 DWORD lcsVersion;
 DWORD lcsSize;
 LCSCSTYPE lcsCSType;
 LCSGAMUTMATCH lcsIntent;
 CIEXYZTRIPLE lcsEndpoints;
 DWORD lcsGammaRed;
 DWORD lcsGammaGreen;
 DWORD lcsGammaBlue;
 WCHAR lcsFilename[260];
} LOGCOLORSPACEW,*LPLOGCOLORSPACEW;
typedef struct tagEMRCREATECOLORSPACE {
 EMR emr;
 DWORD ihCS;
 LOGCOLORSPACEW lcs;
} EMRCREATECOLORSPACE,*PEMRCREATECOLORSPACE;
typedef struct tagEMRCREATEDIBPATTERNBRUSHPT {
 EMR emr;
 DWORD ihBrush;
 DWORD iUsage;
 DWORD offBmi;
 DWORD cbBmi;
 DWORD offBits;
 DWORD cbBits;
} EMRCREATEDIBPATTERNBRUSHPT,*PEMRCREATEDIBPATTERNBRUSHPT;
typedef struct tagEMRCREATEMONOBRUSH {
 EMR emr;
 DWORD ihBrush;
 DWORD iUsage;
 DWORD offBmi;
 DWORD cbBmi;
 DWORD offBits;
 DWORD cbBits;
} EMRCREATEMONOBRUSH,*PEMRCREATEMONOBRUSH;
typedef struct tagPALETTEENTRY {
 BYTE peRed;
 BYTE peGreen;
 BYTE peBlue;
 BYTE peFlags;
} PALETTEENTRY,*LPPALETTEENTRY,*PPALETTEENTRY;
typedef struct tagLOGPALETTE {
 WORD palVersion;
 WORD palNumEntries;
 PALETTEENTRY palPalEntry[1];
} LOGPALETTE,*NPLOGPALETTE,*PLOGPALETTE,*LPLOGPALETTE;
typedef struct tagEMRCREATEPALETTE {
 EMR emr;
 DWORD ihPal;
 LOGPALETTE lgpl;
} EMRCREATEPALETTE,*PEMRCREATEPALETTE;
typedef struct tagLOGPEN {
 UINT lopnStyle;
 POINT lopnWidth;
 COLORREF lopnColor;
} LOGPEN,*PLOGPEN,*LPLOGPEN;
typedef struct tagEMRCREATEPEN {
 EMR emr;
 DWORD ihPen;
 LOGPEN lopn;
} EMRCREATEPEN,*PEMRCREATEPEN;
typedef struct tagEMRELLIPSE {
 EMR emr;
 RECTL rclBox;
} EMRELLIPSE,*PEMRELLIPSE,EMRRECTANGLE,*PEMRRECTANGLE;
typedef struct tagEMREOF {
 EMR emr;
 DWORD nPalEntries;
 DWORD offPalEntries;
 DWORD nSizeLast;
} EMREOF,*PEMREOF;
typedef struct tagEMREXCLUDECLIPRECT {
 EMR emr;
 RECTL rclClip;
} EMREXCLUDECLIPRECT,*PEMREXCLUDECLIPRECT,EMRINTERSECTCLIPRECT,*PEMRINTERSECTCLIPRECT;
typedef struct tagPANOSE {
 BYTE bFamilyType;
 BYTE bSerifStyle;
 BYTE bWeight;
 BYTE bProportion;
 BYTE bContrast;
 BYTE bStrokeVariation;
 BYTE bArmStyle;
 BYTE bLetterform;
 BYTE bMidline;
 BYTE bXHeight;
} PANOSE;
typedef struct tagLOGFONTA {
 LONG lfHeight;
 LONG lfWidth;
 LONG lfEscapement;
 LONG lfOrientation;
 LONG lfWeight;
 BYTE lfItalic;
 BYTE lfUnderline;
 BYTE lfStrikeOut;
 BYTE lfCharSet;
 BYTE lfOutPrecision;
 BYTE lfClipPrecision;
 BYTE lfQuality;
 BYTE lfPitchAndFamily;
 CHAR lfFaceName[32];
} LOGFONTA,*PLOGFONTA,*LPLOGFONTA;
typedef struct tagLOGFONTW {
 LONG lfHeight;
 LONG lfWidth;
 LONG lfEscapement;
 LONG lfOrientation;
 LONG lfWeight;
 BYTE lfItalic;
 BYTE lfUnderline;
 BYTE lfStrikeOut;
 BYTE lfCharSet;
 BYTE lfOutPrecision;
 BYTE lfClipPrecision;
 BYTE lfQuality;
 BYTE lfPitchAndFamily;
 WCHAR lfFaceName[32];
} LOGFONTW,*PLOGFONTW,*LPLOGFONTW;
typedef struct tagEXTLOGFONTA {
 LOGFONTA elfLogFont;
 BYTE elfFullName[64];
 BYTE elfStyle[32];
 DWORD elfVersion;
 DWORD elfStyleSize;
 DWORD elfMatch;
 DWORD elfReserved;
 BYTE elfVendorId[4];
 DWORD elfCulture;
 PANOSE elfPanose;
} EXTLOGFONTA,*PEXTLOGFONTA,*LPEXTLOGFONTA;
typedef struct tagEXTLOGFONTW {
 LOGFONTW elfLogFont;
 WCHAR elfFullName[64];
 WCHAR elfStyle[32];
 DWORD elfVersion;
 DWORD elfStyleSize;
 DWORD elfMatch;
 DWORD elfReserved;
 BYTE elfVendorId[4];
 DWORD elfCulture;
 PANOSE elfPanose;
} EXTLOGFONTW,*PEXTLOGFONTW,*LPEXTLOGFONTW;
typedef struct tagEMREXTCREATEFONTINDIRECTW {
 EMR emr;
 DWORD ihFont;
 EXTLOGFONTW elfw;
} EMREXTCREATEFONTINDIRECTW,*PEMREXTCREATEFONTINDIRECTW;
typedef struct tagEXTLOGPEN {
 UINT elpPenStyle;
 UINT elpWidth;
 UINT elpBrushStyle;
 COLORREF elpColor;
 LONG elpHatch;
 DWORD elpNumEntries;
 DWORD elpStyleEntry[1];
} EXTLOGPEN,*PEXTLOGPEN,*LPEXTLOGPEN;
typedef struct tagEMREXTCREATEPEN {
 EMR emr;
 DWORD ihPen;
 DWORD offBmi;
 DWORD cbBmi;
 DWORD offBits;
 DWORD cbBits;
 EXTLOGPEN elp;
} EMREXTCREATEPEN,*PEMREXTCREATEPEN;
typedef struct tagEMREXTFLOODFILL {
 EMR emr;
 POINTL ptlStart;
 COLORREF crColor;
 DWORD iMode;
} EMREXTFLOODFILL,*PEMREXTFLOODFILL;
typedef struct tagEMREXTSELECTCLIPRGN {
 EMR emr;
 DWORD cbRgnData;
 DWORD iMode;
 BYTE RgnData[1];
} EMREXTSELECTCLIPRGN,*PEMREXTSELECTCLIPRGN;
typedef struct tagEMRTEXT {
 POINTL ptlReference;
 DWORD nChars;
 DWORD offString;
 DWORD fOptions;
 RECTL rcl;
 DWORD offDx;
} EMRTEXT,*PEMRTEXT;
typedef struct tagEMREXTTEXTOUTA {
 EMR emr;
 RECTL rclBounds;
 DWORD iGraphicsMode;
 FLOAT exScale;
 FLOAT eyScale;
 EMRTEXT emrtext;
} EMREXTTEXTOUTA,*PEMREXTTEXTOUTA,EMREXTTEXTOUTW,*PEMREXTTEXTOUTW;
typedef struct tagEMRFILLPATH {
 EMR emr;
 RECTL rclBounds;
} EMRFILLPATH,*PEMRFILLPATH,EMRSTROKEANDFILLPATH,*PEMRSTROKEANDFILLPATH,EMRSTROKEPATH,*PEMRSTROKEPATH;
typedef struct tagEMRFILLRGN {
 EMR emr;
 RECTL rclBounds;
 DWORD cbRgnData;
 DWORD ihBrush;
 BYTE RgnData[1];
} EMRFILLRGN,*PEMRFILLRGN;
typedef struct tagEMRFORMAT {
 DWORD dSignature;
 DWORD nVersion;
 DWORD cbData;
 DWORD offData;
} EMRFORMAT;
typedef struct tagEMRFRAMERGN {
 EMR emr;
 RECTL rclBounds;
 DWORD cbRgnData;
 DWORD ihBrush;
 SIZEL szlStroke;
 BYTE RgnData[1];
} EMRFRAMERGN,*PEMRFRAMERGN;
typedef struct tagEMRGDICOMMENT {
 EMR emr;
 DWORD cbData;
 BYTE Data[1];
} EMRGDICOMMENT,*PEMRGDICOMMENT;
typedef struct tagEMRINVERTRGN {
 EMR emr;
 RECTL rclBounds;
 DWORD cbRgnData;
 BYTE RgnData[1];
} EMRINVERTRGN,*PEMRINVERTRGN,EMRPAINTRGN,*PEMRPAINTRGN;
typedef struct tagEMRLINETO {
 EMR emr;
 POINTL ptl;
} EMRLINETO,*PEMRLINETO,EMRMOVETOEX,*PEMRMOVETOEX;
typedef struct tagEMRMASKBLT {
 EMR emr;
 RECTL rclBounds;
 LONG xDest;
 LONG yDest;
 LONG cxDest;
 LONG cyDest;
 DWORD dwRop;
 LONG xSrc;
 LONG ySrc;
 XFORM xformSrc;
 COLORREF crBkColorSrc;
 DWORD iUsageSrc;
 DWORD offBmiSrc;
 DWORD cbBmiSrc;
 DWORD offBitsSrc;
 DWORD cbBitsSrc;
 LONG xMask;
 LONG yMask;
 DWORD iUsageMask;
 DWORD offBmiMask;
 DWORD cbBmiMask;
 DWORD offBitsMask;
 DWORD cbBitsMask;
} EMRMASKBLT,*PEMRMASKBLT;
typedef struct tagEMRMODIFYWORLDTRANSFORM {
 EMR emr;
 XFORM xform;
 DWORD iMode;
} EMRMODIFYWORLDTRANSFORM,*PEMRMODIFYWORLDTRANSFORM;
typedef struct tagEMROFFSETCLIPRGN {
 EMR emr;
 POINTL ptlOffset;
} EMROFFSETCLIPRGN,*PEMROFFSETCLIPRGN;
typedef struct tagEMRPLGBLT {
 EMR emr;
 RECTL rclBounds;
 POINTL aptlDest[3];
 LONG xSrc;
 LONG ySrc;
 LONG cxSrc;
 LONG cySrc;
 XFORM xformSrc;
 COLORREF crBkColorSrc;
 DWORD iUsageSrc;
 DWORD offBmiSrc;
 DWORD cbBmiSrc;
 DWORD offBitsSrc;
 DWORD cbBitsSrc;
 LONG xMask;
 LONG yMask;
 DWORD iUsageMask;
 DWORD offBmiMask;
 DWORD cbBmiMask;
 DWORD offBitsMask;
 DWORD cbBitsMask;
} EMRPLGBLT,*PEMRPLGBLT;
typedef struct tagEMRPOLYDRAW {
 EMR emr;
 RECTL rclBounds;
 DWORD cptl;
 POINTL aptl[1];
 BYTE abTypes[1];
} EMRPOLYDRAW,*PEMRPOLYDRAW;
typedef struct tagEMRPOLYDRAW16 {
 EMR emr;
 RECTL rclBounds;
 DWORD cpts;
 POINTS apts[1];
 BYTE abTypes[1];
} EMRPOLYDRAW16,*PEMRPOLYDRAW16;
typedef struct tagEMRPOLYLINE {
 EMR emr;
 RECTL rclBounds;
 DWORD cptl;
 POINTL aptl[1];
} EMRPOLYLINE,*PEMRPOLYLINE,EMRPOLYBEZIER,*PEMRPOLYBEZIER,EMRPOLYGON,*PEMRPOLYGON,EMRPOLYBEZIERTO,*PEMRPOLYBEZIERTO,EMRPOLYLINETO,*PEMRPOLYLINETO;
typedef struct tagEMRPOLYLINE16 {
 EMR emr;
 RECTL rclBounds;
 DWORD cpts;
 POINTL apts[1];
} EMRPOLYLINE16,*PEMRPOLYLINE16,EMRPOLYBEZIER16,*PEMRPOLYBEZIER16,EMRPOLYGON16,*PEMRPOLYGON16,EMRPOLYBEZIERTO16,*PEMRPOLYBEZIERTO16,EMRPOLYLINETO16,*PEMRPOLYLINETO16;
typedef struct tagEMRPOLYPOLYLINE {
 EMR emr;
 RECTL rclBounds;
 DWORD nPolys;
 DWORD cptl;
 DWORD aPolyCounts[1];
 POINTL aptl[1];
} EMRPOLYPOLYLINE,*PEMRPOLYPOLYLINE,EMRPOLYPOLYGON,*PEMRPOLYPOLYGON;
typedef struct tagEMRPOLYPOLYLINE16 {
 EMR emr;
 RECTL rclBounds;
 DWORD nPolys;
 DWORD cpts;
 DWORD aPolyCounts[1];
 POINTS apts[1];
} EMRPOLYPOLYLINE16,*PEMRPOLYPOLYLINE16,EMRPOLYPOLYGON16,*PEMRPOLYPOLYGON16;
typedef struct tagEMRPOLYTEXTOUTA {
 EMR emr;
 RECTL rclBounds;
 DWORD iGraphicsMode;
 FLOAT exScale;
 FLOAT eyScale;
 LONG cStrings;
 EMRTEXT aemrtext[1];
} EMRPOLYTEXTOUTA,*PEMRPOLYTEXTOUTA,EMRPOLYTEXTOUTW,*PEMRPOLYTEXTOUTW;
typedef struct tagEMRRESIZEPALETTE {
 EMR emr;
 DWORD ihPal;
 DWORD cEntries;
} EMRRESIZEPALETTE,*PEMRRESIZEPALETTE;
typedef struct tagEMRRESTOREDC {
 EMR emr;
 LONG iRelative;
} EMRRESTOREDC,*PEMRRESTOREDC;
typedef struct tagEMRROUNDRECT {
 EMR emr;
 RECTL rclBox;
 SIZEL szlCorner;
} EMRROUNDRECT,*PEMRROUNDRECT;
typedef struct tagEMRSCALEVIEWPORTEXTEX {
 EMR emr;
 LONG xNum;
 LONG xDenom;
 LONG yNum;
 LONG yDenom;
} EMRSCALEVIEWPORTEXTEX,*PEMRSCALEVIEWPORTEXTEX,EMRSCALEWINDOWEXTEX,*PEMRSCALEWINDOWEXTEX;
typedef struct tagEMRSELECTCOLORSPACE {
 EMR emr;
 DWORD ihCS;
} EMRSELECTCOLORSPACE,*PEMRSELECTCOLORSPACE,EMRDELETECOLORSPACE,*PEMRDELETECOLORSPACE;
typedef struct tagEMRSELECTOBJECT {
 EMR emr;
 DWORD ihObject;
} EMRSELECTOBJECT,*PEMRSELECTOBJECT,EMRDELETEOBJECT,*PEMRDELETEOBJECT;
typedef struct tagEMRSELECTPALETTE {
 EMR emr;
 DWORD ihPal;
} EMRSELECTPALETTE,*PEMRSELECTPALETTE;
typedef struct tagEMRSETARCDIRECTION {
 EMR emr;
 DWORD iArcDirection;
} EMRSETARCDIRECTION,*PEMRSETARCDIRECTION;
typedef struct tagEMRSETTEXTCOLOR {
 EMR emr;
 COLORREF crColor;
} EMRSETBKCOLOR,*PEMRSETBKCOLOR,EMRSETTEXTCOLOR,*PEMRSETTEXTCOLOR;
typedef struct tagEMRSETCOLORADJUSTMENT {
 EMR emr;
 COLORADJUSTMENT ColorAdjustment;
} EMRSETCOLORADJUSTMENT,*PEMRSETCOLORADJUSTMENT;
typedef struct tagEMRSETDIBITSTODEVICE {
 EMR emr;
 RECTL rclBounds;
 LONG xDest;
 LONG yDest;
 LONG xSrc;
 LONG ySrc;
 LONG cxSrc;
 LONG cySrc;
 DWORD offBmiSrc;
 DWORD cbBmiSrc;
 DWORD offBitsSrc;
 DWORD cbBitsSrc;
 DWORD iUsageSrc;
 DWORD iStartScan;
 DWORD cScans;
} EMRSETDIBITSTODEVICE,*PEMRSETDIBITSTODEVICE;
typedef struct tagEMRSETMAPPERFLAGS {
 EMR emr;
 DWORD dwFlags;
} EMRSETMAPPERFLAGS,*PEMRSETMAPPERFLAGS;
typedef struct tagEMRSETMITERLIMIT {
 EMR emr;
 FLOAT eMiterLimit;
} EMRSETMITERLIMIT,*PEMRSETMITERLIMIT;
typedef struct tagEMRSETPALETTEENTRIES {
 EMR emr;
 DWORD ihPal;
 DWORD iStart;
 DWORD cEntries;
 PALETTEENTRY aPalEntries[1];
} EMRSETPALETTEENTRIES,*PEMRSETPALETTEENTRIES;
typedef struct tagEMRSETPIXELV {
 EMR emr;
 POINTL ptlPixel;
 COLORREF crColor;
} EMRSETPIXELV,*PEMRSETPIXELV;
typedef struct tagEMRSETVIEWPORTEXTEX {
 EMR emr;
 SIZEL szlExtent;
} EMRSETVIEWPORTEXTEX,*PEMRSETVIEWPORTEXTEX,EMRSETWINDOWEXTEX,*PEMRSETWINDOWEXTEX;
typedef struct tagEMRSETVIEWPORTORGEX {
 EMR emr;
 POINTL ptlOrigin;
} EMRSETVIEWPORTORGEX,*PEMRSETVIEWPORTORGEX,EMRSETWINDOWORGEX,*PEMRSETWINDOWORGEX,EMRSETBRUSHORGEX,*PEMRSETBRUSHORGEX;
typedef struct tagEMRSETWORLDTRANSFORM {
 EMR emr;
 XFORM xform;
} EMRSETWORLDTRANSFORM,*PEMRSETWORLDTRANSFORM;
typedef struct tagEMRSTRETCHBLT {
 EMR emr;
 RECTL rclBounds;
 LONG xDest;
 LONG yDest;
 LONG cxDest;
 LONG cyDest;
 DWORD dwRop;
 LONG xSrc;
 LONG ySrc;
 XFORM xformSrc;
 COLORREF crBkColorSrc;
 DWORD iUsageSrc;
 DWORD offBmiSrc;
 DWORD cbBmiSrc;
 DWORD offBitsSrc;
 DWORD cbBitsSrc;
 LONG cxSrc;
 LONG cySrc;
} EMRSTRETCHBLT,*PEMRSTRETCHBLT;
typedef struct tagEMRSTRETCHDIBITS {
 EMR emr;
 RECTL rclBounds;
 LONG xDest;
 LONG yDest;
 LONG xSrc;
 LONG ySrc;
 LONG cxSrc;
 LONG cySrc;
 DWORD offBmiSrc;
 DWORD cbBmiSrc;
 DWORD offBitsSrc;
 DWORD cbBitsSrc;
 DWORD iUsageSrc;
 DWORD dwRop;
 LONG cxDest;
 LONG cyDest;
} EMRSTRETCHDIBITS,*PEMRSTRETCHDIBITS;
typedef struct tagABORTPATH {
 EMR emr;
} EMRABORTPATH,*PEMRABORTPATH,EMRBEGINPATH,*PEMRBEGINPATH,EMRENDPATH,*PEMRENDPATH,EMRCLOSEFIGURE,*PEMRCLOSEFIGURE,EMRFLATTENPATH,*PEMRFLATTENPATH,EMRWIDENPATH,*PEMRWIDENPATH,EMRSETMETARGN,*PEMRSETMETARGN,EMRSAVEDC,*PEMRSAVEDC,EMRREALIZEPALETTE,*PEMRREALIZEPALETTE;
typedef struct tagEMRSELECTCLIPPATH {
 EMR emr;
 DWORD iMode;
} EMRSELECTCLIPPATH,*PEMRSELECTCLIPPATH,EMRSETBKMODE,*PEMRSETBKMODE,EMRSETMAPMODE,*PEMRSETMAPMODE,EMRSETPOLYFILLMODE,*PEMRSETPOLYFILLMODE,EMRSETROP2,*PEMRSETROP2,EMRSETSTRETCHBLTMODE,*PEMRSETSTRETCHBLTMODE,EMRSETTEXTALIGN,*PEMRSETTEXTALIGN,EMRENABLEICM,*PEMRENABLEICM;
#pragma pack(push,2)
typedef struct tagMETAHEADER {
 WORD mtType;
 WORD mtHeaderSize;
 WORD mtVersion;
 DWORD mtSize;
 WORD mtNoObjects;
 DWORD mtMaxRecord;
 WORD mtNoParameters;
} METAHEADER,*PMETAHEADER,*LPMETAHEADER;
#pragma pack(pop)
typedef struct tagENHMETAHEADER {
 DWORD iType;
 DWORD nSize;
 RECTL rclBounds;
 RECTL rclFrame;
 DWORD dSignature;
 DWORD nVersion;
 DWORD nBytes;
 DWORD nRecords;
 WORD nHandles;
 WORD sReserved;
 DWORD nDescription;
 DWORD offDescription;
 DWORD nPalEntries;
 SIZEL szlDevice;
 SIZEL szlMillimeters;

 DWORD cbPixelFormat;
 DWORD offPixelFormat;
 DWORD bOpenGL;




} ENHMETAHEADER,*LPENHMETAHEADER;
typedef struct tagMETARECORD {
 DWORD rdSize;
 WORD rdFunction;
 WORD rdParm[1];
} METARECORD,*PMETARECORD,*LPMETARECORD;
typedef struct tagENHMETARECORD {
 DWORD iType;
 DWORD nSize;
 DWORD dParm[1];
} ENHMETARECORD,*LPENHMETARECORD;
typedef struct tagHANDLETABLE {
 HGDIOBJ objectHandle[1];
} HANDLETABLE,*LPHANDLETABLE;
typedef struct tagTEXTMETRICA {
 LONG tmHeight;
 LONG tmAscent;
 LONG tmDescent;
 LONG tmInternalLeading;
 LONG tmExternalLeading;
 LONG tmAveCharWidth;
 LONG tmMaxCharWidth;
 LONG tmWeight;
 LONG tmOverhang;
 LONG tmDigitizedAspectX;
 LONG tmDigitizedAspectY;
 BYTE tmFirstChar;
 BYTE tmLastChar;
 BYTE tmDefaultChar;
 BYTE tmBreakChar;
 BYTE tmItalic;
 BYTE tmUnderlined;
 BYTE tmStruckOut;
 BYTE tmPitchAndFamily;
 BYTE tmCharSet;
} TEXTMETRICA,*PTEXTMETRICA,*LPTEXTMETRICA;
typedef struct tagTEXTMETRICW {
 LONG tmHeight;
 LONG tmAscent;
 LONG tmDescent;
 LONG tmInternalLeading;
 LONG tmExternalLeading;
 LONG tmAveCharWidth;
 LONG tmMaxCharWidth;
 LONG tmWeight;
 LONG tmOverhang;
 LONG tmDigitizedAspectX;
 LONG tmDigitizedAspectY;
 WCHAR tmFirstChar;
 WCHAR tmLastChar;
 WCHAR tmDefaultChar;
 WCHAR tmBreakChar;
 BYTE tmItalic;
 BYTE tmUnderlined;
 BYTE tmStruckOut;
 BYTE tmPitchAndFamily;
 BYTE tmCharSet;
} TEXTMETRICW,*PTEXTMETRICW,*LPTEXTMETRICW;
typedef struct _RGNDATAHEADER {
 DWORD dwSize;
 DWORD iType;
 DWORD nCount;
 DWORD nRgnSize;
 RECT rcBound;
} RGNDATAHEADER;
typedef struct _RGNDATA {
 RGNDATAHEADER rdh;
 char Buffer[1];
} RGNDATA,*PRGNDATA, *LPRGNDATA;


typedef struct tagGCP_RESULTSA {
 DWORD lStructSize;
 LPSTR lpOutString;
 UINT *lpOrder;
 INT *lpDx;
 INT *lpCaretPos;
 LPSTR lpClass;
 LPWSTR lpGlyphs;
 UINT nGlyphs;
 UINT nMaxFit;
} GCP_RESULTSA,*LPGCP_RESULTSA;
typedef struct tagGCP_RESULTSW {
 DWORD lStructSize;
 LPWSTR lpOutString;
 UINT *lpOrder;
 INT *lpDx;
 INT *lpCaretPos;
 LPWSTR lpClass;
 LPWSTR lpGlyphs;
 UINT nGlyphs;
 UINT nMaxFit;
} GCP_RESULTSW,*LPGCP_RESULTSW;
typedef struct _GLYPHMETRICS {
 UINT gmBlackBoxX;
 UINT gmBlackBoxY;
 POINT gmptGlyphOrigin;
 short gmCellIncX;
 short gmCellIncY;
} GLYPHMETRICS,*LPGLYPHMETRICS;
# 2357 "/opt/cegcc/arm-mingw32ce/include/wingdi.h" 3
typedef struct tagKERNINGPAIR {
 WORD wFirst;
 WORD wSecond;
 int iKernAmount;
} KERNINGPAIR,*LPKERNINGPAIR;
typedef struct _FIXED {
 WORD fract;
 short value;
} FIXED;
typedef struct _MAT2 {
 FIXED eM11;
 FIXED eM12;
 FIXED eM21;
 FIXED eM22;
} MAT2,*LPMAT2;
typedef struct _OUTLINETEXTMETRICA {
 UINT otmSize;
 TEXTMETRICA otmTextMetrics;
 BYTE otmFiller;
 PANOSE otmPanoseNumber;
 UINT otmfsSelection;
 UINT otmfsType;
 int otmsCharSlopeRise;
 int otmsCharSlopeRun;
 int otmItalicAngle;
 UINT otmEMSquare;
 int otmAscent;
 int otmDescent;
 UINT otmLineGap;
 UINT otmsCapEmHeight;
 UINT otmsXHeight;
 RECT otmrcFontBox;
 int otmMacAscent;
 int otmMacDescent;
 UINT otmMacLineGap;
 UINT otmusMinimumPPEM;
 POINT otmptSubscriptSize;
 POINT otmptSubscriptOffset;
 POINT otmptSuperscriptSize;
 POINT otmptSuperscriptOffset;
 UINT otmsStrikeoutSize;
 int otmsStrikeoutPosition;
 int otmsUnderscoreSize;
 int otmsUnderscorePosition;
 PSTR otmpFamilyName;
 PSTR otmpFaceName;
 PSTR otmpStyleName;
 PSTR otmpFullName;
} OUTLINETEXTMETRICA,*POUTLINETEXTMETRICA,*LPOUTLINETEXTMETRICA;
typedef struct _OUTLINETEXTMETRICW {
 UINT otmSize;
 TEXTMETRICW otmTextMetrics;
 BYTE otmFiller;
 PANOSE otmPanoseNumber;
 UINT otmfsSelection;
 UINT otmfsType;
 int otmsCharSlopeRise;
 int otmsCharSlopeRun;
 int otmItalicAngle;
 UINT otmEMSquare;
 int otmAscent;
 int otmDescent;
 UINT otmLineGap;
 UINT otmsCapEmHeight;
 UINT otmsXHeight;
 RECT otmrcFontBox;
 int otmMacAscent;
 int otmMacDescent;
 UINT otmMacLineGap;
 UINT otmusMinimumPPEM;
 POINT otmptSubscriptSize;
 POINT otmptSubscriptOffset;
 POINT otmptSuperscriptSize;
 POINT otmptSuperscriptOffset;
 UINT otmsStrikeoutSize;
 int otmsStrikeoutPosition;
 int otmsUnderscoreSize;
 int otmsUnderscorePosition;
 PSTR otmpFamilyName;
 PSTR otmpFaceName;
 PSTR otmpStyleName;
 PSTR otmpFullName;
} OUTLINETEXTMETRICW,*POUTLINETEXTMETRICW,*LPOUTLINETEXTMETRICW;
typedef struct _RASTERIZER_STATUS {
 short nSize;
 short wFlags;
 short nLanguageID;
} RASTERIZER_STATUS,*LPRASTERIZER_STATUS;
typedef struct _POLYTEXTA {
 int x;
 int y;
 UINT n;
 LPCSTR lpstr;
 UINT uiFlags;
 RECT rcl;
 int *pdx;
} POLYTEXTA, *PPOLYTEXTA, *LPPOLYTEXTA;
typedef struct _POLYTEXTW {
 int x;
 int y;
 UINT n;
 LPCWSTR lpstr;
 UINT uiFlags;
 RECT rcl;
 int *pdx;
} POLYTEXTW, *PPOLYTEXTW, *LPPOLYTEXTW;
typedef struct tagPIXELFORMATDESCRIPTOR {
 WORD nSize;
 WORD nVersion;
 DWORD dwFlags;
 BYTE iPixelType;
 BYTE cColorBits;
 BYTE cRedBits;
 BYTE cRedShift;
 BYTE cGreenBits;
 BYTE cGreenShift;
 BYTE cBlueBits;
 BYTE cBlueShift;
 BYTE cAlphaBits;
 BYTE cAlphaShift;
 BYTE cAccumBits;
 BYTE cAccumRedBits;
 BYTE cAccumGreenBits;
 BYTE cAccumBlueBits;
 BYTE cAccumAlphaBits;
 BYTE cDepthBits;
 BYTE cStencilBits;
 BYTE cAuxBuffers;
 BYTE iLayerType;
 BYTE bReserved;
 DWORD dwLayerMask;
 DWORD dwVisibleMask;
 DWORD dwDamageMask;
} PIXELFORMATDESCRIPTOR,*PPIXELFORMATDESCRIPTOR,*LPPIXELFORMATDESCRIPTOR;
typedef struct tagMETAFILEPICT {
 LONG mm;
 LONG xExt;
 LONG yExt;
 HMETAFILE hMF;
} METAFILEPICT,*LPMETAFILEPICT;
typedef struct tagLOCALESIGNATURE {
 DWORD lsUsb[4];
 DWORD lsCsbDefault[2];
 DWORD lsCsbSupported[2];
} LOCALESIGNATURE,*PLOCALESIGNATURE,*LPLOCALESIGNATURE;
typedef LONG LCSTYPE;
#pragma pack(push,4)
typedef struct tagNEWTEXTMETRICA {
 LONG tmHeight;
 LONG tmAscent;
 LONG tmDescent;
 LONG tmInternalLeading;
 LONG tmExternalLeading;
 LONG tmAveCharWidth;
 LONG tmMaxCharWidth;
 LONG tmWeight;
 LONG tmOverhang;
 LONG tmDigitizedAspectX;
 LONG tmDigitizedAspectY;
 BYTE tmFirstChar;
 BYTE tmLastChar;
 BYTE tmDefaultChar;
 BYTE tmBreakChar;
 BYTE tmItalic;
 BYTE tmUnderlined;
 BYTE tmStruckOut;
 BYTE tmPitchAndFamily;
 BYTE tmCharSet;
 DWORD ntmFlags;
 UINT ntmSizeEM;
 UINT ntmCellHeight;
 UINT ntmAvgWidth;
} NEWTEXTMETRICA,*PNEWTEXTMETRICA,*LPNEWTEXTMETRICA;
typedef struct tagNEWTEXTMETRICW {
 LONG tmHeight;
 LONG tmAscent;
 LONG tmDescent;
 LONG tmInternalLeading;
 LONG tmExternalLeading;
 LONG tmAveCharWidth;
 LONG tmMaxCharWidth;
 LONG tmWeight;
 LONG tmOverhang;
 LONG tmDigitizedAspectX;
 LONG tmDigitizedAspectY;
 WCHAR tmFirstChar;
 WCHAR tmLastChar;
 WCHAR tmDefaultChar;
 WCHAR tmBreakChar;
 BYTE tmItalic;
 BYTE tmUnderlined;
 BYTE tmStruckOut;
 BYTE tmPitchAndFamily;
 BYTE tmCharSet;
 DWORD ntmFlags;
 UINT ntmSizeEM;
 UINT ntmCellHeight;
 UINT ntmAvgWidth;
} NEWTEXTMETRICW,*PNEWTEXTMETRICW,*LPNEWTEXTMETRICW;
#pragma pack(pop)
typedef struct tagNEWTEXTMETRICEXA {
 NEWTEXTMETRICA ntmTm;
 FONTSIGNATURE ntmFontSig;
} NEWTEXTMETRICEXA;
typedef struct tagNEWTEXTMETRICEXW {
 NEWTEXTMETRICW ntmTm;
 FONTSIGNATURE ntmFontSig;
} NEWTEXTMETRICEXW;
typedef struct tagPELARRAY {
 LONG paXCount;
 LONG paYCount;
 LONG paXExt;
 LONG paYExt;
 BYTE paRGBs;
} PELARRAY,*PPELARRAY,*LPPELARRAY;
typedef struct tagENUMLOGFONTA {
 LOGFONTA elfLogFont;
 BYTE elfFullName[64];
 BYTE elfStyle[32];
} ENUMLOGFONTA,*LPENUMLOGFONTA;
typedef struct tagENUMLOGFONTW {
 LOGFONTW elfLogFont;
 WCHAR elfFullName[64];
 WCHAR elfStyle[32];
} ENUMLOGFONTW,*LPENUMLOGFONTW;
typedef struct tagENUMLOGFONTEXA {
 LOGFONTA elfLogFont;
 BYTE elfFullName[64];
 BYTE elfStyle[32];
 BYTE elfScript[32];
} ENUMLOGFONTEXA,*LPENUMLOGFONTEXA;
typedef struct tagENUMLOGFONTEXW {
 LOGFONTW elfLogFont;
 WCHAR elfFullName[64];
 WCHAR elfStyle[32];
 WCHAR elfScript[32];
} ENUMLOGFONTEXW,*LPENUMLOGFONTEXW;
typedef struct tagPOINTFX {
 FIXED x;
 FIXED y;
} POINTFX,*LPPOINTFX;
typedef struct tagTTPOLYCURVE {
 WORD wType;
 WORD cpfx;
 POINTFX apfx[1];
} TTPOLYCURVE,*LPTTPOLYCURVE;
typedef struct tagTTPOLYGONHEADER {
 DWORD cb;
 DWORD dwType;
 POINTFX pfxStart;
} TTPOLYGONHEADER,*LPTTPOLYGONHEADER;
typedef struct _POINTFLOAT {
 FLOAT x;
 FLOAT y;
} POINTFLOAT,*PPOINTFLOAT;
typedef struct _GLYPHMETRICSFLOAT {
 FLOAT gmfBlackBoxX;
 FLOAT gmfBlackBoxY;
 POINTFLOAT gmfptGlyphOrigin;
 FLOAT gmfCellIncX;
 FLOAT gmfCellIncY;
} GLYPHMETRICSFLOAT,*PGLYPHMETRICSFLOAT,*LPGLYPHMETRICSFLOAT;
typedef struct tagLAYERPLANEDESCRIPTOR {
 WORD nSize;
 WORD nVersion;
 DWORD dwFlags;
 BYTE iPixelType;
 BYTE cColorBits;
 BYTE cRedBits;
 BYTE cRedShift;
 BYTE cGreenBits;
 BYTE cGreenShift;
 BYTE cBlueBits;
 BYTE cBlueShift;
 BYTE cAlphaBits;
 BYTE cAlphaShift;
 BYTE cAccumBits;
 BYTE cAccumRedBits;
 BYTE cAccumGreenBits;
 BYTE cAccumBlueBits;
 BYTE cAccumAlphaBits;
 BYTE cDepthBits;
 BYTE cStencilBits;
 BYTE cAuxBuffers;
 BYTE iLayerPlane;
 BYTE bReserved;
 COLORREF crTransparent;
} LAYERPLANEDESCRIPTOR,*PLAYERPLANEDESCRIPTOR,*LPLAYERPLANEDESCRIPTOR;
typedef struct _BLENDFUNCTION {
    BYTE BlendOp;
    BYTE BlendFlags;
    BYTE SourceConstantAlpha;
    BYTE AlphaFormat;
} BLENDFUNCTION,*PBLENDFUNCTION,*LPBLENDFUNCTION;

typedef struct _DESIGNVECTOR {
 DWORD dvReserved;
 DWORD dvNumAxes;
 LONG dvValues[16];
} DESIGNVECTOR, *PDESIGNVECTOR, *LPDESIGNVECTOR;
# 2669 "/opt/cegcc/arm-mingw32ce/include/wingdi.h" 3
typedef USHORT COLOR16;
typedef struct _TRIVERTEX {
 LONG x;
 LONG y;
 COLOR16 Red;
 COLOR16 Green;
 COLOR16 Blue;
 COLOR16 Alpha;
} TRIVERTEX, *PTRIVERTEX, *LPTRIVERTEX;
typedef struct _GRADIENT_TRIANGLE {
 ULONG Vertex1;
 ULONG Vertex2;
 ULONG Vertex3;
} GRADIENT_TRIANGLE,*PGRADIENT_TRIANGLE,*LPGRADIENT_TRIANGLE;
typedef struct _GRADIENT_RECT {
 ULONG UpperLeft;
 ULONG LowerRight;
}GRADIENT_RECT,*PGRADIENT_RECT,*LPGRADIENT_RECT;
typedef struct _DISPLAY_DEVICEA {
  DWORD cb;
  CHAR DeviceName[32];
  CHAR DeviceString[128];
  DWORD StateFlags;
  CHAR DeviceID[128];
  CHAR DeviceKey[128];
} DISPLAY_DEVICEA, *PDISPLAY_DEVICEA, *LPDISPLAY_DEVICEA;
typedef struct _DISPLAY_DEVICEW {
  DWORD cb;
  WCHAR DeviceName[32];
  WCHAR DeviceString[128];
  DWORD StateFlags;
  WCHAR DeviceID[128];
  WCHAR DeviceKey[128];
} DISPLAY_DEVICEW, *PDISPLAY_DEVICEW, *LPDISPLAY_DEVICEW;

typedef BOOL ( *ABORTPROC)(HDC,int);
typedef int ( *MFENUMPROC)(HDC,HANDLETABLE*,METARECORD*,int,LPARAM);
typedef int ( *ENHMFENUMPROC)(HDC,HANDLETABLE*,const ENHMETARECORD*,int,LPARAM);
typedef int ( *OLDFONTENUMPROCA)(const LOGFONTA*,const TEXTMETRICA*,DWORD,LPARAM);
typedef int ( *OLDFONTENUMPROCW)(const LOGFONTW*,const TEXTMETRICW*,DWORD,LPARAM);
typedef OLDFONTENUMPROCA FONTENUMPROCA;
typedef OLDFONTENUMPROCW FONTENUMPROCW;
typedef int ( *ICMENUMPROCA)(LPSTR,LPARAM);
typedef int ( *ICMENUMPROCW)(LPWSTR,LPARAM);
typedef void ( *GOBJENUMPROC)(LPVOID,LPARAM);
typedef void ( *LINEDDAPROC)(int,int,LPARAM);
typedef UINT ( *LPFNDEVMODE)(HWND,HMODULE,LPDEVMODEA,LPSTR,LPSTR,LPDEVMODEA,LPSTR,UINT);
typedef DWORD ( *LPFNDEVCAPS)(LPSTR,LPSTR,UINT,LPSTR,LPDEVMODEA);
# 2735 "/opt/cegcc/arm-mingw32ce/include/wingdi.h" 3
 int AbortDoc(HDC);
 BOOL AbortPath(HDC);
 int AddFontResourceA(LPCSTR);
 int AddFontResourceW(LPCWSTR);





 BOOL AngleArc(HDC,int,int,DWORD,FLOAT,FLOAT);
 BOOL AnimatePalette(HPALETTE,UINT,UINT,const PALETTEENTRY*);
 BOOL Arc(HDC,int,int,int,int,int,int,int,int);
 BOOL ArcTo(HDC,int,int,int,int,int,int,int,int);
 BOOL BeginPath(HDC);
 BOOL BitBlt(HDC,int,int,int,int,HDC,int,int,DWORD);
 BOOL CancelDC(HDC);
 BOOL CheckColorsInGamut(HDC,PVOID,PVOID,DWORD);
 BOOL Chord(HDC,int,int,int,int,int,int,int,int);
 int ChoosePixelFormat(HDC,const PIXELFORMATDESCRIPTOR*);
 HENHMETAFILE CloseEnhMetaFile(HDC);
 BOOL CloseFigure(HDC);
 HMETAFILE CloseMetaFile(HDC);




 int CombineRgn(HRGN,HRGN,HRGN,int);
 BOOL CombineTransform(LPXFORM,const XFORM*,const XFORM*);
 HENHMETAFILE CopyEnhMetaFileA(HENHMETAFILE,LPCSTR);
 HENHMETAFILE CopyEnhMetaFileW(HENHMETAFILE,LPCWSTR);
 HMETAFILE CopyMetaFileA(HMETAFILE,LPCSTR);
 HMETAFILE CopyMetaFileW(HMETAFILE,LPCWSTR);
 HBITMAP CreateBitmap(int,int,UINT,UINT,PCVOID);
 HBITMAP CreateBitmapIndirect(const BITMAP*);
 HBRUSH CreateBrushIndirect(const LOGBRUSH*);
 HCOLORSPACE CreateColorSpaceA(LPLOGCOLORSPACEA);
 HCOLORSPACE CreateColorSpaceW(LPLOGCOLORSPACEW);
 HBITMAP CreateCompatibleBitmap(HDC,int,int);
 HDC CreateCompatibleDC(HDC);
 HDC CreateDCA(LPCSTR,LPCSTR,LPCSTR,const DEVMODEA*);
 HDC CreateDCW(LPCWSTR,LPCWSTR,LPCWSTR,const DEVMODEW*);
 HBITMAP CreateDIBitmap(HDC,const BITMAPINFOHEADER*,DWORD,PCVOID,const BITMAPINFO*,UINT);
 HBRUSH CreateDIBPatternBrush(HGLOBAL,UINT);
 HBRUSH CreateDIBPatternBrushPt(PCVOID,UINT);
 HBITMAP CreateDIBSection(HDC,const BITMAPINFO*,UINT,void**,HANDLE,DWORD);
 HBITMAP CreateDiscardableBitmap(HDC,int,int);
 HRGN CreateEllipticRgn(int,int,int,int);
 HRGN CreateEllipticRgnIndirect(LPCRECT);
 HDC CreateEnhMetaFileA(HDC,LPCSTR,LPCRECT,LPCSTR);
 HDC CreateEnhMetaFileW(HDC,LPCWSTR,LPCRECT,LPCWSTR);
 HFONT CreateFontA(int,int,int,int,int,DWORD,DWORD,DWORD,DWORD,DWORD,DWORD,DWORD,DWORD,LPCSTR);
 HFONT CreateFontW(int,int,int,int,int,DWORD,DWORD,DWORD,DWORD,DWORD,DWORD,DWORD,DWORD,LPCWSTR);
 HFONT CreateFontIndirectA(const LOGFONTA*);
 HFONT CreateFontIndirectW(const LOGFONTW*);
 HPALETTE CreateHalftonePalette(HDC);
 HBRUSH CreateHatchBrush(int,COLORREF);
 HDC CreateICA(LPCSTR,LPCSTR,LPCSTR,const DEVMODEA*);
 HDC CreateICW(LPCWSTR,LPCWSTR,LPCWSTR,const DEVMODEW*);
 HDC CreateMetaFileA(LPCSTR);
 HDC CreateMetaFileW(LPCWSTR);
 HPALETTE CreatePalette(const LOGPALETTE*);
 HBRUSH CreatePatternBrush(HBITMAP);
 HPEN CreatePen(int,int,COLORREF);
 HPEN CreatePenIndirect(const LOGPEN*);
 HRGN CreatePolygonRgn(const POINT*,int,int);
 HRGN CreatePolyPolygonRgn(const POINT*,const INT*,int,int);
 HRGN CreateRectRgn(int,int,int,int);
 HRGN CreateRectRgnIndirect(LPCRECT);
 HRGN CreateRoundRectRgn(int,int,int,int,int,int);
 BOOL CreateScalableFontResourceA(DWORD,LPCSTR,LPCSTR,LPCSTR);
 BOOL CreateScalableFontResourceW(DWORD,LPCWSTR,LPCWSTR,LPCWSTR);
 HBRUSH CreateSolidBrush(COLORREF);
 BOOL DeleteColorSpace(HCOLORSPACE);
 BOOL DeleteDC(HDC);
 BOOL DeleteEnhMetaFile(HENHMETAFILE);
 BOOL DeleteMetaFile(HMETAFILE);
 BOOL DeleteObject(HGDIOBJ);
 int DescribePixelFormat(HDC,int,UINT,LPPIXELFORMATDESCRIPTOR);
 DWORD DeviceCapabilitiesA(LPCSTR,LPCSTR,WORD,LPSTR,const DEVMODEA*);
 DWORD DeviceCapabilitiesW(LPCWSTR,LPCWSTR,WORD,LPWSTR,const DEVMODEW*);
 BOOL DPtoLP(HDC,LPPOINT,int);
 int DrawEscape(HDC,int,int,LPCSTR);
 BOOL Ellipse(HDC,int,int,int,int);
 int EndDoc(HDC);
 int EndPage(HDC);
 BOOL EndPath(HDC);
 BOOL EnumEnhMetaFile(HDC,HENHMETAFILE,ENHMFENUMPROC,PVOID,LPCRECT);
 int EnumFontFamiliesA(HDC,LPCSTR,FONTENUMPROCA,LPARAM);
 int EnumFontFamiliesW(HDC,LPCWSTR,FONTENUMPROCW,LPARAM);
 int EnumFontFamiliesExA(HDC,PLOGFONTA,FONTENUMPROCA,LPARAM,DWORD);
 int EnumFontFamiliesExW(HDC,PLOGFONTW,FONTENUMPROCW,LPARAM,DWORD);
 int EnumFontsA(HDC,LPCSTR,FONTENUMPROCA,LPARAM);
 int EnumFontsW(HDC,LPCWSTR,FONTENUMPROCW,LPARAM);
 int EnumICMProfilesA(HDC,ICMENUMPROCA,LPARAM);
 int EnumICMProfilesW(HDC,ICMENUMPROCW,LPARAM);
 BOOL EnumMetaFile(HDC,HMETAFILE,MFENUMPROC,LPARAM);
 int EnumObjects(HDC,int,GOBJENUMPROC,LPARAM);
 BOOL EqualRgn(HRGN,HRGN);
 int Escape(HDC,int,int,LPCSTR,PVOID);
 int ExcludeClipRect(HDC,int,int,int,int);
 int ExcludeUpdateRgn(HDC,HWND);
 HPEN ExtCreatePen(DWORD,DWORD,const LOGBRUSH*,DWORD,const DWORD*);
 HRGN ExtCreateRegion(const XFORM*,DWORD,const RGNDATA*);
 int ExtEscape(HDC,int,int,LPCSTR,int,LPSTR);
 BOOL ExtFloodFill(HDC,int,int,COLORREF,UINT);
 int ExtSelectClipRgn(HDC,HRGN,int);
 BOOL ExtTextOutA(HDC,int,int,UINT,LPCRECT,LPCSTR,UINT,const INT*);
 BOOL ExtTextOutW(HDC,int,int,UINT,LPCRECT,LPCWSTR,UINT,const INT*);
 BOOL FillPath(HDC);
 int FillRect(HDC,LPCRECT,HBRUSH);
 int FillRgn(HDC,HRGN,HBRUSH);
 BOOL FixBrushOrgEx(HDC,int,int,LPPOINT);
 BOOL FlattenPath(HDC);
 BOOL FloodFill(HDC,int,int,COLORREF);
 BOOL GdiComment(HDC,UINT,const BYTE*);
 BOOL GdiFlush(void);
 DWORD GdiGetBatchLimit(void);
 DWORD GdiSetBatchLimit(DWORD);
 int GetArcDirection(HDC);
 BOOL GetAspectRatioFilterEx(HDC,LPSIZE);
 LONG GetBitmapBits(HBITMAP,LONG,PVOID);
 BOOL GetBitmapDimensionEx(HBITMAP,LPSIZE);
 COLORREF GetBkColor(HDC);
 int GetBkMode(HDC);
 UINT GetBoundsRect(HDC,LPRECT,UINT);
 BOOL GetBrushOrgEx(HDC,LPPOINT);
 BOOL GetCharABCWidthsA(HDC,UINT,UINT,LPABC);
 BOOL GetCharABCWidths(HDC,UINT,UINT,LPABC);
 BOOL GetCharABCWidthsFloatA(HDC,UINT,UINT,LPABCFLOAT);
 BOOL GetCharABCWidthsFloatW(HDC,UINT,UINT,LPABCFLOAT);
 DWORD GetCharacterPlacementA(HDC,LPCSTR,int,int,LPGCP_RESULTSA,DWORD);
 DWORD GetCharacterPlacementW(HDC,LPCWSTR,int,int,LPGCP_RESULTSW,DWORD);
 BOOL GetCharWidth32A(HDC,UINT,UINT,LPINT);
 BOOL GetCharWidth32(HDC,UINT,UINT,LPINT);






 int GetClipBox(HDC,LPRECT);
 int GetClipRgn(HDC,HRGN);
 BOOL GetColorAdjustment(HDC,LPCOLORADJUSTMENT);
 HANDLE GetColorSpace(HDC);
 HGDIOBJ GetCurrentObject(HDC,UINT);
 BOOL GetCurrentPositionEx(HDC,LPPOINT);
 HCURSOR GetCursor(void);




 BOOL GetDCOrgEx(HDC,LPPOINT);
 int GetDeviceCaps(HDC,int);
 BOOL GetDeviceGammaRamp(HDC,PVOID);
 UINT GetDIBColorTable(HDC,UINT,UINT,RGBQUAD*);
 int GetDIBits(HDC,HBITMAP,UINT,UINT,PVOID,LPBITMAPINFO,UINT);
 HENHMETAFILE GetEnhMetaFileA(LPCSTR);
 HENHMETAFILE GetEnhMetaFileW(LPCWSTR);
 UINT GetEnhMetaFileBits(HENHMETAFILE,UINT,LPBYTE);
 UINT GetEnhMetaFileDescriptionA(HENHMETAFILE,UINT,LPSTR);
 UINT GetEnhMetaFileDescriptionW(HENHMETAFILE,UINT,LPWSTR);
 UINT GetEnhMetaFileHeader(HENHMETAFILE,UINT,LPENHMETAHEADER);
 UINT GetEnhMetaFilePaletteEntries(HENHMETAFILE,UINT,LPPALETTEENTRY);
 UINT GetEnhMetaFilePixelFormat(HENHMETAFILE,DWORD,const PIXELFORMATDESCRIPTOR*);
 DWORD GetFontData(HDC,DWORD,DWORD,PVOID,DWORD);
 DWORD GetFontLanguageInfo(HDC);
 DWORD GetGlyphOutlineA(HDC,UINT,UINT,LPGLYPHMETRICS,DWORD,PVOID,const MAT2*);
 DWORD GetGlyphOutlineW(HDC,UINT,UINT,LPGLYPHMETRICS,DWORD,PVOID,const MAT2*);
 int GetGraphicsMode(HDC);
 BOOL GetICMProfileA(HDC,LPDWORD,LPSTR);
 BOOL GetICMProfileW(HDC,LPDWORD,LPWSTR);
 DWORD GetKerningPairsA(HDC,DWORD,LPKERNINGPAIR);
 DWORD GetKerningPairsW(HDC,DWORD,LPKERNINGPAIR);
 BOOL GetLogColorSpaceA(HCOLORSPACE,LPLOGCOLORSPACEA,DWORD);
 BOOL GetLogColorSpaceW(HCOLORSPACE,LPLOGCOLORSPACEW,DWORD);
 int GetMapMode(HDC);
 HMETAFILE GetMetaFileA(LPCSTR);
 HMETAFILE GetMetaFileW(LPCWSTR);
 UINT GetMetaFileBitsEx(HMETAFILE,UINT,PVOID);
 int GetMetaRgn(HDC,HRGN);
 BOOL GetMiterLimit(HDC,PFLOAT);
 COLORREF GetNearestColor(HDC,COLORREF);
 UINT GetNearestPaletteIndex(HPALETTE,COLORREF);
 int GetObjectA(HGDIOBJ,int,PVOID);
 int GetObjectW(HGDIOBJ,int,PVOID);
 DWORD GetObjectType(HGDIOBJ);
 UINT GetOutlineTextMetricsA(HDC,UINT,LPOUTLINETEXTMETRICA);
 UINT GetOutlineTextMetricsW(HDC,UINT,LPOUTLINETEXTMETRICW);
 UINT GetPaletteEntries(HPALETTE,UINT,UINT,LPPALETTEENTRY);
 int GetPath(HDC,LPPOINT,PBYTE,int);
 COLORREF GetPixel(HDC,int,int);
 int GetPixelFormat(HDC);
 int GetPolyFillMode(HDC);
 BOOL GetRasterizerCaps(LPRASTERIZER_STATUS,UINT);
 int GetRandomRgn (HDC,HRGN,INT);
 DWORD GetRegionData(HRGN,DWORD,LPRGNDATA);
 int GetRgnBox(HRGN,LPRECT);
 int GetROP2(HDC);
 HGDIOBJ GetStockObject(int);
 int GetStretchBltMode(HDC);
 UINT GetSystemPaletteEntries(HDC,UINT,UINT,LPPALETTEENTRY);
 UINT GetSystemPaletteUse(HDC);
 UINT GetTextAlign(HDC);
 int GetTextCharacterExtra(HDC);
 int GetTextCharset(HDC);
 int GetTextCharsetInfo(HDC,LPFONTSIGNATURE,DWORD);
 COLORREF GetTextColor(HDC);
 BOOL GetTextExtentExPointA(HDC,LPCSTR,int,int,LPINT,LPINT,LPSIZE);
 BOOL GetTextExtentExPointW( HDC,LPCWSTR,int,int,LPINT,LPINT,LPSIZE );
# 2954 "/opt/cegcc/arm-mingw32ce/include/wingdi.h" 3
 int GetTextFaceA(HDC,int,LPSTR);
 int GetTextFaceW(HDC,int,LPWSTR);
 BOOL GetTextMetricsA(HDC,LPTEXTMETRICA);
 BOOL GetTextMetricsW(HDC,LPTEXTMETRICW);
 BOOL GetViewportExtEx(HDC,LPSIZE);
 BOOL GetViewportOrgEx(HDC,LPPOINT);
 BOOL GetWindowExtEx(HDC,LPSIZE);
 BOOL GetWindowOrgEx(HDC,LPPOINT);
 UINT GetWinMetaFileBits(HENHMETAFILE,UINT,LPBYTE,INT,HDC);
 BOOL GetWorldTransform(HDC,LPXFORM);
 int IntersectClipRect(HDC,int,int,int,int);
 BOOL InvertRgn(HDC,HRGN);
 BOOL LineDDA(int,int,int,int,LINEDDAPROC,LPARAM);
 BOOL LineTo(HDC,int,int);
 BOOL LPtoDP(HDC,LPPOINT,int);
 BOOL MaskBlt(HDC,int,int,int,int,HDC,int,int,HBITMAP,int,int,DWORD);
 BOOL ModifyWorldTransform(HDC,const XFORM*,DWORD);
 BOOL MoveToEx(HDC,int,int,LPPOINT);
 int OffsetClipRgn(HDC,int,int);
 int OffsetRgn(HRGN,int,int);
 BOOL OffsetViewportOrgEx(HDC,int,int,LPPOINT);
 BOOL OffsetWindowOrgEx(HDC,int,int,LPPOINT);
 BOOL PaintRgn(HDC,HRGN);
 BOOL PatBlt(HDC,int,int,int,int,DWORD);
 HRGN PathToRegion(HDC);
 BOOL Pie(HDC,int,int,int,int,int,int,int,int);
 BOOL PlayEnhMetaFile(HDC,HENHMETAFILE,LPCRECT);
 BOOL PlayEnhMetaFileRecord(HDC,LPHANDLETABLE,const ENHMETARECORD*,UINT);
 BOOL PlayMetaFile(HDC,HMETAFILE);
 BOOL PlayMetaFileRecord(HDC,LPHANDLETABLE,LPMETARECORD,UINT);
 BOOL PlgBlt(HDC,const POINT*,HDC,int,int,int,int,HBITMAP,int,int);
 BOOL PolyBezier(HDC,const POINT*,DWORD);
 BOOL PolyBezierTo(HDC,const POINT*,DWORD);
 BOOL PolyDraw(HDC,const POINT*,const BYTE*,int);
 BOOL Polygon(HDC,const POINT*,int);
 BOOL Polyline(HDC,const POINT*,int);
 BOOL PolylineTo(HDC,const POINT*,DWORD);
 BOOL PolyPolygon(HDC,const POINT*,const INT*,int);
 BOOL PolyPolyline(HDC,const POINT*,const DWORD*,DWORD);
 BOOL PolyTextOutA(HDC,const POLYTEXTA*,int);
 BOOL PolyTextOutW(HDC,const POLYTEXTW*,int);
 BOOL PtInRegion(HRGN,int,int);
 BOOL PtVisible(HDC,int,int);
 UINT RealizePalette(HDC);
 BOOL Rectangle(HDC,int,int,int,int);
 BOOL RectInRegion(HRGN,LPCRECT);
 BOOL RectVisible(HDC,LPCRECT);
 BOOL RemoveFontResourceA(LPCSTR);
 BOOL RemoveFontResourceW(LPCWSTR);





 HDC ResetDCA(HDC,const DEVMODEA*);
 HDC ResetDCW(HDC,const DEVMODEW*);
 BOOL ResizePalette(HPALETTE,UINT);
 BOOL RestoreDC(HDC,int);
 BOOL RoundRect(HDC,int,int,int,int,int,int);
 int SaveDC(HDC);
 BOOL ScaleViewportExtEx(HDC,int,int,int,int,LPSIZE);
 BOOL ScaleWindowExtEx(HDC,int,int,int,int,LPSIZE);
 BOOL SelectClipPath(HDC,int);
 int SelectClipRgn(HDC,HRGN);
 HGDIOBJ SelectObject(HDC,HGDIOBJ);
 HPALETTE SelectPalette(HDC,HPALETTE,BOOL);
 int SetAbortProc(HDC,ABORTPROC);
 int SetArcDirection(HDC,int);
 LONG SetBitmapBits(HBITMAP,DWORD,PCVOID);
 BOOL SetBitmapDimensionEx(HBITMAP,int,int,LPSIZE);
 COLORREF SetBkColor(HDC,COLORREF);
 int SetBkMode(HDC,int);
 UINT SetBoundsRect(HDC,LPCRECT,UINT);
 BOOL SetBrushOrgEx(HDC,int,int,LPPOINT);
 BOOL SetColorAdjustment(HDC,const COLORADJUSTMENT*);
 BOOL SetColorSpace(HDC,HCOLORSPACE);




 BOOL SetDeviceGammaRamp(HDC,PVOID);
 UINT SetDIBColorTable(HDC,UINT,UINT,const RGBQUAD*);
 int SetDIBits(HDC,HBITMAP,UINT,UINT,PCVOID,const BITMAPINFO*,UINT);
 int SetDIBitsToDevice(HDC,int,int,DWORD,DWORD,int,int,UINT,UINT,PCVOID,const BITMAPINFO*,UINT);
 HENHMETAFILE SetEnhMetaFileBits(UINT,const BYTE*);
 int SetGraphicsMode(HDC,int);
 int SetICMMode(HDC,int);
 BOOL SetICMProfileA(HDC,LPSTR);
 BOOL SetICMProfileW(HDC,LPWSTR);
 int SetMapMode(HDC,int);
 DWORD SetMapperFlags(HDC,DWORD);
 HMETAFILE SetMetaFileBitsEx(UINT,const BYTE *);
 int SetMetaRgn(HDC);
 BOOL SetMiterLimit(HDC,FLOAT,PFLOAT);
 UINT SetPaletteEntries(HPALETTE,UINT,UINT,const PALETTEENTRY*);
 COLORREF SetPixel(HDC,int,int,COLORREF);
 BOOL SetPixelFormat(HDC,int,const PIXELFORMATDESCRIPTOR*);
 BOOL SetPixelV(HDC,int,int,COLORREF);
 int SetPolyFillMode(HDC,int);
 BOOL SetRectRgn(HRGN,int,int,int,int);
 int SetROP2(HDC,int);
 int SetStretchBltMode(HDC,int);
 UINT SetSystemPaletteUse(HDC,UINT);
 UINT SetTextAlign(HDC,UINT);
 int SetTextCharacterExtra(HDC,int);
 COLORREF SetTextColor(HDC,COLORREF);
 BOOL SetTextJustification(HDC,int,int);
 BOOL SetViewportExtEx(HDC,int,int,LPSIZE);
 BOOL SetViewportOrgEx(HDC,int,int,LPPOINT);
 BOOL SetWindowExtEx(HDC,int,int,LPSIZE);
 BOOL SetWindowOrgEx(HDC,int,int,LPPOINT);
 HENHMETAFILE SetWinMetaFileBits(UINT,const BYTE*,HDC,const METAFILEPICT*);
 BOOL SetWorldTransform(HDC,const XFORM *);
 int StartDocA(HDC,const DOCINFOA*);
 int StartDocW(HDC,const DOCINFOW*);
 int StartPage(HDC);
 BOOL StretchBlt(HDC,int,int,int,int,HDC,int,int,int,int,DWORD);
 int StretchDIBits(HDC,int,int,int,int,int,int,int,int,const void *,const BITMAPINFO *,UINT,DWORD);
 BOOL StrokeAndFillPath(HDC);
 BOOL StrokePath(HDC);
 BOOL SwapBuffers(HDC);
 BOOL TextOutA(HDC,int,int,LPCSTR,int);
 BOOL TextOutW(HDC,int,int,LPCWSTR,int);
 BOOL TranslateCharsetInfo(PDWORD,LPCHARSETINFO,DWORD);
 BOOL UnrealizeObject(HGDIOBJ);
 BOOL UpdateColors(HDC);
 BOOL UpdateICMRegKeyA(DWORD,DWORD,LPSTR,UINT);
 BOOL UpdateICMRegKeyW(DWORD,DWORD,LPWSTR,UINT);
 BOOL WidenPath(HDC);
 BOOL wglCopyContext(HGLRC,HGLRC,UINT);
 HGLRC wglCreateContext(HDC);
 HGLRC wglCreateLayerContext(HDC,int);
 BOOL wglDeleteContext(HGLRC);
 BOOL wglDescribeLayerPlane(HDC,int,int,UINT,LPLAYERPLANEDESCRIPTOR);
 HGLRC wglGetCurrentContext(void);
 HDC wglGetCurrentDC(void);
 int wglGetLayerPaletteEntries(HDC,int,int,int,COLORREF*);
 PROC wglGetProcAddress(LPCSTR);
 BOOL wglMakeCurrent(HDC,HGLRC);
 BOOL wglRealizeLayerPalette(HDC,int,BOOL);
 int wglSetLayerPaletteEntries(HDC,int,int,int,const COLORREF*);
 BOOL wglShareLists(HGLRC,HGLRC);
 BOOL wglSwapLayerBuffers(HDC,UINT);
 BOOL wglUseFontBitmapsA(HDC,DWORD,DWORD,DWORD);
 BOOL wglUseFontBitmapsW(HDC,DWORD,DWORD,DWORD);
 BOOL wglUseFontOutlinesA(HDC,DWORD,DWORD,DWORD,FLOAT,FLOAT,int,LPGLYPHMETRICSFLOAT);
 BOOL wglUseFontOutlinesW(HDC,DWORD,DWORD,DWORD,FLOAT,FLOAT,int,LPGLYPHMETRICSFLOAT);

 BOOL AlphaBlend(HDC,int,int,int,int,HDC,int,int,int,int,BLENDFUNCTION);
 BOOL GradientFill(HDC,PTRIVERTEX,ULONG,PVOID,ULONG,ULONG);


 BOOL TransparentBlt(HDC,int,int,int,int,HDC,int,int,int,int,UINT);
# 3119 "/opt/cegcc/arm-mingw32ce/include/wingdi.h" 3
typedef WCHAR BCHAR;
typedef DOCINFOW DOCINFO, *LPDOCINFO;
typedef LOGFONTW LOGFONT,*PLOGFONT,*LPLOGFONT;
typedef TEXTMETRICW TEXTMETRIC,*PTEXTMETRIC,*LPTEXTMETRIC;


typedef DEVMODEW DEVMODE,*PDEVMODE,*LPDEVMODE;





typedef EXTLOGFONTW EXTLOGFONT,*PEXTLOGFONT,*LPEXTLOGFONT;
typedef GCP_RESULTSW GCP_RESULTS,*LPGCP_RESULTS;
typedef OUTLINETEXTMETRICW OUTLINETEXTMETRIC,*POUTLINETEXTMETRIC,*LPOUTLINETEXTMETRIC;
typedef POLYTEXTW POLYTEXT,*PPOLYTEXT,*LPPOLYTEXT;
typedef LOGCOLORSPACEW LOGCOLORSPACE,*LPLOGCOLORSPACE;
typedef NEWTEXTMETRICW NEWTEXTMETRIC,*PNEWTEXTMETRIC,*LPNEWTEXTMETRIC;
typedef NEWTEXTMETRICEXW NEWTEXTMETRICEX;
typedef ENUMLOGFONTW ENUMLOGFONT,*LPENUMLOGFONT;
typedef ENUMLOGFONTEXW ENUMLOGFONTEX,*LPENUMLOGFONTEX;
typedef DISPLAY_DEVICEW DISPLAY_DEVICE, *PDISPLAY_DEVICE, *LPDISPLAY_DEVICE;
# 53 "/opt/cegcc/arm-mingw32ce/include/windows.h" 2 3


# 1 "/opt/cegcc/arm-mingw32ce/include/winuser.h" 1 3



       
# 5 "/opt/cegcc/arm-mingw32ce/include/winuser.h" 3
# 2531 "/opt/cegcc/arm-mingw32ce/include/winuser.h" 3
typedef BOOL( *DLGPROC)(HWND,UINT,WPARAM,LPARAM);
typedef void( *TIMERPROC)(HWND,UINT,UINT,DWORD);
typedef BOOL( *GRAYSTRINGPROC)(HDC,LPARAM,int);
typedef LRESULT( *HOOKPROC)(int,WPARAM,LPARAM);
typedef BOOL( *PROPENUMPROCA)(HWND,LPCSTR,HANDLE);
typedef BOOL( *PROPENUMPROCW)(HWND,LPCWSTR,HANDLE);
typedef BOOL( *PROPENUMPROCEXA)(HWND,LPSTR,HANDLE,DWORD);
typedef BOOL( *PROPENUMPROCEXW)(HWND,LPWSTR,HANDLE,DWORD);
typedef int( *EDITWORDBREAKPROCA)(LPSTR,int,int,int);
typedef int( *EDITWORDBREAKPROCW)(LPWSTR,int,int,int);
typedef LRESULT( *WNDPROC)(HWND,UINT,WPARAM,LPARAM);
typedef BOOL( *DRAWSTATEPROC)(HDC,LPARAM,WPARAM,int,int);
typedef BOOL( *WNDENUMPROC)(HWND,LPARAM);
typedef BOOL( *ENUMWINDOWSPROC)(HWND,LPARAM);
typedef BOOL(* MONITORENUMPROC)(HMONITOR,HDC,LPRECT,LPARAM);
typedef BOOL( *NAMEENUMPROCA)(LPSTR,LPARAM);
typedef BOOL( *NAMEENUMPROCW)(LPWSTR,LPARAM);
typedef NAMEENUMPROCA DESKTOPENUMPROCA;
typedef NAMEENUMPROCW DESKTOPENUMPROCW;
typedef NAMEENUMPROCA WINSTAENUMPROCA;
typedef NAMEENUMPROCW WINSTAENUMPROCW;
typedef void( *SENDASYNCPROC)(HWND,UINT,DWORD,LRESULT);
typedef struct HDWP__{int i;}*HDWP;
typedef struct HDEVNOTIFY__{int i;}*HDEVNOTIFY;
typedef struct tagMENUGETOBJECTINFO {
  DWORD dwFlags;
  UINT uPos;
  HMENU hmenu;
  PVOID riid;
  PVOID pvObj;
} MENUGETOBJECTINFO, *PMENUGETOBJECTINFO;
typedef struct tagACCEL {
 BYTE fVirt;
 WORD key;
 WORD cmd;
} ACCEL,*LPACCEL;
typedef struct tagACCESSTIMEOUT {
 UINT cbSize;
 DWORD dwFlags;
 DWORD iTimeOutMSec;
} ACCESSTIMEOUT, *LPACCESSTIMEOUT;
typedef struct tagANIMATIONINFO {
 UINT cbSize;
 int iMinAnimate;
} ANIMATIONINFO,*LPANIMATIONINFO;
typedef struct tagCREATESTRUCTA {
 LPVOID lpCreateParams;
 HINSTANCE hInstance;
 HMENU hMenu;
 HWND hwndParent;
 int cy;
 int cx;
 int y;
 int x;
 LONG style;
 LPCSTR lpszName;
 LPCSTR lpszClass;
 DWORD dwExStyle;
} CREATESTRUCTA,*LPCREATESTRUCTA;
typedef struct tagCREATESTRUCTW {
 LPVOID lpCreateParams;
 HINSTANCE hInstance;
 HMENU hMenu;
 HWND hwndParent;
 int cy;
 int cx;
 int y;
 int x;
 LONG style;
 LPCWSTR lpszName;
 LPCWSTR lpszClass;
 DWORD dwExStyle;
} CREATESTRUCTW,*LPCREATESTRUCTW;
typedef struct tagCBT_CREATEWNDA {
 LPCREATESTRUCTA lpcs;
 HWND hwndInsertAfter;
} CBT_CREATEWNDA, *LPCBT_CREATEWNDA;
typedef struct tagCBT_CREATEWNDW {
 LPCREATESTRUCTW lpcs;
 HWND hwndInsertAfter;
} CBT_CREATEWNDW, *LPCBT_CREATEWNDW;
typedef struct tagCBTACTIVATESTRUCT {
 BOOL fMouse;
 HWND hWndActive;
} CBTACTIVATESTRUCT,*LPCBTACTIVATESTRUCT;
typedef struct tagCLIENTCREATESTRUCT {
 HANDLE hWindowMenu;
 UINT idFirstChild;
} CLIENTCREATESTRUCT,*LPCLIENTCREATESTRUCT;
typedef struct tagCOMPAREITEMSTRUCT {
 UINT CtlType;
 UINT CtlID;
 HWND hwndItem;
 UINT itemID1;
 DWORD itemData1;
 UINT itemID2;
 DWORD itemData2;
 DWORD dwLocaleId;
} COMPAREITEMSTRUCT,*LPCOMPAREITEMSTRUCT;
typedef struct tagCOPYDATASTRUCT {
 DWORD dwData;
 DWORD cbData;
 PVOID lpData;
} COPYDATASTRUCT,*PCOPYDATASTRUCT;
typedef struct tagCURSORSHAPE {
 int xHotSpot;
 int yHotSpot;
 int cx;
 int cy;
 int cbWidth;
    BYTE Planes;
    BYTE BitsPixel;
} CURSORSHAPE,*LPCURSORSHAPE;
typedef struct tagCWPRETSTRUCT {
 LRESULT lResult;
 LPARAM lParam;
 WPARAM wParam;
 DWORD message;
 HWND hwnd;
} CWPRETSTRUCT;
typedef struct tagCWPSTRUCT {
 LPARAM lParam;
 WPARAM wParam;
 UINT message;
 HWND hwnd;
} CWPSTRUCT,*PCWPSTRUCT;
typedef struct tagDEBUGHOOKINFO {
 DWORD idThread;
 DWORD idThreadInstaller;
 LPARAM lParam;
 WPARAM wParam;
 int code;
} DEBUGHOOKINFO,*PDEBUGHOOKINFO,*LPDEBUGHOOKINFO;
typedef struct tagDELETEITEMSTRUCT {
 UINT CtlType;
 UINT CtlID;
 UINT itemID;
 HWND hwndItem;
 UINT itemData;
} DELETEITEMSTRUCT,*PDELETEITEMSTRUCT,*LPDELETEITEMSTRUCT;
#pragma pack(push,2)
typedef struct {
 DWORD style;
 DWORD dwExtendedStyle;
 short x;
 short y;
 short cx;
 short cy;
 WORD id;
} DLGITEMTEMPLATE,*LPDLGITEMTEMPLATE;
typedef struct {
 DWORD style;
 DWORD dwExtendedStyle;
 WORD cdit;
 short x;
 short y;
 short cx;
 short cy;
} DLGTEMPLATE,*LPDLGTEMPLATE,*LPDLGTEMPLATEA,*LPDLGTEMPLATEW;
typedef const DLGTEMPLATE *LPCDLGTEMPLATE;
#pragma pack(pop)
typedef struct tagDRAWITEMSTRUCT {
 UINT CtlType;
 UINT CtlID;
 UINT itemID;
 UINT itemAction;
 UINT itemState;
 HWND hwndItem;
 HDC hDC;
 RECT rcItem;
 DWORD itemData;
} DRAWITEMSTRUCT,*LPDRAWITEMSTRUCT,*PDRAWITEMSTRUCT;
typedef struct {
 UINT cbSize;
 int iTabLength;
 int iLeftMargin;
 int iRightMargin;
 UINT uiLengthDrawn;
} DRAWTEXTPARAMS,*LPDRAWTEXTPARAMS;
typedef struct tagPAINTSTRUCT {
 HDC hdc;
 BOOL fErase;
 RECT rcPaint;
 BOOL fRestore;
 BOOL fIncUpdate;
 BYTE rgbReserved[32];
} PAINTSTRUCT,*LPPAINTSTRUCT;
typedef struct tagMSG {
 HWND hwnd;
 UINT message;
 WPARAM wParam;
 LPARAM lParam;
 DWORD time;
 POINT pt;
} MSG,*LPMSG,*PMSG;
typedef struct _ICONINFO {
 BOOL fIcon;
 DWORD xHotspot;
 DWORD yHotspot;
 HBITMAP hbmMask;
 HBITMAP hbmColor;
} ICONINFO,*PICONINFO;
typedef struct tagNMHDR {
 HWND hwndFrom;
 UINT idFrom;
 UINT code;
} NMHDR,*LPNMHDR;
typedef struct _WNDCLASSA {
 UINT style;
 WNDPROC lpfnWndProc;
 int cbClsExtra;
 int cbWndExtra;
 HINSTANCE hInstance;
 HICON hIcon;
 HCURSOR hCursor;
 HBRUSH hbrBackground;
 LPCSTR lpszMenuName;
 LPCSTR lpszClassName;
} WNDCLASSA,*LPWNDCLASSA,*PWNDCLASSA;
typedef struct _WNDCLASSW {
 UINT style;
 WNDPROC lpfnWndProc;
 int cbClsExtra;
 int cbWndExtra;
 HINSTANCE hInstance;
 HICON hIcon;
 HCURSOR hCursor;
 HBRUSH hbrBackground;
 LPCWSTR lpszMenuName;
 LPCWSTR lpszClassName;
} WNDCLASSW,*LPWNDCLASSW,*PWNDCLASSW;
typedef struct _WNDCLASSEXA {
 UINT cbSize;
 UINT style;
 WNDPROC lpfnWndProc;
 int cbClsExtra;
 int cbWndExtra;
 HINSTANCE hInstance;
 HICON hIcon;
 HCURSOR hCursor;
 HBRUSH hbrBackground;
 LPCSTR lpszMenuName;
 LPCSTR lpszClassName;
 HICON hIconSm;
} WNDCLASSEXA,*LPWNDCLASSEXA,*PWNDCLASSEXA;
typedef struct _WNDCLASSEXW {
 UINT cbSize;
 UINT style;
 WNDPROC lpfnWndProc;
 int cbClsExtra;
 int cbWndExtra;
 HINSTANCE hInstance;
 HICON hIcon;
 HCURSOR hCursor;
 HBRUSH hbrBackground;
 LPCWSTR lpszMenuName;
 LPCWSTR lpszClassName;
 HICON hIconSm;
} WNDCLASSEXW,*LPWNDCLASSEXW,*PWNDCLASSEXW;
typedef struct tagMENUITEMINFOA {
 UINT cbSize;
 UINT fMask;
 UINT fType;
 UINT fState;
 UINT wID;
 HMENU hSubMenu;
 HBITMAP hbmpChecked;
 HBITMAP hbmpUnchecked;
 DWORD dwItemData;
 LPSTR dwTypeData;
 UINT cch;



} MENUITEMINFOA,*LPMENUITEMINFOA;
typedef const MENUITEMINFOA *LPCMENUITEMINFOA;
typedef struct tagMENUITEMINFOW {
 UINT cbSize;
 UINT fMask;
 UINT fType;
 UINT fState;
 UINT wID;
 HMENU hSubMenu;
 HBITMAP hbmpChecked;
 HBITMAP hbmpUnchecked;
 DWORD dwItemData;
 LPWSTR dwTypeData;
 UINT cch;



} MENUITEMINFOW,*LPMENUITEMINFOW;
typedef const MENUITEMINFOW *LPCMENUITEMINFOW;
typedef struct tagSCROLLINFO {
 UINT cbSize;
 UINT fMask;
 int nMin;
 int nMax;
 UINT nPage;
 int nPos;
 int nTrackPos;
} SCROLLINFO,*LPSCROLLINFO;
typedef const SCROLLINFO *LPCSCROLLINFO;
typedef struct _WINDOWPLACEMENT {
 UINT length;
 UINT flags;
 UINT showCmd;
 POINT ptMinPosition;
 POINT ptMaxPosition;
 RECT rcNormalPosition;
} WINDOWPLACEMENT,*LPWINDOWPLACEMENT,*PWINDOWPLACEMENT;
typedef struct {
 WORD versionNumber;
 WORD offset;
} MENUITEMTEMPLATEHEADER;
typedef struct {
 WORD mtOption;
 WORD mtID;
 WCHAR mtString[1];
} MENUITEMTEMPLATE;
typedef void MENUTEMPLATE,MENUTEMPLATEA,MENUTEMPLATEW,*LPMENUTEMPLATEA,*LPMENUTEMPLATEW,*LPMENUTEMPLATE;
typedef struct tagHELPINFO {
 UINT cbSize;
 int iContextType;
 int iCtrlId;
 HANDLE hItemHandle;
 DWORD dwContextId;
 POINT MousePos;
} HELPINFO,*LPHELPINFO;
typedef void( *MSGBOXCALLBACK)(LPHELPINFO);
typedef struct {
 UINT cbSize;
 HWND hwndOwner;
 HINSTANCE hInstance;
 LPCSTR lpszText;
 LPCSTR lpszCaption;
 DWORD dwStyle;
 LPCSTR lpszIcon;
 DWORD dwContextHelpId;
 MSGBOXCALLBACK lpfnMsgBoxCallback;
 DWORD dwLanguageId;
} MSGBOXPARAMSA,*PMSGBOXPARAMSA,*LPMSGBOXPARAMSA;
typedef struct {
 UINT cbSize;
 HWND hwndOwner;
 HINSTANCE hInstance;
 LPCWSTR lpszText;
 LPCWSTR lpszCaption;
 DWORD dwStyle;
 LPCWSTR lpszIcon;
 DWORD dwContextHelpId;
 MSGBOXCALLBACK lpfnMsgBoxCallback;
 DWORD dwLanguageId;
} MSGBOXPARAMSW,*PMSGBOXPARAMSW,*LPMSGBOXPARAMSW;
typedef struct tagUSEROBJECTFLAGS {
 BOOL fInherit;
 BOOL fReserved;
 DWORD dwFlags;
} USEROBJECTFLAGS;
typedef struct tagFILTERKEYS {
 UINT cbSize;
 DWORD dwFlags;
 DWORD iWaitMSec;
 DWORD iDelayMSec;
 DWORD iRepeatMSec;
 DWORD iBounceMSec;
} FILTERKEYS;
typedef struct tagHIGHCONTRASTA {
 UINT cbSize;
 DWORD dwFlags;
 LPSTR lpszDefaultScheme;
} HIGHCONTRASTA,*LPHIGHCONTRASTA;
typedef struct tagHIGHCONTRASTW {
 UINT cbSize;
 DWORD dwFlags;
 LPWSTR lpszDefaultScheme;
} HIGHCONTRASTW,*LPHIGHCONTRASTW;

typedef struct tagICONMETRICSA {
 UINT cbSize;
 int iHorzSpacing;
 int iVertSpacing;
 int iTitleWrap;
 LOGFONTA lfFont;
} ICONMETRICSA,*LPICONMETRICSA;
typedef struct tagICONMETRICSW {
 UINT cbSize;
 int iHorzSpacing;
 int iVertSpacing;
 int iTitleWrap;
 LOGFONTW lfFont;
} ICONMETRICSW,*LPICONMETRICSW;

typedef struct tagMINIMIZEDMETRICS {
 UINT cbSize;
 int iWidth;
 int iHorzGap;
 int iVertGap;
 int iArrange;
} MINIMIZEDMETRICS,*LPMINIMIZEDMETRICS;
typedef struct tagMOUSEKEYS{
 UINT cbSize;
 DWORD dwFlags;
 DWORD iMaxSpeed;
 DWORD iTimeToMaxSpeed;
 DWORD iCtrlSpeed;
 DWORD dwReserved1;
 DWORD dwReserved2;
} MOUSEKEYS,*LPMOUSEKEYS;

typedef struct tagNONCLIENTMETRICSA {
 UINT cbSize;
 int iBorderWidth;
 int iScrollWidth;
 int iScrollHeight;
 int iCaptionWidth;
 int iCaptionHeight;
 LOGFONTA lfCaptionFont;
 int iSmCaptionWidth;
 int iSmCaptionHeight;
 LOGFONTA lfSmCaptionFont;
 int iMenuWidth;
 int iMenuHeight;
 LOGFONTA lfMenuFont;
 LOGFONTA lfStatusFont;
 LOGFONTA lfMessageFont;
} NONCLIENTMETRICSA,*LPNONCLIENTMETRICSA;
typedef struct tagNONCLIENTMETRICSW {
 UINT cbSize;
 int iBorderWidth;
 int iScrollWidth;
 int iScrollHeight;
 int iCaptionWidth;
 int iCaptionHeight;
 LOGFONTW lfCaptionFont;
 int iSmCaptionWidth;
 int iSmCaptionHeight;
 LOGFONTW lfSmCaptionFont;
 int iMenuWidth;
 int iMenuHeight;
 LOGFONTW lfMenuFont;
 LOGFONTW lfStatusFont;
 LOGFONTW lfMessageFont;
} NONCLIENTMETRICSW,*LPNONCLIENTMETRICSW;

typedef struct tagSERIALKEYSA {
 UINT cbSize;
 DWORD dwFlags;
 LPSTR lpszActivePort;
 LPSTR lpszPort;
 UINT iBaudRate;
 UINT iPortState;
 UINT iActive;
} SERIALKEYSA,*LPSERIALKEYSA;
typedef struct tagSERIALKEYSW {
 UINT cbSize;
 DWORD dwFlags;
 LPWSTR lpszActivePort;
 LPWSTR lpszPort;
 UINT iBaudRate;
 UINT iPortState;
 UINT iActive;
} SERIALKEYSW,*LPSERIALKEYSW;
typedef struct tagSOUNDSENTRYA {
 UINT cbSize;
 DWORD dwFlags;
 DWORD iFSTextEffect;
 DWORD iFSTextEffectMSec;
 DWORD iFSTextEffectColorBits;
 DWORD iFSGrafEffect;
 DWORD iFSGrafEffectMSec;
 DWORD iFSGrafEffectColor;
 DWORD iWindowsEffect;
 DWORD iWindowsEffectMSec;
 LPSTR lpszWindowsEffectDLL;
 DWORD iWindowsEffectOrdinal;
} SOUNDSENTRYA,*LPSOUNDSENTRYA;
typedef struct tagSOUNDSENTRYW {
 UINT cbSize;
 DWORD dwFlags;
 DWORD iFSTextEffect;
 DWORD iFSTextEffectMSec;
 DWORD iFSTextEffectColorBits;
 DWORD iFSGrafEffect;
 DWORD iFSGrafEffectMSec;
 DWORD iFSGrafEffectColor;
 DWORD iWindowsEffect;
 DWORD iWindowsEffectMSec;
 LPWSTR lpszWindowsEffectDLL;
 DWORD iWindowsEffectOrdinal;
} SOUNDSENTRYW,*LPSOUNDSENTRYW;
typedef struct tagSTICKYKEYS {
 DWORD cbSize;
 DWORD dwFlags;
} STICKYKEYS,*LPSTICKYKEYS;
typedef struct tagTOGGLEKEYS {
 DWORD cbSize;
 DWORD dwFlags;
} TOGGLEKEYS;
typedef struct tagMOUSEHOOKSTRUCT {
 POINT pt;
 HWND hwnd;
 UINT wHitTestCode;
 DWORD dwExtraInfo;
} MOUSEHOOKSTRUCT,*LPMOUSEHOOKSTRUCT,*PMOUSEHOOKSTRUCT;
typedef struct tagTRACKMOUSEEVENT {
 DWORD cbSize;
 DWORD dwFlags;
 HWND hwndTrack;
 DWORD dwHoverTime;
} TRACKMOUSEEVENT,*LPTRACKMOUSEEVENT;
typedef struct tagTPMPARAMS {
 UINT cbSize;
 RECT rcExclude;
} TPMPARAMS,*LPTPMPARAMS;
typedef struct tagEVENTMSG {
 UINT message;
 UINT paramL;
 UINT paramH;
 DWORD time;
 HWND hwnd;
} EVENTMSG,*PEVENTMSGMSG,*LPEVENTMSGMSG,*PEVENTMSG,*LPEVENTMSG;
typedef struct _WINDOWPOS {
 HWND hwnd;
 HWND hwndInsertAfter;
 int x;
 int y;
 int cx;
 int cy;
 UINT flags;
} WINDOWPOS,*PWINDOWPOS,*LPWINDOWPOS;
typedef struct tagNCCALCSIZE_PARAMS {
 RECT rgrc[3];
 PWINDOWPOS lppos;
} NCCALCSIZE_PARAMS, *LPNCCALCSIZE_PARAMS;
typedef struct tagMDICREATESTRUCTA {
 LPCSTR szClass;
 LPCSTR szTitle;
 HANDLE hOwner;
 int x;
 int y;
 int cx;
 int cy;
 DWORD style;
 LPARAM lParam;
} MDICREATESTRUCTA,*LPMDICREATESTRUCTA;
typedef struct tagMDICREATESTRUCTW {
 LPCWSTR szClass;
 LPCWSTR szTitle;
 HANDLE hOwner;
 int x;
 int y;
 int cx;
 int cy;
 DWORD style;
 LPARAM lParam;
} MDICREATESTRUCTW,*LPMDICREATESTRUCTW;
typedef struct tagMINMAXINFO {
 POINT ptReserved;
 POINT ptMaxSize;
 POINT ptMaxPosition;
 POINT ptMinTrackSize;
 POINT ptMaxTrackSize;
} MINMAXINFO,*PMINMAXINFO,*LPMINMAXINFO;
typedef struct tagMDINEXTMENU {
 HMENU hmenuIn;
 HMENU hmenuNext;
 HWND hwndNext;
} MDINEXTMENU,*PMDINEXTMENU,*LPMDINEXTMENU;
typedef struct tagMEASUREITEMSTRUCT {
 UINT CtlType;
 UINT CtlID;
 UINT itemID;
 UINT itemWidth;
 UINT itemHeight;
 DWORD itemData;
} MEASUREITEMSTRUCT,*PMEASUREITEMSTRUCT,*LPMEASUREITEMSTRUCT;
typedef struct tagDROPSTRUCT {
 HWND hwndSource;
 HWND hwndSink;
 DWORD wFmt;
 DWORD dwData;
 POINT ptDrop;
 DWORD dwControlData;
} DROPSTRUCT,*PDROPSTRUCT,*LPDROPSTRUCT;
typedef DWORD HELPPOLY;
typedef struct tagMULTIKEYHELPA {
 DWORD mkSize;
 CHAR mkKeylist;
 CHAR szKeyphrase[1];
} MULTIKEYHELPA,*PMULTIKEYHELPA,*LPMULTIKEYHELPA;
typedef struct tagMULTIKEYHELPW {
 DWORD mkSize;
 WCHAR mkKeylist;
 WCHAR szKeyphrase[1];
} MULTIKEYHELPW,*PMULTIKEYHELPW,*LPMULTIKEYHELPW;
typedef struct tagHELPWININFOA {
 int wStructSize;
 int x;
 int y;
 int dx;
 int dy;
 int wMax;
 CHAR rgchMember[2];
} HELPWININFOA,*PHELPWININFOA,*LPHELPWININFOA;
typedef struct tagHELPWININFOW {
 int wStructSize;
 int x;
 int y;
 int dx;
 int dy;
 int wMax;
 WCHAR rgchMember[2];
} HELPWININFOW,*PHELPWININFOW,*LPHELPWININFOW;
typedef struct tagSTYLESTRUCT {
 DWORD styleOld;
 DWORD styleNew;
} STYLESTRUCT,*LPSTYLESTRUCT;
typedef struct tagALTTABINFO {
 DWORD cbSize;
 int cItems;
 int cColumns;
 int cRows;
 int iColFocus;
 int iRowFocus;
 int cxItem;
 int cyItem;
 POINT ptStart;
} ALTTABINFO,*PALTTABINFO,*LPALTTABINFO;
typedef struct tagCOMBOBOXINFO {
 DWORD cbSize;
 RECT rcItem;
 RECT rcButton;
 DWORD stateButton;
 HWND hwndCombo;
 HWND hwndItem;
 HWND hwndList;
} COMBOBOXINFO,*PCOMBOBOXINFO,*LPCOMBOBOXINFO;
typedef struct tagCURSORINFO {
 DWORD cbSize;
 DWORD flags;
 HCURSOR hCursor;
 POINT ptScreenPos;
} CURSORINFO,*PCURSORINFO,*LPCURSORINFO;
typedef struct tagMENUBARINFO {
 DWORD cbSize;
 RECT rcBar;
 HMENU hMenu;
 HWND hwndMenu;
 BOOL fBarFocused:1;
 BOOL fFocused:1;
} MENUBARINFO,*PMENUBARINFO;
typedef struct tagMENUINFO {
 DWORD cbSize;
 DWORD fMask;
 DWORD dwStyle;
 UINT cyMax;
 HBRUSH hbrBack;
 DWORD dwContextHelpID;
 ULONG_PTR dwMenuData;
} MENUINFO,*LPMENUINFO;
typedef MENUINFO const *LPCMENUINFO;

typedef struct tagSCROLLBARINFO {
 DWORD cbSize;
 RECT rcScrollBar;
 int dxyLineButton;
 int xyThumbTop;
 int xyThumbBottom;
 int reserved;
 DWORD rgstate[5 +1];
} SCROLLBARINFO,*PSCROLLBARINFO,*LPSCROLLBARINFO;
# 3211 "/opt/cegcc/arm-mingw32ce/include/winuser.h" 3
typedef struct tagWINDOWINFO {
 DWORD cbSize;
 RECT rcWindow;
 RECT rcClient;
 DWORD dwStyle;
 DWORD dwExStyle;
 DWORD dwWindowStatus;
 UINT cxWindowBorders;
 UINT cyWindowBorders;
 ATOM atomWindowType;
 WORD wCreatorVersion;
} WINDOWINFO,*PWINDOWINFO,*LPWINDOWINFO;
typedef struct tagLASTINPUTINFO {
 UINT cbSize;
 DWORD dwTime;
} LASTINPUTINFO,*PLASTINPUTINFO;
typedef struct tagMONITORINFO {
 DWORD cbSize;
 RECT rcMonitor;
 RECT rcWork;
 DWORD dwFlags;
} MONITORINFO,*LPMONITORINFO;
# 3244 "/opt/cegcc/arm-mingw32ce/include/winuser.h" 3
typedef struct tagMONITORINFOEXA {
 DWORD cbSize;
 RECT rcMonitor;
 RECT rcWork;
 DWORD dwFlags;
 CHAR szDevice[32];
} MONITORINFOEXA,*LPMONITORINFOEXA;
typedef struct tagMONITORINFOEXW {
 DWORD cbSize;
 RECT rcMonitor;
 RECT rcWork;
 DWORD dwFlags;
 WCHAR szDevice[32];
} MONITORINFOEXW,*LPMONITORINFOEXW;

typedef struct tagKBDLLHOOKSTRUCT {
 DWORD vkCode;
 DWORD scanCode;
 DWORD flags;
 DWORD time;
 DWORD dwExtraInfo;
} KBDLLHOOKSTRUCT,*LPKBDLLHOOKSTRUCT,*PKBDLLHOOKSTRUCT;
# 3434 "/opt/cegcc/arm-mingw32ce/include/winuser.h" 3
typedef struct {
 POINT pt;
 DWORD mouseData;
 DWORD flags;
 DWORD time;
 ULONG_PTR dwExtraInfo;
} MSLLHOOKSTRUCT, *PMSLLHOOKSTRUCT;
# 3463 "/opt/cegcc/arm-mingw32ce/include/winuser.h" 3
typedef const GUID *LPCGUID;
# 3486 "/opt/cegcc/arm-mingw32ce/include/winuser.h" 3
 HKL ActivateKeyboardLayout(HKL,UINT);



 BOOL AdjustWindowRectEx(LPRECT,DWORD,BOOL,DWORD);



 BOOL AnyPopup(void);
 BOOL AppendMenuA(HMENU,UINT,UINT_PTR,LPCSTR);
 BOOL AppendMenuW(HMENU,UINT,UINT_PTR,LPCWSTR);
 UINT ArrangeIconicWindows(HWND);
 BOOL AttachThreadInput(DWORD,DWORD,BOOL);
 HDWP BeginDeferWindowPos(int);
 HDC BeginPaint(HWND,LPPAINTSTRUCT);
 BOOL BringWindowToTop(HWND);
 long BroadcastSystemMessage(DWORD,LPDWORD,UINT,WPARAM,LPARAM);

 long BroadcastSystemMessageA(DWORD,LPDWORD,UINT,WPARAM,LPARAM);
 long BroadcastSystemMessageW(DWORD,LPDWORD,UINT,WPARAM,LPARAM);





 BOOL CallMsgFilterA(LPMSG,INT);
 BOOL CallMsgFilterW(LPMSG,INT);
 LRESULT CallNextHookEx(HHOOK,int,WPARAM,LPARAM);
 LRESULT CallWindowProcA(WNDPROC,HWND,UINT,WPARAM,LPARAM);
 LRESULT CallWindowProcW(WNDPROC,HWND,UINT,WPARAM,LPARAM);
 WORD CascadeWindows(HWND,UINT,LPCRECT,UINT,const HWND*);
 BOOL ChangeClipboardChain(HWND,HWND);





 LONG ChangeDisplaySettingsExA(LPCSTR,LPDEVMODEA,HWND,DWORD,LPVOID);
 LONG ChangeDisplaySettingsEx(LPCWSTR,LPDEVMODEW,HWND,DWORD,LPVOID);

 BOOL ChangeMenuA(HMENU,UINT,LPCSTR,UINT,UINT);
 BOOL ChangeMenuW(HMENU,UINT,LPCWSTR,UINT,UINT);
 LPSTR CharLowerA(LPSTR);
 LPWSTR CharLowerW(LPWSTR);
 DWORD CharLowerBuffA(LPSTR,DWORD);
 DWORD CharLowerBuffW(LPWSTR,DWORD);
 LPSTR CharNextA(LPCSTR);
 LPWSTR CharNextW(LPCWSTR);
 LPSTR CharNextExA(WORD,LPCSTR,DWORD);
 LPSTR CharPrevA(LPCSTR,LPCSTR);
 LPWSTR CharPrevW(LPCWSTR,LPCWSTR);
 LPSTR CharPrevExA(WORD,LPCSTR,LPCSTR,DWORD);
 BOOL CharToOemA(LPCSTR,LPSTR);
 BOOL CharToOemW(LPCWSTR,LPSTR);
 BOOL CharToOemBuffA(LPCSTR,LPSTR,DWORD);
 BOOL CharToOemBuffW(LPCWSTR,LPSTR,DWORD);
 LPSTR CharUpperA(LPSTR);
 LPWSTR CharUpperW(LPWSTR);
 DWORD CharUpperBuffA(LPSTR,DWORD);
 DWORD CharUpperBuffW(LPWSTR,DWORD);

 LONG SendDlgItemMessageA(HWND,int,UINT,WPARAM,LPARAM);
 LONG SendDlgItemMessageW(HWND,int,UINT,WPARAM,LPARAM);


static inline BOOL CheckDlgButton(HWND h, int i, UINT c) {
 return SendDlgItemMessageW(h, i, 241, (WPARAM)(c), 0);
}



 DWORD CheckMenuItem(HMENU,UINT,UINT);
 BOOL CheckMenuRadioItem(HMENU,UINT,UINT,UINT,UINT);
 BOOL CheckRadioButton(HWND,int,int,int);
 HWND ChildWindowFromPoint(HWND,POINT);
 HWND ChildWindowFromPointEx(HWND,POINT,UINT);
 BOOL ClientToScreen(HWND,LPPOINT);
 BOOL ClipCursor(LPCRECT);
 BOOL CloseClipboard(void);
 BOOL CloseDesktop(HDESK);
 BOOL CloseWindow(HWND);
 BOOL CloseWindowStation(HWINSTA);
 int CopyAcceleratorTableA(HACCEL,LPACCEL,int);
 int CopyAcceleratorTableW(HACCEL,LPACCEL,int);

 HICON CopyIcon(HICON);
 HANDLE CopyImage(HANDLE,UINT,int,int,UINT);
 BOOL CopyRect(LPRECT,LPCRECT);
 int CountClipboardFormats(void);
 HACCEL CreateAcceleratorTableA(LPACCEL,int);
 HACCEL CreateAcceleratorTableW(LPACCEL,int);
 BOOL CreateCaret(HWND,HBITMAP,int,int);
 HCURSOR CreateCursor(HINSTANCE,int,int,int,int,PCVOID,PCVOID);

 HDESK CreateDesktopA(LPCSTR,LPCSTR,LPDEVMODEA,DWORD,ACCESS_MASK,LPSECURITY_ATTRIBUTES);
 HDESK CreateDesktopW(LPCWSTR,LPCWSTR,LPDEVMODEW,DWORD,ACCESS_MASK,LPSECURITY_ATTRIBUTES);





 HWND CreateDialogIndirectParamA(HINSTANCE,LPCDLGTEMPLATE,HWND,DLGPROC,LPARAM);
 HWND CreateDialogIndirectParamW(HINSTANCE,LPCDLGTEMPLATE,HWND,DLGPROC,LPARAM);






 HICON CreateIcon(HINSTANCE,int,int,BYTE,BYTE,const BYTE*,const BYTE*);
 HICON CreateIconFromResource(PBYTE,DWORD,BOOL,DWORD);
 HICON CreateIconFromResourceEx(PBYTE,DWORD,BOOL,DWORD,int,int,UINT);
 HICON CreateIconIndirect(PICONINFO);
 HWND CreateMDIWindowA(LPCSTR,LPCSTR,DWORD,int,int,int,int,HWND,HINSTANCE,LPARAM);
 HWND CreateMDIWindowW(LPCWSTR,LPCWSTR,DWORD,int,int,int,int,HWND,HINSTANCE,LPARAM);
 HMENU CreateMenu(void);
 HMENU CreatePopupMenu(void);


 HWND CreateWindowExA(DWORD,LPCSTR,LPCSTR,DWORD,int,int,int,int,HWND,HMENU,HINSTANCE,LPVOID);
 HWND CreateWindowExW(DWORD,LPCWSTR,LPCWSTR,DWORD,int,int,int,int,HWND,HMENU,HINSTANCE,LPVOID);
 HWINSTA CreateWindowStationA(LPCSTR,DWORD,DWORD,LPSECURITY_ATTRIBUTES);
 HWINSTA CreateWindowStationW(LPCWSTR,DWORD,DWORD,LPSECURITY_ATTRIBUTES);
 LRESULT DefDlgProcA(HWND,UINT,WPARAM,LPARAM);
 LRESULT DefDlgProcW(HWND,UINT,WPARAM,LPARAM);
 HDWP DeferWindowPos(HDWP,HWND,HWND,int,int,int,int,UINT);
 LRESULT DefFrameProcA(HWND,HWND,UINT,WPARAM,LPARAM);
 LRESULT DefFrameProcW(HWND,HWND,UINT,WPARAM,LPARAM);

 LRESULT DefMDIChildProcA(HWND,UINT,WPARAM,LPARAM);
 LRESULT DefMDIChildProcW(HWND,UINT,WPARAM,LPARAM);



 LRESULT DefWindowProcA(HWND,UINT,WPARAM,LPARAM);
 LRESULT DefWindowProcW(HWND,UINT,WPARAM,LPARAM);
 BOOL DeleteMenu(HMENU,UINT,UINT);
 BOOL DeregisterShellHookWindow(HWND);
 BOOL DestroyAcceleratorTable(HACCEL);
 BOOL DestroyCaret(void);
 BOOL DestroyCursor(HCURSOR);
 BOOL DestroyIcon(HICON);
 BOOL DestroyMenu(HMENU);
 BOOL DestroyWindow(HWND);




 int DialogBoxIndirectParamA(HINSTANCE,LPCDLGTEMPLATE,HWND,DLGPROC,LPARAM);
 int DialogBoxIndirectParamW(HINSTANCE,LPCDLGTEMPLATE,HWND,DLGPROC,LPARAM);






 LONG DispatchMessageA(const MSG*);
 LONG DispatchMessageW(const MSG*);
 int DlgDirListA(HWND,LPSTR,int,int,UINT);
 int DlgDirListW(HWND,LPWSTR,int,int,UINT);
 int DlgDirListComboBoxA(HWND,LPSTR,int,int,UINT);
 int DlgDirListComboBoxW(HWND,LPWSTR,int,int,UINT);
 BOOL DlgDirSelectComboBoxExA(HWND,LPSTR,int,int);
 BOOL DlgDirSelectComboBoxExW(HWND,LPWSTR,int,int);
 BOOL DlgDirSelectExA(HWND,LPSTR,int,int);
 BOOL DlgDirSelectExW(HWND,LPWSTR,int,int);
 BOOL DragDetect(HWND,POINT);
 DWORD DragObject(HWND,HWND,UINT,DWORD,HCURSOR);
 BOOL DrawAnimatedRects(HWND,int,LPCRECT,LPCRECT);
 BOOL DrawCaption(HWND,HDC,LPCRECT,UINT);
 BOOL DrawEdge(HDC,LPRECT,UINT,UINT);
 BOOL DrawFocusRect(HDC,LPCRECT);
 BOOL DrawFrameControl(HDC,LPRECT,UINT,UINT);





 BOOL DrawIconEx(HDC,int,int,HICON,int,int,UINT,HBRUSH,UINT);
 BOOL DrawMenuBar(HWND);
 BOOL DrawStateA(HDC,HBRUSH,DRAWSTATEPROC,LPARAM,WPARAM,int,int,int,int,UINT);
 BOOL DrawStateW(HDC,HBRUSH,DRAWSTATEPROC,LPARAM,WPARAM,int,int,int,int,UINT);
 int DrawTextA(HDC,LPCSTR,int,LPRECT,UINT);
 int DrawTextW(HDC,LPCWSTR,int,LPRECT,UINT);
 int DrawTextExA(HDC,LPSTR,int,LPRECT,UINT,LPDRAWTEXTPARAMS);
 int DrawTextExW(HDC,LPWSTR,int,LPRECT,UINT,LPDRAWTEXTPARAMS);
 BOOL EmptyClipboard(void);
 BOOL EnableMenuItem(HMENU,UINT,UINT);
 BOOL EnableScrollBar(HWND,UINT,UINT);
 BOOL EnableWindow(HWND,BOOL);
 BOOL EndDeferWindowPos(HDWP);
 BOOL EndDialog(HWND,int);
 BOOL EndMenu(void);
 BOOL EndPaint(HWND,const PAINTSTRUCT*);



 BOOL EnumChildWindows(HWND,ENUMWINDOWSPROC,LPARAM);
 UINT EnumClipboardFormats(UINT);
 BOOL EnumDesktopsA(HWINSTA,DESKTOPENUMPROCA,LPARAM);
 BOOL EnumDesktopsW(HWINSTA,DESKTOPENUMPROCW,LPARAM);
 BOOL EnumDesktopWindows(HDESK,ENUMWINDOWSPROC,LPARAM);
 BOOL EnumDisplayMonitors(HDC,LPCRECT,MONITORENUMPROC,LPARAM);

 BOOL EnumDisplaySettingsA(LPCSTR,DWORD,PDEVMODEA);
 BOOL EnumDisplaySettings(LPCWSTR,DWORD,PDEVMODEW);




 BOOL EnumDisplayDevicesA(LPCSTR,DWORD,PDISPLAY_DEVICEA,DWORD);
 BOOL EnumDisplayDevices(LPCWSTR,DWORD,PDISPLAY_DEVICEW,DWORD);

 int EnumPropsA(HWND,PROPENUMPROCA);
 int EnumPropsW(HWND,PROPENUMPROCW);
 int EnumPropsExA(HWND,PROPENUMPROCEXA,LPARAM);
 int EnumPropsExW(HWND,PROPENUMPROCEXW,LPARAM);

 BOOL EnumThreadWindows(DWORD,WNDENUMPROC,LPARAM);
 BOOL EnumWindows(WNDENUMPROC,LPARAM);
 BOOL EnumWindowStationsA(WINSTAENUMPROCA,LPARAM);
 BOOL EnumWindowStationsW(WINSTAENUMPROCW,LPARAM);
 BOOL EqualRect(LPCRECT,LPCRECT);

 BOOL ExitWindowsEx(UINT,DWORD);
 HWND FindWindowA(LPCSTR,LPCSTR);
 HWND FindWindowExA(HWND,HWND,LPCSTR,LPCSTR);
 HWND FindWindowExW(HWND,HWND,LPCWSTR,LPCWSTR);
 HWND FindWindowW(LPCWSTR,LPCWSTR);
 BOOL FlashWindow(HWND,BOOL);



int FrameRect(HDC,LPCRECT,HBRUSH);
 BOOL FrameRgn(HDC,HRGN,HBRUSH,int,int);
 HWND GetActiveWindow(void);
 HWND GetAncestor(HWND,UINT);
 SHORT GetAsyncKeyState(int);
 HWND GetCapture(void);
 UINT GetCaretBlinkTime(void);
 BOOL GetCaretPos(LPPOINT);
 BOOL GetClassInfoA(HINSTANCE,LPCSTR,LPWNDCLASSA);
 BOOL GetClassInfoExA(HINSTANCE,LPCSTR,LPWNDCLASSEXA);
 BOOL GetClassInfoW(HINSTANCE,LPCWSTR,LPWNDCLASSW);
 BOOL GetClassInfoExW(HINSTANCE,LPCWSTR,LPWNDCLASSEXW);
 DWORD GetClassLongA(HWND,int);
 DWORD GetClassLongW(HWND,int);







 int GetClassNameA(HWND,LPSTR,int);
 int GetClassNameW(HWND,LPWSTR,int);
 WORD GetClassWord(HWND,int);
 BOOL GetClientRect(HWND,LPRECT);
 HANDLE GetClipboardData(UINT);
 int GetClipboardFormatNameA(UINT,LPSTR,int);
 int GetClipboardFormatNameW(UINT,LPWSTR,int);
 HWND GetClipboardOwner(void);



HWND GetClipboardViewer(void);
 BOOL GetClipCursor(LPRECT);
 BOOL GetCursorPos(LPPOINT);
 HDC GetDC(HWND);
 HDC GetDCEx(HWND,HRGN,DWORD);
 HWND GetDesktopWindow(void);
 long GetDialogBaseUnits(void);
 int GetDlgCtrlID(HWND);
 HWND GetDlgItem(HWND,int);
 UINT GetDlgItemInt(HWND,int,PBOOL,BOOL);
 UINT GetDlgItemTextA(HWND,int,LPSTR,int);
 UINT GetDlgItemTextW(HWND,int,LPWSTR,int);
 UINT GetDoubleClickTime(void);
 HWND GetFocus(void);
 HWND GetForegroundWindow(void);



 BOOL GetIconInfo(HICON,PICONINFO);
 BOOL GetInputState(void);
 UINT GetKBCodePage(void);
 HKL GetKeyboardLayout(DWORD);
 UINT GetKeyboardLayoutList(int,HKL*);
 BOOL GetKeyboardLayoutNameA(LPSTR);
 BOOL GetKeyboardLayoutNameW(LPWSTR);
 BOOL GetKeyboardState(PBYTE);
 int GetKeyboardType(int);
 int GetKeyNameTextA(LONG,LPSTR,int);
 int GetKeyNameTextW(LONG,LPWSTR,int);
 SHORT GetKeyState(int);
 HWND GetLastActivePopup(HWND);



 LONG GetMenuCheckMarkDimensions(void);
 DWORD GetMenuContextHelpId(HMENU);
 UINT GetMenuDefaultItem(HMENU,UINT,UINT);
 int GetMenuItemCount(HMENU);
 UINT GetMenuItemID(HMENU,int);
 BOOL GetMenuItemInfoA(HMENU,UINT,BOOL,LPMENUITEMINFOA);
 BOOL GetMenuItemInfoW(HMENU,UINT,BOOL,LPMENUITEMINFOW);
 BOOL GetMenuItemRect(HWND,HMENU,UINT,LPRECT);
 UINT GetMenuState(HMENU,UINT,UINT);
 int GetMenuStringA(HMENU,UINT,LPSTR,int,UINT);
 int GetMenuStringW(HMENU,UINT,LPWSTR,int,UINT);
 BOOL GetMessageA(LPMSG,HWND,UINT,UINT);
 BOOL GetMessageW(LPMSG,HWND,UINT,UINT);
 LONG GetMessageExtraInfo(void);
 DWORD GetMessagePos(void);
 LONG GetMessageTime(void);



 HWND GetNextDlgGroupItem(HWND,HWND,BOOL);
 HWND GetNextDlgTabItem(HWND,HWND,BOOL);

 HWND GetOpenClipboardWindow(void);
 HWND GetParent(HWND);
 int GetPriorityClipboardFormat(UINT*,int);
 HANDLE GetPropA(HWND,LPCSTR);
 HANDLE GetProp(HWND,LPCWSTR);
# 3820 "/opt/cegcc/arm-mingw32ce/include/winuser.h" 3
 DWORD GetQueueStatus(UINT);
 BOOL GetScrollInfo(HWND,int,LPSCROLLINFO);
 int GetScrollPos(HWND,int);
 BOOL GetScrollRange(HWND,int,LPINT,LPINT);



 HMENU GetSubMenu(HMENU,int);
 DWORD GetSysColor(int);
 HBRUSH GetSysColorBrush(int);






 int GetSystemMetrics(int);
 DWORD GetTabbedTextExtentA(HDC,LPCSTR,int,int,LPINT);
 DWORD GetTabbedTextExtentW(HDC,LPCWSTR,int,int,LPINT);
 LONG GetWindowLongA(HWND,int);
 LONG GetWindowLongW(HWND,int);







 HDESK GetThreadDesktop(DWORD);
 HWND GetTopWindow(HWND);
 BOOL GetUpdateRect(HWND,LPRECT,BOOL);
 int GetUpdateRgn(HWND,HRGN,BOOL);
 BOOL GetUserObjectInformationA(HANDLE,int,PVOID,DWORD,PDWORD);
 BOOL GetUserObjectInformationW(HANDLE,int,PVOID,DWORD,PDWORD);
 BOOL GetUserObjectSecurity(HANDLE,PSECURITY_INFORMATION,PSECURITY_DESCRIPTOR,DWORD,PDWORD);
 HWND GetWindow(HWND,UINT);
 DWORD GetWindowContextHelpId(HWND);
 HDC GetWindowDC(HWND);
 BOOL GetWindowPlacement(HWND,WINDOWPLACEMENT*);
 BOOL GetWindowRect(HWND,LPRECT);
 int GetWindowRgn(HWND,HRGN);

 int GetWindowTextA(HWND,LPSTR,int);
 int GetWindowTextLengthA(HWND);
 int GetWindowTextLengthW(HWND);
 int GetWindowTextW(HWND,LPWSTR,int);
 WORD GetWindowWord(HWND,int);
 BOOL GetAltTabInfoA(HWND,int,PALTTABINFO,LPSTR,UINT);
 BOOL GetAltTabInfoW(HWND,int,PALTTABINFO,LPWSTR,UINT);
 BOOL GetComboBoxInfo(HWND,PCOMBOBOXINFO);
 BOOL GetCursorInfo(PCURSORINFO);



 BOOL GetLastInputInfo(PLASTINPUTINFO);
 DWORD GetListBoxInfo(HWND);
 BOOL GetMenuBarInfo(HWND,LONG,LONG,PMENUBARINFO);
 BOOL GetMenuInfo(HMENU,LPMENUINFO);



 BOOL GetScrollBarInfo(HWND,LONG,PSCROLLBARINFO);



 BOOL GetWindowInfo(HWND,PWINDOWINFO);
 BOOL GetMonitorInfoA(HMONITOR,LPMONITORINFO);
 BOOL GetMonitorInfoW(HMONITOR,LPMONITORINFO);
 UINT GetWindowModuleFileNameA(HWND,LPSTR,UINT);
 UINT GetWindowModuleFileNameW(HWND,LPWSTR,UINT);
 BOOL GrayStringA(HDC,HBRUSH,GRAYSTRINGPROC,LPARAM,int,int,int,int,int);
 BOOL GrayStringW(HDC,HBRUSH,GRAYSTRINGPROC,LPARAM,int,int,int,int,int);
 BOOL HideCaret(HWND);
 BOOL HiliteMenuItem(HWND,HMENU,UINT,UINT);
 BOOL InflateRect(LPRECT,int,int);
 BOOL InSendMessage(void);



 BOOL InsertMenuA(HMENU,UINT,UINT,UINT,LPCSTR);
 BOOL InsertMenuW(HMENU,UINT,UINT,UINT,LPCWSTR);
 BOOL InsertMenuItemA(HMENU,UINT,BOOL,LPCMENUITEMINFOA);
 BOOL InsertMenuItemW(HMENU,UINT,BOOL,LPCMENUITEMINFOW);
 INT InternalGetWindowText(HWND,LPWSTR,INT);
 BOOL IntersectRect(LPRECT,LPCRECT,LPCRECT);
 BOOL InvalidateRect(HWND,LPCRECT,BOOL);
 BOOL InvalidateRgn(HWND,HRGN,BOOL);
 BOOL InvertRect(HDC,LPCRECT);
 BOOL IsCharAlphaA(CHAR ch);
 BOOL IsCharAlphaNumericA(CHAR);
 BOOL IsCharAlphaNumericW(WCHAR);
 BOOL IsCharAlphaW(WCHAR);
 BOOL IsCharLowerA(CHAR);
 BOOL IsCharLowerW(WCHAR);
 BOOL IsCharUpperA(CHAR);
 BOOL IsCharUpperW(WCHAR);
 BOOL IsChild(HWND,HWND);
 BOOL IsClipboardFormatAvailable(UINT);
 BOOL IsDialogMessageA(HWND,LPMSG);
 BOOL IsDialogMessageW(HWND,LPMSG);

static inline BOOL IsDlgButtonChecked(HWND h, int i) {
 SendDlgItemMessageW(h, i, 240, (WPARAM)(0), 0);
}
# 3933 "/opt/cegcc/arm-mingw32ce/include/winuser.h" 3
 BOOL IsIconic(HWND);
 BOOL IsMenu(HMENU);
 BOOL IsRectEmpty(LPCRECT);
 BOOL IsWindow(HWND);
 BOOL IsWindowEnabled(HWND);
 BOOL IsWindowUnicode(HWND);
 BOOL IsWindowVisible(HWND);



 BOOL IsZoomed(HWND);
 void keybd_event(BYTE,BYTE,DWORD,DWORD);
 BOOL KillTimer(HWND,UINT);
 HACCEL LoadAcceleratorsA(HINSTANCE,LPCSTR);
 HACCEL LoadAcceleratorsW(HINSTANCE,LPCWSTR);
 HBITMAP LoadBitmapA(HINSTANCE,LPCSTR);
 HBITMAP LoadBitmapW(HINSTANCE,LPCWSTR);
 HCURSOR LoadCursorA(HINSTANCE,LPCSTR);
 HCURSOR LoadCursorFromFileA(LPCSTR);
 HCURSOR LoadCursorFromFileW(LPCWSTR);
 HCURSOR LoadCursorW(HINSTANCE,LPCWSTR);
 HICON LoadIconA(HINSTANCE,LPCSTR);
 HICON LoadIconW(HINSTANCE,LPCWSTR);
 HANDLE LoadImageA(HINSTANCE,LPCSTR,UINT,int,int,UINT);
 HANDLE LoadImageW(HINSTANCE,LPCWSTR,UINT,int,int,UINT);
 HKL LoadKeyboardLayoutA(LPCSTR,UINT);
 HKL LoadKeyboardLayoutW(LPCWSTR,UINT);
 HMENU LoadMenuA(HINSTANCE,LPCSTR);
 HMENU LoadMenuIndirectA(const MENUTEMPLATE*);
 HMENU LoadMenuIndirectW(const MENUTEMPLATE*);
 HMENU LoadMenuW(HINSTANCE,LPCWSTR);
 int LoadStringA(HINSTANCE,UINT,LPSTR,int);
 int LoadStringW(HINSTANCE,UINT,LPWSTR,int);
 BOOL LockWindowUpdate(HWND);



 int LookupIconIdFromDirectory(PBYTE,BOOL);
 int LookupIconIdFromDirectoryEx(PBYTE,BOOL,int,int,UINT);
 BOOL MapDialogRect(HWND,LPRECT);
 UINT MapVirtualKeyA(UINT,UINT);
 UINT MapVirtualKeyExA(UINT,UINT,HKL);
 UINT MapVirtualKeyExW(UINT,UINT,HKL);
 UINT MapVirtualKeyW(UINT,UINT);
 int MapWindowPoints(HWND,HWND,LPPOINT,UINT);
 int MenuItemFromPoint(HWND,HMENU,POINT);
 BOOL MessageBeep(UINT);
 int MessageBoxA(HWND,LPCSTR,LPCSTR,UINT);
 int MessageBoxW(HWND,LPCWSTR,LPCWSTR,UINT);
 int MessageBoxExA(HWND,LPCSTR,LPCSTR,UINT,WORD);
 int MessageBoxExW(HWND,LPCWSTR,LPCWSTR,UINT,WORD);
 int MessageBoxIndirectA(const MSGBOXPARAMSA*);
 int MessageBoxIndirectW(const MSGBOXPARAMSW*);
 BOOL ModifyMenuA(HMENU,UINT,UINT,UINT,LPCSTR);
 BOOL ModifyMenuW(HMENU,UINT,UINT,UINT,LPCWSTR);

 HMONITOR MonitorFromPoint(POINT,DWORD);
 HMONITOR MonitorFromRect(LPCRECT,DWORD);
 HMONITOR MonitorFromWindow(HWND,DWORD);

 void mouse_event(DWORD,DWORD,DWORD,DWORD,ULONG_PTR);
 BOOL MoveWindow(HWND,int,int,int,int,BOOL);
 DWORD MsgWaitForMultipleObjectsEx(DWORD,const HANDLE*,DWORD,DWORD,DWORD);
# 4005 "/opt/cegcc/arm-mingw32ce/include/winuser.h" 3
 DWORD OemKeyScan(WORD);
 BOOL OemToCharA(LPCSTR,LPSTR);
 BOOL OemToCharBuffA(LPCSTR,LPSTR,DWORD);
 BOOL OemToCharBuffW(LPCSTR,LPWSTR,DWORD);
 BOOL OemToCharW(LPCSTR,LPWSTR);
 BOOL OffsetRect(LPRECT,int,int);
 BOOL OpenClipboard(HWND);
 HDESK OpenDesktopA(LPSTR,DWORD,BOOL,DWORD);
 HDESK OpenDesktopW(LPWSTR,DWORD,BOOL,DWORD);
 BOOL OpenIcon(HWND);
 HDESK OpenInputDesktop(DWORD,BOOL,DWORD);
 HWINSTA OpenWindowStationA(LPSTR,BOOL,DWORD);
 HWINSTA OpenWindowStationW(LPWSTR,BOOL,DWORD);
 BOOL PaintDesktop(HDC);
 BOOL PeekMessageA(LPMSG,HWND,UINT,UINT,UINT);
 BOOL PeekMessageW(LPMSG,HWND,UINT,UINT,UINT);


 BOOL PostMessageA(HWND,UINT,WPARAM,LPARAM);
 BOOL PostMessageW(HWND,UINT,WPARAM,LPARAM);
 void PostQuitMessage(int);
 BOOL PostThreadMessageA(DWORD,UINT,WPARAM,LPARAM);
 BOOL PostThreadMessageW(DWORD,UINT,WPARAM,LPARAM);



 BOOL PtInRect(LPCRECT,POINT);
 HWND RealChildWindowFromPoint(HWND,POINT);
 UINT RealGetWindowClassA(HWND,LPSTR,UINT);
 UINT RealGetWindowClassW(HWND,LPWSTR,UINT);
 BOOL RedrawWindow(HWND,LPCRECT,HRGN,UINT);
 ATOM RegisterClassA(const WNDCLASSA*);
 ATOM RegisterClassW(const WNDCLASSW*);
 ATOM RegisterClassExA(const WNDCLASSEXA*);
 ATOM RegisterClassExW(const WNDCLASSEXW*);
 UINT RegisterClipboardFormatA(LPCSTR);
 UINT RegisterClipboardFormatW(LPCWSTR);







 BOOL RegisterHotKey(HWND,int,UINT,UINT);



 UINT RegisterWindowMessageA(LPCSTR);
 UINT RegisterWindowMessageW(LPCWSTR);
 BOOL ReleaseCapture(void);
 int ReleaseDC(HWND,HDC);
 BOOL RemoveMenu(HMENU,UINT,UINT);
 HANDLE RemovePropA(HWND,LPCSTR);
 HANDLE RemoveProp(HWND,LPCWSTR);
 BOOL ReplyMessage(LRESULT);
 BOOL ScreenToClient(HWND,LPPOINT);
 BOOL ScrollDC(HDC,int,int,LPCRECT,LPCRECT,HRGN,LPRECT);
 BOOL ScrollWindow(HWND,int,int,LPCRECT,LPCRECT);
 int ScrollWindowEx(HWND,int,int,LPCRECT,LPCRECT,HRGN,LPRECT,UINT);



 LRESULT SendMessageA(HWND,UINT,WPARAM,LPARAM);
 BOOL SendMessageCallbackA(HWND,UINT,WPARAM,LPARAM,SENDASYNCPROC,DWORD);
 BOOL SendMessageCallbackW(HWND,UINT,WPARAM,LPARAM,SENDASYNCPROC,DWORD);
 LRESULT SendMessageTimeoutA(HWND,UINT,WPARAM,LPARAM,UINT,UINT,PDWORD_PTR);
 LRESULT SendMessageTimeoutW(HWND,UINT,WPARAM,LPARAM,UINT,UINT,PDWORD_PTR);
 LRESULT SendMessageW(HWND,UINT,WPARAM,LPARAM);
 BOOL SendNotifyMessageA(HWND,UINT,WPARAM,LPARAM);
 BOOL SendNotifyMessageW(HWND,UINT,WPARAM,LPARAM);
 HWND SetActiveWindow(HWND);
 HWND SetCapture(HWND hWnd);
 BOOL SetCaretBlinkTime(UINT);
 BOOL SetCaretPos(int,int);
 DWORD SetClassLongA(HWND,int,LONG);
 DWORD SetClassLongW(HWND,int,LONG);







 WORD SetClassWord(HWND,int,WORD);
 HANDLE SetClipboardData(UINT,HANDLE);
 HWND SetClipboardViewer(HWND);
 HCURSOR SetCursor(HCURSOR);
 BOOL SetCursorPos(int,int);
 void SetDebugErrorLevel(DWORD);
 BOOL SetDlgItemInt(HWND,int,UINT,BOOL);
 BOOL SetDlgItemTextA(HWND,int,LPCSTR);
 BOOL SetDlgItemTextW(HWND,int,LPCWSTR);
 BOOL SetDoubleClickTime(UINT);
 HWND SetFocus(HWND);
 BOOL SetForegroundWindow(HWND);
 BOOL SetKeyboardState(PBYTE);
 BOOL SetMenu(HWND,HMENU);
 BOOL SetMenuContextHelpId(HMENU,DWORD);
 BOOL SetMenuDefaultItem(HMENU,UINT,UINT);
 BOOL SetMenuInfo(HMENU,LPCMENUINFO);
 BOOL SetMenuItemBitmaps(HMENU,UINT,UINT,HBITMAP,HBITMAP);
 BOOL SetMenuItemInfoA(HMENU,UINT,BOOL,LPCMENUITEMINFOA);
 BOOL SetMenuItemInfoW( HMENU,UINT,BOOL,LPCMENUITEMINFOW);
 LPARAM SetMessageExtraInfo(LPARAM);
 BOOL SetMessageQueue(int);
 HWND SetParent(HWND,HWND);



 BOOL SetProcessWindowStation(HWINSTA);
 BOOL SetPropA(HWND,LPCSTR,HANDLE);
 BOOL SetProp(HWND,LPCWSTR,HANDLE);
 BOOL SetRect(LPRECT,int,int,int,int);
 BOOL SetRectEmpty(LPRECT);
 int SetScrollInfo(HWND,int,LPCSCROLLINFO,BOOL);
 int SetScrollPos(HWND,int,int,BOOL);
 BOOL SetScrollRange(HWND,int,int,int,BOOL);
 BOOL SetSysColors(int,const INT *,const COLORREF *);

 BOOL SetSystemCursor(HCURSOR,DWORD);
 BOOL SetThreadDesktop(HDESK);
 UINT SetTimer(HWND,UINT,UINT,TIMERPROC);
 BOOL SetUserObjectInformationA(HANDLE,int,PVOID,DWORD);
 BOOL SetUserObjectInformationW(HANDLE,int,PVOID,DWORD);
 BOOL SetUserObjectSecurity(HANDLE,PSECURITY_INFORMATION,PSECURITY_DESCRIPTOR);



 BOOL SetWindowContextHelpId(HWND,DWORD);
 LONG SetWindowLongA(HWND,int,LONG);
 LONG SetWindowLongW(HWND,int,LONG);







 BOOL SetWindowPlacement(HWND hWnd,const WINDOWPLACEMENT*);
 BOOL SetWindowPos(HWND,HWND,int,int,int,int,UINT);
 int SetWindowRgn(HWND,HRGN,BOOL);
 HHOOK SetWindowsHookA(int,HOOKPROC);
 HHOOK SetWindowsHookW(int,HOOKPROC);
 HHOOK SetWindowsHookExA(int,HOOKPROC,HINSTANCE,DWORD);
 HHOOK SetWindowsHookExW(int,HOOKPROC,HINSTANCE,DWORD);
 BOOL SetWindowTextA(HWND,LPCSTR);
 BOOL SetWindowTextW(HWND,LPCWSTR);
 WORD SetWindowWord(HWND,int,WORD);
 BOOL ShowCaret(HWND);
 int ShowCursor(BOOL);
 BOOL ShowOwnedPopups(HWND,BOOL);
 BOOL ShowScrollBar(HWND,int,BOOL);
 BOOL ShowWindow(HWND,int);
 BOOL ShowWindowAsync(HWND,int);
 BOOL SubtractRect(LPRECT,LPCRECT,LPCRECT);
 BOOL SwapMouseButton(BOOL);
 BOOL SwitchDesktop(HDESK);



 BOOL SystemParametersInfoA(UINT,UINT,PVOID,UINT);
 BOOL SystemParametersInfoW(UINT,UINT,PVOID,UINT);
 LONG TabbedTextOutA(HDC,int,int,LPCSTR,int,int,LPINT,int);
 LONG TabbedTextOutW(HDC,int,int,LPCWSTR,int,int,LPINT,int);
 WORD TileWindows(HWND,UINT,LPCRECT,UINT,const HWND *);
 int ToAscii(UINT,UINT,PBYTE,LPWORD,UINT);
 int ToAsciiEx(UINT,UINT,PBYTE,LPWORD,UINT,HKL);
 int ToUnicode(UINT,UINT,PBYTE,LPWSTR,int,UINT);
 int ToUnicodeEx(UINT,UINT,PBYTE,LPWSTR,int,UINT,HKL);
 BOOL TrackMouseEvent(LPTRACKMOUSEEVENT);






 BOOL TrackPopupMenuEx(HMENU,UINT,int,int,HWND,LPTPMPARAMS);
 int TranslateAcceleratorA(HWND,HACCEL,LPMSG);
 int TranslateAcceleratorW(HWND,HACCEL,LPMSG);
 BOOL TranslateMDISysAccel(HWND,LPMSG);
 BOOL TranslateMessage(const MSG*);
 BOOL UnhookWindowsHook(int,HOOKPROC);
 BOOL UnhookWindowsHookEx(HHOOK);



 BOOL UnionRect(LPRECT,LPCRECT,LPCRECT);
 BOOL UnloadKeyboardLayout(HKL);
 BOOL UnregisterClassA(LPCSTR,HINSTANCE);
 BOOL UnregisterClassW(LPCWSTR,HINSTANCE);






 BOOL UnregisterHotKey(HWND,int);
 BOOL UpdateWindow(HWND);



 BOOL ValidateRect(HWND,LPCRECT);
 BOOL ValidateRgn(HWND,HRGN);
 SHORT VkKeyScanA(CHAR);
 SHORT VkKeyScanExA(CHAR,HKL);
 SHORT VkKeyScanExW(WCHAR,HKL);
 SHORT VkKeyScanW(WCHAR);
 DWORD WaitForInputIdle(HANDLE,DWORD);
 BOOL WaitMessage(void);
 HWND WindowFromDC(HDC hDC);
 HWND WindowFromPoint(POINT);
 UINT WinExec(LPCSTR,UINT);
 BOOL WinHelpA(HWND,LPCSTR,UINT,DWORD);
 BOOL WinHelpW(HWND,LPCWSTR,UINT,DWORD);
 int wsprintfA(LPSTR,LPCSTR,...);
 int wsprintfW(LPWSTR,LPCWSTR,...);
 int wvsprintfA(LPSTR,LPCSTR,va_list arglist);
 int wvsprintfW(LPWSTR,LPCWSTR,va_list arglist);
# 4247 "/opt/cegcc/arm-mingw32ce/include/winuser.h" 3
 void SystemIdleTimerReset(void);
# 4258 "/opt/cegcc/arm-mingw32ce/include/winuser.h" 3
typedef WNDCLASSW WNDCLASS,*LPWNDCLASS,*PWNDCLASS;
typedef WNDCLASSEXW WNDCLASSEX,*LPWNDCLASSEX,*PWNDCLASSEX;
typedef MENUITEMINFOW MENUITEMINFO,*LPMENUITEMINFO;
typedef LPCMENUITEMINFOW LPCMENUITEMINFO;
typedef MSGBOXPARAMSW MSGBOXPARAMS,*PMSGBOXPARAMS,*LPMSGBOXPARAMS;
typedef HIGHCONTRASTW HIGHCONTRAST,*LPHIGHCONTRAST;
typedef SERIALKEYSW SERIALKEYS,*LPSERIALKEYS;
typedef SOUNDSENTRYW SOUNDSENTRY,*LPSOUNDSENTRY;
typedef CREATESTRUCTW CREATESTRUCT, *LPCREATESTRUCT;
typedef CBT_CREATEWNDW CBT_CREATEWND, *LPCBT_CREATEWND;
typedef MDICREATESTRUCTW MDICREATESTRUCT,*LPMDICREATESTRUCT;
typedef MULTIKEYHELPW MULTIKEYHELP,*PMULTIKEYHELP,*LPMULTIKEYHELP;
typedef MONITORINFOEXW MONITORINFOEX, *LPMONITORINFOEX;
# 4405 "/opt/cegcc/arm-mingw32ce/include/winuser.h" 3
typedef ICONMETRICSW ICONMETRICS,*LPICONMETRICS;
typedef NONCLIENTMETRICSW NONCLIENTMETRICS,*LPNONCLIENTMETRICS;
# 56 "/opt/cegcc/arm-mingw32ce/include/windows.h" 2 3


# 1 "/opt/cegcc/arm-mingw32ce/include/winnls.h" 1 3



       
# 5 "/opt/cegcc/arm-mingw32ce/include/winnls.h" 3
# 457 "/opt/cegcc/arm-mingw32ce/include/winnls.h" 3
typedef DWORD LCTYPE;
typedef DWORD CALTYPE;
typedef DWORD CALID;
typedef DWORD LGRPID;
typedef DWORD GEOID;
typedef DWORD GEOTYPE;
typedef DWORD GEOCLASS;
typedef BOOL ( *CALINFO_ENUMPROCA)(LPSTR);
typedef BOOL ( *CALINFO_ENUMPROCW)(LPWSTR);
typedef BOOL ( *CALINFO_ENUMPROCEXA)(LPSTR, CALID);
typedef BOOL ( *CALINFO_ENUMPROCEXW)(LPWSTR, CALID);
typedef BOOL ( *LANGUAGEGROUP_ENUMPROCA)(LGRPID, LPSTR, LPSTR, DWORD, LONG_PTR);
typedef BOOL ( *LANGUAGEGROUP_ENUMPROCW)(LGRPID, LPWSTR, LPWSTR, DWORD, LONG_PTR);
typedef BOOL ( *LANGGROUPLOCALE_ENUMPROCA)(LGRPID, LCID, LPSTR, LONG_PTR);
typedef BOOL ( *LANGGROUPLOCALE_ENUMPROCW)(LGRPID, LCID, LPWSTR, LONG_PTR);
typedef BOOL ( *UILANGUAGE_ENUMPROCW)(LPWSTR, LONG_PTR);
typedef BOOL ( *UILANGUAGE_ENUMPROCA)(LPSTR, LONG_PTR);
typedef BOOL ( *LOCALE_ENUMPROCA)(LPSTR);
typedef BOOL ( *LOCALE_ENUMPROCW)(LPWSTR);
typedef BOOL ( *CODEPAGE_ENUMPROCA)(LPSTR);
typedef BOOL ( *CODEPAGE_ENUMPROCW)(LPWSTR);
typedef BOOL ( *DATEFMT_ENUMPROCA)(LPSTR);
typedef BOOL ( *DATEFMT_ENUMPROCW)(LPWSTR);
typedef BOOL ( *DATEFMT_ENUMPROCEXA)(LPSTR, CALID);
typedef BOOL ( *DATEFMT_ENUMPROCEXW)(LPWSTR, CALID);
typedef BOOL ( *TIMEFMT_ENUMPROCA)(LPSTR);
typedef BOOL ( *TIMEFMT_ENUMPROCW)(LPWSTR);
typedef BOOL ( *GEO_ENUMPROC)(GEOID);

enum NLS_FUNCTION {
 COMPARE_STRING = 0x0001
};
typedef enum NLS_FUNCTION NLS_FUNCTION;
enum SYSGEOCLASS {
 GEOCLASS_NATION = 16,
 GEOCLASS_REGION = 14
};
enum SYSGEOTYPE {
 GEO_NATION = 0x0001,
 GEO_LATITUDE = 0x0002,
 GEO_LONGITUDE = 0x0003,
 GEO_ISO2 = 0x0004,
 GEO_ISO3 = 0x0005,
 GEO_RFC1766 = 0x0006,
 GEO_LCID = 0x0007,
 GEO_FRIENDLYNAME = 0x0008,
 GEO_OFFICIALNAME = 0x0009,
 GEO_TIMEZONES = 0x000a,
 GEO_OFFICIALLANGUAGES = 0x000a
};

typedef struct _cpinfo {
 UINT MaxCharSize;
 BYTE DefaultChar[2];
 BYTE LeadByte[12];
} CPINFO,*LPCPINFO;
typedef struct _cpinfoexA {
 UINT MaxCharSize;
 BYTE DefaultChar[2];
 BYTE LeadByte[12];
 WCHAR UnicodeDefaultChar;
 UINT CodePage;
 CHAR CodePageName[260];
} CPINFOEXA,*LPCPINFOEXA;
typedef struct _cpinfoexW {
 UINT MaxCharSize;
 BYTE DefaultChar[2];
 BYTE LeadByte[12];
 WCHAR UnicodeDefaultChar;
 UINT CodePage;
 WCHAR CodePageName[260];
} CPINFOEXW,*LPCPINFOEXW;
typedef struct _currencyfmtA {
 UINT NumDigits;
 UINT LeadingZero;
 UINT Grouping;
 LPSTR lpDecimalSep;
 LPSTR lpThousandSep;
 UINT NegativeOrder;
 UINT PositiveOrder;
 LPSTR lpCurrencySymbol;
} CURRENCYFMTA,*LPCURRENCYFMTA;
typedef struct _currencyfmtW {
 UINT NumDigits;
 UINT LeadingZero;
 UINT Grouping;
 LPWSTR lpDecimalSep;
 LPWSTR lpThousandSep;
 UINT NegativeOrder;
 UINT PositiveOrder;
 LPWSTR lpCurrencySymbol;
} CURRENCYFMTW,*LPCURRENCYFMTW;
typedef struct nlsversioninfo {
 DWORD dwNLSVersionInfoSize;
 DWORD dwNLSVersion;
 DWORD dwDefinedVersion;
} NLSVERSIONINFO,*LPNLSVERSIONINFO;
typedef struct _numberfmtA {
 UINT NumDigits;
 UINT LeadingZero;
 UINT Grouping;
 LPSTR lpDecimalSep;
 LPSTR lpThousandSep;
 UINT NegativeOrder;
} NUMBERFMTA,*LPNUMBERFMTA;
typedef struct _numberfmtW {
 UINT NumDigits;
 UINT LeadingZero;
 UINT Grouping;
 LPWSTR lpDecimalSep;
 LPWSTR lpThousandSep;
 UINT NegativeOrder;
} NUMBERFMTW,*LPNUMBERFMTW;

 int CompareStringA(LCID,DWORD,LPCSTR,int,LPCSTR,int);
 int CompareStringW(LCID,DWORD,LPCWSTR,int,LPCWSTR,int);
 LCID ConvertDefaultLocale(LCID);
 BOOL EnumCalendarInfoA(CALINFO_ENUMPROCA,LCID,CALID,CALTYPE);
 BOOL EnumCalendarInfoW(CALINFO_ENUMPROCW,LCID,CALID,CALTYPE);
 BOOL EnumDateFormatsA(DATEFMT_ENUMPROCA,LCID,DWORD);
 BOOL EnumDateFormatsW(DATEFMT_ENUMPROCW,LCID,DWORD);
 BOOL EnumSystemCodePagesA(CODEPAGE_ENUMPROCA,DWORD);
 BOOL EnumSystemCodePagesW(CODEPAGE_ENUMPROCW,DWORD);
 BOOL EnumSystemGeoID(GEOCLASS,GEOID,GEO_ENUMPROC);
 BOOL EnumSystemLocalesA(LOCALE_ENUMPROCA,DWORD);
 BOOL EnumSystemLocalesW(LOCALE_ENUMPROCW,DWORD);
 BOOL EnumTimeFormatsA(TIMEFMT_ENUMPROCA,LCID,DWORD);
 BOOL EnumTimeFormatsW(TIMEFMT_ENUMPROCW,LCID,DWORD);
 int FoldStringA(DWORD,LPCSTR,int,LPSTR,int);
 int FoldStringW(DWORD,LPCWSTR,int,LPWSTR,int);
 UINT GetACP(void);
 int GetCalendarInfoA(LCID,CALID,CALTYPE,LPSTR,int,LPDWORD);
 int GetCalendarInfoW(LCID,CALID,CALTYPE,LPWSTR,int,LPDWORD);
 BOOL GetCPInfo(UINT,LPCPINFO);
 BOOL GetCPInfoExA(UINT,DWORD,LPCPINFOEXA);
 BOOL GetCPInfoExW(UINT,DWORD,LPCPINFOEXW);
 int GetCurrencyFormatA(LCID,DWORD,LPCSTR,const CURRENCYFMTA*,LPSTR,int);
 int GetCurrencyFormatW(LCID,DWORD,LPCWSTR,const CURRENCYFMTW*,LPWSTR,int);
 int GetDateFormatA(LCID,DWORD,const SYSTEMTIME*,LPCSTR,LPSTR,int);
 int GetDateFormatW(LCID,DWORD,const SYSTEMTIME*,LPCWSTR,LPWSTR,int);
 int GetGeoInfoA(GEOID,GEOTYPE,LPSTR,int,LANGID);
 int GetGeoInfoW(GEOID,GEOTYPE,LPWSTR,int,LANGID);
 int GetLocaleInfoA(LCID,LCTYPE,LPSTR,int);
 int GetLocaleInfoW(LCID,LCTYPE,LPWSTR,int);
 BOOL GetNLSVersion(NLS_FUNCTION,LCID,LPNLSVERSIONINFO);
 int GetNumberFormatA(LCID,DWORD,LPCSTR,const NUMBERFMTA*,LPSTR,int);
 int GetNumberFormatW(LCID,DWORD,LPCWSTR,const NUMBERFMTW*,LPWSTR,int);
 UINT GetOEMCP(void);
 BOOL GetStringTypeA(LCID,DWORD,LPCSTR,int,LPWORD);
 BOOL GetStringTypeW(DWORD,LPCWSTR,int,LPWORD);
 BOOL GetStringTypeExA(LCID,DWORD,LPCSTR,int,LPWORD);
 BOOL GetStringTypeExW(LCID,DWORD,LPCWSTR,int,LPWORD);
 LANGID GetSystemDefaultLangID(void);
 LCID GetSystemDefaultLCID(void);
 LCID GetThreadLocale(void);
 int GetTimeFormatA(LCID,DWORD,const SYSTEMTIME*,LPCSTR,LPSTR,int);
 int GetTimeFormatW(LCID,DWORD,const SYSTEMTIME*,LPCWSTR,LPWSTR,int);
 LANGID GetUserDefaultLangID(void);
 LCID GetUserDefaultLCID(void);
 GEOID GetUserGeoID(GEOCLASS);
 BOOL IsDBCSLeadByte(BYTE);
 BOOL IsDBCSLeadByteEx(UINT,BYTE);
 BOOL IsNLSDefinedString(NLS_FUNCTION,DWORD,LPNLSVERSIONINFO,LPCWSTR,int);
 BOOL IsValidCodePage(UINT);
 BOOL IsValidLocale(LCID,DWORD);
 int LCMapStringA(LCID,DWORD,LPCSTR,int,LPSTR,int);
 int LCMapStringW(LCID,DWORD,LPCWSTR,int,LPWSTR,int);
 int MultiByteToWideChar(UINT,DWORD,LPCSTR,int,LPWSTR,int);
 int SetCalendarInfoA(LCID,CALID,CALTYPE,LPCSTR);
 int SetCalendarInfoW(LCID,CALID,CALTYPE,LPCWSTR);
 BOOL SetLocaleInfoA(LCID,LCTYPE,LPCSTR);
 BOOL SetLocaleInfoW(LCID,LCTYPE,LPCWSTR);
 BOOL SetThreadLocale(LCID);
 BOOL SetUserGeoID(GEOID);
 int WideCharToMultiByte(UINT,DWORD,LPCWSTR,int,LPSTR,int,LPCSTR,LPBOOL);
# 659 "/opt/cegcc/arm-mingw32ce/include/winnls.h" 3
typedef CPINFOEXW CPINFOEX;
typedef LPCPINFOEXW LPCPINFOEX;
typedef CURRENCYFMTW CURRENCYFMT;
typedef LPCURRENCYFMTW LPCURRENCYFMT;
typedef NUMBERFMTW NUMBERFMT;
typedef LPNUMBERFMTW LPNUMBERFMT;
# 59 "/opt/cegcc/arm-mingw32ce/include/windows.h" 2 3


# 1 "/opt/cegcc/arm-mingw32ce/include/winver.h" 1 3



       
# 5 "/opt/cegcc/arm-mingw32ce/include/winver.h" 3
# 85 "/opt/cegcc/arm-mingw32ce/include/winver.h" 3
typedef struct tagVS_FIXEDFILEINFO {
 DWORD dwSignature;
 DWORD dwStrucVersion;
 DWORD dwFileVersionMS;
 DWORD dwFileVersionLS;
 DWORD dwProductVersionMS;
 DWORD dwProductVersionLS;
 DWORD dwFileFlagsMask;
 DWORD dwFileFlags;
 DWORD dwFileOS;
 DWORD dwFileType;
 DWORD dwFileSubtype;
 DWORD dwFileDateMS;
 DWORD dwFileDateLS;
} VS_FIXEDFILEINFO;
DWORD VerFindFileA(DWORD,LPSTR,LPSTR,LPSTR,LPSTR,PUINT,LPSTR,PUINT);
DWORD VerFindFileW(DWORD,LPWSTR,LPWSTR,LPWSTR,LPWSTR,PUINT,LPWSTR,PUINT);
DWORD VerInstallFileA(DWORD,LPSTR,LPSTR,LPSTR,LPSTR,LPSTR,LPSTR,PUINT);
DWORD VerInstallFileW(DWORD,LPWSTR,LPWSTR,LPWSTR,LPWSTR,LPWSTR,LPWSTR,PUINT);
DWORD GetFileVersionInfoSizeA(LPCSTR,PDWORD);
DWORD GetFileVersionInfoSizeW(LPCWSTR,PDWORD);
BOOL GetFileVersionInfoA(LPCSTR,DWORD,DWORD,PVOID);
BOOL GetFileVersionInfoW(LPCWSTR,DWORD,DWORD,PVOID);
DWORD VerLanguageNameA(DWORD,LPSTR,DWORD);
DWORD VerLanguageNameW(DWORD,LPWSTR,DWORD);
BOOL VerQueryValueA(const LPVOID,LPCSTR,LPVOID*,PUINT);
BOOL VerQueryValueW(const LPVOID,LPCWSTR,LPVOID*,PUINT);
# 62 "/opt/cegcc/arm-mingw32ce/include/windows.h" 2 3


# 1 "/opt/cegcc/arm-mingw32ce/include/winnetwk.h" 1 3



       
# 5 "/opt/cegcc/arm-mingw32ce/include/winnetwk.h" 3
# 160 "/opt/cegcc/arm-mingw32ce/include/winnetwk.h" 3
typedef struct _NETRESOURCEA {
 DWORD dwScope;
 DWORD dwType;
 DWORD dwDisplayType;
 DWORD dwUsage;
 LPSTR lpLocalName;
 LPSTR lpRemoteName;
 LPSTR lpComment ;
 LPSTR lpProvider;
}NETRESOURCEA,*LPNETRESOURCEA;
typedef struct _NETRESOURCEW {
 DWORD dwScope;
 DWORD dwType;
 DWORD dwDisplayType;
 DWORD dwUsage;
 LPWSTR lpLocalName;
 LPWSTR lpRemoteName;
 LPWSTR lpComment ;
 LPWSTR lpProvider;
}NETRESOURCEW,*LPNETRESOURCEW;
typedef struct _CONNECTDLGSTRUCTA{
 DWORD cbStructure;
 HWND hwndOwner;
 LPNETRESOURCEA lpConnRes;
 DWORD dwFlags;
 DWORD dwDevNum;
} CONNECTDLGSTRUCTA,*LPCONNECTDLGSTRUCTA;
typedef struct _CONNECTDLGSTRUCTW{
 DWORD cbStructure;
 HWND hwndOwner;
 LPNETRESOURCEW lpConnRes;
 DWORD dwFlags;
 DWORD dwDevNum;
} CONNECTDLGSTRUCTW,*LPCONNECTDLGSTRUCTW;
typedef struct _DISCDLGSTRUCTA{
 DWORD cbStructure;
 HWND hwndOwner;
 LPSTR lpLocalName;
 LPSTR lpRemoteName;
 DWORD dwFlags;
} DISCDLGSTRUCTA,*LPDISCDLGSTRUCTA;
typedef struct _DISCDLGSTRUCTW{
 DWORD cbStructure;
 HWND hwndOwner;
 LPWSTR lpLocalName;
 LPWSTR lpRemoteName;
 DWORD dwFlags;
} DISCDLGSTRUCTW,*LPDISCDLGSTRUCTW;
typedef struct _UNIVERSAL_NAME_INFOA { LPSTR lpUniversalName; }UNIVERSAL_NAME_INFOA,*LPUNIVERSAL_NAME_INFOA;
typedef struct _UNIVERSAL_NAME_INFOW { LPWSTR lpUniversalName; }UNIVERSAL_NAME_INFOW,*LPUNIVERSAL_NAME_INFOW;
typedef struct _REMOTE_NAME_INFOA {
 LPSTR lpUniversalName;
 LPSTR lpConnectionName;
 LPSTR lpRemainingPath;
}REMOTE_NAME_INFOA,*LPREMOTE_NAME_INFOA;
typedef struct _REMOTE_NAME_INFOW {
 LPWSTR lpUniversalName;
 LPWSTR lpConnectionName;
 LPWSTR lpRemainingPath;
}REMOTE_NAME_INFOW,*LPREMOTE_NAME_INFOW;
typedef struct _NETINFOSTRUCT{
 DWORD cbStructure;
 DWORD dwProviderVersion;
 DWORD dwStatus;
 DWORD dwCharacteristics;
 DWORD dwHandle;
 WORD wNetType;
 DWORD dwPrinters;
 DWORD dwDrives;
} NETINFOSTRUCT,*LPNETINFOSTRUCT;
typedef UINT( *PFNGETPROFILEPATHA)(LPCSTR,LPSTR,UINT);
typedef UINT( *PFNGETPROFILEPATHW)(LPCWSTR,LPWSTR,UINT);
typedef UINT( *PFNRECONCILEPROFILEA)(LPCSTR,LPCSTR,DWORD);
typedef UINT( *PFNRECONCILEPROFILEW)(LPCWSTR,LPCWSTR,DWORD);
typedef BOOL( *PFNPROCESSPOLICIESA)(HWND,LPCSTR,LPCSTR,LPCSTR,DWORD);
typedef BOOL( *PFNPROCESSPOLICIESW)(HWND,LPCWSTR,LPCWSTR,LPCWSTR,DWORD);
typedef struct _NETCONNECTINFOSTRUCT{
 DWORD cbStructure;
 DWORD dwFlags;
 DWORD dwSpeed;
 DWORD dwDelay;
 DWORD dwOptDataSize;
} NETCONNECTINFOSTRUCT,*LPNETCONNECTINFOSTRUCT;

DWORD WNetAddConnectionA(LPCSTR,LPCSTR,LPCSTR);
DWORD WNetAddConnectionW(LPCWSTR,LPCWSTR,LPCWSTR);
DWORD WNetAddConnection2A(LPNETRESOURCEA,LPCSTR,LPCSTR,DWORD);
DWORD WNetAddConnection2W(LPNETRESOURCEW,LPCWSTR,LPCWSTR,DWORD);
DWORD WNetAddConnection3A(HWND,LPNETRESOURCEA,LPCSTR,LPCSTR,DWORD);
DWORD WNetAddConnection3W(HWND,LPNETRESOURCEW,LPCWSTR,LPCWSTR,DWORD);
DWORD WNetCancelConnectionA(LPCSTR,BOOL);
DWORD WNetCancelConnectionW(LPCWSTR,BOOL);
DWORD WNetCancelConnection2A(LPCSTR,DWORD,BOOL);
DWORD WNetCancelConnection2W(LPCWSTR,DWORD,BOOL);
DWORD WNetGetConnectionA(LPCSTR,LPSTR,PDWORD);
DWORD WNetGetConnectionW(LPCWSTR,LPWSTR,PDWORD);
DWORD WNetUseConnectionA(HWND,LPNETRESOURCEA,LPCSTR,LPCSTR,DWORD,LPSTR,PDWORD,PDWORD);
DWORD WNetUseConnectionW(HWND,LPNETRESOURCEW,LPCWSTR,LPCWSTR,DWORD,LPWSTR,PDWORD,PDWORD);
DWORD WNetSetConnectionA(LPCSTR,DWORD,PVOID);
DWORD WNetSetConnectionW(LPCWSTR,DWORD,PVOID);
DWORD WNetConnectionDialog(HWND,DWORD);
DWORD WNetDisconnectDialog(HWND,DWORD);
DWORD WNetConnectionDialog1A(LPCONNECTDLGSTRUCTA);
DWORD WNetConnectionDialog1W(LPCONNECTDLGSTRUCTW);
DWORD WNetDisconnectDialog1A(LPDISCDLGSTRUCTA);
DWORD WNetDisconnectDialog1W(LPDISCDLGSTRUCTW);
DWORD WNetOpenEnumA(DWORD,DWORD,DWORD,LPNETRESOURCEA,LPHANDLE);
DWORD WNetOpenEnumW(DWORD,DWORD,DWORD,LPNETRESOURCEW,LPHANDLE);
DWORD WNetEnumResourceA(HANDLE,PDWORD,PVOID,PDWORD);
DWORD WNetEnumResourceW(HANDLE,PDWORD,PVOID,PDWORD);
DWORD WNetCloseEnum(HANDLE);
DWORD WNetGetUniversalNameA(LPCSTR,DWORD,PVOID,PDWORD);
DWORD WNetGetUniversalNameW(LPCWSTR,DWORD,PVOID,PDWORD);
DWORD WNetGetUserA(LPCSTR,LPSTR,PDWORD);
DWORD WNetGetUserW(LPCWSTR,LPWSTR,PDWORD);
DWORD WNetGetProviderNameA(DWORD,LPSTR,PDWORD);
DWORD WNetGetProviderNameW(DWORD,LPWSTR,PDWORD);
DWORD WNetGetNetworkInformationA(LPCSTR,LPNETINFOSTRUCT);
DWORD WNetGetNetworkInformationW(LPCWSTR,LPNETINFOSTRUCT);
DWORD WNetGetResourceInformationA(LPNETRESOURCEA,LPVOID,LPDWORD,LPSTR*);
DWORD WNetGetResourceInformationW(LPNETRESOURCEW,LPVOID,LPDWORD,LPWSTR*);
DWORD WNetGetResourceParentA(LPNETRESOURCEA,LPVOID,LPDWORD);
DWORD WNetGetResourceParentW(LPNETRESOURCEW,LPVOID,LPDWORD);
DWORD WNetGetLastErrorA(PDWORD,LPSTR,DWORD,LPSTR,DWORD);
DWORD WNetGetLastErrorW(PDWORD,LPWSTR,DWORD,LPWSTR,DWORD);
DWORD MultinetGetConnectionPerformanceA(LPNETRESOURCEA,LPNETCONNECTINFOSTRUCT);
DWORD MultinetGetConnectionPerformanceW(LPNETRESOURCEW,LPNETCONNECTINFOSTRUCT);




typedef NETRESOURCEW NETRESOURCE,*LPNETRESOURCE;
typedef CONNECTDLGSTRUCTW CONNECTDLGSTRUCT,*LPCONNECTDLGSTRUCT;
typedef DISCDLGSTRUCTW DISCDLGSTRUCT,*LPDISCDLGSTRUCT;
typedef REMOTE_NAME_INFOW REMOTE_NAME_INFO,*LPREMOTE_NAME_INFO;
typedef UNIVERSAL_NAME_INFOW UNIVERSAL_NAME_INFO,*LPUNIVERSAL_NAME_INFO;
# 65 "/opt/cegcc/arm-mingw32ce/include/windows.h" 2 3


# 1 "/opt/cegcc/arm-mingw32ce/include/winreg.h" 1 3



       
# 5 "/opt/cegcc/arm-mingw32ce/include/winreg.h" 3
# 45 "/opt/cegcc/arm-mingw32ce/include/winreg.h" 3
typedef ACCESS_MASK REGSAM;
typedef struct value_entA {
 LPSTR ve_valuename;
 DWORD ve_valuelen;
 DWORD ve_valueptr;
 DWORD ve_type;
} VALENTA,*PVALENTA;
typedef struct value_entW {
 LPWSTR ve_valuename;
 DWORD ve_valuelen;
 DWORD ve_valueptr;
 DWORD ve_type;
} VALENTW,*PVALENTW;
 BOOL AbortSystemShutdownA(LPCSTR);
 BOOL AbortSystemShutdownW(LPCWSTR);
 BOOL InitiateSystemShutdownA(LPSTR,LPSTR,DWORD,BOOL,BOOL);
 BOOL InitiateSystemShutdownW(LPWSTR,LPWSTR,DWORD,BOOL,BOOL);
 LONG RegCloseKey(HKEY);
 LONG RegConnectRegistryA(LPCSTR,HKEY,PHKEY);
 LONG RegConnectRegistryW(LPCWSTR,HKEY,PHKEY);
 LONG RegCreateKeyA(HKEY,LPCSTR,PHKEY);
 LONG RegCreateKeyExA(HKEY,LPCSTR,DWORD,LPSTR,DWORD,REGSAM,LPSECURITY_ATTRIBUTES,PHKEY,PDWORD);
 LONG RegCreateKeyExW(HKEY,LPCWSTR,DWORD,LPWSTR,DWORD,REGSAM,LPSECURITY_ATTRIBUTES,PHKEY,PDWORD);
 LONG RegCreateKeyW(HKEY,LPCWSTR,PHKEY);
 LONG RegDeleteKeyA(HKEY,LPCSTR);
 LONG RegDeleteKeyW(HKEY,LPCWSTR);




 LONG RegDeleteValueA(HKEY,LPCSTR);
 LONG RegDeleteValueW(HKEY,LPCWSTR);
 LONG RegEnumKeyA(HKEY,DWORD,LPSTR,DWORD);
 LONG RegEnumKeyW(HKEY,DWORD,LPWSTR,DWORD);
 LONG RegEnumKeyExA(HKEY,DWORD,LPSTR,PDWORD,PDWORD,LPSTR,PDWORD,PFILETIME);
 LONG RegEnumKeyExW(HKEY,DWORD,LPWSTR,PDWORD,PDWORD,LPWSTR,PDWORD,PFILETIME);
 LONG RegEnumValueA(HKEY,DWORD,LPSTR,PDWORD,PDWORD,PDWORD,LPBYTE,PDWORD);
 LONG RegEnumValueW(HKEY,DWORD,LPWSTR,PDWORD,PDWORD,PDWORD,LPBYTE,PDWORD);
 LONG RegFlushKey(HKEY);
 LONG RegGetKeySecurity(HKEY,SECURITY_INFORMATION,PSECURITY_DESCRIPTOR,PDWORD);
 LONG RegLoadKeyA(HKEY,LPCSTR,LPCSTR);
 LONG RegLoadKeyW(HKEY,LPCWSTR,LPCWSTR);
 LONG RegNotifyChangeKeyValue(HKEY,BOOL,DWORD,HANDLE,BOOL);
 LONG RegOpenKeyA(HKEY,LPCSTR,PHKEY);
 LONG RegOpenKeyExA(HKEY,LPCSTR,DWORD,REGSAM,PHKEY);
 LONG RegOpenKeyExW(HKEY,LPCWSTR,DWORD,REGSAM,PHKEY);
 LONG RegOpenKeyW(HKEY,LPCWSTR,PHKEY);
 LONG RegQueryInfoKeyA(HKEY,LPSTR,PDWORD,PDWORD,PDWORD,PDWORD,PDWORD,PDWORD,PDWORD,PDWORD,PDWORD,PFILETIME);
 LONG RegQueryInfoKeyW(HKEY,LPWSTR,PDWORD,PDWORD,PDWORD,PDWORD,PDWORD,PDWORD,PDWORD,PDWORD,PDWORD,PFILETIME);
 LONG RegQueryMultipleValuesA(HKEY,PVALENTA,DWORD,LPSTR,LPDWORD);
 LONG RegQueryMultipleValuesW(HKEY,PVALENTW,DWORD,LPWSTR,LPDWORD);
 LONG RegQueryValueA(HKEY,LPCSTR,LPSTR,PLONG);
 LONG RegQueryValueExA(HKEY,LPCSTR,LPDWORD,LPDWORD,LPBYTE,LPDWORD);
 LONG RegQueryValueExW(HKEY,LPCWSTR,LPDWORD,LPDWORD,LPBYTE,LPDWORD);
 LONG RegQueryValueW(HKEY,LPCWSTR,LPWSTR,PLONG);
 LONG RegReplaceKeyA(HKEY,LPCSTR,LPCSTR,LPCSTR);
 LONG RegReplaceKeyW(HKEY,LPCWSTR,LPCWSTR,LPCWSTR);
 LONG RegRestoreKeyA(HKEY,LPCSTR,DWORD);
 LONG RegRestoreKeyW(HKEY,LPCWSTR,DWORD);
 LONG RegSaveKeyA(HKEY,LPCSTR,LPSECURITY_ATTRIBUTES);
 LONG RegSaveKeyW(HKEY,LPCWSTR,LPSECURITY_ATTRIBUTES);
 LONG RegSetKeySecurity(HKEY,SECURITY_INFORMATION,PSECURITY_DESCRIPTOR);
 LONG RegSetValueA(HKEY,LPCSTR,DWORD,LPCSTR,DWORD);
 LONG RegSetValueExA(HKEY,LPCSTR,DWORD,DWORD,const BYTE*,DWORD);
 LONG RegSetValueExW(HKEY,LPCWSTR,DWORD,DWORD,const BYTE*,DWORD);
 LONG RegSetValueW(HKEY,LPCWSTR,DWORD,LPCWSTR,DWORD);
 LONG RegUnLoadKeyA(HKEY,LPCSTR);
 LONG RegUnLoadKeyW(HKEY,LPCWSTR);


typedef VALENTW VALENT,*PVALENT;
# 68 "/opt/cegcc/arm-mingw32ce/include/windows.h" 2 3


# 1 "/opt/cegcc/arm-mingw32ce/include/winsvc.h" 1 3



       
# 5 "/opt/cegcc/arm-mingw32ce/include/winsvc.h" 3
# 74 "/opt/cegcc/arm-mingw32ce/include/winsvc.h" 3
typedef struct _SERVICE_STATUS {
 DWORD dwServiceType;
 DWORD dwCurrentState;
 DWORD dwControlsAccepted;
 DWORD dwWin32ExitCode;
 DWORD dwServiceSpecificExitCode;
 DWORD dwCheckPoint;
 DWORD dwWaitHint;
} SERVICE_STATUS,*LPSERVICE_STATUS;
typedef struct _SERVICE_STATUS_PROCESS {
 DWORD dwServiceType;
 DWORD dwCurrentState;
 DWORD dwControlsAccepted;
 DWORD dwWin32ExitCode;
 DWORD dwServiceSpecificExitCode;
 DWORD dwCheckPoint;
 DWORD dwWaitHint;
 DWORD dwProcessId;
 DWORD dwServiceFlags;
} SERVICE_STATUS_PROCESS, *LPSERVICE_STATUS_PROCESS;
typedef enum _SC_STATUS_TYPE {
 SC_STATUS_PROCESS_INFO = 0
} SC_STATUS_TYPE;
typedef enum _SC_ENUM_TYPE {
        SC_ENUM_PROCESS_INFO = 0
} SC_ENUM_TYPE;
typedef struct _ENUM_SERVICE_STATUSA {
 LPSTR lpServiceName;
 LPSTR lpDisplayName;
 SERVICE_STATUS ServiceStatus;
} ENUM_SERVICE_STATUSA,*LPENUM_SERVICE_STATUSA;
typedef struct _ENUM_SERVICE_STATUSW {
 LPWSTR lpServiceName;
 LPWSTR lpDisplayName;
 SERVICE_STATUS ServiceStatus;
} ENUM_SERVICE_STATUSW,*LPENUM_SERVICE_STATUSW;
typedef struct _ENUM_SERVICE_STATUS_PROCESSA {
 LPSTR lpServiceName;
 LPSTR lpDisplayName;
 SERVICE_STATUS_PROCESS ServiceStatusProcess;
} ENUM_SERVICE_STATUS_PROCESSA,*LPENUM_SERVICE_STATUS_PROCESSA;
typedef struct _ENUM_SERVICE_STATUS_PROCESSW {
 LPWSTR lpServiceName;
 LPWSTR lpDisplayName;
 SERVICE_STATUS_PROCESS ServiceStatusProcess;
} ENUM_SERVICE_STATUS_PROCESSW,*LPENUM_SERVICE_STATUS_PROCESSW;
typedef struct _QUERY_SERVICE_CONFIGA {
 DWORD dwServiceType;
 DWORD dwStartType;
 DWORD dwErrorControl;
 LPSTR lpBinaryPathName;
 LPSTR lpLoadOrderGroup;
 DWORD dwTagId;
 LPSTR lpDependencies;
 LPSTR lpServiceStartName;
 LPSTR lpDisplayName;
} QUERY_SERVICE_CONFIGA,*LPQUERY_SERVICE_CONFIGA;
typedef struct _QUERY_SERVICE_CONFIGW {
 DWORD dwServiceType;
 DWORD dwStartType;
 DWORD dwErrorControl;
 LPWSTR lpBinaryPathName;
 LPWSTR lpLoadOrderGroup;
 DWORD dwTagId;
 LPWSTR lpDependencies;
 LPWSTR lpServiceStartName;
 LPWSTR lpDisplayName;
} QUERY_SERVICE_CONFIGW,*LPQUERY_SERVICE_CONFIGW;
typedef struct _QUERY_SERVICE_LOCK_STATUSA {
 DWORD fIsLocked;
 LPSTR lpLockOwner;
 DWORD dwLockDuration;
} QUERY_SERVICE_LOCK_STATUSA,*LPQUERY_SERVICE_LOCK_STATUSA;
typedef struct _QUERY_SERVICE_LOCK_STATUSW {
 DWORD fIsLocked;
 LPWSTR lpLockOwner;
 DWORD dwLockDuration;
} QUERY_SERVICE_LOCK_STATUSW,*LPQUERY_SERVICE_LOCK_STATUSW;
typedef void ( *LPSERVICE_MAIN_FUNCTIONA)(DWORD,LPSTR*);
typedef void ( *LPSERVICE_MAIN_FUNCTIONW)(DWORD,LPWSTR*);
typedef struct _SERVICE_TABLE_ENTRYA {
 LPSTR lpServiceName;
 LPSERVICE_MAIN_FUNCTIONA lpServiceProc;
} SERVICE_TABLE_ENTRYA,*LPSERVICE_TABLE_ENTRYA;
typedef struct _SERVICE_TABLE_ENTRYW {
 LPWSTR lpServiceName;
 LPSERVICE_MAIN_FUNCTIONW lpServiceProc;
} SERVICE_TABLE_ENTRYW,*LPSERVICE_TABLE_ENTRYW;
typedef struct SC_HANDLE__{int i;}*SC_HANDLE;
typedef SC_HANDLE *LPSC_HANDLE;
typedef PVOID SC_LOCK;
typedef DWORD SERVICE_STATUS_HANDLE;
typedef void( *LPHANDLER_FUNCTION)(DWORD);
typedef DWORD ( *LPHANDLER_FUNCTION_EX)(DWORD,DWORD,LPVOID,LPVOID);
typedef struct _SERVICE_DESCRIPTIONA {
 LPSTR lpDescription;
} SERVICE_DESCRIPTIONA,*LPSERVICE_DESCRIPTIONA;
typedef struct _SERVICE_DESCRIPTIONW {
 LPWSTR lpDescription;
} SERVICE_DESCRIPTIONW,*LPSERVICE_DESCRIPTIONW;
typedef enum _SC_ACTION_TYPE {
        SC_ACTION_NONE = 0,
        SC_ACTION_RESTART = 1,
        SC_ACTION_REBOOT = 2,
        SC_ACTION_RUN_COMMAND = 3
} SC_ACTION_TYPE;
typedef struct _SC_ACTION {
 SC_ACTION_TYPE Type;
 DWORD Delay;
} SC_ACTION,*LPSC_ACTION;
typedef struct _SERVICE_FAILURE_ACTIONSA {
 DWORD dwResetPeriod;
 LPSTR lpRebootMsg;
 LPSTR lpCommand;
 DWORD cActions;
 SC_ACTION * lpsaActions;
} SERVICE_FAILURE_ACTIONSA,*LPSERVICE_FAILURE_ACTIONSA;
typedef struct _SERVICE_FAILURE_ACTIONSW {
 DWORD dwResetPeriod;
 LPWSTR lpRebootMsg;
 LPWSTR lpCommand;
 DWORD cActions;
 SC_ACTION * lpsaActions;
} SERVICE_FAILURE_ACTIONSW,*LPSERVICE_FAILURE_ACTIONSW;

 BOOL ChangeServiceConfigA(SC_HANDLE,DWORD,DWORD,DWORD,LPCSTR,LPCSTR,LPDWORD,LPCSTR,LPCSTR,LPCSTR,LPCSTR);
 BOOL ChangeServiceConfigW(SC_HANDLE,DWORD,DWORD,DWORD,LPCWSTR,LPCWSTR,LPDWORD,LPCWSTR,LPCWSTR,LPCWSTR,LPCWSTR);
 BOOL ChangeServiceConfig2A(SC_HANDLE,DWORD,LPVOID);
 BOOL ChangeServiceConfig2W(SC_HANDLE,DWORD,LPVOID);
 BOOL CloseServiceHandle(SC_HANDLE);
 BOOL ControlService(SC_HANDLE,DWORD,LPSERVICE_STATUS);
 SC_HANDLE CreateServiceA(SC_HANDLE,LPCSTR,LPCSTR,DWORD,DWORD,DWORD,DWORD,LPCSTR,LPCSTR,PDWORD,LPCSTR,LPCSTR,LPCSTR);
 SC_HANDLE CreateServiceW(SC_HANDLE,LPCWSTR,LPCWSTR,DWORD,DWORD,DWORD,DWORD,LPCWSTR,LPCWSTR,PDWORD,LPCWSTR,LPCWSTR,LPCWSTR);
 BOOL DeleteService(SC_HANDLE);
 BOOL EnumDependentServicesA(SC_HANDLE,DWORD,LPENUM_SERVICE_STATUSA,DWORD,PDWORD,PDWORD);
 BOOL EnumDependentServicesW(SC_HANDLE,DWORD,LPENUM_SERVICE_STATUSW,DWORD,PDWORD,PDWORD);
 BOOL EnumServicesStatusA(SC_HANDLE,DWORD,DWORD,LPENUM_SERVICE_STATUSA,DWORD,PDWORD,PDWORD,PDWORD);
 BOOL EnumServicesStatusW(SC_HANDLE,DWORD,DWORD,LPENUM_SERVICE_STATUSW,DWORD,PDWORD,PDWORD,PDWORD);
 BOOL EnumServicesStatusExA(SC_HANDLE,SC_ENUM_TYPE,DWORD,DWORD,LPBYTE,DWORD,LPDWORD,LPDWORD,LPDWORD,LPCSTR);
 BOOL EnumServicesStatusExW(SC_HANDLE,SC_ENUM_TYPE,DWORD,DWORD,LPBYTE,DWORD,LPDWORD,LPDWORD,LPDWORD,LPCWSTR);
 BOOL GetServiceDisplayNameA(SC_HANDLE,LPCSTR,LPSTR,PDWORD);
 BOOL GetServiceDisplayNameW(SC_HANDLE,LPCWSTR,LPWSTR,PDWORD);
 BOOL GetServiceKeyNameA(SC_HANDLE,LPCSTR,LPSTR,PDWORD);
 BOOL GetServiceKeyNameW(SC_HANDLE,LPCWSTR,LPWSTR,PDWORD);
 SC_LOCK LockServiceDatabase(SC_HANDLE);
 BOOL NotifyBootConfigStatus(BOOL);
 SC_HANDLE OpenSCManagerA(LPCSTR,LPCSTR,DWORD);
 SC_HANDLE OpenSCManagerW(LPCWSTR,LPCWSTR,DWORD);
 SC_HANDLE OpenServiceA(SC_HANDLE,LPCSTR,DWORD);
 SC_HANDLE OpenServiceW(SC_HANDLE,LPCWSTR,DWORD);
 BOOL QueryServiceConfigA(SC_HANDLE,LPQUERY_SERVICE_CONFIGA,DWORD,PDWORD);
 BOOL QueryServiceConfigW(SC_HANDLE,LPQUERY_SERVICE_CONFIGW,DWORD,PDWORD);
 BOOL QueryServiceConfig2A(SC_HANDLE,DWORD,LPBYTE,DWORD,LPDWORD);
 BOOL QueryServiceConfig2W(SC_HANDLE,DWORD,LPBYTE,DWORD,LPDWORD);
 BOOL QueryServiceLockStatusA(SC_HANDLE,LPQUERY_SERVICE_LOCK_STATUSA,DWORD,PDWORD);
 BOOL QueryServiceLockStatusW(SC_HANDLE,LPQUERY_SERVICE_LOCK_STATUSW,DWORD,PDWORD);
 BOOL QueryServiceObjectSecurity(SC_HANDLE,SECURITY_INFORMATION,PSECURITY_DESCRIPTOR,DWORD,LPDWORD);
 BOOL QueryServiceStatus(SC_HANDLE,LPSERVICE_STATUS);
 BOOL QueryServiceStatusEx(SC_HANDLE,SC_STATUS_TYPE,LPBYTE,DWORD,LPDWORD);
 SERVICE_STATUS_HANDLE RegisterServiceCtrlHandlerA(LPCSTR,LPHANDLER_FUNCTION);
 SERVICE_STATUS_HANDLE RegisterServiceCtrlHandlerW(LPCWSTR,LPHANDLER_FUNCTION);
 SERVICE_STATUS_HANDLE RegisterServiceCtrlHandlerExA(LPCSTR,LPHANDLER_FUNCTION_EX,LPVOID);
 SERVICE_STATUS_HANDLE RegisterServiceCtrlHandlerExW(LPCWSTR,LPHANDLER_FUNCTION_EX,LPVOID);
 BOOL SetServiceObjectSecurity(SC_HANDLE,SECURITY_INFORMATION,PSECURITY_DESCRIPTOR);
 BOOL SetServiceStatus(SERVICE_STATUS_HANDLE,LPSERVICE_STATUS);
 BOOL StartServiceA(SC_HANDLE,DWORD,LPCSTR*);
 BOOL StartServiceCtrlDispatcherA(LPSERVICE_TABLE_ENTRYA);
 BOOL StartServiceCtrlDispatcherW(LPSERVICE_TABLE_ENTRYW);
 BOOL StartServiceW(SC_HANDLE,DWORD,LPCWSTR*);
 BOOL UnlockServiceDatabase(SC_LOCK);


typedef ENUM_SERVICE_STATUSW ENUM_SERVICE_STATUS,*LPENUM_SERVICE_STATUS;
typedef ENUM_SERVICE_STATUS_PROCESSW ENUM_SERVICE_STATUS_PROCESS;
typedef LPENUM_SERVICE_STATUS_PROCESSW LPENUM_SERVICE_STATUS_PROCESS;
typedef QUERY_SERVICE_CONFIGW QUERY_SERVICE_CONFIG,*LPQUERY_SERVICE_CONFIG;
typedef QUERY_SERVICE_LOCK_STATUSW QUERY_SERVICE_LOCK_STATUS,*LPQUERY_SERVICE_LOCK_STATUS;
typedef SERVICE_TABLE_ENTRYW SERVICE_TABLE_ENTRY,*LPSERVICE_TABLE_ENTRY;
typedef LPSERVICE_MAIN_FUNCTIONW LPSERVICE_MAIN_FUNCTION;
typedef SERVICE_DESCRIPTIONW SERVICE_DESCRIPTION;
typedef LPSERVICE_DESCRIPTIONW LPSERVICE_DESCRIPTION;
typedef SERVICE_FAILURE_ACTIONSW SERVICE_FAILURE_ACTIONS;
typedef LPSERVICE_FAILURE_ACTIONSW LPSERVICE_FAILURE_ACTIONS;
# 71 "/opt/cegcc/arm-mingw32ce/include/windows.h" 2 3


# 1 "/opt/cegcc/arm-mingw32ce/include/dbgapi.h" 1 3




       
# 6 "/opt/cegcc/arm-mingw32ce/include/dbgapi.h" 3
# 74 "/opt/cegcc/arm-mingw32ce/include/windows.h" 2 3
# 135 "/opt/cegcc/arm-mingw32ce/include/windows.h" 3
# 1 "/opt/cegcc/arm-mingw32ce/include/excpt.h" 1 3







typedef enum _EXCEPTION_DISPOSITION {
    ExceptionContinueExecution,
    ExceptionContinueSearch,
    ExceptionNestedException,
    ExceptionCollidedUnwind,
    ExceptionExecuteHandler
} EXCEPTION_DISPOSITION;

struct _CONTEXT;
typedef struct _CONTEXT CONTEXT;
struct _EXCEPTION_RECORD;
struct _EXCEPTION_POINTERS;
typedef struct _CONTEXT *PCONTEXT;
typedef struct _EXCEPTION_RECORD *PEXCEPTION_RECORD;
typedef struct _EXCEPTION_POINTERS *PEXCEPTION_POINTERS;
typedef PCONTEXT LPCONTEXT;
typedef PEXCEPTION_RECORD LPEXCEPTION_RECORD;
typedef PEXCEPTION_POINTERS LPEXCEPTION_POINTERS;
struct _RUNTIME_FUNCTION;

typedef struct _DISPATCHER_CONTEXT {
    unsigned long ControlPc;
    struct _RUNTIME_FUNCTION *FunctionEntry;
    unsigned long EstablisherFrame;
    CONTEXT* ContextRecord;
} DISPATCHER_CONTEXT, *PDISPATCHER_CONTEXT;
# 136 "/opt/cegcc/arm-mingw32ce/include/windows.h" 2 3
# 16 "../cpython-wince/PC/wince_compatibility.h" 2






# 1 "/opt/cegcc/arm-mingw32ce/include/fcntl.h" 1 3
# 20 "/opt/cegcc/arm-mingw32ce/include/fcntl.h" 3
# 1 "/opt/cegcc/arm-mingw32ce/include/io.h" 1 3
# 20 "/opt/cegcc/arm-mingw32ce/include/io.h" 3
# 1 "/opt/cegcc/arm-mingw32ce/include/sys/types.h" 1 3
# 21 "/opt/cegcc/arm-mingw32ce/include/sys/types.h" 3
# 1 "/opt/cegcc/lib/gcc/arm-mingw32ce/9.3.0/include/stddef.h" 1 3 4
# 143 "/opt/cegcc/lib/gcc/arm-mingw32ce/9.3.0/include/stddef.h" 3 4
typedef int ptrdiff_t;
# 22 "/opt/cegcc/arm-mingw32ce/include/sys/types.h" 2 3
# 38 "/opt/cegcc/arm-mingw32ce/include/sys/types.h" 3
typedef long _off_t;


typedef _off_t off_t;
# 51 "/opt/cegcc/arm-mingw32ce/include/sys/types.h" 3
typedef short _dev_t;



typedef _dev_t dev_t;






typedef short _ino_t;


typedef _ino_t ino_t;






typedef int _pid_t;


typedef _pid_t pid_t;






typedef unsigned short _mode_t;


typedef _mode_t mode_t;






typedef int _sigset_t;


typedef _sigset_t sigset_t;





typedef long _ssize_t;


typedef _ssize_t ssize_t;





typedef long long fpos64_t;




typedef long long off64_t;



typedef unsigned int useconds_t;
# 21 "/opt/cegcc/arm-mingw32ce/include/io.h" 2 3
# 41 "/opt/cegcc/arm-mingw32ce/include/io.h" 3
  typedef int intptr_t;




typedef unsigned long _fsize_t;
# 64 "/opt/cegcc/arm-mingw32ce/include/io.h" 3
struct _finddata_t
{
 unsigned attrib;
 time_t time_create;
 time_t time_access;
 time_t time_write;
 _fsize_t size;
 char name[(260)];
};
# 103 "/opt/cegcc/arm-mingw32ce/include/io.h" 3
struct _wfinddata_t {
     unsigned attrib;
     time_t time_create;
     time_t time_access;
     time_t time_write;
     _fsize_t size;
     wchar_t name[(260)];
};
# 152 "/opt/cegcc/arm-mingw32ce/include/io.h" 3
 long __attribute__ ((__nothrow__)) _findfirst (const char*, struct _finddata_t*);
 int __attribute__ ((__nothrow__)) _findnext (long, struct _finddata_t*);
 int __attribute__ ((__nothrow__)) _findclose (long);






 int __attribute__ ((__nothrow__)) _mkdir (const char*);
 int __attribute__ ((__nothrow__)) _rmdir (const char*);
 int __attribute__ ((__nothrow__)) _chmod (const char*, int);
# 194 "/opt/cegcc/arm-mingw32ce/include/io.h" 3
static inline int chdir(const char *path)
{
 (void)path;
 return -1;
}
static inline char *getcwd(char *buf, size_t size)
{
 (void)buf;
 (void)size;
 return 0;
}

 int __attribute__ ((__nothrow__)) mkdir (const char*);
 int __attribute__ ((__nothrow__)) rmdir (const char*);
 int __attribute__ ((__nothrow__)) chmod (const char*, int);
# 238 "/opt/cegcc/arm-mingw32ce/include/io.h" 3
 int __attribute__ ((__nothrow__)) _access (const char*, int);
 int __attribute__ ((__nothrow__)) _chsize (int, long);
 int __attribute__ ((__nothrow__)) _close (int);
 int __attribute__ ((__nothrow__)) _commit(int);



 int __attribute__ ((__nothrow__)) _creat (const char*, int);

 int __attribute__ ((__nothrow__)) _dup (int);
 int __attribute__ ((__nothrow__)) _dup2 (int, int);
 long __attribute__ ((__nothrow__)) _filelength (int);
 long __attribute__ ((__nothrow__)) _get_osfhandle (int);
 int __attribute__ ((__nothrow__)) _isatty (int);







 int __attribute__ ((__nothrow__)) _eof (int);



 int __attribute__ ((__nothrow__)) _locking (int, int, long);

 long __attribute__ ((__nothrow__)) _lseek (int, long, int);


 int __attribute__ ((__nothrow__)) _open (const char*, int, ...);





 int __attribute__ ((__nothrow__)) _read (int, void*, unsigned int);






 int __attribute__ ((__nothrow__)) rename (const char*, const char*);
# 291 "/opt/cegcc/arm-mingw32ce/include/io.h" 3
 int __attribute__ ((__nothrow__)) _unlink (const char*);
 int __attribute__ ((__nothrow__)) _write (int, const void*, unsigned int);
# 303 "/opt/cegcc/arm-mingw32ce/include/io.h" 3
 long __attribute__ ((__nothrow__)) _wfindfirst(const wchar_t*, struct _wfinddata_t*);
 int __attribute__ ((__nothrow__)) _wfindnext(long, struct _wfinddata_t *);
 int __attribute__ ((__nothrow__)) _wopen(const wchar_t*, int, ...);
# 328 "/opt/cegcc/arm-mingw32ce/include/io.h" 3
 int __attribute__ ((__nothrow__)) access (const char*, int);
 int __attribute__ ((__nothrow__)) chsize (int, long );
 int __attribute__ ((__nothrow__)) close (int);







 int __attribute__ ((__nothrow__)) isatty (int);
 long __attribute__ ((__nothrow__)) lseek (int, long, int);
 int __attribute__ ((__nothrow__)) open (const char*, int, ...);
 int __attribute__ ((__nothrow__)) read (int, void*, unsigned int);






 int __attribute__ ((__nothrow__)) unlink (const char*);
 int __attribute__ ((__nothrow__)) write (int, const void*, unsigned int);
# 21 "/opt/cegcc/arm-mingw32ce/include/fcntl.h" 2 3
# 23 "../cpython-wince/PC/wince_compatibility.h" 2
# 115 "../cpython-wince/PC/wince_compatibility.h"

# 115 "../cpython-wince/PC/wince_compatibility.h"
void wince_errno_new_thread(int *errno_pointer);
void wince_errno_thread_exit(void);
extern __attribute__((dllimport)) int * (*wince_errno_pointer_function)(void);




extern int _sys_nerr;
extern const char *_sys_errlist[];
# 147 "../cpython-wince/PC/wince_compatibility.h"
__attribute__((dllimport)) char * strerror(int errnum);

unsigned long getVersion();

void *SecureZeroMemory(void *ptr, size_t cnt);

double copysign(double x, double y);
# 181 "../cpython-wince/PC/wince_compatibility.h"
typedef struct _PROC_THREAD_ATTRIBUTE_ENTRY {
    unsigned long *Attribute;
    size_t cbSize;
    void *lpValue;
} PROC_THREAD_ATTRIBUTE_ENTRY, *LPPROC_THREAD_ATTRIBUTE_ENTRY;

typedef struct _LPPROC_THREAD_ATTRIBUTE_LIST {
    unsigned long dwFlags;
    unsigned long Size;
    unsigned long Count;
    unsigned long Reserved;
    unsigned long *Unknown;
    PROC_THREAD_ATTRIBUTE_ENTRY Entries[1];
} PROC_THREAD_ATTRIBUTE_LIST, *LPPROC_THREAD_ATTRIBUTE_LIST;

typedef struct _STARTUPINFOEXW {
    STARTUPINFOW StartupInfo;
    LPPROC_THREAD_ATTRIBUTE_LIST lpAttributeList;
} STARTUPINFOEXW, *LPSTARTUPINFOEXW;

typedef struct _FILE_ATTRIBUTE_TAG_INFO {
    unsigned long FileAttributes;
    unsigned long ReparseTag;
} FILE_ATTRIBUTE_TAG_INFO, *PFILE_ATTRIBUTE_TAG_INFO;

int InitializeProcThreadAttributeList(LPPROC_THREAD_ATTRIBUTE_LIST lpAttributeList,
                                      unsigned long dwAttributeCount, unsigned long dwFlags,
                                      size_t *lpSize);
int UpdateProcThreadAttribute(LPPROC_THREAD_ATTRIBUTE_LIST lpAttributeList, unsigned long dwFlags,
                              unsigned long *Attribute, void *lpValue, size_t cbSize,
                              void *lpPreviousValue, size_t *lpReturnSize);
void DeleteProcThreadAttributeList(LPPROC_THREAD_ATTRIBUTE_LIST lpAttributeList);


size_t wcsnlen(const wchar_t *str, size_t numberOfElements);


int wcscat_s(wchar_t *strDestination, size_t numberOfElements, const wchar_t *strSource);
# 229 "../cpython-wince/PC/wince_compatibility.h"
int _heapmin(void);

double copysign(double x, double y);







int _locking(int fd, int mode, long nbytes);
# 252 "../cpython-wince/PC/wince_compatibility.h"
int wince_GetSystemTimeAdjustment(unsigned long *lpTimeAdjustment, unsigned long *lpTimeIncrement,
                                  int *lpTimeAdjustmentDisabled);
# 278 "../cpython-wince/PC/wince_compatibility.h"
wchar_t **CommandLineToArgvW(const wchar_t *lpCmdLine, int *pNumArgs);
# 288 "../cpython-wince/PC/wince_compatibility.h"
__attribute__((dllimport)) HRESULT PathCchCanonicalizeEx(wchar_t *pszPathOut, size_t cchPathOut,
                                                wchar_t *pszPathIn, unsigned long dwFlags);
__attribute__((dllimport)) HRESULT
    PathCchCombineEx(wchar_t *pszPathOut, size_t cchPathOut, wchar_t *pszPathIn, wchar_t *pszMore,
                     unsigned long dwFlags);
__attribute__((dllimport)) HRESULT PathCchSkipRoot(wchar_t *pszPath, wchar_t **ppszRootEnd);
# 311 "../cpython-wince/PC/wince_compatibility.h"
extern unsigned char wince_positive_double_infinity[];






struct tm {
    int tm_sec;
    int tm_min;
    int tm_hour;
    int tm_mday;
    int tm_mon;
    int tm_year;
    int tm_wday;
    int tm_yday;
    int tm_isdst;

};
typedef long clock_t;

clock_t clock(void);






struct tm *gmtime(const time_t *timep);
struct tm *localtime(const time_t *timep);
char *asctime(const struct tm *tm);
char *ctime(const time_t *timep);
time_t mktime(struct tm *tm);
time_t time(time_t *TimeP);

extern char *tzname[2];
extern long timezone;
extern int daylight;

void tzset(void);
# 362 "../cpython-wince/PC/wince_compatibility.h"
__attribute__((dllimport)) int wince_GetFileType(void *handle);
# 384 "../cpython-wince/PC/wince_compatibility.h"
__attribute__((dllimport)) FILE * wince_fopen(const char *filename, const char *mode);

__attribute__((dllimport)) FILE * wince_wfopen(const wchar_t *filename, const wchar_t *mode);

int _wopen(const wchar_t *filename, int oflag, ...);
int _open(const char *filename, int oflag, ...);
FILE *_fdopen(int handle, const char *mode);
int _close(int handle);
int _write(int handle, const void *buffer, unsigned int count);
int _read(int handle, void *buffer, unsigned int count);
long _lseek(int handle, long offset, int origin);

# 395 "../cpython-wince/PC/wince_compatibility.h" 3
long long 
# 395 "../cpython-wince/PC/wince_compatibility.h"
       _lseeki64(int handle, 
# 395 "../cpython-wince/PC/wince_compatibility.h" 3
                             long long 
# 395 "../cpython-wince/PC/wince_compatibility.h"
                                     offset, int origin);
int _commit(int handle);
int _dup(int fd);
# 425 "../cpython-wince/PC/wince_compatibility.h"
int _link(const char *from, const char *to);


int _unlink(const char *path);
# 475 "../cpython-wince/PC/wince_compatibility.h"
typedef short _dev_t;
typedef short _ino_t;
typedef unsigned short _mode_t;
typedef long _off_t;






struct _stat {
    _dev_t st_dev;
    _ino_t st_ino;
    _mode_t st_mode;
    short st_nlink;
    short st_uid;
    short st_gid;
    _dev_t st_rdev;
    _off_t st_size;
    time_t st_atime;

    time_t st_mtime;
    time_t st_ctime;
};

int _fstat(int handle, struct _stat *buffer);
int _stat(const char *path, struct _stat *buffer);
int _wstat(const wchar_t *path, struct _stat *buffer);






char *_getcwd(char *, int);

wchar_t *_wgetcwd(wchar_t *buffer, int maxlen);

typedef int BOOL;
typedef unsigned char BYTE;
typedef unsigned short WORD;
typedef unsigned long DWORD;

typedef long LONG;


DWORD GetCurrentDirectoryA(DWORD numbuf, char *buffer);
DWORD GetCurrentDirectoryW(DWORD numbuf, wchar_t *buffer);
__attribute__((dllimport)) int SetCurrentDirectoryW(const wchar_t *path);
int SetCurrentDirectoryA(const char *path);

DWORD GetFullPathNameA(const char *path, DWORD num_buf, char *buf, char **file_part);
DWORD GetFullPathNameW(const wchar_t *path, DWORD num_buf, wchar_t *buf, wchar_t **file_part);



size_t strxfrm(char *dest, char *src, size_t n);
# 543 "../cpython-wince/PC/wince_compatibility.h"
struct lconv {
    char *decimal_point;
    char *thousands_sep;
    char *grouping;
    char *int_curr_symbol;
    char *currency_symbol;
    char *mon_decimal_point;
    char *mon_thousands_sep;
    char *mon_grouping;
    char *positive_sign;
    char *negative_sign;
    char int_frac_digits;
    char frac_digits;
    char p_cs_precedes;
    char p_sep_by_space;
    char n_cs_precedes;
    char n_sep_by_space;
    char p_sign_posn;
    char n_sign_posn;
};

char *setlocale(int category, const char *locale);
struct lconv *localeconv(void);
int GetLocaleInfoA(DWORD lcid, DWORD lctype, char *buf, int buf_size);
# 579 "../cpython-wince/PC/wince_compatibility.h"
__attribute__((dllimport)) int wince_isctype(int ch, int classification);
# 607 "../cpython-wince/PC/wince_compatibility.h"
__attribute__((dllimport)) DWORD wince_GetEnvironmentVariable(wchar_t *, wchar_t *, DWORD);
__attribute__((dllimport)) BOOL wince_SetEnvironmentVariable(wchar_t *, wchar_t *);
# 618 "../cpython-wince/PC/wince_compatibility.h"
wchar_t **wince_wenviron;
char **wince_environ;

char *wince_getenv(const char *);
wchar_t *wince_wgetenv(const wchar_t *);
int wince_putenv(const char *);
int wince_wputenv(const wchar_t *);
# 634 "../cpython-wince/PC/wince_compatibility.h"
int _getpid(void);


typedef struct HINSTANCE__ *HINSTANCE;
typedef struct HWND__ *HWND;
typedef struct HKEY__ *HKEY;

HINSTANCE ShellExecuteA(HWND hwnd, const char *operation, const char *file, const char *params,
                        const char *dir, int show_cmd);
HINSTANCE ShellExecuteW(HWND hwnd, const wchar_t *operation, const wchar_t *file,
                        const wchar_t *params, const wchar_t *dir, int show_cmd);

typedef HINSTANCE HMODULE;

HMODULE LoadLibraryExA(const char *filename, void *reserved, DWORD flags);

DWORD FormatMessageA(DWORD flags, const void *source, DWORD msg, DWORD lang, char *buf,
                     DWORD buf_size, va_list *args);

void OutputDebugStringA(const char *message);


LONG RegQueryValueExA(HKEY hkey, const char *value_name, DWORD *reserved, DWORD *type, BYTE *data,
                      DWORD *num_data);
# 676 "../cpython-wince/PC/wince_compatibility.h"
typedef struct _WIN32_FIND_DATAA WIN32_FIND_DATAA;
typedef struct _WIN32_FIND_DATAW WIN32_FIND_DATAW;
typedef void *HANDLE;

__attribute__((dllimport)) HANDLE wince_FindFirstFileW(const wchar_t *filename, WIN32_FIND_DATAW *data);

HANDLE FindFirstFileA(const char *filename, WIN32_FIND_DATAA *data);

int FindNextFileA(HANDLE handle, WIN32_FIND_DATAA *data);

HANDLE wince_CreateFileW(const wchar_t *filename, DWORD dwDesiredAccess, DWORD dwShareMode,
                         struct _SECURITY_ATTRIBUTES *lpSecurityAttributes,
                         DWORD dwCreationDisposition, DWORD dwFlagsAndAttributes,
                         HANDLE hTemplateFile);

HANDLE CreateFileA(const char *filename, DWORD dwDesiredAccess, DWORD dwShareMode,
                   struct _SECURITY_ATTRIBUTES *lpSecurityAttributes, DWORD dwCreationDisposition,
                   DWORD dwFlagsAndAttributes, HANDLE hTemplateFile);

DWORD wince_GetFileAttributesW(const wchar_t *filename);

DWORD GetFileAttributesA(const char *filename);

BOOL wince_GetFileAttributesExW(const wchar_t *filename, enum _GET_FILEEX_INFO_LEVELS fInfoLevelId,
                                void *lpFileInformation);

BOOL GetFileAttributesExA(const char *filename, enum _GET_FILEEX_INFO_LEVELS fInfoLevelId,
                          void *lpFileInformation);

BOOL wince_SetFileAttributesW(const wchar_t *filename, DWORD attr);

BOOL SetFileAttributesA(const char *filename, DWORD attr);

BOOL wince_CreateDirectoryW(const wchar_t *path, struct _SECURITY_ATTRIBUTES *security);

BOOL CreateDirectoryA(const char *path, struct _SECURITY_ATTRIBUTES *security);

BOOL wince_RemoveDirectoryW(const wchar_t *path);

BOOL RemoveDirectoryA(const char *path);

BOOL wince_MoveFileW(const wchar_t *oldpath, const wchar_t *newpath);

BOOL MoveFileA(const char *oldpath, const char *newpath);

BOOL wince_DeleteFileW(const wchar_t *path);

BOOL DeleteFileA(const char *path);



BOOL CreateSymbolicLinkW(wchar_t *lpSymlinkFileName, wchar_t *lpTargetFileName, DWORD dwFlags);



char *CharPrevA(const char *start, const char *current);

typedef struct _object PyObject;

DWORD GetActiveProcessorCount(WORD GroupNumber);
# 104 "../cpython-wince/PC/pyconfig.h" 2
# 112 "../cpython-wince/PC/pyconfig.h"
typedef long off_t;
# 17 "include/ssl_python.h" 2
# 26 "include/openssl/crypto.h" 2



# 1 "include/openssl/e_os2.h" 1
# 12 "include/openssl/e_os2.h"
        
# 234 "include/openssl/e_os2.h"
# 1 "/opt/cegcc/arm-mingw32ce/include/inttypes.h" 1 3






# 1 "/opt/cegcc/arm-mingw32ce/include/stdint.h" 1 3
# 24 "/opt/cegcc/arm-mingw32ce/include/stdint.h" 3
# 1 "/opt/cegcc/lib/gcc/arm-mingw32ce/9.3.0/include/stddef.h" 1 3 4
# 25 "/opt/cegcc/arm-mingw32ce/include/stdint.h" 2 3



# 27 "/opt/cegcc/arm-mingw32ce/include/stdint.h" 3
typedef signed char int8_t;
typedef unsigned char uint8_t;
typedef short int16_t;
typedef unsigned short uint16_t;
typedef int int32_t;
typedef unsigned uint32_t;
typedef long long int64_t;
typedef unsigned long long uint64_t;


typedef signed char int_least8_t;
typedef unsigned char uint_least8_t;
typedef short int_least16_t;
typedef unsigned short uint_least16_t;
typedef int int_least32_t;
typedef unsigned uint_least32_t;
typedef long long int_least64_t;
typedef unsigned long long uint_least64_t;





typedef signed char int_fast8_t;
typedef unsigned char uint_fast8_t;
typedef short int_fast16_t;
typedef unsigned short uint_fast16_t;
typedef int int_fast32_t;
typedef unsigned int uint_fast32_t;
typedef long long int_fast64_t;
typedef unsigned long long uint_fast64_t;
# 75 "/opt/cegcc/arm-mingw32ce/include/stdint.h" 3
  typedef unsigned int uintptr_t;




typedef long long intmax_t;
typedef unsigned long long uintmax_t;
# 8 "/opt/cegcc/arm-mingw32ce/include/inttypes.h" 2 3

# 1 "/opt/cegcc/lib/gcc/arm-mingw32ce/9.3.0/include/stddef.h" 1 3 4
# 10 "/opt/cegcc/arm-mingw32ce/include/inttypes.h" 2 3





typedef struct {
 intmax_t quot;
 intmax_t rem;
 } imaxdiv_t;
# 258 "/opt/cegcc/arm-mingw32ce/include/inttypes.h" 3
intmax_t __attribute__ ((__nothrow__)) imaxabs (intmax_t j);

extern inline __attribute__((__gnu_inline__)) intmax_t __attribute__ ((__nothrow__)) imaxabs (intmax_t j)
 {return (j >= 0 ? j : -j);}
# 235 "include/openssl/e_os2.h" 2
# 257 "include/openssl/e_os2.h"

# 257 "include/openssl/e_os2.h"
typedef intmax_t ossl_intmax_t;
typedef uintmax_t ossl_uintmax_t;
# 30 "include/openssl/crypto.h" 2





# 1 "include/openssl/safestack.h" 1
# 17 "include/openssl/safestack.h"
        






# 1 "include/openssl/stack.h" 1
# 12 "include/openssl/stack.h"
        
# 23 "include/openssl/stack.h"
typedef struct stack_st OPENSSL_STACK;

typedef int (*OPENSSL_sk_compfunc)(const void *, const void *);
typedef void (*OPENSSL_sk_freefunc)(void *);
typedef void *(*OPENSSL_sk_copyfunc)(const void *);

int OPENSSL_sk_num(const OPENSSL_STACK *);
void *OPENSSL_sk_value(const OPENSSL_STACK *, int);

void *OPENSSL_sk_set(OPENSSL_STACK *st, int i, const void *data);

OPENSSL_STACK *OPENSSL_sk_new(OPENSSL_sk_compfunc cmp);
OPENSSL_STACK *OPENSSL_sk_new_null(void);
OPENSSL_STACK *OPENSSL_sk_new_reserve(OPENSSL_sk_compfunc c, int n);
int OPENSSL_sk_reserve(OPENSSL_STACK *st, int n);
void OPENSSL_sk_free(OPENSSL_STACK *);
void OPENSSL_sk_pop_free(OPENSSL_STACK *st, void (*func) (void *));
OPENSSL_STACK *OPENSSL_sk_deep_copy(const OPENSSL_STACK *,
                                    OPENSSL_sk_copyfunc c,
                                    OPENSSL_sk_freefunc f);
int OPENSSL_sk_insert(OPENSSL_STACK *sk, const void *data, int where);
void *OPENSSL_sk_delete(OPENSSL_STACK *st, int loc);
void *OPENSSL_sk_delete_ptr(OPENSSL_STACK *st, const void *p);
int OPENSSL_sk_find(OPENSSL_STACK *st, const void *data);
int OPENSSL_sk_find_ex(OPENSSL_STACK *st, const void *data);
int OPENSSL_sk_find_all(OPENSSL_STACK *st, const void *data, int *pnum);
int OPENSSL_sk_push(OPENSSL_STACK *st, const void *data);
int OPENSSL_sk_unshift(OPENSSL_STACK *st, const void *data);
void *OPENSSL_sk_shift(OPENSSL_STACK *st);
void *OPENSSL_sk_pop(OPENSSL_STACK *st);
void OPENSSL_sk_zero(OPENSSL_STACK *st);
OPENSSL_sk_compfunc OPENSSL_sk_set_cmp_func(OPENSSL_STACK *sk,
                                            OPENSSL_sk_compfunc cmp);
OPENSSL_STACK *OPENSSL_sk_dup(const OPENSSL_STACK *st);
void OPENSSL_sk_sort(OPENSSL_STACK *st);
int OPENSSL_sk_is_sorted(const OPENSSL_STACK *st);
# 25 "include/openssl/safestack.h" 2
# 195 "include/openssl/safestack.h"
typedef char *OPENSSL_STRING;
typedef const char *OPENSSL_CSTRING;
# 205 "include/openssl/safestack.h"
struct stack_st_OPENSSL_STRING; typedef int (*sk_OPENSSL_STRING_compfunc)(const char * const *a, const char *const *b); typedef void (*sk_OPENSSL_STRING_freefunc)(char *a); typedef char * (*sk_OPENSSL_STRING_copyfunc)(const char *a); static __attribute__((unused)) inline char *ossl_check_OPENSSL_STRING_type(char *ptr) { return ptr; } static __attribute__((unused)) inline const OPENSSL_STACK *ossl_check_const_OPENSSL_STRING_sk_type(const struct stack_st_OPENSSL_STRING *sk) { return (const OPENSSL_STACK *)sk; } static __attribute__((unused)) inline OPENSSL_STACK *ossl_check_OPENSSL_STRING_sk_type(struct stack_st_OPENSSL_STRING *sk) { return (OPENSSL_STACK *)sk; } static __attribute__((unused)) inline OPENSSL_sk_compfunc ossl_check_OPENSSL_STRING_compfunc_type(sk_OPENSSL_STRING_compfunc cmp) { return (OPENSSL_sk_compfunc)cmp; } static __attribute__((unused)) inline OPENSSL_sk_copyfunc ossl_check_OPENSSL_STRING_copyfunc_type(sk_OPENSSL_STRING_copyfunc cpy) { return (OPENSSL_sk_copyfunc)cpy; } static __attribute__((unused)) inline OPENSSL_sk_freefunc ossl_check_OPENSSL_STRING_freefunc_type(sk_OPENSSL_STRING_freefunc fr) { return (OPENSSL_sk_freefunc)fr; }
# 231 "include/openssl/safestack.h"
struct stack_st_OPENSSL_CSTRING; typedef int (*sk_OPENSSL_CSTRING_compfunc)(const char * const *a, const char *const *b); typedef void (*sk_OPENSSL_CSTRING_freefunc)(char *a); typedef char * (*sk_OPENSSL_CSTRING_copyfunc)(const char *a); static __attribute__((unused)) inline const char *ossl_check_OPENSSL_CSTRING_type(const char *ptr) { return ptr; } static __attribute__((unused)) inline const OPENSSL_STACK *ossl_check_const_OPENSSL_CSTRING_sk_type(const struct stack_st_OPENSSL_CSTRING *sk) { return (const OPENSSL_STACK *)sk; } static __attribute__((unused)) inline OPENSSL_STACK *ossl_check_OPENSSL_CSTRING_sk_type(struct stack_st_OPENSSL_CSTRING *sk) { return (OPENSSL_STACK *)sk; } static __attribute__((unused)) inline OPENSSL_sk_compfunc ossl_check_OPENSSL_CSTRING_compfunc_type(sk_OPENSSL_CSTRING_compfunc cmp) { return (OPENSSL_sk_compfunc)cmp; } static __attribute__((unused)) inline OPENSSL_sk_copyfunc ossl_check_OPENSSL_CSTRING_copyfunc_type(sk_OPENSSL_CSTRING_copyfunc cpy) { return (OPENSSL_sk_copyfunc)cpy; } static __attribute__((unused)) inline OPENSSL_sk_freefunc ossl_check_OPENSSL_CSTRING_freefunc_type(sk_OPENSSL_CSTRING_freefunc fr) { return (OPENSSL_sk_freefunc)fr; }
# 264 "include/openssl/safestack.h"
typedef void *OPENSSL_BLOCK;
struct stack_st_OPENSSL_BLOCK; typedef int (*sk_OPENSSL_BLOCK_compfunc)(const void * const *a, const void *const *b); typedef void (*sk_OPENSSL_BLOCK_freefunc)(void *a); typedef void * (*sk_OPENSSL_BLOCK_copyfunc)(const void *a); static __attribute__((unused)) inline void *ossl_check_OPENSSL_BLOCK_type(void *ptr) { return ptr; } static __attribute__((unused)) inline const OPENSSL_STACK *ossl_check_const_OPENSSL_BLOCK_sk_type(const struct stack_st_OPENSSL_BLOCK *sk) { return (const OPENSSL_STACK *)sk; } static __attribute__((unused)) inline OPENSSL_STACK *ossl_check_OPENSSL_BLOCK_sk_type(struct stack_st_OPENSSL_BLOCK *sk) { return (OPENSSL_STACK *)sk; } static __attribute__((unused)) inline OPENSSL_sk_compfunc ossl_check_OPENSSL_BLOCK_compfunc_type(sk_OPENSSL_BLOCK_compfunc cmp) { return (OPENSSL_sk_compfunc)cmp; } static __attribute__((unused)) inline OPENSSL_sk_copyfunc ossl_check_OPENSSL_BLOCK_copyfunc_type(sk_OPENSSL_BLOCK_copyfunc cpy) { return (OPENSSL_sk_copyfunc)cpy; } static __attribute__((unused)) inline OPENSSL_sk_freefunc ossl_check_OPENSSL_BLOCK_freefunc_type(sk_OPENSSL_BLOCK_freefunc fr) { return (OPENSSL_sk_freefunc)fr; }
# 36 "include/openssl/crypto.h" 2

# 1 "include/openssl/types.h" 1
# 12 "include/openssl/types.h"
        

# 1 "/opt/cegcc/lib/gcc/arm-mingw32ce/9.3.0/include-fixed/limits.h" 1 3 4
# 34 "/opt/cegcc/lib/gcc/arm-mingw32ce/9.3.0/include-fixed/limits.h" 3 4
# 1 "/opt/cegcc/lib/gcc/arm-mingw32ce/9.3.0/include-fixed/syslimits.h" 1 3 4






# 1 "/opt/cegcc/lib/gcc/arm-mingw32ce/9.3.0/include-fixed/limits.h" 1 3 4
# 194 "/opt/cegcc/lib/gcc/arm-mingw32ce/9.3.0/include-fixed/limits.h" 3 4
# 1 "/opt/cegcc/arm-mingw32ce/include/limits.h" 1 3 4
# 195 "/opt/cegcc/lib/gcc/arm-mingw32ce/9.3.0/include-fixed/limits.h" 2 3 4
# 8 "/opt/cegcc/lib/gcc/arm-mingw32ce/9.3.0/include-fixed/syslimits.h" 2 3 4
# 35 "/opt/cegcc/lib/gcc/arm-mingw32ce/9.3.0/include-fixed/limits.h" 2 3 4
# 15 "include/openssl/types.h" 2
# 24 "include/openssl/types.h"
typedef struct ossl_provider_st OSSL_PROVIDER;
# 45 "include/openssl/types.h"
typedef struct asn1_string_st ASN1_INTEGER;
typedef struct asn1_string_st ASN1_ENUMERATED;
typedef struct asn1_string_st ASN1_BIT_STRING;
typedef struct asn1_string_st ASN1_OCTET_STRING;
typedef struct asn1_string_st ASN1_PRINTABLESTRING;
typedef struct asn1_string_st ASN1_T61STRING;
typedef struct asn1_string_st ASN1_IA5STRING;
typedef struct asn1_string_st ASN1_GENERALSTRING;
typedef struct asn1_string_st ASN1_UNIVERSALSTRING;
typedef struct asn1_string_st ASN1_BMPSTRING;
typedef struct asn1_string_st ASN1_UTCTIME;
typedef struct asn1_string_st ASN1_TIME;
typedef struct asn1_string_st ASN1_GENERALIZEDTIME;
typedef struct asn1_string_st ASN1_VISIBLESTRING;
typedef struct asn1_string_st ASN1_UTF8STRING;
typedef struct asn1_string_st ASN1_STRING;
typedef int ASN1_BOOLEAN;
typedef int ASN1_NULL;


typedef struct asn1_type_st ASN1_TYPE;
typedef struct asn1_object_st ASN1_OBJECT;
typedef struct asn1_string_table_st ASN1_STRING_TABLE;

typedef struct ASN1_ITEM_st ASN1_ITEM;
typedef struct asn1_pctx_st ASN1_PCTX;
typedef struct asn1_sctx_st ASN1_SCTX;
# 86 "include/openssl/types.h"
typedef struct bio_st BIO;
typedef struct bignum_st BIGNUM;
typedef struct bignum_ctx BN_CTX;
typedef struct bn_blinding_st BN_BLINDING;
typedef struct bn_mont_ctx_st BN_MONT_CTX;
typedef struct bn_recp_ctx_st BN_RECP_CTX;
typedef struct bn_gencb_st BN_GENCB;

typedef struct buf_mem_st BUF_MEM;

struct stack_st_BIGNUM;
struct stack_st_BIGNUM_const;

typedef struct err_state_st ERR_STATE;

typedef struct evp_cipher_st EVP_CIPHER;
typedef struct evp_cipher_ctx_st EVP_CIPHER_CTX;
typedef struct evp_md_st EVP_MD;
typedef struct evp_md_ctx_st EVP_MD_CTX;
typedef struct evp_mac_st EVP_MAC;
typedef struct evp_mac_ctx_st EVP_MAC_CTX;
typedef struct evp_pkey_st EVP_PKEY;

typedef struct evp_pkey_asn1_method_st EVP_PKEY_ASN1_METHOD;

typedef struct evp_pkey_method_st EVP_PKEY_METHOD;
typedef struct evp_pkey_ctx_st EVP_PKEY_CTX;

typedef struct evp_keymgmt_st EVP_KEYMGMT;

typedef struct evp_kdf_st EVP_KDF;
typedef struct evp_kdf_ctx_st EVP_KDF_CTX;

typedef struct evp_rand_st EVP_RAND;
typedef struct evp_rand_ctx_st EVP_RAND_CTX;

typedef struct evp_keyexch_st EVP_KEYEXCH;

typedef struct evp_signature_st EVP_SIGNATURE;

typedef struct evp_asym_cipher_st EVP_ASYM_CIPHER;

typedef struct evp_kem_st EVP_KEM;

typedef struct evp_Encode_Ctx_st EVP_ENCODE_CTX;

typedef struct hmac_ctx_st HMAC_CTX;

typedef struct dh_st DH;
typedef struct dh_method DH_METHOD;


typedef struct dsa_st DSA;
typedef struct dsa_method DSA_METHOD;



typedef struct rsa_st RSA;
typedef struct rsa_meth_st RSA_METHOD;

typedef struct rsa_pss_params_st RSA_PSS_PARAMS;


typedef struct ec_key_st EC_KEY;
typedef struct ec_key_method_st EC_KEY_METHOD;


typedef struct rand_meth_st RAND_METHOD;
typedef struct rand_drbg_st RAND_DRBG;

typedef struct ssl_dane_st SSL_DANE;
typedef struct x509_st X509;
typedef struct X509_algor_st X509_ALGOR;
typedef struct X509_crl_st X509_CRL;
typedef struct x509_crl_method_st X509_CRL_METHOD;
typedef struct x509_revoked_st X509_REVOKED;
typedef struct X509_name_st X509_NAME;
typedef struct X509_pubkey_st X509_PUBKEY;
typedef struct x509_store_st X509_STORE;
typedef struct x509_store_ctx_st X509_STORE_CTX;

typedef struct x509_object_st X509_OBJECT;
typedef struct x509_lookup_st X509_LOOKUP;
typedef struct x509_lookup_method_st X509_LOOKUP_METHOD;
typedef struct X509_VERIFY_PARAM_st X509_VERIFY_PARAM;

typedef struct x509_sig_info_st X509_SIG_INFO;

typedef struct pkcs8_priv_key_info_st PKCS8_PRIV_KEY_INFO;

typedef struct v3_ext_ctx X509V3_CTX;
typedef struct conf_st CONF;
typedef struct ossl_init_settings_st OPENSSL_INIT_SETTINGS;

typedef struct ui_st UI;
typedef struct ui_method_st UI_METHOD;

typedef struct engine_st ENGINE;
typedef struct ssl_st SSL;
typedef struct ssl_ctx_st SSL_CTX;

typedef struct comp_ctx_st COMP_CTX;
typedef struct comp_method_st COMP_METHOD;

typedef struct X509_POLICY_NODE_st X509_POLICY_NODE;
typedef struct X509_POLICY_LEVEL_st X509_POLICY_LEVEL;
typedef struct X509_POLICY_TREE_st X509_POLICY_TREE;
typedef struct X509_POLICY_CACHE_st X509_POLICY_CACHE;

typedef struct AUTHORITY_KEYID_st AUTHORITY_KEYID;
typedef struct DIST_POINT_st DIST_POINT;
typedef struct ISSUING_DIST_POINT_st ISSUING_DIST_POINT;
typedef struct NAME_CONSTRAINTS_st NAME_CONSTRAINTS;

typedef struct crypto_ex_data_st CRYPTO_EX_DATA;

typedef struct ossl_http_req_ctx_st OSSL_HTTP_REQ_CTX;
typedef struct ocsp_response_st OCSP_RESPONSE;
typedef struct ocsp_responder_id_st OCSP_RESPID;

typedef struct sct_st SCT;
typedef struct sct_ctx_st SCT_CTX;
typedef struct ctlog_st CTLOG;
typedef struct ctlog_store_st CTLOG_STORE;
typedef struct ct_policy_eval_ctx_st CT_POLICY_EVAL_CTX;

typedef struct ossl_store_info_st OSSL_STORE_INFO;
typedef struct ossl_store_search_st OSSL_STORE_SEARCH;

typedef struct ossl_lib_ctx_st OSSL_LIB_CTX;

typedef struct ossl_dispatch_st OSSL_DISPATCH;
typedef struct ossl_item_st OSSL_ITEM;
typedef struct ossl_algorithm_st OSSL_ALGORITHM;
typedef struct ossl_param_st OSSL_PARAM;
typedef struct ossl_param_bld_st OSSL_PARAM_BLD;

typedef int pem_password_cb (char *buf, int size, int rwflag, void *userdata);

typedef struct ossl_encoder_st OSSL_ENCODER;
typedef struct ossl_encoder_ctx_st OSSL_ENCODER_CTX;
typedef struct ossl_decoder_st OSSL_DECODER;
typedef struct ossl_decoder_ctx_st OSSL_DECODER_CTX;

typedef struct ossl_self_test_st OSSL_SELF_TEST;
# 38 "include/openssl/crypto.h" 2

# 1 "include/openssl/cryptoerr.h" 1
# 13 "include/openssl/cryptoerr.h"
        


# 1 "include/openssl/symhacks.h" 1
# 12 "include/openssl/symhacks.h"
        
# 17 "include/openssl/cryptoerr.h" 2
# 1 "include/openssl/cryptoerr_legacy.h" 1
# 19 "include/openssl/cryptoerr_legacy.h"
        
# 29 "include/openssl/cryptoerr_legacy.h"
extern int ERR_load_ASN1_strings(void);
extern int ERR_load_ASYNC_strings(void);
extern int ERR_load_BIO_strings(void);
extern int ERR_load_BN_strings(void);
extern int ERR_load_BUF_strings(void);

extern int ERR_load_CMS_strings(void);


extern int ERR_load_COMP_strings(void);

extern int ERR_load_CONF_strings(void);
extern int ERR_load_CRYPTO_strings(void);

extern int ERR_load_CT_strings(void);


extern int ERR_load_DH_strings(void);


extern int ERR_load_DSA_strings(void);


extern int ERR_load_EC_strings(void);




extern int ERR_load_ERR_strings(void);
extern int ERR_load_EVP_strings(void);
extern int ERR_load_KDF_strings(void);
extern int ERR_load_OBJ_strings(void);

extern int ERR_load_OCSP_strings(void);

extern int ERR_load_PEM_strings(void);
extern int ERR_load_PKCS12_strings(void);
extern int ERR_load_PKCS7_strings(void);
extern int ERR_load_RAND_strings(void);
extern int ERR_load_RSA_strings(void);
extern int ERR_load_OSSL_STORE_strings(void);

extern int ERR_load_TS_strings(void);

extern int ERR_load_UI_strings(void);
extern int ERR_load_X509_strings(void);
extern int ERR_load_X509V3_strings(void);
# 18 "include/openssl/cryptoerr.h" 2
# 40 "include/openssl/crypto.h" 2
# 1 "include/openssl/core.h" 1
# 12 "include/openssl/core.h"
        

# 1 "/opt/cegcc/lib/gcc/arm-mingw32ce/9.3.0/include/stddef.h" 1 3 4
# 415 "/opt/cegcc/lib/gcc/arm-mingw32ce/9.3.0/include/stddef.h" 3 4

# 415 "/opt/cegcc/lib/gcc/arm-mingw32ce/9.3.0/include/stddef.h" 3 4
typedef struct {
  long long __max_align_ll __attribute__((__aligned__(__alignof__(long long))));
  long double __max_align_ld __attribute__((__aligned__(__alignof__(long double))));
# 426 "/opt/cegcc/lib/gcc/arm-mingw32ce/9.3.0/include/stddef.h" 3 4
} max_align_t;
# 15 "include/openssl/core.h" 2
# 30 "include/openssl/core.h"

# 30 "include/openssl/core.h"
typedef struct ossl_core_handle_st OSSL_CORE_HANDLE;
typedef struct openssl_core_ctx_st OPENSSL_CORE_CTX;
typedef struct ossl_core_bio_st OSSL_CORE_BIO;







struct ossl_dispatch_st {
    int function_id;
    void (*function)(void);
};
# 58 "include/openssl/core.h"
struct ossl_item_st {
    unsigned int id;
    void *ptr;
};







struct ossl_algorithm_st {
    const char *algorithm_names;
    const char *property_definition;
    const OSSL_DISPATCH *implementation;
    const char *algorithm_description;
};







struct ossl_param_st {
    const char *key;
    unsigned int data_type;
    void *data;
    size_t data_size;
    size_t return_size;
};
# 169 "include/openssl/core.h"
typedef void (*OSSL_thread_stop_handler_fn)(void *arg);
# 190 "include/openssl/core.h"
typedef int (OSSL_provider_init_fn)(const OSSL_CORE_HANDLE *handle,
                                    const OSSL_DISPATCH *in,
                                    const OSSL_DISPATCH **out,
                                    void **provctx);




extern OSSL_provider_init_fn OSSL_provider_init;
# 216 "include/openssl/core.h"
typedef int (OSSL_CALLBACK)(const OSSL_PARAM params[], void *arg);
typedef int (OSSL_INOUT_CALLBACK)(const OSSL_PARAM in_params[],
                                  OSSL_PARAM out_params[], void *arg);






typedef int (OSSL_PASSPHRASE_CALLBACK)(char *pass, size_t pass_size,
                                       size_t *pass_len,
                                       const OSSL_PARAM params[], void *arg);
# 41 "include/openssl/crypto.h" 2
# 74 "include/openssl/crypto.h"
typedef struct {
    int dummy;
} CRYPTO_dynlock;



typedef void CRYPTO_RWLOCK;

CRYPTO_RWLOCK *CRYPTO_THREAD_lock_new(void);
 int CRYPTO_THREAD_read_lock(CRYPTO_RWLOCK *lock);
 int CRYPTO_THREAD_write_lock(CRYPTO_RWLOCK *lock);
int CRYPTO_THREAD_unlock(CRYPTO_RWLOCK *lock);
void CRYPTO_THREAD_lock_free(CRYPTO_RWLOCK *lock);

int CRYPTO_atomic_add(int *val, int amount, int *ret, CRYPTO_RWLOCK *lock);
int CRYPTO_atomic_or(uint64_t *val, uint64_t op, uint64_t *ret,
                     CRYPTO_RWLOCK *lock);
int CRYPTO_atomic_load(uint64_t *val, uint64_t *ret, CRYPTO_RWLOCK *lock);
# 125 "include/openssl/crypto.h"
size_t OPENSSL_strlcpy(char *dst, const char *src, size_t siz);
size_t OPENSSL_strlcat(char *dst, const char *src, size_t siz);
size_t OPENSSL_strnlen(const char *str, size_t maxlen);
int OPENSSL_buf2hexstr_ex(char *str, size_t str_n, size_t *strlength,
                          const unsigned char *buf, size_t buflen,
                          const char sep);
char *OPENSSL_buf2hexstr(const unsigned char *buf, long buflen);
int OPENSSL_hexstr2buf_ex(unsigned char *buf, size_t buf_n, size_t *buflen,
                          const char *str, const char sep);
unsigned char *OPENSSL_hexstr2buf(const char *str, long *buflen);
int OPENSSL_hexchar2int(unsigned char c);
int OPENSSL_strcasecmp(const char *s1, const char *s2);
int OPENSSL_strncasecmp(const char *s1, const char *s2, size_t n);
# 146 "include/openssl/crypto.h"
unsigned int OPENSSL_version_major(void);
unsigned int OPENSSL_version_minor(void);
unsigned int OPENSSL_version_patch(void);
const char *OPENSSL_version_pre_release(void);
const char *OPENSSL_version_build_metadata(void);

unsigned long OpenSSL_version_num(void);
const char *OpenSSL_version(int type);
# 165 "include/openssl/crypto.h"
const char *OPENSSL_info(int type);
# 179 "include/openssl/crypto.h"
int OPENSSL_issetugid(void);

struct crypto_ex_data_st {
    OSSL_LIB_CTX *ctx;
    struct stack_st_void *sk;
};

struct stack_st_void; typedef int (*sk_void_compfunc)(const void * const *a, const void *const *b); typedef void (*sk_void_freefunc)(void *a); typedef void * (*sk_void_copyfunc)(const void *a); static __attribute__((unused)) inline void *ossl_check_void_type(void *ptr) { return ptr; } static __attribute__((unused)) inline const OPENSSL_STACK *ossl_check_const_void_sk_type(const struct stack_st_void *sk) { return (const OPENSSL_STACK *)sk; } static __attribute__((unused)) inline OPENSSL_STACK *ossl_check_void_sk_type(struct stack_st_void *sk) { return (OPENSSL_STACK *)sk; } static __attribute__((unused)) inline OPENSSL_sk_compfunc ossl_check_void_compfunc_type(sk_void_compfunc cmp) { return (OPENSSL_sk_compfunc)cmp; } static __attribute__((unused)) inline OPENSSL_sk_copyfunc ossl_check_void_copyfunc_type(sk_void_copyfunc cpy) { return (OPENSSL_sk_copyfunc)cpy; } static __attribute__((unused)) inline OPENSSL_sk_freefunc ossl_check_void_freefunc_type(sk_void_freefunc fr) { return (OPENSSL_sk_freefunc)fr; }
# 239 "include/openssl/crypto.h"
typedef void CRYPTO_EX_new (void *parent, void *ptr, CRYPTO_EX_DATA *ad,
                           int idx, long argl, void *argp);
typedef void CRYPTO_EX_free (void *parent, void *ptr, CRYPTO_EX_DATA *ad,
                             int idx, long argl, void *argp);
typedef int CRYPTO_EX_dup (CRYPTO_EX_DATA *to, const CRYPTO_EX_DATA *from,
                           void **from_d, int idx, long argl, void *argp);
 int CRYPTO_get_ex_new_index(int class_index, long argl, void *argp,
                                   CRYPTO_EX_new *new_func,
                                   CRYPTO_EX_dup *dup_func,
                                   CRYPTO_EX_free *free_func);

int CRYPTO_free_ex_index(int class_index, int idx);





int CRYPTO_new_ex_data(int class_index, void *obj, CRYPTO_EX_DATA *ad);
int CRYPTO_dup_ex_data(int class_index, CRYPTO_EX_DATA *to,
                       const CRYPTO_EX_DATA *from);

void CRYPTO_free_ex_data(int class_index, void *obj, CRYPTO_EX_DATA *ad);


int CRYPTO_alloc_ex_data(int class_index, void *obj, CRYPTO_EX_DATA *ad,
                         int idx);





int CRYPTO_set_ex_data(CRYPTO_EX_DATA *ad, int idx, void *val);
void *CRYPTO_get_ex_data(const CRYPTO_EX_DATA *ad, int idx);
# 307 "include/openssl/crypto.h"
typedef struct crypto_threadid_st {
    int dummy;
} CRYPTO_THREADID;
# 334 "include/openssl/crypto.h"
typedef void *(*CRYPTO_malloc_fn)(size_t num, const char *file, int line);
typedef void *(*CRYPTO_realloc_fn)(void *addr, size_t num, const char *file,
                                   int line);
typedef void (*CRYPTO_free_fn)(void *addr, const char *file, int line);
int CRYPTO_set_mem_functions(CRYPTO_malloc_fn malloc_fn,
                             CRYPTO_realloc_fn realloc_fn,
                             CRYPTO_free_fn free_fn);
void CRYPTO_get_mem_functions(CRYPTO_malloc_fn *malloc_fn,
                              CRYPTO_realloc_fn *realloc_fn,
                              CRYPTO_free_fn *free_fn);

void *CRYPTO_malloc(size_t num, const char *file, int line);
void *CRYPTO_zalloc(size_t num, const char *file, int line);
void *CRYPTO_memdup(const void *str, size_t siz, const char *file, int line);
char *CRYPTO_strdup(const char *str, const char *file, int line);
char *CRYPTO_strndup(const char *str, size_t s, const char *file, int line);
void CRYPTO_free(void *ptr, const char *file, int line);
void CRYPTO_clear_free(void *ptr, size_t num, const char *file, int line);
void *CRYPTO_realloc(void *addr, size_t num, const char *file, int line);
void *CRYPTO_clear_realloc(void *addr, size_t old_num, size_t num,
                           const char *file, int line);

int CRYPTO_secure_malloc_init(size_t sz, size_t minsize);
int CRYPTO_secure_malloc_done(void);
void *CRYPTO_secure_malloc(size_t num, const char *file, int line);
void *CRYPTO_secure_zalloc(size_t num, const char *file, int line);
void CRYPTO_secure_free(void *ptr, const char *file, int line);
void CRYPTO_secure_clear_free(void *ptr, size_t num,
                              const char *file, int line);
int CRYPTO_secure_allocated(const void *ptr);
int CRYPTO_secure_malloc_initialized(void);
size_t CRYPTO_secure_actual_size(void *ptr);
size_t CRYPTO_secure_used(void);

void OPENSSL_cleanse(void *ptr, size_t len);
# 416 "include/openssl/crypto.h"
_Noreturn void OPENSSL_die(const char *assertion, const char *file, int line);






int OPENSSL_isservice(void);

void OPENSSL_init(void);
# 434 "include/openssl/crypto.h"
struct tm *OPENSSL_gmtime(const time_t *timer, struct tm *result);
int OPENSSL_gmtime_adj(struct tm *tm, int offset_day, long offset_sec);
int OPENSSL_gmtime_diff(int *pday, int *psec,
                        const struct tm *from, const struct tm *to);
# 446 "include/openssl/crypto.h"
int CRYPTO_memcmp(const void * in_a, const void * in_b, size_t len);
# 485 "include/openssl/crypto.h"
void OPENSSL_cleanup(void);
int OPENSSL_init_crypto(uint64_t opts, const OPENSSL_INIT_SETTINGS *settings);
int OPENSSL_atexit(void (*handler)(void));
void OPENSSL_thread_stop(void);
void OPENSSL_thread_stop_ex(OSSL_LIB_CTX *ctx);


OPENSSL_INIT_SETTINGS *OPENSSL_INIT_new(void);

int OPENSSL_INIT_set_config_filename(OPENSSL_INIT_SETTINGS *settings,
                                     const char *config_filename);
void OPENSSL_INIT_set_config_file_flags(OPENSSL_INIT_SETTINGS *settings,
                                        unsigned long flags);
int OPENSSL_INIT_set_config_appname(OPENSSL_INIT_SETTINGS *settings,
                                    const char *config_appname);

void OPENSSL_INIT_free(OPENSSL_INIT_SETTINGS *settings);





typedef DWORD CRYPTO_THREAD_LOCAL;
typedef DWORD CRYPTO_THREAD_ID;

typedef LONG CRYPTO_ONCE;
# 536 "include/openssl/crypto.h"
int CRYPTO_THREAD_run_once(CRYPTO_ONCE *once, void (*init)(void));

int CRYPTO_THREAD_init_local(CRYPTO_THREAD_LOCAL *key, void (*cleanup)(void *));
void *CRYPTO_THREAD_get_local(CRYPTO_THREAD_LOCAL *key);
int CRYPTO_THREAD_set_local(CRYPTO_THREAD_LOCAL *key, void *val);
int CRYPTO_THREAD_cleanup_local(CRYPTO_THREAD_LOCAL *key);

CRYPTO_THREAD_ID CRYPTO_THREAD_get_current_id(void);
int CRYPTO_THREAD_compare_id(CRYPTO_THREAD_ID a, CRYPTO_THREAD_ID b);

OSSL_LIB_CTX *OSSL_LIB_CTX_new(void);
OSSL_LIB_CTX *OSSL_LIB_CTX_new_from_dispatch(const OSSL_CORE_HANDLE *handle,
                                             const OSSL_DISPATCH *in);
OSSL_LIB_CTX *OSSL_LIB_CTX_new_child(const OSSL_CORE_HANDLE *handle,
                                     const OSSL_DISPATCH *in);
int OSSL_LIB_CTX_load_config(OSSL_LIB_CTX *ctx, const char *config_file);
void OSSL_LIB_CTX_free(OSSL_LIB_CTX *);
OSSL_LIB_CTX *OSSL_LIB_CTX_get0_global_default(void);
OSSL_LIB_CTX *OSSL_LIB_CTX_set0_default(OSSL_LIB_CTX *libctx);
# 25 "include/internal/cryptlib.h" 2
# 1 "include/openssl/buffer.h" 1
# 12 "include/openssl/buffer.h"
        
# 23 "include/openssl/buffer.h"
# 1 "include/openssl/buffererr.h" 1
# 13 "include/openssl/buffererr.h"
        
# 24 "include/openssl/buffer.h" 2






# 1 "/opt/cegcc/lib/gcc/arm-mingw32ce/9.3.0/include/stddef.h" 1 3 4
# 31 "include/openssl/buffer.h" 2
# 42 "include/openssl/buffer.h"
struct buf_mem_st {
    size_t length;
    char *data;
    size_t max;
    unsigned long flags;
};



BUF_MEM *BUF_MEM_new(void);
BUF_MEM *BUF_MEM_new_ex(unsigned long flags);
void BUF_MEM_free(BUF_MEM *a);
size_t BUF_MEM_grow(BUF_MEM *str, size_t len);
size_t BUF_MEM_grow_clean(BUF_MEM *str, size_t len);
void BUF_reverse(unsigned char *out, const unsigned char *in, size_t siz);
# 26 "include/internal/cryptlib.h" 2
# 1 "include/openssl/bio.h" 1
# 16 "include/openssl/bio.h"
        
# 31 "include/openssl/bio.h"
# 1 "include/openssl/bioerr.h" 1
# 13 "include/openssl/bioerr.h"
        
# 32 "include/openssl/bio.h" 2
# 213 "include/openssl/bio.h"
typedef union bio_addr_st BIO_ADDR;
typedef struct bio_addrinfo_st BIO_ADDRINFO;

int BIO_get_new_index(void);
void BIO_set_flags(BIO *b, int flags);
int BIO_test_flags(const BIO *b, int flags);
void BIO_clear_flags(BIO *b, int flags);
# 276 "include/openssl/bio.h"
typedef long (*BIO_callback_fn)(BIO *b, int oper, const char *argp, int argi,
                                long argl, long ret);
extern BIO_callback_fn BIO_get_callback(const BIO *b);
extern void BIO_set_callback(BIO *b, BIO_callback_fn callback);
extern long BIO_debug_callback(BIO *bio, int cmd,
                                               const char *argp, int argi,
                                               long argl, long ret);


typedef long (*BIO_callback_fn_ex)(BIO *b, int oper, const char *argp,
                                   size_t len, int argi,
                                   long argl, int ret, size_t *processed);
BIO_callback_fn_ex BIO_get_callback_ex(const BIO *b);
void BIO_set_callback_ex(BIO *b, BIO_callback_fn_ex callback);
long BIO_debug_callback_ex(BIO *bio, int oper, const char *argp, size_t len,
                           int argi, long argl, int ret, size_t *processed);

char *BIO_get_callback_arg(const BIO *b);
void BIO_set_callback_arg(BIO *b, char *arg);

typedef struct bio_method_st BIO_METHOD;

const char *BIO_method_name(const BIO *b);
int BIO_method_type(const BIO *b);

typedef int BIO_info_cb(BIO *, int, int);
typedef BIO_info_cb bio_info_cb;

struct stack_st_BIO; typedef int (*sk_BIO_compfunc)(const BIO * const *a, const BIO *const *b); typedef void (*sk_BIO_freefunc)(BIO *a); typedef BIO * (*sk_BIO_copyfunc)(const BIO *a); static __attribute__((unused)) inline BIO *ossl_check_BIO_type(BIO *ptr) { return ptr; } static __attribute__((unused)) inline const OPENSSL_STACK *ossl_check_const_BIO_sk_type(const struct stack_st_BIO *sk) { return (const OPENSSL_STACK *)sk; } static __attribute__((unused)) inline OPENSSL_STACK *ossl_check_BIO_sk_type(struct stack_st_BIO *sk) { return (OPENSSL_STACK *)sk; } static __attribute__((unused)) inline OPENSSL_sk_compfunc ossl_check_BIO_compfunc_type(sk_BIO_compfunc cmp) { return (OPENSSL_sk_compfunc)cmp; } static __attribute__((unused)) inline OPENSSL_sk_copyfunc ossl_check_BIO_copyfunc_type(sk_BIO_copyfunc cpy) { return (OPENSSL_sk_copyfunc)cpy; } static __attribute__((unused)) inline OPENSSL_sk_freefunc ossl_check_BIO_freefunc_type(sk_BIO_freefunc fr) { return (OPENSSL_sk_freefunc)fr; }
# 334 "include/openssl/bio.h"
typedef int asn1_ps_func (BIO *b, unsigned char **pbuf, int *plen,
                          void *parg);

typedef void (*BIO_dgram_sctp_notification_handler_fn) (BIO *b,
                                                        void *context,
                                                        void *buf);
# 562 "include/openssl/bio.h"
size_t BIO_ctrl_pending(BIO *b);
size_t BIO_ctrl_wpending(BIO *b);
# 582 "include/openssl/bio.h"
size_t BIO_ctrl_get_write_guarantee(BIO *b);
size_t BIO_ctrl_get_read_request(BIO *b);
int BIO_ctrl_reset_read_request(BIO *b);
# 609 "include/openssl/bio.h"
int BIO_set_ex_data(BIO *bio, int idx, void *data);
void *BIO_get_ex_data(const BIO *bio, int idx);
uint64_t BIO_number_read(BIO *bio);
uint64_t BIO_number_written(BIO *bio);


int BIO_asn1_set_prefix(BIO *b, asn1_ps_func *prefix,
                        asn1_ps_func *prefix_free);
int BIO_asn1_get_prefix(BIO *b, asn1_ps_func **pprefix,
                        asn1_ps_func **pprefix_free);
int BIO_asn1_set_suffix(BIO *b, asn1_ps_func *suffix,
                        asn1_ps_func *suffix_free);
int BIO_asn1_get_suffix(BIO *b, asn1_ps_func **psuffix,
                        asn1_ps_func **psuffix_free);

const BIO_METHOD *BIO_s_file(void);
BIO *BIO_new_file(const char *filename, const char *mode);
BIO *BIO_new_from_core_bio(OSSL_LIB_CTX *libctx, OSSL_CORE_BIO *corebio);

BIO *BIO_new_fp(FILE *stream, int close_flag);

BIO *BIO_new_ex(OSSL_LIB_CTX *libctx, const BIO_METHOD *method);
BIO *BIO_new(const BIO_METHOD *type);
int BIO_free(BIO *a);
void BIO_set_data(BIO *a, void *ptr);
void *BIO_get_data(BIO *a);
void BIO_set_init(BIO *a, int init);
int BIO_get_init(BIO *a);
void BIO_set_shutdown(BIO *a, int shut);
int BIO_get_shutdown(BIO *a);
void BIO_vfree(BIO *a);
int BIO_up_ref(BIO *a);
int BIO_read(BIO *b, void *data, int dlen);
int BIO_read_ex(BIO *b, void *data, size_t dlen, size_t *readbytes);
int BIO_gets(BIO *bp, char *buf, int size);
int BIO_get_line(BIO *bio, char *buf, int size);
int BIO_write(BIO *b, const void *data, int dlen);
int BIO_write_ex(BIO *b, const void *data, size_t dlen, size_t *written);
int BIO_puts(BIO *bp, const char *buf);
int BIO_indent(BIO *b, int indent, int max);
long BIO_ctrl(BIO *bp, int cmd, long larg, void *parg);
long BIO_callback_ctrl(BIO *b, int cmd, BIO_info_cb *fp);
void *BIO_ptr_ctrl(BIO *bp, int cmd, long larg);
long BIO_int_ctrl(BIO *bp, int cmd, long larg, int iarg);
BIO *BIO_push(BIO *b, BIO *append);
BIO *BIO_pop(BIO *b);
void BIO_free_all(BIO *a);
BIO *BIO_find_type(BIO *b, int bio_type);
BIO *BIO_next(BIO *b);
void BIO_set_next(BIO *b, BIO *next);
BIO *BIO_get_retry_BIO(BIO *bio, int *reason);
int BIO_get_retry_reason(BIO *bio);
void BIO_set_retry_reason(BIO *bio, int reason);
BIO *BIO_dup_chain(BIO *in);

int BIO_nread0(BIO *bio, char **buf);
int BIO_nread(BIO *bio, char **buf, int num);
int BIO_nwrite0(BIO *bio, char **buf);
int BIO_nwrite(BIO *bio, char **buf, int num);

const BIO_METHOD *BIO_s_mem(void);
const BIO_METHOD *BIO_s_secmem(void);
BIO *BIO_new_mem_buf(const void *buf, int len);

const BIO_METHOD *BIO_s_socket(void);
const BIO_METHOD *BIO_s_connect(void);
const BIO_METHOD *BIO_s_accept(void);

const BIO_METHOD *BIO_s_fd(void);
const BIO_METHOD *BIO_s_log(void);
const BIO_METHOD *BIO_s_bio(void);
const BIO_METHOD *BIO_s_null(void);
const BIO_METHOD *BIO_f_null(void);
const BIO_METHOD *BIO_f_buffer(void);
const BIO_METHOD *BIO_f_readbuffer(void);
const BIO_METHOD *BIO_f_linebuffer(void);
const BIO_METHOD *BIO_f_nbio_test(void);
const BIO_METHOD *BIO_f_prefix(void);
const BIO_METHOD *BIO_s_core(void);

const BIO_METHOD *BIO_s_datagram(void);
int BIO_dgram_non_fatal_error(int error);
BIO *BIO_new_dgram(int fd, int close_flag);
# 705 "include/openssl/bio.h"
int BIO_sock_should_retry(int i);
int BIO_sock_non_fatal_error(int error);
int BIO_socket_wait(int fd, int for_read, time_t max_time);

int BIO_wait(BIO *bio, time_t max_time, unsigned int nap_milliseconds);
int BIO_do_connect_retry(BIO *bio, int timeout, int nap_milliseconds);

int BIO_fd_should_retry(int i);
int BIO_fd_non_fatal_error(int error);
int BIO_dump_cb(int (*cb) (const void *data, size_t len, void *u),
                void *u, const void *s, int len);
int BIO_dump_indent_cb(int (*cb) (const void *data, size_t len, void *u),
                       void *u, const void *s, int len, int indent);
int BIO_dump(BIO *b, const void *bytes, int len);
int BIO_dump_indent(BIO *b, const void *bytes, int len, int indent);

int BIO_dump_fp(FILE *fp, const void *s, int len);
int BIO_dump_indent_fp(FILE *fp, const void *s, int len, int indent);

int BIO_hex_string(BIO *out, int indent, int width, const void *data,
                   int datalen);


BIO_ADDR *BIO_ADDR_new(void);
int BIO_ADDR_rawmake(BIO_ADDR *ap, int family,
                     const void *where, size_t wherelen, unsigned short port);
void BIO_ADDR_free(BIO_ADDR *);
void BIO_ADDR_clear(BIO_ADDR *ap);
int BIO_ADDR_family(const BIO_ADDR *ap);
int BIO_ADDR_rawaddress(const BIO_ADDR *ap, void *p, size_t *l);
unsigned short BIO_ADDR_rawport(const BIO_ADDR *ap);
char *BIO_ADDR_hostname_string(const BIO_ADDR *ap, int numeric);
char *BIO_ADDR_service_string(const BIO_ADDR *ap, int numeric);
char *BIO_ADDR_path_string(const BIO_ADDR *ap);

const BIO_ADDRINFO *BIO_ADDRINFO_next(const BIO_ADDRINFO *bai);
int BIO_ADDRINFO_family(const BIO_ADDRINFO *bai);
int BIO_ADDRINFO_socktype(const BIO_ADDRINFO *bai);
int BIO_ADDRINFO_protocol(const BIO_ADDRINFO *bai);
const BIO_ADDR *BIO_ADDRINFO_address(const BIO_ADDRINFO *bai);
void BIO_ADDRINFO_free(BIO_ADDRINFO *bai);

enum BIO_hostserv_priorities {
    BIO_PARSE_PRIO_HOST, BIO_PARSE_PRIO_SERV
};
int BIO_parse_hostserv(const char *hostserv, char **host, char **service,
                       enum BIO_hostserv_priorities hostserv_prio);
enum BIO_lookup_type {
    BIO_LOOKUP_CLIENT, BIO_LOOKUP_SERVER
};
int BIO_lookup(const char *host, const char *service,
               enum BIO_lookup_type lookup_type,
               int family, int socktype, BIO_ADDRINFO **res);
int BIO_lookup_ex(const char *host, const char *service,
                  int lookup_type, int family, int socktype, int protocol,
                  BIO_ADDRINFO **res);
int BIO_sock_error(int sock);
int BIO_socket_ioctl(int fd, long type, void *arg);
int BIO_socket_nbio(int fd, int mode);
int BIO_sock_init(void);



int BIO_set_tcp_ndelay(int sock, int turn_on);

extern struct hostent *BIO_gethostbyname(const char *name);
extern int BIO_get_port(const char *str, unsigned short *port_ptr);
extern int BIO_get_host_ip(const char *str, unsigned char *ip);
extern int BIO_get_accept_socket(char *host_port, int mode);
extern int BIO_accept(int sock, char **ip_port);


union BIO_sock_info_u {
    BIO_ADDR *addr;
};
enum BIO_sock_info_type {
    BIO_SOCK_INFO_ADDRESS
};
int BIO_sock_info(int sock,
                  enum BIO_sock_info_type type, union BIO_sock_info_u *info);







int BIO_socket(int domain, int socktype, int protocol, int options);
int BIO_connect(int sock, const BIO_ADDR *addr, int options);
int BIO_bind(int sock, const BIO_ADDR *addr, int options);
int BIO_listen(int sock, const BIO_ADDR *addr, int options);
int BIO_accept_ex(int accept_sock, BIO_ADDR *addr, int options);
int BIO_closesocket(int sock);

BIO *BIO_new_socket(int sock, int close_flag);
BIO *BIO_new_connect(const char *host_port);
BIO *BIO_new_accept(const char *host_port);


BIO *BIO_new_fd(int fd, int close_flag);

int BIO_new_bio_pair(BIO **bio1, size_t writebuf1,
                     BIO **bio2, size_t writebuf2);






void BIO_copy_next_retry(BIO *b);
# 838 "include/openssl/bio.h"
int BIO_printf(BIO *bio, const char *format, ...)
;
int BIO_vprintf(BIO *bio, const char *format, va_list args)
;
int BIO_snprintf(char *buf, size_t n, const char *format, ...)
;
int BIO_vsnprintf(char *buf, size_t n, const char *format, va_list args)
;




BIO_METHOD *BIO_meth_new(int type, const char *name);
void BIO_meth_free(BIO_METHOD *biom);
int (*BIO_meth_get_write(const BIO_METHOD *biom)) (BIO *, const char *, int);
int (*BIO_meth_get_write_ex(const BIO_METHOD *biom)) (BIO *, const char *, size_t,
                                                size_t *);
int BIO_meth_set_write(BIO_METHOD *biom,
                       int (*_write) (BIO *, const char *, int));
int BIO_meth_set_write_ex(BIO_METHOD *biom,
                       int (*bwrite) (BIO *, const char *, size_t, size_t *));
int (*BIO_meth_get_read(const BIO_METHOD *biom)) (BIO *, char *, int);
int (*BIO_meth_get_read_ex(const BIO_METHOD *biom)) (BIO *, char *, size_t, size_t *);
int BIO_meth_set_read(BIO_METHOD *biom,
                      int (*_read) (BIO *, char *, int));
int BIO_meth_set_read_ex(BIO_METHOD *biom,
                         int (*bread) (BIO *, char *, size_t, size_t *));
int (*BIO_meth_get_puts(const BIO_METHOD *biom)) (BIO *, const char *);
int BIO_meth_set_puts(BIO_METHOD *biom,
                      int (*puts) (BIO *, const char *));
int (*BIO_meth_get_gets(const BIO_METHOD *biom)) (BIO *, char *, int);
int BIO_meth_set_gets(BIO_METHOD *biom,
                      int (*gets) (BIO *, char *, int));
long (*BIO_meth_get_ctrl(const BIO_METHOD *biom)) (BIO *, int, long, void *);
int BIO_meth_set_ctrl(BIO_METHOD *biom,
                      long (*ctrl) (BIO *, int, long, void *));
int (*BIO_meth_get_create(const BIO_METHOD *bion)) (BIO *);
int BIO_meth_set_create(BIO_METHOD *biom, int (*create) (BIO *));
int (*BIO_meth_get_destroy(const BIO_METHOD *biom)) (BIO *);
int BIO_meth_set_destroy(BIO_METHOD *biom, int (*destroy) (BIO *));
long (*BIO_meth_get_callback_ctrl(const BIO_METHOD *biom))
                                 (BIO *, int, BIO_info_cb *);
int BIO_meth_set_callback_ctrl(BIO_METHOD *biom,
                               long (*callback_ctrl) (BIO *, int,
                                                      BIO_info_cb *));
# 27 "include/internal/cryptlib.h" 2
# 1 "include/openssl/asn1.h" 1
# 17 "include/openssl/asn1.h"
        
# 30 "include/openssl/asn1.h"
# 1 "include/openssl/asn1err.h" 1
# 13 "include/openssl/asn1err.h"
        
# 31 "include/openssl/asn1.h" 2



# 1 "include/openssl/bn.h" 1
# 13 "include/openssl/bn.h"
        
# 27 "include/openssl/bn.h"
# 1 "include/openssl/bnerr.h" 1
# 13 "include/openssl/bnerr.h"
        
# 28 "include/openssl/bn.h" 2
# 76 "include/openssl/bn.h"
void BN_set_flags(BIGNUM *b, int n);
int BN_get_flags(const BIGNUM *b, int n);
# 94 "include/openssl/bn.h"
void BN_with_flags(BIGNUM *dest, const BIGNUM *b, int flags);


int BN_GENCB_call(BN_GENCB *cb, int a, int b);

BN_GENCB *BN_GENCB_new(void);
void BN_GENCB_free(BN_GENCB *cb);


void BN_GENCB_set_old(BN_GENCB *gencb, void (*callback) (int, int, void *),
                      void *cb_arg);


void BN_GENCB_set(BN_GENCB *gencb, int (*callback) (int, int, BN_GENCB *),
                  void *cb_arg);

void *BN_GENCB_get_arg(BN_GENCB *cb);
# 191 "include/openssl/bn.h"
int BN_abs_is_word(const BIGNUM *a, const unsigned int w);
int BN_is_zero(const BIGNUM *a);
int BN_is_one(const BIGNUM *a);
int BN_is_word(const BIGNUM *a, const unsigned int w);
int BN_is_odd(const BIGNUM *a);



void BN_zero_ex(BIGNUM *a);







const BIGNUM *BN_value_one(void);
char *BN_options(void);
BN_CTX *BN_CTX_new_ex(OSSL_LIB_CTX *ctx);
BN_CTX *BN_CTX_new(void);
BN_CTX *BN_CTX_secure_new_ex(OSSL_LIB_CTX *ctx);
BN_CTX *BN_CTX_secure_new(void);
void BN_CTX_free(BN_CTX *c);
void BN_CTX_start(BN_CTX *ctx);
BIGNUM *BN_CTX_get(BN_CTX *ctx);
void BN_CTX_end(BN_CTX *ctx);
int BN_rand_ex(BIGNUM *rnd, int bits, int top, int bottom,
               unsigned int strength, BN_CTX *ctx);
int BN_rand(BIGNUM *rnd, int bits, int top, int bottom);
int BN_priv_rand_ex(BIGNUM *rnd, int bits, int top, int bottom,
                    unsigned int strength, BN_CTX *ctx);
int BN_priv_rand(BIGNUM *rnd, int bits, int top, int bottom);
int BN_rand_range_ex(BIGNUM *r, const BIGNUM *range, unsigned int strength,
                     BN_CTX *ctx);
int BN_rand_range(BIGNUM *rnd, const BIGNUM *range);
int BN_priv_rand_range_ex(BIGNUM *r, const BIGNUM *range,
                          unsigned int strength, BN_CTX *ctx);
int BN_priv_rand_range(BIGNUM *rnd, const BIGNUM *range);

extern
int BN_pseudo_rand(BIGNUM *rnd, int bits, int top, int bottom);
extern
int BN_pseudo_rand_range(BIGNUM *rnd, const BIGNUM *range);

int BN_num_bits(const BIGNUM *a);
int BN_num_bits_word(unsigned int l);
int BN_security_bits(int L, int N);
BIGNUM *BN_new(void);
BIGNUM *BN_secure_new(void);
void BN_clear_free(BIGNUM *a);
BIGNUM *BN_copy(BIGNUM *a, const BIGNUM *b);
void BN_swap(BIGNUM *a, BIGNUM *b);
BIGNUM *BN_bin2bn(const unsigned char *s, int len, BIGNUM *ret);
int BN_bn2bin(const BIGNUM *a, unsigned char *to);
int BN_bn2binpad(const BIGNUM *a, unsigned char *to, int tolen);
BIGNUM *BN_lebin2bn(const unsigned char *s, int len, BIGNUM *ret);
int BN_bn2lebinpad(const BIGNUM *a, unsigned char *to, int tolen);
BIGNUM *BN_native2bn(const unsigned char *s, int len, BIGNUM *ret);
int BN_bn2nativepad(const BIGNUM *a, unsigned char *to, int tolen);
BIGNUM *BN_mpi2bn(const unsigned char *s, int len, BIGNUM *ret);
int BN_bn2mpi(const BIGNUM *a, unsigned char *to);
int BN_sub(BIGNUM *r, const BIGNUM *a, const BIGNUM *b);
int BN_usub(BIGNUM *r, const BIGNUM *a, const BIGNUM *b);
int BN_uadd(BIGNUM *r, const BIGNUM *a, const BIGNUM *b);
int BN_add(BIGNUM *r, const BIGNUM *a, const BIGNUM *b);
int BN_mul(BIGNUM *r, const BIGNUM *a, const BIGNUM *b, BN_CTX *ctx);
int BN_sqr(BIGNUM *r, const BIGNUM *a, BN_CTX *ctx);




void BN_set_negative(BIGNUM *b, int n);




int BN_is_negative(const BIGNUM *b);

int BN_div(BIGNUM *dv, BIGNUM *rem, const BIGNUM *m, const BIGNUM *d,
           BN_CTX *ctx);

int BN_nnmod(BIGNUM *r, const BIGNUM *m, const BIGNUM *d, BN_CTX *ctx);
int BN_mod_add(BIGNUM *r, const BIGNUM *a, const BIGNUM *b, const BIGNUM *m,
               BN_CTX *ctx);
int BN_mod_add_quick(BIGNUM *r, const BIGNUM *a, const BIGNUM *b,
                     const BIGNUM *m);
int BN_mod_sub(BIGNUM *r, const BIGNUM *a, const BIGNUM *b, const BIGNUM *m,
               BN_CTX *ctx);
int BN_mod_sub_quick(BIGNUM *r, const BIGNUM *a, const BIGNUM *b,
                     const BIGNUM *m);
int BN_mod_mul(BIGNUM *r, const BIGNUM *a, const BIGNUM *b, const BIGNUM *m,
               BN_CTX *ctx);
int BN_mod_sqr(BIGNUM *r, const BIGNUM *a, const BIGNUM *m, BN_CTX *ctx);
int BN_mod_lshift1(BIGNUM *r, const BIGNUM *a, const BIGNUM *m, BN_CTX *ctx);
int BN_mod_lshift1_quick(BIGNUM *r, const BIGNUM *a, const BIGNUM *m);
int BN_mod_lshift(BIGNUM *r, const BIGNUM *a, int n, const BIGNUM *m,
                  BN_CTX *ctx);
int BN_mod_lshift_quick(BIGNUM *r, const BIGNUM *a, int n, const BIGNUM *m);

unsigned int BN_mod_word(const BIGNUM *a, unsigned int w);
unsigned int BN_div_word(BIGNUM *a, unsigned int w);
int BN_mul_word(BIGNUM *a, unsigned int w);
int BN_add_word(BIGNUM *a, unsigned int w);
int BN_sub_word(BIGNUM *a, unsigned int w);
int BN_set_word(BIGNUM *a, unsigned int w);
unsigned int BN_get_word(const BIGNUM *a);

int BN_cmp(const BIGNUM *a, const BIGNUM *b);
void BN_free(BIGNUM *a);
int BN_is_bit_set(const BIGNUM *a, int n);
int BN_lshift(BIGNUM *r, const BIGNUM *a, int n);
int BN_lshift1(BIGNUM *r, const BIGNUM *a);
int BN_exp(BIGNUM *r, const BIGNUM *a, const BIGNUM *p, BN_CTX *ctx);

int BN_mod_exp(BIGNUM *r, const BIGNUM *a, const BIGNUM *p,
               const BIGNUM *m, BN_CTX *ctx);
int BN_mod_exp_mont(BIGNUM *r, const BIGNUM *a, const BIGNUM *p,
                    const BIGNUM *m, BN_CTX *ctx, BN_MONT_CTX *m_ctx);
int BN_mod_exp_mont_consttime(BIGNUM *rr, const BIGNUM *a, const BIGNUM *p,
                              const BIGNUM *m, BN_CTX *ctx,
                              BN_MONT_CTX *in_mont);
int BN_mod_exp_mont_word(BIGNUM *r, unsigned int a, const BIGNUM *p,
                         const BIGNUM *m, BN_CTX *ctx, BN_MONT_CTX *m_ctx);
int BN_mod_exp2_mont(BIGNUM *r, const BIGNUM *a1, const BIGNUM *p1,
                     const BIGNUM *a2, const BIGNUM *p2, const BIGNUM *m,
                     BN_CTX *ctx, BN_MONT_CTX *m_ctx);
int BN_mod_exp_simple(BIGNUM *r, const BIGNUM *a, const BIGNUM *p,
                      const BIGNUM *m, BN_CTX *ctx);
int BN_mod_exp_mont_consttime_x2(BIGNUM *rr1, const BIGNUM *a1, const BIGNUM *p1,
                                 const BIGNUM *m1, BN_MONT_CTX *in_mont1,
                                 BIGNUM *rr2, const BIGNUM *a2, const BIGNUM *p2,
                                 const BIGNUM *m2, BN_MONT_CTX *in_mont2,
                                 BN_CTX *ctx);

int BN_mask_bits(BIGNUM *a, int n);

int BN_print_fp(FILE *fp, const BIGNUM *a);

int BN_print(BIO *bio, const BIGNUM *a);
int BN_reciprocal(BIGNUM *r, const BIGNUM *m, int len, BN_CTX *ctx);
int BN_rshift(BIGNUM *r, const BIGNUM *a, int n);
int BN_rshift1(BIGNUM *r, const BIGNUM *a);
void BN_clear(BIGNUM *a);
BIGNUM *BN_dup(const BIGNUM *a);
int BN_ucmp(const BIGNUM *a, const BIGNUM *b);
int BN_set_bit(BIGNUM *a, int n);
int BN_clear_bit(BIGNUM *a, int n);
char *BN_bn2hex(const BIGNUM *a);
char *BN_bn2dec(const BIGNUM *a);
int BN_hex2bn(BIGNUM **a, const char *str);
int BN_dec2bn(BIGNUM **a, const char *str);
int BN_asc2bn(BIGNUM **a, const char *str);
int BN_gcd(BIGNUM *r, const BIGNUM *a, const BIGNUM *b, BN_CTX *ctx);
int BN_kronecker(const BIGNUM *a, const BIGNUM *b, BN_CTX *ctx);


BIGNUM *BN_mod_inverse(BIGNUM *ret,
                       const BIGNUM *a, const BIGNUM *n, BN_CTX *ctx);
BIGNUM *BN_mod_sqrt(BIGNUM *ret,
                    const BIGNUM *a, const BIGNUM *n, BN_CTX *ctx);

void BN_consttime_swap(unsigned int swap, BIGNUM *a, BIGNUM *b, int nwords);



extern
BIGNUM *BN_generate_prime(BIGNUM *ret, int bits, int safe,
                          const BIGNUM *add, const BIGNUM *rem,
                          void (*callback) (int, int, void *),
                          void *cb_arg);
extern
int BN_is_prime(const BIGNUM *p, int nchecks,
                void (*callback) (int, int, void *),
                BN_CTX *ctx, void *cb_arg);
extern
int BN_is_prime_fasttest(const BIGNUM *p, int nchecks,
                         void (*callback) (int, int, void *),
                         BN_CTX *ctx, void *cb_arg,
                         int do_trial_division);


extern
int BN_is_prime_ex(const BIGNUM *p, int nchecks, BN_CTX *ctx, BN_GENCB *cb);
extern
int BN_is_prime_fasttest_ex(const BIGNUM *p, int nchecks, BN_CTX *ctx,
                            int do_trial_division, BN_GENCB *cb);


int BN_generate_prime_ex2(BIGNUM *ret, int bits, int safe,
                          const BIGNUM *add, const BIGNUM *rem, BN_GENCB *cb,
                          BN_CTX *ctx);
int BN_generate_prime_ex(BIGNUM *ret, int bits, int safe, const BIGNUM *add,
                         const BIGNUM *rem, BN_GENCB *cb);
int BN_check_prime(const BIGNUM *p, BN_CTX *ctx, BN_GENCB *cb);


extern
int BN_X931_generate_Xpq(BIGNUM *Xp, BIGNUM *Xq, int nbits, BN_CTX *ctx);

extern
int BN_X931_derive_prime_ex(BIGNUM *p, BIGNUM *p1, BIGNUM *p2,
                            const BIGNUM *Xp, const BIGNUM *Xp1,
                            const BIGNUM *Xp2, const BIGNUM *e, BN_CTX *ctx,
                            BN_GENCB *cb);
extern
int BN_X931_generate_prime_ex(BIGNUM *p, BIGNUM *p1, BIGNUM *p2, BIGNUM *Xp1,
                              BIGNUM *Xp2, const BIGNUM *Xp, const BIGNUM *e,
                              BN_CTX *ctx, BN_GENCB *cb);


BN_MONT_CTX *BN_MONT_CTX_new(void);
int BN_mod_mul_montgomery(BIGNUM *r, const BIGNUM *a, const BIGNUM *b,
                          BN_MONT_CTX *mont, BN_CTX *ctx);
int BN_to_montgomery(BIGNUM *r, const BIGNUM *a, BN_MONT_CTX *mont,
                     BN_CTX *ctx);
int BN_from_montgomery(BIGNUM *r, const BIGNUM *a, BN_MONT_CTX *mont,
                       BN_CTX *ctx);
void BN_MONT_CTX_free(BN_MONT_CTX *mont);
int BN_MONT_CTX_set(BN_MONT_CTX *mont, const BIGNUM *mod, BN_CTX *ctx);
BN_MONT_CTX *BN_MONT_CTX_copy(BN_MONT_CTX *to, BN_MONT_CTX *from);
BN_MONT_CTX *BN_MONT_CTX_set_locked(BN_MONT_CTX **pmont, CRYPTO_RWLOCK *lock,
                                    const BIGNUM *mod, BN_CTX *ctx);





BN_BLINDING *BN_BLINDING_new(const BIGNUM *A, const BIGNUM *Ai, BIGNUM *mod);
void BN_BLINDING_free(BN_BLINDING *b);
int BN_BLINDING_update(BN_BLINDING *b, BN_CTX *ctx);
int BN_BLINDING_convert(BIGNUM *n, BN_BLINDING *b, BN_CTX *ctx);
int BN_BLINDING_invert(BIGNUM *n, BN_BLINDING *b, BN_CTX *ctx);
int BN_BLINDING_convert_ex(BIGNUM *n, BIGNUM *r, BN_BLINDING *b, BN_CTX *);
int BN_BLINDING_invert_ex(BIGNUM *n, const BIGNUM *r, BN_BLINDING *b,
                          BN_CTX *);

int BN_BLINDING_is_current_thread(BN_BLINDING *b);
void BN_BLINDING_set_current_thread(BN_BLINDING *b);
int BN_BLINDING_lock(BN_BLINDING *b);
int BN_BLINDING_unlock(BN_BLINDING *b);

unsigned long BN_BLINDING_get_flags(const BN_BLINDING *);
void BN_BLINDING_set_flags(BN_BLINDING *, unsigned long);
BN_BLINDING *BN_BLINDING_create_param(BN_BLINDING *b,
                                      const BIGNUM *e, BIGNUM *m, BN_CTX *ctx,
                                      int (*bn_mod_exp) (BIGNUM *r,
                                                         const BIGNUM *a,
                                                         const BIGNUM *p,
                                                         const BIGNUM *m,
                                                         BN_CTX *ctx,
                                                         BN_MONT_CTX *m_ctx),
                                      BN_MONT_CTX *m_ctx);

extern
void BN_set_params(int mul, int high, int low, int mont);
extern
int BN_get_params(int which);


BN_RECP_CTX *BN_RECP_CTX_new(void);
void BN_RECP_CTX_free(BN_RECP_CTX *recp);
int BN_RECP_CTX_set(BN_RECP_CTX *recp, const BIGNUM *rdiv, BN_CTX *ctx);
int BN_mod_mul_reciprocal(BIGNUM *r, const BIGNUM *x, const BIGNUM *y,
                          BN_RECP_CTX *recp, BN_CTX *ctx);
int BN_mod_exp_recp(BIGNUM *r, const BIGNUM *a, const BIGNUM *p,
                    const BIGNUM *m, BN_CTX *ctx);
int BN_div_recp(BIGNUM *dv, BIGNUM *rem, const BIGNUM *m,
                BN_RECP_CTX *recp, BN_CTX *ctx);
# 472 "include/openssl/bn.h"
int BN_GF2m_add(BIGNUM *r, const BIGNUM *a, const BIGNUM *b);




int BN_GF2m_mod(BIGNUM *r, const BIGNUM *a, const BIGNUM *p);

int BN_GF2m_mod_mul(BIGNUM *r, const BIGNUM *a, const BIGNUM *b,
                    const BIGNUM *p, BN_CTX *ctx);

int BN_GF2m_mod_sqr(BIGNUM *r, const BIGNUM *a, const BIGNUM *p, BN_CTX *ctx);

int BN_GF2m_mod_inv(BIGNUM *r, const BIGNUM *b, const BIGNUM *p, BN_CTX *ctx);

int BN_GF2m_mod_div(BIGNUM *r, const BIGNUM *a, const BIGNUM *b,
                    const BIGNUM *p, BN_CTX *ctx);

int BN_GF2m_mod_exp(BIGNUM *r, const BIGNUM *a, const BIGNUM *b,
                    const BIGNUM *p, BN_CTX *ctx);

int BN_GF2m_mod_sqrt(BIGNUM *r, const BIGNUM *a, const BIGNUM *p,
                     BN_CTX *ctx);

int BN_GF2m_mod_solve_quad(BIGNUM *r, const BIGNUM *a, const BIGNUM *p,
                           BN_CTX *ctx);
# 505 "include/openssl/bn.h"
int BN_GF2m_mod_arr(BIGNUM *r, const BIGNUM *a, const int p[]);

int BN_GF2m_mod_mul_arr(BIGNUM *r, const BIGNUM *a, const BIGNUM *b,
                        const int p[], BN_CTX *ctx);

int BN_GF2m_mod_sqr_arr(BIGNUM *r, const BIGNUM *a, const int p[],
                        BN_CTX *ctx);

int BN_GF2m_mod_inv_arr(BIGNUM *r, const BIGNUM *b, const int p[],
                        BN_CTX *ctx);

int BN_GF2m_mod_div_arr(BIGNUM *r, const BIGNUM *a, const BIGNUM *b,
                        const int p[], BN_CTX *ctx);

int BN_GF2m_mod_exp_arr(BIGNUM *r, const BIGNUM *a, const BIGNUM *b,
                        const int p[], BN_CTX *ctx);

int BN_GF2m_mod_sqrt_arr(BIGNUM *r, const BIGNUM *a,
                         const int p[], BN_CTX *ctx);

int BN_GF2m_mod_solve_quad_arr(BIGNUM *r, const BIGNUM *a,
                               const int p[], BN_CTX *ctx);
int BN_GF2m_poly2arr(const BIGNUM *a, int p[], int max);
int BN_GF2m_arr2poly(const int p[], BIGNUM *a);






int BN_nist_mod_192(BIGNUM *r, const BIGNUM *a, const BIGNUM *p, BN_CTX *ctx);
int BN_nist_mod_224(BIGNUM *r, const BIGNUM *a, const BIGNUM *p, BN_CTX *ctx);
int BN_nist_mod_256(BIGNUM *r, const BIGNUM *a, const BIGNUM *p, BN_CTX *ctx);
int BN_nist_mod_384(BIGNUM *r, const BIGNUM *a, const BIGNUM *p, BN_CTX *ctx);
int BN_nist_mod_521(BIGNUM *r, const BIGNUM *a, const BIGNUM *p, BN_CTX *ctx);

const BIGNUM *BN_get0_nist_prime_192(void);
const BIGNUM *BN_get0_nist_prime_224(void);
const BIGNUM *BN_get0_nist_prime_256(void);
const BIGNUM *BN_get0_nist_prime_384(void);
const BIGNUM *BN_get0_nist_prime_521(void);

int (*BN_nist_mod_func(const BIGNUM *p)) (BIGNUM *r, const BIGNUM *a,
                                          const BIGNUM *field, BN_CTX *ctx);

int BN_generate_dsa_nonce(BIGNUM *out, const BIGNUM *range,
                          const BIGNUM *priv, const unsigned char *message,
                          size_t message_len, BN_CTX *ctx);


BIGNUM *BN_get_rfc2409_prime_768(BIGNUM *bn);
BIGNUM *BN_get_rfc2409_prime_1024(BIGNUM *bn);


BIGNUM *BN_get_rfc3526_prime_1536(BIGNUM *bn);
BIGNUM *BN_get_rfc3526_prime_2048(BIGNUM *bn);
BIGNUM *BN_get_rfc3526_prime_3072(BIGNUM *bn);
BIGNUM *BN_get_rfc3526_prime_4096(BIGNUM *bn);
BIGNUM *BN_get_rfc3526_prime_6144(BIGNUM *bn);
BIGNUM *BN_get_rfc3526_prime_8192(BIGNUM *bn);
# 577 "include/openssl/bn.h"
int BN_bntest_rand(BIGNUM *rnd, int bits, int top, int bottom);
# 35 "include/openssl/asn1.h" 2
# 130 "include/openssl/asn1.h"
struct stack_st_X509_ALGOR; typedef int (*sk_X509_ALGOR_compfunc)(const X509_ALGOR * const *a, const X509_ALGOR *const *b); typedef void (*sk_X509_ALGOR_freefunc)(X509_ALGOR *a); typedef X509_ALGOR * (*sk_X509_ALGOR_copyfunc)(const X509_ALGOR *a); static __attribute__((unused)) inline X509_ALGOR *ossl_check_X509_ALGOR_type(X509_ALGOR *ptr) { return ptr; } static __attribute__((unused)) inline const OPENSSL_STACK *ossl_check_const_X509_ALGOR_sk_type(const struct stack_st_X509_ALGOR *sk) { return (const OPENSSL_STACK *)sk; } static __attribute__((unused)) inline OPENSSL_STACK *ossl_check_X509_ALGOR_sk_type(struct stack_st_X509_ALGOR *sk) { return (OPENSSL_STACK *)sk; } static __attribute__((unused)) inline OPENSSL_sk_compfunc ossl_check_X509_ALGOR_compfunc_type(sk_X509_ALGOR_compfunc cmp) { return (OPENSSL_sk_compfunc)cmp; } static __attribute__((unused)) inline OPENSSL_sk_copyfunc ossl_check_X509_ALGOR_copyfunc_type(sk_X509_ALGOR_copyfunc cpy) { return (OPENSSL_sk_copyfunc)cpy; } static __attribute__((unused)) inline OPENSSL_sk_freefunc ossl_check_X509_ALGOR_freefunc_type(sk_X509_ALGOR_freefunc fr) { return (OPENSSL_sk_freefunc)fr; }
# 184 "include/openssl/asn1.h"
struct asn1_string_st {
    int length;
    int type;
    unsigned char *data;





    long flags;
};







typedef struct ASN1_ENCODING_st {
    unsigned char *enc;
    long len;
    int modified;
} ASN1_ENCODING;
# 224 "include/openssl/asn1.h"
struct asn1_string_table_st {
    int nid;
    long minsize;
    long maxsize;
    unsigned long mask;
    unsigned long flags;
};

struct stack_st_ASN1_STRING_TABLE; typedef int (*sk_ASN1_STRING_TABLE_compfunc)(const ASN1_STRING_TABLE * const *a, const ASN1_STRING_TABLE *const *b); typedef void (*sk_ASN1_STRING_TABLE_freefunc)(ASN1_STRING_TABLE *a); typedef ASN1_STRING_TABLE * (*sk_ASN1_STRING_TABLE_copyfunc)(const ASN1_STRING_TABLE *a); static __attribute__((unused)) inline ASN1_STRING_TABLE *ossl_check_ASN1_STRING_TABLE_type(ASN1_STRING_TABLE *ptr) { return ptr; } static __attribute__((unused)) inline const OPENSSL_STACK *ossl_check_const_ASN1_STRING_TABLE_sk_type(const struct stack_st_ASN1_STRING_TABLE *sk) { return (const OPENSSL_STACK *)sk; } static __attribute__((unused)) inline OPENSSL_STACK *ossl_check_ASN1_STRING_TABLE_sk_type(struct stack_st_ASN1_STRING_TABLE *sk) { return (OPENSSL_STACK *)sk; } static __attribute__((unused)) inline OPENSSL_sk_compfunc ossl_check_ASN1_STRING_TABLE_compfunc_type(sk_ASN1_STRING_TABLE_compfunc cmp) { return (OPENSSL_sk_compfunc)cmp; } static __attribute__((unused)) inline OPENSSL_sk_copyfunc ossl_check_ASN1_STRING_TABLE_copyfunc_type(sk_ASN1_STRING_TABLE_copyfunc cpy) { return (OPENSSL_sk_copyfunc)cpy; } static __attribute__((unused)) inline OPENSSL_sk_freefunc ossl_check_ASN1_STRING_TABLE_freefunc_type(sk_ASN1_STRING_TABLE_freefunc fr) { return (OPENSSL_sk_freefunc)fr; }
# 274 "include/openssl/asn1.h"
typedef struct ASN1_TEMPLATE_st ASN1_TEMPLATE;
typedef struct ASN1_TLC_st ASN1_TLC;

typedef struct ASN1_VALUE_st ASN1_VALUE;
# 370 "include/openssl/asn1.h"
typedef void *d2i_of_void(void **, const unsigned char **, long);
typedef int i2d_of_void(const void *, unsigned char **);
# 416 "include/openssl/asn1.h"
typedef const ASN1_ITEM *ASN1_ITEM_EXP (void);
# 521 "include/openssl/asn1.h"
struct asn1_type_st {
    int type;
    union {
        char *ptr;
        ASN1_BOOLEAN boolean;
        ASN1_STRING *asn1_string;
        ASN1_OBJECT *object;
        ASN1_INTEGER *integer;
        ASN1_ENUMERATED *enumerated;
        ASN1_BIT_STRING *bit_string;
        ASN1_OCTET_STRING *octet_string;
        ASN1_PRINTABLESTRING *printablestring;
        ASN1_T61STRING *t61string;
        ASN1_IA5STRING *ia5string;
        ASN1_GENERALSTRING *generalstring;
        ASN1_BMPSTRING *bmpstring;
        ASN1_UNIVERSALSTRING *universalstring;
        ASN1_UTCTIME *utctime;
        ASN1_GENERALIZEDTIME *generalizedtime;
        ASN1_VISIBLESTRING *visiblestring;
        ASN1_UTF8STRING *utf8string;




        ASN1_STRING *set;
        ASN1_STRING *sequence;
        ASN1_VALUE *asn1_value;
    } value;
};

struct stack_st_ASN1_TYPE; typedef int (*sk_ASN1_TYPE_compfunc)(const ASN1_TYPE * const *a, const ASN1_TYPE *const *b); typedef void (*sk_ASN1_TYPE_freefunc)(ASN1_TYPE *a); typedef ASN1_TYPE * (*sk_ASN1_TYPE_copyfunc)(const ASN1_TYPE *a); static __attribute__((unused)) inline ASN1_TYPE *ossl_check_ASN1_TYPE_type(ASN1_TYPE *ptr) { return ptr; } static __attribute__((unused)) inline const OPENSSL_STACK *ossl_check_const_ASN1_TYPE_sk_type(const struct stack_st_ASN1_TYPE *sk) { return (const OPENSSL_STACK *)sk; } static __attribute__((unused)) inline OPENSSL_STACK *ossl_check_ASN1_TYPE_sk_type(struct stack_st_ASN1_TYPE *sk) { return (OPENSSL_STACK *)sk; } static __attribute__((unused)) inline OPENSSL_sk_compfunc ossl_check_ASN1_TYPE_compfunc_type(sk_ASN1_TYPE_compfunc cmp) { return (OPENSSL_sk_compfunc)cmp; } static __attribute__((unused)) inline OPENSSL_sk_copyfunc ossl_check_ASN1_TYPE_copyfunc_type(sk_ASN1_TYPE_copyfunc cpy) { return (OPENSSL_sk_copyfunc)cpy; } static __attribute__((unused)) inline OPENSSL_sk_freefunc ossl_check_ASN1_TYPE_freefunc_type(sk_ASN1_TYPE_freefunc fr) { return (OPENSSL_sk_freefunc)fr; }
# 580 "include/openssl/asn1.h"
typedef struct stack_st_ASN1_TYPE ASN1_SEQUENCE_ANY;

extern ASN1_SEQUENCE_ANY *d2i_ASN1_SEQUENCE_ANY(ASN1_SEQUENCE_ANY **a, const unsigned char **in, long len); extern int i2d_ASN1_SEQUENCE_ANY(const ASN1_SEQUENCE_ANY *a, unsigned char **out); extern const ASN1_ITEM * ASN1_SEQUENCE_ANY_it(void);
extern ASN1_SEQUENCE_ANY *d2i_ASN1_SET_ANY(ASN1_SEQUENCE_ANY **a, const unsigned char **in, long len); extern int i2d_ASN1_SET_ANY(const ASN1_SEQUENCE_ANY *a, unsigned char **out); extern const ASN1_ITEM * ASN1_SET_ANY_it(void);


typedef struct BIT_STRING_BITNAME_st {
    int bitnum;
    const char *lname;
    const char *sname;
} BIT_STRING_BITNAME;
# 621 "include/openssl/asn1.h"
extern ASN1_TYPE *ASN1_TYPE_new(void); extern void ASN1_TYPE_free(ASN1_TYPE *a);
extern ASN1_TYPE *d2i_ASN1_TYPE(ASN1_TYPE **a, const unsigned char **in, long len); extern int i2d_ASN1_TYPE(const ASN1_TYPE *a, unsigned char **out); extern const ASN1_ITEM * ASN1_ANY_it(void);

int ASN1_TYPE_get(const ASN1_TYPE *a);
void ASN1_TYPE_set(ASN1_TYPE *a, int type, void *value);
int ASN1_TYPE_set1(ASN1_TYPE *a, int type, const void *value);
int ASN1_TYPE_cmp(const ASN1_TYPE *a, const ASN1_TYPE *b);

ASN1_TYPE *ASN1_TYPE_pack_sequence(const ASN1_ITEM *it, void *s, ASN1_TYPE **t);
void *ASN1_TYPE_unpack_sequence(const ASN1_ITEM *it, const ASN1_TYPE *t);

struct stack_st_ASN1_OBJECT; typedef int (*sk_ASN1_OBJECT_compfunc)(const ASN1_OBJECT * const *a, const ASN1_OBJECT *const *b); typedef void (*sk_ASN1_OBJECT_freefunc)(ASN1_OBJECT *a); typedef ASN1_OBJECT * (*sk_ASN1_OBJECT_copyfunc)(const ASN1_OBJECT *a); static __attribute__((unused)) inline ASN1_OBJECT *ossl_check_ASN1_OBJECT_type(ASN1_OBJECT *ptr) { return ptr; } static __attribute__((unused)) inline const OPENSSL_STACK *ossl_check_const_ASN1_OBJECT_sk_type(const struct stack_st_ASN1_OBJECT *sk) { return (const OPENSSL_STACK *)sk; } static __attribute__((unused)) inline OPENSSL_STACK *ossl_check_ASN1_OBJECT_sk_type(struct stack_st_ASN1_OBJECT *sk) { return (OPENSSL_STACK *)sk; } static __attribute__((unused)) inline OPENSSL_sk_compfunc ossl_check_ASN1_OBJECT_compfunc_type(sk_ASN1_OBJECT_compfunc cmp) { return (OPENSSL_sk_compfunc)cmp; } static __attribute__((unused)) inline OPENSSL_sk_copyfunc ossl_check_ASN1_OBJECT_copyfunc_type(sk_ASN1_OBJECT_copyfunc cpy) { return (OPENSSL_sk_copyfunc)cpy; } static __attribute__((unused)) inline OPENSSL_sk_freefunc ossl_check_ASN1_OBJECT_freefunc_type(sk_ASN1_OBJECT_freefunc fr) { return (OPENSSL_sk_freefunc)fr; }
# 660 "include/openssl/asn1.h"
extern ASN1_OBJECT *ASN1_OBJECT_new(void); extern void ASN1_OBJECT_free(ASN1_OBJECT *a); extern ASN1_OBJECT *d2i_ASN1_OBJECT(ASN1_OBJECT **a, const unsigned char **in, long len); extern int i2d_ASN1_OBJECT(const ASN1_OBJECT *a, unsigned char **out); extern const ASN1_ITEM * ASN1_OBJECT_it(void);

ASN1_STRING *ASN1_STRING_new(void);
void ASN1_STRING_free(ASN1_STRING *a);
void ASN1_STRING_clear_free(ASN1_STRING *a);
int ASN1_STRING_copy(ASN1_STRING *dst, const ASN1_STRING *str);
extern ASN1_STRING *ASN1_STRING_dup(const ASN1_STRING *a);
ASN1_STRING *ASN1_STRING_type_new(int type);
int ASN1_STRING_cmp(const ASN1_STRING *a, const ASN1_STRING *b);




int ASN1_STRING_set(ASN1_STRING *str, const void *data, int len);
void ASN1_STRING_set0(ASN1_STRING *str, void *data, int len);
int ASN1_STRING_length(const ASN1_STRING *x);

extern void ASN1_STRING_length_set(ASN1_STRING *x, int n);

int ASN1_STRING_type(const ASN1_STRING *x);

extern unsigned char *ASN1_STRING_data(ASN1_STRING *x);

const unsigned char *ASN1_STRING_get0_data(const ASN1_STRING *x);

extern ASN1_BIT_STRING *ASN1_BIT_STRING_new(void); extern void ASN1_BIT_STRING_free(ASN1_BIT_STRING *a); extern ASN1_BIT_STRING *d2i_ASN1_BIT_STRING(ASN1_BIT_STRING **a, const unsigned char **in, long len); extern int i2d_ASN1_BIT_STRING(const ASN1_BIT_STRING *a, unsigned char **out); extern const ASN1_ITEM * ASN1_BIT_STRING_it(void);
int ASN1_BIT_STRING_set(ASN1_BIT_STRING *a, unsigned char *d, int length);
int ASN1_BIT_STRING_set_bit(ASN1_BIT_STRING *a, int n, int value);
int ASN1_BIT_STRING_get_bit(const ASN1_BIT_STRING *a, int n);
int ASN1_BIT_STRING_check(const ASN1_BIT_STRING *a,
                          const unsigned char *flags, int flags_len);

int ASN1_BIT_STRING_name_print(BIO *out, ASN1_BIT_STRING *bs,
                               BIT_STRING_BITNAME *tbl, int indent);
int ASN1_BIT_STRING_num_asc(const char *name, BIT_STRING_BITNAME *tbl);
int ASN1_BIT_STRING_set_asc(ASN1_BIT_STRING *bs, const char *name, int value,
                            BIT_STRING_BITNAME *tbl);

struct stack_st_ASN1_INTEGER; typedef int (*sk_ASN1_INTEGER_compfunc)(const ASN1_INTEGER * const *a, const ASN1_INTEGER *const *b); typedef void (*sk_ASN1_INTEGER_freefunc)(ASN1_INTEGER *a); typedef ASN1_INTEGER * (*sk_ASN1_INTEGER_copyfunc)(const ASN1_INTEGER *a); static __attribute__((unused)) inline ASN1_INTEGER *ossl_check_ASN1_INTEGER_type(ASN1_INTEGER *ptr) { return ptr; } static __attribute__((unused)) inline const OPENSSL_STACK *ossl_check_const_ASN1_INTEGER_sk_type(const struct stack_st_ASN1_INTEGER *sk) { return (const OPENSSL_STACK *)sk; } static __attribute__((unused)) inline OPENSSL_STACK *ossl_check_ASN1_INTEGER_sk_type(struct stack_st_ASN1_INTEGER *sk) { return (OPENSSL_STACK *)sk; } static __attribute__((unused)) inline OPENSSL_sk_compfunc ossl_check_ASN1_INTEGER_compfunc_type(sk_ASN1_INTEGER_compfunc cmp) { return (OPENSSL_sk_compfunc)cmp; } static __attribute__((unused)) inline OPENSSL_sk_copyfunc ossl_check_ASN1_INTEGER_copyfunc_type(sk_ASN1_INTEGER_copyfunc cpy) { return (OPENSSL_sk_copyfunc)cpy; } static __attribute__((unused)) inline OPENSSL_sk_freefunc ossl_check_ASN1_INTEGER_freefunc_type(sk_ASN1_INTEGER_freefunc fr) { return (OPENSSL_sk_freefunc)fr; }
# 727 "include/openssl/asn1.h"
extern ASN1_INTEGER *ASN1_INTEGER_new(void); extern void ASN1_INTEGER_free(ASN1_INTEGER *a); extern ASN1_INTEGER *d2i_ASN1_INTEGER(ASN1_INTEGER **a, const unsigned char **in, long len); extern int i2d_ASN1_INTEGER(const ASN1_INTEGER *a, unsigned char **out); extern const ASN1_ITEM * ASN1_INTEGER_it(void);
ASN1_INTEGER *d2i_ASN1_UINTEGER(ASN1_INTEGER **a, const unsigned char **pp,
                                long length);
extern ASN1_INTEGER *ASN1_INTEGER_dup(const ASN1_INTEGER *a);
int ASN1_INTEGER_cmp(const ASN1_INTEGER *x, const ASN1_INTEGER *y);

extern ASN1_ENUMERATED *ASN1_ENUMERATED_new(void); extern void ASN1_ENUMERATED_free(ASN1_ENUMERATED *a); extern ASN1_ENUMERATED *d2i_ASN1_ENUMERATED(ASN1_ENUMERATED **a, const unsigned char **in, long len); extern int i2d_ASN1_ENUMERATED(const ASN1_ENUMERATED *a, unsigned char **out); extern const ASN1_ITEM * ASN1_ENUMERATED_it(void);

int ASN1_UTCTIME_check(const ASN1_UTCTIME *a);
ASN1_UTCTIME *ASN1_UTCTIME_set(ASN1_UTCTIME *s, time_t t);
ASN1_UTCTIME *ASN1_UTCTIME_adj(ASN1_UTCTIME *s, time_t t,
                               int offset_day, long offset_sec);
int ASN1_UTCTIME_set_string(ASN1_UTCTIME *s, const char *str);
int ASN1_UTCTIME_cmp_time_t(const ASN1_UTCTIME *s, time_t t);

int ASN1_GENERALIZEDTIME_check(const ASN1_GENERALIZEDTIME *a);
ASN1_GENERALIZEDTIME *ASN1_GENERALIZEDTIME_set(ASN1_GENERALIZEDTIME *s,
                                               time_t t);
ASN1_GENERALIZEDTIME *ASN1_GENERALIZEDTIME_adj(ASN1_GENERALIZEDTIME *s,
                                               time_t t, int offset_day,
                                               long offset_sec);
int ASN1_GENERALIZEDTIME_set_string(ASN1_GENERALIZEDTIME *s, const char *str);

int ASN1_TIME_diff(int *pday, int *psec,
                   const ASN1_TIME *from, const ASN1_TIME *to);

extern ASN1_OCTET_STRING *ASN1_OCTET_STRING_new(void); extern void ASN1_OCTET_STRING_free(ASN1_OCTET_STRING *a); extern ASN1_OCTET_STRING *d2i_ASN1_OCTET_STRING(ASN1_OCTET_STRING **a, const unsigned char **in, long len); extern int i2d_ASN1_OCTET_STRING(const ASN1_OCTET_STRING *a, unsigned char **out); extern const ASN1_ITEM * ASN1_OCTET_STRING_it(void);
extern ASN1_OCTET_STRING *ASN1_OCTET_STRING_dup(const ASN1_OCTET_STRING *a);
int ASN1_OCTET_STRING_cmp(const ASN1_OCTET_STRING *a,
                          const ASN1_OCTET_STRING *b);
int ASN1_OCTET_STRING_set(ASN1_OCTET_STRING *str, const unsigned char *data,
                          int len);

struct stack_st_ASN1_UTF8STRING; typedef int (*sk_ASN1_UTF8STRING_compfunc)(const ASN1_UTF8STRING * const *a, const ASN1_UTF8STRING *const *b); typedef void (*sk_ASN1_UTF8STRING_freefunc)(ASN1_UTF8STRING *a); typedef ASN1_UTF8STRING * (*sk_ASN1_UTF8STRING_copyfunc)(const ASN1_UTF8STRING *a); static __attribute__((unused)) inline ASN1_UTF8STRING *ossl_check_ASN1_UTF8STRING_type(ASN1_UTF8STRING *ptr) { return ptr; } static __attribute__((unused)) inline const OPENSSL_STACK *ossl_check_const_ASN1_UTF8STRING_sk_type(const struct stack_st_ASN1_UTF8STRING *sk) { return (const OPENSSL_STACK *)sk; } static __attribute__((unused)) inline OPENSSL_STACK *ossl_check_ASN1_UTF8STRING_sk_type(struct stack_st_ASN1_UTF8STRING *sk) { return (OPENSSL_STACK *)sk; } static __attribute__((unused)) inline OPENSSL_sk_compfunc ossl_check_ASN1_UTF8STRING_compfunc_type(sk_ASN1_UTF8STRING_compfunc cmp) { return (OPENSSL_sk_compfunc)cmp; } static __attribute__((unused)) inline OPENSSL_sk_copyfunc ossl_check_ASN1_UTF8STRING_copyfunc_type(sk_ASN1_UTF8STRING_copyfunc cpy) { return (OPENSSL_sk_copyfunc)cpy; } static __attribute__((unused)) inline OPENSSL_sk_freefunc ossl_check_ASN1_UTF8STRING_freefunc_type(sk_ASN1_UTF8STRING_freefunc fr) { return (OPENSSL_sk_freefunc)fr; }
# 788 "include/openssl/asn1.h"
extern ASN1_VISIBLESTRING *ASN1_VISIBLESTRING_new(void); extern void ASN1_VISIBLESTRING_free(ASN1_VISIBLESTRING *a); extern ASN1_VISIBLESTRING *d2i_ASN1_VISIBLESTRING(ASN1_VISIBLESTRING **a, const unsigned char **in, long len); extern int i2d_ASN1_VISIBLESTRING(const ASN1_VISIBLESTRING *a, unsigned char **out); extern const ASN1_ITEM * ASN1_VISIBLESTRING_it(void);
extern ASN1_UNIVERSALSTRING *ASN1_UNIVERSALSTRING_new(void); extern void ASN1_UNIVERSALSTRING_free(ASN1_UNIVERSALSTRING *a); extern ASN1_UNIVERSALSTRING *d2i_ASN1_UNIVERSALSTRING(ASN1_UNIVERSALSTRING **a, const unsigned char **in, long len); extern int i2d_ASN1_UNIVERSALSTRING(const ASN1_UNIVERSALSTRING *a, unsigned char **out); extern const ASN1_ITEM * ASN1_UNIVERSALSTRING_it(void);
extern ASN1_UTF8STRING *ASN1_UTF8STRING_new(void); extern void ASN1_UTF8STRING_free(ASN1_UTF8STRING *a); extern ASN1_UTF8STRING *d2i_ASN1_UTF8STRING(ASN1_UTF8STRING **a, const unsigned char **in, long len); extern int i2d_ASN1_UTF8STRING(const ASN1_UTF8STRING *a, unsigned char **out); extern const ASN1_ITEM * ASN1_UTF8STRING_it(void);
extern ASN1_NULL *ASN1_NULL_new(void); extern void ASN1_NULL_free(ASN1_NULL *a); extern ASN1_NULL *d2i_ASN1_NULL(ASN1_NULL **a, const unsigned char **in, long len); extern int i2d_ASN1_NULL(const ASN1_NULL *a, unsigned char **out); extern const ASN1_ITEM * ASN1_NULL_it(void);
extern ASN1_BMPSTRING *ASN1_BMPSTRING_new(void); extern void ASN1_BMPSTRING_free(ASN1_BMPSTRING *a); extern ASN1_BMPSTRING *d2i_ASN1_BMPSTRING(ASN1_BMPSTRING **a, const unsigned char **in, long len); extern int i2d_ASN1_BMPSTRING(const ASN1_BMPSTRING *a, unsigned char **out); extern const ASN1_ITEM * ASN1_BMPSTRING_it(void);

int UTF8_getc(const unsigned char *str, int len, unsigned long *val);
int UTF8_putc(unsigned char *str, int len, unsigned long value);

struct stack_st_ASN1_GENERALSTRING; typedef int (*sk_ASN1_GENERALSTRING_compfunc)(const ASN1_GENERALSTRING * const *a, const ASN1_GENERALSTRING *const *b); typedef void (*sk_ASN1_GENERALSTRING_freefunc)(ASN1_GENERALSTRING *a); typedef ASN1_GENERALSTRING * (*sk_ASN1_GENERALSTRING_copyfunc)(const ASN1_GENERALSTRING *a); static __attribute__((unused)) inline ASN1_GENERALSTRING *ossl_check_ASN1_GENERALSTRING_type(ASN1_GENERALSTRING *ptr) { return ptr; } static __attribute__((unused)) inline const OPENSSL_STACK *ossl_check_const_ASN1_GENERALSTRING_sk_type(const struct stack_st_ASN1_GENERALSTRING *sk) { return (const OPENSSL_STACK *)sk; } static __attribute__((unused)) inline OPENSSL_STACK *ossl_check_ASN1_GENERALSTRING_sk_type(struct stack_st_ASN1_GENERALSTRING *sk) { return (OPENSSL_STACK *)sk; } static __attribute__((unused)) inline OPENSSL_sk_compfunc ossl_check_ASN1_GENERALSTRING_compfunc_type(sk_ASN1_GENERALSTRING_compfunc cmp) { return (OPENSSL_sk_compfunc)cmp; } static __attribute__((unused)) inline OPENSSL_sk_copyfunc ossl_check_ASN1_GENERALSTRING_copyfunc_type(sk_ASN1_GENERALSTRING_copyfunc cpy) { return (OPENSSL_sk_copyfunc)cpy; } static __attribute__((unused)) inline OPENSSL_sk_freefunc ossl_check_ASN1_GENERALSTRING_freefunc_type(sk_ASN1_GENERALSTRING_freefunc fr) { return (OPENSSL_sk_freefunc)fr; }
# 825 "include/openssl/asn1.h"
extern ASN1_STRING *ASN1_PRINTABLE_new(void); extern void ASN1_PRINTABLE_free(ASN1_STRING *a); extern ASN1_STRING *d2i_ASN1_PRINTABLE(ASN1_STRING **a, const unsigned char **in, long len); extern int i2d_ASN1_PRINTABLE(const ASN1_STRING *a, unsigned char **out); extern const ASN1_ITEM * ASN1_PRINTABLE_it(void);

extern ASN1_STRING *DIRECTORYSTRING_new(void); extern void DIRECTORYSTRING_free(ASN1_STRING *a); extern ASN1_STRING *d2i_DIRECTORYSTRING(ASN1_STRING **a, const unsigned char **in, long len); extern int i2d_DIRECTORYSTRING(const ASN1_STRING *a, unsigned char **out); extern const ASN1_ITEM * DIRECTORYSTRING_it(void);
extern ASN1_STRING *DISPLAYTEXT_new(void); extern void DISPLAYTEXT_free(ASN1_STRING *a); extern ASN1_STRING *d2i_DISPLAYTEXT(ASN1_STRING **a, const unsigned char **in, long len); extern int i2d_DISPLAYTEXT(const ASN1_STRING *a, unsigned char **out); extern const ASN1_ITEM * DISPLAYTEXT_it(void);
extern ASN1_PRINTABLESTRING *ASN1_PRINTABLESTRING_new(void); extern void ASN1_PRINTABLESTRING_free(ASN1_PRINTABLESTRING *a); extern ASN1_PRINTABLESTRING *d2i_ASN1_PRINTABLESTRING(ASN1_PRINTABLESTRING **a, const unsigned char **in, long len); extern int i2d_ASN1_PRINTABLESTRING(const ASN1_PRINTABLESTRING *a, unsigned char **out); extern const ASN1_ITEM * ASN1_PRINTABLESTRING_it(void);
extern ASN1_T61STRING *ASN1_T61STRING_new(void); extern void ASN1_T61STRING_free(ASN1_T61STRING *a); extern ASN1_T61STRING *d2i_ASN1_T61STRING(ASN1_T61STRING **a, const unsigned char **in, long len); extern int i2d_ASN1_T61STRING(const ASN1_T61STRING *a, unsigned char **out); extern const ASN1_ITEM * ASN1_T61STRING_it(void);
extern ASN1_IA5STRING *ASN1_IA5STRING_new(void); extern void ASN1_IA5STRING_free(ASN1_IA5STRING *a); extern ASN1_IA5STRING *d2i_ASN1_IA5STRING(ASN1_IA5STRING **a, const unsigned char **in, long len); extern int i2d_ASN1_IA5STRING(const ASN1_IA5STRING *a, unsigned char **out); extern const ASN1_ITEM * ASN1_IA5STRING_it(void);
extern ASN1_GENERALSTRING *ASN1_GENERALSTRING_new(void); extern void ASN1_GENERALSTRING_free(ASN1_GENERALSTRING *a); extern ASN1_GENERALSTRING *d2i_ASN1_GENERALSTRING(ASN1_GENERALSTRING **a, const unsigned char **in, long len); extern int i2d_ASN1_GENERALSTRING(const ASN1_GENERALSTRING *a, unsigned char **out); extern const ASN1_ITEM * ASN1_GENERALSTRING_it(void);
extern ASN1_UTCTIME *ASN1_UTCTIME_new(void); extern void ASN1_UTCTIME_free(ASN1_UTCTIME *a); extern ASN1_UTCTIME *d2i_ASN1_UTCTIME(ASN1_UTCTIME **a, const unsigned char **in, long len); extern int i2d_ASN1_UTCTIME(const ASN1_UTCTIME *a, unsigned char **out); extern const ASN1_ITEM * ASN1_UTCTIME_it(void);
extern ASN1_GENERALIZEDTIME *ASN1_GENERALIZEDTIME_new(void); extern void ASN1_GENERALIZEDTIME_free(ASN1_GENERALIZEDTIME *a); extern ASN1_GENERALIZEDTIME *d2i_ASN1_GENERALIZEDTIME(ASN1_GENERALIZEDTIME **a, const unsigned char **in, long len); extern int i2d_ASN1_GENERALIZEDTIME(const ASN1_GENERALIZEDTIME *a, unsigned char **out); extern const ASN1_ITEM * ASN1_GENERALIZEDTIME_it(void);
extern ASN1_TIME *ASN1_TIME_new(void); extern void ASN1_TIME_free(ASN1_TIME *a); extern ASN1_TIME *d2i_ASN1_TIME(ASN1_TIME **a, const unsigned char **in, long len); extern int i2d_ASN1_TIME(const ASN1_TIME *a, unsigned char **out); extern const ASN1_ITEM * ASN1_TIME_it(void);

extern ASN1_TIME *ASN1_TIME_dup(const ASN1_TIME *a);
extern ASN1_UTCTIME *ASN1_UTCTIME_dup(const ASN1_UTCTIME *a);
extern ASN1_GENERALIZEDTIME *ASN1_GENERALIZEDTIME_dup(const ASN1_GENERALIZEDTIME *a);

extern const ASN1_ITEM * ASN1_OCTET_STRING_NDEF_it(void);

ASN1_TIME *ASN1_TIME_set(ASN1_TIME *s, time_t t);
ASN1_TIME *ASN1_TIME_adj(ASN1_TIME *s, time_t t,
                         int offset_day, long offset_sec);
int ASN1_TIME_check(const ASN1_TIME *t);
ASN1_GENERALIZEDTIME *ASN1_TIME_to_generalizedtime(const ASN1_TIME *t,
                                                   ASN1_GENERALIZEDTIME **out);
int ASN1_TIME_set_string(ASN1_TIME *s, const char *str);
int ASN1_TIME_set_string_X509(ASN1_TIME *s, const char *str);
int ASN1_TIME_to_tm(const ASN1_TIME *s, struct tm *tm);
int ASN1_TIME_normalize(ASN1_TIME *s);
int ASN1_TIME_cmp_time_t(const ASN1_TIME *s, time_t t);
int ASN1_TIME_compare(const ASN1_TIME *a, const ASN1_TIME *b);

int i2a_ASN1_INTEGER(BIO *bp, const ASN1_INTEGER *a);
int a2i_ASN1_INTEGER(BIO *bp, ASN1_INTEGER *bs, char *buf, int size);
int i2a_ASN1_ENUMERATED(BIO *bp, const ASN1_ENUMERATED *a);
int a2i_ASN1_ENUMERATED(BIO *bp, ASN1_ENUMERATED *bs, char *buf, int size);
int i2a_ASN1_OBJECT(BIO *bp, const ASN1_OBJECT *a);
int a2i_ASN1_STRING(BIO *bp, ASN1_STRING *bs, char *buf, int size);
int i2a_ASN1_STRING(BIO *bp, const ASN1_STRING *a, int type);
int i2t_ASN1_OBJECT(char *buf, int buf_len, const ASN1_OBJECT *a);

int a2d_ASN1_OBJECT(unsigned char *out, int olen, const char *buf, int num);
ASN1_OBJECT *ASN1_OBJECT_create(int nid, unsigned char *data, int len,
                                const char *sn, const char *ln);

int ASN1_INTEGER_get_int64(int64_t *pr, const ASN1_INTEGER *a);
int ASN1_INTEGER_set_int64(ASN1_INTEGER *a, int64_t r);
int ASN1_INTEGER_get_uint64(uint64_t *pr, const ASN1_INTEGER *a);
int ASN1_INTEGER_set_uint64(ASN1_INTEGER *a, uint64_t r);

int ASN1_INTEGER_set(ASN1_INTEGER *a, long v);
long ASN1_INTEGER_get(const ASN1_INTEGER *a);
ASN1_INTEGER *BN_to_ASN1_INTEGER(const BIGNUM *bn, ASN1_INTEGER *ai);
BIGNUM *ASN1_INTEGER_to_BN(const ASN1_INTEGER *ai, BIGNUM *bn);

int ASN1_ENUMERATED_get_int64(int64_t *pr, const ASN1_ENUMERATED *a);
int ASN1_ENUMERATED_set_int64(ASN1_ENUMERATED *a, int64_t r);


int ASN1_ENUMERATED_set(ASN1_ENUMERATED *a, long v);
long ASN1_ENUMERATED_get(const ASN1_ENUMERATED *a);
ASN1_ENUMERATED *BN_to_ASN1_ENUMERATED(const BIGNUM *bn, ASN1_ENUMERATED *ai);
BIGNUM *ASN1_ENUMERATED_to_BN(const ASN1_ENUMERATED *ai, BIGNUM *bn);



int ASN1_PRINTABLE_type(const unsigned char *s, int max);

unsigned long ASN1_tag2bit(int tag);


int ASN1_get_object(const unsigned char **pp, long *plength, int *ptag,
                    int *pclass, long omax);
int ASN1_check_infinite_end(unsigned char **p, long len);
int ASN1_const_check_infinite_end(const unsigned char **p, long len);
void ASN1_put_object(unsigned char **pp, int constructed, int length,
                     int tag, int xclass);
int ASN1_put_eoc(unsigned char **pp);
int ASN1_object_size(int constructed, int length, int tag);


void *ASN1_dup(i2d_of_void *i2d, d2i_of_void *d2i, const void *x);






void *ASN1_item_dup(const ASN1_ITEM *it, const void *x);
int ASN1_item_sign_ex(const ASN1_ITEM *it, X509_ALGOR *algor1,
                      X509_ALGOR *algor2, ASN1_BIT_STRING *signature,
                      const void *data, const ASN1_OCTET_STRING *id,
                      EVP_PKEY *pkey, const EVP_MD *md, OSSL_LIB_CTX *libctx,
                      const char *propq);
int ASN1_item_verify_ex(const ASN1_ITEM *it, const X509_ALGOR *alg,
                        const ASN1_BIT_STRING *signature, const void *data,
                        const ASN1_OCTET_STRING *id, EVP_PKEY *pkey,
                        OSSL_LIB_CTX *libctx, const char *propq);
# 930 "include/openssl/asn1.h"
void *ASN1_d2i_fp(void *(*xnew) (void), d2i_of_void *d2i, FILE *in, void **x);







void *ASN1_item_d2i_fp_ex(const ASN1_ITEM *it, FILE *in, void *x,
                          OSSL_LIB_CTX *libctx, const char *propq);
void *ASN1_item_d2i_fp(const ASN1_ITEM *it, FILE *in, void *x);
int ASN1_i2d_fp(i2d_of_void *i2d, FILE *out, const void *x);






int ASN1_item_i2d_fp(const ASN1_ITEM *it, FILE *out, const void *x);
int ASN1_STRING_print_ex_fp(FILE *fp, const ASN1_STRING *str, unsigned long flags);


int ASN1_STRING_to_UTF8(unsigned char **out, const ASN1_STRING *in);

void *ASN1_d2i_bio(void *(*xnew) (void), d2i_of_void *d2i, BIO *in, void **x);







void *ASN1_item_d2i_bio_ex(const ASN1_ITEM *it, BIO *in, void *pval,
                           OSSL_LIB_CTX *libctx, const char *propq);
void *ASN1_item_d2i_bio(const ASN1_ITEM *it, BIO *in, void *pval);
int ASN1_i2d_bio(i2d_of_void *i2d, BIO *out, const void *x);






int ASN1_item_i2d_bio(const ASN1_ITEM *it, BIO *out, const void *x);
BIO *ASN1_item_i2d_mem_bio(const ASN1_ITEM *it, const ASN1_VALUE *val);
int ASN1_UTCTIME_print(BIO *fp, const ASN1_UTCTIME *a);
int ASN1_GENERALIZEDTIME_print(BIO *fp, const ASN1_GENERALIZEDTIME *a);
int ASN1_TIME_print(BIO *bp, const ASN1_TIME *tm);
int ASN1_TIME_print_ex(BIO *bp, const ASN1_TIME *tm, unsigned long flags);
int ASN1_STRING_print(BIO *bp, const ASN1_STRING *v);
int ASN1_STRING_print_ex(BIO *out, const ASN1_STRING *str, unsigned long flags);
int ASN1_buf_print(BIO *bp, const unsigned char *buf, size_t buflen, int off);
int ASN1_bn_print(BIO *bp, const char *number, const BIGNUM *num,
                  unsigned char *buf, int off);
int ASN1_parse(BIO *bp, const unsigned char *pp, long len, int indent);
int ASN1_parse_dump(BIO *bp, const unsigned char *pp, long len, int indent,
                    int dump);
const char *ASN1_tag2str(int tag);



int ASN1_UNIVERSALSTRING_to_string(ASN1_UNIVERSALSTRING *s);

int ASN1_TYPE_set_octetstring(ASN1_TYPE *a, unsigned char *data, int len);
int ASN1_TYPE_get_octetstring(const ASN1_TYPE *a, unsigned char *data, int max_len);
int ASN1_TYPE_set_int_octetstring(ASN1_TYPE *a, long num,
                                  unsigned char *data, int len);
int ASN1_TYPE_get_int_octetstring(const ASN1_TYPE *a, long *num,
                                  unsigned char *data, int max_len);

void *ASN1_item_unpack(const ASN1_STRING *oct, const ASN1_ITEM *it);

ASN1_STRING *ASN1_item_pack(void *obj, const ASN1_ITEM *it,
                            ASN1_OCTET_STRING **oct);

void ASN1_STRING_set_default_mask(unsigned long mask);
int ASN1_STRING_set_default_mask_asc(const char *p);
unsigned long ASN1_STRING_get_default_mask(void);
int ASN1_mbstring_copy(ASN1_STRING **out, const unsigned char *in, int len,
                       int inform, unsigned long mask);
int ASN1_mbstring_ncopy(ASN1_STRING **out, const unsigned char *in, int len,
                        int inform, unsigned long mask,
                        long minsize, long maxsize);

ASN1_STRING *ASN1_STRING_set_by_NID(ASN1_STRING **out,
                                    const unsigned char *in, int inlen,
                                    int inform, int nid);
ASN1_STRING_TABLE *ASN1_STRING_TABLE_get(int nid);
int ASN1_STRING_TABLE_add(int, long, long, unsigned long, unsigned long);
void ASN1_STRING_TABLE_cleanup(void);




ASN1_VALUE *ASN1_item_new(const ASN1_ITEM *it);
ASN1_VALUE *ASN1_item_new_ex(const ASN1_ITEM *it, OSSL_LIB_CTX *libctx,
                             const char *propq);
void ASN1_item_free(ASN1_VALUE *val, const ASN1_ITEM *it);
ASN1_VALUE *ASN1_item_d2i_ex(ASN1_VALUE **val, const unsigned char **in,
                             long len, const ASN1_ITEM *it,
                             OSSL_LIB_CTX *libctx, const char *propq);
ASN1_VALUE *ASN1_item_d2i(ASN1_VALUE **val, const unsigned char **in,
                          long len, const ASN1_ITEM *it);
int ASN1_item_i2d(const ASN1_VALUE *val, unsigned char **out, const ASN1_ITEM *it);
int ASN1_item_ndef_i2d(const ASN1_VALUE *val, unsigned char **out,
                       const ASN1_ITEM *it);

void ASN1_add_oid_module(void);
void ASN1_add_stable_module(void);

ASN1_TYPE *ASN1_generate_nconf(const char *str, CONF *nconf);
ASN1_TYPE *ASN1_generate_v3(const char *str, X509V3_CTX *cnf);
int ASN1_str2mask(const char *str, unsigned long *pmask);
# 1064 "include/openssl/asn1.h"
int ASN1_item_print(BIO *out, const ASN1_VALUE *ifld, int indent,
                    const ASN1_ITEM *it, const ASN1_PCTX *pctx);
ASN1_PCTX *ASN1_PCTX_new(void);
void ASN1_PCTX_free(ASN1_PCTX *p);
unsigned long ASN1_PCTX_get_flags(const ASN1_PCTX *p);
void ASN1_PCTX_set_flags(ASN1_PCTX *p, unsigned long flags);
unsigned long ASN1_PCTX_get_nm_flags(const ASN1_PCTX *p);
void ASN1_PCTX_set_nm_flags(ASN1_PCTX *p, unsigned long flags);
unsigned long ASN1_PCTX_get_cert_flags(const ASN1_PCTX *p);
void ASN1_PCTX_set_cert_flags(ASN1_PCTX *p, unsigned long flags);
unsigned long ASN1_PCTX_get_oid_flags(const ASN1_PCTX *p);
void ASN1_PCTX_set_oid_flags(ASN1_PCTX *p, unsigned long flags);
unsigned long ASN1_PCTX_get_str_flags(const ASN1_PCTX *p);
void ASN1_PCTX_set_str_flags(ASN1_PCTX *p, unsigned long flags);

ASN1_SCTX *ASN1_SCTX_new(int (*scan_cb) (ASN1_SCTX *ctx));
void ASN1_SCTX_free(ASN1_SCTX *p);
const ASN1_ITEM *ASN1_SCTX_get_item(ASN1_SCTX *p);
const ASN1_TEMPLATE *ASN1_SCTX_get_template(ASN1_SCTX *p);
unsigned long ASN1_SCTX_get_flags(ASN1_SCTX *p);
void ASN1_SCTX_set_app_data(ASN1_SCTX *p, void *data);
void *ASN1_SCTX_get_app_data(ASN1_SCTX *p);

const BIO_METHOD *BIO_f_asn1(void);


BIO *BIO_new_NDEF(BIO *out, ASN1_VALUE *val, const ASN1_ITEM *it);

int i2d_ASN1_bio_stream(BIO *out, ASN1_VALUE *val, BIO *in, int flags,
                        const ASN1_ITEM *it);
int PEM_write_bio_ASN1_stream(BIO *out, ASN1_VALUE *val, BIO *in, int flags,
                              const char *hdr, const ASN1_ITEM *it);

int SMIME_write_ASN1(BIO *bio, ASN1_VALUE *val, BIO *data, int flags,
                     int ctype_nid, int econt_nid,
                     struct stack_st_X509_ALGOR *mdalgs, const ASN1_ITEM *it);
int SMIME_write_ASN1_ex(BIO *bio, ASN1_VALUE *val, BIO *data, int flags,
                        int ctype_nid, int econt_nid,
                        struct stack_st_X509_ALGOR *mdalgs, const ASN1_ITEM *it,
                        OSSL_LIB_CTX *libctx, const char *propq);
ASN1_VALUE *SMIME_read_ASN1(BIO *bio, BIO **bcont, const ASN1_ITEM *it);
ASN1_VALUE *SMIME_read_ASN1_ex(BIO *bio, int flags, BIO **bcont,
                               const ASN1_ITEM *it, ASN1_VALUE **x,
                               OSSL_LIB_CTX *libctx, const char *propq);
int SMIME_crlf_copy(BIO *in, BIO *out, int flags);
int SMIME_text(BIO *in, BIO *out);

const ASN1_ITEM *ASN1_ITEM_lookup(const char *name);
const ASN1_ITEM *ASN1_ITEM_get(size_t i);
# 28 "include/internal/cryptlib.h" 2
# 1 "include/openssl/err.h" 1
# 14 "include/openssl/err.h"
        
# 30 "include/openssl/err.h"
# 1 "include/openssl/lhash.h" 1
# 18 "include/openssl/lhash.h"
        
# 32 "include/openssl/lhash.h"
typedef struct lhash_node_st OPENSSL_LH_NODE;
typedef int (*OPENSSL_LH_COMPFUNC) (const void *, const void *);
typedef unsigned long (*OPENSSL_LH_HASHFUNC) (const void *);
typedef void (*OPENSSL_LH_DOALL_FUNC) (void *);
typedef void (*OPENSSL_LH_DOALL_FUNCARG) (void *, void *);
typedef struct lhash_st OPENSSL_LHASH;
# 80 "include/openssl/lhash.h"
int OPENSSL_LH_error(OPENSSL_LHASH *lh);
OPENSSL_LHASH *OPENSSL_LH_new(OPENSSL_LH_HASHFUNC h, OPENSSL_LH_COMPFUNC c);
void OPENSSL_LH_free(OPENSSL_LHASH *lh);
void OPENSSL_LH_flush(OPENSSL_LHASH *lh);
void *OPENSSL_LH_insert(OPENSSL_LHASH *lh, void *data);
void *OPENSSL_LH_delete(OPENSSL_LHASH *lh, const void *data);
void *OPENSSL_LH_retrieve(OPENSSL_LHASH *lh, const void *data);
void OPENSSL_LH_doall(OPENSSL_LHASH *lh, OPENSSL_LH_DOALL_FUNC func);
void OPENSSL_LH_doall_arg(OPENSSL_LHASH *lh, OPENSSL_LH_DOALL_FUNCARG func, void *arg);
unsigned long OPENSSL_LH_strhash(const char *c);
unsigned long OPENSSL_LH_num_items(const OPENSSL_LHASH *lh);
unsigned long OPENSSL_LH_get_down_load(const OPENSSL_LHASH *lh);
void OPENSSL_LH_set_down_load(OPENSSL_LHASH *lh, unsigned long down_load);


void OPENSSL_LH_stats(const OPENSSL_LHASH *lh, FILE *fp);
void OPENSSL_LH_node_stats(const OPENSSL_LHASH *lh, FILE *fp);
void OPENSSL_LH_node_usage_stats(const OPENSSL_LHASH *lh, FILE *fp);

void OPENSSL_LH_stats_bio(const OPENSSL_LHASH *lh, BIO *out);
void OPENSSL_LH_node_stats_bio(const OPENSSL_LHASH *lh, BIO *out);
void OPENSSL_LH_node_usage_stats_bio(const OPENSSL_LHASH *lh, BIO *out);
# 252 "include/openssl/lhash.h"
struct lhash_st_OPENSSL_STRING { union lh_OPENSSL_STRING_dummy { void* d1; unsigned long d2; int d3; } dummy; }; typedef int (*lh_OPENSSL_STRING_compfunc)(const OPENSSL_STRING *a, const OPENSSL_STRING *b); typedef unsigned long (*lh_OPENSSL_STRING_hashfunc)(const OPENSSL_STRING *a); typedef void (*lh_OPENSSL_STRING_doallfunc)(OPENSSL_STRING *a); static __attribute__((unused)) inline OPENSSL_STRING *ossl_check_OPENSSL_STRING_lh_plain_type(OPENSSL_STRING *ptr) { return ptr; } static __attribute__((unused)) inline const OPENSSL_STRING *ossl_check_const_OPENSSL_STRING_lh_plain_type(const OPENSSL_STRING *ptr) { return ptr; } static __attribute__((unused)) inline const OPENSSL_LHASH *ossl_check_const_OPENSSL_STRING_lh_type(const struct lhash_st_OPENSSL_STRING *lh) { return (const OPENSSL_LHASH *)lh; } static __attribute__((unused)) inline OPENSSL_LHASH *ossl_check_OPENSSL_STRING_lh_type(struct lhash_st_OPENSSL_STRING *lh) { return (OPENSSL_LHASH *)lh; } static __attribute__((unused)) inline OPENSSL_LH_COMPFUNC ossl_check_OPENSSL_STRING_lh_compfunc_type(lh_OPENSSL_STRING_compfunc cmp) { return (OPENSSL_LH_COMPFUNC)cmp; } static __attribute__((unused)) inline OPENSSL_LH_HASHFUNC ossl_check_OPENSSL_STRING_lh_hashfunc_type(lh_OPENSSL_STRING_hashfunc hfn) { return (OPENSSL_LH_HASHFUNC)hfn; } static __attribute__((unused)) inline OPENSSL_LH_DOALL_FUNC ossl_check_OPENSSL_STRING_lh_doallfunc_type(lh_OPENSSL_STRING_doallfunc dfn) { return (OPENSSL_LH_DOALL_FUNC)dfn; } struct lhash_st_OPENSSL_STRING;
# 267 "include/openssl/lhash.h"
struct lhash_st_OPENSSL_CSTRING { union lh_OPENSSL_CSTRING_dummy { void* d1; unsigned long d2; int d3; } dummy; }; typedef int (*lh_OPENSSL_CSTRING_compfunc)(const OPENSSL_CSTRING *a, const OPENSSL_CSTRING *b); typedef unsigned long (*lh_OPENSSL_CSTRING_hashfunc)(const OPENSSL_CSTRING *a); typedef void (*lh_OPENSSL_CSTRING_doallfunc)(OPENSSL_CSTRING *a); static __attribute__((unused)) inline OPENSSL_CSTRING *ossl_check_OPENSSL_CSTRING_lh_plain_type(OPENSSL_CSTRING *ptr) { return ptr; } static __attribute__((unused)) inline const OPENSSL_CSTRING *ossl_check_const_OPENSSL_CSTRING_lh_plain_type(const OPENSSL_CSTRING *ptr) { return ptr; } static __attribute__((unused)) inline const OPENSSL_LHASH *ossl_check_const_OPENSSL_CSTRING_lh_type(const struct lhash_st_OPENSSL_CSTRING *lh) { return (const OPENSSL_LHASH *)lh; } static __attribute__((unused)) inline OPENSSL_LHASH *ossl_check_OPENSSL_CSTRING_lh_type(struct lhash_st_OPENSSL_CSTRING *lh) { return (OPENSSL_LHASH *)lh; } static __attribute__((unused)) inline OPENSSL_LH_COMPFUNC ossl_check_OPENSSL_CSTRING_lh_compfunc_type(lh_OPENSSL_CSTRING_compfunc cmp) { return (OPENSSL_LH_COMPFUNC)cmp; } static __attribute__((unused)) inline OPENSSL_LH_HASHFUNC ossl_check_OPENSSL_CSTRING_lh_hashfunc_type(lh_OPENSSL_CSTRING_hashfunc hfn) { return (OPENSSL_LH_HASHFUNC)hfn; } static __attribute__((unused)) inline OPENSSL_LH_DOALL_FUNC ossl_check_OPENSSL_CSTRING_lh_doallfunc_type(lh_OPENSSL_CSTRING_doallfunc dfn) { return (OPENSSL_LH_DOALL_FUNC)dfn; } struct lhash_st_OPENSSL_CSTRING;
# 31 "include/openssl/err.h" 2
# 45 "include/openssl/err.h"
# 1 "/opt/cegcc/lib/gcc/arm-mingw32ce/9.3.0/include-fixed/limits.h" 1 3 4
# 46 "include/openssl/err.h" 2
# 58 "include/openssl/err.h"
struct err_state_st {
    int err_flags[16];
    int err_marks[16];
    unsigned long err_buffer[16];
    char *err_data[16];
    size_t err_data_size[16];
    int err_data_flags[16];
    char *err_file[16];
    int err_line[16];
    char *err_func[16];
    int top, bottom;
};
# 243 "include/openssl/err.h"
static __attribute__((unused)) inline int ERR_GET_LIB(unsigned long errcode)
{
    if ((((errcode) & ((unsigned int)0x7fffffff + 1)) != 0))
        return 2;
    return (errcode >> 23L) & 0xFF;
}

static __attribute__((unused)) inline int ERR_GET_RFLAGS(unsigned long errcode)
{
    if ((((errcode) & ((unsigned int)0x7fffffff + 1)) != 0))
        return 0;
    return errcode & (0x1F << 18L);
}

static __attribute__((unused)) inline int ERR_GET_REASON(unsigned long errcode)
{
    if ((((errcode) & ((unsigned int)0x7fffffff + 1)) != 0))
        return errcode & ((unsigned int)0x7fffffff);
    return errcode & 0X7FFFFF;
}

static __attribute__((unused)) inline int ERR_FATAL_ERROR(unsigned long errcode)
{
    return (ERR_GET_RFLAGS(errcode) & (0x1 << 18L)) != 0;
}

static __attribute__((unused)) inline int ERR_COMMON_ERROR(unsigned long errcode)
{
    return (ERR_GET_RFLAGS(errcode) & (0x2 << 18L)) != 0;
}
# 371 "include/openssl/err.h"
typedef struct ERR_string_data_st {
    unsigned long error;
    const char *string;
} ERR_STRING_DATA;

struct lhash_st_ERR_STRING_DATA { union lh_ERR_STRING_DATA_dummy { void* d1; unsigned long d2; int d3; } dummy; }; typedef int (*lh_ERR_STRING_DATA_compfunc)(const ERR_STRING_DATA *a, const ERR_STRING_DATA *b); typedef unsigned long (*lh_ERR_STRING_DATA_hashfunc)(const ERR_STRING_DATA *a); typedef void (*lh_ERR_STRING_DATA_doallfunc)(ERR_STRING_DATA *a); static __attribute__((unused)) inline ERR_STRING_DATA *ossl_check_ERR_STRING_DATA_lh_plain_type(ERR_STRING_DATA *ptr) { return ptr; } static __attribute__((unused)) inline const ERR_STRING_DATA *ossl_check_const_ERR_STRING_DATA_lh_plain_type(const ERR_STRING_DATA *ptr) { return ptr; } static __attribute__((unused)) inline const OPENSSL_LHASH *ossl_check_const_ERR_STRING_DATA_lh_type(const struct lhash_st_ERR_STRING_DATA *lh) { return (const OPENSSL_LHASH *)lh; } static __attribute__((unused)) inline OPENSSL_LHASH *ossl_check_ERR_STRING_DATA_lh_type(struct lhash_st_ERR_STRING_DATA *lh) { return (OPENSSL_LHASH *)lh; } static __attribute__((unused)) inline OPENSSL_LH_COMPFUNC ossl_check_ERR_STRING_DATA_lh_compfunc_type(lh_ERR_STRING_DATA_compfunc cmp) { return (OPENSSL_LH_COMPFUNC)cmp; } static __attribute__((unused)) inline OPENSSL_LH_HASHFUNC ossl_check_ERR_STRING_DATA_lh_hashfunc_type(lh_ERR_STRING_DATA_hashfunc hfn) { return (OPENSSL_LH_HASHFUNC)hfn; } static __attribute__((unused)) inline OPENSSL_LH_DOALL_FUNC ossl_check_ERR_STRING_DATA_lh_doallfunc_type(lh_ERR_STRING_DATA_doallfunc dfn) { return (OPENSSL_LH_DOALL_FUNC)dfn; } struct lhash_st_ERR_STRING_DATA;
# 397 "include/openssl/err.h"
void ERR_new(void);
void ERR_set_debug(const char *file, int line, const char *func);
void ERR_set_error(int lib, int reason, const char *fmt, ...);
void ERR_vset_error(int lib, int reason, const char *fmt, va_list args);
# 417 "include/openssl/err.h"
void ERR_set_error_data(char *data, int flags);

unsigned long ERR_get_error(void);
unsigned long ERR_get_error_all(const char **file, int *line,
                                const char **func,
                                const char **data, int *flags);

extern
unsigned long ERR_get_error_line(const char **file, int *line);
extern
unsigned long ERR_get_error_line_data(const char **file, int *line,
                                      const char **data, int *flags);

unsigned long ERR_peek_error(void);
unsigned long ERR_peek_error_line(const char **file, int *line);
unsigned long ERR_peek_error_func(const char **func);
unsigned long ERR_peek_error_data(const char **data, int *flags);
unsigned long ERR_peek_error_all(const char **file, int *line,
                                 const char **func,
                                 const char **data, int *flags);

extern
unsigned long ERR_peek_error_line_data(const char **file, int *line,
                                       const char **data, int *flags);

unsigned long ERR_peek_last_error(void);
unsigned long ERR_peek_last_error_line(const char **file, int *line);
unsigned long ERR_peek_last_error_func(const char **func);
unsigned long ERR_peek_last_error_data(const char **data, int *flags);
unsigned long ERR_peek_last_error_all(const char **file, int *line,
                                      const char **func,
                                      const char **data, int *flags);

extern
unsigned long ERR_peek_last_error_line_data(const char **file, int *line,
                                            const char **data, int *flags);


void ERR_clear_error(void);

char *ERR_error_string(unsigned long e, char *buf);
void ERR_error_string_n(unsigned long e, char *buf, size_t len);
const char *ERR_lib_error_string(unsigned long e);

extern const char *ERR_func_error_string(unsigned long e);

const char *ERR_reason_error_string(unsigned long e);

void ERR_print_errors_cb(int (*cb) (const char *str, size_t len, void *u),
                         void *u);

void ERR_print_errors_fp(FILE *fp);

void ERR_print_errors(BIO *bp);

void ERR_add_error_data(int num, ...);
void ERR_add_error_vdata(int num, va_list args);
void ERR_add_error_txt(const char *sepr, const char *txt);
void ERR_add_error_mem_bio(const char *sep, BIO *bio);

int ERR_load_strings(int lib, ERR_STRING_DATA *str);
int ERR_load_strings_const(const ERR_STRING_DATA *str);
int ERR_unload_strings(int lib, ERR_STRING_DATA *str);







extern void ERR_remove_thread_state(void *);


extern void ERR_remove_state(unsigned long pid);


extern ERR_STATE *ERR_get_state(void);


int ERR_get_next_error_library(void);

int ERR_set_mark(void);
int ERR_pop_to_mark(void);
int ERR_clear_last_mark(void);
# 29 "include/internal/cryptlib.h" 2
# 1 "include/internal/nelem.h" 1
# 12 "include/internal/nelem.h"
        
# 30 "include/internal/cryptlib.h" 2
# 58 "include/internal/cryptlib.h"
typedef struct ex_callback_st EX_CALLBACK;
struct stack_st_EX_CALLBACK; typedef int (*sk_EX_CALLBACK_compfunc)(const EX_CALLBACK * const *a, const EX_CALLBACK *const *b); typedef void (*sk_EX_CALLBACK_freefunc)(EX_CALLBACK *a); typedef EX_CALLBACK * (*sk_EX_CALLBACK_copyfunc)(const EX_CALLBACK *a); static __attribute__((unused)) inline int sk_EX_CALLBACK_num(const struct stack_st_EX_CALLBACK *sk) { return OPENSSL_sk_num((const OPENSSL_STACK *)sk); } static __attribute__((unused)) inline EX_CALLBACK *sk_EX_CALLBACK_value(const struct stack_st_EX_CALLBACK *sk, int idx) { return (EX_CALLBACK *)OPENSSL_sk_value((const OPENSSL_STACK *)sk, idx); } static __attribute__((unused)) inline struct stack_st_EX_CALLBACK *sk_EX_CALLBACK_new(sk_EX_CALLBACK_compfunc compare) { return (struct stack_st_EX_CALLBACK *)OPENSSL_sk_new((OPENSSL_sk_compfunc)compare); } static __attribute__((unused)) inline struct stack_st_EX_CALLBACK *sk_EX_CALLBACK_new_null(void) { return (struct stack_st_EX_CALLBACK *)OPENSSL_sk_new_null(); } static __attribute__((unused)) inline struct stack_st_EX_CALLBACK *sk_EX_CALLBACK_new_reserve(sk_EX_CALLBACK_compfunc compare, int n) { return (struct stack_st_EX_CALLBACK *)OPENSSL_sk_new_reserve((OPENSSL_sk_compfunc)compare, n); } static __attribute__((unused)) inline int sk_EX_CALLBACK_reserve(struct stack_st_EX_CALLBACK *sk, int n) { return OPENSSL_sk_reserve((OPENSSL_STACK *)sk, n); } static __attribute__((unused)) inline void sk_EX_CALLBACK_free(struct stack_st_EX_CALLBACK *sk) { OPENSSL_sk_free((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline void sk_EX_CALLBACK_zero(struct stack_st_EX_CALLBACK *sk) { OPENSSL_sk_zero((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline EX_CALLBACK *sk_EX_CALLBACK_delete(struct stack_st_EX_CALLBACK *sk, int i) { return (EX_CALLBACK *)OPENSSL_sk_delete((OPENSSL_STACK *)sk, i); } static __attribute__((unused)) inline EX_CALLBACK *sk_EX_CALLBACK_delete_ptr(struct stack_st_EX_CALLBACK *sk, EX_CALLBACK *ptr) { return (EX_CALLBACK *)OPENSSL_sk_delete_ptr((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline int sk_EX_CALLBACK_push(struct stack_st_EX_CALLBACK *sk, EX_CALLBACK *ptr) { return OPENSSL_sk_push((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline int sk_EX_CALLBACK_unshift(struct stack_st_EX_CALLBACK *sk, EX_CALLBACK *ptr) { return OPENSSL_sk_unshift((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline EX_CALLBACK *sk_EX_CALLBACK_pop(struct stack_st_EX_CALLBACK *sk) { return (EX_CALLBACK *)OPENSSL_sk_pop((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline EX_CALLBACK *sk_EX_CALLBACK_shift(struct stack_st_EX_CALLBACK *sk) { return (EX_CALLBACK *)OPENSSL_sk_shift((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline void sk_EX_CALLBACK_pop_free(struct stack_st_EX_CALLBACK *sk, sk_EX_CALLBACK_freefunc freefunc) { OPENSSL_sk_pop_free((OPENSSL_STACK *)sk, (OPENSSL_sk_freefunc)freefunc); } static __attribute__((unused)) inline int sk_EX_CALLBACK_insert(struct stack_st_EX_CALLBACK *sk, EX_CALLBACK *ptr, int idx) { return OPENSSL_sk_insert((OPENSSL_STACK *)sk, (const void *)ptr, idx); } static __attribute__((unused)) inline EX_CALLBACK *sk_EX_CALLBACK_set(struct stack_st_EX_CALLBACK *sk, int idx, EX_CALLBACK *ptr) { return (EX_CALLBACK *)OPENSSL_sk_set((OPENSSL_STACK *)sk, idx, (const void *)ptr); } static __attribute__((unused)) inline int sk_EX_CALLBACK_find(struct stack_st_EX_CALLBACK *sk, EX_CALLBACK *ptr) { return OPENSSL_sk_find((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline int sk_EX_CALLBACK_find_ex(struct stack_st_EX_CALLBACK *sk, EX_CALLBACK *ptr) { return OPENSSL_sk_find_ex((OPENSSL_STACK *)sk, (const void *)ptr); } static __attribute__((unused)) inline int sk_EX_CALLBACK_find_all(struct stack_st_EX_CALLBACK *sk, EX_CALLBACK *ptr, int *pnum) { return OPENSSL_sk_find_all((OPENSSL_STACK *)sk, (const void *)ptr, pnum); } static __attribute__((unused)) inline void sk_EX_CALLBACK_sort(struct stack_st_EX_CALLBACK *sk) { OPENSSL_sk_sort((OPENSSL_STACK *)sk); } static __attribute__((unused)) inline int sk_EX_CALLBACK_is_sorted(const struct stack_st_EX_CALLBACK *sk) { return OPENSSL_sk_is_sorted((const OPENSSL_STACK *)sk); } static __attribute__((unused)) inline struct stack_st_EX_CALLBACK * sk_EX_CALLBACK_dup(const struct stack_st_EX_CALLBACK *sk) { return (struct stack_st_EX_CALLBACK *)OPENSSL_sk_dup((const OPENSSL_STACK *)sk); } static __attribute__((unused)) inline struct stack_st_EX_CALLBACK *sk_EX_CALLBACK_deep_copy(const struct stack_st_EX_CALLBACK *sk, sk_EX_CALLBACK_copyfunc copyfunc, sk_EX_CALLBACK_freefunc freefunc) { return (struct stack_st_EX_CALLBACK *)OPENSSL_sk_deep_copy((const OPENSSL_STACK *)sk, (OPENSSL_sk_copyfunc)copyfunc, (OPENSSL_sk_freefunc)freefunc); } static __attribute__((unused)) inline sk_EX_CALLBACK_compfunc sk_EX_CALLBACK_set_cmp_func(struct stack_st_EX_CALLBACK *sk, sk_EX_CALLBACK_compfunc compare) { return (sk_EX_CALLBACK_compfunc)OPENSSL_sk_set_cmp_func((OPENSSL_STACK *)sk, (OPENSSL_sk_compfunc)compare); }

typedef struct mem_st MEM;
struct lhash_st_MEM { union lh_MEM_dummy { void* d1; unsigned long d2; int d3; } dummy; }; static __attribute__((unused)) inline struct lhash_st_MEM *lh_MEM_new(unsigned long (*hfn)(const MEM *), int (*cfn)(const MEM *, const MEM *)) { return (struct lhash_st_MEM *) OPENSSL_LH_new((OPENSSL_LH_HASHFUNC)hfn, (OPENSSL_LH_COMPFUNC)cfn); } static __attribute__((unused)) inline void lh_MEM_free(struct lhash_st_MEM *lh) { OPENSSL_LH_free((OPENSSL_LHASH *)lh); } static __attribute__((unused)) inline void lh_MEM_flush(struct lhash_st_MEM *lh) { OPENSSL_LH_flush((OPENSSL_LHASH *)lh); } static __attribute__((unused)) inline MEM *lh_MEM_insert(struct lhash_st_MEM *lh, MEM *d) { return (MEM *)OPENSSL_LH_insert((OPENSSL_LHASH *)lh, d); } static __attribute__((unused)) inline MEM *lh_MEM_delete(struct lhash_st_MEM *lh, const MEM *d) { return (MEM *)OPENSSL_LH_delete((OPENSSL_LHASH *)lh, d); } static __attribute__((unused)) inline MEM *lh_MEM_retrieve(struct lhash_st_MEM *lh, const MEM *d) { return (MEM *)OPENSSL_LH_retrieve((OPENSSL_LHASH *)lh, d); } static __attribute__((unused)) inline int lh_MEM_error(struct lhash_st_MEM *lh) { return OPENSSL_LH_error((OPENSSL_LHASH *)lh); } static __attribute__((unused)) inline unsigned long lh_MEM_num_items(struct lhash_st_MEM *lh) { return OPENSSL_LH_num_items((OPENSSL_LHASH *)lh); } static __attribute__((unused)) inline void lh_MEM_node_stats_bio(const struct lhash_st_MEM *lh, BIO *out) { OPENSSL_LH_node_stats_bio((const OPENSSL_LHASH *)lh, out); } static __attribute__((unused)) inline void lh_MEM_node_usage_stats_bio(const struct lhash_st_MEM *lh, BIO *out) { OPENSSL_LH_node_usage_stats_bio((const OPENSSL_LHASH *)lh, out); } static __attribute__((unused)) inline void lh_MEM_stats_bio(const struct lhash_st_MEM *lh, BIO *out) { OPENSSL_LH_stats_bio((const OPENSSL_LHASH *)lh, out); } static __attribute__((unused)) inline unsigned long lh_MEM_get_down_load(struct lhash_st_MEM *lh) { return OPENSSL_LH_get_down_load((OPENSSL_LHASH *)lh); } static __attribute__((unused)) inline void lh_MEM_set_down_load(struct lhash_st_MEM *lh, unsigned long dl) { OPENSSL_LH_set_down_load((OPENSSL_LHASH *)lh, dl); } static __attribute__((unused)) inline void lh_MEM_doall(struct lhash_st_MEM *lh, void (*doall)(MEM *)) { OPENSSL_LH_doall((OPENSSL_LHASH *)lh, (OPENSSL_LH_DOALL_FUNC)doall); } static __attribute__((unused)) inline void lh_MEM_doall_arg(struct lhash_st_MEM *lh, void (*doallarg)(MEM *, void *), void *arg) { OPENSSL_LH_doall_arg((OPENSSL_LHASH *)lh, (OPENSSL_LH_DOALL_FUNCARG)doallarg, arg); } struct lhash_st_MEM;
# 88 "include/internal/cryptlib.h"
void OPENSSL_cpuid_setup(void);





void OPENSSL_showfatal(const char *fmta, ...);
int ossl_do_ex_data_init(OSSL_LIB_CTX *ctx);
void ossl_crypto_cleanup_all_ex_data_int(OSSL_LIB_CTX *ctx);
int openssl_init_fork_handlers(void);
int openssl_get_fork_id(void);

char *ossl_safe_getenv(const char *name);

extern CRYPTO_RWLOCK *memdbg_lock;
int openssl_strerror_r(int errnum, char *buf, size_t buflen);

FILE *openssl_fopen(const char *filename, const char *mode);




uint32_t OPENSSL_rdtsc(void);
size_t OPENSSL_instrument_bus(unsigned int *, size_t);
size_t OPENSSL_instrument_bus2(unsigned int *, size_t, size_t);







struct ex_callback_st {
    long argl;
    void *argp;
    int priority;
    CRYPTO_EX_new *new_func;
    CRYPTO_EX_free *free_func;
    CRYPTO_EX_dup *dup_func;
};





typedef struct ex_callbacks_st {
    struct stack_st_EX_CALLBACK *meth;
} EX_CALLBACKS;

typedef struct ossl_ex_data_global_st {
    CRYPTO_RWLOCK *ex_data_lock;
    EX_CALLBACKS ex_data[18];
} OSSL_EX_DATA_GLOBAL;
# 178 "include/internal/cryptlib.h"
typedef struct ossl_lib_ctx_method {
    int priority;
    void *(*new_func)(OSSL_LIB_CTX *ctx);
    void (*free_func)(void *);
} OSSL_LIB_CTX_METHOD;

OSSL_LIB_CTX *ossl_lib_ctx_get_concrete(OSSL_LIB_CTX *ctx);
int ossl_lib_ctx_is_default(OSSL_LIB_CTX *ctx);
int ossl_lib_ctx_is_global_default(OSSL_LIB_CTX *ctx);


void *ossl_lib_ctx_get_data(OSSL_LIB_CTX *, int ,
                            const OSSL_LIB_CTX_METHOD * ctx);

void ossl_lib_ctx_default_deinit(void);
OSSL_EX_DATA_GLOBAL *ossl_lib_ctx_get_ex_data_global(OSSL_LIB_CTX *ctx);
typedef int (ossl_lib_ctx_run_once_fn)(OSSL_LIB_CTX *ctx);
typedef void (ossl_lib_ctx_onfree_fn)(OSSL_LIB_CTX *ctx);

int ossl_lib_ctx_run_once(OSSL_LIB_CTX *ctx, unsigned int idx,
                          ossl_lib_ctx_run_once_fn run_once_fn);
int ossl_lib_ctx_onfree(OSSL_LIB_CTX *ctx, ossl_lib_ctx_onfree_fn onfreefn);
const char *ossl_lib_ctx_get_descriptor(OSSL_LIB_CTX *libctx);

OSSL_LIB_CTX *ossl_crypto_ex_data_get_ossl_lib_ctx(const CRYPTO_EX_DATA *ad);
int ossl_crypto_new_ex_data_ex(OSSL_LIB_CTX *ctx, int class_index, void *obj,
                               CRYPTO_EX_DATA *ad);
int ossl_crypto_get_ex_new_index_ex(OSSL_LIB_CTX *ctx, int class_index,
                                    long argl, void *argp,
                                    CRYPTO_EX_new *new_func,
                                    CRYPTO_EX_dup *dup_func,
                                    CRYPTO_EX_free *free_func,
                                    int priority);
int ossl_crypto_free_ex_index_ex(OSSL_LIB_CTX *ctx, int class_index, int idx);







const void *ossl_bsearch(const void *key, const void *base, int num,
                         int size, int (*cmp) (const void *, const void *),
                         int flags);

char *ossl_sk_ASN1_UTF8STRING2text(struct stack_st_ASN1_UTF8STRING *text,
                                   const char *sep, size_t max_len);
char *ossl_ipaddr_to_asc(unsigned char *p, int len);

char *ossl_buf2hexstr_sep(const unsigned char *buf, long buflen, char sep);
unsigned char *ossl_hexstr2buf_sep(const char *str, long *buflen,
                                   const char sep);

static inline int ossl_ends_with_dirsep(const char *path)
{
    if (*path != '\0')
        path += strlen(path) - 1;




    if (*path == '\\')
        return 1;

    return *path == '/';
}

static inline int ossl_is_absolute_path(const char *path)
{







    if (path[0] == '\\'
        || (path[0] != '\0' && path[1] == ':'))
        return 1;

    return path[0] == '/';
}
# 18 "crypto/pem/pem_all.c" 2

# 1 "include/openssl/evp.h" 1
# 12 "include/openssl/evp.h"
        
# 28 "include/openssl/evp.h"
# 1 "include/openssl/core_dispatch.h" 1
# 12 "include/openssl/core_dispatch.h"
        
# 64 "include/openssl/core_dispatch.h"
typedef const OSSL_PARAM * (OSSL_FUNC_core_gettable_params_fn)(const OSSL_CORE_HANDLE *prov); static __attribute__((unused)) inline OSSL_FUNC_core_gettable_params_fn *OSSL_FUNC_core_gettable_params(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_core_gettable_params_fn *)opf->function; }


typedef int (OSSL_FUNC_core_get_params_fn)(const OSSL_CORE_HANDLE *prov, OSSL_PARAM params[]); static __attribute__((unused)) inline OSSL_FUNC_core_get_params_fn *OSSL_FUNC_core_get_params(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_core_get_params_fn *)opf->function; }


typedef int (OSSL_FUNC_core_thread_start_fn)(const OSSL_CORE_HANDLE *prov, OSSL_thread_stop_handler_fn handfn, void *arg); static __attribute__((unused)) inline OSSL_FUNC_core_thread_start_fn *OSSL_FUNC_core_thread_start(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_core_thread_start_fn *)opf->function; }



typedef OPENSSL_CORE_CTX * (OSSL_FUNC_core_get_libctx_fn)(const OSSL_CORE_HANDLE *prov); static __attribute__((unused)) inline OSSL_FUNC_core_get_libctx_fn *OSSL_FUNC_core_get_libctx(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_core_get_libctx_fn *)opf->function; }


typedef void (OSSL_FUNC_core_new_error_fn)(const OSSL_CORE_HANDLE *prov); static __attribute__((unused)) inline OSSL_FUNC_core_new_error_fn *OSSL_FUNC_core_new_error(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_core_new_error_fn *)opf->function; }

typedef void (OSSL_FUNC_core_set_error_debug_fn)(const OSSL_CORE_HANDLE *prov, const char *file, int line, const char *func); static __attribute__((unused)) inline OSSL_FUNC_core_set_error_debug_fn *OSSL_FUNC_core_set_error_debug(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_core_set_error_debug_fn *)opf->function; }



typedef void (OSSL_FUNC_core_vset_error_fn)(const OSSL_CORE_HANDLE *prov, uint32_t reason, const char *fmt, va_list args); static __attribute__((unused)) inline OSSL_FUNC_core_vset_error_fn *OSSL_FUNC_core_vset_error(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_core_vset_error_fn *)opf->function; }



typedef int (OSSL_FUNC_core_set_error_mark_fn)(const OSSL_CORE_HANDLE *prov); static __attribute__((unused)) inline OSSL_FUNC_core_set_error_mark_fn *OSSL_FUNC_core_set_error_mark(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_core_set_error_mark_fn *)opf->function; }

typedef int (OSSL_FUNC_core_clear_last_error_mark_fn)(const OSSL_CORE_HANDLE *prov); static __attribute__((unused)) inline OSSL_FUNC_core_clear_last_error_mark_fn *OSSL_FUNC_core_clear_last_error_mark(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_core_clear_last_error_mark_fn *)opf->function; }


typedef int (OSSL_FUNC_core_pop_error_to_mark_fn)(const OSSL_CORE_HANDLE *prov); static __attribute__((unused)) inline OSSL_FUNC_core_pop_error_to_mark_fn *OSSL_FUNC_core_pop_error_to_mark(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_core_pop_error_to_mark_fn *)opf->function; }







typedef int (OSSL_FUNC_core_obj_add_sigid_fn)(const OSSL_CORE_HANDLE *prov, const char *sign_name, const char *digest_name, const char *pkey_name); static __attribute__((unused)) inline OSSL_FUNC_core_obj_add_sigid_fn *OSSL_FUNC_core_obj_add_sigid(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_core_obj_add_sigid_fn *)opf->function; }


typedef int (OSSL_FUNC_core_obj_create_fn)(const OSSL_CORE_HANDLE *prov, const char *oid, const char *sn, const char *ln); static __attribute__((unused)) inline OSSL_FUNC_core_obj_create_fn *OSSL_FUNC_core_obj_create(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_core_obj_create_fn *)opf->function; }





typedef void * (OSSL_FUNC_CRYPTO_malloc_fn)(size_t num, const char *file, int line); static __attribute__((unused)) inline OSSL_FUNC_CRYPTO_malloc_fn *OSSL_FUNC_CRYPTO_malloc(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_CRYPTO_malloc_fn *)opf->function; }


typedef void * (OSSL_FUNC_CRYPTO_zalloc_fn)(size_t num, const char *file, int line); static __attribute__((unused)) inline OSSL_FUNC_CRYPTO_zalloc_fn *OSSL_FUNC_CRYPTO_zalloc(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_CRYPTO_zalloc_fn *)opf->function; }


typedef void (OSSL_FUNC_CRYPTO_free_fn)(void *ptr, const char *file, int line); static __attribute__((unused)) inline OSSL_FUNC_CRYPTO_free_fn *OSSL_FUNC_CRYPTO_free(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_CRYPTO_free_fn *)opf->function; }


typedef void (OSSL_FUNC_CRYPTO_clear_free_fn)(void *ptr, size_t num, const char *file, int line); static __attribute__((unused)) inline OSSL_FUNC_CRYPTO_clear_free_fn *OSSL_FUNC_CRYPTO_clear_free(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_CRYPTO_clear_free_fn *)opf->function; }


typedef void * (OSSL_FUNC_CRYPTO_realloc_fn)(void *addr, size_t num, const char *file, int line); static __attribute__((unused)) inline OSSL_FUNC_CRYPTO_realloc_fn *OSSL_FUNC_CRYPTO_realloc(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_CRYPTO_realloc_fn *)opf->function; }


typedef void * (OSSL_FUNC_CRYPTO_clear_realloc_fn)(void *addr, size_t old_num, size_t num, const char *file, int line); static __attribute__((unused)) inline OSSL_FUNC_CRYPTO_clear_realloc_fn *OSSL_FUNC_CRYPTO_clear_realloc(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_CRYPTO_clear_realloc_fn *)opf->function; }



typedef void * (OSSL_FUNC_CRYPTO_secure_malloc_fn)(size_t num, const char *file, int line); static __attribute__((unused)) inline OSSL_FUNC_CRYPTO_secure_malloc_fn *OSSL_FUNC_CRYPTO_secure_malloc(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_CRYPTO_secure_malloc_fn *)opf->function; }


typedef void * (OSSL_FUNC_CRYPTO_secure_zalloc_fn)(size_t num, const char *file, int line); static __attribute__((unused)) inline OSSL_FUNC_CRYPTO_secure_zalloc_fn *OSSL_FUNC_CRYPTO_secure_zalloc(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_CRYPTO_secure_zalloc_fn *)opf->function; }


typedef void (OSSL_FUNC_CRYPTO_secure_free_fn)(void *ptr, const char *file, int line); static __attribute__((unused)) inline OSSL_FUNC_CRYPTO_secure_free_fn *OSSL_FUNC_CRYPTO_secure_free(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_CRYPTO_secure_free_fn *)opf->function; }


typedef void (OSSL_FUNC_CRYPTO_secure_clear_free_fn)(void *ptr, size_t num, const char *file, int line); static __attribute__((unused)) inline OSSL_FUNC_CRYPTO_secure_clear_free_fn *OSSL_FUNC_CRYPTO_secure_clear_free(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_CRYPTO_secure_clear_free_fn *)opf->function; }



typedef int (OSSL_FUNC_CRYPTO_secure_allocated_fn)(const void *ptr); static __attribute__((unused)) inline OSSL_FUNC_CRYPTO_secure_allocated_fn *OSSL_FUNC_CRYPTO_secure_allocated(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_CRYPTO_secure_allocated_fn *)opf->function; }


typedef void (OSSL_FUNC_OPENSSL_cleanse_fn)(void *ptr, size_t len); static __attribute__((unused)) inline OSSL_FUNC_OPENSSL_cleanse_fn *OSSL_FUNC_OPENSSL_cleanse(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_OPENSSL_cleanse_fn *)opf->function; }
# 161 "include/openssl/core_dispatch.h"
typedef OSSL_CORE_BIO * (OSSL_FUNC_BIO_new_file_fn)(const char *filename, const char *mode); static __attribute__((unused)) inline OSSL_FUNC_BIO_new_file_fn *OSSL_FUNC_BIO_new_file(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_BIO_new_file_fn *)opf->function; }

typedef OSSL_CORE_BIO * (OSSL_FUNC_BIO_new_membuf_fn)(const void *buf, int len); static __attribute__((unused)) inline OSSL_FUNC_BIO_new_membuf_fn *OSSL_FUNC_BIO_new_membuf(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_BIO_new_membuf_fn *)opf->function; }
typedef int (OSSL_FUNC_BIO_read_ex_fn)(OSSL_CORE_BIO *bio, void *data, size_t data_len, size_t *bytes_read); static __attribute__((unused)) inline OSSL_FUNC_BIO_read_ex_fn *OSSL_FUNC_BIO_read_ex(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_BIO_read_ex_fn *)opf->function; }

typedef int (OSSL_FUNC_BIO_write_ex_fn)(OSSL_CORE_BIO *bio, const void *data, size_t data_len, size_t *written); static __attribute__((unused)) inline OSSL_FUNC_BIO_write_ex_fn *OSSL_FUNC_BIO_write_ex(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_BIO_write_ex_fn *)opf->function; }

typedef int (OSSL_FUNC_BIO_gets_fn)(OSSL_CORE_BIO *bio, char *buf, int size); static __attribute__((unused)) inline OSSL_FUNC_BIO_gets_fn *OSSL_FUNC_BIO_gets(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_BIO_gets_fn *)opf->function; }
typedef int (OSSL_FUNC_BIO_puts_fn)(OSSL_CORE_BIO *bio, const char *str); static __attribute__((unused)) inline OSSL_FUNC_BIO_puts_fn *OSSL_FUNC_BIO_puts(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_BIO_puts_fn *)opf->function; }
typedef int (OSSL_FUNC_BIO_up_ref_fn)(OSSL_CORE_BIO *bio); static __attribute__((unused)) inline OSSL_FUNC_BIO_up_ref_fn *OSSL_FUNC_BIO_up_ref(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_BIO_up_ref_fn *)opf->function; }
typedef int (OSSL_FUNC_BIO_free_fn)(OSSL_CORE_BIO *bio); static __attribute__((unused)) inline OSSL_FUNC_BIO_free_fn *OSSL_FUNC_BIO_free(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_BIO_free_fn *)opf->function; }
typedef int (OSSL_FUNC_BIO_vprintf_fn)(OSSL_CORE_BIO *bio, const char *format, va_list args); static __attribute__((unused)) inline OSSL_FUNC_BIO_vprintf_fn *OSSL_FUNC_BIO_vprintf(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_BIO_vprintf_fn *)opf->function; }

typedef int (OSSL_FUNC_BIO_vsnprintf_fn)(char *buf, size_t n, const char *fmt, va_list args); static __attribute__((unused)) inline OSSL_FUNC_BIO_vsnprintf_fn *OSSL_FUNC_BIO_vsnprintf(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_BIO_vsnprintf_fn *)opf->function; }

typedef int (OSSL_FUNC_BIO_ctrl_fn)(OSSL_CORE_BIO *bio, int cmd, long num, void *ptr); static __attribute__((unused)) inline OSSL_FUNC_BIO_ctrl_fn *OSSL_FUNC_BIO_ctrl(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_BIO_ctrl_fn *)opf->function; }



typedef void (OSSL_FUNC_self_test_cb_fn)(OPENSSL_CORE_CTX *ctx, OSSL_CALLBACK **cb, void **cbarg); static __attribute__((unused)) inline OSSL_FUNC_self_test_cb_fn *OSSL_FUNC_self_test_cb(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_self_test_cb_fn *)opf->function; }







typedef size_t (OSSL_FUNC_get_entropy_fn)(const OSSL_CORE_HANDLE *handle, unsigned char **pout, int entropy, size_t min_len, size_t max_len); static __attribute__((unused)) inline OSSL_FUNC_get_entropy_fn *OSSL_FUNC_get_entropy(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_get_entropy_fn *)opf->function; }


typedef void (OSSL_FUNC_cleanup_entropy_fn)(const OSSL_CORE_HANDLE *handle, unsigned char *buf, size_t len); static __attribute__((unused)) inline OSSL_FUNC_cleanup_entropy_fn *OSSL_FUNC_cleanup_entropy(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_cleanup_entropy_fn *)opf->function; }

typedef size_t (OSSL_FUNC_get_nonce_fn)(const OSSL_CORE_HANDLE *handle, unsigned char **pout, size_t min_len, size_t max_len, const void *salt, size_t salt_len); static __attribute__((unused)) inline OSSL_FUNC_get_nonce_fn *OSSL_FUNC_get_nonce(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_get_nonce_fn *)opf->function; }



typedef void (OSSL_FUNC_cleanup_nonce_fn)(const OSSL_CORE_HANDLE *handle, unsigned char *buf, size_t len); static __attribute__((unused)) inline OSSL_FUNC_cleanup_nonce_fn *OSSL_FUNC_cleanup_nonce(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_cleanup_nonce_fn *)opf->function; }
# 209 "include/openssl/core_dispatch.h"
typedef int (OSSL_FUNC_provider_register_child_cb_fn)(const OSSL_CORE_HANDLE *handle, int (*create_cb)(const OSSL_CORE_HANDLE *provider, void *cbdata), int (*remove_cb)(const OSSL_CORE_HANDLE *provider, void *cbdata), int (*global_props_cb)(const char *props, void *cbdata), void *cbdata); static __attribute__((unused)) inline OSSL_FUNC_provider_register_child_cb_fn *OSSL_FUNC_provider_register_child_cb(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_provider_register_child_cb_fn *)opf->function; }





typedef void (OSSL_FUNC_provider_deregister_child_cb_fn)(const OSSL_CORE_HANDLE *handle); static __attribute__((unused)) inline OSSL_FUNC_provider_deregister_child_cb_fn *OSSL_FUNC_provider_deregister_child_cb(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_provider_deregister_child_cb_fn *)opf->function; }

typedef const char * (OSSL_FUNC_provider_name_fn)(const OSSL_CORE_HANDLE *prov); static __attribute__((unused)) inline OSSL_FUNC_provider_name_fn *OSSL_FUNC_provider_name(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_provider_name_fn *)opf->function; }

typedef void * (OSSL_FUNC_provider_get0_provider_ctx_fn)(const OSSL_CORE_HANDLE *prov); static __attribute__((unused)) inline OSSL_FUNC_provider_get0_provider_ctx_fn *OSSL_FUNC_provider_get0_provider_ctx(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_provider_get0_provider_ctx_fn *)opf->function; }

typedef const OSSL_DISPATCH * (OSSL_FUNC_provider_get0_dispatch_fn)(const OSSL_CORE_HANDLE *prov); static __attribute__((unused)) inline OSSL_FUNC_provider_get0_dispatch_fn *OSSL_FUNC_provider_get0_dispatch(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_provider_get0_dispatch_fn *)opf->function; }

typedef int (OSSL_FUNC_provider_up_ref_fn)(const OSSL_CORE_HANDLE *prov, int activate); static __attribute__((unused)) inline OSSL_FUNC_provider_up_ref_fn *OSSL_FUNC_provider_up_ref(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_provider_up_ref_fn *)opf->function; }

typedef int (OSSL_FUNC_provider_free_fn)(const OSSL_CORE_HANDLE *prov, int deactivate); static __attribute__((unused)) inline OSSL_FUNC_provider_free_fn *OSSL_FUNC_provider_free(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_provider_free_fn *)opf->function; }




typedef void (OSSL_FUNC_provider_teardown_fn)(void *provctx); static __attribute__((unused)) inline OSSL_FUNC_provider_teardown_fn *OSSL_FUNC_provider_teardown(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_provider_teardown_fn *)opf->function; }

typedef const OSSL_PARAM * (OSSL_FUNC_provider_gettable_params_fn)(void *provctx); static __attribute__((unused)) inline OSSL_FUNC_provider_gettable_params_fn *OSSL_FUNC_provider_gettable_params(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_provider_gettable_params_fn *)opf->function; }


typedef int (OSSL_FUNC_provider_get_params_fn)(void *provctx, OSSL_PARAM params[]); static __attribute__((unused)) inline OSSL_FUNC_provider_get_params_fn *OSSL_FUNC_provider_get_params(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_provider_get_params_fn *)opf->function; }


typedef const OSSL_ALGORITHM * (OSSL_FUNC_provider_query_operation_fn)(void *provctx, int operation_id, int *no_store); static __attribute__((unused)) inline OSSL_FUNC_provider_query_operation_fn *OSSL_FUNC_provider_query_operation(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_provider_query_operation_fn *)opf->function; }


typedef void (OSSL_FUNC_provider_unquery_operation_fn)(void *provctx, int operation_id, const OSSL_ALGORITHM *); static __attribute__((unused)) inline OSSL_FUNC_provider_unquery_operation_fn *OSSL_FUNC_provider_unquery_operation(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_provider_unquery_operation_fn *)opf->function; }


typedef const OSSL_ITEM * (OSSL_FUNC_provider_get_reason_strings_fn)(void *provctx); static __attribute__((unused)) inline OSSL_FUNC_provider_get_reason_strings_fn *OSSL_FUNC_provider_get_reason_strings(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_provider_get_reason_strings_fn *)opf->function; }


typedef int (OSSL_FUNC_provider_get_capabilities_fn)(void *provctx, const char *capability, OSSL_CALLBACK *cb, void *arg); static __attribute__((unused)) inline OSSL_FUNC_provider_get_capabilities_fn *OSSL_FUNC_provider_get_capabilities(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_provider_get_capabilities_fn *)opf->function; }


typedef int (OSSL_FUNC_provider_self_test_fn)(void *provctx); static __attribute__((unused)) inline OSSL_FUNC_provider_self_test_fn *OSSL_FUNC_provider_self_test(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_provider_self_test_fn *)opf->function; }
# 287 "include/openssl/core_dispatch.h"
typedef void * (OSSL_FUNC_digest_newctx_fn)(void *provctx); static __attribute__((unused)) inline OSSL_FUNC_digest_newctx_fn *OSSL_FUNC_digest_newctx(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_digest_newctx_fn *)opf->function; }
typedef int (OSSL_FUNC_digest_init_fn)(void *dctx, const OSSL_PARAM params[]); static __attribute__((unused)) inline OSSL_FUNC_digest_init_fn *OSSL_FUNC_digest_init(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_digest_init_fn *)opf->function; }
typedef int (OSSL_FUNC_digest_update_fn)(void *dctx, const unsigned char *in, size_t inl); static __attribute__((unused)) inline OSSL_FUNC_digest_update_fn *OSSL_FUNC_digest_update(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_digest_update_fn *)opf->function; }

typedef int (OSSL_FUNC_digest_final_fn)(void *dctx, unsigned char *out, size_t *outl, size_t outsz); static __attribute__((unused)) inline OSSL_FUNC_digest_final_fn *OSSL_FUNC_digest_final(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_digest_final_fn *)opf->function; }


typedef int (OSSL_FUNC_digest_digest_fn)(void *provctx, const unsigned char *in, size_t inl, unsigned char *out, size_t *outl, size_t outsz); static __attribute__((unused)) inline OSSL_FUNC_digest_digest_fn *OSSL_FUNC_digest_digest(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_digest_digest_fn *)opf->function; }



typedef void (OSSL_FUNC_digest_freectx_fn)(void *dctx); static __attribute__((unused)) inline OSSL_FUNC_digest_freectx_fn *OSSL_FUNC_digest_freectx(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_digest_freectx_fn *)opf->function; }
typedef void * (OSSL_FUNC_digest_dupctx_fn)(void *dctx); static __attribute__((unused)) inline OSSL_FUNC_digest_dupctx_fn *OSSL_FUNC_digest_dupctx(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_digest_dupctx_fn *)opf->function; }

typedef int (OSSL_FUNC_digest_get_params_fn)(OSSL_PARAM params[]); static __attribute__((unused)) inline OSSL_FUNC_digest_get_params_fn *OSSL_FUNC_digest_get_params(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_digest_get_params_fn *)opf->function; }
typedef int (OSSL_FUNC_digest_set_ctx_params_fn)(void *vctx, const OSSL_PARAM params[]); static __attribute__((unused)) inline OSSL_FUNC_digest_set_ctx_params_fn *OSSL_FUNC_digest_set_ctx_params(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_digest_set_ctx_params_fn *)opf->function; }

typedef int (OSSL_FUNC_digest_get_ctx_params_fn)(void *vctx, OSSL_PARAM params[]); static __attribute__((unused)) inline OSSL_FUNC_digest_get_ctx_params_fn *OSSL_FUNC_digest_get_ctx_params(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_digest_get_ctx_params_fn *)opf->function; }

typedef const OSSL_PARAM * (OSSL_FUNC_digest_gettable_params_fn)(void *provctx); static __attribute__((unused)) inline OSSL_FUNC_digest_gettable_params_fn *OSSL_FUNC_digest_gettable_params(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_digest_gettable_params_fn *)opf->function; }

typedef const OSSL_PARAM * (OSSL_FUNC_digest_settable_ctx_params_fn)(void *dctx, void *provctx); static __attribute__((unused)) inline OSSL_FUNC_digest_settable_ctx_params_fn *OSSL_FUNC_digest_settable_ctx_params(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_digest_settable_ctx_params_fn *)opf->function; }

typedef const OSSL_PARAM * (OSSL_FUNC_digest_gettable_ctx_params_fn)(void *dctx, void *provctx); static __attribute__((unused)) inline OSSL_FUNC_digest_gettable_ctx_params_fn *OSSL_FUNC_digest_gettable_ctx_params(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_digest_gettable_ctx_params_fn *)opf->function; }
# 330 "include/openssl/core_dispatch.h"
typedef void * (OSSL_FUNC_cipher_newctx_fn)(void *provctx); static __attribute__((unused)) inline OSSL_FUNC_cipher_newctx_fn *OSSL_FUNC_cipher_newctx(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_cipher_newctx_fn *)opf->function; }
typedef int (OSSL_FUNC_cipher_encrypt_init_fn)(void *cctx, const unsigned char *key, size_t keylen, const unsigned char *iv, size_t ivlen, const OSSL_PARAM params[]); static __attribute__((unused)) inline OSSL_FUNC_cipher_encrypt_init_fn *OSSL_FUNC_cipher_encrypt_init(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_cipher_encrypt_init_fn *)opf->function; }





typedef int (OSSL_FUNC_cipher_decrypt_init_fn)(void *cctx, const unsigned char *key, size_t keylen, const unsigned char *iv, size_t ivlen, const OSSL_PARAM params[]); static __attribute__((unused)) inline OSSL_FUNC_cipher_decrypt_init_fn *OSSL_FUNC_cipher_decrypt_init(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_cipher_decrypt_init_fn *)opf->function; }





typedef int (OSSL_FUNC_cipher_update_fn)(void *cctx, unsigned char *out, size_t *outl, size_t outsize, const unsigned char *in, size_t inl); static __attribute__((unused)) inline OSSL_FUNC_cipher_update_fn *OSSL_FUNC_cipher_update(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_cipher_update_fn *)opf->function; }



typedef int (OSSL_FUNC_cipher_final_fn)(void *cctx, unsigned char *out, size_t *outl, size_t outsize); static __attribute__((unused)) inline OSSL_FUNC_cipher_final_fn *OSSL_FUNC_cipher_final(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_cipher_final_fn *)opf->function; }


typedef int (OSSL_FUNC_cipher_cipher_fn)(void *cctx, unsigned char *out, size_t *outl, size_t outsize, const unsigned char *in, size_t inl); static __attribute__((unused)) inline OSSL_FUNC_cipher_cipher_fn *OSSL_FUNC_cipher_cipher(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_cipher_cipher_fn *)opf->function; }



typedef void (OSSL_FUNC_cipher_freectx_fn)(void *cctx); static __attribute__((unused)) inline OSSL_FUNC_cipher_freectx_fn *OSSL_FUNC_cipher_freectx(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_cipher_freectx_fn *)opf->function; }
typedef void * (OSSL_FUNC_cipher_dupctx_fn)(void *cctx); static __attribute__((unused)) inline OSSL_FUNC_cipher_dupctx_fn *OSSL_FUNC_cipher_dupctx(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_cipher_dupctx_fn *)opf->function; }
typedef int (OSSL_FUNC_cipher_get_params_fn)(OSSL_PARAM params[]); static __attribute__((unused)) inline OSSL_FUNC_cipher_get_params_fn *OSSL_FUNC_cipher_get_params(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_cipher_get_params_fn *)opf->function; }
typedef int (OSSL_FUNC_cipher_get_ctx_params_fn)(void *cctx, OSSL_PARAM params[]); static __attribute__((unused)) inline OSSL_FUNC_cipher_get_ctx_params_fn *OSSL_FUNC_cipher_get_ctx_params(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_cipher_get_ctx_params_fn *)opf->function; }

typedef int (OSSL_FUNC_cipher_set_ctx_params_fn)(void *cctx, const OSSL_PARAM params[]); static __attribute__((unused)) inline OSSL_FUNC_cipher_set_ctx_params_fn *OSSL_FUNC_cipher_set_ctx_params(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_cipher_set_ctx_params_fn *)opf->function; }

typedef const OSSL_PARAM * (OSSL_FUNC_cipher_gettable_params_fn)(void *provctx); static __attribute__((unused)) inline OSSL_FUNC_cipher_gettable_params_fn *OSSL_FUNC_cipher_gettable_params(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_cipher_gettable_params_fn *)opf->function; }

typedef const OSSL_PARAM * (OSSL_FUNC_cipher_settable_ctx_params_fn)(void *cctx, void *provctx); static __attribute__((unused)) inline OSSL_FUNC_cipher_settable_ctx_params_fn *OSSL_FUNC_cipher_settable_ctx_params(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_cipher_settable_ctx_params_fn *)opf->function; }

typedef const OSSL_PARAM * (OSSL_FUNC_cipher_gettable_ctx_params_fn)(void *cctx, void *provctx); static __attribute__((unused)) inline OSSL_FUNC_cipher_gettable_ctx_params_fn *OSSL_FUNC_cipher_gettable_ctx_params(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_cipher_gettable_ctx_params_fn *)opf->function; }
# 383 "include/openssl/core_dispatch.h"
typedef void * (OSSL_FUNC_mac_newctx_fn)(void *provctx); static __attribute__((unused)) inline OSSL_FUNC_mac_newctx_fn *OSSL_FUNC_mac_newctx(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_mac_newctx_fn *)opf->function; }
typedef void * (OSSL_FUNC_mac_dupctx_fn)(void *src); static __attribute__((unused)) inline OSSL_FUNC_mac_dupctx_fn *OSSL_FUNC_mac_dupctx(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_mac_dupctx_fn *)opf->function; }
typedef void (OSSL_FUNC_mac_freectx_fn)(void *mctx); static __attribute__((unused)) inline OSSL_FUNC_mac_freectx_fn *OSSL_FUNC_mac_freectx(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_mac_freectx_fn *)opf->function; }
typedef int (OSSL_FUNC_mac_init_fn)(void *mctx, const unsigned char *key, size_t keylen, const OSSL_PARAM params[]); static __attribute__((unused)) inline OSSL_FUNC_mac_init_fn *OSSL_FUNC_mac_init(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_mac_init_fn *)opf->function; }

typedef int (OSSL_FUNC_mac_update_fn)(void *mctx, const unsigned char *in, size_t inl); static __attribute__((unused)) inline OSSL_FUNC_mac_update_fn *OSSL_FUNC_mac_update(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_mac_update_fn *)opf->function; }

typedef int (OSSL_FUNC_mac_final_fn)(void *mctx, unsigned char *out, size_t *outl, size_t outsize); static __attribute__((unused)) inline OSSL_FUNC_mac_final_fn *OSSL_FUNC_mac_final(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_mac_final_fn *)opf->function; }


typedef const OSSL_PARAM * (OSSL_FUNC_mac_gettable_params_fn)(void *provctx); static __attribute__((unused)) inline OSSL_FUNC_mac_gettable_params_fn *OSSL_FUNC_mac_gettable_params(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_mac_gettable_params_fn *)opf->function; }
typedef const OSSL_PARAM * (OSSL_FUNC_mac_gettable_ctx_params_fn)(void *mctx, void *provctx); static __attribute__((unused)) inline OSSL_FUNC_mac_gettable_ctx_params_fn *OSSL_FUNC_mac_gettable_ctx_params(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_mac_gettable_ctx_params_fn *)opf->function; }

typedef const OSSL_PARAM * (OSSL_FUNC_mac_settable_ctx_params_fn)(void *mctx, void *provctx); static __attribute__((unused)) inline OSSL_FUNC_mac_settable_ctx_params_fn *OSSL_FUNC_mac_settable_ctx_params(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_mac_settable_ctx_params_fn *)opf->function; }

typedef int (OSSL_FUNC_mac_get_params_fn)(OSSL_PARAM params[]); static __attribute__((unused)) inline OSSL_FUNC_mac_get_params_fn *OSSL_FUNC_mac_get_params(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_mac_get_params_fn *)opf->function; }
typedef int (OSSL_FUNC_mac_get_ctx_params_fn)(void *mctx, OSSL_PARAM params[]); static __attribute__((unused)) inline OSSL_FUNC_mac_get_ctx_params_fn *OSSL_FUNC_mac_get_ctx_params(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_mac_get_ctx_params_fn *)opf->function; }

typedef int (OSSL_FUNC_mac_set_ctx_params_fn)(void *mctx, const OSSL_PARAM params[]); static __attribute__((unused)) inline OSSL_FUNC_mac_set_ctx_params_fn *OSSL_FUNC_mac_set_ctx_params(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_mac_set_ctx_params_fn *)opf->function; }
# 418 "include/openssl/core_dispatch.h"
typedef void * (OSSL_FUNC_kdf_newctx_fn)(void *provctx); static __attribute__((unused)) inline OSSL_FUNC_kdf_newctx_fn *OSSL_FUNC_kdf_newctx(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_kdf_newctx_fn *)opf->function; }
typedef void * (OSSL_FUNC_kdf_dupctx_fn)(void *src); static __attribute__((unused)) inline OSSL_FUNC_kdf_dupctx_fn *OSSL_FUNC_kdf_dupctx(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_kdf_dupctx_fn *)opf->function; }
typedef void (OSSL_FUNC_kdf_freectx_fn)(void *kctx); static __attribute__((unused)) inline OSSL_FUNC_kdf_freectx_fn *OSSL_FUNC_kdf_freectx(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_kdf_freectx_fn *)opf->function; }
typedef void (OSSL_FUNC_kdf_reset_fn)(void *kctx); static __attribute__((unused)) inline OSSL_FUNC_kdf_reset_fn *OSSL_FUNC_kdf_reset(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_kdf_reset_fn *)opf->function; }
typedef int (OSSL_FUNC_kdf_derive_fn)(void *kctx, unsigned char *key, size_t keylen, const OSSL_PARAM params[]); static __attribute__((unused)) inline OSSL_FUNC_kdf_derive_fn *OSSL_FUNC_kdf_derive(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_kdf_derive_fn *)opf->function; }

typedef const OSSL_PARAM * (OSSL_FUNC_kdf_gettable_params_fn)(void *provctx); static __attribute__((unused)) inline OSSL_FUNC_kdf_gettable_params_fn *OSSL_FUNC_kdf_gettable_params(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_kdf_gettable_params_fn *)opf->function; }
typedef const OSSL_PARAM * (OSSL_FUNC_kdf_gettable_ctx_params_fn)(void *kctx, void *provctx); static __attribute__((unused)) inline OSSL_FUNC_kdf_gettable_ctx_params_fn *OSSL_FUNC_kdf_gettable_ctx_params(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_kdf_gettable_ctx_params_fn *)opf->function; }

typedef const OSSL_PARAM * (OSSL_FUNC_kdf_settable_ctx_params_fn)(void *kctx, void *provctx); static __attribute__((unused)) inline OSSL_FUNC_kdf_settable_ctx_params_fn *OSSL_FUNC_kdf_settable_ctx_params(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_kdf_settable_ctx_params_fn *)opf->function; }

typedef int (OSSL_FUNC_kdf_get_params_fn)(OSSL_PARAM params[]); static __attribute__((unused)) inline OSSL_FUNC_kdf_get_params_fn *OSSL_FUNC_kdf_get_params(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_kdf_get_params_fn *)opf->function; }
typedef int (OSSL_FUNC_kdf_get_ctx_params_fn)(void *kctx, OSSL_PARAM params[]); static __attribute__((unused)) inline OSSL_FUNC_kdf_get_ctx_params_fn *OSSL_FUNC_kdf_get_ctx_params(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_kdf_get_ctx_params_fn *)opf->function; }

typedef int (OSSL_FUNC_kdf_set_ctx_params_fn)(void *kctx, const OSSL_PARAM params[]); static __attribute__((unused)) inline OSSL_FUNC_kdf_set_ctx_params_fn *OSSL_FUNC_kdf_set_ctx_params(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_kdf_set_ctx_params_fn *)opf->function; }
# 457 "include/openssl/core_dispatch.h"
typedef void * (OSSL_FUNC_rand_newctx_fn)(void *provctx, void *parent, const OSSL_DISPATCH *parent_calls); static __attribute__((unused)) inline OSSL_FUNC_rand_newctx_fn *OSSL_FUNC_rand_newctx(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_rand_newctx_fn *)opf->function; }


typedef void (OSSL_FUNC_rand_freectx_fn)(void *vctx); static __attribute__((unused)) inline OSSL_FUNC_rand_freectx_fn *OSSL_FUNC_rand_freectx(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_rand_freectx_fn *)opf->function; }
typedef int (OSSL_FUNC_rand_instantiate_fn)(void *vdrbg, unsigned int strength, int prediction_resistance, const unsigned char *pstr, size_t pstr_len, const OSSL_PARAM params[]); static __attribute__((unused)) inline OSSL_FUNC_rand_instantiate_fn *OSSL_FUNC_rand_instantiate(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_rand_instantiate_fn *)opf->function; }




typedef int (OSSL_FUNC_rand_uninstantiate_fn)(void *vdrbg); static __attribute__((unused)) inline OSSL_FUNC_rand_uninstantiate_fn *OSSL_FUNC_rand_uninstantiate(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_rand_uninstantiate_fn *)opf->function; }
typedef int (OSSL_FUNC_rand_generate_fn)(void *vctx, unsigned char *out, size_t outlen, unsigned int strength, int prediction_resistance, const unsigned char *addin, size_t addin_len); static __attribute__((unused)) inline OSSL_FUNC_rand_generate_fn *OSSL_FUNC_rand_generate(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_rand_generate_fn *)opf->function; }



typedef int (OSSL_FUNC_rand_reseed_fn)(void *vctx, int prediction_resistance, const unsigned char *ent, size_t ent_len, const unsigned char *addin, size_t addin_len); static __attribute__((unused)) inline OSSL_FUNC_rand_reseed_fn *OSSL_FUNC_rand_reseed(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_rand_reseed_fn *)opf->function; }



typedef size_t (OSSL_FUNC_rand_nonce_fn)(void *vctx, unsigned char *out, unsigned int strength, size_t min_noncelen, size_t max_noncelen); static __attribute__((unused)) inline OSSL_FUNC_rand_nonce_fn *OSSL_FUNC_rand_nonce(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_rand_nonce_fn *)opf->function; }


typedef int (OSSL_FUNC_rand_enable_locking_fn)(void *vctx); static __attribute__((unused)) inline OSSL_FUNC_rand_enable_locking_fn *OSSL_FUNC_rand_enable_locking(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_rand_enable_locking_fn *)opf->function; }
typedef int (OSSL_FUNC_rand_lock_fn)(void *vctx); static __attribute__((unused)) inline OSSL_FUNC_rand_lock_fn *OSSL_FUNC_rand_lock(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_rand_lock_fn *)opf->function; }
typedef void (OSSL_FUNC_rand_unlock_fn)(void *vctx); static __attribute__((unused)) inline OSSL_FUNC_rand_unlock_fn *OSSL_FUNC_rand_unlock(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_rand_unlock_fn *)opf->function; }
typedef const OSSL_PARAM * (OSSL_FUNC_rand_gettable_params_fn)(void *provctx); static __attribute__((unused)) inline OSSL_FUNC_rand_gettable_params_fn *OSSL_FUNC_rand_gettable_params(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_rand_gettable_params_fn *)opf->function; }
typedef const OSSL_PARAM * (OSSL_FUNC_rand_gettable_ctx_params_fn)(void *vctx, void *provctx); static __attribute__((unused)) inline OSSL_FUNC_rand_gettable_ctx_params_fn *OSSL_FUNC_rand_gettable_ctx_params(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_rand_gettable_ctx_params_fn *)opf->function; }

typedef const OSSL_PARAM * (OSSL_FUNC_rand_settable_ctx_params_fn)(void *vctx, void *provctx); static __attribute__((unused)) inline OSSL_FUNC_rand_settable_ctx_params_fn *OSSL_FUNC_rand_settable_ctx_params(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_rand_settable_ctx_params_fn *)opf->function; }

typedef int (OSSL_FUNC_rand_get_params_fn)(OSSL_PARAM params[]); static __attribute__((unused)) inline OSSL_FUNC_rand_get_params_fn *OSSL_FUNC_rand_get_params(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_rand_get_params_fn *)opf->function; }
typedef int (OSSL_FUNC_rand_get_ctx_params_fn)(void *vctx, OSSL_PARAM params[]); static __attribute__((unused)) inline OSSL_FUNC_rand_get_ctx_params_fn *OSSL_FUNC_rand_get_ctx_params(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_rand_get_ctx_params_fn *)opf->function; }

typedef int (OSSL_FUNC_rand_set_ctx_params_fn)(void *vctx, const OSSL_PARAM params[]); static __attribute__((unused)) inline OSSL_FUNC_rand_set_ctx_params_fn *OSSL_FUNC_rand_set_ctx_params(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_rand_set_ctx_params_fn *)opf->function; }

typedef void (OSSL_FUNC_rand_set_callbacks_fn)(void *vctx, OSSL_INOUT_CALLBACK *get_entropy, OSSL_CALLBACK *cleanup_entropy, OSSL_INOUT_CALLBACK *get_nonce, OSSL_CALLBACK *cleanup_nonce, void *arg); static __attribute__((unused)) inline OSSL_FUNC_rand_set_callbacks_fn *OSSL_FUNC_rand_set_callbacks(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_rand_set_callbacks_fn *)opf->function; }




typedef int (OSSL_FUNC_rand_verify_zeroization_fn)(void *vctx); static __attribute__((unused)) inline OSSL_FUNC_rand_verify_zeroization_fn *OSSL_FUNC_rand_verify_zeroization(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_rand_verify_zeroization_fn *)opf->function; }

typedef size_t (OSSL_FUNC_rand_get_seed_fn)(void *vctx, unsigned char **buffer, int entropy, size_t min_len, size_t max_len, int prediction_resistance, const unsigned char *adin, size_t adin_len); static __attribute__((unused)) inline OSSL_FUNC_rand_get_seed_fn *OSSL_FUNC_rand_get_seed(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_rand_get_seed_fn *)opf->function; }




typedef void (OSSL_FUNC_rand_clear_seed_fn)(void *vctx, unsigned char *buffer, size_t b_len); static __attribute__((unused)) inline OSSL_FUNC_rand_clear_seed_fn *OSSL_FUNC_rand_clear_seed(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_rand_clear_seed_fn *)opf->function; }
# 561 "include/openssl/core_dispatch.h"
typedef void * (OSSL_FUNC_keymgmt_new_fn)(void *provctx); static __attribute__((unused)) inline OSSL_FUNC_keymgmt_new_fn *OSSL_FUNC_keymgmt_new(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_keymgmt_new_fn *)opf->function; }
# 570 "include/openssl/core_dispatch.h"
typedef void * (OSSL_FUNC_keymgmt_gen_init_fn)(void *provctx, int selection, const OSSL_PARAM params[]); static __attribute__((unused)) inline OSSL_FUNC_keymgmt_gen_init_fn *OSSL_FUNC_keymgmt_gen_init(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_keymgmt_gen_init_fn *)opf->function; }

typedef int (OSSL_FUNC_keymgmt_gen_set_template_fn)(void *genctx, void *templ); static __attribute__((unused)) inline OSSL_FUNC_keymgmt_gen_set_template_fn *OSSL_FUNC_keymgmt_gen_set_template(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_keymgmt_gen_set_template_fn *)opf->function; }

typedef int (OSSL_FUNC_keymgmt_gen_set_params_fn)(void *genctx, const OSSL_PARAM params[]); static __attribute__((unused)) inline OSSL_FUNC_keymgmt_gen_set_params_fn *OSSL_FUNC_keymgmt_gen_set_params(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_keymgmt_gen_set_params_fn *)opf->function; }

typedef const OSSL_PARAM * (OSSL_FUNC_keymgmt_gen_settable_params_fn)(void *genctx, void *provctx); static __attribute__((unused)) inline OSSL_FUNC_keymgmt_gen_settable_params_fn *OSSL_FUNC_keymgmt_gen_settable_params(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_keymgmt_gen_settable_params_fn *)opf->function; }


typedef void * (OSSL_FUNC_keymgmt_gen_fn)(void *genctx, OSSL_CALLBACK *cb, void *cbarg); static __attribute__((unused)) inline OSSL_FUNC_keymgmt_gen_fn *OSSL_FUNC_keymgmt_gen(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_keymgmt_gen_fn *)opf->function; }

typedef void (OSSL_FUNC_keymgmt_gen_cleanup_fn)(void *genctx); static __attribute__((unused)) inline OSSL_FUNC_keymgmt_gen_cleanup_fn *OSSL_FUNC_keymgmt_gen_cleanup(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_keymgmt_gen_cleanup_fn *)opf->function; }



typedef void * (OSSL_FUNC_keymgmt_load_fn)(const void *reference, size_t reference_sz); static __attribute__((unused)) inline OSSL_FUNC_keymgmt_load_fn *OSSL_FUNC_keymgmt_load(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_keymgmt_load_fn *)opf->function; }




typedef void (OSSL_FUNC_keymgmt_free_fn)(void *keydata); static __attribute__((unused)) inline OSSL_FUNC_keymgmt_free_fn *OSSL_FUNC_keymgmt_free(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_keymgmt_free_fn *)opf->function; }




typedef int (OSSL_FUNC_keymgmt_get_params_fn)(void *keydata, OSSL_PARAM params[]); static __attribute__((unused)) inline OSSL_FUNC_keymgmt_get_params_fn *OSSL_FUNC_keymgmt_get_params(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_keymgmt_get_params_fn *)opf->function; }

typedef const OSSL_PARAM * (OSSL_FUNC_keymgmt_gettable_params_fn)(void *provctx); static __attribute__((unused)) inline OSSL_FUNC_keymgmt_gettable_params_fn *OSSL_FUNC_keymgmt_gettable_params(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_keymgmt_gettable_params_fn *)opf->function; }




typedef int (OSSL_FUNC_keymgmt_set_params_fn)(void *keydata, const OSSL_PARAM params[]); static __attribute__((unused)) inline OSSL_FUNC_keymgmt_set_params_fn *OSSL_FUNC_keymgmt_set_params(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_keymgmt_set_params_fn *)opf->function; }

typedef const OSSL_PARAM * (OSSL_FUNC_keymgmt_settable_params_fn)(void *provctx); static __attribute__((unused)) inline OSSL_FUNC_keymgmt_settable_params_fn *OSSL_FUNC_keymgmt_settable_params(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_keymgmt_settable_params_fn *)opf->function; }




typedef const char * (OSSL_FUNC_keymgmt_query_operation_name_fn)(int operation_id); static __attribute__((unused)) inline OSSL_FUNC_keymgmt_query_operation_name_fn *OSSL_FUNC_keymgmt_query_operation_name(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_keymgmt_query_operation_name_fn *)opf->function; }




typedef int (OSSL_FUNC_keymgmt_has_fn)(const void *keydata, int selection); static __attribute__((unused)) inline OSSL_FUNC_keymgmt_has_fn *OSSL_FUNC_keymgmt_has(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_keymgmt_has_fn *)opf->function; }



typedef int (OSSL_FUNC_keymgmt_validate_fn)(const void *keydata, int selection, int checktype); static __attribute__((unused)) inline OSSL_FUNC_keymgmt_validate_fn *OSSL_FUNC_keymgmt_validate(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_keymgmt_validate_fn *)opf->function; }




typedef int (OSSL_FUNC_keymgmt_match_fn)(const void *keydata1, const void *keydata2, int selection); static __attribute__((unused)) inline OSSL_FUNC_keymgmt_match_fn *OSSL_FUNC_keymgmt_match(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_keymgmt_match_fn *)opf->function; }
# 632 "include/openssl/core_dispatch.h"
typedef int (OSSL_FUNC_keymgmt_import_fn)(void *keydata, int selection, const OSSL_PARAM params[]); static __attribute__((unused)) inline OSSL_FUNC_keymgmt_import_fn *OSSL_FUNC_keymgmt_import(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_keymgmt_import_fn *)opf->function; }

typedef const OSSL_PARAM * (OSSL_FUNC_keymgmt_import_types_fn)(int selection); static __attribute__((unused)) inline OSSL_FUNC_keymgmt_import_types_fn *OSSL_FUNC_keymgmt_import_types(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_keymgmt_import_types_fn *)opf->function; }

typedef int (OSSL_FUNC_keymgmt_export_fn)(void *keydata, int selection, OSSL_CALLBACK *param_cb, void *cbarg); static __attribute__((unused)) inline OSSL_FUNC_keymgmt_export_fn *OSSL_FUNC_keymgmt_export(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_keymgmt_export_fn *)opf->function; }


typedef const OSSL_PARAM * (OSSL_FUNC_keymgmt_export_types_fn)(int selection); static __attribute__((unused)) inline OSSL_FUNC_keymgmt_export_types_fn *OSSL_FUNC_keymgmt_export_types(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_keymgmt_export_types_fn *)opf->function; }




typedef void * (OSSL_FUNC_keymgmt_dup_fn)(const void *keydata_from, int selection); static __attribute__((unused)) inline OSSL_FUNC_keymgmt_dup_fn *OSSL_FUNC_keymgmt_dup(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_keymgmt_dup_fn *)opf->function; }
# 660 "include/openssl/core_dispatch.h"
typedef void * (OSSL_FUNC_keyexch_newctx_fn)(void *provctx); static __attribute__((unused)) inline OSSL_FUNC_keyexch_newctx_fn *OSSL_FUNC_keyexch_newctx(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_keyexch_newctx_fn *)opf->function; }
typedef int (OSSL_FUNC_keyexch_init_fn)(void *ctx, void *provkey, const OSSL_PARAM params[]); static __attribute__((unused)) inline OSSL_FUNC_keyexch_init_fn *OSSL_FUNC_keyexch_init(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_keyexch_init_fn *)opf->function; }

typedef int (OSSL_FUNC_keyexch_derive_fn)(void *ctx, unsigned char *secret, size_t *secretlen, size_t outlen); static __attribute__((unused)) inline OSSL_FUNC_keyexch_derive_fn *OSSL_FUNC_keyexch_derive(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_keyexch_derive_fn *)opf->function; }

typedef int (OSSL_FUNC_keyexch_set_peer_fn)(void *ctx, void *provkey); static __attribute__((unused)) inline OSSL_FUNC_keyexch_set_peer_fn *OSSL_FUNC_keyexch_set_peer(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_keyexch_set_peer_fn *)opf->function; }
typedef void (OSSL_FUNC_keyexch_freectx_fn)(void *ctx); static __attribute__((unused)) inline OSSL_FUNC_keyexch_freectx_fn *OSSL_FUNC_keyexch_freectx(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_keyexch_freectx_fn *)opf->function; }
typedef void * (OSSL_FUNC_keyexch_dupctx_fn)(void *ctx); static __attribute__((unused)) inline OSSL_FUNC_keyexch_dupctx_fn *OSSL_FUNC_keyexch_dupctx(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_keyexch_dupctx_fn *)opf->function; }
typedef int (OSSL_FUNC_keyexch_set_ctx_params_fn)(void *ctx, const OSSL_PARAM params[]); static __attribute__((unused)) inline OSSL_FUNC_keyexch_set_ctx_params_fn *OSSL_FUNC_keyexch_set_ctx_params(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_keyexch_set_ctx_params_fn *)opf->function; }

typedef const OSSL_PARAM * (OSSL_FUNC_keyexch_settable_ctx_params_fn)(void *ctx, void *provctx); static __attribute__((unused)) inline OSSL_FUNC_keyexch_settable_ctx_params_fn *OSSL_FUNC_keyexch_settable_ctx_params(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_keyexch_settable_ctx_params_fn *)opf->function; }

typedef int (OSSL_FUNC_keyexch_get_ctx_params_fn)(void *ctx, OSSL_PARAM params[]); static __attribute__((unused)) inline OSSL_FUNC_keyexch_get_ctx_params_fn *OSSL_FUNC_keyexch_get_ctx_params(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_keyexch_get_ctx_params_fn *)opf->function; }

typedef const OSSL_PARAM * (OSSL_FUNC_keyexch_gettable_ctx_params_fn)(void *ctx, void *provctx); static __attribute__((unused)) inline OSSL_FUNC_keyexch_gettable_ctx_params_fn *OSSL_FUNC_keyexch_gettable_ctx_params(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_keyexch_gettable_ctx_params_fn *)opf->function; }
# 705 "include/openssl/core_dispatch.h"
typedef void * (OSSL_FUNC_signature_newctx_fn)(void *provctx, const char *propq); static __attribute__((unused)) inline OSSL_FUNC_signature_newctx_fn *OSSL_FUNC_signature_newctx(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_signature_newctx_fn *)opf->function; }

typedef int (OSSL_FUNC_signature_sign_init_fn)(void *ctx, void *provkey, const OSSL_PARAM params[]); static __attribute__((unused)) inline OSSL_FUNC_signature_sign_init_fn *OSSL_FUNC_signature_sign_init(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_signature_sign_init_fn *)opf->function; }

typedef int (OSSL_FUNC_signature_sign_fn)(void *ctx, unsigned char *sig, size_t *siglen, size_t sigsize, const unsigned char *tbs, size_t tbslen); static __attribute__((unused)) inline OSSL_FUNC_signature_sign_fn *OSSL_FUNC_signature_sign(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_signature_sign_fn *)opf->function; }



typedef int (OSSL_FUNC_signature_verify_init_fn)(void *ctx, void *provkey, const OSSL_PARAM params[]); static __attribute__((unused)) inline OSSL_FUNC_signature_verify_init_fn *OSSL_FUNC_signature_verify_init(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_signature_verify_init_fn *)opf->function; }

typedef int (OSSL_FUNC_signature_verify_fn)(void *ctx, const unsigned char *sig, size_t siglen, const unsigned char *tbs, size_t tbslen); static __attribute__((unused)) inline OSSL_FUNC_signature_verify_fn *OSSL_FUNC_signature_verify(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_signature_verify_fn *)opf->function; }




typedef int (OSSL_FUNC_signature_verify_recover_init_fn)(void *ctx, void *provkey, const OSSL_PARAM params[]); static __attribute__((unused)) inline OSSL_FUNC_signature_verify_recover_init_fn *OSSL_FUNC_signature_verify_recover_init(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_signature_verify_recover_init_fn *)opf->function; }

typedef int (OSSL_FUNC_signature_verify_recover_fn)(void *ctx, unsigned char *rout, size_t *routlen, size_t routsize, const unsigned char *sig, size_t siglen); static __attribute__((unused)) inline OSSL_FUNC_signature_verify_recover_fn *OSSL_FUNC_signature_verify_recover(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_signature_verify_recover_fn *)opf->function; }


typedef int (OSSL_FUNC_signature_digest_sign_init_fn)(void *ctx, const char *mdname, void *provkey, const OSSL_PARAM params[]); static __attribute__((unused)) inline OSSL_FUNC_signature_digest_sign_init_fn *OSSL_FUNC_signature_digest_sign_init(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_signature_digest_sign_init_fn *)opf->function; }


typedef int (OSSL_FUNC_signature_digest_sign_update_fn)(void *ctx, const unsigned char *data, size_t datalen); static __attribute__((unused)) inline OSSL_FUNC_signature_digest_sign_update_fn *OSSL_FUNC_signature_digest_sign_update(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_signature_digest_sign_update_fn *)opf->function; }

typedef int (OSSL_FUNC_signature_digest_sign_final_fn)(void *ctx, unsigned char *sig, size_t *siglen, size_t sigsize); static __attribute__((unused)) inline OSSL_FUNC_signature_digest_sign_final_fn *OSSL_FUNC_signature_digest_sign_final(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_signature_digest_sign_final_fn *)opf->function; }


typedef int (OSSL_FUNC_signature_digest_sign_fn)(void *ctx, unsigned char *sigret, size_t *siglen, size_t sigsize, const unsigned char *tbs, size_t tbslen); static __attribute__((unused)) inline OSSL_FUNC_signature_digest_sign_fn *OSSL_FUNC_signature_digest_sign(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_signature_digest_sign_fn *)opf->function; }


typedef int (OSSL_FUNC_signature_digest_verify_init_fn)(void *ctx, const char *mdname, void *provkey, const OSSL_PARAM params[]); static __attribute__((unused)) inline OSSL_FUNC_signature_digest_verify_init_fn *OSSL_FUNC_signature_digest_verify_init(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_signature_digest_verify_init_fn *)opf->function; }


typedef int (OSSL_FUNC_signature_digest_verify_update_fn)(void *ctx, const unsigned char *data, size_t datalen); static __attribute__((unused)) inline OSSL_FUNC_signature_digest_verify_update_fn *OSSL_FUNC_signature_digest_verify_update(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_signature_digest_verify_update_fn *)opf->function; }

typedef int (OSSL_FUNC_signature_digest_verify_final_fn)(void *ctx, const unsigned char *sig, size_t siglen); static __attribute__((unused)) inline OSSL_FUNC_signature_digest_verify_final_fn *OSSL_FUNC_signature_digest_verify_final(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_signature_digest_verify_final_fn *)opf->function; }

typedef int (OSSL_FUNC_signature_digest_verify_fn)(void *ctx, const unsigned char *sig, size_t siglen, const unsigned char *tbs, size_t tbslen); static __attribute__((unused)) inline OSSL_FUNC_signature_digest_verify_fn *OSSL_FUNC_signature_digest_verify(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_signature_digest_verify_fn *)opf->function; }


typedef void (OSSL_FUNC_signature_freectx_fn)(void *ctx); static __attribute__((unused)) inline OSSL_FUNC_signature_freectx_fn *OSSL_FUNC_signature_freectx(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_signature_freectx_fn *)opf->function; }
typedef void * (OSSL_FUNC_signature_dupctx_fn)(void *ctx); static __attribute__((unused)) inline OSSL_FUNC_signature_dupctx_fn *OSSL_FUNC_signature_dupctx(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_signature_dupctx_fn *)opf->function; }
typedef int (OSSL_FUNC_signature_get_ctx_params_fn)(void *ctx, OSSL_PARAM params[]); static __attribute__((unused)) inline OSSL_FUNC_signature_get_ctx_params_fn *OSSL_FUNC_signature_get_ctx_params(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_signature_get_ctx_params_fn *)opf->function; }

typedef const OSSL_PARAM * (OSSL_FUNC_signature_gettable_ctx_params_fn)(void *ctx, void *provctx); static __attribute__((unused)) inline OSSL_FUNC_signature_gettable_ctx_params_fn *OSSL_FUNC_signature_gettable_ctx_params(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_signature_gettable_ctx_params_fn *)opf->function; }

typedef int (OSSL_FUNC_signature_set_ctx_params_fn)(void *ctx, const OSSL_PARAM params[]); static __attribute__((unused)) inline OSSL_FUNC_signature_set_ctx_params_fn *OSSL_FUNC_signature_set_ctx_params(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_signature_set_ctx_params_fn *)opf->function; }

typedef const OSSL_PARAM * (OSSL_FUNC_signature_settable_ctx_params_fn)(void *ctx, void *provctx); static __attribute__((unused)) inline OSSL_FUNC_signature_settable_ctx_params_fn *OSSL_FUNC_signature_settable_ctx_params(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_signature_settable_ctx_params_fn *)opf->function; }

typedef int (OSSL_FUNC_signature_get_ctx_md_params_fn)(void *ctx, OSSL_PARAM params[]); static __attribute__((unused)) inline OSSL_FUNC_signature_get_ctx_md_params_fn *OSSL_FUNC_signature_get_ctx_md_params(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_signature_get_ctx_md_params_fn *)opf->function; }

typedef const OSSL_PARAM * (OSSL_FUNC_signature_gettable_ctx_md_params_fn)(void *ctx); static __attribute__((unused)) inline OSSL_FUNC_signature_gettable_ctx_md_params_fn *OSSL_FUNC_signature_gettable_ctx_md_params(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_signature_gettable_ctx_md_params_fn *)opf->function; }

typedef int (OSSL_FUNC_signature_set_ctx_md_params_fn)(void *ctx, const OSSL_PARAM params[]); static __attribute__((unused)) inline OSSL_FUNC_signature_set_ctx_md_params_fn *OSSL_FUNC_signature_set_ctx_md_params(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_signature_set_ctx_md_params_fn *)opf->function; }

typedef const OSSL_PARAM * (OSSL_FUNC_signature_settable_ctx_md_params_fn)(void *ctx); static __attribute__((unused)) inline OSSL_FUNC_signature_settable_ctx_md_params_fn *OSSL_FUNC_signature_settable_ctx_md_params(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_signature_settable_ctx_md_params_fn *)opf->function; }
# 780 "include/openssl/core_dispatch.h"
typedef void * (OSSL_FUNC_asym_cipher_newctx_fn)(void *provctx); static __attribute__((unused)) inline OSSL_FUNC_asym_cipher_newctx_fn *OSSL_FUNC_asym_cipher_newctx(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_asym_cipher_newctx_fn *)opf->function; }
typedef int (OSSL_FUNC_asym_cipher_encrypt_init_fn)(void *ctx, void *provkey, const OSSL_PARAM params[]); static __attribute__((unused)) inline OSSL_FUNC_asym_cipher_encrypt_init_fn *OSSL_FUNC_asym_cipher_encrypt_init(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_asym_cipher_encrypt_init_fn *)opf->function; }

typedef int (OSSL_FUNC_asym_cipher_encrypt_fn)(void *ctx, unsigned char *out, size_t *outlen, size_t outsize, const unsigned char *in, size_t inlen); static __attribute__((unused)) inline OSSL_FUNC_asym_cipher_encrypt_fn *OSSL_FUNC_asym_cipher_encrypt(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_asym_cipher_encrypt_fn *)opf->function; }




typedef int (OSSL_FUNC_asym_cipher_decrypt_init_fn)(void *ctx, void *provkey, const OSSL_PARAM params[]); static __attribute__((unused)) inline OSSL_FUNC_asym_cipher_decrypt_init_fn *OSSL_FUNC_asym_cipher_decrypt_init(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_asym_cipher_decrypt_init_fn *)opf->function; }

typedef int (OSSL_FUNC_asym_cipher_decrypt_fn)(void *ctx, unsigned char *out, size_t *outlen, size_t outsize, const unsigned char *in, size_t inlen); static __attribute__((unused)) inline OSSL_FUNC_asym_cipher_decrypt_fn *OSSL_FUNC_asym_cipher_decrypt(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_asym_cipher_decrypt_fn *)opf->function; }




typedef void (OSSL_FUNC_asym_cipher_freectx_fn)(void *ctx); static __attribute__((unused)) inline OSSL_FUNC_asym_cipher_freectx_fn *OSSL_FUNC_asym_cipher_freectx(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_asym_cipher_freectx_fn *)opf->function; }
typedef void * (OSSL_FUNC_asym_cipher_dupctx_fn)(void *ctx); static __attribute__((unused)) inline OSSL_FUNC_asym_cipher_dupctx_fn *OSSL_FUNC_asym_cipher_dupctx(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_asym_cipher_dupctx_fn *)opf->function; }
typedef int (OSSL_FUNC_asym_cipher_get_ctx_params_fn)(void *ctx, OSSL_PARAM params[]); static __attribute__((unused)) inline OSSL_FUNC_asym_cipher_get_ctx_params_fn *OSSL_FUNC_asym_cipher_get_ctx_params(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_asym_cipher_get_ctx_params_fn *)opf->function; }

typedef const OSSL_PARAM * (OSSL_FUNC_asym_cipher_gettable_ctx_params_fn)(void *ctx, void *provctx); static __attribute__((unused)) inline OSSL_FUNC_asym_cipher_gettable_ctx_params_fn *OSSL_FUNC_asym_cipher_gettable_ctx_params(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_asym_cipher_gettable_ctx_params_fn *)opf->function; }

typedef int (OSSL_FUNC_asym_cipher_set_ctx_params_fn)(void *ctx, const OSSL_PARAM params[]); static __attribute__((unused)) inline OSSL_FUNC_asym_cipher_set_ctx_params_fn *OSSL_FUNC_asym_cipher_set_ctx_params(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_asym_cipher_set_ctx_params_fn *)opf->function; }

typedef const OSSL_PARAM * (OSSL_FUNC_asym_cipher_settable_ctx_params_fn)(void *ctx, void *provctx); static __attribute__((unused)) inline OSSL_FUNC_asym_cipher_settable_ctx_params_fn *OSSL_FUNC_asym_cipher_settable_ctx_params(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_asym_cipher_settable_ctx_params_fn *)opf->function; }
# 819 "include/openssl/core_dispatch.h"
typedef void * (OSSL_FUNC_kem_newctx_fn)(void *provctx); static __attribute__((unused)) inline OSSL_FUNC_kem_newctx_fn *OSSL_FUNC_kem_newctx(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_kem_newctx_fn *)opf->function; }
typedef int (OSSL_FUNC_kem_encapsulate_init_fn)(void *ctx, void *provkey, const OSSL_PARAM params[]); static __attribute__((unused)) inline OSSL_FUNC_kem_encapsulate_init_fn *OSSL_FUNC_kem_encapsulate_init(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_kem_encapsulate_init_fn *)opf->function; }

typedef int (OSSL_FUNC_kem_encapsulate_fn)(void *ctx, unsigned char *out, size_t *outlen, unsigned char *secret, size_t *secretlen); static __attribute__((unused)) inline OSSL_FUNC_kem_encapsulate_fn *OSSL_FUNC_kem_encapsulate(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_kem_encapsulate_fn *)opf->function; }



typedef int (OSSL_FUNC_kem_decapsulate_init_fn)(void *ctx, void *provkey, const OSSL_PARAM params[]); static __attribute__((unused)) inline OSSL_FUNC_kem_decapsulate_init_fn *OSSL_FUNC_kem_decapsulate_init(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_kem_decapsulate_init_fn *)opf->function; }

typedef int (OSSL_FUNC_kem_decapsulate_fn)(void *ctx, unsigned char *out, size_t *outlen, const unsigned char *in, size_t inlen); static __attribute__((unused)) inline OSSL_FUNC_kem_decapsulate_fn *OSSL_FUNC_kem_decapsulate(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_kem_decapsulate_fn *)opf->function; }


typedef void (OSSL_FUNC_kem_freectx_fn)(void *ctx); static __attribute__((unused)) inline OSSL_FUNC_kem_freectx_fn *OSSL_FUNC_kem_freectx(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_kem_freectx_fn *)opf->function; }
typedef void * (OSSL_FUNC_kem_dupctx_fn)(void *ctx); static __attribute__((unused)) inline OSSL_FUNC_kem_dupctx_fn *OSSL_FUNC_kem_dupctx(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_kem_dupctx_fn *)opf->function; }
typedef int (OSSL_FUNC_kem_get_ctx_params_fn)(void *ctx, OSSL_PARAM params[]); static __attribute__((unused)) inline OSSL_FUNC_kem_get_ctx_params_fn *OSSL_FUNC_kem_get_ctx_params(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_kem_get_ctx_params_fn *)opf->function; }
typedef const OSSL_PARAM * (OSSL_FUNC_kem_gettable_ctx_params_fn)(void *ctx, void *provctx); static __attribute__((unused)) inline OSSL_FUNC_kem_gettable_ctx_params_fn *OSSL_FUNC_kem_gettable_ctx_params(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_kem_gettable_ctx_params_fn *)opf->function; }

typedef int (OSSL_FUNC_kem_set_ctx_params_fn)(void *ctx, const OSSL_PARAM params[]); static __attribute__((unused)) inline OSSL_FUNC_kem_set_ctx_params_fn *OSSL_FUNC_kem_set_ctx_params(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_kem_set_ctx_params_fn *)opf->function; }

typedef const OSSL_PARAM * (OSSL_FUNC_kem_settable_ctx_params_fn)(void *ctx, void *provctx); static __attribute__((unused)) inline OSSL_FUNC_kem_settable_ctx_params_fn *OSSL_FUNC_kem_settable_ctx_params(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_kem_settable_ctx_params_fn *)opf->function; }
# 852 "include/openssl/core_dispatch.h"
typedef void * (OSSL_FUNC_encoder_newctx_fn)(void *provctx); static __attribute__((unused)) inline OSSL_FUNC_encoder_newctx_fn *OSSL_FUNC_encoder_newctx(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_encoder_newctx_fn *)opf->function; }
typedef void (OSSL_FUNC_encoder_freectx_fn)(void *ctx); static __attribute__((unused)) inline OSSL_FUNC_encoder_freectx_fn *OSSL_FUNC_encoder_freectx(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_encoder_freectx_fn *)opf->function; }
typedef int (OSSL_FUNC_encoder_get_params_fn)(OSSL_PARAM params[]); static __attribute__((unused)) inline OSSL_FUNC_encoder_get_params_fn *OSSL_FUNC_encoder_get_params(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_encoder_get_params_fn *)opf->function; }
typedef const OSSL_PARAM * (OSSL_FUNC_encoder_gettable_params_fn)(void *provctx); static __attribute__((unused)) inline OSSL_FUNC_encoder_gettable_params_fn *OSSL_FUNC_encoder_gettable_params(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_encoder_gettable_params_fn *)opf->function; }

typedef int (OSSL_FUNC_encoder_set_ctx_params_fn)(void *ctx, const OSSL_PARAM params[]); static __attribute__((unused)) inline OSSL_FUNC_encoder_set_ctx_params_fn *OSSL_FUNC_encoder_set_ctx_params(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_encoder_set_ctx_params_fn *)opf->function; }

typedef const OSSL_PARAM * (OSSL_FUNC_encoder_settable_ctx_params_fn)(void *provctx); static __attribute__((unused)) inline OSSL_FUNC_encoder_settable_ctx_params_fn *OSSL_FUNC_encoder_settable_ctx_params(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_encoder_settable_ctx_params_fn *)opf->function; }


typedef int (OSSL_FUNC_encoder_does_selection_fn)(void *provctx, int selection); static __attribute__((unused)) inline OSSL_FUNC_encoder_does_selection_fn *OSSL_FUNC_encoder_does_selection(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_encoder_does_selection_fn *)opf->function; }

typedef int (OSSL_FUNC_encoder_encode_fn)(void *ctx, OSSL_CORE_BIO *out, const void *obj_raw, const OSSL_PARAM obj_abstract[], int selection, OSSL_PASSPHRASE_CALLBACK *cb, void *cbarg); static __attribute__((unused)) inline OSSL_FUNC_encoder_encode_fn *OSSL_FUNC_encoder_encode(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_encoder_encode_fn *)opf->function; }





typedef void * (OSSL_FUNC_encoder_import_object_fn)(void *ctx, int selection, const OSSL_PARAM params[]); static __attribute__((unused)) inline OSSL_FUNC_encoder_import_object_fn *OSSL_FUNC_encoder_import_object(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_encoder_import_object_fn *)opf->function; }

typedef void (OSSL_FUNC_encoder_free_object_fn)(void *obj); static __attribute__((unused)) inline OSSL_FUNC_encoder_free_object_fn *OSSL_FUNC_encoder_free_object(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_encoder_free_object_fn *)opf->function; }
# 883 "include/openssl/core_dispatch.h"
typedef void * (OSSL_FUNC_decoder_newctx_fn)(void *provctx); static __attribute__((unused)) inline OSSL_FUNC_decoder_newctx_fn *OSSL_FUNC_decoder_newctx(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_decoder_newctx_fn *)opf->function; }
typedef void (OSSL_FUNC_decoder_freectx_fn)(void *ctx); static __attribute__((unused)) inline OSSL_FUNC_decoder_freectx_fn *OSSL_FUNC_decoder_freectx(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_decoder_freectx_fn *)opf->function; }
typedef int (OSSL_FUNC_decoder_get_params_fn)(OSSL_PARAM params[]); static __attribute__((unused)) inline OSSL_FUNC_decoder_get_params_fn *OSSL_FUNC_decoder_get_params(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_decoder_get_params_fn *)opf->function; }
typedef const OSSL_PARAM * (OSSL_FUNC_decoder_gettable_params_fn)(void *provctx); static __attribute__((unused)) inline OSSL_FUNC_decoder_gettable_params_fn *OSSL_FUNC_decoder_gettable_params(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_decoder_gettable_params_fn *)opf->function; }

typedef int (OSSL_FUNC_decoder_set_ctx_params_fn)(void *ctx, const OSSL_PARAM params[]); static __attribute__((unused)) inline OSSL_FUNC_decoder_set_ctx_params_fn *OSSL_FUNC_decoder_set_ctx_params(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_decoder_set_ctx_params_fn *)opf->function; }

typedef const OSSL_PARAM * (OSSL_FUNC_decoder_settable_ctx_params_fn)(void *provctx); static __attribute__((unused)) inline OSSL_FUNC_decoder_settable_ctx_params_fn *OSSL_FUNC_decoder_settable_ctx_params(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_decoder_settable_ctx_params_fn *)opf->function; }


typedef int (OSSL_FUNC_decoder_does_selection_fn)(void *provctx, int selection); static __attribute__((unused)) inline OSSL_FUNC_decoder_does_selection_fn *OSSL_FUNC_decoder_does_selection(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_decoder_does_selection_fn *)opf->function; }

typedef int (OSSL_FUNC_decoder_decode_fn)(void *ctx, OSSL_CORE_BIO *in, int selection, OSSL_CALLBACK *data_cb, void *data_cbarg, OSSL_PASSPHRASE_CALLBACK *pw_cb, void *pw_cbarg); static __attribute__((unused)) inline OSSL_FUNC_decoder_decode_fn *OSSL_FUNC_decoder_decode(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_decoder_decode_fn *)opf->function; }



typedef int (OSSL_FUNC_decoder_export_object_fn)(void *ctx, const void *objref, size_t objref_sz, OSSL_CALLBACK *export_cb, void *export_cbarg); static __attribute__((unused)) inline OSSL_FUNC_decoder_export_object_fn *OSSL_FUNC_decoder_export_object(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_decoder_export_object_fn *)opf->function; }
# 923 "include/openssl/core_dispatch.h"
typedef void * (OSSL_FUNC_store_open_fn)(void *provctx, const char *uri); static __attribute__((unused)) inline OSSL_FUNC_store_open_fn *OSSL_FUNC_store_open(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_store_open_fn *)opf->function; }
typedef void * (OSSL_FUNC_store_attach_fn)(void *provctx, OSSL_CORE_BIO *in); static __attribute__((unused)) inline OSSL_FUNC_store_attach_fn *OSSL_FUNC_store_attach(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_store_attach_fn *)opf->function; }
typedef const OSSL_PARAM * (OSSL_FUNC_store_settable_ctx_params_fn)(void *provctx); static __attribute__((unused)) inline OSSL_FUNC_store_settable_ctx_params_fn *OSSL_FUNC_store_settable_ctx_params(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_store_settable_ctx_params_fn *)opf->function; }

typedef int (OSSL_FUNC_store_set_ctx_params_fn)(void *loaderctx, const OSSL_PARAM params[]); static __attribute__((unused)) inline OSSL_FUNC_store_set_ctx_params_fn *OSSL_FUNC_store_set_ctx_params(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_store_set_ctx_params_fn *)opf->function; }

typedef int (OSSL_FUNC_store_load_fn)(void *loaderctx, OSSL_CALLBACK *object_cb, void *object_cbarg, OSSL_PASSPHRASE_CALLBACK *pw_cb, void *pw_cbarg); static __attribute__((unused)) inline OSSL_FUNC_store_load_fn *OSSL_FUNC_store_load(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_store_load_fn *)opf->function; }



typedef int (OSSL_FUNC_store_eof_fn)(void *loaderctx); static __attribute__((unused)) inline OSSL_FUNC_store_eof_fn *OSSL_FUNC_store_eof(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_store_eof_fn *)opf->function; }
typedef int (OSSL_FUNC_store_close_fn)(void *loaderctx); static __attribute__((unused)) inline OSSL_FUNC_store_close_fn *OSSL_FUNC_store_close(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_store_close_fn *)opf->function; }
typedef int (OSSL_FUNC_store_export_object_fn)(void *loaderctx, const void *objref, size_t objref_sz, OSSL_CALLBACK *export_cb, void *export_cbarg); static __attribute__((unused)) inline OSSL_FUNC_store_export_object_fn *OSSL_FUNC_store_export_object(const OSSL_DISPATCH *opf) { return (OSSL_FUNC_store_export_object_fn *)opf->function; }
# 29 "include/openssl/evp.h" 2


# 1 "include/openssl/evperr.h" 1
# 13 "include/openssl/evperr.h"
        
# 32 "include/openssl/evp.h" 2
# 1 "include/openssl/params.h" 1
# 13 "include/openssl/params.h"
        
# 71 "include/openssl/params.h"
OSSL_PARAM *OSSL_PARAM_locate(OSSL_PARAM *p, const char *key);
const OSSL_PARAM *OSSL_PARAM_locate_const(const OSSL_PARAM *p, const char *key);


OSSL_PARAM OSSL_PARAM_construct_int(const char *key, int *buf);
OSSL_PARAM OSSL_PARAM_construct_uint(const char *key, unsigned int *buf);
OSSL_PARAM OSSL_PARAM_construct_long(const char *key, long int *buf);
OSSL_PARAM OSSL_PARAM_construct_ulong(const char *key, unsigned long int *buf);
OSSL_PARAM OSSL_PARAM_construct_int32(const char *key, int32_t *buf);
OSSL_PARAM OSSL_PARAM_construct_uint32(const char *key, uint32_t *buf);
OSSL_PARAM OSSL_PARAM_construct_int64(const char *key, int64_t *buf);
OSSL_PARAM OSSL_PARAM_construct_uint64(const char *key, uint64_t *buf);
OSSL_PARAM OSSL_PARAM_construct_size_t(const char *key, size_t *buf);
OSSL_PARAM OSSL_PARAM_construct_time_t(const char *key, time_t *buf);
OSSL_PARAM OSSL_PARAM_construct_BN(const char *key, unsigned char *buf,
                                   size_t bsize);
OSSL_PARAM OSSL_PARAM_construct_double(const char *key, double *buf);
OSSL_PARAM OSSL_PARAM_construct_utf8_string(const char *key, char *buf,
                                            size_t bsize);
OSSL_PARAM OSSL_PARAM_construct_utf8_ptr(const char *key, char **buf,
                                         size_t bsize);
OSSL_PARAM OSSL_PARAM_construct_octet_string(const char *key, void *buf,
                                             size_t bsize);
OSSL_PARAM OSSL_PARAM_construct_octet_ptr(const char *key, void **buf,
                                          size_t bsize);
OSSL_PARAM OSSL_PARAM_construct_end(void);

int OSSL_PARAM_allocate_from_text(OSSL_PARAM *to,
                                  const OSSL_PARAM *paramdefs,
                                  const char *key, const char *value,
                                  size_t value_n, int *found);

int OSSL_PARAM_get_int(const OSSL_PARAM *p, int *val);
int OSSL_PARAM_get_uint(const OSSL_PARAM *p, unsigned int *val);
int OSSL_PARAM_get_long(const OSSL_PARAM *p, long int *val);
int OSSL_PARAM_get_ulong(const OSSL_PARAM *p, unsigned long int *val);
int OSSL_PARAM_get_int32(const OSSL_PARAM *p, int32_t *val);
int OSSL_PARAM_get_uint32(const OSSL_PARAM *p, uint32_t *val);
int OSSL_PARAM_get_int64(const OSSL_PARAM *p, int64_t *val);
int OSSL_PARAM_get_uint64(const OSSL_PARAM *p, uint64_t *val);
int OSSL_PARAM_get_size_t(const OSSL_PARAM *p, size_t *val);
int OSSL_PARAM_get_time_t(const OSSL_PARAM *p, time_t *val);

int OSSL_PARAM_set_int(OSSL_PARAM *p, int val);
int OSSL_PARAM_set_uint(OSSL_PARAM *p, unsigned int val);
int OSSL_PARAM_set_long(OSSL_PARAM *p, long int val);
int OSSL_PARAM_set_ulong(OSSL_PARAM *p, unsigned long int val);
int OSSL_PARAM_set_int32(OSSL_PARAM *p, int32_t val);
int OSSL_PARAM_set_uint32(OSSL_PARAM *p, uint32_t val);
int OSSL_PARAM_set_int64(OSSL_PARAM *p, int64_t val);
int OSSL_PARAM_set_uint64(OSSL_PARAM *p, uint64_t val);
int OSSL_PARAM_set_size_t(OSSL_PARAM *p, size_t val);
int OSSL_PARAM_set_time_t(OSSL_PARAM *p, time_t val);

int OSSL_PARAM_get_double(const OSSL_PARAM *p, double *val);
int OSSL_PARAM_set_double(OSSL_PARAM *p, double val);

int OSSL_PARAM_get_BN(const OSSL_PARAM *p, BIGNUM **val);
int OSSL_PARAM_set_BN(OSSL_PARAM *p, const BIGNUM *val);

int OSSL_PARAM_get_utf8_string(const OSSL_PARAM *p, char **val, size_t max_len);
int OSSL_PARAM_set_utf8_string(OSSL_PARAM *p, const char *val);

int OSSL_PARAM_get_octet_string(const OSSL_PARAM *p, void **val, size_t max_len,
                                size_t *used_len);
int OSSL_PARAM_set_octet_string(OSSL_PARAM *p, const void *val, size_t len);

int OSSL_PARAM_get_utf8_ptr(const OSSL_PARAM *p, const char **val);
int OSSL_PARAM_set_utf8_ptr(OSSL_PARAM *p, const char *val);

int OSSL_PARAM_get_octet_ptr(const OSSL_PARAM *p, const void **val,
                             size_t *used_len);
int OSSL_PARAM_set_octet_ptr(OSSL_PARAM *p, const void *val,
                             size_t used_len);

int OSSL_PARAM_get_utf8_string_ptr(const OSSL_PARAM *p, const char **val);
int OSSL_PARAM_get_octet_string_ptr(const OSSL_PARAM *p, const void **val,
                                    size_t *used_len);

int OSSL_PARAM_modified(const OSSL_PARAM *p);
void OSSL_PARAM_set_all_unmodified(OSSL_PARAM *p);

OSSL_PARAM *OSSL_PARAM_dup(const OSSL_PARAM *p);
OSSL_PARAM *OSSL_PARAM_merge(const OSSL_PARAM *p1, const OSSL_PARAM *p2);
void OSSL_PARAM_free(OSSL_PARAM *p);
# 33 "include/openssl/evp.h" 2
# 43 "include/openssl/evp.h"
# 1 "include/openssl/objects.h" 1
# 12 "include/openssl/objects.h"
        






# 1 "include/openssl/obj_mac.h" 1
# 14 "include/openssl/obj_mac.h"
        
# 20 "include/openssl/objects.h" 2


# 1 "include/openssl/objectserr.h" 1
# 13 "include/openssl/objectserr.h"
        
# 23 "include/openssl/objects.h" 2
# 43 "include/openssl/objects.h"
typedef struct obj_name_st {
    int type;
    int alias;
    const char *name;
    const char *data;
} OBJ_NAME;



int OBJ_NAME_init(void);
int OBJ_NAME_new_index(unsigned long (*hash_func) (const char *),
                       int (*cmp_func) (const char *, const char *),
                       void (*free_func) (const char *, int, const char *));
const char *OBJ_NAME_get(const char *name, int type);
int OBJ_NAME_add(const char *name, int type, const char *data);
int OBJ_NAME_remove(const char *name, int type);
void OBJ_NAME_cleanup(int type);
void OBJ_NAME_do_all(int type, void (*fn) (const OBJ_NAME *, void *arg),
                     void *arg);
void OBJ_NAME_do_all_sorted(int type,
                            void (*fn) (const OBJ_NAME *, void *arg),
                            void *arg);

extern ASN1_OBJECT *OBJ_dup(const ASN1_OBJECT *a);
ASN1_OBJECT *OBJ_nid2obj(int n);
const char *OBJ_nid2ln(int n);
const char *OBJ_nid2sn(int n);
int OBJ_obj2nid(const ASN1_OBJECT *o);
ASN1_OBJECT *OBJ_txt2obj(const char *s, int no_name);
int OBJ_obj2txt(char *buf, int buf_len, const ASN1_OBJECT *a, int no_name);
int OBJ_txt2nid(const char *s);
int OBJ_ln2nid(const char *s);
int OBJ_sn2nid(const char *s);
int OBJ_cmp(const ASN1_OBJECT *a, const ASN1_OBJECT *b);
const void *OBJ_bsearch_(const void *key, const void *base, int num, int size,
                         int (*cmp) (const void *, const void *));
const void *OBJ_bsearch_ex_(const void *key, const void *base, int num,
                            int size,
                            int (*cmp) (const void *, const void *),
                            int flags);
# 163 "include/openssl/objects.h"
int OBJ_new_nid(int num);
int OBJ_add_object(const ASN1_OBJECT *obj);
int OBJ_create(const char *oid, const char *sn, const char *ln);



int OBJ_create_objects(BIO *in);

size_t OBJ_length(const ASN1_OBJECT *obj);
const unsigned char *OBJ_get0_data(const ASN1_OBJECT *obj);

int OBJ_find_sigid_algs(int signid, int *pdig_nid, int *ppkey_nid);
int OBJ_find_sigid_by_algs(int *psignid, int dig_nid, int pkey_nid);
int OBJ_add_sigid(int signid, int dig_id, int pkey_id);
void OBJ_sigid_free(void);
# 44 "include/openssl/evp.h" 2
# 97 "include/openssl/evp.h"
int EVP_set_default_properties(OSSL_LIB_CTX *libctx, const char *propq);
int EVP_default_properties_is_fips_enabled(OSSL_LIB_CTX *libctx);
int EVP_default_properties_enable_fips(OSSL_LIB_CTX *libctx, int enable);
# 108 "include/openssl/evp.h"
extern EVP_MD *EVP_MD_meth_new(int md_type, int pkey_type);
extern EVP_MD *EVP_MD_meth_dup(const EVP_MD *md);
extern void EVP_MD_meth_free(EVP_MD *md);
extern
int EVP_MD_meth_set_input_blocksize(EVP_MD *md, int blocksize);
extern
int EVP_MD_meth_set_result_size(EVP_MD *md, int resultsize);
extern
int EVP_MD_meth_set_app_datasize(EVP_MD *md, int datasize);
extern
int EVP_MD_meth_set_flags(EVP_MD *md, unsigned long flags);
extern
int EVP_MD_meth_set_init(EVP_MD *md, int (*init)(EVP_MD_CTX *ctx));
extern
int EVP_MD_meth_set_update(EVP_MD *md, int (*update)(EVP_MD_CTX *ctx,
                                                     const void *data,
                                                     size_t count));
extern
int EVP_MD_meth_set_final(EVP_MD *md, int (*final)(EVP_MD_CTX *ctx,
                                                   unsigned char *md));
extern
int EVP_MD_meth_set_copy(EVP_MD *md, int (*copy)(EVP_MD_CTX *to,
                                                 const EVP_MD_CTX *from));
extern
int EVP_MD_meth_set_cleanup(EVP_MD *md, int (*cleanup)(EVP_MD_CTX *ctx));
extern
int EVP_MD_meth_set_ctrl(EVP_MD *md, int (*ctrl)(EVP_MD_CTX *ctx, int cmd,
                                                 int p1, void *p2));
extern int EVP_MD_meth_get_input_blocksize(const EVP_MD *md);
extern int EVP_MD_meth_get_result_size(const EVP_MD *md);
extern int EVP_MD_meth_get_app_datasize(const EVP_MD *md);
extern unsigned long EVP_MD_meth_get_flags(const EVP_MD *md);
extern
int (*EVP_MD_meth_get_init(const EVP_MD *md))(EVP_MD_CTX *ctx);
extern
int (*EVP_MD_meth_get_update(const EVP_MD *md))(EVP_MD_CTX *ctx,
                                                const void *data, size_t count);
extern
int (*EVP_MD_meth_get_final(const EVP_MD *md))(EVP_MD_CTX *ctx,
                                               unsigned char *md);
extern
int (*EVP_MD_meth_get_copy(const EVP_MD *md))(EVP_MD_CTX *to,
                                              const EVP_MD_CTX *from);
extern
int (*EVP_MD_meth_get_cleanup(const EVP_MD *md))(EVP_MD_CTX *ctx);
extern
int (*EVP_MD_meth_get_ctrl(const EVP_MD *md))(EVP_MD_CTX *ctx, int cmd,
                                              int p1, void *p2);
# 231 "include/openssl/evp.h"
extern
EVP_CIPHER *EVP_CIPHER_meth_new(int cipher_type, int block_size, int key_len);
extern
EVP_CIPHER *EVP_CIPHER_meth_dup(const EVP_CIPHER *cipher);
extern
void EVP_CIPHER_meth_free(EVP_CIPHER *cipher);
extern
int EVP_CIPHER_meth_set_iv_length(EVP_CIPHER *cipher, int iv_len);
extern
int EVP_CIPHER_meth_set_flags(EVP_CIPHER *cipher, unsigned long flags);
extern
int EVP_CIPHER_meth_set_impl_ctx_size(EVP_CIPHER *cipher, int ctx_size);
extern
int EVP_CIPHER_meth_set_init(EVP_CIPHER *cipher,
                             int (*init) (EVP_CIPHER_CTX *ctx,
                                          const unsigned char *key,
                                          const unsigned char *iv,
                                          int enc));
extern
int EVP_CIPHER_meth_set_do_cipher(EVP_CIPHER *cipher,
                                  int (*do_cipher) (EVP_CIPHER_CTX *ctx,
                                                    unsigned char *out,
                                                    const unsigned char *in,
                                                    size_t inl));
extern
int EVP_CIPHER_meth_set_cleanup(EVP_CIPHER *cipher,
                                int (*cleanup) (EVP_CIPHER_CTX *));
extern
int EVP_CIPHER_meth_set_set_asn1_params(EVP_CIPHER *cipher,
                                        int (*set_asn1_parameters) (EVP_CIPHER_CTX *,
                                                                    ASN1_TYPE *));
extern
int EVP_CIPHER_meth_set_get_asn1_params(EVP_CIPHER *cipher,
                                        int (*get_asn1_parameters) (EVP_CIPHER_CTX *,
                                                                    ASN1_TYPE *));
extern
int EVP_CIPHER_meth_set_ctrl(EVP_CIPHER *cipher,
                             int (*ctrl) (EVP_CIPHER_CTX *, int type,
                                          int arg, void *ptr));
extern int
(*EVP_CIPHER_meth_get_init(const EVP_CIPHER *cipher))(EVP_CIPHER_CTX *ctx,
                                                      const unsigned char *key,
                                                      const unsigned char *iv,
                                                      int enc);
extern int
(*EVP_CIPHER_meth_get_do_cipher(const EVP_CIPHER *cipher))(EVP_CIPHER_CTX *ctx,
                                                           unsigned char *out,
                                                           const unsigned char *in,
                                                           size_t inl);
extern int
(*EVP_CIPHER_meth_get_cleanup(const EVP_CIPHER *cipher))(EVP_CIPHER_CTX *);
extern int
(*EVP_CIPHER_meth_get_set_asn1_params(const EVP_CIPHER *cipher))(EVP_CIPHER_CTX *,
                                                                 ASN1_TYPE *);
extern int
(*EVP_CIPHER_meth_get_get_asn1_params(const EVP_CIPHER *cipher))(EVP_CIPHER_CTX *,
                                                                 ASN1_TYPE *);
extern int
(*EVP_CIPHER_meth_get_ctrl(const EVP_CIPHER *cipher))(EVP_CIPHER_CTX *, int type,
                                                      int arg, void *ptr);
# 448 "include/openssl/evp.h"
typedef struct {
    unsigned char *out;
    const unsigned char *inp;
    size_t len;
    unsigned int interleave;
} EVP_CTRL_TLS1_1_MULTIBLOCK_PARAM;
# 478 "include/openssl/evp.h"
typedef struct evp_cipher_info_st {
    const EVP_CIPHER *cipher;
    unsigned char iv[16];
} EVP_CIPHER_INFO;



typedef int (EVP_PBE_KEYGEN) (EVP_CIPHER_CTX *ctx, const char *pass,
                              int passlen, ASN1_TYPE *param,
                              const EVP_CIPHER *cipher, const EVP_MD *md,
                              int en_de);

typedef int (EVP_PBE_KEYGEN_EX) (EVP_CIPHER_CTX *ctx, const char *pass,
                                 int passlen, ASN1_TYPE *param,
                                 const EVP_CIPHER *cipher, const EVP_MD *md,
                                 int en_de, OSSL_LIB_CTX *libctx, const char *propq);
# 531 "include/openssl/evp.h"
int EVP_MD_get_type(const EVP_MD *md);


const char *EVP_MD_get0_name(const EVP_MD *md);

const char *EVP_MD_get0_description(const EVP_MD *md);
int EVP_MD_is_a(const EVP_MD *md, const char *name);
int EVP_MD_names_do_all(const EVP_MD *md,
                        void (*fn)(const char *name, void *data),
                        void *data);
const OSSL_PROVIDER *EVP_MD_get0_provider(const EVP_MD *md);
int EVP_MD_get_pkey_type(const EVP_MD *md);

int EVP_MD_get_size(const EVP_MD *md);

int EVP_MD_get_block_size(const EVP_MD *md);

unsigned long EVP_MD_get_flags(const EVP_MD *md);


const EVP_MD *EVP_MD_CTX_get0_md(const EVP_MD_CTX *ctx);
EVP_MD *EVP_MD_CTX_get1_md(EVP_MD_CTX *ctx);

extern
const EVP_MD *EVP_MD_CTX_md(const EVP_MD_CTX *ctx);
extern
int (*EVP_MD_CTX_update_fn(EVP_MD_CTX *ctx))(EVP_MD_CTX *ctx,
                                             const void *data, size_t count);
extern
void EVP_MD_CTX_set_update_fn(EVP_MD_CTX *ctx,
                              int (*update) (EVP_MD_CTX *ctx,
                                             const void *data, size_t count));
# 571 "include/openssl/evp.h"
EVP_PKEY_CTX *EVP_MD_CTX_get_pkey_ctx(const EVP_MD_CTX *ctx);

void EVP_MD_CTX_set_pkey_ctx(EVP_MD_CTX *ctx, EVP_PKEY_CTX *pctx);
void *EVP_MD_CTX_get0_md_data(const EVP_MD_CTX *ctx);


int EVP_CIPHER_get_nid(const EVP_CIPHER *cipher);

const char *EVP_CIPHER_get0_name(const EVP_CIPHER *cipher);

const char *EVP_CIPHER_get0_description(const EVP_CIPHER *cipher);
int EVP_CIPHER_is_a(const EVP_CIPHER *cipher, const char *name);
int EVP_CIPHER_names_do_all(const EVP_CIPHER *cipher,
                            void (*fn)(const char *name, void *data),
                            void *data);
const OSSL_PROVIDER *EVP_CIPHER_get0_provider(const EVP_CIPHER *cipher);
int EVP_CIPHER_get_block_size(const EVP_CIPHER *cipher);


extern
int EVP_CIPHER_impl_ctx_size(const EVP_CIPHER *cipher);

int EVP_CIPHER_get_key_length(const EVP_CIPHER *cipher);

int EVP_CIPHER_get_iv_length(const EVP_CIPHER *cipher);

unsigned long EVP_CIPHER_get_flags(const EVP_CIPHER *cipher);

int EVP_CIPHER_get_mode(const EVP_CIPHER *cipher);

int EVP_CIPHER_get_type(const EVP_CIPHER *cipher);

EVP_CIPHER *EVP_CIPHER_fetch(OSSL_LIB_CTX *ctx, const char *algorithm,
                             const char *properties);
int EVP_CIPHER_up_ref(EVP_CIPHER *cipher);
void EVP_CIPHER_free(EVP_CIPHER *cipher);

const EVP_CIPHER *EVP_CIPHER_CTX_get0_cipher(const EVP_CIPHER_CTX *ctx);
EVP_CIPHER *EVP_CIPHER_CTX_get1_cipher(EVP_CIPHER_CTX *ctx);
int EVP_CIPHER_CTX_is_encrypting(const EVP_CIPHER_CTX *ctx);

int EVP_CIPHER_CTX_get_nid(const EVP_CIPHER_CTX *ctx);

int EVP_CIPHER_CTX_get_block_size(const EVP_CIPHER_CTX *ctx);

int EVP_CIPHER_CTX_get_key_length(const EVP_CIPHER_CTX *ctx);

int EVP_CIPHER_CTX_get_iv_length(const EVP_CIPHER_CTX *ctx);

int EVP_CIPHER_CTX_get_tag_length(const EVP_CIPHER_CTX *ctx);


const EVP_CIPHER *EVP_CIPHER_CTX_cipher(const EVP_CIPHER_CTX *ctx);
extern const unsigned char *EVP_CIPHER_CTX_iv(const EVP_CIPHER_CTX *ctx);
extern const unsigned char *EVP_CIPHER_CTX_original_iv(const EVP_CIPHER_CTX *ctx);
extern unsigned char *EVP_CIPHER_CTX_iv_noconst(EVP_CIPHER_CTX *ctx);

int EVP_CIPHER_CTX_get_updated_iv(EVP_CIPHER_CTX *ctx, void *buf, size_t len);
int EVP_CIPHER_CTX_get_original_iv(EVP_CIPHER_CTX *ctx, void *buf, size_t len);

extern
unsigned char *EVP_CIPHER_CTX_buf_noconst(EVP_CIPHER_CTX *ctx);

int EVP_CIPHER_CTX_get_num(const EVP_CIPHER_CTX *ctx);

int EVP_CIPHER_CTX_set_num(EVP_CIPHER_CTX *ctx, int num);
int EVP_CIPHER_CTX_copy(EVP_CIPHER_CTX *out, const EVP_CIPHER_CTX *in);
void *EVP_CIPHER_CTX_get_app_data(const EVP_CIPHER_CTX *ctx);
void EVP_CIPHER_CTX_set_app_data(EVP_CIPHER_CTX *ctx, void *data);
void *EVP_CIPHER_CTX_get_cipher_data(const EVP_CIPHER_CTX *ctx);
void *EVP_CIPHER_CTX_set_cipher_data(EVP_CIPHER_CTX *ctx, void *cipher_data);
# 674 "include/openssl/evp.h"
           int EVP_Cipher(EVP_CIPHER_CTX *c,
                          unsigned char *out,
                          const unsigned char *in, unsigned int inl);
# 687 "include/openssl/evp.h"
int EVP_MD_get_params(const EVP_MD *digest, OSSL_PARAM params[]);
int EVP_MD_CTX_set_params(EVP_MD_CTX *ctx, const OSSL_PARAM params[]);
int EVP_MD_CTX_get_params(EVP_MD_CTX *ctx, OSSL_PARAM params[]);
const OSSL_PARAM *EVP_MD_gettable_params(const EVP_MD *digest);
const OSSL_PARAM *EVP_MD_settable_ctx_params(const EVP_MD *md);
const OSSL_PARAM *EVP_MD_gettable_ctx_params(const EVP_MD *md);
const OSSL_PARAM *EVP_MD_CTX_settable_params(EVP_MD_CTX *ctx);
const OSSL_PARAM *EVP_MD_CTX_gettable_params(EVP_MD_CTX *ctx);
int EVP_MD_CTX_ctrl(EVP_MD_CTX *ctx, int cmd, int p1, void *p2);
EVP_MD_CTX *EVP_MD_CTX_new(void);
int EVP_MD_CTX_reset(EVP_MD_CTX *ctx);
void EVP_MD_CTX_free(EVP_MD_CTX *ctx);



 int EVP_MD_CTX_copy_ex(EVP_MD_CTX *out, const EVP_MD_CTX *in);
void EVP_MD_CTX_set_flags(EVP_MD_CTX *ctx, int flags);
void EVP_MD_CTX_clear_flags(EVP_MD_CTX *ctx, int flags);
int EVP_MD_CTX_test_flags(const EVP_MD_CTX *ctx, int flags);
 int EVP_DigestInit_ex2(EVP_MD_CTX *ctx, const EVP_MD *type,
                              const OSSL_PARAM params[]);
 int EVP_DigestInit_ex(EVP_MD_CTX *ctx, const EVP_MD *type,
                                 ENGINE *impl);
 int EVP_DigestUpdate(EVP_MD_CTX *ctx, const void *d,
                                size_t cnt);
 int EVP_DigestFinal_ex(EVP_MD_CTX *ctx, unsigned char *md,
                                  unsigned int *s);
 int EVP_Digest(const void *data, size_t count,
                          unsigned char *md, unsigned int *size,
                          const EVP_MD *type, ENGINE *impl);
 int EVP_Q_digest(OSSL_LIB_CTX *libctx, const char *name,
                        const char *propq, const void *data, size_t datalen,
                        unsigned char *md, size_t *mdlen);

 int EVP_MD_CTX_copy(EVP_MD_CTX *out, const EVP_MD_CTX *in);
 int EVP_DigestInit(EVP_MD_CTX *ctx, const EVP_MD *type);
 int EVP_DigestFinal(EVP_MD_CTX *ctx, unsigned char *md,
                           unsigned int *s);
 int EVP_DigestFinalXOF(EVP_MD_CTX *ctx, unsigned char *md,
                              size_t len);

 EVP_MD *EVP_MD_fetch(OSSL_LIB_CTX *ctx, const char *algorithm,
                            const char *properties);

int EVP_MD_up_ref(EVP_MD *md);
void EVP_MD_free(EVP_MD *md);

int EVP_read_pw_string(char *buf, int length, const char *prompt, int verify);
int EVP_read_pw_string_min(char *buf, int minlen, int maxlen,
                           const char *prompt, int verify);
void EVP_set_pw_prompt(const char *prompt);
char *EVP_get_pw_prompt(void);

 int EVP_BytesToKey(const EVP_CIPHER *type, const EVP_MD *md,
                          const unsigned char *salt,
                          const unsigned char *data, int datal, int count,
                          unsigned char *key, unsigned char *iv);

void EVP_CIPHER_CTX_set_flags(EVP_CIPHER_CTX *ctx, int flags);
void EVP_CIPHER_CTX_clear_flags(EVP_CIPHER_CTX *ctx, int flags);
int EVP_CIPHER_CTX_test_flags(const EVP_CIPHER_CTX *ctx, int flags);

 int EVP_EncryptInit(EVP_CIPHER_CTX *ctx, const EVP_CIPHER *cipher,
                           const unsigned char *key, const unsigned char *iv);
           int EVP_EncryptInit_ex(EVP_CIPHER_CTX *ctx,
                                  const EVP_CIPHER *cipher, ENGINE *impl,
                                  const unsigned char *key,
                                  const unsigned char *iv);
 int EVP_EncryptInit_ex2(EVP_CIPHER_CTX *ctx, const EVP_CIPHER *cipher,
                               const unsigned char *key,
                               const unsigned char *iv,
                               const OSSL_PARAM params[]);
           int EVP_EncryptUpdate(EVP_CIPHER_CTX *ctx, unsigned char *out,
                                 int *outl, const unsigned char *in, int inl);
           int EVP_EncryptFinal_ex(EVP_CIPHER_CTX *ctx, unsigned char *out,
                                   int *outl);
           int EVP_EncryptFinal(EVP_CIPHER_CTX *ctx, unsigned char *out,
                                int *outl);

 int EVP_DecryptInit(EVP_CIPHER_CTX *ctx, const EVP_CIPHER *cipher,
                           const unsigned char *key, const unsigned char *iv);
           int EVP_DecryptInit_ex(EVP_CIPHER_CTX *ctx,
                                  const EVP_CIPHER *cipher, ENGINE *impl,
                                  const unsigned char *key,
                                  const unsigned char *iv);
 int EVP_DecryptInit_ex2(EVP_CIPHER_CTX *ctx, const EVP_CIPHER *cipher,
                               const unsigned char *key,
                               const unsigned char *iv,
                               const OSSL_PARAM params[]);
           int EVP_DecryptUpdate(EVP_CIPHER_CTX *ctx, unsigned char *out,
                                 int *outl, const unsigned char *in, int inl);
 int EVP_DecryptFinal(EVP_CIPHER_CTX *ctx, unsigned char *outm,
                            int *outl);
           int EVP_DecryptFinal_ex(EVP_CIPHER_CTX *ctx, unsigned char *outm,
                                   int *outl);

 int EVP_CipherInit(EVP_CIPHER_CTX *ctx, const EVP_CIPHER *cipher,
                          const unsigned char *key, const unsigned char *iv,
                          int enc);
           int EVP_CipherInit_ex(EVP_CIPHER_CTX *ctx,
                                 const EVP_CIPHER *cipher, ENGINE *impl,
                                 const unsigned char *key,
                                 const unsigned char *iv, int enc);
 int EVP_CipherInit_ex2(EVP_CIPHER_CTX *ctx, const EVP_CIPHER *cipher,
                              const unsigned char *key, const unsigned char *iv,
                              int enc, const OSSL_PARAM params[]);
 int EVP_CipherUpdate(EVP_CIPHER_CTX *ctx, unsigned char *out,
                            int *outl, const unsigned char *in, int inl);
 int EVP_CipherFinal(EVP_CIPHER_CTX *ctx, unsigned char *outm,
                           int *outl);
 int EVP_CipherFinal_ex(EVP_CIPHER_CTX *ctx, unsigned char *outm,
                              int *outl);

 int EVP_SignFinal(EVP_MD_CTX *ctx, unsigned char *md, unsigned int *s,
                         EVP_PKEY *pkey);
 int EVP_SignFinal_ex(EVP_MD_CTX *ctx, unsigned char *md, unsigned int *s,
                            EVP_PKEY *pkey, OSSL_LIB_CTX *libctx,
                            const char *propq);

 int EVP_DigestSign(EVP_MD_CTX *ctx, unsigned char *sigret,
                          size_t *siglen, const unsigned char *tbs,
                          size_t tbslen);

 int EVP_VerifyFinal(EVP_MD_CTX *ctx, const unsigned char *sigbuf,
                           unsigned int siglen, EVP_PKEY *pkey);
 int EVP_VerifyFinal_ex(EVP_MD_CTX *ctx, const unsigned char *sigbuf,
                              unsigned int siglen, EVP_PKEY *pkey,
                              OSSL_LIB_CTX *libctx, const char *propq);

 int EVP_DigestVerify(EVP_MD_CTX *ctx, const unsigned char *sigret,
                            size_t siglen, const unsigned char *tbs,
                            size_t tbslen);

int EVP_DigestSignInit_ex(EVP_MD_CTX *ctx, EVP_PKEY_CTX **pctx,
                          const char *mdname, OSSL_LIB_CTX *libctx,
                          const char *props, EVP_PKEY *pkey,
                          const OSSL_PARAM params[]);
           int EVP_DigestSignInit(EVP_MD_CTX *ctx, EVP_PKEY_CTX **pctx,
                                  const EVP_MD *type, ENGINE *e,
                                  EVP_PKEY *pkey);
int EVP_DigestSignUpdate(EVP_MD_CTX *ctx, const void *data, size_t dsize);
 int EVP_DigestSignFinal(EVP_MD_CTX *ctx, unsigned char *sigret,
                               size_t *siglen);

int EVP_DigestVerifyInit_ex(EVP_MD_CTX *ctx, EVP_PKEY_CTX **pctx,
                            const char *mdname, OSSL_LIB_CTX *libctx,
                            const char *props, EVP_PKEY *pkey,
                            const OSSL_PARAM params[]);
 int EVP_DigestVerifyInit(EVP_MD_CTX *ctx, EVP_PKEY_CTX **pctx,
                                const EVP_MD *type, ENGINE *e,
                                EVP_PKEY *pkey);
int EVP_DigestVerifyUpdate(EVP_MD_CTX *ctx, const void *data, size_t dsize);
 int EVP_DigestVerifyFinal(EVP_MD_CTX *ctx, const unsigned char *sig,
                                 size_t siglen);

 int EVP_OpenInit(EVP_CIPHER_CTX *ctx, const EVP_CIPHER *type,
                        const unsigned char *ek, int ekl,
                        const unsigned char *iv, EVP_PKEY *priv);
 int EVP_OpenFinal(EVP_CIPHER_CTX *ctx, unsigned char *out, int *outl);

 int EVP_SealInit(EVP_CIPHER_CTX *ctx, const EVP_CIPHER *type,
                        unsigned char **ek, int *ekl, unsigned char *iv,
                        EVP_PKEY **pubk, int npubk);
 int EVP_SealFinal(EVP_CIPHER_CTX *ctx, unsigned char *out, int *outl);

EVP_ENCODE_CTX *EVP_ENCODE_CTX_new(void);
void EVP_ENCODE_CTX_free(EVP_ENCODE_CTX *ctx);
int EVP_ENCODE_CTX_copy(EVP_ENCODE_CTX *dctx, const EVP_ENCODE_CTX *sctx);
int EVP_ENCODE_CTX_num(EVP_ENCODE_CTX *ctx);
void EVP_EncodeInit(EVP_ENCODE_CTX *ctx);
int EVP_EncodeUpdate(EVP_ENCODE_CTX *ctx, unsigned char *out, int *outl,
                     const unsigned char *in, int inl);
void EVP_EncodeFinal(EVP_ENCODE_CTX *ctx, unsigned char *out, int *outl);
int EVP_EncodeBlock(unsigned char *t, const unsigned char *f, int n);

void EVP_DecodeInit(EVP_ENCODE_CTX *ctx);
int EVP_DecodeUpdate(EVP_ENCODE_CTX *ctx, unsigned char *out, int *outl,
                     const unsigned char *in, int inl);
int EVP_DecodeFinal(EVP_ENCODE_CTX *ctx, unsigned
                    char *out, int *outl);
int EVP_DecodeBlock(unsigned char *t, const unsigned char *f, int n);





EVP_CIPHER_CTX *EVP_CIPHER_CTX_new(void);
int EVP_CIPHER_CTX_reset(EVP_CIPHER_CTX *c);
void EVP_CIPHER_CTX_free(EVP_CIPHER_CTX *c);
int EVP_CIPHER_CTX_set_key_length(EVP_CIPHER_CTX *x, int keylen);
int EVP_CIPHER_CTX_set_padding(EVP_CIPHER_CTX *c, int pad);
int EVP_CIPHER_CTX_ctrl(EVP_CIPHER_CTX *ctx, int type, int arg, void *ptr);
int EVP_CIPHER_CTX_rand_key(EVP_CIPHER_CTX *ctx, unsigned char *key);
int EVP_CIPHER_get_params(EVP_CIPHER *cipher, OSSL_PARAM params[]);
int EVP_CIPHER_CTX_set_params(EVP_CIPHER_CTX *ctx, const OSSL_PARAM params[]);
int EVP_CIPHER_CTX_get_params(EVP_CIPHER_CTX *ctx, OSSL_PARAM params[]);
const OSSL_PARAM *EVP_CIPHER_gettable_params(const EVP_CIPHER *cipher);
const OSSL_PARAM *EVP_CIPHER_settable_ctx_params(const EVP_CIPHER *cipher);
const OSSL_PARAM *EVP_CIPHER_gettable_ctx_params(const EVP_CIPHER *cipher);
const OSSL_PARAM *EVP_CIPHER_CTX_settable_params(EVP_CIPHER_CTX *ctx);
const OSSL_PARAM *EVP_CIPHER_CTX_gettable_params(EVP_CIPHER_CTX *ctx);

const BIO_METHOD *BIO_f_md(void);
const BIO_METHOD *BIO_f_base64(void);
const BIO_METHOD *BIO_f_cipher(void);
const BIO_METHOD *BIO_f_reliable(void);
 int BIO_set_cipher(BIO *b, const EVP_CIPHER *c, const unsigned char *k,
                          const unsigned char *i, int enc);

const EVP_MD *EVP_md_null(void);




const EVP_MD *EVP_md4(void);


const EVP_MD *EVP_md5(void);
const EVP_MD *EVP_md5_sha1(void);


const EVP_MD *EVP_blake2b512(void);
const EVP_MD *EVP_blake2s256(void);

const EVP_MD *EVP_sha1(void);
const EVP_MD *EVP_sha224(void);
const EVP_MD *EVP_sha256(void);
const EVP_MD *EVP_sha384(void);
const EVP_MD *EVP_sha512(void);
const EVP_MD *EVP_sha512_224(void);
const EVP_MD *EVP_sha512_256(void);
const EVP_MD *EVP_sha3_224(void);
const EVP_MD *EVP_sha3_256(void);
const EVP_MD *EVP_sha3_384(void);
const EVP_MD *EVP_sha3_512(void);
const EVP_MD *EVP_shake128(void);
const EVP_MD *EVP_shake256(void);





const EVP_MD *EVP_ripemd160(void);


const EVP_MD *EVP_whirlpool(void);


const EVP_MD *EVP_sm3(void);

const EVP_CIPHER *EVP_enc_null(void);

const EVP_CIPHER *EVP_des_ecb(void);
const EVP_CIPHER *EVP_des_ede(void);
const EVP_CIPHER *EVP_des_ede3(void);
const EVP_CIPHER *EVP_des_ede_ecb(void);
const EVP_CIPHER *EVP_des_ede3_ecb(void);
const EVP_CIPHER *EVP_des_cfb64(void);

const EVP_CIPHER *EVP_des_cfb1(void);
const EVP_CIPHER *EVP_des_cfb8(void);
const EVP_CIPHER *EVP_des_ede_cfb64(void);

const EVP_CIPHER *EVP_des_ede3_cfb64(void);

const EVP_CIPHER *EVP_des_ede3_cfb1(void);
const EVP_CIPHER *EVP_des_ede3_cfb8(void);
const EVP_CIPHER *EVP_des_ofb(void);
const EVP_CIPHER *EVP_des_ede_ofb(void);
const EVP_CIPHER *EVP_des_ede3_ofb(void);
const EVP_CIPHER *EVP_des_cbc(void);
const EVP_CIPHER *EVP_des_ede_cbc(void);
const EVP_CIPHER *EVP_des_ede3_cbc(void);
const EVP_CIPHER *EVP_desx_cbc(void);
const EVP_CIPHER *EVP_des_ede3_wrap(void);







const EVP_CIPHER *EVP_rc4(void);
const EVP_CIPHER *EVP_rc4_40(void);

const EVP_CIPHER *EVP_rc4_hmac_md5(void);
# 983 "include/openssl/evp.h"
const EVP_CIPHER *EVP_rc2_ecb(void);
const EVP_CIPHER *EVP_rc2_cbc(void);
const EVP_CIPHER *EVP_rc2_40_cbc(void);
const EVP_CIPHER *EVP_rc2_64_cbc(void);
const EVP_CIPHER *EVP_rc2_cfb64(void);

const EVP_CIPHER *EVP_rc2_ofb(void);


const EVP_CIPHER *EVP_bf_ecb(void);
const EVP_CIPHER *EVP_bf_cbc(void);
const EVP_CIPHER *EVP_bf_cfb64(void);

const EVP_CIPHER *EVP_bf_ofb(void);


const EVP_CIPHER *EVP_cast5_ecb(void);
const EVP_CIPHER *EVP_cast5_cbc(void);
const EVP_CIPHER *EVP_cast5_cfb64(void);

const EVP_CIPHER *EVP_cast5_ofb(void);
# 1012 "include/openssl/evp.h"
const EVP_CIPHER *EVP_aes_128_ecb(void);
const EVP_CIPHER *EVP_aes_128_cbc(void);
const EVP_CIPHER *EVP_aes_128_cfb1(void);
const EVP_CIPHER *EVP_aes_128_cfb8(void);
const EVP_CIPHER *EVP_aes_128_cfb128(void);

const EVP_CIPHER *EVP_aes_128_ofb(void);
const EVP_CIPHER *EVP_aes_128_ctr(void);
const EVP_CIPHER *EVP_aes_128_ccm(void);
const EVP_CIPHER *EVP_aes_128_gcm(void);
const EVP_CIPHER *EVP_aes_128_xts(void);
const EVP_CIPHER *EVP_aes_128_wrap(void);
const EVP_CIPHER *EVP_aes_128_wrap_pad(void);

const EVP_CIPHER *EVP_aes_128_ocb(void);

const EVP_CIPHER *EVP_aes_192_ecb(void);
const EVP_CIPHER *EVP_aes_192_cbc(void);
const EVP_CIPHER *EVP_aes_192_cfb1(void);
const EVP_CIPHER *EVP_aes_192_cfb8(void);
const EVP_CIPHER *EVP_aes_192_cfb128(void);

const EVP_CIPHER *EVP_aes_192_ofb(void);
const EVP_CIPHER *EVP_aes_192_ctr(void);
const EVP_CIPHER *EVP_aes_192_ccm(void);
const EVP_CIPHER *EVP_aes_192_gcm(void);
const EVP_CIPHER *EVP_aes_192_wrap(void);
const EVP_CIPHER *EVP_aes_192_wrap_pad(void);

const EVP_CIPHER *EVP_aes_192_ocb(void);

const EVP_CIPHER *EVP_aes_256_ecb(void);
const EVP_CIPHER *EVP_aes_256_cbc(void);
const EVP_CIPHER *EVP_aes_256_cfb1(void);
const EVP_CIPHER *EVP_aes_256_cfb8(void);
const EVP_CIPHER *EVP_aes_256_cfb128(void);

const EVP_CIPHER *EVP_aes_256_ofb(void);
const EVP_CIPHER *EVP_aes_256_ctr(void);
const EVP_CIPHER *EVP_aes_256_ccm(void);
const EVP_CIPHER *EVP_aes_256_gcm(void);
const EVP_CIPHER *EVP_aes_256_xts(void);
const EVP_CIPHER *EVP_aes_256_wrap(void);
const EVP_CIPHER *EVP_aes_256_wrap_pad(void);

const EVP_CIPHER *EVP_aes_256_ocb(void);

const EVP_CIPHER *EVP_aes_128_cbc_hmac_sha1(void);
const EVP_CIPHER *EVP_aes_256_cbc_hmac_sha1(void);
const EVP_CIPHER *EVP_aes_128_cbc_hmac_sha256(void);
const EVP_CIPHER *EVP_aes_256_cbc_hmac_sha256(void);

const EVP_CIPHER *EVP_aria_128_ecb(void);
const EVP_CIPHER *EVP_aria_128_cbc(void);
const EVP_CIPHER *EVP_aria_128_cfb1(void);
const EVP_CIPHER *EVP_aria_128_cfb8(void);
const EVP_CIPHER *EVP_aria_128_cfb128(void);

const EVP_CIPHER *EVP_aria_128_ctr(void);
const EVP_CIPHER *EVP_aria_128_ofb(void);
const EVP_CIPHER *EVP_aria_128_gcm(void);
const EVP_CIPHER *EVP_aria_128_ccm(void);
const EVP_CIPHER *EVP_aria_192_ecb(void);
const EVP_CIPHER *EVP_aria_192_cbc(void);
const EVP_CIPHER *EVP_aria_192_cfb1(void);
const EVP_CIPHER *EVP_aria_192_cfb8(void);
const EVP_CIPHER *EVP_aria_192_cfb128(void);

const EVP_CIPHER *EVP_aria_192_ctr(void);
const EVP_CIPHER *EVP_aria_192_ofb(void);
const EVP_CIPHER *EVP_aria_192_gcm(void);
const EVP_CIPHER *EVP_aria_192_ccm(void);
const EVP_CIPHER *EVP_aria_256_ecb(void);
const EVP_CIPHER *EVP_aria_256_cbc(void);
const EVP_CIPHER *EVP_aria_256_cfb1(void);
const EVP_CIPHER *EVP_aria_256_cfb8(void);
const EVP_CIPHER *EVP_aria_256_cfb128(void);

const EVP_CIPHER *EVP_aria_256_ctr(void);
const EVP_CIPHER *EVP_aria_256_ofb(void);
const EVP_CIPHER *EVP_aria_256_gcm(void);
const EVP_CIPHER *EVP_aria_256_ccm(void);


const EVP_CIPHER *EVP_camellia_128_ecb(void);
const EVP_CIPHER *EVP_camellia_128_cbc(void);
const EVP_CIPHER *EVP_camellia_128_cfb1(void);
const EVP_CIPHER *EVP_camellia_128_cfb8(void);
const EVP_CIPHER *EVP_camellia_128_cfb128(void);

const EVP_CIPHER *EVP_camellia_128_ofb(void);
const EVP_CIPHER *EVP_camellia_128_ctr(void);
const EVP_CIPHER *EVP_camellia_192_ecb(void);
const EVP_CIPHER *EVP_camellia_192_cbc(void);
const EVP_CIPHER *EVP_camellia_192_cfb1(void);
const EVP_CIPHER *EVP_camellia_192_cfb8(void);
const EVP_CIPHER *EVP_camellia_192_cfb128(void);

const EVP_CIPHER *EVP_camellia_192_ofb(void);
const EVP_CIPHER *EVP_camellia_192_ctr(void);
const EVP_CIPHER *EVP_camellia_256_ecb(void);
const EVP_CIPHER *EVP_camellia_256_cbc(void);
const EVP_CIPHER *EVP_camellia_256_cfb1(void);
const EVP_CIPHER *EVP_camellia_256_cfb8(void);
const EVP_CIPHER *EVP_camellia_256_cfb128(void);

const EVP_CIPHER *EVP_camellia_256_ofb(void);
const EVP_CIPHER *EVP_camellia_256_ctr(void);


const EVP_CIPHER *EVP_chacha20(void);

const EVP_CIPHER *EVP_chacha20_poly1305(void);




const EVP_CIPHER *EVP_seed_ecb(void);
const EVP_CIPHER *EVP_seed_cbc(void);
const EVP_CIPHER *EVP_seed_cfb128(void);

const EVP_CIPHER *EVP_seed_ofb(void);



const EVP_CIPHER *EVP_sm4_ecb(void);
const EVP_CIPHER *EVP_sm4_cbc(void);
const EVP_CIPHER *EVP_sm4_cfb128(void);

const EVP_CIPHER *EVP_sm4_ofb(void);
const EVP_CIPHER *EVP_sm4_ctr(void);
# 1168 "include/openssl/evp.h"
int EVP_add_cipher(const EVP_CIPHER *cipher);
int EVP_add_digest(const EVP_MD *digest);

const EVP_CIPHER *EVP_get_cipherbyname(const char *name);
const EVP_MD *EVP_get_digestbyname(const char *name);

void EVP_CIPHER_do_all(void (*fn) (const EVP_CIPHER *ciph,
                                   const char *from, const char *to, void *x),
                       void *arg);
void EVP_CIPHER_do_all_sorted(void (*fn)
                               (const EVP_CIPHER *ciph, const char *from,
                                const char *to, void *x), void *arg);
void EVP_CIPHER_do_all_provided(OSSL_LIB_CTX *libctx,
                                void (*fn)(EVP_CIPHER *cipher, void *arg),
                                void *arg);

void EVP_MD_do_all(void (*fn) (const EVP_MD *ciph,
                               const char *from, const char *to, void *x),
                   void *arg);
void EVP_MD_do_all_sorted(void (*fn)
                           (const EVP_MD *ciph, const char *from,
                            const char *to, void *x), void *arg);
void EVP_MD_do_all_provided(OSSL_LIB_CTX *libctx,
                            void (*fn)(EVP_MD *md, void *arg),
                            void *arg);



EVP_MAC *EVP_MAC_fetch(OSSL_LIB_CTX *libctx, const char *algorithm,
                       const char *properties);
int EVP_MAC_up_ref(EVP_MAC *mac);
void EVP_MAC_free(EVP_MAC *mac);
const char *EVP_MAC_get0_name(const EVP_MAC *mac);
const char *EVP_MAC_get0_description(const EVP_MAC *mac);
int EVP_MAC_is_a(const EVP_MAC *mac, const char *name);
const OSSL_PROVIDER *EVP_MAC_get0_provider(const EVP_MAC *mac);
int EVP_MAC_get_params(EVP_MAC *mac, OSSL_PARAM params[]);

EVP_MAC_CTX *EVP_MAC_CTX_new(EVP_MAC *mac);
void EVP_MAC_CTX_free(EVP_MAC_CTX *ctx);
EVP_MAC_CTX *EVP_MAC_CTX_dup(const EVP_MAC_CTX *src);
EVP_MAC *EVP_MAC_CTX_get0_mac(EVP_MAC_CTX *ctx);
int EVP_MAC_CTX_get_params(EVP_MAC_CTX *ctx, OSSL_PARAM params[]);
int EVP_MAC_CTX_set_params(EVP_MAC_CTX *ctx, const OSSL_PARAM params[]);

size_t EVP_MAC_CTX_get_mac_size(EVP_MAC_CTX *ctx);
size_t EVP_MAC_CTX_get_block_size(EVP_MAC_CTX *ctx);
unsigned char *EVP_Q_mac(OSSL_LIB_CTX *libctx, const char *name, const char *propq,
                         const char *subalg, const OSSL_PARAM *params,
                         const void *key, size_t keylen,
                         const unsigned char *data, size_t datalen,
                         unsigned char *out, size_t outsize, size_t *outlen);
int EVP_MAC_init(EVP_MAC_CTX *ctx, const unsigned char *key, size_t keylen,
                 const OSSL_PARAM params[]);
int EVP_MAC_update(EVP_MAC_CTX *ctx, const unsigned char *data, size_t datalen);
int EVP_MAC_final(EVP_MAC_CTX *ctx,
                  unsigned char *out, size_t *outl, size_t outsize);
int EVP_MAC_finalXOF(EVP_MAC_CTX *ctx, unsigned char *out, size_t outsize);
const OSSL_PARAM *EVP_MAC_gettable_params(const EVP_MAC *mac);
const OSSL_PARAM *EVP_MAC_gettable_ctx_params(const EVP_MAC *mac);
const OSSL_PARAM *EVP_MAC_settable_ctx_params(const EVP_MAC *mac);
const OSSL_PARAM *EVP_MAC_CTX_gettable_params(EVP_MAC_CTX *ctx);
const OSSL_PARAM *EVP_MAC_CTX_settable_params(EVP_MAC_CTX *ctx);

void EVP_MAC_do_all_provided(OSSL_LIB_CTX *libctx,
                             void (*fn)(EVP_MAC *mac, void *arg),
                             void *arg);
int EVP_MAC_names_do_all(const EVP_MAC *mac,
                         void (*fn)(const char *name, void *data),
                         void *data);


EVP_RAND *EVP_RAND_fetch(OSSL_LIB_CTX *libctx, const char *algorithm,
                         const char *properties);
int EVP_RAND_up_ref(EVP_RAND *rand);
void EVP_RAND_free(EVP_RAND *rand);
const char *EVP_RAND_get0_name(const EVP_RAND *rand);
const char *EVP_RAND_get0_description(const EVP_RAND *md);
int EVP_RAND_is_a(const EVP_RAND *rand, const char *name);
const OSSL_PROVIDER *EVP_RAND_get0_provider(const EVP_RAND *rand);
int EVP_RAND_get_params(EVP_RAND *rand, OSSL_PARAM params[]);

EVP_RAND_CTX *EVP_RAND_CTX_new(EVP_RAND *rand, EVP_RAND_CTX *parent);
void EVP_RAND_CTX_free(EVP_RAND_CTX *ctx);
EVP_RAND *EVP_RAND_CTX_get0_rand(EVP_RAND_CTX *ctx);
int EVP_RAND_CTX_get_params(EVP_RAND_CTX *ctx, OSSL_PARAM params[]);
int EVP_RAND_CTX_set_params(EVP_RAND_CTX *ctx, const OSSL_PARAM params[]);
const OSSL_PARAM *EVP_RAND_gettable_params(const EVP_RAND *rand);
const OSSL_PARAM *EVP_RAND_gettable_ctx_params(const EVP_RAND *rand);
const OSSL_PARAM *EVP_RAND_settable_ctx_params(const EVP_RAND *rand);
const OSSL_PARAM *EVP_RAND_CTX_gettable_params(EVP_RAND_CTX *ctx);
const OSSL_PARAM *EVP_RAND_CTX_settable_params(EVP_RAND_CTX *ctx);

void EVP_RAND_do_all_provided(OSSL_LIB_CTX *libctx,
                              void (*fn)(EVP_RAND *rand, void *arg),
                              void *arg);
int EVP_RAND_names_do_all(const EVP_RAND *rand,
                          void (*fn)(const char *name, void *data),
                          void *data);

 int EVP_RAND_instantiate(EVP_RAND_CTX *ctx, unsigned int strength,
                                int prediction_resistance,
                                const unsigned char *pstr, size_t pstr_len,
                                const OSSL_PARAM params[]);
int EVP_RAND_uninstantiate(EVP_RAND_CTX *ctx);
 int EVP_RAND_generate(EVP_RAND_CTX *ctx, unsigned char *out,
                             size_t outlen, unsigned int strength,
                             int prediction_resistance,
                             const unsigned char *addin, size_t addin_len);
int EVP_RAND_reseed(EVP_RAND_CTX *ctx, int prediction_resistance,
                    const unsigned char *ent, size_t ent_len,
                    const unsigned char *addin, size_t addin_len);
 int EVP_RAND_nonce(EVP_RAND_CTX *ctx, unsigned char *out, size_t outlen);
 int EVP_RAND_enable_locking(EVP_RAND_CTX *ctx);

int EVP_RAND_verify_zeroization(EVP_RAND_CTX *ctx);
unsigned int EVP_RAND_get_strength(EVP_RAND_CTX *ctx);
int EVP_RAND_get_state(EVP_RAND_CTX *ctx);







extern int EVP_PKEY_decrypt_old(unsigned char *dec_key,
                                          const unsigned char *enc_key,
                                          int enc_key_len,
                                          EVP_PKEY *private_key);
extern int EVP_PKEY_encrypt_old(unsigned char *enc_key,
                                          const unsigned char *key,
                                          int key_len, EVP_PKEY *pub_key);

int EVP_PKEY_is_a(const EVP_PKEY *pkey, const char *name);
int EVP_PKEY_type_names_do_all(const EVP_PKEY *pkey,
                               void (*fn)(const char *name, void *data),
                               void *data);
int EVP_PKEY_type(int type);
int EVP_PKEY_get_id(const EVP_PKEY *pkey);

int EVP_PKEY_get_base_id(const EVP_PKEY *pkey);

int EVP_PKEY_get_bits(const EVP_PKEY *pkey);

int EVP_PKEY_get_security_bits(const EVP_PKEY *pkey);

int EVP_PKEY_get_size(const EVP_PKEY *pkey);

int EVP_PKEY_can_sign(const EVP_PKEY *pkey);
int EVP_PKEY_set_type(EVP_PKEY *pkey, int type);
int EVP_PKEY_set_type_str(EVP_PKEY *pkey, const char *str, int len);
int EVP_PKEY_set_type_by_keymgmt(EVP_PKEY *pkey, EVP_KEYMGMT *keymgmt);







extern
int EVP_PKEY_assign(EVP_PKEY *pkey, int type, void *key);
extern
void *EVP_PKEY_get0(const EVP_PKEY *pkey);
extern
const unsigned char *EVP_PKEY_get0_hmac(const EVP_PKEY *pkey, size_t *len);

extern
const unsigned char *EVP_PKEY_get0_poly1305(const EVP_PKEY *pkey, size_t *len);


extern
const unsigned char *EVP_PKEY_get0_siphash(const EVP_PKEY *pkey, size_t *len);


struct rsa_st;
extern
int EVP_PKEY_set1_RSA(EVP_PKEY *pkey, struct rsa_st *key);
extern
const struct rsa_st *EVP_PKEY_get0_RSA(const EVP_PKEY *pkey);
extern
struct rsa_st *EVP_PKEY_get1_RSA(EVP_PKEY *pkey);


struct dsa_st;
extern
int EVP_PKEY_set1_DSA(EVP_PKEY *pkey, struct dsa_st *key);
extern
const struct dsa_st *EVP_PKEY_get0_DSA(const EVP_PKEY *pkey);
extern
struct dsa_st *EVP_PKEY_get1_DSA(EVP_PKEY *pkey);



struct dh_st;
extern int EVP_PKEY_set1_DH(EVP_PKEY *pkey, struct dh_st *key);
extern const struct dh_st *EVP_PKEY_get0_DH(const EVP_PKEY *pkey);
extern struct dh_st *EVP_PKEY_get1_DH(EVP_PKEY *pkey);



struct ec_key_st;
extern
int EVP_PKEY_set1_EC_KEY(EVP_PKEY *pkey, struct ec_key_st *key);
extern
const struct ec_key_st *EVP_PKEY_get0_EC_KEY(const EVP_PKEY *pkey);
extern
struct ec_key_st *EVP_PKEY_get1_EC_KEY(EVP_PKEY *pkey);



EVP_PKEY *EVP_PKEY_new(void);
int EVP_PKEY_up_ref(EVP_PKEY *pkey);
EVP_PKEY *EVP_PKEY_dup(EVP_PKEY *pkey);
void EVP_PKEY_free(EVP_PKEY *pkey);
const char *EVP_PKEY_get0_description(const EVP_PKEY *pkey);
const OSSL_PROVIDER *EVP_PKEY_get0_provider(const EVP_PKEY *key);

EVP_PKEY *d2i_PublicKey(int type, EVP_PKEY **a, const unsigned char **pp,
                        long length);
int i2d_PublicKey(const EVP_PKEY *a, unsigned char **pp);


EVP_PKEY *d2i_PrivateKey_ex(int type, EVP_PKEY **a, const unsigned char **pp,
                            long length, OSSL_LIB_CTX *libctx,
                            const char *propq);
EVP_PKEY *d2i_PrivateKey(int type, EVP_PKEY **a, const unsigned char **pp,
                         long length);
EVP_PKEY *d2i_AutoPrivateKey_ex(EVP_PKEY **a, const unsigned char **pp,
                                long length, OSSL_LIB_CTX *libctx,
                                const char *propq);
EVP_PKEY *d2i_AutoPrivateKey(EVP_PKEY **a, const unsigned char **pp,
                             long length);
int i2d_PrivateKey(const EVP_PKEY *a, unsigned char **pp);

int i2d_KeyParams(const EVP_PKEY *a, unsigned char **pp);
EVP_PKEY *d2i_KeyParams(int type, EVP_PKEY **a, const unsigned char **pp,
                        long length);
int i2d_KeyParams_bio(BIO *bp, const EVP_PKEY *pkey);
EVP_PKEY *d2i_KeyParams_bio(int type, EVP_PKEY **a, BIO *in);

int EVP_PKEY_copy_parameters(EVP_PKEY *to, const EVP_PKEY *from);
int EVP_PKEY_missing_parameters(const EVP_PKEY *pkey);
int EVP_PKEY_save_parameters(EVP_PKEY *pkey, int mode);
int EVP_PKEY_parameters_eq(const EVP_PKEY *a, const EVP_PKEY *b);
int EVP_PKEY_eq(const EVP_PKEY *a, const EVP_PKEY *b);


extern
int EVP_PKEY_cmp_parameters(const EVP_PKEY *a, const EVP_PKEY *b);
extern
int EVP_PKEY_cmp(const EVP_PKEY *a, const EVP_PKEY *b);


int EVP_PKEY_print_public(BIO *out, const EVP_PKEY *pkey,
                          int indent, ASN1_PCTX *pctx);
int EVP_PKEY_print_private(BIO *out, const EVP_PKEY *pkey,
                           int indent, ASN1_PCTX *pctx);
int EVP_PKEY_print_params(BIO *out, const EVP_PKEY *pkey,
                          int indent, ASN1_PCTX *pctx);

int EVP_PKEY_print_public_fp(FILE *fp, const EVP_PKEY *pkey,
                             int indent, ASN1_PCTX *pctx);
int EVP_PKEY_print_private_fp(FILE *fp, const EVP_PKEY *pkey,
                              int indent, ASN1_PCTX *pctx);
int EVP_PKEY_print_params_fp(FILE *fp, const EVP_PKEY *pkey,
                             int indent, ASN1_PCTX *pctx);


int EVP_PKEY_get_default_digest_nid(EVP_PKEY *pkey, int *pnid);
int EVP_PKEY_get_default_digest_name(EVP_PKEY *pkey,
                                     char *mdname, size_t mdname_sz);
int EVP_PKEY_digestsign_supports_digest(EVP_PKEY *pkey, OSSL_LIB_CTX *libctx,
                                        const char *name, const char *propq);
# 1451 "include/openssl/evp.h"
int EVP_PKEY_set1_encoded_public_key(EVP_PKEY *pkey,
                                     const unsigned char *pub, size_t publen);
# 1463 "include/openssl/evp.h"
size_t EVP_PKEY_get1_encoded_public_key(EVP_PKEY *pkey, unsigned char **ppub);


int EVP_CIPHER_param_to_asn1(EVP_CIPHER_CTX *c, ASN1_TYPE *type);
int EVP_CIPHER_asn1_to_param(EVP_CIPHER_CTX *c, ASN1_TYPE *type);


int EVP_CIPHER_set_asn1_iv(EVP_CIPHER_CTX *c, ASN1_TYPE *type);
int EVP_CIPHER_get_asn1_iv(EVP_CIPHER_CTX *c, ASN1_TYPE *type);


int PKCS5_PBE_keyivgen(EVP_CIPHER_CTX *ctx, const char *pass, int passlen,
                       ASN1_TYPE *param, const EVP_CIPHER *cipher,
                       const EVP_MD *md, int en_de);
int PKCS5_PBE_keyivgen_ex(EVP_CIPHER_CTX *cctx, const char *pass, int passlen,
                          ASN1_TYPE *param, const EVP_CIPHER *cipher,
                          const EVP_MD *md, int en_de, OSSL_LIB_CTX *libctx,
                          const char *propq);
int PKCS5_PBKDF2_HMAC_SHA1(const char *pass, int passlen,
                           const unsigned char *salt, int saltlen, int iter,
                           int keylen, unsigned char *out);
int PKCS5_PBKDF2_HMAC(const char *pass, int passlen,
                      const unsigned char *salt, int saltlen, int iter,
                      const EVP_MD *digest, int keylen, unsigned char *out);
int PKCS5_v2_PBE_keyivgen(EVP_CIPHER_CTX *ctx, const char *pass, int passlen,
                          ASN1_TYPE *param, const EVP_CIPHER *cipher,
                          const EVP_MD *md, int en_de);
int PKCS5_v2_PBE_keyivgen_ex(EVP_CIPHER_CTX *ctx, const char *pass, int passlen,
                             ASN1_TYPE *param, const EVP_CIPHER *cipher,
                             const EVP_MD *md, int en_de,
                             OSSL_LIB_CTX *libctx, const char *propq);


int EVP_PBE_scrypt(const char *pass, size_t passlen,
                   const unsigned char *salt, size_t saltlen,
                   uint64_t N, uint64_t r, uint64_t p, uint64_t maxmem,
                   unsigned char *key, size_t keylen);
int EVP_PBE_scrypt_ex(const char *pass, size_t passlen,
                      const unsigned char *salt, size_t saltlen,
                      uint64_t N, uint64_t r, uint64_t p, uint64_t maxmem,
                      unsigned char *key, size_t keylen,
                      OSSL_LIB_CTX *ctx, const char *propq);

int PKCS5_v2_scrypt_keyivgen(EVP_CIPHER_CTX *ctx, const char *pass,
                             int passlen, ASN1_TYPE *param,
                             const EVP_CIPHER *c, const EVP_MD *md, int en_de);
int PKCS5_v2_scrypt_keyivgen_ex(EVP_CIPHER_CTX *ctx, const char *pass,
                                int passlen, ASN1_TYPE *param,
                                const EVP_CIPHER *c, const EVP_MD *md, int en_de,
                                OSSL_LIB_CTX *libctx, const char *propq);


void PKCS5_PBE_add(void);

int EVP_PBE_CipherInit(ASN1_OBJECT *pbe_obj, const char *pass, int passlen,
                       ASN1_TYPE *param, EVP_CIPHER_CTX *ctx, int en_de);

int EVP_PBE_CipherInit_ex(ASN1_OBJECT *pbe_obj, const char *pass, int passlen,
                          ASN1_TYPE *param, EVP_CIPHER_CTX *ctx, int en_de,
                          OSSL_LIB_CTX *libctx, const char *propq);
# 1533 "include/openssl/evp.h"
int EVP_PBE_alg_add_type(int pbe_type, int pbe_nid, int cipher_nid,
                         int md_nid, EVP_PBE_KEYGEN *keygen);
int EVP_PBE_alg_add(int nid, const EVP_CIPHER *cipher, const EVP_MD *md,
                    EVP_PBE_KEYGEN *keygen);
int EVP_PBE_find(int type, int pbe_nid, int *pcnid, int *pmnid,
                 EVP_PBE_KEYGEN **pkeygen);
int EVP_PBE_find_ex(int type, int pbe_nid, int *pcnid, int *pmnid,
                    EVP_PBE_KEYGEN **pkeygen, EVP_PBE_KEYGEN_EX **pkeygen_ex);
void EVP_PBE_cleanup(void);
int EVP_PBE_get(int *ptype, int *ppbe_nid, size_t num);
# 1559 "include/openssl/evp.h"
int EVP_PKEY_asn1_get_count(void);
const EVP_PKEY_ASN1_METHOD *EVP_PKEY_asn1_get0(int idx);
const EVP_PKEY_ASN1_METHOD *EVP_PKEY_asn1_find(ENGINE **pe, int type);
const EVP_PKEY_ASN1_METHOD *EVP_PKEY_asn1_find_str(ENGINE **pe,
                                                   const char *str, int len);
int EVP_PKEY_asn1_add0(const EVP_PKEY_ASN1_METHOD *ameth);
int EVP_PKEY_asn1_add_alias(int to, int from);
int EVP_PKEY_asn1_get0_info(int *ppkey_id, int *pkey_base_id,
                            int *ppkey_flags, const char **pinfo,
                            const char **ppem_str,
                            const EVP_PKEY_ASN1_METHOD *ameth);

const EVP_PKEY_ASN1_METHOD *EVP_PKEY_get0_asn1(const EVP_PKEY *pkey);
EVP_PKEY_ASN1_METHOD *EVP_PKEY_asn1_new(int id, int flags,
                                        const char *pem_str,
                                        const char *info);
void EVP_PKEY_asn1_copy(EVP_PKEY_ASN1_METHOD *dst,
                        const EVP_PKEY_ASN1_METHOD *src);
void EVP_PKEY_asn1_free(EVP_PKEY_ASN1_METHOD *ameth);
void EVP_PKEY_asn1_set_public(EVP_PKEY_ASN1_METHOD *ameth,
                              int (*pub_decode) (EVP_PKEY *pk,
                                                 const X509_PUBKEY *pub),
                              int (*pub_encode) (X509_PUBKEY *pub,
                                                 const EVP_PKEY *pk),
                              int (*pub_cmp) (const EVP_PKEY *a,
                                              const EVP_PKEY *b),
                              int (*pub_print) (BIO *out,
                                                const EVP_PKEY *pkey,
                                                int indent, ASN1_PCTX *pctx),
                              int (*pkey_size) (const EVP_PKEY *pk),
                              int (*pkey_bits) (const EVP_PKEY *pk));
void EVP_PKEY_asn1_set_private(EVP_PKEY_ASN1_METHOD *ameth,
                               int (*priv_decode) (EVP_PKEY *pk,
                                                   const PKCS8_PRIV_KEY_INFO
                                                   *p8inf),
                               int (*priv_encode) (PKCS8_PRIV_KEY_INFO *p8,
                                                   const EVP_PKEY *pk),
                               int (*priv_print) (BIO *out,
                                                  const EVP_PKEY *pkey,
                                                  int indent,
                                                  ASN1_PCTX *pctx));
void EVP_PKEY_asn1_set_param(EVP_PKEY_ASN1_METHOD *ameth,
                             int (*param_decode) (EVP_PKEY *pkey,
                                                  const unsigned char **pder,
                                                  int derlen),
                             int (*param_encode) (const EVP_PKEY *pkey,
                                                  unsigned char **pder),
                             int (*param_missing) (const EVP_PKEY *pk),
                             int (*param_copy) (EVP_PKEY *to,
                                                const EVP_PKEY *from),
                             int (*param_cmp) (const EVP_PKEY *a,
                                               const EVP_PKEY *b),
                             int (*param_print) (BIO *out,
                                                 const EVP_PKEY *pkey,
                                                 int indent,
                                                 ASN1_PCTX *pctx));

void EVP_PKEY_asn1_set_free(EVP_PKEY_ASN1_METHOD *ameth,
                            void (*pkey_free) (EVP_PKEY *pkey));
void EVP_PKEY_asn1_set_ctrl(EVP_PKEY_ASN1_METHOD *ameth,
                            int (*pkey_ctrl) (EVP_PKEY *pkey, int op,
                                              long arg1, void *arg2));
void EVP_PKEY_asn1_set_item(EVP_PKEY_ASN1_METHOD *ameth,
                            int (*item_verify) (EVP_MD_CTX *ctx,
                                                const ASN1_ITEM *it,
                                                const void *data,
                                                const X509_ALGOR *a,
                                                const ASN1_BIT_STRING *sig,
                                                EVP_PKEY *pkey),
                            int (*item_sign) (EVP_MD_CTX *ctx,
                                              const ASN1_ITEM *it,
                                              const void *data,
                                              X509_ALGOR *alg1,
                                              X509_ALGOR *alg2,
                                              ASN1_BIT_STRING *sig));

void EVP_PKEY_asn1_set_siginf(EVP_PKEY_ASN1_METHOD *ameth,
                              int (*siginf_set) (X509_SIG_INFO *siginf,
                                                 const X509_ALGOR *alg,
                                                 const ASN1_STRING *sig));

void EVP_PKEY_asn1_set_check(EVP_PKEY_ASN1_METHOD *ameth,
                             int (*pkey_check) (const EVP_PKEY *pk));

void EVP_PKEY_asn1_set_public_check(EVP_PKEY_ASN1_METHOD *ameth,
                                    int (*pkey_pub_check) (const EVP_PKEY *pk));

void EVP_PKEY_asn1_set_param_check(EVP_PKEY_ASN1_METHOD *ameth,
                                   int (*pkey_param_check) (const EVP_PKEY *pk));

void EVP_PKEY_asn1_set_set_priv_key(EVP_PKEY_ASN1_METHOD *ameth,
                                    int (*set_priv_key) (EVP_PKEY *pk,
                                                         const unsigned char
                                                            *priv,
                                                         size_t len));
void EVP_PKEY_asn1_set_set_pub_key(EVP_PKEY_ASN1_METHOD *ameth,
                                   int (*set_pub_key) (EVP_PKEY *pk,
                                                       const unsigned char *pub,
                                                       size_t len));
void EVP_PKEY_asn1_set_get_priv_key(EVP_PKEY_ASN1_METHOD *ameth,
                                    int (*get_priv_key) (const EVP_PKEY *pk,
                                                         unsigned char *priv,
                                                         size_t *len));
void EVP_PKEY_asn1_set_get_pub_key(EVP_PKEY_ASN1_METHOD *ameth,
                                   int (*get_pub_key) (const EVP_PKEY *pk,
                                                       unsigned char *pub,
                                                       size_t *len));

void EVP_PKEY_asn1_set_security_bits(EVP_PKEY_ASN1_METHOD *ameth,
                                     int (*pkey_security_bits) (const EVP_PKEY
                                                                *pk));

int EVP_PKEY_CTX_get_signature_md(EVP_PKEY_CTX *ctx, const EVP_MD **md);
int EVP_PKEY_CTX_set_signature_md(EVP_PKEY_CTX *ctx, const EVP_MD *md);

int EVP_PKEY_CTX_set1_id(EVP_PKEY_CTX *ctx, const void *id, int len);
int EVP_PKEY_CTX_get1_id(EVP_PKEY_CTX *ctx, void *id);
int EVP_PKEY_CTX_get1_id_len(EVP_PKEY_CTX *ctx, size_t *id_len);

int EVP_PKEY_CTX_set_kem_op(EVP_PKEY_CTX *ctx, const char *op);

const char *EVP_PKEY_get0_type_name(const EVP_PKEY *key);
# 1711 "include/openssl/evp.h"
int EVP_PKEY_CTX_set_mac_key(EVP_PKEY_CTX *ctx, const unsigned char *key,
                             int keylen);
# 1743 "include/openssl/evp.h"
extern const EVP_PKEY_METHOD *EVP_PKEY_meth_find(int type);
extern EVP_PKEY_METHOD *EVP_PKEY_meth_new(int id, int flags);
extern void EVP_PKEY_meth_get0_info(int *ppkey_id, int *pflags,
                                              const EVP_PKEY_METHOD *meth);
extern void EVP_PKEY_meth_copy(EVP_PKEY_METHOD *dst,
                                         const EVP_PKEY_METHOD *src);
extern void EVP_PKEY_meth_free(EVP_PKEY_METHOD *pmeth);
extern int EVP_PKEY_meth_add0(const EVP_PKEY_METHOD *pmeth);
extern int EVP_PKEY_meth_remove(const EVP_PKEY_METHOD *pmeth);
extern size_t EVP_PKEY_meth_get_count(void);
extern const EVP_PKEY_METHOD *EVP_PKEY_meth_get0(size_t idx);


EVP_KEYMGMT *EVP_KEYMGMT_fetch(OSSL_LIB_CTX *ctx, const char *algorithm,
                               const char *properties);
int EVP_KEYMGMT_up_ref(EVP_KEYMGMT *keymgmt);
void EVP_KEYMGMT_free(EVP_KEYMGMT *keymgmt);
const OSSL_PROVIDER *EVP_KEYMGMT_get0_provider(const EVP_KEYMGMT *keymgmt);
const char *EVP_KEYMGMT_get0_name(const EVP_KEYMGMT *keymgmt);
const char *EVP_KEYMGMT_get0_description(const EVP_KEYMGMT *keymgmt);
int EVP_KEYMGMT_is_a(const EVP_KEYMGMT *keymgmt, const char *name);
void EVP_KEYMGMT_do_all_provided(OSSL_LIB_CTX *libctx,
                                 void (*fn)(EVP_KEYMGMT *keymgmt, void *arg),
                                 void *arg);
int EVP_KEYMGMT_names_do_all(const EVP_KEYMGMT *keymgmt,
                             void (*fn)(const char *name, void *data),
                             void *data);
const OSSL_PARAM *EVP_KEYMGMT_gettable_params(const EVP_KEYMGMT *keymgmt);
const OSSL_PARAM *EVP_KEYMGMT_settable_params(const EVP_KEYMGMT *keymgmt);
const OSSL_PARAM *EVP_KEYMGMT_gen_settable_params(const EVP_KEYMGMT *keymgmt);

EVP_PKEY_CTX *EVP_PKEY_CTX_new(EVP_PKEY *pkey, ENGINE *e);
EVP_PKEY_CTX *EVP_PKEY_CTX_new_id(int id, ENGINE *e);
EVP_PKEY_CTX *EVP_PKEY_CTX_new_from_name(OSSL_LIB_CTX *libctx,
                                         const char *name,
                                         const char *propquery);
EVP_PKEY_CTX *EVP_PKEY_CTX_new_from_pkey(OSSL_LIB_CTX *libctx,
                                         EVP_PKEY *pkey, const char *propquery);
EVP_PKEY_CTX *EVP_PKEY_CTX_dup(const EVP_PKEY_CTX *ctx);
void EVP_PKEY_CTX_free(EVP_PKEY_CTX *ctx);
int EVP_PKEY_CTX_is_a(EVP_PKEY_CTX *ctx, const char *keytype);

int EVP_PKEY_CTX_get_params(EVP_PKEY_CTX *ctx, OSSL_PARAM *params);
const OSSL_PARAM *EVP_PKEY_CTX_gettable_params(const EVP_PKEY_CTX *ctx);
int EVP_PKEY_CTX_set_params(EVP_PKEY_CTX *ctx, const OSSL_PARAM *params);
const OSSL_PARAM *EVP_PKEY_CTX_settable_params(const EVP_PKEY_CTX *ctx);
int EVP_PKEY_CTX_ctrl(EVP_PKEY_CTX *ctx, int keytype, int optype,
                      int cmd, int p1, void *p2);
int EVP_PKEY_CTX_ctrl_str(EVP_PKEY_CTX *ctx, const char *type,
                          const char *value);
int EVP_PKEY_CTX_ctrl_uint64(EVP_PKEY_CTX *ctx, int keytype, int optype,
                             int cmd, uint64_t value);

int EVP_PKEY_CTX_str2ctrl(EVP_PKEY_CTX *ctx, int cmd, const char *str);
int EVP_PKEY_CTX_hex2ctrl(EVP_PKEY_CTX *ctx, int cmd, const char *hex);

int EVP_PKEY_CTX_md(EVP_PKEY_CTX *ctx, int optype, int cmd, const char *md);

int EVP_PKEY_CTX_get_operation(EVP_PKEY_CTX *ctx);
void EVP_PKEY_CTX_set0_keygen_info(EVP_PKEY_CTX *ctx, int *dat, int datlen);

EVP_PKEY *EVP_PKEY_new_mac_key(int type, ENGINE *e,
                               const unsigned char *key, int keylen);
EVP_PKEY *EVP_PKEY_new_raw_private_key_ex(OSSL_LIB_CTX *libctx,
                                          const char *keytype,
                                          const char *propq,
                                          const unsigned char *priv, size_t len);
EVP_PKEY *EVP_PKEY_new_raw_private_key(int type, ENGINE *e,
                                       const unsigned char *priv,
                                       size_t len);
EVP_PKEY *EVP_PKEY_new_raw_public_key_ex(OSSL_LIB_CTX *libctx,
                                         const char *keytype, const char *propq,
                                         const unsigned char *pub, size_t len);
EVP_PKEY *EVP_PKEY_new_raw_public_key(int type, ENGINE *e,
                                      const unsigned char *pub,
                                      size_t len);
int EVP_PKEY_get_raw_private_key(const EVP_PKEY *pkey, unsigned char *priv,
                                 size_t *len);
int EVP_PKEY_get_raw_public_key(const EVP_PKEY *pkey, unsigned char *pub,
                                size_t *len);


extern
EVP_PKEY *EVP_PKEY_new_CMAC_key(ENGINE *e, const unsigned char *priv,
                                size_t len, const EVP_CIPHER *cipher);


void EVP_PKEY_CTX_set_data(EVP_PKEY_CTX *ctx, void *data);
void *EVP_PKEY_CTX_get_data(const EVP_PKEY_CTX *ctx);
EVP_PKEY *EVP_PKEY_CTX_get0_pkey(EVP_PKEY_CTX *ctx);

EVP_PKEY *EVP_PKEY_CTX_get0_peerkey(EVP_PKEY_CTX *ctx);

void EVP_PKEY_CTX_set_app_data(EVP_PKEY_CTX *ctx, void *data);
void *EVP_PKEY_CTX_get_app_data(EVP_PKEY_CTX *ctx);

void EVP_SIGNATURE_free(EVP_SIGNATURE *signature);
int EVP_SIGNATURE_up_ref(EVP_SIGNATURE *signature);
OSSL_PROVIDER *EVP_SIGNATURE_get0_provider(const EVP_SIGNATURE *signature);
EVP_SIGNATURE *EVP_SIGNATURE_fetch(OSSL_LIB_CTX *ctx, const char *algorithm,
                                   const char *properties);
int EVP_SIGNATURE_is_a(const EVP_SIGNATURE *signature, const char *name);
const char *EVP_SIGNATURE_get0_name(const EVP_SIGNATURE *signature);
const char *EVP_SIGNATURE_get0_description(const EVP_SIGNATURE *signature);
void EVP_SIGNATURE_do_all_provided(OSSL_LIB_CTX *libctx,
                                   void (*fn)(EVP_SIGNATURE *signature,
                                              void *data),
                                   void *data);
int EVP_SIGNATURE_names_do_all(const EVP_SIGNATURE *signature,
                               void (*fn)(const char *name, void *data),
                               void *data);
const OSSL_PARAM *EVP_SIGNATURE_gettable_ctx_params(const EVP_SIGNATURE *sig);
const OSSL_PARAM *EVP_SIGNATURE_settable_ctx_params(const EVP_SIGNATURE *sig);

void EVP_ASYM_CIPHER_free(EVP_ASYM_CIPHER *cipher);
int EVP_ASYM_CIPHER_up_ref(EVP_ASYM_CIPHER *cipher);
OSSL_PROVIDER *EVP_ASYM_CIPHER_get0_provider(const EVP_ASYM_CIPHER *cipher);
EVP_ASYM_CIPHER *EVP_ASYM_CIPHER_fetch(OSSL_LIB_CTX *ctx, const char *algorithm,
                                       const char *properties);
int EVP_ASYM_CIPHER_is_a(const EVP_ASYM_CIPHER *cipher, const char *name);
const char *EVP_ASYM_CIPHER_get0_name(const EVP_ASYM_CIPHER *cipher);
const char *EVP_ASYM_CIPHER_get0_description(const EVP_ASYM_CIPHER *cipher);
void EVP_ASYM_CIPHER_do_all_provided(OSSL_LIB_CTX *libctx,
                                     void (*fn)(EVP_ASYM_CIPHER *cipher,
                                                void *arg),
                                     void *arg);
int EVP_ASYM_CIPHER_names_do_all(const EVP_ASYM_CIPHER *cipher,
                                 void (*fn)(const char *name, void *data),
                                 void *data);
const OSSL_PARAM *EVP_ASYM_CIPHER_gettable_ctx_params(const EVP_ASYM_CIPHER *ciph);
const OSSL_PARAM *EVP_ASYM_CIPHER_settable_ctx_params(const EVP_ASYM_CIPHER *ciph);

void EVP_KEM_free(EVP_KEM *wrap);
int EVP_KEM_up_ref(EVP_KEM *wrap);
OSSL_PROVIDER *EVP_KEM_get0_provider(const EVP_KEM *wrap);
EVP_KEM *EVP_KEM_fetch(OSSL_LIB_CTX *ctx, const char *algorithm,
                       const char *properties);
int EVP_KEM_is_a(const EVP_KEM *wrap, const char *name);
const char *EVP_KEM_get0_name(const EVP_KEM *wrap);
const char *EVP_KEM_get0_description(const EVP_KEM *wrap);
void EVP_KEM_do_all_provided(OSSL_LIB_CTX *libctx,
                             void (*fn)(EVP_KEM *wrap, void *arg), void *arg);
int EVP_KEM_names_do_all(const EVP_KEM *wrap,
                         void (*fn)(const char *name, void *data), void *data);
const OSSL_PARAM *EVP_KEM_gettable_ctx_params(const EVP_KEM *kem);
const OSSL_PARAM *EVP_KEM_settable_ctx_params(const EVP_KEM *kem);

int EVP_PKEY_sign_init(EVP_PKEY_CTX *ctx);
int EVP_PKEY_sign_init_ex(EVP_PKEY_CTX *ctx, const OSSL_PARAM params[]);
int EVP_PKEY_sign(EVP_PKEY_CTX *ctx,
                  unsigned char *sig, size_t *siglen,
                  const unsigned char *tbs, size_t tbslen);
int EVP_PKEY_verify_init(EVP_PKEY_CTX *ctx);
int EVP_PKEY_verify_init_ex(EVP_PKEY_CTX *ctx, const OSSL_PARAM params[]);
int EVP_PKEY_verify(EVP_PKEY_CTX *ctx,
                    const unsigned char *sig, size_t siglen,
                    const unsigned char *tbs, size_t tbslen);
int EVP_PKEY_verify_recover_init(EVP_PKEY_CTX *ctx);
int EVP_PKEY_verify_recover_init_ex(EVP_PKEY_CTX *ctx,
                                    const OSSL_PARAM params[]);
int EVP_PKEY_verify_recover(EVP_PKEY_CTX *ctx,
                            unsigned char *rout, size_t *routlen,
                            const unsigned char *sig, size_t siglen);
int EVP_PKEY_encrypt_init(EVP_PKEY_CTX *ctx);
int EVP_PKEY_encrypt_init_ex(EVP_PKEY_CTX *ctx, const OSSL_PARAM params[]);
int EVP_PKEY_encrypt(EVP_PKEY_CTX *ctx,
                     unsigned char *out, size_t *outlen,
                     const unsigned char *in, size_t inlen);
int EVP_PKEY_decrypt_init(EVP_PKEY_CTX *ctx);
int EVP_PKEY_decrypt_init_ex(EVP_PKEY_CTX *ctx, const OSSL_PARAM params[]);
int EVP_PKEY_decrypt(EVP_PKEY_CTX *ctx,
                     unsigned char *out, size_t *outlen,
                     const unsigned char *in, size_t inlen);

int EVP_PKEY_derive_init(EVP_PKEY_CTX *ctx);
int EVP_PKEY_derive_init_ex(EVP_PKEY_CTX *ctx, const OSSL_PARAM params[]);
int EVP_PKEY_derive_set_peer_ex(EVP_PKEY_CTX *ctx, EVP_PKEY *peer,
                                int validate_peer);
int EVP_PKEY_derive_set_peer(EVP_PKEY_CTX *ctx, EVP_PKEY *peer);
int EVP_PKEY_derive(EVP_PKEY_CTX *ctx, unsigned char *key, size_t *keylen);

int EVP_PKEY_encapsulate_init(EVP_PKEY_CTX *ctx, const OSSL_PARAM params[]);
int EVP_PKEY_encapsulate(EVP_PKEY_CTX *ctx,
                         unsigned char *wrappedkey, size_t *wrappedkeylen,
                         unsigned char *genkey, size_t *genkeylen);
int EVP_PKEY_decapsulate_init(EVP_PKEY_CTX *ctx, const OSSL_PARAM params[]);
int EVP_PKEY_decapsulate(EVP_PKEY_CTX *ctx,
                         unsigned char *unwrapped, size_t *unwrappedlen,
                         const unsigned char *wrapped, size_t wrappedlen);

typedef int EVP_PKEY_gen_cb(EVP_PKEY_CTX *ctx);

int EVP_PKEY_fromdata_init(EVP_PKEY_CTX *ctx);
int EVP_PKEY_fromdata(EVP_PKEY_CTX *ctx, EVP_PKEY **ppkey, int selection,
                      OSSL_PARAM param[]);
const OSSL_PARAM *EVP_PKEY_fromdata_settable(EVP_PKEY_CTX *ctx, int selection);

int EVP_PKEY_todata(const EVP_PKEY *pkey, int selection, OSSL_PARAM **params);
int EVP_PKEY_export(const EVP_PKEY *pkey, int selection,
                    OSSL_CALLBACK *export_cb, void *export_cbarg);

const OSSL_PARAM *EVP_PKEY_gettable_params(const EVP_PKEY *pkey);
int EVP_PKEY_get_params(const EVP_PKEY *pkey, OSSL_PARAM params[]);
int EVP_PKEY_get_int_param(const EVP_PKEY *pkey, const char *key_name,
                           int *out);
int EVP_PKEY_get_size_t_param(const EVP_PKEY *pkey, const char *key_name,
                              size_t *out);
int EVP_PKEY_get_bn_param(const EVP_PKEY *pkey, const char *key_name,
                          BIGNUM **bn);
int EVP_PKEY_get_utf8_string_param(const EVP_PKEY *pkey, const char *key_name,
                                    char *str, size_t max_buf_sz, size_t *out_sz);
int EVP_PKEY_get_octet_string_param(const EVP_PKEY *pkey, const char *key_name,
                                    unsigned char *buf, size_t max_buf_sz,
                                    size_t *out_sz);

const OSSL_PARAM *EVP_PKEY_settable_params(const EVP_PKEY *pkey);
int EVP_PKEY_set_params(EVP_PKEY *pkey, OSSL_PARAM params[]);
int EVP_PKEY_set_int_param(EVP_PKEY *pkey, const char *key_name, int in);
int EVP_PKEY_set_size_t_param(EVP_PKEY *pkey, const char *key_name, size_t in);
int EVP_PKEY_set_bn_param(EVP_PKEY *pkey, const char *key_name,
                          const BIGNUM *bn);
int EVP_PKEY_set_utf8_string_param(EVP_PKEY *pkey, const char *key_name,
                                   const char *str);
int EVP_PKEY_set_octet_string_param(EVP_PKEY *pkey, const char *key_name,
                                    const unsigned char *buf, size_t bsize);

int EVP_PKEY_get_ec_point_conv_form(const EVP_PKEY *pkey);
int EVP_PKEY_get_field_type(const EVP_PKEY *pkey);

EVP_PKEY *EVP_PKEY_Q_keygen(OSSL_LIB_CTX *libctx, const char *propq,
                            const char *type, ...);
int EVP_PKEY_paramgen_init(EVP_PKEY_CTX *ctx);
int EVP_PKEY_paramgen(EVP_PKEY_CTX *ctx, EVP_PKEY **ppkey);
int EVP_PKEY_keygen_init(EVP_PKEY_CTX *ctx);
int EVP_PKEY_keygen(EVP_PKEY_CTX *ctx, EVP_PKEY **ppkey);
int EVP_PKEY_generate(EVP_PKEY_CTX *ctx, EVP_PKEY **ppkey);
int EVP_PKEY_check(EVP_PKEY_CTX *ctx);
int EVP_PKEY_public_check(EVP_PKEY_CTX *ctx);
int EVP_PKEY_public_check_quick(EVP_PKEY_CTX *ctx);
int EVP_PKEY_param_check(EVP_PKEY_CTX *ctx);
int EVP_PKEY_param_check_quick(EVP_PKEY_CTX *ctx);
int EVP_PKEY_private_check(EVP_PKEY_CTX *ctx);
int EVP_PKEY_pairwise_check(EVP_PKEY_CTX *ctx);



int EVP_PKEY_set_ex_data(EVP_PKEY *key, int idx, void *arg);
void *EVP_PKEY_get_ex_data(const EVP_PKEY *key, int idx);

void EVP_PKEY_CTX_set_cb(EVP_PKEY_CTX *ctx, EVP_PKEY_gen_cb *cb);
EVP_PKEY_gen_cb *EVP_PKEY_CTX_get_cb(EVP_PKEY_CTX *ctx);

int EVP_PKEY_CTX_get_keygen_info(EVP_PKEY_CTX *ctx, int idx);

extern void EVP_PKEY_meth_set_init(EVP_PKEY_METHOD *pmeth,
                                             int (*init) (EVP_PKEY_CTX *ctx));
extern void EVP_PKEY_meth_set_copy
    (EVP_PKEY_METHOD *pmeth, int (*copy) (EVP_PKEY_CTX *dst,
                                          const EVP_PKEY_CTX *src));
extern void EVP_PKEY_meth_set_cleanup
    (EVP_PKEY_METHOD *pmeth, void (*cleanup) (EVP_PKEY_CTX *ctx));
extern void EVP_PKEY_meth_set_paramgen
    (EVP_PKEY_METHOD *pmeth, int (*paramgen_init) (EVP_PKEY_CTX *ctx),
     int (*paramgen) (EVP_PKEY_CTX *ctx, EVP_PKEY *pkey));
extern void EVP_PKEY_meth_set_keygen
    (EVP_PKEY_METHOD *pmeth, int (*keygen_init) (EVP_PKEY_CTX *ctx),
     int (*keygen) (EVP_PKEY_CTX *ctx, EVP_PKEY *pkey));
extern void EVP_PKEY_meth_set_sign
    (EVP_PKEY_METHOD *pmeth, int (*sign_init) (EVP_PKEY_CTX *ctx),
     int (*sign) (EVP_PKEY_CTX *ctx, unsigned char *sig, size_t *siglen,
                  const unsigned char *tbs, size_t tbslen));
extern void EVP_PKEY_meth_set_verify
    (EVP_PKEY_METHOD *pmeth, int (*verify_init) (EVP_PKEY_CTX *ctx),
     int (*verify) (EVP_PKEY_CTX *ctx, const unsigned char *sig, size_t siglen,
                    const unsigned char *tbs, size_t tbslen));
extern void EVP_PKEY_meth_set_verify_recover
    (EVP_PKEY_METHOD *pmeth, int (*verify_recover_init) (EVP_PKEY_CTX *ctx),
     int (*verify_recover) (EVP_PKEY_CTX *ctx, unsigned char *sig,
                            size_t *siglen, const unsigned char *tbs,
                            size_t tbslen));
extern void EVP_PKEY_meth_set_signctx
    (EVP_PKEY_METHOD *pmeth, int (*signctx_init) (EVP_PKEY_CTX *ctx,
                                                  EVP_MD_CTX *mctx),
     int (*signctx) (EVP_PKEY_CTX *ctx, unsigned char *sig, size_t *siglen,
                     EVP_MD_CTX *mctx));
extern void EVP_PKEY_meth_set_verifyctx
    (EVP_PKEY_METHOD *pmeth, int (*verifyctx_init) (EVP_PKEY_CTX *ctx,
                                                    EVP_MD_CTX *mctx),
     int (*verifyctx) (EVP_PKEY_CTX *ctx, const unsigned char *sig, int siglen,
                       EVP_MD_CTX *mctx));
extern void EVP_PKEY_meth_set_encrypt
    (EVP_PKEY_METHOD *pmeth, int (*encrypt_init) (EVP_PKEY_CTX *ctx),
     int (*encryptfn) (EVP_PKEY_CTX *ctx, unsigned char *out, size_t *outlen,
                       const unsigned char *in, size_t inlen));
extern void EVP_PKEY_meth_set_decrypt
    (EVP_PKEY_METHOD *pmeth, int (*decrypt_init) (EVP_PKEY_CTX *ctx),
     int (*decrypt) (EVP_PKEY_CTX *ctx, unsigned char *out, size_t *outlen,
                     const unsigned char *in, size_t inlen));
extern void EVP_PKEY_meth_set_derive
    (EVP_PKEY_METHOD *pmeth, int (*derive_init) (EVP_PKEY_CTX *ctx),
     int (*derive) (EVP_PKEY_CTX *ctx, unsigned char *key, size_t *keylen));
extern void EVP_PKEY_meth_set_ctrl
    (EVP_PKEY_METHOD *pmeth, int (*ctrl) (EVP_PKEY_CTX *ctx, int type, int p1,
                                          void *p2),
     int (*ctrl_str) (EVP_PKEY_CTX *ctx, const char *type, const char *value));
extern void EVP_PKEY_meth_set_digestsign
    (EVP_PKEY_METHOD *pmeth,
     int (*digestsign) (EVP_MD_CTX *ctx, unsigned char *sig, size_t *siglen,
                        const unsigned char *tbs, size_t tbslen));
extern void EVP_PKEY_meth_set_digestverify
    (EVP_PKEY_METHOD *pmeth,
     int (*digestverify) (EVP_MD_CTX *ctx, const unsigned char *sig,
                          size_t siglen, const unsigned char *tbs,
                          size_t tbslen));
extern void EVP_PKEY_meth_set_check
    (EVP_PKEY_METHOD *pmeth, int (*check) (EVP_PKEY *pkey));
extern void EVP_PKEY_meth_set_public_check
    (EVP_PKEY_METHOD *pmeth, int (*check) (EVP_PKEY *pkey));
extern void EVP_PKEY_meth_set_param_check
    (EVP_PKEY_METHOD *pmeth, int (*check) (EVP_PKEY *pkey));
extern void EVP_PKEY_meth_set_digest_custom
    (EVP_PKEY_METHOD *pmeth, int (*digest_custom) (EVP_PKEY_CTX *ctx,
                                                   EVP_MD_CTX *mctx));
extern void EVP_PKEY_meth_get_init
    (const EVP_PKEY_METHOD *pmeth, int (**pinit) (EVP_PKEY_CTX *ctx));
extern void EVP_PKEY_meth_get_copy
    (const EVP_PKEY_METHOD *pmeth, int (**pcopy) (EVP_PKEY_CTX *dst,
                                                  const EVP_PKEY_CTX *src));
extern void EVP_PKEY_meth_get_cleanup
    (const EVP_PKEY_METHOD *pmeth, void (**pcleanup) (EVP_PKEY_CTX *ctx));
extern void EVP_PKEY_meth_get_paramgen
    (const EVP_PKEY_METHOD *pmeth, int (**pparamgen_init) (EVP_PKEY_CTX *ctx),
     int (**pparamgen) (EVP_PKEY_CTX *ctx, EVP_PKEY *pkey));
extern void EVP_PKEY_meth_get_keygen
    (const EVP_PKEY_METHOD *pmeth, int (**pkeygen_init) (EVP_PKEY_CTX *ctx),
     int (**pkeygen) (EVP_PKEY_CTX *ctx, EVP_PKEY *pkey));
extern void EVP_PKEY_meth_get_sign
    (const EVP_PKEY_METHOD *pmeth, int (**psign_init) (EVP_PKEY_CTX *ctx),
     int (**psign) (EVP_PKEY_CTX *ctx, unsigned char *sig, size_t *siglen,
                    const unsigned char *tbs, size_t tbslen));
extern void EVP_PKEY_meth_get_verify
    (const EVP_PKEY_METHOD *pmeth, int (**pverify_init) (EVP_PKEY_CTX *ctx),
     int (**pverify) (EVP_PKEY_CTX *ctx, const unsigned char *sig,
                      size_t siglen, const unsigned char *tbs, size_t tbslen));
extern void EVP_PKEY_meth_get_verify_recover
    (const EVP_PKEY_METHOD *pmeth,
     int (**pverify_recover_init) (EVP_PKEY_CTX *ctx),
     int (**pverify_recover) (EVP_PKEY_CTX *ctx, unsigned char *sig,
                              size_t *siglen, const unsigned char *tbs,
                              size_t tbslen));
extern void EVP_PKEY_meth_get_signctx
    (const EVP_PKEY_METHOD *pmeth,
     int (**psignctx_init) (EVP_PKEY_CTX *ctx, EVP_MD_CTX *mctx),
     int (**psignctx) (EVP_PKEY_CTX *ctx, unsigned char *sig, size_t *siglen,
                       EVP_MD_CTX *mctx));
extern void EVP_PKEY_meth_get_verifyctx
    (const EVP_PKEY_METHOD *pmeth,
     int (**pverifyctx_init) (EVP_PKEY_CTX *ctx, EVP_MD_CTX *mctx),
     int (**pverifyctx) (EVP_PKEY_CTX *ctx, const unsigned char *sig,
                          int siglen, EVP_MD_CTX *mctx));
extern void EVP_PKEY_meth_get_encrypt
    (const EVP_PKEY_METHOD *pmeth, int (**pencrypt_init) (EVP_PKEY_CTX *ctx),
     int (**pencryptfn) (EVP_PKEY_CTX *ctx, unsigned char *out, size_t *outlen,
                         const unsigned char *in, size_t inlen));
extern void EVP_PKEY_meth_get_decrypt
    (const EVP_PKEY_METHOD *pmeth, int (**pdecrypt_init) (EVP_PKEY_CTX *ctx),
     int (**pdecrypt) (EVP_PKEY_CTX *ctx, unsigned char *out, size_t *outlen,
                       const unsigned char *in, size_t inlen));
extern void EVP_PKEY_meth_get_derive
    (const EVP_PKEY_METHOD *pmeth, int (**pderive_init) (EVP_PKEY_CTX *ctx),
     int (**pderive) (EVP_PKEY_CTX *ctx, unsigned char *key, size_t *keylen));
extern void EVP_PKEY_meth_get_ctrl
    (const EVP_PKEY_METHOD *pmeth,
     int (**pctrl) (EVP_PKEY_CTX *ctx, int type, int p1, void *p2),
     int (**pctrl_str) (EVP_PKEY_CTX *ctx, const char *type,
                        const char *value));
extern void EVP_PKEY_meth_get_digestsign
    (const EVP_PKEY_METHOD *pmeth,
     int (**digestsign) (EVP_MD_CTX *ctx, unsigned char *sig, size_t *siglen,
                         const unsigned char *tbs, size_t tbslen));
extern void EVP_PKEY_meth_get_digestverify
    (const EVP_PKEY_METHOD *pmeth,
     int (**digestverify) (EVP_MD_CTX *ctx, const unsigned char *sig,
                           size_t siglen, const unsigned char *tbs,
                           size_t tbslen));
extern void EVP_PKEY_meth_get_check
    (const EVP_PKEY_METHOD *pmeth, int (**pcheck) (EVP_PKEY *pkey));
extern void EVP_PKEY_meth_get_public_check
    (const EVP_PKEY_METHOD *pmeth, int (**pcheck) (EVP_PKEY *pkey));
extern void EVP_PKEY_meth_get_param_check
    (const EVP_PKEY_METHOD *pmeth, int (**pcheck) (EVP_PKEY *pkey));
extern void EVP_PKEY_meth_get_digest_custom
    (const EVP_PKEY_METHOD *pmeth,
     int (**pdigest_custom) (EVP_PKEY_CTX *ctx, EVP_MD_CTX *mctx));


void EVP_KEYEXCH_free(EVP_KEYEXCH *exchange);
int EVP_KEYEXCH_up_ref(EVP_KEYEXCH *exchange);
EVP_KEYEXCH *EVP_KEYEXCH_fetch(OSSL_LIB_CTX *ctx, const char *algorithm,
                               const char *properties);
OSSL_PROVIDER *EVP_KEYEXCH_get0_provider(const EVP_KEYEXCH *exchange);
int EVP_KEYEXCH_is_a(const EVP_KEYEXCH *keyexch, const char *name);
const char *EVP_KEYEXCH_get0_name(const EVP_KEYEXCH *keyexch);
const char *EVP_KEYEXCH_get0_description(const EVP_KEYEXCH *keyexch);
void EVP_KEYEXCH_do_all_provided(OSSL_LIB_CTX *libctx,
                                 void (*fn)(EVP_KEYEXCH *keyexch, void *data),
                                 void *data);
int EVP_KEYEXCH_names_do_all(const EVP_KEYEXCH *keyexch,
                             void (*fn)(const char *name, void *data),
                             void *data);
const OSSL_PARAM *EVP_KEYEXCH_gettable_ctx_params(const EVP_KEYEXCH *keyexch);
const OSSL_PARAM *EVP_KEYEXCH_settable_ctx_params(const EVP_KEYEXCH *keyexch);

void EVP_add_alg_module(void);

int EVP_PKEY_CTX_set_group_name(EVP_PKEY_CTX *ctx, const char *name);
int EVP_PKEY_CTX_get_group_name(EVP_PKEY_CTX *ctx, char *name, size_t namelen);
int EVP_PKEY_get_group_name(const EVP_PKEY *pkey, char *name, size_t name_sz,
                            size_t *gname_len);

OSSL_LIB_CTX *EVP_PKEY_CTX_get0_libctx(EVP_PKEY_CTX *ctx);
const char *EVP_PKEY_CTX_get0_propq(const EVP_PKEY_CTX *ctx);
const OSSL_PROVIDER *EVP_PKEY_CTX_get0_provider(const EVP_PKEY_CTX *ctx);
# 20 "crypto/pem/pem_all.c" 2
# 1 "include/openssl/x509.h" 1
# 18 "include/openssl/x509.h"
        
# 33 "include/openssl/x509.h"
# 1 "include/openssl/ec.h" 1
# 13 "include/openssl/ec.h"
        
# 33 "include/openssl/ec.h"
int EVP_PKEY_CTX_set_ec_paramgen_curve_nid(EVP_PKEY_CTX *ctx, int nid);
int EVP_PKEY_CTX_set_ec_param_enc(EVP_PKEY_CTX *ctx, int param_enc);
int EVP_PKEY_CTX_set_ecdh_cofactor_mode(EVP_PKEY_CTX *ctx, int cofactor_mode);
int EVP_PKEY_CTX_get_ecdh_cofactor_mode(EVP_PKEY_CTX *ctx);

int EVP_PKEY_CTX_set_ecdh_kdf_type(EVP_PKEY_CTX *ctx, int kdf);
int EVP_PKEY_CTX_get_ecdh_kdf_type(EVP_PKEY_CTX *ctx);

int EVP_PKEY_CTX_set_ecdh_kdf_md(EVP_PKEY_CTX *ctx, const EVP_MD *md);
int EVP_PKEY_CTX_get_ecdh_kdf_md(EVP_PKEY_CTX *ctx, const EVP_MD **md);

int EVP_PKEY_CTX_set_ecdh_kdf_outlen(EVP_PKEY_CTX *ctx, int len);
int EVP_PKEY_CTX_get_ecdh_kdf_outlen(EVP_PKEY_CTX *ctx, int *len);

int EVP_PKEY_CTX_set0_ecdh_kdf_ukm(EVP_PKEY_CTX *ctx, unsigned char *ukm,
                                   int len);

extern
int EVP_PKEY_CTX_get0_ecdh_kdf_ukm(EVP_PKEY_CTX *ctx, unsigned char **ukm);
# 78 "include/openssl/ec.h"
typedef enum {


    POINT_CONVERSION_COMPRESSED = 2,

    POINT_CONVERSION_UNCOMPRESSED = 4,


    POINT_CONVERSION_HYBRID = 6
} point_conversion_form_t;

const char *OSSL_EC_curve_nid2name(int nid);







# 1 "include/openssl/ecerr.h" 1
# 13 "include/openssl/ecerr.h"
        
# 98 "include/openssl/ec.h" 2







typedef struct ec_method_st EC_METHOD;

typedef struct ec_group_st EC_GROUP;
typedef struct ec_point_st EC_POINT;
typedef struct ecpk_parameters_st ECPKPARAMETERS;
typedef struct ec_parameters_st ECPARAMETERS;
# 121 "include/openssl/ec.h"
extern const EC_METHOD *EC_GFp_simple_method(void);




extern const EC_METHOD *EC_GFp_mont_method(void);




extern const EC_METHOD *EC_GFp_nist_method(void);
# 158 "include/openssl/ec.h"
extern const EC_METHOD *EC_GF2m_simple_method(void);
# 171 "include/openssl/ec.h"
extern EC_GROUP *EC_GROUP_new(const EC_METHOD *meth);




extern void EC_GROUP_clear_free(EC_GROUP *group);





extern const EC_METHOD *EC_GROUP_method_of(const EC_GROUP *group);





extern int EC_METHOD_get_field_type(const EC_METHOD *meth);





void EC_GROUP_free(EC_GROUP *group);






int EC_GROUP_copy(EC_GROUP *dst, const EC_GROUP *src);






EC_GROUP *EC_GROUP_dup(const EC_GROUP *src);
# 218 "include/openssl/ec.h"
int EC_GROUP_set_generator(EC_GROUP *group, const EC_POINT *generator,
                           const BIGNUM *order, const BIGNUM *cofactor);





const EC_POINT *EC_GROUP_get0_generator(const EC_GROUP *group);





BN_MONT_CTX *EC_GROUP_get_mont_data(const EC_GROUP *group);







int EC_GROUP_get_order(const EC_GROUP *group, BIGNUM *order, BN_CTX *ctx);





const BIGNUM *EC_GROUP_get0_order(const EC_GROUP *group);





int EC_GROUP_order_bits(const EC_GROUP *group);







int EC_GROUP_get_cofactor(const EC_GROUP *group, BIGNUM *cofactor,
                          BN_CTX *ctx);





const BIGNUM *EC_GROUP_get0_cofactor(const EC_GROUP *group);





void EC_GROUP_set_curve_name(EC_GROUP *group, int nid);





int EC_GROUP_get_curve_name(const EC_GROUP *group);





const BIGNUM *EC_GROUP_get0_field(const EC_GROUP *group);





int EC_GROUP_get_field_type(const EC_GROUP *group);

void EC_GROUP_set_asn1_flag(EC_GROUP *group, int flag);
int EC_GROUP_get_asn1_flag(const EC_GROUP *group);

void EC_GROUP_set_point_conversion_form(EC_GROUP *group,
                                        point_conversion_form_t form);
point_conversion_form_t EC_GROUP_get_point_conversion_form(const EC_GROUP *);

unsigned char *EC_GROUP_get0_seed(const EC_GROUP *x);
size_t EC_GROUP_get_seed_len(const EC_GROUP *);
size_t EC_GROUP_set_seed(EC_GROUP *, const unsigned char *, size_t len);
# 313 "include/openssl/ec.h"
int EC_GROUP_set_curve(EC_GROUP *group, const BIGNUM *p, const BIGNUM *a,
                       const BIGNUM *b, BN_CTX *ctx);
# 326 "include/openssl/ec.h"
int EC_GROUP_get_curve(const EC_GROUP *group, BIGNUM *p, BIGNUM *a, BIGNUM *b,
                       BN_CTX *ctx);
# 339 "include/openssl/ec.h"
extern int EC_GROUP_set_curve_GFp(EC_GROUP *group,
                                                 const BIGNUM *p,
                                                 const BIGNUM *a,
                                                 const BIGNUM *b,
                                                 BN_CTX *ctx);
# 354 "include/openssl/ec.h"
extern int EC_GROUP_get_curve_GFp(const EC_GROUP *group,
                                                 BIGNUM *p,
                                                 BIGNUM *a, BIGNUM *b,
                                                 BN_CTX *ctx);
# 369 "include/openssl/ec.h"
extern int EC_GROUP_set_curve_GF2m(EC_GROUP *group,
                                                  const BIGNUM *p,
                                                  const BIGNUM *a,
                                                  const BIGNUM *b,
                                                  BN_CTX *ctx);
# 384 "include/openssl/ec.h"
extern int EC_GROUP_get_curve_GF2m(const EC_GROUP *group,
                                                  BIGNUM *p,
                                                  BIGNUM *a, BIGNUM *b,
                                                  BN_CTX *ctx);







int EC_GROUP_get_degree(const EC_GROUP *group);






int EC_GROUP_check(const EC_GROUP *group, BN_CTX *ctx);






int EC_GROUP_check_discriminant(const EC_GROUP *group, BN_CTX *ctx);







int EC_GROUP_cmp(const EC_GROUP *a, const EC_GROUP *b, BN_CTX *ctx);
# 432 "include/openssl/ec.h"
EC_GROUP *EC_GROUP_new_curve_GFp(const BIGNUM *p, const BIGNUM *a,
                                 const BIGNUM *b, BN_CTX *ctx);
# 443 "include/openssl/ec.h"
EC_GROUP *EC_GROUP_new_curve_GF2m(const BIGNUM *p, const BIGNUM *a,
                                  const BIGNUM *b, BN_CTX *ctx);
# 457 "include/openssl/ec.h"
EC_GROUP *EC_GROUP_new_from_params(const OSSL_PARAM params[],
                                   OSSL_LIB_CTX *libctx, const char *propq);
# 469 "include/openssl/ec.h"
EC_GROUP *EC_GROUP_new_by_curve_name_ex(OSSL_LIB_CTX *libctx, const char *propq,
                                        int nid);
# 480 "include/openssl/ec.h"
EC_GROUP *EC_GROUP_new_by_curve_name(int nid);






EC_GROUP *EC_GROUP_new_from_ecparameters(const ECPARAMETERS *params);







ECPARAMETERS *EC_GROUP_get_ecparameters(const EC_GROUP *group,
                                        ECPARAMETERS *params);






EC_GROUP *EC_GROUP_new_from_ecpkparameters(const ECPKPARAMETERS *params);







ECPKPARAMETERS *EC_GROUP_get_ecpkparameters(const EC_GROUP *group,
                                            ECPKPARAMETERS *params);





typedef struct {
    int nid;
    const char *comment;
} EC_builtin_curve;







size_t EC_get_builtin_curves(EC_builtin_curve *r, size_t nitems);

const char *EC_curve_nid2nist(int nid);
int EC_curve_nist2nid(const char *name);
int EC_GROUP_check_named_curve(const EC_GROUP *group, int nist_only,
                               BN_CTX *ctx);
# 544 "include/openssl/ec.h"
EC_POINT *EC_POINT_new(const EC_GROUP *group);




void EC_POINT_free(EC_POINT *point);




void EC_POINT_clear_free(EC_POINT *point);






int EC_POINT_copy(EC_POINT *dst, const EC_POINT *src);







EC_POINT *EC_POINT_dup(const EC_POINT *src, const EC_GROUP *group);






int EC_POINT_set_to_infinity(const EC_GROUP *group, EC_POINT *point);






extern const EC_METHOD *EC_POINT_method_of(const EC_POINT *point);
# 594 "include/openssl/ec.h"
extern int EC_POINT_set_Jprojective_coordinates_GFp
                      (const EC_GROUP *group, EC_POINT *p,
                       const BIGNUM *x, const BIGNUM *y, const BIGNUM *z,
                       BN_CTX *ctx);
# 608 "include/openssl/ec.h"
extern int EC_POINT_get_Jprojective_coordinates_GFp
                      (const EC_GROUP *group, const EC_POINT *p,
                       BIGNUM *x, BIGNUM *y, BIGNUM *z, BN_CTX *ctx);
# 621 "include/openssl/ec.h"
int EC_POINT_set_affine_coordinates(const EC_GROUP *group, EC_POINT *p,
                                    const BIGNUM *x, const BIGNUM *y,
                                    BN_CTX *ctx);
# 633 "include/openssl/ec.h"
int EC_POINT_get_affine_coordinates(const EC_GROUP *group, const EC_POINT *p,
                                    BIGNUM *x, BIGNUM *y, BN_CTX *ctx);
# 646 "include/openssl/ec.h"
extern int EC_POINT_set_affine_coordinates_GFp
                      (const EC_GROUP *group, EC_POINT *p,
                       const BIGNUM *x, const BIGNUM *y, BN_CTX *ctx);
# 659 "include/openssl/ec.h"
extern int EC_POINT_get_affine_coordinates_GFp
                      (const EC_GROUP *group, const EC_POINT *p,
                       BIGNUM *x, BIGNUM *y, BN_CTX *ctx);
# 672 "include/openssl/ec.h"
int EC_POINT_set_compressed_coordinates(const EC_GROUP *group, EC_POINT *p,
                                        const BIGNUM *x, int y_bit,
                                        BN_CTX *ctx);
# 686 "include/openssl/ec.h"
extern int EC_POINT_set_compressed_coordinates_GFp
                      (const EC_GROUP *group, EC_POINT *p,
                       const BIGNUM *x, int y_bit, BN_CTX *ctx);
# 699 "include/openssl/ec.h"
extern int EC_POINT_set_affine_coordinates_GF2m
                      (const EC_GROUP *group, EC_POINT *p,
                       const BIGNUM *x, const BIGNUM *y, BN_CTX *ctx);
# 712 "include/openssl/ec.h"
extern int EC_POINT_get_affine_coordinates_GF2m
                      (const EC_GROUP *group, const EC_POINT *p,
                       BIGNUM *x, BIGNUM *y, BN_CTX *ctx);
# 725 "include/openssl/ec.h"
extern int EC_POINT_set_compressed_coordinates_GF2m
                      (const EC_GROUP *group, EC_POINT *p,
                       const BIGNUM *x, int y_bit, BN_CTX *ctx);
# 741 "include/openssl/ec.h"
size_t EC_POINT_point2oct(const EC_GROUP *group, const EC_POINT *p,
                          point_conversion_form_t form,
                          unsigned char *buf, size_t len, BN_CTX *ctx);
# 753 "include/openssl/ec.h"
int EC_POINT_oct2point(const EC_GROUP *group, EC_POINT *p,
                       const unsigned char *buf, size_t len, BN_CTX *ctx);
# 764 "include/openssl/ec.h"
size_t EC_POINT_point2buf(const EC_GROUP *group, const EC_POINT *point,
                          point_conversion_form_t form,
                          unsigned char **pbuf, BN_CTX *ctx);



extern BIGNUM *EC_POINT_point2bn(const EC_GROUP *,
                                                const EC_POINT *,
                                                point_conversion_form_t form,
                                                BIGNUM *, BN_CTX *);
extern EC_POINT *EC_POINT_bn2point(const EC_GROUP *,
                                                  const BIGNUM *,
                                                  EC_POINT *, BN_CTX *);


char *EC_POINT_point2hex(const EC_GROUP *, const EC_POINT *,
                         point_conversion_form_t form, BN_CTX *);
EC_POINT *EC_POINT_hex2point(const EC_GROUP *, const char *,
                             EC_POINT *, BN_CTX *);
# 796 "include/openssl/ec.h"
int EC_POINT_add(const EC_GROUP *group, EC_POINT *r, const EC_POINT *a,
                 const EC_POINT *b, BN_CTX *ctx);
# 806 "include/openssl/ec.h"
int EC_POINT_dbl(const EC_GROUP *group, EC_POINT *r, const EC_POINT *a,
                 BN_CTX *ctx);







int EC_POINT_invert(const EC_GROUP *group, EC_POINT *a, BN_CTX *ctx);






int EC_POINT_is_at_infinity(const EC_GROUP *group, const EC_POINT *p);







int EC_POINT_is_on_curve(const EC_GROUP *group, const EC_POINT *point,
                         BN_CTX *ctx);
# 840 "include/openssl/ec.h"
int EC_POINT_cmp(const EC_GROUP *group, const EC_POINT *a, const EC_POINT *b,
                 BN_CTX *ctx);


extern int EC_POINT_make_affine(const EC_GROUP *group,
                                               EC_POINT *point, BN_CTX *ctx);
extern int EC_POINTs_make_affine(const EC_GROUP *group, size_t num,
                                                EC_POINT *points[], BN_CTX *ctx);
# 859 "include/openssl/ec.h"
extern int EC_POINTs_mul(const EC_GROUP *group, EC_POINT *r,
                                        const BIGNUM *n, size_t num,
                                        const EC_POINT *p[], const BIGNUM *m[],
                                        BN_CTX *ctx);
# 874 "include/openssl/ec.h"
int EC_POINT_mul(const EC_GROUP *group, EC_POINT *r, const BIGNUM *n,
                 const EC_POINT *q, const BIGNUM *m, BN_CTX *ctx);







extern int EC_GROUP_precompute_mult(EC_GROUP *group, BN_CTX *ctx);





extern int EC_GROUP_have_precompute_mult(const EC_GROUP *group);






extern const ASN1_ITEM * ECPKPARAMETERS_it(void);
extern ECPKPARAMETERS *ECPKPARAMETERS_new(void); extern void ECPKPARAMETERS_free(ECPKPARAMETERS *a);
extern const ASN1_ITEM * ECPARAMETERS_it(void);
extern ECPARAMETERS *ECPARAMETERS_new(void); extern void ECPARAMETERS_free(ECPARAMETERS *a);





int EC_GROUP_get_basis_type(const EC_GROUP *);

int EC_GROUP_get_trinomial_basis(const EC_GROUP *, unsigned int *k);
int EC_GROUP_get_pentanomial_basis(const EC_GROUP *, unsigned int *k1,
                                   unsigned int *k2, unsigned int *k3);


EC_GROUP *d2i_ECPKParameters(EC_GROUP **, const unsigned char **in, long len);
int i2d_ECPKParameters(const EC_GROUP *, unsigned char **out);
# 926 "include/openssl/ec.h"
extern int ECPKParameters_print(BIO *bp, const EC_GROUP *x,
                                               int off);

extern int ECPKParameters_print_fp(FILE *fp, const EC_GROUP *x,
                                                  int off);
# 961 "include/openssl/ec.h"
extern EC_KEY *EC_KEY_new_ex(OSSL_LIB_CTX *ctx, const char *propq);






extern EC_KEY *EC_KEY_new(void);

extern int EC_KEY_get_flags(const EC_KEY *key);

extern void EC_KEY_set_flags(EC_KEY *key, int flags);

extern void EC_KEY_clear_flags(EC_KEY *key, int flags);

extern int EC_KEY_decoded_from_explicit_params(const EC_KEY *key);
# 987 "include/openssl/ec.h"
extern EC_KEY *EC_KEY_new_by_curve_name_ex(OSSL_LIB_CTX *ctx,
                                                          const char *propq,
                                                          int nid);
# 998 "include/openssl/ec.h"
extern EC_KEY *EC_KEY_new_by_curve_name(int nid);




extern void EC_KEY_free(EC_KEY *key);






extern EC_KEY *EC_KEY_copy(EC_KEY *dst, const EC_KEY *src);





extern EC_KEY *EC_KEY_dup(const EC_KEY *src);





extern int EC_KEY_up_ref(EC_KEY *key);





extern ENGINE *EC_KEY_get0_engine(const EC_KEY *eckey);





extern const EC_GROUP *EC_KEY_get0_group(const EC_KEY *key);







extern int EC_KEY_set_group(EC_KEY *key, const EC_GROUP *group);





extern const BIGNUM *EC_KEY_get0_private_key(const EC_KEY *key);







extern int EC_KEY_set_private_key(EC_KEY *key, const BIGNUM *prv);





extern const EC_POINT *EC_KEY_get0_public_key(const EC_KEY *key);







extern int EC_KEY_set_public_key(EC_KEY *key, const EC_POINT *pub);

extern unsigned EC_KEY_get_enc_flags(const EC_KEY *key);
extern void EC_KEY_set_enc_flags(EC_KEY *eckey, unsigned int flags);
extern point_conversion_form_t EC_KEY_get_conv_form(const EC_KEY *key);
extern void EC_KEY_set_conv_form(EC_KEY *eckey,
                                                point_conversion_form_t cform);






extern int EC_KEY_set_ex_data(EC_KEY *key, int idx, void *arg);
extern void *EC_KEY_get_ex_data(const EC_KEY *key, int idx);


extern void EC_KEY_set_asn1_flag(EC_KEY *eckey, int asn1_flag);







extern int EC_KEY_precompute_mult(EC_KEY *key, BN_CTX *ctx);





extern int EC_KEY_generate_key(EC_KEY *key);





extern int EC_KEY_check_key(const EC_KEY *key);





extern int EC_KEY_can_sign(const EC_KEY *eckey);
# 1122 "include/openssl/ec.h"
extern int EC_KEY_set_public_key_affine_coordinates(EC_KEY *key,
                                                                   BIGNUM *x,
                                                                   BIGNUM *y);
# 1133 "include/openssl/ec.h"
extern size_t EC_KEY_key2buf(const EC_KEY *key,
                                            point_conversion_form_t form,
                                            unsigned char **pbuf, BN_CTX *ctx);
# 1145 "include/openssl/ec.h"
extern int EC_KEY_oct2key(EC_KEY *key, const unsigned char *buf,
                                         size_t len, BN_CTX *ctx);
# 1155 "include/openssl/ec.h"
extern int EC_KEY_oct2priv(EC_KEY *key, const unsigned char *buf,
                                          size_t len);
# 1166 "include/openssl/ec.h"
extern size_t EC_KEY_priv2oct(const EC_KEY *key,
                                             unsigned char *buf, size_t len);






extern size_t EC_KEY_priv2buf(const EC_KEY *eckey,
                                             unsigned char **pbuf);
# 1187 "include/openssl/ec.h"
extern EC_KEY *d2i_ECPrivateKey(EC_KEY **key,
                                               const unsigned char **in,
                                               long len);







extern int i2d_ECPrivateKey(const EC_KEY *key,
                                           unsigned char **out);
# 1211 "include/openssl/ec.h"
extern EC_KEY *d2i_ECParameters(EC_KEY **key,
                                               const unsigned char **in,
                                               long len);







extern int i2d_ECParameters(const EC_KEY *key,
                                           unsigned char **out);
# 1236 "include/openssl/ec.h"
extern EC_KEY *o2i_ECPublicKey(EC_KEY **key,
                                              const unsigned char **in, long len);







extern int i2o_ECPublicKey(const EC_KEY *key, unsigned char **out);






extern int ECParameters_print(BIO *bp, const EC_KEY *key);







extern int EC_KEY_print(BIO *bp, const EC_KEY *key, int off);







extern int ECParameters_print_fp(FILE *fp, const EC_KEY *key);







extern int EC_KEY_print_fp(FILE *fp, const EC_KEY *key, int off);


extern const EC_KEY_METHOD *EC_KEY_OpenSSL(void);
extern const EC_KEY_METHOD *EC_KEY_get_default_method(void);
extern void EC_KEY_set_default_method(const EC_KEY_METHOD *meth);
extern const EC_KEY_METHOD *EC_KEY_get_method(const EC_KEY *key);
extern int EC_KEY_set_method(EC_KEY *key, const EC_KEY_METHOD *meth);
extern EC_KEY *EC_KEY_new_method(ENGINE *engine);






extern int ECDH_KDF_X9_62(unsigned char *out, size_t outlen,
                                         const unsigned char *Z, size_t Zlen,
                                         const unsigned char *sinfo,
                                         size_t sinfolen, const EVP_MD *md);

extern int ECDH_compute_key(void *out, size_t outlen,
                                           const EC_POINT *pub_key,
                                           const EC_KEY *ecdh,
                                           void *(*KDF)(const void *in,
                                                        size_t inlen, void *out,
                                                        size_t *outlen));


typedef struct ECDSA_SIG_st ECDSA_SIG;




ECDSA_SIG *ECDSA_SIG_new(void);




void ECDSA_SIG_free(ECDSA_SIG *sig);
# 1323 "include/openssl/ec.h"
extern ECDSA_SIG *d2i_ECDSA_SIG(ECDSA_SIG **a, const unsigned char **in, long len); extern int i2d_ECDSA_SIG(const ECDSA_SIG *a, unsigned char **out);
# 1338 "include/openssl/ec.h"
void ECDSA_SIG_get0(const ECDSA_SIG *sig, const BIGNUM **pr, const BIGNUM **ps);




const BIGNUM *ECDSA_SIG_get0_r(const ECDSA_SIG *sig);




const BIGNUM *ECDSA_SIG_get0_s(const ECDSA_SIG *sig);






int ECDSA_SIG_set0(ECDSA_SIG *sig, BIGNUM *r, BIGNUM *s);
# 1365 "include/openssl/ec.h"
extern ECDSA_SIG *ECDSA_do_sign(const unsigned char *dgst,
                                               int dgst_len, EC_KEY *eckey);
# 1378 "include/openssl/ec.h"
extern ECDSA_SIG *ECDSA_do_sign_ex(const unsigned char *dgst,
                                                  int dgstlen, const BIGNUM *kinv,
                                                  const BIGNUM *rp, EC_KEY *eckey);
# 1391 "include/openssl/ec.h"
extern int ECDSA_do_verify(const unsigned char *dgst, int dgst_len,
                                          const ECDSA_SIG *sig, EC_KEY *eckey);
# 1401 "include/openssl/ec.h"
extern int ECDSA_sign_setup(EC_KEY *eckey, BN_CTX *ctx,
                                           BIGNUM **kinv, BIGNUM **rp);
# 1414 "include/openssl/ec.h"
extern int ECDSA_sign(int type, const unsigned char *dgst,
                                     int dgstlen, unsigned char *sig,
                                     unsigned int *siglen, EC_KEY *eckey);
# 1431 "include/openssl/ec.h"
extern int ECDSA_sign_ex(int type, const unsigned char *dgst,
                                        int dgstlen, unsigned char *sig,
                                        unsigned int *siglen, const BIGNUM *kinv,
                                        const BIGNUM *rp, EC_KEY *eckey);
# 1447 "include/openssl/ec.h"
extern int ECDSA_verify(int type, const unsigned char *dgst,
                                       int dgstlen, const unsigned char *sig,
                                       int siglen, EC_KEY *eckey);





extern int ECDSA_size(const EC_KEY *eckey);





extern EC_KEY_METHOD *EC_KEY_METHOD_new(const EC_KEY_METHOD *meth);
extern void EC_KEY_METHOD_free(EC_KEY_METHOD *meth);
extern void EC_KEY_METHOD_set_init
                      (EC_KEY_METHOD *meth,
                       int (*init)(EC_KEY *key),
                       void (*finish)(EC_KEY *key),
                       int (*copy)(EC_KEY *dest, const EC_KEY *src),
                       int (*set_group)(EC_KEY *key, const EC_GROUP *grp),
                       int (*set_private)(EC_KEY *key, const BIGNUM *priv_key),
                       int (*set_public)(EC_KEY *key, const EC_POINT *pub_key));

extern void EC_KEY_METHOD_set_keygen(EC_KEY_METHOD *meth,
                                                    int (*keygen)(EC_KEY *key));

extern void EC_KEY_METHOD_set_compute_key
                      (EC_KEY_METHOD *meth,
                       int (*ckey)(unsigned char **psec, size_t *pseclen,
                                   const EC_POINT *pub_key, const EC_KEY *ecdh));

extern void EC_KEY_METHOD_set_sign
                      (EC_KEY_METHOD *meth,
                       int (*sign)(int type, const unsigned char *dgst,
                                   int dlen, unsigned char *sig,
                                   unsigned int *siglen,
                                   const BIGNUM *kinv, const BIGNUM *r,
                                   EC_KEY *eckey),
                       int (*sign_setup)(EC_KEY *eckey, BN_CTX *ctx_in,
                                         BIGNUM **kinvp, BIGNUM **rp),
                       ECDSA_SIG *(*sign_sig)(const unsigned char *dgst,
                                              int dgst_len,
                                              const BIGNUM *in_kinv,
                                              const BIGNUM *in_r,
                                              EC_KEY *eckey));

extern void EC_KEY_METHOD_set_verify
                      (EC_KEY_METHOD *meth,
                       int (*verify)(int type, const unsigned
                                     char *dgst, int dgst_len,
                                     const unsigned char *sigbuf,
                                     int sig_len, EC_KEY *eckey),
                       int (*verify_sig)(const unsigned char *dgst,
                                         int dgst_len, const ECDSA_SIG *sig,
                                         EC_KEY *eckey));

extern void EC_KEY_METHOD_get_init
                      (const EC_KEY_METHOD *meth,
                       int (**pinit)(EC_KEY *key),
                       void (**pfinish)(EC_KEY *key),
                       int (**pcopy)(EC_KEY *dest, const EC_KEY *src),
                       int (**pset_group)(EC_KEY *key, const EC_GROUP *grp),
                       int (**pset_private)(EC_KEY *key, const BIGNUM *priv_key),
                       int (**pset_public)(EC_KEY *key, const EC_POINT *pub_key));

extern void EC_KEY_METHOD_get_keygen
                      (const EC_KEY_METHOD *meth, int (**pkeygen)(EC_KEY *key));

extern void EC_KEY_METHOD_get_compute_key
                      (const EC_KEY_METHOD *meth,
                       int (**pck)(unsigned char **psec,
                       size_t *pseclen,
                       const EC_POINT *pub_key,
                       const EC_KEY *ecdh));

extern void EC_KEY_METHOD_get_sign
                      (const EC_KEY_METHOD *meth,
                       int (**psign)(int type, const unsigned char *dgst,
                                     int dlen, unsigned char *sig,
                                     unsigned int *siglen,
                                     const BIGNUM *kinv, const BIGNUM *r,
                                     EC_KEY *eckey),
                       int (**psign_setup)(EC_KEY *eckey, BN_CTX *ctx_in,
                                           BIGNUM **kinvp, BIGNUM **rp),
                       ECDSA_SIG *(**psign_sig)(const unsigned char *dgst,
                                                int dgst_len,
                                                const BIGNUM *in_kinv,
                                                const BIGNUM *in_r,
                                                EC_KEY *eckey));

extern void EC_KEY_METHOD_get_verify
                      (const EC_KEY_METHOD *meth,
                       int (**pverify)(int type, const unsigned
                                       char *dgst, int dgst_len,
                                       const unsigned char *sigbuf,
                                       int sig_len, EC_KEY *eckey),
                       int (**pverify_sig)(const unsigned char *dgst,
                                           int dgst_len,
                                           const ECDSA_SIG *sig,
                                           EC_KEY *eckey));
# 34 "include/openssl/x509.h" 2


# 1 "include/openssl/rsa.h" 1
# 12 "include/openssl/rsa.h"
        
# 28 "include/openssl/rsa.h"
# 1 "include/openssl/rsaerr.h" 1
# 13 "include/openssl/rsaerr.h"
        
# 29 "include/openssl/rsa.h" 2
# 119 "include/openssl/rsa.h"
int EVP_PKEY_CTX_set_rsa_padding(EVP_PKEY_CTX *ctx, int pad_mode);
int EVP_PKEY_CTX_get_rsa_padding(EVP_PKEY_CTX *ctx, int *pad_mode);

int EVP_PKEY_CTX_set_rsa_pss_saltlen(EVP_PKEY_CTX *ctx, int saltlen);
int EVP_PKEY_CTX_get_rsa_pss_saltlen(EVP_PKEY_CTX *ctx, int *saltlen);

int EVP_PKEY_CTX_set_rsa_keygen_bits(EVP_PKEY_CTX *ctx, int bits);
int EVP_PKEY_CTX_set1_rsa_keygen_pubexp(EVP_PKEY_CTX *ctx, BIGNUM *pubexp);
int EVP_PKEY_CTX_set_rsa_keygen_primes(EVP_PKEY_CTX *ctx, int primes);
int EVP_PKEY_CTX_set_rsa_pss_keygen_saltlen(EVP_PKEY_CTX *ctx, int saltlen);

extern
int EVP_PKEY_CTX_set_rsa_keygen_pubexp(EVP_PKEY_CTX *ctx, BIGNUM *pubexp);
# 143 "include/openssl/rsa.h"
int EVP_PKEY_CTX_set_rsa_mgf1_md(EVP_PKEY_CTX *ctx, const EVP_MD *md);
int EVP_PKEY_CTX_set_rsa_mgf1_md_name(EVP_PKEY_CTX *ctx, const char *mdname,
                                      const char *mdprops);
int EVP_PKEY_CTX_get_rsa_mgf1_md(EVP_PKEY_CTX *ctx, const EVP_MD **md);
int EVP_PKEY_CTX_get_rsa_mgf1_md_name(EVP_PKEY_CTX *ctx, char *name,
                                      size_t namelen);
int EVP_PKEY_CTX_set_rsa_pss_keygen_mgf1_md(EVP_PKEY_CTX *ctx, const EVP_MD *md);
int EVP_PKEY_CTX_set_rsa_pss_keygen_mgf1_md_name(EVP_PKEY_CTX *ctx,
                                                 const char *mdname);

int EVP_PKEY_CTX_set_rsa_pss_keygen_md(EVP_PKEY_CTX *ctx, const EVP_MD *md);
int EVP_PKEY_CTX_set_rsa_pss_keygen_md_name(EVP_PKEY_CTX *ctx,
                                            const char *mdname,
                                            const char *mdprops);

int EVP_PKEY_CTX_set_rsa_oaep_md(EVP_PKEY_CTX *ctx, const EVP_MD *md);
int EVP_PKEY_CTX_set_rsa_oaep_md_name(EVP_PKEY_CTX *ctx, const char *mdname,
                                      const char *mdprops);
int EVP_PKEY_CTX_get_rsa_oaep_md(EVP_PKEY_CTX *ctx, const EVP_MD **md);
int EVP_PKEY_CTX_get_rsa_oaep_md_name(EVP_PKEY_CTX *ctx, char *name,
                                      size_t namelen);
int EVP_PKEY_CTX_set0_rsa_oaep_label(EVP_PKEY_CTX *ctx, void *label, int llen);
int EVP_PKEY_CTX_get0_rsa_oaep_label(EVP_PKEY_CTX *ctx, unsigned char **label);
# 201 "include/openssl/rsa.h"
extern RSA *RSA_new(void);
extern RSA *RSA_new_method(ENGINE *engine);
extern int RSA_bits(const RSA *rsa);
extern int RSA_size(const RSA *rsa);
extern int RSA_security_bits(const RSA *rsa);

extern int RSA_set0_key(RSA *r, BIGNUM *n, BIGNUM *e, BIGNUM *d);
extern int RSA_set0_factors(RSA *r, BIGNUM *p, BIGNUM *q);
extern int RSA_set0_crt_params(RSA *r,
                                              BIGNUM *dmp1, BIGNUM *dmq1,
                                              BIGNUM *iqmp);
extern int RSA_set0_multi_prime_params(RSA *r,
                                                      BIGNUM *primes[],
                                                      BIGNUM *exps[],
                                                      BIGNUM *coeffs[],
                                                      int pnum);
extern void RSA_get0_key(const RSA *r,
                                        const BIGNUM **n, const BIGNUM **e,
                                        const BIGNUM **d);
extern void RSA_get0_factors(const RSA *r,
                                            const BIGNUM **p, const BIGNUM **q);
extern int RSA_get_multi_prime_extra_count(const RSA *r);
extern int RSA_get0_multi_prime_factors(const RSA *r,
                                                       const BIGNUM *primes[]);
extern void RSA_get0_crt_params(const RSA *r,
                                               const BIGNUM **dmp1,
                                               const BIGNUM **dmq1,
                                               const BIGNUM **iqmp);
extern
int RSA_get0_multi_prime_crt_params(const RSA *r, const BIGNUM *exps[],
                                    const BIGNUM *coeffs[]);
extern const BIGNUM *RSA_get0_n(const RSA *d);
extern const BIGNUM *RSA_get0_e(const RSA *d);
extern const BIGNUM *RSA_get0_d(const RSA *d);
extern const BIGNUM *RSA_get0_p(const RSA *d);
extern const BIGNUM *RSA_get0_q(const RSA *d);
extern const BIGNUM *RSA_get0_dmp1(const RSA *r);
extern const BIGNUM *RSA_get0_dmq1(const RSA *r);
extern const BIGNUM *RSA_get0_iqmp(const RSA *r);
extern const RSA_PSS_PARAMS *RSA_get0_pss_params(const RSA *r);
extern void RSA_clear_flags(RSA *r, int flags);
extern int RSA_test_flags(const RSA *r, int flags);
extern void RSA_set_flags(RSA *r, int flags);
extern int RSA_get_version(RSA *r);
extern ENGINE *RSA_get0_engine(const RSA *r);







extern RSA *RSA_generate_key(int bits, unsigned long e, void
                                              (*callback) (int, int, void *),
                                              void *cb_arg);




extern int RSA_generate_key_ex(RSA *rsa, int bits, BIGNUM *e,
                                              BN_GENCB *cb);

extern int RSA_generate_multi_prime_key(RSA *rsa, int bits,
                                                       int primes, BIGNUM *e,
                                                       BN_GENCB *cb);

extern
int RSA_X931_derive_ex(RSA *rsa, BIGNUM *p1, BIGNUM *p2,
                       BIGNUM *q1, BIGNUM *q2,
                       const BIGNUM *Xp1, const BIGNUM *Xp2,
                       const BIGNUM *Xp, const BIGNUM *Xq1,
                       const BIGNUM *Xq2, const BIGNUM *Xq,
                       const BIGNUM *e, BN_GENCB *cb);
extern int RSA_X931_generate_key_ex(RSA *rsa, int bits,
                                                   const BIGNUM *e,
                                                   BN_GENCB *cb);

extern int RSA_check_key(const RSA *);
extern int RSA_check_key_ex(const RSA *, BN_GENCB *cb);

extern
int RSA_public_encrypt(int flen, const unsigned char *from, unsigned char *to,
                       RSA *rsa, int padding);
extern
int RSA_private_encrypt(int flen, const unsigned char *from, unsigned char *to,
                        RSA *rsa, int padding);
extern
int RSA_public_decrypt(int flen, const unsigned char *from, unsigned char *to,
                       RSA *rsa, int padding);
extern
int RSA_private_decrypt(int flen, const unsigned char *from, unsigned char *to,
                        RSA *rsa, int padding);
extern void RSA_free(RSA *r);

extern int RSA_up_ref(RSA *r);
extern int RSA_flags(const RSA *r);

extern void RSA_set_default_method(const RSA_METHOD *meth);
extern const RSA_METHOD *RSA_get_default_method(void);
extern const RSA_METHOD *RSA_null_method(void);
extern const RSA_METHOD *RSA_get_method(const RSA *rsa);
extern int RSA_set_method(RSA *rsa, const RSA_METHOD *meth);


extern const RSA_METHOD *RSA_PKCS1_OpenSSL(void);

extern RSA *d2i_RSAPublicKey(RSA **a, const unsigned char **in, long len); extern int i2d_RSAPublicKey(const RSA *a, unsigned char **out); extern const ASN1_ITEM * RSAPublicKey_it(void);

extern RSA *d2i_RSAPrivateKey(RSA **a, const unsigned char **in, long len); extern int i2d_RSAPrivateKey(const RSA *a, unsigned char **out); extern const ASN1_ITEM * RSAPrivateKey_it(void);



int RSA_pkey_ctx_ctrl(EVP_PKEY_CTX *ctx, int optype, int cmd, int p1, void *p2);

struct rsa_pss_params_st {
    X509_ALGOR *hashAlgorithm;
    X509_ALGOR *maskGenAlgorithm;
    ASN1_INTEGER *saltLength;
    ASN1_INTEGER *trailerField;

    X509_ALGOR *maskHash;
};

extern RSA_PSS_PARAMS *RSA_PSS_PARAMS_new(void); extern void RSA_PSS_PARAMS_free(RSA_PSS_PARAMS *a); extern RSA_PSS_PARAMS *d2i_RSA_PSS_PARAMS(RSA_PSS_PARAMS **a, const unsigned char **in, long len); extern int i2d_RSA_PSS_PARAMS(const RSA_PSS_PARAMS *a, unsigned char **out); extern const ASN1_ITEM * RSA_PSS_PARAMS_it(void);
extern RSA_PSS_PARAMS *RSA_PSS_PARAMS_dup(const RSA_PSS_PARAMS *a);

typedef struct rsa_oaep_params_st {
    X509_ALGOR *hashFunc;
    X509_ALGOR *maskGenFunc;
    X509_ALGOR *pSourceFunc;

    X509_ALGOR *maskHash;
} RSA_OAEP_PARAMS;

extern RSA_OAEP_PARAMS *RSA_OAEP_PARAMS_new(void); extern void RSA_OAEP_PARAMS_free(RSA_OAEP_PARAMS *a); extern RSA_OAEP_PARAMS *d2i_RSA_OAEP_PARAMS(RSA_OAEP_PARAMS **a, const unsigned char **in, long len); extern int i2d_RSA_OAEP_PARAMS(const RSA_OAEP_PARAMS *a, unsigned char **out); extern const ASN1_ITEM * RSA_OAEP_PARAMS_it(void);



extern int RSA_print_fp(FILE *fp, const RSA *r, int offset);


extern int RSA_print(BIO *bp, const RSA *r, int offset);





extern int RSA_sign(int type, const unsigned char *m,
                                   unsigned int m_length, unsigned char *sigret,
                                   unsigned int *siglen, RSA *rsa);
extern int RSA_verify(int type, const unsigned char *m,
                                     unsigned int m_length,
                                     const unsigned char *sigbuf,
                                     unsigned int siglen, RSA *rsa);





extern
int RSA_sign_ASN1_OCTET_STRING(int type,
                               const unsigned char *m, unsigned int m_length,
                               unsigned char *sigret, unsigned int *siglen,
                               RSA *rsa);
extern
int RSA_verify_ASN1_OCTET_STRING(int type,
                                 const unsigned char *m, unsigned int m_length,
                                 unsigned char *sigbuf, unsigned int siglen,
                                 RSA *rsa);

extern int RSA_blinding_on(RSA *rsa, BN_CTX *ctx);
extern void RSA_blinding_off(RSA *rsa);
extern BN_BLINDING *RSA_setup_blinding(RSA *rsa, BN_CTX *ctx);

extern
int RSA_padding_add_PKCS1_type_1(unsigned char *to, int tlen,
                                 const unsigned char *f, int fl);
extern
int RSA_padding_check_PKCS1_type_1(unsigned char *to, int tlen,
                                   const unsigned char *f, int fl,
                                   int rsa_len);
extern
int RSA_padding_add_PKCS1_type_2(unsigned char *to, int tlen,
                                 const unsigned char *f, int fl);
extern
int RSA_padding_check_PKCS1_type_2(unsigned char *to, int tlen,
                                   const unsigned char *f, int fl,
                                   int rsa_len);
extern int PKCS1_MGF1(unsigned char *mask, long len,
                                     const unsigned char *seed, long seedlen,
                                     const EVP_MD *dgst);
extern
int RSA_padding_add_PKCS1_OAEP(unsigned char *to, int tlen,
                               const unsigned char *f, int fl,
                               const unsigned char *p, int pl);
extern
int RSA_padding_check_PKCS1_OAEP(unsigned char *to, int tlen,
                                 const unsigned char *f, int fl, int rsa_len,
                                 const unsigned char *p, int pl);
extern
int RSA_padding_add_PKCS1_OAEP_mgf1(unsigned char *to, int tlen,
                                    const unsigned char *from, int flen,
                                    const unsigned char *param, int plen,
                                    const EVP_MD *md, const EVP_MD *mgf1md);
extern
int RSA_padding_check_PKCS1_OAEP_mgf1(unsigned char *to, int tlen,
                                      const unsigned char *from, int flen,
                                      int num,
                                      const unsigned char *param, int plen,
                                      const EVP_MD *md, const EVP_MD *mgf1md);
extern int RSA_padding_add_none(unsigned char *to, int tlen,
                                               const unsigned char *f, int fl);
extern int RSA_padding_check_none(unsigned char *to, int tlen,
                                                 const unsigned char *f, int fl,
                                                 int rsa_len);
extern int RSA_padding_add_X931(unsigned char *to, int tlen,
                                               const unsigned char *f, int fl);
extern int RSA_padding_check_X931(unsigned char *to, int tlen,
                                                 const unsigned char *f, int fl,
                                                 int rsa_len);
extern int RSA_X931_hash_id(int nid);

extern
int RSA_verify_PKCS1_PSS(RSA *rsa, const unsigned char *mHash,
                         const EVP_MD *Hash, const unsigned char *EM,
                         int sLen);
extern
int RSA_padding_add_PKCS1_PSS(RSA *rsa, unsigned char *EM,
                              const unsigned char *mHash, const EVP_MD *Hash,
                              int sLen);

extern
int RSA_verify_PKCS1_PSS_mgf1(RSA *rsa, const unsigned char *mHash,
                              const EVP_MD *Hash, const EVP_MD *mgf1Hash,
                              const unsigned char *EM, int sLen);

extern
int RSA_padding_add_PKCS1_PSS_mgf1(RSA *rsa, unsigned char *EM,
                                   const unsigned char *mHash,
                                   const EVP_MD *Hash, const EVP_MD *mgf1Hash,
                                   int sLen);



extern int RSA_set_ex_data(RSA *r, int idx, void *arg);
extern void *RSA_get_ex_data(const RSA *r, int idx);

extern RSA *RSAPublicKey_dup(const RSA *a);
extern RSA *RSAPrivateKey_dup(const RSA *a);
# 473 "include/openssl/rsa.h"
extern RSA_METHOD *RSA_meth_new(const char *name, int flags);
extern void RSA_meth_free(RSA_METHOD *meth);
extern RSA_METHOD *RSA_meth_dup(const RSA_METHOD *meth);
extern const char *RSA_meth_get0_name(const RSA_METHOD *meth);
extern int RSA_meth_set1_name(RSA_METHOD *meth,
                                             const char *name);
extern int RSA_meth_get_flags(const RSA_METHOD *meth);
extern int RSA_meth_set_flags(RSA_METHOD *meth, int flags);
extern void *RSA_meth_get0_app_data(const RSA_METHOD *meth);
extern int RSA_meth_set0_app_data(RSA_METHOD *meth,
                                                 void *app_data);
extern
int (*RSA_meth_get_pub_enc(const RSA_METHOD *meth)) (int flen,
                                                     const unsigned char *from,
                                                     unsigned char *to,
                                                     RSA *rsa, int padding);
extern
int RSA_meth_set_pub_enc(RSA_METHOD *rsa,
                         int (*pub_enc) (int flen, const unsigned char *from,
                                         unsigned char *to, RSA *rsa,
                                         int padding));
extern
int (*RSA_meth_get_pub_dec(const RSA_METHOD *meth)) (int flen,
                                                     const unsigned char *from,
                                                     unsigned char *to,
                                                     RSA *rsa, int padding);
extern
int RSA_meth_set_pub_dec(RSA_METHOD *rsa,
                         int (*pub_dec) (int flen, const unsigned char *from,
                                         unsigned char *to, RSA *rsa,
                                         int padding));
extern
int (*RSA_meth_get_priv_enc(const RSA_METHOD *meth)) (int flen,
                                                      const unsigned char *from,
                                                      unsigned char *to,
                                                      RSA *rsa, int padding);
extern
int RSA_meth_set_priv_enc(RSA_METHOD *rsa,
                          int (*priv_enc) (int flen, const unsigned char *from,
                                           unsigned char *to, RSA *rsa,
                                           int padding));
extern
int (*RSA_meth_get_priv_dec(const RSA_METHOD *meth)) (int flen,
                                                      const unsigned char *from,
                                                      unsigned char *to,
                                                      RSA *rsa, int padding);
extern
int RSA_meth_set_priv_dec(RSA_METHOD *rsa,
                          int (*priv_dec) (int flen, const unsigned char *from,
                                           unsigned char *to, RSA *rsa,
                                           int padding));
extern
int (*RSA_meth_get_mod_exp(const RSA_METHOD *meth)) (BIGNUM *r0,
                                                     const BIGNUM *i,
                                                     RSA *rsa, BN_CTX *ctx);
extern
int RSA_meth_set_mod_exp(RSA_METHOD *rsa,
                         int (*mod_exp) (BIGNUM *r0, const BIGNUM *i, RSA *rsa,
                                         BN_CTX *ctx));
extern
int (*RSA_meth_get_bn_mod_exp(const RSA_METHOD *meth)) (BIGNUM *r,
                                                        const BIGNUM *a,
                                                        const BIGNUM *p,
                                                        const BIGNUM *m,
                                                        BN_CTX *ctx,
                                                        BN_MONT_CTX *m_ctx);
extern
int RSA_meth_set_bn_mod_exp(RSA_METHOD *rsa,
                            int (*bn_mod_exp) (BIGNUM *r,
                                               const BIGNUM *a,
                                               const BIGNUM *p,
                                               const BIGNUM *m,
                                               BN_CTX *ctx,
                                               BN_MONT_CTX *m_ctx));
extern
int (*RSA_meth_get_init(const RSA_METHOD *meth)) (RSA *rsa);
extern
int RSA_meth_set_init(RSA_METHOD *rsa, int (*init) (RSA *rsa));
extern
int (*RSA_meth_get_finish(const RSA_METHOD *meth)) (RSA *rsa);
extern
int RSA_meth_set_finish(RSA_METHOD *rsa, int (*finish) (RSA *rsa));
extern
int (*RSA_meth_get_sign(const RSA_METHOD *meth)) (int type,
                                                  const unsigned char *m,
                                                  unsigned int m_length,
                                                  unsigned char *sigret,
                                                  unsigned int *siglen,
                                                  const RSA *rsa);
extern
int RSA_meth_set_sign(RSA_METHOD *rsa,
                      int (*sign) (int type, const unsigned char *m,
                                   unsigned int m_length,
                                   unsigned char *sigret, unsigned int *siglen,
                                   const RSA *rsa));
extern
int (*RSA_meth_get_verify(const RSA_METHOD *meth)) (int dtype,
                                                    const unsigned char *m,
                                                    unsigned int m_length,
                                                    const unsigned char *sigbuf,
                                                    unsigned int siglen,
                                                    const RSA *rsa);
extern
int RSA_meth_set_verify(RSA_METHOD *rsa,
                        int (*verify) (int dtype, const unsigned char *m,
                                       unsigned int m_length,
                                       const unsigned char *sigbuf,
                                       unsigned int siglen, const RSA *rsa));
extern
int (*RSA_meth_get_keygen(const RSA_METHOD *meth)) (RSA *rsa, int bits,
                                                    BIGNUM *e, BN_GENCB *cb);
extern
int RSA_meth_set_keygen(RSA_METHOD *rsa,
                        int (*keygen) (RSA *rsa, int bits, BIGNUM *e,
                                       BN_GENCB *cb));
extern
int (*RSA_meth_get_multi_prime_keygen(const RSA_METHOD *meth)) (RSA *rsa,
                                                                int bits,
                                                                int primes,
                                                                BIGNUM *e,
                                                                BN_GENCB *cb);
extern
int RSA_meth_set_multi_prime_keygen(RSA_METHOD *meth,
                                    int (*keygen) (RSA *rsa, int bits,
                                                   int primes, BIGNUM *e,
                                                   BN_GENCB *cb));
# 37 "include/openssl/x509.h" 2
# 1 "include/openssl/dsa.h" 1
# 12 "include/openssl/dsa.h"
        
# 28 "include/openssl/dsa.h"
int EVP_PKEY_CTX_set_dsa_paramgen_bits(EVP_PKEY_CTX *ctx, int nbits);
int EVP_PKEY_CTX_set_dsa_paramgen_q_bits(EVP_PKEY_CTX *ctx, int qbits);
int EVP_PKEY_CTX_set_dsa_paramgen_md_props(EVP_PKEY_CTX *ctx,
                                           const char *md_name,
                                           const char *md_properties);
int EVP_PKEY_CTX_set_dsa_paramgen_gindex(EVP_PKEY_CTX *ctx, int gindex);
int EVP_PKEY_CTX_set_dsa_paramgen_type(EVP_PKEY_CTX *ctx, const char *name);
int EVP_PKEY_CTX_set_dsa_paramgen_seed(EVP_PKEY_CTX *ctx,
                                       const unsigned char *seed,
                                       size_t seedlen);
int EVP_PKEY_CTX_set_dsa_paramgen_md(EVP_PKEY_CTX *ctx, const EVP_MD *md);
# 51 "include/openssl/dsa.h"
# 1 "include/openssl/dh.h" 1
# 12 "include/openssl/dh.h"
        
# 34 "include/openssl/dh.h"
int EVP_PKEY_CTX_set_dh_paramgen_type(EVP_PKEY_CTX *ctx, int typ);
int EVP_PKEY_CTX_set_dh_paramgen_gindex(EVP_PKEY_CTX *ctx, int gindex);
int EVP_PKEY_CTX_set_dh_paramgen_seed(EVP_PKEY_CTX *ctx,
                                      const unsigned char *seed,
                                      size_t seedlen);
int EVP_PKEY_CTX_set_dh_paramgen_prime_len(EVP_PKEY_CTX *ctx, int pbits);
int EVP_PKEY_CTX_set_dh_paramgen_subprime_len(EVP_PKEY_CTX *ctx, int qlen);
int EVP_PKEY_CTX_set_dh_paramgen_generator(EVP_PKEY_CTX *ctx, int gen);
int EVP_PKEY_CTX_set_dh_nid(EVP_PKEY_CTX *ctx, int nid);
int EVP_PKEY_CTX_set_dh_rfc5114(EVP_PKEY_CTX *ctx, int gen);
int EVP_PKEY_CTX_set_dhx_rfc5114(EVP_PKEY_CTX *ctx, int gen);
int EVP_PKEY_CTX_set_dh_pad(EVP_PKEY_CTX *ctx, int pad);

int EVP_PKEY_CTX_set_dh_kdf_type(EVP_PKEY_CTX *ctx, int kdf);
int EVP_PKEY_CTX_get_dh_kdf_type(EVP_PKEY_CTX *ctx);
int EVP_PKEY_CTX_set0_dh_kdf_oid(EVP_PKEY_CTX *ctx, ASN1_OBJECT *oid);
int EVP_PKEY_CTX_get0_dh_kdf_oid(EVP_PKEY_CTX *ctx, ASN1_OBJECT **oid);
int EVP_PKEY_CTX_set_dh_kdf_md(EVP_PKEY_CTX *ctx, const EVP_MD *md);
int EVP_PKEY_CTX_get_dh_kdf_md(EVP_PKEY_CTX *ctx, const EVP_MD **md);
int EVP_PKEY_CTX_set_dh_kdf_outlen(EVP_PKEY_CTX *ctx, int len);
int EVP_PKEY_CTX_get_dh_kdf_outlen(EVP_PKEY_CTX *ctx, int *len);
int EVP_PKEY_CTX_set0_dh_kdf_ukm(EVP_PKEY_CTX *ctx, unsigned char *ukm, int len);

extern
int EVP_PKEY_CTX_get0_dh_kdf_ukm(EVP_PKEY_CTX *ctx, unsigned char **ukm);
# 89 "include/openssl/dh.h"
# 1 "include/openssl/dherr.h" 1
# 13 "include/openssl/dherr.h"
        
# 90 "include/openssl/dh.h" 2
# 133 "include/openssl/dh.h"
extern const ASN1_ITEM * DHparams_it(void);
# 190 "include/openssl/dh.h"
extern DH *DHparams_dup(const DH *a);

extern const DH_METHOD *DH_OpenSSL(void);

extern void DH_set_default_method(const DH_METHOD *meth);
extern const DH_METHOD *DH_get_default_method(void);
extern int DH_set_method(DH *dh, const DH_METHOD *meth);
extern DH *DH_new_method(ENGINE *engine);

extern DH *DH_new(void);
extern void DH_free(DH *dh);
extern int DH_up_ref(DH *dh);
extern int DH_bits(const DH *dh);
extern int DH_size(const DH *dh);
extern int DH_security_bits(const DH *dh);




extern int DH_set_ex_data(DH *d, int idx, void *arg);
extern void *DH_get_ex_data(const DH *d, int idx);

extern int DH_generate_parameters_ex(DH *dh, int prime_len,
                                                    int generator,
                                                    BN_GENCB *cb);

extern int DH_check_params_ex(const DH *dh);
extern int DH_check_ex(const DH *dh);
extern int DH_check_pub_key_ex(const DH *dh, const BIGNUM *pub_key);
extern int DH_check_params(const DH *dh, int *ret);
extern int DH_check(const DH *dh, int *codes);
extern int DH_check_pub_key(const DH *dh, const BIGNUM *pub_key,
                                           int *codes);
extern int DH_generate_key(DH *dh);
extern int DH_compute_key(unsigned char *key,
                                         const BIGNUM *pub_key, DH *dh);
extern int DH_compute_key_padded(unsigned char *key,
                                                const BIGNUM *pub_key, DH *dh);

extern DH *d2i_DHparams(DH **a, const unsigned char **in, long len); extern int i2d_DHparams(const DH *a, unsigned char **out);
extern DH *d2i_DHxparams(DH **a, const unsigned char **in, long len); extern int i2d_DHxparams(const DH *a, unsigned char **out);


extern int DHparams_print_fp(FILE *fp, const DH *x);

extern int DHparams_print(BIO *bp, const DH *x);


extern DH *DH_get_1024_160(void);
extern DH *DH_get_2048_224(void);
extern DH *DH_get_2048_256(void);


extern DH *DH_new_by_nid(int nid);
extern int DH_get_nid(const DH *dh);


extern int DH_KDF_X9_42(unsigned char *out, size_t outlen,
                                       const unsigned char *Z, size_t Zlen,
                                       ASN1_OBJECT *key_oid,
                                       const unsigned char *ukm,
                                       size_t ukmlen, const EVP_MD *md);

extern void DH_get0_pqg(const DH *dh, const BIGNUM **p,
                                       const BIGNUM **q, const BIGNUM **g);
extern int DH_set0_pqg(DH *dh, BIGNUM *p, BIGNUM *q, BIGNUM *g);
extern void DH_get0_key(const DH *dh, const BIGNUM **pub_key,
                                       const BIGNUM **priv_key);
extern int DH_set0_key(DH *dh, BIGNUM *pub_key, BIGNUM *priv_key);
extern const BIGNUM *DH_get0_p(const DH *dh);
extern const BIGNUM *DH_get0_q(const DH *dh);
extern const BIGNUM *DH_get0_g(const DH *dh);
extern const BIGNUM *DH_get0_priv_key(const DH *dh);
extern const BIGNUM *DH_get0_pub_key(const DH *dh);
extern void DH_clear_flags(DH *dh, int flags);
extern int DH_test_flags(const DH *dh, int flags);
extern void DH_set_flags(DH *dh, int flags);
extern ENGINE *DH_get0_engine(DH *d);
extern long DH_get_length(const DH *dh);
extern int DH_set_length(DH *dh, long length);

extern DH_METHOD *DH_meth_new(const char *name, int flags);
extern void DH_meth_free(DH_METHOD *dhm);
extern DH_METHOD *DH_meth_dup(const DH_METHOD *dhm);
extern const char *DH_meth_get0_name(const DH_METHOD *dhm);
extern int DH_meth_set1_name(DH_METHOD *dhm, const char *name);
extern int DH_meth_get_flags(const DH_METHOD *dhm);
extern int DH_meth_set_flags(DH_METHOD *dhm, int flags);
extern void *DH_meth_get0_app_data(const DH_METHOD *dhm);
extern int DH_meth_set0_app_data(DH_METHOD *dhm, void *app_data);
extern int (*DH_meth_get_generate_key(const DH_METHOD *dhm)) (DH *);
extern int DH_meth_set_generate_key(DH_METHOD *dhm,
                                                   int (*generate_key) (DH *));
extern int (*DH_meth_get_compute_key(const DH_METHOD *dhm))
                                                   (unsigned char *key,
                                                    const BIGNUM *pub_key,
                                                    DH *dh);
extern int DH_meth_set_compute_key(DH_METHOD *dhm,
                                                  int (*compute_key)
                                                  (unsigned char *key,
                                                   const BIGNUM *pub_key,
                                                   DH *dh));
extern int (*DH_meth_get_bn_mod_exp(const DH_METHOD *dhm))
                                                   (const DH *, BIGNUM *,
                                                    const BIGNUM *,
                                                    const BIGNUM *,
                                                    const BIGNUM *, BN_CTX *,
                                                    BN_MONT_CTX *);
extern int DH_meth_set_bn_mod_exp(DH_METHOD *dhm,
                                                 int (*bn_mod_exp)
                                                 (const DH *, BIGNUM *,
                                                  const BIGNUM *, const BIGNUM *,
                                                  const BIGNUM *, BN_CTX *,
                                                  BN_MONT_CTX *));
extern int (*DH_meth_get_init(const DH_METHOD *dhm))(DH *);
extern int DH_meth_set_init(DH_METHOD *dhm, int (*init)(DH *));
extern int (*DH_meth_get_finish(const DH_METHOD *dhm)) (DH *);
extern int DH_meth_set_finish(DH_METHOD *dhm, int (*finish) (DH *));
extern int (*DH_meth_get_generate_params(const DH_METHOD *dhm))
                                                        (DH *, int, int,
                                                         BN_GENCB *);
extern int DH_meth_set_generate_params(DH_METHOD *dhm,
                                                      int (*generate_params)
                                                      (DH *, int, int,
                                                       BN_GENCB *));



extern DH *DH_generate_parameters(int prime_len, int generator,
                                                   void (*callback) (int, int,
                                                                void *),
                                                   void *cb_arg);
# 52 "include/openssl/dsa.h" 2

# 1 "include/openssl/dsaerr.h" 1
# 13 "include/openssl/dsaerr.h"
        
# 54 "include/openssl/dsa.h" 2







typedef struct DSA_SIG_st DSA_SIG;
DSA_SIG *DSA_SIG_new(void);
void DSA_SIG_free(DSA_SIG *a);
extern DSA_SIG *d2i_DSA_SIG(DSA_SIG **a, const unsigned char **in, long len); extern int i2d_DSA_SIG(const DSA_SIG *a, unsigned char **out);
void DSA_SIG_get0(const DSA_SIG *sig, const BIGNUM **pr, const BIGNUM **ps);
int DSA_SIG_set0(DSA_SIG *sig, BIGNUM *r, BIGNUM *s);
# 112 "include/openssl/dsa.h"
extern DSA *DSAparams_dup(const DSA *a);
extern DSA_SIG *DSA_do_sign(const unsigned char *dgst, int dlen,
                                           DSA *dsa);
extern int DSA_do_verify(const unsigned char *dgst, int dgst_len,
                                        DSA_SIG *sig, DSA *dsa);

extern const DSA_METHOD *DSA_OpenSSL(void);

extern void DSA_set_default_method(const DSA_METHOD *);
extern const DSA_METHOD *DSA_get_default_method(void);
extern int DSA_set_method(DSA *dsa, const DSA_METHOD *);
extern const DSA_METHOD *DSA_get_method(DSA *d);

extern DSA *DSA_new(void);
extern DSA *DSA_new_method(ENGINE *engine);
extern void DSA_free(DSA *r);

extern int DSA_up_ref(DSA *r);
extern int DSA_size(const DSA *);
extern int DSA_bits(const DSA *d);
extern int DSA_security_bits(const DSA *d);

extern int DSA_sign_setup(DSA *dsa, BN_CTX *ctx_in,
                                         BIGNUM **kinvp, BIGNUM **rp);
extern int DSA_sign(int type, const unsigned char *dgst,
                                   int dlen, unsigned char *sig,
                                   unsigned int *siglen, DSA *dsa);
extern int DSA_verify(int type, const unsigned char *dgst,
                                     int dgst_len, const unsigned char *sigbuf,
                                     int siglen, DSA *dsa);



extern int DSA_set_ex_data(DSA *d, int idx, void *arg);
extern void *DSA_get_ex_data(const DSA *d, int idx);

extern DSA *d2i_DSAPublicKey(DSA **a, const unsigned char **in, long len); extern int i2d_DSAPublicKey(const DSA *a, unsigned char **out);

extern DSA *d2i_DSAPrivateKey(DSA **a, const unsigned char **in, long len); extern int i2d_DSAPrivateKey(const DSA *a, unsigned char **out);

extern DSA *d2i_DSAparams(DSA **a, const unsigned char **in, long len); extern int i2d_DSAparams(const DSA *a, unsigned char **out);





extern
DSA *DSA_generate_parameters(int bits, unsigned char *seed, int seed_len,
                             int *counter_ret, unsigned long *h_ret,
                             void (*callback) (int, int, void *),
                             void *cb_arg);




extern int DSA_generate_parameters_ex(DSA *dsa, int bits,
                                                     const unsigned char *seed,
                                                     int seed_len,
                                                     int *counter_ret,
                                                     unsigned long *h_ret,
                                                     BN_GENCB *cb);

extern int DSA_generate_key(DSA *a);

extern int DSAparams_print(BIO *bp, const DSA *x);
extern int DSA_print(BIO *bp, const DSA *x, int off);

extern int DSAparams_print_fp(FILE *fp, const DSA *x);
extern int DSA_print_fp(FILE *bp, const DSA *x, int off);
# 198 "include/openssl/dsa.h"
extern DH *DSA_dup_DH(const DSA *r);


extern void DSA_get0_pqg(const DSA *d, const BIGNUM **p,
                                        const BIGNUM **q, const BIGNUM **g);
extern int DSA_set0_pqg(DSA *d, BIGNUM *p, BIGNUM *q, BIGNUM *g);
extern void DSA_get0_key(const DSA *d, const BIGNUM **pub_key,
                                        const BIGNUM **priv_key);
extern int DSA_set0_key(DSA *d, BIGNUM *pub_key,
                                       BIGNUM *priv_key);
extern const BIGNUM *DSA_get0_p(const DSA *d);
extern const BIGNUM *DSA_get0_q(const DSA *d);
extern const BIGNUM *DSA_get0_g(const DSA *d);
extern const BIGNUM *DSA_get0_pub_key(const DSA *d);
extern const BIGNUM *DSA_get0_priv_key(const DSA *d);
extern void DSA_clear_flags(DSA *d, int flags);
extern int DSA_test_flags(const DSA *d, int flags);
extern void DSA_set_flags(DSA *d, int flags);
extern ENGINE *DSA_get0_engine(DSA *d);

extern DSA_METHOD *DSA_meth_new(const char *name, int flags);
extern void DSA_meth_free(DSA_METHOD *dsam);
extern DSA_METHOD *DSA_meth_dup(const DSA_METHOD *dsam);
extern const char *DSA_meth_get0_name(const DSA_METHOD *dsam);
extern int DSA_meth_set1_name(DSA_METHOD *dsam,
                                             const char *name);
extern int DSA_meth_get_flags(const DSA_METHOD *dsam);
extern int DSA_meth_set_flags(DSA_METHOD *dsam, int flags);
extern void *DSA_meth_get0_app_data(const DSA_METHOD *dsam);
extern int DSA_meth_set0_app_data(DSA_METHOD *dsam,
                                                 void *app_data);
extern DSA_SIG *(*DSA_meth_get_sign(const DSA_METHOD *dsam))
        (const unsigned char *, int, DSA *);
extern int DSA_meth_set_sign(DSA_METHOD *dsam,
                       DSA_SIG *(*sign) (const unsigned char *, int, DSA *));
extern int (*DSA_meth_get_sign_setup(const DSA_METHOD *dsam))
        (DSA *, BN_CTX *, BIGNUM **, BIGNUM **);
extern int DSA_meth_set_sign_setup(DSA_METHOD *dsam,
        int (*sign_setup) (DSA *, BN_CTX *, BIGNUM **, BIGNUM **));
extern int (*DSA_meth_get_verify(const DSA_METHOD *dsam))
        (const unsigned char *, int, DSA_SIG *, DSA *);
extern int DSA_meth_set_verify(DSA_METHOD *dsam,
    int (*verify) (const unsigned char *, int, DSA_SIG *, DSA *));
extern int (*DSA_meth_get_mod_exp(const DSA_METHOD *dsam))
        (DSA *, BIGNUM *, const BIGNUM *, const BIGNUM *, const BIGNUM *,
         const BIGNUM *, const BIGNUM *, BN_CTX *, BN_MONT_CTX *);
extern int DSA_meth_set_mod_exp(DSA_METHOD *dsam,
    int (*mod_exp) (DSA *, BIGNUM *, const BIGNUM *, const BIGNUM *,
                    const BIGNUM *, const BIGNUM *, const BIGNUM *, BN_CTX *,
                    BN_MONT_CTX *));
extern int (*DSA_meth_get_bn_mod_exp(const DSA_METHOD *dsam))
    (DSA *, BIGNUM *, const BIGNUM *, const BIGNUM *, const BIGNUM *,
     BN_CTX *, BN_MONT_CTX *);
extern int DSA_meth_set_bn_mod_exp(DSA_METHOD *dsam,
    int (*bn_mod_exp) (DSA *, BIGNUM *, const BIGNUM *, const BIGNUM *,
                       const BIGNUM *, BN_CTX *, BN_MONT_CTX *));
extern int (*DSA_meth_get_init(const DSA_METHOD *dsam))(DSA *);
extern int DSA_meth_set_init(DSA_METHOD *dsam,
                                            int (*init)(DSA *));
extern int (*DSA_meth_get_finish(const DSA_METHOD *dsam))(DSA *);
extern int DSA_meth_set_finish(DSA_METHOD *dsam,
                                              int (*finish)(DSA *));
extern int (*DSA_meth_get_paramgen(const DSA_METHOD *dsam))
        (DSA *, int, const unsigned char *, int, int *, unsigned long *,
         BN_GENCB *);
extern int DSA_meth_set_paramgen(DSA_METHOD *dsam,
        int (*paramgen) (DSA *, int, const unsigned char *, int, int *,
                         unsigned long *, BN_GENCB *));
extern int (*DSA_meth_get_keygen(const DSA_METHOD *dsam))(DSA *);
extern int DSA_meth_set_keygen(DSA_METHOD *dsam,
                                              int (*keygen) (DSA *));
# 38 "include/openssl/x509.h" 2



# 1 "include/openssl/sha.h" 1
# 12 "include/openssl/sha.h"
        







# 1 "/opt/cegcc/lib/gcc/arm-mingw32ce/9.3.0/include/stddef.h" 1 3 4
# 21 "include/openssl/sha.h" 2
# 42 "include/openssl/sha.h"
typedef struct SHAstate_st {
    unsigned int h0, h1, h2, h3, h4;
    unsigned int Nl, Nh;
    unsigned int data[16];
    unsigned int num;
} SHA_CTX;

extern int SHA1_Init(SHA_CTX *c);
extern int SHA1_Update(SHA_CTX *c, const void *data, size_t len);
extern int SHA1_Final(unsigned char *md, SHA_CTX *c);
extern void SHA1_Transform(SHA_CTX *c, const unsigned char *data);


unsigned char *SHA1(const unsigned char *d, size_t n, unsigned char *md);






typedef struct SHA256state_st {
    unsigned int h[8];
    unsigned int Nl, Nh;
    unsigned int data[16];
    unsigned int num, md_len;
} SHA256_CTX;

extern int SHA224_Init(SHA256_CTX *c);
extern int SHA224_Update(SHA256_CTX *c,
                                        const void *data, size_t len);
extern int SHA224_Final(unsigned char *md, SHA256_CTX *c);
extern int SHA256_Init(SHA256_CTX *c);
extern int SHA256_Update(SHA256_CTX *c,
                                        const void *data, size_t len);
extern int SHA256_Final(unsigned char *md, SHA256_CTX *c);
extern void SHA256_Transform(SHA256_CTX *c,
                                            const unsigned char *data);


unsigned char *SHA224(const unsigned char *d, size_t n, unsigned char *md);
unsigned char *SHA256(const unsigned char *d, size_t n, unsigned char *md);
# 109 "include/openssl/sha.h"
typedef struct SHA512state_st {
    unsigned long long h[8];
    unsigned long long Nl, Nh;
    union {
        unsigned long long d[16];
        unsigned char p[(16*8)];
    } u;
    unsigned int num, md_len;
} SHA512_CTX;

extern int SHA384_Init(SHA512_CTX *c);
extern int SHA384_Update(SHA512_CTX *c,
                                        const void *data, size_t len);
extern int SHA384_Final(unsigned char *md, SHA512_CTX *c);
extern int SHA512_Init(SHA512_CTX *c);
extern int SHA512_Update(SHA512_CTX *c,
                                        const void *data, size_t len);
extern int SHA512_Final(unsigned char *md, SHA512_CTX *c);
extern void SHA512_Transform(SHA512_CTX *c,
                                            const unsigned char *data);


unsigned char *SHA384(const unsigned char *d, size_t n, unsigned char *md);
unsigned char *SHA512(const unsigned char *d, size_t n, unsigned char *md);
# 42 "include/openssl/x509.h" 2
# 1 "include/openssl/x509err.h" 1
# 13 "include/openssl/x509err.h"
        
# 43 "include/openssl/x509.h" 2






struct stack_st_X509_NAME; typedef int (*sk_X509_NAME_compfunc)(const X509_NAME * const *a, const X509_NAME *const *b); typedef void (*sk_X509_NAME_freefunc)(X509_NAME *a); typedef X509_NAME * (*sk_X509_NAME_copyfunc)(const X509_NAME *a); static __attribute__((unused)) inline X509_NAME *ossl_check_X509_NAME_type(X509_NAME *ptr) { return ptr; } static __attribute__((unused)) inline const OPENSSL_STACK *ossl_check_const_X509_NAME_sk_type(const struct stack_st_X509_NAME *sk) { return (const OPENSSL_STACK *)sk; } static __attribute__((unused)) inline OPENSSL_STACK *ossl_check_X509_NAME_sk_type(struct stack_st_X509_NAME *sk) { return (OPENSSL_STACK *)sk; } static __attribute__((unused)) inline OPENSSL_sk_compfunc ossl_check_X509_NAME_compfunc_type(sk_X509_NAME_compfunc cmp) { return (OPENSSL_sk_compfunc)cmp; } static __attribute__((unused)) inline OPENSSL_sk_copyfunc ossl_check_X509_NAME_copyfunc_type(sk_X509_NAME_copyfunc cpy) { return (OPENSSL_sk_copyfunc)cpy; } static __attribute__((unused)) inline OPENSSL_sk_freefunc ossl_check_X509_NAME_freefunc_type(sk_X509_NAME_freefunc fr) { return (OPENSSL_sk_freefunc)fr; }
# 75 "include/openssl/x509.h"
struct stack_st_X509; typedef int (*sk_X509_compfunc)(const X509 * const *a, const X509 *const *b); typedef void (*sk_X509_freefunc)(X509 *a); typedef X509 * (*sk_X509_copyfunc)(const X509 *a); static __attribute__((unused)) inline X509 *ossl_check_X509_type(X509 *ptr) { return ptr; } static __attribute__((unused)) inline const OPENSSL_STACK *ossl_check_const_X509_sk_type(const struct stack_st_X509 *sk) { return (const OPENSSL_STACK *)sk; } static __attribute__((unused)) inline OPENSSL_STACK *ossl_check_X509_sk_type(struct stack_st_X509 *sk) { return (OPENSSL_STACK *)sk; } static __attribute__((unused)) inline OPENSSL_sk_compfunc ossl_check_X509_compfunc_type(sk_X509_compfunc cmp) { return (OPENSSL_sk_compfunc)cmp; } static __attribute__((unused)) inline OPENSSL_sk_copyfunc ossl_check_X509_copyfunc_type(sk_X509_copyfunc cpy) { return (OPENSSL_sk_copyfunc)cpy; } static __attribute__((unused)) inline OPENSSL_sk_freefunc ossl_check_X509_freefunc_type(sk_X509_freefunc fr) { return (OPENSSL_sk_freefunc)fr; }
# 101 "include/openssl/x509.h"
struct stack_st_X509_REVOKED; typedef int (*sk_X509_REVOKED_compfunc)(const X509_REVOKED * const *a, const X509_REVOKED *const *b); typedef void (*sk_X509_REVOKED_freefunc)(X509_REVOKED *a); typedef X509_REVOKED * (*sk_X509_REVOKED_copyfunc)(const X509_REVOKED *a); static __attribute__((unused)) inline X509_REVOKED *ossl_check_X509_REVOKED_type(X509_REVOKED *ptr) { return ptr; } static __attribute__((unused)) inline const OPENSSL_STACK *ossl_check_const_X509_REVOKED_sk_type(const struct stack_st_X509_REVOKED *sk) { return (const OPENSSL_STACK *)sk; } static __attribute__((unused)) inline OPENSSL_STACK *ossl_check_X509_REVOKED_sk_type(struct stack_st_X509_REVOKED *sk) { return (OPENSSL_STACK *)sk; } static __attribute__((unused)) inline OPENSSL_sk_compfunc ossl_check_X509_REVOKED_compfunc_type(sk_X509_REVOKED_compfunc cmp) { return (OPENSSL_sk_compfunc)cmp; } static __attribute__((unused)) inline OPENSSL_sk_copyfunc ossl_check_X509_REVOKED_copyfunc_type(sk_X509_REVOKED_copyfunc cpy) { return (OPENSSL_sk_copyfunc)cpy; } static __attribute__((unused)) inline OPENSSL_sk_freefunc ossl_check_X509_REVOKED_freefunc_type(sk_X509_REVOKED_freefunc fr) { return (OPENSSL_sk_freefunc)fr; }
# 127 "include/openssl/x509.h"
struct stack_st_X509_CRL; typedef int (*sk_X509_CRL_compfunc)(const X509_CRL * const *a, const X509_CRL *const *b); typedef void (*sk_X509_CRL_freefunc)(X509_CRL *a); typedef X509_CRL * (*sk_X509_CRL_copyfunc)(const X509_CRL *a); static __attribute__((unused)) inline X509_CRL *ossl_check_X509_CRL_type(X509_CRL *ptr) { return ptr; } static __attribute__((unused)) inline const OPENSSL_STACK *ossl_check_const_X509_CRL_sk_type(const struct stack_st_X509_CRL *sk) { return (const OPENSSL_STACK *)sk; } static __attribute__((unused)) inline OPENSSL_STACK *ossl_check_X509_CRL_sk_type(struct stack_st_X509_CRL *sk) { return (OPENSSL_STACK *)sk; } static __attribute__((unused)) inline OPENSSL_sk_compfunc ossl_check_X509_CRL_compfunc_type(sk_X509_CRL_compfunc cmp) { return (OPENSSL_sk_compfunc)cmp; } static __attribute__((unused)) inline OPENSSL_sk_copyfunc ossl_check_X509_CRL_copyfunc_type(sk_X509_CRL_copyfunc cpy) { return (OPENSSL_sk_copyfunc)cpy; } static __attribute__((unused)) inline OPENSSL_sk_freefunc ossl_check_X509_CRL_freefunc_type(sk_X509_CRL_freefunc fr) { return (OPENSSL_sk_freefunc)fr; }
# 176 "include/openssl/x509.h"
struct X509_algor_st {
    ASN1_OBJECT *algorithm;
    ASN1_TYPE *parameter;
} ;

typedef struct stack_st_X509_ALGOR X509_ALGORS;

typedef struct X509_val_st {
    ASN1_TIME *notBefore;
    ASN1_TIME *notAfter;
} X509_VAL;

typedef struct X509_sig_st X509_SIG;

typedef struct X509_name_entry_st X509_NAME_ENTRY;

struct stack_st_X509_NAME_ENTRY; typedef int (*sk_X509_NAME_ENTRY_compfunc)(const X509_NAME_ENTRY * const *a, const X509_NAME_ENTRY *const *b); typedef void (*sk_X509_NAME_ENTRY_freefunc)(X509_NAME_ENTRY *a); typedef X509_NAME_ENTRY * (*sk_X509_NAME_ENTRY_copyfunc)(const X509_NAME_ENTRY *a); static __attribute__((unused)) inline X509_NAME_ENTRY *ossl_check_X509_NAME_ENTRY_type(X509_NAME_ENTRY *ptr) { return ptr; } static __attribute__((unused)) inline const OPENSSL_STACK *ossl_check_const_X509_NAME_ENTRY_sk_type(const struct stack_st_X509_NAME_ENTRY *sk) { return (const OPENSSL_STACK *)sk; } static __attribute__((unused)) inline OPENSSL_STACK *ossl_check_X509_NAME_ENTRY_sk_type(struct stack_st_X509_NAME_ENTRY *sk) { return (OPENSSL_STACK *)sk; } static __attribute__((unused)) inline OPENSSL_sk_compfunc ossl_check_X509_NAME_ENTRY_compfunc_type(sk_X509_NAME_ENTRY_compfunc cmp) { return (OPENSSL_sk_compfunc)cmp; } static __attribute__((unused)) inline OPENSSL_sk_copyfunc ossl_check_X509_NAME_ENTRY_copyfunc_type(sk_X509_NAME_ENTRY_copyfunc cpy) { return (OPENSSL_sk_copyfunc)cpy; } static __attribute__((unused)) inline OPENSSL_sk_freefunc ossl_check_X509_NAME_ENTRY_freefunc_type(sk_X509_NAME_ENTRY_freefunc fr) { return (OPENSSL_sk_freefunc)fr; }
# 222 "include/openssl/x509.h"
typedef struct X509_extension_st X509_EXTENSION;
struct stack_st_X509_EXTENSION; typedef int (*sk_X509_EXTENSION_compfunc)(const X509_EXTENSION * const *a, const X509_EXTENSION *const *b); typedef void (*sk_X509_EXTENSION_freefunc)(X509_EXTENSION *a); typedef X509_EXTENSION * (*sk_X509_EXTENSION_copyfunc)(const X509_EXTENSION *a); static __attribute__((unused)) inline X509_EXTENSION *ossl_check_X509_EXTENSION_type(X509_EXTENSION *ptr) { return ptr; } static __attribute__((unused)) inline const OPENSSL_STACK *ossl_check_const_X509_EXTENSION_sk_type(const struct stack_st_X509_EXTENSION *sk) { return (const OPENSSL_STACK *)sk; } static __attribute__((unused)) inline OPENSSL_STACK *ossl_check_X509_EXTENSION_sk_type(struct stack_st_X509_EXTENSION *sk) { return (OPENSSL_STACK *)sk; } static __attribute__((unused)) inline OPENSSL_sk_compfunc ossl_check_X509_EXTENSION_compfunc_type(sk_X509_EXTENSION_compfunc cmp) { return (OPENSSL_sk_compfunc)cmp; } static __attribute__((unused)) inline OPENSSL_sk_copyfunc ossl_check_X509_EXTENSION_copyfunc_type(sk_X509_EXTENSION_copyfunc cpy) { return (OPENSSL_sk_copyfunc)cpy; } static __attribute__((unused)) inline OPENSSL_sk_freefunc ossl_check_X509_EXTENSION_freefunc_type(sk_X509_EXTENSION_freefunc fr) { return (OPENSSL_sk_freefunc)fr; }
# 250 "include/openssl/x509.h"
typedef struct stack_st_X509_EXTENSION X509_EXTENSIONS;
typedef struct x509_attributes_st X509_ATTRIBUTE;
struct stack_st_X509_ATTRIBUTE; typedef int (*sk_X509_ATTRIBUTE_compfunc)(const X509_ATTRIBUTE * const *a, const X509_ATTRIBUTE *const *b); typedef void (*sk_X509_ATTRIBUTE_freefunc)(X509_ATTRIBUTE *a); typedef X509_ATTRIBUTE * (*sk_X509_ATTRIBUTE_copyfunc)(const X509_ATTRIBUTE *a); static __attribute__((unused)) inline X509_ATTRIBUTE *ossl_check_X509_ATTRIBUTE_type(X509_ATTRIBUTE *ptr) { return ptr; } static __attribute__((unused)) inline const OPENSSL_STACK *ossl_check_const_X509_ATTRIBUTE_sk_type(const struct stack_st_X509_ATTRIBUTE *sk) { return (const OPENSSL_STACK *)sk; } static __attribute__((unused)) inline OPENSSL_STACK *ossl_check_X509_ATTRIBUTE_sk_type(struct stack_st_X509_ATTRIBUTE *sk) { return (OPENSSL_STACK *)sk; } static __attribute__((unused)) inline OPENSSL_sk_compfunc ossl_check_X509_ATTRIBUTE_compfunc_type(sk_X509_ATTRIBUTE_compfunc cmp) { return (OPENSSL_sk_compfunc)cmp; } static __attribute__((unused)) inline OPENSSL_sk_copyfunc ossl_check_X509_ATTRIBUTE_copyfunc_type(sk_X509_ATTRIBUTE_copyfunc cpy) { return (OPENSSL_sk_copyfunc)cpy; } static __attribute__((unused)) inline OPENSSL_sk_freefunc ossl_check_X509_ATTRIBUTE_freefunc_type(sk_X509_ATTRIBUTE_freefunc fr) { return (OPENSSL_sk_freefunc)fr; }
# 279 "include/openssl/x509.h"
typedef struct X509_req_info_st X509_REQ_INFO;
typedef struct X509_req_st X509_REQ;
typedef struct x509_cert_aux_st X509_CERT_AUX;
typedef struct x509_cinf_st X509_CINF;
# 362 "include/openssl/x509.h"
typedef struct X509_crl_info_st X509_CRL_INFO;

typedef struct private_key_st {
    int version;

    X509_ALGOR *enc_algor;
    ASN1_OCTET_STRING *enc_pkey;

    EVP_PKEY *dec_pkey;

    int key_length;
    char *key_data;
    int key_free;

    EVP_CIPHER_INFO cipher;
} X509_PKEY;

typedef struct X509_info_st {
    X509 *x509;
    X509_CRL *crl;
    X509_PKEY *x_pkey;
    EVP_CIPHER_INFO enc_cipher;
    int enc_len;
    char *enc_data;
} X509_INFO;
struct stack_st_X509_INFO; typedef int (*sk_X509_INFO_compfunc)(const X509_INFO * const *a, const X509_INFO *const *b); typedef void (*sk_X509_INFO_freefunc)(X509_INFO *a); typedef X509_INFO * (*sk_X509_INFO_copyfunc)(const X509_INFO *a); static __attribute__((unused)) inline X509_INFO *ossl_check_X509_INFO_type(X509_INFO *ptr) { return ptr; } static __attribute__((unused)) inline const OPENSSL_STACK *ossl_check_const_X509_INFO_sk_type(const struct stack_st_X509_INFO *sk) { return (const OPENSSL_STACK *)sk; } static __attribute__((unused)) inline OPENSSL_STACK *ossl_check_X509_INFO_sk_type(struct stack_st_X509_INFO *sk) { return (OPENSSL_STACK *)sk; } static __attribute__((unused)) inline OPENSSL_sk_compfunc ossl_check_X509_INFO_compfunc_type(sk_X509_INFO_compfunc cmp) { return (OPENSSL_sk_compfunc)cmp; } static __attribute__((unused)) inline OPENSSL_sk_copyfunc ossl_check_X509_INFO_copyfunc_type(sk_X509_INFO_copyfunc cpy) { return (OPENSSL_sk_copyfunc)cpy; } static __attribute__((unused)) inline OPENSSL_sk_freefunc ossl_check_X509_INFO_freefunc_type(sk_X509_INFO_freefunc fr) { return (OPENSSL_sk_freefunc)fr; }
# 419 "include/openssl/x509.h"
typedef struct Netscape_spkac_st {
    X509_PUBKEY *pubkey;
    ASN1_IA5STRING *challenge;
} NETSCAPE_SPKAC;

typedef struct Netscape_spki_st {
    NETSCAPE_SPKAC *spkac;
    X509_ALGOR sig_algor;
    ASN1_BIT_STRING *signature;
} NETSCAPE_SPKI;


typedef struct Netscape_certificate_sequence {
    ASN1_OBJECT *type;
    struct stack_st_X509 *certs;
} NETSCAPE_CERT_SEQUENCE;
# 445 "include/openssl/x509.h"
typedef struct PBEPARAM_st {
    ASN1_OCTET_STRING *salt;
    ASN1_INTEGER *iter;
} PBEPARAM;



typedef struct PBE2PARAM_st {
    X509_ALGOR *keyfunc;
    X509_ALGOR *encryption;
} PBE2PARAM;

typedef struct PBKDF2PARAM_st {

    ASN1_TYPE *salt;
    ASN1_INTEGER *iter;
    ASN1_INTEGER *keylength;
    X509_ALGOR *prf;
} PBKDF2PARAM;


typedef struct SCRYPT_PARAMS_st {
    ASN1_OCTET_STRING *salt;
    ASN1_INTEGER *costParameter;
    ASN1_INTEGER *blockSize;
    ASN1_INTEGER *parallelizationParameter;
    ASN1_INTEGER *keyLength;
} SCRYPT_PARAMS;






# 1 "include/openssl/x509_vfy.h" 1
# 17 "include/openssl/x509_vfy.h"
        
# 58 "include/openssl/x509_vfy.h"
typedef enum {
    X509_LU_NONE = 0,
    X509_LU_X509, X509_LU_CRL
} X509_LOOKUP_TYPE;






struct stack_st_X509_LOOKUP; typedef int (*sk_X509_LOOKUP_compfunc)(const X509_LOOKUP * const *a, const X509_LOOKUP *const *b); typedef void (*sk_X509_LOOKUP_freefunc)(X509_LOOKUP *a); typedef X509_LOOKUP * (*sk_X509_LOOKUP_copyfunc)(const X509_LOOKUP *a); static __attribute__((unused)) inline X509_LOOKUP *ossl_check_X509_LOOKUP_type(X509_LOOKUP *ptr) { return ptr; } static __attribute__((unused)) inline const OPENSSL_STACK *ossl_check_const_X509_LOOKUP_sk_type(const struct stack_st_X509_LOOKUP *sk) { return (const OPENSSL_STACK *)sk; } static __attribute__((unused)) inline OPENSSL_STACK *ossl_check_X509_LOOKUP_sk_type(struct stack_st_X509_LOOKUP *sk) { return (OPENSSL_STACK *)sk; } static __attribute__((unused)) inline OPENSSL_sk_compfunc ossl_check_X509_LOOKUP_compfunc_type(sk_X509_LOOKUP_compfunc cmp) { return (OPENSSL_sk_compfunc)cmp; } static __attribute__((unused)) inline OPENSSL_sk_copyfunc ossl_check_X509_LOOKUP_copyfunc_type(sk_X509_LOOKUP_copyfunc cpy) { return (OPENSSL_sk_copyfunc)cpy; } static __attribute__((unused)) inline OPENSSL_sk_freefunc ossl_check_X509_LOOKUP_freefunc_type(sk_X509_LOOKUP_freefunc fr) { return (OPENSSL_sk_freefunc)fr; }
# 94 "include/openssl/x509_vfy.h"
struct stack_st_X509_OBJECT; typedef int (*sk_X509_OBJECT_compfunc)(const X509_OBJECT * const *a, const X509_OBJECT *const *b); typedef void (*sk_X509_OBJECT_freefunc)(X509_OBJECT *a); typedef X509_OBJECT * (*sk_X509_OBJECT_copyfunc)(const X509_OBJECT *a); static __attribute__((unused)) inline X509_OBJECT *ossl_check_X509_OBJECT_type(X509_OBJECT *ptr) { return ptr; } static __attribute__((unused)) inline const OPENSSL_STACK *ossl_check_const_X509_OBJECT_sk_type(const struct stack_st_X509_OBJECT *sk) { return (const OPENSSL_STACK *)sk; } static __attribute__((unused)) inline OPENSSL_STACK *ossl_check_X509_OBJECT_sk_type(struct stack_st_X509_OBJECT *sk) { return (OPENSSL_STACK *)sk; } static __attribute__((unused)) inline OPENSSL_sk_compfunc ossl_check_X509_OBJECT_compfunc_type(sk_X509_OBJECT_compfunc cmp) { return (OPENSSL_sk_compfunc)cmp; } static __attribute__((unused)) inline OPENSSL_sk_copyfunc ossl_check_X509_OBJECT_copyfunc_type(sk_X509_OBJECT_copyfunc cpy) { return (OPENSSL_sk_copyfunc)cpy; } static __attribute__((unused)) inline OPENSSL_sk_freefunc ossl_check_X509_OBJECT_freefunc_type(sk_X509_OBJECT_freefunc fr) { return (OPENSSL_sk_freefunc)fr; }
# 120 "include/openssl/x509_vfy.h"
struct stack_st_X509_VERIFY_PARAM; typedef int (*sk_X509_VERIFY_PARAM_compfunc)(const X509_VERIFY_PARAM * const *a, const X509_VERIFY_PARAM *const *b); typedef void (*sk_X509_VERIFY_PARAM_freefunc)(X509_VERIFY_PARAM *a); typedef X509_VERIFY_PARAM * (*sk_X509_VERIFY_PARAM_copyfunc)(const X509_VERIFY_PARAM *a); static __attribute__((unused)) inline X509_VERIFY_PARAM *ossl_check_X509_VERIFY_PARAM_type(X509_VERIFY_PARAM *ptr) { return ptr; } static __attribute__((unused)) inline const OPENSSL_STACK *ossl_check_const_X509_VERIFY_PARAM_sk_type(const struct stack_st_X509_VERIFY_PARAM *sk) { return (const OPENSSL_STACK *)sk; } static __attribute__((unused)) inline OPENSSL_STACK *ossl_check_X509_VERIFY_PARAM_sk_type(struct stack_st_X509_VERIFY_PARAM *sk) { return (OPENSSL_STACK *)sk; } static __attribute__((unused)) inline OPENSSL_sk_compfunc ossl_check_X509_VERIFY_PARAM_compfunc_type(sk_X509_VERIFY_PARAM_compfunc cmp) { return (OPENSSL_sk_compfunc)cmp; } static __attribute__((unused)) inline OPENSSL_sk_copyfunc ossl_check_X509_VERIFY_PARAM_copyfunc_type(sk_X509_VERIFY_PARAM_copyfunc cpy) { return (OPENSSL_sk_copyfunc)cpy; } static __attribute__((unused)) inline OPENSSL_sk_freefunc ossl_check_X509_VERIFY_PARAM_freefunc_type(sk_X509_VERIFY_PARAM_freefunc fr) { return (OPENSSL_sk_freefunc)fr; }
# 149 "include/openssl/x509_vfy.h"
typedef struct x509_trust_st {
    int trust;
    int flags;
    int (*check_trust) (struct x509_trust_st *, X509 *, int);
    char *name;
    int arg1;
    void *arg2;
} X509_TRUST;
struct stack_st_X509_TRUST; typedef int (*sk_X509_TRUST_compfunc)(const X509_TRUST * const *a, const X509_TRUST *const *b); typedef void (*sk_X509_TRUST_freefunc)(X509_TRUST *a); typedef X509_TRUST * (*sk_X509_TRUST_copyfunc)(const X509_TRUST *a); static __attribute__((unused)) inline X509_TRUST *ossl_check_X509_TRUST_type(X509_TRUST *ptr) { return ptr; } static __attribute__((unused)) inline const OPENSSL_STACK *ossl_check_const_X509_TRUST_sk_type(const struct stack_st_X509_TRUST *sk) { return (const OPENSSL_STACK *)sk; } static __attribute__((unused)) inline OPENSSL_STACK *ossl_check_X509_TRUST_sk_type(struct stack_st_X509_TRUST *sk) { return (OPENSSL_STACK *)sk; } static __attribute__((unused)) inline OPENSSL_sk_compfunc ossl_check_X509_TRUST_compfunc_type(sk_X509_TRUST_compfunc cmp) { return (OPENSSL_sk_compfunc)cmp; } static __attribute__((unused)) inline OPENSSL_sk_copyfunc ossl_check_X509_TRUST_copyfunc_type(sk_X509_TRUST_copyfunc cpy) { return (OPENSSL_sk_copyfunc)cpy; } static __attribute__((unused)) inline OPENSSL_sk_freefunc ossl_check_X509_TRUST_freefunc_type(sk_X509_TRUST_freefunc fr) { return (OPENSSL_sk_freefunc)fr; }
# 214 "include/openssl/x509_vfy.h"
int X509_TRUST_set(int *t, int trust);
int X509_TRUST_get_count(void);
X509_TRUST *X509_TRUST_get0(int idx);
int X509_TRUST_get_by_id(int id);
int X509_TRUST_add(int id, int flags, int (*ck) (X509_TRUST *, X509 *, int),
                   const char *name, int arg1, void *arg2);
void X509_TRUST_cleanup(void);
int X509_TRUST_get_flags(const X509_TRUST *xp);
char *X509_TRUST_get0_name(const X509_TRUST *xp);
int X509_TRUST_get_trust(const X509_TRUST *xp);

int X509_trusted(const X509 *x);
int X509_add1_trust_object(X509 *x, const ASN1_OBJECT *obj);
int X509_add1_reject_object(X509 *x, const ASN1_OBJECT *obj);
void X509_trust_clear(X509 *x);
void X509_reject_clear(X509 *x);
struct stack_st_ASN1_OBJECT *X509_get0_trust_objects(X509 *x);
struct stack_st_ASN1_OBJECT *X509_get0_reject_objects(X509 *x);

int (*X509_TRUST_set_default(int (*trust) (int, X509 *, int))) (int, X509 *,
                                                                int);
int X509_check_trust(X509 *x, int id, int flags);

int X509_verify_cert(X509_STORE_CTX *ctx);
int X509_STORE_CTX_verify(X509_STORE_CTX *ctx);
struct stack_st_X509 *X509_build_chain(X509 *target, struct stack_st_X509 *certs,
                                 X509_STORE *store, int with_self_signed,
                                 OSSL_LIB_CTX *libctx, const char *propq);

int X509_STORE_set_depth(X509_STORE *store, int depth);

typedef int (*X509_STORE_CTX_verify_cb)(int, X509_STORE_CTX *);
int X509_STORE_CTX_print_verify_cb(int ok, X509_STORE_CTX *ctx);
typedef int (*X509_STORE_CTX_verify_fn)(X509_STORE_CTX *);
typedef int (*X509_STORE_CTX_get_issuer_fn)(X509 **issuer,
                                            X509_STORE_CTX *ctx, X509 *x);
typedef int (*X509_STORE_CTX_check_issued_fn)(X509_STORE_CTX *ctx,
                                              X509 *x, X509 *issuer);
typedef int (*X509_STORE_CTX_check_revocation_fn)(X509_STORE_CTX *ctx);
typedef int (*X509_STORE_CTX_get_crl_fn)(X509_STORE_CTX *ctx,
                                         X509_CRL **crl, X509 *x);
typedef int (*X509_STORE_CTX_check_crl_fn)(X509_STORE_CTX *ctx, X509_CRL *crl);
typedef int (*X509_STORE_CTX_cert_crl_fn)(X509_STORE_CTX *ctx,
                                          X509_CRL *crl, X509 *x);
typedef int (*X509_STORE_CTX_check_policy_fn)(X509_STORE_CTX *ctx);
typedef struct stack_st_X509
    *(*X509_STORE_CTX_lookup_certs_fn)(X509_STORE_CTX *ctx,
                                       const X509_NAME *nm);
typedef struct stack_st_X509_CRL
    *(*X509_STORE_CTX_lookup_crls_fn)(const X509_STORE_CTX *ctx,
                                      const X509_NAME *nm);
typedef int (*X509_STORE_CTX_cleanup_fn)(X509_STORE_CTX *ctx);

void X509_STORE_CTX_set_depth(X509_STORE_CTX *ctx, int depth);
# 478 "include/openssl/x509_vfy.h"
int X509_OBJECT_idx_by_subject(struct stack_st_X509_OBJECT *h, X509_LOOKUP_TYPE type,
                               const X509_NAME *name);
X509_OBJECT *X509_OBJECT_retrieve_by_subject(struct stack_st_X509_OBJECT *h,
                                             X509_LOOKUP_TYPE type,
                                             const X509_NAME *name);
X509_OBJECT *X509_OBJECT_retrieve_match(struct stack_st_X509_OBJECT *h,
                                        X509_OBJECT *x);
int X509_OBJECT_up_ref_count(X509_OBJECT *a);
X509_OBJECT *X509_OBJECT_new(void);
void X509_OBJECT_free(X509_OBJECT *a);
X509_LOOKUP_TYPE X509_OBJECT_get_type(const X509_OBJECT *a);
X509 *X509_OBJECT_get0_X509(const X509_OBJECT *a);
int X509_OBJECT_set1_X509(X509_OBJECT *a, X509 *obj);
X509_CRL *X509_OBJECT_get0_X509_CRL(const X509_OBJECT *a);
int X509_OBJECT_set1_X509_CRL(X509_OBJECT *a, X509_CRL *obj);
X509_STORE *X509_STORE_new(void);
void X509_STORE_free(X509_STORE *v);
int X509_STORE_lock(X509_STORE *ctx);
int X509_STORE_unlock(X509_STORE *ctx);
int X509_STORE_up_ref(X509_STORE *v);
struct stack_st_X509_OBJECT *X509_STORE_get0_objects(const X509_STORE *v);
struct stack_st_X509 *X509_STORE_get1_all_certs(X509_STORE *st);
struct stack_st_X509 *X509_STORE_CTX_get1_certs(X509_STORE_CTX *st,
                                          const X509_NAME *nm);
struct stack_st_X509_CRL *X509_STORE_CTX_get1_crls(const X509_STORE_CTX *st,
                                             const X509_NAME *nm);
int X509_STORE_set_flags(X509_STORE *ctx, unsigned long flags);
int X509_STORE_set_purpose(X509_STORE *ctx, int purpose);
int X509_STORE_set_trust(X509_STORE *ctx, int trust);
int X509_STORE_set1_param(X509_STORE *ctx, const X509_VERIFY_PARAM *pm);
X509_VERIFY_PARAM *X509_STORE_get0_param(const X509_STORE *ctx);

void X509_STORE_set_verify(X509_STORE *ctx, X509_STORE_CTX_verify_fn verify);


void X509_STORE_CTX_set_verify(X509_STORE_CTX *ctx,
                               X509_STORE_CTX_verify_fn verify);
X509_STORE_CTX_verify_fn X509_STORE_get_verify(const X509_STORE *ctx);
void X509_STORE_set_verify_cb(X509_STORE *ctx,
                              X509_STORE_CTX_verify_cb verify_cb);


X509_STORE_CTX_verify_cb X509_STORE_get_verify_cb(const X509_STORE *ctx);
void X509_STORE_set_get_issuer(X509_STORE *ctx,
                               X509_STORE_CTX_get_issuer_fn get_issuer);
X509_STORE_CTX_get_issuer_fn X509_STORE_get_get_issuer(const X509_STORE *ctx);
void X509_STORE_set_check_issued(X509_STORE *ctx,
                                 X509_STORE_CTX_check_issued_fn check_issued);
X509_STORE_CTX_check_issued_fn X509_STORE_get_check_issued(const X509_STORE *ctx);
void X509_STORE_set_check_revocation(X509_STORE *ctx,
                                     X509_STORE_CTX_check_revocation_fn check_revocation);
X509_STORE_CTX_check_revocation_fn
    X509_STORE_get_check_revocation(const X509_STORE *ctx);
void X509_STORE_set_get_crl(X509_STORE *ctx,
                            X509_STORE_CTX_get_crl_fn get_crl);
X509_STORE_CTX_get_crl_fn X509_STORE_get_get_crl(const X509_STORE *ctx);
void X509_STORE_set_check_crl(X509_STORE *ctx,
                              X509_STORE_CTX_check_crl_fn check_crl);
X509_STORE_CTX_check_crl_fn X509_STORE_get_check_crl(const X509_STORE *ctx);
void X509_STORE_set_cert_crl(X509_STORE *ctx,
                             X509_STORE_CTX_cert_crl_fn cert_crl);
X509_STORE_CTX_cert_crl_fn X509_STORE_get_cert_crl(const X509_STORE *ctx);
void X509_STORE_set_check_policy(X509_STORE *ctx,
                                 X509_STORE_CTX_check_policy_fn check_policy);
X509_STORE_CTX_check_policy_fn X509_STORE_get_check_policy(const X509_STORE *ctx);
void X509_STORE_set_lookup_certs(X509_STORE *ctx,
                                 X509_STORE_CTX_lookup_certs_fn lookup_certs);
X509_STORE_CTX_lookup_certs_fn X509_STORE_get_lookup_certs(const X509_STORE *ctx);
void X509_STORE_set_lookup_crls(X509_STORE *ctx,
                                X509_STORE_CTX_lookup_crls_fn lookup_crls);


X509_STORE_CTX_lookup_crls_fn X509_STORE_get_lookup_crls(const X509_STORE *ctx);
void X509_STORE_set_cleanup(X509_STORE *ctx,
                            X509_STORE_CTX_cleanup_fn cleanup);
X509_STORE_CTX_cleanup_fn X509_STORE_get_cleanup(const X509_STORE *ctx);



int X509_STORE_set_ex_data(X509_STORE *ctx, int idx, void *data);
void *X509_STORE_get_ex_data(const X509_STORE *ctx, int idx);

X509_STORE_CTX *X509_STORE_CTX_new_ex(OSSL_LIB_CTX *libctx, const char *propq);
X509_STORE_CTX *X509_STORE_CTX_new(void);

int X509_STORE_CTX_get1_issuer(X509 **issuer, X509_STORE_CTX *ctx, X509 *x);

void X509_STORE_CTX_free(X509_STORE_CTX *ctx);
int X509_STORE_CTX_init(X509_STORE_CTX *ctx, X509_STORE *trust_store,
                        X509 *target, struct stack_st_X509 *untrusted);
void X509_STORE_CTX_set0_trusted_stack(X509_STORE_CTX *ctx, struct stack_st_X509 *sk);
void X509_STORE_CTX_cleanup(X509_STORE_CTX *ctx);

X509_STORE *X509_STORE_CTX_get0_store(const X509_STORE_CTX *ctx);
X509 *X509_STORE_CTX_get0_cert(const X509_STORE_CTX *ctx);
struct stack_st_X509* X509_STORE_CTX_get0_untrusted(const X509_STORE_CTX *ctx);
void X509_STORE_CTX_set0_untrusted(X509_STORE_CTX *ctx, struct stack_st_X509 *sk);
void X509_STORE_CTX_set_verify_cb(X509_STORE_CTX *ctx,
                                  X509_STORE_CTX_verify_cb verify);
X509_STORE_CTX_verify_cb X509_STORE_CTX_get_verify_cb(const X509_STORE_CTX *ctx);
X509_STORE_CTX_verify_fn X509_STORE_CTX_get_verify(const X509_STORE_CTX *ctx);
X509_STORE_CTX_get_issuer_fn X509_STORE_CTX_get_get_issuer(const X509_STORE_CTX *ctx);
X509_STORE_CTX_check_issued_fn X509_STORE_CTX_get_check_issued(const X509_STORE_CTX *ctx);
X509_STORE_CTX_check_revocation_fn X509_STORE_CTX_get_check_revocation(const X509_STORE_CTX *ctx);
X509_STORE_CTX_get_crl_fn X509_STORE_CTX_get_get_crl(const X509_STORE_CTX *ctx);
X509_STORE_CTX_check_crl_fn X509_STORE_CTX_get_check_crl(const X509_STORE_CTX *ctx);
X509_STORE_CTX_cert_crl_fn X509_STORE_CTX_get_cert_crl(const X509_STORE_CTX *ctx);
X509_STORE_CTX_check_policy_fn X509_STORE_CTX_get_check_policy(const X509_STORE_CTX *ctx);
X509_STORE_CTX_lookup_certs_fn X509_STORE_CTX_get_lookup_certs(const X509_STORE_CTX *ctx);
X509_STORE_CTX_lookup_crls_fn X509_STORE_CTX_get_lookup_crls(const X509_STORE_CTX *ctx);
X509_STORE_CTX_cleanup_fn X509_STORE_CTX_get_cleanup(const X509_STORE_CTX *ctx);
# 603 "include/openssl/x509_vfy.h"
X509_LOOKUP *X509_STORE_add_lookup(X509_STORE *v, X509_LOOKUP_METHOD *m);
X509_LOOKUP_METHOD *X509_LOOKUP_hash_dir(void);
X509_LOOKUP_METHOD *X509_LOOKUP_file(void);
X509_LOOKUP_METHOD *X509_LOOKUP_store(void);

typedef int (*X509_LOOKUP_ctrl_fn)(X509_LOOKUP *ctx, int cmd, const char *argc,
                                   long argl, char **ret);
typedef int (*X509_LOOKUP_ctrl_ex_fn)(
    X509_LOOKUP *ctx, int cmd, const char *argc, long argl, char **ret,
    OSSL_LIB_CTX *libctx, const char *propq);

typedef int (*X509_LOOKUP_get_by_subject_fn)(X509_LOOKUP *ctx,
                                             X509_LOOKUP_TYPE type,
                                             const X509_NAME *name,
                                             X509_OBJECT *ret);
typedef int (*X509_LOOKUP_get_by_subject_ex_fn)(X509_LOOKUP *ctx,
                                                         X509_LOOKUP_TYPE type,
                                                         const X509_NAME *name,
                                                         X509_OBJECT *ret,
                                                         OSSL_LIB_CTX *libctx,
                                                         const char *propq);
typedef int (*X509_LOOKUP_get_by_issuer_serial_fn)(X509_LOOKUP *ctx,
                                                   X509_LOOKUP_TYPE type,
                                                   const X509_NAME *name,
                                                   const ASN1_INTEGER *serial,
                                                   X509_OBJECT *ret);
typedef int (*X509_LOOKUP_get_by_fingerprint_fn)(X509_LOOKUP *ctx,
                                                 X509_LOOKUP_TYPE type,
                                                 const unsigned char* bytes,
                                                 int len,
                                                 X509_OBJECT *ret);
typedef int (*X509_LOOKUP_get_by_alias_fn)(X509_LOOKUP *ctx,
                                           X509_LOOKUP_TYPE type,
                                           const char *str,
                                           int len,
                                           X509_OBJECT *ret);

X509_LOOKUP_METHOD *X509_LOOKUP_meth_new(const char *name);
void X509_LOOKUP_meth_free(X509_LOOKUP_METHOD *method);

int X509_LOOKUP_meth_set_new_item(X509_LOOKUP_METHOD *method,
                                  int (*new_item) (X509_LOOKUP *ctx));
int (*X509_LOOKUP_meth_get_new_item(const X509_LOOKUP_METHOD* method))
    (X509_LOOKUP *ctx);

int X509_LOOKUP_meth_set_free(X509_LOOKUP_METHOD *method,
                              void (*free_fn) (X509_LOOKUP *ctx));
void (*X509_LOOKUP_meth_get_free(const X509_LOOKUP_METHOD* method))
    (X509_LOOKUP *ctx);

int X509_LOOKUP_meth_set_init(X509_LOOKUP_METHOD *method,
                              int (*init) (X509_LOOKUP *ctx));
int (*X509_LOOKUP_meth_get_init(const X509_LOOKUP_METHOD* method))
    (X509_LOOKUP *ctx);

int X509_LOOKUP_meth_set_shutdown(X509_LOOKUP_METHOD *method,
                                  int (*shutdown) (X509_LOOKUP *ctx));
int (*X509_LOOKUP_meth_get_shutdown(const X509_LOOKUP_METHOD* method))
    (X509_LOOKUP *ctx);

int X509_LOOKUP_meth_set_ctrl(X509_LOOKUP_METHOD *method,
                              X509_LOOKUP_ctrl_fn ctrl_fn);
X509_LOOKUP_ctrl_fn X509_LOOKUP_meth_get_ctrl(const X509_LOOKUP_METHOD *method);

int X509_LOOKUP_meth_set_get_by_subject(X509_LOOKUP_METHOD *method,
                                        X509_LOOKUP_get_by_subject_fn fn);
X509_LOOKUP_get_by_subject_fn X509_LOOKUP_meth_get_get_by_subject(
    const X509_LOOKUP_METHOD *method);

int X509_LOOKUP_meth_set_get_by_issuer_serial(X509_LOOKUP_METHOD *method,
    X509_LOOKUP_get_by_issuer_serial_fn fn);
X509_LOOKUP_get_by_issuer_serial_fn X509_LOOKUP_meth_get_get_by_issuer_serial(
    const X509_LOOKUP_METHOD *method);

int X509_LOOKUP_meth_set_get_by_fingerprint(X509_LOOKUP_METHOD *method,
    X509_LOOKUP_get_by_fingerprint_fn fn);
X509_LOOKUP_get_by_fingerprint_fn X509_LOOKUP_meth_get_get_by_fingerprint(
    const X509_LOOKUP_METHOD *method);

int X509_LOOKUP_meth_set_get_by_alias(X509_LOOKUP_METHOD *method,
                                      X509_LOOKUP_get_by_alias_fn fn);
X509_LOOKUP_get_by_alias_fn X509_LOOKUP_meth_get_get_by_alias(
    const X509_LOOKUP_METHOD *method);


int X509_STORE_add_cert(X509_STORE *ctx, X509 *x);
int X509_STORE_add_crl(X509_STORE *ctx, X509_CRL *x);

int X509_STORE_CTX_get_by_subject(const X509_STORE_CTX *vs,
                                  X509_LOOKUP_TYPE type,
                                  const X509_NAME *name, X509_OBJECT *ret);
X509_OBJECT *X509_STORE_CTX_get_obj_by_subject(X509_STORE_CTX *vs,
                                               X509_LOOKUP_TYPE type,
                                               const X509_NAME *name);

int X509_LOOKUP_ctrl(X509_LOOKUP *ctx, int cmd, const char *argc,
                     long argl, char **ret);
int X509_LOOKUP_ctrl_ex(X509_LOOKUP *ctx, int cmd, const char *argc, long argl,
                        char **ret, OSSL_LIB_CTX *libctx, const char *propq);

int X509_load_cert_file(X509_LOOKUP *ctx, const char *file, int type);
int X509_load_cert_file_ex(X509_LOOKUP *ctx, const char *file, int type,
                           OSSL_LIB_CTX *libctx, const char *propq);
int X509_load_crl_file(X509_LOOKUP *ctx, const char *file, int type);
int X509_load_cert_crl_file(X509_LOOKUP *ctx, const char *file, int type);
int X509_load_cert_crl_file_ex(X509_LOOKUP *ctx, const char *file, int type,
                               OSSL_LIB_CTX *libctx, const char *propq);

X509_LOOKUP *X509_LOOKUP_new(X509_LOOKUP_METHOD *method);
void X509_LOOKUP_free(X509_LOOKUP *ctx);
int X509_LOOKUP_init(X509_LOOKUP *ctx);
int X509_LOOKUP_by_subject(X509_LOOKUP *ctx, X509_LOOKUP_TYPE type,
                           const X509_NAME *name, X509_OBJECT *ret);
int X509_LOOKUP_by_subject_ex(X509_LOOKUP *ctx, X509_LOOKUP_TYPE type,
                              const X509_NAME *name, X509_OBJECT *ret,
                              OSSL_LIB_CTX *libctx, const char *propq);
int X509_LOOKUP_by_issuer_serial(X509_LOOKUP *ctx, X509_LOOKUP_TYPE type,
                                 const X509_NAME *name,
                                 const ASN1_INTEGER *serial,
                                 X509_OBJECT *ret);
int X509_LOOKUP_by_fingerprint(X509_LOOKUP *ctx, X509_LOOKUP_TYPE type,
                               const unsigned char *bytes, int len,
                               X509_OBJECT *ret);
int X509_LOOKUP_by_alias(X509_LOOKUP *ctx, X509_LOOKUP_TYPE type,
                         const char *str, int len, X509_OBJECT *ret);
int X509_LOOKUP_set_method_data(X509_LOOKUP *ctx, void *data);
void *X509_LOOKUP_get_method_data(const X509_LOOKUP *ctx);
X509_STORE *X509_LOOKUP_get_store(const X509_LOOKUP *ctx);
int X509_LOOKUP_shutdown(X509_LOOKUP *ctx);

int X509_STORE_load_file(X509_STORE *ctx, const char *file);
int X509_STORE_load_path(X509_STORE *ctx, const char *path);
int X509_STORE_load_store(X509_STORE *ctx, const char *store);
int X509_STORE_load_locations(X509_STORE *ctx,
                                               const char *file,
                                               const char *dir);
int X509_STORE_set_default_paths(X509_STORE *ctx);

int X509_STORE_load_file_ex(X509_STORE *ctx, const char *file,
                            OSSL_LIB_CTX *libctx, const char *propq);
int X509_STORE_load_store_ex(X509_STORE *ctx, const char *store,
                             OSSL_LIB_CTX *libctx, const char *propq);
int X509_STORE_load_locations_ex(X509_STORE *ctx, const char *file,
                                 const char *dir, OSSL_LIB_CTX *libctx,
                                 const char *propq);
int X509_STORE_set_default_paths_ex(X509_STORE *ctx, OSSL_LIB_CTX *libctx,
                                    const char *propq);



int X509_STORE_CTX_set_ex_data(X509_STORE_CTX *ctx, int idx, void *data);
void *X509_STORE_CTX_get_ex_data(const X509_STORE_CTX *ctx, int idx);
int X509_STORE_CTX_get_error(const X509_STORE_CTX *ctx);
void X509_STORE_CTX_set_error(X509_STORE_CTX *ctx, int s);
int X509_STORE_CTX_get_error_depth(const X509_STORE_CTX *ctx);
void X509_STORE_CTX_set_error_depth(X509_STORE_CTX *ctx, int depth);
X509 *X509_STORE_CTX_get_current_cert(const X509_STORE_CTX *ctx);
void X509_STORE_CTX_set_current_cert(X509_STORE_CTX *ctx, X509 *x);
X509 *X509_STORE_CTX_get0_current_issuer(const X509_STORE_CTX *ctx);
X509_CRL *X509_STORE_CTX_get0_current_crl(const X509_STORE_CTX *ctx);
X509_STORE_CTX *X509_STORE_CTX_get0_parent_ctx(const X509_STORE_CTX *ctx);
struct stack_st_X509 *X509_STORE_CTX_get0_chain(const X509_STORE_CTX *ctx);
struct stack_st_X509 *X509_STORE_CTX_get1_chain(const X509_STORE_CTX *ctx);
void X509_STORE_CTX_set_cert(X509_STORE_CTX *ctx, X509 *target);
void X509_STORE_CTX_set0_verified_chain(X509_STORE_CTX *c, struct stack_st_X509 *sk);
void X509_STORE_CTX_set0_crls(X509_STORE_CTX *ctx, struct stack_st_X509_CRL *sk);
int X509_STORE_CTX_set_purpose(X509_STORE_CTX *ctx, int purpose);
int X509_STORE_CTX_set_trust(X509_STORE_CTX *ctx, int trust);
int X509_STORE_CTX_purpose_inherit(X509_STORE_CTX *ctx, int def_purpose,
                                   int purpose, int trust);
void X509_STORE_CTX_set_flags(X509_STORE_CTX *ctx, unsigned long flags);
void X509_STORE_CTX_set_time(X509_STORE_CTX *ctx, unsigned long flags,
                             time_t t);

X509_POLICY_TREE *X509_STORE_CTX_get0_policy_tree(const X509_STORE_CTX *ctx);
int X509_STORE_CTX_get_explicit_policy(const X509_STORE_CTX *ctx);
int X509_STORE_CTX_get_num_untrusted(const X509_STORE_CTX *ctx);

X509_VERIFY_PARAM *X509_STORE_CTX_get0_param(const X509_STORE_CTX *ctx);
void X509_STORE_CTX_set0_param(X509_STORE_CTX *ctx, X509_VERIFY_PARAM *param);
int X509_STORE_CTX_set_default(X509_STORE_CTX *ctx, const char *name);





void X509_STORE_CTX_set0_dane(X509_STORE_CTX *ctx, SSL_DANE *dane);




X509_VERIFY_PARAM *X509_VERIFY_PARAM_new(void);
void X509_VERIFY_PARAM_free(X509_VERIFY_PARAM *param);
int X509_VERIFY_PARAM_inherit(X509_VERIFY_PARAM *to,
                              const X509_VERIFY_PARAM *from);
int X509_VERIFY_PARAM_set1(X509_VERIFY_PARAM *to,
                           const X509_VERIFY_PARAM *from);
int X509_VERIFY_PARAM_set1_name(X509_VERIFY_PARAM *param, const char *name);
int X509_VERIFY_PARAM_set_flags(X509_VERIFY_PARAM *param,
                                unsigned long flags);
int X509_VERIFY_PARAM_clear_flags(X509_VERIFY_PARAM *param,
                                  unsigned long flags);
unsigned long X509_VERIFY_PARAM_get_flags(const X509_VERIFY_PARAM *param);
int X509_VERIFY_PARAM_set_purpose(X509_VERIFY_PARAM *param, int purpose);
int X509_VERIFY_PARAM_set_trust(X509_VERIFY_PARAM *param, int trust);
void X509_VERIFY_PARAM_set_depth(X509_VERIFY_PARAM *param, int depth);
void X509_VERIFY_PARAM_set_auth_level(X509_VERIFY_PARAM *param, int auth_level);
time_t X509_VERIFY_PARAM_get_time(const X509_VERIFY_PARAM *param);
void X509_VERIFY_PARAM_set_time(X509_VERIFY_PARAM *param, time_t t);
int X509_VERIFY_PARAM_add0_policy(X509_VERIFY_PARAM *param,
                                  ASN1_OBJECT *policy);
int X509_VERIFY_PARAM_set1_policies(X509_VERIFY_PARAM *param,
                                    struct stack_st_ASN1_OBJECT *policies);

int X509_VERIFY_PARAM_set_inh_flags(X509_VERIFY_PARAM *param,
                                    uint32_t flags);
uint32_t X509_VERIFY_PARAM_get_inh_flags(const X509_VERIFY_PARAM *param);

char *X509_VERIFY_PARAM_get0_host(X509_VERIFY_PARAM *param, int idx);
int X509_VERIFY_PARAM_set1_host(X509_VERIFY_PARAM *param,
                                const char *name, size_t namelen);
int X509_VERIFY_PARAM_add1_host(X509_VERIFY_PARAM *param,
                                const char *name, size_t namelen);
void X509_VERIFY_PARAM_set_hostflags(X509_VERIFY_PARAM *param,
                                     unsigned int flags);
unsigned int X509_VERIFY_PARAM_get_hostflags(const X509_VERIFY_PARAM *param);
char *X509_VERIFY_PARAM_get0_peername(const X509_VERIFY_PARAM *param);
void X509_VERIFY_PARAM_move_peername(X509_VERIFY_PARAM *, X509_VERIFY_PARAM *);
char *X509_VERIFY_PARAM_get0_email(X509_VERIFY_PARAM *param);
int X509_VERIFY_PARAM_set1_email(X509_VERIFY_PARAM *param,
                                 const char *email, size_t emaillen);
char *X509_VERIFY_PARAM_get1_ip_asc(X509_VERIFY_PARAM *param);
int X509_VERIFY_PARAM_set1_ip(X509_VERIFY_PARAM *param,
                              const unsigned char *ip, size_t iplen);
int X509_VERIFY_PARAM_set1_ip_asc(X509_VERIFY_PARAM *param,
                                  const char *ipasc);

int X509_VERIFY_PARAM_get_depth(const X509_VERIFY_PARAM *param);
int X509_VERIFY_PARAM_get_auth_level(const X509_VERIFY_PARAM *param);
const char *X509_VERIFY_PARAM_get0_name(const X509_VERIFY_PARAM *param);

int X509_VERIFY_PARAM_add0_table(X509_VERIFY_PARAM *param);
int X509_VERIFY_PARAM_get_count(void);
const X509_VERIFY_PARAM *X509_VERIFY_PARAM_get0(int id);
const X509_VERIFY_PARAM *X509_VERIFY_PARAM_lookup(const char *name);
void X509_VERIFY_PARAM_table_cleanup(void);
# 863 "include/openssl/x509_vfy.h"
int X509_policy_check(X509_POLICY_TREE **ptree, int *pexplicit_policy,
                      struct stack_st_X509 *certs,
                      struct stack_st_ASN1_OBJECT *policy_oids, unsigned int flags);

void X509_policy_tree_free(X509_POLICY_TREE *tree);

int X509_policy_tree_level_count(const X509_POLICY_TREE *tree);
X509_POLICY_LEVEL *X509_policy_tree_get0_level(const X509_POLICY_TREE *tree,
                                               int i);

struct stack_st_X509_POLICY_NODE
    *X509_policy_tree_get0_policies(const X509_POLICY_TREE *tree);

struct stack_st_X509_POLICY_NODE
    *X509_policy_tree_get0_user_policies(const X509_POLICY_TREE *tree);

int X509_policy_level_node_count(X509_POLICY_LEVEL *level);

X509_POLICY_NODE *X509_policy_level_get0_node(const X509_POLICY_LEVEL *level,
                                              int i);

const ASN1_OBJECT *X509_policy_node_get0_policy(const X509_POLICY_NODE *node);

struct stack_st_POLICYQUALINFO
    *X509_policy_node_get0_qualifiers(const X509_POLICY_NODE *node);
const X509_POLICY_NODE
    *X509_policy_node_get0_parent(const X509_POLICY_NODE *node);
# 480 "include/openssl/x509.h" 2
# 1 "include/openssl/pkcs7.h" 1
# 17 "include/openssl/pkcs7.h"
        
# 30 "include/openssl/pkcs7.h"
# 1 "include/openssl/pkcs7err.h" 1
# 13 "include/openssl/pkcs7err.h"
        
# 31 "include/openssl/pkcs7.h" 2
# 44 "include/openssl/pkcs7.h"
typedef struct PKCS7_CTX_st {
    OSSL_LIB_CTX *libctx;
    char *propq;
} PKCS7_CTX;

typedef struct pkcs7_issuer_and_serial_st {
    X509_NAME *issuer;
    ASN1_INTEGER *serial;
} PKCS7_ISSUER_AND_SERIAL;

typedef struct pkcs7_signer_info_st {
    ASN1_INTEGER *version;
    PKCS7_ISSUER_AND_SERIAL *issuer_and_serial;
    X509_ALGOR *digest_alg;
    struct stack_st_X509_ATTRIBUTE *auth_attr;
    X509_ALGOR *digest_enc_alg;
    ASN1_OCTET_STRING *enc_digest;
    struct stack_st_X509_ATTRIBUTE *unauth_attr;

    EVP_PKEY *pkey;
    const PKCS7_CTX *ctx;
} PKCS7_SIGNER_INFO;
struct stack_st_PKCS7_SIGNER_INFO; typedef int (*sk_PKCS7_SIGNER_INFO_compfunc)(const PKCS7_SIGNER_INFO * const *a, const PKCS7_SIGNER_INFO *const *b); typedef void (*sk_PKCS7_SIGNER_INFO_freefunc)(PKCS7_SIGNER_INFO *a); typedef PKCS7_SIGNER_INFO * (*sk_PKCS7_SIGNER_INFO_copyfunc)(const PKCS7_SIGNER_INFO *a); static __attribute__((unused)) inline PKCS7_SIGNER_INFO *ossl_check_PKCS7_SIGNER_INFO_type(PKCS7_SIGNER_INFO *ptr) { return ptr; } static __attribute__((unused)) inline const OPENSSL_STACK *ossl_check_const_PKCS7_SIGNER_INFO_sk_type(const struct stack_st_PKCS7_SIGNER_INFO *sk) { return (const OPENSSL_STACK *)sk; } static __attribute__((unused)) inline OPENSSL_STACK *ossl_check_PKCS7_SIGNER_INFO_sk_type(struct stack_st_PKCS7_SIGNER_INFO *sk) { return (OPENSSL_STACK *)sk; } static __attribute__((unused)) inline OPENSSL_sk_compfunc ossl_check_PKCS7_SIGNER_INFO_compfunc_type(sk_PKCS7_SIGNER_INFO_compfunc cmp) { return (OPENSSL_sk_compfunc)cmp; } static __attribute__((unused)) inline OPENSSL_sk_copyfunc ossl_check_PKCS7_SIGNER_INFO_copyfunc_type(sk_PKCS7_SIGNER_INFO_copyfunc cpy) { return (OPENSSL_sk_copyfunc)cpy; } static __attribute__((unused)) inline OPENSSL_sk_freefunc ossl_check_PKCS7_SIGNER_INFO_freefunc_type(sk_PKCS7_SIGNER_INFO_freefunc fr) { return (OPENSSL_sk_freefunc)fr; }
# 94 "include/openssl/pkcs7.h"
typedef struct pkcs7_recip_info_st {
    ASN1_INTEGER *version;
    PKCS7_ISSUER_AND_SERIAL *issuer_and_serial;
    X509_ALGOR *key_enc_algor;
    ASN1_OCTET_STRING *enc_key;
    X509 *cert;
    const PKCS7_CTX *ctx;
} PKCS7_RECIP_INFO;
struct stack_st_PKCS7_RECIP_INFO; typedef int (*sk_PKCS7_RECIP_INFO_compfunc)(const PKCS7_RECIP_INFO * const *a, const PKCS7_RECIP_INFO *const *b); typedef void (*sk_PKCS7_RECIP_INFO_freefunc)(PKCS7_RECIP_INFO *a); typedef PKCS7_RECIP_INFO * (*sk_PKCS7_RECIP_INFO_copyfunc)(const PKCS7_RECIP_INFO *a); static __attribute__((unused)) inline PKCS7_RECIP_INFO *ossl_check_PKCS7_RECIP_INFO_type(PKCS7_RECIP_INFO *ptr) { return ptr; } static __attribute__((unused)) inline const OPENSSL_STACK *ossl_check_const_PKCS7_RECIP_INFO_sk_type(const struct stack_st_PKCS7_RECIP_INFO *sk) { return (const OPENSSL_STACK *)sk; } static __attribute__((unused)) inline OPENSSL_STACK *ossl_check_PKCS7_RECIP_INFO_sk_type(struct stack_st_PKCS7_RECIP_INFO *sk) { return (OPENSSL_STACK *)sk; } static __attribute__((unused)) inline OPENSSL_sk_compfunc ossl_check_PKCS7_RECIP_INFO_compfunc_type(sk_PKCS7_RECIP_INFO_compfunc cmp) { return (OPENSSL_sk_compfunc)cmp; } static __attribute__((unused)) inline OPENSSL_sk_copyfunc ossl_check_PKCS7_RECIP_INFO_copyfunc_type(sk_PKCS7_RECIP_INFO_copyfunc cpy) { return (OPENSSL_sk_copyfunc)cpy; } static __attribute__((unused)) inline OPENSSL_sk_freefunc ossl_check_PKCS7_RECIP_INFO_freefunc_type(sk_PKCS7_RECIP_INFO_freefunc fr) { return (OPENSSL_sk_freefunc)fr; }
# 131 "include/openssl/pkcs7.h"
typedef struct pkcs7_signed_st {
    ASN1_INTEGER *version;
    struct stack_st_X509_ALGOR *md_algs;
    struct stack_st_X509 *cert;
    struct stack_st_X509_CRL *crl;
    struct stack_st_PKCS7_SIGNER_INFO *signer_info;
    struct pkcs7_st *contents;
} PKCS7_SIGNED;





typedef struct pkcs7_enc_content_st {
    ASN1_OBJECT *content_type;
    X509_ALGOR *algorithm;
    ASN1_OCTET_STRING *enc_data;
    const EVP_CIPHER *cipher;
    const PKCS7_CTX *ctx;
} PKCS7_ENC_CONTENT;

typedef struct pkcs7_enveloped_st {
    ASN1_INTEGER *version;
    struct stack_st_PKCS7_RECIP_INFO *recipientinfo;
    PKCS7_ENC_CONTENT *enc_data;
} PKCS7_ENVELOPE;

typedef struct pkcs7_signedandenveloped_st {
    ASN1_INTEGER *version;
    struct stack_st_X509_ALGOR *md_algs;
    struct stack_st_X509 *cert;
    struct stack_st_X509_CRL *crl;
    struct stack_st_PKCS7_SIGNER_INFO *signer_info;
    PKCS7_ENC_CONTENT *enc_data;
    struct stack_st_PKCS7_RECIP_INFO *recipientinfo;
} PKCS7_SIGN_ENVELOPE;

typedef struct pkcs7_digest_st {
    ASN1_INTEGER *version;
    X509_ALGOR *md;
    struct pkcs7_st *contents;
    ASN1_OCTET_STRING *digest;
} PKCS7_DIGEST;

typedef struct pkcs7_encrypted_st {
    ASN1_INTEGER *version;
    PKCS7_ENC_CONTENT *enc_data;
} PKCS7_ENCRYPT;

typedef struct pkcs7_st {




    unsigned char *asn1;
    long length;



    int state;
    int detached;
    ASN1_OBJECT *type;





    union {
        char *ptr;

        ASN1_OCTET_STRING *data;

        PKCS7_SIGNED *sign;

        PKCS7_ENVELOPE *enveloped;

        PKCS7_SIGN_ENVELOPE *signed_and_enveloped;

        PKCS7_DIGEST *digest;

        PKCS7_ENCRYPT *encrypted;

        ASN1_TYPE *other;
    } d;
    PKCS7_CTX ctx;
} PKCS7;
struct stack_st_PKCS7; typedef int (*sk_PKCS7_compfunc)(const PKCS7 * const *a, const PKCS7 *const *b); typedef void (*sk_PKCS7_freefunc)(PKCS7 *a); typedef PKCS7 * (*sk_PKCS7_copyfunc)(const PKCS7 *a); static __attribute__((unused)) inline PKCS7 *ossl_check_PKCS7_type(PKCS7 *ptr) { return ptr; } static __attribute__((unused)) inline const OPENSSL_STACK *ossl_check_const_PKCS7_sk_type(const struct stack_st_PKCS7 *sk) { return (const OPENSSL_STACK *)sk; } static __attribute__((unused)) inline OPENSSL_STACK *ossl_check_PKCS7_sk_type(struct stack_st_PKCS7 *sk) { return (OPENSSL_STACK *)sk; } static __attribute__((unused)) inline OPENSSL_sk_compfunc ossl_check_PKCS7_compfunc_type(sk_PKCS7_compfunc cmp) { return (OPENSSL_sk_compfunc)cmp; } static __attribute__((unused)) inline OPENSSL_sk_copyfunc ossl_check_PKCS7_copyfunc_type(sk_PKCS7_copyfunc cpy) { return (OPENSSL_sk_copyfunc)cpy; } static __attribute__((unused)) inline OPENSSL_sk_freefunc ossl_check_PKCS7_freefunc_type(sk_PKCS7_freefunc fr) { return (OPENSSL_sk_freefunc)fr; }
# 302 "include/openssl/pkcs7.h"
extern PKCS7_ISSUER_AND_SERIAL *PKCS7_ISSUER_AND_SERIAL_new(void); extern void PKCS7_ISSUER_AND_SERIAL_free(PKCS7_ISSUER_AND_SERIAL *a); extern PKCS7_ISSUER_AND_SERIAL *d2i_PKCS7_ISSUER_AND_SERIAL(PKCS7_ISSUER_AND_SERIAL **a, const unsigned char **in, long len); extern int i2d_PKCS7_ISSUER_AND_SERIAL(const PKCS7_ISSUER_AND_SERIAL *a, unsigned char **out); extern const ASN1_ITEM * PKCS7_ISSUER_AND_SERIAL_it(void);

int PKCS7_ISSUER_AND_SERIAL_digest(PKCS7_ISSUER_AND_SERIAL *data,
                                   const EVP_MD *type, unsigned char *md,
                                   unsigned int *len);

PKCS7 *d2i_PKCS7_fp(FILE *fp, PKCS7 **p7);
int i2d_PKCS7_fp(FILE *fp, const PKCS7 *p7);

extern PKCS7 *PKCS7_dup(const PKCS7 *a);
PKCS7 *d2i_PKCS7_bio(BIO *bp, PKCS7 **p7);
int i2d_PKCS7_bio(BIO *bp, const PKCS7 *p7);
int i2d_PKCS7_bio_stream(BIO *out, PKCS7 *p7, BIO *in, int flags);
int PEM_write_bio_PKCS7_stream(BIO *out, PKCS7 *p7, BIO *in, int flags);

extern PKCS7_SIGNER_INFO *PKCS7_SIGNER_INFO_new(void); extern void PKCS7_SIGNER_INFO_free(PKCS7_SIGNER_INFO *a); extern PKCS7_SIGNER_INFO *d2i_PKCS7_SIGNER_INFO(PKCS7_SIGNER_INFO **a, const unsigned char **in, long len); extern int i2d_PKCS7_SIGNER_INFO(const PKCS7_SIGNER_INFO *a, unsigned char **out); extern const ASN1_ITEM * PKCS7_SIGNER_INFO_it(void);
extern PKCS7_RECIP_INFO *PKCS7_RECIP_INFO_new(void); extern void PKCS7_RECIP_INFO_free(PKCS7_RECIP_INFO *a); extern PKCS7_RECIP_INFO *d2i_PKCS7_RECIP_INFO(PKCS7_RECIP_INFO **a, const unsigned char **in, long len); extern int i2d_PKCS7_RECIP_INFO(const PKCS7_RECIP_INFO *a, unsigned char **out); extern const ASN1_ITEM * PKCS7_RECIP_INFO_it(void);
extern PKCS7_SIGNED *PKCS7_SIGNED_new(void); extern void PKCS7_SIGNED_free(PKCS7_SIGNED *a); extern PKCS7_SIGNED *d2i_PKCS7_SIGNED(PKCS7_SIGNED **a, const unsigned char **in, long len); extern int i2d_PKCS7_SIGNED(const PKCS7_SIGNED *a, unsigned char **out); extern const ASN1_ITEM * PKCS7_SIGNED_it(void);
extern PKCS7_ENC_CONTENT *PKCS7_ENC_CONTENT_new(void); extern void PKCS7_ENC_CONTENT_free(PKCS7_ENC_CONTENT *a); extern PKCS7_ENC_CONTENT *d2i_PKCS7_ENC_CONTENT(PKCS7_ENC_CONTENT **a, const unsigned char **in, long len); extern int i2d_PKCS7_ENC_CONTENT(const PKCS7_ENC_CONTENT *a, unsigned char **out); extern const ASN1_ITEM * PKCS7_ENC_CONTENT_it(void);
extern PKCS7_ENVELOPE *PKCS7_ENVELOPE_new(void); extern void PKCS7_ENVELOPE_free(PKCS7_ENVELOPE *a); extern PKCS7_ENVELOPE *d2i_PKCS7_ENVELOPE(PKCS7_ENVELOPE **a, const unsigned char **in, long len); extern int i2d_PKCS7_ENVELOPE(const PKCS7_ENVELOPE *a, unsigned char **out); extern const ASN1_ITEM * PKCS7_ENVELOPE_it(void);
extern PKCS7_SIGN_ENVELOPE *PKCS7_SIGN_ENVELOPE_new(void); extern void PKCS7_SIGN_ENVELOPE_free(PKCS7_SIGN_ENVELOPE *a); extern PKCS7_SIGN_ENVELOPE *d2i_PKCS7_SIGN_ENVELOPE(PKCS7_SIGN_ENVELOPE **a, const unsigned char **in, long len); extern int i2d_PKCS7_SIGN_ENVELOPE(const PKCS7_SIGN_ENVELOPE *a, unsigned char **out); extern const ASN1_ITEM * PKCS7_SIGN_ENVELOPE_it(void);
extern PKCS7_DIGEST *PKCS7_DIGEST_new(void); extern void PKCS7_DIGEST_free(PKCS7_DIGEST *a); extern PKCS7_DIGEST *d2i_PKCS7_DIGEST(PKCS7_DIGEST **a, const unsigned char **in, long len); extern int i2d_PKCS7_DIGEST(const PKCS7_DIGEST *a, unsigned char **out); extern const ASN1_ITEM * PKCS7_DIGEST_it(void);
extern PKCS7_ENCRYPT *PKCS7_ENCRYPT_new(void); extern void PKCS7_ENCRYPT_free(PKCS7_ENCRYPT *a); extern PKCS7_ENCRYPT *d2i_PKCS7_ENCRYPT(PKCS7_ENCRYPT **a, const unsigned char **in, long len); extern int i2d_PKCS7_ENCRYPT(const PKCS7_ENCRYPT *a, unsigned char **out); extern const ASN1_ITEM * PKCS7_ENCRYPT_it(void);
extern PKCS7 *PKCS7_new(void); extern void PKCS7_free(PKCS7 *a); extern PKCS7 *d2i_PKCS7(PKCS7 **a, const unsigned char **in, long len); extern int i2d_PKCS7(const PKCS7 *a, unsigned char **out); extern const ASN1_ITEM * PKCS7_it(void);
PKCS7 *PKCS7_new_ex(OSSL_LIB_CTX *libctx, const char *propq);

extern const ASN1_ITEM * PKCS7_ATTR_SIGN_it(void);
extern const ASN1_ITEM * PKCS7_ATTR_VERIFY_it(void);

extern int i2d_PKCS7_NDEF(const PKCS7 *a, unsigned char **out);
extern int PKCS7_print_ctx(BIO *out, const PKCS7 *x, int indent, const ASN1_PCTX *pctx);

long PKCS7_ctrl(PKCS7 *p7, int cmd, long larg, char *parg);

int PKCS7_type_is_other(PKCS7 *p7);
int PKCS7_set_type(PKCS7 *p7, int type);
int PKCS7_set0_type_other(PKCS7 *p7, int type, ASN1_TYPE *other);
int PKCS7_set_content(PKCS7 *p7, PKCS7 *p7_data);
int PKCS7_SIGNER_INFO_set(PKCS7_SIGNER_INFO *p7i, X509 *x509, EVP_PKEY *pkey,
                          const EVP_MD *dgst);
int PKCS7_SIGNER_INFO_sign(PKCS7_SIGNER_INFO *si);
int PKCS7_add_signer(PKCS7 *p7, PKCS7_SIGNER_INFO *p7i);
int PKCS7_add_certificate(PKCS7 *p7, X509 *x509);
int PKCS7_add_crl(PKCS7 *p7, X509_CRL *x509);
int PKCS7_content_new(PKCS7 *p7, int nid);
int PKCS7_dataVerify(X509_STORE *cert_store, X509_STORE_CTX *ctx,
                     BIO *bio, PKCS7 *p7, PKCS7_SIGNER_INFO *si);
int PKCS7_signatureVerify(BIO *bio, PKCS7 *p7, PKCS7_SIGNER_INFO *si,
                          X509 *x509);

BIO *PKCS7_dataInit(PKCS7 *p7, BIO *bio);
int PKCS7_dataFinal(PKCS7 *p7, BIO *bio);
BIO *PKCS7_dataDecode(PKCS7 *p7, EVP_PKEY *pkey, BIO *in_bio, X509 *pcert);

PKCS7_SIGNER_INFO *PKCS7_add_signature(PKCS7 *p7, X509 *x509,
                                       EVP_PKEY *pkey, const EVP_MD *dgst);
X509 *PKCS7_cert_from_signer_info(PKCS7 *p7, PKCS7_SIGNER_INFO *si);
int PKCS7_set_digest(PKCS7 *p7, const EVP_MD *md);
struct stack_st_PKCS7_SIGNER_INFO *PKCS7_get_signer_info(PKCS7 *p7);

PKCS7_RECIP_INFO *PKCS7_add_recipient(PKCS7 *p7, X509 *x509);
void PKCS7_SIGNER_INFO_get0_algs(PKCS7_SIGNER_INFO *si, EVP_PKEY **pk,
                                 X509_ALGOR **pdig, X509_ALGOR **psig);
void PKCS7_RECIP_INFO_get0_alg(PKCS7_RECIP_INFO *ri, X509_ALGOR **penc);
int PKCS7_add_recipient_info(PKCS7 *p7, PKCS7_RECIP_INFO *ri);
int PKCS7_RECIP_INFO_set(PKCS7_RECIP_INFO *p7i, X509 *x509);
int PKCS7_set_cipher(PKCS7 *p7, const EVP_CIPHER *cipher);
int PKCS7_stream(unsigned char ***boundary, PKCS7 *p7);

PKCS7_ISSUER_AND_SERIAL *PKCS7_get_issuer_and_serial(PKCS7 *p7, int idx);
ASN1_OCTET_STRING *PKCS7_get_octet_string(PKCS7 *p7);
ASN1_OCTET_STRING *PKCS7_digest_from_attributes(struct stack_st_X509_ATTRIBUTE *sk);
int PKCS7_add_signed_attribute(PKCS7_SIGNER_INFO *p7si, int nid, int type,
                               void *data);
int PKCS7_add_attribute(PKCS7_SIGNER_INFO *p7si, int nid, int atrtype,
                        void *value);
ASN1_TYPE *PKCS7_get_attribute(const PKCS7_SIGNER_INFO *si, int nid);
ASN1_TYPE *PKCS7_get_signed_attribute(const PKCS7_SIGNER_INFO *si, int nid);
int PKCS7_set_signed_attributes(PKCS7_SIGNER_INFO *p7si,
                                struct stack_st_X509_ATTRIBUTE *sk);
int PKCS7_set_attributes(PKCS7_SIGNER_INFO *p7si,
                         struct stack_st_X509_ATTRIBUTE *sk);

PKCS7 *PKCS7_sign(X509 *signcert, EVP_PKEY *pkey, struct stack_st_X509 *certs,
                  BIO *data, int flags);
PKCS7 *PKCS7_sign_ex(X509 *signcert, EVP_PKEY *pkey, struct stack_st_X509 *certs,
                     BIO *data, int flags, OSSL_LIB_CTX *libctx,
                     const char *propq);

PKCS7_SIGNER_INFO *PKCS7_sign_add_signer(PKCS7 *p7,
                                         X509 *signcert, EVP_PKEY *pkey,
                                         const EVP_MD *md, int flags);

int PKCS7_final(PKCS7 *p7, BIO *data, int flags);
int PKCS7_verify(PKCS7 *p7, struct stack_st_X509 *certs, X509_STORE *store,
                 BIO *indata, BIO *out, int flags);
struct stack_st_X509 *PKCS7_get0_signers(PKCS7 *p7, struct stack_st_X509 *certs,
                                   int flags);
PKCS7 *PKCS7_encrypt(struct stack_st_X509 *certs, BIO *in, const EVP_CIPHER *cipher,
                     int flags);
PKCS7 *PKCS7_encrypt_ex(struct stack_st_X509 *certs, BIO *in,
                        const EVP_CIPHER *cipher, int flags,
                        OSSL_LIB_CTX *libctx, const char *propq);
int PKCS7_decrypt(PKCS7 *p7, EVP_PKEY *pkey, X509 *cert, BIO *data,
                  int flags);

int PKCS7_add_attrib_smimecap(PKCS7_SIGNER_INFO *si,
                              struct stack_st_X509_ALGOR *cap);
struct stack_st_X509_ALGOR *PKCS7_get_smimecap(PKCS7_SIGNER_INFO *si);
int PKCS7_simple_smimecap(struct stack_st_X509_ALGOR *sk, int nid, int arg);

int PKCS7_add_attrib_content_type(PKCS7_SIGNER_INFO *si, ASN1_OBJECT *coid);
int PKCS7_add0_attrib_signing_time(PKCS7_SIGNER_INFO *si, ASN1_TIME *t);
int PKCS7_add1_attrib_digest(PKCS7_SIGNER_INFO *si,
                             const unsigned char *md, int mdlen);

int SMIME_write_PKCS7(BIO *bio, PKCS7 *p7, BIO *data, int flags);
PKCS7 *SMIME_read_PKCS7_ex(BIO *bio, BIO **bcont, PKCS7 **p7);
PKCS7 *SMIME_read_PKCS7(BIO *bio, BIO **bcont);

BIO *BIO_new_PKCS7(BIO *out, PKCS7 *p7);
# 481 "include/openssl/x509.h" 2
# 493 "include/openssl/x509.h"
void X509_CRL_set_default_method(const X509_CRL_METHOD *meth);
X509_CRL_METHOD *X509_CRL_METHOD_new(int (*crl_init) (X509_CRL *crl),
                                     int (*crl_free) (X509_CRL *crl),
                                     int (*crl_lookup) (X509_CRL *crl,
                                                        X509_REVOKED **ret,
                                                        const
                                                        ASN1_INTEGER *serial,
                                                        const
                                                        X509_NAME *issuer),
                                     int (*crl_verify) (X509_CRL *crl,
                                                        EVP_PKEY *pk));
void X509_CRL_METHOD_free(X509_CRL_METHOD *m);

void X509_CRL_set_meth_data(X509_CRL *crl, void *dat);
void *X509_CRL_get_meth_data(X509_CRL *crl);

const char *X509_verify_cert_error_string(long n);

int X509_verify(X509 *a, EVP_PKEY *r);
int X509_self_signed(X509 *cert, int verify_signature);

int X509_REQ_verify_ex(X509_REQ *a, EVP_PKEY *r, OSSL_LIB_CTX *libctx,
                       const char *propq);
int X509_REQ_verify(X509_REQ *a, EVP_PKEY *r);
int X509_CRL_verify(X509_CRL *a, EVP_PKEY *r);
int NETSCAPE_SPKI_verify(NETSCAPE_SPKI *a, EVP_PKEY *r);

NETSCAPE_SPKI *NETSCAPE_SPKI_b64_decode(const char *str, int len);
char *NETSCAPE_SPKI_b64_encode(NETSCAPE_SPKI *x);
EVP_PKEY *NETSCAPE_SPKI_get_pubkey(NETSCAPE_SPKI *x);
int NETSCAPE_SPKI_set_pubkey(NETSCAPE_SPKI *x, EVP_PKEY *pkey);

int NETSCAPE_SPKI_print(BIO *out, NETSCAPE_SPKI *spki);

int X509_signature_dump(BIO *bp, const ASN1_STRING *sig, int indent);
int X509_signature_print(BIO *bp, const X509_ALGOR *alg,
                         const ASN1_STRING *sig);

int X509_sign(X509 *x, EVP_PKEY *pkey, const EVP_MD *md);
int X509_sign_ctx(X509 *x, EVP_MD_CTX *ctx);
int X509_REQ_sign(X509_REQ *x, EVP_PKEY *pkey, const EVP_MD *md);
int X509_REQ_sign_ctx(X509_REQ *x, EVP_MD_CTX *ctx);
int X509_CRL_sign(X509_CRL *x, EVP_PKEY *pkey, const EVP_MD *md);
int X509_CRL_sign_ctx(X509_CRL *x, EVP_MD_CTX *ctx);
int NETSCAPE_SPKI_sign(NETSCAPE_SPKI *x, EVP_PKEY *pkey, const EVP_MD *md);

int X509_pubkey_digest(const X509 *data, const EVP_MD *type,
                       unsigned char *md, unsigned int *len);
int X509_digest(const X509 *data, const EVP_MD *type,
                unsigned char *md, unsigned int *len);
ASN1_OCTET_STRING *X509_digest_sig(const X509 *cert,
                                   EVP_MD **md_used, int *md_is_fallback);
int X509_CRL_digest(const X509_CRL *data, const EVP_MD *type,
                    unsigned char *md, unsigned int *len);
int X509_REQ_digest(const X509_REQ *data, const EVP_MD *type,
                    unsigned char *md, unsigned int *len);
int X509_NAME_digest(const X509_NAME *data, const EVP_MD *type,
                     unsigned char *md, unsigned int *len);

X509 *X509_load_http(const char *url, BIO *bio, BIO *rbio, int timeout);
X509_CRL *X509_CRL_load_http(const char *url, BIO *bio, BIO *rbio, int timeout);

# 1 "include/openssl/http.h" 1
# 13 "include/openssl/http.h"
        





# 1 "include/openssl/conf.h" 1
# 17 "include/openssl/conf.h"
        
# 29 "include/openssl/conf.h"
# 1 "include/openssl/conferr.h" 1
# 13 "include/openssl/conferr.h"
        
# 30 "include/openssl/conf.h" 2





typedef struct {
    char *section;
    char *name;
    char *value;
} CONF_VALUE;

struct stack_st_CONF_VALUE; typedef int (*sk_CONF_VALUE_compfunc)(const CONF_VALUE * const *a, const CONF_VALUE *const *b); typedef void (*sk_CONF_VALUE_freefunc)(CONF_VALUE *a); typedef CONF_VALUE * (*sk_CONF_VALUE_copyfunc)(const CONF_VALUE *a); static __attribute__((unused)) inline CONF_VALUE *ossl_check_CONF_VALUE_type(CONF_VALUE *ptr) { return ptr; } static __attribute__((unused)) inline const OPENSSL_STACK *ossl_check_const_CONF_VALUE_sk_type(const struct stack_st_CONF_VALUE *sk) { return (const OPENSSL_STACK *)sk; } static __attribute__((unused)) inline OPENSSL_STACK *ossl_check_CONF_VALUE_sk_type(struct stack_st_CONF_VALUE *sk) { return (OPENSSL_STACK *)sk; } static __attribute__((unused)) inline OPENSSL_sk_compfunc ossl_check_CONF_VALUE_compfunc_type(sk_CONF_VALUE_compfunc cmp) { return (OPENSSL_sk_compfunc)cmp; } static __attribute__((unused)) inline OPENSSL_sk_copyfunc ossl_check_CONF_VALUE_copyfunc_type(sk_CONF_VALUE_copyfunc cpy) { return (OPENSSL_sk_copyfunc)cpy; } static __attribute__((unused)) inline OPENSSL_sk_freefunc ossl_check_CONF_VALUE_freefunc_type(sk_CONF_VALUE_freefunc fr) { return (OPENSSL_sk_freefunc)fr; }
# 67 "include/openssl/conf.h"
struct lhash_st_CONF_VALUE { union lh_CONF_VALUE_dummy { void* d1; unsigned long d2; int d3; } dummy; }; typedef int (*lh_CONF_VALUE_compfunc)(const CONF_VALUE *a, const CONF_VALUE *b); typedef unsigned long (*lh_CONF_VALUE_hashfunc)(const CONF_VALUE *a); typedef void (*lh_CONF_VALUE_doallfunc)(CONF_VALUE *a); static __attribute__((unused)) inline CONF_VALUE *ossl_check_CONF_VALUE_lh_plain_type(CONF_VALUE *ptr) { return ptr; } static __attribute__((unused)) inline const CONF_VALUE *ossl_check_const_CONF_VALUE_lh_plain_type(const CONF_VALUE *ptr) { return ptr; } static __attribute__((unused)) inline const OPENSSL_LHASH *ossl_check_const_CONF_VALUE_lh_type(const struct lhash_st_CONF_VALUE *lh) { return (const OPENSSL_LHASH *)lh; } static __attribute__((unused)) inline OPENSSL_LHASH *ossl_check_CONF_VALUE_lh_type(struct lhash_st_CONF_VALUE *lh) { return (OPENSSL_LHASH *)lh; } static __attribute__((unused)) inline OPENSSL_LH_COMPFUNC ossl_check_CONF_VALUE_lh_compfunc_type(lh_CONF_VALUE_compfunc cmp) { return (OPENSSL_LH_COMPFUNC)cmp; } static __attribute__((unused)) inline OPENSSL_LH_HASHFUNC ossl_check_CONF_VALUE_lh_hashfunc_type(lh_CONF_VALUE_hashfunc hfn) { return (OPENSSL_LH_HASHFUNC)hfn; } static __attribute__((unused)) inline OPENSSL_LH_DOALL_FUNC ossl_check_CONF_VALUE_lh_doallfunc_type(lh_CONF_VALUE_doallfunc dfn) { return (OPENSSL_LH_DOALL_FUNC)dfn; } struct lhash_st_CONF_VALUE;
# 84 "include/openssl/conf.h"
struct conf_st;
struct conf_method_st;
typedef struct conf_method_st CONF_METHOD;


# 1 "include/openssl/conftypes.h" 1
# 12 "include/openssl/conftypes.h"
        
# 21 "include/openssl/conftypes.h"
struct conf_method_st {
    const char *name;
    CONF *(*create) (CONF_METHOD *meth);
    int (*init) (CONF *conf);
    int (*destroy) (CONF *conf);
    int (*destroy_data) (CONF *conf);
    int (*load_bio) (CONF *conf, BIO *bp, long *eline);
    int (*dump) (const CONF *conf, BIO *bp);
    int (*is_number) (const CONF *conf, char c);
    int (*to_int) (const CONF *conf, char c);
    int (*load) (CONF *conf, const char *name, long *eline);
};

struct conf_st {
    CONF_METHOD *meth;
    void *meth_data;
    struct lhash_st_CONF_VALUE *data;
    int flag_dollarid;
    int flag_abspath;
    char *includedir;
    OSSL_LIB_CTX *libctx;
};
# 90 "include/openssl/conf.h" 2



typedef struct conf_imodule_st CONF_IMODULE;
typedef struct conf_module_st CONF_MODULE;

struct stack_st_CONF_MODULE;
struct stack_st_CONF_IMODULE;


typedef int conf_init_func (CONF_IMODULE *md, const CONF *cnf);
typedef void conf_finish_func (CONF_IMODULE *md);
# 110 "include/openssl/conf.h"
int CONF_set_default_method(CONF_METHOD *meth);
void CONF_set_nconf(CONF *conf, struct lhash_st_CONF_VALUE *hash);
struct lhash_st_CONF_VALUE *CONF_load(struct lhash_st_CONF_VALUE *conf, const char *file,
                                long *eline);

struct lhash_st_CONF_VALUE *CONF_load_fp(struct lhash_st_CONF_VALUE *conf, FILE *fp,
                                   long *eline);

struct lhash_st_CONF_VALUE *CONF_load_bio(struct lhash_st_CONF_VALUE *conf, BIO *bp,
                                    long *eline);
struct stack_st_CONF_VALUE *CONF_get_section(struct lhash_st_CONF_VALUE *conf,
                                       const char *section);
char *CONF_get_string(struct lhash_st_CONF_VALUE *conf, const char *group,
                      const char *name);
long CONF_get_number(struct lhash_st_CONF_VALUE *conf, const char *group,
                     const char *name);
void CONF_free(struct lhash_st_CONF_VALUE *conf);

int CONF_dump_fp(struct lhash_st_CONF_VALUE *conf, FILE *out);

int CONF_dump_bio(struct lhash_st_CONF_VALUE *conf, BIO *out);

extern void OPENSSL_config(const char *config_name);
# 145 "include/openssl/conf.h"
CONF *NCONF_new_ex(OSSL_LIB_CTX *libctx, CONF_METHOD *meth);
OSSL_LIB_CTX *NCONF_get0_libctx(const CONF *conf);
CONF *NCONF_new(CONF_METHOD *meth);
CONF_METHOD *NCONF_default(void);

extern CONF_METHOD *NCONF_WIN32(void);

void NCONF_free(CONF *conf);
void NCONF_free_data(CONF *conf);

int NCONF_load(CONF *conf, const char *file, long *eline);

int NCONF_load_fp(CONF *conf, FILE *fp, long *eline);

int NCONF_load_bio(CONF *conf, BIO *bp, long *eline);
struct stack_st_OPENSSL_CSTRING *NCONF_get_section_names(const CONF *conf);
struct stack_st_CONF_VALUE *NCONF_get_section(const CONF *conf,
                                        const char *section);
char *NCONF_get_string(const CONF *conf, const char *group, const char *name);
int NCONF_get_number_e(const CONF *conf, const char *group, const char *name,
                       long *result);

int NCONF_dump_fp(const CONF *conf, FILE *out);

int NCONF_dump_bio(const CONF *conf, BIO *out);





int CONF_modules_load(const CONF *cnf, const char *appname,
                      unsigned long flags);
int CONF_modules_load_file_ex(OSSL_LIB_CTX *libctx, const char *filename,
                              const char *appname, unsigned long flags);
int CONF_modules_load_file(const char *filename, const char *appname,
                           unsigned long flags);
void CONF_modules_unload(int all);
void CONF_modules_finish(void);



int CONF_module_add(const char *name, conf_init_func *ifunc,
                    conf_finish_func *ffunc);

const char *CONF_imodule_get_name(const CONF_IMODULE *md);
const char *CONF_imodule_get_value(const CONF_IMODULE *md);
void *CONF_imodule_get_usr_data(const CONF_IMODULE *md);
void CONF_imodule_set_usr_data(CONF_IMODULE *md, void *usr_data);
CONF_MODULE *CONF_imodule_get_module(const CONF_IMODULE *md);
unsigned long CONF_imodule_get_flags(const CONF_IMODULE *md);
void CONF_imodule_set_flags(CONF_IMODULE *md, unsigned long flags);
void *CONF_module_get_usr_data(CONF_MODULE *pmod);
void CONF_module_set_usr_data(CONF_MODULE *pmod, void *usr_data);

char *CONF_get1_default_config_file(void);

int CONF_parse_list(const char *list, int sep, int nospc,
                    int (*list_cb) (const char *elem, int len, void *usr),
                    void *arg);

void OPENSSL_load_builtin_modules(void);
# 20 "include/openssl/http.h" 2
# 40 "include/openssl/http.h"
OSSL_HTTP_REQ_CTX *OSSL_HTTP_REQ_CTX_new(BIO *wbio, BIO *rbio, int buf_size);
void OSSL_HTTP_REQ_CTX_free(OSSL_HTTP_REQ_CTX *rctx);
int OSSL_HTTP_REQ_CTX_set_request_line(OSSL_HTTP_REQ_CTX *rctx, int method_POST,
                                       const char *server, const char *port,
                                       const char *path);
int OSSL_HTTP_REQ_CTX_add1_header(OSSL_HTTP_REQ_CTX *rctx,
                                  const char *name, const char *value);
int OSSL_HTTP_REQ_CTX_set_expected(OSSL_HTTP_REQ_CTX *rctx,
                                   const char *content_type, int asn1,
                                   int timeout, int keep_alive);
int OSSL_HTTP_REQ_CTX_set1_req(OSSL_HTTP_REQ_CTX *rctx, const char *content_type,
                               const ASN1_ITEM *it, const ASN1_VALUE *req);
int OSSL_HTTP_REQ_CTX_nbio(OSSL_HTTP_REQ_CTX *rctx);
int OSSL_HTTP_REQ_CTX_nbio_d2i(OSSL_HTTP_REQ_CTX *rctx,
                               ASN1_VALUE **pval, const ASN1_ITEM *it);
BIO *OSSL_HTTP_REQ_CTX_exchange(OSSL_HTTP_REQ_CTX *rctx);
BIO *OSSL_HTTP_REQ_CTX_get0_mem_bio(const OSSL_HTTP_REQ_CTX *rctx);
size_t OSSL_HTTP_REQ_CTX_get_resp_len(const OSSL_HTTP_REQ_CTX *rctx);
void OSSL_HTTP_REQ_CTX_set_max_response_length(OSSL_HTTP_REQ_CTX *rctx,
                                               unsigned long len);
int OSSL_HTTP_is_alive(const OSSL_HTTP_REQ_CTX *rctx);


typedef BIO *(*OSSL_HTTP_bio_cb_t)(BIO *bio, void *arg, int connect, int detail);
OSSL_HTTP_REQ_CTX *OSSL_HTTP_open(const char *server, const char *port,
                                  const char *proxy, const char *no_proxy,
                                  int use_ssl, BIO *bio, BIO *rbio,
                                  OSSL_HTTP_bio_cb_t bio_update_fn, void *arg,
                                  int buf_size, int overall_timeout);
int OSSL_HTTP_proxy_connect(BIO *bio, const char *server, const char *port,
                            const char *proxyuser, const char *proxypass,
                            int timeout, BIO *bio_err, const char *prog);
int OSSL_HTTP_set1_request(OSSL_HTTP_REQ_CTX *rctx, const char *path,
                           const struct stack_st_CONF_VALUE *headers,
                           const char *content_type, BIO *req,
                           const char *expected_content_type, int expect_asn1,
                           size_t max_resp_len, int timeout, int keep_alive);
BIO *OSSL_HTTP_exchange(OSSL_HTTP_REQ_CTX *rctx, char **redirection_url);
BIO *OSSL_HTTP_get(const char *url, const char *proxy, const char *no_proxy,
                   BIO *bio, BIO *rbio,
                   OSSL_HTTP_bio_cb_t bio_update_fn, void *arg,
                   int buf_size, const struct stack_st_CONF_VALUE *headers,
                   const char *expected_content_type, int expect_asn1,
                   size_t max_resp_len, int timeout);
BIO *OSSL_HTTP_transfer(OSSL_HTTP_REQ_CTX **prctx,
                        const char *server, const char *port,
                        const char *path, int use_ssl,
                        const char *proxy, const char *no_proxy,
                        BIO *bio, BIO *rbio,
                        OSSL_HTTP_bio_cb_t bio_update_fn, void *arg,
                        int buf_size, const struct stack_st_CONF_VALUE *headers,
                        const char *content_type, BIO *req,
                        const char *expected_content_type, int expect_asn1,
                        size_t max_resp_len, int timeout, int keep_alive);
int OSSL_HTTP_close(OSSL_HTTP_REQ_CTX *rctx, int ok);


int OSSL_parse_url(const char *url, char **pscheme, char **puser, char **phost,
                   char **pport, int *pport_num,
                   char **ppath, char **pquery, char **pfrag);
int OSSL_HTTP_parse_url(const char *url, int *pssl, char **puser, char **phost,
                        char **pport, int *pport_num,
                        char **ppath, char **pquery, char **pfrag);
const char *OSSL_HTTP_adapt_proxy(const char *proxy, const char *no_proxy,
                                  const char *server, int use_ssl);
# 556 "include/openssl/x509.h" 2







X509 *d2i_X509_fp(FILE *fp, X509 **x509);
int i2d_X509_fp(FILE *fp, const X509 *x509);
X509_CRL *d2i_X509_CRL_fp(FILE *fp, X509_CRL **crl);
int i2d_X509_CRL_fp(FILE *fp, const X509_CRL *crl);
X509_REQ *d2i_X509_REQ_fp(FILE *fp, X509_REQ **req);
int i2d_X509_REQ_fp(FILE *fp, const X509_REQ *req);

extern RSA *d2i_RSAPrivateKey_fp(FILE *fp, RSA **rsa);
extern int i2d_RSAPrivateKey_fp(FILE *fp, const RSA *rsa);
extern RSA *d2i_RSAPublicKey_fp(FILE *fp, RSA **rsa);
extern int i2d_RSAPublicKey_fp(FILE *fp, const RSA *rsa);
extern RSA *d2i_RSA_PUBKEY_fp(FILE *fp, RSA **rsa);
extern int i2d_RSA_PUBKEY_fp(FILE *fp, const RSA *rsa);



extern DSA *d2i_DSA_PUBKEY_fp(FILE *fp, DSA **dsa);
extern int i2d_DSA_PUBKEY_fp(FILE *fp, const DSA *dsa);
extern DSA *d2i_DSAPrivateKey_fp(FILE *fp, DSA **dsa);
extern int i2d_DSAPrivateKey_fp(FILE *fp, const DSA *dsa);




extern EC_KEY *d2i_EC_PUBKEY_fp(FILE *fp, EC_KEY **eckey);
extern int i2d_EC_PUBKEY_fp(FILE *fp, const EC_KEY *eckey);
extern EC_KEY *d2i_ECPrivateKey_fp(FILE *fp, EC_KEY **eckey);
extern int i2d_ECPrivateKey_fp(FILE *fp, const EC_KEY *eckey);


X509_SIG *d2i_PKCS8_fp(FILE *fp, X509_SIG **p8);
int i2d_PKCS8_fp(FILE *fp, const X509_SIG *p8);
X509_PUBKEY *d2i_X509_PUBKEY_fp(FILE *fp, X509_PUBKEY **xpk);
int i2d_X509_PUBKEY_fp(FILE *fp, const X509_PUBKEY *xpk);
PKCS8_PRIV_KEY_INFO *d2i_PKCS8_PRIV_KEY_INFO_fp(FILE *fp,
                                                PKCS8_PRIV_KEY_INFO **p8inf);
int i2d_PKCS8_PRIV_KEY_INFO_fp(FILE *fp, const PKCS8_PRIV_KEY_INFO *p8inf);
int i2d_PKCS8PrivateKeyInfo_fp(FILE *fp, const EVP_PKEY *key);
int i2d_PrivateKey_fp(FILE *fp, const EVP_PKEY *pkey);
EVP_PKEY *d2i_PrivateKey_ex_fp(FILE *fp, EVP_PKEY **a, OSSL_LIB_CTX *libctx,
                               const char *propq);
EVP_PKEY *d2i_PrivateKey_fp(FILE *fp, EVP_PKEY **a);
int i2d_PUBKEY_fp(FILE *fp, const EVP_PKEY *pkey);
EVP_PKEY *d2i_PUBKEY_fp(FILE *fp, EVP_PKEY **a);


X509 *d2i_X509_bio(BIO *bp, X509 **x509);
int i2d_X509_bio(BIO *bp, const X509 *x509);
X509_CRL *d2i_X509_CRL_bio(BIO *bp, X509_CRL **crl);
int i2d_X509_CRL_bio(BIO *bp, const X509_CRL *crl);
X509_REQ *d2i_X509_REQ_bio(BIO *bp, X509_REQ **req);
int i2d_X509_REQ_bio(BIO *bp, const X509_REQ *req);

extern RSA *d2i_RSAPrivateKey_bio(BIO *bp, RSA **rsa);
extern int i2d_RSAPrivateKey_bio(BIO *bp, const RSA *rsa);
extern RSA *d2i_RSAPublicKey_bio(BIO *bp, RSA **rsa);
extern int i2d_RSAPublicKey_bio(BIO *bp, const RSA *rsa);
extern RSA *d2i_RSA_PUBKEY_bio(BIO *bp, RSA **rsa);
extern int i2d_RSA_PUBKEY_bio(BIO *bp, const RSA *rsa);



extern DSA *d2i_DSA_PUBKEY_bio(BIO *bp, DSA **dsa);
extern int i2d_DSA_PUBKEY_bio(BIO *bp, const DSA *dsa);
extern DSA *d2i_DSAPrivateKey_bio(BIO *bp, DSA **dsa);
extern int i2d_DSAPrivateKey_bio(BIO *bp, const DSA *dsa);





extern EC_KEY *d2i_EC_PUBKEY_bio(BIO *bp, EC_KEY **eckey);
extern int i2d_EC_PUBKEY_bio(BIO *bp, const EC_KEY *eckey);
extern EC_KEY *d2i_ECPrivateKey_bio(BIO *bp, EC_KEY **eckey);
extern int i2d_ECPrivateKey_bio(BIO *bp, const EC_KEY *eckey);



X509_SIG *d2i_PKCS8_bio(BIO *bp, X509_SIG **p8);
int i2d_PKCS8_bio(BIO *bp, const X509_SIG *p8);
X509_PUBKEY *d2i_X509_PUBKEY_bio(BIO *bp, X509_PUBKEY **xpk);
int i2d_X509_PUBKEY_bio(BIO *bp, const X509_PUBKEY *xpk);
PKCS8_PRIV_KEY_INFO *d2i_PKCS8_PRIV_KEY_INFO_bio(BIO *bp,
                                                 PKCS8_PRIV_KEY_INFO **p8inf);
int i2d_PKCS8_PRIV_KEY_INFO_bio(BIO *bp, const PKCS8_PRIV_KEY_INFO *p8inf);
int i2d_PKCS8PrivateKeyInfo_bio(BIO *bp, const EVP_PKEY *key);
int i2d_PrivateKey_bio(BIO *bp, const EVP_PKEY *pkey);
EVP_PKEY *d2i_PrivateKey_ex_bio(BIO *bp, EVP_PKEY **a, OSSL_LIB_CTX *libctx,
                                const char *propq);
EVP_PKEY *d2i_PrivateKey_bio(BIO *bp, EVP_PKEY **a);
int i2d_PUBKEY_bio(BIO *bp, const EVP_PKEY *pkey);
EVP_PKEY *d2i_PUBKEY_bio(BIO *bp, EVP_PKEY **a);

extern X509 *X509_dup(const X509 *a);
extern X509_ALGOR *X509_ALGOR_dup(const X509_ALGOR *a);
extern X509_ATTRIBUTE *X509_ATTRIBUTE_dup(const X509_ATTRIBUTE *a);
extern X509_CRL *X509_CRL_dup(const X509_CRL *a);
extern X509_EXTENSION *X509_EXTENSION_dup(const X509_EXTENSION *a);
extern X509_PUBKEY *X509_PUBKEY_dup(const X509_PUBKEY *a);
extern X509_REQ *X509_REQ_dup(const X509_REQ *a);
extern X509_REVOKED *X509_REVOKED_dup(const X509_REVOKED *a);
int X509_ALGOR_set0(X509_ALGOR *alg, ASN1_OBJECT *aobj, int ptype,
                    void *pval);
void X509_ALGOR_get0(const ASN1_OBJECT **paobj, int *pptype,
                     const void **ppval, const X509_ALGOR *algor);
void X509_ALGOR_set_md(X509_ALGOR *alg, const EVP_MD *md);
int X509_ALGOR_cmp(const X509_ALGOR *a, const X509_ALGOR *b);
int X509_ALGOR_copy(X509_ALGOR *dest, const X509_ALGOR *src);

extern X509_NAME *X509_NAME_dup(const X509_NAME *a);
extern X509_NAME_ENTRY *X509_NAME_ENTRY_dup(const X509_NAME_ENTRY *a);

int X509_cmp_time(const ASN1_TIME *s, time_t *t);
int X509_cmp_current_time(const ASN1_TIME *s);
int X509_cmp_timeframe(const X509_VERIFY_PARAM *vpm,
                       const ASN1_TIME *start, const ASN1_TIME *end);
ASN1_TIME *X509_time_adj(ASN1_TIME *s, long adj, time_t *t);
ASN1_TIME *X509_time_adj_ex(ASN1_TIME *s,
                            int offset_day, long offset_sec, time_t *t);
ASN1_TIME *X509_gmtime_adj(ASN1_TIME *s, long adj);

const char *X509_get_default_cert_area(void);
const char *X509_get_default_cert_dir(void);
const char *X509_get_default_cert_file(void);
const char *X509_get_default_cert_dir_env(void);
const char *X509_get_default_cert_file_env(void);
const char *X509_get_default_private_dir(void);

X509_REQ *X509_to_X509_REQ(X509 *x, EVP_PKEY *pkey, const EVP_MD *md);
X509 *X509_REQ_to_X509(X509_REQ *r, int days, EVP_PKEY *pkey);

extern X509_ALGOR *X509_ALGOR_new(void); extern void X509_ALGOR_free(X509_ALGOR *a); extern X509_ALGOR *d2i_X509_ALGOR(X509_ALGOR **a, const unsigned char **in, long len); extern int i2d_X509_ALGOR(const X509_ALGOR *a, unsigned char **out); extern const ASN1_ITEM * X509_ALGOR_it(void);
extern X509_ALGORS *d2i_X509_ALGORS(X509_ALGORS **a, const unsigned char **in, long len); extern int i2d_X509_ALGORS(const X509_ALGORS *a, unsigned char **out); extern const ASN1_ITEM * X509_ALGORS_it(void);
extern X509_VAL *X509_VAL_new(void); extern void X509_VAL_free(X509_VAL *a); extern X509_VAL *d2i_X509_VAL(X509_VAL **a, const unsigned char **in, long len); extern int i2d_X509_VAL(const X509_VAL *a, unsigned char **out); extern const ASN1_ITEM * X509_VAL_it(void);

extern X509_PUBKEY *X509_PUBKEY_new(void); extern void X509_PUBKEY_free(X509_PUBKEY *a); extern X509_PUBKEY *d2i_X509_PUBKEY(X509_PUBKEY **a, const unsigned char **in, long len); extern int i2d_X509_PUBKEY(const X509_PUBKEY *a, unsigned char **out); extern const ASN1_ITEM * X509_PUBKEY_it(void);

X509_PUBKEY *X509_PUBKEY_new_ex(OSSL_LIB_CTX *libctx, const char *propq);
int X509_PUBKEY_set(X509_PUBKEY **x, EVP_PKEY *pkey);
EVP_PKEY *X509_PUBKEY_get0(const X509_PUBKEY *key);
EVP_PKEY *X509_PUBKEY_get(const X509_PUBKEY *key);
int X509_get_pubkey_parameters(EVP_PKEY *pkey, struct stack_st_X509 *chain);
long X509_get_pathlen(X509 *x);
extern EVP_PKEY *d2i_PUBKEY(EVP_PKEY **a, const unsigned char **in, long len); extern int i2d_PUBKEY(const EVP_PKEY *a, unsigned char **out);
EVP_PKEY *d2i_PUBKEY_ex(EVP_PKEY **a, const unsigned char **pp, long length,
                        OSSL_LIB_CTX *libctx, const char *propq);

extern RSA *d2i_RSA_PUBKEY(RSA **a, const unsigned char **in, long len); extern int i2d_RSA_PUBKEY(const RSA *a, unsigned char **out);



extern DSA *d2i_DSA_PUBKEY(DSA **a, const unsigned char **in, long len); extern int i2d_DSA_PUBKEY(const DSA *a, unsigned char **out);




extern EC_KEY *d2i_EC_PUBKEY(EC_KEY **a, const unsigned char **in, long len); extern int i2d_EC_PUBKEY(const EC_KEY *a, unsigned char **out);



extern X509_SIG *X509_SIG_new(void); extern void X509_SIG_free(X509_SIG *a); extern X509_SIG *d2i_X509_SIG(X509_SIG **a, const unsigned char **in, long len); extern int i2d_X509_SIG(const X509_SIG *a, unsigned char **out); extern const ASN1_ITEM * X509_SIG_it(void);
void X509_SIG_get0(const X509_SIG *sig, const X509_ALGOR **palg,
                   const ASN1_OCTET_STRING **pdigest);
void X509_SIG_getm(X509_SIG *sig, X509_ALGOR **palg,
                   ASN1_OCTET_STRING **pdigest);

extern X509_REQ_INFO *X509_REQ_INFO_new(void); extern void X509_REQ_INFO_free(X509_REQ_INFO *a); extern X509_REQ_INFO *d2i_X509_REQ_INFO(X509_REQ_INFO **a, const unsigned char **in, long len); extern int i2d_X509_REQ_INFO(const X509_REQ_INFO *a, unsigned char **out); extern const ASN1_ITEM * X509_REQ_INFO_it(void);
extern X509_REQ *X509_REQ_new(void); extern void X509_REQ_free(X509_REQ *a); extern X509_REQ *d2i_X509_REQ(X509_REQ **a, const unsigned char **in, long len); extern int i2d_X509_REQ(const X509_REQ *a, unsigned char **out); extern const ASN1_ITEM * X509_REQ_it(void);
X509_REQ *X509_REQ_new_ex(OSSL_LIB_CTX *libctx, const char *propq);

extern X509_ATTRIBUTE *X509_ATTRIBUTE_new(void); extern void X509_ATTRIBUTE_free(X509_ATTRIBUTE *a); extern X509_ATTRIBUTE *d2i_X509_ATTRIBUTE(X509_ATTRIBUTE **a, const unsigned char **in, long len); extern int i2d_X509_ATTRIBUTE(const X509_ATTRIBUTE *a, unsigned char **out); extern const ASN1_ITEM * X509_ATTRIBUTE_it(void);
X509_ATTRIBUTE *X509_ATTRIBUTE_create(int nid, int atrtype, void *value);

extern X509_EXTENSION *X509_EXTENSION_new(void); extern void X509_EXTENSION_free(X509_EXTENSION *a); extern X509_EXTENSION *d2i_X509_EXTENSION(X509_EXTENSION **a, const unsigned char **in, long len); extern int i2d_X509_EXTENSION(const X509_EXTENSION *a, unsigned char **out); extern const ASN1_ITEM * X509_EXTENSION_it(void);
extern X509_EXTENSIONS *d2i_X509_EXTENSIONS(X509_EXTENSIONS **a, const unsigned char **in, long len); extern int i2d_X509_EXTENSIONS(const X509_EXTENSIONS *a, unsigned char **out); extern const ASN1_ITEM * X509_EXTENSIONS_it(void);

extern X509_NAME_ENTRY *X509_NAME_ENTRY_new(void); extern void X509_NAME_ENTRY_free(X509_NAME_ENTRY *a); extern X509_NAME_ENTRY *d2i_X509_NAME_ENTRY(X509_NAME_ENTRY **a, const unsigned char **in, long len); extern int i2d_X509_NAME_ENTRY(const X509_NAME_ENTRY *a, unsigned char **out); extern const ASN1_ITEM * X509_NAME_ENTRY_it(void);

extern X509_NAME *X509_NAME_new(void); extern void X509_NAME_free(X509_NAME *a); extern X509_NAME *d2i_X509_NAME(X509_NAME **a, const unsigned char **in, long len); extern int i2d_X509_NAME(const X509_NAME *a, unsigned char **out); extern const ASN1_ITEM * X509_NAME_it(void);

int X509_NAME_set(X509_NAME **xn, const X509_NAME *name);

extern X509_CINF *X509_CINF_new(void); extern void X509_CINF_free(X509_CINF *a); extern X509_CINF *d2i_X509_CINF(X509_CINF **a, const unsigned char **in, long len); extern int i2d_X509_CINF(const X509_CINF *a, unsigned char **out); extern const ASN1_ITEM * X509_CINF_it(void);
extern X509 *X509_new(void); extern void X509_free(X509 *a); extern X509 *d2i_X509(X509 **a, const unsigned char **in, long len); extern int i2d_X509(const X509 *a, unsigned char **out); extern const ASN1_ITEM * X509_it(void);
X509 *X509_new_ex(OSSL_LIB_CTX *libctx, const char *propq);
extern X509_CERT_AUX *X509_CERT_AUX_new(void); extern void X509_CERT_AUX_free(X509_CERT_AUX *a); extern X509_CERT_AUX *d2i_X509_CERT_AUX(X509_CERT_AUX **a, const unsigned char **in, long len); extern int i2d_X509_CERT_AUX(const X509_CERT_AUX *a, unsigned char **out); extern const ASN1_ITEM * X509_CERT_AUX_it(void);



int X509_set_ex_data(X509 *r, int idx, void *arg);
void *X509_get_ex_data(const X509 *r, int idx);
extern X509 *d2i_X509_AUX(X509 **a, const unsigned char **in, long len); extern int i2d_X509_AUX(const X509 *a, unsigned char **out);

int i2d_re_X509_tbs(X509 *x, unsigned char **pp);

int X509_SIG_INFO_get(const X509_SIG_INFO *siginf, int *mdnid, int *pknid,
                      int *secbits, uint32_t *flags);
void X509_SIG_INFO_set(X509_SIG_INFO *siginf, int mdnid, int pknid,
                       int secbits, uint32_t flags);

int X509_get_signature_info(X509 *x, int *mdnid, int *pknid, int *secbits,
                            uint32_t *flags);

void X509_get0_signature(const ASN1_BIT_STRING **psig,
                         const X509_ALGOR **palg, const X509 *x);
int X509_get_signature_nid(const X509 *x);

void X509_set0_distinguishing_id(X509 *x, ASN1_OCTET_STRING *d_id);
ASN1_OCTET_STRING *X509_get0_distinguishing_id(X509 *x);
void X509_REQ_set0_distinguishing_id(X509_REQ *x, ASN1_OCTET_STRING *d_id);
ASN1_OCTET_STRING *X509_REQ_get0_distinguishing_id(X509_REQ *x);

int X509_alias_set1(X509 *x, const unsigned char *name, int len);
int X509_keyid_set1(X509 *x, const unsigned char *id, int len);
unsigned char *X509_alias_get0(X509 *x, int *len);
unsigned char *X509_keyid_get0(X509 *x, int *len);

extern X509_REVOKED *X509_REVOKED_new(void); extern void X509_REVOKED_free(X509_REVOKED *a); extern X509_REVOKED *d2i_X509_REVOKED(X509_REVOKED **a, const unsigned char **in, long len); extern int i2d_X509_REVOKED(const X509_REVOKED *a, unsigned char **out); extern const ASN1_ITEM * X509_REVOKED_it(void);
extern X509_CRL_INFO *X509_CRL_INFO_new(void); extern void X509_CRL_INFO_free(X509_CRL_INFO *a); extern X509_CRL_INFO *d2i_X509_CRL_INFO(X509_CRL_INFO **a, const unsigned char **in, long len); extern int i2d_X509_CRL_INFO(const X509_CRL_INFO *a, unsigned char **out); extern const ASN1_ITEM * X509_CRL_INFO_it(void);
extern X509_CRL *X509_CRL_new(void); extern void X509_CRL_free(X509_CRL *a); extern X509_CRL *d2i_X509_CRL(X509_CRL **a, const unsigned char **in, long len); extern int i2d_X509_CRL(const X509_CRL *a, unsigned char **out); extern const ASN1_ITEM * X509_CRL_it(void);
X509_CRL *X509_CRL_new_ex(OSSL_LIB_CTX *libctx, const char *propq);

int X509_CRL_add0_revoked(X509_CRL *crl, X509_REVOKED *rev);
int X509_CRL_get0_by_serial(X509_CRL *crl,
                            X509_REVOKED **ret, const ASN1_INTEGER *serial);
int X509_CRL_get0_by_cert(X509_CRL *crl, X509_REVOKED **ret, X509 *x);

X509_PKEY *X509_PKEY_new(void);
void X509_PKEY_free(X509_PKEY *a);

extern NETSCAPE_SPKI *NETSCAPE_SPKI_new(void); extern void NETSCAPE_SPKI_free(NETSCAPE_SPKI *a); extern NETSCAPE_SPKI *d2i_NETSCAPE_SPKI(NETSCAPE_SPKI **a, const unsigned char **in, long len); extern int i2d_NETSCAPE_SPKI(const NETSCAPE_SPKI *a, unsigned char **out); extern const ASN1_ITEM * NETSCAPE_SPKI_it(void);
extern NETSCAPE_SPKAC *NETSCAPE_SPKAC_new(void); extern void NETSCAPE_SPKAC_free(NETSCAPE_SPKAC *a); extern NETSCAPE_SPKAC *d2i_NETSCAPE_SPKAC(NETSCAPE_SPKAC **a, const unsigned char **in, long len); extern int i2d_NETSCAPE_SPKAC(const NETSCAPE_SPKAC *a, unsigned char **out); extern const ASN1_ITEM * NETSCAPE_SPKAC_it(void);
extern NETSCAPE_CERT_SEQUENCE *NETSCAPE_CERT_SEQUENCE_new(void); extern void NETSCAPE_CERT_SEQUENCE_free(NETSCAPE_CERT_SEQUENCE *a); extern NETSCAPE_CERT_SEQUENCE *d2i_NETSCAPE_CERT_SEQUENCE(NETSCAPE_CERT_SEQUENCE **a, const unsigned char **in, long len); extern int i2d_NETSCAPE_CERT_SEQUENCE(const NETSCAPE_CERT_SEQUENCE *a, unsigned char **out); extern const ASN1_ITEM * NETSCAPE_CERT_SEQUENCE_it(void);

X509_INFO *X509_INFO_new(void);
void X509_INFO_free(X509_INFO *a);
char *X509_NAME_oneline(const X509_NAME *a, char *buf, int size);


extern
int ASN1_verify(i2d_of_void *i2d, X509_ALGOR *algor1,
                ASN1_BIT_STRING *signature, char *data, EVP_PKEY *pkey);
extern
int ASN1_digest(i2d_of_void *i2d, const EVP_MD *type, char *data,
                unsigned char *md, unsigned int *len);
extern
int ASN1_sign(i2d_of_void *i2d, X509_ALGOR *algor1, X509_ALGOR *algor2,
              ASN1_BIT_STRING *signature, char *data, EVP_PKEY *pkey,
              const EVP_MD *type);

int ASN1_item_digest(const ASN1_ITEM *it, const EVP_MD *type, void *data,
                     unsigned char *md, unsigned int *len);
int ASN1_item_verify(const ASN1_ITEM *it, const X509_ALGOR *alg,
                     const ASN1_BIT_STRING *signature, const void *data,
                     EVP_PKEY *pkey);
int ASN1_item_verify_ctx(const ASN1_ITEM *it, const X509_ALGOR *alg,
                         const ASN1_BIT_STRING *signature, const void *data,
                         EVP_MD_CTX *ctx);
int ASN1_item_sign(const ASN1_ITEM *it, X509_ALGOR *algor1, X509_ALGOR *algor2,
                   ASN1_BIT_STRING *signature, const void *data,
                   EVP_PKEY *pkey, const EVP_MD *md);
int ASN1_item_sign_ctx(const ASN1_ITEM *it, X509_ALGOR *algor1,
                       X509_ALGOR *algor2, ASN1_BIT_STRING *signature,
                       const void *data, EVP_MD_CTX *ctx);





long X509_get_version(const X509 *x);
int X509_set_version(X509 *x, long version);
int X509_set_serialNumber(X509 *x, ASN1_INTEGER *serial);
ASN1_INTEGER *X509_get_serialNumber(X509 *x);
const ASN1_INTEGER *X509_get0_serialNumber(const X509 *x);
int X509_set_issuer_name(X509 *x, const X509_NAME *name);
X509_NAME *X509_get_issuer_name(const X509 *a);
int X509_set_subject_name(X509 *x, const X509_NAME *name);
X509_NAME *X509_get_subject_name(const X509 *a);
const ASN1_TIME * X509_get0_notBefore(const X509 *x);
ASN1_TIME *X509_getm_notBefore(const X509 *x);
int X509_set1_notBefore(X509 *x, const ASN1_TIME *tm);
const ASN1_TIME *X509_get0_notAfter(const X509 *x);
ASN1_TIME *X509_getm_notAfter(const X509 *x);
int X509_set1_notAfter(X509 *x, const ASN1_TIME *tm);
int X509_set_pubkey(X509 *x, EVP_PKEY *pkey);
int X509_up_ref(X509 *x);
int X509_get_signature_type(const X509 *x);
# 863 "include/openssl/x509.h"
X509_PUBKEY *X509_get_X509_PUBKEY(const X509 *x);
const struct stack_st_X509_EXTENSION *X509_get0_extensions(const X509 *x);
void X509_get0_uids(const X509 *x, const ASN1_BIT_STRING **piuid,
                    const ASN1_BIT_STRING **psuid);
const X509_ALGOR *X509_get0_tbs_sigalg(const X509 *x);

EVP_PKEY *X509_get0_pubkey(const X509 *x);
EVP_PKEY *X509_get_pubkey(X509 *x);
ASN1_BIT_STRING *X509_get0_pubkey_bitstr(const X509 *x);



long X509_REQ_get_version(const X509_REQ *req);
int X509_REQ_set_version(X509_REQ *x, long version);
X509_NAME *X509_REQ_get_subject_name(const X509_REQ *req);
int X509_REQ_set_subject_name(X509_REQ *req, const X509_NAME *name);
void X509_REQ_get0_signature(const X509_REQ *req, const ASN1_BIT_STRING **psig,
                             const X509_ALGOR **palg);
void X509_REQ_set0_signature(X509_REQ *req, ASN1_BIT_STRING *psig);
int X509_REQ_set1_signature_algo(X509_REQ *req, X509_ALGOR *palg);
int X509_REQ_get_signature_nid(const X509_REQ *req);
int i2d_re_X509_REQ_tbs(X509_REQ *req, unsigned char **pp);
int X509_REQ_set_pubkey(X509_REQ *x, EVP_PKEY *pkey);
EVP_PKEY *X509_REQ_get_pubkey(X509_REQ *req);
EVP_PKEY *X509_REQ_get0_pubkey(X509_REQ *req);
X509_PUBKEY *X509_REQ_get_X509_PUBKEY(X509_REQ *req);
int X509_REQ_extension_nid(int nid);
int *X509_REQ_get_extension_nids(void);
void X509_REQ_set_extension_nids(int *nids);
struct stack_st_X509_EXTENSION *X509_REQ_get_extensions(X509_REQ *req);
int X509_REQ_add_extensions_nid(X509_REQ *req,
                                const struct stack_st_X509_EXTENSION *exts, int nid);
int X509_REQ_add_extensions(X509_REQ *req, const struct stack_st_X509_EXTENSION *ext);
int X509_REQ_get_attr_count(const X509_REQ *req);
int X509_REQ_get_attr_by_NID(const X509_REQ *req, int nid, int lastpos);
int X509_REQ_get_attr_by_OBJ(const X509_REQ *req, const ASN1_OBJECT *obj,
                             int lastpos);
X509_ATTRIBUTE *X509_REQ_get_attr(const X509_REQ *req, int loc);
X509_ATTRIBUTE *X509_REQ_delete_attr(X509_REQ *req, int loc);
int X509_REQ_add1_attr(X509_REQ *req, X509_ATTRIBUTE *attr);
int X509_REQ_add1_attr_by_OBJ(X509_REQ *req,
                              const ASN1_OBJECT *obj, int type,
                              const unsigned char *bytes, int len);
int X509_REQ_add1_attr_by_NID(X509_REQ *req,
                              int nid, int type,
                              const unsigned char *bytes, int len);
int X509_REQ_add1_attr_by_txt(X509_REQ *req,
                              const char *attrname, int type,
                              const unsigned char *bytes, int len);




int X509_CRL_set_version(X509_CRL *x, long version);
int X509_CRL_set_issuer_name(X509_CRL *x, const X509_NAME *name);
int X509_CRL_set1_lastUpdate(X509_CRL *x, const ASN1_TIME *tm);
int X509_CRL_set1_nextUpdate(X509_CRL *x, const ASN1_TIME *tm);
int X509_CRL_sort(X509_CRL *crl);
int X509_CRL_up_ref(X509_CRL *crl);






long X509_CRL_get_version(const X509_CRL *crl);
const ASN1_TIME *X509_CRL_get0_lastUpdate(const X509_CRL *crl);
const ASN1_TIME *X509_CRL_get0_nextUpdate(const X509_CRL *crl);

extern ASN1_TIME *X509_CRL_get_lastUpdate(X509_CRL *crl);
extern ASN1_TIME *X509_CRL_get_nextUpdate(X509_CRL *crl);

X509_NAME *X509_CRL_get_issuer(const X509_CRL *crl);
const struct stack_st_X509_EXTENSION *X509_CRL_get0_extensions(const X509_CRL *crl);
struct stack_st_X509_REVOKED *X509_CRL_get_REVOKED(X509_CRL *crl);
void X509_CRL_get0_signature(const X509_CRL *crl, const ASN1_BIT_STRING **psig,
                             const X509_ALGOR **palg);
int X509_CRL_get_signature_nid(const X509_CRL *crl);
int i2d_re_X509_CRL_tbs(X509_CRL *req, unsigned char **pp);

const ASN1_INTEGER *X509_REVOKED_get0_serialNumber(const X509_REVOKED *x);
int X509_REVOKED_set_serialNumber(X509_REVOKED *x, ASN1_INTEGER *serial);
const ASN1_TIME *X509_REVOKED_get0_revocationDate(const X509_REVOKED *x);
int X509_REVOKED_set_revocationDate(X509_REVOKED *r, ASN1_TIME *tm);
const struct stack_st_X509_EXTENSION *
X509_REVOKED_get0_extensions(const X509_REVOKED *r);

X509_CRL *X509_CRL_diff(X509_CRL *base, X509_CRL *newer,
                        EVP_PKEY *skey, const EVP_MD *md, unsigned int flags);

int X509_REQ_check_private_key(X509_REQ *x509, EVP_PKEY *pkey);

int X509_check_private_key(const X509 *x509, const EVP_PKEY *pkey);
int X509_chain_check_suiteb(int *perror_depth,
                            X509 *x, struct stack_st_X509 *chain,
                            unsigned long flags);
int X509_CRL_check_suiteb(X509_CRL *crl, EVP_PKEY *pk, unsigned long flags);
struct stack_st_X509 *X509_chain_up_ref(struct stack_st_X509 *chain);

int X509_issuer_and_serial_cmp(const X509 *a, const X509 *b);
unsigned long X509_issuer_and_serial_hash(X509 *a);

int X509_issuer_name_cmp(const X509 *a, const X509 *b);
unsigned long X509_issuer_name_hash(X509 *a);

int X509_subject_name_cmp(const X509 *a, const X509 *b);
unsigned long X509_subject_name_hash(X509 *x);


unsigned long X509_issuer_name_hash_old(X509 *a);
unsigned long X509_subject_name_hash_old(X509 *x);







int X509_add_cert(struct stack_st_X509 *sk, X509 *cert, int flags);
int X509_add_certs(struct stack_st_X509 *sk, struct stack_st_X509 *certs, int flags);

int X509_cmp(const X509 *a, const X509 *b);
int X509_NAME_cmp(const X509_NAME *a, const X509_NAME *b);


extern int X509_certificate_type(const X509 *x,
                                                const EVP_PKEY *pubkey);

unsigned long X509_NAME_hash_ex(const X509_NAME *x, OSSL_LIB_CTX *libctx,
                                const char *propq, int *ok);
unsigned long X509_NAME_hash_old(const X509_NAME *x);

int X509_CRL_cmp(const X509_CRL *a, const X509_CRL *b);
int X509_CRL_match(const X509_CRL *a, const X509_CRL *b);
int X509_aux_print(BIO *out, X509 *x, int indent);

int X509_print_ex_fp(FILE *bp, X509 *x, unsigned long nmflag,
                     unsigned long cflag);
int X509_print_fp(FILE *bp, X509 *x);
int X509_CRL_print_fp(FILE *bp, X509_CRL *x);
int X509_REQ_print_fp(FILE *bp, X509_REQ *req);
int X509_NAME_print_ex_fp(FILE *fp, const X509_NAME *nm, int indent,
                          unsigned long flags);


int X509_NAME_print(BIO *bp, const X509_NAME *name, int obase);
int X509_NAME_print_ex(BIO *out, const X509_NAME *nm, int indent,
                       unsigned long flags);
int X509_print_ex(BIO *bp, X509 *x, unsigned long nmflag,
                  unsigned long cflag);
int X509_print(BIO *bp, X509 *x);
int X509_ocspid_print(BIO *bp, X509 *x);
int X509_CRL_print_ex(BIO *out, X509_CRL *x, unsigned long nmflag);
int X509_CRL_print(BIO *bp, X509_CRL *x);
int X509_REQ_print_ex(BIO *bp, X509_REQ *x, unsigned long nmflag,
                      unsigned long cflag);
int X509_REQ_print(BIO *bp, X509_REQ *req);

int X509_NAME_entry_count(const X509_NAME *name);
int X509_NAME_get_text_by_NID(const X509_NAME *name, int nid,
                              char *buf, int len);
int X509_NAME_get_text_by_OBJ(const X509_NAME *name, const ASN1_OBJECT *obj,
                              char *buf, int len);





int X509_NAME_get_index_by_NID(const X509_NAME *name, int nid, int lastpos);
int X509_NAME_get_index_by_OBJ(const X509_NAME *name, const ASN1_OBJECT *obj,
                               int lastpos);
X509_NAME_ENTRY *X509_NAME_get_entry(const X509_NAME *name, int loc);
X509_NAME_ENTRY *X509_NAME_delete_entry(X509_NAME *name, int loc);
int X509_NAME_add_entry(X509_NAME *name, const X509_NAME_ENTRY *ne,
                        int loc, int set);
int X509_NAME_add_entry_by_OBJ(X509_NAME *name, const ASN1_OBJECT *obj, int type,
                               const unsigned char *bytes, int len, int loc,
                               int set);
int X509_NAME_add_entry_by_NID(X509_NAME *name, int nid, int type,
                               const unsigned char *bytes, int len, int loc,
                               int set);
X509_NAME_ENTRY *X509_NAME_ENTRY_create_by_txt(X509_NAME_ENTRY **ne,
                                               const char *field, int type,
                                               const unsigned char *bytes,
                                               int len);
X509_NAME_ENTRY *X509_NAME_ENTRY_create_by_NID(X509_NAME_ENTRY **ne, int nid,
                                               int type,
                                               const unsigned char *bytes,
                                               int len);
int X509_NAME_add_entry_by_txt(X509_NAME *name, const char *field, int type,
                               const unsigned char *bytes, int len, int loc,
                               int set);
X509_NAME_ENTRY *X509_NAME_ENTRY_create_by_OBJ(X509_NAME_ENTRY **ne,
                                               const ASN1_OBJECT *obj, int type,
                                               const unsigned char *bytes,
                                               int len);
int X509_NAME_ENTRY_set_object(X509_NAME_ENTRY *ne, const ASN1_OBJECT *obj);
int X509_NAME_ENTRY_set_data(X509_NAME_ENTRY *ne, int type,
                             const unsigned char *bytes, int len);
ASN1_OBJECT *X509_NAME_ENTRY_get_object(const X509_NAME_ENTRY *ne);
ASN1_STRING * X509_NAME_ENTRY_get_data(const X509_NAME_ENTRY *ne);
int X509_NAME_ENTRY_set(const X509_NAME_ENTRY *ne);

int X509_NAME_get0_der(const X509_NAME *nm, const unsigned char **pder,
                       size_t *pderlen);

int X509v3_get_ext_count(const struct stack_st_X509_EXTENSION *x);
int X509v3_get_ext_by_NID(const struct stack_st_X509_EXTENSION *x,
                          int nid, int lastpos);
int X509v3_get_ext_by_OBJ(const struct stack_st_X509_EXTENSION *x,
                          const ASN1_OBJECT *obj, int lastpos);
int X509v3_get_ext_by_critical(const struct stack_st_X509_EXTENSION *x,
                               int crit, int lastpos);
X509_EXTENSION *X509v3_get_ext(const struct stack_st_X509_EXTENSION *x, int loc);
X509_EXTENSION *X509v3_delete_ext(struct stack_st_X509_EXTENSION *x, int loc);
struct stack_st_X509_EXTENSION *X509v3_add_ext(struct stack_st_X509_EXTENSION **x,
                                         X509_EXTENSION *ex, int loc);

int X509_get_ext_count(const X509 *x);
int X509_get_ext_by_NID(const X509 *x, int nid, int lastpos);
int X509_get_ext_by_OBJ(const X509 *x, const ASN1_OBJECT *obj, int lastpos);
int X509_get_ext_by_critical(const X509 *x, int crit, int lastpos);
X509_EXTENSION *X509_get_ext(const X509 *x, int loc);
X509_EXTENSION *X509_delete_ext(X509 *x, int loc);
int X509_add_ext(X509 *x, X509_EXTENSION *ex, int loc);
void *X509_get_ext_d2i(const X509 *x, int nid, int *crit, int *idx);
int X509_add1_ext_i2d(X509 *x, int nid, void *value, int crit,
                      unsigned long flags);

int X509_CRL_get_ext_count(const X509_CRL *x);
int X509_CRL_get_ext_by_NID(const X509_CRL *x, int nid, int lastpos);
int X509_CRL_get_ext_by_OBJ(const X509_CRL *x, const ASN1_OBJECT *obj,
                            int lastpos);
int X509_CRL_get_ext_by_critical(const X509_CRL *x, int crit, int lastpos);
X509_EXTENSION *X509_CRL_get_ext(const X509_CRL *x, int loc);
X509_EXTENSION *X509_CRL_delete_ext(X509_CRL *x, int loc);
int X509_CRL_add_ext(X509_CRL *x, X509_EXTENSION *ex, int loc);
void *X509_CRL_get_ext_d2i(const X509_CRL *x, int nid, int *crit, int *idx);
int X509_CRL_add1_ext_i2d(X509_CRL *x, int nid, void *value, int crit,
                          unsigned long flags);

int X509_REVOKED_get_ext_count(const X509_REVOKED *x);
int X509_REVOKED_get_ext_by_NID(const X509_REVOKED *x, int nid, int lastpos);
int X509_REVOKED_get_ext_by_OBJ(const X509_REVOKED *x, const ASN1_OBJECT *obj,
                                int lastpos);
int X509_REVOKED_get_ext_by_critical(const X509_REVOKED *x, int crit,
                                     int lastpos);
X509_EXTENSION *X509_REVOKED_get_ext(const X509_REVOKED *x, int loc);
X509_EXTENSION *X509_REVOKED_delete_ext(X509_REVOKED *x, int loc);
int X509_REVOKED_add_ext(X509_REVOKED *x, X509_EXTENSION *ex, int loc);
void *X509_REVOKED_get_ext_d2i(const X509_REVOKED *x, int nid, int *crit,
                               int *idx);
int X509_REVOKED_add1_ext_i2d(X509_REVOKED *x, int nid, void *value, int crit,
                              unsigned long flags);

X509_EXTENSION *X509_EXTENSION_create_by_NID(X509_EXTENSION **ex,
                                             int nid, int crit,
                                             ASN1_OCTET_STRING *data);
X509_EXTENSION *X509_EXTENSION_create_by_OBJ(X509_EXTENSION **ex,
                                             const ASN1_OBJECT *obj, int crit,
                                             ASN1_OCTET_STRING *data);
int X509_EXTENSION_set_object(X509_EXTENSION *ex, const ASN1_OBJECT *obj);
int X509_EXTENSION_set_critical(X509_EXTENSION *ex, int crit);
int X509_EXTENSION_set_data(X509_EXTENSION *ex, ASN1_OCTET_STRING *data);
ASN1_OBJECT *X509_EXTENSION_get_object(X509_EXTENSION *ex);
ASN1_OCTET_STRING *X509_EXTENSION_get_data(X509_EXTENSION *ne);
int X509_EXTENSION_get_critical(const X509_EXTENSION *ex);

int X509at_get_attr_count(const struct stack_st_X509_ATTRIBUTE *x);
int X509at_get_attr_by_NID(const struct stack_st_X509_ATTRIBUTE *x, int nid,
                           int lastpos);
int X509at_get_attr_by_OBJ(const struct stack_st_X509_ATTRIBUTE *sk,
                           const ASN1_OBJECT *obj, int lastpos);
X509_ATTRIBUTE *X509at_get_attr(const struct stack_st_X509_ATTRIBUTE *x, int loc);
X509_ATTRIBUTE *X509at_delete_attr(struct stack_st_X509_ATTRIBUTE *x, int loc);
struct stack_st_X509_ATTRIBUTE *X509at_add1_attr(struct stack_st_X509_ATTRIBUTE **x,
                                           X509_ATTRIBUTE *attr);
struct stack_st_X509_ATTRIBUTE *X509at_add1_attr_by_OBJ(struct stack_st_X509_ATTRIBUTE
                                                  **x, const ASN1_OBJECT *obj,
                                                  int type,
                                                  const unsigned char *bytes,
                                                  int len);
struct stack_st_X509_ATTRIBUTE *X509at_add1_attr_by_NID(struct stack_st_X509_ATTRIBUTE
                                                  **x, int nid, int type,
                                                  const unsigned char *bytes,
                                                  int len);
struct stack_st_X509_ATTRIBUTE *X509at_add1_attr_by_txt(struct stack_st_X509_ATTRIBUTE
                                                  **x, const char *attrname,
                                                  int type,
                                                  const unsigned char *bytes,
                                                  int len);
void *X509at_get0_data_by_OBJ(const struct stack_st_X509_ATTRIBUTE *x,
                              const ASN1_OBJECT *obj, int lastpos, int type);
X509_ATTRIBUTE *X509_ATTRIBUTE_create_by_NID(X509_ATTRIBUTE **attr, int nid,
                                             int atrtype, const void *data,
                                             int len);
X509_ATTRIBUTE *X509_ATTRIBUTE_create_by_OBJ(X509_ATTRIBUTE **attr,
                                             const ASN1_OBJECT *obj,
                                             int atrtype, const void *data,
                                             int len);
X509_ATTRIBUTE *X509_ATTRIBUTE_create_by_txt(X509_ATTRIBUTE **attr,
                                             const char *atrname, int type,
                                             const unsigned char *bytes,
                                             int len);
int X509_ATTRIBUTE_set1_object(X509_ATTRIBUTE *attr, const ASN1_OBJECT *obj);
int X509_ATTRIBUTE_set1_data(X509_ATTRIBUTE *attr, int attrtype,
                             const void *data, int len);
void *X509_ATTRIBUTE_get0_data(X509_ATTRIBUTE *attr, int idx, int atrtype,
                               void *data);
int X509_ATTRIBUTE_count(const X509_ATTRIBUTE *attr);
ASN1_OBJECT *X509_ATTRIBUTE_get0_object(X509_ATTRIBUTE *attr);
ASN1_TYPE *X509_ATTRIBUTE_get0_type(X509_ATTRIBUTE *attr, int idx);

int EVP_PKEY_get_attr_count(const EVP_PKEY *key);
int EVP_PKEY_get_attr_by_NID(const EVP_PKEY *key, int nid, int lastpos);
int EVP_PKEY_get_attr_by_OBJ(const EVP_PKEY *key, const ASN1_OBJECT *obj,
                             int lastpos);
X509_ATTRIBUTE *EVP_PKEY_get_attr(const EVP_PKEY *key, int loc);
X509_ATTRIBUTE *EVP_PKEY_delete_attr(EVP_PKEY *key, int loc);
int EVP_PKEY_add1_attr(EVP_PKEY *key, X509_ATTRIBUTE *attr);
int EVP_PKEY_add1_attr_by_OBJ(EVP_PKEY *key,
                              const ASN1_OBJECT *obj, int type,
                              const unsigned char *bytes, int len);
int EVP_PKEY_add1_attr_by_NID(EVP_PKEY *key,
                              int nid, int type,
                              const unsigned char *bytes, int len);
int EVP_PKEY_add1_attr_by_txt(EVP_PKEY *key,
                              const char *attrname, int type,
                              const unsigned char *bytes, int len);


X509 *X509_find_by_issuer_and_serial(struct stack_st_X509 *sk, const X509_NAME *name,
                                     const ASN1_INTEGER *serial);
X509 *X509_find_by_subject(struct stack_st_X509 *sk, const X509_NAME *name);

extern PBEPARAM *PBEPARAM_new(void); extern void PBEPARAM_free(PBEPARAM *a); extern PBEPARAM *d2i_PBEPARAM(PBEPARAM **a, const unsigned char **in, long len); extern int i2d_PBEPARAM(const PBEPARAM *a, unsigned char **out); extern const ASN1_ITEM * PBEPARAM_it(void);
extern PBE2PARAM *PBE2PARAM_new(void); extern void PBE2PARAM_free(PBE2PARAM *a); extern PBE2PARAM *d2i_PBE2PARAM(PBE2PARAM **a, const unsigned char **in, long len); extern int i2d_PBE2PARAM(const PBE2PARAM *a, unsigned char **out); extern const ASN1_ITEM * PBE2PARAM_it(void);
extern PBKDF2PARAM *PBKDF2PARAM_new(void); extern void PBKDF2PARAM_free(PBKDF2PARAM *a); extern PBKDF2PARAM *d2i_PBKDF2PARAM(PBKDF2PARAM **a, const unsigned char **in, long len); extern int i2d_PBKDF2PARAM(const PBKDF2PARAM *a, unsigned char **out); extern const ASN1_ITEM * PBKDF2PARAM_it(void);

extern SCRYPT_PARAMS *SCRYPT_PARAMS_new(void); extern void SCRYPT_PARAMS_free(SCRYPT_PARAMS *a); extern SCRYPT_PARAMS *d2i_SCRYPT_PARAMS(SCRYPT_PARAMS **a, const unsigned char **in, long len); extern int i2d_SCRYPT_PARAMS(const SCRYPT_PARAMS *a, unsigned char **out); extern const ASN1_ITEM * SCRYPT_PARAMS_it(void);


int PKCS5_pbe_set0_algor(X509_ALGOR *algor, int alg, int iter,
                         const unsigned char *salt, int saltlen);
int PKCS5_pbe_set0_algor_ex(X509_ALGOR *algor, int alg, int iter,
                            const unsigned char *salt, int saltlen,
                            OSSL_LIB_CTX *libctx);

X509_ALGOR *PKCS5_pbe_set(int alg, int iter,
                          const unsigned char *salt, int saltlen);
X509_ALGOR *PKCS5_pbe_set_ex(int alg, int iter,
                             const unsigned char *salt, int saltlen,
                             OSSL_LIB_CTX *libctx);

X509_ALGOR *PKCS5_pbe2_set(const EVP_CIPHER *cipher, int iter,
                           unsigned char *salt, int saltlen);
X509_ALGOR *PKCS5_pbe2_set_iv(const EVP_CIPHER *cipher, int iter,
                              unsigned char *salt, int saltlen,
                              unsigned char *aiv, int prf_nid);
X509_ALGOR *PKCS5_pbe2_set_iv_ex(const EVP_CIPHER *cipher, int iter,
                                 unsigned char *salt, int saltlen,
                                 unsigned char *aiv, int prf_nid,
                                 OSSL_LIB_CTX *libctx);


X509_ALGOR *PKCS5_pbe2_set_scrypt(const EVP_CIPHER *cipher,
                                  const unsigned char *salt, int saltlen,
                                  unsigned char *aiv, uint64_t N, uint64_t r,
                                  uint64_t p);


X509_ALGOR *PKCS5_pbkdf2_set(int iter, unsigned char *salt, int saltlen,
                             int prf_nid, int keylen);
X509_ALGOR *PKCS5_pbkdf2_set_ex(int iter, unsigned char *salt, int saltlen,
                                int prf_nid, int keylen,
                                OSSL_LIB_CTX *libctx);



extern PKCS8_PRIV_KEY_INFO *PKCS8_PRIV_KEY_INFO_new(void); extern void PKCS8_PRIV_KEY_INFO_free(PKCS8_PRIV_KEY_INFO *a); extern PKCS8_PRIV_KEY_INFO *d2i_PKCS8_PRIV_KEY_INFO(PKCS8_PRIV_KEY_INFO **a, const unsigned char **in, long len); extern int i2d_PKCS8_PRIV_KEY_INFO(const PKCS8_PRIV_KEY_INFO *a, unsigned char **out); extern const ASN1_ITEM * PKCS8_PRIV_KEY_INFO_it(void);

EVP_PKEY *EVP_PKCS82PKEY(const PKCS8_PRIV_KEY_INFO *p8);
EVP_PKEY *EVP_PKCS82PKEY_ex(const PKCS8_PRIV_KEY_INFO *p8, OSSL_LIB_CTX *libctx,
                            const char *propq);
PKCS8_PRIV_KEY_INFO *EVP_PKEY2PKCS8(const EVP_PKEY *pkey);

int PKCS8_pkey_set0(PKCS8_PRIV_KEY_INFO *priv, ASN1_OBJECT *aobj,
                    int version, int ptype, void *pval,
                    unsigned char *penc, int penclen);
int PKCS8_pkey_get0(const ASN1_OBJECT **ppkalg,
                    const unsigned char **pk, int *ppklen,
                    const X509_ALGOR **pa, const PKCS8_PRIV_KEY_INFO *p8);

const struct stack_st_X509_ATTRIBUTE *
PKCS8_pkey_get0_attrs(const PKCS8_PRIV_KEY_INFO *p8);
int PKCS8_pkey_add1_attr(PKCS8_PRIV_KEY_INFO *p8, X509_ATTRIBUTE *attr);
int PKCS8_pkey_add1_attr_by_NID(PKCS8_PRIV_KEY_INFO *p8, int nid, int type,
                                const unsigned char *bytes, int len);
int PKCS8_pkey_add1_attr_by_OBJ(PKCS8_PRIV_KEY_INFO *p8, const ASN1_OBJECT *obj,
                                int type, const unsigned char *bytes, int len);


int X509_PUBKEY_set0_param(X509_PUBKEY *pub, ASN1_OBJECT *aobj,
                           int ptype, void *pval,
                           unsigned char *penc, int penclen);
int X509_PUBKEY_get0_param(ASN1_OBJECT **ppkalg,
                           const unsigned char **pk, int *ppklen,
                           X509_ALGOR **pa, const X509_PUBKEY *pub);
int X509_PUBKEY_eq(const X509_PUBKEY *a, const X509_PUBKEY *b);
# 21 "crypto/pem/pem_all.c" 2

# 1 "include/openssl/pem.h" 1
# 12 "include/openssl/pem.h"
        
# 24 "include/openssl/pem.h"
# 1 "include/openssl/pemerr.h" 1
# 13 "include/openssl/pemerr.h"
        
# 25 "include/openssl/pem.h" 2
# 369 "include/openssl/pem.h"
int PEM_get_EVP_CIPHER_INFO(char *header, EVP_CIPHER_INFO *cipher);
int PEM_do_header(EVP_CIPHER_INFO *cipher, unsigned char *data, long *len,
                  pem_password_cb *callback, void *u);

int PEM_read_bio(BIO *bp, char **name, char **header,
                 unsigned char **data, long *len);



int PEM_read_bio_ex(BIO *bp, char **name, char **header,
                    unsigned char **data, long *len, unsigned int flags);
int PEM_bytes_read_bio_secmem(unsigned char **pdata, long *plen, char **pnm,
                              const char *name, BIO *bp, pem_password_cb *cb,
                              void *u);
int PEM_write_bio(BIO *bp, const char *name, const char *hdr,
                  const unsigned char *data, long len);
int PEM_bytes_read_bio(unsigned char **pdata, long *plen, char **pnm,
                       const char *name, BIO *bp, pem_password_cb *cb,
                       void *u);
void *PEM_ASN1_read_bio(d2i_of_void *d2i, const char *name, BIO *bp, void **x,
                        pem_password_cb *cb, void *u);
int PEM_ASN1_write_bio(i2d_of_void *i2d, const char *name, BIO *bp,
                       const void *x, const EVP_CIPHER *enc,
                       const unsigned char *kstr, int klen,
                       pem_password_cb *cb, void *u);

struct stack_st_X509_INFO *PEM_X509_INFO_read_bio(BIO *bp, struct stack_st_X509_INFO *sk,
                                            pem_password_cb *cb, void *u);
struct stack_st_X509_INFO
*PEM_X509_INFO_read_bio_ex(BIO *bp, struct stack_st_X509_INFO *sk,
                           pem_password_cb *cb, void *u, OSSL_LIB_CTX *libctx,
                           const char *propq);

int PEM_X509_INFO_write_bio(BIO *bp, const X509_INFO *xi, EVP_CIPHER *enc,
                            const unsigned char *kstr, int klen,
                            pem_password_cb *cd, void *u);


int PEM_read(FILE *fp, char **name, char **header,
             unsigned char **data, long *len);
int PEM_write(FILE *fp, const char *name, const char *hdr,
              const unsigned char *data, long len);
void *PEM_ASN1_read(d2i_of_void *d2i, const char *name, FILE *fp, void **x,
                    pem_password_cb *cb, void *u);
int PEM_ASN1_write(i2d_of_void *i2d, const char *name, FILE *fp,
                   const void *x, const EVP_CIPHER *enc,
                   const unsigned char *kstr, int klen,
                   pem_password_cb *callback, void *u);
struct stack_st_X509_INFO *PEM_X509_INFO_read(FILE *fp, struct stack_st_X509_INFO *sk,
                                        pem_password_cb *cb, void *u);
struct stack_st_X509_INFO
*PEM_X509_INFO_read_ex(FILE *fp, struct stack_st_X509_INFO *sk, pem_password_cb *cb,
                       void *u, OSSL_LIB_CTX *libctx, const char *propq);


int PEM_SignInit(EVP_MD_CTX *ctx, EVP_MD *type);
int PEM_SignUpdate(EVP_MD_CTX *ctx, const unsigned char *d, unsigned int cnt);
int PEM_SignFinal(EVP_MD_CTX *ctx, unsigned char *sigret,
                  unsigned int *siglen, EVP_PKEY *pkey);


int PEM_def_callback(char *buf, int num, int rwflag, void *userdata);
void PEM_proc_type(char *buf, int type);
void PEM_dek_info(char *buf, const char *type, int len, const char *str);



extern X509 *PEM_read_bio_X509(BIO *out, X509 **x, pem_password_cb *cb, void *u); extern X509 *PEM_read_X509(FILE *out, X509 **x, pem_password_cb *cb, void *u); extern int PEM_write_bio_X509(BIO *out, const X509 *x); extern int PEM_write_X509(FILE *out, const X509 *x);
extern X509 *PEM_read_bio_X509_AUX(BIO *out, X509 **x, pem_password_cb *cb, void *u); extern X509 *PEM_read_X509_AUX(FILE *out, X509 **x, pem_password_cb *cb, void *u); extern int PEM_write_bio_X509_AUX(BIO *out, const X509 *x); extern int PEM_write_X509_AUX(FILE *out, const X509 *x);
extern X509_REQ *PEM_read_bio_X509_REQ(BIO *out, X509_REQ **x, pem_password_cb *cb, void *u); extern X509_REQ *PEM_read_X509_REQ(FILE *out, X509_REQ **x, pem_password_cb *cb, void *u); extern int PEM_write_bio_X509_REQ(BIO *out, const X509_REQ *x); extern int PEM_write_X509_REQ(FILE *out, const X509_REQ *x);
extern int PEM_write_bio_X509_REQ_NEW(BIO *out, const X509_REQ *x); extern int PEM_write_X509_REQ_NEW(FILE *out, const X509_REQ *x);
extern X509_CRL *PEM_read_bio_X509_CRL(BIO *out, X509_CRL **x, pem_password_cb *cb, void *u); extern X509_CRL *PEM_read_X509_CRL(FILE *out, X509_CRL **x, pem_password_cb *cb, void *u); extern int PEM_write_bio_X509_CRL(BIO *out, const X509_CRL *x); extern int PEM_write_X509_CRL(FILE *out, const X509_CRL *x);
extern X509_PUBKEY *PEM_read_bio_X509_PUBKEY(BIO *out, X509_PUBKEY **x, pem_password_cb *cb, void *u); extern X509_PUBKEY *PEM_read_X509_PUBKEY(FILE *out, X509_PUBKEY **x, pem_password_cb *cb, void *u); extern int PEM_write_bio_X509_PUBKEY(BIO *out, const X509_PUBKEY *x); extern int PEM_write_X509_PUBKEY(FILE *out, const X509_PUBKEY *x);
extern PKCS7 *PEM_read_bio_PKCS7(BIO *out, PKCS7 **x, pem_password_cb *cb, void *u); extern PKCS7 *PEM_read_PKCS7(FILE *out, PKCS7 **x, pem_password_cb *cb, void *u); extern int PEM_write_bio_PKCS7(BIO *out, const PKCS7 *x); extern int PEM_write_PKCS7(FILE *out, const PKCS7 *x);
extern NETSCAPE_CERT_SEQUENCE *PEM_read_bio_NETSCAPE_CERT_SEQUENCE(BIO *out, NETSCAPE_CERT_SEQUENCE **x, pem_password_cb *cb, void *u); extern NETSCAPE_CERT_SEQUENCE *PEM_read_NETSCAPE_CERT_SEQUENCE(FILE *out, NETSCAPE_CERT_SEQUENCE **x, pem_password_cb *cb, void *u); extern int PEM_write_bio_NETSCAPE_CERT_SEQUENCE(BIO *out, const NETSCAPE_CERT_SEQUENCE *x); extern int PEM_write_NETSCAPE_CERT_SEQUENCE(FILE *out, const NETSCAPE_CERT_SEQUENCE *x);
extern X509_SIG *PEM_read_bio_PKCS8(BIO *out, X509_SIG **x, pem_password_cb *cb, void *u); extern X509_SIG *PEM_read_PKCS8(FILE *out, X509_SIG **x, pem_password_cb *cb, void *u); extern int PEM_write_bio_PKCS8(BIO *out, const X509_SIG *x); extern int PEM_write_PKCS8(FILE *out, const X509_SIG *x);
extern PKCS8_PRIV_KEY_INFO *PEM_read_bio_PKCS8_PRIV_KEY_INFO(BIO *out, PKCS8_PRIV_KEY_INFO **x, pem_password_cb *cb, void *u); extern PKCS8_PRIV_KEY_INFO *PEM_read_PKCS8_PRIV_KEY_INFO(FILE *out, PKCS8_PRIV_KEY_INFO **x, pem_password_cb *cb, void *u); extern int PEM_write_bio_PKCS8_PRIV_KEY_INFO(BIO *out, const PKCS8_PRIV_KEY_INFO *x); extern int PEM_write_PKCS8_PRIV_KEY_INFO(FILE *out, const PKCS8_PRIV_KEY_INFO *x);

extern RSA *PEM_read_bio_RSAPrivateKey(BIO *out, RSA **x, pem_password_cb *cb, void *u); extern RSA *PEM_read_RSAPrivateKey(FILE *out, RSA **x, pem_password_cb *cb, void *u); extern int PEM_write_bio_RSAPrivateKey(BIO *out, const RSA *x, const EVP_CIPHER *enc, const unsigned char *kstr, int klen, pem_password_cb *cb, void *u); extern int PEM_write_RSAPrivateKey(FILE *out, const RSA *x, const EVP_CIPHER *enc, const unsigned char *kstr, int klen, pem_password_cb *cb, void *u);
extern RSA *PEM_read_bio_RSAPublicKey(BIO *out, RSA **x, pem_password_cb *cb, void *u); extern RSA *PEM_read_RSAPublicKey(FILE *out, RSA **x, pem_password_cb *cb, void *u); extern int PEM_write_bio_RSAPublicKey(BIO *out, const RSA *x); extern int PEM_write_RSAPublicKey(FILE *out, const RSA *x);
extern RSA *PEM_read_bio_RSA_PUBKEY(BIO *out, RSA **x, pem_password_cb *cb, void *u); extern RSA *PEM_read_RSA_PUBKEY(FILE *out, RSA **x, pem_password_cb *cb, void *u); extern int PEM_write_bio_RSA_PUBKEY(BIO *out, const RSA *x); extern int PEM_write_RSA_PUBKEY(FILE *out, const RSA *x);



extern DSA *PEM_read_bio_DSAPrivateKey(BIO *out, DSA **x, pem_password_cb *cb, void *u); extern DSA *PEM_read_DSAPrivateKey(FILE *out, DSA **x, pem_password_cb *cb, void *u); extern int PEM_write_bio_DSAPrivateKey(BIO *out, const DSA *x, const EVP_CIPHER *enc, const unsigned char *kstr, int klen, pem_password_cb *cb, void *u); extern int PEM_write_DSAPrivateKey(FILE *out, const DSA *x, const EVP_CIPHER *enc, const unsigned char *kstr, int klen, pem_password_cb *cb, void *u);
extern DSA *PEM_read_bio_DSA_PUBKEY(BIO *out, DSA **x, pem_password_cb *cb, void *u); extern DSA *PEM_read_DSA_PUBKEY(FILE *out, DSA **x, pem_password_cb *cb, void *u); extern int PEM_write_bio_DSA_PUBKEY(BIO *out, const DSA *x); extern int PEM_write_DSA_PUBKEY(FILE *out, const DSA *x);
extern DSA *PEM_read_bio_DSAparams(BIO *out, DSA **x, pem_password_cb *cb, void *u); extern DSA *PEM_read_DSAparams(FILE *out, DSA **x, pem_password_cb *cb, void *u); extern int PEM_write_bio_DSAparams(BIO *out, const DSA *x); extern int PEM_write_DSAparams(FILE *out, const DSA *x);





extern EC_GROUP *PEM_read_bio_ECPKParameters(BIO *out, EC_GROUP **x, pem_password_cb *cb, void *u); extern EC_GROUP *PEM_read_ECPKParameters(FILE *out, EC_GROUP **x, pem_password_cb *cb, void *u); extern int PEM_write_bio_ECPKParameters(BIO *out, const EC_GROUP *x); extern int PEM_write_ECPKParameters(FILE *out, const EC_GROUP *x);
extern EC_KEY *PEM_read_bio_ECPrivateKey(BIO *out, EC_KEY **x, pem_password_cb *cb, void *u); extern EC_KEY *PEM_read_ECPrivateKey(FILE *out, EC_KEY **x, pem_password_cb *cb, void *u); extern int PEM_write_bio_ECPrivateKey(BIO *out, const EC_KEY *x, const EVP_CIPHER *enc, const unsigned char *kstr, int klen, pem_password_cb *cb, void *u); extern int PEM_write_ECPrivateKey(FILE *out, const EC_KEY *x, const EVP_CIPHER *enc, const unsigned char *kstr, int klen, pem_password_cb *cb, void *u);
extern EC_KEY *PEM_read_bio_EC_PUBKEY(BIO *out, EC_KEY **x, pem_password_cb *cb, void *u); extern EC_KEY *PEM_read_EC_PUBKEY(FILE *out, EC_KEY **x, pem_password_cb *cb, void *u); extern int PEM_write_bio_EC_PUBKEY(BIO *out, const EC_KEY *x); extern int PEM_write_EC_PUBKEY(FILE *out, const EC_KEY *x);





extern DH *PEM_read_bio_DHparams(BIO *out, DH **x, pem_password_cb *cb, void *u); extern DH *PEM_read_DHparams(FILE *out, DH **x, pem_password_cb *cb, void *u); extern int PEM_write_bio_DHparams(BIO *out, const DH *x); extern int PEM_write_DHparams(FILE *out, const DH *x);
extern int PEM_write_bio_DHxparams(BIO *out, const DH *x); extern int PEM_write_DHxparams(FILE *out, const DH *x);


extern EVP_PKEY *PEM_read_bio_PrivateKey(BIO *out, EVP_PKEY **x, pem_password_cb *cb, void *u); extern EVP_PKEY *PEM_read_bio_PrivateKey_ex(BIO *out, EVP_PKEY **x, pem_password_cb *cb, void *u, OSSL_LIB_CTX *libctx, const char *propq); extern EVP_PKEY *PEM_read_PrivateKey(FILE *out, EVP_PKEY **x, pem_password_cb *cb, void *u); extern EVP_PKEY *PEM_read_PrivateKey_ex(FILE *out, EVP_PKEY **x, pem_password_cb *cb, void *u, OSSL_LIB_CTX *libctx, const char *propq); extern int PEM_write_bio_PrivateKey(BIO *out, const EVP_PKEY *x, const EVP_CIPHER *enc, const unsigned char *kstr, int klen, pem_password_cb *cb, void *u); extern int PEM_write_bio_PrivateKey_ex(BIO *out, const EVP_PKEY *x, const EVP_CIPHER *enc, const unsigned char *kstr, int klen, pem_password_cb *cb, void *u, OSSL_LIB_CTX *libctx, const char *propq); extern int PEM_write_PrivateKey(FILE *out, const EVP_PKEY *x, const EVP_CIPHER *enc, const unsigned char *kstr, int klen, pem_password_cb *cb, void *u); extern int PEM_write_PrivateKey_ex(FILE *out, const EVP_PKEY *x, const EVP_CIPHER *enc, const unsigned char *kstr, int klen, pem_password_cb *cb, void *u, OSSL_LIB_CTX *libctx, const char *propq);
extern EVP_PKEY *PEM_read_bio_PUBKEY(BIO *out, EVP_PKEY **x, pem_password_cb *cb, void *u); extern EVP_PKEY *PEM_read_bio_PUBKEY_ex(BIO *out, EVP_PKEY **x, pem_password_cb *cb, void *u, OSSL_LIB_CTX *libctx, const char *propq); extern EVP_PKEY *PEM_read_PUBKEY(FILE *out, EVP_PKEY **x, pem_password_cb *cb, void *u); extern EVP_PKEY *PEM_read_PUBKEY_ex(FILE *out, EVP_PKEY **x, pem_password_cb *cb, void *u, OSSL_LIB_CTX *libctx, const char *propq); extern int PEM_write_bio_PUBKEY(BIO *out, const EVP_PKEY *x); extern int PEM_write_bio_PUBKEY_ex(BIO *out, const EVP_PKEY *x, OSSL_LIB_CTX *libctx, const char *propq); extern int PEM_write_PUBKEY(FILE *out, const EVP_PKEY *x); extern int PEM_write_PUBKEY_ex(FILE *out, const EVP_PKEY *x, OSSL_LIB_CTX *libctx, const char *propq);

int PEM_write_bio_PrivateKey_traditional(BIO *bp, const EVP_PKEY *x,
                                         const EVP_CIPHER *enc,
                                         const unsigned char *kstr, int klen,
                                         pem_password_cb *cb, void *u);


int PEM_write_bio_PKCS8PrivateKey_nid(BIO *bp, const EVP_PKEY *x, int nid,
                                      const char *kstr, int klen,
                                      pem_password_cb *cb, void *u);
int PEM_write_bio_PKCS8PrivateKey(BIO *, const EVP_PKEY *, const EVP_CIPHER *,
                                  const char *kstr, int klen,
                                  pem_password_cb *cb, void *u);
int i2d_PKCS8PrivateKey_bio(BIO *bp, const EVP_PKEY *x, const EVP_CIPHER *enc,
                            const char *kstr, int klen,
                            pem_password_cb *cb, void *u);
int i2d_PKCS8PrivateKey_nid_bio(BIO *bp, const EVP_PKEY *x, int nid,
                                const char *kstr, int klen,
                                pem_password_cb *cb, void *u);
EVP_PKEY *d2i_PKCS8PrivateKey_bio(BIO *bp, EVP_PKEY **x, pem_password_cb *cb,
                                  void *u);


int i2d_PKCS8PrivateKey_fp(FILE *fp, const EVP_PKEY *x, const EVP_CIPHER *enc,
                           const char *kstr, int klen,
                           pem_password_cb *cb, void *u);
int i2d_PKCS8PrivateKey_nid_fp(FILE *fp, const EVP_PKEY *x, int nid,
                               const char *kstr, int klen,
                               pem_password_cb *cb, void *u);
int PEM_write_PKCS8PrivateKey_nid(FILE *fp, const EVP_PKEY *x, int nid,
                                  const char *kstr, int klen,
                                  pem_password_cb *cb, void *u);

EVP_PKEY *d2i_PKCS8PrivateKey_fp(FILE *fp, EVP_PKEY **x, pem_password_cb *cb,
                                 void *u);

int PEM_write_PKCS8PrivateKey(FILE *fp, const EVP_PKEY *x, const EVP_CIPHER *enc,
                              const char *kstr, int klen,
                              pem_password_cb *cd, void *u);

EVP_PKEY *PEM_read_bio_Parameters_ex(BIO *bp, EVP_PKEY **x,
                                     OSSL_LIB_CTX *libctx, const char *propq);
EVP_PKEY *PEM_read_bio_Parameters(BIO *bp, EVP_PKEY **x);
int PEM_write_bio_Parameters(BIO *bp, const EVP_PKEY *x);

EVP_PKEY *b2i_PrivateKey(const unsigned char **in, long length);
EVP_PKEY *b2i_PublicKey(const unsigned char **in, long length);
EVP_PKEY *b2i_PrivateKey_bio(BIO *in);
EVP_PKEY *b2i_PublicKey_bio(BIO *in);
int i2b_PrivateKey_bio(BIO *out, const EVP_PKEY *pk);
int i2b_PublicKey_bio(BIO *out, const EVP_PKEY *pk);
EVP_PKEY *b2i_PVK_bio(BIO *in, pem_password_cb *cb, void *u);
EVP_PKEY *b2i_PVK_bio_ex(BIO *in, pem_password_cb *cb, void *u,
                         OSSL_LIB_CTX *libctx, const char *propq);
int i2b_PVK_bio(BIO *out, const EVP_PKEY *pk, int enclevel,
                pem_password_cb *cb, void *u);
int i2b_PVK_bio_ex(BIO *out, const EVP_PKEY *pk, int enclevel,
                   pem_password_cb *cb, void *u,
                   OSSL_LIB_CTX *libctx, const char *propq);
# 23 "crypto/pem/pem_all.c" 2



# 1 "crypto/pem/pem_local.h" 1
# 12 "crypto/pem/pem_local.h"
# 1 "include/openssl/encoder.h" 1
# 12 "include/openssl/encoder.h"
        







# 1 "/opt/cegcc/lib/gcc/arm-mingw32ce/9.3.0/include/stddef.h" 1 3 4
# 21 "include/openssl/encoder.h" 2
# 1 "include/openssl/encodererr.h" 1
# 13 "include/openssl/encodererr.h"
        
# 22 "include/openssl/encoder.h" 2







OSSL_ENCODER *OSSL_ENCODER_fetch(OSSL_LIB_CTX *libctx, const char *name,
                                 const char *properties);
int OSSL_ENCODER_up_ref(OSSL_ENCODER *encoder);
void OSSL_ENCODER_free(OSSL_ENCODER *encoder);

const OSSL_PROVIDER *OSSL_ENCODER_get0_provider(const OSSL_ENCODER *encoder);
const char *OSSL_ENCODER_get0_properties(const OSSL_ENCODER *encoder);
const char *OSSL_ENCODER_get0_name(const OSSL_ENCODER *kdf);
const char *OSSL_ENCODER_get0_description(const OSSL_ENCODER *kdf);
int OSSL_ENCODER_is_a(const OSSL_ENCODER *encoder, const char *name);

void OSSL_ENCODER_do_all_provided(OSSL_LIB_CTX *libctx,
                                  void (*fn)(OSSL_ENCODER *encoder, void *arg),
                                  void *arg);
int OSSL_ENCODER_names_do_all(const OSSL_ENCODER *encoder,
                              void (*fn)(const char *name, void *data),
                              void *data);
const OSSL_PARAM *OSSL_ENCODER_gettable_params(OSSL_ENCODER *encoder);
int OSSL_ENCODER_get_params(OSSL_ENCODER *encoder, OSSL_PARAM params[]);

const OSSL_PARAM *OSSL_ENCODER_settable_ctx_params(OSSL_ENCODER *encoder);
OSSL_ENCODER_CTX *OSSL_ENCODER_CTX_new(void);
int OSSL_ENCODER_CTX_set_params(OSSL_ENCODER_CTX *ctx,
                                const OSSL_PARAM params[]);
void OSSL_ENCODER_CTX_free(OSSL_ENCODER_CTX *ctx);


int OSSL_ENCODER_CTX_set_passphrase(OSSL_ENCODER_CTX *ctx,
                                    const unsigned char *kstr, size_t klen);
int OSSL_ENCODER_CTX_set_pem_password_cb(OSSL_ENCODER_CTX *ctx,
                                         pem_password_cb *cb, void *cbarg);
int OSSL_ENCODER_CTX_set_passphrase_cb(OSSL_ENCODER_CTX *ctx,
                                       OSSL_PASSPHRASE_CALLBACK *cb,
                                       void *cbarg);
int OSSL_ENCODER_CTX_set_passphrase_ui(OSSL_ENCODER_CTX *ctx,
                                       const UI_METHOD *ui_method,
                                       void *ui_data);
int OSSL_ENCODER_CTX_set_cipher(OSSL_ENCODER_CTX *ctx,
                                const char *cipher_name,
                                const char *propquery);
int OSSL_ENCODER_CTX_set_selection(OSSL_ENCODER_CTX *ctx, int selection);
int OSSL_ENCODER_CTX_set_output_type(OSSL_ENCODER_CTX *ctx,
                                     const char *output_type);
int OSSL_ENCODER_CTX_set_output_structure(OSSL_ENCODER_CTX *ctx,
                                          const char *output_structure);


int OSSL_ENCODER_CTX_add_encoder(OSSL_ENCODER_CTX *ctx, OSSL_ENCODER *encoder);
int OSSL_ENCODER_CTX_add_extra(OSSL_ENCODER_CTX *ctx,
                               OSSL_LIB_CTX *libctx, const char *propq);
int OSSL_ENCODER_CTX_get_num_encoders(OSSL_ENCODER_CTX *ctx);

typedef struct ossl_encoder_instance_st OSSL_ENCODER_INSTANCE;
OSSL_ENCODER *
OSSL_ENCODER_INSTANCE_get_encoder(OSSL_ENCODER_INSTANCE *encoder_inst);
void *
OSSL_ENCODER_INSTANCE_get_encoder_ctx(OSSL_ENCODER_INSTANCE *encoder_inst);
const char *
OSSL_ENCODER_INSTANCE_get_output_type(OSSL_ENCODER_INSTANCE *encoder_inst);
const char *
OSSL_ENCODER_INSTANCE_get_output_structure(OSSL_ENCODER_INSTANCE *encoder_inst);

typedef const void *OSSL_ENCODER_CONSTRUCT(OSSL_ENCODER_INSTANCE *encoder_inst,
                                           void *construct_data);
typedef void OSSL_ENCODER_CLEANUP(void *construct_data);

int OSSL_ENCODER_CTX_set_construct(OSSL_ENCODER_CTX *ctx,
                                   OSSL_ENCODER_CONSTRUCT *construct);
int OSSL_ENCODER_CTX_set_construct_data(OSSL_ENCODER_CTX *ctx,
                                        void *construct_data);
int OSSL_ENCODER_CTX_set_cleanup(OSSL_ENCODER_CTX *ctx,
                                 OSSL_ENCODER_CLEANUP *cleanup);


int OSSL_ENCODER_to_bio(OSSL_ENCODER_CTX *ctx, BIO *out);

int OSSL_ENCODER_to_fp(OSSL_ENCODER_CTX *ctx, FILE *fp);

int OSSL_ENCODER_to_data(OSSL_ENCODER_CTX *ctx, unsigned char **pdata,
                         size_t *pdata_len);






OSSL_ENCODER_CTX *OSSL_ENCODER_CTX_new_for_pkey(const EVP_PKEY *pkey,
                                                int selection,
                                                const char *output_type,
                                                const char *output_struct,
                                                const char *propquery);
# 13 "crypto/pem/pem_local.h" 2
# 27 "crypto/pem/pem_all.c" 2

static RSA *pkey_get_rsa(EVP_PKEY *key, RSA **rsa);

static DSA *pkey_get_dsa(EVP_PKEY *key, DSA **dsa);



static EC_KEY *pkey_get_eckey(EVP_PKEY *key, EC_KEY **eckey);


X509_REQ *PEM_read_bio_X509_REQ(BIO *bp, X509_REQ **x, pem_password_cb *cb, void *u) { return PEM_ASN1_read_bio((d2i_of_void *)d2i_X509_REQ, "CERTIFICATE REQUEST", bp, (void **)x, cb, u); } X509_REQ *PEM_read_X509_REQ(FILE *fp, X509_REQ **x, pem_password_cb *cb, void *u) { return PEM_ASN1_read((d2i_of_void *)d2i_X509_REQ, "CERTIFICATE REQUEST", fp, (void **)x, cb, u); } int PEM_write_bio_X509_REQ(BIO *out, const X509_REQ *x) { return PEM_ASN1_write_bio((i2d_of_void *)i2d_X509_REQ, "CERTIFICATE REQUEST", out, x, 
# 37 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 37 "crypto/pem/pem_all.c"
,
# 37 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 37 "crypto/pem/pem_all.c"
,0,
# 37 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 37 "crypto/pem/pem_all.c"
,
# 37 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 37 "crypto/pem/pem_all.c"
); } int PEM_write_X509_REQ(FILE *out, const X509_REQ *x) { return PEM_ASN1_write((i2d_of_void *)i2d_X509_REQ, "CERTIFICATE REQUEST", out, x, 
# 37 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 37 "crypto/pem/pem_all.c"
, 
# 37 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 37 "crypto/pem/pem_all.c"
, 0, 
# 37 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 37 "crypto/pem/pem_all.c"
, 
# 37 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 37 "crypto/pem/pem_all.c"
); }

int PEM_write_bio_X509_REQ_NEW(BIO *out, const X509_REQ *x) { return PEM_ASN1_write_bio((i2d_of_void *)i2d_X509_REQ, "NEW CERTIFICATE REQUEST", out, x, 
# 39 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 39 "crypto/pem/pem_all.c"
,
# 39 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 39 "crypto/pem/pem_all.c"
,0,
# 39 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 39 "crypto/pem/pem_all.c"
,
# 39 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 39 "crypto/pem/pem_all.c"
); } int PEM_write_X509_REQ_NEW(FILE *out, const X509_REQ *x) { return PEM_ASN1_write((i2d_of_void *)i2d_X509_REQ, "NEW CERTIFICATE REQUEST", out, x, 
# 39 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 39 "crypto/pem/pem_all.c"
, 
# 39 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 39 "crypto/pem/pem_all.c"
, 0, 
# 39 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 39 "crypto/pem/pem_all.c"
, 
# 39 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 39 "crypto/pem/pem_all.c"
); }
X509_CRL *PEM_read_bio_X509_CRL(BIO *bp, X509_CRL **x, pem_password_cb *cb, void *u) { return PEM_ASN1_read_bio((d2i_of_void *)d2i_X509_CRL, "X509 CRL", bp, (void **)x, cb, u); } X509_CRL *PEM_read_X509_CRL(FILE *fp, X509_CRL **x, pem_password_cb *cb, void *u) { return PEM_ASN1_read((d2i_of_void *)d2i_X509_CRL, "X509 CRL", fp, (void **)x, cb, u); } int PEM_write_bio_X509_CRL(BIO *out, const X509_CRL *x) { return PEM_ASN1_write_bio((i2d_of_void *)i2d_X509_CRL, "X509 CRL", out, x, 
# 40 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 40 "crypto/pem/pem_all.c"
,
# 40 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 40 "crypto/pem/pem_all.c"
,0,
# 40 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 40 "crypto/pem/pem_all.c"
,
# 40 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 40 "crypto/pem/pem_all.c"
); } int PEM_write_X509_CRL(FILE *out, const X509_CRL *x) { return PEM_ASN1_write((i2d_of_void *)i2d_X509_CRL, "X509 CRL", out, x, 
# 40 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 40 "crypto/pem/pem_all.c"
, 
# 40 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 40 "crypto/pem/pem_all.c"
, 0, 
# 40 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 40 "crypto/pem/pem_all.c"
, 
# 40 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 40 "crypto/pem/pem_all.c"
); }
X509_PUBKEY *PEM_read_bio_X509_PUBKEY(BIO *bp, X509_PUBKEY **x, pem_password_cb *cb, void *u) { return PEM_ASN1_read_bio((d2i_of_void *)d2i_X509_PUBKEY, "PUBLIC KEY", bp, (void **)x, cb, u); } X509_PUBKEY *PEM_read_X509_PUBKEY(FILE *fp, X509_PUBKEY **x, pem_password_cb *cb, void *u) { return PEM_ASN1_read((d2i_of_void *)d2i_X509_PUBKEY, "PUBLIC KEY", fp, (void **)x, cb, u); } int PEM_write_bio_X509_PUBKEY(BIO *out, const X509_PUBKEY *x) { return PEM_ASN1_write_bio((i2d_of_void *)i2d_X509_PUBKEY, "PUBLIC KEY", out, x, 
# 41 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 41 "crypto/pem/pem_all.c"
,
# 41 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 41 "crypto/pem/pem_all.c"
,0,
# 41 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 41 "crypto/pem/pem_all.c"
,
# 41 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 41 "crypto/pem/pem_all.c"
); } int PEM_write_X509_PUBKEY(FILE *out, const X509_PUBKEY *x) { return PEM_ASN1_write((i2d_of_void *)i2d_X509_PUBKEY, "PUBLIC KEY", out, x, 
# 41 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 41 "crypto/pem/pem_all.c"
, 
# 41 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 41 "crypto/pem/pem_all.c"
, 0, 
# 41 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 41 "crypto/pem/pem_all.c"
, 
# 41 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 41 "crypto/pem/pem_all.c"
); }
PKCS7 *PEM_read_bio_PKCS7(BIO *bp, PKCS7 **x, pem_password_cb *cb, void *u) { return PEM_ASN1_read_bio((d2i_of_void *)d2i_PKCS7, "PKCS7", bp, (void **)x, cb, u); } PKCS7 *PEM_read_PKCS7(FILE *fp, PKCS7 **x, pem_password_cb *cb, void *u) { return PEM_ASN1_read((d2i_of_void *)d2i_PKCS7, "PKCS7", fp, (void **)x, cb, u); } int PEM_write_bio_PKCS7(BIO *out, const PKCS7 *x) { return PEM_ASN1_write_bio((i2d_of_void *)i2d_PKCS7, "PKCS7", out, x, 
# 42 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 42 "crypto/pem/pem_all.c"
,
# 42 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 42 "crypto/pem/pem_all.c"
,0,
# 42 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 42 "crypto/pem/pem_all.c"
,
# 42 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 42 "crypto/pem/pem_all.c"
); } int PEM_write_PKCS7(FILE *out, const PKCS7 *x) { return PEM_ASN1_write((i2d_of_void *)i2d_PKCS7, "PKCS7", out, x, 
# 42 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 42 "crypto/pem/pem_all.c"
, 
# 42 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 42 "crypto/pem/pem_all.c"
, 0, 
# 42 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 42 "crypto/pem/pem_all.c"
, 
# 42 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 42 "crypto/pem/pem_all.c"
); }

NETSCAPE_CERT_SEQUENCE *PEM_read_bio_NETSCAPE_CERT_SEQUENCE(BIO *bp, NETSCAPE_CERT_SEQUENCE **x, pem_password_cb *cb, void *u) { return PEM_ASN1_read_bio((d2i_of_void *)d2i_NETSCAPE_CERT_SEQUENCE, "CERTIFICATE", bp, (void **)x, cb, u); } NETSCAPE_CERT_SEQUENCE *PEM_read_NETSCAPE_CERT_SEQUENCE(FILE *fp, NETSCAPE_CERT_SEQUENCE **x, pem_password_cb *cb, void *u) { return PEM_ASN1_read((d2i_of_void *)d2i_NETSCAPE_CERT_SEQUENCE, "CERTIFICATE", fp, (void **)x, cb, u); } int PEM_write_bio_NETSCAPE_CERT_SEQUENCE(BIO *out, const NETSCAPE_CERT_SEQUENCE *x) { return PEM_ASN1_write_bio((i2d_of_void *)i2d_NETSCAPE_CERT_SEQUENCE, "CERTIFICATE", out, x, 
# 44 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 44 "crypto/pem/pem_all.c"
,
# 44 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 44 "crypto/pem/pem_all.c"
,0,
# 44 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 44 "crypto/pem/pem_all.c"
,
# 44 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 44 "crypto/pem/pem_all.c"
); } int PEM_write_NETSCAPE_CERT_SEQUENCE(FILE *out, const NETSCAPE_CERT_SEQUENCE *x) { return PEM_ASN1_write((i2d_of_void *)i2d_NETSCAPE_CERT_SEQUENCE, "CERTIFICATE", out, x, 
# 44 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 44 "crypto/pem/pem_all.c"
, 
# 44 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 44 "crypto/pem/pem_all.c"
, 0, 
# 44 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 44 "crypto/pem/pem_all.c"
, 
# 44 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 44 "crypto/pem/pem_all.c"
); }
# 53 "crypto/pem/pem_all.c"
static RSA *pkey_get_rsa(EVP_PKEY *key, RSA **rsa)
{
    RSA *rtmp;
    if (!key)
        return 
# 57 "crypto/pem/pem_all.c" 3 4
              ((void *)0)
# 57 "crypto/pem/pem_all.c"
                  ;
    rtmp = EVP_PKEY_get1_RSA(key);
    EVP_PKEY_free(key);
    if (!rtmp)
        return 
# 61 "crypto/pem/pem_all.c" 3 4
              ((void *)0)
# 61 "crypto/pem/pem_all.c"
                  ;
    if (rsa) {
        RSA_free(*rsa);
        *rsa = rtmp;
    }
    return rtmp;
}

RSA *PEM_read_bio_RSAPrivateKey(BIO *bp, RSA **rsa, pem_password_cb *cb,
                                void *u)
{
    EVP_PKEY *pktmp;
    pktmp = PEM_read_bio_PrivateKey(bp, 
# 73 "crypto/pem/pem_all.c" 3 4
                                       ((void *)0)
# 73 "crypto/pem/pem_all.c"
                                           , cb, u);
    return pkey_get_rsa(pktmp, rsa);
}



RSA *PEM_read_RSAPrivateKey(FILE *fp, RSA **rsa, pem_password_cb *cb, void *u)
{
    EVP_PKEY *pktmp;
    pktmp = PEM_read_PrivateKey(fp, 
# 82 "crypto/pem/pem_all.c" 3 4
                                   ((void *)0)
# 82 "crypto/pem/pem_all.c"
                                       , cb, u);
    return pkey_get_rsa(pktmp, rsa);
}



int PEM_write_bio_RSAPrivateKey(BIO *out, const RSA *x, const EVP_CIPHER *enc, const unsigned char *kstr, int klen, pem_password_cb *cb, void *u) { return PEM_ASN1_write_bio((i2d_of_void *)i2d_RSAPrivateKey, "RSA PRIVATE KEY", out, x, enc, kstr, klen, cb, u); } int PEM_write_RSAPrivateKey(FILE *out, const RSA *x, const EVP_CIPHER *enc, const unsigned char *kstr, int klen, pem_password_cb *cb, void *u) { return PEM_ASN1_write((i2d_of_void *)i2d_RSAPrivateKey, "RSA PRIVATE KEY", out, x, enc, kstr, klen, cb, u); }
RSA *PEM_read_bio_RSAPublicKey(BIO *bp, RSA **x, pem_password_cb *cb, void *u) { return PEM_ASN1_read_bio((d2i_of_void *)d2i_RSAPublicKey, "RSA PUBLIC KEY", bp, (void **)x, cb, u); } RSA *PEM_read_RSAPublicKey(FILE *fp, RSA **x, pem_password_cb *cb, void *u) { return PEM_ASN1_read((d2i_of_void *)d2i_RSAPublicKey, "RSA PUBLIC KEY", fp, (void **)x, cb, u); } int PEM_write_bio_RSAPublicKey(BIO *out, const RSA *x) { return PEM_ASN1_write_bio((i2d_of_void *)i2d_RSAPublicKey, "RSA PUBLIC KEY", out, x, 
# 89 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 89 "crypto/pem/pem_all.c"
,
# 89 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 89 "crypto/pem/pem_all.c"
,0,
# 89 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 89 "crypto/pem/pem_all.c"
,
# 89 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 89 "crypto/pem/pem_all.c"
); } int PEM_write_RSAPublicKey(FILE *out, const RSA *x) { return PEM_ASN1_write((i2d_of_void *)i2d_RSAPublicKey, "RSA PUBLIC KEY", out, x, 
# 89 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 89 "crypto/pem/pem_all.c"
, 
# 89 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 89 "crypto/pem/pem_all.c"
, 0, 
# 89 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 89 "crypto/pem/pem_all.c"
, 
# 89 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 89 "crypto/pem/pem_all.c"
); }
RSA *PEM_read_bio_RSA_PUBKEY(BIO *bp, RSA **x, pem_password_cb *cb, void *u) { return PEM_ASN1_read_bio((d2i_of_void *)d2i_RSA_PUBKEY, "PUBLIC KEY", bp, (void **)x, cb, u); } RSA *PEM_read_RSA_PUBKEY(FILE *fp, RSA **x, pem_password_cb *cb, void *u) { return PEM_ASN1_read((d2i_of_void *)d2i_RSA_PUBKEY, "PUBLIC KEY", fp, (void **)x, cb, u); } int PEM_write_bio_RSA_PUBKEY(BIO *out, const RSA *x) { return PEM_ASN1_write_bio((i2d_of_void *)i2d_RSA_PUBKEY, "PUBLIC KEY", out, x, 
# 90 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 90 "crypto/pem/pem_all.c"
,
# 90 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 90 "crypto/pem/pem_all.c"
,0,
# 90 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 90 "crypto/pem/pem_all.c"
,
# 90 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 90 "crypto/pem/pem_all.c"
); } int PEM_write_RSA_PUBKEY(FILE *out, const RSA *x) { return PEM_ASN1_write((i2d_of_void *)i2d_RSA_PUBKEY, "PUBLIC KEY", out, x, 
# 90 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 90 "crypto/pem/pem_all.c"
, 
# 90 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 90 "crypto/pem/pem_all.c"
, 0, 
# 90 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 90 "crypto/pem/pem_all.c"
, 
# 90 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 90 "crypto/pem/pem_all.c"
); }


static DSA *pkey_get_dsa(EVP_PKEY *key, DSA **dsa)
{
    DSA *dtmp;
    if (!key)
        return 
# 97 "crypto/pem/pem_all.c" 3 4
              ((void *)0)
# 97 "crypto/pem/pem_all.c"
                  ;
    dtmp = EVP_PKEY_get1_DSA(key);
    EVP_PKEY_free(key);
    if (!dtmp)
        return 
# 101 "crypto/pem/pem_all.c" 3 4
              ((void *)0)
# 101 "crypto/pem/pem_all.c"
                  ;
    if (dsa) {
        DSA_free(*dsa);
        *dsa = dtmp;
    }
    return dtmp;
}

DSA *PEM_read_bio_DSAPrivateKey(BIO *bp, DSA **dsa, pem_password_cb *cb,
                                void *u)
{
    EVP_PKEY *pktmp;
    pktmp = PEM_read_bio_PrivateKey(bp, 
# 113 "crypto/pem/pem_all.c" 3 4
                                       ((void *)0)
# 113 "crypto/pem/pem_all.c"
                                           , cb, u);
    return pkey_get_dsa(pktmp, dsa);
}

int PEM_write_bio_DSAPrivateKey(BIO *out, const DSA *x, const EVP_CIPHER *enc, const unsigned char *kstr, int klen, pem_password_cb *cb, void *u) { return PEM_ASN1_write_bio((i2d_of_void *)i2d_DSAPrivateKey, "DSA PRIVATE KEY", out, x, enc, kstr, klen, cb, u); } int PEM_write_DSAPrivateKey(FILE *out, const DSA *x, const EVP_CIPHER *enc, const unsigned char *kstr, int klen, pem_password_cb *cb, void *u) { return PEM_ASN1_write((i2d_of_void *)i2d_DSAPrivateKey, "DSA PRIVATE KEY", out, x, enc, kstr, klen, cb, u); }
DSA *PEM_read_bio_DSA_PUBKEY(BIO *bp, DSA **x, pem_password_cb *cb, void *u) { return PEM_ASN1_read_bio((d2i_of_void *)d2i_DSA_PUBKEY, "PUBLIC KEY", bp, (void **)x, cb, u); } DSA *PEM_read_DSA_PUBKEY(FILE *fp, DSA **x, pem_password_cb *cb, void *u) { return PEM_ASN1_read((d2i_of_void *)d2i_DSA_PUBKEY, "PUBLIC KEY", fp, (void **)x, cb, u); } int PEM_write_bio_DSA_PUBKEY(BIO *out, const DSA *x) { return PEM_ASN1_write_bio((i2d_of_void *)i2d_DSA_PUBKEY, "PUBLIC KEY", out, x, 
# 118 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 118 "crypto/pem/pem_all.c"
,
# 118 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 118 "crypto/pem/pem_all.c"
,0,
# 118 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 118 "crypto/pem/pem_all.c"
,
# 118 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 118 "crypto/pem/pem_all.c"
); } int PEM_write_DSA_PUBKEY(FILE *out, const DSA *x) { return PEM_ASN1_write((i2d_of_void *)i2d_DSA_PUBKEY, "PUBLIC KEY", out, x, 
# 118 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 118 "crypto/pem/pem_all.c"
, 
# 118 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 118 "crypto/pem/pem_all.c"
, 0, 
# 118 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 118 "crypto/pem/pem_all.c"
, 
# 118 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 118 "crypto/pem/pem_all.c"
); }

DSA *PEM_read_DSAPrivateKey(FILE *fp, DSA **dsa, pem_password_cb *cb, void *u)
{
    EVP_PKEY *pktmp;
    pktmp = PEM_read_PrivateKey(fp, 
# 123 "crypto/pem/pem_all.c" 3 4
                                   ((void *)0)
# 123 "crypto/pem/pem_all.c"
                                       , cb, u);
    return pkey_get_dsa(pktmp, dsa);
}



DSA *PEM_read_bio_DSAparams(BIO *bp, DSA **x, pem_password_cb *cb, void *u) { return PEM_ASN1_read_bio((d2i_of_void *)d2i_DSAparams, "DSA PARAMETERS", bp, (void **)x, cb, u); } DSA *PEM_read_DSAparams(FILE *fp, DSA **x, pem_password_cb *cb, void *u) { return PEM_ASN1_read((d2i_of_void *)d2i_DSAparams, "DSA PARAMETERS", fp, (void **)x, cb, u); } int PEM_write_bio_DSAparams(BIO *out, const DSA *x) { return PEM_ASN1_write_bio((i2d_of_void *)i2d_DSAparams, "DSA PARAMETERS", out, x, 
# 129 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 129 "crypto/pem/pem_all.c"
,
# 129 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 129 "crypto/pem/pem_all.c"
,0,
# 129 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 129 "crypto/pem/pem_all.c"
,
# 129 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 129 "crypto/pem/pem_all.c"
); } int PEM_write_DSAparams(FILE *out, const DSA *x) { return PEM_ASN1_write((i2d_of_void *)i2d_DSAparams, "DSA PARAMETERS", out, x, 
# 129 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 129 "crypto/pem/pem_all.c"
, 
# 129 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 129 "crypto/pem/pem_all.c"
, 0, 
# 129 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 129 "crypto/pem/pem_all.c"
, 
# 129 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 129 "crypto/pem/pem_all.c"
); }




static EC_KEY *pkey_get_eckey(EVP_PKEY *key, EC_KEY **eckey)
{
    EC_KEY *dtmp;
    if (!key)
        return 
# 138 "crypto/pem/pem_all.c" 3 4
              ((void *)0)
# 138 "crypto/pem/pem_all.c"
                  ;
    dtmp = EVP_PKEY_get1_EC_KEY(key);
    EVP_PKEY_free(key);
    if (!dtmp)
        return 
# 142 "crypto/pem/pem_all.c" 3 4
              ((void *)0)
# 142 "crypto/pem/pem_all.c"
                  ;
    if (eckey) {
        EC_KEY_free(*eckey);
        *eckey = dtmp;
    }
    return dtmp;
}

EC_KEY *PEM_read_bio_ECPrivateKey(BIO *bp, EC_KEY **key, pem_password_cb *cb,
                                  void *u)
{
    EVP_PKEY *pktmp;
    pktmp = PEM_read_bio_PrivateKey(bp, 
# 154 "crypto/pem/pem_all.c" 3 4
                                       ((void *)0)
# 154 "crypto/pem/pem_all.c"
                                           , cb, u);
    return pkey_get_eckey(pktmp, key);
}

EC_GROUP *PEM_read_bio_ECPKParameters(BIO *bp, EC_GROUP **x, pem_password_cb *cb, void *u) { return PEM_ASN1_read_bio((d2i_of_void *)d2i_ECPKParameters, "EC PARAMETERS", bp, (void **)x, cb, u); } EC_GROUP *PEM_read_ECPKParameters(FILE *fp, EC_GROUP **x, pem_password_cb *cb, void *u) { return PEM_ASN1_read((d2i_of_void *)d2i_ECPKParameters, "EC PARAMETERS", fp, (void **)x, cb, u); } int PEM_write_bio_ECPKParameters(BIO *out, const EC_GROUP *x) { return PEM_ASN1_write_bio((i2d_of_void *)i2d_ECPKParameters, "EC PARAMETERS", out, x, 
# 158 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 158 "crypto/pem/pem_all.c"
,
# 158 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 158 "crypto/pem/pem_all.c"
,0,
# 158 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 158 "crypto/pem/pem_all.c"
,
# 158 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 158 "crypto/pem/pem_all.c"
); } int PEM_write_ECPKParameters(FILE *out, const EC_GROUP *x) { return PEM_ASN1_write((i2d_of_void *)i2d_ECPKParameters, "EC PARAMETERS", out, x, 
# 158 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 158 "crypto/pem/pem_all.c"
, 
# 158 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 158 "crypto/pem/pem_all.c"
, 0, 
# 158 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 158 "crypto/pem/pem_all.c"
, 
# 158 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 158 "crypto/pem/pem_all.c"
); }



int PEM_write_bio_ECPrivateKey(BIO *out, const EC_KEY *x, const EVP_CIPHER *enc, const unsigned char *kstr, int klen, pem_password_cb *cb, void *u) { return PEM_ASN1_write_bio((i2d_of_void *)i2d_ECPrivateKey, "EC PRIVATE KEY", out, x, enc, kstr, klen, cb, u); } int PEM_write_ECPrivateKey(FILE *out, const EC_KEY *x, const EVP_CIPHER *enc, const unsigned char *kstr, int klen, pem_password_cb *cb, void *u) { return PEM_ASN1_write((i2d_of_void *)i2d_ECPrivateKey, "EC PRIVATE KEY", out, x, enc, kstr, klen, cb, u); }

EC_KEY *PEM_read_bio_EC_PUBKEY(BIO *bp, EC_KEY **x, pem_password_cb *cb, void *u) { return PEM_ASN1_read_bio((d2i_of_void *)d2i_EC_PUBKEY, "PUBLIC KEY", bp, (void **)x, cb, u); } EC_KEY *PEM_read_EC_PUBKEY(FILE *fp, EC_KEY **x, pem_password_cb *cb, void *u) { return PEM_ASN1_read((d2i_of_void *)d2i_EC_PUBKEY, "PUBLIC KEY", fp, (void **)x, cb, u); } int PEM_write_bio_EC_PUBKEY(BIO *out, const EC_KEY *x) { return PEM_ASN1_write_bio((i2d_of_void *)i2d_EC_PUBKEY, "PUBLIC KEY", out, x, 
# 164 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 164 "crypto/pem/pem_all.c"
,
# 164 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 164 "crypto/pem/pem_all.c"
,0,
# 164 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 164 "crypto/pem/pem_all.c"
,
# 164 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 164 "crypto/pem/pem_all.c"
); } int PEM_write_EC_PUBKEY(FILE *out, const EC_KEY *x) { return PEM_ASN1_write((i2d_of_void *)i2d_EC_PUBKEY, "PUBLIC KEY", out, x, 
# 164 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 164 "crypto/pem/pem_all.c"
, 
# 164 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 164 "crypto/pem/pem_all.c"
, 0, 
# 164 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 164 "crypto/pem/pem_all.c"
, 
# 164 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 164 "crypto/pem/pem_all.c"
); }

EC_KEY *PEM_read_ECPrivateKey(FILE *fp, EC_KEY **eckey, pem_password_cb *cb,
                              void *u)
{
    EVP_PKEY *pktmp;
    pktmp = PEM_read_PrivateKey(fp, 
# 170 "crypto/pem/pem_all.c" 3 4
                                   ((void *)0)
# 170 "crypto/pem/pem_all.c"
                                       , cb, u);
    return pkey_get_eckey(pktmp, eckey);
}






int PEM_write_bio_DHparams(BIO *out, const DH *x) { return PEM_ASN1_write_bio((i2d_of_void *)i2d_DHparams, "DH PARAMETERS", out, x, 
# 179 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 179 "crypto/pem/pem_all.c"
,
# 179 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 179 "crypto/pem/pem_all.c"
,0,
# 179 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 179 "crypto/pem/pem_all.c"
,
# 179 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 179 "crypto/pem/pem_all.c"
); } int PEM_write_DHparams(FILE *out, const DH *x) { return PEM_ASN1_write((i2d_of_void *)i2d_DHparams, "DH PARAMETERS", out, x, 
# 179 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 179 "crypto/pem/pem_all.c"
, 
# 179 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 179 "crypto/pem/pem_all.c"
, 0, 
# 179 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 179 "crypto/pem/pem_all.c"
, 
# 179 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 179 "crypto/pem/pem_all.c"
); }
int PEM_write_bio_DHxparams(BIO *out, const DH *x) { return PEM_ASN1_write_bio((i2d_of_void *)i2d_DHxparams, "X9.42 DH PARAMETERS", out, x, 
# 180 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 180 "crypto/pem/pem_all.c"
,
# 180 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 180 "crypto/pem/pem_all.c"
,0,
# 180 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 180 "crypto/pem/pem_all.c"
,
# 180 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 180 "crypto/pem/pem_all.c"
); } int PEM_write_DHxparams(FILE *out, const DH *x) { return PEM_ASN1_write((i2d_of_void *)i2d_DHxparams, "X9.42 DH PARAMETERS", out, x, 
# 180 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 180 "crypto/pem/pem_all.c"
, 
# 180 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 180 "crypto/pem/pem_all.c"
, 0, 
# 180 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 180 "crypto/pem/pem_all.c"
, 
# 180 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 180 "crypto/pem/pem_all.c"
); }



DH *PEM_read_bio_DHparams(BIO *bp, DH **x, pem_password_cb *cb, void *u)
{
    char *nm = 
# 186 "crypto/pem/pem_all.c" 3 4
              ((void *)0)
# 186 "crypto/pem/pem_all.c"
                  ;
    const unsigned char *p = 
# 187 "crypto/pem/pem_all.c" 3 4
                            ((void *)0)
# 187 "crypto/pem/pem_all.c"
                                ;
    unsigned char *data = 
# 188 "crypto/pem/pem_all.c" 3 4
                         ((void *)0)
# 188 "crypto/pem/pem_all.c"
                             ;
    long len;
    DH *ret = 
# 190 "crypto/pem/pem_all.c" 3 4
             ((void *)0)
# 190 "crypto/pem/pem_all.c"
                 ;

    if (!PEM_bytes_read_bio(&data, &len, &nm, "DH PARAMETERS", bp, cb, u))
        return 
# 193 "crypto/pem/pem_all.c" 3 4
              ((void *)0)
# 193 "crypto/pem/pem_all.c"
                  ;
    p = data;

    if (strcmp(nm, "X9.42 DH PARAMETERS") == 0)
        ret = d2i_DHxparams(x, &p, len);
    else
        ret = d2i_DHparams(x, &p, len);

    if (ret == 
# 201 "crypto/pem/pem_all.c" 3 4
              ((void *)0)
# 201 "crypto/pem/pem_all.c"
                  )
        (ERR_new(), ERR_set_debug("crypto/pem/pem_all.c",202,__func__), ERR_set_error)((9),((13 | (0x2 << 18L))),
# 202 "crypto/pem/pem_all.c" 3 4
       ((void *)0)
# 202 "crypto/pem/pem_all.c"
       );
    CRYPTO_free(nm, "crypto/pem/pem_all.c", 203);
    CRYPTO_free(data, "crypto/pem/pem_all.c", 204);
    return ret;
}


DH *PEM_read_DHparams(FILE *fp, DH **x, pem_password_cb *cb, void *u)
{
    BIO *b;
    DH *ret;

    if ((b = BIO_new(BIO_s_file())) == 
# 214 "crypto/pem/pem_all.c" 3 4
                                      ((void *)0)
# 214 "crypto/pem/pem_all.c"
                                          ) {
        (ERR_new(), ERR_set_debug("crypto/pem/pem_all.c",215,__func__), ERR_set_error)((9),((7 | (0x2 << 18L))),
# 215 "crypto/pem/pem_all.c" 3 4
       ((void *)0)
# 215 "crypto/pem/pem_all.c"
       );
        return 0;
    }
    BIO_ctrl(b,106,0x00,(char *)(fp));
    ret = PEM_read_bio_DHparams(b, x, cb, u);
    BIO_free(b);
    return ret;
}



int PEM_write_bio_PUBKEY(BIO *out, const EVP_PKEY *x) { int ret = 0; OSSL_ENCODER_CTX *ctx = OSSL_ENCODER_CTX_new_for_pkey(x, ( ( ( 0x04 | 0x80) ) | 0x02 ), "PEM", "SubjectPublicKeyInfo", (
# 226 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 226 "crypto/pem/pem_all.c"
)); if (OSSL_ENCODER_CTX_get_num_encoders(ctx) == 0) { OSSL_ENCODER_CTX_free(ctx); goto legacy; }; ret = OSSL_ENCODER_to_bio(ctx, out); OSSL_ENCODER_CTX_free(ctx); return ret; legacy: return PEM_ASN1_write_bio((i2d_of_void *)i2d_PUBKEY, "PUBLIC KEY", out, x, 
# 226 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 226 "crypto/pem/pem_all.c"
, 
# 226 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 226 "crypto/pem/pem_all.c"
, 0, 
# 226 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 226 "crypto/pem/pem_all.c"
, 
# 226 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 226 "crypto/pem/pem_all.c"
); } int PEM_write_bio_PUBKEY_ex(BIO *out, const EVP_PKEY *x, OSSL_LIB_CTX *libctx, const char *propq) { int ret = 0; OSSL_ENCODER_CTX *ctx = OSSL_ENCODER_CTX_new_for_pkey(x, ( ( ( 0x04 | 0x80) ) | 0x02 ), "PEM", "SubjectPublicKeyInfo", (propq)); if (OSSL_ENCODER_CTX_get_num_encoders(ctx) == 0) { OSSL_ENCODER_CTX_free(ctx); goto legacy; }; ret = OSSL_ENCODER_to_bio(ctx, out); OSSL_ENCODER_CTX_free(ctx); return ret; legacy: return PEM_ASN1_write_bio((i2d_of_void *)i2d_PUBKEY, "PUBLIC KEY", out, x, 
# 226 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 226 "crypto/pem/pem_all.c"
, 
# 226 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 226 "crypto/pem/pem_all.c"
, 0, 
# 226 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 226 "crypto/pem/pem_all.c"
, 
# 226 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 226 "crypto/pem/pem_all.c"
); } int PEM_write_PUBKEY(FILE *out, const EVP_PKEY *x) { int ret = 0; OSSL_ENCODER_CTX *ctx = OSSL_ENCODER_CTX_new_for_pkey(x, ( ( ( 0x04 | 0x80) ) | 0x02 ), "PEM", "SubjectPublicKeyInfo", (
# 226 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 226 "crypto/pem/pem_all.c"
)); if (OSSL_ENCODER_CTX_get_num_encoders(ctx) == 0) { OSSL_ENCODER_CTX_free(ctx); goto legacy; }; ret = OSSL_ENCODER_to_fp(ctx, out); OSSL_ENCODER_CTX_free(ctx); return ret; legacy: return PEM_ASN1_write((i2d_of_void *)i2d_PUBKEY, "PUBLIC KEY", out, x, 
# 226 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 226 "crypto/pem/pem_all.c"
, 
# 226 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 226 "crypto/pem/pem_all.c"
, 0, 
# 226 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 226 "crypto/pem/pem_all.c"
, 
# 226 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 226 "crypto/pem/pem_all.c"
); } int PEM_write_PUBKEY_ex(FILE *out, const EVP_PKEY *x, OSSL_LIB_CTX *libctx, const char *propq) { int ret = 0; OSSL_ENCODER_CTX *ctx = OSSL_ENCODER_CTX_new_for_pkey(x, ( ( ( 0x04 | 0x80) ) | 0x02 ), "PEM", "SubjectPublicKeyInfo", (propq)); if (OSSL_ENCODER_CTX_get_num_encoders(ctx) == 0) { OSSL_ENCODER_CTX_free(ctx); goto legacy; }; ret = OSSL_ENCODER_to_fp(ctx, out); OSSL_ENCODER_CTX_free(ctx); return ret; legacy: return PEM_ASN1_write((i2d_of_void *)i2d_PUBKEY, "PUBLIC KEY", out, x, 
# 226 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 226 "crypto/pem/pem_all.c"
, 
# 226 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 226 "crypto/pem/pem_all.c"
, 0, 
# 226 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 226 "crypto/pem/pem_all.c"
, 
# 226 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 226 "crypto/pem/pem_all.c"
); }

int PEM_write_bio_a(BIO *out, const b *x) { int ret = 0; OSSL_ENCODER_CTX *ctx = OSSL_ENCODER_CTX_new_for_c(x, PEM_SELECTION_e, "PEM", PEM_STRUCTURE_e, (
# 228 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 228 "crypto/pem/pem_all.c"
)); if (OSSL_ENCODER_CTX_get_num_encoders(ctx) == 0) { OSSL_ENCODER_CTX_free(ctx); goto legacy; }; ret = OSSL_ENCODER_to_bio(ctx, out); OSSL_ENCODER_CTX_free(ctx); return ret; legacy: return PEM_ASN1_write_bio((i2d_of_void *)i2d_e, d, out, x, 
# 228 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 228 "crypto/pem/pem_all.c"
, 
# 228 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 228 "crypto/pem/pem_all.c"
, 0, 
# 228 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 228 "crypto/pem/pem_all.c"
, 
# 228 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 228 "crypto/pem/pem_all.c"
); } int PEM_write_bio_a_ex(BIO *out, const b *x, OSSL_LIB_CTX *libctx, const char *propq) { int ret = 0; OSSL_ENCODER_CTX *ctx = OSSL_ENCODER_CTX_new_for_c(x, PEM_SELECTION_e, "PEM", PEM_STRUCTURE_e, (propq)); if (OSSL_ENCODER_CTX_get_num_encoders(ctx) == 0) { OSSL_ENCODER_CTX_free(ctx); goto legacy; }; ret = OSSL_ENCODER_to_bio(ctx, out); OSSL_ENCODER_CTX_free(ctx); return ret; legacy: return PEM_ASN1_write_bio((i2d_of_void *)i2d_e, d, out, x, 
# 228 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 228 "crypto/pem/pem_all.c"
, 
# 228 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 228 "crypto/pem/pem_all.c"
, 0, 
# 228 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 228 "crypto/pem/pem_all.c"
, 
# 228 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 228 "crypto/pem/pem_all.c"
); } int PEM_write_a(FILE *out, const b *x) { int ret = 0; OSSL_ENCODER_CTX *ctx = OSSL_ENCODER_CTX_new_for_c(x, PEM_SELECTION_e, "PEM", PEM_STRUCTURE_e, (
# 228 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 228 "crypto/pem/pem_all.c"
)); if (OSSL_ENCODER_CTX_get_num_encoders(ctx) == 0) { OSSL_ENCODER_CTX_free(ctx); goto legacy; }; ret = OSSL_ENCODER_to_fp(ctx, out); OSSL_ENCODER_CTX_free(ctx); return ret; legacy: return PEM_ASN1_write((i2d_of_void *)i2d_e, d, out, x, 
# 228 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 228 "crypto/pem/pem_all.c"
, 
# 228 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 228 "crypto/pem/pem_all.c"
, 0, 
# 228 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 228 "crypto/pem/pem_all.c"
, 
# 228 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 228 "crypto/pem/pem_all.c"
); } int PEM_write_a_ex(FILE *out, const b *x, OSSL_LIB_CTX *libctx, const char *propq) { int ret = 0; OSSL_ENCODER_CTX *ctx = OSSL_ENCODER_CTX_new_for_c(x, PEM_SELECTION_e, "PEM", PEM_STRUCTURE_e, (propq)); if (OSSL_ENCODER_CTX_get_num_encoders(ctx) == 0) { OSSL_ENCODER_CTX_free(ctx); goto legacy; }; ret = OSSL_ENCODER_to_fp(ctx, out); OSSL_ENCODER_CTX_free(ctx); return ret; legacy: return PEM_ASN1_write((i2d_of_void *)i2d_e, d, out, x, 
# 228 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 228 "crypto/pem/pem_all.c"
, 
# 228 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 228 "crypto/pem/pem_all.c"
, 0, 
# 228 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 228 "crypto/pem/pem_all.c"
, 
# 228 "crypto/pem/pem_all.c" 3 4
((void *)0)
# 228 "crypto/pem/pem_all.c"
); }
