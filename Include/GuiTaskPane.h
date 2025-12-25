#ifndef GUITASKPANE_H
#define GUITASKPANE_H

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

#include "afxwin.h"
#include "GuiListBox.h"

class AFX_EXT_CLASS CGuiTaskPane : public CWnd
{
	
	int			m_nPaneWidth;
	CString		m_szTask;
	CString		m_szCaption;
	CString		m_szNote;
	CWnd*		m_wndActive;
	LOGFONT		m_lf;
	bool		m_bAutoCenter;

	CBitmap		m_bmpBackground;
	CLayoutCtrl	m_layout;
	CGuiListBox		m_wndList;
	int	(*_OnSelectItemFnc)(CWnd *, int, int);
	
	
	void		DrawNote(CDC *pDC);
public:
	

	CGuiTaskPane(void);
	~CGuiTaskPane(void);
	//Tao cua so task 
	BOOL	Create(CWnd *pParent, int x, int y, int cx, int cy, UINT nID = NULL);
	BOOL	Create(CWnd *pParent, CRect rect = CRect(0, 0, 0, 0));

	//Them cac task item vao danh sang 
	int		AddItem(LPCTSTR lpszItem, CWnd *pWnd = NULL, int nSubItem=0, bool bEnable=true, bool bBold=false, bool bItalic=false, UINT nIcon=-1);
	//Chon mot item hien tai = nIndex
	void 	SetCurSel(int nIndex);
	//Tra ve muc hien tai duoc chon.
	int		GetCurSel();
	//Thiet lap do rong cho task
	void	SetPaneWidth(int nWidth);
	void	SetItemHeight(int nHeight);
	//Lay do rong cua task
	int		GetPaneWidth();
	//Tra ve tong so muc (item) trong task
	int		GetItemCount();
	//Hien noi dung note o cuoi 
	void	SetNote(CString szNote);
	//Tra ve con tro m_wndList
	CWnd*	GetPane();
	//Lay cua so (CWnd) hien tai
	CWnd*	GetActiveWnd();
	//Gan cua so khac cho task
	CWnd*	SetPaneWnd(int nIndex, CWnd*pWnd);
	//Ham don nhan su kien khi click chuot tren cac task
	void	SetEventFnc(void *pEventFnc);
	//Ham khoi tao cacs gia tri khi cua so duoc tao.
	virtual void OnInitializes(){}	
	
	int		OnSelItemChange(int nOldItem, int nNewItem);
	void	SetAutoCenter(bool bCenter);

protected:	
	
	afx_msg void OnPaint();
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnNcPaint();
	afx_msg BOOL OnEraseBkgnd(CDC* pDC);
	afx_msg void OnSize(UINT nType, int cx, int cy);

	DECLARE_MESSAGE_MAP()
};


#endif