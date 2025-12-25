#include "stdafx.h"
#include "SRMThuthapthongtinCLS.h"
#include "ReportDocument.h"
#include "HMSMainFrame.h"
#include "Excel.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CSRMThuthapthongtinCLS *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CSRMThuthapthongtinCLS *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CSRMThuthapthongtinCLS *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CSRMThuthapthongtinCLS *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CSRMThuthapthongtinCLS *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CSRMThuthapthongtinCLS *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CSRMThuthapthongtinCLS *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CSRMThuthapthongtinCLS *)pWnd)->OnToDateCheckValue();
} 
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	CSRMThuthapthongtinCLS *pVw = (CSRMThuthapthongtinCLS *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CSRMThuthapthongtinCLS *pVw = (CSRMThuthapthongtinCLS *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CSRMThuthapthongtinCLS *pVw = (CSRMThuthapthongtinCLS *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CSRMThuthapthongtinCLS *pVw = (CSRMThuthapthongtinCLS *)pWnd;
	pVw->OnCloseSelect();
} 
static void _OnPractitionerSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CSRMThuthapthongtinCLS* )pWnd)->OnPractitionerSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPractitionerSelendokFnc(CWnd *pWnd){
	((CSRMThuthapthongtinCLS *)pWnd)->OnPractitionerSelendok();
}
/*static void _OnPractitionerSetfocusFnc(CWnd *pWnd){
	((CSRMThuthapthongtinCLS *)pWnd)->OnPractitionerKillfocus();
}*/
/*static void _OnPractitionerKillfocusFnc(CWnd *pWnd){
	((CSRMThuthapthongtinCLS *)pWnd)->OnPractitionerKillfocus();
}*/
static long _OnPractitionerLoadDataFnc(CWnd *pWnd){
	return ((CSRMThuthapthongtinCLS *)pWnd)->OnPractitionerLoadData();
}
/*static void _OnPractitionerAddNewFnc(CWnd *pWnd){
	((CSRMThuthapthongtinCLS *)pWnd)->OnPractitionerAddNew();
}*/
static void _OnObjectSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CSRMThuthapthongtinCLS* )pWnd)->OnObjectSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnObjectSelendokFnc(CWnd *pWnd){
	((CSRMThuthapthongtinCLS *)pWnd)->OnObjectSelendok();
}
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CSRMThuthapthongtinCLS *)pWnd)->OnObjectKillfocus();
}*/
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CSRMThuthapthongtinCLS *)pWnd)->OnObjectKillfocus();
}*/
static long _OnObjectLoadDataFnc(CWnd *pWnd){
	return ((CSRMThuthapthongtinCLS *)pWnd)->OnObjectLoadData();
}
/*static void _OnObjectAddNewFnc(CWnd *pWnd){
	((CSRMThuthapthongtinCLS *)pWnd)->OnObjectAddNew();
}*/
static void _OnOrderDateSelectFnc(CWnd *pWnd){
	  ((CSRMThuthapthongtinCLS*)pWnd)->OnOrderDateSelect();
}
static void _OnPerformDateSelectFnc(CWnd *pWnd){
	  ((CSRMThuthapthongtinCLS*)pWnd)->OnPerformDateSelect();
}
static long _OnListItemLoadDataFnc(CWnd *pWnd){
	return ((CSRMThuthapthongtinCLS*)pWnd)->OnListItemLoadData();
} 
static void _OnListItemClickFnc(CWnd *pWnd){
	((CSRMThuthapthongtinCLS*)pWnd)->OnListItemClick();	
} 
static void _OnListItemDblClickFnc(CWnd *pWnd){
	((CSRMThuthapthongtinCLS*)pWnd)->OnListItemDblClick();
} 
static void _OnListItemSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CSRMThuthapthongtinCLS*)pWnd)->OnListItemSelectChange(nOldItem, nNewItem);
} 
static int _OnListCheckAllFnc(CWnd *pWnd){
	 return ((CSRMThuthapthongtinCLS*)pWnd)->OnListCheckAll();
} 
static int _OnListUnCheckAllFnc(CWnd *pWnd){
	 return ((CSRMThuthapthongtinCLS*)pWnd)->OnListUnCheckAll();
} 
static long _OnRoomListLoadDataFnc(CWnd *pWnd){
	return ((CSRMThuthapthongtinCLS*)pWnd)->OnRoomListLoadData();
} 
static void _OnRoomListDblClickFnc(CWnd *pWnd){
	((CSRMThuthapthongtinCLS*)pWnd)->OnRoomListDblClick();
} 
static void _OnRoomListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CSRMThuthapthongtinCLS*)pWnd)->OnRoomListSelectChange(nOldItem, nNewItem);
} 
static int _OnRoomCheckAllFnc(CWnd *pWnd){
	 return ((CSRMThuthapthongtinCLS*)pWnd)->OnRoomCheckAll();
} 
static int _OnRoomUnCheckAllFnc(CWnd *pWnd){
	 return ((CSRMThuthapthongtinCLS*)pWnd)->OnRoomUnCheckAll();
} 

static int _OnAddHMSRoomExaminationReportDialogFnc(CWnd *pWnd){
	 return ((CSRMThuthapthongtinCLS*)pWnd)->OnAddHMSRoomExaminationReportDialog();
} 
static int _OnEditHMSRoomExaminationReportDialogFnc(CWnd *pWnd){
	 return ((CSRMThuthapthongtinCLS*)pWnd)->OnEditHMSRoomExaminationReportDialog();
} 
static int _OnDeleteHMSRoomExaminationReportDialogFnc(CWnd *pWnd){
	 return ((CSRMThuthapthongtinCLS*)pWnd)->OnDeleteHMSRoomExaminationReportDialog();
} 
static int _OnSaveHMSRoomExaminationReportDialogFnc(CWnd *pWnd){
	 return ((CSRMThuthapthongtinCLS*)pWnd)->OnSaveHMSRoomExaminationReportDialog();
} 
static int _OnCancelHMSRoomExaminationReportDialogFnc(CWnd *pWnd){
	 return ((CSRMThuthapthongtinCLS*)pWnd)->OnCancelHMSRoomExaminationReportDialog();
} 
static void _OnOutPatientSelectFnc(CWnd *pWnd){
	  ((CSRMThuthapthongtinCLS*)pWnd)->OnOutPatientSelect();
}
static void _OnInPatientSelectFnc(CWnd *pWnd){
	  ((CSRMThuthapthongtinCLS*)pWnd)->OnInPatientSelect();
}
static void _OnAllHospitalsSelectFnc(CWnd *pWnd){
	  ((CSRMThuthapthongtinCLS*)pWnd)->OnAllHospitalsSelect();
}

CSRMThuthapthongtinCLS::CSRMThuthapthongtinCLS(CWnd *pParent)
{

	m_nDlgWidth = 480;
	m_nDlgHeight = 605;
	SetDefaultValues();
}
CSRMThuthapthongtinCLS::~CSRMThuthapthongtinCLS(){
}
void CSRMThuthapthongtinCLS::OnCreateComponents(){
	m_wndReportFilter.Create(this, _T("Report Filter"), 6, 4, 471, 154);
	m_wndGroupRoom.Create(this, _T("Examination Room"), 5, 159, 470, 318);
	m_wndGroupTest.Create(this, _T("Test Group"), 6, 323, 471, 511);
	m_wndFromDateLabel.Create(this, _T("From Date"), 11, 60, 111, 85);
	m_wndFromDate.Create(this,116, 60, 228, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 258, 60, 346, 85);
	m_wndToDate.Create(this,351, 60, 463, 85); 	
	m_wndPractitionerLabel.Create(this, _T("Practitioner"), 11, 93, 111, 118);
	m_wndPractitioner.Create(this,116, 93, 270, 118); 
	m_wndObjectLabel.Create(this, _T("Object"), 275, 93, 346, 118);
	m_wndObject.Create(this,351, 93, 465, 118); 
	m_wndOrderDate.Create(this, _T("Order Date"), 116, 30, 242, 55);
	m_wndPerformDate.Create(this, _T("Perform Date"), 337, 30, 463, 55);
	m_wndListItem.Create(this,11, 347, 466, 507); 
	m_wndRoomList.Create(this,10, 183, 465, 316); 
	m_wndOutPatient.Create(this, _T("OutPatient"), 14, 123, 161, 148);
	m_wndInPatient.Create(this, _T("InPatient"), 166, 123, 313, 148);
	m_wndAllHospitals.Create(this, _T("All Hospitals"), 318, 123, 465, 148);
	//m_wndPrintPreview.Create(this, _T("Print Pre&view"), 135, 519, 215, 544);
	m_wndPrint.Create(this, _T("&Print"), 220, 519, 300, 544);
	m_wndExport.Create(this, _T("&Export"), 305, 519, 385, 544);
	//m_wndClose.Create(this, _T("&Close"), 390, 519, 470, 544);

}
void CSRMThuthapthongtinCLS::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	EnableControls(TRUE);	
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	m_wndPractitioner.SetCheckValue(true);
	m_wndPractitioner.LimitText(35);
	m_wndObject.SetCheckValue(true);
	m_wndObject.LimitText(35);
	m_szFromDate = pMF->GetSysDate() + _T("00:01");
	m_szToDate = pMF->GetSysDate()+ _T("23:59");

	m_wndPractitioner.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndPractitioner.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndObject.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndObject.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);

	m_wndListItem.SetCheckBox(true);
	m_wndListItem.InsertColumn(0, _T("Desc"), CFMT_TEXT, 430);
	m_wndListItem.InsertColumn(1, _T("ID"), CFMT_TEXT, 0);
	m_wndListItem.InsertColumn(2, _T("ID"), CFMT_TEXT, 0);


	m_wndRoomList.SetCheckBox(true);
	m_wndRoomList.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndRoomList.InsertColumn(1, _T("Desc"), CFMT_TEXT, 320);
	m_nPerformDate=0;
	OnListItemLoadData();
	OnRoomListLoadData();
	UpdateData(false);
}
void CSRMThuthapthongtinCLS::OnSetWindowEvents(){
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndPrintPreview.SetEvent(WE_CLICK, _OnPrintPreviewSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndPractitioner.SetEvent(WE_SELENDOK, _OnPractitionerSelendokFnc);
	//m_wndPractitioner.SetEvent(WE_SETFOCUS, _OnPractitionerSetfocusFnc);
	//m_wndPractitioner.SetEvent(WE_KILLFOCUS, _OnPractitionerKillfocusFnc);
	m_wndPractitioner.SetEvent(WE_SELCHANGE, _OnPractitionerSelectChangeFnc);
	m_wndPractitioner.SetEvent(WE_LOADDATA, _OnPractitionerLoadDataFnc);
	//m_wndPractitioner.SetEvent(WE_ADDNEW, _OnPractitionerAddNewFnc);
	m_wndObject.SetEvent(WE_SELENDOK, _OnObjectSelendokFnc);
	//m_wndObject.SetEvent(WE_SETFOCUS, _OnObjectSetfocusFnc);
	//m_wndObject.SetEvent(WE_KILLFOCUS, _OnObjectKillfocusFnc);
	m_wndObject.SetEvent(WE_SELCHANGE, _OnObjectSelectChangeFnc);
	m_wndObject.SetEvent(WE_LOADDATA, _OnObjectLoadDataFnc);
	//m_wndObject.SetEvent(WE_ADDNEW, _OnObjectAddNewFnc);
	m_wndOrderDate.SetEvent(WE_CLICK, _OnOrderDateSelectFnc);
	m_wndPerformDate.SetEvent(WE_CLICK, _OnPerformDateSelectFnc);
	m_wndListItem.SetEvent(WE_SELCHANGE, _OnListItemSelectChangeFnc);
	m_wndListItem.SetEvent(WE_LOADDATA, _OnListItemLoadDataFnc);
	m_wndListItem.SetEvent(WE_DBLCLICK, _OnListItemDblClickFnc);
	m_wndListItem.SetEvent(WE_CHECKVALUE , _OnListItemClickFnc);
	m_wndListItem.AddEvent(1, _T("Check All"), _OnListCheckAllFnc, 0, VK_SELECT, 0);
	m_wndListItem.AddEvent(2, _T("Un Check All"), _OnListUnCheckAllFnc, 0, VK_SELECT, 0);

	m_wndRoomList.SetEvent(WE_SELCHANGE, _OnRoomListSelectChangeFnc);
	m_wndRoomList.SetEvent(WE_LOADDATA, _OnRoomListLoadDataFnc);
	m_wndRoomList.SetEvent(WE_DBLCLICK, _OnRoomListDblClickFnc);
	m_wndRoomList.AddEvent(1, _T("Check All"), _OnRoomCheckAllFnc, 0, VK_DELETE, 0);
	m_wndRoomList.AddEvent(2, _T("UnCheck All"), _OnRoomUnCheckAllFnc, 0, VK_DELETE, 0);

	m_wndOutPatient.SetEvent(WE_CLICK, _OnOutPatientSelectFnc);
	m_wndInPatient.SetEvent(WE_CLICK, _OnInPatientSelectFnc);
	m_wndAllHospitals.SetEvent(WE_CLICK, _OnAllHospitalsSelectFnc);



}
void CSRMThuthapthongtinCLS::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndPractitioner.GetDlgCtrlID(), m_szPractitionerKey);
	DDX_TextEx(pDX, m_wndObject.GetDlgCtrlID(), m_szObjectKey);
	DDX_Radio(pDX, m_wndOrderDate.GetDlgCtrlID(), m_nOrderDate);
	DDX_Radio(pDX, m_wndPerformDate.GetDlgCtrlID(), m_nPerformDate);
	DDX_Check(pDX, m_wndOutPatient.GetDlgCtrlID(), m_nOutPatient);
	DDX_Check(pDX, m_wndInPatient.GetDlgCtrlID(), m_nInPatient);
	DDX_Check(pDX, m_wndAllHospitals.GetDlgCtrlID(), m_nAllHospitals);

}
void CSRMThuthapthongtinCLS::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CSRMThuthapthongtinCLS::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CSRMThuthapthongtinCLS::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szPractitionerKey.Empty();
	m_szObjectKey.Empty();
	m_nOrderDate=1;
	m_nPerformDate=1;
	m_nOutPatient=0;
	m_nInPatient=0;
	m_nAllHospitals=0;


}
int CSRMThuthapthongtinCLS::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiView::SetMode(nMode); 
 		CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
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
/*void CSRMThuthapthongtinCLS::OnFromDateChange(){
	
} */
/*void CSRMThuthapthongtinCLS::OnFromDateSetfocus(){
	
} */
/*void CSRMThuthapthongtinCLS::OnFromDateKillfocus(){
	
} */
int CSRMThuthapthongtinCLS::OnFromDateCheckValue(){
	return 0;
} 
/*void CSRMThuthapthongtinCLS::OnToDateChange(){
	
} */
/*void CSRMThuthapthongtinCLS::OnToDateSetfocus(){
	
} */
/*void CSRMThuthapthongtinCLS::OnToDateKillfocus(){
	
} */
int CSRMThuthapthongtinCLS::OnToDateCheckValue(){
	return 0;
} 
void CSRMThuthapthongtinCLS::OnPrintPreviewSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	PrintTonghoptheotieuban(true);
	
} 
void CSRMThuthapthongtinCLS::OnPrintSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	PrintTonghoptheotieuban(false);	
} 
void CSRMThuthapthongtinCLS::OnExportSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	ExportTonghoptheotieuban();
} 
void CSRMThuthapthongtinCLS::OnCloseSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
} 
void CSRMThuthapthongtinCLS::OnPractitionerSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CSRMThuthapthongtinCLS::OnPractitionerSelendok(){
	 
}
/*void CSRMThuthapthongtinCLS::OnPractitionerSetfocus(){
	
}*/
/*void CSRMThuthapthongtinCLS::OnPractitionerKillfocus(){
	
}*/
long CSRMThuthapthongtinCLS::OnPractitionerLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndPractitioner.IsSearchKey() && !m_szPractitionerKey.IsEmpty()){
		szWhere.Format(_T(" AND su_userid ='%s'"), m_szPractitionerKey);
	};
	szSQL.Format(_T(" SELECT su_userid as id, su_name as name from sys_user left join sys_dept on(sd_id=su_deptid)where sd_type in('KB','DT') %s"), szWhere);
	m_wndPractitioner.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPractitioner.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CSRMThuthapthongtinCLS::OnPractitionerAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CSRMThuthapthongtinCLS::OnObjectSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CSRMThuthapthongtinCLS::OnObjectSelendok(){
	 
}
/*void CSRMThuthapthongtinCLS::OnObjectSetfocus(){
	
}*/
/*void CSRMThuthapthongtinCLS::OnObjectKillfocus(){
	
}*/
long CSRMThuthapthongtinCLS::OnObjectLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndObject.IsSearchKey() && !m_szObjectKey.IsEmpty()){
		szWhere.Format(_T(" AND ho_id=%s"), m_szObjectKey);
	};
	szSQL.Format(_T("SELECT ho_id as id, ho_desc as name from hms_object where ho_id in('1','9','2') %s ORDER BY cast(ho_id as integer)"), szWhere);
	m_wndObject.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndObject.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CSRMThuthapthongtinCLS::OnObjectAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CSRMThuthapthongtinCLS::OnOrderDateSelect(){
	
}
void CSRMThuthapthongtinCLS::OnPerformDateSelect(){
	
}
void CSRMThuthapthongtinCLS::OnListItemDblClick(){

	int nSel=m_wndListItem.GetCurSel();
	if (nSel < 0) return;
	if (m_bCheckAll)
		m_bCheckAll=false;
	else
		m_bCheckAll=true;
	
	if (m_wndListItem.GetItemText(nSel,2)=="*")
	{
		for (int i=nSel+1; i<= m_wndListItem.GetItemCount(); i++){
			m_wndListItem.SetCheck(i-1,m_bCheckAll);
			if (m_wndListItem.GetItemText(i,2)=="*") 
				break;			
		}
	}
} 
void CSRMThuthapthongtinCLS::OnListItemClick(){
	
	int nSel=m_wndListItem.GetCurSel();
	if (nSel < 0) return;
	if (m_bCheckAll)
		m_bCheckAll=false;
	else	
		m_bCheckAll=true;

	m_wndListItem.SetCheck(nSel,m_bCheckAll);
} 

void CSRMThuthapthongtinCLS::OnListItemSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CSRMThuthapthongtinCLS::OnListItemDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CSRMThuthapthongtinCLS::OnListItemLoadData(){
CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, tmpStr,tmpName;
	m_wndListItem.BeginLoad(); 
	m_wndListItem.DeleteAllItems(); 

	szSQL.Format(_T(" select hfg_id as id, hfg_name as name from hms_fee_group where substr(hfg_id, 1, 2) IN ('B1', 'B2', 'B3') order by hfg_id"));
	
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		tmpStr.Format(_T("%s"),rs.GetValue(_T("id")));
		if (tmpStr==_T("B1000") || tmpStr==_T("B2000") || tmpStr==_T("B3000"))
		{
			tmpStr=_T("*");					
			tmpName.Format(_T("+ %s"), rs.GetValue(_T("name")));			
		}
		else
		{
			tmpStr.Empty();
			tmpName.Format(_T("      - %s"), rs.GetValue(_T("name")));
		}
		m_wndListItem.AddItems(
			tmpName,
			rs.GetValue(_T("id")),
			tmpStr,NULL);
		if (tmpStr==_T("*") )
		{
			
			m_wndListItem.SetItemBkColor(m_wndListItem.GetItemCount()-1, RGB(0, 107, 239), FALSE);
			m_wndListItem.SetItemTextColor(m_wndListItem.GetItemCount()-1, COLOR_WHITE, FALSE);
			
		}
		rs.MoveNext();
	}
	for (int i=0; i< m_wndListItem.GetItemCount(); i++){
		m_wndListItem.SetCheck(i, true);
	}

	m_wndListItem.EndLoad(); 
	return nCount;
}
int CSRMThuthapthongtinCLS::OnListCheckAll(){
	for (int i=0; i< m_wndListItem.GetItemCount(); i++){
		m_wndListItem.SetCheck(i, true);
	}
	return 0;
}
int CSRMThuthapthongtinCLS::OnListUnCheckAll(){
	for (int i=0; i< m_wndListItem.GetItemCount(); i++){
		m_wndListItem.SetCheck(i, false);
	}
	return 0;
}
void CSRMThuthapthongtinCLS::OnRoomListDblClick(){
	
} 
void CSRMThuthapthongtinCLS::OnRoomListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CSRMThuthapthongtinCLS::OnRoomCheckAll(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	for (int i=0; i< m_wndRoomList.GetItemCount(); i++){
		m_wndRoomList.SetCheck(i, true);
	}
	 return 0;
} 
int CSRMThuthapthongtinCLS::OnRoomUnCheckAll(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	for (int i=0; i< m_wndRoomList.GetItemCount(); i++){
		m_wndRoomList.SetCheck(i, false);
	}
	 return 0;
} 
long CSRMThuthapthongtinCLS::OnRoomListLoadData()
{	
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndRoomList.BeginLoad(); 
	m_wndRoomList.DeleteAllItems(); 
	int nCount = 0;
	if (m_nOutPatient)
	{
		szSQL.Format(_T(" select sd_id as id, sd_name as name from sys_dept where sd_type in('KB') order by sd_id "));
	}
	
	if (m_nInPatient)
	{
		szSQL.Format(_T(" select sd_id as id, sd_name as name from sys_dept where sd_type in('DT') order by sd_id "));
	}
	
	if (m_nAllHospitals) 
	{
		szSQL.Format(_T(" select sd_id as id, sd_name as name from sys_dept where sd_type in('KB','DT') order by sd_id "));
	}	
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndRoomList.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);		
		rs.MoveNext();
	}	
	m_wndRoomList.EndLoad(); 

	for (int i=0; i< m_wndRoomList.GetItemCount(); i++){
		m_wndRoomList.SetCheck(i,true);
	}
	return nCount;
}
int CSRMThuthapthongtinCLS::OnAddHMSRoomExaminationReportDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CSRMThuthapthongtinCLS::OnEditHMSRoomExaminationReportDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CSRMThuthapthongtinCLS::OnDeleteHMSRoomExaminationReportDialog(){
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
 		OnCancelHMSRoomExaminationReportDialog(); 
 	}
	return 0;
}
int CSRMThuthapthongtinCLS::OnSaveHMSRoomExaminationReportDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
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
 		//OnHMSRoomExaminationReportDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CSRMThuthapthongtinCLS::OnCancelHMSRoomExaminationReportDialog(){
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
int CSRMThuthapthongtinCLS::OnHMSRoomExaminationReportDialogListLoadData(){
	return 0;
}

void CSRMThuthapthongtinCLS::OnOutPatientSelect()
{	
	UpdateData(true);
	if (m_nOutPatient)
	{
		m_nOutPatient=1;
		m_nInPatient=0;
		m_nAllHospitals=0;		
		OnRoomListLoadData();
	}
	else
		m_wndRoomList.DeleteAllItems();
	UpdateData(false);
}
void CSRMThuthapthongtinCLS::OnInPatientSelect()
{
	UpdateData(true);
	if (m_nInPatient)
	{
		m_nOutPatient=0;
		m_nInPatient=1;
		m_nAllHospitals=0;		
		OnRoomListLoadData();
	}
	else
		m_wndRoomList.DeleteAllItems();
	UpdateData(false);	
}
void CSRMThuthapthongtinCLS::OnAllHospitalsSelect()
{
	UpdateData(true);
	if (m_nAllHospitals)
	{
		m_nOutPatient=0;
		m_nInPatient=0;
		m_nAllHospitals=1;		
		OnRoomListLoadData();
	}
	else
		m_wndRoomList.DeleteAllItems();
	UpdateData(false);	
}

void CSRMThuthapthongtinCLS::PrintTonghoptheotieuban(bool m_nPreview)
{	
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
	CReport rpt;
	CRecord rs(&pMF->m_db);
	CString tmpStr, szSQL, szWhere, m_szGroups, szListRoom, szNameRoom, szDeptID;
	szWhere.Empty();
	m_szGroups.Empty();

	bool bCheck = false;

	UpdateData(true);

	BeginWaitCursor();
	if(!rpt.Init(_T("Reports/HMS/RPT_BAOCAOCLSTHEOTIEUBAN_CLS.RPT")) )	
	{
		return;
	}

	for (int i=0; i< m_wndListItem.GetItemCount(); i++)
	{
		if(m_wndListItem.GetCheck(i))
		{
			if(!m_szGroups.IsEmpty())
				m_szGroups += _T(",");
			m_szGroups.AppendFormat(_T("'%s'"), m_wndListItem.GetItemText(i, 1));
		}
	}
	
	for (int i=0; i< m_wndRoomList.GetItemCount(); i++)
	{
		if(m_wndRoomList.GetCheck(i))
		{
			if (!szListRoom.IsEmpty())
				szListRoom += _T(",");
			szListRoom.AppendFormat(_T("%s"), m_wndRoomList.GetItemText(i, 0));

			if (!szDeptID.IsEmpty())
				szDeptID += _T(",");
			szDeptID.AppendFormat(_T("'%s'"), m_wndRoomList.GetItemText(i, 0));

			if (!szNameRoom.IsEmpty())
				szNameRoom += _T(",");
			szNameRoom.AppendFormat(_T("%s"), m_wndRoomList.GetItemText(i, 1));
		}
		else
		{
			if (!bCheck)
				bCheck = true;
		}
	}

	if (m_nPerformDate)
		szWhere.Format(_T("AND hpc_performdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
	else
		szWhere.Format(_T("AND hpc_orderdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szToDate);

	if (!bCheck)
	{
		if (!szDeptID.IsEmpty())
		{
			if (m_nAllHospitals)
				szNameRoom = _T("T\x1EA5t \x63\x1EA3 \x63\xE1\x63 kho\x61");
			else if (m_nInPatient)
				szNameRoom = _T("T\x1EA5t \x63\x1EA3 \x63\xE1\x63 kho\x61 \x111i\x1EC1u tr\x1ECB");
			else if (m_nOutPatient)
				szNameRoom = _T("Kho\x61 Kh\xE1m \x42\x1EC7nh");
		}
	}

	if (!szListRoom.IsEmpty())
		if (m_nOutPatient)
			szWhere.AppendFormat(_T("and hpc_deptid in(%s)"), szDeptID);
		else
			szWhere.AppendFormat(_T("and hpc_deptid in(%s)"), szDeptID);

	if(!m_szGroups.IsEmpty())
		szWhere.AppendFormat(_T(" and hfl_groupid in(%s) "), m_szGroups);

	if (!m_wndPractitioner.GetCurrent(0).IsEmpty())
		szWhere.AppendFormat(_T(" AND hpc_doctor='%s' "), m_wndPractitioner.GetCurrent(0));

	if (!m_wndObject.GetCurrent(0).IsEmpty())
		szWhere.AppendFormat(_T(" AND hd_object='%s' "), m_wndObject.GetCurrent(0));
	
	szSQL.Format(_T(" SELECT") \
		_T(" (SELECT hfg_name FROM hms_fee_group WHERE hfg_id=groupid") \
		_T(" ) AS hfl_deptid,") \
		_T(" groupid,") \
		_T(" pcmsname,") \
		_T(" unit,") \
		_T(" SUM(soluong) AS soluong,") \
		_T(" servprice,") \
		_T(" insprice,") \
		_T(" SUM(soluong * servprice) AS sumservprice,") \
		_T(" SUM(soluong * insprice)  AS suminsprice") \
		_T(" FROM") \
		_T(" (SELECT hfl_deptid,") \
		_T(" hfl_groupid   AS groupid,") \
		_T(" hfl_name      AS pcmsname,") \
		_T(" hfl_unit      AS unit,") \
		_T(" SUM(1)        AS soluong,") \
		_T(" hfl_servprice AS servprice,") \
		_T(" hfl_insprice  AS insprice") \
		_T(" FROM hms_pacsorder") \
		_T(" LEFT JOIN hms_pacsorderline") \
		_T(" ON(hpc_orderid = hpcl_orderid)") \
		_T(" LEFT JOIN hms_fee_list") \
		_T(" ON (hfl_groupid=hpc_groupid") \
		_T(" AND hfl_feeid  =hpcl_itemid)") \
		_T(" LEFT JOIN hms_doc") \
		_T(" ON(hd_docno=hpc_docno)") \
		_T(" WHERE hpcl_status ='T' %s") \
		_T(" GROUP BY hfl_deptid,") \
		_T(" hfl_groupid ,") \
		_T(" hfl_name ,") \
		_T(" hfl_unit,") \
		_T(" hfl_servprice,") \
		_T(" hfl_insprice") \
		_T(" ) tb12") \
		_T(" WHERE servprice >= 0.0") \
		_T(" GROUP BY hfl_deptid,") \
		_T(" groupid,") \
		_T(" pcmsname,") \
		_T(" unit,") \
		_T(" servprice,") \
		_T(" insprice") \
		_T(" ORDER BY groupid,") \
		_T(" pcmsname"), szWhere);

	//UpdateData(false);
    _fmsg(_T("%s"), szSQL);

	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		ShowMessageBox(_T("No data"), MB_OK);
		return;
	}	

	StringUpper(pMF->m_szHealthService, tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), tmpStr);
	StringUpper(pMF->m_szHospitalName, tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("ObjectGroup"), _T(""));
//	rpt.GetReportHeader()->SetValue(_T("ReportPeriod"), szReportPeriod);
	tmpStr=szNameRoom;
	rpt.GetReportHeader()->SetValue(_T("Department"), tmpStr);
	tmpStr=m_wndPractitioner.GetCurrent(1);
	rpt.GetReportHeader()->SetValue(_T("doctor"), tmpStr);
	tmpStr=m_wndObject.GetCurrent(1);
//	if (tmpStr.IsEmpty) tmpStr=_T("Object All");
	rpt.GetReportHeader()->SetValue(_T("Object"), tmpStr);
	tmpStr.Format(rpt.GetReportHeader()->GetValue(_T("ReportDate")), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmm, ddmmyyyy|hhmm), CDate::Convert(m_szToDate, yyyymmdd|hhmm,ddmmyyyy|hhmm));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), tmpStr);
	//Page Header
	//Report Detail
	int nIndex = 1;
	CString szOldLine, szNewLine;
	CString szDate,szMoney;
	CReportSection* rptDetail;
	double grpCost=0;
	double ttlCost=0;
	double nQuantity = 0;
	double cost=0,costword = 0;
	
	
	while(!rs.IsEOF())
	{
		rs.GetValue(_T("groupid"), szNewLine);
		if(szNewLine != szOldLine && !szNewLine.IsEmpty())
		{
			CString szField;
			if(grpCost > 0)
			{				
				TranslateString(_T("Total Groups"), tmpStr);
				rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
				tmpStr.Format(_T("%.0f"), nQuantity);
				rptDetail->SetValue(_T("S4"), tmpStr);
				FormatCurrency(grpCost, tmpStr);
				rptDetail->SetValue(_T("S6"), tmpStr);
				ttlCost += grpCost;
				nIndex=1;
				nQuantity = 0;
				grpCost = 0;				
			}

			rptDetail = rpt.AddDetail(rpt.GetGroupHeader(0));
			rs.GetValue(_T("hfl_deptid"), tmpStr);
			rptDetail->SetValue(_T("TestGroup"),tmpStr );
			szOldLine = szNewLine;			
		}

		rptDetail = rpt.AddDetail();
		tmpStr.Format(_T("%d"), nIndex++);
		rptDetail->SetValue(_T("1"), tmpStr);
		rs.GetValue(_T("pcmsname"), tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);
		rs.GetValue(_T("unit"), tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);
		
		rs.GetValue(_T("soluong"), tmpStr);		
		//FormatCurrency(cost, tmpStr);
		nQuantity += ToDouble(tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);
		rs.GetValue(_T("servprice"), cost);		
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);
		
		
		rs.GetValue(_T("sumservprice"), cost);
		grpCost += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("6"), tmpStr);
		
		rs.MoveNext();
	}
	ttlCost += grpCost;
	
	if(grpCost > 0)
	{
		CString szField, szAmount;		
		TranslateString(_T("Total Amount"), szAmount);
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
		tmpStr.Format(_T("%.0f"), nQuantity);
		rptDetail->SetValue(_T("S4"), tmpStr);
		FormatCurrency(grpCost, tmpStr);
		rptDetail->SetValue(_T("S6"), tmpStr);		
	}
	if(ttlCost > 0)
	{
		CString szField, szAmount;
		TranslateString(_T("Total Amount"), szAmount);
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
		rptDetail->SetValue(_T("TotalGroup"), szAmount);						
		FormatCurrency(ttlCost, tmpStr);
		rptDetail->SetValue(_T("S6"), tmpStr);		
		szMoney.Format(_T("%.2f"),ttlCost);
	}

	//Page Footer
	//Report Footer
	
	tmpStr = pMF->GetSysDateTime();
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), tmpStr.Mid(8, 2), tmpStr.Mid(5, 2), tmpStr.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);			
	MoneyToString(szMoney, tmpStr);
	rpt.GetReportFooter()->SetValue(_T("SumInWord"), tmpStr);

	EndWaitCursor();
		rpt.PrintPreview();
	
}
void CSRMThuthapthongtinCLS::ExportTonghoptheotieuban()
{	
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
	//CReport rpt;
	CRecord rs(&pMF->m_db);
	CString tmpStr, szSQL, szWhere,m_szGroups, szListRoom, szNameRoom, szDeptID;
	szWhere.Empty();
	m_szGroups.Empty();
	UpdateData(true);

	BeginWaitCursor();

	for (int i=0; i< m_wndListItem.GetItemCount(); i++){
		if(m_wndListItem.GetCheck(i)){
			if(!m_szGroups.IsEmpty())
				m_szGroups += _T(",");
			m_szGroups.AppendFormat(_T("'%s'"), m_wndListItem.GetItemText(i, 1));
		}
	}
	
	for (int i=0; i< m_wndRoomList.GetItemCount(); i++){
		if(m_wndRoomList.GetCheck(i)){
			if(!szListRoom.IsEmpty())
				szListRoom += _T(",");
			szListRoom.AppendFormat(_T("%s"), m_wndRoomList.GetItemText(i, 0));

			if(!szDeptID.IsEmpty())
				szDeptID += _T(",");
			szDeptID.AppendFormat(_T("'%s'"), m_wndRoomList.GetItemText(i, 0));

			if(!szNameRoom.IsEmpty())
				szNameRoom += _T(",");
			szNameRoom.AppendFormat(_T("%s"), m_wndRoomList.GetItemText(i, 1));
		}
	}

	if (m_nPerformDate)
		szWhere.Format(_T("AND hpc_performdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
	else
		szWhere.Format(_T("AND hpc_orderdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
	
	if (!szListRoom.IsEmpty())
		if (m_nOutPatient)
			szWhere.AppendFormat(_T("and hpc_deptid in(%s)"), szDeptID);
		else
			szWhere.AppendFormat(_T("and hpc_deptid in(%s)"), szDeptID);

	if(!m_szGroups.IsEmpty())
		szWhere.AppendFormat(_T(" and hfl_groupid in(%s) "), m_szGroups);
	
	if (!m_wndPractitioner.GetCurrent(0).IsEmpty())
		szWhere.AppendFormat(_T(" AND hpc_doctor='%s' "), m_wndPractitioner.GetCurrent(0));
	
	if (!m_wndObject.GetCurrent(0).IsEmpty())
		szWhere.AppendFormat(_T(" AND hd_object='%s' "), m_wndObject.GetCurrent(0));
	
	szSQL.Format(_T(" SELECT") \
		_T(" (SELECT hfg_name FROM hms_fee_group WHERE hfg_id=groupid") \
		_T(" ) AS hfl_deptid,") \
		_T(" groupid,") \
		_T(" pcmsname,") \
		_T(" unit,") \
		_T(" SUM(soluong) AS soluong,") \
		_T(" servprice,") \
		_T(" insprice,") \
		_T(" SUM(soluong * servprice) AS sumservprice,") \
		_T(" SUM(soluong * insprice)  AS suminsprice") \
		_T(" FROM") \
		_T(" (SELECT hfl_deptid,") \
		_T(" hfl_groupid   AS groupid,") \
		_T(" hfl_name      AS pcmsname,") \
		_T(" hfl_unit      AS unit,") \
		_T(" SUM(1)        AS soluong,") \
		_T(" hfl_servprice AS servprice,") \
		_T(" hfl_insprice  AS insprice") \
		_T(" FROM hms_pacsorder") \
		_T(" LEFT JOIN hms_pacsorderline") \
		_T(" ON(hpc_orderid = hpcl_orderid)") \
		_T(" LEFT JOIN hms_fee_list") \
		_T(" ON (hfl_groupid=hpc_groupid") \
		_T(" AND hfl_feeid  =hpcl_itemid)") \
		_T(" LEFT JOIN hms_doc") \
		_T(" ON(hd_docno=hpc_docno)") \
		_T(" WHERE hpcl_status ='T' %s") \
		_T(" GROUP BY hfl_deptid,") \
		_T(" hfl_groupid ,") \
		_T(" hfl_name ,") \
		_T(" hfl_unit,") \
		_T(" hfl_servprice,") \
		_T(" hfl_insprice") \
		_T(" ) tb12") \
		_T(" WHERE servprice >= 0.0") \
		_T(" GROUP BY hfl_deptid,") \
		_T(" groupid,") \
		_T(" pcmsname,") \
		_T(" unit,") \
		_T(" servprice,") \
		_T(" insprice") \
		_T(" ORDER BY groupid,") \
		_T(" pcmsname"), szWhere);
	_fmsg(_T("%s"), szSQL);

	//UpdateData(false);
	//_fmsg(_T("%s"), szSQL);
	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
	{
		ShowMessageBox(_T("No data"), MB_OK);
		return ;
	}	
	

	CExcel xls;	
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	xls.SetColumnWidth(0, 10);
	xls.SetColumnWidth(1, 60);
	xls.SetColumnWidth(2, 16);
	xls.SetColumnWidth(3, 14);
	xls.SetColumnWidth(4, 14);
	xls.SetColumnWidth(5, 14);

	//xls.SetCellMergedColumns(0,3,6);	
	xls.SetCellText(0, 3, _T("Thu th\x1EADp th\xF4ng tin \x63\x1EADn l\xE2m s\xE0ng"),FMT_TEXT,true,18,0);
	//xls.SetCellMergedColumns(0,4,22);
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x110\x1EBFn ng\xE0y %s"), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	xls.SetCellText(0, 4, tmpStr,FMT_TEXT,true,12,0);

	StringUpper(pMF->m_szHealthService, tmpStr);
	xls.SetCellText(0,1, tmpStr);
	StringUpper(pMF->m_szHospitalName, tmpStr);
	xls.SetCellText(0,2, tmpStr);
	tmpStr=szNameRoom;
	xls.SetCellMergedColumns(0,5,6);
	xls.SetCellText(0,5, tmpStr);	
	tmpStr=m_wndPractitioner.GetCurrent(1);
	//rpt.GetReportHeader()->SetValue(_T("doctor"), tmpStr);
	tmpStr=m_wndObject.GetCurrent(1);
	if (tmpStr.IsEmpty()) 
		tmpStr = _T("T\x1EA5t \x63\x1EA3 \x63\xE1\x63 \x111\x1ED1i t\x1B0\x1EE3ng");
	//rpt.GetReportHeader()->SetValue(_T("Object"), tmpStr);
	xls.SetCellText(0,6, tmpStr);	
	//Page Header
	//Report Detail
	int nRow = 8;
	xls.SetCellText(0, nRow, _T("STT"), FMT_TEXT, true);
	xls.SetCellText(1, nRow, _T("T\xEAn \x78\xE9t nghi\x1EC7m"), FMT_TEXT, true);
	xls.SetCellText(2, nRow, _T("\x110\x1A1n v\x1ECB"), FMT_TEXT, true);
	xls.SetCellText(3, nRow, _T("S\x1ED1 l\x1B0\x1EE3ng"), FMT_TEXT, true);
	xls.SetCellText(4, nRow, _T("\x110\x1A1n gi\xE1"), FMT_TEXT, true);
	xls.SetCellText(5, nRow, _T("Th\xE0nh ti\x1EC1n"), FMT_TEXT, true);	

	int nIndex = 1; 
	
	CString szOldLine, szNewLine;
	CString szDate,szMoney;
	//CReportSection* rptDetail;
	double grpCost=0;
	double ttlCost=0;
	double nQuantity = 0;
	double cost=0,costword = 0;
	
	
	while(!rs.IsEOF())
	{
		rs.GetValue(_T("groupid"), szNewLine);
		if(szNewLine != szOldLine && !szNewLine.IsEmpty())
		{
			CString szField;
			if(grpCost > 0)
			{	
				nRow++;
				TranslateString(_T("Total Groups"), tmpStr);
				xls.SetCellMergedColumns(0, nRow, 3);
				xls.SetCellText(0, nRow, _T("T\x1ED5ng nh\xF3m"), FMT_TEXT | FMT_CENTER, true);
				FormatCurrency(grpCost, tmpStr);
				xls.SetCellText(3, nRow, double2str(nQuantity), FMT_INTEGER, true, 10, 0);
				xls.SetCellText(5, nRow, double2str(grpCost), FMT_NUMBER1, true, 10, 0);
				ttlCost += grpCost;				
				grpCost = 0;
				nQuantity = 0;
				nIndex=1;
			}

			nRow++;
			rs.GetValue(_T("hfl_deptid"), tmpStr);
			xls.SetCellMergedColumns(0,nRow,6);
			xls.SetCellText(0, nRow, tmpStr, FMT_TEXT, true, 10, 0);
			szOldLine = szNewLine;			
		}
		nRow++;
		//rptDetail = rpt.AddDetail();
		tmpStr.Format(_T("%d"), nIndex++);
		xls.SetCellText(0, nRow, tmpStr, FMT_INTEGER);
		rs.GetValue(_T("pcmsname"), tmpStr);
		xls.SetCellText(1, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("unit"), tmpStr);
		xls.SetCellText(2, nRow, tmpStr, FMT_TEXT);		
		rs.GetValue(_T("soluong"), tmpStr);		
		//FormatCurrency(cost, tmpStr);
		nQuantity += ToDouble(tmpStr);
		xls.SetCellText(3, nRow, tmpStr, FMT_INTEGER);
		rs.GetValue(_T("servprice"), tmpStr);
		//FormatCurrency(cost, tmpStr);
		xls.SetCellText(4, nRow, tmpStr, FMT_NUMBER1);
		
		rs.GetValue(_T("sumservprice"), tmpStr);
		grpCost += ToDouble(rs.GetValue(_T("sumservprice")));
		//FormatCurrency(cost, tmpStr);
		xls.SetCellText(5, nRow, tmpStr, FMT_NUMBER1);		
		rs.MoveNext();
	}
	ttlCost += grpCost;
	
	if(grpCost > 0)
	{
		nRow++;
		CString szField, szAmount;		
		TranslateString(_T("Total Groups"), szAmount);		
		xls.SetCellMergedColumns(0, nRow, 3);
		xls.SetCellText(0, nRow, _T("T\x1ED5ng nh\xF3m"), FMT_TEXT | FMT_CENTER, true);
		//FormatCurrency(grpCost, tmpStr);
		xls.SetCellText(3, nRow, double2str(nQuantity), FMT_INTEGER, true);
		xls.SetCellText(5, nRow, double2str(grpCost), FMT_NUMBER1, true);	
	}
	if(ttlCost > 0)
	{
		nRow++;
		CString szField, szAmount;
		TranslateString(_T("Total Amount"), szAmount);	
		xls.SetCellMergedColumns(0, nRow, 4);
		xls.SetCellText(0, nRow, szAmount, FMT_TEXT | FMT_CENTER, true);
		FormatCurrency(ttlCost, tmpStr);
		xls.SetCellText(5, nRow, double2str(ttlCost), FMT_NUMBER1, true);		
	}

	//Page Footer
	//Report Footer
	EndWaitCursor();	
	xls.Save(_T("Exports\\SRMThuthapthongtinCLS.xls"));	
}