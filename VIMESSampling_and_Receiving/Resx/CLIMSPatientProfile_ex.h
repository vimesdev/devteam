#ifndef CLIMSPATIENTPROFILE_EX_H
#define CLIMSPATIENTPROFILE_EX_H

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
class CCLIMSPatientProfile_ex : public CGuiView{
protected:
public:
	CGuiGroupBox	m_wndPatientProfile_ex;
	CGuiGroupBox	m_wndSearchInformation;
	CGuiLabel		m_wndCalamvieclabel;
	CGuiComboBox	m_wndCalamviec;
	CGuiLabel		m_wndChoncuaLabel;
	CGuiComboBox	m_wndChoncua;
	CGuiLabel		m_wndDocumentNoLabel;
	CGuiNumberCtrl	m_wndDocumentNo;
	CGuiLabel		m_wndBarcodeLabel;
	CGuiNumberCtrl	m_wndBarcode;
	CGuiLabel		m_wndPatientNameLabel;
	CGuiTextCtrl	m_wndPatientName;
	CGuiLabel		m_wndAgeLabel;
	CGuiTextCtrl	m_wndAge;
	CGuiLabel		m_wndSexLabel;
	CGuiTextCtrl	m_wndSex;
	CGuiLabel		m_wndAddressLabel;
	CGuiTextCtrl	m_wndAddress;
	CGuiLabel		m_wndDiagnosticLabel;
	CGuiTextCtrl	m_wndDiagnostic;
	CGuiLabel		m_wndOrderDateLabel;
	CGuiDateCtrl	m_wndOrderDate;
	CGuiLabel		m_wndDoctorLabel;
	CGuiTextCtrl	m_wndDoctor;
	CGuiLabel		m_wndDepartmentLabel;
	CGuiTextCtrl	m_wndDepartment;
	CGuiLabel		m_wndRoomLabel;
	CGuiTextCtrl	m_wndRoom;
	CGuiLabel		m_wndPerformDateLabel;
	CGuiDateCtrl	m_wndPerformDate;
	CGuiLabel		m_wndPerformByLabel;
	CGuiTextCtrl	m_wndPerformBy;
	CGuiLabel		m_wndObjectLabel;
	CGuiTextCtrl	m_wndObject;
	CGuiCheckBox	m_wndEmergency;
	CGuiListCtrl	m_wndOrderList;
	CGuiLabel		m_wndFromDateLabel;
	CGuiDateCtrl	m_wndFromDate;
	CGuiLabel		m_wndToDateLabel;
	CGuiDateCtrl	m_wndToDate;
	CGuiLabel		m_wndSearchNameLabel;
	CGuiTextCtrl	m_wndSearchName;
	CGuiRadioButton	m_wndWating;
	CGuiRadioButton	m_wndSampling;
	CGuiRadioButton	m_wndReceiving;
	CGuiRadioButton	m_wndUploaded;
	CGuiListCtrl	m_wndTestList;
	CGuiLabel		m_wndTestGroupLabel;
	CGuiComboBox	m_wndTestGroup;
	CGuiButton		m_wndApproval;
	CGuiButton		m_wndPrint;
	CGuiButton		m_wndTimerCheck;
	CGuiTextCtrl*	m_wndm_pResult;
	CGuiTextCtrl*	m_wndm_pNote;
	CGuiTabCtrl	m_wndTab;
	CString	m_szCalamviecKey;
	CString	m_szChoncuaKey;
	long	m_nDocumentNo;
	long	m_nBarcode;
	CString	m_szPatientName;
	CString	m_szAge;
	CString	m_szSex;
	CString	m_szAddress;
	CString	m_szDiagnostic;
	CString	m_szOrderDate;
	CString	m_szDoctor;
	CString	m_szDepartment;
	CString	m_szRoom;
	CString	m_szPerformDate;
	CString	m_szPerformBy;
	CString	m_szObject;
	BOOL	m_bEmergency;
	CString	m_szFromDate;
	CString	m_szToDate;
	CString	m_szSearchName;
	int	m_nWating;
	int	m_nSampling;
	int	m_nReceiving;
	int	m_nUploaded;
	CString	m_szTestGroupKey;
	void			OnCalamviecSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnCalamviecSelendok(); 
	//void			OnCalamviecSetfocus(); 
	//void			OnCalamviecKillfocus(); 
	long			OnCalamviecLoadData(); 
	//void			OnCalamviecAddNew(); 
	void			OnChoncuaSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnChoncuaSelendok(); 
	//void			OnChoncuaSetfocus(); 
	//void			OnChoncuaKillfocus(); 
	long			OnChoncuaLoadData(); 
	//void			OnChoncuaAddNew(); 
	//void			OnDocumentNoChange(); 
	//void			OnDocumentNoSetfocus(); 
	//void			OnDocumentNoKillfocus(); 
	int			OnDocumentNoCheckValue(); 
	//void			OnBarcodeChange(); 
	//void			OnBarcodeSetfocus(); 
	//void			OnBarcodeKillfocus(); 
	int			OnBarcodeCheckValue(); 
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
	//void			OnDiagnosticChange(); 
	//void			OnDiagnosticSetfocus(); 
	//void			OnDiagnosticKillfocus(); 
	int			OnDiagnosticCheckValue(); 
	//void			OnOrderDateChange(); 
	//void			OnOrderDateSetfocus(); 
	//void			OnOrderDateKillfocus(); 
	int			OnOrderDateCheckValue(); 
	//void			OnDoctorChange(); 
	//void			OnDoctorSetfocus(); 
	//void			OnDoctorKillfocus(); 
	int			OnDoctorCheckValue(); 
	//void			OnDepartmentChange(); 
	//void			OnDepartmentSetfocus(); 
	//void			OnDepartmentKillfocus(); 
	int			OnDepartmentCheckValue(); 
	//void			OnRoomChange(); 
	//void			OnRoomSetfocus(); 
	//void			OnRoomKillfocus(); 
	int			OnRoomCheckValue(); 
	//void			OnPerformDateChange(); 
	//void			OnPerformDateSetfocus(); 
	//void			OnPerformDateKillfocus(); 
	int			OnPerformDateCheckValue(); 
	//void			OnPerformByChange(); 
	//void			OnPerformBySetfocus(); 
	//void			OnPerformByKillfocus(); 
	int			OnPerformByCheckValue(); 
	//void			OnObjectChange(); 
	//void			OnObjectSetfocus(); 
	//void			OnObjectKillfocus(); 
	int			OnObjectCheckValue(); 
	void			OnEmergencySelect(); 
	long			OnOrderListLoadData(); 
	void			OnOrderListSelectChange(int nOldItem, int nNewItem); 
	void			OnOrderListDblClick(); 
	int			OnOrderListDeleteItem(); 
	//void			OnFromDateChange(); 
	//void			OnFromDateSetfocus(); 
	//void			OnFromDateKillfocus(); 
	int			OnFromDateCheckValue(); 
	//void			OnToDateChange(); 
	//void			OnToDateSetfocus(); 
	//void			OnToDateKillfocus(); 
	int			OnToDateCheckValue(); 
	//void			OnSearchNameChange(); 
	//void			OnSearchNameSetfocus(); 
	//void			OnSearchNameKillfocus(); 
	int			OnSearchNameCheckValue(); 
	void			OnWatingSelect(); 
	void			OnSamplingSelect(); 
	void			OnReceivingSelect(); 
	void			OnUploadedSelect(); 
	long			OnTestListLoadData(); 
	void			OnTestListSelectChange(int nOldItem, int nNewItem); 
	void			OnTestListDblClick(); 
	int			OnTestListDeleteItem(); 
	void			OnTestGroupSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnTestGroupSelendok(); 
	//void			OnTestGroupSetfocus(); 
	//void			OnTestGroupKillfocus(); 
	long			OnTestGroupLoadData(); 
	//void			OnTestGroupAddNew(); 
	void			OnApprovalSelect(); 
	void			OnPrintSelect(); 
	void			OnTimerCheckSelect(); 
	void			OnTabSelectChange(int nOld, int nNew); 
	CCLIMSPatientProfile_ex();
	~CCLIMSPatientProfile_ex();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddCLIMSPatientProfile_ex(); 
	int OnEditCLIMSPatientProfile_ex(); 
	int OnDeleteCLIMSPatientProfile_ex(); 
	int OnSaveCLIMSPatientProfile_ex(); 
	int OnCancelCLIMSPatientProfile_ex(); 
	int OnCLIMSPatientProfile_exListLoadData(); 
};
#endif
