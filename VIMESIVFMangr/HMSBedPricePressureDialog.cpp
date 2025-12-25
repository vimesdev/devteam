#include "HMSBedApplyDynamicPriceDialog.h"
#include "HMSMainFrame.h"
/*static void _OnTreatmentNumberChangeFnc(CWnd *pWnd){
	((CHMSBedApplyDynamicPriceDialog *)pWnd)->OnTreatmentNumberChange();
} */
/*static void _OnTreatmentNumberSetfocusFnc(CWnd *pWnd){
	((CHMSBedApplyDynamicPriceDialog *)pWnd)->OnTreatmentNumberSetfocus();} */ 
/*static void _OnTreatmentNumberKillfocusFnc(CWnd *pWnd){
	((CHMSBedApplyDynamicPriceDialog *)pWnd)->OnTreatmentNumberKillfocus();
} */
static int _OnTreatmentNumberCheckValueFnc(CWnd *pWnd){
	return ((CHMSBedApplyDynamicPriceDialog *)pWnd)->OnTreatmentNumberCheckValue();
} 
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CHMSBedApplyDynamicPriceDialog *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CHMSBedApplyDynamicPriceDialog *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CHMSBedApplyDynamicPriceDialog *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSBedApplyDynamicPriceDialog *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CHMSBedApplyDynamicPriceDialog *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CHMSBedApplyDynamicPriceDialog *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CHMSBedApplyDynamicPriceDialog *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSBedApplyDynamicPriceDialog *)pWnd)->OnToDateCheckValue();
} 
static void _OnLevelOfPriceSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSBedApplyDynamicPriceDialog* )pWnd)->OnLevelOfPriceSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnLevelOfPriceSelendokFnc(CWnd *pWnd){
	((CHMSBedApplyDynamicPriceDialog *)pWnd)->OnLevelOfPriceSelendok();
}
/*static void _OnLevelOfPriceSetfocusFnc(CWnd *pWnd){
	((CHMSBedApplyDynamicPriceDialog *)pWnd)->OnLevelOfPriceKillfocus();
}*/
/*static void _OnLevelOfPriceKillfocusFnc(CWnd *pWnd){
	((CHMSBedApplyDynamicPriceDialog *)pWnd)->OnLevelOfPriceKillfocus();
}*/
static long _OnLevelOfPriceLoadDataFnc(CWnd *pWnd){
	return ((CHMSBedApplyDynamicPriceDialog *)pWnd)->OnLevelOfPriceLoadData();
}
/*static void _OnLevelOfPriceAddNewFnc(CWnd *pWnd){
	((CHMSBedApplyDynamicPriceDialog *)pWnd)->OnLevelOfPriceAddNew();
}*/
/*static void _OnPriceChangeFnc(CWnd *pWnd){
	((CHMSBedApplyDynamicPriceDialog *)pWnd)->OnPriceChange();
} */
/*static void _OnPriceSetfocusFnc(CWnd *pWnd){
	((CHMSBedApplyDynamicPriceDialog *)pWnd)->OnPriceSetfocus();} */ 
/*static void _OnPriceKillfocusFnc(CWnd *pWnd){
	((CHMSBedApplyDynamicPriceDialog *)pWnd)->OnPriceKillfocus();
} */
static int _OnPriceCheckValueFnc(CWnd *pWnd){
	return ((CHMSBedApplyDynamicPriceDialog *)pWnd)->OnPriceCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSBedApplyDynamicPriceDialog *pVw = (CHMSBedApplyDynamicPriceDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSBedApplyDynamicPriceDialog *pVw = (CHMSBedApplyDynamicPriceDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSBedApplyDynamicPriceDialogFnc(CWnd *pWnd){
	 return ((CHMSBedApplyDynamicPriceDialog*)pWnd)->OnAddHMSBedApplyDynamicPriceDialog();
} 
static int _OnEditHMSBedApplyDynamicPriceDialogFnc(CWnd *pWnd){
	 return ((CHMSBedApplyDynamicPriceDialog*)pWnd)->OnEditHMSBedApplyDynamicPriceDialog();
} 
static int _OnDeleteHMSBedApplyDynamicPriceDialogFnc(CWnd *pWnd){
	 return ((CHMSBedApplyDynamicPriceDialog*)pWnd)->OnDeleteHMSBedApplyDynamicPriceDialog();
} 
static int _OnSaveHMSBedApplyDynamicPriceDialogFnc(CWnd *pWnd){
	 return ((CHMSBedApplyDynamicPriceDialog*)pWnd)->OnSaveHMSBedApplyDynamicPriceDialog();
} 
static int _OnCancelHMSBedApplyDynamicPriceDialogFnc(CWnd *pWnd){
	 return ((CHMSBedApplyDynamicPriceDialog*)pWnd)->OnCancelHMSBedApplyDynamicPriceDialog();
} 
CHMSBedApplyDynamicPriceDialog::CHMSBedApplyDynamicPriceDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 605;
	m_nDlgHeight = 125;
	SetDefaultValues();
}
CHMSBedApplyDynamicPriceDialog::~CHMSBedApplyDynamicPriceDialog(){
}
void CHMSBedApplyDynamicPriceDialog::OnCreateComponents(){
	m_wndPeriod.Create(this, _T("Period"), 5, 5, 600, 90);
	m_wndTreatmentNumberLabel.Create(this, _T("Treatment Number"), 10, 30, 140, 55);
	m_wndTreatmentNumber.Create(this,145, 30, 235, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 240, 30, 320, 55);
	m_wndFromDate.Create(this,325, 30, 415, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 420, 30, 500, 55);
	m_wndToDate.Create(this,505, 30, 595, 55); 
	m_wndLevelOfPriceLabel.Create(this, _T("Level of price"), 10, 60, 140, 85);
	m_wndLevelOfPrice.Create(this,145, 60, 415, 85); 
	m_wndPriceLabel.Create(this, _T("Price"), 420, 60, 500, 85);
	m_wndPrice.Create(this,505, 60, 595, 85); 
	m_wndSave.Create(this, _T("&Save"), 445, 95, 520, 120);
	m_wndClose.Create(this, _T("&Close"), 525, 95, 600, 120);

}
void CHMSBedApplyDynamicPriceDialog::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndTreatmentNumber.SetLimitText(16);
	m_wndTreatmentNumber.SetCheckValue(true);
	m_wndFromDate.SetReadOnly(TRUE);
	m_wndToDate.SetReadOnly(TRUE);
	m_wndLevelOfPrice.SetCheckValue(true);
	m_wndLevelOfPrice.LimitText(35);
	m_wndPrice.SetLimitText(16);


	m_wndLevelOfPrice.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndLevelOfPrice.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);

}
void CHMSBedApplyDynamicPriceDialog::OnSetWindowEvents(){
	//m_wndTreatmentNumber.SetEvent(WE_CHANGE, _OnTreatmentNumberChangeFnc);
	//m_wndTreatmentNumber.SetEvent(WE_SETFOCUS, _OnTreatmentNumberSetfocusFnc);
	//m_wndTreatmentNumber.SetEvent(WE_KILLFOCUS, _OnTreatmentNumberKillfocusFnc);
	m_wndTreatmentNumber.SetEvent(WE_CHECKVALUE, _OnTreatmentNumberCheckValueFnc);
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndLevelOfPrice.SetEvent(WE_SELENDOK, _OnLevelOfPriceSelendokFnc);
	//m_wndLevelOfPrice.SetEvent(WE_SETFOCUS, _OnLevelOfPriceSetfocusFnc);
	//m_wndLevelOfPrice.SetEvent(WE_KILLFOCUS, _OnLevelOfPriceKillfocusFnc);
	m_wndLevelOfPrice.SetEvent(WE_SELCHANGE, _OnLevelOfPriceSelectChangeFnc);
	m_wndLevelOfPrice.SetEvent(WE_LOADDATA, _OnLevelOfPriceLoadDataFnc);
	//m_wndLevelOfPrice.SetEvent(WE_ADDNEW, _OnLevelOfPriceAddNewFnc);
	//m_wndPrice.SetEvent(WE_CHANGE, _OnPriceChangeFnc);
	//m_wndPrice.SetEvent(WE_SETFOCUS, _OnPriceSetfocusFnc);
	//m_wndPrice.SetEvent(WE_KILLFOCUS, _OnPriceKillfocusFnc);
	m_wndPrice.SetEvent(WE_CHECKVALUE, _OnPriceCheckValueFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(GetMode());
}
void CHMSBedApplyDynamicPriceDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndTreatmentNumber.GetDlgCtrlID(), m_nTreatmentNumber);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndLevelOfPrice.GetDlgCtrlID(), m_szLevelOfPriceKey);
	DDX_Text(pDX, m_wndPrice.GetDlgCtrlID(), m_nPrice);

}
void CHMSBedApplyDynamicPriceDialog::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSBedApplyDynamicPriceDialog::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CHMSBedApplyDynamicPriceDialog::SetDefaultValues(){

	m_nTreatmentNumber=0;
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szLevelOfPriceKey.Empty();
	m_nPrice=0;

}
int CHMSBedApplyDynamicPriceDialog::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiDialog::SetMode(nMode); 
 		CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
  		switch(nMode){ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 1, -1); 
 			SetDefaultValues(); 
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 1, -1); 
 			break; 
 		case VM_VIEW: 
 			EnableControls(FALSE); 
 			EnableButtons(FALSE, 0, -1); 
 			break; 
 		case VM_NONE: 
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 0,  -1); 
 			SetDefaultValues(); 
 			break; 
 		}; 
 		UpdateData(FALSE); 
 		return nOldMode; 
}
/*void CHMSBedApplyDynamicPriceDialog::OnTreatmentNumberChange(){
	
} */
/*void CHMSBedApplyDynamicPriceDialog::OnTreatmentNumberSetfocus(){
	
} */
/*void CHMSBedApplyDynamicPriceDialog::OnTreatmentNumberKillfocus(){
	
} */
int CHMSBedApplyDynamicPriceDialog::OnTreatmentNumberCheckValue(){
	return 0;
} 
/*void CHMSBedApplyDynamicPriceDialog::OnFromDateChange(){
	
} */
/*void CHMSBedApplyDynamicPriceDialog::OnFromDateSetfocus(){
	
} */
/*void CHMSBedApplyDynamicPriceDialog::OnFromDateKillfocus(){
	
} */
int CHMSBedApplyDynamicPriceDialog::OnFromDateCheckValue(){
	return 0;
} 
/*void CHMSBedApplyDynamicPriceDialog::OnToDateChange(){
	
} */
/*void CHMSBedApplyDynamicPriceDialog::OnToDateSetfocus(){
	
} */
/*void CHMSBedApplyDynamicPriceDialog::OnToDateKillfocus(){
	
} */
int CHMSBedApplyDynamicPriceDialog::OnToDateCheckValue(){
	return 0;
} 
void CHMSBedApplyDynamicPriceDialog::OnLevelOfPriceSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CHMSBedApplyDynamicPriceDialog::OnLevelOfPriceSelendok(){
	 
}
/*void CHMSBedApplyDynamicPriceDialog::OnLevelOfPriceSetfocus(){
	
}*/
/*void CHMSBedApplyDynamicPriceDialog::OnLevelOfPriceKillfocus(){
	
}*/
long CHMSBedApplyDynamicPriceDialog::OnLevelOfPriceLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndLevelOfPrice.IsSearchKey() && !m_szLevelOfPriceKey.IsEmpty()){
	};
	m_wndLevelOfPrice.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndLevelOfPrice.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSBedApplyDynamicPriceDialog::OnLevelOfPriceAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSBedApplyDynamicPriceDialog::OnPriceChange(){
	
} */
/*void CHMSBedApplyDynamicPriceDialog::OnPriceSetfocus(){
	
} */
/*void CHMSBedApplyDynamicPriceDialog::OnPriceKillfocus(){
	
} */
int CHMSBedApplyDynamicPriceDialog::OnPriceCheckValue(){
	return 0;
} 
void CHMSBedApplyDynamicPriceDialog::OnSaveSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CHMSBedApplyDynamicPriceDialog::OnCloseSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CHMSBedApplyDynamicPriceDialog::OnAddHMSBedApplyDynamicPriceDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSBedApplyDynamicPriceDialog::OnEditHMSBedApplyDynamicPriceDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSBedApplyDynamicPriceDialog::OnDeleteHMSBedApplyDynamicPriceDialog(){
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
 		OnCancelHMSBedApplyDynamicPriceDialog(); 
 	}
	return 0;
}
int CHMSBedApplyDynamicPriceDialog::OnSaveHMSBedApplyDynamicPriceDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
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
 //_fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		//OnHMSBedApplyDynamicPriceDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSBedApplyDynamicPriceDialog::OnCancelHMSBedApplyDynamicPriceDialog(){
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
int CHMSBedApplyDynamicPriceDialog::OnHMSBedApplyDynamicPriceDialogListLoadData(){
	return 0;
}
