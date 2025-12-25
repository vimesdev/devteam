#ifndef THUMBNAILIMAGE_H
#define THUMBNAILIMAGE_H

#include "afxcmn.h"
#include <afxtempl.h>
class THUMBINFO{
public:
	THUMBINFO(){
		hBitmap = NULL;
		bCheck = false;
	}
	~THUMBINFO(){
		if(hBitmap) DeleteObject(hBitmap);
	}
	CString szString;
	BOOL	bCheck;
	HBITMAP	hBitmap;
	int		nIndex;
	CString szFileName;

};

class CThumbnailImage :
	public CListBox
{
	
	int			m_nThumbWidth;
	int			m_nThumbHeight;
	CPtrArray	m_Thumb;
	CPtrArray	m_ThumbBitmaps;
	CString		m_szPath;
	int			m_nMaxFrame;
	
public:
	CThumbnailImage(void);
	~CThumbnailImage(void);
	BOOL	Create(CWnd *pParent, int x, int y, int w, int h, DWORD dwStyle=WS_CHILD|WS_VISIBLE);
	int		Add(int nIndex, LPCTSTR lpszString, void* bitmap, LPCTSTR lpszFileName);
	int		Insert(int nIndex, HBITMAP hBitmap);
	void	Delete(int nIndex, bool bRemoveFile=false);
	void	DeleteAll();
	void	ResetContent();
	BOOL	GetCheck(int nIndex);
	CString	GetString(int nIndex);
	void	SetCheck(int nIndex, BOOL bCheck);
	HBITMAP	GetHBITMAP(int nIndex);
	int		GetImageCount();
	bool	Save(LPCTSTR lpszFileName);
	bool	Open(LPCTSTR lpszFileName);
	void	MarkAll();
	void	UnmarkAll();
	void	DeleteAllMarked();
	void	EditImage();
	void	EditComment();
	void	LoadThumb();
	bool	SaveProperties();
	int		GetMaxFrame();
	bool	m_bDelete;

	void	SetPath(LPCTSTR lpszPath);
	DECLARE_MESSAGE_MAP()
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnDestroy();
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg BOOL OnMouseWheel(UINT nFlags, short zDelta, CPoint pt);
	virtual void DrawItem(LPDRAWITEMSTRUCT /*lpDrawItemStruct*/);
	virtual void MeasureItem(LPMEASUREITEMSTRUCT /*lpMeasureItemStruct*/);
	afx_msg BOOL OnEraseBkgnd(CDC* pDC);
	afx_msg void OnDeleteItem(int nIDCtl, LPDELETEITEMSTRUCT lpDeleteItemStruct);
protected:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	virtual void PreSubclassWindow();
public:
	virtual BOOL PreTranslateMessage(MSG* pMsg);
};

#endif
