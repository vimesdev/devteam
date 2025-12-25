#include "HMSThietLap_Thongtin_Congty.h"
#include "HMSMainFrame.h"

static void _OnSearchByNameChangeFnc(CWnd *pWnd)
{
	((CHMSThietLap_Thongtin_Congty *)pWnd)->OnSearchByNameChange();
}
/*static void _OnSearchByNameSetfocusFnc(CWnd *pWnd){
	((CHMSThietLap_Thongtin_Congty *)pWnd)->OnSearchByNameSetfocus();} */ 
/*static void _OnSearchByNameKillfocusFnc(CWnd *pWnd){
	((CHMSThietLap_Thongtin_Congty *)pWnd)->OnSearchByNameKillfocus();
} */
static int _OnSearchByNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSThietLap_Thongtin_Congty *)pWnd)->OnSearchByNameCheckValue();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSThietLap_Thongtin_Congty*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSThietLap_Thongtin_Congty*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem)
{
	((CHMSThietLap_Thongtin_Congty*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSThietLap_Thongtin_Congty*)pWnd)->OnListDeleteItem();
} 
/*static void _OnIDChangeFnc(CWnd *pWnd){
	((CHMSThietLap_Thongtin_Congty *)pWnd)->OnIDChange();
} */
/*static void _OnIDSetfocusFnc(CWnd *pWnd){
	((CHMSThietLap_Thongtin_Congty *)pWnd)->OnIDSetfocus();} */ 
/*static void _OnIDKillfocusFnc(CWnd *pWnd){
	((CHMSThietLap_Thongtin_Congty *)pWnd)->OnIDKillfocus();
} */
static int _OnIDCheckValueFnc(CWnd *pWnd){
	return ((CHMSThietLap_Thongtin_Congty *)pWnd)->OnIDCheckValue();
} 
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CHMSThietLap_Thongtin_Congty *)pWnd)->OnNameChange();
}*/
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CHMSThietLap_Thongtin_Congty *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CHMSThietLap_Thongtin_Congty *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSThietLap_Thongtin_Congty *)pWnd)->OnNameCheckValue();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSThietLap_Thongtin_Congty *pVw = (CHMSThietLap_Thongtin_Congty *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CHMSThietLap_Thongtin_Congty *pVw = (CHMSThietLap_Thongtin_Congty *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSThietLap_Thongtin_Congty *pVw = (CHMSThietLap_Thongtin_Congty *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSThietLap_Thongtin_Congty *pVw = (CHMSThietLap_Thongtin_Congty *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSThietLap_Thongtin_Congty *pVw = (CHMSThietLap_Thongtin_Congty *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSThietLap_Thongtin_Congty *pVw = (CHMSThietLap_Thongtin_Congty *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSThietLap_Thongtin_CongtyFnc(CWnd *pWnd){
	 return ((CHMSThietLap_Thongtin_Congty*)pWnd)->OnAddHMSThietLap_Thongtin_Congty();
} 
static int _OnEditHMSThietLap_Thongtin_CongtyFnc(CWnd *pWnd){
	 return ((CHMSThietLap_Thongtin_Congty*)pWnd)->OnEditHMSThietLap_Thongtin_Congty();
} 
static int _OnDeleteHMSThietLap_Thongtin_CongtyFnc(CWnd *pWnd){
	 return ((CHMSThietLap_Thongtin_Congty*)pWnd)->OnDeleteHMSThietLap_Thongtin_Congty();
} 
static int _OnSaveHMSThietLap_Thongtin_CongtyFnc(CWnd *pWnd){
	 return ((CHMSThietLap_Thongtin_Congty*)pWnd)->OnSaveHMSThietLap_Thongtin_Congty();
} 
static int _OnCancelHMSThietLap_Thongtin_CongtyFnc(CWnd *pWnd){
	 return ((CHMSThietLap_Thongtin_Congty*)pWnd)->OnCancelHMSThietLap_Thongtin_Congty();
}
static void _OnActiveSelectFnc(CWnd *pWnd){
	 ((CHMSThietLap_Thongtin_Congty*)pWnd)->OnActiveSelect();
}
static long _OnPhanloaiLoadDataFnc(CWnd *pWnd){
	return ((CHMSThietLap_Thongtin_Congty *)pWnd)->OnPhanloaiLoadData();
}

CHMSThietLap_Thongtin_Congty::CHMSThietLap_Thongtin_Congty(CWnd *pParent, long nOrderId):
	CGuiDialog(pParent)
	{
	m_nDlgWidth = 530;
	m_nDlgHeight = 425;
	SetDefaultValues();
	m_nOrderId = nOrderId;
	}
CHMSThietLap_Thongtin_Congty::~CHMSThietLap_Thongtin_Congty()
{


}
void CHMSThietLap_Thongtin_Congty::OnCreateComponents()
{
	m_wndItemInformation.Create(this, _T("Thông tin công ty"), 5, 5, 880, 476);
	m_wndSearchByNameLabel.Create(this, _T("Search By Name"), 10, 30, 90, 55);
	m_wndSearchByName.Create(this,95, 30, 880, 55); 
	m_wndList.Create(this,10, 60, 880, 381); 
	m_wndIDLabel.Create(this, _T("Mã số thuế"), 10, 386, 90, 411);
	m_wndID.Create(this,95, 386, 217, 411); 
	m_wndNameLabel.Create(this, _T("Name"), 223, 386, 303, 411);
	m_wndName.Create(this,309, 386, 880, 411); 
	m_wndActive.Create(this, _T("Active"), 10, 446, 100, 471);
	m_wndAdd.Create(this, _T("&Add"), 375, 481, 455, 506);
	m_wndEdit.Create(this, _T("&Edit"), 460, 481, 540, 506);
	m_wndDelete.Create(this, _T("&Delete"), 545, 481, 625, 506);
	m_wndSave.Create(this, _T("&Save"), 630, 481, 710, 506);
	m_wndCancel.Create(this, _T("&Cancel"), 715, 481, 795, 506);
	m_wndClose.Create(this, _T("&Close"), 800, 481, 880, 506);
	m_wndPhanloailabel.Create(this, _T("Phân loại"), 10, 416, 90, 441);
	m_wndPhanloai.Create(this,95, 416, 880, 441);
}
void CHMSThietLap_Thongtin_Congty::OnInitializeComponents()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndSearchByName.SetLimitText(81);
	//m_wndSearchByName.SetCheckValue(true);
	m_wndID.SetLimitText(10);
	m_wndID.SetCheckValue(true);
	m_wndName.SetLimitText(256);
	m_wndName.SetCheckValue(true);
	

	m_wndList.InsertColumn(0, _T("Mã số thuế"), CFMT_TEXT, 120);
	m_wndList.InsertColumn(1, _T("Name"), CFMT_TEXT, 450);	
	m_wndList.InsertColumn(5, _T("Phân loại"), CFMT_TEXT, 120);
	m_wndList.InsertColumn(6, _T("Active"), CFMT_TEXT, 50);	

	m_wndPhanloai.InsertColumn(0, _T("ID"), CFMT_TEXT, 120);
	m_wndPhanloai.InsertColumn(1, _T("Name"), CFMT_TEXT, 600);

	M_COMPANY_LIST_Tbl.SetTableName(_T("m_company_list"));
	M_COMPANY_LIST_Tbl.AddField(_T("COM_CODE"), dfText, 35);
	M_COMPANY_LIST_Tbl.AddField(_T("COM_NAME"), dfText, 256); 	
	M_COMPANY_LIST_Tbl.AddField(_T("COM_ISACTIVE"), dfText, 1);
	M_COMPANY_LIST_Tbl.AddField(_T("COM_TYPE"), dfText, 12);
}
void CHMSThietLap_Thongtin_Congty::OnSetWindowEvents()
{
	m_wndSearchByName.SetEvent(WE_CHANGE, _OnSearchByNameChangeFnc);
	//m_wndSearchByName.SetEvent(WE_SETFOCUS, _OnSearchByNameSetfocusFnc);
	//m_wndSearchByName.SetEvent(WE_KILLFOCUS, _OnSearchByNameKillfocusFnc);
	m_wndSearchByName.SetEvent(WE_CHECKVALUE, _OnSearchByNameCheckValueFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.SetWindowText(_T("Item Information"));
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	//m_wndID.SetEvent(WE_CHANGE, _OnIDChangeFnc);
	//m_wndID.SetEvent(WE_SETFOCUS, _OnIDSetfocusFnc);
	//m_wndID.SetEvent(WE_KILLFOCUS, _OnIDKillfocusFnc);
	m_wndID.SetEvent(WE_CHECKVALUE, _OnIDCheckValueFnc);
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	m_wndPhanloai.SetEvent(WE_LOADDATA, _OnPhanloaiLoadDataFnc);
	
	m_wndActive.SetEvent(WE_CLICK, _OnActiveSelectFnc);

	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);

	OnListLoadData();
	if (m_wndList.GetItemCount() > 0)
	{
		m_wndList.SetCurSel(0);
		m_szID = m_wndList.GetItemText(0, 0);
		m_nIndex = 0;
	}
	else
	{
		SetMode(VM_NONE);
		m_wndAdd.SetFocus();
		m_nIndex = -1;
	}
}
void CHMSThietLap_Thongtin_Congty::OnDoDataExchange(CDataExchange* pDX)
{
	DDX_Text(pDX, m_wndSearchByName.GetDlgCtrlID(), m_szSearchByName);
	DDX_Text(pDX, m_wndID.GetDlgCtrlID(), m_szID);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);	
	DDX_Check(pDX, m_wndActive.GetDlgCtrlID(), m_bActive);
	DDX_TextEx(pDX, m_wndPhanloai.GetDlgCtrlID(), m_szPhanloaiKey);
}
void CHMSThietLap_Thongtin_Congty::GetDataToScreen()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr;
	szSQL.Format(_T("SELECT * FROM M_COMPANY_LIST WHERE COM_CODE='%s'"), m_szID);
	rs.ExecSQL(szSQL);

	if (!rs.IsEOF())
	{
		rs.GetValue(_T("COM_CODE"), m_szID);
		rs.GetValue(_T("COM_NAME"), m_szName);			
		rs.GetValue(_T("COM_ISACTIVE"), tmpStr);
		m_bActive = tmpStr==_T("Y")?true:false;
		rs.GetValue(_T("COM_TYPE"), m_szPhanloaiKey);
		SetMode(VM_VIEW);
	}
	else
	{
		SetMode(VM_NONE);
	}
}
void CHMSThietLap_Thongtin_Congty::GetScreenToData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

	M_COMPANY_LIST_Tbl.SetValue(_T("COM_CODE"), m_szID);
	M_COMPANY_LIST_Tbl.SetValue(_T("COM_NAME"), m_szName);	
	M_COMPANY_LIST_Tbl.SetValue(_T("COM_ISACTIVE"),  m_bActive?_T("Y"):_T("N"));
	M_COMPANY_LIST_Tbl.SetValue(_T("COM_TYPE"), m_szPhanloaiKey);	
}
void CHMSThietLap_Thongtin_Congty::SetDefaultValues()
{
	m_szSearchByName.Empty();
	m_szID.Empty();
	m_szName.Empty();
	
	m_bActive=FALSE;
	m_szPhanloaiKey.Empty();

}
int CHMSThietLap_Thongtin_Congty::SetMode(int nMode)
{
 		int nOldMode = GetMode(); 
 		CGuiDialog::SetMode(nMode); 
 		CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
  		switch(nMode)
		{ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 3, 4, -1); 
 			SetDefaultValues();
			m_wndID.SetFocus();
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 3, 4, -1);
			m_wndID.EnableWindow(FALSE);
			m_wndName.SetFocus();
			m_wndName.SetSel(m_wndName.GetWindowTextLength(), m_wndName.GetWindowTextLength());
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
		m_wndSearchByName.EnableWindow(TRUE);
 		UpdateData(FALSE); 
 		return nOldMode; 
}
void CHMSThietLap_Thongtin_Congty::OnSearchByNameChange()
{
	UpdateData(TRUE);
	OnListLoadData();
}
/*void CHMSThietLap_Thongtin_Congty::OnSearchByNameSetfocus(){
	
} */
/*void CHMSThietLap_Thongtin_Congty::OnSearchByNameKillfocus(){
	
} */
int CHMSThietLap_Thongtin_Congty::OnSearchByNameCheckValue(){
	return 0;
} 
void CHMSThietLap_Thongtin_Congty::OnListDblClick(){
	
} 

long CHMSThietLap_Thongtin_Congty::OnPhanloaiLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndPhanloai.IsSearchKey() && !m_szPhanloaiKey.IsEmpty())
	{
	 szWhere.Format(_T(" and id='%s'"), m_szPhanloaiKey);
	}
	m_wndPhanloai.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("select ss_code as id, ss_desc as name from sys_sel where ss_id='com_company_type' order by cast(ss_code as int) "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF())
	{ 
		m_wndPhanloai.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
	return 0;
}

void CHMSThietLap_Thongtin_Congty::OnListSelectChange(int nOldItem, int nNewItem)
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	if (nNewItem < 0)
		return;
	m_nIndex = nNewItem;
	m_szID = m_wndList.GetItemText(nNewItem, 0);
	GetDataToScreen();
} 
int CHMSThietLap_Thongtin_Congty::OnListDeleteItem()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnDeleteHMSThietLap_Thongtin_Congty();
	return 0;
} 
long CHMSThietLap_Thongtin_Congty::OnListLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szActive;
	m_wndList.BeginLoad(); 
	m_wndList.DeleteAllItems(); 
	int nCount = 0;

	szWhere.Empty();
	if (!m_szSearchByName.IsEmpty())
	{
		szWhere.Format(_T(" AND lower(COM_NAME) LIKE lower('%s%s%s') "),
			           _T("%"), m_szSearchByName, _T("%"));
	}

	szSQL.Format(_T("SELECT COM_CODE AS ID, COM_NAME AS Name, COM_TYPE,COM_ISACTIVE as Active ")\
			     _T("FROM M_COMPANY_LIST ")\
				 _T("WHERE 1=1 %s "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF())
	{ 
		int nItem = m_wndList.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Name")),		
			rs.GetValue(_T("COM_TYPE")),
			rs.GetValue(_T("Active")),NULL);

		rs.GetValue(_T("Active"),szActive);		
		if (szActive == _T("N"))
		{
		m_wndList.SetSubItemBkColor(nItem, 5, RGB(255, 127, 36), FALSE);
		m_wndList.SetSubItemTextColor(nItem, 5, RGB(255, 255, 255), FALSE);
		}
		rs.MoveNext();
	}
	m_wndList.EndLoad();
	return nCount;
}
/*void CHMSThietLap_Thongtin_Congty::OnIDChange(){
	
} */
/*void CHMSThietLap_Thongtin_Congty::OnIDSetfocus(){
	
} */
/*void CHMSThietLap_Thongtin_Congty::OnIDKillfocus(){
	
} */
int CHMSThietLap_Thongtin_Congty::OnIDCheckValue()
{
	UpdateData(TRUE);
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;

	szSQL.Format(_T("SELECT Count(*) FROM M_COMPANY_LIST WHERE COM_CODE='%s'"), m_szID);
	rs.ExecSQL(szSQL);

	if (rs.GetIntValue() > 0 && (GetMode() == VM_ADD))
	{
		m_wndID.SetToolTipMessage(_T("Đã có đề mục trùng mã trong dữ liệu rồi"));
		return -1;
	}
	return 0;
} 
/*void CHMSThietLap_Thongtin_Congty::OnNameChange(){
	
} */
/*void CHMSThietLap_Thongtin_Congty::OnNameSetfocus(){
	
} */
/*void CHMSThietLap_Thongtin_Congty::OnNameKillfocus(){
	
} */
int CHMSThietLap_Thongtin_Congty::OnNameCheckValue()
{
	UpdateData(TRUE);
	CString szTemp;
	PreInitCap(m_szName, szTemp);
	m_szName = szTemp;
	UpdateData(FALSE);
	return 0;
}


void CHMSThietLap_Thongtin_Congty::OnActiveSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
}

void CHMSThietLap_Thongtin_Congty::OnAddSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnAddHMSThietLap_Thongtin_Congty();
} 
void CHMSThietLap_Thongtin_Congty::OnEditSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnEditHMSThietLap_Thongtin_Congty();
} 
void CHMSThietLap_Thongtin_Congty::OnDeleteSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnDeleteHMSThietLap_Thongtin_Congty();
} 
void CHMSThietLap_Thongtin_Congty::OnSaveSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnSaveHMSThietLap_Thongtin_Congty();
} 
void CHMSThietLap_Thongtin_Congty::OnCancelSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnCancelHMSThietLap_Thongtin_Congty();
} 
void CHMSThietLap_Thongtin_Congty::OnCloseSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnCancel();
} 
int CHMSThietLap_Thongtin_Congty::OnAddHMSThietLap_Thongtin_Congty(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSThietLap_Thongtin_Congty::OnEditHMSThietLap_Thongtin_Congty(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSThietLap_Thongtin_Congty::OnDeleteHMSThietLap_Thongtin_Congty()
{
 	if(GetMode() != VM_VIEW) 
 		return -1;
	m_nIndex = m_wndList.GetCurSel();
	if (m_nIndex < 0)
		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
 	CString szSQL; 

	szSQL.Format(_T("SELECT count(*) FROM hms_exm_contract WHERE hec_company_id='%s' "), m_szID);
	rs.ExecSQL(szSQL);

	if(rs.GetIntValue() > 0) 
	{ 
		AfxMessageBox(_T("Tên công ty đã được sử dụng, không được phép xóa!" ), MB_ICONERROR);		
		return -1;
	}

 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
	szSQL.Format(_T("DELETE FROM M_COMPANY_LIST WHERE COM_CODE='%s'"), m_szID); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if (ret >= 0)
	{ 
 		OnListLoadData();
		if (m_wndList.GetItemCount() > 0)
		{
			SetItemSel(&m_wndList, m_szID, m_nIndex);
		}
		else
		{
			SetMode(VM_NONE);
			m_wndAdd.SetFocus();
		} 
 	}
	return 0;
}
int CHMSThietLap_Thongtin_Congty::OnSaveHMSThietLap_Thongtin_Congty()
{
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
 	CString szSQL;
	bool bAdd = false;
 	if(GetMode() == VM_ADD)
	{ 
		szSQL = M_COMPANY_LIST_Tbl.GetInsertSQL();
		bAdd = true;
 	} 
 	else if(GetMode() == VM_EDIT)
	{ 
 		CString szWhere;
		szWhere.Format(_T(" WHERE COM_CODE='%s' "), m_szID); 
 		szSQL = M_COMPANY_LIST_Tbl.GetUpdateSQL(_T("COM_CODE")); 
 		szSQL += szWhere; 
 	} 
	_fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		//OnHMSThietLap_Thongtin_CongtyListLoadData(); 
 		//SetMode(VM_VIEW);
		OnListLoadData();
		SetItemSel(&m_wndList, m_szID, m_nIndex);
		if (bAdd)
			m_wndAdd.SetFocus();
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	//return 0; 
}
int CHMSThietLap_Thongtin_Congty::OnCancelHMSThietLap_Thongtin_Congty()
{
 	if(GetMode() == VM_EDIT) 
 	{ 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
		if (m_wndList.GetCurSel() >= 0)
		{
			m_szID = m_wndList.GetItemText(m_wndList.GetCurSel(), 0);
			GetDataToScreen();
		}
		else
 			SetMode(VM_NONE); 
 	} 
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
 	return 0;
} 
int CHMSThietLap_Thongtin_Congty::OnHMSThietLap_Thongtin_CongtyListLoadData(){
	return 0;
}
void CHMSThietLap_Thongtin_Congty::SetItemSel(CGuiListCtrl *pList, CString szID, int nIndex)
{
	if (GetMode() == VM_ADD)
	{
		for (int i = pList->GetItemCount() - 1; i >= 0; i--)
		{
			if (pList->GetItemText(i, 0).Trim() == szID.Trim())
			{
				pList->SetCurSel(i);
				m_nIndex = i;
				break;
			}
		}
	}
	else if (GetMode() == VM_EDIT)
	{
		pList->SetCurSel(nIndex);
	}
	else
	{	
		if (pList->GetItemCount() > 0)
		{
			if (nIndex == 0)
			{
				pList->SetCurSel(0);
				m_nIndex = 0;
			}
			else
			{
				m_nIndex -= 1;
				pList->SetCurSel(m_nIndex);			
			}
		}
	}
}