#include "IVFTheoDoiDieuTriView.h"
#include "MainFrm.h"
static void _OnTheoDoiIUISelectFnc(CWnd *pWnd){
	CIVFTheoDoiDieuTriView *pVw = (CIVFTheoDoiDieuTriView *)pWnd;
	pVw->OnTheoDoiIUISelect();
} 
static void _OnTheoDoiKTBuongTrungSelectFnc(CWnd *pWnd){
	CIVFTheoDoiDieuTriView *pVw = (CIVFTheoDoiDieuTriView *)pWnd;
	pVw->OnTheoDoiKTBuongTrungSelect();
} 
static void _OnTheoDoiTiemThuocHTSSSelectFnc(CWnd *pWnd){
	CIVFTheoDoiDieuTriView *pVw = (CIVFTheoDoiDieuTriView *)pWnd;
	pVw->OnTheoDoiTiemThuocHTSSSelect();
} 
static void _OnTheoDoiPhoiSelectFnc(CWnd *pWnd){
	CIVFTheoDoiDieuTriView *pVw = (CIVFTheoDoiDieuTriView *)pWnd;
	pVw->OnTheoDoiPhoiSelect();
} 
static void _OnTheoDoiTruPhoiSelectFnc(CWnd *pWnd){
	CIVFTheoDoiDieuTriView *pVw = (CIVFTheoDoiDieuTriView *)pWnd;
	pVw->OnTheoDoiTruPhoiSelect();
} 
static void _OnBangkiemquytrinhraphoiSelectFnc(CWnd *pWnd){
	CIVFTheoDoiDieuTriView *pVw = (CIVFTheoDoiDieuTriView *)pWnd;
	pVw->OnBangkiemquytrinhraphoiSelect();
} 
static int _OnAddIVFTheoDoiDieuTriViewFnc(CWnd *pWnd){
	 return ((CIVFTheoDoiDieuTriView*)pWnd)->OnAddIVFTheoDoiDieuTriView();
} 
static int _OnEditIVFTheoDoiDieuTriViewFnc(CWnd *pWnd){
	 return ((CIVFTheoDoiDieuTriView*)pWnd)->OnEditIVFTheoDoiDieuTriView();
} 
static int _OnDeleteIVFTheoDoiDieuTriViewFnc(CWnd *pWnd){
	 return ((CIVFTheoDoiDieuTriView*)pWnd)->OnDeleteIVFTheoDoiDieuTriView();
} 
static int _OnSaveIVFTheoDoiDieuTriViewFnc(CWnd *pWnd){
	 return ((CIVFTheoDoiDieuTriView*)pWnd)->OnSaveIVFTheoDoiDieuTriView();
} 
static int _OnCancelIVFTheoDoiDieuTriViewFnc(CWnd *pWnd){
	 return ((CIVFTheoDoiDieuTriView*)pWnd)->OnCancelIVFTheoDoiDieuTriView();
} 
CIVFTheoDoiDieuTriView::CIVFTheoDoiDieuTriView(){

	m_nDlgWidth = 685;
	m_nDlgHeight = 585;
	SetDefaultValues();
}
CIVFTheoDoiDieuTriView::~CIVFTheoDoiDieuTriView(){
}
void CIVFTheoDoiDieuTriView::OnCreateComponents(){
	m_wndTheoDoiIUI.Create(this, _T("THEO DOI IUI"), 5, 6, 305, 41);
	m_wndTheoDoiKTBuongTrung.Create(this, _T("THEO DOI KICH THICH BUONG TRUNG"), 5, 46, 305, 81);
	m_wndTheoDoiTiemThuocHTSS.Create(this, _T("THEO DOI TIEM THUOC HTSS"), 5, 86, 305, 121);
	m_wndTheoDoiPhoi.Create(this, _T("THEO DOI PHOI"), 310, 6, 610, 41);
	m_wndTheoDoiTruPhoi.Create(this, _T("THEO DOI TRU-RA PHOI"), 310, 46, 610, 81);
	m_wndBangkiemquytrinhraphoi.Create(this, _T("BANG KIEM CAC QUY TRINH RA PHOI"), 310, 86, 610, 121);

}
void CIVFTheoDoiDieuTriView::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CIVFTheoDoiDieuTriView::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndTheoDoiIUI.SetEvent(WE_CLICK, _OnTheoDoiIUISelectFnc);
	m_wndTheoDoiKTBuongTrung.SetEvent(WE_CLICK, _OnTheoDoiKTBuongTrungSelectFnc);
	m_wndTheoDoiTiemThuocHTSS.SetEvent(WE_CLICK, _OnTheoDoiTiemThuocHTSSSelectFnc);
	m_wndTheoDoiPhoi.SetEvent(WE_CLICK, _OnTheoDoiPhoiSelectFnc);
	m_wndTheoDoiTruPhoi.SetEvent(WE_CLICK, _OnTheoDoiTruPhoiSelectFnc);
	m_wndBangkiemquytrinhraphoi.SetEvent(WE_CLICK, _OnBangkiemquytrinhraphoiSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddIVFTheoDoiDieuTriViewFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditIVFTheoDoiDieuTriViewFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteIVFTheoDoiDieuTriViewFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveIVFTheoDoiDieuTriViewFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelIVFTheoDoiDieuTriViewFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CIVFTheoDoiDieuTriView::OnDoDataExchange(CDataExchange* pDX){

}
void CIVFTheoDoiDieuTriView::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	}
	else
	{
			
	}

}
void CIVFTheoDoiDieuTriView::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CIVFTheoDoiDieuTriView::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CIVFTheoDoiDieuTriView::SetDefaultValues(){


}
int CIVFTheoDoiDieuTriView::SetMode(int nMode){
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
void CIVFTheoDoiDieuTriView::OnTheoDoiIUISelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFTheoDoiDieuTriView::OnTheoDoiKTBuongTrungSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFTheoDoiDieuTriView::OnTheoDoiTiemThuocHTSSSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFTheoDoiDieuTriView::OnTheoDoiPhoiSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFTheoDoiDieuTriView::OnTheoDoiTruPhoiSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFTheoDoiDieuTriView::OnBangkiemquytrinhraphoiSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CIVFTheoDoiDieuTriView::OnAddIVFTheoDoiDieuTriView(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CIVFTheoDoiDieuTriView::OnEditIVFTheoDoiDieuTriView(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CIVFTheoDoiDieuTriView::OnDeleteIVFTheoDoiDieuTriView(){
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
 		OnCancelIVFTheoDoiDieuTriView();
 	}
	return 0;
}
int CIVFTheoDoiDieuTriView::OnSaveIVFTheoDoiDieuTriView(){
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
 		//OnIVFTheoDoiDieuTriViewListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CIVFTheoDoiDieuTriView::OnCancelIVFTheoDoiDieuTriView(){
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
int CIVFTheoDoiDieuTriView::OnIVFTheoDoiDieuTriViewListLoadData(){
	return 0;
}
