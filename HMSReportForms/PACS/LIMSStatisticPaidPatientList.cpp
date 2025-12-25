#include "stdafx.h"
#include "LIMSStatisticPaidPatientList.h"
#include "HMSMainFrame.h"
#include "Excel.h"
#include "ReportDocument.h"

/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CLIMSStatisticPaidPatientList *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CLIMSStatisticPaidPatientList *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CLIMSStatisticPaidPatientList *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CLIMSStatisticPaidPatientList *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CLIMSStatisticPaidPatientList *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CLIMSStatisticPaidPatientList *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CLIMSStatisticPaidPatientList *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CLIMSStatisticPaidPatientList *)pWnd)->OnToDateCheckValue();
} 
static long _OnGroupLoadDataFnc(CWnd *pWnd){
	return ((CLIMSStatisticPaidPatientList*)pWnd)->OnGroupLoadData();
} 
static void _OnGroupDblClickFnc(CWnd *pWnd){
	((CLIMSStatisticPaidPatientList*)pWnd)->OnGroupDblClick();
} 
static void _OnGroupSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CLIMSStatisticPaidPatientList*)pWnd)->OnGroupSelectChange(nOldItem, nNewItem);
} 
static int _OnGroupDeleteItemFnc(CWnd *pWnd){
	 return ((CLIMSStatisticPaidPatientList*)pWnd)->OnGroupDeleteItem();
} 
static long _OnItemLoadDataFnc(CWnd *pWnd){
	return ((CLIMSStatisticPaidPatientList*)pWnd)->OnItemLoadData();
} 
static void _OnItemDblClickFnc(CWnd *pWnd){
	((CLIMSStatisticPaidPatientList*)pWnd)->OnItemDblClick();
} 
static void _OnItemSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CLIMSStatisticPaidPatientList*)pWnd)->OnItemSelectChange(nOldItem, nNewItem);
} 
static int _OnItemDeleteItemFnc(CWnd *pWnd){
	 return ((CLIMSStatisticPaidPatientList*)pWnd)->OnItemDeleteItem();
} 
static void _OnClerkSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CLIMSStatisticPaidPatientList* )pWnd)->OnClerkSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnClerkSelendokFnc(CWnd *pWnd){
	((CLIMSStatisticPaidPatientList *)pWnd)->OnClerkSelendok();
}
/*static void _OnClerkSetfocusFnc(CWnd *pWnd){
	((CLIMSStatisticPaidPatientList *)pWnd)->OnClerkKillfocus();
}*/
/*static void _OnClerkKillfocusFnc(CWnd *pWnd){
	((CLIMSStatisticPaidPatientList *)pWnd)->OnClerkKillfocus();
}*/
static long _OnClerkLoadDataFnc(CWnd *pWnd){
	return ((CLIMSStatisticPaidPatientList *)pWnd)->OnClerkLoadData();
}
/*static void _OnClerkAddNewFnc(CWnd *pWnd){
	((CLIMSStatisticPaidPatientList *)pWnd)->OnClerkAddNew();
}*/
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	CLIMSStatisticPaidPatientList *pVw = (CLIMSStatisticPaidPatientList *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CLIMSStatisticPaidPatientList *pVw = (CLIMSStatisticPaidPatientList *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnLockedSelectFnc(CWnd *pWnd){
	 ((CLIMSStatisticPaidPatientList*)pWnd)->OnLockedSelect();
}
static int _OnAddLIMSStatisticPaidPatientListFnc(CWnd *pWnd){
	 return ((CLIMSStatisticPaidPatientList*)pWnd)->OnAddLIMSStatisticPaidPatientList();
} 
static int _OnEditLIMSStatisticPaidPatientListFnc(CWnd *pWnd){
	 return ((CLIMSStatisticPaidPatientList*)pWnd)->OnEditLIMSStatisticPaidPatientList();
} 
static int _OnDeleteLIMSStatisticPaidPatientListFnc(CWnd *pWnd){
	 return ((CLIMSStatisticPaidPatientList*)pWnd)->OnDeleteLIMSStatisticPaidPatientList();
} 
static int _OnSaveLIMSStatisticPaidPatientListFnc(CWnd *pWnd){
	 return ((CLIMSStatisticPaidPatientList*)pWnd)->OnSaveLIMSStatisticPaidPatientList();
} 
static int _OnCancelLIMSStatisticPaidPatientListFnc(CWnd *pWnd){
	 return ((CLIMSStatisticPaidPatientList*)pWnd)->OnCancelLIMSStatisticPaidPatientList();
} 
CLIMSStatisticPaidPatientList::CLIMSStatisticPaidPatientList(CWnd *pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CLIMSStatisticPaidPatientList::~CLIMSStatisticPaidPatientList(){
}
void CLIMSStatisticPaidPatientList::OnCreateComponents(){
	m_wndTestPatientList.Create(this, _T("Statistic Paid Patient List"), 5, 5, 430, 510);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 215, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 220, 30, 300, 55);
	m_wndToDate.Create(this,305, 30, 425, 55); 
	m_wndGroup.Create(this,10, 60, 425, 250); 
	m_wndItem.Create(this,10, 255, 425, 445); 
	m_wndClerkLabel.Create(this, _T("Clerk"), 10, 450, 90, 475);
	m_wndClerk.Create(this,95, 450, 425, 475); 
	m_wndPrintPreview.Create(this, _T("&Print Preview"), 205, 515, 315, 540);
	m_wndExport.Create(this, _T("&Export"), 320, 515, 430, 540);
	//m_wndLocked.Create(this, _T("Locked"), 315, 480, 425, 505);

}
void CLIMSStatisticPaidPatientList::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetCheckValue(true);
	m_wndClerk.SetCheckValue(true);
	m_wndClerk.LimitText(1024);

	m_wndGroup.InsertColumn(0, _T("ID"), CFMT_TEXT, 70);
	m_wndGroup.InsertColumn(1, _T("Name"), CFMT_TEXT, 280);
	m_wndGroup.SetCheckBox(TRUE);

	m_wndItem.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndItem.InsertColumn(1, _T("Name"), CFMT_TEXT, 280);
	m_wndItem.SetCheckBox(TRUE);

	m_wndClerk.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndClerk.InsertColumn(1, _T("Name"), CFMT_TEXT, 270);

}
void CLIMSStatisticPaidPatientList::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndGroup.SetEvent(WE_SELCHANGE, _OnGroupSelectChangeFnc);
	m_wndGroup.SetEvent(WE_LOADDATA, _OnGroupLoadDataFnc);
	m_wndGroup.SetEvent(WE_DBLCLICK, _OnGroupDblClickFnc);
	m_wndItem.SetEvent(WE_SELCHANGE, _OnItemSelectChangeFnc);
	m_wndItem.SetEvent(WE_LOADDATA, _OnItemLoadDataFnc);
	m_wndItem.SetEvent(WE_DBLCLICK, _OnItemDblClickFnc);
	m_wndClerk.SetEvent(WE_SELENDOK, _OnClerkSelendokFnc);
	//m_wndClerk.SetEvent(WE_SETFOCUS, _OnClerkSetfocusFnc);
	//m_wndClerk.SetEvent(WE_KILLFOCUS, _OnClerkKillfocusFnc);
	m_wndClerk.SetEvent(WE_SELCHANGE, _OnClerkSelectChangeFnc);
	m_wndClerk.SetEvent(WE_LOADDATA, _OnClerkLoadDataFnc);
	//m_wndClerk.SetEvent(WE_ADDNEW, _OnClerkAddNewFnc);
	m_wndPrintPreview.SetEvent(WE_CLICK, _OnPrintPreviewSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndLocked.SetEvent(WE_CLICK, _OnLockedSelectFnc);

	OnGroupLoadData();

	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate += _T("23:59");
	
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T(" SELECT sup_permid perm_id FROM sys_userperm WHERE sup_userid = '%s' AND sup_moduleid = '%s'") \
				 _T(" AND substr(sup_permid, 1, 2) = 'B1'"), pMF->GetCurrentUser(), pMF->GetModuleID());
	rs.ExecSQL(szSQL);
	while (!rs.IsEOF())
	{
		if (!m_szPermGroupID.IsEmpty())
			m_szPermGroupID += _T(", ");
		m_szPermGroupID.AppendFormat(_T("'%s'"), rs.GetValue(_T("perm_id")));
		rs.MoveNext();
	}
	UpdateData(false);

}
void CLIMSStatisticPaidPatientList::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndClerk.GetDlgCtrlID(), m_szClerkKey);
	//DDX_Check(pDX, m_wndLocked.GetDlgCtrlID(), m_bLocked);

}
void CLIMSStatisticPaidPatientList::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CLIMSStatisticPaidPatientList::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CLIMSStatisticPaidPatientList::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szClerkKey.Empty();
	m_bLocked=FALSE;

}
int CLIMSStatisticPaidPatientList::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
 		CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
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
/*void CLIMSStatisticPaidPatientList::OnFromDateChange(){
	
} */
/*void CLIMSStatisticPaidPatientList::OnFromDateSetfocus(){
	
} */
/*void CLIMSStatisticPaidPatientList::OnFromDateKillfocus(){
	
} */
int CLIMSStatisticPaidPatientList::OnFromDateCheckValue(){
	return 0;
} 
/*void CLIMSStatisticPaidPatientList::OnToDateChange(){
	
} */
/*void CLIMSStatisticPaidPatientList::OnToDateSetfocus(){
	
} */
/*void CLIMSStatisticPaidPatientList::OnToDateKillfocus(){
	
} */
int CLIMSStatisticPaidPatientList::OnToDateCheckValue(){
	return 0;
} 
void CLIMSStatisticPaidPatientList::OnGroupDblClick(){
	
} 
void CLIMSStatisticPaidPatientList::OnGroupSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnItemLoadData();

} 
int CLIMSStatisticPaidPatientList::OnGroupDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CLIMSStatisticPaidPatientList::OnGroupLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if (!m_szPermGroupID.IsEmpty())
		szWhere.AppendFormat(_T(" AND hfg_id IN (%s)"), m_szPermGroupID);
	m_wndGroup.BeginLoad();
	int nCount = 0;

	szSQL.Format(_T("SELECT hfg_id as id, hfg_name as description FROM hms_fee_group WHERE substr(hfg_id, 1, 2) = 'B1' %s") \
				_T("AND hfg_active = 'Y' ORDER BY hfg_id"), szWhere);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndGroup.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	m_wndGroup.EndLoad();
	return nCount;
}
void CLIMSStatisticPaidPatientList::OnItemDblClick(){
	
} 
void CLIMSStatisticPaidPatientList::OnItemSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CLIMSStatisticPaidPatientList::OnItemDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CLIMSStatisticPaidPatientList::OnItemLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szGroups;
	szWhere.Empty();
	
	for (int i = 0; i < m_wndGroup.GetItemCount(); i++)
	{
		if (m_wndGroup.GetCheck(i))
		{
			if (!szGroups.IsEmpty())
				szGroups += _T(",");
			szGroups.AppendFormat(_T("'%s'"), m_wndGroup.GetItemText(i, 0));
		}
	}
	m_wndItem.BeginLoad();

	szSQL.Format(_T("SELECT hfl_feeid as id, hfl_name as description ") \
		         _T("FROM hms_fee_list WHERE hfl_groupid IN (%s) AND hfl_active = 'Y' AND hfl_servprice > 0"), szGroups);

	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndItem.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	m_wndItem.EndLoad();
	return nCount;
}
void CLIMSStatisticPaidPatientList::OnClerkSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CLIMSStatisticPaidPatientList::OnClerkSelendok(){
	 
}
/*void CLIMSStatisticPaidPatientList::OnClerkSetfocus(){
	
}*/
/*void CLIMSStatisticPaidPatientList::OnClerkKillfocus(){
	
}*/
long CLIMSStatisticPaidPatientList::OnClerkLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndClerk.IsSearchKey() && !m_szClerkKey.IsEmpty())
	{
		szWhere.Format(_T(" and lower(su_userid)=lower('%s') "), m_szClerkKey);
	};
	m_wndClerk.DeleteAllItems(); 
	szSQL.Format(_T("SELECT su_userid as userid, su_name as name FROM sys_user WHERE su_groupid in('A', 'F') %s ORDER BY su_userid"), szWhere);
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndClerk.AddItems(
			rs.GetValue(_T("userid")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CLIMSStatisticPaidPatientList::OnClerkAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CLIMSStatisticPaidPatientList::OnPrintPreviewSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CReport rpt;
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szSysDate, szOldLine, szNewLine, szTemp;
	int nIdx = 0;
	double nAmount = 0;
	double nGroupTotal[12];
	double nTotal[12];

	szSQL = GetQueryString();
	BeginWaitCursor();
	int nCount = rs.ExecSQL(szSQL);

	if (nCount <= 0)
	{
		ShowMessage(150, MB_ICONSTOP);
		return;
	}

	if (!rpt.Init(_T("Reports/HMS/HF_BANGTHONGKEDSBNNOPTIEN.RPT")))
		return;

	rpt.GetReportHeader()->SetValue(_T("HealthService"), pMF->m_CompanyInfo.sc_pname);
	rpt.GetReportHeader()->SetValue(_T("HospitalName"), pMF->m_CompanyInfo.sc_name);
	tmpStr.Format(rpt.GetReportHeader()->GetValue(_T("ReportDate")),
		          CDateTime::Convert(m_szFromDate, yyyymmdd | hhmm, ddmmyyyy | hhmm),
				  CDateTime::Convert(m_szToDate, yyyymmdd | hhmm, ddmmyyyy | hhmm));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), tmpStr);

	CReportSection* rptDetail = NULL;
	for(int i = 0; i < 12; i++)
	{
		nGroupTotal[i] = 0;
		nTotal[i] = 0;
	}
	while (!rs.IsEOF())
	{
		rs.GetValue(_T("receiptdate"), tmpStr);
		szNewLine = CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy);
		if (!szNewLine.IsEmpty() && szNewLine != szOldLine)
		{
			if (nGroupTotal[6] > 0)
			{
				rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
				rptDetail->SetValue(_T("TotalGroup"), _T("\x43\x1ED9ng ng\xE0y"));
				for(int i = 4; i < 10; i++)
				{
					FormatCurrency(nGroupTotal[i], tmpStr);
					szTemp.Format(_T("s%d"), i);
					rptDetail->SetValue(szTemp, tmpStr);
					nTotal[i] += nGroupTotal[i];
					nGroupTotal[i] = 0;
				}
			}
			rptDetail = rpt.AddDetail(rpt.GetGroupHeader(0));
			rptDetail->SetValue(_T("GroupName"), szNewLine);
			szOldLine = szNewLine;
		}
		rptDetail = rpt.AddDetail();

		nIdx++;
		tmpStr.Format(_T("%d"), nIdx);
		rptDetail->SetValue(_T("1"), tmpStr);

		rs.GetValue(_T("pname"), tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);

		//tmpStr = CDate::Convert(rs.GetValue(_T("receiptdate")), yyyymmdd, ddmmyyyy);
		//rptDetail->SetValue(_T("3"), tmpStr);

		rs.GetValue(_T("docno"), tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);

		rs.GetValue(_T("thungoai"), nAmount);
		nGroupTotal[4] += nAmount;
		FormatCurrency(nAmount, tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);

		rs.GetValue(_T("thunoi"), nAmount);
		nGroupTotal[5] += nAmount;
		FormatCurrency(nAmount, tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);

		rs.GetValue(_T("tongthu"), nAmount);
		nGroupTotal[6] += nAmount;
		FormatCurrency(nAmount, tmpStr);
		rptDetail->SetValue(_T("6"), tmpStr);

		rs.GetValue(_T("trangoai"), nAmount);
		nGroupTotal[7] += nAmount;
		FormatCurrency(nAmount, tmpStr);
		rptDetail->SetValue(_T("7"), tmpStr);

		//rs.GetValue(_T("tranoi"), nAmount);
		//nGroupTotal[7] += nAmount;
		FormatCurrency(0, tmpStr);
		rptDetail->SetValue(_T("8"), tmpStr);

		rs.GetValue(_T("trangoai"), nAmount);
		nGroupTotal[9] += nAmount;
		FormatCurrency(nAmount, tmpStr);
		rptDetail->SetValue(_T("9"), tmpStr);

		rs.MoveNext();
	}

	if (nGroupTotal[6] > 0)
	{
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
		//TranslateString(_T("\x43\x1ED9ng kho\x61"), tmpStr);
		rptDetail->SetValue(_T("TotalGroup"), _T("\x43\x1ED9ng ng\xE0y"));
		for(int i = 4; i < 10; i++)
		{
			FormatCurrency(nGroupTotal[i], tmpStr);
			szTemp.Format(_T("s%d"), i);
			rptDetail->SetValue(szTemp, tmpStr);
			nTotal[i] += nGroupTotal[i];
			nGroupTotal[i] = 0;
		}
	}

	if (nTotal[6] > 0)
	{
		for(int i = 4; i < 10; i++)
		{
			FormatCurrency(nTotal[i], tmpStr);
			szTemp.Format(_T("ss%d"), i);
			rpt.GetReportFooter()->SetValue(szTemp, tmpStr);
		}
	}
	//rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
	//FormatCurrency(nTotal, tmpStr);
	//rptDetail->SetValue(_T("s5"), tmpStr);
	FormatCurrency(nTotal[6], tmpStr);
	rpt.GetReportFooter()->SetValue(_T("TotalOut"), tmpStr);

	FormatCurrency(nTotal[9], tmpStr);
	rpt.GetReportFooter()->SetValue(_T("TotalIn"), tmpStr);

	FormatCurrency(nTotal[6]+nTotal[9], tmpStr);
	rpt.GetReportFooter()->SetValue(_T("TotalAll"), tmpStr);

	szSysDate = pMF->GetSysDate();
	tmpStr.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),
		          szSysDate.Right(2), szSysDate.Mid(5, 2), szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), tmpStr);
	EndWaitCursor();
	rpt.PrintPreview();
} 
void CLIMSStatisticPaidPatientList::OnExportSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
	void CLIMSStatisticPaidPatientList::OnLockedSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
int CLIMSStatisticPaidPatientList::OnAddLIMSStatisticPaidPatientList(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CLIMSStatisticPaidPatientList::OnEditLIMSStatisticPaidPatientList(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CLIMSStatisticPaidPatientList::OnDeleteLIMSStatisticPaidPatientList(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
 	szSQL.Format(_T("DELETE FROM  WHERE  AND") );
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
 		SetMode(VM_NONE);
 		OnCancelLIMSStatisticPaidPatientList();
 	}
	return 0;
}
int CLIMSStatisticPaidPatientList::OnSaveLIMSStatisticPaidPatientList(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
 		//szSQL = m_tblTbl.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
 		szWhere.Format(_T(" WHERE"));
 		//szSQL = m_tblTbl.GetUpdateSQL(_T("createdby,createddate"));
 		szSQL += szWhere;
 	}
 _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
 		//OnLIMSStatisticPaidPatientListListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CLIMSStatisticPaidPatientList::OnCancelLIMSStatisticPaidPatientList(){
 	if(GetMode() == VM_EDIT)
 	{
 		SetMode(VM_VIEW);
 	} 
 	else 
 	{
 		SetMode(VM_NONE);
 	} 
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
 	return 0;
} 
int CLIMSStatisticPaidPatientList::OnLIMSStatisticPaidPatientListListLoadData(){
	return 0;
}

CString CLIMSStatisticPaidPatientList::GetQueryString()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
	CString szSQL, szWhere, szLock, szWDept, sGroups, sItems, szWGroup;
	szWhere.Empty();
	
	if (!m_szClerkKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND staff='%s' "), m_szClerkKey);

	for (int i = 0; i < m_wndGroup.GetItemCount(); i++)
	{
		if (m_wndGroup.GetCheck(i))
		{
			if (!sGroups.IsEmpty())
				sGroups += _T(",");
			sGroups.AppendFormat(_T("'%s'"), m_wndGroup.GetItemText(i, 0));
		}
	}
	if(!sGroups.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and feegroup IN (%s)"), sGroups);
		szWGroup.AppendFormat(_T(" and fe.hfe_group IN (%s)"), sGroups);
	}else
	{
		szWhere.AppendFormat(_T(" and feegroup IN (select hfg_id from hms_fee_group where substr(hfg_id, 1, 2) IN ('B1','B2','B3')) "));
		szWGroup.AppendFormat(_T(" and fe.hfe_group IN (select hfg_id from hms_fee_group where substr(hfg_id, 1, 2) IN ('B1','B2','B3'))"));
	}

	for (int i = 0; i < m_wndItem.GetItemCount(); i++)
	{
		if (m_wndItem.GetCheck(i))
		{
			if (!sItems.IsEmpty())
				sItems += _T(",");
			sItems.AppendFormat(_T("'%s'"), m_wndItem.GetItemText(i, 0));
		}
	}
	if (!sItems.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND itemid IN (%s) "), sItems);
		szWGroup.AppendFormat(_T(" and fe.hfe_itemid IN (%s)"), sItems);
	}

	if (m_bLocked)
	{
		szWhere.AppendFormat(_T(" AND lockstt='Y' "));
		szWhere.AppendFormat(_T(" AND receiptdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND  TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') "),
			                 m_szFromDate, m_szToDate);
	}
	else
	{
		szWhere.AppendFormat(_T(" AND receiptdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND  TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') "),
			                 m_szFromDate, m_szToDate);
	}

	szSQL.Format(_T("SELECT deptid, ") \
				_T("       docno, ") \
				_T("       pname, ") \
				_T("       receiptdate, ") \
				_T("       Sum(thungoai) AS thungoai, ") \
				_T("       Sum(thunoi) AS thunoi, ") \
				_T("       Sum(thunoi + thungoai) AS tongthu, ") \
				_T("       Sum(trangoai) AS trangoai, ") \
				_T("       Sum(tranoi) AS tranoi ") \
				_T("FROM   (SELECT    fi.hfe_deptid AS deptid, ") \
				_T("                  fi.hfe_docno AS docno, ") \
				_T("                  Get_patientname(fi.hfe_docno) AS pname, ") \
				_T("                  fi.hfe_status AS status, ") \
				_T("                  fi.hfe_objectid AS obj, ") \
				_T("                  fe.hfe_group AS feegroup, ") \
				_T("                  fe.hfe_itemid AS itemid, ") \
				_T("                  fi.hfe_locked AS lockstt, ") \
				_T("                  fi.hfe_staff AS staff, ") \
				_T("                  fac_posteddate AS receiptdate, ") \
				_T("                  CASE WHEN fi.hfe_class = 'I' ") \
				_T("                      %s THEN fe.hfe_patpaid ") \
				_T("                  ELSE 0 ") \
				_T("                  END AS thungoai, ") \
				_T("                  CASE WHEN fi.hfe_class IN ( 'E', 'X' ) THEN fe.hfe_patpaid ") \
				_T("                  ELSE 0 ") \
				_T("                  END AS thunoi, ") \
				_T("                  CASE WHEN fe.hfe_status = 'R' THEN fe.hfe_cost ") \
				_T("                  ELSE 0 ") \
				_T("                  END AS trangoai, ") \
				_T("                  0 AS tranoi ") \
				_T("        FROM      hms_fee_invoice fi ") \
				_T("        LEFT JOIN fa_cash ON( fi.hfe_cash_id = fac_cash_id ) ") \
				_T("        LEFT JOIN hms_fee fe ON ( fe.hfe_docno = fi.hfe_docno ") \
				_T("                              AND fe.hfe_invoiceno = fi.hfe_invoiceno ) ") \
				_T("        UNION ALL ") \
				_T("        SELECT    fe.hfe_deptid AS deptid, ") \
				_T("                  fe.hfe_docno AS docno, ") \
				_T("                  Get_patientname(fe.hfe_docno) AS pname, ") \
				_T("                  fe.hfe_status AS status, ") \
				_T("                  re.hfe_objectid AS obj, ") \
				_T("                  fe.hfe_group AS feegroup, ") \
				_T("                  fe.hfe_itemid AS itemid, ") \
				_T("                  re.hfe_locked AS lockstt, ") \
				_T("                  re.hfe_staff AS staff, ") \
				_T("                  fac_posteddate AS receiptdate, ") \
				_T("                  0 thungoai, ") \
				_T("                  0 thunoi, ") \
				_T("                  CASE WHEN fe.hfe_status = 'R' ") \
				_T("                       %s THEN fe.hfe_cost ") \
				_T("                  ELSE 0 ") \
				_T("                  END AS trangoai, ") \
				_T("                  CASE WHEN fe.hfe_status = 'R' ") \
				_T("                       AND fe.hfe_class = 'E' THEN re.hfe_amount ") \
				_T("                  ELSE 0 ") \
				_T("                  END AS tranoi ") \
				_T("        FROM      hms_fee fe ") \
				_T("        LEFT JOIN hms_fee_refund re ON ( re.hfe_docno = fe.hfe_docno ") \
				_T("                                     AND re.hfe_refidx = fe.hfe_invoiceno ) ") \
				_T("        LEFT JOIN fa_cash ON( re.hfe_cash_id = fac_cash_id )) ") \
				_T("WHERE  status = 'P' ") \
				_T("       AND obj = '7' ") \
				_T("       %s ") \
				_T("GROUP  BY deptid, ") \
				_T("          docno, ") \
				_T("          pname, ") \
				_T("          receiptdate ") \
				_T("HAVING Sum(thungoai) > 0 ") \
				_T("        OR Sum(thunoi) > 0 ") \
				_T("        OR Sum(trangoai) > 0 ") \
				_T("ORDER  BY receiptdate, ") \
				_T("          deptid, ") \
				_T("          docno, ") \
				_T("          pname "), szWGroup, szWGroup, szWhere);
	_fmsg(_T("%s"), szSQL);
	return szSQL;
}