#ifndef HMSREGISTERTAKECAREPACKAGEDIALOG_V2_H
#define HMSREGISTERTAKECAREPACKAGEDIALOG_V2_H

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
class AFX_EXT_CLASS CHMSRegisterTakeCarePackageDialog_v2 : public CGuiDialog{
protected:
	CString	m_szLineID;
public:
	long	m_nDocumentNo;
	long	m_nOrderId;
	long	m_nOrderLineId;
	CString m_szDept;
	CString m_szStatus;

	CGuiLabel		m_wndPatientNameLabel;
	CGuiTextCtrl	m_wndPatientName;
	CGuiLabel		m_wndYobLabel;
	CGuiTextCtrl	m_wndYob;
	CGuiLabel		m_wndGenderLabel;
	CGuiGroupBox	m_wndPatientInformation;
	CGuiGroupBox	m_wndPackageInformation;
	CGuiTextCtrl	m_wndGender;
	CGuiLabel		m_wndAddressLabel;
	CGuiTextCtrl	m_wndAddress;
	CGuiLabel		m_wndDayLabel;
	CGuiDateCtrl	m_wndDay;
	CGuiLabel		m_wndShiftLabel;
	CGuiComboBox	m_wndShift;
	CGuiLabel		m_wndBeginTimeLabel;
	CGuiDateTimeCtrl	m_wndBeginTime;
	CGuiLabel		m_wndEndDateLabel;
	CGuiDateTimeCtrl	m_wndEndDate;
	CGuiLabel		m_wndUserLabel;
	CGuiComboBox	m_wndUser;
	CGuiLabel		m_wndEvaluateLabel;
	CGuiComboBox	m_wndEvaluate;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndTerminate;
	CGuiListCtrl	m_wndList;
	CString	m_szPatientName;
	CString	m_szYob;
	CString	m_szGender;
	CString	m_szAddress;
	CString	m_szDay;
	CString	m_szShiftKey;
	CString	m_szBeginTime;
	CString	m_szEndDate;
	CString	m_szUserKey;
	CString	m_szEvaluateKey;
	//void			OnPatientNameChange(); 
	//void			OnPatientNameSetfocus(); 
	//void			OnPatientNameKillfocus(); 
	int			OnPatientNameCheckValue(); 
	//void			OnYobChange(); 
	//void			OnYobSetfocus(); 
	//void			OnYobKillfocus(); 
	int			OnYobCheckValue(); 
	//void			OnGenderChange(); 
	//void			OnGenderSetfocus(); 
	//void			OnGenderKillfocus(); 
	int			OnGenderCheckValue(); 
	//void			OnAddressChange(); 
	//void			OnAddressSetfocus(); 
	//void			OnAddressKillfocus(); 
	int			OnAddressCheckValue(); 
	//void			OnDayChange(); 
	//void			OnDaySetfocus(); 
	//void			OnDayKillfocus(); 
	int			OnDayCheckValue(); 
	void			OnShiftSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnShiftSelendok(); 
	//void			OnShiftSetfocus(); 
	//void			OnShiftKillfocus(); 
	long			OnShiftLoadData(); 
	//void			OnShiftAddNew(); 
	//void			OnBeginTimeChange(); 
	//void			OnBeginTimeSetfocus(); 
	//void			OnBeginTimeKillfocus(); 
	int			OnBeginTimeCheckValue(); 
	//void			OnEndDateChange(); 
	//void			OnEndDateSetfocus(); 
	//void			OnEndDateKillfocus(); 
	int			OnEndDateCheckValue(); 
	void			OnUserSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnUserSelendok(); 
	//void			OnUserSetfocus(); 
	//void			OnUserKillfocus(); 
	long			OnUserLoadData(); 
	//void			OnUserAddNew(); 
	void			OnEvaluateSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnEvaluateSelendok(); 
	//void			OnEvaluateSetfocus(); 
	//void			OnEvaluateKillfocus(); 
	long			OnEvaluateLoadData(); 
	//void			OnEvaluateAddNew(); 
	void			OnAddSelect(); 
	void			OnEditSelect(); 
	void			OnDeleteSelect(); 
	void			OnSaveSelect(); 
	void			OnTerminateSelect(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	CHMSRegisterTakeCarePackageDialog_v2(CWnd *pParent, int nMode);
	~CHMSRegisterTakeCarePackageDialog_v2();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSRegisterTakeCarePackageDialog_v2(); 
	int OnEditHMSRegisterTakeCarePackageDialog_v2(); 
	int OnDeleteHMSRegisterTakeCarePackageDialog_v2(); 
	int OnSaveHMSRegisterTakeCarePackageDialog_v2(); 
	int OnCancelHMSRegisterTakeCarePackageDialog_v2(); 
	int OnHMSRegisterTakeCarePackageDialog_v2ListLoadData(); 
	long		LoadUserList(CWnd* pWnd, CString szId, CString szFilter = _T(""));
};
#endif
