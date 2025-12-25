#include "HMSTreatmentCareEMInputDialog.h"
#include "HMSTreatmentCareEMDialog.h"
#include "MainFrm.h"
#include "HMSReasonDialog.h"
#include "HMSConfirmDialogC13.h"
//#include "PhieuChamSocBenhNhanTruocPhauThuat.h"
#include "HMSReportForms/PrintForms.h"
#include "HMSExt/ReportUtils.h"

static void _OnMonthSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSTreatmentCareEMDialog* )pWnd)->OnMonthSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnMonthSelendokFnc(CWnd *pWnd){
	((CHMSTreatmentCareEMDialog *)pWnd)->OnMonthSelendok();
}
/*static void _OnMonthSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentCareEMDialog *)pWnd)->OnMonthKillfocus();
}*/
/*static void _OnMonthKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentCareEMDialog *)pWnd)->OnMonthKillfocus();
}*/
static long _OnMonthLoadDataFnc(CWnd *pWnd){
	return ((CHMSTreatmentCareEMDialog *)pWnd)->OnMonthLoadData();
}
/*static void _OnMonthAddNewFnc(CWnd *pWnd){
	((CHMSTreatmentCareEMDialog *)pWnd)->OnMonthAddNew();
}*/
static long _OnTreatListLoadDataFnc(CWnd *pWnd){
	return ((CHMSTreatmentCareEMDialog*)pWnd)->OnTreatListLoadData();
} 
static void _OnTreatListDblClickFnc(CWnd *pWnd){
	((CHMSTreatmentCareEMDialog*)pWnd)->OnTreatListDblClick();
} 
static void _OnTreatListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSTreatmentCareEMDialog*)pWnd)->OnTreatListSelectChange(nOldItem, nNewItem);
} 
static int _OnTreatListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSTreatmentCareEMDialog*)pWnd)->OnTreatListDeleteItem();
}

static int _OnTreatListDrugOrderCopyItemFnc(CWnd *pWnd){
	 return ((CHMSTreatmentCareEMDialog*)pWnd)->OnTreatListDrugOrderCopyItem();
}


static int _OnTreatListDrugOrderAdviceItemFnc(CWnd *pWnd){
	 return ((CHMSTreatmentCareEMDialog*)pWnd)->OnTreatListDrugOrderAdviceItem();
}


static long _OnDateListLoadDataFnc(CWnd *pWnd){
	return ((CHMSTreatmentCareEMDialog*)pWnd)->OnDateListLoadData();
} 
static void _OnDateListDblClickFnc(CWnd *pWnd){
	((CHMSTreatmentCareEMDialog*)pWnd)->OnDateListDblClick();
} 
static void _OnDateListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSTreatmentCareEMDialog*)pWnd)->OnDateListSelectChange(nOldItem, nNewItem);
} 
static int _OnDateListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSTreatmentCareEMDialog*)pWnd)->OnDateListDeleteItem();
} 
static void _OnCareSelectFnc(CWnd *pWnd){
	CHMSTreatmentCareEMDialog *pVw = (CHMSTreatmentCareEMDialog *)pWnd;
	pVw->OnCareSelect();
} 


static void _OnBeforeOptSelectFnc(CWnd *pWnd){
	CHMSTreatmentCareEMDialog *pVw = (CHMSTreatmentCareEMDialog *)pWnd;
	//pVw->OnBeforeOptSelect();
}


static void _OnCareAfterOptSelectFnc(CWnd *pWnd){
	CHMSTreatmentCareEMDialog *pVw = (CHMSTreatmentCareEMDialog *)pWnd;
	//pVw->OnCareAfterOptSelect();
}

static void _OnCareOfNurseSelectFnc(CWnd *pWnd){
	CHMSTreatmentCareEMDialog *pVw = (CHMSTreatmentCareEMDialog *)pWnd;
	//pVw->OnCareOfNurseSelect();
}

static void _OnPrintSelectFnc(CWnd *pWnd){
	CHMSTreatmentCareEMDialog *pVw = (CHMSTreatmentCareEMDialog *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSTreatmentCareEMDialog *pVw = (CHMSTreatmentCareEMDialog *)pWnd;
	pVw->OnCloseSelect();
}

static void _OnLockSelectFnc(CWnd *pWnd){
	CHMSTreatmentCareEMDialog *pVw = (CHMSTreatmentCareEMDialog *)pWnd;
	pVw->OnLockSelect();
}

static void _OnUnLockSelectFnc(CWnd *pWnd){
	CHMSTreatmentCareEMDialog *pVw = (CHMSTreatmentCareEMDialog *)pWnd;
	pVw->OnUnLockSelect();
}

static int _OnShowHistoryFnc(CWnd *pWnd){
	return ((CHMSTreatmentCareEMDialog*)pWnd)->OnShowHistory();
}

static int _OnAddHMSTreatmentCareDialogFnc(CWnd *pWnd){
	 return ((CHMSTreatmentCareEMDialog*)pWnd)->OnAddHMSTreatmentCareDialog();
} 
static int _OnEditHMSTreatmentCareDialogFnc(CWnd *pWnd){
	 return ((CHMSTreatmentCareEMDialog*)pWnd)->OnEditHMSTreatmentCareDialog();
} 
static int _OnDeleteHMSTreatmentCareDialogFnc(CWnd *pWnd){
	 return ((CHMSTreatmentCareEMDialog*)pWnd)->OnDeleteHMSTreatmentCareDialog();
} 
static int _OnSaveHMSTreatmentCareDialogFnc(CWnd *pWnd){
	 return ((CHMSTreatmentCareEMDialog*)pWnd)->OnSaveHMSTreatmentCareDialog();
} 
static int _OnCancelHMSTreatmentCareDialogFnc(CWnd *pWnd){
	 return ((CHMSTreatmentCareEMDialog*)pWnd)->OnCancelHMSTreatmentCareDialog();
} 
CHMSTreatmentCareEMDialog::CHMSTreatmentCareEMDialog(CWnd *pParent, int nMode, long nDocumentNo):
	CGuiDialog(pParent)
{
	CGuiDialog::SetMode(nMode);
	m_nDlgWidth = 965;
	m_nDlgHeight = 605;
	SetDefaultValues();
	m_nDocumentNo = nDocumentNo;
}
CHMSTreatmentCareEMDialog::~CHMSTreatmentCareEMDialog(){
}
void CHMSTreatmentCareEMDialog::OnCreateComponents(){
	m_wndTreatmentInformation.Create(this, _T("Treatment Information"), 195, 5, 960, 570);
	m_wndMonthLabel.Create(this, _T("Month"), 7, 5, 87, 30);
	m_wndMonth.Create(this,92, 5, 190, 30); 

	m_wndTreatList.Create(this,200, 35, 955, 565); 
	m_wndDateList.Create(this,5, 35, 190, 565); 
	m_wndCare.Create(this, _T("&Add"), 195, 575, 275, 600);
	m_wndBeforeOpt.Create(this, _T("CS trước mổ"), 280, 575, 360, 600);
	m_wndCareAfterOpt.Create(this, _T("CS sau mổ"), 365, 575, 485, 600);
	m_wndCareOfNurse.Create(this, _T("CS của điều dưỡng"), 490, 575, 600, 600);
/*
	m_wndParaclinic.Create(this, _T("&Para-clinic"), 365, 575, 445, 600);
	m_wndSurgeryOpt.Create(this, _T("&Surgery-opt"), 450, 575, 530, 600);
*/
	m_wndPrint.Create(this, _T("&Print"), 605, 575, 685, 600);
	m_wndClose.Create(this, _T("Close"), 880, 575, 960, 600);
	m_wndLock.Create(this, _T("&Confirm"), 5, 575, 90, 600);
    m_wndUnLock.Create(this, _T("&Disconfirm"), 95, 575, 190, 600);
	
}
void CHMSTreatmentCareEMDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndMonth.SetCheckValue(true);
	m_wndMonth.LimitText(35);


	m_wndMonth.InsertColumn(0, _T("Month"), CFMT_TEXT, 150);
	m_wndMonth.Format(1, 0);


	m_wndTreatList.InsertColumn(1, _T("Diễn biến của bệnh nhân"), CFMT_TEXT|CFMT_FIXSIZE, 300);
	m_wndTreatList.InsertColumn(2, _T("Hướng xử trí"), CFMT_TEXT|CFMT_FIXSIZE, 300);
	m_wndTreatList.InsertColumn(3, _T("Bác sĩ, điều dưỡng"), CFMT_TEXT|CFMT_FIXSIZE, 150);

	m_wndDateList.InsertColumn(0, _T("Số phiếu"), CFMT_NUMBER, 60);
	m_wndDateList.InsertColumn(1, _T("Ngày giờ"), CFMT_DATETIME, 140);
	m_wndDateList.InsertColumn(2, _T(""), CFMT_TEXT, 0);//idx
	m_wndDateList.InsertColumn(3, _T(""), CFMT_TEXT, 0);//idx
	m_wndDateList.InsertColumn(4, _T("Bác sĩ"), CFMT_TEXT, 80);//idx


}
void CHMSTreatmentCareEMDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndMonth.SetEvent(WE_SELENDOK, _OnMonthSelendokFnc);
	//m_wndMonth.SetEvent(WE_SETFOCUS, _OnMonthSetfocusFnc);
	//m_wndMonth.SetEvent(WE_KILLFOCUS, _OnMonthKillfocusFnc);
	m_wndMonth.SetEvent(WE_SELCHANGE, _OnMonthSelectChangeFnc);
	m_wndMonth.SetEvent(WE_LOADDATA, _OnMonthLoadDataFnc);
	//m_wndMonth.SetEvent(WE_ADDNEW, _OnMonthCareNewFnc);
	m_wndTreatList.SetEvent(WE_SELCHANGE, _OnTreatListSelectChangeFnc);
	m_wndTreatList.SetEvent(WE_LOADDATA, _OnTreatListLoadDataFnc);
	m_wndTreatList.SetEvent(WE_DBLCLICK, _OnTreatListDblClickFnc);

	m_wndTreatList.AddEvent(1, _T("Delete"), _OnTreatListDeleteItemFnc);

	m_wndDateList.SetEvent(WE_SELCHANGE, _OnDateListSelectChangeFnc);
	m_wndDateList.SetEvent(WE_LOADDATA, _OnDateListLoadDataFnc);
	m_wndDateList.SetEvent(WE_DBLCLICK, _OnDateListDblClickFnc);
	
	m_wndDateList.AddEvent(1, _T("Delete"), _OnDateListDeleteItemFnc);
	m_wndDateList.AddEvent(0, _T("-"), NULL);
	m_wndDateList.AddEvent(2, _T("Show History"), _OnShowHistoryFnc, 0, 0, 0);

	m_wndCare.SetEvent(WE_CLICK, _OnCareSelectFnc);
	m_wndBeforeOpt.SetEvent(WE_CLICK, _OnBeforeOptSelectFnc);
	m_wndCareAfterOpt.SetEvent(WE_CLICK, _OnCareAfterOptSelectFnc);
	m_wndCareOfNurse.SetEvent(WE_CLICK, _OnCareOfNurseSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndLock.SetEvent(WE_CLICK, _OnLockSelectFnc);
	m_wndUnLock.SetEvent(WE_CLICK, _OnUnLockSelectFnc);
	int nMode = GetMode();
	SetMode(nMode);
	OnDateListLoadData();
	
	m_wndMonth.EnableWindow(TRUE);
	m_wndBeforeOpt.EnableWindow(FALSE);
	m_wndCareAfterOpt.EnableWindow(FALSE);
	m_wndCareOfNurse.EnableWindow(FALSE);

}
void CHMSTreatmentCareEMDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndMonth.GetDlgCtrlID(), m_szMonthKey);

}
void CHMSTreatmentCareEMDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSTreatmentCareEMDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSTreatmentCareEMDialog::SetDefaultValues(){

	m_szMonthKey.Empty();

}
int CHMSTreatmentCareEMDialog::SetMode(int nMode){
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
 			EnableButtons(FALSE, -1);
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
void CHMSTreatmentCareEMDialog::OnMonthSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSTreatmentCareEMDialog::OnMonthSelendok(){
	UpdateData(TRUE);
	OnDateListLoadData();
}
/*void CHMSTreatmentCareEMDialog::OnMonthSetfocus(){
	
}*/
/*void CHMSTreatmentCareEMDialog::OnMonthKillfocus(){
	
}*/
long CHMSTreatmentCareEMDialog::OnMonthLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;

	
	///
	if(m_wndMonth.IsSearchKey() && !m_szMonthKey.IsEmpty()){
		szWhere.Format(_T(" and month='%s' "), m_szMonthKey);
	};

	szSQL.Format(_T(" SELECT *") \
_T(" FROM") \
_T("   ( SELECT DISTINCT to_char(hci_date,'MM/YYYY') AS MONTH") \
_T("   FROM HMS_CAREINFO") \
_T("   WHERE hci_docno = %ld") \
_T("   ) tbl") \
_T(" WHERE 1=1 %s ORDER BY month ") , m_nDocumentNo, szWhere);


	m_wndMonth.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	m_wndMonth.AddItems(_T("Tất cả"), NULL);
	while(!rs.IsEOF()){ 
		m_wndMonth.AddItems(
			rs.GetValue(_T("month")), 
			NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CHMSTreatmentCareEMDialog::OnMonthAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSTreatmentCareEMDialog::OnTreatListDblClick()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	int nSel  = m_wndTreatList.GetCurSel();
	if(nSel < 0) return;
	long nUID = str2long(m_wndTreatList.GetItemText(nSel, 2));

	int nMode = VM_EDIT;

	if(IsLocked())
		nMode = VM_VIEW;	

	CHMSTreatmentCareEMInputDialog dlg(this, nMode, m_nDocumentNo, m_nUID);
		
	if(dlg.DoModal() == IDOK)

	{
			int nSel = m_wndDateList.GetCurSel();
			OnDateListLoadData();
			m_wndDateList.SetCurSel(nSel);
	}	
}

void CHMSTreatmentCareEMDialog::OnTreatListSelectChange(int nOldItem, int nNewItem)
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();	
} 
int CHMSTreatmentCareEMDialog::OnTreatListDeleteItem()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	int nSel = m_wndTreatList.GetCurSel();
	if(nSel < 0)
		return 0;
	CString tmpStr;
	CString szSQL;
	if(IsLocked())
	{
		ShowMessageBox(_T("Phiếu đã được khóa. Không cho phép xóa đề mục"));
		return 0;
	}
	
		int ret = ShowMessageBox(_T("Bạn có chắc chắn muốn xóa phiếu đã chọn không?"), MB_YESNO);
		if(ret == IDNO)
			return 0;
		szSQL.Format(_T("HMS_CAREINFO_DELETE(%ld, %ld, '%s') "),m_nDocumentNo,m_nUID, pMF->GetCurrentUser());
		ret = str2int(pMF->ExecDML(szSQL));
		if(ret <= 0)
		{
			if(ret < -1)
			{
				ShowMessageBox(_T("Phiếu đã được thêm cận lâm sàng, PTTT hoặc thuốc, Không cho phép xóa"));
			}
			else
				ShowMessageBox(_T("Không xóa được phiếu điều trị"));
		}
		OnTreatListLoadData();
	 return 0;
} 


#define COLOR_CAPTION RGB(64,128,192)
#define COLOR_GROUP RGB(225, 225, 225)
#define COLOR_GROUP1 RGB(192,192,255)
#define COLOR_GROUP2 RGB(192,192,255)

long CHMSTreatmentCareEMDialog::OnTreatListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CRecord rsl(&pMF->m_db);
	CRecord rs2(&pMF->m_db);
	CString szSQL;
	int nSel = m_wndDateList.GetCurSel();
	if(nSel < 0)
		return 0;
	
	

	CString szPulse, szTemperature, szDisease, szTreatment, szDiet;
	CString tmpStr;
	int nItem=0;
	long nOID;
	int nIndex = 0;
	m_wndTreatList.BeginLoad();
	
	CGridListItem* o = new CGridListItem();
	CGridListItem* o2 = NULL;
	CGridCell* cell = new CGridCell();
	
	

	szSQL.Format(_T("SELECT get_username(hci_doctor) as hci_doctor, hci_pulse, hci_temperature, ") \
		_T(" hci_disease, hci_care, ") \
		_T(" hci_bloodpressure, hci_bloodpressurex, hci_breathinterval, hci_sp02,  ") \
		_T(" trunc_date(hci_date) AS hci_date, hsie_diet, HSIE_NURSEASSISTANCE, NVL(hci_treatidx, 0) as treat_idx ") \
		_T(" FROM HMS_CAREINFO ") \
		_T(" LEFT JOIN HMS_SIEXAM ON (hsie_idx = hci_treatidx and hsie_docno = hci_docno)") \
		_T(" WHERE hci_docno=%ld and hci_idx=%ld ") \
		_T(" ORDER BY trunc(hci_date), hci_idx "),
		m_nDocumentNo, m_nUID);
	rs.ExecSQL(szSQL);

	

	CString szDoctor, szNewDate, szOldDate, szNurse, szNurseAssist, szDietAssist, szCNS;
	CString szCare;
	int nPulse;
	double nTemperature;
	int nBloodPreL;
	int nBloodPreH;
	int nBreathInterval;
	int nSP02;
	long nTreatIdx = 0;
	while(!rs.IsEOF())
	{
		rs.GetValue(_T("hci_pulse"), nPulse);
		rs.GetValue(_T("hci_temperature"), nTemperature);
		rs.GetValue(_T("hci_BLOODPRESSURE"), nBloodPreL);
		rs.GetValue(_T("hci_BLOODPRESSUREX"), nBloodPreH);
		rs.GetValue(_T("hci_BREATHINTERVAL"), nBreathInterval);
		rs.GetValue(_T("hci_disease"), szDisease);
		rs.GetValue(_T("hci_doctor"), szDoctor);
		rs.GetValue(_T("hci_care"), szCare);
		rs.GetValue(_T("hci_sp02"), nSP02);

		CString szFuncs;
		szFuncs.Empty();
		if(nPulse > 0)
		{
			szFuncs.AppendFormat(_T(" M: %d; \r\n"), nPulse);
		}
		if(nTemperature > 0)
		{
			szFuncs.AppendFormat(_T(" T: %.1f; \r\n"), nTemperature);
		}

		if(nBloodPreL+nBloodPreH > 0)
		{

			szFuncs.AppendFormat(_T(" HA: %d/%d; \r\n"), nBloodPreL, nBloodPreH);
		}
		if(nBreathInterval > 0)
		{
			szFuncs.AppendFormat(_T(" NT: %d; \r\n"), nBreathInterval);
		}
		if(nSP02 > 0)
		{
			szFuncs.AppendFormat(_T(" SP02: %d; \r\n"), nSP02);
		}

		//if(!szFuncs.IsEmpty())
		//{
			szCNS.Format(_T("Chức năng sống: \r\n%s \r\nDiễn biến: \r\n %s"), szFuncs, szDisease);
		//}

		rs.GetValue(_T("hci_date"), szNewDate);

		//if(szNewDate != szOldDate)


		rs.GetValue(_T("hsie_nurseassistance"),szNurseAssist);
		rs.GetValue(_T("hsie_diet"), szDiet);
		rs.GetValue(_T("treat_idx"), nTreatIdx);
		//if (szNurseAssist.IsEmpty() || szDiet.IsEmpty())
		if (nTreatIdx == 0)
		{
			szSQL.Format(_T("SELECT hsie_diet, hsie_nurseassistance ") \
				_T(" FROM hms_siexam WHERE hsie_docno=%ld ") \
				_T(" and trunc_date(hsie_date) = TO_DATE('%s', 'YYYY-MM-DD HH24:MI:SS') ") \
				_T(" order by hsie_date desc"), m_nDocumentNo, szNewDate);
			rs2.ExecSQL(szSQL);
			rs2.GetValue(_T("hsie_nurseassistance"),szNurseAssist);
			rs2.GetValue(_T("hsie_diet"), szDiet);
		}
		tmpStr = pMF->GetSelectionString(_T("HMS_DIET_MODE"), szDiet);
		if(!tmpStr.IsEmpty())
		{
			szDiet = tmpStr;
		}
		tmpStr = pMF->GetSelectionString(_T("HMS_CHEDOHOLY"), szNurseAssist);
		if (!tmpStr.IsEmpty())
		{
			szNurseAssist = tmpStr;
		}
		szDietAssist.Format(_T("\r\n\r\n\r\n %s\r\n %s "), szDiet, szNurseAssist);
		szOldDate = szNewDate;

		szDietAssist.AppendFormat(_T("\r\n\r\n%s"), szDoctor);
		m_wndTreatList.AddItems(szCNS, szCare, szDietAssist);
		szDietAssist = _T("");
		rs.MoveNext();
	}


	
	m_wndTreatList.EndLoad();
	
	return 0;
}
void CHMSTreatmentCareEMDialog::OnDateListDblClick(){
    CPrintForms printer;
    printer.TM_OnPrintPhieuChamSoc(m_nDocumentNo, m_nUID, true);
} 
void CHMSTreatmentCareEMDialog::OnDateListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndBeforeOpt.EnableWindow(FALSE);
	m_wndSurgeryOpt.EnableWindow(FALSE);
	m_wndParaclinic.EnableWindow(FALSE);
	if(nNewItem < 0)
	{
		return;
	}
	m_nUID = str2long(m_wndDateList.GetItemText(nNewItem, 2));
	CString szLocked = m_wndDateList.GetItemText(nNewItem, 3);
	if(nNewItem != nOldItem)
	{
		OnTreatListLoadData();
	}
	if(szLocked == _T("Y"))
	{
		m_wndLock.EnableWindow(FALSE);
		m_wndUnLock.EnableWindow(TRUE);
	}
	else
	{
		m_wndLock.EnableWindow(TRUE);
		m_wndUnLock.EnableWindow(FALSE);
	}

	
} 
int CHMSTreatmentCareEMDialog::OnDateListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	int nSel = m_wndDateList.GetCurSel();
	if(nSel < 0)
		return 0;
	CString tmpStr;
	CString szSQL;

	if(IsLocked())
	{
		ShowMessageBox(_T("Phiếu đã được khóa. Không cho phép xóa đề mục"));
		return 0;
	}
	int ret = ShowMessageBox(_T("Bạn có chắc chắn muốn xóa phiếu đã chọn không?"), MB_YESNO);
	if(ret == IDNO)
		return 0;
	szSQL.Format(_T("HMS_CAREINFO_DELETE(%ld, %ld, '%s') "),m_nDocumentNo,m_nUID, pMF->GetCurrentUser());
	ret = str2int(pMF->ExecDML(szSQL));
	if(ret <= 0)
	{
			if(ret < -1)
			{
				ShowMessageBox(_T("Phiếu đã được thêm cận lâm sàng, PTTT hoặc thuốc, Không cho phép xóa"));
			}
			else
				ShowMessageBox(_T("Không xóa được phiếu điều trị"));
		return 0;
	}
	OnDateListLoadData();
	m_wndTreatList.DeleteAllItems();
	 return 0;
} 
long CHMSTreatmentCareEMDialog::OnDateListLoadData(){
	
	
	int nCount = 0;
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	CString tmpStr, szDate, szWhere;
	szWhere.Empty();
	if(m_szMonthKey == _T("Tất cả"))
	{
	}
	else if(!m_szMonthKey.IsEmpty())
	{
		szWhere.Format(_T(" and TO_CHAR(hci_date, 'MM/YYYY')='%s'"), m_szMonthKey);
	}
	szWhere.AppendFormat(_T(" and hci_type ='CS' "));
	if(pMF->IsOutPatient() || pMF->IsCancerPatient())
	{
		szWhere.AppendFormat(_T("and (hci_treattime=0 or hci_treattime=%d) "), pMF->GetTreatTime());
		
	}
	szSQL.Format(_T("SELECT hci_idx as treat_uid, TO_CHAR(hci_date, 'YYYY-MM-DD HH24:MI') as treat_date, hci_locked as islocked, HCI_DOCTOR as doctor") \
		_T(" FROM HMS_CAREINFO ") \
		_T(" WHERE hci_deptid in ('C1.1', 'C1.2', 'C1.3') AND hci_docno = %ld %s  ") \
		_T(" ORDER BY hci_idx "), m_nDocumentNo, szWhere);
	
	m_wndDateList.BeginLoad(); 
	rs.ExecSQL(szSQL);
	int nIndex = 1;
	CString szLocked;
	while(!rs.IsEOF())
	{
		tmpStr.Format(_T("%d"), nIndex++);
		rs.GetValue(_T("islocked"), szLocked);
		int nItem = m_wndDateList.AddItems(
			rs.GetValue(_T("treat_uid")), 
			rs.GetValue(_T("treat_date")), 
			rs.GetValue(_T("treat_uid")), 
			rs.GetValue(_T("islocked")),
			rs.GetValue(_T("doctor")),
			NULL);

		if(szLocked == _T("Y"))
		{
			m_wndDateList.SetItemBkColor(nItem, RGB(200, 200, 200));
		}
		rs.MoveNext();
	}
		
	m_wndDateList.EndLoad(); 

	int nItem = m_wndDateList.GetItemCount()-1;
	m_nUID = str2long(m_wndDateList.GetItemText(nItem, 2));
	m_wndDateList.SetCurSel(nItem);

	OnTreatListLoadData();
	
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndDateList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDateList.AddItems(
			rs.GetValue(_T("Index")), 
			rs.GetValue(_T("Date")), NULL);
		rs.MoveNext();
	}
	m_wndDateList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CHMSTreatmentCareEMDialog::OnCareSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	if(!pMF->IsActiveDocument())
	{
		int n = CompareDate(pMF->GetSysDate(), pMF->m_wndPatientDocument.m_szDischargeDate.Left(10));

		if(n > 5)
		{
			ShowMessageBox(_T("Hồ sơ đã đóng. Không cho phép thêm"));
			return;
		}
	}

	CHMSTreatmentCareEMInputDialog dlg(this, VM_ADD, m_nDocumentNo);
	if(dlg.DoModal() == IDOK)
	{
		OnDateListLoadData();
		int nSel = m_wndDateList.GetCurSel();
		OnDateListSelectChange(0, nSel);
	}
}

/*
void CHMSTreatmentCareEMDialog::OnBeforeOptSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	if(!pMF->IsActiveDocument())
	{
		ShowMessageBox(_T("Hồ sơ đã đóng. Không cho phép thêm"));
		return;
	}

	//CPhieuChamSocBenhNhanTruocPhauThuat dlg(this, VM_EDIT, m_nDocumentNo, pMF->m_nRefIndex);
	//if(dlg.DoModal() == IDOK)
	//{
	//}
}


#include "PhieuChamSocNguoiBenhCuaDieuDuong.h"
#include "PhieuChamSocBenhNhanSauKhiMo.h"
#include "PhieuChamSocNguoiBenhCuaDieuDuongB3.h"
void CHMSTreatmentCareEMDialog::OnCareAfterOptSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	if(!pMF->IsActiveDocument())
	{
		ShowMessageBox(_T("Hồ sơ đã đóng. Không cho phép thêm"));
		return;
	}

	CPhieuChamSocBenhNhanSauKhiMo dlg(this, VM_EDIT, m_nDocumentNo, pMF->m_nRefIndex);
	if(dlg.DoModal() == IDOK)
	{
	}
}

void CHMSTreatmentCareEMDialog::OnCareOfNurseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	if(!pMF->IsActiveDocument())
	{
		ShowMessageBox(_T("Hồ sơ đã đóng. Không cho phép thêm"));
		return;
	}

	if(pMF->GetCurrentDepartmentID() == _T("B3-A") || pMF->GetCurrentDepartmentID() == _T("B3-B") || pMF->GetCurrentDepartmentID() == _T("B3-C"))
		{
			CPhieuChamSocNguoiBenhCuaDieuDuongB3 dlg(this, VM_EDIT, m_nDocumentNo, pMF->m_nRefIndex);
			if(dlg.DoModal() == IDOK)
			{
			}
		}
	else
		{
			CPhieuChamSocNguoiBenhCuaDieuDuong dlg(this, VM_EDIT, m_nDocumentNo, pMF->m_nRefIndex);
			if(dlg.DoModal() == IDOK)
			{
			}
		}
}
*/
#include "HMSReportForms/PrintForms.h"

void CHMSTreatmentCareEMDialog::OnPrintSelect()
{
	
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(!IsLocked())
	{
		ShowMessageBox(_T("Yêu cầu xác nhận phiếu trước khi in.\r\nViệc xác nhận để đảm bảo các phiếu sẽ được khóa lại và không cho phép sửa đổi dữ liệu"));
		return;

	}
    CReportUtils ru;
    int nRet = ru.CreatePopupMenu(&m_wndPrint,
                       L"In tờ chăm sóc|In tờ chăm sóc (tổng hợp)");
    CPrintForms printer;
	switch (nRet)
    {
    case 1:
        printer.TM_OnPrintPhieuChamSoc(m_nDocumentNo, m_nUID, true);
        break;
    case 2:
        printer.TM_OnPrintPhieuChamSoc(m_nDocumentNo, m_nUID, false);
        break;
    default:
        break;
    }
}
void CHMSTreatmentCareEMDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CHMSTreatmentCareEMDialog::OnAddHMSTreatmentCareDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSTreatmentCareEMDialog::OnEditHMSTreatmentCareDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSTreatmentCareEMDialog::OnDeleteHMSTreatmentCareDialog(){
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
 		OnCancelHMSTreatmentCareDialog();
 	}
	return 0;
}
int CHMSTreatmentCareEMDialog::OnSaveHMSTreatmentCareDialog(){
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
 		//OnHMSTreatmentCareDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSTreatmentCareEMDialog::OnCancelHMSTreatmentCareDialog(){
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
int CHMSTreatmentCareEMDialog::OnHMSTreatmentCareDialogListLoadData(){
	return 0;
}

BOOL CHMSTreatmentCareEMDialog::OnCommand(WPARAM wParam, LPARAM lParam)
{
	// TODO: Add your specialized code here and/or call the base class
	UINT nCmd = (UINT) wParam;
	if(nCmd == CMD_REFRESHDATA)
	{
	}
	return CGuiDialog::OnCommand(wParam, lParam);
}

BOOL CHMSTreatmentCareEMDialog::PreTranslateMessage(MSG* pMsg)
{
	// TODO: Add your specialized code here and/or call the base class
	
	return CGuiDialog::PreTranslateMessage(pMsg);
}


void CHMSTreatmentCareEMDialog::OnLockSelect()
{
	CMainFrame* pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL, m_szDoctorID;

	CHMSConfirmDialogC13 dlg;
	if (dlg.DoModal() != IDOK)
	{
		return;
	}	
	else
	{
		m_szDoctorID = dlg.m_szDoctor;
	}
	
	szSQL.Format(_T("HMS_CAREINFO_LOCK(%ld,%ld, '%s') "), m_nDocumentNo, m_nUID, m_szDoctorID);
	int ret = str2int(pMF->ExecDML(szSQL));

	if(ret <= 0)
	{
		ShowMessageBox(_T("Không xác nhận được"));
		return;
	}
	int nSel = m_wndDateList.GetCurSel();
	OnDateListLoadData();
	ShowMessageBox(_T("Phiếu đã được xác nhận"));
	m_wndDateList.SetCurSel(nSel);
	OnDateListSelectChange(-1, nSel);
	
}

void CHMSTreatmentCareEMDialog::OnUnLockSelect()
{
	CMainFrame* pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL, m_szDoctorID, m_szCurDoctor;
	
	int nSel = m_wndDateList.GetCurSel();
	if(nSel < 0)
		return;
	m_szCurDoctor = m_wndDateList.GetItemText(nSel, 4);
	
	CHMSConfirmDialogC13 dlg;
	if (dlg.DoModal() != IDOK)
	{
		return;
	}	
	else
	{
		m_szDoctorID = dlg.m_szDoctor;
	}	

	if(m_szCurDoctor != m_szDoctorID)
	{
		CString tmpStr;
		tmpStr.Format(_T("Phiếu được xác nhận bởi [%s] không cho phép bỏ xác nhận"), m_szCurDoctor);
		ShowMessageBox(tmpStr);
		return;
	}

	CHMSReasonDialog dlg1(this);
	if(dlg1.DoModal() != IDOK)
		return;
	CString szReason = dlg1.m_szReason;

	szSQL.Format(_T("HMS_CAREINFO_UNLOCK(%ld,%ld, '%s', '%s') "), m_nDocumentNo, m_nUID, m_szDoctorID, szReason);
	int ret = str2int(pMF->ExecDML(szSQL));
	if(ret <= 0)
	{
		ShowMessageBox(_T("Không bỏ được xác nhận"));
		return;
	}	
	

	//int nSel = m_wndDateList.GetCurSel();
	OnDateListLoadData();
	m_wndDateList.SetCurSel(nSel);
	OnDateListSelectChange(-1, nSel);

	ShowMessageBox(_T("Phiếu đã được bỏ xác nhận.Mọi sự thay đổi dữ liệu sẽ được lưu vào hệ thống để theo dõi"));
}



bool CHMSTreatmentCareEMDialog::IsLocked()
{
	CMainFrame* pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL, szLocked;
	CRecord rs(&pMF->m_db);
	szSQL.Format(_T("SELECT hci_locked FROM HMS_CAREINFO WHERE hci_docno=%ld and hci_idx=%ld "), m_nDocumentNo, m_nUID);
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("hci_locked"), szLocked);
	if(szLocked == _T("Y"))
		return true;
	return false;
}

long CHMSTreatmentCareEMDialog::OnShowHistory(){
	CMainFrame* pMF = (CMainFrame*) AfxGetMainWnd();

	CRecord rs(&pMF->m_db);
	CRecord rs2(&pMF->m_db);
	CString szSQL, szSQL2, szTemp;
	int nSel = m_wndDateList.GetCurSel();
	if(nSel < 0)
		return 0;

	m_wndTreatList.BeginLoad();
	m_wndTreatList.DeleteAllItems();
	
	CGridListItem* o = new CGridListItem();
	CGridListItem* o2 = NULL;
	CGridListItem* o3 = NULL;
	CGridCell* cell = new CGridCell();

	CGridListItem* head1 = new CGridListItem(COLOR_GROUP, RGB(0, 128, 192));
	head1->Add(_T("Ngày thay đổi"), 100);
	head1->Add(_T("Người sửa"), 200);
	head1->Add(_T("Thông tin thay đổi"), 350);
	head1->Add(_T("Lý do"), 100);
	cell->AddRow(head1);
	o->Add(cell);
	m_wndTreatList.Add(o);

	szSQL.Format(_T("SELECT Trim('%s: ' ") \
				_T("            || hci_pulse ") \
				_T("            || ' ' ") \
				_T("            || '%s: ' ") \
				_T("            || hci_temperature ") \
				_T("            || Chr(13) ") \
				_T("            || '%s: ' ") \
				_T("            || hci_weight ") \
				_T("            || ' ' ") \
				_T("            || '%s: ' ") \
				_T("            || hci_height ") \
				_T("            || Chr(13) ") \
				_T("            || '%s: ' ") \
				_T("            || hci_care) AS thongtinthaydoi, ") \
				_T("       hci_locked, ") \
				_T("       to_char(hci_updateddate, 'dd/mm/yyyy hh24:mi:ss') as updateddate, ") \
				_T("       GET_USERNAME(hci_updatedby) AS updatedby, ") \
				_T("       hcr_reason, ") \
				_T("       hcr_type, ") \
				_T("       hci_idx ") \
				_T("FROM   HMS_CAREINFO_hist ") \
				_T("       LEFT JOIN hms_cancel_reason ") \
				_T("              ON ( hcr_refno = hci_idx ") \
				_T("                   AND hcr_docno = hci_docno ) ") \
				_T("WHERE  hci_docno = %ld ") \
				_T("       AND hci_idx = %d ORDER BY hci_updateddate"), _T("Mạch"), _T("Nhiệt độ"), _T("Cân nặng"), _T("Chiều cao"), _T("Chế độ ăn"), m_nDocumentNo, m_nUID);
	_fmsg(_T("%s"), szSQL);
	rs.ExecSQL(szSQL);
	
	while(!rs.IsEOF())
	{
		o2 = new CGridListItem();
		o2->Add(rs.GetValue(_T("updateddate")), 100,CELLTYPE_STRING, DT_CENTER|DT_WORDBREAK);
		o2->Add(rs.GetValue(_T("updatedby")), 200,CELLTYPE_STRING, DT_CENTER);
		o2->Add(rs.GetValue(_T("thongtinthaydoi")), 350,CELLTYPE_STRING, DT_LEFT);
		o2->Add(rs.GetValue(_T("hcr_reason")), 100,CELLTYPE_STRING, DT_LEFT|DT_WORDBREAK);
		
		cell = new CGridCell();
		cell->AddRow(o2);

		o = new CGridListItem();
		o->Add(cell);
		m_wndTreatList.Add(o);

		rs.MoveNext();
	}

	szSQL2.Format(_T("SELECT Trim('%s: ' ") \
				_T("            || Get_username(hcr_createdby) ") \
				_T("            || Chr(13) ") \
				_T("            || '%s: ' ") \
				_T("            || To_char(hcr_createddate, 'dd/mm/yyyy hh24:mi:ss') ") \
				_T("            || Chr(13) ") \
				_T("            || '%s: ' ") \
				_T("            || hcr_reason ") \
				_T("            || Chr(13) ") \
				_T("            || '%s: ' ") \
				_T("            || hcr_type) AS thongtinthaydoi ") \
				_T("FROM   hms_cancel_reason ") \
				_T("WHERE  hcr_docno = %ld ") \
				_T("       AND hcr_refno = %d ORDER BY hcr_createddate"), _T("Người sửa"), _T("Ngày sửa"), _T("Lý do"), _T("Loại"), m_nDocumentNo, m_nUID);
	rs2.ExecSQL(szSQL2);


	CGridListItem* head2 = new CGridListItem(COLOR_GROUP, RGB(0, 128, 192));
	head2->Add(_T("Khóa/Mở khóa"), 100);
	cell = new CGridCell();
	cell->AddRow(head2);
	o = new CGridListItem();
	o->Add(cell);
	m_wndTreatList.Add(o);

	while(!rs2.IsEOF())
	{
		o3 = new CGridListItem();
		o3->Add(rs2.GetValue(_T("thongtinthaydoi")), 100,CELLTYPE_STRING, DT_LEFT|DT_WORDBREAK);
		cell = new CGridCell();
		cell->AddRow(o3);

		o = new CGridListItem();
		o->Add(cell);
		m_wndTreatList.Add(o);

		rs2.MoveNext();
	}
	m_wndTreatList.EndLoad();

	return 0;
}