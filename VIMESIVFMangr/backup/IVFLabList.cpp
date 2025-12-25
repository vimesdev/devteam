#include "IVFLabList.h"
#include "MainFrm.h"
#include "IVFLabPhieuTruDialog.h"
#include "IVFLabPhieuRaDialog.h"
#include "IVFSettingDialog.h"
#include "IVFSettingThungDialog.h"
#include "IVFPhieuTruTTDialog.h"
#include "IVFStorageView_v2.h"

/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CIVFLabList *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CIVFLabList *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CIVFLabList *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CIVFLabList *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CIVFLabList *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CIVFLabList *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CIVFLabList *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CIVFLabList *)pWnd)->OnToDateCheckValue();
} 
static void _OnTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CIVFLabList* )pWnd)->OnTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTypeSelendokFnc(CWnd *pWnd){
	((CIVFLabList *)pWnd)->OnTypeSelendok();
}
/*static void _OnTypeSetfocusFnc(CWnd *pWnd){
	((CIVFLabList *)pWnd)->OnTypeKillfocus();
}*/
/*static void _OnTypeKillfocusFnc(CWnd *pWnd){
	((CIVFLabList *)pWnd)->OnTypeKillfocus();
}*/
static long _OnTypeLoadDataFnc(CWnd *pWnd){
	return ((CIVFLabList *)pWnd)->OnTypeLoadData();
}
/*static void _OnTypeAddNewFnc(CWnd *pWnd){
	((CIVFLabList *)pWnd)->OnTypeAddNew();
}*/
/*static void _OnDocumentNoChangeFnc(CWnd *pWnd){
	((CIVFLabList *)pWnd)->OnDocumentNoChange();
} */
/*static void _OnDocumentNoSetfocusFnc(CWnd *pWnd){
	((CIVFLabList *)pWnd)->OnDocumentNoSetfocus();} */ 
/*static void _OnDocumentNoKillfocusFnc(CWnd *pWnd){
	((CIVFLabList *)pWnd)->OnDocumentNoKillfocus();
} */
static int _OnDocumentNoCheckValueFnc(CWnd *pWnd){
	return ((CIVFLabList *)pWnd)->OnDocumentNoCheckValue();
} 
static void _OnRefreshSelectFnc(CWnd *pWnd){
	CIVFLabList *pVw = (CIVFLabList *)pWnd;
	pVw->OnRefreshSelect();
}

static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CIVFLabList*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CIVFLabList*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CIVFLabList*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CIVFLabList*)pWnd)->OnListDeleteItem();
} 
static int _OnListCreatePhieutruItemFnc(CWnd *pWnd){
	 return ((CIVFLabList*)pWnd)->OnListCreatePhieutru();
}
static int _OnListCreatePhieuraItemFnc(CWnd *pWnd){
	 return ((CIVFLabList*)pWnd)->OnListCreatePhieura();
}

static int _OnListEditItemFnc(CWnd *pWnd){
	 return ((CIVFLabList*)pWnd)->OnListEditItem();
}

static int _OnListRollbackItemFnc(CWnd *pWnd){
	 return ((CIVFLabList*)pWnd)->OnListRollbackItem();
}


static void _OnStorageSelectFnc(CWnd *pWnd){
	CIVFLabList *pVw = (CIVFLabList *)pWnd;
	pVw->OnStorageSelect();
} 

static void _OnSettingSelectFnc(CWnd *pWnd){
	CIVFLabList *pVw = (CIVFLabList *)pWnd;
	pVw->OnSettingSelect();
}

static void _OnWaitingSelectFnc(CWnd *pWnd){
	  ((CIVFLabList*)pWnd)->OnWaitingSelect();
}
static void _OnPerformedSelectFnc(CWnd *pWnd){
	  ((CIVFLabList*)pWnd)->OnPerformedSelect();
}


static int _OnAddIVFLabListFnc(CWnd *pWnd){
	 return ((CIVFLabList*)pWnd)->OnAddIVFLabList();
} 
static int _OnEditIVFLabListFnc(CWnd *pWnd){
	 return ((CIVFLabList*)pWnd)->OnEditIVFLabList();
} 
static int _OnDeleteIVFLabListFnc(CWnd *pWnd){
	 return ((CIVFLabList*)pWnd)->OnDeleteIVFLabList();
} 
static int _OnSaveIVFLabListFnc(CWnd *pWnd){
	 return ((CIVFLabList*)pWnd)->OnSaveIVFLabList();
} 
static int _OnCancelIVFLabListFnc(CWnd *pWnd){
	 return ((CIVFLabList*)pWnd)->OnCancelIVFLabList();
} 
CIVFLabList::CIVFLabList(){

	m_nDlgWidth = 805;
	m_nDlgHeight = 605;
	SetDefaultValues();
}
CIVFLabList::~CIVFLabList(){
}
void CIVFLabList::OnCreateComponents(){
	
	m_wndSearchInformation.Create(this, _T("Search Information"), 5, 5, 1015, 60);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 110, 55);
	m_wndFromDate.Create(this,115, 30, 215, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 220, 30, 320, 55);
	m_wndToDate.Create(this,325, 30, 425, 55); 
	m_wndTypeLabel.Create(this, _T("Type"), 430, 30, 530, 55);
	m_wndType.Create(this,535, 30, 750, 55); 
	m_wndDocumentNoLabel.Create(this, _T("Document No"), 755, 30, 835, 55);
	m_wndDocumentNo.Create(this,840, 30, 925, 55); 
	m_wndRefresh.Create(this, _T("Refresh"), 930, 30, 1010, 55);
	m_wndList.Create(this,5, 65, 1015, 580); 
	m_wndStorage.Create(this, _T("Kho tr?"), 815, 585, 905, 607);
	m_wndSetting.Create(this, _T("Setting"), 910, 585, 1010, 607);
	m_wndWaiting.Create(this, _T("Waiting"), 5, 585, 105, 610);
	m_wndPerformed.Create(this, _T("Performed"), 110, 585, 210, 610);

}
void CIVFLabList::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
	m_wndType.SetCheckValue(true);
	m_wndType.LimitText(35);
	m_wndSetting.ModifyStyle(WS_TABSTOP, 0);
	m_wndStorage.ModifyStyle(WS_TABSTOP, 0);

	m_wndStorage.SetState(!(m_wndStorage.GetState() & 0x0004));

	m_wndList.InsertColumn(0, _T("Sá»‘ phiáº¿u"), CFMT_NUMBER, 90);
	m_wndList.InsertColumn(1, _T("Sá»‘ há»“ sÆ¡"), CFMT_NUMBER, 90);
	m_wndList.InsertColumn(2, _T("Há» vÃ  tÃªn"), CFMT_TEXT, 150);
	m_wndList.InsertColumn(3, _T("NÄƒm sinh"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(4, _T("Sex"), CFMT_TEXT, 30);
	m_wndList.InsertColumn(5, _T("Date"), CFMT_DATETIME, 120);
	m_wndList.InsertColumn(6, _T("Description"), CFMT_TEXT, 220);
	m_wndList.InsertColumn(7, _T("Type"), CFMT_TEXT, 90);
	m_wndList.InsertColumn(8, _T("Status"), CFMT_TEXT, 90);
	m_wndList.InsertColumn(9, _T(""), CFMT_TEXT, 0);	//Ma loai phieu


	m_wndType.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndType.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CIVFLabList::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndType.SetEvent(WE_SELENDOK, _OnTypeSelendokFnc);
	//m_wndType.SetEvent(WE_SETFOCUS, _OnTypeSetfocusFnc);
	//m_wndType.SetEvent(WE_KILLFOCUS, _OnTypeKillfocusFnc);
	m_wndType.SetEvent(WE_SELCHANGE, _OnTypeSelectChangeFnc);
	m_wndType.SetEvent(WE_LOADDATA, _OnTypeLoadDataFnc);
	//m_wndType.SetEvent(WE_ADDNEW, _OnTypeAddNewFnc);
	//m_wndDocumentNo.SetEvent(WE_CHANGE, _OnDocumentNoChangeFnc);
	//m_wndDocumentNo.SetEvent(WE_SETFOCUS, _OnDocumentNoSetfocusFnc);
	//m_wndDocumentNo.SetEvent(WE_KILLFOCUS, _OnDocumentNoKillfocusFnc);
	m_wndDocumentNo.SetEvent(WE_CHECKVALUE, _OnDocumentNoCheckValueFnc);
	m_wndRefresh.SetEvent(WE_CLICK, _OnRefreshSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	
	m_wndList.AddEvent(1, _T("Táº¡o phiáº¿u trá»¯"), _OnListCreatePhieutruItemFnc);
	m_wndList.AddEvent(0, _T("-"));
	m_wndList.AddEvent(2, _T("Táº¡o phiáº¿u rÃ£"), _OnListCreatePhieuraItemFnc);
	m_wndList.AddEvent(0, _T("-"));
	m_wndList.AddEvent(3, _T("Sá»­a phiáº¿u"), _OnListEditItemFnc);
	m_wndList.AddEvent(0, _T("-"));
	m_wndList.AddEvent(4, _T("KhÃ´i phá»¥c láº¡i"), _OnListRollbackItemFnc);


	m_wndStorage.SetEvent(WE_CLICK, _OnStorageSelectFnc);
	m_wndSetting.SetEvent(WE_CLICK, _OnSettingSelectFnc);
	m_wndWaiting.SetEvent(WE_CLICK, _OnWaitingSelectFnc);
	m_wndPerformed.SetEvent(WE_CLICK, _OnPerformedSelectFnc);
	
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szToDate += _T(" 23:59");
	UpdateData(FALSE);

	m_wndStorage.SetState(!(m_wndStorage.GetState()&0x0004));
}
void CIVFLabList::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndType.GetDlgCtrlID(), m_szTypeKey);
	DDX_Text(pDX, m_wndDocumentNo.GetDlgCtrlID(), m_nDocumentNo);
	DDX_Radio(pDX, m_wndWaiting.GetDlgCtrlID(), m_nWaiting);
	DDX_Radio(pDX, m_wndPerformed.GetDlgCtrlID(), m_nPerformed);

}
void CIVFLabList::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("FromDate")] =  m_szFromDate;
	m_jData[_T("ToDate")] =  m_szToDate;
	m_jData[_T("Type")] =  m_szTypeKey;
	m_jData[_T("DocumentNo")] =  m_nDocumentNo;
	m_jData[_T("Waiting")] =  m_nWaiting;
	m_jData[_T("Performed")] =  m_nPerformed;
	}
	else
	{
			
	m_jData[_T("FromDate")].GetValue(m_szFromDate);
	m_jData[_T("ToDate")].GetValue(m_szToDate);
	m_jData[_T("Type")].GetValue(m_szTypeKey);
	m_jData[_T("DocumentNo")].GetValue(m_nDocumentNo);
	m_jData[_T("Waiting")].GetValue(m_nWaiting);
	m_jData[_T("Performed")].GetValue(m_nPerformed);
	}

}
void CIVFLabList::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CIVFLabList::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CIVFLabList::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szTypeKey.Empty();
	m_nDocumentNo = 0;
	m_nWaiting=0;
	m_nPerformed=0;

}
int CIVFLabList::SetMode(int nMode){
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
/*void CIVFLabList::OnFromDateChange(){
	
} */
/*void CIVFLabList::OnFromDateSetfocus(){
	
} */
/*void CIVFLabList::OnFromDateKillfocus(){
	
} */
int CIVFLabList::OnFromDateCheckValue(){
	return 0;
} 
/*void CIVFLabList::OnToDateChange(){
	
} */
/*void CIVFLabList::OnToDateSetfocus(){
	
} */
/*void CIVFLabList::OnToDateKillfocus(){
	
} */
int CIVFLabList::OnToDateCheckValue(){
	return 0;
} 
void CIVFLabList::OnTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFLabList::OnTypeSelendok(){
	 
}
/*void CIVFLabList::OnTypeSetfocus(){
	
}*/
/*void CIVFLabList::OnTypeKillfocus(){
	
}*/
long CIVFLabList::OnTypeLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//Load cac loai phieu TRU, PHOI, XN, TINH TRUNG
	return pMF->LoadComboBoxList(&m_wndType, m_szTypeKey, _T("ivf_storage_loai"));
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndType.IsSearchKey() && !m_szTypeKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szTypeKey
};
	m_wndType.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndType.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CIVFLabList::OnTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CIVFLabList::OnDocumentNoChange(){
	
} */
/*void CIVFLabList::OnDocumentNoSetfocus(){
	
} */
/*void CIVFLabList::OnDocumentNoKillfocus(){
	
} */
int CIVFLabList::OnDocumentNoCheckValue(){
	return 0;
} 
void CIVFLabList::OnRefreshSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData();
	OnListLoadData();
}

void CIVFLabList::OnListDblClick(){
	int nSel = m_wndList.GetCurSel();
	if (nSel < 0)
	{
		return;
	}
	long nIdx = str2long(m_wndList.GetItemText(nSel, 0));
	long nDocNo = str2long(m_wndList.GetItemText(nSel, 2));
//	CIVFLabDialog dlg(this);
//	dlg.m_nIdx = nIdx;
//	dlg.m_nDocumentNo = nDocNo;
//	dlg.SetMode(VM_VIEW);
//	dlg.DoModal();	
} 
void CIVFLabList::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CIVFLabList::OnListDeleteItem(){

	return 0;
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	int nSel = m_wndList.GetCurSel();
	if (nSel < 0)
	{
		return -1;
	}
	long nIdx = str2long(m_wndList.GetItemText(nSel, 0));
	CString szSQL;
	
	//szSQL.Format(_T("DELETE FROM ivf_appointment WHERE IVF_APPOINTMENT_ID = %ld"), nIdx);
	int nRet = pMF->ExecSQL(szSQL);
	if (nRet > 0)
	{
		OnListLoadData();
	}
	return 0;
} 
long CIVFLabList::OnListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	m_wndList.BeginLoad(); 
	int nCount = 0, nIndex = 1;
	
	UpdateData(TRUE);
	szWhere.Format(_T(" AND trunc(hpc_orderdate) BETWEEN to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') ") \
					_T("	AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')"), m_szFromDate, m_szToDate);
	
	if (!m_szTypeKey.IsEmpty())
	{
	//	szWhere.AppendFormat(_T(" AND typeid = '%s'"), m_szTypeKey);
	}
	if (m_nDocumentNo > 0)
	{
		szWhere.AppendFormat(_T(" AND hpc_docno = %ld"), m_nDocumentNo);
	}
	szSQL.Format(_T(" SELECT") \
_T("     hpc_orderid as orderid,") \
_T("     hpcl_itemid,") \
_T("     hfl_name as description,") \
_T("     hp_surname") \
_T("     || ' '") \
_T("     || hp_midname") \
_T("     || ' '") \
_T("     || hp_firstname AS pname,") \
_T("     to_char(hp_birthdate, 'YYYY') as yob,") \
_T("     HMS_GETSEX(hp_sex) as sex,") \
_T("     hp_patientno,") \
_T("     hd_docno as docno,") \
_T("     hpc_deptid,") \
_T("     hpc_orderdate as orderdate, ilg_type as type, ilg_description ") \
_T(" FROM") \
_T("     hms_testorder left") \
_T("     JOIN hms_testorderline ON ( hpc_orderid = hpcl_orderid )") \
_T(" LEFT JOIN ivf_lab_group on(ilg_itemid = hpcl_itemid) ") \
_T("     LEFT JOIN hms_fee_list ON ( hpcl_itemid = hfl_feeid )") \
_T("     LEFT JOIN hms_doc ON ( hd_docno = hpc_docno )") \
_T("     LEFT JOIN hms_patient ON ( hd_patientno = hp_patientno )") \
_T(" WHERE ") \
_T("     hpc_groupid = 'B1H00' and ilg_itemid is not null %s "), szWhere);

_tprintf(_T("\r\n%s"), szSQL);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("orderid")), 
			rs.GetValue(_T("docno")), 
			rs.GetValue(_T("pname")), 
			rs.GetValue(_T("yob")), 
			rs.GetValue(_T("sex")), 
			rs.GetValue(_T("orderdate")), 
			rs.GetValue(_T("description")),
			rs.GetValue(_T("ilg_description")),
			_T(""),
			rs.GetValue(_T("type")),
			NULL);
		rs.MoveNext();
	}
	
	m_wndList.EndLoad(); 
	return nCount;
}


int CIVFLabList::OnListCreatePhieutru()
{
	CMainFrame* pMF = (CMainFrame*) AfxGetMainWnd();
	int nSel = m_wndList.GetCurSel();
	long nDocNo = 0;
	if (nSel < 0)
	{
		return -1;
	}
	long nId = str2long(m_wndList.GetItemText(nSel, 0));
	nDocNo = str2long(m_wndList.GetItemText(nSel, 1));
	CString szType = m_wndList.GetItemText(nSel, 9);
	if(szType == _T("TP") || szType == _T("GH"))
	{
		CIVFLabPhieuTruDialog dlg(this, nDocNo, nId);
		if(dlg.DoModal() == IDOK)
		{
			OnListLoadData();
		}
	}
	if(szType == _T("TT"))
	{
		CIVFPhieuTruTTDialog dlg(this, nDocNo, nId);
		if(dlg.DoModal() == IDOK)
		{
			OnListLoadData();
		}
	}
	return 0;
}

int CIVFLabList::OnListCreatePhieura()
{
	CMainFrame* pMF = (CMainFrame*) AfxGetMainWnd();
	int nSel = m_wndList.GetCurSel();
	long nDocNo = 0;
	if (nSel < 0)
	{
		return -1;
	}	
	nDocNo = str2long(m_wndList.GetItemText(nSel, 1));
	long nId = str2long(m_wndList.GetItemText(nSel, 0));
	
	CString szType = m_wndList.GetItemText(nSel, 9);
_tprintf(_T("\r\n%s"), szType);
	if(szType != _T("LP"))
		return 0;

	CIVFLabPhieuRaDialog dlg(this, VM_ADD);
	dlg.m_nDocumentNo = nDocNo;
	dlg.m_nId = nId;
	if(dlg.DoModal() == IDOK)
	{
		OnListLoadData();
	}
	return 0;
}


int CIVFLabList::OnListEditItem()
{
	return 0;
	int nSel = m_wndList.GetCurSel();
	if (nSel < 0)
	{
		return -1;
	}
	long nId = str2long(m_wndList.GetItemText(nSel, 0));
	long nDocNo = str2long(m_wndList.GetItemText(nSel, 1));
	CString szType = m_wndList.GetItemText(nSel, 9);
	if(szType == _T("LP"))
	{
		CIVFLabPhieuRaDialog dlg(this, VM_EDIT);
		dlg.m_nId = nId;
		if(dlg.DoModal() == IDOK)
		{
			OnListLoadData();
		}

	}
	else
	{
		CIVFLabPhieuTruDialog dlg(this, nDocNo, nId);
		dlg.m_nId = nId;
		if(dlg.DoModal() == IDOK)
		{
			OnListLoadData();
		}
	}
	
	return 0;
}

int CIVFLabList::OnListRollbackItem()
{
	return 0;
}


void CIVFLabList::OnWaitingSelect(){
	
}
void CIVFLabList::OnPerformedSelect(){
	
}


void CIVFLabList::OnSettingSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	CGuiMenu menu(this);
	CRect rect;
	int nPos;	
	menu.CreatePopupMenu();
	CString tmpStr;
	int nID = 1;
	//Loáº¡i dÃ¹ng chu cho chá»©a, rÃ£,(PhÃ´i hoáº·c tinh trÃ¹ng, trá»©ng)
	menu.AppendMenu(MF_BYPOSITION, 1, _T("Loáº¡i"));

	menu.AppendMenu(MF_SEPARATOR, 0, _T("-"));
	menu.AppendMenu(MF_BYPOSITION, 2, _T("PhÆ°Æ¡ng phÃ¡p"));

	menu.AppendMenu(MF_SEPARATOR, 0, _T("-"));
	menu.AppendMenu(MF_BYPOSITION, 3, _T("MÃ´i trÆ°á»ng"));

	menu.AppendMenu(MF_SEPARATOR, 0, _T("-"));
	menu.AppendMenu(MF_BYPOSITION, 4, _T("Loáº¡i dá»¥ng cá»¥"));

	menu.AppendMenu(MF_SEPARATOR, 0, _T("-"));
	menu.AppendMenu(MF_BYPOSITION, 5, _T("Dá»¥ng cá»¥"));

	menu.AppendMenu(MF_SEPARATOR, 0, _T("-"));
	menu.AppendMenu(MF_BYPOSITION, 6, _T("Cháº¥t lÆ°á»£ng"));


	menu.AppendMenu(MF_SEPARATOR, 0, _T("-"));
	menu.AppendMenu(MF_BYPOSITION, 7, _T("Danh má»¥c kho"));

	menu.AppendMenu(MF_SEPARATOR, 0, _T("-"));
	menu.AppendMenu(MF_BYPOSITION, 8, _T("Danh má»¥c thÃ¹ng"));
	menu.AppendMenu(MF_SEPARATOR, 0, _T("-"));
	menu.AppendMenu(MF_BYPOSITION, 9, _T("Danh má»¥c giÃ¡"));
	menu.AppendMenu(MF_SEPARATOR, 0, _T("-"));
	menu.AppendMenu(MF_BYPOSITION, 10, _T("Danh má»¥c cassette"));
	menu.AppendMenu(MF_SEPARATOR, 0, _T("-"));
	menu.AppendMenu(MF_BYPOSITION, 11, _T("Danh má»¥c mÃ u top"));

	
	m_wndSetting.GetWindowRect(&rect);
	nPos = menu.TrackPopupMenu(TPM_NONOTIFY|TPM_RETURNCMD|TPM_RIGHTALIGN|TPM_TOPALIGN, rect.right, rect.top, this);

	switch(nPos){
	case 1:
		{
			CIVFSettingDialog dlg(this, _T("ivf_storage_loai"));
			dlg.DoModal();
		}
		break;
	case 2:
		{
			CIVFSettingDialog dlg(this, _T("ivf_storage_phuongphap"), _T("ivf_storage_loai"));
			dlg.DoModal();
		}break;
	case 3:
		{
			CIVFSettingDialog dlg(this, _T("ivf_storage_moitruong"), _T("ivf_storage_loai"));
			dlg.DoModal();
		}break;
	case 4:
		{
			CIVFSettingDialog dlg(this, _T("ivf_storage_loaidungcu"));
			dlg.DoModal();
		}break;

	case 5:
		{
			CIVFSettingDialog dlg(this, _T("ivf_storage_dungcu"), _T("ivf_storage_loaidungcu"));
			dlg.DoModal();
		}break;
	case 6:
		{
			CIVFSettingDialog dlg(this, _T("ivf_storage_chatluong"));
			dlg.DoModal();
		}break;
	case 7:
		{
			CIVFSettingDialog dlg(this, _T("ivf_storage_location"));
			dlg.DoModal();
		}break;
	case 8:
		{
			CIVFSettingThungDialog dlg(this, _T("ivf_storage_thung"), _T("ivf_storage_location"));
			dlg.DoModal();
		}break;
	case 9:
		{
			CIVFSettingDialog dlg(this, _T("ivf_storage_gia"), _T("ivf_storage_thung"));
			dlg.DoModal();
		}break;
	case 10:
		{
			CIVFSettingDialog dlg3(this, _T("ivf_storage_cassette"), _T("ivf_storage_gia"));
			dlg3.DoModal();
		}break;
	case 11:
		{
			CIVFSettingDialog dlg(this, _T("ivf_storage_mautop"));
			dlg.DoModal();
		}break;
	};
}

#include "IVFStorageViewDialog.h"
void CIVFLabList::OnStorageSelect(){
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CIVFStorageViewDialog dlg(this);
	dlg.DoModal();
}

int CIVFLabList::OnAddIVFLabList(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	int nSel = m_wndList.GetCurSel();
	if (nSel < 0)
	{
		return -1;
	}
	long nIdx = str2long(m_wndList.GetItemText(nSel, 0));
//	CIVFLabDialog dlg(this);
//	dlg.m_nIdx = nIdx;
//	dlg.DoModal();
	return 0;
}
int CIVFLabList::OnEditIVFLabList(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CIVFLabList::OnDeleteIVFLabList(){
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
 		OnCancelIVFLabList();
 	}
	return 0;
}
int CIVFLabList::OnSaveIVFLabList(){
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
 		//OnIVFLabListListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CIVFLabList::OnCancelIVFLabList(){
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
int CIVFLabList::OnIVFLabListListLoadData(){
	return 0;
}


void CIVFLabList::OnResizeLayout()
{
	AddLayoutControl(&m_wndSearchInformation, WS_RESIZEX, 0, 0, 100, 0);
	AddLayoutControl(&m_wndList, WS_RESIZEX|WS_RESIZEY, 0, 0, 100, 100);
	AddLayoutControl(&m_wndFromDate, WS_RESIZEX, 0, 0, 20, 0);
	AddLayoutControl(&m_wndToDateLabel, WS_REPOSX, 20, 0, 0, 0);
	AddLayoutControl(&m_wndToDate, WS_RESIZEX|WS_REPOSX, 20, 0, 20, 0);
	AddLayoutControl(&m_wndTypeLabel, WS_REPOSX, 40, 0, 0, 0);
	AddLayoutControl(&m_wndType, WS_RESIZEX|WS_REPOSX, 40, 0, 20, 0);
	AddLayoutControl(&m_wndDocumentNoLabel, WS_REPOSX, 60, 0, 0, 0);
	AddLayoutControl(&m_wndDocumentNo, WS_RESIZEX|WS_REPOSX, 60, 0, 20, 0);
	AddLayoutControl(&m_wndRefresh, WS_RESIZEX|WS_REPOSX, 80, 0, 20, 0);
}=======
ÿþ# i n c l u d e   " I V F L a b L i s t . h "  
 # i n c l u d e   " M a i n F r m . h "  
 # i n c l u d e   " I V F L a b P h i e u T r u D i a l o g . h "  
 # i n c l u d e   " I V F L a b P h i e u R a D i a l o g . h "  
 # i n c l u d e   " I V F S e t t i n g D i a l o g . h "  
 # i n c l u d e   " I V F S e t t i n g T h u n g D i a l o g . h "  
 # i n c l u d e   " I V F P h i e u T r u T T D i a l o g . h "  
 # i n c l u d e   " I V F S t o r a g e V i e w _ v 2 . h "  
  
 / * s t a t i c   v o i d   _ O n F r o m D a t e C h a n g e F n c ( C W n d   * p W n d ) {  
 	 ( ( C I V F L a b L i s t   * ) p W n d ) - > O n F r o m D a t e C h a n g e ( ) ;  
 }   * /  
 / * s t a t i c   v o i d   _ O n F r o m D a t e S e t f o c u s F n c ( C W n d   * p W n d ) {  
 	 ( ( C I V F L a b L i s t   * ) p W n d ) - > O n F r o m D a t e S e t f o c u s ( ) ; }   * /    
 / * s t a t i c   v o i d   _ O n F r o m D a t e K i l l f o c u s F n c ( C W n d   * p W n d ) {  
 	 ( ( C I V F L a b L i s t   * ) p W n d ) - > O n F r o m D a t e K i l l f o c u s ( ) ;  
 }   * /  
 s t a t i c   i n t   _ O n F r o m D a t e C h e c k V a l u e F n c ( C W n d   * p W n d ) {  
 	 r e t u r n   ( ( C I V F L a b L i s t   * ) p W n d ) - > O n F r o m D a t e C h e c k V a l u e ( ) ;  
 }    
 / * s t a t i c   v o i d   _ O n T o D a t e C h a n g e F n c ( C W n d   * p W n d ) {  
 	 ( ( C I V F L a b L i s t   * ) p W n d ) - > O n T o D a t e C h a n g e ( ) ;  
 }   * /  
 / * s t a t i c   v o i d   _ O n T o D a t e S e t f o c u s F n c ( C W n d   * p W n d ) {  
 	 ( ( C I V F L a b L i s t   * ) p W n d ) - > O n T o D a t e S e t f o c u s ( ) ; }   * /    
 / * s t a t i c   v o i d   _ O n T o D a t e K i l l f o c u s F n c ( C W n d   * p W n d ) {  
 	 ( ( C I V F L a b L i s t   * ) p W n d ) - > O n T o D a t e K i l l f o c u s ( ) ;  
 }   * /  
 s t a t i c   i n t   _ O n T o D a t e C h e c k V a l u e F n c ( C W n d   * p W n d ) {  
 	 r e t u r n   ( ( C I V F L a b L i s t   * ) p W n d ) - > O n T o D a t e C h e c k V a l u e ( ) ;  
 }    
 s t a t i c   v o i d   _ O n T y p e S e l e c t C h a n g e F n c ( C W n d   * p W n d ,   i n t   n O l d I t e m S e l ,   i n t   n N e w I t e m S e l ) {  
 	 ( ( C I V F L a b L i s t *   ) p W n d ) - > O n T y p e S e l e c t C h a n g e ( n O l d I t e m S e l ,   n N e w I t e m S e l ) ;  
 }    
 s t a t i c   v o i d   _ O n T y p e S e l e n d o k F n c ( C W n d   * p W n d ) {  
 	 ( ( C I V F L a b L i s t   * ) p W n d ) - > O n T y p e S e l e n d o k ( ) ;  
 }  
 / * s t a t i c   v o i d   _ O n T y p e S e t f o c u s F n c ( C W n d   * p W n d ) {  
 	 ( ( C I V F L a b L i s t   * ) p W n d ) - > O n T y p e K i l l f o c u s ( ) ;  
 } * /  
 / * s t a t i c   v o i d   _ O n T y p e K i l l f o c u s F n c ( C W n d   * p W n d ) {  
 	 ( ( C I V F L a b L i s t   * ) p W n d ) - > O n T y p e K i l l f o c u s ( ) ;  
 } * /  
 s t a t i c   l o n g   _ O n T y p e L o a d D a t a F n c ( C W n d   * p W n d ) {  
 	 r e t u r n   ( ( C I V F L a b L i s t   * ) p W n d ) - > O n T y p e L o a d D a t a ( ) ;  
 }  
 / * s t a t i c   v o i d   _ O n T y p e A d d N e w F n c ( C W n d   * p W n d ) {  
 	 ( ( C I V F L a b L i s t   * ) p W n d ) - > O n T y p e A d d N e w ( ) ;  
 } * /  
 / * s t a t i c   v o i d   _ O n D o c u m e n t N o C h a n g e F n c ( C W n d   * p W n d ) {  
 	 ( ( C I V F L a b L i s t   * ) p W n d ) - > O n D o c u m e n t N o C h a n g e ( ) ;  
 }   * /  
 / * s t a t i c   v o i d   _ O n D o c u m e n t N o S e t f o c u s F n c ( C W n d   * p W n d ) {  
 	 ( ( C I V F L a b L i s t   * ) p W n d ) - > O n D o c u m e n t N o S e t f o c u s ( ) ; }   * /    
 / * s t a t i c   v o i d   _ O n D o c u m e n t N o K i l l f o c u s F n c ( C W n d   * p W n d ) {  
 	 ( ( C I V F L a b L i s t   * ) p W n d ) - > O n D o c u m e n t N o K i l l f o c u s ( ) ;  
 }   * /  
 s t a t i c   i n t   _ O n D o c u m e n t N o C h e c k V a l u e F n c ( C W n d   * p W n d ) {  
 	 r e t u r n   ( ( C I V F L a b L i s t   * ) p W n d ) - > O n D o c u m e n t N o C h e c k V a l u e ( ) ;  
 }    
 s t a t i c   v o i d   _ O n R e f r e s h S e l e c t F n c ( C W n d   * p W n d ) {  
 	 C I V F L a b L i s t   * p V w   =   ( C I V F L a b L i s t   * ) p W n d ;  
 	 p V w - > O n R e f r e s h S e l e c t ( ) ;  
 }  
  
 s t a t i c   l o n g   _ O n L i s t L o a d D a t a F n c ( C W n d   * p W n d ) {  
 	 r e t u r n   ( ( C I V F L a b L i s t * ) p W n d ) - > O n L i s t L o a d D a t a ( ) ;  
 }    
 s t a t i c   v o i d   _ O n L i s t D b l C l i c k F n c ( C W n d   * p W n d ) {  
 	 ( ( C I V F L a b L i s t * ) p W n d ) - > O n L i s t D b l C l i c k ( ) ;  
 }    
 s t a t i c   v o i d   _ O n L i s t S e l e c t C h a n g e F n c ( C W n d   * p W n d ,   i n t   n O l d I t e m ,   i n t   n N e w I t e m ) {  
 	 ( ( C I V F L a b L i s t * ) p W n d ) - > O n L i s t S e l e c t C h a n g e ( n O l d I t e m ,   n N e w I t e m ) ;  
 }    
 s t a t i c   i n t   _ O n L i s t D e l e t e I t e m F n c ( C W n d   * p W n d ) {  
 	   r e t u r n   ( ( C I V F L a b L i s t * ) p W n d ) - > O n L i s t D e l e t e I t e m ( ) ;  
 }    
 s t a t i c   i n t   _ O n L i s t C r e a t e P h i e u t r u I t e m F n c ( C W n d   * p W n d ) {  
 	   r e t u r n   ( ( C I V F L a b L i s t * ) p W n d ) - > O n L i s t C r e a t e P h i e u t r u ( ) ;  
 }  
 s t a t i c   i n t   _ O n L i s t C r e a t e P h i e u r a I t e m F n c ( C W n d   * p W n d ) {  
 	   r e t u r n   ( ( C I V F L a b L i s t * ) p W n d ) - > O n L i s t C r e a t e P h i e u r a ( ) ;  
 }  
  
 s t a t i c   i n t   _ O n L i s t E d i t I t e m F n c ( C W n d   * p W n d ) {  
 	   r e t u r n   ( ( C I V F L a b L i s t * ) p W n d ) - > O n L i s t E d i t I t e m ( ) ;  
 }  
  
 s t a t i c   i n t   _ O n L i s t R o l l b a c k I t e m F n c ( C W n d   * p W n d ) {  
 	   r e t u r n   ( ( C I V F L a b L i s t * ) p W n d ) - > O n L i s t R o l l b a c k I t e m ( ) ;  
 }  
  
  
 s t a t i c   v o i d   _ O n S t o r a g e S e l e c t F n c ( C W n d   * p W n d ) {  
 	 C I V F L a b L i s t   * p V w   =   ( C I V F L a b L i s t   * ) p W n d ;  
 	 p V w - > O n S t o r a g e S e l e c t ( ) ;  
 }    
  
 s t a t i c   v o i d   _ O n S e t t i n g S e l e c t F n c ( C W n d   * p W n d ) {  
 	 C I V F L a b L i s t   * p V w   =   ( C I V F L a b L i s t   * ) p W n d ;  
 	 p V w - > O n S e t t i n g S e l e c t ( ) ;  
 }  
  
 s t a t i c   v o i d   _ O n W a i t i n g S e l e c t F n c ( C W n d   * p W n d ) {  
 	     ( ( C I V F L a b L i s t * ) p W n d ) - > O n W a i t i n g S e l e c t ( ) ;  
 }  
 s t a t i c   v o i d   _ O n P e r f o r m e d S e l e c t F n c ( C W n d   * p W n d ) {  
 	     ( ( C I V F L a b L i s t * ) p W n d ) - > O n P e r f o r m e d S e l e c t ( ) ;  
 }  
  
  
 s t a t i c   i n t   _ O n A d d I V F L a b L i s t F n c ( C W n d   * p W n d ) {  
 	   r e t u r n   ( ( C I V F L a b L i s t * ) p W n d ) - > O n A d d I V F L a b L i s t ( ) ;  
 }    
 s t a t i c   i n t   _ O n E d i t I V F L a b L i s t F n c ( C W n d   * p W n d ) {  
 	   r e t u r n   ( ( C I V F L a b L i s t * ) p W n d ) - > O n E d i t I V F L a b L i s t ( ) ;  
 }    
 s t a t i c   i n t   _ O n D e l e t e I V F L a b L i s t F n c ( C W n d   * p W n d ) {  
 	   r e t u r n   ( ( C I V F L a b L i s t * ) p W n d ) - > O n D e l e t e I V F L a b L i s t ( ) ;  
 }    
 s t a t i c   i n t   _ O n S a v e I V F L a b L i s t F n c ( C W n d   * p W n d ) {  
 	   r e t u r n   ( ( C I V F L a b L i s t * ) p W n d ) - > O n S a v e I V F L a b L i s t ( ) ;  
 }    
 s t a t i c   i n t   _ O n C a n c e l I V F L a b L i s t F n c ( C W n d   * p W n d ) {  
 	   r e t u r n   ( ( C I V F L a b L i s t * ) p W n d ) - > O n C a n c e l I V F L a b L i s t ( ) ;  
 }    
 C I V F L a b L i s t : : C I V F L a b L i s t ( ) {  
  
 	 m _ n D l g W i d t h   =   8 0 5 ;  
 	 m _ n D l g H e i g h t   =   6 0 5 ;  
 	 S e t D e f a u l t V a l u e s ( ) ;  
 }  
 C I V F L a b L i s t : : ~ C I V F L a b L i s t ( ) {  
 }  
 v o i d   C I V F L a b L i s t : : O n C r e a t e C o m p o n e n t s ( ) {  
 	 m _ w n d S e a r c h I n f o r m a t i o n . C r e a t e ( t h i s ,   _ T ( " S e a r c h   I n f o r m a t i o n " ) ,   5 ,   5 ,   1 0 1 5 ,   6 0 ) ;  
 	 m _ w n d F r o m D a t e L a b e l . C r e a t e ( t h i s ,   _ T ( " F r o m   D a t e " ) ,   1 0 ,   3 0 ,   1 1 0 ,   5 5 ) ;  
 	 m _ w n d F r o m D a t e . C r e a t e ( t h i s , 1 1 5 ,   3 0 ,   2 1 5 ,   5 5 ) ;    
 	 m _ w n d T o D a t e L a b e l . C r e a t e ( t h i s ,   _ T ( " T o   D a t e " ) ,   2 2 0 ,   3 0 ,   3 2 0 ,   5 5 ) ;  
 	 m _ w n d T o D a t e . C r e a t e ( t h i s , 3 2 5 ,   3 0 ,   4 2 5 ,   5 5 ) ;    
 	 m _ w n d T y p e L a b e l . C r e a t e ( t h i s ,   _ T ( " T y p e " ) ,   4 3 0 ,   3 0 ,   5 3 0 ,   5 5 ) ;  
 	 m _ w n d T y p e . C r e a t e ( t h i s , 5 3 5 ,   3 0 ,   7 5 0 ,   5 5 ) ;    
 	 m _ w n d D o c u m e n t N o L a b e l . C r e a t e ( t h i s ,   _ T ( " D o c u m e n t   N o " ) ,   7 5 5 ,   3 0 ,   8 3 5 ,   5 5 ) ;  
 	 m _ w n d D o c u m e n t N o . C r e a t e ( t h i s , 8 4 0 ,   3 0 ,   9 2 5 ,   5 5 ) ;    
 	 m _ w n d R e f r e s h . C r e a t e ( t h i s ,   _ T ( " R e f r e s h " ) ,   9 3 0 ,   3 0 ,   1 0 1 0 ,   5 5 ) ;  
 	 m _ w n d L i s t . C r e a t e ( t h i s , 5 ,   6 5 ,   1 0 1 5 ,   5 8 0 ) ;    
 	 m _ w n d S t o r a g e . C r e a t e ( t h i s ,   _ T ( " K h o   t r ï" ) ,   8 1 5 ,   5 8 5 ,   9 0 5 ,   6 0 7 ) ;  
 	 m _ w n d S e t t i n g . C r e a t e ( t h i s ,   _ T ( " S e t t i n g " ) ,   9 1 0 ,   5 8 5 ,   1 0 1 0 ,   6 0 7 ) ;  
 	 m _ w n d W a i t i n g . C r e a t e ( t h i s ,   _ T ( " W a i t i n g " ) ,   5 ,   5 8 5 ,   1 0 5 ,   6 1 0 ) ;  
 	 m _ w n d P e r f o r m e d . C r e a t e ( t h i s ,   _ T ( " P e r f o r m e d " ) ,   1 1 0 ,   5 8 5 ,   2 1 0 ,   6 1 0 ) ;  
  
 }  
 v o i d   C I V F L a b L i s t : : O n I n i t i a l i z e C o m p o n e n t s ( ) {  
 	 C M a i n F r a m e   * p M F   =   ( C M a i n F r a m e * )   A f x G e t M a i n W n d ( ) ;  
 	 / / m _ w n d F r o m D a t e . S e t M a x ( C D a t e ( p M F - > G e t S y s D a t e ( ) ) ) ;  
 	 m _ w n d F r o m D a t e . S e t C h e c k V a l u e ( t r u e ) ;  
 	 / / m _ w n d T o D a t e . S e t M a x ( C D a t e ( p M F - > G e t S y s D a t e ( ) ) ) ;  
 	 m _ w n d T o D a t e . S e t C h e c k V a l u e ( t r u e ) ;  
 	 m _ w n d T y p e . S e t C h e c k V a l u e ( t r u e ) ;  
 	 m _ w n d T y p e . L i m i t T e x t ( 3 5 ) ;  
 	 m _ w n d S e t t i n g . M o d i f y S t y l e ( W S _ T A B S T O P ,   0 ) ;  
 	 m _ w n d S t o r a g e . M o d i f y S t y l e ( W S _ T A B S T O P ,   0 ) ;  
  
  
 	 m _ w n d L i s t . I n s e r t C o l u m n ( 0 ,   _ T ( " S Ñ  p h i ¿u " ) ,   C F M T _ N U M B E R ,   9 0 ) ;  
 	 m _ w n d L i s t . I n s e r t C o l u m n ( 1 ,   _ T ( " S Ñ  h Ó  s ¡" ) ,   C F M T _ N U M B E R ,   9 0 ) ;  
 	 m _ w n d L i s t . I n s e r t C o l u m n ( 2 ,   _ T ( " H Í  v à   t ê n " ) ,   C F M T _ T E X T ,   1 5 0 ) ;  
 	 m _ w n d L i s t . I n s e r t C o l u m n ( 3 ,   _ T ( " N m   s i n h " ) ,   C F M T _ T E X T ,   8 0 ) ;  
 	 m _ w n d L i s t . I n s e r t C o l u m n ( 4 ,   _ T ( " S e x " ) ,   C F M T _ T E X T ,   3 0 ) ;  
 	 m _ w n d L i s t . I n s e r t C o l u m n ( 5 ,   _ T ( " D a t e " ) ,   C F M T _ D A T E T I M E ,   1 2 0 ) ;  
 	 m _ w n d L i s t . I n s e r t C o l u m n ( 6 ,   _ T ( " D e s c r i p t i o n " ) ,   C F M T _ T E X T ,   2 2 0 ) ;  
 	 m _ w n d L i s t . I n s e r t C o l u m n ( 7 ,   _ T ( " T y p e " ) ,   C F M T _ T E X T ,   9 0 ) ;  
 	 m _ w n d L i s t . I n s e r t C o l u m n ( 8 ,   _ T ( " S t a t u s " ) ,   C F M T _ T E X T ,   9 0 ) ;  
 	 m _ w n d L i s t . I n s e r t C o l u m n ( 9 ,   _ T ( " " ) ,   C F M T _ T E X T ,   0 ) ; 	 / / M a   l o a i   p h i e u  
  
  
 	 m _ w n d T y p e . I n s e r t C o l u m n ( 0 ,   _ T ( " I D " ) ,   C F M T _ T E X T ,   5 0 ) ;  
 	 m _ w n d T y p e . I n s e r t C o l u m n ( 1 ,   _ T ( " N a m e " ) ,   C F M T _ T E X T ,   1 5 0 ) ;  
  
 }  
 v o i d   C I V F L a b L i s t : : O n S e t W i n d o w E v e n t s ( ) {  
 	 C M a i n F r a m e   * p M F   =   ( C M a i n F r a m e * )   A f x G e t M a i n W n d ( ) ;  
 	  
 	 / / m _ w n d F r o m D a t e . S e t E v e n t ( W E _ C H A N G E ,   _ O n F r o m D a t e C h a n g e F n c ) ;  
 	 / / m _ w n d F r o m D a t e . S e t E v e n t ( W E _ S E T F O C U S ,   _ O n F r o m D a t e S e t f o c u s F n c ) ;  
 	 / / m _ w n d F r o m D a t e . S e t E v e n t ( W E _ K I L L F O C U S ,   _ O n F r o m D a t e K i l l f o c u s F n c ) ;  
 	 m _ w n d F r o m D a t e . S e t E v e n t ( W E _ C H E C K V A L U E ,   _ O n F r o m D a t e C h e c k V a l u e F n c ) ;  
 	 / / m _ w n d T o D a t e . S e t E v e n t ( W E _ C H A N G E ,   _ O n T o D a t e C h a n g e F n c ) ;  
 	 / / m _ w n d T o D a t e . S e t E v e n t ( W E _ S E T F O C U S ,   _ O n T o D a t e S e t f o c u s F n c ) ;  
 	 / / m _ w n d T o D a t e . S e t E v e n t ( W E _ K I L L F O C U S ,   _ O n T o D a t e K i l l f o c u s F n c ) ;  
 	 m _ w n d T o D a t e . S e t E v e n t ( W E _ C H E C K V A L U E ,   _ O n T o D a t e C h e c k V a l u e F n c ) ;  
 	 m _ w n d T y p e . S e t E v e n t ( W E _ S E L E N D O K ,   _ O n T y p e S e l e n d o k F n c ) ;  
 	 / / m _ w n d T y p e . S e t E v e n t ( W E _ S E T F O C U S ,   _ O n T y p e S e t f o c u s F n c ) ;  
 	 / / m _ w n d T y p e . S e t E v e n t ( W E _ K I L L F O C U S ,   _ O n T y p e K i l l f o c u s F n c ) ;  
 	 m _ w n d T y p e . S e t E v e n t ( W E _ S E L C H A N G E ,   _ O n T y p e S e l e c t C h a n g e F n c ) ;  
 	 m _ w n d T y p e . S e t E v e n t ( W E _ L O A D D A T A ,   _ O n T y p e L o a d D a t a F n c ) ;  
 	 / / m _ w n d T y p e . S e t E v e n t ( W E _ A D D N E W ,   _ O n T y p e A d d N e w F n c ) ;  
 	 / / m _ w n d D o c u m e n t N o . S e t E v e n t ( W E _ C H A N G E ,   _ O n D o c u m e n t N o C h a n g e F n c ) ;  
 	 / / m _ w n d D o c u m e n t N o . S e t E v e n t ( W E _ S E T F O C U S ,   _ O n D o c u m e n t N o S e t f o c u s F n c ) ;  
 	 / / m _ w n d D o c u m e n t N o . S e t E v e n t ( W E _ K I L L F O C U S ,   _ O n D o c u m e n t N o K i l l f o c u s F n c ) ;  
 	 m _ w n d D o c u m e n t N o . S e t E v e n t ( W E _ C H E C K V A L U E ,   _ O n D o c u m e n t N o C h e c k V a l u e F n c ) ;  
 	 m _ w n d R e f r e s h . S e t E v e n t ( W E _ C L I C K ,   _ O n R e f r e s h S e l e c t F n c ) ;  
 	 m _ w n d L i s t . S e t E v e n t ( W E _ S E L C H A N G E ,   _ O n L i s t S e l e c t C h a n g e F n c ) ;  
 	 m _ w n d L i s t . S e t E v e n t ( W E _ L O A D D A T A ,   _ O n L i s t L o a d D a t a F n c ) ;  
 	 m _ w n d L i s t . S e t E v e n t ( W E _ D B L C L I C K ,   _ O n L i s t D b l C l i c k F n c ) ;  
 	  
 	 m _ w n d L i s t . A d d E v e n t ( 1 ,   _ T ( " T ¡o   p h i ¿u   t r ï" ) ,   _ O n L i s t C r e a t e P h i e u t r u I t e m F n c ) ;  
 	 m _ w n d L i s t . A d d E v e n t ( 0 ,   _ T ( " - " ) ) ;  
 	 m _ w n d L i s t . A d d E v e n t ( 2 ,   _ T ( " T ¡o   p h i ¿u   r ã " ) ,   _ O n L i s t C r e a t e P h i e u r a I t e m F n c ) ;  
 	 m _ w n d L i s t . A d d E v e n t ( 0 ,   _ T ( " - " ) ) ;  
 	 m _ w n d L i s t . A d d E v e n t ( 3 ,   _ T ( " S ía   p h i ¿u " ) ,   _ O n L i s t E d i t I t e m F n c ) ;  
 	 m _ w n d L i s t . A d d E v e n t ( 0 ,   _ T ( " - " ) ) ;  
 	 m _ w n d L i s t . A d d E v e n t ( 4 ,   _ T ( " K h ô i   p h åc   l ¡i " ) ,   _ O n L i s t R o l l b a c k I t e m F n c ) ;  
  
  
 	 m _ w n d S t o r a g e . S e t E v e n t ( W E _ C L I C K ,   _ O n S t o r a g e S e l e c t F n c ) ;  
 	 m _ w n d S e t t i n g . S e t E v e n t ( W E _ C L I C K ,   _ O n S e t t i n g S e l e c t F n c ) ;  
 	 m _ w n d W a i t i n g . S e t E v e n t ( W E _ C L I C K ,   _ O n W a i t i n g S e l e c t F n c ) ;  
 	 m _ w n d P e r f o r m e d . S e t E v e n t ( W E _ C L I C K ,   _ O n P e r f o r m e d S e l e c t F n c ) ;  
 	  
 	 m _ s z F r o m D a t e   =   m _ s z T o D a t e   =   p M F - > G e t S y s D a t e ( ) ;  
 	 m _ s z T o D a t e   + =   _ T ( "   2 3 : 5 9 " ) ;  
 	 U p d a t e D a t a ( F A L S E ) ;  
 }  
 v o i d   C I V F L a b L i s t : : O n D o D a t a E x c h a n g e ( C D a t a E x c h a n g e *   p D X ) {  
 	 D D X _ T e x t E x ( p D X ,   m _ w n d F r o m D a t e . G e t D l g C t r l I D ( ) ,   m _ s z F r o m D a t e ) ;  
 	 D D X _ T e x t E x ( p D X ,   m _ w n d T o D a t e . G e t D l g C t r l I D ( ) ,   m _ s z T o D a t e ) ;  
 	 D D X _ T e x t E x ( p D X ,   m _ w n d T y p e . G e t D l g C t r l I D ( ) ,   m _ s z T y p e K e y ) ;  
 	 D D X _ T e x t ( p D X ,   m _ w n d D o c u m e n t N o . G e t D l g C t r l I D ( ) ,   m _ n D o c u m e n t N o ) ;  
 	 D D X _ R a d i o ( p D X ,   m _ w n d W a i t i n g . G e t D l g C t r l I D ( ) ,   m _ n W a i t i n g ) ;  
 	 D D X _ R a d i o ( p D X ,   m _ w n d P e r f o r m e d . G e t D l g C t r l I D ( ) ,   m _ n P e r f o r m e d ) ;  
  
 }  
 v o i d   C I V F L a b L i s t : : U p d a t e J s o n ( B O O L   b S a v e ) {  
 	 i f ( b S a v e )  
 	 {  
 	 	 	  
 	 m _ j D a t a [ _ T ( " F r o m D a t e " ) ]   =     m _ s z F r o m D a t e ;  
 	 m _ j D a t a [ _ T ( " T o D a t e " ) ]   =     m _ s z T o D a t e ;  
 	 m _ j D a t a [ _ T ( " T y p e " ) ]   =     m _ s z T y p e K e y ;  
 	 m _ j D a t a [ _ T ( " D o c u m e n t N o " ) ]   =     m _ n D o c u m e n t N o ;  
 	 m _ j D a t a [ _ T ( " W a i t i n g " ) ]   =     m _ n W a i t i n g ;  
 	 m _ j D a t a [ _ T ( " P e r f o r m e d " ) ]   =     m _ n P e r f o r m e d ;  
 	 }  
 	 e l s e  
 	 {  
 	 	 	  
 	 m _ j D a t a [ _ T ( " F r o m D a t e " ) ] . G e t V a l u e ( m _ s z F r o m D a t e ) ;  
 	 m _ j D a t a [ _ T ( " T o D a t e " ) ] . G e t V a l u e ( m _ s z T o D a t e ) ;  
 	 m _ j D a t a [ _ T ( " T y p e " ) ] . G e t V a l u e ( m _ s z T y p e K e y ) ;  
 	 m _ j D a t a [ _ T ( " D o c u m e n t N o " ) ] . G e t V a l u e ( m _ n D o c u m e n t N o ) ;  
 	 m _ j D a t a [ _ T ( " W a i t i n g " ) ] . G e t V a l u e ( m _ n W a i t i n g ) ;  
 	 m _ j D a t a [ _ T ( " P e r f o r m e d " ) ] . G e t V a l u e ( m _ n P e r f o r m e d ) ;  
 	 }  
  
 }  
 v o i d   C I V F L a b L i s t : : G e t D a t a T o S c r e e n ( ) {  
 	 C M a i n F r a m e   * p M F   =   ( C M a i n F r a m e * )   A f x G e t M a i n W n d ( ) ;  
 	 C R e c o r d   r s ( & p M F - > m _ d b ) ;  
 	 C S t r i n g   s z S Q L ;  
 	 s z S Q L . F o r m a t ( _ T ( " S E L E C T   *   F R O M   " ) ) ;  
 	 r s . E x e c S Q L ( s z S Q L ) ;  
  
 }  
 v o i d   C I V F L a b L i s t : : G e t S c r e e n T o D a t a ( ) {  
 	 C M a i n F r a m e   * p M F   =   ( C M a i n F r a m e * )   A f x G e t M a i n W n d ( ) ;  
  
 }  
 v o i d   C I V F L a b L i s t : : S e t D e f a u l t V a l u e s ( ) {  
  
 	 m _ s z F r o m D a t e . E m p t y ( ) ;  
 	 m _ s z T o D a t e . E m p t y ( ) ;  
 	 m _ s z T y p e K e y . E m p t y ( ) ;  
 	 m _ n D o c u m e n t N o   =   0 ;  
 	 m _ n W a i t i n g = 0 ;  
 	 m _ n P e r f o r m e d = 0 ;  
  
 }  
 i n t   C I V F L a b L i s t : : S e t M o d e ( i n t   n M o d e ) {  
   	 	 i n t   n O l d M o d e   =   G e t M o d e ( ) ;  
   	 	 C G u i V i e w : : S e t M o d e ( n M o d e ) ;  
   	 	 C M a i n F r a m e   * p M F   =   ( C M a i n F r a m e   * )   A f x G e t M a i n W n d ( ) ;  
   	 	 C S t r i n g   s z S Q L ;  
   	 	 C R e c o r d   r s ( & p M F - > m _ d b ) ;  
     	 	 s w i t c h ( n M o d e ) {  
   	 	 c a s e   V M _ A D D :    
   	 	 	 E n a b l e C o n t r o l s ( T R U E ) ;  
   	 	 	 E n a b l e B u t t o n s ( T R U E ,   3 ,   4 ,   - 1 ) ;  
   	 	 	 S e t D e f a u l t V a l u e s ( ) ;  
   	 	 	 b r e a k ;  
   	 	 c a s e   V M _ E D I T :    
   	 	 	 E n a b l e C o n t r o l s ( T R U E ) ;  
   	 	 	 E n a b l e B u t t o n s ( T R U E ,   3 ,   4 ,   - 1 ) ;  
   	 	 	 b r e a k ;  
   	 	 c a s e   V M _ V I E W :    
   	 	 	 E n a b l e C o n t r o l s ( F A L S E ) ;  
   	 	 	 E n a b l e B u t t o n s ( F A L S E ,   3 ,   4 ,   - 1 ) ;  
   	 	 	 b r e a k ;  
   	 	 c a s e   V M _ N O N E :    
   	 	 	 E n a b l e C o n t r o l s ( F A L S E ) ;  
   	 	 	 E n a b l e B u t t o n s ( T R U E ,   0 ,   6 ,   - 1 ) ;  
   	 	 	 S e t D e f a u l t V a l u e s ( ) ;  
   	 	 	 b r e a k ;  
   	 	 } ;  
   	 	 U p d a t e D a t a ( F A L S E ) ;  
   	 	 r e t u r n   n O l d M o d e ;  
 }  
 / * v o i d   C I V F L a b L i s t : : O n F r o m D a t e C h a n g e ( ) {  
 	  
 }   * /  
 / * v o i d   C I V F L a b L i s t : : O n F r o m D a t e S e t f o c u s ( ) {  
 	  
 }   * /  
 / * v o i d   C I V F L a b L i s t : : O n F r o m D a t e K i l l f o c u s ( ) {  
 	  
 }   * /  
 i n t   C I V F L a b L i s t : : O n F r o m D a t e C h e c k V a l u e ( ) {  
 	 r e t u r n   0 ;  
 }    
 / * v o i d   C I V F L a b L i s t : : O n T o D a t e C h a n g e ( ) {  
 	  
 }   * /  
 / * v o i d   C I V F L a b L i s t : : O n T o D a t e S e t f o c u s ( ) {  
 	  
 }   * /  
 / * v o i d   C I V F L a b L i s t : : O n T o D a t e K i l l f o c u s ( ) {  
 	  
 }   * /  
 i n t   C I V F L a b L i s t : : O n T o D a t e C h e c k V a l u e ( ) {  
 	 r e t u r n   0 ;  
 }    
 v o i d   C I V F L a b L i s t : : O n T y p e S e l e c t C h a n g e ( i n t   n O l d I t e m S e l ,   i n t   n N e w I t e m S e l ) {  
 	 C M a i n F r a m e   * p M F   =   ( C M a i n F r a m e * )   A f x G e t M a i n W n d ( ) ;  
 	  
 }    
 v o i d   C I V F L a b L i s t : : O n T y p e S e l e n d o k ( ) {  
 	    
 }  
 / * v o i d   C I V F L a b L i s t : : O n T y p e S e t f o c u s ( ) {  
 	  
 } * /  
 / * v o i d   C I V F L a b L i s t : : O n T y p e K i l l f o c u s ( ) {  
 	  
 } * /  
 l o n g   C I V F L a b L i s t : : O n T y p e L o a d D a t a ( ) {  
 	 C M a i n F r a m e   * p M F   =   ( C M a i n F r a m e * )   A f x G e t M a i n W n d ( ) ;  
 	 / / L o a d   c a c   l o a i   p h i e u   T R U ,   P H O I ,   X N ,   T I N H   T R U N G  
 	 r e t u r n   p M F - > L o a d C o m b o B o x L i s t ( & m _ w n d T y p e ,   m _ s z T y p e K e y ,   _ T ( " i v f _ s t o r a g e _ l o a i " ) ) ;  
 / *  
 	 C R e c o r d   r s ( & p M F - > m _ d b ) ;  
 	 C S t r i n g   s z S Q L ,   s z W h e r e ;  
 	 i f ( m _ w n d T y p e . I s S e a r c h K e y ( )   & &   ! m _ s z T y p e K e y . I s E m p t y ( ) ) {  
 	   s z W h e r e . F o r m a t ( _ T ( "   a n d   i d = ' % s '   " ) ,   m _ s z T y p e K e y  
 } ;  
 	 m _ w n d T y p e . D e l e t e A l l I t e m s ( ) ;    
 	 i n t   n C o u n t   =   0 ;  
 	 s z S Q L . F o r m a t ( _ T ( " S E L E C T   f l d 1   a s   i d ,   f l d 2   a s   n a m e   F R O M   t b l   W H E R E   1 = 1   % s   O R D E R   B Y   i d   " ) ,   s z W h e r e  
 	 n C o u n t   =   r s . E x e c S Q L ( s z S Q L ) ;  
 	 w h i l e ( ! r s . I s E O F ( ) ) {    
 	 	 m _ w n d T y p e . A d d I t e m s (  
 	 	 	 r s . G e t V a l u e ( _ T ( " i d " ) ) ,    
 	 	 	 r s . G e t V a l u e ( _ T ( " n a m e " ) ) ,   N U L L ) ;  
 	 	 r s . M o v e N e x t ( ) ;  
 	 }  
 	 r e t u r n   n C o u n t ;  
 * /  
 	 r e t u r n   0 ;  
 }  
 / * v o i d   C I V F L a b L i s t : : O n T y p e A d d N e w ( ) {  
 	 C M a i n F r a m e   * p M F   =   ( C M a i n F r a m e * )   A f x G e t M a i n W n d ( ) ;  
 	  
 }   * /  
 / * v o i d   C I V F L a b L i s t : : O n D o c u m e n t N o C h a n g e ( ) {  
 	  
 }   * /  
 / * v o i d   C I V F L a b L i s t : : O n D o c u m e n t N o S e t f o c u s ( ) {  
 	  
 }   * /  
 / * v o i d   C I V F L a b L i s t : : O n D o c u m e n t N o K i l l f o c u s ( ) {  
 	  
 }   * /  
 i n t   C I V F L a b L i s t : : O n D o c u m e n t N o C h e c k V a l u e ( ) {  
 	 r e t u r n   0 ;  
 }    
 v o i d   C I V F L a b L i s t : : O n R e f r e s h S e l e c t ( ) {  
 	 C M a i n F r a m e   * p M F   =   ( C M a i n F r a m e * )   A f x G e t M a i n W n d ( ) ;  
 	 U p d a t e D a t a ( ) ;  
 	 O n L i s t L o a d D a t a ( ) ;  
 }  
  
 v o i d   C I V F L a b L i s t : : O n L i s t D b l C l i c k ( ) {  
 	 i n t   n S e l   =   m _ w n d L i s t . G e t C u r S e l ( ) ;  
 	 i f   ( n S e l   <   0 )  
 	 {  
 	 	 r e t u r n ;  
 	 }  
 	 l o n g   n I d x   =   s t r 2 l o n g ( m _ w n d L i s t . G e t I t e m T e x t ( n S e l ,   0 ) ) ;  
 	 l o n g   n D o c N o   =   s t r 2 l o n g ( m _ w n d L i s t . G e t I t e m T e x t ( n S e l ,   2 ) ) ;  
 / / 	 C I V F L a b D i a l o g   d l g ( t h i s ) ;  
 / / 	 d l g . m _ n I d x   =   n I d x ;  
 / / 	 d l g . m _ n D o c u m e n t N o   =   n D o c N o ;  
 / / 	 d l g . S e t M o d e ( V M _ V I E W ) ;  
 / / 	 d l g . D o M o d a l ( ) ; 	  
 }    
 v o i d   C I V F L a b L i s t : : O n L i s t S e l e c t C h a n g e ( i n t   n O l d I t e m ,   i n t   n N e w I t e m ) {  
 	 C M a i n F r a m e   * p M F   =   ( C M a i n F r a m e * )   A f x G e t M a i n W n d ( ) ;  
 	  
 }    
 i n t   C I V F L a b L i s t : : O n L i s t D e l e t e I t e m ( ) {  
  
 	 r e t u r n   0 ;  
 	 C M a i n F r a m e   * p M F   =   ( C M a i n F r a m e * )   A f x G e t M a i n W n d ( ) ;  
 	 i n t   n S e l   =   m _ w n d L i s t . G e t C u r S e l ( ) ;  
 	 i f   ( n S e l   <   0 )  
 	 {  
 	 	 r e t u r n   - 1 ;  
 	 }  
 	 l o n g   n I d x   =   s t r 2 l o n g ( m _ w n d L i s t . G e t I t e m T e x t ( n S e l ,   0 ) ) ;  
 	 C S t r i n g   s z S Q L ;  
 	  
 	 / / s z S Q L . F o r m a t ( _ T ( " D E L E T E   F R O M   i v f _ a p p o i n t m e n t   W H E R E   I V F _ A P P O I N T M E N T _ I D   =   % l d " ) ,   n I d x ) ;  
 	 i n t   n R e t   =   p M F - > E x e c S Q L ( s z S Q L ) ;  
 	 i f   ( n R e t   >   0 )  
 	 {  
 	 	 O n L i s t L o a d D a t a ( ) ;  
 	 }  
 	 r e t u r n   0 ;  
 }    
 l o n g   C I V F L a b L i s t : : O n L i s t L o a d D a t a ( ) {  
 	 C M a i n F r a m e   * p M F   =   ( C M a i n F r a m e * )   A f x G e t M a i n W n d ( ) ;  
 	 C R e c o r d   r s ( & p M F - > m _ d b ) ;  
 	 C S t r i n g   s z S Q L ,   s z W h e r e ;  
 	 m _ w n d L i s t . B e g i n L o a d ( ) ;    
 	 i n t   n C o u n t   =   0 ,   n I n d e x   =   1 ;  
 	  
 	 U p d a t e D a t a ( T R U E ) ;  
 	 s z W h e r e . F o r m a t ( _ T ( "   A N D   t r u n c ( h p c _ o r d e r d a t e )   B E T W E E N   t o _ t i m e s t a m p ( ' % s ' ,   ' y y y y / m m / d d   h h 2 4 : m i : s s ' )   " )   \  
 	 	 	 	 	 _ T ( " 	 A N D   t o _ t i m e s t a m p ( ' % s ' ,   ' y y y y / m m / d d   h h 2 4 : m i : s s ' ) " ) ,   m _ s z F r o m D a t e ,   m _ s z T o D a t e ) ;  
 	  
 	 i f   ( ! m _ s z T y p e K e y . I s E m p t y ( ) )  
 	 {  
 	 / / 	 s z W h e r e . A p p e n d F o r m a t ( _ T ( "   A N D   t y p e i d   =   ' % s ' " ) ,   m _ s z T y p e K e y ) ;  
 	 }  
 	 i f   ( m _ n D o c u m e n t N o   >   0 )  
 	 {  
 	 	 s z W h e r e . A p p e n d F o r m a t ( _ T ( "   A N D   h p c _ d o c n o   =   % l d " ) ,   m _ n D o c u m e n t N o ) ;  
 	 }  
 	 s z S Q L . F o r m a t ( _ T ( "   S E L E C T " )   \  
 _ T ( "           h p c _ o r d e r i d   a s   o r d e r i d , " )   \  
 _ T ( "           h p c l _ i t e m i d , " )   \  
 _ T ( "           h f l _ n a m e   a s   d e s c r i p t i o n , " )   \  
 _ T ( "           h p _ s u r n a m e " )   \  
 _ T ( "           | |   '   ' " )   \  
 _ T ( "           | |   h p _ m i d n a m e " )   \  
 _ T ( "           | |   '   ' " )   \  
 _ T ( "           | |   h p _ f i r s t n a m e   A S   p n a m e , " )   \  
 _ T ( "           t o _ c h a r ( h p _ b i r t h d a t e ,   ' Y Y Y Y ' )   a s   y o b , " )   \  
 _ T ( "           H M S _ G E T S E X ( h p _ s e x )   a s   s e x , " )   \  
 _ T ( "           h p _ p a t i e n t n o , " )   \  
 _ T ( "           h d _ d o c n o   a s   d o c n o , " )   \  
 _ T ( "           h p c _ d e p t i d , " )   \  
 _ T ( "           h p c _ o r d e r d a t e   a s   o r d e r d a t e ,   i l g _ t y p e   a s   t y p e ,   i l g _ d e s c r i p t i o n   " )   \  
 _ T ( "   F R O M " )   \  
 _ T ( "           h m s _ t e s t o r d e r   l e f t " )   \  
 _ T ( "           J O I N   h m s _ t e s t o r d e r l i n e   O N   (   h p c _ o r d e r i d   =   h p c l _ o r d e r i d   ) " )   \  
 _ T ( "   L E F T   J O I N   i v f _ l a b _ g r o u p   o n ( i l g _ i t e m i d   =   h p c l _ i t e m i d )   " )   \  
 _ T ( "           L E F T   J O I N   h m s _ f e e _ l i s t   O N   (   h p c l _ i t e m i d   =   h f l _ f e e i d   ) " )   \  
 _ T ( "           L E F T   J O I N   h m s _ d o c   O N   (   h d _ d o c n o   =   h p c _ d o c n o   ) " )   \  
 _ T ( "           L E F T   J O I N   h m s _ p a t i e n t   O N   (   h d _ p a t i e n t n o   =   h p _ p a t i e n t n o   ) " )   \  
 _ T ( "   W H E R E   " )   \  
 _ T ( "           h p c _ g r o u p i d   =   ' B 1 H 0 0 '   a n d   i l g _ i t e m i d   i s   n o t   n u l l   % s   " ) ,   s z W h e r e ) ;  
  
 _ t p r i n t f ( _ T ( " \ r \ n % s " ) ,   s z S Q L ) ;  
  
 	 n C o u n t   =   r s . E x e c S Q L ( s z S Q L ) ;  
 	 w h i l e ( ! r s . I s E O F ( ) ) {    
 	 	 m _ w n d L i s t . A d d I t e m s (  
 	 	 	 r s . G e t V a l u e ( _ T ( " o r d e r i d " ) ) ,    
 	 	 	 r s . G e t V a l u e ( _ T ( " d o c n o " ) ) ,    
 	 	 	 r s . G e t V a l u e ( _ T ( " p n a m e " ) ) ,    
 	 	 	 r s . G e t V a l u e ( _ T ( " y o b " ) ) ,    
 	 	 	 r s . G e t V a l u e ( _ T ( " s e x " ) ) ,    
 	 	 	 r s . G e t V a l u e ( _ T ( " o r d e r d a t e " ) ) ,    
 	 	 	 r s . G e t V a l u e ( _ T ( " d e s c r i p t i o n " ) ) ,  
 	 	 	 r s . G e t V a l u e ( _ T ( " i l g _ d e s c r i p t i o n " ) ) ,  
 	 	 	 _ T ( " " ) ,  
 	 	 	 r s . G e t V a l u e ( _ T ( " t y p e " ) ) ,  
 	 	 	 N U L L ) ;  
 	 	 r s . M o v e N e x t ( ) ;  
 	 }  
 	  
 	 m _ w n d L i s t . E n d L o a d ( ) ;    
 	 r e t u r n   n C o u n t ;  
 }  
  
  
 i n t   C I V F L a b L i s t : : O n L i s t C r e a t e P h i e u t r u ( )  
 {  
 	 C M a i n F r a m e *   p M F   =   ( C M a i n F r a m e * )   A f x G e t M a i n W n d ( ) ;  
 	 i n t   n S e l   =   m _ w n d L i s t . G e t C u r S e l ( ) ;  
 	 l o n g   n D o c N o   =   0 ;  
 	 i f   ( n S e l   <   0 )  
 	 {  
 	 	 r e t u r n   - 1 ;  
 	 }  
 	 l o n g   n I d   =   s t r 2 l o n g ( m _ w n d L i s t . G e t I t e m T e x t ( n S e l ,   0 ) ) ;  
 	 n D o c N o   =   s t r 2 l o n g ( m _ w n d L i s t . G e t I t e m T e x t ( n S e l ,   1 ) ) ;  
 	 C S t r i n g   s z T y p e   =   m _ w n d L i s t . G e t I t e m T e x t ( n S e l ,   9 ) ;  
 	 i f ( s z T y p e   = =   _ T ( " T P " )   | |   s z T y p e   = =   _ T ( " G H " ) )  
 	 {  
 	 	 C I V F L a b P h i e u T r u D i a l o g   d l g ( t h i s ,   n D o c N o ,   n I d ) ;  
 	 	 i f ( d l g . D o M o d a l ( )   = =   I D O K )  
 	 	 {  
 	 	 	 O n L i s t L o a d D a t a ( ) ;  
 	 	 }  
 	 }  
 	 i f ( s z T y p e   = =   _ T ( " T T " ) )  
 	 {  
 	 	 C I V F P h i e u T r u T T D i a l o g   d l g ( t h i s ,   n D o c N o ,   n I d ) ;  
 	 	 i f ( d l g . D o M o d a l ( )   = =   I D O K )  
 	 	 {  
 	 	 	 O n L i s t L o a d D a t a ( ) ;  
 	 	 }  
 	 }  
 	 r e t u r n   0 ;  
 }  
  
 i n t   C I V F L a b L i s t : : O n L i s t C r e a t e P h i e u r a ( )  
 {  
 	 C M a i n F r a m e *   p M F   =   ( C M a i n F r a m e * )   A f x G e t M a i n W n d ( ) ;  
 	 i n t   n S e l   =   m _ w n d L i s t . G e t C u r S e l ( ) ;  
 	 l o n g   n D o c N o   =   0 ;  
 	 i f   ( n S e l   <   0 )  
 	 {  
 	 	 r e t u r n   - 1 ;  
 	 } 	  
 	 n D o c N o   =   s t r 2 l o n g ( m _ w n d L i s t . G e t I t e m T e x t ( n S e l ,   1 ) ) ;  
 	 l o n g   n I d   =   s t r 2 l o n g ( m _ w n d L i s t . G e t I t e m T e x t ( n S e l ,   0 ) ) ;  
 	  
 	 C S t r i n g   s z T y p e   =   m _ w n d L i s t . G e t I t e m T e x t ( n S e l ,   9 ) ;  
 _ t p r i n t f ( _ T ( " \ r \ n % s " ) ,   s z T y p e ) ;  
 	 i f ( s z T y p e   ! =   _ T ( " L P " ) )  
 	 	 r e t u r n   0 ;  
  
 	 C I V F L a b P h i e u R a D i a l o g   d l g ( t h i s ,   V M _ A D D ) ;  
 	 d l g . m _ n D o c u m e n t N o   =   n D o c N o ;  
 	 d l g . m _ n I d   =   n I d ;  
 	 i f ( d l g . D o M o d a l ( )   = =   I D O K )  
 	 {  
 	 	 O n L i s t L o a d D a t a ( ) ;  
 	 }  
 	 r e t u r n   0 ;  
 }  
  
  
 i n t   C I V F L a b L i s t : : O n L i s t E d i t I t e m ( )  
 {  
 	 r e t u r n   0 ;  
 	 i n t   n S e l   =   m _ w n d L i s t . G e t C u r S e l ( ) ;  
 	 i f   ( n S e l   <   0 )  
 	 {  
 	 	 r e t u r n   - 1 ;  
 	 }  
 	 l o n g   n I d   =   s t r 2 l o n g ( m _ w n d L i s t . G e t I t e m T e x t ( n S e l ,   0 ) ) ;  
 	 l o n g   n D o c N o   =   s t r 2 l o n g ( m _ w n d L i s t . G e t I t e m T e x t ( n S e l ,   1 ) ) ;  
 	 C S t r i n g   s z T y p e   =   m _ w n d L i s t . G e t I t e m T e x t ( n S e l ,   9 ) ;  
 	 i f ( s z T y p e   = =   _ T ( " L P " ) )  
 	 {  
 	 	 C I V F L a b P h i e u R a D i a l o g   d l g ( t h i s ,   V M _ E D I T ) ;  
 	 	 d l g . m _ n I d   =   n I d ;  
 	 	 i f ( d l g . D o M o d a l ( )   = =   I D O K )  
 	 	 {  
 	 	 	 O n L i s t L o a d D a t a ( ) ;  
 	 	 }  
  
 	 }  
 	 e l s e  
 	 {  
 	 	 C I V F L a b P h i e u T r u D i a l o g   d l g ( t h i s ,   n D o c N o ,   n I d ) ;  
 	 	 d l g . m _ n I d   =   n I d ;  
 	 	 i f ( d l g . D o M o d a l ( )   = =   I D O K )  
 	 	 {  
 	 	 	 O n L i s t L o a d D a t a ( ) ;  
 	 	 }  
 	 }  
 	  
 	 r e t u r n   0 ;  
 }  
  
 i n t   C I V F L a b L i s t : : O n L i s t R o l l b a c k I t e m ( )  
 {  
 	 r e t u r n   0 ;  
 }  
  
  
 v o i d   C I V F L a b L i s t : : O n W a i t i n g S e l e c t ( ) {  
 	  
 }  
 v o i d   C I V F L a b L i s t : : O n P e r f o r m e d S e l e c t ( ) {  
 	  
 }  
  
  
 v o i d   C I V F L a b L i s t : : O n S e t t i n g S e l e c t ( ) {  
 	 C M a i n F r a m e   * p M F   =   ( C M a i n F r a m e * )   A f x G e t M a i n W n d ( ) ;  
  
 	 C G u i M e n u   m e n u ( t h i s ) ;  
 	 C R e c t   r e c t ;  
 	 i n t   n P o s ; 	  
 	 m e n u . C r e a t e P o p u p M e n u ( ) ;  
 	 C S t r i n g   t m p S t r ;  
 	 i n t   n I D   =   1 ;  
 	 / / L o ¡i   d ù n g   c h u   c h o   c h éa ,   r ã , ( P h ô i   h o ·c   t i n h   t r ù n g ,   t r én g )  
 	 m e n u . A p p e n d M e n u ( M F _ B Y P O S I T I O N ,   1 ,   _ T ( " L o ¡i " ) ) ;  
  
 	 m e n u . A p p e n d M e n u ( M F _ S E P A R A T O R ,   0 ,   _ T ( " - " ) ) ;  
 	 m e n u . A p p e n d M e n u ( M F _ B Y P O S I T I O N ,   2 ,   _ T ( " P h °¡n g   p h á p " ) ) ;  
  
 	 m e n u . A p p e n d M e n u ( M F _ S E P A R A T O R ,   0 ,   _ T ( " - " ) ) ;  
 	 m e n u . A p p e n d M e n u ( M F _ B Y P O S I T I O N ,   3 ,   _ T ( " M ô i   t r °Ýn g " ) ) ;  
  
 	 m e n u . A p p e n d M e n u ( M F _ S E P A R A T O R ,   0 ,   _ T ( " - " ) ) ;  
 	 m e n u . A p p e n d M e n u ( M F _ B Y P O S I T I O N ,   4 ,   _ T ( " L o ¡i   d ån g   c å" ) ) ;  
  
 	 m e n u . A p p e n d M e n u ( M F _ S E P A R A T O R ,   0 ,   _ T ( " - " ) ) ;  
 	 m e n u . A p p e n d M e n u ( M F _ B Y P O S I T I O N ,   5 ,   _ T ( " D ån g   c å" ) ) ;  
  
 	 m e n u . A p p e n d M e n u ( M F _ S E P A R A T O R ,   0 ,   _ T ( " - " ) ) ;  
 	 m e n u . A p p e n d M e n u ( M F _ B Y P O S I T I O N ,   6 ,   _ T ( " C h ¥t   l °ãn g " ) ) ;  
  
  
 	 m e n u . A p p e n d M e n u ( M F _ S E P A R A T O R ,   0 ,   _ T ( " - " ) ) ;  
 	 m e n u . A p p e n d M e n u ( M F _ B Y P O S I T I O N ,   7 ,   _ T ( " D a n h   m åc   k h o " ) ) ;  
  
 	 m e n u . A p p e n d M e n u ( M F _ S E P A R A T O R ,   0 ,   _ T ( " - " ) ) ;  
 	 m e n u . A p p e n d M e n u ( M F _ B Y P O S I T I O N ,   8 ,   _ T ( " D a n h   m åc   t h ù n g " ) ) ;  
 	 m e n u . A p p e n d M e n u ( M F _ S E P A R A T O R ,   0 ,   _ T ( " - " ) ) ;  
 	 m e n u . A p p e n d M e n u ( M F _ B Y P O S I T I O N ,   9 ,   _ T ( " D a n h   m åc   g i á " ) ) ;  
 	 m e n u . A p p e n d M e n u ( M F _ S E P A R A T O R ,   0 ,   _ T ( " - " ) ) ;  
 	 m e n u . A p p e n d M e n u ( M F _ B Y P O S I T I O N ,   1 0 ,   _ T ( " D a n h   m åc   c a s s e t t e " ) ) ;  
 	 m e n u . A p p e n d M e n u ( M F _ S E P A R A T O R ,   0 ,   _ T ( " - " ) ) ;  
 	 m e n u . A p p e n d M e n u ( M F _ B Y P O S I T I O N ,   1 1 ,   _ T ( " D a n h   m åc   m à u   t o p " ) ) ;  
  
 	  
 	 m _ w n d S e t t i n g . G e t W i n d o w R e c t ( & r e c t ) ;  
 	 n P o s   =   m e n u . T r a c k P o p u p M e n u ( T P M _ N O N O T I F Y | T P M _ R E T U R N C M D | T P M _ R I G H T A L I G N | T P M _ T O P A L I G N ,   r e c t . r i g h t ,   r e c t . t o p ,   t h i s ) ;  
  
 	 s w i t c h ( n P o s ) {  
 	 c a s e   1 :  
 	 	 {  
 	 	 	 C I V F S e t t i n g D i a l o g   d l g ( t h i s ,   _ T ( " i v f _ s t o r a g e _ l o a i " ) ) ;  
 	 	 	 d l g . D o M o d a l ( ) ;  
 	 	 }  
 	 	 b r e a k ;  
 	 c a s e   2 :  
 	 	 {  
 	 	 	 C I V F S e t t i n g D i a l o g   d l g ( t h i s ,   _ T ( " i v f _ s t o r a g e _ p h u o n g p h a p " ) ,   _ T ( " i v f _ s t o r a g e _ l o a i " ) ) ;  
 	 	 	 d l g . D o M o d a l ( ) ;  
 	 	 } b r e a k ;  
 	 c a s e   3 :  
 	 	 {  
 	 	 	 C I V F S e t t i n g D i a l o g   d l g ( t h i s ,   _ T ( " i v f _ s t o r a g e _ m o i t r u o n g " ) ,   _ T ( " i v f _ s t o r a g e _ l o a i " ) ) ;  
 	 	 	 d l g . D o M o d a l ( ) ;  
 	 	 } b r e a k ;  
 	 c a s e   4 :  
 	 	 {  
 	 	 	 C I V F S e t t i n g D i a l o g   d l g ( t h i s ,   _ T ( " i v f _ s t o r a g e _ l o a i d u n g c u " ) ) ;  
 	 	 	 d l g . D o M o d a l ( ) ;  
 	 	 } b r e a k ;  
  
 	 c a s e   5 :  
 	 	 {  
 	 	 	 C I V F S e t t i n g D i a l o g   d l g ( t h i s ,   _ T ( " i v f _ s t o r a g e _ d u n g c u " ) ,   _ T ( " i v f _ s t o r a g e _ l o a i d u n g c u " ) ) ;  
 	 	 	 d l g . D o M o d a l ( ) ;  
 	 	 } b r e a k ;  
 	 c a s e   6 :  
 	 	 {  
 	 	 	 C I V F S e t t i n g D i a l o g   d l g ( t h i s ,   _ T ( " i v f _ s t o r a g e _ c h a t l u o n g " ) ) ;  
 	 	 	 d l g . D o M o d a l ( ) ;  
 	 	 } b r e a k ;  
 	 c a s e   7 :  
 	 	 {  
 	 	 	 C I V F S e t t i n g D i a l o g   d l g ( t h i s ,   _ T ( " i v f _ s t o r a g e _ l o c a t i o n " ) ) ;  
 	 	 	 d l g . D o M o d a l ( ) ;  
 	 	 } b r e a k ;  
 	 c a s e   8 :  
 	 	 {  
 	 	 	 C I V F S e t t i n g T h u n g D i a l o g   d l g ( t h i s ,   _ T ( " i v f _ s t o r a g e _ t h u n g " ) ,   _ T ( " i v f _ s t o r a g e _ l o c a t i o n " ) ) ;  
 	 	 	 d l g . D o M o d a l ( ) ;  
 	 	 } b r e a k ;  
 	 c a s e   9 :  
 	 	 {  
 	 	 	 C I V F S e t t i n g D i a l o g   d l g ( t h i s ,   _ T ( " i v f _ s t o r a g e _ g i a " ) ,   _ T ( " i v f _ s t o r a g e _ t h u n g " ) ) ;  
 	 	 	 d l g . D o M o d a l ( ) ;  
 	 	 } b r e a k ;  
 	 c a s e   1 0 :  
 	 	 {  
 	 	 	 C I V F S e t t i n g D i a l o g   d l g 3 ( t h i s ,   _ T ( " i v f _ s t o r a g e _ c a s s e t t e " ) ,   _ T ( " i v f _ s t o r a g e _ g i a " ) ) ;  
 	 	 	 d l g 3 . D o M o d a l ( ) ;  
 	 	 } b r e a k ;  
 	 c a s e   1 1 :  
 	 	 {  
 	 	 	 C I V F S e t t i n g D i a l o g   d l g ( t h i s ,   _ T ( " i v f _ s t o r a g e _ m a u t o p " ) ) ;  
 	 	 	 d l g . D o M o d a l ( ) ;  
 	 	 } b r e a k ;  
 	 } ;  
 }  
  
 # i n c l u d e   " I V F S t o r a g e V i e w D i a l o g . h "  
 v o i d   C I V F L a b L i s t : : O n S t o r a g e S e l e c t ( ) {  
 	 C M a i n F r a m e   * p M F   =   ( C M a i n F r a m e   * )   A f x G e t M a i n W n d ( ) ;  
 	 C I V F S t o r a g e V i e w D i a l o g   d l g ( t h i s ) ;  
 	 d l g . D o M o d a l ( ) ;  
 }  
  
 i n t   C I V F L a b L i s t : : O n A d d I V F L a b L i s t ( ) {  
   	 i f ( G e t M o d e ( )   = =   V M _ A D D   | |   G e t M o d e ( )   = =   V M _ E D I T )  
   	 	 r e t u r n   - 1 ;  
   	 C M a i n F r a m e   * p M F   =   ( C M a i n F r a m e   * )   A f x G e t M a i n W n d ( ) ;  
 	 i n t   n S e l   =   m _ w n d L i s t . G e t C u r S e l ( ) ;  
 	 i f   ( n S e l   <   0 )  
 	 {  
 	 	 r e t u r n   - 1 ;  
 	 }  
 	 l o n g   n I d x   =   s t r 2 l o n g ( m _ w n d L i s t . G e t I t e m T e x t ( n S e l ,   0 ) ) ;  
 / / 	 C I V F L a b D i a l o g   d l g ( t h i s ) ;  
 / / 	 d l g . m _ n I d x   =   n I d x ;  
 / / 	 d l g . D o M o d a l ( ) ;  
 	 r e t u r n   0 ;  
 }  
 i n t   C I V F L a b L i s t : : O n E d i t I V F L a b L i s t ( ) {  
   	 i f ( G e t M o d e ( )   ! =   V M _ V I E W )  
   	 	 r e t u r n   - 1 ;  
   	 C M a i n F r a m e   * p M F   =   ( C M a i n F r a m e   * )   A f x G e t M a i n W n d ( ) ;  
   	 S e t M o d e ( V M _ E D I T ) ;  
 	 r e t u r n   0 ;      
 }  
 i n t   C I V F L a b L i s t : : O n D e l e t e I V F L a b L i s t ( ) {  
   	 i f ( G e t M o d e ( )   ! =   V M _ V I E W )  
   	 	 r e t u r n   - 1 ;  
   	 C M a i n F r a m e   * p M F   =   ( C M a i n F r a m e   * ) A f x G e t M a i n W n d ( ) ;  
   	 C S t r i n g   s z S Q L ;  
   	 i f ( S h o w M e s s a g e ( 1 ,   M B _ Y E S N O | M B _ I C O N Q U E S T I O N | M B _ D E F B U T T O N 2 )   = =   I D N O )  
   	 	 r e t u r n   - 1 ;  
   	 s z S Q L . F o r m a t ( _ T ( " D E L E T E   F R O M     W H E R E     A N D " )   ) ;  
   	 i n t   r e t   =   p M F - > E x e c S Q L ( s z S Q L ) ;  
   	 i f ( r e t   > =   0 ) {  
   	 	 S e t M o d e ( V M _ N O N E ) ;  
   	 	 O n C a n c e l I V F L a b L i s t ( ) ;  
   	 }  
 	 r e t u r n   0 ;  
 }  
 i n t   C I V F L a b L i s t : : O n S a v e I V F L a b L i s t ( ) {  
   	 i f ( G e t M o d e ( )   ! =   V M _ A D D   & &   G e t M o d e ( )   ! =   V M _ E D I T )  
   	 	 r e t u r n   - 1 ;  
   	 i f ( ! I s V a l i d a t e D a t a ( ) )  
   	 	 r e t u r n   - 1 ;  
   	 C M a i n F r a m e   * p M F   =   ( C M a i n F r a m e   * ) A f x G e t M a i n W n d ( ) ;  
   	 C S t r i n g   s z S Q L ;  
   	 i f ( G e t M o d e ( )   = =   V M _ A D D ) {  
   	 	 / / s z S Q L   =   m _ t b l T b l . G e t I n s e r t S Q L ( ) ;  
   	 }  
   	 e l s e   i f ( G e t M o d e ( )   = =   V M _ E D I T ) {  
   	 	 C S t r i n g   s z W h e r e ;  
   	 	 s z W h e r e . F o r m a t ( _ T ( "   W H E R E " ) ) ;  
   	 	 / / s z S Q L   =   m _ t b l T b l . G e t U p d a t e S Q L ( _ T ( " c r e a t e d b y , c r e a t e d d a t e " ) ) ;  
   	 	 s z S Q L   + =   s z W h e r e ;  
   	 }  
   _ f m s g ( _ T ( " % s " ) ,   s z S Q L ) ;  
   	 i n t   r e t   =   p M F - > E x e c S Q L ( s z S Q L ) ;  
   	 i f ( r e t   >   0 )  
   	 {  
   	 	 / / O n I V F L a b L i s t L i s t L o a d D a t a ( ) ;  
   	 	 S e t M o d e ( V M _ V I E W ) ;  
   	 }  
   	 e l s e  
   	 {  
   	 }  
   	 r e t u r n   r e t ;  
   	 r e t u r n   0 ;  
 }  
 i n t   C I V F L a b L i s t : : O n C a n c e l I V F L a b L i s t ( ) {  
   	 i f ( G e t M o d e ( )   = =   V M _ E D I T )  
   	 {  
   	 	 S e t M o d e ( V M _ V I E W ) ;  
   	 }    
   	 e l s e    
   	 {  
   	 	 S e t M o d e ( V M _ N O N E ) ;  
   	 }    
   	 C M a i n F r a m e   * p M F   =   ( C M a i n F r a m e   * ) A f x G e t M a i n W n d ( ) ;  
   	 r e t u r n   0 ;  
 }    
 i n t   C I V F L a b L i s t : : O n I V F L a b L i s t L i s t L o a d D a t a ( ) {  
 	 r e t u r n   0 ;  
 }  
  
  
 v o i d   C I V F L a b L i s t : : O n R e s i z e L a y o u t ( )  
 {  
 	 A d d L a y o u t C o n t r o l ( & m _ w n d S e a r c h I n f o r m a t i o n ,   W S _ R E S I Z E X ,   0 ,   0 ,   1 0 0 ,   0 ) ;  
 	 A d d L a y o u t C o n t r o l ( & m _ w n d L i s t ,   W S _ R E S I Z E X | W S _ R E S I Z E Y ,   0 ,   0 ,   1 0 0 ,   1 0 0 ) ;  
 	 A d d L a y o u t C o n t r o l ( & m _ w n d F r o m D a t e ,   W S _ R E S I Z E X ,   0 ,   0 ,   2 0 ,   0 ) ;  
 	 A d d L a y o u t C o n t r o l ( & m _ w n d T o D a t e L a b e l ,   W S _ R E P O S X ,   2 0 ,   0 ,   0 ,   0 ) ;  
 	 A d d L a y o u t C o n t r o l ( & m _ w n d T o D a t e ,   W S _ R E S I Z E X | W S _ R E P O S X ,   2 0 ,   0 ,   2 0 ,   0 ) ;  
 	 A d d L a y o u t C o n t r o l ( & m _ w n d T y p e L a b e l ,   W S _ R E P O S X ,   4 0 ,   0 ,   0 ,   0 ) ;  
 	 A d d L a y o u t C o n t r o l ( & m _ w n d T y p e ,   W S _ R E S I Z E X | W S _ R E P O S X ,   4 0 ,   0 ,   2 0 ,   0 ) ;  
 	 A d d L a y o u t C o n t r o l ( & m _ w n d D o c u m e n t N o L a b e l ,   W S _ R E P O S X ,   6 0 ,   0 ,   0 ,   0 ) ;  
 	 A d d L a y o u t C o n t r o l ( & m _ w n d D o c u m e n t N o ,   W S _ R E S I Z E X | W S _ R E P O S X ,   6 0 ,   0 ,   2 0 ,   0 ) ;  
 	 A d d L a y o u t C o n t r o l ( & m _ w n d R e f r e s h ,   W S _ R E S I Z E X | W S _ R E P O S X ,   8 0 ,   0 ,   2 0 ,   0 ) ;  
 	 A d d L a y o u t C o n t r o l ( & m _ w n d S t o r a g e ,   W S _ R E P O S Y | W S _ R E P O S X ,   1 0 0 ,   1 0 0 ,   0 ,   0 ) ;    
 	 A d d L a y o u t C o n t r o l ( & m _ w n d S e t t i n g ,   W S _ R E P O S Y | W S _ R E P O S X ,   1 0 0 ,   1 0 0 ,   0 ,   0 ) ;    
 	 A d d L a y o u t C o n t r o l ( & m _ w n d W a i t i n g ,   W S _ R E P O S Y ,   0 ,   1 0 0 ,   0 ,   0 ) ;    
 	 A d d L a y o u t C o n t r o l ( & m _ w n d P e r f o r m e d ,   W S _ R E P O S Y ,   0 ,   1 0 0 ,   0 ,   0 ) ;    
 } >>>>>>> .r14926
