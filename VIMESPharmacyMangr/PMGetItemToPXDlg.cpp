#include "PMGetItemToPXDlg.h"
#include "MainFrm.h"
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CPMGetItemToPXDlg*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CPMGetItemToPXDlg*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CPMGetItemToPXDlg*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CPMGetItemToPXDlg*)pWnd)->OnListDeleteItem();
} 
static long _OnSelectedListLoadDataFnc(CWnd *pWnd){
	return ((CPMGetItemToPXDlg*)pWnd)->OnSelectedListLoadData();
} 
static void _OnSelectedListDblClickFnc(CWnd *pWnd){
	((CPMGetItemToPXDlg*)pWnd)->OnSelectedListDblClick();
} 
static void _OnSelectedListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CPMGetItemToPXDlg*)pWnd)->OnSelectedListSelectChange(nOldItem, nNewItem);
} 
static int _OnSelectedListDeleteItemFnc(CWnd *pWnd){
	 return ((CPMGetItemToPXDlg*)pWnd)->OnSelectedListDeleteItem();
} 
static void _OnApplySelectFnc(CWnd *pWnd){
	CPMGetItemToPXDlg *pVw = (CPMGetItemToPXDlg *)pWnd;
	pVw->OnApplySelect();
} 
static int _OnAddPMGetItemToPXDlgFnc(CWnd *pWnd){
	 return ((CPMGetItemToPXDlg*)pWnd)->OnAddPMGetItemToPXDlg();
} 
static int _OnEditPMGetItemToPXDlgFnc(CWnd *pWnd){
	 return ((CPMGetItemToPXDlg*)pWnd)->OnEditPMGetItemToPXDlg();
} 
static int _OnDeletePMGetItemToPXDlgFnc(CWnd *pWnd){
	 return ((CPMGetItemToPXDlg*)pWnd)->OnDeletePMGetItemToPXDlg();
} 
static int _OnSavePMGetItemToPXDlgFnc(CWnd *pWnd){
	 return ((CPMGetItemToPXDlg*)pWnd)->OnSavePMGetItemToPXDlg();
} 
static int _OnCancelPMGetItemToPXDlgFnc(CWnd *pWnd){
	 return ((CPMGetItemToPXDlg*)pWnd)->OnCancelPMGetItemToPXDlg();
} 
CPMGetItemToPXDlg::CPMGetItemToPXDlg(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CPMGetItemToPXDlg::~CPMGetItemToPXDlg(){
}
void CPMGetItemToPXDlg::OnCreateComponents(){
	m_wndList.Create(this,5, 5, 530, 330); 
	m_wndSelectedList.Create(this,535, 4, 860, 329); 
	m_wndApply.Create(this, _T("Apply"), 765, 335, 860, 360);

}
void CPMGetItemToPXDlg::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();


	m_wndList.InsertColumn(0, _T("FeeID"), CFMT_TEXT, 40);
	m_wndList.InsertColumn(1, _T("FeeName"), CFMT_TEXT, 300);
	m_wndList.InsertColumn(2, _T("Price"), CFMT_MONEY, 120);


	m_wndSelectedList.InsertColumn(0, _T("FeeID"), CFMT_TEXT, 40);
	m_wndSelectedList.InsertColumn(1, _T("FeeName"), CFMT_TEXT, 300);
	m_wndSelectedList.InsertColumn(2, _T("Price"), CFMT_MONEY, 120);



}
void CPMGetItemToPXDlg::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndSelectedList.SetEvent(WE_SELCHANGE, _OnSelectedListSelectChangeFnc);
	m_wndSelectedList.SetEvent(WE_LOADDATA, _OnSelectedListLoadDataFnc);
	m_wndSelectedList.SetEvent(WE_DBLCLICK, _OnSelectedListDblClickFnc);
	m_wndSelectedList.AddEvent(1, _T("Delete"), _OnSelectedListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
	OnListLoadData();
	SetMode(VM_ADD);

}
void CPMGetItemToPXDlg::OnDoDataExchange(CDataExchange* pDX){

}
void CPMGetItemToPXDlg::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	}
	else
	{
			
	}

}
void CPMGetItemToPXDlg::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CPMGetItemToPXDlg::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CPMGetItemToPXDlg::SetDefaultValues(){


}
int CPMGetItemToPXDlg::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 4, -1);
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
void CPMGetItemToPXDlg::OnListDblClick(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	int nCel = m_wndList.GetCurSel();

	if(nCel <0)
		return;

	int nIndex = m_wndSelectedList.AddItems(
			m_wndList.GetItemText(nCel,0), 
			m_wndList.GetItemText(nCel,1),
			m_wndList.GetItemText(nCel,2), NULL);
	m_wndList.DeleteItem(nCel);
	m_wndSelectedList.EndLoad();



	
} 
void CPMGetItemToPXDlg::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CPMGetItemToPXDlg::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CPMGetItemToPXDlg::OnListLoadData(){

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;

	szSQL.Format(_T("SELECT hfl_feeid as id, hfl_name as feename, hfl_insprice as price ") \
				_T(" from hms_fee_list ") \
				_T(" where hfl_groupid ='B2600' and hfl_active='Y'  ") \
				_T(" and hfl_feeid not in (select nvl(ma_dv, 'X') from bh_px) ") );
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("feename")), 
			rs.GetValue(_T("price")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;

}
void CPMGetItemToPXDlg::OnSelectedListDblClick(){


	
} 
void CPMGetItemToPXDlg::OnSelectedListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CPMGetItemToPXDlg::OnSelectedListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CPMGetItemToPXDlg::OnSelectedListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndSelectedList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndSelectedList.AddItems(
		rs.MoveNext();
	}
	m_wndSelectedList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CPMGetItemToPXDlg::OnApplySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//lay trong list sau đó insert vào
	CString szSQL,szFeeID,szName;
	CRecord rs(&pMF->m_db);
	long double nPrice=0;
	int nIndex =0;
	for(int i =0; i < m_wndSelectedList.GetItemCount() ; i++)
	{
		szFeeID = m_wndSelectedList.GetItemText(i,0);
		szName = m_wndSelectedList.GetItemText(i,1);
		nPrice = str2long(m_wndSelectedList.GetItemText(i,2));
		//kiem tra xem da co chua cho chac
		szSQL.Format(_T("select count(*) from bh_px where ma_dv='%s'  ") ,szFeeID);
		rs.ExecSQL(szSQL);
		if(rs.GetIntValue() >0)
			continue;

		szSQL.Format(_T("Insert into bh_px (ma_dv,don_gia) values ('%s',%ld) "), szFeeID, nPrice);
		pMF->ExecSQL(szSQL);
		nIndex ++;
	}
	if(nIndex >0)
		OnOK();
	
} 
int CPMGetItemToPXDlg::OnAddPMGetItemToPXDlg(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CPMGetItemToPXDlg::OnEditPMGetItemToPXDlg(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CPMGetItemToPXDlg::OnDeletePMGetItemToPXDlg(){
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
 		OnCancelPMGetItemToPXDlg();
 	}
	return 0;
}
int CPMGetItemToPXDlg::OnSavePMGetItemToPXDlg(){
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
 		//OnPMGetItemToPXDlgListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CPMGetItemToPXDlg::OnCancelPMGetItemToPXDlg(){
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
int CPMGetItemToPXDlg::OnPMGetItemToPXDlgListLoadData(){
	return 0;
}
