#include "HMSExaminationMoveDialog.h"
#include "MainFrm.h"
static void _OnExaminationRoomSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSExaminationMoveDialog* )pWnd)->OnExaminationRoomSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnExaminationRoomSelendokFnc(CWnd *pWnd){
	((CHMSExaminationMoveDialog *)pWnd)->OnExaminationRoomSelendok();
}
/*static void _OnExaminationRoomSetfocusFnc(CWnd *pWnd){
	((CHMSExaminationMoveDialog *)pWnd)->OnExaminationRoomKillfocus();
}*/
/*static void _OnExaminationRoomKillfocusFnc(CWnd *pWnd){
	((CHMSExaminationMoveDialog *)pWnd)->OnExaminationRoomKillfocus();
}*/
static long _OnExaminationRoomLoadDataFnc(CWnd *pWnd){
	return ((CHMSExaminationMoveDialog *)pWnd)->OnExaminationRoomLoadData();
}
/*static void _OnExaminationRoomAddNewFnc(CWnd *pWnd){
	((CHMSExaminationMoveDialog *)pWnd)->OnExaminationRoomAddNew();
}*/
static void _OnExaminationRoomNewSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSExaminationMoveDialog* )pWnd)->OnExaminationRoomNewSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnExaminationRoomNewSelendokFnc(CWnd *pWnd){
	((CHMSExaminationMoveDialog *)pWnd)->OnExaminationRoomNewSelendok();
}
/*static void _OnExaminationRoomNewSetfocusFnc(CWnd *pWnd){
	((CHMSExaminationMoveDialog *)pWnd)->OnExaminationRoomNewKillfocus();
}*/
/*static void _OnExaminationRoomNewKillfocusFnc(CWnd *pWnd){
	((CHMSExaminationMoveDialog *)pWnd)->OnExaminationRoomNewKillfocus();
}*/
static long _OnExaminationRoomNewLoadDataFnc(CWnd *pWnd){
	return ((CHMSExaminationMoveDialog *)pWnd)->OnExaminationRoomNewLoadData();
}
/*static void _OnExaminationRoomNewAddNewFnc(CWnd *pWnd){
	((CHMSExaminationMoveDialog *)pWnd)->OnExaminationRoomNewAddNew();
}*/
static void _OnOKSelectFnc(CWnd *pWnd){
	CHMSExaminationMoveDialog *pVw = (CHMSExaminationMoveDialog *)pWnd;
	pVw->OnOKSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSExaminationMoveDialog *pVw = (CHMSExaminationMoveDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddHMSExaminationMoveDialogFnc(CWnd *pWnd){
	 return ((CHMSExaminationMoveDialog*)pWnd)->OnAddHMSExaminationMoveDialog();
} 
static int _OnEditHMSExaminationMoveDialogFnc(CWnd *pWnd){
	 return ((CHMSExaminationMoveDialog*)pWnd)->OnEditHMSExaminationMoveDialog();
} 
static int _OnDeleteHMSExaminationMoveDialogFnc(CWnd *pWnd){
	 return ((CHMSExaminationMoveDialog*)pWnd)->OnDeleteHMSExaminationMoveDialog();
} 
static int _OnSaveHMSExaminationMoveDialogFnc(CWnd *pWnd){
	 return ((CHMSExaminationMoveDialog*)pWnd)->OnSaveHMSExaminationMoveDialog();
} 
static int _OnCancelHMSExaminationMoveDialogFnc(CWnd *pWnd){
	 return ((CHMSExaminationMoveDialog*)pWnd)->OnCancelHMSExaminationMoveDialog();
} 
CHMSExaminationMoveDialog::CHMSExaminationMoveDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 400;
	m_nDlgHeight = 125;
	//m_szTitle =_T("Change Clinic");
	SetDefaultValues();
}
CHMSExaminationMoveDialog::~CHMSExaminationMoveDialog(){
}
void CHMSExaminationMoveDialog::OnCreateComponents(){
	m_wndChangeInformation.Create(this, _T("Change Information"), 5, 5, 390, 90);
	m_wndExaminationRoomLabel.Create(this, _T("Current Examination Room"), 10, 30, 130, 55);
	m_wndExaminationRoom.Create(this,135, 30, 385, 55); 
	m_wndExaminationRoomNewLabel.Create(this, _T("New Examination Room"), 10, 60, 130, 85);
	m_wndExaminationRoomNew.Create(this,135, 60, 385, 85); 
	m_wndOK.Create(this, _T("&OK"), 235, 95, 310, 120);
	m_wndCancel.Create(this, _T("&Cancel"), 315, 95, 390, 120);

}
void CHMSExaminationMoveDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndExaminationRoom.SetCheckValue(true);
	m_wndExaminationRoom.LimitText(35);
	m_wndExaminationRoomNew.SetCheckValue(true);
	m_wndExaminationRoomNew.LimitText(35);
	//m_wndExaminationRoom.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	//m_wndExaminationRoom.InsertColumn(1, _T("Description"), CFMT_TEXT, 200);
	m_wndExaminationRoomNew.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndExaminationRoomNew.InsertColumn(1, _T("Description"), CFMT_TEXT, 200);	
	
}
void CHMSExaminationMoveDialog::OnSetWindowEvents(){
	m_wndExaminationRoom.SetEvent(WE_SELENDOK, _OnExaminationRoomSelendokFnc);
	//m_wndExaminationRoom.SetEvent(WE_SETFOCUS, _OnExaminationRoomSetfocusFnc);
	//m_wndExaminationRoom.SetEvent(WE_KILLFOCUS, _OnExaminationRoomKillfocusFnc);
	m_wndExaminationRoom.SetEvent(WE_SELCHANGE, _OnExaminationRoomSelectChangeFnc);
	m_wndExaminationRoom.SetEvent(WE_LOADDATA, _OnExaminationRoomLoadDataFnc);
	//m_wndExaminationRoom.SetEvent(WE_ADDNEW, _OnExaminationRoomAddNewFnc);
	m_wndExaminationRoomNew.SetEvent(WE_SELENDOK, _OnExaminationRoomNewSelendokFnc);
	//m_wndExaminationRoomNew.SetEvent(WE_SETFOCUS, _OnExaminationRoomNewSetfocusFnc);
	//m_wndExaminationRoomNew.SetEvent(WE_KILLFOCUS, _OnExaminationRoomNewKillfocusFnc);
	m_wndExaminationRoomNew.SetEvent(WE_SELCHANGE, _OnExaminationRoomNewSelectChangeFnc);
	m_wndExaminationRoomNew.SetEvent(WE_LOADDATA, _OnExaminationRoomNewLoadDataFnc);
	//m_wndExaminationRoomNew.SetEvent(WE_ADDNEW, _OnExaminationRoomNewAddNewFnc);
	m_wndOK.SetEvent(WE_CLICK, _OnOKSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
/*
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSExaminationMoveDialogFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSExaminationMoveDialogFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSExaminationMoveDialogFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSExaminationMoveDialogFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSExaminationMoveDialogFnc, 0, 'T', VK_CONTROL);
*/
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_szExaminationRoomKey = pMF->GetCurrentRoomName();
	SetMode(VM_ADD);	
	
	
}
void CHMSExaminationMoveDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndExaminationRoom.GetDlgCtrlID(), m_szExaminationRoomKey);
	DDX_TextEx(pDX, m_wndExaminationRoomNew.GetDlgCtrlID(), m_szExamRoomNewKey);
}
void CHMSExaminationMoveDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSExaminationMoveDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnExaminationRoomLoadData();
}
void CHMSExaminationMoveDialog::SetDefaultValues(){

	//m_szExaminationRoomKey.Empty();
	m_szExamRoomNewKey.Empty();

}
int CHMSExaminationMoveDialog::SetMode(int nMode){
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
		m_wndExaminationRoom.EnableWindow(FALSE);
 		UpdateData(FALSE); 
 		return nOldMode; 
}
void CHMSExaminationMoveDialog::OnExaminationRoomSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSExaminationMoveDialog::OnExaminationRoomSelendok(){
	 
}
/*void CHMSExaminationMoveDialog::OnExaminationRoomSetfocus(){
	
}*/
/*void CHMSExaminationMoveDialog::OnExaminationRoomKillfocus(){
	
}*/
long CHMSExaminationMoveDialog::OnExaminationRoomLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	//if(m_wndExaminationRoom.IsSearchKey() && ToInt(m_szExaminationRoomKey) > 0){
	//	szWhere.Format(_T(" AND hrl_id=%d "), ToInt(m_szExaminationRoomKey));
	//};
	//szSQL.Format(_T("SELECT hrl_id as id, hrl_name as name FROM hms_roomlist ") \
	//	_T("WHERE hrl_deptid='%s' %s ORDER BY hrl_id "), pMF->m_szDept,  szWhere);	
	//m_wndExaminationRoom.DeleteAllItems(); 
	int nCount = 0;
	//nCount = rs.ExecSQL(szSQL);
	//while(!rs.IsEOF()){ 
	//	m_wndExaminationRoom.AddItems(
	//		rs.GetValue(_T("id")), 
	//		rs.GetValue(_T("name")), 
	//		_T(""),
	//		NULL);
	//	rs.MoveNext();
	//}	
	return nCount;

}
/*void CHMSExaminationMoveDialog::OnExaminationRoomAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSExaminationMoveDialog::OnExaminationRoomNewSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSExaminationMoveDialog::OnExaminationRoomNewSelendok(){
	 
}
/*void CHMSExaminationMoveDialog::OnExaminationRoomNewSetfocus(){
	
}*/
/*void CHMSExaminationMoveDialog::OnExaminationRoomNewKillfocus(){
	
}*/
long CHMSExaminationMoveDialog::OnExaminationRoomNewLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndExaminationRoomNew.IsSearchKey() && ToInt(m_szExamRoomNewKey) > 0){
		szWhere.Format(_T(" AND hrl_id=%d "), ToInt(m_szExamRoomNewKey));
	};
	szSQL.Format(_T("SELECT hrl_id as id, hrl_name as name FROM hms_roomlist ") \
		_T("WHERE hrl_deptid='%s' AND HRL_ACTIVE='Y' AND hrl_id not in(select he_roomid from hms_exam where he_docno=%ld and he_deptid='%s') %s ORDER BY hrl_id "), pMF->m_szDept, pMF->m_nDocumentNo, pMF->m_szDept, szWhere);

	
	m_wndExaminationRoomNew.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndExaminationRoomNew.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), 
			NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSExaminationMoveDialog::OnExaminationRoomNewAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSExaminationMoveDialog::OnOKSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(OnSaveHMSExaminationMoveDialog())
		CGuiDialog::OnOK();
} 
void CHMSExaminationMoveDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
	
} 
int CHMSExaminationMoveDialog::OnAddHMSExaminationMoveDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSExaminationMoveDialog::OnEditHMSExaminationMoveDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSExaminationMoveDialog::OnDeleteHMSExaminationMoveDialog(){
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
 		OnCancelHMSExaminationMoveDialog(); 
 	}
	return 0;
}
int CHMSExaminationMoveDialog::OnSaveHMSExaminationMoveDialog(){
 	if(GetMode() != VM_ADD) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL;
	CRecord rs(&pMF->m_db);
	int m_nReceptIdx;
	
/*	szSQL.Format(_T(" SELECT coalesce(MAX(he_receptno), 0)+1 as receptno") \
		_T(" FROM hms_exam") \
		_T(" WHERE trim(he_deptid)='%s'") \
		_T(" AND he_roomid= %d ") \
		_T(" and trunc_date(he_examdate)=trunc_date(CURRENT_DATE) "), 
		pMF->m_szDept, str2int(m_szExamRoomNewKey));

	rs.ExecSQL(szSQL);
	m_nReceptIdx = rs.GetIntValue();
	*/
	CString m_szExamDate= pMF->GetSysDate();
	szSQL.Format(_T("HMS_CREATE_RECEPTNO('%s',%d,to_date('%s','YYYY-MM-DD'))"),pMF->m_szDept, str2int(m_szExamRoomNewKey), m_szExamDate.Left(10));
	m_nReceptIdx= str2int(pMF->ExecDML(szSQL));
	

	szSQL.Format(_T("UPDATE hms_exam SET he_roomid =%d, HE_RECEPTNO=%d WHERE he_docno =%d and HE_RECEPTNO = %d "),ToInt(m_szExamRoomNewKey), m_nReceptIdx,pMF->m_nDocumentNo, pMF->m_nReceptNo);
	_fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
		szSQL.Format(_T("DELETE FROM hms_exam_pending WHERE hep_docno = %ld and hep_receptidx = %d and hep_pending = 'O'"), pMF->m_nDocumentNo, pMF->m_nRefIndex);
		pMF->ExecSQL(szSQL);
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 
}
int CHMSExaminationMoveDialog::OnCancelHMSExaminationMoveDialog(){
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
int CHMSExaminationMoveDialog::OnHMSExaminationMoveDialogListLoadData(){
	return 0;
}
