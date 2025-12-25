#include "stdafx.h"
#include "LIMSIsoSetupDialog.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
#include "Excel.h"
//#include "stdafx.h"
//#include "MainFrm.h"
static long _OnIsoListLoadDataFnc(CWnd *pWnd){
	return ((CLIMSIsoSetupDialog*)pWnd)->OnIsoListLoadData();
} 
static void _OnIsoListDblClickFnc(CWnd *pWnd){
	((CLIMSIsoSetupDialog*)pWnd)->OnIsoListDblClick();
} 
static void _OnIsoListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CLIMSIsoSetupDialog*)pWnd)->OnIsoListSelectChange(nOldItem, nNewItem);
} 
static int _OnIsoListDeleteItemFnc(CWnd *pWnd){
	 return ((CLIMSIsoSetupDialog*)pWnd)->OnIsoListDeleteItem();
} 
/*static void _OnWildCastChangeFnc(CWnd *pWnd){
	((CLIMSIsoSetupDialog *)pWnd)->OnWildCastChange();
} */
/*static void _OnWildCastSetfocusFnc(CWnd *pWnd){
	((CLIMSIsoSetupDialog *)pWnd)->OnWildCastSetfocus();} */ 
/*static void _OnWildCastKillfocusFnc(CWnd *pWnd){
	((CLIMSIsoSetupDialog *)pWnd)->OnWildCastKillfocus();
} */
static int _OnWildCastCheckValueFnc(CWnd *pWnd){
	return ((CLIMSIsoSetupDialog *)pWnd)->OnWildCastCheckValue();
} 
static void _OnTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CLIMSIsoSetupDialog* )pWnd)->OnTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTypeSelendokFnc(CWnd *pWnd){
	((CLIMSIsoSetupDialog *)pWnd)->OnTypeSelendok();
}
/*static void _OnTypeSetfocusFnc(CWnd *pWnd){
	((CLIMSIsoSetupDialog *)pWnd)->OnTypeKillfocus();
}*/
/*static void _OnTypeKillfocusFnc(CWnd *pWnd){
	((CLIMSIsoSetupDialog *)pWnd)->OnTypeKillfocus();
}*/
static long _OnTypeLoadDataFnc(CWnd *pWnd){
	return ((CLIMSIsoSetupDialog *)pWnd)->OnTypeLoadData();
}
/*static void _OnTypeAddNewFnc(CWnd *pWnd){
	((CLIMSIsoSetupDialog *)pWnd)->OnTypeAddNew();
}*/
/*static void _OnTestMethodChangeFnc(CWnd *pWnd){
	((CLIMSIsoSetupDialog *)pWnd)->OnTestMethodChange();
} */
/*static void _OnTestMethodSetfocusFnc(CWnd *pWnd){
	((CLIMSIsoSetupDialog *)pWnd)->OnTestMethodSetfocus();} */ 
/*static void _OnTestMethodKillfocusFnc(CWnd *pWnd){
	((CLIMSIsoSetupDialog *)pWnd)->OnTestMethodKillfocus();
} */
static int _OnTestMethodCheckValueFnc(CWnd *pWnd){
	return ((CLIMSIsoSetupDialog *)pWnd)->OnTestMethodCheckValue();
} 
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CLIMSIsoSetupDialog *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CLIMSIsoSetupDialog *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CLIMSIsoSetupDialog *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CLIMSIsoSetupDialog *)pWnd)->OnNameCheckValue();
} 
static void _OnSearchSelectFnc(CWnd *pWnd){
	CLIMSIsoSetupDialog *pVw = (CLIMSIsoSetupDialog *)pWnd;
	pVw->OnSearchSelect();
} 
static void _OnTestNameSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CLIMSIsoSetupDialog* )pWnd)->OnTestNameSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTestNameSelendokFnc(CWnd *pWnd){
	((CLIMSIsoSetupDialog *)pWnd)->OnTestNameSelendok();
}
/*static void _OnTestNameSetfocusFnc(CWnd *pWnd){
	((CLIMSIsoSetupDialog *)pWnd)->OnTestNameKillfocus();
}*/
/*static void _OnTestNameKillfocusFnc(CWnd *pWnd){
	((CLIMSIsoSetupDialog *)pWnd)->OnTestNameKillfocus();
}*/
static long _OnTestNameLoadDataFnc(CWnd *pWnd){
	return ((CLIMSIsoSetupDialog *)pWnd)->OnTestNameLoadData();
}
/*static void _OnTestNameAddNewFnc(CWnd *pWnd){
	((CLIMSIsoSetupDialog *)pWnd)->OnTestNameAddNew();
}*/

/*static void _OnMachineNameSetfocusFnc(CWnd *pWnd){
	((CLIMSIsoSetupDialog *)pWnd)->OnMachineNameKillfocus();
}*/
/*static void _OnMachineNameKillfocusFnc(CWnd *pWnd){
	((CLIMSIsoSetupDialog *)pWnd)->OnMachineNameKillfocus();
}*/

/*static void _OnMachineNameAddNewFnc(CWnd *pWnd){
	((CLIMSIsoSetupDialog *)pWnd)->OnMachineNameAddNew();
}*/
static void _OnDefaultSelectFnc(CWnd *pWnd){
	 ((CLIMSIsoSetupDialog*)pWnd)->OnDefaultSelect();
}
static void _OnActiveSelectFnc(CWnd *pWnd){
	 ((CLIMSIsoSetupDialog*)pWnd)->OnActiveSelect();
}
static void _OnAddSelectFnc(CWnd *pWnd){
	CLIMSIsoSetupDialog *pVw = (CLIMSIsoSetupDialog *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CLIMSIsoSetupDialog *pVw = (CLIMSIsoSetupDialog *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CLIMSIsoSetupDialog *pVw = (CLIMSIsoSetupDialog *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CLIMSIsoSetupDialog *pVw = (CLIMSIsoSetupDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CLIMSIsoSetupDialog *pVw = (CLIMSIsoSetupDialog *)pWnd;
	pVw->OnCancelSelect();
}
static void _OnManualSelectFnc(CWnd *pWnd){
	CLIMSIsoSetupDialog *pVw = (CLIMSIsoSetupDialog *)pWnd;
	pVw->OnManualSelect();
} 
static int _OnAddLIMSIsoSetupDialogFnc(CWnd *pWnd){
	 return ((CLIMSIsoSetupDialog*)pWnd)->OnAddLIMSIsoSetupDialog();
} 
static int _OnEditLIMSIsoSetupDialogFnc(CWnd *pWnd){
	 return ((CLIMSIsoSetupDialog*)pWnd)->OnEditLIMSIsoSetupDialog();
} 
static int _OnDeleteLIMSIsoSetupDialogFnc(CWnd *pWnd){
	 return ((CLIMSIsoSetupDialog*)pWnd)->OnDeleteLIMSIsoSetupDialog();
} 
static int _OnSaveLIMSIsoSetupDialogFnc(CWnd *pWnd){
	 return ((CLIMSIsoSetupDialog*)pWnd)->OnSaveLIMSIsoSetupDialog();
} 
static int _OnCancelLIMSIsoSetupDialogFnc(CWnd *pWnd)
{
	 return ((CLIMSIsoSetupDialog*)pWnd)->OnCancelLIMSIsoSetupDialog();
} 
static long _OnMachineNameLoadDataFnc(CWnd *pWnd)
{
	return ((CLIMSIsoSetupDialog *)pWnd)->OnMachineNameLoadData();
}

CLIMSIsoSetupDialog::CLIMSIsoSetupDialog(CWnd *pParent)
{

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;	
	SetDefaultValues();	
	m_bActive = TRUE;
	m_szTitle = _T("Thiết lập thông số");
	m_nID = 0;
}
CLIMSIsoSetupDialog::~CLIMSIsoSetupDialog(){
}
void CLIMSIsoSetupDialog::OnCreateComponents()
{
	m_wndNameLabel.Create(this, _T("NameLabel"), 5, 5, 85, 30);
	m_wndName.Create(this,90, 5, 880, 30); 
	m_wndSearch.Create(this, _T("&Search"), 885, 5, 1000, 30);
	m_wndTypeLabel.Create(this, _T("TypeLabel"), 5, 485, 85, 510);
	m_wndType.Create(this,90, 485, 1000, 510); 
	m_wndTestNameLabel.Create(this, _T("TestNameLabel"), 5, 515, 85, 540);
	m_wndTestName.Create(this,90, 515, 1000, 540); 
	m_wndMachineNameLabel.Create(this, _T("MachineNameLabel"), 5, 545, 85, 570);
	m_wndManual.Create(this, _T("Manual"), 90, 545, 110, 570);
	m_wndMachineName.Create(this,115, 545, 1000, 570); 
	m_wndMachineManualName.Create(this,115, 545, 1000, 570); 
	m_wndTestMethodLabel.Create(this, _T("TestMethodLabel"), 5, 575, 85, 600);
	m_wndTestMethod.Create(this,90, 575, 1000, 600); 
	m_wndWildCastLabel.Create(this, _T("WildCastLabel"), 5, 605, 85, 630);
	m_wndWildCast.Create(this,90, 605, 780, 630); 
	m_wndDefault.Create(this, _T("Default"), 785, 605, 890, 630);
	m_wndActive.Create(this, _T("Active"), 895, 605, 1000, 630);
	m_wndAdd.Create(this, _T("&Add"), 630, 635, 700, 660);
	m_wndEdit.Create(this, _T("&Edit"), 705, 635, 775, 660);
	m_wndDelete.Create(this, _T("&Delete"), 780, 635, 850, 660);
	m_wndSave.Create(this, _T("&Save"), 855, 635, 925, 660);
	m_wndCancel.Create(this, _T("&Cancel"), 930, 635, 1000, 660);
	m_wndIsoList.Create(this,5, 35, 1000, 480); 
	m_wndMachineManualName.ShowWindow(SW_HIDE);
}
void CLIMSIsoSetupDialog::OnInitializeComponents()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
	
	m_wndWildCast.SetLimitText(1024);
	m_wndWildCast.SetCheckValue(true);
	m_wndType.SetCheckValue(true);
	m_wndType.LimitText(1024);
	m_wndTestMethod.SetLimitText(1024);
	m_wndTestMethod.SetCheckValue(true);	
	m_wndTestName.SetCheckValue(true);
	m_wndTestName.LimitText(35);
	m_wndMachineName.SetCheckValue(true);
	m_wndMachineName.LimitText(35);
	m_wndName.ModifyStyle(WS_TABSTOP, 0);
	m_wndManual.ModifyStyle(WS_TABSTOP, 0);

	if (pMF->GetCurrentDepartmentID() != _T("C14"))
	{
		m_wndManual.EnableWindow(FALSE);
	}
	m_wndIsoList.InsertColumn(0, _T("IDX"), CFMT_TEXT, 0);
	m_wndIsoList.InsertColumn(1, _T("Index"), CFMT_TEXT, 50);
	m_wndIsoList.InsertColumn(2, _T("Instrument"), CFMT_TEXT, 100);
	m_wndIsoList.InsertColumn(3, _T("itemid"), CFMT_TEXT, 100);
	m_wndIsoList.InsertColumn(4, _T("testname"), CFMT_TEXT, 200);
	m_wndIsoList.InsertColumn(5, _T("testmethod"), CFMT_TEXT, 200);
	m_wndIsoList.InsertColumn(6, _T("wildcash"), CFMT_TEXT, 100);
	m_wndIsoList.InsertColumn(7, _T("active"), CFMT_TEXT, 50);
	m_wndIsoList.InsertColumn(8, _T("defaultvalue"), CFMT_TEXT, 50);
	m_wndIsoList.InsertColumn(9, _T("ManualName"), CFMT_TEXT, 100);


	m_wndType.InsertColumn(0, _T("ID"), CFMT_NUMBER, 100);
	m_wndType.InsertColumn(1, _T("Description"), CFMT_TEXT, 400);

	m_wndTestName.InsertColumn(0, _T("ID"), CFMT_NUMBER, 100);
	m_wndTestName.InsertColumn(1, _T("Description"), CFMT_TEXT, 400);
	m_wndTestName.InsertColumn(2, _T("Groupname"), CFMT_TEXT, 100);
	m_wndTestName.InsertColumn(3, _T("hfl_applydate"), CFMT_DATE, 400);


	m_wndMachineName.InsertColumn(0, _T("ID"), CFMT_NUMBER, 100);
	m_wndMachineName.InsertColumn(1, _T("Description"), CFMT_TEXT, 400);


	m_lims_instrument_qcTbl.SetTableName(_T("lims_instrument_qc"));
	m_lims_instrument_qcTbl.AddField(_T("LIMSIQ_INSTID"), dfInteger, 15); 
	m_lims_instrument_qcTbl.AddField(_T("LIMSIQ_ITEMID"), dfText,10); 
	m_lims_instrument_qcTbl.AddField(_T("LIMSIQ_QC"), dfText, 254); 
	m_lims_instrument_qcTbl.AddField(_T("LIMSIQ_WILDCAST"), dfText, 15);
	m_lims_instrument_qcTbl.AddField(_T("LIMSIQ_DEPT"), dfText, 15);
	m_lims_instrument_qcTbl.AddField(_T("LIMSIQ_ACTIVE"), dfText, 1);
	m_lims_instrument_qcTbl.AddField(_T("LIMSIQ_DEFAULT"), dfText, 1);
	m_lims_instrument_qcTbl.AddField(_T("LIMSIQ_INST_MANUALNAME"), dfText, 35);

}
void CLIMSIsoSetupDialog::OnSetWindowEvents()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndIsoList.SetEvent(WE_SELCHANGE, _OnIsoListSelectChangeFnc);
	m_wndIsoList.SetEvent(WE_LOADDATA, _OnIsoListLoadDataFnc);
	m_wndIsoList.SetEvent(WE_DBLCLICK, _OnIsoListDblClickFnc);	
	//m_wndWildCast.SetEvent(WE_CHANGE, _OnWildCastChangeFnc);
	//m_wndWildCast.SetEvent(WE_SETFOCUS, _OnWildCastSetfocusFnc);
	//m_wndWildCast.SetEvent(WE_KILLFOCUS, _OnWildCastKillfocusFnc);
	m_wndWildCast.SetEvent(WE_CHECKVALUE, _OnWildCastCheckValueFnc);
	m_wndType.SetEvent(WE_SELENDOK, _OnTypeSelendokFnc);
	//m_wndType.SetEvent(WE_SETFOCUS, _OnTypeSetfocusFnc);
	//m_wndType.SetEvent(WE_KILLFOCUS, _OnTypeKillfocusFnc);
	m_wndType.SetEvent(WE_SELCHANGE, _OnTypeSelectChangeFnc);
	m_wndType.SetEvent(WE_LOADDATA, _OnTypeLoadDataFnc);
	//m_wndType.SetEvent(WE_ADDNEW, _OnTypeAddNewFnc);
	//m_wndTestMethod.SetEvent(WE_CHANGE, _OnTestMethodChangeFnc);
	//m_wndTestMethod.SetEvent(WE_SETFOCUS, _OnTestMethodSetfocusFnc);
	//m_wndTestMethod.SetEvent(WE_KILLFOCUS, _OnTestMethodKillfocusFnc);
	m_wndTestMethod.SetEvent(WE_CHECKVALUE, _OnTestMethodCheckValueFnc);
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	m_wndSearch.SetEvent(WE_CLICK, _OnSearchSelectFnc);
	m_wndTestName.SetEvent(WE_SELENDOK, _OnTestNameSelendokFnc);
	//m_wndTestName.SetEvent(WE_SETFOCUS, _OnTestNameSetfocusFnc);
	//m_wndTestName.SetEvent(WE_KILLFOCUS, _OnTestNameKillfocusFnc);
	m_wndTestName.SetEvent(WE_SELCHANGE, _OnTestNameSelectChangeFnc);
	m_wndTestName.SetEvent(WE_LOADDATA, _OnTestNameLoadDataFnc);
	m_wndMachineName.SetEvent(WE_LOADDATA, _OnMachineNameLoadDataFnc);
	//m_wndTestName.SetEvent(WE_ADDNEW, _OnTestNameAddNewFnc);

	//m_wndMachineName.SetEvent(WE_SETFOCUS, _OnMachineNameSetfocusFnc);
	//m_wndMachineName.SetEvent(WE_KILLFOCUS, _OnMachineNameKillfocusFnc);
	
	//m_wndMachineName.SetEvent(WE_ADDNEW, _OnMachineNameAddNewFnc);
	m_wndDefault.SetEvent(WE_CLICK, _OnDefaultSelectFnc);
	m_wndActive.SetEvent(WE_CLICK, _OnActiveSelectFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndManual.SetEvent(WE_CLICK, _OnManualSelectFnc);
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T(" SELECT sup_permid perm_id FROM sys_userperm WHERE sup_userid = '%s' AND sup_moduleid = '%s'") \
				 _T(" AND substr(sup_permid, 1, 2) = 'B1'"), pMF->GetCurrentUser(), pMF->GetModuleID());
	rs.ExecSQL(szSQL);
	while (!rs.IsEOF())
	{
		if (!m_szPermGroupID.IsEmpty())
			m_szPermGroupID += _T(", ");
		m_szPermGroupID.AppendFormat(_T("'%s'"), rs.GetValue(_T("perm_id")));
		rs.MoveNext();
	}
	UpdateData(false);	
	SetMode(VM_NONE);
	OnIsoListLoadData();
}
void CLIMSIsoSetupDialog::OnDoDataExchange(CDataExchange* pDX)
{
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_TextEx(pDX, m_wndType.GetDlgCtrlID(), m_szTypeKey);
	DDX_TextEx(pDX, m_wndTestName.GetDlgCtrlID(), m_szTestNameKey);
	DDX_TextEx(pDX, m_wndMachineName.GetDlgCtrlID(), m_szMachineNameKey);
	DDX_Text(pDX, m_wndTestMethod.GetDlgCtrlID(), m_szTestMethod);
	DDX_Text(pDX, m_wndWildCast.GetDlgCtrlID(), m_szWildCast);
	DDX_Check(pDX, m_wndDefault.GetDlgCtrlID(), m_bDefault);
	DDX_Check(pDX, m_wndActive.GetDlgCtrlID(), m_bActive);
	DDX_Check(pDX, m_wndManual.GetDlgCtrlID(), m_bManual);
	DDX_Text(pDX, m_wndMachineManualName.GetDlgCtrlID(), m_szMachineManualName);
}
void CLIMSIsoSetupDialog::GetDataToScreen()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL,tmpStr;
	szSQL.Format(_T("SELECT * FROM lims_instrument_qc, hms_fee_list WHERE hfl_feeid = limsiq_itemid AND LIMSIQ_ID=%ld"), m_nID);
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
	//_msg(_T("%s"), m_szTypeKey);
	if(!rs.IsEOF()){
		rs.GetValue(_T("LIMSIQ_ITEMID"), m_szTestNameKey);
		rs.GetValue(_T("LIMSIQ_INSTID"), m_szMachineNameKey);		
		rs.GetValue(_T("LIMSIQ_QC"), m_szTestMethod);
		rs.GetValue(_T("LIMSIQ_WILDCAST"), m_szWildCast);
		rs.GetValue(_T("HFL_GROUPID"), m_szTypeKey);
		rs.GetValue(_T("LIMSIQ_ACTIVE"), tmpStr);
		if(tmpStr == _T("Y")) m_bActive = true;
		rs.GetValue(_T("LIMSIQ_DEFAULT"), tmpStr);
		if(tmpStr == _T("Y")) m_bDefault = true;
		rs.GetValue(_T("limsiq_inst_manualname"), m_szMachineManualName);
		SetMode(VM_VIEW);
	}
	else
		SetMode(VM_NONE);

}
void CLIMSIsoSetupDialog::GetScreenToData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
	
	m_lims_instrument_qcTbl.SetValue(_T("LIMSIQ_INSTID"), m_szMachineNameKey);
	m_lims_instrument_qcTbl.SetValue(_T("LIMSIQ_ITEMID"), m_szTestNameKey);
	m_lims_instrument_qcTbl.SetValue(_T("LIMSIQ_QC"), m_szTestMethod);	
	m_lims_instrument_qcTbl.SetValue(_T("LIMSIQ_WILDCAST"), m_szWildCast );
	m_lims_instrument_qcTbl.SetValue(_T("LIMSIQ_DEPT"), m_szTypeKey);	
	m_lims_instrument_qcTbl.SetValue(_T("LIMSIQ_ACTIVE"), m_bActive?_T("Y"):_T("N"));
	m_lims_instrument_qcTbl.SetValue(_T("LIMSIQ_DEFAULT"), m_bDefault?_T("Y"):_T("N"));	
	m_lims_instrument_qcTbl.SetValue(_T("LIMSIQ_INST_MANUALNAME"), m_szMachineManualName);	
}
void CLIMSIsoSetupDialog::SetDefaultValues(){
	m_szWildCast.Empty();
	m_szTypeKey.Empty();
	m_szTestMethod.Empty();
	m_szName.Empty();
	m_szTestNameKey.Empty();
	m_szMachineNameKey.Empty();
	//m_bDefault=FALSE;
	//m_bActive=FALSE;
	m_bManual = FALSE;
	m_szMachineManualName.Empty();
}
int CLIMSIsoSetupDialog::SetMode(int nMode)
{ 
 		int nOldMode = GetMode(); 
 		CGuiDialog::SetMode(nMode); 
 		CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
  		switch(nMode){ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 4, 5, -1); 
 			SetDefaultValues(); 
			m_wndType.SetFocus();
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 4, 5, -1); 
			m_wndName.SetFocus();
			m_wndType.EnableWindow(FALSE);
			m_wndTestName.EnableWindow(FALSE);
 			break; 
 		case VM_VIEW: 
 			EnableControls(FALSE); 
 			EnableButtons(FALSE, 4, 5, -1); 
 			break; 
 		case VM_NONE: 
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 0, 1, -1); 
 			SetDefaultValues(); 
			m_wndAdd.SetFocus();
 			break; 
 		}; 
 		UpdateData(FALSE); 
 		return nOldMode; 
 	} 
void CLIMSIsoSetupDialog::OnAddSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
	OnAddLIMSIsoSetupDialog();	
} 
void CLIMSIsoSetupDialog::OnEditSelect(){
	OnEditLIMSIsoSetupDialog();	
} 
void CLIMSIsoSetupDialog::OnDeleteSelect(){
	OnDeleteLIMSIsoSetupDialog();	
} 
void CLIMSIsoSetupDialog::OnSaveSelect(){
	OnSaveLIMSIsoSetupDialog();	
} 
void CLIMSIsoSetupDialog::OnCancelSelect(){
	OnCancelLIMSIsoSetupDialog();	
} 
void CLIMSIsoSetupDialog::OnIsoListDblClick()
{
	
} 
int CLIMSIsoSetupDialog::OnTestMethodCheckValue()
{
	return 0;
}
void CLIMSIsoSetupDialog::OnSearchSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();	
	UpdateData();
	OnIsoListLoadData();
} 
void CLIMSIsoSetupDialog::OnTestNameSelectChange(int nOldItemSel, int nNewItemSel)
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();	
} 
void CLIMSIsoSetupDialog::OnTestNameSelendok()
{
	 
}
long CLIMSIsoSetupDialog::OnTestNameLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndTestName.IsSearchKey() && !m_szTestNameKey.IsEmpty()){
		szWhere.Format(_T(" and hfl_feeid='%s' "), m_szTestNameKey);
	}
	if (!m_szPermGroupID.IsEmpty())
		szWhere.AppendFormat(_T(" AND hfl_groupid IN (%s)"), m_szPermGroupID);
	if (!m_szTypeKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND hfl_groupid IN ('%s')"), m_szTypeKey);
	}
	m_wndTestName.DeleteAllItems(); 
	int nCount = 0;
	//szSQL.Format(_T("SELECT hfl_feeid as id, hfl_name as description, hfl_applydate  FROM hms_fee_list WHERE substr(hfl_groupid , 1, 2) = 'B1' and hfl_active='Y' and (hfl_servprice+hfl_insprice+hfl_polprice) > 0 %s ORDER BY id "), szWhere);
	szSQL.Format(_T("SELECT hfl_feeid as id, hfl_name as description, hfl_subitem as groupname,hfl_applydate  FROM hms_fee_list WHERE substr(hfl_groupid , 1, 2) = 'B1' and hfl_active='Y' %s ORDER BY hfl_groupid,hfl_applydate,  hfl_line,  hfl_name "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndTestName.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")),
			rs.GetValue(_T("groupname")),
			rs.GetValue(_T("hfl_applydate")), NULL);
		rs.MoveNext();
	}
	return nCount;	
}
long CLIMSIsoSetupDialog::OnMachineNameLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndMachineName.IsSearchKey() && !m_szMachineNameKey.IsEmpty())
	{
		szWhere.Format(_T(" and limsi_id='%s' "), m_szMachineNameKey);
	}
	m_wndMachineName.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("select limsi_id as id, limsi_name as description from lims_instrument where LIMSI_DEPTID='%s' %s order by limsi_deptid, limsi_id "), pMF->GetCurrentDepartmentID(), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF())
	{ 
		m_wndMachineName.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;	
	return 0;
}

void CLIMSIsoSetupDialog::OnDefaultSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	
}
	void CLIMSIsoSetupDialog::OnActiveSelect()
	{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	
}


void CLIMSIsoSetupDialog::OnIsoListSelectChange(int nOldItem, int nNewItem)
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
	if(nNewItem < 0)
		return;
	m_szTestNameKey = m_wndIsoList.GetItemText(nNewItem, 3);
	m_nID = str2long(m_wndIsoList.GetItemText(nNewItem, 0));
	GetDataToScreen();	
} 
int CLIMSIsoSetupDialog::OnIsoListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
	OnDeleteLIMSIsoSetupDialog();
	 return 0;
} 
long CLIMSIsoSetupDialog::OnIsoListLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	m_wndIsoList.BeginLoad(); 
	m_wndIsoList.DeleteAllItems(); 
	if (!m_szPermGroupID.IsEmpty())
		szWhere.AppendFormat(_T(" AND Hfl_Groupid IN (%s)"), m_szPermGroupID);
	if (!m_szName.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND lower(hfl_name) like lower(chr(37)||'%s'||chr(37))"), m_szName);
	}
	int nCount = 0, nIndex = 1;	

	szSQL.Format(_T(" select limsiq_id as idx, LIMSI_NAME as iname,") \
	_T(" LIMSIQ_ITEMID as itemid,") \
	_T(" hfl_name as testname,") \
	_T(" LIMSIQ_QC as testmethod,") \
	_T(" LIMSIQ_WILDCAST as wildcash,") \
	_T(" LIMSIQ_ACTIVE as active,") \
	_T(" LIMSIQ_DEFAULT as defaultvalue,") \
	_T(" limsiq_inst_manualname as manual_name") \
	_T(" from lims_instrument_qc") \
	_T(" left join hms_fee_list ON (hfl_feeid=LIMSIQ_ITEMID)")
	_T(" LEFT JOIN lims_instrument ON (limsiq_instid = limsi_id)") \
	_T(" WHERE 1=1 %s") \
	_T(" order by Hfl_Groupid,hfl_applydate,hfl_line, hfl_name"), szWhere);

	nCount = rs.ExecSQL(szSQL);
   //_msg(_T("%s"), szSQL);
	while(!rs.IsEOF()){ 
		m_wndIsoList.AddItems(
			rs.GetValue(_T("IDX")),
			int2str(nIndex++),
			rs.GetValue(_T("iname")),
			rs.GetValue(_T("itemid")),
			rs.GetValue(_T("testname")),
			rs.GetValue(_T("testmethod")), 
			rs.GetValue(_T("wildcash")),
			rs.GetValue(_T("active")),
			rs.GetValue(_T("defaultvalue")),
			rs.GetValue(_T("manual_name")),
			NULL);
		rs.MoveNext();
	}
	m_wndIsoList.EndLoad(); 
	return nCount;

}
/*void CLIMSIsoSetupDialog::OnNameChange(){
	
} */
/*void CLIMSIsoSetupDialog::OnNameSetfocus(){
	
} */
/*void CLIMSIsoSetupDialog::OnNameKillfocus(){
	
} */
int CLIMSIsoSetupDialog::OnNameCheckValue(){
	return 0;
} 
void CLIMSIsoSetupDialog::OnTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
	
} 
void CLIMSIsoSetupDialog::OnTypeSelendok(){
	UpdateData();
	OnTestNameLoadData();
}
/*void CLIMSIsoSetupDialog::OnTypeSetfocus(){
	
}*/
/*void CLIMSIsoSetupDialog::OnTypeKillfocus(){
	
}*/
long CLIMSIsoSetupDialog::OnTypeLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	
	if (!m_szPermGroupID.IsEmpty())
		szWhere.AppendFormat(_T(" AND hfg_id IN (%s)"), m_szPermGroupID);
	
	m_wndType.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT hfg_id as id, hfg_name as description FROM hms_fee_group WHERE substr(hfg_id , 1, 2) = 'B1' %s  ORDER BY id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	//_msg(_T("%s"), m_szTypeKey);
	//_msg(_T("%s"), szSQL);
	while(!rs.IsEOF()){ 
		m_wndType.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CLIMSIsoSetupDialog::OnTypeAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
	
} */
/*void CLIMSIsoSetupDialog::OnSectionChange(){
	
} */
/*void CLIMSIsoSetupDialog::OnSectionSetfocus(){
	
} */
/*void CLIMSIsoSetupDialog::OnSectionKillfocus(){
	
} */
int CLIMSIsoSetupDialog::OnWildCastCheckValue(){
	return 0;
} 
int CLIMSIsoSetupDialog::OnAddLIMSIsoSetupDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
 
} 
int CLIMSIsoSetupDialog::OnEditLIMSIsoSetupDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
	int nSel = m_wndIsoList.GetCurSel();
	if(nSel < 0) return 0;
 	SetMode(VM_EDIT);
	return 0;  
 
} 
int CLIMSIsoSetupDialog::OnDeleteLIMSIsoSetupDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
	CRecord rs(&pMF->m_db);
	int nSel = m_wndIsoList.GetCurSel();
	if(nSel < 0) return 0;
	long nID = str2long(m_wndIsoList.GetItemText(nSel, 0));
	/*szSQL.Format(_T("SELECT count(*) FROM hms_operation WHERE ho_deptid='%s' AND ho_recordno ='%s'"), m_szDeptID, m_szName);
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() > 0){
		return -1;
	}*/	

 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
	szSQL.Format(_T("DELETE FROM LIMS_INSTRUMENT_QC WHERE LIMSIQ_ID=%ld"), nID); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret >= 0){ 
 		SetMode(VM_NONE); 
 		OnCancelLIMSIsoSetupDialog(); 
		m_wndIsoList.DeleteItem(nSel);
 	}
	return 0;
 } 
int CLIMSIsoSetupDialog::OnSaveLIMSIsoSetupDialog()
{
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
	CRecord rs(&pMF->m_db);
 	if(GetMode() == VM_ADD)
	{ 
		szSQL = m_lims_instrument_qcTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT)
	{ 
 		CString szWhere, szExcept;
		szExcept = _T("LIMSIQ_ITEMID");
		if (m_bManual)
		{
			szExcept.AppendFormat(_T(",limsiq_instid"));
		}
		else
		{
			szExcept.AppendFormat(_T(",limsiq_inst_manualname"));
		}
 		szWhere.Format(_T(" WHERE LIMSIQ_ID= %ld"), m_nID);		
 		szSQL = m_lims_instrument_qcTbl.GetUpdateSQL(szExcept); 
 		szSQL += szWhere;
 	} 
//_msg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
		if (GetMode() == VM_ADD)
		{
			SetMode(VM_ADD);
		}
		else
		{
			SetMode(VM_VIEW);
		}
		OnIsoListLoadData();
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CLIMSIsoSetupDialog::OnCancelLIMSIsoSetupDialog()
{
 	if(GetMode() == VM_EDIT) 
 	{ 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 		SetMode(VM_NONE); 
 	} 
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
 	 
 	return 0;
} 
int CLIMSIsoSetupDialog::OnLIMSIsoSetupDialogListLoadData(){
	return 0;
}

void CLIMSIsoSetupDialog::OnManualSelect()
{
	UpdateData();
	m_wndMachineManualName.ShowWindow(m_bManual?SW_SHOW:SW_HIDE);
	m_wndMachineName.ShowWindow(m_bManual?SW_HIDE:SW_SHOW);
	m_wndMachineManualName.SetCheckValue(m_bManual);
	m_wndMachineName.SetCheckValue(!m_bManual);
}