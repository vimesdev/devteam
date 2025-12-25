#include "rptParaclinicalReportDialog.h"
#include "../MainFrm.h"
#include "ReportDocument.h"

/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((rptParaclinicalReportDialog *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((rptParaclinicalReportDialog *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((rptParaclinicalReportDialog *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((rptParaclinicalReportDialog *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((rptParaclinicalReportDialog *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((rptParaclinicalReportDialog *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((rptParaclinicalReportDialog *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((rptParaclinicalReportDialog *)pWnd)->OnToDateCheckValue();
} 
static void _OnRoomSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((rptParaclinicalReportDialog* )pWnd)->OnRoomSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnRoomSelendokFnc(CWnd *pWnd){
	((rptParaclinicalReportDialog *)pWnd)->OnRoomSelendok();
}
/*static void _OnRoomSetfocusFnc(CWnd *pWnd){
	((rptParaclinicalReportDialog *)pWnd)->OnRoomKillfocus();
}*/
/*static void _OnRoomKillfocusFnc(CWnd *pWnd){
	((rptParaclinicalReportDialog *)pWnd)->OnRoomKillfocus();
}*/
static long _OnRoomLoadDataFnc(CWnd *pWnd){
	return ((rptParaclinicalReportDialog *)pWnd)->OnRoomLoadData();
}
/*static void _OnRoomAddNewFnc(CWnd *pWnd){
	((rptParaclinicalReportDialog *)pWnd)->OnRoomAddNew();
}*/
static void _OnInputResultsSelectFnc(CWnd *pWnd){
	 ((rptParaclinicalReportDialog*)pWnd)->OnInputResultsSelect();
}
static void _OnFeeAcceptedSelectFnc(CWnd *pWnd){
	 ((rptParaclinicalReportDialog*)pWnd)->OnFeeAcceptedSelect();
}
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((rptParaclinicalReportDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((rptParaclinicalReportDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((rptParaclinicalReportDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((rptParaclinicalReportDialog*)pWnd)->OnListDeleteItem();
} 
static void _OnRunSelectFnc(CWnd *pWnd){
	rptParaclinicalReportDialog *pVw = (rptParaclinicalReportDialog *)pWnd;
	pVw->OnRunSelect();
} 
static void _OnPreviewSelectFnc(CWnd *pWnd){
	rptParaclinicalReportDialog *pVw = (rptParaclinicalReportDialog *)pWnd;
	pVw->OnPreviewSelect();
} 
static void _OnExportXLSSelectFnc(CWnd *pWnd){
	rptParaclinicalReportDialog *pVw = (rptParaclinicalReportDialog *)pWnd;
	pVw->OnExportXLSSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	rptParaclinicalReportDialog *pVw = (rptParaclinicalReportDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddrptParaclinicalReportDialogFnc(CWnd *pWnd){
	 return ((rptParaclinicalReportDialog*)pWnd)->OnAddrptParaclinicalReportDialog();
} 
static int _OnEditrptParaclinicalReportDialogFnc(CWnd *pWnd){
	 return ((rptParaclinicalReportDialog*)pWnd)->OnEditrptParaclinicalReportDialog();
} 
static int _OnDeleterptParaclinicalReportDialogFnc(CWnd *pWnd){
	 return ((rptParaclinicalReportDialog*)pWnd)->OnDeleterptParaclinicalReportDialog();
} 
static int _OnSaverptParaclinicalReportDialogFnc(CWnd *pWnd){
	 return ((rptParaclinicalReportDialog*)pWnd)->OnSaverptParaclinicalReportDialog();
} 
static int _OnCancelrptParaclinicalReportDialogFnc(CWnd *pWnd){
	 return ((rptParaclinicalReportDialog*)pWnd)->OnCancelrptParaclinicalReportDialog();
} 
rptParaclinicalReportDialog::rptParaclinicalReportDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 960;
	m_nDlgHeight = 605;
	SetDefaultValues();
}
rptParaclinicalReportDialog::~rptParaclinicalReportDialog(){
}
void rptParaclinicalReportDialog::OnCreateComponents(){
	m_wndReportParameters.Create(this, _T("Report Parameters"), 5, 5, 955, 565);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 180, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 185, 30, 265, 55);
	m_wndToDate.Create(this,270, 30, 355, 55); 
	m_wndRoomLabel.Create(this, _T("Room"), 360, 30, 440, 55);
	m_wndRoom.Create(this,445, 30, 645, 55); 
	m_wndInputResults.Create(this, _T("Input Results"), 655, 29, 825, 54);
	m_wndFeeAccepted.Create(this, _T("Fee Accepted"), 830, 29, 950, 54);
	m_wndList.Create(this,10, 59, 950, 559); 
	m_wndRun.Create(this, _T("&Run"), 640, 570, 715, 595);
	m_wndPreview.Create(this, _T("&Preview"), 720, 570, 795, 595);
	m_wndExportXLS.Create(this, _T("&Export XLS"), 800, 570, 875, 595);
	m_wndClose.Create(this, _T("&Close"), 880, 570, 955, 595);

}
void rptParaclinicalReportDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
	m_wndRoom.SetCheckValue(true);
	m_wndRoom.LimitText(35);

	m_wndRoom.Format(2, 1, 20);
	m_wndRoom.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndRoom.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);

	
	m_wndList.GetHeaderControl()->SetItemHeight(3);
	m_wndList.InsertColumn(0, _T("Index"), CFMT_NUMBER, 60);
	m_wndList.InsertColumn(1, _T("Description"), CFMT_TEXT, 250);
	m_wndList.InsertColumn(2, _T("Quantity"), CFMT_NUMBER, 60);
	m_wndList.InsertColumn(3, _T("Money"), CFMT_NUMBER, 90);
	m_wndList.GetHeaderControl()->MergeCell(_T("Insurance"), 0, 2, 1, 3);
	m_wndList.InsertColumn(4, _T("Quantity"), CFMT_NUMBER, 60);
	m_wndList.InsertColumn(5, _T("Money"), CFMT_NUMBER, 90);
	m_wndList.GetHeaderControl()->MergeCell(_T("Children"), 0, 4, 1, 5);
	m_wndList.InsertColumn(6, _T("Quantity"), CFMT_NUMBER, 60);
	m_wndList.InsertColumn(7, _T("Money"), CFMT_NUMBER, 90);
	m_wndList.GetHeaderControl()->MergeCell(_T("Free"), 0, 6, 1, 7);
	m_wndList.InsertColumn(8, _T("Quantity"), CFMT_NUMBER, 60);
	m_wndList.InsertColumn(9, _T("Money"), CFMT_NUMBER, 90);
	m_wndList.GetHeaderControl()->MergeCell(_T("Service"), 0, 8, 1, 9);

	m_wndList.InsertColumn(10, _T("Quantity"), CFMT_NUMBER, 60);
	m_wndList.InsertColumn(11, _T("Money"), CFMT_NUMBER, 90);
	m_wndList.GetHeaderControl()->MergeCell(_T("Other"), 0, 10, 1, 11);
															   
	m_wndList.InsertColumn(12, _T("Quantity"), CFMT_NUMBER, 60);
	m_wndList.InsertColumn(13, _T("Money"), CFMT_NUMBER, 90);
	m_wndList.GetHeaderControl()->MergeCell(_T("Total"), 0, 12, 1, 13);

	m_wndList.ModifyStyle(0, LVS_NOSORTHEADER);

}
void rptParaclinicalReportDialog::OnSetWindowEvents(){
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndRoom.SetEvent(WE_SELENDOK, _OnRoomSelendokFnc);
	//m_wndRoom.SetEvent(WE_SETFOCUS, _OnRoomSetfocusFnc);
	//m_wndRoom.SetEvent(WE_KILLFOCUS, _OnRoomKillfocusFnc);
	m_wndRoom.SetEvent(WE_SELCHANGE, _OnRoomSelectChangeFnc);
	m_wndRoom.SetEvent(WE_LOADDATA, _OnRoomLoadDataFnc);
	//m_wndRoom.SetEvent(WE_ADDNEW, _OnRoomAddNewFnc);
	m_wndInputResults.SetEvent(WE_CLICK, _OnInputResultsSelectFnc);
	m_wndFeeAccepted.SetEvent(WE_CLICK, _OnFeeAcceptedSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndRun.SetEvent(WE_CLICK, _OnRunSelectFnc);
	m_wndPreview.SetEvent(WE_CLICK, _OnPreviewSelectFnc);
	m_wndExportXLS.SetEvent(WE_CLICK, _OnExportXLSSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	SetMode(VM_EDIT);
	
}
void rptParaclinicalReportDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndRoom.GetDlgCtrlID(), m_szRoomKey);
	DDX_Check(pDX, m_wndInputResults.GetDlgCtrlID(), m_bInputResults);
	DDX_Check(pDX, m_wndFeeAccepted.GetDlgCtrlID(), m_bFeeAccepted);

}
void rptParaclinicalReportDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void rptParaclinicalReportDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void rptParaclinicalReportDialog::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szRoomKey.Empty();
	m_bInputResults=FALSE;
	m_bFeeAccepted=FALSE;

}
int rptParaclinicalReportDialog::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiDialog::SetMode(nMode); 
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
 			EnableButtons(TRUE, 0, 1, 2, 3, -1); 
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
/*void rptParaclinicalReportDialog::OnFromDateChange(){
	
} */
/*void rptParaclinicalReportDialog::OnFromDateSetfocus(){
	
} */
/*void rptParaclinicalReportDialog::OnFromDateKillfocus(){
	
} */
int rptParaclinicalReportDialog::OnFromDateCheckValue(){
	return 0;
} 
/*void rptParaclinicalReportDialog::OnToDateChange(){
	
} */
/*void rptParaclinicalReportDialog::OnToDateSetfocus(){
	
} */
/*void rptParaclinicalReportDialog::OnToDateKillfocus(){
	
} */
int rptParaclinicalReportDialog::OnToDateCheckValue(){
	return 0;
} 
void rptParaclinicalReportDialog::OnRoomSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void rptParaclinicalReportDialog::OnRoomSelendok(){
	 
}
/*void rptParaclinicalReportDialog::OnRoomSetfocus(){
	
}*/
/*void rptParaclinicalReportDialog::OnRoomKillfocus(){
	
}*/
long rptParaclinicalReportDialog::OnRoomLoadData(){
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
/*void rptParaclinicalReportDialog::OnRoomAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
	void rptParaclinicalReportDialog::OnInputResultsSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void rptParaclinicalReportDialog::OnFeeAcceptedSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void rptParaclinicalReportDialog::OnListDblClick(){
	
} 
void rptParaclinicalReportDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int rptParaclinicalReportDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long rptParaclinicalReportDialog::OnListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CRecord rsl(&pMF->m_db);
	CString szSQL, tmpStr, szCode, szWhere, szSQL2, szName;
	TCHAR chOld=_T(' '), ch;
	int nItem = 0;
	UpdateData(true);

	if(str2int(m_szRoomKey) > 0)
		szWhere.Format(_T(" and pcmso_roomid=%d"), str2int(m_szRoomKey));
	if(m_bFeeAccepted)
		szWhere.AppendFormat(_T(" and pcmso_payment='Y' "));
	if(m_bInputResults)
		szWhere.AppendFormat(_T(" and pcmso_status='T' "));	
	if(!m_bFeeAccepted && !m_bInputResults){
		szWhere.AppendFormat(_T(" and (pcmso_payment='Y' or pcmso_status='T') "));
	}
	//1: Nhom can lam sang
	szSQL.Format(_T("SELECT * FROM hms_fee_group WHERE substr(hfg_id, 1, 2) IN('B1','B2','B3') AND hfg_active='Y' ORDER BY hfg_id "));
	

	rs.ExecSQL(szSQL);
	m_wndList.BeginLoad();
	int nIndex = 1;
	while(!rs.IsEOF()){
		rs.GetValue(_T("hfg_id"), szCode);
		rs.GetValue(_T("hfg_name"), szName);
		ch = szCode[2];
		if(ch == _T('0'))
		{
			nItem = m_wndList.AddItems(_T(""), szName, NULL);
			m_wndList.SetItemBkColor(nItem, COLOR_TERMINATE, FALSE);
			m_wndList.SetItemTextColor(nItem, COLOR_WHITE, FALSE);
			nIndex = 1;
		}
		else
		{
				szSQL2.Format(_T(" SELECT 	sum(insobj) as ins_count,") \
_T(" 	sum(ins_amount) as ins_amount,") \
_T(" 	sum(childobj) as child_count,") \
_T(" 	sum(child_amount) as child_amount,") \
_T(" 	sum(disobj) as dis_count,") \
_T(" 	sum(dis_amount) as dis_amount,") \
_T(" 	sum(servobj) as serv_count,") \
_T(" 	sum(serv_amount) as serv_amount,") \
_T(" 	sum(otherobj) as other_count,") \
_T(" 	sum(other_amount) as other_amount,") \
_T(" 	sum(total) as total_count,") \
_T(" 	sum(total_amount) as total_amount") \
_T(" FROM") \
_T(" (	") \
_T(" SELECT pcmso_docno, pcmso_groupid, pcmsol_itemid, pcmso_status, pcmso_payment, pcmsol_hasfee, hfl_name, hfl_subitem,") \
_T(" 	case when ho_type='I' then 1 else 0 end as insobj,") \
_T(" 	case when ho_type='I' then hfe_cost else 0 end as ins_amount,") \
_T(" 	case when ho_type='C' then 1 else 0 end as childobj,") \
_T(" 	case when ho_type='C' then hfe_cost else 0 end as child_amount,") \
_T(" 	case when ho_type='D' then 1 else 0 end as disobj,") \
_T(" 	case when ho_type='D' then hfe_cost else 0 end as dis_amount,") \
_T(" 	case when ho_type='S' then 1 else 0 end as servobj,") \
_T(" 	case when ho_type='S' then hfe_cost else 0 end as serv_amount,") \
_T(" 	case when ho_type not in('I','C','S') then 1 else 0 end as otherobj,") \
_T(" 	case when ho_type not in('I','C','S') then hfe_cost else 0 end as other_amount,") \
_T(" 	1 as total,") \
_T(" 	hfe_cost as total_amount") \
_T(" FROM hms_doc") \
_T(" LEFT JOIN pcms_order ON(pcmso_docno=hd_docno)") \
_T(" LEFT JOIN pcms_order_line ON(pcmso_orderid=pcmsol_orderid)") \
_T(" LEFT JOIN hms_object ON(ho_id=hd_object)") \
_T(" LEFT JOIN hms_fee_list ON(pcmsol_itemid=hfl_feeid)") \
_T(" WHERE 	pcmso_deptid='%s'") \
_T(" 	and date(pcmso_orderdate) between date('%s') and date('%s') ") \
_T("	and pcmso_groupid='%s' ") \
_T(" 	and pcmso_status <> 'O'") \
_T(" 	%s	") \
_T(" ) as tbl"), pMF->m_szDept, m_szFromDate, m_szToDate, szCode, szWhere);

			tmpStr.Format(_T("%d"), nIndex++);
			nItem = m_wndList.AddItems(tmpStr, _T("   ") + szName, NULL);
			rsl.ExecSQL(szSQL2);
			if(!rsl.IsEOF()){
				rsl.GetValue(_T("ins_count"), tmpStr);
				m_wndList.SetItemText(nItem, 2, tmpStr);
				rsl.GetValue(_T("ins_amount"), tmpStr);
				m_wndList.SetItemText(nItem, 3, tmpStr);
				
				rsl.GetValue(_T("child_count"), tmpStr);
				m_wndList.SetItemText(nItem, 4, tmpStr);
				rsl.GetValue(_T("child_amount"), tmpStr);
				m_wndList.SetItemText(nItem, 5, tmpStr);

				rsl.GetValue(_T("dis_count"), tmpStr);
				m_wndList.SetItemText(nItem, 6, tmpStr);
				rsl.GetValue(_T("dis_amount"), tmpStr);
				m_wndList.SetItemText(nItem, 7, tmpStr);

				rsl.GetValue(_T("serv_count"), tmpStr);
				m_wndList.SetItemText(nItem, 8, tmpStr);
				rsl.GetValue(_T("serv_amount"), tmpStr);
				m_wndList.SetItemText(nItem, 9, tmpStr);

				rsl.GetValue(_T("other_count"), tmpStr);
				m_wndList.SetItemText(nItem, 10, tmpStr);
				rsl.GetValue(_T("other_amount"), tmpStr);
				m_wndList.SetItemText(nItem, 11, tmpStr);

				rsl.GetValue(_T("total_count"), tmpStr);
				m_wndList.SetItemText(nItem, 12, tmpStr);
				rsl.GetValue(_T("total_amount"), tmpStr);
				m_wndList.SetItemText(nItem, 13, tmpStr);

			}


		}
		m_wndList.SetCheck(nItem, true);
		rs.MoveNext();
	};
	m_wndList.EndLoad();
	return 0;
}
void rptParaclinicalReportDialog::OnRunSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnListLoadData();	
} 
void rptParaclinicalReportDialog::OnPreviewSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CReport rpt;
	if(!rpt.Init(_T("Reports/HMS/HMS_PARACLINICALACTIVITIESREPORT.RPT")))
		return ;
	CString tmpStr, szDate;
	//Report Header
	rpt.GetReportHeader()->Format(_T("ReportDate"), CDate::Convert(m_szFromDate), CDate::Convert(m_szToDate));
	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), pMF->m_CompanyInfo.sc_pname);
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), pMF->m_CompanyInfo.sc_name);
	//Report Detail
	CReportSection* rptDetail;
	for (int i =0; i < m_wndList.GetItemCount(); i++){
		rptDetail = rpt.AddDetail();
		tmpStr = m_wndList.GetItemText(i, 0);
		if(tmpStr.IsEmpty()){
			rptDetail->GetItem(_T("2"))->SetBold(true);
		}
		for (int j =0; j < m_wndList.GetHeaderControl()->GetItemCount(); j++){
			tmpStr = m_wndList.GetItemText(i, j);
			CString szName;
			szName.Format(_T("%d"), j+1);
			if(tmpStr == _T("0")) tmpStr.Empty();
			rptDetail->SetValue(szName, tmpStr);
		}
	}
	//Page Footer
	//Report Footer
	CDate sysDate;
	sysDate.ParseDate(pMF->GetSysDate());
	rpt.GetReportFooter()->Format(_T("PrintDate"), sysDate.GetDay(), sysDate.GetMonth(), sysDate.GetYear());
	rpt.PrintPreview();
} 
void rptParaclinicalReportDialog::OnExportXLSSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void rptParaclinicalReportDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();	
} 
int rptParaclinicalReportDialog::OnAddrptParaclinicalReportDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int rptParaclinicalReportDialog::OnEditrptParaclinicalReportDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int rptParaclinicalReportDialog::OnDeleterptParaclinicalReportDialog(){
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
 		OnCancelrptParaclinicalReportDialog(); 
 	}
	return 0;
}
int rptParaclinicalReportDialog::OnSaverptParaclinicalReportDialog(){
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
 		//OnrptParaclinicalReportDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int rptParaclinicalReportDialog::OnCancelrptParaclinicalReportDialog(){
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
int rptParaclinicalReportDialog::OnrptParaclinicalReportDialogListLoadData(){
	return 0;
}
