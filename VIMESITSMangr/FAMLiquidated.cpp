#include "FAMLiquidated.h"
#include "FAMLiquidatedDialog.h"
#include "MainFrm.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CFAMLiquidated *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CFAMLiquidated *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CFAMLiquidated *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CFAMLiquidated *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CFAMLiquidated *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CFAMLiquidated *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CFAMLiquidated *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CFAMLiquidated *)pWnd)->OnToDateCheckValue();
} 
static void _OnSearchSelectFnc(CWnd *pWnd){
	CFAMLiquidated *pVw = (CFAMLiquidated *)pWnd;
	pVw->OnSearchSelect();
} 
/*static void _OnOrderNoChangeFnc(CWnd *pWnd){
	((CFAMLiquidated *)pWnd)->OnOrderNoChange();
} */
/*static void _OnOrderNoSetfocusFnc(CWnd *pWnd){
	((CCFAMLiquidated *)pWnd)->OnOrderNoSetfocus();} */ 
/*static void _OnOrderNoKillfocusFnc(CWnd *pWnd){
	((CFAMLiquidated *)pWnd)->OnOrderNoKillfocus();
} */
static int _OnOrderNoCheckValueFnc(CWnd *pWnd){
	return ((CFAMLiquidated *)pWnd)->OnOrderNoCheckValue();
} 
static long _OnOrderListLoadDataFnc(CWnd *pWnd){
	return ((CFAMLiquidated*)pWnd)->OnOrderListLoadData();
} 
static void _OnOrderListDblClickFnc(CWnd *pWnd){
	((CFAMLiquidated*)pWnd)->OnOrderListDblClick();
} 
static void _OnOrderListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CFAMLiquidated*)pWnd)->OnOrderListSelectChange(nOldItem, nNewItem);
} 
static int _OnOrderListDeleteItemFnc(CWnd *pWnd){
	 return ((CFAMLiquidated*)pWnd)->OnOrderListDeleteItem();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CFAMLiquidated *pVw = (CFAMLiquidated *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CFAMLiquidated *pVw = (CFAMLiquidated *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CFAMLiquidated *pVw = (CFAMLiquidated *)pWnd;
	pVw->OnViewSelect();
}
static void _OnViewSelectFnc(CWnd *pWnd){
	CFAMLiquidated *pVw = (CFAMLiquidated *)pWnd;
	pVw->OnDeleteSelect();
} 
static int _OnAddFAMLiquidatedFnc(CWnd *pWnd){
	 return ((CFAMLiquidated*)pWnd)->OnAddFAMLiquidated();
} 
static int _OnEditFAMLiquidatedFnc(CWnd *pWnd){
	 return ((CFAMLiquidated*)pWnd)->OnEditFAMLiquidated();
} 
static int _OnDeleteFAMLiquidatedFnc(CWnd *pWnd){
	 return ((CFAMLiquidated*)pWnd)->OnDeleteFAMLiquidated();
} 
static int _OnSaveFAMLiquidatedFnc(CWnd *pWnd){
	 return ((CFAMLiquidated*)pWnd)->OnSaveFAMLiquidated();
} 
static int _OnCancelFAMLiquidatedFnc(CWnd *pWnd){
	 return ((CFAMLiquidated*)pWnd)->OnCancelFAMLiquidated();
} 
CFAMLiquidated::CFAMLiquidated(){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CFAMLiquidated::~CFAMLiquidated(){
}
void CFAMLiquidated::OnCreateComponents(){
	m_wndSearchInfomation.Create(this, _T("Search Infomation"), 5, 5, 805, 60);
	m_wndOrderListTitle.Create(this, _T("Order List"), 5, 65, 805, 595);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 245, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 250, 30, 330, 55);
	m_wndToDate.Create(this,336, 30, 486, 55); 
	m_wndOrderNoLabel.Create(this, _T("Order No"), 490, 30, 570, 55);
	m_wndOrderNo.Create(this,575, 30, 765, 55); 
	m_wndSearch.Create(this, _T("@"), 770, 30, 800, 55);
	m_wndOrderList.Create(this,10, 90, 800, 590); 
	m_wndAdd.Create(this, _T("Add"), 555, 600, 635, 625);
	m_wndEdit.Create(this, _T("Edit"), 640, 600, 720, 625);
	m_wndDelete.Create(this, _T("Delete"), 725, 600, 805, 625);
	m_wndView.Create(this, _T("View"), 470, 600, 550, 625);

}
void CFAMLiquidated::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	m_wndOrderList.InsertColumn(0, _T("STT"), CFMT_TEXT, 50);
	m_wndOrderList.InsertColumn(1, _T("Order No"), CFMT_TEXT, 250);
	m_wndOrderList.InsertColumn(2, _T("Order Date"), CFMT_TEXT, 150);
	m_wndOrderList.InsertColumn(3, _T("Status"), CFMT_TEXT, 100);
	m_wndOrderList.InsertColumn(4, _T("User"), CFMT_TEXT, 0);
}
void CFAMLiquidated::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
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
void CFAMLiquidated::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);

}
void CFAMLiquidated::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CFAMLiquidated::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CFAMLiquidated::SetDefaultValues(){
	m_szOrderNo.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();

}
int CFAMLiquidated::SetMode(int nMode){
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
/*void CFAMLiquidated::OnFromDateChange(){
	
} */
/*void CFAMLiquidated::OnFromDateSetfocus(){
	
} */
/*void CFAMLiquidated::OnFromDateKillfocus(){
	
} */
int CFAMLiquidated::OnFromDateCheckValue(){
	return 0;
} 
/*void CFAMLiquidated::OnToDateChange(){
	
} */
/*void CFAMLiquidated::OnToDateSetfocus(){
	
} */
/*void CFAMLiquidated::OnToDateKillfocus(){
	
} */
int CFAMLiquidated::OnToDateCheckValue(){
	return 0;
} 
/*void CFAMLiquidated::OnOrderNoChange(){
	
} */
/*void CFAMLiquidated::OnOrderNoSetfocus(){
	
} */
/*void CFAMLiquidated::OnOrderNoKillfocus(){
	
} */
int CFAMLiquidated::OnOrderNoCheckValue(){
	return 0;
} 
void CFAMLiquidated::OnSearchSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnOrderListLoadData();
} 
void CFAMLiquidated::OnOrderListDblClick(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(m_szStatus == _T("N"))
	{
		OnEditSelect();
	}
	else
		OnViewSelect();
} 
void CFAMLiquidated::OnOrderListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_szOrderNo = m_wndOrderList.GetItemText(nNewItem, 1);
	m_szStatus = m_wndOrderList.GetItemText(nNewItem, 3);
	m_szUser = m_wndOrderList.GetItemText(nNewItem, 4);
	SetMode(VM_EDIT);
} 
int CFAMLiquidated::OnOrderListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnDeleteSelect();
	 return 0;
} 
long CFAMLiquidated::OnOrderListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szIndex;
	szWhere.Empty();
	m_wndOrderList.BeginLoad(); 
	int nCount = 0;
	int nIndex = 1;
	UpdateData(TRUE);
	if(!m_szFromDate.IsEmpty() && !m_szToDate.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and fl_orderdate between to_timestamp('%s','YYYY-MM-DD HH24:MI:SS') and to_timestamp('%s' ,'YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
	}
	if(!m_szOrderNo.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and fl_orderno = '%s'"), m_szOrderNo);
	}
	szSQL.Format(_T("SELECT * FROM fam_liquidated WHERE fl_org_id = '%s' %s"), pMF->GetModuleID(), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		szIndex.Format(_T("%d"), nIndex);
		m_wndOrderList.AddItems(
			szIndex,
			rs.GetValue(_T("fl_orderno")),
			CDateTime::Convert(rs.GetValue(_T("fl_orderdate")), yyyymmdd|hhmmss, ddmmyyyy|hhmmss),
			rs.GetValue(_T("fl_status")),
			rs.GetValue(_T("fl_createdby")), NULL);
		rs.MoveNext();
		nIndex++;
	}
	m_wndOrderList.EndLoad(); 
	return nCount;
}
void CFAMLiquidated::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(pMF->CheckPermission(_T("15.01")) || pMF->GetCurrentUser() == _T("admin") || pMF->GetCurrentUser() == m_szUser)
	{
		CFAMLiquidatedDialog dlg(pMF);
		dlg.m_szOrderNo = m_szOrderNo;
		dlg.SetMode(VM_ADD);
		dlg.DoModal();
	}else
	{
		ShowMessageBox(_T("Permission denined"), MB_OK | MB_ICONERROR);
		return;
	}
} 
void CFAMLiquidated::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(pMF->CheckPermission(_T("15.02")) || pMF->GetCurrentUser() == _T("admin") || pMF->GetCurrentUser() == m_szUser)
	{
		if(m_szStatus == _T("Y"))
		{
			MessageBox(_T("Can not edit with current status."), 0, MB_ICONWARNING);
		}
		else
		{
			CFAMLiquidatedDialog dlg(pMF);
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
void CFAMLiquidated::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(pMF->CheckPermission(_T("15.03")) || pMF->GetCurrentUser() == _T("admin") || pMF->GetCurrentUser() == m_szUser)
	{
		if(m_szStatus == _T("Y"))
		{
			MessageBox(_T("Can not delete with current status."), 0, MB_ICONWARNING);
		}else{
			OnDeleteFAMLiquidated();
		}
	}else
	{
		ShowMessageBox(_T("Permission denined"), MB_OK | MB_ICONERROR);
		return;
	}
}
void CFAMLiquidated::OnViewSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CFAMLiquidatedDialog dlg(pMF);
	dlg.m_szOrderNo = m_szOrderNo;
	dlg.m_szStatus = m_szStatus;
	dlg.SetMode(VM_VIEW);
	dlg.DoModal();
}
int CFAMLiquidated::OnAddFAMLiquidated(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CFAMLiquidated::OnEditFAMLiquidated(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CFAMLiquidated::OnDeleteFAMLiquidated(){
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
	szSQL.Format(_T("SELECT count(*) FROM fam_liquidated_line where fll_orderno = '%s'"), m_szOrderNo);
	rs.ExecSQL(szSQL);
	nCount = rs.GetIntValue();
	if(nCount > 1)
	{
		szSQL.Format(_T(" DELETE FROM fam_liquidated_line WHERE fll_orderno = '%s'"), m_szOrderNo);
		pMF->ExecSQL(szSQL);
	}
	szSQL.Format(_T("DELETE FROM fam_liquidated WHERE fl_orderno = '%s'"), m_szOrderNo);
	_fmsg(_T("Del phieu : %s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
		OnOrderListLoadData();
 	}
	return 0;
}
int CFAMLiquidated::OnSaveFAMLiquidated(){
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
 		//OnFAMLiquidatedListLoadData(); 
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CFAMLiquidated::OnCancelFAMLiquidated(){
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
int CFAMLiquidated::OnFAMLiquidatedListLoadData(){
	return 0;
}
