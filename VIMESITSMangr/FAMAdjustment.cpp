#include "FAMAdjustment.h"
#include "MainFrm.h"
#include "FAMAdjustmentDialog.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CFAMAdjustment *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CFAMAdjustment *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CFAMAdjustment *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CFAMAdjustment *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CFAMAdjustment *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CFAMAdjustment *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CFAMAdjustment *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CFAMAdjustment *)pWnd)->OnToDateCheckValue();
} 
/*static void _OnOrderNoChangeFnc(CWnd *pWnd){
	((CFAMAdjustment *)pWnd)->OnOrderNoChange();
} */
/*static void _OnOrderNoSetfocusFnc(CWnd *pWnd){
	((CFAMAdjustment *)pWnd)->OnOrderNoSetfocus();} */ 
/*static void _OnOrderNoKillfocusFnc(CWnd *pWnd){
	((CFAMAdjustment *)pWnd)->OnOrderNoKillfocus();
} */
static int _OnOrderNoCheckValueFnc(CWnd *pWnd){
	return ((CFAMAdjustment *)pWnd)->OnOrderNoCheckValue();
} 
static void _OnSearchSelectFnc(CWnd *pWnd){
	CFAMAdjustment *pVw = (CFAMAdjustment *)pWnd;
	pVw->OnSearchSelect();
} 
static long _OnOrderListLoadDataFnc(CWnd *pWnd){
	return ((CFAMAdjustment*)pWnd)->OnOrderListLoadData();
} 
static void _OnOrderListDblClickFnc(CWnd *pWnd){
	((CFAMAdjustment*)pWnd)->OnOrderListDblClick();
} 
static void _OnOrderListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CFAMAdjustment*)pWnd)->OnOrderListSelectChange(nOldItem, nNewItem);
} 
static int _OnOrderListDeleteItemFnc(CWnd *pWnd){
	 return ((CFAMAdjustment*)pWnd)->OnOrderListDeleteItem();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CFAMAdjustment *pVw = (CFAMAdjustment *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CFAMAdjustment *pVw = (CFAMAdjustment *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CFAMAdjustment *pVw = (CFAMAdjustment *)pWnd;
	pVw->OnDeleteSelect();
}
static void _OnViewSelectFnc(CWnd *pWnd){
	CFAMAdjustment *pVw = (CFAMAdjustment *)pWnd;
	pVw->OnViewSelect();
} 
static int _OnAddFAMAdjustmentFnc(CWnd *pWnd){
	 return ((CFAMAdjustment*)pWnd)->OnAddFAMAdjustment();
} 
static int _OnEditFAMAdjustmentFnc(CWnd *pWnd){
	 return ((CFAMAdjustment*)pWnd)->OnEditFAMAdjustment();
} 
static int _OnDeleteFAMAdjustmentFnc(CWnd *pWnd){
	 return ((CFAMAdjustment*)pWnd)->OnDeleteFAMAdjustment();
} 
static int _OnSaveFAMAdjustmentFnc(CWnd *pWnd){
	 return ((CFAMAdjustment*)pWnd)->OnSaveFAMAdjustment();
} 
static int _OnCancelFAMAdjustmentFnc(CWnd *pWnd){
	 return ((CFAMAdjustment*)pWnd)->OnCancelFAMAdjustment();
} 
CFAMAdjustment::CFAMAdjustment(){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CFAMAdjustment::~CFAMAdjustment(){
}
void CFAMAdjustment::OnCreateComponents(){
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
void CFAMAdjustment::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetCheckValue(true);

	m_wndOrderList.InsertColumn(0, _T("STT"), CFMT_TEXT, 50);
	m_wndOrderList.InsertColumn(1, _T("Order No"), CFMT_TEXT, 250);
	m_wndOrderList.InsertColumn(2, _T("Order Date"), CFMT_TEXT, 150);
	m_wndOrderList.InsertColumn(3, _T("Status"), CFMT_TEXT, 100);
	m_wndOrderList.InsertColumn(4, _T("User"), CFMT_TEXT, 0);

}
void CFAMAdjustment::OnSetWindowEvents(){
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
void CFAMAdjustment::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Text(pDX, m_wndOrderNo.GetDlgCtrlID(), m_szOrderNo);

}
void CFAMAdjustment::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CFAMAdjustment::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CFAMAdjustment::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szOrderNo.Empty();

}
int CFAMAdjustment::SetMode(int nMode){
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
/*void CFAMAdjustment::OnFromDateChange(){
	
} */
/*void CFAMAdjustment::OnFromDateSetfocus(){
	
} */
/*void CFAMAdjustment::OnFromDateKillfocus(){
	
} */
int CFAMAdjustment::OnFromDateCheckValue(){
	return 0;
} 
/*void CFAMAdjustment::OnToDateChange(){
	
} */
/*void CFAMAdjustment::OnToDateSetfocus(){
	
} */
/*void CFAMAdjustment::OnToDateKillfocus(){
	
} */
int CFAMAdjustment::OnToDateCheckValue(){
	return 0;
} 
/*void CFAMAdjustment::OnOrderNoChange(){
	
} */
/*void CFAMAdjustment::OnOrderNoSetfocus(){
	
} */
/*void CFAMAdjustment::OnOrderNoKillfocus(){
	
} */
int CFAMAdjustment::OnOrderNoCheckValue(){
	return 0;
} 
void CFAMAdjustment::OnSearchSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnOrderListLoadData();
} 
void CFAMAdjustment::OnOrderListDblClick(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(m_szStatus == _T("N"))
	{
		OnEditSelect();
	}
	else
		OnViewSelect();
} 
void CFAMAdjustment::OnOrderListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_szOrderNo = m_wndOrderList.GetItemText(nNewItem, 1);
	m_szStatus = m_wndOrderList.GetItemText(nNewItem, 3);
	m_szUser = m_wndOrderList.GetItemText(nNewItem, 4);
	SetMode(VM_EDIT);
} 
int CFAMAdjustment::OnOrderListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnDeleteSelect();
	 return 0;
} 
long CFAMAdjustment::OnOrderListLoadData(){
CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szIndex;
	szWhere.Empty();
	m_wndOrderList.BeginLoad(); 
	int nCount = 0;
	int nIndex = 1;
	if(!m_szFromDate.IsEmpty() && !m_szToDate.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and faj_orderdate between TO_TIMESTAMP('%s','YYYY-MM-DD HH24:MI:SS') and TO_TIMESTAMP('%s','YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
	}
	if(!m_szOrderNo.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and faj_orderno = '%s'"), m_szOrderNo);
	}
	szSQL.Format(_T("SELECT * FROM fam_adjustment WHERE faj_org_id = '%s' %s"), pMF->GetModuleID(),szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		szIndex.Format(_T("%d"), nIndex);
		m_wndOrderList.AddItems(
			szIndex,
			rs.GetValue(_T("faj_orderno")),
			CDateTime::Convert(rs.GetValue(_T("faj_orderdate")), yyyymmdd|hhmmss, ddmmyyyy|hhmmss),
			rs.GetValue(_T("faj_status")),
			rs.GetValue(_T("faj_createdby")),
			NULL);
		rs.MoveNext();
		nIndex++;
	}
	m_wndOrderList.EndLoad(); 
	return nCount;
}
void CFAMAdjustment::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(pMF->CheckPermission(_T("20.01")) || pMF->GetCurrentUser() == _T("admin") || pMF->GetCurrentUser() == m_szUser)
	{
		CFAMAdjustmentDialog dlg(pMF);
		dlg.m_szOrderNo = m_szOrderNo;
		dlg.SetMode(VM_ADD);
		dlg.DoModal();
	}else
	{
		ShowMessageBox(_T("Permission denined"), MB_OK | MB_ICONERROR);
		return;
	}
	
} 
void CFAMAdjustment::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(pMF->CheckPermission(_T("20.02")) || pMF->GetCurrentUser() == _T("admin") || pMF->GetCurrentUser() == m_szUser)
	{
		if(m_szStatus == _T("Y"))
		{
			MessageBox(_T("Can not edit with current status."), 0, MB_ICONWARNING);
		}
		else
		{
			CFAMAdjustmentDialog dlg(pMF);
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
void CFAMAdjustment::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(pMF->CheckPermission(_T("20.03")) || pMF->GetCurrentUser() == _T("admin") || pMF->GetCurrentUser() == m_szUser)
	{
		if(m_szStatus == _T("Y"))
		{
			MessageBox(_T("Can not delete with current status."), 0, MB_ICONWARNING);
		}else{
			OnDeleteFAMAdjustment();
		}
	}else
	{
		ShowMessageBox(_T("Permission denined"), MB_OK | MB_ICONERROR);
		return;
	}
	
}
void CFAMAdjustment::OnViewSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CFAMAdjustmentDialog dlg(pMF);
	dlg.m_szOrderNo = m_szOrderNo;
	dlg.m_szStatus = m_szStatus;
	dlg.SetMode(VM_VIEW);
	dlg.DoModal();
}
int CFAMAdjustment::OnAddFAMAdjustment(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CFAMAdjustment::OnEditFAMAdjustment(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CFAMAdjustment::OnDeleteFAMAdjustment(){
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
	szSQL.Format(_T("SELECT count(*) FROM fam_adjustment_line where fajl_orderno = '%s'"), m_szOrderNo);
	rs.ExecSQL(szSQL);
	nCount = rs.GetIntValue();
	if(nCount > 1)
	{
		szSQL.Format(_T(" DELETE FROM fam_adjustment_line WHERE fajl_orderno = '%s'"), m_szOrderNo);
		pMF->ExecSQL(szSQL);
	}
	szSQL.Format(_T("DELETE FROM fam_adjustment WHERE faj_orderno = '%s' and faj_org_id = '%s'"), m_szOrderNo, pMF->GetModuleID());
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
		OnOrderListLoadData();
 	}
	return 0;
}
int CFAMAdjustment::OnSaveFAMAdjustment(){
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
 		//OnFAMAdjustmentListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CFAMAdjustment::OnCancelFAMAdjustment(){
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
int CFAMAdjustment::OnFAMAdjustmentListLoadData(){
	return 0;
}
