#include "HMSOperationSchedulePatientListDialog.h"
#include "MainFrm.h"
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSOperationSchedulePatientListDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSOperationSchedulePatientListDialog*)pWnd)->OnListDblClick();
}

static void _OnListClickFnc(CWnd *pWnd){
	((CHMSOperationSchedulePatientListDialog*)pWnd)->OnListClick();
} 

static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSOperationSchedulePatientListDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSOperationSchedulePatientListDialog*)pWnd)->OnListDeleteItem();
} 
static void _OnApplySelectFnc(CWnd *pWnd){
	CHMSOperationSchedulePatientListDialog *pVw = (CHMSOperationSchedulePatientListDialog *)pWnd;
	pVw->OnApplySelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSOperationSchedulePatientListDialog *pVw = (CHMSOperationSchedulePatientListDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSOperationSchedulePatientListDialogFnc(CWnd *pWnd){
	 return ((CHMSOperationSchedulePatientListDialog*)pWnd)->OnAddHMSOperationSchedulePatientListDialog();
} 
static int _OnEditHMSOperationSchedulePatientListDialogFnc(CWnd *pWnd){
	 return ((CHMSOperationSchedulePatientListDialog*)pWnd)->OnEditHMSOperationSchedulePatientListDialog();
} 
static int _OnDeleteHMSOperationSchedulePatientListDialogFnc(CWnd *pWnd){
	 return ((CHMSOperationSchedulePatientListDialog*)pWnd)->OnDeleteHMSOperationSchedulePatientListDialog();
} 
static int _OnSaveHMSOperationSchedulePatientListDialogFnc(CWnd *pWnd){
	 return ((CHMSOperationSchedulePatientListDialog*)pWnd)->OnSaveHMSOperationSchedulePatientListDialog();
} 
static int _OnCancelHMSOperationSchedulePatientListDialogFnc(CWnd *pWnd){
	 return ((CHMSOperationSchedulePatientListDialog*)pWnd)->OnCancelHMSOperationSchedulePatientListDialog();
}
static void _OnMarkSelectFnc(CWnd *pWnd){
	CHMSOperationSchedulePatientListDialog *pVw = (CHMSOperationSchedulePatientListDialog *)pWnd;
	pVw->OnMarkSelect();
} 
static void _OnUnMarkSelectFnc(CWnd *pWnd){
	CHMSOperationSchedulePatientListDialog *pVw = (CHMSOperationSchedulePatientListDialog *)pWnd;
	pVw->OnUnMarkSelect();
} 
CHMSOperationSchedulePatientListDialog::CHMSOperationSchedulePatientListDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 805;
	m_nDlgHeight = 605;
	SetDefaultValues();
}
CHMSOperationSchedulePatientListDialog::~CHMSOperationSchedulePatientListDialog(){
}
void CHMSOperationSchedulePatientListDialog::OnCreateComponents()
{
	m_wndPatientList.Create(this, _T("Patient List"), 5, 5, 1000, 570);
	m_wndList.Create(this,10, 30, 995, 565); 
	m_wndApply.Create(this, _T("&Apply"), 829, 575, 909, 600);
	m_wndClose.Create(this, _T("&Close"), 914, 575, 994, 600);
	m_wndMark.Create(this, _T("Chọn [><]"), 5, 575, 85, 600);
	m_wndUnMark.Create(this, _T("Bỏ chọn [<>]"), 89, 575, 169, 600);

}
void CHMSOperationSchedulePatientListDialog::OnInitializeComponents()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();


	m_wndList.InsertColumn(0, _T("Index"), CFMT_NUMBER, 35);
	m_wndList.InsertColumn(1, _T("Document No"), CFMT_NUMBER, 80);
	m_wndList.InsertColumn(2, _T("Patient Name"), CFMT_TEXT, 150);
	m_wndList.InsertColumn(3, _T("Surgery Name"), CFMT_TEXT, 380);
	m_wndList.InsertColumn(4, _T("Doctor"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(5, _T("Mark"), CFMT_TEXT|CFMT_CENTER, 50);
	m_wndList.InsertColumn(6, _T("Ngày chỉ định"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(7, _T("Số phiếu"), CFMT_TEXT, 100);

}
void CHMSOperationSchedulePatientListDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.SetEvent(WE_CLICK, _OnListClickFnc);
	m_wndMark.SetEvent(WE_CLICK, _OnMarkSelectFnc);
	m_wndUnMark.SetEvent(WE_CLICK, _OnUnMarkSelectFnc);
	//m_wndList.SetEvent(WE_CLICK, _OnListCheckSelectFnc);
	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_NONE);
	OnListLoadData();

}
void CHMSOperationSchedulePatientListDialog::OnDoDataExchange(CDataExchange* pDX){

}
void CHMSOperationSchedulePatientListDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSOperationSchedulePatientListDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSOperationSchedulePatientListDialog::SetDefaultValues(){


}
int CHMSOperationSchedulePatientListDialog::SetMode(int nMode){
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
		m_wndMark.EnableWindow(true);
		m_wndUnMark.EnableWindow(true);
 		UpdateData(FALSE);
 		return nOldMode;
}
void CHMSOperationSchedulePatientListDialog::OnListDblClick(){
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0 )
		return;	

	CString szMark = m_wndList.GetItemText(nSel, 5);
	if(szMark == _T("[X]"))
		szMark.Empty();
	else
		szMark = _T("[X]");
	m_wndList.SetItemText(nSel, 5, szMark);
	m_wndList.RedrawWindow();

} 

void CHMSOperationSchedulePatientListDialog::OnListClick()
{
	

}


void CHMSOperationSchedulePatientListDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 

void CHMSOperationSchedulePatientListDialog::OnMarkSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();	
	for (int i =0; i < m_wndList.GetItemCount(); i++)
	{
		m_wndList.SetItemText(i, 5, _T("[X]"));
	}
	m_wndList.RedrawWindow();
	
} 
void CHMSOperationSchedulePatientListDialog::OnUnMarkSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();	
	for (int i =0; i < m_wndList.GetItemCount(); i++)
	{
		m_wndList.SetItemText(i, 5, _T(""));
	}
	m_wndList.RedrawWindow();
	
} 

int CHMSOperationSchedulePatientListDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSOperationSchedulePatientListDialog::OnListLoadData(){

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
				_T("   get_username(ho_doctor) AS doctor_name,") \
				_T("   to_char(ho_orderdate, 'DD/MM/YYYY') AS OrderDate,") \
				_T("   ho_idx") \
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
			_T(""),
			rs.GetValue(_T("OrderDate")),
			szId,
			NULL);
		m_wndList.SetItemKey(nItem, szId);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
	return 0;
}
void CHMSOperationSchedulePatientListDialog::OnApplySelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	long nOID, nDocumentNo;
	int res = 0;
	int nCount = 0;
	CString szSQL;
	
	for (int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		
		CString szMark = m_wndList.GetItemText(i, 5);
		if(szMark == _T("[X]"))			
		{
			nDocumentNo = str2long(m_wndList.GetItemText(i, 1));
			nOID = str2long(m_wndList.GetItemText(i, 7));			
			szSQL.Format(_T("HMS_UPDATE_OPERATION_LIST(%ld, %ld, %ld) "),
				m_nOID,nDocumentNo, nOID);

			res = str2int(pMF->ExecDML(szSQL));			
			if(res > 0)
			{
				nCount++;
			}
		}
	}
	if(nCount <= 0)
	{
		ShowMessageBox(_T("Không có bệnh nhân nào được áp dụng"));
		return;
	}
	CGuiDialog::OnOK();
} 
void CHMSOperationSchedulePatientListDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CHMSOperationSchedulePatientListDialog::OnAddHMSOperationSchedulePatientListDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSOperationSchedulePatientListDialog::OnEditHMSOperationSchedulePatientListDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSOperationSchedulePatientListDialog::OnDeleteHMSOperationSchedulePatientListDialog(){
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
 		OnCancelHMSOperationSchedulePatientListDialog();
 	}
	return 0;
}
int CHMSOperationSchedulePatientListDialog::OnSaveHMSOperationSchedulePatientListDialog(){
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
 		//OnHMSOperationSchedulePatientListDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSOperationSchedulePatientListDialog::OnCancelHMSOperationSchedulePatientListDialog(){
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
int CHMSOperationSchedulePatientListDialog::OnHMSOperationSchedulePatientListDialogListLoadData(){
	return 0;
}
