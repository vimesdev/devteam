#include "HMSFindPatientinformationDialog.h"
#include "HMSMainFrame.h"
/*static void _OnFindDocumentChangeFnc(CWnd *pWnd){
	((CHMSFindPatientinformationDialog *)pWnd)->OnFindDocumentChange();
} */
/*static void _OnFindDocumentSetfocusFnc(CWnd *pWnd){
	((CHMSFindPatientinformationDialog *)pWnd)->OnFindDocumentSetfocus();} */ 
/*static void _OnFindDocumentKillfocusFnc(CWnd *pWnd){
	((CHMSFindPatientinformationDialog *)pWnd)->OnFindDocumentKillfocus();
} */
static void _OnRelativeListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSFindPatientinformationDialog*)pWnd)->OnRelativeListSelectChange(nOldItem, nNewItem);
} 
static int _OnFindDocumentCheckValueFnc(CWnd *pWnd){
	return ((CHMSFindPatientinformationDialog *)pWnd)->OnFindDocumentCheckValue();
} 
/*static void _OnPatientNameChangeFnc(CWnd *pWnd){
	((CHMSFindPatientinformationDialog *)pWnd)->OnPatientNameChange();
} */
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CHMSFindPatientinformationDialog *)pWnd)->OnPatientNameSetfocus();} */ 
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((CHMSFindPatientinformationDialog *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSFindPatientinformationDialog *)pWnd)->OnPatientNameCheckValue();
} 
/*static void _OnYobChangeFnc(CWnd *pWnd){
	((CHMSFindPatientinformationDialog *)pWnd)->OnYobChange();
} */
/*static void _OnYobSetfocusFnc(CWnd *pWnd){
	((CHMSFindPatientinformationDialog *)pWnd)->OnYobSetfocus();} */ 
/*static void _OnYobKillfocusFnc(CWnd *pWnd){
	((CHMSFindPatientinformationDialog *)pWnd)->OnYobKillfocus();
} */
static int _OnYobCheckValueFnc(CWnd *pWnd){
	return ((CHMSFindPatientinformationDialog *)pWnd)->OnYobCheckValue();
} 
/*static void _OnSexChangeFnc(CWnd *pWnd){
	((CHMSFindPatientinformationDialog *)pWnd)->OnSexChange();
} */
/*static void _OnSexSetfocusFnc(CWnd *pWnd){
	((CHMSFindPatientinformationDialog *)pWnd)->OnSexSetfocus();} */ 
/*static void _OnSexKillfocusFnc(CWnd *pWnd){
	((CHMSFindPatientinformationDialog *)pWnd)->OnSexKillfocus();
} */
static int _OnSexCheckValueFnc(CWnd *pWnd){
	return ((CHMSFindPatientinformationDialog *)pWnd)->OnSexCheckValue();
} 
/*static void _OnMobileChangeFnc(CWnd *pWnd){
	((CHMSFindPatientinformationDialog *)pWnd)->OnMobileChange();
} */
/*static void _OnMobileSetfocusFnc(CWnd *pWnd){
	((CHMSFindPatientinformationDialog *)pWnd)->OnMobileSetfocus();} */ 
/*static void _OnMobileKillfocusFnc(CWnd *pWnd){
	((CHMSFindPatientinformationDialog *)pWnd)->OnMobileKillfocus();
} */
static int _OnMobileCheckValueFnc(CWnd *pWnd){
	return ((CHMSFindPatientinformationDialog *)pWnd)->OnMobileCheckValue();
} 
/*static void _OnAddressChangeFnc(CWnd *pWnd){
	((CHMSFindPatientinformationDialog *)pWnd)->OnAddressChange();
} */
/*static void _OnAddressSetfocusFnc(CWnd *pWnd){
	((CHMSFindPatientinformationDialog *)pWnd)->OnAddressSetfocus();} */ 
/*static void _OnAddressKillfocusFnc(CWnd *pWnd){
	((CHMSFindPatientinformationDialog *)pWnd)->OnAddressKillfocus();
} */
static int _OnAddressCheckValueFnc(CWnd *pWnd){
	return ((CHMSFindPatientinformationDialog *)pWnd)->OnAddressCheckValue();
} 
/*static void _OnDepartmentChangeFnc(CWnd *pWnd){
	((CHMSFindPatientinformationDialog *)pWnd)->OnDepartmentChange();
} */
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CHMSFindPatientinformationDialog *)pWnd)->OnDepartmentSetfocus();} */ 
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CHMSFindPatientinformationDialog *)pWnd)->OnDepartmentKillfocus();
} */
static int _OnDepartmentCheckValueFnc(CWnd *pWnd){
	return ((CHMSFindPatientinformationDialog *)pWnd)->OnDepartmentCheckValue();
} 
/*static void _OnDescriptionChangeFnc(CWnd *pWnd){
	((CHMSFindPatientinformationDialog *)pWnd)->OnDescriptionChange();
} */
/*static void _OnDescriptionSetfocusFnc(CWnd *pWnd){
	((CHMSFindPatientinformationDialog *)pWnd)->OnDescriptionSetfocus();} */ 
/*static void _OnDescriptionKillfocusFnc(CWnd *pWnd){
	((CHMSFindPatientinformationDialog *)pWnd)->OnDescriptionKillfocus();
} */
static int _OnDescriptionCheckValueFnc(CWnd *pWnd){
	return ((CHMSFindPatientinformationDialog *)pWnd)->OnDescriptionCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSFindPatientinformationDialog *pVw = (CHMSFindPatientinformationDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSFindPatientinformationDialog *pVw = (CHMSFindPatientinformationDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddHMSFindPatientinformationDialogFnc(CWnd *pWnd){
	 return ((CHMSFindPatientinformationDialog*)pWnd)->OnAddHMSFindPatientinformationDialog();
} 
static int _OnEditHMSFindPatientinformationDialogFnc(CWnd *pWnd){
	 return ((CHMSFindPatientinformationDialog*)pWnd)->OnEditHMSFindPatientinformationDialog();
} 
static int _OnDeleteHMSFindPatientinformationDialogFnc(CWnd *pWnd){
	 return ((CHMSFindPatientinformationDialog*)pWnd)->OnDeleteHMSFindPatientinformationDialog();
} 
static int _OnSaveHMSFindPatientinformationDialogFnc(CWnd *pWnd){
	 return ((CHMSFindPatientinformationDialog*)pWnd)->OnSaveHMSFindPatientinformationDialog();
} 
static int _OnCancelHMSFindPatientinformationDialogFnc(CWnd *pWnd){
	 return ((CHMSFindPatientinformationDialog*)pWnd)->OnCancelHMSFindPatientinformationDialog();
}
static void _OnEditSelectFnc(CWnd *pWnd){
	CHMSFindPatientinformationDialog *pVw = (CHMSFindPatientinformationDialog *)pWnd;
	pVw->OnEditSelect();
}
static long _OnRelativeListLoadDataFnc(CWnd *pWnd){
	return ((CHMSFindPatientinformationDialog*)pWnd)->OnRelativeListLoadData();
}

static void _OnXemphieukhamSelectFnc(CWnd *pWnd){
	CHMSFindPatientinformationDialog *pVw = (CHMSFindPatientinformationDialog *)pWnd;
	pVw->OnXemphieukhamSelect();
} 

CHMSFindPatientinformationDialog::CHMSFindPatientinformationDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CHMSFindPatientinformationDialog::~CHMSFindPatientinformationDialog(){
}
void CHMSFindPatientinformationDialog::OnCreateComponents(){
		
	/*m_wndFindDocumentLabel.Create(this, _T("FindDocument"), 10, 30, 130, 55);
	m_wndFindDocument.Create(this,135, 30, 260, 55); 
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 265, 30, 385, 55);
	m_wndPatientName.Create(this,390, 30, 640, 55); 
	m_wndPatientInformation.Create(this, _T("TÌM KIẾM THÔNG TIN BỆNH NHÂN LIÊN QUAN ĐẾN NGƯỜI NHÀ"), 3, 5, 643, 263);
	m_wndYobLabel.Create(this, _T("Yob"), 10, 60, 130, 85);
	m_wndYob.Create(this,135, 60, 260, 85); 
	m_wndSexLabel.Create(this, _T("Sex"), 265, 60, 385, 85);
	m_wndSex.Create(this,390, 60, 515, 85); 
	m_wndMobileLabel.Create(this, _T("Điện thoại"), 10, 90, 130, 115);
	m_wndMobile.Create(this,135, 90, 640, 115); 
	m_wndAddressLabel.Create(this, _T("Address"), 10, 121, 130, 146);
	m_wndAddress.Create(this,135, 121, 640, 146); 
	m_wndDepartmentLabel.Create(this, _T("Department"), 10, 151, 130, 176);
	m_wndDepartment.Create(this,135, 151, 640, 176); 
	m_wndDescriptionLabel.Create(this, _T("Description"), 10, 181, 130, 206);
	m_wndDescription.Create(this,135, 180, 640, 258); 
	m_wndEdit.Create(this, _T("&Edit"), 394, 275, 474, 300);
	m_wndSave.Create(this, _T("&Save"), 480, 275, 560, 300);
	m_wndCancel.Create(this, _T("&Cancel"), 565, 275, 645, 300);
	m_wndCancel.EnableWindow(false);*/

	m_wndthongtinnguoinha.Create(this, _T("THÔNG TIN NGƯỜI NHÀ ĐÃ THĂM"), 3, 264, 643, 450);
	m_wndFindDocumentLabel.Create(this, _T("FindDocument"), 10, 30, 130, 55);
	m_wndFindDocument.Create(this,135, 30, 260, 55); 
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 265, 30, 385, 55);
	m_wndPatientInformation.Create(this, _T("TÌM KIẾM THÔNG TIN BỆNH NHÂN LIÊN QUAN ĐẾN NGƯỜI NHÀ"), 3, 5, 643, 263);
	m_wndPatientName.Create(this,390, 30, 640, 55); 
	m_wndYobLabel.Create(this, _T("Yob"), 10, 60, 130, 85);
	m_wndYob.Create(this,135, 60, 260, 85); 
	m_wndSexLabel.Create(this, _T("Sex"), 265, 60, 385, 85);
	m_wndSex.Create(this,390, 60, 515, 85); 
	m_wndMobileLabel.Create(this, _T("Điện thoại"), 10, 90, 130, 115);
	m_wndMobile.Create(this,135, 90, 640, 115); 
	m_wndAddressLabel.Create(this, _T("Address"), 10, 121, 130, 146);
	m_wndAddress.Create(this,135, 121, 640, 146); 
	m_wndDepartmentLabel.Create(this, _T("Department"), 10, 151, 130, 176);
	m_wndDepartment.Create(this,135, 151, 640, 176); 
	m_wndDescriptionLabel.Create(this, _T("Description"), 10, 181, 130, 206);
	m_wndDescription.Create(this,135, 180, 640, 258); 
	m_wndRelativeList.Create(this,9, 284, 639, 420); 	
	m_wndEdit.Create(this, _T("&Edit"), 394, 461, 474, 486);
	m_wndSave.Create(this, _T("&Save"), 480, 461, 560, 486);
	m_wndCancel.Create(this, _T("&Cancel"), 565, 461, 645, 486);
	m_wndXemphieukham.Create(this, _T("Xem phiếu khám"), 521, 423, 639, 448);
	m_wndCancel.EnableWindow(false);	
	
}
void CHMSFindPatientinformationDialog::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndFindDocument.SetLimitText(1024);
	m_wndFindDocument.SetCheckValue(true);
	m_wndPatientName.SetLimitText(1024);
	m_wndPatientName.SetCheckValue(true);
	m_wndYob.SetLimitText(1024);
	m_wndYob.SetCheckValue(true);
	m_wndSex.SetLimitText(1024);
	m_wndSex.SetCheckValue(true);
	m_wndMobile.SetLimitText(35);
	m_wndMobile.SetCheckValue(true);
	m_wndAddress.SetLimitText(1024);
	m_wndAddress.SetCheckValue(true);
	m_wndDepartment.SetLimitText(1024);
	m_wndDepartment.SetCheckValue(true);
	m_wndDescription.SetLimitText(1024);
	m_wndDescription.SetCheckValue(true);
	m_wndRelativeList.InsertColumn(0, _T("Số hồ sơ"), CFMT_NUMBER, 70);
	m_wndRelativeList.InsertColumn(1, _T("Họ và tên"), CFMT_TEXT, 200);
	m_wndRelativeList.InsertColumn(2, _T("Năm sinh"), CFMT_TEXT, 50);
	m_wndRelativeList.InsertColumn(3, _T("Giới"), CFMT_TEXT, 50);
	m_wndRelativeList.InsertColumn(4, _T("Địa chỉ"), CFMT_TEXT, 200);
	m_wndRelativeList.InsertColumn(5, _T("T/G khám"), CFMT_TEXT, 150);	
	m_wndRelativeList.InsertColumn(6, _T("Số ĐT"), CFMT_TEXT, 200);

}
void CHMSFindPatientinformationDialog::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
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
	//m_wndMobile.SetEvent(WE_CHANGE, _OnMobileChangeFnc);
	//m_wndMobile.SetEvent(WE_SETFOCUS, _OnMobileSetfocusFnc);
	//m_wndMobile.SetEvent(WE_KILLFOCUS, _OnMobileKillfocusFnc);
	m_wndMobile.SetEvent(WE_CHECKVALUE, _OnMobileCheckValueFnc);
	//m_wndAddress.SetEvent(WE_CHANGE, _OnAddressChangeFnc);
	//m_wndAddress.SetEvent(WE_SETFOCUS, _OnAddressSetfocusFnc);
	//m_wndAddress.SetEvent(WE_KILLFOCUS, _OnAddressKillfocusFnc);
	m_wndAddress.SetEvent(WE_CHECKVALUE, _OnAddressCheckValueFnc);
	//m_wndDepartment.SetEvent(WE_CHANGE, _OnDepartmentChangeFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_CHECKVALUE, _OnDepartmentCheckValueFnc);
	//m_wndDescription.SetEvent(WE_CHANGE, _OnDescriptionChangeFnc);
	//m_wndDescription.SetEvent(WE_SETFOCUS, _OnDescriptionSetfocusFnc);
	//m_wndDescription.SetEvent(WE_KILLFOCUS, _OnDescriptionKillfocusFnc);
	m_wndDescription.SetEvent(WE_CHECKVALUE, _OnDescriptionCheckValueFnc);
	m_wndRelativeList.SetEvent(WE_SELCHANGE, _OnRelativeListSelectChangeFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndRelativeList.SetEvent(WE_LOADDATA, _OnRelativeListLoadDataFnc);
	m_wndXemphieukham.SetEvent(WE_CLICK, _OnXemphieukhamSelectFnc);
	SetWindowFont(&m_wndFindDocument, GetFaceName(), GetFaceSize()+2, true);	
	m_wndFindDocument.SetTextColor(RGB(255, 0, 0));

	GetDataToScreen();
	//OnRelativeListLoadData();
	SetMode(GetMode());
}
void CHMSFindPatientinformationDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndFindDocument.GetDlgCtrlID(), m_nFindDocument);
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);
	DDX_Text(pDX, m_wndYob.GetDlgCtrlID(), m_szYob);
	DDX_Text(pDX, m_wndSex.GetDlgCtrlID(), m_szSex);
	DDX_Text(pDX, m_wndMobile.GetDlgCtrlID(), m_szMobile);
	DDX_Text(pDX, m_wndAddress.GetDlgCtrlID(), m_szAddress);
	DDX_Text(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartment);
	DDX_Text(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescription);

}
void CHMSFindPatientinformationDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("FindDocument")] =  m_nFindDocument;
	m_jData[_T("PatientName")] =  m_szPatientName;
	m_jData[_T("Yob")] =  m_szYob;
	m_jData[_T("Sex")] =  m_szSex;
	m_jData[_T("Mobile")] =  m_szMobile;
	m_jData[_T("Address")] =  m_szAddress;
	m_jData[_T("Department")] =  m_szDepartment;
	m_jData[_T("Description")] =  m_szDescription;
	}
	else
	{
			
	m_jData[_T("FindDocument")].GetValue(m_nFindDocument);
	m_jData[_T("PatientName")].GetValue(m_szPatientName);
	m_jData[_T("Yob")].GetValue(m_szYob);
	m_jData[_T("Sex")].GetValue(m_szSex);
	m_jData[_T("Mobile")].GetValue(m_szMobile);
	m_jData[_T("Address")].GetValue(m_szAddress);
	m_jData[_T("Department")].GetValue(m_szDepartment);
	m_jData[_T("Description")].GetValue(m_szDescription);
	}

}
void CHMSFindPatientinformationDialog::GetDataToScreen()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);
	CRecord rs(&pMF->m_db);
	CRecord rsl(&pMF->m_db);
	CString szSQL, szNote;
	/*long tmp = 0;	
	szSQL.Format(_T("SELECT RE_RELATIVENO, RE_NOTE FROM RM_RELATIVE_INFOR WHERE RE_PATIENTNO=%ld AND rownum=1"),m_nDocumentNo);
	rsl.ExecSQL(szSQL);
	//_msg(_T("%s"),szSQL); 
	rsl.GetValue(_T("RE_RELATIVENO"), tmp);
	rsl.GetValue(_T("RE_NOTE"), szNote);

	if (tmp > 0)
	{
		m_nFindDocument = tmp;
		m_szDescription = szNote;
	}
	else
	{
		//m_wndEdit.EnableWindow(false);
	}*/

	szSQL.Format(_T(" SELECT DISTINCT hd_docno AS docno,") \
				_T("   hd_patientno           AS patientno,") \
				_T(" hcr_admitdate as admitdate, ") \
				_T("   CASE") \
				_T("     WHEN htr_deptid IS NOT NULL") \
				_T("     THEN GET_DEPARTMENTNAME(HMS_GET_LASTDEPT(hd_docno)) ELSE HD_ENDDEPT") \
				_T("   END AS deptid,") \
				_T("   trim( hp_surname") \
				_T("   ||' '") \
				_T("   ||hp_midname") \
				_T("   ||' '") \
				_T("   ||hp_firstname)                                 AS pname,") \
				_T("   TO_CHAR(hp_birthdate, 'YYYY')                   AS yob,") \
				_T("   hms_getsex(hp_sex)                              AS gender,") \
				_T("   hms_getaddress(nvl(hd_provid, hp_provid), nvl(hd_distid, hp_distid), nvl(hd_villid, hp_villid)) AS address,") \
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

					//_msg(_T("%s"), szSQL);
					
					m_szPatientName.Empty();
					m_szYob.Empty();
					m_szSex.Empty();
					m_szAddress.Empty();
					m_szDepartment.Empty();
					m_szMobile.Empty();

					if(!rs.IsEOF())
					{
						rs.GetValue(_T("pname"), m_szPatientName);
						rs.GetValue(_T("yob"), m_szYob);
						rs.GetValue(_T("gender"), m_szSex);
						rs.GetValue(_T("address"), m_szAddress);
						rs.GetValue(_T("deptid"), m_szDepartment);
						rs.GetValue(_T("phone"), m_szMobile);
					}

	//Lấy ra lượt điều trị hiện tại -> đẩy vào bảng người nhà
		szSQL.Format(_T("SELECT NVL(HTR_TREATTIME,0) as treattime FROM HMS_TREATMENT_RECORD WHERE htr_docno=%ld  AND htr_status = 'I' AND rownum=1"),m_nFindDocument);
		rsl.ExecSQL(szSQL);
		
		if(!rsl.IsEOF())
					{
						rsl.GetValue(_T("treattime"), m_ntreattime);						
					}					
				UpdateData(FALSE);
}
void CHMSFindPatientinformationDialog::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
long CHMSFindPatientinformationDialog::OnRelativeListLoadData()
{
CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szActive;
	m_wndRelativeList.BeginLoad(); 
	m_wndRelativeList.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T(" select RE_PATIENTNO as docno,") \
				_T(" to_char(hd_admitdate, 'DD/MM/YYYY HH24:MI:SS') AS admitdate,") \
				_T("  trim( hp_surname") \
				_T("   ||' '") \
				_T("   ||hp_midname") \
				_T("   ||' '") \
				_T("   ||hp_firstname)                                 AS pname,") \
				_T("   TO_CHAR(hp_birthdate, 'YYYY')                   AS yob,") \
				_T("   hms_getsex(hp_sex)                              AS gender,") \
				_T("   hms_getaddress(nvl(hd_provid, hp_provid), nvl(hd_distid, hp_distid), nvl(hd_villid, hp_villid)) AS address,") \
				_T("    hd_telephone") \
				_T("   ||','") \
				_T("   ||hd_contacttel AS phone") \
				_T(" from RM_RELATIVE_INFOR") \
				_T(" left join hms_doc ON (RE_PATIENTNO=hd_docno)") \
				_T(" left join hms_patient ON (HD_PATIENTNO=HP_PATIENTNO)") \
				_T(" where RE_RELATIVENO=%ld  AND hd_docno>0 AND RE_RELATIVENO <> RE_PATIENTNO ORDER BY hd_admitdate"), m_nFindDocument);

				nCount = rs.ExecSQL(szSQL);
				//_msg(_T("%s"), szSQL);

				while(!rs.IsEOF())
	{ 
		int nItem = m_wndRelativeList.AddItems
			(
			rs.GetValue(_T("docno")), 
			rs.GetValue(_T("pname")),
			rs.GetValue(_T("yob")),
			rs.GetValue(_T("gender")),
			rs.GetValue(_T("address")),
			rs.GetValue(_T("admitdate")),
			rs.GetValue(_T("phone")),NULL);
		
		rs.MoveNext();
	}
	m_wndRelativeList.EndLoad();					
	return 0;
}

void CHMSFindPatientinformationDialog::OnRelativeListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
		if (nNewItem < 0)
		return;
	m_nDocno = ToLong(m_wndRelativeList.GetItemText(nNewItem, 0));
	
} 

void CHMSFindPatientinformationDialog::OnXemphieukhamSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	pMF->OnPrintExaminationSheet(m_nDocno);	
} 
void CHMSFindPatientinformationDialog::SetDefaultValues(){

	m_nFindDocument=0;
	m_ntreattime=0;
	m_szPatientName.Empty();
	m_szYob.Empty();
	m_szSex.Empty();
	m_szMobile.Empty();
	m_szAddress.Empty();
	m_szDepartment.Empty();
	m_szDescription.Empty();

}
int CHMSFindPatientinformationDialog::SetMode(int nMode)
{
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode)
		{
 		case VM_ADD: 
 			EnableControls(FALSE);
 			EnableButtons(TRUE, 0, 1, -1);
 			SetDefaultValues();
 			break;
 		case VM_EDIT: 
 			EnableControls(FALSE);
 			EnableButtons(TRUE, 0, 1, -1);
 			break;
 		case VM_VIEW: 
 			EnableControls(FALSE);
 			EnableButtons(TRUE, 0, 1, -1);
 			break;
 		case VM_NONE: 
 			EnableControls(FALSE);
 			EnableButtons(TRUE, 0, 1, -1);
 			SetDefaultValues();
 			break;
 		};
		m_wndFindDocument.EnableWindow(TRUE);
		m_wndPatientName.EnableWindow(FALSE);
		m_wndYob.EnableWindow(FALSE);
		m_wndSex.EnableWindow(FALSE);
		m_wndAddress.EnableWindow(FALSE);
		m_wndDepartment.EnableWindow(FALSE);
		m_wndMobile.EnableWindow(FALSE);

		if (m_nDocumentNo == 0)
		{
			m_wndEdit.EnableWindow(false);
		}
		m_wndXemphieukham.EnableWindow(true);
 		UpdateData(FALSE);
 		return nOldMode;
}
/*void CHMSFindPatientinformationDialog::OnFindDocumentChange(){
	
} */
/*void CHMSFindPatientinformationDialog::OnFindDocumentSetfocus(){
	
} */
/*void CHMSFindPatientinformationDialog::OnFindDocumentKillfocus(){
	
} */
int CHMSFindPatientinformationDialog::OnFindDocumentCheckValue()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CString szSQL, tmpStr, szdocstatus, szsuggestion, szoutpatient, sztreatstatus;
	CString szWhere;
	CRecord rs(&pMF->m_db);
	CRecord rsl(&pMF->m_db);
	int vcountno;
	
	szSQL.Format(_T("SELECT NVL(hd_status,'X') as docstatus, NVL(HD_SUGGESTION, 'X') as suggestion from hms_doc where hd_docno =%ld"), m_nFindDocument);
	rs.ExecSQL(szSQL);
	
	rs.GetValue(_T("docstatus"), szdocstatus);
	rs.GetValue(_T("suggestion"), szsuggestion);	

	if ((szsuggestion != _T("C")) && (szsuggestion != _T("D")))
	//Check phải làm bệnh án ở cửa bệnh án//
	//szSQL.Format(_T("SELECT hcr_docno as docno FROM HMS_CLINICAL_RECORD WHERE hcr_docno=%ld"), m_nFindDocument);
	//if(rs.GetIntValue() <= 0)	
	{
		ShowMessageBox(_T("Bệnh nhân phải được kết luận vào viện, vui lòng nhập đúng thông tin!"));	
		SetDefaultValues();
		UpdateData(false);
		return -2;
	}
	//Bệnh nhân điều trị ngoại trú trong khoa không thuộc diện được miễn

	szSQL.Format(_T(" SELECT NVL(htr_outpatient,'N') as isoutpatient, htr_status as treatstatus from HMS_TREATMENT_RECORD") \
	_T(" WHERE htr_docno=%ld and htr_idx in ") \
	_T(" (select max(htr_idx) as idx  from ") \
	_T(" HMS_TREATMENT_RECORD where htr_docno=%ld)"), m_nFindDocument, m_nFindDocument);
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
	
	rs.GetValue(_T("isoutpatient"), szoutpatient);
	rs.GetValue(_T("treatstatus"), sztreatstatus);

	if (sztreatstatus == _T("T"))
	{
		ShowMessageBox(_T("Bệnh nhân đã kết thúc hồ sơ, người nhà không được miễn phí xét nghiệm covid19!"));	
		SetDefaultValues();
		UpdateData(false);
		return -3;	
	}
	
	else if (szoutpatient == _T("Y") && sztreatstatus != _T("T"))
	{
		ShowMessageBox(_T("Bệnh nhân có bệnh án điều trị ngoại trú, người nhà không được miễn phí xét nghiệm covid19!"));	
		SetDefaultValues();
		UpdateData(false);
		return -4;	
	}
	
	szSQL.Format(_T("   SELECT count(*) as vcount from RM_RELATIVE_INFOR") \
	_T("   where RE_RELATIVENO=%ld") \
	_T("   AND (select count(*) FROM hms_testorder WHERE hpc_docno=re_patientno and hpc_status='T')>0"),m_nFindDocument);
	rsl.ExecSQL(szSQL);
	rsl.GetValue(_T("vcount"), vcountno);
		if (vcountno >= 2)
		{
		ShowMessageBox(_T("Theo quy định của Bệnh viện, Bệnh nhân chỉ được miễn phí 2 lần xét nghiệm người nhà nếu điều trị nội trú, không được miễn phí nếu điều trị ngoại trú! Lưu ý thực hiện đúng quy định"),MB_ICONERROR | MB_OK);
		}
	GetDataToScreen();
	OnRelativeListLoadData();
	return 0;
} 
/*void CHMSFindPatientinformationDialog::OnPatientNameChange(){
	
} */
/*void CHMSFindPatientinformationDialog::OnPatientNameSetfocus(){
	
} */
/*void CHMSFindPatientinformationDialog::OnPatientNameKillfocus(){
	
} */
int CHMSFindPatientinformationDialog::OnPatientNameCheckValue()
{
	
	return 0;
} 
/*void CHMSFindPatientinformationDialog::OnYobChange(){
	
} */
/*void CHMSFindPatientinformationDialog::OnYobSetfocus(){
	
} */
/*void CHMSFindPatientinformationDialog::OnYobKillfocus(){
	
} */
int CHMSFindPatientinformationDialog::OnYobCheckValue(){
	return 0;
} 
/*void CHMSFindPatientinformationDialog::OnSexChange(){
	
} */
/*void CHMSFindPatientinformationDialog::OnSexSetfocus(){
	
} */
/*void CHMSFindPatientinformationDialog::OnSexKillfocus(){
	
} */
int CHMSFindPatientinformationDialog::OnSexCheckValue(){
	return 0;
} 
/*void CHMSFindPatientinformationDialog::OnMobileChange(){
	
} */
/*void CHMSFindPatientinformationDialog::OnMobileSetfocus(){
	
} */
/*void CHMSFindPatientinformationDialog::OnMobileKillfocus(){
	
} */
int CHMSFindPatientinformationDialog::OnMobileCheckValue(){
	return 0;
} 
/*void CHMSFindPatientinformationDialog::OnAddressChange(){
	
} */
/*void CHMSFindPatientinformationDialog::OnAddressSetfocus(){
	
} */
/*void CHMSFindPatientinformationDialog::OnAddressKillfocus(){
	
} */
int CHMSFindPatientinformationDialog::OnAddressCheckValue(){
	return 0;
} 
/*void CHMSFindPatientinformationDialog::OnDepartmentChange(){
	
} */
/*void CHMSFindPatientinformationDialog::OnDepartmentSetfocus(){
	
} */
/*void CHMSFindPatientinformationDialog::OnDepartmentKillfocus(){
	
} */
int CHMSFindPatientinformationDialog::OnDepartmentCheckValue(){
	return 0;
} 
/*void CHMSFindPatientinformationDialog::OnDescriptionChange(){
	
} */
/*void CHMSFindPatientinformationDialog::OnDescriptionSetfocus(){
	
} */
/*void CHMSFindPatientinformationDialog::OnDescriptionKillfocus(){
	
} */
int CHMSFindPatientinformationDialog::OnDescriptionCheckValue(){
	return 0;
}

void CHMSFindPatientinformationDialog::OnEditSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_nDocumentNo = 0;
	SetDefaultValues();
	m_wndFindDocument.SetFocus();
	m_wndEdit.EnableWindow(false);
	UpdateData(false);	
}

void CHMSFindPatientinformationDialog::OnSaveSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnSaveHMSFindPatientinformationDialog();
	
} 
void CHMSFindPatientinformationDialog::OnCancelSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
	
} 
int CHMSFindPatientinformationDialog::OnAddHMSFindPatientinformationDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSFindPatientinformationDialog::OnEditHMSFindPatientinformationDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSFindPatientinformationDialog::OnDeleteHMSFindPatientinformationDialog(){
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
 		OnCancelHMSFindPatientinformationDialog();
 	}
	return 0;
}
int CHMSFindPatientinformationDialog::OnSaveHMSFindPatientinformationDialog()
{
 	if(!IsValidateData())
 		return -1;	

 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
 	CString szSQL;
	CRecord rs(&pMF->m_db);
	int ninputno = 0;
	
	if (m_szPatientName.IsEmpty() || m_szYob.IsEmpty() || m_szSex.IsEmpty())
	{
		ShowMessageBox(_T("Bạn chưa nhập thông tin bệnh nhân!"));
		return -1;
	}

	//Kiểm tra điều kiện 72 tiếng mới được xét nghiệm

	szSQL.Format(_T(" SELECT count(*) AS inputno from RM_RELATIVE_INFOR LEFT JOIN HMS_TREATMENT_RECORD ON (RE_RELATIVENO=htr_docno) ") \
	_T(" where RE_RELATIVENO=%ld AND htr_status='I' AND htr_outpatient='N'") \
	_T(" AND (select count(*) FROM hms_testorder WHERE hpc_docno=re_patientno AND HTR_TREATTIME=RE_TREATTIME)>0"), m_nFindDocument);
	
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
	
	rs.GetValue(_T("inputno"), ninputno);

	if ( ninputno >=2 )
	
	{
		int ret = ShowMessageBox(_T("Bệnh nhân đã có 2 người nhà được xét nghiệm miễn phí, vui lòng ra cửa dịch vụ để tiếp đón như bệnh nhân thường"));		
		{
			return -2;
		}		
		
	}
	
	//szSQL.Format(_T("UPDATE_RELATIVE_INFOR(%ld, %ld, '%s', '%s', TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')) "), m_nFindDocument, pMF->m_nDocumentNo, pMF->GetCurrentUser(), m_szDescription, pMF->GetSysDateTime());
    
 	//int ret = str2int(pMF->ExecDML(szSQL));	
 	//if(ret > 0)
 	//{
 		//ShowMessageBox(_T("Have a nice day!, Nhớ thực hiện 5K bạn nhé"));
 		SetMode(VM_VIEW);
		CGuiDialog::OnOK();
 	//}
 	
 	//return ret;
 	return 0;
}
int CHMSFindPatientinformationDialog::OnCancelHMSFindPatientinformationDialog(){
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
int CHMSFindPatientinformationDialog::OnHMSFindPatientinformationDialogListLoadData(){
	return 0;
}
