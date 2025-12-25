#include "IVFTDKichthichBuongTrungList.h"
#include "MainFrm.h"
#include "IVFTDKichthichBuongTrungPopup.h"

static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CIVFTDKichthichBuongTrungList*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CIVFTDKichthichBuongTrungList*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CIVFTDKichthichBuongTrungList*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CIVFTDKichthichBuongTrungList*)pWnd)->OnListDeleteItem();
} 
static void _OnIUIDetailSelectFnc(CWnd *pWnd){
	CIVFTDKichthichBuongTrungList *pVw = (CIVFTDKichthichBuongTrungList *)pWnd;
	pVw->OnIUIDetailSelect();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CIVFTDKichthichBuongTrungList *pVw = (CIVFTDKichthichBuongTrungList *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CIVFTDKichthichBuongTrungList *pVw = (CIVFTDKichthichBuongTrungList *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CIVFTDKichthichBuongTrungList *pVw = (CIVFTDKichthichBuongTrungList *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CIVFTDKichthichBuongTrungList *pVw = (CIVFTDKichthichBuongTrungList *)pWnd;
	pVw->OnPrintSelect();
} 
static int _OnAddIVFTDKichthichBuongTrungListFnc(CWnd *pWnd){
	 return ((CIVFTDKichthichBuongTrungList*)pWnd)->OnAddIVFTDKichthichBuongTrungList();
} 
static int _OnEditIVFTDKichthichBuongTrungListFnc(CWnd *pWnd){
	 return ((CIVFTDKichthichBuongTrungList*)pWnd)->OnEditIVFTDKichthichBuongTrungList();
} 
static int _OnDeleteIVFTDKichthichBuongTrungListFnc(CWnd *pWnd){
	 return ((CIVFTDKichthichBuongTrungList*)pWnd)->OnDeleteIVFTDKichthichBuongTrungList();
} 
static int _OnSaveIVFTDKichthichBuongTrungListFnc(CWnd *pWnd){
	 return ((CIVFTDKichthichBuongTrungList*)pWnd)->OnSaveIVFTDKichthichBuongTrungList();
} 
static int _OnCancelIVFTDKichthichBuongTrungListFnc(CWnd *pWnd){
	 return ((CIVFTDKichthichBuongTrungList*)pWnd)->OnCancelIVFTDKichthichBuongTrungList();
} 
CIVFTDKichthichBuongTrungList::CIVFTDKichthichBuongTrungList(){

	m_nDlgWidth = 685;
	m_nDlgHeight = 605;
	SetDefaultValues();
}
CIVFTDKichthichBuongTrungList::~CIVFTDKichthichBuongTrungList(){
}
void CIVFTDKichthichBuongTrungList::OnCreateComponents(){
	m_wndList.Create(this,5, 5, 675, 535); 
	m_wndIUIDetail.Create(this, _T("IUI Detail"), 5, 540, 85, 565);
	m_wndAdd.Create(this, _T("&Add"), 340, 540, 420, 565);
	m_wndEdit.Create(this, _T("Edit"), 425, 540, 505, 565);
	m_wndDelete.Create(this, _T("&Delete"), 510, 540, 590, 565);
	m_wndPrint.Create(this, _T("&Print"), 595, 540, 675, 565);

}
void CIVFTDKichthichBuongTrungList::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();


	m_wndList.InsertColumn(0, _T("Ngay"), CFMT_DATE, 80);
	m_wndList.InsertColumn(1, _T("NgayCK"), CFMT_DATE, 80);
	m_wndList.InsertColumn(2, _T("CC"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(3, _T("FSH"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(4, _T("GmRHa"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(5, _T("BT(P)"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(6, _T("BT(T)"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(7, _T("NMTC"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(8, _T("BS_SA"), CFMT_TEXT, 70);

}
void CIVFTDKichthichBuongTrungList::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndIUIDetail.SetEvent(WE_CLICK, _OnIUIDetailSelectFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddIVFTDKichthichBuongTrungListFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditIVFTDKichthichBuongTrungListFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteIVFTDKichthichBuongTrungListFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveIVFTDKichthichBuongTrungListFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelIVFTDKichthichBuongTrungListFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CIVFTDKichthichBuongTrungList::OnDoDataExchange(CDataExchange* pDX){

}
void CIVFTDKichthichBuongTrungList::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	}
	else
	{
			
	}

}
void CIVFTDKichthichBuongTrungList::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CIVFTDKichthichBuongTrungList::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CIVFTDKichthichBuongTrungList::SetDefaultValues(){


}
int CIVFTDKichthichBuongTrungList::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
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
void CIVFTDKichthichBuongTrungList::OnListDblClick(){
	
} 
void CIVFTDKichthichBuongTrungList::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CIVFTDKichthichBuongTrungList::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CIVFTDKichthichBuongTrungList::OnListLoadData(){

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM IVF_NANGNOAN WHERE docno=%ld"), pMF->m_nDocumentNo);

	m_wndList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("Ngay")), 
			rs.GetValue(_T("NgayCK")), 
			rs.GetValue(_T("CC")), 
			rs.GetValue(_T("FSH")), 
			rs.GetValue(_T("GmRHa")), 
			rs.GetValue(_T("BT_P")), 
			rs.GetValue(_T("BT_T")), 
			rs.GetValue(_T("NMTC")), 
			rs.GetValue(_T("BS_SA")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;

}
void CIVFTDKichthichBuongTrungList::OnIUIDetailSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFTDKichthichBuongTrungList::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CIVFTDKichthichBuongTrungPopup* newPopup = new CIVFTDKichthichBuongTrungPopup(this, VM_ADD);
	newPopup->ShowPopup(&m_wndList);
} 
void CIVFTDKichthichBuongTrungList::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CIVFTDKichthichBuongTrungPopup* newPopup = new CIVFTDKichthichBuongTrungPopup(this, VM_ADD);
	newPopup->ShowPopup(&m_wndList);
} 
void CIVFTDKichthichBuongTrungList::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnDeleteIVFTDKichthichBuongTrungList();
} 
void CIVFTDKichthichBuongTrungList::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CIVFTDKichthichBuongTrungList::OnAddIVFTDKichthichBuongTrungList(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CIVFTDKichthichBuongTrungList::OnEditIVFTDKichthichBuongTrungList(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CIVFTDKichthichBuongTrungList::OnDeleteIVFTDKichthichBuongTrungList(){
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
 		OnCancelIVFTDKichthichBuongTrungList();
 	}
	return 0;
}
int CIVFTDKichthichBuongTrungList::OnSaveIVFTDKichthichBuongTrungList(){
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
 		//OnIVFTDKichthichBuongTrungListListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CIVFTDKichthichBuongTrungList::OnCancelIVFTDKichthichBuongTrungList(){
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
int CIVFTDKichthichBuongTrungList::OnIVFTDKichthichBuongTrungListListLoadData(){
	return 0;
}


void CIVFTDKichthichBuongTrungList::Refresh()
{
	OnListLoadData();
}
