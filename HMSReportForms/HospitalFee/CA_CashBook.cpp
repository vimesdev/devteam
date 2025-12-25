#include "stdafx.h"
#include "CA_CashBook.h"
#include "MainFrame_E10.h"
#include "ReportDocument.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CCA_CashBook *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CCA_CashBook *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CCA_CashBook *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CCA_CashBook *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCA_CashBook* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CCA_CashBook *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CCA_CashBook *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CCA_CashBook *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CCA_CashBook *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CCA_CashBook *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CCA_CashBook *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CCA_CashBook *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CCA_CashBook *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CCA_CashBook *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CCA_CashBook *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CCA_CashBook *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CCA_CashBook *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CCA_CashBook *)pWnd)->OnToDateCheckValue();
} 
static void _OnPaymentMethodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCA_CashBook* )pWnd)->OnPaymentMethodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPaymentMethodSelendokFnc(CWnd *pWnd){
	((CCA_CashBook *)pWnd)->OnPaymentMethodSelendok();
}
/*static void _OnPaymentMethodSetfocusFnc(CWnd *pWnd){
	((CCA_CashBook *)pWnd)->OnPaymentMethodKillfocus();
}*/
/*static void _OnPaymentMethodKillfocusFnc(CWnd *pWnd){
	((CCA_CashBook *)pWnd)->OnPaymentMethodKillfocus();
}*/
static long _OnPaymentMethodLoadDataFnc(CWnd *pWnd){
	return ((CCA_CashBook *)pWnd)->OnPaymentMethodLoadData();
}
/*static void _OnPaymentMethodAddNewFnc(CWnd *pWnd){
	((CCA_CashBook *)pWnd)->OnPaymentMethodAddNew();
}*/
static void _OnObjectSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCA_CashBook* )pWnd)->OnObjectSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnObjectSelendokFnc(CWnd *pWnd){
	((CCA_CashBook *)pWnd)->OnObjectSelendok();
}
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CCA_CashBook *)pWnd)->OnObjectKillfocus();
}*/
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CCA_CashBook *)pWnd)->OnObjectKillfocus();
}*/
static long _OnObjectLoadDataFnc(CWnd *pWnd){
	return ((CCA_CashBook *)pWnd)->OnObjectLoadData();
}
/*static void _OnObjectAddNewFnc(CWnd *pWnd){
	((CCA_CashBook *)pWnd)->OnObjectAddNew();
}*/
static void _OnOrderBySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCA_CashBook* )pWnd)->OnOrderBySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnOrderBySelendokFnc(CWnd *pWnd){
	((CCA_CashBook *)pWnd)->OnOrderBySelendok();
}
/*static void _OnOrderBySetfocusFnc(CWnd *pWnd){
	((CCA_CashBook *)pWnd)->OnOrderByKillfocus();
}*/
/*static void _OnOrderByKillfocusFnc(CWnd *pWnd){
	((CCA_CashBook *)pWnd)->OnOrderByKillfocus();
}*/
static long _OnOrderByLoadDataFnc(CWnd *pWnd){
	return ((CCA_CashBook *)pWnd)->OnOrderByLoadData();
}
/*static void _OnOrderByAddNewFnc(CWnd *pWnd){
	((CCA_CashBook *)pWnd)->OnOrderByAddNew();
}*/
static void _OnPosterSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCA_CashBook* )pWnd)->OnPosterSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPosterSelendokFnc(CWnd *pWnd){
	((CCA_CashBook *)pWnd)->OnPosterSelendok();
}
/*static void _OnPosterSetfocusFnc(CWnd *pWnd){
	((CCA_CashBook *)pWnd)->OnPosterKillfocus();
}*/
/*static void _OnPosterKillfocusFnc(CWnd *pWnd){
	((CCA_CashBook *)pWnd)->OnPosterKillfocus();
}*/
static long _OnPosterLoadDataFnc(CWnd *pWnd){
	return ((CCA_CashBook *)pWnd)->OnPosterLoadData();
}
/*static void _OnPosterAddNewFnc(CWnd *pWnd){
	((CCA_CashBook *)pWnd)->OnPosterAddNew();
}*/

static void _OnPrintSelectFnc(CWnd *pWnd){
	CCA_CashBook *pVw = (CCA_CashBook *)pWnd;
	pVw->OnPrintSelect();
} 
static long _OnAccountListLoadDataFnc(CWnd *pWnd){
	return ((CCA_CashBook*)pWnd)->OnAccountListLoadData();
} 
static void _OnAccountListDblClickFnc(CWnd *pWnd){
	((CCA_CashBook*)pWnd)->OnAccountListDblClick();
} 
static void _OnAccountListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CCA_CashBook*)pWnd)->OnAccountListSelectChange(nOldItem, nNewItem);
} 
static int _OnAccountListDeleteItemFnc(CWnd *pWnd){
	 return ((CCA_CashBook*)pWnd)->OnAccountListDeleteItem();
} 
static void _OnABZoneSelectFnc(CWnd *pWnd)
{
	 ((CCA_CashBook*)pWnd)->OnABZoneSelect();
}

static void _OnInsABZoneSelectFnc(CWnd *pWnd){
	 ((CCA_CashBook*)pWnd)->OnInsABZoneSelect();
}
static void _OnByMoneySelectFnc(CWnd *pWnd){
	 ((CCA_CashBook*)pWnd)->OnByMoneySelect();
}
static void _OnByATMSelectFnc(CWnd *pWnd){
	 ((CCA_CashBook*)pWnd)->OnByATMSelect();
}
static void _OnByMoneyTransferSelectFnc(CWnd *pWnd){
	 ((CCA_CashBook*)pWnd)->OnByMoneyTransferSelect();
}

CCA_CashBook::CCA_CashBook(CWnd *pParent){
	m_szCashBook = _T("DV");
	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CCA_CashBook::~CCA_CashBook(){
}
void CCA_CashBook::OnCreateComponents()
{
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 4, 500, 275);
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 115, 55);
	m_wndYear.Create(this,120, 30, 256, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 265, 30, 355, 55);
	m_wndReportPeriod.Create(this,360, 30, 497, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 115, 85);
	m_wndFromDate.Create(this,120, 60, 256, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 265, 60, 355, 85);
	m_wndToDate.Create(this,360, 60, 497, 85); 
	m_wndPaymentMethodLabel.Create(this, _T("PaymentMethod"), 10, 90, 115, 115);
	m_wndPaymentMethod.Create(this,120, 90, 497, 115); 
	m_wndPaymentMethod.SetReadOnly();
	m_wndObjectLabel.Create(this, _T("Object"), 10, 120, 115, 145);
	m_wndObject.Create(this,120, 120, 497, 145); 
	m_wndOrderByLabel.Create(this, _T("OrderBy"), 10, 150, 115, 175);
	m_wndOrderBy.Create(this,120, 150, 497, 175); 
	m_wndPosterLabel.Create(this, _T("Staff"), 10, 180, 115, 205);
	m_wndPoster.Create(this,120, 180, 497, 205); 
	//m_wndSOD.Create(this, _T("Service On Demand"), 5, 374, 115, 399);
	m_wndSOD.Create(this, _T("Service On Demand"), 0, 0, 0, 0);
	m_wndPrint.Create(this, _T("&Print"), 397, 400, 497, 425);
	m_wndAccountList.Create(this,10, 210, 497, 276); 
	//m_wndABZone.Create(this, _T("AB Zone"), 120, 374, 219, 399);
	//m_wndInsABZone.Create(this, _T("Ins AB Zone"), 226, 374, 339, 399);
	m_wndABZone.Create(this, _T("AB Zone"), 0, 0, 0, 0);
	m_wndInsABZone.Create(this, _T("Ins AB Zone"), 0, 0, 0, 0);
	m_wndByMoney.Create(this, _T("By Money"), 5, 281, 500, 306);
	m_wndByATM.Create(this, _T("By ATM"), 5, 312, 500, 337);
	m_wndByMoneyTransfer.Create(this, _T("By Money Transfer"), 5, 343, 500, 368);
}
void CCA_CashBook::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndYear.SetLimitText(16);
	m_wndYear.SetCheckValue(true);
	m_wndReportPeriod.SetCheckValue(true);
	m_wndReportPeriod.LimitText(35);
	//m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	m_wndPaymentMethod.SetCheckValue(true);
	m_wndPaymentMethod.LimitText(35);
	m_wndObject.SetCheckValue(true);
	m_wndObject.LimitText(35);
	m_wndOrderBy.SetCheckValue(true);
	m_wndOrderBy.LimitText(35);


	m_wndReportPeriod.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndReportPeriod.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndPaymentMethod.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndPaymentMethod.InsertColumn(1, _T("Description"), CFMT_TEXT, 250);


	m_wndObject.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndObject.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);


	m_wndOrderBy.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndOrderBy.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);


	m_wndAccountList.InsertColumn(0, _T("Account ID"), CFMT_TEXT|CFMT_RIGHT, 100);
	m_wndAccountList.InsertColumn(1, _T("Account Name"), CFMT_TEXT, 300);
	m_wndAccountList.InsertColumn(2, _T("Grade"), CFMT_TEXT, 50);
	m_wndAccountList.SetCheckBox(TRUE);
	m_wndPoster.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndPoster.InsertColumn(1, _T("Name"), CFMT_TEXT, 450);
}

void CCA_CashBook::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//m_wndYear.SetEvent(WE_CHANGE, _OnYearChangeFnc);
	//m_wndYear.SetEvent(WE_SETFOCUS, _OnYearSetfocusFnc);
	//m_wndYear.SetEvent(WE_KILLFOCUS, _OnYearKillfocusFnc);
	m_wndYear.SetEvent(WE_CHECKVALUE, _OnYearCheckValueFnc);
	m_wndReportPeriod.SetEvent(WE_SELENDOK, _OnReportPeriodSelendokFnc);
	//m_wndReportPeriod.SetEvent(WE_SETFOCUS, _OnReportPeriodSetfocusFnc);
	//m_wndReportPeriod.SetEvent(WE_KILLFOCUS, _OnReportPeriodKillfocusFnc);
	m_wndReportPeriod.SetEvent(WE_SELCHANGE, _OnReportPeriodSelectChangeFnc);
	m_wndReportPeriod.SetEvent(WE_LOADDATA, _OnReportPeriodLoadDataFnc);
	//m_wndReportPeriod.SetEvent(WE_ADDNEW, _OnReportPeriodAddNewFnc);
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndPaymentMethod.SetEvent(WE_SELENDOK, _OnPaymentMethodSelendokFnc);
	//m_wndPaymentMethod.SetEvent(WE_SETFOCUS, _OnPaymentMethodSetfocusFnc);
	//m_wndPaymentMethod.SetEvent(WE_KILLFOCUS, _OnPaymentMethodKillfocusFnc);
	m_wndPaymentMethod.SetEvent(WE_SELCHANGE, _OnPaymentMethodSelectChangeFnc);
	m_wndPaymentMethod.SetEvent(WE_LOADDATA, _OnPaymentMethodLoadDataFnc);
	//m_wndPaymentMethod.SetEvent(WE_ADDNEW, _OnPaymentMethodAddNewFnc);
	m_wndObject.SetEvent(WE_SELENDOK, _OnObjectSelendokFnc);
	//m_wndObject.SetEvent(WE_SETFOCUS, _OnObjectSetfocusFnc);
	//m_wndObject.SetEvent(WE_KILLFOCUS, _OnObjectKillfocusFnc);
	m_wndObject.SetEvent(WE_SELCHANGE, _OnObjectSelectChangeFnc);
	m_wndObject.SetEvent(WE_LOADDATA, _OnObjectLoadDataFnc);
	//m_wndObject.SetEvent(WE_ADDNEW, _OnObjectAddNewFnc);
	m_wndOrderBy.SetEvent(WE_SELENDOK, _OnOrderBySelendokFnc);
	//m_wndOrderBy.SetEvent(WE_SETFOCUS, _OnOrderBySetfocusFnc);
	//m_wndOrderBy.SetEvent(WE_KILLFOCUS, _OnOrderByKillfocusFnc);
	m_wndOrderBy.SetEvent(WE_SELCHANGE, _OnOrderBySelectChangeFnc);
	m_wndOrderBy.SetEvent(WE_LOADDATA, _OnOrderByLoadDataFnc);
	//m_wndOrderBy.SetEvent(WE_ADDNEW, _OnOrderByAddNewFnc);
	m_wndPoster.SetEvent(WE_SELENDOK, _OnPosterSelendokFnc);
	//m_wndPoster.SetEvent(WE_SETFOCUS, _OnPosterSetfocusFnc);
	//m_wndPoster.SetEvent(WE_KILLFOCUS, _OnPosterKillfocusFnc);
	m_wndPoster.SetEvent(WE_SELCHANGE, _OnPosterSelectChangeFnc);
	m_wndPoster.SetEvent(WE_LOADDATA, _OnPosterLoadDataFnc);
	//m_wndPoster.SetEvent(WE_ADDNEW, _OnPosterAddNewFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndABZone.SetEvent(WE_CLICK, _OnABZoneSelectFnc);
	m_wndInsABZone.SetEvent(WE_CLICK, _OnInsABZoneSelectFnc);
	m_wndByMoney.SetEvent(WE_CLICK, _OnByMoneySelectFnc);
	m_wndByATM.SetEvent(WE_CLICK, _OnByATMSelectFnc);
	m_wndByMoneyTransfer.SetEvent(WE_CLICK, _OnByMoneyTransferSelectFnc);

	m_wndAccountList.SetEvent(WE_SELCHANGE, _OnAccountListSelectChangeFnc);
	m_wndAccountList.SetEvent(WE_LOADDATA, _OnAccountListLoadDataFnc);
	m_wndAccountList.SetEvent(WE_DBLCLICK, _OnAccountListDblClickFnc);
	m_wndAccountList.AddEvent(1, _T("Delete"), _OnAccountListDeleteItemFnc, 0, VK_DELETE, 0);
	CString szSysDate = pMF->GetSysDate();
	m_nYear = ToInt(szSysDate.Left(4));
	m_szReportPeriodKey.Format(_T("%d"), ToInt(szSysDate.Mid(5, 2)));
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate += _T("23:59");
	OnAccountListLoadData();
	OnPosterLoadData();
	UpdateData(FALSE);

}
void CCA_CashBook::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndPaymentMethod.GetDlgCtrlID(), m_szPaymentMethodKey);
	DDX_TextEx(pDX, m_wndObject.GetDlgCtrlID(), m_szObjectKey);
	DDX_TextEx(pDX, m_wndOrderBy.GetDlgCtrlID(), m_szOrderByKey);
	DDX_TextEx(pDX, m_wndPoster.GetDlgCtrlID(), m_szPosterKey);
	DDX_Check(pDX, m_wndSOD.GetDlgCtrlID(), m_bSOD);
	DDX_Check(pDX, m_wndABZone.GetDlgCtrlID(), m_bABZone);
	DDX_Check(pDX, m_wndInsABZone.GetDlgCtrlID(), m_bInsABZone);
	DDX_Check(pDX, m_wndByMoney.GetDlgCtrlID(), m_bByMoney);
	DDX_Check(pDX, m_wndByATM.GetDlgCtrlID(), m_bByATM);
	DDX_Check(pDX, m_wndByMoneyTransfer.GetDlgCtrlID(), m_bByMoneyTransfer);
}
void CCA_CashBook::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szPaymentMethodKey.Empty();
	m_szObjectKey.Empty();
	m_szOrderByKey.Empty();
	m_bSOD = FALSE;
	m_bInsABZone=FALSE;
	m_bByMoney=TRUE;
	m_bByATM=FALSE;
	m_bByMoneyTransfer=FALSE;
}

int CCA_CashBook::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 3, 4, -1);
 			SetDefaultValues();
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 3, 4, -1);
 			break;
 		case VM_VIEW: 
 			EnableControls(FALSE);
 			EnableButtons(FALSE, 3, 4, -1);
 			break;
 		case VM_NONE: 
 			EnableControls(FALSE);
 			EnableButtons(TRUE, 0, 6, -1);
 			SetDefaultValues();
 			break;
 		};
 		UpdateData(FALSE);
 		return nOldMode;
}

/*void CCA_CashBook::OnYearChange(){
	
} */
/*void CCA_CashBook::OnYearSetfocus(){
	
} */
/*void CCA_CashBook::OnYearKillfocus(){
	
} */
int CCA_CashBook::OnYearCheckValue(){
	return 0;
}
 
void CCA_CashBook::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}
 
void CCA_CashBook::OnReportPeriodSelendok(){
	 CString tmpStr;
	CDate date;
	UpdateData(true);
	int nMonth = ToInt(m_szReportPeriodKey);
	if(nMonth > 0 && nMonth <= 12)
	{
		m_szFromDate.Format(_T("%.4d/%.2d/1"), m_nYear, nMonth);
		date.ParseDate(m_szFromDate);
		m_szToDate.Format(_T("%.4d/%.2d/%.2d 23:59"), m_nYear, nMonth, date.GetMonthLastDay());
	}
	if(nMonth == 13){
		m_szFromDate.Format(_T("%.4d/1/1"), m_nYear);
		tmpStr.Format(_T("%.4d/3/1"), m_nYear);
		date.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/3/%.2d 23:59" ), m_nYear,  date.GetMonthLastDay());
	}
	if(nMonth == 14){
		m_szFromDate.Format(_T("%.4d/4/1"), m_nYear);
		tmpStr.Format(_T("%.4d/6/1"), m_nYear);
		date.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/6/%.2d 23:59"), m_nYear, date.GetMonthLastDay());
	}
	if(nMonth == 15){
		m_szFromDate.Format(_T("%.4d/7/1"), m_nYear);
		tmpStr.Format(_T("%.4d/9/1"), m_nYear);
		date.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/9/%.2d 23:59"), m_nYear, date.GetMonthLastDay());
	}
	if(nMonth == 16){
		m_szFromDate.Format(_T("%.4d/0/1"), m_nYear);
		tmpStr.Format(_T("%.4d/0/1"), m_nYear);
		date.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/2/%.2d 23:59"), m_nYear, date.GetMonthLastDay());
	}
	if(nMonth == 17){
		m_szFromDate.Format(_T("%.4d/1/1"), m_nYear);
		tmpStr.Format(_T("%.4d/2/1"), m_nYear);
		date.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/2/%.2d 23:59"), m_nYear, date.GetMonthLastDay());		
	}	
	UpdateData(false);	
}

/*void CCA_CashBook::OnReportPeriodSetfocus(){
	
}*/
/*void CCA_CashBook::OnReportPeriodKillfocus(){
	
}*/
long CCA_CashBook::OnReportPeriodLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndReportPeriod.IsSearchKey() && ToInt(m_szReportPeriodKey) > 0){
		szWhere.Format(_T(" WHERE hpr_idx=%ld"), ToInt(m_szReportPeriodKey));
	};
	m_wndReportPeriod.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT * FROM hms_period_report %s ORDER BY hpr_idx "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndReportPeriod.AddItems(
			rs.GetValue(_T("hpr_idx")), 
			rs.GetValue(_T("hpr_name")),			
			NULL);
		rs.MoveNext();
	}
	return nCount;
}

/*void CCA_CashBook::OnReportPeriodAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CCA_CashBook::OnFromDateChange(){
	
} */
/*void CCA_CashBook::OnFromDateSetfocus(){
	
} */
/*void CCA_CashBook::OnFromDateKillfocus(){
	
} */
int CCA_CashBook::OnFromDateCheckValue(){
	return 0;
}
 
/*void CCA_CashBook::OnToDateChange(){
	
} */
/*void CCA_CashBook::OnToDateSetfocus(){
	
} */
/*void CCA_CashBook::OnToDateKillfocus(){
	
} */
int CCA_CashBook::OnToDateCheckValue(){
	return 0;
}
 
void CCA_CashBook::OnPaymentMethodSelectChange(int nOldItemSel, int nNewItemSel)
{
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();	
}
 
void CCA_CashBook::OnPaymentMethodSelendok(){
	 
}

/*void CCA_CashBook::OnPaymentMethodSetfocus(){
	
}*/
/*void CCA_CashBook::OnPaymentMethodKillfocus(){
	
}*/
long CCA_CashBook::OnPaymentMethodLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndPaymentMethod.IsSearchKey() && !m_szPaymentMethodKey.IsEmpty()){
	 szWhere.Format(_T(" and adpm_payment_method_id='%s' "), m_szPaymentMethodKey);
	};
	m_wndPaymentMethod.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT adpm_payment_method_id as id, adpm_description as name ") \
		__T("FROM ad_payment_method WHERE adpm_org_id='FM'  %s ORDER BY id "), szWhere);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPaymentMethod.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
	return 0;
}

/*void CCA_CashBook::OnPaymentMethodAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CCA_CashBook::OnObjectSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}
 
void CCA_CashBook::OnObjectSelendok(){
	 
}
void CCA_CashBook::OnByMoneySelect()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(true);
	m_bByATM=FALSE;
	m_bByMoneyTransfer=FALSE;
}
	void CCA_CashBook::OnByATMSelect()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(true);
	m_bByMoney=FALSE;	
	m_bByMoneyTransfer=FALSE;
}
	void CCA_CashBook::OnByMoneyTransferSelect()
	{
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(true);
	m_bByMoney=FALSE;
	m_bByATM=FALSE;
	
}

/*void CCA_CashBook::OnObjectSetfocus(){
	
}*/
/*void CCA_CashBook::OnObjectKillfocus(){
	
}*/
long CCA_CashBook::OnObjectLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//m_wndObject.AddItems(_T("AL"), _T("Tất cả đối tượng"), NULL);
	m_wndObject.AddItems(_T("BH"), _T("Bảo hiểm"), NULL);
	//m_wndObject.AddItems(_T("BH-NT"), _T("Bảo hiểm khác nội trú"), NULL);
	//m_wndObject.AddItems(_T("BH-NG"), _T("Bảo hiểm khác ngoại trú"), NULL);
	//m_wndObject.AddItems(_T("BHQUAN-NT"), _T("Bảo hiểm quân nội trú"), NULL);
	//m_wndObject.AddItems(_T("BHQUAN-NG"), _T("Bảo hiểm quân ngoại trú"), NULL);	
	m_wndObject.AddItems(_T("DV"), _T("Dịch vụ"), NULL);
	m_wndObject.AddItems(_T("QU"), _T("Bộ đội, chính sách"), NULL);
	m_wndObject.AddItems(_T("BHYC"), _T("Bảo hiểm yêu cầu"), NULL);
	m_wndObject.AddItems(_T("DVYC"), _T("Dịch vụ yêu cầu"), NULL);
	m_wndObject.AddItems(_T("THYC"), _T("Dịch vụ & bảo hiểm yêu cầu"), NULL);
	m_wndObject.AddItems(_T("LUONG"), _T("Chi chế độ lương, phụ cấp"), NULL);

	m_wndObject.AddItems(_T("DVCLC"), _T("Dịch vụ CLC"), NULL);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndObject.IsSearchKey() && !m_szObjectKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szObjectKey
};
	m_wndObject.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndObject.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}

/*void CCA_CashBook::OnObjectAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CCA_CashBook::OnOrderBySelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}
 
void CCA_CashBook::OnOrderBySelendok(){
	 
}

/*void CCA_CashBook::OnOrderBySetfocus(){
	
}*/
/*void CCA_CashBook::OnOrderByKillfocus(){
	
}*/
long CCA_CashBook::OnOrderByLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndOrderBy.AddItems(_T("01"), _T("S\x1EAFp \x78\x1EBFp th\x65o th\x1EDDi gi\x61n ghi s\x1ED5"), NULL);
	m_wndOrderBy.AddItems(_T("02"), _T("S\x1EAFp \x78\x1EBFp th\x65o ng\x1B0\x1EDDi n\x1ED9p ti\x1EC1n"), NULL);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndOrderBy.IsSearchKey() && !m_szOrderByKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szOrderByKey
};
	m_wndOrderBy.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndOrderBy.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}

/*void CCA_CashBook::OnOrderByAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CCA_CashBook::OnPosterSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CCA_CashBook::OnPosterSelendok(){
	 
}
/*void CCA_CashBook::OnPosterSetfocus(){
	
}*/
/*void CCA_CashBook::OnPosterKillfocus(){
	
}*/
long CCA_CashBook::OnPosterLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndPoster.IsSearchKey() && !m_szPosterKey.IsEmpty()){
		szWhere.Format(_T(" and su_userid='%s' "), m_szPosterKey);
	}
	m_wndPoster.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT su_userid as id, su_name as name FROM sys_user WHERE su_groupid = 'F' %s ORDER BY id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPoster.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CCA_CashBook::OnPosterAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CCA_CashBook::OnABZoneSelect()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
}

void CCA_CashBook::OnInsABZoneSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();	
}

void CCA_CashBook::OnPrintSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(true);
	BeginWaitCursor();
	CReport rpt;
	CString szSQL, tmpStr, szAmt, szID, szPrintDate, szMemory, szWhere;
	double nTmp = 0;
	long double nGroupTotal1 = 0, nGroupTotal2 = 0, nGroupTotal3 = 0;
	double nGrandAmount1=0, nGrandAmount2 = 0, nGrandAmount3=0;

	CRecord rs(&pMF->m_db);
	CReportSection *rptDetail = NULL, *rptGroup = NULL;
	//if (!rpt.Init(_T("Reports\\FA\\FACashBook.RPT")))
	if (!rpt.Init(_T("Reports\\FA\\FA_Soquytienmat.RPT")))
		return;
	szSQL = GetQueryString();
	//_msg(_T("%s"), szSQL);	

	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);	

	if (rs.IsEOF())
	{
	//	AfxMessageBox(_T("No Data"), MB_OK);
	//	return;
	}
	rpt.GetReportHeader()->SetValue(_T("HealthService"), pMF->m_szHealthService);
	rpt.GetReportHeader()->SetValue(_T("HospitalName"), pMF->m_szHospitalName);
	// 	rpt.GetReportHeader()->SetValue(_T("Department"), pMF->GetDepartmentName(pMF->GetDepartmentID()));
	tmpStr.Format(rpt.GetReportHeader()->GetValue(_T("ReportDate")), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), tmpStr);

	tmpStr = _T("To\xE0n \x62\x1ED9");
	CString szAccounts;

	if (!m_szPaymentMethodKey.IsEmpty())
		rpt.GetReportHeader()->SetValue(_T("PaymentMethod"), m_wndPaymentMethod.GetCurrent(1));
	else
		rpt.GetReportHeader()->SetValue(_T("PaymentMethod"), tmpStr);

	if (!m_szObjectKey.IsEmpty())
		rpt.GetReportHeader()->SetValue(_T("ObjectType"), m_wndObject.GetCurrent(1));
	else
		rpt.GetReportHeader()->SetValue(_T("ObjectType"), tmpStr);


	for (int i = 0; i < m_wndAccountList.GetItemCount(); i++)
	{
		if (m_wndAccountList.GetCheck(i))
		{
			if (!szAccounts.IsEmpty())
				szAccounts += _T(", ");
			szAccounts.AppendFormat(_T("%s"), m_wndAccountList.GetItemText(i, 1));
		}
	}
	if (!szAccounts.IsEmpty())
		rpt.GetReportHeader()->SetValue(_T("AccountNo"), szAccounts);
	else
		rpt.GetReportHeader()->SetValue(_T("AccountNo"), tmpStr);
	
	long nCashID;
	CString szDocType;
	double nReceiptAmount =0, nPaymentAmount = 0, nTempRAmount = 0, nTempPAmount = 0;
	double nAmount;
	//Danh sach ho nop tien vao quy
	if (!rs.IsEOF())
	{
		rptGroup = rpt.AddDetail(rpt.GetGroupHeader(1));
		if (rptGroup)
			rptGroup->SetValue(_T("GroupName"), _T("\x44\x61nh s\xE1\x63h h\x1ED9 n\x1ED9p ti\x1EC1n v\xE0o qu\x1EF9"));
	}

	while (!rs.IsEOF())
	{
		rptDetail = rpt.AddDetail();
		rs.GetValue(_T("doctype"), szDocType);
		rs.GetValue(_T("cash_id"), nCashID);
		rs.GetValue(_T("acct_date"), tmpStr);
		rptDetail->SetValue(_T("1"), tmpStr);
		rs.GetValue(_T("invoice_date"), tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);
		rptDetail->SetValue(_T("3"), rs.GetValue(_T("receipt_no")));
		rptDetail->SetValue(_T("4"), rs.GetValue(_T("payment_no")));
		rptDetail->SetValue(_T("5"), rs.GetValue(_T("Description")));
		rptDetail->SetValue(_T("6"), rs.GetValue(_T("receipt_amount")));
		rptDetail->SetValue(_T("7"), rs.GetValue(_T("payment_amount")));
		
		rs.GetValue(_T("receipt_amount"), nAmount);
		nTempRAmount += nAmount;
		rs.GetValue(_T("payment_amount"), nAmount);
		nTempPAmount += nAmount;
		rs.MoveNext();
	}
	if (rptGroup)
	{
		rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
		if (rptGroup)
		{
			rptGroup->SetValue(_T("GroupName2"), _T("T\x1ED5ng ti\x1EC1n h\x1ED9 n\x1ED9p qu\x1EF9:"));
			tmpStr.Format(_T("%f"), nTempRAmount);
			rptGroup->SetValue(_T("ss6"), tmpStr);
			tmpStr.Format(_T("%f"), nTempPAmount);
			rptGroup->SetValue(_T("ss7"), tmpStr);
			nReceiptAmount += nTempRAmount;
			nPaymentAmount += nTempPAmount;
			nTempRAmount = 0;
			nTempPAmount = 0;			
		}
	}
	//Cac dieu kien loc duoc tach ra nhu sau:
	//I. Bao hiem
	//1. Tien mat
	//2. Thanh toan the
	//3. Chuyen khoan

	//II. Dich vu
	//1. Tien mat
	//2. Thanh toan the
	//3. Chuyen khoan

	//III. Bao hiem Yeu cau
	//1. Tien mat
	//2. Thanh toan the
	//3. Chuyen khoan

	//IV. Dich vu Yeu cau
	//1. Tien mat
	//2. Thanh toan the
	//3. Chuyen khoan

	if (!m_szPosterKey.IsEmpty())

		szWhere.Format(_T(" AND hfe_postedby = '%s'"), m_szPosterKey);


	if(m_szObjectKey == _T("BH"))
		{
			szWhere.AppendFormat(_T(" AND ho_type IN ('I','C') AND hfe_deptid not in ('TYC','PTTYC')"));
		}

	
	if(m_szObjectKey == _T("DV"))
		{
			szWhere.AppendFormat(_T(" AND ho_type IN ('S') AND hfe_deptid not in ('TYC','PTTYC')"));
		}

	if(m_szObjectKey == _T("QU"))
		{
			szWhere.AppendFormat(_T(" AND ho_type IN ('P','D') AND hfe_deptid not in ('TYC','PTTYC')"));
		}
	
	if(m_szObjectKey == _T("BHYC"))
		{
			szWhere.AppendFormat(_T(" AND ho_type IN ('I','C') AND hfe_deptid in ('TYC','PTTYC')"));
		}

	
	if(m_szObjectKey == _T("DVYC"))
		{
			szWhere.AppendFormat(_T(" AND ho_type IN ('S') AND hfe_deptid in ('TYC','PTTYC')"));
		}
	
	if(m_szObjectKey == _T("THYC"))
		{
			szWhere.AppendFormat(_T(" AND ho_type IN ('I','C','S') AND hfe_deptid in ('TYC','PTTYC')"));
		}

	if (m_bByATM)
		{
		szWhere.AppendFormat(_T(" AND HFE_PAYMENT_METHOD in ('ATM','TTD')"));
		}
	else if (m_bByMoneyTransfer)
		{
		szWhere.AppendFormat(_T(" AND HFE_PAYMENT_METHOD in ('CK')"));
		}
	else if
		(m_bByMoney)
	{
		szWhere.AppendFormat(_T(" AND HFE_PAYMENT_METHOD not in ('CK','ATM','TTD')"));
	}
	
	CString szOrderBy;
	if(m_szOrderByKey == _T("02"))
		szOrderBy.Format(_T(" staff, description "));
	else
		szOrderBy.Format(_T(" hfe_postedby, acct_date "));		
	
	szSQL.Format(_T(" SELECT *") \
	_T(" FROM") \
	_T("   (SELECT hfe_postedby , hfe_client_id, hfe_staff                      AS staff,") \
	_T("     hfe_cash_id                          AS cash_id,") \
	_T("     TO_CHAR(hfe_date,'DD/MM/YYYY') AS invoice_date,") \
	_T("     hfe_posteddate AS acct_date,") \
	_T("     CAST(hfe_docno AS NVARCHAR2(15))     AS receipt_no,") \
	_T("     CAST(' ' AS NVARCHAR2(15))           AS payment_no,") \
	_T("     trim(hp_surname") \
	_T("     ||' '") \
	_T("     ||hp_midname") \
	_T("     ||' '") \
	_T("     ||hp_firstname) AS description,") \
	_T("     hfe_payment     AS receipt_amount,") \
	_T("     0               AS payment_amount,") \
	_T("     1               AS cash_type") \
	_T("   FROM hms_fee_invoice_view2") \
	_T("   LEFT JOIN hms_doc")\
	_T("   ON(hfe_docno=hd_docno)") \
	_T("   LEFT JOIN hms_patient") \
	_T("   ON(hd_patientno= hp_patientno)") \
	_T("   LEFT JOIN hms_object") \
	_T("   ON (hfe_objectid = ho_id)") \
	_T("   WHERE hfe_invoicetype       IN('I','D')") \
	_T("   AND NVL(hfe_client_id,'XXX') ='QUY'") \
	_T("   AND hfe_payment              > 0") \
	_T("   AND hfe_posted               ='Y' %s") \
	_T("   UNION ALL") \
	_T("   SELECT hfe_postedby, hfe_client_id, hfe_staff,") \
	_T("     hfe_cash_id,") \
	_T("     TO_CHAR(hfe_date,'DD/MM/YYYY') AS invoice_date,") \
	_T("     hfe_posteddate,") \
	_T("     CAST(' ' AS NVARCHAR2(15)),") \
	_T("     CAST(hfe_docno AS NVARCHAR2(15)),") \
	_T("     trim(hp_surname") \
	_T("     ||' '") \
	_T("     ||hp_midname") \
	_T("     ||' '") \
	_T("     ||hp_firstname) AS pname,") \
	_T("     0,") \
	_T("     hfe_payment,") \
	_T("     1 AS cash_type") \
	_T("   FROM hms_fee_invoice_view2") \
	_T("   LEFT JOIN hms_doc")\
	_T("   ON(hfe_docno=hd_docno)")\
	_T("   LEFT JOIN hms_patient") \
	_T("   ON(hd_patientno=hp_patientno)") \
	_T("   LEFT JOIN hms_object") \
	_T("   ON (hfe_objectid = ho_id)") \
	_T("   WHERE hfe_invoicetype       IN('R')") \
	_T("   AND NVL(hfe_client_id,'XXX') ='QUY'") \
	_T("   AND hfe_payment              > 0") \
	_T("   AND hfe_posted               ='Y' %s") \
	_T("   ) tbl") \
	_T(" WHERE NVL(hfe_client_id,'XXX')='QUY' ") \
	_T(" AND trunc(acct_date) BETWEEN to_date('%s','YYYY-MM-DD') AND to_date('%s','YYYY-MM-DD')") \
	_T(" ORDER BY %s "), szWhere, szWhere, m_szFromDate.Left(10), m_szToDate.Left(10), szOrderBy);
		rs.ExecSQL(szSQL);
//_msg(_T("%s"), szSQL);	
	CString szUserID, szOldUserID;

	//Danh sach bn nop tien vao quy
	rptGroup = NULL;
	if (!rs.IsEOF())
	{
		rptGroup = rpt.AddDetail(rpt.GetGroupHeader(1));
		if (rptGroup)
			rptGroup->SetValue(_T("GroupName"), _T("\x44\x61nh s\xE1\x63h \x62\x1EC7nh nh\xE2n n\x1ED9p ti\x1EC1n v\xE0o qu\x1EF9"));
	}
	szOldUserID.Empty();
	CRecord rsx(&pMF->m_db);
	long nOldCashID = 0;

	CString szPostedBy, szOldPostedBy;
	while(!rs.IsEOF())
	{
		rs.GetValue(_T("staff"), szUserID);
		rs.GetValue(_T("cash_id"), nCashID);
		rs.GetValue(_T("hfe_postedby"), szPostedBy);
		if(szPostedBy != szOldPostedBy)
		{
			szOldPostedBy = szPostedBy;
			CReportSection* grp = rpt.GetGroupHeader(1);
			rptDetail = rpt.AddDetail(grp);
			tmpStr.Format(_T("Ng\x1B0\x1EDDi \x64uy\x1EC7t qu\x1EF9 [%s]"), szPostedBy);
			rptDetail->SetValue(_T("GroupName"), tmpStr);
		}

		if(m_szOrderByKey == _T("02"))
		{
			if(szOldUserID != szUserID || nCashID != nOldCashID)
			{
				if(nGrandAmount1 +nGrandAmount2 + nGrandAmount3 > 0)
				{
					rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
					if (rptGroup)
					{
						rptGroup->SetValue(_T("GroupName2"), _T("T\x1ED5ng:"));
						tmpStr.Format(_T("%f"), nGrandAmount1);
						rptGroup->SetValue(_T("ss6"), tmpStr);
						tmpStr.Format(_T("%f"), nGrandAmount2);
						rptGroup->SetValue(_T("ss7"), tmpStr);
					}
				}
				nGrandAmount1 = nGrandAmount2 = nGrandAmount3 =0;
				szOldUserID = szUserID;
				nOldCashID = nCashID;

				CReportSection* grp = rpt.GetGroupHeader(1);
				rptDetail = rpt.AddDetail(grp);
				
				CString szInvoiceNo;
				szInvoiceNo.Empty();
				
				if(nCashID > 0)
				{
					szSQL.Format(_T("SELECT fac_invoiceno FROM fa_cash WHERE fac_cash_id = %ld"), nCashID);
					rsx.ExecSQL(szSQL);
					rsx.GetValue(_T("fac_invoiceno"), szInvoiceNo);
				}
				tmpStr.Format(_T("%s - Ng\x1B0\x1EDDi \x64uy\x1EC7t[%s]"), szInvoiceNo, pMF->GetUserName(szUserID));
				rptDetail->SetValue(_T("GroupName"), tmpStr);
			}
		}
		rptDetail = rpt.AddDetail();
		rs.GetValue(_T("acct_date"), tmpStr);
		rptDetail->SetValue(_T("1"), tmpStr);
		rs.GetValue(_T("invoice_date"), tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);
		rptDetail->SetValue(_T("3"), rs.GetValue(_T("receipt_no")));
		rptDetail->SetValue(_T("4"), rs.GetValue(_T("payment_no")));
		rptDetail->SetValue(_T("5"), rs.GetValue(_T("Description")));
		rptDetail->SetValue(_T("6"), rs.GetValue(_T("receipt_amount")));
		rptDetail->SetValue(_T("7"), rs.GetValue(_T("payment_amount")));

		rs.GetValue(_T("receipt_amount"), nAmount);
		nTempRAmount += nAmount;
		nGrandAmount1 += nAmount;
		rs.GetValue(_T("payment_amount"), nAmount);
		nTempPAmount += nAmount;
		nGrandAmount2 += nAmount;

		rs.MoveNext();
	}

	if(nGrandAmount1 +nGrandAmount2 + nGrandAmount3 > 0)
	{
		rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
		if (rptGroup)
		{
			rptGroup->SetValue(_T("GroupName2"), _T("T\x1ED5ng:"));
			tmpStr.Format(_T("%f"), nGrandAmount1);
			rptGroup->SetValue(_T("ss6"), tmpStr);
			tmpStr.Format(_T("%f"), nGrandAmount2);
			rptGroup->SetValue(_T("ss7"), tmpStr);
		}
	}

	rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
	if (rptGroup)
	{
			rptGroup->SetValue(_T("GroupName2"), _T("T\x1ED5ng ti\x1EC1n \x62\x1EC7nh nh\xE2n n\x1ED9p qu\x1EF9:"));
			tmpStr.Format(_T("%f"), nTempRAmount);
			rptGroup->SetValue(_T("ss6"), tmpStr);
			tmpStr.Format(_T("%f"), nTempPAmount);
			rptGroup->SetValue(_T("ss7"), tmpStr);
			nReceiptAmount += nTempRAmount;
			nPaymentAmount += nTempPAmount;
			nTempRAmount = 0;
			nTempPAmount = 0;
	}

	

	if (nReceiptAmount + nPaymentAmount > 0)
	{
		rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
		if (rptGroup)
		{
			rptGroup->SetValue(_T("GroupName2"), _T("T\x1ED5ng \x63\x1ED9ng:"));
			tmpStr.Format(_T("%f"), nReceiptAmount);
			rptGroup->SetValue(_T("ss6"), tmpStr);
			tmpStr.Format(_T("%f"), nPaymentAmount);
			rptGroup->SetValue(_T("ss7"), tmpStr);
		}
	}
	szPrintDate = pMF->GetSysDateTime();
	
	tmpStr.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), szPrintDate.Mid(11, 5), szPrintDate.Mid(8, 2), szPrintDate.Mid(5, 2), szPrintDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), tmpStr);
	tmpStr = pMF->GetUserName(pMF->GetCurrentUser());
	rpt.GetReportFooter()->SetValue(_T("Username"), tmpStr);
	EndWaitCursor();
	rpt.PrintPreview();
	
}
void CCA_CashBook::OnAccountListDblClick(){
	
}
 
void CCA_CashBook::OnAccountListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}
 
int CCA_CashBook::OnAccountListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	 return 0;
}
 
long CCA_CashBook::OnAccountListLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndAccountList.BeginLoad(); 
	m_wndAccountList.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("Select ada_account_id as Accountid, ada_vnname as Accountname, ada_grade as grade From ad_account Where ada_parent_id = '111' Order by ada_account_id"));
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndAccountList.AddItems(
			rs.GetValue(_T("AccountID")), 
			rs.GetValue(_T("AccountName")),
			rs.GetValue(_T("grade")), NULL);
		rs.MoveNext();
	}
	m_wndAccountList.EndLoad(); 
	return nCount;
}


CString CCA_CashBook::GetQueryString()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szSQL, szWhere, szAccounts;
	UpdateData(TRUE);

	
	for (int i = 0; i < m_wndAccountList.GetItemCount();i++)
	{
		if (m_wndAccountList.GetCheck(i))
		{
			m_wndAccountList.SetCurSel(i);
			if (!szAccounts.IsEmpty())
				szAccounts += _T(", ");
			szAccounts.AppendFormat(_T("'%s'"), m_wndAccountList.GetItemText(i, 0));
		}
	}
	//Cac dieu kien loc duoc tach ra nhu sau:
	//I. Bao hiem
	//1. Tien mat
	//2. Thanh toan the
	//3. Chuyen khoan

	//II. Dich vu
	//1. Tien mat
	//2. Thanh toan the
	//3. Chuyen khoan

	//III. Bao hiem Yeu cau
	//1. Tien mat
	//2. Thanh toan the
	//3. Chuyen khoan

	//IV. Dich vu Yeu cau
	//1. Tien mat
	//2. Thanh toan the
	//3. Chuyen khoan

	if (!m_szPosterKey.IsEmpty())
		szWhere.Format(_T(" AND fac_postedby = '%s'"), m_szPosterKey);

	if(m_szObjectKey == _T("BH"))
		{
			szWhere.AppendFormat(_T(" AND fac_cashbook_id in ('BH-NT','BH-NG','BHQUAN-NT', 'BHQUAN-NG','BH-NGAB','BH-NTAB','THE-BH','CK-BH') AND fac_cashbook_id not in ('BHYC','BH-PTTYC')"));		
		}

	if(m_szObjectKey == _T("DV"))
		{
			szWhere.AppendFormat(_T(" AND fac_cashbook_id in ('DV-AB','DV','THE-DV','CK-DV') AND fac_cashbook_id not in ('DVYC','DV-PTTYC')"));	
		}
	if(m_szObjectKey == _T("QU"))
		{
			szWhere.AppendFormat(_T(" AND fac_cashbook_id in ('QUAN-NG', 'QUAN-NT') AND fac_cashbook_id not in ('DVYC','DV-PTTYC') AND substr(fac_invoiceno, -5, 5) not in ('LUONG')"));	
		}

	if(m_szObjectKey == _T("BHYC"))
		{
			szWhere.AppendFormat(_T(" AND fac_cashbook_id in ('BHYC','BH-PTTYC','THE-BH-YC','THE-BH-PTTYC', 'CK-BH-YC', 'CK-BH-PTTYC')"));		
		}

	if(m_szObjectKey == _T("DVYC"))
		{
			szWhere.AppendFormat(_T(" AND fac_cashbook_id in ('DVYC','DV-PTTYC','THE-DV-YC','CK-DV-YC','THE-DV-PTTYC','CK-DV-PTTYC')"));	
		}

	if(m_szObjectKey == _T("DVCLC"))
		{
			szWhere.AppendFormat(_T(" AND fac_cashbook_id in ('DVCLC', 'THE-DVCLC', 'CK-DVCLC', 'DVCLCA16', 'THE-DV-CLCA16', 'CK-DV-CLCA16') "));	
		}

	if(m_szObjectKey == _T("THYC"))
		{
			szWhere.AppendFormat(_T(" AND fac_cashbook_id in ('DVYC','DV-PTTYC','THE-DV-YC','CK-DV-YC','THE-DV-PTTYC','CK-DV-PTTYC', 'BHYC','BH-PTTYC','THE-BH-YC','THE-BH-PTTYC', 'CK-BH-YC', 'CK-BH-PTTYC')"));	
		}

	if(m_szObjectKey == _T("LUONG"))
		{
			szWhere.AppendFormat(_T(" AND substr(fac_invoiceno, -5, 5) in ('LUONG') AND fac_cashbook_id not in ('DVYC','DV-PTTYC')"));	
		}

	if (m_bByATM)
		{
		szWhere.AppendFormat(_T(" AND (substr(fac_cashbook_id,1,3) in ('THE') or fac_cashbook_id = 'CARD')"));
		}
	else if (m_bByMoneyTransfer)
		{
		szWhere.AppendFormat(_T(" AND (substr(fac_cashbook_id,1,2) in ('CK') or fac_cashbook_id = 'BANK')"));
		}
	else if
		(m_bByMoney)
		{
		szWhere.AppendFormat(_T(" AND ((substr(fac_cashbook_id,1,3) not in ('THE') AND substr(fac_cashbook_id,1,2) not in ('CK') and fac_cashbook_id not in ('BANK', 'CARD', 'QR') ) or fac_cashbook_id = 'CASH' )"));
		}
	
	
	szSQL.Format(_T(" SELECT fac_cash_id AS cash_id,") \
					_T("   TO_CHAR(fac_invoicedate,'DD/MM/YYYY')   AS invoice_date,") \
					_T("   TO_CHAR(fac_posteddate,'DD/MM/YYYY')   AS acct_date,") \
					_T("   CASE") \
					_T("     WHEN fac_invoicetype='R'") \
					_T("     THEN fac_invoiceno") \
					_T("     ELSE CAST(' ' AS NVARCHAR2(15))") \
					_T("   END AS receipt_no,") \
					_T("   CASE") \
					_T("     WHEN fac_invoicetype='P'") \
					_T("     THEN fac_invoiceno") \
					_T("     ELSE CAST(' ' AS NVARCHAR2(15))") \
					_T("   END             AS payment_no,") \
					_T("   fac_description AS description,") \
					_T("   CASE") \
					_T("     WHEN fac_invoicetype='R'") \
					_T("     THEN fac_amount") \
					_T("     ELSE 0") \
					_T("   END AS receipt_amount,") \
					_T("   CASE") \
					_T("     WHEN fac_invoicetype='P'") \
					_T("     THEN fac_amount") \
					_T("     ELSE 0") \
					_T("   END              AS payment_amount,") \
					_T("   0                AS cash_type,") \
					_T("   fac_org_document AS doctype") \
					_T(" FROM fa_cash") \
					_T(" WHERE fac_posted ='Y' and NVL(fac_org_document, 'XXX') <> 'QUY' ") \
					_T(" AND TRUNC(fac_posteddate) BETWEEN to_date('%s','YYYY-MM-DD') AND to_date('%s','YYYY-MM-DD') %s") \
					_T(" ORDER BY fac_posteddate") , m_szFromDate.Left(10), m_szToDate.Left(10), szWhere);
					return szSQL;
					
					}