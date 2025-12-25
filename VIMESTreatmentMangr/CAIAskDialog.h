#pragma once

#include "afxwin.h"
#include "resource.h"

class CAIAskDialog : public CDialogEx
{
	DECLARE_DYNAMIC(CAIAskDialog)

public:
	CAIAskDialog(CWnd* pParent = nullptr);
	enum { IDD = IDD_AI_ASK_DIALOG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);
	DECLARE_MESSAGE_MAP()

protected:
	// Các control tương tác với người dùng
	CEdit m_editQuestion;
	CEdit m_editAnswer;

	// Hàm xử lý nút bấm
	afx_msg void OnBnClickedSend();
	afx_msg void OnBnClickedCopy();
	afx_msg void OnBnClickedClose();

	// Hàm xử lý API
	CString LoadAPIKeyFromFile(const CString& filePath);
	BOOL CallChatGPT(const CString& prompt, CString& response);
};
