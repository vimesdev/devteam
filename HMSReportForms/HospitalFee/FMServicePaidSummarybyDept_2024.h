#ifndef FMServicePaidSummaryByDept2024_H
#define FMServicePaidSummaryByDept2024_H

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
class CFMServicePaidSummaryByDept_2024 : public CGuiView
{
protected:
	CMap<CString, LPCTSTR, CString, LPCTSTR> m_mIndex;
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
	CGuiLabel		m_wndHtttLabel;
	CGuiComboBox	m_wndhttt;
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
	CGuiButton		m_wndCreateData;
	CGuiCheckBox	m_wndATM;
	CGuiCheckBox	m_wndAllZone;
	CGuiCheckBox	m_wndABZone;
	CGuiCheckBox	m_wndBED;
	CGuiCheckBox	m_wndCLCzone;
	CGuiCheckBox	m_wndQrOnline;
	CGuiListCtrl	m_wndDeptList;
	CGuiRadioButton	m_wndAllObj;
	CGuiRadioButton	m_wndInsurance;
	CGuiRadioButton	m_wndService;
	CGuiRadioButton	m_wndOtherObj;
	CGuiLabel		m_wndPhanloaiLabel;
	CGuiComboBox	m_wndPhanloai;

	long	m_nYear;
	CString	m_szReportPeriodKey;
	CString	m_szFromDate;
	CString	m_szToDate;
	CString	m_szClerkKey;
	CString	m_szOrderByKey;
	CString	m_szStatusKey;
	CString m_szhtttKey;
	BOOL	m_bWithoutGeneral;
	BOOL	m_bSOD;
	BOOL	m_bATM;
	BOOL	m_bAllZone;
	BOOL	m_bABZone;
	int		m_nPatientType;
	BOOL	m_bBED;
	BOOL	m_bCLCzone;
	BOOL	m_bQrOnline;
	int	m_nAllObj;
	int	m_nInsurance;
	int	m_nService;
	int	m_nOtherObj;
	CString	m_szPhanloaiKey;
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
	long			OnHtttLoadData();

	void			OnStatusSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnStatusSelendok(); 
	//void			OnStatusSetfocus(); 
	//void			OnStatusKillfocus(); 
	long			OnStatusLoadData(); 
	//void			OnStatusAddNew(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	void			OnWithoutGeneralSelect(); 
	void			OnMarkAllSelect(); 
	void			OnUnMarkSelect(); 
	void			OnPrintSelect(); 
	void			OnExportSelect(); 
	void			OnExport(int nVersion);
	void			OnExport2(int nVersion);
	void			OnExportv1(int nVersion);
	void			OnExportv2(int nVersion);
	void			OnExportv16(int nVersion);
	void			OnExport3();
	void			OnExport4();
	void			OnExport5();
	void			OnExport7();
	void			OnExport15(int nVersion);
	void			OnExport2xxx(int nVersion);
	void			OnExport3xxx(int nVersion);
	void			OnExport19();
	void			OnExportv20(int nVersion);
	void			OnExportv22(int nVersion);
	void			OnInpatientSelect(); 
	void			OnOutpatientSelect(); 
	void			OnDepositSelect();
	void			OnSODSelect();
	void			OnAllSelect(); 
	void			OnCreateDataSelect();
	void			OnATMSelect(); 
	void			OnAllZoneSelect(); 
	void			OnABZoneSelect();
	void			OnBEDSelect();
	void			OnCLCzoneSelect();
	void			OnAllObjSelect(); 
	void			OnInsuranceSelect(); 
	void			OnServiceSelect(); 
	void			OnOtherObjSelect();
	void			OnhtttSelendok(); 
	long			OnPhanloaiLoadData(); 
	

	void			OnPrint1stver();
	void			OnPrint2ndver();

	CString			GetQueryString();
	CString			GetQueryString_v2();
	CString			GetQueryString2();
	CString			GetQueryString2_v2();
	CString			GetQueryString2_v15();
	CString			GetQueryString_v7();
	CString			GetQueryString3();
	CString			GetQueryString4();
	CString         GetQueryString_v2_A11();
	CString			GetQueryString_v10();
	CString			GetQueryString_v16();
	CString			GetQueryString2_v2xxx();
	CString			GetQueryString3_v2xxx();
	CString			GetQueryString_v19();
	CString			GetQueryString_v20();
	CString			GetQueryString_v22();
	
	int	OnListCheckAllPTTYCTYC();
	int	OnListCheckAllKBA16();
	int OnListUnCheckAllTYC_PTTYC_KBA16();
	int OnListCheckAllTTTM();



	CFMServicePaidSummaryByDept_2024(CWnd *pWnd);
	~CFMServicePaidSummaryByDept_2024();
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
	int OnListCheckAllBHPTTYC();
	int OnListCheckAllDVPTTYC();
	int OnListCheckAllInvoice();
	int OnListCheckAllRefund();
	void OnListSearchItem();
	int OnDeleteDataBeforeInsert();
	int OnListCheckAllInvoiceTYC();
	int OnListCheckAllRefundTYC();
	int OnListCheckAllRefundBHTYC();
	int OnListCheckAllInvoiceBHTYC();
	int	OnListUnCheckQR();
	void			OnQrOnlineSelect();
	int				OnDeptListLoadData();
	int				OnDeptListCheckAll();
	int				OnDeptListUnCheckAll();
	int				OnDeptListCheckAllTYC();
	int				OnDeptListCheckAllDV();
};
#endif