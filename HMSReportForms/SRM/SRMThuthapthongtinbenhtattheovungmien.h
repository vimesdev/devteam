#ifndef SRMThuthapthongtinbenhtattheovungmien_H
#define SRMThuthapthongtinbenhtattheovungmien_H

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
class CSRMThuthapthongtinbenhtattheovungmien : public CGuiView{
protected:
public:
	CGuiGroupBox	m_wndReportCriteria;
	CGuiLabel		m_wndYearLabel;
	CGuiNumberCtrl	m_wndYear;
	CGuiLabel		m_wndPeriodReportLabel;
	CGuiComboBox	m_wndPeriodReport;
	CGuiLabel		m_wndFromDateLabel;
	CGuiDateTimeCtrl	m_wndFromDate;
	CGuiLabel		m_wndToDateLabel;
	CGuiDateTimeCtrl	m_wndToDate;
	CGuiLabel		m_wndAgeLabel;
	CGuiNumberCtrl	m_wndAge;
	CGuiNumberCtrl	m_wndAge1;
	CGuiLabel		m_wndSexLabel;
	CGuiComboBox	m_wndSex;
	CGuiLabel		m_wndSeasonLabel;
	CGuiComboBox	m_wndSeason;
	CGuiLabel		m_wndRegionLabel;
	CGuiComboBox	m_wndRegion;
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
	CGuiLabel		m_wndObjectLabel;
	CGuiComboBox	m_wndObject;
	CGuiLabel		m_wndDeptLabel;
	CGuiComboBox	m_wndDept;
	CGuiButton		m_wndPrint;
	CGuiButton		m_wndLoad;
	CGuiButton		m_wndExport;
	CGuiListCtrl	m_wndList;
	long	m_nYear;
	CString	m_szPeriodReportKey;
	CString	m_szFromDate;
	CString	m_szToDate;
	long	m_nAge;
	long	m_nAge1;
	CString	m_szSexKey;
	CString	m_szSeasonKey;
	CString	m_szRegionKey;
	CRecord *m_rs;
	CString	m_szOccupationKey;
	CString	m_szEthnicKey;
	CString	m_szProvinceKey;
	CString	m_szDistrictKey;
	CString	m_szVillKey;
	CString	m_szGroupsKey;
	CString	m_szICDKey;
	CString	m_szChapterKey;
	CString	m_szObjectKey;
	CString	m_szDeptKey;

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
	//void			OnAgeChange(); 
	//void			OnAgeSetfocus(); 
	//void			OnAgeKillfocus(); 
	int			OnAgeCheckValue(); 
	//void			OnAge1Change(); 
	//void			OnAge1Setfocus(); 
	//void			OnAge1Killfocus(); 
	int			OnAge1CheckValue();
	void			OnSexSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnSexSelendok(); 
	//void			OnSexSetfocus(); 
	//void			OnSexKillfocus(); 
	long			OnSexLoadData(); 
	//void			OnSexAddNew();
	void			OnSeasonSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnSeasonSelendok(); 
	//void			OnSeasonSetfocus(); 
	//void			OnSeasonKillfocus(); 
	long			OnSeasonLoadData(); 
	//void			OnSeasonAddNew(); 
	void			OnRegionSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnRegionSelendok(); 
	//void			OnRegionSetfocus(); 
	//void			OnRegionKillfocus(); 
	long			OnRegionLoadData(); 
	//void			OnRegionAddNew(); 
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
	void			OnLoadSelect(); 
	void			OnExportSelect(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 

	void			OnChapterSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnChapterSelendok(); 
	//void			OnChapterSetfocus(); 
	//void			OnChapterKillfocus(); 
	long			OnChapterLoadData(); 
	void			OnChapterAddNew();
	void			OnObjectSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnObjectSelendok(); 
	//void			OnObjectSetfocus(); 
	//void			OnObjectKillfocus(); 
	long			OnObjectLoadData(); 
	void			OnObjectAddNew();
	void			OnDeptSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDeptSelendok(); 
	//void			OnDeptSetfocus(); 
	//void			OnDeptKillfocus(); 
	long			OnDeptLoadData(); 
	void			OnDeptAddNew();

	CSRMThuthapthongtinbenhtattheovungmien(CWnd *pParent);
	~CSRMThuthapthongtinbenhtattheovungmien();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddSRMThuthapthongtinbenhtattheovungmien(); 
	int OnEditSRMThuthapthongtinbenhtattheovungmien(); 
	int OnDeleteSRMThuthapthongtinbenhtattheovungmien(); 
	int OnSaveSRMThuthapthongtinbenhtattheovungmien(); 
	int OnCancelSRMThuthapthongtinbenhtattheovungmien(); 
	int OnSRMThuthapthongtinbenhtattheovungmienListLoadData(); 
	CString	GetQueryString();
};
#endif
