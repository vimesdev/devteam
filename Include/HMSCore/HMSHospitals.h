#ifndef HMSHOSPITALS_H
#define HMSHOSPITALS_H
#include "GuiUtils.h"
#include "GuiView.h"
#include "DbField.h"
class AFX_EXT_CLASS CHMSHospitalListSetup : public CGuiView{
protected:
public:
	CGuiGroupBox	m_wndHospitalList;
	CGuiGroupBox	m_wndSearch;
	CGuiListCtrl	m_wndList;
	CGuiLabel		m_wndProvillSearchLable;
	CGuiComboBox	m_wndProvillSearch;
	CGuiLabel		m_wndDistSearchLabel;
	CGuiComboBox	m_wndDistSearch;
	CGuiLabel		m_wndHostpitalNameLabel;
	CGuiTextCtrl	m_wndHostpitalName;
	
	CGuiLabel		m_wndIDLabel;
	CGuiTextCtrl	m_wndID;
	CGuiLabel		m_wndNameLabel;
	CGuiTextCtrl	m_wndName;
	CGuiLabel		m_wndTypeLabel;
	CGuiComboBox	m_wndType;
	CGuiLabel		m_wndProvillLabel;
	CGuiComboBox	m_wndProvill;
	CGuiLabel		m_wndDistrictLable;
	CGuiComboBox	m_wndDistrict;
	CGuiLabel		m_wndInsuranceCodeLabel;
	CGuiTextCtrl	m_wndInsuranceCode;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	
	
	CString	m_szOldID;
	CString	m_szID;
	CString	m_szName;
	CString	m_szTypeKey;
	CString	m_szProvillKey;
	CString	m_szSearchProvillKey;
	CString m_szSearchDistrit;
	CString	m_szInsuranceCode;
	CString m_szHostpitallSearch;
	CString m_szDist;
	
	CDbfMap	m_hms_hospitalTbl;
	int			OnListLoadData(); 
	int			OnListSelectChange(int nOldItem, int nNewItem); 
	int			OnListDblClick(); 
	int			OnListDeleteItem(); 
	//int			OnIDChange(); 
	//int			OnIDSetfocus(); 
	//int			OnIDKillfocus(); 
	int			OnIDCheckValue(); 
	//int			OnNameChange(); 
	//int			OnNameSetfocus(); 
	//int			OnNameKillfocus(); 
	int			OnNameCheckValue(); 
	int			OnTypeSelectChange(int nOldItemSel, int nNewItemSel); 
	int			OnTypeSelendok(); 
	//int			OnTypeSetfocus(); 
	//int			OnTypeKillfocus(); 
	int			OnTypeLoadData(); 
	int			OnTypeAddNew(); 
	int			OnProvillSelectChange(int nOldItemSel, int nNewItemSel); 
	int			OnProvillSelendok(); 
	//int			OnProvillSetfocus(); 
	//int			OnProvillKillfocus(); 
	int			OnProvillLoadData(); 
	int			OnProvillAddNew(); 
	//int			OnInsuranceCodeChange(); 
	//int			OnInsuranceCodeSetfocus(); 
	//int			OnInsuranceCodeKillfocus(); 

	int			OnInsuranceCodeCheckValue(); 
	int			OnProvillSearchSelectChange(int nOldItemSel, int nNewItemSel); 
	int			OnProvillSearchSelendok();
	int			OnDistrictSelectChange(int nOldItemSel, int nNewItemSel); 
	int			OnDistrictSelendok();
	int			OnDistSearchSelectChange(int nOldItemSel, int nNewItemSel); 	
	int			OnDistSearchSelendok(); 
	int			OnSearchProvillLoadData();
	int			OnSearchDistLoadData();
	int			OnDistLoadData();
	int			OnDistSelendok();



	int			OnAddSelect(); 
	int			OnEditSelect(); 
	int			OnDeleteSelect(); 
	int			OnSaveSelect(); 
	int			OnCancelSelect(); 
	CHMSHospitalListSetup();
	~CHMSHospitalListSetup();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	void OnHostpitallSearch();
	int SetMode(int nMode);
	int OnAddHMSHospitals(); 
	int OnEditHMSHospitals(); 
	int OnDeleteHMSHospitals(); 
	int OnSaveHMSHospitals(); 
	int OnCancelHMSHospitals(); 
	int OnHMSHospitalsListLoadData(); 
	void Refresh();
};
#endif
