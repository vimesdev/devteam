#include "rptBaocaoquyettoanVTDialog.h"
#include "MainFrm.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CrptBaocaoquyettoanVTDialog *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CrptBaocaoquyettoanVTDialog *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CrptBaocaoquyettoanVTDialog *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CrptBaocaoquyettoanVTDialog *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CrptBaocaoquyettoanVTDialog *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CrptBaocaoquyettoanVTDialog *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CrptBaocaoquyettoanVTDialog *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CrptBaocaoquyettoanVTDialog *)pWnd)->OnToDateCheckValue();
} 
static void _OnStockSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CrptBaocaoquyettoanVTDialog* )pWnd)->OnStockSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStockSelendokFnc(CWnd *pWnd){
	((CrptBaocaoquyettoanVTDialog *)pWnd)->OnStockSelendok();
}
/*static void _OnStockSetfocusFnc(CWnd *pWnd){
	((CrptBaocaoquyettoanVTDialog *)pWnd)->OnStockKillfocus();
}*/
/*static void _OnStockKillfocusFnc(CWnd *pWnd){
	((CrptBaocaoquyettoanVTDialog *)pWnd)->OnStockKillfocus();
}*/
static long _OnStockLoadDataFnc(CWnd *pWnd){
	return ((CrptBaocaoquyettoanVTDialog *)pWnd)->OnStockLoadData();
}
/*static void _OnStockAddNewFnc(CWnd *pWnd){
	((CrptBaocaoquyettoanVTDialog *)pWnd)->OnStockAddNew();
}*/
static void _OnTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CrptBaocaoquyettoanVTDialog* )pWnd)->OnTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTypeSelendokFnc(CWnd *pWnd){
	((CrptBaocaoquyettoanVTDialog *)pWnd)->OnTypeSelendok();
}
/*static void _OnTypeSetfocusFnc(CWnd *pWnd){
	((CrptBaocaoquyettoanVTDialog *)pWnd)->OnTypeKillfocus();
}*/
/*static void _OnTypeKillfocusFnc(CWnd *pWnd){
	((CrptBaocaoquyettoanVTDialog *)pWnd)->OnTypeKillfocus();
}*/
static long _OnTypeLoadDataFnc(CWnd *pWnd){
	return ((CrptBaocaoquyettoanVTDialog *)pWnd)->OnTypeLoadData();
}
/*static void _OnTypeAddNewFnc(CWnd *pWnd){
	((CrptBaocaoquyettoanVTDialog *)pWnd)->OnTypeAddNew();
}*/
static void _OnObjectSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CrptBaocaoquyettoanVTDialog* )pWnd)->OnObjectSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnObjectSelendokFnc(CWnd *pWnd){
	((CrptBaocaoquyettoanVTDialog *)pWnd)->OnObjectSelendok();
}
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CrptBaocaoquyettoanVTDialog *)pWnd)->OnObjectKillfocus();
}*/
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CrptBaocaoquyettoanVTDialog *)pWnd)->OnObjectKillfocus();
}*/
static long _OnObjectLoadDataFnc(CWnd *pWnd){
	return ((CrptBaocaoquyettoanVTDialog *)pWnd)->OnObjectLoadData();
}
/*static void _OnObjectAddNewFnc(CWnd *pWnd){
	((CrptBaocaoquyettoanVTDialog *)pWnd)->OnObjectAddNew();
}*/
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	CrptBaocaoquyettoanVTDialog *pVw = (CrptBaocaoquyettoanVTDialog *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CrptBaocaoquyettoanVTDialog *pVw = (CrptBaocaoquyettoanVTDialog *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CrptBaocaoquyettoanVTDialog *pVw = (CrptBaocaoquyettoanVTDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static long _OnListFacLoadDataFnc(CWnd *pWnd){
	return ((CrptBaocaoquyettoanVTDialog*)pWnd)->OnListFacLoadData();
} 
static void _OnListFacDblClickFnc(CWnd *pWnd){
	((CrptBaocaoquyettoanVTDialog*)pWnd)->OnListFacDblClick();
} 
static void _OnListFacSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CrptBaocaoquyettoanVTDialog*)pWnd)->OnListFacSelectChange(nOldItem, nNewItem);
} 
static int _OnListFacDeleteItemFnc(CWnd *pWnd){
	 return ((CrptBaocaoquyettoanVTDialog*)pWnd)->OnListFacDeleteItem();
} 
static int _OnAddrptBaocaoquyettoanVTDialogFnc(CWnd *pWnd){
	 return ((CrptBaocaoquyettoanVTDialog*)pWnd)->OnAddrptBaocaoquyettoanVTDialog();
} 
static int _OnEditrptBaocaoquyettoanVTDialogFnc(CWnd *pWnd){
	 return ((CrptBaocaoquyettoanVTDialog*)pWnd)->OnEditrptBaocaoquyettoanVTDialog();
} 
static int _OnDeleterptBaocaoquyettoanVTDialogFnc(CWnd *pWnd){
	 return ((CrptBaocaoquyettoanVTDialog*)pWnd)->OnDeleterptBaocaoquyettoanVTDialog();
} 
static int _OnSaverptBaocaoquyettoanVTDialogFnc(CWnd *pWnd){
	 return ((CrptBaocaoquyettoanVTDialog*)pWnd)->OnSaverptBaocaoquyettoanVTDialog();
} 
static int _OnCancelrptBaocaoquyettoanVTDialogFnc(CWnd *pWnd){
	 return ((CrptBaocaoquyettoanVTDialog*)pWnd)->OnCancelrptBaocaoquyettoanVTDialog();
} 
CrptBaocaoquyettoanVTDialog::CrptBaocaoquyettoanVTDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 460;
	m_nDlgHeight = 520;
	SetDefaultValues();
}
CrptBaocaoquyettoanVTDialog::~CrptBaocaoquyettoanVTDialog(){
}
void CrptBaocaoquyettoanVTDialog::OnCreateComponents(){
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 60, 450, 480);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 85, 110, 110);
	m_wndFromDate.Create(this,115, 85, 235, 110); 
	m_wndToDateLabel.Create(this, _T("To Date"), 240, 85, 320, 110);
	m_wndToDate.Create(this,325, 85, 445, 110); 
	m_wndStockLabel.Create(this, _T("Stock"), 10, 115, 110, 140);
	m_wndStock.Create(this,115, 115, 445, 140); 
	m_wndTypeLabel.Create(this, _T("Type"), 10, 145, 110, 170);
	m_wndType.Create(this,115, 145, 445, 170); 
	m_wndObjectLabel.Create(this, _T("Object"), 10, 175, 110, 200);
	m_wndObject.Create(this,115, 175, 445, 200); 
	m_wndPrintPreview.Create(this, _T("Print Pre&view"), 196, 485, 276, 510);
	m_wndExport.Create(this, _T("&Export"), 281, 485, 361, 510);
	m_wndClose.Create(this, _T("&Close"), 366, 485, 446, 510);
	m_wndListFac.Create(this,10, 205, 445, 475); 
	m_wndTitle.Create(this, _T("Title"), 5, 5, 450, 55);

}
void CrptBaocaoquyettoanVTDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	m_wndStock.SetCheckValue(true);
	m_wndStock.LimitText(35);
	m_wndType.SetCheckValue(true);
	m_wndType.LimitText(35);
	m_wndObject.SetCheckValue(true);
	m_wndObject.LimitText(35);


	m_wndStock.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndStock.InsertColumn(1, _T("Description"), CFMT_TEXT, 220);


	m_wndType.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndType.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndObject.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndObject.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndListFac.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndListFac.InsertColumn(1, _T("Name"), CFMT_TEXT, 300);

}
void CrptBaocaoquyettoanVTDialog::OnSetWindowEvents(){
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndStock.SetEvent(WE_SELENDOK, _OnStockSelendokFnc);
	//m_wndStock.SetEvent(WE_SETFOCUS, _OnStockSetfocusFnc);
	//m_wndStock.SetEvent(WE_KILLFOCUS, _OnStockKillfocusFnc);
	m_wndStock.SetEvent(WE_SELCHANGE, _OnStockSelectChangeFnc);
	m_wndStock.SetEvent(WE_LOADDATA, _OnStockLoadDataFnc);
	//m_wndStock.SetEvent(WE_ADDNEW, _OnStockAddNewFnc);
	m_wndType.SetEvent(WE_SELENDOK, _OnTypeSelendokFnc);
	//m_wndType.SetEvent(WE_SETFOCUS, _OnTypeSetfocusFnc);
	//m_wndType.SetEvent(WE_KILLFOCUS, _OnTypeKillfocusFnc);
	m_wndType.SetEvent(WE_SELCHANGE, _OnTypeSelectChangeFnc);
	m_wndType.SetEvent(WE_LOADDATA, _OnTypeLoadDataFnc);
	//m_wndType.SetEvent(WE_ADDNEW, _OnTypeAddNewFnc);
	m_wndObject.SetEvent(WE_SELENDOK, _OnObjectSelendokFnc);
	//m_wndObject.SetEvent(WE_SETFOCUS, _OnObjectSetfocusFnc);
	//m_wndObject.SetEvent(WE_KILLFOCUS, _OnObjectKillfocusFnc);
	m_wndObject.SetEvent(WE_SELCHANGE, _OnObjectSelectChangeFnc);
	m_wndObject.SetEvent(WE_LOADDATA, _OnObjectLoadDataFnc);
	//m_wndObject.SetEvent(WE_ADDNEW, _OnObjectAddNewFnc);
	m_wndPrintPreview.SetEvent(WE_CLICK, _OnPrintPreviewSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndListFac.SetEvent(WE_SELCHANGE, _OnListFacSelectChangeFnc);
	m_wndListFac.SetEvent(WE_LOADDATA, _OnListFacLoadDataFnc);
	m_wndListFac.SetEvent(WE_DBLCLICK, _OnListFacDblClickFnc);
	m_wndListFac.AddEvent(1, _T("Delete"), _OnListFacDeleteItemFnc, 0, VK_DELETE, 0);

}
void CrptBaocaoquyettoanVTDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndStock.GetDlgCtrlID(), m_szStockKey);
	DDX_TextEx(pDX, m_wndType.GetDlgCtrlID(), m_szTypeKey);
	DDX_TextEx(pDX, m_wndObject.GetDlgCtrlID(), m_szObjectKey);

}
void CrptBaocaoquyettoanVTDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CrptBaocaoquyettoanVTDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CrptBaocaoquyettoanVTDialog::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szStockKey.Empty();
	m_szTypeKey.Empty();
	m_szObjectKey.Empty();

}
int CrptBaocaoquyettoanVTDialog::SetMode(int nMode){
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
/*void CrptBaocaoquyettoanVTDialog::OnFromDateChange(){
	
} */
/*void CrptBaocaoquyettoanVTDialog::OnFromDateSetfocus(){
	
} */
/*void CrptBaocaoquyettoanVTDialog::OnFromDateKillfocus(){
	
} */
int CrptBaocaoquyettoanVTDialog::OnFromDateCheckValue(){
	return 0;
} 
/*void CrptBaocaoquyettoanVTDialog::OnToDateChange(){
	
} */
/*void CrptBaocaoquyettoanVTDialog::OnToDateSetfocus(){
	
} */
/*void CrptBaocaoquyettoanVTDialog::OnToDateKillfocus(){
	
} */
int CrptBaocaoquyettoanVTDialog::OnToDateCheckValue(){
	return 0;
} 
void CrptBaocaoquyettoanVTDialog::OnStockSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CrptBaocaoquyettoanVTDialog::OnStockSelendok(){
	 
}
/*void CrptBaocaoquyettoanVTDialog::OnStockSetfocus(){
	
}*/
/*void CrptBaocaoquyettoanVTDialog::OnStockKillfocus(){
	
}*/
long CrptBaocaoquyettoanVTDialog::OnStockLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndStock.IsSearchKey() && !m_szStockKey.IsEmpty()){
	};
	m_wndStock.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndStock.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CrptBaocaoquyettoanVTDialog::OnStockAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CrptBaocaoquyettoanVTDialog::OnTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CrptBaocaoquyettoanVTDialog::OnTypeSelendok(){
	 
}
/*void CrptBaocaoquyettoanVTDialog::OnTypeSetfocus(){
	
}*/
/*void CrptBaocaoquyettoanVTDialog::OnTypeKillfocus(){
	
}*/
long CrptBaocaoquyettoanVTDialog::OnTypeLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndType.IsSearchKey() && !m_szTypeKey.IsEmpty()){
	};
	m_wndType.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndType.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CrptBaocaoquyettoanVTDialog::OnTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CrptBaocaoquyettoanVTDialog::OnObjectSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CrptBaocaoquyettoanVTDialog::OnObjectSelendok(){
	 
}
/*void CrptBaocaoquyettoanVTDialog::OnObjectSetfocus(){
	
}*/
/*void CrptBaocaoquyettoanVTDialog::OnObjectKillfocus(){
	
}*/
long CrptBaocaoquyettoanVTDialog::OnObjectLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndObject.IsSearchKey() && !m_szObjectKey.IsEmpty()){
	};
	m_wndObject.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndObject.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CrptBaocaoquyettoanVTDialog::OnObjectAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CrptBaocaoquyettoanVTDialog::OnPrintPreviewSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CrptBaocaoquyettoanVTDialog::OnExportSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CrptBaocaoquyettoanVTDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CrptBaocaoquyettoanVTDialog::OnListFacDblClick(){
	
} 
void CrptBaocaoquyettoanVTDialog::OnListFacSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CrptBaocaoquyettoanVTDialog::OnListFacDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CrptBaocaoquyettoanVTDialog::OnListFacLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndListFac.BeginLoad(); 
	m_wndListFac.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndListFac.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Name")), NULL);
		rs.MoveNext();
	}
	m_wndListFac.EndLoad(); 
	return nCount;
*/
	return 0;
}
int CrptBaocaoquyettoanVTDialog::OnAddrptBaocaoquyettoanVTDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CrptBaocaoquyettoanVTDialog::OnEditrptBaocaoquyettoanVTDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CrptBaocaoquyettoanVTDialog::OnDeleterptBaocaoquyettoanVTDialog(){
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
 		OnCancelrptBaocaoquyettoanVTDialog(); 
 	}
	return 0;
}
int CrptBaocaoquyettoanVTDialog::OnSaverptBaocaoquyettoanVTDialog(){
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
 		//OnrptBaocaoquyettoanVTDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CrptBaocaoquyettoanVTDialog::OnCancelrptBaocaoquyettoanVTDialog(){
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
int CrptBaocaoquyettoanVTDialog::OnrptBaocaoquyettoanVTDialogListLoadData(){
	return 0;
}
