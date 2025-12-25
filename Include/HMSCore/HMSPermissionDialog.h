#ifndef HMSPERMISSIONDIALOG_H
#define HMSPERMISSIONDIALOG_H

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
#include "GuiDialog.h"
#include "DbField.h"
class CHMSPermissionDialog : public CGuiDialog{
protected:
public:
	CString		m_szUserID;
	CGuiGroupBox	m_wndPermissionInformation;
	CGuiCheckBox	m_wndReceptionManagementModule;
	CGuiCheckBox	m_wndExaminationManagementModule;
	CGuiCheckBox	m_wndTreatmentManagementModule;
	CGuiCheckBox	m_wndLabManagementModule;
	CGuiCheckBox	m_wndPACSManagementModule;
	CGuiCheckBox	m_wndEndoscopyManagementModule;
	CGuiCheckBox	m_wndHospitalFeeManagementModule;
	CGuiCheckBox	m_wndPharmacyManagementModule;
	CGuiCheckBox	m_wndOperationManagementModule;
	CGuiCheckBox	m_wndFixedAssetModule;
	CGuiCheckBox	m_wndHumanResourceModule;
	CGuiCheckBox	m_wndClinicalRecordManagementModule;
	CGuiCheckBox	m_wndSystemSetupModule;
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
	BOOL	m_bExaminationManagementModule;
	BOOL	m_bTreatmentManagementModule;
	BOOL	m_bLabManagementModule;
	BOOL	m_bPACSManagementModule;
	BOOL	m_bEndoscopyManagementModule;
	BOOL	m_bHospitalFeeManagementModule;
	BOOL	m_bPharmacyManagementModule;
	BOOL	m_bOperationManagementModule;
	BOOL	m_bFixedAssetModule;
	BOOL	m_bHumanResourceModule;
	BOOL	m_bClinicalRecordManagementModule;
	BOOL	m_bSystemSetupModule;
	CString	m_szExaminationDept;
	CString	m_szExaminationRoom;
	CString	m_szObjects;
	CDbfMap	m_sys_userTbl;
	void			OnReceptionManagementModuleSelect(); 
	void			OnExaminationManagementModuleSelect(); 
	void			OnTreatmentManagementModuleSelect(); 
	void			OnLabManagementModuleSelect(); 
	void			OnPACSManagementModuleSelect(); 
	void			OnEndoscopyManagementModuleSelect(); 
	void			OnHospitalFeeManagementModuleSelect(); 
	void			OnPharmacyManagementModuleSelect(); 
	void			OnOperationManagementModuleSelect(); 
	void			OnFixedAssetModuleSelect(); 
	void			OnHumanResourceModuleSelect(); 
	void			OnClinicalRecordManagementModuleSelect(); 
	void			OnSystemSetupModuleSelect(); 
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
