#ifndef GUIBUTTONARRAY_H
#define GUIBUTTONARRAY_H
#include <afxwin.h>
#include "GuiBase.h"

class CGuiButtonArray
{
	
public:
	CGuiButtonArray(void);
	~CGuiButtonArray(void);
	BOOL	Create(CWnd *pParent, CRect rect);
};

#endif