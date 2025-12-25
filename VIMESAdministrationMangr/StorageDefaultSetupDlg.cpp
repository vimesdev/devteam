#include "StorageDefaultSetupDlg.h"
#include "MainFrm.h"
static void _OnStorageSearchIDSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CStorageDefaultSetupDlg* )pWnd)->OnStorageSearchIDSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStorageSearchIDSelendokFnc(CWnd *pWnd){
	((CStorageDefaultSetupDlg *)pWnd)->OnStorageSearchIDSelendok();
}
/*static void _OnStorageSearchIDSetfocusFnc(CWnd *pWnd){
	((CStorageDefaultSetupDlg *)pWnd)->OnStorageSearchIDKillfocus();
}*/
/*static void _OnStorageSearchIDKillfocusFnc(CWnd *pWnd){
	((CStorageDefaultSetupDlg *)pWnd)->OnStorageSearchIDKillfocus();
}*/
static long _OnStorageSearchIDLoadDataFnc(CWnd *pWnd){
	return ((CStorageDefaultSetupDlg *)pWnd)->OnStorageSearchIDLoadData();
}
/*static void _OnStorageSearchIDAddNewFnc(CWnd *pWnd){
	((CStorageDefaultSetupDlg *)pWnd)->OnStorageSearchIDAddNew();
}*/
static void _OnSDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CStorageDefaultSetupDlg* )pWnd)->OnSDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSDepartmentSelendokFnc(CWnd *pWnd){
	((CStorageDefaultSetupDlg *)pWnd)->OnSDepartmentSelendok();
}
/*static void _OnSDepartmentSetfocusFnc(CWnd *pWnd){
	((CStorageDefaultSetupDlg *)pWnd)->OnSDepartmentKillfocus();
}*/
/*static void _OnSDepartmentKillfocusFnc(CWnd *pWnd){
	((CStorageDefaultSetupDlg *)pWnd)->OnSDepartmentKillfocus();
}*/
static long _OnSDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CStorageDefaultSetupDlg *)pWnd)->OnSDepartmentLoadData();
}
/*static void _OnSDepartmentAddNewFnc(CWnd *pWnd){
	((CStorageDefaultSetupDlg *)pWnd)->OnSDepartmentAddNew();
}*/
static void _OnSObjectSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CStorageDefaultSetupDlg* )pWnd)->OnSObjectSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSObjectSelendokFnc(CWnd *pWnd){
	((CStorageDefaultSetupDlg *)pWnd)->OnSObjectSelendok();
}
/*static void _OnSObjectSetfocusFnc(CWnd *pWnd){
	((CStorageDefaultSetupDlg *)pWnd)->OnSObjectKillfocus();
}*/
/*static void _OnSObjectKillfocusFnc(CWnd *pWnd){
	((CStorageDefaultSetupDlg *)pWnd)->OnSObjectKillfocus();
}*/
static long _OnSObjectLoadDataFnc(CWnd *pWnd){
	return ((CStorageDefaultSetupDlg *)pWnd)->OnSObjectLoadData();
}
/*static void _OnSObjectAddNewFnc(CWnd *pWnd){
	((CStorageDefaultSetupDlg *)pWnd)->OnSObjectAddNew();
}*/
static void _OnSearchSelectFnc(CWnd *pWnd){
	CStorageDefaultSetupDlg *pVw = (CStorageDefaultSetupDlg *)pWnd;
	pVw->OnSearchSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CStorageDefaultSetupDlg*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CStorageDefaultSetupDlg*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CStorageDefaultSetupDlg*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CStorageDefaultSetupDlg*)pWnd)->OnListDeleteItem();
} 
static void _OnStorageIDSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CStorageDefaultSetupDlg* )pWnd)->OnStorageIDSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStorageIDSelendokFnc(CWnd *pWnd){
	((CStorageDefaultSetupDlg *)pWnd)->OnStorageIDSelendok();
}
/*static void _OnStorageIDSetfocusFnc(CWnd *pWnd){
	((CStorageDefaultSetupDlg *)pWnd)->OnStorageIDKillfocus();
}*/
/*static void _OnStorageIDKillfocusFnc(CWnd *pWnd){
	((CStorageDefaultSetupDlg *)pWnd)->OnStorageIDKillfocus();
}*/
static long _OnStorageIDLoadDataFnc(CWnd *pWnd){
	return ((CStorageDefaultSetupDlg *)pWnd)->OnStorageIDLoadData();
}
/*static void _OnStorageIDAddNewFnc(CWnd *pWnd){
	((CStorageDefaultSetupDlg *)pWnd)->OnStorageIDAddNew();
}*/
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CStorageDefaultSetupDlg* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CStorageDefaultSetupDlg *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CStorageDefaultSetupDlg *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CStorageDefaultSetupDlg *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CStorageDefaultSetupDlg *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CStorageDefaultSetupDlg *)pWnd)->OnDepartmentAddNew();
}*/
static void _OnObjectSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CStorageDefaultSetupDlg* )pWnd)->OnObjectSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnObjectSelendokFnc(CWnd *pWnd){
	((CStorageDefaultSetupDlg *)pWnd)->OnObjectSelendok();
}
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CStorageDefaultSetupDlg *)pWnd)->OnObjectKillfocus();
}*/
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CStorageDefaultSetupDlg *)pWnd)->OnObjectKillfocus();
}*/
static long _OnObjectLoadDataFnc(CWnd *pWnd){
	return ((CStorageDefaultSetupDlg *)pWnd)->OnObjectLoadData();
}
/*static void _OnObjectAddNewFnc(CWnd *pWnd){
	((CStorageDefaultSetupDlg *)pWnd)->OnObjectAddNew();
}*/
/*static void _OnPrintTypeChangeFnc(CWnd *pWnd){
	((CStorageDefaultSetupDlg *)pWnd)->OnPrintTypeChange();
} */
/*static void _OnPrintTypeSetfocusFnc(CWnd *pWnd){
	((CStorageDefaultSetupDlg *)pWnd)->OnPrintTypeSetfocus();} */ 
/*static void _OnPrintTypeKillfocusFnc(CWnd *pWnd){
	((CStorageDefaultSetupDlg *)pWnd)->OnPrintTypeKillfocus();
} */
static int _OnPrintTypeCheckValueFnc(CWnd *pWnd){
	return ((CStorageDefaultSetupDlg *)pWnd)->OnPrintTypeCheckValue();
} 
/*static void _OnDefaultChangeFnc(CWnd *pWnd){
	((CStorageDefaultSetupDlg *)pWnd)->OnDefaultChange();
} */
/*static void _OnDefaultSetfocusFnc(CWnd *pWnd){
	((CStorageDefaultSetupDlg *)pWnd)->OnDefaultSetfocus();} */ 
/*static void _OnDefaultKillfocusFnc(CWnd *pWnd){
	((CStorageDefaultSetupDlg *)pWnd)->OnDefaultKillfocus();
} */
static int _OnDefaultCheckValueFnc(CWnd *pWnd){
	return ((CStorageDefaultSetupDlg *)pWnd)->OnDefaultCheckValue();
} 
/*static void _OnZoneChangeFnc(CWnd *pWnd){
	((CStorageDefaultSetupDlg *)pWnd)->OnZoneChange();
} */
/*static void _OnZoneSetfocusFnc(CWnd *pWnd){
	((CStorageDefaultSetupDlg *)pWnd)->OnZoneSetfocus();} */ 
/*static void _OnZoneKillfocusFnc(CWnd *pWnd){
	((CStorageDefaultSetupDlg *)pWnd)->OnZoneKillfocus();
} */
static int _OnZoneCheckValueFnc(CWnd *pWnd){
	return ((CStorageDefaultSetupDlg *)pWnd)->OnZoneCheckValue();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CStorageDefaultSetupDlg *pVw = (CStorageDefaultSetupDlg *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CStorageDefaultSetupDlg *pVw = (CStorageDefaultSetupDlg *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CStorageDefaultSetupDlg *pVw = (CStorageDefaultSetupDlg *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CStorageDefaultSetupDlg *pVw = (CStorageDefaultSetupDlg *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CStorageDefaultSetupDlg *pVw = (CStorageDefaultSetupDlg *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CStorageDefaultSetupDlg *pVw = (CStorageDefaultSetupDlg *)pWnd;
	pVw->OnCloseSelect();
} 
static void _OnInPatientSelectFnc(CWnd *pWnd){
	 ((CStorageDefaultSetupDlg*)pWnd)->OnInPatientSelect();
}
static int _OnAddStorageDefaultSetupDlgFnc(CWnd *pWnd){
	 return ((CStorageDefaultSetupDlg*)pWnd)->OnAddStorageDefaultSetupDlg();
} 
static int _OnEditStorageDefaultSetupDlgFnc(CWnd *pWnd){
	 return ((CStorageDefaultSetupDlg*)pWnd)->OnEditStorageDefaultSetupDlg();
} 
static int _OnDeleteStorageDefaultSetupDlgFnc(CWnd *pWnd){
	 return ((CStorageDefaultSetupDlg*)pWnd)->OnDeleteStorageDefaultSetupDlg();
} 
static int _OnSaveStorageDefaultSetupDlgFnc(CWnd *pWnd){
	 return ((CStorageDefaultSetupDlg*)pWnd)->OnSaveStorageDefaultSetupDlg();
} 
static int _OnCancelStorageDefaultSetupDlgFnc(CWnd *pWnd){
	 return ((CStorageDefaultSetupDlg*)pWnd)->OnCancelStorageDefaultSetupDlg();
}
static int _OnSaveStorageDefaultFnc(CWnd *pWnd){
	 return ((CStorageDefaultSetupDlg*)pWnd)->OnSaveStorageDefault();
}

CStorageDefaultSetupDlg::CStorageDefaultSetupDlg(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CStorageDefaultSetupDlg::~CStorageDefaultSetupDlg(){
}
void CStorageDefaultSetupDlg::OnCreateComponents(){
	m_wndInformation.Create(this, _T("Information"), 5, 5, 805, 570);
	m_wndListInfo.Create(this, _T("Infor List"), 10, 60, 800, 475);
	m_wndStorageSearchIDLabel.Create(this, _T("Storage ID"), 10, 30, 90, 55);
	m_wndStorageSearchID.Create(this,95, 30, 215, 55); 
	m_wndSDepartmentLabel.Create(this, _T("Department"), 220, 30, 325, 55);
	m_wndSDepartment.Create(this,330, 30, 505, 55); 
	m_wndSObjectLabel.Create(this, _T("Object"), 510, 30, 615, 55);
	m_wndSObject.Create(this,620, 30, 760, 55); 
	m_wndSearch.Create(this, _T("@"), 765, 30, 800, 55);
	m_wndList.Create(this,15, 85, 795, 470); 
	m_wndStorageIDLabel.Create(this, _T("Storage ID"), 10, 480, 115, 505);
	m_wndStorageID.Create(this,120, 480, 400, 505); 
	m_wndDepartmentLabel.Create(this, _T("Department"), 405, 480, 510, 505);
	m_wndDepartment.Create(this,515, 480, 800, 505); 
	m_wndObjectLabel.Create(this, _T("Object"), 10, 510, 115, 535);
	m_wndObject.Create(this,120, 510, 400, 535); 
	m_wndPrintTypeLabel.Create(this, _T("Print Type"), 405, 510, 510, 535);
	m_wndPrintType.Create(this,515, 510, 555, 535); 
	m_wndDefaultLabel.Create(this, _T("Default"), 560, 510, 630, 535);
	m_wndDefault.Create(this,635, 510, 675, 535); 
	m_wndZoneLabel.Create(this, _T("Zone"), 680, 510, 750, 535);
	m_wndZone.Create(this,755, 510, 800, 535); 
	m_wndAdd.Create(this, _T("Add"), 295, 540, 375, 565);
	m_wndEdit.Create(this, _T("Edit"), 380, 540, 460, 565);
	m_wndDelete.Create(this, _T("Delete"), 465, 540, 545, 565);
	m_wndSave.Create(this, _T("Save"), 550, 540, 630, 565);
	m_wndCancel.Create(this, _T("Cancel"), 635, 540, 715, 565);
	m_wndClose.Create(this, _T("Close"), 720, 540, 800, 565);
	m_wndInPatient.Create(this, _T("InPatient, stock"), 10, 540, 130, 565);
}
void CStorageDefaultSetupDlg::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
	m_wndStorageID.SetCheckValue(true);
	m_wndStorageID.LimitText(35);
	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(35);
	m_wndObject.SetCheckValue(true);
	m_wndObject.LimitText(35);
	m_wndPrintType.SetLimitText(35);
	//m_wndPrintType.SetCheckValue(true);
	m_wndDefault.SetLimitText(1);
	m_wndZone.SetLimitText(1);
	//m_wndDefault.SetCheckValue(true);

	m_wndStorageID.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndStorageID.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndSDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndSDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndSObject.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndSObject.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);	

	m_wndStorageSearchID.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndStorageSearchID.InsertColumn(1, _T("Name"), CFMT_TEXT, 450);

	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndObject.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndObject.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndList.InsertColumn(0, _T("Storage ID"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(1, _T("Department"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(2, _T("Object"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(3, _T("Print Type"), CFMT_TEXT | CFMT_CENTER, 100);
	m_wndList.InsertColumn(4, _T("Default"), CFMT_TEXT | CFMT_CENTER, 80);
	m_wndList.InsertColumn(5, _T("Zone"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(6, _T("Active"), CFMT_TEXT, 100);
	m_wndList.SetEditLabel(6, GUI_TEXTCTRL);

	

	m_tblTbl.SetTableName(m_szTableName);
	m_tblTbl.AddField(_T("msd_storage_id"), dfInteger);
	m_tblTbl.AddField(_T("msd_department_id"), dfText, 7);
	m_tblTbl.AddField(_T("msd_object_id"), dfInteger);
	m_tblTbl.AddField(_T("msd_printtype"), dfInteger);
	m_tblTbl.AddField(_T("msd_default"), dfText, 1);
	m_tblTbl.AddField(_T("msd_zone"), dfText, 1);

	/*
	CString szSQL;
	szSQL.Format(_T("ALTER TABLE M_STORAGE_DEFAULT ADD (msd_zone NVARCHAR2(1) )"));
	pMF->ExecSQL(szSQL);

	szSQL.Format(_T("update m_storage_default set msd_zone='I' where msd_department_id not in('C1.1','C1.2','C1.3','TYC')"));
	pMF->ExecSQL(szSQL);

	szSQL.Format(_T("update m_storage_default set msd_zone='E' where msd_department_id in('C1.1','C1.2','C1.3','TYC')"));
	pMF->ExecSQL(szSQL);


	szSQL.Format(_T("ALTER TABLE M_STORAGE_DEFAULT DROP CONSTRAINT SYS_C0049259"));
	pMF->ExecSQL(szSQL);
	
	szSQL.Format(_T("ALTER TABLE M_STORAGE_DEFAULT MODIFY (MSD_DEPARTMENT_ID NOT NULL)"));
	pMF->ExecSQL(szSQL);

	szSQL.Format(_T("ALTER TABLE M_STORAGE_DEFAULT ADD CONSTRAINT M_STORAGE_DEFAULT_PKEY PRIMARY KEY ( MSD_STORAGE_ID , MSD_OBJECT_ID , MSD_DEPARTMENT_ID ) ENABLE"));
	pMF->ExecSQL(szSQL);
*/

}
void CStorageDefaultSetupDlg::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndStorageSearchID.SetEvent(WE_SELENDOK, _OnStorageSearchIDSelendokFnc);
	//m_wndStorageSearchID.SetEvent(WE_SETFOCUS, _OnStorageSearchIDSetfocusFnc);
	//m_wndStorageSearchID.SetEvent(WE_KILLFOCUS, _OnStorageSearchIDKillfocusFnc);
	m_wndStorageSearchID.SetEvent(WE_SELCHANGE, _OnStorageSearchIDSelectChangeFnc);
	m_wndStorageSearchID.SetEvent(WE_LOADDATA, _OnStorageSearchIDLoadDataFnc);
	//m_wndStorageSearchID.SetEvent(WE_ADDNEW, _OnStorageSearchIDAddNewFnc);
	m_wndSDepartment.SetEvent(WE_SELENDOK, _OnSDepartmentSelendokFnc);
	//m_wndSDepartment.SetEvent(WE_SETFOCUS, _OnSDepartmentSetfocusFnc);
	//m_wndSDepartment.SetEvent(WE_KILLFOCUS, _OnSDepartmentKillfocusFnc);
	m_wndSDepartment.SetEvent(WE_SELCHANGE, _OnSDepartmentSelectChangeFnc);
	m_wndSDepartment.SetEvent(WE_LOADDATA, _OnSDepartmentLoadDataFnc);
	//m_wndSDepartment.SetEvent(WE_ADDNEW, _OnSDepartmentAddNewFnc);
	m_wndSObject.SetEvent(WE_SELENDOK, _OnSObjectSelendokFnc);
	//m_wndSObject.SetEvent(WE_SETFOCUS, _OnSObjectSetfocusFnc);
	//m_wndSObject.SetEvent(WE_KILLFOCUS, _OnSObjectKillfocusFnc);
	m_wndSObject.SetEvent(WE_SELCHANGE, _OnSObjectSelectChangeFnc);
	m_wndSObject.SetEvent(WE_LOADDATA, _OnSObjectLoadDataFnc);
	//m_wndSObject.SetEvent(WE_ADDNEW, _OnSObjectAddNewFnc);
	m_wndSearch.SetEvent(WE_CLICK, _OnSearchSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndList.AddEvent(2, _T("Luu thông tin"), _OnSaveStorageDefaultFnc);
	m_wndStorageID.SetEvent(WE_SELENDOK, _OnStorageIDSelendokFnc);
	//m_wndStorageID.SetEvent(WE_SETFOCUS, _OnStorageIDSetfocusFnc);
	//m_wndStorageID.SetEvent(WE_KILLFOCUS, _OnStorageIDKillfocusFnc);
	m_wndStorageID.SetEvent(WE_SELCHANGE, _OnStorageIDSelectChangeFnc);
	m_wndStorageID.SetEvent(WE_LOADDATA, _OnStorageIDLoadDataFnc);
	//m_wndStorageID.SetEvent(WE_ADDNEW, _OnStorageIDAddNewFnc);
	m_wndDepartment.SetEvent(WE_SELENDOK, _OnDepartmentSelendokFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	//m_wndDepartment.SetEvent(WE_ADDNEW, _OnDepartmentAddNewFnc);
	m_wndObject.SetEvent(WE_SELENDOK, _OnObjectSelendokFnc);
	//m_wndObject.SetEvent(WE_SETFOCUS, _OnObjectSetfocusFnc);
	//m_wndObject.SetEvent(WE_KILLFOCUS, _OnObjectKillfocusFnc);
	m_wndObject.SetEvent(WE_SELCHANGE, _OnObjectSelectChangeFnc);
	m_wndObject.SetEvent(WE_LOADDATA, _OnObjectLoadDataFnc);
	//m_wndObject.SetEvent(WE_ADDNEW, _OnObjectAddNewFnc);
	//m_wndPrintType.SetEvent(WE_CHANGE, _OnPrintTypeChangeFnc);
	//m_wndPrintType.SetEvent(WE_SETFOCUS, _OnPrintTypeSetfocusFnc);
	//m_wndPrintType.SetEvent(WE_KILLFOCUS, _OnPrintTypeKillfocusFnc);
	m_wndPrintType.SetEvent(WE_CHECKVALUE, _OnPrintTypeCheckValueFnc);
	//m_wndDefault.SetEvent(WE_CHANGE, _OnDefaultChangeFnc);
	//m_wndDefault.SetEvent(WE_SETFOCUS, _OnDefaultSetfocusFnc);
	//m_wndDefault.SetEvent(WE_KILLFOCUS, _OnDefaultKillfocusFnc);
	m_wndDefault.SetEvent(WE_CHECKVALUE, _OnDefaultCheckValueFnc);
	
	//m_wndZone.SetEvent(WE_CHANGE, _OnZoneChangeFnc);
	//m_wndZone.SetEvent(WE_SETFOCUS, _OnZoneSetfocusFnc);
	//m_wndZone.SetEvent(WE_KILLFOCUS, _OnZoneKillfocusFnc);
	m_wndZone.SetEvent(WE_CHECKVALUE, _OnZoneCheckValueFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndInPatient.SetEvent(WE_CLICK, _OnInPatientSelectFnc);
	if(m_bInPatient)
		m_szTableName.Format(_T("m_storage_default"));
	else
		m_szTableName.Format(_T("m_storage_default_ex"));
	_fmsg(_T("%s"), m_szTableName);
	OnListLoadData();

}
void CStorageDefaultSetupDlg::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndStorageSearchID.GetDlgCtrlID(), m_szStorageSearchIDKey);
	DDX_TextEx(pDX, m_wndSDepartment.GetDlgCtrlID(), m_szSDepartmentKey);
	DDX_TextEx(pDX, m_wndSObject.GetDlgCtrlID(), m_szSObjectKey);
	DDX_TextEx(pDX, m_wndStorageID.GetDlgCtrlID(), m_szStorageIDKey);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_TextEx(pDX, m_wndObject.GetDlgCtrlID(), m_szObjectKey);
	DDX_Text(pDX, m_wndPrintType.GetDlgCtrlID(), m_nPrintType);
	DDX_Text(pDX, m_wndDefault.GetDlgCtrlID(), m_szDefault);
	DDX_Text(pDX, m_wndZone.GetDlgCtrlID(), m_szZone);
	DDX_Check(pDX, m_wndInPatient.GetDlgCtrlID(), m_bInPatient);

}
void CStorageDefaultSetupDlg::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("SDepartment")] =  m_szSDepartmentKey;
	m_jData[_T("SObject")] =  m_szSObjectKey;
	m_jData[_T("StorageID")] =  m_szStorageIDKey;
	m_jData[_T("Department")] =  m_szDepartmentKey;
	m_jData[_T("Object")] =  m_szObjectKey;
	m_jData[_T("PrintType")] =  m_szPrintType;
	m_jData[_T("Default")] =  m_szDefault;
	}
	else
	{
			
	m_jData[_T("SDepartment")].GetValue(m_szSDepartmentKey);
	m_jData[_T("SObject")].GetValue(m_szSObjectKey);
	m_jData[_T("StorageID")].GetValue(m_szStorageIDKey);
	m_jData[_T("Department")].GetValue(m_szDepartmentKey);
	m_jData[_T("Object")].GetValue(m_szObjectKey);
	m_jData[_T("PrintType")].GetValue(m_szPrintType);
	m_jData[_T("Default")].GetValue(m_szDefault);
	}

}
void CStorageDefaultSetupDlg::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM %s WHERE msd_storage_id = %s AND msd_department_id = '%s' AND msd_object_id = %s "), m_szTableName,m_szCurStorageID,m_szCurDept, m_szCurObj);
	
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("msd_storage_id"), m_szStorageIDKey);
		rs.GetValue(_T("msd_department_id"), m_szDepartmentKey);
		rs.GetValue(_T("msd_object_id"), m_szObjectKey);
		rs.GetValue(_T("msd_printtype"), m_nPrintType);
		rs.GetValue(_T("msd_default"), m_szDefault);
		rs.GetValue(_T("msd_zone"), m_szZone);
		SetMode(VM_VIEW);
	}else
		SetMode(VM_NONE);

}
void CStorageDefaultSetupDlg::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_tblTbl.SetValue(_T("msd_storage_id"), m_szStorageIDKey);
	m_tblTbl.SetValue(_T("msd_department_id"), m_szDepartmentKey);
	m_tblTbl.SetValue(_T("msd_object_id"), m_szObjectKey);
	m_tblTbl.SetValue(_T("msd_printtype"), m_nPrintType);
	m_tblTbl.SetValue(_T("msd_default"), m_szDefault);
	m_tblTbl.SetValue(_T("msd_zone"), m_szZone);
}
void CStorageDefaultSetupDlg::SetDefaultValues(){

	m_szSDepartmentKey.Empty();
	m_szSObjectKey.Empty();
	m_szStorageIDKey.Empty();
	m_szDepartmentKey.Empty();
	m_szObjectKey.Empty();
	m_szPrintType.Empty();
	m_szDefault.Empty();
	m_nPrintType = 0;
	m_szZone.Empty();
	m_szStorageSearchIDKey.Empty();
	m_bInPatient=FALSE;

}
int CStorageDefaultSetupDlg::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 4, 5,-1);
 			SetDefaultValues();
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
			m_wndStorageID.EnableWindow(FALSE);
			m_wndDepartment.EnableWindow(FALSE);
			m_wndObject.EnableWindow(FALSE);
 			EnableButtons(TRUE, 4, 5,-1);
 			break;
 		case VM_VIEW: 
 			EnableControls(FALSE);
			m_wndStorageSearchID.EnableWindow(TRUE);
			m_wndSDepartment.EnableWindow(TRUE);
			m_wndSObject.EnableWindow(TRUE);
 			EnableButtons(FALSE, 3, 4, 5,-1);
 			break;
 		case VM_NONE: 
 			EnableControls(FALSE);
 			EnableButtons(TRUE, 0, 5, -1);
 			SetDefaultValues();
 			break;
 		};
		m_wndSearch.EnableWindow(true);
 		UpdateData(FALSE);
 		return nOldMode;
}
void CStorageDefaultSetupDlg::OnStorageSearchIDSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CStorageDefaultSetupDlg::OnStorageSearchIDSelendok(){
	 
}
/*void CStorageDefaultSetupDlg::OnStorageSearchIDSetfocus(){
	
}*/
/*void CStorageDefaultSetupDlg::OnStorageSearchIDKillfocus(){
	
}*/
long CStorageDefaultSetupDlg::OnStorageSearchIDLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndStorageSearchID.IsSearchKey() && !m_szStorageSearchIDKey.IsEmpty()){
	 szWhere.Format(_T(" and msl_storage_id='%s' "), m_szStorageSearchIDKey);
	}
	m_wndStorageSearchID.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT msl_storage_id as id, msl_name as name FROM m_storagelist WHERE 1=1 and MSL_ISACTIVE='Y' %s ORDER BY msl_storage_id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
	while(!rs.IsEOF())
	{ 
		m_wndStorageSearchID.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CStorageDefaultSetupDlg::OnStorageSearchIDAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CStorageDefaultSetupDlg::OnSDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CStorageDefaultSetupDlg::OnSDepartmentSelendok(){
	 
}
/*void CStorageDefaultSetupDlg::OnSDepartmentSetfocus(){
	
}*/
/*void CStorageDefaultSetupDlg::OnSDepartmentKillfocus(){
	
}*/
long CStorageDefaultSetupDlg::OnSDepartmentLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndSDepartment.IsSearchKey() && !m_szSDepartmentKey.IsEmpty()){
	 szWhere.Format(_T(" and sd_id='%s' "), m_szSDepartmentKey);
	}
	m_wndSDepartment.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT sd_id as id, sd_name as name FROM sys_dept WHERE 1=1 %s ORDER BY sd_id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndSDepartment.AddItems(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CStorageDefaultSetupDlg::OnSDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CStorageDefaultSetupDlg::OnSObjectSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CStorageDefaultSetupDlg::OnSObjectSelendok(){
	 
}
/*void CStorageDefaultSetupDlg::OnSObjectSetfocus(){
	
}*/
/*void CStorageDefaultSetupDlg::OnSObjectKillfocus(){
	
}*/
long CStorageDefaultSetupDlg::OnSObjectLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndSObject.IsSearchKey() && !m_szSObjectKey.IsEmpty()){
	 szWhere.Format(_T(" and ho_id='%s' "), m_szSObjectKey);
}
	m_wndSObject.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ho_id as id, ho_desc as name FROM hms_object WHERE 1=1 %s ORDER BY ho_id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndSObject.AddItems(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CStorageDefaultSetupDlg::OnSObjectAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CStorageDefaultSetupDlg::OnSearchSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnListLoadData();
} 
void CStorageDefaultSetupDlg::OnListDblClick(){
	
} 
void CStorageDefaultSetupDlg::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_szCurStorageID = m_wndList.GetItemText(nNewItem, 0);
	m_szCurDept = m_wndList.GetItemText(nNewItem, 1);
	m_szCurObj = m_wndList.GetItemText(nNewItem, 2);
	GetDataToScreen();
} 
int CStorageDefaultSetupDlg::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
    CString szSQL, szEvent, szDescr;
	szSQL.Format(_T("DELETE FROM %s WHERE msd_storage_id = %s AND msd_department_id = '%s' AND msd_object_id = %s"), m_szTableName,m_szStorageIDKey, m_szDepartmentKey, m_szObjectKey );
 	int ret = pMF->ExecSQL(szSQL);
	if(ret > 0)
	{
        szEvent = _T("delete_stock_action");
        szDescr.Format(
            _T("[userid=%s-table=%s-kho=%s-Khoa=%s-Doituong=%s-Default=%s ]"),
            pMF->GetCurrentUser(), m_szTableName, m_szStorageIDKey,
            m_szDepartmentKey, m_szObjectKey, m_szDefault);
        pMF->SystemLog(szEvent, szDescr);
		OnListLoadData();
	}
	 return 0;
} 
long CStorageDefaultSetupDlg::OnListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szIsactive;
	if(!m_szStorageSearchIDKey.IsEmpty())
		szWhere.AppendFormat(_T(" and msd_storage_id = '%s'"), m_szStorageSearchIDKey);
	if(!m_szSDepartmentKey.IsEmpty())
		szWhere.AppendFormat(_T(" and msd_department_id = '%s'"), m_szSDepartmentKey);
	if(!m_szSObjectKey.IsEmpty())
		szWhere.AppendFormat(_T(" and msd_object_id = '%s'"), m_szSObjectKey);
	
	m_wndList.BeginLoad(); 
	int nCount = 0;
	szSQL.Format(_T(" SELECT * FROM %s WHERE 1=1 %s ORDER BY msd_storage_id, msd_object_id, msd_department_id"), m_szTableName,szWhere);
	nCount = rs.ExecSQL(szSQL);
	_fmsg(_T("%s"), szSQL);
	while(!rs.IsEOF())
	{ 
			
		int nItem = m_wndList.AddItems(
			rs.GetValue(_T("msd_storage_id")),
			rs.GetValue(_T("msd_department_id")),
			rs.GetValue(_T("msd_object_id")),
			rs.GetValue(_T("msd_printtype")),
			rs.GetValue(_T("msd_default")),
			rs.GetValue(_T("msd_zone")),
			rs.GetValue(_T("msd_isactive")),NULL);
			rs.GetValue(_T("msd_isactive"), szIsactive);
		if (szIsactive == _T("N"))
		{
		m_wndList.SetSubItemBkColor(nItem, 6, RGB(255, 127, 36), FALSE);
		m_wndList.SetSubItemTextColor(nItem, 6, RGB(255, 255, 255), FALSE);	
		}
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;

}
void CStorageDefaultSetupDlg::OnStorageIDSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CStorageDefaultSetupDlg::OnStorageIDSelendok(){
	 
}
/*void CStorageDefaultSetupDlg::OnStorageIDSetfocus(){
	
}*/
/*void CStorageDefaultSetupDlg::OnStorageIDKillfocus(){
	
}*/
long CStorageDefaultSetupDlg::OnStorageIDLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndStorageID.IsSearchKey() && !m_szStorageIDKey.IsEmpty()){
		szWhere.Format(_T(" and msl_storage_id='%s' "), m_szStorageIDKey);
	};
	m_wndStorageID.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT msl_storage_id as id, msl_name as name FROM m_storagelist WHERE 1=1 %s ORDER BY msl_storage_id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndStorageID.AddItems(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CStorageDefaultSetupDlg::OnStorageIDAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CStorageDefaultSetupDlg::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CStorageDefaultSetupDlg::OnDepartmentSelendok(){
	 
}
/*void CStorageDefaultSetupDlg::OnDepartmentSetfocus(){
	
}*/
/*void CStorageDefaultSetupDlg::OnDepartmentKillfocus(){
	
}*/
long CStorageDefaultSetupDlg::OnDepartmentLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDepartment.IsSearchKey() && !m_szDepartmentKey.IsEmpty()){
	 szWhere.Format(_T(" and sd_id='%s' "), m_szDepartmentKey);
	}
	m_wndDepartment.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT sd_id as id, sd_name as name FROM sys_dept WHERE 1=1 %s ORDER BY sd_id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDepartment.AddItems(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("name")),NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CStorageDefaultSetupDlg::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CStorageDefaultSetupDlg::OnObjectSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CStorageDefaultSetupDlg::OnObjectSelendok(){
	 
}
/*void CStorageDefaultSetupDlg::OnObjectSetfocus(){
	
}*/
/*void CStorageDefaultSetupDlg::OnObjectKillfocus(){
	
}*/
long CStorageDefaultSetupDlg::OnObjectLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndObject.IsSearchKey() && !m_szObjectKey.IsEmpty()){
	 szWhere.Format(_T(" and ho_id='%s' "), m_szObjectKey);
}
	m_wndObject.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ho_id as id, ho_desc as name FROM hms_object WHERE 1=1 %s ORDER BY ho_id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndObject.AddItems(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CStorageDefaultSetupDlg::OnObjectAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CStorageDefaultSetupDlg::OnPrintTypeChange(){
	
} */
/*void CStorageDefaultSetupDlg::OnPrintTypeSetfocus(){
	
} */
/*void CStorageDefaultSetupDlg::OnPrintTypeKillfocus(){
	
} */
int CStorageDefaultSetupDlg::OnPrintTypeCheckValue(){
	return 0;
} 
/*void CStorageDefaultSetupDlg::OnDefaultChange(){
	
} */
/*void CStorageDefaultSetupDlg::OnDefaultSetfocus(){
	
} */
/*void CStorageDefaultSetupDlg::OnDefaultKillfocus(){
	
} */
int CStorageDefaultSetupDlg::OnDefaultCheckValue(){
	return 0;
} 
/*void CStorageDefaultSetupDlg::OnZoneChange(){
	
} */
/*void CStorageDefaultSetupDlg::OnZoneSetfocus(){
	
} */
/*void CStorageDefaultSetupDlg::OnZoneKillfocus(){
	
} */
int CStorageDefaultSetupDlg::OnZoneCheckValue(){
	return 0;
} 
void CStorageDefaultSetupDlg::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnAddStorageDefaultSetupDlg();
} 
void CStorageDefaultSetupDlg::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnEditStorageDefaultSetupDlg();
} 
void CStorageDefaultSetupDlg::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnDeleteStorageDefaultSetupDlg();
} 
void CStorageDefaultSetupDlg::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveStorageDefaultSetupDlg();
} 
void CStorageDefaultSetupDlg::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancelStorageDefaultSetupDlg();
} 
void CStorageDefaultSetupDlg::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();
} 
void CStorageDefaultSetupDlg::OnInPatientSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);
	if(m_bInPatient)
	{
		m_szTableName.Format(_T("m_storage_default"));
	}
	else
	{
		m_szTableName.Format(_T("m_storage_default_ex"));
	}
	OnListLoadData();
	_fmsg(_T("%s"), m_szTableName);
}
int CStorageDefaultSetupDlg::OnAddStorageDefaultSetupDlg(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CStorageDefaultSetupDlg::OnEditStorageDefaultSetupDlg(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CStorageDefaultSetupDlg::OnDeleteStorageDefaultSetupDlg(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CString szSQL, szEvent, szDescr;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
	szSQL.Format(_T("DELETE FROM %s WHERE msd_storage_id = %s AND msd_department_id = '%s' AND msd_object_id = %s"), m_szTableName,m_szStorageIDKey, m_szDepartmentKey, m_szObjectKey );
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
	{
        szEvent = _T("delete_stock_action");
        szDescr.Format(
            _T("[userid=%s-table=%s-kho=%s-Khoa=%s-Doituong=%s-Default=%s ]"),
            pMF->GetCurrentUser(), m_szTableName, m_szStorageIDKey,
            m_szDepartmentKey, m_szObjectKey, m_szDefault);
        pMF->SystemLog(szEvent, szDescr);

 		SetMode(VM_NONE);
		OnListLoadData();
 		OnCancelStorageDefaultSetupDlg();
 	}
	return 0;
}
int CStorageDefaultSetupDlg::OnSaveStorageDefaultSetupDlg(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CString szSQL, szSQL2, szEvent, szDescr;
 	if(GetMode() == VM_ADD)
	{
 		//szSQL = m_tblTbl.GetInsertSQL();
		szSQL.Format(_T("INSERT INTO %s (msd_storage_id, msd_department_id, msd_object_id, msd_printtype, msd_default, msd_zone) ") \
			_T(" VALUES (%s, '%s',%s,%d,'%s','%s') "), m_szTableName, m_szStorageIDKey, m_szDepartmentKey, m_szObjectKey, m_nPrintType, m_szDefault, m_szZone);

		szEvent = _T("add_stock_action");
        szDescr.Format(
            _T("[userid=%s-table=%s-kho=%s-Khoa=%s-Doituong=%s-Default=%s ]"),
            pMF->GetCurrentUser(), m_szTableName, m_szStorageIDKey,
            m_szDepartmentKey,
            m_szObjectKey, m_szDefault);
        pMF->SystemLog(szEvent, szDescr);
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
 		szWhere.Format(_T(" WHERE msd_storage_id = %s AND msd_department_id = '%s' AND msd_object_id = %s"), m_szStorageIDKey, m_szDepartmentKey, m_szObjectKey);
 		//szSQL = m_tblTbl.GetUpdateSQL(_T("msd_storage_id,msd_department_id,msd_object_id"));
		szSQL.Format(_T("UPDATE %s SET msd_printtype = %d, msd_default = '%s', msd_zone = '%s' "), m_szTableName, m_nPrintType, m_szDefault, m_szZone);
 		szSQL += szWhere;
 	}
 _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
		
		if(m_szDefault == _T("Y"))
		{
			szSQL2.Format(_T("UPDATE %s SET msd_default = 'N' ") \
				_T(" WHERE msd_storage_id = %s AND msd_department_id = '%s' AND msd_object_id <> %s "), m_szTableName,m_szStorageIDKey, m_szDepartmentKey, m_szObjectKey);
			pMF->ExecSQL(szSQL2);
		}

		szEvent = _T("edit_stock_action");
        szDescr.Format(
            _T("[userid=%s-table=%s-kho=%s-Khoa=%s-Doituong=%s-Default=%s ]"),
            pMF->GetCurrentUser(), m_szTableName, m_szStorageIDKey,
            m_szDepartmentKey, m_szObjectKey, m_szDefault);
        pMF->SystemLog(szEvent, szDescr);

		OnListLoadData();
		if(GetMode() == VM_ADD)
		{
			m_wndAdd.SetFocus();
		}
		else
 			SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CStorageDefaultSetupDlg::OnCancelStorageDefaultSetupDlg(){
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
int CStorageDefaultSetupDlg::OnStorageDefaultSetupDlgListLoadData()
{
	return 0;
}
int CStorageDefaultSetupDlg::OnSaveStorageDefault()
{
	
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
    CString szSQL, szIsActive, szObjectID, szDepartment, szEvent, szDescr;
	
	long m_nStorageID;

	int nSel = m_wndList.GetCurSel();
	if(nSel < 0) 
	return 0;
	
	m_nStorageID = str2long(m_wndList.GetItemText(nSel, 0));	
	szObjectID = m_wndList.GetItemText(nSel, 2);
	szDepartment = m_wndList.GetItemText(nSel, 1);
	szIsActive = m_wndList.GetItemText(nSel, 6);
	if(!szIsActive.IsEmpty() && m_nStorageID > 0 && !szObjectID.IsEmpty() && !szDepartment.IsEmpty())
	{
		szSQL.Format(_T("UPDATE m_storage_default_ex ") \
					_T("SET msd_isactive='%s' ") \
					_T("WHERE MSD_STORAGE_ID=%ld and MSD_OBJECT_ID='%s' and MSD_DEPARTMENT_ID='%s' "), szIsActive, m_nStorageID, szObjectID, szDepartment);
				pMF->ExecSQL(szSQL);
        szEvent = _T("edit_stock_action");
        szDescr.Format(
            _T("[userid=%s-table=%s-kho=%s-Khoa=%s-Doituong=%s-Active=%s ]"),
            pMF->GetCurrentUser(), m_szTableName, m_szStorageIDKey, szDepartment, szObjectID, szIsActive);
        pMF->SystemLog(szEvent, szDescr);
				
	}
	return 0;
}
