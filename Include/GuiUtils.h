#ifndef GUIUTILS_H
#define GUIUTILS_H
//////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Copyright(C) VIETNAM MEDICAL SOFTWARE JOINT STOCK COMPANY. 2008-2010.							  
//	All rights reserved.
//	This program is protected by Viet nam and international treaties.  
//	Unauthorized reproduction or distribution of this program, 
//	or any portion of it, may result in severe civil and criminal penalties, 
//	and will be prosecuted to the maximum extent possible under the law.
//	This file is a part of the GUI(Graphical User Interface) class library.
//	(c) 2006-2008 Hay Hoang Van, All rights reserved.
//	CONTACT INFORMATION:
//	hayhv@vimes.com.vn or hayhv@yahoo.com
//	http://www.vimes.com.vn
//
//	Ban quy cua CONG TY CO PHAN PHAN MEM Y TE VIET NAM (VIMES).
//	Do Cuc Ban Quyen, Bo VHTT nuoc Cong hoa xa hoi chu nghia Viet Nam cap.
//	Chuong trinh phan mem nay duoc Luat phap Viet Nam va quoc te bao ho.
//	San xuat, su dung hoac phan phoi trai phep toan bo hoac mot phan cua phan men nay se
//	chiu cac hinh phat va hinh su hoac dan su, co the len den muc toi da dung theo Luat qui dinh.
//	File nay la mot phan cua thu vien lap trinh (GUI). Ban quyen cua Hoang Van Hay. 2006-2008
//	THONG TIN LIEN HE:
//	hayhv@vimes.com.vn hoac hayhv@yahoo.com
//	http://www.vimes.com.vn
//////////////////////////////////////////////////////////////////////////////////////////////////////////


#include <iostream>
#include "GuiDefs.h"

#if (_MSC_VER >= 1500)
typedef LRESULT HTRESULT;
#else
typedef UINT	HTRESULT;
#endif


#pragma data_seg("SHARED")
static int	nLOCALLANGUAGE=1;
static TCHAR chDECIMALSEPARATOR=_T('.');
static TCHAR chTHOUSANDSSEPARATOR=_T(',');
static int	mFracDigits = 2;
static bool mHasTrimDecimal=false;
#pragma data_seg()
#pragma comment(linker, "/section:SHARED,RWS")

#define VIMES_VERSION	5.0



BOOL CALLBACK ChangeChildFontProc(HWND hwndChild, LPARAM lParam) ;
void	ConstructFont(CWnd *pParent, int nSize);



#ifdef __cplusplus

extern "C" {
#endif

#define _debugfunc cout << __FUNCTION__ << endl

int	DLLEXPORT	_GetNextID();
void DLLEXPORT _msg(TCHAR* szFmt, ...);
void DLLEXPORT _debug(LPCTSTR szFmt, ...);
void DLLEXPORT _msgrect(CRect rect);
void DLLEXPORT _fmsg(TCHAR *fmt, ...);
void DLLEXPORT _flog(TCHAR *fmt, ...);
/****************************************
**	Check each character in the string is digit
**  Example:
**		szDigit = "1000.005" -> IsDigit(szDigit)=TRUE
**		szDigit = "1000.005a" -> IsDigit(szDigit) = FALSE
****************************************/
BOOL DLLEXPORT	IsDigit(LPCTSTR szText);

/****************************************************************
** Convert szDigit into one or more integers.  Additional arguments
** come in groups of 5 as follows:
**
**       N       number of digits in the integer
**       min     minimum allowed value of the integer
**       max     maximum allowed value of the integer
**       nextC   first character after the integer
**       pVal    where to write the integers value.
**
** Conversions continue until one with nextC==0 is encountered.
** The function returns the number of successful conversions.
******************************************************************/
int		DLLEXPORT GetDigits(const TCHAR *szDigit, ...);
void	DLLEXPORT SetDecimalSeparator(TCHAR chDot);
int		DLLEXPORT SetFracDigits(int nFracDigits);
void	DLLEXPORT SetTrimDecimal(bool bTrim);
int		DLLEXPORT GetFracDigits();
void	DLLEXPORT FormatCurrency(double value, CString& ret, int nFraction=-1);
void	DLLEXPORT FormatCurrencyStr(CString value, CString& ret, int nFraction=-1);
void	DLLEXPORT UnFormatCurrency(double value, CString& ret);
void	DLLEXPORT UnFormatCurrencyStr(CString value, CString& ret);
void	DLLEXPORT GetTextSel(LPCTSTR lpszText, LPCTSTR szBegin, LPCTSTR szEnd, int& nBegin, int &nEnd);
int		DLLEXPORT StringSplit(const CString &str, CStringArray &arr, TCHAR chDelimitior=_T(','), BOOL bPrefix=FALSE);
void	DLLEXPORT StringLower(LPCTSTR szText, CString& szDest);
void	DLLEXPORT StringUpper(LPCTSTR szText, CString& szDest);
TCHAR	DLLEXPORT CharToLower(TCHAR ch);
TCHAR	DLLEXPORT CharToUpper(TCHAR ch);
void	DLLEXPORT PreInitCap(LPCTSTR szText, CString& szDest);
void	DLLEXPORT InitCap(LPCTSTR szText, CString& szDest);
void	DLLEXPORT SplitName(LPCTSTR lpszText, CString& szSurName, CString& szMidName, CString& szFirstName);
void	DLLEXPORT GetShortName(LPCTSTR lpszText, CString& szShortName);
void	DLLEXPORT UnMarkString(LPCTSTR lpszSource, LPTSTR lpszDest);
LPCTSTR	DLLEXPORT ToString(double dVal);
LPCTSTR	DLLEXPORT int2str(int nVal);
LPCTSTR	DLLEXPORT long2str(long nVal);
LPCTSTR	DLLEXPORT double2str(double nVal);
bool	DLLEXPORT ToBool(LPCTSTR szVal);
int		DLLEXPORT ToInt(LPCTSTR szVal);
#define str2int(val) ToInt(val)
long	DLLEXPORT ToLong(LPCTSTR szVal);
#define str2long(val) ToLong(val)
float	DLLEXPORT ToFloat(LPCTSTR szVal);
#define str2float(val) ToFloat(val)
double	DLLEXPORT ToDouble(LPCTSTR szVal);
#define str2double(val) ToDouble(val)
double	DLLEXPORT Round(double d);
double	DLLEXPORT RoundNumber(double r,unsigned places);
LPCTSTR	DLLEXPORT ToHexa(long lVal);
int		DLLEXPORT CompareDate(LPCTSTR lpszDate1, LPCTSTR lpszDate2);
int		DLLEXPORT CompareDateTime(LPCTSTR lpszDateTime1, LPCTSTR lpszDateTime2);


#define DBS_LEFT	0x001
#define DBS_RIGHT	0x002
#define DBS_TOP		0x004
#define DBS_BOTTOM	0x008
#define DBS_FILL	0x010
#define DBS_TOPLEFT (DBS_LEFT|DBS_TOP)
#define DBS_RIGHTBOTTOM	(DBS_RIGHT|DBS_BOTTOM)
#define DBS_ALL		(DBS_LEFT|DBS_TOP|DBS_RIGHT|DBS_BOTTOM|DBS_FILL)

void	DLLEXPORT DrawBox(CDC *pDC, CRect rect, COLORREF clrBorder=RGB(0,0,0) , COLORREF clrBackground=RGB(255, 255, 255), int nBorderWidth=1, DWORD dwStyle=DBS_LEFT|DBS_TOP|DBS_RIGHT|DBS_BOTTOM, DWORD penStyle=PS_SOLID);
void	DLLEXPORT DrawFrameRect(CDC *pDC, CBitmap* bitmap, CRect rect, int nIndex=1, int nCount=1, int clipleft = 0, int cliptop = 0, int clipright = 0, int clipbottom=0, bool bStretchBlt=false);
void	DLLEXPORT FillBitmap(CDC *pDC, HBITMAP hbmp, CRect rect, bool bHor=TRUE);
void	DLLEXPORT CreateBitmapMask(HBITMAP hSourceBitmap, HBITMAP& hDestBitmap, DWORD dwWidth=0, DWORD dwHeight=0, COLORREF clrTransColor=RGB(0, 255, 0));
void	DLLEXPORT CopyBitmap(CDC* pDC, CBitmap& mRes, const CBitmap& hbmp, CRect rect);
void	DLLEXPORT CopyBitmapFromDC(CDC* pDC, CBitmap& mRes, CRect rect);
void	DLLEXPORT DrawBitmap(CDC* pDC, HBITMAP hbmp, CRect rect, BOOL Stretch=FALSE);
bool	DLLEXPORT GetFolder(CString& szPath, const CString szCaption, HWND hOwner = NULL);
void	DLLEXPORT DrawGradientRect(CDC * pDC, CRect &rect, COLORREF cr1, COLORREF cr2, DWORD dwStyle=GRADIENT_FILL_RECT_V);
void	DLLEXPORT DrawTransparentBitmap(CDC *pDC, int x, int y, int width, int height, HBITMAP hBitmap, int xsrc, int ysrc, int widthsrc, int heightsrc, COLORREF clr=COLOR_BLACK);
int		DLLEXPORT DrawHTML(HDC hdc,LPCTSTR lpString,int nCount, LPRECT  lpRect,UINT uFormat);

//This functions only use when initialize CMainFrame
void	DLLEXPORT ResetMessage();
void	DLLEXPORT AddMessage(int nID, CString szMessage, CString szStdMessage);
int		DLLEXPORT ShowMessage(int nID, UINT nType=MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2, CString szEnMessage=_T(""));
int		DLLEXPORT ShowMessageBox(CString szText, UINT nType=MB_OK, UINT nID=0);
void	DLLEXPORT CleanupDictionary();
void	DLLEXPORT AddDictionary(LPCTSTR lpszName, LPCTSTR szEnglish, LPCTSTR szOthLang);
void	DLLEXPORT TranslateString(CString lpszString, CString& szDesc);
void	DLLEXPORT SetLocalLang(int nLocalLang);
int		DLLEXPORT GetLocalLang();
void	DLLEXPORT SetFaceName(LPCTSTR lpszFace);
LPCTSTR	DLLEXPORT GetFaceName();
void	DLLEXPORT SetFaceSize(int nSize);
int		DLLEXPORT GetFaceSize();
void	DLLEXPORT RepositionWindow(CWnd *pWnd, CWnd* pReposWnd, UINT nFlags);
LPTSTR DLLEXPORT RectToString(CRect rect);

enum WinVer
{
    wvUndefined,
    wvWin32s,
    wvWin95,
    wvWin98,
    wvWinME,
    wvWinNT3,
    wvWinNT4,
    wvWin2000,
    wvWinXP,
	wvWin2003,
	wvWinVista,
	wvWindows7,
	wvWindows10
};

///////////////////////////////////////////////////////////////////////////////
// Return the current OS-Type
//
WinVer WINAPI GetWinVersion ();
HBITMAP WINAPI GetScreenBitmap (LPCRECT pRect);

void AFXAPI DDX_TextEx(CDataExchange* pDX, int nIDC, CString& value);
void AFXAPI DDX_RadioEx(CDataExchange *pDX, int nIDC, int &value);


int	DLLEXPORT CalcExprDouble(LPCTSTR lpszString, double &dValue);
int	DLLEXPORT CalcExprLong(LPCTSTR lpszString, long &dValue);
void DLLEXPORT SetWindowFont(CWnd *pWnd, LPCTSTR lpszFace, int nSize, bool bBold=false, bool bItalic=false, bool bUnderline=false);
bool DLLEXPORT Bin2ASCII(unsigned char *pIn,   long lSize,   unsigned char **ppOut);
bool DLLEXPORT ASCII2Bin(unsigned char *pIn,   long lSize,   unsigned char **ppOut);
void DLLEXPORT CryptData(LPTSTR inp, DWORD inplen, LPTSTR key = _T(""), DWORD keylen = 0);
void DLLEXPORT CryptFile(LPCTSTR lpszFileSource, LPCTSTR lpszFileDest, LPCTSTR lpszKey);
void DLLEXPORT md5(const unsigned char *data, unsigned int len, char *buf);
int  DLLEXPORT CompressFile(LPCTSTR lpszInFile, LPCTSTR lpszOutFile);
int  DLLEXPORT DecompressFile(LPCTSTR lpszInFile, LPCTSTR lpszOutFile);
void DLLEXPORT MoneyToString(CString szValue, CString& szString);
int	 DLLEXPORT ReadFileData(HANDLE file, CString& szData, DWORD size);
void DLLEXPORT ChecksumFile(LPCTSTR, CString& szChecksum);
void DLLEXPORT SwitchDebug();
bool DLLEXPORT IsDebuging();
BOOL DLLEXPORT IsExistingProcess(LPCTSTR lpszApplicationName );
bool DLLEXPORT FileExists(const TCHAR *fileName);
void DLLEXPORT GetCertificate();

#ifdef __cplusplus
}
#endif

#endif