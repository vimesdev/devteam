#include "HMSCancerTreatDiagramDialog.h"
#include "MainFrm.h"
#include "HMSCancerTreatDiagramEntryDlg.h"
#include "HMSCancerTreatDiagramLineDlg.h"
static long _OnDiagramListLoadDataFnc(CWnd *pWnd){
	return ((CHMSCancerTreatDiagramDialog*)pWnd)->OnDiagramListLoadData();
} 
static void _OnDiagramListDblClickFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagramDialog*)pWnd)->OnDiagramListDblClick();
} 
static void _OnDiagramListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSCancerTreatDiagramDialog*)pWnd)->OnDiagramListSelectChange(nOldItem, nNewItem);
} 
static int _OnDiagramListAddItemFnc(CWnd *pWnd){
	return ((CHMSCancerTreatDiagramDialog*)pWnd)->OnDiagramsListAddItem();
}
static int _OnDiagramListEditItemFnc(CWnd *pWnd){
	return ((CHMSCancerTreatDiagramDialog*)pWnd)->OnDiagramsListEditItem();
}
static int _OnDiagramListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSCancerTreatDiagramDialog*)pWnd)->OnDiagramListDeleteItem();
} 
static long _OnDiagramListDetailLoadDataFnc(CWnd *pWnd){
	return ((CHMSCancerTreatDiagramDialog*)pWnd)->OnDiagramListDetailLoadData();
} 
static void _OnDiagramListDetailDblClickFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagramDialog*)pWnd)->OnDiagramListDetailDblClick();
} 
static void _OnDiagramListDetailSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSCancerTreatDiagramDialog*)pWnd)->OnDiagramListDetailSelectChange(nOldItem, nNewItem);
} 
static int _OnDiagramListDetailAddItemFnc(CWnd *pWnd){
	 return ((CHMSCancerTreatDiagramDialog*)pWnd)->OnDiagramListDetailAddItem();
} 
static int _OnDiagramListDetailEditItemFnc(CWnd *pWnd){
	 return ((CHMSCancerTreatDiagramDialog*)pWnd)->OnDiagramListDetailEditItem();
} 
static int _OnDiagramListDetailDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSCancerTreatDiagramDialog*)pWnd)->OnDiagramListDetailDeleteItem();
} 
static int _OnAddHMSCancerTreatDiagramDialogFnc(CWnd *pWnd){
	 return ((CHMSCancerTreatDiagramDialog*)pWnd)->OnAddHMSCancerTreatDiagramDialog();
} 
static int _OnEditHMSCancerTreatDiagramDialogFnc(CWnd *pWnd){
	 return ((CHMSCancerTreatDiagramDialog*)pWnd)->OnEditHMSCancerTreatDiagramDialog();
} 
static int _OnDeleteHMSCancerTreatDiagramDialogFnc(CWnd *pWnd){
	 return ((CHMSCancerTreatDiagramDialog*)pWnd)->OnDeleteHMSCancerTreatDiagramDialog();
} 
static int _OnSaveHMSCancerTreatDiagramDialogFnc(CWnd *pWnd){
	 return ((CHMSCancerTreatDiagramDialog*)pWnd)->OnSaveHMSCancerTreatDiagramDialog();
} 
static int _OnCancelHMSCancerTreatDiagramDialogFnc(CWnd *pWnd){
	 return ((CHMSCancerTreatDiagramDialog*)pWnd)->OnCancelHMSCancerTreatDiagramDialog();
} 
CHMSCancerTreatDiagramDialog::CHMSCancerTreatDiagramDialog(CWnd *pParent): CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CHMSCancerTreatDiagramDialog::~CHMSCancerTreatDiagramDialog(){
}
void CHMSCancerTreatDiagramDialog::OnCreateComponents(){
	m_wndDiagram.Create(this, _T("Diagram"), 6, 5, 206, 605);
	m_wndDiagramDetail.Create(this, _T("Diagram Detail"), 210, 5, 810, 605);
	m_wndDiagramList.Create(this,10, 30, 200, 600); 
	m_wndDiagramListDetail.Create(this,215, 30, 805, 600); 

}
void CHMSCancerTreatDiagramDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	m_wndDiagramList.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDiagramList.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

	m_wndDiagramListDetail.InsertColumn(0, _T("STT"), CFMT_TEXT, 50);
	m_wndDiagramListDetail.InsertColumn(1, _T("ORDERLINE ID"), CFMT_TEXT, 0);
	m_wndDiagramListDetail.InsertColumn(2, _T("LINE ID"), CFMT_TEXT, 0);
	m_wndDiagramListDetail.InsertColumn(3, _T("Drug Name"), CFMT_TEXT, 250);
	m_wndDiagramListDetail.InsertColumn(4, _T("LD/m2"), CFMT_TEXT, 80);
	m_wndDiagramListDetail.InsertColumn(5, _T("Li\x1EC1u/\x42N"), CFMT_TEXT|CFMT_CENTER, 80);
	m_wndDiagramListDetail.InsertColumn(6, _T("SL l\x129nh"), CFMT_TEXT|CFMT_CENTER, 80);
	m_wndDiagramListDetail.InsertColumn(7, _T("\x44/m\xF4i"), CFMT_TEXT|CFMT_CENTER, 80);
	m_wndDiagramListDetail.InsertColumn(8, _T("T/t\xED\x63h"), CFMT_TEXT, 80);
	m_wndDiagramListDetail.InsertColumn(9, _T("T/g S\x44"), CFMT_TEXT, 80);


}
void CHMSCancerTreatDiagramDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndDiagramList.SetEvent(WE_SELCHANGE, _OnDiagramListSelectChangeFnc);
	m_wndDiagramList.SetEvent(WE_LOADDATA, _OnDiagramListLoadDataFnc);
	m_wndDiagramList.SetEvent(WE_DBLCLICK, _OnDiagramListDblClickFnc);
	

	m_wndDiagramList.AddEvent(1, _T("Add"), _OnDiagramListAddItemFnc, 0, 0, 0);
	m_wndDiagramList.AddEvent(2, _T("Edit"), _OnDiagramListEditItemFnc, 0, 0, 0);
	m_wndDiagramList.AddEvent(3, _T("Delete"), _OnDiagramListDeleteItemFnc, 0, VK_DELETE, 0);
	

	m_wndDiagramListDetail.SetEvent(WE_SELCHANGE, _OnDiagramListDetailSelectChangeFnc);
	m_wndDiagramListDetail.SetEvent(WE_LOADDATA, _OnDiagramListDetailLoadDataFnc);
	m_wndDiagramListDetail.SetEvent(WE_DBLCLICK, _OnDiagramListDetailDblClickFnc);
	
	m_wndDiagramListDetail.AddEvent(1, _T("Add"), _OnDiagramListDetailAddItemFnc, 0, 0, 0);
	m_wndDiagramListDetail.AddEvent(2, _T("Edit"), _OnDiagramListDetailEditItemFnc, 0, 0, 0);
	m_wndDiagramListDetail.AddEvent(3, _T("Delete"), _OnDiagramListDetailDeleteItemFnc, 0, VK_DELETE, 0);

	OnDiagramListLoadData();

}
void CHMSCancerTreatDiagramDialog::OnDoDataExchange(CDataExchange* pDX){

}
void CHMSCancerTreatDiagramDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSCancerTreatDiagramDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSCancerTreatDiagramDialog::SetDefaultValues(){


}
int CHMSCancerTreatDiagramDialog::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, 2,-1);
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
void CHMSCancerTreatDiagramDialog::OnDiagramListDblClick(){
	
} 
void CHMSCancerTreatDiagramDialog::OnDiagramListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_szOrderID = m_wndDiagramList.GetItemText(nNewItem, 0);
	OnDiagramListDetailLoadData();
} 
int CHMSCancerTreatDiagramDialog::OnDiagramListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CRecord rsCheck(&pMF->m_db);
	CString szSQL, szCheck;
	int nCount = 0;

	if(m_szOrderID.IsEmpty())
		return -1;
	
	szCheck.Format(_T("SELECT * FROM HMS_CANCER_TREATDIAGLN WHERE HCTL_ORDER_ID = '%s'"), m_szOrderID);
	rsCheck.ExecSQL(szCheck);
	if(!rsCheck.IsEOF())
	{
		MessageBox(_T("Lines of diagram is not empty. Cannot delete diagram!"), 0, MB_ICONERROR);
		return -1;
	}

	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
	szSQL.Format(_T("DELETE FROM HMS_CANCER_TREATDIAG WHERE HCT_ORDER_ID = '%s'"), m_szOrderID);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
		OnDiagramListLoadData();
 	}
	return 0;
} 
int CHMSCancerTreatDiagramDialog::OnDiagramsListAddItem(){
	CHMSCancerTreatDiagramEntryDlg dlg(this);
	dlg.m_pWndDiagramDlg = this;
	dlg.SetMode(VM_ADD);
	dlg.DoModal();
	return 0;
}
int CHMSCancerTreatDiagramDialog::OnDiagramsListEditItem(){
	CHMSCancerTreatDiagramEntryDlg dlg(this);
	dlg.m_pWndDiagramDlg = this;
	dlg.m_szOrderID = m_szOrderID;
	dlg.SetMode(VM_EDIT);
	dlg.DoModal();
	return 0;
}
long CHMSCancerTreatDiagramDialog::OnDiagramListLoadData(){

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndDiagramList.BeginLoad(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT * FROM HMS_CANCER_TREATDIAG ORDER BY hct_order_id "));
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDiagramList.AddItems(
			rs.GetValue(_T("HCT_ORDER_ID")),
			rs.GetValue(_T("HCT_DESC")), NULL);
		rs.MoveNext();
	}
	m_wndDiagramList.EndLoad(); 
	return nCount;

}
void CHMSCancerTreatDiagramDialog::OnDiagramListDetailDblClick(){
	
} 
void CHMSCancerTreatDiagramDialog::OnDiagramListDetailSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_nOrderLineID = ToLong(m_wndDiagramListDetail.GetItemText(nNewItem, 1));
} 
int CHMSCancerTreatDiagramDialog::OnDiagramListDetailAddItem()
{
	CHMSCancerTreatDiagramLineDlg dlg(this);
	
	dlg.m_pParent = this;
	dlg.m_szOrderID = m_szOrderID;
	dlg.SetMode(VM_ADD);
	dlg.DoModal();
	return 0;
}
int CHMSCancerTreatDiagramDialog::OnDiagramListDetailEditItem()
{
	CHMSCancerTreatDiagramLineDlg dlg(this);
	dlg.m_pParent = this;
	dlg.m_szOrderID = m_szOrderID;
	dlg.m_nOrderLineID = m_nOrderLineID;
	dlg.SetMode(VM_EDIT);
	dlg.DoModal();
	return 0;
}
int CHMSCancerTreatDiagramDialog::OnDiagramListDetailDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	if(m_szOrderID.IsEmpty() && m_nOrderLineID < 0)
		return -1;
	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
	szSQL.Format(_T("DELETE FROM HMS_CANCER_TREATDIAGLN WHERE HCTL_ORDER_ID = '%s' AND HCTL_ORDERLINE_ID = %ld"), m_szOrderID, m_nOrderLineID);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
		OnDiagramListDetailLoadData();
 	}
	return 0;

} 
long CHMSCancerTreatDiagramDialog::OnDiagramListDetailLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szIndex;
	if(m_szOrderID.IsEmpty())
	{
		return -1;
	}
	m_wndDiagramListDetail.BeginLoad(); 
	int nCount = 0;
	int nIndex = 1;
	szSQL.Format(_T("SELECT * FROM HMS_CANCER_TREATDIAGLN WHERE HCTL_ORDER_ID = '%s'"), m_szOrderID);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		szIndex.Format(_T("%d"), nIndex);
		m_wndDiagramListDetail.AddItems(
			szIndex,
			rs.GetValue(_T("HCTL_ORDERLINE_ID")),
			rs.GetValue(_T("HCTL_LINE")),
			rs.GetValue(_T("HCTL_TENTHUOC")),
			rs.GetValue(_T("HCTL_LIEUDUNG_M2")),
			rs.GetValue(_T("HCTL_LIEUDUNG_BN")),
			rs.GetValue(_T("HCTL_SOLUONG_LINH")),
			rs.GetValue(_T("HCTL_DUNGMOI")),
			rs.GetValue(_T("HCTL_THETICH")),
			rs.GetValue(_T("HCTL_THOIGIAN_SD")), NULL);
		rs.MoveNext();
		nIndex++;
	}
	m_wndDiagramListDetail.EndLoad(); 
	return nCount;
}
int CHMSCancerTreatDiagramDialog::OnAddHMSCancerTreatDiagramDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSCancerTreatDiagramDialog::OnEditHMSCancerTreatDiagramDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSCancerTreatDiagramDialog::OnDeleteHMSCancerTreatDiagramDialog(){
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
 		OnCancelHMSCancerTreatDiagramDialog();
 	}
	return 0;
}
int CHMSCancerTreatDiagramDialog::OnSaveHMSCancerTreatDiagramDialog(){
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
 		//OnHMSCancerTreatDiagramDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSCancerTreatDiagramDialog::OnCancelHMSCancerTreatDiagramDialog(){
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
int CHMSCancerTreatDiagramDialog::OnHMSCancerTreatDiagramDialogListLoadData(){
	return 0;
}
