#include "HMSTreatDrugDialog.h"
#include "MainFrm.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CHMSTreatDrugDialog *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CHMSTreatDrugDialog *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CHMSTreatDrugDialog *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatDrugDialog *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CHMSTreatDrugDialog *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CHMSTreatDrugDialog *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CHMSTreatDrugDialog *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatDrugDialog *)pWnd)->OnToDateCheckValue();
} 
static void _OnSpecialFilterSelectFnc(CWnd *pWnd){
	 ((CHMSTreatDrugDialog*)pWnd)->OnSpecialFilterSelect();
}
static long _OnItemLoadDataFnc(CWnd *pWnd){
	return ((CHMSTreatDrugDialog*)pWnd)->OnItemLoadData();
} 
static void _OnItemDblClickFnc(CWnd *pWnd){
	((CHMSTreatDrugDialog*)pWnd)->OnItemDblClick();
} 
static void _OnItemSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSTreatDrugDialog*)pWnd)->OnItemSelectChange(nOldItem, nNewItem);
} 
static int _OnItemDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSTreatDrugDialog*)pWnd)->OnItemDeleteItem();
} 
/*static void _OnDescriptionChangeFnc(CWnd *pWnd){
	((CHMSTreatDrugDialog *)pWnd)->OnDescriptionChange();
} */
/*static void _OnDescriptionSetfocusFnc(CWnd *pWnd){
	((CHMSTreatDrugDialog *)pWnd)->OnDescriptionSetfocus();} */ 
/*static void _OnDescriptionKillfocusFnc(CWnd *pWnd){
	((CHMSTreatDrugDialog *)pWnd)->OnDescriptionKillfocus();
} */
static int _OnDescriptionCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatDrugDialog *)pWnd)->OnDescriptionCheckValue();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSTreatDrugDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSTreatDrugDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSTreatDrugDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSTreatDrugDialog*)pWnd)->OnListDeleteItem();
} 
static void _OnMarkAllSelectFnc(CWnd *pWnd){
	CHMSTreatDrugDialog *pVw = (CHMSTreatDrugDialog *)pWnd;
	pVw->OnMarkAllSelect();
} 
static void _OnUnMarkSelectFnc(CWnd *pWnd){
	CHMSTreatDrugDialog *pVw = (CHMSTreatDrugDialog *)pWnd;
	pVw->OnUnMarkSelect();
} 
static void _OnApplySelectFnc(CWnd *pWnd){
	CHMSTreatDrugDialog *pVw = (CHMSTreatDrugDialog *)pWnd;
	pVw->OnApplySelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSTreatDrugDialog *pVw = (CHMSTreatDrugDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSTreatDrugDialogFnc(CWnd *pWnd){
	 return ((CHMSTreatDrugDialog*)pWnd)->OnAddHMSTreatDrugDialog();
} 
static int _OnEditHMSTreatDrugDialogFnc(CWnd *pWnd){
	 return ((CHMSTreatDrugDialog*)pWnd)->OnEditHMSTreatDrugDialog();
} 
static int _OnDeleteHMSTreatDrugDialogFnc(CWnd *pWnd){
	 return ((CHMSTreatDrugDialog*)pWnd)->OnDeleteHMSTreatDrugDialog();
} 
static int _OnSaveHMSTreatDrugDialogFnc(CWnd *pWnd){
	 return ((CHMSTreatDrugDialog*)pWnd)->OnSaveHMSTreatDrugDialog();
} 
static int _OnCancelHMSTreatDrugDialogFnc(CWnd *pWnd){
	 return ((CHMSTreatDrugDialog*)pWnd)->OnCancelHMSTreatDrugDialog();
} 
CHMSTreatDrugDialog::CHMSTreatDrugDialog(CWnd *pParent, long nDocumentNo, bool bAllDept):
	CGuiDialog(pParent){
	m_nDocumentNo = nDocumentNo;
	m_nDlgWidth = 965;
	m_nDlgHeight = 605;
	SetDefaultValues();
	m_szData.Empty();
	m_bAllDept = bAllDept;
}
CHMSTreatDrugDialog::~CHMSTreatDrugDialog(){
}
void CHMSTreatDrugDialog::OnCreateComponents(){
	m_wndFromDateLabel.Create(this, _T("From Date"), 5, 5, 85, 30);
	m_wndFromDate.Create(this,90, 5, 170, 30); 
	m_wndToDateLabel.Create(this, _T("To Date"), 175, 5, 255, 30);
	m_wndToDate.Create(this,260, 5, 340, 30); 
	m_wndSpecialFilter.Create(this, _T("Special Filter"), 345, 5, 475, 30);
	m_wndItem.Create(this,5, 35, 475, 515); 
	m_wndDescription.Create(this,5, 520, 475, 570); 
	m_wndList.Create(this,480, 35, 950, 570); 
	m_wndMarkAll.Create(this, _T("&Mark All"), 4, 575, 84, 600);
	m_wndUnMark.Create(this, _T("&UnMark"), 89, 575, 169, 600);
	m_wndApply.Create(this, _T("&Apply"), 785, 575, 865, 600);
	m_wndClose.Create(this, _T("&Close"), 870, 575, 950, 600);

}
void CHMSTreatDrugDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
	m_wndDescription.SetLimitText(254);
	m_wndDescription.SetReadOnly(TRUE);
	
	m_wndItem.InsertColumn(0, _T("Index"), CFMT_TEXT, 50);
	m_wndItem.InsertColumn(1, _T("Description"), CFMT_TEXT, 400);
	m_wndItem.SetCheckBox(TRUE);
	m_wndItem.SetSortHeader(false);
	m_wndList.InsertColumn(0, _T("Index"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(1, _T("Description"), CFMT_TEXT, 400);
	m_wndList.SetSortHeader(false);
}
void CHMSTreatDrugDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndSpecialFilter.SetEvent(WE_CLICK, _OnSpecialFilterSelectFnc);
	m_wndItem.SetEvent(WE_SELCHANGE, _OnItemSelectChangeFnc);
	m_wndItem.SetEvent(WE_LOADDATA, _OnItemLoadDataFnc);
	m_wndItem.SetEvent(WE_DBLCLICK, _OnItemDblClickFnc);
	m_wndItem.AddEvent(1, _T("Delete"), _OnItemDeleteItemFnc, 0, VK_DELETE, 0);
	//m_wndDescription.SetEvent(WE_CHANGE, _OnDescriptionChangeFnc);
	//m_wndDescription.SetEvent(WE_SETFOCUS, _OnDescriptionSetfocusFnc);
	//m_wndDescription.SetEvent(WE_KILLFOCUS, _OnDescriptionKillfocusFnc);
	m_wndDescription.SetEvent(WE_CHECKVALUE, _OnDescriptionCheckValueFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndMarkAll.SetEvent(WE_CLICK, _OnMarkAllSelectFnc);
	m_wndUnMark.SetEvent(WE_CLICK, _OnUnMarkSelectFnc);
	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);

	m_wndMarkAll.ModifyStyle(WS_TABSTOP, 0);
	m_wndUnMark.ModifyStyle(WS_TABSTOP, 0);
	m_szFromDate = pMF->GetAdmitDate();
	m_szToDate = pMF->GetSysDate();
	SetMode(VM_EDIT);
	OnItemLoadData();
	

}
void CHMSTreatDrugDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Check(pDX, m_wndSpecialFilter.GetDlgCtrlID(), m_bSpecialFilter);
	DDX_Text(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescription);

}
void CHMSTreatDrugDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("FromDate")] =  m_szFromDate;
	m_jData[_T("ToDate")] =  m_szToDate;
	m_jData[_T("SpecialFilter")] =  m_bSpecialFilter;
	m_jData[_T("Description")] =  m_szDescription;
	}
	else
	{
			
	m_jData[_T("FromDate")].GetValue(m_szFromDate);
	m_jData[_T("ToDate")].GetValue(m_szToDate);
	m_jData[_T("SpecialFilter")].GetValue(m_bSpecialFilter);
	m_jData[_T("Description")].GetValue(m_szDescription);
	}

}
void CHMSTreatDrugDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSTreatDrugDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSTreatDrugDialog::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_bSpecialFilter=FALSE;
	m_szDescription.Empty();

}
int CHMSTreatDrugDialog::SetMode(int nMode){
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
/*void CHMSTreatDrugDialog::OnFromDateChange(){
	
} */
/*void CHMSTreatDrugDialog::OnFromDateSetfocus(){
	
} */
/*void CHMSTreatDrugDialog::OnFromDateKillfocus(){
	
} */
int CHMSTreatDrugDialog::OnFromDateCheckValue(){
	OnItemLoadData();
	return 0;
} 
/*void CHMSTreatDrugDialog::OnToDateChange(){
	
} */
/*void CHMSTreatDrugDialog::OnToDateSetfocus(){
	
} */
/*void CHMSTreatDrugDialog::OnToDateKillfocus(){
	
} */
int CHMSTreatDrugDialog::OnToDateCheckValue(){
	OnItemLoadData();
	return 0;
} 
void CHMSTreatDrugDialog::OnSpecialFilterSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnItemLoadData();	
}
void CHMSTreatDrugDialog::OnItemDblClick(){
	int nSel = m_wndItem.GetCurSel();
	if(nSel < 0)
		return;
	BOOL bCheck = m_wndItem.GetCheck(nSel);
	CString tmpStr  = m_wndItem.GetItemText(nSel, 0);
	CString szNewGroup;
	bCheck = !bCheck;
	m_wndItem.SetCheck(nSel, bCheck);
	
	OnListLoadData();
} 
void CHMSTreatDrugDialog::OnItemSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(nNewItem < 0)
		return;
	m_szDescription = m_wndItem.GetItemText(nNewItem, 1);
	UpdateData(FALSE);
} 
int CHMSTreatDrugDialog::OnItemDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSTreatDrugDialog::OnItemLoadData(){

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CRecord rsl(&pMF->m_db);
	CString szSQL, szWhere;
	UpdateData(true);
	m_wndItem.BeginLoad(); 
	int nCount = 0;
	szWhere.Empty();
	if(!m_bAllDept)
	{
		szWhere.AppendFormat(_T(" and hpo_deptid='%s' "), pMF->m_szDept);
	}
	szWhere.AppendFormat(_T(" and hpo_orderdate between to_timestamp('%s', 'YYYY-MM-DD HH24:MI:SS') and to_timestamp('%s', 'YYYY-MM-DD HH24:MI:SS') "), m_szFromDate, m_szToDate);

	szSQL.Format(_T(" SELECT DISTINCT hpol_product_id AS product_id,") \
_T("   mp_name                       AS product_name") \
_T(" FROM hms_ipharmaorder,") \
_T("   hms_ipharmaorderline,") \
_T("   m_product") \
_T(" WHERE hpol_docno  =%ld ") \
_T(" AND hpo_orderid   = hpol_orderid") \
_T(" AND mp_product_id = hpol_product_id") \
_T(" ORDER BY mp_name"),m_nDocumentNo, szWhere);

	CString szIndex, tmpStr, szDate, szNewDate;
	CString szDesc, szResult, szNote, szGroupId;
	int nIndex= 1, nItem;
	long nOrderId;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		rs.GetValue(_T("product_name"), szDesc);
		szIndex.Format(_T("%d"), nIndex++);
		m_wndItem.AddItems(szIndex, szDesc,NULL);
		rs.MoveNext();
	}
	m_wndItem.EndLoad(); 
	return nCount;
}
/*void CHMSTreatDrugDialog::OnDescriptionChange(){
	
} */
/*void CHMSTreatDrugDialog::OnDescriptionSetfocus(){
	
} */
/*void CHMSTreatDrugDialog::OnDescriptionKillfocus(){
	
} */
int CHMSTreatDrugDialog::OnDescriptionCheckValue(){
	return 0;
} 
void CHMSTreatDrugDialog::OnListDblClick(){
	
} 
void CHMSTreatDrugDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSTreatDrugDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSTreatDrugDialog::OnListLoadData(){

	CString tmpStr, szIndex;
	int nIndex = 1;
	m_wndList.BeginLoad();
	for (int i =0; i < m_wndItem.GetItemCount(); i++)
	{
		if(m_wndItem.GetCheck(i))
		{
			szIndex = m_wndItem.GetItemText(i, 0);
			if(szIndex == _T("*"))
				tmpStr = _T("*");
			else
				tmpStr.Format(_T("%d"), nIndex++);
			int nItem = m_wndList.AddItems(tmpStr,
				m_wndItem.GetItemText(i, 1),
				NULL);
		
		}
	}
	m_wndList.EndLoad();
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("Index")), 
			rs.GetValue(_T("Description")), 
			rs.GetValue(_T("Result")), 
			rs.GetValue(_T("Note")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CHMSTreatDrugDialog::OnMarkAllSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	for (int i=0; i < m_wndItem.GetItemCount(); i++)
	{
		m_wndItem.SetCheck(i, TRUE);
	}
	OnListLoadData();
} 
void CHMSTreatDrugDialog::OnUnMarkSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	for (int i=0; i < m_wndItem.GetItemCount(); i++)
	{
		m_wndItem.SetCheck(i, FALSE);
	}
	OnListLoadData();
} 
void CHMSTreatDrugDialog::OnApplySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_szData.Empty();
	CString szGroupId, szIndex, szDesc, szResult, szNote;
	for (int i =0; i < m_wndList.GetItemCount(); i++)
	{
		szDesc = m_wndList.GetItemText(i, 1);
		m_szData.AppendFormat(_T("%s, "), szDesc);
	}
	m_szData.Trim();
	CGuiDialog::OnOK();
} 
void CHMSTreatDrugDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CHMSTreatDrugDialog::OnAddHMSTreatDrugDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSTreatDrugDialog::OnEditHMSTreatDrugDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSTreatDrugDialog::OnDeleteHMSTreatDrugDialog(){
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
 		OnCancelHMSTreatDrugDialog();
 	}
	return 0;
}
int CHMSTreatDrugDialog::OnSaveHMSTreatDrugDialog(){
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
 		//OnHMSTreatDrugDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSTreatDrugDialog::OnCancelHMSTreatDrugDialog(){
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
int CHMSTreatDrugDialog::OnHMSTreatDrugDialogListLoadData(){
	return 0;
}
