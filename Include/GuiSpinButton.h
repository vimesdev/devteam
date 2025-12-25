#pragma once
#include <afxcmn.h>

class CGuiSpinButton :
	public CSpinButtonCtrl
{
public:
	CGuiSpinButton(void);
	~CGuiSpinButton(void);
	virtual BOOL	Create(CWnd *pParent, int x, int y, int width, int height);
	
};
