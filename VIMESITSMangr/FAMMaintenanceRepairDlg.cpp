#include "FAMMaintenanceRepairDlg.h"
#include "MainFrm.h"
#include "ReportDocument.h"
/*static void _OnOrderNoChangeFnc(CWnd *pWnd){
	((CFAMMaintenanceRepairDlg *)pWnd)->OnOrderNoChange();
} */
/*static void _OnOrderNoSetfocusFnc(CWnd *pWnd){
	((CFAMMaintenanceRepairDlg *)pWnd)->OnOrderNoSetfocus();} */ 
/*static void _OnOrderNoKillfocusFnc(CWnd *pWnd){
	((CFAMMaintenanceRepairDlg *)pWnd)->OnOrderNoKillfocus();
} */
static int _OnOrderNoCheckValueFnc(CWnd *pWnd){
	return ((CFAMMaintenanceRepairDlg *)pWnd)->OnOrderNoCheckValue();
} 
/*static void _OnOrderDateChangeFnc(CWnd *pWnd){
	((CFAMMaintenanceRepairDlg *)pWnd)->OnOrderDateChange();
} */
/*static void _OnOrderDateSetfocusFnc(CWnd *pWnd){
	((CFAMMaintenanceRepairDlg *)pWnd)->OnOrderDateSetfocus();} */ 
/*static void _OnOrderDateKillfocusFnc(CWnd *pWnd){
	((CFAMMaintenanceRepairDlg *)pWnd)->OnOrderDateKillfocus();
} */
static int _OnOrderDateCheckValueFnc(CWnd *pWnd){
	return ((CFAMMaintenanceRepairDlg *)pWnd)->OnOrderDateCheckValue();
} 
static void _OnTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAMMaintenanceRepairDlg* )pWnd)->OnTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTypeSelendokFnc(CWnd *pWnd){
	((CFAMMaintenanceRepairDlg *)pWnd)->OnTypeSelendok();
}
/*static void _OnTypeSetfocusFnc(CWnd *pWnd){
	((CFAMMaintenanceRepairDlg *)pWnd)->OnTypeKillfocus();
}*/
/*static void _OnTypeKillfocusFnc(CWnd *pWnd){
	((CFAMMaintenanceRepairDlg *)pWnd)->OnTypeKillfocus();
}*/
static long _OnTypeLoadDataFnc(CWnd *pWnd){
	return ((CFAMMaintenanceRepairDlg *)pWnd)->OnTypeLoadData();
}
/*static void _OnTypeAddNewFnc(CWnd *pWnd){
	((CFAMMaintenanceRepairDlg *)pWnd)->OnTypeAddNew();
}*/
/*static void _OnNoteChangeFnc(CWnd *pWnd){
	((CFAMMaintenanceRepairDlg *)pWnd)->OnNoteChange();
} */
/*static void _OnNoteSetfocusFnc(CWnd *pWnd){
	((CFAMMaintenanceRepairDlg *)pWnd)->OnNoteSetfocus();} */ 
/*static void _OnNoteKillfocusFnc(CWnd *pWnd){
	((CFAMMaintenanceRepairDlg *)pWnd)->OnNoteKillfocus();
} */
static int _OnNoteCheckValueFnc(CWnd *pWnd){
	return ((CFAMMaintenanceRepairDlg *)pWnd)->OnNoteCheckValue();
} 
static void _OnLineTabSelectChangeFnc(CWnd *pWnd, int nOld, int nNew){
	((CFAMMaintenanceRepairDlg*)pWnd)->OnLineTabSelectChange(nOld, nNew);
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CFAMMaintenanceRepairDlg *pVw = (CFAMMaintenanceRepairDlg *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CFAMMaintenanceRepairDlg *pVw = (CFAMMaintenanceRepairDlg *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CFAMMaintenanceRepairDlg *pVw = (CFAMMaintenanceRepairDlg *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CFAMMaintenanceRepairDlg *pVw = (CFAMMaintenanceRepairDlg *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CFAMMaintenanceRepairDlg *pVw = (CFAMMaintenanceRepairDlg *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnImportSelectFnc(CWnd *pWnd){
	CFAMMaintenanceRepairDlg *pVw = (CFAMMaintenanceRepairDlg *)pWnd;
	pVw->OnImportSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CFAMMaintenanceRepairDlg *pVw = (CFAMMaintenanceRepairDlg *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddFAMMaintenanceRepairDlgFnc(CWnd *pWnd){
	 return ((CFAMMaintenanceRepairDlg*)pWnd)->OnAddFAMMaintenanceRepairDlg();
} 
static int _OnEditFAMMaintenanceRepairDlgFnc(CWnd *pWnd){
	 return ((CFAMMaintenanceRepairDlg*)pWnd)->OnEditFAMMaintenanceRepairDlg();
} 
static int _OnDeleteFAMMaintenanceRepairDlgFnc(CWnd *pWnd){
	 return ((CFAMMaintenanceRepairDlg*)pWnd)->OnDeleteFAMMaintenanceRepairDlg();
} 
static int _OnSaveFAMMaintenanceRepairDlgFnc(CWnd *pWnd){
	 return ((CFAMMaintenanceRepairDlg*)pWnd)->OnSaveFAMMaintenanceRepairDlg();
} 
static int _OnCancelFAMMaintenanceRepairDlgFnc(CWnd *pWnd){
	 return ((CFAMMaintenanceRepairDlg*)pWnd)->OnCancelFAMMaintenanceRepairDlg();
} 
CFAMMaintenanceRepairDlg::CFAMMaintenanceRepairDlg(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CFAMMaintenanceRepairDlg::~CFAMMaintenanceRepairDlg(){
}
void CFAMMaintenanceRepairDlg::OnCreateComponents(){
	m_wndGeneralInformation.Create(this, _T("General Information"), 5, 5, 805, 90);
	m_wndOrderNoLabel.Create(this, _T("Order No"), 10, 30, 110, 55);
	m_wndOrderNo.Create(this,115, 30, 265, 55); 
	m_wndOrderDateLabel.Create(this, _T("Order Date"), 270, 30, 370, 55);
	m_wndOrderDate.Create(this,375, 30, 525, 55); 
	m_wndTypeLabel.Create(this, _T("Type"), 530, 30, 610, 55);
	m_wndType.Create(this,615, 30, 800, 55); 
	m_wndNoteLabel.Create(this, _T("Note"), 10, 60, 110, 85);
	m_wndNote.Create(this,115, 61, 800, 86); 
	m_wndLineTab.Create(this,5, 95, 805, 520); 
	m_wndAdd.Create(this, _T("Add"), 216, 525, 296, 550);
	m_wndEdit.Create(this, _T("Edit"), 300, 525, 380, 550);
	m_wndSave.Create(this, _T("Save"), 385, 525, 465, 550);
	m_wndCancel.Create(this, _T("Cancel"), 470, 525, 550, 550);
	m_wndPrint.Create(this, _T("Print"), 555, 525, 635, 550);
	m_wndImport.Create(this, _T("Post1"), 640, 525, 720, 550);
	m_wndClose.Create(this, _T("Close"), 725, 525, 805, 550);

	m_wndMRL.Create(&m_wndLineTab);
	m_wndLineTab.Add(_T("Items"), &m_wndMRL);
	m_wndMRL.OnInitDialog();
	m_wndMRL.SetMode(VM_NONE);
}
void CFAMMaintenanceRepairDlg::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndOrderNo.SetLimitText(1024);
	m_wndOrderNo.SetCheckValue(true);
	m_wndOrderDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndOrderDate.SetCheckValue(true);
	m_wndType.SetCheckValue(true);
	m_wndType.LimitText(1024);
	m_wndNote.SetLimitText(1024);
	m_wndNote.SetCheckValue(true);
	
	m_wndType.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndType.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);

	m_tbl_mr.SetTableName(_T("fam_maintenance_repair"));
	m_tbl_mr.AddField(_T("fmr_createdby"), dfText, 15);
	m_tbl_mr.AddField(_T("fmr_createddate"), dfDateTime);
	m_tbl_mr.AddField(_T("fmr_updatedby"), dfText, 15);
	m_tbl_mr.AddField(_T("fmr_updateddate"), dfDateTime);
	m_tbl_mr.AddField(_T("fmr_orderno"), dfText, 15);
	m_tbl_mr.AddField(_T("fmr_orderdate"), dfDateTime);
	m_tbl_mr.AddField(_T("fmr_type"), dfText, 15);
	m_tbl_mr.AddField(_T("fmr_status"), dfText, 1);
	m_tbl_mr.AddField(_T("fmr_note"), dfText, 250);
	m_tbl_mr.AddField(_T("fmr_org_id"), dfText, 3);

}
void CFAMMaintenanceRepairDlg::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndOrderNo.SetEvent(WE_CHANGE, _OnOrderNoChangeFnc);
	//m_wndOrderNo.SetEvent(WE_SETFOCUS, _OnOrderNoSetfocusFnc);
	//m_wndOrderNo.SetEvent(WE_KILLFOCUS, _OnOrderNoKillfocusFnc);
	m_wndOrderNo.SetEvent(WE_CHECKVALUE, _OnOrderNoCheckValueFnc);
	//m_wndOrderDate.SetEvent(WE_CHANGE, _OnOrderDateChangeFnc);
	//m_wndOrderDate.SetEvent(WE_SETFOCUS, _OnOrderDateSetfocusFnc);
	//m_wndOrderDate.SetEvent(WE_KILLFOCUS, _OnOrderDateKillfocusFnc);
	m_wndOrderDate.SetEvent(WE_CHECKVALUE, _OnOrderDateCheckValueFnc);
	m_wndType.SetEvent(WE_SELENDOK, _OnTypeSelendokFnc);
	//m_wndType.SetEvent(WE_SETFOCUS, _OnTypeSetfocusFnc);
	//m_wndType.SetEvent(WE_KILLFOCUS, _OnTypeKillfocusFnc);
	m_wndType.SetEvent(WE_SELCHANGE, _OnTypeSelectChangeFnc);
	m_wndType.SetEvent(WE_LOADDATA, _OnTypeLoadDataFnc);
	//m_wndType.SetEvent(WE_ADDNEW, _OnTypeAddNewFnc);
	//m_wndNote.SetEvent(WE_CHANGE, _OnNoteChangeFnc);
	//m_wndNote.SetEvent(WE_SETFOCUS, _OnNoteSetfocusFnc);
	//m_wndNote.SetEvent(WE_KILLFOCUS, _OnNoteKillfocusFnc);
	m_wndNote.SetEvent(WE_CHECKVALUE, _OnNoteCheckValueFnc);
	m_wndLineTab.SetEvent(WE_SELCHANGE, _OnLineTabSelectChangeFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndImport.SetEvent(WE_CLICK, _OnImportSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	
	if(GetMode() == VM_ADD)
	{
		SetMode(VM_ADD);
	}else if(GetMode() == VM_EDIT)
	{
		SetMode(VM_EDIT);
		GetDataToScreen();
		m_wndMRL.SetMode(VM_EDIT);
	}else if(GetMode() == VM_VIEW)
		{
			SetMode(VM_VIEW);
			m_wndMRL.SetMode(VM_VIEW);
			GetDataToScreen();
		}
}
void CFAMMaintenanceRepairDlg::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndOrderNo.GetDlgCtrlID(), m_szOrderNo);
	DDX_TextEx(pDX, m_wndOrderDate.GetDlgCtrlID(), m_szOrderDate);
	DDX_TextEx(pDX, m_wndType.GetDlgCtrlID(), m_szTypeKey);
	DDX_Text(pDX, m_wndNote.GetDlgCtrlID(), m_szNote);

}
void CFAMMaintenanceRepairDlg::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM fam_maintenance_repair WHERE fmr_orderno = '%s' and fmr_org_id = '%s'"), m_szOrderNo, pMF->GetModuleID());
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("fmr_orderno"), m_szOrderNo);
		rs.GetValue(_T("fmr_orderdate"), m_szOrderDate);
		rs.GetValue(_T("fmr_type"), m_szTypeKey);
		rs.GetValue(_T("fmr_note"), m_szNote);
		UpdateData(FALSE);
	}

}
void CFAMMaintenanceRepairDlg::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_tbl_mr.SetValue(_T("fmr_createdby"), pMF->GetCurrentUser());
	m_tbl_mr.SetValue(_T("fmr_createddate"), pMF->GetSysDateTime());
	m_tbl_mr.SetValue(_T("fmr_updatedby"), pMF->GetCurrentUser());
	m_tbl_mr.SetValue(_T("fmr_updateddate"), pMF->GetSysDateTime());
	if(GetMode() == VM_ADD)
	{
		CString szSQL;
		szSQL.Format(_T("AD_GETNEXTVAL_F('FAM_MR_ORDER_NO','N','BS') "));
		m_szOrderNo = pMF->ExecDML(szSQL);
	}
	m_tbl_mr.SetValue(_T("fmr_orderno"), m_szOrderNo);
	m_tbl_mr.SetValue(_T("fmr_orderdate"), m_szOrderDate);
	m_tbl_mr.SetValue(_T("fmr_type"), m_szTypeKey);
	m_tbl_mr.SetValue(_T("fmr_status"), _T("N"));
	m_tbl_mr.SetValue(_T("fmr_note"), m_szNote);
	m_tbl_mr.SetValue(_T("fmr_org_id"), pMF->GetModuleID());
}
void CFAMMaintenanceRepairDlg::SetDefaultValues(){

	m_szOrderNo.Empty();
	m_szOrderDate.Empty();
	m_szTypeKey.Empty();
	m_szNote.Empty();

}
int CFAMMaintenanceRepairDlg::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 2, 3, 6, -1);
 			SetDefaultValues();
			m_szOrderDate = pMF->GetSysDateTime();
			szSQL.Format(_T("AD_GETNEXTVAL_F('FAM_MR_ORDER_NO','N','BS') "));
			m_szOrderNo = pMF->ExecDML(szSQL);
			m_wndMRL.m_szOrderNo = m_szOrderNo;
			m_wndOrderNo.EnableWindow(FALSE);
			m_wndOrderDate.EnableWindow(FALSE);
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 2, 3, 6, -1);
			m_wndMRL.m_szOrderNo = m_szOrderNo;
			m_wndOrderNo.EnableWindow(FALSE);
			m_wndOrderDate.EnableWindow(FALSE);
			m_wndType.EnableWindow(FALSE);
			if(m_szStatus == _T("Y"))
				m_wndImport.EnableWindow(FALSE);
 			break;
 		case VM_VIEW: 
 			EnableControls(FALSE);
 			EnableButtons(FALSE, 0, 1, 2, 3, -1);
			if(m_szStatus == _T("Y"))
				m_wndImport.EnableWindow(FALSE);
			m_wndMRL.m_szOrderNo = m_szOrderNo;
			GetDataToScreen();
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
/*void CFAMMaintenanceRepairDlg::OnOrderNoChange(){
	
} */
/*void CFAMMaintenanceRepairDlg::OnOrderNoSetfocus(){
	
} */
/*void CFAMMaintenanceRepairDlg::OnOrderNoKillfocus(){
	
} */
int CFAMMaintenanceRepairDlg::OnOrderNoCheckValue(){
	return 0;
} 
/*void CFAMMaintenanceRepairDlg::OnOrderDateChange(){
	
} */
/*void CFAMMaintenanceRepairDlg::OnOrderDateSetfocus(){
	
} */
/*void CFAMMaintenanceRepairDlg::OnOrderDateKillfocus(){
	
} */
int CFAMMaintenanceRepairDlg::OnOrderDateCheckValue(){
	return 0;
} 
void CFAMMaintenanceRepairDlg::OnTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAMMaintenanceRepairDlg::OnTypeSelendok(){
	UpdateData(TRUE);
	m_wndMRL.m_szType = m_szTypeKey;
}
/*void CFAMMaintenanceRepairDlg::OnTypeSetfocus(){
	
}*/
/*void CFAMMaintenanceRepairDlg::OnTypeKillfocus(){
	
}*/
long CFAMMaintenanceRepairDlg::OnTypeLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();
	if(m_wndType.IsSearchKey() && !m_szTypeKey.IsEmpty())
	{
		szWhere.Format(_T(" AND ss_code='%s' "), m_szTypeKey);
	}
	m_wndType.DeleteAllItems();
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as description FROM sys_sel ")\
				_T("WHERE ss_id = 'fm_type' %s ORDER BY ss_index, ss_code"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndType.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	
	return nCount;
}
/*void CFAMMaintenanceRepairDlg::OnTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CFAMMaintenanceRepairDlg::OnNoteChange(){
	
} */
/*void CFAMMaintenanceRepairDlg::OnNoteSetfocus(){
	
} */
/*void CFAMMaintenanceRepairDlg::OnNoteKillfocus(){
	
} */
int CFAMMaintenanceRepairDlg::OnNoteCheckValue(){
	return 0;
} 
void CFAMMaintenanceRepairDlg::OnLineTabSelectChange(int nOld, int nNew){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAMMaintenanceRepairDlg::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnAddFAMMaintenanceRepairDlg();
} 
void CFAMMaintenanceRepairDlg::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnEditFAMMaintenanceRepairDlg();
} 
void CFAMMaintenanceRepairDlg::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveFAMMaintenanceRepairDlg();
} 
void CFAMMaintenanceRepairDlg::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancelFAMMaintenanceRepairDlg();
} 
void CFAMMaintenanceRepairDlg::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CReport rpt;
	CReportSection *rptDetail;
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szDate;
	int nIndex = 1;
	double nCost;

	szSQL.Format(_T("Select fmrl_assetno, fmrl_name, fmrl_fromdate ,fmrl_todate, fmrl_nextschedule,") \
		_T(" fmrl_money, fmrl_performedby, fmrl_note, fa_model, fa_serial from fam_maintenance_repair_l ") \
		_T(" LEFT JOIN fam_asset ON(fa_assetno = fmrl_assetno) ") \
		_T(" WHERE fmrl_orderno = '%s'"), m_szOrderNo);

	BeginWaitCursor();
	rs.ExecSQL(szSQL);

	if(rs.IsEOF())
	{
		ShowMessageBox(_T("No Data"), MB_OK | MB_ICONERROR);
		return;
	}
	
	if(!rpt.Init(_T("Reports/FAM/FAM_THEODOISUACHUA.RPT")))
		return;
	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), _T("\x42\x1ED8 QU\x1ED0\x43 PH\xD2NG"));
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), _T("\x42\x1EC7nh vi\x1EC7n TWQ\x110 \x31\x30\x38"));
	rpt.GetReportHeader()->SetValue(_T("Department"), _T("KHO\x41 TR\x41NG \x42\x1ECA"));
	rpt.GetReportHeader()->SetValue(_T("OrderDate"), CDate::Convert(m_szOrderDate, yyyymmdd, ddmmyyyy));
	rpt.GetReportHeader()->SetValue(_T("OrderNo"), m_szOrderNo);

	while(!rs.IsEOF())
	{
		
		rptDetail = rpt.AddDetail();

		tmpStr.Format(_T("%d"), nIndex++);
		rptDetail->SetValue(_T("1"), tmpStr);

		rs.GetValue(_T("fmrl_assetno"), tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);

		rs.GetValue(_T("fmrl_name"), tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);

		rs.GetValue(_T("fa_model"), tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);

		rs.GetValue(_T("fa_serial"), tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);

		rs.GetValue(_T("fmrl_money"), nCost);
		FormatCurrency(nCost, tmpStr);
		rptDetail->SetValue(_T("6"), tmpStr);

		rs.GetValue(_T("fmrl_fromdate"), tmpStr);
		szTemp = CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy);
		rptDetail->SetValue(_T("7"), szTemp);

		rs.GetValue(_T("fmrl_todate"), tmpStr);
		szTemp = CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy);
		rptDetail->SetValue(_T("8"), szTemp);

		rs.GetValue(_T("fmrl_performedby"), tmpStr);
		rptDetail->SetValue(_T("9"), tmpStr);

		rs.MoveNext();
	}
	
	CString szSysDate;
	szSysDate = pMF->GetSysDate(); 
	tmpStr.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),szSysDate.Right(2),szSysDate.Mid(5,2),szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), tmpStr);

	EndWaitCursor();
	rpt.PrintPreview();
} 
void CFAMMaintenanceRepairDlg::OnImportSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL;
	int retMsg = ShowMessageBox(_T("Do you want to post order?(Y/N)"), MB_YESNO|MB_DEFBUTTON1);
	if(retMsg == IDYES)
	{
		szSQL.Format(_T("UPDATE fam_maintenance_repair SET fmr_status = 'Y' WHERE fmr_orderno = '%s'"), m_szOrderNo);
		pMF->ExecSQL(szSQL);
		SetMode(VM_VIEW);
		m_wndImport.EnableWindow(FALSE);
		m_wndMRL.SetMode(VM_VIEW);
	}else
		return;
} 
void CFAMMaintenanceRepairDlg::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	pMF->m_wndMR.OnOrderListLoadData();
	OnCancel();
} 
int CFAMMaintenanceRepairDlg::OnAddFAMMaintenanceRepairDlg(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	m_wndMRL.m_wndItemList.DeleteAllItems();
	return 0;
	
}
int CFAMMaintenanceRepairDlg::OnEditFAMMaintenanceRepairDlg(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0; 
}
int CFAMMaintenanceRepairDlg::OnDeleteFAMMaintenanceRepairDlg(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
 	szSQL.Format(_T("DELETE FROM  WHERE  AND") );
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
 		SetMode(VM_NONE);
 		OnCancelFAMMaintenanceRepairDlg();
 	}
	return 0;
}
int CFAMMaintenanceRepairDlg::OnSaveFAMMaintenanceRepairDlg(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
 		szSQL = m_tbl_mr.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
		szWhere.Format(_T(" WHERE fmr_orderno = '%s'"), m_szOrderNo);
 		szSQL = m_tbl_mr.GetUpdateSQL(_T("fmr_createdby, fmr_createddate, fmr_orderno"));
 		szSQL += szWhere;
 	}
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
		if(GetMode() == VM_EDIT){
			SetMode(VM_VIEW);
			m_wndMRL.SetMode(VM_ADD);
			m_wndMRL.m_wndDepartment.SetFocus();
		}
		else
		{
			szSQL.Format(_T("AD_GETNEXTVAL_F('FAM_MR_ORDER_NO','Y','BS') "));
			m_szOrderNo = pMF->ExecDML(szSQL);
			GetDataToScreen();
 			SetMode(VM_VIEW);
			m_wndMRL.SetMode(VM_ADD);
			m_wndMRL.OnItemListLoadData();
			m_wndMRL.m_wndDepartment.SetFocus();
		}
		return 1;
 	}
 	else
 	{
 	}
 	return ret;
}
int CFAMMaintenanceRepairDlg::OnCancelFAMMaintenanceRepairDlg(){
 	if(GetMode() == VM_EDIT)
 	{
 		SetMode(VM_VIEW);
 	} 
 	else 
 	{
 		SetMode(VM_NONE);
 	} 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	return 0;
} 
int CFAMMaintenanceRepairDlg::OnFAMMaintenanceRepairDlgListLoadData(){
	return 0;
}
