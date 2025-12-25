#ifndef DIALOGVIEW_H
#define DIALOGVIEW_H

#include "GuiDialog.h"
#include "GuiView.h"
#include "GuiMiniFrame.h"

class AFX_EXT_CLASS CDialogView : public CGuiDialog {
	CGuiView* m_pView;
public:
	CDialogView(CWnd* pParent, CGuiView* pView) :CGuiDialog(pParent), m_pView(pView)
	{
		
	}
	~CDialogView() {

	}
	void OnCreateComponents()
	{
		m_pView->Create(this, CRect(0, 0, 960, 600));
		m_pView->OnInitDialog();
	}
	afx_msg void OnSize(UINT nType, int cx, int cy) {
		CRect rect;
		GetClientRect(rect);
		m_pView->MoveWindow(rect);
	}
};


class AFX_EXT_CLASS CFrameViewDialog: public CGuiMiniFrame {
protected:
	CGuiView* m_pView;
public:
	CFrameViewDialog():m_pView(NULL) {
	}
	~CFrameViewDialog() {}
	BOOL CreateAndShow(CGuiView* pView) {
		m_pView = pView;
		if (!CGuiMiniFrame::Create(NULL, _T(""), WS_OVERLAPPEDWINDOW , CRect(0, 0, 1024, 720), GetDesktopWindow(), 0))
			return FALSE;
		ShowWindow(SW_SHOWDEFAULT);
		UpdateWindow();
		SetActiveWindow();
		SetFocus();
		return TRUE;
	}

	DECLARE_MESSAGE_MAP()
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnSize(UINT nType, int cx, int cy);
	afx_msg void OnNcDestroy();
};
#endif