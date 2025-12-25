#ifndef SYS_TASKMANAGERREPORT_H
#define SYS_TASKMANAGERREPORT_H

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
class CSYS_TaskManagerReport : public CGuiView{
protected:
public:
	CGuiGroupBox	m_wndReportCondition;
	CGuiLabel		m_wndYearLabel;
	CGuiNumberCtrl	m_wndYear;
	CGuiLabel		m_wndPeriodReportLabel;
	CGuiComboBox	m_wndPeriodReport;
	CGuiLabel		m_wndFromDateLabel;
	CGuiDateTimeCtrl	m_wndFromDate;
	CGuiLabel		m_wndToDateLabel;
	CGuiDateTimeCtrl	m_wndToDate;
	CGuiLabel		m_wndModuleLabel;
	CGuiComboBox	m_wndModule;
	CGuiLabel		m_wndClientLabel;
	CGuiComboBox	m_wndClient;
	CGuiLabel		m_wndTypeLabel;
	CGuiComboBox	m_wndType;
	CGuiLabel		m_wndStatusLabel;
	CGuiComboBox	m_wndStatus;
	CGuiLabel		m_wndPriorityLabel;
	CGuiComboBox	m_wndPriority;
	CGuiLabel		m_wndRequestLabel;
	CGuiComboBox	m_wndRequest;
	CGuiLabel		m_wndAssignLabel;
	CGuiComboBox	m_wndAssign;
	CGuiButton		m_wndExport;
	long	m_nYear;
	CString	m_szPeriodReportKey;
	CString	m_szFromDate;
	CString	m_szToDate;
	CString	m_szModuleKey;
	CString	m_szClientKey;
	CString	m_szTypeKey;
	CString	m_szStatusKey;
	CString	m_szPriorityKey;
	CString	m_szRequestKey;
	CString	m_szAssignKey;
	//void			OnYearChange(); 
	//void			OnYearSetfocus(); 
	//void			OnYearKillfocus(); 
	int			OnYearCheckValue(); 
	void			OnPeriodReportSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnPeriodReportSelendok(); 
	//void			OnPeriodReportSetfocus(); 
	//void			OnPeriodReportKillfocus(); 
	long			OnPeriodReportLoadData(); 
	//void			OnPeriodReportAddNew(); 
	//void			OnFromDateChange(); 
	//void			OnFromDateSetfocus(); 
	//void			OnFromDateKillfocus(); 
	int			OnFromDateCheckValue(); 
	//void			OnToDateChange(); 
	//void			OnToDateSetfocus(); 
	//void			OnToDateKillfocus(); 
	int			OnToDateCheckValue(); 
	void			OnModuleSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnModuleSelendok(); 
	//void			OnModuleSetfocus(); 
	//void			OnModuleKillfocus(); 
	long			OnModuleLoadData(); 
	//void			OnModuleAddNew(); 
	void			OnClientSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnClientSelendok(); 
	//void			OnClientSetfocus(); 
	//void			OnClientKillfocus(); 
	long			OnClientLoadData(); 
	//void			OnClientAddNew(); 
	void			OnTypeSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnTypeSelendok(); 
	//void			OnTypeSetfocus(); 
	//void			OnTypeKillfocus(); 
	long			OnTypeLoadData(); 
	//void			OnTypeAddNew(); 
	void			OnStatusSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnStatusSelendok(); 
	//void			OnStatusSetfocus(); 
	//void			OnStatusKillfocus(); 
	long			OnStatusLoadData(); 
	//void			OnStatusAddNew(); 
	void			OnPrioritySelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnPrioritySelendok(); 
	//void			OnPrioritySetfocus(); 
	//void			OnPriorityKillfocus(); 
	long			OnPriorityLoadData(); 
	//void			OnPriorityAddNew(); 
	void			OnRequestSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnRequestSelendok(); 
	//void			OnRequestSetfocus(); 
	//void			OnRequestKillfocus(); 
	long			OnRequestLoadData(); 
	//void			OnRequestAddNew(); 
	void			OnAssignSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnAssignSelendok(); 
	//void			OnAssignSetfocus(); 
	//void			OnAssignKillfocus(); 
	long			OnAssignLoadData(); 
	//void			OnAssignAddNew(); 
	void			OnExportSelect(); 
	CSYS_TaskManagerReport(CWnd *pParent);
	~CSYS_TaskManagerReport();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddSYS_TaskManagerReport(); 
	int OnEditSYS_TaskManagerReport(); 
	int OnDeleteSYS_TaskManagerReport(); 
	int OnSaveSYS_TaskManagerReport(); 
	int OnCancelSYS_TaskManagerReport(); 
	int OnSYS_TaskManagerReportListLoadData();
	CString GetQueryString();
};
#endif
