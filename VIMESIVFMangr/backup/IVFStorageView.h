#ifndef IVFSTORAGEVIEW_H
#define IVFSTORAGEVIEW_H


// CChildView window

class CIVFStorageView : public CScrollView
{
// Construction
public:
	CIVFStorageView();
	~CIVFStorageView();

// Attributes
public:

// Operations
public:

// Overrides
	protected:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);

// Implementation
public:
	

	// Generated message map functions
protected:
	afx_msg void OnPaint();
	DECLARE_MESSAGE_MAP()
};

#endif

