#include "rptExaminationTypeReportDialog.h"
#include "ReportDocument.h"
#include "Excel.h"
#include "../MainFrm.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CrptExaminationtypeReportDialog *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CrptExaminationtypeReportDialog *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CrptExaminationtypeReportDialog *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CrptExaminationtypeReportDialog *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CrptExaminationtypeReportDialog *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CrptExaminationtypeReportDialog *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CrptExaminationtypeReportDialog *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CrptExaminationtypeReportDialog *)pWnd)->OnToDateCheckValue();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CrptExaminationtypeReportDialog *pVw = (CrptExaminationtypeReportDialog *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CrptExaminationtypeReportDialog *pVw = (CrptExaminationtypeReportDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CrptExaminationtypeReportDialog *pVw = (CrptExaminationtypeReportDialog *)pWnd;
	pVw->OnExportSelect();
} 
static int _OnAddHMSExaminationtypeReportDlgFnc(CWnd *pWnd){
	 return ((CrptExaminationtypeReportDialog*)pWnd)->OnAddHMSExaminationtypeReportDlg();
} 
static int _OnEditHMSExaminationtypeReportDlgFnc(CWnd *pWnd){
	 return ((CrptExaminationtypeReportDialog*)pWnd)->OnEditHMSExaminationtypeReportDlg();
} 
static int _OnDeleteHMSExaminationtypeReportDlgFnc(CWnd *pWnd){
	 return ((CrptExaminationtypeReportDialog*)pWnd)->OnDeleteHMSExaminationtypeReportDlg();
} 
static int _OnSaveHMSExaminationtypeReportDlgFnc(CWnd *pWnd){
	 return ((CrptExaminationtypeReportDialog*)pWnd)->OnSaveHMSExaminationtypeReportDlg();
} 
static int _OnCancelHMSExaminationtypeReportDlgFnc(CWnd *pWnd){
	 return ((CrptExaminationtypeReportDialog*)pWnd)->OnCancelHMSExaminationtypeReportDlg();
} 
CrptExaminationtypeReportDialog::CrptExaminationtypeReportDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 365;
	m_nDlgHeight = 105;
	SetDefaultValues();
}
CrptExaminationtypeReportDialog::~CrptExaminationtypeReportDialog(){
}
void CrptExaminationtypeReportDialog::OnCreateComponents(){
	m_wndReportConditio.Create(this, _T("Report Condition"), 5, 5, 360, 60);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 180, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 185, 30, 265, 55);
	m_wndToDate.Create(this,270, 30, 355, 55); 
	m_wndPrint.Create(this, _T("&Print"), 121, 66, 196, 91);
	m_wndExport.Create(this, _T("&Export"), 201, 66, 276, 91);
	m_wndClose.Create(this, _T("&Close"), 281, 66, 356, 91);

}
void CrptExaminationtypeReportDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(TRUE);
	//EnableButtons(TRUE, 0, -1);
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
	m_szFromDate=m_szToDate=pMF->GetSysDate();
	UpdateData(false);	
}
void CrptExaminationtypeReportDialog::OnSetWindowEvents(){
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);

}
void CrptExaminationtypeReportDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);

}
void CrptExaminationtypeReportDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CrptExaminationtypeReportDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CrptExaminationtypeReportDialog::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();

}
int CrptExaminationtypeReportDialog::SetMode(int nMode){
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
/*void CrptExaminationtypeReportDialog::OnFromDateChange(){
	
} */
/*void CrptExaminationtypeReportDialog::OnFromDateSetfocus(){
	
} */
/*void CrptExaminationtypeReportDialog::OnFromDateKillfocus(){
	
} */
int CrptExaminationtypeReportDialog::OnFromDateCheckValue(){
	return 0;
} 
/*void CrptExaminationtypeReportDialog::OnToDateChange(){
	
} */
/*void CrptExaminationtypeReportDialog::OnToDateSetfocus(){
	
} */
/*void CrptExaminationtypeReportDialog::OnToDateKillfocus(){
	
} */
int CrptExaminationtypeReportDialog::OnToDateCheckValue(){
	return 0;
} 
void CrptExaminationtypeReportDialog::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
	CRecord rs(&pMF->m_db);
	CString szSQL,szDate,szSysDate, tmpStr, szField;	
	szSysDate = pMF->GetSysDate();
	CReport rpt; 
	UpdateData(true);
	if(!rpt.Init(_T("Reports/HMS/HE_THONGKEBENHNHANTHEOKIEUKHAM.RPT")))
	return ;	
		
	tmpStr = rpt.GetReportHeader()->GetValue(_T("ReportDate"));
	szDate.Format(tmpStr, CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy),CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), szDate);
	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), pMF->m_CompanyInfo.sc_pname);
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), pMF->m_CompanyInfo.sc_name);
	//Report Detail
	CReportSection* rptDetail = rpt.GetDetail(); 

	szSQL.Format(_T(" SELECT (select hfl_name from hms_fee_list where hfl_feeid=examtype) as Examname,sum(BHYT) as BHYT, ") \
				_T(" 	sum(Miengiam) as Miengiam, sum(Dichvu) as Dichvu ,sum(BHYT + Miengiam + Dichvu) as  Tongso, ") \
				_T(" 	hfl_servprice as  Dongia, sum(BHYT + Miengiam + Dichvu) * hfl_servprice as Tongtien") \
				_T(" FROM ( SELECT Distinct he_docno,he_examtype as examtype, ") \
				_T(" 	case when ho_type in('I','C') then 1 else 0 end as BHYT,") \
				_T(" 	case when ho_type not in('I','C','S') then 1 else 0 end as Miengiam,") \
				_T(" 	case when ho_type in('S') then 1 else 0 end as Dichvu") \
				_T(" FROM hms_exam ") \
				_T(" LEFT JOIN hms_doc ON(hd_docno=he_docno)") \
				_T(" LEFT JOIn hms_object ON(ho_id=hd_object)") \
				_T(" WHERE date(he_examdate) BETWEEN date('%s') AND date('%s') AND he_status <> 'O' ") \
				_T(" ) as Tbl") \
				_T(" LEFT JOIN hms_fee_list ON(hfl_feeid=examtype)") \
				_T(" WHERE length(hfl_name) > 0 ") \
				_T(" GROUP BY  examtype,hfl_servprice"), m_szFromDate, m_szToDate);
	
	UpdateData(false);
	rs.ExecSQL(szSQL);
	//_fmsg(_T("%s"), szSQL);	
	if(rs.IsEOF()){
		ShowMessageBox(_T("No data"), MB_OK);		
		return ;
	}
	
	int nIndex = 1;
	double Count=0;
	long double ttgrp[8];
	
	for (int i =0; i < 9; i++)
	{
		ttgrp[i] = 0;		
	}
	while(!rs.IsEOF())
	{		
		rptDetail = rpt.AddDetail();	
		tmpStr.Format(_T("%d"), nIndex++);
		rptDetail->SetValue(_T("1"), tmpStr);				
		rs.GetValue(_T("Examname"), tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);		
		rs.GetValue(_T("BHYT"), Count);
			ttgrp[3]+=Count;
			FormatCurrency(Count, tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);
		rs.GetValue(_T("Miengiam"), Count);
			ttgrp[4]+=Count;
			FormatCurrency(Count, tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);			
		rs.GetValue(_T("Dichvu"), Count);
			ttgrp[5]+=Count;
			FormatCurrency(Count, tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);
		rs.GetValue(_T("Tongso"), Count);
			ttgrp[6]+=Count;
			FormatCurrency(Count, tmpStr);			
		rptDetail->SetValue(_T("6"), tmpStr);
		rs.GetValue(_T("Dongia"), Count);
			ttgrp[7]+=Count;
			FormatCurrency(Count, tmpStr);
		rptDetail->SetValue(_T("7"), tmpStr);		
		rs.GetValue(_T("Tongtien"), Count);
			ttgrp[8]+=Count;
			FormatCurrency(Count, tmpStr);
		rptDetail->SetValue(_T("8"), tmpStr);	
		rs.MoveNext();
	}
	if (ttgrp[8] > 0)
	{			
		for (int i =3; i < 9; i++)
		{				
			szField.Format(_T("s%d"), i);
			FormatCurrency(ttgrp[i], tmpStr);			
			rpt.GetReportFooter()->SetValue(szField,tmpStr);
		}
	}
	
	//Page Footer
	//Report Footer
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),szSysDate.Right(2),szSysDate.Mid(5,2),szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
	
	rpt.PrintPreview();
	
} 
void CrptExaminationtypeReportDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();
	
} 
void CrptExaminationtypeReportDialog::OnExportSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();	
	CRecord rs(&pMF->m_db);
	CString szSQL,szDate,szSysDate, tmpStr, szField;	
	szSysDate = pMF->GetSysDate();
	CReport rpt; 

	if(!rpt.Init(_T("Reports/HMS/HE_THONGKEBENHNHANTHEOKIEUKHAM.RPT")))
		return ;
	
		
	tmpStr = rpt.GetReportHeader()->GetValue(_T("ReportDate"));
	szDate.Format(tmpStr, CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy),CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), szDate);
	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), pMF->m_CompanyInfo.sc_pname);
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), pMF->m_CompanyInfo.sc_name);
	//Report Detail
	CReportSection* rptDetail = rpt.GetDetail(); 

	szSQL.Format(_T(" SELECT (select hfl_name from hms_fee_list where hfl_feeid=examtype) as Examname,sum(BHYT) as BHYT, ") \
				_T(" 	sum(Miengiam) as Miengiam, sum(Dichvu) as Dichvu ,sum(BHYT + Miengiam + Dichvu) as  Tongso, ") \
				_T(" 	hfl_servprice as  Dongia, sum(BHYT + Miengiam + Dichvu) * hfl_servprice as Tongtien") \
				_T(" FROM ( SELECT Distinct he_docno,he_examtype as examtype, ") \
				_T(" 	case when ho_type in('I','C') then 1 else 0 end as BHYT,") \
				_T(" 	case when ho_type not in('I','C','S') then 1 else 0 end as Miengiam,") \
				_T(" 	case when ho_type in('S') then 1 else 0 end as Dichvu") \
				_T(" FROM hms_exam ") \
				_T(" LEFT JOIN hms_doc ON(hd_docno=he_docno)") \
				_T(" LEFT JOIn hms_object ON(ho_id=hd_object)") \
				_T(" WHERE date(he_examdate) BETWEEN date('%s') AND date('%s') AND he_status <> 'O' ") \
				_T(" ) as Tbl") \
				_T(" LEFT JOIN hms_fee_list ON(hfl_feeid=examtype)") \
				_T(" WHERE length(hfl_name) > 0 ") \
				_T(" GROUP BY  examtype,hfl_servprice"), m_szFromDate, m_szToDate);
	
	rs.ExecSQL(szSQL);
	//_fmsg(_T("%s"), szSQL);	
	if(rs.IsEOF()){
		ShowMessageBox(_T("No data"), MB_OK);		
		return ;
	}
	

	CExcel xls;	
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	xls.SetCellMergedColumns(0,3,9);	
	xls.SetCellText(0, 3, _T("BAO CAO TONG HOP THEO KIEU KHAM"),FMT_TEXT,true,18,0);
	xls.SetCellMergedColumns(0,4,22);
	tmpStr.Format(_T("Tu ngay %s Den ngay %s"), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	xls.SetCellText(0, 4, tmpStr,FMT_TEXT,true,12,0);


	int nIndex=1,nRow = 6;
	xls.SetCellText(0, nRow, _T("STT"));
	xls.SetCellText(1, nRow, _T("Ten kieu kham"));
	xls.SetCellText(2, nRow, _T("BHYT"));
	xls.SetCellText(3, nRow, _T("Mien giam"));
	xls.SetCellText(4, nRow, _T("Dich vu"));
	xls.SetCellText(5, nRow, _T("Tong so"));
	xls.SetCellText(6, nRow, _T("Don gia"));
	xls.SetCellText(7, nRow, _T("Tong tien"));		
	
	double  Count=0;
	
	double ttgrp[8],ttlTotal[8];
	
	for (int i =0; i < 9; i++)
	{
		ttgrp[i] = 0;		
	}
	while(!rs.IsEOF())
	{		
		nRow++;
		tmpStr.Format(_T("%d"), nIndex++);
		xls.SetCellText(0, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("Examname"), tmpStr);
		xls.SetCellText(1, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("BHYT"), Count);
			ttgrp[2]+=Count;
			tmpStr.Format(_T("%2.f"),Count);
		xls.SetCellText(2, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("Miengiam"), Count);
			ttgrp[3]+=Count;
			tmpStr.Format(_T("%2.f"),Count);
		xls.SetCellText(3, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("Dichvu"), Count);
			ttgrp[4]+=Count;
			tmpStr.Format(_T("%2.f"),Count);
		xls.SetCellText(4, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("Tongso"), Count);
			ttgrp[5]+=Count;
			tmpStr.Format(_T("%2.f"),Count);
		xls.SetCellText(5, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("Dongia"), Count);
			ttgrp[6]+=Count;
			tmpStr.Format(_T("%2.f"),Count);
		xls.SetCellText(6, nRow, tmpStr, FMT_NUMBER2);
		rs.GetValue(_T("Tongtien"), Count);
			ttgrp[7]+=Count;
			tmpStr.Format(_T("%2.f"),Count);
		xls.SetCellText(7, nRow, tmpStr, FMT_NUMBER2);
		rs.MoveNext();
	}
	if (ttgrp[7] > 0)
	{	nRow++;
		for (int i =2; i < 8; i++)
		{				
			tmpStr.Format(_T("%2.f"), ttgrp[i]);	
			xls.SetCellText(1, nRow, _T("Tong cong:"), FMT_TEXT);
			xls.SetCellText(i, nRow, tmpStr, FMT_NUMBER2);
		}
	}

	xls.Save(_T("Exports\\Tonghoptheokieukham.xls"));
	
} 
int CrptExaminationtypeReportDialog::OnAddHMSExaminationtypeReportDlg(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CrptExaminationtypeReportDialog::OnEditHMSExaminationtypeReportDlg(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CrptExaminationtypeReportDialog::OnDeleteHMSExaminationtypeReportDlg(){
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
 		OnCancelHMSExaminationtypeReportDlg(); 
 	}
	return 0;
}
int CrptExaminationtypeReportDialog::OnSaveHMSExaminationtypeReportDlg(){
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
 		//OnHMSExaminationtypeReportDlgListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CrptExaminationtypeReportDialog::OnCancelHMSExaminationtypeReportDlg(){
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
int CrptExaminationtypeReportDialog::OnHMSExaminationtypeReportDlgListLoadData(){
	return 0;
}
