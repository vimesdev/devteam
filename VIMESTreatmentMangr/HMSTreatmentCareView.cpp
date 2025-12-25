#include "HMSTreatmentCareView.h"
#include "MainFrm.h"
#include ".\HMSTreatmentCareView.h"
#include <sstream>

static void _OnSelectSelectChangeFnc(CWnd* pWnd, int nOldItemSel, int nNewItemSel) {
	((CHMSTreatmentCareView*)pWnd)->OnSelectSelectChange(nOldItemSel, nNewItemSel);
}
static void _OnSelectSelendokFnc(CWnd* pWnd) {
	((CHMSTreatmentCareView*)pWnd)->OnSelectSelendok();
}
/*static void _OnSelectSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentCareView *)pWnd)->OnSelectKillfocus();
}*/
/*static void _OnSelectKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentCareView *)pWnd)->OnSelectKillfocus();
}*/
static long _OnSelectLoadDataFnc(CWnd* pWnd) {
	return ((CHMSTreatmentCareView*)pWnd)->OnSelectLoadData();
}
/*static void _OnRegistrationPlace2AddNewFnc(CWnd *pWnd){
	((CHMSTreatmentCareView *)pWnd)->OnRegistrationPlace2AddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CHMSTreatmentCareView *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentCareView *)pWnd)->OnFromDateSetfocus();} */
	/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
		((CHMSTreatmentCareView *)pWnd)->OnFromDateKillfocus();
	} */
static int _OnFromDateCheckValueFnc(CWnd* pWnd) {
	return ((CHMSTreatmentCareView*)pWnd)->OnFromDateCheckValue();
}
static void _OnToDateChangeFnc(CWnd* pWnd) {
	((CHMSTreatmentCareView*)pWnd)->OnToDateChange();
}
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentCareView *)pWnd)->OnToDateSetfocus();} */
static void _OnToDateKillfocusFnc(CWnd* pWnd) {
	((CHMSTreatmentCareView*)pWnd)->OnToDateKillfocus();
}
static int _OnToDateCheckValueFnc(CWnd* pWnd) {
	return ((CHMSTreatmentCareView*)pWnd)->OnToDateCheckValue();
}
static void _OnSearchSelectFnc(CWnd* pWnd) {
	CHMSTreatmentCareView* pVw = (CHMSTreatmentCareView*)pWnd;
	pVw->OnSearchSelect();
}
static void _OnAddSelectFnc(CWnd* pWnd) {
	CHMSTreatmentCareView* pVw = (CHMSTreatmentCareView*)pWnd;
	pVw->OnAddSelect();
}
static void _OnEditSelectFnc(CWnd* pWnd) {
	CHMSTreatmentCareView* pVw = (CHMSTreatmentCareView*)pWnd;
	pVw->OnEditSelect();
}
static void _OnPrintSelectFnc(CWnd* pWnd) {
	CHMSTreatmentCareView* pVw = (CHMSTreatmentCareView*)pWnd;
	pVw->OnPrintSelect();
}

static int _OnAddHMSTreatmentCareViewFnc(CWnd *pWnd){
	return ((CHMSTreatmentCareView*)pWnd)->OnAddHMSTreatmentCareView();
} 
static int _OnEditHMSTreatmentCareViewFnc(CWnd *pWnd){
	return ((CHMSTreatmentCareView*)pWnd)->OnEditHMSTreatmentCareView();
} 
static int _OnDeleteHMSTreatmentCareViewFnc(CWnd *pWnd){
	return ((CHMSTreatmentCareView*)pWnd)->OnDeleteHMSTreatmentCareView();
} 
static int _OnSaveHMSTreatmentCareViewFnc(CWnd *pWnd){
	return ((CHMSTreatmentCareView*)pWnd)->OnSaveHMSTreatmentCareView();
} 
static int _OnCancelHMSTreatmentCareViewFnc(CWnd *pWnd){
	return ((CHMSTreatmentCareView*)pWnd)->OnCancelHMSTreatmentCareView();
} 


BEGIN_MESSAGE_MAP(CHMSTreatmentCareView, CGuiView)
	ON_WM_SIZE()
END_MESSAGE_MAP()


CHMSTreatmentCareView::CHMSTreatmentCareView(){

	m_nDlgWidth = 679;
	m_nDlgHeight = 643;
	SetDefaultValues();
	m_nListWidth = 0;
}

CHMSTreatmentCareView::~CHMSTreatmentCareView(){
}
void CHMSTreatmentCareView::OnCreateComponents(){
	m_wndSelectLabel.Create(this, _T("Lựa chọn"), 5, 5, 80, 30);
	m_wndSelect.Create(this, 85, 5, 200, 30);
	m_wndHtml.Create(WS_CHILD|WS_VISIBLE, CRect(5, 35, 605, 600), this, 0);
	//m_wndHtml.Load(L"./HTML/DT_PHIEUCHAMSOC.HTML");

	m_wndFromDateLabel.Create(this, _T("From Date"), 265, 5, 345, 30);
	m_wndFromDate.Create(this, 350, 5, 470, 30);
	m_wndToDateLabel.Create(this, _T("To Date"), 475, 5, 555, 30);
	m_wndToDate.Create(this, 560, 5, 680, 30);
	m_wndSearch.Create(this, _T("@"), 685, 5, 715, 30);
	m_wndAdd.Create(this, _T("Add"), 5, 520, 125, 545);
	m_wndEdit.Create(this, _T("Edit"), 130, 520, 250, 545);
	m_wndPrint.Create(this, _T("Print"), 255, 520, 375, 545);
	

	AddBottom(&m_wndAdd, 5, true);
	AddBottom(&m_wndEdit, 5, true);
	AddBottom(&m_wndPrint, 5, true);
}
void CHMSTreatmentCareView::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndSelect.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndSelect.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);
}
void CHMSTreatmentCareView::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);

	m_wndSelect.SetEvent(WE_SELENDOK, _OnSelectSelendokFnc);
	//m_wndSelect.SetEvent(WE_SETFOCUS, _OnSelectSetfocusFnc);
	//m_wndSelect.SetEvent(WE_KILLFOCUS, _OnSelectKillfocusFnc);
	m_wndSelect.SetEvent(WE_SELCHANGE, _OnSelectSelectChangeFnc);
	m_wndSelect.SetEvent(WE_LOADDATA, _OnSelectLoadDataFnc);
	//m_wndSelect.SetEvent(WE_ADDNEW, _OnSelectAddNewFnc);

	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndSearch.SetEvent(WE_CLICK, _OnSearchSelectFnc);

	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T(" 00:00");
	m_szToDate += _T(" 23:59");
	UpdateData(false);

}
void CHMSTreatmentCareView::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndSelect.GetDlgCtrlID(), m_szSelectKey);
}
void CHMSTreatmentCareView::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSTreatmentCareView::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSTreatmentCareView::SetDefaultValues(){
	m_szWhere.Empty();
	m_szOrderBy.Empty();

}
int CHMSTreatmentCareView::SetMode(int nMode){
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

#define COLOR_CAPTION RGB(64,128,192)
#define COLOR_GROUP RGB(225, 225, 225)
#define COLOR_GROUP1 RGB(192,192,255)
#define COLOR_GROUP2 RGB(192,192,255)

long CHMSTreatmentCareView::LoadCareInfo(){
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CRecord rsl(&pMF->m_db);
	CRecord rs2(&pMF->m_db);
	CString szSQL;
	


	CString szPulse, szTemperature, szDisease, szTreatment, szDiet, szOrderBy;
	CString tmpStr;
	int nItem = 0;
	long nOID;
	int nIndex = 0;

	if(m_wndSelect.GetCurrent(0) == 6)
		szOrderBy.Format(_T(" ORDER BY hci_date2, hci_idx  "));
	else if (m_wndSelect.GetCurrent(0) == 7)
		szOrderBy.Format(_T(" ORDER BY hci_date2 desc, hci_idx desc "));
	else
		szOrderBy.Format(_T(" ORDER BY hci_date2 desc, hci_idx "));

	szSQL.Format(_T("SELECT get_username(hci_nurse) as hci_doctor, hci_pulse, hci_temperature, ") \
		_T(" hci_disease, hci_care, ") \
		_T(" hci_bloodpressure, hci_bloodpressurex, hci_breathinterval, hci_sp02, hci_date as hci_date2,  ") \
		_T(" to_char(hci_date, 'DD/MM/YYYY HH24:MI') as hci_date, hsie_diet, HSIE_NURSEASSISTANCE, NVL(hci_treatidx, 0) as treat_idx ") \
		_T(" FROM HMS_CAREINFO ") \
		_T(" LEFT JOIN HMS_SIEXAM ON (hsie_idx = hci_treatidx and hsie_docno = hci_docno)") \
		_T(" WHERE hci_docno=%ld and hci_treattime=%ld %s") \
		_T(" %s"),
		pMF->m_nDocumentNo, pMF->m_nTreatTime, m_szWhere, szOrderBy);
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);



	CString szDoctor, szNewDate, szOldDate, szNurse, szNurseAssist, szDietAssist, szCNS, szDescription;
	CString szCare;
	int nPulse;
	double nTemperature;
	int nBloodPreL;
	int nBloodPreH;
	int nBreathInterval;
	int nSP02;
	long nTreatIdx = 0;




	dom::element el = m_wndHtml.Find(L"content");
	utf8::ostream os;
	os << L"<tr height=\"25px\">";
	os << L"<td width=\"90px\" align=\"center\" ><b>" << L"NGÀY GIỜ" << L"</b></td>";
	os << L"<td width=\"40\%\" align=\"center\" ><b>" << L"DIỄN BIẾN" << L"</b></td>";
	os << L"<td width=\"40\%\" align=\"center\" ><b>" << L"THEO DÕI CHĂM SÓC" << L"</b></td>";
	os << L"<td width=\"40\%\" align=\"center\" ><b>" << L"HỘ LÝ, ĐIỀU DƯỠNG" << L"</b></td>";
	os << L"</tr>";


	while (!rs.IsEOF())
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
		if (nPulse > 0)
		{
			szFuncs.AppendFormat(_T(" M: %d; <br>"), nPulse);
		}
		if (nTemperature > 0)
		{
			szFuncs.AppendFormat(_T(" T: %.1f; <br>"), nTemperature);
		}

		if (nBloodPreL + nBloodPreH > 0)
		{

			szFuncs.AppendFormat(_T(" HA: %d/%d; <br>"), nBloodPreL, nBloodPreH);
		}
		if (nBreathInterval > 0)
		{
			szFuncs.AppendFormat(_T(" NT: %d; <br>"), nBreathInterval);
		}
		if (nSP02 > 0)
		{
			szFuncs.AppendFormat(_T(" SP02: %d; <br>"), nSP02);
		}

		if (!szFuncs.IsEmpty())
		{
			szCNS.Format(_T("<b>Chức năng sống</b>: <br>%s"), szFuncs);
		}

		szDescription.Format(L"%s<br><b>Diễn biến:</b> <br> %s", szCNS, szDisease);

		rs.GetValue(_T("hci_date"), szNewDate);

		//if(szNewDate != szOldDate)


		rs.GetValue(_T("hsie_nurseassistance"), szNurseAssist);
		rs.GetValue(_T("hsie_diet"), szDiet);
		rs.GetValue(_T("treat_idx"), nTreatIdx);
		//if (szNurseAssist.IsEmpty() || szDiet.IsEmpty())
		if (nTreatIdx == 0)
		{
			szSQL.Format(_T("SELECT hsie_diet, hsie_nurseassistance ") \
				_T(" FROM hms_siexam WHERE hsie_docno=%ld ") \
				_T(" and trunc_date(hsie_date) = TO_DATE('%s', 'DD/MM/YYYY') ") \
				_T(" order by hsie_date desc"), pMF->m_nDocumentNo, szNewDate.Left(10));
			rs2.ExecSQL(szSQL);
			rs2.GetValue(_T("hsie_nurseassistance"), szNurseAssist);
			rs2.GetValue(_T("hsie_diet"), szDiet);
		}
		tmpStr = pMF->GetSelectionString(_T("HMS_DIET_MODE"), szDiet);
		if (!tmpStr.IsEmpty())
		{
			szDiet = tmpStr;
		}
		tmpStr = pMF->GetSelectionString(_T("HMS_CHEDOHOLY"), szNurseAssist);
		if (!tmpStr.IsEmpty())
		{
			szNurseAssist = tmpStr;
		}
		szDietAssist.Format(_T("<b>Chế độ ăn và hộ lý:</b><br>%s<br>%s"), szDiet, szNurseAssist);
		szOldDate = szNewDate;

		szDietAssist.AppendFormat(_T("<br>%s"), szDoctor);
		//m_wndTreatList.AddItems(szCNS, szCare, szDietAssist);

		szCNS.Replace(L"\r\n", L"<br>");
		szCare.Replace(L"\r\n", L"<br>");
		szDietAssist.Replace(L"\r\n", L"<br>");

		os << L"<tr>";
		os << L"<td width=\"100px%\" align=\"left\">" << szNewDate << L"</td>";
		os << L"<td width=\"40\%\" align=\"left\">" << szDescription << L"</td>";
		os << L"<td width=\"40\%\" align=\"left\">" << szCare << L"</td>";
		os << L"<td width=\"40\%\" align=\"left\">" << szDietAssist << L"</td>";
		os << L"</tr>";

		szDietAssist = _T("");


		rs.MoveNext();
	}


	el.set_html(os.data(), os.length());
	el.update();
	

	m_wndHtml.RedrawWindow();
	//m_wndTreatList.EndLoad();

	return 0;
}

int CHMSTreatmentCareView::OnAddHMSTreatmentCareView(){
	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
		return -1;
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	SetMode(VM_ADD);
	return 0;
}
int CHMSTreatmentCareView::OnEditHMSTreatmentCareView(){
	if(GetMode() != VM_VIEW)
		return -1;
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	SetMode(VM_EDIT);
	return 0;  
}
int CHMSTreatmentCareView::OnDeleteHMSTreatmentCareView(){
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
		OnCancelHMSTreatmentCareView();
	}
	return 0;
}
int CHMSTreatmentCareView::OnSaveHMSTreatmentCareView(){
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
		//OnHMSTreatmentCareViewListLoadData();
		SetMode(VM_VIEW);
	}
	else
	{
	}
	return ret;
	return 0;
}
int CHMSTreatmentCareView::OnCancelHMSTreatmentCareView(){
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
int CHMSTreatmentCareView::OnHMSTreatmentCareViewListLoadData(){
	return 0;
}


void CHMSTreatmentCareView::RefreshData()
{
	AfxGetApp()->BeginWaitCursor();
	m_wndHtml.Load(L"./HTML/DT_PHIEUCHAMSOC.HTML");
	LoadCareInfo();
	AfxGetApp()->EndWaitCursor();
}


void CHMSTreatmentCareView::OnSize(UINT nType, int cx, int cy)
{
	CGuiView::OnSize(nType, cx, cy);
	CRect rect;
	m_nListWidth = rect.Width();
	GetClientRect(&rect);
	if (m_wndHtml.GetSafeHwnd())
	{
		rect.top += 35;
		rect.bottom -= 50;
		m_wndHtml.MoveWindow(rect);
	}
	// TODO: Add your message handler code here
}




CHTMLCareView::CHTMLCareView(){
}

CHTMLCareView::~CHTMLCareView(){
}

void CHTMLCareView::LoadData(long nDocNo, long nTreatTime, CString szWhere, CString szOrderBy){
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CRecord rsl(&pMF->m_db);
	CRecord rs2(&pMF->m_db);
	CString szSQL;

	CString szPulse, szTemperature, szDisease, szTreatment, szDiet;
	CString tmpStr;
	int nItem = 0;
	long nOID;
	int nIndex = 0;

	CGridListItem* o = new CGridListItem();
	CGridListItem* o2 = NULL;
	CGridCell* cell = new CGridCell();

	szSQL.Format(_T("SELECT get_username(hci_nurse) as hci_doctor, hci_pulse, hci_temperature, ") \
		_T(" hci_disease, hci_care, ") \
		_T(" hci_bloodpressure, hci_bloodpressurex, hci_breathinterval, hci_sp02,  ") \
		_T(" trunc_date(hci_date) AS hci_date, hsie_diet, HSIE_NURSEASSISTANCE, NVL(hci_treatidx, 0) as treat_idx ") \
		_T(" FROM HMS_CAREINFO ") \
		_T(" LEFT JOIN HMS_SIEXAM ON (hsie_idx = hci_treatidx and hsie_docno = hci_docno)") \
		_T(" WHERE hci_docno=%ld and hci_idx=%ld %s") \
		_T(" %s"),
		m_nDocumentNo, nTreatTime, szWhere, szOrderBy);
	rs.ExecSQL(szSQL);
	_fmsg(_T("%s"), szSQL);



	CString szDoctor, szNewDate, szOldDate, szNurse, szNurseAssist, szDietAssist, szCNS;
	CString szCare;
	int nPulse;
	double nTemperature;
	int nBloodPreL;
	int nBloodPreH;
	int nBreathInterval;
	int nSP02;
	long nTreatIdx = 0;
	
	std::stringstream os;


	dom::element el = this->Find(L"content");

	os << L"<tr height=\"25px\">";
	os << L"<td width=\"90px\" align=\"center\" ><b>" << L"NGÀY GIỜ" << L"</b></td>";
	os << L"<td width=\"40\%\" align=\"center\" ><b>" << L"DIỄN BIẾN CỦA BỆNH" << L"</b></td>";
	os << L"<td width=\"40\%\" align=\"center\" ><b>" << L"Y LỆNH" << L"</b></td>";
	os << L"</tr>";


	while (!rs.IsEOF())
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
		if (nPulse > 0)
		{
			szFuncs.AppendFormat(_T(" M: %d; \r\n"), nPulse);
		}
		if (nTemperature > 0)
		{
			szFuncs.AppendFormat(_T(" T: %.1f; \r\n"), nTemperature);
		}

		if (nBloodPreL + nBloodPreH > 0)
		{

			szFuncs.AppendFormat(_T(" HA: %d/%d; \r\n"), nBloodPreL, nBloodPreH);
		}
		if (nBreathInterval > 0)
		{
			szFuncs.AppendFormat(_T(" NT: %d; \r\n"), nBreathInterval);
		}
		if (nSP02 > 0)
		{
			szFuncs.AppendFormat(_T(" SP02: %d; \r\n"), nSP02);
		}

		if (!szFuncs.IsEmpty())
		{
			szCNS.Format(_T("Chức năng sống: \r\n%s \r\nDiễn biến: \r\n %s"), szFuncs, szDisease);
		}

		rs.GetValue(_T("hci_date"), szNewDate);

		//if(szNewDate != szOldDate)


		rs.GetValue(_T("hsie_nurseassistance"), szNurseAssist);
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
			rs2.GetValue(_T("hsie_nurseassistance"), szNurseAssist);
			rs2.GetValue(_T("hsie_diet"), szDiet);
		}
		tmpStr = pMF->GetSelectionString(_T("HMS_DIET_MODE"), szDiet);
		if (!tmpStr.IsEmpty())
		{
			szDiet = tmpStr;
		}
		tmpStr = pMF->GetSelectionString(_T("HMS_CHEDOHOLY"), szNurseAssist);
		if (!tmpStr.IsEmpty())
		{
			szNurseAssist = tmpStr;
		}
		szDietAssist.Format(_T("\r\n\r\nChế độ ăn và hộ lý:\r\n %s\r\n %s "), szDiet, szNurseAssist);
		szOldDate = szNewDate;

		szDietAssist.AppendFormat(_T("\r\n\r\n%s"), szDoctor);
//		m_wndTreatList.AddItems(szCNS, szCare, szDietAssist);
		szDietAssist = _T("");
		rs.MoveNext();
	}

}


void CHTMLCareView::OnPrint(CDC *pDC, CPrintInfo* pInfo){

	//In phan header
	int nPage = pInfo->m_nCurPage-1;

	if(nPage > 0)
	{
		utf8::ostream os;
		PrintEx printer;
		dom::element el;

		printer.load(m_szFile);
		dom::element root  = printer.getRootElement();

		el = Find(_T("PageHeader"));
		//os << "<body xmargin-left=\"1cm\" xmargin-right=\"1cm\" paper_size=\"A4\">";
		os << "<div name=\"PageHeader\">";
		int height = 0;
		if(nPage%2 == 0)
		{
			os << el.get_html().c_str();
//			height = el.get_intrinsic_height();
		}
		//os.clear();
		os << L"<table width=\"99%\"  name=\"content\">";
		os << L"<tr height=\"25px\">";
		os << L"<td width=\"98px\" align=\"center\" ><b>" << L"NGÀY GIỜ" << L"</b></td>";
		os << L"<td width=\"45\%\" align=\"center\" ><b>" << L"DIỄN BIẾN CỦA BỆNH" << L"</b></td>";
		os << L"<td width=\"45\%\" align=\"center\" ><b>" << L"Y LỆNH" << L"</b></td>";
		os << L"</tr>";
		os << L"</table>";
//		height += 30;
		os << "</div>";
		//os << "</body>";
		
		dom::element body = root.find_first("body", L"PageHeader");
		body.set_html(os.data(), os.length());
		body.update();
		
		printf("%s", os.data());

		printer.measure(pDC->GetSafeHdc(), m_scaled_width, m_rcPrintArea.Width(), m_rcPrintArea.Height());
		printer.render(pDC->GetSafeHdc(), m_rcPrintArea.left-45, m_rcPrintArea.top, 0);
		
		root = printer.getRootElement();
		el = root.find_first("[name='%S']",L"PageHeader"); 
		CRect rc = el.get_location();
		height = rc.Height();
		printf("\r\n%d", height);
		m_offsetY = height;
	}
	CHTMLayoutCtrl::OnPrint(pDC, pInfo);
}


void CHTMLCareView::PrintPreview()
{
	CReport rpt;
	CHTMLCareView* pBenhtrinh = new CHTMLCareView();
	pBenhtrinh->Load(m_szFile);
	rpt.Init(pBenhtrinh);
	dom::element root = pBenhtrinh->GetRootElement();
	dom::element rootBase = this->GetRootElement();
	utf8::ostream os;
	os << rootBase.get_html().c_str();
	root.set_html(os.data(), os.length());
	root.update();
	rpt.PrintPreview();

}

void CHMSTreatmentCareView::OnSelectSelectChange(int nOldItemSel, int nNewItemSel) {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();

	int nIdx = ToInt(m_wndSelect.GetCurrent(0));
	int nDayOfWeek, nYear, nMonth, nextMonth, nextYear; // Move declaration outside switch
	CTime dtCurrent, dtStart, dtEnd, endOfMonth, startOfMonth, firstDayNextMonth;
	//_msg(L"%d", nIdx);
	switch (nIdx)
	{
	case 1:
		m_szWhere.Empty();
		break;
	case 2:
		m_szWhere.Format(_T(" AND hci_date BETWEEN to_timestamp('%s 00:00:00','yyyy/mm/dd hh24:mi:ss') ") \
			_T(" AND to_timestamp('%s 23:59:59', 'yyyy/mm/dd hh24:mi:ss')"), pMF->GetSysDate(), pMF->GetSysDate());
		break;
	case 3:
		dtCurrent = CTime::GetCurrentTime();
		nDayOfWeek = dtCurrent.GetDayOfWeek(); // 1 = Sunday, 2 = Monday, ..., 7 = Saturday

		// Điều chỉnh để lấy thứ 2 là ngày đầu tuần
		if (nDayOfWeek == 1) nDayOfWeek = 8;

		dtStart = dtCurrent - CTimeSpan(nDayOfWeek - 2, 0, 0, 0);
		dtEnd = dtStart + CTimeSpan(6, 0, 0, 0);

		m_szWhere.Format(_T(" AND hci_date BETWEEN to_timestamp('%s 00:00:00','yyyy/mm/dd hh24:mi:ss') ") \
			_T(" AND to_timestamp('%s 23:59:59', 'yyyy/mm/dd hh24:mi:ss')"), dtStart.Format(_T("%Y/%m/%d")), dtEnd.Format(_T("%Y/%m/%d")));
		break;
	case 4:
		// Lấy ngày hiện tại
		dtCurrent = CTime::GetCurrentTime();
		nDayOfWeek = dtCurrent.GetDayOfWeek(); // 1 = Chủ Nhật, 2 = Thứ Hai, ..., 7 = Thứ Bảy

		// ---- TÍNH KHOẢNG THỜI GIAN TRONG THÁNG ----
		nYear = dtCurrent.GetYear();
		nMonth = dtCurrent.GetMonth();

		// Ngày đầu tháng
		startOfMonth = CTime(nYear, nMonth, 1, 0, 0, 0);

		// Ngày cuối tháng (Lấy ngày đầu tháng của tháng sau - 1 ngày)
		nextMonth = (nMonth == 12) ? 1 : (nMonth + 1);
		nextYear = (nMonth == 12) ? (nYear + 1) : nYear;
		firstDayNextMonth = CTime(nextYear, nextMonth, 1, 0, 0, 0);
		endOfMonth = firstDayNextMonth - CTimeSpan(1, 0, 0, 0);


		m_szWhere.Format(_T(" AND hci_date BETWEEN to_timestamp('%s 00:00:00','yyyy/mm/dd hh24:mi:ss') ") \
			_T(" AND to_timestamp('%s 23:59:59', 'yyyy/mm/dd hh24:mi:ss')"), startOfMonth.Format(_T("%Y/%m/%d")), endOfMonth.Format(_T("%Y/%m/%d")));
		break;
	case 5:
		break;
	case 6:
		m_szOrderBy.Format(_T(" ORDER BY trunc(hci_date), hci_idx "));
		break;
	case 7:
		m_szOrderBy.Format(_T(" ORDER BY trunc(hci_date) desc, hci_idx desc"));
		break;
	}
	LoadCareInfo();
	m_wndHtml.LoadData(pMF->m_nDocumentNo, pMF->m_nRefIndex, m_szWhere, m_szOrderBy);
}
void CHMSTreatmentCareView::OnSelectSelendok() {

}
/*void CHMSTreatmentCareView::OnSelectSetfocus(){

}*/
/*void CHMSTreatmentCareView::OnSelectKillfocus(){

}*/
long CHMSTreatmentCareView::OnSelectLoadData() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if (m_wndSelect.IsSearchKey() && !m_szSelectKey.IsEmpty()) {
		szWhere.Format(_T(" AND ss_code='%s' "), m_szSelectKey);
	};

	m_wndSelect.DeleteAllItems();
	int nCount = 0;
	szSQL.Format(_T("SELECT * FROM sys_sel WHERE ss_id = 'option_examcare' %s ORDER BY ss_code"), szWhere);

	nCount = rs.ExecSQL(szSQL);
	while (!rs.IsEOF()) {
		m_wndSelect.AddItems(
			rs.GetValue(_T("ss_code")),
			rs.GetValue(_T("ss_desc")),
			NULL);
		rs.MoveNext();
	}
	return nCount;
	//option_examcare
	return 0;
}
/*void CHMSTreatmentCareView::OnSelectAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

} */

/*void CHMSTreatmentCareView::OnFromDateChange(){

} */
/*void CHMSTreatmentCareView::OnFromDateSetfocus(){

} */
/*void CHMSTreatmentCareView::OnFromDateKillfocus(){

} */
int CHMSTreatmentCareView::OnFromDateCheckValue() {
	return 0;
}
void CHMSTreatmentCareView::OnToDateChange() {
	//UpdateData(false);
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	//UpdateData(FALSE);
	/*m_szWhere.Format(_T(" AND hci_date BETWEEN to_timestamp('%s','yyyy/mm/dd hh24:mi:ss') ") \
		_T(" AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')"), m_szFromDate, m_szToDate);
	m_wndHtml.LoadData(pMF->m_nDocumentNo, pMF->m_nRefIndex, m_szWhere, m_szOrderBy);
	LoadCareInfo();
	*/
}
/*void CHMSTreatmentCareView::OnToDateSetfocus(){

} */
void CHMSTreatmentCareView::OnToDateKillfocus() {

}
int CHMSTreatmentCareView::OnToDateCheckValue() {
	return 0;
}

void CHMSTreatmentCareView::OnAddSelect() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	//m_wndPatientDocument.OnTreatmentTrackingSelect();
	((CHMSPatientDocument*)m_pWndCareView)->OnPatientCareSelect();
}
void CHMSTreatmentCareView::OnEditSelect() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	//m_wndPatientDocument.OnTreatmentTrackingSelect();
	((CHMSPatientDocument*)m_pWndCareView)->OnPatientCareSelect();
}
#include "HMSReportForms/PrintForms.h"
void CHMSTreatmentCareView::OnPrintSelect() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	//CPrintForms printer;
	//printer.TM_OnPrintBenhTrinhDieuTriHoLy(pMF->m_nDocumentNo, pMF->m_nTreatIdx);
	m_wndHtml.PrintPreview();
}
void CHMSTreatmentCareView::OnSearchSelect() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	UpdateData(FALSE);
	m_szWhere.Format(_T(" AND hci_date BETWEEN to_timestamp('%s','yyyy/mm/dd hh24:mi:ss') ") \
		_T(" AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')"), m_szFromDate, m_szToDate);
	m_wndHtml.LoadData(pMF->m_nDocumentNo, pMF->m_nRefIndex, m_szWhere, m_szOrderBy);
	LoadCareInfo();
}