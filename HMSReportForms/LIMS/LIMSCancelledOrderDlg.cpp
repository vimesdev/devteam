#include "stdafx.h"
#include "LIMSCancelledOrderDlg.h"
#include "HMSMainFrame.h"
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CLIMSCancelledOrderDlg*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CLIMSCancelledOrderDlg*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CLIMSCancelledOrderDlg*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CLIMSCancelledOrderDlg*)pWnd)->OnListDeleteItem();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CLIMSCancelledOrderDlg *pVw = (CLIMSCancelledOrderDlg *)pWnd;
	pVw->OnPrintSelect();
} 
static int _OnAddLIMSCancelledOrderDlgFnc(CWnd *pWnd){
	 return ((CLIMSCancelledOrderDlg*)pWnd)->OnAddLIMSCancelledOrderDlg();
} 
static int _OnEditLIMSCancelledOrderDlgFnc(CWnd *pWnd){
	 return ((CLIMSCancelledOrderDlg*)pWnd)->OnEditLIMSCancelledOrderDlg();
} 
static int _OnDeleteLIMSCancelledOrderDlgFnc(CWnd *pWnd){
	 return ((CLIMSCancelledOrderDlg*)pWnd)->OnDeleteLIMSCancelledOrderDlg();
} 
static int _OnSaveLIMSCancelledOrderDlgFnc(CWnd *pWnd){
	 return ((CLIMSCancelledOrderDlg*)pWnd)->OnSaveLIMSCancelledOrderDlg();
} 
static int _OnCancelLIMSCancelledOrderDlgFnc(CWnd *pWnd){
	 return ((CLIMSCancelledOrderDlg*)pWnd)->OnCancelLIMSCancelledOrderDlg();
} 
CLIMSCancelledOrderDlg::CLIMSCancelledOrderDlg(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	m_nOrderId = 0;
	m_nOrderId = 12000692;
	SetDefaultValues();
}
CLIMSCancelledOrderDlg::~CLIMSCancelledOrderDlg(){
}
void CLIMSCancelledOrderDlg::OnCreateComponents(){
	m_wndChoosePrintDate.Create(this, _T("Unapproval Order"), 5, 5, 505, 260);
	m_wndList.Create(this,10, 30, 500, 255); 
	m_wndPrint.Create(this, _T("Print"), 425, 265, 505, 290);

}
void CLIMSCancelledOrderDlg::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();


	m_wndList.InsertColumn(0, _T("Idx"), CFMT_NUMBER, 40);
	m_wndList.InsertColumn(1, _T("Unapproval By"), CFMT_TEXT, 170);
	m_wndList.InsertColumn(2, _T("Date"), CFMT_TEXT, 130);
	m_wndList.InsertColumn(3, _T("Desc"), CFMT_TEXT, 130);

}
void CLIMSCancelledOrderDlg::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	OnListLoadData();

}
void CLIMSCancelledOrderDlg::OnDoDataExchange(CDataExchange* pDX){

}
void CLIMSCancelledOrderDlg::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	}
	else
	{
			
	}

}
void CLIMSCancelledOrderDlg::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CLIMSCancelledOrderDlg::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CLIMSCancelledOrderDlg::SetDefaultValues(){


}
int CLIMSCancelledOrderDlg::SetMode(int nMode){
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
void CLIMSCancelledOrderDlg::OnListDblClick(){
	
} 
void CLIMSCancelledOrderDlg::OnListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CLIMSCancelledOrderDlg::OnListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CLIMSCancelledOrderDlg::OnListLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	szSQL.Format(_T("select htu_idx as idx, get_username(htu_unapprovalby) as UnapprovalBy, ") \
				_T("  to_char(htu_unapprovaldate, 'dd/mm/yyyy hh24:mi') as udate, ") \
				_T("  htu_comment as descr ") \
				_T(" from hms_testorder_unapprove where htu_orderid = %ld"), m_nOrderId);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("Idx")), 
			rs.GetValue(_T("UnapprovalBy")), 
			rs.GetValue(_T("uDate")), 
			rs.GetValue(_T("Descr")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}
void CLIMSCancelledOrderDlg::OnPrintSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	int nSel = m_wndList.GetCurSel();
	if (nSel < 0)
	{
		return;
	}
	int nIdx = str2int(m_wndList.GetItemText(nSel, 0));
	CString szModuleId = pMF->GetModuleID();
	pMF->m_szModuleID = _T("EM");
	OnPrint(m_nOrderId, nIdx);
	pMF->m_szModuleID = szModuleId;
} 

void CLIMSCancelledOrderDlg::OnPrint(long nOrderID, int nIdx, bool bPreview, bool bDirect){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CReport rpt;
	CString tmpStr, tmpStr1, szGroupID, szSex, szStatus;
	CString szReportName, szOrderName;
	CString szSQL;
	CRecord rs(&pMF->m_db);
	CRecord rs2(&pMF->m_db);
	CRecord rs3(&pMF->m_db);
	long nDocumentNo;
	int nRefIndex, nRoomID;
	int nNumberOrder=0;
	CString tmpStr2, szDeptType;
	CString szFormID;
	CString szCurrentDept;
	if(pMF->GetModuleID() != _T("EM"))
		return;


	szSQL.Format(_T("SELECT hms_testorder.*, lims_getsampleby(hpc_orderid) sample_by, to_char(LIMSOE_SAMPLE_DATE, 'DD/MM/YYYY HH24:MI') sample_date, ") \
				_T(" get_username(LIMSOE_RECEIVE_BY) receive_by, to_char(LIMSOE_RECEIVE_DATE, 'DD/MM/YYYY HH24:MI') receive_date") \
				_T(" FROM hms_testorder ") \
				_T(" LEFT JOIN Lims_Order_Extra on (hpc_orderid = limsoe_orderid)") \
				_T(" WHERE hpc_orderid=%ld "), nOrderID);

	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
		return;

	CString szSID;
	CString szTelephone;

	rs.GetValue(_T("hpc_groupid"), szGroupID);
	rs.GetValue(_T("hpc_docno"), nDocumentNo);
	rs.GetValue(_T("hpc_refidx"), nRefIndex);
	rs.GetValue(_T("hpc_roomid"), nRoomID);
	rs.GetValue(_T("hpc_status"), szStatus);
	rs.GetValue(_T("hpc_depttype"), szDeptType);
	rs.GetValue(_T("hpc_sid"), szSID);
	rs.GetValue(_T("hpc_deptid"), szCurrentDept);

	//if(szStatus != _T("T"))
	//	return;

	szSQL.Format(_T("SELECT hfg_report as reportname FROM hms_fee_group WHERE hfg_id='%s' "), szGroupID);
	rs2.ExecSQL(szSQL);
	if(!rs2.IsEOF())
		rs2.GetValue(_T("reportname"), tmpStr);

	if(tmpStr.IsEmpty())
		tmpStr = _T("PACS_VOTE.RPT");
	tmpStr.Trim();

	szReportName.Format(_T("Reports/HMS/%s"), tmpStr);
	
	szReportName.Trim();
	//Neu muon in so trang 1/10, 2/10, 3/10 thi truyen 'true' vao sau ten report

	if(!rpt.Init(szReportName, true) )
	{
		return;
	}
	 
	
		
	szSQL.Format(_T(" SELECT 	hd_patientno as patientno,  ") \
		_T(" 	hd_docno as docno,") \
		_T(" 	trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
		_T(" 	CAST(TO_CHAR(hp_birthdate, 'YYYY') as integer) as birthyear,") \
		_T(" 	hms_getage(trunc_date(hd_admitdate), hp_birthdate) as age, 	hp_sex as sexid,") \
		_T(" 	sys_sel_getname('sys_sex', hp_sex) as sex,") \
		_T(" 	hp_occupation as occupationid,") \
		_T(" 	sys_sel_getname('sys_occupation', cast(hp_occupation as varchar(15))) as occupation,") \
		_T(" 	nvl(hd_dtladdr, hp_dtladdr) as detailaddress,") \
		_T(" 	hms_getaddress(hp_provid,hp_distid,hp_villid) as address,") \
		_T(" 	hp_workplaceid as workplaceid,") \
		_T(" 	hp_workplace as workplace,") \
		_T(" 	hd_object as objectid,") \
		_T(" 	(SELECT ho_desc FROM hms_object WHERE ho_id=hd_object) as objectname,") \
		_T(" 	hd_cardno as cardno,") \
		_T(" 	hd_cardidx as cardidx, ") \
		_T(" 	hd_reldisease as relationdisease, ") \
		_T("	trim(hd_diagnostic) ||' ['||trim(hd_icd)||']' as diagnostic, ") \
		_T(" 	hc_regdate as regdate, ") \
		_T(" 	hc_expdate as expdate,  ") \
		_T(" hd_telephone as phone, hd_isinpatient, hd_status, hd_suggestion ") \
		_T(" FROM hms_patient") \
		_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
		_T(" LEFT JOIN hms_card ON(hc_patientno=hd_patientno AND hc_idx=hd_cardidx) ") \
		_T(" WHERE hd_docno=%ld"), nDocumentNo);
//_msg(_T("%s"), szSQL);
	int ret = rs2.ExecSQL(szSQL);
	if(rs2.IsEOF())
	{
		ShowMessageBox(_T("Patient not found."));
		return;
	}

	//Report Header
	tmpStr.Empty();
	rs2.GetValue(_T("sexid"), szSex);
	StringUpper(pMF->m_CompanyInfo.sc_pname, tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HealthService"), tmpStr);
	StringUpper(pMF->m_CompanyInfo.sc_name, tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HospitalName"), tmpStr);

	rpt.GetReportHeader()->SetValue(_T("Sid"), szSID);
	rs2.GetValue(_T("phone"), szTelephone);
	rpt.GetReportHeader()->SetValue(_T("Telephone"), szTelephone);


	rs.GetValue(_T("hpc_pdeptid"), tmpStr);
	if(!tmpStr.IsEmpty())
	{
		CString szPerformDept;
		StringUpper(pMF->GetDepartmentName(tmpStr), szPerformDept);
		rpt.GetReportHeader()->SetValue(_T("Faculty"), szPerformDept);
	}
	else
		rpt.GetReportHeader()->SetValue(_T("Faculty"), _T(""));


	CString szInPatient, szDocStatus, szSuggestion;
	rs2.GetValue(_T("hd_isinpatient"), szInPatient);
	rs2.GetValue(_T("hd_status"), szDocStatus);
	rs2.GetValue(_T("hd_suggestion"), szSuggestion);
	if(szInPatient == _T("Y") || (szDocStatus == _T("T") && szSuggestion==_T("D")))
	{
		CRecord rsc(&pMF->m_db);
		szSQL.Format(_T("SELECT htr_deptid FROM hms_treatment_record WHERE htr_docno =%ld and htr_status IN('I','A') "), nDocumentNo);
		rsc.ExecSQL(szSQL);
		if(!rsc.IsEOF())
		{
			rsc.GetValue(_T("htr_deptid"), szCurrentDept);
		}
	}
	
	if(!szCurrentDept.IsEmpty())
	{
		CString szDeptName;
		szDeptName = pMF->GetDepartmentName(szCurrentDept);
		tmpStr.Format(_T("[%s] %s"), szCurrentDept, szDeptName);
		rpt.GetReportHeader()->SetValue(_T("CurrentDept"), tmpStr);
	}
	else
		rpt.GetReportHeader()->SetValue(_T("CurrentDept"), _T(""));


	rs.GetValue(_T("hpc_docno"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("DocumentNo"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("DocumentNo"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Barcode[128A]"),tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Barcode[128B]"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Barcode[128C]"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Barcode[39]"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Barcode[93]"), tmpStr);

	tmpStr.Format(_T("%ld"), nOrderID);
	rpt.GetReportHeader()->SetValue(_T("SheetNo"), tmpStr);
	StringUpper(rs2.GetValue(_T("pname")), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("PatientName"), tmpStr);
	rs2.GetValue(_T("age"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Age"), tmpStr);

	//Chi In ra nam sinh.
	rs2.GetValue(_T("birthyear"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("YearOfBirth"), tmpStr);
//	_msg(_T("%s"), tmpStr);
	rs2.GetValue(_T("sex"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Sex"), tmpStr);
	tmpStr.Format(_T("%s - %s"), rs2.GetValue(_T("detailaddress")), rs2.GetValue(_T("address")));
	rpt.GetReportHeader()->SetValue(_T("Address"), tmpStr);

	rs2.GetValue(_T("objectname"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("objectname"), tmpStr);

	rs2.GetValue(_T("workplace"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Workplace"), tmpStr);

	rs2.GetValue(_T("cardno"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("CardNo"), tmpStr);
	rs2.GetValue(_T("regdate"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("RegDate"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
	rs2.GetValue(_T("expdate"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("ExpiryDate"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
	

	CString szDate;
	rs.GetValue(_T("hpc_orderdate"), tmpStr);
	tmpStr2 = rpt.GetReportHeader()->GetValue(_T("OrderDate"));
	szDate.Format(tmpStr2, tmpStr.Mid(11, 5), tmpStr.Mid(8, 2), tmpStr.Mid(5, 2), tmpStr.Left(4));
	rpt.GetReportHeader()->SetValue(_T("OrderDate"), szDate);

	rs.GetValue(_T("hpc_doctor"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("DoctorName"), pMF->GetDoctorName(tmpStr));
	CReportItem *imgHeader = rpt.GetReportHeader()->GetItem(_T("Signature"));
	if(imgHeader)
	{
		HBITMAP hBitmap = pMF->GetSignatureImage(tmpStr);
		imgHeader->SetFixedHeight(true);
		if(hBitmap)
		{
			imgHeader->SetHBITMAP(hBitmap);
			imgHeader->SetFixedHeight(false);		
		}
	}	
	


	CString szDept;
	CRecord rsd(&pMF->m_db);
	rs.GetValue(_T("hpc_roomid"), tmpStr);
	
	rpt.GetReportHeader()->SetValue(_T("Room"), nRoomID);
	rs.GetValue(_T("hpc_deptid"), szDept);
	szSQL.Format(_T("SELECT hrl_name as roomname FROM hms_roomlist WHERE hrl_deptid='%s' AND hrl_id=%d"), szDept, nRoomID);
	rsd.ExecSQL(szSQL);
	if(!rsd.IsEOF())
	{
		rsd.GetValue(_T("roomname"), tmpStr);
		rpt.GetReportHeader()->SetValue(_T("RoomName"), tmpStr);
	}

	
	rs.GetValue(_T("hpc_deptid"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Department"), pMF->GetDepartmentName(tmpStr));
	
	rs.GetValue(_T("hpc_bedid"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Bed"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("BedName"), _T(""));

	
	szSQL.Format(_T("SELECT he_prediagnostic as Diagnostic FROM hms_exam WHERE he_docno=%ld AND he_roomid=%d"), nDocumentNo, nRoomID);
	rs3.ExecSQL(szSQL);
	if(!rs3.IsEOF())		  
	{
		rpt.GetReportHeader()->SetValue(_T("Diagnostic"), rs3.GetValue(_T("Diagnostic")));
	}
	
	rs2.GetValue(_T("diagnostic"), tmpStr);
	if(tmpStr.GetLength() > 5)
		rpt.GetReportHeader()->SetValue(_T("Diagnostic"), tmpStr);

	rs2.GetValue(_T("relationdisease"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("relationdisease"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("sample_by"), rs.GetValue(_T("sample_by")));
	rpt.GetReportHeader()->SetValue(_T("sample_date"), rs.GetValue(_T("sample_date")));
	rpt.GetReportHeader()->SetValue(_T("RECEIVE_BY"), rs.GetValue(_T("RECEIVE_BY")));
	rpt.GetReportHeader()->SetValue(_T("RECEIVE_DATE"), rs.GetValue(_T("RECEIVE_DATE")));
	
	szSQL.Format(_T(" SELECT hfl_name AS name,") \
	_T("   hfl_unit      AS unit,") \
	_T("   CASE") \
	_T("     WHEN LENGTH(hpcl_index1) > 0") \
	_T("     THEN hpcl_index1") \
	_T("     ELSE hfl_index1") \
	_T("   END AS index1,") \
	_T("   CASE") \
	_T("     WHEN LENGTH(hpcl_index2) > 0") \
	_T("     THEN hpcl_index2") \
	_T("     ELSE hfl_index2") \
	_T("   END         AS index2,") \
	_T("   NVL(htul_result, hpcl_result) AS result,") \
	_T("   NVL(htul_note, hpcl_note)   AS note,") \
	_T("   hfl_subitem AS subitem,") \
	_T("   hpcl_qty,") \
	_T("   hfl_print_bold print_bold,") \
	_T("   limsi_name AS machine") \
	_T(" FROM hms_testorderline") \
	_T(" LEFT JOIN hms_fee_list") \
	_T(" ON(hfl_feeid       =hpcl_itemid)") \
	_T(" LEFT JOIN lims_instrument") \
	_T(" ON(limsi_id             =hpcl_instid)") \
	_T(" LEFT JOIN hms_testorder_unapproveln ") \
	_T(" ON (hpcl_orderid = HTUL_ORDERID and hpcl_itemid = htul_itemid and htul_idx = %d)") \
	_T(" WHERE hpcl_orderid = %ld") \
	_T(" AND (hpcl_status IN('P','T') or hpcl_hasfee='Y') ") \
	_T(" ORDER BY hpcl_orderlineid"), nIdx, nOrderID);

	CRecord rsl(&pMF->m_db);
	ret = rsl.ExecSQL(szSQL);
//_msg(_T("%s"), szSQL);
	CReportSection* rptDetail;
	if(szGroupID.Left(2) == _T("B1")){
/*
		rsl.MoveFirst();
		if(ret > 30)
		{
			for (int i =0; i <= ret/2; i++)
			{
				rptDetail = rpt.AddDetail();
				rsl.GetValue(_T("name"), tmpStr);
				rptDetail->SetValue(_T("1"), tmpStr);
				rsl.GetValue(_T("index1"), tmpStr);
				rptDetail->SetValue(_T("2"), tmpStr);
				rsl.GetValue(_T("result"), tmpStr);
				rptDetail->SetValue(_T("3"), tmpStr);
				rptDetail->SetValue(_T("4"), _T(""));
				rptDetail->SetValue(_T("5"), _T(""));
				rptDetail->SetValue(_T("6"), _T(""));
				rsl.MoveNext();
			}
			for (int i =0; i <= ret/2 ; i++)
			{
				if(rsl.IsEOF())
					break;
				rptDetail = rpt.GetDetail(i+1);
				rsl.GetValue(_T("name"), tmpStr);
				rptDetail->SetValue(_T("4"), tmpStr);
				rsl.GetValue(_T("index1"), tmpStr);
				rptDetail->SetValue(_T("5"), tmpStr);
				rsl.GetValue(_T("result"), tmpStr);
				rptDetail->SetValue(_T("6"), tmpStr);
				rsl.MoveNext();
			}
		}
		else
		{
*/
			int nItem = 1;
			int nQty;
			CString szName;
			CString szNote;
			while(!rsl.IsEOF())
			{							
				rsl.GetValue(_T("subitem"), tmpStr);
				rsl.GetValue(_T("hpcl_qty"), nQty);
				rsl.GetValue(_T("note"), szNote);
				if (tmpStr.GetLength() <= 1)
				{	
					//rpt.GetDetail(0)->GetItem(_T("1"))->SetFaceSize(10);
					//rpt.GetDetail(0)->GetItem(_T("1"))->SetItalic(false);
					if (nQty > 1)
					{
						tmpStr.Format(_T(" %d. %s; S\x1ED1 l\x1B0\x1EE3ng: %d"), nItem++, rsl.GetValue(_T("name")), nQty);
					}
					else
						tmpStr.Format(_T(" %d. %s"), nItem++, rsl.GetValue(_T("name")));
				}
				else
				{	
					rpt.GetDetail(0)->GetItem(_T("1"))->SetFaceSize(10);
					rpt.GetDetail(0)->GetItem(_T("1"))->SetItalic(true);
					tmpStr.Format(_T("     - %s"), rsl.GetValue(_T("name")));
				}						

				if(!szNote.IsEmpty())
				{
					tmpStr.AppendFormat(_T(" (%s)"), szNote);

				}
				rptDetail = rpt.AddDetail();
				rptDetail->SetValue(_T("1"), tmpStr);

				if(szSex == _T("F"))
					rsl.GetValue(_T("index2"), tmpStr);
				else
					rsl.GetValue(_T("index1"), tmpStr);
				if(tmpStr == _T("0") || tmpStr == _T("0 - 0") || tmpStr == _T("0-0"))
					tmpStr.Empty();
				rptDetail->SetValue(_T("2"), tmpStr);
				
				tmpStr.Empty();
				//if (szStatus == _T("T"))
				{
					rsl.GetValue(_T("result"), tmpStr);
					rptDetail->SetValue(_T("3"), tmpStr);

					rsl.GetValue(_T("note"), tmpStr);
					//if(tmpStr == _T("H") || tmpStr == _T("L"))
					{
						rptDetail->SetValue(_T("5"), tmpStr);
					}
					rsl.GetValue(_T("machine"), tmpStr);					
					rptDetail->SetValue(_T("6"), tmpStr);
				}
				
				rsl.GetValue(_T("unit"), tmpStr);
				rptDetail->SetValue(_T("4"), tmpStr);
				
				
				rsl.MoveNext();
			}
	}
	else
	{
			int nItem = 1;
			int nQty;
			CString szNote;
			while(!rsl.IsEOF())
			{
				rsl.GetValue(_T("hpcl_qty"), nQty);
				rsl.GetValue(_T("note"), szNote);
				rptDetail = rpt.AddDetail();
		
				if (!szNote.IsEmpty())
				{
					if (nQty > 1)
						tmpStr.Format(_T(" %d. %s; S\x1ED1 l\x1B0\x1EE3ng: %d (%s)"), nItem++, rsl.GetValue(_T("name")), nQty, szNote);
					else
						tmpStr.Format(_T(" %d. %s (%s)"), nItem++, rsl.GetValue(_T("name")), szNote);
				}
				else
				{
					if (nQty > 1)
						tmpStr.Format(_T(" %d. %s; S\x1ED1 l\x1B0\x1EE3ng: %d"), nItem++, rsl.GetValue(_T("name")), nQty);
					else
						tmpStr.Format(_T(" %d. %s"), nItem++, rsl.GetValue(_T("name")));
				}
				rptDetail->SetValue(_T("1"), tmpStr);
				rsl.GetValue(_T("unit"), tmpStr);
				rptDetail->SetValue(_T("2"), tmpStr);
				rsl.MoveNext();
			}

	}
	

	//Page Footer
	//Report Footer
	
	rs.GetValue(_T("hpc_orderdate"), tmpStr);
	tmpStr2 = rpt.GetReportFooter()->GetValue(_T("OrderDate"));
	szDate.Format(tmpStr2, tmpStr.Mid(11, 5), tmpStr.Mid(8, 2), tmpStr.Mid(5, 2), tmpStr.Left(4));
	rpt.GetReportFooter()->SetValue(_T("OrderDate"), szDate);
	
	CReportItem *Picture = NULL;
	
	Picture = rpt.GetReportFooter()->GetItem(_T("Picture"));
	if(Picture)
	{	
		HBITMAP hBitmap = pMF->GetPACSImage(pMF->m_szCurrentFileNamePACS);
		Picture->SetFixedHeight(true);
		if (hBitmap)
		{
			Picture->SetHBITMAP(hBitmap);
			Picture->SetFixedHeight(false);
			::DeleteObject(hBitmap);
		}
	}
	Picture = rpt.GetReportHeader()->GetItem(_T("Picture"));
	
	if(Picture)
	{	
		HBITMAP hBitmap = pMF->GetPACSImage(pMF->m_szCurrentFileNamePACS);
		Picture->SetFixedHeight(true);
		if (hBitmap)
		{
			Picture->SetHBITMAP(hBitmap);
			Picture->SetFixedHeight(false);
			::DeleteObject(hBitmap);
		}
	}

	rs.GetValue(_T("hpc_doctor"), tmpStr);
	rpt.GetReportFooter()->SetValue(_T("DoctorName"), pMF->GetDoctorName(tmpStr));
	CReportItem *img = rpt.GetReportFooter()->GetItem(_T("Signature"));
	if(img)
	{
		img->SetFixedHeight(true);	
		HBITMAP hBitmap = pMF->GetSignatureImage(tmpStr);
		if(hBitmap)
		{
			img->SetFixedHeight(false);	
			img->SetHBITMAP(hBitmap);
			
			::DeleteObject(hBitmap);
		}
	}	
	

	rs.GetValue(_T("hpc_performdate"), tmpStr);
	tmpStr2 = rpt.GetReportFooter()->GetValue(_T("PerformDate"));
	if(CDateTime::IsValid(tmpStr))
		szDate.Format(tmpStr2,tmpStr.Mid(11, 5), tmpStr.Mid(8, 2), tmpStr.Mid(5, 2), tmpStr.Left(4));
	else
		szDate.Format(tmpStr2, _T("....."), _T("....."), _T("........"));
	rpt.GetReportFooter()->SetValue(_T("PerformDate"), szDate);
	rs.GetValue(_T("hpc_practitioner"), tmpStr);
	rpt.GetReportFooter()->SetValue(_T("Practitioner"), pMF->GetDoctorName(tmpStr));
	CReportItem *img2 = rpt.GetReportFooter()->GetItem(_T("Signature2"));
	if(img2)
	{
		img2->SetFixedHeight(true);
		HBITMAP hBitmap = pMF->GetSignatureImage(tmpStr);
		if(hBitmap)
		{
			img->SetFixedHeight(false);	
			img2->SetHBITMAP(hBitmap);
			
			::DeleteObject(hBitmap);
		}
	}


	if(bPreview)
		rpt.PrintPreview();
	else
		rpt.Print(bDirect);
}

int CLIMSCancelledOrderDlg::OnAddLIMSCancelledOrderDlg(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CLIMSCancelledOrderDlg::OnEditLIMSCancelledOrderDlg(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CLIMSCancelledOrderDlg::OnDeleteLIMSCancelledOrderDlg(){
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
 		OnCancelLIMSCancelledOrderDlg();
 	}
	return 0;
}
int CLIMSCancelledOrderDlg::OnSaveLIMSCancelledOrderDlg(){
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
 		//OnLIMSCancelledOrderDlgListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CLIMSCancelledOrderDlg::OnCancelLIMSCancelledOrderDlg(){
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
int CLIMSCancelledOrderDlg::OnLIMSCancelledOrderDlgListLoadData(){
	return 0;
}
