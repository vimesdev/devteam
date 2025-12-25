#include "stdafx.h"
#include "TMPhieuSoKetTruocMoDlg.h"
#include "HMSMainFrame.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CTMPhieuSoKetTruocMoDlg *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CTMPhieuSoKetTruocMoDlg *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CTMPhieuSoKetTruocMoDlg *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CTMPhieuSoKetTruocMoDlg *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CTMPhieuSoKetTruocMoDlg *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CTMPhieuSoKetTruocMoDlg *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CTMPhieuSoKetTruocMoDlg *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CTMPhieuSoKetTruocMoDlg *)pWnd)->OnToDateCheckValue();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CTMPhieuSoKetTruocMoDlg*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CTMPhieuSoKetTruocMoDlg*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CTMPhieuSoKetTruocMoDlg*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CTMPhieuSoKetTruocMoDlg*)pWnd)->OnListDeleteItem();
} 
static void _OnCLSTheoMauSelectFnc(CWnd *pWnd){
	CTMPhieuSoKetTruocMoDlg *pVw = (CTMPhieuSoKetTruocMoDlg *)pWnd;
	pVw->OnCLSTheoMauSelect();
} 
static void _OnCLSTheoCTMSelectFnc(CWnd *pWnd){
	CTMPhieuSoKetTruocMoDlg *pVw = (CTMPhieuSoKetTruocMoDlg *)pWnd;
	pVw->OnCLSTheoCTMSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CTMPhieuSoKetTruocMoDlg *pVw = (CTMPhieuSoKetTruocMoDlg *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CTMPhieuSoKetTruocMoDlg *pVw = (CTMPhieuSoKetTruocMoDlg *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddPhieuSoKetTruocMoDlgFnc(CWnd *pWnd){
	 return ((CTMPhieuSoKetTruocMoDlg*)pWnd)->OnAddPhieuSoKetTruocMoDlg();
} 
static int _OnEditPhieuSoKetTruocMoDlgFnc(CWnd *pWnd){
	 return ((CTMPhieuSoKetTruocMoDlg*)pWnd)->OnEditPhieuSoKetTruocMoDlg();
} 
static int _OnDeletePhieuSoKetTruocMoDlgFnc(CWnd *pWnd){
	 return ((CTMPhieuSoKetTruocMoDlg*)pWnd)->OnDeletePhieuSoKetTruocMoDlg();
} 
static int _OnSavePhieuSoKetTruocMoDlgFnc(CWnd *pWnd){
	 return ((CTMPhieuSoKetTruocMoDlg*)pWnd)->OnSavePhieuSoKetTruocMoDlg();
} 
static int _OnCancelPhieuSoKetTruocMoDlgFnc(CWnd *pWnd){
	 return ((CTMPhieuSoKetTruocMoDlg*)pWnd)->OnCancelPhieuSoKetTruocMoDlg();
}
static int _OnListSelectAllFnc(CWnd *pWnd){
	return ((CTMPhieuSoKetTruocMoDlg*)pWnd)->OnListSelectAll();
} 
static int _OnListUnselectAllFnc(CWnd *pWnd){
	return ((CTMPhieuSoKetTruocMoDlg*)pWnd)->OnListUnselectAll();
}

static void _OnPatientListSelendokFnc(CWnd *pWnd)
{
	((CTMPhieuSoKetTruocMoDlg *)pWnd)->OnPatientListSelendok();
}

static long _OnPatientListLoadDataFnc(CWnd *pWnd)
{
	return ((CTMPhieuSoKetTruocMoDlg *)pWnd)->OnPatientListLoadData();
}

CTMPhieuSoKetTruocMoDlg::CTMPhieuSoKetTruocMoDlg(CWnd *pParent, int nMode, long nDocNo, int nRefIdx, long nOrderID):
	CGuiDialog(pParent)
{
		CGuiDialog::SetMode(nMode);
		m_nDocumentNo = nDocNo;
		m_nRefIdx = 1;
		m_nOrderID = nOrderID;
	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CTMPhieuSoKetTruocMoDlg::~CTMPhieuSoKetTruocMoDlg(){
}
void CTMPhieuSoKetTruocMoDlg::OnCreateComponents(){
	m_wndParaclinicalInformation.Create(this, _T("Paraclinical Information"), 4, 5, 904, 565);
	m_wndPatientNoLabel.Create(this, _T("Số Hồ Sơ"), 10, 29, 65, 54);
	m_wndPatientList.Create(this,70, 29, 343, 54); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 373, 30, 493, 55);
	m_wndFromDate.Create(this,498, 30, 633, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 639, 30, 759, 55);
	m_wndToDate.Create(this,764, 30, 899, 55); 
	m_wndList.Create(this,10, 60, 900, 560);
	m_wndList.SetCheckBox(TRUE);
	m_wndCLSTheoMau.Create(this, _T("Chỉ lấy CLS trong mẫu"), 10, 570, 200, 595);
	m_wndCLSTheoCTM.Create(this, _T("Chỉ lấy CLS trong mẫu CTM"), 210, 570, 400, 595);
	m_wndSave.Create(this, _T("Save"), 735, 570, 815, 595);
	m_wndCancel.Create(this, _T("Cancel"), 820, 570, 900, 595);

}
void CTMPhieuSoKetTruocMoDlg::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
// 	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
// 	m_wndFromDate.SetCheckValue(true);
// 	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
// 	m_wndToDate.SetCheckValue(true);

	m_HMS_BEFOREOPTTbl.SetTableName(_T("HMS_BEFOREOPT"));
	
	m_HMS_BEFOREOPTTbl.AddField(_T("HBO_DOCNO"), dfLong, 128); 
	m_HMS_BEFOREOPTTbl.AddField(_T("HBO_REFIDX"), dfInteger, 128); 
	m_HMS_BEFOREOPTTbl.AddField(_T("HBO_ORDERID"), dfLong, 128); 
	m_HMS_BEFOREOPTTbl.AddField(_T("HBO_LINE"), dfInteger, 128); 
	m_HMS_BEFOREOPTTbl.AddField(_T("HBO_DESC"), dfText, 1024); 
	m_HMS_BEFOREOPTTbl.AddField(_T("HBO_RESULT"), dfText, 512);
	m_HMS_BEFOREOPTTbl.AddField(_T("HBO_ORDERLINECLS"), dfText, 128);

	m_wndList.InsertColumn(0, _T("STT"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(1, _T("Group Name"), CFMT_TEXT, 200);
	m_wndList.InsertColumn(2, _T("Desc"), CFMT_TEXT, 300);
	m_wndList.InsertColumn(3, _T("Unit"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(4, _T("Qty"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(5, _T("Relust"), CFMT_TEXT, 300);
	m_wndList.InsertColumn(6, _T("OrderlineCLS"), CFMT_TEXT, 0);
	m_wndList.InsertColumn(7, _T("Line"), CFMT_NUMBER, 0);
	m_wndList.InsertColumn(8, _T("ItemId"), CFMT_TEXT, 100);

	m_wndPatientList.InsertColumn(0, _T("ID"), CFMT_TEXT, 0);
	m_wndPatientList.InsertColumn(1, _T("Số HS"), CFMT_TEXT, 80);
	m_wndPatientList.InsertColumn(2, _T("Ngày vào"), CFMT_TEXT, 120);
	m_wndPatientList.InsertColumn(3, _T("Ngày ra"), CFMT_TEXT, 120);
	m_wndPatientList.InsertColumn(4, _T("Ngày vào"), CFMT_TEXT, 0);
	m_wndPatientList.InsertColumn(5, _T("Ngày ra"), CFMT_TEXT, 0);
	m_wndPatientList.InsertColumn(6, _T("Khoa"), CFMT_TEXT, 80);

}
void CTMPhieuSoKetTruocMoDlg::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Select All"), _OnListSelectAllFnc);
	m_wndList.AddEvent(2, _T("Unselect All"), _OnListUnselectAllFnc);
	m_wndCLSTheoMau.SetEvent(WE_CLICK, _OnCLSTheoMauSelectFnc);
	m_wndCLSTheoCTM.SetEvent(WE_CLICK, _OnCLSTheoCTMSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T(" 00:00:00");
	m_szToDate += _T(" 23:59:59");
	m_bFromToDate = FALSE;

	m_wndPatientList.SetEvent(WE_SELENDOK, _OnPatientListSelendokFnc);
	m_wndPatientList.SetEvent(WE_LOADDATA, _OnPatientListLoadDataFnc);   
	
	int nMode = GetMode();
	SetMode(nMode);
	OnListLoadData();
    OnPatientListLoadData();
	

}
void CTMPhieuSoKetTruocMoDlg::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Check(pDX, m_wndCLSTheoMau.GetDlgCtrlID(), m_bCLSTheoMau);
	DDX_Check(pDX, m_wndCLSTheoCTM.GetDlgCtrlID(), m_bCLSTheoCTM);
	DDX_TextEx(pDX, m_wndPatientList.GetDlgCtrlID(), m_szPatientListKey);


}
void CTMPhieuSoKetTruocMoDlg::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("FromDate")] =  m_szFromDate;
	m_jData[_T("ToDate")] =  m_szToDate;
	}
	else
	{
			
	m_jData[_T("FromDate")].GetValue(m_szFromDate);
	m_jData[_T("ToDate")].GetValue(m_szToDate);
	}

}
void CTMPhieuSoKetTruocMoDlg::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CTMPhieuSoKetTruocMoDlg::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CTMPhieuSoKetTruocMoDlg::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_bCLSTheoMau = TRUE;
	m_bCLSTheoCTM = FALSE;
	

}
int CTMPhieuSoKetTruocMoDlg::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
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
 			EnableButtons(TRUE, 0, 1, 2, 3, 4, -1);
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
		m_szPatientListKey = long2str(m_nDocumentNo);
        m_wndFromDate.SetFocus();
 		UpdateData(FALSE);
 		return nOldMode;
}
/*void CTMPhieuSoKetTruocMoDlg::OnFromDateChange(){
	
} */
/*void CTMPhieuSoKetTruocMoDlg::OnFromDateSetfocus(){
	
} */
/*void CTMPhieuSoKetTruocMoDlg::OnFromDateKillfocus(){
	
} */
int CTMPhieuSoKetTruocMoDlg::OnFromDateCheckValue(){
	m_bFromToDate = TRUE;
	OnListLoadData();
	return 0;
} 
/*void CTMPhieuSoKetTruocMoDlg::OnToDateChange(){
	
} */
/*void CTMPhieuSoKetTruocMoDlg::OnToDateSetfocus(){
	
} */
/*void CTMPhieuSoKetTruocMoDlg::OnToDateKillfocus(){
	
} */
int CTMPhieuSoKetTruocMoDlg::OnToDateCheckValue(){
	m_bFromToDate = TRUE;
	OnListLoadData();
	return 0;
}
int CTMPhieuSoKetTruocMoDlg::OnListSelectAll(){
	for (int i =0; i < m_wndList.GetItemCount(); i++)
	{
		m_wndList.SetCheck(i, TRUE);
	}
	return 0;
} 
int CTMPhieuSoKetTruocMoDlg::OnListUnselectAll(){
	for (int i =0; i < m_wndList.GetItemCount(); i++)
	{
		m_wndList.SetCheck(i, FALSE);
	}
	return 0;
} 
void CTMPhieuSoKetTruocMoDlg::OnListDblClick(){

} 
void CTMPhieuSoKetTruocMoDlg::OnListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

} 
int CTMPhieuSoKetTruocMoDlg::OnListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 

long CTMPhieuSoKetTruocMoDlg::OnListLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);
	CRecord rs(&pMF->m_db);
	CRecord rsl(&pMF->m_db);
	CString szSQL, tmpStr, szWhere, szCheck, szWhereCLS, szWhereCDHA;
	int nItem = 0, nIndex = 0;
	long nOID;
	m_wndList.BeginLoad();
	
	if(m_bFromToDate == TRUE)
		{
			szWhere.AppendFormat(_T(" AND hpc_orderdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
				_T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
		}

	if(m_bCLSTheoMau)
		{
			szWhereCLS.AppendFormat(_T(" AND hpcl_itemid IN(") \
				_T(" 'B1G0000770', 'B1G0011548', 'B1G0002289', 'B1G0011549', 'B1G0002290', 'B1G0000748', 'B1G0000752', 'B1G0000756', 'B1G0000758', 'B1G0012997', 'B1G0000762', 'B1G0000765',") \
				_T(" 'B1G0000767', 'B1G0000768', 'B1G0000769', 'B1G0000771', 'B1G0000772', 'B1G0000781', 'B1G0000782', 'B1G0000784', 'B1G0015232', 'B1G0000786', 'B1G0015233', 'B1G0000788',") \
				_T(" 'B1G0000790', 'B1G0015235', 'B1G0000791', 'B1G0000792', 'B1G0000793', 'B1G0000794', 'B1G0000795', 'B1G0015241', 'B1G0011532', 'B1G0011533', 'B1G0011534', 'B1G0011535',") \
				_T(" 'B1G0011536', 'B1G0011537', 'B1G0011538', 'B1G0011539', 'B1G0011540', 'B1G0011541', 'B1G0011542', 'B1G0011543', 'B1G0015480', 'B1G0015481', 'B1G0015482',") \
				_T(" 'B110010839', 'B110002200', 'B110002126',") \
				_T(" 'B110010840', 'B110002201', 'B110002127',") \
				_T(" 'B110010841', 'B110002202', 'B110002128',") \
				_T(" 'B110010826', 'B110002199', 'B110002125',") \
				_T(" 'B110010827', 'B110002212', 'B110002138',") \
				_T(" 'B110010828', 'B110002213', 'B110002139',") \
				_T(" 'B110010849', 'B110002210', 'B110002136',") \
				_T(" 'B12009696', 'B120000213',") \
				_T(" 'B12009748', 'B120000217',") \
				_T(" 'B12009677', 'B120000208',") \
				_T(" 'B120011391', 'B120000236',") \
				_T(" 'B120011390', 'B120000238',") \
				_T(" 'B12009698', 'B120000233',") \
				_T(" 'B12009659', 'B120000568',") \
				_T(" 'B12009726', 'B120000584',") \
				_T(" 'B12009647', 'B120000575',") \
				_T(" 'B140002613', 'B140012703', 'B140012704', 'B140002161', 'B140002160', 'B140002166', 'B140011685',") \
				_T(" 'B140002919', 'B140000125', 'B140000117', 'B140012718', 'B140012719', 'B140012725', 'B140015374',") \
				_T(" 'B140012716', 'B140000090', 'B140000085', 'B140012998',") \
				_T(" 'B110000411', 'B110012743', 'B110002499',") \
				_T(" 'B110002939', 'B11002965', 'B110015679', 'B110012738', 'B110003001', 'B110002672', 'B110012733',") \
				_T(" 'B110002490', 'B110012730', 'B110002974', 'B110002971', 'B110015513', 'B110015530', 'B110015523', 'B110015517', 'B110015520', 'B110015527', 'B110002929', 'B110002957', 'B110002926', 'B110002932',") \
				_T(" 'B12009650', 'B120000576',") \
				_T(" 'B140002164', 'B140012894',") \
				_T(" 'B150011406', 'B150015336',") \
				_T(" 'B111020156', 'B111020157','B111020159','B111020160','B111020161','B140020354','B140019373'") \
				_T(" ,'B140020353','B140019375')"));

			szWhereCDHA.AppendFormat(_T(" AND hpcl_itemid IN(") \
				_T(" 'B330012740', 'B330012796', 'B330000153', 'B330000336',") \
				_T(" 'B320002183', 'B320010423', 'B320010422',") \
				_T(" 'B210000196', 'B210010763',") \
				_T(" 'B320002253', 'B320010389'") \
				_T(" )"));
		}

		if(m_bCLSTheoCTM)
		{
			szWhereCLS.AppendFormat(_T(" AND hpcl_itemid IN(") \
				_T(" 'B110010826', 'B110002199', 'B110002125',") \
				_T(" 'B110010839', 'B110002200', 'B110002126',") \
				_T(" 'B110010849', 'B110002210', 'B110002136',") \
				_T(" 'B140002613', 'B140012703', 'B140012704', 'B140002161', 'B140002160', 'B140002166', 'B140011685',") \
				_T(" 'B12009696', 'B120000213',") \
				_T(" 'B12009748', 'B120000217',") \
				_T(" 'B12009677', 'B120000208',") \
				_T(" 'B120011391', 'B120000236',") \
				_T(" 'B120011390', 'B120000238',") \
				_T(" 'B110002490', 'B110012730', 'B110002974', 'B110002971', 'B110015513', 'B110015530', 'B110015523', 'B110015517', 'B110015520', 'B110015527', 'B110002929', 'B110002957', 'B110002926', 'B110002932',") \
				_T(" 'B110002939', 'B11002965', 'B110015679', 'B110012738', 'B110003001', 'B110002672', 'B110012733',") \
				_T(" 'B110000411', 'B11009554', 'B110012743', 'B110002499',") \
				_T(" 'B140002919', 'B140000125', 'B140000117', 'B140012718', 'B140012719', 'B140012725', 'B140015374',") \
				_T(" 'B140012716', 'B140000090', 'B140000085', 'B140012998','B140020354',") \
				_T(" 'B140019373','B140020353','B140019375')"));

			szWhereCDHA.AppendFormat(_T(" AND (SUBSTR(hpcl_itemid, 1, 3) IN(") \
				_T(" 'B22') OR hpcl_itemid IN(") \
				_T(" 'B330012740', 'B330012796', 'B330000153', 'B330000336',") \
				_T(" 'B320002183', 'B320010423', 'B320010422'") \
				_T(" ))"));
		}

	//Xet nghiem
	szSQL.Format(_T(" SELECT hpc_orderid,") \
				_T("   hpc_groupid,") \
				_T("   TRIM(hfg_name || '     -     ' || TO_CHAR(hpc_orderdate, 'DD/MM/YYYY HH24:MI:SS')) as hpc_groupname, hpc_type ") \
				_T(" FROM ( SELECT hpc_docno, hpc_orderid, hpc_groupid, hpc_refidx, 10000 AS hpc_type, hpc_orderdate FROM hms_testorder ") \
				_T(" UNION ALL ") \
				_T(" SELECT hpc_docno, hpc_orderid, hpc_groupid, hpc_refidx, 20000, hpc_orderdate AS hpc_type FROM hms_pacsorder ) ") \
				_T("   ,hms_fee_group") \
				_T(" WHERE hpc_docno  = %ld ") \
				_T(" AND hpc_groupid  = hfg_id %s") \
				_T(" ORDER BY hfg_index2,") \
				_T("   hfg_index, hpc_orderid"), m_nDocumentNo, szWhere);
	//_T(" AND hpc_refidx = %d ") 	

	rs.ExecSQL(szSQL);

	CString szGroupName;
	int nType = 0;
	
	nIndex = 1;	
	while(!rs.IsEOF())
	{
		rs.GetValue(_T("hpc_orderid"), nOID);
		rs.GetValue(_T("hpc_type"), nType);
		if(nType == 10000)
		{
			szSQL.Format(_T(" SELECT hpcl_orderlineid AS orderline_id,") \
			_T("   hpcl_itemid           AS itemid,") \
			_T("   hfl_name              AS testname,") \
			_T("   hfl_unit              AS unit,") \
			_T("   hpcl_qty              AS qty,") \
			_T("   hpcl_result           AS testresult,") \
			_T("   hfl_index1           AS normindex,") \
			_T("   hpcl_note             AS testnote") \
			_T(" FROM hms_testorderline") \
			_T(" LEFT JOIN hms_fee_list") \
			_T(" ON(hfl_feeid = hpcl_itemid)") \
			_T(" WHERE hpcl_orderid = %ld and hpcl_status = 'T' ") \
			_T(" %s") \
			_T(" ORDER BY hpcl_orderlineid"), nOID, szWhereCLS);
			rsl.ExecSQL(szSQL);
			//_msg(_T("%s"), szSQL);			
			while(!rsl.IsEOF())
			{
				m_wndList.AddItems(
					int2str(nIndex++),
				    rs.GetValue(_T("hpc_groupname")),
					rsl.GetValue(_T("testname")),
					rsl.GetValue(_T("unit")),
					rsl.GetValue(_T("qty")),
					rsl.GetValue(_T("testresult")), 
					rsl.GetValue(_T("orderline_id")),
					int2str(nType),
					rsl.GetValue(_T("itemid")),
					NULL);
				rsl.MoveNext();
			}
		}
		else
		{
			szSQL.Format(_T(" SELECT hpcl_orderlineid AS orderline_id,") \
			_T("   hpcl_itemid           AS itemid,") \
			_T("   hfl_name              AS testname,") \
			_T("   hfl_unit              AS unit,") \
			_T("   hpcl_qty              AS qty,") \
			_T("   tbl.hpr_desc          AS testresult,") \
			_T("   hfl_index1            AS normindex,") \
			_T("   hpcl_note             AS testnote") \
			_T(" FROM hms_pacsorderline") \
			_T(" LEFT JOIN") \
			_T(" ( SELECT * FROM hms_pacs_result WHERE lower(trim(hpr_name))='conclusion'") \
			_T(" ) tbl") \
			_T(" ON(tbl.hpr_orderid=hpcl_orderid") \
			_T(" AND tbl.hpr_itemid=hpcl_itemid)") \
			_T(" LEFT JOIN hms_fee_list") \
			_T(" ON(hfl_feeid = hpcl_itemid)") \
			_T(" WHERE hpcl_orderid = %ld and hpcl_status = 'T' ") \
			_T(" %s") \
			_T(" ORDER BY hpcl_orderlineid"), nOID, szWhereCDHA);
			
			rsl.ExecSQL(szSQL);
			while(!rsl.IsEOF())
			{
				m_wndList.AddItems(
					int2str(nIndex++),
					rs.GetValue(_T("hpc_groupname")),
					rsl.GetValue(_T("testname")),
					rsl.GetValue(_T("unit")),
					rsl.GetValue(_T("qty")),
					rsl.GetValue(_T("testresult")), 
					rsl.GetValue(_T("orderline_id")),
					int2str(nType),
					rsl.GetValue(_T("itemid")),
					NULL);
				rsl.MoveNext();
			}
		}
		rs.MoveNext();
	}

	szSQL.Format(_T("SELECT hbo_orderlinecls FROM hms_beforeopt") \
		_T(" WHERE hbo_docno = %ld") \
		_T(" AND hbo_orderid = %ld"), m_nDocumentNo, m_nOrderID);
	
	rs.ExecSQL(szSQL);
	while(!rs.IsEOF())
	{
		rs.GetValue(_T("hbo_orderlinecls"), tmpStr);
		for (int i =0; i < m_wndList.GetItemCount(); i++)
		{
			if(tmpStr == m_wndList.GetItemText(i, 6))
				m_wndList.SetCheck(i, TRUE);
		}
		rs.MoveNext();
	}
	m_wndList.EndLoad();
	ToKeepNewResult();
	return 0;
}
void CTMPhieuSoKetTruocMoDlg::OnCLSTheoMauSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);
	m_bCLSTheoCTM = FALSE;
	UpdateData(FALSE);
	OnListLoadData();
} 
void CTMPhieuSoKetTruocMoDlg::OnCLSTheoCTMSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);
	m_bCLSTheoMau = FALSE;
	UpdateData(FALSE);
	OnListLoadData();
} 
void CTMPhieuSoKetTruocMoDlg::OnSaveSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	if(OnSavePhieuSoKetTruocMoDlg() > 0)
	{

	}
} 
void CTMPhieuSoKetTruocMoDlg::OnCancelSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
	
} 
int CTMPhieuSoKetTruocMoDlg::OnAddPhieuSoKetTruocMoDlg(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CTMPhieuSoKetTruocMoDlg::OnEditPhieuSoKetTruocMoDlg(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CTMPhieuSoKetTruocMoDlg::OnDeletePhieuSoKetTruocMoDlg(){
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
 		OnCancelPhieuSoKetTruocMoDlg();
 	}
	return 0;
}
int CTMPhieuSoKetTruocMoDlg::OnSavePhieuSoKetTruocMoDlg(){
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	UpdateData(TRUE);
	CRecord rs(&pMF->m_db);
	CString szSQL, szDesc, szResult, szOrderlineCLS;
	int nLine = 1, nType = 0;
	//Gán lại số hồ sơ    
    m_nDocumentNo = pMF->m_nDocumentNo;

	szSQL.Format(_T("SELECT COUNT(*) FROM hms_beforeopt WHERE hbo_docno = %ld AND hbo_orderid = %ld"), m_nDocumentNo, m_nOrderID);
	rs.ExecSQL(szSQL);
    //_msg(_T("%s"), szSQL);

	if (rs.GetIntValue() > 0)
	{
		szSQL.Format(_T("DELETE hms_beforeopt ") \
			_T("WHERE hbo_docno = %ld AND hbo_orderid = %ld"), m_nDocumentNo, m_nOrderID);
		pMF->ExecSQL(szSQL);
		//_msg(_T("%s"), szSQL);
	}

	for (int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		if (m_wndList.GetCheck(i))
		{
			if (!m_wndList.GetItemText(i, 2).IsEmpty())
				szDesc = m_wndList.GetItemText(i, 2);
			else
				szDesc = _T("");
			if (!m_wndList.GetItemText(i, 5).IsEmpty())
				szResult = m_wndList.GetItemText(i, 5);
			else
				szResult = _T("");
			if (!m_wndList.GetItemText(i, 6).IsEmpty())
				szOrderlineCLS = m_wndList.GetItemText(i, 6);
			else
				szOrderlineCLS = _T("");
			if (!m_wndList.GetItemText(i, 7).IsEmpty())
				nType = str2int(m_wndList.GetItemText(i, 7));
			else
				nType = 30000;

			m_HMS_BEFOREOPTTbl.SetValue(_T("HBO_DOCNO"), m_nDocumentNo); 
			m_HMS_BEFOREOPTTbl.SetValue(_T("HBO_REFIDX"), m_nRefIdx); 
			m_HMS_BEFOREOPTTbl.SetValue(_T("HBO_ORDERID"), m_nOrderID); 
			m_HMS_BEFOREOPTTbl.SetValue(_T("HBO_LINE"), nType+nLine++); 
			m_HMS_BEFOREOPTTbl.SetValue(_T("HBO_DESC"), szDesc); 
			m_HMS_BEFOREOPTTbl.SetValue(_T("HBO_RESULT"), szResult); 
			m_HMS_BEFOREOPTTbl.SetValue(_T("HBO_ORDERLINECLS"), szOrderlineCLS); 
			szSQL = m_HMS_BEFOREOPTTbl.GetInsertSQL();
			pMF->ExecSQL(szSQL);
		}
	}

	CGuiDialog::OnOK();
	return 0;
}
int CTMPhieuSoKetTruocMoDlg::OnCancelPhieuSoKetTruocMoDlg(){
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
int CTMPhieuSoKetTruocMoDlg::OnPhieuSoKetTruocMoDlgListLoadData(){
	return 0;
}
void CTMPhieuSoKetTruocMoDlg::ToKeepNewResult(){
	CArray<CString, CString> aItemID;
	CArray<int, int> aOldResultLine, aTmp;
	CString szItemID;
	bool bAdded = false;
	int nDeleteCount = 0, nTmp = 0;
	for (int i = 0; i < m_wndList.GetItemCount(); i++){
		bAdded = false;
		szItemID = m_wndList.GetItemText(i, 8);
		for (int j = 0; j < aItemID.GetCount(); j++)
			if (szItemID == aItemID.GetAt(j)){
				bAdded = true;
				break;
			}
		if (!bAdded) aItemID.Add(szItemID);
	}
	for (int i = 0; i < aItemID.GetCount(); i++){
		aTmp.RemoveAll();
		szItemID = aItemID.GetAt(i);
		for (int j = 0; j < m_wndList.GetItemCount(); j++)
			if (m_wndList.GetItemText(j, 8) == szItemID) aTmp.Add(j);
		for (int k = 0; k < aTmp.GetCount() - 1; k++)
			aOldResultLine.Add(aTmp.GetAt(k));
	}
	for (int i = 0; i < aOldResultLine.GetCount(); i++)
		for (int j = i + 1; j < aOldResultLine.GetCount(); j++) 
			if (aOldResultLine[i] > aOldResultLine[j]){
				nTmp = aOldResultLine[i];
				aOldResultLine[i] = aOldResultLine[j];
				aOldResultLine[j] = nTmp;
			}	
	for (int i = 0; i < aOldResultLine.GetCount(); i++)
		m_wndList.DeleteItem(aOldResultLine.GetAt(i)-i);
}

void CTMPhieuSoKetTruocMoDlg::OnPatientListSelendok()
{
    CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	m_nDocumentNo = str2long(m_wndPatientList.GetCurrent(0));
	if (m_nDocumentNo != pMF->m_nDocumentNo)
	{
		m_szFromDate = m_wndPatientList.GetCurrent(4) += _T(" 00:00");
		m_szToDate = m_wndPatientList.GetCurrent(5) += _T(" 23:59");
	}
    else
    {
       m_szFromDate = pMF->GetSysDate() += _T(" 00:00");
	   m_szToDate = pMF->GetSysDate() += _T(" 23:59");
    }   
	
    UpdateData(false);
    OnListLoadData();
  
}
long CTMPhieuSoKetTruocMoDlg::OnPatientListLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndPatientList.IsSearchKey() && !m_szPatientListKey.IsEmpty())
	{
		szWhere.Format(_T(" and hd_docno='%s' "), m_szPatientListKey);
	};
	m_wndPatientList.DeleteAllItems(); 
	int nCount = 0;	

	szSQL.Format(_T(" SELECT ") \
				_T(" hd_docno as docno,") \
				_T(" case when NVL(hcr_docno, 0) > 0 then to_char(hcr_admitdate, 'DD/MM/YYYY') ") \
				_T(" else to_char(hd_admitdate, 'DD/MM/YYYY') end as ngayvao,") \
				_T(" case when NVL(hcr_docno, 0) > 0 and hcr_status='T' ") \
				_T(" then to_char(hcr_dischargedate, 'DD/MM/YYYY')") \
				_T(" when NVL(hcr_docno, 0) > 0 and hcr_status <> 'T' then NULL") \
				_T(" else to_char(hd_enddate, 'DD/MM/YYYY') end as ngayra,") \
				_T(" case when NVL(hcr_docno, 0) > 0 and hcr_dischargedept is not null then hcr_dischargedept") \
				_T(" else hd_enddept end as khoa,") \

				_T(" case when NVL(hcr_docno, 0) > 0 then to_char(hcr_admitdate, 'YYYY/MM/DD') ") \
				_T(" else to_char(hd_admitdate, 'YYYY/MM/DD') end as ngayvao2,") \
				_T(" case when NVL(hcr_docno, 0) > 0 and hcr_status='T' ") \
				_T(" then to_char(hcr_dischargedate, 'YYYY/MM/DD')") \
				_T(" when NVL(hcr_docno, 0) > 0 and hcr_status <> 'T' then NULL") \
				_T(" else to_char(hd_enddate, 'YYYY/MM/DD') end as ngayra2") \

				_T(" from hms_doc") \
				_T(" LEFT JOIN hms_clinical_record") \
				_T(" ON (hd_docno = hcr_docno)") \
				_T(" WHERE hd_patientno=%ld ") \
				_T(" order by hd_docno desc"), pMF->m_nPatientNo, szWhere);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF())
	{ 
		m_wndPatientList.AddItems
			(
			rs.GetValue(_T("docno")),
			rs.GetValue(_T("docno")),
			rs.GetValue(_T("ngayvao")),
			rs.GetValue(_T("ngayra")),			
			rs.GetValue(_T("ngayvao2")),
			rs.GetValue(_T("ngayra2")),
			rs.GetValue(_T("khoa")),NULL);
		rs.MoveNext();
	}
	return nCount;	
}