#include "HMSMedicalCabinet.h"
//#include "stdafx.h"
#include "HMSMainFrame.h"
static void _OnTabControlSelectChangeFnc(CWnd *pWnd, int nOld, int nNew){
	((CHMSMedicalCabinet*)pWnd)->OnTabControlSelectChange(nOld, nNew);
} 
static int _OnAddHMSMedicalCabinetFnc(CWnd *pWnd){
	 return ((CHMSMedicalCabinet*)pWnd)->OnAddHMSMedicalCabinet();
} 
static int _OnEditHMSMedicalCabinetFnc(CWnd *pWnd){
	 return ((CHMSMedicalCabinet*)pWnd)->OnEditHMSMedicalCabinet();
} 
static int _OnDeleteHMSMedicalCabinetFnc(CWnd *pWnd){
	 return ((CHMSMedicalCabinet*)pWnd)->OnDeleteHMSMedicalCabinet();
} 
static int _OnSaveHMSMedicalCabinetFnc(CWnd *pWnd){
	 return ((CHMSMedicalCabinet*)pWnd)->OnSaveHMSMedicalCabinet();
} 
static int _OnCancelHMSMedicalCabinetFnc(CWnd *pWnd){
	 return ((CHMSMedicalCabinet*)pWnd)->OnCancelHMSMedicalCabinet();
} 
CHMSMedicalCabinet::CHMSMedicalCabinet(CWnd *pParent):
	CGuiDialog(pParent)
{

	m_nDlgWidth = 800;
	m_nDlgHeight = 620;
	SetDefaultValues();
}
CHMSMedicalCabinet::~CHMSMedicalCabinet(){
}
void CHMSMedicalCabinet::OnCreateComponents(){
	m_wndTabControl.Create(this,0, 0, 800, 620); 
	m_wndDrugList.Create(this);
	m_wndMedicalCabinetOrder.Create(this);
	//m_wndReturnOrder.Create(this);
	
}
void CHMSMedicalCabinet::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndTabControl.Add(_T("Medical Cabinet"), &m_wndDrugList);
	m_wndTabControl.Add(_T("Supplement Order"), &m_wndMedicalCabinetOrder);
	//m_wndTabControl.Add(_T("Return Order"), &m_wndReturnOrder);

	m_wndTabControl.SetCurSel(0);
	m_wndMedicalCabinetOrder.m_szDeptID = pMF->m_szDept;
	m_wndMedicalCabinetOrder.m_szCurrentOrderType = _T("T");
	m_wndMedicalCabinetOrder.m_szType = _T("C");
	m_wndMedicalCabinetOrder.m_wndInputEntry.OnInitDialog();
/*
	m_wndReturnOrder.m_szDeptID = pMF->m_szDept;
	m_wndReturnOrder.m_szCurrentOrderType = _T("T");
	m_wndReturnOrder.m_szType = _T("R");
	m_wndReturnOrder.m_wndInputEntry.OnInitDialog();
*/

}
void CHMSMedicalCabinet::OnSetWindowEvents(){
	m_wndTabControl.SetEvent(WE_SELCHANGE, _OnTabControlSelectChangeFnc);
}
void CHMSMedicalCabinet::OnDoDataExchange(CDataExchange* pDX){

}
void CHMSMedicalCabinet::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSMedicalCabinet::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CHMSMedicalCabinet::SetDefaultValues(){


}
int CHMSMedicalCabinet::SetMode(int nMode){ 
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
 			EnableButtons(TRUE, 0, 6, -1); 
 			SetDefaultValues(); 
 			break; 
 		}; 
 		UpdateData(FALSE); 
 		return nOldMode; 
 	} 
void CHMSMedicalCabinet::OnTabControlSelectChange(int nOld, int nNew){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CHMSMedicalCabinet::OnAddHMSMedicalCabinet(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
return 0; 
 
} 
int CHMSMedicalCabinet::OnEditHMSMedicalCabinet(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
return 0;  
 
} 
int CHMSMedicalCabinet::OnDeleteHMSMedicalCabinet(){
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
 		OnCancelHMSMedicalCabinet(); 
 	}
return 0;
 } 
int CHMSMedicalCabinet::OnSaveHMSMedicalCabinet(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		//7szSQL = m_tblTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE")); 
 		//szSQL = m_tblTbl.GetUpdateSQL(_T("createdby,createddate")); 
 		szSQL += szWhere; 
 	} 
 //_fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		//OnHMSMedicalCabinetListLoadData(); 
 		SetMode(VM_VIEW); 
 		 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSMedicalCabinet::OnCancelHMSMedicalCabinet(){
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
int CHMSMedicalCabinet::OnHMSMedicalCabinetListLoadData(){
	return 0;
}
