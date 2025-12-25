#include "rptAdmissionPatientListReportDialog.h"
#include "../MainFrm.h"
#include "ReportDocument.h"
#include "Excel.h"

/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CrptAdmissionPatientListReportDialog *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CrptAdmissionPatientListReportDialog *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CrptAdmissionPatientListReportDialog *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CrptAdmissionPatientListReportDialog *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CrptAdmissionPatientListReportDialog *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CrptAdmissionPatientListReportDialog *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CrptAdmissionPatientListReportDialog *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CrptAdmissionPatientListReportDialog *)pWnd)->OnToDateCheckValue();
} 
static void _OnExamRoomSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CrptAdmissionPatientListReportDialog* )pWnd)->OnExamRoomSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnExamRoomSelendokFnc(CWnd *pWnd){
	((CrptAdmissionPatientListReportDialog *)pWnd)->OnExamRoomSelendok();
}
/*static void _OnExamRoomSetfocusFnc(CWnd *pWnd){
	((CrptAdmissionPatientListReportDialog *)pWnd)->OnExamRoomKillfocus();
}*/
/*static void _OnExamRoomKillfocusFnc(CWnd *pWnd){
	((CrptAdmissionPatientListReportDialog *)pWnd)->OnExamRoomKillfocus();
}*/
static long _OnExamRoomLoadDataFnc(CWnd *pWnd){
	return ((CrptAdmissionPatientListReportDialog *)pWnd)->OnExamRoomLoadData();
}
/*static void _OnExamRoomAddNewFnc(CWnd *pWnd){
	((CrptAdmissionPatientListReportDialog *)pWnd)->OnExamRoomAddNew();
}*/
static void _OnDeptSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CrptAdmissionPatientListReportDialog* )pWnd)->OnDeptSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDeptSelendokFnc(CWnd *pWnd){
	((CrptAdmissionPatientListReportDialog *)pWnd)->OnDeptSelendok();
}
/*static void _OnDeptSetfocusFnc(CWnd *pWnd){
	((CrptAdmissionPatientListReportDialog *)pWnd)->OnDeptKillfocus();
}*/
/*static void _OnDeptKillfocusFnc(CWnd *pWnd){
	((CrptAdmissionPatientListReportDialog *)pWnd)->OnDeptKillfocus();
}*/
static long _OnDeptLoadDataFnc(CWnd *pWnd){
	return ((CrptAdmissionPatientListReportDialog *)pWnd)->OnDeptLoadData();
}
/*static void _OnDeptAddNewFnc(CWnd *pWnd){
	((CrptAdmissionPatientListReportDialog *)pWnd)->OnDeptAddNew();
}*/
static void _OnStatusSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CrptAdmissionPatientListReportDialog* )pWnd)->OnStatusSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStatusSelendokFnc(CWnd *pWnd){
	((CrptAdmissionPatientListReportDialog *)pWnd)->OnStatusSelendok();
}
/*static void _OnStatusSetfocusFnc(CWnd *pWnd){
	((CrptAdmissionPatientListReportDialog *)pWnd)->OnStatusKillfocus();
}*/
/*static void _OnStatusKillfocusFnc(CWnd *pWnd){
	((CrptAdmissionPatientListReportDialog *)pWnd)->OnStatusKillfocus();
}*/
static long _OnStatusLoadDataFnc(CWnd *pWnd){
	return ((CrptAdmissionPatientListReportDialog *)pWnd)->OnStatusLoadData();
}
/*static void _OnStatusAddNewFnc(CWnd *pWnd){
	((CrptAdmissionPatientListReportDialog *)pWnd)->OnStatusAddNew();
}*/
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	CrptAdmissionPatientListReportDialog *pVw = (CrptAdmissionPatientListReportDialog *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CrptAdmissionPatientListReportDialog *pVw = (CrptAdmissionPatientListReportDialog *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CrptAdmissionPatientListReportDialog *pVw = (CrptAdmissionPatientListReportDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddrptAdmissionPatientListReportDialogFnc(CWnd *pWnd){
	 return ((CrptAdmissionPatientListReportDialog*)pWnd)->OnAddrptAdmissionPatientListReportDialog();
} 
static int _OnEditrptAdmissionPatientListReportDialogFnc(CWnd *pWnd){
	 return ((CrptAdmissionPatientListReportDialog*)pWnd)->OnEditrptAdmissionPatientListReportDialog();
} 
static int _OnDeleterptAdmissionPatientListReportDialogFnc(CWnd *pWnd){
	 return ((CrptAdmissionPatientListReportDialog*)pWnd)->OnDeleterptAdmissionPatientListReportDialog();
} 
static int _OnSaverptAdmissionPatientListReportDialogFnc(CWnd *pWnd){
	 return ((CrptAdmissionPatientListReportDialog*)pWnd)->OnSaverptAdmissionPatientListReportDialog();
} 
static int _OnCancelrptAdmissionPatientListReportDialogFnc(CWnd *pWnd){
	 return ((CrptAdmissionPatientListReportDialog*)pWnd)->OnCancelrptAdmissionPatientListReportDialog();
} 
CrptAdmissionPatientListReportDialog::CrptAdmissionPatientListReportDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 350;
	m_nDlgHeight = 190;
	SetDefaultValues();
}
CrptAdmissionPatientListReportDialog::~CrptAdmissionPatientListReportDialog(){
}
void CrptAdmissionPatientListReportDialog::OnCreateComponents()
{
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 340, 150);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 85, 55);
	m_wndFromDate.Create(this,90, 30, 170, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 175, 30, 250, 55);
	m_wndToDate.Create(this,255, 30, 335, 55); 
	m_wndExamRoomLabel.Create(this, _T("Exam Room"), 10, 60, 85, 85);
	m_wndExamRoom.Create(this,90, 60, 335, 85); 
	m_wndDeptLabel.Create(this, _T("Dept"), 10, 90, 85, 115);
	m_wndDept.Create(this,90, 90, 335, 115); 
	m_wndStatusLabel.Create(this, _T("Status"), 10, 120, 85, 145);
	m_wndStatus.Create(this,90, 120, 335, 145); 
	m_wndPrintPreview.Create(this, _T("Print Pre&view"), 90, 155, 170, 180);
	m_wndPrint.Create(this, _T("&Print"), 175, 155, 255, 180);
	m_wndClose.Create(this, _T("&Close"), 260, 155, 340, 180);

}
void CrptAdmissionPatientListReportDialog::OnInitializeComponents()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	//m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	//m_wndToDate.SetCheckValue(true);
	m_wndExamRoom.SetCheckValue(true);
	m_wndExamRoom.LimitText(35);
	m_wndDept.SetCheckValue(true);
	m_wndDept.LimitText(81);
	m_wndStatus.SetCheckValue(true);
	m_wndStatus.LimitText(35);
	m_wndExamRoom.SetCheckBox(TRUE);
	m_wndDept.SetCheckBox(TRUE);

	m_wndExamRoom.InsertColumn(0, _T("ID"), CFMT_TEXT | CFMT_RIGHT, 50);
	m_wndExamRoom.InsertColumn(1, _T("Name"), CFMT_TEXT, 220);


	m_wndDept.InsertColumn(0, _T("ID"), CFMT_TEXT | CFMT_RIGHT, 100);
	m_wndDept.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);


	m_wndStatus.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndStatus.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);

}
void CrptAdmissionPatientListReportDialog::OnSetWindowEvents()
{
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndExamRoom.SetEvent(WE_SELENDOK, _OnExamRoomSelendokFnc);
	//m_wndExamRoom.SetEvent(WE_SETFOCUS, _OnExamRoomSetfocusFnc);
	//m_wndExamRoom.SetEvent(WE_KILLFOCUS, _OnExamRoomKillfocusFnc);
	m_wndExamRoom.SetEvent(WE_SELCHANGE, _OnExamRoomSelectChangeFnc);
	m_wndExamRoom.SetEvent(WE_LOADDATA, _OnExamRoomLoadDataFnc);
	//m_wndExamRoom.SetEvent(WE_ADDNEW, _OnExamRoomAddNewFnc);
	m_wndDept.SetEvent(WE_SELENDOK, _OnDeptSelendokFnc);
	//m_wndDept.SetEvent(WE_SETFOCUS, _OnDeptSetfocusFnc);
	//m_wndDept.SetEvent(WE_KILLFOCUS, _OnDeptKillfocusFnc);
	m_wndDept.SetEvent(WE_SELCHANGE, _OnDeptSelectChangeFnc);
	m_wndDept.SetEvent(WE_LOADDATA, _OnDeptLoadDataFnc);
	//m_wndDept.SetEvent(WE_ADDNEW, _OnDeptAddNewFnc);
	m_wndStatus.SetEvent(WE_SELENDOK, _OnStatusSelendokFnc);
	//m_wndStatus.SetEvent(WE_SETFOCUS, _OnStatusSetfocusFnc);
	//m_wndStatus.SetEvent(WE_KILLFOCUS, _OnStatusKillfocusFnc);
	m_wndStatus.SetEvent(WE_SELCHANGE, _OnStatusSelectChangeFnc);
	m_wndStatus.SetEvent(WE_LOADDATA, _OnStatusLoadDataFnc);
	//m_wndStatus.SetEvent(WE_ADDNEW, _OnStatusAddNewFnc);
	m_wndPrintPreview.SetEvent(WE_CLICK, _OnPrintPreviewSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_EDIT);
}
void CrptAdmissionPatientListReportDialog::OnDoDataExchange(CDataExchange* pDX)
{
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndExamRoom.GetDlgCtrlID(), m_szExamRoomKey);
	DDX_TextEx(pDX, m_wndDept.GetDlgCtrlID(), m_szDeptKey);
	DDX_TextEx(pDX, m_wndStatus.GetDlgCtrlID(), m_szStatusKey);

}
void CrptAdmissionPatientListReportDialog::GetDataToScreen()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CrptAdmissionPatientListReportDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CrptAdmissionPatientListReportDialog::SetDefaultValues()
{

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szExamRoomKey.Empty();
	m_szDeptKey.Empty();
	m_szStatusKey.Empty();

}
int CrptAdmissionPatientListReportDialog::SetMode(int nMode){
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
 			EnableButtons(TRUE, 0, 1, 2, -1);
			m_szFromDate = m_szToDate = pMF->GetSysDate();
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
/*void CrptAdmissionPatientListReportDialog::OnFromDateChange(){
	
} */
/*void CrptAdmissionPatientListReportDialog::OnFromDateSetfocus(){
	
} */
/*void CrptAdmissionPatientListReportDialog::OnFromDateKillfocus(){
	
} */
int CrptAdmissionPatientListReportDialog::OnFromDateCheckValue(){
	return 0;
} 
/*void CrptAdmissionPatientListReportDialog::OnToDateChange(){
	
} */
/*void CrptAdmissionPatientListReportDialog::OnToDateSetfocus(){
	
} */
/*void CrptAdmissionPatientListReportDialog::OnToDateKillfocus(){
	
} */
int CrptAdmissionPatientListReportDialog::OnToDateCheckValue(){
	return 0;
} 
void CrptAdmissionPatientListReportDialog::OnExamRoomSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CrptAdmissionPatientListReportDialog::OnExamRoomSelendok(){
	 
}
/*void CrptAdmissionPatientListReportDialog::OnExamRoomSetfocus(){
	
}*/
/*void CrptAdmissionPatientListReportDialog::OnExamRoomKillfocus(){
	
}*/
long CrptAdmissionPatientListReportDialog::OnExamRoomLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();
	if(m_wndExamRoom.IsSearchKey() && ToInt(m_szExamRoomKey) > 0)
	{
		szWhere.Format(_T(" AND hrl_id=%d "), ToInt(m_szExamRoomKey));
	}
	m_wndExamRoom.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT hrl_id AS id, hrl_name AS name FROM hms_roomlist ")\
		         _T("WHERE hrl_deptid IN('KB') %s ORDER BY hrl_id"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndExamRoom.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CrptAdmissionPatientListReportDialog::OnExamRoomAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CrptAdmissionPatientListReportDialog::OnDeptSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CrptAdmissionPatientListReportDialog::OnDeptSelendok(){
	 
}
/*void CrptAdmissionPatientListReportDialog::OnDeptSetfocus(){
	
}*/
/*void CrptAdmissionPatientListReportDialog::OnDeptKillfocus(){
	
}*/
long CrptAdmissionPatientListReportDialog::OnDeptLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();
	if(m_wndDept.IsSearchKey() && !m_szDeptKey.IsEmpty())
	{
		szWhere.Format(_T(" WHERE sd_id='%s' "), m_szDeptKey);
	}
	m_wndDept.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT sd_id AS id, sd_name AS name FROM sys_dept WHERE sd_type='DT' %s ORDER BY sd_id"),
		         szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDept.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CrptAdmissionPatientListReportDialog::OnDeptAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CrptAdmissionPatientListReportDialog::OnStatusSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CrptAdmissionPatientListReportDialog::OnStatusSelendok(){
	 
}
/*void CrptAdmissionPatientListReportDialog::OnStatusSetfocus(){
	
}*/
/*void CrptAdmissionPatientListReportDialog::OnStatusKillfocus(){
	
}*/
long CrptAdmissionPatientListReportDialog::OnStatusLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();
	if(m_wndStatus.IsSearchKey() && !m_szStatusKey.IsEmpty())
	{
	}
	m_wndStatus.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	CString szID[] = {_T("1"), _T("2")};
	CString szDesc[] = {_T("\x110\x61ng \x111\x1EE3i v\xE0o kho\x61"), _T("\x110i\x1EC1u tr\x1ECB n\x1ED9i tr\xFA")};
	for (int i = 0; i < sizeof(szID)/sizeof(szID[0]); i++)
	{ 
		m_wndStatus.AddItems(szID[i], szDesc[i], NULL);
	}
	return nCount;
}
/*void CrptAdmissionPatientListReportDialog::OnStatusAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CrptAdmissionPatientListReportDialog::OnPrintPreviewSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnPrint(true);
} 
void CrptAdmissionPatientListReportDialog::OnPrintSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnPrint();
} 
void CrptAdmissionPatientListReportDialog::OnCloseSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();
} 
int CrptAdmissionPatientListReportDialog::OnAddrptAdmissionPatientListReportDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CrptAdmissionPatientListReportDialog::OnEditrptAdmissionPatientListReportDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CrptAdmissionPatientListReportDialog::OnDeleterptAdmissionPatientListReportDialog(){
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
 		OnCancelrptAdmissionPatientListReportDialog(); 
 	}
	return 0;
}
int CrptAdmissionPatientListReportDialog::OnSaverptAdmissionPatientListReportDialog(){
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
 		//OnrptAdmissionPatientListReportDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CrptAdmissionPatientListReportDialog::OnCancelrptAdmissionPatientListReportDialog(){
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
int CrptAdmissionPatientListReportDialog::OnrptAdmissionPatientListReportDialogListLoadData(){
	return 0;
}
void CrptAdmissionPatientListReportDialog::OnPrint(bool bPreview)
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szDate, szSysDate, szTemp, tmpStr;
	CString szDept, szRoom, szStatus, szWhere;
	UpdateData(TRUE);

	CReport rpt;

	if (!rpt.Init(_T("Reports/HMS/HE_ADMISSIONPATIENTLIST.RPT")))
	{
		return;
	}

	BeginWaitCursor();

	szSysDate = pMF->GetSysDate();

	for (int i = 0; i < m_wndExamRoom.GetCount(); i++)
	{
		if (m_wndExamRoom.GetCheck(i))
		{
			if (!szRoom.IsEmpty())
				szRoom += _T(",");
			szRoom.AppendFormat(_T("%d"), ToInt(m_wndExamRoom.GetCheck(i, 0)));
		}
	}

	if (!szRoom.IsEmpty())
		szWhere.AppendFormat(_T(" AND he_roomid IN(%s) "), szRoom);

	for (int i = 0; i < m_wndDept.GetCount(); i++)
	{
		if (m_wndDept.GetCheck(i))
		{
			if (!szDept.IsEmpty())
				szDept += _T(",");
			szDept.AppendFormat(_T("'%s'"), m_wndDept.GetCheck(i, 0));
		}
	}

	if (!szDept.IsEmpty())
		szWhere.AppendFormat(_T(" AND hd_indept IN(%s) "), szDept);

	if (!m_szStatusKey.IsEmpty())
	{
		if (ToInt(m_szStatusKey) == 1)
			szStatus.Format(_T(" AND hcr_status IN('A') "));
		else
			szStatus.Format(_T(" AND hcr_status IN('I','T') "));
	}
	else
		szStatus.Format(_T(" AND hcr_status IN('A','I','T') "));

	if (!szStatus.IsEmpty())
		szWhere.AppendFormat(_T(" %s "), szStatus);

	szSQL.Format(_T(" SELECT date(hd_admitdate) as admitdate, ") \
				_T("             hd_docno as docno, ") \
				_T("             trim(hp_surname||' '||hp_midname||' '||hp_firstname) as patientname, ") \
				_T("             hms_getage(date(hd_admitdate), ") \
				_T("             hp_birthdate) as age, ") \
				_T("             sys_sel_getname('sys_sex', hp_sex) as sex, ") \
				_T("             hp_dtladdr||'-'||hms_getaddress(hp_provid, hp_distid, hp_villid) as dtladdr, ") \
				_T("             hd_diagnostic as diagnostic,  ") \
				_T("             hd_doctor as doctor,  ") \
				_T("             (select sd_name from sys_dept where sd_id=hd_indept) as deptid,  ") \
				_T("             hcr_recordno as recordno, he_roomid") \
				_T(" FROM hms_patient") \
				_T(" LEFT JOIN hms_doc ON(hp_patientno=hd_patientno) ") \
				_T(" LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno)") \
				_T(" LEFT JOIN hms_exam ON(he_docno=hd_docno and he_receptidx=hd_areceptidx)") \
				_T(" WHERE date(hd_enddate) BETWEEN date('%s') AND date('%s') AND hd_suggestion='A' and hd_status ='T' %s") \
				_T(" ORDER BY admitdate, docno, patientname"), m_szFromDate, m_szToDate, szWhere);

	_fmsg(_T("%s"), szSQL);
	rs.ExecSQL(szSQL);

	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), pMF->m_CompanyInfo.sc_pname);
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), pMF->m_CompanyInfo.sc_name);
	tmpStr = rpt.GetReportHeader()->GetValue(_T("ReportDate"));
	szDate.Format(tmpStr, CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy),CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), szDate);

	CReportSection* rptDetail = rpt.GetDetail();
	int nIndex = 1;
	while(!rs.IsEOF())
	{
		rptDetail = rpt.AddDetail();

		szTemp.Format(_T("%d"), nIndex);
		rptDetail->SetValue(_T("0"), szTemp);

		tmpStr = CDate::Convert(rs.GetValue(_T("admitdate")), yyyymmdd, ddmmyyyy);
		rptDetail->SetValue(_T("1"),  tmpStr);

		rs.GetValue(_T("docno"), tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);

		rs.GetValue(_T("patientname"), tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);

		rs.GetValue(_T("age"), tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);

		rs.GetValue(_T("sex"), tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);

		rs.GetValue(_T("dtladdr"), tmpStr);
		rptDetail->SetValue(_T("6"), tmpStr);

		rs.GetValue(_T("deptid"), tmpStr);
		rptDetail->SetValue(_T("7"), tmpStr);

		rs.GetValue(_T("diagnostic"), tmpStr);
		rptDetail->SetValue(_T("8"), tmpStr);

		tmpStr = pMF->GetDoctorName(rs.GetValue(_T("doctor")));
		rptDetail->SetValue(_T("9"), tmpStr);

		nIndex++;
		rs.MoveNext();
	}

	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), szSysDate.Right(2), szSysDate.Mid(5,2), szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);

	EndWaitCursor();
	if (bPreview)
		rpt.PrintPreview();
	else
		rpt.Print();
}