#include "HMSPatientInforDialog.h"
#include "MainFrm.h"

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
static void _OnApplySelectFnc(CWnd *pWnd){
	CHMSPatientInforDialog *pVw = (CHMSPatientInforDialog *)pWnd;
	pVw->OnApplySelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSPatientInforDialog *pVw = (CHMSPatientInforDialog *)pWnd;
	pVw->OnCloseSelect();
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
	CGuiDialog(pParent){
	m_nDlgWidth = 515;
	m_nDlgHeight = 315;
	SetDefaultValues();
}
CHMSPatientInforDialog::~CHMSPatientInforDialog(){
}
void CHMSPatientInforDialog::OnCreateComponents()
{
	m_wndPatientInfor.Create(this, _T("Patient Information"), 5, 5, 505, 275);
	m_wndList.Create(this,10, 30, 500, 270); 
	m_wndApply.Create(this, _T("&Apply"), 340, 280, 420, 305);
	m_wndClose.Create(this, _T("&Close"), 425, 280, 505, 305);

}
void CHMSPatientInforDialog::OnInitializeComponents()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);


	m_wndList.InsertColumn(0, _T("Index"), CFMT_TEXT, 30);
	m_wndList.InsertColumn(1, _T("Doc No"), CFMT_TEXT, 90);
	m_wndList.InsertColumn(2, _T("Patient Name"), CFMT_TEXT, 150);
	m_wndList.InsertColumn(3, _T("Age"), CFMT_TEXT, 40);
	m_wndList.InsertColumn(4, _T("Sex"), CFMT_TEXT, 40);
	m_wndList.InsertColumn(5, _T("Discharge Date"), CFMT_DATETIME, 120);

}
void CHMSPatientInforDialog::OnSetWindowEvents()
{
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	
	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);


	SetMode(VM_EDIT);

	OnListLoadData();

	if (m_wndList.GetItemCount() > 0)
	{
		m_wndList.SetFocus();
		m_wndList.SetCurSel(0);
	}
}
void CHMSPatientInforDialog::OnDoDataExchange(CDataExchange* pDX)
{

}
void CHMSPatientInforDialog::GetDataToScreen(){
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
 			EnableButtons(TRUE, 0, 1, -1); 
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
void CHMSPatientInforDialog::OnListDblClick()
{
	int nSel = m_wndList.GetCurSel();
	if (nSel < 0)
		return;

	m_nDocNo = str2long(m_wndList.GetItemText(nSel, 1));
	OnOK();
} 
void CHMSPatientInforDialog::OnListSelectChange(int nOldItem, int nNewItem)
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSPatientInforDialog::OnListDeleteItem()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSPatientInforDialog::OnListLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	CString tmpStr;

	m_wndList.BeginLoad();
	m_wndList.DeleteAllItems(); 
	int nCount = 0;
	int nIndex = 1;

	szSQL.Format(_T(" SELECT hpr_docno AS DocNo,") \
				_T("        trim(hp_surname||' '||hp_midname||' '||hp_firstname) AS PatientName,") \
				_T("        hms_getage(TRUNC(hd_admitdate), hp_birthdate) AS Age,") \
				_T("        sys_sel_getname('sys_sex', hp_sex) as Sex,") \
				_T("        case when hpr_class='E' then hd_enddate else hcr_dischargedate end as DischargeDate") \
				_T(" FROM hms_patient_record") \
				_T(" LEFT JOIN hms_doc ON(hd_docno=hpr_docno)") \
				_T(" LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno)") \
				_T(" LEFT JOIN hms_patient ON(hp_patientno=hd_patientno)") \
				_T(" WHERE hpr_docrec='%s'"), m_szDocRec);

	nCount = rs.ExecSQL(szSQL);

	while (!rs.IsEOF())
	{ 
		tmpStr.Format(_T("%d"), nIndex++);
		m_wndList.AddItems(
			tmpStr, 
			rs.GetValue(_T("DocNo")), 
			rs.GetValue(_T("PatientName")), 
			rs.GetValue(_T("Age")), 
			rs.GetValue(_T("Sex")), 
			rs.GetValue(_T("DischargeDate")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}
void CHMSPatientInforDialog::OnApplySelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnListDblClick();
	//_msg(_T("%ld"), m_nDocNo);
	OnOK();
} 
void CHMSPatientInforDialog::OnCloseSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();
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
 		//szSQL = m_hms_patient_recordTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE")); 
 		//szSQL = m_hms_patient_recordTbl.GetUpdateSQL(_T("createdby,createddate")); 
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
