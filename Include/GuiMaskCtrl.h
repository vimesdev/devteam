#ifndef GUIMASKCTRL_H
#define GUIMASKCTRL_H
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


#include "GuiTextCtrl.h"


enum enumMaskType
{
    MaskTypeDECIMALSEPARATOR=0,  // Decimal separator. 
    MaskTypeTHOUSANDSSEPARATOR,  // Thousands separator. 
    MaskTypeTIMESEPARATOR     ,  // Time separator. 
    MaskTypeDATESEPARATOR     ,  // Date separator. 
    MaskTypeDIGIT             ,  // # digit placeholder (0-9). 
    MaskTypeALPHANUMERIC      ,  // A alphanumeric character placeholder (0-9 and a-Z). 
    MaskTypeALPHABETIC        ,  // ? Alphabetic placeholder (a-Z). 
    MaskTypeALPHAETICUPPER    ,  // > Alphabetic placeholder, but forced to Uppercase characters (A-Z). 
    MaskTypeALPHAETICLOWER    ,  // < Alphabetic placeholder, but forced to Lowercase characters (a-z). 
    MaskTypeCHARACTER         ,  // # character placeholder (ANSI characters 32-126 and 128-255). 
    MaskTypeLITERALESCAPE     ,  // All other symbols are displayed as themselves. 
    MaskTypeLITERAL           ,  // All other symbols are displayed as themselves. 
    MaskTypeCOUNT
} ;


class CMaskData;
class AFX_EXT_CLASS CGuiMaskCtrl :
	public CGuiTextCtrl
{
protected:
	CArray<CMaskData*, CMaskData*>	m_MaskDataList;
	int		m_nMaskLength;
	BOOL	m_bInsertMode;
	BOOL	m_bNumericMode;
	TCHAR	m_chPromptSymbol;
	TCHAR	m_chDecimal;
	TCHAR	m_chThousands;
	TCHAR	m_chTime;
	TCHAR	m_chDate;
	int		GetInputLocation(int nPosition, BOOL bNext=TRUE);
	void	MoveCare(int& nPosition, BOOL bNext=TRUE);
public:
	CGuiMaskCtrl(void);
	~CGuiMaskCtrl(void);
	virtual void	SetMask(LPCTSTR szMask);
	virtual BOOL	SetData(LPCTSTR szData, int nBeginPos=0, BOOL bIsAllowPrompt=FALSE);
	int		InsertAt(int nIndex, TCHAR chValue);
	BOOL	SetAt(int nIndex, TCHAR chValue);
	BOOL	DeleteAt(int nIndex);

	void	DeleteContents();
	int		DeleteRange(int nStart, int nEnd);
	CString	ShowMask();
	CString	GetMask();
	CString	GetData();
	BOOL	IsInputData(int nIndex);
	void	Update(int nSelection);
	void	OnPaste();
	virtual void OnSetWindowText(WPARAM,LPARAM);
	

	DECLARE_MESSAGE_MAP()
	afx_msg void OnChar(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void OnEnSetfocus();
	
	
protected:
	virtual LRESULT WindowProc(UINT message, WPARAM wParam, LPARAM lParam);
public:
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
};

#endif