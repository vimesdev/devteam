#include "HMSICD10Group.h"
//#include "stdafx.h"
#include "MainFrm.h"
/*static void _OnNamChangeFnc(CWnd *pWnd){
	((CHMSICD10GroupSetup *)pWnd)->OnNamChange();
} */
/*static void _OnNamSetfocusFnc(CWnd *pWnd){
	((CHMSICD10GroupSetup *)pWnd)->OnNamSetfocus();} */ 
/*static void _OnNamKillfocusFnc(CWnd *pWnd){
	((CHMSICD10GroupSetup *)pWnd)->OnNamKillfocus();
} */
static int _OnNamCheckValueFnc(CWnd *pWnd){
	return ((CHMSICD10GroupSetup *)pWnd)->OnNamCheckValue();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSICD10GroupSetup*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSICD10GroupSetup*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSICD10GroupSetup*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSICD10GroupSetup*)pWnd)->OnListDeleteItem();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSICD10GroupSetup *pVw = (CHMSICD10GroupSetup *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CHMSICD10GroupSetup *pVw = (CHMSICD10GroupSetup *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSICD10GroupSetup *pVw = (CHMSICD10GroupSetup *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSICD10GroupSetup *pVw = (CHMSICD10GroupSetup *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSICD10GroupSetup *pVw = (CHMSICD10GroupSetup *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSICD10GroupSetup *pVw = (CHMSICD10GroupSetup *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSICD10GroupFnc(CWnd *pWnd){
	 return ((CHMSICD10GroupSetup*)pWnd)->OnAddHMSICD10Group();
} 
static int _OnEditHMSICD10GroupFnc(CWnd *pWnd){
	 return ((CHMSICD10GroupSetup*)pWnd)->OnEditHMSICD10Group();
} 
static int _OnDeleteHMSICD10GroupFnc(CWnd *pWnd){
	 return ((CHMSICD10GroupSetup*)pWnd)->OnDeleteHMSICD10Group();
} 
static int _OnSaveHMSICD10GroupFnc(CWnd *pWnd){
	 return ((CHMSICD10GroupSetup*)pWnd)->OnSaveHMSICD10Group();
} 
static int _OnCancelHMSICD10GroupFnc(CWnd *pWnd){
	 return ((CHMSICD10GroupSetup*)pWnd)->OnCancelHMSICD10Group();
} 
CHMSICD10GroupSetup::CHMSICD10GroupSetup(CWnd *pParent):
	CGuiDialog(pParent)
{

	m_nDlgWidth = 731;
	m_nDlgHeight = 557;
	SetDefaultValues();
}
CHMSICD10GroupSetup::~CHMSICD10GroupSetup(){
}
void CHMSICD10GroupSetup::OnCreateComponents(){
	m_wndDiseaseGroupInformation.Create(this, _T("Disease Group Information"), 5, 4, 450, 373);
	m_wndList.Create(this,10, 25, 445, 341); 
	m_wndNamLabel.Create(this, _T("Nam"), 11, 346, 61, 368);
	m_wndName.Create(this,66, 346, 446, 368);	
	m_wndAdd.Create(this, _T("&Add"), 5, 378, 75, 400);
	m_wndEdit.Create(this, _T("&Edit"), 80, 378, 150, 400);
	m_wndDelete.Create(this, _T("&Delete"), 155, 378, 225, 400);
	m_wndSave.Create(this, _T("&Save"), 230, 378, 300, 400);
	m_wndCancel.Create(this, _T("&Cancel"), 305, 378, 375, 400);
	m_wndClose.Create(this, _T("&Close"), 380, 378, 450, 400);

}
void CHMSICD10GroupSetup::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	
	m_wndName.SetLimitText(254);
	m_wndName.SetCheckValue(true);

	m_wndList.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(1, _T("Name"), CFMT_TEXT, 350);


	m_hms_icdgroupTbl.SetTableName(_T("hms_icdgroup"));
	m_hms_icdgroupTbl.AddField(_T("hig_createdby"), dfText, 15); 
	m_hms_icdgroupTbl.AddField(_T("hig_createddate"), dfDateTime); 
	m_hms_icdgroupTbl.AddField(_T("hig_updatedby"), dfText, 15); 
	m_hms_icdgroupTbl.AddField(_T("hig_updateddate"), dfDateTime); 
	m_hms_icdgroupTbl.AddField(_T("hig_id"), dfLong); 
	m_hms_icdgroupTbl.AddField(_T("hig_chapterid"), dfLong); 
	m_hms_icdgroupTbl.AddField(_T("hig_name"), dfText, 254); 

}
void CHMSICD10GroupSetup::OnSetWindowEvents(){
	//m_wndName.SetEvent(WE_CHANGE, _OnNamChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNamSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNamKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNamCheckValueFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_NONE);
	OnListLoadData();
}
void CHMSICD10GroupSetup::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);

}
void CHMSICD10GroupSetup::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM hms_icdgroup WHERE hig_id=%ld"), m_nID);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("hig_id"), m_nID);
		rs.GetValue(_T("hig_name"), m_szName);
		SetMode(VM_VIEW);
	}
	else
		SetMode(VM_NONE);

}
void CHMSICD10GroupSetup::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	if(GetMode() == VM_ADD)
	{
		CString szSQL;
		CRecord rs(&pMF->m_db);
		szSQL.Format(_T("select coalesce(max(hig_id), 0)+1 FROM hms_icdgroup "));
		rs.ExecSQL(szSQL);
		m_nID = rs.GetIntValue();
		m_hms_icdgroupTbl.SetValue(_T("hig_createdby"), pMF->GetCurrentUser());
		m_hms_icdgroupTbl.SetValue(_T("hig_createddate"), pMF->GetSysDateTime());
		m_hms_icdgroupTbl.SetValue(_T("hig_id"), m_nID);
		
	}
	m_hms_icdgroupTbl.SetValue(_T("hig_updatedby"), pMF->GetCurrentUser());
	m_hms_icdgroupTbl.SetValue(_T("hig_updateddate"), pMF->GetSysDateTime());
	m_hms_icdgroupTbl.SetValue(_T("hig_name"), m_szName);

}
void CHMSICD10GroupSetup::SetDefaultValues(){

	m_szName.Empty();

}
int CHMSICD10GroupSetup::SetMode(int nMode){ 
 		int nOldMode = GetMode(); 
 		CGuiDialog::SetMode(nMode); 
 		CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
  		switch(nMode){ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 3, 4, -1); 
 			SetDefaultValues(); 
			m_wndName.SetFocus();
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
/*void CHMSICD10GroupSetup::OnNamChange(){
	
} */
/*void CHMSICD10GroupSetup::OnNamSetfocus(){
	
} */
/*void CHMSICD10GroupSetup::OnNamKillfocus(){
	
} */
int CHMSICD10GroupSetup::OnNamCheckValue(){
	return 0;
} 
void CHMSICD10GroupSetup::OnListDblClick(){
	
} 
void CHMSICD10GroupSetup::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	if(nNewItem < 0){
		SetMode(VM_NONE);
		return;
	}
	m_nID = ToInt(m_wndList.GetItemText(nNewItem, 0));
	GetDataToScreen();
} 
int CHMSICD10GroupSetup::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	OnDeleteHMSICD10Group();
	 return 0;
} 
long CHMSICD10GroupSetup::OnListLoadData(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT * FROM hms_icdgroup ORDER BY hig_id"));
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("hig_id")),
			rs.GetValue(_T("hig_name")),
			NULL);

		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}
void CHMSICD10GroupSetup::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	OnAddHMSICD10Group();	
} 
void CHMSICD10GroupSetup::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	OnEditHMSICD10Group();
} 
void CHMSICD10GroupSetup::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	OnDeleteHMSICD10Group();
	
} 
void CHMSICD10GroupSetup::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	OnSaveHMSICD10Group();
	
} 
void CHMSICD10GroupSetup::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	OnCancelHMSICD10Group();	
} 
void CHMSICD10GroupSetup::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	OnCancel();
} 
int CHMSICD10GroupSetup::OnAddHMSICD10Group(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	SetMode(VM_ADD);
	return 0; 
} 
int CHMSICD10GroupSetup::OnEditHMSICD10Group(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	SetMode(VM_EDIT);
	return 0;  
} 
int CHMSICD10GroupSetup::OnDeleteHMSICD10Group(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0)
		return -1;
	m_nID = ToInt(m_wndList.GetItemText(nSel, 0));
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
	

 	szSQL.Format(_T("DELETE FROM  hms_icdgroup WHERE  hig_id=%ld"), m_nID ); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret >= 0){ 
		m_wndList.DeleteItem(nSel);
 		SetMode(VM_NONE); 
 		OnCancelHMSICD10Group(); 
 	}
return 0;
 } 
int CHMSICD10GroupSetup::OnSaveHMSICD10Group(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		szSQL = m_hms_icdgroupTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE hig_id=%ld"), m_nID); 
 		szSQL = m_hms_icdgroupTbl.GetUpdateSQL(_T("hig_id, hig_createdby, hig_createddate")); 
 		szSQL += szWhere; 
 	} 
 //_fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
		OnListLoadData();
 		SetMode(VM_VIEW); 
		m_wndAdd.SetFocus();
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSICD10GroupSetup::OnCancelHMSICD10Group(){
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
int CHMSICD10GroupSetup::OnHMSICD10GroupListLoadData(){
	return 0;
}
