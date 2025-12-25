#include "HEDrugListEmergencyDialog.h"
#include "MainFrm.h"
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHEDrugListEmergencyDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHEDrugListEmergencyDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHEDrugListEmergencyDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHEDrugListEmergencyDialog*)pWnd)->OnListDeleteItem();
}
static int _OnListSelectAllFnc(CWnd *pWnd){
	return ((CHEDrugListEmergencyDialog*)pWnd)->OnListSelectAll();
} 
static int _OnListUnSelectAllFnc(CWnd *pWnd){
	 return ((CHEDrugListEmergencyDialog*)pWnd)->OnListUnSelectAll();
} 
static void _OnOKSelectFnc(CWnd *pWnd){
	CHEDrugListEmergencyDialog *pVw = (CHEDrugListEmergencyDialog *)pWnd;
	pVw->OnOKSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHEDrugListEmergencyDialog *pVw = (CHEDrugListEmergencyDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddHEDrugListEmergencyDialogFnc(CWnd *pWnd){
	 return ((CHEDrugListEmergencyDialog*)pWnd)->OnAddHEDrugListEmergencyDialog();
} 
static int _OnEditHEDrugListEmergencyDialogFnc(CWnd *pWnd){
	 return ((CHEDrugListEmergencyDialog*)pWnd)->OnEditHEDrugListEmergencyDialog();
} 
static int _OnDeleteHEDrugListEmergencyDialogFnc(CWnd *pWnd){
	 return ((CHEDrugListEmergencyDialog*)pWnd)->OnDeleteHEDrugListEmergencyDialog();
} 
static int _OnSaveHEDrugListEmergencyDialogFnc(CWnd *pWnd){
	 return ((CHEDrugListEmergencyDialog*)pWnd)->OnSaveHEDrugListEmergencyDialog();
} 
static int _OnCancelHEDrugListEmergencyDialogFnc(CWnd *pWnd){
	 return ((CHEDrugListEmergencyDialog*)pWnd)->OnCancelHEDrugListEmergencyDialog();
} 
CHEDrugListEmergencyDialog::CHEDrugListEmergencyDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 615;
	m_nDlgHeight = 395;
	SetDefaultValues();
}
CHEDrugListEmergencyDialog::~CHEDrugListEmergencyDialog(){
}
void CHEDrugListEmergencyDialog::OnCreateComponents(){
	m_wndList.Create(this,5, 5, 605, 355); 
	m_wndList.SetCheckBox(true);
	m_wndOK.Create(this, _T("&Ok"), 440, 360, 520, 385);
	m_wndCancel.Create(this, _T("&Cancel"), 525, 360, 605, 385);

}
void CHEDrugListEmergencyDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();


	m_wndList.InsertColumn(0, _T("STT"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(1, _T("Drug Name"), CFMT_TEXT, 270);
	m_wndList.InsertColumn(2, _T("Qty"), CFMT_NUMBER, 40);
	m_wndList.InsertColumn(3, _T("Unit"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(4, _T("Usage"), CFMT_TEXT, 300);

}
void CHEDrugListEmergencyDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	//m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndList.AddEvent(1, _T("Select All"), _OnListSelectAllFnc);
	m_wndList.AddEvent(2, _T("Un Select All"), _OnListUnSelectAllFnc);
	m_wndOK.SetEvent(WE_CLICK, _OnOKSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	SetMode(VM_NONE);
	OnListLoadData();

}
void CHEDrugListEmergencyDialog::OnDoDataExchange(CDataExchange* pDX){

}
void CHEDrugListEmergencyDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	}
	else
	{
			
	}

}
void CHEDrugListEmergencyDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHEDrugListEmergencyDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHEDrugListEmergencyDialog::SetDefaultValues(){


}
int CHEDrugListEmergencyDialog::SetMode(int nMode){
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
void CHEDrugListEmergencyDialog::OnListDblClick(){
	
} 
void CHEDrugListEmergencyDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHEDrugListEmergencyDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHEDrugListEmergencyDialog::OnListSelectAll(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	for ( int i=0; i < m_wndList.GetItemCount(); i ++)
	{
		m_wndList.SetCheck(i,true);
	}
	UpdateData(false);
	 return 0;
} 
int CHEDrugListEmergencyDialog::OnListUnSelectAll(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	for ( int i=0; i < m_wndList.GetItemCount(); i ++)
	{
		m_wndList.SetCheck(i,false);
	}
	UpdateData(false);
	 return 0;
} 


long CHEDrugListEmergencyDialog::OnListLoadData(){

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL,tmpStr;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	szSQL.Format(_T(" SELECT ") \
	_T("	product_name as product_name, ") \
	_T("   SUM(hpol_qtyissue)                             AS hpol_qtyissue,") \
	_T("	product_uomname as uomname, ") \
	_T("   hms_getdousage(hpol_orderid, hpol_product_id) AS hpol_usage") \
	_T(" FROM hms_pharmaorder ") \
	_T(" LEFT JOIN	hms_pharmaorderline on (hpol_orderid= hpo_orderid) ") \
	_T(" LEFT JOIN m_productitem_view on (product_item_id = hpol_product_item_id) ") \
	_T(" LEFT JOIN hms_pharmaorder_usage ON(hpou_orderid=hpol_orderid and hpou_product_id=hpol_product_id) ") \
	_T(" WHERE hpo_docno =%ld  AND hpo_ordertype='P' and hpo_orderstatus in ('A','S')  AND hpo_org_id NOT IN ('HA') and product_org_id='PM' ") \
	_T(" GROUP BY product_name,hpol_orderid,hpol_product_id,product_uomname ") \
	_T(" ORDER BY product_name"), m_nDocumentNo);
	nCount = rs.ExecSQL(szSQL);
	int tmpInt =1;
	while(!rs.IsEOF()){ 
		tmpStr.Format(_T("%d"),tmpInt++);
		m_wndList.AddItems(
			tmpStr, 
			rs.GetValue(_T("product_name")), 
			rs.GetValue(_T("hpol_qtyissue")), 
			rs.GetValue(_T("uomname")),
			rs.GetValue(_T("hpol_usage")),
			NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;

}
void CHEDrugListEmergencyDialog::OnOKSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CString szDrug;
	int tmpInt=1;
	CString szDosage;
	for ( int i=0; i < m_wndList.GetItemCount(); i ++)
	{
		if(m_wndList.GetCheck(i))
		{
			if(!m_szDrugInfo.IsEmpty())
				m_szDrugInfo.AppendFormat(_T("\r\n"));
			m_szDrugInfo.AppendFormat(_T(" %d/ %s x %s %s "),tmpInt++,m_wndList.GetItemText(i,1),m_wndList.GetItemText(i,2),m_wndList.GetItemText(i,3) );
			szDosage= m_wndList.GetItemText(i,4);
			if(szDosage.GetLength() >2)
			{
				m_szDrugInfo.AppendFormat(_T("\r\n"));
				m_szDrugInfo.AppendFormat(_T("  %s"),szDosage);
			}
		}
	}
	OnOK();
	
} 
void CHEDrugListEmergencyDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();
	
} 
int CHEDrugListEmergencyDialog::OnAddHEDrugListEmergencyDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHEDrugListEmergencyDialog::OnEditHEDrugListEmergencyDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHEDrugListEmergencyDialog::OnDeleteHEDrugListEmergencyDialog(){
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
 		OnCancelHEDrugListEmergencyDialog();
 	}
	return 0;
}
int CHEDrugListEmergencyDialog::OnSaveHEDrugListEmergencyDialog(){
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
 		//OnHEDrugListEmergencyDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHEDrugListEmergencyDialog::OnCancelHEDrugListEmergencyDialog(){
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
int CHEDrugListEmergencyDialog::OnHEDrugListEmergencyDialogListLoadData(){
	return 0;
}
