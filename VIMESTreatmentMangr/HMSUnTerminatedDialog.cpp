#include "HMSUnTerminatedDialog.h"
#include "MainFrm.h"
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSUnTerminatedDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSUnTerminatedDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSUnTerminatedDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSUnTerminatedDialog*)pWnd)->OnListDeleteItem();
} 
static void _OnOKSelectFnc(CWnd *pWnd){
	CHMSUnTerminatedDialog *pVw = (CHMSUnTerminatedDialog *)pWnd;
	pVw->OnOKSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSUnTerminatedDialog *pVw = (CHMSUnTerminatedDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddHMSUnTerminatedDialogFnc(CWnd *pWnd){
	 return ((CHMSUnTerminatedDialog*)pWnd)->OnAddHMSUnTerminatedDialog();
} 
static int _OnEditHMSUnTerminatedDialogFnc(CWnd *pWnd){
	 return ((CHMSUnTerminatedDialog*)pWnd)->OnEditHMSUnTerminatedDialog();
} 
static int _OnDeleteHMSUnTerminatedDialogFnc(CWnd *pWnd){
	 return ((CHMSUnTerminatedDialog*)pWnd)->OnDeleteHMSUnTerminatedDialog();
} 
static int _OnSaveHMSUnTerminatedDialogFnc(CWnd *pWnd){
	 return ((CHMSUnTerminatedDialog*)pWnd)->OnSaveHMSUnTerminatedDialog();
} 
static int _OnCancelHMSUnTerminatedDialogFnc(CWnd *pWnd){
	 return ((CHMSUnTerminatedDialog*)pWnd)->OnCancelHMSUnTerminatedDialog();
} 
CHMSUnTerminatedDialog::CHMSUnTerminatedDialog(CWnd *pParent):
	CGuiDialog(pParent){
	m_bCheckReturn = false;
	m_nDlgWidth = 605;
	m_nDlgHeight = 485;
	SetDefaultValues();
}
CHMSUnTerminatedDialog::~CHMSUnTerminatedDialog()
{
}
void CHMSUnTerminatedDialog::OnCreateComponents(){
	m_wndUnterminatedInformation.Create(this, _T("Thông tin dữ liệu không hợp lệ khi kết thúc ra viện"), 5, 5, 800, 520);
	m_wndList.Create(this,10, 30, 795, 515); 
	m_wndOK.Create(this, _T("&OK"), 623, 525, 708, 550);
	m_wndCancel.Create(this, _T("&Cancel"), 713, 525, 798, 550);
}
void CHMSUnTerminatedDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();


	m_wndList.InsertColumn(0, _T("Order No"), CFMT_TEXT, 120);
	m_wndList.InsertColumn(1, _T("Order Date"), CFMT_DATE, 120);
	m_wndList.InsertColumn(2, _T("Dept"), CFMT_TEXT, 60);
	m_wndList.InsertColumn(3, _T("Description"), CFMT_TEXT, 450);
	m_wndList.InsertColumn(4, _T("Id"), CFMT_TEXT, 90);
	m_wndList.InsertColumn(5, _T("type"), CFMT_TEXT, 0);

}
void CHMSUnTerminatedDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	//m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndOK.SetEvent(WE_CLICK, _OnOKSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	
	//Comment lai chuyen phan nay sang ham OnEditSelect cua class CHMSDischarge
	/*CString szSQL;
	szSQL.Format(_T("HMS_CLINICAL_CHECKBFTERM(%ld) "), m_nDocumentNo);
	int nCount = str2int(pMF->ExecDML(szSQL));
	m_bCheckReturn = nCount>0?true:false;
	if(nCount <=0 )
	{
		CGuiDialog::OnCancel();
		return;
	}*/
	OnListLoadData();
	
}
void CHMSUnTerminatedDialog::OnDoDataExchange(CDataExchange* pDX){

}
void CHMSUnTerminatedDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSUnTerminatedDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSUnTerminatedDialog::SetDefaultValues(){


}
int CHMSUnTerminatedDialog::SetMode(int nMode){
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
#include "HMSEditOrderDateDialog.h"
void CHMSUnTerminatedDialog::OnListDblClick(){
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0)
		return;

	CHMSEditOrderDateDialog dlg(this);
		dlg.m_szOrderNo = m_wndList.GetItemText(nSel, 0);
		dlg.m_szOrderDate = m_wndList.GetItemText(nSel, 1);
		dlg.m_szDescription = m_wndList.GetItemText(nSel, 3);
		dlg.m_szOrderId = m_wndList.GetItemText(nSel, 4);
		dlg.m_szType = m_wndList.GetItemText(nSel, 5);
		if(dlg.DoModal() == IDOK)
		{
			CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
			CString szSQL;
			if (pMF->GetCurrentDepartmentID() == _T("A11"))
			{
			szSQL.Format(_T("HMS_CLINICAL_CHECKBFTERM_A11(%ld, %d) "), pMF->m_nDocumentNo, pMF->GetTreatTime());
			}
			else
			{
			szSQL.Format(_T("HMS_CLINICAL_CHECKBFTERM(%ld) "), pMF->m_nDocumentNo);
			}
			//szSQL.Format(_T("HMS_CLINICAL_CHECKBFTERM(%ld) "), pMF->m_nDocumentNo);
			int nCount = str2int(pMF->ExecDML(szSQL));
			OnListLoadData();
		}

} 
void CHMSUnTerminatedDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSUnTerminatedDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSUnTerminatedDialog::OnListLoadData(){

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT * FROM hms_term_warning WHERE htw_docno=%ld "), m_nDocumentNo);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("htw_OrderNo")), 
			rs.GetValue(_T("htw_OrderDate")), 
			rs.GetValue(_T("htw_deptid")), 
			rs.GetValue(_T("htw_desc")), 
			rs.GetValue(_T("htw_orderid")), 
			rs.GetValue(_T("htw_type")), 
			NULL);
		rs.MoveNext();		
	}
	m_wndList.EndLoad(); 
	return nCount;
}
void CHMSUnTerminatedDialog::OnOKSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnOK();
} 
void CHMSUnTerminatedDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CHMSUnTerminatedDialog::OnAddHMSUnTerminatedDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSUnTerminatedDialog::OnEditHMSUnTerminatedDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSUnTerminatedDialog::OnDeleteHMSUnTerminatedDialog(){
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
 		OnCancelHMSUnTerminatedDialog();
 	}
	return 0;
}
int CHMSUnTerminatedDialog::OnSaveHMSUnTerminatedDialog(){
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
 		//OnHMSUnTerminatedDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSUnTerminatedDialog::OnCancelHMSUnTerminatedDialog(){
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
int CHMSUnTerminatedDialog::OnHMSUnTerminatedDialogListLoadData(){
	return 0;
}
