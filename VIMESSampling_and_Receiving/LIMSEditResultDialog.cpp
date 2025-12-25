#include "LIMSEditResultDialog.h"
#include "MainFrm.h"
/*static void _OnResultChangeFnc(CWnd *pWnd){
	((CLIMSEditResultDialog *)pWnd)->OnResultChange();
} */
/*static void _OnResultSetfocusFnc(CWnd *pWnd){
	((CLIMSEditResultDialog *)pWnd)->OnResultSetfocus();} */ 
/*static void _OnResultKillfocusFnc(CWnd *pWnd){
	((CLIMSEditResultDialog *)pWnd)->OnResultKillfocus();
} */
static int _OnResultCheckValueFnc(CWnd *pWnd){
	return ((CLIMSEditResultDialog *)pWnd)->OnResultCheckValue();
}

static int _OnResult2CheckValueFnc(CWnd *pWnd){
	return ((CLIMSEditResultDialog *)pWnd)->OnResult2CheckValue();
}

static int _OnResult2LoadDataFnc(CWnd *pWnd){
	return ((CLIMSEditResultDialog *)pWnd)->OnResult2LoadData();
}

/*static void _OnNoteChangeFnc(CWnd *pWnd){
	((CLIMSEditResultDialog *)pWnd)->OnNoteChange();
} */
/*static void _OnNoteSetfocusFnc(CWnd *pWnd){
	((CLIMSEditResultDialog *)pWnd)->OnNoteSetfocus();} */ 
/*static void _OnNoteKillfocusFnc(CWnd *pWnd){
	((CLIMSEditResultDialog *)pWnd)->OnNoteKillfocus();
} */
static int _OnNoteCheckValueFnc(CWnd *pWnd){
	return ((CLIMSEditResultDialog *)pWnd)->OnNoteCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CLIMSEditResultDialog *pVw = (CLIMSEditResultDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CLIMSEditResultDialog *pVw = (CLIMSEditResultDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddLIMSEditResultDialogFnc(CWnd *pWnd){
	 return ((CLIMSEditResultDialog*)pWnd)->OnAddLIMSEditResultDialog();
} 
static int _OnEditLIMSEditResultDialogFnc(CWnd *pWnd){
	 return ((CLIMSEditResultDialog*)pWnd)->OnEditLIMSEditResultDialog();
} 
static int _OnDeleteLIMSEditResultDialogFnc(CWnd *pWnd){
	 return ((CLIMSEditResultDialog*)pWnd)->OnDeleteLIMSEditResultDialog();
} 
static int _OnSaveLIMSEditResultDialogFnc(CWnd *pWnd){
	 return ((CLIMSEditResultDialog*)pWnd)->OnSaveLIMSEditResultDialog();
} 
static int _OnCancelLIMSEditResultDialogFnc(CWnd *pWnd){
	 return ((CLIMSEditResultDialog*)pWnd)->OnCancelLIMSEditResultDialog();
} 
CLIMSEditResultDialog::CLIMSEditResultDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 260;
	m_nDlgHeight = 130;
	SetDefaultValues();
	m_bIsBloodGroup = false;
}
CLIMSEditResultDialog::~CLIMSEditResultDialog(){
}
void CLIMSEditResultDialog::OnCreateComponents(){
	m_wndEditResult.Create(this, _T("Edit Result"), 1, 6, 416, 91);
	m_wndResultLabel.Create(this, _T("Result"), 10, 30, 90, 55);
	m_wndResult.Create(this,95, 30, 415, 55); 
	m_wndResult2.Create(this,95, 30, 415, 55); 
	m_wndNoteLabel.Create(this, _T("Note"), 10, 60, 90, 85);
	m_wndNote.Create(this,95, 60, 414, 85); 
	m_wndSave.Create(this, _T("&Save"), 251, 96, 331, 121);
	m_wndClose.Create(this, _T("&Close"), 336, 96, 416, 121);
	
}
void CLIMSEditResultDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndResult.SetLimitText(128);
	//m_wndResult.SetCheckValue(true);
	m_wndNote.SetLimitText(128);
//	m_wndNote.SetCheckValue(true);
	m_wndResult2.InsertColumn(0, _T("ID"), DT_CENTER, 50);
	m_wndResult2.InsertColumn(1, _T("Description"), DT_LEFT, 300);

}
void CLIMSEditResultDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndResult.SetEvent(WE_CHANGE, _OnResultChangeFnc);
	//m_wndResult.SetEvent(WE_SETFOCUS, _OnResultSetfocusFnc);
	//m_wndResult.SetEvent(WE_KILLFOCUS, _OnResultKillfocusFnc);
	m_wndResult.SetEvent(WE_CHECKVALUE, _OnResultCheckValueFnc);
	m_wndResult2.SetEvent(WE_CHECKVALUE, _OnResult2CheckValueFnc);
	m_wndResult2.SetEvent(WE_LOADDATA, _OnResult2LoadDataFnc);
	//m_wndNote.SetEvent(WE_CHANGE, _OnNoteChangeFnc);
	//m_wndNote.SetEvent(WE_SETFOCUS, _OnNoteSetfocusFnc);
	//m_wndNote.SetEvent(WE_KILLFOCUS, _OnNoteKillfocusFnc);
	m_wndNote.SetEvent(WE_CHECKVALUE, _OnNoteCheckValueFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	
	SetMode(VM_EDIT);

}
void CLIMSEditResultDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndResult.GetDlgCtrlID(), m_szResult);
	DDX_TextEx(pDX, m_wndResult2.GetDlgCtrlID(), m_szResult2Key);
	DDX_Text(pDX, m_wndNote.GetDlgCtrlID(), m_szNote);

}
void CLIMSEditResultDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CLIMSEditResultDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(m_bIsBloodGroup)
	{
		m_szResult = m_wndResult2.GetCurrent(1);
		UpdateData(false);		
	}
}
void CLIMSEditResultDialog::SetDefaultValues(){

	m_szResult.Empty();
	m_szNote.Empty();
	m_szResult2Key.Empty();

}
int CLIMSEditResultDialog::SetMode(int nMode){
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

		if(m_bIsBloodGroup)
		{
			m_wndResult.ShowWindow(SW_HIDE);
			m_wndResult2.ShowWindow(SW_SHOW);
			m_wndResult2.SetCheckValue(true);

		}
		else
		{
			m_wndResult2.ShowWindow(SW_HIDE);
			m_wndResult2.SetCheckValue(false);
		}
 		UpdateData(FALSE); 
 		return nOldMode; 
}
/*void CLIMSEditResultDialog::OnResultChange(){
	
} */
/*void CLIMSEditResultDialog::OnResultSetfocus(){
	
} */
/*void CLIMSEditResultDialog::OnResultKillfocus(){
	
} */
int CLIMSEditResultDialog::OnResultCheckValue(){
	return 0;
} 


int CLIMSEditResultDialog::OnResult2CheckValue(){
	return 0;
}

int CLIMSEditResultDialog::OnResult2LoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return pMF->LoadSelectionList(&m_wndResult2, _T("blood_result_type"),  m_szResult2Key);
	return 0;
} 



/*void CLIMSEditResultDialog::OnNoteChange(){
	
} */
/*void CLIMSEditResultDialog::OnNoteSetfocus(){
	
} */
/*void CLIMSEditResultDialog::OnNoteKillfocus(){
	
} */
int CLIMSEditResultDialog::OnNoteCheckValue(){
	return 0;
} 
void CLIMSEditResultDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveLIMSEditResultDialog();
} 
void CLIMSEditResultDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CLIMSEditResultDialog::OnAddLIMSEditResultDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CLIMSEditResultDialog::OnEditLIMSEditResultDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CLIMSEditResultDialog::OnDeleteLIMSEditResultDialog(){
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
 		OnCancelLIMSEditResultDialog(); 
 	}
	return 0;
}
int CLIMSEditResultDialog::OnSaveLIMSEditResultDialog(){
 	if(GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
	
	
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
	if(m_szDeptType == _T("E"))
	{
		szSQL.Format(_T("UPDATE hms_testorderline SET hpcl_result='%s', hpcl_note='%s' WHERE hpcl_orderid=%ld and hpcl_itemid='%s' "), 
			m_szResult, m_szNote, m_nOrderID, m_szItemID);
	}
	else
	{
		szSQL.Format(_T("UPDATE hms_testorderline SET hpcl_result='%s', hpcl_note='%s' WHERE hpcl_orderid=%ld and hpcl_itemid='%s' "), 
			m_szResult, m_szNote, m_nOrderID, m_szItemID);

	}
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
		szSQL.Format(_T("UPDATE lims_order_line ") \
				_T("SET limsol_result='%s', limsol_note='%s' ") \
				_T("WHERE limsol_orderid=%ld and limsol_itemid='%s' "), 
					m_szResult, m_szNote, m_nOrderID, m_szItemID);
			_tprintf(_T("\r\n%s"), szSQL);
			pMF->ExecSQL(szSQL);

		CGuiDialog::OnOK();
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
}
int CLIMSEditResultDialog::OnCancelLIMSEditResultDialog(){
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
int CLIMSEditResultDialog::OnLIMSEditResultDialogListLoadData(){
	return 0;
}
