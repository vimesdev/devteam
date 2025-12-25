#include "stdafx.h"
#include "LIMSTestSetupButton.h"
#include "ParaclinicalInformation.h"
#include "ParaclinicalInfor.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
#include "Excel.h"

static void _OnSearchSelectFnc(CWnd *pWnd){
	CParaclinicalInformation *pVw = (CParaclinicalInformation *)pWnd;
	pVw->OnSearchSelect();
} 
static void _OnDeptSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CParaclinicalInformation* )pWnd)->OnDeptSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDeptSelendokFnc(CWnd *pWnd){
	((CParaclinicalInformation *)pWnd)->OnDeptSelendok();
}
/*static void _OnDeptSetfocusFnc(CWnd *pWnd){
	((CParaclinicalInformation *)pWnd)->OnDeptKillfocus();
}*/
/*static void _OnDeptKillfocusFnc(CWnd *pWnd){
	((CParaclinicalInformation *)pWnd)->OnDeptKillfocus();
}*/
static long _OnDeptLoadDataFnc(CWnd *pWnd){
	return ((CParaclinicalInformation *)pWnd)->OnDeptLoadData();
}
/*static void _OnDeptAddNewFnc(CWnd *pWnd){
	((CParaclinicalInformation *)pWnd)->OnDeptAddNew();
}*/
/*static void _OnParaclinicalNameChangeFnc(CWnd *pWnd){
	((CParaclinicalInformation *)pWnd)->OnParaclinicalNameChange();
} */
/*static void _OnParaclinicalNameSetfocusFnc(CWnd *pWnd){
	((CParaclinicalInformation *)pWnd)->OnParaclinicalNameSetfocus();} */ 
/*static void _OnParaclinicalNameKillfocusFnc(CWnd *pWnd){
	((CParaclinicalInformation *)pWnd)->OnParaclinicalNameKillfocus();
} */
static int _OnParaclinicalNameCheckValueFnc(CWnd *pWnd){
	return ((CParaclinicalInformation *)pWnd)->OnParaclinicalNameCheckValue();
} 
/*static void _OnTotalChangeFnc(CWnd *pWnd){
	((CParaclinicalInformation *)pWnd)->OnTotalChange();
} */
/*static void _OnTotalSetfocusFnc(CWnd *pWnd){
	((CParaclinicalInformation *)pWnd)->OnTotalSetfocus();} */ 
/*static void _OnTotalKillfocusFnc(CWnd *pWnd){
	((CParaclinicalInformation *)pWnd)->OnTotalKillfocus();
} */
static int _OnTotalCheckValueFnc(CWnd *pWnd){
	return ((CParaclinicalInformation *)pWnd)->OnTotalCheckValue();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CParaclinicalInformation*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CParaclinicalInformation*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CParaclinicalInformation*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CParaclinicalInformation*)pWnd)->OnListDeleteItem();
} 
static void _OnServiceLabelSelectFnc(CWnd *pWnd){
	  ((CParaclinicalInformation*)pWnd)->OnServiceLabelSelect();
}
static void _OnInsuranceandSolderLabelSelectFnc(CWnd *pWnd){
	  ((CParaclinicalInformation*)pWnd)->OnInsuranceandSolderLabelSelect();
}
static void _OnAllLabelSelectFnc(CWnd *pWnd){
	  ((CParaclinicalInformation*)pWnd)->OnAllLabelSelect();
}
static void _OnSubItemsSelectFnc(CWnd *pWnd){
	 ((CParaclinicalInformation*)pWnd)->OnSubItemsSelect();
}
static void _OnUpdateSelectFnc(CWnd *pWnd){
	CParaclinicalInformation *pVw = (CParaclinicalInformation *)pWnd;
	pVw->OnUpdateSelect();
} 
static int _OnAddParaclinicalInformationFnc(CWnd *pWnd){
	 return ((CParaclinicalInformation*)pWnd)->OnAddParaclinicalInformation();
} 
static int _OnEditParaclinicalInformationFnc(CWnd *pWnd){
	 return ((CParaclinicalInformation*)pWnd)->OnEditParaclinicalInformation();
} 
static int _OnDeleteParaclinicalInformationFnc(CWnd *pWnd){
	 return ((CParaclinicalInformation*)pWnd)->OnDeleteParaclinicalInformation();
} 
static int _OnSaveParaclinicalInformationFnc(CWnd *pWnd){
	 return ((CParaclinicalInformation*)pWnd)->OnSaveParaclinicalInformation();
} 
static int _OnCancelParaclinicalInformationFnc(CWnd *pWnd){
	 return ((CParaclinicalInformation*)pWnd)->OnCancelParaclinicalInformation();
} 
CParaclinicalInformation::CParaclinicalInformation(CWnd *pParent):
	CGuiDialog(pParent)
{

	m_nDlgWidth = 1020;
	m_nDlgHeight = 625;
	SetDefaultValues();
}
CParaclinicalInformation::~CParaclinicalInformation()
{

}
void CParaclinicalInformation::OnCreateComponents(){
	m_wndParaclinicalInformation.Create(this, _T("Paraclinical Information"), 5, 4, 1010, 577);
	m_wndSearch.Create(this, _T("&Search"), 855, 57, 1004, 82);
	m_wndDeptLabel.Create(this, _T("Dept"), 10, 28, 109, 53);
	m_wndDept.Create(this,115, 28, 850, 53); 
	m_wndParaclinicalNameLabel.Create(this, _T("Paraclinical Name"), 10, 57, 109, 82);
	m_wndParaclinicalName.Create(this,115, 57, 850, 82); 
	m_wndTotalLabel.Create(this, _T("Total"), 855, 28, 912, 53);
	m_wndTotal.Create(this,916, 28, 1004, 53); 
	m_wndList.Create(this,9, 87, 1004, 572); 
	m_wndServiceLabel.Create(this, _T("Service"), 10, 584, 120, 609);
	m_wndInsuranceandSolderLabel.Create(this, _T("InsuranceandSolder"), 126, 584, 269, 609);
	m_wndAllLabel.Create(this, _T("All"), 274, 584, 384, 609);
	m_wndSubItems.Create(this, _T("SubItems"), 385, 584, 517, 609);
	m_wndUpdate.Create(this, _T("&Update"), 920, 584, 1005, 609);

}
void CParaclinicalInformation::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndDept.SetCheckValue(true);
	m_wndDept.LimitText(35);
	m_wndParaclinicalName.SetLimitText(35);
	m_wndParaclinicalName.SetCheckValue(true);
	m_wndTotal.SetLimitText(35);
	m_wndTotal.SetCheckValue(true);


	m_wndDept.InsertColumn(0, _T("ID"), CFMT_NUMBER, 130);
	m_wndDept.InsertColumn(1, _T("Description"), CFMT_TEXT, 450);
	m_wndList.InsertColumn(0, _T("ID"), CFMT_TEXT, 1);
	m_wndList.InsertColumn(1, _T("Name"), CFMT_TEXT, 300);
	m_wndList.InsertColumn(2, _T("Unit"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(3, _T("Male Index"), CFMT_TEXT, 120);
	m_wndList.InsertColumn(4, _T("Female Index"), CFMT_TEXT, 120);
	m_wndList.InsertColumn(5, _T("Scale"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(6, _T("Service Price"), CFMT_TEXT, 120);
	m_wndList.InsertColumn(7, _T("Insurance Price"), CFMT_TEXT, 120);
	m_wndList.InsertColumn(8, _T("Policy Price"), CFMT_TEXT, 120);
	m_wndList.InsertColumn(9, _T("Apply Date"), CFMT_DATE, 100);

}
void CParaclinicalInformation::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndSearch.SetEvent(WE_CLICK, _OnSearchSelectFnc);
	m_wndDept.SetEvent(WE_SELENDOK, _OnDeptSelendokFnc);
	//m_wndDept.SetEvent(WE_SETFOCUS, _OnDeptSetfocusFnc);
	//m_wndDept.SetEvent(WE_KILLFOCUS, _OnDeptKillfocusFnc);
	m_wndDept.SetEvent(WE_SELCHANGE, _OnDeptSelectChangeFnc);
	m_wndDept.SetEvent(WE_LOADDATA, _OnDeptLoadDataFnc);
	//m_wndDept.SetEvent(WE_ADDNEW, _OnDeptAddNewFnc);
	//m_wndParaclinicalName.SetEvent(WE_CHANGE, _OnParaclinicalNameChangeFnc);
	//m_wndParaclinicalName.SetEvent(WE_SETFOCUS, _OnParaclinicalNameSetfocusFnc);
	//m_wndParaclinicalName.SetEvent(WE_KILLFOCUS, _OnParaclinicalNameKillfocusFnc);
	m_wndParaclinicalName.SetEvent(WE_CHECKVALUE, _OnParaclinicalNameCheckValueFnc);
	//m_wndTotal.SetEvent(WE_CHANGE, _OnTotalChangeFnc);
	//m_wndTotal.SetEvent(WE_SETFOCUS, _OnTotalSetfocusFnc);
	//m_wndTotal.SetEvent(WE_KILLFOCUS, _OnTotalKillfocusFnc);
	m_wndTotal.SetEvent(WE_CHECKVALUE, _OnTotalCheckValueFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndServiceLabel.SetEvent(WE_CLICK, _OnServiceLabelSelectFnc);
	m_wndInsuranceandSolderLabel.SetEvent(WE_CLICK, _OnInsuranceandSolderLabelSelectFnc);
	m_wndAllLabel.SetEvent(WE_CLICK, _OnAllLabelSelectFnc);
	m_wndSubItems.SetEvent(WE_CLICK, _OnSubItemsSelectFnc);
	m_wndUpdate.SetEvent(WE_CLICK, _OnUpdateSelectFnc);
	//AddEvent(1, _T("Add	Ctrl+A"), _OnAddParaclinicalInformationFnc, 0, 'A', VK_CONTROL);
	//AddEvent(2, _T("Edit	Ctrl+E"), _OnEditParaclinicalInformationFnc, 0, 'E', VK_CONTROL);
	//AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteParaclinicalInformationFnc, 0, 'D', VK_CONTROL);
	//AddEvent(4, _T("Save	Ctrl+S"), _OnSaveParaclinicalInformationFnc, 0, 'S', VK_CONTROL);
	//AddEvent(0, _T("-"));
	//AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelParaclinicalInformationFnc, 0, 'T', VK_CONTROL);
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T(" SELECT sup_permid perm_id FROM sys_userperm WHERE sup_userid = '%s' AND sup_moduleid = '%s'") \
				 _T(" AND substr(sup_permid, 1, 2) = 'B1'"), pMF->GetCurrentUser(), pMF->GetModuleID());
	rs.ExecSQL(szSQL);
	while (!rs.IsEOF())
	{
		if (!m_szPermGroupID.IsEmpty())
			m_szPermGroupID += _T(", ");
		m_szPermGroupID.AppendFormat(_T("'%s'"), rs.GetValue(_T("perm_id")));
		rs.MoveNext();
	}
	UpdateData(false);
	OnListLoadData();

}
void CParaclinicalInformation::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndDept.GetDlgCtrlID(), m_szDeptKey);
	DDX_Text(pDX, m_wndParaclinicalName.GetDlgCtrlID(), m_szParaclinicalName);
	DDX_Text(pDX, m_wndTotal.GetDlgCtrlID(), m_nTotal);
	DDX_Radio(pDX, m_wndServiceLabel.GetDlgCtrlID(), m_nServiceLabel);
	DDX_Radio(pDX, m_wndInsuranceandSolderLabel.GetDlgCtrlID(), m_nInsuranceandSolderLabel);
	DDX_Radio(pDX, m_wndAllLabel.GetDlgCtrlID(), m_nAllLabel);
	DDX_Check(pDX, m_wndSubItems.GetDlgCtrlID(), m_bSubItems);

}
void CParaclinicalInformation::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CParaclinicalInformation::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CParaclinicalInformation::SetDefaultValues(){

	m_szDeptKey.Empty();
	m_szParaclinicalName.Empty();
	m_nTotal=0;
	m_nServiceLabel=1;
	m_nInsuranceandSolderLabel=1;
	m_nAllLabel=0;
	m_bSubItems=FALSE;

}
int CParaclinicalInformation::SetMode(int nMode){
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
void CParaclinicalInformation::OnSearchSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnListLoadData();	
} 
void CParaclinicalInformation::OnDeptSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CParaclinicalInformation::OnDeptSelendok(){
	 
}
/*void CParaclinicalInformation::OnDeptSetfocus(){
	
}*/
/*void CParaclinicalInformation::OnDeptKillfocus(){
	
}*/
long CParaclinicalInformation::OnDeptLoadData(){
	/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDept.IsSearchKey() && !m_szDeptKey.IsEmpty()){
	};
	m_wndDept.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDept.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;

	return 0;*/
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDept.IsSearchKey() && !m_szDeptKey.IsEmpty()){
		szWhere.Format(_T(" and hfg_id='%s' "), m_szDeptKey);
	}
	if (!m_szPermGroupID.IsEmpty())
		szWhere.AppendFormat(_T(" AND hfg_id IN (%s)"), m_szPermGroupID);
	m_wndDept.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT hfg_id as id, hfg_name as description FROM hms_fee_group WHERE substr(hfg_id , 1, 2) = 'B1' %s ORDER BY id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDept.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CParaclinicalInformation::OnDeptAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CParaclinicalInformation::OnParaclinicalNameChange(){
	
} */
/*void CParaclinicalInformation::OnParaclinicalNameSetfocus(){
	
} */
/*void CParaclinicalInformation::OnParaclinicalNameKillfocus(){
	
} */
int CParaclinicalInformation::OnParaclinicalNameCheckValue()
{
	OnListLoadData();
	return 1;
} 
/*void CParaclinicalInformation::OnTotalChange(){
	
} */
/*void CParaclinicalInformation::OnTotalSetfocus(){
	
} */
/*void CParaclinicalInformation::OnTotalKillfocus(){
	
} */
int CParaclinicalInformation::OnTotalCheckValue(){
	return 0;
} 
void CParaclinicalInformation::OnListDblClick()
{
	OnUpdateSelect();	
} 
void CParaclinicalInformation::OnListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CParaclinicalInformation::OnListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CParaclinicalInformation::OnListLoadData(){

	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL,szWhere, szScale, PrintBold, PrintBoldItalic;
	UpdateData(true);
	int m_nScale;
	CString szApplyDate = _T("2016-03-01");
	bool bNewPrice = (bool)str2int(pMF->GetParam(_T("apply_newprice")));
	if(bNewPrice)
	{
		szApplyDate = pMF->GetParam(_T("apply_date"));
		szWhere.AppendFormat(_T(" trunc(hfl_applydate) >= to_date('%s', 'YYYY-MM-DD') "), szApplyDate);
	}
	else
	{
		if (m_nServiceLabel==0)
			szWhere.Format(_T("hfl_applydate < TO_DATE('2016-03-01','YYYY-MM-DD')"));
		if (m_nInsuranceandSolderLabel==0)
			szWhere.Format(_T("hfl_applydate >= TO_DATE('2016-03-01','YYYY-MM-DD')"));
		if (m_nAllLabel==0)
			szWhere.Format(_T("hfl_applydate >= TO_DATE('2013-09-02','YYYY-MM-DD')"));
	}
	
	
	if (!m_szDeptKey.IsEmpty())
		szWhere.AppendFormat(_T(" and hfl_groupid = '%s'"), m_szDeptKey);
	else
		szWhere.AppendFormat(_T(" and hfl_groupid IN (%s)"), m_szPermGroupID);
	
	if(!m_szParaclinicalName.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND lower(hfl_name2) like(lower('%s%s%s')) "), _T("%"), m_szParaclinicalName, _T("%"));
	}
	m_wndList.BeginLoad(); 
	m_wndList.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T(" select ") \
	_T(" hfl_feeid as ID,") \
	_T(" hfl_name as Name,") \
	_T(" hfl_Unit as Unit,") \
	_T(" hfl_index1 as MaleIndex,") \
	_T(" hfl_index2 as FemaleIndex,") \
	_T(" hfl_scale as Scale,") \
	_T(" hfl_servprice as ServicePrice,") \
	_T(" hfl_insprice as InsurancePrice,") \
	_T(" hfl_polprice as PolicyPrice,") \
	_T(" hfl_print_bold as PrintBold,") \
	_T(" hfl_print_bold_italic as PrintBoldItalic,") \
	_T(" hfl_applydate as ApplyDate") \
	_T(" FROM Hms_Fee_List") \
	_T(" left join Hms_Fee_Group") \
	_T(" on (Hfl_Groupid=hfg_id)") \
	_T(" where %s and hfl_active='Y' AND (hfl_servprice+hfl_insprice+hfl_polprice) > 0 ORDER BY Hfl_Groupid,hfl_applydate,hfl_line, hfl_name"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Name")), 
			rs.GetValue(_T("Unit")), 
			rs.GetValue(_T("MaleIndex")), 
			rs.GetValue(_T("FemaleIndex")), 
			rs.GetValue(_T("Scale")), 
			rs.GetValue(_T("ServicePrice")), 
			rs.GetValue(_T("InsurancePrice")), 
			rs.GetValue(_T("PolicyPrice")), 
			rs.GetValue(_T("ApplyDate")), NULL);
			rs.GetValue(_T("Scale"), m_nScale);
			rs.GetValue(_T("PrintBold"), PrintBold);
			rs.GetValue(_T("PrintBoldItalic"), PrintBoldItalic);
			if(m_nScale >1)
			{
			m_wndList.SetItemBkColor(m_wndList.GetItemCount()-1, RGB(34, 139, 34), FALSE);
			m_wndList.SetItemTextColor(m_wndList.GetItemCount()-1, RGB(255, 255, 255), FALSE);
			}
			if(PrintBold == _T("Y"))
			{
			//m_wndList.SetItemBkColor(m_wndList.GetItemCount()-1, RGB(34, 139, 34), FALSE);
			m_wndList.SetItemTextColor(m_wndList.GetItemCount()-1, RGB(255, 69, 0), FALSE);
			}
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	UpdateData(false);
	return nCount;
	
}
void CParaclinicalInformation::OnServiceLabelSelect()
{
	OnListLoadData();	
}
void CParaclinicalInformation::OnInsuranceandSolderLabelSelect()
{
	OnListLoadData();	
}
void CParaclinicalInformation::OnAllLabelSelect()
{
	OnListLoadData();
}
	void CParaclinicalInformation::OnSubItemsSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
void CParaclinicalInformation::OnUpdateSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	int nSel = m_wndList.GetCurSel();
	if (nSel < 0)
		return;
	CParaclinicalInfor dlg(this);
	dlg.m_szID = m_wndList.GetItemText(nSel, 0);	
	if (dlg.DoModal() == IDOK)
		OnListLoadData();
	m_wndList.SetCurSel(nSel);	
} 
int CParaclinicalInformation::OnAddParaclinicalInformation(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CParaclinicalInformation::OnEditParaclinicalInformation(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CParaclinicalInformation::OnDeleteParaclinicalInformation(){
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
 		OnCancelParaclinicalInformation(); 
 	}
	return 0;
}
int CParaclinicalInformation::OnSaveParaclinicalInformation(){
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
 		//OnParaclinicalInformationListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CParaclinicalInformation::OnCancelParaclinicalInformation(){
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
int CParaclinicalInformation::OnParaclinicalInformationListLoadData()
{
	return 0;
}