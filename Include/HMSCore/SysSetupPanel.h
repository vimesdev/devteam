#ifndef SYSSETUPPANEL_H
#define SYSSETUPPANEL_H
#include "GuiUtils.h"
#include "GuiView.h"
#include "DbField.h"
#include "SysSetupList.h"


class AFX_EXT_CLASS CSysSetupPanel : public CGuiView{
protected:
public:
	CGuiListCtrl	m_wndSetupList;
	CSysSetupList	m_wndSetup;

	int			OnSetupListLoadData(); 
	int			OnSetupListSelChange(int nOldItem, int nNewItem); 
	int			OnSetupListDblClick(); 
	int			OnSetupListDeleteItem(); 
	CSysSetupPanel();
	~CSysSetupPanel();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
};
#endif
