#include "HMSTreatmentHistory.h"
#include "MainFrm.h"
/*static void _OnLastNameChangeFnc(CWnd *pWnd){
	((CHMSTreatmentHistoryDialog *)pWnd)->OnLastNameChange();
} */
/*static void _OnLastNameSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentHistoryDialog *)pWnd)->OnLastNameSetfocus();} */ 
/*static void _OnLastNameKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentHistoryDialog *)pWnd)->OnLastNameKillfocus();
} */
static int _OnLastNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentHistoryDialog *)pWnd)->OnLastNameCheckValue();
} 
/*static void _OnMidNameChangeFnc(CWnd *pWnd){
	((CHMSTreatmentHistoryDialog *)pWnd)->OnMidNameChange();
} */
/*static void _OnMidNameSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentHistoryDialog *)pWnd)->OnMidNameSetfocus();} */ 
/*static void _OnMidNameKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentHistoryDialog *)pWnd)->OnMidNameKillfocus();
} */
static int _OnMidNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentHistoryDialog *)pWnd)->OnMidNameCheckValue();
} 
/*static void _OnFirstNameChangeFnc(CWnd *pWnd){
	((CHMSTreatmentHistoryDialog *)pWnd)->OnFirstNameChange();
} */
/*static void _OnFirstNameSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentHistoryDialog *)pWnd)->OnFirstNameSetfocus();} */ 
/*static void _OnFirstNameKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentHistoryDialog *)pWnd)->OnFirstNameKillfocus();
} */
static int _OnFirstNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentHistoryDialog *)pWnd)->OnFirstNameCheckValue();
} 
/*static void _OnYOBChangeFnc(CWnd *pWnd){
	((CHMSTreatmentHistoryDialog *)pWnd)->OnYOBChange();
} */
/*static void _OnYOBSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentHistoryDialog *)pWnd)->OnYOBSetfocus();} */ 
/*static void _OnYOBKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentHistoryDialog *)pWnd)->OnYOBKillfocus();
} */
static int _OnYOBCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentHistoryDialog *)pWnd)->OnYOBCheckValue();
} 
static void _OnAddressSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSTreatmentHistoryDialog* )pWnd)->OnAddressSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnAddressSelendokFnc(CWnd *pWnd){
	((CHMSTreatmentHistoryDialog *)pWnd)->OnAddressSelendok();
}
/*static void _OnAddressSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentHistoryDialog *)pWnd)->OnAddressKillfocus();
}*/
/*static void _OnAddressKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentHistoryDialog *)pWnd)->OnAddressKillfocus();
}*/
static long _OnAddressLoadDataFnc(CWnd *pWnd){
	return ((CHMSTreatmentHistoryDialog *)pWnd)->OnAddressLoadData();
}
/*static void _OnAddressAddNewFnc(CWnd *pWnd){
	((CHMSTreatmentHistoryDialog *)pWnd)->OnAddressAddNew();
}*/
static void _OnSearchSelectFnc(CWnd *pWnd){
	CHMSTreatmentHistoryDialog *pVw = (CHMSTreatmentHistoryDialog *)pWnd;
	pVw->OnSearchSelect();
} 
static long _OnListPatientLoadDataFnc(CWnd *pWnd){
	return ((CHMSTreatmentHistoryDialog*)pWnd)->OnListPatientLoadData();
} 
static void _OnListPatientDblClickFnc(CWnd *pWnd){
	((CHMSTreatmentHistoryDialog*)pWnd)->OnListPatientDblClick();
} 
static void _OnListPatientSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSTreatmentHistoryDialog*)pWnd)->OnListPatientSelectChange(nOldItem, nNewItem);
} 
static int _OnListPatientDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSTreatmentHistoryDialog*)pWnd)->OnListPatientDeleteItem();
} 
static long _OnListDocumentLoadDataFnc(CWnd *pWnd){
	return ((CHMSTreatmentHistoryDialog*)pWnd)->OnListDocumentLoadData();
} 
static void _OnListDocumentDblClickFnc(CWnd *pWnd){
	((CHMSTreatmentHistoryDialog*)pWnd)->OnListDocumentDblClick();
} 
static void _OnListDocumentSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSTreatmentHistoryDialog*)pWnd)->OnListDocumentSelectChange(nOldItem, nNewItem);
} 
static int _OnListDocumentDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSTreatmentHistoryDialog*)pWnd)->OnListDocumentDeleteItem();
} 
/*static void _OnIDNoChangeFnc(CWnd *pWnd){
	((CHMSTreatmentHistoryDialog *)pWnd)->OnIDNoChange();
} */
/*static void _OnIDNoSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentHistoryDialog *)pWnd)->OnIDNoSetfocus();} */ 
/*static void _OnIDNoKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentHistoryDialog *)pWnd)->OnIDNoKillfocus();
} */
static int _OnIDNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentHistoryDialog *)pWnd)->OnIDNoCheckValue();
} 
/*static void _OnTelChangeFnc(CWnd *pWnd){
	((CHMSTreatmentHistoryDialog *)pWnd)->OnTelChange();
} */
/*static void _OnTelSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentHistoryDialog *)pWnd)->OnTelSetfocus();} */ 
/*static void _OnTelKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentHistoryDialog *)pWnd)->OnTelKillfocus();
} */
static int _OnTelCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentHistoryDialog *)pWnd)->OnTelCheckValue();
} 										   
static int _OnAddHMSTreatmentHistoryDialogFnc(CWnd *pWnd){
	 return ((CHMSTreatmentHistoryDialog*)pWnd)->OnAddHMSTreatmentHistoryDialog();
} 
static int _OnEditHMSTreatmentHistoryDialogFnc(CWnd *pWnd){
	 return ((CHMSTreatmentHistoryDialog*)pWnd)->OnEditHMSTreatmentHistoryDialog();
} 
static int _OnDeleteHMSTreatmentHistoryDialogFnc(CWnd *pWnd){
	 return ((CHMSTreatmentHistoryDialog*)pWnd)->OnDeleteHMSTreatmentHistoryDialog();
} 
static int _OnSaveHMSTreatmentHistoryDialogFnc(CWnd *pWnd){
	 return ((CHMSTreatmentHistoryDialog*)pWnd)->OnSaveHMSTreatmentHistoryDialog();
} 
static int _OnCancelHMSTreatmentHistoryDialogFnc(CWnd *pWnd){
	 return ((CHMSTreatmentHistoryDialog*)pWnd)->OnCancelHMSTreatmentHistoryDialog();
} 
CHMSTreatmentHistoryDialog::CHMSTreatmentHistoryDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 805;
	m_nDlgHeight = 605;
	SetDefaultValues();
}
CHMSTreatmentHistoryDialog::~CHMSTreatmentHistoryDialog(){
}
void CHMSTreatmentHistoryDialog::OnCreateComponents(){
	m_wndInformationSearch.Create(this, _T("Information Search"), 5, 5, 705, 120);
	m_wndGroupPatient.Create(this, _T("Patient List"), 5, 125, 705, 375);
	m_wndGroupDocument.Create(this, _T("Treatment Document List"), 5, 380, 705, 560);
	m_wndLastNameLabel.Create(this, _T("First Name"), 10, 30, 95, 55);
	m_wndLastName.Create(this,100, 30, 180, 55); 
	m_wndMidNameLabel.Create(this, _T("Mid Name"), 185, 30, 270, 55);
	m_wndMidName.Create(this,275, 30, 355, 55); 
	m_wndFirstNameLabel.Create(this, _T("Last Name"), 360, 30, 445, 55);
	m_wndFirstName.Create(this,450, 30, 530, 55); 
	m_wndYOBLabel.Create(this, _T("YOB"), 535, 30, 615, 55);
	m_wndYOB.Create(this,620, 30, 700, 55); 
	m_wndAddressLabel.Create(this, _T("Address"), 10, 60, 95, 85);
	m_wndAddress.Create(this,100, 60, 700, 85); 
	m_wndIDNoLabel.Create(this, _T("ID No"), 10, 90, 95, 115);
	m_wndIDNo.Create(this,100, 90, 355, 115); 
	m_wndTelLabel.Create(this, _T("Tel"), 360, 90, 445, 115);
	m_wndTel.Create(this,450, 90, 675, 115); 
	m_wndSearch.Create(this, _T("@"), 680, 90, 700, 115);
	m_wndListPatient.Create(this,10, 150, 700, 370); 
	m_wndListDocument.Create(this,10, 405, 700, 555); 


}
void CHMSTreatmentHistoryDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndLastName.SetLimitText(15);
	m_wndLastName.SetInitCap(true);
	//m_wndLastName.SetCheckValue(true);	
	m_wndMidName.SetLimitText(15);
	//m_wndMidName.SetCheckValue(true);
	m_wndMidName.SetInitCap(true);
	m_wndFirstName.SetLimitText(15);
	//m_wndFirstName.SetCheckValue(true);
	m_wndFirstName.SetInitCap(true);
	//m_wndAddress.SetCheckValue(true);
	m_wndAddress.LimitText(35);
	m_wndYOB.SetCheckValue(false);


	m_wndAddress.InsertColumn(0, _T("ID"), CFMT_TEXT, 70);
	m_wndAddress.InsertColumn(1, _T("Name"), CFMT_TEXT, 300);
	m_wndAddress.InsertColumn(2, _T("Code"), CFMT_TEXT, 100);
	m_wndAddress.SetColumnKey(2);

	m_wndListPatient.InsertColumn(0, _T("PatientNo"), CFMT_NUMBER, 60);
	m_wndListPatient.InsertColumn(1, _T("Patient Name"), CFMT_TEXT, 180);
	m_wndListPatient.InsertColumn(2, _T("Age"), CFMT_TEXT, 50);
	m_wndListPatient.InsertColumn(3, _T("Sex"), CFMT_TEXT, 50);
	m_wndListPatient.InsertColumn(4, _T("Ethnic"), CFMT_TEXT, 70);
	m_wndListPatient.InsertColumn(5, _T("Address"), CFMT_TEXT, 270);
	m_wndListPatient.InsertColumn(6, _T("Birth Date"), CFMT_TEXT, 80);
	m_wndListPatient.InsertColumn(7, _T("ID No"), CFMT_TEXT, 95);
	m_wndListPatient.InsertColumn(8, _T("Phone"), CFMT_TEXT, 95);

	m_wndListDocument.InsertColumn(0, _T("Stt"), CFMT_NUMBER, 30);
	m_wndListDocument.InsertColumn(1, _T("Admit Date"), CFMT_DATE, 80);
	m_wndListDocument.InsertColumn(2, _T("Document No"), CFMT_NUMBER, 80);
	m_wndListDocument.InsertColumn(3, _T("Exam Room"), CFMT_TEXT, 150);	
	m_wndListDocument.InsertColumn(4, _T("Exam Type"), CFMT_TEXT, 80);
	m_wndListDocument.InsertColumn(5, _T("Object"), CFMT_TEXT, 80);
	m_wndListDocument.InsertColumn(6, _T("Card No"), CFMT_TEXT, 180);
	
	SetMode(VM_EDIT);

}
void CHMSTreatmentHistoryDialog::OnSetWindowEvents(){
	//m_wndLastName.SetEvent(WE_CHANGE, _OnLastNameChangeFnc);
	//m_wndLastName.SetEvent(WE_SETFOCUS, _OnLastNameSetfocusFnc);
	//m_wndLastName.SetEvent(WE_KILLFOCUS, _OnLastNameKillfocusFnc);
	m_wndLastName.SetEvent(WE_CHECKVALUE, _OnLastNameCheckValueFnc);
	//m_wndMidName.SetEvent(WE_CHANGE, _OnMidNameChangeFnc);
	//m_wndMidName.SetEvent(WE_SETFOCUS, _OnMidNameSetfocusFnc);
	//m_wndMidName.SetEvent(WE_KILLFOCUS, _OnMidNameKillfocusFnc);
	m_wndMidName.SetEvent(WE_CHECKVALUE, _OnMidNameCheckValueFnc);
	//m_wndFirstName.SetEvent(WE_CHANGE, _OnFirstNameChangeFnc);
	//m_wndFirstName.SetEvent(WE_SETFOCUS, _OnFirstNameSetfocusFnc);
	//m_wndFirstName.SetEvent(WE_KILLFOCUS, _OnFirstNameKillfocusFnc);
	m_wndFirstName.SetEvent(WE_CHECKVALUE, _OnFirstNameCheckValueFnc);
	//m_wndYOB.SetEvent(WE_CHANGE, _OnYOBChangeFnc);
	//m_wndYOB.SetEvent(WE_SETFOCUS, _OnYOBSetfocusFnc);
	//m_wndYOB.SetEvent(WE_KILLFOCUS, _OnYOBKillfocusFnc);
	m_wndYOB.SetEvent(WE_CHECKVALUE, _OnYOBCheckValueFnc);
	m_wndAddress.SetEvent(WE_SELENDOK, _OnAddressSelendokFnc);
	//m_wndAddress.SetEvent(WE_SETFOCUS, _OnAddressSetfocusFnc);
	//m_wndAddress.SetEvent(WE_KILLFOCUS, _OnAddressKillfocusFnc);
	m_wndAddress.SetEvent(WE_SELCHANGE, _OnAddressSelectChangeFnc);
	m_wndAddress.SetEvent(WE_LOADDATA, _OnAddressLoadDataFnc);
	//m_wndAddress.SetEvent(WE_ADDNEW, _OnAddressAddNewFnc);
	m_wndSearch.SetEvent(WE_CLICK, _OnSearchSelectFnc);
	m_wndListPatient.SetEvent(WE_SELCHANGE, _OnListPatientSelectChangeFnc);
	m_wndListPatient.SetEvent(WE_LOADDATA, _OnListPatientLoadDataFnc);
	m_wndListPatient.SetEvent(WE_DBLCLICK, _OnListPatientDblClickFnc);
	m_wndListPatient.AddEvent(1, _T("Delete"), _OnListPatientDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndListDocument.SetEvent(WE_SELCHANGE, _OnListDocumentSelectChangeFnc);
	m_wndListDocument.SetEvent(WE_LOADDATA, _OnListDocumentLoadDataFnc);
	m_wndListDocument.SetEvent(WE_DBLCLICK, _OnListDocumentDblClickFnc);
	m_wndListDocument.AddEvent(1, _T("Show patient document"), _OnListDocumentDeleteItemFnc, 0, VK_DELETE, 0);
	//m_wndIDNo.SetEvent(WE_CHANGE, _OnIDNoChangeFnc);
	//m_wndIDNo.SetEvent(WE_SETFOCUS, _OnIDNoSetfocusFnc);
	//m_wndIDNo.SetEvent(WE_KILLFOCUS, _OnIDNoKillfocusFnc);
	m_wndIDNo.SetEvent(WE_CHECKVALUE, _OnIDNoCheckValueFnc);
	//m_wndTel.SetEvent(WE_CHANGE, _OnTelChangeFnc);
	//m_wndTel.SetEvent(WE_SETFOCUS, _OnTelSetfocusFnc);
	//m_wndTel.SetEvent(WE_KILLFOCUS, _OnTelKillfocusFnc);
	m_wndTel.SetEvent(WE_CHECKVALUE, _OnTelCheckValueFnc);												   
	OnListPatientLoadData();
}
void CHMSTreatmentHistoryDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndLastName.GetDlgCtrlID(), m_szLastName);
	DDX_Text(pDX, m_wndMidName.GetDlgCtrlID(), m_szMidName);
	DDX_Text(pDX, m_wndFirstName.GetDlgCtrlID(), m_szFirstName);
	DDX_Text(pDX, m_wndYOB.GetDlgCtrlID(), m_nYOB);
	DDX_TextEx(pDX, m_wndAddress.GetDlgCtrlID(), m_szAddressKey);
	DDX_Text(pDX, m_wndIDNo.GetDlgCtrlID(), m_szIDNo);
	DDX_Text(pDX, m_wndTel.GetDlgCtrlID(), m_szTel);												   

}
void CHMSTreatmentHistoryDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSTreatmentHistoryDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSTreatmentHistoryDialog::SetDefaultValues(){

	m_szLastName.Empty();
	m_szMidName.Empty();
	m_szFirstName.Empty();
	m_nYOB=0;
	m_szAddressKey.Empty();
	m_szIDNo.Empty();
	m_szTel.Empty();
	m_szBirthDate.Empty();
}
int CHMSTreatmentHistoryDialog::SetMode(int nMode){
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
			m_wndLastName.SetFocus();
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
/*void CHMSTreatmentHistoryDialog::OnLastNameChange(){
	
} */
/*void CHMSTreatmentHistoryDialog::OnLastNameSetfocus(){
	
} */
/*void CHMSTreatmentHistoryDialog::OnLastNameKillfocus(){
	
} */
int CHMSTreatmentHistoryDialog::OnLastNameCheckValue(){
	return 0;
} 
/*void CHMSTreatmentHistoryDialog::OnMidNameChange(){
	
} */
/*void CHMSTreatmentHistoryDialog::OnMidNameSetfocus(){
	
} */
/*void CHMSTreatmentHistoryDialog::OnMidNameKillfocus(){
	
} */
int CHMSTreatmentHistoryDialog::OnMidNameCheckValue(){
	return 0;
} 
/*void CHMSTreatmentHistoryDialog::OnFirstNameChange(){
	
} */
/*void CHMSTreatmentHistoryDialog::OnFirstNameSetfocus(){
	
} */
/*void CHMSTreatmentHistoryDialog::OnFirstNameKillfocus(){
	
} */
int CHMSTreatmentHistoryDialog::OnFirstNameCheckValue(){
	OnSearchSelect();
	return 0;
} 
/*void CHMSTreatmentHistoryDialog::OnYOBChange(){
	
} */
/*void CHMSTreatmentHistoryDialog::OnYOBSetfocus(){
	
} */
/*void CHMSTreatmentHistoryDialog::OnYOBKillfocus(){
	
} */
int CHMSTreatmentHistoryDialog::OnYOBCheckValue(){
	return 0;
} 
void CHMSTreatmentHistoryDialog::OnAddressSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSTreatmentHistoryDialog::OnAddressSelendok(){
	 
}
/*void CHMSTreatmentHistoryDialog::OnAddressSetfocus(){
	
}*/
/*void CHMSTreatmentHistoryDialog::OnAddressKillfocus(){
	
}*/
long CHMSTreatmentHistoryDialog::OnAddressLoadData(){
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	return pMF->LoadAddressList(&m_wndAddress, m_szAddressKey);
	m_wndAddress.DeleteAllItems(); 
//	m_wndAddress.SetSearcToHext(TRUE);
	int nCount = 0;
	if(m_wndAddress.IsSearchKey() && !m_szAddressKey.IsEmpty()){
		CString szSQL;
		szSQL.Format(_T("select sv_id as id, sv_name||' - '||sd_name||' - '||sp_name as name, \
					sv_wrd||sd_wrd||sp_wrd as srch \
					from sys_prov left join sys_dist on(sd_provid=sp_id) \
					left join sys_vill on(sv_provid=sd_provid and sv_distid=sd_id) \
					where sv_id=%ld \
					order by sp_name, sd_name, sv_name "), ToLong(m_szAddressKey));
	//	_msg(_T("%s: %s"), szSQL, m_szAddressKey);
		CRecord rs(&pMF->m_db);
		nCount = rs.ExecSQL(szSQL);
		if(nCount > 0)
		{
			m_wndAddress.AddItems(
				rs.GetValue(_T("srch")), 
				rs.GetValue(_T("name")), 
				rs.GetValue(_T("id")), 
				NULL);
		}		
	}	
	return nCount;
}
/*void CHMSTreatmentHistoryDialog::OnAddressAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSTreatmentHistoryDialog::OnSearchSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	OnListPatientLoadData();
} 
void CHMSTreatmentHistoryDialog::OnListPatientDblClick(){
	
} 
void CHMSTreatmentHistoryDialog::OnListPatientSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	int nSel = m_wndListPatient.GetCurSel();
	if (nSel < 0) return ;

	m_nPatientNo =ToLong(m_wndListPatient.GetItemText(nSel, 0));
	OnListDocumentLoadData();
	
} 
int CHMSTreatmentHistoryDialog::OnListPatientDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
//CNTT fix
long CHMSTreatmentHistoryDialog::OnListPatientLoadData()
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, tmpStr;
	m_wndListPatient.BeginLoad();
	m_wndListPatient.DeleteAllItems();
	m_wndListDocument.DeleteAllItems();
	int nCount = 0;
	tmpStr.Empty();
	if (!m_szLastName.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and lower(trim(hp_surname)) =lower(trim('%s')) "), m_szLastName);
	}
	if (!m_szMidName.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and lower(trim(hp_midname)) =lower(trim('%s')) "), m_szMidName);
	}
	if (!m_szFirstName.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and lower(trim(hp_firstname)) =lower(trim('%s')) "), m_szFirstName);
	}
	if (!m_szAddressKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and hp_villid=%ld "), ToLong(m_wndAddress.GetCurrent(2)));
	}
	if (m_nYOB > 0)
	{
		if (!m_szBirthDate.IsEmpty())
		{
			szWhere.AppendFormat(
				_T(" and hp_birthdate = to_date('%s', 'yyyy/mm/dd') "), m_szBirthDate);
			m_szBirthDate.Empty();
		}
		else
		{
			szWhere.AppendFormat(
				_T(" and hp_birthdate between to_date('%ld/01/01', 'yyyy/mm/dd') and to_date('%ld/12/31', 'yyyy/mm/dd') "), m_nYOB, m_nYOB);
		}
	}
	/*if (!m_szIDNo.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND hp_sin = '%s' "), m_szIDNo);
	}*/
	if (!m_szTel.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND hd_telephone = '%s' "), m_szTel);
	}

	bool hasOther =
		!m_szLastName.IsEmpty()
		|| !m_szMidName.IsEmpty()
		|| !m_szFirstName.IsEmpty()
		|| !m_szBirthDate.IsEmpty()
		|| m_nYOB > 0;

	if (!m_szIDNo.IsEmpty() && !hasOther)
	{
		szWhere.AppendFormat(_T(" AND hp_sin = '%s' "), m_szIDNo);
	}
	else if (!m_szIDNo.IsEmpty() && hasOther) {
		szWhere.AppendFormat(_T(" OR hp_sin = '%s' "), m_szIDNo);
	}

	if (szWhere.IsEmpty())
	{
		return 0;
	}
	szSQL.Format(
		_T("    SELECT /*+index(hms_patient(hp_birthdate))*/ DISTINCT hp_patientno AS patientno,")
		_T("                    Trim(Trim(hp_surname)")
		_T("                         || ' '")
		_T("                         || Trim(hp_midname)")
		_T("                         || ' '")
		_T("                         || Trim(hp_firstname))AS pname,")
		_T("                    Hms_getage(Trunc_date(hd_admitdate), hp_birthdate) AS age,")
		_T("                    (SELECT ss_desc")
		_T("                       FROM sys_sel")
		_T("                      WHERE ss_id = 'sys_sex' AND ss_code = hp_sex) AS sex,")
		_T("                    (SELECT ss_desc")
		_T("                       FROM sys_sel")
		_T("                      WHERE ss_id = 'sys_ethnic' AND ss_code = Cast(hp_ethnic AS NVARCHAR2(15))) AS")
		_T("                    ethnic,")
		_T("                    hms_getaddress(nvl(hd_provid, hp_provid), nvl(hd_distid, hp_distid), nvl(hd_villid, hp_villid)) AS address,")
		_T("					to_char(hp_birthdate, 'dd/mm/yyyy') as birthdate,")
		_T("					hp_sin as idno,")
		_T("					hd_telephone as phone")
		_T("      FROM hms_patient")
		_T(" left join hms_doc ON( hp_patientno = hd_patientno )")
		_T("     WHERE 1=1 %s")
		_T("     ORDER BY patientno "),
		szWhere);

	_fmsg(_T("%s"), szSQL);
	nCount = rs.ExecSQL(szSQL);
	while (!rs.IsEOF())
	{
		m_wndListPatient.AddItems(
			rs.GetValue(_T("patientno")),
			rs.GetValue(_T("pname")),
			rs.GetValue(_T("age")),
			rs.GetValue(_T("sex")),
			rs.GetValue(_T("ethnic")),
			rs.GetValue(_T("address")),
			rs.GetValue(_T("birthdate")),
			rs.GetValue(_T("idno")),
			rs.GetValue(_T("phone")), NULL);
		rs.MoveNext();
	}
	m_wndListPatient.EndLoad();

	m_wndListPatient.SetCurSel(m_wndListPatient.GetItemCount() - 1);

	return rs.GetRecordCount();
}

void CHMSTreatmentHistoryDialog::OnListDocumentDblClick(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	int nSel = m_wndListDocument.GetCurSel();

	if (nSel < 0 ) return;
	
	long nDocNo = ToLong(m_wndListDocument.GetItemText(nSel, 2));	
	pMF->m_wndRegistration.LoadData(nDocNo);
	pMF->SetActivePane(0);
    OnOK();
	
} 
void CHMSTreatmentHistoryDialog::OnListDocumentSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSTreatmentHistoryDialog::OnListDocumentDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnListDocumentDblClick();
	 return 0;
} 
long CHMSTreatmentHistoryDialog::OnListDocumentLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr;
	m_wndListDocument.BeginLoad(); 
	m_wndListDocument.DeleteAllItems(); 
	int nIdx=1,nCount = 0;
	szSQL.Format(_T(" SELECT he_receptidx as id,he_roomid as roomid,he_docno as DocumentNo, ") \
				_T(" (select hrl_name from hms_roomlist left join sys_dept on(hrl_deptid=sd_id) where sd_type ='KB' and hrl_id=he_roomid and rownum < 2) as deptname, ") \
				_T(" (select hfl_name from hms_fee_list where hfl_feeid=he_examtype and hfl_groupid='D0000' AND hfl_typeid='E' and rownum < 2 ) as examtype, ") \
				_T(" get_objectname(hd_object) as object, hd_cardno as cardno, ") \
				_T(" hd_admitdate as indate ") \
				_T(" FROM hms_doc LEFT JOIN hms_exam ON(hd_docno=he_docno)") \
				_T(" WHERE hd_patientno= %ld ") \
				_T(" ORDER BY DocumentNo,id") , m_nPatientNo);
	_fmsg(_T("%s"), szSQL);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){		
		tmpStr.Format(_T("%d"), nIdx++);
		m_wndListDocument.AddItems(
			tmpStr, 
			CDate::Convert(rs.GetValue(_T("indate")),yyyymmdd,ddmmyyyy), 
			rs.GetValue(_T("DocumentNo")), 
			rs.GetValue(_T("deptname")), 			
			rs.GetValue(_T("examtype")),
			rs.GetValue(_T("Object")),
			rs.GetValue(_T("CardNo")), NULL);
		rs.MoveNext();
	}
	m_wndListDocument.EndLoad(); 
	return nCount;
}
/*void CHMSTreatmentHistoryDialog::OnIDNoChange(){
	
} */
/*void CHMSTreatmentHistoryDialog::OnIDNoSetfocus(){
	
} */
/*void CHMSTreatmentHistoryDialog::OnIDNoKillfocus(){
	
} */
int CHMSTreatmentHistoryDialog::OnIDNoCheckValue(){
	return 0;
} 
/*void CHMSTreatmentHistoryDialog::OnTelChange(){
	
} */
/*void CHMSTreatmentHistoryDialog::OnTelSetfocus(){
	
} */
/*void CHMSTreatmentHistoryDialog::OnTelKillfocus(){
	
} */
int CHMSTreatmentHistoryDialog::OnTelCheckValue(){
	return 0;
} 												  
int CHMSTreatmentHistoryDialog::OnAddHMSTreatmentHistoryDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSTreatmentHistoryDialog::OnEditHMSTreatmentHistoryDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSTreatmentHistoryDialog::OnDeleteHMSTreatmentHistoryDialog(){
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
 		OnCancelHMSTreatmentHistoryDialog(); 
 	}
	return 0;
}
int CHMSTreatmentHistoryDialog::OnSaveHMSTreatmentHistoryDialog(){
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
 		//OnHMSTreatmentHistoryDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSTreatmentHistoryDialog::OnCancelHMSTreatmentHistoryDialog(){
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
int CHMSTreatmentHistoryDialog::OnHMSTreatmentHistoryDialogListLoadData(){
	return 0;
}
