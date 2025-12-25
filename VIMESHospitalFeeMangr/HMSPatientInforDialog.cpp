#include "HMSPatientInforDialog.h"
#include "MainFrm.h"

static void _OnApplySelectFnc(CWnd *pWnd){
	CHMSPatientInforDialog *pVw = (CHMSPatientInforDialog *)pWnd;
	pVw->OnApplySelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSPatientInforDialog *pVw = (CHMSPatientInforDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSPatientInforDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSPatientInforDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSPatientInforDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSPatientInforDialog*)pWnd)->OnListDeleteItem();
} 
static int _OnAddHMSPatientInforDialogFnc(CWnd *pWnd){
	 return ((CHMSPatientInforDialog*)pWnd)->OnAddHMSPatientInforDialog();
} 
static int _OnEditHMSPatientInforDialogFnc(CWnd *pWnd){
	 return ((CHMSPatientInforDialog*)pWnd)->OnEditHMSPatientInforDialog();
} 
static int _OnDeleteHMSPatientInforDialogFnc(CWnd *pWnd){
	 return ((CHMSPatientInforDialog*)pWnd)->OnDeleteHMSPatientInforDialog();
} 
static int _OnSaveHMSPatientInforDialogFnc(CWnd *pWnd){
	 return ((CHMSPatientInforDialog*)pWnd)->OnSaveHMSPatientInforDialog();
} 
static int _OnCancelHMSPatientInforDialogFnc(CWnd *pWnd){
	 return ((CHMSPatientInforDialog*)pWnd)->OnCancelHMSPatientInforDialog();
} 
CHMSPatientInforDialog::CHMSPatientInforDialog(CWnd *pParent):
	CGuiDialog(pParent)
{
	m_nDlgWidth = 510;
	m_nDlgHeight = 290;
	SetDefaultValues();
}
CHMSPatientInforDialog::~CHMSPatientInforDialog()
{
}
void CHMSPatientInforDialog::OnCreateComponents()
{
	m_wndPatientInfor.Create(this, _T("Patient Information"), 5, 5, 500, 250);
	m_wndList.Create(this,10, 30, 495, 245);
	m_wndApply.Create(this, _T("&Apply"), 295, 255, 395, 280);
	m_wndClose.Create(this, _T("&Close"), 400, 255, 500, 280);
}
void CHMSPatientInforDialog::OnInitializeComponents()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();


	m_wndList.InsertColumn(0, _T("Document No"), CFMT_NUMBER, 80);
	m_wndList.InsertColumn(1, _T("Patient Name"), CFMT_TEXT, 150);
	m_wndList.InsertColumn(2, _T("Object"), CFMT_TEXT, 120);
	m_wndList.InsertColumn(3, _T("Admission Date"), CFMT_DATETIME, 110);

	m_hms_invfeectlTbl.SetTableName(_T("hms_invfeectl"));
	m_hms_invfeectlTbl.AddField(_T("hifc_userid"), dfText, 15); 
	m_hms_invfeectlTbl.AddField(_T("hifc_recvdate"), dfDate); 
	m_hms_invfeectlTbl.AddField(_T("hifc_examfee"), dfText, 1); 
	m_hms_invfeectlTbl.AddField(_T("hifc_drugfee"), dfText, 1); 
	m_hms_invfeectlTbl.AddField(_T("hifc_pcmsfee"), dfText, 1); 
	m_hms_invfeectlTbl.AddField(_T("hifc_advance"), dfText, 1); 
	m_hms_invfeectlTbl.AddField(_T("hifc_refund"), dfText, 1); 
	m_hms_invfeectlTbl.AddField(_T("hifc_remission"), dfText, 1); 
	m_hms_invfeectlTbl.AddField(_T("hifc_objects"), dfText, 15); 

}
void CHMSPatientInforDialog::OnSetWindowEvents()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	//m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	//SetMode(VM_NONE);
	OnListLoadData();

	if (m_wndList.GetItemCount() > 0)
	{
		m_wndList.SetFocus();
		m_wndList.SetCurSel(0);
	}
}
void CHMSPatientInforDialog::OnDoDataExchange(CDataExchange* pDX){

}
void CHMSPatientInforDialog::GetDataToScreen()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSPatientInforDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSPatientInforDialog::SetDefaultValues(){


}
int CHMSPatientInforDialog::SetMode(int nMode){
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
void CHMSPatientInforDialog::OnApplySelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	int nSel = m_wndList.GetCurSel();

	if (nSel < 0)
		return;

	m_nDocNo = str2long(m_wndList.GetItemText(nSel, 0));

	OnOK();
} 
void CHMSPatientInforDialog::OnCloseSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();
} 
void CHMSPatientInforDialog::OnListDblClick()
{
	int nSel = m_wndList.GetCurSel();
	if (nSel < 0)
		return;

	m_nDocNo = str2long(m_wndList.GetItemText(nSel, 0));

	OnOK();
} 
void CHMSPatientInforDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSPatientInforDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSPatientInforDialog::OnListLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;

	if (!m_szSQL.IsEmpty())
		nCount = rs.ExecSQL(m_szSQL);
	else
		return -1;

	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), 
			rs.GetValue(_T("objectname")),
			rs.GetValue(_T("admitdate")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}
int CHMSPatientInforDialog::OnAddHMSPatientInforDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSPatientInforDialog::OnEditHMSPatientInforDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSPatientInforDialog::OnDeleteHMSPatientInforDialog(){
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
 		OnCancelHMSPatientInforDialog();
 	}
	return 0;
}
int CHMSPatientInforDialog::OnSaveHMSPatientInforDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
 		//szSQL = m_hms_invfeectlTbl.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
 		szWhere.Format(_T(" WHERE"));
 		//szSQL = m_hms_invfeectlTbl.GetUpdateSQL(_T("createdby,createddate"));
 		szSQL += szWhere;
 	}
 _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
 		//OnHMSPatientInforDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSPatientInforDialog::OnCancelHMSPatientInforDialog(){
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
int CHMSPatientInforDialog::OnHMSPatientInforDialogListLoadData(){
	return 0;
}
