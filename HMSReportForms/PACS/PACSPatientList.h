#ifndef PACSPATIENTLIST_H
#define PACSPATIENTLIST_H

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
class CPACSPatientList : public CGuiView{
protected:
public:
	CGuiGroupBox	m_wndReportCondition;
	CGuiLabel		m_wndYearLabel;
	CGuiNumberCtrl	m_wndYear;
	CGuiLabel		m_wndReportPeriodLabel;
	CGuiComboBox	m_wndReportPeriod;
	CGuiLabel		m_wndFromDateLabel;
	CGuiDateTimeCtrl	m_wndFromDate;
	CGuiLabel		m_wndToDateLabel;
	CGuiDateTimeCtrl	m_wndToDate;
	CGuiLabel		m_wndGroupLabel;
	CGuiComboBox	m_wndGroup;
	CGuiLabel		m_wndGroupPTTTLabel;
	CGuiComboBox	m_wndGroupPTTT;
	CGuiRadioButton	m_wndPerformDate;
	CGuiRadioButton	m_wndOrderDate;
	CGuiCheckBox	m_wndPerformed;
	CGuiButton		m_wndExport;
	CGuiButton		m_wndInsuranceExport;
	long	m_nYear;
	CString	m_szReportPeriodKey;
	CString	m_szFromDate;
	CString	m_szToDate;
	CString	m_szGroupKey;
	CString	m_szGroupPTTTKey;
	int	m_nPerformDate;
	int	m_nOrderDate;
	BOOL	m_bPerformed;
	//void			OnYearChange(); 
	//void			OnYearSetfocus(); 
	//void			OnYearKillfocus(); 
	int			OnYearCheckValue(); 
	void			OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnReportPeriodSelendok(); 
	//void			OnReportPeriodSetfocus(); 
	//void			OnReportPeriodKillfocus(); 
	long			OnReportPeriodLoadData(); 
	//void			OnReportPeriodAddNew(); 
	//void			OnFromDateChange(); 
	//void			OnFromDateSetfocus(); 
	//void			OnFromDateKillfocus(); 
	int			OnFromDateCheckValue(); 
	//void			OnToDateChange(); 
	//void			OnToDateSetfocus(); 
	//void			OnToDateKillfocus(); 
	int			OnToDateCheckValue(); 
	void			OnGroupSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnGroupSelendok(); 
	//void			OnGroupSetfocus(); 
	//void			OnGroupKillfocus(); 
	long			OnGroupLoadData(); 
	//void			OnGroupAddNew(); 
	void			OnGroupPTTTSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnGroupPTTTSelendok(); 
	//void			OnGroupPTTTSetfocus(); 
	//void			OnGroupPTTTKillfocus(); 
	long			OnGroupPTTTLoadData(); 
	//void			OnGroupPTTTAddNew(); 
	void			OnPerformDateSelect(); 
	void			OnOrderDateSelect(); 
	void			OnPerformedSelect(); 
	void			OnExportSelect(); 
	void			OnExportXQuang();
	void			OnExportSAm();
	void			OnExportCT();
	void			OnExportMRI();
	void			OnExportCLVT128();
	void			OnExportMoBenhHoc();
	void			OnExportTeBaoHoc();
	void			OnInsuranceExportSelect();
	void			OnExport(CString szFileName, CString szNameBook);
	CPACSPatientList(CWnd *pParent);
	~CPACSPatientList();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddPACSPatientList(); 
	int OnEditPACSPatientList(); 
	int OnDeletePACSPatientList(); 
	int OnSavePACSPatientList(); 
	int OnCancelPACSPatientList(); 
	int OnPACSPatientListListLoadData(); 
	CString GetQueryString();
	CString GetQueryString_ins();
};
#endif
