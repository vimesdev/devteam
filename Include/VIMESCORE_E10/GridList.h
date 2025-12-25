#ifndef GRIDLIST_H
#define GRIDLIST_H
#include "GuiButton.h"

#define AFX_GRIDLIST_BTN_NEW    0x0001
#define AFX_GRIDLIST_BTN_EDIT   0x0002
#define AFX_GRIDLIST_BTN_DELETE 0x0004
#define AFX_GRIDLIST_BTN_UP     0x0008
#define AFX_GRIDLIST_BTN_DOWN   0x0010

#define AFX_GRIDLIST_BTN_NEW_ID    (UINT)(-10)
#define AFX_GRIDLIST_BTN_EDIT_ID    (UINT)(-11)
#define AFX_GRIDLIST_BTN_DELETE_ID (UINT)(-12)
#define AFX_GRIDLIST_BTN_UP_ID     (UINT)(-13)
#define AFX_GRIDLIST_BTN_DOWN_ID   (UINT)(-14)

class CGridBase :public CStatic{
protected:
	
	CList<CGuiButton*, CGuiButton*> m_lstButtons;
	CList<DWORD, DWORD>     m_lstKeyAccell;
	CMap<int,int,UINT,UINT> m_mapButtonIDs;
	UINT m_uiStandardBtns;


	
	void Init();
	int GetStdButtonNum(UINT uiStdBtn) const;
	void AdjustLayout();

// Overrides

public:
	CGridBase();
	virtual ~CGridBase();

	


	
};
#endif