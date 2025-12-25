#include "HMSSetupBedDialog.h"
#include "MainFrm.h"
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSSetupBedDialog *pVw = (CHMSSetupBedDialog *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CHMSSetupBedDialog *pVw = (CHMSSetupBedDialog *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSSetupBedDialog *pVw = (CHMSSetupBedDialog *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSSetupBedDialog *pVw = (CHMSSetupBedDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSSetupBedDialog *pVw = (CHMSSetupBedDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static long _OnBedListLoadDataFnc(CWnd *pWnd){
	return ((CHMSSetupBedDialog*)pWnd)->OnBedListLoadData();
} 
static void _OnBedListDblClickFnc(CWnd *pWnd){
	((CHMSSetupBedDialog*)pWnd)->OnBedListDblClick();
} 
static void _OnBedListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSSetupBedDialog*)pWnd)->OnBedListSelectChange(nOldItem, nNewItem);
} 
static int _OnBedListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSSetupBedDialog*)pWnd)->OnBedListDeleteItem();
} 
/*static void _OnplannedbedChangeFnc(CWnd *pWnd){
	((CHMSSetupBedDialog *)pWnd)->OnplannedbedChange();
} */
/*static void _OnplannedbedSetfocusFnc(CWnd *pWnd){
	((CHMSSetupBedDialog *)pWnd)->OnplannedbedSetfocus();} */ 
/*static void _OnplannedbedKillfocusFnc(CWnd *pWnd){
	((CHMSSetupBedDialog *)pWnd)->OnplannedbedKillfocus();
} */
static int _OnplannedbedCheckValueFnc(CWnd *pWnd){
	return ((CHMSSetupBedDialog *)pWnd)->OnplannedbedCheckValue();
} 
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSSetupBedDialog* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CHMSSetupBedDialog *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CHMSSetupBedDialog *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CHMSSetupBedDialog *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CHMSSetupBedDialog *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CHMSSetupBedDialog *)pWnd)->OnDepartmentAddNew();
}*/
/*static void _OnavaiablebedChangeFnc(CWnd *pWnd){
	((CHMSSetupBedDialog *)pWnd)->OnavaiablebedChange();
} */
/*static void _OnavaiablebedSetfocusFnc(CWnd *pWnd){
	((CHMSSetupBedDialog *)pWnd)->OnavaiablebedSetfocus();} */ 
/*static void _OnavaiablebedKillfocusFnc(CWnd *pWnd){
	((CHMSSetupBedDialog *)pWnd)->OnavaiablebedKillfocus();
} */
static int _OnavaiablebedCheckValueFnc(CWnd *pWnd){
	return ((CHMSSetupBedDialog *)pWnd)->OnavaiablebedCheckValue();
} 
static int _OnDeptIdxCheckValueFnc(CWnd *pWnd){
	return ((CHMSSetupBedDialog *)pWnd)->OnDeptIdxCheckValue();
} 
static int _OnAddHMSSetupBedDialogFnc(CWnd *pWnd){
	 return ((CHMSSetupBedDialog*)pWnd)->OnAddHMSSetupBedDialog();
} 
static int _OnEditHMSSetupBedDialogFnc(CWnd *pWnd){
	 return ((CHMSSetupBedDialog*)pWnd)->OnEditHMSSetupBedDialog();
} 
static int _OnDeleteHMSSetupBedDialogFnc(CWnd *pWnd){
	 return ((CHMSSetupBedDialog*)pWnd)->OnDeleteHMSSetupBedDialog();
} 
static int _OnSaveHMSSetupBedDialogFnc(CWnd *pWnd){
	 return ((CHMSSetupBedDialog*)pWnd)->OnSaveHMSSetupBedDialog();
} 
static int _OnCancelHMSSetupBedDialogFnc(CWnd *pWnd){
	 return ((CHMSSetupBedDialog*)pWnd)->OnCancelHMSSetupBedDialog();
} 
CHMSSetupBedDialog::CHMSSetupBedDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CHMSSetupBedDialog::~CHMSSetupBedDialog(){
}
void CHMSSetupBedDialog::OnCreateComponents(){
	//m_wndAdd.Create(this, _T("&Add"), 257, 362, 327, 387);
	//m_wndEdit.Create(this, _T("&Edit"), 482, 362, 552, 387);
	//m_wndDelete.Create(this, _T("&Delete"), 407, 362, 477, 387);
//	m_wndSave.Create(this, _T("&Save"), 557, 362, 627, 387);
	//m_wndCancel.Create(this, _T("&Cancel"), 557, 362, 627, 387);
	m_wndBedList.Create(this,5, 5, 625, 325); 
	m_wndplannedbedLabel.Create(this, _T("S\x1ED1 gi\x1B0\x1EDDng tri\x1EC3n kh\x61i"), 264, 330, 365, 355);
	m_wndplannedbed.Create(this,369, 330, 441, 355); 
	m_wndDepartmentLabel.Create(this, _T("Department"), 5, 330, 72, 355);
	m_wndDepartment.Create(this,76, 330, 258, 355); 
	m_wndavaiablebedLabel.Create(this, _T("S\x1ED1 gi\x1B0\x1EDDng \x62i\xEAn \x63h\x1EBF"), 445, 330, 546, 355);
	m_wndavaiablebed.Create(this,551, 330, 621, 355);

	m_wndDeptIdxLabel.Create(this, _T("Dept Index"), 445, 361, 546, 386);
	m_wndDeptIdx.Create(this,551, 360, 621, 385); 
	m_wndEdit.Create(this, _T("&Edit"), 475, 390, 545, 415);
	m_wndSave.Create(this, _T("&Save"), 550, 390, 620, 415);

	m_wndBedList.InsertColumn(0, _T("STT"), CFMT_NUMBER, 50);
	m_wndBedList.InsertColumn(1, _T("sd_id"), CFMT_NUMBER, 0);
	m_wndBedList.InsertColumn(2, _T("Khoa"), CFMT_TEXT, 150);
	m_wndBedList.InsertColumn(3, _T("S\x1ED1 gi\x1B0\x1EDDng tri\x1EC3n kh\x61i"), CFMT_NUMBER, 150);
	m_wndBedList.InsertColumn(4, _T("S\x1ED1 gi\x1B0\x1EDDng \x62i\xEAn \x63h\x1EBF"), CFMT_NUMBER, 150);
	m_wndBedList.InsertColumn(5, _T("Index"), CFMT_NUMBER,70);

	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_hms_bedlistTbl.SetTableName(_T("sys_dept"));
	m_hms_bedlistTbl.AddField(_T("sd_createdby"), dfText, 15); 
	m_hms_bedlistTbl.AddField(_T("sd_createddate"), dfDateTime); 
	m_hms_bedlistTbl.AddField(_T("sd_updatedby"), dfText, 15); 
	m_hms_bedlistTbl.AddField(_T("sd_updateddate"), dfDateTime); 
	m_hms_bedlistTbl.AddField(_T("sd_id"), dfText,15); 
	m_hms_bedlistTbl.AddField(_T("sd_name"), dfText, 100); 
	m_hms_bedlistTbl.AddField(_T("sd_type"), dfText, 20); 
	m_hms_bedlistTbl.AddField(_T("sd_category"), dfLong); 
	m_hms_bedlistTbl.AddField(_T("sd_zone"), dfText, 100); 
	m_hms_bedlistTbl.AddField(_T("sd_groupid"), dfText,100); 
	m_hms_bedlistTbl.AddField(_T("sd_index"), dfLong); 
	m_hms_bedlistTbl.AddField(_T("sd_isactive"), dfText,7); 
	m_hms_bedlistTbl.AddField(_T("sd_org_id"), dfText,32); 
	m_hms_bedlistTbl.AddField(_T("sd_planned_bed"), dfLong); 
	m_hms_bedlistTbl.AddField(_T("sd_avaiable_bed"), dfLong); 

}
void CHMSSetupBedDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndplannedbed.SetLimitText(1024);
	m_wndplannedbed.SetCheckValue(true);
	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(1024);
	m_wndavaiablebed.SetLimitText(1024);
	m_wndavaiablebed.SetCheckValue(true);





}
void CHMSSetupBedDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndBedList.SetEvent(WE_SELCHANGE, _OnBedListSelectChangeFnc);
	m_wndBedList.SetEvent(WE_LOADDATA, _OnBedListLoadDataFnc);
	m_wndBedList.SetEvent(WE_DBLCLICK, _OnBedListDblClickFnc);
	m_wndBedList.AddEvent(1, _T("Delete"), _OnBedListDeleteItemFnc, 0, VK_DELETE, 0);
	//m_wndplannedbed.SetEvent(WE_CHANGE, _OnplannedbedChangeFnc);
	//m_wndplannedbed.SetEvent(WE_SETFOCUS, _OnplannedbedSetfocusFnc);
	//m_wndplannedbed.SetEvent(WE_KILLFOCUS, _OnplannedbedKillfocusFnc);
	m_wndplannedbed.SetEvent(WE_CHECKVALUE, _OnplannedbedCheckValueFnc);
	m_wndDepartment.SetEvent(WE_SELENDOK, _OnDepartmentSelendokFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	//m_wndDepartment.SetEvent(WE_ADDNEW, _OnDepartmentAddNewFnc);
	//m_wndavaiablebed.SetEvent(WE_CHANGE, _OnavaiablebedChangeFnc);
	//m_wndavaiablebed.SetEvent(WE_SETFOCUS, _OnavaiablebedSetfocusFnc);
	//m_wndavaiablebed.SetEvent(WE_KILLFOCUS, _OnavaiablebedKillfocusFnc);
	m_wndavaiablebed.SetEvent(WE_CHECKVALUE, _OnavaiablebedCheckValueFnc);
	m_wndDeptIdx.SetEvent(WE_CHECKVALUE, _OnDeptIdxCheckValueFnc);
	OnBedListLoadData();

}
void CHMSSetupBedDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndplannedbed.GetDlgCtrlID(), m_nplannedbed);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_Text(pDX, m_wndavaiablebed.GetDlgCtrlID(), m_navaiablebed);
	DDX_Text(pDX, m_wndDeptIdx.GetDlgCtrlID(), m_nDeptIdx);


}
void CHMSSetupBedDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL,tmpStr;
	szSQL.Format(_T("SELECT * FROM sys_dept WHERE sd_id='%s'"), m_szDepartmentKey);
	_fmsg(_T("%s"),szSQL);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF()){
		rs.GetValue(_T("sd_id"), m_szDepartmentKey);
		rs.GetValue(_T("sd_planned_bed"), m_nplannedbed);
		rs.GetValue(_T("sd_avaiable_bed"), m_navaiablebed);
		rs.GetValue(_T("sd_index"), m_nDeptIdx);
		SetMode(VM_VIEW);
	}
	else
		SetMode(VM_NONE);

}
void CHMSSetupBedDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_hms_bedlistTbl.SetValue(_T("SD_CREATEDBY"), pMF->GetCurrentUser());
	m_hms_bedlistTbl.SetValue(_T("SD_CREATEDDATE"), pMF->GetSysDateTime());
	m_hms_bedlistTbl.SetValue(_T("SD_UPDATEDBY"), pMF->GetCurrentUser());
	m_hms_bedlistTbl.SetValue(_T("SD_UPDATEDDATE"), pMF->GetSysDateTime());
	m_hms_bedlistTbl.SetValue(_T("SD_PLANNED_BED"), m_nplannedbed);
	m_hms_bedlistTbl.SetValue(_T("SD_AVAIABLE_BED"), m_navaiablebed);
	m_hms_bedlistTbl.SetValue(_T("sd_index"), m_nDeptIdx);

}
void CHMSSetupBedDialog::SetDefaultValues(){

	m_nplannedbed=0;
	m_szDepartmentKey.Empty();
	m_navaiablebed=0;
	m_nDeptIdx=0;

}
int CHMSSetupBedDialog::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 3, 2, -1);
 			SetDefaultValues();
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 3, 1, -1);
 			break;
 		case VM_VIEW: 
 			EnableControls(FALSE);
 			EnableButtons(FALSE, 3, 2, -1);
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
int CHMSSetupBedDialog::OnDeptIdxCheckValue(){
	return 0;
}
void CHMSSetupBedDialog::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnAddHMSSetupBedDialog();
	UpdateData(true);
	OnBedListLoadData();
} 
void CHMSSetupBedDialog::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnEditHMSSetupBedDialog();
	UpdateData(true);
	OnBedListLoadData();
} 
void CHMSSetupBedDialog::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnDeleteHMSSetupBedDialog();
	UpdateData(true);
	OnBedListLoadData();
} 
void CHMSSetupBedDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveHMSSetupBedDialog();
	UpdateData(true);
	OnBedListLoadData();
} 
void CHMSSetupBedDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancelHMSSetupBedDialog();
} 
void CHMSSetupBedDialog::OnBedListDblClick(){
	
} 
void CHMSSetupBedDialog::OnBedListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(nNewItem < 0)
		return;
	m_szDepartmentKey = m_wndBedList.GetItemText(nNewItem, 1);
	GetDataToScreen();	
} 
int CHMSSetupBedDialog::OnBedListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSSetupBedDialog::OnBedListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL,tmpStr;
	int index=1;
	m_wndBedList.BeginLoad(); 
	int nCount = 0;
	szSQL.Format(_T("select sd_id,sd_name name,sd_planned_bed planned,sd_avaiable_bed avaiable, sd_index as index1 from sys_dept where sd_type='DT' and ( substr(sd_id,1,1) in ('A','B') or  sd_id='PTTYC' ) order by sd_index,sd_id  "));
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){
		tmpStr.Format(_T("%d"),index++);
		m_wndBedList.AddItems(
			tmpStr,
			rs.GetValue(_T("sd_id")),
			rs.GetValue(_T("name")),
			rs.GetValue(_T("planned")),
			rs.GetValue(_T("avaiable")),
			rs.GetValue(_T("index1")),
			NULL);
		rs.MoveNext();
	}
	m_wndBedList.EndLoad(); 
	return nCount;

}
/*void CHMSSetupBedDialog::OnplannedbedChange(){
	
} */
/*void CHMSSetupBedDialog::OnplannedbedSetfocus(){
	
} */
/*void CHMSSetupBedDialog::OnplannedbedKillfocus(){
	
} */
int CHMSSetupBedDialog::OnplannedbedCheckValue(){
	return 0;
} 
void CHMSSetupBedDialog::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSetupBedDialog::OnDepartmentSelendok(){
	 
}
/*void CHMSSetupBedDialog::OnDepartmentSetfocus(){
	
}*/
/*void CHMSSetupBedDialog::OnDepartmentKillfocus(){
	
}*/
long CHMSSetupBedDialog::OnDepartmentLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDepartment.IsSearchKey() && !m_szDepartmentKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szDepartmentKey);
	}
	m_wndDepartment.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("select sd_id id,sd_name name from sys_dept where sd_type='DT' order by sd_id"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDepartment.AddItems(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("name")),NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSSetupBedDialog::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSSetupBedDialog::OnavaiablebedChange(){
	
} */
/*void CHMSSetupBedDialog::OnavaiablebedSetfocus(){
	
} */
/*void CHMSSetupBedDialog::OnavaiablebedKillfocus(){
	
} */
int CHMSSetupBedDialog::OnavaiablebedCheckValue(){
	return 0;
} 
int CHMSSetupBedDialog::OnAddHMSSetupBedDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSSetupBedDialog::OnEditHMSSetupBedDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSSetupBedDialog::OnDeleteHMSSetupBedDialog(){
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
 		OnCancelHMSSetupBedDialog();
 	}
	return 0;
}
int CHMSSetupBedDialog::OnSaveHMSSetupBedDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
 		szSQL = m_hms_bedlistTbl.GetInsertSQL(_T("SD_PLANNED_BED,SD_AVAIABLE_BED"));
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
		szWhere.Format(_T(" WHERE sd_id='%s'"),m_szDepartmentKey);
 		szSQL = m_hms_bedlistTbl.GetUpdateSQL(_T("SD_CREATEDBY,SD_CREATEDDATE,SD_UPDATEDBY,SD_UPDATEDDATE,SD_ID,SD_NAME,SD_TYPE,SD_CATEGORY,SD_ZONE,SD_GROUPID,SD_ISACTIVE,SD_ORG_ID"));
 		szSQL += szWhere;
 	}
 _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
 		OnHMSSetupBedDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSSetupBedDialog::OnCancelHMSSetupBedDialog(){
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
int CHMSSetupBedDialog::OnHMSSetupBedDialogListLoadData(){
	return 0;
}
