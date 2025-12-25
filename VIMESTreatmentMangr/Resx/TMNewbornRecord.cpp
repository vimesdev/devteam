#include "TMNewbornRecord.h"
#include "MainFrm.h"
/*static void _OnPatientNoChangeFnc(CWnd *pWnd){
	((CTMNewbornRecord *)pWnd)->OnPatientNoChange();
} */
/*static void _OnPatientNoSetfocusFnc(CWnd *pWnd){
	((CTMNewbornRecord *)pWnd)->OnPatientNoSetfocus();} */ 
/*static void _OnPatientNoKillfocusFnc(CWnd *pWnd){
	((CTMNewbornRecord *)pWnd)->OnPatientNoKillfocus();
} */
static int _OnPatientNoCheckValueFnc(CWnd *pWnd){
	return ((CTMNewbornRecord *)pWnd)->OnPatientNoCheckValue();
} 
/*static void _OnDocumentNoChangeFnc(CWnd *pWnd){
	((CTMNewbornRecord *)pWnd)->OnDocumentNoChange();
} */
/*static void _OnDocumentNoSetfocusFnc(CWnd *pWnd){
	((CTMNewbornRecord *)pWnd)->OnDocumentNoSetfocus();} */ 
/*static void _OnDocumentNoKillfocusFnc(CWnd *pWnd){
	((CTMNewbornRecord *)pWnd)->OnDocumentNoKillfocus();
} */
static int _OnDocumentNoCheckValueFnc(CWnd *pWnd){
	return ((CTMNewbornRecord *)pWnd)->OnDocumentNoCheckValue();
} 
/*static void _OnRecordNoChangeFnc(CWnd *pWnd){
	((CTMNewbornRecord *)pWnd)->OnRecordNoChange();
} */
/*static void _OnRecordNoSetfocusFnc(CWnd *pWnd){
	((CTMNewbornRecord *)pWnd)->OnRecordNoSetfocus();} */ 
/*static void _OnRecordNoKillfocusFnc(CWnd *pWnd){
	((CTMNewbornRecord *)pWnd)->OnRecordNoKillfocus();
} */
static int _OnRecordNoCheckValueFnc(CWnd *pWnd){
	return ((CTMNewbornRecord *)pWnd)->OnRecordNoCheckValue();
} 
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CTMNewbornRecord *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CTMNewbornRecord *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CTMNewbornRecord *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CTMNewbornRecord *)pWnd)->OnNameCheckValue();
} 
/*static void _OnBirthDateChangeFnc(CWnd *pWnd){
	((CTMNewbornRecord *)pWnd)->OnBirthDateChange();
} */
/*static void _OnBirthDateSetfocusFnc(CWnd *pWnd){
	((CTMNewbornRecord *)pWnd)->OnBirthDateSetfocus();} */ 
/*static void _OnBirthDateKillfocusFnc(CWnd *pWnd){
	((CTMNewbornRecord *)pWnd)->OnBirthDateKillfocus();
} */
static int _OnBirthDateCheckValueFnc(CWnd *pWnd){
	return ((CTMNewbornRecord *)pWnd)->OnBirthDateCheckValue();
} 
static void _OnSexSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CTMNewbornRecord* )pWnd)->OnSexSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSexSelendokFnc(CWnd *pWnd){
	((CTMNewbornRecord *)pWnd)->OnSexSelendok();
}
/*static void _OnSexSetfocusFnc(CWnd *pWnd){
	((CTMNewbornRecord *)pWnd)->OnSexKillfocus();
}*/
/*static void _OnSexKillfocusFnc(CWnd *pWnd){
	((CTMNewbornRecord *)pWnd)->OnSexKillfocus();
}*/
static long _OnSexLoadDataFnc(CWnd *pWnd){
	return ((CTMNewbornRecord *)pWnd)->OnSexLoadData();
}
/*static void _OnSexAddNewFnc(CWnd *pWnd){
	((CTMNewbornRecord *)pWnd)->OnSexAddNew();
}*/
/*static void _OnFathersNameChangeFnc(CWnd *pWnd){
	((CTMNewbornRecord *)pWnd)->OnFathersNameChange();
} */
/*static void _OnFathersNameSetfocusFnc(CWnd *pWnd){
	((CTMNewbornRecord *)pWnd)->OnFathersNameSetfocus();} */ 
/*static void _OnFathersNameKillfocusFnc(CWnd *pWnd){
	((CTMNewbornRecord *)pWnd)->OnFathersNameKillfocus();
} */
static int _OnFathersNameCheckValueFnc(CWnd *pWnd){
	return ((CTMNewbornRecord *)pWnd)->OnFathersNameCheckValue();
} 
/*static void _OnFathersAgeChangeFnc(CWnd *pWnd){
	((CTMNewbornRecord *)pWnd)->OnFathersAgeChange();
} */
/*static void _OnFathersAgeSetfocusFnc(CWnd *pWnd){
	((CTMNewbornRecord *)pWnd)->OnFathersAgeSetfocus();} */ 
/*static void _OnFathersAgeKillfocusFnc(CWnd *pWnd){
	((CTMNewbornRecord *)pWnd)->OnFathersAgeKillfocus();
} */
static int _OnFathersAgeCheckValueFnc(CWnd *pWnd){
	return ((CTMNewbornRecord *)pWnd)->OnFathersAgeCheckValue();
} 
/*static void _OnCardNoChangeFnc(CWnd *pWnd){
	((CTMNewbornRecord *)pWnd)->OnCardNoChange();
} */
/*static void _OnCardNoSetfocusFnc(CWnd *pWnd){
	((CTMNewbornRecord *)pWnd)->OnCardNoSetfocus();} */ 
/*static void _OnCardNoKillfocusFnc(CWnd *pWnd){
	((CTMNewbornRecord *)pWnd)->OnCardNoKillfocus();
} */
static int _OnCardNoCheckValueFnc(CWnd *pWnd){
	return ((CTMNewbornRecord *)pWnd)->OnCardNoCheckValue();
} 
/*static void _OnRegDateChangeFnc(CWnd *pWnd){
	((CTMNewbornRecord *)pWnd)->OnRegDateChange();
} */
/*static void _OnRegDateSetfocusFnc(CWnd *pWnd){
	((CTMNewbornRecord *)pWnd)->OnRegDateSetfocus();} */ 
/*static void _OnRegDateKillfocusFnc(CWnd *pWnd){
	((CTMNewbornRecord *)pWnd)->OnRegDateKillfocus();
} */
static int _OnRegDateCheckValueFnc(CWnd *pWnd){
	return ((CTMNewbornRecord *)pWnd)->OnRegDateCheckValue();
} 
/*static void _OnExpDateChangeFnc(CWnd *pWnd){
	((CTMNewbornRecord *)pWnd)->OnExpDateChange();
} */
/*static void _OnExpDateSetfocusFnc(CWnd *pWnd){
	((CTMNewbornRecord *)pWnd)->OnExpDateSetfocus();} */ 
/*static void _OnExpDateKillfocusFnc(CWnd *pWnd){
	((CTMNewbornRecord *)pWnd)->OnExpDateKillfocus();
} */
static int _OnExpDateCheckValueFnc(CWnd *pWnd){
	return ((CTMNewbornRecord *)pWnd)->OnExpDateCheckValue();
} 
static long _OnChildListLoadDataFnc(CWnd *pWnd){
	return ((CTMNewbornRecord*)pWnd)->OnChildListLoadData();
} 
static void _OnChildListDblClickFnc(CWnd *pWnd){
	((CTMNewbornRecord*)pWnd)->OnChildListDblClick();
} 
static void _OnChildListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CTMNewbornRecord*)pWnd)->OnChildListSelectChange(nOldItem, nNewItem);
} 
static int _OnChildListDeleteItemFnc(CWnd *pWnd){
	 return ((CTMNewbornRecord*)pWnd)->OnChildListDeleteItem();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CTMNewbornRecord *pVw = (CTMNewbornRecord *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CTMNewbornRecord *pVw = (CTMNewbornRecord *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CTMNewbornRecord *pVw = (CTMNewbornRecord *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CTMNewbornRecord *pVw = (CTMNewbornRecord *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CTMNewbornRecord *pVw = (CTMNewbornRecord *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CTMNewbornRecord *pVw = (CTMNewbornRecord *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CTMNewbornRecord *pVw = (CTMNewbornRecord *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddTMNewbornRecordFnc(CWnd *pWnd){
	 return ((CTMNewbornRecord*)pWnd)->OnAddTMNewbornRecord();
} 
static int _OnEditTMNewbornRecordFnc(CWnd *pWnd){
	 return ((CTMNewbornRecord*)pWnd)->OnEditTMNewbornRecord();
} 
static int _OnDeleteTMNewbornRecordFnc(CWnd *pWnd){
	 return ((CTMNewbornRecord*)pWnd)->OnDeleteTMNewbornRecord();
} 
static int _OnSaveTMNewbornRecordFnc(CWnd *pWnd){
	 return ((CTMNewbornRecord*)pWnd)->OnSaveTMNewbornRecord();
} 
static int _OnCancelTMNewbornRecordFnc(CWnd *pWnd){
	 return ((CTMNewbornRecord*)pWnd)->OnCancelTMNewbornRecord();
} 
CTMNewbornRecord::CTMNewbornRecord(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 755;
	m_nDlgHeight = 325;
	SetDefaultValues();
}
CTMNewbornRecord::~CTMNewbornRecord(){
}
void CTMNewbornRecord::OnCreateComponents(){
	m_wndPatientNoLabel.Create(this, _T("Patient No"), 10, 30, 100, 55);
	m_wndPatientNo.Create(this,105, 30, 215, 55); 
	m_wndDocumentNoLabel.Create(this, _T("Document No"), 315, 30, 405, 55);
	m_wndDocumentNo.Create(this,410, 30, 520, 55); 
	m_wndRecordNoLabel.Create(this, _T("Record No"), 525, 30, 615, 55);
	m_wndRecordNo.Create(this,620, 30, 730, 55); 
	m_wndNewbornRecord.Create(this, _T("Newborn Record"), 4, 5, 734, 275);
	m_wndNameLabel.Create(this, _T("Name"), 10, 60, 100, 85);
	m_wndName.Create(this,105, 60, 310, 85); 
	m_wndBirthDateLabel.Create(this, _T("Birth Date"), 315, 60, 405, 85);
	m_wndBirthDate.Create(this,410, 60, 520, 85); 
	m_wndSexLabel.Create(this, _T("Sex"), 525, 60, 615, 85);
	m_wndSex.Create(this,620, 60, 730, 85); 
	m_wndFathersNameLabel.Create(this, _T("Father's name"), 10, 90, 100, 115);
	m_wndFathersName.Create(this,105, 90, 310, 115); 
	m_wndFathersAgeLabel.Create(this, _T("Father's age"), 315, 90, 405, 115);
	m_wndFathersAge.Create(this,410, 90, 520, 115); 
	m_wndCardNoLabel.Create(this, _T("Card No"), 10, 120, 100, 145);
	m_wndCardNo.Create(this,105, 120, 310, 145); 
	m_wndRegDateLabel.Create(this, _T("Reg Date"), 315, 120, 405, 145);
	m_wndRegDate.Create(this,410, 120, 520, 145); 
	m_wndExpDateLabel.Create(this, _T("Exp Date"), 525, 120, 615, 145);
	m_wndExpDate.Create(this,620, 120, 730, 145); 
	m_wndChildList.Create(this,10, 150, 729, 270); 
	m_wndAdd.Create(this, _T("&Add"), 147, 280, 227, 305);
	m_wndEdit.Create(this, _T("&Edit"), 232, 280, 312, 305);
	m_wndDelete.Create(this, _T("&Delete"), 317, 280, 397, 305);
	m_wndSave.Create(this, _T("&Save"), 402, 280, 482, 305);
	m_wndCancel.Create(this, _T("&Cancel"), 487, 280, 567, 305);
	m_wndPrint.Create(this, _T("&Print"), 572, 280, 652, 305);
	m_wndClose.Create(this, _T("&Close"), 657, 280, 737, 305);

}
void CTMNewbornRecord::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndPatientNo.SetLimitText(1024);
	m_wndPatientNo.SetCheckValue(true);
	m_wndDocumentNo.SetLimitText(1024);
	m_wndDocumentNo.SetCheckValue(true);
	m_wndRecordNo.SetLimitText(1024);
	m_wndRecordNo.SetCheckValue(true);
	m_wndName.SetLimitText(1024);
	m_wndName.SetCheckValue(true);
	m_wndBirthDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndBirthDate.SetCheckValue(true);
	m_wndSex.SetCheckValue(true);
	m_wndSex.LimitText(1024);
	m_wndFathersName.SetLimitText(1024);
	m_wndFathersName.SetCheckValue(true);
	m_wndFathersAge.SetLimitText(1024);
	m_wndFathersAge.SetCheckValue(true);
	m_wndCardNo.SetLimitText(1024);
	m_wndCardNo.SetCheckValue(true);
	m_wndRegDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndRegDate.SetCheckValue(true);
	m_wndExpDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndExpDate.SetCheckValue(true);





}
void CTMNewbornRecord::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndPatientNo.SetEvent(WE_CHANGE, _OnPatientNoChangeFnc);
	//m_wndPatientNo.SetEvent(WE_SETFOCUS, _OnPatientNoSetfocusFnc);
	//m_wndPatientNo.SetEvent(WE_KILLFOCUS, _OnPatientNoKillfocusFnc);
	m_wndPatientNo.SetEvent(WE_CHECKVALUE, _OnPatientNoCheckValueFnc);
	//m_wndDocumentNo.SetEvent(WE_CHANGE, _OnDocumentNoChangeFnc);
	//m_wndDocumentNo.SetEvent(WE_SETFOCUS, _OnDocumentNoSetfocusFnc);
	//m_wndDocumentNo.SetEvent(WE_KILLFOCUS, _OnDocumentNoKillfocusFnc);
	m_wndDocumentNo.SetEvent(WE_CHECKVALUE, _OnDocumentNoCheckValueFnc);
	//m_wndRecordNo.SetEvent(WE_CHANGE, _OnRecordNoChangeFnc);
	//m_wndRecordNo.SetEvent(WE_SETFOCUS, _OnRecordNoSetfocusFnc);
	//m_wndRecordNo.SetEvent(WE_KILLFOCUS, _OnRecordNoKillfocusFnc);
	m_wndRecordNo.SetEvent(WE_CHECKVALUE, _OnRecordNoCheckValueFnc);
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	//m_wndBirthDate.SetEvent(WE_CHANGE, _OnBirthDateChangeFnc);
	//m_wndBirthDate.SetEvent(WE_SETFOCUS, _OnBirthDateSetfocusFnc);
	//m_wndBirthDate.SetEvent(WE_KILLFOCUS, _OnBirthDateKillfocusFnc);
	m_wndBirthDate.SetEvent(WE_CHECKVALUE, _OnBirthDateCheckValueFnc);
	m_wndSex.SetEvent(WE_SELENDOK, _OnSexSelendokFnc);
	//m_wndSex.SetEvent(WE_SETFOCUS, _OnSexSetfocusFnc);
	//m_wndSex.SetEvent(WE_KILLFOCUS, _OnSexKillfocusFnc);
	m_wndSex.SetEvent(WE_SELCHANGE, _OnSexSelectChangeFnc);
	m_wndSex.SetEvent(WE_LOADDATA, _OnSexLoadDataFnc);
	//m_wndSex.SetEvent(WE_ADDNEW, _OnSexAddNewFnc);
	//m_wndFathersName.SetEvent(WE_CHANGE, _OnFathersNameChangeFnc);
	//m_wndFathersName.SetEvent(WE_SETFOCUS, _OnFathersNameSetfocusFnc);
	//m_wndFathersName.SetEvent(WE_KILLFOCUS, _OnFathersNameKillfocusFnc);
	m_wndFathersName.SetEvent(WE_CHECKVALUE, _OnFathersNameCheckValueFnc);
	//m_wndFathersAge.SetEvent(WE_CHANGE, _OnFathersAgeChangeFnc);
	//m_wndFathersAge.SetEvent(WE_SETFOCUS, _OnFathersAgeSetfocusFnc);
	//m_wndFathersAge.SetEvent(WE_KILLFOCUS, _OnFathersAgeKillfocusFnc);
	m_wndFathersAge.SetEvent(WE_CHECKVALUE, _OnFathersAgeCheckValueFnc);
	//m_wndCardNo.SetEvent(WE_CHANGE, _OnCardNoChangeFnc);
	//m_wndCardNo.SetEvent(WE_SETFOCUS, _OnCardNoSetfocusFnc);
	//m_wndCardNo.SetEvent(WE_KILLFOCUS, _OnCardNoKillfocusFnc);
	m_wndCardNo.SetEvent(WE_CHECKVALUE, _OnCardNoCheckValueFnc);
	//m_wndRegDate.SetEvent(WE_CHANGE, _OnRegDateChangeFnc);
	//m_wndRegDate.SetEvent(WE_SETFOCUS, _OnRegDateSetfocusFnc);
	//m_wndRegDate.SetEvent(WE_KILLFOCUS, _OnRegDateKillfocusFnc);
	m_wndRegDate.SetEvent(WE_CHECKVALUE, _OnRegDateCheckValueFnc);
	//m_wndExpDate.SetEvent(WE_CHANGE, _OnExpDateChangeFnc);
	//m_wndExpDate.SetEvent(WE_SETFOCUS, _OnExpDateSetfocusFnc);
	//m_wndExpDate.SetEvent(WE_KILLFOCUS, _OnExpDateKillfocusFnc);
	m_wndExpDate.SetEvent(WE_CHECKVALUE, _OnExpDateCheckValueFnc);
	m_wndChildList.SetEvent(WE_SELCHANGE, _OnChildListSelectChangeFnc);
	m_wndChildList.SetEvent(WE_LOADDATA, _OnChildListLoadDataFnc);
	m_wndChildList.SetEvent(WE_DBLCLICK, _OnChildListDblClickFnc);
	m_wndChildList.AddEvent(1, _T("Delete"), _OnChildListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_NONE);

}
void CTMNewbornRecord::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndPatientNo.GetDlgCtrlID(), m_nPatientNo);
	DDX_Text(pDX, m_wndDocumentNo.GetDlgCtrlID(), m_nDocumentNo);
	DDX_Text(pDX, m_wndRecordNo.GetDlgCtrlID(), m_szRecordNo);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_TextEx(pDX, m_wndBirthDate.GetDlgCtrlID(), m_szBirthDate);
	DDX_TextEx(pDX, m_wndSex.GetDlgCtrlID(), m_szSexKey);
	DDX_Text(pDX, m_wndFathersName.GetDlgCtrlID(), m_szFathersName);
	DDX_Text(pDX, m_wndFathersAge.GetDlgCtrlID(), m_nFathersAge);
	DDX_Text(pDX, m_wndCardNo.GetDlgCtrlID(), m_szCardNo);
	DDX_TextEx(pDX, m_wndRegDate.GetDlgCtrlID(), m_szRegDate);
	DDX_TextEx(pDX, m_wndExpDate.GetDlgCtrlID(), m_szExpDate);

}
void CTMNewbornRecord::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("PatientNo")] =  m_nPatientNo;
	m_jData[_T("DocumentNo")] =  m_nDocumentNo;
	m_jData[_T("RecordNo")] =  m_szRecordNo;
	m_jData[_T("Name")] =  m_szName;
	m_jData[_T("BirthDate")] =  m_szBirthDate;
	m_jData[_T("Sex")] =  m_szSexKey;
	m_jData[_T("FathersName")] =  m_szFathersName;
	m_jData[_T("FathersAge")] =  m_nFathersAge;
	m_jData[_T("CardNo")] =  m_szCardNo;
	m_jData[_T("RegDate")] =  m_szRegDate;
	m_jData[_T("ExpDate")] =  m_szExpDate;
	}
	else
	{
			
	m_jData[_T("PatientNo")].GetValue(m_nPatientNo);
	m_jData[_T("DocumentNo")].GetValue(m_nDocumentNo);
	m_jData[_T("RecordNo")].GetValue(m_szRecordNo);
	m_jData[_T("Name")].GetValue(m_szName);
	m_jData[_T("BirthDate")].GetValue(m_szBirthDate);
	m_jData[_T("Sex")].GetValue(m_szSexKey);
	m_jData[_T("FathersName")].GetValue(m_szFathersName);
	m_jData[_T("FathersAge")].GetValue(m_nFathersAge);
	m_jData[_T("CardNo")].GetValue(m_szCardNo);
	m_jData[_T("RegDate")].GetValue(m_szRegDate);
	m_jData[_T("ExpDate")].GetValue(m_szExpDate);
	}

}
void CTMNewbornRecord::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CTMNewbornRecord::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CTMNewbornRecord::SetDefaultValues(){

	m_nPatientNo=0;
	m_nDocumentNo=0;
	m_szRecordNo.Empty();
	m_szName.Empty();
	m_szBirthDate.Empty();
	m_szSexKey.Empty();
	m_szFathersName.Empty();
	m_nFathersAge=0;
	m_szCardNo.Empty();
	m_szRegDate.Empty();
	m_szExpDate.Empty();

}
int CTMNewbornRecord::SetMode(int nMode){
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
/*void CTMNewbornRecord::OnPatientNoChange(){
	
} */
/*void CTMNewbornRecord::OnPatientNoSetfocus(){
	
} */
/*void CTMNewbornRecord::OnPatientNoKillfocus(){
	
} */
int CTMNewbornRecord::OnPatientNoCheckValue(){
	return 0;
} 
/*void CTMNewbornRecord::OnDocumentNoChange(){
	
} */
/*void CTMNewbornRecord::OnDocumentNoSetfocus(){
	
} */
/*void CTMNewbornRecord::OnDocumentNoKillfocus(){
	
} */
int CTMNewbornRecord::OnDocumentNoCheckValue(){
	return 0;
} 
/*void CTMNewbornRecord::OnRecordNoChange(){
	
} */
/*void CTMNewbornRecord::OnRecordNoSetfocus(){
	
} */
/*void CTMNewbornRecord::OnRecordNoKillfocus(){
	
} */
int CTMNewbornRecord::OnRecordNoCheckValue(){
	return 0;
} 
/*void CTMNewbornRecord::OnNameChange(){
	
} */
/*void CTMNewbornRecord::OnNameSetfocus(){
	
} */
/*void CTMNewbornRecord::OnNameKillfocus(){
	
} */
int CTMNewbornRecord::OnNameCheckValue(){
	return 0;
} 
/*void CTMNewbornRecord::OnBirthDateChange(){
	
} */
/*void CTMNewbornRecord::OnBirthDateSetfocus(){
	
} */
/*void CTMNewbornRecord::OnBirthDateKillfocus(){
	
} */
int CTMNewbornRecord::OnBirthDateCheckValue(){
	return 0;
} 
void CTMNewbornRecord::OnSexSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CTMNewbornRecord::OnSexSelendok(){
	 
}
/*void CTMNewbornRecord::OnSexSetfocus(){
	
}*/
/*void CTMNewbornRecord::OnSexKillfocus(){
	
}*/
long CTMNewbornRecord::OnSexLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndSex.IsSearchKey() && !m_szSexKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szSexKey
};
	m_wndSex.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndSex.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CTMNewbornRecord::OnSexAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CTMNewbornRecord::OnFathersNameChange(){
	
} */
/*void CTMNewbornRecord::OnFathersNameSetfocus(){
	
} */
/*void CTMNewbornRecord::OnFathersNameKillfocus(){
	
} */
int CTMNewbornRecord::OnFathersNameCheckValue(){
	return 0;
} 
/*void CTMNewbornRecord::OnFathersAgeChange(){
	
} */
/*void CTMNewbornRecord::OnFathersAgeSetfocus(){
	
} */
/*void CTMNewbornRecord::OnFathersAgeKillfocus(){
	
} */
int CTMNewbornRecord::OnFathersAgeCheckValue(){
	return 0;
} 
/*void CTMNewbornRecord::OnCardNoChange(){
	
} */
/*void CTMNewbornRecord::OnCardNoSetfocus(){
	
} */
/*void CTMNewbornRecord::OnCardNoKillfocus(){
	
} */
int CTMNewbornRecord::OnCardNoCheckValue(){
	return 0;
} 
/*void CTMNewbornRecord::OnRegDateChange(){
	
} */
/*void CTMNewbornRecord::OnRegDateSetfocus(){
	
} */
/*void CTMNewbornRecord::OnRegDateKillfocus(){
	
} */
int CTMNewbornRecord::OnRegDateCheckValue(){
	return 0;
} 
/*void CTMNewbornRecord::OnExpDateChange(){
	
} */
/*void CTMNewbornRecord::OnExpDateSetfocus(){
	
} */
/*void CTMNewbornRecord::OnExpDateKillfocus(){
	
} */
int CTMNewbornRecord::OnExpDateCheckValue(){
	return 0;
} 
void CTMNewbornRecord::OnChildListDblClick(){
	
} 
void CTMNewbornRecord::OnChildListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CTMNewbornRecord::OnChildListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CTMNewbornRecord::OnChildListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndChildList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndChildList.AddItems(
		rs.MoveNext();
	}
	m_wndChildList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CTMNewbornRecord::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CTMNewbornRecord::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CTMNewbornRecord::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CTMNewbornRecord::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CTMNewbornRecord::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CTMNewbornRecord::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CTMNewbornRecord::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CTMNewbornRecord::OnAddTMNewbornRecord(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CTMNewbornRecord::OnEditTMNewbornRecord(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CTMNewbornRecord::OnDeleteTMNewbornRecord(){
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
 		OnCancelTMNewbornRecord();
 	}
	return 0;
}
int CTMNewbornRecord::OnSaveTMNewbornRecord(){
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
 		//OnTMNewbornRecordListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CTMNewbornRecord::OnCancelTMNewbornRecord(){
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
int CTMNewbornRecord::OnTMNewbornRecordListLoadData(){
	return 0;
}
