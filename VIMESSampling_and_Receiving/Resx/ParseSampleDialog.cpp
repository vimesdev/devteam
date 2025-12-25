#include "ParseSampleDialog.h"
//#include "stdafx.h"
#include "MainFrm.h"
static void _OnBrowseSelectFnc(CWnd *pWnd){
	CParseSampleDialog *pVw = (CParseSampleDialog *)pWnd;
	pVw->OnBrowseSelect();
} 
/*static void _OnSampleChangeFnc(CWnd *pWnd){
	((CParseSampleDialog *)pWnd)->OnSampleChange();
} */
/*static void _OnSampleSetfocusFnc(CWnd *pWnd){
	((CParseSampleDialog *)pWnd)->OnSampleSetfocus();} */ 
/*static void _OnSampleKillfocusFnc(CWnd *pWnd){
	((CParseSampleDialog *)pWnd)->OnSampleKillfocus();
} */
static int _OnSampleCheckValueFnc(CWnd *pWnd){
	return ((CParseSampleDialog *)pWnd)->OnSampleCheckValue();
} 
static void _OnParseSelectFnc(CWnd *pWnd){
	CParseSampleDialog *pVw = (CParseSampleDialog *)pWnd;
	pVw->OnParseSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CParseSampleDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CParseSampleDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CParseSampleDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CParseSampleDialog*)pWnd)->OnListDeleteItem();
} 
static void _OnProtocolSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CParseSampleDialog* )pWnd)->OnProtocolSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnProtocolSelendokFnc(CWnd *pWnd){
	((CParseSampleDialog *)pWnd)->OnProtocolSelendok();
}
/*static void _OnProtocolSetfocusFnc(CWnd *pWnd){
	((CParseSampleDialog *)pWnd)->OnProtocolKillfocus();
}*/
/*static void _OnProtocolKillfocusFnc(CWnd *pWnd){
	((CParseSampleDialog *)pWnd)->OnProtocolKillfocus();
}*/
static long _OnProtocolLoadDataFnc(CWnd *pWnd){
	return ((CParseSampleDialog *)pWnd)->OnProtocolLoadData();
}
/*static void _OnProtocolAddNewFnc(CWnd *pWnd){
	((CParseSampleDialog *)pWnd)->OnProtocolAddNew();
}*/
static int _OnAddParseSampleDialogFnc(CWnd *pWnd){
	 return ((CParseSampleDialog*)pWnd)->OnAddParseSampleDialog();
} 
static int _OnEditParseSampleDialogFnc(CWnd *pWnd){
	 return ((CParseSampleDialog*)pWnd)->OnEditParseSampleDialog();
} 
static int _OnDeleteParseSampleDialogFnc(CWnd *pWnd){
	 return ((CParseSampleDialog*)pWnd)->OnDeleteParseSampleDialog();
} 
static int _OnSaveParseSampleDialogFnc(CWnd *pWnd){
	 return ((CParseSampleDialog*)pWnd)->OnSaveParseSampleDialog();
} 
static int _OnCancelParseSampleDialogFnc(CWnd *pWnd){
	 return ((CParseSampleDialog*)pWnd)->OnCancelParseSampleDialog();
} 
CParseSampleDialog::CParseSampleDialog(){

	m_nDlgWidth = 805;
	m_nDlgHeight = 605;
	SetDefaultValues();
}
CParseSampleDialog::~CParseSampleDialog(){
}
void CParseSampleDialog::OnCreateComponents(){
	m_wndBrowse.Create(this, _T("&Browse"), 5, 32, 75, 54);
	m_wndSampleLabel.Create(this, _T("Sample"), 5, 5, 125, 27);
	m_wndSample.Create(this,130, 5, 780, 155); 
	m_wndParse.Create(this, _T("&Parse"), 5, 133, 75, 155);
	m_wndList.Create(this,6, 164, 778, 574); 
	m_wndProtocolLabel.Create(this, _T("Protocol"), 5, 59, 75, 81);
	m_wndProtocol.Create(this,5, 86, 125, 108); 

}
void CParseSampleDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndSample.SetLimitText(35);
	m_wndSample.SetCheckValue(true);
	m_wndProtocol.SetCheckValue(true);
	m_wndProtocol.LimitText(35);


	m_wndList.InsertColumn(0, _T("Index"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(1, _T("Field"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(2, _T("Value"), CFMT_TEXT, 200);
	m_wndList.InsertColumn(3, _T("Length"), CFMT_NUMBER, 70);


	m_wndProtocol.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndProtocol.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);

}
void CParseSampleDialog::OnSetWindowEvents(){
	m_wndBrowse.SetEvent(WE_CLICK, _OnBrowseSelectFnc);
	//m_wndSample.SetEvent(WE_CHANGE, _OnSampleChangeFnc);
	//m_wndSample.SetEvent(WE_SETFOCUS, _OnSampleSetfocusFnc);
	//m_wndSample.SetEvent(WE_KILLFOCUS, _OnSampleKillfocusFnc);
	m_wndSample.SetEvent(WE_CHECKVALUE, _OnSampleCheckValueFnc);
	m_wndParse.SetEvent(WE_CLICK, _OnParseSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndProtocol.SetEvent(WE_SELENDOK, _OnProtocolSelendokFnc);
	//m_wndProtocol.SetEvent(WE_SETFOCUS, _OnProtocolSetfocusFnc);
	//m_wndProtocol.SetEvent(WE_KILLFOCUS, _OnProtocolKillfocusFnc);
	m_wndProtocol.SetEvent(WE_SELCHANGE, _OnProtocolSelectChangeFnc);
	m_wndProtocol.SetEvent(WE_LOADDATA, _OnProtocolLoadDataFnc);
	//m_wndProtocol.SetEvent(WE_ADDNEW, _OnProtocolAddNewFnc);

}
void CParseSampleDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndSample.GetDlgCtrlID(), m_szSample);
	DDX_TextEx(pDX, m_wndProtocol.GetDlgCtrlID(), m_szProtocolKey);

}
void CParseSampleDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CParseSampleDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CParseSampleDialog::SetDefaultValues(){

	m_szSample.Empty();
	m_szProtocolKey.Empty();

}
int CParseSampleDialog::SetMode(int nMode){ 
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
void CParseSampleDialog::OnBrowseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
/*void CParseSampleDialog::OnSampleChange(){
	
} */
/*void CParseSampleDialog::OnSampleSetfocus(){
	
} */
/*void CParseSampleDialog::OnSampleKillfocus(){
	
} */
int CParseSampleDialog::OnSampleCheckValue(){
	return 0;
} 
void CParseSampleDialog::OnParseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CParseSampleDialog::OnListDblClick(){
	
} 
void CParseSampleDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CParseSampleDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CParseSampleDialog::OnListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	m_wndList.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("Index")), 
			rs.GetValue(_T("Field")), 
			rs.GetValue(_T("Value")), 
			rs.GetValue(_T("Length")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CParseSampleDialog::OnProtocolSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CParseSampleDialog::OnProtocolSelendok(){
	 
}
/*void CParseSampleDialog::OnProtocolSetfocus(){
	
}*/
/*void CParseSampleDialog::OnProtocolKillfocus(){
	
}*/
long CParseSampleDialog::OnProtocolLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndProtocol.IsSearchKey() && !m_szProtocolKey.IsEmpty()){
	};
	m_wndProtocol.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndProtocol.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CParseSampleDialog::OnProtocolAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
int CParseSampleDialog::OnAddParseSampleDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Add ParseSampleDialog"))) 
 		return -1; 
 	SetMode(VM_ADD);
return 0; 
 
} 
int CParseSampleDialog::OnEditParseSampleDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Edit ParseSampleDialog"))) 
 		return -1; 
 	SetMode(VM_EDIT);
return 0;  
 
} 
int CParseSampleDialog::OnDeleteParseSampleDialog(){
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
 		OnCancelParseSampleDialog(); 
 	}
return 0;
 } 
int CParseSampleDialog::OnSaveParseSampleDialog(){
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
 		//OnParseSampleDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 		pMF->FinishWork(this); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CParseSampleDialog::OnCancelParseSampleDialog(){
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
int CParseSampleDialog::OnParseSampleDialogListLoadData(){
	return 0;
}
