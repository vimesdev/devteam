#include "TMBenhAnDialog.h"
#include "MainFrm.h"
#include ".\tmbenhandialog.h"
static int _OnTabSelectChangeFnc(CWnd *pWnd, int nOld, int nNew){
	return ((CTMBenhAnDialog*)pWnd)->OnTabSelectChange(nOld, nNew);
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

static void _OnTreatTimeSelectFnc(CWnd *pWnd){
	CTMBenhAnDialog *pVw = (CTMBenhAnDialog *)pWnd;
	pVw->OnTreatTimeSelect();
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

CTMBenhAnDialog::CTMBenhAnDialog(CWnd *pParent, int nMode, long nDocNo, CString szRecordNo, CString szCancer, int nHtrIdx, int nCancerTime):
	CGuiDialog(pParent){
	m_nDlgWidth = 980;
	m_nDlgHeight = 630;
	SetDefaultValues();
	m_nMode = nMode;
	m_nDocNo = nDocNo;
	m_szRecordNo = szRecordNo;
	m_szCancer = szCancer;
	m_nHtrIdx = nHtrIdx;
	m_nCancerTime = nCancerTime;
	
	
}
CTMBenhAnDialog::~CTMBenhAnDialog(){

}
void CTMBenhAnDialog::OnCreateComponents(){
	
	m_wndTab.Create(this, 5, 5, 970, 610); 
	m_wndUpdate.Create(this, _T("&Update"), 620, 615, 705, 640);
	m_wndSave.Create(this, _T("&Save"), 710, 615, 790, 640);
	m_wndPrint.Create(this, _T("&Print"), 795, 615, 875, 640);
	m_wndClose.Create(this, _T("&Close"), 880, 615, 960, 640);

	m_wndTreatTime.Create(this, _T("Lần điều trị"), 5, 615, 150, 640);

}
void CTMBenhAnDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
// 	m_wndPhanHoiBenh.Create(&m_wndTab);
// 	m_wndPhanKhamBenh.Create(&m_wndTab);
// 	m_wndPhanKetLuan.Create(&m_wndTab);
	m_wndPhanHoiBenh.Create(&m_wndTab);
	m_wndPhanKhamBenh.Create(&m_wndTab);
	m_wndChuyenKhoa.Create(&m_wndTab);
// 	m_wndTab.Add(_T("I. Phan Hoi Benh"), &m_wndPhanHoiBenh);
// 	m_wndTab.Add(_T("II. Phan Kham Benh"), &m_wndPhanKhamBenh);
// 	m_wndTab.Add(_T("III. Phan Ket Luan"), &m_wndPhanKetLuan);
	m_wndTab.Add(_T("I. Phần Hỏi Bệnh"), &m_wndPhanHoiBenh);
	m_wndTab.Add(_T("II. Phần Khám Bệnh"), &m_wndPhanKhamBenh);
	m_wndTab.Add(_T("III. Phần khám chuyên khoa"), &m_wndChuyenKhoa);
	
	m_wndPhanKetLuan.Create(&m_wndTab);
	m_wndPhanKetLuan_UngThuTuLan2.Create(&m_wndTab);
	m_wndPhanKetLuan.ShowWindow(SW_HIDE);
	m_wndPhanKetLuan_UngThuTuLan2.ShowWindow(SW_HIDE);
	if (m_szCancer == _T("Y") && m_nCancerTime > 1)
	{
		m_wndTab.Add(_T("IV. Bệnh án ung thư từ lần 2"), &m_wndPhanKetLuan_UngThuTuLan2);
		
	}
	else
	{
		
		m_wndTab.Add(_T("IV. Phần Kết Luận"), &m_wndPhanKetLuan);
	}


	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT htr_treattime FROM hms_treatment_record WHERE htr_docno = %ld and  htr_idx=%d "),
		m_nDocNo,  pMF->m_nRefIndex);
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("htr_treattime"), m_nTreatTime);
	CString szLabel;
	szLabel.Format(_T("Lần điều trị thứ (%d)"),  m_nTreatTime);
	m_wndTreatTime.SetWindowText(szLabel);
	m_wndTreatTime.ModifyStyle(WS_TABSTOP, 0);
	m_nHtrIdx = pMF->m_nRefIndex;

	m_wndPhanHoiBenh.Init(m_nMode, m_nDocNo, m_szRecordNo, m_nHtrIdx, m_nTreatTime);
	m_wndPhanKhamBenh.Init(m_nMode, m_nDocNo, m_szRecordNo, m_nHtrIdx, m_nTreatTime);
	m_wndChuyenKhoa.Init(m_nMode, m_nDocNo, m_szRecordNo, m_nHtrIdx, m_nTreatTime);
	m_wndPhanKetLuan_UngThuTuLan2.Init(m_nMode, m_nDocNo, m_szRecordNo, m_nHtrIdx, m_nCancerTime, m_nTreatTime);
	m_wndPhanKetLuan.Init(m_nMode, m_nDocNo, m_szRecordNo, m_nHtrIdx, m_nCancerTime, m_nTreatTime);

}
void CTMBenhAnDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndTab.SetEvent(WE_SELCHANGE, _OnTabSelectChangeFnc);
	m_wndUpdate.SetEvent(WE_CLICK, _OnUpdateSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndTreatTime.SetEvent(WE_CLICK, _OnTreatTimeSelectFnc);
	m_wndTab.SetCurSel(0);
	m_wndPhanHoiBenh.OnInitDialog();
	m_wndPhanKhamBenh.OnInitDialog();
	m_wndChuyenKhoa.OnInitDialog();

	if (m_szCancer == _T("Y") && m_nCancerTime > 1)
	{
		m_wndPhanKetLuan_UngThuTuLan2.OnInitDialog();
	}
	else
	{
		m_wndPhanKetLuan.OnInitDialog();
	}


	GetDataToScreen();
	
	if(pMF->m_szStatus == _T("T"))
		m_wndUpdate.EnableWindow(FALSE);


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
	if(!rs.GetIntValue() > 0)
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
		m_wndPhanHoiBenh.SetMode(nMode);
		m_wndPhanKhamBenh.SetMode(nMode);
		m_wndChuyenKhoa.SetMode(nMode);
		m_wndPhanKetLuan_UngThuTuLan2.SetMode(nMode);
		m_wndPhanKetLuan.SetMode(nMode);

		m_wndTreatTime.EnableWindow(TRUE);
		UpdateData(FALSE);
 		return nOldMode;
}
int CTMBenhAnDialog::OnTabSelectChange(int nOld, int nNew){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(GetMode() != VM_VIEW)
	{
		ShowMessageBox(_T("Dữ liệu chưa được lưu. Vui lòng lưu dữ liệu trước khi chuyển tab"));
		m_wndTab.SelectAt(-1);
		m_wndTab.SelectAt(nOld);
		return -1;
	}
	return 0;
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
	int nCurSel = m_wndTab.GetCurSel();
	if(nCurSel < 0)
		return;

	if(nCurSel == 0)
		m_wndPhanHoiBenh.OnSavePhanHoiBenh();
	if(nCurSel == 1)
		m_wndPhanKhamBenh.OnSavePhanKhamBenh();
	if(nCurSel == 2)
		m_wndChuyenKhoa.OnSavePhanKhamChuyenKhoa();
	if(nCurSel == 3)
	{
		if (m_wndPhanKetLuan_UngThuTuLan2.IsWindowVisible() && m_szCancer == _T("Y") && m_nCancerTime > 1)
		{
			m_wndPhanKetLuan_UngThuTuLan2.OnSavePhanKetLuan_UngThuTuLan2();
		}
		else if(m_wndPhanKetLuan.IsWindowVisible())
		{ 
			m_wndPhanKetLuan.OnSavePhanKetLuan();
		}
	}
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
	info.Add(m_szCancer);
	info.Add(int2str(m_nTreatTime));
	info.Add(int2str(m_nCancerTime));
	info.Add(m_wndChuyenKhoa.m_szMedicalTypeKey);
	printer.PrintMedicalFile(info, true);
	
} 
void CTMBenhAnDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
}

void CTMBenhAnDialog::OnTreatTimeSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;

	
	
	szSQL.Format(_T("SELECT distinct htr_treattime, htr_cancer_time FROM hms_treatment_record WHERE htr_docno = %ld ORDER BY htr_treattime "), m_nDocNo);
	
	int nTreatTime;
	int n = 0;
	int count = rs.ExecSQL(szSQL);
	if(count <= 1)
		return;

	CGuiMenu menu(this);
	CRect rect;
	int nPos;	
	menu.CreatePopupMenu();
	CString tmpStr;
	int nCancerTime;
	CMap<int,int, int, int> mapCancerTime;
	while(!rs.IsEOF())
	{
		rs.GetValue(_T("htr_treattime"), nTreatTime);
		rs.GetValue(_T("htr_cancer_time"), nCancerTime);
		if(nTreatTime <= 0)
			nTreatTime = 1;
		if(m_szCancer == _T("Y"))
		{
			tmpStr.Format(_T("Lần điều trị thứ (%d) && Lần ung thư (%d)              ."), nTreatTime,nCancerTime);
		}
		else
			tmpStr.Format(_T("Lần điều trị thứ (%d)"), nTreatTime);
		menu.AppendMenu(MF_BYPOSITION, nTreatTime, tmpStr);
		mapCancerTime[nTreatTime] = nCancerTime;

		rs.MoveNext();
	}
	
	m_wndTreatTime.GetWindowRect(&rect);
	menu.MakeOwnerDraw(FALSE);
	nPos = menu.TrackPopupMenu(TPM_NONOTIFY|TPM_RETURNCMD|TPM_RIGHTALIGN|TPM_TOPALIGN, rect.right, rect.top-25*(n+2), this);
	if(nPos >= 1)
	{
		tmpStr.Format(_T("Lần điều trị thứ (%d)"), nPos);
		m_wndTreatTime.SetWindowText(tmpStr);
		m_nTreatTime = nPos;
		if(m_szCancer == _T("Y"))
		{
			m_nCancerTime = mapCancerTime[m_nTreatTime];
		}

		m_wndPhanHoiBenh.Refresh(m_nTreatTime);
		m_wndPhanKhamBenh.Refresh(m_nTreatTime);
		m_wndPhanKetLuan.Refresh(m_nTreatTime);
		m_wndChuyenKhoa.Refresh(m_nTreatTime);
		m_wndPhanKetLuan_UngThuTuLan2.Refresh(m_nTreatTime);	


	}
	


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

}
