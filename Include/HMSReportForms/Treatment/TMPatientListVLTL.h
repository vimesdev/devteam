#ifndef TMPATIENTLISTVLTL_H
#define TMPATIENTLISTVLTL_H

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
class AFX_EXT_CLASS CTMPatientListVLTL : public CGuiView{
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
	CGuiLabel		m_wndObjectLabel;
	CGuiComboBox	m_wndObject;
	CGuiLabel		m_wndBookLabel;
	CGuiComboBox	m_wndBook;
	CGuiLabel		m_wndGroupDiseaseLabel;
	CGuiComboBox	m_wndGroupDisease;
	CGuiLabel		m_wndDepartmentLabel;
	CGuiComboBox	m_wndDepartment;
	CGuiLabel		m_wndMethodLabel;
	CGuiComboBox	m_wndMethod;
	CGuiButton		m_wndPreview;
	CGuiButton		m_wndExport;
	CGuiRadioButton	m_wndAll;
	CGuiRadioButton	m_wndInPatient;
	CGuiRadioButton	m_wndOutPatient;
	CGuiCheckBox	m_wndluotkham;
	long	m_nYear;
	CString	m_szPeriodReportKey;
	CString	m_szFromDate;
	CString	m_szToDate;
	CString	m_szObjectKey;
	CString	m_szBookKey;
	CString	m_szGroupDiseaseKey;
	CString	m_szDepartmentKey;
	CString	m_szMethodKey;
	int	m_nAll;
	int	m_nInPatient;
	int	m_nOutPatient;
	BOOL	m_bluotkham;
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
	void			OnObjectSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnObjectSelendok(); 
	//void			OnObjectSetfocus(); 
	//void			OnObjectKillfocus(); 
	long			OnObjectLoadData(); 
	//void			OnObjectAddNew(); 
	void			OnBookSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnBookSelendok(); 
	//void			OnBookSetfocus(); 
	//void			OnBookKillfocus(); 
	long			OnBookLoadData(); 
	//void			OnBookAddNew(); 
	void			OnGroupDiseaseSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnGroupDiseaseSelendok(); 
	//void			OnGroupDiseaseSetfocus(); 
	//void			OnGroupDiseaseKillfocus(); 
	long			OnGroupDiseaseLoadData(); 
	//void			OnGroupDiseaseAddNew(); 
	void			OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDepartmentSelendok(); 
	//void			OnDepartmentSetfocus(); 
	//void			OnDepartmentKillfocus(); 
	long			OnDepartmentLoadData(); 
	//void			OnDepartmentAddNew();
	void			OnMethodSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnMethodSelendok(); 
	//void			OnMethodSetfocus(); 
	//void			OnMethodKillfocus(); 
	long			OnMethodLoadData(); 
	//void			OnMethodAddNew(); 
	void			OnPreviewSelect();
	void			PrintFormat1();
	void			PrintFormat2();
	void			PrintFormat3();
	void			OnExportSelect();
	void			ExportFormat1();
	void			ExportFormat2();
	void			ExportFormat3();
	void			OnAllSelect(); 
	void			OnInPatientSelect(); 
	void			OnOutPatientSelect(); 
	void			OnluotkhamSelect(); 
	CTMPatientListVLTL(CWnd* pParent);
	~CTMPatientListVLTL();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddTMPatientListVLTL(); 
	int OnEditTMPatientListVLTL(); 
	int OnDeleteTMPatientListVLTL(); 
	int OnSaveTMPatientListVLTL(); 
	int OnCancelTMPatientListVLTL(); 
	int OnTMPatientListVLTLListLoadData();
	CString GetQueryString();
	CString GetQueryString1();
	CString GetQueryString2();
	CString GetQueryString3();
	CString GetQueryString4();
};
#endif
