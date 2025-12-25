#include "PhanKhamChuyenKhoa.h"
#include "MainFrm.h"
#include "PhanKhamChuyenKhoaInput.h"
#include ".\phankhamchuyenkhoa.h"
#include "HMSBenhAnHTMLDialog.h"
#include <HMSReportForms/PrintForms.h>

static void _OnMedicalTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPhanKhamChuyenKhoa* )pWnd)->OnMedicalTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnMedicalTypeSelendokFnc(CWnd *pWnd){
	((CPhanKhamChuyenKhoa *)pWnd)->OnMedicalTypeSelendok();
}
/*static void _OnMedicalTypeSetfocusFnc(CWnd *pWnd){
	((CPhanKhamChuyenKhoa *)pWnd)->OnMedicalTypeKillfocus();
}*/
/*static void _OnMedicalTypeKillfocusFnc(CWnd *pWnd){
	((CPhanKhamChuyenKhoa *)pWnd)->OnMedicalTypeKillfocus();
}*/
static long _OnMedicalTypeLoadDataFnc(CWnd *pWnd){
	return ((CPhanKhamChuyenKhoa *)pWnd)->OnMedicalTypeLoadData();
}
/*static void _OnMedicalTypeAddNewFnc(CWnd *pWnd){
	((CPhanKhamChuyenKhoa *)pWnd)->OnMedicalTypeAddNew();
}*/
static void _OnViewSelectChangeFnc(CWnd *pWnd, int nOld, int nNew){
	((CPhanKhamChuyenKhoa*)pWnd)->OnViewSelectChange(nOld, nNew);
} 
static int _OnAddPhanKhamChuyenKhoaFnc(CWnd *pWnd){
	 return ((CPhanKhamChuyenKhoa*)pWnd)->OnAddPhanKhamChuyenKhoa();
} 
static int _OnEditPhanKhamChuyenKhoaFnc(CWnd *pWnd){
	 return ((CPhanKhamChuyenKhoa*)pWnd)->OnEditPhanKhamChuyenKhoa();
} 
static int _OnDeletePhanKhamChuyenKhoaFnc(CWnd *pWnd){
	 return ((CPhanKhamChuyenKhoa*)pWnd)->OnDeletePhanKhamChuyenKhoa();
} 
static int _OnSavePhanKhamChuyenKhoaFnc(CWnd *pWnd){
	 return ((CPhanKhamChuyenKhoa*)pWnd)->OnSavePhanKhamChuyenKhoa();
} 
static int _OnCancelPhanKhamChuyenKhoaFnc(CWnd *pWnd){
	 return ((CPhanKhamChuyenKhoa*)pWnd)->OnCancelPhanKhamChuyenKhoa();
} 

CPhanKhamChuyenKhoa::CPhanKhamChuyenKhoa(){
	m_pInputFocus = NULL;

}
CPhanKhamChuyenKhoa::~CPhanKhamChuyenKhoa(){
}

void CPhanKhamChuyenKhoa::Init(int nMode, long nDocNo, CString szRecordNo, int nHtrIdx, int nTreatTime)
{
	CGuiView::SetMode(nMode);
	m_nDocumentNo = nDocNo;
	m_szRecordNo = szRecordNo;
	m_nHtrIdx = nHtrIdx;
	m_nTreatTime = nTreatTime;
	m_nDlgWidth = 960;
	m_nDlgHeight = 600;
	SetDefaultValues();
}
void CPhanKhamChuyenKhoa::OnCreateComponents(){
	m_wndMedicalTypeLabel.Create(this, _T("Medical Type"), 5, 5, 125, 30);
	m_wndMedicalType.Create(this,130, 5, 530, 30); 
	m_rcView = CRect(5, 35, 960, 550);
}
void CPhanKhamChuyenKhoa::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndMedicalType.SetCheckValue(true);
	m_wndMedicalType.LimitText(35);
	m_wndMedicalType.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndMedicalType.InsertColumn(1, _T("Name"), CFMT_TEXT, 300);

	 
	
}
void CPhanKhamChuyenKhoa::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndMedicalType.SetEvent(WE_SELENDOK, _OnMedicalTypeSelendokFnc);
	//m_wndMedicalType.SetEvent(WE_SETFOCUS, _OnMedicalTypeSetfocusFnc);
	//m_wndMedicalType.SetEvent(WE_KILLFOCUS, _OnMedicalTypeKillfocusFnc);
	m_wndMedicalType.SetEvent(WE_SELCHANGE, _OnMedicalTypeSelectChangeFnc);
	m_wndMedicalType.SetEvent(WE_LOADDATA, _OnMedicalTypeLoadDataFnc);
	//m_wndMedicalType.SetEvent(WE_ADDNEW, _OnMedicalTypeAddNewFnc);
	/*
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddPhanKhamChuyenKhoaFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditPhanKhamChuyenKhoaFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeletePhanKhamChuyenKhoaFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSavePhanKhamChuyenKhoaFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelPhanKhamChuyenKhoaFnc, 0, 'T', VK_CONTROL);
*/
	
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT distinct hafc_form as form_id, hafc_html as ishtml ") \
		_T(" FROM hms_admissionfile_config ") \
		_T(" WHERE (hafc_deptid = '%s' or hafc_deptid in(select hde_deptid from hms_doc_emr where hde_docno=%ld and hde_type='%s') ) ") \
		_T(" ORDER BY form_id "),
		pMF->m_szDept, m_nDocumentNo, _T("BENH_AN_CHUYEN_KHOA"));
	rs.ExecSQL(szSQL);
	CString szForm, szHtml;
	CRect rect = m_rcView;
	
	while(!rs.IsEOF())
	{
		rs.GetValue(_T("form_id"), szForm);
		rs.GetValue(_T("ishtml"), szHtml);
		CPhanKhamChuyenKhoaInput* newInput = new CPhanKhamChuyenKhoaInput(szForm, m_nDocumentNo, m_nHtrIdx, szHtml==_T("Y")?true:false);
		//newInput->Create(this, rect);
		//newInput->OnInitDialog();
		//newInput->ShowWindow(SW_HIDE);
		
		m_wndInputViews.Add(newInput);
		m_InputForms.Add(szForm);
_tprintf(_T("\r\n%s"), szForm);
		rs.MoveNext();
	}
	
	GetDataToScreen();
	SetMode(GetMode());


}
void CPhanKhamChuyenKhoa::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndMedicalType.GetDlgCtrlID(), m_szMedicalTypeKey);

}
void CPhanKhamChuyenKhoa::UpdateJson(BOOL bSave){
	if(bSave)
	{
		UpdateData(TRUE);
		m_jData[_T("MedicalType")] =  m_szMedicalTypeKey;
	}
	else
	{
			
		m_jData[_T("MedicalType")].GetValue(m_szMedicalTypeKey);
		UpdateData(FALSE);
	}

}
void CPhanKhamChuyenKhoa::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;


	if(m_nTreatTime <= 1)
		szWhere.Format(_T(" and (hde_treattime=%d or hde_treattime=0) "), m_nTreatTime);
	else
		szWhere.Format(_T(" and (hde_treattime=%d) "), m_nTreatTime);

	
	szSQL.Format(_T("SELECT hde_name FROM hms_doc_emr ") \
		_T(" WHERE hde_docno=%ld and hde_type='BENH_AN_CHUYEN_KHOA' ") \
		_T(" and hde_deptid = '%s' ") \
		_T(" %s ORDER BY hde_treattime "), m_nDocumentNo, pMF->m_szDept, szWhere);
	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
	{
		//szWhere.AppendFormat(_T(" and hde_deptid='%s' "), pMF->m_szDept);
		szSQL.Format(_T("SELECT hde_name FROM hms_doc_emr WHERE hde_docno=%ld and hde_type='BENH_AN_CHUYEN_KHOA' %s ORDER BY hde_treattime "), m_nDocumentNo, szWhere);
		rs.ExecSQL(szSQL);

	}

	m_szForm.Empty();
	m_szMedicalTypeKey.Empty();
_tprintf(_T("\r\n%s"), szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("hde_name"), m_szForm);
		m_szMedicalTypeKey = m_szForm;
		UpdateData(FALSE);
		SelectInput(m_szForm);
		
	}
}
void CPhanKhamChuyenKhoa::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CPhanKhamChuyenKhoa::SetDefaultValues(){

	m_szMedicalTypeKey.Empty();

}
int CPhanKhamChuyenKhoa::SetMode(int nMode){
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
			m_wndMedicalType.EnableWindow(false);
 			break;
 		case VM_VIEW: 
 			EnableControls(FALSE);
 			EnableButtons(FALSE, 3, 4, -1);
			m_wndMedicalType.EnableWindow(true);
 			break;
 		case VM_NONE: 
 			EnableControls(FALSE);
 			EnableButtons(TRUE, 0, 6, -1);
 			SetDefaultValues();
 			break;
 		};
 		UpdateData(FALSE);
		//m_wndMedicalType.EnableWindow(TRUE);
		if(m_pInputFocus)
		{
			CPhanKhamChuyenKhoaInput* input = (CPhanKhamChuyenKhoaInput*) m_pInputFocus;
			input->SetMode(nMode);

		}
 		return nOldMode;
}
void CPhanKhamChuyenKhoa::OnMedicalTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPhanKhamChuyenKhoa::OnMedicalTypeSelendok(){
	UpdateData(TRUE);
	if(m_szMedicalTypeKey.IsEmpty())
		return;
	SelectInput(m_szMedicalTypeKey);
}
void CPhanKhamChuyenKhoa::SelectInput(CString szForm)
{
	int nIndex = -1;

	for(int i =0; i < m_InputForms.GetCount(); i++)
	{
		if(szForm == m_InputForms[i])
		{
			nIndex = i;
		}
		CWnd *pWnd = m_wndInputViews[i];
		if(pWnd->GetSafeHwnd())
		{
			pWnd->ShowWindow(SW_HIDE);
			CPhanKhamChuyenKhoaInput* input = (CPhanKhamChuyenKhoaInput*)pWnd;
			input->SetMode(VM_VIEW);
		}
	}
	CRect rc = m_rcView;
	
	GetClientRect(&rc);
	rc.top += 35;
	rc.left += 5;
	
	_tprintf(_T("\r\n%d: %d"), rc.left, rc.top);


	if(nIndex >= 0 &&  nIndex < m_wndInputViews.GetCount() )
	{
		CWnd *pWnd = m_wndInputViews[nIndex];
		CPhanKhamChuyenKhoaInput* input = (CPhanKhamChuyenKhoaInput*)pWnd;
		_tprintf(_T("\r\n%d: %s"), nIndex, szForm, input->m_szFormID);	
		if(!input->GetSafeHwnd())
		{
			//ScreenToClient(&rc);
			input->Create(this, rc);
			input->OnInitDialog();
		}

		
		input->SetWindowPos(NULL, 0, rc.top, rc.Width(), rc.Height(), SWP_SHOWWINDOW|SWP_NOZORDER);
		input->Refresh(m_nTreatTime);
		m_pInputFocus = pWnd;
		input->SetFocus();
	}
}
/*void CPhanKhamChuyenKhoa::OnMedicalTypeSetfocus(){
	
}*/
/*void CPhanKhamChuyenKhoa::OnMedicalTypeKillfocus(){
	
}*/
long CPhanKhamChuyenKhoa::OnMedicalTypeLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndMedicalType.IsSearchKey() && !m_szMedicalTypeKey.IsEmpty()){
		szWhere.Format(_T(" AND hafc_form = '%s'"), m_szMedicalTypeKey);
	};
	szSQL.Format(_T("SELECT hafc_form as id,hafc_desc as description, hafc_html as ishtml ") \
		_T(" FROM hms_admissionfile_config ") \
		_T(" WHERE (hafc_deptid = '%s' or hafc_deptid in(select hde_deptid from hms_doc_emr where hde_docno=%ld and hde_type='%s') ) ") \
		_T(" and hafc_form is not null %s ORDER BY hafc_desc "), 
		pMF->m_szDept, m_nDocumentNo, _T("BENH_AN_CHUYEN_KHOA"), szWhere);
_tprintf(_T("\r\n%s"), szSQL);
	m_wndMedicalType.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	if(rs.IsEOF())
	{
		szSQL.Format(_T("SELECT hafc_form as id,hafc_desc as description, hafc_html as ishtml  ") \
		_T(" FROM hms_admissionfile_config ") \
		_T(" WHERE hafc_deptid = '%s' and hafc_form is not null "), 
		pMF->m_szDept);
		nCount = rs.ExecSQL(szSQL);

	}
	while(!rs.IsEOF()){ 
		m_wndMedicalType.AddItems(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("description")),
			rs.GetValue(_T("ishtml")),
			NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CPhanKhamChuyenKhoa::OnMedicalTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CPhanKhamChuyenKhoa::OnViewSelectChange(int nOld, int nNew){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CPhanKhamChuyenKhoa::OnAddPhanKhamChuyenKhoa(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CPhanKhamChuyenKhoa::OnEditPhanKhamChuyenKhoa(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CPhanKhamChuyenKhoa::OnDeletePhanKhamChuyenKhoa(){
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
 		OnCancelPhanKhamChuyenKhoa();
 	}
	return 0;
}
int CPhanKhamChuyenKhoa::OnSavePhanKhamChuyenKhoa(){
	int ret = -1;
 	if(m_pInputFocus)
	{
		CPhanKhamChuyenKhoaInput* input = (CPhanKhamChuyenKhoaInput*) m_pInputFocus;
		ret =  input->OnSaveCPhanKhamChuyenKhoaInput();
		if (ret > 0)
		{
			SetMode(input->GetMode());
		}
	}
	return ret;
}
int CPhanKhamChuyenKhoa::OnCancelPhanKhamChuyenKhoa(){
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
int CPhanKhamChuyenKhoa::OnPhanKhamChuyenKhoaListLoadData(){
	return 0;
}


BEGIN_MESSAGE_MAP(CPhanKhamChuyenKhoa, CGuiView)
	ON_WM_DESTROY()
	ON_WM_SIZE()
END_MESSAGE_MAP()


void CPhanKhamChuyenKhoa::OnDestroy()
{
	CGuiView::OnDestroy();
	for (int i = m_wndInputViews.GetCount() - 1; i > 0; i--)
	{
		//Release cac wnd chua duoc create 
		CPhanKhamChuyenKhoaInput* pWnd = (CPhanKhamChuyenKhoaInput*) m_wndInputViews[i];
		if(!pWnd->GetSafeHwnd())
		{
			delete pWnd;
		}
	}
	m_wndInputViews.RemoveAll();
	m_InputForms.RemoveAll();
}

void CPhanKhamChuyenKhoa::Refresh(int nTreatTime)
{
	m_nTreatTime = nTreatTime;
	GetDataToScreen();
	SetMode(VM_VIEW);
}

void CPhanKhamChuyenKhoa::OnSize(UINT nType, int cx, int cy)
{
	CGuiView::OnSize(nType, cx, cy);
	
	// TODO: Add your message handler code here
	CRect rect;
	GetClientRect(&rect);
	rect.left += 5;
	rect.top += 35;
	if(m_pInputFocus && m_pInputFocus->GetSafeHwnd())
	{
		m_pInputFocus->MoveWindow(rect);
	}
}


BOOL CPhanKhamChuyenKhoa::OnCommand(WPARAM wParam, LPARAM lParam)
{
	// TODO: Add your specialized code here and/or call the base class
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	
	if (!m_pInputFocus)
	{
		return CGuiView::OnCommand(wParam, lParam);
	}
	
	CPhanKhamChuyenKhoaInput* input = (CPhanKhamChuyenKhoaInput*)m_pInputFocus;

	if (wParam == VM_EDIT)
	{
		input->SetMode(VM_EDIT);
		return TRUE;
	}
	if (wParam == VM_VIEW)
	{
		input->SetMode(VM_VIEW);
		return TRUE;
		
	}
	if (wParam == VM_PRINT)
	{
		CPrintForms printer;
		CStringArray info;
		CString szDocNo;
		szDocNo.Format(_T("%ld"), pMF->m_nDocumentNo);
		info.Add(szDocNo);
		info.Add(pMF->m_szDept);
		info.Add(pMF->m_CompanyInfo.sc_pname);
		info.Add(pMF->m_CompanyInfo.sc_pname);
		//info.Add(m_szCancer);
		info.Add(int2str(pMF->m_nTreatTime));
		info.Add(int2str(pMF->m_nCancerTime));
		UpdateData(true);
		CString szForm = m_szMedicalTypeKey;
		szForm.AppendFormat(_T(".html"));
		info.Add(m_szMedicalTypeKey);
		_tprintf(_T("\r\nPrintForm: %s"), szForm);
		pMF->AddProp(L"patient_name", pMF->m_szPatientName);
		if (pMF->m_nCancerTime > 1)
		{
			printer.PrintMedicalFile_Cancer_2(info, true);
		}
		else
			printer.PrintMedicalFile(info, true);

	}
	if (wParam == VM_SAVE)
	{
		int ret = OnSavePhanKhamChuyenKhoa();
		return ret > 0?TRUE:FALSE;
	}
	return CGuiView::OnCommand(wParam, lParam);
}
