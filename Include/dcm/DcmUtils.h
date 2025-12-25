#ifndef DCMUTILS_H
#define DCMUTILS_H

#include <map>
#include <vector>
#include <atlstr.h>

#define DCM_DLLEXPORT __declspec(dllexport)

#define SAFE_DELETE(data) if(data!=NULL) delete data; data=NULL;


LPSTR*   CommandLineToArgvA(LPCTSTR cmdLine, int* argc);

#endif
