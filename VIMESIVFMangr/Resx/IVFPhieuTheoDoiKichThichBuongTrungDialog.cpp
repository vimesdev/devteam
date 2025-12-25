#include "IVFPhieuTheoDoiKichThichBuongTrungDialog.h"
#include "MainFrm.h"
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CIVFPhieuTheoDoiKichThichBuongTrungDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiKichThichBuongTrungDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CIVFPhieuTheoDoiKichThichBuongTrungDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CIVFPhieuTheoDoiKichThichBuongTrungDialog*)pWnd)->OnListDeleteItem();
} 
static void _OnIUIDetailSelectFnc(CWnd *pWnd){
	CIVFPhieuTheoDoiKichThichBuongTrungDialog *pVw = (CIVFPhieuTheoDoiKichThichBuongTrungDialog *)pWnd;
	pVw->OnIUIDetailSelect();
} 
static void _OnUpdateSelectFnc(CWnd *pWnd){
	CIVFPhieuTheoDoiKichThichBuongTrungDialog *pVw = (CIVFPhieuTheoDoiKichThichBuongTrungDialog *)pWnd;
	pVw->OnUpdateSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CIVFPhieuTheoDoiKichThichBuongTrungDialog *pVw = (CIVFPhieuTheoDoiKichThichBuongTrungDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _On&CancelSelectFnc(CWnd *pWnd){
	CIVFPhieuTheoDoiKichThichBuongTrungDialog *pVw = (CIVFPhieuTheoDoiKichThichBuongTrungDialog *)pWnd;
	pVw->On&CancelSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CIVFPhieuTheoDoiKichThichBuongTrungDialog *pVw = (CIVFPhieuTheoDoiKichThichBuongTrungDialog *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CIVFPhieuTheoDoiKichThichBuongTrungDialog *pVw = (CIVFPhieuTheoDoiKichThichBuongTrungDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddIVFPhieuTheoDoiKichThichBuongTrungDialogFnc(CWnd *pWnd){
	 return ((CIVFPhieuTheoDoiKichThichBuongTrungDialog*)pWnd)->OnAddIVFPhieuTheoDoiKichThichBuongTrungDialog();
} 
static int _OnEditIVFPhieuTheoDoiKichThichBuongTrungDialogFnc(CWnd *pWnd){
	 return ((CIVFPhieuTheoDoiKichThichBuongTrungDialog*)pWnd)->OnEditIVFPhieuTheoDoiKichThichBuongTrungDialog();
} 
static int _OnDeleteIVFPhieuTheoDoiKichThichBuongTrungDialogFnc(CWnd *pWnd){
	 return ((CIVFPhieuTheoDoiKichThichBuongTrungDialog*)pWnd)->OnDeleteIVFPhieuTheoDoiKichThichBuongTrungDialog();
} 
static int _OnSaveIVFPhieuTheoDoiKichThichBuongTrungDialogFnc(CWnd *pWnd){
	 return ((CIVFPhieuTheoDoiKichThichBuongTrungDialog*)pWnd)->OnSaveIVFPhieuTheoDoiKichThichBuongTrungDialog();
} 
static int _OnCancelIVFPhieuTheoDoiKichThichBuongTrungDialogFnc(CWnd *pWnd){
	 return ((CIVFPhieuTheoDoiKichThichBuongTrungDialog*)pWnd)->OnCancelIVFPhieuTheoDoiKichThichBuongTrungDialog();
} 
CIVFPhieuTheoDoiKichThichBuongTrungDialog::CIVFPhieuTheoDoiKichThichBuongTrungDialog(){

	m_nDlgWidth = 965;
	m_nDlgHeight = 605;
	SetDefaultValues();
}
CIVFPhieuTheoDoiKichThichBuongTrungDialog::~CIVFPhieuTheoDoiKichThichBuongTrungDialog(){
}
void CIVFPhieuTheoDoiKichThichBuongTrungDialog::OnCreateComponents(){
	m_wndList.Create(this,5, 5, 800, 565); 
	m_wndIUIDetail.Create(this, _T("IUI Detail"), 5, 570, 85, 595);
	m_wndUpdate.Create(this, _T("&Update"), 380, 570, 460, 595);
	m_wndSave.Create(this, _T("&Save"), 465, 570, 545, 595);
	m_wnd&Cancel.Create(this, _T("&Cancel"), 550, 570, 630, 595);
	m_wndPrint.Create(this, _T("&Print"), 635, 570, 715, 595);
	m_wndClose.Create(this, _T("&Close"), 720, 570, 800, 595);

}
void CIVFPhieuTheoDoiKichThichBuongTrungDialog::OnInitializeComponents(){
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
void CIVFPhieuTheoDoiKichThichBuongTrungDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndIUIDetail.SetEvent(WE_CLICK, _OnIUIDetailSelectFnc);
	m_wndUpdate.SetEvent(WE_CLICK, _OnUpdateSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wnd&Cancel.SetEvent(WE_CLICK, _On&CancelSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddIVFPhieuTheoDoiKichThichBuongTrungDialogFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditIVFPhieuTheoDoiKichThichBuongTrungDialogFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteIVFPhieuTheoDoiKichThichBuongTrungDialogFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveIVFPhieuTheoDoiKichThichBuongTrungDialogFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelIVFPhieuTheoDoiKichThichBuongTrungDialogFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CIVFPhieuTheoDoiKichThichBuongTrungDialog::OnDoDataExchange(CDataExchange* pDX){

}
void CIVFPhieuTheoDoiKichThichBuongTrungDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	}
	else
	{
			
	}

}
void CIVFPhieuTheoDoiKichThichBuongTrungDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CIVFPhieuTheoDoiKichThichBuongTrungDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CIVFPhieuTheoDoiKichThichBuongTrungDialog::SetDefaultValues(){


}
int CIVFPhieuTheoDoiKichThichBuongTrungDialog::SetMode(int nMode){
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
void CIVFPhieuTheoDoiKichThichBuongTrungDialog::OnListDblClick(){
	
} 
void CIVFPhieuTheoDoiKichThichBuongTrungDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CIVFPhieuTheoDoiKichThichBuongTrungDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CIVFPhieuTheoDoiKichThichBuongTrungDialog::OnListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
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
			rs.GetValue(_T("BT(P)")), 
			rs.GetValue(_T("BT(T)")), 
			rs.GetValue(_T("NMTC")), 
			rs.GetValue(_T("BS_SA")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CIVFPhieuTheoDoiKichThichBuongTrungDialog::OnIUIDetailSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFPhieuTheoDoiKichThichBuongTrungDialog::OnUpdateSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFPhieuTheoDoiKichThichBuongTrungDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFPhieuTheoDoiKichThichBuongTrungDialog::On&CancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFPhieuTheoDoiKichThichBuongTrungDialog::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFPhieuTheoDoiKichThichBuongTrungDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CIVFPhieuTheoDoiKichThichBuongTrungDialog::OnAddIVFPhieuTheoDoiKichThichBuongTrungDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CIVFPhieuTheoDoiKichThichBuongTrungDialog::OnEditIVFPhieuTheoDoiKichThichBuongTrungDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CIVFPhieuTheoDoiKichThichBuongTrungDialog::OnDeleteIVFPhieuTheoDoiKichThichBuongTrungDialog(){
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
 		OnCancelIVFPhieuTheoDoiKichThichBuongTrungDialog();
 	}
	return 0;
}
int CIVFPhieuTheoDoiKichThichBuongTrungDialog::OnSaveIVFPhieuTheoDoiKichThichBuongTrungDialog(){
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
 		//OnIVFPhieuTheoDoiKichThichBuongTrungDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CIVFPhieuTheoDoiKichThichBuongTrungDialog::OnCancelIVFPhieuTheoDoiKichThichBuongTrungDialog(){
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
int CIVFPhieuTheoDoiKichThichBuongTrungDialog::OnIVFPhieuTheoDoiKichThichBuongTrungDialogListLoadData(){
	return 0;
}
