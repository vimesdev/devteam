#include "HMSBedTrackingChangeDialog.h"
#include "MainFrm.h"
/*static void _OnCurrentRoomChangeFnc(CWnd *pWnd){
	((CHMSBedTrackingChangeDialog *)pWnd)->OnCurrentRoomChange();
} */
/*static void _OnCurrentRoomSetfocusFnc(CWnd *pWnd){
	((CHMSBedTrackingChangeDialog *)pWnd)->OnCurrentRoomSetfocus();} */ 
/*static void _OnCurrentRoomKillfocusFnc(CWnd *pWnd){
	((CHMSBedTrackingChangeDialog *)pWnd)->OnCurrentRoomKillfocus();
} */
static int _OnCurrentRoomCheckValueFnc(CWnd *pWnd){
	return ((CHMSBedTrackingChangeDialog *)pWnd)->OnCurrentRoomCheckValue();
} 
/*static void _OnCurrentBedChangeFnc(CWnd *pWnd){
	((CHMSBedTrackingChangeDialog *)pWnd)->OnCurrentBedChange();
} */
/*static void _OnCurrentBedSetfocusFnc(CWnd *pWnd){
	((CHMSBedTrackingChangeDialog *)pWnd)->OnCurrentBedSetfocus();} */ 
/*static void _OnCurrentBedKillfocusFnc(CWnd *pWnd){
	((CHMSBedTrackingChangeDialog *)pWnd)->OnCurrentBedKillfocus();
} */
static int _OnCurrentBedCheckValueFnc(CWnd *pWnd){
	return ((CHMSBedTrackingChangeDialog *)pWnd)->OnCurrentBedCheckValue();
} 
/*static void _OnAdmitDateChangeFnc(CWnd *pWnd){
	((CHMSBedTrackingChangeDialog *)pWnd)->OnAdmitDateChange();
} */
/*static void _OnAdmitDateSetfocusFnc(CWnd *pWnd){
	((CHMSBedTrackingChangeDialog *)pWnd)->OnAdmitDateSetfocus();} */ 
/*static void _OnAdmitDateKillfocusFnc(CWnd *pWnd){
	((CHMSBedTrackingChangeDialog *)pWnd)->OnAdmitDateKillfocus();
} */
static int _OnAdmitDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSBedTrackingChangeDialog *)pWnd)->OnAdmitDateCheckValue();
} 
/*static void _OnEndDateChangeFnc(CWnd *pWnd){
	((CHMSBedTrackingChangeDialog *)pWnd)->OnEndDateChange();
} */
/*static void _OnEndDateSetfocusFnc(CWnd *pWnd){
	((CHMSBedTrackingChangeDialog *)pWnd)->OnEndDateSetfocus();} */ 
/*static void _OnEndDateKillfocusFnc(CWnd *pWnd){
	((CHMSBedTrackingChangeDialog *)pWnd)->OnEndDateKillfocus();
} */
static int _OnEndDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSBedTrackingChangeDialog *)pWnd)->OnEndDateCheckValue();
} 
/*static void _OnTreatNumberChangeFnc(CWnd *pWnd){
	((CHMSBedTrackingChangeDialog *)pWnd)->OnTreatNumberChange();
} */
/*static void _OnTreatNumberSetfocusFnc(CWnd *pWnd){
	((CHMSBedTrackingChangeDialog *)pWnd)->OnTreatNumberSetfocus();} */ 
/*static void _OnTreatNumberKillfocusFnc(CWnd *pWnd){
	((CHMSBedTrackingChangeDialog *)pWnd)->OnTreatNumberKillfocus();
} */
static int _OnTreatNumberCheckValueFnc(CWnd *pWnd){
	return ((CHMSBedTrackingChangeDialog *)pWnd)->OnTreatNumberCheckValue();
} 
static void _OnNewRoomSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSBedTrackingChangeDialog* )pWnd)->OnNewRoomSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnNewRoomSelendokFnc(CWnd *pWnd){
	((CHMSBedTrackingChangeDialog *)pWnd)->OnNewRoomSelendok();
}
/*static void _OnNewRoomSetfocusFnc(CWnd *pWnd){
	((CHMSBedTrackingChangeDialog *)pWnd)->OnNewRoomKillfocus();
}*/
/*static void _OnNewRoomKillfocusFnc(CWnd *pWnd){
	((CHMSBedTrackingChangeDialog *)pWnd)->OnNewRoomKillfocus();
}*/
static long _OnNewRoomLoadDataFnc(CWnd *pWnd){
	return ((CHMSBedTrackingChangeDialog *)pWnd)->OnNewRoomLoadData();
}
/*static void _OnNewRoomAddNewFnc(CWnd *pWnd){
	((CHMSBedTrackingChangeDialog *)pWnd)->OnNewRoomAddNew();
}*/
static void _OnNewBedSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSBedTrackingChangeDialog* )pWnd)->OnNewBedSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnNewBedSelendokFnc(CWnd *pWnd){
	((CHMSBedTrackingChangeDialog *)pWnd)->OnNewBedSelendok();
}
/*static void _OnNewBedSetfocusFnc(CWnd *pWnd){
	((CHMSBedTrackingChangeDialog *)pWnd)->OnNewBedKillfocus();
}*/
/*static void _OnNewBedKillfocusFnc(CWnd *pWnd){
	((CHMSBedTrackingChangeDialog *)pWnd)->OnNewBedKillfocus();
}*/
static long _OnNewBedLoadDataFnc(CWnd *pWnd){
	return ((CHMSBedTrackingChangeDialog *)pWnd)->OnNewBedLoadData();
}
/*static void _OnNewBedAddNewFnc(CWnd *pWnd){
	((CHMSBedTrackingChangeDialog *)pWnd)->OnNewBedAddNew();
}*/
static void _OnDoctorSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSBedTrackingChangeDialog* )pWnd)->OnDoctorSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDoctorSelendokFnc(CWnd *pWnd){
	((CHMSBedTrackingChangeDialog *)pWnd)->OnDoctorSelendok();
}
/*static void _OnDoctorSetfocusFnc(CWnd *pWnd){
	((CHMSBedTrackingChangeDialog *)pWnd)->OnDoctorKillfocus();
}*/
/*static void _OnDoctorKillfocusFnc(CWnd *pWnd){
	((CHMSBedTrackingChangeDialog *)pWnd)->OnDoctorKillfocus();
}*/
static long _OnDoctorLoadDataFnc(CWnd *pWnd){
	return ((CHMSBedTrackingChangeDialog *)pWnd)->OnDoctorLoadData();
}
/*static void _OnDoctorAddNewFnc(CWnd *pWnd){
	((CHMSBedTrackingChangeDialog *)pWnd)->OnDoctorAddNew();
}*/
static void _OnNurseSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSBedTrackingChangeDialog* )pWnd)->OnNurseSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnNurseSelendokFnc(CWnd *pWnd){
	((CHMSBedTrackingChangeDialog *)pWnd)->OnNurseSelendok();
}
/*static void _OnNurseSetfocusFnc(CWnd *pWnd){
	((CHMSBedTrackingChangeDialog *)pWnd)->OnNurseKillfocus();
}*/
/*static void _OnNurseKillfocusFnc(CWnd *pWnd){
	((CHMSBedTrackingChangeDialog *)pWnd)->OnNurseKillfocus();
}*/
static long _OnNurseLoadDataFnc(CWnd *pWnd){
	return ((CHMSBedTrackingChangeDialog *)pWnd)->OnNurseLoadData();
}
/*static void _OnNurseAddNewFnc(CWnd *pWnd){
	((CHMSBedTrackingChangeDialog *)pWnd)->OnNurseAddNew();
}*/
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSBedTrackingChangeDialog *pVw = (CHMSBedTrackingChangeDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSBedTrackingChangeDialog *pVw = (CHMSBedTrackingChangeDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSBedTrackingChangeDialogFnc(CWnd *pWnd){
	 return ((CHMSBedTrackingChangeDialog*)pWnd)->OnAddHMSBedTrackingChangeDialog();
} 
static int _OnEditHMSBedTrackingChangeDialogFnc(CWnd *pWnd){
	 return ((CHMSBedTrackingChangeDialog*)pWnd)->OnEditHMSBedTrackingChangeDialog();
} 
static int _OnDeleteHMSBedTrackingChangeDialogFnc(CWnd *pWnd){
	 return ((CHMSBedTrackingChangeDialog*)pWnd)->OnDeleteHMSBedTrackingChangeDialog();
} 
static int _OnSaveHMSBedTrackingChangeDialogFnc(CWnd *pWnd){
	 return ((CHMSBedTrackingChangeDialog*)pWnd)->OnSaveHMSBedTrackingChangeDialog();
} 
static int _OnCancelHMSBedTrackingChangeDialogFnc(CWnd *pWnd){
	 return ((CHMSBedTrackingChangeDialog*)pWnd)->OnCancelHMSBedTrackingChangeDialog();
} 
CHMSBedTrackingChangeDialog::CHMSBedTrackingChangeDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 345;
	m_nDlgHeight = 345;
	SetDefaultValues();
}
CHMSBedTrackingChangeDialog::~CHMSBedTrackingChangeDialog(){
}
void CHMSBedTrackingChangeDialog::OnCreateComponents(){
	m_wndCurrentRoomLabel.Create(this, _T("Current room"), 10, 30, 110, 55);
	m_wndBedInformation.Create(this, _T("Bed Information"), 5, 5, 340, 300);
	m_wndCurrentRoom.Create(this,115, 30, 335, 55); 
	m_wndCurrentBedLabel.Create(this, _T("Current bed"), 9, 60, 109, 85);
	m_wndCurrentBed.Create(this,114, 60, 334, 85); 
	m_wndAdmitDateLabel.Create(this, _T("Admit Date"), 10, 90, 110, 115);
	m_wndAdmitDate.Create(this,115, 90, 260, 115); 
	m_wndEndDateLabel.Create(this, _T("End Date"), 10, 120, 110, 145);
	m_wndEndDate.Create(this,115, 120, 260, 145); 
	m_wndTreatNumberLabel.Create(this, _T("Treat Number"), 10, 150, 110, 175);
	m_wndTreatNumber.Create(this,115, 150, 260, 175); 
	m_wndNewRoomLabel.Create(this, _T("New room"), 10, 180, 110, 205);
	m_wndNewRoom.Create(this,115, 180, 335, 205); 
	m_wndNewBedLabel.Create(this, _T("New bed"), 10, 210, 110, 235);
	m_wndNewBed.Create(this,115, 210, 335, 235); 
	m_wndDoctorLabel.Create(this, _T("Doctor"), 10, 240, 110, 265);
	m_wndDoctor.Create(this,115, 240, 335, 265); 
	m_wndNurseLabel.Create(this, _T("Nurse"), 10, 270, 110, 295);
	m_wndNurse.Create(this,115, 270, 335, 295); 
	m_wndSave.Create(this, _T("&Save"), 175, 305, 255, 330);
	m_wndClose.Create(this, _T("&Close"), 260, 305, 340, 330);

}
void CHMSBedTrackingChangeDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndCurrentRoom.SetLimitText(35);
	m_wndCurrentRoom.SetCheckValue(true);
	m_wndCurrentBed.SetLimitText(35);
	m_wndCurrentBed.SetCheckValue(true);
	m_wndAdmitDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndAdmitDate.SetCheckValue(true);
	m_wndEndDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndEndDate.SetCheckValue(true);
	m_wndTreatNumber.SetLimitText(16);
	m_wndTreatNumber.SetCheckValue(true);
	m_wndNewRoom.SetCheckValue(true);
	m_wndNewRoom.LimitText(35);
	m_wndNewBed.SetCheckValue(true);
	m_wndNewBed.LimitText(35);
	m_wndDoctor.SetCheckValue(true);
	m_wndDoctor.LimitText(35);
	m_wndNurse.SetCheckValue(true);
	m_wndNurse.LimitText(35);


	m_wndNewRoom.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndNewRoom.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndNewBed.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndNewBed.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndDoctor.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDoctor.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndNurse.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndNurse.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CHMSBedTrackingChangeDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndCurrentRoom.SetEvent(WE_CHANGE, _OnCurrentRoomChangeFnc);
	//m_wndCurrentRoom.SetEvent(WE_SETFOCUS, _OnCurrentRoomSetfocusFnc);
	//m_wndCurrentRoom.SetEvent(WE_KILLFOCUS, _OnCurrentRoomKillfocusFnc);
	m_wndCurrentRoom.SetEvent(WE_CHECKVALUE, _OnCurrentRoomCheckValueFnc);
	//m_wndCurrentBed.SetEvent(WE_CHANGE, _OnCurrentBedChangeFnc);
	//m_wndCurrentBed.SetEvent(WE_SETFOCUS, _OnCurrentBedSetfocusFnc);
	//m_wndCurrentBed.SetEvent(WE_KILLFOCUS, _OnCurrentBedKillfocusFnc);
	m_wndCurrentBed.SetEvent(WE_CHECKVALUE, _OnCurrentBedCheckValueFnc);
	//m_wndAdmitDate.SetEvent(WE_CHANGE, _OnAdmitDateChangeFnc);
	//m_wndAdmitDate.SetEvent(WE_SETFOCUS, _OnAdmitDateSetfocusFnc);
	//m_wndAdmitDate.SetEvent(WE_KILLFOCUS, _OnAdmitDateKillfocusFnc);
	m_wndAdmitDate.SetEvent(WE_CHECKVALUE, _OnAdmitDateCheckValueFnc);
	//m_wndEndDate.SetEvent(WE_CHANGE, _OnEndDateChangeFnc);
	//m_wndEndDate.SetEvent(WE_SETFOCUS, _OnEndDateSetfocusFnc);
	//m_wndEndDate.SetEvent(WE_KILLFOCUS, _OnEndDateKillfocusFnc);
	m_wndEndDate.SetEvent(WE_CHECKVALUE, _OnEndDateCheckValueFnc);
	//m_wndTreatNumber.SetEvent(WE_CHANGE, _OnTreatNumberChangeFnc);
	//m_wndTreatNumber.SetEvent(WE_SETFOCUS, _OnTreatNumberSetfocusFnc);
	//m_wndTreatNumber.SetEvent(WE_KILLFOCUS, _OnTreatNumberKillfocusFnc);
	m_wndTreatNumber.SetEvent(WE_CHECKVALUE, _OnTreatNumberCheckValueFnc);
	m_wndNewRoom.SetEvent(WE_SELENDOK, _OnNewRoomSelendokFnc);
	//m_wndNewRoom.SetEvent(WE_SETFOCUS, _OnNewRoomSetfocusFnc);
	//m_wndNewRoom.SetEvent(WE_KILLFOCUS, _OnNewRoomKillfocusFnc);
	m_wndNewRoom.SetEvent(WE_SELCHANGE, _OnNewRoomSelectChangeFnc);
	m_wndNewRoom.SetEvent(WE_LOADDATA, _OnNewRoomLoadDataFnc);
	//m_wndNewRoom.SetEvent(WE_ADDNEW, _OnNewRoomAddNewFnc);
	m_wndNewBed.SetEvent(WE_SELENDOK, _OnNewBedSelendokFnc);
	//m_wndNewBed.SetEvent(WE_SETFOCUS, _OnNewBedSetfocusFnc);
	//m_wndNewBed.SetEvent(WE_KILLFOCUS, _OnNewBedKillfocusFnc);
	m_wndNewBed.SetEvent(WE_SELCHANGE, _OnNewBedSelectChangeFnc);
	m_wndNewBed.SetEvent(WE_LOADDATA, _OnNewBedLoadDataFnc);
	//m_wndNewBed.SetEvent(WE_ADDNEW, _OnNewBedAddNewFnc);
	m_wndDoctor.SetEvent(WE_SELENDOK, _OnDoctorSelendokFnc);
	//m_wndDoctor.SetEvent(WE_SETFOCUS, _OnDoctorSetfocusFnc);
	//m_wndDoctor.SetEvent(WE_KILLFOCUS, _OnDoctorKillfocusFnc);
	m_wndDoctor.SetEvent(WE_SELCHANGE, _OnDoctorSelectChangeFnc);
	m_wndDoctor.SetEvent(WE_LOADDATA, _OnDoctorLoadDataFnc);
	//m_wndDoctor.SetEvent(WE_ADDNEW, _OnDoctorAddNewFnc);
	m_wndNurse.SetEvent(WE_SELENDOK, _OnNurseSelendokFnc);
	//m_wndNurse.SetEvent(WE_SETFOCUS, _OnNurseSetfocusFnc);
	//m_wndNurse.SetEvent(WE_KILLFOCUS, _OnNurseKillfocusFnc);
	m_wndNurse.SetEvent(WE_SELCHANGE, _OnNurseSelectChangeFnc);
	m_wndNurse.SetEvent(WE_LOADDATA, _OnNurseLoadDataFnc);
	//m_wndNurse.SetEvent(WE_ADDNEW, _OnNurseAddNewFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_NONE);

}
void CHMSBedTrackingChangeDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndCurrentRoom.GetDlgCtrlID(), m_szCurrentRoom);
	DDX_Text(pDX, m_wndCurrentBed.GetDlgCtrlID(), m_szCurrentBed);
	DDX_TextEx(pDX, m_wndAdmitDate.GetDlgCtrlID(), m_szAdmitDate);
	DDX_TextEx(pDX, m_wndEndDate.GetDlgCtrlID(), m_szEndDate);
	DDX_Text(pDX, m_wndTreatNumber.GetDlgCtrlID(), m_nTreatNumber);
	DDX_TextEx(pDX, m_wndNewRoom.GetDlgCtrlID(), m_szNewRoomKey);
	DDX_TextEx(pDX, m_wndNewBed.GetDlgCtrlID(), m_szNewBedKey);
	DDX_TextEx(pDX, m_wndDoctor.GetDlgCtrlID(), m_szDoctorKey);
	DDX_TextEx(pDX, m_wndNurse.GetDlgCtrlID(), m_szNurseKey);

}
void CHMSBedTrackingChangeDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSBedTrackingChangeDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSBedTrackingChangeDialog::SetDefaultValues(){

	m_szCurrentRoom.Empty();
	m_szCurrentBed.Empty();
	m_szAdmitDate.Empty();
	m_szEndDate.Empty();
	m_nTreatNumber=0;
	m_szNewRoomKey.Empty();
	m_szNewBedKey.Empty();
	m_szDoctorKey.Empty();
	m_szNurseKey.Empty();

}
int CHMSBedTrackingChangeDialog::SetMode(int nMode){
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
/*void CHMSBedTrackingChangeDialog::OnCurrentRoomChange(){
	
} */
/*void CHMSBedTrackingChangeDialog::OnCurrentRoomSetfocus(){
	
} */
/*void CHMSBedTrackingChangeDialog::OnCurrentRoomKillfocus(){
	
} */
int CHMSBedTrackingChangeDialog::OnCurrentRoomCheckValue(){
	return 0;
} 
/*void CHMSBedTrackingChangeDialog::OnCurrentBedChange(){
	
} */
/*void CHMSBedTrackingChangeDialog::OnCurrentBedSetfocus(){
	
} */
/*void CHMSBedTrackingChangeDialog::OnCurrentBedKillfocus(){
	
} */
int CHMSBedTrackingChangeDialog::OnCurrentBedCheckValue(){
	return 0;
} 
/*void CHMSBedTrackingChangeDialog::OnAdmitDateChange(){
	
} */
/*void CHMSBedTrackingChangeDialog::OnAdmitDateSetfocus(){
	
} */
/*void CHMSBedTrackingChangeDialog::OnAdmitDateKillfocus(){
	
} */
int CHMSBedTrackingChangeDialog::OnAdmitDateCheckValue(){
	return 0;
} 
/*void CHMSBedTrackingChangeDialog::OnEndDateChange(){
	
} */
/*void CHMSBedTrackingChangeDialog::OnEndDateSetfocus(){
	
} */
/*void CHMSBedTrackingChangeDialog::OnEndDateKillfocus(){
	
} */
int CHMSBedTrackingChangeDialog::OnEndDateCheckValue(){
	return 0;
} 
/*void CHMSBedTrackingChangeDialog::OnTreatNumberChange(){
	
} */
/*void CHMSBedTrackingChangeDialog::OnTreatNumberSetfocus(){
	
} */
/*void CHMSBedTrackingChangeDialog::OnTreatNumberKillfocus(){
	
} */
int CHMSBedTrackingChangeDialog::OnTreatNumberCheckValue(){
	return 0;
} 
void CHMSBedTrackingChangeDialog::OnNewRoomSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSBedTrackingChangeDialog::OnNewRoomSelendok(){
	 
}
/*void CHMSBedTrackingChangeDialog::OnNewRoomSetfocus(){
	
}*/
/*void CHMSBedTrackingChangeDialog::OnNewRoomKillfocus(){
	
}*/
long CHMSBedTrackingChangeDialog::OnNewRoomLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndNewRoom.IsSearchKey() && !m_szNewRoomKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szNewRoomKey
};
	m_wndNewRoom.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndNewRoom.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSBedTrackingChangeDialog::OnNewRoomAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSBedTrackingChangeDialog::OnNewBedSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSBedTrackingChangeDialog::OnNewBedSelendok(){
	 
}
/*void CHMSBedTrackingChangeDialog::OnNewBedSetfocus(){
	
}*/
/*void CHMSBedTrackingChangeDialog::OnNewBedKillfocus(){
	
}*/
long CHMSBedTrackingChangeDialog::OnNewBedLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndNewBed.IsSearchKey() && !m_szNewBedKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szNewBedKey
};
	m_wndNewBed.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndNewBed.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSBedTrackingChangeDialog::OnNewBedAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSBedTrackingChangeDialog::OnDoctorSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSBedTrackingChangeDialog::OnDoctorSelendok(){
	 
}
/*void CHMSBedTrackingChangeDialog::OnDoctorSetfocus(){
	
}*/
/*void CHMSBedTrackingChangeDialog::OnDoctorKillfocus(){
	
}*/
long CHMSBedTrackingChangeDialog::OnDoctorLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDoctor.IsSearchKey() && !m_szDoctorKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szDoctorKey
};
	m_wndDoctor.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDoctor.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSBedTrackingChangeDialog::OnDoctorAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSBedTrackingChangeDialog::OnNurseSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSBedTrackingChangeDialog::OnNurseSelendok(){
	 
}
/*void CHMSBedTrackingChangeDialog::OnNurseSetfocus(){
	
}*/
/*void CHMSBedTrackingChangeDialog::OnNurseKillfocus(){
	
}*/
long CHMSBedTrackingChangeDialog::OnNurseLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndNurse.IsSearchKey() && !m_szNurseKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szNurseKey
};
	m_wndNurse.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndNurse.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSBedTrackingChangeDialog::OnNurseAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSBedTrackingChangeDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSBedTrackingChangeDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSBedTrackingChangeDialog::OnAddHMSBedTrackingChangeDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSBedTrackingChangeDialog::OnEditHMSBedTrackingChangeDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSBedTrackingChangeDialog::OnDeleteHMSBedTrackingChangeDialog(){
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
 		OnCancelHMSBedTrackingChangeDialog();
 	}
	return 0;
}
int CHMSBedTrackingChangeDialog::OnSaveHMSBedTrackingChangeDialog(){
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
 		//OnHMSBedTrackingChangeDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSBedTrackingChangeDialog::OnCancelHMSBedTrackingChangeDialog(){
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
int CHMSBedTrackingChangeDialog::OnHMSBedTrackingChangeDialogListLoadData(){
	return 0;
}
