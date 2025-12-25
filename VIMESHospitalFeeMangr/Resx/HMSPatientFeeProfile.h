#ifndef HMSPATIENTFEEPROFILE_H
#define HMSPATIENTFEEPROFILE_H

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Copyright(C) Viet Nam Medical Software Join Stock Company. 2005-2010. 			
//	All rights reserved. 
//	This program is protected by Viet nam and international treaties.  
//	Unauthorized reproduction or distribution of this program, 
//	or any portion of it, may result in severe civil and criminal penalties, 
//	and will be prosecuted to the maximum extent possible under the law.
//	This file is a part of the GUI(Graphical User Interface) class library.
//	(c) 2006-2008 Hay Hoang Van, All rights reserved.
//	CONTACT INFORMATION:
//	Email  : hayhv@vimes.com.vn or hayhv@yahoo.com
//	Website: http://www.vimes.com.vn
/////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Ban quyen cua Cong Ty Co Phan Phan Mem Y Te Viet Nam 2005-2010.
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
class CHMSPatientFeeProfile : public CGuiView{
protected:
public:
	CGuiLabel		m_wndDocumentNoLabel;
	CGuiNumberCtrl	m_wndDocumentNo;
	CGuiLabel		m_wndPatientNameLabel;
	CGuiTextCtrl	m_wndPatientName;
	CGuiLabel		m_wndAgeLabel;
	CGuiTextCtrl	m_wndAge;
	CGuiLabel		m_wndSexLabel;
	CGuiTextCtrl	m_wndSex;
	CGuiLabel		m_wndAddressLabel;
	CGuiTextCtrl	m_wndAddress;
	CGuiLabel		m_wndObjectLabel;
	CGuiTextCtrl	m_wndObject;
	CGuiLabel		m_wndInsuranceNoLabel;
	CGuiTextCtrl	m_wndInsuranceNo;
	CGuiNumberCtrl	m_wndDiscount;
	CGuiLabel		m_wndRankLabel;
	CGuiNumberCtrl	m_wndRank;
	CGuiLabel		m_wndPositionLabel;
	CGuiNumberCtrl	m_wndPosition;
	CGuiLabel		m_wndAdmisionDepartmentLabel;
	CGuiTextCtrl	m_wndAdmisionDepartment;
	CGuiLabel		m_wndDischargeDepartmentLabel;
	CGuiTextCtrl	m_wndDischargeDepartment;
	CGuiLabel		m_wndAdmissionDateLabel;
	CGuiDateCtrl	m_wndAdmissionDate;
	CGuiLabel		m_wndDischargeDateLabel;
	CGuiDateCtrl	m_wndDischargeDate;
	CGuiLabel		m_wndClinicalRecordNoLabel;
	CGuiTextCtrl	m_wndClinicalRecordNo;
	CGuiLabel		m_wndTotalCostLabel;
	CGuiNumberCtrl	m_wndTotalCost;
	CGuiLabel		m_wndTotalAdvancePaymentLabel;
	CGuiNumberCtrl	m_wndTotalAdvancePayment;
	CGuiLabel		m_wndTotalRegimenLabel;
	CGuiNumberCtrl	m_wndTotalRegimen;
	CGuiLabel		m_wndTotalEatMoneyLabel;
	CGuiNumberCtrl	m_wndTotalEatMoney;
	CGuiLabel		m_wndTotalPaidLabel;
	CGuiNumberCtrl	m_wndTotalPaid;
	CGuiButton		m_wndCalcSalary;
	CGuiListCtrl	m_wndcontrol_40;
	long	m_nDocumentNo;
	CString	m_szPatientName;
	CString	m_szAge;
	CString	m_szSex;
	CString	m_szAddress;
	CString	m_szObject;
	CString	m_szInsuranceNo;
	long	m_nDiscount;
	long	m_nRank;
	long	m_nPosition;
	CString	m_szAdmisionDepartment;
	CString	m_szDischargeDepartment;
	CString	m_szAdmissionDate;
	CString	m_szDischargeDate;
	CString	m_szClinicalRecordNo;
	long	m_nTotalCost;
	long	m_nTotalAdvancePayment;
	long	m_nTotalRegimen;
	long	m_nTotalEatMoney;
	long	m_nTotalPaid;
	//void			OnDocumentNoChange(); 
	//void			OnDocumentNoSetfocus(); 
	//void			OnDocumentNoKillfocus(); 
	int			OnDocumentNoCheckValue(); 
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
	//void			OnObjectChange(); 
	//void			OnObjectSetfocus(); 
	//void			OnObjectKillfocus(); 
	int			OnObjectCheckValue(); 
	//void			OnInsuranceNoChange(); 
	//void			OnInsuranceNoSetfocus(); 
	//void			OnInsuranceNoKillfocus(); 
	int			OnInsuranceNoCheckValue(); 
	//void			OnDiscountChange(); 
	//void			OnDiscountSetfocus(); 
	//void			OnDiscountKillfocus(); 
	int			OnDiscountCheckValue(); 
	//void			OnRankChange(); 
	//void			OnRankSetfocus(); 
	//void			OnRankKillfocus(); 
	int			OnRankCheckValue(); 
	//void			OnPositionChange(); 
	//void			OnPositionSetfocus(); 
	//void			OnPositionKillfocus(); 
	int			OnPositionCheckValue(); 
	//void			OnAdmisionDepartmentChange(); 
	//void			OnAdmisionDepartmentSetfocus(); 
	//void			OnAdmisionDepartmentKillfocus(); 
	int			OnAdmisionDepartmentCheckValue(); 
	//void			OnDischargeDepartmentChange(); 
	//void			OnDischargeDepartmentSetfocus(); 
	//void			OnDischargeDepartmentKillfocus(); 
	int			OnDischargeDepartmentCheckValue(); 
	//void			OnAdmissionDateChange(); 
	//void			OnAdmissionDateSetfocus(); 
	//void			OnAdmissionDateKillfocus(); 
	int			OnAdmissionDateCheckValue(); 
	//void			OnDischargeDateChange(); 
	//void			OnDischargeDateSetfocus(); 
	//void			OnDischargeDateKillfocus(); 
	int			OnDischargeDateCheckValue(); 
	//void			OnClinicalRecordNoChange(); 
	//void			OnClinicalRecordNoSetfocus(); 
	//void			OnClinicalRecordNoKillfocus(); 
	int			OnClinicalRecordNoCheckValue(); 
	//void			OnTotalCostChange(); 
	//void			OnTotalCostSetfocus(); 
	//void			OnTotalCostKillfocus(); 
	int			OnTotalCostCheckValue(); 
	//void			OnTotalAdvancePaymentChange(); 
	//void			OnTotalAdvancePaymentSetfocus(); 
	//void			OnTotalAdvancePaymentKillfocus(); 
	int			OnTotalAdvancePaymentCheckValue(); 
	//void			OnTotalRegimenChange(); 
	//void			OnTotalRegimenSetfocus(); 
	//void			OnTotalRegimenKillfocus(); 
	int			OnTotalRegimenCheckValue(); 
	//void			OnTotalEatMoneyChange(); 
	//void			OnTotalEatMoneySetfocus(); 
	//void			OnTotalEatMoneyKillfocus(); 
	int			OnTotalEatMoneyCheckValue(); 
	//void			OnTotalPaidChange(); 
	//void			OnTotalPaidSetfocus(); 
	//void			OnTotalPaidKillfocus(); 
	int			OnTotalPaidCheckValue(); 
	void			OnCalcSalarySelect(); 
	long			Oncontrol_40LoadData(); 
	void			Oncontrol_40SelectChange(int nOldItem, int nNewItem); 
	void			Oncontrol_40DblClick(); 
	int			Oncontrol_40DeleteItem(); 
	CHMSPatientFeeProfile();
	~CHMSPatientFeeProfile();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSPatientFeeProfile(); 
	int OnEditHMSPatientFeeProfile(); 
	int OnDeleteHMSPatientFeeProfile(); 
	int OnSaveHMSPatientFeeProfile(); 
	int OnCancelHMSPatientFeeProfile(); 
	int OnHMSPatientFeeProfileListLoadData(); 
};
#endif
