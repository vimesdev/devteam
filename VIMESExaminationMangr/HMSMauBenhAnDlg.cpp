#include "HMSMauBenhAnDlg.h"
#include "MainFrm.h"
#include "HMSMainFrame.h"
#include "HMS_OBABenhNhanGhepThan.h"
#include "HMS_OBAChuyenKhoaXaTriXaPhau.h"
#include "HMS_OBADTBenhSuyTim.h"
#include "HMS_OBADTCuongGiapIODEPhongXa.h"
#include "HMS_OBADTDauThatNgucOnDinh.h"
#include "HMS_OBADTParkinsonDongKinh.h"
#include "HMS_OBADTParkinsonDongKinh1.h"
#include "HMS_OBADTParkinsonDongKinh2.h"
#include "HMS_OBADTPhoiTacNghenManTinh.h"
#include "HMS_OBAKhoaRang.h"
#include "HMS_OBAKhoaRang2.h"
#include "HMSDanhGiaTheoDoiSauInplant.h"
#include "HMSDanhGiaTheoDoiSauInplant2.h"
#include "HMSDanhGiaTheoDoiSauInplant3.h"
#include "HMSDanhGiaTheoDoiSauInplant4.h"
#include "HMSDanhGiaTheoDoiSauInplant51.h"
#include "HMSDanhGiaTheoDoiSauInplant52.h"
#include "HMSDanhGiaTheoDoiSauInplant53.h"
#include "HMSDanhGiaTheoDoiSauInplant54.h"
#include "HMS_OBAKhoaRangTab.h"
#include "HMS_OBAParkinsonTab.h"
#include ".\hmsmaubenhandlg.h"
#include "HMS_OBARFA.h"

static void _OnUpdateSelectFnc(CWnd *pWnd)
{
	((CHMSMauBenhAnDlg*)pWnd)->OnUpdateSelect();
}


static void _OnSaveSelectFnc(CWnd *pWnd)
{
	((CHMSMauBenhAnDlg*)pWnd)->OnSaveSelect();
}


static void _OnPrintSelectFnc(CWnd *pWnd)
{
	((CHMSMauBenhAnDlg*)pWnd)->OnPrintSelect();
}

static void _OnTerminateSelectFnc(CWnd *pWnd)
{
	((CHMSMauBenhAnDlg*)pWnd)->OnTerminateSelect();
}


static void _OnDiscardSelectFnc(CWnd *pWnd)
{
	((CHMSMauBenhAnDlg*)pWnd)->OnDiscardSelect();
}


static void _OnCloseSelectFnc(CWnd *pWnd)
{
	((CHMSMauBenhAnDlg*)pWnd)->OnCloseSelect();
}

static void _OnReportGroupSelectChangeFnc(CWnd *pWnd, int nNew){
	((CHMSMauBenhAnDlg*)pWnd->GetParent())->OnReportGroupSelectChange(nNew);
}

static int _OnItemSelectFnc(CWnd *pWnd, int nOld, int nNew)
{
	return ((CHMSMauBenhAnDlg*)pWnd)->OnItemSelect(nOld, nNew);
}

static int _OnAddHMSMauBenhAnDlgFnc(CWnd *pWnd){
	 return ((CHMSMauBenhAnDlg*)pWnd)->OnAddHMSMauBenhAnDlg();
} 
static int _OnEditHMSMauBenhAnDlgFnc(CWnd *pWnd){
	 return ((CHMSMauBenhAnDlg*)pWnd)->OnEditHMSMauBenhAnDlg();
} 
static int _OnDeleteHMSMauBenhAnDlgFnc(CWnd *pWnd){
	 return ((CHMSMauBenhAnDlg*)pWnd)->OnDeleteHMSMauBenhAnDlg();
} 
static int _OnSaveHMSMauBenhAnDlgFnc(CWnd *pWnd){
	 return ((CHMSMauBenhAnDlg*)pWnd)->OnSaveHMSMauBenhAnDlg();
} 
static int _OnCancelHMSMauBenhAnDlgFnc(CWnd *pWnd){
	 return ((CHMSMauBenhAnDlg*)pWnd)->OnCancelHMSMauBenhAnDlg();
} 
CHMSMauBenhAnDlg::CHMSMauBenhAnDlg(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
	m_nRecordIdx = 0;
}
CHMSMauBenhAnDlg::~CHMSMauBenhAnDlg(){
	
}
void CHMSMauBenhAnDlg::OnCreateComponents(){

	m_wndReportGroup.Create(this, CRect(5, 5, 1010, 580)); 
	CListPane* pane = m_wndReportGroup.GetSubPane();
	pane->SetFontSize(11);
	
	int x = 400;
	m_wndStatus.Create(this, _T("Trạng thái"), 5, 585, 200, 615);
	m_wndUpdate.Create(this, _T("&Update"), x, 585, x+90, 615);
	x+= 95;
	m_wndSave.Create(this, _T("&Save"), x, 585, x+90, 615);
	x+= 95;
	m_wndPrint.Create(this, _T("&Print"), x, 585, x+90, 615);
	x+= 95;
	m_wndTerminate.Create(this, _T("&Terminate"), x, 585, x+90, 615);
	x+= 95;
	m_wndDiscard.Create(this, _T("&Hủy BA"), x, 585, x+90, 615);
	x+= 95;
	m_wndClose.Create(this, _T("&Close"), x, 585, x+90, 615);
	x+= 95;
	
}
void CHMSMauBenhAnDlg::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndReportGroup.SetPaneWidth(200);
}
void CHMSMauBenhAnDlg::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	InitReportGroup();
	m_wndReportGroup.SetSingleMode(true);
	m_wndReportGroup.RecalcLayout();
//	m_wndReportGroup.GetSubPane()->SetCallback(_OnItemSelectFnc);

	m_wndUpdate.SetEvent(WE_CLICK, _OnUpdateSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndTerminate.SetEvent(WE_CLICK, _OnTerminateSelectFnc);
	m_wndDiscard.SetEvent(WE_CLICK, _OnDiscardSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);

	m_wndStatus.SetTextColor(RGB(0, 0, 255));

	GetDataToScreen();
	SetMode(VM_VIEW);

	if(m_nRecordIdx > 0 && m_nRecordIdx < m_wndReportGroup.GetSubPane()->GetCount())
	{
		
		m_wndReportGroup.OnListPaneItemChange(0, m_nRecordIdx);
		m_wndReportGroup.GetSubPane()->SetCurSel(m_nRecordIdx);
	}
	
}

void CHMSMauBenhAnDlg::OnReportGroupSelectChange(int nNew)
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if (nNew < 0)
		return;
	SetMode(VM_VIEW);
}

int  CHMSMauBenhAnDlg::OnItemSelect(int nOld, int nNew)
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
_tprintf(_T("\r\n%d"), nNew);
	if (nNew < 0)
		return 0; 

	CListPane* pane = m_wndReportGroup.GetSubPane();
	if(pane == NULL)
		return 0;
	for (int i = 1; i < pane->GetCount(); i++)
	{
		CListPane::CListPaneInfo* pInfo = (CListPane::CListPaneInfo*) pane->GetItemDataPtr(i);
		if(pInfo->m_pWnd == NULL)
			continue;
		CHMSBenhAnView* pView = (CHMSBenhAnView*) pInfo->m_pWnd;
		if(pView && pView->GetSafeHwnd())
		{
			pView->OnCancelSelect();
		}
	}
	SetMode(VM_VIEW);
	
	return 1;
}

void CHMSMauBenhAnDlg::InitReportGroup()
{	
	CreateMauBenhAn();

}

void CHMSMauBenhAnDlg::CreateMauBenhAn()
{	
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
	CGuiView * newReport = NULL;
	CString tmpStr, szTemp;
	tmpStr.Empty();
	szTemp.Empty();
	CDocPane::CDocPaneInfo *obj = m_wndReportGroup.AddPane(_T("Report"));

	if (obj)
	{
		TranslateString(_T("\x42\x1EC7nh \xE1n \x111i\x1EC1u tr\x1ECB ngo\x1EA1i tr\xFA"), szTemp);
		tmpStr.Format(_T("A. %s"), szTemp);
		obj->AddCaption(tmpStr);

		newReport = new CHMS_OBABenhNhanGhepThan(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("\x42\x1EC7nh nh\xE2n gh\xE9p th\x1EADn"), szTemp);
		tmpStr.Format(_T("1. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CHMS_OBAChuyenKhoaXaTriXaPhau(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("\x43huy\xEAn kho\x61 \x78\x1EA1 tr\x1ECB \x78\x1EA1 ph\x1EABu"), szTemp);
		tmpStr.Format(_T("2. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CHMS_OBADTBenhSuyTim(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("\x110i\x1EC1u tr\x1ECB \x62\x1EC7nh nh\xE2n suy tim"), szTemp);
		tmpStr.Format(_T("3. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CHMS_OBADTCuongGiapIODEPhongXa(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("\x43\x1B0\x1EDDng gi\xE1p IO\x44\x45 ph\xF3ng \x78\x1EA1"), szTemp);
		tmpStr.Format(_T("4. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CHMS_OBADTDauThatNgucOnDinh(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("\x110\x61u th\x1EAFt ng\x1EF1\x63 \x1ED5n \x111\x1ECBnh"), szTemp);
		tmpStr.Format(_T("5. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CHMS_OBAParkinsonTab(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("\x110i\x1EC1u tr\x1ECB P\x61rkinson \x111\x1ED9ng kinh"), szTemp);
		tmpStr.Format(_T("6. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		/*newReport = new CHMS_OBADTParkinsonDongKinh1(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("\x110i\x1EC1u tr\x1ECB P\x61rkinson \x111\x1ED9ng kinh \x32"), szTemp);
		tmpStr.Format(_T("7. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CHMS_OBANTParkinsonDongKinh2(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("\x110i\x1EC1u tr\x1ECB P\x61rkinson \x111\x1ED9ng kinh \x33"), szTemp);
		tmpStr.Format(_T("8. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);*/

		newReport = new CHMS_OBADTPhoiTacNghenManTinh(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Ph\x1ED5i t\x1EAF\x63 ngh\x1EBDn m\x1EA1n t\xEDnh"), szTemp);
		tmpStr.Format(_T("7. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CHMS_OBAKhoaRangTab(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("\x42\x1EC7nh \xE1n kho\x61 r\x103ng"), szTemp);
		tmpStr.Format(_T("8. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		/*newReport = new CHMS_OBAKhoaRang2(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("\x42\x1EC7nh \xE1n kho\x61 r\x103ng \x32"), szTemp);
		tmpStr.Format(_T("11. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CHMSDanhGiaTheoDoiSauInplant(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("\x110\xE1nh gi\xE1 th\x65o \x64\xF5i s\x61u inpl\x61nt"), szTemp);
		tmpStr.Format(_T("12. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CHMSDanhGiaTheoDoiSauInplant2(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("\x110\xE1nh gi\xE1 th\x65o \x64\xF5i s\x61u inpl\x61nt \x32"), szTemp);
		tmpStr.Format(_T("13. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CHMSDanhGiaTheoDoiSauInplant3(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("\x110\xE1nh gi\xE1 th\x65o \x64\xF5i s\x61u inpl\x61nt \x33"), szTemp);
		tmpStr.Format(_T("14. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CHMSDanhGiaTheoDoiSauInplant4(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("\x110\xE1nh gi\xE1 th\x65o \x64\xF5i s\x61u inpl\x61nt \x34"), szTemp);
		tmpStr.Format(_T("15. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CHMSDanhGiaTheoDoiSauInplant51(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("\x110\xE1nh gi\xE1 th\x65o \x64\xF5i s\x61u inpl\x61nt \x35.\x31"), szTemp);
		tmpStr.Format(_T("16. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CHMSDanhGiaTheoDoiSauInplant52(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("\x110\xE1nh gi\xE1 th\x65o \x64\xF5i s\x61u inpl\x61nt \x35.\x32"), szTemp);
		tmpStr.Format(_T("17. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CHMSDanhGiaTheoDoiSauInplant53(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("\x110\xE1nh gi\xE1 th\x65o \x64\xF5i s\x61u inpl\x61nt \x35.\x33"), szTemp);
		tmpStr.Format(_T("18. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CHMSDanhGiaTheoDoiSauInplant54(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("\x110\xE1nh gi\xE1 th\x65o \x64\xF5i s\x61u inpl\x61nt \x35.\x34"), szTemp);
		tmpStr.Format(_T("19. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);*/

		newReport = new CHMS_OBARFA(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Bệnh án RFA"), szTemp);
		tmpStr.Format(_T("9. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

	}

}

void CHMSMauBenhAnDlg::OnDoDataExchange(CDataExchange* pDX){

}
void CHMSMauBenhAnDlg::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	}
	else
	{
			
	}

}
void CHMSMauBenhAnDlg::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT hd_recordno FROM  hms_doc WHERE hd_docno =%ld"), pMF->m_nDocumentNo);
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("hd_recordno"), m_szRecordNo);
	szSQL.Format(_T("SELECT hop_record_type, hop_status, hop_recordidx FROM hms_outpatient WHERE hop_patientno=%ld and hop_recordno='%s' "),
		pMF->m_nPatientNo, m_szRecordNo);

	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("hop_status"), m_szStatus);
		rs.GetValue(_T("hop_record_type"), m_szRecordType);
		rs.GetValue(_T("hop_recordidx"), m_nRecordIdx);

		if(m_szStatus == _T("T"))
		{
			m_wndStatus.SetWindowText(_T("Hồ sơ đã kết thúc"));
		}
		else
		{
			m_wndStatus.SetWindowText(_T("Hồ sơ đang mở"));
		}
		
	}
	else
	{
		m_wndStatus.SetWindowText(_T("Chưa tạo bệnh án ngoại trú"));
	}
}
void CHMSMauBenhAnDlg::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSMauBenhAnDlg::SetDefaultValues(){


}
int CHMSMauBenhAnDlg::SetMode(int nMode){
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
 			EnableButtons(TRUE, 1, -1);
 			break;
 		case VM_VIEW: 
 			EnableControls(FALSE);
 			EnableButtons(FALSE, 1, -1);
 			break;
 		case VM_NONE: 
 			EnableControls(FALSE);
 			EnableButtons(TRUE, 0, 6, -1);
 			SetDefaultValues();
 			break;
 		};
 		UpdateData(FALSE);
		m_wndClose.EnableWindow(TRUE);
 		return nOldMode;
}
int CHMSMauBenhAnDlg::OnAddHMSMauBenhAnDlg(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSMauBenhAnDlg::OnEditHMSMauBenhAnDlg(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSMauBenhAnDlg::OnDeleteHMSMauBenhAnDlg(){
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
 		OnCancelHMSMauBenhAnDlg();
 	}
	return 0;
}
int CHMSMauBenhAnDlg::OnSaveHMSMauBenhAnDlg(){
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
 		//OnHMSMauBenhAnDlgListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSMauBenhAnDlg::OnCancelHMSMauBenhAnDlg(){
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
int CHMSMauBenhAnDlg::OnHMSMauBenhAnDlgListLoadData(){
	return 0;
}

void CHMSMauBenhAnDlg::AddNew(CDocPane::CDocPaneInfo *pDocPaneInfo, CString szName){
	CGuiView *pView = NULL;
	CMap<CString, LPCTSTR, CGuiView*, CGuiView*> map_class;
	//map_class[_T("CEMPatientRatebyWardType")] = new CEMPatientRatebyWardType(&m_wndReportGroup);
	//map_class[_T("CEMPatientStatbyObj")] = new CEMPatientStatbyObj(&m_wndReportGroup);
	//map_class[_T("CEMAdmitRatebyRoom")] = new CEMAdmitRatebyRoom(&m_wndReportGroup);
	if (pDocPaneInfo)
	{
		//newReport = new CPRThongkehosoluutruchomuon(&m_wndReportGroup);
		map_class.Lookup(szName, pView);
		if (pView)
		{
			pView->Create(&m_wndReportGroup);
			pView->OnInitDialog();
			//TranslateString(_T("Th\x1ED1ng k\xEA h\x1ED3 s\x1A1 l\x1B0u tr\x1EEF \x63ho m\x1B0\x1EE3n"), szTemp);
			//tmpStr.Format(_T("1. %s"), szTemp);
			pDocPaneInfo->Add(szName, _T(""), pView);
		}
		else
			pDocPaneInfo->Add(szName, _T(""), NULL);

	}
}

BEGIN_MESSAGE_MAP(CHMSMauBenhAnDlg, CGuiDialog)
	ON_WM_DESTROY()
END_MESSAGE_MAP()

void CHMSMauBenhAnDlg::OnDestroy()
{
	CGuiDialog::OnDestroy();
	// TODO: Add your message handler code here

	
}


void CHMSMauBenhAnDlg::OnUpdateSelect()
{
	CListPane* pane = m_wndReportGroup.GetSubPane();
	if(pane == NULL)
		return;
	int nSel = pane->GetCurSel();
	if(nSel < 1)
		return;
	CListPane::CListPaneInfo* pInfo = (CListPane::CListPaneInfo*) pane->GetItemDataPtr(nSel);
	CHMSBenhAnView* pView = (CHMSBenhAnView*) pInfo->m_pWnd;
	if(pView)
	{
		pView->m_nRecordIdx = nSel;
		if(pView->OnUpdateSelect())
			SetMode(VM_EDIT);
	}
}

void CHMSMauBenhAnDlg::OnSaveSelect()
{
	CListPane* pane = m_wndReportGroup.GetSubPane();
	if(pane == NULL)
		return;
	int nSel = pane->GetCurSel();
	if(nSel < 1)
		return;
	CListPane::CListPaneInfo* pInfo = (CListPane::CListPaneInfo*) pane->GetItemDataPtr(nSel);
	CHMSBenhAnView* pView = (CHMSBenhAnView*) pInfo->m_pWnd;
	if(pView)
	{
		pView->m_nRecordIdx = nSel;

		pView->OnSaveSelect();
		SetMode(VM_VIEW);
	}
}


void CHMSMauBenhAnDlg::OnPrintSelect()
{
	CListPane* pane = m_wndReportGroup.GetSubPane();
	if(pane == NULL)
		return;
	int nSel = pane->GetCurSel();
	if(nSel < 1)
		return;
	CListPane::CListPaneInfo* pInfo = (CListPane::CListPaneInfo*) pane->GetItemDataPtr(nSel);
	CHMSBenhAnView* pView = (CHMSBenhAnView*) pInfo->m_pWnd;
	if(pView)
	{
		pView->OnPrintSelect();
	}
}


#include "TMRecordSummary.h"
void CHMSMauBenhAnDlg::OnTerminateSelect()
{
	CMainFrame* pMF = (CMainFrame*) AfxGetMainWnd();
	CTMRecordSummary dlg(this);
	
	if(dlg.DoModal() == IDOK)
	{
	
	}
}

void CHMSMauBenhAnDlg::OnDiscardSelect()
{
	CMainFrame* pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL;
	
	int ret = ShowMessageBox(_T("Bạn có chắc chắn muốn hủy bệnh án đã tạo không?"), MB_YESNO|MB_DEFBUTTON2);
	if(ret == IDNO)
		return;
	szSQL.Format(_T("HMS_OUTPATIENT_DELETE( %ld, '%s') "),
		pMF->m_nDocumentNo, pMF->GetCurrentUser());
_tprintf(_T("\r\n%s"), szSQL);
	ret = str2int(pMF->ExecDML(szSQL));
	if(ret <= 0)
	{
		ShowMessageBox(_T("Không thể hủy được bệnh án"));
	}
	else
	{
		ShowMessageBox(_T("Bệnh án đã được hủy"));
		pMF->m_szRecordNo.Empty();
	}
	
}


void CHMSMauBenhAnDlg::OnCloseSelect()
{
	CGuiDialog::OnCancel();
}