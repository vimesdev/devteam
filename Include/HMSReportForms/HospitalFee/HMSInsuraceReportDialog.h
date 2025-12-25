#ifndef HMSINSURACEREPORTDIALOG_H
#define HMSINSURACEREPORTDIALOG_H

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
class CHMSInsuraceReportDialog : public CGuiView
{

protected:
public:
	CGuiGroupBox	m_wndReportFilter;
	CGuiLabel		m_wndYearLabel;
	CGuiNumberCtrl	m_wndYear;
	CGuiLabel		m_wndReportPeriodLabel;
	CGuiComboBox	m_wndReportPeriod;
	CGuiLabel		m_wndFromDateLabel;
	CGuiDateTimeCtrl	m_wndFromDate;
	CGuiLabel		m_wndToDateLabel;
	CGuiDateTimeCtrl	m_wndToDate;
	CGuiButton		m_wndPrint;
	CGuiButton		m_wndExport;
	CGuiCheckBox	m_wndOutPatient;
	CGuiCheckBox	m_wndInPatient;
	CGuiLabel		m_wndGroupInsuranceLabel;
	CGuiComboBox	m_wndGroupInsurance;
	CGuiCheckBox	m_wndChilaybndoiqt;
	CGuiCheckBox	m_wndKolaybndoiqt;
	long	m_nYear;
	CString	m_szReportPeriodKey;
	CString	m_szFromDate;
	CString	m_szToDate;
	BOOL	m_bOutPatient;
	BOOL	m_bInPatient;
	CString	m_szGroupInsuranceKey;
	BOOL	m_bChilaybndoiqt;
	BOOL	m_bKolaybndoiqt;
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
	void			OnPrintSelect(); 
	void			OnExportSelect(); 
	void			OnOutPatientSelect(); 
	void			OnInPatientSelect(); 
	void			OnGroupInsuranceSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnGroupInsuranceSelendok(); 
	//void			OnGroupInsuranceSetfocus(); 
	//void			OnGroupInsuranceKillfocus(); 
	long			OnGroupInsuranceLoadData(); 
	//void			OnGroupInsuranceAddNew(); 
	CHMSInsuraceReportDialog(CWnd *pParent);
	~CHMSInsuraceReportDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSInsuraceReportDialog(); 
	int OnEditHMSInsuraceReportDialog(); 
	int OnDeleteHMSInsuraceReportDialog(); 
	int OnSaveHMSInsuraceReportDialog(); 
	int OnCancelHMSInsuraceReportDialog(); 
	int OnHMSInsuraceReportDialogListLoadData(); 
	int OnExport7980();
	int OnExport20();
	void			OnChilaybndoiqtSelect(); 
	void			OnKolaybndoiqtSelect(); 
	CString GetSQLString7980();
};
#endif