#include "OperationInputResult.h"
//#include "stdafx.h"
#include "MainFrm.h"
#include "StringToken.h"
#include "ReportDocument.h"
static void _OnComboLoadDataFnc(CWnd* pWnd)
{
	((COperationInputResult *)pWnd)->OnComboLoadData();
}

/*static void _OnResultChangeFnc(CWnd *pWnd){
	((COperationInputResult *)pWnd)->OnResultChange();
} */
/*static void _OnResultSetfocusFnc(CWnd *pWnd){
	((COperationInputResult *)pWnd)->OnResultSetfocus();} */ 
/*static void _OnResultKillfocusFnc(CWnd *pWnd){
	((COperationInputResult *)pWnd)->OnResultKillfocus();
} */
static int _OnResultCheckValueFnc(CWnd *pWnd){
	return ((COperationInputResult *)pWnd)->OnResultCheckValue();
} 
/*static void _OnConclutionChangeFnc(CWnd *pWnd){
	((COperationInputResult *)pWnd)->OnConclutionChange();
} */
/*static void _OnConclutionSetfocusFnc(CWnd *pWnd){
	((COperationInputResult *)pWnd)->OnConclutionSetfocus();} */ 
/*static void _OnConclutionKillfocusFnc(CWnd *pWnd){
	((COperationInputResult *)pWnd)->OnConclutionKillfocus();
} */
static int _OnConclutionCheckValueFnc(CWnd *pWnd){
	return ((COperationInputResult *)pWnd)->OnConclutionCheckValue();
} 

static void _OnUpdateSelectFnc(CWnd *pWnd){
	COperationInputResult *pVw = (COperationInputResult *)pWnd;
	pVw->OnUpdateSelect();
} 

static void _OnSaveSelectFnc(CWnd *pWnd){
	COperationInputResult *pVw = (COperationInputResult *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	COperationInputResult *pVw = (COperationInputResult *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	COperationInputResult *pVw = (COperationInputResult *)pWnd;
	pVw->OnPrintSelect();
} 
static int _OnAddCOperationInputResultFnc(CWnd *pWnd){
	 return ((COperationInputResult*)pWnd)->OnAddCOperationInputResult();
} 
static int _OnEditCOperationInputResultFnc(CWnd *pWnd){
	 return ((COperationInputResult*)pWnd)->OnEditCOperationInputResult();
} 
static int _OnDeleteCOperationInputResultFnc(CWnd *pWnd){
	 return ((COperationInputResult*)pWnd)->OnDeleteCOperationInputResult();
} 
static int _OnSaveCOperationInputResultFnc(CWnd *pWnd){
	 return ((COperationInputResult*)pWnd)->OnSaveCOperationInputResult();
} 
static int _OnCancelCOperationInputResultFnc(CWnd *pWnd){
	 return ((COperationInputResult*)pWnd)->OnCancelCOperationInputResult();
} 
COperationInputResult::COperationInputResult()
{
	m_nDlgWidth = 580;
	m_nDlgHeight = 800;
	m_pWndFocus = NULL;
	//SetDefaultValues();
	m_bCreated = false;
	m_bInited = false;
}
COperationInputResult::~COperationInputResult(){
	
}

void COperationInputResult::OnCreateComponents()
{

	if(m_bCreated)
		return;
	m_bCreated = true;
	CString szSQL;
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CRecord rs(&pMF->m_db), prs(&pMF->m_db);
	szSQL.Format(_T("SELECT * FROM hms_pacs_layout  WHERE hpl_id='%s' ORDER BY hpl_index"), m_szFormID);
	rs.ExecSQL(szSQL);
	CString tmpStr;
	int nType = -1;
	int nMaxWidth=0, nMaxHeight=0;
	m_pWndFocus = NULL;
	int x=0, y=0;
	while(!rs.IsEOF())
	{
		ControlProp cp;
		rs.GetValue(_T("hpl_type"), cp.nTypeCtrl);
		rs.GetValue(_T("hpl_xpos"), cp.nX);
		rs.GetValue(_T("hpl_ypos"), cp.nY);
		rs.GetValue(_T("hpl_width"), cp.nWidth);
		rs.GetValue(_T("hpl_height"), cp.nHeight);
		rs.GetValue(_T("hpl_caption"), cp.szCaption);
		rs.GetValue(_T("hpl_name"), cp.szName);
		rs.GetValue(_T("hpl_values"), cp.arrayString);
		rs.GetValue(_T("hpl_multiline"), cp.nMultiline);
		//if(pMF->m_wndPatientProfile.m_szStatusLine != _T("T"))
			rs.GetValue(_T("hpl_defval"), cp.szDefValue);
		
		if(cp.nTypeCtrl == GUI_GROUPBOX)
		{
			CGuiGroupBox *pWnd = new CGuiGroupBox();
			pWnd->Create(this, cp.szCaption, cp.nX, cp.nY, cp.nX+cp.nWidth, cp.nY+cp.nHeight);
			cp.pWnd = pWnd;
		}
		if(cp.nTypeCtrl == GUI_LABEL)
		{
			CGuiLabel *pWnd = new CGuiLabel();
			pWnd->Create(this, cp.szCaption, cp.nX, cp.nY, cp.nX+cp.nWidth, cp.nY+cp.nHeight);
			pWnd->ModifyStyle(SS_CENTERIMAGE|SS_LEFTNOWORDWRAP, SS_LEFT);
			cp.pWnd = pWnd;
		}
		if(cp.nTypeCtrl == GUI_TEXTCTRL)
		{
			CGuiTextCtrl *pWnd = new CGuiTextCtrl();
			pWnd->Create(this, cp.nX, cp.nY, cp.nX+cp.nWidth, cp.nY+cp.nHeight, TRUE, FALSE, cp.nMultiline==0?false:true);
			pWnd->SetWindowText(cp.szDefValue);
			pWnd->SetLimitText(2000);
			cp.pWnd = pWnd;
		}
		if(cp.nTypeCtrl == GUI_COMBOBOX)
		{
			CGuiComboBox *pWnd = new CGuiComboBox();
			pWnd->Create(this,  cp.nX, cp.nY, cp.nX+cp.nWidth, cp.nY+cp.nHeight);
			/*
			pWnd->Format(1, 0, 10);
			pWnd->InsertColumn(0, _T("Description"), CFMT_TEXT, cp.nWidth);
			//pWnd->SetEvent(WE_LOADDATA, _OnComboLoadDataFnc);
			CStringToken token(cp.arrayString, _T(","));
			for (int i =0; i < token.GetSize(); i++){
				token.GetAt(i, tmpStr);
				pWnd->AddItems(tmpStr, NULL);
			}
			pWnd->SetWindowText(cp.szDefValue);
			pWnd->SetCheckValue(true);
			cp.pWnd = pWnd;
			*/
			pWnd->Format(2, 1, 10);
			pWnd->InsertColumn(0, _T("ID"), CFMT_TEXT, 0);
			pWnd->InsertColumn(1, _T("Description"), CFMT_TEXT, cp.nWidth);
			//pWnd->SetEvent(WE_LOADDATA, _OnComboLoadDataFnc);
			szSQL.Format(_T("select ss_desc as s_desc, ss_code as s_code from sys_sel where ss_id = 'sys_sex'"));
			prs.ExecSQL(szSQL);
			while (!prs.IsEOF())
			{
				pWnd->AddItems(prs.GetValue(_T("s_code")), prs.GetValue(_T("s_desc")), NULL);
				prs.MoveNext();
			}
			pWnd->SetCheckValue(true);
			cp.pWnd = pWnd;
		}
		if(cp.nTypeCtrl == GUI_BUTTON)
		{
			if(cp.szName == _T("Update"))
			{
				m_wndUpdate.Create(this, cp.szCaption, cp.nX, cp.nY, cp.nX+cp.nWidth, cp.nY+cp.nHeight);
			}
			if(cp.szName == _T("Save"))
			{
				m_wndSave.Create(this, cp.szCaption, cp.nX, cp.nY, cp.nX+cp.nWidth, cp.nY+cp.nHeight);
			}
			if(cp.szName == _T("Cancel"))
			{
				m_wndCancel.Create(this, cp.szCaption, cp.nX, cp.nY, cp.nX+cp.nWidth, cp.nY+cp.nHeight);
			}

			if(cp.szName == _T("Print"))
			{
				m_wndPrint.Create(this, cp.szCaption, cp.nX, cp.nY, cp.nX+cp.nWidth, cp.nY+cp.nHeight);
				x = cp.nX+cp.nWidth+5;
				y = cp.nY;
			}
			
		}
		_tprintf(_T("\ncp.pWnd:%ld|cp.szName:%s\n"), cp.pWnd, cp.szName);
		nMaxHeight = max(nMaxHeight, cp.nY+cp.nHeight);
		aControls.Add(cp);
		if(m_pWndFocus== NULL)
		{
			m_pWndFocus = cp.pWnd;
		}
		rs.MoveNext();
	}
	m_nDlgHeight = nMaxHeight+10;
}
void COperationInputResult::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	/*m_hms_pacs_resultTbl.SetTableName(_T("hms_pacs_result"));
	m_hms_pacs_resultTbl.AddField(_T("hpr_orderid"), dfLong); 
	m_hms_pacs_resultTbl.AddField(_T("hpr_itemid"), dfText, 11); 
	m_hms_pacs_resultTbl.AddField(_T("hpr_name"), dfText, 35); 
	m_hms_pacs_resultTbl.AddField(_T("hpr_desc"), dfText, 1024); */
	

	SetMode(VM_EDIT);
	GetDataToScreen();
}
void COperationInputResult::OnSetWindowEvents()
{
	if(m_bInited)
		return;
	m_bInited = true;

	m_wndUpdate.SetEvent(WE_CLICK, _OnUpdateSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	GetDataToScreen();
}
void COperationInputResult::OnDoDataExchange(CDataExchange* pDX)
{
//	DDX_Text(pDX, m_wndResult.GetDlgCtrlID(), m_szResult);
//	DDX_Text(pDX, m_wndConclution.GetDlgCtrlID(), m_szConclution);
}
void COperationInputResult::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;	
	if(m_szDeptType == _T("E"))
	{
		if(m_arItems.GetCount() <= 1)
			szSQL.Format(_T("SELECT hpr_name, hpr_desc FROM hms_pacs_result WHERE hpr_orderid=%ld and hpr_itemid='%s'"), m_nOrderID, m_szItemID);
		else
			szSQL.Format(_T("SELECT hpr_name, hpr_desc FROM hms_pacs_result WHERE hpr_orderid=%ld"), m_nOrderID);
	}
	else
	{
		if(m_arItems.GetCount() <= 1)
			szSQL.Format(_T("SELECT hpr_name, hpr_desc FROM hms_pacs_result WHERE hpr_orderid=%ld and hpr_itemid='%s'"), m_nOrderID, m_szItemID);
		else
			szSQL.Format(_T("SELECT hpr_name, hpr_desc FROM hms_pacs_result WHERE hpr_orderid=%ld"), m_nOrderID);
	}
	rs.ExecSQL(szSQL);
	CString szName, szValue;
	while(!rs.IsEOF())
	{
		rs.GetValue(_T("hpr_name"), szName);
		rs.GetValue(_T("hpr_desc"), szValue);
		for (int i =0; i < aControls.GetCount(); i++)
		{
			ControlProp cp = aControls[i];
			if(cp.szName == szName)
			{				
				cp.szValue = szValue;
				if (cp.nTypeCtrl == GUI_COMBOBOX)
				{
					CGuiComboBox* pComBo = (CGuiComboBox*) cp.pWnd;
					pComBo->SetCurrent(0, cp.szValue);
				}
				else
				{
					cp.pWnd->SetWindowText(cp.szValue);
				}
				aControls.SetAt(i, cp);
				break;
			}
		}	
		rs.MoveNext();
	}

	SetMode(VM_VIEW);
}
void COperationInputResult::GetScreenToData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	for (int i =0; i < aControls.GetCount(); i++)
	{
		ControlProp cp = aControls[i];
		cp.szValue.Empty();
		if(cp.nTypeCtrl == GUI_TEXTCTRL)
		{
			cp.pWnd->GetWindowText(cp.szValue);
			aControls.SetAt(i, cp);
		}
		else if (cp.nTypeCtrl == GUI_COMBOBOX)
		{
			CGuiComboBox* pComBo = (CGuiComboBox*) cp.pWnd;
			cp.szValue = pComBo->GetCurrent(0);
			aControls.SetAt(i, cp);
		}
	}

}
void COperationInputResult::SetDefaultValues(){


}
int COperationInputResult::SetMode(int nMode)
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
 			EnableButtons(TRUE, 1, 2, -1); 
			if(m_pWndFocus)	m_pWndFocus->SetFocus();
 			break; 
 		case VM_VIEW: 
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 0, 3, -1); 
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
void COperationInputResult::SetReference(long nOrderID, CString szItemID, CString szFormID)
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString tmpStr;
	m_nOrderID = nOrderID;
	m_szItemID = szItemID;
	m_szFormID = szFormID;
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM hms_pacs_form WHERE hpf_id='%s'"), szFormID);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF()){
		rs.GetValue(_T("hpf_width"), m_nDlgWidth);
		rs.GetValue(_T("hpf_height"), m_nDlgHeight);
	}

	//_msg(_T("%ld"), m_nDocumentNo);

	if (m_szDeptType == _T("E"))
	{
		szSQL.Format(_T("SELECT hfl_feeid as itemid \
					FROM hms_pacsorderline \
					LEFT JOIN hms_fee_list ON(hfl_feeid=hpcl_itemid) \
					WHERE hpcl_orderid=%ld and hfl_index1='%s' "), m_nOrderID, szFormID);
	}
	else
	{
		szSQL.Format(_T("SELECT hfl_feeid as itemid \
					FROM hms_pacs_line \
					LEFT JOIN hms_fee_list ON(hfl_feeid=hpcl_itemid) \
					WHERE hpcl_orderid=%ld and hfl_index1='%s' "), m_nOrderID, szFormID);
	}
	

	rs.ExecSQL(szSQL);	
	while(!rs.IsEOF())
	{
		rs.GetValue(_T("itemid"), tmpStr);
		m_arItems.Add(tmpStr);
		rs.MoveNext();
	}
}
/*void COperationInputResult::OnResultChange(){
	
} */
/*void COperationInputResult::OnResultSetfocus(){
	
} */
/*void COperationInputResult::OnResultKillfocus(){
	
} */
int COperationInputResult::OnResultCheckValue(){
	return 0;
} 
/*void COperationInputResult::OnConclutionChange(){
	
} */
/*void COperationInputResult::OnConclutionSetfocus(){
	
} */
/*void COperationInputResult::OnConclutionKillfocus(){
	
} */
int COperationInputResult::OnConclutionCheckValue(){
	return 0;
} 

void COperationInputResult::OnUpdateSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(GetMode() != VM_VIEW) 
		return;
	SetMode(VM_EDIT);
} 
void COperationInputResult::OnSaveSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveCOperationInputResult();
	
} 
void COperationInputResult::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancelCOperationInputResult();
} 
void COperationInputResult::OnPrintSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	TCHAR szPath[MAX_PATH];
	GetCurrentDirectory(MAX_PATH, szPath);
	pMF->m_szCurrentFileNamePACS.Format(_T("%s\\Images\\PACS_%ld_%ld_%s.jpg"), szPath, m_nDocumentNo, m_nOrderID, m_szItemID);		

	//pMF->m_wndPatientProfile.m_wndDocumentNo.SetFocus();
	//pMF->PrintPACSResultX(m_nOrderID, m_szItemID, true, false, pMF->IsDicomMode());
	pMF->PrintPACSResultX(m_nOrderID, m_szItemID, true, false, false);
	pMF->SetFocus();
	//pMF->m_wndPatientProfile.m_wndDocumentNo.SetFocus();
	//pMF->m_wndPatientProfile.m_wndDocumentNo.SetSel(0, 10);
	return;
//	if(m_nOrderID <= 0)
//		return;
	CReport rpt;
	CString szFile, szSQL;
	CString tmpStr, szItemID, szName;
	CString szReportName;
	CRecord rs(&pMF->m_db);
	CRecord rsf(&pMF->m_db);

	TCHAR lpszPath[MAX_PATH];
	::GetCurrentDirectory(MAX_PATH, lpszPath);
	
	
	szSQL.Format(_T("SELECT hpf_reportname as reportname FROM hms_pacs_form WHERE hpf_id='%s'"), m_szFormID);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
		rs.GetValue(_T("reportname"), tmpStr);
	else
		tmpStr = _T("PACS_PXN.RPT");

	szReportName.Format(_T("%s\\Reports\\HMS\\%s"), lpszPath, tmpStr);

	if(!rpt.Init(szReportName))
	{
		CString szMsg;
		szMsg.Format(_T("Cant not load file [%s] "), szReportName);
		ShowMessageBox(szMsg, MB_OK);
		return;
	}

	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), pMF->m_CompanyInfo.sc_pname);
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), pMF->m_CompanyInfo.sc_name);
	rpt.GetReportHeader()->SetValue(_T("Department"), pMF->GetDepartmentName(pMF->m_szDept));
	//	rpt.GetReportHeader()->SetValue(_T("Room"), );		

	//In thoi gian bao cao Tu ngay ... den ngay ...
	CString szReportDate = rpt.GetReportHeader()->GetValue(_T("ReportDate"));


		CString szDiagnostic;
		
		if (m_szDeptType == _T("E"))
		{
			szSQL.Format(_T(" SELECT hpc_orderid as orderid,") \
				_T(" 	hd_docno as docno,") \
				_T(" 	trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
				_T(" 	hms_getage(trunc(hd_admitdate), hp_birthdate) as age,") \
				_T(" 	hp_sex as sex,") \
				_T(" 	hd_object as objectid,") \
				_T(" 	hms_getaddress(hp_provid,hp_distid,hp_villid) as address,") \
				_T("	hd_cardno as cardno, ") \
				_T(" 	hd_diagnostic as diagnostic,") \
				_T(" 	trunc(hpc_orderdate) as orderdate,") \
				_T(" 	hpc_doctor as doctor,") \
				_T(" 	hpc_deptid as deptid,") \
				_T(" 	hpc_roomid as roomid,") \
				_T(" 	trunc(hpc_performdate) as performdate,") \
				_T(" 	hpc_practitioner as perfromby, ") \
				_T(" 	hpc_instid as instid, ") \
				_T(" 	hpc_status as status, ") \
				_T(" 	hpc_emergency as emergency ") \
				_T(" FROM hms_patient") \
				_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
				_T(" LEFT JOIN hms_pacsorder ON(hpc_docno=hd_docno)") \
				_T(" WHERE hpc_orderid=%ld "), m_nOrderID);
		}
		else
		{
			szSQL.Format(_T(" SELECT hpc_orderid as orderid,") \
				_T(" 	hd_docno as docno,") \
				_T(" 	trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
				_T(" 	hms_getage(trunc(hd_admitdate), hp_birthdate) as age,") \
				_T(" 	hp_sex as sex,") \
				_T(" 	hd_object as objectid,") \
				_T(" 	hms_getaddress(hp_provid,hp_distid,hp_villid) as address,") \
				_T("	hd_cardno as cardno, ") \
				_T(" 	hd_diagnostic as diagnostic,") \
				_T(" 	trunc(hpc_orderdate) as orderdate,") \
				_T(" 	hpc_doctor as doctor,") \
				_T(" 	hpc_deptid as deptid,") \
				_T(" 	hpc_roomid as roomid,") \
				_T(" 	trunc(hpc_performdate) as performdate,") \
				_T(" 	hpc_practitioner as perfromby, ") \
				_T(" 	hpc_instid as instid, ") \
				_T(" 	hpc_status as status, ") \
				_T(" 	hpc_emergency as emergency ") \
				_T(" FROM hms_patient") \
				_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
				_T(" LEFT JOIN hms_pacs ON(hpc_docno=hd_docno)") \
				_T(" WHERE hpc_orderid=%ld "), m_nOrderID);
		}

		int ret = rs.ExecSQL(szSQL);
		//_msg(_T("%s"), szSQL);

		if(!rs.IsEOF())
		{
			rpt.GetReportHeader()->SetValue(_T("DocumentNo"), rs.GetValue(_T("docno")));
			rpt.GetReportHeader()->SetValue(_T("OrderNo"), rs.GetValue(_T("orderid")));
			StringUpper(rs.GetValue(_T("pname")), tmpStr);
			rpt.GetReportHeader()->SetValue(_T("PatientName"), tmpStr);
			rpt.GetReportHeader()->SetValue(_T("Age"), rs.GetValue(_T("age")));
			rpt.GetReportHeader()->SetValue(_T("Sex"), rs.GetValue(_T("sex")));
			rpt.GetReportHeader()->SetValue(_T("Address"), rs.GetValue(_T("address")));
			rpt.GetReportHeader()->SetValue(_T("Telephone"), rs.GetValue(_T("telephone")));
			rpt.GetReportHeader()->SetValue(_T("Occupation"), rs.GetValue(_T("occupation")));
			rpt.GetReportHeader()->SetValue(_T("cardno"), rs.GetValue(_T("cardno")));
			rpt.GetReportHeader()->SetValue(_T("Diagnostic"), szDiagnostic);
			rpt.GetReportFooter()->SetValue(_T("Remark"), rs.GetValue(_T("remark")));
			rpt.GetReportFooter()->SetValue(_T("Conclusion"), rs.GetValue(_T("conclusion")));
		}
		szSQL.Format(_T("SELECT hpr_name as name, hpr_desc as describe ") \
			_T(" FROM hms_pacs_result ") \
			_T(" WHERE hpr_orderid=%ld AND hpr_itemid='%s' "), m_nOrderID, m_szItemID);
		
		ret = rsf.ExecSQL(szSQL);

		CReportSection *pDetail;
		CString szDescribe, szResult;

		while(!rsf.IsEOF())
		{
			rsf.GetValue(_T("name"), szName);
			rsf.GetValue(_T("describe"), szDescribe);
			rpt.GetReportHeader()->SetValue(szName, szDescribe);
			rpt.GetReportFooter()->SetValue(szName, szDescribe);
			rsf.MoveNext();
		}
		CString szFileName;
		CReportItem *obj;
		obj = rpt.GetReportFooter()->GetItem(_T("Signature"));
		if(obj)
		{
			rs.GetValue(_T("treatdoctor"), tmpStr);
			szFileName.Format(_T("%s\\Reports\\%s.jpg"), lpszPath, tmpStr);
		}
		CString szPractitioner;
		rs.GetValue(_T("practitioner"), szPractitioner);
		obj = rpt.GetReportFooter()->GetItem(_T("Signature2"));
		if(obj)
		{
			
			szFileName.Format(_T("%s\\Reports\\%s.jpg"), lpszPath, szPractitioner);
		}
		
		obj = rpt.GetReportFooter()->GetItem(_T("Picture"));
		//if(obj)
		//{
		//	
		//	szFileName.Format(_T("%s\\%s.jpg"), pMF->szPath, pMF->m_szFileName);
		//	
		//}
		
		//_msg(_T("%s"), szFileName);

		rpt.GetReportFooter()->SetValue(_T("ReportDate"), tmpStr);
		//Ngay in bao cao
		CString szPrintDate, szSysDate;
		szSysDate = pMF->GetSysDate();
		tmpStr = rpt.GetReportFooter()->GetValue(_T("PrintDate"));
		szPrintDate.Format(tmpStr, szSysDate.Right(2), szSysDate.Mid(5, 2), szSysDate.Left(4));
		rpt.GetReportFooter()->SetValue(_T("PrintDate"), szPrintDate);
		rpt.GetReportFooter()->SetValue(_T("Doctor"), pMF->GetDoctorName(szPractitioner));
		
		//rpt.PrintPreview();
} 
int COperationInputResult::OnAddCOperationInputResult(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
} 
int COperationInputResult::OnEditCOperationInputResult(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
	SetFocus();
 	SetMode(VM_EDIT);
	return 0;
 
} 
int COperationInputResult::OnDeleteCOperationInputResult()
{
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
 		OnCancelCOperationInputResult(); 
 	}
	return 0;
 } 
int COperationInputResult::OnSaveCOperationInputResult()
{
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	GetScreenToData();
	CString szSQL, szItems;
	CRecord rs(&pMF->m_db);
	//if(m_nPerformedRoom_ID <= 0)
	//{
	//	ShowMessageBox(_T("Y\xEAu \x63\x1EA7u \x63h\x1ECDn ph\xF2ng th\x1EF1\x63 hi\x1EC7n"));
	//	return 0;
	//}
	
	if(m_arItems.GetCount() <= 1)
	{		
		szItems = m_szItemID;
		pMF->BeginTransaction();
		szSQL.Format(_T("DELETE FROM hms_pacs_result WHERE hpr_docno = %ld AND hpr_orderid=%ld and hpr_itemid in('%s') "), m_nDocumentNo,m_nOrderID, szItems);
		pMF->ExecSQL(szSQL);
		szSQL.Format(_T("SELECT coalesce(max(hpr_idx), 0) + 1 FROM hms_pacs_result_log WHERE hpr_docno = %ld AND hpr_orderid=%ld and hpr_itemid in('%s') "), m_nDocumentNo,m_nOrderID, szItems);
		rs.ExecSQL(szSQL);
		int nIndex = rs.GetIntValue();
		for (int i =0; i < aControls.GetCount(); i++)
		{
			ControlProp cp = aControls[i];
			if(cp.nTypeCtrl == GUI_TEXTCTRL || cp.nTypeCtrl == GUI_COMBOBOX)
			{				
				if(cp.szValue.GetLength() > 0)
				{
					szSQL.Format(
						_T(" INSERT INTO hms_pacs_result(HPR_DOCNO,HPR_ORDERID,HPR_ITEMID,HPR_NAME,HPR_DESC) ") \
						_T(" VALUES(%ld,%ld, '%s', '%s', '%s') ")
						, m_nDocumentNo,m_nOrderID, szItems, cp.szName, cp.szValue);
					int nRet = pMF->ExecSQL(szSQL);
					if (nRet > 0 && pMF->GetCurrentDepartmentID() == _T("C5"))
					{
						szSQL.Format(
							_T(" INSERT INTO hms_pacs_result_log( ") \
							_T("	HPR_DOCNO,HPR_ORDERID,HPR_ITEMID,") \
							_T("	HPR_NAME,HPR_DESC,HPR_UPDATEDBY,HPR_UPDATEDDATE,HPR_IP,HPR_IDX) ") \
							_T(" VALUES(%ld, %ld, '%s', '%s', '%s', '%s', TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS'), '%s', %d) ")
							, m_nDocumentNo,m_nOrderID, szItems, cp.szName, cp.szValue, pMF->GetCurrentUser(), 
							pMF->GetSysDateTime(), pMF->GetLocalIP(), nIndex );
						pMF->ExecSQL(szSQL);
					}
				}
			}
		}

/*		
		szSQL.Format(_T("UPDATE hms_pacsorder SET hpc_pdeptid='%s', hpc_proomid=%ld, hpc_performdate=systimestamp, hpc_practitioner='%s', hpc_status='T' ") \
			_T(" WHERE hpc_orderid=%ld "), pMF->m_szDept, pMF->m_nPRoomID, pMF->GetCurrentUser(), m_nOrderID);
		pMF->ExecSQL(szSQL);
		szSQL.Format(_T("UPDATE hms_pacsorderline SET hpcl_result='%s', hpcl_practitioner='%s', hpcl_status ='T', hpcl_date=systimestamp, hpcl_perform_deptid='%s', hpcl_proomid=%d ") \
			_T("WHERE hpcl_orderid=%ld and hpcl_itemid='%s'"), 
			m_szFormID, pMF->GetCurrentUser(), pMF->m_szDept, m_nPerformedRoom_ID, m_nOrderID, szItems);
		pMF->ExecSQL(szSQL);		
*/	
		//pMF->m_wndPatientProfile.RefreshFormID(m_szFormID);
		szSQL.Format(_T("UPDATE hms_operation ") \
					_T(" SET ho_result = '%s'") \
					_T(" WHERE ho_idx = %ld ")
					, m_szFormID, m_nOrderID);
		pMF->ExecSQL(szSQL);

		pMF->Commit();
	}
	SetMode(VM_VIEW);

	//pMF->m_wndPatientProfile.SetFocus();
	//pMF->m_wndPatientProfile.m_wndDocumentNo.SetFocus();

	return 1;
}
int COperationInputResult::OnCancelCOperationInputResult(){
	SetMode(VM_VIEW); 
 	return 0;
} 
int COperationInputResult::OnCOperationInputResultListLoadData(){
	return 0;
}
BEGIN_MESSAGE_MAP(COperationInputResult, CGuiView)
	ON_WM_DESTROY()
	ON_WM_CREATE()
END_MESSAGE_MAP()

void COperationInputResult::OnDestroy()
{
	CGuiView::OnDestroy();
	for (int i = 0; i < aControls.GetCount(); i++)
	{
		ControlProp cp;
		cp = aControls[i];
		CWnd *pWnd = cp.pWnd;
		pWnd->DestroyWindow();
	}
	aControls.RemoveAll();
//	delete this;
/*
	for (int i = aControls.GetCount()-1; i >=0 ; i--){
		ControlProp wndctrl = aControls[i];
		if(wndctrl.szName != _T("Save") && 
			wndctrl.szName != _T("Print") &&
			wndctrl.szName != _T("Cancel"))
		delete wndctrl.pWnd;
	}
*/
	

}

int COperationInputResult::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	
	if (CGuiView::OnCreate(lpCreateStruct) == -1)
		return -1;
	//ModifyStyle(0, WS_MINIMIZEBOX);
	return 0;
}


BOOL COperationInputResult::PreTranslateMessage(MSG* pMsg)
{
	if(pMsg->message == WM_KEYDOWN ){
		
	}

	return CGuiView::PreTranslateMessage(pMsg);
}

void COperationInputResult::OnComboLoadData()
{
	CGuiComboBox* pWnd = (CGuiComboBox*) GetFocus();
	if (pWnd == NULL)
	{
		_tprintf(_T("\nNULL\n"));
		return;
	}
	CString tmpStr;
	GetFocus()->GetWindowText(tmpStr);
	_tprintf(_T("\nFocus: %ld|%s\n"), GetFocus(), tmpStr);
	ControlProp cp;
	bool bFound= false;
	for (int i = 0; i < aControls.GetCount(); i++)
	{
		cp = aControls[i];
		if (cp.pWnd == pWnd)
		{
			bFound = true;
			break;
		}
	}
	if (!bFound)
	{
		_tprintf(_T("\nbFound false\n"));
		return;
	}
	CStringToken token(cp.arrayString, _T(","));
	pWnd->DeleteAllItems();
	for (int i =0; i < token.GetSize(); i++){
		token.GetAt(i, tmpStr);
		pWnd->AddItems(tmpStr, NULL);
	_tprintf(_T("\ntmpStr:%s\n"), tmpStr);
	}
}