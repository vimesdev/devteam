#include "HMSExtraPatientPackageDialog.h"
#include "MainFrm.h"
#include "HMSReportForms\PrintForms.h"
/*static void _OnFindDocumentChangeFnc(CWnd *pWnd){
	((CHMSExtraPatientPackageDialog *)pWnd)->OnFindDocumentChange();
} */
/*static void _OnFindDocumentSetfocusFnc(CWnd *pWnd){
	((CHMSExtraPatientPackageDialog *)pWnd)->OnFindDocumentSetfocus();} */ 
/*static void _OnFindDocumentKillfocusFnc(CWnd *pWnd){
	((CHMSExtraPatientPackageDialog *)pWnd)->OnFindDocumentKillfocus();
} */
static int _OnFindDocumentCheckValueFnc(CWnd *pWnd){
	return ((CHMSExtraPatientPackageDialog *)pWnd)->OnFindDocumentCheckValue();
} 
/*static void _OnPatientNameChangeFnc(CWnd *pWnd){
	((CHMSExtraPatientPackageDialog *)pWnd)->OnPatientNameChange();
} */
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CHMSExtraPatientPackageDialog *)pWnd)->OnPatientNameSetfocus();} */ 
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((CHMSExtraPatientPackageDialog *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSExtraPatientPackageDialog *)pWnd)->OnPatientNameCheckValue();
} 
/*static void _OnYobChangeFnc(CWnd *pWnd){
	((CHMSExtraPatientPackageDialog *)pWnd)->OnYobChange();
} */
/*static void _OnYobSetfocusFnc(CWnd *pWnd){
	((CHMSExtraPatientPackageDialog *)pWnd)->OnYobSetfocus();} */ 
/*static void _OnYobKillfocusFnc(CWnd *pWnd){
	((CHMSExtraPatientPackageDialog *)pWnd)->OnYobKillfocus();
} */
static int _OnYobCheckValueFnc(CWnd *pWnd){
	return ((CHMSExtraPatientPackageDialog *)pWnd)->OnYobCheckValue();
} 
/*static void _OnSexChangeFnc(CWnd *pWnd){
	((CHMSExtraPatientPackageDialog *)pWnd)->OnSexChange();
} */
/*static void _OnSexSetfocusFnc(CWnd *pWnd){
	((CHMSExtraPatientPackageDialog *)pWnd)->OnSexSetfocus();} */ 
/*static void _OnSexKillfocusFnc(CWnd *pWnd){
	((CHMSExtraPatientPackageDialog *)pWnd)->OnSexKillfocus();
} */
static int _OnSexCheckValueFnc(CWnd *pWnd){
	return ((CHMSExtraPatientPackageDialog *)pWnd)->OnSexCheckValue();
} 
/*static void _OnAddressChangeFnc(CWnd *pWnd){
	((CHMSExtraPatientPackageDialog *)pWnd)->OnAddressChange();
} */
/*static void _OnAddressSetfocusFnc(CWnd *pWnd){
	((CHMSExtraPatientPackageDialog *)pWnd)->OnAddressSetfocus();} */ 
/*static void _OnAddressKillfocusFnc(CWnd *pWnd){
	((CHMSExtraPatientPackageDialog *)pWnd)->OnAddressKillfocus();
} */
static int _OnAddressCheckValueFnc(CWnd *pWnd){
	return ((CHMSExtraPatientPackageDialog *)pWnd)->OnAddressCheckValue();
} 
/*static void _OnDepartmentChangeFnc(CWnd *pWnd){
	((CHMSExtraPatientPackageDialog *)pWnd)->OnDepartmentChange();
} */
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CHMSExtraPatientPackageDialog *)pWnd)->OnDepartmentSetfocus();} */ 
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CHMSExtraPatientPackageDialog *)pWnd)->OnDepartmentKillfocus();
} */
static int _OnDepartmentCheckValueFnc(CWnd *pWnd){
	return ((CHMSExtraPatientPackageDialog *)pWnd)->OnDepartmentCheckValue();
} 
static void _OnPackageSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSExtraPatientPackageDialog* )pWnd)->OnPackageSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPackageSelendokFnc(CWnd *pWnd){
	((CHMSExtraPatientPackageDialog *)pWnd)->OnPackageSelendok();
}
/*static void _OnPackageSetfocusFnc(CWnd *pWnd){
	((CHMSExtraPatientPackageDialog *)pWnd)->OnPackageKillfocus();
}*/
/*static void _OnPackageKillfocusFnc(CWnd *pWnd){
	((CHMSExtraPatientPackageDialog *)pWnd)->OnPackageKillfocus();
}*/
static long _OnPackageLoadDataFnc(CWnd *pWnd){
	return ((CHMSExtraPatientPackageDialog *)pWnd)->OnPackageLoadData();
}
/*static void _OnPackageAddNewFnc(CWnd *pWnd){
	((CHMSExtraPatientPackageDialog *)pWnd)->OnPackageAddNew();
}*/
/*static void _OnBeginDateChangeFnc(CWnd *pWnd){
	((CHMSExtraPatientPackageDialog *)pWnd)->OnBeginDateChange();
} */
/*static void _OnBeginDateSetfocusFnc(CWnd *pWnd){
	((CHMSExtraPatientPackageDialog *)pWnd)->OnBeginDateSetfocus();} */ 
/*static void _OnBeginDateKillfocusFnc(CWnd *pWnd){
	((CHMSExtraPatientPackageDialog *)pWnd)->OnBeginDateKillfocus();
} */
static int _OnBeginDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSExtraPatientPackageDialog *)pWnd)->OnBeginDateCheckValue();
} 
/*static void _OnEndDateChangeFnc(CWnd *pWnd){
	((CHMSExtraPatientPackageDialog *)pWnd)->OnEndDateChange();
} */
/*static void _OnEndDateSetfocusFnc(CWnd *pWnd){
	((CHMSExtraPatientPackageDialog *)pWnd)->OnEndDateSetfocus();} */ 
/*static void _OnEndDateKillfocusFnc(CWnd *pWnd){
	((CHMSExtraPatientPackageDialog *)pWnd)->OnEndDateKillfocus();
} */
static int _OnEndDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSExtraPatientPackageDialog *)pWnd)->OnEndDateCheckValue();
} 
/*static void _OnQuantityChangeFnc(CWnd *pWnd){
	((CHMSExtraPatientPackageDialog *)pWnd)->OnQuantityChange();
} */
/*static void _OnQuantitySetfocusFnc(CWnd *pWnd){
	((CHMSExtraPatientPackageDialog *)pWnd)->OnQuantitySetfocus();} */ 
/*static void _OnQuantityKillfocusFnc(CWnd *pWnd){
	((CHMSExtraPatientPackageDialog *)pWnd)->OnQuantityKillfocus();
} */
static int _OnQuantityCheckValueFnc(CWnd *pWnd){
	return ((CHMSExtraPatientPackageDialog *)pWnd)->OnQuantityCheckValue();
} 
static void _OnBedDiagramSelectFnc(CWnd *pWnd){
	CHMSExtraPatientPackageDialog *pVw = (CHMSExtraPatientPackageDialog *)pWnd;
	pVw->OnBedDiagramSelect();
} 
/*static void _OnBedChangeFnc(CWnd *pWnd){
	((CHMSExtraPatientPackageDialog *)pWnd)->OnBedChange();
} */
/*static void _OnBedSetfocusFnc(CWnd *pWnd){
	((CHMSExtraPatientPackageDialog *)pWnd)->OnBedSetfocus();} */ 
/*static void _OnBedKillfocusFnc(CWnd *pWnd){
	((CHMSExtraPatientPackageDialog *)pWnd)->OnBedKillfocus();
} */
static int _OnBedCheckValueFnc(CWnd *pWnd){
	return ((CHMSExtraPatientPackageDialog *)pWnd)->OnBedCheckValue();
} 
/*static void _OnDescriptionChangeFnc(CWnd *pWnd){
	((CHMSExtraPatientPackageDialog *)pWnd)->OnDescriptionChange();
} */
/*static void _OnDescriptionSetfocusFnc(CWnd *pWnd){
	((CHMSExtraPatientPackageDialog *)pWnd)->OnDescriptionSetfocus();} */ 
/*static void _OnDescriptionKillfocusFnc(CWnd *pWnd){
	((CHMSExtraPatientPackageDialog *)pWnd)->OnDescriptionKillfocus();
} */
static int _OnDescriptionCheckValueFnc(CWnd *pWnd){
	return ((CHMSExtraPatientPackageDialog *)pWnd)->OnDescriptionCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSExtraPatientPackageDialog *pVw = (CHMSExtraPatientPackageDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSExtraPatientPackageDialog *pVw = (CHMSExtraPatientPackageDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddHMSExtraPatientPackageDialogFnc(CWnd *pWnd){
	 return ((CHMSExtraPatientPackageDialog*)pWnd)->OnAddHMSExtraPatientPackageDialog();
} 
static int _OnEditHMSExtraPatientPackageDialogFnc(CWnd *pWnd){
	 return ((CHMSExtraPatientPackageDialog*)pWnd)->OnEditHMSExtraPatientPackageDialog();
} 
static int _OnDeleteHMSExtraPatientPackageDialogFnc(CWnd *pWnd){
	 return ((CHMSExtraPatientPackageDialog*)pWnd)->OnDeleteHMSExtraPatientPackageDialog();
} 
static int _OnSaveHMSExtraPatientPackageDialogFnc(CWnd *pWnd){
	 return ((CHMSExtraPatientPackageDialog*)pWnd)->OnSaveHMSExtraPatientPackageDialog();
} 
static int _OnCancelHMSExtraPatientPackageDialogFnc(CWnd *pWnd){
	 return ((CHMSExtraPatientPackageDialog*)pWnd)->OnCancelHMSExtraPatientPackageDialog();
} 
CHMSExtraPatientPackageDialog::CHMSExtraPatientPackageDialog(CWnd* pParent, int nMode):
	CGuiDialog(pParent)
{
	SetMode(nMode);
	m_nDlgWidth = 685;
	m_nDlgHeight = 325;
	SetDefaultValues();
	m_nFindDocument=0;
	
}
CHMSExtraPatientPackageDialog::~CHMSExtraPatientPackageDialog(){
}
void CHMSExtraPatientPackageDialog::OnCreateComponents(){
	m_wndPackageInformation.Create(this, _T("Package Information"), 5, 5, 645, 270);
	m_wndFindDocumentLabel.Create(this, _T("FindDocument"), 10, 30, 130, 55);
	m_wndFindDocument.Create(this,135, 30, 260, 55); 
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 265, 30, 385, 55);
	m_wndPatientName.Create(this,390, 30, 640, 55); 
	m_wndYobLabel.Create(this, _T("Yob"), 10, 60, 130, 85);
	m_wndYob.Create(this,135, 60, 260, 85); 
	m_wndSexLabel.Create(this, _T("Sex"), 265, 60, 385, 85);
	m_wndSex.Create(this,390, 60, 515, 85); 
	m_wndAddressLabel.Create(this, _T("Address"), 10, 90, 130, 115);
	m_wndAddress.Create(this,135, 90, 640, 115); 
	m_wndDepartmentLabel.Create(this, _T("Department"), 10, 120, 130, 145);
	m_wndDepartment.Create(this,135, 120, 640, 145); 
	m_wndPackageLabel.Create(this, _T("Package"), 10, 150, 130, 175);
	m_wndPackage.Create(this,135, 150, 640, 175); 
	m_wndBeginDateLabel.Create(this, _T("Begin Date"), 10, 180, 130, 205);
	m_wndBeginDate.Create(this,135, 180, 260, 205); 
	m_wndEndDateLabel.Create(this, _T("End Date"), 265, 180, 385, 205);
	m_wndEndDate.Create(this,390, 180, 515, 205); 
	m_wndQuantityLabel.Create(this, _T("Quantity"), 10, 210, 130, 235);
	m_wndQuantity.Create(this,135, 210, 260, 235); 
	m_wndBedDiagram.Create(this, _T("Bed Diagram"), 265, 210, 385, 235);
	m_wndBed.Create(this,390, 210, 640, 235); 
	m_wndDescriptionLabel.Create(this, _T("Description"), 10, 240, 130, 265);
	m_wndDescription.Create(this,135, 240, 640, 265); 
	m_wndSave.Create(this, _T("&Save"), 480, 275, 560, 300);
	m_wndCancel.Create(this, _T("&Cancel"), 565, 275, 645, 300);

}
void CHMSExtraPatientPackageDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndFindDocument.SetLimitText(16);
	m_wndFindDocument.SetCheckValue(true);
	m_wndFindDocument.SetNotEmpty(true);
	m_wndPatientName.SetLimitText(65);
	m_wndPatientName.SetReadOnly(true);
	m_wndYob.SetLimitText(35);
	m_wndYob.SetReadOnly(true);
	m_wndSex.SetLimitText(35);
	m_wndSex.SetReadOnly(true);
	m_wndAddress.SetLimitText(35);
	m_wndAddress.SetReadOnly(true);
	m_wndDepartment.SetLimitText(35);
	m_wndDepartment.SetReadOnly(true);
	m_wndPackage.SetCheckValue(true);
	m_wndPackage.LimitText(1024);
//	m_wndBeginDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndBeginDate.SetCheckValue(true);
//	m_wndEndDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndEndDate.SetCheckValue(true);
	m_wndQuantity.SetLimitText(5);
	m_wndQuantity.SetCheckValue(true);
	m_wndBed.SetLimitText(1024);
	m_wndBed.SetCheckValue(true);
	m_wndDescription.SetLimitText(254);
	m_wndDescription.SetCheckValue(false);

	m_wndBedDiagram.ModifyStyle(WS_TABSTOP, 0);

	m_wndPackage.InsertColumn(0, _T("Id"), CFMT_TEXT, 90);
	m_wndPackage.InsertColumn(1, _T("Package"), CFMT_TEXT, 250);
	m_wndPackage.InsertColumn(2, _T("Ins Price"), CFMT_NUMBER, 80);
	m_wndPackage.InsertColumn(3, _T("Serv Price"), CFMT_NUMBER, 80);
	m_wndPackage.InsertColumn(4, _T("Req Price"), CFMT_NUMBER, 80);
	m_wndPackage.InsertColumn(5, _T("group"), CFMT_TEXT, 0);



}
void CHMSExtraPatientPackageDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndFindDocument.SetEvent(WE_CHANGE, _OnFindDocumentChangeFnc);
	//m_wndFindDocument.SetEvent(WE_SETFOCUS, _OnFindDocumentSetfocusFnc);
	//m_wndFindDocument.SetEvent(WE_KILLFOCUS, _OnFindDocumentKillfocusFnc);
	m_wndFindDocument.SetEvent(WE_CHECKVALUE, _OnFindDocumentCheckValueFnc);
	//m_wndPatientName.SetEvent(WE_CHANGE, _OnPatientNameChangeFnc);
	//m_wndPatientName.SetEvent(WE_SETFOCUS, _OnPatientNameSetfocusFnc);
	//m_wndPatientName.SetEvent(WE_KILLFOCUS, _OnPatientNameKillfocusFnc);
	m_wndPatientName.SetEvent(WE_CHECKVALUE, _OnPatientNameCheckValueFnc);
	//m_wndYob.SetEvent(WE_CHANGE, _OnYobChangeFnc);
	//m_wndYob.SetEvent(WE_SETFOCUS, _OnYobSetfocusFnc);
	//m_wndYob.SetEvent(WE_KILLFOCUS, _OnYobKillfocusFnc);
	m_wndYob.SetEvent(WE_CHECKVALUE, _OnYobCheckValueFnc);
	//m_wndSex.SetEvent(WE_CHANGE, _OnSexChangeFnc);
	//m_wndSex.SetEvent(WE_SETFOCUS, _OnSexSetfocusFnc);
	//m_wndSex.SetEvent(WE_KILLFOCUS, _OnSexKillfocusFnc);
	m_wndSex.SetEvent(WE_CHECKVALUE, _OnSexCheckValueFnc);
	//m_wndAddress.SetEvent(WE_CHANGE, _OnAddressChangeFnc);
	//m_wndAddress.SetEvent(WE_SETFOCUS, _OnAddressSetfocusFnc);
	//m_wndAddress.SetEvent(WE_KILLFOCUS, _OnAddressKillfocusFnc);
	m_wndAddress.SetEvent(WE_CHECKVALUE, _OnAddressCheckValueFnc);
	//m_wndDepartment.SetEvent(WE_CHANGE, _OnDepartmentChangeFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_CHECKVALUE, _OnDepartmentCheckValueFnc);
	m_wndPackage.SetEvent(WE_SELENDOK, _OnPackageSelendokFnc);
	//m_wndPackage.SetEvent(WE_SETFOCUS, _OnPackageSetfocusFnc);
	//m_wndPackage.SetEvent(WE_KILLFOCUS, _OnPackageKillfocusFnc);
	m_wndPackage.SetEvent(WE_SELCHANGE, _OnPackageSelectChangeFnc);
	m_wndPackage.SetEvent(WE_LOADDATA, _OnPackageLoadDataFnc);
	//m_wndPackage.SetEvent(WE_ADDNEW, _OnPackageAddNewFnc);
	//m_wndBeginDate.SetEvent(WE_CHANGE, _OnBeginDateChangeFnc);
	//m_wndBeginDate.SetEvent(WE_SETFOCUS, _OnBeginDateSetfocusFnc);
	//m_wndBeginDate.SetEvent(WE_KILLFOCUS, _OnBeginDateKillfocusFnc);
	m_wndBeginDate.SetEvent(WE_CHECKVALUE, _OnBeginDateCheckValueFnc);
	//m_wndEndDate.SetEvent(WE_CHANGE, _OnEndDateChangeFnc);
	//m_wndEndDate.SetEvent(WE_SETFOCUS, _OnEndDateSetfocusFnc);
	//m_wndEndDate.SetEvent(WE_KILLFOCUS, _OnEndDateKillfocusFnc);
	m_wndEndDate.SetEvent(WE_CHECKVALUE, _OnEndDateCheckValueFnc);
	//m_wndQuantity.SetEvent(WE_CHANGE, _OnQuantityChangeFnc);
	//m_wndQuantity.SetEvent(WE_SETFOCUS, _OnQuantitySetfocusFnc);
	//m_wndQuantity.SetEvent(WE_KILLFOCUS, _OnQuantityKillfocusFnc);
	m_wndQuantity.SetEvent(WE_CHECKVALUE, _OnQuantityCheckValueFnc);
	m_wndBedDiagram.SetEvent(WE_CLICK, _OnBedDiagramSelectFnc);
	//m_wndBed.SetEvent(WE_CHANGE, _OnBedChangeFnc);
	//m_wndBed.SetEvent(WE_SETFOCUS, _OnBedSetfocusFnc);
	//m_wndBed.SetEvent(WE_KILLFOCUS, _OnBedKillfocusFnc);
	m_wndBed.SetEvent(WE_CHECKVALUE, _OnBedCheckValueFnc);
	//m_wndDescription.SetEvent(WE_CHANGE, _OnDescriptionChangeFnc);
	//m_wndDescription.SetEvent(WE_SETFOCUS, _OnDescriptionSetfocusFnc);
	//m_wndDescription.SetEvent(WE_KILLFOCUS, _OnDescriptionKillfocusFnc);
	m_wndDescription.SetEvent(WE_CHECKVALUE, _OnDescriptionCheckValueFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	
	SetMode(GetMode());

}
void CHMSExtraPatientPackageDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndFindDocument.GetDlgCtrlID(), m_nFindDocument);
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);
	DDX_Text(pDX, m_wndYob.GetDlgCtrlID(), m_szYob);
	DDX_Text(pDX, m_wndSex.GetDlgCtrlID(), m_szSex);
	DDX_Text(pDX, m_wndAddress.GetDlgCtrlID(), m_szAddress);
	DDX_Text(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartment);
	DDX_TextEx(pDX, m_wndPackage.GetDlgCtrlID(), m_szPackageKey);
	DDX_TextEx(pDX, m_wndBeginDate.GetDlgCtrlID(), m_szBeginDate);
	DDX_TextEx(pDX, m_wndEndDate.GetDlgCtrlID(), m_szEndDate);
	DDX_Text(pDX, m_wndQuantity.GetDlgCtrlID(), m_nQuantity);
	DDX_Text(pDX, m_wndBed.GetDlgCtrlID(), m_szBed);
	DDX_Text(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescription);

}
void CHMSExtraPatientPackageDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("FindDocument")] =  m_nFindDocument;
	m_jData[_T("PatientName")] =  m_szPatientName;
	m_jData[_T("Yob")] =  m_szYob;
	m_jData[_T("Sex")] =  m_szSex;
	m_jData[_T("Address")] =  m_szAddress;
	m_jData[_T("Department")] =  m_szDepartment;
	m_jData[_T("Package")] =  m_szPackageKey;
	m_jData[_T("BeginDate")] =  m_szBeginDate;
	m_jData[_T("EndDate")] =  m_szEndDate;
	m_jData[_T("Quantity")] =  m_nQuantity;
	m_jData[_T("Bed")] =  m_szBed;
	m_jData[_T("Description")] =  m_szDescription;
	}
	else
	{
			
	m_jData[_T("FindDocument")].GetValue(m_nFindDocument);
	m_jData[_T("PatientName")].GetValue(m_szPatientName);
	m_jData[_T("Yob")].GetValue(m_szYob);
	m_jData[_T("Sex")].GetValue(m_szSex);
	m_jData[_T("Address")].GetValue(m_szAddress);
	m_jData[_T("Department")].GetValue(m_szDepartment);
	m_jData[_T("Package")].GetValue(m_szPackageKey);
	m_jData[_T("BeginDate")].GetValue(m_szBeginDate);
	m_jData[_T("EndDate")].GetValue(m_szEndDate);
	m_jData[_T("Quantity")].GetValue(m_nQuantity);
	m_jData[_T("Bed")].GetValue(m_szBed);
	m_jData[_T("Description")].GetValue(m_szDescription);
	}

}
void CHMSExtraPatientPackageDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T(" SELECT DISTINCT hd_docno AS docno,") \
_T("   hd_patientno           AS patientno,") \
_T("   CASE") \
_T("     WHEN htr_deptid IS NOT NULL") \
_T("     THEN htr_deptid") \
_T("     ELSE hd_enddept") \
_T("   END AS deptid,") \
_T("   trim( hp_surname") \
_T("   ||' '") \
_T("   ||hp_midname") \
_T("   ||' '") \
_T("   ||hp_firstname)                                 AS pname,") \
_T("   TO_CHAR(hp_birthdate, 'YYYY')                   AS yob,") \
_T("   hms_getsex(hp_sex)                              AS gender,") \
_T("   hms_getaddress(hp_provid, hp_distid, hp_villid) AS address,") \
_T("   hd_telephone") \
_T("   ||','") \
_T("   ||hd_contacttel AS phone") \
_T(" FROM hms_patient") \
_T(" LEFT JOIN hms_doc") \
_T(" ON(hd_patientno = hp_patientno)") \
_T(" LEFT JOIN hms_clinical_record") \
_T(" ON(hcr_docno = hd_docno)") \
_T(" LEFT JOIN hms_treatment_record") \
_T(" ON(hcr_docno  = htr_docno)") \
_T(" WHERE hd_docno=%ld") \
_T(" ORDER BY pname"), m_nFindDocument);
	rs.ExecSQL(szSQL);
	
	
	m_szPatientName.Empty();
	m_szYob.Empty();
	m_szSex.Empty();
	m_szAddress.Empty();
	m_szDepartment.Empty();

	if(!rs.IsEOF())
	{
		rs.GetValue(_T("pname"), m_szPatientName);
		rs.GetValue(_T("yob"), m_szYob);
		rs.GetValue(_T("gender"), m_szSex);
		rs.GetValue(_T("address"), m_szAddress);
	}
	m_szBeginDate = m_szEndDate =  pMF->GetSysDateTime();
	UpdateData(FALSE);

}
void CHMSExtraPatientPackageDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSExtraPatientPackageDialog::SetDefaultValues(){

	
	m_szPatientName.Empty();
	m_szYob.Empty();
	m_szSex.Empty();
	m_szAddress.Empty();
	m_szDepartment.Empty();
	m_szPackageKey.Empty();
	m_nQuantity=0;
	m_szBed.Empty();
	m_szDescription.Empty();
	m_szBeginDate.Empty();
	m_szEndDate.Empty();

}
int CHMSExtraPatientPackageDialog::SetMode(int nMode){
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
			m_szBeginDate = pMF->GetSysDateTime();
			m_szEndDate = m_szBeginDate;
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 3, 4, -1);
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
		m_wndPatientName.EnableWindow(FALSE);
		m_wndYob.EnableWindow(FALSE);
		m_wndSex.EnableWindow(FALSE);
		m_wndAddress.EnableWindow(FALSE);
		m_wndDepartment.EnableWindow(FALSE);
		m_wndEndDate.EnableWindow(FALSE);
		m_wndBed.EnableWindow(FALSE);
 		return nOldMode;
}
/*void CHMSExtraPatientPackageDialog::OnFindDocumentChange(){
	
} */
/*void CHMSExtraPatientPackageDialog::OnFindDocumentSetfocus(){
	
} */
/*void CHMSExtraPatientPackageDialog::OnFindDocumentKillfocus(){
	
} */
int CHMSExtraPatientPackageDialog::OnFindDocumentCheckValue(){
	GetDataToScreen();
	return 0;
} 
/*void CHMSExtraPatientPackageDialog::OnPatientNameChange(){
	
} */
/*void CHMSExtraPatientPackageDialog::OnPatientNameSetfocus(){
	
} */
/*void CHMSExtraPatientPackageDialog::OnPatientNameKillfocus(){
	
} */
int CHMSExtraPatientPackageDialog::OnPatientNameCheckValue(){
	return 0;
} 
/*void CHMSExtraPatientPackageDialog::OnYobChange(){
	
} */
/*void CHMSExtraPatientPackageDialog::OnYobSetfocus(){
	
} */
/*void CHMSExtraPatientPackageDialog::OnYobKillfocus(){
	
} */
int CHMSExtraPatientPackageDialog::OnYobCheckValue(){
	return 0;
} 
/*void CHMSExtraPatientPackageDialog::OnSexChange(){
	
} */
/*void CHMSExtraPatientPackageDialog::OnSexSetfocus(){
	
} */
/*void CHMSExtraPatientPackageDialog::OnSexKillfocus(){
	
} */
int CHMSExtraPatientPackageDialog::OnSexCheckValue(){
	return 0;
} 
/*void CHMSExtraPatientPackageDialog::OnAddressChange(){
	
} */
/*void CHMSExtraPatientPackageDialog::OnAddressSetfocus(){
	
} */
/*void CHMSExtraPatientPackageDialog::OnAddressKillfocus(){
	
} */
int CHMSExtraPatientPackageDialog::OnAddressCheckValue(){
	return 0;
} 
/*void CHMSExtraPatientPackageDialog::OnDepartmentChange(){
	
} */
/*void CHMSExtraPatientPackageDialog::OnDepartmentSetfocus(){
	
} */
/*void CHMSExtraPatientPackageDialog::OnDepartmentKillfocus(){
	
} */
int CHMSExtraPatientPackageDialog::OnDepartmentCheckValue(){
	return 0;
} 
void CHMSExtraPatientPackageDialog::OnPackageSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSExtraPatientPackageDialog::OnPackageSelendok(){
	 
}
/*void CHMSExtraPatientPackageDialog::OnPackageSetfocus(){
	
}*/
/*void CHMSExtraPatientPackageDialog::OnPackageKillfocus(){
	
}*/
long CHMSExtraPatientPackageDialog::OnPackageLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
_tprintf(_T("\r\n%s"), m_szPackageKey);

	if(m_wndPackage.IsSearchKey() && !m_szPackageKey.IsEmpty()){
		szWhere.Format(_T(" and hfl_feeid='%s' "), m_szPackageKey);
	};
	m_wndPackage.DeleteAllItems(); 
	int nCount = 0;
	szWhere.AppendFormat(_T(" and hfl_feeid in(select ss_code from sys_sel where ss_id='HMS_SERVICE_PACKAGE') "));
	szSQL.Format(_T("SELECT hfl_groupid as groupid, hfl_feeid as id, hfl_name as name, ") \
		_T(" hfl_servprice as servprice, hfl_insprice as insprice, hfl_reqprice as reqprice " ) \
		_T(" FROM hms_fee_list ") \
		_T(" WHERE hfl_active='Y' and hfl_servprice+hfl_reqprice > 0 %s ") \
		_T(" ORDER BY hfl_feeid"), szWhere);
_tprintf(_T("\r\n%s"), szSQL);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPackage.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), 
			rs.GetValue(_T("insprice")), 
			rs.GetValue(_T("servprice")), 
			rs.GetValue(_T("reqprice")), 
			rs.GetValue(_T("groupid")), 
			NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CHMSExtraPatientPackageDialog::OnPackageAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSExtraPatientPackageDialog::OnBeginDateChange(){
	
} */
/*void CHMSExtraPatientPackageDialog::OnBeginDateSetfocus(){
	
} */
/*void CHMSExtraPatientPackageDialog::OnBeginDateKillfocus(){
	
} */
int CHMSExtraPatientPackageDialog::OnBeginDateCheckValue(){
	return 0;
} 
/*void CHMSExtraPatientPackageDialog::OnEndDateChange(){
	
} */
/*void CHMSExtraPatientPackageDialog::OnEndDateSetfocus(){
	
} */
/*void CHMSExtraPatientPackageDialog::OnEndDateKillfocus(){
	
} */
int CHMSExtraPatientPackageDialog::OnEndDateCheckValue(){
	return 0;
} 
/*void CHMSExtraPatientPackageDialog::OnQuantityChange(){
	
} */
/*void CHMSExtraPatientPackageDialog::OnQuantitySetfocus(){
	
} */
/*void CHMSExtraPatientPackageDialog::OnQuantityKillfocus(){
	
} */
int CHMSExtraPatientPackageDialog::OnQuantityCheckValue(){
	if(m_nQuantity <= 0)
		return -1;
	
	UpdateData(TRUE);
	CDate dte;
	dte.ParseDate(m_szBeginDate.Left(10));
	dte += m_nQuantity;
	m_szEndDate.Format(_T("%.4d/%.2d/%.2d %s"),dte.GetYear(), dte.GetMonth(), dte.GetDay(), m_szBeginDate.Right(8));
	UpdateData(FALSE);
	return 0;
} 
void CHMSExtraPatientPackageDialog::OnBedDiagramSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
/*void CHMSExtraPatientPackageDialog::OnBedChange(){
	
} */
/*void CHMSExtraPatientPackageDialog::OnBedSetfocus(){
	
} */
/*void CHMSExtraPatientPackageDialog::OnBedKillfocus(){
	
} */
int CHMSExtraPatientPackageDialog::OnBedCheckValue(){
	return 0;
} 
/*void CHMSExtraPatientPackageDialog::OnDescriptionChange(){
	
} */
/*void CHMSExtraPatientPackageDialog::OnDescriptionSetfocus(){
	
} */
/*void CHMSExtraPatientPackageDialog::OnDescriptionKillfocus(){
	
} */
int CHMSExtraPatientPackageDialog::OnDescriptionCheckValue(){
	return 0;
} 
void CHMSExtraPatientPackageDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveHMSExtraPatientPackageDialog();
} 
void CHMSExtraPatientPackageDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CHMSExtraPatientPackageDialog::OnAddHMSExtraPatientPackageDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSExtraPatientPackageDialog::OnEditHMSExtraPatientPackageDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSExtraPatientPackageDialog::OnDeleteHMSExtraPatientPackageDialog(){
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
 		OnCancelHMSExtraPatientPackageDialog();
 	}
	return 0;
}
int CHMSExtraPatientPackageDialog::OnSaveHMSExtraPatientPackageDialog(){
 	if(GetMode() != VM_ADD)
 		return -1;

 	if(!IsValidateData())
 		return -1;

	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
 	CString szSQL;
	CRecord rs(&pMF->m_db);
	CDbfMap tbl;
	long nNewPatientNo;


	szSQL.Format(_T("HMS_PATIENT_CREATENEW_EXTRA(%ld, '%s','%s') "), m_nFindDocument, pMF->GetDepartmentID(), pMF->GetCurrentUser());
	//_msg(_T("%s"), szSQL);
	long nNewDocNo = str2long(pMF->ExecDML(szSQL));
	if(nNewDocNo < 0)
	{
		ShowMessageBox(_T("Không đăng ký được bệnh nhân mới"));
		return -1;
	}

	CString szDept;
	szSQL.Format(_T("SELECT hd_patientno, hd_admitdept FROM hms_doc WHERE hd_docno=%ld"), nNewDocNo);
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("hd_patientno"), nNewPatientNo);
	rs.GetValue(_T("hd_admitdept"), szDept);


	tbl.AddField(_T("p_userid"), dfText, 15);
	tbl.AddField(_T("p_patientno"),dfLong);
    tbl.AddField(_T("p_docno"),dfLong);
    tbl.AddField(_T("p_deptid"), dfText, 7);
    tbl.AddField(_T("p_refidx"),dfInteger);
    tbl.AddField(_T("p_treattime"),dfInteger);
    tbl.AddField(_T("p_relative_id"),dfLong);
    tbl.AddField(_T("p_smartcard_id"),dfLong);
    tbl.AddField(_T("p_itemid"), dfText, 15);
    tbl.AddField(_T("p_begindate"), dfText, 20);
    tbl.AddField(_T("p_enddate"), dfText, 20);
    tbl.AddField(_T("p_qty"),dfFloat);
    tbl.AddField(_T("p_roomid"),dfInteger);
    tbl.AddField(_T("p_bedid"),dfInteger);
    tbl.AddField(_T("p_description"), dfText, 254);
	tbl.AddField(_T("p_orderid"), dfLong);

	tbl.SetValue(_T("p_userid"), pMF->GetCurrentUser());
	tbl.SetValue(_T("p_patientno"),nNewPatientNo);
	tbl.SetValue(_T("p_docno"), nNewDocNo);
	tbl.SetValue(_T("p_deptid"), szDept);
	tbl.SetValue(_T("p_refidx"), 0);
	tbl.SetValue(_T("p_treattime"), 0);
    tbl.SetValue(_T("p_relative_id"), _T(""));
	tbl.SetValue(_T("p_smartcard_id"), _T(""));
    tbl.SetValue(_T("p_itemid"), m_szPackageKey);
    tbl.SetValue(_T("p_begindate"), m_szBeginDate);
    tbl.SetValue(_T("p_enddate"), m_szEndDate);
    tbl.SetValue(_T("p_qty"), m_nQuantity);
	tbl.SetValue(_T("p_roomid"), 0);
	tbl.SetValue(_T("p_bedid"), 0);
    tbl.SetValue(_T("p_description"), m_szDescription);
	tbl.SetValue(_T("p_orderid"), 0);
	
	szSQL.Format(_T("HMS_SERVICE_PACKAGE_CREATE(%s)"), tbl.FormatSQL());
	
 	long ret = str2int(pMF->ExecDML(szSQL));

 	if(ret > 0)
 	{
//		szSQL.Format(_T("HMS_FEE_EXTRA_CONFIRM(%ld, %ld, '%s') "), nNewDocNo, ret, pMF->GetCurrentUser());
//		pMF->ExecDML(szSQL);
	//	CPrintForms printer;
//		printer.PrintServicePackage(nNewDocNo,  1);
		m_nDocumentNo = nNewDocNo;
		CGuiDialog::OnOK();
 	}
 	else
 	{
 	}
 	return ret;

}
int CHMSExtraPatientPackageDialog::OnCancelHMSExtraPatientPackageDialog(){
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
int CHMSExtraPatientPackageDialog::OnHMSExtraPatientPackageDialogListLoadData(){
	return 0;
}
