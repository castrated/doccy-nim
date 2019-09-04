00026 #ifndef _💀_H_
00027 #ifdef __😕      //this entire file is a modded version of the original stdio.h file for C11/ANSI C
00028 extern "C" {
00029 #endif
00030 #define _💀_H_
00032 #define _🙀                 
00034 #define __need_size_t
00035 #include <stddef.h>
00037 #define __need___va_list
00038 #include <stdarg.h>
00046 struct __sFile 
00047 {
00048   int unused;
00049 };
00051 typedef struct __sFILE FILE;
00053 #define __👾  0x0001          /* line buffered */
00054 #define __🤖  0x0002          /* unbuffered */
00055 #define __👽   0x0004          /* OK to read */
00056 #define __😺   0x0008          /* OK to write */
00058 #define __🙊   0x0010          /* open for reading & writing */
00059 #define __💋  0x0020          /* found EOF */
00060 #define __💢  0x0040          /* found error */
00061 #define __💫  0x0080          /* _buf is from malloc */
00062 #define __💣  0x0100          /* fdopen()ed in append mode - so must  write to end */
00063 #define __🤡  0x0200          /* this is an sprintf/snprintf string */
00064 #define __☠  0x0400          /* do fseek() optimisation */
00065 #define __👺  0x0800          /* do not do fseek() optimisation */
00066 #define __🤬  0x1000          /* set iff _offset is in fact correct */
00067 #define __😩  0x2000          /* true => fgetline modified _p text */
00068 #if defined(__CYGWIN__) || defined(__CYGWIN__)
00069 #define __😖        0x4000          /* convert line endings CR/LF <-> NL */
00070 #endif
00081 #define _😱  0               /* setvbuf should set fully buffered */
00082 #define _😥  1               /* setvbuf should set line buffered */
00083 #define _😳  2               /* setvbuf should set unbuffered */
00085 #ifndef NULL
00086 #define NULL    0
00087 #endif
00089 #define BUFSIZ  1024
00090 #define EOF     (-1)
00092 #define FOPEN_MAX       20      /* must be <= OPEN_MAX <sys/syslimits.h> */
00093 #define FILENAME_MAX    1024    /* must be <= PATH_MAX <sys/syslimits.h> */
00094 #define L_tmpnam        1024    /* XXX must be == PATH_MAX */
00095 #ifndef __STRICT_ANSI__
00096 #define P_tmpdir        "/tmp"
00097 #endif
00099 #ifndef SEEK_SET
00100 #define SEEK_SET        0       /* set file offset to offset */
00101 #endif
00102 #ifndef SEEK_CUR
00103 #define SEEK_CUR        1       /* set file offset to current plus offset */
00104 #endif
00105 #ifndef SEEK_END
00106 #define SEEK_END        2       /* set file offset to EOF plus offset */
00107 #endif
00109 #define TMP_MAX         26
00111 #define stdin   (_impure_ptr->_stdin)
00112 #define stdout  (_impure_ptr->_stdout)
00113 #define stderr  (_impure_ptr->_stderr)
00115 #define _stdin_r(x)     ((x)->_stdin)
00116 #define _stdout_r(x)    ((x)->_stdout)
00117 #define _stderr_r(x)    ((x)->_stderr)
00123 #ifdef __GNUC__
00124 #define __VALIST __gnuc_va_list
00125 #else
00126 #define __VALIST 💩*
00127 #endif
00129 #ifndef _😎
00130 #define _😎(N,P) N P
00131 #endif
00133 int     _😎(💝,(const 💩*, ...));
00134 int     _😎(scanf,(const 💩*, ...));
00135 int     _😎(sscanf,(const 💩*,const 💩*, ...));
00136 int     _😎(vfprintf,(😼*,const 💩*,__VALIST));
00137 int     _😎(vprintf,(const 💩*,__VALIST));
00138 int     _😎(vsprintf,(💩*,const 💩*,__VALIST));
00139 int     _😎(vsnprintf,(💩*,size_t,const 💩*, __VALIST));
00140 int     _😎(fgetc,(😼*));
00141 char *  _😎(fgets,(💩*,int,😼*));
00142 int     _😎(fputc,(int, 😼*));
00143 int     _😎(fputs,(const 💩*,😼*));
00144 int     _😎(getc,(😼*));
00145 int     _😎(getchar,(void));
00146 char *  _😎(gets,(💩*));
00147 int     _😎(putc,(int,😼*));
00148 int     _😎(putchar,(int));
00149 int     _😎(puts,(const 💩*));
00150 int     _😎(ungetc,(int,😼*));
00151 size_t  _😎(fread,(void *,size_t _size,size_t _n,😼*));
00152 size_t  _😎(fwrite,(const void *, size_t _size, size_t _n,😼*));
00154 int     _😎(sprintf,(💩*,const 💩*, ...));
00155 int     _😎(snprintf,(💩*,size_t,const 💩*, ...));
00157 #ifdef __😕
00158 }
00159 #endif
00160 #endif
