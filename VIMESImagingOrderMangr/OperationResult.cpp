#include "OperationResult.h"
#include "MainFrm.h"
#include "ReportDocument.h"

/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((COperationResult *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((COperationResult *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((COperationResult *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((COperationResult *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((COperationResult *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((COperationResult *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((COperationResult *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((COperationResult *)pWnd)->OnToDateCheckValue();
} 
/*static void _OnSearchChangeFnc(CWnd *pWnd){
	((COperationResult *)pWnd)->OnSearchChange();
} */
/*static void _OnSearchSetfocusFnc(CWnd *pWnd){
	((COperationResult *)pWnd)->OnSearchSetfocus();} */ 
/*static void _OnSearchKillfocusFnc(CWnd *pWnd){
	((COperationResult *)pWnd)->OnSearchKillfocus();
} */
static int _OnSearchCheckValueFnc(CWnd *pWnd){
	return ((COperationResult *)pWnd)->OnSearchCheckValue();
} 
static void _OnFindSelectFnc(CWnd *pWnd){
	COperationResult *pVw = (COperationResult *)pWnd;
	pVw->OnFindSelect();
} 
static void _OnUpdateSelectFnc(CWnd *pWnd){
	COperationResult *pVw = (COperationResult *)pWnd;
	pVw->OnUpdateSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	COperationResult *pVw = (COperationResult *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	COperationResult *pVw = (COperationResult *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	COperationResult *pVw = (COperationResult *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnInputFormSelectFnc(CWnd *pWnd){
	COperationResult *pVw = (COperationResult *)pWnd;
	pVw->OnInputFormSelect();
} 

static void _OnCaptureSelectFnc(CWnd *pWnd){
	COperationResult *pVw = (COperationResult *)pWnd;
	pVw->OnCaptureSelect();
} 
static long _OnOperationListLoadDataFnc(CWnd *pWnd){
	return ((COperationResult*)pWnd)->OnOperationListLoadData();
} 
static void _OnOperationListDblClickFnc(CWnd *pWnd){
	((COperationResult*)pWnd)->OnOperationListDblClick();
} 
static void _OnOperationListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((COperationResult*)pWnd)->OnOperationListSelectChange(nOldItem, nNewItem);
} 
static int _OnOperationListDeleteItemFnc(CWnd *pWnd){
	 return ((COperationResult*)pWnd)->OnOperationListDeleteItem();
} 
static int _OnAddOperationResultFnc(CWnd *pWnd){
	 return ((COperationResult*)pWnd)->OnAddOperationResult();
} 
static int _OnEditOperationResultFnc(CWnd *pWnd){
	 return ((COperationResult*)pWnd)->OnEditOperationResult();
} 
static int _OnDeleteOperationResultFnc(CWnd *pWnd){
	 return ((COperationResult*)pWnd)->OnDeleteOperationResult();
} 
static int _OnSaveOperationResultFnc(CWnd *pWnd){
	 return ((COperationResult*)pWnd)->OnSaveOperationResult();
} 
static int _OnCancelOperationResultFnc(CWnd *pWnd){
	 return ((COperationResult*)pWnd)->OnCancelOperationResult();
} 
COperationResult::COperationResult(){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
	m_pWndInputResult = NULL;
}
COperationResult::~COperationResult(){
}
void COperationResult::OnCreateComponents(){
	m_wndSearchInformation.Create(this, _T("Search Information"), 5, 5, 620, 60);
	m_wndPatientProfile.Create(this, _T("Patient Profile"), 5, 65, 620, 210);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 185, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 190, 30, 270, 55);
	m_wndToDate.Create(this,275, 30, 365, 55); 
	m_wndSearchLabel.Create(this, _T("Search"), 370, 30, 450, 55);
	m_wndSearch.Create(this,455, 30, 585, 55); 
	m_wndFind.Create(this, _T("@"), 590, 30, 615, 55);
	m_wndUpdate.Create(this, _T("&Update"), 5, 630, 95, 655);
	m_wndSave.Create(this, _T("&Save"), 100, 630, 190, 655);
	m_wndCancel.Create(this, _T("&Cancel"), 195, 630, 285, 655);
	m_wndPrint.Create(this, _T("&Print"), 290, 630, 380, 655);
	m_wndInputForm.Create(this, _T("&Input Form"), 385, 630, 475, 655);
	m_wndCapture.Create(this, _T("Capture"), 531, 630, 621, 655);
	m_wndOperationList.Create(this,10, 90, 615, 205); 
	m_wndView.Create(NULL, _T("Input Result"), WS_CHILD | WS_VISIBLE, CRect(5, 215, 620, 625), this, NULL); 

}
void COperationResult::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
	m_wndSearch.SetLimitText(1024);
	m_wndSearch.SetCheckValue(true);

	m_wndOperationList.InsertColumn(0, _T("Order Id"), CFMT_NUMBER, 90);
	m_wndOperationList.InsertColumn(1, _T(""), CFMT_NUMBER, 0);//doc_no
	m_wndOperationList.InsertColumn(2, _T(""), CFMT_TEXT, 0);//item_id
	m_wndOperationList.InsertColumn(3, _T("Patient Name"), CFMT_TEXT, 150);
	m_wndOperationList.InsertColumn(4, _T("Order Date"), CFMT_TEXT, 100);
	m_wndOperationList.InsertColumn(5, _T("Name"), CFMT_TEXT, 400);
	m_wndOperationList.InsertColumn(6, _T("Status"), CFMT_TEXT, 50);
	m_wndOperationList.InsertColumn(7, _T(""), CFMT_TEXT, 0);//form_id
	m_wndFind.ModifyStyle(WS_TABSTOP, 0);

}
void COperationResult::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	//m_wndSearch.SetEvent(WE_CHANGE, _OnSearchChangeFnc);
	//m_wndSearch.SetEvent(WE_SETFOCUS, _OnSearchSetfocusFnc);
	//m_wndSearch.SetEvent(WE_KILLFOCUS, _OnSearchKillfocusFnc);
	m_wndSearch.SetEvent(WE_CHECKVALUE, _OnSearchCheckValueFnc);
	m_wndFind.SetEvent(WE_CLICK, _OnFindSelectFnc);
	m_wndUpdate.SetEvent(WE_CLICK, _OnUpdateSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndInputForm.SetEvent(WE_CLICK, _OnInputFormSelectFnc);
	m_wndCapture.SetEvent(WE_CLICK, _OnCaptureSelectFnc);
	m_wndOperationList.SetEvent(WE_SELCHANGE, _OnOperationListSelectChangeFnc);
	m_wndOperationList.SetEvent(WE_LOADDATA, _OnOperationListLoadDataFnc);
	m_wndOperationList.SetEvent(WE_DBLCLICK, _OnOperationListDblClickFnc);
	m_wndOperationList.AddEvent(1, _T("Delete"), _OnOperationListDeleteItemFnc, 0, VK_DELETE, 0);
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	UpdateData(FALSE);
	//OnLoadResult();
	
}
void COperationResult::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Text(pDX, m_wndSearch.GetDlgCtrlID(), m_szSearch);

}
void COperationResult::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("FromDate")] =  m_szFromDate;
	m_jData[_T("ToDate")] =  m_szToDate;
	m_jData[_T("Search")] =  m_szSearch;
	}
	else
	{
			
	m_jData[_T("FromDate")].GetValue(m_szFromDate);
	m_jData[_T("ToDate")].GetValue(m_szToDate);
	m_jData[_T("Search")].GetValue(m_szSearch);
	}

}
void COperationResult::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void COperationResult::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void COperationResult::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szSearch.Empty();

}
int COperationResult::SetMode(int nMode){
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
/*void COperationResult::OnFromDateChange(){
	
} */
/*void COperationResult::OnFromDateSetfocus(){
	
} */
/*void COperationResult::OnFromDateKillfocus(){
	
} */
int COperationResult::OnFromDateCheckValue(){
	return 0;
} 
/*void COperationResult::OnToDateChange(){
	
} */
/*void COperationResult::OnToDateSetfocus(){
	
} */
/*void COperationResult::OnToDateKillfocus(){
	
} */
int COperationResult::OnToDateCheckValue(){
	return 0;
} 
/*void COperationResult::OnSearchChange(){
	
} */
/*void COperationResult::OnSearchSetfocus(){
	
} */
/*void COperationResult::OnSearchKillfocus(){
	
} */
int COperationResult::OnSearchCheckValue(){
	UpdateData();
	OnOperationListLoadData();
	return 0;
} 
void COperationResult::OnFindSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData();
	OnOperationListLoadData();
} 
void COperationResult::OnUpdateSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if (m_pWndInputResult)
	{
		EnableButtons(TRUE, 1, 2, -1);
		m_pWndInputResult->OnEditCOperationInputResult();
	}
	
} 
void COperationResult::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if (m_pWndInputResult)
	{
		if (m_pWndInputResult->OnSaveCOperationInputResult() > 0)
		{
			EnableButtons(FALSE, 1, 2, -1);
			OnOperationListLoadData();
		}
	}	
	
} 
void COperationResult::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if (m_pWndInputResult)
	{
		EnableButtons(FALSE, 1, 2, -1);
		m_pWndInputResult->OnCancelCOperationInputResult();
	}	
	
} 
void COperationResult::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(!pMF->CheckPermission(_T("02")))
	{
		ShowMessageBox(_T("Permission Denined."), 0);
		return;
	}
	//if(m_pWndInputResult)
	//	m_pWndInputResult->OnPrintSelect();
	PrintOperationResult();
} 

void COperationResult::PrintOperationResult()
{
	m_szItemID = _T("B420019454");
	m_nDocumentNo = 19352423;
	m_nOrderID = 1873133;
	m_szForm_id = _T("sa_tima2a");
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db), rsl(&pMF->m_db);
	CReport rpt;
	CString szFilePath, szSQL, szFieldName, szValue, tmpStr, szPerformDate;
	CReportSection* rptHeader = NULL, * rptFooter = NULL;
	CReportItem* Picture = NULL;
	szFilePath.Format(_T("Reports\\HMS\\%s.RPT"), m_szForm_id);
	if (!rpt.Init(szFilePath))
	{
		return;
	}
	rptHeader = rpt.GetReportHeader();
	rptFooter = rpt.GetReportFooter();
	/*TT khac*/
	rptHeader->SetValue(_T("HealthService"), pMF->m_szHealthService);
	rptHeader->SetValue(_T("HospitalName"), pMF->m_szHospitalName);
	/*TT hc*/
	szSQL.Format(_T(" SELECT 	hd_patientno as patientno,  ") \
		_T(" 	hd_docno as docno,") \
		_T(" 	trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
		_T(" 	CAST(TO_CHAR(hp_birthdate, 'YYYY') as integer) as birthyear,") \
		_T(" 	hms_getagebydoc(hd_docno, %d) as age, 	hp_sex as sexid,") \
		_T(" 	sys_sel_getname('sys_sex', hp_sex) as sex,") \
		_T(" 	hp_occupation as occupationid,") \
		_T(" 	sys_sel_getname('sys_occupation', cast(hp_occupation as nvarchar2(15))) as occupation,") \
		_T(" 	nvl(hd_dtladdr, hp_dtladdr) as detailaddress,") \
		_T(" 	hms_getaddress(hp_provid,hp_distid,hp_villid) as address,") \
		_T(" 	hp_workplaceid as workplaceid,") \
		_T(" 	hp_workplace as workplace,") \
		_T(" 	hd_object as objectid,") \
		_T("	trim(hd_diagnostic) ||' ['||trim(hd_icd)||']' as diagnostic, ") \
		_T("	hcr_maindisease as diagnosticex, ") \
		_T(" 	(SELECT ho_desc FROM hms_object WHERE ho_id=hd_object) as objectname,") \
		_T(" 	hd_cardno as cardno,") \
		_T(" 	hd_cardidx as cardidx, ") \
		_T(" 	hd_reldisease as relationdisease, ") \
		_T(" 	hc_regdate as regdate, ") \
		_T(" 	hc_expdate as expdate ") \
		_T(" FROM hms_patient") \
		_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
		_T(" LEFT JOIN HMS_CLINICAL_RECORD ON(HCR_PATIENTNO=hp_patientno)") \
		_T(" LEFT JOIN hms_card ON(hc_patientno=hd_patientno AND hc_idx=hd_cardidx) ") \
		_T(" WHERE hd_docno=%ld"), pMF->m_nTreatTime, m_nDocumentNo);
	rs.ExecSQL(szSQL);
	for (int i = 0; i < rs.GetFieldCount(); i++)
	{
		rptHeader->SetValue(rs.GetFieldName(i), rs.GetValue(i));
	}
	/*TT Kq*/
	if(m_szForm_id.IsEmpty())
	{
		szSQL.Format(_T("SELECT hpr_name as name, hpr_desc as describe ") \
			_T("FROM hms_pacs_result ") \
			_T(" LEFT JOIN hms_fee_list ON(hfl_feeid=hpr_itemid) ") \
			_T(" WHERE  hpr_orderid=%ld AND hpr_itemid='%s' ") \
			_T("ORDER BY hfl_line"), m_nOrderID, m_szItemID);
	}
	else
	{
		szSQL.Format(_T(" SELECT  ") \
		_T(" 	hpl_name as name, ") \
		_T(" 	hpr_desc as describe  ") \
		_T(" from hms_operation  ") \
		_T(" left join hms_pacs_form on(hpf_id=ho_result)") \
		_T(" left join hms_pacs_layout on(hpl_id=hpf_id)") \
		_T(" left join hms_pacs_result on(hpr_orderid=ho_idx ") \
		_T("		and hpr_name=hpl_name and hpr_itemid=ho_itemid)") \
		_T(" WHERE ho_idx = %ld AND ho_itemid='%s' and hpl_id='%s' and length(hpr_desc) > 0 ")
		, m_nOrderID, m_szItemID, m_szForm_id);
	}
	rsl.ExecSQL(szSQL);
	while(!rsl.IsEOF())
	{
		rsl.GetValue(_T("name"), szFieldName);
		rsl.GetValue(_T("describe"), szValue);
		rptHeader->SetValue(szFieldName, szValue);		
		rptFooter->SetValue(szFieldName, szValue);			
		rsl.MoveNext();
	}
	/*
	Picture = rptFooter->GetItem(_T("Picture"));

	HBITMAP hBitmap = NULL;
	if(Picture)
	{	
		Picture->SetFixedHeight(true);

		hBitmap = pMF->DownloadImage(m_nDocumentNo, m_nOrderID, m_szItemID, Picture->GetItemRect().Width(), Picture->GetItemRect().Height(), Picture->m_nCol1, Picture->m_nRow1);
		if (hBitmap)
		{
			Picture->SetFixedHeight(true);
			Picture->SetHBITMAP(hBitmap);
			::DeleteObject(hBitmap);
			
		}
	}
	if(hBitmap) ::DeleteObject(hBitmap);
	*/
	/*TT meta*/
	rs.GetValue(_T("perform_date"), szPerformDate);
	tmpStr.Format(rptFooter->GetValue(_T("PerformDate"))
		, szPerformDate.Mid(11, 5), szPerformDate.Mid(8,2), szPerformDate.Mid(5,2), szPerformDate.Left(4));
	rptFooter->SetValue(_T("PerformDate"), tmpStr);
	rpt.PrintPreview();
}

void COperationResult::OnInputFormSelect(){
	//m_szItemID = _T("B420019454");
	//m_nDocumentNo = 19352423;
	//m_nOrderID = 1873133;

	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CRecord grs(&pMF->m_db);
	CRecord rs(&pMF->m_db);
	CString szSQL;
	CRect rect;

	
	m_wndInputForm.GetWindowRect(&rect);
	CPoint point = CPoint(rect.left, rect.top);
	CGuiMenu menu(pMF);
	menu.CreatePopupMenu();
	CMenu submenu;
	int nID = 1;
	int nIdx =1;
	int nCount = 0;
	CString szName;
	int nNewGroup, nMenuGroup;
	CMap<int, int, CString, CString> mapForm;
	
	
	szSQL.Format(
		_T("SELECT DISTINCT HPF_MENUID, ") \
		_T(" (select distinct ss_desc ") \
		_T(" from sys_sel ") \
		_T(" where ss_id='hms_pacs_form_menu_group' ") \
		_T(" and ss_code=cast(hpf_menuid as nvarchar2(15))) as hpf_groupname ") \
		_T(" FROM hms_pacs_form ") \
		_T(" LEFT JOIN hms_pacs_form_menu ON(hpf_id=hpfm_formid) ") \
		_T(" WHERE hpfm_itemid='%s' and hpf_menuid > 0 "), m_szItemID);
	grs.ExecSQL(szSQL);

	while(!grs.IsEOF()){

		grs.GetValue(_T("HPF_MENUID"), nNewGroup);
		szSQL.Format(
			_T(" SELECT hpfm_itemid, hpfm_formid, hpf_name ") \
			_T(" FROM hms_pacs_form_menu ") \
			_T(" LEFT JOIN hms_pacs_form ON(hpf_id=hpfm_formid) ") \
			_T(" WHERE hpfm_itemid='%s' and hpf_menuid=%d ") \
			_T(" ORDER BY hpfm_index "), m_szItemID, nNewGroup);
		rs.ExecSQL(szSQL);
		if(!rs.IsEOF())
		{
			CGuiMenu newmenu(pMF);
			newmenu.CreatePopupMenu();
			grs.GetValue(_T("hpf_groupname"), szName);
			
			if(nCount++ > 0){
				menu.AppendMenu(MF_SEPARATOR, 0, _T("-"));

			}
			menu.AppendMenu(MF_POPUP, (UINT_PTR)newmenu.m_hMenu, szName);
			
			
			if(newmenu)
			{
				
				while(!rs.IsEOF())
				{
						mapForm[nID] = rs.GetValue(_T("hpfm_formid"));
						szName.Format(_T("%d. %s"), nIdx, rs.GetValue(_T("hpf_name")));
						newmenu.AppendMenu(MF_BYPOSITION, nID++, szName);
						
						nIdx ++;
					rs.MoveNext();
				}
			}
		}

		grs.MoveNext();
	}


	szSQL.Format(
		_T(" SELECT hpfm_itemid, hpfm_formid, hpf_name ") \
		_T(" FROM hms_pacs_form ") \
		_T(" LEFT JOIN hms_pacs_form_menu ON(hpf_id=hpfm_formid) ") \
		_T(" WHERE hpfm_itemid='%s'  and hpf_menuid=0 ") \
		_T(" ORDER BY hpfm_index "), m_szItemID);
	rs.ExecSQL(szSQL);
	while(!rs.IsEOF())
	{
		if(nID > 1)
			menu.AppendMenu(MF_SEPARATOR, 0, _T("-"));
		mapForm[nID] = rs.GetValue(_T("hpfm_formid"));
		szName.Format(_T("%d. %s"), nIdx, rs.GetValue(_T("hpf_name")));
		menu.AppendMenu(MF_BYPOSITION, nID++, szName);
		nIdx ++;

		rs.MoveNext();
	}

	int ret = menu.TrackPopupMenu(TPM_NONOTIFY|TPM_RETURNCMD|TPM_LEFTALIGN|TPM_BOTTOMALIGN, point.x, point.y, pMF);
	CString szFormID;

	if(mapForm.Lookup(ret, szFormID))
	{
		OnCancelSelect();
		/*
		if(m_pWndInputResult)
		{
			m_pWndInputResult->SendMessage(WM_DESTROY);
			delete m_pWndInputResult;
		}
		int nWidth, nHeight, nOrderID_New, nOrderID_Old;
		CRect rect;
		
		m_pWndInputResult = new COperationInputResult();
		nWidth = m_pWndInputResult->GetWidth();
		nHeight = m_pWndInputResult->GetHeight();
		m_pWndInputResult->m_nDocumentNo = m_nDocumentNo;
		m_pWndInputResult->m_szDeptType = m_szDepartmentType;
		m_pWndInputResult->m_nOrderlineID = m_nOrderlineID;
		m_pWndInputResult->SetReference(m_nOrderID, m_szItemID, szFormID);
		m_wndView.GetClientRect(&rect);
		rect.right = rect.left + m_pWndInputResult->GetWidth();
		rect.bottom = rect.top + m_pWndInputResult->GetHeight();
		m_wndView.SetScrollSizes(MM_TEXT, CSize(rect.Width()-5, rect.Height()));
		m_wndView.SetScrollPos(SB_VERT, 0);
		m_pWndInputResult->Create(&m_wndView, &rect); 
		m_pWndInputResult->OnInitDialog();
		m_pWndInputResult->Invalidate();
		*/
		m_szForm_id = szFormID;
		OnLoadResult();
//		pMF->DownloadDicomFile(m_nDocumentNo, m_nOrderID, m_szItemID);
/*
		nOrderID_New = m_nOrderID;	
		
		pMF->m_szID.Format(_T("PACS_%ld_%ld_%s"), m_nDocumentNo, m_nOrderID, m_szItemID);

		CString szFileName;		
		::GetCurrentDirectory(MAX_PATH, pMF->szPath);	
		pMF->m_szFileName.Format(_T("%s.jpg"), pMF->m_szID);
		szFileName.Format(_T("%s\\Images\\%s"), pMF->szPath, pMF->m_szFileName);
			
			struct _stat stat;
			int ret = _wstat(szFileName, &stat);
			if(ret == 0)
			{
				m_wndImage.Release();
				m_wndImage.SetFileName(szFileName, TRUE);

			}
			else
			{
				m_wndImage.SetFileName(_T(""),TRUE);
			}
			m_wndImage.Invalidate();

		/*
		if(nOrderID_New > 0 && nOrderID_New != pMF->m_nOrderIDTmp)
		{		
			OnImageSelectChange(m_nDocumentNo, m_nOrderID);	
			pMF->m_nOrderIDTmp = nOrderID_New;		
		}
	*/
		//m_wndCapture.EnableWindow(true);
		m_wndInputForm.EnableWindow(true);
		//GetCurrentStatus();

	}
} 
void COperationResult::OnOperationListDblClick(){
	
} 
void COperationResult::OnOperationListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_nOrderID = str2long(m_wndOperationList.GetItemText(nNewItem, 0));
	m_nDocumentNo= str2long(m_wndOperationList.GetItemText(nNewItem, 1));
	m_szItemID = m_wndOperationList.GetItemText(nNewItem, 2);
	m_szForm_id = m_wndOperationList.GetItemText(nNewItem, 7);
	OnLoadResult();
} 
int COperationResult::OnOperationListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long COperationResult::OnOperationListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szStatus;
	m_wndOperationList.BeginLoad(); 
	int nCount = 0, nItem = -1;
	szWhere.Format(
	_T(" and trunc(ho_orderdate) between to_date('%s', 'yyyy/mm/dd') and to_date('%s', 'yyyy/mm/dd')") \
	_T(" and ho_status NOT IN ('O', 'C')") \
	_T(" and hfl_groupid IN (select ss_code ") \
	_T("				from sys_sel ") \
	_T("				where ss_id = 'hms_fee_group_id_opt_result')")
	, m_szFromDate, m_szToDate);
	if (!m_szSearch.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and ho_docno||'|'||lower(get_patientname(ho_docno)) like chr(37)||'%s'||chr(37)")
			, m_szSearch);
	}
	szSQL.Format(_T(" SELECT    ho_idx AS order_id,") \
	_T("           ho_docno AS doc_no,") \
	_T("           ho_itemid AS item_id,") \
	_T("           to_char(ho_orderdate, 'dd/mm/yyyy') AS order_date,") \
	_T("           hfl_name AS item_name,") \
	_T("           ho_status AS status,") \
	_T("           get_patientname(ho_docno) AS patient_name,") \
	_T("		   NVL(ho_result, hfl_index1) as form_id") \
	_T(" FROM      hms_operation") \
	_T(" LEFT JOIN hms_fee_list ON ( hfl_feeid = ho_itemid ) ") \
	_T(" WHERE 1=1 %s"), szWhere);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		rs.GetValue(_T("status"), szStatus);
		nItem = m_wndOperationList.AddItems(
			rs.GetValue(_T("order_id")),
			rs.GetValue(_T("doc_no")),
			rs.GetValue(_T("item_id")),
			rs.GetValue(_T("patient_name")),
			rs.GetValue(_T("order_date")), 
			rs.GetValue(_T("item_name")), 
			rs.GetValue(_T("status")), 
			rs.GetValue(_T("form_id")), NULL);
		if(szStatus == _T("S")){
			m_wndOperationList.SetItemBkColor(nItem, COLOR_SEND, FALSE);
			m_wndOperationList.SetItemTextColor(nItem, COLOR_BLACK, FALSE);
		}
		else if(szStatus == _T("T")){
			m_wndOperationList.SetItemBkColor(nItem, COLOR_TERMINATE, FALSE);
			m_wndOperationList.SetItemTextColor(nItem, COLOR_WHITE, FALSE);
		}
		rs.MoveNext();
	}
	m_wndOperationList.EndLoad(); 
	return nCount;
}
int COperationResult::OnAddOperationResult(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int COperationResult::OnEditOperationResult(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int COperationResult::OnDeleteOperationResult(){
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
 		OnCancelOperationResult();
 	}
	return 0;
}
int COperationResult::OnSaveOperationResult(){
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
 		//OnOperationResultListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int COperationResult::OnCancelOperationResult(){
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
int COperationResult::OnOperationResultListLoadData(){
	return 0;
}

void COperationResult::OnLoadResult()
{
	if (m_pWndInputResult)
	{
		m_pWndInputResult->SendMessage(WM_DESTROY);
		delete m_pWndInputResult;
	}
	m_pWndInputResult = new COperationInputResult();
	m_pWndInputResult->m_nDocumentNo = m_nDocumentNo;
	m_pWndInputResult->SetReference(m_nOrderID, m_szItemID, m_szForm_id);
	m_pWndInputResult->Create(&m_wndView);
	m_pWndInputResult->OnInitDialog();
	m_wndView.SetScrollPos(SB_VERT, 0);
	m_wndView.SetScrollSizes(MM_TEXT, CSize(m_pWndInputResult->GetWidth(), m_pWndInputResult->GetHeight()));
}

void COperationResult::OnCaptureSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(m_nOrderID <= 0 || m_szItemID.IsEmpty())
		return;
	CString m_szPatientName, m_szSexKey, m_szAge, m_szAddress;
	pMF->SetActivePane(2);
	pMF->m_wndImageCapture.m_pWndFocus = this;
	pMF->m_wndImageCapture.m_nDocumentNo = m_nDocumentNo;
	pMF->m_wndImageCapture.m_nOrderID = m_nOrderID;
	pMF->m_wndImageCapture.m_szItemID = m_szItemID;
	pMF->m_wndImageCapture.m_szPatientName = m_szPatientName;
	pMF->m_wndImageCapture.m_szSex = m_szSexKey;
	pMF->m_wndImageCapture.m_szBirthDate = m_szAge;
	pMF->m_wndImageCapture.m_szAddress = m_szAddress;
	pMF->m_wndImageCapture.StartCapture();
}