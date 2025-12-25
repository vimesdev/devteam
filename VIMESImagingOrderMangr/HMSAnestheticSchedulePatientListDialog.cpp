#include "HMSAnestheticSchedulePatientListDialog.h"
#include "MainFrm.h"
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSAnestheticSchedulePatientListDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSAnestheticSchedulePatientListDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSAnestheticSchedulePatientListDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSAnestheticSchedulePatientListDialog*)pWnd)->OnListDeleteItem();
} 
static void _OnApplySelectFnc(CWnd *pWnd){
	CHMSAnestheticSchedulePatientListDialog *pVw = (CHMSAnestheticSchedulePatientListDialog *)pWnd;
	pVw->OnApplySelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSAnestheticSchedulePatientListDialog *pVw = (CHMSAnestheticSchedulePatientListDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSAnestheticSchedulePatientListDialogFnc(CWnd *pWnd){
	 return ((CHMSAnestheticSchedulePatientListDialog*)pWnd)->OnAddHMSAnestheticSchedulePatientListDialog();
} 
static int _OnEditHMSAnestheticSchedulePatientListDialogFnc(CWnd *pWnd){
	 return ((CHMSAnestheticSchedulePatientListDialog*)pWnd)->OnEditHMSAnestheticSchedulePatientListDialog();
} 
static int _OnDeleteHMSAnestheticSchedulePatientListDialogFnc(CWnd *pWnd){
	 return ((CHMSAnestheticSchedulePatientListDialog*)pWnd)->OnDeleteHMSAnestheticSchedulePatientListDialog();
} 
static int _OnSaveHMSAnestheticSchedulePatientListDialogFnc(CWnd *pWnd){
	 return ((CHMSAnestheticSchedulePatientListDialog*)pWnd)->OnSaveHMSAnestheticSchedulePatientListDialog();
} 
static int _OnCancelHMSAnestheticSchedulePatientListDialogFnc(CWnd *pWnd){
	 return ((CHMSAnestheticSchedulePatientListDialog*)pWnd)->OnCancelHMSAnestheticSchedulePatientListDialog();
} 
CHMSAnestheticSchedulePatientListDialog::CHMSAnestheticSchedulePatientListDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 805;
	m_nDlgHeight = 605;
	SetDefaultValues();
}
CHMSAnestheticSchedulePatientListDialog::~CHMSAnestheticSchedulePatientListDialog(){
}
void CHMSAnestheticSchedulePatientListDialog::OnCreateComponents(){
	m_wndPatientList.Create(this, _T("Patient List"), 5, 5, 800, 570);
	m_wndList.Create(this,10, 30, 796, 565); 
	//m_wndList.SetCheckBox(TRUE);
	m_wndApply.Create(this, _T("&Apply"), 635, 575, 715, 600);
	m_wndClose.Create(this, _T("&Close"), 720, 575, 800, 600);

}
void CHMSAnestheticSchedulePatientListDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();


	m_wndList.InsertColumn(0, _T("Index"), CFMT_NUMBER, 35);
	m_wndList.InsertColumn(1, _T("Document No"), CFMT_NUMBER, 80);
	m_wndList.InsertColumn(2, _T("Patient Name"), CFMT_TEXT, 150);
	m_wndList.InsertColumn(3, _T("Surgery Name"), CFMT_TEXT, 380);
	m_wndList.InsertColumn(4, _T("Doctor"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(5, _T("Mark"), CFMT_TEXT|CFMT_CENTER, 35);

}
void CHMSAnestheticSchedulePatientListDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_NONE);
	OnListLoadData();

}
void CHMSAnestheticSchedulePatientListDialog::OnDoDataExchange(CDataExchange* pDX){

}
void CHMSAnestheticSchedulePatientListDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSAnestheticSchedulePatientListDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSAnestheticSchedulePatientListDialog::SetDefaultValues(){


}
int CHMSAnestheticSchedulePatientListDialog::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
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
void CHMSAnestheticSchedulePatientListDialog::OnListDblClick(){
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0 )
		return;
	CString szMark = m_wndList.GetItemText(nSel, 5);
	if(szMark == _T("Y"))
	{
		szMark = _T("");
	}
	else
		szMark = _T("Y");

} 
void CHMSAnestheticSchedulePatientListDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSAnestheticSchedulePatientListDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSAnestheticSchedulePatientListDialog::OnListLoadData(){

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	szSQL.Format(_T(" SELECT ho_idx, ho_docno AS docno,") \
_T("   ho_orderdate  AS orderdate,") \
_T("   hp_surname") \
_T("   ||' '") \
_T("   ||hp_midname") \
_T("   ||' '") \
_T("   ||hp_firstname          AS pname,") \
_T("   ho_itemid               AS itemid,") \
_T("   hfl_name                AS opt_name,") \
_T("   ho_doctor               AS doctor_id,") \
_T("   get_username(ho_doctor) AS doctor_name") \
_T(" FROM hms_operation,") \
_T("   hms_patient,") \
_T("   hms_fee_list") \
_T(" WHERE ho_deptid            ='%s'") \
_T(" AND ho_pdeptid             = '%s'") \
_T(" AND NVL(ho_matorder_id, 0) = 0") \
_T(" AND TRUNC(ho_orderdate)    = TO_DATE('%s', 'YYYY-MM-DD') ") \
_T(" AND ho_isordering ='N'") \
_T(" AND hp_patientno = ho_patientno") \
_T(" AND ho_itemid    = hfl_feeid"), m_szDeptId, m_szPerformDeptId, m_szOrderDate.Left(10));


	nCount = rs.ExecSQL(szSQL);
	CString tmpStr;
	CString szId;
	int nIndex = 1;
	while(!rs.IsEOF()){ 
		tmpStr.Format(_T("%d"), nIndex++);
		rs.GetValue(_T("ho_idx"), szId);
		int nItem = m_wndList.AddItems(
			tmpStr, 
			rs.GetValue(_T("docno")), 
			rs.GetValue(_T("pname")), 
			rs.GetValue(_T("opt_name")), 
			rs.GetValue(_T("doctor_name")), 
			_T("Y"), 
			NULL);
		m_wndList.SetItemKey(nItem, szId);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
	return 0;
}
void CHMSAnestheticSchedulePatientListDialog::OnApplySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	long nOID, nDocumentNo;
	CString szSQL;
	for (int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		if(m_wndList.GetItemText(i, 5) == _T("Y"))
		{
			nDocumentNo = str2long(m_wndList.GetItemText(i, 1));
			nOID = str2long(m_wndList.GetItemKey(i));
			szSQL.Format(_T("UPDATE hms_operation SET ho_matorder_id=%ld ") \
				_T("WHERE ho_docno = %ld and ho_idx = %ld "),
				m_nOID, nDocumentNo, nOID);
			pMF->ExecSQL(szSQL);
		}
	}
	CGuiDialog::OnOK();
} 
void CHMSAnestheticSchedulePatientListDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CHMSAnestheticSchedulePatientListDialog::OnAddHMSAnestheticSchedulePatientListDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSAnestheticSchedulePatientListDialog::OnEditHMSAnestheticSchedulePatientListDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSAnestheticSchedulePatientListDialog::OnDeleteHMSAnestheticSchedulePatientListDialog(){
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
 		OnCancelHMSAnestheticSchedulePatientListDialog();
 	}
	return 0;
}
int CHMSAnestheticSchedulePatientListDialog::OnSaveHMSAnestheticSchedulePatientListDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
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
 		//OnHMSAnestheticSchedulePatientListDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSAnestheticSchedulePatientListDialog::OnCancelHMSAnestheticSchedulePatientListDialog(){
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
int CHMSAnestheticSchedulePatientListDialog::OnHMSAnestheticSchedulePatientListDialogListLoadData(){
	return 0;
}
