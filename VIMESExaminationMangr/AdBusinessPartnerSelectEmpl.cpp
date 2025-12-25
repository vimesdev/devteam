#include "AdBusinessPartnerSelectEmpl.h"
#include "MainFrm.h"
#include "AdBusinessPartnerContractList.h"
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CAdBusinessPartnerSelectEmpl*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CAdBusinessPartnerSelectEmpl*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CAdBusinessPartnerSelectEmpl*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CAdBusinessPartnerSelectEmpl*)pWnd)->OnListDeleteItem();
} 
static void _OnApplySelectFnc(CWnd *pWnd){
	CAdBusinessPartnerSelectEmpl *pVw = (CAdBusinessPartnerSelectEmpl *)pWnd;
	pVw->OnApplySelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CAdBusinessPartnerSelectEmpl *pVw = (CAdBusinessPartnerSelectEmpl *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnCheckAllFnc(CWnd *pWnd){
	return ((CAdBusinessPartnerSelectEmpl*)pWnd)->OnCheckAll();
}
static int _OnUncheckAllFnc(CWnd *pWnd){
	return ((CAdBusinessPartnerSelectEmpl*)pWnd)->OnUncheckAll();
}
static int _OnAddAdBusinessPartnerSelectEmplFnc(CWnd *pWnd){
	 return ((CAdBusinessPartnerSelectEmpl*)pWnd)->OnAddAdBusinessPartnerSelectEmpl();
} 
static int _OnEditAdBusinessPartnerSelectEmplFnc(CWnd *pWnd){
	 return ((CAdBusinessPartnerSelectEmpl*)pWnd)->OnEditAdBusinessPartnerSelectEmpl();
} 
static int _OnDeleteAdBusinessPartnerSelectEmplFnc(CWnd *pWnd){
	 return ((CAdBusinessPartnerSelectEmpl*)pWnd)->OnDeleteAdBusinessPartnerSelectEmpl();
} 
static int _OnSaveAdBusinessPartnerSelectEmplFnc(CWnd *pWnd){
	 return ((CAdBusinessPartnerSelectEmpl*)pWnd)->OnSaveAdBusinessPartnerSelectEmpl();
} 
static int _OnCancelAdBusinessPartnerSelectEmplFnc(CWnd *pWnd){
	 return ((CAdBusinessPartnerSelectEmpl*)pWnd)->OnCancelAdBusinessPartnerSelectEmpl();
} 
CAdBusinessPartnerSelectEmpl::CAdBusinessPartnerSelectEmpl(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CAdBusinessPartnerSelectEmpl::~CAdBusinessPartnerSelectEmpl(){
}
void CAdBusinessPartnerSelectEmpl::OnCreateComponents(){
	m_wndEmployeeList.Create(this, _T("Employee List"), 5, 5, 485, 505);
	m_wndList.Create(this,10, 30, 480, 500); 
	m_wndApply.Create(this, _T("Apply"), 320, 510, 400, 535);
	m_wndClose.Create(this, _T("Close"), 405, 510, 485, 535);

}
void CAdBusinessPartnerSelectEmpl::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndList.SetCheckBox(TRUE);
	m_wndList.InsertColumn(0, _T("PatientNo"), CFMT_NUMBER, 120);
	m_wndList.InsertColumn(1, _T("Name"), CFMT_TEXT, 300);

	m_tblSelectEmpl.SetTableName(_T("hms_contract_line"));
	m_tblSelectEmpl.AddField(_T("hcl_createdby"), dfText, 20);
	m_tblSelectEmpl.AddField(_T("hcl_createddate"), dfDateTime);
	m_tblSelectEmpl.AddField(_T("hcl_updatedby"), dfText, 20);
	m_tblSelectEmpl.AddField(_T("hcl_updateddate"), dfDateTime);
	m_tblSelectEmpl.AddField(_T("hcl_contract_id"), dfLong);
	m_tblSelectEmpl.AddField(_T("hcl_patientno"), dfLong);
	m_tblSelectEmpl.AddField(_T("hcl_description"), dfText, 254);


}
void CAdBusinessPartnerSelectEmpl::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	
	m_wndList.AddEvent(1, _T("Check All"), _OnCheckAllFnc);
	m_wndList.AddEvent(2, _T("UnCheck All"), _OnUncheckAllFnc);

	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);

	OnListLoadData();
	//SetMode(VM_NONE);
	OnCheckAll();

}
void CAdBusinessPartnerSelectEmpl::OnDoDataExchange(CDataExchange* pDX){

}
void CAdBusinessPartnerSelectEmpl::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	}
	else
	{
			
	}

}
void CAdBusinessPartnerSelectEmpl::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CAdBusinessPartnerSelectEmpl::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	m_tblSelectEmpl.SetValue(_T("hcl_createdby"), pMF->GetCurrentUser());
	m_tblSelectEmpl.SetValue(_T("hcl_createddate"), pMF->GetSysDateTime());
	m_tblSelectEmpl.SetValue(_T("hcl_updatedby"), pMF->GetCurrentUser());
	m_tblSelectEmpl.SetValue(_T("hcl_updateddate"), pMF->GetSysDateTime());
	m_tblSelectEmpl.SetValue(_T("hcl_contract_id"), m_szContractID);
	m_tblSelectEmpl.SetValue(_T("hcl_patientno"), m_nPatientNo);
	//m_tblSelectEmpl.SetValue(_T("hcl_description"), dfText, 254);
}
void CAdBusinessPartnerSelectEmpl::SetDefaultValues(){


}
int CAdBusinessPartnerSelectEmpl::SetMode(int nMode){
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
void CAdBusinessPartnerSelectEmpl::OnListDblClick(){
	
} 
void CAdBusinessPartnerSelectEmpl::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CAdBusinessPartnerSelectEmpl::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CAdBusinessPartnerSelectEmpl::OnListLoadData(){
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
				_T(" WHERE hpe_patientno = hp_patientno AND hpe_patientno NOT IN (select hcl_patientno from hms_contract_line where hcl_contract_id = %d)") \
				_T(" AND hpe_partner_id  ='%s' ORDER BY pname"), m_nContractID,m_szPartnerID);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("patientno")),
			rs.GetValue(_T("pname")),NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}
void CAdBusinessPartnerSelectEmpl::OnApplySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveAdBusinessPartnerSelectEmpl();
} 
void CAdBusinessPartnerSelectEmpl::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();
} 
int CAdBusinessPartnerSelectEmpl::OnAddAdBusinessPartnerSelectEmpl(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CAdBusinessPartnerSelectEmpl::OnEditAdBusinessPartnerSelectEmpl(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CAdBusinessPartnerSelectEmpl::OnDeleteAdBusinessPartnerSelectEmpl(){
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
 		OnCancelAdBusinessPartnerSelectEmpl();
 	}
	return 0;
}
int CAdBusinessPartnerSelectEmpl::OnSaveAdBusinessPartnerSelectEmpl(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
	int ret = 0;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
		for (int i=0; i< m_wndList.GetItemCount(); i++){
			if (m_wndList.GetCheck(i))
			{
				m_nPatientNo = ToLong(m_wndList.GetItemText(i, 0));
				szSQL.Format(_T("HMS_DOC_CREATE_HEALTHEXAM('%s',%d,%ld, '%s', %d)"),
					pMF->GetCurrentUser(), m_nContractID,m_nPatientNo, pMF->GetDepartmentID(), 0);
				pMF->ExecDML(szSQL);
				//function insert hms_doc/hms_exam
			}
		}
 	}
	((CAdBusinessPartnerContractList*)m_pParentWnd)->OnPatientListLoadData();
 	SetMode(VM_VIEW);
	CGuiDialog::OnOK();
 	if(ret > 0)
 	{
		
 	}
 	else
 	{
 	}
 	return ret;
}
int CAdBusinessPartnerSelectEmpl::OnCancelAdBusinessPartnerSelectEmpl(){
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
int CAdBusinessPartnerSelectEmpl::OnAdBusinessPartnerSelectEmplListLoadData(){
	return 0;
}
int CAdBusinessPartnerSelectEmpl::OnCheckAll(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	for (int i=0; i< m_wndList.GetItemCount(); i++){
		m_wndList.SetCheck(i, true);
	}
	return 0;	
}

int CAdBusinessPartnerSelectEmpl::OnUncheckAll(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	for (int i=0; i< m_wndList.GetItemCount(); i++){
		m_wndList.SetCheck(i, false);
	}
	return 0;	
}