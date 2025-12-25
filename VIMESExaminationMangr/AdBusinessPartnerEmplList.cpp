#include "AdBusinessPartnerEmplList.h"
#include "MainFrm.h"
#include "AdBusinessPartnerEmplDialog.h"

static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CAdBusinessPartnerEmplList*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CAdBusinessPartnerEmplList*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CAdBusinessPartnerEmplList*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
}

static int _OnListAddItemFnc(CWnd *pWnd){
	 return ((CAdBusinessPartnerEmplList*)pWnd)->OnListAddItem();
}

static int _OnListEditItemFnc(CWnd *pWnd){
	 return ((CAdBusinessPartnerEmplList*)pWnd)->OnListEditItem();
}

static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CAdBusinessPartnerEmplList*)pWnd)->OnListDeleteItem();
} 
static int _OnAddAdBusinessPartnerEmplListFnc(CWnd *pWnd){
	 return ((CAdBusinessPartnerEmplList*)pWnd)->OnAddAdBusinessPartnerEmplList();
} 
static int _OnEditAdBusinessPartnerEmplListFnc(CWnd *pWnd){
	 return ((CAdBusinessPartnerEmplList*)pWnd)->OnEditAdBusinessPartnerEmplList();
} 
static int _OnDeleteAdBusinessPartnerEmplListFnc(CWnd *pWnd){
	 return ((CAdBusinessPartnerEmplList*)pWnd)->OnDeleteAdBusinessPartnerEmplList();
} 
static int _OnSaveAdBusinessPartnerEmplListFnc(CWnd *pWnd){
	 return ((CAdBusinessPartnerEmplList*)pWnd)->OnSaveAdBusinessPartnerEmplList();
} 
static int _OnCancelAdBusinessPartnerEmplListFnc(CWnd *pWnd){
	 return ((CAdBusinessPartnerEmplList*)pWnd)->OnCancelAdBusinessPartnerEmplList();
} 
CAdBusinessPartnerEmplList::CAdBusinessPartnerEmplList(){

	m_nDlgWidth = 905;
	m_nDlgHeight = 325;
	SetDefaultValues();
}
CAdBusinessPartnerEmplList::~CAdBusinessPartnerEmplList(){
}
void CAdBusinessPartnerEmplList::OnCreateComponents(){
	m_wndList.Create(this,4, 5, 881, 299); 

}
void CAdBusinessPartnerEmplList::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	m_wndList.InsertColumn(0, _T(""), CFMT_NUMBER, 0);

	m_wndList.InsertColumn(1, _T("PatientNo"), CFMT_NUMBER, 90);
	m_wndList.InsertColumn(2, _T("Name"), CFMT_TEXT, 200);
	m_wndList.InsertColumn(3, _T("Birth Date"), CFMT_DATE, 100);
	m_wndList.InsertColumn(4, _T("Gender"), CFMT_TEXT, 40);
	m_wndList.InsertColumn(5, _T("Address"), CFMT_TEXT, 200);

}
void CAdBusinessPartnerEmplList::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Add"), _OnListAddItemFnc);
	AddEvent(0, _T("-"));
	m_wndList.AddEvent(2, _T("Edit"), _OnListEditItemFnc);
	AddEvent(0, _T("-"));
	m_wndList.AddEvent(3, _T("Delete"), _OnListDeleteItemFnc);
/*
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddAdBusinessPartnerEmplListFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditAdBusinessPartnerEmplListFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteAdBusinessPartnerEmplListFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveAdBusinessPartnerEmplListFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelAdBusinessPartnerEmplListFnc, 0, 'T', VK_CONTROL);
*/
	SetMode(VM_NONE);

}
void CAdBusinessPartnerEmplList::OnDoDataExchange(CDataExchange* pDX){

}
void CAdBusinessPartnerEmplList::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	}
	else
	{
			
	}

}
void CAdBusinessPartnerEmplList::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CAdBusinessPartnerEmplList::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CAdBusinessPartnerEmplList::SetDefaultValues(){


}
int CAdBusinessPartnerEmplList::SetMode(int nMode){
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
void CAdBusinessPartnerEmplList::OnListDblClick(){
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0)
		return;
	CAdBusinessPartnerEmplDialog dlg(this, VM_VIEW, m_szPartnerId);
	if(dlg.DoModal() == IDOK)
	{
	}
} 
void CAdBusinessPartnerEmplList::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(nNewItem < 0)
		return;
	m_nPartnerEmplId = str2long(m_wndList.GetItemText(nNewItem, 0));
}

int CAdBusinessPartnerEmplList::OnListAddItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	CAdBusinessPartnerEmplDialog dlg(this, VM_ADD, m_szPartnerId);
	if(dlg.DoModal() == IDOK)
	{
	}
	return 0;
}

int CAdBusinessPartnerEmplList::OnListEditItem(){

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0)
		return 0;


	CAdBusinessPartnerEmplDialog dlg(this, VM_EDIT, m_szPartnerId);
	if(dlg.DoModal() == IDOK)
	{

	}
	return 0;
}


int CAdBusinessPartnerEmplList::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
 	CString szSQL;
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0)
		return 0;


 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
 	szSQL.Format(_T("HMS_PARTNER_EMPL_DELETE(%ld)"), m_nPartnerEmplId );
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
 		SetMode(VM_NONE);
 		OnCancelAdBusinessPartnerEmplList();
 	}

	 return 0;
} 
long CAdBusinessPartnerEmplList::OnListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	szSQL.Format(_T(" SELECT hpe_partner_empl_id as partner_empl_id, hp_patientno AS patientno,") \
_T("   hp_surname") \
_T("   ||' '") \
_T("   ||hp_midname") \
_T("   ||' '") \
_T("   ||hp_firstname                                  AS pname,") \
_T("   hp_birthdate                                    AS birthdate,") \
_T("   hp_sex                                          AS gender,") \
_T("   hms_getaddress(nvl(hd_provid, hp_provid), nvl(hd_distid, hp_distid), nvl(hd_villid, hp_villid)) AS address") \
_T(" FROM hms_patient,") \
_T("   hms_partner_empl") \
_T(" WHERE hpe_patientno = hp_patientno") \
_T(" AND hpe_partner_id  ='%s' ORDER BY pname"), m_szPartnerId);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("partner_empl_id")), 
			rs.GetValue(_T("patientno")), 
			rs.GetValue(_T("pname")), 
			rs.GetValue(_T("BirthDate")), 
			rs.GetValue(_T("Gender")), 
			rs.GetValue(_T("Address")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
	return 0;
}
int CAdBusinessPartnerEmplList::OnAddAdBusinessPartnerEmplList(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CAdBusinessPartnerEmplList::OnEditAdBusinessPartnerEmplList(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CAdBusinessPartnerEmplList::OnDeleteAdBusinessPartnerEmplList(){
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
 		OnCancelAdBusinessPartnerEmplList();
 	}
	return 0;
}
int CAdBusinessPartnerEmplList::OnSaveAdBusinessPartnerEmplList(){
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
 		//OnAdBusinessPartnerEmplListListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CAdBusinessPartnerEmplList::OnCancelAdBusinessPartnerEmplList(){
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
int CAdBusinessPartnerEmplList::OnAdBusinessPartnerEmplListListLoadData(){
	return 0;
}
