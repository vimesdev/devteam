#ifndef HTMLAYOUTCTRLEX_H
#define HTMLAYOUTCTRLEX_H

#pragma once
#include <afxext.h>
#include "htmlayoutctrl.h"
#include "GuiMenu.h"



#define M_TRUOTNGA _T("DT_TRUOTNGA")
#define M_HOATRI _T("DT_DHTRILIEU")
#define M_CANTHIEP_DMV _T("BB_CANTHIEP_DMV")
#define M_DINHDUONG _T("DT_DINHDUONG")
#define M_PHIEUCHUYENKHOA _T("DT_PHIEUKHAMCHUYENKHOA")




class AFX_EXT_CLASS CHTMLayoutCtrlEx : public CHTMLayoutCtrl {
	
	

public:
	bool	m_bSettingMode;
	double	m_nTotalPoint;
	CSize	m_szSize;
    long	m_nOperationID;


	BOOL(*_OnEventCallback)(CWnd* pWnd, HELEMENT he, HELEMENT target, BEHAVIOR_EVENTS type, UINT_PTR reason);

	CHTMLayoutCtrlEx() {
		m_nTotalPoint = 0; m_bSettingMode = false;
		m_szSize = CSize(640, 480); 
		_OnEventCallback = NULL;
		m_nOperationID = 0;
	};
	~CHTMLayoutCtrlEx() {};

	bool LoadUrl(LPCWSTR url);

	
	virtual BOOL on_event(HELEMENT he, HELEMENT target, BEHAVIOR_EVENTS type, UINT_PTR reason);
	virtual BOOL handle_mouse(HELEMENT he, MOUSE_PARAMS& params);
	double GetTongTruotNga(dom::element& e);
	void OnMouseRightClick(CPoint pt, CString szType);
	void OnHtmlMenuCreate(CGuiMenu* pMenu, CString szType);
	void OnHtmlMenuSelect(CString szType, int nId);
	virtual BOOL handle_focus(HELEMENT he, FOCUS_PARAMS& params);
	void CalcBMI(dom::element& e);
	void CalcBSA(dom::element& e);
	void CalcNutriPoint(dom::element& e);
    bool LoadData_V2();
    bool LoadData_V3();
	void SettingMode(bool bFlag);
	bool IsSettingMode() { return m_bSettingMode; }
	void SetSize(CSize size) { m_szSize = size; }
	CSize GetSize() { return m_szSize;  }
	void SetCallback(void* callback);
	void	Setting();
	virtual LRESULT WindowProc(UINT message, WPARAM wParam, LPARAM lParam);
    virtual bool LoadData(LPCTSTR lpszFilter = _T(""));
    void LoadVitalSigns();
    int CalcPoint(const dom::element& e);
    int GetPts(CString szName);
    void LoadTreatmentInfo();

	DECLARE_MESSAGE_MAP()
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnSize(UINT nType, int cx, int cy);
	afx_msg void OnDestroy();
    virtual void PostNcDestroy();
    virtual BOOL DestroyWindow();
};



#endif