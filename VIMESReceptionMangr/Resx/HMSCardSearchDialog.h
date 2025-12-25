#ifndef HMSCARDSEARCHDIALOG_H
#define HMSCARDSEARCHDIALOG_H
#include "GuiUtils.h"
#include "GuiDialog.h"
#include "DbField.h"
class CHMSCardSearchDialog : public CGuiDialog{
protected:
public:
	CGuiGroupBox	m_wndCardNumberInformation;
	CGuiLabel		m_wndCardNoLabel;
	CGuiTextCtrl	m_wndCardNo;
	CGuiNumberCtrl	m_wndDiscount;
	CGuiLabel		m_wndPercentLabel;
	CGuiLabel		m_wndRegistrationDateLabel;
	CGuiDateCtrl	m_wndRegistrationDate;
	CGuiLabel		m_wndExpiryDateLabel;
	CGuiDateCtrl	m_wndExpiryDate;
	CGuiLabel		m_wndRegistrationPlaceLabel;
	CGuiComboBox	m_wndRegistrationPlace;
	CGuiLabel		m_wndPatientNameLabel;
	CGuiTextCtrl	m_wndPatientName;
	CGuiButton		m_wndSelect;
	CGuiButton		m_wndClose;
	CString	m_szCardNo;
	long	m_nDiscount;
	CString	m_szRegistrationDate;
	CString	m_szExpiryDate;
	CString	m_szRegistrationPlaceKey;
	CString	m_szPatientName;
	//int			OnCardNoChange(); 
	//int			OnCardNoSetfocus(); 
	//int			OnCardNoKillfocus(); 
	int			OnCardNoCheckValue(); 
	//int			OnDiscountChange(); 
	//int			OnDiscountSetfocus(); 
	//int			OnDiscountKillfocus(); 
	int			OnDiscountCheckValue(); 
	//int			OnRegistrationDateChange(); 
	//int			OnRegistrationDateSetfocus(); 
	//int			OnRegistrationDateKillfocus(); 
	int			OnRegistrationDateCheckValue(); 
	//int			OnExpiryDateChange(); 
	//int			OnExpiryDateSetfocus(); 
	//int			OnExpiryDateKillfocus(); 
	int			OnExpiryDateCheckValue(); 
	int			OnRegistrationPlaceSelectChange(int nOldItemSel, int nNewItemSel); 
	int			OnRegistrationPlaceSelendok(); 
	//int			OnRegistrationPlaceSetfocus(); 
	//int			OnRegistrationPlaceKillfocus(); 
	int			OnRegistrationPlaceLoadData(); 
	int			OnRegistrationPlaceAddNew(); 
	//int			OnPatientNameChange(); 
	//int			OnPatientNameSetfocus(); 
	//int			OnPatientNameKillfocus(); 
	int			OnPatientNameCheckValue(); 
	int			OnSelectSelect(); 
	int			OnCloseSelect(); 
	CHMSCardSearchDialog();
	~CHMSCardSearchDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSCardSearchDialog(); 
	int OnEditHMSCardSearchDialog(); 
	int OnDeleteHMSCardSearchDialog(); 
	int OnSaveHMSCardSearchDialog(); 
	int OnCancelHMSCardSearchDialog(); 
	int OnHMSCardSearchDialogListLoadData(); 
};
#endif
