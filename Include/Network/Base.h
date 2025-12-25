#ifndef BASEDEF_H
#define BASEDEF_H
typedef			char	CHAR;
typedef			short	SHORT;
typedef			int		INT;
typedef			long	LONG;
typedef			float	FLOAT;
typedef			double	DOUBLE;

typedef unsigned char	UCHAR;
typedef unsigned short	USHORT;
typedef unsigned int	UINT;
typedef unsigned long	ULONG;
typedef unsigned char	BYTE;
typedef unsigned short	WORD;
typedef unsigned int	DWORD;
typedef unsigned long	LDWORD;
//typedef			wchar_t	WCHAR;

#ifdef XWIN64
typedef unsigned __int64	INTPTR;
typedef unsigned __int64	LONGPTR;
#else
typedef unsigned int		INTPTR;
typedef unsigned long		LONGPTR;
#endif


#endif