#ifndef GUISCROLLWND_H
#define GUISCROLLWND_H
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

class AFX_EXT_CLASS CGuiScrollWnd :
	public CWnd
{
protected:
	int		m_nZoom;
	int		m_nZoomMin;
	long	m_nZoomMax;
	CSize	m_szTotalSize;
public:
	CGuiScrollWnd(void);
	~CGuiScrollWnd(void);
	BOOL	Create(DWORD dwStyle, CRect rect, CWnd* pParentWnd);
	virtual	void OnDrawBackground(CDC *pDC, CRect rect);
	virtual void OnDraw(CDC *pDC, CRect rect);

	void	SetupScrollBars();
	void	ResetScrollBars();
	void	SetVirtualSize(const CSize& size);
	CSize	GetVirtualSize();
	void	SetZoom(long nZoom);
	long	GetZoom();
	void	SetZoomMax(long zoommax);
	void	SetZoomMin(int soommin);
	long	GetZoomMax();
	int		GetZoomMin();
	void	SetHScroll(int nScroll);
	void	SetVScroll(int nScroll);
	CPoint	ScrollPoint(CPoint point);
	void	ScreenToVirtual(CRect& rect);
	void	ScreenToVirtual(CPoint& point);
	void	ScreenToVirtual(CSize& size);
	void	VirtualToScreen(CRect& rect);
	void	VirtualToScreen(CPoint& point);
	void	VirtualToScreen(CSize& size);
	

	DECLARE_MESSAGE_MAP()
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnSize(UINT nType, int cx, int cy);
	afx_msg void OnVScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar);
	afx_msg void OnHScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar);
	afx_msg void OnPaint();
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
	afx_msg BOOL OnMouseWheel(UINT nFlags, short zDelta, CPoint pt);
};

#endif