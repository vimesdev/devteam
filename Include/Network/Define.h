#ifndef XDEFINE_H
#define XDEFINE_H

#ifdef __cplusplus
extern "C" {
#endif

#ifndef WIN32
typedef unsigned long 	ULONG;
typedef unsigned short 	USHORT;
typedef unsigned char 	UCHAR;
typedef wchar_t 		WCHAR;
typedef unsigned long       	DWORD;
typedef int                 	BOOL;
typedef unsigned char       	BYTE;
typedef unsigned short     	WORD;
typedef float               	FLOAT;
typedef int                 	INT;
typedef unsigned int        	UINT;
#ifndef max
#define max(a,b)            (((a) > (b)) ? (a) : (b))
#endif //max
#ifndef min
#define min(a,b)            (((a) < (b)) ? (a) : (b))
#endif //min


#define MAKEWORD(a, b)      ((WORD)(((BYTE)((DWORD_PTR)(a) & 0xff)) | ((WORD)((BYTE)((DWORD_PTR)(b) & 0xff))) << 8))
#define MAKELONG(a, b)      ((LONG)(((WORD)((DWORD_PTR)(a) & 0xffff)) | ((DWORD)((WORD)((DWORD_PTR)(b) & 0xffff))) << 16))
#define LOWORD(l)           ((WORD)((DWORD_PTR)(l) & 0xffff))
#define HIWORD(l)           ((WORD)((DWORD_PTR)(l) >> 16))
#define LOBYTE(w)           ((BYTE)((DWORD_PTR)(w) & 0xff))
#define HIBYTE(w)           ((BYTE)((DWORD_PTR)(w) >> 8))


#define MAX_PATH          260
#ifndef NULL
#ifdef __cplusplus
#define NULL    0
#else
#define NULL    ((void *)0)
#endif //cplus
#endif //NULL

#ifndef FALSE
#define FALSE               0
#endif

#ifndef TRUE
#define TRUE                1
#endif

#ifndef IN
#define IN
#endif

#ifndef OUT
#define OUT
#endif

#endif 




#include <wchar.h>
typedef unsigned char	ubyte;
typedef unsigned char	uchar;
typedef wchar_t			wchar;
typedef unsigned short	ushort;
typedef unsigned int	uint;
typedef unsigned long	ulong;
typedef long long		int64;
typedef long double		longdbl;
typedef unsigned long long uint64;

typedef signed char		schar;
typedef signed short	sshort;
typedef signed int		sint;
typedef signed long		slong;

#ifdef WIN32
typedef signed __int32	sint32;
typedef signed __int64	sint64;
#endif



#define	PATH_LENGTH		254

#ifdef WIN32
typedef int SOCKET_HANDLE;
#else
typedef int SOCKET_HANDLE;
#define INVALID_SOCKET (int)(~0)
#define SOCKET_ERROR	(-1)
#endif


#undef byte

#ifdef __cplusplus
}
#endif


#endif  //end define
