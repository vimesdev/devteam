#ifndef HMSOTHERTREAT_H
#define HMSOTHERTREAT_H
#include "GuiUtils.h"
#include "GuiView.h"
#include "DbField.h"
class CHMSOtherTreat : public CGuiView{
protected:
public:
	CGuiGroupBox	m_wndOrderInformation;
	CGuiListCtrl	m_wndOrderList;
	CGuiLabel		m_wndIDLabel;
	CGuiNumberCtrl	m_wndOrderID;
	CGuiLabel		m_wndDateLabel;
	CGuiDateCtrl	m_wndOrderDate;
	CGuiLabel		m_wndTreatDoctorLabel;
	CGuiComboBox	m_wndTreatDoctor;
	CGuiLabel		m_wndNoteLabel;
	CGuiTextCtrl	m_wndNote;
	CGuiListCtrl	m_wndTestList;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndConfirm;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndPrint;
	CGuiButton		m_wndSave;
	long	m_nOrderID;
	CString	m_szOrderDate;
	CString	m_szTreatDoctorKey;
	CString	m_szNote;
	int			OnOrderListLoadData(); 
	int			OnOrderListSelectChange(int nOldItem, int nNewItem); 
	int			OnOrderListDblClick(); 
	int			OnOrderListDeleteItem(); 
	//int			OnOrderIDChange(); 
	//int			OnOrderIDSetfocus(); 
	//int			OnOrderIDKillfocus(); 
	int			OnOrderIDCheckValue(); 
	//int			OnOrderDateChange(); 
	//int			OnOrderDateSetfocus(); 
	//int			OnOrderDateKillfocus(); 
	int			OnOrderDateCheckValue(); 
	int			OnTreatDoctorSelectChange(int nOldItemSel, int nNewItemSel); 
	int			OnTreatDoctorSelendok(); 
	//int			OnTreatDoctorSetfocus(); 
	//int			OnTreatDoctorKillfocus(); 
	int			OnTreatDoctorLoadData(); 
	int			OnTreatDoctorAddNew(); 
	//int			OnNoteChange(); 
	//int			OnNoteSetfocus(); 
	//int			OnNoteKillfocus(); 
	int			OnNoteCheckValue(); 
	int			OnTestListLoadData(); 
	int			OnTestListSelectChange(int nOldItem, int nNewItem); 
	int			OnTestListDblClick(); 
	int			OnTestListDeleteItem(); 
	int			OnAddSelect(); 
	int			OnEditSelect(); 
	int			OnDeleteSelect(); 
	int			OnConfirmSelect(); 
	int			OnCancelSelect(); 
	int			OnPrintSelect(); 
	int			OnSaveSelect(); 
	CHMSOtherTreat();
	~CHMSOtherTreat();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int OnAddHMSOtherTreat(); 
	int OnEditHMSOtherTreat(); 
	int OnDeleteHMSOtherTreat(); 
	int OnSaveHMSOtherTreat(); 
	int OnCancelHMSOtherTreat(); 
};
#endif
