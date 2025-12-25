#include "stdafx.h"
#include "TMArmyReportsDeptKTM.h"
#include "HMSMainFrame.h"
#include "Excel.h"
#include "ReportDocument.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CTMArmyReportsDeptKTM *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CTMArmyReportsDeptKTM *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CTMArmyReportsDeptKTM *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CTMArmyReportsDeptKTM *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CTMArmyReportsDeptKTM *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CTMArmyReportsDeptKTM *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CTMArmyReportsDeptKTM *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CTMArmyReportsDeptKTM *)pWnd)->OnToDateCheckValue();
} 
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CTMArmyReportsDeptKTM*)pWnd)->OnDepartmentLoadData();
} 
static void _OnDepartmentDblClickFnc(CWnd *pWnd){
	((CTMArmyReportsDeptKTM*)pWnd)->OnDepartmentDblClick();
} 
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CTMArmyReportsDeptKTM*)pWnd)->OnDepartmentSelectChange(nOldItem, nNewItem);
} 
static int _OnDepartmentDeleteItemFnc(CWnd *pWnd){
	 return ((CTMArmyReportsDeptKTM*)pWnd)->OnDepartmentDeleteItem();
} 
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	CTMArmyReportsDeptKTM *pVw = (CTMArmyReportsDeptKTM *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CTMArmyReportsDeptKTM *pVw = (CTMArmyReportsDeptKTM *)pWnd;
	pVw->OnExportSelect();
} 
static int _OnListCheckAllFnc(CWnd *pWnd){
	return ((CTMArmyReportsDeptKTM*)pWnd)->OnListCheckAll();
}

static int _OnListUnCheckAllFnc(CWnd *pWnd){
	return ((CTMArmyReportsDeptKTM*)pWnd)->OnListUnCheckAll();
}



CTMArmyReportsDeptKTM::CTMArmyReportsDeptKTM(CWnd *pWnd){

	m_nDlgWidth = 760;
	m_nDlgHeight = 520;
	SetDefaultValues();
}
CTMArmyReportsDeptKTM::~CTMArmyReportsDeptKTM(){
}
void CTMArmyReportsDeptKTM::OnCreateComponents(){
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 430, 285);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 215, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 220, 31, 300, 56);
	m_wndToDate.Create(this,305, 31, 425, 56); 
	m_wndDepartmentList.Create(this,10, 60, 425, 280); 
	m_wndDepartmentList.SetCheckBox(true);
	m_wndPrintPreview.Create(this, _T("&Print Preview"), 230, 290, 325, 315);
	m_wndExport.Create(this, _T("&Export"), 330, 290, 425, 315);

}
void CTMArmyReportsDeptKTM::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	//m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	//m_wndToDate.SetCheckValue(true);

	m_wndDepartmentList.InsertColumn(0, _T("ID"), CFMT_TEXT|CFMT_RIGHT, 80);
	m_wndDepartmentList.InsertColumn(1, _T("Name"), CFMT_TEXT, 315);

}
void CTMArmyReportsDeptKTM::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndDepartmentList.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartmentList.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	m_wndDepartmentList.SetEvent(WE_DBLCLICK, _OnDepartmentDblClickFnc);
	m_wndDepartmentList.AddEvent(1, _T("Check All"), _OnListCheckAllFnc);
	m_wndDepartmentList.AddEvent(2, _T("UnCheck All"), _OnListUnCheckAllFnc);
	m_wndPrintPreview.SetEvent(WE_CLICK, _OnPrintPreviewSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_szFromDate = pMF->GetSysDate();
	m_szToDate = pMF->GetSysDate();
	m_szFromDate = m_szToDate += _T(" 07:30");
	OnDepartmentLoadData();
	OnListCheckAll();
	UpdateData(false);

}
void CTMArmyReportsDeptKTM::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);

}
void CTMArmyReportsDeptKTM::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CTMArmyReportsDeptKTM::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CTMArmyReportsDeptKTM::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();

}
int CTMArmyReportsDeptKTM::SetMode(int nMode){
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
/*void CTMArmyReportsDeptKTM::OnFromDateChange(){
	
} */
/*void CTMArmyReportsDeptKTM::OnFromDateSetfocus(){
	
} */
/*void CTMArmyReportsDeptKTM::OnFromDateKillfocus(){
	
} */
int CTMArmyReportsDeptKTM::OnFromDateCheckValue(){
	return 0;
} 
/*void CTMArmyReportsDeptKTM::OnToDateChange(){
	
} */
/*void CTMArmyReportsDeptKTM::OnToDateSetfocus(){
	
} */
/*void CTMArmyReportsDeptKTM::OnToDateKillfocus(){
	
} */
int CTMArmyReportsDeptKTM::OnToDateCheckValue(){
	return 0;
} 
void CTMArmyReportsDeptKTM::OnDepartmentDblClick(){
	
} 
void CTMArmyReportsDeptKTM::OnDepartmentSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CTMArmyReportsDeptKTM::OnDepartmentDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CTMArmyReportsDeptKTM::OnDepartmentLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndDepartmentList.BeginLoad(); 
	m_wndDepartmentList.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T(" select sd_id as id, sd_name as name from sys_dept where sd_id IN ('A2-A', 'A2-B', 'A2-C') order by  sd_name"));
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDepartmentList.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Name")), NULL);
		rs.MoveNext();
	}
	m_wndDepartmentList.EndLoad(); 
	return nCount;
}
void CTMArmyReportsDeptKTM::OnPrintPreviewSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	BeginWaitCursor();
	CReport rpt;
	CRecord rs(&pMF->m_db);
	CRecord rs2(&pMF->m_db);
	CString szSQL, tmpStr, szOldGroup, szNewGroup, szOldDept, szNewDept, szDepts, szField;
	szSQL = GetQueryString();
	if (!rpt.Init(_T("Reports\\HMS\\HE_BAOCAOQUANSOKTM.RPT")))
		return;
	rs.ExecSQL(szSQL);
	/*if (ret <=0%%)
	{
		ShowMessage(150, MB_ICONSTOP);
		return;
	}*/
	rpt.GetReportHeader()->SetValue(_T("HealthService"), _T("\x42\x1ED8 QU\x1ED0\x43 PH\xD2NG"));
	rpt.GetReportHeader()->SetValue(_T("HospitalName"), _T("\x42\x1EC6NH VI\x1EC6N TW QU\xC2N \x110\x1ED8I \x31\x30\x38"));
	tmpStr.Format(_T("KHOA %s"),pMF->GetCurrentDepartmentID());
	rpt.GetReportHeader()->SetValue(_T("khoa"), tmpStr);
	tmpStr.Format(rpt.GetReportHeader()->GetValue(_T("ReportDate")), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), tmpStr);
	CReportSection *rptHeader = NULL, *rptDetail = NULL, * rptGroup = NULL;
	int nCONG[13], nCONG2[13];
	for(int i = 2 ; i<12; i++)
	{
		nCONG[i] = 0;
		nCONG2[i] = 0;
	}
	while (!rs.IsEOF())
	{
		rs.GetValue(_T("khoa"), szNewDept);
		if (szNewDept != szOldDept && !szNewDept.IsEmpty())
		{
			for( int i = 2; i<=11; i++)
			{
				szField.Format(_T("s%d"), i);
				tmpStr.Format(_T("%d"), nCONG[i]);
				rpt.GetGroupFooter(1)->SetValue(szField, tmpStr);
			}
			if((nCONG[2])  > 0)
			{
				rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
				tmpStr.Format(_T("T\x1ED5ng kho\x61"));
				rptDetail->SetValue(_T("TotalGroup"), tmpStr);						
				FormatCurrency(nCONG[2], tmpStr);
				rptDetail->SetValue(_T("s2"), tmpStr);
				FormatCurrency(nCONG[3], tmpStr);
				rptDetail->SetValue(_T("s3"), tmpStr);
				FormatCurrency(nCONG[4], tmpStr);
				rptDetail->SetValue(_T("s4"), tmpStr);
				FormatCurrency(nCONG[5], tmpStr);
				rptDetail->SetValue(_T("s5"), tmpStr);
				FormatCurrency(nCONG[6], tmpStr);
				rptDetail->SetValue(_T("s6"), tmpStr);
				FormatCurrency(nCONG[7], tmpStr);
				rptDetail->SetValue(_T("s7"), tmpStr);
				FormatCurrency(nCONG[8], tmpStr);
				rptDetail->SetValue(_T("s8"), tmpStr);
				FormatCurrency(nCONG[9], tmpStr);
				rptDetail->SetValue(_T("s9"), tmpStr);
				FormatCurrency(nCONG[10], tmpStr);
				rptDetail->SetValue(_T("s10"), tmpStr);
				FormatCurrency(nCONG[11], tmpStr);
				rptDetail->SetValue(_T("s11"), tmpStr);
				for (int i = 2; i<=11; i++){
					nCONG2[i] += nCONG[i];
					nCONG[i] = 0;
				}
			}
			rptGroup = rpt.AddDetail(rpt.GetGroupHeader(1));
			if (rptGroup)
			{
				tmpStr = szNewDept;
				rptGroup->SetValue(_T("GroupName"), tmpStr);
				szDepts.Format(_T("'%s'"), szNewDept);
				szSQL = GetQueryString1(szDepts);
				rs2.ExecSQL(szSQL);
				szOldGroup = _T("");
				while (!rs2.IsEOF())
				{
					rs2.GetValue(_T("id"), szNewGroup);
					if (szOldGroup != szNewGroup && !szNewGroup.IsEmpty())
					{
						rptDetail = rpt.AddDetail(rpt.GetGroupHeader(1));
						if (rptDetail)
						{
							rs2.GetValue(_T("type"), tmpStr);
							rptDetail->SetValue(_T("groupname"), tmpStr);
						}
						szOldGroup = szNewGroup;
					}
					rptDetail = rpt.AddDetail();
					rs2.GetValue(_T("doituong"), tmpStr);
					rptDetail->SetValue(_T("1"), tmpStr);

					rs2.GetValue(_T("socu"), tmpStr);
					nCONG[2] +=ToInt(tmpStr);
					rptDetail->SetValue(_T("2"), tmpStr);

					rs2.GetValue(_T("vaovien"), tmpStr);
					nCONG[3] +=ToInt(tmpStr);
					rptDetail->SetValue(_T("3"), tmpStr);

					rs2.GetValue(_T("0"), tmpStr);
					nCONG[4] +=ToInt(tmpStr);
					rptDetail->SetValue(_T("4"), tmpStr);

					rs2.GetValue(_T("ckden"), tmpStr);
					nCONG[5] +=ToInt(tmpStr);
					rptDetail->SetValue(_T("5"), tmpStr);

					rs2.GetValue(_T("ravien"), tmpStr);
					nCONG[6] +=ToInt(tmpStr);
					rptDetail->SetValue(_T("6"), tmpStr);

					rs2.GetValue(_T("nxv"), tmpStr);
					nCONG[7] +=ToInt(tmpStr);
					rptDetail->SetValue(_T("7"), tmpStr);

					rs2.GetValue(_T("chuyenvien"), tmpStr);
					nCONG[8] +=ToInt(tmpStr);
					rptDetail->SetValue(_T("8"), tmpStr);

					rs2.GetValue(_T("ckdi"), tmpStr);
					nCONG[9] +=ToInt(tmpStr);
					rptDetail->SetValue(_T("9"), tmpStr);

					rs2.GetValue(_T("tuvong"), tmpStr);
					nCONG[10] +=ToInt(tmpStr);
					rptDetail->SetValue(_T("10"), tmpStr);

					rs2.GetValue(_T("hientai"), tmpStr);
					nCONG[11] +=ToInt(tmpStr);
					rptDetail->SetValue(_T("11"), tmpStr);

					rs2.MoveNext();
				}
			}
			szOldDept = szNewDept;
		}
		rptDetail = rpt.AddDetail();
		rs.GetValue(_T("doituong"), tmpStr);
		rptDetail->SetValue(_T("1"), tmpStr);
	
		rs.GetValue(_T("socu"), tmpStr);
		nCONG[2] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);

		rs.GetValue(_T("vaovien"), tmpStr);
		nCONG[3] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);

		rs.GetValue(_T("0"), tmpStr);
		nCONG[4] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);

		rs.GetValue(_T("ckden"), tmpStr);
		nCONG[5] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);

		rs.GetValue(_T("ravien"), tmpStr);
		nCONG[6] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("6"), tmpStr);

		rs.GetValue(_T("nxv"), tmpStr);
		nCONG[7] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("7"), tmpStr);

		rs.GetValue(_T("chuyenvien"), tmpStr);
		nCONG[8] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("8"), tmpStr);
		
		rs.GetValue(_T("ckdi"), tmpStr);
		nCONG[9] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("9"), tmpStr);

		rs.GetValue(_T("tuvong"), tmpStr);
		nCONG[10] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("10"), tmpStr);

		rs.GetValue(_T("hientai"), tmpStr);
		nCONG[11] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("11"), tmpStr);

		rs.MoveNext();
	}

	if((nCONG[2])  > 0)
	{
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
		tmpStr.Format(_T("T\x1ED5ng kho\x61"));
			rptDetail->SetValue(_T("TotalGroup"), tmpStr);						
		FormatCurrency(nCONG[2], tmpStr);
		rptDetail->SetValue(_T("s2"), tmpStr);
		FormatCurrency(nCONG[3], tmpStr);
		rptDetail->SetValue(_T("s3"), tmpStr);
		FormatCurrency(nCONG[4], tmpStr);
		rptDetail->SetValue(_T("s4"), tmpStr);
		FormatCurrency(nCONG[5], tmpStr);
		rptDetail->SetValue(_T("s5"), tmpStr);
		FormatCurrency(nCONG[6], tmpStr);
		rptDetail->SetValue(_T("s6"), tmpStr);
		FormatCurrency(nCONG[7], tmpStr);
		rptDetail->SetValue(_T("s7"), tmpStr);
		FormatCurrency(nCONG[8], tmpStr);
		rptDetail->SetValue(_T("s8"), tmpStr);
		FormatCurrency(nCONG[9], tmpStr);
		rptDetail->SetValue(_T("s9"), tmpStr);
		FormatCurrency(nCONG[10], tmpStr);
		rptDetail->SetValue(_T("s10"), tmpStr);
		FormatCurrency(nCONG[11], tmpStr);
		rptDetail->SetValue(_T("s11"), tmpStr);
		for (int i = 2; i<=11; i++){
			nCONG2[i] += nCONG[i];
		}
	}

	for( int i = 2; i<=11; i++)
	{
		szField.Format(_T("s%d"), i);
		tmpStr.Format(_T("%d"), nCONG2[i]);
		rpt.GetReportFooter()->SetValue(szField, tmpStr);
	}

	CString szSysDate;
	szSysDate = pMF->GetSysDate(); 
	tmpStr.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),szSysDate.Right(2),szSysDate.Mid(5,2),szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), tmpStr);
	EndWaitCursor();
	rpt.PrintPreview();
	
} 
void CTMArmyReportsDeptKTM::OnExportSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CTMArmyReportsDeptKTM::OnAddTMPatientListAdmitKTM(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CTMArmyReportsDeptKTM::OnEditTMPatientListAdmitKTM(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CTMArmyReportsDeptKTM::OnDeleteTMPatientListAdmitKTM(){
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
 		OnCancelTMPatientListAdmitKTM();
 	}
	return 0;
}
int CTMArmyReportsDeptKTM::OnSaveTMPatientListAdmitKTM(){
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
 		//OnTMPatientListAdmitKTMListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CTMArmyReportsDeptKTM::OnCancelTMPatientListAdmitKTM(){
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
int CTMArmyReportsDeptKTM::OnTMPatientListAdmitKTMListLoadData(){
	return 0;
}
CString CTMArmyReportsDeptKTM::GetQueryString()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*)AfxGetMainWnd();
	CString  szWhere, szDepts, szObject, szTemp, szDept1;
	CString szSQL;

	for (int i = 0; i < m_wndDepartmentList.GetItemCount(); i++)
	{
		if (m_wndDepartmentList.GetCheck(i))
		{
			m_wndDepartmentList.SetCurSel(i);
			szTemp = m_wndDepartmentList.GetItemText(i, 0);
			if (!szDepts.IsEmpty())
				szDepts += _T(", ");
			szDepts.AppendFormat(_T("'%s'"), szTemp);

		}
	}

	szSQL.Format(_T(" SELECT khoa,doituong,sum(socu) socu,sum(vaovien) vaovien,sum(ckden) ckden,sum(ravien) ravien,sum(ckdi) ckdi,sum(chuyenvien) chuyenvien,sum(tuvong) tuvong,sum(nxv) nxv,sum((socu+vaovien+ckden)-(ravien+ckdi+chuyenvien+tuvong+nxv)) hientai") \
		_T(" FROM(SELECT khoa,doituong,") \
		_T("        count(distinct hd_docno) socu,0 vaovien,0 ckden,0 ravien,0 ckdi,0 chuyenvien,0 tuvong, 0 nxv") \
		_T(" FROM(SELECT hd_docno,khoa,doituong") \
		_T(" FROM(SELECT distinct hd_docno,") \
		_T("		htr_deptid AS khoa,") \
		_T("        hms_getobjectname(hd_object) AS doituong,") \
		_T("        trunc_date(htr_admitdate) AS admitdate,") \
		_T("        trunc_date(hcr_dischargedate) AS dischargedate,") \
		_T("        htr_deptid") \
		_T(" FROM hms_patient") \
		_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
		_T(" LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno)") \
		_T(" LEFT JOIN hms_treatment_record ON(htr_docno =hd_docno)") \
		_T(" WHERE hd_object not in (1,2,12) and htr_deptid not in('A4') %s AND htr_status='I' AND htr_deptid IN(%s) AND htr_admitdate < to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')") \
		_T(" UNION ALL") \
		_T(" SELECT distinct hd_docno,") \
		_T("		htr_deptid AS khoa,") \
		_T("        hms_getobjectname(hd_object) AS doituong,") \
		_T("        trunc_date(htr_admitdate) AS admitdate,") \
		_T("        trunc_date(hcr_dischargedate) AS dischargedate,") \
		_T("        htr_deptid") \
		_T(" FROM hms_patient") \
		_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
		_T(" LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno)") \
		_T(" LEFT JOIN hms_treatment_record ON(htr_docno =hd_docno)") \
		_T(" WHERE hd_object not in (1,2,12) and htr_deptid not in('A4') %s AND htr_status='T' AND htr_deptid IN(%s) AND htr_admitdate < to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND htr_dischargedate >= to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')))") \
		_T(" GROUP BY khoa,doituong") \
		_T(" UNION ALL") \
		_T(" SELECT htr_deptid AS khoa,hms_getobjectname(hd_object) AS doituong,0 socu,") \
		_T("        SUM(in_qty)       vaovien, ") \
		_T(" 		   SUM(movein_qty)   ckden, ") \
		_T(" 		   SUM(return_unit)  ravien, ") \
		_T(" 		   SUM(moveout_qty)  ckdi, ") \
		_T(" 		   SUM(transfer_qty) chuyenvien,  ") \
		_T(" 		 	 SUM(dead)         tuvong,") \
		_T("        SUM(nxv) nxv") \
		_T(" FROM(SELECT htr_deptid,hd_object,") \
		_T("             Trunc(htr_admitdate) admit_date, ") \
		_T("             1                    in_qty, ") \
		_T(" 	          0                    movein_qty, ") \
		_T(" 	          0                    return_unit, ") \
		_T(" 	          0                    moveout_qty, ") \
		_T(" 	          0                    transfer_qty, ") \
		_T(" 	          0                    dead,") \
		_T("             0 nxv") \
		_T(" FROM   hms_doc ") \
		_T(" LEFT JOIN  hms_treatment_record ON(htr_docno=hd_docno) ") \
		_T(" LEFT JOIN hms_clinical_record ON ( hcr_docno = hd_docno)") \
		_T(" WHERE hd_object not in (1,2,12) and htr_status <> 'A' %s AND htr_deptid IN(%s) and hcr_admitdept=htr_deptid AND htr_admitdate BETWEEN to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')") \
		_T(" UNION ALL") \
		_T(" SELECT htr_deptid,hd_object,") \
		_T("             Trunc(htr_admitdate) admit_date, ") \
		_T("             0                    in_qty, ") \
		_T(" 	          1                    movein_qty, ") \
		_T(" 	          0                    return_unit, ") \
		_T(" 	          0                    moveout_qty, ") \
		_T(" 	          0                    transfer_qty, ") \
		_T(" 	          0                    dead,") \
		_T("             0 nxv") \
		_T(" FROM   hms_doc ") \
		_T(" LEFT JOIN  hms_treatment_record ON(htr_docno=hd_docno) ") \
		_T(" LEFT JOIN hms_clinical_record ON ( hcr_docno = hd_docno )") \
		_T(" WHERE hd_object not in (1,2,12) and htr_status <> 'A' %s AND htr_deptid IN(%s) AND htr_idx > 1 AND hcr_admitdept<>htr_deptid AND htr_admitdate BETWEEN to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')") \
		_T(" UNION ALL") \
		_T(" SELECT htr_deptid,hd_object,") \
		_T("             Trunc(htr_admitdate) admit_date, ") \
		_T("             0                    in_qty, ") \
		_T(" 	          0                    movein_qty, ") \
		_T(" 	          CASE WHEN htr_suggestion not in('M','F') AND hcr_result NOT IN ( 4, 5, 6,7 ) THEN 1 ELSE 0 END return_unit, ") \
		_T(" 	          0                    moveout_qty, ") \
		_T(" 	          CASE WHEN htr_suggestion = 'F' THEN 1 ELSE 0 END transfer_qty, ") \
		_T("             CASE WHEN htr_suggestion = 'T' AND hcr_result IN ( 5, 6 ) THEN 1 ELSE 0 END dead,") \
		_T("             CASE WHEN htr_suggestion = 'T' AND hcr_result IN ( 4, 7 ) THEN 1 ELSE 0 END nxv") \
		_T(" FROM   hms_doc ") \
		_T(" LEFT JOIN  hms_treatment_record ON(htr_docno=hd_docno) ") \
		_T(" LEFT JOIN hms_clinical_record ON ( hcr_docno = hd_docno )") \
		_T(" WHERE hd_object not in (1,2,12) and htr_status = 'T' %s AND htr_deptid IN(%s) AND htr_dischargedate BETWEEN to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')") \
		_T(" UNION ALL") \
		_T(" SELECT htr_deptid,hd_object,") \
		_T("             Trunc(htr_admitdate) admit_date, ") \
		_T("             0                    in_qty, ") \
		_T(" 	          0                    movein_qty, ") \
		_T(" 	          0 return_unit, ") \
		_T(" 	          1                    moveout_qty, ") \
		_T(" 	          0                    transfer_qty, ") \
		_T(" 	          0 dead,") \
		_T("             0 nxv") \
		_T(" FROM   hms_doc ") \
		_T(" LEFT JOIN  hms_treatment_record ON(htr_docno=hd_docno) ") \
		_T(" LEFT JOIN hms_clinical_record ON ( hcr_docno = hd_docno )") \
		_T(" WHERE hd_object not in (1,2,12) and ( htr_suggestion ='M') %s AND htr_deptid IN(%s) AND htr_dischargedate BETWEEN to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss'))") \
		_T(" GROUP BY htr_deptid,hd_object)") \
		_T(" GROUP BY khoa,doituong") \
		_T(" ORDER BY khoa,doituong desc"),szWhere,szDepts,m_szFromDate,
		szWhere,szDepts,m_szFromDate,m_szFromDate,
		szWhere,szDepts,m_szFromDate,m_szToDate,
		szWhere,szDepts,m_szFromDate,m_szToDate,
		szWhere,szDepts,m_szFromDate,m_szToDate,
		szWhere,szDepts,m_szFromDate,m_szToDate);
	return szSQL;
}
CString CTMArmyReportsDeptKTM::GetQueryString1(CString szDepts)
{
	CString  szWhere;
	CString szSQL;

	szSQL.Format(_T(" SELECT id,type,cast(doituong as NVARCHAR2(35)) doituong,socu,vaovien,ckden,ravien,ckdi,chuyenvien,tuvong,nxv,hientai") \
		_T(" FROM(SELECT 1 id,'Qu\xE2n' type,'T\x1B0\x1EDBng' doituong,sum(socu) socu,sum(vaovien) vaovien,sum(ckden) ckden,sum(ravien) ravien,sum(ckdi) ckdi,sum(chuyenvien) chuyenvien,sum(tuvong) tuvong,sum(nxv) nxv,sum((socu+vaovien+ckden)-(ravien+ckdi+chuyenvien+tuvong+nxv)) hientai") \
		_T(" FROM(SELECT doituong,hd_rank,sum(socu) socu,sum(vaovien) vaovien,sum(ckden) ckden,sum(ravien) ravien,sum(ckdi) ckdi,sum(chuyenvien) chuyenvien,sum(tuvong) tuvong,sum(nxv) nxv,sum((socu+vaovien+ckden)-(ravien+ckdi+chuyenvien+tuvong+nxv)) hientai") \
		_T(" FROM(SELECT doituong,hd_rank,") \
		_T("        count(distinct hd_docno) socu,0 vaovien,0 ckden,0 ravien,0 ckdi,0 chuyenvien,0 tuvong, 0 nxv") \
		_T(" FROM(SELECT hd_docno,doituong,hd_rank") \
		_T(" FROM(SELECT distinct hd_docno,hd_rank,") \
		_T("        hd_object AS doituong,") \
		_T("        trunc_date(htr_admitdate) AS admitdate,") \
		_T("        trunc_date(hcr_dischargedate) AS dischargedate,") \
		_T("        htr_deptid") \
		_T(" FROM hms_patient") \
		_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
		_T(" LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno)") \
		_T(" LEFT JOIN hms_treatment_record ON(htr_docno =hd_docno)") \
		_T(" WHERE htr_deptid not in('A4') AND htr_status='I' %s AND htr_deptid IN(%s) AND htr_admitdate < to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')") \
		_T(" UNION ALL") \
		_T(" SELECT distinct hd_docno,hd_rank,") \
		_T("        hd_object AS doituong,") \
		_T("        trunc_date(htr_admitdate) AS admitdate,") \
		_T("        trunc_date(hcr_dischargedate) AS dischargedate,") \
		_T("        htr_deptid") \
		_T(" FROM hms_patient") \
		_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
		_T(" LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno)") \
		_T(" LEFT JOIN hms_treatment_record ON(htr_docno =hd_docno)") \
		_T(" WHERE htr_deptid not in('A4') AND htr_status='T' %s AND htr_deptid IN(%s) AND htr_admitdate < to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND htr_dischargedate >= to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')))") \
		_T(" GROUP BY doituong,hd_rank") \
		_T(" UNION ALL") \
		_T(" SELECT hd_object AS doituong,hd_rank,0 socu,") \
		_T("        SUM(in_qty)       vaovien, ") \
		_T(" 		   SUM(movein_qty)   ckden, ") \
		_T(" 		   SUM(return_unit)  ravien, ") \
		_T(" 		   SUM(moveout_qty)  ckdi, ") \
		_T(" 		   SUM(transfer_qty) chuyenvien,  ") \
		_T(" 		 	 SUM(dead)         tuvong,") \
		_T("        SUM(nxv) nxv") \
		_T(" FROM(SELECT hd_object,") \
		_T("             hd_rank,") \
		_T("             Trunc(htr_admitdate) admit_date, ") \
		_T("             1                    in_qty, ") \
		_T(" 	          0                    movein_qty, ") \
		_T(" 	          0                    return_unit, ") \
		_T(" 	          0                    moveout_qty, ") \
		_T(" 	          0                    transfer_qty, ") \
		_T(" 	          0                    dead,") \
		_T("             0 nxv") \
		_T(" FROM   hms_doc ") \
		_T(" LEFT JOIN  hms_treatment_record ON(htr_docno=hd_docno) ") \
		_T(" LEFT JOIN hms_clinical_record ON ( hcr_docno = hd_docno)") \
		_T(" WHERE  htr_status <> 'A' %s AND htr_deptid IN(%s) and hcr_admitdept=htr_deptid AND htr_admitdate BETWEEN to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')") \
		_T(" UNION ALL") \
		_T(" SELECT hd_object,hd_rank,") \
		_T("             Trunc(htr_admitdate) admit_date, ") \
		_T("             0                    in_qty, ") \
		_T(" 	          1                    movein_qty, ") \
		_T(" 	          0                    return_unit, ") \
		_T(" 	          0                    moveout_qty, ") \
		_T(" 	          0                    transfer_qty, ") \
		_T(" 	          0                    dead,") \
		_T("             0 nxv") \
		_T(" FROM   hms_doc ") \
		_T(" LEFT JOIN  hms_treatment_record ON(htr_docno=hd_docno) ") \
		_T(" LEFT JOIN hms_clinical_record ON ( hcr_docno = hd_docno )") \
		_T(" WHERE  htr_status <> 'A' %s AND htr_deptid IN(%s) AND htr_idx > 1 AND hcr_admitdept<>htr_deptid AND htr_admitdate BETWEEN to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')") \
		_T(" UNION ALL") \
		_T(" SELECT hd_object,hd_rank,") \
		_T("             Trunc(htr_admitdate) admit_date, ") \
		_T("             0                    in_qty, ") \
		_T(" 	          0                    movein_qty, ") \
		_T(" 	          CASE WHEN htr_suggestion not in('M','F') AND hcr_result NOT IN ( 4, 5, 6,7 ) THEN 1 ELSE 0 END return_unit, ") \
		_T(" 	          0                    moveout_qty, ") \
		_T(" 	          CASE WHEN htr_suggestion = 'F' THEN 1 ELSE 0 END transfer_qty, ") \
		_T("             CASE WHEN htr_suggestion = 'T' AND hcr_result IN ( 5, 6 ) THEN 1 ELSE 0 END dead,") \
		_T("             CASE WHEN htr_suggestion = 'T' AND hcr_result IN ( 4, 7 ) THEN 1 ELSE 0 END nxv") \
		_T(" FROM   hms_doc ") \
		_T(" LEFT JOIN  hms_treatment_record ON(htr_docno=hd_docno) ") \
		_T(" LEFT JOIN hms_clinical_record ON ( hcr_docno = hd_docno )") \
		_T(" WHERE htr_status = 'T' %s AND htr_deptid IN(%s) AND htr_dischargedate BETWEEN to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')") \
		_T(" UNION ALL") \
		_T(" SELECT hd_object,hd_rank,") \
		_T("             Trunc(htr_admitdate) admit_date, ") \
		_T("             0                    in_qty, ") \
		_T(" 	          0                    movein_qty, ") \
		_T(" 	          0 return_unit, ") \
		_T(" 	          1                    moveout_qty, ") \
		_T(" 	          0                    transfer_qty, ") \
		_T(" 	          0 dead,") \
		_T("             0 nxv") \
		_T(" FROM   hms_doc ") \
		_T(" LEFT JOIN  hms_treatment_record ON(htr_docno=hd_docno) ") \
		_T(" LEFT JOIN hms_clinical_record ON ( hcr_docno = hd_docno )") \
		_T(" WHERE ( htr_suggestion ='M') %s AND htr_deptid IN(%s) AND htr_dischargedate BETWEEN to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss'))") \
		_T(" GROUP BY hd_object,hd_rank)") \
		_T(" GROUP BY doituong,hd_rank)") \
		_T(" WHERE doituong = 1 and hd_rank >=15") \
		_T(" GROUP BY doituong") \
		_T(" UNION ALL") \
		_T(" SELECT 1 id,'Qu\xE2n' type,'4//' doituong,sum(socu) socu,sum(vaovien) vaovien,sum(ckden) ckden,sum(ravien) ravien,sum(ckdi) ckdi,sum(chuyenvien) chuyenvien,sum(tuvong) tuvong,sum(nxv) nxv,sum((socu+vaovien+ckden)-(ravien+ckdi+chuyenvien+tuvong+nxv)) hientai") \
		_T(" FROM(SELECT doituong,hd_rank,sum(socu) socu,sum(vaovien) vaovien,sum(ckden) ckden,sum(ravien) ravien,sum(ckdi) ckdi,sum(chuyenvien) chuyenvien,sum(tuvong) tuvong,sum(nxv) nxv,sum((socu+vaovien+ckden)-(ravien+ckdi+chuyenvien+tuvong+nxv)) hientai") \
		_T(" FROM(SELECT doituong,hd_rank,") \
		_T("        count(distinct hd_docno) socu,0 vaovien,0 ckden,0 ravien,0 ckdi,0 chuyenvien,0 tuvong, 0 nxv") \
		_T(" FROM(SELECT hd_docno,doituong,hd_rank") \
		_T(" FROM(SELECT distinct hd_docno,hd_rank,") \
		_T("        hd_object AS doituong,") \
		_T("        trunc_date(htr_admitdate) AS admitdate,") \
		_T("        trunc_date(hcr_dischargedate) AS dischargedate,") \
		_T("        htr_deptid") \
		_T(" FROM hms_patient") \
		_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
		_T(" LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno)") \
		_T(" LEFT JOIN hms_treatment_record ON(htr_docno =hd_docno)") \
		_T(" WHERE htr_deptid not in('A4') AND htr_status='I' %s AND htr_deptid IN(%s) AND htr_admitdate < to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')") \
		_T(" UNION ALL") \
		_T(" SELECT distinct hd_docno,hd_rank,") \
		_T("        hd_object AS doituong,") \
		_T("        trunc_date(htr_admitdate) AS admitdate,") \
		_T("        trunc_date(hcr_dischargedate) AS dischargedate,") \
		_T("        htr_deptid") \
		_T(" FROM hms_patient") \
		_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
		_T(" LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno)") \
		_T(" LEFT JOIN hms_treatment_record ON(htr_docno =hd_docno)") \
		_T(" WHERE htr_deptid not in('A4') AND htr_status='T' %s AND htr_deptid IN(%s) AND htr_admitdate < to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND htr_dischargedate >= to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')))") \
		_T(" GROUP BY doituong,hd_rank") \
		_T(" UNION ALL") \
		_T(" SELECT hd_object AS doituong,hd_rank,0 socu,") \
		_T("        SUM(in_qty)       vaovien, ") \
		_T(" 		   SUM(movein_qty)   ckden, ") \
		_T(" 		   SUM(return_unit)  ravien, ") \
		_T(" 		   SUM(moveout_qty)  ckdi, ") \
		_T(" 		   SUM(transfer_qty) chuyenvien,  ") \
		_T(" 		 	 SUM(dead)         tuvong,") \
		_T("        SUM(nxv) nxv") \
		_T(" FROM(SELECT hd_object,") \
		_T("             hd_rank,") \
		_T("             Trunc(htr_admitdate) admit_date, ") \
		_T("             1                    in_qty, ") \
		_T(" 	          0                    movein_qty, ") \
		_T(" 	          0                    return_unit, ") \
		_T(" 	          0                    moveout_qty, ") \
		_T(" 	          0                    transfer_qty, ") \
		_T(" 	          0                    dead,") \
		_T("             0 nxv") \
		_T(" FROM   hms_doc ") \
		_T(" LEFT JOIN  hms_treatment_record ON(htr_docno=hd_docno) ") \
		_T(" LEFT JOIN hms_clinical_record ON ( hcr_docno = hd_docno)") \
		_T(" WHERE  htr_status <> 'A' %s AND htr_deptid IN(%s) and hcr_admitdept=htr_deptid AND htr_admitdate BETWEEN to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')") \
		_T(" UNION ALL") \
		_T(" SELECT hd_object,hd_rank,") \
		_T("             Trunc(htr_admitdate) admit_date, ") \
		_T("             0                    in_qty, ") \
		_T(" 	          1                    movein_qty, ") \
		_T(" 	          0                    return_unit, ") \
		_T(" 	          0                    moveout_qty, ") \
		_T(" 	          0                    transfer_qty, ") \
		_T(" 	          0                    dead,") \
		_T("             0 nxv") \
		_T(" FROM   hms_doc ") \
		_T(" LEFT JOIN  hms_treatment_record ON(htr_docno=hd_docno) ") \
		_T(" LEFT JOIN hms_clinical_record ON ( hcr_docno = hd_docno )") \
		_T(" WHERE  htr_status <> 'A' %s AND htr_deptid IN(%s) AND htr_idx > 1 AND hcr_admitdept<>htr_deptid AND htr_admitdate BETWEEN to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')") \
		_T(" UNION ALL") \
		_T(" SELECT hd_object,hd_rank,") \
		_T("             Trunc(htr_admitdate) admit_date, ") \
		_T("             0                    in_qty, ") \
		_T(" 	          0                    movein_qty, ") \
		_T(" 	          CASE WHEN htr_suggestion not in('M','F') AND hcr_result NOT IN ( 4, 5, 6,7 ) THEN 1 ELSE 0 END return_unit, ") \
		_T(" 	          0                    moveout_qty, ") \
		_T(" 	          CASE WHEN htr_suggestion = 'F' THEN 1 ELSE 0 END transfer_qty, ") \
		_T("             CASE WHEN htr_suggestion = 'T' AND hcr_result IN ( 5, 6 ) THEN 1 ELSE 0 END dead,") \
		_T("             CASE WHEN htr_suggestion = 'T' AND hcr_result IN ( 4, 7 ) THEN 1 ELSE 0 END nxv") \
		_T(" FROM   hms_doc ") \
		_T(" LEFT JOIN  hms_treatment_record ON(htr_docno=hd_docno) ") \
		_T(" LEFT JOIN hms_clinical_record ON ( hcr_docno = hd_docno )") \
		_T(" WHERE htr_status = 'T' %s AND htr_deptid IN(%s) AND htr_dischargedate BETWEEN to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')") \
		_T(" UNION ALL") \
		_T(" SELECT hd_object,hd_rank,") \
		_T("             Trunc(htr_admitdate) admit_date, ") \
		_T("             0                    in_qty, ") \
		_T(" 	          0                    movein_qty, ") \
		_T(" 	          0 return_unit, ") \
		_T(" 	          1                    moveout_qty, ") \
		_T(" 	          0                    transfer_qty, ") \
		_T(" 	          0 dead,") \
		_T("             0 nxv") \
		_T(" FROM   hms_doc ") \
		_T(" LEFT JOIN  hms_treatment_record ON(htr_docno=hd_docno) ") \
		_T(" LEFT JOIN hms_clinical_record ON ( hcr_docno = hd_docno )") \
		_T(" WHERE ( htr_suggestion ='M') %s AND htr_deptid IN(%s) AND htr_dischargedate BETWEEN to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss'))") \
		_T(" GROUP BY hd_object,hd_rank)") \
		_T(" GROUP BY doituong,hd_rank)") \
		_T(" WHERE doituong = 1 and hd_rank IN ( 13, 14 )") \
		_T(" GROUP BY doituong") \
		_T(" UNION ALL") \
		_T(" SELECT 1 id,'Qu\xE2n' type,'2//' doituong,sum(socu) socu,sum(vaovien) vaovien,sum(ckden) ckden,sum(ravien) ravien,sum(ckdi) ckdi,sum(chuyenvien) chuyenvien,sum(tuvong) tuvong,sum(nxv) nxv,sum((socu+vaovien+ckden)-(ravien+ckdi+chuyenvien+tuvong+nxv)) hientai") \
		_T(" FROM(SELECT doituong,hd_rank,sum(socu) socu,sum(vaovien) vaovien,sum(ckden) ckden,sum(ravien) ravien,sum(ckdi) ckdi,sum(chuyenvien) chuyenvien,sum(tuvong) tuvong,sum(nxv) nxv,sum((socu+vaovien+ckden)-(ravien+ckdi+chuyenvien+tuvong+nxv)) hientai") \
		_T(" FROM(SELECT doituong,hd_rank,") \
		_T("        count(distinct hd_docno) socu,0 vaovien,0 ckden,0 ravien,0 ckdi,0 chuyenvien,0 tuvong, 0 nxv") \
		_T(" FROM(SELECT hd_docno,doituong,hd_rank") \
		_T(" FROM(SELECT distinct hd_docno,hd_rank,") \
		_T("        hd_object AS doituong,") \
		_T("        trunc_date(htr_admitdate) AS admitdate,") \
		_T("        trunc_date(hcr_dischargedate) AS dischargedate,") \
		_T("        htr_deptid") \
		_T(" FROM hms_patient") \
		_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
		_T(" LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno)") \
		_T(" LEFT JOIN hms_treatment_record ON(htr_docno =hd_docno)") \
		_T(" WHERE htr_deptid not in('A4') AND htr_status='I' %s AND htr_deptid IN(%s) AND htr_admitdate < to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')") \
		_T(" UNION ALL") \
		_T(" SELECT distinct hd_docno,hd_rank,") \
		_T("        hd_object AS doituong,") \
		_T("        trunc_date(htr_admitdate) AS admitdate,") \
		_T("        trunc_date(hcr_dischargedate) AS dischargedate,") \
		_T("        htr_deptid") \
		_T(" FROM hms_patient") \
		_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
		_T(" LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno)") \
		_T(" LEFT JOIN hms_treatment_record ON(htr_docno =hd_docno)") \
		_T(" WHERE htr_deptid not in('A4') AND htr_status='T' %s AND htr_deptid IN(%s) AND htr_admitdate < to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND htr_dischargedate >= to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')))") \
		_T(" GROUP BY doituong,hd_rank") \
		_T(" UNION ALL") \
		_T(" SELECT hd_object AS doituong,hd_rank,0 socu,") \
		_T("        SUM(in_qty)       vaovien, ") \
		_T(" 		   SUM(movein_qty)   ckden, ") \
		_T(" 		   SUM(return_unit)  ravien, ") \
		_T(" 		   SUM(moveout_qty)  ckdi, ") \
		_T(" 		   SUM(transfer_qty) chuyenvien,  ") \
		_T(" 		 	 SUM(dead)         tuvong,") \
		_T("        SUM(nxv) nxv") \
		_T(" FROM(SELECT hd_object,") \
		_T("             hd_rank,") \
		_T("             Trunc(htr_admitdate) admit_date, ") \
		_T("             1                    in_qty, ") \
		_T(" 	          0                    movein_qty, ") \
		_T(" 	          0                    return_unit, ") \
		_T(" 	          0                    moveout_qty, ") \
		_T(" 	          0                    transfer_qty, ") \
		_T(" 	          0                    dead,") \
		_T("             0 nxv") \
		_T(" FROM   hms_doc ") \
		_T(" LEFT JOIN  hms_treatment_record ON(htr_docno=hd_docno) ") \
		_T(" LEFT JOIN hms_clinical_record ON ( hcr_docno = hd_docno)") \
		_T(" WHERE  htr_status <> 'A' %s AND htr_deptid IN(%s) and hcr_admitdept=htr_deptid AND htr_admitdate BETWEEN to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')") \
		_T(" UNION ALL") \
		_T(" SELECT hd_object,hd_rank,") \
		_T("             Trunc(htr_admitdate) admit_date, ") \
		_T("             0                    in_qty, ") \
		_T(" 	          1                    movein_qty, ") \
		_T(" 	          0                    return_unit, ") \
		_T(" 	          0                    moveout_qty, ") \
		_T(" 	          0                    transfer_qty, ") \
		_T(" 	          0                    dead,") \
		_T("             0 nxv") \
		_T(" FROM   hms_doc ") \
		_T(" LEFT JOIN  hms_treatment_record ON(htr_docno=hd_docno) ") \
		_T(" LEFT JOIN hms_clinical_record ON ( hcr_docno = hd_docno )") \
		_T(" WHERE  htr_status <> 'A' %s AND htr_deptid IN(%s) AND htr_idx > 1 AND hcr_admitdept<>htr_deptid AND htr_admitdate BETWEEN to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')") \
		_T(" UNION ALL") \
		_T(" SELECT hd_object,hd_rank,") \
		_T("             Trunc(htr_admitdate) admit_date, ") \
		_T("             0                    in_qty, ") \
		_T(" 	          0                    movein_qty, ") \
		_T(" 	          CASE WHEN htr_suggestion not in('M','F') AND hcr_result NOT IN ( 4, 5, 6,7 ) THEN 1 ELSE 0 END return_unit, ") \
		_T(" 	          0                    moveout_qty, ") \
		_T(" 	          CASE WHEN htr_suggestion = 'F' THEN 1 ELSE 0 END transfer_qty, ") \
		_T("             CASE WHEN htr_suggestion = 'T' AND hcr_result IN ( 5, 6 ) THEN 1 ELSE 0 END dead,") \
		_T("             CASE WHEN htr_suggestion = 'T' AND hcr_result IN ( 4, 7 ) THEN 1 ELSE 0 END nxv") \
		_T(" FROM   hms_doc ") \
		_T(" LEFT JOIN  hms_treatment_record ON(htr_docno=hd_docno) ") \
		_T(" LEFT JOIN hms_clinical_record ON ( hcr_docno = hd_docno )") \
		_T(" WHERE htr_status = 'T' %s AND htr_deptid IN(%s) AND htr_dischargedate BETWEEN to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')") \
		_T(" UNION ALL") \
		_T(" SELECT hd_object,hd_rank,") \
		_T("             Trunc(htr_admitdate) admit_date, ") \
		_T("             0                    in_qty, ") \
		_T(" 	          0                    movein_qty, ") \
		_T(" 	          0 return_unit, ") \
		_T(" 	          1                    moveout_qty, ") \
		_T(" 	          0                    transfer_qty, ") \
		_T(" 	          0 dead,") \
		_T("             0 nxv") \
		_T(" FROM   hms_doc ") \
		_T(" LEFT JOIN  hms_treatment_record ON(htr_docno=hd_docno) ") \
		_T(" LEFT JOIN hms_clinical_record ON ( hcr_docno = hd_docno )") \
		_T(" WHERE ( htr_suggestion ='M') %s AND htr_deptid IN(%s) AND htr_dischargedate BETWEEN to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss'))") \
		_T(" GROUP BY hd_object,hd_rank)") \
		_T(" GROUP BY doituong,hd_rank)") \
		_T(" WHERE doituong = 1 and hd_rank < 13") \
		_T(" GROUP BY doituong") \
		_T(" UNION ALL") \
		_T(" SELECT id,type,doituong,sum(socu) socu,sum(vaovien) vaovien,sum(ckden) ckden,sum(ravien) ravien,sum(ckdi) ckdi,sum(chuyenvien) chuyenvien,sum(tuvong) tuvong,sum(nxv) nxv,sum((socu+vaovien+ckden)-(ravien+ckdi+chuyenvien+tuvong+nxv)) hientai") \
		_T(" FROM(SELECT 2 id,'BHQH' type,'T\x1B0\x1EDBng' doituong,sum(socu) socu,sum(vaovien) vaovien,sum(ckden) ckden,sum(ravien) ravien,sum(ckdi) ckdi,sum(chuyenvien) chuyenvien,sum(tuvong) tuvong,sum(nxv) nxv,sum((socu+vaovien+ckden)-(ravien+ckdi+chuyenvien+tuvong+nxv)) hientai") \
		_T(" FROM(SELECT doituong,hd_rank,sum(socu) socu,sum(vaovien) vaovien,sum(ckden) ckden,sum(ravien) ravien,sum(ckdi) ckdi,sum(chuyenvien) chuyenvien,sum(tuvong) tuvong,sum(nxv) nxv,sum((socu+vaovien+ckden)-(ravien+ckdi+chuyenvien+tuvong+nxv)) hientai") \
		_T(" FROM(SELECT doituong,hd_rank,") \
		_T("        count(distinct hd_docno) socu,0 vaovien,0 ckden,0 ravien,0 ckdi,0 chuyenvien,0 tuvong, 0 nxv") \
		_T(" FROM(SELECT hd_docno,doituong,hd_rank") \
		_T(" FROM(SELECT distinct hd_docno,hd_rank,") \
		_T("        hd_object AS doituong,") \
		_T("        trunc_date(htr_admitdate) AS admitdate,") \
		_T("        trunc_date(hcr_dischargedate) AS dischargedate,") \
		_T("        htr_deptid") \
		_T(" FROM hms_patient") \
		_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
		_T(" LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno)") \
		_T(" LEFT JOIN hms_treatment_record ON(htr_docno =hd_docno)") \
		_T(" WHERE htr_deptid not in('A4') AND htr_status='I' %s AND htr_deptid IN(%s) AND htr_admitdate < to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')") \
		_T(" UNION ALL") \
		_T(" SELECT distinct hd_docno,hd_rank,") \
		_T("        hd_object AS doituong,") \
		_T("        trunc_date(htr_admitdate) AS admitdate,") \
		_T("        trunc_date(hcr_dischargedate) AS dischargedate,") \
		_T("        htr_deptid") \
		_T(" FROM hms_patient") \
		_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
		_T(" LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno)") \
		_T(" LEFT JOIN hms_treatment_record ON(htr_docno =hd_docno)") \
		_T(" WHERE htr_deptid not in('A4') AND htr_status='T' %s AND htr_deptid IN(%s) AND htr_admitdate < to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND htr_dischargedate >= to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')))") \
		_T(" GROUP BY doituong,hd_rank") \
		_T(" UNION ALL") \
		_T(" SELECT hd_object AS doituong,hd_rank,0 socu,") \
		_T("        SUM(in_qty)       vaovien, ") \
		_T(" 		   SUM(movein_qty)   ckden, ") \
		_T(" 		   SUM(return_unit)  ravien, ") \
		_T(" 		   SUM(moveout_qty)  ckdi, ") \
		_T(" 		   SUM(transfer_qty) chuyenvien,  ") \
		_T(" 		 	 SUM(dead)         tuvong,") \
		_T("        SUM(nxv) nxv") \
		_T(" FROM(SELECT hd_object,") \
		_T("             hd_rank,") \
		_T("             Trunc(htr_admitdate) admit_date, ") \
		_T("             1                    in_qty, ") \
		_T(" 	          0                    movein_qty, ") \
		_T(" 	          0                    return_unit, ") \
		_T(" 	          0                    moveout_qty, ") \
		_T(" 	          0                    transfer_qty, ") \
		_T(" 	          0                    dead,") \
		_T("             0 nxv") \
		_T(" FROM   hms_doc ") \
		_T(" LEFT JOIN  hms_treatment_record ON(htr_docno=hd_docno) ") \
		_T(" LEFT JOIN hms_clinical_record ON ( hcr_docno = hd_docno)") \
		_T(" WHERE  htr_status <> 'A' %s AND htr_deptid IN(%s) and hcr_admitdept=htr_deptid AND htr_admitdate BETWEEN to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')") \
		_T(" UNION ALL") \
		_T(" SELECT hd_object,hd_rank,") \
		_T("             Trunc(htr_admitdate) admit_date, ") \
		_T("             0                    in_qty, ") \
		_T(" 	          1                    movein_qty, ") \
		_T(" 	          0                    return_unit, ") \
		_T(" 	          0                    moveout_qty, ") \
		_T(" 	          0                    transfer_qty, ") \
		_T(" 	          0                    dead,") \
		_T("             0 nxv") \
		_T(" FROM   hms_doc ") \
		_T(" LEFT JOIN  hms_treatment_record ON(htr_docno=hd_docno) ") \
		_T(" LEFT JOIN hms_clinical_record ON ( hcr_docno = hd_docno )") \
		_T(" WHERE  htr_status <> 'A' %s AND htr_deptid IN(%s) AND htr_idx > 1 AND hcr_admitdept<>htr_deptid AND htr_admitdate BETWEEN to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')") \
		_T(" UNION ALL") \
		_T(" SELECT hd_object,hd_rank,") \
		_T("             Trunc(htr_admitdate) admit_date, ") \
		_T("             0                    in_qty, ") \
		_T(" 	          0                    movein_qty, ") \
		_T(" 	          CASE WHEN htr_suggestion not in('M','F') AND hcr_result NOT IN ( 4, 5, 6,7 ) THEN 1 ELSE 0 END return_unit, ") \
		_T(" 	          0                    moveout_qty, ") \
		_T(" 	          CASE WHEN htr_suggestion = 'F' THEN 1 ELSE 0 END transfer_qty, ") \
		_T("             CASE WHEN htr_suggestion = 'T' AND hcr_result IN ( 5, 6 ) THEN 1 ELSE 0 END dead,") \
		_T("             CASE WHEN htr_suggestion = 'T' AND hcr_result IN ( 4, 7 ) THEN 1 ELSE 0 END nxv") \
		_T(" FROM   hms_doc ") \
		_T(" LEFT JOIN  hms_treatment_record ON(htr_docno=hd_docno) ") \
		_T(" LEFT JOIN hms_clinical_record ON ( hcr_docno = hd_docno )") \
		_T(" WHERE htr_status = 'T' %s AND htr_deptid IN(%s) AND htr_dischargedate BETWEEN to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')") \
		_T(" UNION ALL") \
		_T(" SELECT hd_object,hd_rank,") \
		_T("             Trunc(htr_admitdate) admit_date, ") \
		_T("             0                    in_qty, ") \
		_T(" 	          0                    movein_qty, ") \
		_T(" 	          0 return_unit, ") \
		_T(" 	          1                    moveout_qty, ") \
		_T(" 	          0                    transfer_qty, ") \
		_T(" 	          0 dead,") \
		_T("             0 nxv") \
		_T(" FROM   hms_doc ") \
		_T(" LEFT JOIN  hms_treatment_record ON(htr_docno=hd_docno) ") \
		_T(" LEFT JOIN hms_clinical_record ON ( hcr_docno = hd_docno )") \
		_T(" WHERE ( htr_suggestion ='M') %s AND htr_deptid IN(%s) AND htr_dischargedate BETWEEN to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss'))") \
		_T(" GROUP BY hd_object,hd_rank)") \
		_T(" GROUP BY doituong,hd_rank)") \
		_T(" WHERE doituong IN(2,12) and hd_rank >=15") \
		_T(" GROUP BY doituong") \
		_T(" UNION ALL") \
		_T(" SELECT 2 id,'BHQH' type,'4//' doituong,sum(socu) socu,sum(vaovien) vaovien,sum(ckden) ckden,sum(ravien) ravien,sum(ckdi) ckdi,sum(chuyenvien) chuyenvien,sum(tuvong) tuvong,sum(nxv) nxv,sum((socu+vaovien+ckden)-(ravien+ckdi+chuyenvien+tuvong+nxv)) hientai") \
		_T(" FROM(SELECT doituong,hd_rank,sum(socu) socu,sum(vaovien) vaovien,sum(ckden) ckden,sum(ravien) ravien,sum(ckdi) ckdi,sum(chuyenvien) chuyenvien,sum(tuvong) tuvong,sum(nxv) nxv,sum((socu+vaovien+ckden)-(ravien+ckdi+chuyenvien+tuvong+nxv)) hientai") \
		_T(" FROM(SELECT doituong,hd_rank,") \
		_T("        count(distinct hd_docno) socu,0 vaovien,0 ckden,0 ravien,0 ckdi,0 chuyenvien,0 tuvong, 0 nxv") \
		_T(" FROM(SELECT hd_docno,doituong,hd_rank") \
		_T(" FROM(SELECT distinct hd_docno,hd_rank,") \
		_T("        hd_object AS doituong,") \
		_T("        trunc_date(htr_admitdate) AS admitdate,") \
		_T("        trunc_date(hcr_dischargedate) AS dischargedate,") \
		_T("        htr_deptid") \
		_T(" FROM hms_patient") \
		_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
		_T(" LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno)") \
		_T(" LEFT JOIN hms_treatment_record ON(htr_docno =hd_docno)") \
		_T(" WHERE htr_deptid not in('A4') %s AND htr_status='I' AND htr_deptid IN(%s) AND htr_admitdate < to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')") \
		_T(" UNION ALL") \
		_T(" SELECT distinct hd_docno,hd_rank,") \
		_T("        hd_object AS doituong,") \
		_T("        trunc_date(htr_admitdate) AS admitdate,") \
		_T("        trunc_date(hcr_dischargedate) AS dischargedate,") \
		_T("        htr_deptid") \
		_T(" FROM hms_patient") \
		_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
		_T(" LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno)") \
		_T(" LEFT JOIN hms_treatment_record ON(htr_docno =hd_docno)") \
		_T(" WHERE htr_deptid not in('A4') AND htr_status='T' %s AND htr_deptid IN(%s) AND htr_admitdate < to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND htr_dischargedate >= to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')))") \
		_T(" GROUP BY doituong,hd_rank") \
		_T(" UNION ALL") \
		_T(" SELECT hd_object AS doituong,hd_rank,0 socu,") \
		_T("        SUM(in_qty)       vaovien, ") \
		_T(" 		   SUM(movein_qty)   ckden, ") \
		_T(" 		   SUM(return_unit)  ravien, ") \
		_T(" 		   SUM(moveout_qty)  ckdi, ") \
		_T(" 		   SUM(transfer_qty) chuyenvien,  ") \
		_T(" 		 	 SUM(dead)         tuvong,") \
		_T("        SUM(nxv) nxv") \
		_T(" FROM(SELECT hd_object,") \
		_T("             hd_rank,") \
		_T("             Trunc(htr_admitdate) admit_date, ") \
		_T("             1                    in_qty, ") \
		_T(" 	          0                    movein_qty, ") \
		_T(" 	          0                    return_unit, ") \
		_T(" 	          0                    moveout_qty, ") \
		_T(" 	          0                    transfer_qty, ") \
		_T(" 	          0                    dead,") \
		_T("             0 nxv") \
		_T(" FROM   hms_doc ") \
		_T(" LEFT JOIN  hms_treatment_record ON(htr_docno=hd_docno) ") \
		_T(" LEFT JOIN hms_clinical_record ON ( hcr_docno = hd_docno)") \
		_T(" WHERE  htr_status <> 'A' %s AND htr_deptid IN(%s) and hcr_admitdept=htr_deptid AND htr_admitdate BETWEEN to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')") \
		_T(" UNION ALL") \
		_T(" SELECT hd_object,hd_rank,") \
		_T("             Trunc(htr_admitdate) admit_date, ") \
		_T("             0                    in_qty, ") \
		_T(" 	          1                    movein_qty, ") \
		_T(" 	          0                    return_unit, ") \
		_T(" 	          0                    moveout_qty, ") \
		_T(" 	          0                    transfer_qty, ") \
		_T(" 	          0                    dead,") \
		_T("             0 nxv") \
		_T(" FROM   hms_doc ") \
		_T(" LEFT JOIN  hms_treatment_record ON(htr_docno=hd_docno) ") \
		_T(" LEFT JOIN hms_clinical_record ON ( hcr_docno = hd_docno )") \
		_T(" WHERE  htr_status <> 'A' %s AND htr_deptid IN(%s) AND htr_idx > 1 AND hcr_admitdept<>htr_deptid AND htr_admitdate BETWEEN to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')") \
		_T(" UNION ALL") \
		_T(" SELECT hd_object,hd_rank,") \
		_T("             Trunc(htr_admitdate) admit_date, ") \
		_T("             0                    in_qty, ") \
		_T(" 	          0                    movein_qty, ") \
		_T(" 	          CASE WHEN htr_suggestion not in('M','F') AND hcr_result NOT IN ( 4, 5, 6,7 ) THEN 1 ELSE 0 END return_unit, ") \
		_T(" 	          0                    moveout_qty, ") \
		_T(" 	          CASE WHEN htr_suggestion = 'F' THEN 1 ELSE 0 END transfer_qty, ") \
		_T("             CASE WHEN htr_suggestion = 'T' AND hcr_result IN ( 5, 6 ) THEN 1 ELSE 0 END dead,") \
		_T("             CASE WHEN htr_suggestion = 'T' AND hcr_result IN ( 4, 7 ) THEN 1 ELSE 0 END nxv") \
		_T(" FROM   hms_doc ") \
		_T(" LEFT JOIN  hms_treatment_record ON(htr_docno=hd_docno) ") \
		_T(" LEFT JOIN hms_clinical_record ON ( hcr_docno = hd_docno )") \
		_T(" WHERE htr_status = 'T' %s AND htr_deptid IN(%s) AND htr_dischargedate BETWEEN to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')") \
		_T(" UNION ALL") \
		_T(" SELECT hd_object,hd_rank,") \
		_T("             Trunc(htr_admitdate) admit_date, ") \
		_T("             0                    in_qty, ") \
		_T(" 	          0                    movein_qty, ") \
		_T(" 	          0 return_unit, ") \
		_T(" 	          1                    moveout_qty, ") \
		_T(" 	          0                    transfer_qty, ") \
		_T(" 	          0 dead,") \
		_T("             0 nxv") \
		_T(" FROM   hms_doc ") \
		_T(" LEFT JOIN  hms_treatment_record ON(htr_docno=hd_docno) ") \
		_T(" LEFT JOIN hms_clinical_record ON ( hcr_docno = hd_docno )") \
		_T(" WHERE ( htr_suggestion ='M') %s AND htr_deptid IN(%s) AND htr_dischargedate BETWEEN to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss'))") \
		_T(" GROUP BY hd_object,hd_rank)") \
		_T(" GROUP BY doituong,hd_rank)") \
		_T(" WHERE doituong IN(2,12) and hd_rank IN ( 13, 14 )") \
		_T(" GROUP BY doituong") \
		_T(" UNION ALL") \
		_T(" SELECT 2 id,'BHQH' type,'2//' doituong,sum(socu) socu,sum(vaovien) vaovien,sum(ckden) ckden,sum(ravien) ravien,sum(ckdi) ckdi,sum(chuyenvien) chuyenvien,sum(tuvong) tuvong,sum(nxv) nxv,sum((socu+vaovien+ckden)-(ravien+ckdi+chuyenvien+tuvong+nxv)) hientai") \
		_T(" FROM(SELECT doituong,hd_rank,sum(socu) socu,sum(vaovien) vaovien,sum(ckden) ckden,sum(ravien) ravien,sum(ckdi) ckdi,sum(chuyenvien) chuyenvien,sum(tuvong) tuvong,sum(nxv) nxv,sum((socu+vaovien+ckden)-(ravien+ckdi+chuyenvien+tuvong+nxv)) hientai") \
		_T(" FROM(SELECT doituong,hd_rank,") \
		_T("        count(distinct hd_docno) socu,0 vaovien,0 ckden,0 ravien,0 ckdi,0 chuyenvien,0 tuvong, 0 nxv") \
		_T(" FROM(SELECT hd_docno,doituong,hd_rank") \
		_T(" FROM(SELECT distinct hd_docno,hd_rank,") \
		_T("        hd_object AS doituong,") \
		_T("        trunc_date(htr_admitdate) AS admitdate,") \
		_T("        trunc_date(hcr_dischargedate) AS dischargedate,") \
		_T("        htr_deptid") \
		_T(" FROM hms_patient") \
		_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
		_T(" LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno)") \
		_T(" LEFT JOIN hms_treatment_record ON(htr_docno =hd_docno)") \
		_T(" WHERE htr_deptid not in('A4') AND htr_status='I' %s AND htr_deptid IN(%s) AND htr_admitdate < to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')") \
		_T(" UNION ALL") \
		_T(" SELECT distinct hd_docno,hd_rank,") \
		_T("        hd_object AS doituong,") \
		_T("        trunc_date(htr_admitdate) AS admitdate,") \
		_T("        trunc_date(hcr_dischargedate) AS dischargedate,") \
		_T("        htr_deptid") \
		_T(" FROM hms_patient") \
		_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
		_T(" LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno)") \
		_T(" LEFT JOIN hms_treatment_record ON(htr_docno =hd_docno)") \
		_T(" WHERE htr_deptid not in('A4') AND htr_status='T' %s AND htr_deptid IN(%s) AND htr_admitdate < to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND htr_dischargedate >= to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')))") \
		_T(" GROUP BY doituong,hd_rank") \
		_T(" UNION ALL") \
		_T(" SELECT hd_object AS doituong,hd_rank,0 socu,") \
		_T("        SUM(in_qty)       vaovien, ") \
		_T(" 		   SUM(movein_qty)   ckden, ") \
		_T(" 		   SUM(return_unit)  ravien, ") \
		_T(" 		   SUM(moveout_qty)  ckdi, ") \
		_T(" 		   SUM(transfer_qty) chuyenvien,  ") \
		_T(" 		 	 SUM(dead)         tuvong,") \
		_T("        SUM(nxv) nxv") \
		_T(" FROM(SELECT hd_object,") \
		_T("             hd_rank,") \
		_T("             Trunc(htr_admitdate) admit_date, ") \
		_T("             1                    in_qty, ") \
		_T(" 	          0                    movein_qty, ") \
		_T(" 	          0                    return_unit, ") \
		_T(" 	          0                    moveout_qty, ") \
		_T(" 	          0                    transfer_qty, ") \
		_T(" 	          0                    dead,") \
		_T("             0 nxv") \
		_T(" FROM   hms_doc ") \
		_T(" LEFT JOIN  hms_treatment_record ON(htr_docno=hd_docno) ") \
		_T(" LEFT JOIN hms_clinical_record ON ( hcr_docno = hd_docno)") \
		_T(" WHERE  htr_status <> 'A' %s AND htr_deptid IN(%s) and hcr_admitdept=htr_deptid AND htr_admitdate BETWEEN to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')") \
		_T(" UNION ALL") \
		_T(" SELECT hd_object,hd_rank,") \
		_T("             Trunc(htr_admitdate) admit_date, ") \
		_T("             0                    in_qty, ") \
		_T(" 	          1                    movein_qty, ") \
		_T(" 	          0                    return_unit, ") \
		_T(" 	          0                    moveout_qty, ") \
		_T(" 	          0                    transfer_qty, ") \
		_T(" 	          0                    dead,") \
		_T("             0 nxv") \
		_T(" FROM   hms_doc ") \
		_T(" LEFT JOIN  hms_treatment_record ON(htr_docno=hd_docno) ") \
		_T(" LEFT JOIN hms_clinical_record ON ( hcr_docno = hd_docno )") \
		_T(" WHERE  htr_status <> 'A' %s AND htr_deptid IN(%s) AND htr_idx > 1 AND hcr_admitdept<>htr_deptid AND htr_admitdate BETWEEN to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')") \
		_T(" UNION ALL") \
		_T(" SELECT hd_object,hd_rank,") \
		_T("             Trunc(htr_admitdate) admit_date, ") \
		_T("             0                    in_qty, ") \
		_T(" 	          0                    movein_qty, ") \
		_T(" 	          CASE WHEN htr_suggestion not in('M','F') AND hcr_result NOT IN ( 4, 5, 6,7 ) THEN 1 ELSE 0 END return_unit, ") \
		_T(" 	          0                    moveout_qty, ") \
		_T(" 	          CASE WHEN htr_suggestion = 'F' THEN 1 ELSE 0 END transfer_qty, ") \
		_T("             CASE WHEN htr_suggestion = 'T' AND hcr_result IN ( 5, 6 ) THEN 1 ELSE 0 END dead,") \
		_T("             CASE WHEN htr_suggestion = 'T' AND hcr_result IN ( 4, 7 ) THEN 1 ELSE 0 END nxv") \
		_T(" FROM   hms_doc ") \
		_T(" LEFT JOIN  hms_treatment_record ON(htr_docno=hd_docno) ") \
		_T(" LEFT JOIN hms_clinical_record ON ( hcr_docno = hd_docno )") \
		_T(" WHERE htr_status = 'T' %s AND htr_deptid IN(%s) AND htr_dischargedate BETWEEN to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')") \
		_T(" UNION ALL") \
		_T(" SELECT hd_object,hd_rank,") \
		_T("             Trunc(htr_admitdate) admit_date, ") \
		_T("             0                    in_qty, ") \
		_T(" 	          0                    movein_qty, ") \
		_T(" 	          0 return_unit, ") \
		_T(" 	          1                    moveout_qty, ") \
		_T(" 	          0                    transfer_qty, ") \
		_T(" 	          0 dead,") \
		_T("             0 nxv") \
		_T(" FROM   hms_doc ") \
		_T(" LEFT JOIN  hms_treatment_record ON(htr_docno=hd_docno) ") \
		_T(" LEFT JOIN hms_clinical_record ON ( hcr_docno = hd_docno )") \
		_T(" WHERE ( htr_suggestion ='M') %s AND htr_deptid IN(%s) AND htr_dischargedate BETWEEN to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss'))") \
		_T(" GROUP BY hd_object,hd_rank)") \
		_T(" GROUP BY doituong,hd_rank)") \
		_T(" WHERE doituong IN(2,12) and hd_rank < 13") \
		_T(" GROUP BY doituong)") \
		_T(" GROUP BY id,type,doituong)"),szWhere,szDepts,m_szFromDate,
		szWhere,szDepts,m_szFromDate,m_szFromDate,
		szWhere,szDepts,m_szFromDate,m_szToDate,
		szWhere,szDepts,m_szFromDate,m_szToDate,
		szWhere,szDepts,m_szFromDate,m_szToDate,
		szWhere,szDepts,m_szFromDate,m_szToDate,
		szWhere,szDepts,m_szFromDate,
		szWhere,szDepts,m_szFromDate,m_szFromDate,
		szWhere,szDepts,m_szFromDate,m_szToDate,
		szWhere,szDepts,m_szFromDate,m_szToDate,
		szWhere,szDepts,m_szFromDate,m_szToDate,
		szWhere,szDepts,m_szFromDate,m_szToDate,
		szWhere,szDepts,m_szFromDate,
		szWhere,szDepts,m_szFromDate,m_szFromDate,
		szWhere,szDepts,m_szFromDate,m_szToDate,
		szWhere,szDepts,m_szFromDate,m_szToDate,
		szWhere,szDepts,m_szFromDate,m_szToDate,
		szWhere,szDepts,m_szFromDate,m_szToDate,
		szWhere,szDepts,m_szFromDate,
		szWhere,szDepts,m_szFromDate,m_szFromDate,
		szWhere,szDepts,m_szFromDate,m_szToDate,
		szWhere,szDepts,m_szFromDate,m_szToDate,
		szWhere,szDepts,m_szFromDate,m_szToDate,
		szWhere,szDepts,m_szFromDate,m_szToDate,
		szWhere,szDepts,m_szFromDate,
		szWhere,szDepts,m_szFromDate,m_szFromDate,
		szWhere,szDepts,m_szFromDate,m_szToDate,
		szWhere,szDepts,m_szFromDate,m_szToDate,
		szWhere,szDepts,m_szFromDate,m_szToDate,
		szWhere,szDepts,m_szFromDate,m_szToDate,
		szWhere,szDepts,m_szFromDate,
		szWhere,szDepts,m_szFromDate,m_szFromDate,
		szWhere,szDepts,m_szFromDate,m_szToDate,
		szWhere,szDepts,m_szFromDate,m_szToDate,
		szWhere,szDepts,m_szFromDate,m_szToDate,
		szWhere,szDepts,m_szFromDate,m_szToDate);
	return szSQL;
}
int CTMArmyReportsDeptKTM::OnListCheckAll()
{
	for (int i = 0; i < m_wndDepartmentList.GetItemCount(); i++)
	{
		if (!m_wndDepartmentList.GetCheck(i))
			m_wndDepartmentList.SetCheck(i, TRUE);
	}
	return 0;
}

int CTMArmyReportsDeptKTM::OnListUnCheckAll()
{
	for (int i = 0; i < m_wndDepartmentList.GetItemCount(); i++)
	{
		if (m_wndDepartmentList.GetCheck(i))
			m_wndDepartmentList.SetCheck(i, FALSE);
	}
	return 0;
}