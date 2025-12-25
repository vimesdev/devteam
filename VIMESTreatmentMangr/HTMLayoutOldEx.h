#ifndef HTMLayoutOldEX_H
#define HTMLayoutOldEX_H

#pragma once
#include <afxext.h>
#include "HTMLayoutOld.h"
#include "GuiMenu.h"


#define M_TRUOTNGA _T("DT_TRUOTNGA")
#define M_HOATRI _T("DT_DHTRILIEU")
#define M_CANTHIEP_DMV _T("BB_CANTHIEP_DMV")
#define M_DINHDUONG _T("DT_DINHDUONG")
#define M_PHIEUCHUYENKHOA _T("DT_PHIEUKHAMCHUYENKHOA")

class  CHTMLayoutOldEx : public CHTMLayoutOld {
public:
	CHTMLayoutOldEx() {};
	~CHTMLayoutOldEx() {};
	virtual BOOL on_event(HELEMENT he, HELEMENT target, BEHAVIOR_EVENTS type, UINT_PTR reason);
	virtual BOOL handle_mouse(HELEMENT he, MOUSE_PARAMS& params);
	double GetTongTruotNga();
	void OnMouseRightClick(CPoint pt, CString szType);
	void OnHtmlMenuCreate(CGuiMenu* pMenu, CString szType);
	void OnHtmlMenuSelect(CString szType, int nId);
	virtual BOOL handle_focus(HELEMENT he, FOCUS_PARAMS& params);
	void CalcBMI(dom::element& e);
	void CalcNutriPoint();
	bool LoadData_V2();
};



#endif