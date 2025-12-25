#include "HeathExamDialog.h"
#include "MainFrm.h"
/*static void _OnInsertionPageChangeFnc(CWnd *pWnd){
	((CHeathExamDialog *)pWnd)->OnInsertionPageChange();
} */
/*static void _OnInsertionPageSetfocusFnc(CWnd *pWnd){
	((CHeathExamDialog *)pWnd)->OnInsertionPageSetfocus();} */ 
/*static void _OnInsertionPageKillfocusFnc(CWnd *pWnd){
	((CHeathExamDialog *)pWnd)->OnInsertionPageKillfocus();
} */
static int _OnInsertionPageCheckValueFnc(CWnd *pWnd){
	return ((CHeathExamDialog *)pWnd)->OnInsertionPageCheckValue();
} 
static void _OnExamTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHeathExamDialog* )pWnd)->OnExamTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnExamTypeSelendokFnc(CWnd *pWnd){
	((CHeathExamDialog *)pWnd)->OnExamTypeSelendok();
}
/*static void _OnExamTypeSetfocusFnc(CWnd *pWnd){
	((CHeathExamDialog *)pWnd)->OnExamTypeKillfocus();
}*/
/*static void _OnExamTypeKillfocusFnc(CWnd *pWnd){
	((CHeathExamDialog *)pWnd)->OnExamTypeKillfocus();
}*/
static long _OnExamTypeLoadDataFnc(CWnd *pWnd){
	return ((CHeathExamDialog *)pWnd)->OnExamTypeLoadData();
}
/*static void _OnExamTypeAddNewFnc(CWnd *pWnd){
	((CHeathExamDialog *)pWnd)->OnExamTypeAddNew();
}*/
static void _OnRankSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHeathExamDialog* )pWnd)->OnRankSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnRankSelendokFnc(CWnd *pWnd){
	((CHeathExamDialog *)pWnd)->OnRankSelendok();
}
/*static void _OnRankSetfocusFnc(CWnd *pWnd){
	((CHeathExamDialog *)pWnd)->OnRankKillfocus();
}*/
/*static void _OnRankKillfocusFnc(CWnd *pWnd){
	((CHeathExamDialog *)pWnd)->OnRankKillfocus();
}*/
static long _OnRankLoadDataFnc(CWnd *pWnd){
	return ((CHeathExamDialog *)pWnd)->OnRankLoadData();
}
/*static void _OnRankAddNewFnc(CWnd *pWnd){
	((CHeathExamDialog *)pWnd)->OnRankAddNew();
}*/
/*static void _OnNoteChangeFnc(CWnd *pWnd){
	((CHeathExamDialog *)pWnd)->OnNoteChange();
} */
/*static void _OnNoteSetfocusFnc(CWnd *pWnd){
	((CHeathExamDialog *)pWnd)->OnNoteSetfocus();} */ 
/*static void _OnNoteKillfocusFnc(CWnd *pWnd){
	((CHeathExamDialog *)pWnd)->OnNoteKillfocus();
} */
static int _OnNoteCheckValueFnc(CWnd *pWnd){
	return ((CHeathExamDialog *)pWnd)->OnNoteCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHeathExamDialog *pVw = (CHeathExamDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHeathExamDialog *pVw = (CHeathExamDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddHeathExamDialogFnc(CWnd *pWnd){
	 return ((CHeathExamDialog*)pWnd)->OnAddHeathExamDialog();
} 
static int _OnEditHeathExamDialogFnc(CWnd *pWnd){
	 return ((CHeathExamDialog*)pWnd)->OnEditHeathExamDialog();
} 
static int _OnDeleteHeathExamDialogFnc(CWnd *pWnd){
	 return ((CHeathExamDialog*)pWnd)->OnDeleteHeathExamDialog();
} 
static int _OnSaveHeathExamDialogFnc(CWnd *pWnd){
	 return ((CHeathExamDialog*)pWnd)->OnSaveHeathExamDialog();
} 
static int _OnCancelHeathExamDialogFnc(CWnd *pWnd){
	 return ((CHeathExamDialog*)pWnd)->OnCancelHeathExamDialog();
} 
CHeathExamDialog::CHeathExamDialog(CWnd *pParent):
	CGuiDialog(pParent){
	m_nDlgWidth = 340;
	m_nDlgHeight = 185;
	m_szTitle = _T("Kh\xE1m s\x1EE9\x63 kh\x1ECF\x65 trong n\x1B0\x1EDB\x63");
	SetDefaultValues();
}
CHeathExamDialog::~CHeathExamDialog(){
}
void CHeathExamDialog::OnCreateComponents(){
	m_wndInsertionPageLabel.Create(this, _T("insertion page"), 15, 30, 115, 55);
	m_wndInsertionPage.Create(this,120, 30, 155, 55); 
	m_wndExamTypeLabel.Create(this, _T("Exam Type"), 15, 60, 115, 85);
	m_wndExamType.Create(this,120, 60, 324, 85); 
	m_wndHealthExam.Create(this, _T("Health Exam"), 10, 5, 330, 150);
	m_wndRankLabel.Create(this, _T("Rank "), 15, 90, 115, 115);
	m_wndRank.Create(this,120, 90, 324, 115); 
	m_wndNoteLabel.Create(this, _T("Note"), 15, 120, 115, 145);
	m_wndNote.Create(this,120, 120, 324, 145); 
	m_wndSave.Create(this, _T("&Save"), 175, 155, 250, 180);
	m_wndCancel.Create(this, _T("&Cancel"), 255, 155, 330, 180);
}
void CHeathExamDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(TRUE);
	EnableButtons(TRUE, 0,1,2, -1);
	m_wndInsertionPage.SetLimitText(35);
	m_wndInsertionPage.SetCheckValue(false);
	m_wndExamType.SetCheckValue(true);
	m_wndExamType.LimitText(35);
	m_wndRank.SetCheckValue(true);
	m_wndRank.LimitText(35);
	m_wndNote.SetLimitText(35);
	m_wndNote.SetCheckValue(false);

	m_wndExamType.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndExamType.InsertColumn(1, _T("Description"), CFMT_TEXT, 170);

	m_wndRank.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndRank.InsertColumn(1, _T("Description"), CFMT_TEXT, 170);

	m_hms_HeathExamDialogTbl.SetTableName(_T("hms_HeathExam"));
	m_hms_HeathExamDialogTbl.AddField(_T("hhe_createdby"), dfText, 15); 
	m_hms_HeathExamDialogTbl.AddField(_T("hhe_createddate"), dfDateTime); 
	m_hms_HeathExamDialogTbl.AddField(_T("hhe_updatedby"), dfText, 15); 
	m_hms_HeathExamDialogTbl.AddField(_T("hhe_updateddate"), dfDateTime); 
	m_hms_HeathExamDialogTbl.AddField(_T("hhe_patientno"), dfLong); 
	m_hms_HeathExamDialogTbl.AddField(_T("hhe_docno"), dfLong); 
	m_hms_HeathExamDialogTbl.AddField(_T("hhe_idx"), dfLong); 
	m_hms_HeathExamDialogTbl.AddField(_T("hhe_examtype"), dfText); 
	m_hms_HeathExamDialogTbl.AddField(_T("hhe_roomid"), dfLong); 
	m_hms_HeathExamDialogTbl.AddField(_T("hhe_insertion"), dfLong); 
	m_hms_HeathExamDialogTbl.AddField(_T("hhe_driverrank"), dfLong); 
	m_hms_HeathExamDialogTbl.AddField(_T("hhe_learning"), dfLong);
	m_hms_HeathExamDialogTbl.AddField(_T("hhe_result"), dfLong);
	m_hms_HeathExamDialogTbl.AddField(_T("hhe_note"), dfText, 254); 
}
void CHeathExamDialog::OnSetWindowEvents(){
	//m_wndInsertionPage.SetEvent(WE_CHANGE, _OnInsertionPageChangeFnc);
	//m_wndInsertionPage.SetEvent(WE_SETFOCUS, _OnInsertionPageSetfocusFnc);
	//m_wndInsertionPage.SetEvent(WE_KILLFOCUS, _OnInsertionPageKillfocusFnc);
	m_wndInsertionPage.SetEvent(WE_CHECKVALUE, _OnInsertionPageCheckValueFnc);
	m_wndExamType.SetEvent(WE_SELENDOK, _OnExamTypeSelendokFnc);
	//m_wndExamType.SetEvent(WE_SETFOCUS, _OnExamTypeSetfocusFnc);
	//m_wndExamType.SetEvent(WE_KILLFOCUS, _OnExamTypeKillfocusFnc);
	m_wndExamType.SetEvent(WE_SELCHANGE, _OnExamTypeSelectChangeFnc);
	m_wndExamType.SetEvent(WE_LOADDATA, _OnExamTypeLoadDataFnc);
	//m_wndExamType.SetEvent(WE_ADDNEW, _OnExamTypeAddNewFnc);
	m_wndRank.SetEvent(WE_SELENDOK, _OnRankSelendokFnc);
	//m_wndRank.SetEvent(WE_SETFOCUS, _OnRankSetfocusFnc);
	//m_wndRank.SetEvent(WE_KILLFOCUS, _OnRankKillfocusFnc);
	m_wndRank.SetEvent(WE_SELCHANGE, _OnRankSelectChangeFnc);
	m_wndRank.SetEvent(WE_LOADDATA, _OnRankLoadDataFnc);
	//m_wndRank.SetEvent(WE_ADDNEW, _OnRankAddNewFnc);
	//m_wndNote.SetEvent(WE_CHANGE, _OnNoteChangeFnc);
	//m_wndNote.SetEvent(WE_SETFOCUS, _OnNoteSetfocusFnc);
	//m_wndNote.SetEvent(WE_KILLFOCUS, _OnNoteKillfocusFnc);
	m_wndNote.SetEvent(WE_CHECKVALUE, _OnNoteCheckValueFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	GetDataToScreen();
}
void CHeathExamDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndInsertionPage.GetDlgCtrlID(), m_szInsertionPage);
	DDX_TextEx(pDX, m_wndExamType.GetDlgCtrlID(), m_szExamTypeKey);
	DDX_TextEx(pDX, m_wndRank.GetDlgCtrlID(), m_szRankKey);
	DDX_Text(pDX, m_wndNote.GetDlgCtrlID(), m_szNote);
}
void CHeathExamDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM hms_HeathExam WHERE hhe_patientno = %ld and hhe_docno = %ld  "), m_nPatientNo, m_nDocNo);
	rs.ExecSQL(szSQL);
if(!rs.IsEOF())
	{
		rs.GetValue(_T("hhe_patientno"), m_nPatientNo);
		rs.GetValue(_T("hhe_docno"), m_nDocNo);
		rs.GetValue(_T("hhe_idx"), m_nID);
		rs.GetValue(_T("hhe_examtype"), m_szExamTypeKey);
		rs.GetValue(_T("hhe_insertion"), m_szInsertionPage);
		rs.GetValue(_T("hhe_driverrank"), m_szRankKey);
		rs.GetValue(_T("hhe_note"), m_szNote);
		SetMode(VM_EDIT);
	}
	else
		SetMode(VM_ADD);
}
void CHeathExamDialog::GetScreenToData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);
	if(GetMode() == VM_ADD)
	{
		CString szSQL;
		szSQL.Format(_T("SELECT coalesce(max(hhe_idx), 0)+1 FROM hms_HeathExam  WHERE hhe_docno= %ld"), m_nDocNo);
		CRecord rs(&pMF->m_db);
		rs.ExecSQL(szSQL);
		m_nID = rs.GetIntValue();
	}
	m_hms_HeathExamDialogTbl.SetTableName(_T("hms_HeathExam"));
	m_hms_HeathExamDialogTbl.SetValue(_T("hhe_createdby"), pMF->GetCurrentUser());
	m_hms_HeathExamDialogTbl.SetValue(_T("hhe_createddate"), pMF->GetSysDateTime());
	m_hms_HeathExamDialogTbl.SetValue(_T("hhe_updatedby"), pMF->GetCurrentUser());
	m_hms_HeathExamDialogTbl.SetValue(_T("hhe_updateddate"), pMF->GetSysDateTime());
	m_hms_HeathExamDialogTbl.SetValue(_T("hhe_patientno"), m_nPatientNo);
	m_hms_HeathExamDialogTbl.SetValue(_T("hhe_docno"), m_nDocNo);
	m_hms_HeathExamDialogTbl.SetValue(_T("hhe_idx"), m_nID);
	m_hms_HeathExamDialogTbl.SetValue(_T("hhe_examtype"), m_szExamTypeKey );
	m_hms_HeathExamDialogTbl.SetValue(_T("hhe_insertion"),m_szInsertionPage);
	m_hms_HeathExamDialogTbl.SetValue(_T("hhe_driverrank"), m_szRankKey);
	m_hms_HeathExamDialogTbl.SetValue(_T("hhe_note"), m_szNote);
}
void CHeathExamDialog::SetDefaultValues()
{
	m_szInsertionPage=1;
	m_szExamTypeKey.Empty();
	m_szRankKey.Empty();
	m_szNote.Empty();

}
int CHeathExamDialog::SetMode(int nMode){
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
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 1, 2, -1); 
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
/*void CHeathExamDialog::OnInsertionPageChange(){
	
} */
/*void CHeathExamDialog::OnInsertionPageSetfocus(){
	
} */
/*void CHeathExamDialog::OnInsertionPageKillfocus(){
	
} */
int CHeathExamDialog::OnInsertionPageCheckValue(){
	return 0;
} 
void CHeathExamDialog::OnExamTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHeathExamDialog::OnExamTypeSelendok(){
	UpdateData(TRUE);
	OnRankLoadData();
	 
}
/*void CHeathExamDialog::OnExamTypeSetfocus(){
	
}*/
/*void CHeathExamDialog::OnExamTypeKillfocus(){
	
}*/
long CHeathExamDialog::OnExamTypeLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndExamType.IsSearchKey() && !m_szExamTypeKey.IsEmpty()){
	};
	m_wndExamType.DeleteAllItems(); 
	szSQL.Format(_T("select ss_code as id, ss_desc as name from sys_sel where ss_id = 'hms_healthtype'"));
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndExamType.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CHeathExamDialog::OnExamTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHeathExamDialog::OnRankSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHeathExamDialog::OnRankSelendok(){
	 
}
/*void CHeathExamDialog::OnRankSetfocus(){
	
}*/
/*void CHeathExamDialog::OnRankKillfocus(){
	
}*/
long CHeathExamDialog::OnRankLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CRecord rs1(&pMF->m_db);
	CString szSQL, szSQL1, szWhere, szWhere1;
	if(m_wndRank.IsSearchKey() && !m_szRankKey.IsEmpty()){
	};
	m_wndRank.DeleteAllItems(); 
		if(m_szExamTypeKey == _T("LX"))
		{
			szSQL.Format(_T("select ss_code as id, ss_desc as name from sys_sel where ss_id = 'hms_driverrank'"));
		}	
	int nCount = 0;
	if(m_szExamTypeKey == _T("DH"))
		{
			szSQL.Format(_T("select ss_code as id, ss_desc as name from sys_sel where ss_id = 'hms_learnhealth'"));
		}
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndRank.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHeathExamDialog::OnRankAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHeathExamDialog::OnNoteChange(){
	
} */
/*void CHeathExamDialog::OnNoteSetfocus(){
	
} */
/*void CHeathExamDialog::OnNoteKillfocus(){
	
} */
int CHeathExamDialog::OnNoteCheckValue(){
	return 0;
} 
void CHeathExamDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveHeathExamDialog();
	
} 
void CHeathExamDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();
	
} 
int CHeathExamDialog::OnAddHeathExamDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHeathExamDialog::OnEditHeathExamDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHeathExamDialog::OnDeleteHeathExamDialog(){
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
 		OnCancelHeathExamDialog(); 
 	}
	return 0;
}
int CHeathExamDialog::OnSaveHeathExamDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD)
	{ 
 		szSQL = m_hms_HeathExamDialogTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE hhe_patientno = %ld and hhe_docno = %ld "), m_nPatientNo, m_nDocNo); 
 		szSQL = m_hms_HeathExamDialogTbl.GetUpdateSQL(_T("hhe_updatedby,hhe_updateddate,hhe_patientno, hhe_docno, hhe_idx")); 
 		szSQL += szWhere; 
 	} 
 _fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		//OnHeathExamDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
	OnOK();
 	return ret; 	
}
int CHeathExamDialog::OnCancelHeathExamDialog(){
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
int CHeathExamDialog::OnHeathExamDialogListLoadData(){
	return 0;
}
