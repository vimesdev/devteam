#ifndef STRINGTOKEN_H
#define STRINGTOKEN_H
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


#include "afxcoll.h"


class AFX_EXT_CLASS CStringToken
{
protected:
	CStringArray	m_Tokens;
public:
	//ExceptionNull=true:  Se bo qua cac phan tu ma gia tri =''
	//ExceptionNull=false: Se phan tich tat ca cac phan tu duoc ngan cach boi lpszDelimiter;
	CStringToken(LPCTSTR lpszInput, LPCTSTR lpszDelimiter=_T(","), bool bExceptionNull = true);
	~CStringToken(void);
	int	GetSize();
	void GetAt(int nIndex, int& value);
	void GetAt(int nIndex, long& value);
	void GetAt(int nIndex, float& value);
	void GetAt(int nIndex, double& value);
	void GetAt(int nIndex, DWORD& value);
	void GetAt(int nIndex, WORD& value);
	void GetAt(int nIndex, CString& value);
};

#endif
