#include "UpdateZoneInfor.h"
#include "MainFrm.h"
/*static void _OnDocumentNoChangeFnc(CWnd *pWnd){
	((CUpdateZoneInfor *)pWnd)->OnDocumentNoChange();
} */
/*static void _OnDocumentNoSetfocusFnc(CWnd *pWnd){
	((CUpdateZoneInfor *)pWnd)->OnDocumentNoSetfocus();} */ 
/*static void _OnDocumentNoKillfocusFnc(CWnd *pWnd){
	((CUpdateZoneInfor *)pWnd)->OnDocumentNoKillfocus();
} */
static int _OnDocumentNoCheckValueFnc(CWnd *pWnd){
	return ((CUpdateZoneInfor *)pWnd)->OnDocumentNoCheckValue();
} 
/*static void _OnPatientNameChangeFnc(CWnd *pWnd){
	((CUpdateZoneInfor *)pWnd)->OnPatientNameChange();
} */
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CUpdateZoneInfor *)pWnd)->OnPatientNameSetfocus();} */ 
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((CUpdateZoneInfor *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((CUpdateZoneInfor *)pWnd)->OnPatientNameCheckValue();
} 
/*static void _OnOrderIDChangeFnc(CWnd *pWnd){
	((CUpdateZoneInfor *)pWnd)->OnOrderIDChange();
} */
/*static void _OnOrderIDSetfocusFnc(CWnd *pWnd){
	((CUpdateZoneInfor *)pWnd)->OnOrderIDSetfocus();} */ 
/*static void _OnOrderIDKillfocusFnc(CWnd *pWnd){
	((CUpdateZoneInfor *)pWnd)->OnOrderIDKillfocus();
} */
static int _OnOrderIDCheckValueFnc(CWnd *pWnd){
	return ((CUpdateZoneInfor *)pWnd)->OnOrderIDCheckValue();
} 
/*static void _OnPerformDateChangeFnc(CWnd *pWnd){
	((CUpdateZoneInfor *)pWnd)->OnPerformDateChange();
} */
/*static void _OnPerformDateSetfocusFnc(CWnd *pWnd){
	((CUpdateZoneInfor *)pWnd)->OnPerformDateSetfocus();} */ 
/*static void _OnPerformDateKillfocusFnc(CWnd *pWnd){
	((CUpdateZoneInfor *)pWnd)->OnPerformDateKillfocus();
} */
static int _OnPerformDateCheckValueFnc(CWnd *pWnd){
	return ((CUpdateZoneInfor *)pWnd)->OnPerformDateCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CUpdateZoneInfor *pVw = (CUpdateZoneInfor *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CUpdateZoneInfor *pVw = (CUpdateZoneInfor *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddUpdateZoneInforFnc(CWnd *pWnd){
	 return ((CUpdateZoneInfor*)pWnd)->OnAddUpdateZoneInfor();
} 
static int _OnEditUpdateZoneInforFnc(CWnd *pWnd){
	 return ((CUpdateZoneInfor*)pWnd)->OnEditUpdateZoneInfor();
} 
static int _OnDeleteUpdateZoneInforFnc(CWnd *pWnd){
	 return ((CUpdateZoneInfor*)pWnd)->OnDeleteUpdateZoneInfor();
} 
static int _OnSaveUpdateZoneInforFnc(CWnd *pWnd){
	 return ((CUpdateZoneInfor*)pWnd)->OnSaveUpdateZoneInfor();
} 
static int _OnCancelUpdateZoneInforFnc(CWnd *pWnd){
	 return ((CUpdateZoneInfor*)pWnd)->OnCancelUpdateZoneInfor();
}

static void _OnUpdatetosSelectFnc(CWnd *pWnd)
{
	 ((CUpdateZoneInfor*)pWnd)->OnUpdatetosSelect();
}
static void _OnUpdatetotycSelectFnc(CWnd *pWnd)
{
	 ((CUpdateZoneInfor*)pWnd)->OnUpdatetotycSelect();
}

static long _OnNewZoneLoadDataFnc(CWnd *pWnd)
{
	return ((CUpdateZoneInfor *)pWnd)->OnNewZoneLoadData();
}

CUpdateZoneInfor::CUpdateZoneInfor(CWnd *pParent):
	CGuiDialog(pParent)
{
	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CUpdateZoneInfor::~CUpdateZoneInfor(){
}
void CUpdateZoneInfor::OnCreateComponents()
{
	m_wndDocumentNoLabel.Create(this, _T("Document No"), 10, 30, 105, 55);
	m_wndDocumentNo.Create(this,110, 30, 210, 55); 
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 215, 30, 315, 55);
	m_wndPatientInformation.Create(this, _T("Thông tin bệnh nhân"), 5, 5, 599, 91);
	m_wndPatientName.Create(this,320, 30, 595, 55); 
	m_wndNewZoneLabel.Create(this, _T("Phân khu"), 10, 60, 105, 85);
	m_wndNewZone.Create(this,110, 60, 595, 85); 
	m_wndSave.Create(this, _T("&Save"), 431, 92, 511, 117);
	m_wndCancel.Create(this, _T("&Close"), 516, 92, 596, 117);
}
void CUpdateZoneInfor::OnInitializeComponents()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndDocumentNo.SetLimitText(1024);
	m_wndDocumentNo.SetCheckValue(true);
	m_wndPatientName.SetLimitText(1024);
	m_wndPatientName.SetCheckValue(true);

	m_wndDocumentNo.SetReadOnly(TRUE);
	m_wndPatientName.SetReadOnly(TRUE);
	
	m_wndNewZone.InsertColumn(0, _T("ID"), CFMT_TEXT, 90);
	m_wndNewZone.InsertColumn(1, _T("Name"), CFMT_TEXT, 450);

}
void CUpdateZoneInfor::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndDocumentNo.SetEvent(WE_CHANGE, _OnDocumentNoChangeFnc);
	//m_wndDocumentNo.SetEvent(WE_SETFOCUS, _OnDocumentNoSetfocusFnc);
	//m_wndDocumentNo.SetEvent(WE_KILLFOCUS, _OnDocumentNoKillfocusFnc);
	m_wndDocumentNo.SetEvent(WE_CHECKVALUE, _OnDocumentNoCheckValueFnc);
	//m_wndPatientName.SetEvent(WE_CHANGE, _OnPatientNameChangeFnc);
	//m_wndPatientName.SetEvent(WE_SETFOCUS, _OnPatientNameSetfocusFnc);
	//m_wndPatientName.SetEvent(WE_KILLFOCUS, _OnPatientNameKillfocusFnc);
	m_wndPatientName.SetEvent(WE_CHECKVALUE, _OnPatientNameCheckValueFnc);
	//m_wndOrderID.SetEvent(WE_CHANGE, _OnOrderIDChangeFnc);
	//m_wndOrderID.SetEvent(WE_SETFOCUS, _OnOrderIDSetfocusFnc);
	//m_wndOrderID.SetEvent(WE_KILLFOCUS, _OnOrderIDKillfocusFnc);
	m_wndOrderID.SetEvent(WE_CHECKVALUE, _OnOrderIDCheckValueFnc);
	//m_wndPerformDate.SetEvent(WE_CHANGE, _OnPerformDateChangeFnc);
	//m_wndPerformDate.SetEvent(WE_SETFOCUS, _OnPerformDateSetfocusFnc);
	//m_wndPerformDate.SetEvent(WE_KILLFOCUS, _OnPerformDateKillfocusFnc);
	m_wndPerformDate.SetEvent(WE_CHECKVALUE, _OnPerformDateCheckValueFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndUpdatetos.SetEvent(WE_CLICK, _OnUpdatetosSelectFnc);
	m_wndUpdatetotyc.SetEvent(WE_CLICK, _OnUpdatetotycSelectFnc);
	m_wndNewZone.SetEvent(WE_LOADDATA, _OnNewZoneLoadDataFnc);
	GetDataToScreen();
	SetMode(VM_EDIT);
}
void CUpdateZoneInfor::OnDoDataExchange(CDataExchange* pDX)
{
	DDX_Text(pDX, m_wndDocumentNo.GetDlgCtrlID(), m_nDocumentNo);
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);
	DDX_TextEx(pDX, m_wndNewZone.GetDlgCtrlID(), m_szNewZoneKey);
}
void CUpdateZoneInfor::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("DocumentNo")] =  m_nDocumentNo;
	m_jData[_T("PatientName")] =  m_szPatientName;	
	}
	else
	{
			
	m_jData[_T("DocumentNo")].GetValue(m_nDocumentNo);
	m_jData[_T("PatientName")].GetValue(m_szPatientName);	
	}

}
void CUpdateZoneInfor::GetDataToScreen()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;

	szSQL.Format(_T(" SELECT") \
	_T(" hd_docno AS docno,") \
	_T(" get_patientname(hd_docno) AS patientname, ") \
	_T(" hd_zonename AS zonename ") \
	_T(" FROM hms_doc ") \
	_T(" WHERE 1=1 ") \
	_T(" and hd_docno=%ld"), m_nDocumentNo);
	
	rs.ExecSQL(szSQL);
	
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("docno"), m_nDocumentNo);
		rs.GetValue(_T("patientname"), m_szPatientName);
		rs.GetValue(_T("zonename"), m_szNewZoneKey);					
	}

}
void CUpdateZoneInfor::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CUpdateZoneInfor::SetDefaultValues(){

	m_nDocumentNo=0;
	m_szPatientName.Empty();	

}
int CUpdateZoneInfor::SetMode(int nMode){
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
 			EnableButtons(TRUE, 0, 1, -1);
 			SetDefaultValues();
 			break;
 		};
		
 		UpdateData(FALSE);
 		return nOldMode;
}
/*void CUpdateZoneInfor::OnDocumentNoChange(){
	
} */
/*void CUpdateZoneInfor::OnDocumentNoSetfocus(){
	
} */
/*void CUpdateZoneInfor::OnDocumentNoKillfocus(){
	
} */
int CUpdateZoneInfor::OnDocumentNoCheckValue(){
	return 0;
} 
/*void CUpdateZoneInfor::OnPatientNameChange(){
	
} */
/*void CUpdateZoneInfor::OnPatientNameSetfocus(){
	
} */
/*void CUpdateZoneInfor::OnPatientNameKillfocus(){
	
} */
int CUpdateZoneInfor::OnPatientNameCheckValue(){
	return 0;
} 
/*void CUpdateZoneInfor::OnOrderIDChange(){
	
} */
/*void CUpdateZoneInfor::OnOrderIDSetfocus(){
	
} */
/*void CUpdateZoneInfor::OnOrderIDKillfocus(){
	
} */
int CUpdateZoneInfor::OnOrderIDCheckValue(){
	return 0;
} 
/*void CUpdateZoneInfor::OnPerformDateChange(){
	
} */
/*void CUpdateZoneInfor::OnPerformDateSetfocus(){
	
} */
/*void CUpdateZoneInfor::OnPerformDateKillfocus(){
	
} */
int CUpdateZoneInfor::OnPerformDateCheckValue(){
	return 0;
} 
void CUpdateZoneInfor::OnSaveSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveUpdateZoneInfor();
} 
void CUpdateZoneInfor::OnCancelSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();
	
} 
int CUpdateZoneInfor::OnAddUpdateZoneInfor()
{
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CUpdateZoneInfor::OnEditUpdateZoneInfor(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CUpdateZoneInfor::OnDeleteUpdateZoneInfor(){
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
 		OnCancelUpdateZoneInfor();
 	}
	return 0;
}
int CUpdateZoneInfor::OnSaveUpdateZoneInfor()
{
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
	UpdateData(false);
 	CString szSQL;
	
	int ret = 10;
	szSQL.Format(_T("UpdateZoneInfor(%ld, '%s', '%s') "), m_nDocumentNo, m_szNewZoneKey, pMF->GetCurrentUser());
	ret = str2long(pMF->ExecDML(szSQL));	

	if (ret <0)
	{
		ShowMessageBox(_T("Bệnh nhân đã được kết thúc và thanh toán, không thực hiện được!"),MB_ICONERROR);
		m_wndCancel.SetFocus();
		return -1;
	}
	else	
	OnOK();
 	return 0;
}
int CUpdateZoneInfor::OnCancelUpdateZoneInfor(){
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
int CUpdateZoneInfor::OnUpdateZoneInforListLoadData(){
	return 0;
}
void CUpdateZoneInfor::OnUpdatetosSelect()
{
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();	
}
void CUpdateZoneInfor::OnUpdatetotycSelect()
{
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();	
}

long CUpdateZoneInfor::OnNewZoneLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;

	if(m_wndNewZone.IsSearchKey() && !m_szNewZoneKey.IsEmpty())
	{
		szWhere.Format(_T(" and ss_code='%s' "), m_szNewZoneKey);
	};
	m_wndNewZone.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name, ss_vndesc as khoa FROM sys_sel WHERE ss_id='HMS_TREAT_ZONE' and ss_vndesc = '%s' %s ORDER BY ss_code "), pMF->m_szDept,szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF())
	{ 
		m_wndNewZone.AddItems
			(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")),
			rs.GetValue(_T("khoa")), NULL);
		rs.MoveNext();
	}
	return nCount;
}