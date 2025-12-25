#include "HMSOutPatientList.h"
#include "MainFrm.h"
#include ".\hmsoutpatientlist.h"
#include "HMSSearchForCardDialog.h"


static void _OnStatusSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSOutPatientList* )pWnd)->OnStatusSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStatusSelendokFnc(CWnd *pWnd){
	((CHMSOutPatientList *)pWnd)->OnStatusSelendok();
}
/*static void _OnStatusSetfocusFnc(CWnd *pWnd){
	((CHMSOutPatientList *)pWnd)->OnStatusKillfocus();
}*/
/*static void _OnStatusKillfocusFnc(CWnd *pWnd){
	((CHMSOutPatientList *)pWnd)->OnStatusKillfocus();
}*/
static long _OnStatusLoadDataFnc(CWnd *pWnd){
	return ((CHMSOutPatientList *)pWnd)->OnStatusLoadData();
}
/*static void _OnStatusAddNewFnc(CWnd *pWnd){
	((CHMSOutPatientList *)pWnd)->OnStatusAddNew();
}*/
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSOutPatientList* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CHMSOutPatientList *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CHMSOutPatientList *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CHMSOutPatientList *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CHMSOutPatientList *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CHMSOutPatientList *)pWnd)->OnDepartmentAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CHMSOutPatientList *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CHMSOutPatientList *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CHMSOutPatientList *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSOutPatientList *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CHMSOutPatientList *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CHMSOutPatientList *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CHMSOutPatientList *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSOutPatientList *)pWnd)->OnToDateCheckValue();
} 
/*static void _OnPatientNameChangeFnc(CWnd *pWnd){
	((CHMSOutPatientList *)pWnd)->OnPatientNameChange();
} */
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CHMSOutPatientList *)pWnd)->OnPatientNameSetfocus();} */ 
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((CHMSOutPatientList *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSOutPatientList *)pWnd)->OnPatientNameCheckValue();
} 
/*static void _OnDocumentNoChangeFnc(CWnd *pWnd){
	((CHMSOutPatientList *)pWnd)->OnDocumentNoChange();
} */
/*static void _OnDocumentNoSetfocusFnc(CWnd *pWnd){
	((CHMSOutPatientList *)pWnd)->OnDocumentNoSetfocus();} */ 
/*static void _OnDocumentNoKillfocusFnc(CWnd *pWnd){
	((CHMSOutPatientList *)pWnd)->OnDocumentNoKillfocus();
} */
static int _OnDocumentNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSOutPatientList *)pWnd)->OnDocumentNoCheckValue();
} 
static void _OnSearchSelectFnc(CWnd *pWnd){
	CHMSOutPatientList *pVw = (CHMSOutPatientList *)pWnd;
	pVw->OnSearchSelect();
}
static void _OnOutPatientSelectFnc(CWnd *pWnd){
	  ((CHMSOutPatientList*)pWnd)->OnOutPatientSelect();
}
static void _OnInPatientSelectFnc(CWnd *pWnd){
	  ((CHMSOutPatientList*)pWnd)->OnInPatientSelect();
}
static void _OnOutpatientTreatSelectFnc(CWnd *pWnd){
	  ((CHMSOutPatientList*)pWnd)->OnOutpatientTreatSelect();
}
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSOutPatientList*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSOutPatientList*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSOutPatientList*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
}

static int _OnListSearchForCardFnc(CWnd *pWnd){
	 return ((CHMSOutPatientList*)pWnd)->OnListSearchForCard();
}
static int _OnListRefreshFnc(CWnd *pWnd){
	 return ((CHMSOutPatientList*)pWnd)->OnListRefresh();
} 
static int _OnAddHMSHFPatientListFnc(CWnd *pWnd){
	 return ((CHMSOutPatientList*)pWnd)->OnAddHMSHFPatientList();
} 
static int _OnEditHMSHFPatientListFnc(CWnd *pWnd){
	 return ((CHMSOutPatientList*)pWnd)->OnEditHMSHFPatientList();
} 
static int _OnDeleteHMSHFPatientListFnc(CWnd *pWnd){
	 return ((CHMSOutPatientList*)pWnd)->OnDeleteHMSHFPatientList();
} 
static int _OnSaveHMSHFPatientListFnc(CWnd *pWnd){
	 return ((CHMSOutPatientList*)pWnd)->OnSaveHMSHFPatientList();
} 
static int _OnCancelHMSHFPatientListFnc(CWnd *pWnd){
	 return ((CHMSOutPatientList*)pWnd)->OnCancelHMSHFPatientList();
} 
CHMSOutPatientList::CHMSOutPatientList(){

	m_nDlgWidth = 1025;
	m_nDlgHeight = 625;
	SetDefaultValues();
}
CHMSOutPatientList::~CHMSOutPatientList(){
}
void CHMSOutPatientList::OnCreateComponents()
{
	/*m_wndPatientInformation.Create(this, _T("Patient List"), 5, 95, 1015, 620);
	m_wndSearchInformation.Create(this, _T("Search Information"), 5, 5, 1015, 90);
	m_wndStatusLabel.Create(this, _T("Status"), 10, 30, 110, 55);
	m_wndStatus.Create(this,115, 30, 560, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 565, 30, 665, 55);
	m_wndFromDate.Create(this,670, 30, 770, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 775, 30, 875, 55);
	m_wndToDate.Create(this,880, 30, 980, 55); 
	m_wndDepartmentLabel.Create(this, _T("Department"), 10, 60, 110, 85);
	m_wndDepartment.Create(this,115, 60, 560, 85); 
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 565, 60, 665, 85);
	m_wndPatientName.Create(this,670, 60, 770, 85); 
	m_wndDocumentNoLabel.Create(this, _T("Document No"), 775, 60, 875, 85);
	m_wndDocumentNo.Create(this,880, 60, 980, 85); 
	m_wndSearch.Create(this, _T("@"), 985, 60, 1010, 85);
	m_wndList.Create(this,10, 120, 1010, 615);*/ 

	m_wndPatientInformation.Create(this, _T("Patient List"), 5, 95, 1015, 615);
	m_wndSearchInformation.Create(this, _T("Search Information"), 5, 5, 1015, 90);
	m_wndStatusLabel.Create(this, _T("Status"), 250, 30, 325, 55);
	m_wndStatus.Create(this,330, 30, 580, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 585, 30, 675, 55);
	m_wndFromDate.Create(this,680, 30, 780, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 785, 30, 875, 55);
	m_wndToDate.Create(this,880, 30, 980, 55); 
	m_wndDepartmentLabel.Create(this, _T("Department"), 250, 60, 325, 85);
	m_wndDepartment.Create(this,330, 60, 580, 85); 
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 585, 60, 675, 85);
	m_wndPatientName.Create(this,680, 60, 780, 85); 
	m_wndDocumentNoLabel.Create(this, _T("Document No"), 785, 60, 875, 85);
	m_wndDocumentNo.Create(this,880, 60, 980, 85); 
	m_wndSearch.Create(this, _T("@"), 985, 60, 1010, 85);
	m_wndOutPatient.Create(this, _T("Examination Patient"), 10, 30, 245, 55);
	m_wndInPatient.Create(this, _T("In Patient"), 10, 59, 125, 84);
	m_wndOutpatientTreat.Create(this, _T("Outpatient Treat"), 130, 59, 245, 84);
	m_wndList.Create(this,10, 120, 1010, 610);


}
void CHMSOutPatientList::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
//	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
//	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
	m_wndPatientName.SetLimitText(35);
	m_wndPatientName.SetCheckValue(true);
	m_wndPatientName.SetNotEmpty(false);
	m_wndDocumentNo.SetLimitText(16);
	m_wndDocumentNo.SetCheckValue(true);
	m_wndDocumentNo.SetNotEmpty(false);


	m_wndStatus.InsertColumn(0, _T("ID"), CFMT_TEXT|CFMT_CENTER, 70);
	m_wndStatus.InsertColumn(1, _T("Description"), CFMT_TEXT, 350);

	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 70);
	m_wndDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 350);
	m_wndDepartment.InsertColumn(2, _T("Type"), CFMT_TEXT, 0);

	m_wndList.InsertColumn(0, _T("Document No"), CFMT_TEXT, 85);
	m_wndList.InsertColumn(1, _T("Patient Name"), CFMT_TEXT, 180);
	m_wndList.InsertColumn(2, _T("Age"), CFMT_TEXT, 60);
	m_wndList.InsertColumn(3, _T("Sex"), CFMT_TEXT, 45);
	m_wndList.InsertColumn(4, _T("Object"), CFMT_TEXT, 125);
	m_wndList.InsertColumn(5, _T("Card No"), CFMT_TEXT, 180);
	m_wndList.InsertColumn(6, _T("%"), CFMT_TEXT|CFMT_CENTER, 40);
	m_wndList.InsertColumn(7, _T("Department"), CFMT_TEXT, 60);
	m_wndList.InsertColumn(8, _T("In Date"), CFMT_DATE, 85);
	m_wndList.InsertColumn(9, _T("Out Date"), CFMT_DATE, 85);
	m_wndList.InsertColumn(10, _T("deptid"), CFMT_TEXT, 0);
	m_wndList.InsertColumn(11, _T("Refidx"), CFMT_NUMBER, 0);
	

	m_szFromDate = m_szToDate = pMF->GetSysDate();
//	m_szFromDate = _T("2012/09/30");
//	m_szDepartmentKey = pMF->GetCurrentDepartmentID();

}
void CHMSOutPatientList::OnSetWindowEvents(){
	m_wndStatus.SetEvent(WE_SELENDOK, _OnStatusSelendokFnc);
	//m_wndStatus.SetEvent(WE_SETFOCUS, _OnStatusSetfocusFnc);
	//m_wndStatus.SetEvent(WE_KILLFOCUS, _OnStatusKillfocusFnc);
	m_wndStatus.SetEvent(WE_SELCHANGE, _OnStatusSelectChangeFnc);
	m_wndStatus.SetEvent(WE_LOADDATA, _OnStatusLoadDataFnc);
	//m_wndStatus.SetEvent(WE_ADDNEW, _OnStatusAddNewFnc);
	m_wndDepartment.SetEvent(WE_SELENDOK, _OnDepartmentSelendokFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	//m_wndDepartment.SetEvent(WE_ADDNEW, _OnDepartmentAddNewFnc);
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	//m_wndPatientName.SetEvent(WE_CHANGE, _OnPatientNameChangeFnc);
	//m_wndPatientName.SetEvent(WE_SETFOCUS, _OnPatientNameSetfocusFnc);
	//m_wndPatientName.SetEvent(WE_KILLFOCUS, _OnPatientNameKillfocusFnc);
	m_wndPatientName.SetEvent(WE_CHECKVALUE, _OnPatientNameCheckValueFnc);
	//m_wndDocumentNo.SetEvent(WE_CHANGE, _OnDocumentNoChangeFnc);
	//m_wndDocumentNo.SetEvent(WE_SETFOCUS, _OnDocumentNoSetfocusFnc);
	//m_wndDocumentNo.SetEvent(WE_KILLFOCUS, _OnDocumentNoKillfocusFnc);
	m_wndDocumentNo.SetEvent(WE_CHECKVALUE, _OnDocumentNoCheckValueFnc);
	m_wndSearch.SetEvent(WE_CLICK, _OnSearchSelectFnc);
	m_wndOutPatient.SetEvent(WE_CLICK, _OnOutPatientSelectFnc);
	m_wndInPatient.SetEvent(WE_CLICK, _OnInPatientSelectFnc);
	m_wndOutpatientTreat.SetEvent(WE_CLICK, _OnOutpatientTreatSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.SetWindowText(_T("Patient List"));

	m_wndList.AddEvent(1, _T("Search for insurance card"), _OnListSearchForCardFnc, 0, VK_F2);
	m_wndList.AddEvent(0, _T("-"));
	m_wndList.AddEvent(2, _T("Refresh"), _OnListRefreshFnc, 0, VK_F5);

	AddLayoutControl(&m_wndSearchInformation, WS_RESIZEX, 100, 100, 100, 100);
	AddLayoutControl(&m_wndPatientInformation, WS_RESIZEX|WS_RESIZEY, 100, 100, 100, 100);
	/*AddLayoutControl(&m_wndStatus, WS_RESIZEX, 100, 100, 100, 100);
	AddLayoutControl(&m_wndDepartment, WS_RESIZEX, 100, 100, 100, 100);*/
	//AddLayoutControl(&m_wndFromDateLabel, WS_REPOSX, 25, 100, 100, 100);
	AddLayoutControl(&m_wndFromDate, WS_RESIZEX, 100, 100, 10, 100);
	AddLayoutControl(&m_wndToDateLabel, WS_REPOSX, 10, 100, 100, 100);
	AddLayoutControl(&m_wndToDate, WS_REPOSX|WS_RESIZEX, 10, 100, 10, 100);
	//AddLayoutControl(&m_wndPatientNameLabel, WS_REPOSX, 100, 100, 100, 100);
	AddLayoutControl(&m_wndPatientName, WS_RESIZEX, 100, 100, 10, 100);
	AddLayoutControl(&m_wndDocumentNoLabel, WS_REPOSX, 10, 100, 100, 100);
	AddLayoutControl(&m_wndDocumentNo, WS_REPOSX|WS_RESIZEX, 10, 100, 10, 100);
	AddLayoutControl(&m_wndSearch, WS_REPOSX, 20, 100, 100, 100);
	AddLayoutControl(&m_wndList, WS_RESIZEX|WS_RESIZEY, 100, 100, 100, 100);
//	m_wndList.SetAutoColumnSize(true);

/*
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSHFPatientListFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSHFPatientListFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSHFPatientListFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSHFPatientListFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSHFPatientListFnc, 0, 'T', VK_CONTROL);
*/
	//m_szStatusKey = _T("1");
	SetMode(VM_VIEW);
	//OnListLoadData();
}
void CHMSOutPatientList::OnDoDataExchange(CDataExchange* pDX)
{
	DDX_TextEx(pDX, m_wndStatus.GetDlgCtrlID(), m_szStatusKey);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);
	DDX_Text(pDX, m_wndDocumentNo.GetDlgCtrlID(), m_nDocumentNo);
	DDX_Radio(pDX, m_wndOutPatient.GetDlgCtrlID(), m_nOutPatient);
//	DDX_Radio(pDX, m_wndInPatient.GetDlgCtrlID(), m_nInPatient);
//	DDX_Radio(pDX, m_wndOutpatientTreat.GetDlgCtrlID(), m_nOutpatientTreat);
}
void CHMSOutPatientList::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSOutPatientList::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSOutPatientList::SetDefaultValues(){
	
	m_szStatusKey.Empty();
	m_szDepartmentKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szPatientName.Empty();
	m_nDocumentNo=0;
	m_nOutPatient=0;
	m_nInPatient=1;
	m_nOutpatientTreat=1;
}
int CHMSOutPatientList::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiView::SetMode(nMode); 
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
 			EnableControls(TRUE); 
			m_wndDocumentNo.SetFocus();
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
void CHMSOutPatientList::OnStatusSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSOutPatientList::OnStatusSelendok()
{
	UpdateData(true);

	if (m_nInPatient == 0 || m_nOutpatientTreat == 0)
	{
		if(m_szStatusKey == _T("1") || m_szStatusKey == _T("2"))
		{
			m_wndFromDate.EnableWindow(false);
			m_wndToDate.EnableWindow(false);
		}
		else
		{
			m_wndFromDate.EnableWindow(true);
			m_wndToDate.EnableWindow(true);
		}
	}
	//OnListLoadData();
}
/*void CHMSOutPatientList::OnStatusSetfocus(){
	
}*/
/*void CHMSOutPatientList::OnStatusKillfocus(){
	
}*/
long CHMSOutPatientList::OnStatusLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL, szWhere, szLabel;
	int nCount = 0;
	m_wndStatus.DeleteAllItems();

	if (m_nOutPatient == 0)
	{
		if (m_wndStatus.IsSearchKey() && !m_szStatusKey.IsEmpty())
		{
			if (m_szStatusKey == _T("1"))
			{
				TranslateString(_T("Open"), szLabel);
				m_wndStatus.AddItems(_T("1"), szLabel, NULL);
			}
			if (m_szStatusKey == _T("2"))
			{
				TranslateString(_T("Terminated"), szLabel);
				m_wndStatus.AddItems(_T("2"), szLabel, NULL);
			}
			if (m_szStatusKey == _T("3")){
				TranslateString(_T("Discharged Paid"), szLabel);
				m_wndStatus.AddItems(_T("3"), szLabel, NULL);
			}
			return 1;
		}

		TranslateString(_T("Open"), szLabel);
		m_wndStatus.AddItems(_T("1"), szLabel, NULL);
		TranslateString(_T("Terminated"), szLabel);
		m_wndStatus.AddItems(_T("2"), szLabel, NULL);
		TranslateString(_T("Discharged Paid"), szLabel);
		m_wndStatus.AddItems(_T("3"), szLabel, NULL);
	}
	else
	{
		if (m_wndStatus.IsSearchKey() && !m_szStatusKey.IsEmpty())
		{
			if (m_szStatusKey == _T("1"))
			{
				TranslateString(_T("Waiting for admission"), szLabel);
				m_wndStatus.AddItems(_T("1"), szLabel, NULL);
			}
			if (m_szStatusKey == _T("2"))
			{
				TranslateString(_T("Treating"), szLabel);
				m_wndStatus.AddItems(_T("2"), szLabel, NULL);
			}
			if (m_szStatusKey == _T("3"))
			{
				TranslateString(_T("Waiting For Payment"), szLabel);
				m_wndStatus.AddItems(_T("3"), szLabel, NULL);
			}

			if (m_szStatusKey == _T("4"))
			{
				TranslateString(_T("Discharged Paid"), szLabel);
				m_wndStatus.AddItems(_T("4"), szLabel, NULL);
			}
			return 1;
		}

		TranslateString(_T("Waiting for admission"), szLabel);
		m_wndStatus.AddItems(_T("1"), szLabel, NULL);
		TranslateString(_T("Treating"), szLabel);
		m_wndStatus.AddItems(_T("2"), szLabel, NULL);
		TranslateString(_T("Waiting For Payment"), szLabel);
		m_wndStatus.AddItems(_T("3"), szLabel, NULL);
		TranslateString(_T("Discharged Paid"), szLabel);
		m_wndStatus.AddItems(_T("4"), szLabel, NULL);

	}

	return 3;
}
/*void CHMSOutPatientList::OnStatusAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSOutPatientList::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSOutPatientList::OnDepartmentSelendok(){
	 //OnListLoadData();
}
/*void CHMSOutPatientList::OnDepartmentSetfocus(){
	
}*/
/*void CHMSOutPatientList::OnDepartmentKillfocus(){
	
}*/
long CHMSOutPatientList::OnDepartmentLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();

	UpdateData(TRUE);

	if(m_wndDepartment.IsSearchKey() && !m_szDepartmentKey.IsEmpty())
	{
		szWhere.Format(_T(" AND sd_id='%s' "), m_szDepartmentKey);
	}

	if (m_nOutPatient == 0)
		szWhere.Format(_T(" AND sd_type='KB' "));
	else
		szWhere.Format(_T(" AND sd_type='DT' "));


	m_wndDepartment.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT * FROM sys_dept WHERE 1=1 %s ORDER BY sd_id"), szWhere);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDepartment.AddItems(
			rs.GetValue(_T("sd_id")), 
			rs.GetValue(_T("sd_name")), 
			rs.GetValue(_T("sd_type")), 
			NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSOutPatientList::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSOutPatientList::OnFromDateChange(){
	
} */
/*void CHMSOutPatientList::OnFromDateSetfocus(){
	
} */
/*void CHMSOutPatientList::OnFromDateKillfocus(){
	
} */
int CHMSOutPatientList::OnFromDateCheckValue(){
	//OnListLoadData();
	return 0;
} 
/*void CHMSOutPatientList::OnToDateChange(){
	
} */
/*void CHMSOutPatientList::OnToDateSetfocus(){
	
} */
/*void CHMSOutPatientList::OnToDateKillfocus(){
	
} */
int CHMSOutPatientList::OnToDateCheckValue(){
	//OnListLoadData();
	return 0;
} 
/*void CHMSOutPatientList::OnPatientNameChange(){
	
} */
/*void CHMSOutPatientList::OnPatientNameSetfocus(){
	
} */
/*void CHMSOutPatientList::OnPatientNameKillfocus(){
	
} */
int CHMSOutPatientList::OnPatientNameCheckValue(){
	OnListLoadData();
	return 1;
} 
/*void CHMSOutPatientList::OnDocumentNoChange(){
	
} */
/*void CHMSOutPatientList::OnDocumentNoSetfocus(){
	
} */
/*void CHMSOutPatientList::OnDocumentNoKillfocus(){
	
} */
int CHMSOutPatientList::OnDocumentNoCheckValue(){
	if(m_wndDocumentNo.GetWindowTextLength() == 0){
		m_wndDocumentNo.SetWindowText(_T("0"));
	}
	OnListLoadData();
	return 1;
} 
void CHMSOutPatientList::OnSearchSelect(){
	OnListLoadData();
}
void CHMSOutPatientList::OnOutPatientSelect()
{
	m_szDepartmentKey.Empty();
	m_szStatusKey.Empty();
	UpdateData(TRUE);
	OnDepartmentLoadData();
	OnStatusLoadData();
	UpdateData(FALSE);
	OnListLoadData();
}
void CHMSOutPatientList::OnInPatientSelect()
{
	m_szDepartmentKey.Empty();
	m_szStatusKey.Empty();
	UpdateData(TRUE);
	OnDepartmentLoadData();
	OnStatusLoadData();
	UpdateData(FALSE);
	OnListLoadData();
}
void CHMSOutPatientList::OnOutpatientTreatSelect()
{
	m_szDepartmentKey.Empty();
	m_szStatusKey.Empty();
	UpdateData(TRUE);
	OnDepartmentLoadData();
	OnStatusLoadData();
	UpdateData(FALSE);
	OnListLoadData();
}
void CHMSOutPatientList::OnListDblClick(){
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0)
		return;
	
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	long nDoc = ToLong(m_wndList.GetItemText(nSel, 0));
	pMF->m_nDocumentNo = nDoc;
	pMF->m_nRefIndex = 0;
	pMF->m_nInpatient = m_nOutPatient;
	pMF->m_szReceiptDeptID = m_wndList.GetItemText(nSel, 10);
	pMF->m_wndPatientFee.LoadData(nDoc);
} 
void CHMSOutPatientList::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSOutPatientList::OnListRefresh(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return OnListLoadData();
}
int CHMSOutPatientList::OnListSearchForCard(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_szCardNo.Empty();
	CHMSSearchForCardDialog dlg(this);
	if(dlg.DoModal() == IDOK)
	{
		m_szCardNo = dlg.m_szCardNo;
		OnListLoadData();
		m_szCardNo.Empty();
	}
	return 0;
}

long CHMSOutPatientList::OnListLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szType, tmpStr, szObjects;
	UpdateData(true);
	
	m_wndList.BeginLoad(); 
	int nCount = 0;
	szWhere.Empty();
	szType = m_wndDepartment.GetCurrent(2);
	
	if (!m_szPatientName.IsEmpty())
	{
	//	InitCap(m_szPatientName, tmpStr);
	//	szWhere.AppendFormat(_T(" AND lower(hp_surname||' '||hp_midname||' '||hp_firstname) like(chr(37)||lower('%s')||chr(37)) "), tmpStr);
		m_nDocumentNo = 0;
	}

	
	szObjects = pMF->m_UserInfo.su_hms_xobject;
	if (szObjects.IsEmpty())
		szObjects = _T("''");

	if (m_nOutPatient == 0)
	{
		szWhere.Format(_T(" and hd_admitdate BETWEEN TO_TIMESTAMP('%s 00:00:00','YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s 23:59:59', 'YYYY-MM-DD HH24:MI:SS') "), m_szFromDate, m_szToDate);

		if (!m_szDepartmentKey.IsEmpty())
			szWhere.AppendFormat(_T(" AND hd_admitdept='%s' "), m_szDepartmentKey);
		
		szWhere.AppendFormat(_T(" AND hd_object in(%s) "), szObjects);
		//Ho so dang mo
		if (m_szStatusKey == _T("1"))
		{
			szWhere.AppendFormat(_T(" and hd_status IN('O','P') "));
		}
		if (m_szStatusKey == _T("2"))
		{
			szWhere.AppendFormat(_T(" and hd_status='T' and (hdf_acceptedfee<>'Y') "));
		}
		if (m_szStatusKey == _T("3"))
		{
			szWhere.AppendFormat(_T(" and hd_status='T' and hdf_acceptedfee='Y' and hdf_accepteddate BETWEEN TO_TIMESTAMP('%s 00:00:00', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s 23:59:59', 'YYYY-MM-DD HH24:MI:SS') "), m_szFromDate, m_szToDate);
		}

		szWhere.AppendFormat(_T(" and hd_isinpatient <>'Y' "));
		
		if (m_nDocumentNo > 0)
		{
			szWhere.Format(_T(" AND hd_docno=%ld "), m_nDocumentNo);
			m_szPatientName.Empty();
		}
		
		if(!pMF->m_szObjectTypeGroup.IsEmpty())
		{
			szWhere.AppendFormat(_T(" and ho_type in(%s) "), pMF->m_szObjectTypeGroup);
		}

		if(!m_szCardNo.IsEmpty())
		{
			szWhere.Format(_T(" and hd_cardno like(chr(37)||'%s'||chr(37)) "), m_szCardNo);
		}

		szSQL.Format(_T(" SELECT DISTINCT hd_docno AS docno,") \
					_T("      trim(hp_surname") \
					_T("      ||' '") \
					_T("      ||hp_midname") \
					_T("      ||' '") \
					_T("      ||hp_firstname)                               AS patientname,") \
					_T("      hms_getage(trunc(hd_admitdate), hp_birthdate) AS age,") \
					_T("      HMS_GETSEX(hp_sex) AS sex,") \
					_T("      HMS_GETOBJECtNAME(hd_object) AS OBJECT,") \
					_T("      hd_cardno                                     AS cardno,") \
					_T("      hms_getaddress(hp_provid,hp_distid,hp_villid) AS address,") \
					_T("      hd_admitdept                AS deptid,") \
					//_T("      CAST(hd_disrate AS INTEGER) AS disrate,") \//
					_T("   case when NVL(HD_INSLINE, 'N') = 'Y' AND NVL(HD_EMERGENCY,'N')='N' THEN HC_DISCOUNT*(select HMS_INSOFFLINE from hms_config)/100 else cast(hd_disrate as integer) end as disrate, ") \
					_T("      hd_emergency                AS emergency,") \
					_T("      trunc(hd_admitdate)         AS admitdate,") \
					_T("      trunc(hd_enddate)           AS enddate, ") \
					_T(" hd_status as docstatus ") \
					_T(" FROM hms_patient") \
					_T(" LEFT JOIN hms_doc") \
					_T(" ON(hd_patientno=hp_patientno)") \
					_T(" LEFT JOIN hms_card ON (hc_patientno=hd_patientno AND hc_idx=hd_cardidx)") \
					_T(" LEFT JOIN hms_object ON(ho_id=hd_object) ") \
					_T(" WHERE NVL(hp_type,'P') <> 'X' ") \
					_T(" %s ") \
					_T(" ORDER BY patientname,") \
					_T("      admitdate "), szWhere);

	}
	else
	{	
		if (m_nOutPatient == 1)
			szWhere.Format(_T(" AND htr_outpatient<>'Y' "));
		else if (m_nOutPatient == 2)
			szWhere.Format(_T(" AND htr_outpatient='Y' "));

		if (!m_szDepartmentKey.IsEmpty())
			szWhere.AppendFormat(_T(" AND htr_deptid='%s'  "), m_szDepartmentKey);
		
		szWhere.AppendFormat(_T(" AND hd_object in(%s) "), szObjects);

		if (m_szStatusKey == _T("1"))
		{
			szWhere.AppendFormat(_T(" and hcr_status ='A' "));

		}
		else if (m_szStatusKey == _T("2"))
		{
			szWhere.AppendFormat(_T(" and hcr_status='I' "));
			szWhere.AppendFormat(_T(" and (htr_admitdate between TO_TIMESTAMP('%s 00:00:00', 'YYYY-MM-DD HH24:MI:SS') and TO_TIMESTAMP('%s 23:59:59', 'YYYY-MM-DD HH24:MI:SS') ") \
			_T(" or htr_dischargedate between TO_TIMESTAMP('%s 00:00:00', 'YYYY-MM-DD HH24:MI:SS') and TO_TIMESTAMP('%s 23:59:59', 'YYYY-MM-DD HH24:MI:SS') )"),
			m_szFromDate, m_szToDate, m_szFromDate, m_szToDate,m_szFromDate, m_szToDate);

		}
		else if (m_szStatusKey == _T("3"))
		{
			szWhere.AppendFormat(_T(" and hcr_status='T' and hcrf_acceptedfee = 'Y'  "));
			szWhere.AppendFormat(_T(" and hcrf_accepteddate between TO_TIMESTAMP('%s 00:00:00', 'YYYY-MM-DD HH24:MI:SS') and TO_TIMESTAMP('%s 23:59:59', 'YYYY-MM-DD HH24:MI:SS') "),
				m_szFromDate, m_szToDate);

		}
		else if (m_szStatusKey == _T("4"))
		{
			szWhere.AppendFormat(_T(" and hcr_status='T' and hcrf_acceptedfee='P' "));
			szWhere.AppendFormat(_T(" and htrf_invoicefee in(select distinct hfe_invoiceno from hms_fee_invoice where hfe_date between TO_TIMESTAMP('%s 00:00:00', 'YYYY-MM-DD HH24:MI:SS') and TO_TIMESTAMP('%s 23:59:59', 'YYYY-MM-DD HH24:MI:SS') ) "),
				m_szFromDate, m_szToDate);

		}
		else
		{
			szWhere.AppendFormat(_T(" and (htr_admitdate between TO_TIMESTAMP('%s 00:00:00', 'YYYY-MM-DD HH24:MI:SS') and TO_TIMESTAMP('%s 23:59:59', 'YYYY-MM-DD HH24:MI:SS') ") \
			_T(" or htr_dischargedate between TO_TIMESTAMP('%s 00:00:00', 'YYYY-MM-DD HH24:MI:SS') and TO_TIMESTAMP('%s 23:59:59', 'YYYY-MM-DD HH24:MI:SS') )"),
			m_szFromDate, m_szToDate, m_szFromDate, m_szToDate,m_szFromDate, m_szToDate);
		}


		if (m_nDocumentNo > 0)
		{
			szWhere.Format(_T(" AND htr_docno=%ld "), m_nDocumentNo);
			m_szPatientName.Empty();
		}

		if(!m_szCardNo.IsEmpty())
		{
			szWhere.Format(_T(" and hd_cardno like(chr(37)||'%s'||chr(37)) "), m_szCardNo);
		}

		szSQL.Format(_T(" SELECT DISTINCT hd_docno AS docno,") \
					_T("      trim(hp_surname") \
					_T("      ||' '") \
					_T("      ||hp_midname") \
					_T("      ||' '") \
					_T("      ||hp_firstname)                               AS patientname,") \
					_T("      hms_getage(trunc(hd_admitdate), hp_birthdate) AS age,") \
					_T("      hms_getsex(hp_sex) AS sex,") \
					_T("      hms_getobjectname(hd_object) AS OBJECT,") \
					_T("      hd_cardno                                     AS cardno,") \
					_T("      hms_getaddress(hp_provid,hp_distid,hp_villid) AS address,") \
					_T("      htr_deptid                AS deptid,") \
					//_T("      CAST(hd_disrate AS INTEGER) AS disrate,") \//
					_T("   case when NVL(HD_INSLINE, 'N') = 'Y' AND NVL(HD_EMERGENCY,'N')='N' THEN HC_DISCOUNT*(select HMS_INSOFFLINE from hms_config)/100 else cast(hd_disrate as integer) end as disrate, ") \
					_T("      htr_emergency                AS emergency,") \
					_T("      trunc(hcr_admitdate)         AS admitdate,") \
					_T("      trunc(hcr_dischargedate)           AS enddate,") \
					_T(" hcr_status as docstatus ") \
					_T(" FROM hms_patient") \
					_T(" LEFT JOIN hms_doc ") \
					_T(" ON(hd_patientno=hp_patientno)") \
					_T(" LEFT JOIN hms_card ON (hc_patientno=hd_patientno AND hc_idx=hd_cardidx)") \
					_T(" LEFT JOIN hms_clinical_record ") \
					_T(" ON(hcr_docno=hd_docno) ") \
					_T(" LEFT JOIN hms_treatment_record ON(htr_docno=hcr_docno and htr_idx=hcr_refidx) ") \
					_T(" WHERE NVL(hp_type,'P') <> 'X' and hd_isinpatient='Y' ") \
					_T(" %s ") \
					_T(" ORDER BY patientname,") \
					_T("      admitdate "), szWhere);

	}

	
	CString szDate, szEndDate, insrate;
	
	CString szFirstName, szMidName, szSurName, szSearchName;
	CString szFirstName2, szMidName2, szSurName2, szSearchName2, szShortName;
	if(!m_szPatientName.IsEmpty())
	{
		StringLower(m_szPatientName, szSearchName);
		SplitName(szSearchName, szSurName, szMidName, szFirstName);
	}
_tprintf(_T("%s"), szSQL);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 

		rs.GetValue(_T("patientname"), tmpStr);
		if(!m_szPatientName.IsEmpty()){

				CString szPatientName;
				
				StringLower(tmpStr, szPatientName);

				SplitName(szPatientName, szSurName2, szMidName2, szFirstName2);
				GetShortName(szPatientName, szShortName);
				if(szShortName != m_szPatientName)
				{
					if(!szFirstName.IsEmpty() && szFirstName != szFirstName2){
						rs.MoveNext();
						continue;
					}
				}

					
					if(!szSurName.IsEmpty() && szSurName != szSurName2){
						rs.MoveNext();
						continue;
					}
					if(!szMidName.IsEmpty() && szMidName2.Find(szMidName) == -1){
						rs.MoveNext();
						continue;
					}
			
		}



		
		rs.GetValue(_T("disrate"), insrate);
		if(insrate == _T("0"))
			insrate.Empty();

		rs.GetValue(_T("docstatus"), tmpStr);
		if(tmpStr != _T("T"))
			szEndDate.Empty();
		else
			rs.GetValue(_T("enddate"), szEndDate);
		
		int nItem = m_wndList.AddItems(
			rs.GetValue(_T("docno")), 
			rs.GetValue(_T("patientname")), 
			rs.GetValue(_T("age")), 
			rs.GetValue(_T("sex")), 
			rs.GetValue(_T("object")), 
			rs.GetValue(_T("cardno")), 
			insrate, 
			rs.GetValue(_T("deptid")), 
			rs.GetValue(_T("admitdate")),
			szEndDate,
			rs.GetValue(_T("deptid")), 
			rs.GetValue(_T("refidx")), 			
			NULL);

		rs.GetValue(_T("emergency"), tmpStr);
		if(tmpStr == _T("Y")){
			m_wndList.SetItemBkColor(nItem, RGB(128, 0, 0), FALSE);
			m_wndList.SetItemTextColor(nItem, RGB(255, 255, 255), FALSE);
		}
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;

}
int CHMSOutPatientList::OnAddHMSHFPatientList(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSOutPatientList::OnEditHMSHFPatientList(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSOutPatientList::OnDeleteHMSHFPatientList(){
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
 		OnCancelHMSHFPatientList(); 
 	}
	return 0;
}
int CHMSOutPatientList::OnSaveHMSHFPatientList(){
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
 		//OnHMSHFPatientListListSearchData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSOutPatientList::OnCancelHMSHFPatientList(){
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
int CHMSOutPatientList::OnHMSHFPatientListListSearchData(){
	return 0;
}

BOOL CHMSOutPatientList::PreTranslateMessage(MSG* pMsg)
{
	// TODO: Add your specialized code here and/or call the base class

	return CGuiView::PreTranslateMessage(pMsg);
}

void CHMSOutPatientList::OnResizeLayout()
{
	AddResize(&m_wndList, 100, 100);
	AddResize(&m_wndPatientInformation, 100, 100);
}
