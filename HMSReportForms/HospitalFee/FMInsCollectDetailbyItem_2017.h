#ifndef FMINSCollectDetailbyItem_2017H
#define FMINSCollectDetailbyItem_2017H

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
class CFMInsCollectDetailByItem_2017 : public CGuiView
{

protected:
	CMap<CString, LPCTSTR, CString, LPCTSTR> m_mIndex;
	CMap<CString, LPCTSTR, CString, LPCTSTR> m_mOrderBy;
	CString		m_szWhere;
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
	CGuiLabel		m_wndObjectTypeLabel;
	CGuiComboBox	m_wndObjectType;
	CGuiLabel		m_wndDeptLabel;
	CGuiComboBox	m_wndDept;
	CGuiLabel		m_wndStatusLabel;
	CGuiComboBox	m_wndStatus;
	CGuiListCtrl	m_wndList;
	CGuiCheckBox	m_wndWithoutGeneral;
	CGuiCheckBox	m_wndHitechMachine;
	CGuiCheckBox	m_wndServiceOnDemand;
	CGuiCheckBox	m_wndSurgery;
	CGuiCheckBox	m_wndOperation;
	CGuiCheckBox	m_wndLaser;
	CGuiCheckBox	m_wndNotLaser;
	CGuiCheckBox	m_wndOtherDeptFilter;
	CGuiCheckBox	m_wndNotinSOD;
	CGuiCheckBox	m_wndGayMeB5;
	CGuiCheckBox	m_wndGayMePTTYC;

	CGuiCheckBox	m_wndGioiThieuKXD;
	CGuiCheckBox	m_wndGioiThieuPTTYC;
	CGuiCheckBox	m_wndGioiThieuKhac;

	CGuiButton		m_wndMarkAll;
	CGuiButton		m_wndUnMark;
	CGuiButton		m_wndPrint;
	CGuiButton		m_wndExport;
	CGuiRadioButton	m_wndInpatient;
	CGuiRadioButton	m_wndOutpatient;
	CGuiRadioButton	m_wndDeposit;
	CGuiRadioButton	m_wndAll;
	CGuiCheckBox    m_wndChuaTT;
	CGuiCheckBox	m_wndSolderObject;
	CGuiCheckBox	m_wndGoiDV;
	CGuiCheckBox	m_wndABZone;
	CGuiButton		m_wndCreateData;
	long	m_nYear;
	CString	m_szReportPeriodKey;
	CString	m_szFromDate;
	CString	m_szToDate;
	CString	m_szClerkKey;
	CString	m_szOrderByKey;
	CString	m_szObjectTypeKey;
	CString	m_szStatusKey;
	CString m_szDeptKey;
	BOOL	m_bWithoutGeneral;
	BOOL	m_bHitechMachine;
	BOOL	m_bServiceOnDemand;
	BOOL	m_bSurgery;
	BOOL	m_bOperation;
	BOOL	m_bLaser;
	BOOL	m_bNotLaser;
	BOOL	m_bChuaTT;
	BOOL	m_bOtherDeptFilter;
	BOOL	m_bNotinSOD;
	BOOL	m_bABZone;

	BOOL	m_bGayMeB5;
	BOOL	m_bGayMePTTYC;

	BOOL	m_bGioiThieuKXD;
	BOOL	m_bGioiThieuPTTYC;
	BOOL	m_bGioiThieuKhac;
	BOOL	m_bSolderObject;
	BOOL	m_bGoiDV;
	int		m_nPatientType;
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
	void			OnObjectTypeSelendok();
	long			OnObjectTypeLoadData();
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
	int			    OnListDeleteItem(); 
	void			OnWithoutGeneralSelect(); 
	void			OnMarkAllSelect(); 
	void			OnUnMarkSelect(); 
	void			OnPrintSelect(); 
	void			OnExportSelect();
	void			OnExport();
	void			OnExportReport();
	void			OnExportSalaryList();
	void			OnExportPatientList();
	void			OnExportByRefund();
	void			OnInpatientSelect(); 
	void			OnOutpatientSelect(); 
	void			OnDepositSelect(); 
	void			OnAllSelect(); 
	void			OnServiceOnDemandSelect();
	void			OnSurgerySelect(); 
	void			OnOperationSelect(); 
	void			OnLaserSelect();
	void			OnNotLaserSelect();
	void			OnOtherDeptFilterSelect(); 
	void			OnNotinSODSelect(); 
	void			OnChuaTTSelect();
	void			OnABZoneSelect();

	void			OnGayMeB5Select(); 
	void			OnGayMePTTYCSelect(); 

	void			OnGioiThieuKXDSelect(); 
	void			OnGioiThieuPTTYCSelect(); 
	void			OnGioiThieuKhacSelect(); 

	void			OnPrint1stver();
	void			OnPrint2ndver();
	void			OnPrint2ndver_Ins();
	void			OnPrintSalaryList();
	void			OnCreateDataSelect();

	CString			GetQueryString();
	CString			GetQueryStringSalary();
	void			BuildQueryString(CString& szSQL);
	void			data_filter(CString& szFilter);
	void			data_sort(CString& szWhere);
	void			prototype_condition(CString szCondition, CString szField, CString& szWhere);
	CString			GetQueryString_1();
	CString			GetQueryString2();
	CString			GetQueryStringtyc();
	CString			GetQueryString_check();
	CString			GetQueryStringByRefund();
	CString			GetQueryStringtycbydept();
	CString			GetQueryStringtycbyrefund();
	void			OnSolderObjectSelect();
	void			OnGoiDVSelect(); 

	CFMInsCollectDetailByItem_2017(CWnd *pWnd);
	~CFMInsCollectDetailByItem_2017();
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
	BOOL ParseALargeFile(HWND hwndParent, LPTSTR lpszFileName);
	int OnListCheckAllTYC();
	int OnListCheckAllPTTYC();
	int OnListCheckAllPTTYCDV();
	int OnListCheckAllPTTYCBH();
	int OnListCheckAllInvoice();
	int OnListCheckAllRefund();
	void OnListSearchItem();
	int OnListCheckAllIns();
	int OnListUnCheckAllIns();
	int OnListCheckAllSolder();
	int OnListUnCheckAllSolder();
	int OnListCheckAllInsSolder();
	int OnListUnCheckAllInsSolder();	
	int OnListCheckAllBHAB();
	int OnDeleteDataBeforeInsert();
};
#endif