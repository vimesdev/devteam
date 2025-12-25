#ifndef SERVICEMANAGER_H
#define SERVICEMANAGER_H
#include "GuiUtils.h"

BOOL DLLEXPORT IsExistingProcess(LPCTSTR lpszApplicationName );
bool DLLEXPORT FileExists(const TCHAR *fileName);
void _declspec(dllexport) StartServiceEx(CString szFolder, CString szService, CString szParams=_T(""));

#endif