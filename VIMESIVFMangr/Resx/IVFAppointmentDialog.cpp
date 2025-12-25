#include "IVFAppointmentDialog.h"
#include "MainFrm.h"
/*static void _OnDateChangeFnc(CWnd *pWnd){
	((CIVFAppointmentDialog *)pWnd)->OnDateChange();
} */
/*static void _OnDateSetfocusFnc(CWnd *pWnd){
	((CIVFAppointmentDialog *)pWnd)->OnDateSetfocus();} */ 
/*static void _OnDateKillfocusFnc(CWnd *pWnd){
	((CIVFAppointmentDialog *)pWnd)->OnDateKillfocus();
} */
static int _OnDateCheckValueFnc(CWnd *pWnd){
	return ((CIVFAppointmentDialog *)pWnd)->OnDateCheckValue();
} 
static void _OnTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CIVFAppointmentDialog* )pWnd)->OnTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTypeSelendokFnc(CWnd *pWnd){
	((CIVFAppointmentDialog *)pWnd)->OnTypeSelendok();
}
/*static void _OnTypeSetfocusFnc(CWnd *pWnd){
	((CIVFAppointmentDialog *)pWnd)->OnTypeKillfocus();
}*/
/*static void _OnTypeKillfocusFnc(CWnd *pWnd){
	((CIVFAppointmentDialog *)pWnd)->OnTypeKillfocus();
}*/
static long _OnTypeLoadDataFnc(CWnd *pWnd){
	return ((CIVFAppointmentDialog *)pWnd)->OnTypeLoadData();
}
/*static void _OnTypeAddNewFnc(CWnd *pWnd){
	((CIVFAppointmentDialog *)pWnd)->OnTypeAddNew();
}*/
/*static void _OnNoteChangeFnc(CWnd *pWnd){
	((CIVFAppointmentDialog *)pWnd)->OnNoteChange();
} */
/*static void _OnNoteSetfocusFnc(CWnd *pWnd){
	((CIVFAppointmentDialog *)pWnd)->OnNoteSetfocus();} */ 
/*static void _OnNoteKillfocusFnc(CWnd *pWnd){
	((CIVFAppointmentDialog *)pWnd)->OnNoteKillfocus();
} */
static int _OnNoteCheckValueFnc(CWnd *pWnd){
	return ((CIVFAppointmentDialog *)pWnd)->OnNoteCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CIVFAppointmentDialog *pVw = (CIVFAppointmentDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CIVFAppointmentDialog *pVw = (CIVFAppointmentDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddIVFAppointmentDialogFnc(CWnd *pWnd){
	 return ((CIVFAppointmentDialog*)pWnd)->OnAddIVFAppointmentDialog();
} 
static int _OnEditIVFAppointmentDialogFnc(CWnd *pWnd){
	 return ((CIVFAppointmentDialog*)pWnd)->OnEditIVFAppointmentDialog();
} 
static int _OnDeleteIVFAppointmentDialogFnc(CWnd *pWnd){
	 return ((CIVFAppointmentDialog*)pWnd)->OnDeleteIVFAppointmentDialog();
} 
static int _OnSaveIVFAppointmentDialogFnc(CWnd *pWnd){
	 return ((CIVFAppointmentDialog*)pWnd)->OnSaveIVFAppointmentDialog();
} 
static int _OnCancelIVFAppointmentDialogFnc(CWnd *pWnd){
	 return ((CIVFAppointmentDialog*)pWnd)->OnCancelIVFAppointmentDialog();
} 
CIVFAppointmentDialog::CIVFAppointmentDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 510;
	m_nDlgHeight = 105;
	SetDefaultValues();
}
CIVFAppointmentDialog::~CIVFAppointmentDialog(){
}
void CIVFAppointmentDialog::OnCreateComponents(){
	m_wndDateLabel.Create(this, _T("Date"), 295, 7, 375, 32);
	m_wndDate.Create(this,380, 7, 505, 32); 
	m_wndTypeLabel.Create(this, _T("Type"), 5, 7, 85, 32);
	m_wndType.Create(this,90, 7, 290, 32); 
	m_wndNoteLabel.Create(this, _T("Note"), 5, 37, 85, 62);
	m_wndNote.Create(this,90, 37, 505, 62); 
	m_wndSave.Create(this, _T("&Save"), 340, 67, 420, 92);
	m_wndClose.Create(this, _T("&Close"), 425, 67, 505, 92);

}
void CIVFAppointmentDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndDate.SetCheckValue(true);
	m_wndType.SetCheckValue(true);
	m_wndType.LimitText(3);
	m_wndNote.SetLimitText(254);
	m_wndNote.SetCheckValue(true);


	m_wndType.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndType.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);
	m_ivf_appointmentTbl.SetTableName(_T("ivf_appointment"));
	m_ivf_appointmentTbl.AddField(_T("IVF_APPOINTMENT_ID"), dfLong); 
	m_ivf_appointmentTbl.AddField(_T("DOCNO"), dfLong); 
	m_ivf_appointmentTbl.AddField(_T("CREATEDDATE"), dfDateTime); 
	m_ivf_appointmentTbl.AddField(_T("CREATEDBY"), dfText, 20); 
	m_ivf_appointmentTbl.AddField(_T("UPDATEDDATE"), dfDateTime); 
	m_ivf_appointmentTbl.AddField(_T("UPDATEDBY"), dfText, 20); 
	m_ivf_appointmentTbl.AddField(_T("APPOINTMENT_DATE"), dfDateTime); 
	m_ivf_appointmentTbl.AddField(_T("DEPTID"), dfText, 7); 
	m_ivf_appointmentTbl.AddField(_T("ROOMID"), dfLong); 
	m_ivf_appointmentTbl.AddField(_T("DOCTOR"), dfText, 20); 
	m_ivf_appointmentTbl.AddField(_T("TYPEID"), dfText, 3); 
	m_ivf_appointmentTbl.AddField(_T("NOTE"), dfText, 254); 

}
void CIVFAppointmentDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndDate.SetEvent(WE_CHANGE, _OnDateChangeFnc);
	//m_wndDate.SetEvent(WE_SETFOCUS, _OnDateSetfocusFnc);
	//m_wndDate.SetEvent(WE_KILLFOCUS, _OnDateKillfocusFnc);
	m_wndDate.SetEvent(WE_CHECKVALUE, _OnDateCheckValueFnc);
	m_wndType.SetEvent(WE_SELENDOK, _OnTypeSelendokFnc);
	//m_wndType.SetEvent(WE_SETFOCUS, _OnTypeSetfocusFnc);
	//m_wndType.SetEvent(WE_KILLFOCUS, _OnTypeKillfocusFnc);
	m_wndType.SetEvent(WE_SELCHANGE, _OnTypeSelectChangeFnc);
	m_wndType.SetEvent(WE_LOADDATA, _OnTypeLoadDataFnc);
	//m_wndType.SetEvent(WE_ADDNEW, _OnTypeAddNewFnc);
	//m_wndNote.SetEvent(WE_CHANGE, _OnNoteChangeFnc);
	//m_wndNote.SetEvent(WE_SETFOCUS, _OnNoteSetfocusFnc);
	//m_wndNote.SetEvent(WE_KILLFOCUS, _OnNoteKillfocusFnc);
	m_wndNote.SetEvent(WE_CHECKVALUE, _OnNoteCheckValueFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_NONE);

}
void CIVFAppointmentDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndDate.GetDlgCtrlID(), m_szDate);
	DDX_TextEx(pDX, m_wndType.GetDlgCtrlID(), m_szTypeKey);
	DDX_Text(pDX, m_wndNote.GetDlgCtrlID(), m_szNote);

}
void CIVFAppointmentDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Date")] =  m_szDate;
	m_jData[_T("Type")] =  m_szTypeKey;
	m_jData[_T("Note")] =  m_szNote;
	}
	else
	{
			
	m_jData[_T("Date")].GetValue(m_szDate);
	m_jData[_T("Type")].GetValue(m_szTypeKey);
	m_jData[_T("Note")].GetValue(m_szNote);
	}

}
void CIVFAppointmentDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("APPOINTMENT_DATE"), m_szDate);
	rs.GetValue(_T("TYPEID"), m_szTypeKey);
	rs.GetValue(_T("NOTE"), m_szNote);

}
void CIVFAppointmentDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_ivf_appointmentTbl.SetValue(_T("APPOINTMENT_DATE"), m_szDate);
	m_ivf_appointmentTbl.SetValue(_T("TYPEID"), m_szTypeKey);
	m_ivf_appointmentTbl.SetValue(_T("NOTE"), m_szNote);

}
void CIVFAppointmentDialog::SetDefaultValues(){

	m_szDate.Empty();
	m_szTypeKey.Empty();
	m_szNote.Empty();

}
int CIVFAppointmentDialog::SetMode(int nMode){
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
/*void CIVFAppointmentDialog::OnDateChange(){
	
} */
/*void CIVFAppointmentDialog::OnDateSetfocus(){
	
} */
/*void CIVFAppointmentDialog::OnDateKillfocus(){
	
} */
int CIVFAppointmentDialog::OnDateCheckValue(){
	return 0;
} 
void CIVFAppointmentDialog::OnTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFAppointmentDialog::OnTypeSelendok(){
	 
}
/*void CIVFAppointmentDialog::OnTypeSetfocus(){
	
}*/
/*void CIVFAppointmentDialog::OnTypeKillfocus(){
	
}*/
long CIVFAppointmentDialog::OnTypeLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndType.IsSearchKey() && !m_szTypeKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szTypeKey
};
	m_wndType.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndType.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CIVFAppointmentDialog::OnTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CIVFAppointmentDialog::OnNoteChange(){
	
} */
/*void CIVFAppointmentDialog::OnNoteSetfocus(){
	
} */
/*void CIVFAppointmentDialog::OnNoteKillfocus(){
	
} */
int CIVFAppointmentDialog::OnNoteCheckValue(){
	return 0;
} 
void CIVFAppointmentDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFAppointmentDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CIVFAppointmentDialog::OnAddIVFAppointmentDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CIVFAppointmentDialog::OnEditIVFAppointmentDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CIVFAppointmentDialog::OnDeleteIVFAppointmentDialog(){
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
 		OnCancelIVFAppointmentDialog();
 	}
	return 0;
}
int CIVFAppointmentDialog::OnSaveIVFAppointmentDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
 		//szSQL = m_ivf_appointmentTbl.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
 		szWhere.Format(_T(" WHERE"));
 		//szSQL = m_ivf_appointmentTbl.GetUpdateSQL(_T("createdby,createddate"));
 		szSQL += szWhere;
 	}
 _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
 		//OnIVFAppointmentDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CIVFAppointmentDialog::OnCancelIVFAppointmentDialog(){
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
int CIVFAppointmentDialog::OnIVFAppointmentDialogListLoadData(){
	return 0;
}
