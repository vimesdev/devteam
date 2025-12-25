#include "stdafx.h"
#include "SRMBienbankiemphieu.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CSRMBienbankiemphieu *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CSRMBienbankiemphieu *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CSRMBienbankiemphieu *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CSRMBienbankiemphieu *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CSRMBienbankiemphieu *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CSRMBienbankiemphieu *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CSRMBienbankiemphieu *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CSRMBienbankiemphieu *)pWnd)->OnToDateCheckValue();
} 
/*static void _OnTopicIDChangeFnc(CWnd *pWnd){
	((CSRMBienbankiemphieu *)pWnd)->OnTopicIDChange();
} */
/*static void _OnTopicIDSetfocusFnc(CWnd *pWnd){
	((CSRMBienbankiemphieu *)pWnd)->OnTopicIDSetfocus();} */ 
static void _OnTopicIDKillfocusFnc(CWnd *pWnd){
	((CSRMBienbankiemphieu *)pWnd)->OnTopicIDKillfocus();
}
static int _OnTopicIDCheckValueFnc(CWnd *pWnd){
	return ((CSRMBienbankiemphieu *)pWnd)->OnTopicIDCheckValue();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CSRMBienbankiemphieu *pVw = (CSRMBienbankiemphieu *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CSRMBienbankiemphieu *pVw = (CSRMBienbankiemphieu *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnTopicNameChangeFnc(CWnd *pWnd){
	((CSRMBienbankiemphieu *)pWnd)->OnTopicNameChange();
}
/*static void _OnTopicNameSetfocusFnc(CWnd *pWnd){
	((CSRMBienbankiemphieu *)pWnd)->OnTopicNameSetfocus();} */ 
static void _OnTopicNameKillfocusFnc(CWnd *pWnd){
	((CSRMBienbankiemphieu *)pWnd)->OnTopicNameKillfocus();
}
static int _OnTopicNameCheckValueFnc(CWnd *pWnd){
	return ((CSRMBienbankiemphieu *)pWnd)->OnTopicNameCheckValue();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CSRMBienbankiemphieu*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CSRMBienbankiemphieu*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CSRMBienbankiemphieu*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CSRMBienbankiemphieu*)pWnd)->OnListDeleteItem();
} 
static int _OnAddSRMBienbankiemphieuFnc(CWnd *pWnd){
	 return ((CSRMBienbankiemphieu*)pWnd)->OnAddSRMBienbankiemphieu();
} 
static int _OnEditSRMBienbankiemphieuFnc(CWnd *pWnd){
	 return ((CSRMBienbankiemphieu*)pWnd)->OnEditSRMBienbankiemphieu();
} 
static int _OnDeleteSRMBienbankiemphieuFnc(CWnd *pWnd){
	 return ((CSRMBienbankiemphieu*)pWnd)->OnDeleteSRMBienbankiemphieu();
} 
static int _OnSaveSRMBienbankiemphieuFnc(CWnd *pWnd){
	 return ((CSRMBienbankiemphieu*)pWnd)->OnSaveSRMBienbankiemphieu();
} 
static int _OnCancelSRMBienbankiemphieuFnc(CWnd *pWnd){
	 return ((CSRMBienbankiemphieu*)pWnd)->OnCancelSRMBienbankiemphieu();
} 
CSRMBienbankiemphieu::CSRMBienbankiemphieu(CWnd *pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CSRMBienbankiemphieu::~CSRMBienbankiemphieu(){
}
void CSRMBienbankiemphieu::OnCreateComponents(){
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
void CSRMBienbankiemphieu::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetCheckValue(true);
	m_wndTopicID.SetLimitText(1024);
	m_wndTopicName.SetLimitText(35);
	
	m_wndList.InsertColumn(0, _T("Topic ID"), CFMT_TEXT, 120);
	m_wndList.InsertColumn(1, _T("Topic Name"), CFMT_TEXT, 300);

	
}
void CSRMBienbankiemphieu::OnSetWindowEvents(){
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
	m_wndTopicID.SetEvent(WE_KILLFOCUS, _OnTopicIDKillfocusFnc);
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
void CSRMBienbankiemphieu::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Text(pDX, m_wndTopicID.GetDlgCtrlID(), m_szTopicID);
	DDX_Text(pDX, m_wndTopicName.GetDlgCtrlID(), m_szTopicName);

}
void CSRMBienbankiemphieu::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CSRMBienbankiemphieu::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CSRMBienbankiemphieu::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szTopicID.Empty();
	m_szTopicName.Empty();

}
int CSRMBienbankiemphieu::SetMode(int nMode){
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
/*void CSRMBienbankiemphieu::OnFromDateChange(){
	
} */
/*void CSRMBienbankiemphieu::OnFromDateSetfocus(){
	
} */
/*void CSRMBienbankiemphieu::OnFromDateKillfocus(){
	
} */
int CSRMBienbankiemphieu::OnFromDateCheckValue(){
	return 0;
} 
/*void CSRMBienbankiemphieu::OnToDateChange(){
	
} */
/*void CSRMBienbankiemphieu::OnToDateSetfocus(){
	
} */
/*void CSRMBienbankiemphieu::OnToDateKillfocus(){
	
} */
int CSRMBienbankiemphieu::OnToDateCheckValue(){
	return 0;
} 
/*void CSRMBienbankiemphieu::OnTopicIDChange(){
	
} */
/*void CSRMBienbankiemphieu::OnTopicIDSetfocus(){
	
} */
void CSRMBienbankiemphieu::OnTopicIDKillfocus(){
	OnListLoadData();
}
int CSRMBienbankiemphieu::OnTopicIDCheckValue(){
	return 0;
} 
void CSRMBienbankiemphieu::OnPrintSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CReport rpt;
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr,szDate;
	int nCount = 0, ret = 0;
	szSQL.Format(_T("SELECT so_topicid, so_topicname, ") \
				_T("(select ss_desc from sys_sel where ss_id = 'srm_domain_list' and ss_code = so_type) as linhvuc ") \
				_T(" FROM srm_order WHERE so_topicid = '%s'"), m_szTopicID);
	if (!rpt.Init(_T("Reports\\SRM\\BCKIEMPHIEU.RPT")))
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

	rpt.PrintPreview();
} 
void CSRMBienbankiemphieu::OnExportSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CSRMBienbankiemphieu::OnTopicNameChange(){
	
}
/*void CSRMBienbankiemphieu::OnTopicNameSetfocus(){
	
} */
void CSRMBienbankiemphieu::OnTopicNameKillfocus(){
	OnListLoadData();	
}
int CSRMBienbankiemphieu::OnTopicNameCheckValue(){
	return 0;
} 
void CSRMBienbankiemphieu::OnListDblClick(){
	
} 
void CSRMBienbankiemphieu::OnListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_szTopicID = m_wndList.GetItemText(nNewItem, 0);
	m_szTopicName = m_wndList.GetItemText(nNewItem, 1);
} 
int CSRMBienbankiemphieu::OnListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CSRMBienbankiemphieu::OnListLoadData(){
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
int CSRMBienbankiemphieu::OnAddSRMBienbankiemphieu(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CSRMBienbankiemphieu::OnEditSRMBienbankiemphieu(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CSRMBienbankiemphieu::OnDeleteSRMBienbankiemphieu(){
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
 		OnCancelSRMBienbankiemphieu();
 	}
	return 0;
}
int CSRMBienbankiemphieu::OnSaveSRMBienbankiemphieu(){
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
 		//OnSRMBienbankiemphieuListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CSRMBienbankiemphieu::OnCancelSRMBienbankiemphieu(){
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
int CSRMBienbankiemphieu::OnSRMBienbankiemphieuListLoadData(){
	return 0;
}