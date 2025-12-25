#include "stdafx.h"
#include "VPMCanhbaogoisaphethan.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
#include "Excel.h"
static void _OnPackageSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CVPMCanhbaogoisaphethan* )pWnd)->OnPackageSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPackageSelendokFnc(CWnd *pWnd){
	((CVPMCanhbaogoisaphethan *)pWnd)->OnPackageSelendok();
}
/*static void _OnPackageSetfocusFnc(CWnd *pWnd){
	((CVPMCanhbaogoisaphethan *)pWnd)->OnPackageKillfocus();
}*/
/*static void _OnPackageKillfocusFnc(CWnd *pWnd){
	((CVPMCanhbaogoisaphethan *)pWnd)->OnPackageKillfocus();
}*/
static long _OnPackageLoadDataFnc(CWnd *pWnd){
	return ((CVPMCanhbaogoisaphethan *)pWnd)->OnPackageLoadData();
}
/*static void _OnPackageAddNewFnc(CWnd *pWnd){
	((CVPMCanhbaogoisaphethan *)pWnd)->OnPackageAddNew();
}*/
static void _OnDeptSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CVPMCanhbaogoisaphethan* )pWnd)->OnDeptSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDeptSelendokFnc(CWnd *pWnd){
	((CVPMCanhbaogoisaphethan *)pWnd)->OnDeptSelendok();
}
/*static void _OnDeptSetfocusFnc(CWnd *pWnd){
	((CVPMCanhbaogoisaphethan *)pWnd)->OnDeptKillfocus();
}*/
/*static void _OnDeptKillfocusFnc(CWnd *pWnd){
	((CVPMCanhbaogoisaphethan *)pWnd)->OnDeptKillfocus();
}*/
static long _OnDeptLoadDataFnc(CWnd *pWnd){
	return ((CVPMCanhbaogoisaphethan *)pWnd)->OnDeptLoadData();
}
/*static void _OnDeptAddNewFnc(CWnd *pWnd){
	((CVPMCanhbaogoisaphethan *)pWnd)->OnDeptAddNew();
}*/
static void _OnExportSelectFnc(CWnd *pWnd){
	CVPMCanhbaogoisaphethan *pVw = (CVPMCanhbaogoisaphethan *)pWnd;
	pVw->OnExportSelect();
} 
static int _OnAddVPMCanhbaogoisaphethanFnc(CWnd *pWnd){
	 return ((CVPMCanhbaogoisaphethan*)pWnd)->OnAddVPMCanhbaogoisaphethan();
} 
static int _OnEditVPMCanhbaogoisaphethanFnc(CWnd *pWnd){
	 return ((CVPMCanhbaogoisaphethan*)pWnd)->OnEditVPMCanhbaogoisaphethan();
} 
static int _OnDeleteVPMCanhbaogoisaphethanFnc(CWnd *pWnd){
	 return ((CVPMCanhbaogoisaphethan*)pWnd)->OnDeleteVPMCanhbaogoisaphethan();
} 
static int _OnSaveVPMCanhbaogoisaphethanFnc(CWnd *pWnd){
	 return ((CVPMCanhbaogoisaphethan*)pWnd)->OnSaveVPMCanhbaogoisaphethan();
} 
static int _OnCancelVPMCanhbaogoisaphethanFnc(CWnd *pWnd){
	 return ((CVPMCanhbaogoisaphethan*)pWnd)->OnCancelVPMCanhbaogoisaphethan();
} 
CVPMCanhbaogoisaphethan::CVPMCanhbaogoisaphethan(CWnd *pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CVPMCanhbaogoisaphethan::~CVPMCanhbaogoisaphethan(){
}
void CVPMCanhbaogoisaphethan::OnCreateComponents(){
	m_wndReportCondition.Create(this, _T("Report Condition"), 1, 1, 479, 126);
	m_wndPackageLabel.Create(this, _T("Package"), 5, 26, 85, 51);
	m_wndPackage.Create(this,90, 26, 472, 51); 
	m_wndDeptLabel.Create(this, _T("Dept"), 5, 56, 85, 81);
	m_wndDept.Create(this,90, 56, 472, 81); 
	m_wndExport.Create(this, _T("Export"), 392, 91, 472, 116);

}
void CVPMCanhbaogoisaphethan::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndPackage.SetCheckValue(true);
	m_wndPackage.LimitText(35);
	m_wndDept.SetCheckValue(true);
	m_wndDept.LimitText(35);


	m_wndPackage.InsertColumn(0, _T("ID"), CFMT_RIGHT, 100);
	m_wndPackage.InsertColumn(1, _T("Name"), CFMT_TEXT, 300);
	m_wndPackage.SetCheckBox(TRUE);


	m_wndDept.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDept.InsertColumn(1, _T("Name"), CFMT_TEXT, 350);

}
void CVPMCanhbaogoisaphethan::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndPackage.SetEvent(WE_SELENDOK, _OnPackageSelendokFnc);
	//m_wndPackage.SetEvent(WE_SETFOCUS, _OnPackageSetfocusFnc);
	//m_wndPackage.SetEvent(WE_KILLFOCUS, _OnPackageKillfocusFnc);
	m_wndPackage.SetEvent(WE_SELCHANGE, _OnPackageSelectChangeFnc);
	m_wndPackage.SetEvent(WE_LOADDATA, _OnPackageLoadDataFnc);
	//m_wndPackage.SetEvent(WE_ADDNEW, _OnPackageAddNewFnc);
	m_wndDept.SetEvent(WE_SELENDOK, _OnDeptSelendokFnc);
	//m_wndDept.SetEvent(WE_SETFOCUS, _OnDeptSetfocusFnc);
	//m_wndDept.SetEvent(WE_KILLFOCUS, _OnDeptKillfocusFnc);
	m_wndDept.SetEvent(WE_SELCHANGE, _OnDeptSelectChangeFnc);
	m_wndDept.SetEvent(WE_LOADDATA, _OnDeptLoadDataFnc);
	//m_wndDept.SetEvent(WE_ADDNEW, _OnDeptAddNewFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddVPMCanhbaogoisaphethanFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditVPMCanhbaogoisaphethanFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteVPMCanhbaogoisaphethanFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveVPMCanhbaogoisaphethanFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelVPMCanhbaogoisaphethanFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CVPMCanhbaogoisaphethan::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndPackage.GetDlgCtrlID(), m_szPackageKey);
	DDX_TextEx(pDX, m_wndDept.GetDlgCtrlID(), m_szDeptKey);

}
void CVPMCanhbaogoisaphethan::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Package")] =  m_szPackageKey;
	m_jData[_T("Dept")] =  m_szDeptKey;
	}
	else
	{
			
	m_jData[_T("Package")].GetValue(m_szPackageKey);
	m_jData[_T("Dept")].GetValue(m_szDeptKey);
	}

}
void CVPMCanhbaogoisaphethan::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CVPMCanhbaogoisaphethan::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CVPMCanhbaogoisaphethan::SetDefaultValues(){

	m_szPackageKey.Empty();
	m_szDeptKey.Empty();

}
int CVPMCanhbaogoisaphethan::SetMode(int nMode){
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
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 6, -1);
 			SetDefaultValues();
 			break;
 		};
 		UpdateData(FALSE);
 		return nOldMode;
}
void CVPMCanhbaogoisaphethan::OnPackageSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CVPMCanhbaogoisaphethan::OnPackageSelendok(){
	 
}
/*void CVPMCanhbaogoisaphethan::OnPackageSetfocus(){
	
}*/
/*void CVPMCanhbaogoisaphethan::OnPackageKillfocus(){
	
}*/
long CVPMCanhbaogoisaphethan::OnPackageLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndPackage.IsSearchKey() && !m_szPackageKey.IsEmpty()){
		szWhere.Format(_T(" and id='%s' "), m_szPackageKey);
	};
	m_wndPackage.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE  ss_id='HMS_SERVICE_PACKAGE' %s ORDER BY id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPackage.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CVPMCanhbaogoisaphethan::OnPackageAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CVPMCanhbaogoisaphethan::OnDeptSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CVPMCanhbaogoisaphethan::OnDeptSelendok(){
	 
}
/*void CVPMCanhbaogoisaphethan::OnDeptSetfocus(){
	
}*/
/*void CVPMCanhbaogoisaphethan::OnDeptKillfocus(){
	
}*/
long CVPMCanhbaogoisaphethan::OnDeptLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDept.IsSearchKey() && !m_szDeptKey.IsEmpty())
	{
		szWhere.Format(_T(" and id='%s' "), m_szDeptKey);
	}
	m_wndDept.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT sd_id as id, sd_name as name FROM sys_dept WHERE 1=1 %s ORDER BY id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDept.AddItems(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("name")));
		rs.MoveNext();
	}
	return nCount;
}
/*void CVPMCanhbaogoisaphethan::OnDeptAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CVPMCanhbaogoisaphethan::OnExportSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szWhere, szOldDay, szNewDay;
	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();
	int nRow = 0, nCol = 0, nIdx = 1, nCost =0;
	double nTemp = 0, nTemp1=0;

	CExcel xls;
	if (!xls.Load(_T("Exports\\BAOCAOCANHBAOSUDUNGGOIDICHVU.xls"))) AfxMessageBox(_T("\x43h\x1B0\x61 \x63\xF3 \x66il\x65 trong th\x1B0 m\x1EE5\x63 Exports"));

	xls.SetWorksheet(0);
	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);	

	szSQL = GetQueryString();	
	rs.ExecSQL(szSQL);
	_fmsg(_T("%s"),szSQL);

	nRow = 9;
	nCol = 0;
	while(!rs.IsEOF())
	{
		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);

		rs.GetValue(_T("patientname"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("docno"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_INTEGER);

		rs.GetValue(_T("deptid"), tmpStr);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("goi"), tmpStr);
		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("relative"), tmpStr);
		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("contacttel"), tmpStr);
		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("phone"), tmpStr);
		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_TEXT);

		nRow++;
		rs.MoveNext();
	}

	

	xls.Save(_T("Exports\\BAOCAOCANHBAOSUDUNGGOIDICHVU2.xls"));
	
} 
int CVPMCanhbaogoisaphethan::OnAddVPMCanhbaogoisaphethan(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CVPMCanhbaogoisaphethan::OnEditVPMCanhbaogoisaphethan(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CVPMCanhbaogoisaphethan::OnDeleteVPMCanhbaogoisaphethan(){
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
 		OnCancelVPMCanhbaogoisaphethan();
 	}
	return 0;
}
int CVPMCanhbaogoisaphethan::OnSaveVPMCanhbaogoisaphethan(){
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
 		//OnVPMCanhbaogoisaphethanListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CVPMCanhbaogoisaphethan::OnCancelVPMCanhbaogoisaphethan(){
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
int CVPMCanhbaogoisaphethan::OnVPMCanhbaogoisaphethanListLoadData(){
	return 0;
}
CString CVPMCanhbaogoisaphethan::GetQueryString()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szSQL,szPackagename;
	CString szWhere;
	if (!m_szDeptKey.IsEmpty())
	{
		szWhere.AppendFormat(_T("AND hfe_deptid = '%s'"), m_szDeptKey);
	}
	for (int i = 0; i < m_wndPackage.GetItemCount(); i++)
	{
		if (m_wndPackage.GetCheck(i))
		{
			m_wndPackage.SetCurSel(i);
			if (!szPackagename.IsEmpty())
				szPackagename.AppendFormat(_T(", "));
			szPackagename.AppendFormat(_T("%s"), m_wndPackage.GetCurrent(0));
		}
	}

	if (!szPackagename.IsEmpty())
		szWhere.AppendFormat(_T(" and hfel_itemid in('%s') "), szPackagename);

	szSQL.Format(_T(" SELECT HFE_FEE_EXTRA_ID AS idx,") \
		_T("   hfe_status            AS status,") \
		_T("   get_patientname(hfe_docno) as patientname,hfel_unitprice as unit,") \
		_T("   hfe_docno as docno,hfel_desc as goi,") \
		_T("   hfe_deptid as deptid,(SELECT hd_contacttel FROM hms_doc WHERE hfe_docno=hd_docno) AS contacttel,") \
		_T("   (SELECT hr_name FROM hms_relative WHERE hr_relative_id=hfe_relative_id) AS relative,") \
		_T("   (SELECT hr_phone FROM hms_relative WHERE hr_relative_id=hfe_relative_id) AS phone,") \
		_T("   TO_CHAR(hfe_orderdate,'DD/MM/YYYY HH24:MI')                                                            AS begindate,") \
		_T("   TO_CHAR(hfe_enddate,'DD/MM/YYYY HH24:MI')                                                              AS enddate,") \
		_T("   COALESCE(extract(DAY FROM hfe_enddate - systimestamp)*24+extract(hour FROM hfe_enddate - systimestamp), 0) as hour,") \
		_T("   hfel_quantity                                                                                          AS quantity,") \
		_T("   hfl_name                                                                                               AS pkg_name,") \
		_T("   hfel_cost                                                                                              AS amount") \
		_T(" FROM hms_fee_extra,") \
		_T("   hms_fee_extraline,") \
		_T("   hms_fee_list") \
		_T(" WHERE COALESCE(extract(DAY FROM hfe_enddate - systimestamp)*24+extract(hour FROM hfe_enddate - systimestamp), 0) > 0 and COALESCE(extract(DAY FROM hfe_enddate - systimestamp)*24+extract(hour FROM hfe_enddate - systimestamp), 0)  <= 24  ") \
		_T(" AND hfel_docno       = hfe_docno") \
		_T(" AND hfe_fee_extra_id = hfel_fee_extra_id") \
		_T(" AND hfel_itemid      = hfl_feeid") \
		_T(" AND hfe_type         ='S' %s") \
		_T(" ORDER BY hfel_fee_extraline_id"),szWhere); 	
	return szSQL;
}