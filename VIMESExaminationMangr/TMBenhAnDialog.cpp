#include "TMBenhAnDialog.h"
#include "MainFrm.h"
#include ".\tmbenhandialog.h"
static void _OnTabSelectChangeFnc(CWnd *pWnd, int nOld, int nNew){
	((CTMBenhAnDialog*)pWnd)->OnTabSelectChange(nOld, nNew);
}

static void _OnUpdateSelectFnc(CWnd *pWnd){
	CTMBenhAnDialog *pVw = (CTMBenhAnDialog *)pWnd;
	pVw->OnUpdateSelect();
}


static void _OnSaveSelectFnc(CWnd *pWnd){
	CTMBenhAnDialog *pVw = (CTMBenhAnDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CTMBenhAnDialog *pVw = (CTMBenhAnDialog *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CTMBenhAnDialog *pVw = (CTMBenhAnDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddTMBenhAnDialogFnc(CWnd *pWnd){
	 return ((CTMBenhAnDialog*)pWnd)->OnAddTMBenhAnDialog();
} 
static int _OnEditTMBenhAnDialogFnc(CWnd *pWnd){
	 return ((CTMBenhAnDialog*)pWnd)->OnEditTMBenhAnDialog();
} 
static int _OnDeleteTMBenhAnDialogFnc(CWnd *pWnd){
	 return ((CTMBenhAnDialog*)pWnd)->OnDeleteTMBenhAnDialog();
} 
static int _OnSaveTMBenhAnDialogFnc(CWnd *pWnd){
	 return ((CTMBenhAnDialog*)pWnd)->OnSaveTMBenhAnDialog();
} 
static int _OnCancelTMBenhAnDialogFnc(CWnd *pWnd){
	 return ((CTMBenhAnDialog*)pWnd)->OnCancelTMBenhAnDialog();
} 

CTMBenhAnDialog::CTMBenhAnDialog(CWnd *pParent, int nMode, long nDocNo, CString szRecordNo):
	CGuiDialog(pParent){
	m_nDlgWidth = 980;
	m_nDlgHeight = 630;
	SetDefaultValues();

	m_wndPhanHoiBenh = new CPhanHoiBenh(pParent, nMode, nDocNo, szRecordNo);
	m_wndPhanKhamBenh = new CPhanKhamBenh(pParent, nMode, nDocNo, szRecordNo);
	m_wndChuyenKhoa = new CPhanKhamChuyenKhoa(pParent, nMode, nDocNo, szRecordNo);
	m_wndPhanKetLuan = new CPhanKetLuan(pParent, nMode, nDocNo, szRecordNo);
}
CTMBenhAnDialog::~CTMBenhAnDialog(){

}
void CTMBenhAnDialog::OnCreateComponents(){
	m_wndTab.Create(this,5, 5, 970, 610); 
	m_wndUpdate.Create(this, _T("&Update"), 620, 615, 705, 640);
	m_wndSave.Create(this, _T("&Save"), 710, 615, 790, 640);
	m_wndPrint.Create(this, _T("&Print"), 795, 615, 875, 640);
	m_wndClose.Create(this, _T("&Close"), 880, 615, 960, 640);

}
void CTMBenhAnDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
// 	m_wndPhanHoiBenh.Create(&m_wndTab);
// 	m_wndPhanKhamBenh.Create(&m_wndTab);
// 	m_wndPhanKetLuan.Create(&m_wndTab);
	m_wndPhanHoiBenh->Create(&m_wndTab);
	m_wndPhanKhamBenh->Create(&m_wndTab);
	m_wndChuyenKhoa->Create(&m_wndTab);
	m_wndPhanKetLuan->Create(&m_wndTab);
// 	m_wndTab.Add(_T("I. Phan Hoi Benh"), &m_wndPhanHoiBenh);
// 	m_wndTab.Add(_T("II. Phan Kham Benh"), &m_wndPhanKhamBenh);
// 	m_wndTab.Add(_T("III. Phan Ket Luan"), &m_wndPhanKetLuan);
	m_wndTab.Add(_T("I. Ph\x1EA7n H\x1ECFi \x42\x1EC7nh"), m_wndPhanHoiBenh);
	m_wndTab.Add(_T("II. Ph\x1EA7n Kh\xE1m \x42\x1EC7nh"), m_wndPhanKhamBenh);
	m_wndTab.Add(_T("III. Ph\x1EA7n kh\xE1m \x63huy\xEAn kho\x61"), m_wndChuyenKhoa);
	m_wndTab.Add(_T("IV. Ph\x1EA7n K\x1EBFt Lu\x1EADn"), m_wndPhanKetLuan);
}
void CTMBenhAnDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndTab.SetEvent(WE_SELCHANGE, _OnTabSelectChangeFnc);
	m_wndUpdate.SetEvent(WE_CLICK, _OnUpdateSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndTab.SetCurSel(0);
	m_wndPhanHoiBenh->OnInitDialog();
	m_wndPhanKhamBenh->OnInitDialog();
	m_wndChuyenKhoa->OnInitDialog();
	m_wndPhanKetLuan->OnInitDialog();
	GetDataToScreen();
	
}
void CTMBenhAnDialog::OnDoDataExchange(CDataExchange* pDX){

}
void CTMBenhAnDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	}
	else
	{
			
	}

}
void CTMBenhAnDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT count(*) FROM hms_doc_emr WHERE hde_docno=%ld and hde_type='BENH_AN'"), pMF->m_nDocumentNo);
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() > 0)
	{
		SetMode(VM_VIEW);
	}
	else
	{
		SetMode(VM_EDIT);
	}

}
void CTMBenhAnDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CTMBenhAnDialog::SetDefaultValues(){


}
int CTMBenhAnDialog::SetMode(int nMode){
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
 			EnableButtons(TRUE, 1, 3,  -1);
			
 			break;
 		case VM_VIEW: 
 			EnableControls(FALSE);
 			EnableButtons(TRUE, 0, 2, 3,  -1);
 			break;
 		case VM_NONE: 
 			EnableControls(FALSE);
 			EnableButtons(TRUE, 0, 6, -1);
 			SetDefaultValues();
 			break;
 		};
		m_wndPhanHoiBenh->SetMode(nMode);
		m_wndPhanKhamBenh->SetMode(nMode);
		m_wndChuyenKhoa->SetMode(nMode);
		m_wndPhanKetLuan->SetMode(nMode);
 		UpdateData(FALSE);
 		return nOldMode;
}
void CTMBenhAnDialog::OnTabSelectChange(int nOld, int nNew){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 

void CTMBenhAnDialog::OnUpdateSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	SetMode(VM_EDIT);
} 

void CTMBenhAnDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
// 	m_wndPhanHoiBenh.OnSavePhanHoiBenh();
// 	m_wndPhanKhamBenh.OnSavePhanKhamBenh();
// 	m_wndPhanKetLuan.OnSavePhanKetLuan();
	m_wndPhanHoiBenh->OnSavePhanHoiBenh();
	m_wndPhanKhamBenh->OnSavePhanKhamBenh();
	m_wndChuyenKhoa->OnSavePhanKhamChuyenKhoa();
	m_wndPhanKetLuan->OnSavePhanKetLuan();
	//MessageBox(_T("Data Saved"));
	SetMode(VM_VIEW);
} 

#include "HMSReportForms/PrintForms.h"

void CTMBenhAnDialog::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	CPrintForms printer;
	CStringArray info;
	CString szDocNo;
	szDocNo.Format(_T("%ld"), pMF->m_nDocumentNo);
	info.Add(szDocNo);
	info.Add(pMF->m_szDept);
	info.Add(pMF->m_CompanyInfo.sc_pname);
	info.Add(pMF->m_CompanyInfo.sc_pname);
	printer.PrintMedicalFileEx(info, true);
	return;

	CReport rpt;
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CReportSection *rptHeader = NULL, *rptDetail = NULL, *rptFooter = NULL, *rptGroupHeader = NULL;
	CString szSQL, tmpStr, szDate, szWhere, szDoctorDept, szSubSelect;
	int nIdx = 1;

	if (!rpt.Init(_T("Reports\\HMS\\TM_BENHAN.RPT")))
		return;

	rptHeader = rpt.GetReportHeader();

	rptGroupHeader = rpt.AddDetail(rpt.GetGroupHeader(1));
	tmpStr.Format(rptGroupHeader->GetValue(_T("1")), m_wndPhanHoiBenh->m_szvaoluc.Mid(11, 5), m_wndPhanHoiBenh->m_szvaoluc.Mid(8, 2), m_wndPhanHoiBenh->m_szvaoluc.Mid(5, 2), m_wndPhanHoiBenh->m_szvaoluc.Left(4));
	rptGroupHeader->SetValue(_T("1"), tmpStr);
	rptGroupHeader->SetValue(_T("2"), m_wndPhanHoiBenh->m_szlido);
	tmpStr.Format(rptGroupHeader->GetValue(_T("3")), m_wndPhanHoiBenh->m_nvaongay);
	rptGroupHeader->SetValue(_T("3"), tmpStr);

	rptGroupHeader = rpt.AddDetail(rpt.GetGroupHeader(2));
	rptGroupHeader->SetValue(_T("4"), m_wndPhanHoiBenh->m_szbenhsu);

	rptGroupHeader = rpt.AddDetail(rpt.GetGroupHeader(3));
	rptGroupHeader->SetValue(_T("5"), m_wndPhanHoiBenh->m_szbthan);

	rptGroupHeader = rpt.AddDetail(rpt.GetGroupHeader(4));
	rptGroupHeader->SetValue(_T("6"), m_wndPhanHoiBenh->m_szgdinh);

	rptGroupHeader = rpt.AddDetail(rpt.GetGroupHeader(5));
	rptGroupHeader->SetValue(_T("7"), m_wndPhanKhamBenh->m_sztthan);
	rptGroupHeader->SetValue(_T("8"), m_wndPhanKhamBenh->m_nmach);
	rptGroupHeader->SetValue(_T("9"), m_wndPhanKhamBenh->m_nndo);
	rptGroupHeader->SetValue(_T("10"), m_wndPhanKhamBenh->m_nhap);
	rptGroupHeader->SetValue(_T("11"), m_wndPhanKhamBenh->m_nntho);
	rptGroupHeader->SetValue(_T("12"), m_wndPhanKhamBenh->m_nccao);
	rptGroupHeader->SetValue(_T("13"), m_wndPhanKhamBenh->m_ncnang);

	rptGroupHeader = rpt.AddDetail(rpt.GetGroupHeader(6));
	rptGroupHeader->SetValue(_T("14"), m_wndPhanKhamBenh->m_szthoan);

	rptGroupHeader = rpt.AddDetail(rpt.GetGroupHeader(7));
	rptGroupHeader->SetValue(_T("15"), m_wndPhanKhamBenh->m_szhhap);

	rptGroupHeader = rpt.AddDetail(rpt.GetGroupHeader(8));
	rptGroupHeader->SetValue(_T("16"), m_wndPhanKhamBenh->m_szthoa);

	rptGroupHeader = rpt.AddDetail(rpt.GetGroupHeader(9));
	rptGroupHeader->SetValue(_T("17"), m_wndPhanKhamBenh->m_sztnieu);

	rptGroupHeader = rpt.AddDetail(rpt.GetGroupHeader(10));
	rptGroupHeader->SetValue(_T("18"), m_wndPhanKhamBenh->m_szttkinh);

	rptGroupHeader = rpt.AddDetail(rpt.GetGroupHeader(11));
	rptGroupHeader->SetValue(_T("19"), m_wndPhanKhamBenh->m_szcxkhop);

	rptGroupHeader = rpt.AddDetail(rpt.GetGroupHeader(12));
	rptGroupHeader->SetValue(_T("20"), m_wndPhanKhamBenh->m_szckkhac);

	rptGroupHeader = rpt.AddDetail(rpt.GetGroupHeader(13));
	rptGroupHeader->SetValue(_T("21"), m_wndPhanKhamBenh->m_szblkhac);

	rptGroupHeader = rpt.AddDetail(rpt.GetGroupHeader(14));
	rptGroupHeader->SetValue(_T("22"), m_wndPhanKhamBenh->m_szxnghiem);

	rptGroupHeader = rpt.AddDetail(rpt.GetGroupHeader(15));
	rptGroupHeader->SetValue(_T("23"), m_wndPhanKetLuan->m_szbenhan);

	rptGroupHeader = rpt.AddDetail(rpt.GetGroupHeader(16));
	rptGroupHeader->SetValue(_T("24"), m_wndPhanKetLuan->m_szcdsb);

	rptGroupHeader = rpt.AddDetail(rpt.GetGroupHeader(17));
	rptGroupHeader->SetValue(_T("25"), m_wndPhanKetLuan->m_szcdpb);

	rptGroupHeader = rpt.AddDetail(rpt.GetGroupHeader(18));
	rptGroupHeader->SetValue(_T("26"), m_wndPhanKetLuan->m_szcdxd);

	rptGroupHeader = rpt.AddDetail(rpt.GetGroupHeader(19));
	rptGroupHeader->SetValue(_T("27"), m_wndPhanKetLuan->m_szkhxn);

	rptGroupHeader = rpt.AddDetail(rpt.GetGroupHeader(20));
	rptGroupHeader->SetValue(_T("28"), m_wndPhanKetLuan->m_szkhdt);

	rptGroupHeader = rpt.AddDetail(rpt.GetGroupHeader(21));
	rptGroupHeader->SetValue(_T("29"), m_wndPhanKetLuan->m_sztluong);

	rptDetail = rpt.AddDetail();
	rptFooter = rpt.GetReportFooter();
	EndWaitCursor();
	rpt.PrintPreview();
	
} 
void CTMBenhAnDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CTMBenhAnDialog::OnAddTMBenhAnDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CTMBenhAnDialog::OnEditTMBenhAnDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CTMBenhAnDialog::OnDeleteTMBenhAnDialog(){
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
 		OnCancelTMBenhAnDialog();
 	}
	return 0;
}
int CTMBenhAnDialog::OnSaveTMBenhAnDialog(){
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
 		//OnTMBenhAnDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CTMBenhAnDialog::OnCancelTMBenhAnDialog(){
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
int CTMBenhAnDialog::OnTMBenhAnDialogListLoadData(){
	return 0;
}
BEGIN_MESSAGE_MAP(CTMBenhAnDialog, CGuiDialog)
	ON_WM_DESTROY()
END_MESSAGE_MAP()

void CTMBenhAnDialog::OnDestroy()
{
	CGuiDialog::OnDestroy();

	/*delete m_wndPhanHoiBenh;
	delete m_wndPhanKhamBenh;
	delete m_wndPhanKetLuan;*/
}
