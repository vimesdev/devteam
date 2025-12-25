#ifndef EMTHUTHUATTYC_H
#define EMTHUTHUATTYC_H

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
#include "Excel.h"

class EMThuthuattyc : public CGuiView
{

protected:
public:
	CGuiLabel		m_wndYearLabel;
	CGuiNumberCtrl	m_wndYear;
	CGuiLabel		m_wndReportPeriodLabel;
	CGuiComboBox	m_wndReportPeriod;
	CGuiLabel		m_wndFromDateLabel;
	CGuiGroupBox	m_wndReportCondition;
	CGuiDateTimeCtrl	m_wndFromDate;
	CGuiLabel		m_wndToDateLabel;
	CGuiDateTimeCtrl	m_wndToDate;
	CGuiListCtrl	m_wndList;
	CGuiButton		m_wndPrintPreview;
	CGuiButton		m_wndExport;
	CGuiLabel		m_wndZoneLabel;
	CGuiComboBox	m_wndZone;
	CGuiLabel		m_wndGroupLabel;
	CGuiComboBox	m_wndGroup;
	CString	m_szZoneKey;
	CString	m_szGroupKey;
	long	m_nYear;
	CString	m_szReportPeriodKey;
	CString	m_szFromDate;
	CString	m_szToDate;
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
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	void			OnPrintPreviewSelect(); 
	void			OnExportSelect();
	long			OnZoneLoadData();
	void			OnZoneSelendok();
	long			OnGroupLoadData();
	int			OnCheckAll();
	int			OnUnCheckAll();
	EMThuthuattyc();
	~EMThuthuattyc();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddEMThuthuattyc(); 
	int OnEditEMThuthuattyc(); 
	int OnDeleteEMThuthuattyc(); 
	int OnSaveEMThuthuattyc(); 
	int OnCancelEMThuthuattyc(); 
	int OnEMThuthuattycListLoadData(); 
	int Export(CExcel* pXcel, CString szFileName, JSONVALUE jFormat, CString szQuery, int nFirst_row = 0);
	void ExportDynamicColumn(CExcel* pXcel, int nCol, int nRow, CString szQuery);
	void ExportGroupLine(CExcel *pXcel, int& nRow, CString szField_group, CString& szPrev_group, JSONVALUE& jTotal, CRecord *pRs);
	CString GetQueryString();
	long LoadList(CWnd* pWnd, CString szFilter=_T(""));
	CString GetCheckList(CWnd* pWnd);
};
#endif