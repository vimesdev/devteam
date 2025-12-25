#include "rptExaminationBookReportDialog.h"
#include "../MainFrm.h"
#include "ReportDocument.h"
#include "Excel.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((rptExaminationBookReportDialog *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((rptExaminationBookReportDialog *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((rptExaminationBookReportDialog *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((rptExaminationBookReportDialog *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((rptExaminationBookReportDialog *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((rptExaminationBookReportDialog *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((rptExaminationBookReportDialog *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((rptExaminationBookReportDialog *)pWnd)->OnToDateCheckValue();
} 
/*static void _OnFromNumChangeFnc(CWnd *pWnd){
	((rptExaminationBookReportDialog *)pWnd)->OnFromNumChange();
} */
/*static void _OnFromNumSetfocusFnc(CWnd *pWnd){
	((rptExaminationBookReportDialog *)pWnd)->OnFromNumSetfocus();} */ 
/*static void _OnFromNumKillfocusFnc(CWnd *pWnd){
	((rptExaminationBookReportDialog *)pWnd)->OnFromNumKillfocus();
} */
static int _OnFromNumCheckValueFnc(CWnd *pWnd){
	return ((rptExaminationBookReportDialog *)pWnd)->OnFromNumCheckValue();
} 
/*static void _OnToNumChangeFnc(CWnd *pWnd){
	((rptExaminationBookReportDialog *)pWnd)->OnToNumChange();
} */
/*static void _OnToNumSetfocusFnc(CWnd *pWnd){
	((rptExaminationBookReportDialog *)pWnd)->OnToNumSetfocus();} */ 
/*static void _OnToNumKillfocusFnc(CWnd *pWnd){
	((rptExaminationBookReportDialog *)pWnd)->OnToNumKillfocus();
} */
static int _OnToNumCheckValueFnc(CWnd *pWnd){
	return ((rptExaminationBookReportDialog *)pWnd)->OnToNumCheckValue();
} 
static void _OnRoomSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((rptExaminationBookReportDialog* )pWnd)->OnRoomSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnRoomSelendokFnc(CWnd *pWnd){
	((rptExaminationBookReportDialog *)pWnd)->OnRoomSelendok();
}
/*static void _OnRoomSetfocusFnc(CWnd *pWnd){
	((rptExaminationBookReportDialog *)pWnd)->OnRoomKillfocus();
}*/
/*static void _OnRoomKillfocusFnc(CWnd *pWnd){
	((rptExaminationBookReportDialog *)pWnd)->OnRoomKillfocus();
}*/
static long _OnRoomLoadDataFnc(CWnd *pWnd){
	return ((rptExaminationBookReportDialog *)pWnd)->OnRoomLoadData();
}
/*static void _OnRoomAddNewFnc(CWnd *pWnd){
	((rptExaminationBookReportDialog *)pWnd)->OnRoomAddNew();
}*/
static void _OnProvillSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((rptExaminationBookReportDialog* )pWnd)->OnProvillSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnProvillSelendokFnc(CWnd *pWnd){
	((rptExaminationBookReportDialog *)pWnd)->OnProvillSelendok();
}
/*static void _OnProvillSetfocusFnc(CWnd *pWnd){
	((rptExaminationBookReportDialog *)pWnd)->OnProvillKillfocus();
}*/
/*static void _OnProvillKillfocusFnc(CWnd *pWnd){
	((rptExaminationBookReportDialog *)pWnd)->OnProvillKillfocus();
}*/
static long _OnProvillLoadDataFnc(CWnd *pWnd){
	return ((rptExaminationBookReportDialog *)pWnd)->OnProvillLoadData();
}
/*static void _OnProvillAddNewFnc(CWnd *pWnd){
	((rptExaminationBookReportDialog *)pWnd)->OnProvillAddNew();
}*/
static void _OnDistrictSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((rptExaminationBookReportDialog* )pWnd)->OnDistrictSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDistrictSelendokFnc(CWnd *pWnd){
	((rptExaminationBookReportDialog *)pWnd)->OnDistrictSelendok();
}
/*static void _OnDistrictSetfocusFnc(CWnd *pWnd){
	((rptExaminationBookReportDialog *)pWnd)->OnDistrictKillfocus();
}*/
/*static void _OnDistrictKillfocusFnc(CWnd *pWnd){
	((rptExaminationBookReportDialog *)pWnd)->OnDistrictKillfocus();
}*/
static long _OnDistrictLoadDataFnc(CWnd *pWnd){
	return ((rptExaminationBookReportDialog *)pWnd)->OnDistrictLoadData();
}
/*static void _OnDistrictAddNewFnc(CWnd *pWnd){
	((rptExaminationBookReportDialog *)pWnd)->OnDistrictAddNew();
}*/
static void _OnVillageSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((rptExaminationBookReportDialog* )pWnd)->OnVillageSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnVillageSelendokFnc(CWnd *pWnd){
	((rptExaminationBookReportDialog *)pWnd)->OnVillageSelendok();
}
/*static void _OnVillageSetfocusFnc(CWnd *pWnd){
	((rptExaminationBookReportDialog *)pWnd)->OnVillageKillfocus();
}*/
/*static void _OnVillageKillfocusFnc(CWnd *pWnd){
	((rptExaminationBookReportDialog *)pWnd)->OnVillageKillfocus();
}*/
static long _OnVillageLoadDataFnc(CWnd *pWnd){
	return ((rptExaminationBookReportDialog *)pWnd)->OnVillageLoadData();
}
/*static void _OnVillageAddNewFnc(CWnd *pWnd){
	((rptExaminationBookReportDialog *)pWnd)->OnVillageAddNew();
}*/
static void _OnEthnicSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((rptExaminationBookReportDialog* )pWnd)->OnEthnicSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnEthnicSelendokFnc(CWnd *pWnd){
	((rptExaminationBookReportDialog *)pWnd)->OnEthnicSelendok();
}
/*static void _OnEthnicSetfocusFnc(CWnd *pWnd){
	((rptExaminationBookReportDialog *)pWnd)->OnEthnicKillfocus();
}*/
/*static void _OnEthnicKillfocusFnc(CWnd *pWnd){
	((rptExaminationBookReportDialog *)pWnd)->OnEthnicKillfocus();
}*/
static long _OnEthnicLoadDataFnc(CWnd *pWnd){
	return ((rptExaminationBookReportDialog *)pWnd)->OnEthnicLoadData();
}
/*static void _OnEthnicAddNewFnc(CWnd *pWnd){
	((rptExaminationBookReportDialog *)pWnd)->OnEthnicAddNew();
}*/
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	rptExaminationBookReportDialog *pVw = (rptExaminationBookReportDialog *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	rptExaminationBookReportDialog *pVw = (rptExaminationBookReportDialog *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	rptExaminationBookReportDialog *pVw = (rptExaminationBookReportDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddrptExaminationBookReportDialogFnc(CWnd *pWnd){
	 return ((rptExaminationBookReportDialog*)pWnd)->OnAddrptExaminationBookReportDialog();
} 
static int _OnEditrptExaminationBookReportDialogFnc(CWnd *pWnd){
	 return ((rptExaminationBookReportDialog*)pWnd)->OnEditrptExaminationBookReportDialog();
} 
static int _OnDeleterptExaminationBookReportDialogFnc(CWnd *pWnd){
	 return ((rptExaminationBookReportDialog*)pWnd)->OnDeleterptExaminationBookReportDialog();
} 
static int _OnSaverptExaminationBookReportDialogFnc(CWnd *pWnd){
	 return ((rptExaminationBookReportDialog*)pWnd)->OnSaverptExaminationBookReportDialog();
} 
static int _OnCancelrptExaminationBookReportDialogFnc(CWnd *pWnd){
	 return ((rptExaminationBookReportDialog*)pWnd)->OnCancelrptExaminationBookReportDialog();
} 
rptExaminationBookReportDialog::rptExaminationBookReportDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 420;
	m_nDlgHeight = 280;
	m_szTitle.Format(_T("Examination Book"));
	SetDefaultValues();
}
rptExaminationBookReportDialog::~rptExaminationBookReportDialog(){
}
void rptExaminationBookReportDialog::OnCreateComponents()
{
	m_wndReportParameter.Create(this, _T("Report Parameters"), 5, 5, 410, 240);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 205, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 210, 30, 290, 55);
	m_wndToDate.Create(this,295, 30, 405, 55); 
	m_wndFromNumLabel.Create(this, _T("From Num"), 10, 60, 90, 85);
	m_wndFromNum.Create(this,95, 60, 205, 85); 
	m_wndToNumLabel.Create(this, _T("To Num"), 210, 60, 290, 85);
	m_wndToNum.Create(this,295, 60, 405, 85); 
	m_wndRoomLabel.Create(this, _T("Room"), 10, 90, 90, 115);
	m_wndRoom.Create(this,95, 90, 405, 115); 
	m_wndProvillLabel.Create(this, _T("Provill"), 10, 120, 90, 145);
	m_wndProvill.Create(this,95, 120, 405, 145); 
	m_wndDistrictLabel.Create(this, _T("District"), 10, 150, 90, 175);
	m_wndDistrict.Create(this,95, 150, 405, 175); 
	m_wndVillageLabel.Create(this, _T("Village"), 10, 180, 90, 205);
	m_wndVillage.Create(this,95, 180, 405, 205); 
	m_wndEthnicLabel.Create(this, _T("Ethnic"), 10, 210, 90, 235);
	m_wndEthnic.Create(this,95, 210, 405, 235); 
	m_wndPrintPreview.Create(this, _T("Print Pre&view"), 160, 245, 240, 270);
	m_wndPrint.Create(this, _T("&Export"), 245, 245, 325, 270);
	m_wndClose.Create(this, _T("&Close"), 330, 245, 410, 270);

}
void rptExaminationBookReportDialog::OnInitializeComponents()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	//m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
//	m_wndToDate.SetCheckValue(true);
	m_wndFromNum.SetLimitText(10);
	//m_wndFromNum.SetCheckValue(true);
	m_wndToNum.SetLimitText(10);
	//m_wndToNum.SetCheckValue(true);
	//m_wndRoom.SetCheckValue(true);
	m_wndRoom.LimitText(35);
	//m_wndProvill.SetCheckValue(true);
	m_wndProvill.LimitText(35);
	//m_wndDistrict.SetCheckValue(true);
	m_wndDistrict.LimitText(35);
	//m_wndVillage.SetCheckValue(true);
	m_wndVillage.LimitText(35);
	//m_wndEthnic.SetCheckValue(true);
	m_wndEthnic.LimitText(35);


	m_wndRoom.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndRoom.InsertColumn(1, _T("Description"), CFMT_TEXT, 250);


	m_wndProvill.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndProvill.InsertColumn(1, _T("Description"), CFMT_TEXT, 250);


	m_wndDistrict.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndDistrict.InsertColumn(1, _T("Description"), CFMT_TEXT, 250);


	m_wndVillage.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndVillage.InsertColumn(1, _T("Description"), CFMT_TEXT, 250);


	m_wndEthnic.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndEthnic.InsertColumn(1, _T("Description"), CFMT_TEXT, 250);

}
void rptExaminationBookReportDialog::OnSetWindowEvents()
{
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

	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	//m_szFromDate = m_szToDate = pMF->GetSysDate();
	SetMode(VM_EDIT);

}
void rptExaminationBookReportDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Text(pDX, m_wndFromNum.GetDlgCtrlID(), m_nFromNum);
	DDX_Text(pDX, m_wndToNum.GetDlgCtrlID(), m_nToNum);
	DDX_TextEx(pDX, m_wndRoom.GetDlgCtrlID(), m_szRoomKey);
	DDX_TextEx(pDX, m_wndProvill.GetDlgCtrlID(), m_szProvillKey);
	DDX_TextEx(pDX, m_wndDistrict.GetDlgCtrlID(), m_szDistrictKey);
	DDX_TextEx(pDX, m_wndVillage.GetDlgCtrlID(), m_szVillageKey);
	DDX_TextEx(pDX, m_wndEthnic.GetDlgCtrlID(), m_szEthnicKey);

}
void rptExaminationBookReportDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void rptExaminationBookReportDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void rptExaminationBookReportDialog::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_nFromNum=0;
	m_nToNum=0;
	m_szRoomKey.Empty();
	m_szProvillKey.Empty();
	m_szDistrictKey.Empty();
	m_szVillageKey.Empty();
	m_szEthnicKey.Empty();

}
int rptExaminationBookReportDialog::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiDialog::SetMode(nMode); 
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db);
		CDate dt;
		CDateTime dt1, dt2;
		dt.ParseDate(pMF->GetSysDate());
  		switch(nMode)
		{ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 3, 4, -1); 
 			SetDefaultValues(); 
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 1, 2, -1);
			dt1.SetDate(dt.GetYear(), dt.GetMonth(), dt.GetDay());
			dt1.SetTime(0, 1, 0);
			dt2.SetDate(dt.GetYear(), dt.GetMonth(), dt.GetDay());
			dt2.SetTime(23, 59, 0);
			m_szFromDate = dt1.GetDateTime();
			m_szToDate = dt2.GetDateTime();
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
/*void rptExaminationBookReportDialog::OnFromDateChange(){
	
} */
/*void rptExaminationBookReportDialog::OnFromDateSetfocus(){
	
} */
/*void rptExaminationBookReportDialog::OnFromDateKillfocus(){
	
} */
int rptExaminationBookReportDialog::OnFromDateCheckValue(){
	return 0;
} 
/*void rptExaminationBookReportDialog::OnToDateChange(){
	
} */
/*void rptExaminationBookReportDialog::OnToDateSetfocus(){
	
} */
/*void rptExaminationBookReportDialog::OnToDateKillfocus(){
	
} */
int rptExaminationBookReportDialog::OnToDateCheckValue(){
	return 0;
} 
/*void rptExaminationBookReportDialog::OnFromNumChange(){
	
} */
/*void rptExaminationBookReportDialog::OnFromNumSetfocus(){
	
} */
/*void rptExaminationBookReportDialog::OnFromNumKillfocus(){
	
} */
int rptExaminationBookReportDialog::OnFromNumCheckValue(){
	return 0;
} 
/*void rptExaminationBookReportDialog::OnToNumChange(){
	
} */
/*void rptExaminationBookReportDialog::OnToNumSetfocus(){
	
} */
/*void rptExaminationBookReportDialog::OnToNumKillfocus(){
	
} */
int rptExaminationBookReportDialog::OnToNumCheckValue(){
	return 0;
} 
void rptExaminationBookReportDialog::OnRoomSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void rptExaminationBookReportDialog::OnRoomSelendok(){
	 
}
/*void rptExaminationBookReportDialog::OnRoomSetfocus(){
	
}*/
/*void rptExaminationBookReportDialog::OnRoomKillfocus(){
	
}*/
long rptExaminationBookReportDialog::OnRoomLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndRoom.IsSearchKey() && str2int(m_szRoomKey) > 0){
		szWhere.Format(_T(" and hrl_id=%d"), str2int(m_szRoomKey));
	};
	m_wndRoom.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT hrl_id as id, hrl_name as name FROM hms_roomlist WHERE hrl_deptid='%s' %s ORDER BY hrl_id"), pMF->m_szDept, szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndRoom.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void rptExaminationBookReportDialog::OnRoomAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void rptExaminationBookReportDialog::OnProvillSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void rptExaminationBookReportDialog::OnProvillSelendok(){
	 
}
/*void rptExaminationBookReportDialog::OnProvillSetfocus(){
	
}*/
/*void rptExaminationBookReportDialog::OnProvillKillfocus(){
	
}*/
long rptExaminationBookReportDialog::OnProvillLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndProvill.IsSearchKey() && !m_szProvillKey.IsEmpty()){
		szWhere.Format(_T("WHERE sp_id=%d"), str2int(m_szProvillKey));
	};
	m_wndProvill.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT sp_id as id, sp_name as name FROM sys_prov %s ORDER BY sp_id"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndProvill.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void rptExaminationBookReportDialog::OnProvillAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void rptExaminationBookReportDialog::OnDistrictSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void rptExaminationBookReportDialog::OnDistrictSelendok(){
	 
}
/*void rptExaminationBookReportDialog::OnDistrictSetfocus(){
	
}*/
/*void rptExaminationBookReportDialog::OnDistrictKillfocus(){
	
}*/
long rptExaminationBookReportDialog::OnDistrictLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	
	if(m_wndDistrict.IsSearchKey() && !m_szDistrictKey.IsEmpty()){
		szWhere.Format(_T(" and sd_id=%d"), str2long(m_szDistrictKey));
	};
	if(!m_szProvillKey.IsEmpty())
		szWhere.AppendFormat(_T(" and sd_provid=%d"), str2int(m_szProvillKey));
	m_wndDistrict.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT sd_id as id, sd_name as name FROM sys_dist WHERE 1=1 %s ORDER BY sd_id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDistrict.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void rptExaminationBookReportDialog::OnDistrictAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void rptExaminationBookReportDialog::OnVillageSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void rptExaminationBookReportDialog::OnVillageSelendok(){
	 
}
/*void rptExaminationBookReportDialog::OnVillageSetfocus(){
	
}*/
/*void rptExaminationBookReportDialog::OnVillageKillfocus(){
	
}*/
long rptExaminationBookReportDialog::OnVillageLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndVillage.IsSearchKey() && !m_szVillageKey.IsEmpty()){
		szWhere.Format(_T(" and sv_id=%ld"), str2long(m_szVillageKey));
	};
	if(!m_szProvillKey.IsEmpty()){
		szWhere.AppendFormat(_T(" and sv_provid=%d"), str2int(m_szProvillKey));
	}

	if(!m_szDistrictKey.IsEmpty()){
		szWhere.AppendFormat(_T("and sv_distid=%ld"), str2long(m_szDistrictKey));
	}
	m_wndVillage.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT sv_id as id, sv_name as name FROM sys_vill WHERE 1=1 %s ORDER BY sv_id"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndVillage.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void rptExaminationBookReportDialog::OnVillageAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void rptExaminationBookReportDialog::OnEthnicSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void rptExaminationBookReportDialog::OnEthnicSelendok(){
	 
}
/*void rptExaminationBookReportDialog::OnEthnicSetfocus(){
	
}*/
/*void rptExaminationBookReportDialog::OnEthnicKillfocus(){
	
}*/
long rptExaminationBookReportDialog::OnEthnicLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return pMF->LoadSelectionList(&m_wndEthnic, _T("sys_ethnic"), m_szEthnicKey);
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
/*void rptExaminationBookReportDialog::OnEthnicAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void rptExaminationBookReportDialog::OnPrintPreviewSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnPrint(true);	
} 
void rptExaminationBookReportDialog::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnExport();
} 
void rptExaminationBookReportDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int rptExaminationBookReportDialog::OnAddrptExaminationBookReportDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int rptExaminationBookReportDialog::OnEditrptExaminationBookReportDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int rptExaminationBookReportDialog::OnDeleterptExaminationBookReportDialog(){
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
 		OnCancelrptExaminationBookReportDialog(); 
 	}
	return 0;
}
int rptExaminationBookReportDialog::OnSaverptExaminationBookReportDialog(){
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
 		//OnrptExaminationBookReportDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int rptExaminationBookReportDialog::OnCancelrptExaminationBookReportDialog(){
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
int rptExaminationBookReportDialog::OnrptExaminationBookReportDialogListLoadData(){
	return 0;
}



void rptExaminationBookReportDialog::OnPrint(bool bPreview)
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szFromDateLabel, szToDateLabel, szWhere;
	CString szDate, szSysDate;
	szSysDate = pMF->GetSysDate(); 
	UpdateData(true);
	CReport rpt; 
	if(!m_szRoomKey.IsEmpty())
		szWhere.AppendFormat(_T(" and he_roomid=%d"), str2int(m_szRoomKey));
	if(!m_szProvillKey.IsEmpty())
		szWhere.AppendFormat(_T(" and hp_provid=%d"), str2int(m_szProvillKey));
	if(!m_szDistrictKey.IsEmpty())
		szWhere.AppendFormat(_T(" and hp_distid=%ld"), str2long(m_szDistrictKey));
	if(!m_szVillageKey.IsEmpty())
		szWhere.AppendFormat(_T(" and hp_villid=%ld"), str2long(m_szVillageKey));
	if (m_nFromNum > 0 && m_nToNum > 0)
		szWhere.Format(_T(" and date_part('year', age(hp_birthdate)) between %d and %d "), m_nFromNum, m_nToNum);
	
	if(str2int(m_szEthnicKey)> 0)
		szWhere.AppendFormat(_T(" and hp_ethnic=%ld"), str2int(m_szEthnicKey));



	szSQL.Format(_T(" SELECT hd_docno as docno,") \
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
		_T(" LEFT JOIN hms_exam ON(he_docno=hd_docno and he_receptidx=hd_areceptidx) ") \
		_T(" WHERE hd_status = 'T' and hd_enddate BETWEEN timestamp '%s' and timestamp '%s' %s ") \
		_T(" ORDER BY docno "), m_szFromDate, m_szToDate, szWhere) ;
	_fmsg(_T("%s"), szSQL);
	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
	{
		ShowMessageBox(_T("No data"));
		return;
	}
	if(!rpt.Init(_T("Reports/HMS/HE_EXAMINATIONBOOK.RPT")) )
	{
		return ;
	}
	tmpStr = rpt.GetReportHeader()->GetValue(_T("ReportDate"));
	szDate.Format(tmpStr, CDateTime::Convert(m_szFromDate, yyyymmdd|hhmm, ddmmyyyy|hhmm),
		CDateTime::Convert(m_szToDate, yyyymmdd|hhmm, ddmmyyyy|hhmm));
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
		tmpStr.Format(_T("%d"), nIndex++);
		rptDetail->SetValue(_T("0"), tmpStr);
		rs.GetValue(_T("docno"), docno);
		tmpStr.Format(_T("%d"), docno);
		rptDetail->SetValue(_T("1"),tmpStr);
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
void rptExaminationBookReportDialog::OnExport()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szFromDateLabel, szToDateLabel, szWhere;
	CString szDate, szSysDate;
	szSysDate = pMF->GetSysDate(); 
	UpdateData(true);
	CReport rpt; 

	if(!m_szRoomKey.IsEmpty())
		szWhere.AppendFormat(_T(" and he_roomid=%d"), str2int(m_szRoomKey));
	if(!m_szProvillKey.IsEmpty())
		szWhere.AppendFormat(_T(" and hp_provid=%d"), str2int(m_szProvillKey));
	if(!m_szDistrictKey.IsEmpty())
		szWhere.AppendFormat(_T(" and hp_distid=%ld"), str2long(m_szDistrictKey));
	if(!m_szVillageKey.IsEmpty())
		szWhere.AppendFormat(_T(" and hp_villid=%ld"), str2long(m_szVillageKey));
	if(!m_szFromNum.IsEmpty())
		szWhere.AppendFormat(_T(" and hd_docno >= %ld"), str2long(m_szFromNum));
	if(!m_szToNum.IsEmpty())
		szWhere.AppendFormat(_T(" and hd_docno <= %ld"), str2long(m_szToNum));

	if(!m_szRoomKey.IsEmpty())
		szWhere.AppendFormat(_T(" and he_roomid=%d"), str2int(m_szRoomKey));
	if(!m_szProvillKey.IsEmpty())
		szWhere.AppendFormat(_T(" and hp_provid=%d"), str2int(m_szProvillKey));
	if(!m_szDistrictKey.IsEmpty())
		szWhere.AppendFormat(_T(" and hp_distid=%ld"), str2long(m_szDistrictKey));
	if(!m_szVillageKey.IsEmpty())
		szWhere.AppendFormat(_T(" and hp_villid=%ld"), str2long(m_szVillageKey));
	if (m_nFromNum > 0 && m_nToNum > 0)
		szWhere.Format(_T(" and date_part('year', age(hp_birthdate)) between %d and %d "), m_nFromNum, m_nToNum);

	if(str2int(m_szEthnicKey)> 0)
		szWhere.AppendFormat(_T(" and hp_ethnic=%ld"), str2int(m_szEthnicKey));



	szSQL.Format(_T(" SELECT hd_docno as docno,") \
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
		_T(" LEFT JOIN hms_exam ON(he_docno=hd_docno and he_receptidx=hd_areceptidx) ") \
		_T(" WHERE hd_status = 'T' and hd_enddate BETWEEN timestamp '%s' and timestamp '%s' %s ") \
		_T(" ORDER BY docno "), m_szFromDate, m_szToDate, szWhere) ;

	
	rs.ExecSQL(szSQL);
	
	CExcel xls;	
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
		
	xls.SetCellText(0, 1, pMF->m_CompanyInfo.sc_pname,FMT_TEXT,true,12,0);
	xls.SetCellText(0, 2, pMF->m_CompanyInfo.sc_name,FMT_TEXT,true,12,0);
	xls.SetCellMergedColumns(0,4,22);	
	xls.SetCellText(0, 4, _T("S\x1ED4 KH\xC1M \x42\x1EB8NH"),FMT_TEXT, true,16,0);
	xls.SetCellMergedColumns(0,4,22);
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"), 
				  CDateTime::Convert(m_szFromDate, yyyymmdd|hhmm, ddmmyyyy|hhmm), 
				  CDateTime::Convert(m_szToDate, yyyymmdd|hhmm, ddmmyyyy|hhmm));
	xls.SetCellText(0, 5, tmpStr,FMT_TEXT,true,12,0);
	
	int nRow = 7;
	xls.SetCellText(0, nRow, _T("STT"));
	xls.SetCellText(1, nRow, _T("Document No"));
	TranslateString(_T("Patient Name"), tmpStr);	
	xls.SetCellText(2, nRow, tmpStr, FMT_TEXT,true);	
	TranslateString(_T("Male"), tmpStr);
	xls.SetCellText(3, nRow, tmpStr, FMT_TEXT,true);	
	TranslateString(_T("Female"), tmpStr);
	xls.SetCellText(4, nRow, tmpStr, FMT_TEXT,true);	
	TranslateString(_T("Address"), tmpStr);
	xls.SetCellText(5, nRow, tmpStr, FMT_TEXT,true);	
	TranslateString(_T("Card Number"), tmpStr);
	xls.SetCellText(6, nRow, tmpStr, FMT_TEXT,true);	
	TranslateString(_T("Register Place"), tmpStr);
	xls.SetCellText(7, nRow, tmpStr, FMT_TEXT,true);	
	TranslateString(_T("Transfer Diagnostic"), tmpStr);
	xls.SetCellText(8, nRow, tmpStr,true);
	TranslateString(_T("Examine Disease"), tmpStr);
	xls.SetCellText(9, nRow, tmpStr);
	xls.SetCellText(10, nRow, _T("Chi dinh"),true);
	TranslateString(_T("In hospital"), tmpStr);
	xls.SetCellText(11, nRow, tmpStr,true);
	xls.SetCellText(12, nRow, _T("Tuyen tren"),true);
	xls.SetCellText(13, nRow, _T("Tuyen duoi"),true);
	TranslateString(_T("OutPatient"), tmpStr);
	xls.SetCellText(14, nRow, tmpStr,true);
	TranslateString(_T("Discharge"), tmpStr);
	xls.SetCellText(15, nRow, tmpStr,true);
	xls.SetCellText(16, nRow, _T("Thu thuat"), true);
	xls.SetCellText(17, nRow, _T("Kham chuyen khoa"),true);
	TranslateString(_T("Doctor"), tmpStr);
	xls.SetCellText(18, nRow, tmpStr, true);
	xls.SetCellText(19, nRow, _T("Vien pi"), true);
	xls.SetCellText(20, nRow, _T("Mien phi"), true);
	xls.SetCellText(21, nRow, _T("Cap cuu"), true);
	xls.SetCellText(22, nRow, _T("BHYT"),true);

	int nIndex = 1 ;
	long docno=0, nTotalPatient=0;
	
	while(!rs.IsEOF())
	{ 			
		nTotalPatient++;
		nRow++;		
		tmpStr.Format(_T("%d"), nIndex++);
		xls.SetCellText(0, nRow, tmpStr,FMT_INTEGER);
		rs.GetValue(_T("docno"), docno);
		tmpStr.Format(_T("%d"), docno);
		xls.SetCellText(1, nRow, tmpStr,FMT_INTEGER);
		rs.GetValue(_T("patientname"), tmpStr);
		xls.SetCellText(2, nRow, tmpStr,FMT_TEXT);
		rs.GetValue(_T("sex"), tmpStr);
		if(tmpStr == _T("M"))
		{
			rs.GetValue(_T("age"), tmpStr);
			xls.SetCellText(3, nRow, tmpStr,FMT_NUMBER1);
		}
		else 
		{
			rs.GetValue(_T("age"), tmpStr);
			xls.SetCellText(4, nRow, tmpStr,FMT_NUMBER1);

		}
		rs.GetValue(_T("address"), tmpStr);
		xls.SetCellText(5, nRow, tmpStr,FMT_TEXT);
		rs.GetValue(_T("cardno"), tmpStr);
		xls.SetCellText(6, nRow, tmpStr,FMT_TEXT);
		rs.GetValue(_T("transferplace"), tmpStr);
		xls.SetCellText(7, nRow, tmpStr,FMT_TEXT);
		rs.GetValue(_T("transferdiagnostic"), tmpStr);
		xls.SetCellText(8, nRow, tmpStr,FMT_TEXT);
		rs.GetValue(_T("diagnostic"), tmpStr);
		xls.SetCellText(9, nRow, tmpStr,FMT_TEXT);
		tmpStr.Empty();
		xls.SetCellText(10, nRow, tmpStr,FMT_TEXT);
		rs.GetValue(_T("admission"), tmpStr);
		xls.SetCellText(11, nRow, tmpStr,FMT_TEXT);

		rs.GetValue(_T("hilevel"), tmpStr);
		xls.SetCellText(12, nRow, tmpStr,FMT_TEXT);

		rs.GetValue(_T("lowlevel"), tmpStr);
		xls.SetCellText(13, nRow, tmpStr,FMT_TEXT);
		rs.GetValue(_T("outpatient"), tmpStr);
		xls.SetCellText(14, nRow, tmpStr,FMT_TEXT);
		rs.GetValue(_T("discharge"), tmpStr);
		xls.SetCellText(15, nRow, tmpStr,FMT_TEXT);



		rs.GetValue(_T("doctor"), tmpStr);
		xls.SetCellText(18, nRow,  pMF->GetDoctorName(tmpStr),FMT_TEXT);
		rs.GetValue(_T("serviceobj"), tmpStr);
		xls.SetCellText(19, nRow, tmpStr,FMT_TEXT);
		rs.GetValue(_T("insuranceobj"), tmpStr);
		xls.SetCellText(20, nRow, tmpStr,FMT_TEXT);
		rs.GetValue(_T("emergency"), tmpStr);
		xls.SetCellText(21, nRow, tmpStr,FMT_TEXT);
		rs.GetValue(_T("discountobj"), tmpStr);
		xls.SetCellText(22, nRow, tmpStr,FMT_TEXT);
		rs.MoveNext();
	}
	nRow++;
	tmpStr.Format(_T("Tong so benh nhan:%d"), nTotalPatient);
	xls.SetCellText(14, nRow, tmpStr,FMT_TEXT);

	xls.Save(_T("Exports\\So kham benh.xls"));


}
