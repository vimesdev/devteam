#include "HMSRecordNoSetupDialog.h"
#include "MainFrm.h"

const CString m_szManual = _T("M");
const CString m_szAutoYN = _T("AYN");
const CString m_szAutoInc = _T("AIN");

static void _OnManualNumberSelectFnc(CWnd *pWnd){
	  ((CHMSRecordNoSetupDialog*)pWnd)->OnManualNumberSelect();
}
static void _OnAutoNumberSelectFnc(CWnd *pWnd){
	  ((CHMSRecordNoSetupDialog*)pWnd)->OnAutoNumberSelect();
}
static void _OnYearNumberSelectFnc(CWnd *pWnd){
	 ((CHMSRecordNoSetupDialog*)pWnd)->OnYearNumberSelect();
}
/*static void _OnYearNumberDescChangeFnc(CWnd *pWnd){
	((CHMSRecordNoSetupDialog *)pWnd)->OnYearNumberDescChange();
} */
/*static void _OnYearNumberDescSetfocusFnc(CWnd *pWnd){
	((CHMSRecordNoSetupDialog *)pWnd)->OnYearNumberDescSetfocus();} */ 
/*static void _OnYearNumberDescKillfocusFnc(CWnd *pWnd){
	((CHMSRecordNoSetupDialog *)pWnd)->OnYearNumberDescKillfocus();
} */
static int _OnYearNumberDescCheckValueFnc(CWnd *pWnd){
	return ((CHMSRecordNoSetupDialog *)pWnd)->OnYearNumberDescCheckValue();
} 
static void _OnIncNumberSelectFnc(CWnd *pWnd){
	 ((CHMSRecordNoSetupDialog*)pWnd)->OnIncNumberSelect();
}
/*static void _OnIncNumberDescChangeFnc(CWnd *pWnd){
	((CHMSRecordNoSetupDialog *)pWnd)->OnIncNumberDescChange();
} */
/*static void _OnIncNumberDescSetfocusFnc(CWnd *pWnd){
	((CHMSRecordNoSetupDialog *)pWnd)->OnIncNumberDescSetfocus();} */ 
/*static void _OnIncNumberDescKillfocusFnc(CWnd *pWnd){
	((CHMSRecordNoSetupDialog *)pWnd)->OnIncNumberDescKillfocus();
} */
static int _OnIncNumberDescCheckValueFnc(CWnd *pWnd){
	return ((CHMSRecordNoSetupDialog *)pWnd)->OnIncNumberDescCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSRecordNoSetupDialog *pVw = (CHMSRecordNoSetupDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSRecordNoSetupDialog *pVw = (CHMSRecordNoSetupDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddHMSRecordNoSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSRecordNoSetupDialog*)pWnd)->OnAddHMSRecordNoSetupDialog();
} 
static int _OnEditHMSRecordNoSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSRecordNoSetupDialog*)pWnd)->OnEditHMSRecordNoSetupDialog();
} 
static int _OnDeleteHMSRecordNoSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSRecordNoSetupDialog*)pWnd)->OnDeleteHMSRecordNoSetupDialog();
} 
static int _OnSaveHMSRecordNoSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSRecordNoSetupDialog*)pWnd)->OnSaveHMSRecordNoSetupDialog();
} 
static int _OnCancelHMSRecordNoSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSRecordNoSetupDialog*)pWnd)->OnCancelHMSRecordNoSetupDialog();
} 
CHMSRecordNoSetupDialog::CHMSRecordNoSetupDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 375;
	m_nDlgHeight = 285;
	SetDefaultValues();
}
CHMSRecordNoSetupDialog::~CHMSRecordNoSetupDialog()
{
}
void CHMSRecordNoSetupDialog::OnCreateComponents()
{
	m_wndArchivalNumberSetup.Create(this, _T("Archival Number Setup"), 5, 5, 365, 250);
	m_wndManualNumber.Create(this, _T("Manual Input"), 10, 30, 110, 55);
	m_wndAutoNumber.Create(this, _T("Auto Generate Archival Number"), 10, 60, 210, 85);
	m_wndYearNumber.Create(this, _T(""), 10, 90, 35, 115);
	m_wndYearNumberDesc.Create(this,10, 110, 360, 135); 
	m_wndYearNumberEx.Create(this, _T("Example: 11000001"), 10, 140, 125, 165);
	m_wndIncNumber.Create(this, _T(""), 10, 170, 35, 195);
	m_wndIncNumberDesc.Create(this,10, 190, 360, 215); 
	m_wndIncNumberEx.Create(this, _T("Example: 1, 2, 3,..."), 10, 220, 125, 245);
	m_wndSave.Create(this, _T("&Save"), 210, 255, 285, 280);
	m_wndCancel.Create(this, _T("&Close"), 290, 255, 365, 280);
}
void CHMSRecordNoSetupDialog::OnInitializeComponents()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndYearNumberDesc.SetLimitText(70);
	//m_wndYearNumberDesc.SetCheckValue(true);
	m_wndYearNumber.EnableWindow(FALSE);
	m_wndIncNumberDesc.SetLimitText(70);
	//m_wndIncNumberDesc.SetCheckValue(true);
	m_wndIncNumber.EnableWindow(FALSE);

	m_hms_patientrec_idTbl.SetTableName(_T("hms_patientrec_id"));
	m_hms_patientrec_idTbl.AddField(_T("hpi_idx"), dfLong);
	m_hms_patientrec_idTbl.AddField(_T("hpi_code"), dfText, 7);
	m_hms_patientrec_idTbl.AddField(_T("hpi_desc"), dfText, 81);
}
void CHMSRecordNoSetupDialog::OnSetWindowEvents()
{
	m_wndManualNumber.SetEvent(WE_CLICK, _OnManualNumberSelectFnc);
	m_wndAutoNumber.SetEvent(WE_CLICK, _OnAutoNumberSelectFnc);
	m_wndYearNumber.SetEvent(WE_CLICK, _OnYearNumberSelectFnc);
	//m_wndYearNumberDesc.SetEvent(WE_CHANGE, _OnYearNumberDescChangeFnc);
	//m_wndYearNumberDesc.SetEvent(WE_SETFOCUS, _OnYearNumberDescSetfocusFnc);
	//m_wndYearNumberDesc.SetEvent(WE_KILLFOCUS, _OnYearNumberDescKillfocusFnc);
	m_wndYearNumberDesc.SetEvent(WE_CHECKVALUE, _OnYearNumberDescCheckValueFnc);
	m_wndIncNumber.SetEvent(WE_CLICK, _OnIncNumberSelectFnc);
	//m_wndIncNumberDesc.SetEvent(WE_CHANGE, _OnIncNumberDescChangeFnc);
	//m_wndIncNumberDesc.SetEvent(WE_SETFOCUS, _OnIncNumberDescSetfocusFnc);
	//m_wndIncNumberDesc.SetEvent(WE_KILLFOCUS, _OnIncNumberDescKillfocusFnc);
	m_wndIncNumberDesc.SetEvent(WE_CHECKVALUE, _OnIncNumberDescCheckValueFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	m_szDesc.Empty();
	if (pMF->m_szIDCode.IsEmpty() || pMF->m_szIDCode.Trim().MakeUpper() == m_szManual)
	{
		m_nManualNumber = 0;
		m_nAutoNumber = 1;
	}
	else if (pMF->m_szIDCode.GetLength() > 1)
	{
		m_nManualNumber = 1;
		m_nAutoNumber = 0;
		if (pMF->m_szIDCode.Trim().MakeUpper() == m_szAutoYN)
		{
			m_bYearNumber = TRUE;
			m_wndYearNumber.EnableWindow(TRUE);
			m_wndIncNumber.EnableWindow(TRUE);
		}
		else if (pMF->m_szIDCode.Trim().MakeUpper() == m_szAutoInc)
		{
			m_bIncNumber = TRUE;
			m_wndYearNumber.EnableWindow(TRUE);
			m_wndIncNumber.EnableWindow(TRUE);
		}
	}
	GetDataToScreen();
}
void CHMSRecordNoSetupDialog::OnDoDataExchange(CDataExchange* pDX)
{
	DDX_Radio(pDX, m_wndManualNumber.GetDlgCtrlID(), m_nManualNumber);
	DDX_Radio(pDX, m_wndAutoNumber.GetDlgCtrlID(), m_nAutoNumber);
	DDX_Check(pDX, m_wndYearNumber.GetDlgCtrlID(), m_bYearNumber);
	DDX_Text(pDX, m_wndYearNumberDesc.GetDlgCtrlID(), m_szYearNumberDesc);
	DDX_Check(pDX, m_wndIncNumber.GetDlgCtrlID(), m_bIncNumber);
	DDX_Text(pDX, m_wndIncNumberDesc.GetDlgCtrlID(), m_szIncNumberDesc);
}
void CHMSRecordNoSetupDialog::GetDataToScreen()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT hpi_desc AS Description FROM hms_patientrec_id WHERE rownum =1"));
	rs.ExecSQL(szSQL);
	if (!rs.IsEOF())
	{
		rs.GetValue(_T("Description"), m_szDesc);
		SetMode(VM_EDIT);
	}
	else
		SetMode(VM_ADD);
}
void CHMSRecordNoSetupDialog::GetScreenToData()
{
	UpdateData(TRUE);
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if (m_nManualNumber == 0)
	{
		pMF->m_szIDCode = m_szManual;
	}
	else
	{
		if (m_bYearNumber == TRUE)
		{
			pMF->m_szIDCode = m_szAutoYN;
			m_szDesc = m_szYearNumberDesc;
		}
		else if (m_bIncNumber == TRUE)
		{
			pMF->m_szIDCode = m_szAutoInc;
			m_szDesc = m_szIncNumberDesc;
		}
	}
	m_hms_patientrec_idTbl.SetValue(_T("hpi_code"), pMF->m_szIDCode);
	m_hms_patientrec_idTbl.SetValue(_T("hpi_desc"), m_szDesc);
}
void CHMSRecordNoSetupDialog::SetDefaultValues()
{
	//m_nManualNumber=0;
	//m_nAutoNumber=1;
	//m_bYearNumber=FALSE;
	//m_szYearNumberDesc.Empty();
	//m_bIncNumber=FALSE;
	//m_szIncNumberDesc.Empty();
	CString szTemp;
	TranslateString(_T("2 digits(last two digits of the year) + 6 digits(auto increment)"), szTemp);
	m_szYearNumberDesc = szTemp;
	TranslateString(_T("Auto increment in order from 1 to n"), szTemp);
	m_szIncNumberDesc = szTemp;
}
int CHMSRecordNoSetupDialog::SetMode(int nMode)
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
			SetDefaultValues();
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
		m_wndYearNumberDesc.EnableWindow(FALSE);
		m_wndIncNumberDesc.EnableWindow(FALSE);
 		UpdateData(FALSE); 
 		return nOldMode; 
}
void CHMSRecordNoSetupDialog::OnManualNumberSelect()
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	m_nManualNumber=0;
	m_nAutoNumber=1;
	m_wndYearNumber.EnableWindow(FALSE);
	m_wndIncNumber.EnableWindow(FALSE);
	/*if (pMF->m_szIDCode.Trim().IsEmpty())
	{
		m_bYearNumber = FALSE;
		m_bIncNumber = FALSE;
		UpdateData(FALSE);
	}*/
}
void CHMSRecordNoSetupDialog::OnAutoNumberSelect()
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	m_nManualNumber=1;
	m_nAutoNumber=0;
	m_wndYearNumber.EnableWindow(TRUE);
	m_wndIncNumber.EnableWindow(TRUE);
}
void CHMSRecordNoSetupDialog::OnYearNumberSelect()
{
	UpdateData(TRUE);
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if (m_bIncNumber == TRUE)
	{
		m_bYearNumber = FALSE;
		UpdateData(FALSE);
	}
}
/*void CHMSRecordNoSetupDialog::OnYearNumberDescChange(){
	
} */
/*void CHMSRecordNoSetupDialog::OnYearNumberDescSetfocus(){
	
} */
/*void CHMSRecordNoSetupDialog::OnYearNumberDescKillfocus(){
	
} */
int CHMSRecordNoSetupDialog::OnYearNumberDescCheckValue()
{
	return 0;
}
void CHMSRecordNoSetupDialog::OnIncNumberSelect()
{
	UpdateData(TRUE);
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if (m_bYearNumber == TRUE)
	{
		m_bIncNumber = FALSE;
		UpdateData(FALSE);
	}
}
/*void CHMSRecordNoSetupDialog::OnIncNumberDescChange(){
	
} */
/*void CHMSRecordNoSetupDialog::OnIncNumberDescSetfocus(){
	
} */
/*void CHMSRecordNoSetupDialog::OnIncNumberDescKillfocus(){
	
} */
int CHMSRecordNoSetupDialog::OnIncNumberDescCheckValue(){
	return 0;
} 
void CHMSRecordNoSetupDialog::OnSaveSelect()
{
	UpdateData(TRUE);
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if (m_nAutoNumber == 0)
	{
		if (m_bYearNumber + m_bIncNumber == 0)
		{
			ShowMessageBox(_T("You must select archival number type"), MB_OK || MB_ICONERROR);
			return;
		}
	}
	OnSaveHMSRecordNoSetupDialog();
} 
void CHMSRecordNoSetupDialog::OnCancelSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();
} 
int CHMSRecordNoSetupDialog::OnAddHMSRecordNoSetupDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSRecordNoSetupDialog::OnEditHMSRecordNoSetupDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSRecordNoSetupDialog::OnDeleteHMSRecordNoSetupDialog(){
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
 		OnCancelHMSRecordNoSetupDialog(); 
 	}
	return 0;
}
int CHMSRecordNoSetupDialog::OnSaveHMSRecordNoSetupDialog()
{
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD)
	{ 
		szSQL = m_hms_patientrec_idTbl.GetInsertSQL(_T("hpi_idx")); 
 	} 
 	else if(GetMode() == VM_EDIT)
	{ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE 1=1 ")); 
		szSQL = m_hms_patientrec_idTbl.GetUpdateSQL(_T("hpi_idx")); 
 		szSQL += szWhere; 
 	} 
	_fmsg(_T("%s"), szSQL);
	//MessageBox(szSQL);
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		//OnHMSRecordNoSetupDialogListLoadData(); 
 		//SetMode(VM_VIEW);
		OnCancel();
 	} 
 	else 
 	{ 
		ShowMessageBox(_T("Error while updating data!"), MB_OK || MB_ICONERROR);
 	} 
 	return ret; 
 	//return 0; 
}
int CHMSRecordNoSetupDialog::OnCancelHMSRecordNoSetupDialog(){
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
int CHMSRecordNoSetupDialog::OnHMSRecordNoSetupDialogListLoadData(){
	return 0;
}
