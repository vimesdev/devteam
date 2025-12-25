#ifndef HMSPERMISSIONDIALOG_H
#define HMSPERMISSIONDIALOG_H

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
class CHMSPermissionDialog : public CGuiDialog
{
protected:
public:
	CString	m_szUserID;
	CGuiCheckBox	m_wndReceptionManagementModule;
	CGuiCheckBox	m_wndHospitalFeeManagementModule;
	CGuiCheckBox	m_wndExaminationManagementModule;
	CGuiCheckBox	m_wndPharmacyManagementModule;
	CGuiCheckBox	m_wndTreatmentManagementModule;
	CGuiCheckBox	m_wndPatientRecordManagementModule;
	CGuiGroupBox	m_wndPermissionInformation;
	CGuiCheckBox	m_wndLabManagementModule;
	CGuiCheckBox	m_wndFixedAssetModule;
	CGuiCheckBox	m_wndPACSManagementModule;
	CGuiCheckBox	m_wndHumanResourceModule;
	CGuiCheckBox	m_wndEndoscopyManagementModule;
	CGuiCheckBox	m_wndClinicalRecordManagementModule;
	CGuiCheckBox	m_wndSurgeryManagementModule;
	CGuiCheckBox	m_wndSystemSetupModule;
	CGuiCheckBox	m_wndAdmissionRegistrationModule;
	CGuiCheckBox	m_wndMaterialManagementModule;
	CGuiCheckBox	m_wndBloodBankModule;
	CGuiCheckBox	m_wndFixedAssetManagerModule;
	CGuiCheckBox	m_wndShowIpModule;
	CGuiCheckBox	m_wndSystemTrackerModule;
	CGuiCheckBox	m_wndScienceResearchModule;
	CGuiCheckBox	m_wndMRAModule;	
	CGuiCheckBox	m_wndSurgeryManagementModuleII;
	CGuiCheckBox	m_wndSurgeryReqMangr;
	CGuiCheckBox	m_wndVisitPatientModule;
	CGuiLabel		m_wndExaminationDeptLabel;
	CGuiTextCtrl	m_wndExaminationDept;
	CGuiLabel		m_wndExaminationRoomLabel;
	CGuiTextCtrl	m_wndExaminationRoom;
	CGuiButton		m_wndRoomSelect;
	CGuiLabel		m_wndObjectsLabel;
	CGuiTextCtrl	m_wndObjects;
	CGuiButton		m_wndObjectSelect;
	CGuiButton		m_wndApply;
	CGuiButton		m_wndClose;
	BOOL	m_bReceptionManagementModule;
	BOOL	m_bHospitalFeeManagementModule;
	BOOL	m_bExaminationManagementModule;
	BOOL	m_bPharmacyManagementModule;
	BOOL	m_bTreatmentManagementModule;
	BOOL	m_bPatientRecordManagementModule;
	BOOL	m_bLabManagementModule;
	BOOL	m_bFixedAssetModule;
	BOOL	m_bPACSManagementModule;
	BOOL	m_bHumanResourceModule;
	BOOL	m_bEndoscopyManagementModule;
	BOOL	m_bClinicalRecordManagementModule;
	BOOL	m_bSurgeryManagementModule;
	BOOL	m_bSystemSetupModule;
	BOOL	m_bAdmissionRegistrationModule;
	BOOL	m_bMaterialManagementModule;
	BOOL	m_bBloodBankModule;
	BOOL	m_bFixedAssetManagerModule;
	BOOL	m_bShowIpModule;
	BOOL	m_bSystemTrackerModule;
	BOOL	m_bScienceResearchModule;
	BOOL	m_bMRAModule;	
	BOOL	m_bSurgeryManagementModuleII;
	BOOL	m_bSurgeryReqMangr;
	BOOL	m_bVisitPatientModule;
	CString	m_szExaminationDept;
	CString	m_szExaminationRoom;
	CString	m_szObjects;
	CDbfMap	m_sys_userTbl;
	void			OnReceptionManagementModuleSelect(); 
	void			OnHospitalFeeManagementModuleSelect(); 
	void			OnExaminationManagementModuleSelect(); 
	void			OnPharmacyManagementModuleSelect(); 
	void			OnTreatmentManagementModuleSelect(); 
	void			OnPatientRecordManagementModuleSelect(); 
	void			OnLabManagementModuleSelect(); 
	void			OnFixedAssetModuleSelect(); 
	void			OnPACSManagementModuleSelect(); 
	void			OnHumanResourceModuleSelect(); 
	void			OnEndoscopyManagementModuleSelect(); 
	void			OnClinicalRecordManagementModuleSelect(); 
	void			OnSurgeryManagementModuleSelect(); 
	void			OnSystemSetupModuleSelect(); 
	void			OnAdmissionRegistrationModuleSelect(); 
	void			OnMaterialManagementModuleSelect(); 
	void			OnBloodBankModuleSelect();
	void			OnFixedAssetManagerModuleSelect();
	void			OnVisitPatientModuleSelect(); 
	//void			OnExaminationDeptChange(); 
	//void			OnExaminationDeptSetfocus(); 
	//void			OnExaminationDeptKillfocus(); 
	int			OnExaminationDeptCheckValue(); 
	//void			OnExaminationRoomChange(); 
	//void			OnExaminationRoomSetfocus(); 
	//void			OnExaminationRoomKillfocus(); 
	int			OnExaminationRoomCheckValue(); 
	void			OnRoomSelectSelect(); 
	//void			OnObjectsChange(); 
	//void			OnObjectsSetfocus(); 
	//void			OnObjectsKillfocus(); 
	int			OnObjectsCheckValue(); 
	void			OnObjectSelectSelect(); 
	void			OnApplySelect(); 
	void			OnCloseSelect(); 
	CHMSPermissionDialog(CWnd *pParent);
	~CHMSPermissionDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSPermissionDialog(); 
	int OnEditHMSPermissionDialog(); 
	int OnDeleteHMSPermissionDialog(); 
	int OnSaveHMSPermissionDialog(); 
	int OnCancelHMSPermissionDialog(); 
	int OnHMSPermissionDialogListLoadData(); 
};
#endif
