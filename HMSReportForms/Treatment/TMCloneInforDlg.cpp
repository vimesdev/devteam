#include "stdafx.h"
#include "TMCloneInforDlg.h"
#include "HMSMainFrame.h"
/*static void _OnCurrentOrderIDChangeFnc(CWnd *pWnd){
	((CHMSCloneInforDlg *)pWnd)->OnCurrentOrderIDChange();
} */
/*static void _OnCurrentOrderIDSetfocusFnc(CWnd *pWnd){
	((CHMSCloneInforDlg *)pWnd)->OnCurrentOrderIDSetfocus();} */ 
/*static void _OnCurrentOrderIDKillfocusFnc(CWnd *pWnd){
	((CHMSCloneInforDlg *)pWnd)->OnCurrentOrderIDKillfocus();
} */
static int _OnCurrentOrderIDCheckValueFnc(CWnd *pWnd){
	return ((CHMSCloneInforDlg *)pWnd)->OnCurrentOrderIDCheckValue();
} 
static void _OnFromOrderIDSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSCloneInforDlg* )pWnd)->OnFromOrderIDSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnFromOrderIDSelendokFnc(CWnd *pWnd){
	((CHMSCloneInforDlg *)pWnd)->OnFromOrderIDSelendok();
}
/*static void _OnFromOrderIDSetfocusFnc(CWnd *pWnd){
	((CHMSCloneInforDlg *)pWnd)->OnFromOrderIDKillfocus();
}*/
/*static void _OnFromOrderIDKillfocusFnc(CWnd *pWnd){
	((CHMSCloneInforDlg *)pWnd)->OnFromOrderIDKillfocus();
}*/
static long _OnFromOrderIDLoadDataFnc(CWnd *pWnd){
	return ((CHMSCloneInforDlg *)pWnd)->OnFromOrderIDLoadData();
}
/*static void _OnFromOrderIDAddNewFnc(CWnd *pWnd){
	((CHMSCloneInforDlg *)pWnd)->OnFromOrderIDAddNew();
}*/
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSCloneInforDlg *pVw = (CHMSCloneInforDlg *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSCloneInforDlg *pVw = (CHMSCloneInforDlg *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddCHMSCloneInforDlgFnc(CWnd *pWnd){
	 return ((CHMSCloneInforDlg*)pWnd)->OnAddCHMSCloneInforDlg();
} 
static int _OnEditCHMSCloneInforDlgFnc(CWnd *pWnd){
	 return ((CHMSCloneInforDlg*)pWnd)->OnEditCHMSCloneInforDlg();
} 
static int _OnDeleteCHMSCloneInforDlgFnc(CWnd *pWnd){
	 return ((CHMSCloneInforDlg*)pWnd)->OnDeleteCHMSCloneInforDlg();
} 
static int _OnSaveCHMSCloneInforDlgFnc(CWnd *pWnd){
	 return ((CHMSCloneInforDlg*)pWnd)->OnSaveCHMSCloneInforDlg();
} 
static int _OnCancelCHMSCloneInforDlgFnc(CWnd *pWnd){
	 return ((CHMSCloneInforDlg*)pWnd)->OnCancelCHMSCloneInforDlg();
} 
CHMSCloneInforDlg::CHMSCloneInforDlg(CWnd *pParent):
	CGuiDialog(pParent)
{
	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CHMSCloneInforDlg::~CHMSCloneInforDlg()
{
}
void CHMSCloneInforDlg::OnCreateComponents(){
	m_wndCloneInformation.Create(this, _T("Thông tin phiếu"), 5, 3, 606, 154);
	m_wndCurrentOrderIDLabel.Create(this, _T("Phiếu hiện thời"), 11, 29, 197, 54);
	m_wndCurrentOrderID.Create(this,202, 29, 606, 121); 
	m_wndFromOrderIDLabel.Create(this, _T("Chọn phiếu từ phòng khám"), 11, 125, 197, 150);
	m_wndFromOrderID.Create(this,202, 125, 606, 150); 
	m_wndSave.Create(this, _T("&Save"), 440, 160, 520, 185);
	m_wndCancel.Create(this, _T("&Cancel"), 526, 160, 606, 185);
	m_wndCurrentOrderID.SetReadOnly(true);

}
void CHMSCloneInforDlg::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	
	m_wndCurrentOrderID.SetCheckValue(true);
	m_wndFromOrderID.SetCheckValue(true);
	m_wndFromOrderID.LimitText(35);


	m_wndFromOrderID.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndFromOrderID.InsertColumn(1, _T("Name"), CFMT_TEXT, 400);
	m_wndFromOrderID.InsertColumn(2, _T("Comment"), CFMT_TEXT, 400);

}
void CHMSCloneInforDlg::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//m_wndCurrentOrderID.SetEvent(WE_CHANGE, _OnCurrentOrderIDChangeFnc);
	//m_wndCurrentOrderID.SetEvent(WE_SETFOCUS, _OnCurrentOrderIDSetfocusFnc);
	//m_wndCurrentOrderID.SetEvent(WE_KILLFOCUS, _OnCurrentOrderIDKillfocusFnc);
	m_wndCurrentOrderID.SetEvent(WE_CHECKVALUE, _OnCurrentOrderIDCheckValueFnc);
	m_wndFromOrderID.SetEvent(WE_SELENDOK, _OnFromOrderIDSelendokFnc);
	//m_wndFromOrderID.SetEvent(WE_SETFOCUS, _OnFromOrderIDSetfocusFnc);
	//m_wndFromOrderID.SetEvent(WE_KILLFOCUS, _OnFromOrderIDKillfocusFnc);
	m_wndFromOrderID.SetEvent(WE_SELCHANGE, _OnFromOrderIDSelectChangeFnc);
	m_wndFromOrderID.SetEvent(WE_LOADDATA, _OnFromOrderIDLoadDataFnc);
	//m_wndFromOrderID.SetEvent(WE_ADDNEW, _OnFromOrderIDAddNewFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	GetDataToScreen();
	SetMode(VM_EDIT);	

}
void CHMSCloneInforDlg::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndCurrentOrderID.GetDlgCtrlID(), m_szCurrentOrderID);
	DDX_TextEx(pDX, m_wndFromOrderID.GetDlgCtrlID(), m_szFromOrderIDKey);

}
void CHMSCloneInforDlg::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("CurrentOrderID")] =  m_szCurrentOrderID;
	m_jData[_T("FromOrderID")] =  m_szFromOrderIDKey;
	}
	else
	{
			
	m_jData[_T("CurrentOrderID")].GetValue(m_szCurrentOrderID);
	m_jData[_T("FromOrderID")].GetValue(m_szFromOrderIDKey);
	}

}
void CHMSCloneInforDlg::GetDataToScreen()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T(" SELECT ho_idx as ma,") \
	_T(" hfl_name as ten,") \
	_T(" HO_DIAGNOSTIC as ghichu") \
	_T(" from hms_operation") \
	_T(" left join hms_fee_list ON (ho_itemid = hfl_feeid)") \
	_T(" where ho_docno=%ld and ho_idx=%ld") \
	_T(" order by ho_idx"), m_nDocumentNo, m_nOrderId);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("ten"), m_szCurrentOrderID);
		//_msg(_T("%s"), m_szCurrentOrderID);
		
	}

}
void CHMSCloneInforDlg::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CHMSCloneInforDlg::SetDefaultValues(){

	
	m_szFromOrderIDKey.Empty();

}
int CHMSCloneInforDlg::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
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
		
 		UpdateData(FALSE);
 		return nOldMode;
}
/*void CHMSCloneInforDlg::OnCurrentOrderIDChange(){
	
} */
/*void CHMSCloneInforDlg::OnCurrentOrderIDSetfocus(){
	
} */
/*void CHMSCloneInforDlg::OnCurrentOrderIDKillfocus(){
	
} */
int CHMSCloneInforDlg::OnCurrentOrderIDCheckValue(){
	return 0;
} 
void CHMSCloneInforDlg::OnFromOrderIDSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CHMSCloneInforDlg::OnFromOrderIDSelendok(){
	 
}
/*void CHMSCloneInforDlg::OnFromOrderIDSetfocus(){
	
}*/
/*void CHMSCloneInforDlg::OnFromOrderIDKillfocus(){
	
}*/
long CHMSCloneInforDlg::OnFromOrderIDLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndFromOrderID.IsSearchKey() && !m_szFromOrderIDKey.IsEmpty())
	{
	 szWhere.Format(_T(" and ho_idx='%s' "), m_szFromOrderIDKey);
	};
	m_wndFromOrderID.DeleteAllItems(); 
	int nCount = 0;

	szSQL.Format(_T(" SELECT ho_idx as ma,") \
	_T(" hfl_name as ten,") \
	_T(" HO_DIAGNOSTIC as ghichu") \
	_T(" from hms_operation") \
	_T(" left join hms_fee_list ON (ho_itemid = hfl_feeid)") \
	_T(" where ho_docno=%ld") \
	_T(" and NVL(HFL_SOKETMO_PK, 'N') = 'Y' %s") \
	_T(" order by ho_idx"), m_nDocumentNo, szWhere);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF())
	{ 
		m_wndFromOrderID.AddItems
			(
			rs.GetValue(_T("ma")),
			rs.GetValue(_T("ten")),
			rs.GetValue(_T("ghichu")), NULL);
		rs.MoveNext();
	}
	return nCount;	
}
/*void CHMSCloneInforDlg::OnFromOrderIDAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CHMSCloneInforDlg::OnSaveSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szSQL;
	long nFromOrderID;
	nFromOrderID = str2long(m_wndFromOrderID.GetCurrent(0));

	szSQL.Format(_T("HMS_BEFOREOPT_CLONE(%ld, '%s', %ld, %ld) "), m_nDocumentNo, pMF->GetCurrentDepartmentID(), nFromOrderID, m_nOrderId);
	int ret = str2int(pMF->ExecDML(szSQL));
	//_msg(_T("%s"), szSQL);
	if (ret > 0)
		CGuiDialog::OnOK();
	else
		AfxMessageBox(_T("Update failed!"));
	
} 
void CHMSCloneInforDlg::OnCancelSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnCancel();
	
} 
int CHMSCloneInforDlg::OnAddCHMSCloneInforDlg(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSCloneInforDlg::OnEditCHMSCloneInforDlg(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSCloneInforDlg::OnDeleteCHMSCloneInforDlg(){
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
 		OnCancelCHMSCloneInforDlg();
 	}
	return 0;
}
int CHMSCloneInforDlg::OnSaveCHMSCloneInforDlg(){
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
 		//OnCHMSCloneInforDlgListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSCloneInforDlg::OnCancelCHMSCloneInforDlg(){
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
int CHMSCloneInforDlg::OnCHMSCloneInforDlgListLoadData()
{
	return 0;
}