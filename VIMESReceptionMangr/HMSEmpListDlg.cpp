#include "HMSEmpListDlg.h"
#include "MainFrm.h"
#include "Excel.h"
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSEmpListDlg* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CHMSEmpListDlg *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CHMSEmpListDlg *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CHMSEmpListDlg *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CHMSEmpListDlg *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CHMSEmpListDlg *)pWnd)->OnDepartmentAddNew();
}*/
/*static void _OnEmployeeIDChangeFnc(CWnd *pWnd){
	((CHMSEmpListDlg *)pWnd)->OnEmployeeIDChange();
} */
/*static void _OnEmployeeIDSetfocusFnc(CWnd *pWnd){
	((CHMSEmpListDlg *)pWnd)->OnEmployeeIDSetfocus();} */ 
/*static void _OnEmployeeIDKillfocusFnc(CWnd *pWnd){
	((CHMSEmpListDlg *)pWnd)->OnEmployeeIDKillfocus();
} */
static int _OnEmployeeIDCheckValueFnc(CWnd *pWnd){
	return ((CHMSEmpListDlg *)pWnd)->OnEmployeeIDCheckValue();
} 
/*static void _OnEmployeeNameChangeFnc(CWnd *pWnd){
	((CHMSEmpListDlg *)pWnd)->OnEmployeeNameChange();
} */
/*static void _OnEmployeeNameSetfocusFnc(CWnd *pWnd){
	((CHMSEmpListDlg *)pWnd)->OnEmployeeNameSetfocus();} */ 
/*static void _OnEmployeeNameKillfocusFnc(CWnd *pWnd){
	((CHMSEmpListDlg *)pWnd)->OnEmployeeNameKillfocus();
} */
static int _OnEmployeeNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSEmpListDlg *)pWnd)->OnEmployeeNameCheckValue();
} 
static void _OnSearchSelectFnc(CWnd *pWnd){
	CHMSEmpListDlg *pVw = (CHMSEmpListDlg *)pWnd;
	pVw->OnSearchSelect();
} 
static long _OnEmployeeListLoadDataFnc(CWnd *pWnd){
	return ((CHMSEmpListDlg*)pWnd)->OnEmployeeListLoadData();
} 
static void _OnEmployeeListDblClickFnc(CWnd *pWnd){
	((CHMSEmpListDlg*)pWnd)->OnEmployeeListDblClick();
} 
static void _OnEmployeeListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSEmpListDlg*)pWnd)->OnEmployeeListSelectChange(nOldItem, nNewItem);
} 
static int _OnEmployeeListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSEmpListDlg*)pWnd)->OnEmployeeListDeleteItem();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSEmpListDlg *pVw = (CHMSEmpListDlg *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CHMSEmpListDlg *pVw = (CHMSEmpListDlg *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSEmpListDlg *pVw = (CHMSEmpListDlg *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSEmpListDlg *pVw = (CHMSEmpListDlg *)pWnd;
	pVw->OnCloseSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CHMSEmpListDlg *pVw = (CHMSEmpListDlg *)pWnd;
	pVw->OnExportSelect();
} 
static int _OnAddHMSEmpListDlgFnc(CWnd *pWnd){
	 return ((CHMSEmpListDlg*)pWnd)->OnAddHMSEmpListDlg();
} 
static int _OnEditHMSEmpListDlgFnc(CWnd *pWnd){
	 return ((CHMSEmpListDlg*)pWnd)->OnEditHMSEmpListDlg();
} 
static int _OnDeleteHMSEmpListDlgFnc(CWnd *pWnd){
	 return ((CHMSEmpListDlg*)pWnd)->OnDeleteHMSEmpListDlg();
} 
static int _OnSaveHMSEmpListDlgFnc(CWnd *pWnd){
	 return ((CHMSEmpListDlg*)pWnd)->OnSaveHMSEmpListDlg();
} 
static int _OnCancelHMSEmpListDlgFnc(CWnd *pWnd){
	 return ((CHMSEmpListDlg*)pWnd)->OnCancelHMSEmpListDlg();
} 
CHMSEmpListDlg::CHMSEmpListDlg(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CHMSEmpListDlg::~CHMSEmpListDlg(){
}
void CHMSEmpListDlg::OnCreateComponents(){
	m_wndFilter.Create(this, _T("Filter"), 5, 5, 785, 60);
	m_wndDepartmentLabel.Create(this, _T("Department"), 10, 30, 90, 55);
	m_wndDepartment.Create(this,95, 30, 245, 55); 
	m_wndEmployeeIDLabel.Create(this, _T("Employee ID"), 250, 30, 330, 55);
	m_wndEmployeeID.Create(this,335, 30, 485, 55); 
	m_wndEmployeeNameLabel.Create(this, _T("Employee Name"), 490, 30, 570, 55);
	m_wndEmployeeName.Create(this,575, 30, 735, 55); 
	m_wndSearch.Create(this, _T("@"), 740, 30, 780, 55);
	m_wndEmployeeList.Create(this,5, 65, 785, 565);
	m_wndAdd.Create(this, _T("&Add"), 535, 570, 615, 595);
	//m_wndEdit.Create(this, _T("&Edit"), 535, 570, 615, 595);
	m_wndDelete.Create(this, _T("&Delete"), 620, 570, 700, 595);
	m_wndClose.Create(this, _T("&Close"), 705, 570, 785, 595);
	m_wndExport.Create(this, _T("Export"), 450, 570, 530, 595);

}
void CHMSEmpListDlg::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(35);
	m_wndEmployeeID.SetLimitText(35);
	//m_wndEmployeeID.SetCheckValue(true);
	m_wndEmployeeName.SetLimitText(35);
	//m_wndEmployeeName.SetCheckValue(true);


	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndEmployeeList.InsertColumn(0, _T("STT"), CFMT_TEXT, 50);
	m_wndEmployeeList.InsertColumn(1, _T("Patient No"), CFMT_TEXT, 100);
	m_wndEmployeeList.InsertColumn(2, _T("Employee ID"), CFMT_TEXT, 0);
	m_wndEmployeeList.InsertColumn(3, _T("Employee Name"), CFMT_TEXT, 150);
	m_wndEmployeeList.InsertColumn(4, _T("Card No"), CFMT_TEXT, 120);
	m_wndEmployeeList.InsertColumn(5, _T("Birth Date"), CFMT_TEXT, 100);
	m_wndEmployeeList.InsertColumn(6, _T("Sex"), CFMT_TEXT, 50);
	m_wndEmployeeList.InsertColumn(7, _T("Department"), CFMT_TEXT, 50);
	m_wndEmployeeList.InsertColumn(8, _T("Position"), CFMT_TEXT, 100);
	m_wndEmployeeList.InsertColumn(9, _T("Telephone"), CFMT_TEXT, 100);
	m_wndEmployeeList.InsertColumn(10, _T("Workplace"), CFMT_TEXT, 100);
	m_wndEmployeeList.InsertColumn(11, _T("Rank"), CFMT_TEXT, 100);
	m_wndEmployeeList.InsertColumn(12, _T("IDNo"), CFMT_TEXT, 100);
  
}
void CHMSEmpListDlg::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndDepartment.SetEvent(WE_SELENDOK, _OnDepartmentSelendokFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	//m_wndDepartment.SetEvent(WE_ADDNEW, _OnDepartmentAddNewFnc);
	//m_wndEmployeeID.SetEvent(WE_CHANGE, _OnEmployeeIDChangeFnc);
	//m_wndEmployeeID.SetEvent(WE_SETFOCUS, _OnEmployeeIDSetfocusFnc);
	//m_wndEmployeeID.SetEvent(WE_KILLFOCUS, _OnEmployeeIDKillfocusFnc);
	m_wndEmployeeID.SetEvent(WE_CHECKVALUE, _OnEmployeeIDCheckValueFnc);
	//m_wndEmployeeName.SetEvent(WE_CHANGE, _OnEmployeeNameChangeFnc);
	//m_wndEmployeeName.SetEvent(WE_SETFOCUS, _OnEmployeeNameSetfocusFnc);
	//m_wndEmployeeName.SetEvent(WE_KILLFOCUS, _OnEmployeeNameKillfocusFnc);
	m_wndEmployeeName.SetEvent(WE_CHECKVALUE, _OnEmployeeNameCheckValueFnc);
	m_wndSearch.SetEvent(WE_CLICK, _OnSearchSelectFnc);
	m_wndEmployeeList.SetEvent(WE_SELCHANGE, _OnEmployeeListSelectChangeFnc);
	m_wndEmployeeList.SetEvent(WE_LOADDATA, _OnEmployeeListLoadDataFnc);
	m_wndEmployeeList.SetEvent(WE_DBLCLICK, _OnEmployeeListDblClickFnc);
	
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	SetMode(VM_VIEW);

}
void CHMSEmpListDlg::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_Text(pDX, m_wndEmployeeID.GetDlgCtrlID(), m_szEmployeeID);
	DDX_Text(pDX, m_wndEmployeeName.GetDlgCtrlID(), m_szEmployeeName);

}
void CHMSEmpListDlg::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSEmpListDlg::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSEmpListDlg::SetDefaultValues(){

	m_szDepartmentKey.Empty();
	m_szEmployeeID.Empty();
	m_szEmployeeName.Empty();

}
int CHMSEmpListDlg::SetMode(int nMode){
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
 			EnableButtons(TRUE, 0, 1, 2, 3, 4,-1);
 			break;
 		case VM_VIEW: 
 			EnableControls(TRUE);
 			EnableButtons(FALSE, 2, 3, -1);
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
void CHMSEmpListDlg::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSEmpListDlg::OnDepartmentSelendok(){
	 
}
/*void CHMSEmpListDlg::OnDepartmentSetfocus(){
	
}*/
/*void CHMSEmpListDlg::OnDepartmentKillfocus(){
	
}*/
long CHMSEmpListDlg::OnDepartmentLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDepartment.IsSearchKey() && !m_szDepartmentKey.IsEmpty()){
		szWhere.Format(_T(" AND sd_id='%s' "), m_szDepartmentKey);
	}
	szSQL.Format(_T("SELECT sd_id as id, sd_name as name FROM sys_dept WHERE 1=1 %s ORDER BY sd_id "),szWhere);

	m_wndDepartment.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDepartment.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSEmpListDlg::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSEmpListDlg::OnEmployeeIDChange(){
	
} */
/*void CHMSEmpListDlg::OnEmployeeIDSetfocus(){
	
} */
/*void CHMSEmpListDlg::OnEmployeeIDKillfocus(){
	
} */
int CHMSEmpListDlg::OnEmployeeIDCheckValue(){
	return 0;
} 
/*void CHMSEmpListDlg::OnEmployeeNameChange(){
	
} */
/*void CHMSEmpListDlg::OnEmployeeNameSetfocus(){
	
} */
/*void CHMSEmpListDlg::OnEmployeeNameKillfocus(){
	
} */
int CHMSEmpListDlg::OnEmployeeNameCheckValue(){
	return 0;
} 
void CHMSEmpListDlg::OnSearchSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);
	OnEmployeeListLoadData();
} 
void CHMSEmpListDlg::OnEmployeeListDblClick(){
	CHMSEmpInfoDlg dlg(this);
	dlg.m_szPatientID = m_szEmpID;
	dlg.m_nPatientNo = m_nPatientNo;
	dlg.SetMode(VM_EDIT);
	dlg.DoModal();
} 
void CHMSEmpListDlg::OnEmployeeListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	int nCurSel = m_wndEmployeeList.GetCurSel();
	m_szEmpID = m_wndEmployeeList.GetItemText(nCurSel, 2);
	m_nPatientNo = ToLong(m_wndEmployeeList.GetItemText(nCurSel, 1));
	SetMode(VM_EDIT);
} 
int CHMSEmpListDlg::OnEmployeeListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSEmpListDlg::OnEmployeeListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szSTT;
	m_wndEmployeeList.BeginLoad(); 
	int nCount = 0;
	int nStt = 1;
	if(!m_szDepartmentKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND hp_department = '%s'"), m_szDepartmentKey);
	}
	if(!m_szEmployeeID.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND hp_patientid = '%s'"), m_szEmployeeID);
	}
	if(!m_szEmployeeName.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND upper(trim(hp_surname||' '||hp_midname||' '||hp_firstname)) like (upper('%s%s%s'))"),
			_T("%"), m_szEmployeeName, _T("%"));
	}
	szSQL.Format(_T("SELECT hp_patientno, ") \
					_T("hp_patientid, hd_cardno,") \
					_T("trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname, ") \
					_T("hp_birthdate, ") \
					_T("(select ss_desc from sys_sel where ss_id = 'sys_sex' and ss_code = hp_sex) as sex, ") \
					_T("hp_ethnic, ") \
					_T("hp_provid, ") \
					_T("hp_distid, ") \
					_T("hp_villid, ") \
					_T("hp_occupation, ") \
					_T("hp_department, ") \
					_T("(select ss_desc from sys_sel where ss_id = 'hms_rank' and ss_code = hp_rank) as rank, ") \
					_T("(select ss_desc from sys_sel where ss_id = 'hms_position' and ss_code = hp_position) as position, ") \
					_T("hp_dtladdr, hd_telephone,") \
					_T("hp_workplace, ") \
					_T("hp_workplaceid, ") \
					_T("hp_sin ") \
					_T("FROM hms_patient ") \
					_T("LEFT JOIN hms_doc ON(hd_patientno = hp_patientno) ") \
					_T("WHERE hp_type = 'E' %s ORDER BY hp_department "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		szSTT.Format(_T("%d"), nStt);
		m_wndEmployeeList.AddItems(
			szSTT,
			rs.GetValue(_T("hp_patientno")),
			rs.GetValue(_T("hp_patientid")),
			rs.GetValue(_T("pname")),
			rs.GetValue(_T("hd_cardno")),
			CDate::Convert(rs.GetValue(_T("hp_birthdate")), yyyymmdd, ddmmyyyy),
			rs.GetValue(_T("sex")),
			rs.GetValue(_T("hp_department")),
			rs.GetValue(_T("position")),
			rs.GetValue(_T("hd_telephone")),
			rs.GetValue(_T("hp_workplace")),
			rs.GetValue(_T("rank")),
			rs.GetValue(_T("hp_sin")), NULL);
		nStt++;
		rs.MoveNext();
	}
	m_wndEmployeeList.EndLoad(); 
	return nCount;

}
void CHMSEmpListDlg::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CHMSEmpInfoDlg dlg(this);
	dlg.SetMode(VM_ADD);
	dlg.DoModal();
} 
void CHMSEmpListDlg::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CHMSEmpInfoDlg dlg(this);
	dlg.m_szPatientID = m_szEmployeeID;
	dlg.SetMode(VM_EDIT);
	dlg.DoModal();
} 
void CHMSEmpListDlg::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL;
	CRecord rs(&pMF->m_db);
	szSQL.Format(_T("SELECT count(*) FROM hms_doc WHERE hd_status = 'T' and hd_patientno = %ld"), m_nPatientNo);
	rs.ExecSQL(szSQL);
	int ret = rs.GetIntValue();
	_fmsg(_T("%s"), szSQL);
	_fmsg(_T("%d"),ret);
	if(ret > 0)
	{
		MessageBox(_T("Document of patient has been end. Can not delete this patient."), 0, MB_ICONWARNING);
		return;
	}
	else
		OnDeleteHMSEmpListDlg();
} 
void CHMSEmpListDlg::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();
} 
void CHMSEmpListDlg::OnExportSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();	CRecord rs(&pMF->m_db);	CString szSQL, tmpStr, szTemp, szWhere, szSTT;	CString szOldLine, szNewLine;	UpdateData(TRUE);	BeginWaitCursor();	szWhere.Empty();	int nRow =0, nCol = 0;	CExcel xls;	xls.CreateSheet(1);	xls.SetWorksheet(0);	xls.SetColumnWidth(0, 8);	xls.SetColumnWidth(1, 17);	xls.SetColumnWidth(2, 12);	xls.SetColumnWidth(3, 8);	xls.SetColumnWidth(4, 8);	xls.SetColumnWidth(5, 13);	xls.SetColumnWidth(6, 12);	xls.SetColumnWidth(7, 11);	xls.SetColumnWidth(8, 13);	xls.SetColumnWidth(9, 9);	xls.SetCellText(0, 0, _T("\x44\x41NH S\xC1\x43H NH\xC2N VI\xCAN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(0, 2, _T("STT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(1, 2, _T("H\x1ECC V\xC0 T\xCAN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(2, 2, _T("S\x1ED0 TH\x1EBA \x42H"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(3, 2, _T("NS"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(4, 2, _T("GT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(5, 2, _T("\x110V"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(6, 2, _T("\x43\x1EA4P \x42\x1EAC\x43"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(7, 2, _T("\x43H\x1EE8\x43 V\x1EE4"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(8, 2, _T("\x110\x1ED0I T\x1AF\x1EE2NG"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(9, 2, _T("S\x110T"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetMerge(0, 0, 0, 9);	int nCount = 0;
	int nStt = 1;
	if(!m_szDepartmentKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND hp_department = '%s'"), m_szDepartmentKey);
	}
	if(!m_szEmployeeID.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND hp_patientid = '%s'"), m_szEmployeeID);
	}
	if(!m_szEmployeeName.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND upper(trim(hp_surname||' '||hp_midname||' '||hp_firstname)) like (upper('%s%s%s'))"),
			_T("%"), m_szEmployeeName, _T("%"));
	}
	szSQL.Format(_T("SELECT hp_patientno, ") \
					_T("hp_patientid, hd_cardno,") \
					_T("trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname, ") \
					_T("hp_birthdate, ") \
					_T("(select ss_desc from sys_sel where ss_id = 'sys_sex' and ss_code = hp_sex) as , ") \
					_T("hp_ethnic, ") \
					_T("hp_provid, ") \
					_T("hp_distid, ") \
					_T("hp_villid, ") \
					_T("hp_occupation, get_objectname(hd_object) as pobject,") \
					_T("hp_department, ") \
					_T("(select ss_desc from sys_sel where ss_id = 'hms_rank' and ss_code = hp_rank) as rank, ") \
					_T("(select ss_desc from sys_sel where ss_id = 'hms_position' and ss_code = hp_position) as position, ") \
					_T("hp_dtladdr, hd_telephone,") \
					_T("hp_workplace, ") \
					_T("hp_workplaceid, ") \
					_T("hp_sin ") \
					_T("FROM hms_patient ") \
					_T("LEFT JOIN hms_doc ON(hd_patientno = hp_patientno) ") \
					_T("WHERE hp_type = 'E' ORDER BY hp_department %s "), szWhere);
		rs.ExecSQL(szSQL);	nRow = 4;	nCol = 0;	while(!rs.IsEOF()){		rs.GetValue(_T("hp_department"), szNewLine);		if(szOldLine != szNewLine)		{			xls.SetMerge(nRow, nRow, 0, 9);			xls.SetCellText(nCol, nRow, szNewLine, FMT_TEXT, true);			szOldLine = szNewLine;			nRow++;		}		szSTT.Format(_T("%d"), nStt);		xls.SetCellText(nCol+0, nRow, szSTT, FMT_TEXT);		rs.GetValue(_T("pname"), tmpStr);		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("hd_cardno"), tmpStr);		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("hp_birthdate"), tmpStr);		xls.SetCellText(nCol+3, nRow, CDate::Convert(tmpStr, yyyymmdd,ddmmyyyy), FMT_TEXT);		rs.GetValue(_T("sex"), tmpStr);		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("hp_workplace"), tmpStr);		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("rank"), tmpStr);		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("position"), tmpStr);		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("pobject"), tmpStr);		xls.SetCellText(nCol+8, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("hd_telephone"), tmpStr);		xls.SetCellText(nCol+9, nRow, tmpStr, FMT_TEXT);		nRow++;		nStt++;		rs.MoveNext();	}	EndWaitCursor();	xls.Save(_T("Exports\\DSNV.xls"));
} 
int CHMSEmpListDlg::OnAddHMSEmpListDlg(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSEmpListDlg::OnEditHMSEmpListDlg(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSEmpListDlg::OnDeleteHMSEmpListDlg(){
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
	szSQL.Format(_T("UPDATE hms_patient SET hp_type = '' WHERE hp_patientno = %ld "), m_nPatientNo);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
		OnEmployeeListLoadData();
 		OnCancelHMSEmpListDlg();
 	}
	return 0;
}
int CHMSEmpListDlg::OnSaveHMSEmpListDlg(){
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
 		//OnHMSEmpListDlgListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSEmpListDlg::OnCancelHMSEmpListDlg(){
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
int CHMSEmpListDlg::OnHMSEmpListDlgListLoadData(){
	return 0;
}
