#ifndef DDXDATA_H
#define DDXDATA_H
#include <afxwin.h>

class AFX_EXT_CLASS CDDXData
{
public:
	CDDXData(void);
	~CDDXData(void);
	static void UpdateData(CWnd *pWnd, BYTE& value, BOOL bSaveAndValidate=TRUE);
	static void UpdateData(CWnd *pWnd, short& value, BOOL bSaveAndValidate=TRUE);
	static void UpdateData(CWnd *pWnd, int& value, BOOL bSaveAndValidate=TRUE);
	static void UpdateData(CWnd *pWnd, UINT& value, BOOL bSaveAndValidate=TRUE);
	static void UpdateData(CWnd *pWnd, long& value, BOOL bSaveAndValidate=TRUE);
	static void UpdateData(CWnd *pWnd, DWORD& value, BOOL bSaveAndValidate=TRUE);
	static void UpdateData(CWnd *pWnd, CString& value, BOOL bSaveAndValidate=TRUE);
	static void UpdateData(CWnd *pWnd, float& value, BOOL bSaveAndValidate=TRUE);
	static void UpdateData(CWnd *pWnd, double& value, BOOL bSaveAndValidate=TRUE);
	static void UpdateData(CWnd *pWnd, COleCurrency& value, BOOL bSaveAndValidate=TRUE);
	static void UpdateData(CWnd *pWnd, COleDateTime& value, BOOL bSaveAndValidate=TRUE);

};

#endif