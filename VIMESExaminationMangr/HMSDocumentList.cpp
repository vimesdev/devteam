#include "HMSDocumentList.h"
#include "MainFrm.h"
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSDocumentList*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSDocumentList*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSDocumentList*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSDocumentList*)pWnd)->OnListDeleteItem();
} 
static void _OnViewSelectFnc(CWnd *pWnd){
	CHMSDocumentList *pVw = (CHMSDocumentList *)pWnd;
	pVw->OnViewSelect();
} 
static void _OnViewSelectionSelectFnc(CWnd *pWnd){
	CHMSDocumentList *pVw = (CHMSDocumentList *)pWnd;
	pVw->OnViewSelectionSelect();
} 
static void _OnViewAllSelectFnc(CWnd *pWnd){
	CHMSDocumentList *pVw = (CHMSDocumentList *)pWnd;
	pVw->OnViewAllSelect();
} 
static int _OnAddHMSDocumentListFnc(CWnd *pWnd){
	 return ((CHMSDocumentList*)pWnd)->OnAddHMSDocumentList();
} 
static int _OnEditHMSDocumentListFnc(CWnd *pWnd){
	 return ((CHMSDocumentList*)pWnd)->OnEditHMSDocumentList();
} 
static int _OnDeleteHMSDocumentListFnc(CWnd *pWnd){
	 return ((CHMSDocumentList*)pWnd)->OnDeleteHMSDocumentList();
} 
static int _OnSaveHMSDocumentListFnc(CWnd *pWnd){
	 return ((CHMSDocumentList*)pWnd)->OnSaveHMSDocumentList();
} 
static int _OnCancelHMSDocumentListFnc(CWnd *pWnd){
	 return ((CHMSDocumentList*)pWnd)->OnCancelHMSDocumentList();
} 
CHMSDocumentList::CHMSDocumentList(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 505;
	m_nDlgHeight = 305;
	SetDefaultValues();
}
CHMSDocumentList::~CHMSDocumentList(){
}
void CHMSDocumentList::OnCreateComponents(){
	m_wndDocumentList.Create(this, _T("Document List"), 5, 5, 495, 265);
	m_wndList.Create(this,10, 30, 490, 260); 
	m_wndView.Create(this, _T("View"), 200, 270, 295, 295);
	//m_wndViewSelection.Create(this, _T("View Selection"), 300, 270, 395, 295);
	//m_wndViewAll.Create(this, _T("View All"), 400, 270, 495, 295);

}
void CHMSDocumentList::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);

	m_wndList.SetCheckBox(true);
	m_wndList.InsertColumn(0, _T("STT"), CFMT_NUMBER, 30);
	m_wndList.InsertColumn(1, _T("Doc No"), CFMT_NUMBER, 80);
	m_wndList.InsertColumn(2, _T("Admit Date"), CFMT_DATE, 120);
	m_wndList.InsertColumn(3, _T("End Date"), CFMT_DATE, 120);
	m_wndList.InsertColumn(4, _T("ICD"), CFMT_TEXT, 80);

}
void CHMSDocumentList::OnSetWindowEvents()
{
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	//m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndView.SetEvent(WE_CLICK, _OnViewSelectFnc);
	m_wndViewSelection.SetEvent(WE_CLICK, _OnViewSelectionSelectFnc);
	m_wndViewAll.SetEvent(WE_CLICK, _OnViewAllSelectFnc);
	OnListLoadData();
}
void CHMSDocumentList::OnDoDataExchange(CDataExchange* pDX){

}
void CHMSDocumentList::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSDocumentList::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSDocumentList::SetDefaultValues(){


}
int CHMSDocumentList::SetMode(int nMode){
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
void CHMSDocumentList::OnListDblClick(){
	
} 
void CHMSDocumentList::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if (nNewItem < 0)
		return;
	m_nDocNo = ToLong(m_wndList.GetItemText(nNewItem, 1));
} 
int CHMSDocumentList::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSDocumentList::OnListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr;
	szSQL.Format(_T(" SELECT  hd_docno as docno,") \
					_T("         hd_admitdate as indate,") \
					_T("         hd_enddate as enddate,") \
					_T("         hd_icd as icd") \
					_T(" FROM hms_doc") \
					_T(" WHERE hd_patientno = %ld"), pMF->m_nPatientNo);
	m_wndList.BeginLoad(); 
	int nCount, nIdx = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		nIdx++;
		tmpStr.Format(_T("%d"), nIdx);
		m_wndList.AddItems(
			tmpStr, 
			rs.GetValue(_T("DocNo")), 
			rs.GetValue(_T("indate")), 
			rs.GetValue(_T("EndDate")), 
			rs.GetValue(_T("ICD")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}
void CHMSDocumentList::OnViewSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();	
	pMF->OnPrintExaminationSheet(m_nDocNo);
} 
void CHMSDocumentList::OnViewSelectionSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//docno_list.clear();
	//for (int i = 0;i<m_wndList.GetItemCount();i++)
	//{
	//	if (m_wndList.GetCheck(i))
	//		docno_list.push_back(ToLong(m_wndList.GetItemText(i, 1)));
	//}
	//pMF->OnPrintExaminationSheet(docno_list);
} 
void CHMSDocumentList::OnViewAllSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	/*docno_list.clear();
	for (int i = 0;i<m_wndList.GetItemCount();i++)
	{
		docno_list.push_back(ToLong(m_wndList.GetItemText(i, 1)));
	}
	pMF->OnPrintExaminationSheet(docno_list);	*/
} 
int CHMSDocumentList::OnAddHMSDocumentList(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSDocumentList::OnEditHMSDocumentList(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSDocumentList::OnDeleteHMSDocumentList(){
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
 		OnCancelHMSDocumentList(); 
 	}
	return 0;
}
int CHMSDocumentList::OnSaveHMSDocumentList(){
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
 		//OnHMSDocumentListListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSDocumentList::OnCancelHMSDocumentList(){
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
int CHMSDocumentList::OnHMSDocumentListListLoadData(){
	return 0;
}
