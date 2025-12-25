#ifndef HMSEXAMINATIONDOCUMENT_H
#define HMSEXAMINATIONDOCUMENT_H

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Copyright(C) Vietnamese Medical Software Join Stock Company. 2006-2008.			
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
//	Ban quyen cua Cong Ty Co Phan Phan Mem Y Te Viet Name (VIMES., JSC). 2006-2008.
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
class CHMSExaminationDocument : public CGuiView{
protected:
public:
	CGuiGroupBox	m_wndProfiles;
	CGuiGroupBox	m_wndExaminationInformation;
	CGuiLabel		m_wndPatientNoLabel;
	CGuiNumberCtrl	m_wndPatientNo;
	CGuiLabel		m_wndDocumentNoLabel;
	CGuiNumberCtrl	m_wndDocumentNo;
	CGuiLabel		m_wndPatientNameLabel;
	CGuiTextCtrl	m_wndPatientName;
	CGuiLabel		m_wndAgeLabel;
	CGuiTextCtrl	m_wndAge;
	CGuiDateCtrl	m_wndBirthDate;
	CGuiLabel		m_wndSexLabel;
	CGuiTextCtrl	m_wndSex;
	CGuiLabel		m_wndNationLabel;
	CGuiTextCtrl	m_wndNation;
	CGuiLabel		m_wndOccupationLabel;
	CGuiTextCtrl	m_wndOccupation;
	CGuiLabel		m_wndAddressLabel;
	CGuiTextCtrl	m_wndAddress;
	CGuiLabel		m_wndDetailAddrlLabel;
	CGuiTextCtrl	m_wndDetailAddress;
	CGuiLabel		m_wndWorkplaceLabel;
	CGuiTextCtrl	m_wndWorkplace;
	CGuiLabel		m_wndObjectLabel;
	CGuiTextCtrl	m_wndObject;
	CGuiTextCtrl	m_wndCardNo;
	CGuiButton		m_wndCardInfoBtn;
	CGuiLabel		m_wndDoctorLabel;
	CGuiTextCtrl	m_wndDoctor;
	CGuiLabel		m_wndStatusLabel;
	CGuiTextCtrl	m_wndStatus;
	CGuiLabel		m_wndExamDateLabel;
	CGuiDateCtrl	m_wndExamDate;
	CGuiLabel		m_wndTermDateLabel;
	CGuiDateCtrl	m_wndTerminatedDate;
	CGuiLabel		m_wndResultLabel;
	CGuiTextCtrl	m_wndResult;
	CGuiLabel		m_wndICDLabel;
	CGuiTextCtrl	m_wndICD;
	CGuiLabel		m_wndConcludeLabel;
	CGuiTextCtrl	m_wndConclude;
	CGuiButton		m_wndConcludeBtn;
	CGuiLabel		m_wndDescriptionLabel;
	CGuiTextCtrl	m_wndDescription;
	CGuiTabCtrl	m_wndExaminationTab;
	long	m_nPatientNo;
	long	m_nDocumentNo;
	CString	m_szPatientName;
	CString	m_szAge;
	CString	m_szBirthDate;
	CString	m_szSex;
	CString	m_szNation;
	CString	m_szOccupation;
	CString	m_szAddress;
	CString	m_szDetailAddress;
	CString	m_szWorkplace;
	CString	m_szObject;
	CString	m_szCardNo;
	CString	m_szDoctor;
	CString	m_szStatus;
	CString	m_szExamDate;
	CString	m_szTerminatedDate;
	CString	m_szResult;
	CString	m_szICD;
	CString	m_szConclude;
	CString	m_szDescription;
	//int			OnPatientNoChange(); 
	//int			OnPatientNoSetfocus(); 
	//int			OnPatientNoKillfocus(); 
	int			OnPatientNoCheckValue(); 
	//int			OnDocumentNoChange(); 
	//int			OnDocumentNoSetfocus(); 
	//int			OnDocumentNoKillfocus(); 
	int			OnDocumentNoCheckValue(); 
	//int			OnPatientNameChange(); 
	//int			OnPatientNameSetfocus(); 
	//int			OnPatientNameKillfocus(); 
	int			OnPatientNameCheckValue(); 
	//int			OnAgeChange(); 
	//int			OnAgeSetfocus(); 
	//int			OnAgeKillfocus(); 
	int			OnAgeCheckValue(); 
	//int			OnBirthDateChange(); 
	//int			OnBirthDateSetfocus(); 
	//int			OnBirthDateKillfocus(); 
	int			OnBirthDateCheckValue(); 
	//int			OnSexChange(); 
	//int			OnSexSetfocus(); 
	//int			OnSexKillfocus(); 
	int			OnSexCheckValue(); 
	//int			OnNationChange(); 
	//int			OnNationSetfocus(); 
	//int			OnNationKillfocus(); 
	int			OnNationCheckValue(); 
	//int			OnOccupationChange(); 
	//int			OnOccupationSetfocus(); 
	//int			OnOccupationKillfocus(); 
	int			OnOccupationCheckValue(); 
	//int			OnAddressChange(); 
	//int			OnAddressSetfocus(); 
	//int			OnAddressKillfocus(); 
	int			OnAddressCheckValue(); 
	//int			OnDetailAddressChange(); 
	//int			OnDetailAddressSetfocus(); 
	//int			OnDetailAddressKillfocus(); 
	int			OnDetailAddressCheckValue(); 
	//int			OnWorkplaceChange(); 
	//int			OnWorkplaceSetfocus(); 
	//int			OnWorkplaceKillfocus(); 
	int			OnWorkplaceCheckValue(); 
	//int			OnObjectChange(); 
	//int			OnObjectSetfocus(); 
	//int			OnObjectKillfocus(); 
	int			OnObjectCheckValue(); 
	//int			OnCardNoChange(); 
	//int			OnCardNoSetfocus(); 
	//int			OnCardNoKillfocus(); 
	int			OnCardNoCheckValue(); 
	int			OnCardInfoBtnSelect(); 
	//int			OnDoctorChange(); 
	//int			OnDoctorSetfocus(); 
	//int			OnDoctorKillfocus(); 
	int			OnDoctorCheckValue(); 
	//int			OnStatusChange(); 
	//int			OnStatusSetfocus(); 
	//int			OnStatusKillfocus(); 
	int			OnStatusCheckValue(); 
	//int			OnExamDateChange(); 
	//int			OnExamDateSetfocus(); 
	//int			OnExamDateKillfocus(); 
	int			OnExamDateCheckValue(); 
	//int			OnTerminatedDateChange(); 
	//int			OnTerminatedDateSetfocus(); 
	//int			OnTerminatedDateKillfocus(); 
	int			OnTerminatedDateCheckValue(); 
	//int			OnResultChange(); 
	//int			OnResultSetfocus(); 
	//int			OnResultKillfocus(); 
	int			OnResultCheckValue(); 
	//int			OnICDChange(); 
	//int			OnICDSetfocus(); 
	//int			OnICDKillfocus(); 
	int			OnICDCheckValue(); 
	//int			OnConcludeChange(); 
	//int			OnConcludeSetfocus(); 
	//int			OnConcludeKillfocus(); 
	int			OnConcludeCheckValue(); 
	int			OnConcludeBtnSelect(); 
	//int			OnDescriptionChange(); 
	//int			OnDescriptionSetfocus(); 
	//int			OnDescriptionKillfocus(); 
	int			OnDescriptionCheckValue(); 
	int			OnExaminationTabSelectChange(int nOld, int nNew); 
	CHMSExaminationDocument();
	~CHMSExaminationDocument();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSExaminationDocument(); 
	int OnEditHMSExaminationDocument(); 
	int OnDeleteHMSExaminationDocument(); 
	int OnSaveHMSExaminationDocument(); 
	int OnCancelHMSExaminationDocument(); 
	int OnHMSExaminationDocumentListLoadData(); 
};
#endif
