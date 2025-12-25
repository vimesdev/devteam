#ifndef GUIBASE_H
#define GUIBASE_H
#include <afxwin.h>
#include <afxcmn.h>

#include "LayoutCtrl.h"
#include "GuiUtils.h"

#define WE_CLICK		1
#define WE_CHANGE		2
#define WE_SETFOCUS		3
#define WE_KILLFOCUS	4
#define WE_SELCHANGE	5
#define WE_DBLCLICK		6
#define WE_LOADDATA		7
#define WE_REFRESH		8
#define WE_CHECKVALUE	9
#define WE_ADDNEW		10
#define WE_SWAPITEM		11
#define WE_SELENDOK		12


typedef struct tagLVEVENT{
		int			nID;	
		LPCTSTR lpszName;
		BOOL		bState;
		HICON		hIcon;
		UINT		nKey;	//Shortcut key
		UINT		nFlags;	//Control or Shift flags
		int(*eWndProc)(CWnd *pWnd);
}LVEVENT;



class AFX_EXT_CLASS CGuiBase{
public:
	void(*_OnClickFnc)(CWnd *pWnd);
	void(*_OnChangeFnc)(CWnd *pWnd);
	void(*_OnKillfocusFnc)(CWnd *pWnd);
	void(*_OnSetfocusFnc)(CWnd *pWnd);
	void(*_OnDblClickFnc)(CWnd *pWnd);
		
	long(*_OnLoadDataFnc)(CWnd *pWnd);
	void(*_OnRefreshFnc)(CWnd *pWnd);
	int (*_OnCheckValueFnc)(CWnd *pWnd);
//Only use with Combobox control
	void(*_OnAddFnc)(CWnd *pWnd);
	void(*_OnSelendokFnc)(CWnd *pWnd);
	int	(*_OnSelChangeFnc)(CWnd *, int, int);
	int	(*_OnSwapItemFnc)(CWnd *, int, int);

	CString		m_szTooltipMessage;
	bool		m_bShowMessage;
	bool		m_bCheckValue;
	CFont		m_Font;
	COLORREF	m_clrText;
	COLORREF	m_clrBackground;

	CGuiBase();
	~CGuiBase();
	void SetEvent(UINT message, void *pEventFnc);
	void	ShowTooltip(bool bShow=true) { m_bShowMessage = bShow; }
	void	SetToolTipMessage(CString szMessage) { m_szTooltipMessage = szMessage; }
	bool	IsShowTooltip() { return m_bShowMessage; }
	CString	GetTooltipMessage() { return m_szTooltipMessage;}
	void	SetCheckValue(bool bCheck){ m_bCheckValue = bCheck;}
	bool	IsCheckValue(){ return m_bCheckValue; }
};


#endif
