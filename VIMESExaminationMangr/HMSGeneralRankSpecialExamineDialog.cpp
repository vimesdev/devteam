#include "HMSGeneralRankSpecialExamineDialog.h"
#include "MainFrm.h"
#include "HMSSpecialExamInputDlg.h"
#include "HMSSpecialExamSetupDlg.h"

/*static void _OnDoctorNameChangeFnc(CWnd *pWnd){
	((CHMSGeneralRankSpecialExamineDialog *)pWnd)->OnDoctorNameChange();
} */
/*static void _OnDoctorNameSetfocusFnc(CWnd *pWnd){
	((CHMSGeneralRankSpecialExamineDialog *)pWnd)->OnDoctorNameSetfocus();} */ 
/*static void _OnDoctorNameKillfocusFnc(CWnd *pWnd){
	((CHMSGeneralRankSpecialExamineDialog *)pWnd)->OnDoctorNameKillfocus();
} */
static int _OnDoctorNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSGeneralRankSpecialExamineDialog *)pWnd)->OnDoctorNameCheckValue();
} 
/*static void _OnExamDateChangeFnc(CWnd *pWnd){
	((CHMSGeneralRankSpecialExamineDialog *)pWnd)->OnExamDateChange();
} */
/*static void _OnExamDateSetfocusFnc(CWnd *pWnd){
	((CHMSGeneralRankSpecialExamineDialog *)pWnd)->OnExamDateSetfocus();} */ 
/*static void _OnExamDateKillfocusFnc(CWnd *pWnd){
	((CHMSGeneralRankSpecialExamineDialog *)pWnd)->OnExamDateKillfocus();
} */
static int _OnExamDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSGeneralRankSpecialExamineDialog *)pWnd)->OnExamDateCheckValue();
} 
/*static void _OnDescriptionChangeFnc(CWnd *pWnd){
	((CHMSGeneralRankSpecialExamineDialog *)pWnd)->OnDescriptionChange();
} */
/*static void _OnDescriptionSetfocusFnc(CWnd *pWnd){
	((CHMSGeneralRankSpecialExamineDialog *)pWnd)->OnDescriptionSetfocus();} */ 
/*static void _OnDescriptionKillfocusFnc(CWnd *pWnd){
	((CHMSGeneralRankSpecialExamineDialog *)pWnd)->OnDescriptionKillfocus();
} */
static int _OnDescriptionCheckValueFnc(CWnd *pWnd){
	return ((CHMSGeneralRankSpecialExamineDialog *)pWnd)->OnDescriptionCheckValue();
} 
static void _OnTemplateSelectFnc(CWnd *pWnd){
	CHMSGeneralRankSpecialExamineDialog *pVw = (CHMSGeneralRankSpecialExamineDialog *)pWnd;
	pVw->OnTemplateSelect();
}

static void _OnClearSelectFnc(CWnd *pWnd){
	CHMSGeneralRankSpecialExamineDialog *pVw = (CHMSGeneralRankSpecialExamineDialog *)pWnd;
	pVw->OnClearSelect();
}

static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSGeneralRankSpecialExamineDialog *pVw = (CHMSGeneralRankSpecialExamineDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSGeneralRankSpecialExamineDialog *pVw = (CHMSGeneralRankSpecialExamineDialog *)pWnd;
	pVw->OnCloseSelect();
} 
/*staticvoid_OnCategoryChangeFnc(CWnd*pWnd){
((CHMSGeneralRankSpecialExamineDialog*)pWnd)->OnCategoryChange();
}*/
/*staticvoid_OnCategorySetfocusFnc(CWnd*pWnd){
((CHMSGeneralRankSpecialExamineDialog*)pWnd)->OnCategorySetfocus();}*/
/*staticvoid_OnCategoryKillfocusFnc(CWnd*pWnd){
((CHMSGeneralRankSpecialExamineDialog*)pWnd)->OnCategoryKillfocus();
}*/
static int _OnCategoryCheckValueFnc(CWnd*pWnd){
	return((CHMSGeneralRankSpecialExamineDialog*)pWnd)->OnCategoryCheckValue();
}
/*staticvoid_OnDiseaseChangeFnc(CWnd*pWnd){
((CHMSGeneralRankSpecialExamineDialog*)pWnd)->OnDiseaseChange();
}*/
/*staticvoid_OnDiseaseSetfocusFnc(CWnd*pWnd){
((CHMSGeneralRankSpecialExamineDialog*)pWnd)->OnDiseaseSetfocus();}*/
/*staticvoid_OnDiseaseKillfocusFnc(CWnd*pWnd){
((CHMSGeneralRankSpecialExamineDialog*)pWnd)->OnDiseaseKillfocus();
}*/
static int _OnDiseaseCheckValueFnc(CWnd*pWnd){
	return((CHMSGeneralRankSpecialExamineDialog*)pWnd)->OnDiseaseCheckValue();
}

static int _OnResultClickFnc(CWnd* pWnd) {
	((CHMSGeneralRankSpecialExamineDialog*)pWnd)->OnResultClick();
	return 0;
}
static int _OnAddHMSGeneralRankSpecialExamineDialogFnc(CWnd *pWnd){
	 return ((CHMSGeneralRankSpecialExamineDialog*)pWnd)->OnAddHMSGeneralRankSpecialExamineDialog();
} 
static int _OnEditHMSGeneralRankSpecialExamineDialogFnc(CWnd *pWnd){
	 return ((CHMSGeneralRankSpecialExamineDialog*)pWnd)->OnEditHMSGeneralRankSpecialExamineDialog();
} 
static int _OnDeleteHMSGeneralRankSpecialExamineDialogFnc(CWnd *pWnd){
	 return ((CHMSGeneralRankSpecialExamineDialog*)pWnd)->OnDeleteHMSGeneralRankSpecialExamineDialog();
} 
static int _OnSaveHMSGeneralRankSpecialExamineDialogFnc(CWnd *pWnd){
	 return ((CHMSGeneralRankSpecialExamineDialog*)pWnd)->OnSaveHMSGeneralRankSpecialExamineDialog();
} 
static int _OnCancelHMSGeneralRankSpecialExamineDialogFnc(CWnd *pWnd){
	 return ((CHMSGeneralRankSpecialExamineDialog*)pWnd)->OnCancelHMSGeneralRankSpecialExamineDialog();
} 
CHMSGeneralRankSpecialExamineDialog::CHMSGeneralRankSpecialExamineDialog(CWnd *pParent, CString szType, CString szTitle):
	CGuiDialog(pParent){
	m_szTitle = szTitle;
	m_nDlgWidth = 524;
	m_nDlgHeight = 325;
	SetDefaultValues();
	m_szType = szType;
	m_szDocType = L"GENERAL_EXAM_DOC";
}
CHMSGeneralRankSpecialExamineDialog::~CHMSGeneralRankSpecialExamineDialog(){
}
void CHMSGeneralRankSpecialExamineDialog::OnCreateComponents(){
	m_wndExamineInformation.Create(this, _T("Examine Information"), 5, 5, 545, 290);
	m_wndDoctorNameLabel.Create(this, _T("Doctor Name"), 10, 30, 90, 55);
	m_wndDoctorName.Create(this,95, 30, 325, 55); 
	m_wndExamDateLabel.Create(this, _T("Exam Date"), 330, 30, 410, 55);
	m_wndExamDate.Create(this,415, 30, 540, 55); 
	m_wndResult.Create(this, _T("Result"), 10, 60, 90, 85);
	m_wndDescription.Create(this,10, 90, 540,255, TRUE, FALSE, TRUE); 
	m_wndCategoryLabel.Create(this, _T("Category"), 10, 260, 90, 285);
	m_wndCategory.Create(this,95, 260, 175, 285); 
	m_wndDiseaseLabel.Create(this, _T("Disease"), 180, 260, 260, 285);
	m_wndDisease.Create(this,265, 260, 540, 285); 
	m_wndTemplate.Create(this, _T("Template"), 5, 295, 85, 320);
	m_wndSave.Create(this, _T("&Save"), 380, 295, 460, 320);
	m_wndClose.Create(this, _T("&Close"), 465, 295, 545, 320);
	m_wndClear.Create(this, _T("&Clear"), 315, 295, 375, 320);



}
void CHMSGeneralRankSpecialExamineDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndDoctorName.SetLimitText(35);
	m_wndExamDate.SetReadOnly(TRUE);
	m_wndDoctorName.SetReadOnly(TRUE);
	m_wndDescription.SetMultiLine(TRUE);
	m_wndDescription.SetLimitText(2000);
	m_wndDescription.SetCheckValue(true);
	m_wndTemplate.ModifyStyle(WS_TABSTOP, 0);
	m_wndClear.ModifyStyle(WS_TABSTOP, 0);
	m_wndCategory.SetLimitText(35);
	m_wndCategory.SetCheckValue(true);
	m_wndDisease.SetLimitText(35);
	m_wndDisease.SetCheckValue(true);

	if (IsTemplateSet())
	{
		m_wndResult.SetHyperlink(true);
	}
	
}
void CHMSGeneralRankSpecialExamineDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndDoctorName.SetEvent(WE_CHANGE, _OnDoctorNameChangeFnc);
	//m_wndDoctorName.SetEvent(WE_SETFOCUS, _OnDoctorNameSetfocusFnc);
	//m_wndDoctorName.SetEvent(WE_KILLFOCUS, _OnDoctorNameKillfocusFnc);
	m_wndDoctorName.SetEvent(WE_CHECKVALUE, _OnDoctorNameCheckValueFnc);
	//m_wndExamDate.SetEvent(WE_CHANGE, _OnExamDateChangeFnc);
	//m_wndExamDate.SetEvent(WE_SETFOCUS, _OnExamDateSetfocusFnc);
	//m_wndExamDate.SetEvent(WE_KILLFOCUS, _OnExamDateKillfocusFnc);
	m_wndExamDate.SetEvent(WE_CHECKVALUE, _OnExamDateCheckValueFnc);
	//m_wndDescription.SetEvent(WE_CHANGE, _OnDescriptionChangeFnc);
	//m_wndDescription.SetEvent(WE_SETFOCUS, _OnDescriptionSetfocusFnc);
	//m_wndDescription.SetEvent(WE_KILLFOCUS, _OnDescriptionKillfocusFnc);
	m_wndDescription.SetEvent(WE_CHECKVALUE, _OnDescriptionCheckValueFnc);
	m_wndTemplate.SetEvent(WE_CLICK, _OnTemplateSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndClear.SetEvent(WE_CLICK, _OnClearSelectFnc);
	//m_wndCategory.SetEvent(WE_CHANGE, _OnCategoryChangeFnc);
	//m_wndCategory.SetEvent(WE_SETFOCUS, _OnCategorySetfocusFnc);
	//m_wndCategory.SetEvent(WE_KILLFOCUS, _OnCategoryKillfocusFnc);
	m_wndCategory.SetEvent(WE_CHECKVALUE, _OnCategoryCheckValueFnc);
	//m_wndDisease.SetEvent(WE_CHANGE, _OnDiseaseChangeFnc);
	//m_wndDisease.SetEvent(WE_SETFOCUS, _OnDiseaseSetfocusFnc);
	//m_wndDisease.SetEvent(WE_KILLFOCUS, _OnDiseaseKillfocusFnc);
	m_wndDisease.SetEvent(WE_CHECKVALUE, _OnDiseaseCheckValueFnc);
	m_wndResult.SetEvent(WE_CLICK, _OnResultClickFnc);
	GetDataToScreen();

}
void CHMSGeneralRankSpecialExamineDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndDoctorName.GetDlgCtrlID(), m_szDoctorName);
	DDX_TextEx(pDX, m_wndExamDate.GetDlgCtrlID(), m_szExamDate);
	DDX_Text(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescription);
	DDX_Text(pDX, m_wndCategory.GetDlgCtrlID(), m_szCategory);
	DDX_Text(pDX, m_wndDisease.GetDlgCtrlID(), m_szDisease);

}
void CHMSGeneralRankSpecialExamineDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr;
	szSQL.Format(
		_T("SELECT * FROM hms_doc_emr_view WHERE hde_docno=%ld and hde_type='%s' and hde_name='%s+'")
		, pMF->m_nDocumentNo, m_szDocType, m_szType);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		JSONVALUE jv;
		rs.GetValue(_T("hde_value"), tmpStr);
		jv.Parse(tmpStr);
		jv[L"ket_qua"].GetValue(m_szDescription);
		jv[L"phan_loai"].GetValue(m_szCategory);
		jv[L"benh_neu_co"].GetValue(m_szDisease);
		rs.GetValue(_T("hde_doctor"), m_szDoctorID);
		rs.GetValue(_T("hde_date"), m_szExamDate);

		m_szDoctorName = pMF->GetDoctorName(m_szDoctorID);
		SetMode(VM_EDIT);
	}
	else
	{
		szSQL.Format(
			_T("SELECT * FROM hms_doc_emr_view WHERE hde_docno=%ld and hde_type='%s' and hde_name='%s'")
			, pMF->m_nDocumentNo, m_szDocType, m_szType);
		rs.ExecSQL(szSQL);
		if (!rs.IsEOF())
		{
			CString tmpStr;
			rs.GetValue(_T("hde_value"), m_szDescription);
			rs.GetValue(_T("hde_doctor"), m_szDoctorID);
			rs.GetValue(_T("hde_date"), m_szExamDate);

			m_szDoctorName = pMF->GetDoctorName(m_szDoctorID);
			SetMode(VM_EDIT);
		}
		else
		{
			SetMode(VM_ADD);
		}
		

	}

}
void CHMSGeneralRankSpecialExamineDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSGeneralRankSpecialExamineDialog::SetDefaultValues(){

	m_szDoctorName.Empty();
	m_szExamDate.Empty();
	m_szDescription.Empty();
	m_szCategory.Empty();
	m_szDisease.Empty();

}
int CHMSGeneralRankSpecialExamineDialog::SetMode(int nMode){
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
			m_szExamDate = pMF->GetSysDateTime();
			m_szDoctorName = pMF->GetDoctorName(pMF->GetCurrentUser());
			m_szDisease = GetExamDiagnostic();
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, -1);
 			break;
 		case VM_VIEW: 
 			EnableControls(FALSE);
 			EnableButtons(FALSE, 1, -1);
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
/*void CHMSGeneralRankSpecialExamineDialog::OnDoctorNameChange(){
	
} */
/*void CHMSGeneralRankSpecialExamineDialog::OnDoctorNameSetfocus(){
	
} */
/*void CHMSGeneralRankSpecialExamineDialog::OnDoctorNameKillfocus(){
	
} */
int CHMSGeneralRankSpecialExamineDialog::OnDoctorNameCheckValue(){
	return 0;
} 
/*void CHMSGeneralRankSpecialExamineDialog::OnExamDateChange(){
	
} */
/*void CHMSGeneralRankSpecialExamineDialog::OnExamDateSetfocus(){
	
} */
/*void CHMSGeneralRankSpecialExamineDialog::OnExamDateKillfocus(){
	
} */
int CHMSGeneralRankSpecialExamineDialog::OnExamDateCheckValue(){
	return 0;
} 
/*void CHMSGeneralRankSpecialExamineDialog::OnDescriptionChange(){
	
} */
/*void CHMSGeneralRankSpecialExamineDialog::OnDescriptionSetfocus(){
	
} */
/*void CHMSGeneralRankSpecialExamineDialog::OnDescriptionKillfocus(){
	
} */
int CHMSGeneralRankSpecialExamineDialog::OnDescriptionCheckValue(){
	return 0;
} 
void CHMSGeneralRankSpecialExamineDialog::OnTemplateSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CHMSSpecialExamSetupDlg dlg(this, m_szType);
	if (dlg.DoModal() == IDOK)
	{
		
	}
} 

void CHMSGeneralRankSpecialExamineDialog::OnClearSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL;
	int ret = ShowMessageBox(_T("\x42\x1EA1n \x63\xF3 mu\x1ED1n \x78\xF3\x61 th\xF4ng tin kh\xE1m \x63huy\xEAn kho\x61?(Y/N)"), MB_YESNO);
	if (ret == IDNO)
		return;

	szSQL.Format(_T("DELETE FROM hms_doc_emr WHERE hde_docno=%ld and hde_type='%s' and hde_name='%s'"),
		pMF->m_nDocumentNo, m_szDocType, m_szType);
	ret = pMF->ExecSQL(szSQL);
	if(ret > 0)
	{
		m_szDescription.Empty();
		UpdateData(FALSE);
		CGuiDialog::OnOK();
	}

} 
/*void CHMSGeneralRankSpecialExamineDialog::OnCategoryChange(){
	
} */
/*void CHMSGeneralRankSpecialExamineDialog::OnCategorySetfocus(){
	
} */
/*void CHMSGeneralRankSpecialExamineDialog::OnCategoryKillfocus(){
	
} */
int CHMSGeneralRankSpecialExamineDialog::OnCategoryCheckValue(){
	return 0;
} 
/*void CHMSGeneralRankSpecialExamineDialog::OnDiseaseChange(){
	
} */
/*void CHMSGeneralRankSpecialExamineDialog::OnDiseaseSetfocus(){
	
} */
/*void CHMSGeneralRankSpecialExamineDialog::OnDiseaseKillfocus(){
	
} */
int CHMSGeneralRankSpecialExamineDialog::OnDiseaseCheckValue(){
	return 0;
} 

void CHMSGeneralRankSpecialExamineDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveHMSGeneralRankSpecialExamineDialog();

} 
void CHMSGeneralRankSpecialExamineDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CHMSGeneralRankSpecialExamineDialog::OnAddHMSGeneralRankSpecialExamineDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSGeneralRankSpecialExamineDialog::OnEditHMSGeneralRankSpecialExamineDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSGeneralRankSpecialExamineDialog::OnDeleteHMSGeneralRankSpecialExamineDialog(){
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
 		OnCancelHMSGeneralRankSpecialExamineDialog();
 	}
	return 0;
}
int CHMSGeneralRankSpecialExamineDialog::OnSaveHMSGeneralRankSpecialExamineDialog(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();

 	if(GetMode() != VM_EDIT && GetMode() != VM_ADD)
 		return -1;

 	if(!IsValidateData())
 		return -1;


	CDbfMap emrTbl;
	emrTbl.SetTableName(_T("hms_doc_emr"));
	emrTbl.AddField(_T("hde_createdby"), dfText, 20);
	emrTbl.AddField(_T("hde_type"), dfText, 20);
	emrTbl.AddField(_T("hde_docno"), dfLong);
	emrTbl.AddField(_T("hde_deptid"), dfText, 10);
	emrTbl.AddField(_T("hde_refidx"), dfLong);
	emrTbl.AddField(_T("hde_roomid"), dfInteger);
	emrTbl.AddField(_T("hde_doctor"), dfText, 20);
	emrTbl.AddField(_T("hde_name"), dfText, 20);
	emrTbl.AddField(_T("hde_date"), dfDateTime);
	emrTbl.AddField(_T("hde_name"), dfText, 20);
	emrTbl.AddField(_T("hde_value"), dfText, 2000);

	emrTbl.SetValue(_T("hde_type"), m_szDocType);
	emrTbl.SetValue(_T("hde_docno"), pMF->m_nDocumentNo);
	emrTbl.SetValue(_T("hde_deptid"), pMF->m_szDept);
	emrTbl.SetValue(_T("hde_refidx"), pMF->m_nRefIndex);
	emrTbl.SetValue(_T("hde_roomid"), pMF->m_nRoomID);
	emrTbl.SetValue(_T("hde_createdby"), pMF->GetCurrentUser());
	emrTbl.SetValue(_T("hde_doctor"), pMF->GetCurrentUser());
	emrTbl.SetValue(_T("hde_date"), m_szExamDate);
	emrTbl.SetValue(_T("hde_name"), m_szType);
	emrTbl.SetValue(_T("hde_value"), m_szDescription);

	
 	CString szSQL, szWhere;
 	if(GetMode() == VM_ADD){
 		szSQL = emrTbl.GetInsertSQL(_T(""));
 	}
 	else if(GetMode() == VM_EDIT){
 		szWhere.Format(_T(" WHERE hde_docno=%ld and hde_deptid='%s' and hde_type='%s' and hde_name='%s'"), 
			pMF->m_nDocumentNo, pMF->m_szDept, m_szDocType, m_szType);
 		szSQL = emrTbl.GetUpdateSQL(_T("hde_docno, hde_deptid"));
 		szSQL += szWhere;
 	}
 _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
		/*Ex info*/
		CString szName, szValue;
		JSONVALUE jv;

		szName.Format(_T("%s+"), m_szType);
		jv[L"ket_qua"] = m_szDescription;
		jv[L"phan_loai"] = m_szCategory;
		jv[L"benh_neu_co"] = m_szDisease;
		jv.ToString(szValue);

		emrTbl.SetValue(_T("hde_name"), szName);
		emrTbl.SetValue(_T("hde_value"), szValue);

		szWhere.Format(_T(" WHERE hde_docno=%ld and hde_deptid='%s' and hde_type='%s' and hde_name='%s'"),
			pMF->m_nDocumentNo, pMF->m_szDept, m_szDocType, szName);
		szSQL = emrTbl.GetUpdateSQL(_T("hde_docno, hde_deptid"));
		szSQL += szWhere;

		ret = pMF->ExecSQL(szSQL);
		if (ret <= 0)
		{
			szSQL = emrTbl.GetInsertSQL(_T(""));
			pMF->ExecSQL(szSQL);
		}
		CGuiDialog::OnOK();
	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSGeneralRankSpecialExamineDialog::OnCancelHMSGeneralRankSpecialExamineDialog(){
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
int CHMSGeneralRankSpecialExamineDialog::OnHMSGeneralRankSpecialExamineDialogListLoadData(){
	return 0;
}


void CHMSGeneralRankSpecialExamineDialog::OnResultClick()
{
	// TODO: Add your implementation code here.
	if (!IsTemplateSet())
		return;
	CHMSSpecialExamInputDlg dlg(this, m_szType);
	if (dlg.DoModal() == IDOK)
	{
		m_szDescription = dlg.m_szDescription;
		UpdateData(FALSE);
	}
}


BOOL CHMSGeneralRankSpecialExamineDialog::PreTranslateMessage(MSG* pMsg)
{
	// TODO: Add your specialized code here and/or call the base class
	if (pMsg->message == WM_KEYDOWN)
	{
		if (pMsg->wParam == VK_F4)
		{
			OnResultClick();
		}
		if (pMsg->wParam == VK_F6)
		{
			OnTemplateSelect();
		}

	}
	return CGuiDialog::PreTranslateMessage(pMsg);
}

bool CHMSGeneralRankSpecialExamineDialog::IsTemplateSet()
{

	return true;
}

CString CHMSGeneralRankSpecialExamineDialog::GetExamDiagnostic()
{
	// TODO: Add your implementation code here.
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szRet;

	szSQL.Format(
		_T(" SELECT he_diagnostic") \
		_T("   FROM hms_exam, sys_sel, hms_roomlist") \
		_T("  WHERE ss_id = 'HMS_EXAM_TYPE' AND ss_code = hrl_inscode ") \
		_T("    AND ss_vndesc2 = '%s' AND ROWNUM <= 1 ") \
		_T("    AND he_deptid = hrl_deptid AND he_roomid = hrl_id")
		_T("    AND he_docno = %ld AND he_deptid = '%s'")
	, m_szType, pMF->m_nDocumentNo, pMF->GetCurrentDepartmentID());

	rs.ExecSQL(szSQL);
	szRet = rs.GetValue(L"he_diagnostic");
	return szRet;
}
