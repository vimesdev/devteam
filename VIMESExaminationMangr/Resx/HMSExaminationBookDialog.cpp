#include "ExaminationBookDialog.h"
#include "MainFrm.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CExaminationBookDialog *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CExaminationBookDialog *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CExaminationBookDialog *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CExaminationBookDialog *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CExaminationBookDialog *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CExaminationBookDialog *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CExaminationBookDialog *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CExaminationBookDialog *)pWnd)->OnToDateCheckValue();
} 
/*static void _OnFromNumChangeFnc(CWnd *pWnd){
	((CExaminationBookDialog *)pWnd)->OnFromNumChange();
} */
/*static void _OnFromNumSetfocusFnc(CWnd *pWnd){
	((CExaminationBookDialog *)pWnd)->OnFromNumSetfocus();} */ 
/*static void _OnFromNumKillfocusFnc(CWnd *pWnd){
	((CExaminationBookDialog *)pWnd)->OnFromNumKillfocus();
} */
static int _OnFromNumCheckValueFnc(CWnd *pWnd){
	return ((CExaminationBookDialog *)pWnd)->OnFromNumCheckValue();
} 
/*static void _OnToNumChangeFnc(CWnd *pWnd){
	((CExaminationBookDialog *)pWnd)->OnToNumChange();
} */
/*static void _OnToNumSetfocusFnc(CWnd *pWnd){
	((CExaminationBookDialog *)pWnd)->OnToNumSetfocus();} */ 
/*static void _OnToNumKillfocusFnc(CWnd *pWnd){
	((CExaminationBookDialog *)pWnd)->OnToNumKillfocus();
} */
static int _OnToNumCheckValueFnc(CWnd *pWnd){
	return ((CExaminationBookDialog *)pWnd)->OnToNumCheckValue();
} 
static void _OnRoomSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CExaminationBookDialog* )pWnd)->OnRoomSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnRoomSelendokFnc(CWnd *pWnd){
	((CExaminationBookDialog *)pWnd)->OnRoomSelendok();
}
/*static void _OnRoomSetfocusFnc(CWnd *pWnd){
	((CExaminationBookDialog *)pWnd)->OnRoomKillfocus();
}*/
/*static void _OnRoomKillfocusFnc(CWnd *pWnd){
	((CExaminationBookDialog *)pWnd)->OnRoomKillfocus();
}*/
static long _OnRoomLoadDataFnc(CWnd *pWnd){
	return ((CExaminationBookDialog *)pWnd)->OnRoomLoadData();
}
/*static void _OnRoomAddNewFnc(CWnd *pWnd){
	((CExaminationBookDialog *)pWnd)->OnRoomAddNew();
}*/
static void _OnProvillSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CExaminationBookDialog* )pWnd)->OnProvillSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnProvillSelendokFnc(CWnd *pWnd){
	((CExaminationBookDialog *)pWnd)->OnProvillSelendok();
}
/*static void _OnProvillSetfocusFnc(CWnd *pWnd){
	((CExaminationBookDialog *)pWnd)->OnProvillKillfocus();
}*/
/*static void _OnProvillKillfocusFnc(CWnd *pWnd){
	((CExaminationBookDialog *)pWnd)->OnProvillKillfocus();
}*/
static long _OnProvillLoadDataFnc(CWnd *pWnd){
	return ((CExaminationBookDialog *)pWnd)->OnProvillLoadData();
}
/*static void _OnProvillAddNewFnc(CWnd *pWnd){
	((CExaminationBookDialog *)pWnd)->OnProvillAddNew();
}*/
static void _OnDistrictSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CExaminationBookDialog* )pWnd)->OnDistrictSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDistrictSelendokFnc(CWnd *pWnd){
	((CExaminationBookDialog *)pWnd)->OnDistrictSelendok();
}
/*static void _OnDistrictSetfocusFnc(CWnd *pWnd){
	((CExaminationBookDialog *)pWnd)->OnDistrictKillfocus();
}*/
/*static void _OnDistrictKillfocusFnc(CWnd *pWnd){
	((CExaminationBookDialog *)pWnd)->OnDistrictKillfocus();
}*/
static long _OnDistrictLoadDataFnc(CWnd *pWnd){
	return ((CExaminationBookDialog *)pWnd)->OnDistrictLoadData();
}
/*static void _OnDistrictAddNewFnc(CWnd *pWnd){
	((CExaminationBookDialog *)pWnd)->OnDistrictAddNew();
}*/
static void _OnVillageSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CExaminationBookDialog* )pWnd)->OnVillageSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnVillageSelendokFnc(CWnd *pWnd){
	((CExaminationBookDialog *)pWnd)->OnVillageSelendok();
}
/*static void _OnVillageSetfocusFnc(CWnd *pWnd){
	((CExaminationBookDialog *)pWnd)->OnVillageKillfocus();
}*/
/*static void _OnVillageKillfocusFnc(CWnd *pWnd){
	((CExaminationBookDialog *)pWnd)->OnVillageKillfocus();
}*/
static long _OnVillageLoadDataFnc(CWnd *pWnd){
	return ((CExaminationBookDialog *)pWnd)->OnVillageLoadData();
}
/*static void _OnVillageAddNewFnc(CWnd *pWnd){
	((CExaminationBookDialog *)pWnd)->OnVillageAddNew();
}*/
static void _OnEthnicSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CExaminationBookDialog* )pWnd)->OnEthnicSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnEthnicSelendokFnc(CWnd *pWnd){
	((CExaminationBookDialog *)pWnd)->OnEthnicSelendok();
}
/*static void _OnEthnicSetfocusFnc(CWnd *pWnd){
	((CExaminationBookDialog *)pWnd)->OnEthnicKillfocus();
}*/
/*static void _OnEthnicKillfocusFnc(CWnd *pWnd){
	((CExaminationBookDialog *)pWnd)->OnEthnicKillfocus();
}*/
static long _OnEthnicLoadDataFnc(CWnd *pWnd){
	return ((CExaminationBookDialog *)pWnd)->OnEthnicLoadData();
}
/*static void _OnEthnicAddNewFnc(CWnd *pWnd){
	((CExaminationBookDialog *)pWnd)->OnEthnicAddNew();
}*/
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	CExaminationBookDialog *pVw = (CExaminationBookDialog *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CExaminationBookDialog *pVw = (CExaminationBookDialog *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CExaminationBookDialog *pVw = (CExaminationBookDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddExaminationBookDialogFnc(CWnd *pWnd){
	 return ((CExaminationBookDialog*)pWnd)->OnAddExaminationBookDialog();
} 
static int _OnEditExaminationBookDialogFnc(CWnd *pWnd){
	 return ((CExaminationBookDialog*)pWnd)->OnEditExaminationBookDialog();
} 
static int _OnDeleteExaminationBookDialogFnc(CWnd *pWnd){
	 return ((CExaminationBookDialog*)pWnd)->OnDeleteExaminationBookDialog();
} 
static int _OnSaveExaminationBookDialogFnc(CWnd *pWnd){
	 return ((CExaminationBookDialog*)pWnd)->OnSaveExaminationBookDialog();
} 
static int _OnCancelExaminationBookDialogFnc(CWnd *pWnd){
	 return ((CExaminationBookDialog*)pWnd)->OnCancelExaminationBookDialog();
} 
CExaminationBookDialog::CExaminationBookDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 467;
	m_nDlgHeight = 296;
	SetDefaultValues();
}
CExaminationBookDialog::~CExaminationBookDialog(){
}
void CExaminationBookDialog::OnCreateComponents(){
	m_wndReportParameter.Create(this, _T("Report Parameters"), 5, 5, 360, 240);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 180, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 185, 30, 265, 55);
	m_wndToDate.Create(this,270, 30, 355, 55); 
	m_wndFromNumLabel.Create(this, _T("From Num"), 10, 60, 90, 85);
	m_wndFromNum.Create(this,95, 60, 180, 85); 
	m_wndToNumLabel.Create(this, _T("To Num"), 185, 60, 265, 85);
	m_wndToNum.Create(this,270, 60, 355, 85); 
	m_wndRoomLabel.Create(this, _T("Room"), 10, 90, 90, 115);
	m_wndRoom.Create(this,95, 90, 355, 115); 
	m_wndProvillLabel.Create(this, _T("Provill"), 10, 120, 90, 145);
	m_wndProvill.Create(this,95, 120, 355, 145); 
	m_wndDistrictLabel.Create(this, _T("District"), 10, 150, 90, 175);
	m_wndDistrict.Create(this,95, 150, 355, 175); 
	m_wndVillageLabel.Create(this, _T("Village"), 10, 180, 90, 205);
	m_wndVillage.Create(this,95, 180, 355, 205); 
	m_wndEthnicLabel.Create(this, _T("Ethnic"), 10, 210, 90, 235);
	m_wndEthnic.Create(this,95, 210, 355, 235); 
	m_wndPrintPreview.Create(this, _T("Print Pre&view"), 110, 245, 190, 270);
	m_wndPrint.Create(this, _T("&Print"), 195, 245, 275, 270);
	m_wndClose.Create(this, _T("&Close"), 280, 245, 360, 270);

}
void CExaminationBookDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
	m_wndFromNum.SetLimitText(35);
	m_wndFromNum.SetCheckValue(true);
	m_wndToNum.SetLimitText(35);
	m_wndToNum.SetCheckValue(true);
	m_wndRoom.SetCheckValue(true);
	m_wndRoom.LimitText(35);
	m_wndProvill.SetCheckValue(true);
	m_wndProvill.LimitText(35);
	m_wndDistrict.SetCheckValue(true);
	m_wndDistrict.LimitText(35);
	m_wndVillage.SetCheckValue(true);
	m_wndVillage.LimitText(35);
	m_wndEthnic.SetCheckValue(true);
	m_wndEthnic.LimitText(35);


	m_wndRoom.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndRoom.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndProvill.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndProvill.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndDistrict.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndDistrict.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndVillage.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndVillage.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndEthnic.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndEthnic.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);

}
void CExaminationBookDialog::OnSetWindowEvents(){
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	//m_wndFromNum.SetEvent(WE_CHANGE, _OnFromNumChangeFnc);
	//m_wndFromNum.SetEvent(WE_SETFOCUS, _OnFromNumSetfocusFnc);
	//m_wndFromNum.SetEvent(WE_KILLFOCUS, _OnFromNumKillfocusFnc);
	m_wndFromNum.SetEvent(WE_CHECKVALUE, _OnFromNumCheckValueFnc);
	//m_wndToNum.SetEvent(WE_CHANGE, _OnToNumChangeFnc);
	//m_wndToNum.SetEvent(WE_SETFOCUS, _OnToNumSetfocusFnc);
	//m_wndToNum.SetEvent(WE_KILLFOCUS, _OnToNumKillfocusFnc);
	m_wndToNum.SetEvent(WE_CHECKVALUE, _OnToNumCheckValueFnc);
	m_wndRoom.SetEvent(WE_SELENDOK, _OnRoomSelendokFnc);
	//m_wndRoom.SetEvent(WE_SETFOCUS, _OnRoomSetfocusFnc);
	//m_wndRoom.SetEvent(WE_KILLFOCUS, _OnRoomKillfocusFnc);
	m_wndRoom.SetEvent(WE_SELCHANGE, _OnRoomSelectChangeFnc);
	m_wndRoom.SetEvent(WE_LOADDATA, _OnRoomLoadDataFnc);
	//m_wndRoom.SetEvent(WE_ADDNEW, _OnRoomAddNewFnc);
	m_wndProvill.SetEvent(WE_SELENDOK, _OnProvillSelendokFnc);
	//m_wndProvill.SetEvent(WE_SETFOCUS, _OnProvillSetfocusFnc);
	//m_wndProvill.SetEvent(WE_KILLFOCUS, _OnProvillKillfocusFnc);
	m_wndProvill.SetEvent(WE_SELCHANGE, _OnProvillSelectChangeFnc);
	m_wndProvill.SetEvent(WE_LOADDATA, _OnProvillLoadDataFnc);
	//m_wndProvill.SetEvent(WE_ADDNEW, _OnProvillAddNewFnc);
	m_wndDistrict.SetEvent(WE_SELENDOK, _OnDistrictSelendokFnc);
	//m_wndDistrict.SetEvent(WE_SETFOCUS, _OnDistrictSetfocusFnc);
	//m_wndDistrict.SetEvent(WE_KILLFOCUS, _OnDistrictKillfocusFnc);
	m_wndDistrict.SetEvent(WE_SELCHANGE, _OnDistrictSelectChangeFnc);
	m_wndDistrict.SetEvent(WE_LOADDATA, _OnDistrictLoadDataFnc);
	//m_wndDistrict.SetEvent(WE_ADDNEW, _OnDistrictAddNewFnc);
	m_wndVillage.SetEvent(WE_SELENDOK, _OnVillageSelendokFnc);
	//m_wndVillage.SetEvent(WE_SETFOCUS, _OnVillageSetfocusFnc);
	//m_wndVillage.SetEvent(WE_KILLFOCUS, _OnVillageKillfocusFnc);
	m_wndVillage.SetEvent(WE_SELCHANGE, _OnVillageSelectChangeFnc);
	m_wndVillage.SetEvent(WE_LOADDATA, _OnVillageLoadDataFnc);
	//m_wndVillage.SetEvent(WE_ADDNEW, _OnVillageAddNewFnc);
	m_wndEthnic.SetEvent(WE_SELENDOK, _OnEthnicSelendokFnc);
	//m_wndEthnic.SetEvent(WE_SETFOCUS, _OnEthnicSetfocusFnc);
	//m_wndEthnic.SetEvent(WE_KILLFOCUS, _OnEthnicKillfocusFnc);
	m_wndEthnic.SetEvent(WE_SELCHANGE, _OnEthnicSelectChangeFnc);
	m_wndEthnic.SetEvent(WE_LOADDATA, _OnEthnicLoadDataFnc);
	//m_wndEthnic.SetEvent(WE_ADDNEW, _OnEthnicAddNewFnc);
	m_wndPrintPreview.SetEvent(WE_CLICK, _OnPrintPreviewSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);

}
void CExaminationBookDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Text(pDX, m_wndFromNum.GetDlgCtrlID(), m_szFromNum);
	DDX_Text(pDX, m_wndToNum.GetDlgCtrlID(), m_szToNum);
	DDX_TextEx(pDX, m_wndRoom.GetDlgCtrlID(), m_szRoomKey);
	DDX_TextEx(pDX, m_wndProvill.GetDlgCtrlID(), m_szProvillKey);
	DDX_TextEx(pDX, m_wndDistrict.GetDlgCtrlID(), m_szDistrictKey);
	DDX_TextEx(pDX, m_wndVillage.GetDlgCtrlID(), m_szVillageKey);
	DDX_TextEx(pDX, m_wndEthnic.GetDlgCtrlID(), m_szEthnicKey);

}
void CExaminationBookDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CExaminationBookDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CExaminationBookDialog::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szFromNum.Empty();
	m_szToNum.Empty();
	m_szRoomKey.Empty();
	m_szProvillKey.Empty();
	m_szDistrictKey.Empty();
	m_szVillageKey.Empty();
	m_szEthnicKey.Empty();

}
int CExaminationBookDialog::SetMode(int nMode){
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
/*void CExaminationBookDialog::OnFromDateChange(){
	
} */
/*void CExaminationBookDialog::OnFromDateSetfocus(){
	
} */
/*void CExaminationBookDialog::OnFromDateKillfocus(){
	
} */
int CExaminationBookDialog::OnFromDateCheckValue(){
	return 0;
} 
/*void CExaminationBookDialog::OnToDateChange(){
	
} */
/*void CExaminationBookDialog::OnToDateSetfocus(){
	
} */
/*void CExaminationBookDialog::OnToDateKillfocus(){
	
} */
int CExaminationBookDialog::OnToDateCheckValue(){
	return 0;
} 
/*void CExaminationBookDialog::OnFromNumChange(){
	
} */
/*void CExaminationBookDialog::OnFromNumSetfocus(){
	
} */
/*void CExaminationBookDialog::OnFromNumKillfocus(){
	
} */
int CExaminationBookDialog::OnFromNumCheckValue(){
	return 0;
} 
/*void CExaminationBookDialog::OnToNumChange(){
	
} */
/*void CExaminationBookDialog::OnToNumSetfocus(){
	
} */
/*void CExaminationBookDialog::OnToNumKillfocus(){
	
} */
int CExaminationBookDialog::OnToNumCheckValue(){
	return 0;
} 
void CExaminationBookDialog::OnRoomSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CExaminationBookDialog::OnRoomSelendok(){
	 
}
/*void CExaminationBookDialog::OnRoomSetfocus(){
	
}*/
/*void CExaminationBookDialog::OnRoomKillfocus(){
	
}*/
long CExaminationBookDialog::OnRoomLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndRoom.IsSearchKey() && !m_szRoomKey.IsEmpty()){
	};
	m_wndRoom.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndRoom.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CExaminationBookDialog::OnRoomAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CExaminationBookDialog::OnProvillSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CExaminationBookDialog::OnProvillSelendok(){
	 
}
/*void CExaminationBookDialog::OnProvillSetfocus(){
	
}*/
/*void CExaminationBookDialog::OnProvillKillfocus(){
	
}*/
long CExaminationBookDialog::OnProvillLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndProvill.IsSearchKey() && !m_szProvillKey.IsEmpty()){
	};
	m_wndProvill.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndProvill.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CExaminationBookDialog::OnProvillAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CExaminationBookDialog::OnDistrictSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CExaminationBookDialog::OnDistrictSelendok(){
	 
}
/*void CExaminationBookDialog::OnDistrictSetfocus(){
	
}*/
/*void CExaminationBookDialog::OnDistrictKillfocus(){
	
}*/
long CExaminationBookDialog::OnDistrictLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDistrict.IsSearchKey() && !m_szDistrictKey.IsEmpty()){
	};
	m_wndDistrict.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDistrict.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CExaminationBookDialog::OnDistrictAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CExaminationBookDialog::OnVillageSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CExaminationBookDialog::OnVillageSelendok(){
	 
}
/*void CExaminationBookDialog::OnVillageSetfocus(){
	
}*/
/*void CExaminationBookDialog::OnVillageKillfocus(){
	
}*/
long CExaminationBookDialog::OnVillageLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndVillage.IsSearchKey() && !m_szVillageKey.IsEmpty()){
	};
	m_wndVillage.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndVillage.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CExaminationBookDialog::OnVillageAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CExaminationBookDialog::OnEthnicSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CExaminationBookDialog::OnEthnicSelendok(){
	 
}
/*void CExaminationBookDialog::OnEthnicSetfocus(){
	
}*/
/*void CExaminationBookDialog::OnEthnicKillfocus(){
	
}*/
long CExaminationBookDialog::OnEthnicLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndEthnic.IsSearchKey() && !m_szEthnicKey.IsEmpty()){
	};
	m_wndEthnic.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndEthnic.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CExaminationBookDialog::OnEthnicAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CExaminationBookDialog::OnPrintPreviewSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CExaminationBookDialog::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CExaminationBookDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CExaminationBookDialog::OnAddExaminationBookDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CExaminationBookDialog::OnEditExaminationBookDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CExaminationBookDialog::OnDeleteExaminationBookDialog(){
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
 		OnCancelExaminationBookDialog(); 
 	}
	return 0;
}
int CExaminationBookDialog::OnSaveExaminationBookDialog(){
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
 		//OnExaminationBookDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CExaminationBookDialog::OnCancelExaminationBookDialog(){
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
int CExaminationBookDialog::OnExaminationBookDialogListLoadData(){
	return 0;
}



void CHMSExaminationBookReport::OnPrint(bool bPreview)
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szFromDateLabel, szToDateLabel, szWhere;
	CString szDate, szSysDate;
	szSysDate = pMF->GetSysDate(); 
	UpdateData(true);
	CReport rpt; 
	szSQL.Format(_T(" SELECT 	hd_docno as docno,") \
		_T(" trim(hp_surname||' '||hp_midname||' '||hp_firstname) as patientname,") \
		_T(" hp_sex as sex,") \
		_T(" hms_getage(date(hd_admitdate), hp_birthdate) as age,") \
		_T(" hms_getaddress(hp_provid,hp_distid, hp_villid) as address,") \
		_T(" hd_cardno as cardno,") \
		_T(" hd_transplace as transferplace,") \
		_T(" hd_transdiagn as transferdiagnostic,") \
		_T(" hd_diagnostic as diagnostic,") \
		_T(" case when hd_suggestion ='A' and hd_status='T' and hcr_status in('I','T') then 'X' else '' end as admission,") \
		_T(" case when hd_suggestion ='T' and hd_status='T'  and (select hhtd_line from hms_htdoc where hhtd_docno=hd_docno)<> 2 then 'X' else '' end as hilevel,") \
		_T(" case when hd_suggestion ='T' and hd_status='T'  and (select hhtd_line from hms_htdoc where hhtd_docno=hd_docno)=2 then 'X' else '' end as lowlevel,") \
		_T(" case when hd_suggestion ='A' and hd_outpatient='Y' and hcr_status in('I','T') then 'X' ") \
		_T("	when hd_suggestion ='O' and hd_outpatient='Y' then 'X' else '' end as outpatient,") \
		_T(" case when hd_suggestion ='D' and hd_status='T' then 'X' else '' end as discharge,") \
		_T(" hd_doctor as doctor,") \
		_T(" case when ho_type in('S','R') then 'X' else '' end as serviceobj,") \
		_T(" case when ho_type in('I','C') then 'X' else '' end as insuranceobj,") \
		_T(" case when ho_type in('D','Z') then 'X' else '' end as discountobj,") \
		_T(" case when hd_emergency ='Y' then 'X' else '' end as emergency") \
		_T(" FROM hms_patient ") \
		_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
		_T(" LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno) ") \
		_T(" LEFT JOIN hms_object ON(hd_object=ho_id)") \
		_T(" WHERE hd_status = 'T' and date(hd_enddate) BETWEEN date('%s') and date('%s') ") \
		_T(" ORDER BY docno "), m_szFromDate, m_szToDate) ;
	_fmsg(_T("%s"), szSQL);
	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
	{
		ShowMessageBox(_T("No data"));
		return;
	}
	if(!rpt.Init(_T("Reports/HMS/HE_EXAMINATIONBOOK.RPT")) )
	{
		ShowMessageBox(_T("Cannot open file report."));
		return ;
	}
	tmpStr = rpt.GetReportHeader()->GetValue(_T("ReportDate"));
	szDate.Format(tmpStr, CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy),
		CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), szDate);
	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), pMF->m_CompanyInfo.sc_pname);
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), pMF->m_CompanyInfo.sc_name);

	int i,nIndex = 1 ;
	long docno=0, nTotalPatient=0;
	long c[30];
	for (i=0;i<=30;i++)
	{
		c[i]=0;
	}

	rs.GetValue(_T("docno"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("FromNum"), tmpStr);
	CReportSection* rptDetail = rpt.GetDetail(); 
	while(!rs.IsEOF())
	{ 			
		nTotalPatient++;
		rptDetail = rpt.AddDetail();
		rs.GetValue(_T("docno"), docno);
		tmpStr.Format(_T("%d"), nIndex++);
		rptDetail->SetValue(_T("1"), tmpStr);

		rs.GetValue(_T("patientname"), tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);
		rs.GetValue(_T("sex"), tmpStr);
		if(tmpStr == _T("M"))
		{
			rs.GetValue(_T("age"), tmpStr);
			rptDetail->SetValue(_T("3"), tmpStr);
			c[3]++;
		}
		else 
		{
			rs.GetValue(_T("age"), tmpStr);
			rptDetail->SetValue(_T("4"), tmpStr);
			c[4]++;

		}
		rs.GetValue(_T("address"), tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);
		rs.GetValue(_T("cardno"), tmpStr);
		if(!tmpStr.IsEmpty()) c[6]++;
		rptDetail->SetValue(_T("6"), tmpStr);
		rs.GetValue(_T("transferplace"), tmpStr);
		rptDetail->SetValue(_T("7"), tmpStr);
		rs.GetValue(_T("transferdiagnostic"), tmpStr);
		rptDetail->SetValue(_T("8"), tmpStr);
		rs.GetValue(_T("diagnostic"), tmpStr);
		rptDetail->SetValue(_T("9"), tmpStr);
		tmpStr.Empty();
		rptDetail->SetValue(_T("10"), tmpStr);
		rs.GetValue(_T("admission"), tmpStr);
		rptDetail->SetValue(_T("11"), tmpStr);
		if(!tmpStr.IsEmpty()) c[11]++;
		rs.GetValue(_T("hilevel"), tmpStr);
		rptDetail->SetValue(_T("12"), tmpStr);
		if(!tmpStr.IsEmpty()) c[12]++;
		rs.GetValue(_T("lowlevel"), tmpStr);
		if(!tmpStr.IsEmpty()) c[13]++;
		rptDetail->SetValue(_T("13"), tmpStr);
		rs.GetValue(_T("outpatient"), tmpStr);
		if(!tmpStr.IsEmpty()) c[14]++;
		rptDetail->SetValue(_T("14"), tmpStr);
		rs.GetValue(_T("discharge"), tmpStr);
		if(!tmpStr.IsEmpty()) c[15]++;
		rptDetail->SetValue(_T("15"), tmpStr);
		rs.GetValue(_T("doctor"), tmpStr);
		rptDetail->SetValue(_T("18"), pMF->GetDoctorName(tmpStr));
		rs.GetValue(_T("serviceobj"), tmpStr);
		if(!tmpStr.IsEmpty()) c[19]++;
		rptDetail->SetValue(_T("19"), tmpStr);
		rs.GetValue(_T("insuranceobj"), tmpStr);
		if(!tmpStr.IsEmpty()) c[20]++;
		rptDetail->SetValue(_T("20"), tmpStr);
		rs.GetValue(_T("emergency"), tmpStr);
		if(!tmpStr.IsEmpty()) c[21]++;
		rptDetail->SetValue(_T("21"), tmpStr);
		rs.GetValue(_T("discountobj"),tmpStr);
		if(!tmpStr.IsEmpty()) c[22]++;
		rptDetail->SetValue(_T("22"), tmpStr);
		rs.MoveNext();
	}
	
	for(i=3;i<=22;i++)
	{	CString szFied;
		szFied.Format(_T("s%d"),i);
		tmpStr.Format(_T("%ld"),c[i]);				
		rpt.GetReportFooter()->SetValue(szFied, tmpStr);
	}

	tmpStr.Format(_T("%d"), docno);
	rpt.GetReportHeader()->SetValue(_T("ToNum"), tmpStr);
	tmpStr.Format(_T("%d"), nTotalPatient);
	rpt.GetReportHeader()->SetValue(_T("TotalPatient"), tmpStr);	
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),szSysDate.Right(2),szSysDate.Mid(5,2),szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
	rpt.PrintPreview();
	if(bPreview)
		rpt.PrintPreview();
	else
		rpt.Print();
}
void CHMSExaminationBookReport::OnExport()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szFromDateLabel, szToDateLabel, szWhere;
	CString szDate, szSysDate;
	szSysDate = pMF->GetSysDate(); 
	UpdateData(true);
	CReport rpt; 

	szSQL.Format(_T(" SELECT 	hd_docno as docno,") \
		_T(" trim(hp_surname||' '||hp_midname||' '||hp_firstname) as patientname,") \
		_T(" hp_sex as sex,") \
		_T(" hms_getage(date(hd_admitdate), hp_birthdate) as age,") \
		_T(" hms_getaddress(hp_provid,hp_distid, hp_villid) as address,") \
		_T(" hd_cardno as cardno,") \
		_T(" hd_transplace as transferplace,") \
		_T(" hd_transdiagn as transferdiagnostic,") \
		_T(" hd_diagnostic as diagnostic,") \
		_T(" case when hd_suggestion ='A' and hd_status='T' then 'X' else '' end as admission,") \
		_T(" case when hd_suggestion ='T' and hd_status='T'  and (select hhtd_line from hms_htdoc where hhtd_docno=hd_docno)=1 then 'X' else '' end as hilevel,") \
		_T(" case when hd_suggestion ='T' and hd_status='T'  and (select hhtd_line from hms_htdoc where hhtd_docno=hd_docno)=2 then 'X' else '' end as lowlevel,") \
		_T(" case when hd_suggestion ='A' and hd_outpatient='Y' then 'X' else '' end as outpatient,") \
		_T(" case when hd_suggestion ='D' and hd_status='T' then 'X' else '' end as discharge,") \
		_T(" hd_doctor as doctor,") \
		_T(" case when ho_type in('S','R') then 'X' else '' end as serviceobj,") \
		_T(" case when ho_type in('I','C') then 'X' else '' end as insuranceobj,") \
		_T(" case when ho_type in('D','Z') then 'X' else '' end as discountobj,") \
		_T(" he_emergency as emergency") \
		_T(" FROM hms_patient ") \
		_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
		_T(" LEFT JOIN hms_exam ON(he_docno=hd_docno AND he_doctor=hd_doctor and he_receptidx=hd_areceptidx)") \
		_T(" LEFT JOIN hms_object ON(hd_object=ho_id)") \
		_T(" WHERE hd_status <> 'O' and date(he_examdate) BETWEEN date('%s') and date('%s') ") \
		_T(" ORDER BY docno "), m_szFromDate, m_szToDate) ;
	rs.ExecSQL(szSQL);
	
	CExcel xls;	
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
		
	xls.SetCellText(0, 1, pMF->m_CompanyInfo.sc_pname,FMT_TEXT,true,12,0);
	xls.SetCellText(0, 2, pMF->m_CompanyInfo.sc_name,FMT_TEXT,true,12,0);
	xls.SetCellMergedColumns(0,3,12);	
	xls.SetCellText(0, 4, _T("BAO CAO HOAT DONG KHAM BENH"),true,16,0);
	xls.SetCellMergedColumns(0,4,12);
	tmpStr.Format(_T("Tu ngay %s Den ngay %s"), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	xls.SetCellText(0, 5, tmpStr,FMT_TEXT,true,12,0);
	
	int nRow = 7;
	xls.SetCellText(0, nRow, _T("STT"));		
	xls.SetCellText(1, nRow, _T("Ha va ten"));
	xls.SetCellText(2, nRow, _T("Tuoi Nam"));
	xls.SetCellText(3, nRow, _T("Tuoi nu"));
	xls.SetCellText(4, nRow, _T("Dia chi"));
		
	xls.SetCellText(5, nRow, _T("So the BHYT"));		
	xls.SetCellText(6, nRow, _T("Noi gioi thieu"));
	xls.SetCellText(7, nRow, _T("Tuyen duoi"));
	xls.SetCellText(8, nRow, _T("Khoa kham benh"));
	xls.SetCellText(9, nRow, _T("Chi dinh"));
	xls.SetCellText(10, nRow, _T("Vao vien"));
	xls.SetCellText(11, nRow, _T("Tuyen tren"));
	xls.SetCellText(12, nRow, _T("Tuyen duoi"));
	xls.SetCellText(13, nRow, _T("Ngoai tru"));
	xls.SetCellText(14, nRow, _T("Ve nha"));
	xls.SetCellText(15, nRow, _T("Thu thuat"));
	xls.SetCellText(16, nRow, _T("Kham chuyen khoa"));
	xls.SetCellText(17, nRow, _T("Bac si kham"));
	xls.SetCellText(18, nRow, _T("Vien pi"));
	xls.SetCellText(19, nRow, _T("Mien phi"));
	xls.SetCellText(20, nRow, _T("BHYT"));

	int nIndex = 1 ;
	long docno=0, nTotalPatient=0;
	
	while(!rs.IsEOF())
	{ 			
		nTotalPatient++;
		nRow++;
		rs.GetValue(_T("docno"), docno);
		tmpStr.Format(_T("%d"), nIndex++);
		xls.SetCellText(0, nRow, tmpStr,FMT_NUMBER1);

		rs.GetValue(_T("patientname"), tmpStr);
		xls.SetCellText(1, nRow, tmpStr,FMT_TEXT);
		rs.GetValue(_T("sex"), tmpStr);
		if(tmpStr == _T("M"))
		{
			rs.GetValue(_T("age"), tmpStr);
			xls.SetCellText(2, nRow, tmpStr,FMT_NUMBER1);
		}
		else 
		{
			rs.GetValue(_T("age"), tmpStr);
			xls.SetCellText(3, nRow, tmpStr,FMT_NUMBER1);

		}
		rs.GetValue(_T("address"), tmpStr);
		xls.SetCellText(4, nRow, tmpStr,FMT_TEXT);
		rs.GetValue(_T("cardno"), tmpStr);
		xls.SetCellText(5, nRow, tmpStr,FMT_TEXT);
		rs.GetValue(_T("transferplace"), tmpStr);
		xls.SetCellText(6, nRow, tmpStr,FMT_TEXT);
		rs.GetValue(_T("transferdiagnostic"), tmpStr);
		xls.SetCellText(7, nRow, tmpStr,FMT_TEXT);
		rs.GetValue(_T("diagnostic"), tmpStr);
		xls.SetCellText(8, nRow, tmpStr,FMT_TEXT);
		tmpStr.Empty();
		xls.SetCellText(9, nRow, tmpStr,FMT_TEXT);
		rs.GetValue(_T("admission"), tmpStr);
		xls.SetCellText(10, nRow, tmpStr,FMT_TEXT);

		rs.GetValue(_T("hilevel"), tmpStr);
		xls.SetCellText(11, nRow, tmpStr,FMT_TEXT);

		rs.GetValue(_T("lowlevel"), tmpStr);
		xls.SetCellText(12, nRow, tmpStr,FMT_TEXT);
		rs.GetValue(_T("outpatient"), tmpStr);
		xls.SetCellText(13, nRow, tmpStr,FMT_TEXT);
		rs.GetValue(_T("discharge"), tmpStr);
		xls.SetCellText(14, nRow, tmpStr,FMT_TEXT);



		rs.GetValue(_T("doctor"), tmpStr);
		xls.SetCellText(17, nRow,  pMF->GetDoctorName(tmpStr),FMT_TEXT);
		rs.GetValue(_T("serviceobj"), tmpStr);
		xls.SetCellText(18, nRow, tmpStr,FMT_TEXT);
		rs.GetValue(_T("insuranceobj"), tmpStr);
		xls.SetCellText(19, nRow, tmpStr,FMT_TEXT);
		rs.GetValue(_T("discountobj"), tmpStr);
		xls.SetCellText(20, nRow, tmpStr,FMT_TEXT);
		rs.MoveNext();
	}
	nRow++;
	tmpStr.Format(_T("Tong so benh nhan:%d"), nTotalPatient);
	xls.SetCellText(14, nRow, tmpStr,FMT_TEXT);

	xls.Save(_T("Exports\\Hoat dong kham benh.xls"));


}
