#include "HMSCheckDrugExistDialog.h"
#include "MainFrm.h"
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSCheckDrugExistDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSCheckDrugExistDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSCheckDrugExistDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSCheckDrugExistDialog*)pWnd)->OnListDeleteItem();
} 
static int _OnAddHMSCheckDrugExistDialogFnc(CWnd *pWnd){
	 return ((CHMSCheckDrugExistDialog*)pWnd)->OnAddHMSCheckDrugExistDialog();
} 
static int _OnEditHMSCheckDrugExistDialogFnc(CWnd *pWnd){
	 return ((CHMSCheckDrugExistDialog*)pWnd)->OnEditHMSCheckDrugExistDialog();
} 
static int _OnDeleteHMSCheckDrugExistDialogFnc(CWnd *pWnd){
	 return ((CHMSCheckDrugExistDialog*)pWnd)->OnDeleteHMSCheckDrugExistDialog();
} 
static int _OnSaveHMSCheckDrugExistDialogFnc(CWnd *pWnd){
	 return ((CHMSCheckDrugExistDialog*)pWnd)->OnSaveHMSCheckDrugExistDialog();
} 
static int _OnCancelHMSCheckDrugExistDialogFnc(CWnd *pWnd){
	 return ((CHMSCheckDrugExistDialog*)pWnd)->OnCancelHMSCheckDrugExistDialog();
} 
CHMSCheckDrugExistDialog::CHMSCheckDrugExistDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 585;
	m_nDlgHeight = 525;
	SetDefaultValues();
}
CHMSCheckDrugExistDialog::~CHMSCheckDrugExistDialog(){
}
void CHMSCheckDrugExistDialog::OnCreateComponents(){
	m_wndGroupBox.Create(this, _T("Drug order Information"), 5, 5, 570, 515);
	m_wndList.Create(this,10, 30, 564, 510); 

}
void CHMSCheckDrugExistDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	m_wndList.InsertColumn(0, _T("Index"), CFMT_NUMBER, 40);
	m_wndList.InsertColumn(1, _T("Drug Name/ Cnt"), CFMT_TEXT, 180);
	m_wndList.InsertColumn(2, _T("Unit"), CFMT_TEXT, 60);
	m_wndList.InsertColumn(3, _T("Quantity"), CFMT_NUMBER, 60);
	m_wndList.InsertColumn(4, _T("Doctor"), CFMT_TEXT, 140);
	m_wndList.InsertColumn(5, _T("RoomID"), CFMT_TEXT, 60);


}
void CHMSCheckDrugExistDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	SetMode(VM_NONE);
	OnListLoadData();

}
void CHMSCheckDrugExistDialog::OnDoDataExchange(CDataExchange* pDX){

}
void CHMSCheckDrugExistDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSCheckDrugExistDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSCheckDrugExistDialog::SetDefaultValues(){


}
int CHMSCheckDrugExistDialog::SetMode(int nMode){
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
void CHMSCheckDrugExistDialog::OnListDblClick(){
	
} 
void CHMSCheckDrugExistDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSCheckDrugExistDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSCheckDrugExistDialog::OnListLoadData(){
CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szUsage, tmpStr;
	int nIndex=1;
	double totalMoney = 0.0;
	
	m_wndList.DeleteAllItems();	
	m_wndList.BeginLoad(); 
	CString	szOld, szNew;
	int nItem=0;
	szSQL.Format(_T("SELECT hpo_doctor, hpo_orderid,hpo_roomid, ") \
		_T("	hpol_productcode, hpol_productname, hpol_productuom, ") \
		_T("	sum(hpol_qtyissue) as hpol_qtyissue, ") \
		_T("	sum(hpol_unitprice*hpol_qtyissue) as Money ") \
		_T(" FROM hms_pharmaorder ") \
		_T(" LEFT JOIN hms_pharmaorderline_view ON(hpo_orderid=hpol_orderid)") \
		_T(" WHERE hpol_docno=%ld and hpol_productcode IN(%s) ") \
		_T(" GROUP BY hpol_productcode,hpol_productname, hpol_productuom,hpo_doctor,hpo_orderid, hpo_roomid ") \
		_T(" ORDER BY hpo_orderid, hpo_doctor, hpol_productcode"), pMF->m_nDocumentNo, m_szItemID);
	_fmsg(_T("%s"), szSQL);
	rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){		
		tmpStr.Format(_T("%d"), nIndex++);
		nItem = m_wndList.AddItems(
			tmpStr,
			rs.GetValue(_T("hpol_productname")), 
			rs.GetValue(_T("hpol_productuom")), 
			rs.GetValue(_T("hpol_qtyissue")), 
			pMF->GetDoctorName(rs.GetValue(_T("hpo_doctor"))),
			rs.GetValue(_T("hpo_roomid")),
			NULL);	
		if(rs.GetValue(_T("hpol_productcode")).Find(m_szItemID)== 1)
		{
			m_wndList.SetItemBkColor(nItem, RGB(0, 64, 128), FALSE);
			m_wndList.SetItemTextColor(nItem, COLOR_WHITE, FALSE);
		}

		rs.MoveNext();
	}

	m_wndList.EndLoad(); 
	return nItem;
}
int CHMSCheckDrugExistDialog::OnAddHMSCheckDrugExistDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSCheckDrugExistDialog::OnEditHMSCheckDrugExistDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSCheckDrugExistDialog::OnDeleteHMSCheckDrugExistDialog(){
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
 		OnCancelHMSCheckDrugExistDialog(); 
 	}
	return 0;
}
int CHMSCheckDrugExistDialog::OnSaveHMSCheckDrugExistDialog(){
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
 		//OnHMSCheckDrugExistDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSCheckDrugExistDialog::OnCancelHMSCheckDrugExistDialog(){
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
int CHMSCheckDrugExistDialog::OnHMSCheckDrugExistDialogListLoadData(){
	return 0;
}
