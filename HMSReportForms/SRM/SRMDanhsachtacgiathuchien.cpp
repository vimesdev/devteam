#include "stdafx.h"
#include "SRMDanhsachtacgiathuchien.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CSRMDanhsachtacgiathuchien *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CSRMDanhsachtacgiathuchien *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CSRMDanhsachtacgiathuchien *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CSRMDanhsachtacgiathuchien *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CSRMDanhsachtacgiathuchien *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CSRMDanhsachtacgiathuchien *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CSRMDanhsachtacgiathuchien *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CSRMDanhsachtacgiathuchien *)pWnd)->OnToDateCheckValue();
} 
/*static void _OnTopicIDChangeFnc(CWnd *pWnd){
	((CSRMDanhsachtacgiathuchien *)pWnd)->OnTopicIDChange();
} */
/*static void _OnTopicIDSetfocusFnc(CWnd *pWnd){
	((CSRMDanhsachtacgiathuchien *)pWnd)->OnTopicIDSetfocus();} */ 
/*static void _OnTopicIDKillfocusFnc(CWnd *pWnd){
	((CSRMDanhsachtacgiathuchien *)pWnd)->OnTopicIDKillfocus();
} */
static int _OnTopicIDCheckValueFnc(CWnd *pWnd){
	return ((CSRMDanhsachtacgiathuchien *)pWnd)->OnTopicIDCheckValue();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CSRMDanhsachtacgiathuchien *pVw = (CSRMDanhsachtacgiathuchien *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CSRMDanhsachtacgiathuchien *pVw = (CSRMDanhsachtacgiathuchien *)pWnd;
	pVw->OnExportSelect();
} 
/*static void _OnTopicNameChangeFnc(CWnd *pWnd){
	((CSRMDanhsachtacgiathuchien *)pWnd)->OnTopicNameChange();
} */
/*static void _OnTopicNameSetfocusFnc(CWnd *pWnd){
	((CSRMDanhsachtacgiathuchien *)pWnd)->OnTopicNameSetfocus();} */ 
static void _OnTopicNameKillfocusFnc(CWnd *pWnd){
	((CSRMDanhsachtacgiathuchien *)pWnd)->OnTopicNameKillfocus();
}
static int _OnTopicNameCheckValueFnc(CWnd *pWnd){
	return ((CSRMDanhsachtacgiathuchien *)pWnd)->OnTopicNameCheckValue();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CSRMDanhsachtacgiathuchien*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CSRMDanhsachtacgiathuchien*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CSRMDanhsachtacgiathuchien*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CSRMDanhsachtacgiathuchien*)pWnd)->OnListDeleteItem();
} 
static int _OnAddSRMDanhsachtacgiathuchienFnc(CWnd *pWnd){
	 return ((CSRMDanhsachtacgiathuchien*)pWnd)->OnAddSRMDanhsachtacgiathuchien();
} 
static int _OnEditSRMDanhsachtacgiathuchienFnc(CWnd *pWnd){
	 return ((CSRMDanhsachtacgiathuchien*)pWnd)->OnEditSRMDanhsachtacgiathuchien();
} 
static int _OnDeleteSRMDanhsachtacgiathuchienFnc(CWnd *pWnd){
	 return ((CSRMDanhsachtacgiathuchien*)pWnd)->OnDeleteSRMDanhsachtacgiathuchien();
} 
static int _OnSaveSRMDanhsachtacgiathuchienFnc(CWnd *pWnd){
	 return ((CSRMDanhsachtacgiathuchien*)pWnd)->OnSaveSRMDanhsachtacgiathuchien();
} 
static int _OnCancelSRMDanhsachtacgiathuchienFnc(CWnd *pWnd){
	 return ((CSRMDanhsachtacgiathuchien*)pWnd)->OnCancelSRMDanhsachtacgiathuchien();
} 
CSRMDanhsachtacgiathuchien::CSRMDanhsachtacgiathuchien(CWnd *pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CSRMDanhsachtacgiathuchien::~CSRMDanhsachtacgiathuchien(){
}
void CSRMDanhsachtacgiathuchien::OnCreateComponents(){
	m_wndFilterGroup.Create(this, _T("Filter Group"), 5, 5, 491, 325);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 245, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 250, 30, 330, 55);
	m_wndToDate.Create(this,335, 30, 485, 55); 
	m_wndTopicIDLabel.Create(this, _T("Topic ID"), 10, 60, 90, 85);
	m_wndTopicID.Create(this,95, 60, 485, 85); 
	m_wndTopicNameLabel.Create(this, _T("Topic Name"), 10, 90, 90, 115);
	m_wndTopicName.Create(this,95, 90, 485, 115); 
	m_wndList.Create(this,10, 120, 485, 320); 
	m_wndPrint.Create(this, _T("&Print"), 325, 333, 405, 358);
	m_wndExport.Create(this, _T("&Export"), 410, 333, 490, 358);

}
void CSRMDanhsachtacgiathuchien::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetCheckValue(true);
	m_wndTopicID.SetLimitText(1024);
	m_wndTopicName.SetLimitText(1024);

	m_wndList.InsertColumn(0, _T("Topic ID"), CFMT_TEXT, 120);
	m_wndList.InsertColumn(1, _T("Topic Name"), CFMT_TEXT, 300);

}
void CSRMDanhsachtacgiathuchien::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	//m_wndTopicID.SetEvent(WE_CHANGE, _OnTopicIDChangeFnc);
	//m_wndTopicID.SetEvent(WE_SETFOCUS, _OnTopicIDSetfocusFnc);
	//m_wndTopicID.SetEvent(WE_KILLFOCUS, _OnTopicIDKillfocusFnc);
	m_wndTopicID.SetEvent(WE_CHECKVALUE, _OnTopicIDCheckValueFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	//m_wndTopicName.SetEvent(WE_CHANGE, _OnTopicNameChangeFnc);
	//m_wndTopicName.SetEvent(WE_SETFOCUS, _OnTopicNameSetfocusFnc);
	m_wndTopicName.SetEvent(WE_KILLFOCUS, _OnTopicNameKillfocusFnc);
	m_wndTopicName.SetEvent(WE_CHECKVALUE, _OnTopicNameCheckValueFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	
	SetMode(VM_EDIT);
}
void CSRMDanhsachtacgiathuchien::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Text(pDX, m_wndTopicID.GetDlgCtrlID(), m_szTopicID);
	DDX_Text(pDX, m_wndTopicName.GetDlgCtrlID(), m_szTopicName);

}
void CSRMDanhsachtacgiathuchien::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CSRMDanhsachtacgiathuchien::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CSRMDanhsachtacgiathuchien::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szTopicID.Empty();
	m_szTopicName.Empty();

}
int CSRMDanhsachtacgiathuchien::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
 		CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
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
			m_szFromDate = pMF->GetSysDate();
			m_szToDate = pMF->GetSysDate();
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
/*void CSRMDanhsachtacgiathuchien::OnFromDateChange(){
	
} */
/*void CSRMDanhsachtacgiathuchien::OnFromDateSetfocus(){
	
} */
/*void CSRMDanhsachtacgiathuchien::OnFromDateKillfocus(){
	
} */
int CSRMDanhsachtacgiathuchien::OnFromDateCheckValue(){
	return 0;
} 
/*void CSRMDanhsachtacgiathuchien::OnToDateChange(){
	
} */
/*void CSRMDanhsachtacgiathuchien::OnToDateSetfocus(){
	
} */
/*void CSRMDanhsachtacgiathuchien::OnToDateKillfocus(){
	
} */
int CSRMDanhsachtacgiathuchien::OnToDateCheckValue(){
	return 0;
} 
/*void CSRMDanhsachtacgiathuchien::OnTopicIDChange(){
	
} */
/*void CSRMDanhsachtacgiathuchien::OnTopicIDSetfocus(){
	
} */
/*void CSRMDanhsachtacgiathuchien::OnTopicIDKillfocus(){
	
} */
int CSRMDanhsachtacgiathuchien::OnTopicIDCheckValue(){
	return 0;
} 
void CSRMDanhsachtacgiathuchien::OnPrintSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CReport rpt;
	CRecord rs(&pMF->m_db);
	CRecord rs2(&pMF->m_db);
	CString szSQL, tmpStr,szDate, szSQL2;
	
	int nRetired = 0, nCount = 0, ret = 0, ret2 = 0, nIndex = 1;
	szSQL.Format(_T("SELECT so_topicid, so_topicname, ") \
				_T("	(select ss_desc from sys_sel where ss_id = 'srm_domain_list' and ss_code = so_type) as linhvuc, ") \
				_T("	(select sml_fullname from srm_memberlist where sml_orderno = so_orderno and sml_type = '1') as chunhiem, ") \
				_T("	(select srmta_name from srm_threadagency where srmta_id = so_host) as dvchutri, ") \
				_T("	(SELECT ss_desc FROM sys_sel WHERE ss_id = 'srm_performtype' and ss_code = so_perform) as hinhthucTH, ") \
				_T("	so_target as muctieu, so_startdate, so_enddate,") \
				_T("	so_necessary as tinhcapthiet, ") \
				_T("	so_detail as noidung, ") \
				_T("	so_preresult as kqdukien, ") \
				_T("	so_abilityapplyplace as kndiachiapdung, ") \
				_T("	1 as kqmanglai, ") \
				_T("	so_otherinfo as xuatxu, ") \
				_T("	so_funding as kinhphidukien ") \
				_T(" FROM srm_order  ") \
				_T(" WHERE so_topicid = '%s'"), m_szTopicID);

	szSQL2.Format(_T(" SELECT sm_name, (SELECT srmo_name FROM srm_organization WHERE srmo_id = sml_organname) as organname ") \
					_T(" FROM  srm_memberjoin ") \
					_T(" LEFT JOIN srm_memberlist ON(sml_id = to_char(sm_id)) WHERE sm_topicid = '%s'"), m_szTopicID);

	if (!rpt.Init(_T("Reports\\SRM\\DT_DANHSACHTACGIATHUCHIEN.RPT")))
		return;
	ret = rs.ExecSQL(szSQL);
	_fmsg(_T("%s"), szSQL);
	
	nCount = rs.GetRecordCount();
	if (ret <=0)
	{
		ShowMessage(150, MB_ICONSTOP);
		return;
	}

	rpt.GetReportHeader()->SetValue(_T("HealthService"), _T("\x42\x1ED8 QU\x1ED0\x43 PH\xD2NG"));
	rpt.GetReportHeader()->SetValue(_T("HospitalName"), _T("\x42\x1EC6NH VI\x1EC6N TW QU\xC2N \x110\x1ED8I \x31\x30\x38"));
	szDate = pMF->GetSysDate();
	tmpStr.Format(_T("Ng\xE0y %s th\xE1ng %s n\x103m %s"), szDate.Right(2), szDate.Mid(5, 2), szDate.Left(4));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), tmpStr);
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), tmpStr);
	
	rs.GetValue(_T("so_topicname"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("c1"), tmpStr);
	rs.GetValue(_T("so_topicid"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("c2"), tmpStr);
	rs.GetValue(_T("linhvuc"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("c5"), tmpStr);
	tmpStr.Format(_T("%s - %s"), CDate::Convert(rs.GetValue(_T("so_startdate")), yyyymmdd, ddmmyyyy), CDate::Convert(rs.GetValue(_T("so_enddate")), yyyymmdd, ddmmyyyy));
	rpt.GetReportHeader()->SetValue(_T("c6"), tmpStr);
	rs.GetValue(_T("dvchutri"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("c7"), tmpStr);

	CReportSection* rptDetail;
	rs2.ExecSQL(szSQL2);
	while(!rs2.IsEOF())
	{
		rptDetail = rpt.AddDetail();

		tmpStr.Format(_T("%d"), nIndex++);
		rptDetail->SetValue(_T("1"), tmpStr);
		
		rs2.GetValue(_T("sm_name"), tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);

		rs2.GetValue(_T("organname"), tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);

		rs2.MoveNext();

	}

	rpt.PrintPreview();
	
} 
void CSRMDanhsachtacgiathuchien::OnExportSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
/*void CSRMDanhsachtacgiathuchien::OnTopicNameChange(){
	
} */
/*void CSRMDanhsachtacgiathuchien::OnTopicNameSetfocus(){
	
} */
void CSRMDanhsachtacgiathuchien::OnTopicNameKillfocus(){
	OnListLoadData();
} 
int CSRMDanhsachtacgiathuchien::OnTopicNameCheckValue(){
	return 0;
} 
void CSRMDanhsachtacgiathuchien::OnListDblClick(){
	
} 
void CSRMDanhsachtacgiathuchien::OnListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_szTopicID = m_wndList.GetItemText(nNewItem, 0);
} 
int CSRMDanhsachtacgiathuchien::OnListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CSRMDanhsachtacgiathuchien::OnListLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	if(!m_szTopicID.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and so_topicid = '%s'"), m_szTopicID);
	}
	if(!m_szFromDate.IsEmpty() && !m_szToDate.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and so_startdate between to_date('%s', 'yyyy/mm/dd') and to_date('%s', 'yyyy/mm/dd')"), m_szFromDate, m_szToDate);
	}
	if(!m_szTopicName.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and UPPER(so_topicname) like UPPER(chr(37)||'%s'||chr(37)) "), m_szTopicName);
	}
	szSQL.Format(_T("SELECT * FROM srm_order WHERE 1=1 %s"), szWhere);
	_fmsg(_T("%s"), szSQL);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("so_topicid")),
			rs.GetValue(_T("so_topicname")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}
int CSRMDanhsachtacgiathuchien::OnAddSRMDanhsachtacgiathuchien(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CSRMDanhsachtacgiathuchien::OnEditSRMDanhsachtacgiathuchien(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CSRMDanhsachtacgiathuchien::OnDeleteSRMDanhsachtacgiathuchien(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
 	CString szSQL;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
 	szSQL.Format(_T("DELETE FROM  WHERE  AND") );
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
 		SetMode(VM_NONE);
 		OnCancelSRMDanhsachtacgiathuchien();
 	}
	return 0;
}
int CSRMDanhsachtacgiathuchien::OnSaveSRMDanhsachtacgiathuchien(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
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
 		//OnSRMDanhsachtacgiathuchienListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CSRMDanhsachtacgiathuchien::OnCancelSRMDanhsachtacgiathuchien(){
 	if(GetMode() == VM_EDIT)
 	{
 		SetMode(VM_VIEW);
 	} 
 	else 
 	{
 		SetMode(VM_NONE);
 	} 
 	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
 	return 0;
} 
int CSRMDanhsachtacgiathuchien::OnSRMDanhsachtacgiathuchienListLoadData(){
	return 0;
}
