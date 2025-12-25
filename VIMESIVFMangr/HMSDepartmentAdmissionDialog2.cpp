#include "HMSDepartmentAdmissionDialog.h"
#include "MainFrm.h"
/*static void _OnInDateChangeFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnInDateChange();
} */
/*static void _OnInDateSetfocusFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnInDateSetfocus();} */ 
/*static void _OnInDateKillfocusFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnInDateKillfocus();
} */
static int _OnInDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSDepartmentAdmissionDialog *)pWnd)->OnInDateCheckValue();
} 
/*static void _OnAdmissionNoChangeFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnAdmissionNoChange();
} */
/*static void _OnAdmissionNoSetfocusFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnAdmissionNoSetfocus();} */ 
/*static void _OnAdmissionNoKillfocusFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnAdmissionNoKillfocus();
} */
static int _OnAdmissionNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSDepartmentAdmissionDialog *)pWnd)->OnAdmissionNoCheckValue();
} 
/*static void _OnExamineDiseaseChangeFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnExamineDiseaseChange();
} */
/*static void _OnExamineDiseaseSetfocusFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnExamineDiseaseSetfocus();} */ 
/*static void _OnExamineDiseaseKillfocusFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnExamineDiseaseKillfocus();
} */
static int _OnExamineDiseaseCheckValueFnc(CWnd *pWnd){
	return ((CHMSDepartmentAdmissionDialog *)pWnd)->OnExamineDiseaseCheckValue();
} 
static void _OnAdmissionDiseaseSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSDepartmentAdmissionDialog* )pWnd)->OnAdmissionDiseaseSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnAdmissionDiseaseSelendokFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnAdmissionDiseaseSelendok();
}
/*static void _OnAdmissionDiseaseSetfocusFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnAdmissionDiseaseKillfocus();
}*/
/*static void _OnAdmissionDiseaseKillfocusFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnAdmissionDiseaseKillfocus();
}*/
static long _OnAdmissionDiseaseLoadDataFnc(CWnd *pWnd){
	return ((CHMSDepartmentAdmissionDialog *)pWnd)->OnAdmissionDiseaseLoadData();
}
/*static void _OnAdmissionDiseaseAddNewFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnAdmissionDiseaseAddNew();
}*/
static void _OnMainDiseaseSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSDepartmentAdmissionDialog* )pWnd)->OnMainDiseaseSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnMainDiseaseSelendokFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnMainDiseaseSelendok();
}
/*static void _OnMainDiseaseSetfocusFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnMainDiseaseKillfocus();
}*/
/*static void _OnMainDiseaseKillfocusFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnMainDiseaseKillfocus();
}*/
static long _OnMainDiseaseLoadDataFnc(CWnd *pWnd){
	return ((CHMSDepartmentAdmissionDialog *)pWnd)->OnMainDiseaseLoadData();
}
/*static void _OnMainDiseaseAddNewFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnMainDiseaseAddNew();
}*/
/*static void _OnRelationDiseaseChangeFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnRelationDiseaseChange();
} */
/*static void _OnRelationDiseaseSetfocusFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnRelationDiseaseSetfocus();} */ 
/*static void _OnRelationDiseaseKillfocusFnc(CWnd *pWnd){
	((CHMSDepartmentAdmissionDialog *)pWnd)->OnRelationDiseaseKillfocus();
} */
static int _OnRelationDiseaseCheckValueFnc(CWnd *pWnd){
	return ((CHMSDepartmentAdmissionDialog *)pWnd)->OnRelationDiseaseCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSDepartmentAdmissionDialog *pVw = (CHMSDepartmentAdmissionDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSDepartmentAdmissionDialog *pVw = (CHMSDepartmentAdmissionDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddHMSDepartmentAdmissionDialogFnc(CWnd *pWnd){
	 return ((CHMSDepartmentAdmissionDialog*)pWnd)->OnAddHMSDepartmentAdmissionDialog();
} 
static int _OnEditHMSDepartmentAdmissionDialogFnc(CWnd *pWnd){
	 return ((CHMSDepartmentAdmissionDialog*)pWnd)->OnEditHMSDepartmentAdmissionDialog();
} 
static int _OnDeleteHMSDepartmentAdmissionDialogFnc(CWnd *pWnd){
	 return ((CHMSDepartmentAdmissionDialog*)pWnd)->OnDeleteHMSDepartmentAdmissionDialog();
} 
static int _OnSaveHMSDepartmentAdmissionDialogFnc(CWnd *pWnd){
	 return ((CHMSDepartmentAdmissionDialog*)pWnd)->OnSaveHMSDepartmentAdmissionDialog();
} 
static int _OnCancelHMSDepartmentAdmissionDialogFnc(CWnd *pWnd){
	 return ((CHMSDepartmentAdmissionDialog*)pWnd)->OnCancelHMSDepartmentAdmissionDialog();
} 
CHMSDepartmentAdmissionDialog::CHMSDepartmentAdmissionDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 645;
	m_nDlgHeight = 215;
	SetDefaultValues();
}
CHMSDepartmentAdmissionDialog::~CHMSDepartmentAdmissionDialog(){
}
void CHMSDepartmentAdmissionDialog::OnCreateComponents(){
	m_wndDepartmentAdmission.Create(this, _T("Admission Information"), 5, 5, 640, 205);
	m_wndInDateLabel.Create(this, _T("In Date"), 10, 30, 160, 55);
	m_wndInDate.Create(this,165, 30, 290, 55); 
	m_wndAdmissionNoLabel.Create(this, _T("Admission No"), 295, 30, 415, 55);
	m_wndAdmissionNo.Create(this,420, 30, 635, 55); 
	m_wndExamineDiseaseLabel.Create(this, _T("Examine Disease"), 10, 60, 160, 85);
	m_wndExamineDisease.Create(this,165, 60, 635, 85); 
	m_wndAdmissionDiseaseLabel.Create(this, _T("Admission Disease"), 10, 90, 160, 115);
	m_wndAdmissionDisease.Create(this,165, 90, 635, 115); 
	m_wndMainDiseaseLabel.Create(this, _T("Main Disease"), 10, 120, 160, 145);
	m_wndMainDisease.Create(this,165, 120, 635, 145); 
	m_wndRelationDiseaseLabel.Create(this, _T("Relation Disease"), 10, 150, 160, 175);
	m_wndRelationDisease.Create(this,165, 150, 635, 200, TRUE, FALSE, TRUE); 
	m_wndSave.Create(this, _T("&Save"), 485, 210, 560, 235);
	m_wndCancel.Create(this, _T("&Cancel"), 565, 210, 640, 235);
}
void CHMSDepartmentAdmissionDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndInDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndInDate.SetCheckValue(true);
	m_wndAdmissionNo.SetLimitText(15);
	m_wndAdmissionNo.SetCheckValue(true);
	m_wndExamineDisease.SetLimitText(254);
	m_wndExamineDisease.SetReadOnly(true);
	//m_wndExamineDisease.SetCheckValue(true);
	m_wndAdmissionDisease.SetCheckValue(true);
	m_wndAdmissionDisease.LimitText(254);
	//m_wndMainDisease.SetCheckValue(true);
	m_wndMainDisease.LimitText(254);
	m_wndRelationDisease.SetLimitText(512);
	
	//m_wndRelationDisease.SetCheckValue(true);


	m_wndAdmissionDisease.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndAdmissionDisease.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndMainDisease.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndMainDisease.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_hms_treatment_recordTbl.SetTableName(_T("hms_treatment_record"));
	m_hms_treatment_recordTbl.AddField(_T("htr_updatedby"), dfText, 15); 
	m_hms_treatment_recordTbl.AddField(_T("htr_updateddate"), dfDateTime); 
	m_hms_treatment_recordTbl.AddField(_T("htr_docno"), dfLong); 
	//m_hms_treatment_recordTbl.AddField(_T("htr_recordno"), dfText, 15); 
	m_hms_treatment_recordTbl.AddField(_T("htr_idx"), dfInteger); 
	m_hms_treatment_recordTbl.AddField(_T("htr_status"), dfText, 1); 
	m_hms_treatment_recordTbl.AddField(_T("htr_admitdate"), dfDateTime); 
	m_hms_treatment_recordTbl.AddField(_T("htr_mainicd"), dfText, 15); 
	m_hms_treatment_recordTbl.AddField(_T("htr_maindisease"), dfText, 254); 

}
void CHMSDepartmentAdmissionDialog::OnSetWindowEvents(){
	//m_wndInDate.SetEvent(WE_CHANGE, _OnInDateChangeFnc);
	//m_wndInDate.SetEvent(WE_SETFOCUS, _OnInDateSetfocusFnc);
	//m_wndInDate.SetEvent(WE_KILLFOCUS, _OnInDateKillfocusFnc);
	m_wndInDate.SetEvent(WE_CHECKVALUE, _OnInDateCheckValueFnc);
	//m_wndAdmissionNo.SetEvent(WE_CHANGE, _OnAdmissionNoChangeFnc);
	//m_wndAdmissionNo.SetEvent(WE_SETFOCUS, _OnAdmissionNoSetfocusFnc);
	//m_wndAdmissionNo.SetEvent(WE_KILLFOCUS, _OnAdmissionNoKillfocusFnc);
	m_wndAdmissionNo.SetEvent(WE_CHECKVALUE, _OnAdmissionNoCheckValueFnc);
	//m_wndExamineDisease.SetEvent(WE_CHANGE, _OnExamineDiseaseChangeFnc);
	//m_wndExamineDisease.SetEvent(WE_SETFOCUS, _OnExamineDiseaseSetfocusFnc);
	//m_wndExamineDisease.SetEvent(WE_KILLFOCUS, _OnExamineDiseaseKillfocusFnc);
	m_wndExamineDisease.SetEvent(WE_CHECKVALUE, _OnExamineDiseaseCheckValueFnc);
	m_wndAdmissionDisease.SetEvent(WE_SELENDOK, _OnAdmissionDiseaseSelendokFnc);
	//m_wndAdmissionDisease.SetEvent(WE_SETFOCUS, _OnAdmissionDiseaseSetfocusFnc);
	//m_wndAdmissionDisease.SetEvent(WE_KILLFOCUS, _OnAdmissionDiseaseKillfocusFnc);
	m_wndAdmissionDisease.SetEvent(WE_SELCHANGE, _OnAdmissionDiseaseSelectChangeFnc);
	m_wndAdmissionDisease.SetEvent(WE_LOADDATA, _OnAdmissionDiseaseLoadDataFnc);
	//m_wndAdmissionDisease.SetEvent(WE_ADDNEW, _OnAdmissionDiseaseAddNewFnc);
	m_wndMainDisease.SetEvent(WE_SELENDOK, _OnMainDiseaseSelendokFnc);
	//m_wndMainDisease.SetEvent(WE_SETFOCUS, _OnMainDiseaseSetfocusFnc);
	//m_wndMainDisease.SetEvent(WE_KILLFOCUS, _OnMainDiseaseKillfocusFnc);
	m_wndMainDisease.SetEvent(WE_SELCHANGE, _OnMainDiseaseSelectChangeFnc);
	m_wndMainDisease.SetEvent(WE_LOADDATA, _OnMainDiseaseLoadDataFnc);
	//m_wndMainDisease.SetEvent(WE_ADDNEW, _OnMainDiseaseAddNewFnc);
	//m_wndRelationDisease.SetEvent(WE_CHANGE, _OnRelationDiseaseChangeFnc);
	//m_wndRelationDisease.SetEvent(WE_SETFOCUS, _OnRelationDiseaseSetfocusFnc);
	//m_wndRelationDisease.SetEvent(WE_KILLFOCUS, _OnRelationDiseaseKillfocusFnc);
	m_wndRelationDisease.SetEvent(WE_CHECKVALUE, _OnRelationDiseaseCheckValueFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	GetDataToScreen();
}
void CHMSDepartmentAdmissionDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndInDate.GetDlgCtrlID(), m_szInDate);
	DDX_Text(pDX, m_wndAdmissionNo.GetDlgCtrlID(), m_szAdmissionNo);
	DDX_Text(pDX, m_wndExamineDisease.GetDlgCtrlID(), m_szExamineDisease);
	DDX_TextEx(pDX, m_wndAdmissionDisease.GetDlgCtrlID(), m_szAdmissionDiseaseKey);
	DDX_TextEx(pDX, m_wndMainDisease.GetDlgCtrlID(), m_szMainDiseaseKey);
	DDX_Text(pDX, m_wndRelationDisease.GetDlgCtrlID(), m_szRelationDisease);

}
void CHMSDepartmentAdmissionDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szStatus;
	szSQL.Format(_T(" SELECT 	htr_admitdate as admitdate,") \
_T(" 	hcr_recordno as recordno,") \
_T(" 	hcr_admiticd as admiticd,") \
_T(" 	htr_mainicd as mainicd,") \
_T(" 	htr_status as status,") \
_T(" 	hd_diagnostic as examdisease,") \
_T(" 	hcr_reldisease as reldisease, hcr_status ") \
_T(" FROM hms_doc") \
_T(" LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno)") \
_T(" LEFT JOIN hms_treatment_record ON(htr_docno=hcr_docno)") \
_T(" WHERE htr_docno=%ld AND htr_idx=%d"), m_nDocumentNo, m_nIndex);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("admitdate"), m_szInDate);
		rs.GetValue(_T("recordno"), m_szAdmissionNo);
		rs.GetValue(_T("admitdate"), m_szInDate);
		rs.GetValue(_T("admiticd"), m_szAdmissionDiseaseKey);
		rs.GetValue(_T("mainicd"), m_szMainDiseaseKey);
		rs.GetValue(_T("status"), szStatus);
		rs.GetValue(_T("hcr_status"), m_szDocStatus);
		rs.GetValue(_T("examdisease"), m_szExamineDisease);
		rs.GetValue(_T("reldisease"), m_szRelationDisease);
		
		UpdateData(false);
		if(szStatus == _T("A") || szStatus==_T("I"))
			SetMode(VM_EDIT);
		else
			SetMode(VM_VIEW);
	}
	else
			SetMode(VM_NONE);
	

}
void CHMSDepartmentAdmissionDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
	m_hms_treatment_recordTbl.SetValue(_T("htr_updatedby"), pMF->GetCurrentUser()); 
	m_hms_treatment_recordTbl.SetValue(_T("htr_updateddate"), pMF->GetSysDateTime()); 
	m_hms_treatment_recordTbl.SetValue(_T("htr_docno"), pMF->m_nDocumentNo); 
	m_hms_treatment_recordTbl.SetValue(_T("htr_idx"), m_nIndex); 
	m_hms_treatment_recordTbl.SetValue(_T("htr_status"), _T("I")); 
	m_hms_treatment_recordTbl.SetValue(_T("htr_admitdate"), m_szInDate); 
	m_hms_treatment_recordTbl.SetValue(_T("htr_mainicd"), m_szMainDiseaseKey); 
	m_hms_treatment_recordTbl.SetValue(_T("htr_maindisease"), m_wndMainDisease.GetCurrent(1)); 
}
void CHMSDepartmentAdmissionDialog::SetDefaultValues(){

	m_szInDate.Empty();
	m_szAdmissionNo.Empty();
	m_szExamineDisease.Empty();
	m_szAdmissionDiseaseKey.Empty();
	m_szMainDiseaseKey.Empty();
	m_szRelationDisease.Empty();

}
int CHMSDepartmentAdmissionDialog::SetMode(int nMode){
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
			m_szInDate = pMF->GetSysDateTime();
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 1, -1); 
 			break; 
 		case VM_VIEW: 
 			EnableControls(FALSE); 
 			EnableButtons(FALSE, 0, -1); 
 			break; 
 		case VM_NONE: 
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 0, -1); 
 			SetDefaultValues(); 
 			break; 
 		}; 
 		UpdateData(FALSE); 
 		return nOldMode; 
}
/*void CHMSDepartmentAdmissionDialog::OnInDateChange(){
	
} */
/*void CHMSDepartmentAdmissionDialog::OnInDateSetfocus(){
	
} */
/*void CHMSDepartmentAdmissionDialog::OnInDateKillfocus(){
	
} */
int CHMSDepartmentAdmissionDialog::OnInDateCheckValue(){
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr;
	if(m_nIndex > 1)
		szSQL.Format(_T("SELECT timestamp '%s' < hcr_admitdate as cmpval FROM hms_clinical_record WHERE hcr_docno=%ld"), m_szInDate,  m_nDocumentNo);
	else
		szSQL.Format(_T("SELECT timestamp '%s' < hd_enddate as cmpval FROM hms_doc WHERE hd_docno=%ld "), m_szInDate,  m_nDocumentNo);
	rs.ExecSQL(szSQL);

	rs.GetValue(_T("cmpval"), tmpStr);
	if(tmpStr == _T("t")){
		return -1;
	}
	if(CompareDate(m_szInDate, pMF->GetSysDate()) > 0)
		return -1;
	return 0;
} 
/*void CHMSDepartmentAdmissionDialog::OnAdmissionNoChange(){
	
} */
/*void CHMSDepartmentAdmissionDialog::OnAdmissionNoSetfocus(){
	
} */
/*void CHMSDepartmentAdmissionDialog::OnAdmissionNoKillfocus(){
	
} */
int CHMSDepartmentAdmissionDialog::OnAdmissionNoCheckValue(){
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	//Kiem tra xem co benh nhan nao dung ma ho so nay chua
	szSQL.Format(_T("SELECT * FROM hms_treatment_record WHERE htr_recordno='%s' "), m_szAdmissionNo);
	rs.ExecSQL(szSQL);
	while(!rs.IsEOF())
	{
		long nDocNo;
		rs.GetValue(_T("htr_docno"), nDocNo);
		if(nDocNo != m_nDocumentNo){
			CString szMsg;
			szMsg.Format(_T("This clinical record using by other document [%ld]"), nDocNo);
			m_wndAdmissionNo.SetToolTipMessage(szMsg);
			return -1;
		}
		rs.MoveNext();
	}
	return 0;
} 
/*void CHMSDepartmentAdmissionDialog::OnExamineDiseaseChange(){
	
} */
/*void CHMSDepartmentAdmissionDialog::OnExamineDiseaseSetfocus(){
	
} */
/*void CHMSDepartmentAdmissionDialog::OnExamineDiseaseKillfocus(){
	
} */
int CHMSDepartmentAdmissionDialog::OnExamineDiseaseCheckValue(){
	return 0;
} 
void CHMSDepartmentAdmissionDialog::OnAdmissionDiseaseSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDepartmentAdmissionDialog::OnAdmissionDiseaseSelendok(){
	UpdateData(true);
	m_szMainDiseaseKey = m_szAdmissionDiseaseKey;
	UpdateData(false);
	 
}
/*void CHMSDepartmentAdmissionDialog::OnAdmissionDiseaseSetfocus(){
	
}*/
/*void CHMSDepartmentAdmissionDialog::OnAdmissionDiseaseKillfocus(){
	
}*/
long CHMSDepartmentAdmissionDialog::OnAdmissionDiseaseLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return pMF->LoadICD(&m_wndAdmissionDisease, m_szAdmissionDiseaseKey);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndAdmissionDisease.IsSearchKey() && !m_szAdmissionDiseaseKey.IsEmpty()){
	};
	m_wndAdmissionDisease.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndAdmissionDisease.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSDepartmentAdmissionDialog::OnAdmissionDiseaseAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSDepartmentAdmissionDialog::OnMainDiseaseSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDepartmentAdmissionDialog::OnMainDiseaseSelendok(){
	 
}
/*void CHMSDepartmentAdmissionDialog::OnMainDiseaseSetfocus(){
	
}*/
/*void CHMSDepartmentAdmissionDialog::OnMainDiseaseKillfocus(){
	
}*/
long CHMSDepartmentAdmissionDialog::OnMainDiseaseLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return pMF->LoadICD(&m_wndMainDisease, m_szMainDiseaseKey);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndMainDisease.IsSearchKey() && !m_szMainDiseaseKey.IsEmpty()){
	};
	m_wndMainDisease.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndMainDisease.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSDepartmentAdmissionDialog::OnMainDiseaseAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSDepartmentAdmissionDialog::OnRelationDiseaseChange(){
	
} */
/*void CHMSDepartmentAdmissionDialog::OnRelationDiseaseSetfocus(){
	
} */
/*void CHMSDepartmentAdmissionDialog::OnRelationDiseaseKillfocus(){
	
} */
int CHMSDepartmentAdmissionDialog::OnRelationDiseaseCheckValue(){
	return 0;
} 
void CHMSDepartmentAdmissionDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveHMSDepartmentAdmissionDialog();
} 
void CHMSDepartmentAdmissionDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();
} 
int CHMSDepartmentAdmissionDialog::OnAddHMSDepartmentAdmissionDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSDepartmentAdmissionDialog::OnEditHMSDepartmentAdmissionDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSDepartmentAdmissionDialog::OnDeleteHMSDepartmentAdmissionDialog(){
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
 		OnCancelHMSDepartmentAdmissionDialog(); 
 	}
	return 0;
}
int CHMSDepartmentAdmissionDialog::OnSaveHMSDepartmentAdmissionDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	CString szWhere; 
 	szWhere.Format(_T(" WHERE htr_docno=%ld AND htr_idx=%d"), m_nDocumentNo, m_nIndex); 
 	szSQL = m_hms_treatment_recordTbl.GetUpdateSQL(_T("htr_createdby,htr_createddate,htr_docno,htr_idx")); 
 	szSQL += szWhere; 
 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		CString szSQL;
	//Cap nhat lai trang thai ho so kham
		if(m_nIndex == 1)
			szSQL.Format(_T("UPDATE hms_clinical_record ") \
			_T(" SET hcr_status='%s', hcr_recordno='%s', hcr_admitdate='%s',hcr_admiticd='%s', hcr_admitdisease='%s', hcr_mainicd='%s', hcr_maindisease='%s', hcr_reldisease='%s' ") \
			_T(" WHERE hcr_docno=%ld "), 
			m_szRecStatus, m_szAdmissionNo, m_szInDate, m_szAdmissionDiseaseKey, m_wndAdmissionDisease.GetCurrent(1), 
			m_szMainDiseaseKey, m_wndMainDisease.GetCurrent(1), m_szRelationDisease, m_nDocumentNo);
		else
			szSQL.Format(_T("UPDATE hms_clinical_record SET hcr_status='%s', hcr_admiticd='%s', hcr_admitdisease='%s', hcr_mainicd='%s', hcr_maindisease='%s', hcr_reldisease='%s' WHERE hcr_docno=%ld "), 
			m_szDocStatus, m_szAdmissionDiseaseKey, m_wndAdmissionDisease.GetCurrent(1), 
			m_szMainDiseaseKey, m_wndMainDisease.GetCurrent(1), m_szRelationDisease, m_nDocumentNo);
_fmsg(_T("%s"), szSQL);
		pMF->ExecSQL(szSQL);
		OnOK();
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
}
int CHMSDepartmentAdmissionDialog::OnCancelHMSDepartmentAdmissionDialog(){
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
int CHMSDepartmentAdmissionDialog::OnHMSDepartmentAdmissionDialogListLoadData(){
	return 0;
}
