#include "HMSPhacDoDetailView.h"
#include "HMSMainFrame.h"
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSPhacDoDetailView*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSPhacDoDetailView*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSPhacDoDetailView*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSPhacDoDetailView*)pWnd)->OnListDeleteItem();
} 
static int _OnAddHMSPhacDoDetailViewFnc(CWnd *pWnd){
	 return ((CHMSPhacDoDetailView*)pWnd)->OnAddHMSPhacDoDetailView();
} 
static int _OnEditHMSPhacDoDetailViewFnc(CWnd *pWnd){
	 return ((CHMSPhacDoDetailView*)pWnd)->OnEditHMSPhacDoDetailView();
} 
static int _OnDeleteHMSPhacDoDetailViewFnc(CWnd *pWnd){
	 return ((CHMSPhacDoDetailView*)pWnd)->OnDeleteHMSPhacDoDetailView();
} 
static int _OnSaveHMSPhacDoDetailViewFnc(CWnd *pWnd){
	 return ((CHMSPhacDoDetailView*)pWnd)->OnSaveHMSPhacDoDetailView();
} 
static int _OnCancelHMSPhacDoDetailViewFnc(CWnd *pWnd){
	 return ((CHMSPhacDoDetailView*)pWnd)->OnCancelHMSPhacDoDetailView();
} 
CHMSPhacDoDetailView::CHMSPhacDoDetailView(){

	m_nDlgWidth = 465;
	m_nDlgHeight = 605;
	SetDefaultValues();
}
CHMSPhacDoDetailView::~CHMSPhacDoDetailView(){
}
void CHMSPhacDoDetailView::OnCreateComponents(){
	m_wndList.Create(this,5, 5, 455, 595); 

}
void CHMSPhacDoDetailView::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

	
	m_wndList.InsertColumn(0, _T("idx"), CFMT_TEXT, 0);
	m_wndList.InsertColumn(1, _T("STT"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(2, _T("ID"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(3, _T("Name"), CFMT_TEXT, 300);

}
void CHMSPhacDoDetailView::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSPhacDoDetailViewFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSPhacDoDetailViewFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSPhacDoDetailViewFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSPhacDoDetailViewFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSPhacDoDetailViewFnc, 0, 'T', VK_CONTROL);

	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);

	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);


	SetMode(VM_NONE);

}
void CHMSPhacDoDetailView::OnDoDataExchange(CDataExchange* pDX){

}
void CHMSPhacDoDetailView::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	}
	else
	{
			
	}

}
void CHMSPhacDoDetailView::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSPhacDoDetailView::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CHMSPhacDoDetailView::SetDefaultValues(){


}
int CHMSPhacDoDetailView::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
 		CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
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
void CHMSPhacDoDetailView::OnListDblClick(){
	
} 
void CHMSPhacDoDetailView::OnListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CHMSPhacDoDetailView::OnListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//neu la type CLS thi se dc pphep xoa
	CString szType,szItemID,szSQL,szWhere;
	/*if(m_nType==0)
		return -1;*/

	int nSel = m_wndList.GetCurSel();
	if(nSel < 0)
		return -2;

	szItemID = m_wndList.GetItemText(nSel,2);
	if(m_nType ==0)
		szType = _T("ICD");
	if(m_nType ==1)
		szType = _T("CLS");
	if(m_nType ==2)
		szType = _T("DRU");
	 


	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;

	if(m_nPhacDoLineID >0) 
		szWhere.Format(_T(" and hms_phacdo_day_id= %ld "),m_nPhacDoLineID);
 	szSQL.Format(_T("DELETE FROM hms_phacdo_line where hms_phacdo_id =%ld and typeid= '%s' and itemid='%s' %s "),m_nPhacDoId, szType, szItemID ,szWhere );
 	int ret = pMF->ExecSQL(szSQL);
	if(ret >0)
		OnListLoadData();
	
	
	
	 return 0;
} 
long CHMSPhacDoDetailView::OnListLoadData(){

	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL,szWhere;
	m_wndList.BeginLoad(); 
	if(m_nPhacDoLineID >0)
		szWhere.Format(_T(" and hms_phacdo_day_id=%ld"), m_nPhacDoLineID);
	int nCount = 0;
	if(m_nType==0)
		szSQL.Format(_T("SELECT hi_icd as icd, hi_name as icd_name ,0 as idx from hms_icd where hi_icd in (select itemid from hms_phacdo_line  where hms_phacdo_id=%ld and typeid='ICD') "),m_nPhacDoId );
	if(m_nType==1)
		szSQL.Format(_T("SELECT hfl_feeid as icd, hfl_name as icd_name  ,0 as idx from hms_fee_list where hfl_feeid in (select itemid from hms_phacdo_line  where hms_phacdo_id=%ld %s and typeid='CLS') "),m_nPhacDoId,szWhere );
	if(m_nType==2)
		szSQL.Format(_T("select itemid as icd, mpc_name as icd_name, idx from hms_phacdo_line ") \
				_T(" left join m_product_class on (  mpc_product_class_id = cast(itemid as integer) )  ") \
				_T("	where hms_phacdo_id =%ld and typeid ='DRU' %s order by idx "), m_nPhacDoId,szWhere);
	nCount = rs.ExecSQL(szSQL);
	int nIndex=1;
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("idx")), 
			int2str(nIndex++),
			rs.GetValue(_T("icd")), 
			rs.GetValue(_T("icd_name")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}
int CHMSPhacDoDetailView::OnAddHMSPhacDoDetailView(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSPhacDoDetailView::OnEditHMSPhacDoDetailView(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSPhacDoDetailView::OnDeleteHMSPhacDoDetailView(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
 	szSQL.Format(_T("DELETE FROM  WHERE  AND") );
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
 		SetMode(VM_NONE);
 		OnCancelHMSPhacDoDetailView();
 	}
	return 0;
}
int CHMSPhacDoDetailView::OnSaveHMSPhacDoDetailView(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
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
 		//OnHMSPhacDoDetailViewListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSPhacDoDetailView::OnCancelHMSPhacDoDetailView(){
 	if(GetMode() == VM_EDIT)
 	{
 		SetMode(VM_VIEW);
 	} 
 	else 
 	{
 		SetMode(VM_NONE);
 	} 
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
 	return 0;
} 
int CHMSPhacDoDetailView::OnHMSPhacDoDetailViewListLoadData(){
	return 0;
}
