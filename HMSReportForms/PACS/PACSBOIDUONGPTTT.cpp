#include "stdafx.h"
#include "PACSBOIDUONGPTTT.h"
#include "HMSMainFrame.h"
#include "Excel.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CPACSBOIDUONGPTTT *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CPACSBOIDUONGPTTT *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CPACSBOIDUONGPTTT *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CPACSBOIDUONGPTTT *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CPACSBOIDUONGPTTT *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CPACSBOIDUONGPTTT *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CPACSBOIDUONGPTTT *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CPACSBOIDUONGPTTT *)pWnd)->OnToDateCheckValue();
} 
static long _OnGroupLoadDataFnc(CWnd *pWnd){
	return ((CPACSBOIDUONGPTTT*)pWnd)->OnGroupLoadData();
} 
static void _OnGroupDblClickFnc(CWnd *pWnd){
	((CPACSBOIDUONGPTTT*)pWnd)->OnGroupDblClick();
} 
static void _OnGroupSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CPACSBOIDUONGPTTT*)pWnd)->OnGroupSelectChange(nOldItem, nNewItem);
} 
static int _OnGroupDeleteItemFnc(CWnd *pWnd){
	 return ((CPACSBOIDUONGPTTT*)pWnd)->OnGroupDeleteItem();
} 
static long _OnRoomLoadDataFnc(CWnd *pWnd){
	return ((CPACSBOIDUONGPTTT*)pWnd)->OnRoomLoadData();
} 
static void _OnRoomDblClickFnc(CWnd *pWnd){
	((CPACSBOIDUONGPTTT*)pWnd)->OnRoomDblClick();
} 
static void _OnRoomSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CPACSBOIDUONGPTTT*)pWnd)->OnRoomSelectChange(nOldItem, nNewItem);
} 
static int _OnRoomDeleteItemFnc(CWnd *pWnd){
	return ((CPACSBOIDUONGPTTT*)pWnd)->OnRoomDeleteItem();
} 
static long _OnListItemLoadDataFnc(CWnd *pWnd){
	return ((CPACSBOIDUONGPTTT*)pWnd)->OnListItemLoadData();
} 
static void _OnListItemDblClickFnc(CWnd *pWnd){
	((CPACSBOIDUONGPTTT*)pWnd)->OnListItemDblClick();
} 
static void _OnListItemSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CPACSBOIDUONGPTTT*)pWnd)->OnListItemSelectChange(nOldItem, nNewItem);
} 
static int _OnListItemDeleteItemFnc(CWnd *pWnd){
	 return ((CPACSBOIDUONGPTTT*)pWnd)->OnListItemDeleteItem();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CPACSBOIDUONGPTTT *pVw = (CPACSBOIDUONGPTTT *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnInsuranceSelectFnc(CWnd *pWnd){
	  ((CPACSBOIDUONGPTTT*)pWnd)->OnInsuranceSelect();
}
static void _OnServiceSelectFnc(CWnd *pWnd){
	  ((CPACSBOIDUONGPTTT*)pWnd)->OnServiceSelect();
}
static void _OnPolicySelectFnc(CWnd *pWnd){
	  ((CPACSBOIDUONGPTTT*)pWnd)->OnPolicySelect();
}
/*static void _OnSerchItemChangeFnc(CWnd *pWnd){
	((CPACSBOIDUONGPTTT *)pWnd)->OnSerchItemChange();
} */
/*static void _OnSerchItemSetfocusFnc(CWnd *pWnd){
	((CPACSBOIDUONGPTTT *)pWnd)->OnSerchItemSetfocus();} */ 
/*static void _OnSerchItemKillfocusFnc(CWnd *pWnd){
	((CPACSBOIDUONGPTTT *)pWnd)->OnSerchItemKillfocus();
} */
static int _OnSerchItemCheckValueFnc(CWnd *pWnd){
	return ((CPACSBOIDUONGPTTT *)pWnd)->OnSerchItemCheckValue();
} 
static void _OnPerformedSelectFnc(CWnd *pWnd){
	 ((CPACSBOIDUONGPTTT*)pWnd)->OnPerformedSelect();
}
static int _OnAddPACSBOIDUONGPTTTFnc(CWnd *pWnd){
	 return ((CPACSBOIDUONGPTTT*)pWnd)->OnAddPACSBOIDUONGPTTT();
} 
static int _OnEditPACSBOIDUONGPTTTFnc(CWnd *pWnd){
	 return ((CPACSBOIDUONGPTTT*)pWnd)->OnEditPACSBOIDUONGPTTT();
} 
static int _OnDeletePACSBOIDUONGPTTTFnc(CWnd *pWnd){
	 return ((CPACSBOIDUONGPTTT*)pWnd)->OnDeletePACSBOIDUONGPTTT();
} 
static int _OnSavePACSBOIDUONGPTTTFnc(CWnd *pWnd){
	 return ((CPACSBOIDUONGPTTT*)pWnd)->OnSavePACSBOIDUONGPTTT();
} 
static int _OnCancelPACSBOIDUONGPTTTFnc(CWnd *pWnd){
	 return ((CPACSBOIDUONGPTTT*)pWnd)->OnCancelPACSBOIDUONGPTTT();
}

static int _OnListCheckAllFnc(CWnd *pWnd){
	return ((CPACSBOIDUONGPTTT*)pWnd)->OnListCheckAll();
}
static int _OnListUnCheckAllFnc(CWnd *pWnd){
	return ((CPACSBOIDUONGPTTT*)pWnd)->OnListUnCheckAll();
}

static int _OnListItemCheckAllFnc(CWnd *pWnd){
	return ((CPACSBOIDUONGPTTT*)pWnd)->OnListItemCheckAll();
}
static int _OnListItemUnCheckAllFnc(CWnd *pWnd){
	return ((CPACSBOIDUONGPTTT*)pWnd)->OnListItemUnCheckAll();
}

CPACSBOIDUONGPTTT::CPACSBOIDUONGPTTT(CWnd *pParent){

	m_nDlgWidth = 475;
	m_nDlgHeight = 565;
	SetDefaultValues();
}
CPACSBOIDUONGPTTT::~CPACSBOIDUONGPTTT(){
}
void CPACSBOIDUONGPTTT::OnCreateComponents()
{
	m_wndReportCondition.Create(this, _T("Report Condition"), 7, 5, 482, 525);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 28, 130, 53);
	m_wndFromDate.Create(this,135, 28, 255, 53); 
	m_wndToDateLabel.Create(this, _T("To Date"), 260, 28, 350, 53);
	m_wndToDate.Create(this,355, 28, 475, 53); 
	m_wndGroupLabel.Create(this, _T("Group"), 10, 58, 130, 83);
	m_wndGroup.Create(this,135, 58, 475, 148); 
	m_wndRoomLabel.Create(this, _T("Room"), 10, 153, 130, 178);
	m_wndRoom.Create(this,135, 153, 475, 313); 
	m_wndItemLabel.Create(this, _T("Item"), 11, 318, 130, 343);
	m_wndSerchItem.Create(this,135, 318, 475, 343); 
	m_wndMethodNameLabel.Create(this, _T("MethodName"), 10, 348, 130, 373);
	m_wndListItem.Create(this,135, 348, 475, 518); 
	m_wndPerformed.Create(this, _T("Performed"), 11, 495, 130, 520);
	m_wndInsurance.Create(this, _T("Insurance"), 5, 530, 95, 555);
	m_wndService.Create(this, _T("Service"), 100, 530, 180, 555);
	m_wndPolicy.Create(this, _T("Policy"), 185, 530, 285, 555);
	m_wndExport.Create(this, _T("&Export"), 375, 530, 475, 555);
}
void CPACSBOIDUONGPTTT::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	m_wndSerchItem.SetLimitText(35);
	m_wndSerchItem.SetCheckValue(true);


	m_wndGroup.InsertColumn(0, _T("ID"), CFMT_TEXT, 60);
	m_wndGroup.InsertColumn(1, _T("GroupName"), CFMT_TEXT, 200);
	m_wndGroup.SetCheckBox(true);

	m_wndListItem.InsertColumn(0, _T("ItemId"), CFMT_TEXT, 30);
	m_wndListItem.InsertColumn(1, _T("Item Fee"), CFMT_TEXT, 400);
	m_wndListItem.SetCheckBox(true);

	m_wndRoom.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndRoom.InsertColumn(1, _T("Name"), CFMT_TEXT, 320);
	m_wndRoom.SetCheckBox(true);

}
void CPACSBOIDUONGPTTT::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndGroup.SetEvent(WE_SELCHANGE, _OnGroupSelectChangeFnc);
	m_wndGroup.SetEvent(WE_LOADDATA, _OnGroupLoadDataFnc);
	m_wndGroup.SetEvent(WE_DBLCLICK, _OnGroupDblClickFnc);
	//m_wndGroup.AddEvent(1, _T("Delete"), _OnGroupDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndRoom.SetEvent(WE_SELCHANGE, _OnRoomSelectChangeFnc);
	m_wndRoom.SetEvent(WE_LOADDATA, _OnRoomLoadDataFnc);
	m_wndRoom.SetEvent(WE_DBLCLICK, _OnRoomDblClickFnc);
	m_wndRoom.AddEvent(1, _T("Delete"), _OnRoomDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndListItem.SetEvent(WE_SELCHANGE, _OnListItemSelectChangeFnc);
	m_wndListItem.SetEvent(WE_LOADDATA, _OnListItemLoadDataFnc);
	m_wndListItem.SetEvent(WE_DBLCLICK, _OnListItemDblClickFnc);
	//m_wndListItem.AddEvent(1, _T("Delete"), _OnListItemDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndInsurance.SetEvent(WE_CLICK, _OnInsuranceSelectFnc);
	m_wndService.SetEvent(WE_CLICK, _OnServiceSelectFnc);
	m_wndPolicy.SetEvent(WE_CLICK, _OnPolicySelectFnc);
	//m_wndSerchItem.SetEvent(WE_CHANGE, _OnSerchItemChangeFnc);
	//m_wndSerchItem.SetEvent(WE_SETFOCUS, _OnSerchItemSetfocusFnc);
	//m_wndSerchItem.SetEvent(WE_KILLFOCUS, _OnSerchItemKillfocusFnc);
	m_wndSerchItem.SetEvent(WE_CHECKVALUE, _OnSerchItemCheckValueFnc);
	m_wndPerformed.SetEvent(WE_CLICK, _OnPerformedSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddPACSBOIDUONGPTTTFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditPACSBOIDUONGPTTTFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeletePACSBOIDUONGPTTTFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSavePACSBOIDUONGPTTTFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelPACSBOIDUONGPTTTFnc, 0, 'T', VK_CONTROL);

	m_wndRoom.AddEvent(1, _T("Check All"), _OnListCheckAllFnc);
	m_wndRoom.AddEvent(2, _T("UnCheck All"), _OnListUnCheckAllFnc);

	m_wndListItem.AddEvent(1, _T("Check All"), _OnListItemCheckAllFnc);
	m_wndListItem.AddEvent(2, _T("UnCheck All"), _OnListItemUnCheckAllFnc);

	SetMode(VM_ADD);
}
void CPACSBOIDUONGPTTT::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Radio(pDX, m_wndInsurance.GetDlgCtrlID(), m_nInsurance);
	DDX_Radio(pDX, m_wndService.GetDlgCtrlID(), m_nService);
	DDX_Radio(pDX, m_wndPolicy.GetDlgCtrlID(), m_nPolicy);
	DDX_Text(pDX, m_wndSerchItem.GetDlgCtrlID(), m_szSerchItem);
	DDX_Check(pDX, m_wndPerformed.GetDlgCtrlID(), m_bPerformed);

}
void CPACSBOIDUONGPTTT::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CPACSBOIDUONGPTTT::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CPACSBOIDUONGPTTT::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_nInsurance=0;
	m_nService=1;
	m_nPolicy=1;
	m_szSerchItem.Empty();
	m_bPerformed=FALSE;

}
int CPACSBOIDUONGPTTT::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
 		CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, -1);
 			SetDefaultValues();
			m_szFromDate= pMF->GetSysDate() + _T(" 00:00");
			m_szToDate= pMF->GetSysDate() + _T(" 23:59");
			OnGroupLoadData();
			OnListItemLoadData();
			OnRoomLoadData();
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
/*void CPACSBOIDUONGPTTT::OnFromDateChange(){
	
} */
/*void CPACSBOIDUONGPTTT::OnFromDateSetfocus(){
	
} */
/*void CPACSBOIDUONGPTTT::OnFromDateKillfocus(){
	
} */
int CPACSBOIDUONGPTTT::OnFromDateCheckValue(){
	return 0;
} 
/*void CPACSBOIDUONGPTTT::OnToDateChange(){
	
} */
/*void CPACSBOIDUONGPTTT::OnToDateSetfocus(){
	
} */
/*void CPACSBOIDUONGPTTT::OnToDateKillfocus(){
	
} */
int CPACSBOIDUONGPTTT::OnToDateCheckValue(){
	return 0;
} 
void CPACSBOIDUONGPTTT::OnGroupDblClick(){
	
} 
void CPACSBOIDUONGPTTT::OnGroupSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CPACSBOIDUONGPTTT::OnGroupDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CPACSBOIDUONGPTTT::OnGroupLoadData(){

	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL,szWhere;
	m_wndGroup.BeginLoad(); 
	int nCount = 0;
	if(pMF->GetCurrentDepartmentID() ==_T("C8"))
		szWhere.Format(_T(" and hfg_id in ('B2100','B2200','B2300') "));

	if(pMF->GetCurrentDepartmentID() ==_T("C7"))
		szWhere.Format(_T(" and  hfg_id in ('B3300','B3400','B3410','B3500','B3600') "));

	if(pMF->GetCurrentDepartmentID() ==_T("C8-D"))
		szWhere.Format(_T(" and hfg_id ='B3100'"));

	szSQL.Format(_T("SELECT hfg_id as id,hfg_name as GroupName from hms_fee_group  WHERE 1=1 %s ORDER BY hfg_id"),szWhere);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndGroup.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("GroupName")), NULL);
		rs.MoveNext();
	}
	m_wndGroup.EndLoad(); 
	return nCount;

}
void CPACSBOIDUONGPTTT::OnRoomDblClick(){
	
} 
void CPACSBOIDUONGPTTT::OnRoomSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CPACSBOIDUONGPTTT::OnRoomDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CPACSBOIDUONGPTTT::OnRoomLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndRoom.BeginLoad(); 
	int nCount = 0;

	szSQL.Format(_T("SELECT hrl_id as ID, hrl_name as Name ") \
		_T("FROM hms_roomlist ") \
		_T("WHERE hrl_deptid='%s' AND HRL_ACTIVE='Y' ") \
		_T("ORDER BY hrl_id"), pMF->GetCurrentDepartmentID());

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndRoom.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Name")), NULL);
		rs.MoveNext();
	}
	m_wndRoom.EndLoad(); 
	return nCount;
}
void CPACSBOIDUONGPTTT::OnListItemDblClick(){
	
	
} 
void CPACSBOIDUONGPTTT::OnListItemSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CPACSBOIDUONGPTTT::OnListItemDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CPACSBOIDUONGPTTT::OnListItemLoadData(){

	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//UpdateData(true);
	CRecord rs(&pMF->m_db);
	CString szSQL,szWhere;
	m_wndListItem.BeginLoad(); 
	int nCount = 0;
	if(pMF->GetCurrentDepartmentID() ==_T("C8"))
		szWhere.Format(_T(" AND hfl_groupid IN ('B2200') ") \
						_T(" OR (hfl_groupid='B2300' and   ") \
						_T("	hfl_name LIKE chr(37)") \
						_T("     ||'\x43\xF3 ti\xEAm' ") \
						_T("     ||chr(37) ) ") \
						_T(" OR ( hfl_groupid='B2100' AND ") \
						_T("   ( hfl_name LIKE chr(37)") \
						_T("     ||'t\x1EA1i gi\x1B0\x1EDDng' ") \
						_T("     ||chr(37)") \
						_T("   OR hfl_name LIKE chr(37)") \
						_T("     ||'ti\xEAm thu\x1ED1\x63'") \
						_T("     ||chr(37)") \
						_T("   OR hfl_name LIKE chr(37)") \
						_T("     ||'u\x1ED1ng thu\x1ED1\x63'") \
						_T("     ||chr(37)") \
						_T("   OR hfl_name LIKE chr(37)") \
						_T("     ||'\x64\xF9ng thu\x1ED1\x63'") \
						_T("     ||chr(37)") \
						_T("   OR hfl_name LIKE chr(37)") \
						_T("     ||'\x63\xF3 \x64\xF9ng thu\x1ED1\x63'") \
						_T("     ||chr(37)") \
						_T("   OR hfl_name LIKE chr(37)") \
						_T("     ||'\x63\xF3 thu\x1ED1\x63'") \
						_T("     ||chr(37)") \
						_T("   OR hfl_name LIKE chr(37)") \
						_T("     ||'UIV'") \
						_T("     ||chr(37)") \
						_T("   OR hfl_name LIKE chr(37)") \
						_T("     ||'UPR'") \
						_T("     ||chr(37) ))") );
	if(pMF->GetCurrentDepartmentID() ==_T("C7") && (m_bPerformed == false) )
		szWhere.Format(_T(" and  hfl_groupid in ('B3300','B3400','B3500','B3600', 'B3410') "));

	if(pMF->GetCurrentDepartmentID() ==_T("C8-D") && (m_bPerformed == false) )
		szWhere.Format(_T(" and  hfl_groupid ='B3100' "));

	szSQL.Format(_T("SELECT hfl_feeid as Itemid,hfl_name as itemfee from hms_fee_list where 1=1 %s ORDER BY hfl_feeid "),szWhere);
	if(pMF->GetCurrentDepartmentID() ==_T("C7") && (m_bPerformed == TRUE) )
	{
		szSQL.Format(_T("select  distinct (hpcl_itemid) as ItemId, ") \
						_T("		hfl_name as ItemFee    ") \
						_T("	from HMS_PACSORDER   ") \
						_T("	LEFT JOIN HMS_PACSORDERLINE  ON (hpcl_orderid = hpc_orderid)  ") \
						_T("	LEFT JOIN hms_fee_list ON (hfl_feeid=hpcl_itemid)  ") \
						_T("	WHERE  hpcl_status='T' and hpc_pdeptid='C7'    ") \
						_T("	and hpcl_date BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')  ") \
						_T("				AND  TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')  ") \
						_T("	ORDER BY ItemId  "),m_szFromDate,m_szToDate);
	}
	nCount = rs.ExecSQL(szSQL);
    //_msg(_T("%s"),szSQL);
	while(!rs.IsEOF()){ 
		m_wndListItem.AddItems(
			rs.GetValue(_T("ItemId")), 
			rs.GetValue(_T("ItemFee")), NULL);
		rs.MoveNext();
	}
	m_wndListItem.EndLoad(); 
	return nCount;

}
void CPACSBOIDUONGPTTT::OnExportSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL,szWhere,tmpStr;
	szSQL=GetQueryString();
	//_msg(_T("%s"),szSQL);
	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data."));
		return;
	}
	UpdateData(true);
	int nRow=0;
	int nCol=0;
	CExcel xls;
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	//Header
	xls.SetColumnWidth(0, 5);
	xls.SetColumnWidth(1, 21);
	xls.SetColumnWidth(2, 21);
	xls.SetColumnWidth(3, 25);
	xls.SetColumnWidth(4, 5);
	xls.SetColumnWidth(5, 5);
	xls.SetColumnWidth(6, 5);
	xls.SetColumnWidth(7, 5);
	xls.SetColumnWidth(8, 6);
	xls.SetColumnWidth(9, 6);
	xls.SetColumnWidth(10, 6);
	xls.SetColumnWidth(11, 12);
	xls.SetColumnWidth(12, 10);
	xls.SetColumnWidth(13, 11);
	xls.SetColumnWidth(14, 9);
	xls.SetColumnWidth(15, 30);
	xls.SetCellMergedColumns(0, 0, 3);
	xls.SetCellMergedColumns(4, 0, 8);
	xls.SetCellMergedColumns(4, 1, 8);
	xls.SetCellMergedColumns(0, 1, 3);
	xls.SetCellMergedColumns(0, 3, 13);
	xls.SetCellMergedColumns(0, 4, 13);
	xls.SetCellText(0, 0, _T("\x42\x1EC6NH VI\x1EC6N TW QU\xC2N \x110\x1ED8I \x31\x30\x38"), 4098, true);

	xls.SetCellText(4, 0, _T("\x43\x1ED8NG H\xD2\x41 \x58\xC3 H\x1ED8I \x43H\x1EE6 NGH\x128\x41 VI\x1EC6T N\x41M"), 4098, false);
	xls.SetCellText(4, 1, _T("\x110\x1ED9\x63 l\x1EADp - T\x1EF1 \x64o - H\x1EA1nh ph\xFA\x63"), 4098, true);
	xls.SetCellText(0, 1, pMF->GetCurrentDepartmentName(), 4098, true);
	if (m_nInsurance == 0)
		tmpStr.Format(_T("\x44\x41NH S\xC1\x43H \x110\x1EC0 NGH\x1ECA \x42\x1ED2I \x44\x1AF\x1EE0NG PH\x1EAAU THU\x1EACT, TH\x1EE6 THU\x1EACT \x42HYT"));
	else if (m_nService == 0)
		tmpStr.Format(_T("\x44\x41NH S\xC1\x43H \x110\x1EC0 NGH\x1ECA \x42\x1ED2I \x44\x1AF\x1EE0NG PH\x1EAAU THU\x1EACT, TH\x1EE6 THU\x1EACT \x44\x1ECA\x43H V\x1EE4"));
	else if (m_nPolicy == 0)
		tmpStr.Format(_T("\x44\x41NH S\xC1\x43H \x110\x1EC0 NGH\x1ECA \x42\x1ED2I \x44\x1AF\x1EE0NG PH\x1EAAU THU\x1EACT, TH\x1EE6 THU\x1EACT \x42\x1ED8 \x110\x1ED8I"));
	xls.SetCellText(0, 3,tmpStr , 4098, true, 12);
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 4, tmpStr, 4098, true);
	
	nRow=6;
	xls.SetCellMergedRows(nCol,nRow,2);
	xls.SetCellText(nCol,nRow,_T("S\x1ED1 TT"),FMT_TEXT|FMT_WRAPING,true,10);

	xls.SetCellMergedRows(nCol+1,nRow,2);
	xls.SetCellText(nCol+1,nRow,_T("H\x1ECD v\xE0 t\xEAn"),FMT_TEXT|FMT_WRAPING,true,10);

	xls.SetCellMergedRows(nCol+2,nRow,2);
	xls.SetCellText(nCol+2,nRow,_T("SH, s\x1ED1 th\x1EBB"),FMT_TEXT|FMT_WRAPING,true,10);

	xls.SetCellMergedRows(nCol+3,nRow,2);
	xls.SetCellText(nCol+3,nRow,_T("T\xEAn ph\x1EABu thu\x1EADt, th\x1EE7 thu\x1EADt"),FMT_TEXT|FMT_WRAPING,true,10);

	xls.SetCellMergedColumns(nCol+4,nRow,4);
	xls.SetCellText(nCol+4,nRow,_T("Ph\xE2n lo\x1EA1i PT,TT"),FMT_TEXT|FMT_WRAPING,true,10);

	xls.SetCellText(nCol+4,nRow+1,_T("\x110\x1EB7\x63 \x62i\x1EC7t"),FMT_TEXT|FMT_WRAPING,true,10);
	xls.SetCellText(nCol+5,nRow+1,_T("Lo\x1EA1i \x31"),FMT_TEXT|FMT_WRAPING,true,10);
	xls.SetCellText(nCol+6,nRow+1,_T("Lo\x1EA1i \x32"),FMT_TEXT|FMT_WRAPING,true,10);
	xls.SetCellText(nCol+7,nRow+1,_T("Lo\x1EA1i \x33"),FMT_TEXT|FMT_WRAPING,true,10);


	xls.SetCellMergedColumns(nCol+8,nRow,3);
	xls.SetCellText(nCol+8,nRow,_T("K\xEDp th\x1EF1\x63 hi\x1EC7n"),FMT_TEXT|FMT_WRAPING,true,10);

	xls.SetCellText(nCol+8,nRow+1,_T("\x43h\xEDnh"),FMT_TEXT|FMT_WRAPING,true,10);
	xls.SetCellText(nCol+9,nRow+1,_T("Ph\x1EE5"),FMT_TEXT|FMT_WRAPING,true,10);
	xls.SetCellText(nCol+10,nRow+1,_T("Gi\xFAp vi\x1EC7\x63"),FMT_TEXT|FMT_WRAPING,true,10);

	xls.SetCellMergedRows(nCol+11,nRow,2);
	xls.SetCellText(nCol+11,nRow,_T("S\x1ED1 ti\x1EC1n"),FMT_TEXT|FMT_WRAPING,true,10);

	xls.SetCellMergedRows(nCol+12,nRow,2);
	xls.SetCellText(nCol+12,nRow,_T("S\x1ED1 H\x1ED3 S\x1A1"),FMT_TEXT|FMT_WRAPING,true,10);

	xls.SetCellMergedRows(nCol+13,nRow,2);
	xls.SetCellText(nCol+13,nRow,_T("S\x1ED1 \x42\x1EC7nh \xC1n"),FMT_TEXT|FMT_WRAPING,true,10);

	xls.SetCellMergedRows(nCol+14,nRow,2);
	xls.SetCellText(nCol+14,nRow,_T("N\x103m sinh"),FMT_TEXT|FMT_WRAPING,true,10);

	

		nRow=8;
	int nIndex=1;
	while(!rs.IsEOF())
	{	
		
		xls.SetCellText(nCol,nRow,int2str(nIndex++),FMT_TEXT|FMT_CENTER);
		rs.GetValue(_T("patient_name"),tmpStr);
		xls.SetCellText(nCol + 1,nRow,tmpStr,FMT_TEXT);

		rs.GetValue(_T("extra_info"),tmpStr);
		xls.SetCellText(nCol + 2 ,nRow,tmpStr,FMT_TEXT);

		rs.GetValue(_T("order_name"),tmpStr);
		xls.SetCellText(nCol + 3 ,nRow,tmpStr,FMT_TEXT);

		rs.GetValue(_T("practitioner"),tmpStr);
		xls.SetCellText(nCol + 8 ,nRow,tmpStr,FMT_TEXT);

		rs.GetValue(_T("nguoiphu"), tmpStr);
		xls.SetCellText(nCol + 9, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("doc_no"),tmpStr);
		xls.SetCellText(nCol + 12 ,nRow,tmpStr,FMT_TEXT);

		rs.GetValue(_T("deptid"),tmpStr);
		xls.SetCellText(nCol + 13 ,nRow,tmpStr,FMT_TEXT);

		rs.GetValue(_T("performdate"),tmpStr);
		tmpStr.Format(CDate::Convert(tmpStr,yyyymmdd,ddmmyyyy));
		xls.SetCellText(nCol + 14 ,nRow,tmpStr,FMT_TEXT);

		rs.GetValue(_T("proomid"),tmpStr);
		xls.SetCellText(nCol + 15 ,nRow,tmpStr,FMT_TEXT);

		nRow++;

		rs.MoveNext();
	}

	if(m_nInsurance==0)
		xls.Save(_T("Exports\\BOIDUONGPTTT BH.xls"));
	if(m_nService== 0)
		xls.Save(_T("Exports\\BOIDUONGPTTT DV.xls"));
	if(m_nPolicy == 0)
		xls.Save(_T("Exports\\BOIDUONGPTTT QUAN.xls"));
	
} 
void CPACSBOIDUONGPTTT::OnInsuranceSelect(){
	
}
void CPACSBOIDUONGPTTT::OnServiceSelect(){
	
}
void CPACSBOIDUONGPTTT::OnPolicySelect(){
	
}
/*void CPACSBOIDUONGPTTT::OnSerchItemChange(){
	
} */
/*void CPACSBOIDUONGPTTT::OnSerchItemSetfocus(){
	
} */
/*void CPACSBOIDUONGPTTT::OnSerchItemKillfocus(){
	
} */
int CPACSBOIDUONGPTTT::OnSerchItemCheckValue(){
	return 0;
} 
void CPACSBOIDUONGPTTT::OnPerformedSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);

	OnListItemLoadData();

	
}
int CPACSBOIDUONGPTTT::OnAddPACSBOIDUONGPTTT(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CPACSBOIDUONGPTTT::OnEditPACSBOIDUONGPTTT(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CPACSBOIDUONGPTTT::OnDeletePACSBOIDUONGPTTT(){
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
 		OnCancelPACSBOIDUONGPTTT();
 	}
	return 0;
}
int CPACSBOIDUONGPTTT::OnSavePACSBOIDUONGPTTT(){
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
 		//OnPACSBOIDUONGPTTTListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CPACSBOIDUONGPTTT::OnCancelPACSBOIDUONGPTTT(){
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
int CPACSBOIDUONGPTTT::OnPACSBOIDUONGPTTTListLoadData(){
	return 0;
}
CString CPACSBOIDUONGPTTT::GetQueryString() {
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CString szSQL,szWhere,szItems,szRooms;
	UpdateData(true);
	if(m_bPerformed)
	{
		szWhere.Format(_T(" AND HPC_GROUPID in ('B3300','B3400','B3500','B3600', 'B3410') AND hpcl_status in ('T') and hpcl_date BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') ") \
					    _T("    AND  TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') "),m_szFromDate,m_szToDate);
		
	}else
	{
		szWhere.Format(_T(" AND HPC_GROUPID in ('B3300','B3400','B3500','B3600', 'B3410') AND hpc_orderdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND  TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')")
		, m_szFromDate, m_szToDate);
	}

	if (m_nInsurance == 0)
		szWhere.AppendFormat(_T(" and ho_type in('I','C') "));
	else if (m_nService == 0)
		szWhere.AppendFormat(_T(" and ho_type in('S') "));
	else if (m_nPolicy == 0)
		szWhere.AppendFormat(_T(" and ho_type not in('I','C','S') "));

	for(int i=0;i<m_wndListItem.GetItemCount();i++)
	{
		if(m_wndListItem.GetCheck(i))
		{
			if (!szItems.IsEmpty())
					szItems += _T(", ");
				szItems.AppendFormat(_T("'%s'"), m_wndListItem.GetItemText(i, 0));
		}

	}
	if(!szItems.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and hpcl_itemid in(%s) "),szItems);
	}

	for(int i=0;i<m_wndRoom.GetItemCount();i++)
	{
		if(m_wndRoom.GetCheck(i))
		{
			if (!szRooms.IsEmpty())
				szRooms += _T(", ");
			szRooms.AppendFormat(_T("'%s'"), m_wndRoom.GetItemText(i, 0));
		}

	}
	if(!szRooms.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and hpcl_proomid in(%s) "),szRooms);
	}
	
	szSQL.Format(_T(" SELECT    hpcl_docno doc_no, Get_patientname(hpcl_docno) patient_name,hpc_deptid  as deptid,hpcl_date as performdate,hrl_name as proomid, ") \
		_T("           CASE WHEN  ho_type not in ('I','C') and hd_rank > 0 THEN (select ss_vndesc from sys_sel where ss_id = 'hms_rank' and ss_code = hd_rank)||hp_workplace ") \
		_T("           ELSE hd_cardno ") \
		_T("           END                       extra_info, ") \
		_T("           hfl_name                                 order_name, ") \
		_T("           substr(get_username(NVL(hpcl_practitioner, hpc_practitioner)), ") \
		_T("			instr(get_username(NVL(hpcl_practitioner, hpc_practitioner)), ' ', -1) + 1, ") \
		_T("			length(get_username(NVL(hpcl_practitioner, hpc_practitioner)))) practitioner, ") \
		_T("			(select SU_NAME from sys_user where su_userid=HPCL_CO_PRACTITIONER) as nguoiphu, ") \
		_T("           hpcl_result                              result_id ") \
		_T(" FROM      hms_pacsorderline ") \
		_T(" LEFT JOIN hms_pacsorder ON ( hpc_orderid = hpcl_orderid ) ") \
		_T(" LEFT JOIN hms_roomlist ON (hrl_id=hpcl_proomid and hrl_deptid=hpc_pdeptid AND hrl_deptid   ='C7') ") \
		_T(" LEFT JOIN hms_doc ON ( hpcl_docno = hd_docno ) ") \
		_T(" LEFT JOIN hms_patient On (hd_patientno=hp_patientno)   ") \
		_T(" LEFT JOIN hms_fee_list ON ( hpcl_itemid = hfl_feeid ) ") \
		_T(" LEFT JOIN hms_object ON (hpc_object = ho_id)") \
		_T(" WHERE     hfe_refstatus NOT IN ( 'C', 'R' ) AND hpcl_status NOT IN ( 'O', 'C' ) %s") \
		_T(" ORDER BY order_name,performdate, patient_name"), szWhere);

	return szSQL;

}
int CPACSBOIDUONGPTTT::OnListCheckAll()
{
	for (int i = 0; i < m_wndRoom.GetItemCount(); i++)
	{
		if (!m_wndRoom.GetCheck(i))
			m_wndRoom.SetCheck(i, TRUE);
	}
	return 0;
}
int CPACSBOIDUONGPTTT::OnListUnCheckAll()
{
	for (int i = 0; i < m_wndRoom.GetItemCount(); i++)
	{
		if (m_wndRoom.GetCheck(i))
			m_wndRoom.SetCheck(i, FALSE);
	}
	return 0;
}

int CPACSBOIDUONGPTTT::OnListItemCheckAll()
{
	for (int i = 0; i < m_wndListItem.GetItemCount(); i++)
	{
		if (!m_wndListItem.GetCheck(i))
			m_wndListItem.SetCheck(i, TRUE);
	}
	return 0;
}
int CPACSBOIDUONGPTTT::OnListItemUnCheckAll()
{
	for (int i = 0; i < m_wndListItem.GetItemCount(); i++)
	{
		if (m_wndListItem.GetCheck(i))
			m_wndListItem.SetCheck(i, FALSE);
	}
	return 0;
}