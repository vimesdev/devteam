#ifndef CHMSSAMPLESCHEDULEINFODIALOG_H
#define CHMSSAMPLESCHEDULEINFODIALOG_H

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
class CCHMSSampleScheduleInfoDialog : public CGuiDialog{
protected:
public:
	CGuiGroupBox	m_wndScheduleInfo;
	CGuiGroupBox	m_wndScheduleInfo1;
	CGuiComboBox	m_wndKhoa1;
	CGuiLabel		m_wndKhoa1label;
	CGuiLabel		m_wndCa1label;
	CGuiComboBox	m_wndCa1;
	CGuiLabel		m_wndStartDateLabel;
	CGuiDateCtrl	m_wndStartDate;
	CGuiLabel		m_wndEndDateLabel;
	CGuiTimeCtrl	m_wndStartTime;
	CGuiDateCtrl	m_wndEndDate;
	CGuiTimeCtrl	m_wndEndTime;
	CGuiLabel		m_wndCua1Label;
	CGuiComboBox	m_wndCua1;
	CGuiLabel		m_wndUser1Label;
	CGuiComboBox	m_wndUser1;
	CGuiLabel		m_wndCua2Label;
	CGuiComboBox	m_wndCua2;
	CGuiLabel		m_wndUser2Label;
	CGuiComboBox	m_wndUser2;
	CGuiLabel		m_wndCua3Label;
	CGuiComboBox	m_wndCua3;
	CGuiLabel		m_wndUser3Label;
	CGuiComboBox	m_wndUser3;
	CGuiLabel		m_wndCua4Label;
	CGuiComboBox	m_wndCua4;
	CGuiLabel		m_wndUser4Label;
	CGuiComboBox	m_wndUser4;
	CGuiLabel		m_wndKhoa2label;
	CGuiComboBox	m_wndKhoa2;
	CGuiLabel		m_wndCa2label;
	CGuiComboBox	m_wndCa2;
	CGuiLabel		m_wndStartDate1Label;
	CGuiDateCtrl	m_wndStartDate1;
	CGuiLabel		m_wndEndDate1Label;
	CGuiTimeCtrl	m_wndStartTime1;
	CGuiDateCtrl	m_wndEndDate1;
	CGuiTimeCtrl	m_wndEndTime1;
	CGuiLabel		m_wndCua5Label;
	CGuiComboBox	m_wndCua5;
	CGuiLabel		m_wndUser5Label;
	CGuiComboBox	m_wndUser5;
	CGuiLabel		m_wndCua6Label;
	CGuiComboBox	m_wndCua6;
	CGuiLabel		m_wndUser6Label;
	CGuiComboBox	m_wndUser6;
	CGuiLabel		m_wndCua7Label;
	CGuiComboBox	m_wndCua7;
	CGuiLabel		m_wndUser7Label;
	CGuiComboBox	m_wndUser7;
	CGuiLabel		m_wndCua8Label;
	CGuiComboBox	m_wndCua8;
	CGuiLabel		m_wndUser8Label;
	CGuiComboBox	m_wndUser8;
	CGuiCheckBox	m_wndLockSchedule;
	CGuiButton		m_wndUpdate;
	CGuiButton		m_wndClose;
	CString	m_szKhoa1Key;
	CString	m_szCa1Key;
	CString	m_szStartDate;
	CString	m_szStartTime;
	CString	m_szEndDate;
	CString	m_szEndTime;
	CString	m_szCua1Key;
	CString	m_szUser1Key;
	CString	m_szCua2Key;
	CString	m_szUser2Key;
	CString	m_szCua3Key;
	CString	m_szUser3Key;
	CString	m_szCua4Key;
	CString	m_szUser4Key;
	CString	m_szKhoa2Key;
	CString	m_szCa2Key;
	CString	m_szStartDate1;
	CString	m_szStartTime1;
	CString	m_szEndDate1;
	CString	m_szEndTime1;
	CString	m_szCua5Key;
	CString	m_szUser5Key;
	CString	m_szCua6Key;
	CString	m_szUser6Key;
	CString	m_szCua7Key;
	CString	m_szUser7Key;
	CString	m_szCua8Key;
	CString	m_szUser8Key;
	BOOL	m_bLockSchedule;
	void			OnKhoa1SelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnKhoa1Selendok(); 
	//void			OnKhoa1Setfocus(); 
	//void			OnKhoa1Killfocus(); 
	long			OnKhoa1LoadData(); 
	//void			OnKhoa1AddNew(); 
	void			OnCa1SelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnCa1Selendok(); 
	//void			OnCa1Setfocus(); 
	//void			OnCa1Killfocus(); 
	long			OnCa1LoadData(); 
	//void			OnCa1AddNew(); 
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
	void			OnCua1SelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnCua1Selendok(); 
	//void			OnCua1Setfocus(); 
	//void			OnCua1Killfocus(); 
	long			OnCua1LoadData(); 
	//void			OnCua1AddNew(); 
	void			OnUser1SelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnUser1Selendok(); 
	//void			OnUser1Setfocus(); 
	//void			OnUser1Killfocus(); 
	long			OnUser1LoadData(); 
	//void			OnUser1AddNew(); 
	void			OnCua2SelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnCua2Selendok(); 
	//void			OnCua2Setfocus(); 
	//void			OnCua2Killfocus(); 
	long			OnCua2LoadData(); 
	//void			OnCua2AddNew(); 
	void			OnUser2SelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnUser2Selendok(); 
	//void			OnUser2Setfocus(); 
	//void			OnUser2Killfocus(); 
	long			OnUser2LoadData(); 
	//void			OnUser2AddNew(); 
	void			OnCua3SelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnCua3Selendok(); 
	//void			OnCua3Setfocus(); 
	//void			OnCua3Killfocus(); 
	long			OnCua3LoadData(); 
	//void			OnCua3AddNew(); 
	void			OnUser3SelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnUser3Selendok(); 
	//void			OnUser3Setfocus(); 
	//void			OnUser3Killfocus(); 
	long			OnUser3LoadData(); 
	//void			OnUser3AddNew(); 
	void			OnCua4SelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnCua4Selendok(); 
	//void			OnCua4Setfocus(); 
	//void			OnCua4Killfocus(); 
	long			OnCua4LoadData(); 
	//void			OnCua4AddNew(); 
	void			OnUser4SelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnUser4Selendok(); 
	//void			OnUser4Setfocus(); 
	//void			OnUser4Killfocus(); 
	long			OnUser4LoadData(); 
	//void			OnUser4AddNew(); 
	void			OnKhoa2SelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnKhoa2Selendok(); 
	//void			OnKhoa2Setfocus(); 
	//void			OnKhoa2Killfocus(); 
	long			OnKhoa2LoadData(); 
	//void			OnKhoa2AddNew(); 
	void			OnCa2SelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnCa2Selendok(); 
	//void			OnCa2Setfocus(); 
	//void			OnCa2Killfocus(); 
	long			OnCa2LoadData(); 
	//void			OnCa2AddNew(); 
	//void			OnStartDate1Change(); 
	//void			OnStartDate1Setfocus(); 
	//void			OnStartDate1Killfocus(); 
	int			OnStartDate1CheckValue(); 
	//void			OnStartTime1Change(); 
	//void			OnStartTime1Setfocus(); 
	//void			OnStartTime1Killfocus(); 
	int			OnStartTime1CheckValue(); 
	//void			OnEndDate1Change(); 
	//void			OnEndDate1Setfocus(); 
	//void			OnEndDate1Killfocus(); 
	int			OnEndDate1CheckValue(); 
	//void			OnEndTime1Change(); 
	//void			OnEndTime1Setfocus(); 
	//void			OnEndTime1Killfocus(); 
	int			OnEndTime1CheckValue(); 
	void			OnCua5SelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnCua5Selendok(); 
	//void			OnCua5Setfocus(); 
	//void			OnCua5Killfocus(); 
	long			OnCua5LoadData(); 
	//void			OnCua5AddNew(); 
	void			OnUser5SelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnUser5Selendok(); 
	//void			OnUser5Setfocus(); 
	//void			OnUser5Killfocus(); 
	long			OnUser5LoadData(); 
	//void			OnUser5AddNew(); 
	void			OnCua6SelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnCua6Selendok(); 
	//void			OnCua6Setfocus(); 
	//void			OnCua6Killfocus(); 
	long			OnCua6LoadData(); 
	//void			OnCua6AddNew(); 
	void			OnUser6SelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnUser6Selendok(); 
	//void			OnUser6Setfocus(); 
	//void			OnUser6Killfocus(); 
	long			OnUser6LoadData(); 
	//void			OnUser6AddNew(); 
	void			OnCua7SelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnCua7Selendok(); 
	//void			OnCua7Setfocus(); 
	//void			OnCua7Killfocus(); 
	long			OnCua7LoadData(); 
	//void			OnCua7AddNew(); 
	void			OnUser7SelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnUser7Selendok(); 
	//void			OnUser7Setfocus(); 
	//void			OnUser7Killfocus(); 
	long			OnUser7LoadData(); 
	//void			OnUser7AddNew(); 
	void			OnCua8SelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnCua8Selendok(); 
	//void			OnCua8Setfocus(); 
	//void			OnCua8Killfocus(); 
	long			OnCua8LoadData(); 
	//void			OnCua8AddNew(); 
	void			OnUser8SelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnUser8Selendok(); 
	//void			OnUser8Setfocus(); 
	//void			OnUser8Killfocus(); 
	long			OnUser8LoadData(); 
	//void			OnUser8AddNew(); 
	void			OnLockScheduleSelect(); 
	void			OnUpdateSelect(); 
	void			OnCloseSelect(); 
	CCHMSSampleScheduleInfoDialog(CWnd *pParent);
	~CCHMSSampleScheduleInfoDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddCHMSSampleScheduleInfoDialog(); 
	int OnEditCHMSSampleScheduleInfoDialog(); 
	int OnDeleteCHMSSampleScheduleInfoDialog(); 
	int OnSaveCHMSSampleScheduleInfoDialog(); 
	int OnCancelCHMSSampleScheduleInfoDialog(); 
	int OnCHMSSampleScheduleInfoDialogListLoadData(); 
};
#endif
