#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000

#include <afxext.h>
#include "afxpriv.h"


// override MFC class
class CReportPreviewView : public CPreviewView
{
	DECLARE_DYNCREATE(CReportPreviewView)
protected:
				CReportPreviewView();
	virtual		~CReportPreviewView();
public:
	// override
	// bitmapped buttons in toolbar
	CBitmapButton m_print;
	CBitmapButton m_first;
	CBitmapButton m_next;
	CBitmapButton m_previous;
	CBitmapButton m_last;
	CBitmapButton m_zoomIn;
	CBitmapButton m_zoomOut;
	CBitmapButton m_pages;
private:
	// these variables are used in the page layout algorithm
	int			m_Across ;				// number across the page, >= 1
	int			m_Down ;				// number down the page, >= 1
	CPoint		m_PageOffset ;			// amount to move the page from one position to the next
	
	//{{AFX_VIRTUAL(CReportPreviewView)
protected:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	//virtual void OnDraw(CDC* pDC);
	//}}AFX_VIRTUAL
	
protected:
	virtual void	PositionPage(UINT nPage);
	void			SetScaledSize(UINT nPage);
	void			DoZoom(UINT nPage, CPoint point);
	void			SetZoomState(UINT nNewState, UINT nPage, CPoint point);
	CSize			CalcPageDisplaySize() ;
	void			SetupScrollbar() ;
	void			SetPrintOrientation(int mode);

	// note that is you change the maximum number of pages that cann be displayed in preview mode
	// you have to increase the size of this array to make sure there is an Dialog available for every
	// possible page that can be shown at once.
	PAGE_INFO		m_pageInfoArray2[9]; // Embedded array for the default implementation - replaces MFC one of size 2!

#ifdef _DEBUG
	virtual void	AssertValid() const;
	virtual void	Dump(CDumpContext& dc) const;
#endif
	
protected:
	//{{AFX_MSG(CReportPreviewView)
	afx_msg int		OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void	OnNumPageChange();
	afx_msg void	OnZoomIn();
	afx_msg void	OnZoomOut();
	afx_msg void	OnFirst();
	afx_msg void	OnLast();
	afx_msg void	OnNext();
	afx_msg void	OnPrev();
	afx_msg void	OnUpdateNumPageChange(CCmdUI* pCmdUI);
	afx_msg void	OnUpdateZoomIn(CCmdUI* pCmdUI);
	afx_msg void	OnUpdateZoomOut(CCmdUI* pCmdUI);
	afx_msg void	OnUpdateFirst(CCmdUI* pCmdUI);
	afx_msg void	OnUpdateLast(CCmdUI* pCmdUI);
	afx_msg void	OnUpdateNext(CCmdUI* pCmdUI);
	afx_msg void	OnUpdatePrev(CCmdUI* pCmdUI);
	afx_msg void	OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg BOOL	OnSetCursor(CWnd* pWnd, UINT nHitTest, UINT message);
	afx_msg void	OnPreviewPages();
	afx_msg void	OnClose();
	afx_msg void	OnFilePrint();
	afx_msg void	OnFilePrintPreview();
	//}}AFX_MSG
	afx_msg void	OnVScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar) ;
	afx_msg void	OnLandscape() ;
	DECLARE_MESSAGE_MAP()
public:

};

// the additional zoom level factors that wee support when zoomed in
// the default MFC range is 0, 1 and 2
#define ZOOM_IN_150     3
#define ZOOM_IN_200     4
#define ZOOM_IN_400     5

//{{AFX_INSERT_LOCATION}}
