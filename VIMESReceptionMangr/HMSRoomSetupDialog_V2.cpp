#include "HMSRoomSetupDialog_V2.h"
//#include "stdafx.h"
#include "MainFrm.h"
#include "SearchPopup.h"
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSRoomSetupDialog_V2 *pVw = (CHMSRoomSetupDialog_V2 *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CHMSRoomSetupDialog_V2 *pVw = (CHMSRoomSetupDialog_V2 *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSRoomSetupDialog_V2 *pVw = (CHMSRoomSetupDialog_V2 *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSRoomSetupDialog_V2 *pVw = (CHMSRoomSetupDialog_V2 *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSRoomSetupDialog_V2 *pVw = (CHMSRoomSetupDialog_V2 *)pWnd;
	pVw->OnCancelSelect();
} 
static long _OnRoomListLoadDataFnc(CWnd *pWnd){
	return ((CHMSRoomSetupDialog_V2*)pWnd)->OnRoomListLoadData();
} 
static void _OnRoomListDblClickFnc(CWnd *pWnd){
	((CHMSRoomSetupDialog_V2*)pWnd)->OnRoomListDblClick();
} 
static void _OnRoomListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSRoomSetupDialog_V2*)pWnd)->OnRoomListSelectChange(nOldItem, nNewItem);
} 
static int _OnRoomListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSRoomSetupDialog_V2*)pWnd)->OnRoomListDeleteItem();
} 
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CHMSRoomSetupDialog_V2 *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CHMSRoomSetupDialog_V2 *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CHMSRoomSetupDialog_V2 *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSRoomSetupDialog_V2 *)pWnd)->OnNameCheckValue();
} 
static void _OnTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSRoomSetupDialog_V2* )pWnd)->OnTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTypeSelendokFnc(CWnd *pWnd){
	((CHMSRoomSetupDialog_V2 *)pWnd)->OnTypeSelendok();
}
/*static void _OnTypeSetfocusFnc(CWnd *pWnd){
	((CHMSRoomSetupDialog_V2 *)pWnd)->OnTypeKillfocus();
}*/
/*static void _OnTypeKillfocusFnc(CWnd *pWnd){
	((CHMSRoomSetupDialog_V2 *)pWnd)->OnTypeKillfocus();
}*/
static long _OnTypeLoadDataFnc(CWnd *pWnd){
	return ((CHMSRoomSetupDialog_V2 *)pWnd)->OnTypeLoadData();
}

static long _OnExamTypeLoadDataFnc(CWnd *pWnd){
	return ((CHMSRoomSetupDialog_V2 *)pWnd)->OnExamTypeLoadData();
}
/*static void _OnTypeAddNewFnc(CWnd *pWnd){
	((CHMSRoomSetupDialog_V2 *)pWnd)->OnTypeAddNew();
}*/
/*static void _OnSectionChangeFnc(CWnd *pWnd){
	((CHMSRoomSetupDialog_V2 *)pWnd)->OnSectionChange();
} */
/*static void _OnSectionSetfocusFnc(CWnd *pWnd){
	((CHMSRoomSetupDialog_V2 *)pWnd)->OnSectionSetfocus();} */ 
/*static void _OnSectionKillfocusFnc(CWnd *pWnd){
	((CHMSRoomSetupDialog_V2 *)pWnd)->OnSectionKillfocus();
} */
static int _OnSectionCheckValueFnc(CWnd *pWnd){
	return ((CHMSRoomSetupDialog_V2 *)pWnd)->OnSectionCheckValue();
} 
static int _OnAddHMSRoomSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSRoomSetupDialog_V2*)pWnd)->OnAddHMSRoomSetupDialog();
} 
static int _OnEditHMSRoomSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSRoomSetupDialog_V2*)pWnd)->OnEditHMSRoomSetupDialog();
} 
static int _OnDeleteHMSRoomSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSRoomSetupDialog_V2*)pWnd)->OnDeleteHMSRoomSetupDialog();
} 
static int _OnSaveHMSRoomSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSRoomSetupDialog_V2*)pWnd)->OnSaveHMSRoomSetupDialog();
} 
static int _OnCancelHMSRoomSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSRoomSetupDialog_V2*)pWnd)->OnCancelHMSRoomSetupDialog();
}
static int _OnZoneCheckValueFnc(CWnd *pWnd){
	return ((CHMSRoomSetupDialog_V2 *)pWnd)->OnZoneCheckValue();
}
static long _OnZoneLoadDataFnc(CWnd *pWnd){
	return ((CHMSRoomSetupDialog_V2 *)pWnd)->OnZoneLoadData();
}
static long _OnGroupTypeLoadDataFnc(CWnd *pWnd){
	return ((CHMSRoomSetupDialog_V2 *)pWnd)->OnGroupTypeLoadData();
}
static int _OnAddressCheckValueFnc(CWnd *pWnd){
	return ((CHMSRoomSetupDialog_V2 *)pWnd)->OnAddressCheckValue();
} 

static int _OnRoomListSearchFnc(CWnd *pWnd)
{
	 ((CHMSRoomSetupDialog_V2*)pWnd)->OnRoomListSearch();
	 return 0;
}

static int _OnIndexNoCheckValueFnc(CWnd *pWnd)
{
	return ((CHMSRoomSetupDialog_V2 *)pWnd)->OnIndexNoCheckValue();
}
static int _OnMo_taCheckValueFnc(CWnd *pWnd)
{
	return ((CHMSRoomSetupDialog_V2 *)pWnd)->OnMo_taCheckValue();
} 

CHMSRoomSetupDialog_V2::CHMSRoomSetupDialog_V2(CWnd *pParent)
{
	m_nDlgWidth = 415;
	m_nDlgHeight = 415;
	SetDefaultValues();
	m_szTypeKey.Empty();
	m_szSection.Empty();
	m_bActive = TRUE;

}
CHMSRoomSetupDialog_V2::~CHMSRoomSetupDialog_V2()
{
}
void CHMSRoomSetupDialog_V2::OnCreateComponents()
{

	m_wndNameLabel.Create(this, _T("Name"), 5, 340, 85, 365);
	m_wndName.Create(this,90, 340, 645, 365); 
	m_wndTypeLabel.Create(this, _T("Type"), 5, 280, 85, 305);
	m_wndType.Create(this,91, 280, 465, 305); 
	m_wndSectionLabel.Create(this, _T("Section"), 470, 280, 550, 305);
	m_wndSection.Create(this,555, 280, 805, 305); 
	m_wndZoneLabel.Create(this, _T("Báo cáo khu"), 470, 310, 550, 335);
	m_wndZone.Create(this,555, 310, 805, 335); 	
	m_wndExamTypeLabel.Create(this, _T("Exam Type"), 5, 310, 85, 335);
	m_wndExamType.Create(this,91, 310, 465, 335); 
	m_wndGroupLabel.Create(this, _T("Group"), 5, 370, 85, 395);
	m_wndGroupType.Create(this,90, 370, 805, 395); 
	m_wndAddress.Create(this,90, 400, 805, 425); 
	m_wndAdressLabel.Create(this, _T("Địa chỉ"), 5, 400, 85, 425);
	m_wndIndexLabel.Create(this, _T("Số thứ tự"), 650, 340, 730, 365);
	m_wndIndexNo.Create(this,735, 340, 805, 365); 
	m_wndDescription.Create(this, _T("Mô tả"), 5, 430, 85, 455);
	m_wndMo_ta.Create(this,90, 430, 805, 489, 1, 0, 1);
	m_wndActive.Create(this, _T("Active"), 699, 494, 804, 519);
	m_wndSOD.Create(this, _T("SOD"), 614, 494, 694, 519);
	m_wndAdd.Create(this, _T("&Add"), 434, 525, 504, 550);
	m_wndEdit.Create(this, _T("&Edit"), 509, 525, 579, 550);
	m_wndDelete.Create(this, _T("&Delete"), 584, 525, 654, 550);
	m_wndSave.Create(this, _T("&Save"), 659, 525, 729, 550);
	m_wndCancel.Create(this, _T("&Cancel"), 734, 525, 804, 550);
	m_wndRoomList.Create(this,5, 5, 806, 276); 
}
void CHMSRoomSetupDialog_V2::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	m_wndName.SetLimitText(128);
	m_wndName.SetInitCap(true);
	m_wndName.SetCheckValue(true);
//	m_wndType.SetCheckValue(true);
	m_wndSection.SetLimitText(12);
	m_wndSection.SetInitCap(true);
//	m_wndSection.SetCheckValue(true);

	m_wndAddress.SetLimitText(21);	

	m_wndRoomList.InsertColumn(0, _T("ID"), CFMT_NUMBER, 40);
	m_wndRoomList.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);
	m_wndRoomList.InsertColumn(2, _T("Số TT"), CFMT_NUMBER, 40);
	m_wndRoomList.InsertColumn(3, _T("Section"), CFMT_TEXT, 70);
	m_wndRoomList.InsertColumn(4, _T("Địa chỉ"), CFMT_TEXT, 120);
	m_wndRoomList.InsertColumn(5, _T("Type"), CFMT_TEXT, 0);
	m_wndRoomList.InsertColumn(6, _T("Active"), CFMT_TEXT, 60);
	m_wndRoomList.InsertColumn(7, _T("Báo cáo theo khu"), CFMT_TEXT, 100);
	m_wndRoomList.InsertColumn(8, _T("Exam Type"), CFMT_TEXT, 120);
	m_wndRoomList.InsertColumn(9, _T("Nhóm"), CFMT_TEXT, 120);
	

	m_wndExamType.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndExamType.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndZone.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndZone.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);

	m_wndGroupType.InsertColumn(0, _T("ID"), CFMT_TEXT, 120);
	m_wndGroupType.InsertColumn(1, _T("Name"), CFMT_TEXT, 350);

	m_wndType.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndType.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);

	m_hms_roomlistTbl.SetTableName(_T("hms_roomlist"));
	m_hms_roomlistTbl.AddField(_T("hrl_createdby"), dfText, 15); 
	m_hms_roomlistTbl.AddField(_T("hrl_createddate"), dfDateTime); 
	m_hms_roomlistTbl.AddField(_T("hrl_updatedby"), dfText, 15); 
	m_hms_roomlistTbl.AddField(_T("hrl_updateddate"), dfDateTime); 
	m_hms_roomlistTbl.AddField(_T("hrl_id"), dfLong);
    m_hms_roomlistTbl.AddField(_T("hrl_deptid"), dfText, 7); 
	m_hms_roomlistTbl.AddField(_T("hrl_name"), dfText, 128); 
	m_hms_roomlistTbl.AddField(_T("hrl_type"), dfInteger); 
	m_hms_roomlistTbl.AddField(_T("hrl_section"), dfText, 7); 
	m_hms_roomlistTbl.AddField(_T("hrl_active"), dfText,1); 
	m_hms_roomlistTbl.AddField(_T("hrl_isreq"), dfText,1); 
	m_hms_roomlistTbl.AddField(_T("hrl_zone"), dfText,16); 
	m_hms_roomlistTbl.AddField(_T("hrl_inscode"), dfText, 2);
	m_hms_roomlistTbl.AddField(_T("hrl_group"), dfText, 10); 
	m_hms_roomlistTbl.AddField(_T("hrl_address"), dfText, 21);
	m_hms_roomlistTbl.AddField(_T("hrl_index"), dfLong);
	m_hms_roomlistTbl.AddField(_T("hrl_desc"), dfText, 512);

}
void CHMSRoomSetupDialog_V2::OnSetWindowEvents(){
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndRoomList.SetEvent(WE_SELCHANGE, _OnRoomListSelectChangeFnc);
	m_wndRoomList.SetEvent(WE_LOADDATA, _OnRoomListLoadDataFnc);
	m_wndRoomList.SetEvent(WE_DBLCLICK, _OnRoomListDblClickFnc);
	m_wndRoomList.SetWindowText(_T("Room List"));
	m_wndRoomList.AddEvent(7, _T("Search"), _OnRoomListSearchFnc);
	//m_wndRoomList.AddEvent(1, _T("Delete"), _OnRoomListDeleteItemFnc, 0, VK_DELETE, 0);
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	m_wndType.SetEvent(WE_SELENDOK, _OnTypeSelendokFnc);
	//m_wndType.SetEvent(WE_SETFOCUS, _OnTypeSetfocusFnc);
	//m_wndType.SetEvent(WE_KILLFOCUS, _OnTypeKillfocusFnc);
	m_wndType.SetEvent(WE_SELCHANGE, _OnTypeSelectChangeFnc);
	m_wndType.SetEvent(WE_LOADDATA, _OnTypeLoadDataFnc);
	//m_wndType.SetEvent(WE_ADDNEW, _OnTypeAddNewFnc);
	m_wndExamType.SetEvent(WE_LOADDATA, _OnExamTypeLoadDataFnc);
	//m_wndSection.SetEvent(WE_CHANGE, _OnSectionChangeFnc);
	//m_wndSection.SetEvent(WE_SETFOCUS, _OnSectionSetfocusFnc);
	//m_wndSection.SetEvent(WE_KILLFOCUS, _OnSectionKillfocusFnc);
	m_wndSection.SetEvent(WE_CHECKVALUE, _OnSectionCheckValueFnc);
	m_wndZone.SetEvent(WE_CHECKVALUE, _OnZoneCheckValueFnc);
	m_wndZone.SetEvent(WE_LOADDATA, _OnZoneLoadDataFnc);
	m_wndGroupType.SetEvent(WE_LOADDATA, _OnGroupTypeLoadDataFnc);
	m_wndAddress.SetEvent(WE_CHECKVALUE, _OnAddressCheckValueFnc);
	m_wndIndexNo.SetEvent(WE_CHECKVALUE, _OnIndexNoCheckValueFnc);
	m_wndMo_ta.SetEvent(WE_CHECKVALUE, _OnMo_taCheckValueFnc);
	SetMode(VM_NONE);
	OnRoomListLoadData();
}
void CHMSRoomSetupDialog_V2::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_TextEx(pDX, m_wndType.GetDlgCtrlID(), m_szTypeKey);
	DDX_Text(pDX, m_wndSection.GetDlgCtrlID(), m_szSection);
	DDX_Text(pDX, m_wndZone.GetDlgCtrlID(), m_szZoneKey);
	DDX_Check(pDX, m_wndActive.GetDlgCtrlID(), m_bActive);
	DDX_Check(pDX, m_wndSOD.GetDlgCtrlID(), m_bSOD);
	DDX_TextEx(pDX, m_wndExamType.GetDlgCtrlID(), m_szExamTypeKey);
	DDX_TextEx(pDX, m_wndZone.GetDlgCtrlID(), m_szZoneKey);
	DDX_TextEx(pDX, m_wndGroupType.GetDlgCtrlID(), m_szGroupTypeKey);
	DDX_Text(pDX, m_wndAddress.GetDlgCtrlID(), m_szAddress);
	DDX_Text(pDX, m_wndIndexNo.GetDlgCtrlID(), m_nIndexNo);
	DDX_Text(pDX, m_wndMo_ta.GetDlgCtrlID(), m_szMo_ta);
	
}
void CHMSRoomSetupDialog_V2::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL,tmpStr;
	szSQL.Format(_T("SELECT * FROM hms_roomlist WHERE hrl_id=%d and hrl_deptid='%s'"), m_nID, m_szDeptID);
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
	if(!rs.IsEOF()){
		rs.GetValue(_T("hrl_name"), m_szName);
		rs.GetValue(_T("hrl_type"), m_szTypeKey);
		rs.GetValue(_T("hrl_section"), m_szSection);
		rs.GetValue(_T("hrl_active"), tmpStr);
		m_bActive = tmpStr==_T("Y")?true:false;
		rs.GetValue(_T("hrl_isreq"), tmpStr);
		m_bSOD = tmpStr==_T("Y")?true:false;
		rs.GetValue(_T("hrl_zone"), m_szZoneKey);
		rs.GetValue(_T("hrl_inscode"), m_szExamTypeKey);
		rs.GetValue(_T("hrl_group"), m_szGroupTypeKey);
		rs.GetValue(_T("hrl_address"), m_szAddress);
		rs.GetValue(_T("hrl_index"), m_nIndexNo);
		rs.GetValue(_T("hrl_desc"), m_szMo_ta);
		SetMode(VM_VIEW);
	}
	else
		SetMode(VM_NONE);

}
void CHMSRoomSetupDialog_V2::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	if(GetMode() == VM_ADD)
	{
		CString szSQL;
		CRecord rs(&pMF->m_db);
		m_hms_roomlistTbl.SetValue(_T("hrl_createdby"), pMF->GetCurrentUser());
		m_hms_roomlistTbl.SetValue(_T("hrl_createddate"), pMF->GetSysDateTime());
		szSQL.Format(_T("select coalesce(max(hrl_id), 0)+1 FROM hms_roomlist WHERE hrl_deptid='%s' "), m_szDeptID);
		rs.ExecSQL(szSQL);
		m_nID = rs.GetIntValue();
	}
	m_hms_roomlistTbl.SetValue(_T("hrl_updatedby"), pMF->GetCurrentUser());
	m_hms_roomlistTbl.SetValue(_T("hrl_updateddate"), pMF->GetSysDateTime());
    m_hms_roomlistTbl.SetValue(_T("hrl_id"), m_nID);
    m_hms_roomlistTbl.SetValue(_T("hrl_deptid"), m_szDeptID);
	m_hms_roomlistTbl.SetValue(_T("hrl_name"), m_szName);
	m_hms_roomlistTbl.SetValue(_T("hrl_type"), m_szTypeKey);
	m_hms_roomlistTbl.SetValue(_T("hrl_section"), m_szSection);
	m_hms_roomlistTbl.SetValue(_T("hrl_active"), m_bActive?_T("Y"):_T("N"));
	m_hms_roomlistTbl.SetValue(_T("hrl_isreq"), m_bSOD?_T("Y"):_T("N"));
	m_hms_roomlistTbl.SetValue(_T("hrl_zone"), m_szZoneKey);
	m_hms_roomlistTbl.SetValue(_T("hrl_inscode"), m_szExamTypeKey);
	m_hms_roomlistTbl.SetValue(_T("hrl_group"), m_szGroupTypeKey);
	m_hms_roomlistTbl.SetValue(_T("hrl_address"), m_szAddress);
	m_hms_roomlistTbl.SetValue(_T("hrl_index"), m_nIndexNo);
	m_hms_roomlistTbl.SetValue(_T("hrl_desc"), m_szMo_ta);

	if (GetMode() == VM_VIEW)
    {
        m_parser.PushRowData(&m_hms_roomlistTbl);
    }
    else if (GetMode() == VM_EDIT)
    {
        m_parser.PushRowData(&m_hms_roomlistTbl, true);
    }
}
void CHMSRoomSetupDialog_V2::SetDefaultValues(){
	m_nID = 1;
	m_szName.Empty();
	m_szTypeKey.Empty();
	m_bSOD = FALSE;
	m_bActive = FALSE;
	//m_szSection.Empty();
	m_szExamTypeKey.Empty();
	m_szAddress.Empty();

}
int CHMSRoomSetupDialog_V2::SetMode(int nMode){ 
 		int nOldMode = GetMode(); 
 		CGuiDialog::SetMode(nMode); 
 		CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
  		switch(nMode){ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 3, 4, -1); 
 			SetDefaultValues(); 
			m_wndType.SetFocus();
 			break; 
 		case VM_EDIT: 
 			EnableControls(false); 
 			EnableButtons(TRUE, 3, 4, -1); 
			m_wndName.SetFocus();
			m_wndMo_ta.EnableWindow(true);
 			break; 
 		case VM_VIEW: 
 			EnableControls(FALSE); 
 			EnableButtons(FALSE, 3, 4, -1); 
 			break; 
 		case VM_NONE: 
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 0, 6, -1); 
 			SetDefaultValues(); 
			m_wndAdd.SetFocus();
 			break; 
 		};
		m_wndAdd.EnableWindow(false);
		m_wndDelete.EnableWindow(false);
		
 		UpdateData(FALSE); 
 		return nOldMode; 
 	} 
void CHMSRoomSetupDialog_V2::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	OnAddHMSRoomSetupDialog();	
}

int CHMSRoomSetupDialog_V2::OnIndexNoCheckValue()
{
	return 0;
} 

void CHMSRoomSetupDialog_V2::OnEditSelect(){
	OnEditHMSRoomSetupDialog();	
} 
void CHMSRoomSetupDialog_V2::OnDeleteSelect(){
	OnDeleteHMSRoomSetupDialog();	
} 
void CHMSRoomSetupDialog_V2::OnSaveSelect(){
	OnSaveHMSRoomSetupDialog();	
} 
void CHMSRoomSetupDialog_V2::OnCancelSelect(){
	OnCancelHMSRoomSetupDialog();	
} 
void CHMSRoomSetupDialog_V2::OnRoomListDblClick(){
	
}
int CHMSRoomSetupDialog_V2::OnAddressCheckValue(){
	return 0;
} 
long CHMSRoomSetupDialog_V2::OnGroupTypeLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	m_wndGroupType.DeleteAllItems(); 
	int nCount = 0;
	if(m_wndGroupType.IsSearchKey() && !m_szGroupTypeKey.IsEmpty()){
		szWhere.Format(_T(" AND hfg_id='%s' "), m_szGroupTypeKey);
	}
	szSQL.Format(_T("SELECT hfg_id as id, hfg_name as groupname from hms_fee_group where substr(hfg_id, 1,2) in ('B1', 'B2', 'B3') AND HFG_ACTIVE='Y' %s order by hfg_id"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF())
	{ 
		m_wndGroupType.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("groupname")), 
			NULL);
		rs.MoveNext();
	}

	return nCount;
}
void CHMSRoomSetupDialog_V2::OnRoomListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	if(nNewItem < 0)
		return;
	m_nID = ToLong(m_wndRoomList.GetItemText(nNewItem, 0));
	GetDataToScreen();	
} 
int CHMSRoomSetupDialog_V2::OnRoomListDeleteItem(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	OnDeleteHMSRoomSetupDialog();
	 return 0;
} 
long CHMSRoomSetupDialog_V2::OnRoomListLoadData(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndRoomList.BeginLoad(); 
	m_wndRoomList.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT r.*, ") \
				_T(" get_syssel_desc('HMS_EXAM_TYPE', hrl_inscode) as exam_type, ") \
				_T(" (SELECT hfg_name FROM hms_fee_group WHERE hfg_id=hrl_group) as groupname") \
				_T(" FROM hms_roomlist r ") \
				_T(" WHERE hrl_deptid='%s' ") \
				_T(" ORDER BY hrl_id "), m_szDeptID);
	nCount = rs.ExecSQL(szSQL);

	while(!rs.IsEOF()){ 
		m_wndRoomList.AddItems(
			rs.GetValue(_T("hrl_id")), 
			rs.GetValue(_T("hrl_name")),
			rs.GetValue(_T("hrl_index")),
			rs.GetValue(_T("hrl_section")),
			rs.GetValue(_T("hrl_address")),
			rs.GetValue(_T("hrl_type")), 
			rs.GetValue(_T("hrl_active")),
			rs.GetValue(_T("hrl_zone")),
			rs.GetValue(_T("exam_type")),
			rs.GetValue(_T("groupname")),
			
			NULL);
		rs.MoveNext();
	}
	m_wndRoomList.EndLoad(); 
	return nCount;

}
/*void CHMSRoomSetupDialog_V2::OnNameChange(){
	
} */
/*void CHMSRoomSetupDialog_V2::OnNameSetfocus(){
	
} */
/*void CHMSRoomSetupDialog_V2::OnNameKillfocus(){
	
} */
int CHMSRoomSetupDialog_V2::OnNameCheckValue(){
	return 0;
} 
void CHMSRoomSetupDialog_V2::OnTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	
} 
void CHMSRoomSetupDialog_V2::OnTypeSelendok(){
	 
}
/*void CHMSRoomSetupDialog_V2::OnTypeSetfocus(){
	
}*/
/*void CHMSRoomSetupDialog_V2::OnTypeKillfocus(){
	
}*/
long CHMSRoomSetupDialog_V2::OnTypeLoadData(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	m_wndType.DeleteAllItems(); 
	int nCount = 0;
	if(m_wndType.IsSearchKey() && !m_szTypeKey.IsEmpty()){
		//szWhere.Format(_T(" AND ss_code='%s' "), m_szTypeKey);
	}
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as description from sys_sel where ss_id='hms_dept_category' %s ORDER BY ss_code"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndType.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), 
			NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CHMSRoomSetupDialog_V2::OnTypeAddNew(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	
} */
/*void CHMSRoomSetupDialog_V2::OnSectionChange(){
	
} */
/*void CHMSRoomSetupDialog_V2::OnSectionSetfocus(){
	
} */
/*void CHMSRoomSetupDialog_V2::OnSectionKillfocus(){
	
} */
int CHMSRoomSetupDialog_V2::OnSectionCheckValue(){
	return 0;
}
int CHMSRoomSetupDialog_V2::OnZoneCheckValue(){
	return 0;
}
int CHMSRoomSetupDialog_V2::OnAddHMSRoomSetupDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
 
} 
int CHMSRoomSetupDialog_V2::OnEditHMSRoomSetupDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
return 0;  
 
} 
int CHMSRoomSetupDialog_V2::OnDeleteHMSRoomSetupDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
	CRecord rs(&pMF->m_db);
	int nSel = m_wndRoomList.GetCurSel();
	if(nSel < 0) return 0;
	m_nID = ToInt(m_wndRoomList.GetItemText(nSel, 0));
	szSQL.Format(_T("SELECT count(*) FROM hms_exam WHERE he_deptid='%s' AND he_roomid =%d"), m_szDeptID, m_nID);
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() > 0){
		return -1;
	}

	szSQL.Format(_T("SELECT count(*) FROM hms_bed WHERE hb_deptid='%s' AND hb_roomid =%d"), m_szDeptID, m_nID);
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() > 0){
		return -1;
	}

 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
	szSQL.Format(_T("DELETE FROM  hms_roomlist WHERE hrl_deptid='%s' AND hrl_id=%d"), m_szDeptID, m_nID ); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret >= 0){ 
 		SetMode(VM_NONE); 
 		OnCancelHMSRoomSetupDialog(); 
		m_wndRoomList.DeleteItem(nSel);
 	}
	return 0;
 } 
int CHMSRoomSetupDialog_V2::OnSaveHMSRoomSetupDialog()
{
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
 	CString szSQL, szEvent, szDescr; 
 	if(GetMode() == VM_ADD)
	{ 
 		szSQL = m_hms_roomlistTbl.GetInsertSQL(); 
		szEvent = _T("RM_create_room");
        szDescr.Format(_T("[userid=%s]"), pMF->GetCurrentUser());
        pMF->SystemLog(szEvent, szDescr);
 	} 
 	else if(GetMode() == VM_EDIT)
	{ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE hrl_id=%ld and hrl_deptid='%s' "), m_nID, m_szDeptID); 
 		szSQL = m_hms_roomlistTbl.GetUpdateSQL(_T("hrl_createdby,hrl_createddate,hrl_id,hrl_deptid")); 
 		szSQL += szWhere; 
 	} 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		
		CString szRowChange = m_parser.GetRowChange();
        
        if (!szRowChange.IsEmpty())
        {
            szEvent.Format(_T("RM_edit_room"));
            szDescr.Format(_T("[userid=%s] %s"), pMF->GetCurrentUser(), szRowChange);
            pMF->SystemLog(szEvent, szDescr);
        }
		
		SetMode(VM_VIEW);
		m_wndAdd.SetFocus();
		OnRoomListLoadData();
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSRoomSetupDialog_V2::OnCancelHMSRoomSetupDialog(){
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
int CHMSRoomSetupDialog_V2::OnHMSRoomSetupDialogListLoadData(){
	return 0;
}


long CHMSRoomSetupDialog_V2::OnExamTypeLoadData()
{
	CMainFrame* pMF = (CMainFrame*) AfxGetMainWnd();
	return pMF->LoadSelectionList(&m_wndExamType, _T("HMS_EXAM_TYPE"), m_szExamTypeKey);
}

long CHMSRoomSetupDialog_V2::OnZoneLoadData()
{
	CMainFrame* pMF = (CMainFrame*) AfxGetMainWnd();
	return pMF->LoadSelectionList(&m_wndZone, _T("HMS_TREAT_ZONE"), m_szZoneKey);
}

int CHMSRoomSetupDialog_V2::OnMo_taCheckValue(){
	return 0;
} 

void CHMSRoomSetupDialog_V2::OnRoomListSearch()
{
	CSearchPopup *newPopup = new CSearchPopup(&m_wndRoomList);
	newPopup->m_nSearchCol = 1;
	newPopup->ShowPopup(&m_wndRoomList);	
}