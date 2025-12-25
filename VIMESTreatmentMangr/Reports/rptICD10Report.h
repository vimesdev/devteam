#ifndef RPTICD10REPORT_H
#define RPTICD10REPORT_H

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
class CrptICD10Report : public CGuiDialog{
protected:
public:
	CGuiGroupBox	m_wndReportCriteria;
	CGuiLabel		m_wndReportPeriodLabel;
	CGuiComboBox	m_wndReportPeriod;
	CGuiLabel		m_wndFromDateLabel;
	CGuiDateCtrl	m_wndFromDate;
	CGuiLabel		m_wndToDateLabel;
	CGuiDateCtrl	m_wndToDate;
	CGuiLabel		m_wndAgeLabel;
	CGuiNumberCtrl	m_wndAge;
	CGuiNumberCtrl	m_wndAge1;
	CGuiLabel		m_wndOccupationLabel;
	CGuiComboBox	m_wndOccupation;
	CGuiLabel		m_wndEthnicLabel;
	CGuiComboBox	m_wndEthnic;
	CGuiLabel		m_wndProvinceLabel;
	CGuiComboBox	m_wndProvince;
	CGuiLabel		m_wndDistrictLabel;
	CGuiComboBox	m_wndDistrict;
	CGuiLabel		m_wndVillLabel;
	CGuiComboBox	m_wndVill;
	CGuiLabel		m_wndChapterLabel;
	CGuiComboBox	m_wndChapter;
	CGuiLabel		m_wndGroupsLabel;
	CGuiComboBox	m_wndGroups;
	CGuiLabel		m_wndICDLabel;
	CGuiComboBox	m_wndICD;
	CGuiButton		m_wndPrint;
	CGuiButton		m_wndExport;
	CGuiButton		m_wndLoad;
	CString	m_szReportPeriodKey;
	CString	m_szFromDate;
	CString	m_szToDate;
	long	m_nAge;
	long	m_nAge1;
	CString	m_szOccupationKey;
	CString	m_szEthnicKey;
	CString	m_szProvinceKey;
	CString	m_szDistrictKey;
	CString	m_szVillKey;
	CString	m_szChapterKey;
	CString	m_szGroupsKey;
	CString	m_szICDKey;

	CRecord *m_rs;

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
	//void			OnAgeChange(); 
	//void			OnAgeSetfocus(); 
	//void			OnAgeKillfocus(); 
	int			OnAgeCheckValue(); 
	//void			OnAge1Change(); 
	//void			OnAge1Setfocus(); 
	//void			OnAge1Killfocus(); 
	int			OnAge1CheckValue(); 
	void			OnOccupationSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnOccupationSelendok(); 
	//void			OnOccupationSetfocus(); 
	//void			OnOccupationKillfocus(); 
	long			OnOccupationLoadData(); 
	void			OnOccupationAddNew(); 
	void			OnEthnicSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnEthnicSelendok(); 
	//void			OnEthnicSetfocus(); 
	//void			OnEthnicKillfocus(); 
	long			OnEthnicLoadData(); 
	void			OnEthnicAddNew(); 
	void			OnProvinceSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnProvinceSelendok(); 
	//void			OnProvinceSetfocus(); 
	//void			OnProvinceKillfocus(); 
	long			OnProvinceLoadData(); 
	void			OnProvinceAddNew(); 
	void			OnDistrictSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDistrictSelendok(); 
	//void			OnDistrictSetfocus(); 
	//void			OnDistrictKillfocus(); 
	long			OnDistrictLoadData(); 
	void			OnDistrictAddNew(); 
	void			OnVillSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnVillSelendok(); 
	//void			OnVillSetfocus(); 
	//void			OnVillKillfocus(); 
	long			OnVillLoadData(); 
	void			OnVillAddNew(); 
	void			OnChapterSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnChapterSelendok(); 
	//void			OnChapterSetfocus(); 
	//void			OnChapterKillfocus(); 
	long			OnChapterLoadData(); 
	void			OnChapterAddNew(); 
	void			OnGroupsSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnGroupsSelendok(); 
	//void			OnGroupsSetfocus(); 
	//void			OnGroupsKillfocus(); 
	long			OnGroupsLoadData(); 
	void			OnGroupsAddNew(); 
	void			OnICDSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnICDSelendok(); 
	//void			OnICDSetfocus(); 
	//void			OnICDKillfocus(); 
	long			OnICDLoadData(); 
	void			OnICDAddNew(); 
	void			OnPrintSelect(); 
	void			OnExportSelect(); 
	void			OnLoadSelect(); 
	CrptICD10Report(CWnd *pParent);
	~CrptICD10Report();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddrptICD10Report(); 
	int OnEditrptICD10Report(); 
	int OnDeleterptICD10Report(); 
	int OnSaverptICD10Report(); 
	int OnCancelrptICD10Report(); 
	int OnrptICD10ReportListLoadData(); 
};
#endif
