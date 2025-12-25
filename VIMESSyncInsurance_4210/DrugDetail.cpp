#include "DrugDetail.h"
#include "MainFrm.h"
static long _Oncontrol_1LoadDataFnc(CWnd *pWnd){
	return ((CDrugDetail*)pWnd)->Oncontrol_1LoadData();
} 
static void _Oncontrol_1DblClickFnc(CWnd *pWnd){
	((CDrugDetail*)pWnd)->Oncontrol_1DblClick();
} 
static void _Oncontrol_1SelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CDrugDetail*)pWnd)->Oncontrol_1SelectChange(nOldItem, nNewItem);
} 
static int _Oncontrol_1DeleteItemFnc(CWnd *pWnd){
	 return ((CDrugDetail*)pWnd)->Oncontrol_1DeleteItem();
} 
static int _OnAddDrugDetailFnc(CWnd *pWnd){
	 return ((CDrugDetail*)pWnd)->OnAddDrugDetail();
} 
static int _OnEditDrugDetailFnc(CWnd *pWnd){
	 return ((CDrugDetail*)pWnd)->OnEditDrugDetail();
} 
static int _OnDeleteDrugDetailFnc(CWnd *pWnd){
	 return ((CDrugDetail*)pWnd)->OnDeleteDrugDetail();
} 
static int _OnSaveDrugDetailFnc(CWnd *pWnd){
	 return ((CDrugDetail*)pWnd)->OnSaveDrugDetail();
} 
static int _OnCancelDrugDetailFnc(CWnd *pWnd){
	 return ((CDrugDetail*)pWnd)->OnCancelDrugDetail();
} 
CDrugDetail::CDrugDetail(){

	m_nDlgWidth = 515;
	m_nDlgHeight = 460;
	SetDefaultValues();
}
CDrugDetail::~CDrugDetail(){
}
void CDrugDetail::OnCreateComponents()
{
	m_wndcontrol_1.Create(this,5, 6, 1000, 435); 
	m_wndcontrol_1.InsertColumn(0, _T("STT"), CFMT_TEXT, 50);
	m_wndcontrol_1.InsertColumn(1, _T("Item"), CFMT_TEXT, 80);
	m_wndcontrol_1.InsertColumn(2, _T("Drug Name"), CFMT_TEXT, 250);
	m_wndcontrol_1.InsertColumn(3, _T("Unit"), CFMT_TEXT, 80);
	m_wndcontrol_1.InsertColumn(4, _T("Content"), CFMT_TEXT, 100);
	m_wndcontrol_1.InsertColumn(5, _T("Qty"), CFMT_NUMBER, 60);
	m_wndcontrol_1.InsertColumn(6, _T("Price"), CFMT_TEXT, 100);
	m_wndcontrol_1.InsertColumn(7, _T("Tỷ lệ TT"), CFMT_TEXT, 50);
	m_wndcontrol_1.InsertColumn(8, _T("Amout"), CFMT_NUMBER, 150);
	m_wndcontrol_1.InsertColumn(9, _T("t_bhtt"), CFMT_NUMBER, 150);
	m_wndcontrol_1.InsertColumn(10, _T("DeptID"), CFMT_TEXT, 80);
	m_wndcontrol_1.InsertColumn(11, _T("ma nhom"), CFMT_TEXT, 0);
	m_wndcontrol_1.InsertColumn(12, _T("tt_thau"), CFMT_TEXT, 120);
	m_wndcontrol_1.InsertColumn(13, _T("duong_dung"), CFMT_TEXT, 100);
}
void CDrugDetail::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(TRUE);
	//EnableButtons(TRUE, 0, -1);




}
void CDrugDetail::OnSetWindowEvents(){
	m_wndcontrol_1.SetEvent(WE_SELCHANGE, _Oncontrol_1SelectChangeFnc);
	m_wndcontrol_1.SetEvent(WE_LOADDATA, _Oncontrol_1LoadDataFnc);
	m_wndcontrol_1.SetEvent(WE_DBLCLICK, _Oncontrol_1DblClickFnc);
	m_wndcontrol_1.AddEvent(1, _T("Delete"), _Oncontrol_1DeleteItemFnc, 0, VK_DELETE, 0);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddDrugDetailFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditDrugDetailFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteDrugDetailFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveDrugDetailFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelDrugDetailFnc, 0, 'T', VK_CONTROL);

}
void CDrugDetail::OnDoDataExchange(CDataExchange* pDX){

}
void CDrugDetail::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);
	Oncontrol_1LoadData();

}
void CDrugDetail::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void CDrugDetail::SetDefaultValues(){


}
int CDrugDetail::SetMode(int nMode){
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
void CDrugDetail::Oncontrol_1DblClick(){
	
} 
void CDrugDetail::Oncontrol_1SelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CDrugDetail::Oncontrol_1DeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CDrugDetail::Oncontrol_1LoadData(){

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr;
	long nQty=0;
	double n_thanh_tien = 0;
	double n_t_bhtt = 0;
	double n_thanh_tien_total = 0;
	double n_t_bhtt_total = 0;
	m_wndcontrol_1.BeginLoad(); 
	m_wndcontrol_1.DeleteAllItems(); 
	szSQL.Format(_T("select ma_thuoc,ten_thuoc,don_vi_tinh,ham_luong,sum(so_luong) as so_luong,don_gia,SUM(thanh_tien) as thanh_tien, SUM(t_bhtt) as t_bhtt, ma_nhom,tt_thau,duong_dung, TYLE_TT ") \
				_T("	from BH_BANG_CTTHUOC where ma_lk='%s' ") \
				_T("	GROUP BY ma_thuoc,ten_thuoc,don_vi_tinh,ham_luong,don_gia,thanh_tien,t_bhtt,ma_nhom,tt_thau,duong_dung,TYLE_TT ") \
				_T("	order by ma_nhom,ma_thuoc"),m_szMa_lk );
	//_msg(_T("%s"),szSQL);
	int nCount = 0;
	int nIndex=1;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF())
	{ 
		//_msg(_T("%s"),rs.GetValue(_T("ma_thuoc")));
		rs.GetValue(_T("thanh_tien"), n_thanh_tien);
		rs.GetValue(_T("t_bhtt"), n_t_bhtt);
		n_t_bhtt_total += n_t_bhtt;
		n_thanh_tien_total += n_thanh_tien;
		tmpStr.Format(_T("%d"),nIndex++);
		m_wndcontrol_1.AddItems
			(
			tmpStr,
			rs.GetValue(_T("ma_thuoc")), 
			rs.GetValue(_T("ten_thuoc")), 
			rs.GetValue(_T("don_vi_tinh")), 
			rs.GetValue(_T("ham_luong")), 
			rs.GetValue(_T("so_luong")), 
			rs.GetValue(_T("don_gia")),
			rs.GetValue(_T("tyle_tt")),
			rs.GetValue(_T("thanh_tien")),
			rs.GetValue(_T("t_bhtt")),
			rs.GetValue(_T("ma_khoa")),
			rs.GetValue(_T("ma_nhom")),
			rs.GetValue(_T("tt_thau")),
			rs.GetValue(_T("duong_dung")),
			NULL);
		rs.MoveNext();
	}
	if(n_thanh_tien_total > 0)
	{
		TranslateString(_T("Total"), tmpStr);
		int nItem = m_wndcontrol_1.AddItems(_T(""),_T(""),_T(""),_T(""),_T(""),_T(""),tmpStr,_T(""),ToString(n_thanh_tien_total), ToString(n_t_bhtt_total), NULL);
		m_wndcontrol_1.SetItemBkColor(nItem, RGB(192, 192, 192), FALSE);
		m_wndcontrol_1.SetItemTextColor(nItem, RGB(0, 0, 255), FALSE);
		m_wndcontrol_1.MergeCell(nItem, 0, nItem, 5, DT_LEFT|DT_VCENTER|DT_SINGLELINE, false, true);		
	}
	m_wndcontrol_1.EndLoad(); 
	/*for (int i=0; i< m_wndcontrol_1.GetItemCount()-1;i++)
	{	
		
		if(m_wndcontrol_1.GetItemText(i,10)!=_T("7"))
		szSQL.Format(_T(" SELECT count(*) from m_product_extra_info where mpei_ma_hoat_chat='%s' "),m_wndcontrol_1.GetItemText(i,1));
		rs.ExecSQL(szSQL);
		nQty = rs.GetIntValue();
		if(nQty <=0)
			m_wndcontrol_1.SetSubItemBkColor(i,1,RGB(250, 0, 0), FALSE);

	}*/
	return nCount;

}
int CDrugDetail::OnAddDrugDetail(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CDrugDetail::OnEditDrugDetail(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CDrugDetail::OnDeleteDrugDetail(){
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
 		OnCancelDrugDetail(); 
 	}
	return 0;
}
int CDrugDetail::OnSaveDrugDetail(){
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
 		//OnDrugDetailListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CDrugDetail::OnCancelDrugDetail(){
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
int CDrugDetail::OnDrugDetailListLoadData(){
	return 0;
}
