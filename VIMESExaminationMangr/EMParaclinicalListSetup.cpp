#include "EMParaclinicalListSetup.h"
//#include "stdafx.h"
#include "MainFrm.h"
//#include "HMSOperationGroupPopup.h"
#include "SYSReportParameter.h"

static int _OnParaclinicalListLoadDataFnc(CWnd *pWnd){
	 return ((CEMParaclinicalListSetup*)pWnd)->OnParaclinicalListLoadData();
} 
static int _OnParaclinicalListDblClickFnc(CWnd *pWnd){
	 return ((CEMParaclinicalListSetup*)pWnd)->OnParaclinicalListDblClick();
} 
static int _OnParaclinicalListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	 return ((CEMParaclinicalListSetup*)pWnd)->OnParaclinicalListSelectChange(nOldItem, nNewItem);
} 
static int _OnParaclinicalListDeleteItemFnc(CWnd *pWnd){
	 return ((CEMParaclinicalListSetup*)pWnd)->OnParaclinicalListDeleteItem();
} 
static int _OnFeeListLoadDataFnc(CWnd *pWnd){
	 return ((CEMParaclinicalListSetup*)pWnd)->OnFeeListLoadData();
} 
static int _OnFeeListDblClickFnc(CWnd *pWnd){
	 return ((CEMParaclinicalListSetup*)pWnd)->OnFeeListDblClick();
} 
static int _OnFeeListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	 return ((CEMParaclinicalListSetup*)pWnd)->OnFeeListSelectChange(nOldItem, nNewItem);
} 
static int _OnFeeListDeleteItemFnc(CWnd *pWnd){
	 return ((CEMParaclinicalListSetup*)pWnd)->OnFeeListDeleteItem();
} 

static int _OnFeeListSortIndexFnc(CWnd *pWnd){
	 return ((CEMParaclinicalListSetup*)pWnd)->OnFeeListSortIndex();
} 
static int _OnListShowLogItemFnc(CWnd *pWnd){
	return ((CEMParaclinicalListSetup*)pWnd)->OnListShowLogItem();
}
static int _OnFindChangeFnc(CWnd *pWnd){
	return ((CEMParaclinicalListSetup *)pWnd)->OnFindChange();
}

static int _OnSetSubGroupFnc(CWnd *pWnd){
	 return ((CEMParaclinicalListSetup*)pWnd)->OnSetSubGroup();
} 
static int _OnSetSubItemFnc(CWnd *pWnd){
	 return ((CEMParaclinicalListSetup*)pWnd)->OnSetSubItem();
} 


static int _OnFilterSelectFnc(CWnd *pWnd){
	CEMParaclinicalListSetup *pVw = (CEMParaclinicalListSetup *)pWnd;
	return pVw->OnFilterSelect();
}

static int _OnAddSelectFnc(CWnd *pWnd){
	CEMParaclinicalListSetup *pVw = (CEMParaclinicalListSetup *)pWnd;
	return pVw->OnAddSelect();
} 
static int _OnEditSelectFnc(CWnd *pWnd){
	CEMParaclinicalListSetup *pVw = (CEMParaclinicalListSetup *)pWnd;
	return pVw->OnEditSelect();
} 
static int _OnDeleteSelectFnc(CWnd *pWnd){
	CEMParaclinicalListSetup *pVw = (CEMParaclinicalListSetup *)pWnd;
	return pVw->OnDeleteSelect();
} 
static int _OnAddHMSParaclinicalListSetupFnc(CWnd *pWnd){
	 return ((CEMParaclinicalListSetup*)pWnd)->OnAddHMSParaclinicalListSetup();
} 
static int _OnEditHMSParaclinicalListSetupFnc(CWnd *pWnd){
	 return ((CEMParaclinicalListSetup*)pWnd)->OnEditHMSParaclinicalListSetup();
} 
static int _OnDeleteHMSParaclinicalListSetupFnc(CWnd *pWnd){
	 return ((CEMParaclinicalListSetup*)pWnd)->OnDeleteHMSParaclinicalListSetup();
} 
static int _OnSaveHMSParaclinicalListSetupFnc(CWnd *pWnd){
	 return ((CEMParaclinicalListSetup*)pWnd)->OnSaveHMSParaclinicalListSetup();
} 
static int _OnCancelHMSParaclinicalListSetupFnc(CWnd *pWnd){
	 return ((CEMParaclinicalListSetup*)pWnd)->OnCancelHMSParaclinicalListSetup();
} 
CEMParaclinicalListSetup::CEMParaclinicalListSetup(CWnd* pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 800;
	m_nDlgHeight = 590;
	SetDefaultValues();
}
CEMParaclinicalListSetup::~CEMParaclinicalListSetup(){
}
void CEMParaclinicalListSetup::OnCreateComponents(){
	m_wndParaclinicalList.Create(this,5, 5, 255, 585); 
	m_wndFeeList.Create(this,260, 5, 805, 555); 
	m_wndFindLabel.Create(this, _T("&Find"), 260, 560, 330, 585);
	m_wndFind.Create(this,335, 560, 530, 585); 
	m_wndEdit.Create(this, _T("&Edit"), 565, 560, 640, 585);
	m_wndAdd.Create(this, _T("&Add"), 565, 560, 640, 585);
	//m_wndEdit.Create(this, _T("&Edit"), 645, 560, 720, 585);
	m_wndDelete.Create(this, _T("&Delete"), 725, 560, 800, 585);
	m_wndFilter.Create(this, _T("@"), 535, 560, 560, 585);	
	m_wndAdd.ShowWindow(SW_HIDE);
	m_wndDelete.ShowWindow(SW_HIDE);
}
void CEMParaclinicalListSetup::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szCode;
	TCHAR chOld=_T(' '), ch;
	//1: Nhom can lam sang
	szSQL.Format(_T("SELECT * FROM hms_fee_group WHERE substr(hfg_id, 1, 2) IN('B2','B3') AND hfg_active = 'Y' ORDER BY hfg_index, hfg_id "));
	
	rs.ExecSQL(szSQL);
	m_arCode.RemoveAll();
	while(!rs.IsEOF()){
		rs.GetValue(_T("hfg_id"), szCode);
		ch = szCode[2];
		if(ch == _T('0'))
		{
			rs.GetValue(_T("hfg_name"), tmpStr);
			m_wndParaclinicalList.AddCaption(tmpStr);
			m_arCode.Add(CString(_T("")));
		}
		else
		{
			m_wndParaclinicalList.Add(rs.GetValue(_T("hfg_name")), _T(""), NULL);
			m_arCode.Add(szCode);
		}
		rs.MoveNext();
	};
	m_wndParaclinicalList.ModifyStyle(0, WS_BORDER|WS_VSCROLL);
	m_wndFind.SetLimitText(35);
	m_wndFind.ModifyStyle(WS_TABSTOP, 0);

//	m_wndFind.SetCheckValue(true);

	m_wndFeeList.InsertColumn(0, _T("ID"), CFMT_TEXT, 85);
	m_wndFeeList.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);
	m_wndFeeList.InsertColumn(2, _T("Conversion Rate"), CFMT_NUMBER, 80);
	m_wndFeeList.InsertColumn(3, _T("Unit"), CFMT_TEXT, 50);
	m_wndFeeList.InsertColumn(4, _T("Service Price"), CFMT_MONEY, 80);
	m_wndFeeList.InsertColumn(5, _T("Insurance Price"), CFMT_MONEY, 80);
	m_wndFeeList.InsertColumn(6, _T("Policy Price"), CFMT_MONEY, 80);
	m_wndFeeList.InsertColumn(7, _T("Return Dept"), CFMT_MONEY, 60);
	m_wndFeeList.InsertColumn(8, _T("Dept ID"), CFMT_TEXT, 50);
	m_wndFeeList.InsertColumn(9, _T("Operation Group"), CFMT_TEXT, 60);
	m_wndFeeList.SetAllowDrag(true);
	m_wndFeeList.ModifyStyle(LVS_SINGLESEL, 0);
	
}
void CEMParaclinicalListSetup::OnSetWindowEvents(){
	m_wndParaclinicalList.SetCallback(_OnParaclinicalListSelectChangeFnc);
	m_wndParaclinicalList.SetFontSize(GetFaceSize());
	//m_wndParaclinicalList.SetEvent(WE_LOADDATA, _OnParaclinicalListLoadDataFnc);
	//m_wndParaclinicalList.SetEvent(WE_DBLCLICK, _OnParaclinicalListDblClickFnc);
//	m_wndParaclinicalList.AddEvent(1, _T("Delete"), _OnParaclinicalListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndFeeList.SetEvent(WE_SELCHANGE, _OnFeeListSelectChangeFnc);
	m_wndFeeList.SetEvent(WE_LOADDATA, _OnFeeListLoadDataFnc);
	m_wndFeeList.SetEvent(WE_DBLCLICK, _OnFeeListDblClickFnc);
	m_wndFeeList.SetWindowText(_T("Fee Entry"));
	//m_wndFeeList.AddEvent(1, _T("Subgroup Setting"), _OnSetSubGroupFnc);
	//m_wndFeeList.AddEvent(2, _T("Subitem Setting"), _OnSetSubItemFnc);
	//m_wndFeeList.AddEvent(0, _T("-"), NULL);
	//m_wndFeeList.AddEvent(3, _T("Delete"), _OnFeeListDeleteItemFnc, 0, VK_DELETE, 0);
	//m_wndFeeList.AddEvent(4, _T("Sort Index"), _OnFeeListSortIndexFnc);
	//m_wndFeeList.AddEvent(5, _T("Show table of fixed charges"), _OnListShowLogItemFnc);

	m_wndFind.SetEvent(WE_CHANGE, _OnFindChangeFnc);
	m_wndFilter.SetEvent(WE_CLICK, _OnFilterSelectFnc);

	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	EnableButtons(TRUE, -1);
}
void CEMParaclinicalListSetup::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndFind.GetDlgCtrlID(), m_szFind);
}
void CEMParaclinicalListSetup::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 

}
void CEMParaclinicalListSetup::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 

}
void CEMParaclinicalListSetup::SetDefaultValues(){


}
int CEMParaclinicalListSetup::SetMode(int nMode){ 
 		int nOldMode = GetMode(); 
 		CGuiDialog::SetMode(nMode); 
 		CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
  		switch(nMode){ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, -1); 
 			SetDefaultValues(); 
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 3, 4, -1); 
 			break; 
 		case VM_VIEW: 
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 0, 1, 2, -1); 
 			break; 
 		case VM_NONE: 
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 0, 6, -1); 
 			SetDefaultValues(); 
 			break; 
 		}; 
		m_wndFilter.EnableWindow(TRUE);
 		UpdateData(FALSE); 
 		return nOldMode; 
 	} 
int CEMParaclinicalListSetup::OnParaclinicalListDblClick(){
	 return 0;
} 
int CEMParaclinicalListSetup::OnParaclinicalListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	if(nNewItem < 0 || nNewItem >= m_arCode.GetCount())
	{
		EnableButtons(false, -1);
	//	m_szCode.Empty();
		return -1;
	}
	EnableButtons(true, 0, -1);
	m_szCode = m_arCode.GetAt(nNewItem);
	OnFeeListLoadData();
	return 0;
} 
int CEMParaclinicalListSetup::OnParaclinicalListDeleteItem(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	 return 0;
} 
int CEMParaclinicalListSetup::OnParaclinicalListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndParaclinicalList.BeginLoad(); 
	m_wndParaclinicalList.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndParaclinicalList.AddItems(
		rs.MoveNext();
	}
	m_wndParaclinicalList.EndLoad(); 
	return nCount;
*/
	return 0;
}
int CEMParaclinicalListSetup::OnFeeListDblClick(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	
	int nSel = m_wndFeeList.GetCurSel();
	if(nSel < 0) return 0;
	CString szID = m_wndFeeList.GetItemText(nSel, 0);
	CSYSReportParameter dlg(pMF);
	dlg.m_szFeeID = szID;
	if(dlg.DoModal() == IDOK){
		OnFeeListLoadData();
	}
	return 0;
} 
int CEMParaclinicalListSetup::OnFeeListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	int nSel = m_wndFeeList.GetCurSel();
	if(nSel < 0)
		return -1;

	m_szFeeID = m_wndFeeList.GetItemText(nSel, 0);
	SetMode(VM_VIEW);
	 return 0;
} 
int CEMParaclinicalListSetup::OnFeeListDeleteItem(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	OnDeleteHMSParaclinicalListSetup();
	return 0;
} 
int CEMParaclinicalListSetup::OnFeeListSortIndex(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CString szSQL, szID;
	for (int i =0; i < m_wndFeeList.GetItemCount(); i++){
		szID = m_wndFeeList.GetItemText(i, 0);
		szSQL.Format(_T("UPDATE hms_fee_list SET hfl_line=%d WHERE hfl_groupid='%s' and hfl_feeid='%s' "), i+1, m_szCode, szID);
		pMF->ExecSQL(szSQL);
	}
	return 0;
} 
int CEMParaclinicalListSetup::OnFeeListLoadData(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szSubItem, szSubGroup, tmpStr;
	m_wndFeeList.BeginLoad(); 
	int nCount = 0, nRate = 0;
	if(!m_szFind.IsEmpty())
	{
		szWhere.Format(_T(" AND lower(hfl_name) like(chr(37)||lower('%s')||chr(37)) "), m_szFind);
	}
	szWhere.AppendFormat(_T(" AND hfl_applydate = cast_string2date('2013/09/02')"));
	szSQL.Format(	_T(" SELECT ") \
					_T(" 	fl.*, coalesce(hrp_conversion_rate, 1) rate") \
					_T(" FROM") \
					_T(" 	hms_fee_list fl") \
					_T(" LEFT JOIN hms_report_parameter rp ON (hfl_feeid = hrp_item_id)") \
					_T(" WHERE") \
					_T(" 	hfl_groupid='%s' %s ") \
					_T(" ORDER BY") \
					_T(" 	hfl_line,") \
					_T(" 	hfl_feeid"), m_szCode, szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		rs.GetValue(_T("hfl_subgroup"), szSubGroup);
		rs.GetValue(_T("hfl_subitem"), szSubItem);
		rs.GetValue(_T("rate"), nRate);
		tmpStr.Empty();
		if(szSubGroup == _T("Y"))
			tmpStr = _T("(*) ");
		if(!szSubGroup.IsEmpty() && szSubGroup != _T("Y"))
			tmpStr = _T("  ");
		if(szSubItem == _T("Y"))
			tmpStr = _T("[+] ");
		if(!szSubItem.IsEmpty() && szSubItem != _T("Y"))
			tmpStr = _T(" - ");
		int nItem = m_wndFeeList.AddItems(
			rs.GetValue(_T("hfl_feeid")), 
			tmpStr + rs.GetValue(_T("hfl_name")),
			int2str(nRate),
			rs.GetValue(_T("hfl_unit")), 
			rs.GetValue(_T("hfl_servprice")), 
			rs.GetValue(_T("hfl_insprice")), 
			rs.GetValue(_T("hfl_polprice")),
			rs.GetValue(_T("hfl_retprice")),
			rs.GetValue(_T("hfl_deptid")),
			rs.GetValue(_T("hfl_rpt_group")),
			NULL);
		if (nRate > 1)
			m_wndFeeList.SetItemBkColor(nItem, RGB(255, 128, 0), FALSE);
		if(szSubGroup == _T("Y"))
			m_wndFeeList.SetItemBkColor(nItem, RGB(200, 200, 255), FALSE);
		if(szSubItem == _T("Y"))
			m_wndFeeList.SetItemBkColor(nItem, RGB(240, 240, 255), FALSE);
		rs.MoveNext();
	}
	m_wndFeeList.EndLoad(); 
	return nCount;

}

int CEMParaclinicalListSetup::OnSetSubGroup(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	int nSel;
	nSel = m_wndFeeList.GetCurSel();
	if(nSel < 0) return 0;
	CString szSQL, szID;
	CRecord rs(&pMF->m_db);
	//CHMSSelectionListDialog dlg(this);
	//
	//szID = m_wndFeeList.GetItemText(nSel, 0);
	//szSQL.Format(_T("SELECT htp_itemid, hfl_name FROM hms_testprofile LEFT JOIN hms_fee_list ON(hfl_groupid='%s' and htp_itemid=hfl_feeid) WHERE htp_profileid='%s' "), m_szCode, szID);
	//rs.ExecSQL(szSQL);
	//while(!rs.IsEOF()){
	//	CHMSSelectionListDialog::SELITEM si;
	//	rs.GetValue(_T("htp_itemid"), si.szID);
	//	rs.GetValue(_T("hfl_name"), si.szName);
	//	dlg.m_arraySelection.Add(si);
	//	rs.MoveNext();
	//}
	//
	//dlg.m_szSQL.Format(_T("select hfl_feeid as id, hfl_name as name ") \
	//	_T("from hms_fee_list ") \
	//	_T("where hfl_groupid='%s' and hfl_feeid <> '%s' and (hfl_subgroup<>'Y' or hfl_subgroup is null) and hfl_subitem IS NULL ") \
	//	_T("order by hfl_line "), m_szCode, szID);
	//if(dlg.DoModal() == IDOK){
	//	pMF->BeginTransaction();
	//	if(dlg.m_arraySelection.GetCount() > 0)
	//	{
	//		szSQL.Format(_T("UPDATE hms_fee_list SET hfl_subgroup='Y', hfl_subitem='' WHERE hfl_groupid='%s' AND hfl_feeid='%s' "), m_szCode, szID);
	//		pMF->ExecSQL(szSQL);

	//		szSQL.Format(_T("UPDATE hms_fee_list SET hfl_subgroup='', hfl_subitem='' WHERE hfl_groupid='%s' AND hfl_feeid in(select htp_itemid from hms_testprofile where htp_profileid='%s')  "), m_szCode, szID);
	//		pMF->ExecSQL(szSQL);
	//		szSQL.Format(_T("DELETE FROM hms_testprofile WHERE htp_profileid='%s' "), szID);
	//		pMF->ExecSQL(szSQL);

	//		for (int i =0; i < dlg.m_arraySelection.GetCount(); i++){
	//			CHMSSelectionListDialog::SELITEM si;
	//			si = dlg.m_arraySelection[i];
	//			szSQL.Format(_T("UPDATE hms_fee_list SET hfl_subgroup='YY', hfl_subitem='' WHERE hfl_groupid='%s' AND hfl_feeid='%s' "), m_szCode, si.szID);
	//			pMF->ExecSQL(szSQL);
	//			szSQL.Format(_T("INSERT INTO hms_testprofile VALUES('%s', '%s') "), szID, si.szID);
	//			pMF->ExecSQL(szSQL);
	//		}
	//	}
	//	else
	//	{
	//		szSQL.Format(_T("UPDATE hms_fee_list SET hfl_subgroup='', hfl_subitem='' WHERE hfl_groupid='%s' AND hfl_feeid='%s' "), m_szCode, szID);
	//		pMF->ExecSQL(szSQL);
	//		szSQL.Format(_T("UPDATE hms_fee_list SET hfl_subgroup='', hfl_subitem='' WHERE hfl_groupid='%s' AND hfl_feeid in(select htp_itemid from hms_testprofile where htp_profileid='%s') "), m_szCode, szID);
	//		pMF->ExecSQL(szSQL);
	//		szSQL.Format(_T("DELETE FROM hms_testprofile WHERE htp_profileid='%s' "), szID);
	//		pMF->ExecSQL(szSQL);
	//	}
	//	pMF->Commit();
	//}
	return 0;
}

int CEMParaclinicalListSetup::OnSetSubItem(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	int nSel;
	nSel = m_wndFeeList.GetCurSel();
	if(nSel < 0) return 0;
	CString szSQL, szID;
	CRecord rs(&pMF->m_db);
	//CHMSSelectionListDialog dlg(this);
	//
	//szID = m_wndFeeList.GetItemText(nSel, 0);
	//szSQL.Format(_T("SELECT * FROM hms_fee_list WHERE hfl_groupid='%s' AND hfl_subitem='%s' "), m_szCode, szID);
	//rs.ExecSQL(szSQL);
	//while(!rs.IsEOF()){
	//	CHMSSelectionListDialog::SELITEM si;
	//	rs.GetValue(_T("hfl_feeid"), si.szID);
	//	rs.GetValue(_T("hfl_name"), si.szName);
	//	dlg.m_arraySelection.Add(si);
	//	rs.MoveNext();
	//}
	//
	//dlg.m_szSQL.Format(_T("select hfl_feeid as id, hfl_name as name from hms_fee_list ") \
	//	_T("where hfl_groupid='%s' and hfl_feeid <> '%s' and (hfl_subgroup is null or hfl_subgroup<>'Y') ") \
	//	_T(" and (hfl_subitem<>'Y' or hfl_subitem is null) order by hfl_line "), m_szCode, szID);

	//if(dlg.DoModal() == IDOK){
	//	pMF->BeginTransaction();
	//	szSQL.Format(_T("UPDATE hms_fee_list SET hfl_subgroup='N', hfl_subitem='Y' WHERE hfl_groupid='%s' AND hfl_feeid='%s' "), m_szCode, szID);
	//	pMF->ExecSQL(szSQL);
	//	szSQL.Format(_T("UPDATE hms_fee_list SET hfl_subgroup='N', hfl_subitem='' WHERE hfl_groupid='%s' AND hfl_subitem='%s' "), m_szCode, szID);
	//	pMF->ExecSQL(szSQL);
	//	for (int i =0; i < dlg.m_arraySelection.GetCount(); i++){
	//		CHMSSelectionListDialog::SELITEM si;
	//		si = dlg.m_arraySelection[i];
	//		szSQL.Format(_T("UPDATE hms_fee_list SET hfl_subgroup='', hfl_subitem='%s' WHERE hfl_groupid='%s' AND hfl_feeid='%s' "), szID, m_szCode, si.szID);
	//		pMF->ExecSQL(szSQL);
	//	}
	//	pMF->Commit();
	//}
	return 0;
}

int CEMParaclinicalListSetup::OnFilterSelect(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRect rect;
	m_wndFilter.GetWindowRect(&rect);
	rect.right-=325;
	rect.bottom -= 305;
	 return 0;
}
int CEMParaclinicalListSetup::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	OnAddHMSParaclinicalListSetup();
	 return 0;
} 
int CEMParaclinicalListSetup::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	//OnEditHMSParaclinicalListSetup();
	OnFeeListDblClick();
	return 0;
} 
int CEMParaclinicalListSetup::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	OnDeleteHMSParaclinicalListSetup();
	 return 0;
} 
int CEMParaclinicalListSetup::OnAddHMSParaclinicalListSetup(){
	int nSel = m_wndParaclinicalList.GetCurSel();
	if(nSel < 0)
		return -1;
	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
	//CHMSParaclinicalSetupDialog dlg(pMF, this);
	//CString szText;
	//m_wndParaclinicalList.GetText(nSel, szText);
	//dlg.SetMode(VM_ADD);
	//dlg.m_szGroupKey = m_szCode;
	//dlg.DoModal();
	return 0; 
} 
int CEMParaclinicalListSetup::OnEditHMSParaclinicalListSetup(){
	if(m_szCode.IsEmpty())
		return -1;
	int nCurSel = m_wndFeeList.GetCurSel();
	if(nCurSel < 0)
		return -1;
	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
	//CHMSParaclinicalSetupDialog dlg(pMF, this);
	//dlg.SetMode(VM_EDIT);
	//dlg.m_szGroupKey = m_szCode;
	//dlg.m_szID = m_wndFeeList.GetItemText(nCurSel, 0);
	//dlg.m_szDepartmentKey = m_wndFeeList.GetItemText(nCurSel, 7);
	//dlg.DoModal();
	return 0;
} 
int CEMParaclinicalListSetup::OnDeleteHMSParaclinicalListSetup(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
 	CString szSQL, tmpStr; 
	CRecord rs(&pMF->m_db);

 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
	
	int nID = -1;
	for (int i = m_wndFeeList.GetItemCount()-1; i>=0; i--){
		if(m_wndFeeList.GetItemState(i, LVIS_SELECTED))
		{
			CString szID = m_wndFeeList.GetItemText(i, 0);
			tmpStr.Format(_T("This is item fee active. Can not delete item fee [%s]!"), szID);
			szSQL.Format(_T(" select count(*) from hmsv_test_line  where hpcl_itemid ='%s'"), szID);
			rs.ExecSQL(szSQL);
			if (rs.GetIntValue() > 0){
				ShowMessageBox(tmpStr, MB_OK|MB_ICONWARNING);
				return -1;
			}
			szSQL.Format(_T(" select count(*) from hmsv_pacs_line  where hpcl_itemid ='%s'"), szID);
			rs.ExecSQL(szSQL);
			if (rs.GetIntValue() > 0){
				ShowMessageBox(tmpStr, MB_OK|MB_ICONWARNING);
				return -1;
			}

 			szSQL.Format(_T("DELETE FROM hms_fee_list WHERE  hfl_feeid='%s' ") , szID); 
			pMF->ExecSQL(szSQL); 
			m_wndFeeList.DeleteItem(i);
			nID++;
		}
	}
 	if(nID >= 0){ 
 		SetMode(VM_NONE); 
		OnCancelHMSParaclinicalListSetup(); 
		return nID;
 	}
	return 0;
 } 
int CEMParaclinicalListSetup::OnSaveHMSParaclinicalListSetup(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
// 		szSQL = m_tblTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE")); 
 	//	szSQL = m_tblTbl.GetUpdateSQL(_T("createdby,createddate")); 
 		szSQL += szWhere; 
 	} 
 //_fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		//OnHMSParaclinicalListSetupListLoadData(); 
 		SetMode(VM_VIEW); 
 		 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CEMParaclinicalListSetup::OnCancelHMSParaclinicalListSetup(){
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
int CEMParaclinicalListSetup::OnHMSParaclinicalListSetupListLoadData(){
	return 0;
}

int CEMParaclinicalListSetup::OnFindChange(){
	
	UpdateData(true);
	OnFeeListLoadData();
	return 0;
}
//#include "HMSFeeListEditDetailDialog.h"
int CEMParaclinicalListSetup::OnListShowLogItem(){
	//CHMSFeeListEditDetailDialog dlg(this);
	//dlg.m_szFeeID=m_szFeeID;
	//dlg.DoModal();
	return 0;
}

