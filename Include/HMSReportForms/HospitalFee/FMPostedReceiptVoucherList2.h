#ifndef FMPostedReceiptVoucherList2_H
#define FMPostedReceiptVoucherList2_H

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
#include "ReportDocument.h"
class CFMPostedReceiptVoucherList2 : public CGuiView
{

protected:
	CMap<CString, LPCTSTR, CString, LPCTSTR> m_mIndex;
	double m_nEAmount;
	double m_nIAmount;
	CString		m_szCashIDS;
public:
	CGuiGroupBox	m_wndReportCondition;
	CGuiGroupBox	m_wndDeptInfo;
	CGuiGroupBox	m_wndPaymentSheet;
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
	CGuiLabel		m_wndObjectLabel;
	CGuiComboBox	m_wndObject;
	CGuiLabel		m_wndOrderByLabel;
	CGuiComboBox	m_wndOrderBy;
	CGuiLabel		m_wndStatusLabel;
	CGuiComboBox	m_wndStatus;
	CGuiListCtrl	m_wndList;
	CGuiCheckBox	m_wndWithoutGeneral;
	CGuiCheckBox	m_wndSOD;
	CGuiButton		m_wndMarkAll;
	CGuiButton		m_wndUnMark;
	CGuiButton		m_wndPrint;
	CGuiButton		m_wndExport;
	CGuiCheckBox	m_wndABZone;
	CGuiCheckBox	m_wndATMCard;
	CGuiCheckBox	m_wndAllZone;
	CGuiCheckBox	m_wndByMoneyTransfer;
	CGuiCheckBox	m_wndCLCZone;
	CGuiCheckBox	m_wndQrOnline;
	CGuiListCtrl	m_wndDeptList;
	
	CGuiRadioButton	m_wndAllObj;
	CGuiRadioButton	m_wndInsurance;
	CGuiRadioButton	m_wndService;

	long	m_nYear;
	CString	m_szReportPeriodKey;
	CString	m_szFromDate;
	CString	m_szToDate;
	CString	m_szClerkKey;
	CString	m_szObjectKey;
	CString	m_szOrderByKey;
	CString	m_szStatusKey;
	BOOL	m_bWithoutGeneral;
	BOOL	m_bABZone;
	BOOL	m_bATMCard;
	BOOL	m_bSOD;
	BOOL	m_bAllZone;
	BOOL	m_bByMoneyTransfer;
	BOOL	m_bCLCZone;
	BOOL	m_bQrOnline;
	
	int	m_nAllObj;
	int	m_nInsurance;
	int	m_nService;

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
	void			OnObjectSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnObjectSelendok(); 
	//void			OnObjectSetfocus(); 
	//void			OnObjectKillfocus(); 
	long			OnObjectLoadData(); 
	//void			OnObjectAddNew(); 
	void			OnOrderBySelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnOrderBySelendok(); 
	//void			OnOrderBySetfocus(); 
	//void			OnOrderByKillfocus(); 
	long			OnOrderByLoadData(); 
	//void			OnOrderByAddNew(); 
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
	void			OnSODSelect();
	void			OnABZoneSelect(); 
	void			OnATMCardSelect();
	void			OnAllZoneSelect();
	void			OnByMoneyTransferSelect();
	void			OnPrintSelect(); 
	void			OnExportSelect();
	void			OnExportSelect1();
	void			OnExportForChecking();
	void			OnMarkAllSelect();
	void			OnUnMarkSelect();

	void			OnPrint1stver();
	void			OnPrint2ndver(bool bIsA3=false);
	void			OnPrint3ndver();
	void			OnPrint4ndver();
	void			OnPrint6ndver();
	void			OnPrint7ndver();
	void			OnPrint3rdver_2024();
	void			OnPrint3rdver_2024_v2();
	void			OnPrintFooterUser(CReportSection *rptFooter);
	void			OnPrintSummaryReceipt(double nTotalAmount);
	CString			GetQueryString();
	CString			GetQueryString2();
	CString			GetQueryString3();
	CString			GetQueryString4();
	CString			GetQueryString5();
	CString			GetQueryString6();
	CString			GetQueryString7();
	CString			GetQueryString3_2024();
	CString			GetQueryString3_2024_v2();
	CString			GetQueryString_check();

	void			PrintFinancialDocument();
	void			PrintFinancialDocument2();
	CFMPostedReceiptVoucherList2(CWnd *pWnd);
	~CFMPostedReceiptVoucherList2();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddFMInsurancePostedPaymentVoucherList(); 
	int OnEditFMInsurancePostedPaymentVoucherList(); 
	int OnDeleteFMInsurancePostedPaymentVoucherList(); 
	int OnSaveFMInsurancePostedPaymentVoucherList(); 
	int OnCancelFMInsurancePostedPaymentVoucherList(); 
	int OnFMInsurancePostedPaymentVoucherListListLoadData();

	int OnListCheckAllTYC();
	int OnListCheckAllPTTYC();
	int OnListCheckAllCardTYC();
	int OnListCheckAllCardPTTYC();
	int OnListCheckAllTYCPTTYC();
	int OnListCheckAllCardTYCPTTYC();

	int OnListCheckAllMTTYC();
	int OnListCheckAllMTPTTYC();
	int OnListCheckAllMTTYCPTTYC();
	int OnListCheckAllCardCLC();
	int	OnListCheckAllCKCLC();
	int OnListCheckAllMTCLC();

	int	OnListUnCheckAllCardCLC();
	int OnListUnCheckAllMTCLC();

	void OnListSearchItem();
	void			OnCLCZoneSelect(); 
	void			OnQrOnlineSelect();
	long			OnDeptListLoadData();
	int				OnDeptListCheckAll();
	int				OnDeptListUnCheckAll();
	int				OnDeptListCheckAllTYC();
	int				OnDeptListCheckAllDV();

	void			OnAllObjSelect(); 
	void			OnInsuranceSelect(); 
	void			OnServiceSelect(); 
};
#endif