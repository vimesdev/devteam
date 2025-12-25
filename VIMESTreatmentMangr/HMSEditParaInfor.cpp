#include "HMSEditParaInfor.h"
#include "HMSMainFrame.h"
/*static void _OnDocumentNoChangeFnc(CWnd *pWnd){
	((CHMSEditParaInfor *)pWnd)->OnDocumentNoChange();
} */
/*static void _OnDocumentNoSetfocusFnc(CWnd *pWnd){
	((CHMSEditParaInfor *)pWnd)->OnDocumentNoSetfocus();} */ 
/*static void _OnDocumentNoKillfocusFnc(CWnd *pWnd){
	((CHMSEditParaInfor *)pWnd)->OnDocumentNoKillfocus();
} */
static int _OnDocumentNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSEditParaInfor *)pWnd)->OnDocumentNoCheckValue();
} 
/*static void _OnPatientNameChangeFnc(CWnd *pWnd){
	((CHMSEditParaInfor *)pWnd)->OnPatientNameChange();
} */
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CHMSEditParaInfor *)pWnd)->OnPatientNameSetfocus();} */ 
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((CHMSEditParaInfor *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSEditParaInfor *)pWnd)->OnPatientNameCheckValue();
} 
/*static void _OnOrderIDChangeFnc(CWnd *pWnd){
	((CHMSEditParaInfor *)pWnd)->OnOrderIDChange();
} */
/*static void _OnOrderIDSetfocusFnc(CWnd *pWnd){
	((CHMSEditParaInfor *)pWnd)->OnOrderIDSetfocus();} */ 
/*static void _OnOrderIDKillfocusFnc(CWnd *pWnd){
	((CHMSEditParaInfor *)pWnd)->OnOrderIDKillfocus();
} */
static int _OnOrderIDCheckValueFnc(CWnd *pWnd){
	return ((CHMSEditParaInfor *)pWnd)->OnOrderIDCheckValue();
} 
/*static void _OnPerformDateChangeFnc(CWnd *pWnd){
	((CHMSEditParaInfor *)pWnd)->OnPerformDateChange();
} */
/*static void _OnPerformDateSetfocusFnc(CWnd *pWnd){
	((CHMSEditParaInfor *)pWnd)->OnPerformDateSetfocus();} */ 
/*static void _OnPerformDateKillfocusFnc(CWnd *pWnd){
	((CHMSEditParaInfor *)pWnd)->OnPerformDateKillfocus();
} */
static int _OnPerformDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSEditParaInfor *)pWnd)->OnPerformDateCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSEditParaInfor *pVw = (CHMSEditParaInfor *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSEditParaInfor *pVw = (CHMSEditParaInfor *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddEditParaInforFnc(CWnd *pWnd){
	 return ((CHMSEditParaInfor*)pWnd)->OnAddEditParaInfor();
} 
static int _OnEditEditParaInforFnc(CWnd *pWnd){
	 return ((CHMSEditParaInfor*)pWnd)->OnEditEditParaInfor();
} 
static int _OnDeleteEditParaInforFnc(CWnd *pWnd){
	 return ((CHMSEditParaInfor*)pWnd)->OnDeleteEditParaInfor();
} 
static int _OnSaveEditParaInforFnc(CWnd *pWnd){
	 return ((CHMSEditParaInfor*)pWnd)->OnSaveEditParaInfor();
} 
static int _OnCancelEditParaInforFnc(CWnd *pWnd){
	 return ((CHMSEditParaInfor*)pWnd)->OnCancelEditParaInfor();
}
static int _OnFromDateCheckValueFnc(CWnd *pWnd)
{
	return ((CHMSEditParaInfor *)pWnd)->OnFromDateCheckValue();
}

static int _OnToDateCheckValueFnc(CWnd *pWnd)
{
	return ((CHMSEditParaInfor *)pWnd)->OnToDateCheckValue();
} 

CHMSEditParaInfor::CHMSEditParaInfor(CWnd *pParent):
	CGuiDialog(pParent)
{
	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CHMSEditParaInfor::~CHMSEditParaInfor(){
}
void CHMSEditParaInfor::OnCreateComponents()
{
	/*m_wndParaInformation.Create(this, _T("Thông tin cận lâm sàng"), 5, 5, 805, 89);
	m_wndDocumentNoLabel.Create(this, _T("Document No"), 10, 30, 105, 55);
	m_wndDocumentNo.Create(this,110, 30, 210, 55); 
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 215, 30, 315, 55);
	m_wndPatientName.Create(this,320, 30, 595, 55); 
	m_wndOrderIDLabel.Create(this, _T("Order ID"), 600, 30, 695, 55);
	m_wndOrderID.Create(this,700, 30, 800, 55); 
	m_wndPerformDateLabel.Create(this, _T("PerformDate"), 10, 60, 110, 85);
	m_wndPerformDate.Create(this,110, 60, 315, 85); 
	m_wndSave.Create(this, _T("&Save"), 640, 95, 720, 120);
	m_wndCancel.Create(this, _T("&Close"), 725, 95, 805, 120);*/
	
	m_wndDocumentNoLabel.Create(this, _T("Document No"), 10, 30, 105, 55);
	m_wndDocumentNo.Create(this,110, 30, 210, 55); 
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 215, 30, 315, 55);
	m_wndPatientName.Create(this,320, 30, 595, 55); 
	m_wndOrderIDLabel.Create(this, _T("Lượt ĐT"), 600, 30, 695, 55);
	m_wndParaInformation.Create(this, _T("Thông tin bệnh nhân"), 5, 5, 805, 89);
	m_wndOrderID.Create(this,700, 30, 800, 55); 
	m_wndFromDateLabel.Create(this, _T("FromDate"), 10, 60, 110, 85);
	m_wndFromDate.Create(this,110, 60, 315, 85); 
	m_wndToDateLabel.Create(this, _T("ToDate"), 320, 60, 420, 85);
	m_wndToDate.Create(this,425, 60, 595, 85); 
	m_wndSave.Create(this, _T("&Save"), 640, 95, 720, 120);
	m_wndCancel.Create(this, _T("&Close"), 725, 95, 805, 120);
}
void CHMSEditParaInfor::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndDocumentNo.SetLimitText(1024);
	m_wndDocumentNo.SetCheckValue(true);
	m_wndPatientName.SetLimitText(1024);
	m_wndPatientName.SetCheckValue(true);
	m_wndOrderID.SetLimitText(1024);
	m_wndOrderID.SetCheckValue(true);
	
	m_wndDocumentNo.SetReadOnly(TRUE);
	m_wndPatientName.SetReadOnly(TRUE);
	m_wndOrderID.SetReadOnly(TRUE);
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetCheckValue(true);

}
void CHMSEditParaInfor::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
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
	
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	GetDataToScreen();
	SetMode(VM_EDIT);

}
void CHMSEditParaInfor::OnDoDataExchange(CDataExchange* pDX)
{
	DDX_Text(pDX, m_wndDocumentNo.GetDlgCtrlID(), m_nDocumentNo);
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);
	DDX_Text(pDX, m_wndOrderID.GetDlgCtrlID(), m_nOrderID);	
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
}
void CHMSEditParaInfor::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("DocumentNo")] =  m_nDocumentNo;
	m_jData[_T("PatientName")] =  m_szPatientName;
	m_jData[_T("OrderID")] =  m_nOrderID;
	m_jData[_T("PerformDate")] =  m_szPerformDate;
	}
	else
	{
			
	m_jData[_T("DocumentNo")].GetValue(m_nDocumentNo);
	m_jData[_T("PatientName")].GetValue(m_szPatientName);
	m_jData[_T("OrderID")].GetValue(m_nOrderID);
	m_jData[_T("PerformDate")].GetValue(m_szPerformDate);
	}

}
void CHMSEditParaInfor::GetDataToScreen()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;

	szSQL.Format(_T(" SELECT") \
	_T(" htr_docno AS docno,") \
	_T(" get_patientname(htr_docno) AS patientname,") \
	_T(" HTR_TREATTIME AS treatime,") \
	_T(" htr_idx as ref,") \
	_T(" htr_admitdate as fromdate,") \
	_T(" htr_dischargedate as todate") \
	_T(" FROM HMS_TREATMENT_RECORD ") \
	_T(" WHERE 1=1 ") \
	_T(" and htr_docno=%ld and HTR_TREATTIME=%ld AND htr_idx=%ld"), m_nDocumentNo, m_nTreattime, m_nRef);
	
	rs.ExecSQL(szSQL);
	
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("docno"), m_nDocumentNo);
		rs.GetValue(_T("patientname"), m_szPatientName);
		rs.GetValue(_T("treatime"), m_nOrderID);		
		rs.GetValue(_T("fromdate"), m_szFromDate);	
		rs.GetValue(_T("todate"), m_szToDate);
	}
	
}
void CHMSEditParaInfor::GetScreenToData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CHMSEditParaInfor::SetDefaultValues(){

	m_nDocumentNo=0;
	m_szPatientName.Empty();
	m_nOrderID=0;
	m_szFromDate.Empty();
	m_szToDate.Empty();

}
int CHMSEditParaInfor::SetMode(int nMode){
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
		m_wndFromDate.EnableWindow(true);
		m_wndToDate.EnableWindow(true);
 		UpdateData(FALSE);
 		return nOldMode;
}
/*void CHMSEditParaInfor::OnDocumentNoChange(){
	
} */
/*void CHMSEditParaInfor::OnDocumentNoSetfocus(){
	
} */
/*void CHMSEditParaInfor::OnDocumentNoKillfocus(){
	
} */
int CHMSEditParaInfor::OnDocumentNoCheckValue(){
	return 0;
} 
/*void CHMSEditParaInfor::OnPatientNameChange(){
	
} */
/*void CHMSEditParaInfor::OnPatientNameSetfocus(){
	
} */
/*void CHMSEditParaInfor::OnPatientNameKillfocus(){
	
} */
int CHMSEditParaInfor::OnPatientNameCheckValue(){
	return 0;
} 
/*void CHMSEditParaInfor::OnOrderIDChange(){
	
} */
/*void CHMSEditParaInfor::OnOrderIDSetfocus(){
	
} */
/*void CHMSEditParaInfor::OnOrderIDKillfocus(){
	
} */
int CHMSEditParaInfor::OnOrderIDCheckValue(){
	return 0;
} 
/*void CHMSEditParaInfor::OnPerformDateChange(){
	
} */
/*void CHMSEditParaInfor::OnPerformDateSetfocus(){
	
} */
/*void CHMSEditParaInfor::OnPerformDateKillfocus(){
	
} */
int CHMSEditParaInfor::OnPerformDateCheckValue(){
	return 0;
} 
void CHMSEditParaInfor::OnSaveSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnSaveEditParaInfor();
} 
void CHMSEditParaInfor::OnCancelSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnCancel();
	
} 
int CHMSEditParaInfor::OnAddEditParaInfor(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSEditParaInfor::OnEditEditParaInfor(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSEditParaInfor::OnDeleteEditParaInfor(){
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
 		OnCancelEditParaInfor();
 	}
	return 0;
}
int CHMSEditParaInfor::OnSaveEditParaInfor()
{
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	UpdateData(false);
 	CString szSQL;
	//Cho admin sửa lại ngày vào, ngày ra -> ghi lại log	
	int ret = 10;
	szSQL.Format(_T("EditInOutDateInfor(%ld, %ld, %ld, TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS'),	TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS'),'%s') "), m_nDocumentNo,m_nTreattime,m_nRef, m_szFromDate,m_szToDate, pMF->GetCurrentUser());
	ret = str2long(pMF->ExecDML(szSQL));	

	if (ret <0)
	{
		ShowMessageBox(_T("Hồ sơ đã được thanh toán hoặc hồ sơ đã kết thúc, hoặc ngày ra < ngày vào!"),MB_ICONERROR);
		m_wndCancel.SetFocus();
		return -1;
	}
	else
	ShowMessageBox(_T("Update OK! Load lại bệnh nhân để kiểm tra lại"));	
 	return 0;
}
int CHMSEditParaInfor::OnCancelEditParaInfor(){
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
int CHMSEditParaInfor::OnEditParaInforListLoadData()
{
	return 0;
}
int CHMSEditParaInfor::OnFromDateCheckValue()
{
	return 0;
}
int CHMSEditParaInfor::OnToDateCheckValue()
{
	return 0;
}