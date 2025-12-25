#include "HMSSetupIndexDeptDialog.h"
#include "MainFrm.h"
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSSetupIndexDeptDialog *pVw = (CHMSSetupIndexDeptDialog *)pWnd;
	pVw->OnAddSelect();
} 

static void _OnEditSelectFnc(CWnd *pWnd){
	CHMSSetupIndexDeptDialog *pVw = (CHMSSetupIndexDeptDialog *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSSetupIndexDeptDialog *pVw = (CHMSSetupIndexDeptDialog *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSSetupIndexDeptDialog *pVw = (CHMSSetupIndexDeptDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSSetupIndexDeptDialog *pVw = (CHMSSetupIndexDeptDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static long _OnBedListLoadDataFnc(CWnd *pWnd){
	return ((CHMSSetupIndexDeptDialog*)pWnd)->OnBedListLoadData();
} 
static void _OnBedListDblClickFnc(CWnd *pWnd){
	((CHMSSetupIndexDeptDialog*)pWnd)->OnBedListDblClick();
} 
static void _OnBedListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSSetupIndexDeptDialog*)pWnd)->OnBedListSelectChange(nOldItem, nNewItem);
} 
static int _OnBedListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSSetupIndexDeptDialog*)pWnd)->OnBedListDeleteItem();
} 
/*static void _OnplannedbedChangeFnc(CWnd *pWnd){
	((CHMSSetupIndexDeptDialog *)pWnd)->OnplannedbedChange();
} */
/*static void _OnplannedbedSetfocusFnc(CWnd *pWnd){
	((CHMSSetupIndexDeptDialog *)pWnd)->OnplannedbedSetfocus();} */ 
/*static void _OnplannedbedKillfocusFnc(CWnd *pWnd){
	((CHMSSetupIndexDeptDialog *)pWnd)->OnplannedbedKillfocus();
} */
static int _OnplannedbedCheckValueFnc(CWnd *pWnd){
	return ((CHMSSetupIndexDeptDialog *)pWnd)->OnplannedbedCheckValue();
} 
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSSetupIndexDeptDialog* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CHMSSetupIndexDeptDialog *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CHMSSetupIndexDeptDialog *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CHMSSetupIndexDeptDialog *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CHMSSetupIndexDeptDialog *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CHMSSetupIndexDeptDialog *)pWnd)->OnDepartmentAddNew();
}*/
/*static void _OnavaiablebedChangeFnc(CWnd *pWnd){
	((CHMSSetupIndexDeptDialog *)pWnd)->OnavaiablebedChange();
} */
/*static void _OnavaiablebedSetfocusFnc(CWnd *pWnd){
	((CHMSSetupIndexDeptDialog *)pWnd)->OnavaiablebedSetfocus();} */ 
/*static void _OnavaiablebedKillfocusFnc(CWnd *pWnd){
	((CHMSSetupIndexDeptDialog *)pWnd)->OnavaiablebedKillfocus();
} */
static int _OnavaiablebedCheckValueFnc(CWnd *pWnd){
	return ((CHMSSetupIndexDeptDialog *)pWnd)->OnavaiablebedCheckValue();
} 
static int _OnAddHMSSetupBedDialogFnc(CWnd *pWnd){
	 return ((CHMSSetupIndexDeptDialog*)pWnd)->OnAddHMSSetupBedDialog();
} 
static int _OnEditHMSSetupBedDialogFnc(CWnd *pWnd){
	 return ((CHMSSetupIndexDeptDialog*)pWnd)->OnEditHMSSetupBedDialog();
} 
static int _OnDeleteHMSSetupBedDialogFnc(CWnd *pWnd){
	 return ((CHMSSetupIndexDeptDialog*)pWnd)->OnDeleteHMSSetupBedDialog();
} 
static int _OnSaveHMSSetupBedDialogFnc(CWnd *pWnd){
	 return ((CHMSSetupIndexDeptDialog*)pWnd)->OnSaveHMSSetupBedDialog();
} 
static int _OnCancelHMSSetupBedDialogFnc(CWnd *pWnd){
	 return ((CHMSSetupIndexDeptDialog*)pWnd)->OnCancelHMSSetupBedDialog();
} 

static int _OnIndex2CheckValueFnc(CWnd *pWnd){
	return ((CHMSSetupIndexDeptDialog *)pWnd)->OnIndex2CheckValue();
} 
static void _OnUseReportthuongSelectFnc(CWnd *pWnd){
	 ((CHMSSetupIndexDeptDialog*)pWnd)->OnUseReportthuongSelect();
}

CHMSSetupIndexDeptDialog::CHMSSetupIndexDeptDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CHMSSetupIndexDeptDialog::~CHMSSetupIndexDeptDialog(){
}
void CHMSSetupIndexDeptDialog::OnCreateComponents()
{
	//m_wndAdd.Create(this, _T("&Add"), 257, 362, 327, 387);
	/*m_wndEdit.Create(this, _T("&Edit"), 482, 362, 552, 387);
	//m_wndDelete.Create(this, _T("&Delete"), 407, 362, 477, 387);
	m_wndSave.Create(this, _T("&Save"), 557, 362, 627, 387);
	//m_wndCancel.Create(this, _T("&Cancel"), 557, 362, 627, 387);
	m_wndBedList.Create(this,5, 5, 625, 325); 
	m_wndplannedbedLabel.Create(this, _T("Index"), 264, 330, 365, 355);
	m_wndplannedbed.Create(this,369, 330, 441, 355); 
	m_wndDepartmentLabel.Create(this, _T("Department"), 5, 330, 72, 355);
	m_wndDepartment.Create(this,76, 330, 258, 355);
	m_wndUseReport.Create(this, _T("Sử dụng báo cáo"), 445, 330, 625, 355);
	//m_wndavaiablebedLabel.Create(this, _T("S\x1ED1 gi\x1B0\x1EDDng \x62i\xEAn \x63h\x1EBF"), 445, 330, 546, 355);
	//m_wndavaiablebed.Create(this,551, 330, 621, 355);*/

	m_wndBedList.Create(this,5, 4, 820, 324); 
	m_wndDepartmentLabel.Create(this, _T("Department"), 5, 330, 72, 355);
	m_wndDepartment.Create(this,76, 330, 258, 355); 
	m_wndplannedbedLabel.Create(this, _T("STT-TN"), 264, 330, 365, 355);
	m_wndplannedbed.Create(this,369, 330, 441, 355); 
	m_wndEdit.Create(this, _T("&Edit"), 674, 391, 744, 416);
	m_wndSave.Create(this, _T("&Save"), 749, 391, 819, 416);
	m_wndUseReport.Create(this, _T("Sử dụng báo cáo"), 445, 330, 820, 355);
	m_wndindex2Label.Create(this, _T("STT-T"), 264, 360, 365, 385);
	m_wndIndex2.Create(this,369, 360, 441, 385); 
	m_wndUseReportthuong.Create(this, _T("Sử dụng báo cáo thường"), 445, 360, 820, 385);

	m_wndBedList.InsertColumn(0, _T("STT"), CFMT_NUMBER, 50);
	m_wndBedList.InsertColumn(1, _T("Mã khoa"), CFMT_TEXT, 50);
	m_wndBedList.InsertColumn(2, _T("Khoa"), CFMT_TEXT, 300);
	m_wndBedList.InsertColumn(3, _T("STT tự nguyện"), CFMT_NUMBER, 100);
	m_wndBedList.InsertColumn(4, _T("Sử dụng Báo cáo tự nguyện"), CFMT_TEXT, 100);

	m_wndBedList.InsertColumn(5, _T("STT thường"), CFMT_NUMBER, 100);
	m_wndBedList.InsertColumn(6, _T("Sử dụng Báo cáo thường"), CFMT_TEXT, 100);

	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


}
void CHMSSetupIndexDeptDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndplannedbed.SetLimitText(1024);
	m_wndplannedbed.SetCheckValue(true);
	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(1024);
	m_wndavaiablebed.SetLimitText(1024);
	m_wndavaiablebed.SetCheckValue(true);
}
void CHMSSetupIndexDeptDialog::OnSetWindowEvents(){
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
	m_wndIndex2.SetEvent(WE_CHECKVALUE, _OnIndex2CheckValueFnc);
	m_wndUseReportthuong.SetEvent(WE_CLICK, _OnUseReportthuongSelectFnc);
	//m_wndDepartment.SetEvent(WE_ADDNEW, _OnDepartmentAddNewFnc);
	//m_wndavaiablebed.SetEvent(WE_CHANGE, _OnavaiablebedChangeFnc);
	//m_wndavaiablebed.SetEvent(WE_SETFOCUS, _OnavaiablebedSetfocusFnc);
	//m_wndavaiablebed.SetEvent(WE_KILLFOCUS, _OnavaiablebedKillfocusFnc);
	m_wndavaiablebed.SetEvent(WE_CHECKVALUE, _OnavaiablebedCheckValueFnc);
	OnBedListLoadData();

}
void CHMSSetupIndexDeptDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndplannedbed.GetDlgCtrlID(), m_nplannedbed);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_Text(pDX, m_wndavaiablebed.GetDlgCtrlID(), m_navaiablebed);
	DDX_Check(pDX, m_wndUseReport.GetDlgCtrlID(), m_nUseReport);
	DDX_Text(pDX, m_wndIndex2.GetDlgCtrlID(), m_nIndex2);
	DDX_Check(pDX, m_wndUseReportthuong.GetDlgCtrlID(), m_bUseReportthuong);

}
void CHMSSetupIndexDeptDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL,tmpStr;
	szSQL.Format(_T("SELECT * FROM sys_dept WHERE sd_id='%s'"), m_szDepartmentKey);
	_fmsg(_T("%s"),szSQL);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF()){
		rs.GetValue(_T("sd_id"), m_szDepartmentKey);
		rs.GetValue(_T("sd_index1"), m_nplannedbed);
		rs.GetValue(_T("SD_USE_HC"), tmpStr);
		if(tmpStr== _T("Y"))
			m_nUseReport=1;
		else
			m_nUseReport=0;

		rs.GetValue(_T("sd_index2"), m_nIndex2);
		rs.GetValue(_T("sd_use_normal"), tmpStr);
		if(tmpStr== _T("Y"))
			m_bUseReportthuong=true;
		else
			m_bUseReportthuong=false;
		SetMode(VM_VIEW);
	}
	else
		SetMode(VM_NONE);

}
void CHMSSetupIndexDeptDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_hms_bedlistTbl.SetValue(_T("SD_CREATEDBY"), pMF->GetCurrentUser());
	m_hms_bedlistTbl.SetValue(_T("SD_CREATEDDATE"), pMF->GetSysDateTime());
	m_hms_bedlistTbl.SetValue(_T("SD_UPDATEDBY"), pMF->GetCurrentUser());
	m_hms_bedlistTbl.SetValue(_T("SD_UPDATEDDATE"), pMF->GetSysDateTime());
	m_hms_bedlistTbl.SetValue(_T("SD_PLANNED_BED"), m_nplannedbed);
	m_hms_bedlistTbl.SetValue(_T("SD_AVAIABLE_BED"), m_navaiablebed);

}
void CHMSSetupIndexDeptDialog::SetDefaultValues(){

	m_nplannedbed=0;
	m_szDepartmentKey.Empty();
	m_navaiablebed=0;

}
int CHMSSetupIndexDeptDialog::SetMode(int nMode){
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
void CHMSSetupIndexDeptDialog::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnAddHMSSetupBedDialog();
	UpdateData(true);
	OnBedListLoadData();
} 
void CHMSSetupIndexDeptDialog::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnEditHMSSetupBedDialog();
	UpdateData(true);
	OnBedListLoadData();
} 
void CHMSSetupIndexDeptDialog::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnDeleteHMSSetupBedDialog();
	UpdateData(true);
	OnBedListLoadData();
} 
void CHMSSetupIndexDeptDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveHMSSetupBedDialog();
	UpdateData(true);
	OnBedListLoadData();
} 
void CHMSSetupIndexDeptDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancelHMSSetupBedDialog();
} 
void CHMSSetupIndexDeptDialog::OnBedListDblClick(){
	
} 

int CHMSSetupIndexDeptDialog::OnIndex2CheckValue()
{
	return 0;
} 
	void CHMSSetupIndexDeptDialog::OnUseReportthuongSelect()
	{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}

void CHMSSetupIndexDeptDialog::OnBedListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(nNewItem < 0)
		return;
	m_szDepartmentKey = m_wndBedList.GetItemText(nNewItem, 1);
	GetDataToScreen();	
} 
int CHMSSetupIndexDeptDialog::OnBedListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSSetupIndexDeptDialog::OnBedListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL,tmpStr;
	int index=1;
	m_wndBedList.BeginLoad(); 
	int nCount = 0;
	szSQL.Format(_T("select sd_id,sd_name name,sd_index1 planned , SD_USE_HC, sd_index2 as indexnormal, sd_use_normal as usenormal from sys_dept where sd_type='DT' order by SD_USE_HC desc, sd_index1 "));
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){
		tmpStr.Format(_T("%d"),index++);
		m_wndBedList.AddItems(
			tmpStr,
			rs.GetValue(_T("sd_id")),
			rs.GetValue(_T("name")),
			rs.GetValue(_T("planned")),
			rs.GetValue(_T("SD_USE_HC")),
			rs.GetValue(_T("indexnormal")),
			rs.GetValue(_T("usenormal")),
			NULL);
		rs.MoveNext();
	}
	m_wndBedList.EndLoad(); 
	return nCount;

}
/*void CHMSSetupIndexDeptDialog::OnplannedbedChange(){
	
} */
/*void CHMSSetupIndexDeptDialog::OnplannedbedSetfocus(){
	
} */
/*void CHMSSetupIndexDeptDialog::OnplannedbedKillfocus(){
	
} */
int CHMSSetupIndexDeptDialog::OnplannedbedCheckValue(){
	return 0;
} 
void CHMSSetupIndexDeptDialog::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSetupIndexDeptDialog::OnDepartmentSelendok(){
	 
}
/*void CHMSSetupIndexDeptDialog::OnDepartmentSetfocus(){
	
}*/
/*void CHMSSetupIndexDeptDialog::OnDepartmentKillfocus(){
	
}*/
long CHMSSetupIndexDeptDialog::OnDepartmentLoadData(){
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
/*void CHMSSetupIndexDeptDialog::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSSetupIndexDeptDialog::OnavaiablebedChange(){
	
} */
/*void CHMSSetupIndexDeptDialog::OnavaiablebedSetfocus(){
	
} */
/*void CHMSSetupIndexDeptDialog::OnavaiablebedKillfocus(){
	
} */
int CHMSSetupIndexDeptDialog::OnavaiablebedCheckValue(){
	return 0;
} 
int CHMSSetupIndexDeptDialog::OnAddHMSSetupBedDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSSetupIndexDeptDialog::OnEditHMSSetupBedDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSSetupIndexDeptDialog::OnDeleteHMSSetupBedDialog(){
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
int CHMSSetupIndexDeptDialog::OnSaveHMSSetupBedDialog()
{
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL, szSQL2;
  if(GetMode() == VM_EDIT)
  {
		
 		CString szWhere,tmpStr, tmpStr1;
		if(m_nUseReport== 1)
			tmpStr= _T("Y");
		else
			tmpStr= _T("N");

		if(m_bUseReportthuong == true)
			tmpStr1= _T("Y");
		else
			tmpStr1= _T("N");
		szSQL.Format(_T(" Update sys_dept set sd_index1= %ld, sd_use_hc='%s', sd_index2 = %ld, sd_use_normal ='%s' where sd_id='%s' "), m_nplannedbed,tmpStr, m_nIndex2, tmpStr1, m_szDepartmentKey);
 	}
 //_msg(_T("%s"), szSQL);
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
int CHMSSetupIndexDeptDialog::OnCancelHMSSetupBedDialog(){
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
int CHMSSetupIndexDeptDialog::OnHMSSetupBedDialogListLoadData(){
	return 0;
}
