#ifndef HMSPATIENTCARE_H
#define HMSPATIENTCARE_H
#include "GuiUtils.h"
#include "GuiView.h"
#include "DbField.h"

///////////////////////////////////////////
//PHIEU CHAM SOC
///////////////////////////////////////////

class CHMSPatientCare : public CGuiView{
protected:
public:
	CGuiGroupBox	m_wndPatientCareInformation;
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
	CHMSPatientCare();
	~CHMSPatientCare();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int OnAddHMSPatientCare(); 
	int OnEditHMSPatientCare(); 
	int OnDeleteHMSPatientCare(); 
	int OnSaveHMSPatientCare(); 
	int OnCancelHMSPatientCare(); 
};
#endif
