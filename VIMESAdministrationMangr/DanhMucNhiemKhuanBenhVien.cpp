#include "DanhMucNhiemKhuanBenhVien.h"
//#include "stdafx.h"
#include "MainFrm.h"
static void _OnFindChangeFnc(CWnd *pWnd){
	((CDanhMucNhiemKhuanBenhVienSetup *)pWnd)->OnFindChange();
}
/*static void _OnFindSetfocusFnc(CWnd *pWnd){
	((CDanhMucNhiemKhuanBenhVienSetup *)pWnd)->OnFindSetfocus();} */ 
/*static void _OnFindKillfocusFnc(CWnd *pWnd){
	((CDanhMucNhiemKhuanBenhVienSetup *)pWnd)->OnFindKillfocus();
} */
static int _OnFindCheckValueFnc(CWnd *pWnd){
	return ((CDanhMucNhiemKhuanBenhVienSetup *)pWnd)->OnFindCheckValue();
} 
static int _OnDanhMucNhiemKhuanBenhVienListLoadDataFnc(CWnd *pWnd){
	 return ((CDanhMucNhiemKhuanBenhVienSetup*)pWnd)->OnDanhMucNhiemKhuanBenhVienListLoadData();
} 
static int _OnDanhMucNhiemKhuanBenhVienListDblClickFnc(CWnd *pWnd){
	 return ((CDanhMucNhiemKhuanBenhVienSetup*)pWnd)->OnDanhMucNhiemKhuanBenhVienListDblClick();
} 
static int _OnDanhMucNhiemKhuanBenhVienListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	 return ((CDanhMucNhiemKhuanBenhVienSetup*)pWnd)->OnDanhMucNhiemKhuanBenhVienListSelectChange(nOldItem, nNewItem);
} 
static int _OnDanhMucNhiemKhuanBenhVienListDeleteItemFnc(CWnd *pWnd){
	 return ((CDanhMucNhiemKhuanBenhVienSetup*)pWnd)->OnDanhMucNhiemKhuanBenhVienListDeleteItem();
} 
/*static int _OnIDChangeFnc(CWnd *pWnd){
	return ((CDanhMucNhiemKhuanBenhVienSetup *)pWnd)->OnIDChange();
} */
/*static int _OnIDSetfocusFnc(CWnd *pWnd){
	return ((CDanhMucNhiemKhuanBenhVienSetup *)pWnd)->OnIDKillfocus();} */ 
/*static int _OnIDKillfocusFnc(CWnd *pWnd){
	return ((CDanhMucNhiemKhuanBenhVienSetup *)pWnd)->OnIDKillfocus();
} */
static int _OnIDCheckValueFnc(CWnd *pWnd){
	return ((CDanhMucNhiemKhuanBenhVienSetup *)pWnd)->OnIDCheckValue();
} 
static int _OnModuleSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	 return ((CDanhMucNhiemKhuanBenhVienSetup* )pWnd)->OnModuleSelectChange(nOldItemSel, nNewItemSel);
} 
static int _OnModuleSelendokFnc(CWnd *pWnd){
	 return ((CDanhMucNhiemKhuanBenhVienSetup *)pWnd)->OnModuleSelendok();
}
/*static int _OnModuleSetfocusFnc(CWnd *pWnd){
	 return ((CDanhMucNhiemKhuanBenhVienSetup *)pWnd)->OnModuleKillfocus();
}*/
/*static int _OnModuleKillfocusFnc(CWnd *pWnd){
	 return ((CDanhMucNhiemKhuanBenhVienSetup *)pWnd)->OnModuleKillfocus();
}*/
static int _OnModuleLoadDataFnc(CWnd *pWnd){
	 return ((CDanhMucNhiemKhuanBenhVienSetup *)pWnd)->OnModuleLoadData();
}
/*static int _OnModuleAddNewFnc(CWnd *pWnd){
	 return ((CDanhMucNhiemKhuanBenhVienSetup *)pWnd)->OnModuleAddNew();
}*/
/*static int _OnDescriptionChangeFnc(CWnd *pWnd){
	return ((CDanhMucNhiemKhuanBenhVienSetup *)pWnd)->OnDescriptionChange();
} */
/*static int _OnDescriptionSetfocusFnc(CWnd *pWnd){
	return ((CDanhMucNhiemKhuanBenhVienSetup *)pWnd)->OnDescriptionKillfocus();} */ 
/*static int _OnDescriptionKillfocusFnc(CWnd *pWnd){
	return ((CDanhMucNhiemKhuanBenhVienSetup *)pWnd)->OnDescriptionKillfocus();
} */
static int _OnDescriptionCheckValueFnc(CWnd *pWnd){
	return ((CDanhMucNhiemKhuanBenhVienSetup *)pWnd)->OnDescriptionCheckValue();
} 
static int _OnAddSelectFnc(CWnd *pWnd){
	CDanhMucNhiemKhuanBenhVienSetup *pVw = (CDanhMucNhiemKhuanBenhVienSetup *)pWnd;
	return pVw->OnAddSelect();
} 
static int _OnEditSelectFnc(CWnd *pWnd){
	CDanhMucNhiemKhuanBenhVienSetup *pVw = (CDanhMucNhiemKhuanBenhVienSetup *)pWnd;
	return pVw->OnEditSelect();
} 
static int _OnDeleteSelectFnc(CWnd *pWnd){
	CDanhMucNhiemKhuanBenhVienSetup *pVw = (CDanhMucNhiemKhuanBenhVienSetup *)pWnd;
	return pVw->OnDeleteSelect();
} 
static int _OnSaveSelectFnc(CWnd *pWnd){
	CDanhMucNhiemKhuanBenhVienSetup *pVw = (CDanhMucNhiemKhuanBenhVienSetup *)pWnd;
	return pVw->OnSaveSelect();
} 
static int _OnCancelSelectFnc(CWnd *pWnd){
	CDanhMucNhiemKhuanBenhVienSetup *pVw = (CDanhMucNhiemKhuanBenhVienSetup *)pWnd;
	return pVw->OnCancelSelect();
} 
static int _OnAddDanhMucNhiemKhuanBenhVienFnc(CWnd *pWnd){
	 return ((CDanhMucNhiemKhuanBenhVienSetup*)pWnd)->OnAddDanhMucNhiemKhuanBenhVien();
} 
static int _OnEditDanhMucNhiemKhuanBenhVienFnc(CWnd *pWnd){
	 return ((CDanhMucNhiemKhuanBenhVienSetup*)pWnd)->OnEditDanhMucNhiemKhuanBenhVien();
} 
static int _OnDeleteDanhMucNhiemKhuanBenhVienFnc(CWnd *pWnd){
	 return ((CDanhMucNhiemKhuanBenhVienSetup*)pWnd)->OnDeleteDanhMucNhiemKhuanBenhVien();
} 
static int _OnSaveDanhMucNhiemKhuanBenhVienFnc(CWnd *pWnd){
	 return ((CDanhMucNhiemKhuanBenhVienSetup*)pWnd)->OnSaveDanhMucNhiemKhuanBenhVien();
} 
static int _OnCancelDanhMucNhiemKhuanBenhVienFnc(CWnd *pWnd){
	 return ((CDanhMucNhiemKhuanBenhVienSetup*)pWnd)->OnCancelDanhMucNhiemKhuanBenhVien();
}
static long _OnGroupLoadDataFnc(CWnd *pWnd){
	return ((CDanhMucNhiemKhuanBenhVienSetup *)pWnd)->OnGroupLoadData();
}
CDanhMucNhiemKhuanBenhVienSetup::CDanhMucNhiemKhuanBenhVienSetup()
{

	m_nDlgWidth = 810;
	m_nDlgHeight = 620;
	SetDefaultValues();
}
CDanhMucNhiemKhuanBenhVienSetup::~CDanhMucNhiemKhuanBenhVienSetup(){
}
void CDanhMucNhiemKhuanBenhVienSetup::OnCreateComponents()
{
	m_wndFindLabel.Create(this, _T("Find"), 10, 30, 115, 55);
	m_wndFind.Create(this,120, 30, 420, 55); 
	m_wndDanhMucNhiemKhuanBenhVienList.Create(this,10, 60, 800, 492); 
	m_wndModuleLabel.Create(this, _T("Phân nhóm"), 10, 497, 90, 522);
	m_wndModule.Create(this,96, 497, 585, 522); 
	m_wndIDLabel.Create(this, _T("ID"), 590, 497, 640, 522);
	m_wndID.Create(this,645, 497, 800, 522); 
	m_wndDanhMucNhiemKhuanBenhVienInformatioin.Create(this, _T("Danh mục phân loại nhiễm khuẩn tại bệnh viện 108"), 5, 5, 805, 590);
	m_wndDescriptionLabel.Create(this, _T("Description"), 10, 527, 90, 552);
	m_wndDescription.Create(this,96, 527, 800, 552); 
	m_wndGroupLabel.Create(this, _T("Ghi chú"), 10, 557, 90, 582);
	
	m_wndGroup.Create(this,95, 557, 800, 582); 
	m_wndGroup.SetReadOnly(true);
	
	m_wndAdd.Create(this, _T("&Add"), 410, 595, 485, 620);
	m_wndEdit.Create(this, _T("&Edit"), 490, 595, 565, 620);
	m_wndDelete.Create(this, _T("&Delete"), 570, 595, 645, 620);
	m_wndSave.Create(this, _T("&Save"), 650, 595, 725, 620);
	m_wndCancel.Create(this, _T("&Cancel"), 730, 595, 805, 620);
}
void CDanhMucNhiemKhuanBenhVienSetup::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	EnableControls(true);
	//EnableButtons(TRUE, 0, -1);
	m_wndFind.SetLimitText(35);
	m_wndModule.SetCheckValue(true);
	m_wndModule.LimitText(7);
	m_wndID.SetLimitText(21);
	m_wndID.SetCheckValue(true);
	m_wndDescription.SetLimitText(512);
	m_wndDescription.SetCheckValue(true);
	

	m_wndDanhMucNhiemKhuanBenhVienList.InsertColumn(0, _T("Nhóm"), CFMT_TEXT, 50);
	m_wndDanhMucNhiemKhuanBenhVienList.InsertColumn(1, _T("ID"), CFMT_TEXT, 50);
	m_wndDanhMucNhiemKhuanBenhVienList.InsertColumn(2, _T("Description"), CFMT_TEXT, 650);
	m_wndDanhMucNhiemKhuanBenhVienList.InsertColumn(3, _T("Ghi chú"), CFMT_TEXT, 450);
	
	m_wndGroup.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndGroup.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndModule.InsertColumn(0, _T("ID"), CFMT_TEXT, 70);
	m_wndModule.InsertColumn(1, _T("Name"), CFMT_TEXT, 400);
	m_sys_DanhMucNhiemKhuanBenhVienTbl.SetTableName(_T("sys_DanhMucNhiemKhuanBenhVien"));
	m_sys_DanhMucNhiemKhuanBenhVienTbl.AddField(_T("sp_id"), dfText, 7); 
	m_sys_DanhMucNhiemKhuanBenhVienTbl.AddField(_T("sp_group"), dfText, 7); 
	m_sys_DanhMucNhiemKhuanBenhVienTbl.AddField(_T("sp_name"), dfText, 512);
	m_sys_DanhMucNhiemKhuanBenhVienTbl.AddField(_T("sp_note"), dfText, 512); 
}
void CDanhMucNhiemKhuanBenhVienSetup::OnSetWindowEvents(){
	m_wndFind.SetEvent(WE_CHANGE, _OnFindChangeFnc);
	//m_wndFind.SetEvent(WE_SETFOCUS, _OnFindSetfocusFnc);
	//m_wndFind.SetEvent(WE_KILLFOCUS, _OnFindKillfocusFnc);
	m_wndFind.SetEvent(WE_CHECKVALUE, _OnFindCheckValueFnc);
	m_wndDanhMucNhiemKhuanBenhVienList.SetEvent(WE_SELCHANGE, _OnDanhMucNhiemKhuanBenhVienListSelectChangeFnc);
	m_wndDanhMucNhiemKhuanBenhVienList.SetEvent(WE_LOADDATA, _OnDanhMucNhiemKhuanBenhVienListLoadDataFnc);
	m_wndDanhMucNhiemKhuanBenhVienList.SetEvent(WE_DBLCLICK, _OnDanhMucNhiemKhuanBenhVienListDblClickFnc);
	m_wndDanhMucNhiemKhuanBenhVienList.AddEvent(1, _T("Delete"), _OnDanhMucNhiemKhuanBenhVienListDeleteItemFnc, 0, VK_DELETE, 0);
	//m_wndID.SetEvent(WE_CHANGE, _OnIDChangeFnc);
	//m_wndID.SetEvent(WE_SETFOCUS, _OnIDSetfocusFnc);
	//m_wndID.SetEvent(WE_KILLFOCUS, _OnIDKillfocusFnc);
	m_wndID.SetEvent(WE_CHECKVALUE, _OnIDCheckValueFnc);
	m_wndModule.SetEvent(WE_SELENDOK, _OnModuleSelendokFnc);
	//m_wndModule.SetEvent(WE_SETFOCUS, _OnModuleSetfocusFnc);
	//m_wndModule.SetEvent(WE_KILLFOCUS, _OnModuleKillfocusFnc);
	m_wndModule.SetEvent(WE_SELCHANGE, _OnModuleSelectChangeFnc);
	m_wndModule.SetEvent(WE_LOADDATA, _OnModuleLoadDataFnc);
	//m_wndModule.SetEvent(WE_ADDNEW, _OnModuleAddNewFnc);
	//m_wndDescription.SetEvent(WE_CHANGE, _OnDescriptionChangeFnc);
	//m_wndDescription.SetEvent(WE_SETFOCUS, _OnDescriptionSetfocusFnc);
	//m_wndDescription.SetEvent(WE_KILLFOCUS, _OnDescriptionKillfocusFnc);
	m_wndDescription.SetEvent(WE_CHECKVALUE, _OnDescriptionCheckValueFnc);
	m_wndGroup.SetEvent(WE_LOADDATA, _OnGroupLoadDataFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
/*
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddDanhMucNhiemKhuanBenhVienFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditDanhMucNhiemKhuanBenhVienFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteDanhMucNhiemKhuanBenhVienFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveDanhMucNhiemKhuanBenhVienFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelDanhMucNhiemKhuanBenhVienFnc, 0, 'T', VK_CONTROL);
*/
	SetMode(VM_NONE);
}
void CDanhMucNhiemKhuanBenhVienSetup::OnDoDataExchange(CDataExchange* pDX)
{
	DDX_Text(pDX, m_wndFind.GetDlgCtrlID(), m_szFind);
	DDX_Text(pDX, m_wndID.GetDlgCtrlID(), m_szID);
	DDX_TextEx(pDX, m_wndModule.GetDlgCtrlID(), m_szModuleKey);
	DDX_Text(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescription);
	DDX_TextEx(pDX, m_wndGroup.GetDlgCtrlID(), m_szGroupKey);
}
void CDanhMucNhiemKhuanBenhVienSetup::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM sys_DanhMucNhiemKhuanBenhVien WHERE sp_group='%s' AND sp_id='%s' "), m_szModuleKey, m_szID);
	int ret = rs.ExecSQL(szSQL);
	if(ret > 0){
		m_szModuleKey = rs.GetValue(_T("sp_group"));
		m_szID = rs.GetValue(_T("sp_id"));
		m_szDescription = rs.GetValue(_T("sp_name"));
		EnableButtons(TRUE, 0, 1, 2, -1);
		SetMode(VM_VIEW);
	}
	else
	{
		SetDefaultValues();
		EnableButtons(TRUE, 0, -1);
		SetMode(VM_NONE);
	}
	UpdateData(false);
}
void CDanhMucNhiemKhuanBenhVienSetup::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	m_sys_DanhMucNhiemKhuanBenhVienTbl.SetValue(_T("sp_id"), m_szID);
	m_sys_DanhMucNhiemKhuanBenhVienTbl.SetValue(_T("sp_group"), m_szModuleKey);
	m_sys_DanhMucNhiemKhuanBenhVienTbl.SetValue(_T("sp_name"), m_szDescription);
	m_sys_DanhMucNhiemKhuanBenhVienTbl.SetValue(_T("sp_note"), m_szGroupKey);

}
void CDanhMucNhiemKhuanBenhVienSetup::SetDefaultValues()
{
	m_szFind.Empty();
	m_szID.Empty();
	m_szDescription.Empty();
}
int CDanhMucNhiemKhuanBenhVienSetup::OnDanhMucNhiemKhuanBenhVienListDblClick(){
	 return 0;
} 
int CDanhMucNhiemKhuanBenhVienSetup::OnDanhMucNhiemKhuanBenhVienListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	m_szModuleKey = m_wndDanhMucNhiemKhuanBenhVienList.GetItemText(nNewItem, 0);
	m_szID = m_wndDanhMucNhiemKhuanBenhVienList.GetItemText(nNewItem, 1);
	GetDataToScreen();
	 return 0;
} 
int CDanhMucNhiemKhuanBenhVienSetup::OnDanhMucNhiemKhuanBenhVienListDeleteItem(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	 return 0;
} 
int CDanhMucNhiemKhuanBenhVienSetup::OnDanhMucNhiemKhuanBenhVienListLoadData()
{
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	UpdateData(true);
	if (!m_szFind.IsEmpty())
		szWhere.AppendFormat(_T(" AND lower(sp_name) like(chr(37)||lower('%s')||chr(37))"), m_szFind);

	if(!m_szModuleKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND sp_group='%s' "), m_szModuleKey);

	szSQL.Format(_T("SELECT sp_group as groupid, sp_id as id, sp_name as namex, ss_desc as groupname FROM sys_DanhMucNhiemKhuanBenhVien LEFT JOIN sys_sel ON (SP_GROUP=ss_code) WHERE 1= 1 AND ss_id='sys_phanloai_nhomnk' %s ORDER BY sp_group, sp_id"), szWhere);
   //_msg(_T("%s"), szSQL);

	m_wndDanhMucNhiemKhuanBenhVienList.BeginLoad(); 
	m_wndDanhMucNhiemKhuanBenhVienList.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDanhMucNhiemKhuanBenhVienList.AddItems
			(
			rs.GetValue(_T("groupid")), 
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("namex")),
		    rs.GetValue(_T("groupname")), NULL);
		rs.MoveNext();
	}
	m_wndDanhMucNhiemKhuanBenhVienList.EndLoad(); 
	return nCount;
}
void CDanhMucNhiemKhuanBenhVienSetup::OnFindChange(){
	OnDanhMucNhiemKhuanBenhVienListLoadData();
}
/*void CDanhMucNhiemKhuanBenhVienSetup::OnFindSetfocus(){
	
} */
/*void CDanhMucNhiemKhuanBenhVienSetup::OnFindKillfocus(){
	
} */
int CDanhMucNhiemKhuanBenhVienSetup::OnFindCheckValue(){
	OnDanhMucNhiemKhuanBenhVienListLoadData();
	return 0;
} 
/*int CDanhMucNhiemKhuanBenhVienSetup::OnIDChange(){
	return 0;
} */
/*int CDanhMucNhiemKhuanBenhVienSetup::OnIDSetfocus(){
	return 0;
} */
/*int CDanhMucNhiemKhuanBenhVienSetup::OnIDKillfocus(){
	return 0;
} */
long CDanhMucNhiemKhuanBenhVienSetup::OnGroupLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndGroup.IsSearchKey() && !m_szGroupKey.IsEmpty()){
		szWhere.Format(_T("AND ss_code='%s' "), m_szGroupKey);
	};
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ss_id='sys_user_group' %s ORDER BY ss_code"), szWhere);
	m_wndGroup.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndGroup.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return 0;
}

int CDanhMucNhiemKhuanBenhVienSetup::OnIDCheckValue(){
	return 0;
} 
int CDanhMucNhiemKhuanBenhVienSetup::OnModuleSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	 return 0;
} 
int CDanhMucNhiemKhuanBenhVienSetup::OnModuleSelendok(){
	OnDanhMucNhiemKhuanBenhVienListLoadData();
	 return 0;
}
/*int CDanhMucNhiemKhuanBenhVienSetup::OnModuleSetfocus(){
	 return 0;
}*/
/*int CDanhMucNhiemKhuanBenhVienSetup::OnModuleKillfocus(){
	 return 0;
}*/
int CDanhMucNhiemKhuanBenhVienSetup::OnModuleLoadData(){

	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndModule.IsSearchKey() && !m_szModuleKey.IsEmpty()){
		szWhere.Format(_T("AND ss_code='%s' "), m_szModuleKey);
	};
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ss_id='sys_phanloai_nhomnk' %s ORDER BY ss_code"), szWhere);
	m_wndModule.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndModule.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*int CDanhMucNhiemKhuanBenhVienSetup::OnModuleAddNew(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	 return 0;
} */
/*int CDanhMucNhiemKhuanBenhVienSetup::OnDescriptionChange(){
	return 0;
} */
/*int CDanhMucNhiemKhuanBenhVienSetup::OnDescriptionSetfocus(){
	return 0;
} */
/*int CDanhMucNhiemKhuanBenhVienSetup::OnDescriptionKillfocus(){
	return 0;
} */
int CDanhMucNhiemKhuanBenhVienSetup::OnDescriptionCheckValue(){
	return 0;
} 
int CDanhMucNhiemKhuanBenhVienSetup::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	OnAddDanhMucNhiemKhuanBenhVien();
	 return 0;
} 
int CDanhMucNhiemKhuanBenhVienSetup::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	OnEditDanhMucNhiemKhuanBenhVien();
	 return 0;
} 
int CDanhMucNhiemKhuanBenhVienSetup::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	OnDeleteDanhMucNhiemKhuanBenhVien();
	 return 0;
} 
int CDanhMucNhiemKhuanBenhVienSetup::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	OnSaveDanhMucNhiemKhuanBenhVien();
	 return 0;
} 
int CDanhMucNhiemKhuanBenhVienSetup::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	OnCancelDanhMucNhiemKhuanBenhVien();
	 return 0;
} 
int CDanhMucNhiemKhuanBenhVienSetup::OnAddDanhMucNhiemKhuanBenhVien(){ 
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0;  
} 
int CDanhMucNhiemKhuanBenhVienSetup::OnEditDanhMucNhiemKhuanBenhVien(){

 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT); 
	return 0;  
} 
int CDanhMucNhiemKhuanBenhVienSetup::OnDeleteDanhMucNhiemKhuanBenhVien(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
 	szSQL.Format(_T("DELETE FROM sys_DanhMucNhiemKhuanBenhVien WHERE sp_group='%s' AND sp_id='%s' "), m_szModuleKey, m_szID); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret >= 0){ 
 		SetMode(VM_NONE); 
 		OnCancelDanhMucNhiemKhuanBenhVien(); 
		OnDanhMucNhiemKhuanBenhVienListLoadData(); 
 	} 
	return 0;
 } 
int CDanhMucNhiemKhuanBenhVienSetup::OnSaveDanhMucNhiemKhuanBenhVien()
{ 
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		szSQL = m_sys_DanhMucNhiemKhuanBenhVienTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE sp_group='%s' AND sp_id='%s' "), m_szModuleKey, m_szID); 
 		szSQL = m_sys_DanhMucNhiemKhuanBenhVienTbl.GetUpdateSQL(); 
 		szSQL += szWhere; 
 	} 
 //_fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		OnDanhMucNhiemKhuanBenhVienListLoadData(); 
 		SetMode(VM_VIEW);
		m_wndAdd.SetFocus();
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
}
int CDanhMucNhiemKhuanBenhVienSetup::OnCancelDanhMucNhiemKhuanBenhVien(){
 	EnableControls(FALSE); 
 	if(GetMode() == VM_EDIT) 
 	{ 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 		SetMode(VM_NONE); 
 	} 
 	return 0;
} 


int CDanhMucNhiemKhuanBenhVienSetup::SetMode(int nMode){ 
 		int nOldMode = GetMode(); 
 		CGuiView::SetMode(nMode); 
 		CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
  		switch(nMode){ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 3, 4, -1); 
 			SetDefaultValues(); 
			if(m_szModuleKey.IsEmpty())
				m_wndModule.SetFocus();
			else
				m_wndID.SetFocus();
			m_wndGroup.EnableWindow(false);
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 3, 4, -1); 
			m_wndID.EnableWindow(false);
			m_wndGroup.EnableWindow(false);
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
		m_wndModule.EnableWindow(true);
		m_wndFind.EnableWindow(true);
 		UpdateData(FALSE); 
 		return nOldMode; 
 	} 

void CDanhMucNhiemKhuanBenhVienSetup::Refresh(){
	static bool bLoaded = false;
	if(!bLoaded){
		OnDanhMucNhiemKhuanBenhVienListLoadData();
		bLoaded = true;
	}
}