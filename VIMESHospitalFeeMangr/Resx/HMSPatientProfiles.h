#ifndef HMSPATIENTPROFILES_H
#define HMSPATIENTPROFILES_H

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Copyright © Viet Nam Medical Software Joint Stock Company. 2005-2012. 			
//	All rights reserved. 
//	This program is protected by Viet nam and international treaties.  
//	Unauthorized reproduction or distribution of this program, 
//	or any portion of it, may result in severe civil and criminal penalties, 
//	and will be prosecuted to the maximum extent possible under the law.
//	This file is a part of the GUI(Graphical User Interface) class library.
//	(c) 2006-2008 Hoang Van Hay, All rights reserved.
//	CONTACT INFORMATION:
//	Email  : hayhv@vimes.com.vn or hayhv@yahoo.com
//	Website: http://www.vimes.com.vn
/////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Ban quyen cua Cong Ty Co Phan Phan Mem Y Te Viet Nam 2005-2012.
//	Do Cuc Ban Quyen, Bo VHTT nuoc Cong hoa xa hoi chu nghia Viet Nam cap.
//	Chuong trinh phan mem nay duoc Luat phap Viet Nam va quoc te bao ho.
//	San xuat, su dung hoac phan phoi trai phep toan bo hoac mot phan cua phan men nay se
//	chiu cac hinh phat va hinh su hoac dan su, co the len den muc toi da dung theo Luat qui dinh.
//	File nay la mot phan cua thu vien lap trinh(GUI). Ban quyen cua Hoang Van Hay. 2006-2008
//	THONG TIN LIEN HE:
//	Email  : hayhv@vimes.com.vn hoac hayhv@yahoo.com
//	Website: http://www.vimes.com.vn
//////////////////////////////////////////////////////////////////////////////////////////////////////////
#include "GuiUtils.h"
#include "GuiView.h"
#include "DbField.h"
class CHMSPatientProfiles : public CGuiView{
protected:
public:
	CGuiGroupBox	m_wndPatientInformation;
	CGuiGroupBox	m_wndBillingReceiptInformation;
	CGuiGroupBox	m_wndTreatmentInformation;
	CGuiGroupBox	m_wndGeneralCost;
	CGuiLabel		m_wndDocumentNoLabel;
	CGuiNumberCtrl	m_wndDocumentNo;
	CGuiLabel		m_wndPIDLabel;
	CGuiNumberCtrl	m_wndPID;
	CGuiLabel		m_wndPatientNameLabel;
	CGuiTextCtrl	m_wndPatientName;
	CGuiLabel		m_wndAgeLabel;
	CGuiTextCtrl	m_wndAge;
	CGuiLabel		m_wndSexLabel;
	CGuiTextCtrl	m_wndSex;
	CGuiLabel		m_wndAddressLabel;
	CGuiTextCtrl	m_wndAddress;
	CGuiLabel		m_wndWorkingPlaceLabel;
	CGuiTextCtrl	m_wndWorkingPlace;
	CGuiLabel		m_wndObjectLabel;
	CGuiTextCtrl	m_wndObject;
	CGuiLabel		m_wndCardNoLabel;
	CGuiTextCtrl	m_wndCardNo;
	CGuiTextCtrl	m_wndCardCode;
	CGuiTextCtrl	m_wndCardDiscount;
	CGuiLabel		m_wndRegistrationDateLabel;
	CGuiDateCtrl	m_wndRegistrationDate;
	CGuiLabel		m_wndExpiryDateLabel;
	CGuiDateCtrl	m_wndExpiryDate;
	CGuiLabel		m_wndRegistrationPlaceLabel;
	CGuiTextCtrl	m_wndRegistrationPlace;
	CGuiListCtrl	m_wndTreatmentList;
	CGuiListCtrl	m_wndInvoiceList;
	CGuiListCtrl	m_wndFeeList;
	CGuiButton		m_wndBilling;
	CGuiButton		m_wndApproval;
	CGuiButton		m_wndPrint;
	CGuiLabel		m_wndTotalCostLabel;
	CGuiNumberCtrl	m_wndTotalCost;
	CGuiLabel		m_wndInsuranceCostLabel;
	CGuiNumberCtrl	m_wndInsuranceCost;
	CGuiLabel		m_wndInsurancePaidLabel;
	CGuiNumberCtrl	m_wndInsurancePaid;
	CGuiLabel		m_wndInsuranceUnpaidLabel;
	CGuiNumberCtrl	m_wndInsuranceUnpaid;
	CGuiLabel		m_wndDifferencepayLabel;
	CGuiNumberCtrl	m_wndDifferencepay;
	CGuiLabel		m_wndPatient PayLabel;
	CGuiNumberCtrl	m_wndPatientPay;
	CGuiLabel		m_wndTotalDepositLabel;
	CGuiNumberCtrl	m_wndTotalDeposit;
	CGuiLabel		m_wndTotalPolicyLabel;
	CGuiNumberCtrl	m_wndTotalPolicy;
	CGuiLabel		m_wndSumABLabel;
	CGuiNumberCtrl	m_wndSumAB;
	CGuiLabel		m_wndDiscountLabel;
	CGuiNumberCtrl	m_wndDiscount;
	CGuiLabel		m_wndPatientPayableLabel;
	CGuiNumberCtrl	m_wndPatientPayable;
	CGuiLabel		m_wndStatusLabel;
	CGuiTextCtrl	m_wndStatus;
	CGuiLabel		m_wndNoteLabel;
	CGuiTextCtrl	m_wndNote;
	CGuiLabel		m_wndDesc;
	CGuiButton		m_wndInsApprove;
	long	m_nDocumentNo;
	long	m_nPID;
	CString	m_szPatientName;
	CString	m_szAge;
	CString	m_szSex;
	CString	m_szAddress;
	CString	m_szWorkingPlace;
	CString	m_szObject;
	CString	m_szCardNo;
	CString	m_szCardCode;
	CString	m_szCardDiscount;
	CString	m_szRegistrationDate;
	CString	m_szExpiryDate;
	CString	m_szRegistrationPlace;
	long	m_nTotalCost;
	long	m_nInsuranceCost;
	long	m_nInsurancePaid;
	long	m_nInsuranceUnpaid;
	long	m_nDifferencepay;
	long	m_nPatientPay;
	long	m_nTotalDeposit;
	long	m_nTotalPolicy;
	long	m_nSumAB;
	long	m_nDiscount;
	long	m_nPatientPayable;
	CString	m_szStatus;
	CString	m_szNote;
	//void			OnDocumentNoChange(); 
	//void			OnDocumentNoSetfocus(); 
	//void			OnDocumentNoKillfocus(); 
	int			OnDocumentNoCheckValue(); 
	//void			OnPIDChange(); 
	//void			OnPIDSetfocus(); 
	//void			OnPIDKillfocus(); 
	int			OnPIDCheckValue(); 
	//void			OnPatientNameChange(); 
	//void			OnPatientNameSetfocus(); 
	//void			OnPatientNameKillfocus(); 
	int			OnPatientNameCheckValue(); 
	//void			OnAgeChange(); 
	//void			OnAgeSetfocus(); 
	//void			OnAgeKillfocus(); 
	int			OnAgeCheckValue(); 
	//void			OnSexChange(); 
	//void			OnSexSetfocus(); 
	//void			OnSexKillfocus(); 
	int			OnSexCheckValue(); 
	//void			OnAddressChange(); 
	//void			OnAddressSetfocus(); 
	//void			OnAddressKillfocus(); 
	int			OnAddressCheckValue(); 
	//void			OnWorkingPlaceChange(); 
	//void			OnWorkingPlaceSetfocus(); 
	//void			OnWorkingPlaceKillfocus(); 
	int			OnWorkingPlaceCheckValue(); 
	//void			OnObjectChange(); 
	//void			OnObjectSetfocus(); 
	//void			OnObjectKillfocus(); 
	int			OnObjectCheckValue(); 
	//void			OnCardNoChange(); 
	//void			OnCardNoSetfocus(); 
	//void			OnCardNoKillfocus(); 
	int			OnCardNoCheckValue(); 
	//void			OnCardCodeChange(); 
	//void			OnCardCodeSetfocus(); 
	//void			OnCardCodeKillfocus(); 
	int			OnCardCodeCheckValue(); 
	//void			OnCardDiscountChange(); 
	//void			OnCardDiscountSetfocus(); 
	//void			OnCardDiscountKillfocus(); 
	int			OnCardDiscountCheckValue(); 
	//void			OnRegistrationDateChange(); 
	//void			OnRegistrationDateSetfocus(); 
	//void			OnRegistrationDateKillfocus(); 
	int			OnRegistrationDateCheckValue(); 
	//void			OnExpiryDateChange(); 
	//void			OnExpiryDateSetfocus(); 
	//void			OnExpiryDateKillfocus(); 
	int			OnExpiryDateCheckValue(); 
	//void			OnRegistrationPlaceChange(); 
	//void			OnRegistrationPlaceSetfocus(); 
	//void			OnRegistrationPlaceKillfocus(); 
	int			OnRegistrationPlaceCheckValue(); 
	long			OnTreatmentListLoadData(); 
	void			OnTreatmentListSelectChange(int nOldItem, int nNewItem); 
	void			OnTreatmentListDblClick(); 
	int			OnTreatmentListDeleteItem(); 
	long			OnInvoiceListLoadData(); 
	void			OnInvoiceListSelectChange(int nOldItem, int nNewItem); 
	void			OnInvoiceListDblClick(); 
	int			OnInvoiceListDeleteItem(); 
	long			OnFeeListLoadData(); 
	void			OnFeeListSelectChange(int nOldItem, int nNewItem); 
	void			OnFeeListDblClick(); 
	int			OnFeeListDeleteItem(); 
	void			OnBillingSelect(); 
	void			OnApprovalSelect(); 
	void			OnPrintSelect(); 
	//void			OnTotalCostChange(); 
	//void			OnTotalCostSetfocus(); 
	//void			OnTotalCostKillfocus(); 
	int			OnTotalCostCheckValue(); 
	//void			OnInsuranceCostChange(); 
	//void			OnInsuranceCostSetfocus(); 
	//void			OnInsuranceCostKillfocus(); 
	int			OnInsuranceCostCheckValue(); 
	//void			OnInsurancePaidChange(); 
	//void			OnInsurancePaidSetfocus(); 
	//void			OnInsurancePaidKillfocus(); 
	int			OnInsurancePaidCheckValue(); 
	//void			OnInsuranceUnpaidChange(); 
	//void			OnInsuranceUnpaidSetfocus(); 
	//void			OnInsuranceUnpaidKillfocus(); 
	int			OnInsuranceUnpaidCheckValue(); 
	//void			OnDifferencepayChange(); 
	//void			OnDifferencepaySetfocus(); 
	//void			OnDifferencepayKillfocus(); 
	int			OnDifferencepayCheckValue(); 
	//void			OnPatientPayChange(); 
	//void			OnPatientPaySetfocus(); 
	//void			OnPatientPayKillfocus(); 
	int			OnPatientPayCheckValue(); 
	//void			OnTotalDepositChange(); 
	//void			OnTotalDepositSetfocus(); 
	//void			OnTotalDepositKillfocus(); 
	int			OnTotalDepositCheckValue(); 
	//void			OnTotalPolicyChange(); 
	//void			OnTotalPolicySetfocus(); 
	//void			OnTotalPolicyKillfocus(); 
	int			OnTotalPolicyCheckValue(); 
	//void			OnSumABChange(); 
	//void			OnSumABSetfocus(); 
	//void			OnSumABKillfocus(); 
	int			OnSumABCheckValue(); 
	//void			OnDiscountChange(); 
	//void			OnDiscountSetfocus(); 
	//void			OnDiscountKillfocus(); 
	int			OnDiscountCheckValue(); 
	//void			OnPatientPayableChange(); 
	//void			OnPatientPayableSetfocus(); 
	//void			OnPatientPayableKillfocus(); 
	int			OnPatientPayableCheckValue(); 
	//void			OnStatusChange(); 
	//void			OnStatusSetfocus(); 
	//void			OnStatusKillfocus(); 
	int			OnStatusCheckValue(); 
	//void			OnNoteChange(); 
	//void			OnNoteSetfocus(); 
	//void			OnNoteKillfocus(); 
	int			OnNoteCheckValue(); 
	void			OnInsApproveSelect(); 
	CHMSPatientProfiles();
	~CHMSPatientProfiles();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSPatientProfiles(); 
	int OnEditHMSPatientProfiles(); 
	int OnDeleteHMSPatientProfiles(); 
	int OnSaveHMSPatientProfiles(); 
	int OnCancelHMSPatientProfiles(); 
	int OnHMSPatientProfilesListLoadData(); 
};
#endif
