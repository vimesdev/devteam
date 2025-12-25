#ifndef GUIAUTOCOMPLECTIONCTRL_H
#define GUIAUTOCOMPLECTIONCTRL_H

#include "GuiTextCtrl.h"
#define		IDC_LIST	10002


/////////////////////////////////////////////////////////////////////////////
// CGuiAutoTextCtrl window
class AFX_EXT_CLASS CGuiAutoTextCtrl : public CGuiTextCtrl
{
// Construction
public:
	CGuiAutoTextCtrl();
	
// Attributes
public:

// Operations
protected:
	void Autocomplete(BOOL givenext = TRUE);
	CString complete(const CString& str, const CString& actual, CStringArray &matching);
	
	
// Data
	BOOL	m_autocompleted;
	CStringArray m_keywords;
	BOOL	m_bInForcedChange;
	BOOL	m_bShowAbove;
	CListBox m_listbox;

// Preferences
	BOOL m_learn;
	BOOL m_showlistbox;
	BOOL m_trapenter;
	BOOL m_learnondblclick;
	BOOL m_listallwords;
	int	 m_nVisibleLine;
// Comprare funcions
	int (*compare)(const TCHAR*, const TCHAR*);
	int (*comparen)(const TCHAR*, const TCHAR*, size_t n);

	
public:
	void Enable(BOOL enable = TRUE);
	/* Preferences */
	void CaseSensitive(BOOL casesens = TRUE);
	void TrapEnter(BOOL trap = TRUE);
	void Learn(BOOL learn = TRUE);
	void ShowListBox(BOOL show = TRUE);
	void ListAllWords(BOOL show = TRUE);
	void LearnOnDblClick(BOOL learnondbl = TRUE);

	/* Dictionary */
	void GetDictionary(CStringArray& dictionary);
	void ResetDictionary();
	BOOL AddKeyword(const CString& str);
	BOOL IsKeyword(const CString& str);
	CString	GetSelText();
	inline void RemoveListbox();
	void	SetShowabove(BOOL bFlag);
	void	SetVisibleLine(int nitem);
// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CGuiAutoTextCtrl)
	public:
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	//}}AFX_VIRTUAL

// Implementation
	virtual ~CGuiAutoTextCtrl();

	afx_msg void OnListBoxChanged();
	// Generated message map functions
protected:
	BOOL m_enabled;
	BOOL GetCurWord(CString& curword);
	//{{AFX_MSG(CGuiAutoTextCtrl)
	afx_msg void OnChar(UINT nChar, UINT nRepCnt, UINT nFlags);
	
	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
	afx_msg BOOL OnMouseWheel(UINT nFlags, short zDelta, CPoint pt);
	afx_msg void OnKillFocus(CWnd* pNewWnd);
	//}}AFX_MSG


	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
};

#endif 
