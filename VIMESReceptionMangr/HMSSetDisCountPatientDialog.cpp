#include "HMSSetDisCountPatientDialog.h"
#include "MainFrm.h"
static void _OnNameCurrentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSSetDisCountPatientDialog* )pWnd)->OnNameCurrentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnNameCurrentSelendokFnc(CWnd *pWnd){
	((CHMSSetDisCountPatientDialog *)pWnd)->OnNameCurrentSelendok();
}
/*static void _OnNameCurrentSetfocusFnc(CWnd *pWnd){
	((CHMSSetDisCountPatientDialog *)pWnd)->OnNameCurrentKillfocus();
}*/
/*static void _OnNameCurrentKillfocusFnc(CWnd *pWnd){
	((CHMSSetDisCountPatientDialog *)pWnd)->OnNameCurrentKillfocus();
}*/
static long _OnNameCurrentLoadDataFnc(CWnd *pWnd){
	return ((CHMSSetDisCountPatientDialog *)pWnd)->OnNameCurrentLoadData();
}
/*static void _OnNameCurrentAddNewFnc(CWnd *pWnd){
	((CHMSSetDisCountPatientDialog *)pWnd)->OnNameCurrentAddNew();
}*/
static void _OnNameNewSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSSetDisCountPatientDialog* )pWnd)->OnNameNewSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnNameNewSelendokFnc(CWnd *pWnd){
	((CHMSSetDisCountPatientDialog *)pWnd)->OnNameNewSelendok();
}
/*static void _OnNameNewSetfocusFnc(CWnd *pWnd){
	((CHMSSetDisCountPatientDialog *)pWnd)->OnNameNewKillfocus();
}*/
/*static void _OnNameNewKillfocusFnc(CWnd *pWnd){
	((CHMSSetDisCountPatientDialog *)pWnd)->OnNameNewKillfocus();
}*/
static long _OnNameNewLoadDataFnc(CWnd *pWnd){
	return ((CHMSSetDisCountPatientDialog *)pWnd)->OnNameNewLoadData();
}
/*static void _OnNameNewAddNewFnc(CWnd *pWnd){
	((CHMSSetDisCountPatientDialog *)pWnd)->OnNameNewAddNew();
}*/
static void _OnApplySelectFnc(CWnd *pWnd){
	CHMSSetDisCountPatientDialog *pVw = (CHMSSetDisCountPatientDialog *)pWnd;
	pVw->OnApplySelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSSetDisCountPatientDialog *pVw = (CHMSSetDisCountPatientDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddPCMSSetDisCountPatientDialogFnc(CWnd *pWnd){
	 return ((CHMSSetDisCountPatientDialog*)pWnd)->OnAddPCMSSetDisCountPatientDialog();
} 
static int _OnEditPCMSSetDisCountPatientDialogFnc(CWnd *pWnd){
	 return ((CHMSSetDisCountPatientDialog*)pWnd)->OnEditPCMSSetDisCountPatientDialog();
} 
static int _OnDeletePCMSSetDisCountPatientDialogFnc(CWnd *pWnd){
	 return ((CHMSSetDisCountPatientDialog*)pWnd)->OnDeletePCMSSetDisCountPatientDialog();
} 
static int _OnSavePCMSSetDisCountPatientDialogFnc(CWnd *pWnd){
	 return ((CHMSSetDisCountPatientDialog*)pWnd)->OnSavePCMSSetDisCountPatientDialog();
} 
static int _OnCancelPCMSSetDisCountPatientDialogFnc(CWnd *pWnd){
	 return ((CHMSSetDisCountPatientDialog*)pWnd)->OnCancelPCMSSetDisCountPatientDialog();
} 
CHMSSetDisCountPatientDialog::CHMSSetDisCountPatientDialog(CWnd *pParent):
	CGuiDialog(pParent)
{

	m_nDlgWidth = 510;
	m_nDlgHeight = 125;
	SetDefaultValues();
}
CHMSSetDisCountPatientDialog::~CHMSSetDisCountPatientDialog()
{
}
void CHMSSetDisCountPatientDialog::OnCreateComponents()
{
	m_wndChangeOrder.Create(this, _T("Thông tin bệnh nhân miễn giảm"), 5, 5,
                            500, 90);
    m_wndNameCurrentLabel.Create(this, _T("Chế độ hiện thời"), 10, 30, 154, 55);
    m_wndNameCurrent.Create(this, 159, 30, 495, 55);
    m_wndNameNewLabel.Create(this, _T("Chọn mức miễn giảm"), 10, 60, 154, 85);
    m_wndNameNew.Create(this, 159, 60, 495, 85);
    m_wndApply.Create(this, _T("&Apply"), 330, 95, 410, 120);
    m_wndCancel.Create(this, _T("&Cancel"), 415, 95, 495, 120);
}
void CHMSSetDisCountPatientDialog::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndNameCurrent.SetCheckValue(true);
	m_wndNameCurrent.LimitText(35);
	m_wndNameNew.SetCheckValue(true);
	m_wndNameNew.LimitText(35);
	m_wndNameCurrent.SetReadOnly(true);
	
	m_wndNameCurrent.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndNameCurrent.InsertColumn(1, _T("Name"), CFMT_TEXT, 450);
	


	m_wndNameNew.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndNameNew.InsertColumn(1, _T("Name"), CFMT_TEXT, 400);	

}
void CHMSSetDisCountPatientDialog::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndNameCurrent.SetEvent(WE_SELENDOK, _OnNameCurrentSelendokFnc);
	//m_wndNameCurrent.SetEvent(WE_SETFOCUS, _OnNameCurrentSetfocusFnc);
	//m_wndNameCurrent.SetEvent(WE_KILLFOCUS, _OnNameCurrentKillfocusFnc);
	m_wndNameCurrent.SetEvent(WE_SELCHANGE, _OnNameCurrentSelectChangeFnc);
	m_wndNameCurrent.SetEvent(WE_LOADDATA, _OnNameCurrentLoadDataFnc);
	//m_wndNameCurrent.SetEvent(WE_ADDNEW, _OnNameCurrentAddNewFnc);
	m_wndNameNew.SetEvent(WE_SELENDOK, _OnNameNewSelendokFnc);
	//m_wndNameNew.SetEvent(WE_SETFOCUS, _OnNameNewSetfocusFnc);
	//m_wndNameNew.SetEvent(WE_KILLFOCUS, _OnNameNewKillfocusFnc);
	m_wndNameNew.SetEvent(WE_SELCHANGE, _OnNameNewSelectChangeFnc);
	m_wndNameNew.SetEvent(WE_LOADDATA, _OnNameNewLoadDataFnc);
	//m_wndNameNew.SetEvent(WE_ADDNEW, _OnNameNewAddNewFnc);
	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
    GetDataToScreen();
	OnNameCurrentLoadData();
	SetMode(VM_NONE);

}
void CHMSSetDisCountPatientDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndNameCurrent.GetDlgCtrlID(), m_szNameCurrentKey);
	DDX_TextEx(pDX, m_wndNameNew.GetDlgCtrlID(), m_szNameNewKey);

}
void CHMSSetDisCountPatientDialog::GetDataToScreen()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT dc_type FROM hms_discount_patient_list WHERE dc_docno = %ld "), m_nDocumentNo);
	rs.ExecSQL(szSQL);
    
    if (!rs.IsEOF())
    {
        rs.GetValue(_T("dc_type"), m_szNameCurrentKey);
		rs.GetValue(_T("dc_type"), m_szNameNewKey);
    }
}
void CHMSSetDisCountPatientDialog::GetScreenToData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CHMSSetDisCountPatientDialog::SetDefaultValues()
{

	/*m_szNameCurrentKey.Empty();
	m_szNameNewKey.Empty();*/

}
int CHMSSetDisCountPatientDialog::SetMode(int nMode){
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
		
		m_wndNameNew.EnableWindow(true);
 		UpdateData(FALSE);
 		return nOldMode;
}
void CHMSSetDisCountPatientDialog::OnNameCurrentSelectChange(int nOldItemSel, int nNewItemSel)
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSetDisCountPatientDialog::OnNameCurrentSelendok(){
	 
}
/*void CHMSSetDisCountPatientDialog::OnNameCurrentSetfocus(){
	
}*/
/*void CHMSSetDisCountPatientDialog::OnNameCurrentKillfocus(){
	
}*/
long CHMSSetDisCountPatientDialog::OnNameCurrentLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;

	m_wndNameCurrent.DeleteAllItems(); 
	int nCount = 0;

	szSQL.Format(_T("SELECT dc_type FROM hms_discount_patient_list WHERE ")
                 _T("dc_docno = %ld "),  m_nDocumentNo);
    rs.ExecSQL(szSQL);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF())
	{ 
		rs.GetValue(_T("dc_type"), m_szNameCurrentKey);		
		m_wndNameCurrent.AddItems(m_szNameCurrentKey, 			
			NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CHMSSetDisCountPatientDialog::OnNameCurrentAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CHMSSetDisCountPatientDialog::OnNameNewSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSetDisCountPatientDialog::OnNameNewSelendok()
{
	
}
/*void CHMSSetDisCountPatientDialog::OnNameNewSetfocus(){
	
}*/
/*void CHMSSetDisCountPatientDialog::OnNameNewKillfocus(){
	
}*/
long CHMSSetDisCountPatientDialog::OnNameNewLoadData()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CRecord rs(&pMF->m_db);
    CString szSQL, szWhere;
    if (m_wndNameNew.IsSearchKey() && !m_szNameNewKey.IsEmpty())
    {
        szWhere.Format(_T(" AND ss_code='%s' "), m_szNameNewKey);
    };
    szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ")
                 _T("ss_id='hms_discount_level' %s ORDER BY cast(ss_code as int) "), szWhere);

    m_wndNameNew.DeleteAllItems();
    int nCount = 0;
    nCount = rs.ExecSQL(szSQL);

    while (!rs.IsEOF())
    {
        m_wndNameNew.AddItems(rs.GetValue(_T("id")), rs.GetValue(_T("name")),
                              NULL);
        rs.MoveNext();
    }
    return nCount;

}
/*void CHMSSetDisCountPatientDialog::OnNameNewAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CHMSSetDisCountPatientDialog::OnApplySelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szSQL;
	UpdateData(true);
	
	m_szOldFeeID = m_wndNameCurrent.GetCurrent(0);
	m_szNewFeeID = m_wndNameNew.GetCurrent(0);
	
	
	if(m_szNameNewKey.IsEmpty())
	{
		ShowMessageBox(_T("Hãy chọn mức miễn giảm!"));
		return ;
	}
    szSQL.Format(_T("upsert_discount_patient(%ld, '%s', '%s', '%s')"), m_nDocumentNo,
                 pMF->GetCurrentUser(), m_szNewFeeID, pMF->m_szDept);	

	long ret = str2long(pMF->ExecDML(szSQL));
	
	if(ret <= 0)
	{
		ShowMessageBox(_T("Giao dịch thất bại!"), MB_ICONERROR);
		return;
	} 
	
	if(ret > 0)
	{
		CString szDesc;
		szDesc.Format(_T("Thiết lập miễn giảm [%s] -> [%s]; Docno [%ld]"), m_szOldFeeID, m_szNewFeeID, m_nDocumentNo);
		pMF->SystemLog(_T("Setup_Discount_Patient"), szDesc);		
		OnOK();
	}
	
} 
void CHMSSetDisCountPatientDialog::OnCancelSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnCancel();	
} 
int CHMSSetDisCountPatientDialog::OnAddPCMSSetDisCountPatientDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSSetDisCountPatientDialog::OnEditPCMSSetDisCountPatientDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSSetDisCountPatientDialog::OnDeletePCMSSetDisCountPatientDialog(){
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
 		OnCancelPCMSSetDisCountPatientDialog();
 	}
	return 0;
}
int CHMSSetDisCountPatientDialog::OnSavePCMSSetDisCountPatientDialog(){
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
 		//OnPCMSSetDisCountPatientDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSSetDisCountPatientDialog::OnCancelPCMSSetDisCountPatientDialog(){
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
int CHMSSetDisCountPatientDialog::OnPCMSSetDisCountPatientDialogListLoadData(){
	return 0;
}
