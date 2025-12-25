#include "HMSCovid19VaccinInforDialog.h"
#include "MainFrm.h"
#include "HMSThietLap_Thongtin_Vaccine.h"
#include "HMSThietLap_Thongtin_Vattu.h"
static CReport* _pRpt = NULL;
void _OnCheckPrintVacineCertificateFnc(CWnd *pMain)
{
	CMainFrame *pMF = (CMainFrame*) pMain;
	CString szSQL;	
	szSQL.Format(_T("HMS_VACCINE_PRINTTIMES('%s', %ld)"), pMF->GetCurrentUser(), pMF->m_nPatientNo);
	pMF->ExecDML(szSQL);	
}
static void _OnTheFirstSelectFnc(CWnd *pWnd){
	 ((CHMSCovid19VaccinInforDialog*)pWnd)->OnTheFirstSelect();
}
static void _OnVaccine1SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSCovid19VaccinInforDialog* )pWnd)->OnVaccine1SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnVaccine1SelendokFnc(CWnd *pWnd){
	((CHMSCovid19VaccinInforDialog *)pWnd)->OnVaccine1Selendok();
}
/*static void _OnVaccine1SetfocusFnc(CWnd *pWnd){
	((CHMSCovid19VaccinInforDialog *)pWnd)->OnVaccine1Killfocus();
}*/
/*static void _OnVaccine1KillfocusFnc(CWnd *pWnd){
	((CHMSCovid19VaccinInforDialog *)pWnd)->OnVaccine1Killfocus();
}*/
static long _OnVaccine1LoadDataFnc(CWnd *pWnd){
	return ((CHMSCovid19VaccinInforDialog *)pWnd)->OnVaccine1LoadData();
}
/*static void _OnVaccine1AddNewFnc(CWnd *pWnd){
	((CHMSCovid19VaccinInforDialog *)pWnd)->OnVaccine1AddNew();
}*/
static void _OnTheSecondSelectFnc(CWnd *pWnd){
	 ((CHMSCovid19VaccinInforDialog*)pWnd)->OnTheSecondSelect();
}
static void _OnVaccine2SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSCovid19VaccinInforDialog* )pWnd)->OnVaccine2SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnVaccine2SelendokFnc(CWnd *pWnd){
	((CHMSCovid19VaccinInforDialog *)pWnd)->OnVaccine2Selendok();
}
/*static void _OnVaccine2SetfocusFnc(CWnd *pWnd){
	((CHMSCovid19VaccinInforDialog *)pWnd)->OnVaccine2Killfocus();
}*/
/*static void _OnVaccine2KillfocusFnc(CWnd *pWnd){
	((CHMSCovid19VaccinInforDialog *)pWnd)->OnVaccine2Killfocus();
}*/
static long _OnVaccine2LoadDataFnc(CWnd *pWnd){
	return ((CHMSCovid19VaccinInforDialog *)pWnd)->OnVaccine2LoadData();
}
/*static void _OnVaccine2AddNewFnc(CWnd *pWnd){
	((CHMSCovid19VaccinInforDialog *)pWnd)->OnVaccine2AddNew();
}*/
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSCovid19VaccinInforDialog *pVw = (CHMSCovid19VaccinInforDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSCovid19VaccinInforDialog *pVw = (CHMSCovid19VaccinInforDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddHMSCovid19VaccinInforDialogFnc(CWnd *pWnd){
	 return ((CHMSCovid19VaccinInforDialog*)pWnd)->OnAddHMSCovid19VaccinInforDialog();
} 
static int _OnEditHMSCovid19VaccinInforDialogFnc(CWnd *pWnd){
	 return ((CHMSCovid19VaccinInforDialog*)pWnd)->OnEditHMSCovid19VaccinInforDialog();
} 
static int _OnDeleteHMSCovid19VaccinInforDialogFnc(CWnd *pWnd){
	 return ((CHMSCovid19VaccinInforDialog*)pWnd)->OnDeleteHMSCovid19VaccinInforDialog();
} 
static int _OnSaveHMSCovid19VaccinInforDialogFnc(CWnd *pWnd){
	 return ((CHMSCovid19VaccinInforDialog*)pWnd)->OnSaveHMSCovid19VaccinInforDialog();
} 
static int _OnCancelHMSCovid19VaccinInforDialogFnc(CWnd *pWnd){
	 return ((CHMSCovid19VaccinInforDialog*)pWnd)->OnCancelHMSCovid19VaccinInforDialog();
}
static void _OnSetupVaccineSelectFnc(CWnd *pWnd)
{
	((CHMSCovid19VaccinInforDialog *)pWnd)->OnSetupVaccineSelect();
}

static void _OnSetupDrugandMaterialFnc(CWnd *pWnd)
{
	((CHMSCovid19VaccinInforDialog *)pWnd)->OnSetupDrugandMaterial();
}

static int _OnFirstDateCheckValueFnc(CWnd *pWnd
									 ){
	return ((CHMSCovid19VaccinInforDialog *)pWnd)->OnFirstDateCheckValue();
}
static int _OnSecondDateCheckValueFnc(CWnd *pWnd)
{
	return ((CHMSCovid19VaccinInforDialog *)pWnd)->OnSecondDateCheckValue();
}

static void _OnThe3thSelectFnc(CWnd *pWnd){
	 ((CHMSCovid19VaccinInforDialog*)pWnd)->OnThe3thSelect();
}
static void _OnVaccine3SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSCovid19VaccinInforDialog* )pWnd)->OnVaccine3SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnVaccine3SelendokFnc(CWnd *pWnd){
	((CHMSCovid19VaccinInforDialog *)pWnd)->OnVaccine3Selendok();
	}

static long _OnVaccine3LoadDataFnc(CWnd *pWnd){
	return ((CHMSCovid19VaccinInforDialog *)pWnd)->OnVaccine3LoadData();
}
static int _OnDate3CheckValueFnc(CWnd *pWnd){
	return ((CHMSCovid19VaccinInforDialog *)pWnd)->OnDate3CheckValue();
}

static void _OnThe4thSelectFnc(CWnd *pWnd){
	 ((CHMSCovid19VaccinInforDialog*)pWnd)->OnThe4thSelect();
}
static void _OnVaccine4SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSCovid19VaccinInforDialog* )pWnd)->OnVaccine4SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnVaccine4SelendokFnc(CWnd *pWnd){
	((CHMSCovid19VaccinInforDialog *)pWnd)->OnVaccine4Selendok();
}
static long _OnVaccine4LoadDataFnc(CWnd *pWnd){
	return ((CHMSCovid19VaccinInforDialog *)pWnd)->OnVaccine4LoadData();
}
static int _OnDate4CheckValueFnc(CWnd *pWnd){
	return ((CHMSCovid19VaccinInforDialog *)pWnd)->OnDate4CheckValue();
}

static void _OnPrintSelectFnc(CWnd *pWnd)
{
	CHMSCovid19VaccinInforDialog *pVw = (CHMSCovid19VaccinInforDialog *)pWnd;
	pVw->OnPrintSelect();
}

static void _OnUpdateSelectFnc(CWnd *pWnd){
	CHMSCovid19VaccinInforDialog *pVw = (CHMSCovid19VaccinInforDialog *)pWnd;
	pVw->OnUpdateSelect();
}

static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSCovid19VaccinInforDialog *pVw = (CHMSCovid19VaccinInforDialog *)pWnd;
	pVw->OnCloseSelect();
}

static void _OnActiveSelectFnc(CWnd *pWnd){
	 ((CHMSCovid19VaccinInforDialog*)pWnd)->OnActiveSelect();
}

CHMSCovid19VaccinInforDialog::CHMSCovid19VaccinInforDialog(CWnd *pParent):
	CGuiDialog(pParent)
{

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CHMSCovid19VaccinInforDialog::~CHMSCovid19VaccinInforDialog()
{
}
void CHMSCovid19VaccinInforDialog::OnCreateComponents()
{
	/*m_wndTheFirst.Create(this, _T("Tiêm mũi 1"), 9, 30, 142, 55);
	m_wndVaccine1Label.Create(this, _T("Loại Vaccine"), 9, 60, 142, 90);
	m_wndVaccine1.Create(this,147, 60, 495, 90); 
	m_wndDate1Label.Create(this, _T("Thời gian"), 9, 95, 142, 125);
	m_wndDescGroupBox.Create(this, _T("THÔNG TIN TIÊM VACCINE"), 5, 4, 495, 437);
	m_wndFirstDate.Create(this,147, 95, 495, 125); 
	m_wndTheSecond.Create(this, _T("Tiêm mũi 2"), 9, 131, 142, 156);
	m_wndVaccine2Label.Create(this, _T("Loại Vaccine"), 9, 162, 142, 192);
	m_wndVaccine2.Create(this,147, 162, 495, 192); 
	m_wndSecondDate.Create(this,147, 195, 495, 225); 
	m_wndDate2Label.Create(this, _T("Thời gian"), 9, 197, 142, 227);
	m_wndThe3th.Create(this, _T("Tiêm mũi 3"), 9, 233, 142, 258);
	m_wndVaccine3Label.Create(this, _T("Loại Vaccine"), 9, 264, 142, 294);
	m_wndVaccine3.Create(this,147, 264, 495, 294); 
	m_wndDate3Label.Create(this, _T("Thời gian"), 9, 300, 142, 330);
	m_wndDate3.Create(this,147, 300, 495, 330); 
	m_wndThe4th.Create(this, _T("Tiêm mũi 4"), 9, 335, 142, 360);
	m_wndVaccine4.Create(this,147, 365, 495, 395); 
	m_wndVaccine4Label.Create(this, _T("Loại Vaccine"), 9, 366, 142, 396);
	m_wndDate4Label.Create(this, _T("Thời gian"), 9, 402, 142, 432);
	m_wndDate4.Create(this,147, 402, 495, 432); 
	m_wndSetupVaccineLabel.Create(this, _T("Thiết lập vaccine"), 9, 443, 142, 468);
	m_wndSetupDrugandMaterial.Create(this, _T("Thiết lập thuốc - VT"), 147, 443, 269, 468);	
	m_wndSave.Create(this, _T("Save"), 256, 471, 333, 496);
	m_wndCancel.Create(this, _T("Cancel"), 337, 471, 414, 496);	
	m_wndPrint.Create(this, _T("Print"), 419, 471, 496, 496);
	m_wndPrintnumberLabel.Create(this, _T("Số lần in"), 275, 443, 414, 468);
	m_wndPrintnumber.Create(this,420, 443, 497, 468);
	m_wndPrintnumber.SetReadOnly(true);*/

	m_wndTheFirst.Create(this, _T("Tiêm mũi 1"), 9, 30, 142, 55);
	m_wndDescGroupBox.Create(this, _T("THÔNG TIN TIÊM VACCINE"), 5, 4, 495, 437);
	m_wndVaccine1Label.Create(this, _T("Loại Vaccine"), 9, 60, 142, 90);
	m_wndVaccine1.Create(this,147, 60, 495, 90); 
	m_wndDate1Label.Create(this, _T("Thời gian"), 9, 95, 142, 125);
	m_wndFirstDate.Create(this,147, 95, 495, 125); 
	m_wndTheSecond.Create(this, _T("Tiêm mũi 2"), 9, 131, 142, 156);
	m_wndVaccine2Label.Create(this, _T("Loại Vaccine"), 9, 162, 142, 192);
	m_wndVaccine2.Create(this,147, 162, 495, 192); 
	m_wndSecondDate.Create(this,147, 195, 495, 225); 
	m_wndDate2Label.Create(this, _T("Thời gian"), 9, 197, 142, 227);
	m_wndThe3th.Create(this, _T("Tiêm mũi 3"), 9, 233, 142, 258);
	m_wndVaccine3Label.Create(this, _T("Loại Vaccine"), 9, 264, 142, 294);
	m_wndVaccine3.Create(this,147, 264, 495, 294); 
	m_wndDate3Label.Create(this, _T("Thời gian"), 9, 300, 142, 330);
	m_wndDate3.Create(this,147, 300, 495, 330); 
	m_wndThe4th.Create(this, _T("Tiêm mũi 4"), 9, 335, 142, 360);
	m_wndVaccine4.Create(this,147, 365, 495, 395); 
	m_wndVaccine4Label.Create(this, _T("Loại Vaccine"), 9, 366, 142, 396);
	m_wndDate4Label.Create(this, _T("Thời gian"), 9, 402, 142, 432);
	m_wndDate4.Create(this,147, 402, 495, 432); 
	m_wndSetupVaccineLabel.Create(this, _T("Thiết lập vaccine"), 9, 443, 142, 468);
	m_wndSetupDrugandMaterial.Create(this, _T("Thiết lập thuốc - VT"), 147, 443, 269, 468);
	m_wndPrintnumberLabel.Create(this, _T("Số lần in"), 275, 443, 414, 468);
	m_wndPrintnumber.Create(this,420, 443, 497, 468); 
	m_wndActive.Create(this, _T("Active"), 0, 0, 0, 0);
	m_wndUpdate.Create(this, _T("&Update"), 102, 473, 182, 498);
	m_wndSave.Create(this, _T("Save"), 186, 473, 263, 498);
	m_wndCancel.Create(this, _T("Cancel"), 267, 473, 339, 498);
	m_wndClose.Create(this, _T("&Close"), 344, 473, 419, 498);
	m_wndPrint.Create(this, _T("Print"), 424, 473, 496, 498);
	m_wndPrintnumber.SetReadOnly(true);

}
void CHMSCovid19VaccinInforDialog::OnInitializeComponents()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndVaccine1.LimitText(512);	
	//m_wndVaccine2.SetCheckValue(true);
	m_wndVaccine2.LimitText(512);
	m_wndSetupVaccineLabel.SetHyperlink(true);
	m_wndSetupDrugandMaterial.SetHyperlink(true);
	m_wndFirstDate.SetMax(CDate(pMF->GetSysDate()));
	//m_wndFirstDate.SetCheckValue(true);
	m_wndSecondDate.SetMax(CDate(pMF->GetSysDate()));
	//m_wndSecondDate.SetCheckValue(true);

	m_wndVaccine3.LimitText(512);
	m_wndDate3.SetMax(CDate(pMF->GetSysDate()));	
	
	m_wndVaccine4.LimitText(512);
	m_wndDate4.SetMax(CDate(pMF->GetSysDate()));
	


	m_wndVaccine1.InsertColumn(0, _T("ID"), CFMT_TEXT, 120);
	m_wndVaccine1.InsertColumn(1, _T("Name"), CFMT_TEXT, 450);

	m_wndVaccine2.InsertColumn(0, _T("ID"), CFMT_TEXT, 120);
	m_wndVaccine2.InsertColumn(1, _T("Name"), CFMT_TEXT, 450);

	m_wndVaccine3.InsertColumn(0, _T("ID"), CFMT_TEXT, 120);
	m_wndVaccine3.InsertColumn(1, _T("Name"), CFMT_TEXT, 450);

	m_wndVaccine4.InsertColumn(0, _T("ID"), CFMT_TEXT, 120);
	m_wndVaccine4.InsertColumn(1, _T("Name"), CFMT_TEXT, 450);
	
}
void CHMSCovid19VaccinInforDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndTheFirst.SetEvent(WE_CLICK, _OnTheFirstSelectFnc);
	m_wndVaccine1.SetEvent(WE_SELENDOK, _OnVaccine1SelendokFnc);
	//m_wndVaccine1.SetEvent(WE_SETFOCUS, _OnVaccine1SetfocusFnc);
	//m_wndVaccine1.SetEvent(WE_KILLFOCUS, _OnVaccine1KillfocusFnc);
	m_wndVaccine1.SetEvent(WE_SELCHANGE, _OnVaccine1SelectChangeFnc);
	m_wndVaccine1.SetEvent(WE_LOADDATA, _OnVaccine1LoadDataFnc);
	//m_wndVaccine1.SetEvent(WE_ADDNEW, _OnVaccine1AddNewFnc);
	m_wndTheSecond.SetEvent(WE_CLICK, _OnTheSecondSelectFnc);
	m_wndVaccine2.SetEvent(WE_SELENDOK, _OnVaccine2SelendokFnc);
	//m_wndVaccine2.SetEvent(WE_SETFOCUS, _OnVaccine2SetfocusFnc);
	//m_wndVaccine2.SetEvent(WE_KILLFOCUS, _OnVaccine2KillfocusFnc);
	m_wndVaccine2.SetEvent(WE_SELCHANGE, _OnVaccine2SelectChangeFnc);
	m_wndVaccine2.SetEvent(WE_LOADDATA, _OnVaccine2LoadDataFnc);
	//m_wndVaccine2.SetEvent(WE_ADDNEW, _OnVaccine2AddNewFnc);
	m_wndUpdate.SetEvent(WE_CLICK, _OnUpdateSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndActive.SetEvent(WE_CLICK, _OnActiveSelectFnc);

	m_wndFirstDate.SetEvent(WE_CHECKVALUE, _OnFirstDateCheckValueFnc);
	m_wndTheSecond.SetEvent(WE_CLICK, _OnTheSecondSelectFnc);

	m_wndSetupVaccineLabel.SetEvent(WE_CLICK, _OnSetupVaccineSelectFnc);
	m_wndSetupDrugandMaterial.SetEvent(WE_CLICK, _OnSetupDrugandMaterialFnc);

	m_wndThe3th.SetEvent(WE_CLICK, _OnThe3thSelectFnc);
	m_wndVaccine3.SetEvent(WE_SELENDOK, _OnVaccine3SelendokFnc);	
	m_wndVaccine3.SetEvent(WE_SELCHANGE, _OnVaccine3SelectChangeFnc);
	m_wndVaccine3.SetEvent(WE_LOADDATA, _OnVaccine3LoadDataFnc);
	
	m_wndDate3.SetEvent(WE_CHECKVALUE, _OnDate3CheckValueFnc);
	m_wndThe4th.SetEvent(WE_CLICK, _OnThe4thSelectFnc);
	m_wndVaccine4.SetEvent(WE_SELENDOK, _OnVaccine4SelendokFnc);
	
	m_wndVaccine4.SetEvent(WE_SELCHANGE, _OnVaccine4SelectChangeFnc);
	m_wndVaccine4.SetEvent(WE_LOADDATA, _OnVaccine4LoadDataFnc);
	
	m_wndDate4.SetEvent(WE_CHECKVALUE, _OnDate4CheckValueFnc);

	
	m_wndPrintnumber.SetTextColor(RGB(255, 0, 0));
	
	UpdateData(FALSE);
	GetDataToScreen();

}
void CHMSCovid19VaccinInforDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Check(pDX, m_wndTheFirst.GetDlgCtrlID(), m_bTheFirst);
	DDX_TextEx(pDX, m_wndVaccine1.GetDlgCtrlID(), m_szVaccine1Key);
	DDX_Check(pDX, m_wndTheSecond.GetDlgCtrlID(), m_bTheSecond);
	DDX_TextEx(pDX, m_wndVaccine2.GetDlgCtrlID(), m_szVaccine2Key);
	DDX_TextEx(pDX, m_wndFirstDate.GetDlgCtrlID(), m_szFirstDate);
	DDX_TextEx(pDX, m_wndSecondDate.GetDlgCtrlID(), m_szSecondDate);
	DDX_Check(pDX, m_wndThe3th.GetDlgCtrlID(), m_bThe3th);
	DDX_TextEx(pDX, m_wndVaccine3.GetDlgCtrlID(), m_szVaccine3Key);
	DDX_TextEx(pDX, m_wndDate3.GetDlgCtrlID(), m_szDate3);
	DDX_Check(pDX, m_wndThe4th.GetDlgCtrlID(), m_bThe4th);
	DDX_TextEx(pDX, m_wndVaccine4.GetDlgCtrlID(), m_szVaccine4Key);
	DDX_TextEx(pDX, m_wndDate4.GetDlgCtrlID(), m_szDate4);
	DDX_Text(pDX, m_wndPrintnumber.GetDlgCtrlID(), m_nPrintnumber);
	DDX_Check(pDX, m_wndActive.GetDlgCtrlID(), m_bActive);
}
void CHMSCovid19VaccinInforDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("TheFirst")] =  m_bTheFirst;
	m_jData[_T("Vaccine1")] =  m_szVaccine1Key;
	m_jData[_T("TheSecond")] =  m_bTheSecond;
	m_jData[_T("Vaccine2")] =  m_szVaccine2Key;
	}
	else
	{
			
	m_jData[_T("TheFirst")].GetValue(m_bTheFirst);
	m_jData[_T("Vaccine1")].GetValue(m_szVaccine1Key);
	m_jData[_T("TheSecond")].GetValue(m_bTheSecond);
	m_jData[_T("Vaccine2")].GetValue(m_szVaccine2Key);
	}

}
void CHMSCovid19VaccinInforDialog::GetDataToScreen()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CRecord rsl(&pMF->m_db);
	//int m_nPrintnumber = 0;
	CString szSQL, tmpStr, szStatus;
	szSQL.Format(_T("SELECT * FROM rm_vaccine_infor ") 							
				_T("WHERE VC_PATIENTNO=%ld"), pMF->m_nPatientNo);
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);

	if (!rs.IsEOF())
	{
		rs.GetValue(_T("VC_THEFIRST"), tmpStr);
		m_bTheFirst = tmpStr==_T("1")?true:false;
		rs.GetValue(_T("VC_VACCINE1"), m_szVaccine1Key);
		rs.GetValue(_T("VC_FIRSTDATE"), m_szFirstDate);
		
		rs.GetValue(_T("VC_THESECOND"), tmpStr);
		m_bTheSecond = tmpStr==_T("1")?true:false;
		rs.GetValue(_T("VC_VACCINE2"), m_szVaccine2Key);
		rs.GetValue(_T("VC_SECONDDATE"), m_szSecondDate);

		rs.GetValue(_T("VC_THE3"), tmpStr);
		m_bThe3th = tmpStr==_T("1")?true:false;
		rs.GetValue(_T("VC_VACCINE3"), m_szVaccine3Key);
		rs.GetValue(_T("VC_DATE3"), m_szDate3);

		rs.GetValue(_T("VC_THE4"), tmpStr);
		m_bThe4th = tmpStr==_T("1")?true:false;
		rs.GetValue(_T("VC_VACCINE4"), m_szVaccine4Key);
		rs.GetValue(_T("VC_DATE4"), m_szDate4);

		rs.GetValue(_T("VC_LASTPRINTTIMES"), m_nPrintnumber);
		//_msg(_T("%ld"), m_nPrintnumber);
	

	}
	szSQL.Format(_T("SELECT * FROM hms_doc ") 							
				_T("WHERE hd_docno=%ld"), pMF->m_nDocumentNo);
	rsl.ExecSQL(szSQL);
	if (!rsl.IsEOF())
	{
		rsl.GetValue(_T("hd_status"), szStatus);			
	}
	
	if (szStatus == _T("T"))
	{
		SetMode(VM_VIEW);
	}
	else
	{
		SetMode(VM_NONE);
	}
}
void CHMSCovid19VaccinInforDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSCovid19VaccinInforDialog::SetDefaultValues()
{

	m_bTheFirst=FALSE;
	m_szVaccine1Key.Empty();

	m_bTheSecond=FALSE;
	m_szVaccine2Key.Empty();

	m_bThe3th=FALSE;
	m_szVaccine3Key.Empty();
	
	m_bThe4th=FALSE;
	m_szVaccine4Key.Empty();

	m_nPrintnumber = 0;
	m_bActive=FALSE;
	

}
int CHMSCovid19VaccinInforDialog::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode)
		{
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, -1);
 			//SetDefaultValues();
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 1, 2, 4, -1);
			
 			break;
 		case VM_VIEW: 
 			EnableControls(FALSE);
 			EnableButtons(TRUE, 0, 3, 4, -1);
			/*m_wndSave.EnableWindow(FALSE);
			m_wndTheFirst.EnableWindow(FALSE);
			m_wndTheSecond.EnableWindow(FALSE);
			m_wndFirstDate.EnableWindow(FALSE);
			m_wndSecondDate.EnableWindow(FALSE);
			m_wndThe3th.EnableWindow(FALSE);
			m_wndThe4th.EnableWindow(FALSE);
			m_wndDate3.EnableWindow(FALSE);
			m_wndDate4.EnableWindow(FALSE);*/
 			break;
 		case VM_NONE: 
 			EnableControls(FALSE);
 			EnableButtons(TRUE, 0, 3, 4, -1);
 			//SetDefaultValues();
 			break;
 		};
		m_wndPrint.EnableWindow(true);
 		UpdateData(FALSE);
 		return nOldMode;
}
	
void CHMSCovid19VaccinInforDialog::OnActiveSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}

void CHMSCovid19VaccinInforDialog::OnTheFirstSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);

	if (m_bTheFirst)
	{
		m_szFirstDate = pMF->GetSysDate();
	}
	else
	   m_szFirstDate = _T("");
	UpdateData(false);
}
void CHMSCovid19VaccinInforDialog::OnVaccine1SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSCovid19VaccinInforDialog::OnVaccine1Selendok(){
	 
}
int CHMSCovid19VaccinInforDialog::OnSecondDateCheckValue(){
	return 0;
} 

int CHMSCovid19VaccinInforDialog::OnFirstDateCheckValue(){
	return 0;
} 
/*void CHMSCovid19VaccinInforDialog::OnVaccine1Setfocus(){
	
}*/
/*void CHMSCovid19VaccinInforDialog::OnVaccine1Killfocus(){
	
}*/
long CHMSCovid19VaccinInforDialog::OnVaccine1LoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndVaccine1.IsSearchKey() && !m_szVaccine1Key.IsEmpty())
	{
		szWhere.Format(_T(" and vc_code='%s' "), m_szVaccine1Key);
	}
	
	if (GetMode() == VM_EDIT)
	{
		szWhere.AppendFormat(_T(" AND VC_ISACTIVE='Y' "));
	}

	m_wndVaccine1.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT vc_code as id, vc_name as name FROM m_vaccine_list WHERE 1=1 %s ORDER BY id "), szWhere);
	nCount = rs.ExecSQL(szSQL);	
	while(!rs.IsEOF()){ 
		m_wndVaccine1.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

	return 0;
}
/*void CHMSCovid19VaccinInforDialog::OnVaccine1AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
	void CHMSCovid19VaccinInforDialog::OnTheSecondSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);

	if (m_bTheSecond)
	{
		m_szSecondDate = pMF->GetSysDate();
	}
	else
	   m_szSecondDate = _T("");
	UpdateData(false);
}
void CHMSCovid19VaccinInforDialog::OnVaccine2SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSCovid19VaccinInforDialog::OnVaccine2Selendok()
{
	 
}
/*void CHMSCovid19VaccinInforDialog::OnVaccine2Setfocus(){
	
}*/
/*void CHMSCovid19VaccinInforDialog::OnVaccine2Killfocus(){
	
}*/
long CHMSCovid19VaccinInforDialog::OnVaccine2LoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndVaccine2.IsSearchKey() && !m_szVaccine2Key.IsEmpty())
	{
	 szWhere.Format(_T(" and vc_code='%s' "), m_szVaccine2Key);
	}

	if (GetMode() == VM_EDIT)
	{
		szWhere.AppendFormat(_T(" AND VC_ISACTIVE='Y' "));		
	}
	

	m_wndVaccine2.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT vc_code as id, vc_name as name FROM m_vaccine_list WHERE 1=1 %s ORDER BY id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	
	while(!rs.IsEOF()){ 
		m_wndVaccine2.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

	return 0;
}

void CHMSCovid19VaccinInforDialog::OnThe3thSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);

	if (m_bThe3th)
	{
		m_szDate3 = pMF->GetSysDate();
	}
	else
	   m_szDate3 = _T("");
	UpdateData(false);
	
}
void CHMSCovid19VaccinInforDialog::OnVaccine3SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSCovid19VaccinInforDialog::OnVaccine3Selendok(){
	 
}
long CHMSCovid19VaccinInforDialog::OnVaccine3LoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndVaccine3.IsSearchKey() && !m_szVaccine3Key.IsEmpty())
	{
	 szWhere.Format(_T(" and vc_code='%s' "), m_szVaccine3Key);
	}
	if (GetMode() == VM_EDIT)
	{
		szWhere.AppendFormat(_T(" AND VC_ISACTIVE='Y' "));
	}

	m_wndVaccine3.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT vc_code as id, vc_name as name FROM m_vaccine_list WHERE 1=1 %s ORDER BY id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	
	while(!rs.IsEOF()){ 
		m_wndVaccine3.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

	return 0;	
}

void CHMSCovid19VaccinInforDialog::OnThe4thSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);

	if (m_bThe4th)
	{
		m_szDate4 = pMF->GetSysDate();
	}
	else
	   m_szDate4 = _T("");
	UpdateData(false);
	
}
void CHMSCovid19VaccinInforDialog::OnVaccine4SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSCovid19VaccinInforDialog::OnVaccine4Selendok(){
	 
}
long CHMSCovid19VaccinInforDialog::OnVaccine4LoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndVaccine4.IsSearchKey() && !m_szVaccine4Key.IsEmpty())
	{
	 szWhere.Format(_T(" and vc_code='%s' "), m_szVaccine4Key);
	}
	
	if (GetMode() == VM_EDIT)
	{
		szWhere.AppendFormat(_T(" AND VC_ISACTIVE='Y' "));
	}
	

	m_wndVaccine4.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT vc_code as id, vc_name as name FROM m_vaccine_list WHERE 1=1 %s ORDER BY id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	
	while(!rs.IsEOF()){ 
		m_wndVaccine4.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

	return 0;
}
int CHMSCovid19VaccinInforDialog::OnDate3CheckValue()
{
	return 0;
} 

int CHMSCovid19VaccinInforDialog::OnDate4CheckValue()
{
	return 0;
} 

void CHMSCovid19VaccinInforDialog::OnUpdateSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnEditHMSCovid19VaccinInforDialog();
	
}
void CHMSCovid19VaccinInforDialog::OnSaveSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveHMSCovid19VaccinInforDialog();
	
} 
void CHMSCovid19VaccinInforDialog::OnCancelSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancelHMSCovid19VaccinInforDialog();
		
}

void CHMSCovid19VaccinInforDialog::OnCloseSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();
}

void CHMSCovid19VaccinInforDialog::OnPrintSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();	
	UpdateData(TRUE);
	CGuiMenu menu(this);
	CString tmpStr;
	CRect rect;
	int nPos = 0;
	m_wndPrint.GetWindowRect(&rect);
	_debug(_T("right: %d|top: %d"), rect.right, rect.top);
	menu.CreatePopupMenu();
	TranslateString(_T("Mẫu 1 (Tiêm mũi 1/2)"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 1, tmpStr);
	TranslateString(_T("Mẫu 2 (Tiêm mũi 3/4)"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 2, tmpStr);

	nPos = menu.TrackPopupMenu(TPM_RETURNCMD | TPM_BOTTOMALIGN | TPM_RIGHTALIGN, rect.right, rect.top, this);
	switch (nPos)
	{
		case 1:
			OnPrintVer1(true, false);
			break;
		case 2:
			OnPrintVer2(true, false);
			break;	
	}
	
} 
void CHMSCovid19VaccinInforDialog::OnPrintVer1(bool m_bPreview, bool m_bDirect)
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();	
	static CReport rpt;
	CReport rpt2;
	CString szSQL, tmpStr, szWhere, szDynLabel1, szDynLabel2, szDynText1, szDynText2;
	CRecord rs(&pMF->m_db);
	CRecord rsl(&pMF->m_db);	
	m_bDirect = false;

	if (!rpt.Init(_T("Reports/HMS/HR_CHUNGNHANTIEMVACCINE_MAU1.RPT")))
		{
			_msg(_T("Reports/HMS/HR_CHUNGNHANTIEMVACCINE_MAU1.RPT"));
			return;
		}	

	szSQL.Format(_T(" SELECT hd_patientno AS patientno,") \
			_T("   hd_docno          AS docno,") \
			_T("   trim(hp_surname") \
			_T("   ||' '") \
			_T("   ||hp_midname") \
			_T("   ||' '") \
			_T("   ||hp_firstname)                                             AS pname,") \
			_T("   to_char(hp_birthdate, 'DD/MM/YYYY')                         AS birthdate,") \
			_T("   hp_sin                                                      AS socmnd,") \
			_T("   HD_TELEPHONE                                                AS phone,") \
			_T("   hms_getaddress(nvl(hd_provid, hp_provid), nvl(hd_distid, hp_distid), nvl(hd_villid, hp_villid))             AS DiaChi,") \
			_T("  SYS_GetProvillName(hp_provid)                               AS provill,") \
			_T("  SYS_GetDistrictName(hp_distid)                              AS district,") \
			_T("  Sys_GetVillageName(hp_villid)                               AS village,") \
			_T("   CASE") \
			_T("     WHEN VC_THEFIRST=1") \
			_T("     THEN TO_CHAR(VC_FIRSTDATE, 'DD/MM/YYYY')") \
			_T("     ELSE NULL") \
			_T("   END AS thoigiantiemlan1,") \
			_T("   (SELECT VC_NAME FROM M_VACCINE_LIST WHERE VC_VACCINE1=VC_CODE") \
			_T("   ) AS vaccine1,") \
			_T("   (SELECT VC_LOT FROM M_VACCINE_LIST WHERE VC_VACCINE1=VC_CODE") \
			_T("   ) AS lot1, ") \
			_T("   CASE") \
			_T("     WHEN VC_THESECOND=1") \
			_T("     THEN TO_CHAR(VC_SECONDDATE, 'DD/MM/YYYY')") \
			_T("     ELSE NULL") \
			_T("   END AS thoigiantiemlan2,") \
			_T("   (SELECT VC_NAME FROM M_VACCINE_LIST WHERE VC_VACCINE2=VC_CODE") \
			_T("   ) AS vaccine2,") \
			_T("   (SELECT VC_LOT FROM M_VACCINE_LIST WHERE VC_VACCINE2=VC_CODE") \
			_T("   ) AS lot2 ") \
			_T(" FROM hms_patient") \
			_T(" LEFT JOIN hms_doc") \
			_T(" ON(hd_patientno=hp_patientno)") \
			_T(" LEFT JOIN RM_VACCINE_INFOR") \
			_T(" ON (hp_patientno=VC_PATIENTNO)") \
			_T(" WHERE hd_docno=%ld"), pMF->m_nDocumentNo);

	//_msg(_T("%s"), szSQL);
	int ret = rs.ExecSQL(szSQL);

	if (rs.IsEOF())
		return;


	//Report Header
	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), pMF->m_CompanyInfo.sc_pname);
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), pMF->m_CompanyInfo.sc_name);
	tmpStr = pMF->GetSysDateTime();


	CString printDate, szExamDate;
	rs.GetValue(_T("admitdate"), szExamDate);

	//MessageBox(tmpStr);
	
	tmpStr.Format(rpt.GetReportHeader()->GetValue(_T("ExamDate")), szExamDate.Mid(11, 5), szExamDate.Mid(8, 2), szExamDate.Mid(5, 2), szExamDate.Left(4));
	rpt.GetReportHeader()->SetValue(_T("Examdate"), tmpStr);

	printDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),
					 tmpStr.Mid(11, 5), tmpStr.Mid(8, 2), tmpStr.Mid(5, 2), tmpStr.Left(4));

	rpt.GetReportHeader()->SetValue(_T("PrintDate"), printDate);
	rpt.GetReportHeader()->SetValue(_T("PatientNo"), rs.GetValue(_T("patientno")));
	rs.GetValue(_T("docno"), tmpStr);	

	rpt.GetReportHeader()->SetValue(_T("DocumentNo"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Barcode[128A]"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Barcode[128B]"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Barcode[128C]"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Barcode[39]"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Barcode[93]"), tmpStr);

	StringUpper(rs.GetValue(_T("pname")), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("PatientName"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("yearofbirth"), rs.GetValue(_T("birthdate")));

	rpt.GetReportHeader()->SetValue(_T("socmnd"), rs.GetValue(_T("socmnd")));
	rpt.GetReportHeader()->SetValue(_T("phone"), rs.GetValue(_T("phone")));
	
	tmpStr.Empty();
	rpt.GetReportHeader()->SetValue(_T("Age"), rs.GetValue(_T("age")));
	rpt.GetReportHeader()->SetValue(_T("Sex"), rs.GetValue(_T("sex")));
	rpt.GetReportHeader()->SetValue(_T("Occupation"), rs.GetValue(_T("occupation")));
	tmpStr.Format(_T("%s - %s - %s"), rs.GetValue(_T("village")), rs.GetValue(_T("district")), rs.GetValue(_T("provill")));
	rpt.GetReportHeader()->SetValue(_T("Address"), tmpStr);
	rs.GetValue(_T("detailaddress"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("DetailAddress"), tmpStr);

	rpt.GetReportHeader()->SetValue(_T("thoigiantiemlan1"), rs.GetValue(_T("thoigiantiemlan1")));
	rpt.GetReportHeader()->SetValue(_T("vaccine1"), rs.GetValue(_T("vaccine1")));
	rpt.GetReportHeader()->SetValue(_T("lot1"), rs.GetValue(_T("lot1")));

	rpt.GetReportHeader()->SetValue(_T("thoigiantiemlan2"), rs.GetValue(_T("thoigiantiemlan2")));
	rpt.GetReportHeader()->SetValue(_T("vaccine2"), rs.GetValue(_T("vaccine2")));
	rpt.GetReportHeader()->SetValue(_T("lot2"), rs.GetValue(_T("lot2")));

	tmpStr.Empty();
	CString szWorkPlace,szIsDiscount,szGiayGioiThieu ;
	rs.GetValue(_T("workplace"), szWorkPlace);
	rs.GetValue(_T("hp_department"), tmpStr);
	if(!tmpStr.IsEmpty())
	{
		//CString szName = pMF->GetDepartmentName(tmpStr);
		CString szName = tmpStr;
		if(!szName.IsEmpty())
		{
			szWorkPlace.AppendFormat(_T(" - %s"), szName);
		}
	}
	rpt.GetReportHeader()->SetValue(_T("WorkPlace"), szWorkPlace);
	rs.GetValue(_T("IVF_ISDISCOUNT"), szIsDiscount);
	rs.GetValue(_T("IVF_GIAYGIOITHIEU"), szGiayGioiThieu);

	if (szIsDiscount == _T("1"))
	{
		rpt.GetReportHeader()->SetValue(_T("DiscountIVF"), _T("Đối tượng được miễn giảm"));
		rpt.GetReportHeader()->SetValue(_T("SoQuyetDinh"), szGiayGioiThieu);
	}
	szSQL.Format(_T("SELECT he_receptno as receptno, ") \
		_T("	(SELECT hrl_name FROM hms_roomlist WHERE hrl_deptid=he_deptid AND hrl_id=he_roomid) as roomname, ") \
		_T("	(SELECT get_username(hrl_doctorid) FROM hms_roomlist WHERE hrl_deptid=he_deptid AND hrl_id=he_roomid) as doctorname ") \
		_T(" FROM hms_exam WHERE he_docno =%ld ORDER BY he_receptidx "), pMF->m_nDocumentNo);
	rsl.ExecSQL(szSQL);
	CReportSection* rptDetail ;
	while (!rsl.IsEOF()){
		rptDetail = rpt.AddDetail();
		rptDetail->SetValue(_T("ExamRoom"), rsl.GetValue(_T("roomname")));
		rptDetail->SetValue(_T("SheetNo"), rsl.GetValue(_T("receptno")));	
		rptDetail->SetValue(_T("DoctorName"), rsl.GetValue(_T("doctorname")));		
		rsl.MoveNext();
	}
	rs.GetValue(_T("healthexam"), tmpStr);
	if(tmpStr == _T("Y"))
	{
		rpt.GetReportFooter()->SetValue(_T("HealthExamType"), _T("(Khám sức khỏe theo hợp đồng)"));

	}

	if(pMF->m_szDept == _T("TYC"))
	{
		rpt.GetReportFooter()->SetValue(_T("WIFI_NAME"), pMF->GetSelectionString(_T("WIFI"), _T("WIFI_NAME")));
		rpt.GetReportFooter()->SetValue(_T("WIFI_PASSWORD"), pMF->GetSelectionString(_T("WIFI"), _T("WIFI_PASSWORD")));
	}
	_pRpt = &rpt;
	rpt.SetPrintCallback(_OnCheckPrintVacineCertificateFnc);
	
	//rpt.Print(m_bDirect);	
	rpt.PrintPreview();
	
}
void CHMSCovid19VaccinInforDialog::OnPrintVer2(bool m_bPreview, bool m_bDirect)
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();	
	static CReport rpt;
	CReport rpt2;
	CString szSQL, tmpStr, szWhere, szDynLabel1, szDynLabel2, szDynText1, szDynText2;
	CRecord rs(&pMF->m_db);
	CRecord rsl(&pMF->m_db);	
	m_bDirect = false;

	if (!rpt.Init(_T("Reports/HMS/HR_CHUNGNHANTIEMVACCINE_MAU2.RPT")))
		{
			_msg(_T("Reports/HMS/HR_CHUNGNHANTIEMVACCINE_MAU2.RPT"));
			return;
		}	

	szSQL.Format(_T(" SELECT hd_patientno AS patientno,") \
			_T("   hd_docno          AS docno,") \
			_T("   trim(hp_surname") \
			_T("   ||' '") \
			_T("   ||hp_midname") \
			_T("   ||' '") \
			_T("   ||hp_firstname)                                             AS pname,") \
			_T("   to_char(hp_birthdate, 'DD/MM/YYYY')                         AS birthdate,") \
			_T("   hp_sin                                                      AS socmnd,") \
			_T("   HD_TELEPHONE                                                AS phone,") \
			_T("   hms_getaddress(nvl(hd_provid, hp_provid), nvl(hd_distid, hp_distid), nvl(hd_villid, hp_villid))             AS DiaChi,") \
			_T("  SYS_GetProvillName(hp_provid)                               AS provill,") \
			_T("  SYS_GetDistrictName(hp_distid)                              AS district,") \
			_T("  Sys_GetVillageName(hp_villid)                               AS village,") \
			_T(" CASE") \
			_T("     WHEN VC_THE3=1") \
			_T("     THEN TO_CHAR(VC_DATE3, 'DD/MM/YYYY')") \
			_T("     ELSE NULL") \
			_T("   END AS thoigiantiemlan3,") \
			_T("   (SELECT VC_LOT FROM M_VACCINE_LIST WHERE VC_VACCINE3=VC_CODE") \
			_T("   ) AS lot3,") \
			_T("   (SELECT VC_NAME FROM M_VACCINE_LIST WHERE VC_VACCINE3=VC_CODE") \
			_T("   ) AS vaccine3,") \
			_T("   CASE") \
			_T("     WHEN VC_THE4=1") \
			_T("     THEN TO_CHAR(VC_DATE4, 'DD/MM/YYYY')") \
			_T("     ELSE NULL") \
			_T("   END AS thoigiantiemlan4,") \
			_T("   (SELECT VC_LOT FROM M_VACCINE_LIST WHERE VC_VACCINE4=VC_CODE") \
			_T("   ) AS lot4,") \
			_T("   (SELECT VC_NAME FROM M_VACCINE_LIST WHERE VC_VACCINE4=VC_CODE") \
			_T("   ) AS vaccine4") \
			_T(" FROM hms_patient") \
			_T(" LEFT JOIN hms_doc") \
			_T(" ON(hd_patientno=hp_patientno)") \
			_T(" LEFT JOIN RM_VACCINE_INFOR") \
			_T(" ON (hp_patientno=VC_PATIENTNO)") \
			_T(" WHERE hd_docno=%ld"), pMF->m_nDocumentNo);

	//_msg(_T("%s"), szSQL);
	int ret = rs.ExecSQL(szSQL);

	if (rs.IsEOF())
		return;


	//Report Header
	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), pMF->m_CompanyInfo.sc_pname);
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), pMF->m_CompanyInfo.sc_name);
	tmpStr = pMF->GetSysDateTime();


	CString printDate, szExamDate;
	rs.GetValue(_T("admitdate"), szExamDate);

	//MessageBox(tmpStr);
	
	tmpStr.Format(rpt.GetReportHeader()->GetValue(_T("ExamDate")), szExamDate.Mid(11, 5), szExamDate.Mid(8, 2), szExamDate.Mid(5, 2), szExamDate.Left(4));
	rpt.GetReportHeader()->SetValue(_T("Examdate"), tmpStr);

	printDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),
					 tmpStr.Mid(11, 5), tmpStr.Mid(8, 2), tmpStr.Mid(5, 2), tmpStr.Left(4));

	rpt.GetReportHeader()->SetValue(_T("PrintDate"), printDate);
	rpt.GetReportHeader()->SetValue(_T("PatientNo"), rs.GetValue(_T("patientno")));
	rs.GetValue(_T("docno"), tmpStr);	

	rpt.GetReportHeader()->SetValue(_T("DocumentNo"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Barcode[128A]"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Barcode[128B]"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Barcode[128C]"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Barcode[39]"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Barcode[93]"), tmpStr);

	StringUpper(rs.GetValue(_T("pname")), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("PatientName"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("yearofbirth"), rs.GetValue(_T("birthdate")));

	rpt.GetReportHeader()->SetValue(_T("socmnd"), rs.GetValue(_T("socmnd")));
	rpt.GetReportHeader()->SetValue(_T("phone"), rs.GetValue(_T("phone")));
	
	tmpStr.Empty();
	rpt.GetReportHeader()->SetValue(_T("Age"), rs.GetValue(_T("age")));
	rpt.GetReportHeader()->SetValue(_T("Sex"), rs.GetValue(_T("sex")));
	rpt.GetReportHeader()->SetValue(_T("Occupation"), rs.GetValue(_T("occupation")));
	tmpStr.Format(_T("%s - %s - %s"), rs.GetValue(_T("village")), rs.GetValue(_T("district")), rs.GetValue(_T("provill")));
	rpt.GetReportHeader()->SetValue(_T("Address"), tmpStr);
	rs.GetValue(_T("detailaddress"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("DetailAddress"), tmpStr);

	rpt.GetReportHeader()->SetValue(_T("thoigiantiemlan3"), rs.GetValue(_T("thoigiantiemlan3")));
	rpt.GetReportHeader()->SetValue(_T("vaccine3"), rs.GetValue(_T("vaccine3")));
	rpt.GetReportHeader()->SetValue(_T("lot3"), rs.GetValue(_T("lot3")));

	rpt.GetReportHeader()->SetValue(_T("thoigiantiemlan4"), rs.GetValue(_T("thoigiantiemlan4")));
	rpt.GetReportHeader()->SetValue(_T("vaccine4"), rs.GetValue(_T("vaccine4")));
	rpt.GetReportHeader()->SetValue(_T("lot4"), rs.GetValue(_T("lot4")));

	tmpStr.Empty();
	CString szWorkPlace,szIsDiscount,szGiayGioiThieu ;
	rs.GetValue(_T("workplace"), szWorkPlace);
	rs.GetValue(_T("hp_department"), tmpStr);
	if(!tmpStr.IsEmpty())
	{
		//CString szName = pMF->GetDepartmentName(tmpStr);
		CString szName = tmpStr;
		if(!szName.IsEmpty())
		{
			szWorkPlace.AppendFormat(_T(" - %s"), szName);
		}
	}
	rpt.GetReportHeader()->SetValue(_T("WorkPlace"), szWorkPlace);
	rs.GetValue(_T("IVF_ISDISCOUNT"), szIsDiscount);
	rs.GetValue(_T("IVF_GIAYGIOITHIEU"), szGiayGioiThieu);

	if (szIsDiscount == _T("1"))
	{
		rpt.GetReportHeader()->SetValue(_T("DiscountIVF"), _T("Đối tượng được miễn giảm"));
		rpt.GetReportHeader()->SetValue(_T("SoQuyetDinh"), szGiayGioiThieu);
	}
	szSQL.Format(_T("SELECT he_receptno as receptno, ") \
		_T("	(SELECT hrl_name FROM hms_roomlist WHERE hrl_deptid=he_deptid AND hrl_id=he_roomid) as roomname, ") \
		_T("	(SELECT get_username(hrl_doctorid) FROM hms_roomlist WHERE hrl_deptid=he_deptid AND hrl_id=he_roomid) as doctorname ") \
		_T(" FROM hms_exam WHERE he_docno =%ld ORDER BY he_receptidx "), pMF->m_nDocumentNo);
	rsl.ExecSQL(szSQL);
	CReportSection* rptDetail ;
	while (!rsl.IsEOF()){
		rptDetail = rpt.AddDetail();
		rptDetail->SetValue(_T("ExamRoom"), rsl.GetValue(_T("roomname")));
		rptDetail->SetValue(_T("SheetNo"), rsl.GetValue(_T("receptno")));	
		rptDetail->SetValue(_T("DoctorName"), rsl.GetValue(_T("doctorname")));		
		rsl.MoveNext();
	}
	rs.GetValue(_T("healthexam"), tmpStr);
	if(tmpStr == _T("Y"))
	{
		rpt.GetReportFooter()->SetValue(_T("HealthExamType"), _T("(Khám sức khỏe theo hợp đồng)"));

	}

	if(pMF->m_szDept == _T("TYC"))
	{
		rpt.GetReportFooter()->SetValue(_T("WIFI_NAME"), pMF->GetSelectionString(_T("WIFI"), _T("WIFI_NAME")));
		rpt.GetReportFooter()->SetValue(_T("WIFI_PASSWORD"), pMF->GetSelectionString(_T("WIFI"), _T("WIFI_PASSWORD")));
	}

	_pRpt = &rpt;
	rpt.SetPrintCallback(_OnCheckPrintVacineCertificateFnc);
	//rpt.Print(m_bDirect);	
	rpt.PrintPreview();
} 

int CHMSCovid19VaccinInforDialog::OnAddHMSCovid19VaccinInforDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSCovid19VaccinInforDialog::OnEditHMSCovid19VaccinInforDialog()
{
 	/*if(GetMode() != VM_VIEW)
 		return -1;*/

 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSCovid19VaccinInforDialog::OnDeleteHMSCovid19VaccinInforDialog(){
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
 		OnCancelHMSCovid19VaccinInforDialog();
 	}
	return 0;
}
int CHMSCovid19VaccinInforDialog::OnSaveHMSCovid19VaccinInforDialog()
{
 	if(!IsValidateData())
 		return -1;	

 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;	
	szSQL.Format(_T("UPDATE_VACCINE_INFOR(%ld, %d, '%s', %d, '%s', TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS'), '%s' , TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS'), TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS'), %d, '%s', TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS'), %d, '%s', TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')) "), pMF->m_nPatientNo , m_bTheFirst, m_szVaccine1Key,m_bTheSecond, m_szVaccine2Key, pMF->GetSysDateTime() ,pMF->GetCurrentUser(), m_szFirstDate, m_szSecondDate, m_bThe3th, m_szVaccine3Key, m_szDate3, m_bThe4th, m_szVaccine4Key, m_szDate4); 	
    //_msg(_T("%s"), szSQL);
 	int ret = str2int(pMF->ExecDML(szSQL));	
 	if(ret > 0)
 	{
 		ShowMessageBox(_T("Have a nice day!, Nhớ thực hiện 5K bạn nhé"));
 		SetMode(VM_VIEW);
		CGuiDialog::OnOK();
 	}
 	else if (ret == -1)
 	{
		ShowMessageBox(_T("Chưa nhập thông tin Vaccine lần 1"));	
 	}

	else if (ret == -2)
 	{
		ShowMessageBox(_T("Chưa nhập thông tin Vaccine lần 2"));	
 	}

	else if (ret == -3)
 	{
		ShowMessageBox(_T("Chưa nhập thông tin Vaccine lần 3"));	
 	}

	else if (ret == -4)
 	{
		ShowMessageBox(_T("Chưa nhập thông tin Vaccine lần 4"));	
 	}
	
	else if (ret == -5)
 	{
		ShowMessageBox(_T("Ngày tiêm Vaccine lần 1 trùng với ngày tiêm vaccine lần 2"));	
 	}
	else if (ret == -6)
 	{
		ShowMessageBox(_T("Ngày tiêm Vaccine lần 3 trùng với ngày tiêm vaccine lần 4"));	
 	}

	else
	{
	}
 	return ret;
 	return 0;
}
int CHMSCovid19VaccinInforDialog::OnCancelHMSCovid19VaccinInforDialog(){
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
int CHMSCovid19VaccinInforDialog::OnHMSCovid19VaccinInforDialogListLoadData()
{
	return 0;
}

void CHMSCovid19VaccinInforDialog::OnSetupVaccineSelect()
	
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
	if(!pMF->CheckPermission(_T("RM.100.1")))
	{
	 ShowMessageBox(_T("Cấp quyền RM.100.1 để sử dụng chức năng này!"));
	 return;
	}
	CHMSThietLap_Thongtin_Vaccine dlg(this);
	dlg.DoModal();
}

void CHMSCovid19VaccinInforDialog::OnSetupDrugandMaterial()
	
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
	if(!pMF->CheckPermission(_T("RM.100.1")))
	{
	 ShowMessageBox(_T("Cấp quyền RM.100.1 để sử dụng chức năng này!"));
	 return;
	}
	CHMSThietLap_Thongtin_Vattu dlg(this);
	dlg.DoModal();
}