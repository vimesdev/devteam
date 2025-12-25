#ifndef QRCODEGEN_H
#define QRCODEGEN_H

#ifndef DllEXPORT
#define DllEXPORT   __declspec( dllexport )
#endif

DllEXPORT int qrcode_generator(char * lpszSource, char * lpszFile=NULL);
#endif