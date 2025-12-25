#ifndef STRINGUTIL_H
#define	STRINGUTIL_H
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


#include <afxwin.h>
#include <string>
#include <vector>

class AFX_EXT_CLASS StringUtil{
protected:
	
public:
	StringUtil();
	virtual ~StringUtil();
	static void		Clear();
	static LPSTR	Encode(LPCWSTR lpwcString, int nCodePage=CP_UTF8);
	static LPWSTR	Decode(LPCSTR lpszString, int nCodePage=CP_UTF8);
	static LPSTR	ToMBString(LPCTSTR lpszString, int nCodePage=CP_UTF8);
	static LPWSTR	ToWCString(LPCTSTR lpszString, int nCodePage=CP_UTF8);
	static LPCTSTR	MBToString(LPCSTR lpszString, int nCodePage=CP_ACP);
	static LPCTSTR	WCToString(LPCWSTR lpszString, int nCodePage=CP_ACP);
	static bool		InString(LPCTSTR szText, ...);
	static bool		InString(LPCTSTR szText, CStringArray& strList);
	static LPWSTR	fromUTF8(LPCSTR utf8Str);
	static LPSTR	toUTF8(LPCWSTR wideStr);	
	static void		toUTF8(LPCWSTR wideStr, LPSTR utf8Str);	
	
};


#endif