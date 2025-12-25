#ifndef GUIPICTURECTRL_H
#define GUIPICTURECTRL_H
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
#include <afxdlgs.h>
#include "GuiBitmapButton.h"

class AFX_EXT_CLASS CGuiPictureCtrl :
	public CWnd
{
	CPtrArray		m_bmpPtr;
	CStringArray	m_bmpFiles;
	int				m_nCurSel;
	CString			m_szFileName;
	CGuiBitmapButton	m_wndPrev;
	CGuiBitmapButton	m_wndFull;
	CGuiBitmapButton	m_wndNext;
	CString			m_szFilter;
public:
	BOOL	(*_AddImageFnc)(CWnd *pWnd, CString szFileName);
	BOOL	(*_EditImageFnc)(CWnd *pWnd, CString szFileName);
	BOOL	(*_RemoveImageFnc)(CWnd *pWnd, CString szFileName);
	BOOL	(*_PreviewImageFnc)(CWnd *pWnd);
	BOOL		IsAutoResize();
	CString		GetFileName() const;
	void		SetAutoResize(BOOL bAutoResize=TRUE);
	void		SetContextMenu(bool bFlags) {m_bUseContextMenu = bFlags;}
	void		SetFileName( const CString& FileName, BOOL bRedraw=FALSE);
	BOOL		Create(CWnd *pParent, CRect rect);
	BOOL		Create(CWnd* pParent, int x, int y, int cx, int cy);
	BOOL		CreateFromHBITMAP(HBITMAP hBitmap);
	BOOL		SaveFile(LPCTSTR lpszFileName);
	BOOL		AddFile(LPCTSTR lpszFileName);
	BOOL		AddHBITMAP(HBITMAP hbmp);
	BOOL		HasBitmap();

	int			GetWidth();
	int			GetHeight();
	HBITMAP		GetHBITMAP();
	void		SetAddImageFnc(BOOL (*)(CWnd*, CString));
	void		SetEditImageFnc(BOOL (*)(CWnd*, CString));
	void		SetRemoveImageFnc(BOOL (*)(CWnd*, CString));
	void		SetPreviewFnc(BOOL (*)(CWnd*));
	void		SetCurSel(int nSel);
	void		Release();
	void		SetFilter(LPCTSTR lpszFilter);
	CGuiPictureCtrl(void);
	virtual ~CGuiPictureCtrl();

	// Generated message map functions
protected:
	//{{AFX_MSG(CGuiPictureCtrl)
	afx_msg void OnPaint();
	afx_msg BOOL OnEraseBkgnd(CDC* pDC);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()

	BOOL		m_bIsAutoResize;
	int			m_nWidth, m_nHeight;
	bool		m_bUseContextMenu;
public:
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* /*pWnd*/, CPoint /*point*/);
	afx_msg void OnClose();
	afx_msg void OnNcPaint();;
	afx_msg BOOL OnMouseWheel(UINT nFlags, short zDelta, CPoint pt);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnTimer(UINT nIDEvent);
protected:
	virtual BOOL OnCommand(WPARAM wParam, LPARAM lParam);
public:
	afx_msg void OnSize(UINT nType, int cx, int cy);
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
};



class  AFX_EXT_CLASS CPictureFileDialog :
	public CFileDialog
{
public:
	CGuiPictureCtrl		m_picture;
	CStatic		m_lbWidth;
	CStatic		m_lbHeight;
	CStatic		m_lbSize;

	CPictureFileDialog(BOOL bOpenFileDialog,
					LPCTSTR lpszFilter = NULL,
					LPCTSTR lpszDefExt = NULL,
					LPCTSTR lpszFileName = NULL,
					DWORD dwFlags = OFN_HIDEREADONLY | OFN_OVERWRITEPROMPT,
					CWnd* pParentWnd = NULL,
					DWORD dwSize = 0);

	~CPictureFileDialog(void);
protected:
	virtual void OnInitDone();
	virtual void OnFileNameChange();
};


#endif