#ifndef DEFOBJTRACKER_H
#define DEFOBJTRACKER_H
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

#include <afxext.h>
#include <afxtempl.h>

class  AFX_EXT_CLASS CDrawObject
{
public:
	CDrawObject *m_pNextObj;
    CDrawObject();
    CDrawObject(LPCRECT lpSrcRect );
    virtual ~CDrawObject();
   	int		GetMinHeight();
	int		GetMinWidth();
	bool	IsEnableMinTrack();
	BOOL	IsEnableTrack();
	BOOL	IsSelected();
	void	SetSelect(BOOL bSelect);
	void	SetEnableTrack(BOOL bState);
	CRect GetRect();
	virtual void SetRect(CRect lpSrcRect) ;
	virtual void DrawObject(CDC *pDC);
	virtual void OnChangedRect(const CRect& oldRect);
	virtual void OnSelectObject(){}
protected:
	BOOL	m_bIsSelected;
	BOOL	m_bIsEnableTrack;
	CRect	m_rect;
	int		m_nMinWidth;
	int		m_nMinHeight;
	int		m_nMaxWidth;
	int		m_nMaxHeight;
	bool	m_bEnableTrackMin;
	
};



#define DTM_REDRAW	0x001

class  AFX_EXT_CLASS CDrawTracker :
	public CRectTracker
{
	
public:
	CDrawTracker();
	virtual ~CDrawTracker();
	void	Draw(CDC* pDC);
	int		HitTest( CPoint point );
	int		HitTestHandles(CPoint point);
	void	Add( CDrawObject* pObject );
	int		InsertAt(int nIndex, CDrawObject* obj);
	int		SetAt(int nIndex, CDrawObject* obj);
	void	Delete(int nIndex);
	int		DeleteAllSelected();
	void	DeleteAlls();
	BOOL	Track(CWnd *pWnd, CPoint point, UINT nFlags);
	BOOL	Track(CWnd *pWnd, UINT nChar, UINT nRepCnt, UINT nFlags);
	CRect GetBoundsRect();
	BOOL	SetCursor(CWnd *pWnd, UINT nHiTest);
	void	SetPosition(int x, int y, int cx, int cy);
	void	SetAlignLeft();
	void	SetAlignTop();
	void	SetSameWidth();
	void	SetSameHeight();
	void	SetSameRight();
	void	SetAlignRight(bool nMin = false);
	void	SetAlignBottom(bool nMin = false);
	CDrawObject*	GetCurrentObject();
	CDrawObject*	GetAt(int nIndex);
	int		GetCurSel();
	int		GetCount();
	void	SelectAll();
	void	UnSelectAll();
	void	OnChangedRect(const CRect& rectOld);
	bool	IsChanged();
	CArray <CDrawObject*, CDrawObject*> m_Objects; // Array of objects pointers	

protected:
  
  CArray <CDrawObject*, CDrawObject*> m_UndoList; // Array of objects pointers undo
  CDrawObject* m_pObject; // temporary pointer used if the hit is on an object.
	int		m_nGripSize;
	int		m_nCurSel;
	CSize	m_sizeMax;
	bool	m_bChanged;
	CRect	m_oldRect;
/*
	void AdjustRect(int nHandele, LPRECT lpRect)
	{
		m_sizeMax = CSize(200, 100);
		CRectTracker::AdjustRect(nHandele, lpRect);
		if(m_sizeMax.cx > 0 && lpRect->right > m_sizeMax.cx)
			lpRect->right = m_sizeMax.cx;
		if(m_sizeMax.cy > 0 && m_sizeMax.cy < lpRect->bottom)
			lpRect->bottom = m_sizeMax.cy;
		
	}
*/
};

#endif
