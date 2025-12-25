#include "FAMComponents.h"
#include "FAMComponentsDialog.h"
#include "MainFrm.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CFAMComponents *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CFAMComponents *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CFAMComponents *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CFAMComponents *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CFAMComponents *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CFAMComponents *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CFAMComponents *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CFAMComponents *)pWnd)->OnToDateCheckValue();
} 
/*static void _OnOrderNoChangeFnc(CWnd *pWnd){
	((CFAMComponents *)pWnd)->OnOrderNoChange();
} */
/*static void _OnOrderNoSetfocusFnc(CWnd *pWnd){
	((CFAMComponents *)pWnd)->OnOrderNoSetfocus();} */ 
/*static void _OnOrderNoKillfocusFnc(CWnd *pWnd){
	((CFAMComponents *)pWnd)->OnOrderNoKillfocus();
} */
static int _OnOrderNoCheckValueFnc(CWnd *pWnd){
	return ((CFAMComponents *)pWnd)->OnOrderNoCheckValue();
} 
static void _OnSearchSelectFnc(CWnd *pWnd){
	CFAMComponents *pVw = (CFAMComponents *)pWnd;
	pVw->OnSearchSelect();
} 
static long _OnOrderListLoadDataFnc(CWnd *pWnd){
	return ((CFAMComponents*)pWnd)->OnOrderListLoadData();
} 
static void _OnOrderListDblClickFnc(CWnd *pWnd){
	((CFAMComponents*)pWnd)->OnOrderListDblClick();
} 
static void _OnOrderListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CFAMComponents*)pWnd)->OnOrderListSelectChange(nOldItem, nNewItem);
} 
static int _OnOrderListDeleteItemFnc(CWnd *pWnd){
	 return ((CFAMComponents*)pWnd)->OnOrderListDeleteItem();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CFAMComponents *pVw = (CFAMComponents *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CFAMComponents *pVw = (CFAMComponents *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CFAMComponents *pVw = (CFAMComponents *)pWnd;
	pVw->OnDeleteSelect();
}

static void _OnViewSelectFnc(CWnd *pWnd){
	CFAMComponents *pVw = (CFAMComponents *)pWnd;
	pVw->OnViewSelect();
}
static int _OnAddFAMComponentsFnc(CWnd *pWnd){
	 return ((CFAMComponents*)pWnd)->OnAddFAMComponents();
} 
static int _OnEditFAMComponentsFnc(CWnd *pWnd){
	 return ((CFAMComponents*)pWnd)->OnEditFAMComponents();
} 
static int _OnDeleteFAMComponentsFnc(CWnd *pWnd){
	 return ((CFAMComponents*)pWnd)->OnDeleteFAMComponents();
} 
static int _OnSaveFAMComponentsFnc(CWnd *pWnd){
	 return ((CFAMComponents*)pWnd)->OnSaveFAMComponents();
} 
static int _OnCancelFAMComponentsFnc(CWnd *pWnd){
	 return ((CFAMComponents*)pWnd)->OnCancelFAMComponents();
} 
CFAMComponents::CFAMComponents(){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CFAMComponents::~CFAMComponents(){
}
void CFAMComponents::OnCreateComponents(){
	m_wndSearchInfomation.Create(this, _T("Search Infomation"), 5, 5, 805, 60);
	m_wndOrderListTitle.Create(this, _T("Order List"), 5, 65, 805, 595);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 245, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 250, 30, 330, 55);
	m_wndToDate.Create(this,335, 30, 485, 55); 
	m_wndOrderNoLabel.Create(this, _T("Order No"), 490, 30, 570, 55);
	m_wndOrderNo.Create(this,575, 30, 765, 55); 
	m_wndSearch.Create(this, _T("@"), 770, 30, 800, 55);
	m_wndOrderList.Create(this,10, 90, 800, 590); 
	m_wndAdd.Create(this, _T("Add"), 555, 600, 635, 625);
	m_wndEdit.Create(this, _T("Edit"), 640, 600, 720, 625);
	m_wndDelete.Create(this, _T("Delete"), 725, 600, 805, 625);
	m_wndView.Create(this, _T("View"), 470, 600, 550, 625);
}
void CFAMComponents::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndOrderNo.SetLimitText(35);

	m_wndOrderList.InsertColumn(0, _T("STT"), CFMT_TEXT, 50);
	m_wndOrderList.InsertColumn(1, _T("Order No"), CFMT_TEXT, 250);
	m_wndOrderList.InsertColumn(2, _T("Order Date"), CFMT_TEXT, 150);
	m_wndOrderList.InsertColumn(3, _T("Status"), CFMT_TEXT, 100);
	m_wndOrderList.InsertColumn(4, _T("User"), CFMT_TEXT, 0);

}
void CFAMComponents::OnSetWindowEvents(){
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
void CFAMComponents::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Text(pDX, m_wndOrderNo.GetDlgCtrlID(), m_szOrderNo);

}
void CFAMComponents::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CFAMComponents::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CFAMComponents::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szOrderNo.Empty();

}
int CFAMComponents::SetMode(int nMode){
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
/*void CFAMComponents::OnFromDateChange(){
	
} */
/*void CFAMComponents::OnFromDateSetfocus(){
	
} */
/*void CFAMComponents::OnFromDateKillfocus(){
	
} */
int CFAMComponents::OnFromDateCheckValue(){
	return 0;
} 
/*void CFAMComponents::OnToDateChange(){
	
} */
/*void CFAMComponents::OnToDateSetfocus(){
	
} */
/*void CFAMComponents::OnToDateKillfocus(){
	
} */
int CFAMComponents::OnToDateCheckValue(){
	return 0;
} 
/*void CFAMComponents::OnOrderNoChange(){
	
} */
/*void CFAMComponents::OnOrderNoSetfocus(){
	
} */
/*void CFAMComponents::OnOrderNoKillfocus(){
	
} */
int CFAMComponents::OnOrderNoCheckValue(){
	return 0;
} 
void CFAMComponents::OnSearchSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnOrderListLoadData();
} 
void CFAMComponents::OnOrderListDblClick(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(m_szStatus == _T("N"))
	{
		OnEditSelect();
	}
	else
		OnViewSelect();

} 
void CFAMComponents::OnOrderListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_szOrderNo = m_wndOrderList.GetItemText(nNewItem, 1);
	m_szStatus = m_wndOrderList.GetItemText(nNewItem, 3);
	m_szUser = m_wndOrderList.GetItemText(nNewItem, 4);
	SetMode(VM_EDIT);
} 
int CFAMComponents::OnOrderListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnDeleteSelect();
	 return 0;
} 
long CFAMComponents::OnOrderListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szIndex;
	szWhere.Empty();
	m_wndOrderList.BeginLoad(); 
	int nCount = 0;
	int nIndex = 1;
	if(!m_szFromDate.IsEmpty() && !m_szToDate.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and fc_orderdate between TO_TIMESTAMP('%s','YYYY-MM-DD HH24:MI:SS') and TO_TIMESTAMP('%s','YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
	}
	if(!m_szOrderNo.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and fc_orderno = '%s'"), m_szOrderNo);
	}
	szSQL.Format(_T("SELECT * FROM fam_components WHERE fc_org_id = '%s' %s"), pMF->GetModuleID(),szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		szIndex.Format(_T("%d"), nIndex);
		m_wndOrderList.AddItems(
			szIndex,
			rs.GetValue(_T("fc_orderno")),
			CDateTime::Convert(rs.GetValue(_T("fc_orderdate")), yyyymmdd|hhmmss, ddmmyyyy|hhmmss),
			rs.GetValue(_T("fc_status")),
			rs.GetValue(_T("fc_createdby")),
			NULL);
		rs.MoveNext();
		nIndex++;
	}
	m_wndOrderList.EndLoad(); 
	return nCount;
}
void CFAMComponents::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(pMF->CheckPermission(_T("19.01")) || pMF->GetCurrentUser() == _T("admin") || pMF->GetCurrentUser() == m_szUser)
	{
		CFAMComponentsDialog dlg(pMF);
		dlg.m_szOrderNo = m_szOrderNo;
		dlg.SetMode(VM_ADD);
		dlg.DoModal();
	}else
	{
		ShowMessageBox(_T("Permission denined"), MB_OK | MB_ICONERROR);
		return;
	}
} 
void CFAMComponents::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(pMF->CheckPermission(_T("19.02")) || pMF->GetCurrentUser() == _T("admin") || pMF->GetCurrentUser() == m_szUser)
	{
		if(m_szStatus == _T("Y"))
		{
			MessageBox(_T("Can not edit with current status."), 0, MB_ICONWARNING);
		}
		else
		{
			CFAMComponentsDialog dlg(pMF);
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
void CFAMComponents::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(pMF->CheckPermission(_T("19.03")) || pMF->GetCurrentUser() == _T("admin") || pMF->GetCurrentUser() == m_szUser)
	{
		if(m_szStatus == _T("Y"))
		{
			MessageBox(_T("Can not delete with current status."), 0, MB_ICONWARNING);
		}else{
			OnDeleteFAMComponents();
		}
	}else
	{
		ShowMessageBox(_T("Permission denined"), MB_OK | MB_ICONERROR);
		return;
	}
} 
void CFAMComponents::OnViewSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CFAMComponentsDialog dlg(pMF);
	dlg.m_szOrderNo = m_szOrderNo;
	dlg.m_szStatus = m_szStatus;
	dlg.SetMode(VM_VIEW);
	dlg.DoModal();
}
int CFAMComponents::OnAddFAMComponents(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CFAMComponents::OnEditFAMComponents(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CFAMComponents::OnDeleteFAMComponents(){
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
	szSQL.Format(_T("SELECT count(*) FROM fam_components_line where fcl_orderno = '%s' "), m_szOrderNo);
	rs.ExecSQL(szSQL);
	nCount = rs.GetIntValue();
	if(nCount > 1)
	{
		szSQL.Format(_T(" DELETE FROM fam_components_line WHERE fcl_orderno = '%s'"), m_szOrderNo);
		pMF->ExecSQL(szSQL);
	}
	szSQL.Format(_T("DELETE FROM fam_components WHERE fc_orderno = '%s' and fc_org_id = '%s'"), m_szOrderNo, pMF->GetModuleID());
	_fmsg(_T("Del phieu : %s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
		OnOrderListLoadData();
 	}
	return 0;
}
int CFAMComponents::OnSaveFAMComponents(){
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

 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
 		//OnFAMComponentsListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CFAMComponents::OnCancelFAMComponents(){
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
int CFAMComponents::OnFAMComponentsListLoadData(){
	return 0;
}
