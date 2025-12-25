#include "PMSUomPopup.h"
#include "MainFrm.h"
#include "PMSUomList.h"

/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CPMSUomPopup *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CPMSUomPopup *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CPMSUomPopup *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CPMSUomPopup *)pWnd)->OnNameCheckValue();
} 
/*static void _OnDescriptonChangeFnc(CWnd *pWnd){
	((CPMSUomPopup *)pWnd)->OnDescriptonChange();
} */
/*static void _OnDescriptonSetfocusFnc(CWnd *pWnd){
	((CPMSUomPopup *)pWnd)->OnDescriptonSetfocus();} */ 
/*static void _OnDescriptonKillfocusFnc(CWnd *pWnd){
	((CPMSUomPopup *)pWnd)->OnDescriptonKillfocus();
} */
static int _OnDescriptonCheckValueFnc(CWnd *pWnd){
	return ((CPMSUomPopup *)pWnd)->OnDescriptonCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CPMSUomPopup *pVw = (CPMSUomPopup *)pWnd;
	pVw->OnSaveSelect();
} 
static int _OnAddPMSUomPopupFnc(CWnd *pWnd){
	 return ((CPMSUomPopup*)pWnd)->OnAddPMSUomPopup();
} 
static int _OnEditPMSUomPopupFnc(CWnd *pWnd){
	 return ((CPMSUomPopup*)pWnd)->OnEditPMSUomPopup();
} 
static int _OnDeletePMSUomPopupFnc(CWnd *pWnd){
	 return ((CPMSUomPopup*)pWnd)->OnDeletePMSUomPopup();
} 
static int _OnSavePMSUomPopupFnc(CWnd *pWnd){
	 return ((CPMSUomPopup*)pWnd)->OnSavePMSUomPopup();
} 
static int _OnCancelPMSUomPopupFnc(CWnd *pWnd){
	 return ((CPMSUomPopup*)pWnd)->OnCancelPMSUomPopup();
} 
CPMSUomPopup::CPMSUomPopup(CWnd *pParent, int nMode):
	CGuiDialog(pParent)
{
	m_pParentWnd = pParent;

	CGuiDialog::SetMode(nMode);
	m_nDlgWidth = 805;
	m_nDlgHeight = 105;
	SetDefaultValues();
}
CPMSUomPopup::~CPMSUomPopup(){
}
void CPMSUomPopup::OnCreateComponents(){
	m_wndUnitOfMeasure.Create(this, _T("Unit of measure"), 5, 5, 400, 90);
	m_wndNameLabel.Create(this, _T("Name"), 10, 30, 90, 55);
	m_wndName.Create(this,95, 30, 395, 55); 
	m_wndDescriptonLabel.Create(this, _T("Descripton"), 10, 60, 90, 85);
	m_wndDescripton.Create(this,95, 60, 395, 85); 
	m_wndSave.Create(this, _T("Save"), 230, 95, 310, 120);
	m_wndClose.Create(this, _T("&Close"), 315, 95, 395, 120);
}
void CPMSUomPopup::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndName.SetLimitText(128);
	m_wndName.SetCheckValue(true);
	//m_wndName.SetInitCap(2);
	m_pms_uomTbl.SetTableName(_T("pms_uom"));
	m_pms_uomTbl.AddField(_T("PMSU_org_id"), dfText, 32); 
	m_pms_uomTbl.AddField(_T("PMSU_NAME"), dfText, 128); 
	m_pms_uomTbl.AddField(_T("PMSU_DESCRIPTION"), dfText, 254); 

}

void CPMSUomPopup::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	//m_wndDescripton.SetEvent(WE_CHANGE, _OnDescriptonChangeFnc);
	//m_wndDescripton.SetEvent(WE_SETFOCUS, _OnDescriptonSetfocusFnc);
	//m_wndDescripton.SetEvent(WE_KILLFOCUS, _OnDescriptonKillfocusFnc);
	m_wndDescripton.SetEvent(WE_CHECKVALUE, _OnDescriptonCheckValueFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	if(GetMode() == VM_EDIT){
		GetDataToScreen();
	}
	SetMode(GetMode());

}
void CPMSUomPopup::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_Text(pDX, m_wndDescripton.GetDlgCtrlID(), m_szDescripton);

}
void CPMSUomPopup::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM pms_uom WHERE pmsu_id=%ld "), m_nID);
	int ret = rs.ExecSQL(szSQL);
	if(ret > 0){
		rs.GetValue(_T("pmsu_id"), m_nID);
		rs.GetValue(_T("pmsu_name"), m_szName);
		//SetMode(VM_VIEW);
	}
	UpdateData(false);

}

void CPMSUomPopup::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_pms_uomTbl.SetValue(_T("pmsu_org_id"), pMF->GetModuleID());
	m_pms_uomTbl.SetValue(_T("pmsu_name"), m_szName);
	m_pms_uomTbl.SetValue(_T("pmsu_description"), m_szDescripton);
}

void CPMSUomPopup::SetDefaultValues(){

	m_nID = 0;
	m_szName.Empty();
	m_szDescripton.Empty();
}

int CPMSUomPopup::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiDialog::SetMode(nMode); 
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
  		switch(nMode){ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 1, -1); 
 			SetDefaultValues(); 
			m_wndName.SetFocus();
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 1, -1); 
			m_wndName.SetFocus();
 			break; 
 		case VM_VIEW: 
 			EnableControls(FALSE); 
 			EnableButtons(FALSE, 3, 4, -1); 
 			break; 
 		case VM_NONE: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 1, -1); 
 			SetDefaultValues(); 
 			break; 
 		}; 
 		UpdateData(FALSE); 
 		return nOldMode; 
}

/*void CPMSUomPopup::OnNameChange(){
	
} */
/*void CPMSUomPopup::OnNameSetfocus(){
	
} */
/*void CPMSUomPopup::OnNameKillfocus(){
	
} */
int CPMSUomPopup::OnNameCheckValue(){
	CMainFrame* pMF = (CMainFrame *) AfxGetMainWnd();
	CString szSQL;
	CRecord rs(&pMF->m_db);
	szSQL.Format(_T("SELECT count(*) FROM pms_uom WHERE lower(pmsu_name)=lower('%s') "), m_szName);
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() > 0)
	{
		m_wndName.SetToolTipMessage(_T("Name is existing."));
		return -1;
	}
	return 0;
}
 
/*void CPMSUomPopup::OnDescriptonChange(){
	
} */
/*void CPMSUomPopup::OnDescriptonSetfocus(){
	
} */
/*void CPMSUomPopup::OnDescriptonKillfocus(){
	
} */
int CPMSUomPopup::OnDescriptonCheckValue(){
	return 0;
} 
void CPMSUomPopup::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSavePMSUomPopup();
}
 
int CPMSUomPopup::OnAddPMSUomPopup(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}

int CPMSUomPopup::OnEditPMSUomPopup(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}

int CPMSUomPopup::OnDeletePMSUomPopup(){
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
 		OnCancelPMSUomPopup(); 
 	}
	return 0;
}

int CPMSUomPopup::OnSavePMSUomPopup(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 

 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		szSQL = m_pms_uomTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE pmsu_id=%ld "), m_nID); 
 		szSQL = m_pms_uomTbl.GetUpdateSQL(_T("pmsu_id")); 
 		szSQL += szWhere; 
 	} 
 ////_fmsg_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
		if(GetMode() == VM_ADD)
		{
			if(m_pParentWnd->IsKindOf(RUNTIME_CLASS(CPMSUomList)))
			{
				szSQL.Format(_T("select pms_uom_id_asq.currval from dual"));
				CRecord rs(&pMF->m_db);
				rs.ExecSQL(szSQL);
				m_nID = rs.GetIntValue();
				CString tmpStr;
				tmpStr.Format(_T("%ld"), m_nID);
_tprintf(_T("\r\n%s"), tmpStr);

				((CPMSUomList*)m_pParentWnd)->Refresh(tmpStr);
			}
			SetMode(VM_ADD);
			
		}
//		else
//			ClosePopup();
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
}

int CPMSUomPopup::OnCancelPMSUomPopup(){
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
 
int CPMSUomPopup::OnPMSUomPopupListLoadData(){
	return 0;
}

