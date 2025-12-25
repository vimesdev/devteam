#include "HMSExportOrderDeliveryDrug.h"
#include "MainFrm.h"
static void _OnPortraidSelectFnc(CWnd *pWnd){
	  ((CHMSExportOrderDeliveryDrug*)pWnd)->OnPortraidSelect();
}
static void _OnLanscapeSelectFnc(CWnd *pWnd){
	  ((CHMSExportOrderDeliveryDrug*)pWnd)->OnLanscapeSelect();
}
static void _OnExportXLSSelectFnc(CWnd *pWnd){
	CHMSExportOrderDeliveryDrug *pVw = (CHMSExportOrderDeliveryDrug *)pWnd;
	pVw->OnExportXLSSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSExportOrderDeliveryDrug *pVw = (CHMSExportOrderDeliveryDrug *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSExportOrderDeliveryDrugFnc(CWnd *pWnd){
	 return ((CHMSExportOrderDeliveryDrug*)pWnd)->OnAddHMSExportOrderDeliveryDrug();
} 
static int _OnEditHMSExportOrderDeliveryDrugFnc(CWnd *pWnd){
	 return ((CHMSExportOrderDeliveryDrug*)pWnd)->OnEditHMSExportOrderDeliveryDrug();
} 
static int _OnDeleteHMSExportOrderDeliveryDrugFnc(CWnd *pWnd){
	 return ((CHMSExportOrderDeliveryDrug*)pWnd)->OnDeleteHMSExportOrderDeliveryDrug();
} 
static int _OnSaveHMSExportOrderDeliveryDrugFnc(CWnd *pWnd){
	 return ((CHMSExportOrderDeliveryDrug*)pWnd)->OnSaveHMSExportOrderDeliveryDrug();
} 
static int _OnCancelHMSExportOrderDeliveryDrugFnc(CWnd *pWnd){
	 return ((CHMSExportOrderDeliveryDrug*)pWnd)->OnCancelHMSExportOrderDeliveryDrug();
} 
CHMSExportOrderDeliveryDrug::CHMSExportOrderDeliveryDrug(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 345;
	m_nDlgHeight = 135;
	SetDefaultValues();
}
CHMSExportOrderDeliveryDrug::~CHMSExportOrderDeliveryDrug(){
}
void CHMSExportOrderDeliveryDrug::OnCreateComponents(){
	m_wndGroupInformation.Create(this, _T("GroupInformation"), 6, 5, 336, 125);
	m_wndPortraid.Create(this, _T("Portraid"), 11, 30, 331, 55);
	m_wndLanscape.Create(this, _T("Lanscape"), 11, 60, 331, 85);
	m_wndExportXLS.Create(this, _T("&Export XLS"), 175, 90, 250, 115);
	m_wndClose.Create(this, _T("&Close"), 255, 90, 330, 115);

}
void CHMSExportOrderDeliveryDrug::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);

}
void CHMSExportOrderDeliveryDrug::OnSetWindowEvents(){
	m_wndPortraid.SetEvent(WE_CLICK, _OnPortraidSelectFnc);
	m_wndLanscape.SetEvent(WE_CLICK, _OnLanscapeSelectFnc);
	m_wndExportXLS.SetEvent(WE_CLICK, _OnExportXLSSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);

}
void CHMSExportOrderDeliveryDrug::OnDoDataExchange(CDataExchange* pDX){
	DDX_Radio(pDX, m_wndPortraid.GetDlgCtrlID(), m_nPortraid);
	DDX_Radio(pDX, m_wndLanscape.GetDlgCtrlID(), m_nLanscape);
}
void CHMSExportOrderDeliveryDrug::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSExportOrderDeliveryDrug::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSExportOrderDeliveryDrug::SetDefaultValues(){

	m_nPortraid=0;
	m_nLanscape=1;

}
int CHMSExportOrderDeliveryDrug::SetMode(int nMode){
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
void CHMSExportOrderDeliveryDrug::OnPortraidSelect(){
	
}
void CHMSExportOrderDeliveryDrug::OnLanscapeSelect(){
	
}
void CHMSExportOrderDeliveryDrug::OnExportXLSSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnOK();
} 
void CHMSExportOrderDeliveryDrug::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();
} 
int CHMSExportOrderDeliveryDrug::OnAddHMSExportOrderDeliveryDrug(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSExportOrderDeliveryDrug::OnEditHMSExportOrderDeliveryDrug(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSExportOrderDeliveryDrug::OnDeleteHMSExportOrderDeliveryDrug(){
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
 		OnCancelHMSExportOrderDeliveryDrug(); 
 	}
	return 0;
}
int CHMSExportOrderDeliveryDrug::OnSaveHMSExportOrderDeliveryDrug(){
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
 		//OnHMSExportOrderDeliveryDrugListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSExportOrderDeliveryDrug::OnCancelHMSExportOrderDeliveryDrug(){
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
int CHMSExportOrderDeliveryDrug::OnHMSExportOrderDeliveryDrugListLoadData(){
	return 0;
}
