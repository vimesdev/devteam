#include "stdafx.h"
#include "HMSPackageDiscountDialog.h"
#include "HMSMainFrame.h"
static long _OnPackageLoadDataFnc(CWnd *pWnd){
	return ((CHMSPackageDiscountDialog*)pWnd)->OnPackageLoadData();
} 
static void _OnPackageDblClickFnc(CWnd *pWnd){
	((CHMSPackageDiscountDialog*)pWnd)->OnPackageDblClick();
} 
static void _OnPackageSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSPackageDiscountDialog*)pWnd)->OnPackageSelectChange(nOldItem, nNewItem);
} 
static int _OnPackageDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSPackageDiscountDialog*)pWnd)->OnPackageDeleteItem();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CHMSPackageDiscountDialog *pVw = (CHMSPackageDiscountDialog *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSPackageDiscountDialog *pVw = (CHMSPackageDiscountDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddHMSPackageDiscountDialogFnc(CWnd *pWnd){
	 return ((CHMSPackageDiscountDialog*)pWnd)->OnAddHMSPackageDiscountDialog();
} 
static int _OnEditHMSPackageDiscountDialogFnc(CWnd *pWnd){
	 return ((CHMSPackageDiscountDialog*)pWnd)->OnEditHMSPackageDiscountDialog();
} 
static int _OnDeleteHMSPackageDiscountDialogFnc(CWnd *pWnd){
	 return ((CHMSPackageDiscountDialog*)pWnd)->OnDeleteHMSPackageDiscountDialog();
} 
static int _OnSaveHMSPackageDiscountDialogFnc(CWnd *pWnd){
	 return ((CHMSPackageDiscountDialog*)pWnd)->OnSaveHMSPackageDiscountDialog();
} 
static int _OnCancelHMSPackageDiscountDialogFnc(CWnd *pWnd){
	 return ((CHMSPackageDiscountDialog*)pWnd)->OnCancelHMSPackageDiscountDialog();
} 
CHMSPackageDiscountDialog::CHMSPackageDiscountDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CHMSPackageDiscountDialog::~CHMSPackageDiscountDialog(){
}
void CHMSPackageDiscountDialog::OnCreateComponents(){
	m_wndPackage.Create(this,21, 34, 420, 237); 
	m_wndPrint.Create(this, _T("Print"), 250, 248, 330, 273);
	m_wndCancel.Create(this, _T("Cancel"), 341, 248, 421, 273);
	m_wndReportCondition.Create(this, _T("Report Condition"), 18, 13, 429, 278);

}
void CHMSPackageDiscountDialog::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();


	m_wndPackage.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndPackage.InsertColumn(1, _T("Name"), CFMT_TEXT, 320);
    m_wndPackage.SetCheckBox(TRUE);
}
void CHMSPackageDiscountDialog::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndPackage.SetEvent(WE_SELCHANGE, _OnPackageSelectChangeFnc);
	m_wndPackage.SetEvent(WE_LOADDATA, _OnPackageLoadDataFnc);
	m_wndPackage.SetEvent(WE_DBLCLICK, _OnPackageDblClickFnc);
	m_wndPackage.AddEvent(1, _T("Delete"), _OnPackageDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	UpdateData(true);
	OnPackageLoadData();

}
void CHMSPackageDiscountDialog::OnDoDataExchange(CDataExchange* pDX){

}
void CHMSPackageDiscountDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	}
	else
	{
			
	}

}
void CHMSPackageDiscountDialog::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSPackageDiscountDialog::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CHMSPackageDiscountDialog::SetDefaultValues(){


}
int CHMSPackageDiscountDialog::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
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
 			EnableButtons(TRUE, 0, 1, -1);
 			SetDefaultValues();
 			break;
 		};
 		UpdateData(FALSE);
 		return nOldMode;
}
void CHMSPackageDiscountDialog::OnPackageDblClick(){
	
} 
void CHMSPackageDiscountDialog::OnPackageSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CHMSPackageDiscountDialog::OnPackageDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSPackageDiscountDialog::OnPackageLoadData(){

	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndPackage.BeginLoad(); 
	m_wndPackage.DeleteAllItems(); 
	int nCount = 0;

	szSQL.Format(_T("SELECT ss_code AS ID, ss_desc AS Name ") \
		_T("FROM sys_sel ") \
		_T("WHERE ss_id = 'HMS_SERVICE_PACKAGE' ORDER BY ID"));

	nCount = rs.ExecSQL(szSQL);
    _fmsg(_T("%s"),szSQL);
	while(!rs.IsEOF())
	{ 
		m_wndPackage.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Name")), NULL);
		rs.MoveNext();
	}
	m_wndPackage.EndLoad(); 
	return nCount;
}
void CHMSPackageDiscountDialog::OnPrintSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);

	CReport rpt;
	CString szSQL, tmpStr, szSysDate;
	CString szObject, szTemp;
	CString szRecord;
	CString szPackage;

	CRecord rs(&pMF->m_db);
	

	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);


	if (rs.IsEOF())
	{
		ShowMessageBox(_T("No Data"), MB_ICONERROR | MB_OK);
		return;
	}

	if (!rpt.Init(_T("Reports/HMS/PHIEUMIENGIAMCHIPHIGOIDICHVU.RPT")))
		return;

	for (int i = 0; i < m_wndPackage.GetItemCount(); i++)
	{
		if (m_wndPackage.GetCheck(i))
		{
			if (!szPackage.IsEmpty())
				szPackage += _T(",");
			szPackage.AppendFormat(_T("'%s'"), m_wndPackage.GetItemText(i, 1));
		}
	}
_fmsg(_T("%s"),szPackage);
	rpt.GetReportHeader()->SetValue(_T("PackageName"), szPackage);
	rpt.GetReportHeader()->SetValue(_T("PackageName2"), szPackage);


	rs.GetValue(_T("deptid"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Department"), tmpStr);

	rs.GetValue(_T("deptid"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Depatment2"), tmpStr);

	rs.GetValue(_T("relative"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Relative"), tmpStr);

	rs.GetValue(_T("docno"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("DocumentNo"), tmpStr);

	rs.GetValue(_T("phone"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Phone"), tmpStr);

	rs.GetValue(_T("khac"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Reference"), tmpStr);

	rs.GetValue(_T("relation"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Relation"), tmpStr);

	rs.GetValue(_T("patientname"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Patientname"), tmpStr);

	szSysDate = pMF->GetSysDate();
	tmpStr.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), szSysDate.Right(2), szSysDate.Mid(5, 2), szSysDate.Left(4));  
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), tmpStr);
	rpt.PrintPreview();
} 
void CHMSPackageDiscountDialog::OnCancelSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CHMSPackageDiscountDialog::OnAddHMSPackageDiscountDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSPackageDiscountDialog::OnEditHMSPackageDiscountDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSPackageDiscountDialog::OnDeleteHMSPackageDiscountDialog(){
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
 		OnCancelHMSPackageDiscountDialog();
 	}
	return 0;
}
int CHMSPackageDiscountDialog::OnSaveHMSPackageDiscountDialog(){
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
 		//OnHMSPackageDiscountDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSPackageDiscountDialog::OnCancelHMSPackageDiscountDialog(){
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
int CHMSPackageDiscountDialog::OnHMSPackageDiscountDialogListLoadData(){
	return 0;
}
CString CHMSPackageDiscountDialog::GetQueryString(){

	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
	CString szSQL, szWhere;
	CString szPackage;


	/*for (int i = 0; i < m_wndPackage.GetItemCount(); i++)
	{
		if (m_wndPackage.GetCheck(i))
		{
			if (!szPackage.IsEmpty())
				szPackage += _T(",");
			szPackage.AppendFormat(_T("'%s'"), m_wndPackage.GetItemText(i, 1));
		}
	}

	if (!szPackage.IsEmpty())
		szWhere.AppendFormat(_T(" and hfel_itemid in(%s) "), szPackage);
*/

	
	szSQL.Format(_T(" SELECT hr_docno                   AS docno,") \
		_T("   VIMES.GET_PATIENTNAME(hr_docno) AS patientname,") \
		_T("   (SELECT sd_name FROM sys_dept WHERE hfe_deptid = sd_id") \
		_T("   )                         AS deptid,") \
		_T("   hr_name                   AS relative,") \
		_T("   hr_phone                  AS phone,") \
		_T("   hr_address                AS address,") \
		_T("   hms_relative.HR_REFERENCE AS khac,") \
		_T("   (SELECT ss_desc") \
		_T("   FROM sys_sel") \
		_T("   WHERE ss_id ='hrm_relation'") \
		_T("   AND ss_code = hr_relation") \
		_T("   ) AS relation") \
		_T(" FROM hms_relative") \
		_T(" LEFT JOIN hms_fee_extra") \
		_T(" ON (hfe_docno=hr_docno)") \
		_T(" LEFT JOIN hms_patient") \
		_T(" ON(hp_patientno = hfe_patientno)") \
		_T(" LEFT JOIN hms_doc") \
		_T(" ON(hd_patientno = hfe_patientno") \
		_T(" AND hd_docno    =HR_DOCNO)") \
		_T(" WHERE hr_docno  = 18072791"));
	return szSQL;
}