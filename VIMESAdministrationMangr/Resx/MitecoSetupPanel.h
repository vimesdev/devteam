#ifndef VIMESSETUPPANEL_H
#define VIMESSETUPPANEL_H
#include "GuiUtils.h"
#include "GuiView.h"
#include "DbField.h"
class CVIMESSetupPanel : public CGuiView{
protected:
public:
	CGuiListCtrl	m_wndSetupList;
	CGuiDialog	m_wndBaseWnd;
	int			OnSetupListLoadData(); 
	int			OnSetupListSelChange(int nOldItem, int nNewItem); 
	int			OnSetupListDblClick(); 
	int			OnSetupListDeleteItem(); 
	CVIMESSetupPanel();
	~CVIMESSetupPanel();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void OnGetDataToScreen();
	void OnGetScreenToData();
};
#endif
