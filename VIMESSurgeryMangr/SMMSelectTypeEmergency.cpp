#include "SMMSelectTypeEmergency.h"
#include "MainFrm.h"
static void _OnInhoursSelectFnc(CWnd *pWnd){
	  ((CSMMSelectTypeEmergency*)pWnd)->OnInhoursSelect();
}
static void _OnOvertimeSelectFnc(CWnd *pWnd){
	  ((CSMMSelectTypeEmergency*)pWnd)->OnOvertimeSelect();
}
static void _OnWeirdoSelectFnc(CWnd *pWnd){
	  ((CSMMSelectTypeEmergency*)pWnd)->OnWeirdoSelect();
}
static void _OnOtherSelectFnc(CWnd *pWnd){
	  ((CSMMSelectTypeEmergency*)pWnd)->OnOtherSelect();
}
static void _OnApplySelectFnc(CWnd *pWnd){
	CSMMSelectTypeEmergency *pVw = (CSMMSelectTypeEmergency *)pWnd;
	pVw->OnApplySelect();
} 
static int _OnAddSMMSelectTypeEmergencyFnc(CWnd *pWnd){
	 return ((CSMMSelectTypeEmergency*)pWnd)->OnAddSMMSelectTypeEmergency();
} 
static int _OnEditSMMSelectTypeEmergencyFnc(CWnd *pWnd){
	 return ((CSMMSelectTypeEmergency*)pWnd)->OnEditSMMSelectTypeEmergency();
} 
static int _OnDeleteSMMSelectTypeEmergencyFnc(CWnd *pWnd){
	 return ((CSMMSelectTypeEmergency*)pWnd)->OnDeleteSMMSelectTypeEmergency();
} 
static int _OnSaveSMMSelectTypeEmergencyFnc(CWnd *pWnd){
	 return ((CSMMSelectTypeEmergency*)pWnd)->OnSaveSMMSelectTypeEmergency();
} 
static int _OnCancelSMMSelectTypeEmergencyFnc(CWnd *pWnd){
	 return ((CSMMSelectTypeEmergency*)pWnd)->OnCancelSMMSelectTypeEmergency();
} 
CSMMSelectTypeEmergency::CSMMSelectTypeEmergency(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 315;
	m_nDlgHeight = 130;
	//SetDefaultValues();
}
CSMMSelectTypeEmergency::~CSMMSelectTypeEmergency(){
}
void CSMMSelectTypeEmergency::OnCreateComponents(){
	m_wndInhours.Create(this, _T("In hours"), 10, 30, 155, 55);
	m_wndOvertime.Create(this, _T("Overtime"), 160, 30, 295, 55);
	m_wndWeirdo.Create(this, _T("Weirdo"), 10, 59, 155, 84);
	m_wndOther.Create(this, _T("Others1"), 160, 59, 295, 84);
	m_wndApply.Create(this, _T("Apply"), 215, 95, 295, 120);
	m_wndGrpEmergency.Create(this, _T("Select Type"), 5, 5, 305, 90);

}
void CSMMSelectTypeEmergency::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CSMMSelectTypeEmergency::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndInhours.SetEvent(WE_CLICK, _OnInhoursSelectFnc);
	m_wndOvertime.SetEvent(WE_CLICK, _OnOvertimeSelectFnc);
	m_wndWeirdo.SetEvent(WE_CLICK, _OnWeirdoSelectFnc);
	m_wndOther.SetEvent(WE_CLICK, _OnOtherSelectFnc);
	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
	SetMode(VM_ADD);

}
void CSMMSelectTypeEmergency::OnDoDataExchange(CDataExchange* pDX){
	DDX_Radio(pDX, m_wndInhours.GetDlgCtrlID(), m_nInhours);
	DDX_Radio(pDX, m_wndOvertime.GetDlgCtrlID(), m_nOvertime);
	DDX_Radio(pDX, m_wndWeirdo.GetDlgCtrlID(), m_nWeirdo);
	DDX_Radio(pDX, m_wndOther.GetDlgCtrlID(), m_nOther);

}
void CSMMSelectTypeEmergency::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Inhours")] =  m_nInhours;
	m_jData[_T("Overtime")] =  m_nOvertime;
	m_jData[_T("Weirdo")] =  m_nWeirdo;
	m_jData[_T("Other")] =  m_nOther;
	}
	else
	{
			
	m_jData[_T("Inhours")].GetValue(m_nInhours);
	m_jData[_T("Overtime")].GetValue(m_nOvertime);
	m_jData[_T("Weirdo")].GetValue(m_nWeirdo);
	m_jData[_T("Other")].GetValue(m_nOther);
	}

}
void CSMMSelectTypeEmergency::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CSMMSelectTypeEmergency::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CSMMSelectTypeEmergency::SetDefaultValues(){

	m_nInhours=0;
	m_nOvertime=1;
	m_nWeirdo=1;
	m_nOther=1;

}
int CSMMSelectTypeEmergency::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE,0, 4, -1);
			if(m_nEmergency == 0)
			{
				m_nInhours=0;
				m_nOvertime=1;
				m_nWeirdo=1;
				m_nOther=1;
			}
			if(m_nEmergency == 1)
			{
				m_nInhours=1;
				m_nOvertime=0;
				m_nWeirdo=1;
				m_nOther=1;
			}
			if(m_nEmergency == 2)
			{
				m_nInhours=1;
				m_nOvertime=1;
				m_nWeirdo=0;
				m_nOther=1;
			}
			if(m_nEmergency==3)
			{
				m_nInhours=1;
				m_nOvertime=1;
				m_nWeirdo=1;
				m_nOther=0;
			}
 			//SetDefaultValues();
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
void CSMMSelectTypeEmergency::OnInhoursSelect(){
	
}
void CSMMSelectTypeEmergency::OnOvertimeSelect(){
	
}
void CSMMSelectTypeEmergency::OnWeirdoSelect(){
	
}
void CSMMSelectTypeEmergency::OnOtherSelect(){
	
}
void CSMMSelectTypeEmergency::OnApplySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	OnOK();
	
} 
int CSMMSelectTypeEmergency::OnAddSMMSelectTypeEmergency(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CSMMSelectTypeEmergency::OnEditSMMSelectTypeEmergency(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CSMMSelectTypeEmergency::OnDeleteSMMSelectTypeEmergency(){
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
 		OnCancelSMMSelectTypeEmergency();
 	}
	return 0;
}
int CSMMSelectTypeEmergency::OnSaveSMMSelectTypeEmergency(){
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
 		//OnSMMSelectTypeEmergencyListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CSMMSelectTypeEmergency::OnCancelSMMSelectTypeEmergency(){
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
int CSMMSelectTypeEmergency::OnSMMSelectTypeEmergencyListLoadData(){
	return 0;
}
