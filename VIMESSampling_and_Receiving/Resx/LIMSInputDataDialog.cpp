#include "LIMSInputDataDialog.h"
#include "MainFrm.h"
/*static void _OnCodeChangeFnc(CWnd *pWnd){
	((CLIMSInputDataDialog *)pWnd)->OnCodeChange();
} */
/*static void _OnCodeSetfocusFnc(CWnd *pWnd){
	((CLIMSInputDataDialog *)pWnd)->OnCodeSetfocus();} */ 
/*static void _OnCodeKillfocusFnc(CWnd *pWnd){
	((CLIMSInputDataDialog *)pWnd)->OnCodeKillfocus();
} */
static int _OnCodeCheckValueFnc(CWnd *pWnd){
	return ((CLIMSInputDataDialog *)pWnd)->OnCodeCheckValue();
} 
/*static void _OnCodeInChangeFnc(CWnd *pWnd){
	((CLIMSInputDataDialog *)pWnd)->OnCodeInChange();
} */
/*static void _OnCodeInSetfocusFnc(CWnd *pWnd){
	((CLIMSInputDataDialog *)pWnd)->OnCodeInSetfocus();} */ 
/*static void _OnCodeInKillfocusFnc(CWnd *pWnd){
	((CLIMSInputDataDialog *)pWnd)->OnCodeInKillfocus();
} */
static int _OnCodeInCheckValueFnc(CWnd *pWnd){
	return ((CLIMSInputDataDialog *)pWnd)->OnCodeInCheckValue();
} 
static void _OnRefCodeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CLIMSInputDataDialog* )pWnd)->OnRefCodeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnRefCodeSelendokFnc(CWnd *pWnd){
	((CLIMSInputDataDialog *)pWnd)->OnRefCodeSelendok();
}
/*static void _OnRefCodeSetfocusFnc(CWnd *pWnd){
	((CLIMSInputDataDialog *)pWnd)->OnRefCodeKillfocus();
}*/
/*static void _OnRefCodeKillfocusFnc(CWnd *pWnd){
	((CLIMSInputDataDialog *)pWnd)->OnRefCodeKillfocus();
}*/
static long _OnRefCodeLoadDataFnc(CWnd *pWnd){
	return ((CLIMSInputDataDialog *)pWnd)->OnRefCodeLoadData();
}
/*static void _OnRefCodeAddNewFnc(CWnd *pWnd){
	((CLIMSInputDataDialog *)pWnd)->OnRefCodeAddNew();
}*/
static void _OnAddRefSelectFnc(CWnd *pWnd){
	CLIMSInputDataDialog *pVw = (CLIMSInputDataDialog *)pWnd;
	pVw->OnAddRefSelect();
} 
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CLIMSInputDataDialog *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CLIMSInputDataDialog *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CLIMSInputDataDialog *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CLIMSInputDataDialog *)pWnd)->OnNameCheckValue();
} 
/*static void _OnUnitChangeFnc(CWnd *pWnd){
	((CLIMSInputDataDialog *)pWnd)->OnUnitChange();
} */
/*static void _OnUnitSetfocusFnc(CWnd *pWnd){
	((CLIMSInputDataDialog *)pWnd)->OnUnitSetfocus();} */ 
/*static void _OnUnitKillfocusFnc(CWnd *pWnd){
	((CLIMSInputDataDialog *)pWnd)->OnUnitKillfocus();
} */
static int _OnUnitCheckValueFnc(CWnd *pWnd){
	return ((CLIMSInputDataDialog *)pWnd)->OnUnitCheckValue();
} 
/*static void _OnMaleChangeFnc(CWnd *pWnd){
	((CLIMSInputDataDialog *)pWnd)->OnMaleChange();
} */
/*static void _OnMaleSetfocusFnc(CWnd *pWnd){
	((CLIMSInputDataDialog *)pWnd)->OnMaleSetfocus();} */ 
/*static void _OnMaleKillfocusFnc(CWnd *pWnd){
	((CLIMSInputDataDialog *)pWnd)->OnMaleKillfocus();
} */
static int _OnMaleCheckValueFnc(CWnd *pWnd){
	return ((CLIMSInputDataDialog *)pWnd)->OnMaleCheckValue();
} 
/*static void _OnMMinChangeFnc(CWnd *pWnd){
	((CLIMSInputDataDialog *)pWnd)->OnMMinChange();
} */
/*static void _OnMMinSetfocusFnc(CWnd *pWnd){
	((CLIMSInputDataDialog *)pWnd)->OnMMinSetfocus();} */ 
/*static void _OnMMinKillfocusFnc(CWnd *pWnd){
	((CLIMSInputDataDialog *)pWnd)->OnMMinKillfocus();
} */
static int _OnMMinCheckValueFnc(CWnd *pWnd){
	return ((CLIMSInputDataDialog *)pWnd)->OnMMinCheckValue();
} 
/*static void _OnMMaxChangeFnc(CWnd *pWnd){
	((CLIMSInputDataDialog *)pWnd)->OnMMaxChange();
} */
/*static void _OnMMaxSetfocusFnc(CWnd *pWnd){
	((CLIMSInputDataDialog *)pWnd)->OnMMaxSetfocus();} */ 
/*static void _OnMMaxKillfocusFnc(CWnd *pWnd){
	((CLIMSInputDataDialog *)pWnd)->OnMMaxKillfocus();
} */
static int _OnMMaxCheckValueFnc(CWnd *pWnd){
	return ((CLIMSInputDataDialog *)pWnd)->OnMMaxCheckValue();
} 
/*static void _OnFemaleChangeFnc(CWnd *pWnd){
	((CLIMSInputDataDialog *)pWnd)->OnFemaleChange();
} */
/*static void _OnFemaleSetfocusFnc(CWnd *pWnd){
	((CLIMSInputDataDialog *)pWnd)->OnFemaleSetfocus();} */ 
/*static void _OnFemaleKillfocusFnc(CWnd *pWnd){
	((CLIMSInputDataDialog *)pWnd)->OnFemaleKillfocus();
} */
static int _OnFemaleCheckValueFnc(CWnd *pWnd){
	return ((CLIMSInputDataDialog *)pWnd)->OnFemaleCheckValue();
} 
/*static void _OnFMinChangeFnc(CWnd *pWnd){
	((CLIMSInputDataDialog *)pWnd)->OnFMinChange();
} */
/*static void _OnFMinSetfocusFnc(CWnd *pWnd){
	((CLIMSInputDataDialog *)pWnd)->OnFMinSetfocus();} */ 
/*static void _OnFMinKillfocusFnc(CWnd *pWnd){
	((CLIMSInputDataDialog *)pWnd)->OnFMinKillfocus();
} */
static int _OnFMinCheckValueFnc(CWnd *pWnd){
	return ((CLIMSInputDataDialog *)pWnd)->OnFMinCheckValue();
} 
/*static void _OnFMaxChangeFnc(CWnd *pWnd){
	((CLIMSInputDataDialog *)pWnd)->OnFMaxChange();
} */
/*static void _OnFMaxSetfocusFnc(CWnd *pWnd){
	((CLIMSInputDataDialog *)pWnd)->OnFMaxSetfocus();} */ 
/*static void _OnFMaxKillfocusFnc(CWnd *pWnd){
	((CLIMSInputDataDialog *)pWnd)->OnFMaxKillfocus();
} */
static int _OnFMaxCheckValueFnc(CWnd *pWnd){
	return ((CLIMSInputDataDialog *)pWnd)->OnFMaxCheckValue();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	 ((CLIMSInputDataDialog*)pWnd)->OnPrintSelect();
}
static void _OnActiveSelectFnc(CWnd *pWnd){
	 ((CLIMSInputDataDialog*)pWnd)->OnActiveSelect();
}
static void _OnSaveSelectFnc(CWnd *pWnd){
	CLIMSInputDataDialog *pVw = (CLIMSInputDataDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CLIMSInputDataDialog *pVw = (CLIMSInputDataDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddLIMSInputDataDialogFnc(CWnd *pWnd){
	 return ((CLIMSInputDataDialog*)pWnd)->OnAddLIMSInputDataDialog();
} 
static int _OnEditLIMSInputDataDialogFnc(CWnd *pWnd){
	 return ((CLIMSInputDataDialog*)pWnd)->OnEditLIMSInputDataDialog();
} 
static int _OnDeleteLIMSInputDataDialogFnc(CWnd *pWnd){
	 return ((CLIMSInputDataDialog*)pWnd)->OnDeleteLIMSInputDataDialog();
} 
static int _OnSaveLIMSInputDataDialogFnc(CWnd *pWnd){
	 return ((CLIMSInputDataDialog*)pWnd)->OnSaveLIMSInputDataDialog();
} 
static int _OnCancelLIMSInputDataDialogFnc(CWnd *pWnd){
	 return ((CLIMSInputDataDialog*)pWnd)->OnCancelLIMSInputDataDialog();
} 
CLIMSInputDataDialog::CLIMSInputDataDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 705;
	m_nDlgHeight = 225;
	SetDefaultValues();
}
CLIMSInputDataDialog::~CLIMSInputDataDialog(){
}
void CLIMSInputDataDialog::OnCreateComponents(){
	m_wndEntryData.Create(this, _T("Entry Data"), 5, 5, 690, 175);
	m_wndNormalIndex.Create(this, _T("Normal Index"), 5, 90, 690, 175);
	m_wndCodeLabel.Create(this, _T("Code"), 10, 30, 90, 55);
	m_wndCode.Create(this,95, 30, 175, 55); 
	m_wndCodeInLabel.Create(this, _T("Code In"), 180, 30, 260, 55);
	m_wndCodeIn.Create(this,265, 30, 345, 55); 
	m_wndRefCodeLabel.Create(this, _T("Ref Code"), 350, 30, 430, 55);
	m_wndRefCode.Create(this,435, 30, 655, 55); 
	m_wndAddRef.Create(this, _T("..."), 660, 30, 685, 55);
	m_wndNameLabel.Create(this, _T("Name"), 10, 60, 90, 85);
	m_wndName.Create(this,95, 60, 345, 85); 
	m_wndUnitLabel.Create(this, _T("Unit"), 350, 60, 430, 85);
	m_wndUnit.Create(this,435, 60, 685, 85); 
	m_wndMaleLabel.Create(this, _T("Male"), 10, 115, 90, 140);
	m_wndMale.Create(this,95, 115, 345, 140); 
	m_wndMMinLabel.Create(this, _T("Min"), 350, 115, 430, 140);
	m_wndMMin.Create(this,435, 115, 515, 140); 
	m_wndMMaxLabel.Create(this, _T("Max"), 520, 115, 600, 140);
	m_wndMMax.Create(this,605, 115, 685, 140); 
	m_wndFemaleLabel.Create(this, _T("Female"), 10, 145, 90, 170);
	m_wndFemale.Create(this,95, 145, 345, 170); 
	m_wndFMinLabel.Create(this, _T("Min"), 350, 145, 430, 170);
	m_wndFMin.Create(this,435, 145, 515, 170); 
	m_wndFMaxLabel.Create(this, _T("Max"), 520, 145, 600, 170);
	m_wndFMax.Create(this,605, 145, 685, 170); 
	m_wndPrint.Create(this, _T("Print"), 11, 180, 91, 205);
	m_wndActive.Create(this, _T("Active"), 96, 180, 214, 205);
	m_wndSave.Create(this, _T("&Save"), 521, 180, 601, 205);
	m_wndCancel.Create(this, _T("&Cancel"), 606, 180, 686, 205);

}
void CLIMSInputDataDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndCode.SetLimitText(15);
	m_wndCode.SetCheckValue(true);
	m_wndCodeIn.SetLimitText(15);
	m_wndCodeIn.SetCheckValue(true);
	m_wndRefCode.SetCheckValue(true);
	m_wndRefCode.LimitText(7);
	m_wndName.SetLimitText(35);
	m_wndName.SetCheckValue(true);
	m_wndUnit.SetLimitText(15);
	m_wndUnit.SetCheckValue(true);
	m_wndMale.SetLimitText(15);
	m_wndMale.SetCheckValue(true);
	m_wndMMin.SetLimitText(15);
	m_wndMMin.SetCheckValue(true);
	m_wndMMax.SetLimitText(15);
	m_wndMMax.SetCheckValue(true);
	m_wndFemale.SetLimitText(15);
	m_wndFemale.SetCheckValue(true);
	m_wndFMin.SetLimitText(16);
	m_wndFMin.SetCheckValue(true);
	m_wndFMax.SetLimitText(16);
	m_wndFMax.SetCheckValue(true);


	m_wndRefCode.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndRefCode.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);
	m_lims_instrument_dataTbl.SetTableName(_T("lims_instrument_data"));
	m_lims_instrument_dataTbl.AddField(_T("limsid_instid"), dfLong); 
	m_lims_instrument_dataTbl.AddField(_T("limsid_index"), dfLong); 
	m_lims_instrument_dataTbl.AddField(_T("limsid_code"), dfText, 15); 
	m_lims_instrument_dataTbl.AddField(_T("limsid_codein"), dfText, 15); 
	m_lims_instrument_dataTbl.AddField(_T("limsid_testid"), dfText, 7); 
	m_lims_instrument_dataTbl.AddField(_T("limsid_name"), dfText, 35); 
	m_lims_instrument_dataTbl.AddField(_T("limsid_unit"), dfText, 15); 
	m_lims_instrument_dataTbl.AddField(_T("limsid_fnorm"), dfText, 15); 
	m_lims_instrument_dataTbl.AddField(_T("limsid_mnorm"), dfText, 15); 
	m_lims_instrument_dataTbl.AddField(_T("limsid_min"), dfText, 15); 
	m_lims_instrument_dataTbl.AddField(_T("limsid_max"), dfText, 15); 
	m_lims_instrument_dataTbl.AddField(_T("limsid_print"), dfLong); 
	m_lims_instrument_dataTbl.AddField(_T("limsid_active"), dfText, 1); 

}
void CLIMSInputDataDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndCode.SetEvent(WE_CHANGE, _OnCodeChangeFnc);
	//m_wndCode.SetEvent(WE_SETFOCUS, _OnCodeSetfocusFnc);
	//m_wndCode.SetEvent(WE_KILLFOCUS, _OnCodeKillfocusFnc);
	m_wndCode.SetEvent(WE_CHECKVALUE, _OnCodeCheckValueFnc);
	//m_wndCodeIn.SetEvent(WE_CHANGE, _OnCodeInChangeFnc);
	//m_wndCodeIn.SetEvent(WE_SETFOCUS, _OnCodeInSetfocusFnc);
	//m_wndCodeIn.SetEvent(WE_KILLFOCUS, _OnCodeInKillfocusFnc);
	m_wndCodeIn.SetEvent(WE_CHECKVALUE, _OnCodeInCheckValueFnc);
	m_wndRefCode.SetEvent(WE_SELENDOK, _OnRefCodeSelendokFnc);
	//m_wndRefCode.SetEvent(WE_SETFOCUS, _OnRefCodeSetfocusFnc);
	//m_wndRefCode.SetEvent(WE_KILLFOCUS, _OnRefCodeKillfocusFnc);
	m_wndRefCode.SetEvent(WE_SELCHANGE, _OnRefCodeSelectChangeFnc);
	m_wndRefCode.SetEvent(WE_LOADDATA, _OnRefCodeLoadDataFnc);
	//m_wndRefCode.SetEvent(WE_ADDNEW, _OnRefCodeAddNewFnc);
	m_wndAddRef.SetEvent(WE_CLICK, _OnAddRefSelectFnc);
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	//m_wndUnit.SetEvent(WE_CHANGE, _OnUnitChangeFnc);
	//m_wndUnit.SetEvent(WE_SETFOCUS, _OnUnitSetfocusFnc);
	//m_wndUnit.SetEvent(WE_KILLFOCUS, _OnUnitKillfocusFnc);
	m_wndUnit.SetEvent(WE_CHECKVALUE, _OnUnitCheckValueFnc);
	//m_wndMale.SetEvent(WE_CHANGE, _OnMaleChangeFnc);
	//m_wndMale.SetEvent(WE_SETFOCUS, _OnMaleSetfocusFnc);
	//m_wndMale.SetEvent(WE_KILLFOCUS, _OnMaleKillfocusFnc);
	m_wndMale.SetEvent(WE_CHECKVALUE, _OnMaleCheckValueFnc);
	//m_wndMMin.SetEvent(WE_CHANGE, _OnMMinChangeFnc);
	//m_wndMMin.SetEvent(WE_SETFOCUS, _OnMMinSetfocusFnc);
	//m_wndMMin.SetEvent(WE_KILLFOCUS, _OnMMinKillfocusFnc);
	m_wndMMin.SetEvent(WE_CHECKVALUE, _OnMMinCheckValueFnc);
	//m_wndMMax.SetEvent(WE_CHANGE, _OnMMaxChangeFnc);
	//m_wndMMax.SetEvent(WE_SETFOCUS, _OnMMaxSetfocusFnc);
	//m_wndMMax.SetEvent(WE_KILLFOCUS, _OnMMaxKillfocusFnc);
	m_wndMMax.SetEvent(WE_CHECKVALUE, _OnMMaxCheckValueFnc);
	//m_wndFemale.SetEvent(WE_CHANGE, _OnFemaleChangeFnc);
	//m_wndFemale.SetEvent(WE_SETFOCUS, _OnFemaleSetfocusFnc);
	//m_wndFemale.SetEvent(WE_KILLFOCUS, _OnFemaleKillfocusFnc);
	m_wndFemale.SetEvent(WE_CHECKVALUE, _OnFemaleCheckValueFnc);
	//m_wndFMin.SetEvent(WE_CHANGE, _OnFMinChangeFnc);
	//m_wndFMin.SetEvent(WE_SETFOCUS, _OnFMinSetfocusFnc);
	//m_wndFMin.SetEvent(WE_KILLFOCUS, _OnFMinKillfocusFnc);
	m_wndFMin.SetEvent(WE_CHECKVALUE, _OnFMinCheckValueFnc);
	//m_wndFMax.SetEvent(WE_CHANGE, _OnFMaxChangeFnc);
	//m_wndFMax.SetEvent(WE_SETFOCUS, _OnFMaxSetfocusFnc);
	//m_wndFMax.SetEvent(WE_KILLFOCUS, _OnFMaxKillfocusFnc);
	m_wndFMax.SetEvent(WE_CHECKVALUE, _OnFMaxCheckValueFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndActive.SetEvent(WE_CLICK, _OnActiveSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	SetMode(VM_NONE);

}
void CLIMSInputDataDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndCode.GetDlgCtrlID(), m_szCode);
	DDX_Text(pDX, m_wndCodeIn.GetDlgCtrlID(), m_szCodeIn);
	DDX_TextEx(pDX, m_wndRefCode.GetDlgCtrlID(), m_szRefCodeKey);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_Text(pDX, m_wndUnit.GetDlgCtrlID(), m_szUnit);
	DDX_Text(pDX, m_wndMale.GetDlgCtrlID(), m_szMale);
	DDX_Text(pDX, m_wndMMin.GetDlgCtrlID(), m_nMMin);
	DDX_Text(pDX, m_wndMMax.GetDlgCtrlID(), m_nMMax);
	DDX_Text(pDX, m_wndFemale.GetDlgCtrlID(), m_szFemale);
	DDX_Text(pDX, m_wndFMin.GetDlgCtrlID(), m_nFMin);
	DDX_Text(pDX, m_wndFMax.GetDlgCtrlID(), m_nFMax);
	DDX_Check(pDX, m_wndPrint.GetDlgCtrlID(), m_bPrint);
	DDX_Check(pDX, m_wndActive.GetDlgCtrlID(), m_bActive);

}
void CLIMSInputDataDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("limsid_code"), m_szCode);
	rs.GetValue(_T("limsid_codein"), m_szCodeIn);
	rs.GetValue(_T("limsid_testid"), m_szRefCodeKey);
	rs.GetValue(_T("limsid_name"), m_szName);
	rs.GetValue(_T("limsid_unit"), m_szUnit);
	rs.GetValue(_T("limsid_fnorm"), m_szFemale);
	rs.GetValue(_T("limsid_mnorm"), m_szMale);
	rs.GetValue(_T("limsid_min"), m_nMMin);
	rs.GetValue(_T("limsid_max"), m_nMMax);
	rs.GetValue(_T("limsid_print"), m_bPrint);
	rs.GetValue(_T("limsid_active"), m_bActive);

}
void CLIMSInputDataDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_lims_instrument_dataTbl.SetValue(_T("limsid_code"), m_szCode);
	m_lims_instrument_dataTbl.SetValue(_T("limsid_codein"), m_szCodeIn);
	m_lims_instrument_dataTbl.SetValue(_T("limsid_testid"), m_szRefCodeKey);
	m_lims_instrument_dataTbl.SetValue(_T("limsid_name"), m_szName);
	m_lims_instrument_dataTbl.SetValue(_T("limsid_unit"), m_szUnit);
	m_lims_instrument_dataTbl.SetValue(_T("limsid_fnorm"), m_szFemale);
	m_lims_instrument_dataTbl.SetValue(_T("limsid_mnorm"), m_szMale);
	m_lims_instrument_dataTbl.SetValue(_T("limsid_min"), m_nMMin);
	m_lims_instrument_dataTbl.SetValue(_T("limsid_max"), m_nMMax);
	m_lims_instrument_dataTbl.SetValue(_T("limsid_print"), m_bPrint);
	m_lims_instrument_dataTbl.SetValue(_T("limsid_active"), m_bActive);

}
void CLIMSInputDataDialog::SetDefaultValues(){

	m_szCode.Empty();
	m_szCodeIn.Empty();
	m_szRefCodeKey.Empty();
	m_szName.Empty();
	m_szUnit.Empty();
	m_szMale.Empty();
	m_nMMin=0;
	m_nMMax=0;
	m_szFemale.Empty();
	m_nFMin=0;
	m_nFMax=0;
	m_bPrint=FALSE;
	m_bActive=FALSE;

}
int CLIMSInputDataDialog::SetMode(int nMode){
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
 		return nOldMode;
}
/*void CLIMSInputDataDialog::OnCodeChange(){
	
} */
/*void CLIMSInputDataDialog::OnCodeSetfocus(){
	
} */
/*void CLIMSInputDataDialog::OnCodeKillfocus(){
	
} */
int CLIMSInputDataDialog::OnCodeCheckValue(){
	return 0;
} 
/*void CLIMSInputDataDialog::OnCodeInChange(){
	
} */
/*void CLIMSInputDataDialog::OnCodeInSetfocus(){
	
} */
/*void CLIMSInputDataDialog::OnCodeInKillfocus(){
	
} */
int CLIMSInputDataDialog::OnCodeInCheckValue(){
	return 0;
} 
void CLIMSInputDataDialog::OnRefCodeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CLIMSInputDataDialog::OnRefCodeSelendok(){
	 
}
/*void CLIMSInputDataDialog::OnRefCodeSetfocus(){
	
}*/
/*void CLIMSInputDataDialog::OnRefCodeKillfocus(){
	
}*/
long CLIMSInputDataDialog::OnRefCodeLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndRefCode.IsSearchKey() && !m_szRefCodeKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szRefCodeKey
};
	m_wndRefCode.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndRefCode.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CLIMSInputDataDialog::OnRefCodeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CLIMSInputDataDialog::OnAddRefSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
/*void CLIMSInputDataDialog::OnNameChange(){
	
} */
/*void CLIMSInputDataDialog::OnNameSetfocus(){
	
} */
/*void CLIMSInputDataDialog::OnNameKillfocus(){
	
} */
int CLIMSInputDataDialog::OnNameCheckValue(){
	return 0;
} 
/*void CLIMSInputDataDialog::OnUnitChange(){
	
} */
/*void CLIMSInputDataDialog::OnUnitSetfocus(){
	
} */
/*void CLIMSInputDataDialog::OnUnitKillfocus(){
	
} */
int CLIMSInputDataDialog::OnUnitCheckValue(){
	return 0;
} 
/*void CLIMSInputDataDialog::OnMaleChange(){
	
} */
/*void CLIMSInputDataDialog::OnMaleSetfocus(){
	
} */
/*void CLIMSInputDataDialog::OnMaleKillfocus(){
	
} */
int CLIMSInputDataDialog::OnMaleCheckValue(){
	return 0;
} 
/*void CLIMSInputDataDialog::OnMMinChange(){
	
} */
/*void CLIMSInputDataDialog::OnMMinSetfocus(){
	
} */
/*void CLIMSInputDataDialog::OnMMinKillfocus(){
	
} */
int CLIMSInputDataDialog::OnMMinCheckValue(){
	return 0;
} 
/*void CLIMSInputDataDialog::OnMMaxChange(){
	
} */
/*void CLIMSInputDataDialog::OnMMaxSetfocus(){
	
} */
/*void CLIMSInputDataDialog::OnMMaxKillfocus(){
	
} */
int CLIMSInputDataDialog::OnMMaxCheckValue(){
	return 0;
} 
/*void CLIMSInputDataDialog::OnFemaleChange(){
	
} */
/*void CLIMSInputDataDialog::OnFemaleSetfocus(){
	
} */
/*void CLIMSInputDataDialog::OnFemaleKillfocus(){
	
} */
int CLIMSInputDataDialog::OnFemaleCheckValue(){
	return 0;
} 
/*void CLIMSInputDataDialog::OnFMinChange(){
	
} */
/*void CLIMSInputDataDialog::OnFMinSetfocus(){
	
} */
/*void CLIMSInputDataDialog::OnFMinKillfocus(){
	
} */
int CLIMSInputDataDialog::OnFMinCheckValue(){
	return 0;
} 
/*void CLIMSInputDataDialog::OnFMaxChange(){
	
} */
/*void CLIMSInputDataDialog::OnFMaxSetfocus(){
	
} */
/*void CLIMSInputDataDialog::OnFMaxKillfocus(){
	
} */
int CLIMSInputDataDialog::OnFMaxCheckValue(){
	return 0;
} 
	void CLIMSInputDataDialog::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CLIMSInputDataDialog::OnActiveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void CLIMSInputDataDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CLIMSInputDataDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CLIMSInputDataDialog::OnAddLIMSInputDataDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CLIMSInputDataDialog::OnEditLIMSInputDataDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CLIMSInputDataDialog::OnDeleteLIMSInputDataDialog(){
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
 		OnCancelLIMSInputDataDialog();
 	}
	return 0;
}
int CLIMSInputDataDialog::OnSaveLIMSInputDataDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
 		//szSQL = m_lims_instrument_dataTbl.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
 		szWhere.Format(_T(" WHERE"));
 		//szSQL = m_lims_instrument_dataTbl.GetUpdateSQL(_T("createdby,createddate"));
 		szSQL += szWhere;
 	}
 _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
 		//OnLIMSInputDataDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CLIMSInputDataDialog::OnCancelLIMSInputDataDialog(){
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
int CLIMSInputDataDialog::OnLIMSInputDataDialogListLoadData(){
	return 0;
}
