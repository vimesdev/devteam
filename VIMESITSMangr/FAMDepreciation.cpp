#include "FAMDepreciation.h"
#include "FAMDepreciationDialog.h"
#include "MainFrm.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CFAMDepreciation *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CFAMDepreciation *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CFAMDepreciation *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CFAMDepreciation *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CFAMDepreciation *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CFAMDepreciation *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CFAMDepreciation *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CFAMDepreciation *)pWnd)->OnToDateCheckValue();
} 
/*static void _OnOrderNoChangeFnc(CWnd *pWnd){
	((CFAMDepreciation *)pWnd)->OnOrderNoChange();
} */
/*static void _OnOrderNoSetfocusFnc(CWnd *pWnd){
	((CFAMDepreciation *)pWnd)->OnOrderNoSetfocus();} */ 
/*static void _OnOrderNoKillfocusFnc(CWnd *pWnd){
	((CFAMDepreciation *)pWnd)->OnOrderNoKillfocus();
} */
static int _OnOrderNoCheckValueFnc(CWnd *pWnd){
	return ((CFAMDepreciation *)pWnd)->OnOrderNoCheckValue();
} 
static void _OnSearchSelectFnc(CWnd *pWnd){
	CFAMDepreciation *pVw = (CFAMDepreciation *)pWnd;
	pVw->OnSearchSelect();
} 
static long _OnOrderListLoadDataFnc(CWnd *pWnd){
	return ((CFAMDepreciation*)pWnd)->OnOrderListLoadData();
} 
static void _OnOrderListDblClickFnc(CWnd *pWnd){
	((CFAMDepreciation*)pWnd)->OnOrderListDblClick();
} 
static void _OnOrderListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CFAMDepreciation*)pWnd)->OnOrderListSelectChange(nOldItem, nNewItem);
} 
static int _OnOrderListDeleteItemFnc(CWnd *pWnd){
	 return ((CFAMDepreciation*)pWnd)->OnOrderListDeleteItem();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CFAMDepreciation *pVw = (CFAMDepreciation *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CFAMDepreciation *pVw = (CFAMDepreciation *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CFAMDepreciation *pVw = (CFAMDepreciation *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnViewSelectFnc(CWnd *pWnd){
	CFAMDepreciation *pVw = (CFAMDepreciation *)pWnd;
	pVw->OnViewSelect();
}
static int _OnAddFAMDepreciationFnc(CWnd *pWnd){
	 return ((CFAMDepreciation*)pWnd)->OnAddFAMDepreciation();
} 
static int _OnEditFAMDepreciationFnc(CWnd *pWnd){
	 return ((CFAMDepreciation*)pWnd)->OnEditFAMDepreciation();
} 
static int _OnDeleteFAMDepreciationFnc(CWnd *pWnd){
	 return ((CFAMDepreciation*)pWnd)->OnDeleteFAMDepreciation();
} 
static int _OnSaveFAMDepreciationFnc(CWnd *pWnd){
	 return ((CFAMDepreciation*)pWnd)->OnSaveFAMDepreciation();
} 
static int _OnCancelFAMDepreciationFnc(CWnd *pWnd){
	 return ((CFAMDepreciation*)pWnd)->OnCancelFAMDepreciation();
} 
CFAMDepreciation::CFAMDepreciation(){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CFAMDepreciation::~CFAMDepreciation(){
}
void CFAMDepreciation::OnCreateComponents(){
	m_wndSearchInfomation.Create(this, _T("Search Infomation"), 5, 5, 805, 60);
	m_wndOrderListTitle.Create(this, _T("Order List"), 5, 65, 805, 595);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 255, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 260, 30, 340, 55);
	m_wndToDate.Create(this,345, 30, 505, 55); 
	m_wndOrderNoLabel.Create(this, _T("Order No"), 510, 30, 590, 55);
	m_wndOrderNo.Create(this,595, 30, 765, 55); 
	m_wndSearch.Create(this, _T("@"), 770, 30, 800, 55);
	m_wndOrderList.Create(this,10, 90, 800, 590); 
	m_wndAdd.Create(this, _T("Add"), 555, 600, 635, 625);
	m_wndEdit.Create(this, _T("Edit"), 640, 600, 720, 625);
	m_wndDelete.Create(this, _T("Delete"), 725, 600, 805, 625);
	m_wndView.Create(this, _T("View"), 470, 600, 550, 625);
}
void CFAMDepreciation::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetCheckValue(true);
	m_wndOrderNo.SetLimitText(1024);

	m_wndOrderList.InsertColumn(0, _T("STT"), CFMT_TEXT, 50);
	m_wndOrderList.InsertColumn(1, _T("Order No"), CFMT_TEXT, 150);
	m_wndOrderList.InsertColumn(2, _T("Order Date"), CFMT_TEXT, 150);
	m_wndOrderList.InsertColumn(3, _T("Status"), CFMT_TEXT, 80);
	m_wndOrderList.InsertColumn(4, _T("Note"), CFMT_TEXT, 200);
	m_wndOrderList.InsertColumn(5, _T("User"), CFMT_TEXT, 0);

}
void CFAMDepreciation::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	//m_wndOrderNo.SetEvent(WE_CHANGE, _OnOrderNoChangeFnc);
	//m_wndOrderNo.SetEvent(WE_SETFOCUS, _OnOrderNoSetfocusFnc);
	//m_wndOrderNo.SetEvent(WE_KILLFOCUS, _OnOrderNoKillfocusFnc);
	m_wndOrderNo.SetEvent(WE_CHECKVALUE, _OnOrderNoCheckValueFnc);
	m_wndSearch.SetEvent(WE_CLICK, _OnSearchSelectFnc);
	m_wndOrderList.SetEvent(WE_SELCHANGE, _OnOrderListSelectChangeFnc);
	m_wndOrderList.SetEvent(WE_LOADDATA, _OnOrderListLoadDataFnc);
	m_wndOrderList.SetEvent(WE_DBLCLICK, _OnOrderListDblClickFnc);
	m_wndOrderList.AddEvent(1, _T("Delete"), _OnOrderListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndView.SetEvent(WE_CLICK, _OnViewSelectFnc);
	SetMode(VM_VIEW);

}
void CFAMDepreciation::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Text(pDX, m_wndOrderNo.GetDlgCtrlID(), m_szOrderNo);

}
void CFAMDepreciation::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CFAMDepreciation::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CFAMDepreciation::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szOrderNo.Empty();

}
int CFAMDepreciation::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, 2, 3, 4, -1);
 			SetDefaultValues();
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, 2, 3, 4, -1);
 			break;
 		case VM_VIEW: 
 			EnableControls(TRUE);
 			EnableButtons(FALSE, 2, 3, -1);
			m_szFromDate = m_szToDate = pMF->GetSysDate();
			m_szFromDate += _T("00:00");
			m_szToDate += _T("23:59");
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
/*void CFAMDepreciation::OnFromDateChange(){
	
} */
/*void CFAMDepreciation::OnFromDateSetfocus(){
	
} */
/*void CFAMDepreciation::OnFromDateKillfocus(){
	
} */
int CFAMDepreciation::OnFromDateCheckValue(){
	return 0;
} 
/*void CFAMDepreciation::OnToDateChange(){
	
} */
/*void CFAMDepreciation::OnToDateSetfocus(){
	
} */
/*void CFAMDepreciation::OnToDateKillfocus(){
	
} */
int CFAMDepreciation::OnToDateCheckValue(){
	if(CDateTime(m_szToDate) < CDateTime(m_szFromDate))
		return -1;
	return 0;
} 
/*void CFAMDepreciation::OnOrderNoChange(){
	
} */
/*void CFAMDepreciation::OnOrderNoSetfocus(){
	
} */
/*void CFAMDepreciation::OnOrderNoKillfocus(){
	
} */
int CFAMDepreciation::OnOrderNoCheckValue(){
	return 0;
} 
void CFAMDepreciation::OnSearchSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnOrderListLoadData();
} 
void CFAMDepreciation::OnOrderListDblClick(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(m_szStatus == _T("N"))
	{
		OnEditSelect();
	}
	else
		OnViewSelect();

} 
void CFAMDepreciation::OnOrderListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_szStatus = m_wndOrderList.GetItemText(nNewItem, 3);
	m_szOrderNo = m_wndOrderList.GetItemText(nNewItem, 1);
	m_szUser = m_wndOrderList.GetItemText(nNewItem, 5);
	SetMode(VM_EDIT);
} 
int CFAMDepreciation::OnOrderListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnDeleteSelect();
	return 0;
} 
long CFAMDepreciation::OnOrderListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szIndex;
	int nIndex = 1;
	if(!m_szFromDate.IsEmpty() && !m_szToDate.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and fd_orderdate between TO_TIMESTAMP('%s','YYYY-MM-DD HH24:MI:SS') and TO_TIMESTAMP('%s','YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
	}
	if(!m_szOrderNo.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and fd_orderno = '%s'"), m_szOrderNo);
	}
	m_wndOrderList.BeginLoad(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT * FROM fam_depreciate WHERE 1=1 %s"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		szIndex.Format(_T("%d"), nIndex);
		m_wndOrderList.AddItems(
			szIndex,
			rs.GetValue(_T("fd_orderno")),
			CDateTime::Convert(rs.GetValue(_T("fd_orderdate")), yyyymmdd|hhmmss, ddmmyyyy|hhmmss), 
			rs.GetValue(_T("fd_status")),
			rs.GetValue(_T("fd_note")),
			rs.GetValue(_T("fd_createdby")),NULL);
		rs.MoveNext();
		nIndex++;
	}
	m_wndOrderList.EndLoad(); 
	return nCount;

}
void CFAMDepreciation::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(pMF->CheckPermission(_T("16.01")) || pMF->GetCurrentUser() == _T("admin") || pMF->GetCurrentUser() == m_szUser)
	{
		CFAMDepreciationDialog dlg(pMF);
		dlg.m_szOrderNo = m_szOrderNo;
		dlg.SetMode(VM_ADD);
		dlg.DoModal();
	}else
	{
		ShowMessageBox(_T("Permission denined"), MB_OK | MB_ICONERROR);
		return;
	}
} 
void CFAMDepreciation::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(pMF->GetCurrentUser() == _T("admin")|| pMF->CheckPermission(_T("16.02")) || pMF->GetCurrentUser() == m_szUser)
	{
		if(m_szStatus == _T("Y"))
		{
			MessageBox(_T("Can not edit with current status."), 0, MB_ICONWARNING);
		}
		else
		{
			CFAMDepreciationDialog dlg(pMF);
			dlg.m_szStatus = m_szStatus;
			dlg.m_szOrderNo = m_szOrderNo;
			dlg.SetMode(VM_EDIT);
			dlg.DoModal();
		}
	}else
		{
			ShowMessageBox(_T("Permission denined"), MB_OK | MB_ICONERROR);
			return;
		}
} 
void CFAMDepreciation::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(pMF->GetCurrentUser() == _T("admin") || pMF->CheckPermission(_T("16.03")) || pMF->GetCurrentUser() == m_szUser)
	{
		if(m_szStatus == _T("Y"))
		{
			MessageBox(_T("Can not delete with current status."), 0, MB_ICONWARNING);
		}else{
			OnDeleteFAMDepreciation();
		}
	}else
	{
		ShowMessageBox(_T("Permission denined"), MB_OK | MB_ICONERROR);
		return;
	}
} 
void CFAMDepreciation::OnViewSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CFAMDepreciationDialog dlg(pMF);
	dlg.m_szOrderNo = m_szOrderNo;
	dlg.m_szStatus = m_szStatus;
	dlg.SetMode(VM_VIEW);
	dlg.DoModal();
}
int CFAMDepreciation::OnAddFAMDepreciation(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CFAMDepreciation::OnEditFAMDepreciation(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CFAMDepreciation::OnDeleteFAMDepreciation(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
	CRecord rs(&pMF->m_db);
	int nCount;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
	if(m_szStatus == _T("Y"))
		return -1;
	szSQL.Format(_T("SELECT count(*) FROM fam_depreciate_line where fdl_orderno = '%s'"), m_szOrderNo);
	rs.ExecSQL(szSQL);
	nCount = rs.GetIntValue();
	if(nCount > 1)
	{
		szSQL.Format(_T(" DELETE FROM fam_depreciate_line WHERE fdl_orderno = '%s'"), m_szOrderNo);
		pMF->ExecSQL(szSQL);
	}
	szSQL.Format(_T("DELETE FROM fam_depreciate WHERE fd_orderno = '%s'"), m_szOrderNo);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
		OnOrderListLoadData();
 	}
	return 0;
}
int CFAMDepreciation::OnSaveFAMDepreciation(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
	if(m_szStatus == _T("Y"))
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

 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
 		//OnFAMDepreciationListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CFAMDepreciation::OnCancelFAMDepreciation(){
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
int CFAMDepreciation::OnFAMDepreciationListLoadData(){
	return 0;
}
