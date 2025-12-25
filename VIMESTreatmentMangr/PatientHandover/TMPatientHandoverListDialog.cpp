#include "TMPatientHandoverListDialog.h"
#include "../MainFrm.h"
#include "TMPatientHandoverLineDialog.h"
static void _OnDateSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CTMPatientHandoverListDialog* )pWnd)->OnDateSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDateSelendokFnc(CWnd *pWnd){
	((CTMPatientHandoverListDialog *)pWnd)->OnDateSelendok();
}
/*static void _OnDateSetfocusFnc(CWnd *pWnd){
	((CTMPatientHandoverListDialog *)pWnd)->OnDateKillfocus();
}*/
/*static void _OnDateKillfocusFnc(CWnd *pWnd){
	((CTMPatientHandoverListDialog *)pWnd)->OnDateKillfocus();
}*/
static long _OnDateLoadDataFnc(CWnd *pWnd){
	return ((CTMPatientHandoverListDialog *)pWnd)->OnDateLoadData();
}
/*static void _OnDateAddNewFnc(CWnd *pWnd){
	((CTMPatientHandoverListDialog *)pWnd)->OnDateAddNew();
}*/
static void _OnShiftSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CTMPatientHandoverListDialog* )pWnd)->OnShiftSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnShiftSelendokFnc(CWnd *pWnd){
	((CTMPatientHandoverListDialog *)pWnd)->OnShiftSelendok();
}
/*static void _OnShiftSetfocusFnc(CWnd *pWnd){
	((CTMPatientHandoverListDialog *)pWnd)->OnShiftKillfocus();
}*/
/*static void _OnShiftKillfocusFnc(CWnd *pWnd){
	((CTMPatientHandoverListDialog *)pWnd)->OnShiftKillfocus();
}*/
static long _OnShiftLoadDataFnc(CWnd *pWnd){
	return ((CTMPatientHandoverListDialog *)pWnd)->OnShiftLoadData();
}
/*static void _OnShiftAddNewFnc(CWnd *pWnd){
	((CTMPatientHandoverListDialog *)pWnd)->OnShiftAddNew();
}*/
static void _OnAddPatientSelectFnc(CWnd *pWnd){
	CTMPatientHandoverListDialog *pVw = (CTMPatientHandoverListDialog *)pWnd;
	pVw->OnAddPatientSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CTMPatientHandoverListDialog *pVw = (CTMPatientHandoverListDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static long _OnPatientListLoadDataFnc(CWnd *pWnd){
	return ((CTMPatientHandoverListDialog*)pWnd)->OnPatientListLoadData();
} 
static void _OnPatientListDblClickFnc(CWnd *pWnd){
	((CTMPatientHandoverListDialog*)pWnd)->OnPatientListDblClick();
} 
static void _OnPatientListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CTMPatientHandoverListDialog*)pWnd)->OnPatientListSelectChange(nOldItem, nNewItem);
} 
static int _OnPatientListDeleteItemFnc(CWnd *pWnd){
	 return ((CTMPatientHandoverListDialog*)pWnd)->OnPatientListDeleteItem();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CTMPatientHandoverListDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CTMPatientHandoverListDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CTMPatientHandoverListDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CTMPatientHandoverListDialog*)pWnd)->OnListDeleteItem();
} 
static int _OnAddTMPatientHandoverListDialogFnc(CWnd *pWnd){
	 return ((CTMPatientHandoverListDialog*)pWnd)->OnAddTMPatientHandoverListDialog();
} 
static int _OnEditTMPatientHandoverListDialogFnc(CWnd *pWnd){
	 return ((CTMPatientHandoverListDialog*)pWnd)->OnEditTMPatientHandoverListDialog();
} 
static int _OnDeleteTMPatientHandoverListDialogFnc(CWnd *pWnd){
	 return ((CTMPatientHandoverListDialog*)pWnd)->OnDeleteTMPatientHandoverListDialog();
} 
static int _OnSaveTMPatientHandoverListDialogFnc(CWnd *pWnd){
	 return ((CTMPatientHandoverListDialog*)pWnd)->OnSaveTMPatientHandoverListDialog();
} 
static int _OnCancelTMPatientHandoverListDialogFnc(CWnd *pWnd){
	 return ((CTMPatientHandoverListDialog*)pWnd)->OnCancelTMPatientHandoverListDialog();
} 
CTMPatientHandoverListDialog::CTMPatientHandoverListDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CTMPatientHandoverListDialog::~CTMPatientHandoverListDialog(){
}
void CTMPatientHandoverListDialog::OnCreateComponents(){
	m_wndSearchGroup.Create(this, _T("Search Information"), 5, 5, 530, 60);
	m_wndDateLabel.Create(this, _T("Date"), 10, 30, 90, 55);
	m_wndDate.Create(this,95, 30, 195, 55); 
	m_wndDetailGroup.Create(this, _T("Detail Group"), 5, 340, 530, 580);
	m_wndPatientListGroup.Create(this, _T("Patient List Group"), 5, 60, 530, 340);
	m_wndShiftLabel.Create(this, _T("Shift"), 200, 30, 280, 55);
	m_wndShift.Create(this,285, 30, 385, 55); 
	m_wndAddPatient.Create(this, _T("Add Patient"), 365, 585, 445, 610);
	m_wndClose.Create(this, _T("Close"), 450, 585, 530, 610);
	m_wndPatientList.Create(this,10, 80, 530, 340); 
	m_wndList.Create(this,10, 360, 530, 580); 

}
void CTMPatientHandoverListDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndDate.SetCheckValue(true);
	m_wndDate.LimitText(35);
	m_wndShift.SetCheckValue(true);
	m_wndShift.LimitText(35);


	m_wndDate.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDate.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndShift.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndShift.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndPatientList.InsertColumn(0, _T("Index"), CFMT_TEXT, 40);
	m_wndPatientList.InsertColumn(1, _T("DocNo"), CFMT_TEXT, 100);
	m_wndPatientList.InsertColumn(2, _T("Name"), CFMT_TEXT, 180);
	m_wndPatientList.InsertColumn(3, _T("Yob"), CFMT_TEXT, 60);
	m_wndPatientList.InsertColumn(4, _T("Room"), CFMT_TEXT, 130);



}
void CTMPatientHandoverListDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndDate.SetEvent(WE_SELENDOK, _OnDateSelendokFnc);
	//m_wndDate.SetEvent(WE_SETFOCUS, _OnDateSetfocusFnc);
	//m_wndDate.SetEvent(WE_KILLFOCUS, _OnDateKillfocusFnc);
	m_wndDate.SetEvent(WE_SELCHANGE, _OnDateSelectChangeFnc);
	m_wndDate.SetEvent(WE_LOADDATA, _OnDateLoadDataFnc);
	//m_wndDate.SetEvent(WE_ADDNEW, _OnDateAddNewFnc);
	m_wndShift.SetEvent(WE_SELENDOK, _OnShiftSelendokFnc);
	//m_wndShift.SetEvent(WE_SETFOCUS, _OnShiftSetfocusFnc);
	//m_wndShift.SetEvent(WE_KILLFOCUS, _OnShiftKillfocusFnc);
	m_wndShift.SetEvent(WE_SELCHANGE, _OnShiftSelectChangeFnc);
	m_wndShift.SetEvent(WE_LOADDATA, _OnShiftLoadDataFnc);
	//m_wndShift.SetEvent(WE_ADDNEW, _OnShiftAddNewFnc);
	m_wndAddPatient.SetEvent(WE_CLICK, _OnAddPatientSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndPatientList.SetEvent(WE_SELCHANGE, _OnPatientListSelectChangeFnc);
	m_wndPatientList.SetEvent(WE_LOADDATA, _OnPatientListLoadDataFnc);
	m_wndPatientList.SetEvent(WE_DBLCLICK, _OnPatientListDblClickFnc);
	m_wndPatientList.AddEvent(1, _T("Delete"), _OnPatientListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	SetMode(VM_NONE);

}
void CTMPatientHandoverListDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndDate.GetDlgCtrlID(), m_szDateKey);
	DDX_TextEx(pDX, m_wndShift.GetDlgCtrlID(), m_szShiftKey);

}
void CTMPatientHandoverListDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Date")] =  m_szDateKey;
	m_jData[_T("Shift")] =  m_szShiftKey;
	}
	else
	{
			
	m_jData[_T("Date")].GetValue(m_szDateKey);
	m_jData[_T("Shift")].GetValue(m_szShiftKey);
	}

}
void CTMPatientHandoverListDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CTMPatientHandoverListDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CTMPatientHandoverListDialog::SetDefaultValues(){

	m_szDateKey.Empty();
	m_szShiftKey.Empty();

}
int CTMPatientHandoverListDialog::SetMode(int nMode){
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
void CTMPatientHandoverListDialog::OnDateSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CTMPatientHandoverListDialog::OnDateSelendok(){
	 
}
/*void CTMPatientHandoverListDialog::OnDateSetfocus(){
	
}*/
/*void CTMPatientHandoverListDialog::OnDateKillfocus(){
	
}*/
long CTMPatientHandoverListDialog::OnDateLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDate.IsSearchKey() && !m_szDateKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szDateKey
};
	m_wndDate.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDate.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CTMPatientHandoverListDialog::OnDateAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CTMPatientHandoverListDialog::OnShiftSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CTMPatientHandoverListDialog::OnShiftSelendok(){
	 
}
/*void CTMPatientHandoverListDialog::OnShiftSetfocus(){
	
}*/
/*void CTMPatientHandoverListDialog::OnShiftKillfocus(){
	
}*/
long CTMPatientHandoverListDialog::OnShiftLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndShift.IsSearchKey() && !m_szShiftKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szShiftKey
};
	m_wndShift.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndShift.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CTMPatientHandoverListDialog::OnShiftAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CTMPatientHandoverListDialog::OnAddPatientSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CTMPatientHandoverLineDialog dlg(this);
	dlg.DoModal();
} 
void CTMPatientHandoverListDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CTMPatientHandoverListDialog::OnPatientListDblClick(){
	
} 
void CTMPatientHandoverListDialog::OnPatientListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CTMPatientHandoverListDialog::OnPatientListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CTMPatientHandoverListDialog::OnPatientListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndPatientList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPatientList.AddItems(
			rs.GetValue(_T("Index")), 
			rs.GetValue(_T("DocNo")), 
			rs.GetValue(_T("Name")), 
			rs.GetValue(_T("Yob")), 
			rs.GetValue(_T("Room")), NULL);
		rs.MoveNext();
	}
	m_wndPatientList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CTMPatientHandoverListDialog::OnListDblClick(){
	
} 
void CTMPatientHandoverListDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CTMPatientHandoverListDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CTMPatientHandoverListDialog::OnListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
*/
	return 0;
}
int CTMPatientHandoverListDialog::OnAddTMPatientHandoverListDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CTMPatientHandoverListDialog::OnEditTMPatientHandoverListDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CTMPatientHandoverListDialog::OnDeleteTMPatientHandoverListDialog(){
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
 		OnCancelTMPatientHandoverListDialog();
 	}
	return 0;
}
int CTMPatientHandoverListDialog::OnSaveTMPatientHandoverListDialog(){
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
 		//OnTMPatientHandoverListDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CTMPatientHandoverListDialog::OnCancelTMPatientHandoverListDialog(){
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
int CTMPatientHandoverListDialog::OnTMPatientHandoverListDialogListLoadData(){
	return 0;
}
