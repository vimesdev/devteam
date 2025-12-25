#include "stdafx.h"
#include "SRMBaocaohoanthien.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CSRMBaocaohoanthien *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CSRMBaocaohoanthien *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CSRMBaocaohoanthien *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CSRMBaocaohoanthien *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CSRMBaocaohoanthien *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CSRMBaocaohoanthien *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CSRMBaocaohoanthien *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CSRMBaocaohoanthien *)pWnd)->OnToDateCheckValue();
} 
/*static void _OnTopicIDChangeFnc(CWnd *pWnd){
	((CSRMBaocaohoanthien *)pWnd)->OnTopicIDChange();
} */
/*static void _OnTopicIDSetfocusFnc(CWnd *pWnd){
	((CSRMBaocaohoanthien *)pWnd)->OnTopicIDSetfocus();} */ 
/*static void _OnTopicIDKillfocusFnc(CWnd *pWnd){
	((CSRMBaocaohoanthien *)pWnd)->OnTopicIDKillfocus();
} */
static int _OnTopicIDCheckValueFnc(CWnd *pWnd){
	return ((CSRMBaocaohoanthien *)pWnd)->OnTopicIDCheckValue();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CSRMBaocaohoanthien *pVw = (CSRMBaocaohoanthien *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CSRMBaocaohoanthien *pVw = (CSRMBaocaohoanthien *)pWnd;
	pVw->OnExportSelect();
} 
/*static void _OnTopicNameChangeFnc(CWnd *pWnd){
	((CSRMBaocaohoanthien *)pWnd)->OnTopicNameChange();
} */
/*static void _OnTopicNameSetfocusFnc(CWnd *pWnd){
	((CSRMBaocaohoanthien *)pWnd)->OnTopicNameSetfocus();} */ 
static void _OnTopicNameKillfocusFnc(CWnd *pWnd){
	((CSRMBaocaohoanthien *)pWnd)->OnTopicNameKillfocus();
}
static int _OnTopicNameCheckValueFnc(CWnd *pWnd){
	return ((CSRMBaocaohoanthien *)pWnd)->OnTopicNameCheckValue();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CSRMBaocaohoanthien*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CSRMBaocaohoanthien*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CSRMBaocaohoanthien*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CSRMBaocaohoanthien*)pWnd)->OnListDeleteItem();
} 
static int _OnAddSRMBaocaohoanthienFnc(CWnd *pWnd){
	 return ((CSRMBaocaohoanthien*)pWnd)->OnAddSRMBaocaohoanthien();
} 
static int _OnEditSRMBaocaohoanthienFnc(CWnd *pWnd){
	 return ((CSRMBaocaohoanthien*)pWnd)->OnEditSRMBaocaohoanthien();
} 
static int _OnDeleteSRMBaocaohoanthienFnc(CWnd *pWnd){
	 return ((CSRMBaocaohoanthien*)pWnd)->OnDeleteSRMBaocaohoanthien();
} 
static int _OnSaveSRMBaocaohoanthienFnc(CWnd *pWnd){
	 return ((CSRMBaocaohoanthien*)pWnd)->OnSaveSRMBaocaohoanthien();
} 
static int _OnCancelSRMBaocaohoanthienFnc(CWnd *pWnd){
	 return ((CSRMBaocaohoanthien*)pWnd)->OnCancelSRMBaocaohoanthien();
} 
CSRMBaocaohoanthien::CSRMBaocaohoanthien(CWnd *pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CSRMBaocaohoanthien::~CSRMBaocaohoanthien(){
}
void CSRMBaocaohoanthien::OnCreateComponents(){
	m_wndFilterGroup.Create(this, _T("Filter Group"), 5, 5, 491, 325);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 245, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 250, 30, 330, 55);
	m_wndToDate.Create(this,335, 30, 485, 55); 
	m_wndTopicIDLabel.Create(this, _T("Topic ID"), 10, 60, 90, 85);
	m_wndTopicID.Create(this,95, 60, 485, 85); 
	m_wndTopicNameLabel.Create(this, _T("Topic Name"), 10, 90, 90, 115);
	m_wndTopicName.Create(this,95, 90, 485, 115); 
	m_wndPrint.Create(this, _T("&Print"), 325, 333, 405, 358);
	m_wndExport.Create(this, _T("&Export"), 410, 333, 490, 358);
	m_wndList.Create(this,10, 120, 485, 320); 

}
void CSRMBaocaohoanthien::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetCheckValue(true);
	m_wndTopicID.SetLimitText(1024);
	m_wndTopicName.SetLimitText(1024);

	m_wndList.InsertColumn(0, _T("Topic ID"), CFMT_TEXT, 120);
	m_wndList.InsertColumn(1, _T("Topic Name"), CFMT_TEXT, 300);


}
void CSRMBaocaohoanthien::OnSetWindowEvents(){
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
void CSRMBaocaohoanthien::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Text(pDX, m_wndTopicID.GetDlgCtrlID(), m_szTopicID);
	DDX_Text(pDX, m_wndTopicName.GetDlgCtrlID(), m_szTopicName);

}
void CSRMBaocaohoanthien::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CSRMBaocaohoanthien::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CSRMBaocaohoanthien::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szTopicID.Empty();
	m_szTopicName.Empty();

}
int CSRMBaocaohoanthien::SetMode(int nMode){
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
/*void CSRMBaocaohoanthien::OnFromDateChange(){
	
} */
/*void CSRMBaocaohoanthien::OnFromDateSetfocus(){
	
} */
/*void CSRMBaocaohoanthien::OnFromDateKillfocus(){
	
} */
int CSRMBaocaohoanthien::OnFromDateCheckValue(){
	return 0;
} 
/*void CSRMBaocaohoanthien::OnToDateChange(){
	
} */
/*void CSRMBaocaohoanthien::OnToDateSetfocus(){
	
} */
/*void CSRMBaocaohoanthien::OnToDateKillfocus(){
	
} */
int CSRMBaocaohoanthien::OnToDateCheckValue(){
	return 0;
} 
/*void CSRMBaocaohoanthien::OnTopicIDChange(){
	
} */
/*void CSRMBaocaohoanthien::OnTopicIDSetfocus(){
	
} */
/*void CSRMBaocaohoanthien::OnTopicIDKillfocus(){
	
} */
int CSRMBaocaohoanthien::OnTopicIDCheckValue(){
	return 0;
} 
void CSRMBaocaohoanthien::OnPrintSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CReport rpt;
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr,szDate;
	int nCount = 0, ret = 0;
	/*szSQL.Format(_T("SELECT so_topicid, so_topicname, ") \
				_T("(select ss_desc from sys_sel where ss_id = 'srm_domain_list' and ss_code = so_type) as linhvuc, ") \
				_T(" (select sml_fullname from srm_memberlist where sml_orderno = so_orderno and sml_type = '1') as cndt,") \
				_T(" (select srmta_name from srm_threadagency where srmta_id = so_host) as dvct") \
				_T(" FROM srm_order WHERE so_topicid = '%s'"), m_szTopicID);*/
	szSQL.Format(_T("SELECT so_topicid, so_topicname, ") \
				_T(" (select ss_desc from sys_sel where ss_id = 'srm_domain_list' and ss_code = so_type) as linhvuc, ") \
				_T(" (select sm_name from srm_memberjoin where sm_orderno = so_orderno and sm_type = '1') as cndt,") \
				_T(" (select srmta_name from srm_threadagency where srmta_id = so_host) as dvct") \
				_T(" FROM srm_order WHERE so_topicid = '%s'"), m_szTopicID);
	if (!rpt.Init(_T("Reports\\SRM\\BCHOANTHIEN.RPT")))
		return;
	ret = rs.ExecSQL(szSQL);
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
	rpt.GetReportHeader()->SetValue(_T("PrintDate"), tmpStr);
	
	rs.GetValue(_T("so_topicname"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("1"), tmpStr);
	rs.GetValue(_T("so_topicid"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("2"), tmpStr);
	rs.GetValue(_T("linhvuc"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("6"), tmpStr);
	rs.GetValue(_T("cndt"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("7"), tmpStr);
	rs.GetValue(_T("dvct"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("8"), tmpStr);

	rpt.PrintPreview();
}
void CSRMBaocaohoanthien::OnExportSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
/*void CSRMBaocaohoanthien::OnTopicNameChange(){
	
} */
/*void CSRMBaocaohoanthien::OnTopicNameSetfocus(){
	
} */
void CSRMBaocaohoanthien::OnTopicNameKillfocus(){
	OnListLoadData();
}
int CSRMBaocaohoanthien::OnTopicNameCheckValue(){
	return 0;
} 
void CSRMBaocaohoanthien::OnListDblClick(){
	
} 
void CSRMBaocaohoanthien::OnListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_szTopicID = m_wndList.GetItemText(nNewItem, 0);
} 
int CSRMBaocaohoanthien::OnListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	return 0;
} 
long CSRMBaocaohoanthien::OnListLoadData(){
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
int CSRMBaocaohoanthien::OnAddSRMBaocaohoanthien(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CSRMBaocaohoanthien::OnEditSRMBaocaohoanthien(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CSRMBaocaohoanthien::OnDeleteSRMBaocaohoanthien(){
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
 		OnCancelSRMBaocaohoanthien();
 	}
	return 0;
}
int CSRMBaocaohoanthien::OnSaveSRMBaocaohoanthien(){
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
 		//OnSRMBaocaohoanthienListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CSRMBaocaohoanthien::OnCancelSRMBaocaohoanthien(){
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
int CSRMBaocaohoanthien::OnSRMBaocaohoanthienListLoadData(){
	return 0;
}
