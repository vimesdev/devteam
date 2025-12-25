#include "SysPaperView.h"
#include "MainFrm.h"
#include "Excel.h"
#include <fstream>
#include <iostream>
#include <sstream>
#include "shlobj.h"
#include <string>
using namespace std;

#pragma comment(lib, "../lib/libxml.lib")
#include "libxml/LibXMLHelper.h"
#include "libxml/UTF8Conv.h"
#include <atlenc.h>
#include "HttpClient.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CSysPaperView *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CSysPaperView *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CSysPaperView *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CSysPaperView *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CSysPaperView *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CSysPaperView *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CSysPaperView *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CSysPaperView *)pWnd)->OnToDateCheckValue();
} 
static void _OnDischargeSheetSelectFnc(CWnd *pWnd){
	  ((CSysPaperView*)pWnd)->OnDischargeSheetSelect();
}
static void _OnBirthCertificateSelectFnc(CWnd *pWnd){
	  ((CSysPaperView*)pWnd)->OnBirthCertificateSelect();
}
static void _OnInsuranceLeaveSelectFnc(CWnd *pWnd){
	  ((CSysPaperView*)pWnd)->OnInsuranceLeaveSelect();
}
static void _OnLoadSelectFnc(CWnd *pWnd){
	CSysPaperView *pVw = (CSysPaperView *)pWnd;
	pVw->OnLoadSelect();
} 
static void _OnExportXmlSelectFnc(CWnd *pWnd){
	CSysPaperView *pVw = (CSysPaperView *)pWnd;
	pVw->OnExportXmlSelect();
} 
static long _OnListPatientLoadDataFnc(CWnd *pWnd){
	return ((CSysPaperView*)pWnd)->OnListPatientLoadData();
} 
static void _OnListPatientDblClickFnc(CWnd *pWnd){
	((CSysPaperView*)pWnd)->OnListPatientDblClick();
} 
static void _OnListPatientSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CSysPaperView*)pWnd)->OnListPatientSelectChange(nOldItem, nNewItem);
} 
static int _OnListPatientDeleteItemFnc(CWnd *pWnd){
	 return ((CSysPaperView*)pWnd)->OnListPatientDeleteItem();
} 
static void _OnOpenSelectFnc(CWnd *pWnd){
	CSysPaperView *pVw = (CSysPaperView *)pWnd;
	pVw->OnOpenSelect();
} 
/*static void _OnDirectoryChangeFnc(CWnd *pWnd){
	((CSysPaperView *)pWnd)->OnDirectoryChange();
} */
/*static void _OnDirectorySetfocusFnc(CWnd *pWnd){
	((CSysPaperView *)pWnd)->OnDirectorySetfocus();} */ 
/*static void _OnDirectoryKillfocusFnc(CWnd *pWnd){
	((CSysPaperView *)pWnd)->OnDirectoryKillfocus();
} */
static int _OnDirectoryCheckValueFnc(CWnd *pWnd){
	return ((CSysPaperView *)pWnd)->OnDirectoryCheckValue();
} 
static void _OnbrowseSelectFnc(CWnd *pWnd){
	CSysPaperView *pVw = (CSysPaperView *)pWnd;
	pVw->OnbrowseSelect();
} 
static void _OnMaternityLeaveSelectFnc(CWnd *pWnd){
	  ((CSysPaperView*)pWnd)->OnMaternityLeaveSelect();
}
static void _OnProfileSumerySelectFnc(CWnd *pWnd){
	  ((CSysPaperView*)pWnd)->OnProfileSumerySelect();
}
static void _OnStatusSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CSysPaperView* )pWnd)->OnStatusSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStatusSelendokFnc(CWnd *pWnd){
	((CSysPaperView *)pWnd)->OnStatusSelendok();
}
/*static void _OnStatusSetfocusFnc(CWnd *pWnd){
	((CSysPaperView *)pWnd)->OnStatusKillfocus();
}*/
/*static void _OnStatusKillfocusFnc(CWnd *pWnd){
	((CSysPaperView *)pWnd)->OnStatusKillfocus();
}*/
static long _OnStatusLoadDataFnc(CWnd *pWnd){
	return ((CSysPaperView *)pWnd)->OnStatusLoadData();
}
/*static void _OnStatusAddNewFnc(CWnd *pWnd){
	((CSysPaperView *)pWnd)->OnStatusAddNew();
}*/
static int _OnAddSysPaperViewFnc(CWnd *pWnd){
	 return ((CSysPaperView*)pWnd)->OnAddSysPaperView();
} 
static int _OnEditSysPaperViewFnc(CWnd *pWnd){
	 return ((CSysPaperView*)pWnd)->OnEditSysPaperView();
} 
static int _OnDeleteSysPaperViewFnc(CWnd *pWnd){
	 return ((CSysPaperView*)pWnd)->OnDeleteSysPaperView();
} 
static int _OnSaveSysPaperViewFnc(CWnd *pWnd){
	 return ((CSysPaperView*)pWnd)->OnSaveSysPaperView();
} 
static int _OnCancelSysPaperViewFnc(CWnd *pWnd){
	 return ((CSysPaperView*)pWnd)->OnCancelSysPaperView();
} 
static int _OnMarkAllFnc(CWnd *pWnd){
	return ((CSysPaperView*)pWnd)->OnMarkAll();
}
static int _OnUnMarkAllFnc(CWnd *pWnd){
	return ((CSysPaperView*)pWnd)->OnUnMarkAll();
}
CSysPaperView::CSysPaperView(){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CSysPaperView::~CSysPaperView(){
}
void CSysPaperView::OnCreateComponents(){
	m_wndGrp1.Create(this, _T("Gửi chứng từ BHXH"), 4, 4, 1013, 123);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,94, 30, 214, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 10, 60, 90, 85);
	m_wndToDate.Create(this,95, 60, 215, 85); 
	m_wndDischargeSheet.Create(this, _T("Giấy RV"), 220, 30, 430, 55);
	m_wndBirthCertificate.Create(this, _T("Giấy chứng sinh"), 220, 60, 430, 85);
	m_wndInsuranceLeave.Create(this, _T("Giấy nghỉ BHXH"), 220, 92, 430, 117);
	m_wndLoad.Create(this, _T("&Load"), 934, 30, 1009, 55);
	m_wndExportXml.Create(this, _T("&Export XML"), 934, 60, 1009, 85);
	m_wndListPatient.Create(this,5, 133, 1014, 615); 
	m_wndOpen.Create(this, _T("Open Dir"), 558, 620, 638, 645);
	m_wndDirectory.Create(this,643, 620, 963, 645); 
	m_wndbrowse.Create(this, _T("@"), 969, 620, 998, 645);
	m_wndMaternityLeave.Create(this, _T("Giáy nghỉ thai sản"), 435, 30, 680, 55);
	m_wndProfileSumery.Create(this, _T("Tóm tắt BA"), 435, 60, 680, 85);
	m_wndStatusLabel.Create(this, _T("Status"), 685, 30, 805, 55);
	m_wndStatus.Create(this,810, 30, 930, 55); 
}
void CSysPaperView::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	m_wndDirectory.SetLimitText(1024);
	m_wndDirectory.SetCheckValue(true);
	m_wndStatus.SetCheckValue(true);
	m_wndStatus.LimitText(35);
	m_wndListPatient.GetHeaderControl()->SetItemHeight(4);
	m_wndListPatient.InsertColumn(0, _T("STT"), CFMT_TEXT, 50);
	m_wndListPatient.InsertColumn(1, _T("DocNo"), CFMT_TEXT, 80);
	m_wndListPatient.InsertColumn(2, _T("Patient Name"), CFMT_TEXT, 150);
	m_wndListPatient.InsertColumn(3, _T("Giấy RV"), CFMT_TEXT, 100);
	m_wndListPatient.InsertColumn(4, _T("Tóm tắt HSBA"), CFMT_TEXT, 100);
	m_wndListPatient.InsertColumn(5, _T("Giấy chứng sinh"), CFMT_TEXT, 100);
	m_wndListPatient.InsertColumn(6, _T("Giấy chứng nhận nghỉ BHXH"), CFMT_TEXT, 100);
	m_wndListPatient.InsertColumn(7, _T("Giấy nghỉ dưỡng thai"), CFMT_TEXT, 100);
	m_wndListPatient.SetCheckBox(true);

	m_wndStatus.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndStatus.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CSysPaperView::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndDischargeSheet.SetEvent(WE_CLICK, _OnDischargeSheetSelectFnc);
	m_wndBirthCertificate.SetEvent(WE_CLICK, _OnBirthCertificateSelectFnc);
	m_wndInsuranceLeave.SetEvent(WE_CLICK, _OnInsuranceLeaveSelectFnc);
	m_wndLoad.SetEvent(WE_CLICK, _OnLoadSelectFnc);
	m_wndExportXml.SetEvent(WE_CLICK, _OnExportXmlSelectFnc);
	m_wndListPatient.SetEvent(WE_SELCHANGE, _OnListPatientSelectChangeFnc);
	m_wndListPatient.SetEvent(WE_LOADDATA, _OnListPatientLoadDataFnc);
	m_wndListPatient.SetEvent(WE_DBLCLICK, _OnListPatientDblClickFnc);

	m_wndListPatient.AddEvent(1,_T("Mark All"), _OnMarkAllFnc);
	m_wndListPatient.AddEvent(0,_T("-"), NULL);
	m_wndListPatient.AddEvent(2,_T("UnMark"), _OnUnMarkAllFnc);
	m_wndListPatient.AddEvent(0,_T("-"), NULL);

	m_wndOpen.SetEvent(WE_CLICK, _OnOpenSelectFnc);
	//m_wndDirectory.SetEvent(WE_CHANGE, _OnDirectoryChangeFnc);
	//m_wndDirectory.SetEvent(WE_SETFOCUS, _OnDirectorySetfocusFnc);
	//m_wndDirectory.SetEvent(WE_KILLFOCUS, _OnDirectoryKillfocusFnc);
	m_wndDirectory.SetEvent(WE_CHECKVALUE, _OnDirectoryCheckValueFnc);
	m_wndbrowse.SetEvent(WE_CLICK, _OnbrowseSelectFnc);
	m_wndMaternityLeave.SetEvent(WE_CLICK, _OnMaternityLeaveSelectFnc);
	m_wndProfileSumery.SetEvent(WE_CLICK, _OnProfileSumerySelectFnc);
	m_wndStatus.SetEvent(WE_SELENDOK, _OnStatusSelendokFnc);
	//m_wndStatus.SetEvent(WE_SETFOCUS, _OnStatusSetfocusFnc);
	//m_wndStatus.SetEvent(WE_KILLFOCUS, _OnStatusKillfocusFnc);
	m_wndStatus.SetEvent(WE_SELCHANGE, _OnStatusSelectChangeFnc);
	m_wndStatus.SetEvent(WE_LOADDATA, _OnStatusLoadDataFnc);
	//m_wndStatus.SetEvent(WE_ADDNEW, _OnStatusAddNewFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddSysPaperViewFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditSysPaperViewFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteSysPaperViewFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveSysPaperViewFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelSysPaperViewFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_ADD);
	m_wndDirectory.EnableWindow(false);
	m_szDirectory=AfxGetApp()->GetProfileString(_T("VIMES_SYSINSURANCE_HSCT"), _T("Drirectory"));
	m_wndDirectory.SetWindowText(m_szDirectory);

}
void CSysPaperView::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Radio(pDX, m_wndDischargeSheet.GetDlgCtrlID(), m_nDischargeSheet);
	DDX_Radio(pDX, m_wndBirthCertificate.GetDlgCtrlID(), m_nBirthCertificate);
	DDX_Radio(pDX, m_wndInsuranceLeave.GetDlgCtrlID(), m_nInsuranceLeave);
	DDX_Text(pDX, m_wndDirectory.GetDlgCtrlID(), m_szDirectory);
	DDX_Radio(pDX, m_wndMaternityLeave.GetDlgCtrlID(), m_nMaternityLeave);
	DDX_Radio(pDX, m_wndProfileSumery.GetDlgCtrlID(), m_nProfileSumery);
	DDX_TextEx(pDX, m_wndStatus.GetDlgCtrlID(), m_szStatusKey);

}
void CSysPaperView::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("FromDate")] =  m_szFromDate;
	m_jData[_T("ToDate")] =  m_szToDate;
	m_jData[_T("DischargeSheet")] =  m_nDischargeSheet;
	m_jData[_T("BirthCertificate")] =  m_nBirthCertificate;
	m_jData[_T("InsuranceLeave")] =  m_nInsuranceLeave;
	m_jData[_T("Directory")] =  m_szDirectory;
	m_jData[_T("MaternityLeave")] =  m_nMaternityLeave;
	m_jData[_T("ProfileSumery")] =  m_nProfileSumery;
	m_jData[_T("Status")] =  m_szStatusKey;
	}
	else
	{
			
	m_jData[_T("FromDate")].GetValue(m_szFromDate);
	m_jData[_T("ToDate")].GetValue(m_szToDate);
	m_jData[_T("DischargeSheet")].GetValue(m_nDischargeSheet);
	m_jData[_T("BirthCertificate")].GetValue(m_nBirthCertificate);
	m_jData[_T("InsuranceLeave")].GetValue(m_nInsuranceLeave);
	m_jData[_T("Directory")].GetValue(m_szDirectory);
	m_jData[_T("MaternityLeave")].GetValue(m_nMaternityLeave);
	m_jData[_T("ProfileSumery")].GetValue(m_nProfileSumery);
	m_jData[_T("Status")].GetValue(m_szStatusKey);
	}

}
void CSysPaperView::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CSysPaperView::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CSysPaperView::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_nDischargeSheet=0;
	m_nBirthCertificate=1;
	m_nInsuranceLeave=1;
	//m_szDirectory.Empty();
	m_nMaternityLeave=1;
	m_nProfileSumery=1;
	m_szStatusKey.Empty();

}
int CSysPaperView::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1,2,3, -1);
 			SetDefaultValues();
			m_szFromDate = pMF->GetSysDate() + _T(" 00:00");
			m_szToDate = pMF->GetSysDate() + _T(" 23:59");
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
/*void CSysPaperView::OnFromDateChange(){
	
} */
/*void CSysPaperView::OnFromDateSetfocus(){
	
} */
/*void CSysPaperView::OnFromDateKillfocus(){
	
} */
int CSysPaperView::OnFromDateCheckValue(){
	return 0;
} 
/*void CSysPaperView::OnToDateChange(){
	
} */
/*void CSysPaperView::OnToDateSetfocus(){
	
} */
/*void CSysPaperView::OnToDateKillfocus(){
	
} */
int CSysPaperView::OnToDateCheckValue(){
	return 0;
} 
void CSysPaperView::OnDischargeSheetSelect(){
	
}
void CSysPaperView::OnBirthCertificateSelect(){
	
}
void CSysPaperView::OnInsuranceLeaveSelect(){
	
}
void CSysPaperView::OnLoadSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnListPatientLoadData();
	
} 
void CSysPaperView::OnExportXmlSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	int tmp=0;
	long docno=0;
	CString tmpStr,szType;
	int nRes=0;
	pMF->SetStatusText(_T("Ðang t?o file XML"),0);
	for(int i =0;i<m_wndListPatient.GetItemCount();i++)
	{
		if(m_wndListPatient.GetCheck(i))
		{	
			long nDocumentNo =0;
			nDocumentNo=str2long(m_wndListPatient.GetItemText(i,1));
			nRes = pMF->OnWriteHoSoGiayTo(nDocumentNo,0,m_szType);	
			tmp++;
		}

	}
	pMF->SetStatusText(_T("Hoàn Thành t?o file XML t?ng b?nh nhân "),0);
	return ;
	
} 
void CSysPaperView::OnListPatientDblClick(){
	
} 
void CSysPaperView::OnListPatientSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CSysPaperView::OnListPatientDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CSysPaperView::OnListPatientLoadData(){

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL,tmpStr,szToDate,szWhere;
	m_wndListPatient.BeginLoad(); 
	int nCount = 0;
	UpdateData(true);
	szToDate = m_szToDate.Left(17);
	szToDate += _T("59");
	m_szType.Empty();
	if(m_nDischargeSheet ==0 )
	{
		szWhere.Format(_T(" and ct03='X' "));
		m_szType = _T("CT03");
	}
	if(m_nProfileSumery ==0)
	{
		szWhere.Format(_T(" and ct04='X' "));
		m_szType= _T("CT04");
	}
	if(m_nBirthCertificate ==0)
	{
		szWhere.Format(_T(" and ct05='X' "));
		m_szType= _T("CT05");
	}
	if(m_nMaternityLeave ==0)
	{
		szWhere.Format(_T(" and ct06='X' "));
		m_szType= _T("CT06");
	}
	if(m_nInsuranceLeave ==0)
	{
		szWhere.Format(_T(" and ct07='X' "));
		m_szType= _T("CT07");
	}

		szSQL.Format(_T("SELECT * from ( SELECT") \
					_T("      hcr_docno as docno,get_patientname(hcr_docno) as pname, ") \
					_T("      'X' as CT03,") \
					_T("      'X' as CT04,") \
					_T("      case when hbc_docno >0 then 'X' else null end as CT05,") \
					_T("      case when hc_docno >0 and hc_isthaisan='N' then 'X' else null end as CT07,  ") \
					_T("      case when hc_docno >0 and hc_isthaisan='Y' then 'X' else null end as CT06  ") \
					_T("  FROM") \
					_T("      vimes.hms_clinical_record") \
					_T("	 LEFT JOIN hms_doc on (hd_docno= hcr_docno) ") \
					_T("      left join hms_birthcertificate on (hbc_docno = hcr_docno)") \
					_T("      left join HMS_CHUNGNHANNGHIVIEC on (hc_docno = hcr_docno)") \
					_T("  WHERE hcr_status='T'  and  length(hd_cardno)>=15 ") \
					_T("      and hcr_dischargedate BETWEEN to_timestamp('%s','YYYY/MM/DD HH24:Mi:SS') ") \
					_T("         AND to_timestamp('%s','YYYY/MM/DD HH24:Mi:SS')") \
					_T(" UNION ALL") \
					_T(" SELECT") \
					_T("      hd_docno ,get_patientname(hd_docno) as pname, ") \
					_T("      '' as CT03,") \
					_T("      '' as CT04,") \
					_T("      case when hbc_docno >0 then 'X' else null end as CT05,") \
					_T("      case when hc_docno >0 and hc_isthaisan='N' then 'X' else null end as CT07,  ") \
					_T("      case when hc_docno >0 and hc_isthaisan='Y' then 'X' else null end as CT06  ") \
					_T("  FROM") \
					_T("      hms_doc") \
					_T("      left join hms_birthcertificate on (hbc_docno = hd_docno)") \
					_T("      left join HMS_CHUNGNHANNGHIVIEC on (hc_docno = hd_docno)") \
					_T("  WHERE 1=1 ") \
					_T("     and hd_enddate BETWEEN to_timestamp('%s','YYYY/MM/DD HH24:Mi:SS') ") \
					_T("     AND to_timestamp('%s','YYYY/MM/DD HH24:Mi:SS')  and (length(hd_cardno)>=15 or hc_cardno is not null ) ") \
					_T("      and hd_status='T' and hd_suggestion not in ('D','C') and (hbc_docno >0 or  hc_docno >0)  )  tbl  ") \
					_T("   where 1=1 %s    ") , m_szFromDate, szToDate, m_szFromDate, szToDate,szWhere );
	nCount = rs.ExecSQL(szSQL);
	//_msg(_T("%s"),szSQL);
	int tmpInt =1;
	while(!rs.IsEOF()){ 
		tmpStr.Format(_T("%d"),tmpInt++);
		nCount = m_wndListPatient.AddItems(
			tmpStr,
			rs.GetValue(_T("docno")),
			rs.GetValue(_T("pname")),
			rs.GetValue(_T("CT03")),
			rs.GetValue(_T("CT04")),
			rs.GetValue(_T("CT05")),
			rs.GetValue(_T("CT07")),
			rs.GetValue(_T("CT06")),
			NULL
			);
		m_wndListPatient.SetCheck(nCount,true);

		rs.MoveNext();
	}
	m_wndListPatient.EndLoad(); 
	return nCount;
}
void CSysPaperView::OnOpenSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
		ShellExecute(NULL, _T("open"), m_szDirectory, NULL, NULL,SW_SHOW);
} 
/*void CSysPaperView::OnDirectoryChange(){
	
} */
/*void CSysPaperView::OnDirectorySetfocus(){
	
} */
/*void CSysPaperView::OnDirectoryKillfocus(){
	
} */
int CSysPaperView::OnDirectoryCheckValue(){
	return 0;
} 
void CSysPaperView::OnbrowseSelect(){
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
		CString szPath= _T("");
		::GetFolder(szPath, "Select Folder",NULL);
		if(!szPath.IsEmpty())
		{
			m_szDirectory=szPath;
			UpdateData(false);
			AfxGetApp()->WriteProfileString(_T("VIMES_SYSINSURANCE_HSCT"), _T("Drirectory"), m_szDirectory);
		}
	
} 
void CSysPaperView::OnMaternityLeaveSelect(){
	
}
void CSysPaperView::OnProfileSumerySelect(){
	
}
void CSysPaperView::OnStatusSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CSysPaperView::OnStatusSelendok(){
	 
}
/*void CSysPaperView::OnStatusSetfocus(){
	
}*/
/*void CSysPaperView::OnStatusKillfocus(){
	
}*/
long CSysPaperView::OnStatusLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndStatus.IsSearchKey() && !m_szStatusKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szStatusKey
};
	m_wndStatus.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndStatus.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CSysPaperView::OnStatusAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
int CSysPaperView::OnAddSysPaperView(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CSysPaperView::OnEditSysPaperView(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CSysPaperView::OnDeleteSysPaperView(){
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
 		OnCancelSysPaperView();
 	}
	return 0;
}
int CSysPaperView::OnSaveSysPaperView(){
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
 		//OnSysPaperViewListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CSysPaperView::OnCancelSysPaperView(){
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
int CSysPaperView::OnSysPaperViewListLoadData(){
	return 0;
}

int CSysPaperView::OnMarkAll()
{
	for (int i =0; i < m_wndListPatient.GetItemCount(); i++)
	{
		m_wndListPatient.SetCheck(i, TRUE);
	}
	return 0;
}

int CSysPaperView::OnUnMarkAll()
{
	for (int i =0; i < m_wndListPatient.GetItemCount(); i++)
	{
		m_wndListPatient.SetCheck(i, FALSE);
	}
	return 0;
}