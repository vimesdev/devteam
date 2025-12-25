#include "stdafx.h"
#include "BloodBankListServicex.h"
#include "HMSMainFrame.h"

static int _OnObjectCheckAllFnc(CWnd *pWnd){
	return ((CBloodBankListServicex*)pWnd)->OnObjectCheckAll();
}
static int _OnObjectUncheckAllFnc(CWnd *pWnd){
	return ((CBloodBankListServicex*)pWnd)->OnObjectUncheckAll();
}
//-----------------------------------------------------
static int _OnDeptCheckAllFnc(CWnd *pWnd){
	return ((CBloodBankListServicex*)pWnd)->OnDeptCheckAll();
}
static int _OnDeptUncheckAllFnc(CWnd *pWnd){
	return ((CBloodBankListServicex*)pWnd)->OnDeptUncheckAll();
}
//-----------------------------------------------------
static int _OnListCheckAllFnc(CWnd *pWnd){
	return ((CBloodBankListServicex*)pWnd)->OnListCheckAll();
}
static int _OnListUncheckAllFnc(CWnd *pWnd){
	return ((CBloodBankListServicex*)pWnd)->OnListUncheckAll();
}
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CBloodBankListServicex *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CBloodBankListServicex *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CBloodBankListServicex *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CBloodBankListServicex *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CBloodBankListServicex *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CBloodBankListServicex *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CBloodBankListServicex *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CBloodBankListServicex *)pWnd)->OnToDateCheckValue();
} 
static long _OnObjectLoadDataFnc(CWnd *pWnd){
	return ((CBloodBankListServicex*)pWnd)->OnObjectLoadData();
} 
static void _OnObjectDblClickFnc(CWnd *pWnd){
	((CBloodBankListServicex*)pWnd)->OnObjectDblClick();
} 
static void _OnObjectSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CBloodBankListServicex*)pWnd)->OnObjectSelectChange(nOldItem, nNewItem);
} 
static int _OnObjectDeleteItemFnc(CWnd *pWnd){
	 return ((CBloodBankListServicex*)pWnd)->OnObjectDeleteItem();
} 
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CBloodBankListServicex*)pWnd)->OnDepartmentLoadData();
} 
static void _OnDepartmentDblClickFnc(CWnd *pWnd){
	((CBloodBankListServicex*)pWnd)->OnDepartmentDblClick();
} 
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CBloodBankListServicex*)pWnd)->OnDepartmentSelectChange(nOldItem, nNewItem);
} 
static int _OnDepartmentDeleteItemFnc(CWnd *pWnd){
	 return ((CBloodBankListServicex*)pWnd)->OnDepartmentDeleteItem();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CBloodBankListServicex*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CBloodBankListServicex*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CBloodBankListServicex*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CBloodBankListServicex*)pWnd)->OnListDeleteItem();
} 
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	CBloodBankListServicex *pVw = (CBloodBankListServicex *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CBloodBankListServicex *pVw = (CBloodBankListServicex *)pWnd;
	pVw->OnExportSelect();
} 
static int _OnAddBloodBankListServiceFnc(CWnd *pWnd){
	 return ((CBloodBankListServicex*)pWnd)->OnAddBloodBankListService();
} 
static int _OnEditBloodBankListServiceFnc(CWnd *pWnd){
	 return ((CBloodBankListServicex*)pWnd)->OnEditBloodBankListService();
} 
static int _OnDeleteBloodBankListServiceFnc(CWnd *pWnd){
	 return ((CBloodBankListServicex*)pWnd)->OnDeleteBloodBankListService();
} 
static int _OnSaveBloodBankListServiceFnc(CWnd *pWnd){
	 return ((CBloodBankListServicex*)pWnd)->OnSaveBloodBankListService();
} 
static int _OnCancelBloodBankListServiceFnc(CWnd *pWnd){
	 return ((CBloodBankListServicex*)pWnd)->OnCancelBloodBankListService();
} 
CBloodBankListServicex::CBloodBankListServicex(CWnd *pParent)
{

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CBloodBankListServicex::~CBloodBankListServicex(){
}
void CBloodBankListServicex::OnCreateComponents(){
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 110, 55);
	m_wndFromDate.Create(this,115, 30, 290, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 295, 30, 395, 55);
	m_wndToDate.Create(this,400, 30, 570, 55); 
	m_wndReportCondition.Create(this, _T("Report Condition"), 6, 5, 576, 545);
	m_wndObject.Create(this,10, 59, 570, 196); 
	m_wndDepartment.Create(this,10, 199, 570, 369); 
	m_wndList.Create(this,10, 373, 570, 540); 
	//m_wndPrintPreview.Create(this, _T("Print Pre&view"), 385, 550, 495, 575);
	m_wndExport.Create(this, _T("&ExportXLS"), 500, 550, 575, 575);

	m_wndObject.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndObject.InsertColumn(1, _T("Object"), CFMT_TEXT, 450);
	m_wndObject.SetCheckBox(true);

	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDepartment.InsertColumn(1, _T("Department"), CFMT_TEXT, 450);
	m_wndDepartment.SetCheckBox(true);

	m_wndList.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(1, _T("\x43h\x1EBF Ph\x1EA9m"), CFMT_TEXT, 450);
	m_wndList.SetCheckBox(true);

}
void CBloodBankListServicex::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
}
void CBloodBankListServicex::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndObject.SetEvent(WE_SELCHANGE, _OnObjectSelectChangeFnc);
	m_wndObject.SetEvent(WE_LOADDATA, _OnObjectLoadDataFnc);
	m_wndObject.SetEvent(WE_DBLCLICK, _OnObjectDblClickFnc);
	m_wndObject.AddEvent(1, _T("Check All"), _OnObjectCheckAllFnc);
	m_wndObject.AddEvent(2, _T("UnCheck All"), _OnObjectUncheckAllFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	m_wndDepartment.SetEvent(WE_DBLCLICK, _OnDepartmentDblClickFnc);
	m_wndDepartment.AddEvent(1, _T("Check All"), _OnDeptCheckAllFnc);
	m_wndDepartment.AddEvent(2, _T("UnCheck All"), _OnDeptUncheckAllFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Check All"), _OnListCheckAllFnc);
	m_wndList.AddEvent(2, _T("UnCheck All"), _OnListUncheckAllFnc);
	m_wndPrintPreview.SetEvent(WE_CLICK, _OnPrintPreviewSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate += _T("23:59");
	UpdateData(false);
	OnObjectLoadData();
	OnDepartmentLoadData();
	OnListLoadData();
}
void CBloodBankListServicex::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);

}
void CBloodBankListServicex::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
int CBloodBankListServicex::OnObjectCheckAll(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	for (int i=0; i< m_wndObject.GetItemCount(); i++){
		m_wndObject.SetCheck(i, true);
	}
	return 0;	
}

int CBloodBankListServicex::OnObjectUncheckAll(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	for (int i=0; i< m_wndObject.GetItemCount(); i++){
		m_wndObject.SetCheck(i, false);
	}
	return 0;	
}
int CBloodBankListServicex::OnDeptCheckAll(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	for (int i=0; i< m_wndDepartment.GetItemCount(); i++){
		m_wndDepartment.SetCheck(i, true);
	}
	return 0;	
}

int CBloodBankListServicex::OnDeptUncheckAll(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	for (int i=0; i< m_wndDepartment.GetItemCount(); i++){
		m_wndDepartment.SetCheck(i, false);
	}
	return 0;	
}
int CBloodBankListServicex::OnListCheckAll(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	for (int i=0; i< m_wndList.GetItemCount(); i++){
		m_wndList.SetCheck(i, true);
	}
	return 0;	
}

int CBloodBankListServicex::OnListUncheckAll(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	for (int i=0; i< m_wndList.GetItemCount(); i++){
		m_wndList.SetCheck(i, false);
	}
	return 0;	
}
void CBloodBankListServicex::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CBloodBankListServicex::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();

}
int CBloodBankListServicex::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
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
/*void CBloodBankListServicex::OnFromDateChange(){
	
} */
/*void CBloodBankListServicex::OnFromDateSetfocus(){
	
} */
/*void CBloodBankListServicex::OnFromDateKillfocus(){
	
} */
int CBloodBankListServicex::OnFromDateCheckValue(){
	return 0;
} 
/*void CBloodBankListServicex::OnToDateChange(){
	
} */
/*void CBloodBankListServicex::OnToDateSetfocus(){
	
} */
/*void CBloodBankListServicex::OnToDateKillfocus(){
	
} */
int CBloodBankListServicex::OnToDateCheckValue(){
	return 0;
} 
void CBloodBankListServicex::OnObjectDblClick(){
	
} 
void CBloodBankListServicex::OnObjectSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CBloodBankListServicex::OnObjectDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CBloodBankListServicex::OnObjectLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndObject.BeginLoad(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ho_id as id, ho_desc as description FROM hms_object ORDER BY cast(id as integer)"));
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndObject.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	m_wndObject.EndLoad(); 
	return nCount;
}
void CBloodBankListServicex::OnDepartmentDblClick(){
	
} 
void CBloodBankListServicex::OnDepartmentSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CBloodBankListServicex::OnDepartmentDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CBloodBankListServicex::OnDepartmentLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndDepartment.BeginLoad(); 
	int nCount = 0;
	szSQL.Format(_T("select sd_id as makhoa, sd_name as tenkhoa from sys_dept where sd_type IN ('DT','KB') and SD_ISACTIVE='Y' order by sd_id"));
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDepartment.AddItems(
			rs.GetValue(_T("makhoa")), 
			rs.GetValue(_T("tenkhoa")), NULL);
		rs.MoveNext();
	}
	m_wndDepartment.EndLoad(); 
	return nCount;
}
void CBloodBankListServicex::OnListDblClick(){
	
} 
void CBloodBankListServicex::OnListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CBloodBankListServicex::OnListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CBloodBankListServicex::OnListLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	szSQL.Format(_T("select mp_product_id id ,mp_name name from m_product where mp_org_id='BB' Order by mp_name"));
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("name")),NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}
void CBloodBankListServicex::OnPrintPreviewSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CBloodBankListServicex::OnExportSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);
	CGuiMenu menu(this);
	CString tmpStr;
	CRect rect;
	int nPos = 0;
	m_wndExport.GetWindowRect(&rect);
	_debug(_T("right: %d|top: %d"), rect.right, rect.top);
	menu.CreatePopupMenu();
	TranslateString(_T("Export Mẫu 1"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 1, tmpStr);
	//TranslateString(_T("Export Mẫu 2"), tmpStr);
	//menu.AppendMenu(MF_BYPOSITION, 2, tmpStr);

	nPos = menu.TrackPopupMenu(TPM_RETURNCMD | TPM_BOTTOMALIGN | TPM_RIGHTALIGN, rect.right, rect.top, this);
	switch (nPos)
	{
		case 1:
			OnExportSelect1();
			break;
		case 2:
			OnExportSelect2();
			break;		
	}
}    
	
int CBloodBankListServicex::OnAddBloodBankListService(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CBloodBankListServicex::OnEditBloodBankListService(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CBloodBankListServicex::OnDeleteBloodBankListService(){
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
 		OnCancelBloodBankListService();
 	}
	return 0;
}
int CBloodBankListServicex::OnSaveBloodBankListService(){
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
 		//OnBloodBankListServiceListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CBloodBankListServicex::OnCancelBloodBankListService(){
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
int CBloodBankListServicex::OnBloodBankListServiceListLoadData(){
	return 0;
}
CString CBloodBankListServicex::GetQueryString()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CString szSQL, szWhere, szDept,szList1, szDeptNameStr, szDeptKey,szObject,szObjectNameStr, szObjectKey , szList,szListNameStr,szListKey;
	for (int i = 0; i < m_wndObject.GetItemCount(); i++)
	{
		if (m_wndObject.GetCheck(i))
		{
			if (!szObject.IsEmpty())
			{
				szObject += _T(", ");
				szObjectNameStr += _T(", ");
			}
			szObjectNameStr.AppendFormat(_T("%s"), m_wndObject.GetItemText(i, 1));
			szObject.AppendFormat(_T("%s"), m_wndObject.GetItemText(i, 0));
		}
	}
	for (int i = 0; i < m_wndDepartment.GetItemCount(); i++)
	{
		if (m_wndDepartment.GetCheck(i))
		{
			if (!szDept.IsEmpty())
			{
				szDept += _T(", ");
				szDeptNameStr += _T(", ");
			}
			szDeptNameStr.AppendFormat(_T("%s"), m_wndDepartment.GetItemText(i, 1));
			szDept.AppendFormat(_T("'%s'"), m_wndDepartment.GetItemText(i, 0));
		}
	}
	for (int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		if (m_wndList.GetCheck(i))
		{
			if (!szList.IsEmpty())
			{
				szList += _T(", ");
				szListNameStr += _T(", ");
			}
			szListNameStr.AppendFormat(_T("%s"), m_wndList.GetItemText(i, 1));
			szList.AppendFormat(_T("%s"), m_wndList.GetItemText(i, 0));
		}

	}
	if (!szObject.IsEmpty())
		szObjectKey.AppendFormat(_T(" AND doituong IN(%s)"), szObject);
	if (!szDept.IsEmpty())
		szDeptKey.AppendFormat(_T(" AND khoa IN(%s)"), szDept);
	if (!szList.IsEmpty())
		szListKey.AppendFormat(_T(" AND product_id IN(%s)"), szList);
	CRecord rs1(&pMF->m_db);	CRecord rs2(&pMF->m_db);	CString tmpStr1,tmpStr2,dv1,dv2, tmpStr;	tmpStr1.Format(_T("select (cast(trim(substr(substr(mp_name,instr(mp_name,' ',-1,1)+1),1,3)||''||mp_product_id) as number)) id from m_product where mp_org_id='BB' and mp_product_id in(%s) Order by mp_name"),szList);	rs1.ExecSQL(tmpStr1);	while(!rs1.IsEOF())	{		rs1.GetValue(_T("id"), tmpStr);		if (!dv1.IsEmpty())
		{
			dv1 += _T(", ");			
		}
		dv1.AppendFormat(_T("%s"), tmpStr);		rs1.MoveNext();	}	//_msg(_T("%s"), tmpStr1);	tmpStr2.Format(_T("select (cast(trim(substr(substr(mp_name,instr(mp_name,' ',-1,1)+1),1,3)||''||mp_product_id) as number)) id from m_product where mp_org_id='BB' and mp_product_id in(%s) Order by mp_name"),szList);	//_msg(_T("%s"), tmpStr2);
	rs2.ExecSQL(tmpStr2);
	
	while(!rs2.IsEOF())	{		rs2.GetValue(_T("id"), tmpStr);		if (!dv2.IsEmpty())
		{
			dv2 += _T(", ");			
		}
		dv2.AppendFormat(_T("%s"), tmpStr);		rs2.MoveNext();	}
_msg(_T("%s, %s"), tmpStr2, dv2);

	szSQL.Format(_T(" SELECT ngay,khoa,tenbn,doituong,sex,age,rank,") \
		_T("        dv150,dv250,dv350,tienmau,tienxn,") \
		_T("        tongtien") \
		_T(" FROM(SELECT ngay,khoa,get_patientname(sohs) tenbn,get_objectname(doituong) doituong,sex,age,rank,") \
		_T("        sum(dv150) dv150,sum(dv250) dv250,sum(dv350) dv350,sum(tienmau) tienmau,sum(tienxn) tienxn,") \
		_T("        sum(tienmau+tienxn) tongtien") \
		_T(" FROM(SELECT ngay ngay,khoa,sohs,doituong,sex,age,rank,") \
		_T("       sum(dv150) dv150,sum(dv250) dv250,sum(dv350) dv350,sum(tienmau) tienmau,0 tienxn") \
		_T(" FROM(SELECT hpo_orderdate ngay,hpo_deptid khoa,hpol_docno sohs,doituong,sex,age,rank,") \
		_T("        case when lower(product_name) like(chr(37)||lower('150')||chr(37)) then hpol_qtyissue else 0 end dv150,") \
		_T("        case when lower(product_name) like(chr(37)||lower('250')||chr(37)) then hpol_qtyissue else 0 end dv250,") \
		_T("        case when lower(product_name) like(chr(37)||lower('350')||chr(37)) then hpol_qtyissue else 0 end dv350,") \
		_T("        tienmau") \
		_T(" FROM(SELECT hpol_docno,") \
		_T("        hpo_approvedate hpo_orderdate,") \
		_T("        hpo_deptid,") \
		_T("        product_name,") \
		_T("        product_id,") \
		_T("        cast(trim(substr(substr(product_name,instr(product_name,' ',-1,1)+1),1,3)||''||product_id) as number) maid,") \
		_T("        hpol_qtyissue,") \
		_T("        hpol_unitprice,") \
		_T("        hpo_object_id doituong,") \
		_T("        Hms_getagebydoc(hpo_docno)           age,") \
		_T("        Get_syssel_desc('sys_sex', hp_sex)   sex,") \
		_T("        Get_syssel_desc('hms_rank', hp_rank) rank,") \
		_T("        hpol_qtyissue*hpol_unitprice AS tienmau") \
		_T(" FROM hms_ipharmaorder") \
		_T(" LEFT JOIN hms_ipharmaorderline ON(hpol_docno=hpo_docno and hpol_orderid=hpo_orderid)") \
		_T(" LEFT JOIN hms_patient ON (hp_patientno=hpo_patientno)") \
		_T(" LEFT JOIN m_productitem_view ON(product_item_id=hpol_product_item_id)") \
		_T(" LEFT JOIN m_blood_donation ON(mbd_product_item_id = hpol_product_item_id)") \
		_T(" WHERE hpo_org_id='BB' and hpo_orderstatus='A' and hpo_approvedate between to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') and to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') ))") \
		_T(" GROUP BY ngay,khoa,sohs,doituong,sex,age,rank,") \
		_T(" UNION ALL") \
		_T(" SELECT hpo_approvedate ngay,") \
		_T("        hpc_deptid khoa,") \
		_T("        hpcl_docno sohs,hpc_object doituong,") \
		_T("        Hms_getagebydoc(hpo_docno)           age,") \
		_T("        Get_syssel_desc('sys_sex', hp_sex)   sex,") \
		_T("        Get_syssel_desc('hms_rank', hp_rank) rank,") \
		_T("        0 dv150,0 dv250,0 dv350,0 tienmau,") \
		_T("        hpcl_qty*hfl_servprice tienxn") \
		_T(" FROM hms_testorder") \
		_T(" LEFT JOIN hms_testorderline ON(hpc_orderid=hpcl_orderid)") \
		_T(" LEFT JOIN hms_ipharmaorder ON(hpo_orderid=hpc_bedid and hpo_docno=hpc_docno)") \
		_T(" LEFT JOIN hms_patient ON (hp_patientno=hpo_patientno)") \
		_T(" LEFT JOIN hms_fee_list ON(hpcl_itemid=hfl_feeid)") \
		_T(" WHERE hpo_org_id='BB' and hpo_orderstatus='A' and hpc_object in(7) and hpo_approvedate between to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') and to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')") \
		_T(" UNION ALL") \
		_T(" SELECT hpo_approvedate ngay,") \
		_T("        hpc_deptid khoa,") \
		_T("        hpcl_docno sohs,hpc_object doituong,") \
		_T("        Hms_getagebydoc(hpo_docno)           age,") \
		_T("        Get_syssel_desc('sys_sex', hp_sex)   sex,") \
		_T("        Get_syssel_desc('hms_rank', hp_rank) rank,") \
		_T("        0 dv150,0 dv250,0 dv350,0 tienmau,") \
		_T("        hpcl_qty*hfl_polprice tienxn") \
		_T(" FROM hms_testorder") \
		_T(" LEFT JOIN hms_testorderline ON(hpc_orderid=hpcl_orderid)") \
		_T(" LEFT JOIN hms_ipharmaorder ON(hpo_orderid=hpc_bedid and hpo_docno=hpc_docno)") \
		_T(" LEFT JOIN hms_patient ON (hp_patientno=hpo_patientno)") \
		_T(" LEFT JOIN hms_fee_list ON(hpcl_itemid=hfl_feeid)") \
		_T(" WHERE hpo_org_id='BB' and hpo_orderstatus='A' and hpc_object in(1,3,8) and hpo_approvedate between to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') and to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')") \
		_T(" UNION ALL") \
		_T(" SELECT hpo_approvedate ngay,") \
		_T("        hpc_deptid khoa,") \
		_T("        hpcl_docno sohs,hpc_object doituong,") \
		_T("        Hms_getagebydoc(hpo_docno)           age,") \
		_T("        Get_syssel_desc('sys_sex', hp_sex)   sex,") \
		_T("        Get_syssel_desc('hms_rank', hp_rank) rank,") \
    	_T("        0 dv150,0 dv250,0 dv350,0 tienmau,") \
		_T("        hpcl_qty*hfl_insprice tienxn") \
		_T(" FROM hms_testorder") \
		_T(" LEFT JOIN hms_testorderline ON(hpc_orderid=hpcl_orderid)") \
		_T(" LEFT JOIN hms_ipharmaorder ON(hpo_orderid=hpc_bedid and hpo_docno=hpc_docno)") \
		_T(" LEFT JOIN hms_patient ON (hp_patientno=hpo_patientno)") \
		_T(" LEFT JOIN hms_fee_list ON(hpcl_itemid=hfl_feeid)") \
		_T(" WHERE hpo_org_id='BB' and hpo_orderstatus='A' and hpc_object not in(7,1,3,8) and hpo_approvedate between to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') and to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss'))") \
		_T(" WHERE 1=1 %s %s") \
		_T(" GROUP BY ngay,khoa,sohs,doituong,sex,age,rank") \
		_T(" ORDER BY ngay)") \
		_T(" WHERE dv250+dv350>0"), dv1,dv2,
							m_szFromDate,m_szToDate,
							m_szFromDate,m_szToDate,
							m_szFromDate,m_szToDate,
							m_szFromDate,m_szToDate,
							szDeptKey,szObjectKey);
	//_msg(_T("%s"), szSQL);
	//QueryOpener(szSQL);
	return szSQL;
}
void CBloodBankListServicex::OnExportSelect1()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	CRecord rs(&pMF->m_db);	CString szDeptKey,szObjectKey;	CString szSQL, tmpStr, szTemp, szWhere,szList,szListNameStr;	CString szDept, szDeptNameStr, szListKey, szObject, szObjectNameStr;	UpdateData(TRUE);		for (int i = 0; i < m_wndObject.GetItemCount(); i++)
	{
		if (m_wndObject.GetCheck(i))
		{
			if (!szObject.IsEmpty())
			{
				szObject += _T(", ");
				szObjectNameStr += _T(", ");
			}
			szObjectNameStr.AppendFormat(_T("%s"), m_wndObject.GetItemText(i, 1));
			szObject.AppendFormat(_T("%s"), m_wndObject.GetItemText(i, 0));
		}
	}
	for (int i = 0; i < m_wndDepartment.GetItemCount(); i++)
	{
		if (m_wndDepartment.GetCheck(i))
		{
			if (!szDept.IsEmpty())
			{
				szDept += _T(", ");
				szDeptNameStr += _T(", ");
			}
			szDeptNameStr.AppendFormat(_T("%s"), m_wndDepartment.GetItemText(i, 1));
			szDept.AppendFormat(_T("'%s'"), m_wndDepartment.GetItemText(i, 0));
		}
	}
	for (int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		if (m_wndList.GetCheck(i))
		{
			if (!szList.IsEmpty())
			{
				szList += _T(", ");
				szListNameStr += _T(", ");
			}
			szListNameStr.AppendFormat(_T("%s"), m_wndList.GetItemText(i, 1));
			szList.AppendFormat(_T("%s"), m_wndList.GetItemText(i, 0));
		}

	}
	if (!szObject.IsEmpty())
		szObjectKey.AppendFormat(_T(" AND doituong IN(%s)"), szObject);
	if (!szDept.IsEmpty())
		szDeptKey.AppendFormat(_T(" AND khoa IN(%s)"), szDept);
	if (!szList.IsEmpty())
		szListKey.AppendFormat(_T(" AND product_id IN(%s)"), szList);szSQL.Format(_T(" SELECT ngay,khoa,tenbn,doituong,sex,age,rank,product_name,") \
			_T("        dv150,dv250,dv350,tienmau,tienxn,") \
			_T("        tongtien") \
			_T(" FROM(SELECT ngay,khoa,get_patientname(sohs) tenbn,get_objectname(doituong) doituong,sex,age,rank,product_name,") \
			_T("        sum(dv150) dv150,sum(dv250) dv250,sum(dv350) dv350,sum(tienmau) tienmau,sum(tienxn) tienxn,") \
			_T("        sum(tienmau+tienxn) tongtien") \
			_T(" FROM(SELECT ngay ngay,khoa,sohs,doituong,age,sex,rank,product_name,") \
			_T("       sum(dv150) dv150,sum(dv250) dv250,sum(dv350) dv350,sum(tienmau) tienmau,0 tienxn") \
			_T(" FROM(SELECT hpo_orderdate ngay,hpo_deptid khoa,hpol_docno sohs,doituong,age,sex,rank,product_name,") \
			_T("        case when lower(product_name) like(chr(37)||lower('150')||chr(37)) then hpol_qtyissue else 0 end dv150,") \
			_T("        case when lower(product_name) like(chr(37)||lower('250')||chr(37)) then hpol_qtyissue else 0 end dv250,") \
			_T("        case when lower(product_name) like(chr(37)||lower('350')||chr(37)) then hpol_qtyissue else 0 end dv350,") \
			_T("        tienmau") \
			_T(" FROM(SELECT hpol_docno,") \
			_T("        hpo_approvedate hpo_orderdate,") \
			_T("        hpo_deptid,") \
			_T("        product_name,") \
			_T("        product_id,") \
			_T("        cast(trim(substr(substr(product_name,instr(product_name,' ',-1,1)+1),1,3)||''||product_id) as number) maid,") \
			_T("        hpol_qtyissue,") \
			_T("        hpol_unitprice,") \
			_T("        hpo_object_id doituong,") \
			_T("        Hms_getagebydoc(hpo_docno)           age,") \
			_T("        Get_syssel_desc('sys_sex', hp_sex)   sex,") \
			_T("        Get_syssel_desc('hms_rank', hp_rank) rank,") \
			_T("        hpol_qtyissue*hpol_unitprice AS tienmau") \
			_T(" FROM hms_ipharmaorder") \
			_T(" LEFT JOIN hms_ipharmaorderline ON(hpol_docno=hpo_docno and hpol_orderid=hpo_orderid)") \
			_T(" LEFT JOIN hms_patient ON (hp_patientno=hpo_patientno)") \
			_T(" LEFT JOIN m_productitem_view ON(product_item_id=hpol_product_item_id)") \
			_T(" LEFT JOIN m_blood_donation ON(mbd_product_item_id = hpol_product_item_id)") \
			_T(" WHERE hpo_org_id='BB' and hpo_orderstatus='A' and hpo_approvedate between to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') and to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') %s ") \
			//Add Mau C1.3 vao bao cao
			_T("		UNION ALL") \
			_T("		SELECT hpol_docno,") \
			_T("        hpo_approvedate hpo_orderdate,") \
			_T("        hpo_deptid,") \
			_T("        product_name,") \
			_T("        product_id,") \
			_T("        cast(trim(substr(substr(product_name,instr(product_name,' ',-1,1)+1),1,3)||''||product_id) as number) maid,") \
			_T("        hpol_qtyissue,") \
			_T("        hpol_unitprice,") \
			_T("        hpo_object_id doituong,") \
			_T("        Hms_getagebydoc(hpo_docno)           age,") \
			_T("        Get_syssel_desc('sys_sex', hp_sex)   sex,") \
			_T("        Get_syssel_desc('hms_rank', hp_rank) rank,") \
			_T("        hpol_qtyissue*hpol_unitprice AS tienmau") \
			_T(" FROM hms_pharmaorder") \
			_T(" LEFT JOIN hms_pharmaorderline ON(hpol_docno=hpo_docno and hpol_orderid=hpo_orderid)") \
			_T(" LEFT JOIN hms_patient ON (hp_patientno=hpo_patientno)") \
			_T(" LEFT JOIN m_productitem_view ON(product_item_id=hpol_product_item_id)") \
			_T(" LEFT JOIN m_blood_donation ON(mbd_product_item_id = hpol_product_item_id)") \
			_T(" WHERE hpo_org_id='BB' and hpo_orderstatus='A' and hpo_approvedate between to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') and to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') %s ))") \
			//Add Mau C1.3 vao bao cao
			_T(" GROUP BY ngay,khoa,sohs,doituong, sex, age, rank,product_name)") \
			/*_T(" UNION ALL") \

			_T(" SELECT hpo_approvedate ngay,") \
			_T("        hpc_deptid khoa,") \
			_T("        hpcl_docno sohs,hpc_object doituong,") \
			_T("        Hms_getagebydoc(hpo_docno)           age,") \
			_T("        Get_syssel_desc('sys_sex', hp_sex)   sex,") \
			_T("        Get_syssel_desc('hms_rank', hp_rank) rank,") \
			_T("        0 dv150,0 dv250,0 dv350,0 tienmau,") \
			_T("        hpcl_qty*hfl_servprice tienxn") \
			_T(" FROM hms_testorder") \
			_T(" LEFT JOIN hms_testorderline ON(hpc_orderid=hpcl_orderid)") \
			_T(" LEFT JOIN hms_ipharmaorder ON(hpo_orderid=hpc_bedid and hpo_docno=hpc_docno)") \
			_T(" LEFT JOIN hms_patient ON (hp_patientno=hpo_patientno)") \
			_T(" LEFT JOIN hms_fee_list ON(hpcl_itemid=hfl_feeid)") \
			_T(" WHERE hpo_org_id='BB' and hpo_orderstatus='A' and hpc_object in(7) and hpo_approvedate between to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') and to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')") \*/
			
			//Add tien xet nghiem C1.3 dich vu
			/*_T(" UNION ALL") \
			_T(" SELECT hpo_approvedate ngay,") \
			_T("        hpc_deptid khoa,") \
			_T("        hpcl_docno sohs,hpc_object doituong,") \
			_T("        Hms_getagebydoc(hpo_docno)           age,") \
			_T("        Get_syssel_desc('sys_sex', hp_sex)   sex,") \
			_T("        Get_syssel_desc('hms_rank', hp_rank) rank,") \
			_T("        0 dv150,0 dv250,0 dv350,0 tienmau,") \
			_T("        hpcl_qty*hfl_servprice tienxn") \
			_T(" FROM hms_testorder") \
			_T(" LEFT JOIN hms_testorderline ON(hpc_orderid=hpcl_orderid)") \
			_T(" LEFT JOIN hms_pharmaorder ON(hpo_orderid=hpc_bedid and hpo_docno=hpc_docno)") \
			_T(" LEFT JOIN hms_patient ON (hp_patientno=hpo_patientno)") \
			_T(" LEFT JOIN hms_fee_list ON(hpcl_itemid=hfl_feeid)") \
			_T(" WHERE hpo_org_id='BB' and hpo_orderstatus='A' and hpc_object in(7) and hpo_approvedate between to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') and to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')") \*/
			//Add tien xet nghiem C1.3 dich vu
			/*_T(" UNION ALL") \
			_T(" SELECT hpo_approvedate ngay,") \
			_T("        hpc_deptid khoa,") \
			_T("        hpcl_docno sohs,hpc_object doituong,") \
			_T("        Hms_getagebydoc(hpo_docno)           age,") \
			_T("        Get_syssel_desc('sys_sex', hp_sex)   sex,") \
			_T("        Get_syssel_desc('hms_rank', hp_rank) rank,") \
			_T("        0 dv150,0 dv250,0 dv350,0 tienmau,") \
			_T("        hpcl_qty*hfl_polprice tienxn") \
			_T(" FROM hms_testorder") \
			_T(" LEFT JOIN hms_testorderline ON(hpc_orderid=hpcl_orderid)") \
			_T(" LEFT JOIN hms_ipharmaorder ON(hpo_orderid=hpc_bedid and hpo_docno=hpc_docno)") \
			_T(" LEFT JOIN hms_patient ON (hp_patientno=hpo_patientno)") \
			_T(" LEFT JOIN hms_fee_list ON(hpcl_itemid=hfl_feeid)") \
			_T(" WHERE hpo_org_id='BB' and hpo_orderstatus='A' and hpc_object in(1,3,8) and hpo_approvedate between to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') and to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')") \*/
			//Add tien xet nghiem C1.3 chinh sach
			/*_T(" UNION ALL") \
			_T(" SELECT hpo_approvedate ngay,") \
			_T("        hpc_deptid khoa,") \
			_T("        hpcl_docno sohs,hpc_object doituong,") \
			_T("        Hms_getagebydoc(hpo_docno)           age,") \
			_T("        Get_syssel_desc('sys_sex', hp_sex)   sex,") \
			_T("        Get_syssel_desc('hms_rank', hp_rank) rank,") \
			_T("        0 dv150,0 dv250,0 dv350,0 tienmau,") \
			_T("        hpcl_qty*hfl_polprice tienxn") \
			_T(" FROM hms_testorder") \
			_T(" LEFT JOIN hms_testorderline ON(hpc_orderid=hpcl_orderid)") \
			_T(" LEFT JOIN hms_pharmaorder ON(hpo_orderid=hpc_bedid and hpo_docno=hpc_docno)") \
			_T(" LEFT JOIN hms_patient ON (hp_patientno=hpo_patientno)") \
			_T(" LEFT JOIN hms_fee_list ON(hpcl_itemid=hfl_feeid)") \
			_T(" WHERE hpo_org_id='BB' and hpo_orderstatus='A' and hpc_object in(1,3,8) and hpo_approvedate between to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') and to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')") \*/
			//Add tien xet nghiem C1.3 chinh sach
			/*_T(" UNION ALL") \
			_T(" SELECT hpo_approvedate ngay,") \
			_T("        hpc_deptid khoa,") \
			_T("        hpcl_docno sohs,hpc_object doituong,") \
			_T("        Hms_getagebydoc(hpo_docno)           age,") \
			_T("        Get_syssel_desc('sys_sex', hp_sex)   sex,") \
			_T("        Get_syssel_desc('hms_rank', hp_rank) rank,") \
			_T("        0 dv150,0 dv250,0 dv350,0 tienmau,") \
			_T("        hpcl_qty*hfl_insprice tienxn") \
			_T(" FROM hms_testorder") \
			_T(" LEFT JOIN hms_testorderline ON(hpc_orderid=hpcl_orderid)") \
			_T(" LEFT JOIN hms_ipharmaorder ON(hpo_orderid=hpc_bedid and hpo_docno=hpc_docno)") \
			_T(" LEFT JOIN hms_patient ON (hp_patientno=hpo_patientno)") \
			_T(" LEFT JOIN hms_fee_list ON(hpcl_itemid=hfl_feeid)") \
			_T(" WHERE hpo_org_id='BB' and hpo_orderstatus='A' and hpc_object not in(7,1,3,8) and hpo_approvedate between to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') and to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')") \*/
			//Add tien xet nghiem bao hiem
			/*_T(" UNION ALL") \
			_T(" SELECT hpo_approvedate ngay,") \
			_T("        hpc_deptid khoa,") \
			_T("        hpcl_docno sohs,hpc_object doituong,") \
			_T("        Hms_getagebydoc(hpo_docno)           age,") \
			_T("        Get_syssel_desc('sys_sex', hp_sex)   sex,") \
			_T("        Get_syssel_desc('hms_rank', hp_rank) rank,") \
			_T("        0 dv150,0 dv250,0 dv350,0 tienmau,") \
			_T("        hpcl_qty*hfl_insprice tienxn") \
			_T(" FROM hms_testorder") \
			_T(" LEFT JOIN hms_testorderline ON(hpc_orderid=hpcl_orderid)") \
			_T(" LEFT JOIN hms_pharmaorder ON(hpo_orderid=hpc_bedid and hpo_docno=hpc_docno)") \
			_T(" LEFT JOIN hms_patient ON (hp_patientno=hpo_patientno)") \
			_T(" LEFT JOIN hms_fee_list ON(hpcl_itemid=hfl_feeid)") \
			_T(" WHERE hpo_org_id='BB' and hpo_orderstatus='A' and hpc_object not in(7,1,3,8) and hpo_approvedate between to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') and to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss'))") \*/
			//Add tien xet nghiem bao hiem
			_T(" WHERE 1=1 %s %s") \
			_T(" GROUP BY ngay,khoa,sohs,doituong, sex, age, rank,product_name") \
			_T(" ORDER BY ngay)") \
			_T(" WHERE ((dv150>0) OR (dv250>0) OR (dv350>0))"),	m_szFromDate,m_szToDate,szListKey,
										m_szFromDate,m_szToDate,szListKey,
										/*m_szFromDate,m_szToDate,
										m_szFromDate,m_szToDate,
										m_szFromDate,m_szToDate,
										m_szFromDate,m_szToDate,
										m_szFromDate,m_szToDate,
										m_szFromDate,m_szToDate,*/
										szDeptKey,szObjectKey);
		rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
	if (rs.IsEOF())
	{
		ShowMessageBox(_T("No Data"), MB_OK | MB_ICONERROR);
		return;
	}
	CExcel xls;
	UpdateData(TRUE);
	BeginWaitCursor();
	xls.CreateSheet(1);
	xls.SetWorksheet(0);

	xls.SetColumnWidth(0, 8);	xls.SetColumnWidth(1, 20);	xls.SetColumnWidth(2, 8);	xls.SetColumnWidth(3, 24);	xls.SetColumnWidth(4, 9);	xls.SetColumnWidth(5, 9);	xls.SetColumnWidth(6, 9);	xls.SetColumnWidth(7, 20);	xls.SetColumnWidth(8, 30);	xls.SetColumnWidth(9, 20);	xls.SetColumnWidth(10, 12);
	xls.SetColumnWidth(11, 10);	xls.SetColumnWidth(12, 10);	xls.SetColumnWidth(13, 10);
	xls.SetColumnWidth(14, 35);

	xls.SetCellText(0, 0, _T("\x42\x1ED8 QU\x1ED0\x43 PH\xD2NG"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetMerge(0, 0, 0, 2);	xls.SetCellText(0, 1, _T("\x42\x1EC6NH VI\x1EC6N TW QU\xC2N \x110\x1ED8I \x31\x30\x38"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetMerge(1, 1, 0, 2);	xls.SetCellText(0, 2, _T("\x44\x41NH S\xC1\x43H TI\x1EC0N M\xC1U \x44\x1ECA\x43H V\x1EE4 "), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetMerge(2, 2, 0, 9);    	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));	xls.SetCellText(0, 3, tmpStr, FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetMerge(3, 3, 0, 9);	xls.SetCellText(0, 5, _T("STT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetMerge(5, 6, 0, 0);	xls.SetCellText(1, 5, _T("Ng\xE0y th\xE1ng n\x103m"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetMerge(5, 6, 1, 1);		xls.SetCellText(2, 5, _T("Khoa"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetMerge(5, 6, 2, 2);	xls.SetCellText(3, 5, _T("H\x1ECD v\xE0 t\xEAn \x62\x1EC7nh nh\xE2n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetMerge(5, 6, 3, 3);		xls.SetCellText(4, 5, _T("\x110/V\x1ECB \x31\x35\x30"), FMT_TEXT | FMT_CENTER| FMT_WRAPING, true, 11);	xls.SetMerge(5, 6, 4, 4);	xls.SetCellText(5, 5, _T("\x110/V\x1ECB \x32\x35\x30"), FMT_TEXT | FMT_CENTER| FMT_WRAPING, true, 11);	xls.SetMerge(5, 6, 5, 5);	xls.SetCellText(6, 5, _T("\x110/V\x1ECB \x33\x35\x30"), FMT_TEXT | FMT_CENTER| FMT_WRAPING, true, 11);	xls.SetMerge(5, 6, 6, 6);		xls.SetCellText(7, 5, _T("Th\xE0nh ti\x1EC1n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetMerge(5, 5, 7, 9);	xls.SetCellText(10, 5, _T("Ghi \x63h\xFA"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetMerge(5, 6, 10, 11);	xls.SetCellText(7, 6, _T("Ti\x1EC1n m\xE1u"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetMerge(6, 6, 7, 7);	xls.SetCellText(8, 6, _T("\x110\x1ED1i T\x1B0\x1EE3ng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetMerge(6, 6, 8, 8);	xls.SetCellText(9, 6, _T("T\x1ED5ng ti\x1EC1n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetMerge(6, 6, 9, 9);	int nRow = 7;	int nCol = 0;	int nIndex =1;	int nTotal[15];
	for (int i = 0; i<= 14; i++)
	{
		nTotal[i] = 0;
	}	while(!rs.IsEOF())	{		tmpStr.Format(_T("%d"),nIndex++);		xls.SetCellText(nCol+0, nRow, tmpStr, FMT_NUMBER1);		rs.GetValue(_T("ngay"), tmpStr);		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_DATETIME);		rs.GetValue(_T("khoa"), tmpStr);		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("tenbn"), tmpStr);		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("dv150"), tmpStr);		nTotal[4] += ToInt(tmpStr);		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_NUMBER1);				rs.GetValue(_T("dv250"), tmpStr);		nTotal[5] += ToInt(tmpStr);		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_NUMBER1);		rs.GetValue(_T("dv350"), tmpStr);		nTotal[6] += ToInt(tmpStr);		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_NUMBER1);		rs.GetValue(_T("tienmau"), tmpStr);		nTotal[7] += ToInt(tmpStr);		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_NUMBER1);		rs.GetValue(_T("doituong"), tmpStr);		nTotal[8] += ToInt(tmpStr);		xls.SetCellText(nCol+8, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("tongtien"), tmpStr);		nTotal[9] += ToInt(tmpStr);		xls.SetCellText(nCol+9, nRow, tmpStr, FMT_NUMBER1);		rs.GetValue(_T("ghichu"), tmpStr);		xls.SetCellText(nCol+10, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("rank"), tmpStr);		xls.SetCellText(nCol+11, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("age"), tmpStr);		xls.SetCellText(nCol+12, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("sex"), tmpStr);		xls.SetCellText(nCol+13, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("product_name"), tmpStr);		xls.SetCellText(nCol+14, nRow, tmpStr, FMT_TEXT);		nRow++;		rs.MoveNext();	}	xls.SetCellMergedColumns(nCol, nRow , 4);
	xls.SetCellText(nCol, nRow, _T("T\x1ED5ng"), FMT_TEXT | FMT_CENTER, true, 11);

	for( int i = 4; i<= 14; i++)
	{
		tmpStr.Format(_T("%d"), nTotal[i]);
		xls.SetCellText(i , nRow , tmpStr, FMT_NUMBER1 , true, 11);
	}	
	EndWaitCursor();	xls.SetPaperSize(XLPAPER_A4,true);	xls.Save(_T("Exports\\DANHSACHTIENMAUDICHVU.xls"));
}
void CBloodBankListServicex::OnExportSelect2()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CReport rpt;	
	CRecord rs(&pMF->m_db);	
	CString szSQL, tmpStr, szTemp, szWhere, szOldDept, szNewDept, label1, label2, szRooms;
	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();
	int nRow = 0, nCol = 0, nIdx = 1;
	double nTemp = 0, nTemp1=0;
	double nTotal[30], nGroupTotal[30];
	for(int i = 0; i < 30; i++)
	{
		nTotal[i] = 0;
		nGroupTotal[i] = 0;
	}	
	

	CExcel xls;
	if(!xls.Load(_T("Exports\\Template\\DANHSACHTIENMAUDICHVU_MAU2.xls"))) AfxMessageBox(_T("Chưa có File DANHSACHTIENMAUDICHVU_MAU2.xls trong thư mục Export\Template!"));
	xls.SetWorksheet(0);

	xls.SetCellText(0, 0, _T("BỘ QUỐC PHÒNG"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, _T("BỆNH VIỆN TWQĐ 108"), FMT_TEXT | FMT_CENTER, true, 10);


	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 3, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);
	
	
	szSQL = GetQueryString1();
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);

	nRow = 7;
	nCol = 0;
	while(!rs.IsEOF())
	{
				
		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);

		rs.GetValue(_T("tgyeucau"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT | FMT_LEFT);

		rs.GetValue(_T("khoayeucau"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT | FMT_CENTER);

		rs.GetValue(_T("HovaTen"), tmpStr);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT | FMT_LEFT);

		rs.GetValue(_T("DoiTuong"), tmpStr);
		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT | FMT_LEFT);

		rs.GetValue(_T("capbac"), tmpStr);
		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_TEXT | FMT_LEFT);

		rs.GetValue(_T("namsinh"), tmpStr);
		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_TEXT | FMT_LEFT);

		rs.GetValue(_T("Gioitinh"), tmpStr);
		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_TEXT | FMT_LEFT);

		rs.GetValue(_T("chephammau"), tmpStr);
		xls.SetCellText(nCol+8, nRow, tmpStr, FMT_TEXT | FMT_LEFT | FMT_WRAPING);

		rs.GetValue(_T("soluong"), tmpStr);
		xls.SetCellText(nCol+9, nRow, tmpStr, FMT_NUMBER1 | FMT_CENTER);
		
		rs.GetValue(_T("dongia"), tmpStr);
		xls.SetCellText(nCol+10, nRow, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("thanhtien"), tmpStr);
		xls.SetCellText(nCol+11, nRow, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("thanhtien"), nTemp);
		nGroupTotal[11] += nTemp;
		xls.SetCellText(nCol+11, nRow, double2str(nTemp), FMT_NUMBER1);
		

		nRow++;
		rs.MoveNext();
	}
	if (nGroupTotal[11]>0)
	{
		xls.SetCellText(10, nRow, _T("Tổng Cộng:"), FMT_TEXT, true);
		for(int i = 10; i < 12; i++)
		{
			xls.SetCellText(i, nRow, double2str(nGroupTotal[i]), FMT_NUMBER1, true);
			nTotal[i] += nGroupTotal[i];
		}
		nRow++;
	}	

	EndWaitCursor();
		
		xls.Save(_T("Exports\\Template\\DANHSACHTIENMAUDICHVU_MAU23.xls"));
}
CString CBloodBankListServicex::GetQueryString1()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CString szSQL, szWhere, szDept,szList1, szDeptNameStr, szDeptKey,szObject,szObjectNameStr, szObjectKey , szList,szListNameStr,szListKey;
	for (int i = 0; i < m_wndObject.GetItemCount(); i++)
	{
		if (m_wndObject.GetCheck(i))
		{
			if (!szObject.IsEmpty())
			{
				szObject += _T(", ");
				szObjectNameStr += _T(", ");
			}
			szObjectNameStr.AppendFormat(_T("%s"), m_wndObject.GetItemText(i, 1));
			szObject.AppendFormat(_T("%s"), m_wndObject.GetItemText(i, 0));
		}
	}
	for (int i = 0; i < m_wndDepartment.GetItemCount(); i++)
	{
		if (m_wndDepartment.GetCheck(i))
		{
			if (!szDept.IsEmpty())
			{
				szDept += _T(", ");
				szDeptNameStr += _T(", ");
			}
			szDeptNameStr.AppendFormat(_T("%s"), m_wndDepartment.GetItemText(i, 1));
			szDept.AppendFormat(_T("'%s'"), m_wndDepartment.GetItemText(i, 0));
		}
	}
	
	if (!szObject.IsEmpty())
		szObjectKey.AppendFormat(_T(" AND hd_object IN(%s)"), szObject);
	if (!szDept.IsEmpty())
		szDeptKey.AppendFormat(_T(" AND hpc_deptid IN(%s)"), szDept);
	
				szSQL.Format(_T(" SELECT") \
			_T(" to_char(hpc_orderdate, 'DD/MM/YYYY HH24:MI') as tgyeucau,") \
			_T(" hpc_deptid as khoayeucau,") \
			_T("  trim(hp_surname)") \
			_T("   ||' '") \
			_T("   ||trim(hp_midname)") \
			_T("   ||' '") \
			_T("   ||trim(hp_firstname)                AS HovaTen,") \
			_T(" get_objectname(hd_object)                       AS DoiTuong,") \
			_T(" sys_sel_getname('hms_rank', hp_rank) AS capbac,") \
			_T(" TO_CHAR(hp_birthdate, 'DD/MM/YYYY') AS namsinh,") \
			_T(" (SELECT DISTINCT ss_desc") \
			_T("   FROM sys_sel") \
			_T("   WHERE ss_id = 'sys_sex'") \
			_T("   AND ss_code = hp_sex") \
			_T(" ) AS Gioitinh,") \
			_T(" fe.hfe_desc as chephammau,") \
			_T(" fe.hfe_quantity as soluong,") \
			_T(" fe.hfe_unitprice as dongia,") \
			_T(" fe.hfe_cost as thanhtien") \
			_T(" FROM hms_fee fe") \
			_T(" LEFT JOIN hms_doc ON (fe.hfe_docno=hd_docno)") \
			_T(" LEFT JOIN hms_patient ON (hd_patientno=hp_patientno)") \
			_T(" LEFT JOIN hms_testorder ON (fe.hfe_docno=hpc_docno AND fe.hfe_orderid=hpc_orderid)") \
			_T(" LEFT JOIN hms_fee_list ON (fe.hfe_itemid=hfl_feeid)") \
			_T(" WHERE hpc_orderdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') ") \
			_T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
			_T(" AND NVL(HFL_BLOODFEE, 'X')='Y' %s %s ") \
			_T(" ORDER BY hpc_orderdate, hpc_deptid"), m_szFromDate,m_szToDate, szObjectKey, szDeptKey);	
	/*szSQL.Format(_T(" SELECT ngay,khoa,tenbn,doituong,sex,age,rank,") \
		_T("        dv150,dv250,dv350,tienmau,tienxn,") \
		_T("        tongtien") \
		_T(" FROM(SELECT ngay,khoa,get_patientname(sohs) tenbn,get_objectname(doituong) doituong,sex,age,rank,") \
		_T("        sum(dv150) dv150,sum(dv250) dv250,sum(dv350) dv350,sum(tienmau) tienmau,sum(tienxn) tienxn,") \
		_T("        sum(tienmau+tienxn) tongtien") \
		_T(" FROM(SELECT ngay ngay,khoa,sohs,doituong,sex,age,rank,") \
		_T("       sum(dv150) dv150,sum(dv250) dv250,sum(dv350) dv350,sum(tienmau) tienmau,0 tienxn") \
		_T(" FROM(SELECT hpo_orderdate ngay,hpo_deptid khoa,hpol_docno sohs,doituong,sex,age,rank,") \
		_T("        case when lower(product_name) like(chr(37)||lower('150')||chr(37)) then hpol_qtyissue else 0 end dv150,") \
		_T("        case when lower(product_name) like(chr(37)||lower('250')||chr(37)) then hpol_qtyissue else 0 end dv250,") \
		_T("        case when lower(product_name) like(chr(37)||lower('350')||chr(37)) then hpol_qtyissue else 0 end dv350,") \
		_T("        tienmau") \
		_T(" FROM(SELECT hpol_docno,") \
		_T("        hpo_approvedate hpo_orderdate,") \
		_T("        hpo_deptid,") \
		_T("        product_name,") \
		_T("        product_id,") \
		_T("        cast(trim(substr(substr(product_name,instr(product_name,' ',-1,1)+1),1,3)||''||product_id) as number) maid,") \
		_T("        hpol_qtyissue,") \
		_T("        hpol_unitprice,") \
		_T("        hpo_object_id doituong,") \
		_T("        Hms_getagebydoc(hpo_docno)           age,") \
		_T("        Get_syssel_desc('sys_sex', hp_sex)   sex,") \
		_T("        Get_syssel_desc('hms_rank', hp_rank) rank,") \
		_T("        hpol_qtyissue*hpol_unitprice AS tienmau") \
		_T(" FROM hms_ipharmaorder") \
		_T(" LEFT JOIN hms_ipharmaorderline ON(hpol_docno=hpo_docno and hpol_orderid=hpo_orderid)") \
		_T(" LEFT JOIN hms_patient ON (hp_patientno=hpo_patientno)") \
		_T(" LEFT JOIN m_productitem_view ON(product_item_id=hpol_product_item_id)") \
		_T(" LEFT JOIN m_blood_donation ON(mbd_product_item_id = hpol_product_item_id)") \
		_T(" WHERE hpo_org_id='BB' and hpo_orderstatus='A' and hpo_approvedate between to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') and to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') ))") \
		_T(" GROUP BY ngay,khoa,sohs,doituong,sex,age,rank,") \
		_T(" UNION ALL") \
		_T(" SELECT hpo_approvedate ngay,") \
		_T("        hpc_deptid khoa,") \
		_T("        hpcl_docno sohs,hpc_object doituong,") \
		_T("        Hms_getagebydoc(hpo_docno)           age,") \
		_T("        Get_syssel_desc('sys_sex', hp_sex)   sex,") \
		_T("        Get_syssel_desc('hms_rank', hp_rank) rank,") \
		_T("        0 dv150,0 dv250,0 dv350,0 tienmau,") \
		_T("        hpcl_qty*hfl_servprice tienxn") \
		_T(" FROM hms_testorder") \
		_T(" LEFT JOIN hms_testorderline ON(hpc_orderid=hpcl_orderid)") \
		_T(" LEFT JOIN hms_ipharmaorder ON(hpo_orderid=hpc_bedid and hpo_docno=hpc_docno)") \
		_T(" LEFT JOIN hms_patient ON (hp_patientno=hpo_patientno)") \
		_T(" LEFT JOIN hms_fee_list ON(hpcl_itemid=hfl_feeid)") \
		_T(" WHERE hpo_org_id='BB' and hpo_orderstatus='A' and hpc_object in(7) and hpo_approvedate between to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') and to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')") \
		_T(" UNION ALL") \
		_T(" SELECT hpo_approvedate ngay,") \
		_T("        hpc_deptid khoa,") \
		_T("        hpcl_docno sohs,hpc_object doituong,") \
		_T("        Hms_getagebydoc(hpo_docno)           age,") \
		_T("        Get_syssel_desc('sys_sex', hp_sex)   sex,") \
		_T("        Get_syssel_desc('hms_rank', hp_rank) rank,") \
		_T("        0 dv150,0 dv250,0 dv350,0 tienmau,") \
		_T("        hpcl_qty*hfl_polprice tienxn") \
		_T(" FROM hms_testorder") \
		_T(" LEFT JOIN hms_testorderline ON(hpc_orderid=hpcl_orderid)") \
		_T(" LEFT JOIN hms_ipharmaorder ON(hpo_orderid=hpc_bedid and hpo_docno=hpc_docno)") \
		_T(" LEFT JOIN hms_patient ON (hp_patientno=hpo_patientno)") \
		_T(" LEFT JOIN hms_fee_list ON(hpcl_itemid=hfl_feeid)") \
		_T(" WHERE hpo_org_id='BB' and hpo_orderstatus='A' and hpc_object in(1,3,8) and hpo_approvedate between to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') and to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')") \
		_T(" UNION ALL") \
		_T(" SELECT hpo_approvedate ngay,") \
		_T("        hpc_deptid khoa,") \
		_T("        hpcl_docno sohs,hpc_object doituong,") \
		_T("        Hms_getagebydoc(hpo_docno)           age,") \
		_T("        Get_syssel_desc('sys_sex', hp_sex)   sex,") \
		_T("        Get_syssel_desc('hms_rank', hp_rank) rank,") \
    	_T("        0 dv150,0 dv250,0 dv350,0 tienmau,") \
		_T("        hpcl_qty*hfl_insprice tienxn") \
		_T(" FROM hms_testorder") \
		_T(" LEFT JOIN hms_testorderline ON(hpc_orderid=hpcl_orderid)") \
		_T(" LEFT JOIN hms_ipharmaorder ON(hpo_orderid=hpc_bedid and hpo_docno=hpc_docno)") \
		_T(" LEFT JOIN hms_patient ON (hp_patientno=hpo_patientno)") \
		_T(" LEFT JOIN hms_fee_list ON(hpcl_itemid=hfl_feeid)") \
		_T(" WHERE hpo_org_id='BB' and hpo_orderstatus='A' and hpc_object not in(7,1,3,8) and hpo_approvedate between to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') and to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss'))") \
		_T(" WHERE 1=1 %s %s") \
		_T(" GROUP BY ngay,khoa,sohs,doituong,sex,age,rank") \
		_T(" ORDER BY ngay)") \
		_T(" WHERE dv250+dv350>0"), dv1,dv2,
							m_szFromDate,m_szToDate,
							m_szFromDate,m_szToDate,
							m_szFromDate,m_szToDate,
							m_szFromDate,m_szToDate,
							szDeptKey,szObjectKey);
	//_msg(_T("%s"), szSQL);
	//QueryOpener(szSQL);*/
	return szSQL;
}