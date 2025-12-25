#include "FAMInventDialog.h"
#include "MainFrm.h"
#include "ReportDocument.h"
/*static void _OnOrderNoChangeFnc(CWnd *pWnd){
	((CFAMInventDialog *)pWnd)->OnOrderNoChange();
} */
/*static void _OnOrderNoSetfocusFnc(CWnd *pWnd){
	((CFAMInventDialog *)pWnd)->OnOrderNoSetfocus();} */ 
/*static void _OnOrderNoKillfocusFnc(CWnd *pWnd){
	((CFAMInventDialog *)pWnd)->OnOrderNoKillfocus();
} */
static int _OnOrderNoCheckValueFnc(CWnd *pWnd){
	return ((CFAMInventDialog *)pWnd)->OnOrderNoCheckValue();
} 
/*static void _OnOrderDateChangeFnc(CWnd *pWnd){
	((CFAMInventDialog *)pWnd)->OnOrderDateChange();
} */
/*static void _OnOrderDateSetfocusFnc(CWnd *pWnd){
	((CFAMInventDialog *)pWnd)->OnOrderDateSetfocus();} */ 
/*static void _OnOrderDateKillfocusFnc(CWnd *pWnd){
	((CFAMInventDialog *)pWnd)->OnOrderDateKillfocus();
} */
static int _OnOrderDateCheckValueFnc(CWnd *pWnd){
	return ((CFAMInventDialog *)pWnd)->OnOrderDateCheckValue();
}
/*static void _OnInventDateChangeFnc(CWnd *pWnd){
	((CFAMInventDialog *)pWnd)->OnInventDateChange();
} */
/*static void _OnInventDateSetfocusFnc(CWnd *pWnd){
	((CFAMInventDialog *)pWnd)->OnInventDateSetfocus();} */ 
/*static void _OnInventDateKillfocusFnc(CWnd *pWnd){
	((CFAMInventDialog *)pWnd)->OnInventDateKillfocus();
} */
static int _OnInventDateCheckValueFnc(CWnd *pWnd){
	return ((CFAMInventDialog *)pWnd)->OnInventDateCheckValue();
}
/*static void _OnNoteChangeFnc(CWnd *pWnd){
	((CFAMInventDialog *)pWnd)->OnNoteChange();
} */
/*static void _OnNoteSetfocusFnc(CWnd *pWnd){
	((CFAMInventDialog *)pWnd)->OnNoteSetfocus();} */ 
/*static void _OnNoteKillfocusFnc(CWnd *pWnd){
	((CFAMInventDialog *)pWnd)->OnNoteKillfocus();
} */
static int _OnNoteCheckValueFnc(CWnd *pWnd){
	return ((CFAMInventDialog *)pWnd)->OnNoteCheckValue();
} 
static void _OnLineTabSelectChangeFnc(CWnd *pWnd, int nOld, int nNew){
	((CFAMInventDialog*)pWnd)->OnLineTabSelectChange(nOld, nNew);
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CFAMInventDialog *pVw = (CFAMInventDialog *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CFAMInventDialog *pVw = (CFAMInventDialog *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CFAMInventDialog *pVw = (CFAMInventDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CFAMInventDialog *pVw = (CFAMInventDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CFAMInventDialog *pVw = (CFAMInventDialog *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnImportSelectFnc(CWnd *pWnd){
	CFAMInventDialog *pVw = (CFAMInventDialog *)pWnd;
	pVw->OnImportSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CFAMInventDialog *pVw = (CFAMInventDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddFAMInventDialogFnc(CWnd *pWnd){
	 return ((CFAMInventDialog*)pWnd)->OnAddFAMInventDialog();
} 
static int _OnEditFAMInventDialogFnc(CWnd *pWnd){
	 return ((CFAMInventDialog*)pWnd)->OnEditFAMInventDialog();
} 
static int _OnDeleteFAMInventDialogFnc(CWnd *pWnd){
	 return ((CFAMInventDialog*)pWnd)->OnDeleteFAMInventDialog();
} 
static int _OnSaveFAMInventDialogFnc(CWnd *pWnd){
	 return ((CFAMInventDialog*)pWnd)->OnSaveFAMInventDialog();
} 
static int _OnCancelFAMInventDialogFnc(CWnd *pWnd){
	 return ((CFAMInventDialog*)pWnd)->OnCancelFAMInventDialog();
} 
CFAMInventDialog::CFAMInventDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CFAMInventDialog::~CFAMInventDialog(){
}
void CFAMInventDialog::OnCreateComponents(){
	m_wndGeneralInformation.Create(this, _T("General Information"), 5, 5, 805, 60);
	m_wndOrderNoLabel.Create(this, _T("Order No"), 10, 30, 90, 55);
	m_wndOrderNo.Create(this,95, 30, 195, 55); 
	m_wndOrderDateLabel.Create(this, _T("Order Date"), 200, 30, 280, 55);
	m_wndOrderDate.Create(this,285, 30, 405, 55); 
	m_wndInventDateLabel.Create(this, _T("Invent Date"), 410, 30, 490, 55);
	m_wndInventDate.Create(this,495, 30, 575, 55); 
	m_wndNoteLabel.Create(this, _T("Note"), 580, 30, 660, 55);
	m_wndNote.Create(this,665, 30, 800, 55);  
	m_wndLineTab.Create(this,5, 65, 805, 490); 
	m_wndAdd.Create(this, _T("Add"), 216, 495, 296, 520);
	m_wndEdit.Create(this, _T("Edit"), 300, 495, 380, 520);
	m_wndSave.Create(this, _T("Save"), 385, 495, 465, 520);
	m_wndCancel.Create(this, _T("Cancel"), 470, 495, 550, 520);
	m_wndPrint.Create(this, _T("Print"), 555, 495, 635, 520);
	m_wndImport.Create(this, _T("Post1"), 640, 495, 720, 520);
	m_wndClose.Create(this, _T("Close"), 725, 495, 805, 520);

	m_wndInvLine.Create(&m_wndLineTab);
	m_wndLineTab.Add(_T("Items"), &m_wndInvLine);
	m_wndInvLine.OnInitDialog();
	m_wndInvLine.SetMode(VM_NONE);

}
void CFAMInventDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndOrderNo.SetLimitText(1024);
	m_wndOrderNo.SetCheckValue(true);
	m_wndOrderDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndOrderDate.SetCheckValue(true);
	m_wndInventDate.SetCheckValue(true);
	m_wndNote.SetLimitText(250);

	m_tbl_invent.SetTableName(_T("fam_invent"));
	m_tbl_invent.AddField(_T("fi_createdby"), dfText, 15);
	m_tbl_invent.AddField(_T("fi_createddate"), dfDateTime);
	m_tbl_invent.AddField(_T("fi_updatedby"), dfText, 15);
	m_tbl_invent.AddField(_T("fi_updateddate"), dfDateTime);
	m_tbl_invent.AddField(_T("fi_orderno"), dfText, 15);
	m_tbl_invent.AddField(_T("fi_orderdate"), dfDateTime);
	m_tbl_invent.AddField(_T("fi_inventdate"), dfDate);
	m_tbl_invent.AddField(_T("fi_status"), dfText, 1);
	m_tbl_invent.AddField(_T("fi_note"), dfText, 250);
	m_tbl_invent.AddField(_T("fi_org_id"), dfText, 5);
}
void CFAMInventDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndOrderNo.SetEvent(WE_CHANGE, _OnOrderNoChangeFnc);
	//m_wndOrderNo.SetEvent(WE_SETFOCUS, _OnOrderNoSetfocusFnc);
	//m_wndOrderNo.SetEvent(WE_KILLFOCUS, _OnOrderNoKillfocusFnc);
	m_wndOrderNo.SetEvent(WE_CHECKVALUE, _OnOrderNoCheckValueFnc);
	//m_wndOrderDate.SetEvent(WE_CHANGE, _OnOrderDateChangeFnc);
	//m_wndOrderDate.SetEvent(WE_SETFOCUS, _OnOrderDateSetfocusFnc);
	//m_wndOrderDate.SetEvent(WE_KILLFOCUS, _OnOrderDateKillfocusFnc);
	m_wndOrderDate.SetEvent(WE_CHECKVALUE, _OnOrderDateCheckValueFnc);
	//m_wndInventDate.SetEvent(WE_CHANGE, _OnInventDateChangeFnc);
	//m_wndInventDate.SetEvent(WE_SETFOCUS, _OnInventDateSetfocusFnc);
	//m_wndInventDate.SetEvent(WE_KILLFOCUS, _OnInventDateKillfocusFnc);
	m_wndInventDate.SetEvent(WE_CHECKVALUE, _OnInventDateCheckValueFnc);
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
		m_wndInvLine.SetMode(VM_EDIT);
	}else if(GetMode() == VM_VIEW)
		{
			SetMode(VM_VIEW);
			m_wndInvLine.SetMode(VM_VIEW);
			GetDataToScreen();
		}

}
void CFAMInventDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndOrderNo.GetDlgCtrlID(), m_szOrderNo);
	DDX_TextEx(pDX, m_wndOrderDate.GetDlgCtrlID(), m_szOrderDate);
	DDX_TextEx(pDX, m_wndInventDate.GetDlgCtrlID(), m_szInventDate);
	DDX_Text(pDX, m_wndNote.GetDlgCtrlID(), m_szNote);

}
void CFAMInventDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM fam_invent WHERE fi_orderno = '%s'"), m_szOrderNo);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("fi_orderno"), m_szOrderNo);
		rs.GetValue(_T("fi_orderdate"), m_szOrderDate);
		rs.GetValue(_T("fi_inventdate"), m_szInventDate);
		rs.GetValue(_T("fi_note"), m_szNote);
		UpdateData(FALSE);
	}

}
void CFAMInventDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_tbl_invent.SetValue(_T("fi_createdby"), pMF->GetCurrentUser());
	m_tbl_invent.SetValue(_T("fi_createddate"), pMF->GetSysDateTime());
	m_tbl_invent.SetValue(_T("fi_updatedby"), pMF->GetCurrentUser());
	m_tbl_invent.SetValue(_T("fi_updateddate"), pMF->GetSysDateTime());
	if(GetMode() == VM_ADD)
	{
		CString szSQL;
		szSQL.Format(_T("AD_GETNEXTVAL_F('FAM_INVENT_ORDER_NO','N','KK') "));
		m_szOrderNo = pMF->ExecDML(szSQL);
	}
	m_tbl_invent.SetValue(_T("fi_orderno"), m_szOrderNo);
	m_tbl_invent.SetValue(_T("fi_orderdate"), m_szOrderDate);
	m_tbl_invent.SetValue(_T("fi_inventdate"), m_szInventDate);
	m_tbl_invent.SetValue(_T("fi_status"), _T("N"));
	m_tbl_invent.SetValue(_T("fi_note"), m_szNote);
	m_tbl_invent.SetValue(_T("fi_org_id"), pMF->GetModuleID());
}
void CFAMInventDialog::SetDefaultValues(){

	m_szOrderNo.Empty();
	m_szOrderDate.Empty();
	m_szNote.Empty();

}
int CFAMInventDialog::SetMode(int nMode){
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
			szSQL.Format(_T("AD_GETNEXTVAL_F('FAM_INVENT_ORDER_NO','N','KK') "));
			m_szOrderNo = pMF->ExecDML(szSQL);
			m_wndInvLine.m_szOrderNo = m_szOrderNo;
			m_wndOrderNo.EnableWindow(FALSE);
			m_wndOrderDate.EnableWindow(FALSE);
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 2, 3, 6, -1);
			m_wndInvLine.m_szOrderNo = m_szOrderNo;
			m_wndOrderNo.EnableWindow(FALSE);
			m_wndOrderDate.EnableWindow(FALSE);
			m_wndInventDate.EnableWindow(FALSE);
			if(m_szStatus == _T("Y"))
				m_wndImport.EnableWindow(FALSE);
 			break;
 		case VM_VIEW: 
 			EnableControls(FALSE);
 			EnableButtons(FALSE, 2, 3, -1);
			if(m_szStatus == _T("Y"))
			{
				m_wndAdd.EnableWindow(FALSE);
				m_wndEdit.EnableWindow(FALSE);
				m_wndImport.EnableWindow(FALSE);
			}
			m_wndInvLine.m_szOrderNo = m_szOrderNo;
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
/*void CFAMInventDialog::OnOrderNoChange(){
	
} */
/*void CFAMInventDialog::OnOrderNoSetfocus(){
	
} */
/*void CFAMInventDialog::OnOrderNoKillfocus(){
	
} */
int CFAMInventDialog::OnOrderNoCheckValue(){
	return 0;
} 
/*void CFAMInventDialog::OnOrderDateChange(){
	
} */
/*void CFAMInventDialog::OnOrderDateSetfocus(){
	
} */
/*void CFAMInventDialog::OnOrderDateKillfocus(){
	
} */
int CFAMInventDialog::OnOrderDateCheckValue(){
	return 0;
}
/*void CFAMInventDialog::OnInventDateChange(){
	
} */
/*void CFAMInventDialog::OnInventDateSetfocus(){
	
} */
/*void CFAMInventDialog::OnInventDateKillfocus(){
	
} */
int CFAMInventDialog::OnInventDateCheckValue(){
	return 0;
} 
/*void CFAMInventDialog::OnNoteChange(){
	
} */
/*void CFAMInventDialog::OnNoteSetfocus(){
	
} */
/*void CFAMInventDialog::OnNoteKillfocus(){
	
} */
int CFAMInventDialog::OnNoteCheckValue(){
	return 0;
} 
void CFAMInventDialog::OnLineTabSelectChange(int nOld, int nNew){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAMInventDialog::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnAddFAMInventDialog();
} 
void CFAMInventDialog::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnEditFAMInventDialog();
} 
void CFAMInventDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveFAMInventDialog();
} 
void CFAMInventDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancelFAMInventDialog();
} 
void CFAMInventDialog::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CReport rpt;
	CReportSection *rptDetail;
	CRecord rs(&pMF->m_db);
	CRecord rs2(&pMF->m_db);
	CRecord rs3(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szDate, m_szDepts, szSQL2, szSQL3;
	int nIndex = 1;

	/*szSQL.Format(_T("Select fil_assetno, fil_name, fil_qtylevel, fa_model, fa_serial, fil_dept from fam_invent_line ") \
				_T(" LEFT JOIN fam_asset ON(fa_assetno = fil_assetno) ") \
				_T(" WHERE fil_orderno = '%s'"), m_szOrderNo);*/
	szSQL.Format(_T("Select fil_assetno, fil_name, fil_qtylevel, fa_model, fa_serial, fil_dept, ") \
				_T(" (SELECT famm_name FROM fam_manufacture WHERE famm_id = fa_mfgid) AS hangsx, case when extract(year from fa_useddate) > 1752 then extract(year from fa_useddate) else 0 end as namsd,") \
				_T(" fa_mfgdate as namsx, (SELECT sc_name FROM sys_country WHERE  sc_id = fa_madein) AS nuocsx, fil_note as note, ") \
				_T(" (select max(fil_qtylevel) from fam_invent_line where fil_assetno = fil.fil_assetno and fil_createdby < fil.fil_createdby) as oldqty ") \
				_T(" FROM fam_invent_line fil ") \
				_T(" LEFT JOIN fam_asset ON(fa_assetno = fil.fil_assetno) ") \
				_T(" WHERE fil.fil_orderno = '%s' "), m_szOrderNo);
	
	BeginWaitCursor();
	rs.ExecSQL(szSQL);
	
	if(rs.IsEOF())
	{
		ShowMessageBox(_T("No Data"), MB_OK | MB_ICONERROR);
		return;
	}
	//Hien thi khoa
	szSQL2.Format(_T("select distinct fil_dept from fam_invent_line where fil_orderno = '%s'"), m_szOrderNo);
	rs2.ExecSQL(szSQL2);
	while(!rs2.IsEOF())
	{
		rs2.GetValue(_T("fil_dept"), szTemp);
		szTemp += _T(", ");
		m_szDepts += szTemp;
		rs2.MoveNext();
	}
	if(!rpt.Init(_T("Reports/FAM/FAM_PHIEUKIEMKE.RPT")))
		return;
	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), _T("\x42\x1ED8 QU\x1ED0\x43 PH\xD2NG"));
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), _T("\x42\x1EC7nh vi\x1EC7n TWQ\x110 \x31\x30\x38"));
	rpt.GetReportHeader()->SetValue(_T("Department"), _T("KHO\x41 TR\x41NG \x42\x1ECA"));
	rpt.GetReportHeader()->SetValue(_T("OrderDate"), CDate::Convert(m_szOrderDate, yyyymmdd, ddmmyyyy));
	rpt.GetReportHeader()->SetValue(_T("InvoiceNo"), m_szOrderNo);
	rpt.GetReportHeader()->SetValue(_T("Reason"), m_szNote);
	rpt.GetReportHeader()->SetValue(_T("Dept"), m_szDepts);
	rpt.GetReportHeader()->SetValue(_T("InventDate"), m_szInventDate);

	while(!rs.IsEOF())
	{
		rptDetail = rpt.AddDetail();

		tmpStr.Format(_T("%d"), nIndex++);
		rptDetail->SetValue(_T("1"), tmpStr);

		rs.GetValue(_T("fil_assetno"), tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);

		rs.GetValue(_T("fil_name"), tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);

		rs.GetValue(_T("fa_model"), tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);

		rs.GetValue(_T("fa_serial"), tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);

		rs.GetValue(_T("fil_dept"), tmpStr);
		rptDetail->SetValue(_T("6"), tmpStr);

		rs.GetValue(_T("fil_qtylevel"), tmpStr);
		rptDetail->SetValue(_T("7"), tmpStr);

		rs.GetValue(_T("hangsx"), tmpStr);
		rptDetail->SetValue(_T("8"), tmpStr);

		rs.GetValue(_T("nuocsx"), tmpStr);
		rptDetail->SetValue(_T("9"), tmpStr);

		rs.GetValue(_T("namsd"), tmpStr);
		rptDetail->SetValue(_T("10"), tmpStr);

		rs.GetValue(_T("oldqty"), tmpStr);
		rptDetail->SetValue(_T("11"), tmpStr);

		rs.GetValue(_T("note"), tmpStr);
		rptDetail->SetValue(_T("12"), tmpStr);

		rs.MoveNext();
	}

	CString szSysDate;
	szSysDate = pMF->GetSysDate(); 
	tmpStr.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),szSysDate.Right(2),szSysDate.Mid(5,2),szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), tmpStr);

	EndWaitCursor();
	rpt.PrintPreview();
} 
void CFAMInventDialog::OnImportSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL, szSQLPost;
	int retMsg = ShowMessageBox(_T("Do you want to post order?(Y/N)"), MB_YESNO|MB_DEFBUTTON1);
	if(retMsg == IDYES)
	{
		szSQL.Format(_T("UPDATE fam_invent SET fi_status = 'Y' WHERE fi_orderno = '%s'"), m_szOrderNo);
		pMF->ExecSQL(szSQL);
		szSQLPost.Format(_T("FAM_INVENT_POSTED('%s','%s','%s')"), m_szOrderNo, pMF->GetCurrentUser(), pMF->GetCurrentUser());
		pMF->ExecDML(szSQLPost);
		SetMode(VM_VIEW);
		m_wndImport.EnableWindow(FALSE);
		m_wndInvLine.SetMode(VM_VIEW);
	}else
		return;
} 
void CFAMInventDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	pMF->m_wndInvent.OnOrderListLoadData();
	OnCancel();
} 
int CFAMInventDialog::OnAddFAMInventDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	m_wndInvLine.m_wndItemList.DeleteAllItems();
	return 0;
}
int CFAMInventDialog::OnEditFAMInventDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	m_wndInvLine.SetMode(VM_EDIT);
	return 0;  
}
int CFAMInventDialog::OnDeleteFAMInventDialog(){
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
 		OnCancelFAMInventDialog();
 	}
	return 0;
}
int CFAMInventDialog::OnSaveFAMInventDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
 		szSQL = m_tbl_invent.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
		szWhere.Format(_T(" WHERE fi_orderno = '%s'"), m_szOrderNo);
 		szSQL = m_tbl_invent.GetUpdateSQL(_T("fi_createdby, fi_createddate, fi_orderno"));
 		szSQL += szWhere;
 	}

 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
 		if(GetMode() == VM_EDIT){
			SetMode(VM_VIEW);
			m_wndInvLine.SetMode(VM_ADD);
			m_wndInvLine.m_wndDepartment.SetFocus();
		}
		else
		{
			szSQL.Format(_T("AD_GETNEXTVAL_F('FAM_INVENT_ORDER_NO','Y','KK') "));
			m_szOrderNo = pMF->ExecDML(szSQL);
			GetDataToScreen();
 			SetMode(VM_VIEW);
			m_wndInvLine.SetMode(VM_ADD);
			m_wndInvLine.OnItemListLoadData();
			m_wndInvLine.m_wndDepartment.SetFocus();
		}
		return 1;
 	}
 	else
 	{
 	}
 	return ret;
}
int CFAMInventDialog::OnCancelFAMInventDialog(){
 	if(GetMode() == VM_EDIT)
 	{
 		SetMode(VM_VIEW);
		m_wndInvLine.SetMode(VM_VIEW);
 	} 
 	else 
 	{
 		SetMode(VM_NONE);
 	} 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	return 0;
} 
int CFAMInventDialog::OnFAMInventDialogListLoadData(){
	return 0;
}
