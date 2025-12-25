#include "AdProductResourceDialog.h"
#include "MainFrame_E10.h"
#include "AdProductResource.h"
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CAdProductResourceDialog *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CAdProductResourceDialog *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CAdProductResourceDialog *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CAdProductResourceDialog *)pWnd)->OnNameCheckValue();
} 
static void _OnActiveSelectFnc(CWnd *pWnd){
	 ((CAdProductResourceDialog*)pWnd)->OnActiveSelect();
}
static void _OnSourceFeeSelectFnc(CWnd *pWnd){
	 ((CAdProductResourceDialog*)pWnd)->OnSourceFeeSelect();
}
static void _OnSaveSelectFnc(CWnd *pWnd){
	CAdProductResourceDialog *pVw = (CAdProductResourceDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnDiscardSelectFnc(CWnd *pWnd){
	CAdProductResourceDialog *pVw = (CAdProductResourceDialog *)pWnd;
	pVw->OnDiscardSelect();
} 
static int _OnAddAdProductResourceDialogFnc(CWnd *pWnd){
	 return ((CAdProductResourceDialog*)pWnd)->OnAddAdProductResourceDialog();
} 
static int _OnEditAdProductResourceDialogFnc(CWnd *pWnd){
	 return ((CAdProductResourceDialog*)pWnd)->OnEditAdProductResourceDialog();
} 
static int _OnDeleteAdProductResourceDialogFnc(CWnd *pWnd){
	 return ((CAdProductResourceDialog*)pWnd)->OnDeleteAdProductResourceDialog();
} 
static int _OnSaveAdProductResourceDialogFnc(CWnd *pWnd){
	 return ((CAdProductResourceDialog*)pWnd)->OnSaveAdProductResourceDialog();
} 
static int _OnCancelAdProductResourceDialogFnc(CWnd *pWnd){
	 return ((CAdProductResourceDialog*)pWnd)->OnCancelAdProductResourceDialog();
} 
CAdProductResourceDialog::CAdProductResourceDialog(CWnd *pParent, int nMode):
	CGuiDialog(pParent){
	CGuiDialog::SetMode(nMode);
	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CAdProductResourceDialog::~CAdProductResourceDialog(){
}
void CAdProductResourceDialog::OnCreateComponents(){
	m_wndNameLabel.Create(this, _T("Name"), 10, 30, 90, 55);
	m_wndName.Create(this,95, 30, 335, 55); 
	m_wndActive.Create(this, _T("&Active"), 10, 65, 90, 90);
	m_wndSourceFee.Create(this, _T("Free"), 95, 65, 175, 90);
	m_wndSave.Create(this, _T("&Save"), 180, 65, 255, 90);
	m_wndDiscard.Create(this, _T("&Discard"), 260, 65, 340, 90);
	m_wndGroupList.Create(this, _T("Source drug list"), 5, 5, 340, 60);

}
void CAdProductResourceDialog::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndID.SetLimitText(1024);
	m_wndID.SetCheckValue(true);
	m_wndName.SetLimitText(1024);
	m_wndName.SetCheckValue(true);

	m_product_ProductResourceTbl.SetTableName(_T("m_product_resource"));
	m_product_ProductResourceTbl.AddField(_T("mpr_org_id"), dfText, 32);
	m_product_ProductResourceTbl.AddField(_T("mpr_name"), dfText, 35);
	m_product_ProductResourceTbl.AddField(_T("mpr_free"), dfText, 1);
	m_product_ProductResourceTbl.AddField(_T("mpr_isactive"), dfText, 1);
}

void CAdProductResourceDialog::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	m_wndActive.SetEvent(WE_CLICK, _OnActiveSelectFnc);
	m_wndSourceFee.SetEvent(WE_CLICK, _OnSourceFeeSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndDiscard.SetEvent(WE_CLICK, _OnDiscardSelectFnc);
	if (GetMode() == VM_EDIT)
		GetDataToScreen();
	SetMode(GetMode());
}
void CAdProductResourceDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_Check(pDX, m_wndActive.GetDlgCtrlID(), m_bActive);
	DDX_Check(pDX, m_wndSourceFee.GetDlgCtrlID(), m_bSourceFee);

}
void CAdProductResourceDialog::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM m_product_resource WHERE mpr_product_resource_id = %d"), m_nID);
	rs.ExecSQL(szSQL);
	if (!rs.IsEOF())
	{
		rs.GetValue(_T("mpr_name"), m_szName);
		CString szFree, szActive;
		rs.GetValue(_T("mpr_free"), szFree);
		if (szFree == _T("Y"))
			m_bSourceFee = true;
		else
			m_bSourceFee = false;
		rs.GetValue(_T("mpr_isactive"), szActive);
		if (szActive == _T("Y"))
			m_bActive = true;
		else
			m_bActive = false;
	}

}

void CAdProductResourceDialog::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_product_ProductResourceTbl.SetValue(_T("mpr_org_id"), pMF->GetModuleID());
	m_product_ProductResourceTbl.SetValue(_T("mpr_name"), m_szName);
	m_product_ProductResourceTbl.SetValue(_T("mpr_free"), m_bSourceFee?_T("Y"):_T("N"));
	m_product_ProductResourceTbl.SetValue(_T("mpr_isactive"), _T("Y"));
}

void CAdProductResourceDialog::SetDefaultValues(){

	m_nID=0;
	m_szName.Empty();
	m_bSourceFee=FALSE;
	m_bActive = true;
}

int CAdProductResourceDialog::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			//EnableButtons(TRUE, 3, 4, -1);
 			SetDefaultValues();
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			//EnableButtons(TRUE, 3, 4, -1);
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
		m_wndSave.EnableWindow(true);
 		UpdateData(FALSE);
 		return nOldMode;
}

/*void CAdProductResourceDialog::OnNameChange(){
	
} */
/*void CAdProductResourceDialog::OnNameSetfocus(){
	
} */
/*void CAdProductResourceDialog::OnNameKillfocus(){
	
} */
int CAdProductResourceDialog::OnNameCheckValue(){
	return 0;
}
 
void CAdProductResourceDialog::OnActiveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}
	void CAdProductResourceDialog::OnSourceFeeSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}

void CAdProductResourceDialog::OnSaveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnSaveAdProductResourceDialog();
}
 
void CAdProductResourceDialog::OnDiscardSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
}
 
int CAdProductResourceDialog::OnAddAdProductResourceDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}

int CAdProductResourceDialog::OnEditAdProductResourceDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}

int CAdProductResourceDialog::OnDeleteAdProductResourceDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	CString szSQL;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
 	szSQL.Format(_T("DELETE FROM  WHERE  AND") );
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
 		SetMode(VM_NONE);
 		OnCancelAdProductResourceDialog();
 	}
	return 0;
}

int CAdProductResourceDialog::OnSaveAdProductResourceDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
		szSQL = m_product_ProductResourceTbl.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
 		szWhere.Format(_T(" WHERE mpr_product_resource_id = %d"), m_nID);
 		szSQL = m_product_ProductResourceTbl.GetUpdateSQL(_T("mpr_createdby,mpr_createddate"));
 		szSQL += szWhere;
 	}
 _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
 		if (GetMode() == VM_ADD)
			SetMode(VM_ADD);
		else
			CGuiDialog::OnOK();
		((CAdProductResource*)m_pParentWnd)->OnListLoadData();
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}

int CAdProductResourceDialog::OnCancelAdProductResourceDialog(){
 	if(GetMode() == VM_EDIT)
 	{
 		SetMode(VM_VIEW);
 	} 
 	else 
 	{
 		SetMode(VM_NONE);
 	} 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	return 0;
}
 
int CAdProductResourceDialog::OnAdProductResourceDialogListLoadData(){
	return 0;
}

