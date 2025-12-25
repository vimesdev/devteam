#ifndef HMSREGISTERTAKECAREPACKAGEDIALOG_H
#define HMSREGISTERTAKECAREPACKAGEDIALOG_H

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
class CHMSRegisterTakeCarePackageDialog : public CGuiDialog{
protected:
public:
	CGuiGroupBox	m_wndPatientInformation;
	CGuiGroupBox	m_wndPackageInformation;
	CGuiLabel		m_wndPatientNameLabel;
	CGuiTextCtrl	m_wndPatientName;
	CGuiLabel		m_wndYobLabel;
	CGuiTextCtrl	m_wndYob;
	CGuiLabel		m_wndGenderLabel;
	CGuiTextCtrl	m_wndGender;
	CGuiLabel		m_wndAddressLabel;
	CGuiTextCtrl	m_wndAddress;
	CGuiLabel		m_wndShiftLabel;
	CGuiComboBox	m_wndShift;
	CGuiLabel		m_wndBeginTimeLabel;
	CGuiDateTimeCtrl	m_wndBeginTime;
	CGuiLabel		m_wndEndDateLabel;
	CGuiDateTimeCtrl	m_wndEndDate;
	CGuiLabel		m_wndUser1Label;
	CGuiComboBox	m_wndUser1;
	CGuiLabel		m_wndEvaluate1Label;
	CGuiComboBox	m_wndEvaluate1;
	CGuiLabel		m_wndUser2Label;
	CGuiComboBox	m_wndUser2;
	CGuiLabel		m_wndEvaluate2Label;
	CGuiComboBox	m_wndEvaluate2;
	CGuiLabel		m_wndUser3Label;
	CGuiComboBox	m_wndUser3;
	CGuiLabel		m_wndEvaluate3Label;
	CGuiComboBox	m_wndEvaluate3;
	CGuiLabel		m_wndUser4Label;
	CGuiComboBox	m_wndUser4;
	CGuiLabel		m_wndEvaluate4Label;
	CGuiComboBox	m_wndEvaluate4;
	CGuiLabel		m_wndUser5Label;
	CGuiComboBox	m_wndUser5;
	CGuiLabel		m_wndEvaluate5Label;
	CGuiComboBox	m_wndEvaluate5;
	CGuiButton		m_wndUpdate;
	CGuiButton		m_wndTerminate;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndClose;
	CString	m_szPatientName;
	CString	m_szYob;
	CString	m_szGender;
	CString	m_szAddress;
	CString	m_szShiftKey;
	CString	m_szBeginTime;
	CString	m_szEndDate;
	CString	m_szUser1Key;
	CString	m_szEvaluate1Key;
	CString	m_szUser2Key;
	CString	m_szEvaluate2Key;
	CString	m_szUser3Key;
	CString	m_szEvaluate3Key;
	CString	m_szUser4Key;
	CString	m_szEvaluate4Key;
	CString	m_szUser5Key;
	CString	m_szEvaluate5Key;
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
	void			OnUser1SelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnUser1Selendok(); 
	//void			OnUser1Setfocus(); 
	//void			OnUser1Killfocus(); 
	long			OnUser1LoadData(); 
	//void			OnUser1AddNew(); 
	void			OnEvaluate1SelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnEvaluate1Selendok(); 
	//void			OnEvaluate1Setfocus(); 
	//void			OnEvaluate1Killfocus(); 
	long			OnEvaluate1LoadData(); 
	//void			OnEvaluate1AddNew(); 
	void			OnUser2SelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnUser2Selendok(); 
	//void			OnUser2Setfocus(); 
	//void			OnUser2Killfocus(); 
	long			OnUser2LoadData(); 
	//void			OnUser2AddNew(); 
	void			OnEvaluate2SelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnEvaluate2Selendok(); 
	//void			OnEvaluate2Setfocus(); 
	//void			OnEvaluate2Killfocus(); 
	long			OnEvaluate2LoadData(); 
	//void			OnEvaluate2AddNew(); 
	void			OnUser3SelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnUser3Selendok(); 
	//void			OnUser3Setfocus(); 
	//void			OnUser3Killfocus(); 
	long			OnUser3LoadData(); 
	//void			OnUser3AddNew(); 
	void			OnEvaluate3SelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnEvaluate3Selendok(); 
	//void			OnEvaluate3Setfocus(); 
	//void			OnEvaluate3Killfocus(); 
	long			OnEvaluate3LoadData(); 
	//void			OnEvaluate3AddNew(); 
	void			OnUser4SelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnUser4Selendok(); 
	//void			OnUser4Setfocus(); 
	//void			OnUser4Killfocus(); 
	long			OnUser4LoadData(); 
	//void			OnUser4AddNew(); 
	void			OnEvaluate4SelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnEvaluate4Selendok(); 
	//void			OnEvaluate4Setfocus(); 
	//void			OnEvaluate4Killfocus(); 
	long			OnEvaluate4LoadData(); 
	//void			OnEvaluate4AddNew(); 
	void			OnUser5SelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnUser5Selendok(); 
	//void			OnUser5Setfocus(); 
	//void			OnUser5Killfocus(); 
	long			OnUser5LoadData(); 
	//void			OnUser5AddNew(); 
	void			OnEvaluate5SelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnEvaluate5Selendok(); 
	//void			OnEvaluate5Setfocus(); 
	//void			OnEvaluate5Killfocus(); 
	long			OnEvaluate5LoadData(); 
	//void			OnEvaluate5AddNew(); 
	void			OnUpdateSelect(); 
	void			OnTerminateSelect(); 
	void			OnSaveSelect(); 
	void			OnCloseSelect(); 
	CHMSRegisterTakeCarePackageDialog(CWnd *pParent);
	~CHMSRegisterTakeCarePackageDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSRegisterTakeCarePackageDialog(); 
	int OnEditHMSRegisterTakeCarePackageDialog(); 
	int OnDeleteHMSRegisterTakeCarePackageDialog(); 
	int OnSaveHMSRegisterTakeCarePackageDialog(); 
	int OnCancelHMSRegisterTakeCarePackageDialog(); 
	int OnHMSRegisterTakeCarePackageDialogListLoadData(); 
};
#endif
