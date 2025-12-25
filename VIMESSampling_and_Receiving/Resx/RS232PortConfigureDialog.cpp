#include "RS232PortConfigureDialog.h"
//#include "stdafx.h"
#include "MainFrm.h"
static void _OnPortSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CRS232PortConfigureDialog* )pWnd)->OnPortSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPortSelendokFnc(CWnd *pWnd){
	((CRS232PortConfigureDialog *)pWnd)->OnPortSelendok();
}
/*static void _OnPortSetfocusFnc(CWnd *pWnd){
	((CRS232PortConfigureDialog *)pWnd)->OnPortKillfocus();
}*/
/*static void _OnPortKillfocusFnc(CWnd *pWnd){
	((CRS232PortConfigureDialog *)pWnd)->OnPortKillfocus();
}*/
static long _OnPortLoadDataFnc(CWnd *pWnd){
	return ((CRS232PortConfigureDialog *)pWnd)->OnPortLoadData();
}
/*static void _OnPortAddNewFnc(CWnd *pWnd){
	((CRS232PortConfigureDialog *)pWnd)->OnPortAddNew();
}*/
static void _OnBaudrateSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CRS232PortConfigureDialog* )pWnd)->OnBaudrateSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnBaudrateSelendokFnc(CWnd *pWnd){
	((CRS232PortConfigureDialog *)pWnd)->OnBaudrateSelendok();
}
/*static void _OnBaudrateSetfocusFnc(CWnd *pWnd){
	((CRS232PortConfigureDialog *)pWnd)->OnBaudrateKillfocus();
}*/
/*static void _OnBaudrateKillfocusFnc(CWnd *pWnd){
	((CRS232PortConfigureDialog *)pWnd)->OnBaudrateKillfocus();
}*/
static long _OnBaudrateLoadDataFnc(CWnd *pWnd){
	return ((CRS232PortConfigureDialog *)pWnd)->OnBaudrateLoadData();
}
/*static void _OnBaudrateAddNewFnc(CWnd *pWnd){
	((CRS232PortConfigureDialog *)pWnd)->OnBaudrateAddNew();
}*/
static void _OnDatabitsSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CRS232PortConfigureDialog* )pWnd)->OnDatabitsSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDatabitsSelendokFnc(CWnd *pWnd){
	((CRS232PortConfigureDialog *)pWnd)->OnDatabitsSelendok();
}
/*static void _OnDatabitsSetfocusFnc(CWnd *pWnd){
	((CRS232PortConfigureDialog *)pWnd)->OnDatabitsKillfocus();
}*/
/*static void _OnDatabitsKillfocusFnc(CWnd *pWnd){
	((CRS232PortConfigureDialog *)pWnd)->OnDatabitsKillfocus();
}*/
static long _OnDatabitsLoadDataFnc(CWnd *pWnd){
	return ((CRS232PortConfigureDialog *)pWnd)->OnDatabitsLoadData();
}
/*static void _OnDatabitsAddNewFnc(CWnd *pWnd){
	((CRS232PortConfigureDialog *)pWnd)->OnDatabitsAddNew();
}*/
static void _OnParitySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CRS232PortConfigureDialog* )pWnd)->OnParitySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnParitySelendokFnc(CWnd *pWnd){
	((CRS232PortConfigureDialog *)pWnd)->OnParitySelendok();
}
/*static void _OnParitySetfocusFnc(CWnd *pWnd){
	((CRS232PortConfigureDialog *)pWnd)->OnParityKillfocus();
}*/
/*static void _OnParityKillfocusFnc(CWnd *pWnd){
	((CRS232PortConfigureDialog *)pWnd)->OnParityKillfocus();
}*/
static long _OnParityLoadDataFnc(CWnd *pWnd){
	return ((CRS232PortConfigureDialog *)pWnd)->OnParityLoadData();
}
/*static void _OnParityAddNewFnc(CWnd *pWnd){
	((CRS232PortConfigureDialog *)pWnd)->OnParityAddNew();
}*/
static void _OnFlowControlSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CRS232PortConfigureDialog* )pWnd)->OnFlowControlSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnFlowControlSelendokFnc(CWnd *pWnd){
	((CRS232PortConfigureDialog *)pWnd)->OnFlowControlSelendok();
}
/*static void _OnFlowControlSetfocusFnc(CWnd *pWnd){
	((CRS232PortConfigureDialog *)pWnd)->OnFlowControlKillfocus();
}*/
/*static void _OnFlowControlKillfocusFnc(CWnd *pWnd){
	((CRS232PortConfigureDialog *)pWnd)->OnFlowControlKillfocus();
}*/
static long _OnFlowControlLoadDataFnc(CWnd *pWnd){
	return ((CRS232PortConfigureDialog *)pWnd)->OnFlowControlLoadData();
}
/*static void _OnFlowControlAddNewFnc(CWnd *pWnd){
	((CRS232PortConfigureDialog *)pWnd)->OnFlowControlAddNew();
}*/
static void _OnStopbitsSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CRS232PortConfigureDialog* )pWnd)->OnStopbitsSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStopbitsSelendokFnc(CWnd *pWnd){
	((CRS232PortConfigureDialog *)pWnd)->OnStopbitsSelendok();
}
/*static void _OnStopbitsSetfocusFnc(CWnd *pWnd){
	((CRS232PortConfigureDialog *)pWnd)->OnStopbitsKillfocus();
}*/
/*static void _OnStopbitsKillfocusFnc(CWnd *pWnd){
	((CRS232PortConfigureDialog *)pWnd)->OnStopbitsKillfocus();
}*/
static long _OnStopbitsLoadDataFnc(CWnd *pWnd){
	return ((CRS232PortConfigureDialog *)pWnd)->OnStopbitsLoadData();
}
/*static void _OnStopbitsAddNewFnc(CWnd *pWnd){
	((CRS232PortConfigureDialog *)pWnd)->OnStopbitsAddNew();
}*/
static void _OnSaveSelectFnc(CWnd *pWnd){
	CRS232PortConfigureDialog *pVw = (CRS232PortConfigureDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CRS232PortConfigureDialog *pVw = (CRS232PortConfigureDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddRS232PortConfigureDialogFnc(CWnd *pWnd){
	 return ((CRS232PortConfigureDialog*)pWnd)->OnAddRS232PortConfigureDialog();
} 
static int _OnEditRS232PortConfigureDialogFnc(CWnd *pWnd){
	 return ((CRS232PortConfigureDialog*)pWnd)->OnEditRS232PortConfigureDialog();
} 
static int _OnDeleteRS232PortConfigureDialogFnc(CWnd *pWnd){
	 return ((CRS232PortConfigureDialog*)pWnd)->OnDeleteRS232PortConfigureDialog();
} 
static int _OnSaveRS232PortConfigureDialogFnc(CWnd *pWnd){
	 return ((CRS232PortConfigureDialog*)pWnd)->OnSaveRS232PortConfigureDialog();
} 
static int _OnCancelRS232PortConfigureDialogFnc(CWnd *pWnd){
	 return ((CRS232PortConfigureDialog*)pWnd)->OnCancelRS232PortConfigureDialog();
} 
CRS232PortConfigureDialog::CRS232PortConfigureDialog(){

	m_nDlgWidth = 205;
	m_nDlgHeight = 225;
	SetDefaultValues();
}
CRS232PortConfigureDialog::~CRS232PortConfigureDialog(){
}
void CRS232PortConfigureDialog::OnCreateComponents(){
	m_wndRSPortConfigure.Create(this, _T("RS232 Port Configure"), 5, 5, 195, 189);
	m_wndPortLabel.Create(this, _T("Port"), 10, 28, 86, 50);
	m_wndPort.Create(this,91, 28, 191, 50); 
	m_wndBaudrateLabel.Create(this, _T("Baudrate"), 10, 55, 86, 77);
	m_wndBaudrate.Create(this,91, 55, 191, 77); 
	m_wndDatabitsLabel.Create(this, _T("Databits"), 10, 82, 86, 104);
	m_wndDatabits.Create(this,91, 82, 191, 104); 
	m_wndParityLabel.Create(this, _T("Parity"), 10, 109, 86, 131);
	m_wndParity.Create(this,91, 109, 191, 131); 
	m_wndFlowControlLabel.Create(this, _T("Flow control"), 10, 136, 86, 158);
	m_wndFlowControl.Create(this,91, 136, 191, 158); 
	m_wndStopbitsLabel.Create(this, _T("Stopbits"), 10, 163, 86, 185);
	m_wndStopbits.Create(this,91, 163, 191, 185); 
	m_wndSave.Create(this, _T("&Save"), 47, 194, 117, 216);
	m_wndClose.Create(this, _T("&Close"), 126, 194, 196, 216);

}
void CRS232PortConfigureDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndPort.SetCheckValue(true);
	m_wndPort.LimitText(35);
	m_wndBaudrate.SetCheckValue(true);
	m_wndBaudrate.LimitText(35);
	m_wndDatabits.SetCheckValue(true);
	m_wndDatabits.LimitText(35);
	m_wndParity.SetCheckValue(true);
	m_wndParity.LimitText(35);
	m_wndFlowControl.SetCheckValue(true);
	m_wndFlowControl.LimitText(35);
	m_wndStopbits.SetCheckValue(true);
	m_wndStopbits.LimitText(35);


	m_wndPort.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndPort.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndBaudrate.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndBaudrate.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndDatabits.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndDatabits.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndParity.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndParity.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndFlowControl.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndFlowControl.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndStopbits.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndStopbits.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);

}
void CRS232PortConfigureDialog::OnSetWindowEvents(){
	m_wndPort.SetEvent(WE_SELENDOK, _OnPortSelendokFnc);
	//m_wndPort.SetEvent(WE_SETFOCUS, _OnPortSetfocusFnc);
	//m_wndPort.SetEvent(WE_KILLFOCUS, _OnPortKillfocusFnc);
	m_wndPort.SetEvent(WE_SELCHANGE, _OnPortSelectChangeFnc);
	m_wndPort.SetEvent(WE_LOADDATA, _OnPortLoadDataFnc);
	//m_wndPort.SetEvent(WE_ADDNEW, _OnPortAddNewFnc);
	m_wndBaudrate.SetEvent(WE_SELENDOK, _OnBaudrateSelendokFnc);
	//m_wndBaudrate.SetEvent(WE_SETFOCUS, _OnBaudrateSetfocusFnc);
	//m_wndBaudrate.SetEvent(WE_KILLFOCUS, _OnBaudrateKillfocusFnc);
	m_wndBaudrate.SetEvent(WE_SELCHANGE, _OnBaudrateSelectChangeFnc);
	m_wndBaudrate.SetEvent(WE_LOADDATA, _OnBaudrateLoadDataFnc);
	//m_wndBaudrate.SetEvent(WE_ADDNEW, _OnBaudrateAddNewFnc);
	m_wndDatabits.SetEvent(WE_SELENDOK, _OnDatabitsSelendokFnc);
	//m_wndDatabits.SetEvent(WE_SETFOCUS, _OnDatabitsSetfocusFnc);
	//m_wndDatabits.SetEvent(WE_KILLFOCUS, _OnDatabitsKillfocusFnc);
	m_wndDatabits.SetEvent(WE_SELCHANGE, _OnDatabitsSelectChangeFnc);
	m_wndDatabits.SetEvent(WE_LOADDATA, _OnDatabitsLoadDataFnc);
	//m_wndDatabits.SetEvent(WE_ADDNEW, _OnDatabitsAddNewFnc);
	m_wndParity.SetEvent(WE_SELENDOK, _OnParitySelendokFnc);
	//m_wndParity.SetEvent(WE_SETFOCUS, _OnParitySetfocusFnc);
	//m_wndParity.SetEvent(WE_KILLFOCUS, _OnParityKillfocusFnc);
	m_wndParity.SetEvent(WE_SELCHANGE, _OnParitySelectChangeFnc);
	m_wndParity.SetEvent(WE_LOADDATA, _OnParityLoadDataFnc);
	//m_wndParity.SetEvent(WE_ADDNEW, _OnParityAddNewFnc);
	m_wndFlowControl.SetEvent(WE_SELENDOK, _OnFlowControlSelendokFnc);
	//m_wndFlowControl.SetEvent(WE_SETFOCUS, _OnFlowControlSetfocusFnc);
	//m_wndFlowControl.SetEvent(WE_KILLFOCUS, _OnFlowControlKillfocusFnc);
	m_wndFlowControl.SetEvent(WE_SELCHANGE, _OnFlowControlSelectChangeFnc);
	m_wndFlowControl.SetEvent(WE_LOADDATA, _OnFlowControlLoadDataFnc);
	//m_wndFlowControl.SetEvent(WE_ADDNEW, _OnFlowControlAddNewFnc);
	m_wndStopbits.SetEvent(WE_SELENDOK, _OnStopbitsSelendokFnc);
	//m_wndStopbits.SetEvent(WE_SETFOCUS, _OnStopbitsSetfocusFnc);
	//m_wndStopbits.SetEvent(WE_KILLFOCUS, _OnStopbitsKillfocusFnc);
	m_wndStopbits.SetEvent(WE_SELCHANGE, _OnStopbitsSelectChangeFnc);
	m_wndStopbits.SetEvent(WE_LOADDATA, _OnStopbitsLoadDataFnc);
	//m_wndStopbits.SetEvent(WE_ADDNEW, _OnStopbitsAddNewFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);

}
void CRS232PortConfigureDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndPort.GetDlgCtrlID(), m_szPortKey);
	DDX_TextEx(pDX, m_wndBaudrate.GetDlgCtrlID(), m_szBaudrateKey);
	DDX_TextEx(pDX, m_wndDatabits.GetDlgCtrlID(), m_szDatabitsKey);
	DDX_TextEx(pDX, m_wndParity.GetDlgCtrlID(), m_szParityKey);
	DDX_TextEx(pDX, m_wndFlowControl.GetDlgCtrlID(), m_szFlowControlKey);
	DDX_TextEx(pDX, m_wndStopbits.GetDlgCtrlID(), m_szStopbitsKey);

}
void CRS232PortConfigureDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CRS232PortConfigureDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CRS232PortConfigureDialog::SetDefaultValues(){

	m_szPortKey.Empty();
	m_szBaudrateKey.Empty();
	m_szDatabitsKey.Empty();
	m_szParityKey.Empty();
	m_szFlowControlKey.Empty();
	m_szStopbitsKey.Empty();

}
int CRS232PortConfigureDialog::SetMode(int nMode){ 
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
void CRS232PortConfigureDialog::OnPortSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CRS232PortConfigureDialog::OnPortSelendok(){
	 
}
/*void CRS232PortConfigureDialog::OnPortSetfocus(){
	
}*/
/*void CRS232PortConfigureDialog::OnPortKillfocus(){
	
}*/
long CRS232PortConfigureDialog::OnPortLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndPort.IsSearchKey()){
	};
	m_wndPort.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPort.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CRS232PortConfigureDialog::OnPortAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CRS232PortConfigureDialog::OnBaudrateSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CRS232PortConfigureDialog::OnBaudrateSelendok(){
	 
}
/*void CRS232PortConfigureDialog::OnBaudrateSetfocus(){
	
}*/
/*void CRS232PortConfigureDialog::OnBaudrateKillfocus(){
	
}*/
long CRS232PortConfigureDialog::OnBaudrateLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndBaudrate.IsSearchKey()){
	};
	m_wndBaudrate.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndBaudrate.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CRS232PortConfigureDialog::OnBaudrateAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CRS232PortConfigureDialog::OnDatabitsSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CRS232PortConfigureDialog::OnDatabitsSelendok(){
	 
}
/*void CRS232PortConfigureDialog::OnDatabitsSetfocus(){
	
}*/
/*void CRS232PortConfigureDialog::OnDatabitsKillfocus(){
	
}*/
long CRS232PortConfigureDialog::OnDatabitsLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDatabits.IsSearchKey()){
	};
	m_wndDatabits.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDatabits.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CRS232PortConfigureDialog::OnDatabitsAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CRS232PortConfigureDialog::OnParitySelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CRS232PortConfigureDialog::OnParitySelendok(){
	 
}
/*void CRS232PortConfigureDialog::OnParitySetfocus(){
	
}*/
/*void CRS232PortConfigureDialog::OnParityKillfocus(){
	
}*/
long CRS232PortConfigureDialog::OnParityLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndParity.IsSearchKey()){
	};
	m_wndParity.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndParity.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CRS232PortConfigureDialog::OnParityAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CRS232PortConfigureDialog::OnFlowControlSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CRS232PortConfigureDialog::OnFlowControlSelendok(){
	 
}
/*void CRS232PortConfigureDialog::OnFlowControlSetfocus(){
	
}*/
/*void CRS232PortConfigureDialog::OnFlowControlKillfocus(){
	
}*/
long CRS232PortConfigureDialog::OnFlowControlLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndFlowControl.IsSearchKey()){
	};
	m_wndFlowControl.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndFlowControl.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CRS232PortConfigureDialog::OnFlowControlAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CRS232PortConfigureDialog::OnStopbitsSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CRS232PortConfigureDialog::OnStopbitsSelendok(){
	 
}
/*void CRS232PortConfigureDialog::OnStopbitsSetfocus(){
	
}*/
/*void CRS232PortConfigureDialog::OnStopbitsKillfocus(){
	
}*/
long CRS232PortConfigureDialog::OnStopbitsLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndStopbits.IsSearchKey()){
	};
	m_wndStopbits.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndStopbits.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CRS232PortConfigureDialog::OnStopbitsAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CRS232PortConfigureDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CRS232PortConfigureDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CRS232PortConfigureDialog::OnAddRS232PortConfigureDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Add RS232PortConfigureDialog"))) 
 		return -1; 
 	SetMode(VM_ADD);
return 0; 
 
} 
int CRS232PortConfigureDialog::OnEditRS232PortConfigureDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Edit RS232PortConfigureDialog"))) 
 		return -1; 
 	SetMode(VM_EDIT);
return 0;  
 
} 
int CRS232PortConfigureDialog::OnDeleteRS232PortConfigureDialog(){
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
 		OnCancelRS232PortConfigureDialog(); 
 	}
return 0;
 } 
int CRS232PortConfigureDialog::OnSaveRS232PortConfigureDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
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
 _fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		//OnRS232PortConfigureDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 		pMF->FinishWork(this); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CRS232PortConfigureDialog::OnCancelRS232PortConfigureDialog(){
 	if(GetMode() == VM_EDIT) 
 	{ 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 		SetMode(VM_NONE); 
 	} 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	pMF->FinishWork(this); 
 	return 0;
} 
int CRS232PortConfigureDialog::OnRS232PortConfigureDialogListLoadData(){
	return 0;
}
