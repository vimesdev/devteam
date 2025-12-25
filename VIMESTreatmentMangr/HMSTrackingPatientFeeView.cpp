#include "HMSTrackingPatientFeeView.h"
#include "MainFrm.h"

static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSTrackingPatientFeeView* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CHMSTrackingPatientFeeView *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CHMSTrackingPatientFeeView *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CHMSTrackingPatientFeeView *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CHMSTrackingPatientFeeView *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CHMSTrackingPatientFeeView *)pWnd)->OnDepartmentAddNew();
}*/
/*static void _OnFromMoneyChangeFnc(CWnd *pWnd){
	((CHMSTrackingPatientFeeView *)pWnd)->OnFromMoneyChange();
} */
/*static void _OnFromMoneySetfocusFnc(CWnd *pWnd){
	((CHMSTrackingPatientFeeView *)pWnd)->OnFromMoneySetfocus();} */ 
/*static void _OnFromMoneyKillfocusFnc(CWnd *pWnd){
	((CHMSTrackingPatientFeeView *)pWnd)->OnFromMoneyKillfocus();
} */
static int _OnFromMoneyCheckValueFnc(CWnd *pWnd){
	return ((CHMSTrackingPatientFeeView *)pWnd)->OnFromMoneyCheckValue();
} 
/*static void _OnToMoneyChangeFnc(CWnd *pWnd){
	((CHMSTrackingPatientFeeView *)pWnd)->OnToMoneyChange();
} */
/*static void _OnToMoneySetfocusFnc(CWnd *pWnd){
	((CHMSTrackingPatientFeeView *)pWnd)->OnToMoneySetfocus();} */ 
/*static void _OnToMoneyKillfocusFnc(CWnd *pWnd){
	((CHMSTrackingPatientFeeView *)pWnd)->OnToMoneyKillfocus();
} */
static int _OnToMoneyCheckValueFnc(CWnd *pWnd){
	return ((CHMSTrackingPatientFeeView *)pWnd)->OnToMoneyCheckValue();
} 
static void _OnObjectSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSTrackingPatientFeeView* )pWnd)->OnObjectSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnObjectSelendokFnc(CWnd *pWnd){
	((CHMSTrackingPatientFeeView *)pWnd)->OnObjectSelendok();
}
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CHMSTrackingPatientFeeView *)pWnd)->OnObjectKillfocus();
}*/
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CHMSTrackingPatientFeeView *)pWnd)->OnObjectKillfocus();
}*/
static long _OnObjectLoadDataFnc(CWnd *pWnd){
	return ((CHMSTrackingPatientFeeView *)pWnd)->OnObjectLoadData();
}
/*static void _OnObjectAddNewFnc(CWnd *pWnd){
	((CHMSTrackingPatientFeeView *)pWnd)->OnObjectAddNew();
}*/
/*static void _OnDocumentNoChangeFnc(CWnd *pWnd){
	((CHMSTrackingPatientFeeView *)pWnd)->OnDocumentNoChange();
} */
/*static void _OnDocumentNoSetfocusFnc(CWnd *pWnd){
	((CHMSTrackingPatientFeeView *)pWnd)->OnDocumentNoSetfocus();} */ 
/*static void _OnDocumentNoKillfocusFnc(CWnd *pWnd){
	((CHMSTrackingPatientFeeView *)pWnd)->OnDocumentNoKillfocus();
} */
static int _OnDocumentNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSTrackingPatientFeeView *)pWnd)->OnDocumentNoCheckValue();
} 
/*static void _OnNumberInwardChangeFnc(CWnd *pWnd){
	((CHMSTrackingPatientFeeView *)pWnd)->OnNumberInwardChange();
} */
/*static void _OnNumberInwardSetfocusFnc(CWnd *pWnd){
	((CHMSTrackingPatientFeeView *)pWnd)->OnNumberInwardSetfocus();} */ 
/*static void _OnNumberInwardKillfocusFnc(CWnd *pWnd){
	((CHMSTrackingPatientFeeView *)pWnd)->OnNumberInwardKillfocus();
} */
static int _OnNumberInwardCheckValueFnc(CWnd *pWnd){
	return ((CHMSTrackingPatientFeeView *)pWnd)->OnNumberInwardCheckValue();
} 
/*static void _OnPatientNameChangeFnc(CWnd *pWnd){
	((CHMSTrackingPatientFeeView *)pWnd)->OnPatientNameChange();
} */
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CHMSTrackingPatientFeeView *)pWnd)->OnPatientNameSetfocus();} */ 
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((CHMSTrackingPatientFeeView *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSTrackingPatientFeeView *)pWnd)->OnPatientNameCheckValue();
} 
static void _OnSearchSelectFnc(CWnd *pWnd){
	CHMSTrackingPatientFeeView *pVw = (CHMSTrackingPatientFeeView *)pWnd;
	pVw->OnSearchSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSTrackingPatientFeeView*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSTrackingPatientFeeView*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSTrackingPatientFeeView*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSTrackingPatientFeeView*)pWnd)->OnListDeleteItem();
} 
static int _OnAddHMSTrackingPatientFeeDialogFnc(CWnd *pWnd){
	 return ((CHMSTrackingPatientFeeView*)pWnd)->OnAddHMSTrackingPatientFeeDialog();
} 
static int _OnEditHMSTrackingPatientFeeDialogFnc(CWnd *pWnd){
	 return ((CHMSTrackingPatientFeeView*)pWnd)->OnEditHMSTrackingPatientFeeDialog();
} 
static int _OnDeleteHMSTrackingPatientFeeDialogFnc(CWnd *pWnd){
	 return ((CHMSTrackingPatientFeeView*)pWnd)->OnDeleteHMSTrackingPatientFeeDialog();
} 
static int _OnSaveHMSTrackingPatientFeeDialogFnc(CWnd *pWnd){
	 return ((CHMSTrackingPatientFeeView*)pWnd)->OnSaveHMSTrackingPatientFeeDialog();
} 
static int _OnCancelHMSTrackingPatientFeeDialogFnc(CWnd *pWnd){
	 return ((CHMSTrackingPatientFeeView*)pWnd)->OnCancelHMSTrackingPatientFeeDialog();
} 
static int _OnExcelListFnc(CWnd *pWnd){
	return ((CHMSTrackingPatientFeeView*)pWnd)->OnExcelList();
}
static long _OnHanmucLoadDataFnc(CWnd *pWnd){
	return ((CHMSTrackingPatientFeeView *)pWnd)->OnHanmucLoadData();
}

static void _OnHanmucSelendokFnc(CWnd *pWnd){
	((CHMSTrackingPatientFeeView *)pWnd)->OnHanmucSelendok();
}

CHMSTrackingPatientFeeView::CHMSTrackingPatientFeeView()
	
{
	m_nDlgWidth = 1010;
	m_nDlgHeight = 610;
	SetDefaultValues();

}

CHMSTrackingPatientFeeView::~CHMSTrackingPatientFeeView()
{
}

void CHMSTrackingPatientFeeView::OnCreateComponents()
{
	
	/*m_wndPatientInformation.Create(this, _T("Patient List"), 5, 95, 1000, 600);
	m_wndSearchInformation.Create(this, _T("Search Information"), 5, 5, 1000, 90);
	m_wndDepartmentLabel.Create(this, _T("Department"), 410, 30, 520, 55);
	m_wndDepartment.Create(this,525, 30, 670, 55); 
	m_wndUnpaidLabel.Create(this, _T("Unpaid"), 675, 30, 770, 55);
	m_wndFromMoney.Create(this,775, 30, 875, 55); 
	m_wndSign.Create(this, _T("-"), 880, 30, 885, 55);
	m_wndToMoney.Create(this,890, 30, 990, 55); 
	m_wndObjectLabel.Create(this, _T("Object"), 10, 30, 120, 55);
	m_wndObject.Create(this,125, 30, 405, 55); 
	m_wndDocumentNoLabel.Create(this, _T("Doc No"), 410, 60, 520, 85);
	m_wndDocumentNo.Create(this,525, 60, 670, 85); 
	m_wndNumberInwardLabel.Create(this, _T("Number Inward"), 675, 60, 770, 85);
	m_wndNumberInward.Create(this,775, 60, 960, 85); 
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 10, 60, 120, 85);
	m_wndPatientName.Create(this,125, 60, 405, 85); 
	m_wndSearch.Create(this, _T("@"), 965, 60, 990, 85);
	m_wndList.Create(this,10, 120, 995, 595);
	m_wndDepartment.SetReadOnly(true);*/

	m_wndSearchInformation.Create(this, _T("Search Information"), 5, 5, 1000, 90);
	m_wndObjectLabel.Create(this, _T("Object"), 10, 30, 120, 55);
	m_wndObject.Create(this,125, 30, 340, 55); 
	m_wndDepartmentLabel.Create(this, _T("Department"), 345, 30, 455, 55);
	m_wndDepartment.Create(this,460, 30, 605, 55); 
	m_wndHanmucLabel.Create(this, _T("Hạn mức"), 609, 30, 704, 55);
	m_wndPatientInformation.Create(this, _T("Patient List"), 5, 95, 1000, 600);
	m_wndHanmuc.Create(this,709, 30, 894, 55); 
	m_wndSearch.Create(this, _T("@"), 899, 30, 995, 84);
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 10, 60, 120, 85);
	m_wndPatientName.Create(this,125, 60, 340, 85); 
	m_wndDocumentNoLabel.Create(this, _T("Doc No"), 345, 60, 455, 85);
	m_wndDocumentNo.Create(this,460, 60, 605, 85); 
	m_wndNumberInwardLabel.Create(this, _T("Number Inward"), 609, 60, 704, 85);
	m_wndNumberInward.Create(this,709, 60, 894, 85); 
	m_wndList.Create(this,10, 120, 995, 595);
	m_wndHanmucLabel.SetTextColor(RGB(255,0,0));
}
void CHMSTrackingPatientFeeView::OnInitializeComponents()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndDepartment.SetCheckValue(true);
	m_wndHanmuc.SetCheckValue(true);
	m_wndDepartment.LimitText(81);

	//m_wndFromMoney.SetLimitText(16);
	//m_wndFromMoney.SetCheckValue(true);

	//m_wndToMoney.SetLimitText(16);
	//m_wndToMoney.SetCheckValue(true);

	//m_wndObject.SetCheckValue(true);
	m_wndObject.LimitText(35);

	m_wndDocumentNo.SetLimitText(16);
	m_wndDocumentNo.SetCheckValue(true);

	m_wndNumberInward.SetLimitText(35);
	m_wndNumberInward.SetCheckValue(true);

	m_wndPatientName.SetLimitText(75);
	m_wndPatientName.SetCheckValue(true);

	m_wndDocumentNo.SetNotEmpty(false);
	m_wndNumberInward.SetNotEmpty(false);
	m_wndPatientName.SetNotEmpty(false);

	m_wndFromMoney.SetCurrencyFormat(TRUE);
	m_wndToMoney.SetCurrencyFormat(TRUE);

	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT | CFMT_RIGHT, 75);
	m_wndDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);


	m_wndObject.InsertColumn(0, _T("ID"), CFMT_TEXT | CFMT_RIGHT, 50);
	m_wndObject.InsertColumn(1, _T("Name"), CFMT_TEXT, 180);
	m_wndObject.SetCheckBox(TRUE);

	m_wndSearch.ModifyStyle(WS_TABSTOP, 0);

	m_wndList.InsertColumn(0, _T("Index"), CFMT_NUMBER, 40);
	m_wndList.InsertColumn(1, _T("Document No"), CFMT_TEXT, 85);
	m_wndList.InsertColumn(2, _T("Number Inward"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(3, _T("Patient Name"), CFMT_TEXT, 140);
	m_wndList.InsertColumn(4, _T("Age"), CFMT_TEXT, 40);
	m_wndList.InsertColumn(5, _T("Sex"), CFMT_TEXT, 40);
	m_wndList.InsertColumn(6, _T("Object"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(7, _T("Phòng"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(8, _T("Total Cost"), CFMT_MONEY, 110);
	m_wndList.InsertColumn(9, _T("Total Insurance Paid"), CFMT_MONEY, 110);
	m_wndList.InsertColumn(10, _T("Total Deposit"), CFMT_MONEY, 110);
	m_wndList.InsertColumn(11, _T("Bệnh nhân phải trả"), CFMT_MONEY, 110);
	m_wndList.InsertColumn(12, _T("Bệnh nhân còn thiếu"), CFMT_MONEY, 110);
	m_wndList.InsertColumn(13, _T("Bệnh nhân còn thừa"), CFMT_MONEY, 110);

	m_wndHanmuc.InsertColumn(0, _T("ID"), CFMT_TEXT, 60);
	m_wndHanmuc.InsertColumn(1, _T("Hạn mức"), CFMT_MONEY, 200);

	m_wndList.GetHeaderControl()->SetItemHeight(2);
}
void CHMSTrackingPatientFeeView::OnSetWindowEvents()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndDepartment.SetEvent(WE_SELENDOK, _OnDepartmentSelendokFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	//m_wndDepartment.SetEvent(WE_ADDNEW, _OnDepartmentAddNewFnc);
	//m_wndFromMoney.SetEvent(WE_CHANGE, _OnFromMoneyChangeFnc);
	//m_wndFromMoney.SetEvent(WE_SETFOCUS, _OnFromMoneySetfocusFnc);
	//m_wndFromMoney.SetEvent(WE_KILLFOCUS, _OnFromMoneyKillfocusFnc);
	m_wndFromMoney.SetEvent(WE_CHECKVALUE, _OnFromMoneyCheckValueFnc);
	//m_wndToMoney.SetEvent(WE_CHANGE, _OnToMoneyChangeFnc);
	//m_wndToMoney.SetEvent(WE_SETFOCUS, _OnToMoneySetfocusFnc);
	//m_wndToMoney.SetEvent(WE_KILLFOCUS, _OnToMoneyKillfocusFnc);
	m_wndToMoney.SetEvent(WE_CHECKVALUE, _OnToMoneyCheckValueFnc);
	m_wndObject.SetEvent(WE_SELENDOK, _OnObjectSelendokFnc);
	//m_wndObject.SetEvent(WE_SETFOCUS, _OnObjectSetfocusFnc);
	//m_wndObject.SetEvent(WE_KILLFOCUS, _OnObjectKillfocusFnc);
	m_wndObject.SetEvent(WE_SELCHANGE, _OnObjectSelectChangeFnc);
	m_wndObject.SetEvent(WE_LOADDATA, _OnObjectLoadDataFnc);
	//m_wndObject.SetEvent(WE_ADDNEW, _OnObjectAddNewFnc);
	//m_wndDocumentNo.SetEvent(WE_CHANGE, _OnDocumentNoChangeFnc);
	//m_wndDocumentNo.SetEvent(WE_SETFOCUS, _OnDocumentNoSetfocusFnc);
	//m_wndDocumentNo.SetEvent(WE_KILLFOCUS, _OnDocumentNoKillfocusFnc);
	m_wndDocumentNo.SetEvent(WE_CHECKVALUE, _OnDocumentNoCheckValueFnc);
	//m_wndNumberInward.SetEvent(WE_CHANGE, _OnNumberInwardChangeFnc);
	//m_wndNumberInward.SetEvent(WE_SETFOCUS, _OnNumberInwardSetfocusFnc);
	//m_wndNumberInward.SetEvent(WE_KILLFOCUS, _OnNumberInwardKillfocusFnc);
	m_wndNumberInward.SetEvent(WE_CHECKVALUE, _OnNumberInwardCheckValueFnc);
	//m_wndPatientName.SetEvent(WE_CHANGE, _OnPatientNameChangeFnc);
	//m_wndPatientName.SetEvent(WE_SETFOCUS, _OnPatientNameSetfocusFnc);
	//m_wndPatientName.SetEvent(WE_KILLFOCUS, _OnPatientNameKillfocusFnc);
	m_wndPatientName.SetEvent(WE_CHECKVALUE, _OnPatientNameCheckValueFnc);
	m_wndHanmuc.SetEvent(WE_SELENDOK, _OnHanmucSelendokFnc);
	m_wndSearch.SetEvent(WE_CLICK, _OnSearchSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndHanmuc.SetEvent(WE_LOADDATA, _OnHanmucLoadDataFnc);
	m_wndList.AddEvent(1, _T("Xuất excel"), _OnExcelListFnc);
	//SetMode(VM_NONE);
	m_szDepartmentKey = pMF->m_UserInfo.su_hms_xdept;

	SetWindowFont(&m_wndDocumentNo, GetFaceName(), GetFaceSize() + 2, TRUE);
	m_wndDocumentNo.SetTextColor(RGB(255, 0, 0));

	SetWindowFont(&m_wndNumberInward, GetFaceName(), GetFaceSize() + 2, TRUE);
	m_wndNumberInward.SetTextColor(RGB(0, 0, 255));
	OnHanmucLoadData();

	if (m_szDepartmentKey == _T("PTC"))
		m_wndDepartment.SetCheckBox(TRUE);

	SetMode(VM_EDIT);

//	OnListLoadData();
}
void CHMSTrackingPatientFeeView::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	//DDX_Text(pDX, m_wndFromMoney.GetDlgCtrlID(), m_nFromMoney);
	//DDX_Text(pDX, m_wndToMoney.GetDlgCtrlID(), m_nToMoney);
	DDX_TextEx(pDX, m_wndObject.GetDlgCtrlID(), m_szObjectKey);
	DDX_Text(pDX, m_wndDocumentNo.GetDlgCtrlID(), m_nDocumentNo);
	DDX_Text(pDX, m_wndNumberInward.GetDlgCtrlID(), m_szNumberInward);
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);
	DDX_TextEx(pDX, m_wndHanmuc.GetDlgCtrlID(), m_szHanmucKey);

}
void CHMSTrackingPatientFeeView::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSTrackingPatientFeeView::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSTrackingPatientFeeView::SetDefaultValues(){

	m_szDepartmentKey.Empty();
	m_nFromMoney=0;
	m_nToMoney=0;
	m_szObjectKey.Empty();
	m_nDocumentNo=0;
	m_szNumberInward.Empty();
	m_szPatientName.Empty();

}
int CHMSTrackingPatientFeeView::SetMode(int nMode)
{
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
		m_wndDepartment.EnableWindow(false);
		m_wndHanmuc.SetFocus();
 		UpdateData(FALSE);
 		return nOldMode;
}
void CHMSTrackingPatientFeeView::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSTrackingPatientFeeView::OnDepartmentSelendok(){
	 
}
/*void CHMSTrackingPatientFeeView::OnDepartmentSetfocus(){
	
}*/
/*void CHMSTrackingPatientFeeView::OnDepartmentKillfocus(){
	
}*/
long CHMSTrackingPatientFeeView::OnDepartmentLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();

	if (m_wndDepartment.IsSearchKey() && !m_szDepartmentKey.IsEmpty())
	{
		//szWhere.Format(_T(" and id='%s' "), m_szDepartmentKey);
    }

	if (pMF->m_UserInfo.su_hms_xdept == _T("PTC"))
		szWhere.Empty();
	else
		szWhere.Format(_T(" and sd_id='%s' "), pMF->m_UserInfo.su_hms_xdept);

	m_wndDepartment.DeleteAllItems();
	int nCount = 0;

	szSQL.Format(_T("SELECT sd_id as id, ") \
		         _T("sd_name as name ") \
				 _T("FROM sys_dept ") \
				 _T("WHERE 1=1 AND sd_type='DT' %s ORDER BY id "), szWhere);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF())
	{ 
		m_wndDepartment.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}

void CHMSTrackingPatientFeeView::OnHanmucSelendok()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	m_nhanmuc = str2long(m_wndHanmuc.GetCurrent(1));
	//_msg(_T("%ld"), m_nhanmuc);
	 
}

long CHMSTrackingPatientFeeView::OnHanmucLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndHanmuc.IsSearchKey() && !m_szHanmucKey.IsEmpty())
	{
		szWhere.Format(_T(" AND ss_code='%s' "), m_szHanmucKey);
	};
	szSQL.Format(_T("SELECT ss_code as codeid, ss_desc as deposit FROM sys_sel WHERE ss_id='hms_deposit_check' %s ORDER BY ss_code "), szWhere);
	m_wndHanmuc.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	//_msg(_T("%s"),szSQL);
	while(!rs.IsEOF())
	{ 
		m_wndHanmuc.AddItems
	(
			rs.GetValue(_T("codeid")), 
			rs.GetValue(_T("deposit")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSTrackingPatientFeeView::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSTrackingPatientFeeView::OnFromMoneyChange(){
	
} */
/*void CHMSTrackingPatientFeeView::OnFromMoneySetfocus(){
	
} */
/*void CHMSTrackingPatientFeeView::OnFromMoneyKillfocus(){
	
} */
int CHMSTrackingPatientFeeView::OnFromMoneyCheckValue()
{
	return 0;
} 
/*void CHMSTrackingPatientFeeView::OnToMoneyChange(){
	
} */
/*void CHMSTrackingPatientFeeView::OnToMoneySetfocus(){
	
} */
/*void CHMSTrackingPatientFeeView::OnToMoneyKillfocus(){
	
} */
int CHMSTrackingPatientFeeView::OnToMoneyCheckValue()
{
	return 0;
} 
void CHMSTrackingPatientFeeView::OnObjectSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSTrackingPatientFeeView::OnObjectSelendok(){
	 
}
/*void CHMSTrackingPatientFeeView::OnObjectSetfocus(){
	
}*/
/*void CHMSTrackingPatientFeeView::OnObjectKillfocus(){
	
}*/
long CHMSTrackingPatientFeeView::OnObjectLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();

	if (m_wndObject.IsSearchKey() && !m_szObjectKey.IsEmpty())
	{
		szWhere.Format(_T(" and ho_id='%s' "), m_szObjectKey);
    }

	m_wndObject.DeleteAllItems(); 
	int nCount = 0;

	szSQL.Format(_T("SELECT ho_id as id, ") \
		         _T("ho_desc as name ") \
				 _T("FROM hms_object ") \
				 _T("WHERE 1=1 %s ORDER BY cast(ho_id as integer)"), szWhere);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndObject.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSTrackingPatientFeeView::OnObjectAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSTrackingPatientFeeView::OnDocumentNoChange(){
	
} */
/*void CHMSTrackingPatientFeeView::OnDocumentNoSetfocus(){
	
} */
/*void CHMSTrackingPatientFeeView::OnDocumentNoKillfocus(){
	
} */
int CHMSTrackingPatientFeeView::OnDocumentNoCheckValue()
{
	if (m_wndDocumentNo.GetWindowTextLength() == 0)
	{
		m_wndDocumentNo.SetWindowText(_T("0"));
	}
	if (m_wndFromMoney.GetWindowTextLength() == 0)
	{
		m_wndFromMoney.SetWindowText(_T("0"));
	}
	if (m_wndToMoney.GetWindowTextLength() == 0)
	{
		m_wndToMoney.SetWindowText(_T("0"));
	}
	OnListLoadData();
	return 1;
} 
/*void CHMSTrackingPatientFeeView::OnNumberInwardChange(){
	
} */
/*void CHMSTrackingPatientFeeView::OnNumberInwardSetfocus(){
	
} */
/*void CHMSTrackingPatientFeeView::OnNumberInwardKillfocus(){
	
} */
int CHMSTrackingPatientFeeView::OnNumberInwardCheckValue()
{
	if (m_wndDocumentNo.GetWindowTextLength() == 0)
	{
		m_wndDocumentNo.SetWindowText(_T("0"));
	}
	if (m_wndFromMoney.GetWindowTextLength() == 0)
	{
		m_wndFromMoney.SetWindowText(_T("0"));
	}
	if (m_wndToMoney.GetWindowTextLength() == 0)
	{
		m_wndToMoney.SetWindowText(_T("0"));
	}
	OnListLoadData();
	return 1;
} 
/*void CHMSTrackingPatientFeeView::OnPatientNameChange(){
	
} */
/*void CHMSTrackingPatientFeeView::OnPatientNameSetfocus(){
	
} */
/*void CHMSTrackingPatientFeeView::OnPatientNameKillfocus(){
	
} */
int CHMSTrackingPatientFeeView::OnPatientNameCheckValue()
{
	if (m_wndDocumentNo.GetWindowTextLength() == 0)
	{
		m_wndDocumentNo.SetWindowText(_T("0"));
	}
	if (m_wndFromMoney.GetWindowTextLength() == 0)
	{
		m_wndFromMoney.SetWindowText(_T("0"));
	}
	if (m_wndToMoney.GetWindowTextLength() == 0)
	{
		m_wndToMoney.SetWindowText(_T("0"));
	}
	OnListLoadData();
	return 1;
} 
void CHMSTrackingPatientFeeView::OnSearchSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	/*if (m_szHanmucKey.IsEmpty())
	{
		ShowMessageBox(_T("Hãy chọn số tiền hạn mức!"));
		return;
	}*/

	//if(!IsValidateData()) 
 	//	return ; 
	
	OnListLoadData();
} 
void CHMSTrackingPatientFeeView::OnListDblClick()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);	
	/*int nSel = m_wndList.GetCurSel();
	if(nSel < 0)
		return;
	pMF->m_nPatientNo = ToLong(m_wndList.GetItemText(nSel, 12));
	pMF->m_nDocumentNo = ToLong(m_wndList.GetItemText(nSel, 1));
	pMF->m_nRefIndex = ToInt(m_wndList.GetItemText(nSel, 13));
	m_szDischargeDate = m_wndList.GetItemText(nSel, 8);
	pMF->m_wndPatientDocument.LoadData(pMF->m_nPatientNo, pMF->m_nDocumentNo, pMF->m_nRefIndex);
	pMF->SetActivePane(1);*/
} 
void CHMSTrackingPatientFeeView::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSTrackingPatientFeeView::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSTrackingPatientFeeView::OnListLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CRecord rsx(&pMF->m_db);
	CString szSQL;
	CString szWhere, szWhere1, tmpStr;
	CString szObjects, szDepts;
	long nDocumentNo;
	double nCost, nInsPaid, nDiscount, nPatDebt;
	UpdateData(TRUE);

	if (m_szHanmucKey.IsEmpty())
	{
		ShowMessageBox(_T("Hãy chọn số tiền hạn mức!"));
		return 0;
	}

	pMF->BeginWaitCursor();

	int ret = ShowMessageBox(_T(" Bạn có muốn tính lại chi phí của bệnh nhân không?, Nếu chọn YES, sẽ mất thời gian để tạo lập lại phí toàn bộ bệnh nhân đang điều trị tại khoa? OK? "),MB_YESNO);
		if(ret == IDYES)
	{
		szSQL.Format(_T("SELECT htr_docno FROM hms_treatment_record WHERE htr_deptid='%s' and htr_status='I' "), 
			pMF->m_szDept);
		rs.ExecSQL(szSQL);
		while(!rs.IsEOF())
		{
			rs.GetValue(_T("htr_docno"), nDocumentNo);
			szSQL.Format(_T("HMS_INPATIENT_FEE_CREATE(%ld, 'ETPODXMBFJ', '%s', 'Y')"),
				nDocumentNo, pMF->GetModuleID());
			pMF->ExecDML(szSQL);
			rs.MoveNext();
		}
	} else
	ShowMessageBox(_T("Xem chi phí bệnh nhân, không cần tính lại!"));

	/*if (m_nToMoney > 0)
	{
		szWhere1.AppendFormat(_T(" AND (patdebt - deposit) BETWEEN %ld AND %ld "),
			                 m_nFromMoney, m_nToMoney);
	}*/

	/*if (!m_szObjectKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND ho_id='%s' "), m_szObjectKey);
	}*/

	

		szWhere.AppendFormat(_T(" AND htr_deptid='%s' "), pMF->m_szDept);
		for (int i = 0; i < m_wndObject.GetCount(); i++)
		{
			if (m_wndObject.GetCheck(i))
			{
				if (!szObjects.IsEmpty())
					szObjects += _T(",");
				szObjects.AppendFormat(_T("'%s'"), m_wndObject.GetCheck(i, 0));
			}
		}

		if (!szObjects.IsEmpty())
			szWhere.AppendFormat(_T(" AND ho_id IN(%s) "), szObjects);


		if (m_nDocumentNo > 0)
		{
			szWhere.Format(_T(" AND htr_docno=%ld "), m_nDocumentNo);
		}

		if (!m_szNumberInward.IsEmpty())
		{
			szWhere.Format(_T(" AND hcr_recordno='%s' "), m_szNumberInward);
		}

		if (!m_szHanmucKey.IsEmpty())
		{
			szWhere1.AppendFormat(_T(" AND (patpaidthua < %ld OR patpaidno>0)"), m_nhanmuc);
		}

		m_wndList.BeginLoad(); 
		int nCount = 0;
			szSQL.Format(_T(" SELECT * FROM") \
			_T(" (") \
			_T(" SELECT") \
			_T(" docno, recordno, patientname, age, sex, objectname, roomname, cast ('Vượng' as NVARCHAR2(5)) as teststring, ") \
			_T(" amount, inspaid, deposit,patdebt,") \
			_T(" CASE WHEN (COALESCE(deposit,0) - patdebt) >=0 THEN (COALESCE(deposit,0) - patdebt) ELSE 0 END as patpaidthua,  ") \
			_T(" CASE WHEN (COALESCE(deposit,0) - patdebt) <0 THEN (COALESCE(deposit,0) - patdebt)*-1 ELSE 0 END as patpaidno") \
			_T(" FROM") \
			_T(" (") \
			_T(" SELECT") \
			_T(" fe.hfe_docno as docno,") \
			_T(" hcr_recordno  AS recordno,") \
			_T("  trim(hp_surname") \
			_T("   ||' '") \
			_T("   ||hp_midname") \
			_T("   ||' '") \
			_T("   ||hp_firstname)                                    AS patientname,") \
			_T("   hms_getage(trunc_date(hd_admitdate), hp_birthdate) AS age,") \
			_T("   hms_getsex(hp_sex)                                 AS sex,") \
			_T("   hms_getobjectname(ho_id)                           AS objectname,") \
			_T("   htr_admitdate,htr_idx,") \
			_T(" SUM(fe.hfe_cost) as amount,") \
			_T(" SUM(fe.hfe_inspaid) as inspaid,") \
			_T(" SUM(fe.HFE_DISCOUNT) as discount,") \
			_T(" SUM(fe.hfe_diffcost) as diffcost,") \
			_T(" SUM(fe.hfe_patdebt) as patdebt,") \
			_T(" (SELECT sum(COALESCE(hfe_amount, 0) - COALESCE(hfe_patpaid, 0)) from hms_fee_deposit de where de.hfe_docno=fe.hfe_docno and hfe_status = 'P' and de.hfe_deptid <> 'PTTYC') as deposit,") \
			_T(" hms_getActiveBed(htr_docno, htr_deptid) AS roomname") \
			_T(" from hms_fee fe") \
			_T(" LEFT JOIN hms_doc") \
			_T(" ON(fe.hfe_docno=hd_docno)") \
			_T(" LEFT JOIN hms_patient") \
			_T(" ON(hd_patientno=hp_patientno)") \
			_T(" LEFT JOIN hms_clinical_record") \
			_T(" ON(hfe_docno = hcr_docno)") \
			_T(" LEFT JOIN hms_treatment_record") \
			_T(" ON(htr_docno =hcr_docno)") \
			_T(" LEFT JOIN hms_object") \
			_T(" ON(ho_id=HD_OBJECT)") \
			_T(" WHERE htr_status    ='I'") \
			_T(" %s") \
			_T(" and fe.HFE_CATEGORY <> 'Y'") \
			_T(" and fe.hfe_status='O'") \
			_T(" and fe.hfe_deptid <> 'PTTYC'") \
			_T(" group by fe.HFE_DOCNO, hcr_recordno, hp_surname, hp_midname,hp_firstname,hd_admitdate,hp_birthdate, hp_sex, ho_id, htr_deptid, htr_docno, htr_admitdate, htr_idx") \
			_T(" ORDER BY fe.hfe_docno") \
			_T(" )") \
			_T(" where 1=1 order by htr_admitdate, patientname, htr_idx") \
			_T(" )") \
			_T(" WHERE 1=1 %s"), szWhere, szWhere1);

		nCount = rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);

	int nIndex = 1, nItem;
	long patpaidno;

	CString szFirstName, szMidName, szSurName, szSearchName;
	CString szFirstName2, szMidName2, szSurName2, szSearchName2, szShortName;
	if(!m_szPatientName.IsEmpty())
	{
		StringLower(m_szPatientName, szSearchName);
		SplitName(szSearchName, szSurName, szMidName, szFirstName);
	}

	while(!rs.IsEOF())
	{ 
		rs.GetValue(_T("patientname"), tmpStr);

		if (!m_szPatientName.IsEmpty())
		{
			CString szPatientName;
			
			StringLower(tmpStr, szPatientName);

			SplitName(szPatientName, szSurName2, szMidName2, szFirstName2);
			GetShortName(szPatientName, szShortName);

			if (szShortName != m_szPatientName)
			{
				if (!szFirstName.IsEmpty() && szFirstName != szFirstName2)
				{
					rs.MoveNext();
					continue;
				}
			}
				
			if (!szSurName.IsEmpty() && szSurName != szSurName2)
			{
				rs.MoveNext();
				continue;
			}

			if (!szMidName.IsEmpty() && szMidName2.Find(szMidName) == -1)
			{
				rs.MoveNext();
				continue;
			}
			
		}

		tmpStr.Format(_T("%d"), nIndex++);
		rs.GetValue(_T("patpaidno"), patpaidno);
		nItem = m_wndList.AddItems(
			tmpStr, 
			rs.GetValue(_T("docno")), 
			rs.GetValue(_T("recordno")), 
			rs.GetValue(_T("patientname")), 
			rs.GetValue(_T("age")), 
			rs.GetValue(_T("sex")), 
			rs.GetValue(_T("objectname")), 
			rs.GetValue(_T("roomname")),
			rs.GetValue(_T("amount")), 
			rs.GetValue(_T("inspaid")), 
			rs.GetValue(_T("deposit")),
			rs.GetValue(_T("patdebt")),
			rs.GetValue(_T("patpaidno")),
			rs.GetValue(_T("patpaidthua")),NULL);
		rs.MoveNext();
		if(patpaidno >0)
			{
				m_wndList.SetSubItemBkColor(nItem, 1, RGB(244, 164, 96), FALSE);
				m_wndList.SetSubItemTextColor(nItem, 1, RGB(255, 255, 255), FALSE);
			}
	}
	m_wndList.EndLoad(); 
	pMF->EndWaitCursor();
	return nCount;
}
int CHMSTrackingPatientFeeView::OnAddHMSTrackingPatientFeeDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSTrackingPatientFeeView::OnEditHMSTrackingPatientFeeDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSTrackingPatientFeeView::OnDeleteHMSTrackingPatientFeeDialog(){
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
 		OnCancelHMSTrackingPatientFeeDialog();
 	}
	return 0;
}
int CHMSTrackingPatientFeeView::OnSaveHMSTrackingPatientFeeDialog(){
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
 		//OnHMSTrackingPatientFeeDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSTrackingPatientFeeView::OnCancelHMSTrackingPatientFeeDialog(){
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
int CHMSTrackingPatientFeeView::OnHMSTrackingPatientFeeDialogListLoadData(){
	return 0;
}

int CHMSTrackingPatientFeeView::OnExcelList(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szWhere;
	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();
	int nRow =0, nCol = 0, nIdx = 1;
	CExcel xls;
	xls.CreateSheet(1);
	xls.SetWorksheet(0);

	xls.SetColumnWidth(0, 4);
	xls.SetColumnWidth(1, 10);
	xls.SetColumnWidth(2, 10);
	xls.SetColumnWidth(3, 20);
	xls.SetColumnWidth(4, 4);
	xls.SetColumnWidth(5, 4);
	xls.SetColumnWidth(6, 10);
	xls.SetColumnWidth(7, 14);
	xls.SetColumnWidth(8, 14);
	xls.SetColumnWidth(9, 14);
	xls.SetColumnWidth(10, 14);
	xls.SetColumnWidth(11, 14);
	xls.SetColumnWidth(12, 14);
	xls.SetCellText(0, 0, _T("STT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(1, 0, _T("Số hồ sơ"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(2, 0, _T("Số bệnh án"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(3, 0, _T("Tên bệnh nhân"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(4, 0, _T("Tuổi"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(5, 0, _T("Giới"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(6, 0, _T("Ðối tượng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(7, 0, _T("Phòng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(8, 0, _T("Tổng chi phí"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(9, 0, _T("Tổng bảo hiểm trả"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(10, 0, _T("Tổng tạm gửi"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(11, 0, _T("Bệnh nhân phải trả "), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(12, 0, _T("Bệnh nhân còn thiếu"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(13, 0, _T("Bệnh nhân còn thừa"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);

	nRow = 1;
	nCol = 0;
	
	for(int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		tmpStr = m_wndList.GetItemText(i, 0);
		xls.SetCellText(nCol+0, nRow, tmpStr, FMT_INTEGER);
		tmpStr = m_wndList.GetItemText(i, 1);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_INTEGER);
		tmpStr = m_wndList.GetItemText(i, 2);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);
		tmpStr = m_wndList.GetItemText(i, 3);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);
		tmpStr = m_wndList.GetItemText(i, 4);
		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_INTEGER);
		tmpStr = m_wndList.GetItemText(i, 5);
		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_TEXT);
		tmpStr = m_wndList.GetItemText(i, 6);
		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_TEXT);
		tmpStr = m_wndList.GetItemText(i, 7);
		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_TEXT);
		tmpStr = m_wndList.GetItemText(i, 8);
		xls.SetCellText(nCol+8, nRow, tmpStr, FMT_NUMBER1);
		tmpStr = m_wndList.GetItemText(i, 9);
		xls.SetCellText(nCol+9, nRow, tmpStr, FMT_NUMBER1);
		tmpStr = m_wndList.GetItemText(i, 10);
		xls.SetCellText(nCol+10, nRow, tmpStr, FMT_NUMBER1);
		tmpStr = m_wndList.GetItemText(i, 11);
		xls.SetCellText(nCol+11, nRow, tmpStr, FMT_NUMBER1);
		tmpStr = m_wndList.GetItemText(i, 12);
		xls.SetCellText(nCol+12, nRow, tmpStr, FMT_NUMBER1);
		tmpStr = m_wndList.GetItemText(i, 13);
		xls.SetCellText(nCol+13, nRow, tmpStr, FMT_NUMBER1);
		nRow++;
	}
	EndWaitCursor();
	xls.Save(_T("Exports\\ChiPhiBenhNhanTrongKhoa.xls"));

	return 0;
} 

void CHMSTrackingPatientFeeView::OnResizeLayout() {

	AddResize(&m_wndList, 100, 100);
}