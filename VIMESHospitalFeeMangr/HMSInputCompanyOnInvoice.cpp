#include "HMSInputCompanyOnInvoice.h"
#include "MainFrm.h"
static void _OnCompanyNameSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSInputCompanyToInvoice* )pWnd)->OnCompanyNameSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnCompanyNameSelendokFnc(CWnd *pWnd){
	((CHMSInputCompanyToInvoice *)pWnd)->OnCompanyNameSelendok();
}
/*static void _OnCompanyNameSetfocusFnc(CWnd *pWnd){
	((CHMSInputCompanyToInvoice *)pWnd)->OnCompanyNameKillfocus();
}*/
/*static void _OnCompanyNameKillfocusFnc(CWnd *pWnd){
	((CHMSInputCompanyToInvoice *)pWnd)->OnCompanyNameKillfocus();
}*/
static long _OnCompanyNameLoadDataFnc(CWnd *pWnd){
	return ((CHMSInputCompanyToInvoice *)pWnd)->OnCompanyNameLoadData();
}
/*static void _OnCompanyNameAddNewFnc(CWnd *pWnd){
	((CHMSInputCompanyToInvoice *)pWnd)->OnCompanyNameAddNew();
}*/
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSInputCompanyToInvoice *pVw = (CHMSInputCompanyToInvoice *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSInputCompanyToInvoice *pVw = (CHMSInputCompanyToInvoice *)pWnd;
	pVw->OnCancelSelect();
} 
/*static void _OnDetailInforChangeFnc(CWnd *pWnd){
	((CHMSInputCompanyToInvoice *)pWnd)->OnDetailInforChange();
} */
/*static void _OnDetailInforSetfocusFnc(CWnd *pWnd){
	((CHMSInputCompanyToInvoice *)pWnd)->OnDetailInforSetfocus();} */ 
/*static void _OnDetailInforKillfocusFnc(CWnd *pWnd){
	((CHMSInputCompanyToInvoice *)pWnd)->OnDetailInforKillfocus();
} */
static int _OnDetailInforCheckValueFnc(CWnd *pWnd){
	return ((CHMSInputCompanyToInvoice *)pWnd)->OnDetailInforCheckValue();
} 
static int _OnAddCHMSInputCompanyToInvoiceFnc(CWnd *pWnd){
	 return ((CHMSInputCompanyToInvoice*)pWnd)->OnAddCHMSInputCompanyToInvoice();
} 
static int _OnEditCHMSInputCompanyToInvoiceFnc(CWnd *pWnd){
	 return ((CHMSInputCompanyToInvoice*)pWnd)->OnEditCHMSInputCompanyToInvoice();
} 
static int _OnDeleteCHMSInputCompanyToInvoiceFnc(CWnd *pWnd){
	 return ((CHMSInputCompanyToInvoice*)pWnd)->OnDeleteCHMSInputCompanyToInvoice();
} 
static int _OnSaveCHMSInputCompanyToInvoiceFnc(CWnd *pWnd){
	 return ((CHMSInputCompanyToInvoice*)pWnd)->OnSaveCHMSInputCompanyToInvoice();
} 
static int _OnCancelCHMSInputCompanyToInvoiceFnc(CWnd *pWnd){
	 return ((CHMSInputCompanyToInvoice*)pWnd)->OnCancelCHMSInputCompanyToInvoice();
} 
CHMSInputCompanyToInvoice::CHMSInputCompanyToInvoice(CWnd *pParent):
CGuiDialog(pParent)
{
	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CHMSInputCompanyToInvoice::~CHMSInputCompanyToInvoice()
{
}
void CHMSInputCompanyToInvoice::OnCreateComponents()
{
	m_wndDescGroupBox.Create(this, _T("THÔNG TIN KHÁCH HÀNG"), 5, 4, 495, 60);
	m_wndCompanyNameLabel.Create(this, _T("Tên công ty"), 7, 29, 106, 59);
	m_wndCompanyName.Create(this,111, 29, 495, 59); 
	m_wndSave.Create(this, _T("Save"), 331, 182, 411, 207);
	m_wndCancel.Create(this, _T("Close"), 415, 182, 495, 207);
	m_wndDetailInforLabel.Create(this, _T("Chi tiết"), 7, 66, 106, 91);
	m_wndDetailInfor.Create(this,111, 66, 495, 177, true, false, true);
	//m_wndDetailInfor.SetReadOnly(true);

}
void CHMSInputCompanyToInvoice::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndCompanyName.SetCheckValue(true);
	m_wndCompanyName.LimitText(1024);
	m_wndDetailInfor.SetLimitText(512);
	m_wndDetailInfor.SetCheckValue(true);

	m_wndCompanyName.InsertColumn(0, _T("Id"), CFMT_NUMBER, 150);
	m_wndCompanyName.InsertColumn(1, _T("Description"), CFMT_TEXT, 500);

}
void CHMSInputCompanyToInvoice::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndCompanyName.SetEvent(WE_SELENDOK, _OnCompanyNameSelendokFnc);
	//m_wndCompanyName.SetEvent(WE_SETFOCUS, _OnCompanyNameSetfocusFnc);
	//m_wndCompanyName.SetEvent(WE_KILLFOCUS, _OnCompanyNameKillfocusFnc);
	m_wndCompanyName.SetEvent(WE_SELCHANGE, _OnCompanyNameSelectChangeFnc);
	m_wndCompanyName.SetEvent(WE_LOADDATA, _OnCompanyNameLoadDataFnc);
	//m_wndCompanyName.SetEvent(WE_ADDNEW, _OnCompanyNameAddNewFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	//m_wndDetailInfor.SetEvent(WE_CHANGE, _OnDetailInforChangeFnc);
	//m_wndDetailInfor.SetEvent(WE_SETFOCUS, _OnDetailInforSetfocusFnc);
	//m_wndDetailInfor.SetEvent(WE_KILLFOCUS, _OnDetailInforKillfocusFnc);
	m_wndDetailInfor.SetEvent(WE_CHECKVALUE, _OnDetailInforCheckValueFnc);
	//Lấy ra thông tin công ty nếu đã có
	GetDataToScreen();
	UpdateData(FALSE);

}
void CHMSInputCompanyToInvoice::OnDoDataExchange(CDataExchange* pDX)
{
	DDX_TextEx(pDX, m_wndCompanyName.GetDlgCtrlID(), m_szCompanyNameKey);
	DDX_Text(pDX, m_wndDetailInfor.GetDlgCtrlID(), m_szDetailInfor);

}
void CHMSInputCompanyToInvoice::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("CompanyName")] =  m_szCompanyNameKey;
	m_jData[_T("DetailInfor")] =  m_szDetailInfor;
	}
	else
	{
			
	m_jData[_T("CompanyName")].GetValue(m_szCompanyNameKey);
	m_jData[_T("DetailInfor")].GetValue(m_szDetailInfor);
	}

}
void CHMSInputCompanyToInvoice::GetDataToScreen()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();	
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr;	
	
	szSQL.Format(_T(" SELECT hee_company2_id, '[' || hee_company2_id || '] ' || COM_NAME AS COM_NAME from hms_exm_employee") \
	_T(" left join hms_doc ON (hee_patientno = hd_patientno)") \
	_T(" left join M_COMPANY_LIST ON (hee_company2_id = COM_CODE)") \
	_T(" where hd_docno= %ld"), pMF->m_nDocumentNo);

	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("hee_company2_id"), m_szCompanyNameKey);
		rs.GetValue(_T("COM_NAME"), m_szDetailInfor);		
	}

	if (!m_szCompanyNameKey.IsEmpty())
		{
			m_wndCompanyName.EnableWindow(false);
			m_wndDetailInfor.EnableWindow(false);
		}

}
void CHMSInputCompanyToInvoice::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSInputCompanyToInvoice::SetDefaultValues(){

	m_szCompanyNameKey.Empty();
	m_szDetailInfor.Empty();

}
int CHMSInputCompanyToInvoice::SetMode(int nMode)
{
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
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
 			EnableButtons(TRUE, 0, 1, -1);
 			break;
 		case VM_NONE: 
 			EnableControls(FALSE);
 			EnableButtons(TRUE, 0, 1, -1);
 			SetDefaultValues();
 			break;
 		};
		//Nếu chưa có công ty thì ô nhập công ty sẽ sáng lên		
		
 		UpdateData(FALSE);
 		return nOldMode;
}
void CHMSInputCompanyToInvoice::OnCompanyNameSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSInputCompanyToInvoice::OnCompanyNameSelendok()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szCompanyID, szCompanyName;
	szCompanyID = m_wndCompanyName.GetCurrent(0);
	szCompanyName = m_wndCompanyName.GetCurrent(1);
	m_szCompanyNameKey = szCompanyID;
	m_szDetailInfor = _T("[") + szCompanyID + _T("] ") + szCompanyName;
	UpdateData(FALSE);

	 
}
/*void CHMSInputCompanyToInvoice::OnCompanyNameSetfocus(){
	
}*/
/*void CHMSInputCompanyToInvoice::OnCompanyNameKillfocus(){
	
}*/
long CHMSInputCompanyToInvoice::OnCompanyNameLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndCompanyName.IsSearchKey() && !m_szCompanyNameKey.IsEmpty())
	{
		szWhere.Format(_T(" and COM_CODE='%s' "), m_szCompanyNameKey);
	};
	m_wndCompanyName.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT COM_CODE as id, COM_NAME as name FROM M_COMPANY_LIST WHERE COM_ISACTIVE='Y' %s ORDER BY COM_NAME "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
	while(!rs.IsEOF())
	{ 
		m_wndCompanyName.AddItems
		(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSInputCompanyToInvoice::OnCompanyNameAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSInputCompanyToInvoice::OnSaveSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnOK();
	
} 
void CHMSInputCompanyToInvoice::OnCancelSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();
	
} 
/*void CHMSInputCompanyToInvoice::OnDetailInforChange(){
	
} */
/*void CHMSInputCompanyToInvoice::OnDetailInforSetfocus(){
	
} */
/*void CHMSInputCompanyToInvoice::OnDetailInforKillfocus(){
	
} */
int CHMSInputCompanyToInvoice::OnDetailInforCheckValue(){
	return 0;
} 
int CHMSInputCompanyToInvoice::OnAddCHMSInputCompanyToInvoice(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSInputCompanyToInvoice::OnEditCHMSInputCompanyToInvoice(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSInputCompanyToInvoice::OnDeleteCHMSInputCompanyToInvoice(){
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
 		OnCancelCHMSInputCompanyToInvoice();
 	}
	return 0;
}
int CHMSInputCompanyToInvoice::OnSaveCHMSInputCompanyToInvoice(){
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
 		//OnCHMSInputCompanyToInvoiceListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSInputCompanyToInvoice::OnCancelCHMSInputCompanyToInvoice(){
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
int CHMSInputCompanyToInvoice::OnCHMSInputCompanyToInvoiceListLoadData(){
	return 0;
}