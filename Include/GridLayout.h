#ifndef GRIDLAYOUT_H
#define GRIDLAYOUT_H

#pragma once
#include "guigroupbox.h"
typedef struct tagGRIDCTRL{
	CString	szName;
	CString	szCaption;
	CWnd*	pWnd;
	int		nRow;
	int		nWidth;
	float	nPercent;
	bool	bEnable;
	bool	bVisible;
}GRIDCTRL;
class CGridLayout :
	public CGuiGroupBox
{
public:
	CArray<GRIDCTRL,GRIDCTRL&> m_gridCtrls;

	CGridLayout(void);
	~CGridLayout(void);
	
};

#endif