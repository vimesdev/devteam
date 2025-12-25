#include "FAMAdjustmentDialog.h"
#include "MainFrm.h"
#include "ReportDocument.h"
/*static void _OnOrderNoChangeFnc(CWnd *pWnd){
	((CFAMAdjustmentDialog *)pWnd)->OnOrderNoChange();
} */
/*static void _OnOrderNoSetfocusFnc(CWnd *pWnd){
	((CFAMAdjustmentDialog *)pWnd)->OnOrderNoSetfocus();} */ 
/*static void _OnOrderNoKillfocusFnc(CWnd *pWnd){
	((CFAMAdjustmentDialog *)pWnd)->OnOrderNoKillfocus();
} */
static int _OnOrderNoCheckValueFnc(CWnd *pWnd){
	return ((CFAMAdjustmentDialog *)pWnd)->OnOrderNoCheckValue();
} 
/*static void _OnOrderDateChangeFnc(CWnd *pWnd){
	((CFAMAdjustmentDialog *)pWnd)->OnOrderDateChange();
} */
/*static void _OnOrderDateSetfocusFnc(CWnd *pWnd){
	((CFAMAdjustmentDialog *)pWnd)->OnOrderDateSetfocus();} */ 
/*static void _OnOrderDateKillfocusFnc(CWnd *pWnd){
	((CFAMAdjustmentDialog *)pWnd)->OnOrderDateKillfocus();
} */
static int _OnOrderDateCheckValueFnc(CWnd *pWnd){
	return ((CFAMAdjustmentDialog *)pWnd)->OnOrderDateCheckValue();
} 
/*static void _OnNoteChangeFnc(CWnd *pWnd){
	((CFAMAdjustmentDialog *)pWnd)->OnNoteChange();
} */
/*static void _OnNoteSetfocusFnc(CWnd *pWnd){
	((CFAMAdjustmentDialog *)pWnd)->OnNoteSetfocus();} */ 
/*static void _OnNoteKillfocusFnc(CWnd *pWnd){
	((CFAMAdjustmentDialog *)pWnd)->OnNoteKillfocus();
} */
static int _OnNoteCheckValueFnc(CWnd *pWnd){
	return ((CFAMAdjustmentDialog *)pWnd)->OnNoteCheckValue();
} 
static void _OnLineTabSelectChangeFnc(CWnd *pWnd, int nOld, int nNew){
	((CFAMAdjustmentDialog*)pWnd)->OnLineTabSelectChange(nOld, nNew);
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CFAMAdjustmentDialog *pVw = (CFAMAdjustmentDialog *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CFAMAdjustmentDialog *pVw = (CFAMAdjustmentDialog *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CFAMAdjustmentDialog *pVw = (CFAMAdjustmentDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CFAMAdjustmentDialog *pVw = (CFAMAdjustmentDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CFAMAdjustmentDialog *pVw = (CFAMAdjustmentDialog *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnImportSelectFnc(CWnd *pWnd){
	CFAMAdjustmentDialog *pVw = (CFAMAdjustmentDialog *)pWnd;
	pVw->OnImportSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CFAMAdjustmentDialog *pVw = (CFAMAdjustmentDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddFAMAdjustmentDialogFnc(CWnd *pWnd){
	 return ((CFAMAdjustmentDialog*)pWnd)->OnAddFAMAdjustmentDialog();
} 
static int _OnEditFAMAdjustmentDialogFnc(CWnd *pWnd){
	 return ((CFAMAdjustmentDialog*)pWnd)->OnEditFAMAdjustmentDialog();
} 
static int _OnDeleteFAMAdjustmentDialogFnc(CWnd *pWnd){
	 return ((CFAMAdjustmentDialog*)pWnd)->OnDeleteFAMAdjustmentDialog();
} 
static int _OnSaveFAMAdjustmentDialogFnc(CWnd *pWnd){
	 return ((CFAMAdjustmentDialog*)pWnd)->OnSaveFAMAdjustmentDialog();
} 
static int _OnCancelFAMAdjustmentDialogFnc(CWnd *pWnd){
	 return ((CFAMAdjustmentDialog*)pWnd)->OnCancelFAMAdjustmentDialog();
} 
CFAMAdjustmentDialog::CFAMAdjustmentDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CFAMAdjustmentDialog::~CFAMAdjustmentDialog(){
}
void CFAMAdjustmentDialog::OnCreateComponents(){
	m_wndGeneralInformation.Create(this, _T("General Information"), 5, 5, 805, 60);
	m_wndOrderNoLabel.Create(this, _T("Order No"), 10, 30, 90, 55);
	m_wndOrderNo.Create(this,95, 30, 245, 55); 
	m_wndOrderDateLabel.Create(this, _T("Order Date"), 250, 30, 330, 55);
	m_wndOrderDate.Create(this,335, 30, 485, 55); 
	m_wndNoteLabel.Create(this, _T("Note"), 490, 30, 570, 55);
	m_wndNote.Create(this,575, 30, 800, 55); 
	m_wndLineTab.Create(this,5, 65, 805, 490); 
	m_wndAdd.Create(this, _T("Add"), 216, 495, 296, 520);
	m_wndEdit.Create(this, _T("Edit"), 300, 495, 380, 520);
	m_wndSave.Create(this, _T("Save"), 385, 495, 465, 520);
	m_wndCancel.Create(this, _T("Cancel"), 470, 495, 550, 520);
	m_wndPrint.Create(this, _T("Print"), 555, 495, 635, 520);
	m_wndImport.Create(this, _T("Post1"), 640, 495, 720, 520);
	m_wndClose.Create(this, _T("Close"), 725, 495, 805, 520);

	m_wndAdjustmentLine.Create(&m_wndLineTab);
	m_wndLineTab.Add(_T("Items"), &m_wndAdjustmentLine);
	m_wndAdjustmentLine.OnInitDialog();
	m_wndAdjustmentLine.SetMode(VM_NONE);

}
void CFAMAdjustmentDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndOrderNo.SetLimitText(1024);
	m_wndOrderNo.SetCheckValue(true);
	m_wndOrderDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndOrderDate.SetCheckValue(true);
	m_wndNote.SetLimitText(1024);
	m_wndNote.SetCheckValue(true);

	
	m_tbl_adjustment.SetTableName(_T("fam_adjustment"));
	m_tbl_adjustment.AddField(_T("faj_createdby"), dfText, 15);
	m_tbl_adjustment.AddField(_T("faj_createddate"), dfDateTime);
	m_tbl_adjustment.AddField(_T("faj_updatedby"), dfText, 15);
	m_tbl_adjustment.AddField(_T("faj_updateddate"), dfDateTime);
	m_tbl_adjustment.AddField(_T("faj_orderno"), dfText, 15);
	m_tbl_adjustment.AddField(_T("faj_orderdate"), dfDateTime);
	m_tbl_adjustment.AddField(_T("faj_status"), dfText, 1);
	m_tbl_adjustment.AddField(_T("faj_note"), dfText, 250);
	m_tbl_adjustment.AddField(_T("faj_org_id"), dfText, 3);
}
void CFAMAdjustmentDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndOrderNo.SetEvent(WE_CHANGE, _OnOrderNoChangeFnc);
	//m_wndOrderNo.SetEvent(WE_SETFOCUS, _OnOrderNoSetfocusFnc);
	//m_wndOrderNo.SetEvent(WE_KILLFOCUS, _OnOrderNoKillfocusFnc);
	m_wndOrderNo.SetEvent(WE_CHECKVALUE, _OnOrderNoCheckValueFnc);
	//m_wndOrderDate.SetEvent(WE_CHANGE, _OnOrderDateChangeFnc);
	//m_wndOrderDate.SetEvent(WE_SETFOCUS, _OnOrderDateSetfocusFnc);
	//m_wndOrderDate.SetEvent(WE_KILLFOCUS, _OnOrderDateKillfocusFnc);
	m_wndOrderDate.SetEvent(WE_CHECKVALUE, _OnOrderDateCheckValueFnc);
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
		m_wndAdjustmentLine.SetMode(VM_EDIT);
	}else if(GetMode() == VM_VIEW)
		{
			SetMode(VM_VIEW);
			m_wndAdjustmentLine.SetMode(VM_VIEW);
			GetDataToScreen();
		}

}
void CFAMAdjustmentDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndOrderNo.GetDlgCtrlID(), m_szOrderNo);
	DDX_TextEx(pDX, m_wndOrderDate.GetDlgCtrlID(), m_szOrderDate);
	DDX_Text(pDX, m_wndNote.GetDlgCtrlID(), m_szNote);

}
void CFAMAdjustmentDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM fam_adjustment WHERE faj_orderno = '%s' and faj_org_id = '%s'"), m_szOrderNo, pMF->GetModuleID());
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("faj_orderno"), m_szOrderNo);
		rs.GetValue(_T("faj_orderdate"), m_szOrderDate);
		rs.GetValue(_T("faj_note"), m_szNote);
		UpdateData(FALSE);
	}

}
void CFAMAdjustmentDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_tbl_adjustment.SetValue(_T("faj_createdby"), pMF->GetCurrentUser());
	m_tbl_adjustment.SetValue(_T("faj_createddate"), pMF->GetSysDateTime());
	m_tbl_adjustment.SetValue(_T("faj_updatedby"), pMF->GetCurrentUser());
	m_tbl_adjustment.SetValue(_T("faj_updateddate"), pMF->GetSysDateTime());
	if(GetMode() == VM_ADD)
	{
		CString szSQL;
		szSQL.Format(_T("AD_GETNEXTVAL_F('FAM_ADJUSTMENT_ORDER_NO','N','HC') "));
		m_szOrderNo = pMF->ExecDML(szSQL);
	}
	m_tbl_adjustment.SetValue(_T("faj_orderno"), m_szOrderNo);
	m_tbl_adjustment.SetValue(_T("faj_orderdate"), m_szOrderDate);
	m_tbl_adjustment.SetValue(_T("faj_status"), _T("N"));
	m_tbl_adjustment.SetValue(_T("faj_note"), m_szNote);
	m_tbl_adjustment.SetValue(_T("faj_org_id"), pMF->GetModuleID());

}
void CFAMAdjustmentDialog::SetDefaultValues(){

	m_szOrderNo.Empty();
	m_szOrderDate.Empty();
	m_szNote.Empty();

}
int CFAMAdjustmentDialog::SetMode(int nMode){
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
			szSQL.Format(_T("AD_GETNEXTVAL_F('FAM_ADJUSTMENT_ORDER_NO','N', 'HC') "));
			m_szOrderNo = pMF->ExecDML(szSQL);
			m_wndAdjustmentLine.m_szOrderNo = m_szOrderNo;
			m_wndOrderNo.EnableWindow(FALSE);
			m_wndOrderDate.EnableWindow(FALSE);
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 2, 3, 6, -1);
			m_wndAdjustmentLine.m_szOrderNo = m_szOrderNo;
			m_wndOrderNo.EnableWindow(FALSE);
			m_wndOrderDate.EnableWindow(FALSE);
			if(m_szStatus == _T("Y"))
				m_wndImport.EnableWindow(FALSE);
 			break;
 		case VM_VIEW: 
 			EnableControls(FALSE);
 			EnableButtons(FALSE, 0, 1, 2, 3, -1);
			if(m_szStatus == _T("Y"))
				m_wndImport.EnableWindow(FALSE);
			m_wndAdjustmentLine.m_szOrderNo = m_szOrderNo;
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
/*void CFAMAdjustmentDialog::OnOrderNoChange(){
	
} */
/*void CFAMAdjustmentDialog::OnOrderNoSetfocus(){
	
} */
/*void CFAMAdjustmentDialog::OnOrderNoKillfocus(){
	
} */
int CFAMAdjustmentDialog::OnOrderNoCheckValue(){
	return 0;
} 
/*void CFAMAdjustmentDialog::OnOrderDateChange(){
	
} */
/*void CFAMAdjustmentDialog::OnOrderDateSetfocus(){
	
} */
/*void CFAMAdjustmentDialog::OnOrderDateKillfocus(){
	
} */
int CFAMAdjustmentDialog::OnOrderDateCheckValue(){
	return 0;
} 
/*void CFAMAdjustmentDialog::OnNoteChange(){
	
} */
/*void CFAMAdjustmentDialog::OnNoteSetfocus(){
	
} */
/*void CFAMAdjustmentDialog::OnNoteKillfocus(){
	
} */
int CFAMAdjustmentDialog::OnNoteCheckValue(){
	return 0;
} 
void CFAMAdjustmentDialog::OnLineTabSelectChange(int nOld, int nNew){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAMAdjustmentDialog::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnAddFAMAdjustmentDialog();
} 
void CFAMAdjustmentDialog::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnEditFAMAdjustmentDialog();
} 
void CFAMAdjustmentDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveFAMAdjustmentDialog();
} 
void CFAMAdjustmentDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancelFAMAdjustmentDialog();
} 
void CFAMAdjustmentDialog::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CReport rpt;
	CReportSection *rptDetail;
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szDate;
	long double nGroupTotal;
	long double nTotal;
	double nUPrice;
	int nIndex = 1;

	szSQL.Format(_T("SELECT fajl_assetno, fajl_name, fajl_oldcost, fajl_newcost ") \
				_T("FROM      fam_adjustment_line ") \
				_T("WHERE     fajl_orderno = '%s'"), m_szOrderNo);

	BeginWaitCursor();
	rs.ExecSQL(szSQL);

	if(rs.IsEOF())
	{
		ShowMessageBox(_T("No Data"), MB_OK | MB_ICONERROR);
		return;
	}
	
	if(!rpt.Init(_T("Reports/FAM/FAM_PHIEUDIEUCHINH.RPT")))
		return;
	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), _T("\x42\x1ED8 QU\x1ED0\x43 PH\xD2NG"));
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), _T("\x42\x1EC7nh vi\x1EC7n TWQ\x110 \x31\x30\x38"));
	rpt.GetReportHeader()->SetValue(_T("Department"), _T("KHO\x41 TR\x41NG \x42\x1ECA"));
	rpt.GetReportHeader()->SetValue(_T("OrderDate"), CDateTime::Convert(m_szOrderDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	rpt.GetReportHeader()->SetValue(_T("InvoiceNo"), m_szOrderNo);
	//rpt.GetReportHeader()->SetValue(_T("StockName"), m_wndWarehouse.GetCurrent(1));
	//rpt.GetReportHeader()->SetValue(_T("ToDept"), m_szToDeptKey);
	nGroupTotal = 0;
	nTotal = 0;

	while(!rs.IsEOF())
	{
		/*if(nGroupTotal > 0)
		{
			rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
			FormatCurrency(nGroupTotal, tmpStr);
			rptDetail->SetValue(_T("8"), tmpStr);
			nTotal += nGroupTotal;
			nGroupTotal = 0;
		}*/
		rptDetail = rpt.AddDetail();

		tmpStr.Format(_T("%d"), nIndex++);
		rptDetail->SetValue(_T("1"), tmpStr);

		rs.GetValue(_T("fajl_assetno"), tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);

		rs.GetValue(_T("fajl_name"), tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);

		rs.GetValue(_T("fajl_oldcost"), nUPrice);
		FormatCurrency(nUPrice, tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);

		rs.GetValue(_T("fajl_newcost"), nUPrice);
		FormatCurrency(nUPrice, tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);

		rs.MoveNext();
	}
	//if(nGroupTotal > 0)
	//{
	//	rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
	//	FormatCurrency(nGroupTotal, tmpStr);
	//	rptDetail->SetValue(_T("s8"), tmpStr);
	//	nTotal += nGroupTotal;
	//	nGroupTotal = 0;
	//}

	//if(nTotal > 0)
	//{
	//	FormatCurrency(nTotal, tmpStr);
	//	rpt.GetReportFooter()->SetValue(_T("TotalAmount"), tmpStr);
	//}

	//CString szMoney;
	////tmpStr.Replace(_T("."), _T(""));
	//MoneyToString(tmpStr, szMoney);
	//rpt.GetReportFooter()->SetValue(_T("SumInWords"), szMoney + _T(" \x111\x1ED3ng"));
	CString szSysDate;
	szSysDate = pMF->GetSysDate(); 
	tmpStr.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),szSysDate.Right(2),szSysDate.Mid(5,2),szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), tmpStr);

	EndWaitCursor();
	rpt.PrintPreview();
} 
void CFAMAdjustmentDialog::OnImportSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL;
	int retMsg = ShowMessageBox(_T("Do you want to post order?(Y/N)"), MB_YESNO|MB_DEFBUTTON1);
	if(retMsg == IDYES)
	{
		szSQL.Format(_T("UPDATE fam_adjustment SET faj_status = 'Y' WHERE faj_orderno = '%s'"), m_szOrderNo);

		pMF->ExecSQL(szSQL);
		SetMode(VM_VIEW);
		m_wndImport.EnableWindow(FALSE);
		m_wndAdjustmentLine.SetMode(VM_VIEW);
	}else
		return;
	
} 
void CFAMAdjustmentDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//pMF->m_wndAdjustment.OnOrderListLoadData();
	OnCancel();
} 
int CFAMAdjustmentDialog::OnAddFAMAdjustmentDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CFAMAdjustmentDialog::OnEditFAMAdjustmentDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CFAMAdjustmentDialog::OnDeleteFAMAdjustmentDialog(){
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
 		OnCancelFAMAdjustmentDialog();
 	}
	return 0;
}
int CFAMAdjustmentDialog::OnSaveFAMAdjustmentDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
 		szSQL = m_tbl_adjustment.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
		szWhere.Format(_T(" WHERE faj_orderno = '%s'"), m_szOrderNo);
 		szSQL = m_tbl_adjustment.GetUpdateSQL(_T("faj_createdby,faj_createddate,faj_orderno"));
 		szSQL += szWhere;
 	}

 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
 		if(GetMode() == VM_EDIT){
			SetMode(VM_VIEW);
			m_wndAdjustmentLine.SetMode(VM_ADD);
		}
		else
		{
			szSQL.Format(_T("AD_GETNEXTVAL_F('FAM_ADJUSTMENT_ORDER_NO','Y','HC') "));
			m_szOrderNo = pMF->ExecDML(szSQL);
			GetDataToScreen();
 			SetMode(VM_VIEW);
			m_wndAdjustmentLine.SetMode(VM_ADD);
			m_wndAdjustmentLine.OnItemListLoadData();
		}
		return 1;
 	}
 	else
 	{
 	}
 	return ret;
}
int CFAMAdjustmentDialog::OnCancelFAMAdjustmentDialog(){
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
int CFAMAdjustmentDialog::OnFAMAdjustmentDialogListLoadData(){
	return 0;
}
