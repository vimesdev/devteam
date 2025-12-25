#include "GuiInputDataDialog.h"
#include "HMSMainFrame.h"


/*static void _OnValueChangeFnc(CWnd *pWnd){
	((CGuiInputDataDialog *)pWnd)->OnValueChange();
} */
/*static void _OnValueSetfocusFnc(CWnd *pWnd){
	((CGuiInputDataDialog *)pWnd)->OnValueSetfocus();} */ 
/*static void _OnValueKillfocusFnc(CWnd *pWnd){
	((CGuiInputDataDialog *)pWnd)->OnValueKillfocus();
} */
static int _OnNumberValueCheckValueFnc(CWnd *pWnd){
	return ((CGuiInputDataDialog *)pWnd)->OnNumberValueCheckValue();
}

static int _OnTextValueCheckValueFnc(CWnd *pWnd){
	return ((CGuiInputDataDialog *)pWnd)->OnTextValueCheckValue();
}
static void _OnOKSelectFnc(CWnd *pWnd){
	CGuiInputDataDialog *pVw = (CGuiInputDataDialog *)pWnd;
	pVw->OnOKSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CGuiInputDataDialog *pVw = (CGuiInputDataDialog *)pWnd;
	pVw->OnCloseSelect();
} 

CGuiInputDataDialog::CGuiInputDataDialog(CWnd *pParent, bool bNumber):
	CGuiDialog(pParent){

	m_nDlgWidth = 315;
	m_nDlgHeight = 100;
	SetDefaultValues();
	m_bNumberCtrl = bNumber;
	if(bNumber)
		m_nLimit = 10;
	else
		m_nLimit = 254;
	
	if(m_szGroupName.IsEmpty())
		m_szGroupName = _T("Input Data");
	if(m_szValueName.IsEmpty())
		m_szValueName = _T("Value");

	m_nMin = 2.2250738585072014e-308;
	m_nMax = 1.7976931348623158e+308;
}
CGuiInputDataDialog::~CGuiInputDataDialog(){
}
void CGuiInputDataDialog::OnCreateComponents(){
	m_wndInputData.Create(this, m_szGroupName, 5, 5, 305, 60);
	m_wndValueLabel.Create(this, m_szValueName, 10, 30, 110, 55);	
	m_wndTextValue.Create(this,115, 30, 300, 55);
	m_wndOK.Create(this, _T("&OK"), 140, 65, 220, 90);
	m_wndClose.Create(this, _T("&Close"), 225, 65, 305, 90);

}
void CGuiInputDataDialog::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
	m_wndTextValue.SetLimitText(100);
	m_wndTextValue.SetCheckValue(true);
	
}
void CGuiInputDataDialog::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//m_wndTextValue.SetEvent(WE_CHANGE, _OnValueChangeFnc);
	//m_wndTextValue.SetEvent(WE_SETFOCUS, _OnValueSetfocusFnc);
	//m_wndTextValue.SetEvent(WE_KILLFOCUS, _OnValueKillfocusFnc);
	m_wndTextValue.SetEvent(WE_CHECKVALUE, _OnTextValueCheckValueFnc);
	
	m_wndOK.SetEvent(WE_CLICK, _OnOKSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_EDIT);

}
void CGuiInputDataDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndTextValue.GetDlgCtrlID(), m_szTextValue);
}
void CGuiInputDataDialog::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CGuiInputDataDialog::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CGuiInputDataDialog::SetDefaultValues(){

	m_nNumberValue=0;
	m_szTextValue.Empty();

}
int CGuiInputDataDialog::SetMode(int nMode){
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
/*void CGuiInputDataDialog::OnValueChange(){
	
} */
/*void CGuiInputDataDialog::OnValueSetfocus(){
	
} */
/*void CGuiInputDataDialog::OnValueKillfocus(){
	
} */
int CGuiInputDataDialog::OnNumberValueCheckValue(){
	if(m_nNumberValue < m_nMin || m_nNumberValue > m_nMax)
		return -1;

	return 0;
}
int CGuiInputDataDialog::OnTextValueCheckValue(){
	return 0;
}
void CGuiInputDataDialog::OnOKSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	if(!IsValidateData()) 
 		return ; 

	UpdateData(TRUE);
	CGuiDialog::OnOK();
} 
void CGuiInputDataDialog::OnCloseSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 

void CGuiInputDataDialog::SetTextLimit(int nLimit){
	m_nLimit  = nLimit;
}
double CGuiInputDataDialog::GetNumberValue(){
	return m_nNumberValue;
}

CString CGuiInputDataDialog::GetTextValue(){	
	return m_szTextValue;
}