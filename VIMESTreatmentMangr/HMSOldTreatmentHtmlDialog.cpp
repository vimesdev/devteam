#include "HMSOldTreatmentHtmlDialog.h"
#include "HMSMainFrame.h"
#include "resource.h"
#include "Barcode.h"
#include "StringUtil.h"
#include "HMSSelectionListDialog.h"

static void _OnSearchChangeFnc(CWnd *pWnd){
	((CHMSOldTreatmentHtmlDialog *)pWnd)->OnSearchChange();
}

static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSOldTreatmentHtmlDialog* )pWnd)->OnListSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnListSelendokFnc(CWnd *pWnd){
	((CHMSOldTreatmentHtmlDialog *)pWnd)->OnListSelendok();
}
/*static void _OnListSetfocusFnc(CWnd *pWnd){
((CHMSOldTreatmentHtmlDialog *)pWnd)->OnListKillfocus();
}*/
/*static void _OnListKillfocusFnc(CWnd *pWnd){
((CHMSOldTreatmentHtmlDialog *)pWnd)->OnListKillfocus();
}*/
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSOldTreatmentHtmlDialog *)pWnd)->OnListLoadData();
}

static void _OnOptSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSOldTreatmentHtmlDialog* )pWnd)->OnOptSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnOptSelendokFnc(CWnd *pWnd){
	((CHMSOldTreatmentHtmlDialog *)pWnd)->OnOptSelendok();
}
/*static void _OnOptSetfocusFnc(CWnd *pWnd){
((CHMSOldTreatmentHtmlDialog *)pWnd)->OnOptKillfocus();
}*/
/*static void _OnOptKillfocusFnc(CWnd *pWnd){
((CHMSOldTreatmentHtmlDialog *)pWnd)->OnOptKillfocus();
}*/
static long _OnOptLoadDataFnc(CWnd *pWnd){
	return ((CHMSOldTreatmentHtmlDialog *)pWnd)->OnOptLoadData();
}

static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSOldTreatmentHtmlDialog *pVw = (CHMSOldTreatmentHtmlDialog *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnUpdateSelectFnc(CWnd *pWnd){
	CHMSOldTreatmentHtmlDialog *pVw = (CHMSOldTreatmentHtmlDialog *)pWnd;
	pVw->OnUpdateSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSOldTreatmentHtmlDialog *pVw = (CHMSOldTreatmentHtmlDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSOldTreatmentHtmlDialog *pVw = (CHMSOldTreatmentHtmlDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CHMSOldTreatmentHtmlDialog *pVw = (CHMSOldTreatmentHtmlDialog *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSOldTreatmentHtmlDialog *pVw = (CHMSOldTreatmentHtmlDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static void _OnExTaskSelectFnc(CWnd *pWnd){
	CHMSOldTreatmentHtmlDialog *pVw = (CHMSOldTreatmentHtmlDialog *)pWnd;
	pVw->OnExTaskSelect();
} 
static int _OnAddHMSOldTreatmentHtmlDialogFnc(CWnd *pWnd){
	return ((CHMSOldTreatmentHtmlDialog*)pWnd)->OnAddHMSOldTreatmentHtmlDialog();
} 
static int _OnEditHMSOldTreatmentHtmlDialogFnc(CWnd *pWnd){
	return ((CHMSOldTreatmentHtmlDialog*)pWnd)->OnEditHMSOldTreatmentHtmlDialog();
} 
static int _OnDeleteHMSOldTreatmentHtmlDialogFnc(CWnd *pWnd){
	return ((CHMSOldTreatmentHtmlDialog*)pWnd)->OnDeleteHMSOldTreatmentHtmlDialog();
} 
static int _OnSaveHMSOldTreatmentHtmlDialogFnc(CWnd *pWnd){
	return ((CHMSOldTreatmentHtmlDialog*)pWnd)->OnSaveHMSOldTreatmentHtmlDialog();
} 
static int _OnCancelHMSOldTreatmentHtmlDialogFnc(CWnd *pWnd){
	return ((CHMSOldTreatmentHtmlDialog*)pWnd)->OnCancelHMSOldTreatmentHtmlDialog();
}

static int _OnSearchCheckValueFnc(CWnd *pWnd){
	return ((CHMSOldTreatmentHtmlDialog *)pWnd)->OnSearchCheckValue();
} 

static void _OnFilterSelectFnc(CWnd* pWnd) {
	((CHMSOldTreatmentHtmlDialog*)pWnd)->OnFilterSelect();
}

CHMSOldTreatmentHtmlDialog::CHMSOldTreatmentHtmlDialog(CWnd *pParent, CString szType):
CGuiDialog(pParent){

	m_nDlgWidth = 900;
	m_nDlgHeight = 605;
	SetDefaultValues();
	m_szType = szType;
	m_nOptIdx = 0;
	m_scale = 1.0;
}
CHMSOldTreatmentHtmlDialog::~CHMSOldTreatmentHtmlDialog(){
}
void CHMSOldTreatmentHtmlDialog::OnCreateComponents()
{

	/*m_wndList.Create(this, 5, 5, 220, 600);
	m_wndOptLabel.Create(this, _T("Danh sách phiếu"), 185, 5, 300, 30);
	m_wndOpt.Create(this, 305, 5, 1000, 30);
	m_wndHtml.Create(WS_CHILD|WS_VISIBLE|WS_BORDER, CRect(225, 35, 1010, 600), this, 0); 
	m_wndAdd.Create(this, _T("&Add"), 330, 605, 420, 635);
	m_wndUpdate.Create(this, _T("&Update"), 425, 605, 515, 635);
	m_wndSave.Create(this, _T("&Save"), 520, 605, 610, 635);
	m_wndCancel.Create(this, _T("&Cancel"), 615, 605, 705, 635);
	m_wndPrint.Create(this, _T("&Print"), 710, 605, 800, 635);
	m_wndClose.Create(this, _T("&Close"), 805, 605, 895, 635);
	m_wndExTask.Create(this, _T(""), 235, 605, 325, 635);*/
    CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CRect rect;
    pMF->GetClientRect(&rect);
	if (rect.Width() > 1024)
	{
		m_scale = rect.Width() / 1024.0;
	}
	m_scale = min(m_scale, 1.25);

	m_wndList.Create(this, 5, 5, 300 * m_scale, 600);
    m_wndOptLabel.Create(this, _T("Danh sách phiếu"), 305 * m_scale, 5, 400 * m_scale, 30);
    m_wndOpt.Create(this, 405 * m_scale, 5, 1000 * m_scale, 30);
    m_wndHtml.Create(WS_CHILD | WS_VISIBLE | WS_BORDER,
                     CRect(305 * m_scale, 35, 1024 * m_scale, 600), this, 0);

	m_wndAdd.Create(this, _T("&Add"), 435, 605, 525, 635);
	m_wndUpdate.Create(this, _T("&Update"), 530, 605, 620, 635);
	m_wndSave.Create(this, _T("&Save"), 625, 605, 715, 635);
	m_wndCancel.Create(this, _T("&Cancel"), 720, 605, 810, 635);
	m_wndPrint.Create(this, _T("&Print"), 815, 605, 905, 635);
	m_wndClose.Create(this, _T("&Close"), 910, 605, 1000, 635);
	m_wndExTask.Create(this, _T(""), 340, 605, 430, 635);
	m_wndSearchLabel.Create(this, _T("Search"), 5, 605, 85, 635);
	m_wndSearch.Create(this,90, 605, 340, 635);
	m_wndExTask.ShowWindow(SW_HIDE);

	m_wndFilter.Create(this, _T("Mẫu đã thực hiện"), 5, 605, 155, 635);
	m_wndFilter.ModifyStyle(WS_TABSTOP, 0);

#if (_MSC_VER > 1500)
	//m_wndList.EnableFilterBar(TRUE, L"All");
	m_wndSearch.ShowWindow(SW_HIDE);
	m_wndSearchLabel.ShowWindow(SW_HIDE);
#else
	
#endif

	

}
void CHMSOldTreatmentHtmlDialog::OnInitializeComponents(){

	ModifyStyle(DS_MODALFRAME, WS_CAPTION|WS_MINIMIZEBOX|WS_MAXIMIZEBOX|WS_SYSMENU|WS_DLGFRAME);
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndList.InsertColumn(0, _T("ID"), CFMT_TEXT, 0);
    m_wndList.InsertColumn(1, _T("Tên phiếu"), CFMT_TEXT, 230 * m_scale);
	m_wndList.InsertColumn(2, _T(""), CFMT_TEXT, 0);//type

	m_wndOpt.InsertColumn(0, _T("ID"), CFMT_TEXT, 40);
	m_wndOpt.InsertColumn(1, _T("Order Date"), CFMT_DATETIME, 350);//type

}
void CHMSOldTreatmentHtmlDialog::OnSetWindowEvents()
{

	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();



	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr;
	m_wndExTask.SetEvent(WE_CLICK, _OnExTaskSelectFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndUpdate.SetEvent(WE_CLICK, _OnUpdateSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndSearch.SetEvent(WE_CHECKVALUE, _OnSearchCheckValueFnc);
	m_wndFilter.SetEvent(WE_CLICK, _OnFilterSelectFnc);

	GenBarcode();
	CString szFile;
	szFile.Format(_T("./Reports/HMS/%s.HTML"), m_szType);
	m_wndHtml.Load(szFile);

	GetDataToScreen();

	m_wndHtml.EnableControls(FALSE);	
	//m_wndList.SetEvent(WE_SEL, _OnListSelendokFnc);
	//m_wndList.SetEvent(WE_SETFOCUS, _OnListSetfocusFnc);
	//m_wndList.SetEvent(WE_KILLFOCUS, _OnListKillfocusFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndSearch.SetEvent(WE_CHANGE, _OnSearchChangeFnc);
	//m_wndList.SetEvent(WE_ADDNEW, _OnListAddNewFnc);

	m_wndOpt.SetEvent(WE_SELCHANGE, _OnOptSelectChangeFnc);
	m_wndOpt.SetEvent(WE_SELENDOK, _OnOptSelendokFnc);
	m_wndOpt.SetEvent(WE_LOADDATA, _OnOptLoadDataFnc);

	OnListLoadData();
	for (int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		if (m_wndList.GetItemText(i, 0) == m_szType)
		{
			m_wndList.SetCurSel(i);
			break;
		}
	}
#if (_MSC_VER >= 1500)
#else
	AddLayoutControl(&m_wndHtml, WS_RESIZEX|WS_RESIZEY, 0, 0, 100, 100);
	AddLayoutControl(&m_wndUpdate, WS_REPOSY, 0, 100, 0, 0);
	AddLayoutControl(&m_wndSave, WS_REPOSY, 0, 100, 0, 0);
	AddLayoutControl(&m_wndCancel, WS_REPOSY, 0, 100, 0, 0);
	AddLayoutControl(&m_wndPrint, WS_REPOSY, 0, 100, 0, 0);
	AddLayoutControl(&m_wndClose, WS_REPOSY, 0, 100, 0, 0);
#endif

	//CRect rect;
	//GetDesktopWindow()->GetClientRect(&rect);
	//rect.DeflateRect(50, 50, 50, 50);
	//MoveWindow(rect);
}
void CHMSOldTreatmentHtmlDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndOpt.GetDlgCtrlID(), m_szOptKey);
	DDX_Text(pDX, m_wndSearch.GetDlgCtrlID(), m_szSearch);
	DDX_Check(pDX, m_wndFilter.GetDlgCtrlID(), m_bFilter);
}
void CHMSOldTreatmentHtmlDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{

	}
	else
	{

	}

}
void CHMSOldTreatmentHtmlDialog::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szDate, szTemp;
	m_nDocumentNo = pMF->m_nDocumentNo;
	m_szDeptID = pMF->GetDepartmentID();
	m_nRefIndex = pMF->m_nRefIndex;
	m_nRoomID = pMF->m_nRoomID;

	//m_nDocumentNo = 17001023;
	m_wndHtml.m_szType = m_szType;
	m_wndHtml.m_nDocumentNo = m_nDocumentNo;
	m_wndHtml.m_szDeptID = m_szDeptID;
	m_wndHtml.m_nRefIndex = m_nRefIndex;
	m_wndHtml.m_nRoomID = m_nRoomID;
	m_wndHtml.m_nOptIdx = m_nOptIdx;
	//if(!m_wndHtml.LoadData())
	{
		LoadBasicInfo();
		m_wndHtml.LoadData();

	}
	SetMode(VM_VIEW);

}
void CHMSOldTreatmentHtmlDialog::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CHMSOldTreatmentHtmlDialog::SetDefaultValues(){
	m_szOptKey.Empty();
	if (m_szType != M_TRUOTNGA && m_szType != M_DINHDUONG)
	{
		return;
	}
	dom::element root = m_wndHtml.GetRootElement();
	if (m_szType == M_TRUOTNGA)
	{
		htmlayout::named_values values;

		if(htmlayout::get_values(root, values ))
		{
			std::wstring s;
			for ( htmlayout::named_values::const_iterator it = values.begin(); it != values.end() ; ++it )
			{
				s += (*it).first;
				s += L"=";
				s += (*it).second.to_string();
				s += L"\n";

				std::wstring name = (*it).first;
				std::wstring value =(*it).second.to_string();
				//::MessageBoxW(NULL, name, _T("") )
				dom::element t = root.find_first("[name='%S']",name.c_str()); 
				if( !t.get_style_attribute("behavior") )
					continue;
				if (t.get_ctl_type() != CTL_RADIO)
					continue;
				m_wndHtml.SetValue(name.c_str(), _T("0"));
			}
		}
		OnExTaskSelect();
	}
	if (m_szType == M_DINHDUONG)
	{
		CStringArray arrField;
		arrField.Add(_T("bmi_20"));
		arrField.Add(_T("sut_can_1thang"));
		arrField.Add(_T("luong_an_sut"));
		arrField.Add(_T("benh_nang"));
		for (int i = 0; i < arrField.GetCount(); i++)
		{
			m_wndHtml.SetValue(arrField[i], _T("khong"));
		}
	}
	root.update(true);
}
int CHMSOldTreatmentHtmlDialog::SetMode(int nMode)
{
	int nOldMode = GetMode();
	CGuiDialog::SetMode(nMode);
	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
	CString szSQL;
	CRecord rs(&pMF->m_db);
	szSQL.Format(_T("select hcr_status from hms_clinical_record where hcr_docno = %ld"), pMF->m_nDocumentNo);
	rs.ExecSQL(szSQL);
	if (rs.GetStringValue() == _T("T"))
	{
		//nMode = VM_NONE;
	}
	switch(nMode)
	{
	case VM_ADD: 
		EnableControls(TRUE);
		EnableButtons(TRUE, 2, 3, -1);
		SetDefaultValues();
		m_szOptKey.Empty();
		m_wndOpt.EnableWindow(FALSE);
		m_wndHtml.EnableControls(TRUE);
		if(m_szType == _T("TYC_CAMKETMO") || m_szType == _T("TYC_TUNGUYENDIEUTRI"))
		{

		}
		else
		{
			m_wndHtml.EnableControl(_T("PATIENT_NAME"), false);
			m_wndHtml.EnableControl(_T("YOB"), false);
			m_wndHtml.EnableControl(_T("GENDER"), false);
			m_wndHtml.EnableControl(_T("MALE"), false);
			m_wndHtml.EnableControl(_T("FEMALE"), false);
			m_wndHtml.EnableControl(_T("ETHNIC"), false);
			m_wndHtml.EnableControl(_T("NATION"), false);
			m_wndHtml.EnableControl(_T("CARD_ID"), false);
			//m_wndHtml.EnableControl(_T("PHONE"), false);
			m_wndHtml.EnableControl(_T("INS_CARD_NO"), false);
			//m_wndHtml.EnableControl(_T("WORK_PLACE"), false);
			//m_wndHtml.EnableControl(_T("ADDRESS"), false);
			m_wndHtml.EnableControl(_T("PATIENT_NO"), false);
			m_wndHtml.EnableControl(_T("DOC_NO"), false);
			m_wndHtml.EnableControl(_T("RANK"), false);
			m_wndHtml.EnableControl(_T("POSITION"), false);
			//m_wndHtml.EnableControl(_T("ORG_ADDRESS"), false);
			m_wndHtml.EnableControl(_T("OBJECT"), false);
		}
		m_nOptIdx = -1;
		LoadBasicInfo();
		break;
	case VM_EDIT: 
		EnableControls(TRUE);
		EnableButtons(TRUE, 2, 3, -1);
		m_wndHtml.EnableControls(TRUE);
		if(m_szType == _T("TYC_CAMKETMO") || m_szType == _T("TYC_TUNGUYENDIEUTRI"))
		{

		}
		else
		{
			m_wndHtml.EnableControl(_T("PATIENT_NAME"), false);
			m_wndHtml.EnableControl(_T("YOB"), false);
			m_wndHtml.EnableControl(_T("GENDER"), false);
			m_wndHtml.EnableControl(_T("MALE"), false);
			m_wndHtml.EnableControl(_T("FEMALE"), false);
			m_wndHtml.EnableControl(_T("ETHNIC"), false);
			m_wndHtml.EnableControl(_T("NATION"), false);
			m_wndHtml.EnableControl(_T("CARD_ID"), false);
			//m_wndHtml.EnableControl(_T("PHONE"), false);
			m_wndHtml.EnableControl(_T("INS_CARD_NO"), false);
			//m_wndHtml.EnableControl(_T("WORK_PLACE"), false);
			//m_wndHtml.EnableControl(_T("ADDRESS"), false);
			m_wndHtml.EnableControl(_T("PATIENT_NO"), false);
			m_wndHtml.EnableControl(_T("DOC_NO"), false);
			m_wndHtml.EnableControl(_T("RANK"), false);
			m_wndHtml.EnableControl(_T("POSITION"), false);
			//m_wndHtml.EnableControl(_T("ORG_ADDRESS"), false);
			m_wndHtml.EnableControl(_T("OBJECT"), false);
		}
		break;
	case VM_VIEW: 
		EnableControls(FALSE);
		EnableButtons(false, 2, 3, -1);
		m_wndHtml.EnableControls(FALSE);
		m_wndHtml.UpdateData(true);
		break;
	case VM_NONE: 
		EnableControls(FALSE);
		EnableButtons(TRUE, 0, 4, 5, -1);
		SetDefaultValues();
		m_wndHtml.EnableControls(FALSE);
		m_wndHtml.UpdateData(true);
		break;
	};
	
	m_wndClose.EnableWindow(TRUE);
	m_wndList.EnableWindow(TRUE);
	m_wndOpt.EnableWindow();
	m_wndExTask.EnableWindow(TRUE);
	m_wndSearch.EnableWindow(TRUE);
	SetModeEx();
	UpdateData(FALSE);
	return nOldMode;
}


void CHMSOldTreatmentHtmlDialog::OnListSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("select hcr_status from hms_clinical_record where hcr_docno = %ld"), pMF->m_nDocumentNo);
	rs.ExecSQL(szSQL);		
	if(nNewItemSel < 0)
		return;
	pMF->BeginWaitCursor();
	UpdateData();
	//GenBarcode();
	CString szFile, szLabel=_T("");
	m_szType = m_wndList.GetItemText(nNewItemSel, 0);
	szFile.Format(_T("./Reports/HMS/%s.HTML"), m_szType);
	bool bLoad = m_wndHtml.Load(szFile), bShowEx = false;
	GetDataToScreen();
	m_wndHtml.EnableControls(FALSE);
	CString szFormType = m_wndList.GetItemText(nNewItemSel, 2);
	if(szFormType == _T("I") && rs.GetStringValue() == _T("I"))
	{
		m_wndOptLabel.ShowWindow(SW_HIDE);
		m_wndOpt.ShowWindow(SW_HIDE);
		m_wndOpt.EnableWindow(FALSE);
		m_wndOpt.SetCheckValue(FALSE);
		m_wndAdd.ShowWindow(SW_HIDE);
		m_wndUpdate.EnableWindow(TRUE);
	}
	else if(szFormType == _T("II"))
	{
		m_wndOptLabel.ShowWindow(SW_SHOW);
		m_wndOpt.ShowWindow(SW_SHOW);
		m_wndOpt.EnableWindow(TRUE);
		m_wndAdd.ShowWindow(SW_SHOW);
		m_wndUpdate.EnableWindow(FALSE);
		//m_wndOpt.SetCheckValue(TRUE);
		/*
		if(m_szType == M_TRUOTNGA)
		{
			szLabel = _T("&Summary");
			bShowEx = true;
		}
		*/
		if(m_szType == M_HOATRI)
		{
			szLabel = _T("Delete Drug");
			bShowEx = true;
		}
	}
	m_wndExTask.SetWindowText(szLabel);
	m_wndExTask.ShowWindow(bShowEx);
	m_nOptIdx = 0;
	pMF->EndWaitCursor();

} 
void CHMSOldTreatmentHtmlDialog::OnListSelendok(){
	UpdateData();
	CString szFile;
	//	szFile.Format(_T("./Reports/HMS/%s.HTML"), m_wndList.GetCurrent(1));
	m_wndHtml.m_nOptIdx = 0;
	m_wndHtml.Load(szFile);
	GetDataToScreen();
	m_wndHtml.EnableControls(FALSE);
}
/*void CHMSOldTreatmentHtmlDialog::OnListSetfocus(){

}*/
/*void CHMSOldTreatmentHtmlDialog::OnListKillfocus(){

}*/
long CHMSOldTreatmentHtmlDialog::OnListLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//	return pMF->LoadSelectionList(&m_wndList, _T("Html_Sheet"), m_szListKey);
	return LoadHtmlForms();

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	m_wndList.DeleteAllItems(); 
	int nCount = 0;

	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ss_id='TREATMENT_SHEETS' %s ORDER BY ss_index, id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	int nItem = m_wndList.AddItems(_T("I"), _T("Mẫu biểu hành chính"), NULL);
	m_wndList.SetItemBkColor(nItem, RGB(0, 100, 200));
	m_wndList.SetItemTextColor(nItem, RGB(255,255,255));

	while(!rs.IsEOF()){ 
		_tprintf(_T("\r\n%s"), (LPCTSTR)  rs.GetValue(_T("id")));
		m_wndList.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")),
			_T("I"),
			NULL);
		rs.MoveNext();
	}

	nItem = m_wndList.AddItems(_T("II"), _T("Mẫu biểu PTTT"), NULL);
	m_wndList.SetItemBkColor(nItem, RGB(0, 100, 200));
	m_wndList.SetItemTextColor(nItem, RGB(255,255,255));

	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ss_id='SURGERY_SHEETS' %s ORDER BY ss_index, id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		_tprintf(_T("\r\n%s"), (LPCTSTR)  rs.GetValue(_T("id")));
		m_wndList.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), 
			_T("II"),
			NULL);
		rs.MoveNext();
	}

	return nCount;

	return 0;
}

long CHMSOldTreatmentHtmlDialog::LoadHtmlForms()
{
	CHMSMainFrame* pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CString szSQL, szCategory, szNewCategory, szWhere;
	bool bCategoryChange = false;
	m_wndList.DeleteAllItems(); 
	int nItem = 0;
	szCategory.Empty();
	szWhere.Empty();
	if (!m_szSearch.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND lower(hhfs_name) like(chr(37)||lower('%s')||chr(37)) "), m_szSearch);								  
	}
	if (m_bFilter)
	{
		szSQL.Format(_T(" SELECT DISTINCT") \
			_T("     form_id,") \
			_T("     form_name,") \
			_T("     form_cat") \
			_T(" FROM") \
			_T("     (") \
			_T("         SELECT") \
			_T("             hhfs_id    AS form_id,") \
			_T("             hhfs_name  AS form_name,") \
			_T("             CASE") \
			_T("                 WHEN hhfs_category = 0 THEN") \
			_T("                     'I'") \
			_T("                 ELSE") \
			_T("                     'II'") \
			_T("             END        AS form_cat") \
			_T("         FROM") \
			_T("                  hms_html_form_setup right") \
			_T("             JOIN hms_doc_emr ON ( hhfs_id = hde_type )") \
			_T("                                 AND hde_docno = %ld ") \
			_T("     ) tbl") \
			_T(" WHERE") \
			_T("     form_id IS NOT NULL") \
			_T(" ORDER BY") \
			_T("     form_cat,") \
			_T("     form_id"), m_nDocumentNo);
	}
	else 
	szSQL.Format(_T(" SELECT hhfs_id AS form_id,") \
		_T("        hhfs_name AS form_name,") \
		_T("        CASE WHEN hhfs_category = 0 THEN 'I'") \
		_T("        ELSE 'II'") \
		_T("        END AS form_cat") \
		_T(" FROM   hms_html_form_setup") \
		_T(" WHERE  (SELECT Count(*)") \
		_T("         FROM   TABLE(Split_str(hhfs_module))") \
		_T("         WHERE  column_value = '%s') > 0 AND ( hhfs_dept IS NULL  OR hhfs_dept = '%s' )") \
		_T(" AND hhfs_active = 'Y' %s ")
		_T(" ORDER  BY hhfs_category,hhfs_index,hhfs_id"),
		pMF->GetModuleID(), pMF->GetCurrentDepartmentID(), szWhere);


	rs.ExecSQL(szSQL);
	
	if (rs.IsEOF())
	{
		return 0;
	}
	while (!rs.IsEOF())
	{
		rs.GetValue(_T("form_cat"), szNewCategory);
		bCategoryChange = szCategory!=szNewCategory?true:false;
		if (bCategoryChange)
		{
			nItem = m_wndList.AddItems(szNewCategory, szNewCategory==_T("II")?_T("Mẫu biểu điều trị"):_T("Mẫu biểu hành chính"), NULL);
			m_wndList.SetItemBkColor(nItem, RGB(0, 100, 200));
			m_wndList.SetItemTextColor(nItem, RGB(255,255,255));
			szCategory = szNewCategory;
		}
		m_wndList.AddItems(
			rs.GetValue(_T("form_id")),
			rs.GetValue(_T("form_name")),
			rs.GetValue(_T("form_cat")),
			NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return 1;
}

/*void CHMSOldTreatmentHtmlDialog::OnListAddNew(){
CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

} */ 






void CHMSOldTreatmentHtmlDialog::OnOptSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	if(nNewItemSel < 0)
		return;


} 
void CHMSOldTreatmentHtmlDialog::OnOptSelendok(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	pMF->BeginWaitCursor();
	int nSel = m_wndOpt.GetCurSel();
	if(nSel < 0)
		return;

	UpdateData();
	CString szFile;
	m_nOptIdx = str2long(m_wndOpt.GetCurrent(0));
	szFile.Format(_T("./Reports/HMS/%s.HTML"), m_szType);
	m_wndHtml.m_nOptIdx = m_nOptIdx;
	m_wndHtml.Load(szFile);
	GetDataToScreen();
	m_wndHtml.EnableControls(FALSE);	
	pMF->EndWaitCursor();
}
/*void CHMSOldTreatmentHtmlDialog::OnOptSetfocus(){

}*/
/*void CHMSOldTreatmentHtmlDialog::OnOptKillfocus(){

}*/
long CHMSOldTreatmentHtmlDialog::OnOptLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();


	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	m_wndOpt.DeleteAllItems(); 
	int nCount = 0;
	szWhere.Empty();
	if(m_wndOpt.IsSearchKey() && str2long(m_szOptKey) > 0)
	{
		szWhere.AppendFormat(_T(" and hde_optidx=%ld"), str2long(m_szOptKey));
	}

	szSQL.Format(_T(" SELECT distinct hde_optidx  AS id,") \
		_T("   to_char(hde_date,'DD/MM/YYYY HH24:MI') AS order_date") \
		_T(" FROM hms_doc_emr ") \
		_T(" WHERE hde_docno = %ld") \
		_T(" AND hde_deptid  ='%s' and hde_type='%s'  %s ") \
		_T(" ORDER BY hde_optidx") , m_nDocumentNo, pMF->GetDepartmentID(), m_szType, szWhere);

	_tprintf(_T("\r\n%s"), (LPCTSTR)  szSQL);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndOpt.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("order_date")), 
			NULL);
		rs.MoveNext();
	}
	return rs.GetRecordCount();

	return 0;
}
/*void CHMSOldTreatmentHtmlDialog::OnOptAddNew(){
CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

} */ 


void CHMSOldTreatmentHtmlDialog::OnAddSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	SetMode(VM_ADD);

}

void CHMSOldTreatmentHtmlDialog::OnUpdateSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	SetMode(VM_EDIT);
}



void CHMSOldTreatmentHtmlDialog::OnSaveSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
		return;
	if(!IsValidateData())
		return;
	long nOptIdx = str2long(m_szOptKey);
	if(GetMode() == VM_ADD)
	{
		CString szSQL;
		CRecord rs(&pMF->m_db);
		szSQL.Format(_T("SELECT coalesce(max(hde_optidx), 0)+1 as opt_idx FROM hms_doc_emr WHERE hde_docno=%ld and hde_deptid='%s' and hde_type='%s' "),
			m_nDocumentNo, m_szDeptID, m_szType);
		rs.ExecSQL(szSQL);
		rs.GetValue(_T("opt_idx"), nOptIdx);
	}
	m_wndHtml.m_nOptIdx = nOptIdx;
	_tprintf(_T("\nnOptidx:%ld"), nOptIdx);
	if (m_szType == M_TRUOTNGA)
	{
		OnExTaskSelect();
	}
	if(m_wndHtml.SaveData(m_nDocumentNo))
	{
		SetMode(VM_VIEW);
		GetDataToScreen();
	}

} 
void CHMSOldTreatmentHtmlDialog::OnCancelSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnCancelHMSOldTreatmentHtmlDialog();
} 
void CHMSOldTreatmentHtmlDialog::OnPrintSelect(){

	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

	CString szHtml;
	CString szFile;
	CFile file;
	//Truong hop goi lenh print post len server tao file docx


	m_wndHtml.m_nOptIdx = m_nOptIdx;
	m_wndHtml.OnFilePrint();
	/*
	//Check trường hợp file in khác file view (GIAY_RA_VIEN.HTML, GIAY_RA_VIEN_1.HTML)
	szFile.Format(_T("./Reports/HMS/%s.HTML"), m_szType+_T("print"));	
	BOOL res = file.Open(szFile, CFile::modeRead);
	if(!res)
	{
		szFile.Format(_T("./Reports/HMS/%s.HTML"), m_szType+_T("1"));	
		res = file.Open(szFile, CFile::modeRead);
	}
	file.Close();
	//Neu ton tai file in
	if(res && m_wndHtml.Load(szFile))
	{
		GetDataToScreen();
	}
	m_wndHtml.OnFilePrint();
	szFile.Format(_T("./Reports/HMS/%s.HTML"), m_szType);
	m_wndHtml.Load(szFile);
	GetDataToScreen();	
	*/
} 


void CHMSOldTreatmentHtmlDialog::OnCloseSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnCancel();
} 
void CHMSOldTreatmentHtmlDialog::OnExTaskSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	if (m_szType == M_TRUOTNGA)
	{
		m_wndHtml.GetTongTruotNga();
	}
	if (m_szType == M_HOATRI)
	{
		OnDeleteDrug();
	}
}

void CHMSOldTreatmentHtmlDialog::OnDeleteDrug()
{
	CHMSMainFrame* pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szName, szValue = _T("");
	CStringArray arrName;
	arrName.Add(_T("STT"));
	arrName.Add(_T("TEN"));
	arrName.Add(_T("LIEU"));
	arrName.Add(_T("LIEUB"));
	arrName.Add(_T("SL"));
	arrName.Add(_T("DM"));
	arrName.Add(_T("TT"));
	arrName.Add(_T("TG"));
	for (int i = 1; i <= 6; i++)
	{
		for (int j = 0; j < arrName.GetCount(); j++)
		{
			szName.Format(_T("%s%d"), arrName.GetAt(j), i);
			szSQL.Format(_T("hms_doc_emr_update(%ld, '%s', '%s', %ld, %ld, '%s', '%s')")
				, m_nDocumentNo, m_szDeptID, m_szType, m_nOptIdx, m_nRefIndex, szName, szValue);
			pMF->ExecDML(szSQL);
		}
	}
	GetDataToScreen();
}

int CHMSOldTreatmentHtmlDialog::OnAddHMSOldTreatmentHtmlDialog(){
	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
		return -1;
	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
	SetMode(VM_ADD);
	return 0;
}
int CHMSOldTreatmentHtmlDialog::OnEditHMSOldTreatmentHtmlDialog(){
	if(GetMode() != VM_VIEW)
		return -1;
	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
	SetMode(VM_EDIT);
	return 0;  
}
int CHMSOldTreatmentHtmlDialog::OnDeleteHMSOldTreatmentHtmlDialog(){
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
		OnCancelHMSOldTreatmentHtmlDialog();
	}
	return 0;
}
int CHMSOldTreatmentHtmlDialog::OnSaveHMSOldTreatmentHtmlDialog(){
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
		//OnHMSOldTreatmentHtmlDialogListLoadData();
		SetMode(VM_VIEW);
	}
	else
	{
	}
	return ret;
	return 0;
}
int CHMSOldTreatmentHtmlDialog::OnCancelHMSOldTreatmentHtmlDialog(){
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
int CHMSOldTreatmentHtmlDialog::OnHMSOldTreatmentHtmlDialogListLoadData(){
	return 0;
}


void CHMSOldTreatmentHtmlDialog::LoadBasicInfo()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CRecord rsl(&pMF->m_db);
	CString szSQL, tmpStr, szDate, szTemp, szType = m_szType;
	if(m_nOptIdx > 0)
	{
		szType.Format(_T("%s_%8ld"), m_szType, m_nOptIdx);
	}
	szSQL.Format(_T("SELECT * ") \
		_T(" FROM hms_doc_emr_view ") \
		_T(" WHERE hde_docno =%ld and hde_type='%s' and hde_optidx = %ld") \
		_T(" AND hde_deptid = '%s'") \
		_T(" ORDER BY hde_createdate")
		, pMF->m_nDocumentNo, m_szType, m_nOptIdx, pMF->GetCurrentDepartmentID());
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);

	m_bFound = false;
	if(!rs.IsEOF())
	{
		CString szName, szValue, szUID, tmpStr;

		/*
		rs.GetValue(_T("hde_createdate"), tmpStr);
		szName = _T("NGAY_TAO_PHIEU");
		szValue.Format(_T("%s, ngày %s tháng %s năm %s"), tmpStr.Mid(11, 5), tmpStr.Mid(8, 2), tmpStr.Mid(5, 2), tmpStr.Left(4));
		m_wndHtml.SetValue(szName, szValue);

		rs.GetValue(_T("hde_createdby"), tmpStr);
		szName = _T("NGUOI_TAO_PHIEU");
		szValue = pMF->GetDoctorName(tmpStr);
		m_wndHtml.SetValue(szName, szValue);
		*/
		tmpStr = pMF->GetCurrentDepartmentName();
		m_wndHtml.SetValue(_T("Treatment_dept"), tmpStr);

		while(!rs.IsEOF())
		{
			rs.GetValue(_T("hde_uid"), szUID);
			rs.GetValue(_T("hde_name"), szName);
			rs.GetValue(_T("hde_value"), szValue);
			if(!szUID.IsEmpty() && szValue.GetLength() == 2000)
			{
				szSQL.Format(_T("SELECT * FROM hms_doc_emr_line ") \
					_T(" WHERE hdel_docno=%ld and hdel_uid='%s' ORDER BY hdel_line "),
					pMF->m_nDocumentNo, szUID);
				rsl.ExecSQL(szSQL);

				while(!rsl.IsEOF())
				{
					rsl.GetValue(_T("hdel_value"), tmpStr);
					szValue.AppendFormat(_T("%s"), tmpStr);
					rsl.MoveNext();
				}
			}
			m_wndHtml.SetValue(szName, szValue);
			rs.MoveNext();
		}
		m_bFound = true;
	}
	else
	{
		szTemp = pMF->GetSysDate();
		szDate.Format(_T("Hà Nội, ngày %s tháng %s năm %s"), szTemp.Right(2), szTemp.Mid(5,2), szTemp.Left(4));
		m_wndHtml.SetValue(_T("NGAY_KY"), szDate);
		LoadDiagnostic();
		LoadDeptRoomBed();
		LoadClinicalRecord();

		tmpStr = pMF->GetCurrentDepartmentID();
		m_wndHtml.SetValue(_T("MA_KHOA_HT"), tmpStr);
		tmpStr = pMF->GetCurrentDepartmentName();

		m_wndHtml.SetValue(_T("Treatment_dept"), tmpStr);
		m_wndHtml.SetValue(_T("KHOA_DIEU_TRI"), tmpStr);

		/*szSQL.Format(_T("select to_char(min(htr_admitdate), 'dd/mm/yyyy hh24:mi:ss') as admit_date, ") \
			_T("	to_char(max(htr_dischargedate), 'dd/mm/yyyy hh24:mi:ss') as end_date ") \
			_T(" from hms_treatment_record ") \
			_T(" where htr_docno = %ld") \
			_T(" and htr_treattime = %d")
			, m_nDocumentNo, pMF->GetTreatTime());
		rs.ExecSQL(szSQL);
		rs.GetValue(_T("admit_date"), tmpStr);
		m_wndHtml.SetValue(_T("ADMIT_DATE"), tmpStr);
		m_wndHtml.SetValue(_T("NGAY_VAO_VIEN"), tmpStr);

		rs.GetValue(_T("end_date"), tmpStr);
		m_wndHtml.SetValue(_T("END_DATE"), tmpStr);
		m_wndHtml.SetValue(_T("NGAY_RA_VIEN"), tmpStr);*/

		/*
		CString szName, szValue;
		szName = _T("NGUOI_TAO_PHIEU");
		szValue = pMF->GetDoctorName(pMF->GetCurrentUser());
		m_wndHtml.SetValue(szName, szValue);
		szName = _T("NGAY_TAO_PHIEU");
		tmpStr = pMF->GetSysDateTime();
		szValue.Format(_T("%s, ngày %s tháng %s năm %s"), tmpStr.Mid(11, 5), tmpStr.Mid(8, 2), tmpStr.Mid(5, 2), tmpStr.Left(4));
		m_wndHtml.SetValue(szName, szValue);
		*/
		m_wndHtml.UpdateData();
	}
	szSQL.Format(_T("select * ") \
		_T(" from hms_html_view") \
		_T(" where sohoso = %ld")
		, m_nDocumentNo);

	rs.ExecSQL(szSQL);
	if (!rs.IsEOF())
	{
		for (int i = 0; i < rs.GetFieldCount(); i++)
		{
			m_wndHtml.SetValue(rs.GetFieldName(i), rs.GetValue(i));
		}
	}

	if (m_szType == M_TRUOTNGA)
	{
		m_wndHtml.GetTongTruotNga();
	}
	//Một số thông tin cần truyền vào treattime
	szSQL.Format(_T("select to_char(min(htr_admitdate), 'dd/mm/yyyy hh24:mi:ss') as admit_date, ") \
			_T("	to_char(max(htr_dischargedate), 'dd/mm/yyyy hh24:mi:ss') as end_date ") \
			_T(" from hms_treatment_record ") \
			_T(" where htr_docno = %ld") \
			_T(" and htr_treattime = %d")
			, m_nDocumentNo, pMF->GetTreatTime());

		rs.ExecSQL(szSQL);
		rs.GetValue(_T("admit_date"), tmpStr);
		m_wndHtml.SetValue(_T("ADMIT_DATE"), tmpStr);
		m_wndHtml.SetValue(_T("NGAY_VAO_VIEN"), tmpStr);

		rs.GetValue(_T("end_date"), tmpStr);
		m_wndHtml.SetValue(_T("END_DATE"), tmpStr);
		m_wndHtml.SetValue(_T("NGAY_RA_VIEN"), tmpStr);
}

void CHMSOldTreatmentHtmlDialog::LoadDiagnostic()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT htr_maindisease, htr_recordno FROM hms_treatment_record where htr_docno=%ld and htr_idx=%ld"),
		m_nDocumentNo, pMF->m_nRefIndex);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		//rs.GetValue(_T("ho_diagnostic"), m_szDiagnostic);
		CString tmpStr;
		rs.GetValue(_T("htr_maindisease"), tmpStr);
		m_wndHtml.SetValue(_T("DIAGNOSTIC"), tmpStr);
		m_wndHtml.SetValue(_T("CHAN_DOAN"), tmpStr);
		rs.GetValue(_T("htr_recordno"), tmpStr);
		m_wndHtml.SetValue(_T("RECORDNO"), tmpStr);
		m_wndHtml.SetValue(_T("MA_BENH_AN"), tmpStr);
		//m_wndHtml.UpdateData(true);
	}
}

void CHMSOldTreatmentHtmlDialog::LoadDeptRoomBed()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szDynPrice;
	int nCount = 0;
	int nCurSel = 0;
	int nItem;
	szSQL.Format(_T(" SELECT hb_deptid,") \
		_T("   hb_idx,") \
		_T("   hb_refidx,") \
		_T("   hb_admitdate,") \
		_T("   hb_enddate,") \
		_T("   hb_bedid,") \
		_T("   hb_roomid,") \
		_T("   hb_status,") \
		_T("   hb_doctor,") \
		_T("   hb_dynprice,") \
		_T("   hrl_name AS roomname,") \
		_T("   hbl_name AS bedname") \
		_T(" FROM hms_bed") \
		_T(" LEFT JOIN hms_roomlist") \
		_T(" ON(hrl_deptid = hb_deptid") \
		_T(" AND hrl_id    = hb_roomid)") \
		_T(" LEFT JOIN hms_bedlist") \
		_T(" ON(hbl_deptid  = hb_deptid") \
		_T(" AND hbl_roomid = hb_roomid") \
		_T(" AND hbl_id     = hb_bedid)") \
		_T(" WHERE hb_docno =%ld AND hb_idx = (select max(hb_idx) from hms_bed where hb_docno =%ld)") \
		_T(" ORDER BY hb_idx"), pMF->m_nDocumentNo, pMF->m_nDocumentNo);	
	rs.ExecSQL(szSQL);

	//	CString tmpStr;
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("hb_deptid"), tmpStr);
		m_wndHtml.SetValue(_T("DEPT"), tmpStr);
		m_wndHtml.SetValue(_T("MA_KHOA"), tmpStr);

		rs.GetValue(_T("hb_roomid"), tmpStr);
		m_wndHtml.SetValue(_T("ROOM"), tmpStr);
		m_wndHtml.SetValue(_T("MA_PHONG"), tmpStr);

		rs.GetValue(_T("hb_bedid"), tmpStr);
		m_wndHtml.SetValue(_T("BED"), tmpStr);
		m_wndHtml.SetValue(_T("MA_GIUONG"), tmpStr);
	}
}



void CHMSOldTreatmentHtmlDialog::LoadClinicalRecord()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szData;
	JSONVALUE jData;

	//Phần hỏi bệnh
	szSQL.Format(_T("SELECT to_char(hde_value) as hde_value FROM hms_doc_emr WHERE hde_docno=%ld and hde_type IN('BENH_AN_HB') ORDER BY hde_type, hde_refidx "), pMF->m_nDocumentNo);
	rs.ExecSQL(szSQL);
	szData.Empty();

	while(!rs.IsEOF())
	{
		rs.GetValue(_T("hde_value"), szData);
		rs.MoveNext();
	}

	if(!szData.IsEmpty())
	{
		jData.Clear();
		jData.Parse(szData);
		tmpStr.Empty();

		jData[_T("ly_do_vao_vien")].GetValue(tmpStr);
		m_wndHtml.SetValue(_T("ly_do_vao_vien"), tmpStr);
	}



	//Phần khám bệnh
	szSQL.Format(_T("SELECT to_char(hde_value) as hde_value FROM hms_doc_emr WHERE hde_docno=%ld and hde_type IN('BENH_AN_KB') ORDER BY hde_type, hde_refidx "), pMF->m_nDocumentNo);
	rs.ExecSQL(szSQL);
	szData.Empty();

	while(!rs.IsEOF())
	{
		rs.GetValue(_T("hde_value"), szData);
		rs.MoveNext();
	}

	if(!szData.IsEmpty())
	{
		jData.Clear();
		jData.Parse(szData);
		tmpStr.Empty();

	}



	//Phần kết luận
	szSQL.Format(_T("SELECT to_char(hde_value) as hde_value FROM hms_doc_emr WHERE hde_docno=%ld and hde_type IN('BENH_AN_KL') ORDER BY hde_type, hde_refidx "), pMF->m_nDocumentNo);
	rs.ExecSQL(szSQL);
	szData.Empty();

	while(!rs.IsEOF())
	{
		rs.GetValue(_T("hde_value"), szData);
		rs.MoveNext();
	}

	if(!szData.IsEmpty())
	{
		jData.Clear();
		jData.Parse(szData);
		tmpStr.Empty();

		jData[_T("chan_doan_xac_dinh")].GetValue(tmpStr);
		m_wndHtml.SetValue(_T("chan_doan_xac_dinh"), tmpStr);
	}

}



void CHMSOldTreatmentHtmlDialog::GenBarcode()
{
	CHMSMainFrame* pMF = (CHMSMainFrame*) AfxGetMainWnd(); 
	CDC* pDC = GetDC();

	//create a memory dc

	CDC memDC;

	memDC.CreateCompatibleDC(pDC);

	//Create a memory bitmap

	CBitmap newbmp;

	newbmp.CreateCompatibleBitmap(pDC, 200, 100);

	//release the Display DC

	ReleaseDC(pDC);

	//select the bitmap in the memory dc

	CBitmap *pOldBitmap = memDC.SelectObject(&newbmp);

	//make the bitmap white to begin with

	memDC.FillSolidRect(0,0,200,100,RGB(255,255,255));

	//Drawbarcode
	CString scode = _T("0123456789");
	scode.Format(_T("%ld"), pMF->m_nDocumentNo);
	CT2A csCode(scode);
	int iPenW = 1, iL = 0, iT = 0, iB = 100;
	COLORREF clrBar		=RGB(0,0,0);
	COLORREF clrSpace	=RGB(255,255,255);

	Barcode39 code;
	code.Encode39(csCode);
	//P_DrawBarcode(&memDC,iL,iT,iB-10,iB,clrBar,clrSpace,iPenW,&code);
	code.DrawBarcode(memDC.m_hDC,iL,iT,iB-10,iB,clrBar,clrSpace,iPenW);

	//SaveAsImage(&memDC);
	CImage TempImageObj;
	TempImageObj.Attach((HBITMAP)newbmp.Detach());
	TempImageObj.Save(_T("Data\\Barcode html\\Barcode.bmp"));
	//select old bitmap back into the memory dc

	memDC.SelectObject(pOldBitmap);
}
int CHMSOldTreatmentHtmlDialog::OnSearchCheckValue()
{
	//UpdateData(true);
	//LoadHtmlForms();
	return 0;
}
int CHMSOldTreatmentHtmlDialog::OnSearchChange()
{
	UpdateData(true);
	LoadHtmlForms();
	return 0;
}

void CHMSOldTreatmentHtmlDialog::SetModeEx()
{
	return;
	CHMSMainFrame* pMF = (CHMSMainFrame*) AfxGetMainWnd();
	if (m_szType != M_DINHDUONG)
		return;
	if (GetMode() != VM_EDIT && GetMode() != VM_ADD)
		return;
	bool bIsNurse = false, bIsDoctor = false;
	if (pMF->m_UserInfo.su_groupid == _T("D") || pMF->m_UserInfo.su_groupid == _T("P"))
		bIsDoctor = true;
	if (pMF->m_UserInfo.su_groupid == _T("N"))
		bIsNurse = true;
	CStringArray arrNurseInput, arrDoctorInput;
	arrNurseInput.Add(_T("bmi_20"));
	arrNurseInput.Add(_T("sut_can_1thang"));
	arrNurseInput.Add(_T("luong_an_sut"));
	arrNurseInput.Add(_T("benh_nang"));
	arrDoctorInput.Add(_T("sut_can"));
	arrDoctorInput.Add(_T("doi_khau_phan"));
	arrDoctorInput.Add(_T("tieu_hoa"));
	arrDoctorInput.Add(_T("hoat_dong"));
	arrDoctorInput.Add(_T("stress_chuyen_hoa"));
	arrDoctorInput.Add(_T("thuc_the"));
	for (int i = 0 ; i < arrNurseInput.GetCount(); i++)
		m_wndHtml.EnableControl(arrNurseInput[i], bIsNurse?true:false);
	for (int i = 0 ; i < arrDoctorInput.GetCount(); i++)
		m_wndHtml.EnableControl(arrDoctorInput[i], bIsDoctor?true:false);
}

void CHMSOldTreatmentHtmlDialog::OnFilterSelect() {
	CHMSMainFrame* pMF = (CHMSMainFrame*)AfxGetMainWnd();
	UpdateData(true);
	OnListLoadData();
	UpdateData(false);
}