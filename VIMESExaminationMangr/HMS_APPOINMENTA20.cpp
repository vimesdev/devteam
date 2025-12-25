#include "HMS_APPOINMENTA20.h"
#include "MainFrm.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CHMS_APPOINMENTA20 *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CHMS_APPOINMENTA20 *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CHMS_APPOINMENTA20 *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CHMS_APPOINMENTA20 *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CHMS_APPOINMENTA20 *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CHMS_APPOINMENTA20 *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CHMS_APPOINMENTA20 *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CHMS_APPOINMENTA20 *)pWnd)->OnToDateCheckValue();
} 
static void _OnLoadSelectFnc(CWnd *pWnd){
	CHMS_APPOINMENTA20 *pVw = (CHMS_APPOINMENTA20 *)pWnd;
	pVw->OnLoadSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMS_APPOINMENTA20*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMS_APPOINMENTA20*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMS_APPOINMENTA20*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMS_APPOINMENTA20*)pWnd)->OnListDeleteItem();
} 
/*static void _OnDateChangeFnc(CWnd *pWnd){
	((CHMS_APPOINMENTA20 *)pWnd)->OnDateChange();
} */
/*static void _OnDateSetfocusFnc(CWnd *pWnd){
	((CHMS_APPOINMENTA20 *)pWnd)->OnDateSetfocus();} */ 
/*static void _OnDateKillfocusFnc(CWnd *pWnd){
	((CHMS_APPOINMENTA20 *)pWnd)->OnDateKillfocus();
} */
static int _OnDateCheckValueFnc(CWnd *pWnd){
	return ((CHMS_APPOINMENTA20 *)pWnd)->OnDateCheckValue();
} 
/*static void _OnQtyChangeFnc(CWnd *pWnd){
	((CHMS_APPOINMENTA20 *)pWnd)->OnQtyChange();
} */
/*static void _OnQtySetfocusFnc(CWnd *pWnd){
	((CHMS_APPOINMENTA20 *)pWnd)->OnQtySetfocus();} */ 
/*static void _OnQtyKillfocusFnc(CWnd *pWnd){
	((CHMS_APPOINMENTA20 *)pWnd)->OnQtyKillfocus();
} */
static int _OnQtyCheckValueFnc(CWnd *pWnd){
	return ((CHMS_APPOINMENTA20 *)pWnd)->OnQtyCheckValue();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMS_APPOINMENTA20 *pVw = (CHMS_APPOINMENTA20 *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CHMS_APPOINMENTA20 *pVw = (CHMS_APPOINMENTA20 *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CHMS_APPOINMENTA20 *pVw = (CHMS_APPOINMENTA20 *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMS_APPOINMENTA20 *pVw = (CHMS_APPOINMENTA20 *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMS_APPOINMENTA20 *pVw = (CHMS_APPOINMENTA20 *)pWnd;
	pVw->OnCancelSelect();
} 
/*static void _On5MciChangeFnc(CWnd *pWnd){
	((CHMS_APPOINMENTA20 *)pWnd)->On5MciChange();
} */
/*static void _On5MciSetfocusFnc(CWnd *pWnd){
	((CHMS_APPOINMENTA20 *)pWnd)->On5MciSetfocus();} */ 
/*static void _On5MciKillfocusFnc(CWnd *pWnd){
	((CHMS_APPOINMENTA20 *)pWnd)->On5MciKillfocus();
} */
static int _On5MciCheckValueFnc(CWnd *pWnd){
	return ((CHMS_APPOINMENTA20 *)pWnd)->On5MciCheckValue();
} 
/*static void _OnXoaMoGiapChangeFnc(CWnd *pWnd){
	((CHMS_APPOINMENTA20 *)pWnd)->OnXoaMoGiapChange();
} */
/*static void _OnXoaMoGiapSetfocusFnc(CWnd *pWnd){
	((CHMS_APPOINMENTA20 *)pWnd)->OnXoaMoGiapSetfocus();} */ 
/*static void _OnXoaMoGiapKillfocusFnc(CWnd *pWnd){
	((CHMS_APPOINMENTA20 *)pWnd)->OnXoaMoGiapKillfocus();
} */
static int _OnXoaMoGiapCheckValueFnc(CWnd *pWnd){
	return ((CHMS_APPOINMENTA20 *)pWnd)->OnXoaMoGiapCheckValue();
} 
/*static void _OnNoteChangeFnc(CWnd *pWnd){
	((CHMS_APPOINMENTA20 *)pWnd)->OnNoteChange();
} */
/*static void _OnNoteSetfocusFnc(CWnd *pWnd){
	((CHMS_APPOINMENTA20 *)pWnd)->OnNoteSetfocus();} */ 
/*static void _OnNoteKillfocusFnc(CWnd *pWnd){
	((CHMS_APPOINMENTA20 *)pWnd)->OnNoteKillfocus();
} */
static int _OnNoteCheckValueFnc(CWnd *pWnd){
	return ((CHMS_APPOINMENTA20 *)pWnd)->OnNoteCheckValue();
} 
static int _OnAddHMS_APPOINMENTA20Fnc(CWnd *pWnd){
	 return ((CHMS_APPOINMENTA20*)pWnd)->OnAddHMS_APPOINMENTA20();
} 
static int _OnEditHMS_APPOINMENTA20Fnc(CWnd *pWnd){
	 return ((CHMS_APPOINMENTA20*)pWnd)->OnEditHMS_APPOINMENTA20();
} 
static int _OnDeleteHMS_APPOINMENTA20Fnc(CWnd *pWnd){
	 return ((CHMS_APPOINMENTA20*)pWnd)->OnDeleteHMS_APPOINMENTA20();
} 
static int _OnSaveHMS_APPOINMENTA20Fnc(CWnd *pWnd){
	 return ((CHMS_APPOINMENTA20*)pWnd)->OnSaveHMS_APPOINMENTA20();
} 
static int _OnCancelHMS_APPOINMENTA20Fnc(CWnd *pWnd){
	 return ((CHMS_APPOINMENTA20*)pWnd)->OnCancelHMS_APPOINMENTA20();
} 
CHMS_APPOINMENTA20::CHMS_APPOINMENTA20(CWnd *pParent):
	CGuiDialog(pParent){
	m_nDlgWidth = 485;
	m_nDlgHeight = 400;
	SetDefaultValues();
}
CHMS_APPOINMENTA20::~CHMS_APPOINMENTA20()
{
}
void CHMS_APPOINMENTA20::OnCreateComponents()
{
	/*m_wndInformationAppointment.Create(this, _T("Information Appointment"), 5, 4, 475, 415);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 195, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 200, 30, 280, 55);
	m_wndToDate.Create(this,285, 30, 385, 55); 
	m_wndLoad.Create(this, _T("&Load"), 390, 30, 470, 55);
	m_wndList.Create(this,10, 60, 470, 295); 
	m_wndDateLabel.Create(this, _T("Date"), 10, 300, 90, 325);
	m_wndDate.Create(this,95, 300, 225, 325); 
	m_wndQtyLabel.Create(this, _T("dt bo tro di can"), 230, 300, 342, 325);
	m_wndQty.Create(this,347, 300, 427, 325); 
	m_wnd5MciLabel.Create(this, _T("5Mci"), 10, 331, 90, 356);
	m_wnd5Mci.Create(this,95, 331, 225, 356); 
	m_wndXoaMoGiapLabel.Create(this, _T("Xoa mo giap"), 230, 331, 342, 356);
	m_wndXoaMoGiap.Create(this,347, 331, 427, 356); 
	m_wndNoteLabel.Create(this, _T("Note"), 10, 360, 90, 385);
	m_wndNote.Create(this,95, 360, 427, 410); 

	m_wndAdd.Create(this, _T("&Add"), 10, 420, 90, 445);
	m_wndEdit.Create(this, _T("&Edit"), 95, 420, 175, 445);
	m_wndDelete.Create(this, _T("&Delete"), 180, 420, 260, 445);
	m_wndSave.Create(this, _T("&Save"), 265, 420, 345, 445);
	m_wndCancel.Create(this, _T("&Cancel"), 350, 420, 430, 445);*/

	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 195, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 200, 30, 280, 55);
	m_wndToDate.Create(this,285, 30, 385, 55); 
	m_wndLoad.Create(this, _T("&Load"), 390, 30, 470, 55);
	m_wndList.Create(this,10, 60, 660, 295); 
	m_wndDateLabel.Create(this, _T("Date"), 10, 299, 90, 324);
	m_wndInformationAppointment.Create(this, _T("Thông tin lịch hẹn"), 5, 4, 660, 415);
	m_wndDate.Create(this,95, 299, 304, 324); 
	m_wndQtyLabel.Create(this, _T("ĐT bổ trợ di căn"), 309, 299, 442, 324);
	m_wndQty.Create(this,447, 299, 656, 324); 
	m_wnd5MciLabel.Create(this, _T("5Mci"), 10, 330, 90, 355);
	m_wnd5Mci.Create(this,95, 330, 304, 355); 
	m_wndXoaMoGiapLabel.Create(this, _T("Xóa mô giáp"), 309, 330, 442, 355);
	m_wndXoaMoGiap.Create(this,447, 330, 656, 355); 
	m_wndNoteLabel.Create(this, _T("Note"), 10, 360, 90, 385);
	m_wndNote.Create(this,95, 360, 656, 410); 
	m_wndAdd.Create(this, _T("&Add"), 236, 420, 316, 445);
	m_wndEdit.Create(this, _T("&Edit"), 321, 420, 401, 445);
	m_wndDelete.Create(this, _T("&Delete"), 406, 420, 486, 445);
	m_wndSave.Create(this, _T("&Save"), 491, 420, 571, 445);
	m_wndCancel.Create(this, _T("&Cancel"), 576, 420, 656, 445);

}
void CHMS_APPOINMENTA20::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
	//m_wndDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndDate.SetCheckValue(true);
	m_wndQty.SetLimitText(16);
	m_wndQty.SetCheckValue(true);

	m_wndNote.SetLimitText(254);
	m_wndNote.SetCheckValue(true);


	m_wndList.InsertColumn(0, _T("Date"), CFMT_DATE, 100);
	m_wndList.InsertColumn(1, _T("Bổ trợ di căn"), CFMT_NUMBER, 100);
	m_wndList.InsertColumn(2, _T("Bổ trợ di căn - còn trống"), CFMT_NUMBER, 100);

	m_wndList.InsertColumn(3, _T("5Mci"), CFMT_NUMBER, 100);
	m_wndList.InsertColumn(4, _T("5Mci - còn trống"), CFMT_NUMBER, 100);

	m_wndList.InsertColumn(5, _T("Xóa mô giáp"), CFMT_NUMBER, 100);
	m_wndList.InsertColumn(6, _T("Xóa mô giáp - còn trống"), CFMT_NUMBER, 100);

	m_wndList.InsertColumn(7, _T("Người tạo"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(8, _T("Ghi chú"), CFMT_TEXT, 200);
	//m_wndList.InsertColumn(9, _T("Số lượng còn trống chưa hẹn"), CFMT_TEXT|CFMT_CENTER, 100);

	m_hms_appointment_setupTbl.SetTableName(_T("hms_appointment_setup"));
	m_hms_appointment_setupTbl.AddField(_T("HAS_DEPTID"), dfText, 20); 
	m_hms_appointment_setupTbl.AddField(_T("HAS_CREATEBY"), dfText, 20); 
	m_hms_appointment_setupTbl.AddField(_T("HAS_CREATEDATE"), dfDateTime); 
	m_hms_appointment_setupTbl.AddField(_T("HAS_UPDATEDATE"), dfDateTime); 
	m_hms_appointment_setupTbl.AddField(_T("HAS_DATE"), dfDate); 
	m_hms_appointment_setupTbl.AddField(_T("HAS_QTY"), dfLong);
	m_hms_appointment_setupTbl.AddField(_T("HAS_5mci"), dfLong); 
	m_hms_appointment_setupTbl.AddField(_T("HAS_xoamo"), dfLong); 
	m_hms_appointment_setupTbl.AddField(_T("HAS_note"), dfText, 254); 

}
void CHMS_APPOINMENTA20::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndLoad.SetEvent(WE_CLICK, _OnLoadSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Xuất danh sách lịch hẹn ra exel"), _OnListDeleteItemFnc);
	//m_wndDate.SetEvent(WE_CHANGE, _OnDateChangeFnc);
	//m_wndDate.SetEvent(WE_SETFOCUS, _OnDateSetfocusFnc);
	//m_wndDate.SetEvent(WE_KILLFOCUS, _OnDateKillfocusFnc);
	m_wndDate.SetEvent(WE_CHECKVALUE, _OnDateCheckValueFnc);
	//m_wndQty.SetEvent(WE_CHANGE, _OnQtyChangeFnc);
	//m_wndQty.SetEvent(WE_SETFOCUS, _OnQtySetfocusFnc);
	//m_wndQty.SetEvent(WE_KILLFOCUS, _OnQtyKillfocusFnc);
	m_wndQty.SetEvent(WE_CHECKVALUE, _OnQtyCheckValueFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	//m_wnd5Mci.SetEvent(WE_CHANGE, _On5MciChangeFnc);
	//m_wnd5Mci.SetEvent(WE_SETFOCUS, _On5MciSetfocusFnc);
	//m_wnd5Mci.SetEvent(WE_KILLFOCUS, _On5MciKillfocusFnc);
	m_wnd5Mci.SetEvent(WE_CHECKVALUE, _On5MciCheckValueFnc);
	//m_wndXoaMoGiap.SetEvent(WE_CHANGE, _OnXoaMoGiapChangeFnc);
	//m_wndXoaMoGiap.SetEvent(WE_SETFOCUS, _OnXoaMoGiapSetfocusFnc);
	//m_wndXoaMoGiap.SetEvent(WE_KILLFOCUS, _OnXoaMoGiapKillfocusFnc);
	m_wndXoaMoGiap.SetEvent(WE_CHECKVALUE, _OnXoaMoGiapCheckValueFnc);
	//m_wndNote.SetEvent(WE_CHANGE, _OnNoteChangeFnc);
	//m_wndNote.SetEvent(WE_SETFOCUS, _OnNoteSetfocusFnc);
	//m_wndNote.SetEvent(WE_KILLFOCUS, _OnNoteKillfocusFnc);
	m_wndNote.SetEvent(WE_CHECKVALUE, _OnNoteCheckValueFnc);
	SetMode(VM_VIEW);
	CDate dte;
	m_szFromDate = pMF->GetSysDate();
	dte.ParseDate(m_szFromDate);
	dte += 7;
	m_szToDate.Format(_T("%s"), dte.GetDate());


	UpdateData(false);
	OnListLoadData();

}
void CHMS_APPOINMENTA20::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndDate.GetDlgCtrlID(), m_szDate);
	DDX_Text(pDX, m_wndQty.GetDlgCtrlID(), m_nQty);
	DDX_Text(pDX, m_wnd5Mci.GetDlgCtrlID(), m_n5Mci);
	DDX_Text(pDX, m_wndXoaMoGiap.GetDlgCtrlID(), m_nXoaMoGiap);
	DDX_Text(pDX, m_wndNote.GetDlgCtrlID(), m_szNote);

}
void CHMS_APPOINMENTA20::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("FromDate")] =  m_szFromDate;
	m_jData[_T("ToDate")] =  m_szToDate;
	m_jData[_T("Date")] =  m_szDate;
	m_jData[_T("Qty")] =  m_nQty;
	m_jData[_T("5Mci")] =  m_n5Mci;
	m_jData[_T("XoaMoGiap")] =  m_nXoaMoGiap;
	}
	else
	{
			
	m_jData[_T("FromDate")].GetValue(m_szFromDate);
	m_jData[_T("ToDate")].GetValue(m_szToDate);
	m_jData[_T("Date")].GetValue(m_szDate);
	m_jData[_T("Qty")].GetValue(m_nQty);
	m_jData[_T("5Mci")].GetValue(m_n5Mci);
	m_jData[_T("XoaMoGiap")].GetValue(m_nXoaMoGiap);
	}

}
void CHMS_APPOINMENTA20::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMS_APPOINMENTA20::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_hms_appointment_setupTbl.SetValue(_T("HAS_DEPTID"), pMF->GetCurrentDepartmentID()); 
	m_hms_appointment_setupTbl.SetValue(_T("HAS_CREATEBY"), pMF->GetCurrentUser()); 
	m_hms_appointment_setupTbl.SetValue(_T("HAS_CREATEDATE"), pMF->GetSysDateTime()); 
	m_hms_appointment_setupTbl.SetValue(_T("HAS_UPDATEDATE"), pMF->GetSysDateTime()); 
	m_hms_appointment_setupTbl.SetValue(_T("HAS_DATE"), m_szDate); 
	m_hms_appointment_setupTbl.SetValue(_T("HAS_QTY"), m_nQty); 
	m_hms_appointment_setupTbl.SetValue(_T("HAS_5mci"), m_n5Mci); 
	m_hms_appointment_setupTbl.SetValue(_T("HAS_xoamo"), m_nXoaMoGiap);
	m_hms_appointment_setupTbl.SetValue(_T("HAS_note"), m_szNote); 
}
void CHMS_APPOINMENTA20::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szDate.Empty();
	m_nQty=0;
	m_n5Mci=0;
	m_nXoaMoGiap=0;
	m_szNote.Empty();

}
int CHMS_APPOINMENTA20::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);

  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 4, 5, -1);
			m_szDate= pMF->GetSysDate();
			m_nQty=0;
			m_wndQty.SetFocus();
 			//SetDefaultValues();
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE,  4,5, -1);
			m_wndFromDate.EnableWindow(true);
			m_wndToDate.EnableWindow(true);
			m_wndDate.EnableWindow(false);
			
	/*if (m_nqty_diff <= 0)
	{
		m_wndQty.EnableWindow(false);		
	}

	if (m_nHAS_5mci_diff <= 0)
	{		
		m_wnd5Mci.EnableWindow(false);	
	}

	if (m_nHAS_xoamo_diff <= 0)
	{		
		m_wndXoaMoGiap.EnableWindow(false);	
	}*/

 			break;
 		case VM_VIEW: 
 			EnableControls(FALSE);
 			EnableButtons(TRUE, 0, 1,2,3, -1);
			m_wndFromDate.EnableWindow(true);
			m_wndToDate.EnableWindow(true);
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
/*void CHMS_APPOINMENTA20::OnFromDateChange(){
	
} */
/*void CHMS_APPOINMENTA20::OnFromDateSetfocus(){
	
} */
/*void CHMS_APPOINMENTA20::OnFromDateKillfocus(){
	
} */
int CHMS_APPOINMENTA20::OnFromDateCheckValue(){
	return 0;
} 
/*void CHMS_APPOINMENTA20::OnToDateChange(){
	
} */
/*void CHMS_APPOINMENTA20::OnToDateSetfocus(){
	
} */
/*void CHMS_APPOINMENTA20::OnToDateKillfocus(){
	
} */
int CHMS_APPOINMENTA20::OnToDateCheckValue(){
	return 0;
} 
void CHMS_APPOINMENTA20::OnLoadSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnListLoadData();
	
} 
#include "HMSAddAppointmentA20.h"
void CHMS_APPOINMENTA20::OnListDblClick(){
	UpdateData(true);
	CHMSAddAppointmentA20 dlg(this);
	dlg.m_szFromDate = m_szDate;
	dlg.m_szToDate= m_szDate;
	dlg.SetMode(VM_VIEW);
	dlg.DoModal();
	return;
	
} 
void CHMS_APPOINMENTA20::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_szDate= m_wndList.GetItemText(nNewItem,0);

	m_nQty=ToInt(m_wndList.GetItemText(nNewItem,1));
	m_nQtyOld = m_nQty;
	m_nqty_diff = ToInt(m_wndList.GetItemText(nNewItem,2));
	m_nqty_diffOld = m_nqty_diff;
	
	m_n5Mci=ToInt(m_wndList.GetItemText(nNewItem,3));
	m_n5MciOld = m_n5Mci;

	m_nHAS_5mci_diff=ToInt(m_wndList.GetItemText(nNewItem,4));
	
	m_nXoaMoGiap=ToInt(m_wndList.GetItemText(nNewItem,5));
	m_nXoaMoGiapOld=m_nXoaMoGiap;

	m_nHAS_xoamo_diff = ToInt(m_wndList.GetItemText(nNewItem,6));	
	m_szNote= m_wndList.GetItemText(nNewItem,8);

	UpdateData(false);
	
} 
int CHMS_APPOINMENTA20::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	int nCount =OnListExport();
	 return 0;
} 
long CHMS_APPOINMENTA20::OnListLoadData(){

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	UpdateData(TRUE);
	m_wndList.BeginLoad(); 
	int nCount = 0;	

	szSQL.Format(_T(" SELECT") \
	_T(" createdby, xdate, qty, HAS_5mci, HAS_xoamo, (qty-qty_left) as qty_diff, (HAS_5mci-HAS_5mci_left) as HAS_5mci_diff, (HAS_xoamo-HAS_xoamo_left) as HAS_xoamo_diff, ordered, note") \
	_T(" FROM") \
	_T(" (") \
	_T("   SELECT distinct(has_date)           AS xdate, ") \
	_T("   has_createby AS createdby,") \
	_T("   has_qty           AS qty,") \
	_T("   HAS_5mci,") \
	_T("   HAS_xoamo,") \
	_T("   has_ordered AS ordered,") \
	_T("   has_note    AS note,") \
	_T("   (select count(*) from HMS_APPOINTMENT_DETAIL WHERE has_date=had_date AND had_type = '1' AND has_deptid = had_deptid) as qty_left,") \
	_T("   (select count(*) from HMS_APPOINTMENT_DETAIL WHERE has_date=had_date AND had_type = '2' AND has_deptid = had_deptid) as HAS_5mci_left,") \
	_T("   (select count(*) from HMS_APPOINTMENT_DETAIL WHERE has_date=had_date AND had_type = '3' AND has_deptid = had_deptid) as HAS_xoamo_left") \
	_T(" FROM hms_appointment_setup") \
	_T(" LEFT JOIN HMS_APPOINTMENT_DETAIL ON (has_date=had_date)") \
	_T(" WHERE has_date BETWEEN to_date('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_date('%s', 'yyyy/mm/dd hh24:mi:ss')") \
	_T(" AND HAS_DEPTID = '%s' ") \
	
	_T(" GROUP BY ") \
	_T(" has_createby,") \
	_T("   has_date,") \
	_T("   has_qty,") \
	_T("   HAS_5mci,") \
	_T("   HAS_xoamo,") \
	_T("   has_ordered,") \
	_T("   has_note, had_deptid, has_deptid") \
	_T(" ORDER BY has_date") \
	_T(" )"), m_szFromDate,m_szToDate, pMF->GetCurrentDepartmentID(), pMF->GetCurrentDepartmentID());

	//_msg(_T("%s"),szSQL);
	//_msg(_T("%s"),pMF->GetDepartmentID());
	

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF())
	{ 
			m_wndList.AddItems(
			rs.GetValue(_T("xdate")), 
			rs.GetValue(_T("qty")),
			rs.GetValue(_T("qty_diff")),
			rs.GetValue(_T("HAS_5mci")),
			rs.GetValue(_T("HAS_5mci_diff")),
			rs.GetValue(_T("HAS_xoamo")),
			rs.GetValue(_T("HAS_xoamo_diff")),
			rs.GetValue(_T("createdby")),
			rs.GetValue(_T("note")),			
			NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad();
	m_wndList.SetCurSel(0);
	return nCount;
}
/*void CHMS_APPOINMENTA20::OnDateChange(){
	
} */
/*void CHMS_APPOINMENTA20::OnDateSetfocus(){
	
} */
/*void CHMS_APPOINMENTA20::OnDateKillfocus(){
	
} */
int CHMS_APPOINMENTA20::OnDateCheckValue(){
	return 0;
} 
/*void CHMS_APPOINMENTA20::OnQtyChange(){
	
} */
/*void CHMS_APPOINMENTA20::OnQtySetfocus(){
	
} */
/*void CHMS_APPOINMENTA20::OnQtyKillfocus(){
	
} */
int CHMS_APPOINMENTA20::OnQtyCheckValue()
{	
	if (m_nqty_diff <= 0 && m_nQty < m_nQtyOld && GetMode() == VM_EDIT)
	{
		ShowMessageBox(_T("không được phép sửa số lượng thiết lập bổ trợ di căn nhỏ hơn ban đầu!!"),MB_ICONERROR | MB_OK);
		return -1;
	}	
	return 0;
} 
void CHMS_APPOINMENTA20::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnAddHMS_APPOINMENTA20();
	
} 
void CHMS_APPOINMENTA20::OnEditSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnEditHMS_APPOINMENTA20();
	
} 
void CHMS_APPOINMENTA20::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	// kiểm tra ngày hẹn có 

	CString szSQL,tmpStr,szDesc;
	CRecord rs(&pMF->m_db);

	szSQL.Format(_T("select count(*) as qty from hms_appointment_detail where HAD_DATE = to_date('%s','YYYY-MM-DD HH24:MI:SS') AND HAD_DEPTID='%s'"), m_szDate, pMF->GetCurrentDepartmentID());
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() >0) 
	{
		ShowMessageBox(_T("Đã có bệnh nhân được hẹn trong ngày bạn muốn xóa, hãy kiểm tra lại "));
		return;
	}
	else
	{
		tmpStr.Format(_T("Bạn có muốn xóa lịch hẹn ngày [%s]"), m_szDate);
		if(ShowMessageBox(tmpStr, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 			return ; 
		szSQL.Format(_T("Delete from hms_appointment_setup where has_DATE = to_date('%s','YYYY-MM-DD HH24:MI:SS') AND HAS_DEPTID='%s'"), m_szDate, pMF->GetCurrentDepartmentID());
		int nCount=	pMF->ExecSQL(szSQL);
		if(nCount >0) 
		{
			tmpStr.Format(_T("Xóa thành công ngày hẹn [%s]"), m_szDate);
			ShowMessageBox(tmpStr);
			OnListLoadData();
			szDesc.Format(_T("User [%s] xóa lịch hẹn ngày [%s]"), pMF->GetCurrentUser(), m_szDate);
			pMF->SystemLog(_T("Delete Appoint Date "),szDesc);
		}
		else
		{
			tmpStr.Format(_T("Xóa không thành công [%s]"), m_szDate);
			ShowMessageBox(tmpStr);
		}		
	}
	
} 
void CHMS_APPOINMENTA20::OnSaveSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveHMS_APPOINMENTA20();
	
} 
void CHMS_APPOINMENTA20::OnCancelSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	SetMode(VM_VIEW);
	
} 
/*void CHMS_APPOINMENTA20::On5MciChange(){
	
} */
/*void CHMS_APPOINMENTA20::On5MciSetfocus(){
	
} */
/*void CHMS_APPOINMENTA20::On5MciKillfocus(){
	
} */
int CHMS_APPOINMENTA20::On5MciCheckValue(){
	return 0;
} 
/*void CHMS_APPOINMENTA20::OnXoaMoGiapChange(){
	
} */
/*void CHMS_APPOINMENTA20::OnXoaMoGiapSetfocus(){
	
} */
/*void CHMS_APPOINMENTA20::OnXoaMoGiapKillfocus(){
	
} */
int CHMS_APPOINMENTA20::OnXoaMoGiapCheckValue(){
	return 0;
} 
/*void CHMS_APPOINMENTA20::OnNoteChange(){
	
} */
/*void CHMS_APPOINMENTA20::OnNoteSetfocus(){
	
} */
/*void CHMS_APPOINMENTA20::OnNoteKillfocus(){
	
} */
int CHMS_APPOINMENTA20::OnNoteCheckValue(){
	return 0;
} 
int CHMS_APPOINMENTA20::OnAddHMS_APPOINMENTA20(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMS_APPOINMENTA20::OnEditHMS_APPOINMENTA20(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMS_APPOINMENTA20::OnDeleteHMS_APPOINMENTA20(){
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
 		OnCancelHMS_APPOINMENTA20();
 	}
	return 0;
}
int CHMS_APPOINMENTA20::OnSaveHMS_APPOINMENTA20()
{
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
	CRecord rs(&pMF->m_db);
	int nCurrentQty, nCurrent5MciQty, nCurrentXoaMoGiap;	
	
	//Đoạn này nếu viết hàm truyền vào ngày sẽ chuẩn hơn
	
	szSQL.Format(_T("select count(*) as CurrentQty from HMS_APPOINTMENT_DETAIL where had_type = '1' AND HAD_DATE = to_date('%s','YYYY-MM-DD') and had_deptid='%s' "),m_szDate, pMF->GetCurrentDepartmentID());

		rs.ExecSQL(szSQL);	
		rs.GetValue(_T("CurrentQty"),nCurrentQty);		

		if (m_nQty - nCurrentQty <0)
		{
		ShowMessageBox(_T("không được phép sửa số lượng thiết lập bổ trợ di căn nhỏ hơn ban đầu!"),MB_ICONERROR | MB_OK);
		return -2;
		}

	szSQL.Format(_T("select count(*) as MciQty from HMS_APPOINTMENT_DETAIL where had_type = '2' AND HAD_DATE = to_date('%s','YYYY-MM-DD') and had_deptid='%s' "),m_szDate, pMF->GetCurrentDepartmentID());

		rs.ExecSQL(szSQL);		
		rs.GetValue(_T("MciQty"),nCurrent5MciQty);		

		if (m_n5Mci - nCurrent5MciQty <0)
		{
		ShowMessageBox(_T("không được phép sửa số lượng thiết lập 5Mci nhỏ hơn ban đầu!"),MB_ICONERROR | MB_OK);
		return -2;
		}

	szSQL.Format(_T("select count(*) as XoaMoGiapQty from HMS_APPOINTMENT_DETAIL where had_type = '3' AND HAD_DATE = to_date('%s','YYYY-MM-DD') and had_deptid='%s' "),m_szDate, pMF->GetCurrentDepartmentID());

		rs.ExecSQL(szSQL);		
		rs.GetValue(_T("XoaMoGiapQty"),nCurrentXoaMoGiap);		

		if (m_nXoaMoGiap - nCurrentXoaMoGiap <0)
		{
		ShowMessageBox(_T("không được phép sửa số lượng thiết lập xóa mô giáp nhỏ hơn ban đầu!"),MB_ICONERROR | MB_OK);
		return -2;
		}
	


 	if(GetMode() == VM_ADD)
	{
		
		szSQL.Format(_T("Select count(*) as qty from hms_appointment_setup where has_date = to_date('%s','YYYY-MM-DD') and has_deptid='%s'"),m_szDate, pMF->GetCurrentDepartmentID());
		rs.ExecSQL(szSQL);
		int nCount;
		rs.GetValue(_T("qty"),nCount);
		if(nCount >0)
		{
			ShowMessageBox(_T("Đã có thiết lập lịch hẹn cho ngày được chọn!"));
			return -1;
		}
 		szSQL = m_hms_appointment_setupTbl.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT)
	{
 		CString szWhere;
 		szWhere.Format(_T(" WHERE has_date = to_date('%s','YYYY-MM-DD') and has_deptid = '%s'"), m_szDate, pMF->GetCurrentDepartmentID());
 		szSQL = m_hms_appointment_setupTbl.GetUpdateSQL(_T("has_createdby,has_createddate"));
 		szSQL += szWhere;
 	}
 //_msg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
 		//OnHMS_APPOINMENTA20ListLoadData();
		OnListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMS_APPOINMENTA20::OnCancelHMS_APPOINMENTA20(){
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
int CHMS_APPOINMENTA20::OnHMS_APPOINMENTA20ListLoadData(){
	return 0;
}
int CHMS_APPOINMENTA20::OnListExport()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	BeginWaitCursor();
	CRecord rs(&pMF->m_db);
	CStringArray arrCol;
	CExcel xls;
	CString szSQL, tmpStr;
	double nTmp = 0;
	long double nTotalAmount = 0;
	int nIdx = 1, nRow = 0, nTotalOrder = 0;
	
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	xls.SetColumnWidth(0, 15);
	xls.SetColumnWidth(1, 15);
	xls.SetColumnWidth(2, 15);
	xls.SetColumnWidth(3, 15);
	xls.SetColumnWidth(4, 10);
	xls.SetColumnWidth(5, 20);
	xls.SetColumnWidth(6,12);

	xls.SetColumnWidth(7,14);
	xls.SetColumnWidth(8,14);
	xls.SetColumnWidth(9,20);
	xls.SetColumnWidth(10,15);
	xls.SetColumnWidth(11,15);
	xls.SetColumnWidth(12,15);
	xls.SetColumnWidth(13,15);


	xls.SetCellMergedColumns(0, 0, 2);
	xls.SetCellMergedColumns(0, 1, 2);
	xls.SetCellMergedColumns(0, 2, 6);
	xls.SetCellMergedColumns(0, 3, 6);
	xls.SetCellText(0, 0, pMF->m_szHealthService, 4098, true);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, 4098, true);
	//TODO: Write Excel Name
	xls.SetCellText(0, 2, _T("LỊCH HẸN KHOA A20"), 4098, true);
	tmpStr.Format(_T("Từ ngày %s đến ngày %s"), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	xls.SetCellText(0, 3, tmpStr, 4098, true);
	//TODO: Write Column Header


	//m_wndList.InsertColumn(0, _T("Date"), CFMT_DATE, 100);
	//m_wndList.InsertColumn(1, _T("Bổ trợ di căn"), CFMT_NUMBER, 100);
	//m_wndList.InsertColumn(2, _T("5Mci"), CFMT_NUMBER, 100);
	//m_wndList.InsertColumn(3, _T("Xóa mô giáp"), CFMT_NUMBER, 100);
	//m_wndList.InsertColumn(4, _T("Người tạo"), CFMT_TEXT, 100);
	//m_wndList.InsertColumn(5, _T("Ghi chú"), CFMT_TEXT, 250);

	arrCol.Add(_T("Ngày hẹn"));
	arrCol.Add(_T("Bổ trợ di căn"));
	arrCol.Add(_T("Bổ trợ di căn-còn trống"));
	arrCol.Add(_T("5Mci"));
	arrCol.Add(_T("5Mci-còn trống"));
	arrCol.Add(_T("Xóa mô giáp"));
	arrCol.Add(_T("Xóa mô giáp-còn trống"));
	arrCol.Add(_T("Người tạo"));
	arrCol.Add(_T("Ghi chú"));
	

	for (int i = 0; i < arrCol.GetCount(); i++)
		xls.SetCellText(i, 4, arrCol.GetAt(i), 4098, true);
	nRow = 5;
	for( int i=0; i < m_wndList.GetItemCount();i++)
	{
		for(int j=0; j < m_wndList.GetColumnCount(); j++)
		{
			
			tmpStr= m_wndList.GetItemText(i,j);
		
			xls.SetCellText(j, nRow, tmpStr, j==0?FMT_DATE:FMT_TEXT);
			
		}
		nRow++;

	}	
	EndWaitCursor();

	xls.Save(_T("Exports\\DanhsachLichHenDieuTri.xls"));
	return 1;
}