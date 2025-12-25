#include "HMSExaminationChangeDialog.h"
#include "MainFrm.h"
static void _OnExaminationRoomSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSExaminationChangeDialog* )pWnd)->OnExaminationRoomSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnExaminationRoomSelendokFnc(CWnd *pWnd){
	((CHMSExaminationChangeDialog *)pWnd)->OnExaminationRoomSelendok();
}
/*static void _OnExaminationRoomSetfocusFnc(CWnd *pWnd){
	((CHMSExaminationChangeDialog *)pWnd)->OnExaminationRoomKillfocus();
}*/
/*static void _OnExaminationRoomKillfocusFnc(CWnd *pWnd){
	((CHMSExaminationChangeDialog *)pWnd)->OnExaminationRoomKillfocus();
}*/
static long _OnExaminationRoomLoadDataFnc(CWnd *pWnd){
	return ((CHMSExaminationChangeDialog *)pWnd)->OnExaminationRoomLoadData();
}
/*static void _OnExaminationRoomAddNewFnc(CWnd *pWnd){
	((CHMSExaminationChangeDialog *)pWnd)->OnExaminationRoomAddNew();
}*/
static void _OnExamTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSExaminationChangeDialog* )pWnd)->OnExamTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnExamTypeSelendokFnc(CWnd *pWnd){
	((CHMSExaminationChangeDialog *)pWnd)->OnExamTypeSelendok();
}
/*static void _OnExamTypeSetfocusFnc(CWnd *pWnd){
	((CHMSExaminationChangeDialog *)pWnd)->OnExamTypeKillfocus();
}*/
/*static void _OnExamTypeKillfocusFnc(CWnd *pWnd){
	((CHMSExaminationChangeDialog *)pWnd)->OnExamTypeKillfocus();
}*/
static long _OnExamTypeLoadDataFnc(CWnd *pWnd){
	return ((CHMSExaminationChangeDialog *)pWnd)->OnExamTypeLoadData();
}
/*static void _OnExamTypeAddNewFnc(CWnd *pWnd){
	((CHMSExaminationChangeDialog *)pWnd)->OnExamTypeAddNew();
}*/
static void _OnOKSelectFnc(CWnd *pWnd){
	CHMSExaminationChangeDialog *pVw = (CHMSExaminationChangeDialog *)pWnd;
	pVw->OnOKSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSExaminationChangeDialog *pVw = (CHMSExaminationChangeDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddHMSExaminationChangeDialogFnc(CWnd *pWnd){
	 return ((CHMSExaminationChangeDialog*)pWnd)->OnAddHMSExaminationChangeDialog();
} 
static int _OnEditHMSExaminationChangeDialogFnc(CWnd *pWnd){
	 return ((CHMSExaminationChangeDialog*)pWnd)->OnEditHMSExaminationChangeDialog();
} 
static int _OnDeleteHMSExaminationChangeDialogFnc(CWnd *pWnd){
	 return ((CHMSExaminationChangeDialog*)pWnd)->OnDeleteHMSExaminationChangeDialog();
} 
static int _OnSaveHMSExaminationChangeDialogFnc(CWnd *pWnd){
	 return ((CHMSExaminationChangeDialog*)pWnd)->OnSaveHMSExaminationChangeDialog();
} 
static int _OnCancelHMSExaminationChangeDialogFnc(CWnd *pWnd){
	 return ((CHMSExaminationChangeDialog*)pWnd)->OnCancelHMSExaminationChangeDialog();
} 
CHMSExaminationChangeDialog::CHMSExaminationChangeDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 400;
	m_nDlgHeight = 125;
	SetDefaultValues();
}
CHMSExaminationChangeDialog::~CHMSExaminationChangeDialog(){
}
void CHMSExaminationChangeDialog::OnCreateComponents(){
	m_wndChangeInformation.Create(this, _T("Change Information"), 5, 5, 390, 90);
	m_wndExaminationRoomLabel.Create(this, _T("Examination Room"), 10, 30, 130, 55);
	m_wndExaminationRoom.Create(this,135, 30, 385, 55); 
	m_wndExamTypeLabel.Create(this, _T("Exam Type"), 10, 60, 130, 85);
	m_wndExamType.Create(this,135, 60, 385, 85); 
	m_wndOK.Create(this, _T("&OK"), 235, 95, 310, 120);
	m_wndCancel.Create(this, _T("&Cancel"), 315, 95, 390, 120);

}
void CHMSExaminationChangeDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndExaminationRoom.SetCheckValue(true);
	m_wndExaminationRoom.LimitText(35);
	m_wndExamType.SetCheckValue(true);
	m_wndExamType.LimitText(35);
	m_wndExaminationRoom.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndExaminationRoom.InsertColumn(1, _T("Description"), CFMT_TEXT, 300);
	m_wndExamType.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndExamType.InsertColumn(1, _T("Description"), CFMT_TEXT, 300);

	//Thong tin cac lan kham cua benh nhan
	m_hms_examTbl.SetTableName(_T("hms_exam"));
	m_hms_examTbl.AddField(_T("he_createdby"), dfText, 15); 
	m_hms_examTbl.AddField(_T("he_createddate"), dfDateTime); 
	m_hms_examTbl.AddField(_T("he_updatedby"), dfText, 15); 
	m_hms_examTbl.AddField(_T("he_patientno"), dfLong); 
	m_hms_examTbl.AddField(_T("he_docno"), dfLong); 
	m_hms_examTbl.AddField(_T("he_deptid"), dfText, 7); 
	m_hms_examTbl.AddField(_T("he_roomid"), dfInteger); 
	m_hms_examTbl.AddField(_T("he_receptno"), dfInteger); 
//	m_hms_examTbl.AddField(_T("he_receptidx"), dfInteger); 
	m_hms_examTbl.AddField(_T("he_examtype"), dfText, 13); 
	m_hms_examTbl.AddField(_T("he_status"), dfText, 1); 
	m_hms_examTbl.AddField(_T("he_examdate"), dfDateTime); 
	m_hms_examTbl.AddField(_T("he_doctor"), dfText, 15); 
	m_hms_examTbl.AddField(_T("he_examine"), dfText, 512); 
    m_hms_examTbl.AddField(_T("he_prediagnostic"), dfText, 128); 
	m_hms_examTbl.AddField(_T("he_diagnostic"), dfText, 254); 
	m_hms_examTbl.AddField(_T("he_hasfee"), dfText, 1); 
	m_hms_examTbl.AddField(_T("he_payment"), dfText, 1); 
	//m_hms_examTbl.AddField(_T("he_typeid"), dfInteger); 


}
void CHMSExaminationChangeDialog::OnSetWindowEvents(){
	m_wndExaminationRoom.SetEvent(WE_SELENDOK, _OnExaminationRoomSelendokFnc);
	//m_wndExaminationRoom.SetEvent(WE_SETFOCUS, _OnExaminationRoomSetfocusFnc);
	//m_wndExaminationRoom.SetEvent(WE_KILLFOCUS, _OnExaminationRoomKillfocusFnc);
	m_wndExaminationRoom.SetEvent(WE_SELCHANGE, _OnExaminationRoomSelectChangeFnc);
	m_wndExaminationRoom.SetEvent(WE_LOADDATA, _OnExaminationRoomLoadDataFnc);
	//m_wndExaminationRoom.SetEvent(WE_ADDNEW, _OnExaminationRoomAddNewFnc);
	m_wndExamType.SetEvent(WE_SELENDOK, _OnExamTypeSelendokFnc);
	//m_wndExamType.SetEvent(WE_SETFOCUS, _OnExamTypeSetfocusFnc);
	//m_wndExamType.SetEvent(WE_KILLFOCUS, _OnExamTypeKillfocusFnc);
	m_wndExamType.SetEvent(WE_SELCHANGE, _OnExamTypeSelectChangeFnc);
	m_wndExamType.SetEvent(WE_LOADDATA, _OnExamTypeLoadDataFnc);
	//m_wndExamType.SetEvent(WE_ADDNEW, _OnExamTypeAddNewFnc);
	m_wndOK.SetEvent(WE_CLICK, _OnOKSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
/*
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSExaminationChangeDialogFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSExaminationChangeDialogFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSExaminationChangeDialogFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSExaminationChangeDialogFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSExaminationChangeDialogFnc, 0, 'T', VK_CONTROL);
*/
	SetMode(VM_ADD);
}
void CHMSExaminationChangeDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndExaminationRoom.GetDlgCtrlID(), m_szExaminationRoomKey);
	DDX_TextEx(pDX, m_wndExamType.GetDlgCtrlID(), m_szExamTypeKey);

}
void CHMSExaminationChangeDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSExaminationChangeDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	int nReceptNo;
	CString szSQL, tmpStr;
	/*szSQL.Format(_T(" SELECT coalesce(max(he_receptidx),0)+1 ") \
			_T(" FROM hms_exam  ") \
			_T(" WHERE he_docno=%ld "), pMF->m_nDocumentNo);
			rs.ExecSQL(szSQL);
	nReceptIdx = rs.GetIntValue();*/

	szSQL.Format(_T("SELECT coalesce(max(he_receptno),0)+1 ") \
				_T("FROM hms_exam  ") \
				_T("WHERE he_deptid='%s' and he_roomid=%d AND date(he_examdate) = date('%s') ; "), 
				pMF->m_szDept, ToLong(m_szExaminationRoomKey), pMF->GetSysDate());
	rs.ExecSQL(szSQL);

	nReceptNo = rs.GetIntValue();


	m_hms_examTbl.SetValue(_T("he_createdby"), pMF->GetCurrentUser());
	m_hms_examTbl.SetValue(_T("he_createddate"), pMF->GetSysDateTime());
	m_hms_examTbl.SetValue(_T("he_updatedby"), pMF->GetCurrentUser());
	m_hms_examTbl.SetValue(_T("he_updateddate"), pMF->GetSysDateTime());

	m_hms_examTbl.SetValue(_T("he_patientno"), pMF->m_nPatientNo); 
	m_hms_examTbl.SetValue(_T("he_docno"), pMF->m_nDocumentNo); 
	m_hms_examTbl.SetValue(_T("he_roomid"), m_szExaminationRoomKey); 
	m_hms_examTbl.SetValue(_T("he_deptid"), pMF->m_szDept); 
	m_hms_examTbl.SetValue(_T("he_receptno"), nReceptNo); 
	//m_hms_examTbl.SetValue(_T("he_receptidx"), nReceptIdx);
	
	m_hms_examTbl.SetValue(_T("he_examdate"), pMF->GetSysDateTime()); 
	m_hms_examTbl.SetValue(_T("he_status"), _T("O"));
	tmpStr.Format(_T("D0000%.3d"), ToInt(m_szExamTypeKey));
	m_hms_examTbl.SetValue(_T("he_examtype"), tmpStr);
	m_hms_examTbl.SetValue(_T("he_hasfee"), _T("M")); 

}
void CHMSExaminationChangeDialog::SetDefaultValues(){

	m_szExaminationRoomKey.Empty();
	m_szExamTypeKey.Empty();

}
int CHMSExaminationChangeDialog::SetMode(int nMode){
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
 		UpdateData(FALSE); 
 		return nOldMode; 
}
void CHMSExaminationChangeDialog::OnExaminationRoomSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSExaminationChangeDialog::OnExaminationRoomSelendok(){
	 
}
/*void CHMSExaminationChangeDialog::OnExaminationRoomSetfocus(){
	
}*/
/*void CHMSExaminationChangeDialog::OnExaminationRoomKillfocus(){
	
}*/
long CHMSExaminationChangeDialog::OnExaminationRoomLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndExaminationRoom.IsSearchKey() && ToInt(m_szExaminationRoomKey) > 0){
		szWhere.Format(_T(" AND hrl_id=%d "), ToInt(m_szExaminationRoomKey));
	};
	szSQL.Format(_T("SELECT hrl_id as id, hrl_name as name FROM hms_roomlist ") \
		_T("WHERE hrl_deptid='%s' AND hrl_id not in(select he_roomid from hms_exam where he_docno=%ld) %s ORDER BY hrl_id "), pMF->m_szDept, pMF->m_nDocumentNo, szWhere);

	m_wndExaminationRoom.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndExaminationRoom.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), 
			_T(""),
			NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CHMSExaminationChangeDialog::OnExaminationRoomAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSExaminationChangeDialog::OnExamTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSExaminationChangeDialog::OnExamTypeSelendok(){
	 
}
/*void CHMSExaminationChangeDialog::OnExamTypeSetfocus(){
	
}*/
/*void CHMSExaminationChangeDialog::OnExamTypeKillfocus(){
	
}*/
long CHMSExaminationChangeDialog::OnExamTypeLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndExamType.IsSearchKey() && !m_szExamTypeKey.IsEmpty()){
		szWhere.Format(_T(" AND hfl_idx=%s "), m_szExamTypeKey);
	};
	szSQL.Format(_T("SELECT ") \
		_T("hfl_idx as id,  ") \
		_T("hfl_name as name, hfl_subitem as multiroom, ") \
		_T("hfl_servprice as servprice, hfl_insprice as insprice, hfl_polprice as polprice ") \
		_T("FROM hms_fee_list WHERE hfl_groupid='D0000' AND hfl_typeid='E' %s ORDER BY hfl_feeid "), szWhere);

	//AND hfl_feeid not in(select he_examtype from hms_exam where he_docno=%d)
	
	m_wndExamType.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndExamType.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), 
			NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSExaminationChangeDialog::OnExamTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSExaminationChangeDialog::OnOKSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(OnSaveHMSExaminationChangeDialog())
		CGuiDialog::OnOK();
} 
void CHMSExaminationChangeDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
	
} 
int CHMSExaminationChangeDialog::OnAddHMSExaminationChangeDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSExaminationChangeDialog::OnEditHMSExaminationChangeDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSExaminationChangeDialog::OnDeleteHMSExaminationChangeDialog(){
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
 		OnCancelHMSExaminationChangeDialog(); 
 	}
	return 0;
}
int CHMSExaminationChangeDialog::OnSaveHMSExaminationChangeDialog(){
 	if(GetMode() != VM_ADD) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 
	szSQL = m_hms_examTbl.GetInsertSQL();
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 
}
int CHMSExaminationChangeDialog::OnCancelHMSExaminationChangeDialog(){
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
int CHMSExaminationChangeDialog::OnHMSExaminationChangeDialogListLoadData(){
	return 0;
}
