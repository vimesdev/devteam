#ifndef HESETTINGEXAMSCHEDULE_H
#define HESETTINGEXAMSCHEDULE_H

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
class CHESettingExamSchedule : public CGuiDialog{
protected:
public:
	CGuiLabel		m_wndDepartMentLabel;
	CGuiComboBox	m_wndDepartMent;
	CGuiListCtrl	m_wndList;
	CGuiLabel		m_wndNumberAppointMentLabel;
	CGuiNumberCtrl	m_wndNumberAppoint;
	CGuiLabel		m_wndRoomNameLabel;
	CGuiTextCtrl	m_wndRoomName;
	CGuiCheckBox	m_wndMorning;
	CGuiCheckBox	m_wndAfternoon;
	CGuiLabel		m_wndFromTimeLabel;
	CGuiTimeCtrl	m_wndFTime;
	CGuiLabel		m_wndToTimeLabel;
	CGuiTimeCtrl	m_wndToTime;
	CGuiLabel		m_wndFromTime1Label;
	CGuiTimeCtrl	m_wndFTime1;
	CGuiLabel		m_wndToTime1Label;
	CGuiTimeCtrl	m_wndToTime1;
	CGuiButton		m_wndUpdate;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndClose;
	CGuiLabel		m_wndTurnOfTimeLabel;
	CGuiNumberCtrl	m_wndTimes;
	CGuiLabel		m_wndTurnOfTime1Label;
	CGuiNumberCtrl	m_wndTimes2;
	CString	m_szDepartMentKey;
	long	m_nNumberAppoint;
	int m_nRoomID;
	CString	m_szRoomName;
	BOOL	m_bMorning;
	BOOL	m_bAfternoon;
	CString	m_szFTime;
	CString	m_szToTime;
	CString	m_szFTime1;
	CString	m_szToTime1;
	long	m_nTimes;
	long	m_nTimes2;
	void			OnDepartMentSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDepartMentSelendok(); 
	//void			OnDepartMentSetfocus(); 
	//void			OnDepartMentKillfocus(); 
	long			OnDepartMentLoadData(); 
	//void			OnDepartMentAddNew(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	//void			OnNumberAppointChange(); 
	//void			OnNumberAppointSetfocus(); 
	//void			OnNumberAppointKillfocus(); 
	int			OnNumberAppointCheckValue(); 
	//void			OnRoomNameChange(); 
	//void			OnRoomNameSetfocus(); 
	//void			OnRoomNameKillfocus(); 
	int			OnRoomNameCheckValue(); 
	void			OnMorningSelect(); 
	void			OnAfternoonSelect(); 
	//void			OnFTimeChange(); 
	//void			OnFTimeSetfocus(); 
	//void			OnFTimeKillfocus(); 
	int			OnFTimeCheckValue(); 
	//void			OnToTimeChange(); 
	//void			OnToTimeSetfocus(); 
	//void			OnToTimeKillfocus(); 
	int			OnToTimeCheckValue(); 
	//void			OnFTime1Change(); 
	//void			OnFTime1Setfocus(); 
	//void			OnFTime1Killfocus(); 
	int			OnFTime1CheckValue(); 
	//void			OnToTime1Change(); 
	//void			OnToTime1Setfocus(); 
	//void			OnToTime1Killfocus(); 
	int			OnToTime1CheckValue(); 
	void			OnUpdateSelect(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	void			OnCloseSelect(); 
	//void			OnTimesChange(); 
	//void			OnTimesSetfocus(); 
	//void			OnTimesKillfocus(); 
	int			OnTimesCheckValue(); 
	//void			OnTimes2Change(); 
	//void			OnTimes2Setfocus(); 
	//void			OnTimes2Killfocus(); 
	int			OnTimes2CheckValue(); 
	CHESettingExamSchedule(CWnd *pParent);
	~CHESettingExamSchedule();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHESettingExamSchedule(); 
	int OnEditHESettingExamSchedule(); 
	int OnDeleteHESettingExamSchedule(); 
	int OnSaveHESettingExamSchedule(); 
	int OnCancelHESettingExamSchedule(); 
	int OnHESettingExamScheduleListLoadData(); 
};
#endif
