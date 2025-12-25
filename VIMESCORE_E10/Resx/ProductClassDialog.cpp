#include "ProductClassDialog.h"
#include "MainFrm.h"
/*static void _OnIDChangeFnc(CWnd *pWnd){
	((CProductClassDialog *)pWnd)->OnIDChange();
} */
/*static void _OnIDSetfocusFnc(CWnd *pWnd){
	((CProductClassDialog *)pWnd)->OnIDSetfocus();} */ 
/*static void _OnIDKillfocusFnc(CWnd *pWnd){
	((CProductClassDialog *)pWnd)->OnIDKillfocus();
} */
static int _OnIDCheckValueFnc(CWnd *pWnd){
	return ((CProductClassDialog *)pWnd)->OnIDCheckValue();
} 
/*static void _OnATCCodeChangeFnc(CWnd *pWnd){
	((CProductClassDialog *)pWnd)->OnATCCodeChange();
} */
/*static void _OnATCCodeSetfocusFnc(CWnd *pWnd){
	((CProductClassDialog *)pWnd)->OnATCCodeSetfocus();} */ 
/*static void _OnATCCodeKillfocusFnc(CWnd *pWnd){
	((CProductClassDialog *)pWnd)->OnATCCodeKillfocus();
} */
static int _OnATCCodeCheckValueFnc(CWnd *pWnd){
	return ((CProductClassDialog *)pWnd)->OnATCCodeCheckValue();
} 
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CProductClassDialog *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CProductClassDialog *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CProductClassDialog *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CProductClassDialog *)pWnd)->OnNameCheckValue();
} 
/*static void _OnUnitChangeFnc(CWnd *pWnd){
	((CProductClassDialog *)pWnd)->OnUnitChange();
} */
/*static void _OnUnitSetfocusFnc(CWnd *pWnd){
	((CProductClassDialog *)pWnd)->OnUnitSetfocus();} */ 
/*static void _OnUnitKillfocusFnc(CWnd *pWnd){
	((CProductClassDialog *)pWnd)->OnUnitKillfocus();
} */
static int _OnUnitCheckValueFnc(CWnd *pWnd){
	return ((CProductClassDialog *)pWnd)->OnUnitCheckValue();
} 
static void _OnEffectGroupSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CProductClassDialog* )pWnd)->OnEffectGroupSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnEffectGroupSelendokFnc(CWnd *pWnd){
	((CProductClassDialog *)pWnd)->OnEffectGroupSelendok();
}
/*static void _OnEffectGroupSetfocusFnc(CWnd *pWnd){
	((CProductClassDialog *)pWnd)->OnEffectGroupKillfocus();
}*/
/*static void _OnEffectGroupKillfocusFnc(CWnd *pWnd){
	((CProductClassDialog *)pWnd)->OnEffectGroupKillfocus();
}*/
static long _OnEffectGroupLoadDataFnc(CWnd *pWnd){
	return ((CProductClassDialog *)pWnd)->OnEffectGroupLoadData();
}
/*static void _OnEffectGroupAddNewFnc(CWnd *pWnd){
	((CProductClassDialog *)pWnd)->OnEffectGroupAddNew();
}*/
static void _OnClassGroupSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CProductClassDialog* )pWnd)->OnClassGroupSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnClassGroupSelendokFnc(CWnd *pWnd){
	((CProductClassDialog *)pWnd)->OnClassGroupSelendok();
}
/*static void _OnClassGroupSetfocusFnc(CWnd *pWnd){
	((CProductClassDialog *)pWnd)->OnClassGroupKillfocus();
}*/
/*static void _OnClassGroupKillfocusFnc(CWnd *pWnd){
	((CProductClassDialog *)pWnd)->OnClassGroupKillfocus();
}*/
static long _OnClassGroupLoadDataFnc(CWnd *pWnd){
	return ((CProductClassDialog *)pWnd)->OnClassGroupLoadData();
}
/*static void _OnClassGroupAddNewFnc(CWnd *pWnd){
	((CProductClassDialog *)pWnd)->OnClassGroupAddNew();
}*/
/*static void _OnIndexChangeFnc(CWnd *pWnd){
	((CProductClassDialog *)pWnd)->OnIndexChange();
} */
/*static void _OnIndexSetfocusFnc(CWnd *pWnd){
	((CProductClassDialog *)pWnd)->OnIndexSetfocus();} */ 
/*static void _OnIndexKillfocusFnc(CWnd *pWnd){
	((CProductClassDialog *)pWnd)->OnIndexKillfocus();
} */
static int _OnIndexCheckValueFnc(CWnd *pWnd){
	return ((CProductClassDialog *)pWnd)->OnIndexCheckValue();
} 
/*static void _OnIndicationChangeFnc(CWnd *pWnd){
	((CProductClassDialog *)pWnd)->OnIndicationChange();
} */
/*static void _OnIndicationSetfocusFnc(CWnd *pWnd){
	((CProductClassDialog *)pWnd)->OnIndicationSetfocus();} */ 
/*static void _OnIndicationKillfocusFnc(CWnd *pWnd){
	((CProductClassDialog *)pWnd)->OnIndicationKillfocus();
} */
static int _OnIndicationCheckValueFnc(CWnd *pWnd){
	return ((CProductClassDialog *)pWnd)->OnIndicationCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CProductClassDialog *pVw = (CProductClassDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CProductClassDialog *pVw = (CProductClassDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static void _OnActiveSelectFnc(CWnd *pWnd){
	 ((CProductClassDialog*)pWnd)->OnActiveSelect();
}
static void _OnAdviseSelectFnc(CWnd *pWnd){
	 ((CProductClassDialog*)pWnd)->OnAdviseSelect();
}
static int _OnAddProductClassDialogFnc(CWnd *pWnd){
	 return ((CProductClassDialog*)pWnd)->OnAddProductClassDialog();
} 
static int _OnEditProductClassDialogFnc(CWnd *pWnd){
	 return ((CProductClassDialog*)pWnd)->OnEditProductClassDialog();
} 
static int _OnDeleteProductClassDialogFnc(CWnd *pWnd){
	 return ((CProductClassDialog*)pWnd)->OnDeleteProductClassDialog();
} 
static int _OnSaveProductClassDialogFnc(CWnd *pWnd){
	 return ((CProductClassDialog*)pWnd)->OnSaveProductClassDialog();
} 
static int _OnCancelProductClassDialogFnc(CWnd *pWnd){
	 return ((CProductClassDialog*)pWnd)->OnCancelProductClassDialog();
} 
CProductClassDialog::CProductClassDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CProductClassDialog::~CProductClassDialog(){
}
void CProductClassDialog::OnCreateComponents(){
	m_wndGenericInformation.Create(this, _T("Generic Information"), 5, 5, 495, 150);
	m_wndIDLabel.Create(this, _T(""), 0, 0, 25, 25);
	m_wndID.Create(this,0, 0, 25, 25); 
	m_wndATCCodeLabel.Create(this, _T("ATC Code"), 10, 120, 110, 145);
	m_wndATCCode.Create(this,115, 120, 205, 145); 
	m_wndNameLabel.Create(this, _T("Name"), 10, 90, 110, 115);
	m_wndName.Create(this,115, 90, 490, 115); 
	m_wndUnitLabel.Create(this, _T(""), 0, 0, 25, 25);
	m_wndUnit.Create(this,0, 0, 25, 25); 
	m_wndEffectGroupLabel.Create(this, _T("Effect Group"), 10, 30, 110, 55);
	m_wndEffectGroup.Create(this,115, 30, 490, 55); 
	m_wndClassGroupLabel.Create(this, _T("Class Group"), 10, 60, 110, 85);
	m_wndClassGroup.Create(this,115, 60, 395, 85); 
	m_wndIndexLabel.Create(this, _T("Index"), 400, 60, 445, 85);
	m_wndIndex.Create(this,450, 60, 490, 85); 
	m_wndIndicationLabel.Create(this, _T(""), 0, 0, 25, 25);
	m_wndIndication.Create(this,0, 0, 25, 25); 
	m_wndSave.Create(this, _T("&Save"), 309, 155, 399, 180);
	m_wndClose.Create(this, _T("&Close"), 404, 155, 494, 180);
	m_wndActive.Create(this, _T("&Active"), 210, 120, 300, 145);
	m_wndAdvise.Create(this, _T("Advise"), 305, 120, 385, 145);

}
void CProductClassDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndID.SetLimitText(1024);
	m_wndID.SetCheckValue(true);
	m_wndATCCode.SetLimitText(1024);
	m_wndATCCode.SetCheckValue(true);
	m_wndName.SetLimitText(1024);
	m_wndName.SetCheckValue(true);
	m_wndUnit.SetLimitText(1024);
	m_wndUnit.SetCheckValue(true);
	m_wndEffectGroup.SetCheckValue(true);
	m_wndEffectGroup.LimitText(1024);
	m_wndClassGroup.SetCheckValue(true);
	m_wndClassGroup.LimitText(1024);
	m_wndIndex.SetLimitText(1024);
	m_wndIndex.SetCheckValue(true);
	m_wndIndication.SetLimitText(1024);
	m_wndIndication.SetCheckValue(true);





}
void CProductClassDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndID.SetEvent(WE_CHANGE, _OnIDChangeFnc);
	//m_wndID.SetEvent(WE_SETFOCUS, _OnIDSetfocusFnc);
	//m_wndID.SetEvent(WE_KILLFOCUS, _OnIDKillfocusFnc);
	m_wndID.SetEvent(WE_CHECKVALUE, _OnIDCheckValueFnc);
	//m_wndATCCode.SetEvent(WE_CHANGE, _OnATCCodeChangeFnc);
	//m_wndATCCode.SetEvent(WE_SETFOCUS, _OnATCCodeSetfocusFnc);
	//m_wndATCCode.SetEvent(WE_KILLFOCUS, _OnATCCodeKillfocusFnc);
	m_wndATCCode.SetEvent(WE_CHECKVALUE, _OnATCCodeCheckValueFnc);
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	//m_wndUnit.SetEvent(WE_CHANGE, _OnUnitChangeFnc);
	//m_wndUnit.SetEvent(WE_SETFOCUS, _OnUnitSetfocusFnc);
	//m_wndUnit.SetEvent(WE_KILLFOCUS, _OnUnitKillfocusFnc);
	m_wndUnit.SetEvent(WE_CHECKVALUE, _OnUnitCheckValueFnc);
	m_wndEffectGroup.SetEvent(WE_SELENDOK, _OnEffectGroupSelendokFnc);
	//m_wndEffectGroup.SetEvent(WE_SETFOCUS, _OnEffectGroupSetfocusFnc);
	//m_wndEffectGroup.SetEvent(WE_KILLFOCUS, _OnEffectGroupKillfocusFnc);
	m_wndEffectGroup.SetEvent(WE_SELCHANGE, _OnEffectGroupSelectChangeFnc);
	m_wndEffectGroup.SetEvent(WE_LOADDATA, _OnEffectGroupLoadDataFnc);
	//m_wndEffectGroup.SetEvent(WE_ADDNEW, _OnEffectGroupAddNewFnc);
	m_wndClassGroup.SetEvent(WE_SELENDOK, _OnClassGroupSelendokFnc);
	//m_wndClassGroup.SetEvent(WE_SETFOCUS, _OnClassGroupSetfocusFnc);
	//m_wndClassGroup.SetEvent(WE_KILLFOCUS, _OnClassGroupKillfocusFnc);
	m_wndClassGroup.SetEvent(WE_SELCHANGE, _OnClassGroupSelectChangeFnc);
	m_wndClassGroup.SetEvent(WE_LOADDATA, _OnClassGroupLoadDataFnc);
	//m_wndClassGroup.SetEvent(WE_ADDNEW, _OnClassGroupAddNewFnc);
	//m_wndIndex.SetEvent(WE_CHANGE, _OnIndexChangeFnc);
	//m_wndIndex.SetEvent(WE_SETFOCUS, _OnIndexSetfocusFnc);
	//m_wndIndex.SetEvent(WE_KILLFOCUS, _OnIndexKillfocusFnc);
	m_wndIndex.SetEvent(WE_CHECKVALUE, _OnIndexCheckValueFnc);
	//m_wndIndication.SetEvent(WE_CHANGE, _OnIndicationChangeFnc);
	//m_wndIndication.SetEvent(WE_SETFOCUS, _OnIndicationSetfocusFnc);
	//m_wndIndication.SetEvent(WE_KILLFOCUS, _OnIndicationKillfocusFnc);
	m_wndIndication.SetEvent(WE_CHECKVALUE, _OnIndicationCheckValueFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndActive.SetEvent(WE_CLICK, _OnActiveSelectFnc);
	m_wndAdvise.SetEvent(WE_CLICK, _OnAdviseSelectFnc);
	SetMode(VM_NONE);

}
void CProductClassDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndID.GetDlgCtrlID(), m_szID);
	DDX_Text(pDX, m_wndATCCode.GetDlgCtrlID(), m_szATCCode);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_Text(pDX, m_wndUnit.GetDlgCtrlID(), m_szUnit);
	DDX_TextEx(pDX, m_wndEffectGroup.GetDlgCtrlID(), m_szEffectGroupKey);
	DDX_TextEx(pDX, m_wndClassGroup.GetDlgCtrlID(), m_szClassGroupKey);
	DDX_Text(pDX, m_wndIndex.GetDlgCtrlID(), m_nIndex);
	DDX_Text(pDX, m_wndIndication.GetDlgCtrlID(), m_szIndication);
	DDX_Check(pDX, m_wndActive.GetDlgCtrlID(), m_bActive);
	DDX_Check(pDX, m_wndAdvise.GetDlgCtrlID(), m_bAdvise);

}
void CProductClassDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("ID")] =  m_szID;
	m_jData[_T("ATCCode")] =  m_szATCCode;
	m_jData[_T("Name")] =  m_szName;
	m_jData[_T("Unit")] =  m_szUnit;
	m_jData[_T("EffectGroup")] =  m_szEffectGroupKey;
	m_jData[_T("ClassGroup")] =  m_szClassGroupKey;
	m_jData[_T("Index")] =  m_nIndex;
	m_jData[_T("Indication")] =  m_szIndication;
	m_jData[_T("Active")] =  m_bActive;
	m_jData[_T("Advise")] =  m_bAdvise;
	}
	else
	{
			
	m_jData[_T("ID")].GetValue(m_szID);
	m_jData[_T("ATCCode")].GetValue(m_szATCCode);
	m_jData[_T("Name")].GetValue(m_szName);
	m_jData[_T("Unit")].GetValue(m_szUnit);
	m_jData[_T("EffectGroup")].GetValue(m_szEffectGroupKey);
	m_jData[_T("ClassGroup")].GetValue(m_szClassGroupKey);
	m_jData[_T("Index")].GetValue(m_nIndex);
	m_jData[_T("Indication")].GetValue(m_szIndication);
	m_jData[_T("Active")].GetValue(m_bActive);
	m_jData[_T("Advise")].GetValue(m_bAdvise);
	}

}
void CProductClassDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CProductClassDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CProductClassDialog::SetDefaultValues(){

	m_szID.Empty();
	m_szATCCode.Empty();
	m_szName.Empty();
	m_szUnit.Empty();
	m_szEffectGroupKey.Empty();
	m_szClassGroupKey.Empty();
	m_nIndex=0;
	m_szIndication.Empty();
	m_bActive=FALSE;
	m_bAdvise=FALSE;

}
int CProductClassDialog::SetMode(int nMode){
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
/*void CProductClassDialog::OnIDChange(){
	
} */
/*void CProductClassDialog::OnIDSetfocus(){
	
} */
/*void CProductClassDialog::OnIDKillfocus(){
	
} */
int CProductClassDialog::OnIDCheckValue(){
	return 0;
} 
/*void CProductClassDialog::OnATCCodeChange(){
	
} */
/*void CProductClassDialog::OnATCCodeSetfocus(){
	
} */
/*void CProductClassDialog::OnATCCodeKillfocus(){
	
} */
int CProductClassDialog::OnATCCodeCheckValue(){
	return 0;
} 
/*void CProductClassDialog::OnNameChange(){
	
} */
/*void CProductClassDialog::OnNameSetfocus(){
	
} */
/*void CProductClassDialog::OnNameKillfocus(){
	
} */
int CProductClassDialog::OnNameCheckValue(){
	return 0;
} 
/*void CProductClassDialog::OnUnitChange(){
	
} */
/*void CProductClassDialog::OnUnitSetfocus(){
	
} */
/*void CProductClassDialog::OnUnitKillfocus(){
	
} */
int CProductClassDialog::OnUnitCheckValue(){
	return 0;
} 
void CProductClassDialog::OnEffectGroupSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CProductClassDialog::OnEffectGroupSelendok(){
	 
}
/*void CProductClassDialog::OnEffectGroupSetfocus(){
	
}*/
/*void CProductClassDialog::OnEffectGroupKillfocus(){
	
}*/
long CProductClassDialog::OnEffectGroupLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndEffectGroup.IsSearchKey() && !m_szEffectGroupKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szEffectGroupKey
};
	m_wndEffectGroup.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndEffectGroup.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CProductClassDialog::OnEffectGroupAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CProductClassDialog::OnClassGroupSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CProductClassDialog::OnClassGroupSelendok(){
	 
}
/*void CProductClassDialog::OnClassGroupSetfocus(){
	
}*/
/*void CProductClassDialog::OnClassGroupKillfocus(){
	
}*/
long CProductClassDialog::OnClassGroupLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndClassGroup.IsSearchKey() && !m_szClassGroupKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szClassGroupKey
};
	m_wndClassGroup.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndClassGroup.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CProductClassDialog::OnClassGroupAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CProductClassDialog::OnIndexChange(){
	
} */
/*void CProductClassDialog::OnIndexSetfocus(){
	
} */
/*void CProductClassDialog::OnIndexKillfocus(){
	
} */
int CProductClassDialog::OnIndexCheckValue(){
	return 0;
} 
/*void CProductClassDialog::OnIndicationChange(){
	
} */
/*void CProductClassDialog::OnIndicationSetfocus(){
	
} */
/*void CProductClassDialog::OnIndicationKillfocus(){
	
} */
int CProductClassDialog::OnIndicationCheckValue(){
	return 0;
} 
void CProductClassDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CProductClassDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
	void CProductClassDialog::OnActiveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CProductClassDialog::OnAdviseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
int CProductClassDialog::OnAddProductClassDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CProductClassDialog::OnEditProductClassDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CProductClassDialog::OnDeleteProductClassDialog(){
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
 		OnCancelProductClassDialog();
 	}
	return 0;
}
int CProductClassDialog::OnSaveProductClassDialog(){
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
 		//OnProductClassDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CProductClassDialog::OnCancelProductClassDialog(){
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
int CProductClassDialog::OnProductClassDialogListLoadData(){
	return 0;
}
