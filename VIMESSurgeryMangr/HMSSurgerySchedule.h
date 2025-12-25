#ifndef HMSSURGERYSCHEDULE_H
#define HMSSURGERYSCHEDULE_H

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
#include "GuiView.h"
#include "DbField.h"
#include "WMDateCtrl.h"
#include "PPTooltip.h"

class CHMSSurgerySchedule : public CGuiView{
protected:
public:
	CGuiGroupBox	m_wndTodayScheduleInfo;
	CGuiGroupBox	m_wndSurgeryScheduleInfo;
	CGuiGroupBox	m_wndViewInfor;
	CGuiListCtrlEx	m_wndTodayScheduleList;
	CGuiListCtrl	m_wndScheduleList;
	CGuiLabel		m_wndDay;
	CGuiDateCtrl	m_wndCurrentDay;
	CGuiButton		m_wndLoad;
	CGuiButton		m_wndPrint;
	CGuiRadioButton	m_wndWeekView;
	CGuiRadioButton	m_wndMonthView;
	CString	m_szCurrentDay;
	int	m_nWeekView;
	int	m_nMonthView;

	CImageList	m_ImgList;
	CWMDateCtrl m_wndCalendar;
	CPPToolTip	m_ToolTip;
	long m_nOrderID;

	long			OnTodayScheduleListLoadData(); 
	void			OnTodayScheduleListSelectChange(int nOldItem, int nNewItem); 
	void			OnTodayScheduleListDblClick(); 
	int			OnTodayScheduleListDeleteItem(); 
	long			OnScheduleListLoadData(); 
	void			OnScheduleListSelectChange(int nOldItem, int nNewItem); 
	void			OnScheduleListDblClick(); 
	int			OnScheduleListDeleteItem(); 
	//void			OnCurrentDayChange(); 
	//void			OnCurrentDaySetfocus(); 
	//void			OnCurrentDayKillfocus(); 
	int			OnCurrentDayCheckValue(); 
	void			OnLoadSelect(); 
	void			OnWeekViewSelect(); 
	void			OnMonthViewSelect(); 
	CHMSSurgerySchedule();
	~CHMSSurgerySchedule();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSSurgerySchedule(); 
	int OnEditHMSSurgerySchedule(); 
	int OnDeleteHMSSurgerySchedule(); 
	int OnSaveHMSSurgerySchedule(); 
	int OnCancelHMSSurgerySchedule(); 
	int OnHMSSurgeryScheduleListLoadData();
	CString GetColumnName(CGuiListCtrlEx *list, int nCol);
	CString OnGetInfoTip(int nDescCol1 = -1, int nDescCol2 = -1, int nDescCol3 = -1);
	virtual BOOL PreTranslateMessage(MSG *pMsg);
	void OnLoadData();
	void OnPrintSelect();
	void OnDeleteItem();
	CString GetSubject(long nIdx);
	int OnReloadTodayList();
	void PrintDutySchedule();
	void PrintDutySchedule_GB();

	afx_msg void OnCellClick(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnCellDblClick(NMHDR *pNotifyStruct, LRESULT* pResult);
	//afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void NotifyDisplayTooltip(NMHDR * pNMHDR, LRESULT * result);

	DECLARE_MESSAGE_MAP()
};
#endif
