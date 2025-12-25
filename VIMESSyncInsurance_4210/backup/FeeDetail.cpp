#include "FeeDetail.h"
#include "MainFrm.h"
static long _Oncontrol_1LoadDataFnc(CWnd *pWnd){
	return ((CFeeDetail*)pWnd)->Oncontrol_1LoadData();
} 
static void _Oncontrol_1DblClickFnc(CWnd *pWnd){
	((CFeeDetail*)pWnd)->Oncontrol_1DblClick();
} 
static void _Oncontrol_1SelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CFeeDetail*)pWnd)->Oncontrol_1SelectChange(nOldItem, nNewItem);
} 
static int _Oncontrol_1DeleteItemFnc(CWnd *pWnd){
	 return ((CFeeDetail*)pWnd)->Oncontrol_1DeleteItem();
} 
static int _OnAddFeeDetailFnc(CWnd *pWnd){
	 return ((CFeeDetail*)pWnd)->OnAddFeeDetail();
} 
static int _OnEditFeeDetailFnc(CWnd *pWnd){
	 return ((CFeeDetail*)pWnd)->OnEditFeeDetail();
} 
static int _OnDeleteFeeDetailFnc(CWnd *pWnd){
	 return ((CFeeDetail*)pWnd)->OnDeleteFeeDetail();
} 
static int _OnSaveFeeDetailFnc(CWnd *pWnd){
	 return ((CFeeDetail*)pWnd)->OnSaveFeeDetail();
} 
static int _OnCancelFeeDetailFnc(CWnd *pWnd){
	 return ((CFeeDetail*)pWnd)->OnCancelFeeDetail();
} 
CFeeDetail::CFeeDetail(){

	m_nDlgWidth = 515;
	m_nDlgHeight = 460;
	SetDefaultValues();
}
CFeeDetail::~CFeeDetail(){
}
void CFeeDetail::OnCreateComponents(){
	m_wndcontrol_1.Create(this,5, 6, 495, 435); 
	
	m_wndcontrol_1.InsertColumn(0, _T("Item"), CFMT_TEXT, 50);
	m_wndcontrol_1.InsertColumn(1, _T("Fee Name"), CFMT_TEXT, 150);
	m_wndcontrol_1.InsertColumn(2, _T("Unit"), CFMT_TEXT, 50);
	m_wndcontrol_1.InsertColumn(3, _T("Content"), CFMT_TEXT, 0);
	m_wndcontrol_1.InsertColumn(4, _T("Qty"), CFMT_NUMBER, 100);
	m_wndcontrol_1.InsertColumn(5, _T("Price"), CFMT_NUMBER, 150);
	m_wndcontrol_1.InsertColumn(6, _T("Amout"), CFMT_NUMBER, 150);
	m_wndcontrol_1.InsertColumn(7, _T("DeptID"), CFMT_TEXT, 150);
	m_wndcontrol_1.InsertColumn(8, _T("ma nhom"), CFMT_TEXT, 0);

}
void CFeeDetail::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);



}
void CFeeDetail::OnSetWindowEvents(){
	m_wndcontrol_1.SetEvent(WE_SELCHANGE, _Oncontrol_1SelectChangeFnc);
	m_wndcontrol_1.SetEvent(WE_LOADDATA, _Oncontrol_1LoadDataFnc);
	m_wndcontrol_1.SetEvent(WE_DBLCLICK, _Oncontrol_1DblClickFnc);
	m_wndcontrol_1.AddEvent(1, _T("Delete"), _Oncontrol_1DeleteItemFnc, 0, VK_DELETE, 0);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddFeeDetailFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditFeeDetailFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteFeeDetailFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveFeeDetailFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelFeeDetailFnc, 0, 'T', VK_CONTROL);

}
void CFeeDetail::OnDoDataExchange(CDataExchange* pDX){

}
void CFeeDetail::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);


}
void CFeeDetail::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CFeeDetail::SetDefaultValues(){


}
int CFeeDetail::SetMode(int nMode){
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
void CFeeDetail::Oncontrol_1DblClick(){
	
} 
void CFeeDetail::Oncontrol_1SelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CFeeDetail::Oncontrol_1DeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CFeeDetail::Oncontrol_1LoadData(){

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CRecord rs1(&pMF->m_db);
	CString szSQL;
	long nQty=0;
	m_wndcontrol_1.BeginLoad(); 
	m_wndcontrol_1.DeleteAllItems(); 
	szSQL.Format(_T("select case when ma_nhom='10' then ma_vat_tu else ma_dich_vu end as ma_dich_vu,ten_dich_vu,don_vi_tinh,sum(so_luong) as so_luong,don_gia,thanh_tien,ma_nhom ") \
				_T("		from bh_bang_ctdv where ma_lk='%s' and thanh_tien >0 ") \
				_T("		GROUP BY ma_dich_vu,ten_dich_vu,don_vi_tinh,don_gia,thanh_tien,ma_nhom,ma_vat_tu ") \
				_T("		order by ma_nhom,ma_dich_vu "),m_szMa_lk);
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndcontrol_1.AddItems(
			rs.GetValue(_T("ma_dich_vu")), 
			rs.GetValue(_T("ten_dich_vu")), 
			rs.GetValue(_T("don_vi_tinh")), 
			rs.GetValue(_T("ham_luong")), 
			rs.GetValue(_T("so_luong")), 
			rs.GetValue(_T("don_gia")),
			rs.GetValue(_T("thanh_tien")), 
			rs.GetValue(_T("ma_khoa")),
			rs.GetValue(_T("ma_nhom")), 
			NULL);
		rs.MoveNext();
	}
	m_wndcontrol_1.EndLoad(); 
	for (int i=0; i< m_wndcontrol_1.GetItemCount();i++)
	{	
		if(m_wndcontrol_1.GetItemText(i,8)!=_T("10"))
		szSQL.Format(_T(" SELECT count(*) from HMS_CIRCULAR_MAP where hcm_map_id='%s' "),m_wndcontrol_1.GetItemText(i,0));

		if(m_wndcontrol_1.GetItemText(i,8)==_T("10"))
		szSQL.Format(_T(" SELECT count(*) from m_product_extra_info where mpei_ma_nhom_vtyt='%s' "),m_wndcontrol_1.GetItemText(i,0));
		rs.ExecSQL(szSQL);
		nQty = rs.GetIntValue();
		if(nQty <=0)
			m_wndcontrol_1.SetSubItemBkColor(i,0,RGB(250, 0, 0), FALSE);
		

	}
	return nCount;

}
int CFeeDetail::OnAddFeeDetail(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CFeeDetail::OnEditFeeDetail(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CFeeDetail::OnDeleteFeeDetail(){
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
 		OnCancelFeeDetail(); 
 	}
	return 0;
}
int CFeeDetail::OnSaveFeeDetail(){
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
 		//OnFeeDetailListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CFeeDetail::OnCancelFeeDetail(){
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
int CFeeDetail::OnFeeDetailListLoadData(){
	return 0;
}
