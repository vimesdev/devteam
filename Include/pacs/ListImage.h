#pragma once
class CThumbnailControl;

// CThumbnailControl
class CListImage: public CListCtrl{
public:
	CImageList	m_ImageList;	

	CListImage();
	~CListImage();
	BOOL	Create(CWnd *pParent, int x, int y, int w, int h);

	DECLARE_MESSAGE_MAP()
	afx_msg void OnLvnItemchanged(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnNMCustomdraw(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
};


struct THUMBNAILINFO{
	HBITMAP hBitmap;
	bool	bchecked;
	CString	szComment;
};

class CThumbnailControl : public CWnd
{
	DECLARE_DYNAMIC(CThumbnailControl)
	int		m_nPrevSelection;
	CArray<THUMBNAILINFO,THUMBNAILINFO>	m_ThumbInfo;
	CPtrList	m_UndoBitmaps;

	void	ReleaseUndo();
public:
	CListImage	m_wndImage;
	CImageList	m_imageList;	
	CThumbnailControl();
	virtual ~CThumbnailControl();
	BOOL	Create(CWnd *pParent, int x, int y, int w, int h);
	void	Add(HBITMAP hBitmap);
	void	Insert(int nIndex, HBITMAP hBitmap);
	void	Remove(int nIndex);
	void	ShowImages();
	int		HitTest(CPoint point);
	void	Reset();
	void	SelectImages();
	void	DeleteImages();
	void	Undo();
	void	SetCheck(int nIndex, bool bCheck);
	bool	GetCheck(int nIndex);
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnPaint();
	afx_msg BOOL OnEraseBkgnd(CDC* pDC);
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	virtual BOOL PreTranslateMessage(MSG* pMsg);

protected:
	virtual BOOL OnNotify(WPARAM wParam, LPARAM lParam, LRESULT* pResult);
public:
	afx_msg void OnContextMenu(CWnd* /*pWnd*/, CPoint /*point*/);
};
