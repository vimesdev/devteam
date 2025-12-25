#ifndef HMSTREATMENTSHEET_H
#define HMSTREATMENTSHEET_H
#include "GuiUtils.h"
#include "GuiView.h"
#include "DbField.h"
class CHMSTreatmentSheet : public CGuiView{
protected:
public:
	CGuiGroupBox	m_wndTreatmentInformation;
	CGuiListCtrl	m_wndCareList;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	int			OnCareListLoadData(); 
	int			OnCareListSelectChange(int nOldItem, int nNewItem); 
	int			OnCareListDblClick(); 
	int			OnCareListDeleteItem(); 
	int			OnAddSelect(); 
	int			OnEditSelect(); 
	int			OnDeleteSelect(); 
	CHMSTreatmentSheet();
	~CHMSTreatmentSheet();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int OnAddHMSTreatmentSheet(); 
	int OnEditHMSTreatmentSheet(); 
	int OnDeleteHMSTreatmentSheet(); 
	int OnSaveHMSTreatmentSheet(); 
	int OnCancelHMSTreatmentSheet(); 
};
#endif
