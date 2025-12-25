#include "HMSExportEMRDialog.h"
#include "MainFrm.h"
/*static void _OnLocationChangeFnc(CWnd *pWnd){
	((CHMSExportEMRDialog *)pWnd)->OnLocationChange();
} */
/*static void _OnLocationSetfocusFnc(CWnd *pWnd){
	((CHMSExportEMRDialog *)pWnd)->OnLocationSetfocus();} */ 
/*static void _OnLocationKillfocusFnc(CWnd *pWnd){
	((CHMSExportEMRDialog *)pWnd)->OnLocationKillfocus();
} */
static int _OnLocationCheckValueFnc(CWnd *pWnd){
	return ((CHMSExportEMRDialog *)pWnd)->OnLocationCheckValue();
} 
static void _OnFilePDFSelectFnc(CWnd *pWnd){
	  ((CHMSExportEMRDialog*)pWnd)->OnFilePDFSelect();
}
static void _OnHLSelectFnc(CWnd *pWnd){
	  ((CHMSExportEMRDialog*)pWnd)->OnHLSelect();
}
static void _OnApplySelectFnc(CWnd *pWnd){
	CHMSExportEMRDialog *pVw = (CHMSExportEMRDialog *)pWnd;
	pVw->OnApplySelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSExportEMRDialog *pVw = (CHMSExportEMRDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static void _OnOpentSelectFnc(CWnd *pWnd){
	CHMSExportEMRDialog *pVw = (CHMSExportEMRDialog *)pWnd;
	pVw->OnOpentSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSExportEMRDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSExportEMRDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSExportEMRDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSExportEMRDialog*)pWnd)->OnListDeleteItem();
} 
static int _OnAddHMSExportEMRDialogFnc(CWnd *pWnd){
	 return ((CHMSExportEMRDialog*)pWnd)->OnAddHMSExportEMRDialog();
} 
static int _OnEditHMSExportEMRDialogFnc(CWnd *pWnd){
	 return ((CHMSExportEMRDialog*)pWnd)->OnEditHMSExportEMRDialog();
} 
static int _OnDeleteHMSExportEMRDialogFnc(CWnd *pWnd){
	 return ((CHMSExportEMRDialog*)pWnd)->OnDeleteHMSExportEMRDialog();
} 
static int _OnSaveHMSExportEMRDialogFnc(CWnd *pWnd){
	 return ((CHMSExportEMRDialog*)pWnd)->OnSaveHMSExportEMRDialog();
} 
static int _OnCancelHMSExportEMRDialogFnc(CWnd *pWnd){
	 return ((CHMSExportEMRDialog*)pWnd)->OnCancelHMSExportEMRDialog();
} 
CHMSExportEMRDialog::CHMSExportEMRDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CHMSExportEMRDialog::~CHMSExportEMRDialog(){
}
void CHMSExportEMRDialog::OnCreateComponents(){
	m_wndGroupInfo.Create(this, _T("Export ERM"), 5, 5, 451, 405);
	m_wndLocationLabel.Create(this, _T("Location"), 10, 30, 110, 55);
	m_wndLocation.Create(this,115, 30, 415, 55); 
	m_wndFilePDF.Create(this, _T("File PDF"), 140, 375, 240, 400);
	m_wndHL.Create(this, _T("HL7"), 284, 375, 384, 400);
	m_wndApply.Create(this, _T("&Apply"), 285, 410, 365, 435);
	m_wndClose.Create(this, _T("&Close"), 370, 410, 450, 435);
	m_wndOpent.Create(this, _T("..."), 420, 30, 445, 55);
	m_wndList.Create(this,10, 60, 445, 370); 

}
void CHMSExportEMRDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndLocation.SetLimitText(35);
	m_wndLocation.SetCheckValue(true);



}
void CHMSExportEMRDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndLocation.SetEvent(WE_CHANGE, _OnLocationChangeFnc);
	//m_wndLocation.SetEvent(WE_SETFOCUS, _OnLocationSetfocusFnc);
	//m_wndLocation.SetEvent(WE_KILLFOCUS, _OnLocationKillfocusFnc);
	m_wndLocation.SetEvent(WE_CHECKVALUE, _OnLocationCheckValueFnc);
	m_wndFilePDF.SetEvent(WE_CLICK, _OnFilePDFSelectFnc);
	m_wndHL.SetEvent(WE_CLICK, _OnHLSelectFnc);
	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndOpent.SetEvent(WE_CLICK, _OnOpentSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	SetMode(VM_NONE);

}
void CHMSExportEMRDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndLocation.GetDlgCtrlID(), m_szLocation);
	DDX_Radio(pDX, m_wndFilePDF.GetDlgCtrlID(), m_nFilePDF);
	DDX_Radio(pDX, m_wndHL.GetDlgCtrlID(), m_nHL);

}
void CHMSExportEMRDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Location")] =  m_szLocation;
	m_jData[_T("FilePDF")] =  m_nFilePDF;
	m_jData[_T("HL")] =  m_nHL;
	}
	else
	{
			
	m_jData[_T("Location")].GetValue(m_szLocation);
	m_jData[_T("FilePDF")].GetValue(m_nFilePDF);
	m_jData[_T("HL")].GetValue(m_nHL);
	}

}
void CHMSExportEMRDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSExportEMRDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSExportEMRDialog::SetDefaultValues(){

	m_szLocation.Empty();
	m_nFilePDF=0;
	m_nHL=0;

}
int CHMSExportEMRDialog::SetMode(int nMode){
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
/*void CHMSExportEMRDialog::OnLocationChange(){
	
} */
/*void CHMSExportEMRDialog::OnLocationSetfocus(){
	
} */
/*void CHMSExportEMRDialog::OnLocationKillfocus(){
	
} */
int CHMSExportEMRDialog::OnLocationCheckValue(){
	return 0;
} 
void CHMSExportEMRDialog::OnFilePDFSelect(){
	
}
void CHMSExportEMRDialog::OnHLSelect(){
	
}
void CHMSExportEMRDialog::OnApplySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSExportEMRDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSExportEMRDialog::OnOpentSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSExportEMRDialog::OnListDblClick(){
	
} 
void CHMSExportEMRDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSExportEMRDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSExportEMRDialog::OnListLoadData(){
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
int CHMSExportEMRDialog::OnAddHMSExportEMRDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSExportEMRDialog::OnEditHMSExportEMRDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSExportEMRDialog::OnDeleteHMSExportEMRDialog(){
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
 		OnCancelHMSExportEMRDialog();
 	}
	return 0;
}
int CHMSExportEMRDialog::OnSaveHMSExportEMRDialog(){
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
 		//OnHMSExportEMRDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSExportEMRDialog::OnCancelHMSExportEMRDialog(){
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
int CHMSExportEMRDialog::OnHMSExportEMRDialogListLoadData(){
	return 0;
}
