#ifndef HMSSETPRIVORITYPATIENT_H
#define HMSSETPRIVORITYPATIENT_H

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
#include "GuiDialog.h"
#include "DbField.h"
class CHMSSetPrivorityPatient : public CGuiDialog{
protected:
public:
	CGuiGroupBox	m_wndInformation;
	CGuiLabel		m_wndPatientnameLabel;
	CGuiTextCtrl	m_wndPatientname;
	CGuiLabel		m_wndAgeLabel;
	CGuiDateCtrl	m_wndAge;
	CGuiLabel		m_wndSexLabel;
	CGuiTextCtrl	m_wndSex;
	CGuiLabel		m_wndDocnoLabel;
	CGuiNumberCtrl	m_wndDocno;
	CGuiLabel		m_wndDepidLabel;
	CGuiTextCtrl	m_wndDepid;
	CGuiLabel		m_wndInsuranceLabel;
	CGuiTextCtrl	m_wndInsurance;
	CGuiLabel		m_wndAdmitdateLabel;
	CGuiDateTimeCtrl	m_wndAdmitdate;
	CGuiLabel		m_wndAddressLabel;
	CGuiTextCtrl	m_wndAddress;
	CGuiButton		m_wndApply;
	CGuiButton		m_wndClose;
	CGuiLabel		m_wndDepositAmountLabel;
	CGuiNumberCtrl	m_wndDepositAmount;
	CGuiLabel		m_wndTotalPatpaidLabel;
	CGuiNumberCtrl	m_wndTotalPatpaid;
	CGuiCheckBox	m_wndPriority;
	CString	m_szPatientname;
	CString	m_szAge;
	CString	m_szSex;
	long	m_nDocno;
	CString	m_szDepid;
	CString	m_szInsurance;
	CString	m_szAdmitdate;
	CString	m_szAddress;
	long	m_nDepositAmount;
	long	m_nTotalPatpaid;
	BOOL	m_bPriority;
	CDbfMap	m_hms_foodtravelsupportTbl;
	CDbfMap	m_hms_patientTbl;
	CDbfMap	m_hms_treatment_recordTbl;
	//void			OnPatientnameChange(); 
	//void			OnPatientnameSetfocus(); 
	//void			OnPatientnameKillfocus(); 
	int			OnPatientnameCheckValue(); 
	//void			OnAgeChange(); 
	//void			OnAgeSetfocus(); 
	//void			OnAgeKillfocus(); 
	int			OnAgeCheckValue(); 
	//void			OnSexChange(); 
	//void			OnSexSetfocus(); 
	//void			OnSexKillfocus(); 
	int			OnSexCheckValue(); 
	//void			OnDocnoChange(); 
	//void			OnDocnoSetfocus(); 
	//void			OnDocnoKillfocus(); 
	int			OnDocnoCheckValue(); 
	//void			OnDepidChange(); 
	//void			OnDepidSetfocus(); 
	//void			OnDepidKillfocus(); 
	int			OnDepidCheckValue(); 
	//void			OnInsuranceChange(); 
	//void			OnInsuranceSetfocus(); 
	//void			OnInsuranceKillfocus(); 
	int			OnInsuranceCheckValue(); 
	//void			OnAdmitdateChange(); 
	//void			OnAdmitdateSetfocus(); 
	//void			OnAdmitdateKillfocus(); 
	int			OnAdmitdateCheckValue(); 
	//void			OnAddressChange(); 
	//void			OnAddressSetfocus(); 
	//void			OnAddressKillfocus(); 
	int			OnAddressCheckValue(); 
	void			OnApplySelect(); 
	void			OnCloseSelect(); 
	//void			OnDepositAmountChange(); 
	//void			OnDepositAmountSetfocus(); 
	//void			OnDepositAmountKillfocus(); 
	int			OnDepositAmountCheckValue(); 
	//void			OnTotalPatpaidChange(); 
	//void			OnTotalPatpaidSetfocus(); 
	//void			OnTotalPatpaidKillfocus(); 
	int			OnTotalPatpaidCheckValue(); 
	void			OnPrioritySelect(); 
	CHMSSetPrivorityPatient(CWnd *pParent);
	~CHMSSetPrivorityPatient();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSSetPrivorityPatient(); 
	int OnEditHMSSetPrivorityPatient(); 
	int OnDeleteHMSSetPrivorityPatient(); 
	int OnSaveHMSSetPrivorityPatient(); 
	int OnCancelHMSSetPrivorityPatient(); 
	int OnHMSSetPrivorityPatientListLoadData(); 
};
#endif
