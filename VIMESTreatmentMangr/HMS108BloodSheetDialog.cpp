#include "HMS108BloodSheetDialog.h"
#include "HMSMainFrame.h"
/*static void _OnGroupNameChangeFnc(CWnd *pWnd){
	((CHMS108BloodOrderSheetDialog *)pWnd)->OnGroupNameChange();
} */
/*static void _OnGroupNameSetfocusFnc(CWnd *pWnd){
	((CHMS108BloodOrderSheetDialog *)pWnd)->OnGroupNameSetfocus();} */ 
/*static void _OnGroupNameKillfocusFnc(CWnd *pWnd){
	((CHMS108BloodOrderSheetDialog *)pWnd)->OnGroupNameKillfocus();
} */
static int _OnContentCheckValueFnc(CWnd *pWnd){
	return ((CHMS108BloodOrderSheetDialog *)pWnd)->OnContentCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMS108BloodOrderSheetDialog *pVw = (CHMS108BloodOrderSheetDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMS108BloodOrderSheetDialog *pVw = (CHMS108BloodOrderSheetDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddCHMS108BloodOrderSheetDialogFnc(CWnd *pWnd){
	 return ((CHMS108BloodOrderSheetDialog*)pWnd)->OnAddCHMS108BloodOrderSheetDialog();
} 
static int _OnEditCHMS108BloodOrderSheetDialogFnc(CWnd *pWnd){
	 return ((CHMS108BloodOrderSheetDialog*)pWnd)->OnEditCHMS108BloodOrderSheetDialog();
} 
static int _OnDeleteCHMS108BloodOrderSheetDialogFnc(CWnd *pWnd){
	 return ((CHMS108BloodOrderSheetDialog*)pWnd)->OnDeleteCHMS108BloodOrderSheetDialog();
} 
static int _OnSaveCHMS108BloodOrderSheetDialogFnc(CWnd *pWnd){
	 return ((CHMS108BloodOrderSheetDialog*)pWnd)->OnSaveCHMS108BloodOrderSheetDialog();
} 
static int _OnCancelCHMS108BloodOrderSheetDialogFnc(CWnd *pWnd){
	 return ((CHMS108BloodOrderSheetDialog*)pWnd)->OnCancelCHMS108BloodOrderSheetDialog();
}
static int _OnOrderDateCheckValueFnc(CWnd *pWnd){
	return ((CHMS108BloodOrderSheetDialog *)pWnd)->OnOrderDateCheckValue();
} 
CHMS108BloodOrderSheetDialog::CHMS108BloodOrderSheetDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 355;
	m_nDlgHeight = 100;
	SetDefaultValues();
}
CHMS108BloodOrderSheetDialog::~CHMS108BloodOrderSheetDialog()
{
}
void CHMS108BloodOrderSheetDialog::OnCreateComponents()
{
	m_wndBloodSheetInformation.Create(this, _T("Thông tin phiếu"), 5, 5, 439, 120);
	m_wndContentLabel.Create(this, _T("Nội dung"), 10, 61, 110, 86);
	m_wndContent.Create(this,115, 61, 439, 86); 
	m_wndSave.Create(this, _T("&Save"), 273, 91, 353, 116);
	m_wndClose.Create(this, _T("&Close"), 358, 91, 438, 116);
	m_wndOrderDateLabel.Create(this, _T("Order Date"), 10, 30, 110, 55);
	m_wndOrderDate.Create(this,115, 30, 240, 55);

}
void CHMS108BloodOrderSheetDialog::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndContent.SetLimitText(128);
	m_wndContent.SetCheckValue(true);	
	m_wndOrderDate.SetCheckValue(true);

}
void CHMS108BloodOrderSheetDialog::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//m_wndContent.SetEvent(WE_CHANGE, _OnGroupNameChangeFnc);
	//m_wndContent.SetEvent(WE_SETFOCUS, _OnGroupNameSetfocusFnc);
	//m_wndContent.SetEvent(WE_KILLFOCUS, _OnGroupNameKillfocusFnc);
	m_wndContent.SetEvent(WE_CHECKVALUE, _OnContentCheckValueFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndOrderDate.SetEvent(WE_CHECKVALUE, _OnOrderDateCheckValueFnc);
	SetMode(GetMode());
	if(GetMode() == VM_EDIT){
		GetDataToScreen();
	}
}
void CHMS108BloodOrderSheetDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndContent.GetDlgCtrlID(), m_szContent);
	DDX_TextEx(pDX, m_wndOrderDate.GetDlgCtrlID(), m_szOrderDate);

}
void CHMS108BloodOrderSheetDialog::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMS108BloodOrderSheetDialog::GetScreenToData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
void CHMS108BloodOrderSheetDialog::SetDefaultValues(){

	m_szContent.Empty();

}
int CHMS108BloodOrderSheetDialog::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiDialog::SetMode(nMode); 
 		CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
  		switch(nMode){ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 1, -1);
			m_szOrderDate = pMF->GetSysDate();
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
/*void CHMS108BloodOrderSheetDialog::OnGroupNameChange(){
	
} */
/*void CHMS108BloodOrderSheetDialog::OnGroupNameSetfocus(){
	
} */
/*void CHMS108BloodOrderSheetDialog::OnGroupNameKillfocus(){
	
} */
int CHMS108BloodOrderSheetDialog::OnContentCheckValue(){
	return 0;
}
int CHMS108BloodOrderSheetDialog::OnOrderDateCheckValue()
{
	UpdateData(true);
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	int n = CompareDate(m_szOrderDate, pMF->GetSysDate());
	if(n < -3 || n > 3)
		return -1;
	return 0;
}
void CHMS108BloodOrderSheetDialog::OnSaveSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnSaveCHMS108BloodOrderSheetDialog();
} 
void CHMS108BloodOrderSheetDialog::OnCloseSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CHMS108BloodOrderSheetDialog::OnAddCHMS108BloodOrderSheetDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMS108BloodOrderSheetDialog::OnEditCHMS108BloodOrderSheetDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMS108BloodOrderSheetDialog::OnDeleteCHMS108BloodOrderSheetDialog(){
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
 		OnCancelCHMS108BloodOrderSheetDialog(); 
 	}
	return 0;
}
int CHMS108BloodOrderSheetDialog::OnSaveCHMS108BloodOrderSheetDialog()
{
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if (GetMode() == VM_ADD)
	{
		
		CRecord rs(&pMF->m_db);
		szSQL.Format(_T("HMS_BLOOD_ORDER_SHEET_CREATE('%s', '%s', '%s', to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss'), '%s') ")
			,m_szContent, pMF->GetCurrentUser(), pMF->GetCurrentUser(), m_szOrderDate, pMF->GetCurrentDepartmentID());	
		m_nOrderID = str2long(pMF->ExecDML(szSQL));

 	} 
 	else if(GetMode() == VM_EDIT)
	{ 
 	} 
 	//int ret = pMF->ExecSQL(szSQL); 
 	if(m_nOrderID > 0) 
 	{ 
		CGuiDialog::OnOK();
 	} 
 	else 
 	{ 
 	} 
 	return m_nOrderID;
	return 0;
}
int CHMS108BloodOrderSheetDialog::OnCancelCHMS108BloodOrderSheetDialog(){
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
int CHMS108BloodOrderSheetDialog::OnCHMS108BloodOrderSheetDialogListLoadData(){
	return 0;
}
