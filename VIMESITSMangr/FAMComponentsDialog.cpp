#include "FAMComponentsDialog.h"
#include "MainFrm.h"
#include "ReportDocument.h"
/*static void _OnOrderNoChangeFnc(CWnd *pWnd){
	((CFAMComponentsDialog *)pWnd)->OnOrderNoChange();
} */
/*static void _OnOrderNoSetfocusFnc(CWnd *pWnd){
	((CFAMComponentsDialog *)pWnd)->OnOrderNoSetfocus();} */ 
/*static void _OnOrderNoKillfocusFnc(CWnd *pWnd){
	((CFAMComponentsDialog *)pWnd)->OnOrderNoKillfocus();
} */
static int _OnOrderNoCheckValueFnc(CWnd *pWnd){
	return ((CFAMComponentsDialog *)pWnd)->OnOrderNoCheckValue();
} 
/*static void _OnOrderDateChangeFnc(CWnd *pWnd){
	((CFAMComponentsDialog *)pWnd)->OnOrderDateChange();
} */
/*static void _OnOrderDateSetfocusFnc(CWnd *pWnd){
	((CFAMComponentsDialog *)pWnd)->OnOrderDateSetfocus();} */ 
/*static void _OnOrderDateKillfocusFnc(CWnd *pWnd){
	((CFAMComponentsDialog *)pWnd)->OnOrderDateKillfocus();
} */
static int _OnOrderDateCheckValueFnc(CWnd *pWnd){
	return ((CFAMComponentsDialog *)pWnd)->OnOrderDateCheckValue();
} 
/*static void _OnNoteChangeFnc(CWnd *pWnd){
	((CFAMComponentsDialog *)pWnd)->OnNoteChange();
} */
/*static void _OnNoteSetfocusFnc(CWnd *pWnd){
	((CFAMComponentsDialog *)pWnd)->OnNoteSetfocus();} */ 
/*static void _OnNoteKillfocusFnc(CWnd *pWnd){
	((CFAMComponentsDialog *)pWnd)->OnNoteKillfocus();
} */
static int _OnNoteCheckValueFnc(CWnd *pWnd){
	return ((CFAMComponentsDialog *)pWnd)->OnNoteCheckValue();
} 
static void _OnLineTabSelectChangeFnc(CWnd *pWnd, int nOld, int nNew){
	((CFAMComponentsDialog*)pWnd)->OnLineTabSelectChange(nOld, nNew);
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CFAMComponentsDialog *pVw = (CFAMComponentsDialog *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CFAMComponentsDialog *pVw = (CFAMComponentsDialog *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CFAMComponentsDialog *pVw = (CFAMComponentsDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CFAMComponentsDialog *pVw = (CFAMComponentsDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CFAMComponentsDialog *pVw = (CFAMComponentsDialog *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnImportSelectFnc(CWnd *pWnd){
	CFAMComponentsDialog *pVw = (CFAMComponentsDialog *)pWnd;
	pVw->OnImportSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CFAMComponentsDialog *pVw = (CFAMComponentsDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddFAMComponentsDialogFnc(CWnd *pWnd){
	 return ((CFAMComponentsDialog*)pWnd)->OnAddFAMComponentsDialog();
} 
static int _OnEditFAMComponentsDialogFnc(CWnd *pWnd){
	 return ((CFAMComponentsDialog*)pWnd)->OnEditFAMComponentsDialog();
} 
static int _OnDeleteFAMComponentsDialogFnc(CWnd *pWnd){
	 return ((CFAMComponentsDialog*)pWnd)->OnDeleteFAMComponentsDialog();
} 
static int _OnSaveFAMComponentsDialogFnc(CWnd *pWnd){
	 return ((CFAMComponentsDialog*)pWnd)->OnSaveFAMComponentsDialog();
} 
static int _OnCancelFAMComponentsDialogFnc(CWnd *pWnd){
	 return ((CFAMComponentsDialog*)pWnd)->OnCancelFAMComponentsDialog();
} 
CFAMComponentsDialog::CFAMComponentsDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CFAMComponentsDialog::~CFAMComponentsDialog(){
}
void CFAMComponentsDialog::OnCreateComponents(){
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

	m_wndCL.Create(&m_wndLineTab);
	m_wndLineTab.Add(_T("Items"), &m_wndCL);
	m_wndCL.OnInitDialog();
	m_wndCL.SetMode(VM_NONE);


}
void CFAMComponentsDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndOrderNo.SetLimitText(1024);
	m_wndOrderNo.SetCheckValue(true);
	m_wndOrderDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndOrderDate.SetCheckValue(true);
	m_wndNote.SetLimitText(250);

	m_tbl_components.SetTableName(_T("fam_components"));
	m_tbl_components.AddField(_T("fc_createdby"), dfText, 15);
	m_tbl_components.AddField(_T("fc_createddate"), dfDateTime);
	m_tbl_components.AddField(_T("fc_updatedby"), dfText, 15);
	m_tbl_components.AddField(_T("fc_updateddate"), dfDateTime);
	m_tbl_components.AddField(_T("fc_orderno"), dfText, 15);
	m_tbl_components.AddField(_T("fc_orderdate"), dfDateTime);
	m_tbl_components.AddField(_T("fc_status"), dfText, 1);
	m_tbl_components.AddField(_T("fc_note"), dfText, 250);
	m_tbl_components.AddField(_T("fc_org_id"), dfText, 3);

}
void CFAMComponentsDialog::OnSetWindowEvents(){
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
		m_wndCL.SetMode(VM_EDIT);
	}else if(GetMode() == VM_VIEW)
		{
			SetMode(VM_VIEW);
			m_wndCL.SetMode(VM_VIEW);
			GetDataToScreen();
		}

}
void CFAMComponentsDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndOrderNo.GetDlgCtrlID(), m_szOrderNo);
	DDX_TextEx(pDX, m_wndOrderDate.GetDlgCtrlID(), m_szOrderDate);
	DDX_Text(pDX, m_wndNote.GetDlgCtrlID(), m_szNote);

}
void CFAMComponentsDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM fam_components WHERE fc_orderno = '%s'"), m_szOrderNo);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("fc_orderno"), m_szOrderNo);
		rs.GetValue(_T("fc_orderdate"), m_szOrderDate);
		rs.GetValue(_T("fc_note"), m_szNote);
		UpdateData(FALSE);
	}

}
void CFAMComponentsDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_tbl_components.SetValue(_T("fc_createdby"), pMF->GetCurrentUser());
	m_tbl_components.SetValue(_T("fc_createddate"), pMF->GetSysDateTime());
	m_tbl_components.SetValue(_T("fc_updatedby"), pMF->GetCurrentUser());
	m_tbl_components.SetValue(_T("fc_updateddate"), pMF->GetSysDateTime());
	if(GetMode() == VM_ADD)
	{
		CString szSQL;
		szSQL.Format(_T("AD_GETNEXTVAL_F('FAM_COMPONENT_ORDER_NO','N','LK') "));
		m_szOrderNo = pMF->ExecDML(szSQL);
	}
	m_tbl_components.SetValue(_T("fc_orderno"), m_szOrderNo);
	m_tbl_components.SetValue(_T("fc_orderdate"), m_szOrderDate);
	m_tbl_components.SetValue(_T("fc_status"), _T("N"));
	m_tbl_components.SetValue(_T("fc_note"), m_szNote);
	m_tbl_components.SetValue(_T("fc_org_id"), pMF->GetModuleID());

}
void CFAMComponentsDialog::SetDefaultValues(){

	m_szOrderNo.Empty();
	m_szOrderDate.Empty();
	m_szNote.Empty();

}
int CFAMComponentsDialog::SetMode(int nMode){
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
			szSQL.Format(_T("AD_GETNEXTVAL_F('FAM_COMPONENT_ORDER_NO','N','LK') "));
			m_szOrderNo = pMF->ExecDML(szSQL);
			m_wndCL.m_szOrderNo = m_szOrderNo;
			m_wndOrderNo.EnableWindow(FALSE);
			m_wndOrderDate.EnableWindow(FALSE);
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 2, 3, 6, -1);
			m_wndCL.m_szOrderNo = m_szOrderNo;
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
			m_wndCL.m_szOrderNo = m_szOrderNo;
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
/*void CFAMComponentsDialog::OnOrderNoChange(){
	
} */
/*void CFAMComponentsDialog::OnOrderNoSetfocus(){
	
} */
/*void CFAMComponentsDialog::OnOrderNoKillfocus(){
	
} */
int CFAMComponentsDialog::OnOrderNoCheckValue(){
	return 0;
} 
/*void CFAMComponentsDialog::OnOrderDateChange(){
	
} */
/*void CFAMComponentsDialog::OnOrderDateSetfocus(){
	
} */
/*void CFAMComponentsDialog::OnOrderDateKillfocus(){
	
} */
int CFAMComponentsDialog::OnOrderDateCheckValue(){
	return 0;
} 
/*void CFAMComponentsDialog::OnNoteChange(){
	
} */
/*void CFAMComponentsDialog::OnNoteSetfocus(){
	
} */
/*void CFAMComponentsDialog::OnNoteKillfocus(){
	
} */
int CFAMComponentsDialog::OnNoteCheckValue(){
	return 0;
} 
void CFAMComponentsDialog::OnLineTabSelectChange(int nOld, int nNew){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAMComponentsDialog::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnAddFAMComponentsDialog();
} 
void CFAMComponentsDialog::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnEditFAMComponentsDialog();
} 
void CFAMComponentsDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveFAMComponentsDialog();
} 
void CFAMComponentsDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancelFAMComponentsDialog();
} 
void CFAMComponentsDialog::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CReport rpt;
	CReportSection *rptDetail;
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szDate;
	long double nGroupTotal[11];
	long double nTotal[11];
	double nCost;
	int nIndex = 1;

	szSQL.Format(_T("SELECT fcl_assetno, ") \
			_T(" fa_name, fa_model, fa_serial, ") \
			_T(" fcl_name, fcl_unit, fcl_qty, fcl_unitprice, fcl_money ") \
			_T(" FROM fam_components_line ") \
			_T(" LEFT JOIN fam_asset ON(fa_assetno = fcl_assetno) ") \
			_T(" WHERE fcl_orderno = '%s' "), m_szOrderNo);
	
	BeginWaitCursor();
	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
	{
		ShowMessageBox(_T("No Data"), MB_OK | MB_ICONERROR);
		return;
	}
	
	if(!rpt.Init(_T("Reports/FAM/FAM_PHIEUDUTRUVTLK.RPT")))
		return;
	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), _T("\x42\x1ED8 QU\x1ED0\x43 PH\xD2NG"));
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), _T("\x42\x1EC7nh vi\x1EC7n TWQ\x110 \x31\x30\x38"));
	rpt.GetReportHeader()->SetValue(_T("Department"), _T("KHO\x41 TR\x41NG \x42\x1ECA"));
	rpt.GetReportHeader()->SetValue(_T("OrderDate"), CDate::Convert(m_szOrderDate, yyyymmdd, ddmmyyyy));
	rpt.GetReportHeader()->SetValue(_T("InvoiceNo"), m_szOrderNo);
	rpt.GetReportHeader()->SetValue(_T("Reason"), m_szNote);

	for(int i = 9; i < 11; i++)
	{
		nGroupTotal[i] = 0;
		nTotal[i] = 0;
	}

	while(!rs.IsEOF())
	{
		if(nGroupTotal[9] > 0)
		{
			rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
			for(int i = 9; i < 11; i++)
			{
				FormatCurrency(nGroupTotal[i], tmpStr);
				szTemp.Format(_T("s%d"), i);
				rptDetail->SetValue(szTemp, tmpStr);
				nTotal[i] += nGroupTotal[i];
				nGroupTotal[i] = 0;
			}
			
		}
		rptDetail = rpt.AddDetail();

		tmpStr.Format(_T("%d"), nIndex++);
		rptDetail->SetValue(_T("1"), tmpStr);

		rs.GetValue(_T("fcl_assetno"), tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);

		rs.GetValue(_T("fa_name"), tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);

		rs.GetValue(_T("fa_model"), tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);

		rs.GetValue(_T("fa_serial"), tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);

		rs.GetValue(_T("fcl_name"), tmpStr);
		rptDetail->SetValue(_T("6"), tmpStr);

		rs.GetValue(_T("fcl_unit"), tmpStr);
		rptDetail->SetValue(_T("7"), tmpStr);

		rs.GetValue(_T("fcl_qty"), tmpStr);
		rptDetail->SetValue(_T("8"), tmpStr);

		rs.GetValue(_T("fcl_unitprice"), nCost);
		nGroupTotal[9] += nCost;
		FormatCurrency(nCost, tmpStr);
		rptDetail->SetValue(_T("9"), tmpStr);
	
		rs.GetValue(_T("fcl_money"), nCost);
		nGroupTotal[10] += nCost;
		FormatCurrency(nCost, tmpStr);
		rptDetail->SetValue(_T("10"), tmpStr);

		rs.MoveNext();
	}
	if(nGroupTotal[9] > 0)
	{
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
		for(int i = 9; i < 11; i++)
		{
			FormatCurrency(nGroupTotal[i], tmpStr);
			szTemp.Format(_T("s%d"), i);
			rptDetail->SetValue(szTemp, tmpStr);
			nTotal[i] += nGroupTotal[i];
			nGroupTotal[i] = 0;
		}
		
	}

	if(nTotal[10] > 0)
	{
		FormatCurrency(nTotal[10], tmpStr);
		rpt.GetReportFooter()->SetValue(_T("TotalItem"), tmpStr);
	}
	CString szMoney;
	tmpStr.Replace(_T("."), _T(""));
	MoneyToString(tmpStr, szMoney);
	rpt.GetReportFooter()->SetValue(_T("SumInWord"), szMoney + _T(" \x111\x1ED3ng"));

	CString szSysDate;
	szSysDate = pMF->GetSysDate(); 
	tmpStr.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),szSysDate.Right(2),szSysDate.Mid(5,2),szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), tmpStr);

	EndWaitCursor();
	rpt.PrintPreview();
} 
void CFAMComponentsDialog::OnImportSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL;
	int retMsg = ShowMessageBox(_T("Do you want to post order?(Y/N)"), MB_YESNO|MB_DEFBUTTON1);
	if(retMsg == IDYES)
	{
		szSQL.Format(_T("UPDATE fam_components SET fc_status = 'Y' WHERE fc_orderno = '%s'"), m_szOrderNo);
		pMF->ExecSQL(szSQL);
		SetMode(VM_VIEW);
		m_wndImport.EnableWindow(FALSE);
		m_wndCL.SetMode(VM_VIEW);
	}else
		return;
} 
void CFAMComponentsDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	pMF->m_wndComponents.OnOrderListLoadData();
	OnCancel();
} 
int CFAMComponentsDialog::OnAddFAMComponentsDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	m_wndCL.m_wndItemList.DeleteAllItems();
	return 0;
}
int CFAMComponentsDialog::OnEditFAMComponentsDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CFAMComponentsDialog::OnDeleteFAMComponentsDialog(){
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
 		OnCancelFAMComponentsDialog();
 	}
	return 0;
}
int CFAMComponentsDialog::OnSaveFAMComponentsDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
 		szSQL = m_tbl_components.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
		szWhere.Format(_T(" WHERE fc_orderno = '%s'"), m_szOrderNo);
 		szSQL = m_tbl_components.GetUpdateSQL(_T("fc_createdby, fc_createddate, fc_orderno"));
 		szSQL += szWhere;
 	}

 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
 		if(GetMode() == VM_EDIT){
			SetMode(VM_VIEW);
			m_wndCL.SetMode(VM_ADD);
			m_wndCL.m_wndDepartment.SetFocus();
		}
		else
		{
			szSQL.Format(_T("AD_GETNEXTVAL_F('FAM_COMPONENT_ORDER_NO','Y','LK') "));
			m_szOrderNo = pMF->ExecDML(szSQL);
			GetDataToScreen();
 			SetMode(VM_VIEW);
			m_wndCL.SetMode(VM_ADD);
			m_wndCL.OnItemListLoadData();
			m_wndCL.m_wndDepartment.SetFocus();
		}
		return 1;
 	}
 	else
 	{
 	}
 	return ret;
}
int CFAMComponentsDialog::OnCancelFAMComponentsDialog(){
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
int CFAMComponentsDialog::OnFAMComponentsDialogListLoadData(){
	return 0;
}
