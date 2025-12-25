#ifndef RPM_DAILYSHIFT_H
#define RPM_DAILYSHIFT_H

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
class CRPM_DailyShift : public CGuiView{
protected:
public:
	typedef struct DAILYDATA
	{
		CString szDept;
		CString szDoctor;
		int nPrevious_qty;
		int nOvertime_inc;
		int nOvertime_dec;
		int nCurrent_qty;
		int Intime_opt;
		int Overtime_opt;
		int Total_opt;
		CString szNote;
	} dailydata;
	dailydata m_dailydata;
	CGuiGroupBox	m_wndReportFilterInfo;
	CGuiLabel		m_wndFromDateLabel;
	CGuiDateTimeCtrl	m_wndFromDate;
	CGuiLabel		m_wndToDateLabel;
	CGuiDateTimeCtrl	m_wndToDate;
	CGuiButton		m_wndLoad;
	CGuiButton		m_wndPrint;
	CGuiButton		m_wndExport;
	CGuiButton		m_wndUpdateData;
	CGuiButton		m_wndLock;
	CGuiListCtrl	m_wndList;
	CString	m_szFromDate;
	CString	m_szToDate;
	//void			OnFromDateChange(); 
	//void			OnFromDateSetfocus(); 
	//void			OnFromDateKillfocus(); 
	int			OnFromDateCheckValue(); 
	//void			OnToDateChange(); 
	//void			OnToDateSetfocus(); 
	//void			OnToDateKillfocus(); 
	int			OnToDateCheckValue(); 
	void			OnLoadSelect(); 
	void			OnPrintSelect(); 
	void			OnExportSelect(); 
	void			OnUpdateDataSelect();
	void			OnLockSelect();
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	CRPM_DailyShift();
	~CRPM_DailyShift();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddRPM_DailyShift(); 
	int OnEditRPM_DailyShift(); 
	int OnDeleteRPM_DailyShift(); 
	int OnSaveRPM_DailyShift(); 
	int OnCancelRPM_DailyShift(); 
	int OnUpdateDataRPM_DailyShift();
	int OnRPM_DailyShiftListLoadData(); 
	CString GetQueryString();
	void FillStructData(int nIndex);
	BOOL IsDataLocked();
	long OnDutyDoctorLoadDta();
	void OnDutyDoctorSelendok();
	int OnIntimeOptCheckValue();
	int OnOvertimeOptCheckValue();
	int OnTotalOptCheckValue();
};
#endif
