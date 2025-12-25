#include "AccObjectInfo.h"
#include "MainFrm.h"
static void _OnObjectSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CAccObjectInfo* )pWnd)->OnObjectSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnObjectSelendokFnc(CWnd *pWnd){
	((CAccObjectInfo *)pWnd)->OnObjectSelendok();
}
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CAccObjectInfo *)pWnd)->OnObjectKillfocus();
}*/
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CAccObjectInfo *)pWnd)->OnObjectKillfocus();
}*/
static long _OnObjectLoadDataFnc(CWnd *pWnd){
	return ((CAccObjectInfo *)pWnd)->OnObjectLoadData();
}
/*static void _OnObjectAddNewFnc(CWnd *pWnd){
	((CAccObjectInfo *)pWnd)->OnObjectAddNew();
}*/
/*static void _OnObjectNameChangeFnc(CWnd *pWnd){
	((CAccObjectInfo *)pWnd)->OnObjectNameChange();
} */
/*static void _OnObjectNameSetfocusFnc(CWnd *pWnd){
	((CAccObjectInfo *)pWnd)->OnObjectNameSetfocus();} */ 
/*static void _OnObjectNameKillfocusFnc(CWnd *pWnd){
	((CAccObjectInfo *)pWnd)->OnObjectNameKillfocus();
} */
static int _OnObjectNameCheckValueFnc(CWnd *pWnd){
	return ((CAccObjectInfo *)pWnd)->OnObjectNameCheckValue();
} 
/*static void _OnAddressChangeFnc(CWnd *pWnd){
	((CAccObjectInfo *)pWnd)->OnAddressChange();
} */
/*static void _OnAddressSetfocusFnc(CWnd *pWnd){
	((CAccObjectInfo *)pWnd)->OnAddressSetfocus();} */ 
/*static void _OnAddressKillfocusFnc(CWnd *pWnd){
	((CAccObjectInfo *)pWnd)->OnAddressKillfocus();
} */
static int _OnAddressCheckValueFnc(CWnd *pWnd){
	return ((CAccObjectInfo *)pWnd)->OnAddressCheckValue();
} 
/*static void _OnReasonChangeFnc(CWnd *pWnd){
	((CAccObjectInfo *)pWnd)->OnReasonChange();
} */
/*static void _OnReasonSetfocusFnc(CWnd *pWnd){
	((CAccObjectInfo *)pWnd)->OnReasonSetfocus();} */ 
/*static void _OnReasonKillfocusFnc(CWnd *pWnd){
	((CAccObjectInfo *)pWnd)->OnReasonKillfocus();
} */
static int _OnReasonCheckValueFnc(CWnd *pWnd){
	return ((CAccObjectInfo *)pWnd)->OnReasonCheckValue();
} 
/*static void _OnIncludedChangeFnc(CWnd *pWnd){
	((CAccObjectInfo *)pWnd)->OnIncludedChange();
} */
/*static void _OnIncludedSetfocusFnc(CWnd *pWnd){
	((CAccObjectInfo *)pWnd)->OnIncludedSetfocus();} */ 
/*static void _OnIncludedKillfocusFnc(CWnd *pWnd){
	((CAccObjectInfo *)pWnd)->OnIncludedKillfocus();
} */
static int _OnIncludedCheckValueFnc(CWnd *pWnd){
	return ((CAccObjectInfo *)pWnd)->OnIncludedCheckValue();
} 
static int _OnAddAccObjectInfoFnc(CWnd *pWnd){
	 return ((CAccObjectInfo*)pWnd)->OnAddAccObjectInfo();
} 
static int _OnEditAccObjectInfoFnc(CWnd *pWnd){
	 return ((CAccObjectInfo*)pWnd)->OnEditAccObjectInfo();
} 
static int _OnDeleteAccObjectInfoFnc(CWnd *pWnd){
	 return ((CAccObjectInfo*)pWnd)->OnDeleteAccObjectInfo();
} 
static int _OnSaveAccObjectInfoFnc(CWnd *pWnd){
	 return ((CAccObjectInfo*)pWnd)->OnSaveAccObjectInfo();
} 
static int _OnCancelAccObjectInfoFnc(CWnd *pWnd){
	 return ((CAccObjectInfo*)pWnd)->OnCancelAccObjectInfo();
} 
CAccObjectInfo::CAccObjectInfo(){

	m_nDlgWidth = 585;
	m_nDlgHeight = 160;
	SetDefaultValues();
}
CAccObjectInfo::~CAccObjectInfo(){
}
void CAccObjectInfo::OnCreateComponents(){
	m_wndGeneralInformation.Create(this, _T("General Information"), 5, 5, 575, 150);
	m_wndObjectLabel.Create(this, _T("Object"), 10, 30, 110, 55);
	m_wndObject.Create(this,115, 30, 235, 55); 
	m_wndObjectName.Create(this,240, 30, 570, 55); 
	m_wndAddressLabel.Create(this, _T("Address"), 10, 60, 110, 85);
	m_wndAddress.Create(this,115, 60, 570, 85); 
	m_wndReasonLabel.Create(this, _T("Reason"), 10, 89, 110, 114);
	m_wndReason.Create(this,115, 89, 570, 114); 
	m_wndIncludedLabel.Create(this, _T("Included"), 10, 119, 110, 144);
	m_wndIncluded.Create(this,115, 119, 570, 144); 

}
void CAccObjectInfo::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndObject.SetCheckValue(true);
	m_wndObject.LimitText(1024);
	m_wndObjectName.SetLimitText(35);
	m_wndObjectName.SetCheckValue(true);
	m_wndAddress.SetLimitText(1024);
	m_wndAddress.SetCheckValue(true);
	m_wndReason.SetLimitText(1024);
	m_wndReason.SetCheckValue(true);
	m_wndIncluded.SetLimitText(1024);
	m_wndIncluded.SetCheckValue(true);



}
void CAccObjectInfo::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndObject.SetEvent(WE_SELENDOK, _OnObjectSelendokFnc);
	//m_wndObject.SetEvent(WE_SETFOCUS, _OnObjectSetfocusFnc);
	//m_wndObject.SetEvent(WE_KILLFOCUS, _OnObjectKillfocusFnc);
	m_wndObject.SetEvent(WE_SELCHANGE, _OnObjectSelectChangeFnc);
	m_wndObject.SetEvent(WE_LOADDATA, _OnObjectLoadDataFnc);
	//m_wndObject.SetEvent(WE_ADDNEW, _OnObjectAddNewFnc);
	//m_wndObjectName.SetEvent(WE_CHANGE, _OnObjectNameChangeFnc);
	//m_wndObjectName.SetEvent(WE_SETFOCUS, _OnObjectNameSetfocusFnc);
	//m_wndObjectName.SetEvent(WE_KILLFOCUS, _OnObjectNameKillfocusFnc);
	m_wndObjectName.SetEvent(WE_CHECKVALUE, _OnObjectNameCheckValueFnc);
	//m_wndAddress.SetEvent(WE_CHANGE, _OnAddressChangeFnc);
	//m_wndAddress.SetEvent(WE_SETFOCUS, _OnAddressSetfocusFnc);
	//m_wndAddress.SetEvent(WE_KILLFOCUS, _OnAddressKillfocusFnc);
	m_wndAddress.SetEvent(WE_CHECKVALUE, _OnAddressCheckValueFnc);
	//m_wndReason.SetEvent(WE_CHANGE, _OnReasonChangeFnc);
	//m_wndReason.SetEvent(WE_SETFOCUS, _OnReasonSetfocusFnc);
	//m_wndReason.SetEvent(WE_KILLFOCUS, _OnReasonKillfocusFnc);
	m_wndReason.SetEvent(WE_CHECKVALUE, _OnReasonCheckValueFnc);
	//m_wndIncluded.SetEvent(WE_CHANGE, _OnIncludedChangeFnc);
	//m_wndIncluded.SetEvent(WE_SETFOCUS, _OnIncludedSetfocusFnc);
	//m_wndIncluded.SetEvent(WE_KILLFOCUS, _OnIncludedKillfocusFnc);
	m_wndIncluded.SetEvent(WE_CHECKVALUE, _OnIncludedCheckValueFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddAccObjectInfoFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditAccObjectInfoFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteAccObjectInfoFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveAccObjectInfoFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelAccObjectInfoFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CAccObjectInfo::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndObject.GetDlgCtrlID(), m_szObjectKey);
	DDX_Text(pDX, m_wndObjectName.GetDlgCtrlID(), m_szObjectName);
	DDX_Text(pDX, m_wndAddress.GetDlgCtrlID(), m_szAddress);
	DDX_Text(pDX, m_wndReason.GetDlgCtrlID(), m_szReason);
	DDX_Text(pDX, m_wndIncluded.GetDlgCtrlID(), m_szIncluded);

}
void CAccObjectInfo::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CAccObjectInfo::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CAccObjectInfo::SetDefaultValues(){

	m_szObjectKey.Empty();
	m_szObjectName.Empty();
	m_szAddress.Empty();
	m_szReason.Empty();
	m_szIncluded.Empty();

}
int CAccObjectInfo::SetMode(int nMode){
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
void CAccObjectInfo::OnObjectSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CAccObjectInfo::OnObjectSelendok(){
	 
}
/*void CAccObjectInfo::OnObjectSetfocus(){
	
}*/
/*void CAccObjectInfo::OnObjectKillfocus(){
	
}*/
long CAccObjectInfo::OnObjectLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndObject.IsSearchKey() && !m_szObjectKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szObjectKey
};
	m_wndObject.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndObject.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CAccObjectInfo::OnObjectAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CAccObjectInfo::OnObjectNameChange(){
	
} */
/*void CAccObjectInfo::OnObjectNameSetfocus(){
	
} */
/*void CAccObjectInfo::OnObjectNameKillfocus(){
	
} */
int CAccObjectInfo::OnObjectNameCheckValue(){
	return 0;
} 
/*void CAccObjectInfo::OnAddressChange(){
	
} */
/*void CAccObjectInfo::OnAddressSetfocus(){
	
} */
/*void CAccObjectInfo::OnAddressKillfocus(){
	
} */
int CAccObjectInfo::OnAddressCheckValue(){
	return 0;
} 
/*void CAccObjectInfo::OnReasonChange(){
	
} */
/*void CAccObjectInfo::OnReasonSetfocus(){
	
} */
/*void CAccObjectInfo::OnReasonKillfocus(){
	
} */
int CAccObjectInfo::OnReasonCheckValue(){
	return 0;
} 
/*void CAccObjectInfo::OnIncludedChange(){
	
} */
/*void CAccObjectInfo::OnIncludedSetfocus(){
	
} */
/*void CAccObjectInfo::OnIncludedKillfocus(){
	
} */
int CAccObjectInfo::OnIncludedCheckValue(){
	return 0;
} 
int CAccObjectInfo::OnAddAccObjectInfo(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CAccObjectInfo::OnEditAccObjectInfo(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CAccObjectInfo::OnDeleteAccObjectInfo(){
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
 		OnCancelAccObjectInfo();
 	}
	return 0;
}
int CAccObjectInfo::OnSaveAccObjectInfo(){
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
 		//OnAccObjectInfoListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CAccObjectInfo::OnCancelAccObjectInfo(){
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
int CAccObjectInfo::OnAccObjectInfoListLoadData(){
	return 0;
}
