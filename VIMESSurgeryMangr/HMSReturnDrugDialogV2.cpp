#include "HMSReturnDrugDialogV2.h"
#include "MainFrm.h"
/*static void _OnItemIDSetfocusFnc(CWnd *pWnd){
	((CHMSReturnDrugDialogV2 *)pWnd)->OnItemIDSetfocus();} */ 
/*static void _OnItemIDKillfocusFnc(CWnd *pWnd){
	((CHMSReturnDrugDialogV2 *)pWnd)->OnItemIDKillfocus();
} */
static int _OnItemIDCheckValueFnc(CWnd *pWnd){
	return ((CHMSReturnDrugDialogV2 *)pWnd)->OnItemIDCheckValue();
} 
/*static void _OnDrugNameChangeFnc(CWnd *pWnd){
	((CHMSReturnDrugDialogV2 *)pWnd)->OnDrugNameChange();
} */
/*static void _OnDrugNameSetfocusFnc(CWnd *pWnd){
	((CHMSReturnDrugDialogV2 *)pWnd)->OnDrugNameSetfocus();} */ 
/*static void _OnDrugNameKillfocusFnc(CWnd *pWnd){
	((CHMSReturnDrugDialogV2 *)pWnd)->OnDrugNameKillfocus();
} */
static int _OnDrugNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSReturnDrugDialogV2 *)pWnd)->OnDrugNameCheckValue();
} 
/*static void _OnUnitChangeFnc(CWnd *pWnd){
	((CHMSReturnDrugDialogV2 *)pWnd)->OnUnitChange();
} */
/*static void _OnUnitSetfocusFnc(CWnd *pWnd){
	((CHMSReturnDrugDialogV2 *)pWnd)->OnUnitSetfocus();} */ 
/*static void _OnUnitKillfocusFnc(CWnd *pWnd){
	((CHMSReturnDrugDialogV2 *)pWnd)->OnUnitKillfocus();
} */
static int _OnUnitCheckValueFnc(CWnd *pWnd){
	return ((CHMSReturnDrugDialogV2 *)pWnd)->OnUnitCheckValue();
} 

/*static void _OnOrderQuantityChangeFnc(CWnd *pWnd){
	((CHMSReturnDrugDialogV2 *)pWnd)->OnOrderQuantityChange();
} */
/*static void _OnOrderQuantitySetfocusFnc(CWnd *pWnd){
	((CHMSReturnDrugDialogV2 *)pWnd)->OnOrderQuantitySetfocus();} */ 
/*static void _OnOrderQuantityKillfocusFnc(CWnd *pWnd){
	((CHMSReturnDrugDialogV2 *)pWnd)->OnOrderQuantityKillfocus();
} */
static int _OnOrderQuantityCheckValueFnc(CWnd *pWnd){
	return ((CHMSReturnDrugDialogV2 *)pWnd)->OnOrderQuantityCheckValue();
} 
/*static void _OnIssueQuantityChangeFnc(CWnd *pWnd){
	((CHMSReturnDrugDialogV2 *)pWnd)->OnIssueQuantityChange();
} */
/*static void _OnIssueQuantitySetfocusFnc(CWnd *pWnd){
	((CHMSReturnDrugDialogV2 *)pWnd)->OnIssueQuantitySetfocus();} */ 
/*static void _OnIssueQuantityKillfocusFnc(CWnd *pWnd){
	((CHMSReturnDrugDialogV2 *)pWnd)->OnIssueQuantityKillfocus();
} */
static int _OnIssueQuantityCheckValueFnc(CWnd *pWnd){
	return ((CHMSReturnDrugDialogV2 *)pWnd)->OnIssueQuantityCheckValue();
} 
static void _OnOKSelectFnc(CWnd *pWnd){
	CHMSReturnDrugDialogV2 *pVw = (CHMSReturnDrugDialogV2 *)pWnd;
	pVw->OnOKSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSReturnDrugDialogV2 *pVw = (CHMSReturnDrugDialogV2 *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddHMSReturnDrugDialogFnc(CWnd *pWnd){
	 return ((CHMSReturnDrugDialogV2*)pWnd)->OnAddHMSReturnDrugDialog();
} 
static int _OnEditHMSReturnDrugDialogFnc(CWnd *pWnd){
	 return ((CHMSReturnDrugDialogV2*)pWnd)->OnEditHMSReturnDrugDialog();
} 
static int _OnDeleteHMSReturnDrugDialogFnc(CWnd *pWnd){
	 return ((CHMSReturnDrugDialogV2*)pWnd)->OnDeleteHMSReturnDrugDialog();
} 
static int _OnSaveHMSReturnDrugDialogFnc(CWnd *pWnd){
	 return ((CHMSReturnDrugDialogV2*)pWnd)->OnSaveHMSReturnDrugDialog();
} 
static int _OnCancelHMSReturnDrugDialogFnc(CWnd *pWnd){
	 return ((CHMSReturnDrugDialogV2*)pWnd)->OnCancelHMSReturnDrugDialog();
} 
CHMSReturnDrugDialogV2::CHMSReturnDrugDialogV2(CWnd *pParent):
	CGuiDialog(pParent){
	m_nDlgWidth = 405;
	m_nDlgHeight = 225;	
	SetDefaultValues();

}
CHMSReturnDrugDialogV2::~CHMSReturnDrugDialogV2(){
}
void CHMSReturnDrugDialogV2::OnCreateComponents(){
	m_wndDrugInformation.Create(this, _T("Drug Information"), 5, 5, 395, 178);	
	m_wndItemIDLabel.Create(this, _T("ItemID"), 10, 29, 150, 54);
	m_wndItemID.Create(this,155, 29, 258, 54); 
	m_wndDrugNameLabel.Create(this, _T("Drug Name"), 10, 59, 150, 84);
	m_wndDrugName.Create(this,155, 59, 389, 84); 
	m_wndUnitLabel.Create(this, _T("Unit"), 10, 89, 150, 114);
	m_wndUnit.Create(this,155, 89, 235, 114);
	m_wndOrderQuantityLabel.Create(this, _T("Order Quantity"), 10, 119, 150, 144);
	m_wndOrderQuantity.Create(this,155, 119, 235, 144); 
	m_wndIssueQuantityLabel.Create(this, _T("Issue Quantity"), 10, 149, 150, 174);
	m_wndIssueQuantity.Create(this,155, 149, 235, 174); 
	m_wndOK.Create(this, _T("&OK"), 239, 187, 314, 212);
	m_wndCancel.Create(this, _T("&Cancel"), 319, 187, 394, 212);

}
void CHMSReturnDrugDialogV2::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndOrderQuantity.SetLimitText(6);
//	m_wndOrderQuantity.SetCheckValue(true);
	m_wndOrderQuantity.SetReadOnly(true);
	m_wndIssueQuantity.SetLimitText(6);
	m_wndIssueQuantity.SetCheckValue(true);
	m_wndItemID.SetLimitText(35);
	m_wndItemID.SetCheckValue(true);
	m_wndDrugName.SetLimitText(35);
	m_wndDrugName.SetCheckValue(true);
	m_wndUnit.SetLimitText(35);
	m_wndUnit.SetCheckValue(true);

}
void CHMSReturnDrugDialogV2::OnSetWindowEvents(){
	//m_wndOrderQuantity.SetEvent(WE_CHANGE, _OnOrderQuantityChangeFnc);
	//m_wndOrderQuantity.SetEvent(WE_SETFOCUS, _OnOrderQuantitySetfocusFnc);
	//m_wndOrderQuantity.SetEvent(WE_KILLFOCUS, _OnOrderQuantityKillfocusFnc);
	m_wndOrderQuantity.SetEvent(WE_CHECKVALUE, _OnOrderQuantityCheckValueFnc);
	//m_wndIssueQuantity.SetEvent(WE_CHANGE, _OnIssueQuantityChangeFnc);
	//m_wndIssueQuantity.SetEvent(WE_SETFOCUS, _OnIssueQuantitySetfocusFnc);
	//m_wndIssueQuantity.SetEvent(WE_KILLFOCUS, _OnIssueQuantityKillfocusFnc);
	m_wndIssueQuantity.SetEvent(WE_CHECKVALUE, _OnIssueQuantityCheckValueFnc);
	//m_wndItemID.SetEvent(WE_CHANGE, _OnItemIDChangeFnc);
	//m_wndItemID.SetEvent(WE_SETFOCUS, _OnItemIDSetfocusFnc);
	//m_wndItemID.SetEvent(WE_KILLFOCUS, _OnItemIDKillfocusFnc);
	m_wndItemID.SetEvent(WE_CHECKVALUE, _OnItemIDCheckValueFnc);
	//m_wndDrugName.SetEvent(WE_CHANGE, _OnDrugNameChangeFnc);
	//m_wndDrugName.SetEvent(WE_SETFOCUS, _OnDrugNameSetfocusFnc);
	//m_wndDrugName.SetEvent(WE_KILLFOCUS, _OnDrugNameKillfocusFnc);
	m_wndDrugName.SetEvent(WE_CHECKVALUE, _OnDrugNameCheckValueFnc);
	//m_wndUnit.SetEvent(WE_CHANGE, _OnUnitChangeFnc);
	//m_wndUnit.SetEvent(WE_SETFOCUS, _OnUnitSetfocusFnc);
	//m_wndUnit.SetEvent(WE_KILLFOCUS, _OnUnitKillfocusFnc);
	m_wndUnit.SetEvent(WE_CHECKVALUE, _OnUnitCheckValueFnc);

	m_wndOK.SetEvent(WE_CLICK, _OnOKSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	GetDataToScreen();
	SetMode(VM_EDIT);

}
void CHMSReturnDrugDialogV2::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndOrderQuantity.GetDlgCtrlID(), m_nOrderQuantity);
	DDX_Text(pDX, m_wndIssueQuantity.GetDlgCtrlID(), m_nIssueQuantity);
	DDX_Text(pDX, m_wndItemID.GetDlgCtrlID(), m_szItemID);
	DDX_Text(pDX, m_wndDrugName.GetDlgCtrlID(), m_szDrugName);
	DDX_Text(pDX, m_wndUnit.GetDlgCtrlID(), m_szUnit);
}
void CHMSReturnDrugDialogV2::GetDataToScreen()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT product_code, product_name, product_uomname, product_countryname ") \
		_T("FROM hms_pharmaorderline left join m_product_view ON(hpol_product_id=product_id) ") \
		_T("WHERE hpol_orderid=%ld and hpol_product_id=%ld "), m_nOrderID, m_nProduct_ID);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF()){
		rs.GetValue(_T("product_code"), m_szItemID);
		rs.GetValue(_T("product_name"), m_szDrugName);
		rs.GetValue(_T("product_uomname"), m_szUnit);
	//	UpdateData(FALSE);

		szSQL.Format(_T("SELECT coalesce(sum(hpolr_qtyreverse), 0) ") \
			_T("FROM hms_ipharmaorderline_r ") \
			_T("WHERE hpolr_orderid=%ld and hpolr_product_id=%ld and hpolr_status <> 'O' "),
			m_nOrderID, m_nProduct_ID);
		rs.ExecSQL(szSQL);
		m_nOrderQuantity -= (float)rs.GetDoubleValue();
	}
}
void CHMSReturnDrugDialogV2::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSReturnDrugDialogV2::SetDefaultValues(){
	m_nOrderQuantity=0;
	m_nIssueQuantity=0;
	m_szItemID.Empty();
	m_szDrugName.Empty();
	m_szUnit.Empty();
}
int CHMSReturnDrugDialogV2::SetMode(int nMode){
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
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 0, 1, -1); 
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
		m_wndIssueQuantity.EnableWindow(true);
		//m_wndOrderQuantity.EnableWindow(true);
 		UpdateData(FALSE); 
 		return nOldMode; 
}
/*void CHMSReturnDrugDialogV2::OnOrderQuantityChange(){
	
} */
/*void CHMSReturnDrugDialogV2::OnOrderQuantitySetfocus(){
	
} */
/*void CHMSReturnDrugDialogV2::OnOrderQuantityKillfocus(){
	
} */
int CHMSReturnDrugDialogV2::OnOrderQuantityCheckValue(){
	return 0;
} 
/*void CHMSReturnDrugDialogV2::OnIssueQuantityChange(){
	
} */
/*void CHMSReturnDrugDialogV2::OnIssueQuantitySetfocus(){
	
} */
/*void CHMSReturnDrugDialogV2::OnIssueQuantityKillfocus(){
	
} */
/*void CHMSReturnDrugDialogV2::OnItemIDChange(){
	
} */
/*void CHMSReturnDrugDialogV2::OnItemIDSetfocus(){
	
} */
/*void CHMSReturnDrugDialogV2::OnItemIDKillfocus(){
	
} */
int CHMSReturnDrugDialogV2::OnItemIDCheckValue(){
	return 0;
} 
/*void CHMSReturnDrugDialogV2::OnDrugNameChange(){
	
} */
/*void CHMSReturnDrugDialogV2::OnDrugNameSetfocus(){
	
} */
/*void CHMSReturnDrugDialogV2::OnDrugNameKillfocus(){
	
} */
int CHMSReturnDrugDialogV2::OnDrugNameCheckValue(){
	return 0;
} 
/*void CHMSReturnDrugDialogV2::OnUnitChange(){
	
} */
/*void CHMSReturnDrugDialogV2::OnUnitSetfocus(){
	
} */
/*void CHMSReturnDrugDialogV2::OnUnitKillfocus(){
	
} */
int CHMSReturnDrugDialogV2::OnUnitCheckValue(){
	return 0;
} 

int CHMSReturnDrugDialogV2::OnIssueQuantityCheckValue(){
	UpdateData(true);
	if(m_nIssueQuantity > m_nOrderQuantity || m_nIssueQuantity <0)
		return -1;
	return 0;
} 
void CHMSReturnDrugDialogV2::OnOKSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(OnSaveHMSReturnDrugDialog() >=0)
		CGuiDialog::OnOK();
} 
void CHMSReturnDrugDialogV2::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CHMSReturnDrugDialogV2::OnAddHMSReturnDrugDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSReturnDrugDialogV2::OnEditHMSReturnDrugDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSReturnDrugDialogV2::OnDeleteHMSReturnDrugDialog(){
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
 		OnCancelHMSReturnDrugDialog(); 
 	}
	return 0;
}
int CHMSReturnDrugDialogV2::OnSaveHMSReturnDrugDialog(){
 	if(GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
	//if(m_nIssueQuantity != m_nOrderQuantity){
 		CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 		CString szSQL; 
		szSQL.Format(_T("HMS_PHARMAORDERLINE_CONFIRM2(%ld, %ld, %.3f, %.3f, '%s') "), 
			m_nOrderID, m_nProduct_ID, m_nUnitPrice,  (m_nOrderQuantity- m_nIssueQuantity), pMF->GetCurrentUser());
//_msg(_T("%s"), szSQL);
		int ret = str2int(pMF->ExecDML(szSQL));
		return ret;
	//}

	return -1;
	

/*	
	if(m_nsItemID > 0)
	{
		szSQL.Format(_T("UPDATE hms_ipharmaorderline SET hpol_issueqty=0,hpol_return='Y' ") \
			_T("WHERE hpol_orderid=%ld AND hpol_product_item_id=%ld and hpol_lnidx=%ld") \
			_T(" and (hfe_status<>'P' or hfe_status is null)  ") \
			_T(" and hpol_return ='Y' and hpol_status='O' ") , m_nOrderID, m_nsItemID, m_nItemID);
		pMF->ExecSQL(szSQL);
		szSQL.Format(_T("SELECT * FROM hms_ipharmaorderline ") \
			_T(" WHERE hpol_orderid=%ld AND hpol_product_item_id=%ld AND (hfe_status<>'P' or hfe_status is null) ") \
			_T(" and hpol_return='Y' and hpol_status='O' and hpol_lnidx=%ld") \
			_T(" ORDER BY hpol_lnidx DESC "), m_nOrderID, m_nsItemID, m_nItemID);
		rs.ExecSQL(szSQL);
		pMF->BeginTransaction();
		long nLineIdx;
		float nQty, nOrderQty;
		nQty = m_nIssueQuantity ;
		
		while(!rs.IsEOF())
		{
			rs.GetValue(_T("hpol_orderqty"), nOrderQty);
			rs.GetValue(_T("hpol_lnidx"), nLineIdx);
			if(nOrderQty >= nQty)
			{
				szSQL.Format(_T("UPDATE hms_ipharmaorderline SET hpol_issueqty=%.2f, hpol_status='R' WHERE hpol_orderid=%ld and hpol_lnidx=%ld AND (hpol_return is null or hpol_return='Y') and (hfe_status<>'P' or hfe_status is null) "), nQty, m_nOrderID, nLineIdx);
				pMF->ExecSQL(szSQL);
				nQty = 0;
			}
			else
			{
				szSQL.Format(_T("UPDATE hms_ipharmaorderline SET hpol_issueqty=%.2f, hpol_status='R'  WHERE hpol_orderid=%ld and hpol_lnidx=%ld AND (hpol_return is null or hpol_return='Y')  and  (hfe_status<>'P' or hfe_status is null) "), nOrderQty, m_nOrderID, nLineIdx);
				pMF->ExecSQL(szSQL);
				nQty -= nOrderQty;
			}
			if(nQty <= 0 )
				break;
			rs.MoveNext();
		}

	//	szSQL.Format(_T("SELECT m_storage_transaction_recalcissue('%s') "), m_szSheetID);
	//	rs.ExecSQL(szSQL);
		pMF->Commit();
	}
*/
/*
	if(!m_szItemID.IsEmpty())
	{
			szSQL.Format(_T("UPDATE hms_ipharmaorderline SET hpol_issueqty=0,hpol_return='Y' ") \
				_T("WHERE hpol_orderid=%ld AND hpol_product_id='%s' and hpol_orderlineid=%d ") \
				_T(" and (hfe_status<>'P' or hfe_status is null)  ") \
				_T(" and (hpol_return is null or hpol_return='Y' ) and hpol_unitprice=%.2f") , m_nOrderID, m_szItemID, m_nIdx, m_nUnitPrice);
			pMF->ExecSQL(szSQL);

			szSQL.Format(_T("SELECT * FROM hms_ipharmaorderline ") \
				_T(" WHERE hpol_orderid=%ld AND hpol_product_id='%s' AND (hfe_status<>'P' or hfe_status is null) ") \
				_T(" and hpol_return='Y' and hpol_orderlineid=%ld and hpol_unitprice=%.2f ") \
				_T(" ORDER BY hpol_lnidx DESC "), m_nOrderID, m_szItemID, m_nIdx, m_nUnitPrice);
			rs.ExecSQL(szSQL);

			long nLineIdx;
			float nQty, nOrderQty;
			nQty = m_nIssueQuantity ;
			
			pMF->BeginTransaction();

			while(!rs.IsEOF())
			{
				rs.GetValue(_T("hpol_orderqty"), nOrderQty);
				rs.GetValue(_T("hpol_lnidx"), nLineIdx);
				if(nOrderQty >= nQty)
				{
					szSQL.Format(_T("UPDATE hms_ipharmaorderline SET hpol_issueqty=%.2f, hpol_status='R' WHERE hpol_orderid=%ld and hpol_lnidx=%ld  "), nQty, m_nOrderID, nLineIdx);
					nQty = 0;
				}
				else
				{
					szSQL.Format(_T("UPDATE hms_ipharmaorderline SET hpol_issueqty=%.2f, hpol_status='R' WHERE hpol_orderid=%ld and hpol_lnidx=%ld  "), nOrderQty, m_nOrderID, nLineIdx);
					nQty -= nOrderQty;
				}
				pMF->ExecSQL(szSQL);

				if(nQty <= 0 )
					break;
				

				rs.MoveNext();
			}

		//	szSQL.Format(_T("SELECT m_storage_transaction_recalcissue('%s') "), m_szSheetID);
		//	rs.ExecSQL(szSQL);
			pMF->Commit();


	}
*/
 	return 1; 
}
int CHMSReturnDrugDialogV2::OnCancelHMSReturnDrugDialog(){
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
int CHMSReturnDrugDialogV2::OnHMSReturnDrugDialogListLoadData(){
	return 0;
}
