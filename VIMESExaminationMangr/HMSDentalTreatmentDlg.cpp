#include "HMSDentalTreatmentDlg.h"
#include "MainFrm.h"
static long _OnTeethListLoadDataFnc(CWnd *pWnd){
	return ((CHMSDentalTreatmentDlg*)pWnd)->OnTeethListLoadData();
} 
static void _OnTeethListDblClickFnc(CWnd *pWnd){
	((CHMSDentalTreatmentDlg*)pWnd)->OnTeethListDblClick();
} 
static void _OnTeethListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSDentalTreatmentDlg*)pWnd)->OnTeethListSelectChange(nOldItem, nNewItem);
} 
static int _OnTeethListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSDentalTreatmentDlg*)pWnd)->OnTeethListDeleteItem();
} 
/*static void _OnDocumentNoChangeFnc(CWnd *pWnd){
	((CHMSDentalTreatmentDlg *)pWnd)->OnDocumentNoChange();
} */
/*static void _OnDocumentNoSetfocusFnc(CWnd *pWnd){
	((CHMSDentalTreatmentDlg *)pWnd)->OnDocumentNoSetfocus();} */ 
/*static void _OnDocumentNoKillfocusFnc(CWnd *pWnd){
	((CHMSDentalTreatmentDlg *)pWnd)->OnDocumentNoKillfocus();
} */
static int _OnDocumentNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSDentalTreatmentDlg *)pWnd)->OnDocumentNoCheckValue();
} 
/*static void _OnEnterDateChangeFnc(CWnd *pWnd){
	((CHMSDentalTreatmentDlg *)pWnd)->OnEnterDateChange();
} */
/*static void _OnEnterDateSetfocusFnc(CWnd *pWnd){
	((CHMSDentalTreatmentDlg *)pWnd)->OnEnterDateSetfocus();} */ 
/*static void _OnEnterDateKillfocusFnc(CWnd *pWnd){
	((CHMSDentalTreatmentDlg *)pWnd)->OnEnterDateKillfocus();
} */
static int _OnEnterDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSDentalTreatmentDlg *)pWnd)->OnEnterDateCheckValue();
} 
/*static void _OnNewChangeFnc(CWnd *pWnd){
	((CHMSDentalTreatmentDlg *)pWnd)->OnNewChange();
} */
/*static void _OnNewSetfocusFnc(CWnd *pWnd){
	((CHMSDentalTreatmentDlg *)pWnd)->OnNewSetfocus();} */ 
/*static void _OnNewKillfocusFnc(CWnd *pWnd){
	((CHMSDentalTreatmentDlg *)pWnd)->OnNewKillfocus();
} */
static int _OnNewCheckValueFnc(CWnd *pWnd){
	return ((CHMSDentalTreatmentDlg *)pWnd)->OnNewCheckValue();
} 
/*static void _OnDentureChangeFnc(CWnd *pWnd){
	((CHMSDentalTreatmentDlg *)pWnd)->OnDentureChange();
} */
/*static void _OnDentureSetfocusFnc(CWnd *pWnd){
	((CHMSDentalTreatmentDlg *)pWnd)->OnDentureSetfocus();} */ 
/*static void _OnDentureKillfocusFnc(CWnd *pWnd){
	((CHMSDentalTreatmentDlg *)pWnd)->OnDentureKillfocus();
} */
static int _OnDentureCheckValueFnc(CWnd *pWnd){
	return ((CHMSDentalTreatmentDlg *)pWnd)->OnDentureCheckValue();
} 
/*static void _OnTimeChangeFnc(CWnd *pWnd){
	((CHMSDentalTreatmentDlg *)pWnd)->OnTimeChange();
} */
/*static void _OnTimeSetfocusFnc(CWnd *pWnd){
	((CHMSDentalTreatmentDlg *)pWnd)->OnTimeSetfocus();} */ 
/*static void _OnTimeKillfocusFnc(CWnd *pWnd){
	((CHMSDentalTreatmentDlg *)pWnd)->OnTimeKillfocus();
} */
static int _OnTimeCheckValueFnc(CWnd *pWnd){
	return ((CHMSDentalTreatmentDlg *)pWnd)->OnTimeCheckValue();
} 
/*static void _OnExtractionsChangeFnc(CWnd *pWnd){
	((CHMSDentalTreatmentDlg *)pWnd)->OnExtractionsChange();
} */
/*static void _OnExtractionsSetfocusFnc(CWnd *pWnd){
	((CHMSDentalTreatmentDlg *)pWnd)->OnExtractionsSetfocus();} */ 
/*static void _OnExtractionsKillfocusFnc(CWnd *pWnd){
	((CHMSDentalTreatmentDlg *)pWnd)->OnExtractionsKillfocus();
} */
static int _OnExtractionsCheckValueFnc(CWnd *pWnd){
	return ((CHMSDentalTreatmentDlg *)pWnd)->OnExtractionsCheckValue();
} 
/*static void _OnPreserveTreatmentChangeFnc(CWnd *pWnd){
	((CHMSDentalTreatmentDlg *)pWnd)->OnPreserveTreatmentChange();
} */
/*static void _OnPreserveTreatmentSetfocusFnc(CWnd *pWnd){
	((CHMSDentalTreatmentDlg *)pWnd)->OnPreserveTreatmentSetfocus();} */ 
/*static void _OnPreserveTreatmentKillfocusFnc(CWnd *pWnd){
	((CHMSDentalTreatmentDlg *)pWnd)->OnPreserveTreatmentKillfocus();
} */
static int _OnPreserveTreatmentCheckValueFnc(CWnd *pWnd){
	return ((CHMSDentalTreatmentDlg *)pWnd)->OnPreserveTreatmentCheckValue();
} 
/*static void _OnCuredTreatmentChangeFnc(CWnd *pWnd){
	((CHMSDentalTreatmentDlg *)pWnd)->OnCuredTreatmentChange();
} */
/*static void _OnCuredTreatmentSetfocusFnc(CWnd *pWnd){
	((CHMSDentalTreatmentDlg *)pWnd)->OnCuredTreatmentSetfocus();} */ 
/*static void _OnCuredTreatmentKillfocusFnc(CWnd *pWnd){
	((CHMSDentalTreatmentDlg *)pWnd)->OnCuredTreatmentKillfocus();
} */
static int _OnCuredTreatmentCheckValueFnc(CWnd *pWnd){
	return ((CHMSDentalTreatmentDlg *)pWnd)->OnCuredTreatmentCheckValue();
} 
static void _OnCuredTreatmentListSelectFnc(CWnd *pWnd){
	CHMSDentalTreatmentDlg *pVw = (CHMSDentalTreatmentDlg *)pWnd;
	pVw->OnCuredTreatmentListSelect();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSDentalTreatmentDlg *pVw = (CHMSDentalTreatmentDlg *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CHMSDentalTreatmentDlg *pVw = (CHMSDentalTreatmentDlg *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSDentalTreatmentDlg *pVw = (CHMSDentalTreatmentDlg *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSDentalTreatmentDlg *pVw = (CHMSDentalTreatmentDlg *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSDentalTreatmentDlg *pVw = (CHMSDentalTreatmentDlg *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSDentalTreatmentDlgFnc(CWnd *pWnd){
	 return ((CHMSDentalTreatmentDlg*)pWnd)->OnAddHMSDentalTreatmentDlg();
} 
static int _OnEditHMSDentalTreatmentDlgFnc(CWnd *pWnd){
	 return ((CHMSDentalTreatmentDlg*)pWnd)->OnEditHMSDentalTreatmentDlg();
} 
static int _OnDeleteHMSDentalTreatmentDlgFnc(CWnd *pWnd){
	 return ((CHMSDentalTreatmentDlg*)pWnd)->OnDeleteHMSDentalTreatmentDlg();
} 
static int _OnSaveHMSDentalTreatmentDlgFnc(CWnd *pWnd){
	 return ((CHMSDentalTreatmentDlg*)pWnd)->OnSaveHMSDentalTreatmentDlg();
} 
static int _OnCancelHMSDentalTreatmentDlgFnc(CWnd *pWnd){
	 return ((CHMSDentalTreatmentDlg*)pWnd)->OnCancelHMSDentalTreatmentDlg();
} 
CHMSDentalTreatmentDlg::CHMSDentalTreatmentDlg(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CHMSDentalTreatmentDlg::~CHMSDentalTreatmentDlg(){
}
void CHMSDentalTreatmentDlg::OnCreateComponents(){
	m_wndTeeth.Create(this, _T("Teeth"), 5, 5, 605, 385);
	m_wndTeethList.Create(this,10, 30, 600, 260); 
	m_wndDocumentNoLabel.Create(this, _T("Document No"), 10, 265, 130, 290);
	m_wndDocumentNo.Create(this,135, 265, 295, 290); 
	m_wndEnterDateLabel.Create(this, _T("Enter Date"), 315, 265, 435, 290);
	m_wndEnterDate.Create(this,440, 265, 600, 290); 
	m_wndNewLabel.Create(this, _T("New"), 10, 295, 130, 320);
	m_wndNew.Create(this,135, 295, 295, 320); 
	m_wndTimeLabel.Create(this, _T("Treatment Time"), 315, 295, 435, 320);
	m_wndTime.Create(this,440, 295, 600, 320); 
	m_wndPreserveTreatmentLabel.Create(this, _T("Preserve Treatment"), 10, 325, 130, 350);
	m_wndPreserveTreatment.Create(this,135, 325, 295, 350); 
	m_wndDentureLabel.Create(this, _T("Denture"), 315, 325, 435, 350);
	m_wndDenture.Create(this,440, 325, 600, 350); 
	m_wndExtractionsLabel.Create(this, _T("Extractions"), 10, 355, 130, 380);
	m_wndExtractions.Create(this,135, 355, 295, 380); 
	m_wndCuredTreatmentLabel.Create(this, _T("Cured Treatment"), 315, 355, 435, 380);
	m_wndCuredTreatment.Create(this,440, 355, 555, 380); 
	m_wndCuredTreatmentList.Create(this, _T("@"), 560, 355, 600, 380);
	m_wndAdd.Create(this, _T("Add"), 180, 390, 260, 415);
	m_wndEdit.Create(this, _T("Edit"), 265, 390, 345, 415);
	m_wndSave.Create(this, _T("Save"), 350, 390, 430, 415);
	m_wndCancel.Create(this, _T("Cancel"), 435, 390, 515, 415);
	m_wndClose.Create(this, _T("Close"), 520, 390, 600, 415);

}
void CHMSDentalTreatmentDlg::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndDocumentNo.SetLimitText(35);
	m_wndDocumentNo.SetCheckValue(true);
	m_wndDocumentNo.SetReadOnly(TRUE);
	//m_wndEnterDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndEnterDate.SetCheckValue(true);
	m_wndNew.SetLimitText(10);
	m_wndNew.SetCheckValue(true);
	m_wndDenture.SetLimitText(10);
	m_wndDenture.SetCheckValue(true);
	m_wndTime.SetLimitText(10);
	m_wndTime.SetCheckValue(true);
	m_wndExtractions.SetLimitText(10);
	m_wndExtractions.SetCheckValue(true);
	m_wndPreserveTreatment.SetLimitText(10);
	m_wndPreserveTreatment.SetCheckValue(true);
	m_wndCuredTreatment.SetLimitText(10);
	m_wndCuredTreatment.SetCheckValue(true);

	m_tbl_dental.SetTableName(_T("hms_dentaltreatment"));
	m_tbl_dental.AddField(_T("hdt_createdby"), dfText, 15);
	m_tbl_dental.AddField(_T("hdt_createddate"), dfDateTime);
	m_tbl_dental.AddField(_T("hdt_updatedby"), dfText, 15);
	m_tbl_dental.AddField(_T("hdt_updateddate"), dfDateTime);
	m_tbl_dental.AddField(_T("hdt_docno"), dfLong);
	m_tbl_dental.AddField(_T("hdt_new"), dfLong);
	m_tbl_dental.AddField(_T("hdt_time"), dfLong);
	m_tbl_dental.AddField(_T("hdt_preservetreatment"), dfLong);
	m_tbl_dental.AddField(_T("hdt_denture"), dfLong);
	m_tbl_dental.AddField(_T("hdt_extraction"), dfLong);
	m_tbl_dental.AddField(_T("hdt_curedtreatment"), dfLong);
	m_tbl_dental.AddField(_T("hdt_date"), dfDateTime);
	
	m_wndTeethList.InsertColumn(0, _T("ID"), CFMT_NUMBER, 80);
	m_wndTeethList.InsertColumn(1, _T("DocNo"), CFMT_NUMBER, 80);
	m_wndTeethList.InsertColumn(2, _T("Name"), CFMT_TEXT, 240);
	m_wndTeethList.InsertColumn(3, _T("Enter Date"), CFMT_DATETIME, 160);
	MoveWindow(0, 0, GetWidth(), GetHeight());
}
void CHMSDentalTreatmentDlg::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndTeethList.SetEvent(WE_SELCHANGE, _OnTeethListSelectChangeFnc);
	m_wndTeethList.SetEvent(WE_LOADDATA, _OnTeethListLoadDataFnc);
	m_wndTeethList.SetEvent(WE_DBLCLICK, _OnTeethListDblClickFnc);
	m_wndTeethList.AddEvent(1, _T("Delete"), _OnTeethListDeleteItemFnc, 0, VK_DELETE, 0);
	//m_wndDocumentNo.SetEvent(WE_CHANGE, _OnDocumentNoChangeFnc);
	//m_wndDocumentNo.SetEvent(WE_SETFOCUS, _OnDocumentNoSetfocusFnc);
	//m_wndDocumentNo.SetEvent(WE_KILLFOCUS, _OnDocumentNoKillfocusFnc);
	m_wndDocumentNo.SetEvent(WE_CHECKVALUE, _OnDocumentNoCheckValueFnc);
	//m_wndEnterDate.SetEvent(WE_CHANGE, _OnEnterDateChangeFnc);
	//m_wndEnterDate.SetEvent(WE_SETFOCUS, _OnEnterDateSetfocusFnc);
	//m_wndEnterDate.SetEvent(WE_KILLFOCUS, _OnEnterDateKillfocusFnc);
	m_wndEnterDate.SetEvent(WE_CHECKVALUE, _OnEnterDateCheckValueFnc);
	//m_wndNew.SetEvent(WE_CHANGE, _OnNewChangeFnc);
	//m_wndNew.SetEvent(WE_SETFOCUS, _OnNewSetfocusFnc);
	//m_wndNew.SetEvent(WE_KILLFOCUS, _OnNewKillfocusFnc);
	m_wndNew.SetEvent(WE_CHECKVALUE, _OnNewCheckValueFnc);
	//m_wndDenture.SetEvent(WE_CHANGE, _OnDentureChangeFnc);
	//m_wndDenture.SetEvent(WE_SETFOCUS, _OnDentureSetfocusFnc);
	//m_wndDenture.SetEvent(WE_KILLFOCUS, _OnDentureKillfocusFnc);
	m_wndDenture.SetEvent(WE_CHECKVALUE, _OnDentureCheckValueFnc);
	//m_wndTime.SetEvent(WE_CHANGE, _OnTimeChangeFnc);
	//m_wndTime.SetEvent(WE_SETFOCUS, _OnTimeSetfocusFnc);
	//m_wndTime.SetEvent(WE_KILLFOCUS, _OnTimeKillfocusFnc);
	m_wndTime.SetEvent(WE_CHECKVALUE, _OnTimeCheckValueFnc);
	//m_wndExtractions.SetEvent(WE_CHANGE, _OnExtractionsChangeFnc);
	//m_wndExtractions.SetEvent(WE_SETFOCUS, _OnExtractionsSetfocusFnc);
	//m_wndExtractions.SetEvent(WE_KILLFOCUS, _OnExtractionsKillfocusFnc);
	m_wndExtractions.SetEvent(WE_CHECKVALUE, _OnExtractionsCheckValueFnc);
	//m_wndPreserveTreatment.SetEvent(WE_CHANGE, _OnPreserveTreatmentChangeFnc);
	//m_wndPreserveTreatment.SetEvent(WE_SETFOCUS, _OnPreserveTreatmentSetfocusFnc);
	//m_wndPreserveTreatment.SetEvent(WE_KILLFOCUS, _OnPreserveTreatmentKillfocusFnc);
	m_wndPreserveTreatment.SetEvent(WE_CHECKVALUE, _OnPreserveTreatmentCheckValueFnc);
	//m_wndCuredTreatment.SetEvent(WE_CHANGE, _OnCuredTreatmentChangeFnc);
	//m_wndCuredTreatment.SetEvent(WE_SETFOCUS, _OnCuredTreatmentSetfocusFnc);
	//m_wndCuredTreatment.SetEvent(WE_KILLFOCUS, _OnCuredTreatmentKillfocusFnc);
	m_wndCuredTreatment.SetEvent(WE_CHECKVALUE, _OnCuredTreatmentCheckValueFnc);
	m_wndCuredTreatmentList.SetEvent(WE_CLICK, _OnCuredTreatmentListSelectFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_szEnterDate = pMF->GetSysDateTime();
	OnTeethListLoadData();

}
void CHMSDentalTreatmentDlg::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndDocumentNo.GetDlgCtrlID(), m_nDocNo);
	DDX_TextEx(pDX, m_wndEnterDate.GetDlgCtrlID(), m_szEnterDate);
	DDX_Text(pDX, m_wndNew.GetDlgCtrlID(), m_nNew);
	DDX_Text(pDX, m_wndDenture.GetDlgCtrlID(), m_nDenture);
	DDX_Text(pDX, m_wndTime.GetDlgCtrlID(), m_nTime);
	DDX_Text(pDX, m_wndExtractions.GetDlgCtrlID(), m_nExtractions);
	DDX_Text(pDX, m_wndPreserveTreatment.GetDlgCtrlID(), m_nPreserveTreatment);
	DDX_Text(pDX, m_wndCuredTreatment.GetDlgCtrlID(), m_nCuredTreatment);

}
void CHMSDentalTreatmentDlg::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM hms_dentaltreatment WHERE hdt_docno = %d AND hdt_dentaltreatment_id = %d"), m_nDocNo, m_nIdx);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		m_nDocNo;
		m_szEnterDate = rs.GetValue(_T("hdt_date"));
		m_nNew = ToLong(rs.GetValue(_T("hdt_new")));
		m_nTime = ToLong(rs.GetValue(_T("hdt_time")));
		m_nPreserveTreatment = ToLong(rs.GetValue(_T("hdt_preservetreatment")));
		m_nDenture = ToLong(rs.GetValue(_T("hdt_denture")));
		m_nExtractions = ToLong(rs.GetValue(_T("hdt_extraction")));
		m_nCuredTreatment = ToLong(rs.GetValue(_T("hdt_curedtreatment")));
		
		SetMode(VM_EDIT);
	}
	else
		SetMode(VM_ADD);

}
void CHMSDentalTreatmentDlg::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_tbl_dental.SetValue(_T("hdt_createdby"), pMF->GetCurrentUser());
	m_tbl_dental.SetValue(_T("hdt_createddate"), pMF->GetSysDateTime());
	m_tbl_dental.SetValue(_T("hdt_updatedby"), pMF->GetCurrentUser());
	m_tbl_dental.SetValue(_T("hdt_updateddate"), pMF->GetSysDateTime());
	m_tbl_dental.SetValue(_T("hdt_docno"), m_nDocNo);
	m_tbl_dental.SetValue(_T("hdt_date"), m_szEnterDate);
	m_tbl_dental.SetValue(_T("hdt_new"), m_nNew);
	m_tbl_dental.SetValue(_T("hdt_time"), m_nTime);
	m_tbl_dental.SetValue(_T("hdt_preservetreatment"), m_nPreserveTreatment);
	m_tbl_dental.SetValue(_T("hdt_denture"), m_nDenture);
	m_tbl_dental.SetValue(_T("hdt_extraction"), m_nExtractions);
	m_tbl_dental.SetValue(_T("hdt_curedtreatment"), m_nCuredTreatment);

}
void CHMSDentalTreatmentDlg::SetDefaultValues(){

	//m_szDocumentNo.Empty();
	m_szEnterDate.Empty();
	m_nNew=0;
	m_nDenture=0;
	m_nTime=0;
	m_nExtractions=0;
	m_nPreserveTreatment=0;
	m_nCuredTreatment=0;

}
int CHMSDentalTreatmentDlg::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 1, 3, 4, -1);
 			SetDefaultValues();
			m_wndEnterDate.SetFocus();
			m_szEnterDate = pMF->GetSysDateTime();
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 2, 3, 4, -1);
			m_wndEnterDate.SetFocus();
 			break;
 		case VM_VIEW: 
 			EnableControls(FALSE);
 			EnableButtons(FALSE, 3, 4, -1);
 			break;
 		case VM_NONE:
 			EnableControls(FALSE);
 			EnableButtons(TRUE, 1, 5, -1);
 			SetDefaultValues();
 			break;
 		};
 		UpdateData(FALSE);
 		return nOldMode;
}
void CHMSDentalTreatmentDlg::OnTeethListDblClick(){
	
} 
void CHMSDentalTreatmentDlg::OnTeethListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(nNewItem >= 0)
	{
		m_nIdx = str2int(m_wndTeethList.GetItemText(nNewItem, 0));
		UpdateData(FALSE);
	}
	GetDataToScreen();
	SetMode(VM_VIEW);
} 
int CHMSDentalTreatmentDlg::OnTeethListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnDeleteHMSDentalTreatmentDlg();
	 return 0;
} 
long CHMSDentalTreatmentDlg::OnTeethListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndTeethList.BeginLoad(); 
	int nCount = 0;
	
	szSQL.Format(_T("SELECT hdt_dentaltreatment_id AS id, hdt_docno AS docno, get_patientname(hdt_docno) AS name, hdt_date AS datetime ") \
		_T(" FROM hms_dentaltreatment WHERE hdt_docno = %d ORDER BY hdt_date, hdt_dentaltreatment_id"), m_nDocNo);
	
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){
		m_wndTeethList.AddItems(
		rs.GetValue(_T("id")), 
		rs.GetValue(_T("docno")), 
		rs.GetValue(_T("name")), 
		rs.GetValue(_T("datetime")),
		NULL);
		rs.MoveNext();
	}
	m_wndTeethList.EndLoad();
	SetMode(VM_NONE);
	return nCount;
}
/*void CHMSDentalTreatmentDlg::OnDocumentNoChange(){
	
} */
/*void CHMSDentalTreatmentDlg::OnDocumentNoSetfocus(){
	
} */
/*void CHMSDentalTreatmentDlg::OnDocumentNoKillfocus(){
	
} */
int CHMSDentalTreatmentDlg::OnDocumentNoCheckValue(){
	return 0;
} 
/*void CHMSDentalTreatmentDlg::OnEnterDateChange(){
	
} */
/*void CHMSDentalTreatmentDlg::OnEnterDateSetfocus(){
	
} */
/*void CHMSDentalTreatmentDlg::OnEnterDateKillfocus(){
	
} */
int CHMSDentalTreatmentDlg::OnEnterDateCheckValue(){
	return 0;
} 
/*void CHMSDentalTreatmentDlg::OnNewChange(){
	
} */
/*void CHMSDentalTreatmentDlg::OnNewSetfocus(){
	
} */
/*void CHMSDentalTreatmentDlg::OnNewKillfocus(){
	
} */
int CHMSDentalTreatmentDlg::OnNewCheckValue(){
	return 0;
} 
/*void CHMSDentalTreatmentDlg::OnDentureChange(){
	
} */
/*void CHMSDentalTreatmentDlg::OnDentureSetfocus(){
	
} */
/*void CHMSDentalTreatmentDlg::OnDentureKillfocus(){
	
} */
int CHMSDentalTreatmentDlg::OnDentureCheckValue(){
	return 0;
} 
/*void CHMSDentalTreatmentDlg::OnTimeChange(){
	
} */
/*void CHMSDentalTreatmentDlg::OnTimeSetfocus(){
	
} */
/*void CHMSDentalTreatmentDlg::OnTimeKillfocus(){
	
} */
int CHMSDentalTreatmentDlg::OnTimeCheckValue(){
	return 0;
} 
/*void CHMSDentalTreatmentDlg::OnExtractionsChange(){
	
} */
/*void CHMSDentalTreatmentDlg::OnExtractionsSetfocus(){
	
} */
/*void CHMSDentalTreatmentDlg::OnExtractionsKillfocus(){
	
} */
int CHMSDentalTreatmentDlg::OnExtractionsCheckValue(){
	return 0;
} 
/*void CHMSDentalTreatmentDlg::OnPreserveTreatmentChange(){
	
} */
/*void CHMSDentalTreatmentDlg::OnPreserveTreatmentSetfocus(){
	
} */
/*void CHMSDentalTreatmentDlg::OnPreserveTreatmentKillfocus(){
	
} */
int CHMSDentalTreatmentDlg::OnPreserveTreatmentCheckValue(){
	return 0;
} 
/*void CHMSDentalTreatmentDlg::OnCuredTreatmentChange(){
	
} */
/*void CHMSDentalTreatmentDlg::OnCuredTreatmentSetfocus(){
	
} */
/*void CHMSDentalTreatmentDlg::OnCuredTreatmentKillfocus(){
	
} */
#include "HMSCuredTreatmentDlg.h"
int CHMSDentalTreatmentDlg::OnCuredTreatmentCheckValue(){
	//UpdateData(true);
	//if (m_nCuredTreatment > 0)
	//{
	//	CHMSCuredTreatmentDlg dlg(this);
	//	dlg.m_nDocNo = m_nDocNo;
	//	dlg.m_nID = m_nIdx;
	//	dlg.m_szEnterDate = m_szEnterDate;
	//	dlg.DoModal();
	//}
	return 0;
}

void CHMSDentalTreatmentDlg::OnCuredTreatmentListSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CHMSCuredTreatmentDlg dlg(this);
	dlg.m_nDocNo = m_nDocNo;
	dlg.m_nID = m_nIdx;
	dlg.m_szEnterDate = m_szEnterDate;
	dlg.DoModal();

	
} 
void CHMSDentalTreatmentDlg::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnAddHMSDentalTreatmentDlg();
} 
void CHMSDentalTreatmentDlg::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnEditHMSDentalTreatmentDlg();
} 
void CHMSDentalTreatmentDlg::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveHMSDentalTreatmentDlg();
} 
void CHMSDentalTreatmentDlg::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancelHMSDentalTreatmentDlg();
} 
void CHMSDentalTreatmentDlg::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CHMSDentalTreatmentDlg::OnAddHMSDentalTreatmentDlg(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSDentalTreatmentDlg::OnEditHMSDentalTreatmentDlg(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSDentalTreatmentDlg::OnDeleteHMSDentalTreatmentDlg(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
	CHMSCuredTreatmentDlg dlg(this);
	dlg.m_nDocNo = m_nDocNo;
	dlg.m_nID = m_nIdx;
	dlg.OnDeleteHMSCuredTreatmentDlg();
 	szSQL.Format(_T("DELETE FROM hms_dentaltreatment WHERE hdt_docno = %ld AND hdt_dentaltreatment_id = %ld"), m_nDocNo, m_nIdx);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
 		SetMode(VM_NONE);
 		OnTeethListLoadData();
 	}
	return 0;
}
int CHMSDentalTreatmentDlg::OnSaveHMSDentalTreatmentDlg(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
 	CString szSQL;
 	if(GetMode() == VM_ADD){
 		szSQL = m_tbl_dental.GetInsertSQL();

 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
 		szWhere.Format(_T(" WHERE hdt_docno = %d AND hdt_dentaltreatment_id = %d"), m_nDocNo, m_nIdx);
 		szSQL = m_tbl_dental.GetUpdateSQL(_T("hdt_createdby,hdt_createddate, hdt_docno, hdt_dentaltreatment_id"));
 		szSQL += szWhere;
 	}
 _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{	
		if (GetMode() == VM_ADD)
		{
			szSQL.Format(_T("SELECT max(hdt_dentaltreatment_id) FROM hms_dentaltreatment WHERE hdt_docno = %ld"), m_nDocNo);
			rs.ExecSQL(szSQL);
			m_nIdx = rs.GetIntValue();
		}

			CHMSCuredTreatmentDlg dlg(this);
			dlg.m_nDocNo = m_nDocNo;
			dlg.m_nID = m_nIdx;
			dlg.m_szEnterDate = m_szEnterDate;
			dlg.DoModal();

 		OnTeethListLoadData();
 		SetMode(VM_NONE);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSDentalTreatmentDlg::OnCancelHMSDentalTreatmentDlg(){
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
int CHMSDentalTreatmentDlg::OnHMSDentalTreatmentDlgListLoadData(){
	return 0;
}
