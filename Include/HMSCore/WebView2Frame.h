#ifndef WEBVIEW2FRAME_H
#define WEBVIEW2FRAME_H

#pragma once
#include <afxext.h>  // Cho CMiniFrameWnd
#include "WebView2View.h"
#include "GuiMiniFrame.h"

class AFX_EXT_CLASS CWebView2Frame : public CGuiMiniFrame
{
protected:
	CWebView2View* m_pWebView;
	std::wstring m_initialUrl;

public:
	CWebView2Frame();
	virtual ~CWebView2Frame();

	// Tạo và hiển thị cửa sổ với WebView
	BOOL CreateAndShow(LPCTSTR lpszUrl = NULL, 
	                   CRect rect = CRect(0, 0, 1024, 720),
	                   CWnd* pParentWnd = NULL);

	// Lấy con trỏ đến WebView
	CWebView2View* GetWebView() { return m_pWebView; }

	DECLARE_MESSAGE_MAP()
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnSize(UINT nType, int cx, int cy);
	afx_msg void OnNcDestroy();
};

#endif // WEBVIEW2FRAME_H

