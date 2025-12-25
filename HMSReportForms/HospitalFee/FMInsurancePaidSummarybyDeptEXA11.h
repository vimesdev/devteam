#ifndef FMInsurancePaidSummaryByDeptEXA11_H
#define FMInsurancePaidSummaryByDeptEXA11_H


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
class CFMInsurancePaidSummaryByDeptEXA11 : public CGuiView
{
   protected:

	//CMap<CString, LPCTSTR, CString, LPCTSTR> m_mIndex;
	CString		m_szWhere;
	CString		m_szCashQuery;
public:
	CString		m_szCashIDS;
	CGuiGroupBox	m_wndReportCondition;
	CGuiLabel		m_wndYearLabel;
	CGuiNumberCtrl	m_wndYear;
	CGuiLabel		m_wndReportPeriodLabel;
	CGuiComboBox	m_wndReportPeriod;
	CGuiLabel		m_wndFromDateLabel;
	CGuiDateTimeCtrl	m_wndFromDate;
	CGuiDateTimeCtrl	m_wndToDate;
	CGuiLabel		m_wndToDateLabel;
	CGuiLabel		m_wndClerkLabel;
	CGuiComboBox	m_wndClerk;
	CGuiLabel		m_wndOrderByLabel;
	CGuiComboBox	m_wndOrderBy;
	CGuiLabel		m_wndDeptLabel;
	CGuiComboBox	m_wndDept;
	CGuiLabel		m_wndStatusLabel;
	CGuiComboBox	m_wndStatus;
	CGuiListCtrl	m_wndList;
	CGuiCheckBox	m_wndWithoutGeneral;
	CGuiButton		m_wndMarkAll;
	CGuiButton		m_wndUnMark;
	CGuiButton		m_wndPrint;
	CGuiButton		m_wndExport;
	CGuiRadioButton	m_wndInpatient;
	CGuiRadioButton	m_wndOutpatient;
	CGuiRadioButton	m_wndDeposit;
	CGuiRadioButton	m_wndAll;
	CGuiCheckBox	m_wndSOD;
	CGuiCheckBox	m_wndABZone;
	CGuiLabel		m_wndObjectTypeLabel;
	CGuiComboBox	m_wndObjectType;
	CGuiCheckBox	m_wndSoldierWCard;
	CGuiButton		m_wndCreateData;
	CGuiCheckBox	m_wndTCKT;
	CGuiCheckBox	m_wndDang_dieu_tri;
	CGuiCheckBox	m_wndDa_ra_vien_chua_tt;
	CGuiRadioButton	m_wndInsurance;
	CGuiRadioButton	m_wndService;
	CGuiRadioButton	m_wndPolicy;
	CGuiRadioButton	m_wndAllObject;
	long	m_nYear;
	CString	m_szReportPeriodKey;
	CString	m_szFromDate;
	CString	m_szToDate;
	CString	m_szClerkKey;
	CString	m_szOrderByKey;
	CString	m_szStatusKey;
	CString m_szDeptKey;
	BOOL	m_bWithoutGeneral;
	BOOL	m_bSOD;
	int		m_nPatientType;
	BOOL	m_bSoldierWCard;
	BOOL	m_bABZone;
	CString	m_szObjectTypeKey;
	BOOL	m_bTCKT;
	BOOL	m_bDang_dieu_tri;
	BOOL	m_bDa_ra_vien_chua_tt;
	int	m_nInsurance;
	int	m_nService;
	int	m_nPolicy;
	int	m_nAllObject;

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
	void			OnClerkSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnClerkSelendok(); 
	//void			OnClerkSetfocus(); 
	//void			OnClerkKillfocus(); 
	long			OnClerkLoadData(); 
	//void			OnClerkAddNew(); 
	void			OnOrderBySelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnOrderBySelendok(); 
	//void			OnOrderBySetfocus(); 
	//void			OnOrderByKillfocus(); 
	long			OnOrderByLoadData(); 
	//void			OnOrderByAddNew(); 
	long			OnDeptLoadData();
	void			OnStatusSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnStatusSelendok(); 
	//void			OnStatusSetfocus(); 
	//void			OnStatusKillfocus(); 
	long			OnStatusLoadData(); 
	//void			OnStatusAddNew(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int				OnListDeleteItem(); 
	void			OnWithoutGeneralSelect(); 
	void			OnSoldierWCardSelect(); 
	long			OnObjectTypeLoadData();
	void			OnObjectTypeSelendok();
	void			OnMarkAllSelect(); 
	void			OnUnMarkSelect(); 
	void			OnPrintSelect(); 
	void			OnExportSelect();
	void			OnExportDetailSelect();
	void			OnExportPatientList();
	void			OnExportPatientListEX();
	void			OnExportTotalList(int nVersion);
	void			OnExportTotalList1();
	void			OnInpatientSelect(); 
	void			OnOutpatientSelect(); 
	void			OnDepositSelect();
	void			OnSODSelect();
	void			OnAllSelect();
	void			OnABZoneSelect();
	void			OnExportBriefSelect();

	void			OnPrint1stver();
	void			OnPrint2ndver();
	void			OnTCKTSelect();
	void			OnDang_dieu_triSelect(); 
	void			OnDa_ra_vien_chua_ttSelect();
	void			OnInsuranceSelect(); 
	void			OnServiceSelect(); 
	void			OnPolicySelect();
	void			OnAllObjectSelect(); 

	CString			GetQueryString();
	CString			GetQueryString2();
	CString			GetQueryString3();
	CString			GetQueryString_check();
	CString			GetQueryString_v2();
	CString			GetQueryString_check_v2();
	CString			GetQueryString_v2_1();
	CString			GetQueryString_v2_1_docno();
	

	CFMInsurancePaidSummaryByDeptEXA11(CWnd *pWnd);
	~CFMInsurancePaidSummaryByDeptEXA11();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddFMInsuranceReceiptSummary(); 
	int OnEditFMInsuranceReceiptSummary(); 
	int OnDeleteFMInsuranceReceiptSummary(); 
	int OnSaveFMInsuranceReceiptSummary(); 
	int OnCancelFMInsuranceReceiptSummary(); 
	int OnFMInsuranceReceiptSummaryListLoadData();
	int OnListCheckAllTYC();
	int OnListCheckAllPTTYC();
	int OnListCheckAllInvoice();
	int OnListCheckAllRefund();
	void OnListSearchItem();
	int OnListCheckAllIns();
	int OnListUnCheckAllIns();
	int OnListCheckAllSolder();
	int OnListUnCheckAllSolder();
	int OnListCheckAllInsSolder();
	int OnListUnCheckAllInsSolder();
	void			OnCreateDataSelect();
	int OnDeleteDataBeforeInsert();
	CString GetQueryString_v3();
};
#endif