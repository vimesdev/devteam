#include "IVFLabPhieuDoNitoDialog.h"
#include "MainFrm.h"
/*static void _OnSophieuChangeFnc(CWnd *pWnd){
	((CIVFLabPhieuDoNitoDialog *)pWnd)->OnSophieuChange();
} */
/*static void _OnSophieuSetfocusFnc(CWnd *pWnd){
	((CIVFLabPhieuDoNitoDialog *)pWnd)->OnSophieuSetfocus();} */ 
/*static void _OnSophieuKillfocusFnc(CWnd *pWnd){
	((CIVFLabPhieuDoNitoDialog *)pWnd)->OnSophieuKillfocus();
} */
static int _OnSophieuCheckValueFnc(CWnd *pWnd){
	return ((CIVFLabPhieuDoNitoDialog *)pWnd)->OnSophieuCheckValue();
} 
/*static void _OnNgaydoChangeFnc(CWnd *pWnd){
	((CIVFLabPhieuDoNitoDialog *)pWnd)->OnNgaydoChange();
} */
/*static void _OnNgaydoSetfocusFnc(CWnd *pWnd){
	((CIVFLabPhieuDoNitoDialog *)pWnd)->OnNgaydoSetfocus();} */ 
/*static void _OnNgaydoKillfocusFnc(CWnd *pWnd){
	((CIVFLabPhieuDoNitoDialog *)pWnd)->OnNgaydoKillfocus();
} */
static int _OnNgaydoCheckValueFnc(CWnd *pWnd){
	return ((CIVFLabPhieuDoNitoDialog *)pWnd)->OnNgaydoCheckValue();
} 
static void _OnNguoidoSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CIVFLabPhieuDoNitoDialog* )pWnd)->OnNguoidoSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnNguoidoSelendokFnc(CWnd *pWnd){
	((CIVFLabPhieuDoNitoDialog *)pWnd)->OnNguoidoSelendok();
}
/*static void _OnNguoidoSetfocusFnc(CWnd *pWnd){
	((CIVFLabPhieuDoNitoDialog *)pWnd)->OnNguoidoKillfocus();
}*/
/*static void _OnNguoidoKillfocusFnc(CWnd *pWnd){
	((CIVFLabPhieuDoNitoDialog *)pWnd)->OnNguoidoKillfocus();
}*/
static long _OnNguoidoLoadDataFnc(CWnd *pWnd){
	return ((CIVFLabPhieuDoNitoDialog *)pWnd)->OnNguoidoLoadData();
}
/*static void _OnNguoidoAddNewFnc(CWnd *pWnd){
	((CIVFLabPhieuDoNitoDialog *)pWnd)->OnNguoidoAddNew();
}*/
/*static void _OnDiengiaiChangeFnc(CWnd *pWnd){
	((CIVFLabPhieuDoNitoDialog *)pWnd)->OnDiengiaiChange();
} */
/*static void _OnDiengiaiSetfocusFnc(CWnd *pWnd){
	((CIVFLabPhieuDoNitoDialog *)pWnd)->OnDiengiaiSetfocus();} */ 
/*static void _OnDiengiaiKillfocusFnc(CWnd *pWnd){
	((CIVFLabPhieuDoNitoDialog *)pWnd)->OnDiengiaiKillfocus();
} */
static int _OnDiengiaiCheckValueFnc(CWnd *pWnd){
	return ((CIVFLabPhieuDoNitoDialog *)pWnd)->OnDiengiaiCheckValue();
} 
static void _OnThungSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CIVFLabPhieuDoNitoDialog* )pWnd)->OnThungSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnThungSelendokFnc(CWnd *pWnd){
	((CIVFLabPhieuDoNitoDialog *)pWnd)->OnThungSelendok();
}
/*static void _OnThungSetfocusFnc(CWnd *pWnd){
	((CIVFLabPhieuDoNitoDialog *)pWnd)->OnThungKillfocus();
}*/
/*static void _OnThungKillfocusFnc(CWnd *pWnd){
	((CIVFLabPhieuDoNitoDialog *)pWnd)->OnThungKillfocus();
}*/
static long _OnThungLoadDataFnc(CWnd *pWnd){
	return ((CIVFLabPhieuDoNitoDialog *)pWnd)->OnThungLoadData();
}
/*static void _OnThungAddNewFnc(CWnd *pWnd){
	((CIVFLabPhieuDoNitoDialog *)pWnd)->OnThungAddNew();
}*/
static void _OnAddLineSelectFnc(CWnd *pWnd){
	CIVFLabPhieuDoNitoDialog *pVw = (CIVFLabPhieuDoNitoDialog *)pWnd;
	pVw->OnAddLineSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CIVFLabPhieuDoNitoDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CIVFLabPhieuDoNitoDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CIVFLabPhieuDoNitoDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CIVFLabPhieuDoNitoDialog*)pWnd)->OnListDeleteItem();
} 
static void _OnSaveAndAcceptSelectFnc(CWnd *pWnd){
	CIVFLabPhieuDoNitoDialog *pVw = (CIVFLabPhieuDoNitoDialog *)pWnd;
	pVw->OnSaveAndAcceptSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CIVFLabPhieuDoNitoDialog *pVw = (CIVFLabPhieuDoNitoDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CIVFLabPhieuDoNitoDialog *pVw = (CIVFLabPhieuDoNitoDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddIVFLabPhieuDoNitoDialogFnc(CWnd *pWnd){
	 return ((CIVFLabPhieuDoNitoDialog*)pWnd)->OnAddIVFLabPhieuDoNitoDialog();
} 
static int _OnEditIVFLabPhieuDoNitoDialogFnc(CWnd *pWnd){
	 return ((CIVFLabPhieuDoNitoDialog*)pWnd)->OnEditIVFLabPhieuDoNitoDialog();
} 
static int _OnDeleteIVFLabPhieuDoNitoDialogFnc(CWnd *pWnd){
	 return ((CIVFLabPhieuDoNitoDialog*)pWnd)->OnDeleteIVFLabPhieuDoNitoDialog();
} 
static int _OnSaveIVFLabPhieuDoNitoDialogFnc(CWnd *pWnd){
	 return ((CIVFLabPhieuDoNitoDialog*)pWnd)->OnSaveIVFLabPhieuDoNitoDialog();
} 
static int _OnCancelIVFLabPhieuDoNitoDialogFnc(CWnd *pWnd){
	 return ((CIVFLabPhieuDoNitoDialog*)pWnd)->OnCancelIVFLabPhieuDoNitoDialog();
} 
CIVFLabPhieuDoNitoDialog::CIVFLabPhieuDoNitoDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 605;
	m_nDlgHeight = 485;
	SetDefaultValues();
}
CIVFLabPhieuDoNitoDialog::~CIVFLabPhieuDoNitoDialog(){
}
void CIVFLabPhieuDoNitoDialog::OnCreateComponents(){
	m_wndSophieuLabel.Create(this, _T("so_phieu"), 5, 5, 105, 30);
	m_wndSophieu.Create(this,110, 5, 210, 30); 
	m_wndNgaydoLabel.Create(this, _T("ngay_do"), 5, 35, 105, 60);
	m_wndNgaydo.Create(this,110, 35, 210, 60); 
	m_wndNguoidoLabel.Create(this, _T("nguoi_do"), 215, 35, 315, 60);
	m_wndNguoido.Create(this,320, 35, 570, 60); 
	m_wndDiengiaiLabel.Create(this, _T("dien_giai"), 5, 65, 105, 90);
	m_wndDiengiai.Create(this,110, 65, 570, 90); 
	m_wndThungLabel.Create(this, _T("Thung"), 5, 95, 105, 120);
	m_wndThung.Create(this,110, 95, 540, 120); 
	m_wndAddLine.Create(this, _T("+"), 545, 95, 572, 120);
	m_wndList.Create(this,5, 125, 570, 425); 
	m_wndSaveAndAccept.Create(this, _T("&Save&&Accept"), 309, 430, 399, 455);
	m_wndSave.Create(this, _T("&Save"), 404, 430, 484, 455);
	m_wndClose.Create(this, _T("&Close"), 489, 430, 569, 455);

}
void CIVFLabPhieuDoNitoDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndSophieu.SetLimitText(15);
	m_wndSophieu.SetCheckValue(true);
	m_wndNgaydo.SetMax(CDate(pMF->GetSysDate()));
	m_wndNgaydo.SetCheckValue(true);
	m_wndNguoido.SetCheckValue(true);
	m_wndNguoido.LimitText(15);
	m_wndDiengiai.SetLimitText(254);
	m_wndDiengiai.SetCheckValue(true);
	m_wndThung.SetCheckValue(true);
	m_wndThung.LimitText(35);


	m_wndNguoido.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndNguoido.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndThung.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndThung.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndList.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(1, _T("Thung"), CFMT_TEXT, 300);
	m_ivf_phieu_do_nitoTbl.SetTableName(_T("ivf_phieu_do_nito"));
	m_ivf_phieu_do_nitoTbl.AddField(_T("IVF_PHIEU_DO_NITO_ID"), dfText, 32); 
	m_ivf_phieu_do_nitoTbl.AddField(_T("NGAY_DO"), dfDate); 
	m_ivf_phieu_do_nitoTbl.AddField(_T("NGUOI_DO"), dfText, 15); 
	m_ivf_phieu_do_nitoTbl.AddField(_T("DIEN_GIAI"), dfText, 254); 
	m_ivf_phieu_do_nitoTbl.AddField(_T("TRANG_THAI"), dfText, 1); 
	m_ivf_phieu_do_nitoTbl.AddField(_T("SO_PHIEU"), dfText, 15); 

}
void CIVFLabPhieuDoNitoDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndSophieu.SetEvent(WE_CHANGE, _OnSophieuChangeFnc);
	//m_wndSophieu.SetEvent(WE_SETFOCUS, _OnSophieuSetfocusFnc);
	//m_wndSophieu.SetEvent(WE_KILLFOCUS, _OnSophieuKillfocusFnc);
	m_wndSophieu.SetEvent(WE_CHECKVALUE, _OnSophieuCheckValueFnc);
	//m_wndNgaydo.SetEvent(WE_CHANGE, _OnNgaydoChangeFnc);
	//m_wndNgaydo.SetEvent(WE_SETFOCUS, _OnNgaydoSetfocusFnc);
	//m_wndNgaydo.SetEvent(WE_KILLFOCUS, _OnNgaydoKillfocusFnc);
	m_wndNgaydo.SetEvent(WE_CHECKVALUE, _OnNgaydoCheckValueFnc);
	m_wndNguoido.SetEvent(WE_SELENDOK, _OnNguoidoSelendokFnc);
	//m_wndNguoido.SetEvent(WE_SETFOCUS, _OnNguoidoSetfocusFnc);
	//m_wndNguoido.SetEvent(WE_KILLFOCUS, _OnNguoidoKillfocusFnc);
	m_wndNguoido.SetEvent(WE_SELCHANGE, _OnNguoidoSelectChangeFnc);
	m_wndNguoido.SetEvent(WE_LOADDATA, _OnNguoidoLoadDataFnc);
	//m_wndNguoido.SetEvent(WE_ADDNEW, _OnNguoidoAddNewFnc);
	//m_wndDiengiai.SetEvent(WE_CHANGE, _OnDiengiaiChangeFnc);
	//m_wndDiengiai.SetEvent(WE_SETFOCUS, _OnDiengiaiSetfocusFnc);
	//m_wndDiengiai.SetEvent(WE_KILLFOCUS, _OnDiengiaiKillfocusFnc);
	m_wndDiengiai.SetEvent(WE_CHECKVALUE, _OnDiengiaiCheckValueFnc);
	m_wndThung.SetEvent(WE_SELENDOK, _OnThungSelendokFnc);
	//m_wndThung.SetEvent(WE_SETFOCUS, _OnThungSetfocusFnc);
	//m_wndThung.SetEvent(WE_KILLFOCUS, _OnThungKillfocusFnc);
	m_wndThung.SetEvent(WE_SELCHANGE, _OnThungSelectChangeFnc);
	m_wndThung.SetEvent(WE_LOADDATA, _OnThungLoadDataFnc);
	//m_wndThung.SetEvent(WE_ADDNEW, _OnThungAddNewFnc);
	m_wndAddLine.SetEvent(WE_CLICK, _OnAddLineSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndSaveAndAccept.SetEvent(WE_CLICK, _OnSaveAndAcceptSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_NONE);

}
void CIVFLabPhieuDoNitoDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndSophieu.GetDlgCtrlID(), m_szSophieu);
	DDX_TextEx(pDX, m_wndNgaydo.GetDlgCtrlID(), m_szNgaydo);
	DDX_TextEx(pDX, m_wndNguoido.GetDlgCtrlID(), m_szNguoidoKey);
	DDX_Text(pDX, m_wndDiengiai.GetDlgCtrlID(), m_szDiengiai);
	DDX_TextEx(pDX, m_wndThung.GetDlgCtrlID(), m_szThungKey);

}
void CIVFLabPhieuDoNitoDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Sophieu")] =  m_szSophieu;
	m_jData[_T("Ngaydo")] =  m_szNgaydo;
	m_jData[_T("Nguoido")] =  m_szNguoidoKey;
	m_jData[_T("Diengiai")] =  m_szDiengiai;
	m_jData[_T("Thung")] =  m_szThungKey;
	}
	else
	{
			
	m_jData[_T("Sophieu")].GetValue(m_szSophieu);
	m_jData[_T("Ngaydo")].GetValue(m_szNgaydo);
	m_jData[_T("Nguoido")].GetValue(m_szNguoidoKey);
	m_jData[_T("Diengiai")].GetValue(m_szDiengiai);
	m_jData[_T("Thung")].GetValue(m_szThungKey);
	}

}
void CIVFLabPhieuDoNitoDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("NGAY_DO"), m_szNgaydo);
	rs.GetValue(_T("NGUOI_DO"), m_szNguoidoKey);
	rs.GetValue(_T("DIEN_GIAI"), m_szDiengiai);
	rs.GetValue(_T("SO_PHIEU"), m_szSophieu);

}
void CIVFLabPhieuDoNitoDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_ivf_phieu_do_nitoTbl.SetValue(_T("NGAY_DO"), m_szNgaydo);
	m_ivf_phieu_do_nitoTbl.SetValue(_T("NGUOI_DO"), m_szNguoidoKey);
	m_ivf_phieu_do_nitoTbl.SetValue(_T("DIEN_GIAI"), m_szDiengiai);
	m_ivf_phieu_do_nitoTbl.SetValue(_T("SO_PHIEU"), m_szSophieu);

}
void CIVFLabPhieuDoNitoDialog::SetDefaultValues(){

	m_szSophieu.Empty();
	m_szNgaydo.Empty();
	m_szNguoidoKey.Empty();
	m_szDiengiai.Empty();
	m_szThungKey.Empty();

}
int CIVFLabPhieuDoNitoDialog::SetMode(int nMode){
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
/*void CIVFLabPhieuDoNitoDialog::OnSophieuChange(){
	
} */
/*void CIVFLabPhieuDoNitoDialog::OnSophieuSetfocus(){
	
} */
/*void CIVFLabPhieuDoNitoDialog::OnSophieuKillfocus(){
	
} */
int CIVFLabPhieuDoNitoDialog::OnSophieuCheckValue(){
	return 0;
} 
/*void CIVFLabPhieuDoNitoDialog::OnNgaydoChange(){
	
} */
/*void CIVFLabPhieuDoNitoDialog::OnNgaydoSetfocus(){
	
} */
/*void CIVFLabPhieuDoNitoDialog::OnNgaydoKillfocus(){
	
} */
int CIVFLabPhieuDoNitoDialog::OnNgaydoCheckValue(){
	return 0;
} 
void CIVFLabPhieuDoNitoDialog::OnNguoidoSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFLabPhieuDoNitoDialog::OnNguoidoSelendok(){
	 
}
/*void CIVFLabPhieuDoNitoDialog::OnNguoidoSetfocus(){
	
}*/
/*void CIVFLabPhieuDoNitoDialog::OnNguoidoKillfocus(){
	
}*/
long CIVFLabPhieuDoNitoDialog::OnNguoidoLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndNguoido.IsSearchKey() && !m_szNguoidoKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szNguoidoKey
};
	m_wndNguoido.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndNguoido.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CIVFLabPhieuDoNitoDialog::OnNguoidoAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CIVFLabPhieuDoNitoDialog::OnDiengiaiChange(){
	
} */
/*void CIVFLabPhieuDoNitoDialog::OnDiengiaiSetfocus(){
	
} */
/*void CIVFLabPhieuDoNitoDialog::OnDiengiaiKillfocus(){
	
} */
int CIVFLabPhieuDoNitoDialog::OnDiengiaiCheckValue(){
	return 0;
} 
void CIVFLabPhieuDoNitoDialog::OnThungSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFLabPhieuDoNitoDialog::OnThungSelendok(){
	 
}
/*void CIVFLabPhieuDoNitoDialog::OnThungSetfocus(){
	
}*/
/*void CIVFLabPhieuDoNitoDialog::OnThungKillfocus(){
	
}*/
long CIVFLabPhieuDoNitoDialog::OnThungLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndThung.IsSearchKey() && !m_szThungKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szThungKey
};
	m_wndThung.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndThung.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CIVFLabPhieuDoNitoDialog::OnThungAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CIVFLabPhieuDoNitoDialog::OnAddLineSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFLabPhieuDoNitoDialog::OnListDblClick(){
	
} 
void CIVFLabPhieuDoNitoDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CIVFLabPhieuDoNitoDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CIVFLabPhieuDoNitoDialog::OnListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Thung")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CIVFLabPhieuDoNitoDialog::OnSaveAndAcceptSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFLabPhieuDoNitoDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFLabPhieuDoNitoDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CIVFLabPhieuDoNitoDialog::OnAddIVFLabPhieuDoNitoDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CIVFLabPhieuDoNitoDialog::OnEditIVFLabPhieuDoNitoDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CIVFLabPhieuDoNitoDialog::OnDeleteIVFLabPhieuDoNitoDialog(){
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
 		OnCancelIVFLabPhieuDoNitoDialog();
 	}
	return 0;
}
int CIVFLabPhieuDoNitoDialog::OnSaveIVFLabPhieuDoNitoDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
 		//szSQL = m_ivf_phieu_do_nitoTbl.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
 		szWhere.Format(_T(" WHERE"));
 		//szSQL = m_ivf_phieu_do_nitoTbl.GetUpdateSQL(_T("createdby,createddate"));
 		szSQL += szWhere;
 	}
 _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
 		//OnIVFLabPhieuDoNitoDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CIVFLabPhieuDoNitoDialog::OnCancelIVFLabPhieuDoNitoDialog(){
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
int CIVFLabPhieuDoNitoDialog::OnIVFLabPhieuDoNitoDialogListLoadData(){
	return 0;
}
