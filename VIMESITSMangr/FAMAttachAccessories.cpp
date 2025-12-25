#include "FAMAttachAccessories.h"
#include "MainFrm.h"
#include "FAMAssetDlg.h"
static void _OnTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAMAttachAccessories* )pWnd)->OnTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTypeSelendokFnc(CWnd *pWnd){
	((CFAMAttachAccessories *)pWnd)->OnTypeSelendok();
}
/*static void _OnTypeSetfocusFnc(CWnd *pWnd){
	((CFAMAttachAccessories *)pWnd)->OnTypeKillfocus();
}*/
/*static void _OnTypeKillfocusFnc(CWnd *pWnd){
	((CFAMAttachAccessories *)pWnd)->OnTypeKillfocus();
}*/
static long _OnTypeLoadDataFnc(CWnd *pWnd){
	return ((CFAMAttachAccessories *)pWnd)->OnTypeLoadData();
}
/*static void _OnTypeAddNewFnc(CWnd *pWnd){
	((CFAMAttachAccessories *)pWnd)->OnTypeAddNew();
}*/
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CFAMAttachAccessories *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CFAMAttachAccessories *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CFAMAttachAccessories *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CFAMAttachAccessories *)pWnd)->OnNameCheckValue();
} 
/*static void _OnModelChangeFnc(CWnd *pWnd){
	((CFAMAttachAccessories *)pWnd)->OnModelChange();
} */
/*static void _OnModelSetfocusFnc(CWnd *pWnd){
	((CFAMAttachAccessories *)pWnd)->OnModelSetfocus();} */ 
/*static void _OnModelKillfocusFnc(CWnd *pWnd){
	((CFAMAttachAccessories *)pWnd)->OnModelKillfocus();
} */
static int _OnModelCheckValueFnc(CWnd *pWnd){
	return ((CFAMAttachAccessories *)pWnd)->OnModelCheckValue();
} 
/*static void _OnSerialChangeFnc(CWnd *pWnd){
	((CFAMAttachAccessories *)pWnd)->OnSerialChange();
} */
/*static void _OnSerialSetfocusFnc(CWnd *pWnd){
	((CFAMAttachAccessories *)pWnd)->OnSerialSetfocus();} */ 
/*static void _OnSerialKillfocusFnc(CWnd *pWnd){
	((CFAMAttachAccessories *)pWnd)->OnSerialKillfocus();
} */
static int _OnSerialCheckValueFnc(CWnd *pWnd){
	return ((CFAMAttachAccessories *)pWnd)->OnSerialCheckValue();
} 
static void _OnMfgSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAMAttachAccessories* )pWnd)->OnMfgSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnMfgSelendokFnc(CWnd *pWnd){
	((CFAMAttachAccessories *)pWnd)->OnMfgSelendok();
}
/*static void _OnMfgSetfocusFnc(CWnd *pWnd){
	((CFAMAttachAccessories *)pWnd)->OnMfgKillfocus();
}*/
/*static void _OnMfgKillfocusFnc(CWnd *pWnd){
	((CFAMAttachAccessories *)pWnd)->OnMfgKillfocus();
}*/
static long _OnMfgLoadDataFnc(CWnd *pWnd){
	return ((CFAMAttachAccessories *)pWnd)->OnMfgLoadData();
}
/*static void _OnMfgAddNewFnc(CWnd *pWnd){
	((CFAMAttachAccessories *)pWnd)->OnMfgAddNew();
}*/
/*static void _OnMfg YearChangeFnc(CWnd *pWnd){
	((CFAMAttachAccessories *)pWnd)->OnMfg YearChange();
} */
/*static void _OnMfg YearSetfocusFnc(CWnd *pWnd){
	((CFAMAttachAccessories *)pWnd)->OnMfg YearSetfocus();} */ 
/*static void _OnMfg YearKillfocusFnc(CWnd *pWnd){
	((CFAMAttachAccessories *)pWnd)->OnMfg YearKillfocus();
} */
static int _OnMfgYearCheckValueFnc(CWnd *pWnd){
	return ((CFAMAttachAccessories *)pWnd)->OnMfgYearCheckValue();
} 
/*static void _OnSpeedChangeFnc(CWnd *pWnd){
	((CFAMAttachAccessories *)pWnd)->OnSpeedChange();
} */
/*static void _OnSpeedSetfocusFnc(CWnd *pWnd){
	((CFAMAttachAccessories *)pWnd)->OnSpeedSetfocus();} */ 
/*static void _OnSpeedKillfocusFnc(CWnd *pWnd){
	((CFAMAttachAccessories *)pWnd)->OnSpeedKillfocus();
} */
static int _OnSpeedCheckValueFnc(CWnd *pWnd){
	return ((CFAMAttachAccessories *)pWnd)->OnSpeedCheckValue();
} 
/*static void _OnDataSizeChangeFnc(CWnd *pWnd){
	((CFAMAttachAccessories *)pWnd)->OnDataSizeChange();
} */
/*static void _OnDataSizeSetfocusFnc(CWnd *pWnd){
	((CFAMAttachAccessories *)pWnd)->OnDataSizeSetfocus();} */ 
/*static void _OnDataSizeKillfocusFnc(CWnd *pWnd){
	((CFAMAttachAccessories *)pWnd)->OnDataSizeKillfocus();
} */
static int _OnDataSizeCheckValueFnc(CWnd *pWnd){
	return ((CFAMAttachAccessories *)pWnd)->OnDataSizeCheckValue();
} 
/*static void _OnCapacityChangeFnc(CWnd *pWnd){
	((CFAMAttachAccessories *)pWnd)->OnCapacityChange();
} */
/*static void _OnCapacitySetfocusFnc(CWnd *pWnd){
	((CFAMAttachAccessories *)pWnd)->OnCapacitySetfocus();} */ 
/*static void _OnCapacityKillfocusFnc(CWnd *pWnd){
	((CFAMAttachAccessories *)pWnd)->OnCapacityKillfocus();
} */
static int _OnCapacityCheckValueFnc(CWnd *pWnd){
	return ((CFAMAttachAccessories *)pWnd)->OnCapacityCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CFAMAttachAccessories *pVw = (CFAMAttachAccessories *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CFAMAttachAccessories *pVw = (CFAMAttachAccessories *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CFAMAttachAccessories *pVw = (CFAMAttachAccessories *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddFAMAttachAccessoriesFnc(CWnd *pWnd){
	 return ((CFAMAttachAccessories*)pWnd)->OnAddFAMAttachAccessories();
} 
static int _OnEditFAMAttachAccessoriesFnc(CWnd *pWnd){
	 return ((CFAMAttachAccessories*)pWnd)->OnEditFAMAttachAccessories();
} 
static int _OnDeleteFAMAttachAccessoriesFnc(CWnd *pWnd){
	 return ((CFAMAttachAccessories*)pWnd)->OnDeleteFAMAttachAccessories();
} 
static int _OnSaveFAMAttachAccessoriesFnc(CWnd *pWnd){
	 return ((CFAMAttachAccessories*)pWnd)->OnSaveFAMAttachAccessories();
} 
static int _OnCancelFAMAttachAccessoriesFnc(CWnd *pWnd){
	 return ((CFAMAttachAccessories*)pWnd)->OnCancelFAMAttachAccessories();
} 
CFAMAttachAccessories::CFAMAttachAccessories(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CFAMAttachAccessories::~CFAMAttachAccessories(){
}
void CFAMAttachAccessories::OnCreateComponents(){
	m_wndAccessoriesInformation.Create(this, _T("Accessories Information"), 5, 5, 640, 155);
	m_wndTypeLabel.Create(this, _T("Type"), 10, 30, 90, 55);
	m_wndType.Create(this,95, 30, 215, 55); 
	m_wndNameLabel.Create(this, _T("Name"), 220, 30, 300, 55);
	m_wndName.Create(this,305, 30, 635, 55); 
	m_wndModelLabel.Create(this, _T("Model"), 10, 60, 90, 85);
	m_wndModel.Create(this,95, 60, 215, 85); 
	m_wndSerialLabel.Create(this, _T("Serial"), 220, 60, 300, 85);
	m_wndSerial.Create(this,305, 60, 425, 85); 
	m_wndMfgLabel.Create(this, _T("Mfg"), 10, 90, 90, 115);
	m_wndMfg.Create(this,95, 90, 215, 115); 
	m_wndMfgYearLabel.Create(this, _T("Mfg Year"), 430, 60, 510, 85);
	m_wndMfgYear.Create(this,515, 60, 635, 85); 
	m_wndSpeedLabel.Create(this, _T("Speed"), 220, 90, 300, 115);
	m_wndSpeed.Create(this,305, 90, 425, 115); 
	m_wndDataSizeLabel.Create(this, _T("Data Size"), 430, 90, 510, 115);
	m_wndDataSize.Create(this,515, 90, 635, 115); 
	m_wndCapacityLabel.Create(this, _T("Capacity"), 10, 120, 90, 145);
	m_wndCapacity.Create(this,95, 120, 215, 145); 
	m_wndSave.Create(this, _T("Save"), 390, 160, 470, 185);
	m_wndCancel.Create(this, _T("Cancel"), 475, 160, 555, 185);
	m_wndClose.Create(this, _T("Close"), 560, 160, 640, 185);

}
void CFAMAttachAccessories::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndType.SetCheckValue(true);
	m_wndType.LimitText(35);
	m_wndName.SetLimitText(35);
	m_wndName.SetCheckValue(true);
	m_wndModel.SetLimitText(35);
	//m_wndModel.SetCheckValue(true);
	m_wndSerial.SetLimitText(35);
	//m_wndSerial.SetCheckValue(true);
	//m_wndMfg.SetCheckValue(true);
	m_wndMfg.LimitText(35);
	m_wndMfgYear.SetLimitText(35);
	//m_wndMfgYear.SetCheckValue(true);
	m_wndSpeed.SetLimitText(35);
	//m_wndSpeed.SetCheckValue(true);
	m_wndDataSize.SetLimitText(35);
	//m_wndDataSize.SetCheckValue(true);
	m_wndCapacity.SetLimitText(35);
	//m_wndCapacity.SetCheckValue(true);


	m_wndType.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndType.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndMfg.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndMfg.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_tbl_accessory.SetTableName(_T("fam_attach_accessories"));
	m_tbl_accessory.AddField(_T("faa_assetno"), dfText, 20);
	m_tbl_accessory.AddField(_T("faa_idx"), dfInteger);
	m_tbl_accessory.AddField(_T("faa_name"), dfText, 250);
	m_tbl_accessory.AddField(_T("faa_type"), dfText, 15);
	m_tbl_accessory.AddField(_T("faa_model"), dfText, 35);
	m_tbl_accessory.AddField(_T("faa_serial"), dfText, 35);
	m_tbl_accessory.AddField(_T("faa_mfg"), dfText, 15);
	m_tbl_accessory.AddField(_T("faa_mfgyear"), dfInteger);
	m_tbl_accessory.AddField(_T("faa_speed"), dfText, 15);
	m_tbl_accessory.AddField(_T("faa_datasize"), dfText, 15);
	m_tbl_accessory.AddField(_T("faa_capacity"), dfText, 15);
	m_tbl_accessory.AddField(_T("faa_org_id"), dfText, 5);
	

}
void CFAMAttachAccessories::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndType.SetEvent(WE_SELENDOK, _OnTypeSelendokFnc);
	//m_wndType.SetEvent(WE_SETFOCUS, _OnTypeSetfocusFnc);
	//m_wndType.SetEvent(WE_KILLFOCUS, _OnTypeKillfocusFnc);
	m_wndType.SetEvent(WE_SELCHANGE, _OnTypeSelectChangeFnc);
	m_wndType.SetEvent(WE_LOADDATA, _OnTypeLoadDataFnc);
	//m_wndType.SetEvent(WE_ADDNEW, _OnTypeAddNewFnc);
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	//m_wndModel.SetEvent(WE_CHANGE, _OnModelChangeFnc);
	//m_wndModel.SetEvent(WE_SETFOCUS, _OnModelSetfocusFnc);
	//m_wndModel.SetEvent(WE_KILLFOCUS, _OnModelKillfocusFnc);
	m_wndModel.SetEvent(WE_CHECKVALUE, _OnModelCheckValueFnc);
	//m_wndSerial.SetEvent(WE_CHANGE, _OnSerialChangeFnc);
	//m_wndSerial.SetEvent(WE_SETFOCUS, _OnSerialSetfocusFnc);
	//m_wndSerial.SetEvent(WE_KILLFOCUS, _OnSerialKillfocusFnc);
	m_wndSerial.SetEvent(WE_CHECKVALUE, _OnSerialCheckValueFnc);
	m_wndMfg.SetEvent(WE_SELENDOK, _OnMfgSelendokFnc);
	//m_wndMfg.SetEvent(WE_SETFOCUS, _OnMfgSetfocusFnc);
	//m_wndMfg.SetEvent(WE_KILLFOCUS, _OnMfgKillfocusFnc);
	m_wndMfg.SetEvent(WE_SELCHANGE, _OnMfgSelectChangeFnc);
	m_wndMfg.SetEvent(WE_LOADDATA, _OnMfgLoadDataFnc);
	//m_wndMfg.SetEvent(WE_ADDNEW, _OnMfgAddNewFnc);
	//m_wndMfg Year.SetEvent(WE_CHANGE, _OnMfg YearChangeFnc);
	//m_wndMfg Year.SetEvent(WE_SETFOCUS, _OnMfg YearSetfocusFnc);
	//m_wndMfg Year.SetEvent(WE_KILLFOCUS, _OnMfg YearKillfocusFnc);
	m_wndMfgYear.SetEvent(WE_CHECKVALUE, _OnMfgYearCheckValueFnc);
	//m_wndSpeed.SetEvent(WE_CHANGE, _OnSpeedChangeFnc);
	//m_wndSpeed.SetEvent(WE_SETFOCUS, _OnSpeedSetfocusFnc);
	//m_wndSpeed.SetEvent(WE_KILLFOCUS, _OnSpeedKillfocusFnc);
	m_wndSpeed.SetEvent(WE_CHECKVALUE, _OnSpeedCheckValueFnc);
	//m_wndDataSize.SetEvent(WE_CHANGE, _OnDataSizeChangeFnc);
	//m_wndDataSize.SetEvent(WE_SETFOCUS, _OnDataSizeSetfocusFnc);
	//m_wndDataSize.SetEvent(WE_KILLFOCUS, _OnDataSizeKillfocusFnc);
	m_wndDataSize.SetEvent(WE_CHECKVALUE, _OnDataSizeCheckValueFnc);
	//m_wndCapacity.SetEvent(WE_CHANGE, _OnCapacityChangeFnc);
	//m_wndCapacity.SetEvent(WE_SETFOCUS, _OnCapacitySetfocusFnc);
	//m_wndCapacity.SetEvent(WE_KILLFOCUS, _OnCapacityKillfocusFnc);
	m_wndCapacity.SetEvent(WE_CHECKVALUE, _OnCapacityCheckValueFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	
	if(GetMode() == VM_EDIT)
		GetDataToScreen();

}
void CFAMAttachAccessories::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndType.GetDlgCtrlID(), m_szTypeKey);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_Text(pDX, m_wndModel.GetDlgCtrlID(), m_szModel);
	DDX_Text(pDX, m_wndSerial.GetDlgCtrlID(), m_szSerial);
	DDX_TextEx(pDX, m_wndMfg.GetDlgCtrlID(), m_szMfgKey);
	DDX_Text(pDX, m_wndMfgYear.GetDlgCtrlID(), m_szMfgYear);
	DDX_Text(pDX, m_wndSpeed.GetDlgCtrlID(), m_szSpeed);
	DDX_Text(pDX, m_wndDataSize.GetDlgCtrlID(), m_szDataSize);
	DDX_Text(pDX, m_wndCapacity.GetDlgCtrlID(), m_szCapacity);

}
void CFAMAttachAccessories::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM fam_attach_accessories WHERE faa_assetno = '%s' and faa_idx = %d"), m_szAssetNo, m_nIdx);
	_fmsg(_T("%s"), szSQL);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("faa_type"), m_szTypeKey);
		rs.GetValue(_T("faa_name"), m_szName);
		rs.GetValue(_T("faa_model"), m_szModel);
		rs.GetValue(_T("faa_serial"), m_szSerial);
		rs.GetValue(_T("faa_mfg"), m_szMfgKey);
		rs.GetValue(_T("faa_mfgyear"), m_szMfgYear);
		rs.GetValue(_T("faa_speed"), m_szSpeed);
		rs.GetValue(_T("faa_datasize"), m_szDataSize);
		rs.GetValue(_T("faa_capacity"), m_szCapacity);

		UpdateData(FALSE);
	}

}
void CFAMAttachAccessories::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	int nIndex;
	if(GetMode() == VM_ADD)
	{
		
		szSQL.Format(_T("SELECT coalesce(max(faa_idx), 0)+1 FROM fam_attach_accessories WHERE faa_assetno='%s' AND faa_org_id = '%s'"), m_szAssetNo, pMF->GetModuleID());
		rs.ExecSQL(szSQL);
		nIndex = rs.GetIntValue();
	}
	m_tbl_accessory.SetValue(_T("faa_assetno"), m_szAssetNo);
	m_tbl_accessory.SetValue(_T("faa_idx"), nIndex);
	m_tbl_accessory.SetValue(_T("faa_type"), m_szTypeKey);
	m_tbl_accessory.SetValue(_T("faa_model"), m_szModel);
	m_tbl_accessory.SetValue(_T("faa_serial"), m_szSerial);
	m_tbl_accessory.SetValue(_T("faa_mfg"), m_szMfgKey);
	m_tbl_accessory.SetValue(_T("faa_mfgyear"), m_szMfgYear);
	m_tbl_accessory.SetValue(_T("faa_speed"), m_szSpeed);
	m_tbl_accessory.SetValue(_T("faa_datasize"), m_szDataSize);
	m_tbl_accessory.SetValue(_T("faa_capacity"), m_szCapacity);
	m_tbl_accessory.SetValue(_T("faa_org_id"), pMF->GetModuleID());
	m_tbl_accessory.SetValue(_T("faa_name"), m_szName);
}
void CFAMAttachAccessories::SetDefaultValues(){

	m_szTypeKey.Empty();
	m_szName.Empty();
	m_szModel.Empty();
	m_szSerial.Empty();
	m_szMfgKey.Empty();
	m_szMfgYear.Empty();
	m_szSpeed.Empty();
	m_szDataSize.Empty();
	m_szCapacity.Empty();

}
int CFAMAttachAccessories::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, 2, -1);
 			SetDefaultValues();
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, 2, -1);
 			break;
 		case VM_VIEW: 
 			EnableControls(FALSE);
 			EnableButtons(FALSE, 0, 1, -1);
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
void CFAMAttachAccessories::OnTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAMAttachAccessories::OnTypeSelendok(){
	 
}
/*void CFAMAttachAccessories::OnTypeSetfocus(){
	
}*/
/*void CFAMAttachAccessories::OnTypeKillfocus(){
	
}*/
long CFAMAttachAccessories::OnTypeLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(!m_szTypeKey.IsEmpty()){
		szWhere.Format(_T(" and ss_code='%s' "), m_szTypeKey);
	}
	m_wndType.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ss_id = 'its_acc_type' %s ORDER BY ss_code "), szWhere);
	_fmsg(_T("%s"), szSQL);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndType.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CFAMAttachAccessories::OnTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CFAMAttachAccessories::OnNameChange(){
	
} */
/*void CFAMAttachAccessories::OnNameSetfocus(){
	
} */
/*void CFAMAttachAccessories::OnNameKillfocus(){
	
} */
int CFAMAttachAccessories::OnNameCheckValue(){
	return 0;
} 
/*void CFAMAttachAccessories::OnModelChange(){
	
} */
/*void CFAMAttachAccessories::OnModelSetfocus(){
	
} */
/*void CFAMAttachAccessories::OnModelKillfocus(){
	
} */
int CFAMAttachAccessories::OnModelCheckValue(){
	return 0;
} 
/*void CFAMAttachAccessories::OnSerialChange(){
	
} */
/*void CFAMAttachAccessories::OnSerialSetfocus(){
	
} */
/*void CFAMAttachAccessories::OnSerialKillfocus(){
	
} */
int CFAMAttachAccessories::OnSerialCheckValue(){
	return 0;
} 
void CFAMAttachAccessories::OnMfgSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAMAttachAccessories::OnMfgSelendok(){
	 
}
/*void CFAMAttachAccessories::OnMfgSetfocus(){
	
}*/
/*void CFAMAttachAccessories::OnMfgKillfocus(){
	
}*/
long CFAMAttachAccessories::OnMfgLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndMfg.IsSearchKey() && !m_szMfgKey.IsEmpty()){
		szWhere.Format(_T(" and ss_code='%s' "), m_szMfgKey);
	}
	m_wndMfg.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ss_id = 'its_mfg' %s ORDER BY ss_code "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndMfg.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CFAMAttachAccessories::OnMfgAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CFAMAttachAccessories::OnMfg YearChange(){
	
} */
/*void CFAMAttachAccessories::OnMfg YearSetfocus(){
	
} */
/*void CFAMAttachAccessories::OnMfg YearKillfocus(){
	
} */
int CFAMAttachAccessories::OnMfgYearCheckValue(){
	return 0;
} 
/*void CFAMAttachAccessories::OnSpeedChange(){
	
} */
/*void CFAMAttachAccessories::OnSpeedSetfocus(){
	
} */
/*void CFAMAttachAccessories::OnSpeedKillfocus(){
	
} */
int CFAMAttachAccessories::OnSpeedCheckValue(){
	return 0;
} 
/*void CFAMAttachAccessories::OnDataSizeChange(){
	
} */
/*void CFAMAttachAccessories::OnDataSizeSetfocus(){
	
} */
/*void CFAMAttachAccessories::OnDataSizeKillfocus(){
	
} */
int CFAMAttachAccessories::OnDataSizeCheckValue(){
	return 0;
} 
/*void CFAMAttachAccessories::OnCapacityChange(){
	
} */
/*void CFAMAttachAccessories::OnCapacitySetfocus(){
	
} */
/*void CFAMAttachAccessories::OnCapacityKillfocus(){
	
} */
int CFAMAttachAccessories::OnCapacityCheckValue(){
	return 0;
} 
void CFAMAttachAccessories::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveFAMAttachAccessories();
} 
void CFAMAttachAccessories::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancelFAMAttachAccessories();
} 
void CFAMAttachAccessories::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();
} 
int CFAMAttachAccessories::OnAddFAMAttachAccessories(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CFAMAttachAccessories::OnEditFAMAttachAccessories(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CFAMAttachAccessories::OnDeleteFAMAttachAccessories(){
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
 		OnCancelFAMAttachAccessories();
 	}
	return 0;
}
int CFAMAttachAccessories::OnSaveFAMAttachAccessories(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
 		szSQL = m_tbl_accessory.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
		szWhere.Format(_T(" WHERE faa_assetno = '%s' AND faa_idx = %d"), m_szAssetNo, m_nIdx);
 		szSQL = m_tbl_accessory.GetUpdateSQL(_T("faa_assetno, faa_idx, faa_org_id"));
 		szSQL += szWhere;
 	}
 _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
 		//OnFAMAttachAccessoriesListLoadData();
		((CFAMAssetDlg *)m_pWnd)->OnListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CFAMAttachAccessories::OnCancelFAMAttachAccessories(){
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
int CFAMAttachAccessories::OnFAMAttachAccessoriesListLoadData(){
	return 0;
}
