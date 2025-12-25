#include "HMSPatientEncodeDialog.h"
#include "MainFrm.h"

string encryptDecrypt(string toEncrypt) {
    char key[3] = {'K', 'C', 'Q'}; //Any chars will work
    string output = toEncrypt;
    
    for (size_t i = 0; i < toEncrypt.size(); i++)
        output[i] = toEncrypt[i] ^ key[i % (sizeof(key) / sizeof(char))];
    
    return output;
}

/*static void _OnOriginalNameChangeFnc(CWnd *pWnd){
	((CHMSPatientEncodeDialog *)pWnd)->OnOriginalNameChange();
} */
/*static void _OnOriginalNameSetfocusFnc(CWnd *pWnd){
	((CHMSPatientEncodeDialog *)pWnd)->OnOriginalNameSetfocus();} */ 
/*static void _OnOriginalNameKillfocusFnc(CWnd *pWnd){
	((CHMSPatientEncodeDialog *)pWnd)->OnOriginalNameKillfocus();
} */
static int _OnOriginalNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientEncodeDialog *)pWnd)->OnOriginalNameCheckValue();
} 
/*static void _OnSaltChangeFnc(CWnd *pWnd){
	((CHMSPatientEncodeDialog *)pWnd)->OnSaltChange();
} */
/*static void _OnSaltSetfocusFnc(CWnd *pWnd){
	((CHMSPatientEncodeDialog *)pWnd)->OnSaltSetfocus();} */ 
/*static void _OnSaltKillfocusFnc(CWnd *pWnd){
	((CHMSPatientEncodeDialog *)pWnd)->OnSaltKillfocus();
} */
static int _OnSaltCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientEncodeDialog *)pWnd)->OnSaltCheckValue();
} 
static void _OnAutoEncryptionSelectFnc(CWnd *pWnd){
	 ((CHMSPatientEncodeDialog*)pWnd)->OnAutoEncryptionSelect();
}
/*static void _OnAliasNameChangeFnc(CWnd *pWnd){
	((CHMSPatientEncodeDialog *)pWnd)->OnAliasNameChange();
} */
/*static void _OnAliasNameSetfocusFnc(CWnd *pWnd){
	((CHMSPatientEncodeDialog *)pWnd)->OnAliasNameSetfocus();} */ 
/*static void _OnAliasNameKillfocusFnc(CWnd *pWnd){
	((CHMSPatientEncodeDialog *)pWnd)->OnAliasNameKillfocus();
} */
static int _OnAliasNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientEncodeDialog *)pWnd)->OnAliasNameCheckValue();
} 
static void _OnEncryptSelectFnc(CWnd *pWnd){
	CHMSPatientEncodeDialog *pVw = (CHMSPatientEncodeDialog *)pWnd;
	pVw->OnEncryptSelect();
} 
static void _OnDecryptSelectFnc(CWnd *pWnd){
	CHMSPatientEncodeDialog *pVw = (CHMSPatientEncodeDialog *)pWnd;
	pVw->OnDecryptSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSPatientEncodeDialog *pVw = (CHMSPatientEncodeDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSPatientEncodeDialogFnc(CWnd *pWnd){
	 return ((CHMSPatientEncodeDialog*)pWnd)->OnAddHMSPatientEncodeDialog();
} 
static int _OnEditHMSPatientEncodeDialogFnc(CWnd *pWnd){
	 return ((CHMSPatientEncodeDialog*)pWnd)->OnEditHMSPatientEncodeDialog();
} 
static int _OnDeleteHMSPatientEncodeDialogFnc(CWnd *pWnd){
	 return ((CHMSPatientEncodeDialog*)pWnd)->OnDeleteHMSPatientEncodeDialog();
} 
static int _OnSaveHMSPatientEncodeDialogFnc(CWnd *pWnd){
	 return ((CHMSPatientEncodeDialog*)pWnd)->OnSaveHMSPatientEncodeDialog();
} 
static int _OnCancelHMSPatientEncodeDialogFnc(CWnd *pWnd){
	 return ((CHMSPatientEncodeDialog*)pWnd)->OnCancelHMSPatientEncodeDialog();
} 
CHMSPatientEncodeDialog::CHMSPatientEncodeDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 325;
	m_nDlgHeight = 155;
	SetDefaultValues();
	m_bIsEncode = true;
}
CHMSPatientEncodeDialog::~CHMSPatientEncodeDialog(){
}
void CHMSPatientEncodeDialog::OnCreateComponents(){
	m_wndOriginalNameLabel.Create(this, _T("Original Name"), 10, 30, 90, 55);
	m_wndOriginalName.Create(this,95, 30, 315, 55); 
	m_wndSaltLabel.Create(this, _T("Salt"), 10, 60, 90, 85);
	m_wndSalt.Create(this,95, 60, 195, 85); 
	m_wndPatientProfile.Create(this, _T("Patient Profile"), 5, 5, 319, 121);
	m_wndAutoEncryption.Create(this, _T("Auto encryption"), 200, 60, 315, 85);
	m_wndAliasNameLabel.Create(this, _T("Alias Name"), 10, 90, 90, 115);
	m_wndAliasName.Create(this,95, 90, 315, 115); 
	m_wndEncrypt.Create(this, _T("Encrypt"), 5, 126, 85, 151);
	m_wndDecrypt.Create(this, _T("Decrypt"), 155, 126, 235, 151);
	m_wndClose.Create(this, _T("&Close"), 240, 126, 320, 151);

}
void CHMSPatientEncodeDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndOriginalName.SetLimitText(35);
	m_wndOriginalName.SetCheckValue(true);
	m_wndSalt.SetLimitText(35);
	m_wndSalt.SetCheckValue(true);
	m_wndAliasName.SetLimitText(65);
	m_wndAliasName.SetCheckValue(true);

	m_wndOriginalName.SetReadOnly(true);
}
void CHMSPatientEncodeDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndOriginalName.SetEvent(WE_CHANGE, _OnOriginalNameChangeFnc);
	//m_wndOriginalName.SetEvent(WE_SETFOCUS, _OnOriginalNameSetfocusFnc);
	//m_wndOriginalName.SetEvent(WE_KILLFOCUS, _OnOriginalNameKillfocusFnc);
	m_wndOriginalName.SetEvent(WE_CHECKVALUE, _OnOriginalNameCheckValueFnc);
	//m_wndSalt.SetEvent(WE_CHANGE, _OnSaltChangeFnc);
	//m_wndSalt.SetEvent(WE_SETFOCUS, _OnSaltSetfocusFnc);
	//m_wndSalt.SetEvent(WE_KILLFOCUS, _OnSaltKillfocusFnc);
	m_wndSalt.SetEvent(WE_CHECKVALUE, _OnSaltCheckValueFnc);
	m_wndAutoEncryption.SetEvent(WE_CLICK, _OnAutoEncryptionSelectFnc);
	//m_wndAliasName.SetEvent(WE_CHANGE, _OnAliasNameChangeFnc);
	//m_wndAliasName.SetEvent(WE_SETFOCUS, _OnAliasNameSetfocusFnc);
	//m_wndAliasName.SetEvent(WE_KILLFOCUS, _OnAliasNameKillfocusFnc);
	m_wndAliasName.SetEvent(WE_CHECKVALUE, _OnAliasNameCheckValueFnc);
	m_wndEncrypt.SetEvent(WE_CLICK, _OnEncryptSelectFnc);
	m_wndDecrypt.SetEvent(WE_CLICK, _OnDecryptSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	
	GetDataToScreen();

}
void CHMSPatientEncodeDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndOriginalName.GetDlgCtrlID(), m_szOriginalName);
	DDX_Text(pDX, m_wndSalt.GetDlgCtrlID(), m_szSalt);
	DDX_Check(pDX, m_wndAutoEncryption.GetDlgCtrlID(), m_bAutoEncryption);
	DDX_Text(pDX, m_wndAliasName.GetDlgCtrlID(), m_szAliasName);

}
void CHMSPatientEncodeDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM hms_patient_encode WHERE hpe_patientno = %ld"), m_nPatientNo);
	rs.ExecSQL(szSQL);

	m_bIsEncode = true;
	if(!rs.IsEOF())
	{
		char szName[254];
		CString szEncodeName;
		memset(szName, '\0', 254);

		m_bIsEncode = false;
		rs.GetValue(_T("hpe_alias_name"), m_szAliasName);
		rs.GetValue(_T("hpe_encode_name"), m_szOriginalName);
		m_szPNameEncode = m_szOriginalName;

	}
	SetMode(VM_EDIT);
	UpdateData(FALSE);

}
void CHMSPatientEncodeDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSPatientEncodeDialog::SetDefaultValues(){

	m_szOriginalName.Empty();
	m_szSalt.Empty();
	m_bAutoEncryption=FALSE;
	m_szAliasName.Empty();

}
int CHMSPatientEncodeDialog::SetMode(int nMode){
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
		if(m_bIsEncode)
		{
			m_wndEncrypt.EnableWindow(true);
			m_wndDecrypt.EnableWindow(false);
		}
		else
		{
			m_wndEncrypt.EnableWindow(false);
			m_wndDecrypt.EnableWindow(true);
			
		}
		if(!m_bIsEncode)
		{
			m_wndSalt.EnableWindow(FALSE);
			m_wndAutoEncryption.EnableWindow(FALSE);
		}
		m_wndClose.EnableWindow(true);
 		UpdateData(FALSE);
 		return nOldMode;
}
/*void CHMSPatientEncodeDialog::OnOriginalNameChange(){
	
} */
/*void CHMSPatientEncodeDialog::OnOriginalNameSetfocus(){
	
} */
/*void CHMSPatientEncodeDialog::OnOriginalNameKillfocus(){
	
} */
int CHMSPatientEncodeDialog::OnOriginalNameCheckValue(){
	return 0;
} 
/*void CHMSPatientEncodeDialog::OnSaltChange(){
	
} */
/*void CHMSPatientEncodeDialog::OnSaltSetfocus(){
	
} */
/*void CHMSPatientEncodeDialog::OnSaltKillfocus(){
	
} */
int CHMSPatientEncodeDialog::OnSaltCheckValue(){
	return 0;
} 
	void CHMSPatientEncodeDialog::OnAutoEncryptionSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
/*void CHMSPatientEncodeDialog::OnAliasNameChange(){
	
} */
/*void CHMSPatientEncodeDialog::OnAliasNameSetfocus(){
	
} */
/*void CHMSPatientEncodeDialog::OnAliasNameKillfocus(){
	
} */
int CHMSPatientEncodeDialog::OnAliasNameCheckValue(){
	return 0;
} 

#include "SHA256.h"
/*
CString CPOSConnection::SHA256Encode(LPCTSTR lpszData)
{
	CString szSHA256Encode;
	szSHA256Encode.Empty();

	CStringA szString = UTF8Encode(lpszData, _tcslen(lpszData));
	std::string encode = ::sha256(std::string(szString));
	szSHA256Encode = UTF8Decode(encode.c_str(), encode.length());

	return szSHA256Encode;	
}
*/
void CHMSPatientEncodeDialog::OnEncryptSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	char szName[254];
	WCHAR szEncodeName[254];
	memset(szEncodeName, L'\0', 254);

	if(!IsValidateData())
 		return;

	::WideCharToMultiByte(CP_UTF8, 0, m_szOriginalName, m_szOriginalName.GetLength(), szName, 254, 0, 0);
	std::string encode = encryptDecrypt(std::string(szName));
	printf("\r\n%s", encode.c_str());
	::MultiByteToWideChar(CP_UTF8, 0, encode.c_str(), encode.length(), szEncodeName, 254);
	
	szSQL.Format(_T("INSERT INTO hms_patient_encode(hpe_patientno,hpe_salt, hpe_encode_name, hpe_alias_name) ") \
			_T("VALUES(%ld, '%s', '%s', '%s') "),
				m_nPatientNo, m_szSalt, szEncodeName, m_szAliasName);
	int ret = pMF->ExecSQL(szSQL);
	if( ret > 0)
	{
		CString szFirstName, szMidName, szSurName;

		if(!m_szAliasName.IsEmpty())
		{
			SplitName(m_szAliasName, szSurName, szMidName, szFirstName);
		}
		else
		{
			m_szAliasName = szEncodeName;
		}
		szSQL.Format(_T("UPDATE hms_patient SET hp_firstname='%s', hp_midname='%s', hp_surname='%s' ") \
			_T(" WHERE hp_patientno=%ld "), szFirstName, szMidName, szSurName, m_nPatientNo);
_tprintf(_T("\r\n%s"), szSQL);
		pMF->ExecSQL(szSQL);
		CGuiDialog::OnOK();
	}


} 
void CHMSPatientEncodeDialog::OnDecryptSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
	CRecord rs(&pMF->m_db);
	CString szSQL;
	char szName[254];
	WCHAR szDecodeName[254];
	CString szEncodeName;
	memset(szName, '\0', 254);
	memset(szDecodeName, L'\0', 254);
	::WideCharToMultiByte(CP_UTF8, 0, m_szPNameEncode, m_szPNameEncode.GetLength(), szName, 254, 0, 0);
	std::string encode = encryptDecrypt(std::string(szName));
	printf("\r\n%s", encode.c_str());
	::MultiByteToWideChar(CP_UTF8, 0, encode.c_str(), encode.length(), szDecodeName, 254);

	szEncodeName.Format(_T("%s"), szDecodeName);
	szSQL.Format(_T("DELETE FROM hms_patient_encode WHERE hpe_patientno=%ld "), m_nPatientNo);
	int ret = pMF->ExecSQL(szSQL);
	if( ret > 0)
	{
		CString szFirstName, szMidName, szSurName;
		if(!szEncodeName.IsEmpty())
		{
			SplitName(szEncodeName, szSurName, szMidName, szFirstName);
		}
		szSQL.Format(_T("UPDATE hms_patient set hp_firstname='%s', hp_midname='%s', hp_surname='%s' ") \
			_T(" WHERE hp_patientno=%ld "), szFirstName, szMidName, szSurName, m_nPatientNo);
		pMF->ExecSQL(szSQL);
		CGuiDialog::OnOK();
	}


} 
void CHMSPatientEncodeDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSPatientEncodeDialog::OnAddHMSPatientEncodeDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSPatientEncodeDialog::OnEditHMSPatientEncodeDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSPatientEncodeDialog::OnDeleteHMSPatientEncodeDialog(){
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
 		OnCancelHMSPatientEncodeDialog();
 	}
	return 0;
}
int CHMSPatientEncodeDialog::OnSaveHMSPatientEncodeDialog(){
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
 		//OnHMSPatientEncodeDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSPatientEncodeDialog::OnCancelHMSPatientEncodeDialog(){
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
int CHMSPatientEncodeDialog::OnHMSPatientEncodeDialogListLoadData(){
	return 0;
}
