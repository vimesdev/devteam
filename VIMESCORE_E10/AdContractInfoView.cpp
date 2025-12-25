#include "AdContractInfoView.h"
#include "MainFrame_E10.h"
static void _OnTabSelectChangeFnc(CWnd *pWnd, int nOld, int nNew){
	((CAdContractInfoView*)pWnd)->OnTabSelectChange(nOld, nNew);
} 
static int _OnAddAdContractInfoViewFnc(CWnd *pWnd){
	 return ((CAdContractInfoView*)pWnd)->OnAddAdContractInfoView();
} 
static int _OnEditAdContractInfoViewFnc(CWnd *pWnd){
	 return ((CAdContractInfoView*)pWnd)->OnEditAdContractInfoView();
} 
static int _OnDeleteAdContractInfoViewFnc(CWnd *pWnd){
	 return ((CAdContractInfoView*)pWnd)->OnDeleteAdContractInfoView();
} 
static int _OnSaveAdContractInfoViewFnc(CWnd *pWnd){
	 return ((CAdContractInfoView*)pWnd)->OnSaveAdContractInfoView();
} 
static int _OnCancelAdContractInfoViewFnc(CWnd *pWnd){
	 return ((CAdContractInfoView*)pWnd)->OnCancelAdContractInfoView();
}

static int _OnContractsLoadDataFnc(CWnd *pWnd){
	 return ((CAdContractInfoView*)pWnd)->OnContractsListLoadData();
}

static int _OnInvoicesLoadDataFnc(CWnd *pWnd){
	 return ((CAdContractInfoView*)pWnd)->OnInvoicesListLoadData();
}

CAdContractInfoView::CAdContractInfoView(){

	m_nDlgWidth = 805;
	m_nDlgHeight = 205;
	SetDefaultValues();
}
CAdContractInfoView::~CAdContractInfoView(){
}
void CAdContractInfoView::OnCreateComponents(){
	m_wndTab.Create(this,0, 0, 800, 200); 
	m_wndContracts.Create(this, 0,0,0,0);
	m_wndInvoices.Create(this, 0,0,0,0);
	m_wndTab.Add(_T("Contracts"), &m_wndContracts);
	m_wndTab.Add(_T("Invoices"), &m_wndInvoices);


}
void CAdContractInfoView::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

	m_wndContracts.InsertColumn(0, _T(""), CFMT_NUMBER, 0);
	m_wndContracts.InsertColumn(1, _T("Số hợp đồng"), CFMT_TEXT, 90);
	m_wndContracts.InsertColumn(2, _T("Ngày ký"), CFMT_DATE, 90);
	m_wndContracts.InsertColumn(3, _T("Giá trị hợp đồng"), CFMT_NUMBER, 90);
	m_wndContracts.InsertColumn(4, _T("Thời hạn thực hiện"), CFMT_DATE, 90);
	m_wndContracts.InsertColumn(5, _T("Diễn giải"), CFMT_TEXT, 200);


	m_wndInvoices.InsertColumn(0, _T("Invoice No"), CFMT_NUMBER, 90);
	m_wndInvoices.InsertColumn(1, _T("Ngày HĐ"), CFMT_DATE, 90);
	m_wndInvoices.InsertColumn(2, _T("Amount"), CFMT_NUMBER, 100);	
	m_wndInvoices.InsertColumn(3, _T("Description"), CFMT_TEXT, 200);
	m_wndInvoices.InsertColumn(4, _T("Số TK"), CFMT_TEXT, 120);
	m_wndInvoices.InsertColumn(5, _T("Ngân hàng"), CFMT_TEXT, 150);
	

}
void CAdContractInfoView::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndTab.SetEvent(WE_SELCHANGE, _OnTabSelectChangeFnc);
	/*
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddAdContractInfoViewFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditAdContractInfoViewFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteAdContractInfoViewFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveAdContractInfoViewFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelAdContractInfoViewFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);
	*/
	OnContractsListLoadData();
	OnInvoicesListLoadData();

}
void CAdContractInfoView::OnDoDataExchange(CDataExchange* pDX){

}
void CAdContractInfoView::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	}
	else
	{
			
	}

}
void CAdContractInfoView::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CAdContractInfoView::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CAdContractInfoView::SetDefaultValues(){
	m_nContractPackageId = 0;
	m_szParnerId.Empty();

}
int CAdContractInfoView::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
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
void CAdContractInfoView::OnTabSelectChange(int nOld, int nNew){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
int CAdContractInfoView::OnAddAdContractInfoView(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CAdContractInfoView::OnEditAdContractInfoView(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CAdContractInfoView::OnDeleteAdContractInfoView(){
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
 		OnCancelAdContractInfoView();
 	}
	return 0;
}
int CAdContractInfoView::OnSaveAdContractInfoView(){
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
 		//OnAdContractInfoViewListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CAdContractInfoView::OnCancelAdContractInfoView(){
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
int CAdContractInfoView::OnAdContractInfoViewListLoadData(){
	return 0;
}

void CAdContractInfoView::Refresh()
{
	OnContractsListLoadData();
	OnInvoicesListLoadData();
}
int CAdContractInfoView::OnContractsListLoadData()
{
	return 0;
}

int CAdContractInfoView::OnInvoicesListLoadData()
{
	return 0;
}