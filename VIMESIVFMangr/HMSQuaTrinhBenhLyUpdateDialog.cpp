#include "HMSQuaTrinhBenhLyUpdateDialog.h"
#include "HMSMainFrame.h"
/*static void _OnBenhLyChangeFnc(CWnd *pWnd){
	((CHMSQuaTrinhBenhLyUpdateDialog *)pWnd)->OnBenhLyChange();
} */
/*static void _OnBenhLySetfocusFnc(CWnd *pWnd){
	((CHMSQuaTrinhBenhLyUpdateDialog *)pWnd)->OnBenhLySetfocus();} */ 
/*static void _OnBenhLyKillfocusFnc(CWnd *pWnd){
	((CHMSQuaTrinhBenhLyUpdateDialog *)pWnd)->OnBenhLyKillfocus();
} */
static int _OnBenhLyCheckValueFnc(CWnd *pWnd){
	return ((CHMSQuaTrinhBenhLyUpdateDialog *)pWnd)->OnBenhLyCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSQuaTrinhBenhLyUpdateDialog *pVw = (CHMSQuaTrinhBenhLyUpdateDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSQuaTrinhBenhLyUpdateDialog *pVw = (CHMSQuaTrinhBenhLyUpdateDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddCHMSQuaTrinhBenhLyUpdateDialogFnc(CWnd *pWnd){
	 return ((CHMSQuaTrinhBenhLyUpdateDialog*)pWnd)->OnAddCHMSQuaTrinhBenhLyUpdateDialog();
} 
static int _OnEditCHMSQuaTrinhBenhLyUpdateDialogFnc(CWnd *pWnd){
	 return ((CHMSQuaTrinhBenhLyUpdateDialog*)pWnd)->OnEditCHMSQuaTrinhBenhLyUpdateDialog();
} 
static int _OnDeleteCHMSQuaTrinhBenhLyUpdateDialogFnc(CWnd *pWnd){
	 return ((CHMSQuaTrinhBenhLyUpdateDialog*)pWnd)->OnDeleteCHMSQuaTrinhBenhLyUpdateDialog();
} 
static int _OnSaveCHMSQuaTrinhBenhLyUpdateDialogFnc(CWnd *pWnd){
	 return ((CHMSQuaTrinhBenhLyUpdateDialog*)pWnd)->OnSaveCHMSQuaTrinhBenhLyUpdateDialog();
} 
static int _OnCancelCHMSQuaTrinhBenhLyUpdateDialogFnc(CWnd *pWnd){
	 return ((CHMSQuaTrinhBenhLyUpdateDialog*)pWnd)->OnCancelCHMSQuaTrinhBenhLyUpdateDialog();
} 
CHMSQuaTrinhBenhLyUpdateDialog::CHMSQuaTrinhBenhLyUpdateDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CHMSQuaTrinhBenhLyUpdateDialog::~CHMSQuaTrinhBenhLyUpdateDialog()
{
}
void CHMSQuaTrinhBenhLyUpdateDialog::OnCreateComponents(){
	m_wndDescGroupBox.Create(this, _T("Desc"), 5, 4, 505, 230);
	m_wndBenhLyLabel.Create(this, _T("BenhLy"), 10, 28, 100, 225);
	m_wndBenhLy.Create(this,102, 27, 505, 224, true, false, true); 
	m_wndSave.Create(this, _T("Save"), 340, 236, 420, 261);
	m_wndCancel.Create(this, _T("Cancel"), 425, 236, 505, 261);
}
void CHMSQuaTrinhBenhLyUpdateDialog::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndBenhLy.SetLimitText(1024);
	m_wndBenhLy.SetCheckValue(true);
	m_wndBenhLy.SetMultiLine(TRUE);


}
void CHMSQuaTrinhBenhLyUpdateDialog::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//m_wndBenhLy.SetEvent(WE_CHANGE, _OnBenhLyChangeFnc);
	//m_wndBenhLy.SetEvent(WE_SETFOCUS, _OnBenhLySetfocusFnc);
	//m_wndBenhLy.SetEvent(WE_KILLFOCUS, _OnBenhLyKillfocusFnc);
	m_wndBenhLy.SetEvent(WE_CHECKVALUE, _OnBenhLyCheckValueFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	GetDataToScreen();
	//SetMode(VM_NONE);

}
void CHMSQuaTrinhBenhLyUpdateDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndBenhLy.GetDlgCtrlID(), m_szBenhLy);

}
void CHMSQuaTrinhBenhLyUpdateDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("BenhLy")] =  m_szBenhLy;
	}
	else
	{
			
	m_jData[_T("BenhLy")].GetValue(m_szBenhLy);
	}

}
void CHMSQuaTrinhBenhLyUpdateDialog::GetDataToScreen()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T(" SELECT LISTAGG( cast(he_medical||' '||he_examine as varchar(2000)),',')  WITHIN GROUP (ORDER BY he_receptidx) as benhly ") \
	_T(" from hms_exam where he_docno=%ld "), m_nDocumentNo);	
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("benhly"),  m_szBenhLy);
			
	}
	SetMode(VM_EDIT);	

}
void CHMSQuaTrinhBenhLyUpdateDialog::GetScreenToData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CHMSQuaTrinhBenhLyUpdateDialog::SetDefaultValues(){

	m_szBenhLy.Empty();

}
int CHMSQuaTrinhBenhLyUpdateDialog::SetMode(int nMode){
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
 			EnableButtons(FALSE, 0, 6, -1);
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
/*void CHMSQuaTrinhBenhLyUpdateDialog::OnBenhLyChange(){
	
} */
/*void CHMSQuaTrinhBenhLyUpdateDialog::OnBenhLySetfocus(){
	
} */
/*void CHMSQuaTrinhBenhLyUpdateDialog::OnBenhLyKillfocus(){
	
} */
int CHMSQuaTrinhBenhLyUpdateDialog::OnBenhLyCheckValue(){
	return 0;
} 
void CHMSQuaTrinhBenhLyUpdateDialog::OnSaveSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnSaveCHMSQuaTrinhBenhLyUpdateDialog();
	 	{
	 		CGuiDialog::OnOK();
	 	}
	
} 
void CHMSQuaTrinhBenhLyUpdateDialog::OnCancelSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnCancel();
	
} 
int CHMSQuaTrinhBenhLyUpdateDialog::OnAddCHMSQuaTrinhBenhLyUpdateDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSQuaTrinhBenhLyUpdateDialog::OnEditCHMSQuaTrinhBenhLyUpdateDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSQuaTrinhBenhLyUpdateDialog::OnDeleteCHMSQuaTrinhBenhLyUpdateDialog(){
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
 		OnCancelCHMSQuaTrinhBenhLyUpdateDialog();
 	}
	return 0;
}
int CHMSQuaTrinhBenhLyUpdateDialog::OnSaveCHMSQuaTrinhBenhLyUpdateDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD)
	{
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
 		//OnCHMSQuaTrinhBenhLyUpdateDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSQuaTrinhBenhLyUpdateDialog::OnCancelCHMSQuaTrinhBenhLyUpdateDialog(){
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
int CHMSQuaTrinhBenhLyUpdateDialog::OnCHMSQuaTrinhBenhLyUpdateDialogListLoadData(){
	return 0;
}
