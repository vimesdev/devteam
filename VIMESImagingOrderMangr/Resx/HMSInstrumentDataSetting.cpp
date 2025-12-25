#include "HMSInstrumentDataSetting.h"
//#include "stdafx.h"
#include "MainFrm.h"
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSInstrumentDataSetting*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSInstrumentDataSetting*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSInstrumentDataSetting*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSInstrumentDataSetting*)pWnd)->OnListDeleteItem();
} 
/*static void _OnCodeChangeFnc(CWnd *pWnd){
	((CHMSInstrumentDataSetting *)pWnd)->OnCodeChange();
} */
/*static void _OnCodeSetfocusFnc(CWnd *pWnd){
	((CHMSInstrumentDataSetting *)pWnd)->OnCodeSetfocus();} */ 
/*static void _OnCodeKillfocusFnc(CWnd *pWnd){
	((CHMSInstrumentDataSetting *)pWnd)->OnCodeKillfocus();
} */
static int _OnCodeCheckValueFnc(CWnd *pWnd){
	return ((CHMSInstrumentDataSetting *)pWnd)->OnCodeCheckValue();
} 
/*static void _OnCodeInChangeFnc(CWnd *pWnd){
	((CHMSInstrumentDataSetting *)pWnd)->OnCodeInChange();
} */
/*static void _OnCodeInSetfocusFnc(CWnd *pWnd){
	((CHMSInstrumentDataSetting *)pWnd)->OnCodeInSetfocus();} */ 
/*static void _OnCodeInKillfocusFnc(CWnd *pWnd){
	((CHMSInstrumentDataSetting *)pWnd)->OnCodeInKillfocus();
} */
static int _OnCodeInCheckValueFnc(CWnd *pWnd){
	return ((CHMSInstrumentDataSetting *)pWnd)->OnCodeInCheckValue();
} 
static void _OnTestIDSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSInstrumentDataSetting* )pWnd)->OnTestIDSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTestIDSelendokFnc(CWnd *pWnd){
	((CHMSInstrumentDataSetting *)pWnd)->OnTestIDSelendok();
}
/*static void _OnTestIDSetfocusFnc(CWnd *pWnd){
	((CHMSInstrumentDataSetting *)pWnd)->OnTestIDKillfocus();
}*/
/*static void _OnTestIDKillfocusFnc(CWnd *pWnd){
	((CHMSInstrumentDataSetting *)pWnd)->OnTestIDKillfocus();
}*/
static long _OnTestIDLoadDataFnc(CWnd *pWnd){
	return ((CHMSInstrumentDataSetting *)pWnd)->OnTestIDLoadData();
}
/*static void _OnTestIDAddNewFnc(CWnd *pWnd){
	((CHMSInstrumentDataSetting *)pWnd)->OnTestIDAddNew();
}*/
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CHMSInstrumentDataSetting *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CHMSInstrumentDataSetting *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CHMSInstrumentDataSetting *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSInstrumentDataSetting *)pWnd)->OnNameCheckValue();
} 
/*static void _OnUnitChangeFnc(CWnd *pWnd){
	((CHMSInstrumentDataSetting *)pWnd)->OnUnitChange();
} */
/*static void _OnUnitSetfocusFnc(CWnd *pWnd){
	((CHMSInstrumentDataSetting *)pWnd)->OnUnitSetfocus();} */ 
/*static void _OnUnitKillfocusFnc(CWnd *pWnd){
	((CHMSInstrumentDataSetting *)pWnd)->OnUnitKillfocus();
} */
static int _OnUnitCheckValueFnc(CWnd *pWnd){
	return ((CHMSInstrumentDataSetting *)pWnd)->OnUnitCheckValue();
} 
/*static void _OnPrintIndexChangeFnc(CWnd *pWnd){
	((CHMSInstrumentDataSetting *)pWnd)->OnPrintIndexChange();
} */
/*static void _OnPrintIndexSetfocusFnc(CWnd *pWnd){
	((CHMSInstrumentDataSetting *)pWnd)->OnPrintIndexSetfocus();} */ 
/*static void _OnPrintIndexKillfocusFnc(CWnd *pWnd){
	((CHMSInstrumentDataSetting *)pWnd)->OnPrintIndexKillfocus();
} */
static int _OnPrintIndexCheckValueFnc(CWnd *pWnd){
	return ((CHMSInstrumentDataSetting *)pWnd)->OnPrintIndexCheckValue();
} 
/*static void _OnMaleNormIndexChangeFnc(CWnd *pWnd){
	((CHMSInstrumentDataSetting *)pWnd)->OnMaleNormIndexChange();
} */
/*static void _OnMaleNormIndexSetfocusFnc(CWnd *pWnd){
	((CHMSInstrumentDataSetting *)pWnd)->OnMaleNormIndexSetfocus();} */ 
/*static void _OnMaleNormIndexKillfocusFnc(CWnd *pWnd){
	((CHMSInstrumentDataSetting *)pWnd)->OnMaleNormIndexKillfocus();
} */
static int _OnMaleNormIndexCheckValueFnc(CWnd *pWnd){
	return ((CHMSInstrumentDataSetting *)pWnd)->OnMaleNormIndexCheckValue();
} 
/*static void _OnFemaleNormalIndexChangeFnc(CWnd *pWnd){
	((CHMSInstrumentDataSetting *)pWnd)->OnFemaleNormalIndexChange();
} */
/*static void _OnFemaleNormalIndexSetfocusFnc(CWnd *pWnd){
	((CHMSInstrumentDataSetting *)pWnd)->OnFemaleNormalIndexSetfocus();} */ 
/*static void _OnFemaleNormalIndexKillfocusFnc(CWnd *pWnd){
	((CHMSInstrumentDataSetting *)pWnd)->OnFemaleNormalIndexKillfocus();
} */
static int _OnFemaleNormalIndexCheckValueFnc(CWnd *pWnd){
	return ((CHMSInstrumentDataSetting *)pWnd)->OnFemaleNormalIndexCheckValue();
} 
/*static void _OnMinIndexChangeFnc(CWnd *pWnd){
	((CHMSInstrumentDataSetting *)pWnd)->OnMinIndexChange();
} */
/*static void _OnMinIndexSetfocusFnc(CWnd *pWnd){
	((CHMSInstrumentDataSetting *)pWnd)->OnMinIndexSetfocus();} */ 
/*static void _OnMinIndexKillfocusFnc(CWnd *pWnd){
	((CHMSInstrumentDataSetting *)pWnd)->OnMinIndexKillfocus();
} */
static int _OnMinIndexCheckValueFnc(CWnd *pWnd){
	return ((CHMSInstrumentDataSetting *)pWnd)->OnMinIndexCheckValue();
} 
/*static void _OnMaxIndexChangeFnc(CWnd *pWnd){
	((CHMSInstrumentDataSetting *)pWnd)->OnMaxIndexChange();
} */
/*static void _OnMaxIndexSetfocusFnc(CWnd *pWnd){
	((CHMSInstrumentDataSetting *)pWnd)->OnMaxIndexSetfocus();} */ 
/*static void _OnMaxIndexKillfocusFnc(CWnd *pWnd){
	((CHMSInstrumentDataSetting *)pWnd)->OnMaxIndexKillfocus();
} */
static int _OnMaxIndexCheckValueFnc(CWnd *pWnd){
	return ((CHMSInstrumentDataSetting *)pWnd)->OnMaxIndexCheckValue();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSInstrumentDataSetting *pVw = (CHMSInstrumentDataSetting *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CHMSInstrumentDataSetting *pVw = (CHMSInstrumentDataSetting *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSInstrumentDataSetting *pVw = (CHMSInstrumentDataSetting *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSInstrumentDataSetting *pVw = (CHMSInstrumentDataSetting *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSInstrumentDataSetting *pVw = (CHMSInstrumentDataSetting *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSInstrumentDataSetting *pVw = (CHMSInstrumentDataSetting *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSInstrumentDataSettingFnc(CWnd *pWnd){
	 return ((CHMSInstrumentDataSetting*)pWnd)->OnAddHMSInstrumentDataSetting();
} 
static int _OnEditHMSInstrumentDataSettingFnc(CWnd *pWnd){
	 return ((CHMSInstrumentDataSetting*)pWnd)->OnEditHMSInstrumentDataSetting();
} 
static int _OnDeleteHMSInstrumentDataSettingFnc(CWnd *pWnd){
	 return ((CHMSInstrumentDataSetting*)pWnd)->OnDeleteHMSInstrumentDataSetting();
} 
static int _OnSaveHMSInstrumentDataSettingFnc(CWnd *pWnd){
	 return ((CHMSInstrumentDataSetting*)pWnd)->OnSaveHMSInstrumentDataSetting();
} 
static int _OnCancelHMSInstrumentDataSettingFnc(CWnd *pWnd){
	 return ((CHMSInstrumentDataSetting*)pWnd)->OnCancelHMSInstrumentDataSetting();
} 
CHMSInstrumentDataSetting::CHMSInstrumentDataSetting(){

	m_nDlgWidth = 620;
	m_nDlgHeight = 405;
	SetDefaultValues();
}
CHMSInstrumentDataSetting::~CHMSInstrumentDataSetting(){
}
void CHMSInstrumentDataSetting::OnCreateComponents(){
	m_wndInstrumentDataInformation.Create(this, _T("Instrument Data Information"), 5, 5, 615, 373);
	m_wndList.Create(this,10, 28, 611, 287); 
	m_wndCodeLabel.Create(this, _T("Code"), 10, 292, 90, 314);
	m_wndCode.Create(this,95, 292, 165, 314); 
	m_wndCodeInLabel.Create(this, _T("Code In"), 170, 292, 250, 314);
	m_wndCodeIn.Create(this,255, 292, 325, 314); 
	m_wndTestIDLabel.Create(this, _T("Test ID"), 330, 292, 391, 314);
	m_wndTestID.Create(this,396, 292, 610, 314); 
	m_wndNameLabel.Create(this, _T("Name"), 10, 319, 90, 341);
	m_wndName.Create(this,95, 319, 325, 341); 
	m_wndUnitLabel.Create(this, _T("Unit"), 330, 319, 391, 341);
	m_wndUnit.Create(this,396, 319, 466, 341); 
	m_wndPrintIndexLabel.Create(this, _T("Print Index"), 471, 319, 535, 341);
	m_wndPrintIndex.Create(this,540, 319, 610, 341); 
	m_wndMaleNormIndexLabel.Create(this, _T("Male Index"), 10, 346, 90, 368);
	m_wndMaleNormIndex.Create(this,95, 346, 165, 368); 
	m_wndFemaleNormalIndexLabel.Create(this, _T("Female Index"), 170, 346, 250, 368);
	m_wndFemaleNormalIndex.Create(this,255, 346, 325, 368); 
	m_wndMinIndexLabel.Create(this, _T("Min Index"), 330, 346, 391, 368);
	m_wndMinIndex.Create(this,396, 346, 466, 368); 
	m_wndMaxIndexLabel.Create(this, _T("Max Index"), 471, 346, 535, 368);
	m_wndMaxIndex.Create(this,540, 346, 610, 368); 
	m_wndAdd.Create(this, _T("&Add"), 170, 378, 240, 400);
	m_wndEdit.Create(this, _T("&Edit"), 245, 378, 315, 400);
	m_wndDelete.Create(this, _T("&Delete"), 320, 378, 390, 400);
	m_wndSave.Create(this, _T("&Save"), 395, 378, 465, 400);
	m_wndCancel.Create(this, _T("&Cancel"), 470, 378, 540, 400);
	m_wndClose.Create(this, _T("&Close"), 545, 378, 615, 400);

}
void CHMSInstrumentDataSetting::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndCode.SetLimitText(15);
	m_wndCode.SetCheckValue(true);
	m_wndCodeIn.SetLimitText(15);
	m_wndCodeIn.SetCheckValue(true);
	m_wndTestID.SetCheckValue(true);
	m_wndTestID.LimitText(7);
	m_wndName.SetLimitText(35);
	m_wndName.SetCheckValue(true);
	m_wndUnit.SetLimitText(15);
	m_wndUnit.SetCheckValue(true);
	m_wndPrintIndex.SetCheckValue(true);
	m_wndMaleNormIndex.SetLimitText(15);
	m_wndMaleNormIndex.SetCheckValue(true);
	m_wndFemaleNormalIndex.SetLimitText(15);
	m_wndFemaleNormalIndex.SetCheckValue(true);
	m_wndMinIndex.SetLimitText(15);
	m_wndMinIndex.SetCheckValue(true);
	m_wndMaxIndex.SetLimitText(15);
	m_wndMaxIndex.SetCheckValue(true);


	m_wndList.InsertColumn(0, _T("Index"), CFMT_NUMBER, 30);
	m_wndList.InsertColumn(1, _T("Code"), CFMT_TEXT, 60);
	m_wndList.InsertColumn(2, _T("Code In"), CFMT_TEXT, 60);
	m_wndList.InsertColumn(3, _T("Name"), CFMT_TEXT, 120);
	m_wndList.InsertColumn(4, _T("Unit"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(5, _T("Male Index"), CFMT_TEXT, 90);
	m_wndList.InsertColumn(6, _T("Female Index"), CFMT_TEXT, 90);
	m_wndList.InsertColumn(7, _T("Print Index"), CFMT_NUMBER, 75);


	m_wndTestID.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndTestID.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);
	m_hms_instrument_itemTbl.SetTableName(_T("hms_instrument_item"));
	m_hms_instrument_itemTbl.AddField(_T("hii_instrumentid"), dfLong); 
	m_hms_instrument_itemTbl.AddField(_T("hii_index"), dfLong); 
	m_hms_instrument_itemTbl.AddField(_T("hii_code"), dfText, 15); 
	m_hms_instrument_itemTbl.AddField(_T("hii_codein"), dfText, 15); 
	m_hms_instrument_itemTbl.AddField(_T("hii_testid"), dfText, 7); 
	m_hms_instrument_itemTbl.AddField(_T("hii_name"), dfText, 35); 
	m_hms_instrument_itemTbl.AddField(_T("hii_unit"), dfText, 15); 
	m_hms_instrument_itemTbl.AddField(_T("hii_fnorm"), dfText, 15); 
	m_hms_instrument_itemTbl.AddField(_T("hii_mnorm"), dfText, 15); 
	m_hms_instrument_itemTbl.AddField(_T("hii_min"), dfText, 15); 
	m_hms_instrument_itemTbl.AddField(_T("hii_max"), dfText, 15); 
	m_hms_instrument_itemTbl.AddField(_T("hii_print"), dfLong); 
	m_hms_instrument_itemTbl.AddField(_T("hii_active"), dfText, 1); 

}
void CHMSInstrumentDataSetting::OnSetWindowEvents(){
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	//m_wndCode.SetEvent(WE_CHANGE, _OnCodeChangeFnc);
	//m_wndCode.SetEvent(WE_SETFOCUS, _OnCodeSetfocusFnc);
	//m_wndCode.SetEvent(WE_KILLFOCUS, _OnCodeKillfocusFnc);
	m_wndCode.SetEvent(WE_CHECKVALUE, _OnCodeCheckValueFnc);
	//m_wndCodeIn.SetEvent(WE_CHANGE, _OnCodeInChangeFnc);
	//m_wndCodeIn.SetEvent(WE_SETFOCUS, _OnCodeInSetfocusFnc);
	//m_wndCodeIn.SetEvent(WE_KILLFOCUS, _OnCodeInKillfocusFnc);
	m_wndCodeIn.SetEvent(WE_CHECKVALUE, _OnCodeInCheckValueFnc);
	m_wndTestID.SetEvent(WE_SELENDOK, _OnTestIDSelendokFnc);
	//m_wndTestID.SetEvent(WE_SETFOCUS, _OnTestIDSetfocusFnc);
	//m_wndTestID.SetEvent(WE_KILLFOCUS, _OnTestIDKillfocusFnc);
	m_wndTestID.SetEvent(WE_SELCHANGE, _OnTestIDSelectChangeFnc);
	m_wndTestID.SetEvent(WE_LOADDATA, _OnTestIDLoadDataFnc);
	//m_wndTestID.SetEvent(WE_ADDNEW, _OnTestIDAddNewFnc);
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	//m_wndUnit.SetEvent(WE_CHANGE, _OnUnitChangeFnc);
	//m_wndUnit.SetEvent(WE_SETFOCUS, _OnUnitSetfocusFnc);
	//m_wndUnit.SetEvent(WE_KILLFOCUS, _OnUnitKillfocusFnc);
	m_wndUnit.SetEvent(WE_CHECKVALUE, _OnUnitCheckValueFnc);
	//m_wndPrintIndex.SetEvent(WE_CHANGE, _OnPrintIndexChangeFnc);
	//m_wndPrintIndex.SetEvent(WE_SETFOCUS, _OnPrintIndexSetfocusFnc);
	//m_wndPrintIndex.SetEvent(WE_KILLFOCUS, _OnPrintIndexKillfocusFnc);
	m_wndPrintIndex.SetEvent(WE_CHECKVALUE, _OnPrintIndexCheckValueFnc);
	//m_wndMaleNormIndex.SetEvent(WE_CHANGE, _OnMaleNormIndexChangeFnc);
	//m_wndMaleNormIndex.SetEvent(WE_SETFOCUS, _OnMaleNormIndexSetfocusFnc);
	//m_wndMaleNormIndex.SetEvent(WE_KILLFOCUS, _OnMaleNormIndexKillfocusFnc);
	m_wndMaleNormIndex.SetEvent(WE_CHECKVALUE, _OnMaleNormIndexCheckValueFnc);
	//m_wndFemaleNormalIndex.SetEvent(WE_CHANGE, _OnFemaleNormalIndexChangeFnc);
	//m_wndFemaleNormalIndex.SetEvent(WE_SETFOCUS, _OnFemaleNormalIndexSetfocusFnc);
	//m_wndFemaleNormalIndex.SetEvent(WE_KILLFOCUS, _OnFemaleNormalIndexKillfocusFnc);
	m_wndFemaleNormalIndex.SetEvent(WE_CHECKVALUE, _OnFemaleNormalIndexCheckValueFnc);
	//m_wndMinIndex.SetEvent(WE_CHANGE, _OnMinIndexChangeFnc);
	//m_wndMinIndex.SetEvent(WE_SETFOCUS, _OnMinIndexSetfocusFnc);
	//m_wndMinIndex.SetEvent(WE_KILLFOCUS, _OnMinIndexKillfocusFnc);
	m_wndMinIndex.SetEvent(WE_CHECKVALUE, _OnMinIndexCheckValueFnc);
	//m_wndMaxIndex.SetEvent(WE_CHANGE, _OnMaxIndexChangeFnc);
	//m_wndMaxIndex.SetEvent(WE_SETFOCUS, _OnMaxIndexSetfocusFnc);
	//m_wndMaxIndex.SetEvent(WE_KILLFOCUS, _OnMaxIndexKillfocusFnc);
	m_wndMaxIndex.SetEvent(WE_CHECKVALUE, _OnMaxIndexCheckValueFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);

}
void CHMSInstrumentDataSetting::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndCode.GetDlgCtrlID(), m_szCode);
	DDX_Text(pDX, m_wndCodeIn.GetDlgCtrlID(), m_szCodeIn);
	DDX_TextEx(pDX, m_wndTestID.GetDlgCtrlID(), m_szTestIDKey);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_Text(pDX, m_wndUnit.GetDlgCtrlID(), m_szUnit);
	DDX_Text(pDX, m_wndPrintIndex.GetDlgCtrlID(), m_nPrintIndex);
	DDX_Text(pDX, m_wndMaleNormIndex.GetDlgCtrlID(), m_szMaleNormIndex);
	DDX_Text(pDX, m_wndFemaleNormalIndex.GetDlgCtrlID(), m_szFemaleNormalIndex);
	DDX_Text(pDX, m_wndMinIndex.GetDlgCtrlID(), m_szMinIndex);
	DDX_Text(pDX, m_wndMaxIndex.GetDlgCtrlID(), m_szMaxIndex);

}
void CHMSInstrumentDataSetting::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("hii_code"), m_szCode);
	rs.GetValue(_T("hii_codein"), m_szCodeIn);
	rs.GetValue(_T("hii_testid"), m_szTestIDKey);
	rs.GetValue(_T("hii_name"), m_szName);
	rs.GetValue(_T("hii_unit"), m_szUnit);
	rs.GetValue(_T("hii_fnorm"), m_szFemaleNormalIndex);
	rs.GetValue(_T("hii_mnorm"), m_szMaleNormIndex);
	rs.GetValue(_T("hii_min"), m_szMinIndex);
	rs.GetValue(_T("hii_max"), m_szMaxIndex);
	rs.GetValue(_T("hii_print"), m_nPrintIndex);

}
void CHMSInstrumentDataSetting::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_hms_instrument_itemTbl.SetValue(_T("hii_code"), m_szCode);
	m_hms_instrument_itemTbl.SetValue(_T("hii_codein"), m_szCodeIn);
	m_hms_instrument_itemTbl.SetValue(_T("hii_testid"), m_szTestIDKey);
	m_hms_instrument_itemTbl.SetValue(_T("hii_name"), m_szName);
	m_hms_instrument_itemTbl.SetValue(_T("hii_unit"), m_szUnit);
	m_hms_instrument_itemTbl.SetValue(_T("hii_fnorm"), m_szFemaleNormalIndex);
	m_hms_instrument_itemTbl.SetValue(_T("hii_mnorm"), m_szMaleNormIndex);
	m_hms_instrument_itemTbl.SetValue(_T("hii_min"), m_szMinIndex);
	m_hms_instrument_itemTbl.SetValue(_T("hii_max"), m_szMaxIndex);
	m_hms_instrument_itemTbl.SetValue(_T("hii_print"), m_nPrintIndex);

}
void CHMSInstrumentDataSetting::SetDefaultValues(){

	m_szCode.Empty();
	m_szCodeIn.Empty();
	m_szTestIDKey.Empty();
	m_szName.Empty();
	m_szUnit.Empty();
	m_nPrintIndex=0;
	m_szMaleNormIndex.Empty();
	m_szFemaleNormalIndex.Empty();
	m_szMinIndex.Empty();
	m_szMaxIndex.Empty();

}
int CHMSInstrumentDataSetting::SetMode(int nMode){ 
 		int nOldMode = GetMode(); 
 		CGuiView::SetMode(nMode); 
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
void CHMSInstrumentDataSetting::OnListDblClick(){
	
} 
void CHMSInstrumentDataSetting::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSInstrumentDataSetting::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSInstrumentDataSetting::OnListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	m_wndList.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("Index")), 
			rs.GetValue(_T("Code")), 
			rs.GetValue(_T("CodeIn")), 
			rs.GetValue(_T("Name")), 
			rs.GetValue(_T("Unit")), 
			rs.GetValue(_T("MaleIndex")), 
			rs.GetValue(_T("FemaleIndex")), 
			rs.GetValue(_T("PrintIndex")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
*/
	return 0;
}
/*void CHMSInstrumentDataSetting::OnCodeChange(){
	
} */
/*void CHMSInstrumentDataSetting::OnCodeSetfocus(){
	
} */
/*void CHMSInstrumentDataSetting::OnCodeKillfocus(){
	
} */
int CHMSInstrumentDataSetting::OnCodeCheckValue(){
	return 0;
} 
/*void CHMSInstrumentDataSetting::OnCodeInChange(){
	
} */
/*void CHMSInstrumentDataSetting::OnCodeInSetfocus(){
	
} */
/*void CHMSInstrumentDataSetting::OnCodeInKillfocus(){
	
} */
int CHMSInstrumentDataSetting::OnCodeInCheckValue(){
	return 0;
} 
void CHMSInstrumentDataSetting::OnTestIDSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSInstrumentDataSetting::OnTestIDSelendok(){
	 
}
/*void CHMSInstrumentDataSetting::OnTestIDSetfocus(){
	
}*/
/*void CHMSInstrumentDataSetting::OnTestIDKillfocus(){
	
}*/
long CHMSInstrumentDataSetting::OnTestIDLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndTestID.IsSearchKey() && !m_szTestIDKey.IsEmpty()){
	};
	m_wndTestID.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndTestID.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSInstrumentDataSetting::OnTestIDAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSInstrumentDataSetting::OnNameChange(){
	
} */
/*void CHMSInstrumentDataSetting::OnNameSetfocus(){
	
} */
/*void CHMSInstrumentDataSetting::OnNameKillfocus(){
	
} */
int CHMSInstrumentDataSetting::OnNameCheckValue(){
	return 0;
} 
/*void CHMSInstrumentDataSetting::OnUnitChange(){
	
} */
/*void CHMSInstrumentDataSetting::OnUnitSetfocus(){
	
} */
/*void CHMSInstrumentDataSetting::OnUnitKillfocus(){
	
} */
int CHMSInstrumentDataSetting::OnUnitCheckValue(){
	return 0;
} 
/*void CHMSInstrumentDataSetting::OnPrintIndexChange(){
	
} */
/*void CHMSInstrumentDataSetting::OnPrintIndexSetfocus(){
	
} */
/*void CHMSInstrumentDataSetting::OnPrintIndexKillfocus(){
	
} */
int CHMSInstrumentDataSetting::OnPrintIndexCheckValue(){
	return 0;
} 
/*void CHMSInstrumentDataSetting::OnMaleNormIndexChange(){
	
} */
/*void CHMSInstrumentDataSetting::OnMaleNormIndexSetfocus(){
	
} */
/*void CHMSInstrumentDataSetting::OnMaleNormIndexKillfocus(){
	
} */
int CHMSInstrumentDataSetting::OnMaleNormIndexCheckValue(){
	return 0;
} 
/*void CHMSInstrumentDataSetting::OnFemaleNormalIndexChange(){
	
} */
/*void CHMSInstrumentDataSetting::OnFemaleNormalIndexSetfocus(){
	
} */
/*void CHMSInstrumentDataSetting::OnFemaleNormalIndexKillfocus(){
	
} */
int CHMSInstrumentDataSetting::OnFemaleNormalIndexCheckValue(){
	return 0;
} 
/*void CHMSInstrumentDataSetting::OnMinIndexChange(){
	
} */
/*void CHMSInstrumentDataSetting::OnMinIndexSetfocus(){
	
} */
/*void CHMSInstrumentDataSetting::OnMinIndexKillfocus(){
	
} */
int CHMSInstrumentDataSetting::OnMinIndexCheckValue(){
	return 0;
} 
/*void CHMSInstrumentDataSetting::OnMaxIndexChange(){
	
} */
/*void CHMSInstrumentDataSetting::OnMaxIndexSetfocus(){
	
} */
/*void CHMSInstrumentDataSetting::OnMaxIndexKillfocus(){
	
} */
int CHMSInstrumentDataSetting::OnMaxIndexCheckValue(){
	return 0;
} 
void CHMSInstrumentDataSetting::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSInstrumentDataSetting::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSInstrumentDataSetting::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSInstrumentDataSetting::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSInstrumentDataSetting::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSInstrumentDataSetting::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSInstrumentDataSetting::OnAddHMSInstrumentDataSetting(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Add HMSInstrumentDataSetting"))) 
 		return -1; 
 	SetMode(VM_ADD);
return 0; 
 
} 
int CHMSInstrumentDataSetting::OnEditHMSInstrumentDataSetting(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Edit HMSInstrumentDataSetting"))) 
 		return -1; 
 	SetMode(VM_EDIT);
return 0;  
 
} 
int CHMSInstrumentDataSetting::OnDeleteHMSInstrumentDataSetting(){
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
 		OnCancelHMSInstrumentDataSetting(); 
 	}
return 0;
 } 
int CHMSInstrumentDataSetting::OnSaveHMSInstrumentDataSetting(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		//7szSQL = m_hms_instrument_itemTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE")); 
 		//szSQL = m_hms_instrument_itemTbl.GetUpdateSQL(_T("createdby,createddate")); 
 		szSQL += szWhere; 
 	} 
 _fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		//OnHMSInstrumentDataSettingListLoadData(); 
 		SetMode(VM_VIEW); 
 		pMF->FinishWork(this); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSInstrumentDataSetting::OnCancelHMSInstrumentDataSetting(){
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
int CHMSInstrumentDataSetting::OnHMSInstrumentDataSettingListLoadData(){
	return 0;
}
