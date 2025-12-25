#ifndef FMCollectDetailbyItem_2022H
#define FMCollectDetailbyItem_2022H

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
typedef struct tagGroupInfor
{
	CString id;
	CString old_val;
	CString new_val;
	double sum[45];
	double total;
} GROUP_INFOR;

class CFMCollectDetailByItem_2022 : public CGuiView
{
protected:
	CMap<CString, LPCTSTR, CString, LPCTSTR> m_mIndex;
	CMap<CString, LPCTSTR, CString, LPCTSTR> m_mOrderBy;
	CString		m_szWhere;
	void		OnPrint(CString szFilePath, CRecord* pRs);
	void		InitGroupInfo(CRecord* pRs, GROUP_INFOR (*grp_info)[2], int& nDepth, int& nColNum);
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
	CGuiCheckBox	m_wndENTR;
	CGuiCheckBox	m_wndReqObs;
	CGuiCheckBox	m_wndNonReqObs;
	CGuiCheckBox	m_wndI131;
	CGuiCheckBox	m_wndHTSS;
	CGuiComboBox	m_wndRoom;
	CGuiLabel		m_wndRoomLabel;
	CGuiLabel		m_wndFilterLabel;
	CGuiComboBox	m_wndFilter;
	CGuiLabel		m_wndContractLabel;
	CGuiComboBox	m_wndContract;
	CGuiCheckBox	m_wndDaduyet_chuathu;
	CGuiCheckBox	m_wndDaduyet_dathu;
	
	long	m_nYear;
	CString	m_szReportPeriodKey;
	CString	m_szFromDate;
	CString	m_szToDate;
	CString	m_szClerkKey;
	CString	m_szOrderByKey;
	CString	m_szObjectTypeKey;
	CString	m_szStatusKey;
	CString m_szDeptKey;
	CString	m_szFilterKey;
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

	BOOL	m_bGayMeB5;
	BOOL	m_bGayMePTTYC;

	BOOL	m_bGioiThieuKXD;
	BOOL	m_bGioiThieuPTTYC;
	BOOL	m_bGioiThieuKhac;
	BOOL	m_bENTR;
	BOOL	m_bReqObs;
	BOOL	m_bNonReqObs;
	BOOL	m_bI131;
	BOOL	m_bHTSS;
	CString	m_szRoomKey;
	CString	m_szContractKey;
	BOOL	m_bDaduyet_chuathu;
	BOOL	m_bDaduyet_dathu;

	long	OnContractLoadData();
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
	long			OnRoomLoadData();
	long			OnFilterLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			    OnListDeleteItem(); 
	void			OnWithoutGeneralSelect(); 
	void			OnMarkAllSelect(); 
	void			OnUnMarkSelect(); 
	void			OnPrintSelect(); 
	void			OnExportSelect();
	void			OnExport();
	void			OnExport6();
	void			OnExport7();
	void			OnExport8();
	void			OnExportSalaryList();
	void			OnExportSalaryList1();
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

	void			OnGayMeB5Select(); 
	void			OnGayMePTTYCSelect(); 

	void			OnGioiThieuKXDSelect(); 
	void			OnGioiThieuPTTYCSelect(); 
	void			OnGioiThieuKhacSelect(); 

	void			OnPrint1stver();
	void			OnPrint2ndver();
	void			OnPrintDetailByPatient();
	void			OnPrintDetailByPatient_v2_o();
	void			OnPrintDetailByPatient_v2();
	void			OnPrintBookingCare();
	void			OnPrintCASVN();
	void			OnPrint2ndver_Ins();
	void			OnPrintSalaryList();
	void			OnENTRSelect(); 
	void			OnReqObsSelect();
	void			OnNonReqObsSelect();
	void			OnI131Select(); 
	void			OnExportDetailByPatient();
	void			OnHTSSSelect();
	void			OnDaduyet_chuathuSelect(); 
	void			OnDaduyet_dathuSelect(); 

	CString			GetQueryString();
	CString			GetQueryString_ByRoom();
	CString			GetQueryString_patientdtl();
	CString			GetQueryString_patientdtl_v2();
	void			Export(CString szFileName, CRecord* pRs);
	CString			GetQueryStringSalary();
	CString			GetQueryString6();
	CString			GetQueryString7();
	CString			GetQueryString8();
	CString			GetQueryStringSalary1();
	void			BuildQueryString(CString& szSQL);
	void			data_filter(CString& szFilter);
	void			data_sort(CString& szWhere);
	void			prototype_condition(CString szCondition, CString szField, CString& szWhere);
	CString			GetQueryString_1();
	CString			GetQueryString2();
	CString			GetQueryStringtyc();
	CString			GetQueryStringByRefund();
	CString			GetQueryStringtycbydept();
	CString			GetQueryStringtycbyrefund();
	CString			GetQueryStringBookingCare();
	CString			GetQueryStringCASVN();
	CString			GetQueryString_detail();

	CFMCollectDetailByItem_2022(CWnd *pWnd);
	~CFMCollectDetailByItem_2022();
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
	int OnListUnCheckAllPTTYCBH();
	int OnListCheckAllCardTYC_PTTYC_DV();
	int OnListCheckAllCardTYC_PTTYC_BH();
	int OnListCheckAll_TYC_PTTYC_DV();


	int OnListCheckAllDV();
	int OnListCheckAllDVAB();
	void OnListSearchItem();
	int OnListCheckAllCardTYC();
	int OnListCheckAllCardPTTYC();
};
#endif