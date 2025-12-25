#include "AdBusinessPartnerContractList.h"
#include "MainFrm.h"
#include "AdBusinessPartnerContractInfoDlg.h"
#include "AdBusinessPartnerSelectEmpl.h"
#include "AdBusinessPartnerContractTestList.h"

static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CAdBusinessPartnerContractList*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CAdBusinessPartnerContractList*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CAdBusinessPartnerContractList*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CAdBusinessPartnerContractList*)pWnd)->OnListDeleteItem();
} 
static long _OnPatientListLoadDataFnc(CWnd *pWnd){
	return ((CAdBusinessPartnerContractList*)pWnd)->OnPatientListLoadData();
} 
static void _OnPatientListDblClickFnc(CWnd *pWnd){
	((CAdBusinessPartnerContractList*)pWnd)->OnPatientListDblClick();
} 
static void _OnPatientListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CAdBusinessPartnerContractList*)pWnd)->OnPatientListSelectChange(nOldItem, nNewItem);
} 
static int _OnPatientListDeleteItemFnc(CWnd *pWnd){
	 return ((CAdBusinessPartnerContractList*)pWnd)->OnPatientListDeleteItem();
} 
static void _OnCreateContractSelectFnc(CWnd *pWnd){
	CAdBusinessPartnerContractList *pVw = (CAdBusinessPartnerContractList *)pWnd;
	pVw->OnCreateContractSelect();
} 
static void _OnDeleteContractSelectFnc(CWnd *pWnd){
	CAdBusinessPartnerContractList *pVw = (CAdBusinessPartnerContractList *)pWnd;
	pVw->OnDeleteContractSelect();
} 
static void _OnPrintContractSelectFnc(CWnd *pWnd){
	CAdBusinessPartnerContractList *pVw = (CAdBusinessPartnerContractList *)pWnd;
	pVw->OnPrintContractSelect();
} 
static void _OnAddPatientSelectFnc(CWnd *pWnd){
	CAdBusinessPartnerContractList *pVw = (CAdBusinessPartnerContractList *)pWnd;
	pVw->OnAddPatientSelect();
} 
static void _OnDeletePatientSelectFnc(CWnd *pWnd){
	CAdBusinessPartnerContractList *pVw = (CAdBusinessPartnerContractList *)pWnd;
	pVw->OnDeletePatientSelect();
} 
static int _OnAddContractFnc(CWnd *pWnd){
	((CAdBusinessPartnerContractList*)pWnd)->OnAddContract();
	return 0;
} 
static int _OnEditContractFnc(CWnd *pWnd){
	((CAdBusinessPartnerContractList*)pWnd)->OnEditContract();
	return 0;
} 
static int _OnDeleteContractFnc(CWnd *pWnd){
	((CAdBusinessPartnerContractList*)pWnd)->OnDeleteContract();
	return 0;
} 

static int _OnParaclinicPackageFnc(CWnd *pWnd){
	((CAdBusinessPartnerContractList*)pWnd)->OnParaclinicPackage();
	return 0;
}

static int _OnPatientListAddItemFnc(CWnd *pWnd){
	((CAdBusinessPartnerContractList*)pWnd)->OnPatientListAddItem();
	return 0;
} 
static int _OnPatientListEditItemFnc(CWnd *pWnd){
	((CAdBusinessPartnerContractList*)pWnd)->OnPatientListEditItem();
	return 0;
} 
static int _OnContractTestListFnc(CWnd *pWnd){
	((CAdBusinessPartnerContractList*)pWnd)->OnContractTestList();
	return 0;
} 

static int _OnAddAdBusinessPartnerContractListFnc(CWnd *pWnd){
	 return ((CAdBusinessPartnerContractList*)pWnd)->OnAddAdBusinessPartnerContractList();
} 
static int _OnEditAdBusinessPartnerContractListFnc(CWnd *pWnd){
	 return ((CAdBusinessPartnerContractList*)pWnd)->OnEditAdBusinessPartnerContractList();
} 
static int _OnDeleteAdBusinessPartnerContractListFnc(CWnd *pWnd){
	 return ((CAdBusinessPartnerContractList*)pWnd)->OnDeleteAdBusinessPartnerContractList();
} 
static int _OnSaveAdBusinessPartnerContractListFnc(CWnd *pWnd){
	 return ((CAdBusinessPartnerContractList*)pWnd)->OnSaveAdBusinessPartnerContractList();
} 
static int _OnCancelAdBusinessPartnerContractListFnc(CWnd *pWnd){
	 return ((CAdBusinessPartnerContractList*)pWnd)->OnCancelAdBusinessPartnerContractList();
} 
CAdBusinessPartnerContractList::CAdBusinessPartnerContractList(){

	m_nDlgWidth = 905;
	m_nDlgHeight = 325;
	SetDefaultValues();
}
CAdBusinessPartnerContractList::~CAdBusinessPartnerContractList(){
}
void CAdBusinessPartnerContractList::OnCreateComponents(){
	m_wndList.Create(this,5, 5, 450, 285); 
	m_wndPatientList.Create(this,455, 5, 900, 285); 
	m_wndCreateContract.Create(this, _T("&Create Contract"), 7, 290, 127, 315);
	m_wndDeleteContract.Create(this, _T("&Delete Contract"), 132, 290, 252, 315);
	m_wndPrintContract.Create(this, _T("&Print Contract"), 257, 290, 377, 315);
	m_wndAddPatient.Create(this, _T("&Add Patient"), 655, 290, 775, 315);
	m_wndDeletePatient.Create(this, _T("&Delete Patient"), 780, 290, 900, 315);

}
void CAdBusinessPartnerContractList::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();


	m_wndList.InsertColumn(0, _T("Contract No"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(1, _T("Date"), CFMT_DATE, 100);
	m_wndList.InsertColumn(2, _T("Amount"), CFMT_MONEY, 100);
	m_wndList.InsertColumn(3, _T("Description"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(4, _T("ContractID"), CFMT_TEXT, 0);


	m_wndPatientList.InsertColumn(0, _T("Patient No"), CFMT_TEXT, 90);
	m_wndPatientList.InsertColumn(1, _T("Patient Name"), CFMT_TEXT, 200);
	m_wndPatientList.InsertColumn(2, _T("Birth Date"), CFMT_DATE, 90);
	m_wndPatientList.InsertColumn(3, _T("Sex"), CFMT_TEXT, 50);
	m_wndPatientList.InsertColumn(4, _T("LineID"), CFMT_TEXT, 0);

}
void CAdBusinessPartnerContractList::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	//m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndPatientList.SetEvent(WE_SELCHANGE, _OnPatientListSelectChangeFnc);
	m_wndPatientList.SetEvent(WE_LOADDATA, _OnPatientListLoadDataFnc);
	m_wndPatientList.SetEvent(WE_DBLCLICK, _OnPatientListDblClickFnc);
	m_wndPatientList.AddEvent(1, _T("Add"), _OnPatientListAddItemFnc, 0, 0, 0);
	m_wndPatientList.AddEvent(2, _T("Delete"), _OnPatientListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndCreateContract.SetEvent(WE_CLICK, _OnCreateContractSelectFnc);
	m_wndDeleteContract.SetEvent(WE_CLICK, _OnDeleteContractSelectFnc);
	m_wndPrintContract.SetEvent(WE_CLICK, _OnPrintContractSelectFnc);
	m_wndAddPatient.SetEvent(WE_CLICK, _OnAddPatientSelectFnc);
	m_wndDeletePatient.SetEvent(WE_CLICK, _OnDeletePatientSelectFnc);
	
	m_wndList.AddEvent(1, _T("Add"), _OnAddContractFnc,0, 0, 0);
	m_wndList.AddEvent(0, _T("-"));
	m_wndList.AddEvent(2, _T("Edit"), _OnEditContractFnc,0, 0, 0);
	m_wndList.AddEvent(0, _T("-"));
	m_wndList.AddEvent(3, _T("Delete"), _OnDeleteContractFnc);
	m_wndList.AddEvent(0, _T("-"));
	m_wndList.AddEvent(4, _T("Paraclinic package"), _OnParaclinicPackageFnc);
	//m_wndList.AddEvent(0, _T("-"), 0,0,0,0);
	//m_wndList.AddEvent(4, _T("Test List"), _OnContractTestListFnc,0, 0, 0);

	OnListLoadData();

}
void CAdBusinessPartnerContractList::OnDoDataExchange(CDataExchange* pDX){

}
void CAdBusinessPartnerContractList::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	}
	else
	{
			
	}

}
void CAdBusinessPartnerContractList::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CAdBusinessPartnerContractList::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CAdBusinessPartnerContractList::SetDefaultValues(){


}
int CAdBusinessPartnerContractList::SetMode(int nMode){
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
void CAdBusinessPartnerContractList::OnListDblClick(){
	
} 
void CAdBusinessPartnerContractList::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_nContractID = ToInt(m_wndList.GetItemText(nNewItem, 4));
	OnPatientListLoadData();
} 
int CAdBusinessPartnerContractList::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
	szSQL.Format(_T("SELECT count(*) FROM hms_contract_line WHERE hcl_contract_id = '%s'"), m_szContractID);
	int nCount = rs.ExecSQL(szSQL);
	if(nCount > 0)
	{
		MessageBox(_T("Line da co du lieu khong the xoa"), 0, MB_ICONERROR);
		return -1;
	}else
	{
		szSQL.Format(_T("DELETE FROM hms_contract WHERE hc_contract_id = '%s'"), m_szContractID);
		pMF->ExecSQL(szSQL);
		OnListLoadData();
	}
	return nCount;
} 
long CAdBusinessPartnerContractList::OnListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT * FROM hms_contract WHERE hc_partner_id = '%s'"), m_szPartnerID);
	_fmsg(_T("%s"), szSQL);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("hc_contract_no")), 
			rs.GetValue(_T("hc_contract_date")), 
			rs.GetValue(_T("hc_totalamount")), 
			rs.GetValue(_T("hc_description")), 
			rs.GetValue(_T("hc_contract_id")),NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}
void CAdBusinessPartnerContractList::OnPatientListDblClick(){
	
} 
void CAdBusinessPartnerContractList::OnPatientListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_nContractLineID = ToInt(m_wndPatientList.GetItemText(nNewItem, 4));
	m_nPatientNo = ToLong(m_wndPatientList.GetItemText(nNewItem, 0));
} 
int CAdBusinessPartnerContractList::OnPatientListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL;
	CRecord rs(&pMF->m_db);
	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
	szSQL.Format(_T("HMS_DOC_DELETE_HEALTHEXAM('%s', %ld, %ld) "), pMF->GetCurrentUser(), m_nPatientNo, m_nContractLineID);
	int ret = str2int(pMF->ExecDML(szSQL));
	if(ret > 0)
		OnPatientListLoadData();
	 return 0;
} 
long CAdBusinessPartnerContractList::OnPatientListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndPatientList.BeginLoad(); 
	int nCount = 0;
	szSQL.Format(_T(" SELECT hp_patientno AS patientno, hcl_contract_line_id,") \
			_T("   hp_surname") \
			_T("   ||' '") \
			_T("   ||hp_midname") \
			_T("   ||' '") \
			_T("   ||hp_firstname                                  AS pname,") \
			_T("   hp_birthdate                                    AS birthdate,") \
			_T("   hp_sex                                          AS gender,") \
			_T("   hms_getaddress(nvl(hd_provid, hp_provid), nvl(hd_distid, hp_distid), nvl(hd_villid, hp_villid)) AS address") \
			_T(" FROM hms_patient,") \
			_T("   hms_contract_line") \
			_T(" LEFT JOIN hms_contract ON(hc_contract_id=hcl_contract_id)") \
			_T(" WHERE hcl_patientno = hp_patientno") \
			_T(" AND hc_partner_id  ='%s' AND hcl_contract_id = %d ORDER BY pname"), m_szPartnerID, m_nContractID);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPatientList.AddItems(
			rs.GetValue(_T("patientno")), 
			rs.GetValue(_T("pname")), 
			rs.GetValue(_T("birthdate")), 
			rs.GetValue(_T("gender")),
			rs.GetValue(_T("hcl_contract_line_id")), NULL);
		rs.MoveNext();
	}
	m_wndPatientList.EndLoad(); 
	return nCount;
}
void CAdBusinessPartnerContractList::OnCreateContractSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnAddContract();
} 
void CAdBusinessPartnerContractList::OnDeleteContractSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnListDeleteItem();
} 
void CAdBusinessPartnerContractList::OnPrintContractSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}

#include "AdBusinessPartnerParaclinicInfoDialog.h"
void CAdBusinessPartnerContractList::OnParaclinicPackage(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CAdBusinessPartnerParaclinicInfoDialog dlg(this);
	if(dlg.DoModal() == IDOK)
	{
	}
}


void CAdBusinessPartnerContractList::OnAddPatientSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnPatientListAddItem();
} 
void CAdBusinessPartnerContractList::OnDeletePatientSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnPatientListDeleteItem();
} 
int CAdBusinessPartnerContractList::OnAddAdBusinessPartnerContractList(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CAdBusinessPartnerContractList::OnEditAdBusinessPartnerContractList(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CAdBusinessPartnerContractList::OnDeleteAdBusinessPartnerContractList(){
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
 		OnCancelAdBusinessPartnerContractList();
 	}
	return 0;
}
int CAdBusinessPartnerContractList::OnSaveAdBusinessPartnerContractList(){
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
 		//OnAdBusinessPartnerContractListListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CAdBusinessPartnerContractList::OnCancelAdBusinessPartnerContractList(){
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
int CAdBusinessPartnerContractList::OnAdBusinessPartnerContractListListLoadData(){
	return 0;
}

void CAdBusinessPartnerContractList::OnAddContract(){
	if(m_szPartnerID.IsEmpty())
		return;
	CAdBusinessPartnerContractInfoDlg dlg(this);
	dlg.m_szPartnerID = m_szPartnerID;
	dlg.SetMode(VM_ADD);
	dlg.m_pParentWnd = this;
	dlg.DoModal();
}
void CAdBusinessPartnerContractList::OnEditContract(){
	if(m_szPartnerID.IsEmpty())
		return;
	CAdBusinessPartnerContractInfoDlg dlg(this);
	dlg.m_szPartnerID = m_szPartnerID;
	dlg.m_nContractID = m_nContractID;
	dlg.SetMode(VM_EDIT);
	dlg.m_pParentWnd = this;
	dlg.DoModal();
}
void CAdBusinessPartnerContractList::OnDeleteContract(){
	OnDeleteContractSelect();
}

void CAdBusinessPartnerContractList::OnPatientListAddItem(){
	if(m_nContractID < 0 && m_szPartnerID.IsEmpty())
		return;
	CAdBusinessPartnerSelectEmpl dlg(this);
	dlg.m_szPartnerID = m_szPartnerID;
	dlg.m_nContractID = m_nContractID;
	dlg.SetMode(VM_ADD);
	dlg.m_pParentWnd = this;
	dlg.DoModal();
}

void CAdBusinessPartnerContractList::OnPatientListEditItem(){
	CAdBusinessPartnerSelectEmpl dlg(this);
	dlg.m_szPartnerID = m_szPartnerID;
	dlg.m_nContractID = m_nContractID;
	dlg.SetMode(VM_EDIT);
	dlg.m_pParentWnd = this;
	dlg.DoModal();
}

void CAdBusinessPartnerContractList::OnContractTestList(){
	CAdBusinessPartnerContractTestList dlg(this);
	//dlg.m_szPartnerID = m_szPartnerID;
	dlg.m_nContractID = m_nContractID;
	dlg.SetMode(VM_ADD);
	dlg.DoModal();
}