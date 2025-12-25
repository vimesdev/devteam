#include "IVFSpecialityHtmlDialog.h"
#include "HMSMainFrame.h"
#include "resource.h"
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CIVFSpecialityHtmlDialog* )pWnd)->OnListSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnListSelendokFnc(CWnd *pWnd){
	((CIVFSpecialityHtmlDialog *)pWnd)->OnListSelendok();
}
/*static void _OnListSetfocusFnc(CWnd *pWnd){
	((CIVFSpecialityHtmlDialog *)pWnd)->OnListKillfocus();
}*/
/*static void _OnListKillfocusFnc(CWnd *pWnd){
	((CIVFSpecialityHtmlDialog *)pWnd)->OnListKillfocus();
}*/
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CIVFSpecialityHtmlDialog *)pWnd)->OnListLoadData();
}



static void _OnOptSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CIVFSpecialityHtmlDialog* )pWnd)->OnOptSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnOptSelendokFnc(CWnd *pWnd){
	((CIVFSpecialityHtmlDialog *)pWnd)->OnOptSelendok();
}
/*static void _OnOptSetfocusFnc(CWnd *pWnd){
	((CIVFSpecialityHtmlDialog *)pWnd)->OnOptKillfocus();
}*/
/*static void _OnOptKillfocusFnc(CWnd *pWnd){
	((CIVFSpecialityHtmlDialog *)pWnd)->OnOptKillfocus();
}*/
static long _OnOptLoadDataFnc(CWnd *pWnd){
	return ((CIVFSpecialityHtmlDialog *)pWnd)->OnOptLoadData();
}

static void _OnAddSelectFnc(CWnd *pWnd){
	CIVFSpecialityHtmlDialog *pVw = (CIVFSpecialityHtmlDialog *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnUpdateSelectFnc(CWnd *pWnd){
	CIVFSpecialityHtmlDialog *pVw = (CIVFSpecialityHtmlDialog *)pWnd;
	pVw->OnUpdateSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CIVFSpecialityHtmlDialog *pVw = (CIVFSpecialityHtmlDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CIVFSpecialityHtmlDialog *pVw = (CIVFSpecialityHtmlDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CIVFSpecialityHtmlDialog *pVw = (CIVFSpecialityHtmlDialog *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CIVFSpecialityHtmlDialog *pVw = (CIVFSpecialityHtmlDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static void _OnSumerySelectFnc(CWnd *pWnd){
	CIVFSpecialityHtmlDialog *pVw = (CIVFSpecialityHtmlDialog *)pWnd;
	pVw->OnSumerySelect();
} 
static int _OnAddIVFSpecialityHtmlDialogFnc(CWnd *pWnd){
	 return ((CIVFSpecialityHtmlDialog*)pWnd)->OnAddIVFSpecialityHtmlDialog();
} 
static int _OnEditIVFSpecialityHtmlDialogFnc(CWnd *pWnd){
	 return ((CIVFSpecialityHtmlDialog*)pWnd)->OnEditIVFSpecialityHtmlDialog();
} 
static int _OnDeleteIVFSpecialityHtmlDialogFnc(CWnd *pWnd){
	 return ((CIVFSpecialityHtmlDialog*)pWnd)->OnDeleteIVFSpecialityHtmlDialog();
} 
static int _OnSaveIVFSpecialityHtmlDialogFnc(CWnd *pWnd){
	 return ((CIVFSpecialityHtmlDialog*)pWnd)->OnSaveIVFSpecialityHtmlDialog();
} 
static int _OnCancelIVFSpecialityHtmlDialogFnc(CWnd *pWnd){
	 return ((CIVFSpecialityHtmlDialog*)pWnd)->OnCancelIVFSpecialityHtmlDialog();
} 
CIVFSpecialityHtmlDialog::CIVFSpecialityHtmlDialog(CWnd *pParent, CString szType):
	CGuiDialog(pParent){
	
	m_nDlgWidth = 900;
	m_nDlgHeight = 605;
	SetDefaultValues();
	m_szType = szType;
	m_nOptIdx = 0;
}
CIVFSpecialityHtmlDialog::~CIVFSpecialityHtmlDialog(){
}
void CIVFSpecialityHtmlDialog::OnCreateComponents(){
	
	m_wndList.Create(this, 5, 5, 180, 600);
	m_wndOptLabel.Create(this, _T("Danh sách phiếu"), 185, 5, 300, 30);
	m_wndOpt.Create(this, 305, 5, 1000, 30);
	m_wndHtml.Create(WS_CHILD|WS_VISIBLE|WS_BORDER, CRect(185, 35, 1010, 600), this, 0); 
	m_wndAdd.Create(this, _T("&Add"), 330, 605, 420, 635);
	m_wndUpdate.Create(this, _T("&Update"), 425, 605, 515, 635);
	m_wndSave.Create(this, _T("&Save"), 520, 605, 610, 635);
	m_wndCancel.Create(this, _T("&Cancel"), 615, 605, 705, 635);
	m_wndPrint.Create(this, _T("&Print"), 710, 605, 800, 635);
	m_wndClose.Create(this, _T("&Close"), 805, 605, 895, 635);
	m_wndSumery.Create(this, _T("&Sumery"), 235, 605, 325, 635);
	m_wndSumery.ShowWindow(SW_HIDE);
}
void CIVFSpecialityHtmlDialog::OnInitializeComponents(){
	
	ModifyStyle(DS_MODALFRAME, WS_CAPTION|WS_MINIMIZEBOX|WS_MAXIMIZEBOX|WS_SYSMENU|WS_DLGFRAME);

	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndList.InsertColumn(0, _T("ID"), CFMT_TEXT, 0);
	m_wndList.InsertColumn(1, _T("Tên phiếu"), CFMT_TEXT, 200);
	m_wndList.InsertColumn(2, _T(""), CFMT_TEXT, 0);//type

	m_wndOpt.InsertColumn(0, _T("ID"), CFMT_TEXT, 40);
	m_wndOpt.InsertColumn(1, _T("Order Date"), CFMT_DATETIME, 140);//type

}
void CIVFSpecialityHtmlDialog::OnSetWindowEvents(){
	
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
	

	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr;
	m_wndSumery.SetEvent(WE_CLICK, _OnSumerySelectFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndUpdate.SetEvent(WE_CLICK, _OnUpdateSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);

	
	CString szFile;
	szFile.Format(_T("./Reports/HMS/IVF/%s.HTML"), m_szType);
	m_wndHtml.Load(szFile);

	GetDataToScreen();
	
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
void CIVFSpecialityHtmlDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndOpt.GetDlgCtrlID(), m_szOptKey);
}
void CIVFSpecialityHtmlDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	}
	else
	{
			
	}

}
void CIVFSpecialityHtmlDialog::GetDataToScreen(){
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
	}

	SetMode(VM_VIEW);
}
void CIVFSpecialityHtmlDialog::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CIVFSpecialityHtmlDialog::SetDefaultValues(){
	m_szOptKey.Empty();
}
int CIVFSpecialityHtmlDialog::SetMode(int nMode){
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
 			EnableButtons(TRUE, 0, 6, -1);
 			SetDefaultValues();
 			break;
 		};
		m_wndClose.EnableWindow(TRUE);
		m_wndList.EnableWindow(TRUE);
		m_wndOpt.EnableWindow();
		m_wndSumery.EnableWindow(TRUE);
 		UpdateData(FALSE);
 		return nOldMode;
}


void CIVFSpecialityHtmlDialog::OnListSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	if(nNewItemSel < 0)
		return;
	pMF->BeginWaitCursor();
	UpdateData();
 	CString szFile;
	m_szType = m_wndList.GetItemText(nNewItemSel, 0);
	szFile.Format(_T("./Reports/HMS/IVF/%s.HTML"), m_szType);
	bool bLoad = m_wndHtml.Load(szFile);
	//GetDataToScreen();
	m_wndHtml.m_szTableName = _T("IVF_CAMKETTHUTINH");
	m_wndHtml.m_nDocumentNo = m_nDocumentNo;
	m_wndHtml.m_szUID.Format(_T("%ld"), m_nDocumentNo);
	m_wndHtml.GetData();
	m_wndHtml.EnableControls(FALSE);
	CString szFormType = m_wndList.GetItemText(nNewItemSel, 2);
	if(szFormType == _T("I"))
	{
		m_wndOptLabel.ShowWindow(SW_HIDE);
		m_wndOpt.ShowWindow(SW_HIDE);
		m_wndOpt.EnableWindow(FALSE);
		m_wndOpt.SetCheckValue(FALSE);
		m_wndAdd.ShowWindow(SW_HIDE);
		m_wndUpdate.EnableWindow(TRUE);
		if(m_szType == _T("DT_TRUOTNGA"))
			m_wndSumery.ShowWindow(SW_SHOW);

		
	}
	else if(szFormType == _T("II"))
	{
		m_wndOptLabel.ShowWindow(SW_SHOW);
		m_wndOpt.ShowWindow(SW_SHOW);
		m_wndOpt.EnableWindow(TRUE);
		m_wndAdd.ShowWindow(SW_SHOW);
//		m_wndOpt.SetCheckValue(TRUE);
		m_wndSumery.ShowWindow(SW_HIDE);
	}
	m_nOptIdx = 0;
	pMF->EndWaitCursor();

} 
void CIVFSpecialityHtmlDialog::OnListSelendok(){
	UpdateData();
 	CString szFile;
//	szFile.Format(_T("./Reports/HMS/%s.HTML"), m_wndList.GetCurrent(1));
	m_wndHtml.m_nOptIdx = 0;
	m_wndHtml.Load(szFile);
	GetDataToScreen();
	m_wndHtml.EnableControls(FALSE);	
}
/*void CIVFSpecialityHtmlDialog::OnListSetfocus(){
	
}*/
/*void CIVFSpecialityHtmlDialog::OnListKillfocus(){
	
}*/
long CIVFSpecialityHtmlDialog::OnListLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	m_wndList.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ss_id='IVF_SHEETS' %s ORDER BY ss_index, id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	int nItem = m_wndList.AddItems(_T("I"), _T("Mẫu biểu chuyên môn"), NULL);
	m_wndList.SetItemBkColor(nItem, RGB(0, 100, 200));
	m_wndList.SetItemTextColor(nItem, RGB(255,255,255));

	while(!rs.IsEOF()){ 
		_tprintf(_T("\r\n%s"), rs.GetValue(_T("id")));
		m_wndList.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")),
			_T("I"),
			NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CIVFSpecialityHtmlDialog::OnListAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */ 






void CIVFSpecialityHtmlDialog::OnOptSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	if(nNewItemSel < 0)
		return;
	

} 
void CIVFSpecialityHtmlDialog::OnOptSelendok(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	pMF->BeginWaitCursor();
	int nSel = m_wndOpt.GetCurSel();
	if(nSel < 0)
		return;
	
	UpdateData();
 	CString szFile;
	m_nOptIdx = str2long(m_wndOpt.GetCurrent(0));
	szFile.Format(_T("./Reports/HMS/IVF/%s.HTML"), m_szType);
	m_wndHtml.m_nOptIdx = m_nOptIdx;
	m_wndHtml.Load(szFile);
	GetDataToScreen();
	m_wndHtml.EnableControls(FALSE);	
	pMF->EndWaitCursor();
}
/*void CIVFSpecialityHtmlDialog::OnOptSetfocus(){
	
}*/
/*void CIVFSpecialityHtmlDialog::OnOptKillfocus(){
	
}*/
long CIVFSpecialityHtmlDialog::OnOptLoadData(){
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

	_tprintf(_T("\r\n%s"), szSQL);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndOpt.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("order_date")), 
			NULL);
		rs.MoveNext();
	}
	return nCount;

	return 0;
}
/*void CIVFSpecialityHtmlDialog::OnOptAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */ 


void CIVFSpecialityHtmlDialog::OnAddSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	SetMode(VM_ADD);
	
}

void CIVFSpecialityHtmlDialog::OnUpdateSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	SetMode(VM_EDIT);
}



void CIVFSpecialityHtmlDialog::OnSaveSelect(){
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
	//if(m_wndHtml.SaveData(m_nDocumentNo))
	if(m_wndHtml.PostData())
		SetMode(VM_VIEW);
	
} 
void CIVFSpecialityHtmlDialog::OnCancelSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnCancelIVFSpecialityHtmlDialog();
} 
void CIVFSpecialityHtmlDialog::OnPrintSelect(){

	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szFile;
	szFile.Format(_T("./Reports/HMS/IVF/%s.HTML"), m_szType+_T("1"));
	CFile file;
	BOOL res = file.Open(szFile, CFile::modeRead);
	file.Close();
	m_wndHtml.m_nOptIdx = m_nOptIdx;
	if(res && m_wndHtml.Load(szFile))
	{
		GetDataToScreen();
		m_wndHtml.OnFilePrint();
		szFile.Format(_T("./Reports/HMS/IVF/%s.HTML"), m_szType);
		m_wndHtml.Load(szFile);
		GetDataToScreen();
	}
	else
	{
		m_wndHtml.OnFilePrint();
		//m_wndHtml.OnFilePrintPreview();
	}
} 
void CIVFSpecialityHtmlDialog::OnCloseSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnCancel();
} 
void CIVFSpecialityHtmlDialog::OnSumerySelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
} 
int CIVFSpecialityHtmlDialog::OnAddIVFSpecialityHtmlDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CIVFSpecialityHtmlDialog::OnEditIVFSpecialityHtmlDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CIVFSpecialityHtmlDialog::OnDeleteIVFSpecialityHtmlDialog(){
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
 		OnCancelIVFSpecialityHtmlDialog();
 	}
	return 0;
}
int CIVFSpecialityHtmlDialog::OnSaveIVFSpecialityHtmlDialog(){
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
 		//OnIVFSpecialityHtmlDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CIVFSpecialityHtmlDialog::OnCancelIVFSpecialityHtmlDialog(){
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
int CIVFSpecialityHtmlDialog::OnIVFSpecialityHtmlDialogListLoadData(){
	return 0;
}

BOOL CIVFSpecialityHtmlDialog::PreTranslateMessage(MSG* pMsg)
{
	// TODO: Add your specialized code here and/or call the base class

	if(pMsg->hwnd == m_wndHtml.GetSafeHwnd())
	{
		return m_wndHtml.PreTranslateMessage(pMsg);
	}
	
	return CGuiDialog::PreTranslateMessage(pMsg);
}
void CIVFSpecialityHtmlDialog::LoadBasicInfo(){
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szDate, szTemp, szType = m_szType;
	if(m_nOptIdx > 0)
	{
		szType.Format(_T("%s_%8ld"), m_szType, m_nOptIdx);
	}
	szSQL.Format(_T("SELECT * FROM hms_doc_emr_view WHERE hde_docno =%ld and hde_type='%s' and hde_optidx = %ld"), pMF->m_nDocumentNo, m_szType, m_nOptIdx);
	rs.ExecSQL(szSQL);

	m_bFound = false;
	if(!rs.IsEOF())
	{

		CString szName, szValue;
		while(!rs.IsEOF())
		{
			rs.GetValue(_T("hde_name"), szName);
			rs.GetValue(_T("hde_value"), szValue);
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

		szSQL.Format(_T("SELECT hd_docno as sohoso, hd_patientno as mabenhnhan, hp_surname||' '||hp_midname||' '||hp_firstname as pname, ") \
			_T(" sys_sel_getname('sys_sex', hp_sex) as gender, hp_sex, extract(year from hp_birthdate) as yob, ") \
			_T(" (select ss_desc from sys_sel where ss_id = 'hms_rank' and ss_code = hp_rank) as rank, ") \
			_T(" (select ss_desc from sys_sel where ss_id = 'hms_position' and ss_code = hp_position) as position, ") \
			_T(" get_objectname(hd_object) as object, hms_getaddress(hp_provid, hp_distid, hp_villid) as quequan,") \
			_T(" sys_sel_getname('sys_ethnic', cast(hp_ethnic as nvarchar2(25))) as ethnic, hp_workplace as noilamviec,") \
			_T(" (select adc_name from ad_country where adc_country_id = hp_nationality) as pnation, hp_sin as cmt, hd_contacttel as phone, hd_cardno as theBH, ") \
			_T(" hms_getaddress(hp_provid, hp_distid, hp_villid) as diachi, ") \
			_T(" (SELECT ss_desc FROM sys_sel WHERE ss_id = 'sys_occupation' AND ss_code = hp_occupation) AS occupation, ") \
			_T(" hd_admitdate AS admitdate, ") \
			_T(" hd_enddate AS enddate ") \
			_T(" FROM hms_patient , hms_doc ") \
			_T(" WHERE hd_patientno = hp_patientno and hd_docno = %ld "), m_nDocumentNo);
		
					
	_tprintf(_T("\r\n%s"), szSQL);

		rs.ExecSQL(szSQL);

		if(!rs.IsEOF())
		{
			rs.GetValue(_T("pname"), tmpStr);
			m_wndHtml.SetValue(_T("PATIENT_NAME"), tmpStr);
			m_wndHtml.SetValue(_T("HO_TEN_BENH_NHAN"), tmpStr);

			rs.GetValue(_T("yob"), tmpStr);
			m_wndHtml.SetValue(_T("YOB"), tmpStr);
			m_wndHtml.SetValue(_T("NAM_SINH"), tmpStr);

			rs.GetValue(_T("gender"), tmpStr);
			m_wndHtml.SetValue(_T("GENDER"), tmpStr);
			m_wndHtml.SetValue(_T("GIOI_TINH"), tmpStr);

			rs.GetValue(_T("hp_sex"), tmpStr);
			if(tmpStr == _T("M"))
			{
				m_wndHtml.SetValue(_T("MALE"), _T("X"));
				m_wndHtml.SetValue(_T("NAM"), _T("X"));
			}
			else
			{
				m_wndHtml.SetValue(_T("FEMALE"), _T("X"));
				m_wndHtml.SetValue(_T("NU"), _T("X"));
			}

			rs.GetValue(_T("ethnic"), tmpStr);
			m_wndHtml.SetValue(_T("ETHNIC"), tmpStr);
			m_wndHtml.SetValue(_T("TON_GIAO"), tmpStr);

			rs.GetValue(_T("pnation"), tmpStr);
			m_wndHtml.SetValue(_T("NATION"), tmpStr);
			m_wndHtml.SetValue(_T("DAN_TOC"), tmpStr);

			rs.GetValue(_T("cmt"), tmpStr);
			m_wndHtml.SetValue(_T("CARD_ID"), tmpStr);
			m_wndHtml.SetValue(_T("SO_CMND"), tmpStr);

			rs.GetValue(_T("phone"), tmpStr);
			m_wndHtml.SetValue(_T("PHONE"), tmpStr);
			m_wndHtml.SetValue(_T("DIEN_THOAI"), tmpStr);

			rs.GetValue(_T("theBH"), tmpStr);
			m_wndHtml.SetValue(_T("INS_CARD_NO"), tmpStr);
			m_wndHtml.SetValue(_T("MA_THE_BH"), tmpStr);

			rs.GetValue(_T("noilamviec"), tmpStr);
			m_wndHtml.SetValue(_T("WORK_PLACE"), tmpStr);
			m_wndHtml.SetValue(_T("NOI_LAMVIEC"), tmpStr);

			rs.GetValue(_T("diachi"), tmpStr);
			m_wndHtml.SetValue(_T("ADDRESS"), tmpStr);
			m_wndHtml.SetValue(_T("DIA_CHI"), tmpStr);

			rs.GetValue(_T("mabenhnhan"), tmpStr);
			m_wndHtml.SetValue(_T("PATIENT_NO"), tmpStr);
			m_wndHtml.SetValue(_T("MA_BENHNHAN"), tmpStr);

			rs.GetValue(_T("sohoso"), tmpStr);
			m_wndHtml.SetValue(_T("DOC_NO"), tmpStr);
			m_wndHtml.SetValue(_T("SO_HOSO"), tmpStr);

			rs.GetValue(_T("rank"), tmpStr);
			m_wndHtml.SetValue(_T("RANK"), tmpStr);
			m_wndHtml.SetValue(_T("CAP_BAC"), tmpStr);

			rs.GetValue(_T("position"), tmpStr);
			m_wndHtml.SetValue(_T("POSITION"), tmpStr);
			m_wndHtml.SetValue(_T("CHUC_VU"), tmpStr);

			rs.GetValue(_T("quequan"), tmpStr);
			m_wndHtml.SetValue(_T("QUE_QUAN"), tmpStr);
			m_wndHtml.SetValue(_T("ORG_ADDRESS"), tmpStr);

			rs.GetValue(_T("object"), tmpStr);
			m_wndHtml.SetValue(_T("OBJECT"), tmpStr);
			m_wndHtml.SetValue(_T("DOI_TUONG"), tmpStr);
			tmpStr = pMF->GetCurrentDepartmentName();
			m_wndHtml.SetValue(_T("Treatment_dept"), tmpStr);
			m_wndHtml.SetValue(_T("KHOA_DIEU_TRI"), tmpStr);

			rs.GetValue(_T("DOCTOR_NAME"), tmpStr);
			m_wndHtml.SetValue(_T("DOCTOR_NAME"), tmpStr);
			m_wndHtml.SetValue(_T("TEN_BAC_SI"), tmpStr);

			rs.GetValue(_T("occupation"), tmpStr);
			m_wndHtml.SetValue(_T("OCCUPATION"), tmpStr);
			m_wndHtml.SetValue(_T("NGHE_NGHIEP"), tmpStr);

			rs.GetValue(_T("admitdate"), tmpStr);
			m_wndHtml.SetValue(_T("ADMIT_DATE"), CDateTime::Convert(tmpStr,yyyymmdd | hhmmss, ddmmyyyy | hhmmss));
			m_wndHtml.SetValue(_T("NGAY_VAO_VIEN"), CDateTime::Convert(tmpStr,yyyymmdd | hhmmss, ddmmyyyy | hhmmss));

			rs.GetValue(_T("enddate"), tmpStr);
			m_wndHtml.SetValue(_T("END_DATE"), CDateTime::Convert(tmpStr,yyyymmdd | hhmmss, ddmmyyyy | hhmmss));
			m_wndHtml.SetValue(_T("NGAY_RA_VIEN"), CDateTime::Convert(tmpStr,yyyymmdd | hhmmss, ddmmyyyy | hhmmss));

			m_wndHtml.UpdateData(true);
		}
	}

}

void CIVFSpecialityHtmlDialog::LoadDiagnostic()
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

void CIVFSpecialityHtmlDialog::LoadDeptRoomBed()
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



void CIVFSpecialityHtmlDialog::LoadClinicalRecord()
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