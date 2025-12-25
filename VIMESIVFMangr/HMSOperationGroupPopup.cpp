#include "HMSOperationGroupPopup.h"
#include "MainFrm.h"
#include "HMSOperationListSetup.h"
#include "HMSParaclinicalListSetup.h"

/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CHMSOperationGroupPopup *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CHMSOperationGroupPopup *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CHMSOperationGroupPopup *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSOperationGroupPopup *)pWnd)->OnNameCheckValue();
} 
/*static void _OnReturnDeptChangeFnc(CWnd *pWnd){
	((CHMSOperationGroupPopup *)pWnd)->OnReturnDeptChange();
} */
/*static void _OnReturnDeptSetfocusFnc(CWnd *pWnd){
	((CHMSOperationGroupPopup *)pWnd)->OnReturnDeptSetfocus();} */ 
/*static void _OnReturnDeptKillfocusFnc(CWnd *pWnd){
	((CHMSOperationGroupPopup *)pWnd)->OnReturnDeptKillfocus();
} */
static int _OnReturnDeptCheckValueFnc(CWnd *pWnd){
	return ((CHMSOperationGroupPopup *)pWnd)->OnReturnDeptCheckValue();
} 
static void _OnOperationGroupSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSOperationGroupPopup* )pWnd)->OnOperationGroupSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnOperationGroupSelendokFnc(CWnd *pWnd){
	((CHMSOperationGroupPopup *)pWnd)->OnOperationGroupSelendok();
}
/*static void _OnOperationGroupSetfocusFnc(CWnd *pWnd){
	((CHMSOperationGroupPopup *)pWnd)->OnOperationGroupKillfocus();
}*/
/*static void _OnOperationGroupKillfocusFnc(CWnd *pWnd){
	((CHMSOperationGroupPopup *)pWnd)->OnOperationGroupKillfocus();
}*/
static long _OnOperationGroupLoadDataFnc(CWnd *pWnd){
	return ((CHMSOperationGroupPopup *)pWnd)->OnOperationGroupLoadData();
}
/*static void _OnOperationGroupAddNewFnc(CWnd *pWnd){
	((CHMSOperationGroupPopup *)pWnd)->OnOperationGroupAddNew();
}*/
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSOperationGroupPopup *pVw = (CHMSOperationGroupPopup *)pWnd;
	pVw->OnSaveSelect();
}
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSOperationGroupPopup *pVw = (CHMSOperationGroupPopup *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSOperationGroupPopupFnc(CWnd *pWnd){
	 return ((CHMSOperationGroupPopup*)pWnd)->OnAddHMSOperationGroupPopup();
} 
static int _OnEditHMSOperationGroupPopupFnc(CWnd *pWnd){
	 return ((CHMSOperationGroupPopup*)pWnd)->OnEditHMSOperationGroupPopup();
} 
static int _OnDeleteHMSOperationGroupPopupFnc(CWnd *pWnd){
	 return ((CHMSOperationGroupPopup*)pWnd)->OnDeleteHMSOperationGroupPopup();
} 
static int _OnSaveHMSOperationGroupPopupFnc(CWnd *pWnd){
	 return ((CHMSOperationGroupPopup*)pWnd)->OnSaveHMSOperationGroupPopup();
} 
static int _OnCancelHMSOperationGroupPopupFnc(CWnd *pWnd){
	 return ((CHMSOperationGroupPopup*)pWnd)->OnCancelHMSOperationGroupPopup();
} 
CHMSOperationGroupPopup::CHMSOperationGroupPopup(CWnd *pParent, CString szType):
	CGuiPopup(pParent){
	m_szType = szType;
	m_nDlgWidth = 815;
	if (szType == _T("O"))
		m_nDlgHeight = 60;
	else
		m_nDlgHeight = 90;
	SetDefaultValues();
}
CHMSOperationGroupPopup::~CHMSOperationGroupPopup(){
}
void CHMSOperationGroupPopup::OnCreateComponents(){
	if (m_szType == _T("O"))
	{
		m_wndDataInput.Create(this, _T("Data Input"), 5, 5, 810, 60);
		m_wndNameLabel.Create(this, _T("Name"), 10, 30, 90, 55);
		m_wndName.Create(this,95, 30, 315, 55); 
		m_wndReturnDeptLabel.Create(this, _T("Return Dept"), 320, 30, 400, 55);
		m_wndReturnDept.Create(this,405, 30, 485, 55); 
		m_wndOperationGroupLabel.Create(this, _T("Operation Group"), 490, 30, 570, 55);
		m_wndOperationGroup.Create(this,575, 30, 770, 55); 
		m_wndSave.Create(this, _T("&Save"), 775, 30, 802, 55);
	}
	else
	{
		m_wndDataInput.Create(this, _T("Data Input"), 5, 5, 490, 90);
		m_wndNameLabel.Create(this, _T("Name"), 10, 30, 90, 55);
		m_wndName.Create(this,95, 30, 315, 55); 
		m_wndReturnDeptLabel.Create(this, _T("Return Dept"), 320, 30, 400, 55);
		m_wndReturnDept.Create(this,405, 30, 485, 55); 
		m_wndOperationGroupLabel.Create(this, _T("Operation Group"), 10, 60, 90, 85);
		m_wndOperationGroup.Create(this,95, 60, 315, 85); 
		m_wndSave.Create(this, _T("&Save"), 320, 60, 400, 85);
		m_wndClose.Create(this, _T("&Close"), 405, 60, 485, 85);

	}

}
void CHMSOperationGroupPopup::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndName.SetLimitText(35);
	m_wndName.SetCheckValue(true);
	m_wndReturnDept.SetLimitText(16);
	//m_wndReturnDept.SetCheckValue(true);
	//m_wndOperationGroup.SetCheckValue(true);
	m_wndOperationGroup.LimitText(35);


	m_wndOperationGroup.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndOperationGroup.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CHMSOperationGroupPopup::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	//m_wndReturnDept.SetEvent(WE_CHANGE, _OnReturnDeptChangeFnc);
	//m_wndReturnDept.SetEvent(WE_SETFOCUS, _OnReturnDeptSetfocusFnc);
	//m_wndReturnDept.SetEvent(WE_KILLFOCUS, _OnReturnDeptKillfocusFnc);
	m_wndReturnDept.SetEvent(WE_CHECKVALUE, _OnReturnDeptCheckValueFnc);
	m_wndOperationGroup.SetEvent(WE_SELENDOK, _OnOperationGroupSelendokFnc);
	//m_wndOperationGroup.SetEvent(WE_SETFOCUS, _OnOperationGroupSetfocusFnc);
	//m_wndOperationGroup.SetEvent(WE_KILLFOCUS, _OnOperationGroupKillfocusFnc);
	m_wndOperationGroup.SetEvent(WE_SELCHANGE, _OnOperationGroupSelectChangeFnc);
	m_wndOperationGroup.SetEvent(WE_LOADDATA, _OnOperationGroupLoadDataFnc);
	//m_wndOperationGroup.SetEvent(WE_ADDNEW, _OnOperationGroupAddNewFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	GetDataToScreen();

}
void CHMSOperationGroupPopup::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_Text(pDX, m_wndReturnDept.GetDlgCtrlID(), m_nReturnDept);
	DDX_TextEx(pDX, m_wndOperationGroup.GetDlgCtrlID(), m_szOperationGroupKey);

}
void CHMSOperationGroupPopup::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT hfl_name, hfl_retprice, DECODE('%s', 'O', hfl_groupid, hfl_rpt_group) operation_group FROM hms_fee_list WHERE hfl_feeid = '%s'"),  m_szType, m_szID);
	rs.ExecSQL(szSQL);
	if (!rs.IsEOF())
	{
		rs.GetValue(_T("hfl_name"), m_szName);
		rs.GetValue(_T("hfl_retprice"), m_nReturnDept);
		m_nOldPrice = m_nReturnDept;
		rs.GetValue(_T("operation_group"), m_szOperationGroupKey);
		m_szOldGroup = m_szOperationGroupKey;
		SetMode(VM_EDIT);
	}
	else
		SetMode(VM_NONE);

}
void CHMSOperationGroupPopup::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSOperationGroupPopup::SetDefaultValues(){

	m_szName.Empty();
	m_nReturnDept=0;
	m_szOperationGroupKey.Empty();
	m_nOldPrice = 0;
	m_szOldGroup.Empty();

}
int CHMSOperationGroupPopup::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiPopup::SetMode(nMode);
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
		m_wndSave.EnableWindow(TRUE);
		m_wndName.EnableWindow(FALSE);
		m_wndClose.EnableWindow(TRUE);
		m_wndReturnDept.SetFocus();
 		return nOldMode;
}
/*void CHMSOperationGroupPopup::OnNameChange(){
	
} */
/*void CHMSOperationGroupPopup::OnNameSetfocus(){
	
} */
/*void CHMSOperationGroupPopup::OnNameKillfocus(){
	
} */
int CHMSOperationGroupPopup::OnNameCheckValue(){
	return 0;
} 
/*void CHMSOperationGroupPopup::OnReturnDeptChange(){
	
} */
/*void CHMSOperationGroupPopup::OnReturnDeptSetfocus(){
	
} */
/*void CHMSOperationGroupPopup::OnReturnDeptKillfocus(){
	
} */
int CHMSOperationGroupPopup::OnReturnDeptCheckValue(){
	return 0;
} 
void CHMSOperationGroupPopup::OnOperationGroupSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSOperationGroupPopup::OnOperationGroupSelendok(){
	 
}
/*void CHMSOperationGroupPopup::OnOperationGroupSetfocus(){
	
}*/
/*void CHMSOperationGroupPopup::OnOperationGroupKillfocus(){
	
}*/
long CHMSOperationGroupPopup::OnOperationGroupLoadData(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndOperationGroup.IsSearchKey()){
		szWhere.Format(_T(" AND hfg_id='%s' "), m_szOperationGroupKey);
	};
	szSQL.Format(_T("SELECT  hfg_id as id, hfg_name as name ") \
		_T(" FROM hms_fee_group ") \
		_T(" WHERE substr(hfg_id, 1, 2) IN('B4','B5') ") \
		_T(" ORDER BY hfg_id "), szWhere);

	m_wndOperationGroup.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndOperationGroup.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSOperationGroupPopup::OnOperationGroupAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSOperationGroupPopup::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveHMSOperationGroupPopup();
}
void CHMSOperationGroupPopup::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiPopup::OnClose();
} 
int CHMSOperationGroupPopup::OnAddHMSOperationGroupPopup(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSOperationGroupPopup::OnEditHMSOperationGroupPopup(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSOperationGroupPopup::OnDeleteHMSOperationGroupPopup(){
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
 		OnCancelHMSOperationGroupPopup();
 	}
	return 0;
}
int CHMSOperationGroupPopup::OnSaveHMSOperationGroupPopup(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;

 	//if(GetMode() == VM_ADD){
 	//	//szSQL = m_tblTbl.GetInsertSQL();
 	//}
 	//else if(GetMode() == VM_EDIT){
 	//	CString szWhere;
 	//	szWhere.Format(_T(" WHERE"));
 	//	//szSQL = m_tblTbl.GetUpdateSQL(_T("createdby,createddate"));
 	//	szSQL += szWhere;
 	//}
	if (m_szType == _T("O"))
		szSQL.Format(_T("UPDATE hms_fee_list SET hfl_retprice = %ld, hfl_groupid = '%s' WHERE hfl_feeid = '%s'"), m_nReturnDept, m_szOperationGroupKey, m_szID);
	else
		szSQL.Format(_T("UPDATE hms_fee_list SET hfl_retprice = %ld, hfl_opt_group = '%s', hfl_isopt_group = '%s' WHERE hfl_feeid = '%s'"), m_nReturnDept, m_szOperationGroupKey, m_szOperationGroupKey.IsEmpty()?_T("N"):_T("Y"), m_szID);
 _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
		if (m_szType == _T("O"))
			((CHMSOperationListSetup*) m_pWnd)->OnFeeListLoadData();
		else
			((CHMSParaclinicalListSetup*) m_pWnd)->OnFeeListLoadData();
		_tprintf(_T("%ld|%ld|%s|%s"), m_nOldPrice, m_nReturnDept, m_szOldGroup, m_szOperationGroupKey); 
		if (m_nOldPrice != m_nReturnDept || m_szOperationGroupKey != m_szOldGroup)
		{
			CString szEvent, szDesc;
			szEvent = _T("Edit Operation Group");
			szDesc.Format(_T("Item ID: %s| Price: %ld -> %ld| Group: %s -> %s"), m_szID, m_nOldPrice, m_nReturnDept, m_szOldGroup, m_szOperationGroupKey);
			pMF->SystemLog(szEvent, szDesc);
		}
		
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSOperationGroupPopup::OnCancelHMSOperationGroupPopup(){
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
int CHMSOperationGroupPopup::OnHMSOperationGroupPopupListLoadData(){
	return 0;
}
