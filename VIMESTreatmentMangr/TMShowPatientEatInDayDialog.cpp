#include "TMShowPatientEatInDayDialog.h"
#include "MainFrm.h"
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CTMShowPatientEatInDayDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CTMShowPatientEatInDayDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CTMShowPatientEatInDayDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CTMShowPatientEatInDayDialog*)pWnd)->OnListDeleteItem();
} 
static void _OnOKSelectFnc(CWnd *pWnd){
	CTMShowPatientEatInDayDialog *pVw = (CTMShowPatientEatInDayDialog *)pWnd;
	pVw->OnOKSelect();
} 
static int _OnAddTMShowPatientEatInDayDialogFnc(CWnd *pWnd){
	 return ((CTMShowPatientEatInDayDialog*)pWnd)->OnAddTMShowPatientEatInDayDialog();
} 
static int _OnEditTMShowPatientEatInDayDialogFnc(CWnd *pWnd){
	 return ((CTMShowPatientEatInDayDialog*)pWnd)->OnEditTMShowPatientEatInDayDialog();
} 
static int _OnDeleteTMShowPatientEatInDayDialogFnc(CWnd *pWnd){
	 return ((CTMShowPatientEatInDayDialog*)pWnd)->OnDeleteTMShowPatientEatInDayDialog();
} 
static int _OnSaveTMShowPatientEatInDayDialogFnc(CWnd *pWnd){
	 return ((CTMShowPatientEatInDayDialog*)pWnd)->OnSaveTMShowPatientEatInDayDialog();
} 
static int _OnCancelTMShowPatientEatInDayDialogFnc(CWnd *pWnd){
	 return ((CTMShowPatientEatInDayDialog*)pWnd)->OnCancelTMShowPatientEatInDayDialog();
} 
CTMShowPatientEatInDayDialog::CTMShowPatientEatInDayDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 595;
	m_nDlgHeight = 645;
	SetDefaultValues();
}
CTMShowPatientEatInDayDialog::~CTMShowPatientEatInDayDialog(){
}
void CTMShowPatientEatInDayDialog::OnCreateComponents(){
	m_wndList.Create(this,5, 4, 585, 604); 
	m_wndOK.Create(this, _T("&Ok"), 505, 610, 585, 635);

}
void CTMShowPatientEatInDayDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();


	m_wndList.InsertColumn(0, _T("STT"), CFMT_TEXT, 30);
	m_wndList.InsertColumn(1, _T("Patient Name"), CFMT_TEXT, 180);
	m_wndList.InsertColumn(2, _T("DocumentNo"), CFMT_NUMBER, 70);
	m_wndList.InsertColumn(3, _T("Status Fee"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(4, _T("Phiếu báo ăn"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(5, _T("Order Status"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(6, _T("Ngày báo"), CFMT_DATE, 100);
	


}
void CTMShowPatientEatInDayDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndOK.SetEvent(WE_CLICK, _OnOKSelectFnc);
	SetMode(VM_ADD);
	OnListLoadData();
	
}
void CTMShowPatientEatInDayDialog::OnDoDataExchange(CDataExchange* pDX){

}
void CTMShowPatientEatInDayDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	}
	else
	{
			
	}

}
void CTMShowPatientEatInDayDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CTMShowPatientEatInDayDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CTMShowPatientEatInDayDialog::SetDefaultValues(){


}
int CTMShowPatientEatInDayDialog::SetMode(int nMode){
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
void CTMShowPatientEatInDayDialog::OnListDblClick(){
	
} 
void CTMShowPatientEatInDayDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CTMShowPatientEatInDayDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CTMShowPatientEatInDayDialog::OnListLoadData(){

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL,tmpStr;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	szSQL.Format(_T(" select get_patientname(hfo_docno) as pname, ") \
				_T("       hfo_docno as docno ,") \
				_T("       hfl_name,") \
				_T("       hfe_refstatus, hfos_sheetno as sheetno,") \
				_T("       hfo_orderstatus as orderstatus, hfo_orderdate as orderdate") \
				_T(" from hms_feefood ") \
				_T(" LEFT join hms_foodordersheet on (hfos_orderid= hfo_reforder_id)") \
				_T("  left join  hms_feefoodline on (hfol_docno = hfo_docno AND hfol_orderid= hfo_orderid)") \
				_T("  left join hms_fee_list ON (hfl_feeid= hfol_itemid)") \
				_T("  where trunc_date(hfo_orderdate) = to_date('%s','YYYY-MM-DD')  ") \
				_T("  and hfl_subgroup='NN' ") \
				_T("  and hfo_deptid='%s' ") \
				_T("  order by pname"), m_szOrderDate, pMF->m_szDept);
	nCount = rs.ExecSQL(szSQL);
	int tmpInt=1;
	while(!rs.IsEOF()){ 
		tmpStr.Format(_T("%d"),tmpInt++);
		m_wndList.AddItems(
			tmpStr, 
			rs.GetValue(_T("pname")), 
			rs.GetValue(_T("docno")), 
			rs.GetValue(_T("hfe_refstatus")), 
			rs.GetValue(_T("SheetNo")),
			rs.GetValue(_T("orderstatus")),	
			rs.GetValue(_T("orderdate")),	
			NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;

}
void CTMShowPatientEatInDayDialog::OnOKSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CTMShowPatientEatInDayDialog::OnAddTMShowPatientEatInDayDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CTMShowPatientEatInDayDialog::OnEditTMShowPatientEatInDayDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CTMShowPatientEatInDayDialog::OnDeleteTMShowPatientEatInDayDialog(){
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
 		OnCancelTMShowPatientEatInDayDialog();
 	}
	return 0;
}
int CTMShowPatientEatInDayDialog::OnSaveTMShowPatientEatInDayDialog(){
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
 		//OnTMShowPatientEatInDayDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CTMShowPatientEatInDayDialog::OnCancelTMShowPatientEatInDayDialog(){
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
int CTMShowPatientEatInDayDialog::OnTMShowPatientEatInDayDialogListLoadData(){
	return 0;
}
