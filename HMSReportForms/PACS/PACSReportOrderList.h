#ifndef PACSREPORTORDERLIST_H
#define PACSREPORTORDERLIST_H

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
class CPACSReportOrderList : public CGuiView{
protected:
public:
	CGuiGroupBox	m_wndOrderBy;
	CGuiLabel		m_wndFromDateLabel;
	CGuiDateTimeCtrl	m_wndFromDate;
	CGuiLabel		m_wndToDateLabel;
	CGuiDateTimeCtrl	m_wndToDate;
	CGuiLabel		m_wndObjectLabel;
	CGuiComboBox	m_wndObject;
	CGuiGroupBox	m_wndFilterCondition;
	CGuiLabel		m_wndOrderDepartmentLabel;
	CGuiComboBox	m_wndOrderDepartment;
	CGuiLabel		m_wndOrderRoomLabel;
	CGuiComboBox	m_wndOrderRoom;
	CGuiLabel		m_wndOrderDoctorLabel;
	CGuiComboBox	m_wndOrderDoctor;
	CGuiLabel		m_wndPACSTypeLabel;
	CGuiComboBox	m_wndPACSType;
	CGuiLabel		m_wndOrderDateLabel;
	CGuiDateCtrl	m_wndOrderDate;
	CGuiLabel		m_wndMachineLabel;
	CGuiComboBox	m_wndMachine;
	CGuiLabel		m_wndMachineDateLabel;
	CGuiDateCtrl	m_wndMachineDate;
	CGuiLabel		m_wndResultDateLabel;
	CGuiDateCtrl	m_wndResultDate;
	CGuiLabel		m_wndResultDoctorLabel;
	CGuiComboBox	m_wndResultDoctor;
	CGuiLabel		m_wndIsTodayLabel;
	CGuiComboBox	m_wndIsToday;
	CGuiLabel		m_wndAppointmentDateLabel;
	CGuiDateCtrl	m_wndAppointmentDate;
	CGuiLabel		m_wndColumnNameLabel;
	CGuiComboBox	m_wndColumnName;
	CGuiButton		m_wndExport;
	CString	m_szFromDate;
	CString	m_szToDate;
	CString	m_szObjectKey;
	CString	m_szOrderDepartmentKey;
	CString	m_szOrderRoomKey;
	CString	m_szOrderDoctorKey;
	CString	m_szPACSTypeKey;
	CString	m_szOrderDate;
	CString	m_szMachineKey;
	CString	m_szMachineDate;
	CString	m_szResultDate;
	CString	m_szResultDoctorKey;
	CString	m_szIsTodayKey;
	CString	m_szAppointmentDate;
	CString	m_szColumnNameKey;
	//void			OnFromDateChange(); 
	//void			OnFromDateSetfocus(); 
	//void			OnFromDateKillfocus(); 
	int			OnFromDateCheckValue(); 
	//void			OnToDateChange(); 
	//void			OnToDateSetfocus(); 
	//void			OnToDateKillfocus(); 
	int			OnToDateCheckValue(); 
	void			OnObjectSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnObjectSelendok(); 
	//void			OnObjectSetfocus(); 
	//void			OnObjectKillfocus(); 
	long			OnObjectLoadData(); 
	//void			OnObjectAddNew(); 
	void			OnOrderDepartmentSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnOrderDepartmentSelendok(); 
	//void			OnOrderDepartmentSetfocus(); 
	//void			OnOrderDepartmentKillfocus(); 
	long			OnOrderDepartmentLoadData(); 
	//void			OnOrderDepartmentAddNew(); 
	void			OnOrderRoomSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnOrderRoomSelendok(); 
	//void			OnOrderRoomSetfocus(); 
	//void			OnOrderRoomKillfocus(); 
	long			OnOrderRoomLoadData(); 
	//void			OnOrderRoomAddNew(); 
	void			OnOrderDoctorSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnOrderDoctorSelendok(); 
	//void			OnOrderDoctorSetfocus(); 
	//void			OnOrderDoctorKillfocus(); 
	long			OnOrderDoctorLoadData(); 
	//void			OnOrderDoctorAddNew(); 
	void			OnPACSTypeSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnPACSTypeSelendok(); 
	//void			OnPACSTypeSetfocus(); 
	//void			OnPACSTypeKillfocus(); 
	long			OnPACSTypeLoadData(); 
	//void			OnPACSTypeAddNew(); 
	//void			OnOrderDateChange(); 
	//void			OnOrderDateSetfocus(); 
	//void			OnOrderDateKillfocus(); 
	int			OnOrderDateCheckValue(); 
	void			OnMachineSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnMachineSelendok(); 
	//void			OnMachineSetfocus(); 
	//void			OnMachineKillfocus(); 
	long			OnMachineLoadData(); 
	//void			OnMachineAddNew(); 
	//void			OnMachineDateChange(); 
	//void			OnMachineDateSetfocus(); 
	//void			OnMachineDateKillfocus(); 
	int			OnMachineDateCheckValue(); 
	//void			OnResultDateChange(); 
	//void			OnResultDateSetfocus(); 
	//void			OnResultDateKillfocus(); 
	int			OnResultDateCheckValue(); 
	void			OnResultDoctorSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnResultDoctorSelendok(); 
	//void			OnResultDoctorSetfocus(); 
	//void			OnResultDoctorKillfocus(); 
	long			OnResultDoctorLoadData(); 
	//void			OnResultDoctorAddNew(); 
	void			OnIsTodaySelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnIsTodaySelendok(); 
	//void			OnIsTodaySetfocus(); 
	//void			OnIsTodayKillfocus(); 
	long			OnIsTodayLoadData(); 
	//void			OnIsTodayAddNew(); 
	//void			OnAppointmentDateChange(); 
	//void			OnAppointmentDateSetfocus(); 
	//void			OnAppointmentDateKillfocus(); 
	int			OnAppointmentDateCheckValue(); 
	void			OnColumnNameSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnColumnNameSelendok(); 
	//void			OnColumnNameSetfocus(); 
	//void			OnColumnNameKillfocus(); 
	long			OnColumnNameLoadData(); 
	//void			OnColumnNameAddNew(); 
	void			OnExportSelect(); 
	CPACSReportOrderList();
	~CPACSReportOrderList();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddPACSReportOrderList(); 
	int OnEditPACSReportOrderList(); 
	int OnDeletePACSReportOrderList(); 
	int OnSavePACSReportOrderList(); 
	int OnCancelPACSReportOrderList(); 
	int OnPACSReportOrderListListLoadData(); 

	CString	GetQueryString();
};
#endif
