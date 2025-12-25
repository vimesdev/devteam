#include "TMSetPayRateForDrug.h"
#include "MainFrm.h"
/*static void _OnDrugNameChangeFnc(CWnd *pWnd){
	((CTMSetPayRateForDrug *)pWnd)->OnDrugNameChange();
} */
/*static void _OnDrugNameSetfocusFnc(CWnd *pWnd){
	((CTMSetPayRateForDrug *)pWnd)->OnDrugNameSetfocus();} */ 
/*static void _OnDrugNameKillfocusFnc(CWnd *pWnd){
	((CTMSetPayRateForDrug *)pWnd)->OnDrugNameKillfocus();
} */
static int _OnDrugNameCheckValueFnc(CWnd *pWnd){
	return ((CTMSetPayRateForDrug *)pWnd)->OnDrugNameCheckValue();
} 
static void _OnPayRateSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CTMSetPayRateForDrug* )pWnd)->OnPayRateSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPayRateSelendokFnc(CWnd *pWnd){
	((CTMSetPayRateForDrug *)pWnd)->OnPayRateSelendok();
}
/*static void _OnPayRateSetfocusFnc(CWnd *pWnd){
	((CTMSetPayRateForDrug *)pWnd)->OnPayRateKillfocus();
}*/
/*static void _OnPayRateKillfocusFnc(CWnd *pWnd){
	((CTMSetPayRateForDrug *)pWnd)->OnPayRateKillfocus();
}*/
static long _OnPayRateLoadDataFnc(CWnd *pWnd){
	return ((CTMSetPayRateForDrug *)pWnd)->OnPayRateLoadData();
}
/*static void _OnPayRateAddNewFnc(CWnd *pWnd){
	((CTMSetPayRateForDrug *)pWnd)->OnPayRateAddNew();
}*/
static void _OnOkSelectFnc(CWnd *pWnd){
	CTMSetPayRateForDrug *pVw = (CTMSetPayRateForDrug *)pWnd;
	pVw->OnOkSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CTMSetPayRateForDrug *pVw = (CTMSetPayRateForDrug *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddTMSetPayRateForDrugFnc(CWnd *pWnd){
	 return ((CTMSetPayRateForDrug*)pWnd)->OnAddTMSetPayRateForDrug();
} 
static int _OnEditTMSetPayRateForDrugFnc(CWnd *pWnd){
	 return ((CTMSetPayRateForDrug*)pWnd)->OnEditTMSetPayRateForDrug();
} 
static int _OnDeleteTMSetPayRateForDrugFnc(CWnd *pWnd){
	 return ((CTMSetPayRateForDrug*)pWnd)->OnDeleteTMSetPayRateForDrug();
} 
static int _OnSaveTMSetPayRateForDrugFnc(CWnd *pWnd){
	 return ((CTMSetPayRateForDrug*)pWnd)->OnSaveTMSetPayRateForDrug();
} 
static int _OnCancelTMSetPayRateForDrugFnc(CWnd *pWnd){
	 return ((CTMSetPayRateForDrug*)pWnd)->OnCancelTMSetPayRateForDrug();
} 
CTMSetPayRateForDrug::CTMSetPayRateForDrug(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 370;
	m_nDlgHeight = 125;
	SetDefaultValues();
}
CTMSetPayRateForDrug::~CTMSetPayRateForDrug(){
}
void CTMSetPayRateForDrug::OnCreateComponents(){
	m_wndSetPayRateDeug.Create(this, _T("Set Pay Rate Deug"), 5, 5, 360, 90);
	m_wndDrugNameLabel.Create(this, _T("Drug Name"), 10, 30, 116, 55);
	m_wndDrugName.Create(this,121, 30, 353, 55); 
	m_wndPayRateLabel.Create(this, _T("Pay Rate"), 11, 60, 117, 85);
	m_wndPayRate.Create(this,122, 60, 354, 85); 
	m_wndOk.Create(this, _T("&Apply"), 195, 95, 275, 120);
	m_wndClose.Create(this, _T("&Close"), 280, 95, 360, 120);

}
void CTMSetPayRateForDrug::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndDrugName.SetLimitText(254);
	m_wndDrugName.SetReadOnly(true);
	m_wndPayRate.SetCheckValue(true);
	m_wndPayRate.LimitText(35);


	m_wndPayRate.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndPayRate.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CTMSetPayRateForDrug::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndDrugName.SetEvent(WE_CHANGE, _OnDrugNameChangeFnc);
	//m_wndDrugName.SetEvent(WE_SETFOCUS, _OnDrugNameSetfocusFnc);
	//m_wndDrugName.SetEvent(WE_KILLFOCUS, _OnDrugNameKillfocusFnc);
	m_wndDrugName.SetEvent(WE_CHECKVALUE, _OnDrugNameCheckValueFnc);
	m_wndPayRate.SetEvent(WE_SELENDOK, _OnPayRateSelendokFnc);
	//m_wndPayRate.SetEvent(WE_SETFOCUS, _OnPayRateSetfocusFnc);
	//m_wndPayRate.SetEvent(WE_KILLFOCUS, _OnPayRateKillfocusFnc);
	m_wndPayRate.SetEvent(WE_SELCHANGE, _OnPayRateSelectChangeFnc);
	m_wndPayRate.SetEvent(WE_LOADDATA, _OnPayRateLoadDataFnc);
	//m_wndPayRate.SetEvent(WE_ADDNEW, _OnPayRateAddNewFnc);
	m_wndOk.SetEvent(WE_CLICK, _OnOkSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	GetDataToScreen();
	SetMode(VM_EDIT);

}
void CTMSetPayRateForDrug::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndDrugName.GetDlgCtrlID(), m_szDrugName);
	DDX_TextEx(pDX, m_wndPayRate.GetDlgCtrlID(), m_szPayRateKey);

}
void CTMSetPayRateForDrug::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("DrugName")] =  m_szDrugName;
	m_jData[_T("PayRate")] =  m_szPayRateKey;
	}
	else
	{
			
	m_jData[_T("DrugName")].GetValue(m_szDrugName);
	m_jData[_T("PayRate")].GetValue(m_szPayRateKey);
	}

}
void CTMSetPayRateForDrug::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT max(hpol_payrate) as payrate FROM hms_ipharmaorderline WHERE hpol_docno=%ld and hpol_product_id=%ld "),
		m_nDocumentNo, m_nProduct_ID);

	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("payrate"), m_szPayRateKey);
	}
	if(m_szPayRateKey == _T("100"))
		m_szPayRateKey.Empty();
	_tprintf(_T("\r\n%s\r\nPayrate:%s"), szSQL, m_szPayRateKey);
}
void CTMSetPayRateForDrug::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CTMSetPayRateForDrug::SetDefaultValues(){

	m_szDrugName.Empty();
	m_szPayRateKey.Empty();

}
int CTMSetPayRateForDrug::SetMode(int nMode){
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
 			EnableButtons(TRUE, 0, -1);
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
		m_wndClose.EnableWindow(TRUE);
 		UpdateData(FALSE);
 		return nOldMode;
}
/*void CTMSetPayRateForDrug::OnDrugNameChange(){
	
} */
/*void CTMSetPayRateForDrug::OnDrugNameSetfocus(){
	
} */
/*void CTMSetPayRateForDrug::OnDrugNameKillfocus(){
	
} */
int CTMSetPayRateForDrug::OnDrugNameCheckValue(){
	return 0;
} 
void CTMSetPayRateForDrug::OnPayRateSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CTMSetPayRateForDrug::OnPayRateSelendok(){
	 
}
/*void CTMSetPayRateForDrug::OnPayRateSetfocus(){
	
}*/
/*void CTMSetPayRateForDrug::OnPayRateKillfocus(){
	
}*/
long CTMSetPayRateForDrug::OnPayRateLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	return pMF->LoadSelectionList(&m_wndPayRate, _T("HMS_DRUG_CANCER_PAYRATE"),_T(""));
	/*if(m_wndPayRate.IsSearchKey() && !m_szPayRateKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szPayRateKey);
	 */
	m_wndPayRate.DeleteAllItems(); 
	int nCount = 0;
	//szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	//nCount = rs.ExecSQL(szSQL);
	//while(!rs.IsEOF()){ 
	m_wndPayRate.AddItems(
			_T("30"), 
			_T("30 %"), NULL);
		m_wndPayRate.AddItems(
			_T("50"), 
			_T("50 %"), NULL);

		m_wndPayRate.AddItems(
			_T("70"), 
			_T("70 %"), NULL);
	//	rs.MoveNext();
//	}
	return nCount;

}
/*void CTMSetPayRateForDrug::OnPayRateAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CTMSetPayRateForDrug::OnOkSelect(){
	if(OnSaveTMSetPayRateForDrug())
		CGuiDialog::OnOK();
	else
		ShowMessageBox(_T("Không cập nhật được thông tin"));
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL;
	CRecord rs(&pMF->m_db);
	UpdateData(true);
	if(!m_szPayRateKey.IsEmpty())
	{
		szSQL.Format(_T("update hms_ipharmaorderline set hpol_payrate=%s   ") \
					_T("	where hpol_docno= %ld and hfe_refstatus not in('A','P') and hpol_product_id=%ld and hpol_qtyissue >0 "),
							m_szPayRateKey,m_nDocumentNo,m_nProduct_ID);
		int nCount = rs.ExecSQL(szSQL);
		nCount= rs.GetRecordCount();
		if(nCount >0)
			OnOK();
	}
	else
	{
		_msg(_T(" can chon phan tram cung chi tra"));
	}
*/	
} 

void CTMSetPayRateForDrug::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();	
} 


int CTMSetPayRateForDrug::OnAddTMSetPayRateForDrug(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CTMSetPayRateForDrug::OnEditTMSetPayRateForDrug(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CTMSetPayRateForDrug::OnDeleteTMSetPayRateForDrug(){
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
 		OnCancelTMSetPayRateForDrug();
 	}
	return 0;
}
int CTMSetPayRateForDrug::OnSaveTMSetPayRateForDrug(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
	if(m_szPayRateKey.IsEmpty())
	{
		ShowMessageBox(_T("Yêu cầu chọn tỷ lệ thanh toán"));
		return 0;
	}

	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
	CRecord rs(&pMF->m_db);
	szSQL.Format(_T("update hms_ipharmaorderline set hpol_payrate=%s   ") \
				_T("	where hpol_docno= %ld and hfe_refstatus not in('A','P') and hpol_product_id=%ld and hpol_qtyissue >0 "),
						m_szPayRateKey,m_nDocumentNo,m_nProduct_ID);
_tprintf(_T("\r\n%s"), szSQL);
	int res = pMF->ExecSQL(szSQL);
	return res;

}
int CTMSetPayRateForDrug::OnCancelTMSetPayRateForDrug(){
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
int CTMSetPayRateForDrug::OnTMSetPayRateForDrugListLoadData(){
	return 0;
}
