#include "IVFStorageListSetupPopup.h"
#include "MainFrm.h"
static void _OnParentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CIVFStorageListSetupPopup* )pWnd)->OnParentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnParentSelendokFnc(CWnd *pWnd){
	((CIVFStorageListSetupPopup *)pWnd)->OnParentSelendok();
}
/*static void _OnParentSetfocusFnc(CWnd *pWnd){
	((CIVFStorageListSetupPopup *)pWnd)->OnParentKillfocus();
}*/
/*static void _OnParentKillfocusFnc(CWnd *pWnd){
	((CIVFStorageListSetupPopup *)pWnd)->OnParentKillfocus();
}*/
static long _OnParentLoadDataFnc(CWnd *pWnd){
	return ((CIVFStorageListSetupPopup *)pWnd)->OnParentLoadData();
}
/*static void _OnParentAddNewFnc(CWnd *pWnd){
	((CIVFStorageListSetupPopup *)pWnd)->OnParentAddNew();
}*/
/*static void _OnIDChangeFnc(CWnd *pWnd){
	((CIVFStorageListSetupPopup *)pWnd)->OnIDChange();
} */
/*static void _OnIDSetfocusFnc(CWnd *pWnd){
	((CIVFStorageListSetupPopup *)pWnd)->OnIDSetfocus();} */ 
/*static void _OnIDKillfocusFnc(CWnd *pWnd){
	((CIVFStorageListSetupPopup *)pWnd)->OnIDKillfocus();
} */
static int _OnIDCheckValueFnc(CWnd *pWnd){
	return ((CIVFStorageListSetupPopup *)pWnd)->OnIDCheckValue();
} 
/*static void _OnCapacityChangeFnc(CWnd *pWnd){
	((CIVFStorageListSetupPopup *)pWnd)->OnCapacityChange();
} */
/*static void _OnCapacitySetfocusFnc(CWnd *pWnd){
	((CIVFStorageListSetupPopup *)pWnd)->OnCapacitySetfocus();} */ 
/*static void _OnCapacityKillfocusFnc(CWnd *pWnd){
	((CIVFStorageListSetupPopup *)pWnd)->OnCapacityKillfocus();
} */
static int _OnCapacityCheckValueFnc(CWnd *pWnd){
	return ((CIVFStorageListSetupPopup *)pWnd)->OnCapacityCheckValue();
} 
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CIVFStorageListSetupPopup *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CIVFStorageListSetupPopup *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CIVFStorageListSetupPopup *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CIVFStorageListSetupPopup *)pWnd)->OnNameCheckValue();
} 
/*static void _OnDescriptionChangeFnc(CWnd *pWnd){
	((CIVFStorageListSetupPopup *)pWnd)->OnDescriptionChange();
} */
/*static void _OnDescriptionSetfocusFnc(CWnd *pWnd){
	((CIVFStorageListSetupPopup *)pWnd)->OnDescriptionSetfocus();} */ 
/*static void _OnDescriptionKillfocusFnc(CWnd *pWnd){
	((CIVFStorageListSetupPopup *)pWnd)->OnDescriptionKillfocus();
} */
static int _OnDescriptionCheckValueFnc(CWnd *pWnd){
	return ((CIVFStorageListSetupPopup *)pWnd)->OnDescriptionCheckValue();
} 
static void _OnAutoGenerateSubitemSelectFnc(CWnd *pWnd){
	 ((CIVFStorageListSetupPopup*)pWnd)->OnAutoGenerateSubitemSelect();
}
static void _OnCassetteSelectFnc(CWnd *pWnd){
	 ((CIVFStorageListSetupPopup*)pWnd)->OnCassetteSelect();
}
static void _OnSaveSelectFnc(CWnd *pWnd){
	CIVFStorageListSetupPopup *pVw = (CIVFStorageListSetupPopup *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CIVFStorageListSetupPopup *pVw = (CIVFStorageListSetupPopup *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddIVFStorageListSetupPopupFnc(CWnd *pWnd){
	 return ((CIVFStorageListSetupPopup*)pWnd)->OnAddIVFStorageListSetupPopup();
} 
static int _OnEditIVFStorageListSetupPopupFnc(CWnd *pWnd){
	 return ((CIVFStorageListSetupPopup*)pWnd)->OnEditIVFStorageListSetupPopup();
} 
static int _OnDeleteIVFStorageListSetupPopupFnc(CWnd *pWnd){
	 return ((CIVFStorageListSetupPopup*)pWnd)->OnDeleteIVFStorageListSetupPopup();
} 
static int _OnSaveIVFStorageListSetupPopupFnc(CWnd *pWnd){
	 return ((CIVFStorageListSetupPopup*)pWnd)->OnSaveIVFStorageListSetupPopup();
} 
static int _OnCancelIVFStorageListSetupPopupFnc(CWnd *pWnd){
	 return ((CIVFStorageListSetupPopup*)pWnd)->OnCancelIVFStorageListSetupPopup();
} 
CIVFStorageListSetupPopup::CIVFStorageListSetupPopup(CWnd *pParent,int nMode):
	CGuiPopup(pParent){
		CGuiPopup::SetMode(nMode);
	m_nDlgWidth = 355;
	m_nDlgHeight = 190;
	SetDefaultValues();
}
CIVFStorageListSetupPopup::~CIVFStorageListSetupPopup(){
}
void CIVFStorageListSetupPopup::OnCreateComponents(){
	m_wndParent.Create(this,90, 8, 341, 33); 
	m_wndParentLabel.Create(this, _T("Parent"), 5, 9, 85, 34);
	m_wndIDLabel.Create(this, _T("ID"), 6, 39, 86, 64);
	m_wndID.Create(this,91, 39, 171, 64); 
	m_wndCapacityLabel.Create(this, _T("Số lượng chứa"), 176, 39, 256, 64);
	m_wndCapacity.Create(this,261, 39, 341, 64); 
	m_wndNameLabel.Create(this, _T("Name"), 6, 69, 86, 94);
	m_wndName.Create(this,91, 69, 342, 94); 
	m_wndDescriptionLabel.Create(this, _T("Description"), 6, 99, 86, 124);
	m_wndDescription.Create(this,91, 99, 342, 124); 
	m_wndAutoGenerateSubitem.Create(this, _T("Auto generate subitem"), 5, 129, 171, 154);
	m_wndCassette.Create(this, _T("Cassette"), 176, 129, 341, 154);
	m_wndSave.Create(this, _T("&Save"), 176, 159, 256, 184);
	m_wndClose.Create(this, _T("&Close"), 261, 159, 341, 184);

}
void CIVFStorageListSetupPopup::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndParent.SetCheckValue(true);
	m_wndParent.LimitText(35);
	m_wndID.SetLimitText(35);
	//m_wndID.SetCheckValue(true);
	m_wndCapacity.SetLimitText(3);
	m_wndCapacity.SetCheckValue(true);
	m_wndName.SetLimitText(254);
	m_wndName.SetCheckValue(true);
	m_wndDescription.SetLimitText(254);
	m_wndDescription.SetCheckValue(false);

	m_wndID.SetReadOnly(TRUE);

	m_wndParent.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndParent.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndAutoGenerateSubitem.ModifyStyle(WS_TABSTOP, 0);
	m_wndCassette.ModifyStyle(WS_TABSTOP, 0);

}
void CIVFStorageListSetupPopup::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndParent.SetEvent(WE_SELENDOK, _OnParentSelendokFnc);
	//m_wndParent.SetEvent(WE_SETFOCUS, _OnParentSetfocusFnc);
	//m_wndParent.SetEvent(WE_KILLFOCUS, _OnParentKillfocusFnc);
	m_wndParent.SetEvent(WE_SELCHANGE, _OnParentSelectChangeFnc);
	m_wndParent.SetEvent(WE_LOADDATA, _OnParentLoadDataFnc);
	//m_wndParent.SetEvent(WE_ADDNEW, _OnParentAddNewFnc);
	//m_wndID.SetEvent(WE_CHANGE, _OnIDChangeFnc);
	//m_wndID.SetEvent(WE_SETFOCUS, _OnIDSetfocusFnc);
	//m_wndID.SetEvent(WE_KILLFOCUS, _OnIDKillfocusFnc);
	m_wndID.SetEvent(WE_CHECKVALUE, _OnIDCheckValueFnc);
	//m_wndCapacity.SetEvent(WE_CHANGE, _OnCapacityChangeFnc);
	//m_wndCapacity.SetEvent(WE_SETFOCUS, _OnCapacitySetfocusFnc);
	//m_wndCapacity.SetEvent(WE_KILLFOCUS, _OnCapacityKillfocusFnc);
	m_wndCapacity.SetEvent(WE_CHECKVALUE, _OnCapacityCheckValueFnc);
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	//m_wndDescription.SetEvent(WE_CHANGE, _OnDescriptionChangeFnc);
	//m_wndDescription.SetEvent(WE_SETFOCUS, _OnDescriptionSetfocusFnc);
	//m_wndDescription.SetEvent(WE_KILLFOCUS, _OnDescriptionKillfocusFnc);
	m_wndDescription.SetEvent(WE_CHECKVALUE, _OnDescriptionCheckValueFnc);
	m_wndAutoGenerateSubitem.SetEvent(WE_CLICK, _OnAutoGenerateSubitemSelectFnc);
	m_wndCassette.SetEvent(WE_CLICK, _OnCassetteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	int nMode = GetMode();
	if(nMode == VM_VIEW || nMode == VM_EDIT)
		GetDataToScreen();

	SetMode(nMode);

}
void CIVFStorageListSetupPopup::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndParent.GetDlgCtrlID(), m_szParentKey);
	DDX_Text(pDX, m_wndID.GetDlgCtrlID(), m_szID);
	DDX_Text(pDX, m_wndCapacity.GetDlgCtrlID(), m_nCapacity);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_Text(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescription);
	DDX_Check(pDX, m_wndAutoGenerateSubitem.GetDlgCtrlID(), m_bAutoGenerateSubitem);
	DDX_Check(pDX, m_wndCassette.GetDlgCtrlID(), m_bCassette);

}
void CIVFStorageListSetupPopup::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Parent")] =  m_szParentKey;
	m_jData[_T("ID")] =  m_szID;
	m_jData[_T("Capacity")] =  m_nCapacity;
	m_jData[_T("Name")] =  m_szName;
	m_jData[_T("Description")] =  m_szDescription;
	m_jData[_T("AutoGenerateSubitem")] =  m_bAutoGenerateSubitem;
	m_jData[_T("Cassette")] =  m_bCassette;
	}
	else
	{
			
	m_jData[_T("Parent")].GetValue(m_szParentKey);
	m_jData[_T("ID")].GetValue(m_szID);
	m_jData[_T("Capacity")].GetValue(m_nCapacity);
	m_jData[_T("Name")].GetValue(m_szName);
	m_jData[_T("Description")].GetValue(m_szDescription);
	m_jData[_T("AutoGenerateSubitem")].GetValue(m_bAutoGenerateSubitem);
	m_jData[_T("Cassette")].GetValue(m_bCassette);
	}

}
void CIVFStorageListSetupPopup::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM ivf_storage_list WHERE isl_id=%ld "), str2long(m_szID));
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("isl_parent_id"), m_szParentKey);
		rs.GetValue(_T("isl_name"), m_szName);
		rs.GetValue(_T("isl_description"), m_szDescription);
		rs.GetValue(_T("isl_max_capacity"), m_nCapacity);
	}

}
void CIVFStorageListSetupPopup::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CIVFStorageListSetupPopup::SetDefaultValues(){

	m_szParentKey.Empty();
	m_szID.Empty();
	m_nCapacity=0;
	m_szName.Empty();
	m_szDescription.Empty();
	m_bAutoGenerateSubitem=FALSE;
	m_bCassette=FALSE;

}
int CIVFStorageListSetupPopup::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiPopup::SetMode(nMode);
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, -1);
 			SetDefaultValues();
			m_wndParent.SetFocus();
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, -1);
			m_wndParent.EnableWindow(FALSE);
			m_wndName.SetFocus();
 			break;
 		case VM_VIEW: 
 			EnableControls(FALSE);
 			EnableButtons(FALSE, 0, -1);
 			break;
 		case VM_NONE: 
 			EnableControls(FALSE);
 			EnableButtons(TRUE, 0, 6, -1);
 			SetDefaultValues();
 			break;
 		};
		m_wndClose.EnableWindow(TRUE);
 		UpdateData(FALSE);
 		return nOldMode;
}
void CIVFStorageListSetupPopup::OnParentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFStorageListSetupPopup::OnParentSelendok(){
	 if(GetMode() == VM_ADD)
	 {
		UpdateData(TRUE);
		m_szID = GetMaxID();
		UpdateData(FALSE);
	 }
}
/*void CIVFStorageListSetupPopup::OnParentSetfocus(){
	
}*/
/*void CIVFStorageListSetupPopup::OnParentKillfocus(){
	
}*/
long CIVFStorageListSetupPopup::OnParentLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndParent.IsSearchKey() && !m_szParentKey.IsEmpty()){
		szWhere.Format(_T(" and isl_id='%s' "), m_szParentKey);
	};
	m_wndParent.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T(" SELECT") \
_T("     isl_id as id,") \
_T("     isl_name as name") \
_T(" FROM") \
_T("     ivf_storage_list") \
_T(" WHERE") \
_T("     isl_isactive = 'Y'") \
_T(" START WITH") \
_T("     isl_parent_id = 0") \
_T(" CONNECT BY") \
_T("     PRIOR isl_id = isl_parent_id"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndParent.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

	return 0;
}
/*void CIVFStorageListSetupPopup::OnParentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CIVFStorageListSetupPopup::OnIDChange(){
	
} */
/*void CIVFStorageListSetupPopup::OnIDSetfocus(){
	
} */
/*void CIVFStorageListSetupPopup::OnIDKillfocus(){
	
} */
int CIVFStorageListSetupPopup::OnIDCheckValue(){
	return 0;
} 
/*void CIVFStorageListSetupPopup::OnCapacityChange(){
	
} */
/*void CIVFStorageListSetupPopup::OnCapacitySetfocus(){
	
} */
/*void CIVFStorageListSetupPopup::OnCapacityKillfocus(){
	
} */
int CIVFStorageListSetupPopup::OnCapacityCheckValue(){
	return 0;
} 
/*void CIVFStorageListSetupPopup::OnNameChange(){
	
} */
/*void CIVFStorageListSetupPopup::OnNameSetfocus(){
	
} */
/*void CIVFStorageListSetupPopup::OnNameKillfocus(){
	
} */
int CIVFStorageListSetupPopup::OnNameCheckValue(){
	return 0;
} 
/*void CIVFStorageListSetupPopup::OnDescriptionChange(){
	
} */
/*void CIVFStorageListSetupPopup::OnDescriptionSetfocus(){
	
} */
/*void CIVFStorageListSetupPopup::OnDescriptionKillfocus(){
	
} */
int CIVFStorageListSetupPopup::OnDescriptionCheckValue(){
	return 0;
} 
	void CIVFStorageListSetupPopup::OnAutoGenerateSubitemSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CIVFStorageListSetupPopup::OnCassetteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void CIVFStorageListSetupPopup::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveIVFStorageListSetupPopup();
} 
void CIVFStorageListSetupPopup::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CIVFStorageListSetupPopup::OnAddIVFStorageListSetupPopup(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CIVFStorageListSetupPopup::OnEditIVFStorageListSetupPopup(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CIVFStorageListSetupPopup::OnDeleteIVFStorageListSetupPopup(){
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
 		OnCancelIVFStorageListSetupPopup();
 	}
	return 0;
}
int CIVFStorageListSetupPopup::OnSaveIVFStorageListSetupPopup(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
	CDbfMap tbl;
	tbl.AddField(_T("mode"), dfInteger);
	tbl.AddField(_T("userid"), dfText, 15);
	tbl.AddField(_T("parent_id"), dfLong);
	tbl.AddField(_T("id"), dfLong);
	tbl.AddField(_T("name"), dfText, 254);
	tbl.AddField(_T("description"), dfText, 254);
	tbl.AddField(_T("capacity"), dfInteger);
	tbl.AddField(_T("auto_generation"), dfText, 1);
	tbl.AddField(_T("iscassette"), dfText, 1);
	

	tbl.SetValue(_T("mode"), GetMode());
	tbl.SetValue(_T("userid"), pMF->GetCurrentUser());
	tbl.SetValue(_T("parent_id"), m_szParentKey);
	tbl.SetValue(_T("id"), m_szID);
	tbl.SetValue(_T("name"), m_szName);
	tbl.SetValue(_T("description"), m_szDescription);
	tbl.SetValue(_T("capacity"), m_nCapacity);
	tbl.SetValue(_T("auto_generation"), m_bAutoGenerateSubitem?_T("Y"):_T("N"));
	tbl.SetValue(_T("iscassette"), m_bCassette?_T("Y"):_T("N"));
	
	
	szSQL.Format(_T("IVF_STORAGE_LIST_CREATE(%s) "), tbl.FormatSQL());
 _tprintf(_T("%s"), szSQL);
 	int ret = str2int(pMF->ExecDML(szSQL));
 	if(ret > 0)
 	{
 		//OnIVFStorageListSetupPopupListLoadData();
 		SetMode(VM_ADD);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CIVFStorageListSetupPopup::OnCancelIVFStorageListSetupPopup(){
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
int CIVFStorageListSetupPopup::OnIVFStorageListSetupPopupListLoadData(){
	return 0;
}

CString CIVFStorageListSetupPopup::GetMaxID()
{
	if(GetMode() != VM_ADD)
		return m_szID;
	CString szSQL;
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
	szSQL.Format(_T("IVF_STORAGE_LIST_GETMAXID(%ld) "), str2long(m_szParentKey));
	long nID = str2long(pMF->ExecDML(szSQL));
	CString szMaxID;
	if(nID > str2long(m_szParentKey))
		szMaxID.Format(_T("%ld"), nID);
	else
		szMaxID.Format(_T("%ld1"), str2long(m_szParentKey));

_tprintf(_T("\r\n%s"), szSQL);
	return szMaxID;
}