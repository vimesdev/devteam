#include "Demo.h"
#include "MainFrm.h"
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CDemo*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CDemo*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CDemo*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CDemo*)pWnd)->OnListDeleteItem();
} 
/*static void _OnUserIDChangeFnc(CWnd *pWnd){
	((CDemo *)pWnd)->OnUserIDChange();
} */
/*static void _OnUserIDSetfocusFnc(CWnd *pWnd){
	((CDemo *)pWnd)->OnUserIDSetfocus();} */ 
/*static void _OnUserIDKillfocusFnc(CWnd *pWnd){
	((CDemo *)pWnd)->OnUserIDKillfocus();
} */
static int _OnUserIDCheckValueFnc(CWnd *pWnd){
	return ((CDemo *)pWnd)->OnUserIDCheckValue();
} 
/*static void _OnSerialNoChangeFnc(CWnd *pWnd){
	((CDemo *)pWnd)->OnSerialNoChange();
} */
/*static void _OnSerialNoSetfocusFnc(CWnd *pWnd){
	((CDemo *)pWnd)->OnSerialNoSetfocus();} */ 
/*static void _OnSerialNoKillfocusFnc(CWnd *pWnd){
	((CDemo *)pWnd)->OnSerialNoKillfocus();
} */
static int _OnSerialNoCheckValueFnc(CWnd *pWnd){
	return ((CDemo *)pWnd)->OnSerialNoCheckValue();
} 
/*static void _OnBookNoChangeFnc(CWnd *pWnd){
	((CDemo *)pWnd)->OnBookNoChange();
} */
/*static void _OnBookNoSetfocusFnc(CWnd *pWnd){
	((CDemo *)pWnd)->OnBookNoSetfocus();} */ 
/*static void _OnBookNoKillfocusFnc(CWnd *pWnd){
	((CDemo *)pWnd)->OnBookNoKillfocus();
} */
static int _OnBookNoCheckValueFnc(CWnd *pWnd){
	return ((CDemo *)pWnd)->OnBookNoCheckValue();
} 
static void _OnComboBoxSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CDemo* )pWnd)->OnComboBoxSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnComboBoxSelendokFnc(CWnd *pWnd){
	((CDemo *)pWnd)->OnComboBoxSelendok();
}
/*static void _OnComboBoxSetfocusFnc(CWnd *pWnd){
	((CDemo *)pWnd)->OnComboBoxKillfocus();
}*/
/*static void _OnComboBoxKillfocusFnc(CWnd *pWnd){
	((CDemo *)pWnd)->OnComboBoxKillfocus();
}*/
static long _OnComboBoxLoadDataFnc(CWnd *pWnd){
	return ((CDemo *)pWnd)->OnComboBoxLoadData();
}
/*static void _OnComboBoxAddNewFnc(CWnd *pWnd){
	((CDemo *)pWnd)->OnComboBoxAddNew();
}*/
static void _OnSaveSelectFnc(CWnd *pWnd){
	CDemo *pVw = (CDemo *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CDemo *pVw = (CDemo *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddDemoFnc(CWnd *pWnd){
	 return ((CDemo*)pWnd)->OnAddDemo();
} 
static int _OnEditDemoFnc(CWnd *pWnd){
	 return ((CDemo*)pWnd)->OnEditDemo();
} 
static int _OnDeleteDemoFnc(CWnd *pWnd){
	 return ((CDemo*)pWnd)->OnDeleteDemo();
} 
static int _OnSaveDemoFnc(CWnd *pWnd){
	 return ((CDemo*)pWnd)->OnSaveDemo();
} 
static int _OnCancelDemoFnc(CWnd *pWnd){
	 return ((CDemo*)pWnd)->OnCancelDemo();
} 
CDemo::CDemo(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 605;
	m_nDlgHeight = 245;
	SetDefaultValues();
}
CDemo::~CDemo(){
}
void CDemo::OnCreateComponents(){
	m_wndList.Create(this,9, 121, 594, 207); 
	m_wndUserIDLabel.Create(this, _T("User ID"), 5, 5, 85, 30);
	m_wndUserID.Create(this,90, 5, 170, 30); 
	m_wndSerialNoLabel.Create(this, _T("Serial No"), 5, 35, 85, 60);
	m_wndSerialNo.Create(this,90, 35, 170, 60); 
	m_wndBookNoLabel.Create(this, _T("BookNo"), 5, 65, 85, 90);
	m_wndBookNo.Create(this,90, 65, 170, 90); 
	m_wndDepartment.Create(this, _T("Department"), 5, 95, 85, 120);
	m_wndComboBox.Create(this,90, 95, 355, 120); 
	m_wndSave.Create(this, _T("&Save"), 98, 220, 173, 245);
	m_wndClose.Create(this, _T("&Close"), 178, 220, 253, 245);

}
void CDemo::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndUserID.SetLimitText(15);
	m_wndUserID.SetCheckValue(true);
	m_wndSerialNo.SetLimitText(15);
	m_wndSerialNo.SetCheckValue(true);
	m_wndBookNo.SetCheckValue(true);
	m_wndComboBox.SetCheckValue(true);
	m_wndComboBox.LimitText(35);


	m_wndList.InsertColumn(0, _T("Index"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);
	m_wndList.InsertColumn(2, _T("Unit"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(3, _T("Quantity"), CFMT_NUMBER, 70);
	m_wndList.InsertColumn(4, _T("Price"), CFMT_NUMBER, 70);
	m_wndList.InsertColumn(5, _T("Amount"), CFMT_NUMBER, 90);


	m_wndComboBox.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndComboBox.InsertColumn(1, _T("Department Name"), CFMT_TEXT, 200);
	m_hms_invfeectlTbl.SetTableName(_T("hms_invfeectl"));
	m_hms_invfeectlTbl.AddField(_T("hifc_userid"), dfText, 15); 
	m_hms_invfeectlTbl.AddField(_T("hifc_serialno"), dfText, 15); 
	m_hms_invfeectlTbl.AddField(_T("hifc_bookno"), dfLong); 
	m_hms_invfeectlTbl.AddField(_T("hifc_recvno"), dfLong); 
	m_hms_invfeectlTbl.AddField(_T("hifc_minvalue"), dfLong); 
	m_hms_invfeectlTbl.AddField(_T("hifc_maxvalue"), dfLong); 
	m_hms_invfeectlTbl.AddField(_T("hifc_recvdate"), dfDate); 
	m_hms_invfeectlTbl.AddField(_T("hifc_examfee"), dfText, 1); 
	m_hms_invfeectlTbl.AddField(_T("hifc_drugfee"), dfText, 1); 
	m_hms_invfeectlTbl.AddField(_T("hifc_pcmsfee"), dfText, 1); 
	m_hms_invfeectlTbl.AddField(_T("hifc_advance"), dfText, 1); 
	m_hms_invfeectlTbl.AddField(_T("hifc_refund"), dfText, 1); 
	m_hms_invfeectlTbl.AddField(_T("hifc_remission"), dfText, 1); 
	m_hms_invfeectlTbl.AddField(_T("hifc_objects"), dfText, 15); 

}
void CDemo::OnSetWindowEvents(){
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	//m_wndUserID.SetEvent(WE_CHANGE, _OnUserIDChangeFnc);
	//m_wndUserID.SetEvent(WE_SETFOCUS, _OnUserIDSetfocusFnc);
	//m_wndUserID.SetEvent(WE_KILLFOCUS, _OnUserIDKillfocusFnc);
	m_wndUserID.SetEvent(WE_CHECKVALUE, _OnUserIDCheckValueFnc);
	//m_wndSerialNo.SetEvent(WE_CHANGE, _OnSerialNoChangeFnc);
	//m_wndSerialNo.SetEvent(WE_SETFOCUS, _OnSerialNoSetfocusFnc);
	//m_wndSerialNo.SetEvent(WE_KILLFOCUS, _OnSerialNoKillfocusFnc);
	m_wndSerialNo.SetEvent(WE_CHECKVALUE, _OnSerialNoCheckValueFnc);
	//m_wndBookNo.SetEvent(WE_CHANGE, _OnBookNoChangeFnc);
	//m_wndBookNo.SetEvent(WE_SETFOCUS, _OnBookNoSetfocusFnc);
	//m_wndBookNo.SetEvent(WE_KILLFOCUS, _OnBookNoKillfocusFnc);
	m_wndBookNo.SetEvent(WE_CHECKVALUE, _OnBookNoCheckValueFnc);
	m_wndComboBox.SetEvent(WE_SELENDOK, _OnComboBoxSelendokFnc);
	//m_wndComboBox.SetEvent(WE_SETFOCUS, _OnComboBoxSetfocusFnc);
	//m_wndComboBox.SetEvent(WE_KILLFOCUS, _OnComboBoxKillfocusFnc);
	m_wndComboBox.SetEvent(WE_SELCHANGE, _OnComboBoxSelectChangeFnc);
	m_wndComboBox.SetEvent(WE_LOADDATA, _OnComboBoxLoadDataFnc);
	//m_wndComboBox.SetEvent(WE_ADDNEW, _OnComboBoxAddNewFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);

}
void CDemo::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndUserID.GetDlgCtrlID(), m_szUserID);
	DDX_Text(pDX, m_wndSerialNo.GetDlgCtrlID(), m_szSerialNo);
	DDX_Text(pDX, m_wndBookNo.GetDlgCtrlID(), m_nBookNo);
	DDX_TextEx(pDX, m_wndComboBox.GetDlgCtrlID(), m_szComboBoxKey);

}
void CDemo::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("hifc_userid"), m_szUserID);
	rs.GetValue(_T("hifc_serialno"), m_szSerialNo);
	rs.GetValue(_T("hifc_bookno"), m_nBookNo);

}
void CDemo::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_hms_invfeectlTbl.SetValue(_T("hifc_userid"), m_szUserID);
	m_hms_invfeectlTbl.SetValue(_T("hifc_serialno"), m_szSerialNo);
	m_hms_invfeectlTbl.SetValue(_T("hifc_bookno"), m_nBookNo);

}
void CDemo::SetDefaultValues(){

	m_szUserID.Empty();
	m_szSerialNo.Empty();
	m_nBookNo=0;
	m_szComboBoxKey.Empty();

}
int CDemo::SetMode(int nMode){
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
void CDemo::OnListDblClick(){
	
} 
void CDemo::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CDemo::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CDemo::OnListLoadData(){
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
			rs.GetValue(_T("Name")), 
			rs.GetValue(_T("Unit")), 
			rs.GetValue(_T("Quantity")), 
			rs.GetValue(_T("Price")), 
			rs.GetValue(_T("Amount")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
*/
	return 0;
}
/*void CDemo::OnUserIDChange(){
	
} */
/*void CDemo::OnUserIDSetfocus(){
	
} */
/*void CDemo::OnUserIDKillfocus(){
	
} */
int CDemo::OnUserIDCheckValue(){
	return 0;
} 
/*void CDemo::OnSerialNoChange(){
	
} */
/*void CDemo::OnSerialNoSetfocus(){
	
} */
/*void CDemo::OnSerialNoKillfocus(){
	
} */
int CDemo::OnSerialNoCheckValue(){
	return 0;
} 
/*void CDemo::OnBookNoChange(){
	
} */
/*void CDemo::OnBookNoSetfocus(){
	
} */
/*void CDemo::OnBookNoKillfocus(){
	
} */
int CDemo::OnBookNoCheckValue(){
	return 0;
} 
void CDemo::OnComboBoxSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CDemo::OnComboBoxSelendok(){
	 
}
/*void CDemo::OnComboBoxSetfocus(){
	
}*/
/*void CDemo::OnComboBoxKillfocus(){
	
}*/
long CDemo::OnComboBoxLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndComboBox.IsSearchKey() && !m_szComboBoxKey.IsEmpty()){
	};
	m_wndComboBox.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndComboBox.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("departmentname")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CDemo::OnComboBoxAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CDemo::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CDemo::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CDemo::OnAddDemo(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CDemo::OnEditDemo(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CDemo::OnDeleteDemo(){
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
 		OnCancelDemo(); 
 	}
	return 0;
}
int CDemo::OnSaveDemo(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		//szSQL = m_hms_invfeectlTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE")); 
 		//szSQL = m_hms_invfeectlTbl.GetUpdateSQL(_T("createdby,createddate")); 
 		szSQL += szWhere; 
 	} 
 _fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		//OnDemoListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CDemo::OnCancelDemo(){
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
int CDemo::OnDemoListLoadData(){
	return 0;
}
