#include "RPM_DailyShiftEdition.h"
#include "MainFrm.h"
/*static void _OnDeptChangeFnc(CWnd *pWnd){
	((CRPM_DailyShiftEdition *)pWnd)->OnDeptChange();
} */
/*static void _OnDeptSetfocusFnc(CWnd *pWnd){
	((CRPM_DailyShiftEdition *)pWnd)->OnDeptSetfocus();} */ 
/*static void _OnDeptKillfocusFnc(CWnd *pWnd){
	((CRPM_DailyShiftEdition *)pWnd)->OnDeptKillfocus();
} */
static int _OnDeptCheckValueFnc(CWnd *pWnd){
	return ((CRPM_DailyShiftEdition *)pWnd)->OnDeptCheckValue();
} 
/*static void _OnDutyDoctorChangeFnc(CWnd *pWnd){
	((CRPM_DailyShiftEdition *)pWnd)->OnDutyDoctorChange();
} */
/*static void _OnDutyDoctorSetfocusFnc(CWnd *pWnd){
	((CRPM_DailyShiftEdition *)pWnd)->OnDutyDoctorSetfocus();} */ 
/*static void _OnDutyDoctorKillfocusFnc(CWnd *pWnd){
	((CRPM_DailyShiftEdition *)pWnd)->OnDutyDoctorKillfocus();
} */
static int _OnDutyDoctorCheckValueFnc(CWnd *pWnd){
	return ((CRPM_DailyShiftEdition *)pWnd)->OnDutyDoctorCheckValue();
} 
/*static void _OnPreviousQtyChangeFnc(CWnd *pWnd){
	((CRPM_DailyShiftEdition *)pWnd)->OnPreviousQtyChange();
} */
/*static void _OnPreviousQtySetfocusFnc(CWnd *pWnd){
	((CRPM_DailyShiftEdition *)pWnd)->OnPreviousQtySetfocus();} */ 
/*static void _OnPreviousQtyKillfocusFnc(CWnd *pWnd){
	((CRPM_DailyShiftEdition *)pWnd)->OnPreviousQtyKillfocus();
} */
static int _OnPreviousQtyCheckValueFnc(CWnd *pWnd){
	return ((CRPM_DailyShiftEdition *)pWnd)->OnPreviousQtyCheckValue();
} 
/*static void _OnOvertimeIncChangeFnc(CWnd *pWnd){
	((CRPM_DailyShiftEdition *)pWnd)->OnOvertimeIncChange();
} */
/*static void _OnOvertimeIncSetfocusFnc(CWnd *pWnd){
	((CRPM_DailyShiftEdition *)pWnd)->OnOvertimeIncSetfocus();} */ 
/*static void _OnOvertimeIncKillfocusFnc(CWnd *pWnd){
	((CRPM_DailyShiftEdition *)pWnd)->OnOvertimeIncKillfocus();
} */
static int _OnOvertimeIncCheckValueFnc(CWnd *pWnd){
	return ((CRPM_DailyShiftEdition *)pWnd)->OnOvertimeIncCheckValue();
} 
/*static void _OnOvertimeDecChangeFnc(CWnd *pWnd){
	((CRPM_DailyShiftEdition *)pWnd)->OnOvertimeDecChange();
} */
/*static void _OnOvertimeDecSetfocusFnc(CWnd *pWnd){
	((CRPM_DailyShiftEdition *)pWnd)->OnOvertimeDecSetfocus();} */ 
/*static void _OnOvertimeDecKillfocusFnc(CWnd *pWnd){
	((CRPM_DailyShiftEdition *)pWnd)->OnOvertimeDecKillfocus();
} */
static int _OnOvertimeDecCheckValueFnc(CWnd *pWnd){
	return ((CRPM_DailyShiftEdition *)pWnd)->OnOvertimeDecCheckValue();
} 
/*static void _OnCurrentQtyChangeFnc(CWnd *pWnd){
	((CRPM_DailyShiftEdition *)pWnd)->OnCurrentQtyChange();
} */
/*static void _OnCurrentQtySetfocusFnc(CWnd *pWnd){
	((CRPM_DailyShiftEdition *)pWnd)->OnCurrentQtySetfocus();} */ 
/*static void _OnCurrentQtyKillfocusFnc(CWnd *pWnd){
	((CRPM_DailyShiftEdition *)pWnd)->OnCurrentQtyKillfocus();
} */
static int _OnCurrentQtyCheckValueFnc(CWnd *pWnd){
	return ((CRPM_DailyShiftEdition *)pWnd)->OnCurrentQtyCheckValue();
} 
/*static void _OnIntimeOptChangeFnc(CWnd *pWnd){
	((CRPM_DailyShiftEdition *)pWnd)->OnIntimeOptChange();
} */
/*static void _OnIntimeOptSetfocusFnc(CWnd *pWnd){
	((CRPM_DailyShiftEdition *)pWnd)->OnIntimeOptSetfocus();} */ 
/*static void _OnIntimeOptKillfocusFnc(CWnd *pWnd){
	((CRPM_DailyShiftEdition *)pWnd)->OnIntimeOptKillfocus();
} */
static int _OnIntimeOptCheckValueFnc(CWnd *pWnd){
	return ((CRPM_DailyShiftEdition *)pWnd)->OnIntimeOptCheckValue();
} 
/*static void _OnOvertimeOptChangeFnc(CWnd *pWnd){
	((CRPM_DailyShiftEdition *)pWnd)->OnOvertimeOptChange();
} */
/*static void _OnOvertimeOptSetfocusFnc(CWnd *pWnd){
	((CRPM_DailyShiftEdition *)pWnd)->OnOvertimeOptSetfocus();} */ 
/*static void _OnOvertimeOptKillfocusFnc(CWnd *pWnd){
	((CRPM_DailyShiftEdition *)pWnd)->OnOvertimeOptKillfocus();
} */
static int _OnOvertimeOptCheckValueFnc(CWnd *pWnd){
	return ((CRPM_DailyShiftEdition *)pWnd)->OnOvertimeOptCheckValue();
} 
/*static void _OnTotalOptChangeFnc(CWnd *pWnd){
	((CRPM_DailyShiftEdition *)pWnd)->OnTotalOptChange();
} */
/*static void _OnTotalOptSetfocusFnc(CWnd *pWnd){
	((CRPM_DailyShiftEdition *)pWnd)->OnTotalOptSetfocus();} */ 
/*static void _OnTotalOptKillfocusFnc(CWnd *pWnd){
	((CRPM_DailyShiftEdition *)pWnd)->OnTotalOptKillfocus();
} */
static int _OnTotalOptCheckValueFnc(CWnd *pWnd){
	return ((CRPM_DailyShiftEdition *)pWnd)->OnTotalOptCheckValue();
} 
/*static void _OnNoteChangeFnc(CWnd *pWnd){
	((CRPM_DailyShiftEdition *)pWnd)->OnNoteChange();
} */
/*static void _OnNoteSetfocusFnc(CWnd *pWnd){
	((CRPM_DailyShiftEdition *)pWnd)->OnNoteSetfocus();} */ 
/*static void _OnNoteKillfocusFnc(CWnd *pWnd){
	((CRPM_DailyShiftEdition *)pWnd)->OnNoteKillfocus();
} */
static int _OnNoteCheckValueFnc(CWnd *pWnd){
	return ((CRPM_DailyShiftEdition *)pWnd)->OnNoteCheckValue();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CRPM_DailyShiftEdition *pVw = (CRPM_DailyShiftEdition *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CRPM_DailyShiftEdition *pVw = (CRPM_DailyShiftEdition *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CRPM_DailyShiftEdition *pVw = (CRPM_DailyShiftEdition *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddRPM_DailyShiftEditionFnc(CWnd *pWnd){
	 return ((CRPM_DailyShiftEdition*)pWnd)->OnAddRPM_DailyShiftEdition();
} 
static int _OnEditRPM_DailyShiftEditionFnc(CWnd *pWnd){
	 return ((CRPM_DailyShiftEdition*)pWnd)->OnEditRPM_DailyShiftEdition();
} 
static int _OnDeleteRPM_DailyShiftEditionFnc(CWnd *pWnd){
	 return ((CRPM_DailyShiftEdition*)pWnd)->OnDeleteRPM_DailyShiftEdition();
} 
static int _OnSaveRPM_DailyShiftEditionFnc(CWnd *pWnd){
	 return ((CRPM_DailyShiftEdition*)pWnd)->OnSaveRPM_DailyShiftEdition();
} 
static int _OnCancelRPM_DailyShiftEditionFnc(CWnd *pWnd){
	 return ((CRPM_DailyShiftEdition*)pWnd)->OnCancelRPM_DailyShiftEdition();
} 
CRPM_DailyShiftEdition::CRPM_DailyShiftEdition(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CRPM_DailyShiftEdition::~CRPM_DailyShiftEdition(){
}
void CRPM_DailyShiftEdition::OnCreateComponents(){
	m_wndDataEdition.Create(this, _T("Data Edition"), 5, 5, 520, 150);
	m_wndDeptLabel.Create(this, _T("Dept"), 10, 30, 90, 55);
	m_wndDept.Create(this,95, 30, 175, 55); 
	m_wndDutyDoctorLabel.Create(this, _T("Duty Doctor"), 180, 30, 260, 55);
	m_wndDutyDoctor.Create(this,265, 30, 515, 55); 
	m_wndPreviousQtyLabel.Create(this, _T("Previous Qty"), 10, 60, 90, 85);
	m_wndPreviousQty.Create(this,95, 60, 175, 85); 
	m_wndOvertimeIncLabel.Create(this, _T("Overtime Inc"), 180, 60, 260, 85);
	m_wndOvertimeInc.Create(this,265, 60, 345, 85); 
	m_wndOvertimeDecLabel.Create(this, _T("Overtime Dec"), 350, 60, 430, 85);
	m_wndOvertimeDec.Create(this,435, 60, 515, 85); 
	m_wndCurrentQtyLabel.Create(this, _T("Current Qty"), 10, 90, 90, 115);
	m_wndCurrentQty.Create(this,95, 90, 175, 115); 
	m_wndIntimeOptLabel.Create(this, _T("Intime Opt"), 180, 90, 260, 115);
	m_wndIntimeOpt.Create(this,265, 90, 345, 115); 
	m_wndOvertimeOptLabel.Create(this, _T("Overtime Opt"), 350, 90, 430, 115);
	m_wndOvertimeOpt.Create(this,435, 90, 515, 115); 
	m_wndTotalOptLabel.Create(this, _T("Total Opt"), 10, 120, 90, 145);
	m_wndTotalOpt.Create(this,95, 120, 175, 145); 
	m_wndNoteLabel.Create(this, _T("Note"), 180, 120, 260, 145);
	m_wndNote.Create(this,265, 120, 515, 145); 
	m_wndEdit.Create(this, _T("&Edit"), 269, 155, 349, 180);
	m_wndSave.Create(this, _T("&Save"), 355, 155, 435, 180);
	m_wndCancel.Create(this, _T("&Cancel"), 440, 155, 520, 180);

}
void CRPM_DailyShiftEdition::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndDept.SetLimitText(35);
	m_wndDept.SetCheckValue(true);
	m_wndDutyDoctor.SetLimitText(35);
	m_wndDutyDoctor.SetCheckValue(true);
	m_wndPreviousQty.SetLimitText(16);
	m_wndPreviousQty.SetCheckValue(true);
	m_wndOvertimeInc.SetLimitText(16);
	m_wndOvertimeInc.SetCheckValue(true);
	m_wndOvertimeDec.SetLimitText(16);
	m_wndOvertimeDec.SetCheckValue(true);
	m_wndCurrentQty.SetLimitText(16);
	m_wndCurrentQty.SetCheckValue(true);
	m_wndIntimeOpt.SetLimitText(16);
	m_wndIntimeOpt.SetCheckValue(true);
	m_wndOvertimeOpt.SetLimitText(16);
	m_wndOvertimeOpt.SetCheckValue(true);
	m_wndTotalOpt.SetLimitText(16);
	m_wndTotalOpt.SetCheckValue(true);
	m_wndNote.SetLimitText(35);
	//m_wndNote.SetCheckValue(true);

}
void CRPM_DailyShiftEdition::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndDept.SetEvent(WE_CHANGE, _OnDeptChangeFnc);
	//m_wndDept.SetEvent(WE_SETFOCUS, _OnDeptSetfocusFnc);
	//m_wndDept.SetEvent(WE_KILLFOCUS, _OnDeptKillfocusFnc);
	m_wndDept.SetEvent(WE_CHECKVALUE, _OnDeptCheckValueFnc);
	//m_wndDutyDoctor.SetEvent(WE_CHANGE, _OnDutyDoctorChangeFnc);
	//m_wndDutyDoctor.SetEvent(WE_SETFOCUS, _OnDutyDoctorSetfocusFnc);
	//m_wndDutyDoctor.SetEvent(WE_KILLFOCUS, _OnDutyDoctorKillfocusFnc);
	m_wndDutyDoctor.SetEvent(WE_CHECKVALUE, _OnDutyDoctorCheckValueFnc);
	//m_wndPreviousQty.SetEvent(WE_CHANGE, _OnPreviousQtyChangeFnc);
	//m_wndPreviousQty.SetEvent(WE_SETFOCUS, _OnPreviousQtySetfocusFnc);
	//m_wndPreviousQty.SetEvent(WE_KILLFOCUS, _OnPreviousQtyKillfocusFnc);
	m_wndPreviousQty.SetEvent(WE_CHECKVALUE, _OnPreviousQtyCheckValueFnc);
	//m_wndOvertimeInc.SetEvent(WE_CHANGE, _OnOvertimeIncChangeFnc);
	//m_wndOvertimeInc.SetEvent(WE_SETFOCUS, _OnOvertimeIncSetfocusFnc);
	//m_wndOvertimeInc.SetEvent(WE_KILLFOCUS, _OnOvertimeIncKillfocusFnc);
	m_wndOvertimeInc.SetEvent(WE_CHECKVALUE, _OnOvertimeIncCheckValueFnc);
	//m_wndOvertimeDec.SetEvent(WE_CHANGE, _OnOvertimeDecChangeFnc);
	//m_wndOvertimeDec.SetEvent(WE_SETFOCUS, _OnOvertimeDecSetfocusFnc);
	//m_wndOvertimeDec.SetEvent(WE_KILLFOCUS, _OnOvertimeDecKillfocusFnc);
	m_wndOvertimeDec.SetEvent(WE_CHECKVALUE, _OnOvertimeDecCheckValueFnc);
	//m_wndCurrentQty.SetEvent(WE_CHANGE, _OnCurrentQtyChangeFnc);
	//m_wndCurrentQty.SetEvent(WE_SETFOCUS, _OnCurrentQtySetfocusFnc);
	//m_wndCurrentQty.SetEvent(WE_KILLFOCUS, _OnCurrentQtyKillfocusFnc);
	m_wndCurrentQty.SetEvent(WE_CHECKVALUE, _OnCurrentQtyCheckValueFnc);
	//m_wndIntimeOpt.SetEvent(WE_CHANGE, _OnIntimeOptChangeFnc);
	//m_wndIntimeOpt.SetEvent(WE_SETFOCUS, _OnIntimeOptSetfocusFnc);
	//m_wndIntimeOpt.SetEvent(WE_KILLFOCUS, _OnIntimeOptKillfocusFnc);
	m_wndIntimeOpt.SetEvent(WE_CHECKVALUE, _OnIntimeOptCheckValueFnc);
	//m_wndOvertimeOpt.SetEvent(WE_CHANGE, _OnOvertimeOptChangeFnc);
	//m_wndOvertimeOpt.SetEvent(WE_SETFOCUS, _OnOvertimeOptSetfocusFnc);
	//m_wndOvertimeOpt.SetEvent(WE_KILLFOCUS, _OnOvertimeOptKillfocusFnc);
	m_wndOvertimeOpt.SetEvent(WE_CHECKVALUE, _OnOvertimeOptCheckValueFnc);
	//m_wndTotalOpt.SetEvent(WE_CHANGE, _OnTotalOptChangeFnc);
	//m_wndTotalOpt.SetEvent(WE_SETFOCUS, _OnTotalOptSetfocusFnc);
	//m_wndTotalOpt.SetEvent(WE_KILLFOCUS, _OnTotalOptKillfocusFnc);
	m_wndTotalOpt.SetEvent(WE_CHECKVALUE, _OnTotalOptCheckValueFnc);
	//m_wndNote.SetEvent(WE_CHANGE, _OnNoteChangeFnc);
	//m_wndNote.SetEvent(WE_SETFOCUS, _OnNoteSetfocusFnc);
	//m_wndNote.SetEvent(WE_KILLFOCUS, _OnNoteKillfocusFnc);
	m_wndNote.SetEvent(WE_CHECKVALUE, _OnNoteCheckValueFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	SetMode(VM_VIEW);

}
void CRPM_DailyShiftEdition::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndDept.GetDlgCtrlID(), m_szDept);
	DDX_Text(pDX, m_wndDutyDoctor.GetDlgCtrlID(), m_szDutyDoctor);
	DDX_Text(pDX, m_wndPreviousQty.GetDlgCtrlID(), m_nPreviousQty);
	DDX_Text(pDX, m_wndOvertimeInc.GetDlgCtrlID(), m_nOvertimeInc);
	DDX_Text(pDX, m_wndOvertimeDec.GetDlgCtrlID(), m_nOvertimeDec);
	DDX_Text(pDX, m_wndCurrentQty.GetDlgCtrlID(), m_nCurrentQty);
	DDX_Text(pDX, m_wndIntimeOpt.GetDlgCtrlID(), m_nIntimeOpt);
	DDX_Text(pDX, m_wndOvertimeOpt.GetDlgCtrlID(), m_nOvertimeOpt);
	DDX_Text(pDX, m_wndTotalOpt.GetDlgCtrlID(), m_nTotalOpt);
	DDX_Text(pDX, m_wndNote.GetDlgCtrlID(), m_szNote);

}
void CRPM_DailyShiftEdition::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CRPM_DailyShiftEdition::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CRPM_DailyShiftEdition::SetDefaultValues(){

	m_szDept.Empty();
	m_szDutyDoctor.Empty();
	m_nPreviousQty=0;
	m_nOvertimeInc=0;
	m_nOvertimeDec=0;
	m_nCurrentQty=0;
	m_nIntimeOpt=0;
	m_nOvertimeOpt=0;
	m_nTotalOpt=0;
	m_szNote.Empty();

}
int CRPM_DailyShiftEdition::SetMode(int nMode){
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
 			EnableButtons(TRUE, 1, 2, -1);
 			break;
 		case VM_VIEW: 
 			EnableControls(FALSE);
 			EnableButtons(FALSE, 1, 2, -1);
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
/*void CRPM_DailyShiftEdition::OnDeptChange(){
	
} */
/*void CRPM_DailyShiftEdition::OnDeptSetfocus(){
	
} */
/*void CRPM_DailyShiftEdition::OnDeptKillfocus(){
	
} */
int CRPM_DailyShiftEdition::OnDeptCheckValue(){
	return 0;
} 
/*void CRPM_DailyShiftEdition::OnDutyDoctorChange(){
	
} */
/*void CRPM_DailyShiftEdition::OnDutyDoctorSetfocus(){
	
} */
/*void CRPM_DailyShiftEdition::OnDutyDoctorKillfocus(){
	
} */
int CRPM_DailyShiftEdition::OnDutyDoctorCheckValue(){
	return 0;
} 
/*void CRPM_DailyShiftEdition::OnPreviousQtyChange(){
	
} */
/*void CRPM_DailyShiftEdition::OnPreviousQtySetfocus(){
	
} */
/*void CRPM_DailyShiftEdition::OnPreviousQtyKillfocus(){
	
} */
int CRPM_DailyShiftEdition::OnPreviousQtyCheckValue(){
	return 0;
} 
/*void CRPM_DailyShiftEdition::OnOvertimeIncChange(){
	
} */
/*void CRPM_DailyShiftEdition::OnOvertimeIncSetfocus(){
	
} */
/*void CRPM_DailyShiftEdition::OnOvertimeIncKillfocus(){
	
} */
int CRPM_DailyShiftEdition::OnOvertimeIncCheckValue(){
	return 0;
} 
/*void CRPM_DailyShiftEdition::OnOvertimeDecChange(){
	
} */
/*void CRPM_DailyShiftEdition::OnOvertimeDecSetfocus(){
	
} */
/*void CRPM_DailyShiftEdition::OnOvertimeDecKillfocus(){
	
} */
int CRPM_DailyShiftEdition::OnOvertimeDecCheckValue(){
	return 0;
} 
/*void CRPM_DailyShiftEdition::OnCurrentQtyChange(){
	
} */
/*void CRPM_DailyShiftEdition::OnCurrentQtySetfocus(){
	
} */
/*void CRPM_DailyShiftEdition::OnCurrentQtyKillfocus(){
	
} */
int CRPM_DailyShiftEdition::OnCurrentQtyCheckValue(){
	return 0;
} 
/*void CRPM_DailyShiftEdition::OnIntimeOptChange(){
	
} */
/*void CRPM_DailyShiftEdition::OnIntimeOptSetfocus(){
	
} */
/*void CRPM_DailyShiftEdition::OnIntimeOptKillfocus(){
	
} */
int CRPM_DailyShiftEdition::OnIntimeOptCheckValue(){
	return 0;
} 
/*void CRPM_DailyShiftEdition::OnOvertimeOptChange(){
	
} */
/*void CRPM_DailyShiftEdition::OnOvertimeOptSetfocus(){
	
} */
/*void CRPM_DailyShiftEdition::OnOvertimeOptKillfocus(){
	
} */
int CRPM_DailyShiftEdition::OnOvertimeOptCheckValue(){
	return 0;
} 
/*void CRPM_DailyShiftEdition::OnTotalOptChange(){
	
} */
/*void CRPM_DailyShiftEdition::OnTotalOptSetfocus(){
	
} */
/*void CRPM_DailyShiftEdition::OnTotalOptKillfocus(){
	
} */
int CRPM_DailyShiftEdition::OnTotalOptCheckValue(){
	return 0;
} 
/*void CRPM_DailyShiftEdition::OnNoteChange(){
	
} */
/*void CRPM_DailyShiftEdition::OnNoteSetfocus(){
	
} */
/*void CRPM_DailyShiftEdition::OnNoteKillfocus(){
	
} */
int CRPM_DailyShiftEdition::OnNoteCheckValue(){
	return 0;
} 
void CRPM_DailyShiftEdition::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	SetMode(VM_EDIT);
} 
void CRPM_DailyShiftEdition::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if (!IsValidateData())
		return;
	CGuiDialog::OnOK();
	
} 

void CRPM_DailyShiftEdition::OnCancelSelect(){
	SetMode(VM_VIEW);
}
int CRPM_DailyShiftEdition::OnAddRPM_DailyShiftEdition(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CRPM_DailyShiftEdition::OnEditRPM_DailyShiftEdition(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CRPM_DailyShiftEdition::OnDeleteRPM_DailyShiftEdition(){
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
 		OnCancelRPM_DailyShiftEdition();
 	}
	return 0;
}
int CRPM_DailyShiftEdition::OnSaveRPM_DailyShiftEdition(){
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
 		//OnRPM_DailyShiftEditionListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CRPM_DailyShiftEdition::OnCancelRPM_DailyShiftEdition(){
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
int CRPM_DailyShiftEdition::OnRPM_DailyShiftEditionListLoadData(){
	return 0;
}
