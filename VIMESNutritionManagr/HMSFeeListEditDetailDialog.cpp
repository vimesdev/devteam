#include "HMSFeeListEditDetailDialog.h"
#include "MainFrm.h"
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSFeeListEditDetailDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSFeeListEditDetailDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSFeeListEditDetailDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSFeeListEditDetailDialog*)pWnd)->OnListDeleteItem();
} 

static long _OnListDetailLoadDataFnc(CWnd *pWnd){
	return ((CHMSFeeListEditDetailDialog*)pWnd)->OnListDetailLoadData();
} 
static void _OnListDetailDblClickFnc(CWnd *pWnd){
	((CHMSFeeListEditDetailDialog*)pWnd)->OnListDetailDblClick();
} 
static void _OnListDetailSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSFeeListEditDetailDialog*)pWnd)->OnListDetailSelectChange(nOldItem, nNewItem);
} 
static int _OnListDetailDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSFeeListEditDetailDialog*)pWnd)->OnListDetailDeleteItem();
} 

static int _OnAddHMSFeeListEditDetailDialogFnc(CWnd *pWnd){
	 return ((CHMSFeeListEditDetailDialog*)pWnd)->OnAddHMSFeeListEditDetailDialog();
} 
static int _OnEditHMSFeeListEditDetailDialogFnc(CWnd *pWnd){
	 return ((CHMSFeeListEditDetailDialog*)pWnd)->OnEditHMSFeeListEditDetailDialog();
} 
static int _OnDeleteHMSFeeListEditDetailDialogFnc(CWnd *pWnd){
	 return ((CHMSFeeListEditDetailDialog*)pWnd)->OnDeleteHMSFeeListEditDetailDialog();
} 
static int _OnSaveHMSFeeListEditDetailDialogFnc(CWnd *pWnd){
	 return ((CHMSFeeListEditDetailDialog*)pWnd)->OnSaveHMSFeeListEditDetailDialog();
} 
static int _OnCancelHMSFeeListEditDetailDialogFnc(CWnd *pWnd){
	 return ((CHMSFeeListEditDetailDialog*)pWnd)->OnCancelHMSFeeListEditDetailDialog();
} 
CHMSFeeListEditDetailDialog::CHMSFeeListEditDetailDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 855;
	m_nDlgHeight = 415;
	SetDefaultValues();
}
CHMSFeeListEditDetailDialog::~CHMSFeeListEditDetailDialog(){
}
void CHMSFeeListEditDetailDialog::OnCreateComponents(){
	m_wndCurrentInformation.Create(this, _T("Information current"), 5, 5, 845, 130);
	m_wndDetailInformation.Create(this, _T("Information Detail"), 5, 135, 845, 405);
	m_wndList.Create(this,10, 30, 840, 125); 
	m_wndListDetail.Create(this,10, 160, 840, 400);
}
void CHMSFeeListEditDetailDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();	
	m_wndList.InsertColumn(0, _T("ID"), CFMT_TEXT, 85);
	m_wndList.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);
	m_wndList.InsertColumn(2, _T("Unit"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(3, _T("Service Price"), CFMT_MONEY, 100);
	m_wndList.InsertColumn(4, _T("Insurance Price"), CFMT_MONEY, 120);
	m_wndList.InsertColumn(5, _T("Policy Price"), CFMT_MONEY, 100);
	m_wndList.InsertColumn(6, _T("Updatedby"), CFMT_TEXT, 60);
	m_wndList.InsertColumn(7, _T("Updateddate"), CFMT_DATETIME, 50);
	m_wndList.InsertColumn(8, _T("Ins Diff Payment"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(9, _T("Pol Diff Payment"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(10, _T("Hitech"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(11, _T("Plastic Surgery"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(12, _T("Hitech Machine"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(13, _T("Active"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(14, _T("Host Name"), CFMT_TEXT, 150);

	m_wndListDetail.InsertColumn(0, _T("ID"), CFMT_TEXT, 85);
	m_wndListDetail.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);
	m_wndListDetail.InsertColumn(2, _T("Unit"), CFMT_TEXT, 50);
	m_wndListDetail.InsertColumn(3, _T("Service Price"), CFMT_MONEY, 100);
	m_wndListDetail.InsertColumn(4, _T("Insurance Price"), CFMT_MONEY, 120);
	m_wndListDetail.InsertColumn(5, _T("Policy Price"), CFMT_MONEY, 100);
	m_wndListDetail.InsertColumn(6, _T("Updatedby"), CFMT_TEXT, 60);
	m_wndListDetail.InsertColumn(7, _T("Updateddate"), CFMT_DATETIME, 120);
	m_wndListDetail.InsertColumn(8, _T("Ins Diff Payment"), CFMT_TEXT, 50);
	m_wndListDetail.InsertColumn(9, _T("Pol Diff Payment"), CFMT_TEXT, 50);
	m_wndListDetail.InsertColumn(10, _T("Hitech"), CFMT_TEXT, 50);
	m_wndListDetail.InsertColumn(11, _T("Plastic Surgery"), CFMT_TEXT, 50);
	m_wndListDetail.InsertColumn(12, _T("Hitech Machine"), CFMT_TEXT, 50);
	m_wndListDetail.InsertColumn(13, _T("Active"), CFMT_TEXT, 50);
	m_wndListDetail.InsertColumn(14, _T("Host Name"), CFMT_TEXT, 150);

}
void CHMSFeeListEditDetailDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);

	m_wndListDetail.SetEvent(WE_SELCHANGE, _OnListDetailSelectChangeFnc);
	m_wndListDetail.SetEvent(WE_LOADDATA, _OnListDetailLoadDataFnc);
	m_wndListDetail.SetEvent(WE_DBLCLICK, _OnListDetailDblClickFnc);
	//m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	SetMode(VM_NONE);
	OnListLoadData();
	OnListDetailLoadData();

}
void CHMSFeeListEditDetailDialog::OnDoDataExchange(CDataExchange* pDX){

}
void CHMSFeeListEditDetailDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSFeeListEditDetailDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSFeeListEditDetailDialog::SetDefaultValues(){


}
int CHMSFeeListEditDetailDialog::SetMode(int nMode){
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
void CHMSFeeListEditDetailDialog::OnListDblClick(){
	
} 
void CHMSFeeListEditDetailDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSFeeListEditDetailDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSFeeListEditDetailDialog::OnListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;	
	szSQL.Format(	_T(" SELECT ") \
					_T(" 	*") \
					_T(" FROM") \
					_T(" 	hms_fee_list") \
					_T(" WHERE") \
					_T(" 	hfl_feeid='%s' ") \
					_T(" ORDER BY") \
					_T(" 	hfl_line,") \
					_T(" 	hfl_feeid"), m_szFeeID);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("hfl_feeid")), 
			rs.GetValue(_T("hfl_name")), 
			rs.GetValue(_T("hfl_unit")), 
			rs.GetValue(_T("hfl_servprice")), 
			rs.GetValue(_T("hfl_insprice")), 
			rs.GetValue(_T("hfl_polprice")), 
			rs.GetValue(_T("hfl_updatedby")),
			rs.GetValue(_T("hfl_updateddate")),
			rs.GetValue(_T("hfl_insdiff")),
			rs.GetValue(_T("hfl_poldiff")),			
			rs.GetValue(_T("hfl_plasticsurgery")),
			rs.GetValue(_T("hfl_hitechmachine")),
			rs.GetValue(_T("hfl_hitech")),
			rs.GetValue(_T("hfl_active")),
			rs.GetValue(_T("hfl_hostname")),
			NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 	m_wndList.EndLoad(); 
	return nCount;

}

void CHMSFeeListEditDetailDialog::OnListDetailDblClick(){
	
} 
void CHMSFeeListEditDetailDialog::OnListDetailSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSFeeListEditDetailDialog::OnListDetailDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSFeeListEditDetailDialog::OnListDetailLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndListDetail.BeginLoad(); 
	int nCount = 0;	
	szSQL.Format(	_T(" SELECT ") \
					_T(" 	*") \
					_T(" FROM") \
					_T(" 	hms_fee_List_edit") \
					_T(" WHERE") \
					_T(" 	hfl_feeid='%s' ") \
					_T(" ORDER BY hfl_updateddate DESC, ") \
					_T(" 	hfl_line,") \
					_T(" 	hfl_feeid"), m_szFeeID);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndListDetail.AddItems(
			rs.GetValue(_T("hfl_feeid")), 
			rs.GetValue(_T("hfl_name")), 
			rs.GetValue(_T("hfl_unit")), 
			rs.GetValue(_T("hfl_servprice")), 
			rs.GetValue(_T("hfl_insprice")), 
			rs.GetValue(_T("hfl_polprice")), 
			rs.GetValue(_T("hfl_updatedby")),
			rs.GetValue(_T("hfl_updateddate")),
			rs.GetValue(_T("hfl_insdiff")),
			rs.GetValue(_T("hfl_poldiff")),			
			rs.GetValue(_T("hfl_plasticsurgery")),
			rs.GetValue(_T("hfl_hitechmachine")),
			rs.GetValue(_T("hfl_hitech")),
			rs.GetValue(_T("hfl_active")),
			rs.GetValue(_T("hfl_hostname")),
			NULL);
		rs.MoveNext();
	}
	m_wndListDetail.EndLoad(); 	m_wndListDetail.EndLoad(); 
	return nCount;

}

int CHMSFeeListEditDetailDialog::OnAddHMSFeeListEditDetailDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSFeeListEditDetailDialog::OnEditHMSFeeListEditDetailDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSFeeListEditDetailDialog::OnDeleteHMSFeeListEditDetailDialog(){
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
 		OnCancelHMSFeeListEditDetailDialog();
 	}
	return 0;
}
int CHMSFeeListEditDetailDialog::OnSaveHMSFeeListEditDetailDialog(){
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
 		//OnHMSFeeListEditDetailDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSFeeListEditDetailDialog::OnCancelHMSFeeListEditDetailDialog(){
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
int CHMSFeeListEditDetailDialog::OnHMSFeeListEditDetailDialogListLoadData(){
	return 0;
}
