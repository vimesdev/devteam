#include "ProductUpdateDialog.h"
#include "MainFrame_E10.h"

/*static void _OnTenChangeFnc(CWnd *pWnd){
	((ProductUpdateDialog *)pWnd)->OnTenChange();
} */
/*static void _OnTenSetfocusFnc(CWnd *pWnd){
	((ProductUpdateDialog *)pWnd)->OnTenSetfocus();} */ 
/*static void _OnTenKillfocusFnc(CWnd *pWnd){
	((ProductUpdateDialog *)pWnd)->OnTenKillfocus();
} */
static int _OnTenCheckValueFnc(CWnd *pWnd)
{
	return ((ProductUpdateDialog *)pWnd)->OnTenCheckValue();
} 
/*static void _OnTen_AXChangeFnc(CWnd *pWnd){
	((ProductUpdateDialog *)pWnd)->OnTen_AXChange();
} */
/*static void _OnTen_AXSetfocusFnc(CWnd *pWnd){
	((ProductUpdateDialog *)pWnd)->OnTen_AXSetfocus();} */ 
/*static void _OnTen_AXKillfocusFnc(CWnd *pWnd){
	((ProductUpdateDialog *)pWnd)->OnTen_AXKillfocus();
} */
static int _OnTen_AXCheckValueFnc(CWnd *pWnd){
	return ((ProductUpdateDialog *)pWnd)->OnTen_AXCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	ProductUpdateDialog *pVw = (ProductUpdateDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	ProductUpdateDialog *pVw = (ProductUpdateDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddHMSOperationUpdateDialogFnc(CWnd *pWnd){
	 return ((ProductUpdateDialog*)pWnd)->OnAddHMSOperationUpdateDialog();
} 
static int _OnEditHMSOperationUpdateDialogFnc(CWnd *pWnd){
	 return ((ProductUpdateDialog*)pWnd)->OnEditHMSOperationUpdateDialog();
} 
static int _OnDeleteHMSOperationUpdateDialogFnc(CWnd *pWnd){
	 return ((ProductUpdateDialog*)pWnd)->OnDeleteHMSOperationUpdateDialog();
} 
static int _OnSaveHMSOperationUpdateDialogFnc(CWnd *pWnd){
	 return ((ProductUpdateDialog*)pWnd)->OnSaveHMSOperationUpdateDialog();
} 
static int _OnCancelHMSOperationUpdateDialogFnc(CWnd *pWnd){
	 return ((ProductUpdateDialog*)pWnd)->OnCancelHMSOperationUpdateDialog();
} 

static int _OnmahieuCheckValueFnc(CWnd *pWnd)
{
	return ((ProductUpdateDialog *)pWnd)->OnmahieuCheckValue();
} 

ProductUpdateDialog::ProductUpdateDialog(CWnd *pParent):
	CGuiDialog(pParent)
{
	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
ProductUpdateDialog::~ProductUpdateDialog()
{
}
void ProductUpdateDialog::OnCreateComponents()
{
	/*m_wndDescGroupBox.Create(this, _T("Thông tin hàng"), 5, 4, 505, 230);
	m_wndTenLabel.Create(this, _T("Tên"), 10, 29, 100, 125);
	m_wndTen.Create(this,102, 28, 505, 124, true, false, true); 
	m_wndTen_AXLabel.Create(this, _T("Tên ánh xạ"), 10, 130, 100, 226);
	m_wndTen_AX.Create(this,102, 130, 505, 226, true, false, true); 
	m_wndSave.Create(this, _T("Save"), 340, 236, 420, 261);
	m_wndCancel.Create(this, _T("Cancel"), 425, 236, 505, 261);
	m_wndTen.SetReadOnly(true);*/

	m_wndTen.Create(this,102, 28, 505, 124, true, false, true); 
	m_wndTenLabel.Create(this, _T("Tên"), 10, 29, 100, 125);
	m_wndTen_AXLabel.Create(this, _T("Tên ánh xạ"), 10, 130, 100, 226);
	m_wndDescGroupBox.Create(this, _T("Thông tin hàng"), 5, 4, 505, 332);
	m_wndTen_AX.Create(this,102, 130, 505, 226, true, false, true); 
	m_wndMahieu_label.Create(this, _T("Mã hiệu"), 10, 232, 100, 328);
	m_wndmahieu.Create(this,102, 232, 505, 328, true, false, true);
	m_wndSave.Create(this, _T("Save"), 340, 339, 420, 364);
	m_wndCancel.Create(this, _T("Cancel"), 425, 339, 505, 364);
	m_wndTen.SetReadOnly(true);

}
void ProductUpdateDialog::OnInitializeComponents()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndTen.SetMultiLine(TRUE);
	m_wndTen.SetLimitText(1024);
	m_wndTen.SetCheckValue(true);
	m_wndTen_AX.SetMultiLine(TRUE);
	m_wndTen_AX.SetLimitText(1024);
	m_wndTen_AX.SetCheckValue(true);

	m_productTbl.SetTableName(_T("m_product"));
	m_productTbl.AddField(_T("MP_NAME"), dfText, 1024);
	m_productTbl.AddField(_T("mp_name_ax"), dfText, 512);
	m_productTbl.AddField(_T("MP_UPDATEDBY"), dfText, 32);
	m_productTbl.AddField(_T("MP_MA_HIEU"), dfText, 256);

}
void ProductUpdateDialog::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//m_wndTen.SetEvent(WE_CHANGE, _OnTenChangeFnc);
	//m_wndTen.SetEvent(WE_SETFOCUS, _OnTenSetfocusFnc);
	//m_wndTen.SetEvent(WE_KILLFOCUS, _OnTenKillfocusFnc);
	m_wndTen.SetEvent(WE_CHECKVALUE, _OnTenCheckValueFnc);
	//m_wndTen_AX.SetEvent(WE_CHANGE, _OnTen_AXChangeFnc);
	//m_wndTen_AX.SetEvent(WE_SETFOCUS, _OnTen_AXSetfocusFnc);
	//m_wndTen_AX.SetEvent(WE_KILLFOCUS, _OnTen_AXKillfocusFnc);
	m_wndTen_AX.SetEvent(WE_CHECKVALUE, _OnTen_AXCheckValueFnc);
	m_wndmahieu.SetEvent(WE_CHECKVALUE, _OnmahieuCheckValueFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	//SetMode(VM_EDIT);
	GetDataToScreen();

}
void ProductUpdateDialog::OnDoDataExchange(CDataExchange* pDX)
{
	DDX_Text(pDX, m_wndTen.GetDlgCtrlID(), m_szTen);
	DDX_Text(pDX, m_wndTen_AX.GetDlgCtrlID(), m_szTen_AX);
	DDX_Text(pDX, m_wndmahieu.GetDlgCtrlID(), m_szmahieu);


}
void ProductUpdateDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Ten")] =  m_szTen;
	m_jData[_T("Ten_AX")] =  m_szTen_AX;
	m_jData[_T("mahieu")] =  m_szmahieu;
	}
	else
	{
			
	m_jData[_T("Ten")].GetValue(m_szTen);
	m_jData[_T("Ten_AX")].GetValue(m_szTen_AX);
	m_jData[_T("mahieu")].GetValue(m_szmahieu);
	}

}
void ProductUpdateDialog::GetDataToScreen()
{	
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM m_product WHERE MP_PRODUCT_ID=%ld"), m_nProductID);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("MP_NAME"),  m_szTen); 
		rs.GetValue(_T("mp_name_ax"),  m_szTen_AX);		
		rs.GetValue(_T("MP_MA_HIEU"),  m_szmahieu);	
	}
	SetMode(VM_EDIT);	
}
void ProductUpdateDialog::GetScreenToData()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString tmpStr, tmpStr1, tmpStr2;
	
	if(!m_szTen.IsEmpty())
		tmpStr.AppendFormat(_T("%s"), m_szTen);	

	m_productTbl.SetValue(_T("MP_NAME"), tmpStr);

	if(!m_szTen_AX.IsEmpty())
		tmpStr1.AppendFormat(_T("%s"), m_szTen_AX);

	m_productTbl.SetValue(_T("mp_name_ax"), tmpStr1);

	if(!m_szmahieu.IsEmpty())
		tmpStr2.AppendFormat(_T("%s"), m_szmahieu);

	m_productTbl.SetValue(_T("MP_MA_HIEU"), tmpStr2);
	
	m_productTbl.SetValue(_T("MP_UPDATEDBY"), pMF->GetCurrentUser());

	if(!m_szmahieu.IsEmpty())
		tmpStr2.AppendFormat(_T("%s"), m_szmahieu);

}
void ProductUpdateDialog::SetDefaultValues()
{

	m_szTen.Empty();
	m_szTen_AX.Empty();
	m_szmahieu.Empty();

}
int ProductUpdateDialog::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, -1);
 			SetDefaultValues();
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, -1);
 			break;
 		case VM_VIEW: 
 			EnableControls(FALSE);
 			EnableButtons(FALSE, 0, 6, -1);
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
/*void ProductUpdateDialog::OnTenChange(){
	
} */
/*void ProductUpdateDialog::OnTenSetfocus(){
	
} */
/*void ProductUpdateDialog::OnTenKillfocus(){
	
} */
int ProductUpdateDialog::OnTenCheckValue(){
	return 0;
} 

int ProductUpdateDialog::OnmahieuCheckValue()
{
	return 0;
} 


/*void ProductUpdateDialog::OnTen_AXChange(){
	
} */
/*void ProductUpdateDialog::OnTen_AXSetfocus(){
	
} */
/*void ProductUpdateDialog::OnTen_AXKillfocus(){
	
} */
int ProductUpdateDialog::OnTen_AXCheckValue()
{
	return 0;
} 
void ProductUpdateDialog::OnSaveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnSaveHMSOperationUpdateDialog();
	 	{
	 		CGuiDialog::OnOK();
	 	}
	
} 
void ProductUpdateDialog::OnCancelSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnCancel();
} 
int ProductUpdateDialog::OnAddHMSOperationUpdateDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int ProductUpdateDialog::OnEditHMSOperationUpdateDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int ProductUpdateDialog::OnDeleteHMSOperationUpdateDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	CString szSQL;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
 	szSQL.Format(_T("DELETE FROM  WHERE  AND") );
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
 		SetMode(VM_NONE);
 		OnCancelHMSOperationUpdateDialog();
 	}
	return 0;
}
int ProductUpdateDialog::OnSaveHMSOperationUpdateDialog()
{
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
 		//szSQL = m_tblTbl.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
 		szWhere.Format(_T(" WHERE MP_PRODUCT_ID = %ld "), m_nProductID);
 		szSQL = m_productTbl.GetUpdateSQL();
 		szSQL += szWhere;
 	}
 //_msg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
 		//OnEM_OperationTen_AXDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int ProductUpdateDialog::OnCancelHMSOperationUpdateDialog(){
 	if(GetMode() == VM_EDIT)
 	{
 		SetMode(VM_VIEW);
 	} 
 	else 
 	{
 		SetMode(VM_NONE);
 	} 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	return 0;
} 
int ProductUpdateDialog::OnHMSOperationUpdateDialogListLoadData(){
	return 0;
}
