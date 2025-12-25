#include "TransplantDialog.h"
#include "MainFrm.h"
static void _OnIsTransplantObjectSelectFnc(CWnd *pWnd){
	 ((CTransplantDialog*)pWnd)->OnIsTransplantObjectSelect();
}
static void _OnOKSelectFnc(CWnd *pWnd){
	CTransplantDialog *pVw = (CTransplantDialog *)pWnd;
	pVw->OnOKSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CTransplantDialog *pVw = (CTransplantDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddTransplantDialogFnc(CWnd *pWnd){
	 return ((CTransplantDialog*)pWnd)->OnAddTransplantDialog();
} 
static int _OnEditTransplantDialogFnc(CWnd *pWnd){
	 return ((CTransplantDialog*)pWnd)->OnEditTransplantDialog();
} 
static int _OnDeleteTransplantDialogFnc(CWnd *pWnd){
	 return ((CTransplantDialog*)pWnd)->OnDeleteTransplantDialog();
} 
static int _OnSaveTransplantDialogFnc(CWnd *pWnd){
	 return ((CTransplantDialog*)pWnd)->OnSaveTransplantDialog();
} 
static int _OnCancelTransplantDialogFnc(CWnd *pWnd){
	 return ((CTransplantDialog*)pWnd)->OnCancelTransplantDialog();
} 
CTransplantDialog::CTransplantDialog(CWnd *pParent, long nDocumentNo):
	CGuiDialog(pParent), m_nDocumentNo(nDocumentNo){

	m_nDlgWidth = 255;
	m_nDlgHeight = 105;
	SetDefaultValues();
}
CTransplantDialog::~CTransplantDialog(){
}
void CTransplantDialog::OnCreateComponents(){
	m_wndObject.Create(this, _T("Object"), 4, 6, 224, 71);
	m_wndIsTransplantObject.Create(this, _T("Is transplant object"), 10, 35, 220, 60);
	m_wndOK.Create(this, _T("OK"), 60, 76, 140, 101);
	m_wndCancel.Create(this, _T("&Cancel"), 145, 76, 225, 101);

}
void CTransplantDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CTransplantDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndIsTransplantObject.SetEvent(WE_CLICK, _OnIsTransplantObjectSelectFnc);
	m_wndOK.SetEvent(WE_CLICK, _OnOKSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	GetDataToScreen();
	SetMode(VM_EDIT);

}
void CTransplantDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Check(pDX, m_wndIsTransplantObject.GetDlgCtrlID(), m_bIsTransplantObject);

}
void CTransplantDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr;
	szSQL.Format(_T("SELECT hd_istransplant FROM hms_doc WHERE hd_docno = %ld"), m_nDocumentNo);
	rs.ExecSQL(szSQL);
	m_bIsTransplantObject = false;
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("hd_istransplant"), tmpStr);
		if(tmpStr == _T("Y"))
		{
			m_bIsTransplantObject = true;
		}
	}

}
void CTransplantDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CTransplantDialog::SetDefaultValues(){

	m_bIsTransplantObject=FALSE;

}
int CTransplantDialog::SetMode(int nMode){
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
 		UpdateData(FALSE);
 		return nOldMode;
}
	void CTransplantDialog::OnIsTransplantObjectSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void CTransplantDialog::OnOKSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL, tmpStr;
	UpdateData(TRUE);
	if(m_bIsTransplantObject)
	{
		tmpStr = _T("Y");
	}
	else
	{
		tmpStr == _T("N");
	}
	szSQL.Format(_T("UPDATE hms_doc SET hd_istransplant ='%s' WHERE hd_docno = %ld"), tmpStr, m_nDocumentNo);
	pMF->ExecSQL(szSQL);
	
	CString szEvent, szDesc;
	szEvent.Format(_T("S\x1EED\x61 \x111\x1ED1i t\x1B0\x1EE3ng gh\xE9p t\x1EA1ng"));
	szDesc.Format(_T("S\x1ED1 h\x1ED3 s\x1A1 [%l\x64]->[%s]"), m_nDocumentNo, tmpStr);
	pMF->SystemLog(szEvent, szDesc);

	CGuiDialog::OnOK();
} 
void CTransplantDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CTransplantDialog::OnAddTransplantDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CTransplantDialog::OnEditTransplantDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CTransplantDialog::OnDeleteTransplantDialog(){
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
 		OnCancelTransplantDialog();
 	}
	return 0;
}
int CTransplantDialog::OnSaveTransplantDialog(){
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
 		//OnTransplantDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CTransplantDialog::OnCancelTransplantDialog(){
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
int CTransplantDialog::OnTransplantDialogListLoadData(){
	return 0;
}
