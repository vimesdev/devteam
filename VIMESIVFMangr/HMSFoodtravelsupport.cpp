#include "HMSFoodtravelsupport.h"
#include "ReportDocument.h"
#include "Excel.h"
#include "MainFrm.h"

static int _OnPatientListRefreshFnc(CWnd *pWnd){
	return ((CHMSFoodtravelsupport*)pWnd)->OnPatientRefresh();
}

static int _OnPatientListIssueFnc(CWnd *pWnd){
	 return ((CHMSFoodtravelsupport*)pWnd)->OnPatientListIssue();
} 

static int _OnPatientListCancelFnc(CWnd *pWnd){
	 return ((CHMSFoodtravelsupport*)pWnd)->OnPatientListCancel();
} 

static int _OnPatientListPrintFnc(CWnd *pWnd){	
	 ((CHMSFoodtravelsupport*)pWnd)->OnPrintDailySelect();
	 return 0;
} 
/*static void _OnPatientnameChangeFnc(CWnd *pWnd){
	((CHMSFoodtravelsupport *)pWnd)->OnPatientnameChange();
} */
/*static void _OnPatientnameSetfocusFnc(CWnd *pWnd){
	((CHMSFoodtravelsupport *)pWnd)->OnPatientnameSetfocus();} */ 
/*static void _OnPatientnameKillfocusFnc(CWnd *pWnd){
	((CHMSFoodtravelsupport *)pWnd)->OnPatientnameKillfocus();
} */
static int _OnPatientnameCheckValueFnc(CWnd *pWnd){
	return ((CHMSFoodtravelsupport *)pWnd)->OnPatientnameCheckValue();
} 
/*static void _OnAgeChangeFnc(CWnd *pWnd){
	((CHMSFoodtravelsupport *)pWnd)->OnAgeChange();
} */
/*static void _OnAgeSetfocusFnc(CWnd *pWnd){
	((CHMSFoodtravelsupport *)pWnd)->OnAgeSetfocus();} */ 
/*static void _OnAgeKillfocusFnc(CWnd *pWnd){
	((CHMSFoodtravelsupport *)pWnd)->OnAgeKillfocus();
} */
static int _OnAgeCheckValueFnc(CWnd *pWnd){
	return ((CHMSFoodtravelsupport *)pWnd)->OnAgeCheckValue();
} 
/*static void _OnSexChangeFnc(CWnd *pWnd){
	((CHMSFoodtravelsupport *)pWnd)->OnSexChange();
} */
/*static void _OnSexSetfocusFnc(CWnd *pWnd){
	((CHMSFoodtravelsupport *)pWnd)->OnSexSetfocus();} */ 
/*static void _OnSexKillfocusFnc(CWnd *pWnd){
	((CHMSFoodtravelsupport *)pWnd)->OnSexKillfocus();
} */
static int _OnSexCheckValueFnc(CWnd *pWnd){
	return ((CHMSFoodtravelsupport *)pWnd)->OnSexCheckValue();
} 
/*static void _OnDocnoChangeFnc(CWnd *pWnd){
	((CHMSFoodtravelsupport *)pWnd)->OnDocnoChange();
} */
/*static void _OnDocnoSetfocusFnc(CWnd *pWnd){
	((CHMSFoodtravelsupport *)pWnd)->OnDocnoSetfocus();} */ 
/*static void _OnDocnoKillfocusFnc(CWnd *pWnd){
	((CHMSFoodtravelsupport *)pWnd)->OnDocnoKillfocus();
} */
static int _OnDocnoCheckValueFnc(CWnd *pWnd){
	return ((CHMSFoodtravelsupport *)pWnd)->OnDocnoCheckValue();
} 
/*static void _OnDepidChangeFnc(CWnd *pWnd){
	((CHMSFoodtravelsupport *)pWnd)->OnDepidChange();
} */
/*static void _OnDepidSetfocusFnc(CWnd *pWnd){
	((CHMSFoodtravelsupport *)pWnd)->OnDepidSetfocus();} */ 
/*static void _OnDepidKillfocusFnc(CWnd *pWnd){
	((CHMSFoodtravelsupport *)pWnd)->OnDepidKillfocus();
} */
static int _OnDepidCheckValueFnc(CWnd *pWnd){
	return ((CHMSFoodtravelsupport *)pWnd)->OnDepidCheckValue();
} 
/*static void _OnInsuranceChangeFnc(CWnd *pWnd){
	((CHMSFoodtravelsupport *)pWnd)->OnInsuranceChange();
} */
/*static void _OnInsuranceSetfocusFnc(CWnd *pWnd){
	((CHMSFoodtravelsupport *)pWnd)->OnInsuranceSetfocus();} */ 
/*static void _OnInsuranceKillfocusFnc(CWnd *pWnd){
	((CHMSFoodtravelsupport *)pWnd)->OnInsuranceKillfocus();
} */
static int _OnInsuranceCheckValueFnc(CWnd *pWnd){
	return ((CHMSFoodtravelsupport *)pWnd)->OnInsuranceCheckValue();
} 
/*static void _OnAdmitdateChangeFnc(CWnd *pWnd){
	((CHMSFoodtravelsupport *)pWnd)->OnAdmitdateChange();
} */
/*static void _OnAdmitdateSetfocusFnc(CWnd *pWnd){
	((CHMSFoodtravelsupport *)pWnd)->OnAdmitdateSetfocus();} */ 
/*static void _OnAdmitdateKillfocusFnc(CWnd *pWnd){
	((CHMSFoodtravelsupport *)pWnd)->OnAdmitdateKillfocus();
} */
static int _OnAdmitdateCheckValueFnc(CWnd *pWnd){
	return ((CHMSFoodtravelsupport *)pWnd)->OnAdmitdateCheckValue();
} 
/*static void _OnAddressChangeFnc(CWnd *pWnd){
	((CHMSFoodtravelsupport *)pWnd)->OnAddressChange();
} */
/*static void _OnAddressSetfocusFnc(CWnd *pWnd){
	((CHMSFoodtravelsupport *)pWnd)->OnAddressSetfocus();} */ 
/*static void _OnAddressKillfocusFnc(CWnd *pWnd){
	((CHMSFoodtravelsupport *)pWnd)->OnAddressKillfocus();
} */
static int _OnAddressCheckValueFnc(CWnd *pWnd){
	return ((CHMSFoodtravelsupport *)pWnd)->OnAddressCheckValue();
} 
/*static void _OnHomeToHospitalChangeFnc(CWnd *pWnd){
	((CHMSFoodtravelsupport *)pWnd)->OnHomeToHospitalChange();
} */
/*static void _OnHomeToHospitalSetfocusFnc(CWnd *pWnd){
	((CHMSFoodtravelsupport *)pWnd)->OnHomeToHospitalSetfocus();} */ 
/*static void _OnHomeToHospitalKillfocusFnc(CWnd *pWnd){
	((CHMSFoodtravelsupport *)pWnd)->OnHomeToHospitalKillfocus();
} */
static int _OnHomeToHospitalCheckValueFnc(CWnd *pWnd){
	return ((CHMSFoodtravelsupport *)pWnd)->OnHomeToHospitalCheckValue();
} 
static void _OnSourceSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSFoodtravelsupport* )pWnd)->OnSourceSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSourceSelendokFnc(CWnd *pWnd){
	((CHMSFoodtravelsupport *)pWnd)->OnSourceSelendok();
}
/*static void _OnSourceSetfocusFnc(CWnd *pWnd){
	((CHMSFoodtravelsupport *)pWnd)->OnSourceKillfocus();
}*/
/*static void _OnSourceKillfocusFnc(CWnd *pWnd){
	((CHMSFoodtravelsupport *)pWnd)->OnSourceKillfocus();
}*/
static long _OnSourceLoadDataFnc(CWnd *pWnd){
	return ((CHMSFoodtravelsupport *)pWnd)->OnSourceLoadData();
}
/*static void _OnSourceAddNewFnc(CWnd *pWnd){
	((CHMSFoodtravelsupport *)pWnd)->OnSourceAddNew();
}*/
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSFoodtravelsupport *pVw = (CHMSFoodtravelsupport *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CHMSFoodtravelsupport *pVw = (CHMSFoodtravelsupport *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSFoodtravelsupport *pVw = (CHMSFoodtravelsupport *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSFoodtravelsupport *pVw = (CHMSFoodtravelsupport *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSFoodtravelsupport *pVw = (CHMSFoodtravelsupport *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CHMSFoodtravelsupport *pVw = (CHMSFoodtravelsupport *)pWnd;
	pVw->OnPrintSelect();
} 
static long _OnListItemLoadDataFnc(CWnd *pWnd){
	return ((CHMSFoodtravelsupport*)pWnd)->OnListItemLoadData();
} 
static void _OnListItemDblClickFnc(CWnd *pWnd){
	((CHMSFoodtravelsupport*)pWnd)->OnListItemDblClick();
} 
static void _OnListItemSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSFoodtravelsupport*)pWnd)->OnListItemSelectChange(nOldItem, nNewItem);
} 
static int _OnListItemDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSFoodtravelsupport*)pWnd)->OnListItemDeleteItem();
} 
static int _OnAddHMSFoodtravelsupportFnc(CWnd *pWnd){
	 return ((CHMSFoodtravelsupport*)pWnd)->OnAddHMSFoodtravelsupport();
} 
static int _OnEditHMSFoodtravelsupportFnc(CWnd *pWnd){
	 return ((CHMSFoodtravelsupport*)pWnd)->OnEditHMSFoodtravelsupport();
} 
static int _OnDeleteHMSFoodtravelsupportFnc(CWnd *pWnd){
	 return ((CHMSFoodtravelsupport*)pWnd)->OnDeleteHMSFoodtravelsupport();
} 
static int _OnSaveHMSFoodtravelsupportFnc(CWnd *pWnd){
	 return ((CHMSFoodtravelsupport*)pWnd)->OnSaveHMSFoodtravelsupport();
} 
static int _OnCancelHMSFoodtravelsupportFnc(CWnd *pWnd){
	 return ((CHMSFoodtravelsupport*)pWnd)->OnCancelHMSFoodtravelsupport();
} 
CHMSFoodtravelsupport::CHMSFoodtravelsupport(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 805;
	m_nDlgHeight = 470;
	m_szTitle=_T("Ho tro tien an, tien di lai cho benh nhan dieu tri");
	SetDefaultValues();
}
CHMSFoodtravelsupport::~CHMSFoodtravelsupport(){
}
void CHMSFoodtravelsupport::OnCreateComponents(){
	m_wndInformation.Create(this, _T("Information"), 5, 5, 320, 291);
	m_wndInformationdistribution.Create(this, _T("Information distribution"), 5, 296, 320, 381);
	m_wndListfood.Create(this, _T("List on food supply"), 324, 5, 894, 460);
	m_wndPatientnameLabel.Create(this, _T("Patient Name"), 11, 60, 115, 85);
	m_wndPatientname.Create(this,120, 60, 312, 85); 
	m_wndAgeLabel.Create(this, _T("Age"), 11, 90, 115, 115);
	m_wndAge.Create(this,120, 90, 200, 115); 
	m_wndSexLabel.Create(this, _T("Sex"), 205, 90, 243, 115);
	m_wndSex.Create(this,248, 90, 311, 115); 
	m_wndDocnoLabel.Create(this, _T("Document No"), 11, 30, 115, 55);
	m_wndDocno.Create(this,120, 30, 221, 55); 
	m_wndDepidLabel.Create(this, _T("Dept"), 11, 202, 115, 227);
	m_wndDepid.Create(this,120, 202, 312, 227); 
	m_wndInsuranceLabel.Create(this, _T("Insurance"), 11, 232, 115, 257);
	m_wndInsurance.Create(this,120, 232, 312, 257); 
	m_wndAdmitdateLabel.Create(this, _T("Admitdate"), 11, 262, 115, 287);
	m_wndAdmitdate.Create(this,120, 262, 242, 287); 
	m_wndAddressLabel.Create(this, _T("Address"), 11, 120, 115, 197);
	m_wndAddress.Create(this,120, 120, 312, 197); 
	m_wndDistanceLabel.Create(this, _T("Distance"), 11, 322, 115, 347);
	m_wndHomeToHospital.Create(this,120, 322, 242, 347); 
	m_wndSourceLabel.Create(this, _T("Source"), 11, 352, 115, 377);
	m_wndSource.Create(this,120, 352, 312, 377); 
	m_wndAdd.Create(this, _T("&Add"), 68, 387, 148, 412);
	m_wndEdit.Create(this, _T("&Edit"), 153, 387, 233, 412);
	m_wndDelete.Create(this, _T("&Delete"), 238, 387, 318, 412);
	m_wndSave.Create(this, _T("&Save"), 68, 417, 148, 442);
	m_wndCancel.Create(this, _T("&Cancel"), 153, 417, 233, 442);
	m_wndPrint.Create(this, _T("&Print"), 238, 417, 318, 442);
	m_wndListItem.Create(this,330, 28, 890, 453); 
}
void CHMSFoodtravelsupport::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndPatientname.SetLimitText(15);
	m_wndPatientname.SetCheckValue(true);
	//m_wndAge.SetMax(CDate(pMF->GetSysDate()));
	m_wndAge.SetCheckValue(true);
	m_wndSex.SetLimitText(1);
	m_wndSex.SetCheckValue(true);
	m_wndDocno.SetCheckValue(true);
	m_wndDepid.SetLimitText(7);
	m_wndDepid.SetCheckValue(true);
	m_wndInsurance.SetLimitText(35);
	m_wndInsurance.SetCheckValue(true);
	m_wndAdmitdate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndAdmitdate.SetCheckValue(true);
	m_wndAddress.SetLimitText(35);
	m_wndAddress.SetCheckValue(true);
	m_wndHomeToHospital.SetLimitText(35);
	m_wndHomeToHospital.SetCheckValue(true);
	m_wndSource.SetCheckValue(true);
	m_wndSource.LimitText(35);


	m_wndSource.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndSource.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);
	m_wndSource.InsertColumn(2, _T("Cost"), CFMT_TEXT, 60);
	m_wndSource.InsertColumn(3, _T("ItemID"), CFMT_TEXT, 100);

	m_wndListItem.SetCheckBox(true);
	m_wndListItem.InsertColumn(0, _T("Stt"), CFMT_NUMBER, 35);
	m_wndListItem.InsertColumn(1, _T("Date"), CFMT_DATE, 80);
	m_wndListItem.InsertColumn(2, _T("Desc"), CFMT_TEXT, 200);
	m_wndListItem.InsertColumn(3, _T("Cost"), CFMT_MONEY, 70);
	m_wndListItem.InsertColumn(4, _T("Status"), CFMT_TEXT, 80);
	m_wndListItem.InsertColumn(5, _T("Dept"), CFMT_TEXT, 80);
	m_wndListItem.InsertColumn(6, _T(""), CFMT_TEXT, 0);
	m_wndListItem.InsertColumn(7, _T(""), CFMT_TEXT, 0);
	m_wndListItem.InsertColumn(8, _T(""), CFMT_TEXT, 0);	
	m_wndListItem.InsertColumn(9, _T(""), CFMT_TEXT, 0);


	m_hms_foodtravelsupportTbl.SetTableName(_T("hms_foodtravelsupport"));
	m_hms_foodtravelsupportTbl.AddField(_T("hfs_docno"), dfLong); 
	m_hms_foodtravelsupportTbl.AddField(_T("hfs_distance"), dfFloat); 
	m_hms_foodtravelsupportTbl.AddField(_T("hfs_type"), dfText, 2); 
	m_hms_foodtravelsupportTbl.AddField(_T("hfs_insno"), dfText, 25);
}
void CHMSFoodtravelsupport::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	//m_wndPatientname.SetEvent(WE_CHANGE, _OnPatientnameChangeFnc);
	//m_wndPatientname.SetEvent(WE_SETFOCUS, _OnPatientnameSetfocusFnc);
	//m_wndPatientname.SetEvent(WE_KILLFOCUS, _OnPatientnameKillfocusFnc);
	m_wndPatientname.SetEvent(WE_CHECKVALUE, _OnPatientnameCheckValueFnc);
	//m_wndAge.SetEvent(WE_CHANGE, _OnAgeChangeFnc);
	//m_wndAge.SetEvent(WE_SETFOCUS, _OnAgeSetfocusFnc);
	//m_wndAge.SetEvent(WE_KILLFOCUS, _OnAgeKillfocusFnc);
	m_wndAge.SetEvent(WE_CHECKVALUE, _OnAgeCheckValueFnc);
	//m_wndSex.SetEvent(WE_CHANGE, _OnSexChangeFnc);
	//m_wndSex.SetEvent(WE_SETFOCUS, _OnSexSetfocusFnc);
	//m_wndSex.SetEvent(WE_KILLFOCUS, _OnSexKillfocusFnc);
	m_wndSex.SetEvent(WE_CHECKVALUE, _OnSexCheckValueFnc);
	//m_wndDocno.SetEvent(WE_CHANGE, _OnDocnoChangeFnc);
	//m_wndDocno.SetEvent(WE_SETFOCUS, _OnDocnoSetfocusFnc);
	//m_wndDocno.SetEvent(WE_KILLFOCUS, _OnDocnoKillfocusFnc);
	m_wndDocno.SetEvent(WE_CHECKVALUE, _OnDocnoCheckValueFnc);
	//m_wndDepid.SetEvent(WE_CHANGE, _OnDepidChangeFnc);
	//m_wndDepid.SetEvent(WE_SETFOCUS, _OnDepidSetfocusFnc);
	//m_wndDepid.SetEvent(WE_KILLFOCUS, _OnDepidKillfocusFnc);
	m_wndDepid.SetEvent(WE_CHECKVALUE, _OnDepidCheckValueFnc);
	//m_wndInsurance.SetEvent(WE_CHANGE, _OnInsuranceChangeFnc);
	//m_wndInsurance.SetEvent(WE_SETFOCUS, _OnInsuranceSetfocusFnc);
	//m_wndInsurance.SetEvent(WE_KILLFOCUS, _OnInsuranceKillfocusFnc);
	m_wndInsurance.SetEvent(WE_CHECKVALUE, _OnInsuranceCheckValueFnc);
	//m_wndAdmitdate.SetEvent(WE_CHANGE, _OnAdmitdateChangeFnc);
	//m_wndAdmitdate.SetEvent(WE_SETFOCUS, _OnAdmitdateSetfocusFnc);
	//m_wndAdmitdate.SetEvent(WE_KILLFOCUS, _OnAdmitdateKillfocusFnc);
	m_wndAdmitdate.SetEvent(WE_CHECKVALUE, _OnAdmitdateCheckValueFnc);
	//m_wndAddress.SetEvent(WE_CHANGE, _OnAddressChangeFnc);
	//m_wndAddress.SetEvent(WE_SETFOCUS, _OnAddressSetfocusFnc);
	//m_wndAddress.SetEvent(WE_KILLFOCUS, _OnAddressKillfocusFnc);
	m_wndAddress.SetEvent(WE_CHECKVALUE, _OnAddressCheckValueFnc);
	//m_wndHomeToHospital.SetEvent(WE_CHANGE, _OnHomeToHospitalChangeFnc);
	//m_wndHomeToHospital.SetEvent(WE_SETFOCUS, _OnHomeToHospitalSetfocusFnc);
	//m_wndHomeToHospital.SetEvent(WE_KILLFOCUS, _OnHomeToHospitalKillfocusFnc);
	m_wndHomeToHospital.SetEvent(WE_CHECKVALUE, _OnHomeToHospitalCheckValueFnc);
	m_wndSource.SetEvent(WE_SELENDOK, _OnSourceSelendokFnc);
	//m_wndSource.SetEvent(WE_SETFOCUS, _OnSourceSetfocusFnc);
	//m_wndSource.SetEvent(WE_KILLFOCUS, _OnSourceKillfocusFnc);
	m_wndSource.SetEvent(WE_SELCHANGE, _OnSourceSelectChangeFnc);
	m_wndSource.SetEvent(WE_LOADDATA, _OnSourceLoadDataFnc);
	//m_wndSource.SetEvent(WE_ADDNEW, _OnSourceAddNewFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndListItem.SetEvent(WE_SELCHANGE, _OnListItemSelectChangeFnc);
	m_wndListItem.SetEvent(WE_LOADDATA, _OnListItemLoadDataFnc);
	m_wndListItem.SetEvent(WE_DBLCLICK, _OnListItemDblClickFnc);
	m_wndListItem.SetWindowText(_T("Prescription"));
	m_wndListItem.AddEvent(1, _T("Issue"), _OnPatientListIssueFnc);
	m_wndListItem.AddEvent(2, _T("Rollback"), _OnPatientListCancelFnc);
	m_wndListItem.AddEvent(3, _T("Print"), _OnPatientListPrintFnc);	
	m_wndListItem.AddEvent(0, _T("-"), NULL);
	m_wndListItem.AddEvent(5, _T("Refresh"), _OnPatientListRefreshFnc);
	TranslateString(_T("Accepted"), m_szAccepted);
	TranslateString(_T("Open"), m_szOpen);
	GetDataToScreen();
	OnListItemLoadData();
	UpdateData(false);
}
void CHMSFoodtravelsupport::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndPatientname.GetDlgCtrlID(), m_szPatientname);
	DDX_Text(pDX, m_wndAge.GetDlgCtrlID(), m_szAge);
	DDX_Text(pDX, m_wndSex.GetDlgCtrlID(), m_szSex);
	DDX_Text(pDX, m_wndDocno.GetDlgCtrlID(), m_nDocno);
	DDX_Text(pDX, m_wndDepid.GetDlgCtrlID(), m_szDepid);
	DDX_Text(pDX, m_wndInsurance.GetDlgCtrlID(), m_szInsurance);
	DDX_TextEx(pDX, m_wndAdmitdate.GetDlgCtrlID(), m_szAdmitdate);
	DDX_Text(pDX, m_wndAddress.GetDlgCtrlID(), m_szAddress);
	DDX_Text(pDX, m_wndHomeToHospital.GetDlgCtrlID(), m_nHomeToHospital);
	DDX_TextEx(pDX, m_wndSource.GetDlgCtrlID(), m_szSourceKey);

}
void CHMSFoodtravelsupport::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM hms_foodtravelsupport WHERE hfs_docno=%d"), m_nDocno);
	rs.ExecSQL(szSQL);
	if (!rs.IsEOF())
	{
		rs.GetValue(_T("hfs_distance"), m_nHomeToHospital);
		rs.GetValue(_T("hfs_type"), m_szSourceKey);
		SetMode(VM_VIEW);
	}
	else
		SetMode(VM_NONE);

}
void CHMSFoodtravelsupport::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_hms_foodtravelsupportTbl.SetValue(_T("hfs_docno"), m_nDocno);
	m_hms_foodtravelsupportTbl.SetValue(_T("hfs_distance"), m_nHomeToHospital);
	m_hms_foodtravelsupportTbl.SetValue(_T("hfs_type"), m_szSourceKey);
	m_hms_foodtravelsupportTbl.SetValue(_T("hfs_insno"), m_szInsurance);
}
void CHMSFoodtravelsupport::SetDefaultValues(){
	m_nHomeToHospital=0;
	m_szSourceKey.Empty();
}
int CHMSFoodtravelsupport::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiDialog::SetMode(nMode); 
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
  		switch(nMode){ 
 		case VM_ADD: 
 			EnableControls(FALSE);
			m_wndHomeToHospital.EnableWindow(true);
			m_wndSource.EnableWindow(true);
 			EnableButtons(TRUE, 3, 4, -1); 
 			SetDefaultValues();
			m_wndHomeToHospital.SetFocus();
 			break; 
 		case VM_EDIT: 
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 3, 4, -1); 
			m_wndHomeToHospital.EnableWindow(true);
			m_wndSource.EnableWindow(true);
 			break; 
 		case VM_VIEW: 
 			EnableControls(FALSE); 
 			EnableButtons(FALSE,0,3, 4, -1); 
 			break; 
 		case VM_NONE: 
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 0, 6, -1); 
 			SetDefaultValues(); 
 			break; 
 		}; 
		m_wndSource.EnableWindow(true);
 		UpdateData(FALSE); 
 		return nOldMode; 
}
/*void CHMSFoodtravelsupport::OnPatientnameChange(){
	
} */
/*void CHMSFoodtravelsupport::OnPatientnameSetfocus(){
	
} */
/*void CHMSFoodtravelsupport::OnPatientnameKillfocus(){
	
} */
int CHMSFoodtravelsupport::OnPatientnameCheckValue(){
	return 0;
} 
/*void CHMSFoodtravelsupport::OnAgeChange(){
	
} */
/*void CHMSFoodtravelsupport::OnAgeSetfocus(){
	
} */
/*void CHMSFoodtravelsupport::OnAgeKillfocus(){
	
} */
int CHMSFoodtravelsupport::OnAgeCheckValue(){
	return 0;
} 
/*void CHMSFoodtravelsupport::OnSexChange(){
	
} */
/*void CHMSFoodtravelsupport::OnSexSetfocus(){
	
} */
/*void CHMSFoodtravelsupport::OnSexKillfocus(){
	
} */
int CHMSFoodtravelsupport::OnSexCheckValue(){
	return 0;
} 
/*void CHMSFoodtravelsupport::OnDocnoChange(){
	
} */
/*void CHMSFoodtravelsupport::OnDocnoSetfocus(){
	
} */
/*void CHMSFoodtravelsupport::OnDocnoKillfocus(){
	
} */
int CHMSFoodtravelsupport::OnDocnoCheckValue(){
	return 0;
} 
/*void CHMSFoodtravelsupport::OnDepidChange(){
	
} */
/*void CHMSFoodtravelsupport::OnDepidSetfocus(){
	
} */
/*void CHMSFoodtravelsupport::OnDepidKillfocus(){
	
} */
int CHMSFoodtravelsupport::OnDepidCheckValue(){
	return 0;
} 
/*void CHMSFoodtravelsupport::OnInsuranceChange(){
	
} */
/*void CHMSFoodtravelsupport::OnInsuranceSetfocus(){
	
} */
/*void CHMSFoodtravelsupport::OnInsuranceKillfocus(){
	
} */
int CHMSFoodtravelsupport::OnInsuranceCheckValue(){
	return 0;
} 
/*void CHMSFoodtravelsupport::OnAdmitdateChange(){
	
} */
/*void CHMSFoodtravelsupport::OnAdmitdateSetfocus(){
	
} */
/*void CHMSFoodtravelsupport::OnAdmitdateKillfocus(){
	
} */
int CHMSFoodtravelsupport::OnAdmitdateCheckValue(){
	return 0;
} 
/*void CHMSFoodtravelsupport::OnAddressChange(){
	
} */
/*void CHMSFoodtravelsupport::OnAddressSetfocus(){
	
} */
/*void CHMSFoodtravelsupport::OnAddressKillfocus(){
	
} */
int CHMSFoodtravelsupport::OnAddressCheckValue(){
	return 0;
} 
/*void CHMSFoodtravelsupport::OnHomeToHospitalChange(){
	
} */
/*void CHMSFoodtravelsupport::OnHomeToHospitalSetfocus(){
	
} */
/*void CHMSFoodtravelsupport::OnHomeToHospitalKillfocus(){
	
} */
int CHMSFoodtravelsupport::OnHomeToHospitalCheckValue(){
	return 0;
} 
void CHMSFoodtravelsupport::OnSourceSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSFoodtravelsupport::OnSourceSelendok(){
	 OnListItemLoadData();
}
/*void CHMSFoodtravelsupport::OnSourceSetfocus(){
	
}*/
/*void CHMSFoodtravelsupport::OnSourceKillfocus(){
	
}*/
long CHMSFoodtravelsupport::OnSourceLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndSource.IsSearchKey() && !m_szSourceKey.IsEmpty()){
		szWhere.Format(_T(" and hfl_typeid ='%s' "), m_szSourceKey);
	};
	m_wndSource.DeleteAllItems(); 
	
	int nCount = 0;
	szSQL.Format(_T(" SELECT hfl_typeid as type, hfl_name as name, hfl_servprice as cost,hfl_feeid as ItemID FROM hms_feelist WHERE substr(hfl_groupid,1,1)='F' and hfl_typeid in('3','4','5') %s "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndSource.AddItems(			
			rs.GetValue(_T("type")), 
			rs.GetValue(_T("name")),
			rs.GetValue(_T("cost")),
			rs.GetValue(_T("ItemID")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CHMSFoodtravelsupport::OnSourceAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSFoodtravelsupport::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnAddHMSFoodtravelsupport();
} 
void CHMSFoodtravelsupport::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnEditHMSFoodtravelsupport();
} 
void CHMSFoodtravelsupport::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnDeleteHMSFoodtravelsupport();
} 
void CHMSFoodtravelsupport::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveHMSFoodtravelsupport();
} 
void CHMSFoodtravelsupport::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancelHMSFoodtravelsupport();
} 
void CHMSFoodtravelsupport::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szStatus, szDate, szSQL, tmpStr;
	CReport rpt;
	CRecord rs(&pMF->m_db);

	if(!pMF->CheckPermission(_T("02.05")))
	{
		ShowMessageBox(_T("Permission Denined."), 0);
		return;
	}

	
	szSQL.Format(_T(" SELECT hfsl_type,hfsl_docno, hfsl_name, sum(hfsl_amount) as hfsl_amount,count(hfsl_amount) as solan FROM hms_foodtravelsupport_line WHERE hfsl_docno=%d and hfsl_type  in('%s') GROUP BY hfsl_type,hfsl_docno, hfsl_name"), m_nDocno,m_wndSource.GetCurrent(0));
	//_fmsg(_T("%s"), szSQL);	
	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
		return;

	double nAdvPayment=0, nRefundAmt = 0;
	int nPage = 0;
	CString szReportName,szSumInWord, szType;	
		
	szReportName = _T("Reports/HMS/TM_BANGTONGHOPTIENANI.RPT");
	
	if(!rpt.Init(szReportName) )
		return;	

	//Page Header
	//Report Detail
	CReportSection* rptDetail = rpt.AddDetail();

	tmpStr.Empty();
	StringUpper(pMF->m_CompanyInfo.sc_pname, tmpStr);
	rptDetail->SetValue(_T("HealthService"), tmpStr);
	StringUpper(pMF->m_CompanyInfo.sc_name, tmpStr);
	rptDetail->SetValue(_T("HOSPITALNAME"), tmpStr);	
	tmpStr.Format(_T("%ld"), m_nDocno);
	rptDetail->SetValue(_T("DocumentNo"), tmpStr);		
	rptDetail->SetValue(_T("PATIENTNAME"), m_szPatientname);	
	rptDetail->SetValue(_T("Age"), m_szAge);	
	rptDetail->SetValue(_T("Sex"), m_szSex);	
	rptDetail->SetValue(_T("Address"), m_szAddress);
	rptDetail->SetValue(_T("CardNo"), m_szInsurance);
	rptDetail->SetValue(_T("Department"), pMF->GetDepartmentName(pMF->m_szDept));	
	rptDetail->SetValue(_T("Admitdate"), CDate::Convert(pMF->m_wndPatientDocument.m_szAdmitDate,yyyymmdd,ddmmyyyy));
	rptDetail->SetValue(_T("Dischargedate"), CDate::Convert(pMF->m_wndPatientDocument.m_szDischargeDate,yyyymmdd,ddmmyyyy));	
	rptDetail->SetValue(_T("Occupation"),pMF->m_wndPatientDocument.m_szOccupation);
	rptDetail->SetValue(_T("WordPlace"),pMF->m_wndPatientDocument.m_szWorkplace);
	rptDetail->SetValue(_T("Ethnic"),pMF->m_wndPatientDocument.m_szEthnic);
	

	rs.GetValue(_T("hfsl_name"), tmpStr);
	rptDetail->SetValue(_T("1"), _T("(") + tmpStr + _T(")"));
	rs.GetValue(_T("hfsl_amount"), tmpStr);
	rptDetail->SetValue(_T("2"), tmpStr);
	rs.GetValue(_T("solan"), tmpStr);
	rptDetail->SetValue(_T("3"), tmpStr);
	MoneyToString(tmpStr, szSumInWord);
	szSumInWord += _T(" \x111\x1ED3ng");
	rptDetail->SetValue(_T("SumInWord"), szSumInWord);

	
	tmpStr=pMF->GetSysDate();
	szDate.Format(rptDetail->GetValue(_T("PrintDate")), tmpStr.Mid(8, 2), tmpStr.Mid(5, 2), tmpStr.Left(4));
	rptDetail->SetValue(_T("PrintDate"), szDate);	
	rpt.PrintPreview();

	
} 
void CHMSFoodtravelsupport::OnListItemDblClick(){
	
} 
void CHMSFoodtravelsupport::OnListItemSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString m_szStatus;
	int nSel= m_wndListItem.GetCurSel();
	m_szStatus=m_wndListItem.GetItemText(nSel, 6);

	if (pMF->m_wndPatientDocument.m_szDocStatus == _T("I"))	
		if (!m_wndListItem.GetItemText(nSel,1).IsEmpty())
		{
			if (m_szStatus ==_T("O") )
			{
				m_wndListItem.SetMenuState(1,true);
				m_wndListItem.SetMenuState(2,false);		
				m_wndListItem.SetMenuState(3,false);
			}
			else
			{
				m_wndListItem.SetMenuState(1,false);
				m_wndListItem.SetMenuState(2,true);
				m_wndListItem.SetMenuState(3,true);
			}
		}
		else
		{
			m_wndListItem.SetMenuState(1,false);
			m_wndListItem.SetMenuState(2,false);		
			m_wndListItem.SetMenuState(3,false);
		}
	else
	{
		if (!m_wndListItem.GetItemText(nSel,1).IsEmpty() &&
			m_wndListItem.GetItemText(nSel,8) ==_T("2"))
		{
			if (m_szStatus ==_T("O") )
			{
				m_wndListItem.SetMenuState(1,true);
				m_wndListItem.SetMenuState(2,false);		
				m_wndListItem.SetMenuState(3,false);
			}
			else
			{
				m_wndListItem.SetMenuState(1,false);
				m_wndListItem.SetMenuState(2,true);
				m_wndListItem.SetMenuState(3,true);
			}
		}
		else
		{
			m_wndListItem.SetMenuState(1,false);
			m_wndListItem.SetMenuState(2,false);		
			m_wndListItem.SetMenuState(3,false);
		}
	}

} 
int CHMSFoodtravelsupport::OnListItemDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSFoodtravelsupport::OnListItemLoadData(){

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString tmpStr,szSQL, szWhere;
	m_wndListItem.BeginLoad(); 
	m_wndListItem.DeleteAllItems(); 
	int i,nIndex=1,nCount = 0;
	double Cost=0.0;
	int nDate;	
	if ( CompareDate(pMF->m_wndPatientDocument.m_szDischargeDate,pMF->m_wndPatientDocument.m_szAdmitDate) >= 0)
		nDate =CompareDate(pMF->m_wndPatientDocument.m_szDischargeDate,pMF->m_wndPatientDocument.m_szAdmitDate);
	else
		nDate =CompareDate(pMF->GetSysDate(),m_szAdmitdate);	

	nDate = nDate +3;
	tmpStr=m_wndSource.GetCurrent(3);	
	//Kiem tra xem co trong hms_foodtravelsupport chua
	szSQL.Format(_T(" SELECT count(*) FROM hms_foodtravelsupport WHERE hfs_docno=%ld "), m_nDocno);
	rs.ExecSQL(szSQL);
	if (rs.GetIntValue() <= 0) return -1;
	
	//Dong tieu de tien di lai	
	
	m_wndListItem.AddItems(_T("Travel"),NULL);
	m_wndListItem.MergeCell(0, 0,0 , 6, DT_LEFT|DT_VCENTER|DT_SINGLELINE, true);	
	m_wndListItem.SetItemTextColor(0, COLOR_WHITE,false);
	m_wndListItem.SetItemBkColor(0, RGB(0,130,242),false);
	if (m_nHomeToHospital <= 100) 
		szWhere.Format(_T(" and hfl_itype='0' "));
	else
		szWhere.Format(_T(" and hfl_itype='1' "));
	szSQL.Format(_T(" SELECT hfl_feeid, hfl_typeid, hfl_name, hfl_servprice FROM hms_feelist  \
						WHERE substr(hfl_groupid,1,1)='F' and hfl_typeid in('1','2')  %s"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while (!rs.IsEOF())
	{
		tmpStr.Format(_T("%d"), nIndex++);		
		m_wndListItem.AddItems(tmpStr,
			CDate::Convert(m_szAdmitdate,yyyymmdd,ddmmyyyy),
			rs.GetValue(_T("hfl_name")),
			rs.GetValue(_T("hfl_servprice")),
			m_szOpen,
			pMF->m_szDept,
			_T("O"),rs.GetValue(_T("hfl_feeid")),
			rs.GetValue(_T("hfl_typeid")),0,NULL);
		if (m_wndListItem.GetItemText(nIndex-1,8)==_T("2")) m_wndListItem.SetItemText(nIndex-1,1,	CDate::Convert(pMF->m_wndPatientDocument.m_szDischargeDate,yyyymmdd,ddmmyyyy));
		rs.MoveNext();
	}

	//Dong tieu de tien an
	m_wndListItem.AddItems(_T("Meals"),NULL);
	m_wndListItem.MergeCell(m_wndListItem.GetItemCount()-1,0,m_wndListItem.GetItemCount()-1 , 6, DT_LEFT|DT_VCENTER|DT_SINGLELINE, true);
	m_wndListItem.SetItemTextColor(m_wndListItem.GetItemCount()-1, COLOR_WHITE,false);
	m_wndListItem.SetItemBkColor(m_wndListItem.GetItemCount()-1, RGB(0,130,242),false);	
	
	nIndex=1;
	
	for (i=0; i<= nDate; i++)
	{	
		szSQL.Format(_T("SELECT trunc_date('%s') + %d  as szDate"), m_szAdmitdate, i);
		rs.ExecSQL(szSQL);
		tmpStr.Format(_T("%d"), nIndex++);
		m_wndListItem.AddItems(tmpStr,
			CDate::Convert(rs.GetValue(_T("szDate")),yyyymmdd,ddmmyyyy),
			m_wndSource.GetCurrent(1),
			m_wndSource.GetCurrent(2),m_szOpen,
			pMF->m_szDept,
			_T("O"),
			m_wndSource.GetCurrent(3),
			m_wndSource.GetCurrent(0),
			0,
			NULL);			
	}

	szSQL.Format(_T(" SELECT hfsl_idx,hfsl_dte, hfsl_facid,hfsl_itemid,hfsl_amount FROM hms_foodtravelsupport_line WHERE hfsl_docno=%d "), m_nDocno);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		for (i=0;i< m_wndListItem.GetItemCount();i++)
		{			
			if (m_wndListItem.GetItemText(i,1)== CDate::Convert(rs.GetValue(_T("hfsl_dte")),yyyymmdd,ddmmyyyy) &&
				(m_wndListItem.GetItemText(i,7)== rs.GetValue(_T("hfsl_itemid"))))				
			{					
				m_wndListItem.SetItemText(i,3,rs.GetValue(_T("hfsl_amount")));				
				m_wndListItem.SetItemText(i,4,m_szAccepted);
				m_wndListItem.SetItemText(i,5,rs.GetValue(_T("hfsl_facid")));				
				m_wndListItem.SetItemText(i,6,_T("S"));				
				m_wndListItem.SetItemText(i,9,rs.GetValue(_T("hfsl_idx")));				
				m_wndListItem.SetItemText(i,7,rs.GetValue(_T("hfsl_itemid")));
				m_wndListItem.SetItemTextColor(i, COLOR_WHITE,false);
				m_wndListItem.SetItemBkColor(i, RGB(0,130,100),false);
			}
			if (m_wndListItem.GetItemText(i,8)==_T("2")) m_wndListItem.SetItemText(i,1,	CDate::Convert(pMF->m_wndPatientDocument.m_szDischargeDate,yyyymmdd,ddmmyyyy));
		}
		rs.MoveNext();
	}

	m_wndListItem.EndLoad(); 
	return nCount;
}
int CHMSFoodtravelsupport::OnAddHMSFoodtravelsupport(){
 	
	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
	
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSFoodtravelsupport::OnEditHMSFoodtravelsupport(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSFoodtravelsupport::OnDeleteHMSFoodtravelsupport(){
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
 		OnCancelHMSFoodtravelsupport(); 
 	}
	return 0;
}
int CHMSFoodtravelsupport::OnSaveHMSFoodtravelsupport(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		szSQL = m_hms_foodtravelsupportTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE hfs_docno=%d"), m_nDocno); 
 		szSQL = m_hms_foodtravelsupportTbl.GetUpdateSQL(_T("hfs_docno")); 
 		szSQL += szWhere; 
 	} 
	//_fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{  		
		OnListItemLoadData();
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret;  
}
int CHMSFoodtravelsupport::OnCancelHMSFoodtravelsupport(){
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
int CHMSFoodtravelsupport::OnHMSFoodtravelsupportListLoadData(){
	return 0;
}
int CHMSFoodtravelsupport::OnPatientListIssue(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnIssueSelect();
	 return 0;
} 
int CHMSFoodtravelsupport::OnPatientListCancel(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancelPatientSelect();
	 return 0;
} 
void CHMSFoodtravelsupport::OnPrintDailySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	long nOrderID;
	CString szStatus, szDate, szSQL, tmpStr;
	CReport rpt;
	CRecord rs(&pMF->m_db);

	if(!pMF->CheckPermission(_T("02.05")))
	{
		ShowMessageBox(_T("Permission Denined."), 0);
		return;
	}

	
	int nSel = m_wndListItem.GetCurSel();
	if(nSel < 0) return;	
	nOrderID = ToLong(m_wndListItem.GetItemText(nSel, 9));
	szSQL.Format(_T(" SELECT hfsl_dte,hfsl_type,hfsl_docno, hfsl_name, hfsl_amount FROM hms_foodtravelsupport_line WHERE hfsl_docno=%d and hfsl_idx=%ld "), m_nDocno, nOrderID);	
	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
		return;

	double nAdvPayment=0, nRefundAmt = 0;
	int nPage = 0;
	CString szReportName,szSumInWord, szType;	
	rs.GetValue(_T("hfsl_type"),szType);
	if (szType == _T("1") || szType ==_T("2"))
	{
		szReportName = _T("Reports/HMS/TM_CAPTIENDILAI.RPT");
	}
	else
	{	
		szReportName = _T("Reports/HMS/TM_CAPTIENAN.RPT");
	}
	if(!rpt.Init(szReportName) )
		return;	

	//Page Header
	//Report Detail
	CReportSection* rptDetail = rpt.AddDetail();

	tmpStr.Empty();
	StringUpper(pMF->m_CompanyInfo.sc_pname, tmpStr);
	rptDetail->SetValue(_T("HealthService"), tmpStr);
	StringUpper(pMF->m_CompanyInfo.sc_name, tmpStr);
	rptDetail->SetValue(_T("HOSPITALNAME"), tmpStr);	
	tmpStr.Format(_T("%ld"), m_nDocno);
	rptDetail->SetValue(_T("DocumentNo"), tmpStr);		
	rptDetail->SetValue(_T("PATIENTNAME"), m_szPatientname);	
	rptDetail->SetValue(_T("Age"), m_szAge);	
	rptDetail->SetValue(_T("Sex"), m_szSex);	
	rptDetail->SetValue(_T("Address"), m_szAddress);		
	rptDetail->SetValue(_T("CardNo"), m_szInsurance);		
	rptDetail->SetValue(_T("Department"), pMF->GetDepartmentName(pMF->m_szDept));	
	rs.GetValue(_T("hfsl_dte"),tmpStr);
	rptDetail->SetValue(_T("Admitdate"), CDate::Convert(tmpStr,yyyymmdd,ddmmyyyy));
	rptDetail->SetValue(_T("Occupation"),pMF->m_wndPatientDocument.m_szOccupation);
	rptDetail->SetValue(_T("WordPlace"),pMF->m_wndPatientDocument.m_szWorkplace);
	rptDetail->SetValue(_T("Diagnostic"), pMF->m_wndPatientDocument.m_szMainDiseaseDiagnostic);
	rptDetail->SetValue(_T("InDept"), CDate::Convert(pMF->m_wndPatientDocument.m_szAdmitDate,yyyymmdd,ddmmyyyy));
	rptDetail->SetValue(_T("OutDept"), CDate::Convert(pMF->m_wndPatientDocument.m_szDischargeDate,yyyymmdd,ddmmyyyy));
	rptDetail->SetValue(_T("Ethnic"),pMF->m_wndPatientDocument.m_szEthnic);
	
	rs.GetValue(_T("hfsl_name"), tmpStr);	
	rptDetail->SetValue(_T("1"), _T("(") + tmpStr  + _T(")"));
	rs.GetValue(_T("hfsl_amount"), tmpStr);
	rptDetail->SetValue(_T("2"), tmpStr);
	MoneyToString(tmpStr, szSumInWord);
	szSumInWord += _T(" \x111\x1ED3ng");
	rptDetail->SetValue(_T("SumInWord"), szSumInWord);

	
	tmpStr=pMF->GetSysDate();
	szDate.Format(rptDetail->GetValue(_T("PrintDate")), tmpStr.Mid(8, 2), tmpStr.Mid(5, 2), tmpStr.Left(4));	
	rptDetail->SetValue(_T("PrintDate"), szDate);
	
	rpt.PrintPreview();

} 
void CHMSFoodtravelsupport::OnIssueSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL, szStatus, szPayment, tmpStr, szDate, szDeptID, szType;
	long nOrderID;
	double Cost;
	CRecord rs(&pMF->m_db);

	if(!pMF->CheckPermission(_T("02.03")))
	{
		ShowMessageBox(_T("Permission Denined."), 0);
		return;
	}

	int nSel = m_wndListItem.GetCurSel();
	if(nSel < 0) return;
	szStatus = m_wndListItem.GetItemText(nSel, 6);
	szDate = CDate::Convert(m_wndListItem.GetItemText(nSel, 1),ddmmyyyy,yyyymmdd);
	szDate.AppendFormat(_T(" %s"), pMF->GetSysTime());
	szDeptID= m_wndListItem.GetItemText(nSel, 5);
	Cost = ToFloat(m_wndListItem.GetItemText(nSel,3));
	szType=m_wndListItem.GetItemText(nSel,8);
	nOrderID=ToLong(m_wndListItem.GetItemText(nSel,9));
	
	
	if(szStatus == _T("S"))
		return;

	szSQL.Format(_T("SELECT count(*) FROM hms_foodtravelsupport_line WHERE trunc_date(hfsl_dte)= trunc_date('%s') and hfsl_idx=%ld "), szDate,nOrderID);
	rs.ExecSQL(szSQL);	
	if(rs.GetIntValue() > 0)
		return;
	
	szSQL.Format(_T("INSERT INTO hms_foodtravelsupport_line (hfsl_docno,hfsl_dte, hfsl_type, hfsl_itemid, hfsl_name,hfsl_amount,hfsl_facid,hfsl_status, hfsl_userid, hfsl_refidx) ") \
				_T(" VALUES (%d,'%s', '%s','%s','%s',%.0f,'%s','%s','%s', %d) ")
				,m_nDocno, szDate,szType,m_wndListItem.GetItemText(nSel,7),m_wndListItem.GetItemText(nSel,2),Cost, szDeptID,_T("S"), pMF->GetCurrentUser(), pMF->m_nRefIndex);
	
		
	int nMsg = ShowMessage(19);
	if(nMsg == IDNO)
		return;
	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
	{	
		szSQL.Format(_T( " SELECT Max(hfsl_idx) FROM hms_foodtravelsupport_line "));
		rs.ExecSQL(szSQL);
		if (rs.GetIntValue()> 0)
		{
			tmpStr.Format(_T("%ld"), rs.GetIntValue());
			m_wndListItem.SetItemText(nSel,9, tmpStr);
		}
		m_wndListItem.SetItemText(nSel,6,_T("S"));
		m_wndListItem.SetItemText(nSel,4,m_szAccepted);
		m_wndListItem.SetItemTextColor(nSel, COLOR_WHITE,false);
		m_wndListItem.SetItemBkColor(nSel, RGB(0,130,102),false);
	}
	
} 
 
int CHMSFoodtravelsupport::OnPatientRefresh(){
	OnListItemLoadData();
	return 0;
}
void CHMSFoodtravelsupport::OnCancelPatientSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL, szStatus, szPayment, tmpStr, szDate, szDeptID;
	long nOrderID;
	CRecord rs(&pMF->m_db);

	if(!pMF->CheckPermission(_T("02.04")))
	{
		ShowMessageBox(_T("Permission Denined."), 0);
		return;
	}

	int nSel = m_wndListItem.GetCurSel();
	if(nSel < 0) return;
	szStatus = m_wndListItem.GetItemText(nSel, 6);
	szDate = CDate::Convert(m_wndListItem.GetItemText(nSel, 1),ddmmyyyy,yyyymmdd);
	szDeptID= m_wndListItem.GetItemText(nSel, 5);
	nOrderID=ToLong(m_wndListItem.GetItemText(nSel,9));
	if(szStatus != _T("S"))
		return;

	szSQL.Format(_T("SELECT count(*) FROM hms_foodtravelsupport_line WHERE trunc_date(hfsl_dte)= trunc_date('%s') and hfsl_idx=%d and hfsl_docno=%d "), szDate, nOrderID, m_nDocno);
	rs.ExecSQL(szSQL);
	
	if(rs.GetIntValue() < 0)
		return;
	
	szSQL.Format(_T("DELETE FROM hms_foodtravelsupport_line WHERE hfsl_idx=%d AND trunc_date(hfsl_dte)= trunc_date('%s') AND hfsl_docno=%d"),nOrderID,szDate,m_nDocno);	
	//_fmsg(_T("%s"), szSQL);
		
	int nMsg = ShowMessage(20);
	if(nMsg == IDNO)
		return;
	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
	{	
		m_wndListItem.SetItemText(nSel,4,m_szOpen);
		m_wndListItem.SetItemText(nSel,6,_T("O"));		
		m_wndListItem.SetItemText(nSel,9,0);
		m_wndListItem.SetItemTextColor(nSel, COLOR_BLACK,false);
		m_wndListItem.SetItemBkColor(nSel, COLOR_WHITE,false);
		UpdateData(false);
	}
}