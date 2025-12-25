#include "HMSMergeIVFDocnoDialog.h"
#include "MainFrm.h"
/*static void _OnOldDocumentNoChangeFnc(CWnd *pWnd){
	((CHMSMergeIVFDocnoDialog *)pWnd)->OnOldDocumentNoChange();
} */
/*static void _OnOldDocumentNoSetfocusFnc(CWnd *pWnd){
	((CHMSMergeIVFDocnoDialog *)pWnd)->OnOldDocumentNoSetfocus();} */ 
/*static void _OnOldDocumentNoKillfocusFnc(CWnd *pWnd){
	((CHMSMergeIVFDocnoDialog *)pWnd)->OnOldDocumentNoKillfocus();
} */
static int _OnOldDocumentNoCheckValueFnc(CWnd *pWnd)
{
	return ((CHMSMergeIVFDocnoDialog *)pWnd)->OnOldDocumentNoCheckValue();
} 
/*static void _OnPatientNo1ChangeFnc(CWnd *pWnd){
	((CHMSMergeIVFDocnoDialog *)pWnd)->OnPatientNo1Change();
} */
/*static void _OnPatientNo1SetfocusFnc(CWnd *pWnd){
	((CHMSMergeIVFDocnoDialog *)pWnd)->OnPatientNo1Setfocus();} */ 
/*static void _OnPatientNo1KillfocusFnc(CWnd *pWnd){
	((CHMSMergeIVFDocnoDialog *)pWnd)->OnPatientNo1Killfocus();
} */
static int _OnPatientNo1CheckValueFnc(CWnd *pWnd){
	return ((CHMSMergeIVFDocnoDialog *)pWnd)->OnPatientNo1CheckValue();
} 
/*static void _OnPatientNameChangeFnc(CWnd *pWnd){
	((CHMSMergeIVFDocnoDialog *)pWnd)->OnPatientNameChange();
} */
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CHMSMergeIVFDocnoDialog *)pWnd)->OnPatientNameSetfocus();} */ 
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((CHMSMergeIVFDocnoDialog *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSMergeIVFDocnoDialog *)pWnd)->OnPatientNameCheckValue();
} 
/*static void _OnNewDocumentNoChangeFnc(CWnd *pWnd){
	((CHMSMergeIVFDocnoDialog *)pWnd)->OnNewDocumentNoChange();
} */
/*static void _OnNewDocumentNoSetfocusFnc(CWnd *pWnd){
	((CHMSMergeIVFDocnoDialog *)pWnd)->OnNewDocumentNoSetfocus();} */ 
/*static void _OnNewDocumentNoKillfocusFnc(CWnd *pWnd){
	((CHMSMergeIVFDocnoDialog *)pWnd)->OnNewDocumentNoKillfocus();
} */
static int _OnNewDocumentNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSMergeIVFDocnoDialog *)pWnd)->OnNewDocumentNoCheckValue();
} 
/*static void _OnPatientNo2ChangeFnc(CWnd *pWnd){
	((CHMSMergeIVFDocnoDialog *)pWnd)->OnPatientNo2Change();
} */
/*static void _OnPatientNo2SetfocusFnc(CWnd *pWnd){
	((CHMSMergeIVFDocnoDialog *)pWnd)->OnPatientNo2Setfocus();} */ 
/*static void _OnPatientNo2KillfocusFnc(CWnd *pWnd){
	((CHMSMergeIVFDocnoDialog *)pWnd)->OnPatientNo2Killfocus();
} */
static int _OnPatientNo2CheckValueFnc(CWnd *pWnd){
	return ((CHMSMergeIVFDocnoDialog *)pWnd)->OnPatientNo2CheckValue();
} 
/*static void _OnPatientName2ChangeFnc(CWnd *pWnd){
	((CHMSMergeIVFDocnoDialog *)pWnd)->OnPatientName2Change();
} */
/*static void _OnPatientName2SetfocusFnc(CWnd *pWnd){
	((CHMSMergeIVFDocnoDialog *)pWnd)->OnPatientName2Setfocus();} */ 
/*static void _OnPatientName2KillfocusFnc(CWnd *pWnd){
	((CHMSMergeIVFDocnoDialog *)pWnd)->OnPatientName2Killfocus();
} */
static int _OnPatientName2CheckValueFnc(CWnd *pWnd){
	return ((CHMSMergeIVFDocnoDialog *)pWnd)->OnPatientName2CheckValue();
} 
static void _OnOKSelectFnc(CWnd *pWnd){
	CHMSMergeIVFDocnoDialog *pVw = (CHMSMergeIVFDocnoDialog *)pWnd;
	pVw->OnOKSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSMergeIVFDocnoDialog *pVw = (CHMSMergeIVFDocnoDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddHMSPatientNoChangeDialogFnc(CWnd *pWnd){
	 return ((CHMSMergeIVFDocnoDialog*)pWnd)->OnAddHMSPatientNoChangeDialog();
} 
static int _OnEditHMSPatientNoChangeDialogFnc(CWnd *pWnd){
	 return ((CHMSMergeIVFDocnoDialog*)pWnd)->OnEditHMSPatientNoChangeDialog();
} 
static int _OnDeleteHMSPatientNoChangeDialogFnc(CWnd *pWnd){
	 return ((CHMSMergeIVFDocnoDialog*)pWnd)->OnDeleteHMSPatientNoChangeDialog();
} 
static int _OnSaveHMSPatientNoChangeDialogFnc(CWnd *pWnd){
	 return ((CHMSMergeIVFDocnoDialog*)pWnd)->OnSaveHMSPatientNoChangeDialog();
} 
static int _OnCancelHMSPatientNoChangeDialogFnc(CWnd *pWnd){
	 return ((CHMSMergeIVFDocnoDialog*)pWnd)->OnCancelHMSPatientNoChangeDialog();
} 
CHMSMergeIVFDocnoDialog::CHMSMergeIVFDocnoDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 405;
	m_nDlgHeight = 185;
	SetDefaultValues();
}
CHMSMergeIVFDocnoDialog::~CHMSMergeIVFDocnoDialog(){
}
void CHMSMergeIVFDocnoDialog::OnCreateComponents(){
	m_wndOldDocNoLabel.Create(this, _T("Old Document No"), 10, 30, 130, 55);
	m_wndOldDocumentNo.Create(this,135, 30, 220, 55); 
	m_wndPatientNo1Label.Create(this, _T("From Patient No"), 225, 30, 310, 55);
	m_wndPatientInformation.Create(this, _T("Patient Information"), 5, 5, 400, 150);
	m_wndPatientNo1.Create(this,315, 30, 395, 55); 
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 10, 60, 130, 85);
	m_wndPatientName.Create(this,135, 60, 395, 85); 
	m_wndNewDocumentNoLabel.Create(this, _T("New Document No"), 10, 90, 130, 115);
	m_wndNewDocumentNo.Create(this,135, 90, 220, 115); 
	m_wndPatientNo2Label.Create(this, _T("To Patient No"), 225, 90, 310, 115);
	m_wndPatientNo2.Create(this,315, 90, 395, 115); 
	m_wndPatientName2Label.Create(this, _T("Patient Name"), 10, 120, 130, 145);
	m_wndPatientName2.Create(this,135, 120, 395, 145); 
	m_wndOK.Create(this, _T("&OK"), 235, 155, 315, 180);
	m_wndCancel.Create(this, _T("&Cancel"), 320, 155, 400, 180);
}
void CHMSMergeIVFDocnoDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndOldDocumentNo.SetLimitText(16);
	m_wndOldDocumentNo.SetCheckValue(true);
	m_wndPatientNo1.SetLimitText(16);
	m_wndPatientName.SetLimitText(65);
//	m_wndPatientName.SetCheckValue(true);
	m_wndNewDocumentNo.SetLimitText(16);
	m_wndNewDocumentNo.SetCheckValue(true);
	m_wndPatientNo2.SetLimitText(16);
	m_wndPatientName2.SetLimitText(65);
//	m_wndPatientName2.SetCheckValue(true);
	m_wndPatientNo1.SetReadOnly(true);
	m_wndPatientNo2.SetReadOnly(true);
	m_wndPatientName.SetReadOnly(true);
	m_wndPatientName2.SetReadOnly(true);

}
void CHMSMergeIVFDocnoDialog::OnSetWindowEvents(){
	//m_wndOldDocumentNo.SetEvent(WE_CHANGE, _OnOldDocumentNoChangeFnc);
	//m_wndOldDocumentNo.SetEvent(WE_SETFOCUS, _OnOldDocumentNoSetfocusFnc);
	//m_wndOldDocumentNo.SetEvent(WE_KILLFOCUS, _OnOldDocumentNoKillfocusFnc);
	m_wndOldDocumentNo.SetEvent(WE_CHECKVALUE, _OnOldDocumentNoCheckValueFnc);
	//m_wndPatientNo1.SetEvent(WE_CHANGE, _OnPatientNo1ChangeFnc);
	//m_wndPatientNo1.SetEvent(WE_SETFOCUS, _OnPatientNo1SetfocusFnc);
	//m_wndPatientNo1.SetEvent(WE_KILLFOCUS, _OnPatientNo1KillfocusFnc);
	m_wndPatientNo1.SetEvent(WE_CHECKVALUE, _OnPatientNo1CheckValueFnc);
	//m_wndPatientName.SetEvent(WE_CHANGE, _OnPatientNameChangeFnc);
	//m_wndPatientName.SetEvent(WE_SETFOCUS, _OnPatientNameSetfocusFnc);
	//m_wndPatientName.SetEvent(WE_KILLFOCUS, _OnPatientNameKillfocusFnc);
	m_wndPatientName.SetEvent(WE_CHECKVALUE, _OnPatientNameCheckValueFnc);
	//m_wndNewDocumentNo.SetEvent(WE_CHANGE, _OnNewDocumentNoChangeFnc);
	//m_wndNewDocumentNo.SetEvent(WE_SETFOCUS, _OnNewDocumentNoSetfocusFnc);
	//m_wndNewDocumentNo.SetEvent(WE_KILLFOCUS, _OnNewDocumentNoKillfocusFnc);
	m_wndNewDocumentNo.SetEvent(WE_CHECKVALUE, _OnNewDocumentNoCheckValueFnc);
	//m_wndPatientNo2.SetEvent(WE_CHANGE, _OnPatientNo2ChangeFnc);
	//m_wndPatientNo2.SetEvent(WE_SETFOCUS, _OnPatientNo2SetfocusFnc);
	//m_wndPatientNo2.SetEvent(WE_KILLFOCUS, _OnPatientNo2KillfocusFnc);
	m_wndPatientNo2.SetEvent(WE_CHECKVALUE, _OnPatientNo2CheckValueFnc);
	//m_wndPatientName2.SetEvent(WE_CHANGE, _OnPatientName2ChangeFnc);
	//m_wndPatientName2.SetEvent(WE_SETFOCUS, _OnPatientName2SetfocusFnc);
	//m_wndPatientName2.SetEvent(WE_KILLFOCUS, _OnPatientName2KillfocusFnc);
	m_wndPatientName2.SetEvent(WE_CHECKVALUE, _OnPatientName2CheckValueFnc);
	m_wndOK.SetEvent(WE_CLICK, _OnOKSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	SetMode(VM_EDIT);
}
void CHMSMergeIVFDocnoDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndOldDocumentNo.GetDlgCtrlID(), m_nOldDocumentNo);
	DDX_Text(pDX, m_wndPatientNo1.GetDlgCtrlID(), m_nPatientNo1);
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);
	DDX_Text(pDX, m_wndNewDocumentNo.GetDlgCtrlID(), m_nNewDocumentNo);
	DDX_Text(pDX, m_wndPatientNo2.GetDlgCtrlID(), m_nPatientNo2);
	DDX_Text(pDX, m_wndPatientName2.GetDlgCtrlID(), m_szPatientName2);
}
void CHMSMergeIVFDocnoDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSMergeIVFDocnoDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSMergeIVFDocnoDialog::SetDefaultValues(){

	m_nOldDocumentNo=0;
	m_nPatientNo1=0;
	m_szPatientName.Empty();
	m_nNewDocumentNo=0;
	m_nPatientNo2=0;
	m_szPatientName2.Empty();

}
int CHMSMergeIVFDocnoDialog::SetMode(int nMode){
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
/*void CHMSMergeIVFDocnoDialog::OnOldDocumentNoChange(){
	
} */
/*void CHMSMergeIVFDocnoDialog::OnOldDocumentNoSetfocus(){
	
} */
/*void CHMSMergeIVFDocnoDialog::OnOldDocumentNoKillfocus(){
	
} */
int CHMSMergeIVFDocnoDialog::OnOldDocumentNoCheckValue(){
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T(" SELECT 	hd_patientno as patientno,") \
		_T(" 	hp_surname||' '||hp_midname||' '||hp_firstname as pname") \
		_T(" FROM hms_patient") \
		_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
		_T(" WHERE hd_docno=%ld"), m_nOldDocumentNo);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("pname"), m_szPatientName);
		rs.GetValue(_T("patientno"), m_nPatientNo1);
	}
	UpdateData(FALSE);

	return 0;
} 
/*void CHMSMergeIVFDocnoDialog::OnPatientNo1Change(){
	
} */
/*void CHMSMergeIVFDocnoDialog::OnPatientNo1Setfocus(){
	
} */
/*void CHMSMergeIVFDocnoDialog::OnPatientNo1Killfocus(){
	
} */
int CHMSMergeIVFDocnoDialog::OnPatientNo1CheckValue(){
	return 0;
} 
/*void CHMSMergeIVFDocnoDialog::OnPatientNameChange(){
	
} */
/*void CHMSMergeIVFDocnoDialog::OnPatientNameSetfocus(){
	
} */
/*void CHMSMergeIVFDocnoDialog::OnPatientNameKillfocus(){
	
} */
int CHMSMergeIVFDocnoDialog::OnPatientNameCheckValue(){
	return 0;
} 
/*void CHMSMergeIVFDocnoDialog::OnNewDocumentNoChange(){
	
} */
/*void CHMSMergeIVFDocnoDialog::OnNewDocumentNoSetfocus(){
	
} */
/*void CHMSMergeIVFDocnoDialog::OnNewDocumentNoKillfocus(){
	
} */
int CHMSMergeIVFDocnoDialog::OnNewDocumentNoCheckValue(){
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T(" SELECT 	hd_patientno as patientno,") \
		_T(" 	hp_surname||' '||hp_midname||' '||hp_firstname as pname") \
		_T(" FROM hms_patient") \
		_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
		_T(" WHERE hd_docno=%ld"), m_nNewDocumentNo);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("pname"), m_szPatientName2);
		rs.GetValue(_T("patientno"), m_nPatientNo2);
	}
	UpdateData(FALSE);
	return 0;
} 
/*void CHMSMergeIVFDocnoDialog::OnPatientNo2Change(){
	
} */
/*void CHMSMergeIVFDocnoDialog::OnPatientNo2Setfocus(){
	
} */
/*void CHMSMergeIVFDocnoDialog::OnPatientNo2Killfocus(){
	
} */
int CHMSMergeIVFDocnoDialog::OnPatientNo2CheckValue(){
	return 0;
} 
/*void CHMSMergeIVFDocnoDialog::OnPatientName2Change(){
	
} */
/*void CHMSMergeIVFDocnoDialog::OnPatientName2Setfocus(){
	
} */
/*void CHMSMergeIVFDocnoDialog::OnPatientName2Killfocus(){
	
} */

bool CHMSMergeIVFDocnoDialog::IsTreatmentTerminate(int nDocNoNew, int nDocNoOld){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere,tmpStr, m_szDeptNameNew,m_szDeptNameOld, szMsg;
	bool docnew, docold, outdoc;
	int ret=0;

	szSQL.Format(_T(" SELECT hop_refidx as id,(select sd_name from sys_dept where sd_id =hop_deptid) as DeptName FROM hms_outpatient WHERE hop_docno in(%ld,%ld) AND hop_status IN('O') ORDER BY hop_refidx "), nDocNoNew, nDocNoOld);
	ret = rs.ExecSQL(szSQL);
	if (ret > 0)
	{	
		rs.GetValue(_T("id"), tmpStr);
		rs.GetValue(_T("DeptName"), m_szDeptNameNew);
		if (ToInt(tmpStr) > 0) outdoc = true;
	}
	_fmsg(_T("%s"), szSQL);
	szSQL.Format(_T(" SELECT htr_idx as id,(select sd_name from sys_dept where sd_id =htr_deptid) as DeptName FROM hms_treatment_record WHERE htr_docno=%ld AND htr_status IN('I','A') ORDER BY htr_idx"), nDocNoNew);
	ret = rs.ExecSQL(szSQL);
	if (ret > 0)
	{	
		rs.GetValue(_T("id"), tmpStr);
		rs.GetValue(_T("DeptName"), m_szDeptNameNew);
		if (ToInt(tmpStr) > 0) docnew = true;
	}

	szSQL.Format(_T(" SELECT htr_idx as id,(select sd_name from sys_dept where sd_id =htr_deptid) as DeptName FROM hms_treatment_record WHERE htr_docno=%ld AND htr_status IN('I','A') ORDER BY htr_idx"), nDocNoOld);
	ret = rs.ExecSQL(szSQL);
	if (ret > 0)
	{		
		rs.GetValue(_T("id"), tmpStr);
		rs.GetValue(_T("DeptName"), m_szDeptNameOld);
		if (ToInt(tmpStr) > 0) docold = true;
	}
	
	if ( docnew == true && docold ==true || outdoc ==true)
	{
		CString tmpStr, tmpStr1,tmpStr2;
		TranslateString(_T("1. Doccument [%ld] treatment in dept [%s]"), tmpStr); 
		TranslateString(_T("2. Doccument [%ld] treatment in dept [%s]"), tmpStr1);
		TranslateString(_T("You can not change the patient identification"), tmpStr2);
		
		szMsg.Format(tmpStr +_T("\n") + tmpStr1 + _T("\n") + tmpStr2, nDocNoNew, m_szDeptNameNew,nDocNoOld,m_szDeptNameOld);
		ShowMessageBox(szMsg, MB_OK|MB_ICONWARNING);
		return true;
	}

	return false;
}

int CHMSMergeIVFDocnoDialog::OnPatientName2CheckValue(){
	return 0;
} 
void CHMSMergeIVFDocnoDialog::OnOKSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);

	if(m_nNewDocumentNo <= 0)
		return;
	if(m_nOldDocumentNo <= 0)
		return;

	if(m_szPatientName != m_szPatientName2)
	{
		ShowMessageBox(_T("Patient name are not same. Cant not change"), MB_OK);
		return;
	}

	if(m_nPatientNo1 != m_nPatientNo2)
	{
		ShowMessageBox(_T("Mã bệnh nhân khác nhau, cần đổi mã bệnh nhân trước (ở tiếp đón)"), MB_OK);
		return;
	}

	long nNewDoc, nOldDoc;
	nNewDoc = m_nNewDocumentNo;
	nOldDoc = m_nOldDocumentNo;
	if(nNewDoc > nOldDoc)
	{
		nNewDoc = nOldDoc;
		nOldDoc = m_nNewDocumentNo;
	}

	if (IsTreatmentTerminate(nNewDoc, nOldDoc)) return ;
	
	if(ShowMessageBox(_T("Bạn muốn gộp thông tin CLS, thông tin lưu trữ phôi/TT của hồ sơ cũ là sang hồ sơ mới (Yes/No)") ,MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return; 

	CString szSQL, szSQLxxxx;

	_msg(_T("Số hồ sơ cũ: %ld, Số hồ sơ mới: %ld"), m_nOldDocumentNo, m_nNewDocumentNo);

	szSQL.Format(_T("IVF_MERGE_DOCUMENT(%ld,%ld) "), m_nOldDocumentNo, m_nNewDocumentNo);

	int ret = ToInt(pMF->ExecDML(szSQL));
	//_fmsg(_T("%s"), szSQL);
	if(ret >= 0)
	{
		ShowMessageBox(_T("Cập nhật thành công") , MB_OK|MB_ICONINFORMATION);
		CGuiDialog::OnOK();
	}
	else
	{
		ShowMessageBox(_T("Tác vụ thất bại") , MB_OK|MB_ICONERROR);
	}
	

} 
void CHMSMergeIVFDocnoDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CHMSMergeIVFDocnoDialog::OnAddHMSPatientNoChangeDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSMergeIVFDocnoDialog::OnEditHMSPatientNoChangeDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSMergeIVFDocnoDialog::OnDeleteHMSPatientNoChangeDialog(){
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
 		OnCancelHMSPatientNoChangeDialog(); 
 	}
	return 0;
}
int CHMSMergeIVFDocnoDialog::OnSaveHMSPatientNoChangeDialog(){
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
 		//OnHMSPatientNoChangeDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSMergeIVFDocnoDialog::OnCancelHMSPatientNoChangeDialog(){
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
int CHMSMergeIVFDocnoDialog::OnHMSPatientNoChangeDialogListLoadData(){
	return 0;
}
