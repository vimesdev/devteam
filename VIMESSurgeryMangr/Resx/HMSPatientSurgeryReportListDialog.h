#ifndef HMSPATIENTSURGERYREPORTLISTDIALOG_H
#define HMSPATIENTSURGERYREPORTLISTDIALOG_H

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
class CHMSPatientSurgeryReportListDialog : public CGuiDialog{
protected:
public:
	CGuiGroupBox	m_wndReportParameters;
	CGuiLabel		m_wndReportPeriodLabel;
	CGuiComboBox	m_wndReportPeriod;
	CGuiLabel		m_wndFromDateLabel;
	CGuiDateCtrl	m_wndFromDate;
	CGuiLabel		m_wndToDateLabel;
	CGuiDateCtrl	m_wndToDate;
	CGuiLabel		m_wndObjectLabel;
	CGuiComboBox	m_wndObject;
	CGuiLabel		m_wndSurgeryCategoryLabel;
	CGuiComboBox	m_wndSurgeryCategory;
	CGuiLabel		m_wndDepartmentLabel;
	CGuiComboBox	m_wndDepartment;
	CGuiLabel		m_wndOperationTypeLabel;
	CGuiComboBox	m_wndOperationType;
	CGuiLabel		m_wndSurgeonLabel;
	CGuiComboBox	m_wndSurgeon;
	CGuiButton		m_wndLoadReport;
	CGuiButton		m_wndExport;
	CGuiButton		m_wndClose;
	CString	m_szReportPeriodKey;
	CString	m_szFromDate;
	CString	m_szToDate;
	CString	m_szObjectKey;
	CString	m_szSurgeryCategoryKey;
	CString	m_szDepartmentKey;
	CString	m_szOperationTypeKey;
	CString	m_szSurgeonKey;
	void			OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnReportPeriodSelendok(); 
	//void			OnReportPeriodSetfocus(); 
	//void			OnReportPeriodKillfocus(); 
	long			OnReportPeriodLoadData(); 
	void			OnReportPeriodAddNew(); 
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
	void			OnObjectAddNew(); 
	void			OnSurgeryCategorySelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnSurgeryCategorySelendok(); 
	//void			OnSurgeryCategorySetfocus(); 
	//void			OnSurgeryCategoryKillfocus(); 
	long			OnSurgeryCategoryLoadData(); 
	void			OnSurgeryCategoryAddNew(); 
	void			OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDepartmentSelendok(); 
	//void			OnDepartmentSetfocus(); 
	//void			OnDepartmentKillfocus(); 
	long			OnDepartmentLoadData(); 
	void			OnDepartmentAddNew(); 
	void			OnOperationTypeSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnOperationTypeSelendok(); 
	//void			OnOperationTypeSetfocus(); 
	//void			OnOperationTypeKillfocus(); 
	long			OnOperationTypeLoadData(); 
	void			OnOperationTypeAddNew(); 
	void			OnSurgeonSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnSurgeonSelendok(); 
	//void			OnSurgeonSetfocus(); 
	//void			OnSurgeonKillfocus(); 
	long			OnSurgeonLoadData(); 
	void			OnSurgeonAddNew(); 
	void			OnLoadReportSelect(); 
	void			OnExportSelect(); 
	void			OnCloseSelect(); 
	CHMSPatientSurgeryReportListDialog(CWnd *pParent);
	~CHMSPatientSurgeryReportListDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSPatientSurgeryReportListDialog(); 
	int OnEditHMSPatientSurgeryReportListDialog(); 
	int OnDeleteHMSPatientSurgeryReportListDialog(); 
	int OnSaveHMSPatientSurgeryReportListDialog(); 
	int OnCancelHMSPatientSurgeryReportListDialog(); 
	int OnHMSPatientSurgeryReportListDialogListLoadData(); 
};
#endif
