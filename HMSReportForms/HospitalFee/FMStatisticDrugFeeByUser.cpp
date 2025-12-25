#include "FMStatisticDrugFeeByUser.h"
#include "MainFrm.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CFMStatisticDrugFeeByUser *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CFMStatisticDrugFeeByUser *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CFMStatisticDrugFeeByUser *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CFMStatisticDrugFeeByUser *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CFMStatisticDrugFeeByUser *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CFMStatisticDrugFeeByUser *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CFMStatisticDrugFeeByUser *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CFMStatisticDrugFeeByUser *)pWnd)->OnToDateCheckValue();
} 
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	CFMStatisticDrugFeeByUser *pVw = (CFMStatisticDrugFeeByUser *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CFMStatisticDrugFeeByUser *pVw = (CFMStatisticDrugFeeByUser *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnLockedSelectFnc(CWnd *pWnd){
	 ((CFMStatisticDrugFeeByUser*)pWnd)->OnLockedSelect();
}
static int _OnAddFMStatisticDrugFeeByUserFnc(CWnd *pWnd){
	 return ((CFMStatisticDrugFeeByUser*)pWnd)->OnAddFMStatisticDrugFeeByUser();
} 
static int _OnEditFMStatisticDrugFeeByUserFnc(CWnd *pWnd){
	 return ((CFMStatisticDrugFeeByUser*)pWnd)->OnEditFMStatisticDrugFeeByUser();
} 
static int _OnDeleteFMStatisticDrugFeeByUserFnc(CWnd *pWnd){
	 return ((CFMStatisticDrugFeeByUser*)pWnd)->OnDeleteFMStatisticDrugFeeByUser();
} 
static int _OnSaveFMStatisticDrugFeeByUserFnc(CWnd *pWnd){
	 return ((CFMStatisticDrugFeeByUser*)pWnd)->OnSaveFMStatisticDrugFeeByUser();
} 
static int _OnCancelFMStatisticDrugFeeByUserFnc(CWnd *pWnd){
	 return ((CFMStatisticDrugFeeByUser*)pWnd)->OnCancelFMStatisticDrugFeeByUser();
} 
CFMStatisticDrugFeeByUser::CFMStatisticDrugFeeByUser(){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CFMStatisticDrugFeeByUser::~CFMStatisticDrugFeeByUser(){
}
void CFMStatisticDrugFeeByUser::OnCreateComponents(){
	m_wndStatisticDrugFeeByUser.Create(this, _T("Statistic Drug Fee By User"), 5, 5, 430, 90);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 215, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 220, 30, 300, 55);
	m_wndToDate.Create(this,305, 30, 425, 55); 
	m_wndPrintPreview.Create(this, _T("&Print Preview"), 205, 95, 315, 120);
	m_wndExport.Create(this, _T("&Export"), 320, 95, 430, 120);
	m_wndLocked.Create(this, _T("Locked"), 315, 60, 425, 85);

}
void CFMStatisticDrugFeeByUser::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);

}
void CFMStatisticDrugFeeByUser::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndPrintPreview.SetEvent(WE_CLICK, _OnPrintPreviewSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndLocked.SetEvent(WE_CLICK, _OnLockedSelectFnc);

	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate += _T("23:59");
	UpdateData(false);
}
void CFMStatisticDrugFeeByUser::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Check(pDX, m_wndLocked.GetDlgCtrlID(), m_bLocked);

}
void CFMStatisticDrugFeeByUser::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CFMStatisticDrugFeeByUser::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CFMStatisticDrugFeeByUser::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_bLocked=FALSE;

}
int CFMStatisticDrugFeeByUser::SetMode(int nMode){
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
/*void CFMStatisticDrugFeeByUser::OnFromDateChange(){
	
} */
/*void CFMStatisticDrugFeeByUser::OnFromDateSetfocus(){
	
} */
/*void CFMStatisticDrugFeeByUser::OnFromDateKillfocus(){
	
} */
int CFMStatisticDrugFeeByUser::OnFromDateCheckValue(){
	return 0;
} 
/*void CFMStatisticDrugFeeByUser::OnToDateChange(){
	
} */
/*void CFMStatisticDrugFeeByUser::OnToDateSetfocus(){
	
} */
/*void CFMStatisticDrugFeeByUser::OnToDateKillfocus(){
	
} */
int CFMStatisticDrugFeeByUser::OnToDateCheckValue(){
	return 0;
} 
void CFMStatisticDrugFeeByUser::OnPrintPreviewSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFMStatisticDrugFeeByUser::OnExportSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
	void CFMStatisticDrugFeeByUser::OnLockedSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
int CFMStatisticDrugFeeByUser::OnAddFMStatisticDrugFeeByUser(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CFMStatisticDrugFeeByUser::OnEditFMStatisticDrugFeeByUser(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CFMStatisticDrugFeeByUser::OnDeleteFMStatisticDrugFeeByUser(){
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
 		OnCancelFMStatisticDrugFeeByUser();
 	}
	return 0;
}
int CFMStatisticDrugFeeByUser::OnSaveFMStatisticDrugFeeByUser(){
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
 		//OnFMStatisticDrugFeeByUserListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CFMStatisticDrugFeeByUser::OnCancelFMStatisticDrugFeeByUser(){
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
int CFMStatisticDrugFeeByUser::OnFMStatisticDrugFeeByUserListLoadData(){
	return 0;
}
