#include "HMSOperationScheduleMaterialPopup.h"
#include "MainFrm.h"
/*static void _OnOrderNoChangeFnc(CWnd *pWnd){
	((CHMSOperationScheduleMaterialPopup *)pWnd)->OnOrderNoChange();
} */
/*static void _OnOrderNoSetfocusFnc(CWnd *pWnd){
	((CHMSOperationScheduleMaterialPopup *)pWnd)->OnOrderNoSetfocus();} */ 
/*static void _OnOrderNoKillfocusFnc(CWnd *pWnd){
	((CHMSOperationScheduleMaterialPopup *)pWnd)->OnOrderNoKillfocus();
} */
static int _OnOrderNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSOperationScheduleMaterialPopup *)pWnd)->OnOrderNoCheckValue();
} 
/*static void _OnOrderDateChangeFnc(CWnd *pWnd){
	((CHMSOperationScheduleMaterialPopup *)pWnd)->OnOrderDateChange();
} */
/*static void _OnOrderDateSetfocusFnc(CWnd *pWnd){
	((CHMSOperationScheduleMaterialPopup *)pWnd)->OnOrderDateSetfocus();} */ 
/*static void _OnOrderDateKillfocusFnc(CWnd *pWnd){
	((CHMSOperationScheduleMaterialPopup *)pWnd)->OnOrderDateKillfocus();
} */
static int _OnOrderDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSOperationScheduleMaterialPopup *)pWnd)->OnOrderDateCheckValue();
} 
static void _OnPerformDeptSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSOperationScheduleMaterialPopup* )pWnd)->OnPerformDeptSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPerformDeptSelendokFnc(CWnd *pWnd){
	((CHMSOperationScheduleMaterialPopup *)pWnd)->OnPerformDeptSelendok();
}
/*static void _OnPerformDeptSetfocusFnc(CWnd *pWnd){
	((CHMSOperationScheduleMaterialPopup *)pWnd)->OnPerformDeptKillfocus();
}*/
/*static void _OnPerformDeptKillfocusFnc(CWnd *pWnd){
	((CHMSOperationScheduleMaterialPopup *)pWnd)->OnPerformDeptKillfocus();
}*/
static long _OnPerformDeptLoadDataFnc(CWnd *pWnd){
	return ((CHMSOperationScheduleMaterialPopup *)pWnd)->OnPerformDeptLoadData();
}
/*static void _OnPerformDeptAddNewFnc(CWnd *pWnd){
	((CHMSOperationScheduleMaterialPopup *)pWnd)->OnPerformDeptAddNew();
}*/
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSOperationScheduleMaterialPopup *pVw = (CHMSOperationScheduleMaterialPopup *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSOperationScheduleMaterialPopup *pVw = (CHMSOperationScheduleMaterialPopup *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSOperationScheduleMaterialPopupFnc(CWnd *pWnd){
	 return ((CHMSOperationScheduleMaterialPopup*)pWnd)->OnAddHMSOperationScheduleMaterialPopup();
} 
static int _OnEditHMSOperationScheduleMaterialPopupFnc(CWnd *pWnd){
	 return ((CHMSOperationScheduleMaterialPopup*)pWnd)->OnEditHMSOperationScheduleMaterialPopup();
} 
static int _OnDeleteHMSOperationScheduleMaterialPopupFnc(CWnd *pWnd){
	 return ((CHMSOperationScheduleMaterialPopup*)pWnd)->OnDeleteHMSOperationScheduleMaterialPopup();
} 
static int _OnSaveHMSOperationScheduleMaterialPopupFnc(CWnd *pWnd){
	 return ((CHMSOperationScheduleMaterialPopup*)pWnd)->OnSaveHMSOperationScheduleMaterialPopup();
} 
static int _OnCancelHMSOperationScheduleMaterialPopupFnc(CWnd *pWnd){
	 return ((CHMSOperationScheduleMaterialPopup*)pWnd)->OnCancelHMSOperationScheduleMaterialPopup();
} 
CHMSOperationScheduleMaterialPopup::CHMSOperationScheduleMaterialPopup(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 255;
	m_nDlgHeight = 125;
	SetDefaultValues();
}
CHMSOperationScheduleMaterialPopup::~CHMSOperationScheduleMaterialPopup(){
}
void CHMSOperationScheduleMaterialPopup::OnCreateComponents(){
	m_wndOrderNoLabel.Create(this, _T("Order No"), 5, 5, 125, 30);
	m_wndOrderNo.Create(this,130, 5, 250, 30); 
	m_wndOrderDateLabel.Create(this, _T("Perform Date"), 5, 31, 125, 56);
	m_wndOrderDate.Create(this,130, 31, 250, 56); 
	m_wndPerformDeptLabel.Create(this, _T("Perform Place"), 5, 57, 125, 82);
	m_wndPerformDept.Create(this,130, 57, 250, 82); 
	m_wndSave.Create(this, _T("&Save"), 84, 89, 164, 114);
	m_wndClose.Create(this, _T("&Close"), 169, 89, 249, 114);
}
void CHMSOperationScheduleMaterialPopup::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndOrderNo.SetLimitText(20);
	m_wndOrderNo.SetCheckValue(false);
//	m_wndOrderDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndOrderDate.SetCheckValue(true);
	m_wndPerformDept.SetCheckValue(true);
	m_wndPerformDept.LimitText(7);


	m_wndPerformDept.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndPerformDept.InsertColumn(1, _T("Alias"), CFMT_TEXT, 80);
	m_wndPerformDept.InsertColumn(2, _T("Name"), CFMT_TEXT, 250);

	m_hms_op_materialTbl.SetTableName(_T("hms_op_material"));
	m_hms_op_materialTbl.AddField(_T("HOM_OP_MATERIAL_ID"), dfLong); 
	m_hms_op_materialTbl.AddField(_T("HOM_CREATEDBY"), dfText, 20); 
	m_hms_op_materialTbl.AddField(_T("HOM_CREATEDDATE"), dfDateTime); 
	m_hms_op_materialTbl.AddField(_T("HOM_UPDATEDBY"), dfText, 20); 
	m_hms_op_materialTbl.AddField(_T("HOM_UPDATEDDATE"), dfDateTime); 
	m_hms_op_materialTbl.AddField(_T("HOM_ISACTIVE"), dfText, 1); 
	m_hms_op_materialTbl.AddField(_T("HOM_ORDERNO"), dfText, 20); 
	m_hms_op_materialTbl.AddField(_T("HOM_ORDERDATE"), dfDate); 
	m_hms_op_materialTbl.AddField(_T("HOM_ORDER_DEPTID"), dfText, 7); 
	m_hms_op_materialTbl.AddField(_T("HOM_PERFORM_DEPTID"), dfText, 7); 
	m_hms_op_materialTbl.AddField(_T("HOM_STATUS"), dfText, 1); 

}
void CHMSOperationScheduleMaterialPopup::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndOrderNo.SetEvent(WE_CHANGE, _OnOrderNoChangeFnc);
	//m_wndOrderNo.SetEvent(WE_SETFOCUS, _OnOrderNoSetfocusFnc);
	//m_wndOrderNo.SetEvent(WE_KILLFOCUS, _OnOrderNoKillfocusFnc);
	m_wndOrderNo.SetEvent(WE_CHECKVALUE, _OnOrderNoCheckValueFnc);
	//m_wndOrderDate.SetEvent(WE_CHANGE, _OnOrderDateChangeFnc);
	//m_wndOrderDate.SetEvent(WE_SETFOCUS, _OnOrderDateSetfocusFnc);
	//m_wndOrderDate.SetEvent(WE_KILLFOCUS, _OnOrderDateKillfocusFnc);
	m_wndOrderDate.SetEvent(WE_CHECKVALUE, _OnOrderDateCheckValueFnc);
	m_wndPerformDept.SetEvent(WE_SELENDOK, _OnPerformDeptSelendokFnc);
	//m_wndPerformDept.SetEvent(WE_SETFOCUS, _OnPerformDeptSetfocusFnc);
	//m_wndPerformDept.SetEvent(WE_KILLFOCUS, _OnPerformDeptKillfocusFnc);
	m_wndPerformDept.SetEvent(WE_SELCHANGE, _OnPerformDeptSelectChangeFnc);
	m_wndPerformDept.SetEvent(WE_LOADDATA, _OnPerformDeptLoadDataFnc);
	//m_wndPerformDept.SetEvent(WE_ADDNEW, _OnPerformDeptAddNewFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_ADD);

}
void CHMSOperationScheduleMaterialPopup::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndOrderNo.GetDlgCtrlID(), m_szOrderNo);
	DDX_TextEx(pDX, m_wndOrderDate.GetDlgCtrlID(), m_szOrderDate);
	DDX_TextEx(pDX, m_wndPerformDept.GetDlgCtrlID(), m_szPerformDeptKey);

}
void CHMSOperationScheduleMaterialPopup::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("HOM_ORDERNO"), m_szOrderNo);
	rs.GetValue(_T("HOM_ORDERDATE"), m_szOrderDate);
	rs.GetValue(_T("HOM_PERFORM_DEPTID"), m_szPerformDeptKey);

}
void CHMSOperationScheduleMaterialPopup::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_hms_op_materialTbl.SetValue(_T("HOM_CREATEDBY"), pMF->GetCurrentUser());
	m_hms_op_materialTbl.SetValue(_T("HOM_UPDATEDBY"), pMF->GetCurrentUser());
	m_hms_op_materialTbl.SetValue(_T("HOM_ORDERNO"), m_szOrderNo);
	m_hms_op_materialTbl.SetValue(_T("HOM_ORDERDATE"), m_szOrderDate);
	m_hms_op_materialTbl.SetValue(_T("HOM_ORDER_DEPTID"), pMF->GetDepartmentID());
	m_hms_op_materialTbl.SetValue(_T("HOM_PERFORM_DEPTID"), m_szPerformDeptKey);
	m_hms_op_materialTbl.SetValue(_T("HOM_STATUS"), _T("O"));

}
void CHMSOperationScheduleMaterialPopup::SetDefaultValues(){

	m_szOrderNo.Empty();
	m_szOrderDate.Empty();
	m_szPerformDeptKey.Empty();
	m_nMatOID = 0;

}
int CHMSOperationScheduleMaterialPopup::SetMode(int nMode){
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
			m_szOrderDate = pMF->GetSysDate();
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
/*void CHMSOperationScheduleMaterialPopup::OnOrderNoChange(){
	
} */
/*void CHMSOperationScheduleMaterialPopup::OnOrderNoSetfocus(){
	
} */
/*void CHMSOperationScheduleMaterialPopup::OnOrderNoKillfocus(){
	
} */
int CHMSOperationScheduleMaterialPopup::OnOrderNoCheckValue(){
	return 0;
} 
/*void CHMSOperationScheduleMaterialPopup::OnOrderDateChange(){
	
} */
/*void CHMSOperationScheduleMaterialPopup::OnOrderDateSetfocus(){
	
} */
/*void CHMSOperationScheduleMaterialPopup::OnOrderDateKillfocus(){
	
} */
int CHMSOperationScheduleMaterialPopup::OnOrderDateCheckValue(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	int n = CompareDate(m_szOrderDate, pMF->GetSysDate());
	if (n < 0 || n > 7)
		return -1;
	return 0;
} 
void CHMSOperationScheduleMaterialPopup::OnPerformDeptSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSOperationScheduleMaterialPopup::OnPerformDeptSelendok(){
	 
}
/*void CHMSOperationScheduleMaterialPopup::OnPerformDeptSetfocus(){
	
}*/
/*void CHMSOperationScheduleMaterialPopup::OnPerformDeptKillfocus(){
	
}*/
long CHMSOperationScheduleMaterialPopup::OnPerformDeptLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szWhere;
	szWhere.Format(_T(" and sd_type='DT' "));
	return pMF->LoadDepartment(&m_wndPerformDept, m_szPerformDeptKey, szWhere);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndPerformDept.IsSearchKey() && !m_szPerformDeptKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szPerformDeptKey
};
	m_wndPerformDept.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPerformDept.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSOperationScheduleMaterialPopup::OnPerformDeptAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSOperationScheduleMaterialPopup::OnSaveSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(OnSaveHMSOperationScheduleMaterialPopup())
	{
		
		CGuiDialog::OnOK();
	}

} 
void CHMSOperationScheduleMaterialPopup::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CHMSOperationScheduleMaterialPopup::OnAddHMSOperationScheduleMaterialPopup(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSOperationScheduleMaterialPopup::OnEditHMSOperationScheduleMaterialPopup(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSOperationScheduleMaterialPopup::OnDeleteHMSOperationScheduleMaterialPopup(){
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
 		OnCancelHMSOperationScheduleMaterialPopup();
 	}
	return 0;
}
int CHMSOperationScheduleMaterialPopup::OnSaveHMSOperationScheduleMaterialPopup(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;

	
 	if(GetMode() == VM_ADD)
	{
		CRecord rs(&pMF->m_db);
		szSQL.Format(_T("SELECT max(hom_op_material_id) ") \
			_T("FROM hms_op_material ") \
			_T("WHERE hom_order_deptid='%s' ") \
			_T("and hom_perform_deptid='%s' ") \
			_T("and hom_orderdate=TO_DATE('%s','YYYY-MM-DD') and hom_status='O' "),
			pMF->GetDepartmentID(), m_szPerformDeptKey, m_szOrderDate);
		rs.ExecSQL(szSQL);
		if(rs.GetIntValue() > 0)
		{
			ShowMessageBox(_T("Order inprogress cannot save it."));
			return -1;
		}
		
		int retMsg = ShowMessageBox(_T("Lưu ý chỉ những phẫu thuật có ngày chỉ định = ngày thực hiện khi tạo phiếu mới add được vào lịch mổ!(Y/N)"), MB_YESNO);
		if(retMsg == IDNO)
		return -2;

		szSQL.Format(_T("AD_NEXTSEQUENCE('hms_op_material_asq')"));
		m_nMatOID = str2long(pMF->ExecDML(szSQL));
		m_hms_op_materialTbl.SetValue(_T("hom_op_material_id"), m_nMatOID);
		szSQL = m_hms_op_materialTbl.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
 		szWhere.Format(_T(" WHERE hom_material_id=%ld"), m_nMatOID);
 		szSQL = m_hms_op_materialTbl.GetUpdateSQL(_T("hom_material_id,hom_createdby,hom_createddate"));
 		szSQL += szWhere;
 	}
 _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSOperationScheduleMaterialPopup::OnCancelHMSOperationScheduleMaterialPopup(){
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
int CHMSOperationScheduleMaterialPopup::OnHMSOperationScheduleMaterialPopupListLoadData(){
	return 0;
}
