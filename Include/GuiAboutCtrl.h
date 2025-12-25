#ifndef ABOUTDLG_H
#define ABOUTDLG_H

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Copyright(C) VIETNAM MEDICAL SOFTWARE JOIN STOCK COMPANY. 2008-2010.							  
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

#include "afxwin.h"
#include "Resource.h"
#include "GuiDialog.h"
class AFX_EXT_CLASS CGuiAboutCtrl : public CWnd
{
	HDC m_hLogoDC; 
	HDC m_hBackgroundDC; 
	HDC m_hMemDC; 
	HDC m_hCreditsDC;
	
	// logo dimensions
	int m_cxLogo, m_cyLogo;
	// logo angle
	int m_xAngle, m_yAngle;
	// logo 'fly' speed
	int m_nSpeed;
	// logo position
	int m_xPos, m_yPos; 
	int m_xWidth, m_yHeight;

	int m_cxData;
	int m_cyData;

	int m_nCounter;
	CString m_szCredits;
	CString m_szTitle;
	void SetCredits(LPCTSTR lpszCredits);
	
	
	void AnimateLogo();
	void LoadPicture(int nResourceID, HDC &hDestinationDC, int &nWidth, int &nHeight, HDC hDC);
	void LoadCredits(HDC &hDestination, int nWidth, int nHeight, HDC hDC);

// Construction
public:
	CGuiAboutCtrl();   // standard constructor
	~CGuiAboutCtrl();
	void SetTitle(LPCTSTR lpszTitle);
	void Create(CWnd *pParent);
	void Initialize();

	// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CGuiAboutCtrl)
		// NOTE: the ClassWizard will add member functions here
	afx_msg void OnTimer(UINT nIDEvent);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
public:
	
};

class AFX_EXT_CLASS CGuiAboutDialog: public CDialog{
	CGuiAboutCtrl	m_wndAbout;
public:
	CGuiAboutDialog(CWnd *pParent=NULL);
	~CGuiAboutDialog(){}

	virtual BOOL OnInitDialog();
	DECLARE_MESSAGE_MAP()
	afx_msg UINT OnNcHitTest(CPoint point);
	afx_msg void OnSize(UINT nType, int cx, int cy);
};


#endif 
