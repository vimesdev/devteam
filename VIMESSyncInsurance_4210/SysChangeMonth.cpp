#include "SysChangeMonth.h"
#include "MainFrm.h"
static void _OnMonthSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CSysChangeMonth* )pWnd)->OnMonthSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnMonthSelendokFnc(CWnd *pWnd){
	((CSysChangeMonth *)pWnd)->OnMonthSelendok();
}
/*static void _OnMonthSetfocusFnc(CWnd *pWnd){
	((CSysChangeMonth *)pWnd)->OnMonthKillfocus();
}*/
/*static void _OnMonthKillfocusFnc(CWnd *pWnd){
	((CSysChangeMonth *)pWnd)->OnMonthKillfocus();
}*/
static long _OnMonthLoadDataFnc(CWnd *pWnd){
	return ((CSysChangeMonth *)pWnd)->OnMonthLoadData();
}
/*static void _OnMonthAddNewFnc(CWnd *pWnd){
	((CSysChangeMonth *)pWnd)->OnMonthAddNew();
}*/


static void _OnYearSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CSysChangeMonth* )pWnd)->OnYearSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnYearSelendokFnc(CWnd *pWnd){
	((CSysChangeMonth *)pWnd)->OnYearSelendok();
}
static long _OnYearLoadDataFnc(CWnd *pWnd){
	return ((CSysChangeMonth *)pWnd)->OnYearLoadData();
}


static void _OnOkSelectFnc(CWnd *pWnd){
	CSysChangeMonth *pVw = (CSysChangeMonth *)pWnd;
	pVw->OnOkSelect();
} 
static int _OnAddSysChangeMonthFnc(CWnd *pWnd){
	 return ((CSysChangeMonth*)pWnd)->OnAddSysChangeMonth();
} 
static int _OnEditSysChangeMonthFnc(CWnd *pWnd){
	 return ((CSysChangeMonth*)pWnd)->OnEditSysChangeMonth();
} 
static int _OnDeleteSysChangeMonthFnc(CWnd *pWnd){
	 return ((CSysChangeMonth*)pWnd)->OnDeleteSysChangeMonth();
} 
static int _OnSaveSysChangeMonthFnc(CWnd *pWnd){
	 return ((CSysChangeMonth*)pWnd)->OnSaveSysChangeMonth();
} 
static int _OnCancelSysChangeMonthFnc(CWnd *pWnd){
	 return ((CSysChangeMonth*)pWnd)->OnCancelSysChangeMonth();
} 
CSysChangeMonth::CSysChangeMonth(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 320;
	m_nDlgHeight = 70;
	SetDefaultValues();
}
CSysChangeMonth::~CSysChangeMonth(){
}
void CSysChangeMonth::OnCreateComponents(){
	m_wndSelectMonth.Create(this, _T("Select Month"), 5, 5, 310, 90);
	m_wndMonthLabel.Create(this, _T("Month"), 10, 60, 90, 85);
	m_wndMonth.Create(this,95, 60, 220, 85); 
	m_wndYear.Create(this,95, 30, 220, 55); 
	m_wndOk.Create(this, _T("&Ok"), 225, 60, 305, 85);
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 90, 55);

}
void CSysChangeMonth::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndMonth.SetCheckValue(true);
	m_wndMonth.LimitText(35);
	m_wndYear.SetCheckValue(true);
	m_wndYear.LimitText(1024);

	m_wndYear.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndYear.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndMonth.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndMonth.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CSysChangeMonth::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndMonth.SetEvent(WE_SELENDOK, _OnMonthSelendokFnc);
	//m_wndMonth.SetEvent(WE_SETFOCUS, _OnMonthSetfocusFnc);
	//m_wndMonth.SetEvent(WE_KILLFOCUS, _OnMonthKillfocusFnc);
	m_wndMonth.SetEvent(WE_SELCHANGE, _OnMonthSelectChangeFnc);
	m_wndMonth.SetEvent(WE_LOADDATA, _OnMonthLoadDataFnc);
	//m_wndMonth.SetEvent(WE_ADDNEW, _OnMonthAddNewFnc);
	m_wndYear.SetEvent(WE_SELENDOK, _OnYearSelendokFnc);
	//m_wndYear.SetEvent(WE_SETFOCUS, _OnYearSetfocusFnc);
	//m_wndYear.SetEvent(WE_KILLFOCUS, _OnYearKillfocusFnc);
	m_wndYear.SetEvent(WE_SELCHANGE, _OnYearSelectChangeFnc);
	m_wndYear.SetEvent(WE_LOADDATA, _OnYearLoadDataFnc);
	//m_wndYear.SetEvent(WE_ADDNEW, _OnYearAddNewFnc);
	m_wndOk.SetEvent(WE_CLICK, _OnOkSelectFnc);
	SetMode(VM_ADD);
	GetDataToScreen();

}
void CSysChangeMonth::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndMonth.GetDlgCtrlID(), m_szMonthKey);
	DDX_TextEx(pDX, m_wndYear.GetDlgCtrlID(), m_szYearKey);

}
void CSysChangeMonth::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Month")] =  m_szMonthKey;
	}
	else
	{
			
	m_jData[_T("Month")].GetValue(m_szMonthKey);
	}

}
void CSysChangeMonth::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM bh_thongtinchitiet_tonghop where ma_lk='%s'    "), m_szMaLk);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("nam_qt"), m_szYearKey);
		rs.GetValue(_T("thang_qt"), m_szMonthKey);
		UpdateData(false);

	}

}
void CSysChangeMonth::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CSysChangeMonth::SetDefaultValues(){

	m_szMonthKey.Empty();
	m_szYearKey.Empty();

}
int CSysChangeMonth::SetMode(int nMode){
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
void CSysChangeMonth::OnMonthSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CSysChangeMonth::OnMonthSelendok(){
	 
}
/*void CSysChangeMonth::OnMonthSetfocus(){
	
}*/
/*void CSysChangeMonth::OnMonthKillfocus(){
	
}*/
long CSysChangeMonth::OnMonthLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();
	if(m_wndMonth.IsSearchKey() && ToInt(m_szMonthKey) > 0)
	{
		szWhere.Format(_T("WHERE hpr_idx = %ld"), ToInt(m_szMonthKey));
	}
	m_wndMonth.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT * FROM hms_period_report %s ORDER BY hpr_idx"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF())
	{ 
		m_wndMonth.AddItems(
			rs.GetValue(_T("hpr_idx")), 
			rs.GetValue(_T("hpr_name")),			
			NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CSysChangeMonth::OnMonthAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CSysChangeMonth::OnYearSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CSysChangeMonth::OnYearSelendok(){
	 
}
/*void CSysChangeMonth::OnYearSetfocus(){
	
}*/
/*void CSysChangeMonth::OnYearKillfocus(){
	
}*/
long CSysChangeMonth::OnYearLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	m_wndYear.DeleteAllItems(); 
	int nCount = 0;
	CString tmpStr;
	for (int i=2017; i < 2025; i++)
	{
		tmpStr.Format(_T("Năm %d"), i);
		m_wndYear.AddItems(
			int2str(i), 
			tmpStr, NULL);
	}
	return nCount;
}
/*void CSysChangeMonth::OnYearAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CSysChangeMonth::OnOkSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	if(!m_szMonthKey.IsEmpty())
		OnOK();

	else
		_msg(_T("XIn hãy chọn tháng quyết toán"));
	
} 
int CSysChangeMonth::OnAddSysChangeMonth(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CSysChangeMonth::OnEditSysChangeMonth(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CSysChangeMonth::OnDeleteSysChangeMonth(){
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
 		OnCancelSysChangeMonth();
 	}
	return 0;
}
int CSysChangeMonth::OnSaveSysChangeMonth(){
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
 		//OnSysChangeMonthListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CSysChangeMonth::OnCancelSysChangeMonth(){
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
int CSysChangeMonth::OnSysChangeMonthListLoadData(){
	return 0;
}
