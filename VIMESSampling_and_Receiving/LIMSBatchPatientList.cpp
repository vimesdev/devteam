#include "LIMSBatchPatientList.h"
#include "MainFrm.h"
#include ".\limsbatchpatientlist.h"
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CLIMSBatchPatientList*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CLIMSBatchPatientList*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CLIMSBatchPatientList*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CLIMSBatchPatientList*)pWnd)->OnListDeleteItem();
} 
static int _OnAddLIMSBatchPatientListFnc(CWnd *pWnd){
	 return ((CLIMSBatchPatientList*)pWnd)->OnAddLIMSBatchPatientList();
} 
static int _OnEditLIMSBatchPatientListFnc(CWnd *pWnd){
	 return ((CLIMSBatchPatientList*)pWnd)->OnEditLIMSBatchPatientList();
} 
static int _OnDeleteLIMSBatchPatientListFnc(CWnd *pWnd){
	 return ((CLIMSBatchPatientList*)pWnd)->OnDeleteLIMSBatchPatientList();
} 
static int _OnSaveLIMSBatchPatientListFnc(CWnd *pWnd){
	 return ((CLIMSBatchPatientList*)pWnd)->OnSaveLIMSBatchPatientList();
} 
static int _OnCancelLIMSBatchPatientListFnc(CWnd *pWnd){
	 return ((CLIMSBatchPatientList*)pWnd)->OnCancelLIMSBatchPatientList();
} 


static int _OnMarkLIMSBatchPatientListFnc(CWnd *pWnd){
	 return ((CLIMSBatchPatientList*)pWnd)->OnMarkItem(true);
} 

static int _OnUnMarkLIMSBatchPatientListFnc(CWnd *pWnd){
	 return ((CLIMSBatchPatientList*)pWnd)->OnMarkItem(false);
} 

CLIMSBatchPatientList::CLIMSBatchPatientList(){

	m_nDlgWidth = 515;
	m_nDlgHeight = 605;
	SetDefaultValues();
	m_nBatchId = 0;
	m_nViewType = 0;
}
CLIMSBatchPatientList::~CLIMSBatchPatientList(){
}
void CLIMSBatchPatientList::OnCreateComponents(){
	m_wndList.Create(this,5, 5, 510, 570); 

}
void CLIMSBatchPatientList::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();


	m_wndList.InsertColumn(0, _T("Idx"), CFMT_NUMBER, 70);
	m_wndList.InsertColumn(1, _T("Document No"), CFMT_NUMBER, 70);
	m_wndList.InsertColumn(2, _T("Patient Name"), CFMT_TEXT, 150);
	m_wndList.InsertColumn(3, _T("Barcode"), CFMT_TEXT, 90);
	m_wndList.InsertColumn(4, _T("Description"), CFMT_TEXT, 120);
	m_wndList.InsertColumn(5, _T(""), CFMT_TEXT, 0); //orderid
	m_wndList.InsertColumn(6, _T(""), CFMT_TEXT, 0); //perform_deptid

}
void CLIMSBatchPatientList::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	
	m_wndList.AddEvent(1, _T("Mark All"), _OnMarkLIMSBatchPatientListFnc);
	m_wndList.AddEvent(2, _T("UnMark"), _OnUnMarkLIMSBatchPatientListFnc);

	m_wndList.AddEvent(0, _T("-"));
	m_wndList.AddEvent(3, _T("Delete"), _OnListDeleteItemFnc);

	/*
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddLIMSBatchPatientListFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditLIMSBatchPatientListFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteLIMSBatchPatientListFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveLIMSBatchPatientListFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelLIMSBatchPatientListFnc, 0, 'T', VK_CONTROL);
*/
	if(m_nViewType == 1)
	{
		m_wndList.SetCheckBox(TRUE);
	}

	SetMode(VM_VIEW);
	OnListLoadData();

}
void CLIMSBatchPatientList::OnDoDataExchange(CDataExchange* pDX){

}
void CLIMSBatchPatientList::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	}
	else
	{
			
	}

}
void CLIMSBatchPatientList::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CLIMSBatchPatientList::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CLIMSBatchPatientList::SetDefaultValues(){


}
int CLIMSBatchPatientList::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
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
void CLIMSBatchPatientList::OnListDblClick(){
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0)
		return;
	BOOL flag = m_wndList.GetCheck(nSel);
	m_wndList.SetCheck(nSel, !flag);
} 
void CLIMSBatchPatientList::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CLIMSBatchPatientList::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnDeleteLIMSBatchPatientList();
	 return 0;
} 
long CLIMSBatchPatientList::OnListLoadData(){

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	szWhere.Empty();
	if(m_nBatchId > 0)
	{
		szWhere.Format(_T(" and hpc_batch_id=%ld "), m_nBatchId);
	}
	else
	{
		szWhere.Format(_T(" and nvl(hpc_batch_id, 0)=0 and hpc_status='S' "));
		szWhere.AppendFormat(_T(" and hpc_deptid = '%s' "), pMF->GetDepartmentID());
		szWhere.AppendFormat(_T(" and (hpc_orderdate) >= (sysdate)-1 "));
	}
	szWhere.AppendFormat(_T(" and hpc_sid > 0 "));
	szSQL.Format(_T(" SELECT distinct hpc_orderid,") \
_T("   hpc_docno,") \
_T("   hpc_sid,") \
_T("   hp_surname") \
_T("   ||' '") \
_T("   ||hp_midname") \
_T("   ||' '") \
_T("   ||hp_firstname AS pname,") \
_T("   hpc_orderdate,") \
_T("   hfg_perform_deptid, hfg_name ") \
_T(" FROM hms_testorder,") \
_T("   hms_patient, lims_order_extra, hms_fee_group ") \
_T(" WHERE hp_patientno        = hpc_patientno") \
_T(" and limsoe_docno=hpc_docno and limsoe_orderid = hpc_orderid ") \
_T(" and limsoe_sample='Y' ") \
_T(" and hfg_id = hpc_groupid and hfg_perform_deptid is not null ") \
_T(" %s ") \
_T(" ORDER BY pname, hpc_sid "), szWhere);
	nCount = rs.ExecSQL(szSQL);
_tprintf(_T("\r\n%s"), szSQL);
	CString tmpStr;
	int nIndex = 1;
	while(!rs.IsEOF()){ 
		tmpStr.Format(_T("%d"), nIndex++);
		int nItem = m_wndList.AddItems(
			rs.GetValue(_T("hpc_orderid")),
			rs.GetValue(_T("hpc_docno")), 
			rs.GetValue(_T("pname")), 
			rs.GetValue(_T("hpc_sid")), 
			rs.GetValue(_T("hfg_name")), 
			rs.GetValue(_T("hpc_orderid")),
			rs.GetValue(_T("hfg_perform_deptid")),
			NULL);
		if(m_nBatchId == 0)
		{
			m_wndList.SetCheck(nItem, TRUE);
		}
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;

	return 0;
}
int CLIMSBatchPatientList::OnAddLIMSBatchPatientList(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CLIMSBatchPatientList::OnEditLIMSBatchPatientList(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CLIMSBatchPatientList::OnDeleteLIMSBatchPatientList(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0) return 0;

 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
	long nDocNo;
	long nOrderId;
	int ret = 0;
	for (int i = m_wndList.GetItemCount()-1; i>=0; i--){
		if(m_wndList.GetItemState(i, LVIS_SELECTED)&LVIS_SELECTED)
		{
			nDocNo = str2long(m_wndList.GetItemText(i, 1));
			nOrderId = str2long(m_wndList.GetItemText(i, 5));
			szSQL.Format(_T("LIMS_BATCH_DELLINE(%ld, %ld, %ld, '%s')"), m_nBatchId, nDocNo, nOrderId, pMF->GetCurrentUser() );
		_tprintf(_T("\r\n%s"), szSQL);
 			ret = str2int(pMF->ExecDML(szSQL));
 			if(ret > 0){
				m_wndList.DeleteItem(i);
 			}
		}

	}
	if(ret == 0)
	{
		nDocNo = str2long(m_wndList.GetItemText(nSel, 1));
		nOrderId = str2long(m_wndList.GetItemText(nSel, 5));
		szSQL.Format(_T("LIMS_BATCH_DELLINE(%ld, %ld, %ld, '%s')"), m_nBatchId, nDocNo, nOrderId, pMF->GetCurrentUser() );
	_tprintf(_T("\r\n%s"), szSQL);
 		int ret = str2int(pMF->ExecDML(szSQL));
 		if(ret > 0){
			m_wndList.DeleteItem(nSel);
 		}
		else
		{
			ShowMessageBox(_T("Không xóa được đề mục đã chọn"));
		}
	}
	return 0;
}
int CLIMSBatchPatientList::OnSaveLIMSBatchPatientList(){
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
 		//OnLIMSBatchPatientListListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CLIMSBatchPatientList::OnCancelLIMSBatchPatientList(){
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
int CLIMSBatchPatientList::OnLIMSBatchPatientListListLoadData(){
	return 0;
}

LRESULT CLIMSBatchPatientList::WindowProc(UINT message, WPARAM wParam, LPARAM lParam)
{
	// TODO: Add your specialized code here and/or call the base class
	if(message == WM_REFRESH)
	{
		int nItem = (int) wParam;
		m_nBatchId = (long) lParam;
		OnListLoadData();
	}
	return CGuiView::WindowProc(message, wParam, lParam);
}
BEGIN_MESSAGE_MAP(CLIMSBatchPatientList, CGuiView)
	ON_WM_SIZE()
END_MESSAGE_MAP()

void CLIMSBatchPatientList::OnSize(UINT nType, int cx, int cy)
{
	CGuiView::OnSize(nType, cx, cy);
	CRect rect;
	GetClientRect(&rect);
	m_wndList.MoveWindow(rect);
	// TODO: Add your message handler code here
}


int CLIMSBatchPatientList::OnMarkItem(bool flag)
{
	
	for (int i =0; i < m_wndList.GetItemCount(); i++)
	{
		m_wndList.SetCheck(i, (BOOL)flag);
	}
	return 0;
}