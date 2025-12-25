#include "FAMLiquidatedDialog.h"
#include "MainFrm.h"
#include "ReportDocument.h"
/*static void _OnOrderNoChangeFnc(CWnd *pWnd){
	((CFAMLiquidatedDialog *)pWnd)->OnOrderNoChange();
} */
/*static void _OnOrderNoSetfocusFnc(CWnd *pWnd){
	((CFAMLiquidatedDialog *)pWnd)->OnOrderNoSetfocus();} */ 
/*static void _OnOrderNoKillfocusFnc(CWnd *pWnd){
	((CFAMLiquidatedDialog *)pWnd)->OnOrderNoKillfocus();
} */
static int _OnOrderNoCheckValueFnc(CWnd *pWnd){
	return ((CFAMLiquidatedDialog *)pWnd)->OnOrderNoCheckValue();
} 
/*static void _OnOrderDateChangeFnc(CWnd *pWnd){
	((CFAMLiquidatedDialog *)pWnd)->OnOrderDateChange();
} */
/*static void _OnOrderDateSetfocusFnc(CWnd *pWnd){
	((CFAMLiquidatedDialog *)pWnd)->OnOrderDateSetfocus();} */ 
/*static void _OnOrderDateKillfocusFnc(CWnd *pWnd){
	((CFAMLiquidatedDialog *)pWnd)->OnOrderDateKillfocus();
} */
static int _OnOrderDateCheckValueFnc(CWnd *pWnd){
	return ((CFAMLiquidatedDialog *)pWnd)->OnOrderDateCheckValue();
} 
/*static void _OnNoteChangeFnc(CWnd *pWnd){
	((CFAMLiquidatedDialog *)pWnd)->OnNoteChange();
} */
/*static void _OnNoteSetfocusFnc(CWnd *pWnd){
	((CFAMLiquidatedDialog *)pWnd)->OnNoteSetfocus();} */ 
/*static void _OnNoteKillfocusFnc(CWnd *pWnd){
	((CFAMLiquidatedDialog *)pWnd)->OnNoteKillfocus();
} */
static int _OnNoteCheckValueFnc(CWnd *pWnd){
	return ((CFAMLiquidatedDialog *)pWnd)->OnNoteCheckValue();
} 
static void _OnLineTabSelectChangeFnc(CWnd *pWnd, int nOld, int nNew){
	((CFAMLiquidatedDialog*)pWnd)->OnLineTabSelectChange(nOld, nNew);
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CFAMLiquidatedDialog *pVw = (CFAMLiquidatedDialog *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CFAMLiquidatedDialog *pVw = (CFAMLiquidatedDialog *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CFAMLiquidatedDialog *pVw = (CFAMLiquidatedDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CFAMLiquidatedDialog *pVw = (CFAMLiquidatedDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CFAMLiquidatedDialog *pVw = (CFAMLiquidatedDialog *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnImportSelectFnc(CWnd *pWnd){
	CFAMLiquidatedDialog *pVw = (CFAMLiquidatedDialog *)pWnd;
	pVw->OnImportSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CFAMLiquidatedDialog *pVw = (CFAMLiquidatedDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddFAMLiquidatedDialogFnc(CWnd *pWnd){
	 return ((CFAMLiquidatedDialog*)pWnd)->OnAddFAMLiquidatedDialog();
} 
static int _OnEditFAMLiquidatedDialogFnc(CWnd *pWnd){
	 return ((CFAMLiquidatedDialog*)pWnd)->OnEditFAMLiquidatedDialog();
} 
static int _OnDeleteFAMLiquidatedDialogFnc(CWnd *pWnd){
	 return ((CFAMLiquidatedDialog*)pWnd)->OnDeleteFAMLiquidatedDialog();
} 
static int _OnSaveFAMLiquidatedDialogFnc(CWnd *pWnd){
	 return ((CFAMLiquidatedDialog*)pWnd)->OnSaveFAMLiquidatedDialog();
} 
static int _OnCancelFAMLiquidatedDialogFnc(CWnd *pWnd){
	 return ((CFAMLiquidatedDialog*)pWnd)->OnCancelFAMLiquidatedDialog();
} 
CFAMLiquidatedDialog::CFAMLiquidatedDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CFAMLiquidatedDialog::~CFAMLiquidatedDialog(){
}
void CFAMLiquidatedDialog::OnCreateComponents(){
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

	m_wndLiquidatedLine.Create(&m_wndLineTab);
	m_wndLineTab.Add(_T("Items"), &m_wndLiquidatedLine);
	m_wndLiquidatedLine.OnInitDialog();
	m_wndLiquidatedLine.SetMode(VM_NONE);


}
void CFAMLiquidatedDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndOrderNo.SetLimitText(1024);
	m_wndOrderNo.SetCheckValue(true);
	m_wndOrderDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndOrderDate.SetCheckValue(true);
	m_wndNote.SetLimitText(250);


	m_tbl_liquid.SetTableName(_T("fam_liquidated"));
	m_tbl_liquid.AddField(_T("fl_createdby"), dfText, 15);
	m_tbl_liquid.AddField(_T("fl_createddate"), dfDateTime);
	m_tbl_liquid.AddField(_T("fl_updatedby"), dfText, 15);
	m_tbl_liquid.AddField(_T("fl_updateddate"), dfDateTime);
	m_tbl_liquid.AddField(_T("fl_orderno"), dfText, 15);
	m_tbl_liquid.AddField(_T("fl_orderdate"), dfDateTime);
	m_tbl_liquid.AddField(_T("fl_status"), dfText, 1);
	m_tbl_liquid.AddField(_T("fl_note"), dfText, 250);
	m_tbl_liquid.AddField(_T("fl_org_id"), dfText, 3);
}
void CFAMLiquidatedDialog::OnSetWindowEvents(){
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
		m_wndLiquidatedLine.SetMode(VM_EDIT);
	}else if(GetMode() == VM_VIEW)
		{
			SetMode(VM_VIEW);
			m_wndLiquidatedLine.SetMode(VM_VIEW);
			GetDataToScreen();
		}

}
void CFAMLiquidatedDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndOrderNo.GetDlgCtrlID(), m_szOrderNo);
	DDX_TextEx(pDX, m_wndOrderDate.GetDlgCtrlID(), m_szOrderDate);
	DDX_Text(pDX, m_wndNote.GetDlgCtrlID(), m_szNote);

}
void CFAMLiquidatedDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM fam_liquidated WHERE fl_orderno = '%s'"), m_szOrderNo);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("fl_orderno"), m_szOrderNo);
		rs.GetValue(_T("fl_orderdate"), m_szOrderDate);
		rs.GetValue(_T("fl_note"), m_szNote);
		UpdateData(FALSE);
	}

}
void CFAMLiquidatedDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_tbl_liquid.SetValue(_T("fl_createdby"), pMF->GetCurrentUser());
	m_tbl_liquid.SetValue(_T("fl_createddate"), pMF->GetSysDateTime());
	m_tbl_liquid.SetValue(_T("fl_updatedby"), pMF->GetCurrentUser());
	m_tbl_liquid.SetValue(_T("fl_updateddate"), pMF->GetSysDateTime());
	if(GetMode() == VM_ADD)
	{
		CString szSQL;
		szSQL.Format(_T("AD_GETNEXTVAL_F('FAM_LIQUID_ORDER_NO','N','TL') "));
		m_szOrderNo = pMF->ExecDML(szSQL);
	}
	m_tbl_liquid.SetValue(_T("fl_orderno"), m_szOrderNo);
	m_tbl_liquid.SetValue(_T("fl_orderdate"), m_szOrderDate);
	m_tbl_liquid.SetValue(_T("fl_status"), _T("N"));
	m_tbl_liquid.SetValue(_T("fl_note"), m_szNote);
}
void CFAMLiquidatedDialog::SetDefaultValues(){

	m_szOrderNo.Empty();
	m_szOrderDate.Empty();
	m_szNote.Empty();

}
int CFAMLiquidatedDialog::SetMode(int nMode){
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
			szSQL.Format(_T("AD_GETNEXTVAL_F('FAM_LIQUID_ORDER_NO','N','TL') "));
			m_szOrderNo = pMF->ExecDML(szSQL);
			m_wndLiquidatedLine.m_szOrderNo = m_szOrderNo;
			m_wndOrderNo.EnableWindow(FALSE);
			m_wndOrderDate.EnableWindow(FALSE);
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 2, 3, 6, -1);
			m_wndLiquidatedLine.m_szOrderNo = m_szOrderNo;
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
			m_wndLiquidatedLine.m_szOrderNo = m_szOrderNo;
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
/*void CFAMLiquidatedDialog::OnOrderNoChange(){
	
} */
/*void CFAMLiquidatedDialog::OnOrderNoSetfocus(){
	
} */
/*void CFAMLiquidatedDialog::OnOrderNoKillfocus(){
	
} */
int CFAMLiquidatedDialog::OnOrderNoCheckValue(){
	return 0;
} 
/*void CFAMLiquidatedDialog::OnOrderDateChange(){
	
} */
/*void CFAMLiquidatedDialog::OnOrderDateSetfocus(){
	
} */
/*void CFAMLiquidatedDialog::OnOrderDateKillfocus(){
	
} */
int CFAMLiquidatedDialog::OnOrderDateCheckValue(){
	return 0;
} 
/*void CFAMLiquidatedDialog::OnNoteChange(){
	
} */
/*void CFAMLiquidatedDialog::OnNoteSetfocus(){
	
} */
/*void CFAMLiquidatedDialog::OnNoteKillfocus(){
	
} */
int CFAMLiquidatedDialog::OnNoteCheckValue(){
	return 0;
} 
void CFAMLiquidatedDialog::OnLineTabSelectChange(int nOld, int nNew){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAMLiquidatedDialog::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnAddFAMLiquidatedDialog();
} 
void CFAMLiquidatedDialog::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnEditFAMLiquidatedDialog();
} 
void CFAMLiquidatedDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveFAMLiquidatedDialog();
} 
void CFAMLiquidatedDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancelFAMLiquidatedDialog();
} 
void CFAMLiquidatedDialog::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CReport rpt;
	CReportSection *rptDetail;
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szDate;
	int nIndex = 1;

	szSQL.Format(_T("Select fll_assetno, fll_name, fa_model, fa_serial from fam_liquidated_line ") \
				_T("	LEFT JOIN fam_asset ON(fa_assetno = fll_assetno) ") \
				_T(" WHERE fll_orderno = '%s'"), m_szOrderNo);

	BeginWaitCursor();
	rs.ExecSQL(szSQL);

	if(rs.IsEOF())
	{
		ShowMessageBox(_T("No Data"), MB_OK | MB_ICONERROR);
		return;
	}
	
	if(!rpt.Init(_T("Reports/FAM/FAM_PHIEUTHANHLY.RPT")))
		return;
	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), _T("\x42\x1ED8 QU\x1ED0\x43 PH\xD2NG"));
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), _T("\x42\x1EC7nh vi\x1EC7n TWQ\x110 \x31\x30\x38"));
	rpt.GetReportHeader()->SetValue(_T("Department"), _T("KHO\x41 TR\x41NG \x42\x1ECA"));
	rpt.GetReportHeader()->SetValue(_T("OrderDate"), CDate::Convert(m_szOrderDate, yyyymmdd, ddmmyyyy));
	rpt.GetReportHeader()->SetValue(_T("InvoiceNo"), m_szOrderNo);
	rpt.GetReportHeader()->SetValue(_T("Reason"), m_szNote);

	while(!rs.IsEOF())
	{
		
		rptDetail = rpt.AddDetail();

		tmpStr.Format(_T("%d"), nIndex++);
		rptDetail->SetValue(_T("1"), tmpStr);

		rs.GetValue(_T("fll_assetno"), tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);

		rs.GetValue(_T("fa_model"), tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);

		rs.GetValue(_T("fa_serial"), tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);

		rs.GetValue(_T("fll_name"), tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);

		rs.MoveNext();
	}
	CString szSysDate;
	szSysDate = pMF->GetSysDate(); 
	tmpStr.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),szSysDate.Right(2),szSysDate.Mid(5,2),szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), tmpStr);

	EndWaitCursor();
	rpt.PrintPreview();
} 
void CFAMLiquidatedDialog::OnImportSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL;
	int retMsg = ShowMessageBox(_T("Do you want to post order?(Y/N)"), MB_YESNO|MB_DEFBUTTON1);
	if(retMsg == IDYES)
	{
		szSQL.Format(_T("UPDATE fam_liquidated SET fl_status = 'Y' WHERE fl_orderno = '%s'"), m_szOrderNo);
		
		pMF->ExecSQL(szSQL);
		SetMode(VM_VIEW);
		m_wndImport.EnableWindow(FALSE);
		m_wndLiquidatedLine.SetMode(VM_VIEW);
	}else
		return;
} 
void CFAMLiquidatedDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	pMF->m_wndLiquidated.OnOrderListLoadData();
	OnCancel();
} 
int CFAMLiquidatedDialog::OnAddFAMLiquidatedDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	m_wndLiquidatedLine.m_wndItemList.DeleteAllItems();
	return 0;
}
int CFAMLiquidatedDialog::OnEditFAMLiquidatedDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CFAMLiquidatedDialog::OnDeleteFAMLiquidatedDialog(){
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
 		OnCancelFAMLiquidatedDialog();
 	}
	return 0;
}
int CFAMLiquidatedDialog::OnSaveFAMLiquidatedDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
 		szSQL = m_tbl_liquid.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
		szWhere.Format(_T(" WHERE fl_orderno = '%s'"), m_szOrderNo);
 		szSQL = m_tbl_liquid.GetUpdateSQL(_T("fl_createdby,fl_createddate,fl_orderno"));
 		szSQL += szWhere;
 	}

 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
 		if(GetMode() == VM_EDIT){
			SetMode(VM_VIEW);
			m_wndLiquidatedLine.SetMode(VM_ADD);
			m_wndLiquidatedLine.m_wndDepartment.SetFocus();
		}
		else
		{
			szSQL.Format(_T("AD_GETNEXTVAL_F('FAM_LIQUID_ORDER_NO','Y','TL') "));
			m_szOrderNo = pMF->ExecDML(szSQL);
			GetDataToScreen();
 			SetMode(VM_VIEW);
			m_wndLiquidatedLine.SetMode(VM_ADD);
			m_wndLiquidatedLine.OnItemListLoadData();
			m_wndLiquidatedLine.m_wndDepartment.SetFocus();
		}
		return 1;
 	}
 	else
 	{
 	}
 	return ret;
}
int CFAMLiquidatedDialog::OnCancelFAMLiquidatedDialog(){
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
int CFAMLiquidatedDialog::OnFAMLiquidatedDialogListLoadData(){
	return 0;
}
