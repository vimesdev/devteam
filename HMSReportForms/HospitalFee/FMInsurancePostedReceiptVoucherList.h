#ifndef FMInsurancePostedReceiptVoucherList_H
#define FMInsurancePostedReceiptVoucherList_H

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
class CFMInsurancePostedReceiptVoucherList : public CGuiView
{
protected:
	CMap<CString, LPCTSTR, CString, LPCTSTR> m_mIndex;
	double m_nEAmount;
	double m_nIAmount;
	CString	m_szCashIDS;
public:
	CString			m_szReceiptStr;
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
	CGuiButton		m_wndMarkAll;
	CGuiButton		m_wndUnMark;
	CGuiButton		m_wndPrint;
	CGuiButton		m_wndExport;
	CGuiCheckBox	m_wndInpatient;
	CGuiCheckBox	m_wndOutpatient;
	CGuiCheckBox	m_wndDeposit;
	CGuiCheckBox	m_wndEDeposit;
	CGuiCheckBox	m_wndAll;
	CGuiCheckBox	m_wndSOD;
	CGuiCheckBox	m_wndServicePackage;
	CGuiCheckBox	m_wndBHKhac;
	CGuiCheckBox	m_wndBHQuan;
	CGuiCheckBox	m_wndABZone;
	CGuiCheckBox	m_wndATMCard;
	CGuiCheckBox	m_wndAllIns;
	CGuiCheckBox	m_wndByMoneyTransfer;
	CGuiCheckBox	m_wndTCKT;
	long	m_nYear;
	CString	m_szReportPeriodKey;
	CString	m_szFromDate;
	CString	m_szToDate;
	CString	m_szClerkKey;
	CString	m_szObjectKey;
	CString	m_szOrderByKey;
	CString	m_szStatusKey;
	BOOL	m_bWithoutGeneral;
	BOOL	m_bInpatient;
	BOOL	m_bOutpatient;
	BOOL	m_bDeposit;
	BOOL	m_bEDeposit;
	BOOL	m_bSOD;
	BOOL	m_bServicePackage;
	BOOL	m_bBHKhac;
	BOOL	m_bBHQuan;
	BOOL	m_bABZone;
	BOOL	m_bATMCard;
	BOOL	m_bAllIns;
	BOOL	m_bByMoneyTransfer;
	BOOL	m_bTCKT;
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
	int			    OnListDeleteItem(); 
	void			OnWithoutGeneralSelect(); 
	void			OnPrintSelect(); 
	void			OnExportSelect();
	void			OnExportSelect_V1();
	void			OnExportSelect_V2();
	void			OnMarkAllSelect();
	void			OnUnMarkSelect();
	void			OnSODSelect();
	void			OnABZoneSelect(); 
	void			OnServicePackageSelect();
	void			OnATMCardSelect(); 
	void			OnBHKhacSelect(); 
	void			OnBHQuanSelect();
	void			OnAllInsSelect();
	void			OnByMoneyTransferSelect(); 
	void			OnPrint1stver();
	void			OnPrint2ndver();
	void			OnPrint3rdver();
	void			OnPrint3rdver_2();
	void			OnPrint3rdver_2024();
	void			OnPrint4rdver();
	void			OnPrint5rdver();
	void			OnPrintATM();
	void			OnPrint3rdver_Detail(bool bmauthu1 = false, bool bmauthu2 = false, bool bmauthu3 = false, bool bmauthu4 = false, bool bmauthu5 = false);
	CString			GetQueryString();
	CString			GetQueryString2();
	CString			GetQueryString3();
	CString			GetQueryString3_2();
	CString			GetQueryString3_2024();
	CString			GetQueryString4();
	CString			GetQueryString5();
	CString			GetQueryString3_detail(bool sql1 = false, bool sql2 = false, bool sql3 = false, bool sql4 = false, bool sql5 = false);
	CString			GetQueryString_check();
	CString			GetQueryString_check_V2();
	void			OnPrintSummaryReceipt(double nTotalAmount);
	void			OnPrintFooterUser(CReportSection *rptFooter);
	CFMInsurancePostedReceiptVoucherList(CWnd *pWnd);
	~CFMInsurancePostedReceiptVoucherList();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddFMInsurancePostedReceiptVoucherList(); 
	int OnEditFMInsurancePostedReceiptVoucherList(); 
	int OnDeleteFMInsurancePostedReceiptVoucherList(); 
	int OnSaveFMInsurancePostedReceiptVoucherList(); 
	int OnCancelFMInsurancePostedReceiptVoucherList();	
	int OnFMInsurancePostedReceiptVoucherListListLoadData(); 
	int OnListCheckAllIns();
	int OnListUnCheckAllIns();
	int OnListCheckAllSolder();
	int OnListUnCheckAllSolder();
	int OnListCheckAllInsSolder();
	int OnListUnCheckAllInsSolder();
	int OnListCheckAllCardTYC();
	int OnListCheckAllCardCLC();
	int	OnListCheckAllCKTYC();
	int	OnListCheckAllCKCLC();
	int	OnListUnCheckAllATMCKTYC();
	void			OnTCKTSelect();
	void			PrintFinancialDocument();
	void			PrintFinancialDocument_Detail(bool bmauthu1 = false, bool bmauthu2 = false, bool bmauthu3 = false, bool bmauthu4 = false, bool bmauthu5 = false);
};
#endif