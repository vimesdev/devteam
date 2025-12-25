#include "HMSHealthExamHtmlDialog.h"
#include "MainFrm.h"
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSHealthExamHtmlDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSHealthExamHtmlDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSHealthExamHtmlDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSHealthExamHtmlDialog*)pWnd)->OnListDeleteItem();
} 
static long _OnHtmlLoadDataFnc(CWnd *pWnd){
	return ((CHMSHealthExamHtmlDialog*)pWnd)->OnHtmlLoadData();
} 
static void _OnHtmlDblClickFnc(CWnd *pWnd){
	((CHMSHealthExamHtmlDialog*)pWnd)->OnHtmlDblClick();
} 
static void _OnHtmlSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSHealthExamHtmlDialog*)pWnd)->OnHtmlSelectChange(nOldItem, nNewItem);
} 
static int _OnHtmlDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSHealthExamHtmlDialog*)pWnd)->OnHtmlDeleteItem();
} 
/*static void _OnRelDiseaseChangeFnc(CWnd *pWnd){
	((CHMSHealthExamHtmlDialog *)pWnd)->OnRelDiseaseChange();
} */
/*static void _OnRelDiseaseSetfocusFnc(CWnd *pWnd){
	((CHMSHealthExamHtmlDialog *)pWnd)->OnRelDiseaseSetfocus();} */ 
/*static void _OnRelDiseaseKillfocusFnc(CWnd *pWnd){
	((CHMSHealthExamHtmlDialog *)pWnd)->OnRelDiseaseKillfocus();
} */
static int _OnRelDiseaseCheckValueFnc(CWnd *pWnd){
	return ((CHMSHealthExamHtmlDialog *)pWnd)->OnRelDiseaseCheckValue();
} 
static void _OnSettingSelectFnc(CWnd *pWnd){
	CHMSHealthExamHtmlDialog *pVw = (CHMSHealthExamHtmlDialog *)pWnd;
	pVw->OnSettingSelect();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSHealthExamHtmlDialog *pVw = (CHMSHealthExamHtmlDialog *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnUpdateSelectFnc(CWnd *pWnd){
	CHMSHealthExamHtmlDialog *pVw = (CHMSHealthExamHtmlDialog *)pWnd;
	pVw->OnUpdateSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSHealthExamHtmlDialog *pVw = (CHMSHealthExamHtmlDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSHealthExamHtmlDialog *pVw = (CHMSHealthExamHtmlDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CHMSHealthExamHtmlDialog *pVw = (CHMSHealthExamHtmlDialog *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSHealthExamHtmlDialog *pVw = (CHMSHealthExamHtmlDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSHealthExamHtmlDialogFnc(CWnd *pWnd){
	 return ((CHMSHealthExamHtmlDialog*)pWnd)->OnAddHMSHealthExamHtmlDialog();
} 
static int _OnEditHMSHealthExamHtmlDialogFnc(CWnd *pWnd){
	 return ((CHMSHealthExamHtmlDialog*)pWnd)->OnEditHMSHealthExamHtmlDialog();
} 
static int _OnDeleteHMSHealthExamHtmlDialogFnc(CWnd *pWnd){
	 return ((CHMSHealthExamHtmlDialog*)pWnd)->OnDeleteHMSHealthExamHtmlDialog();
} 
static int _OnSaveHMSHealthExamHtmlDialogFnc(CWnd *pWnd){
	 return ((CHMSHealthExamHtmlDialog*)pWnd)->OnSaveHMSHealthExamHtmlDialog();
} 
static int _OnCancelHMSHealthExamHtmlDialogFnc(CWnd *pWnd){
	 return ((CHMSHealthExamHtmlDialog*)pWnd)->OnCancelHMSHealthExamHtmlDialog();
} 
CHMSHealthExamHtmlDialog::CHMSHealthExamHtmlDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1005;
	m_nDlgHeight = 640;
	SetDefaultValues();
}
CHMSHealthExamHtmlDialog::~CHMSHealthExamHtmlDialog(){
}
void CHMSHealthExamHtmlDialog::OnCreateComponents(){
	m_wndList.Create(this,6, 3, 186, 544); 
	m_wndHtml.Create(this,190, 4, 995, 544); 
	m_wndRelDiseaseLabel.Create(this, _T("B?nh kèm theo"), 70, 550, 185, 575);
	m_wndRelDisease.Create(this,190, 550, 994, 600); 
	m_wndSetting.Create(this, _T("Setting"), 5, 603, 95, 633);
	m_wndAdd.Create(this, _T("&Add"), 436, 605, 526, 635);
	m_wndUpdate.Create(this, _T("&Update"), 530, 605, 620, 635);
	m_wndSave.Create(this, _T("&Save"), 625, 605, 715, 635);
	m_wndCancel.Create(this, _T("&Cancel"), 720, 605, 810, 635);
	m_wndPrint.Create(this, _T("&Print"), 815, 605, 905, 635);
	m_wndClose.Create(this, _T("&Close"), 910, 605, 1000, 635);

}
void CHMSHealthExamHtmlDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndRelDisease.SetLimitText(1024);
	m_wndRelDisease.SetCheckValue(true);





}
void CHMSHealthExamHtmlDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndHtml.SetEvent(WE_SELCHANGE, _OnHtmlSelectChangeFnc);
	m_wndHtml.SetEvent(WE_LOADDATA, _OnHtmlLoadDataFnc);
	m_wndHtml.SetEvent(WE_DBLCLICK, _OnHtmlDblClickFnc);
	m_wndHtml.AddEvent(1, _T("Delete"), _OnHtmlDeleteItemFnc, 0, VK_DELETE, 0);
	//m_wndRelDisease.SetEvent(WE_CHANGE, _OnRelDiseaseChangeFnc);
	//m_wndRelDisease.SetEvent(WE_SETFOCUS, _OnRelDiseaseSetfocusFnc);
	//m_wndRelDisease.SetEvent(WE_KILLFOCUS, _OnRelDiseaseKillfocusFnc);
	m_wndRelDisease.SetEvent(WE_CHECKVALUE, _OnRelDiseaseCheckValueFnc);
	m_wndSetting.SetEvent(WE_CLICK, _OnSettingSelectFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndUpdate.SetEvent(WE_CLICK, _OnUpdateSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_NONE);

}
void CHMSHealthExamHtmlDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndRelDisease.GetDlgCtrlID(), m_szRelDisease);

}
void CHMSHealthExamHtmlDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("RelDisease")] =  m_szRelDisease;
	}
	else
	{
			
	m_jData[_T("RelDisease")].GetValue(m_szRelDisease);
	}

}
void CHMSHealthExamHtmlDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSHealthExamHtmlDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSHealthExamHtmlDialog::SetDefaultValues(){

	m_szRelDisease.Empty();

}
int CHMSHealthExamHtmlDialog::SetMode(int nMode){
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
void CHMSHealthExamHtmlDialog::OnListDblClick(){
	
} 
void CHMSHealthExamHtmlDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSHealthExamHtmlDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSHealthExamHtmlDialog::OnListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CHMSHealthExamHtmlDialog::OnHtmlDblClick(){
	
} 
void CHMSHealthExamHtmlDialog::OnHtmlSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSHealthExamHtmlDialog::OnHtmlDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSHealthExamHtmlDialog::OnHtmlLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndHtml.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndHtml.AddItems(
		rs.MoveNext();
	}
	m_wndHtml.EndLoad(); 
	return nCount;
*/
	return 0;
}
/*void CHMSHealthExamHtmlDialog::OnRelDiseaseChange(){
	
} */
/*void CHMSHealthExamHtmlDialog::OnRelDiseaseSetfocus(){
	
} */
/*void CHMSHealthExamHtmlDialog::OnRelDiseaseKillfocus(){
	
} */
int CHMSHealthExamHtmlDialog::OnRelDiseaseCheckValue(){
	return 0;
} 
void CHMSHealthExamHtmlDialog::OnSettingSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSHealthExamHtmlDialog::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSHealthExamHtmlDialog::OnUpdateSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSHealthExamHtmlDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSHealthExamHtmlDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSHealthExamHtmlDialog::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSHealthExamHtmlDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSHealthExamHtmlDialog::OnAddHMSHealthExamHtmlDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSHealthExamHtmlDialog::OnEditHMSHealthExamHtmlDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSHealthExamHtmlDialog::OnDeleteHMSHealthExamHtmlDialog(){
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
 		OnCancelHMSHealthExamHtmlDialog();
 	}
	return 0;
}
int CHMSHealthExamHtmlDialog::OnSaveHMSHealthExamHtmlDialog(){
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
 		//OnHMSHealthExamHtmlDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSHealthExamHtmlDialog::OnCancelHMSHealthExamHtmlDialog(){
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
int CHMSHealthExamHtmlDialog::OnHMSHealthExamHtmlDialogListLoadData(){
	return 0;
}
