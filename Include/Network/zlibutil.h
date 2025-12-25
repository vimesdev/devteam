#ifndef ZLIBUTIL_H
#define ZLIBUTIL_H

#include <stdio.h>
 #include "zlib/zlib.h"
 #ifdef STDC
 #  include <string.h>
 #  include <stdlib.h>
 #else
    extern void exit  OF((int));
 #endif
 #if defined(VMS) || defined(RISCOS)
 #  define TESTFILE "foo-gz"
 #else
 #  define TESTFILE "foo.gz"
 #endif
 #define CHECK_ERR(err, msg) { \
     if (err != Z_OK) { \
         fprintf(stderr, "%s error: %d\n", msg, err); \
         exit(1); \
     } \
 }
 const char hello[] = "hello, hello!";
 /* "hello world" would be more standard, but the repeated "hello"
  * stresses the compression code better, sorry...
  */
 const char dictionary[] = "hello";
 static uLong dictId; /* Adler32 value of the dictionary */
 void zlib_compress      OF((Byte *compr, uLong comprLen,
                             Byte *uncompr, uLong uncomprLen));
 void zlib_gzio          OF((const char *out, const char *in,
                             Byte *uncompr, int uncomprLen));
 void zlib_deflate       OF((Byte *compr, uLong comprLen));
 void zlib_inflate       OF((Byte *compr, uLong comprLen,
                             Byte *uncompr, uLong uncomprLen));
 void zlib_large_deflate OF((Byte *compr, uLong comprLen,
                             Byte *uncompr, uLong uncomprLen));
 void zlib_large_inflate OF((Byte *compr, uLong comprLen,
                             Byte *uncompr, uLong uncomprLen));
 void zlib_flush         OF((Byte *compr, uLong *comprLen));
 void zlib_sync          OF((Byte *compr, uLong comprLen,
                             Byte *uncompr, uLong uncomprLen));
 void zlib_dict_deflate  OF((Byte *compr, uLong comprLen));
 void zlib_dict_inflate  OF((Byte *compr, uLong comprLen,
                             Byte *uncompr, uLong uncomprLen));
#endif


