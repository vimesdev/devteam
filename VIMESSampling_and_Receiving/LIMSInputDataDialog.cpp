#include "LIMSInputDataDialog.h"
//#include "stdafx.h"
#include "MainFrm.h"
#include "VIMESLISInstrumentSetting.h"

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
/*static void _OnMinChangeFnc(CWnd *pWnd){
	((CLIMSInputDataDialog *)pWnd)->OnMinChange();
} */
/*static void _OnMinSetfocusFnc(CWnd *pWnd){
	((CLIMSInputDataDialog *)pWnd)->OnMinSetfocus();} */ 
/*static void _OnMinKillfocusFnc(CWnd *pWnd){
	((CLIMSInputDataDialog *)pWnd)->OnMinKillfocus();
} */
static int _OnMinCheckValueFnc(CWnd *pWnd){
	return ((CLIMSInputDataDialog *)pWnd)->OnMinCheckValue();
} 
/*static void _OnMaxChangeFnc(CWnd *pWnd){
	((CLIMSInputDataDialog *)pWnd)->OnMaxChange();
} */
/*static void _OnMaxSetfocusFnc(CWnd *pWnd){
	((CLIMSInputDataDialog *)pWnd)->OnMaxSetfocus();} */ 
/*static void _OnMaxKillfocusFnc(CWnd *pWnd){
	((CLIMSInputDataDialog *)pWnd)->OnMaxKillfocus();
} */
static int _OnMaxCheckValueFnc(CWnd *pWnd){
	return ((CLIMSInputDataDialog *)pWnd)->OnMaxCheckValue();
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
	CGuiDialog(pParent)
{

	m_nDlgWidth = 585;
	m_nDlgHeight = 145;
	SetDefaultValues();
}
CLIMSInputDataDialog::~CLIMSInputDataDialog(){
}
void CLIMSInputDataDialog::OnCreateComponents(){
	m_wndNormalIndex.Create(this, _T("Normal Index"), 5, 59, 577, 109);
	m_wndCodeLabel.Create(this, _T("Code"), 10, 6, 60, 28);
	m_wndCode.Create(this,65, 6, 145, 28); 
	m_wndCodeInLabel.Create(this, _T("Code In"), 150, 6, 200, 28);
	m_wndCodeIn.Create(this,205, 6, 285, 28); 
	m_wndRefCodeLabel.Create(this, _T("Ref Code"), 289, 5, 349, 27);
	m_wndRefCode.Create(this,354, 5, 572, 27); 
	m_wndNameLabel.Create(this, _T("Name"), 10, 32, 60, 54);
	m_wndName.Create(this,65, 32, 285, 54); 
	m_wndUnitLabel.Create(this, _T("Unit"), 290, 32, 350, 54);
	m_wndUnit.Create(this,355, 32, 435, 54); 
	m_wndFemaleLabel.Create(this, _T("Female"), 9, 80, 59, 102);
	m_wndFemale.Create(this,64, 80, 144, 102); 
	m_wndMaleLabel.Create(this, _T("Male"), 149, 80, 199, 102);
	m_wndMale.Create(this,204, 80, 284, 102); 
	m_wndMinLabel.Create(this, _T("Min"), 289, 80, 349, 102);
	m_wndMin.Create(this,354, 80, 434, 102); 
	m_wndMaxLabel.Create(this, _T("Max"), 439, 80, 489, 102);
	m_wndMax.Create(this,494, 80, 574, 102); 
	m_wndPrint.Create(this, _T("Print"), 440, 32, 490, 54);
	m_wndActive.Create(this, _T("Active"), 495, 32, 575, 54);
	m_wndSave.Create(this, _T("&Save"), 412, 114, 492, 138);
	m_wndCancel.Create(this, _T("&Cancel"), 497, 114, 577, 138);	
}
void CLIMSInputDataDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndCode.SetLimitText(15);
	m_wndCode.SetCheckValue(true);
	m_wndCodeIn.SetLimitText(15);
	m_wndCodeIn.SetCheckValue(true);
//	m_wndRefCode.SetCheckValue(true);
	m_wndRefCode.LimitText(15);
	m_wndName.SetLimitText(35);
	m_wndName.SetCheckValue(true);
	m_wndUnit.SetLimitText(15);
//	m_wndUnit.SetCheckValue(true);
	m_wndFemale.SetLimitText(15);
//	m_wndFemale.SetCheckValue(true);
	m_wndMale.SetLimitText(15);
//	m_wndMale.SetCheckValue(true);
	m_wndMin.SetLimitText(15);
//	m_wndMin.SetCheckValue(true);
	m_wndMax.SetLimitText(15);
//	m_wndMax.SetCheckValue(true);

	m_wndPrint.ModifyStyle(WS_TABSTOP, 0);
	m_wndActive.ModifyStyle(WS_TABSTOP, 0);

	m_wndRefCode.InsertColumn(0, _T("ID"), CFMT_NUMBER, 70);
	m_wndRefCode.InsertColumn(1, _T("Description"), CFMT_TEXT, 250);
	m_wndRefCode.InsertColumn(2, _T("Unit"), CFMT_TEXT, 0);

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
	m_lims_instrument_dataTbl.AddField(_T("limsid_print"), dfText, 1); 
	m_lims_instrument_dataTbl.AddField(_T("limsid_active"), dfText, 1); 

}
void CLIMSInputDataDialog::OnSetWindowEvents(){
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
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	//m_wndUnit.SetEvent(WE_CHANGE, _OnUnitChangeFnc);
	//m_wndUnit.SetEvent(WE_SETFOCUS, _OnUnitSetfocusFnc);
	//m_wndUnit.SetEvent(WE_KILLFOCUS, _OnUnitKillfocusFnc);
	m_wndUnit.SetEvent(WE_CHECKVALUE, _OnUnitCheckValueFnc);
	//m_wndFemale.SetEvent(WE_CHANGE, _OnFemaleChangeFnc);
	//m_wndFemale.SetEvent(WE_SETFOCUS, _OnFemaleSetfocusFnc);
	//m_wndFemale.SetEvent(WE_KILLFOCUS, _OnFemaleKillfocusFnc);
	m_wndFemale.SetEvent(WE_CHECKVALUE, _OnFemaleCheckValueFnc);
	//m_wndMale.SetEvent(WE_CHANGE, _OnMaleChangeFnc);
	//m_wndMale.SetEvent(WE_SETFOCUS, _OnMaleSetfocusFnc);
	//m_wndMale.SetEvent(WE_KILLFOCUS, _OnMaleKillfocusFnc);
	m_wndMale.SetEvent(WE_CHECKVALUE, _OnMaleCheckValueFnc);
	//m_wndMin.SetEvent(WE_CHANGE, _OnMinChangeFnc);
	//m_wndMin.SetEvent(WE_SETFOCUS, _OnMinSetfocusFnc);
	//m_wndMin.SetEvent(WE_KILLFOCUS, _OnMinKillfocusFnc);
	m_wndMin.SetEvent(WE_CHECKVALUE, _OnMinCheckValueFnc);
	//m_wndMax.SetEvent(WE_CHANGE, _OnMaxChangeFnc);
	//m_wndMax.SetEvent(WE_SETFOCUS, _OnMaxSetfocusFnc);
	//m_wndMax.SetEvent(WE_KILLFOCUS, _OnMaxKillfocusFnc);
	m_wndMax.SetEvent(WE_CHECKVALUE, _OnMaxCheckValueFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndActive.SetEvent(WE_CLICK, _OnActiveSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	SetMode(GetMode());
	GetDataToScreen();
}
void CLIMSInputDataDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndCode.GetDlgCtrlID(), m_szCode);
	DDX_Text(pDX, m_wndCodeIn.GetDlgCtrlID(), m_szCodeIn);
	DDX_TextEx(pDX, m_wndRefCode.GetDlgCtrlID(), m_szRefCodeKey);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_Text(pDX, m_wndUnit.GetDlgCtrlID(), m_szUnit);
	DDX_Text(pDX, m_wndFemale.GetDlgCtrlID(), m_szFemale);
	DDX_Text(pDX, m_wndMale.GetDlgCtrlID(), m_szMale);
	DDX_Text(pDX, m_wndMin.GetDlgCtrlID(), m_szMin);
	DDX_Text(pDX, m_wndMax.GetDlgCtrlID(), m_szMax);
	DDX_Check(pDX, m_wndPrint.GetDlgCtrlID(), m_bPrint);
	DDX_Check(pDX, m_wndActive.GetDlgCtrlID(), m_bActive);

}
void CLIMSInputDataDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr;
	if(GetMode() == VM_ADD)
		SetDefaultValues();
	else
	{
		szSQL.Format(_T("SELECT * FROM lims_instrument_data WHERE limsid_instid=%d and limsid_code='%s'"), m_nInstID, m_szCode);
		rs.ExecSQL(szSQL);
		if(!rs.IsEOF())
		{
			rs.GetValue(_T("limsid_code"), m_szCode);
			rs.GetValue(_T("limsid_codein"), m_szCodeIn);
			rs.GetValue(_T("limsid_testid"), m_szRefCodeKey);
			rs.GetValue(_T("limsid_name"), m_szName);
			rs.GetValue(_T("limsid_unit"), m_szUnit);
			rs.GetValue(_T("limsid_fnorm"), m_szFemale);
			rs.GetValue(_T("limsid_mnorm"), m_szMale);
			rs.GetValue(_T("limsid_min"), m_szMin);
			rs.GetValue(_T("limsid_max"), m_szMax);
			rs.GetValue(_T("limsid_print"), tmpStr);
			if(tmpStr == _T("Y")) 
				m_bPrint = true;
			else m_bPrint = false;
			rs.GetValue(_T("limsid_active"), tmpStr);
			if(tmpStr == _T("Y")) m_bActive = true; else m_bActive = false;
		}
		else
			SetDefaultValues();
	}
	UpdateData(false);

}
void CLIMSInputDataDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(GetMode() == VM_ADD)
	{
		CRecord rs(&pMF->m_db);
		CString szSQL;
		szSQL.Format(_T("SELECT coalesce(max(limsid_index), 0)+1 FROM lims_instrument_data WHERE limsid_instid=%d"), m_nInstID);
		rs.ExecSQL(szSQL);
		int nIndex = rs.GetIntValue();
		m_lims_instrument_dataTbl.SetValue(_T("limsid_instid"), m_nInstID);
		m_lims_instrument_dataTbl.SetValue(_T("limsid_index"), nIndex);
		m_lims_instrument_dataTbl.SetValue(_T("limsid_code"), m_szCode);
	}
	m_lims_instrument_dataTbl.SetValue(_T("limsid_codein"), m_szCodeIn);
	m_lims_instrument_dataTbl.SetValue(_T("limsid_testid"), m_szRefCodeKey);
	m_lims_instrument_dataTbl.SetValue(_T("limsid_name"), m_szName);
	m_lims_instrument_dataTbl.SetValue(_T("limsid_unit"), m_szUnit);
	m_lims_instrument_dataTbl.SetValue(_T("limsid_fnorm"), m_szFemale);
	m_lims_instrument_dataTbl.SetValue(_T("limsid_mnorm"), m_szMale);
	m_lims_instrument_dataTbl.SetValue(_T("limsid_min"), m_szMin);
	m_lims_instrument_dataTbl.SetValue(_T("limsid_max"), m_szMax);
	m_lims_instrument_dataTbl.SetValue(_T("limsid_print"), m_bPrint?_T("Y"):_T("N"));
	m_lims_instrument_dataTbl.SetValue(_T("limsid_active"), m_bActive?_T("Y"):_T("N"));

}
void CLIMSInputDataDialog::SetDefaultValues(){

	m_szCode.Empty();
	m_szCodeIn.Empty();
	m_szRefCodeKey.Empty();
	m_szName.Empty();
	m_szUnit.Empty();
	m_szFemale.Empty();
	m_szMale.Empty();
	m_szMin.Empty();
	m_szMax.Empty();
	m_bPrint=TRUE;
	m_bActive=TRUE;

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
 			EnableButtons(TRUE, 0, 1, -1); 
 			SetDefaultValues(); 
			m_wndCode.SetFocus();
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 1, -1); 
			m_wndCode.EnableWindow(false);
			m_wndCodeIn.SetFocus();
 			break; 
 		case VM_VIEW: 
 			EnableControls(FALSE); 
 			EnableButtons(FALSE, 0, 1, -1); 
 			break; 
 		case VM_NONE: 
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 0, 1, -1); 
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
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	UpdateData(true);
	szSQL.Format(_T("SELECT count(*) FROM lims_instrument_data WHERE limsid_instid=%d and limsid_code='%s' "), m_nInstID, m_szCode);
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() > 0)
	{
		m_wndCode.SetToolTipMessage(_T("The code is existing in the list"));
		return -1;
	}
	m_szCodeIn = m_szCode;
	UpdateData(false);
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
	UpdateData(true);
	m_szName = m_wndRefCode.GetCurrent(1);
	m_szUnit = m_wndRefCode.GetCurrent(2);
	UpdateData(false);	 
}
/*void CLIMSInputDataDialog::OnRefCodeSetfocus(){
	
}*/
/*void CLIMSInputDataDialog::OnRefCodeKillfocus(){
	
}*/
long CLIMSInputDataDialog::OnRefCodeLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	
	if(m_wndRefCode.IsSearchKey() && !m_szRefCodeKey.IsEmpty()){
		szWhere.Format(_T(" AND hfl_feeid='%s' "), m_szRefCodeKey);
	};
	szSQL.Format(_T("SELECT * FROM hms_feelist WHERE  hfl_groupid='%s' %s ORDER BY hfl_feeid "), m_szTestGroupKey.Trim(), szWhere);
	
	m_wndRefCode.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndRefCode.AddItems(
			rs.GetValue(_T("hfl_feeid")), 
			rs.GetValue(_T("hfl_name")), 
			rs.GetValue(_T("hfl_unit")), 
			NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CLIMSInputDataDialog::OnRefCodeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
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
/*void CLIMSInputDataDialog::OnFemaleChange(){
	
} */
/*void CLIMSInputDataDialog::OnFemaleSetfocus(){
	
} */
/*void CLIMSInputDataDialog::OnFemaleKillfocus(){
	
} */
int CLIMSInputDataDialog::OnFemaleCheckValue(){
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
/*void CLIMSInputDataDialog::OnMinChange(){
	
} */
/*void CLIMSInputDataDialog::OnMinSetfocus(){
	
} */
/*void CLIMSInputDataDialog::OnMinKillfocus(){
	
} */
int CLIMSInputDataDialog::OnMinCheckValue(){
	return 0;
} 
/*void CLIMSInputDataDialog::OnMaxChange(){
	
} */
/*void CLIMSInputDataDialog::OnMaxSetfocus(){
	
} */
/*void CLIMSInputDataDialog::OnMaxKillfocus(){
	
} */
int CLIMSInputDataDialog::OnMaxCheckValue(){
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
	OnSaveLIMSInputDataDialog();
	
} 
void CLIMSInputDataDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();	
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
 		szSQL = m_lims_instrument_dataTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE limsid_instid=%d and limsid_code='%s' "), m_nInstID, m_szCode); 
 		szSQL = m_lims_instrument_dataTbl.GetUpdateSQL(_T("limsid_instid,limsid_index,limsid_code")); 
 		szSQL += szWhere; 
 	} 
 _fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
		if(GetMode() == VM_ADD)
		{
			((CVIMESLISInstrumentSetting*)GetParent())->OnListLoadData();
			SetMode(VM_ADD);
		}
		else
			OnOK();

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
 	pMF->FinishWork(this); 
 	return 0;
} 
int CLIMSInputDataDialog::OnLIMSInputDataDialogListLoadData(){
	return 0;
}
