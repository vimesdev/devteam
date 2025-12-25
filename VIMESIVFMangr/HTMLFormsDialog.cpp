// HTMLayoutCtrl.cpp : implementation file
//

#include "stdafx.h"
#include "HTMLFormsDialog.h"
#include "HMSMainFrame.h"
#include "resource.h"

static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHTMLFormsDialog* )pWnd)->OnListSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnListSelendokFnc(CWnd *pWnd){
	((CHTMLFormsDialog *)pWnd)->OnListSelendok();
}
/*static void _OnListSetfocusFnc(CWnd *pWnd){
	((CHTMLFormsDialog *)pWnd)->OnListKillfocus();
}*/
/*static void _OnListKillfocusFnc(CWnd *pWnd){
	((CHTMLFormsDialog *)pWnd)->OnListKillfocus();
}*/
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHTMLFormsDialog *)pWnd)->OnListLoadData();
}



static void _OnOptSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHTMLFormsDialog* )pWnd)->OnOptSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnOptSelendokFnc(CWnd *pWnd){
	((CHTMLFormsDialog *)pWnd)->OnOptSelendok();
}
/*static void _OnOptSetfocusFnc(CWnd *pWnd){
	((CHTMLFormsDialog *)pWnd)->OnOptKillfocus();
}*/
/*static void _OnOptKillfocusFnc(CWnd *pWnd){
	((CHTMLFormsDialog *)pWnd)->OnOptKillfocus();
}*/
static long _OnOptLoadDataFnc(CWnd *pWnd){
	return ((CHTMLFormsDialog *)pWnd)->OnOptLoadData();
}

static void _OnAddSelectFnc(CWnd *pWnd){
	CHTMLFormsDialog *pVw = (CHTMLFormsDialog *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnUpdateSelectFnc(CWnd *pWnd){
	CHTMLFormsDialog *pVw = (CHTMLFormsDialog *)pWnd;
	pVw->OnUpdateSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHTMLFormsDialog *pVw = (CHTMLFormsDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHTMLFormsDialog *pVw = (CHTMLFormsDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CHTMLFormsDialog *pVw = (CHTMLFormsDialog *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHTMLFormsDialog *pVw = (CHTMLFormsDialog *)pWnd;
	pVw->OnCloseSelect();
}

static int _OnAddHMSTreatmentHtmlDialogFnc(CWnd *pWnd){
	 return ((CHTMLFormsDialog*)pWnd)->OnAddHMSTreatmentHtmlDialog();
} 
static int _OnEditHMSTreatmentHtmlDialogFnc(CWnd *pWnd){
	 return ((CHTMLFormsDialog*)pWnd)->OnEditHMSTreatmentHtmlDialog();
} 
static int _OnDeleteHMSTreatmentHtmlDialogFnc(CWnd *pWnd){
	 return ((CHTMLFormsDialog*)pWnd)->OnDeleteHMSTreatmentHtmlDialog();
} 
static int _OnSaveHMSTreatmentHtmlDialogFnc(CWnd *pWnd){
	 return ((CHTMLFormsDialog*)pWnd)->OnSaveHMSTreatmentHtmlDialog();
} 
static int _OnCancelHMSTreatmentHtmlDialogFnc(CWnd *pWnd){
	 return ((CHTMLFormsDialog*)pWnd)->OnCancelHMSTreatmentHtmlDialog();
}
static int _OnSearchCheckValueFnc(CWnd *pWnd){
	return ((CHTMLFormsDialog *)pWnd)->OnSearchCheckValue();
}
static void _OnRefreshSelectFnc(CWnd *pWnd){
	CHTMLFormsDialog *pVw = (CHTMLFormsDialog *)pWnd;
	pVw->OnRefreshSelect();
}

CHTMLFormsDialog::CHTMLFormsDialog(CWnd *pParent):
	CGuiDialog(pParent){
	
	m_nDlgWidth = 900;
	m_nDlgHeight = 605;
	SetDefaultValues();
	m_nOptIdx = 0;
	m_szFormType.Empty();
}
CHTMLFormsDialog::~CHTMLFormsDialog(){
}
void CHTMLFormsDialog::OnCreateComponents()
{
	m_wndList.Create(this, 5, 5, 180, 600);
	m_wndOptLabel.Create(this, _T("Danh sách phiếu"), 185, 5, 300, 30);
	m_wndOpt.Create(this,305, 5, 1000, 30);
	m_wndHtml.Create(WS_CHILD|WS_VISIBLE|WS_BORDER, CRect(185, 35, 1010, 600), this, 0);
	m_wndAdd.Create(this, _T("&Add"), 331, 605, 421, 635);
	m_wndUpdate.Create(this, _T("&Update"), 425, 605, 515, 635);
	m_wndSave.Create(this, _T("&Save"), 520, 605, 610, 635);
	m_wndCancel.Create(this, _T("&Cancel"), 615, 605, 705, 635);
	m_wndPrint.Create(this, _T("&Print"), 710, 605, 800, 635);
	m_wndClose.Create(this, _T("&Close"), 805, 605, 895, 635);
	m_wndSearch.Create(this,10, 605, 280, 635); 
	m_wndRefresh.Create(this, _T("@"), 285, 606, 325, 634);
}
void CHTMLFormsDialog::OnInitializeComponents(){
	
	ModifyStyle(DS_MODALFRAME, WS_CAPTION|WS_MINIMIZEBOX|WS_MAXIMIZEBOX|WS_SYSMENU|WS_DLGFRAME);

	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	/*m_wndList.InsertColumn(0, _T("ID"), CFMT_TEXT, 0);
	m_wndList.InsertColumn(1, _T("Tên phiếu"), CFMT_TEXT, 170);
	m_wndList.InsertColumn(2, _T(""), CFMT_TEXT, 0);//type*/

	m_wndList.InsertColumn(0, _T("ID"), CFMT_TEXT | CFMT_CENTER, 0);
	m_wndList.InsertColumn(1, _T(""), CFMT_TEXT | CFMT_CENTER, 40);
	m_wndList.InsertColumn(2, _T("Tên phiếu"), CFMT_TEXT, 400);
	m_wndList.InsertColumn(3, _T(""), CFMT_TEXT, 0);
	m_wndList.InsertColumn(4, _T(""), CFMT_TEXT, 0);//type

	m_wndOpt.InsertColumn(0, _T("ID"), CFMT_TEXT, 90);
	m_wndOpt.InsertColumn(1, _T("Order No"), CFMT_TEXT, 80);
	m_wndOpt.InsertColumn(2, _T("Order Date"), CFMT_TEXT, 120);//type
}
void CHTMLFormsDialog::OnSetWindowEvents(){
	
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr;

	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndUpdate.SetEvent(WE_CLICK, _OnUpdateSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndSearch.SetEvent(WE_CHECKVALUE, _OnSearchCheckValueFnc);
	m_wndRefresh.SetEvent(WE_CLICK, _OnRefreshSelectFnc);

	if (!m_szType.IsEmpty())
	{
		CString szFile;
		szFile.Format(_T("./Reports/IVF/%s.HTML"), m_szType);
		m_wndHtml.Load(szFile);
		GetDataToScreen();
	}
	
	
	m_wndHtml.EnableControls(FALSE);	
	//m_wndList.SetEvent(WE_SEL, _OnListSelendokFnc);
	//m_wndList.SetEvent(WE_SETFOCUS, _OnListSetfocusFnc);
	//m_wndList.SetEvent(WE_KILLFOCUS, _OnListKillfocusFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	//m_wndList.SetEvent(WE_ADDNEW, _OnListAddNewFnc);

	m_wndOpt.SetEvent(WE_SELCHANGE, _OnOptSelectChangeFnc);
	m_wndOpt.SetEvent(WE_SELENDOK, _OnOptSelendokFnc);
	m_wndOpt.SetEvent(WE_LOADDATA, _OnOptLoadDataFnc);

	OnListLoadData();


	AddLayoutControl(&m_wndHtml, WS_RESIZEX|WS_RESIZEY, 0, 0, 100, 100);
	AddLayoutControl(&m_wndUpdate, WS_REPOSY, 0, 100, 0, 0);
	AddLayoutControl(&m_wndSave, WS_REPOSY, 0, 100, 0, 0);
	AddLayoutControl(&m_wndCancel, WS_REPOSY, 0, 100, 0, 0);
	AddLayoutControl(&m_wndPrint, WS_REPOSY, 0, 100, 0, 0);
	AddLayoutControl(&m_wndClose, WS_REPOSY, 0, 100, 0, 0);
}
void CHTMLFormsDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndOpt.GetDlgCtrlID(), m_szOptKey);
	DDX_Text(pDX, m_wndSearch.GetDlgCtrlID(), m_szSearch);
}
void CHTMLFormsDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	}
	else
	{
			
	}

}
void CHTMLFormsDialog::GetDataToScreen(){
	if (m_szFormType == _T("II") && m_nOptIdx == 0)
	{
		return;
	}
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
	m_wndHtml.m_szTableName = m_szType;
	m_wndHtml.m_szUID = _T("GUID");
	m_wndHtml.m_szWhere.Empty();
	if (m_nOptIdx > 0)
	{
		m_wndHtml.m_szWhere.Format(_T(" and optidx = %ld"), m_nOptIdx);
	}
	m_wndHtml.GetData();
	SetMode(VM_VIEW);
}
void CHTMLFormsDialog::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CHTMLFormsDialog::SetDefaultValues(){
	m_szOptKey.Empty();
	m_szSearch.Empty();

}
int CHTMLFormsDialog::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
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
			}
			
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
			}
			
 			break;
 		case VM_VIEW: 
 			EnableControls(FALSE);
 			EnableButtons(false, 2, 3, -1);
			m_wndHtml.EnableControls(FALSE);
			m_wndSearch.EnableWindow(TRUE);
			m_wndHtml.UpdateData(true);
 			break;
 		case VM_NONE: 
 			EnableControls(FALSE);
 			EnableButtons(TRUE, 0, 6, -1);
 			SetDefaultValues();
 			break;
 		};
		m_wndClose.EnableWindow(TRUE);
		m_wndList.EnableWindow(TRUE);
		m_wndOpt.EnableWindow();
		
 		UpdateData(FALSE);
 		return nOldMode;
}


void CHTMLFormsDialog::OnListSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	if(nNewItemSel < 0)
		return;
	pMF->BeginWaitCursor();
	UpdateData();
 	CString szFile;
	m_szType = m_wndList.GetItemText(nNewItemSel, 0);
_tprintf(_T("\nform_id: %s\n"), m_szType);
	szFile.Format(_T("./Reports/IVF/%s.HTML"), m_szType);
	m_wndHtml.Load(szFile);
	m_wndHtml.EnableControls(FALSE);
	m_szFormType = m_wndList.GetItemText(nNewItemSel, 3);
	if(m_szFormType == _T("I"))
	{
		m_wndOptLabel.ShowWindow(SW_HIDE);
		m_wndOpt.ShowWindow(SW_HIDE);
		m_wndOpt.EnableWindow(FALSE);
		m_wndOpt.SetCheckValue(FALSE);
		m_wndAdd.ShowWindow(SW_HIDE);
		m_wndUpdate.EnableWindow(TRUE);
		m_wndSearch.EnableWindow(TRUE);

		
	}
	else if(m_szFormType == _T("II"))
	{
		m_wndOptLabel.ShowWindow(SW_SHOW);
		m_wndOpt.ShowWindow(SW_SHOW);
		m_wndOpt.EnableWindow(TRUE);
		m_wndAdd.ShowWindow(SW_HIDE);
//		m_wndOpt.SetCheckValue(TRUE);

	}
	m_nOptIdx = 0;
	GetDataToScreen();
	pMF->EndWaitCursor();

} 
void CHTMLFormsDialog::OnListSelendok(){
	UpdateData();
 	CString szFile;
//	szFile.Format(_T("./Reports/IVF/%s.HTML"), m_wndList.GetCurrent(1));
	m_wndHtml.m_nOptIdx = 0;
	m_wndHtml.Load(szFile);
	GetDataToScreen();
	m_wndHtml.EnableControls(FALSE);	
}
/*void CHTMLFormsDialog::OnListSetfocus(){
	
}*/
/*void CHTMLFormsDialog::OnListKillfocus(){
	
}*/
void CHTMLFormsDialog::OnRefreshSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnListLoadData();
}
long CHTMLFormsDialog::OnListLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
//	return pMF->LoadSelectionList(&m_wndList, _T("Html_Sheet"), m_szListKey);

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	UpdateData(true);
	m_wndList.DeleteAllItems(); 
	int nCount = 0;
	if (!m_szSearch.IsEmpty())
	{
		szWhere.Format(_T(" and lower(ss_desc) like(chr(37)||lower('%s')||chr(37)) "), m_szSearch);
	}
	//szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ss_id='IVF_FORMS' %s ORDER BY ss_index, id "), szWhere);
	szSQL.Format(_T("SELECT ss_code as id, cast(ss_index as int) as IDX, ss_desc as name FROM sys_sel WHERE ss_id='IVF_FORMS' and cast(ss_index as int)>0 %s ORDER BY cast(ss_index as int) "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	int nItem = m_wndList.AddItems(_T(""), _T("I"), _T("MẪU BIỂU HÀNH CHÍNH"), NULL);
	m_wndList.SetItemBkColor(nItem, RGB(0, 100, 200));
	m_wndList.SetItemTextColor(nItem, RGB(255,255,255));

	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("IDX")),
			rs.GetValue(_T("name")),
			_T("I"),
			NULL);
		rs.MoveNext();
	}

	nItem = m_wndList.AddItems(_T(""), _T("II"), _T("THEO DÕI ĐIỀU TRỊ"), NULL);
	m_wndList.SetItemBkColor(nItem, RGB(0, 100, 200));
	m_wndList.SetItemTextColor(nItem, RGB(255,255,255));
	
	//szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ss_id='IVF_TRACKING' %s ORDER BY ss_index, id "), szWhere);
	szSQL.Format(_T("SELECT ss_code as id, cast(ss_index as int) as IDX, ss_desc as name FROM sys_sel WHERE ss_id='IVF_TRACKING' AND cast(ss_index as int)>0 %s ORDER BY cast(ss_index as int) "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("IDX")),
			rs.GetValue(_T("name")), 
			_T("II"),
			NULL);
		rs.MoveNext();
	}

	return nCount;

	return 0;
}
/*void CHTMLFormsDialog::OnListAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */ 






void CHTMLFormsDialog::OnOptSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	if(nNewItemSel < 0)
		return;
	

} 
void CHTMLFormsDialog::OnOptSelendok(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	pMF->BeginWaitCursor();
	int nSel = m_wndOpt.GetCurSel();
	if(nSel < 0)
		return;
	
	UpdateData();
 	CString szFile;
	m_nOptIdx = str2long(m_wndOpt.GetCurrent(0));
	szFile.Format(_T("./Reports/IVF/%s.HTML"), m_szType);
	m_wndHtml.m_nOptIdx = m_nOptIdx;
	m_wndHtml.Load(szFile);
	GetDataToScreen();
	m_wndHtml.EnableControls(FALSE);	
	pMF->EndWaitCursor();
}
/*void CHTMLFormsDialog::OnOptSetfocus(){
	
}*/
/*void CHTMLFormsDialog::OnOptKillfocus(){
	
}*/
long CHTMLFormsDialog::OnOptLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	m_wndOpt.DeleteAllItems(); 
	int nCount = 0;
	szWhere.Empty();
	if(m_wndOpt.IsSearchKey() && str2long(m_szOptKey) > 0)
	{
		//szWhere.AppendFormat(_T(" and hde_optidx=%ld"), str2long(m_szOptKey));
	}
	szSQL.Format(_T("SELECT ID, order_no, to_char(order_date, 'dd/mm/yyyy') as order_date ") \
				_T(" FROM ivf_phieu_html_view ") \
				_T(" WHERE doc_no = %ld and treat_time = %d and form_id = '%s'") \
				_T(" ORDER BY ID") 
				, pMF->m_nDocumentNo, pMF->GetTreatTime(), m_szType);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndOpt.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("order_no")), 
			rs.GetValue(_T("order_date")), 
			NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHTMLFormsDialog::OnOptAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */ 
int CHTMLFormsDialog::OnSearchCheckValue()
{
	OnListLoadData();
	return 0;
}
void CHTMLFormsDialog::OnAddSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	SetMode(VM_ADD);
	
}

void CHTMLFormsDialog::OnUpdateSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	SetMode(VM_EDIT);
}



void CHTMLFormsDialog::OnSaveSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return;
 	if(!IsValidateData())
 		return;
	long nOptIdx = m_nOptIdx;
	if(GetMode() == VM_ADD)
	{
		CString szSQL;
		CRecord rs(&pMF->m_db);
		szSQL.Format(_T("SELECT coalesce(max(hde_optidx), 0)+1 as opt_idx FROM hms_doc_emr WHERE hde_docno=%ld and hde_deptid='%s' and hde_type='%s' "),
			m_nDocumentNo, m_szDeptID, m_szType);
		rs.ExecSQL(szSQL);
		rs.GetValue(_T("opt_idx"), nOptIdx);
	}
	if(m_wndHtml.PostData())
		SetMode(VM_VIEW);
	
} 
void CHTMLFormsDialog::OnCancelSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnCancelHMSTreatmentHtmlDialog();
} 

void CHTMLFormsDialog::OnPrintSelect(){

	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szFile;
	szFile.Format(_T("./Reports/IVF/%s.HTML"), m_szType+_T("1"));
	CFile file;
	BOOL res = file.Open(szFile, CFile::modeRead);
	file.Close();
	m_wndHtml.m_nOptIdx = m_nOptIdx;
	if(res && m_wndHtml.Load(szFile))
	{
		GetDataToScreen();
		m_wndHtml.OnFilePrint();
		szFile.Format(_T("./Reports/IVF/%s.HTML"), m_szType);
		m_wndHtml.Load(szFile);
		GetDataToScreen();
	}
	else
	{
		m_wndHtml.OnFilePrint();
		//m_wndHtml.OnFilePrintPreview();
	}
} 
void CHTMLFormsDialog::OnCloseSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnCancel();
} 
int CHTMLFormsDialog::OnAddHMSTreatmentHtmlDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHTMLFormsDialog::OnEditHMSTreatmentHtmlDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHTMLFormsDialog::OnDeleteHMSTreatmentHtmlDialog(){
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
 		OnCancelHMSTreatmentHtmlDialog();
 	}
	return 0;
}
int CHTMLFormsDialog::OnSaveHMSTreatmentHtmlDialog(){
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
 		//OnHMSTreatmentHtmlDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHTMLFormsDialog::OnCancelHMSTreatmentHtmlDialog(){
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
int CHTMLFormsDialog::OnHMSTreatmentHtmlDialogListLoadData(){
	return 0;
}

BOOL CHTMLFormsDialog::PreTranslateMessage(MSG* pMsg)
{
	// TODO: Add your specialized code here and/or call the base class

	if(pMsg->hwnd == m_wndHtml.GetSafeHwnd())
	{
		return m_wndHtml.PreTranslateMessage(pMsg);
	}
	
	return CGuiDialog::PreTranslateMessage(pMsg);
}
