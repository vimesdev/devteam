#include "FAMSRDeprCaculation.h"
#include "MainFrm.h"
static void _OnStraightLineSelectFnc(CWnd *pWnd){
	  ((CFAMSRDeprCaculation*)pWnd)->OnStraightLineSelect();
}
static void _OnReducingSelectFnc(CWnd *pWnd){
	  ((CFAMSRDeprCaculation*)pWnd)->OnReducingSelect();
}
/*static void _OnExDateChangeFnc(CWnd *pWnd){
	((CFAMSRDeprCaculation *)pWnd)->OnExDateChange();
} */
/*static void _OnExDateSetfocusFnc(CWnd *pWnd){
	((CFAMSRDeprCaculation *)pWnd)->OnExDateSetfocus();} */ 
/*static void _OnExDateKillfocusFnc(CWnd *pWnd){
	((CFAMSRDeprCaculation *)pWnd)->OnExDateKillfocus();
} */
static int _OnExDateCheckValueFnc(CWnd *pWnd){
	return ((CFAMSRDeprCaculation *)pWnd)->OnExDateCheckValue();
} 
/*static void _OnStartDateChangeFnc(CWnd *pWnd){
	((CFAMSRDeprCaculation *)pWnd)->OnStartDateChange();
} */
/*static void _OnStartDateSetfocusFnc(CWnd *pWnd){
	((CFAMSRDeprCaculation *)pWnd)->OnStartDateSetfocus();} */ 
/*static void _OnStartDateKillfocusFnc(CWnd *pWnd){
	((CFAMSRDeprCaculation *)pWnd)->OnStartDateKillfocus();
} */
static int _OnStartDateCheckValueFnc(CWnd *pWnd){
	return ((CFAMSRDeprCaculation *)pWnd)->OnStartDateCheckValue();
} 
/*static void _OnCompDateChangeFnc(CWnd *pWnd){
	((CFAMSRDeprCaculation *)pWnd)->OnCompDateChange();
} */
/*static void _OnCompDateSetfocusFnc(CWnd *pWnd){
	((CFAMSRDeprCaculation *)pWnd)->OnCompDateSetfocus();} */ 
/*static void _OnCompDateKillfocusFnc(CWnd *pWnd){
	((CFAMSRDeprCaculation *)pWnd)->OnCompDateKillfocus();
} */
static int _OnCompDateCheckValueFnc(CWnd *pWnd){
	return ((CFAMSRDeprCaculation *)pWnd)->OnCompDateCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CFAMSRDeprCaculation *pVw = (CFAMSRDeprCaculation *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CFAMSRDeprCaculation *pVw = (CFAMSRDeprCaculation *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddFAMSRDeprCaculationFnc(CWnd *pWnd){
	 return ((CFAMSRDeprCaculation*)pWnd)->OnAddFAMSRDeprCaculation();
} 
static int _OnEditFAMSRDeprCaculationFnc(CWnd *pWnd){
	 return ((CFAMSRDeprCaculation*)pWnd)->OnEditFAMSRDeprCaculation();
} 
static int _OnDeleteFAMSRDeprCaculationFnc(CWnd *pWnd){
	 return ((CFAMSRDeprCaculation*)pWnd)->OnDeleteFAMSRDeprCaculation();
} 
static int _OnSaveFAMSRDeprCaculationFnc(CWnd *pWnd){
	 return ((CFAMSRDeprCaculation*)pWnd)->OnSaveFAMSRDeprCaculation();
} 
static int _OnCancelFAMSRDeprCaculationFnc(CWnd *pWnd){
	 return ((CFAMSRDeprCaculation*)pWnd)->OnCancelFAMSRDeprCaculation();
} 
CFAMSRDeprCaculation::CFAMSRDeprCaculation(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 645;
	m_nDlgHeight = 485;
	SetDefaultValues();
}
CFAMSRDeprCaculation::~CFAMSRDeprCaculation(){
}
void CFAMSRDeprCaculation::OnCreateComponents()
{
	m_wndMethod.Create(this, _T("Method"), 5, 5, 240, 60);
	m_wndCompDepr.Create(this, _T("Compute Depreciation"), 5, 65, 240, 210);
	m_wndStraightLine.Create(this, _T("Straight Line"), 10, 30, 105, 55);
	m_wndReducing.Create(this, _T("Reducing Balance"), 110, 30, 235, 55);
	m_wndStartDateLabel.Create(this, _T("Start of Depr"), 20, 90, 125, 115);
	m_wndStartDate.Create(this,130, 90, 225, 115); 
	m_wndExpiryDateLabel.Create(this, _T("End of Depr"), 20, 120, 125, 145);
	m_wndExDate.Create(this,130, 120, 225, 145); 
	m_wndCompDateLabel.Create(this, _T("Compute Depr Up To"), 20, 150, 125, 175);
	m_wndCompDate.Create(this,130, 150, 225, 175); 
	m_wndSave.Create(this, _T("&Save"), 60, 180, 140, 205);
	m_wndCancel.Create(this, _T("&Cancel"), 145, 180, 225, 205);

}
void CFAMSRDeprCaculation::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	//m_wndExDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndExDate.SetCheckValue(true);
	//m_wndStartDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndStartDate.SetCheckValue(true);
	//m_wndCompDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndCompDate.SetCheckValue(true);
	SetWindowTitle(_T("Compute Depreciation"));
}
void CFAMSRDeprCaculation::OnSetWindowEvents(){
	m_wndStraightLine.SetEvent(WE_CLICK, _OnStraightLineSelectFnc);
	m_wndReducing.SetEvent(WE_CLICK, _OnReducingSelectFnc);
	//m_wndExDate.SetEvent(WE_CHANGE, _OnExDateChangeFnc);
	//m_wndExDate.SetEvent(WE_SETFOCUS, _OnExDateSetfocusFnc);
	//m_wndExDate.SetEvent(WE_KILLFOCUS, _OnExDateKillfocusFnc);
	m_wndExDate.SetEvent(WE_CHECKVALUE, _OnExDateCheckValueFnc);
	//m_wndStartDate.SetEvent(WE_CHANGE, _OnStartDateChangeFnc);
	//m_wndStartDate.SetEvent(WE_SETFOCUS, _OnStartDateSetfocusFnc);
	//m_wndStartDate.SetEvent(WE_KILLFOCUS, _OnStartDateKillfocusFnc);
	m_wndStartDate.SetEvent(WE_CHECKVALUE, _OnStartDateCheckValueFnc);
	//m_wndCompDate.SetEvent(WE_CHANGE, _OnCompDateChangeFnc);
	//m_wndCompDate.SetEvent(WE_SETFOCUS, _OnCompDateSetfocusFnc);
	//m_wndCompDate.SetEvent(WE_KILLFOCUS, _OnCompDateKillfocusFnc);
	m_wndCompDate.SetEvent(WE_CHECKVALUE, _OnCompDateCheckValueFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	SetMode(GetMode());
	if (m_szDeprMethod == _T("S"))
	{
		m_wndStraightLine.SetCheck(1);
		m_wndReducing.SetCheck(0);
	}
	else
	{
		m_wndStraightLine.SetCheck(0);
		m_wndReducing.SetCheck(1);
	}
	OnFormLoad();
}
void CFAMSRDeprCaculation::OnDoDataExchange(CDataExchange* pDX){
	DDX_Radio(pDX, m_wndStraightLine.GetDlgCtrlID(), m_nStraightLine);
	DDX_Radio(pDX, m_wndReducing.GetDlgCtrlID(), m_nReducing);
	DDX_TextEx(pDX, m_wndExDate.GetDlgCtrlID(), m_szExDate);
	DDX_TextEx(pDX, m_wndStartDate.GetDlgCtrlID(), m_szStartDate);
	DDX_TextEx(pDX, m_wndCompDate.GetDlgCtrlID(), m_szCompDate);

}
void CFAMSRDeprCaculation::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CFAMSRDeprCaculation::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CFAMSRDeprCaculation::SetDefaultValues(){

	m_nStraightLine=0;
	m_nReducing=0;
	m_szExDate.Empty();
	m_szStartDate.Empty();
	m_szCompDate.Empty();

}
int CFAMSRDeprCaculation::SetMode(int nMode)
{
 		int nOldMode = GetMode(); 
 		CGuiDialog::SetMode(nMode); 
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
  		switch(nMode)
		{ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 1, -1); 
 			SetDefaultValues();
			m_wndStraightLine.EnableWindow(FALSE);
			m_wndReducing.EnableWindow(FALSE);
			m_wndExDate.SetReadOnly(TRUE);
			m_wndStartDate.SetReadOnly(TRUE);
			m_wndCompDate.SetReadOnly(TRUE);
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 1, -1); 
 			break; 
 		case VM_VIEW: 
 			EnableControls(FALSE); 
 			EnableButtons(FALSE, 0, 1, -1); 
 			break; 
 		case VM_NONE: 
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 0, 1, -1); 
 			SetDefaultValues(); 
 			break; 
 		}; 
 		UpdateData(FALSE); 
 		return nOldMode; 
}
void CFAMSRDeprCaculation::OnStraightLineSelect(){
	
}
void CFAMSRDeprCaculation::OnReducingSelect(){
	
}
/*void CFAMSRDeprCaculation::OnExDateChange(){
	
} */
/*void CFAMSRDeprCaculation::OnExDateSetfocus(){
	
} */
/*void CFAMSRDeprCaculation::OnExDateKillfocus(){
	
} */
int CFAMSRDeprCaculation::OnExDateCheckValue(){
	return 0;
} 
/*void CFAMSRDeprCaculation::OnStartDateChange(){
	
} */
/*void CFAMSRDeprCaculation::OnStartDateSetfocus(){
	
} */
/*void CFAMSRDeprCaculation::OnStartDateKillfocus(){
	
} */
int CFAMSRDeprCaculation::OnStartDateCheckValue(){
	return 0;
} 
/*void CFAMSRDeprCaculation::OnCompDateChange(){
	
} */
/*void CFAMSRDeprCaculation::OnCompDateSetfocus(){
	
} */
/*void CFAMSRDeprCaculation::OnCompDateKillfocus(){
	
} */
int CFAMSRDeprCaculation::OnCompDateCheckValue(){
	return 0;
} 
void CFAMSRDeprCaculation::OnSaveSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL;
	szSQL.Format(_T("fam_depreciation_redline('%s', %d, '%s', '%s')"), 
		pMF->m_szAssetNo, pMF->m_nDeprTerm, pMF->GetCurrentUser(), m_szDeprMethod);
	CString ret = pMF->ExecDML(szSQL);
	if (!ret.IsEmpty())
	{
		if (pMF->m_szDeprMethod == _T("S"))
			pMF->m_szDeprUnit = _T("MSA");
		else
			pMF->m_szDeprUnit = _T("MRA");
		CGuiDialog::OnOK();
	}
	else
		ShowMessageBox(_T("Failed to execute function"), MB_OK | MB_ICONERROR);
} 
void CFAMSRDeprCaculation::OnCancelSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CFAMSRDeprCaculation::OnAddFAMSRDeprCaculation(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CFAMSRDeprCaculation::OnEditFAMSRDeprCaculation(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CFAMSRDeprCaculation::OnDeleteFAMSRDeprCaculation(){
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
 		OnCancelFAMSRDeprCaculation(); 
 	}
	return 0;
}
int CFAMSRDeprCaculation::OnSaveFAMSRDeprCaculation(){
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
 		//OnFAMSRDeprCaculationListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CFAMSRDeprCaculation::OnCancelFAMSRDeprCaculation(){
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
int CFAMSRDeprCaculation::OnFAMSRDeprCaculationListLoadData(){
	return 0;
}

void CFAMSRDeprCaculation::OnFormLoad()
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szDate;
	//szSQL.Format(_T("SELECT date('%s') + interval '%d year'"), pMF->m_szInService, pMF->m_nDeprTerm / 12);
	//szSQL.Format(_T("SELECT timestamp'%s' + interval '%d' year from dual"), pMF->m_szInService, pMF->m_nDeprTerm / 12);
	szSQL.Format(_T("SELECT TO_TIMESTAMP('%s','YYYY-MM-DD HH24:MI:SS') + interval '%d' year from dual"), pMF->m_szInService, pMF->m_nDeprTerm / 12);
	rs.ExecSQL(szSQL);
	CDate dt(rs.GetStringValue());
	szDate.Format(_T("%.2d/%.2d/%.4d"), dt.GetDay(), dt.GetMonth(), dt.GetYear());
	m_wndExDate.SetData(szDate);
	m_wndCompDate.SetData(szDate);
	//szSQL.Format(_T("SELECT date('%s') + interval '1 month'"), pMF->m_szInService);
	//rs.ExecSQL(szSQL);
	dt.ParseDate(pMF->m_szInService);
	szDate.Format(_T("%.2d/%.2d/%.4d"), dt.GetDay(), dt.GetMonth(), dt.GetYear());
	m_wndStartDate.SetData(szDate);
}