#ifndef HMSSURGERYSCHEDULEINFODIALOG_H
#define HMSSURGERYSCHEDULEINFODIALOG_H

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
class CHMSSurgeryScheduleInfoDialog : public CGuiDialog{
protected:
	CStringArray m_arrUsers;
	void ReplaceItem(CString szOldItem, CString szNewItem);
	long LoadData(CGuiComboBox* pComBo, CString szKey);
public:
	CGuiGroupBox	m_wndScheduleInfo;
	CGuiLabel		m_wndStartDateLabel;
	CGuiDateCtrl	m_wndStartDate;
	CGuiTimeCtrl	m_wndStartTime;
	CGuiLabel		m_wndEndDateLabel;
	CGuiDateCtrl	m_wndEndDate;
	CGuiTimeCtrl	m_wndEndTime;
	CGuiLabel		m_wndDoctorLabel;
	CGuiComboBox	m_wndDoctor;
	CGuiLabel		m_wndDoctor1Label;
	CGuiComboBox	m_wndDoctor1;
	CGuiLabel		m_wndDoctor2Label;
	CGuiComboBox	m_wndDoctor2;
	CGuiLabel		m_wndNurses1Label;
	CGuiComboBox	m_wndNurses1;
	CGuiLabel		m_wndNurses2Label;
	CGuiComboBox	m_wndNurses2;
	CGuiLabel		m_wndNurses3Label;
	CGuiComboBox	m_wndNurses3;
	CGuiLabel		m_wndNurses4Label;
	CGuiComboBox	m_wndNurses4;
	CGuiLabel		m_wndNurses5Label;
	CGuiComboBox	m_wndNurses5;
	CGuiLabel		m_wndNurses6Label;
	CGuiComboBox	m_wndNurses6;
	CGuiLabel		m_wndNurses7Label;
	CGuiComboBox	m_wndNurses7;
	CGuiLabel		m_wndNurses8Label;
	CGuiComboBox	m_wndNurses8;
	CGuiLabel		m_wndNurses9Label;
	CGuiComboBox	m_wndNurses9;
	CGuiCheckBox	m_wndLockSchedule;
	CGuiButton		m_wndUpdate;
	CGuiButton		m_wndClose;

	CString	m_szStartDate;
	CString	m_szStartTime;
	CString	m_szEndDate;
	CString	m_szEndTime;
	CString	m_szDoctorKey;
	CString	m_szDoctor1Key;
	CString	m_szDoctor2Key;
	CString	m_szNurses1Key;
	CString	m_szNurses2Key;
	CString	m_szNurses3Key;
	CString	m_szNurses4Key;
	CString	m_szNurses5Key;
	CString	m_szNurses6Key;
	CString	m_szNurses7Key;
	CString	m_szNurses8Key;
	CString	m_szNurses9Key;
	BOOL	m_bLockSchedule;

	CDbfMap m_hms_surgery_scheduleTbl;
	CDbfMap m_hms_surgery_schedule_lineTbl;
	long m_nIdx;
	COleDateTime m_DateTime;

	//void			OnStartDateChange(); 
	//void			OnStartDateSetfocus(); 
	//void			OnStartDateKillfocus(); 
	int			OnStartDateCheckValue(); 
	//void			OnStartTimeChange(); 
	//void			OnStartTimeSetfocus(); 
	//void			OnStartTimeKillfocus(); 
	int			OnStartTimeCheckValue(); 
	//void			OnEndDateChange(); 
	//void			OnEndDateSetfocus(); 
	//void			OnEndDateKillfocus(); 
	int			OnEndDateCheckValue(); 
	//void			OnEndTimeChange(); 
	//void			OnEndTimeSetfocus(); 
	//void			OnEndTimeKillfocus(); 
	int			OnEndTimeCheckValue(); 
	void			OnDoctorSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDoctorSelendok(); 
	//void			OnDoctorSetfocus(); 
	//void			OnDoctorKillfocus(); 
	long			OnDoctorLoadData(); 
	void			OnDoctorAddNew(); 
	void			OnDoctor1SelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDoctor1Selendok(); 
	//void			OnDoctor1Setfocus(); 
	//void			OnDoctor1Killfocus(); 
	long			OnDoctor1LoadData(); 
	void			OnDoctor1AddNew(); 
	void			OnDoctor2SelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDoctor2Selendok(); 
	//void			OnDoctor2Setfocus(); 
	//void			OnDoctor2Killfocus(); 
	long			OnDoctor2LoadData(); 
	void			OnDoctor2AddNew(); 
	void			OnNurses1SelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnNurses1Selendok(); 
	//void			OnNurses1Setfocus(); 
	//void			OnNurses1Killfocus(); 
	long			OnNurses1LoadData(); 
	void			OnNurses1AddNew(); 
	void			OnNurses2SelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnNurses2Selendok(); 
	//void			OnNurses2Setfocus(); 
	//void			OnNurses2Killfocus(); 
	long			OnNurses2LoadData(); 
	void			OnNurses2AddNew(); 
	void			OnNurses3SelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnNurses3Selendok(); 
	//void			OnNurses3Setfocus(); 
	//void			OnNurses3Killfocus(); 
	long			OnNurses3LoadData(); 
	void			OnNurses3AddNew(); 
	void			OnNurses4SelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnNurses4Selendok(); 
	//void			OnNurses4Setfocus(); 
	//void			OnNurses4Killfocus(); 
	long			OnNurses4LoadData(); 
	void			OnNurses4AddNew(); 
	void			OnNurses5SelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnNurses5Selendok(); 
	//void			OnNurses5Setfocus(); 
	//void			OnNurses5Killfocus(); 
	long			OnNurses5LoadData(); 
	void			OnNurses5AddNew(); 
	void			OnNurses6SelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnNurses6Selendok(); 
	//void			OnNurses6Setfocus(); 
	//void			OnNurses6Killfocus(); 
	long			OnNurses6LoadData(); 
	//void			OnNurses6AddNew(); 
	void			OnNurses7SelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnNurses7Selendok(); 
	//void			OnNurses7Setfocus(); 
	//void			OnNurses7Killfocus(); 
	long			OnNurses7LoadData(); 
	//void			OnNurses7AddNew(); 
	void			OnNurses8SelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnNurses8Selendok(); 
	//void			OnNurses8Setfocus(); 
	//void			OnNurses8Killfocus(); 
	long			OnNurses8LoadData(); 
	//void			OnNurses8AddNew(); 
	void			OnNurses9SelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnNurses9Selendok(); 
	//void			OnNurses9Setfocus(); 
	//void			OnNurses9Killfocus(); 
	long			OnNurses9LoadData(); 
	//void			OnNurses9AddNew(); 
	void			OnLockScheduleSelect(); 
	void			OnUpdateSelect(); 
	void			OnCloseSelect();
	CHMSSurgeryScheduleInfoDialog(CWnd *pParent);
	~CHMSSurgeryScheduleInfoDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSSurgeryScheduleInfoDialog(); 
	int OnEditHMSSurgeryScheduleInfoDialog(); 
	int OnDeleteHMSSurgeryScheduleInfoDialog(); 
	int OnSaveHMSSurgeryScheduleInfoDialog(); 
	int OnCancelHMSSurgeryScheduleInfoDialog();
	int OnHMSSurgeryScheduleInfoDialogListLoadData();
	COleDateTime GetToTime();
	COleDateTime GetFromTime();
	//CString GetSubject();
};
#endif
