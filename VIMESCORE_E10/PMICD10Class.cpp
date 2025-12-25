#include "PMICD10Class.h"
#include "MainFrame_E10.h"
#include "PMICD10ClassLine.h"
#include "StringToken.h"
static long _OnCDListLoadDataFnc(CWnd *pWnd){
	return ((CPMICD10Class*)pWnd)->OnCDListLoadData();
} 
static void _OnCDListDblClickFnc(CWnd *pWnd){
	((CPMICD10Class*)pWnd)->OnCDListDblClick();
} 
static void _OnCDListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CPMICD10Class*)pWnd)->OnCDListSelectChange(nOldItem, nNewItem);
} 
static int _OnCDListDeleteItemFnc(CWnd *pWnd){
	 return ((CPMICD10Class*)pWnd)->OnCDListDeleteItem();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CPMICD10Class *pVw = (CPMICD10Class *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CPMICD10Class *pVw = (CPMICD10Class *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CPMICD10Class *pVw = (CPMICD10Class *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CPMICD10Class *pVw = (CPMICD10Class *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CPMICD10Class *pVw = (CPMICD10Class *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddPMICD10ClassFnc(CWnd *pWnd){
	 return ((CPMICD10Class*)pWnd)->OnAddPMICD10Class();
} 
static int _OnEditPMICD10ClassFnc(CWnd *pWnd){
	 return ((CPMICD10Class*)pWnd)->OnEditPMICD10Class();
} 
static int _OnDeletePMICD10ClassFnc(CWnd *pWnd){
	 return ((CPMICD10Class*)pWnd)->OnDeletePMICD10Class();
} 
static int _OnSavePMICD10ClassFnc(CWnd *pWnd){
	 return ((CPMICD10Class*)pWnd)->OnSavePMICD10Class();
} 
static int _OnCancelPMICD10ClassFnc(CWnd *pWnd){
	 return ((CPMICD10Class*)pWnd)->OnCancelPMICD10Class();
} 
static int _OnICDLoadDataFnc(CWnd *pWnd){
	((CPMICD10Class*)(pWnd->GetParent()->GetParent()))->OnICDLoadData();
	return 0;
} 
static int _OnICDSelendokFnc(CWnd *pWnd){
	((CPMICD10Class*)(pWnd->GetParent()->GetParent()))->OnICDSelendok();
	return 0;
} 

CPMICD10Class::CPMICD10Class(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CPMICD10Class::~CPMICD10Class(){
}
void CPMICD10Class::OnCreateComponents(){
	m_wndCDList.Create(this,5, 5, 515, 215); 
// 	m_wndAdd.Create(this, _T("&Add"), 95, 220, 175, 245);
// 	m_wndEdit.Create(this, _T("&Edit"), 180, 220, 260, 245);
// 	m_wndDelete.Create(this, _T("&Delete"), 265, 220, 345, 245);
// 	m_wndSave.Create(this, _T("&Confirm"), 350, 220, 430, 245);
// 	m_wndClose.Create(this, _T("&Close"), 435, 220, 515, 245);

	m_wndAdd.Create(this, _T("&Add"), 180, 220, 260, 245);
	m_wndEdit.Create(this, _T("&Edit"), 265, 220, 345, 245);
	m_wndDelete.Create(this, _T("&Delete"), 350, 220, 430, 245);
	m_wndSave.Create(this, _T("&Confirm"), 0, 0, 0, 0);
	m_wndClose.Create(this, _T("&Close"), 435, 220, 515, 245);

}
void CPMICD10Class::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();


	m_wndCDList.InsertColumn(0, _T("STT"), CFMT_TEXT, 50);
	m_wndCDList.InsertColumn(1, _T("ICD"), CFMT_TEXT, 0);
	m_wndCDList.InsertColumn(2, _T("Disease"), CFMT_TEXT, 450);

	m_wndCDList.SetEditLabel(2, GUI_TEXTCTRL);
}
void CPMICD10Class::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndCDList.SetEvent(WE_SELCHANGE, _OnCDListSelectChangeFnc);
	m_wndCDList.SetEvent(WE_LOADDATA, _OnCDListLoadDataFnc);
	m_wndCDList.SetEvent(WE_DBLCLICK, _OnCDListDblClickFnc);
	m_wndCDList.AddEvent(1, _T("Delete"), _OnCDListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);

	/*m_wndCDList.SetEditLabel(2, GUI_COMBOBOX);
	CComboBox *pCB = (CComboBox*) m_wndCDList.GetEditControl(2);
	if (pCB) 
	{		
		pCB->InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
		pCB->InsertColumn(1, _T("ICD"), CFMT_TEXT, 450);
		pCB->SetEvent(WE_LOADDATA, _OnICDLoadDataFnc);
		pCB->SetEvent(WE_SELENDOK, _OnICDSelendokFnc);
		pCB->AddItems(_T("0"),_T("0"), NULL);
		pCB->AddString(_T("Test"));
	}*/
	OnCDListLoadData();

}

void CPMICD10Class::OnICDLoadData()
{
	return;
}

void CPMICD10Class::OnICDSelendok()
{
	return;
}

void CPMICD10Class::OnDoDataExchange(CDataExchange* pDX){

}
void CPMICD10Class::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	}
	else
	{
			
	}

}
void CPMICD10Class::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CPMICD10Class::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CPMICD10Class::SetDefaultValues(){


}
int CPMICD10Class::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
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
void CPMICD10Class::OnCDListDblClick(){
	
} 
void CPMICD10Class::OnCDListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
int CPMICD10Class::OnCDListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnDeleteSelect();
	return 0;
} 
long CPMICD10Class::OnCDListLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL,szICD10,szTemp;
	m_wndCDList.BeginLoad(); 
	CStringToken tk(m_szDisease, _T(";"), false);
	szICD10.Empty();
	int nCount = 0, nIndex = 1;
	for (int i = 0; i < tk.GetSize(); i++){
		tk.GetAt(i, szTemp);
			if (!szICD10.IsEmpty()) 
				szICD10 += _T(",");
			szICD10.AppendFormat(_T("'%s'"), szTemp);
	}
	szSQL.Format(_T(" SELECT hi_icd as icd, hi_name as icd_name  from hms_icd where hi_icd in (%s) "),szICD10 );

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndCDList.AddItems(
			int2str(nIndex++),
			rs.GetValue(_T("ICD")), 
			rs.GetValue(_T("icd_name")), NULL);
		rs.MoveNext();
	}
	m_wndCDList.EndLoad(); 
	return nCount;
}
void CPMICD10Class::OnAddSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CPMICD10ClassLine* newLine = new CPMICD10ClassLine(this);
	newLine->SetMode(VM_ADD);
	newLine->ShowPopup(&m_wndCDList);
} 
void CPMICD10Class::OnEditSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	int nSel = m_wndCDList.GetCurSel();
	if (nSel < 0)
	{
		return;
	}
	CPMICD10ClassLine* newLine = new CPMICD10ClassLine(this);
	newLine->m_szICDKey = m_wndCDList.GetItemText(nSel, 1);
	newLine->SetMode(VM_EDIT);
	newLine->ShowPopup(&m_wndCDList);	
} 
void CPMICD10Class::OnDeleteSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	int nSel = m_wndCDList.GetCurSel();
	if (nSel < 0)
	{
		return;
	}
	if (ShowMessageBox(_T("Do you want to delete this item?"), MB_YESNO) == IDNO)
	{
		return;
	}
	if(m_bInsert)
	{
		CString szSQL, szICD;
		szICD= m_wndCDList.GetItemText(nSel,1);
		szSQL.Format(_T("delete from  m_product_class_interaction ") \
					_T("	where 		mpci_class_id =%ld and mpci_icd='%s'  "), m_nClassID,szICD );
		pMF->ExecSQL(szSQL);

		szSQL.Format(_T("delete from  m_product_class_interactionln ") \
					_T("	where 		mpcil_class_id =%ld and mpcil_icd='%s'  "), m_nClassID,szICD );
		pMF->ExecSQL(szSQL);

	}
	m_wndCDList.DeleteItem(nSel);
	for (int i = nSel; i < m_wndCDList.GetItemCount(); i++)
	{
		m_wndCDList.SetItemText(i, 0, int2str(i+1));
	}
} 
void CPMICD10Class::OnSaveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
		m_szDisease = GetCoDisease();
		OnOK();

} 

CString CPMICD10Class::GetCoDisease(bool bWithICD)
{
	CString szRet;
	szRet.Empty();
	for (int i = 0; i < m_wndCDList.GetItemCount(); i++)
	{
		if (!szRet.IsEmpty())
		{
			szRet += _T(";");
		}
			szRet.AppendFormat(_T("%s"), m_wndCDList.GetItemText(i, 1));
	}
	//_msg(_T("%s"),szRet);
	return szRet;
}

void CPMICD10Class::OnCloseSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnSaveSelect();
	CGuiDialog::OnClose();
} 
int CPMICD10Class::OnAddPMICD10Class(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CPMICD10Class::OnEditPMICD10Class(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CPMICD10Class::OnDeletePMICD10Class(){
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
 		OnCancelPMICD10Class();
 	}
	return 0;
}
int CPMICD10Class::OnSavePMICD10Class(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
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
 		//OnPMICD10ClassListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CPMICD10Class::OnCancelPMICD10Class(){
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
int CPMICD10Class::OnPMICD10ClassListLoadData(){
	return 0;
}

CString CPMICD10Class::GetICDSelected(int nExceptRow)
{
	CString szRet;
	for (int i = 0; i < m_wndCDList.GetItemCount(); i++)
	{
		if (i == nExceptRow)
		{
			continue;
		}
		if (!szRet.IsEmpty())
		{
			szRet += _T(";");
		}
		szRet.AppendFormat(_T("%s"), m_wndCDList.GetItemText(i, 1));
	}
	return szRet;
}

void CPMICD10Class::PopulateList(int nMode, CString szICD)
{
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	int nCount = m_wndCDList.GetItemCount();
	int nSel = m_wndCDList.GetCurSel();
	nCount++;
	if (nMode == VM_ADD)
	{
		m_wndCDList.AddItems(int2str(nCount), szICD, GetDiagnostic(szICD));
		// dong thoi insert vao bang interacter  
		if(m_bInsert)
		{
			CString szSQL;
			szSQL.Format(_T("INSERT INTO m_product_class_interaction( ") \
						_T("			mpci_class_id, mpci_icd, mpci_iscondision) ") \
						_T("	VALUES (%ld, '%s', '%s') "), m_nClassID,szICD, _T("N")  );
			pMF->ExecSQL(szSQL);

		}
	
	}
	if (nMode == VM_EDIT)
	{
		if (nSel < 0)
		{
			return;
		}
		m_wndCDList.SetItemText(nSel, 1, szICD);
		m_wndCDList.SetItemText(nSel, 2, GetDiagnostic(szICD));
	}
	m_wndCDList.EndLoad();
}

BEGIN_MESSAGE_MAP(CPMICD10Class, CGuiDialog)
	ON_WM_CLOSE()
END_MESSAGE_MAP()

void CPMICD10Class::OnClose()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
	OnSaveSelect();
	CGuiDialog::OnClose();
}
BOOL CPMICD10Class::PreTranslateMessage(MSG* pMsg)
{
	// TODO: Add your specialized code here and/or call the base class
	if(pMsg->wParam == VK_ESCAPE){
		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
		OnSaveSelect();
	}
	return CGuiDialog::PreTranslateMessage(pMsg);
}
CString	CPMICD10Class::GetDiagnostic(LPCTSTR lpszICD) {
	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
	CString szSQL;
	CRecord rs(&pMF->m_db);
	szSQL.Format(_T("SELECT hi_name FROM hms_icd WHERE hi_icd='%s' "), lpszICD);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF()){
		CString szRet;
		rs.GetValue(_T("hi_name"), szRet);
		return szRet;
	}
	return _T("");
}