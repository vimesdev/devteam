#include "HMSThietLap_Diachi_Vaccine.h"
#include "HMSMainFrame.h"

static void _OnSearchByNameChangeFnc(CWnd *pWnd)
{
	((CHMSThietLap_Diachi_Vaccine *)pWnd)->OnSearchByNameChange();
}
/*static void _OnSearchByNameSetfocusFnc(CWnd *pWnd){
	((CHMSThietLap_Diachi_Vaccine *)pWnd)->OnSearchByNameSetfocus();} */ 
/*static void _OnSearchByNameKillfocusFnc(CWnd *pWnd){
	((CHMSThietLap_Diachi_Vaccine *)pWnd)->OnSearchByNameKillfocus();
} */
static int _OnSearchByNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSThietLap_Diachi_Vaccine *)pWnd)->OnSearchByNameCheckValue();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSThietLap_Diachi_Vaccine*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSThietLap_Diachi_Vaccine*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem)
{
	((CHMSThietLap_Diachi_Vaccine*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSThietLap_Diachi_Vaccine*)pWnd)->OnListDeleteItem();
} 
/*static void _OnIDChangeFnc(CWnd *pWnd){
	((CHMSThietLap_Diachi_Vaccine *)pWnd)->OnIDChange();
} */
/*static void _OnIDSetfocusFnc(CWnd *pWnd){
	((CHMSThietLap_Diachi_Vaccine *)pWnd)->OnIDSetfocus();} */ 
/*static void _OnIDKillfocusFnc(CWnd *pWnd){
	((CHMSThietLap_Diachi_Vaccine *)pWnd)->OnIDKillfocus();
} */
static int _OnIDCheckValueFnc(CWnd *pWnd){
	return ((CHMSThietLap_Diachi_Vaccine *)pWnd)->OnIDCheckValue();
} 
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CHMSThietLap_Diachi_Vaccine *)pWnd)->OnNameChange();
}*/
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CHMSThietLap_Diachi_Vaccine *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CHMSThietLap_Diachi_Vaccine *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSThietLap_Diachi_Vaccine *)pWnd)->OnNameCheckValue();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSThietLap_Diachi_Vaccine *pVw = (CHMSThietLap_Diachi_Vaccine *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CHMSThietLap_Diachi_Vaccine *pVw = (CHMSThietLap_Diachi_Vaccine *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSThietLap_Diachi_Vaccine *pVw = (CHMSThietLap_Diachi_Vaccine *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSThietLap_Diachi_Vaccine *pVw = (CHMSThietLap_Diachi_Vaccine *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSThietLap_Diachi_Vaccine *pVw = (CHMSThietLap_Diachi_Vaccine *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSThietLap_Diachi_Vaccine *pVw = (CHMSThietLap_Diachi_Vaccine *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSThietLap_Thongtin_VaccineFnc(CWnd *pWnd){
	 return ((CHMSThietLap_Diachi_Vaccine*)pWnd)->OnAddHMSThietLap_Thongtin_Vaccine();
} 
static int _OnEditHMSThietLap_Thongtin_VaccineFnc(CWnd *pWnd){
	 return ((CHMSThietLap_Diachi_Vaccine*)pWnd)->OnEditHMSThietLap_Thongtin_Vaccine();
} 
static int _OnDeleteHMSThietLap_Thongtin_VaccineFnc(CWnd *pWnd){
	 return ((CHMSThietLap_Diachi_Vaccine*)pWnd)->OnDeleteHMSThietLap_Thongtin_Vaccine();
} 
static int _OnSaveHMSThietLap_Thongtin_VaccineFnc(CWnd *pWnd){
	 return ((CHMSThietLap_Diachi_Vaccine*)pWnd)->OnSaveHMSThietLap_Thongtin_Vaccine();
} 
static int _OnCancelHMSThietLap_Thongtin_VaccineFnc(CWnd *pWnd){
	 return ((CHMSThietLap_Diachi_Vaccine*)pWnd)->OnCancelHMSThietLap_Thongtin_Vaccine();
}
static int _OnLotCheckValueFnc(CWnd *pWnd){
	return ((CHMSThietLap_Diachi_Vaccine *)pWnd)->OnLotCheckValue();
}
static int _OnExpireDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSThietLap_Diachi_Vaccine *)pWnd)->OnExpireDateCheckValue();
}

static long _OnCountryLoadDataFnc(CWnd *pWnd){
	return ((CHMSThietLap_Diachi_Vaccine *)pWnd)->OnCountryLoadData();
}
static void _OnActiveSelectFnc(CWnd *pWnd){
	 ((CHMSThietLap_Diachi_Vaccine*)pWnd)->OnActiveSelect();
}
static void _OnOutMilitarySelectFnc(CWnd *pWnd){
	 ((CHMSThietLap_Diachi_Vaccine*)pWnd)->OnOutMilitarySelect();
}

CHMSThietLap_Diachi_Vaccine::CHMSThietLap_Diachi_Vaccine(CWnd *pParent, long nOrderId):
	CGuiDialog(pParent)
	{
	m_nDlgWidth = 530;
	m_nDlgHeight = 425;
	SetDefaultValues();
	m_nOrderId = nOrderId;
}
CHMSThietLap_Diachi_Vaccine::~CHMSThietLap_Diachi_Vaccine()
{

}
void CHMSThietLap_Diachi_Vaccine::OnCreateComponents()
{
	m_wndItemInformation.Create(this, _T("THÔNG TIN ĐƠN VỊ ĐƯỢC TIÊM VACCINE"), 5, 5, 759, 446);
	m_wndSearchByNameLabel.Create(this, _T("Search By Name"), 10, 30, 90, 55);
	m_wndSearchByName.Create(this,95, 30, 759, 55); 
	m_wndList.Create(this,10, 60, 759, 350); 
	m_wndIDLabel.Create(this, _T("ID"), 10, 355, 90, 380);
	m_wndID.Create(this,95, 355, 217, 380); 
	m_wndNameLabel.Create(this, _T("Name"), 223, 355, 303, 380);
	m_wndName.Create(this,309, 355, 759, 380); 
	m_wndLotLabel.Create(this, _T("Lot"), 0, 0, 0, 0);
	m_wndLot.Create(this,0, 0, 0, 0); 
	m_wndExpireDateLabel.Create(this, _T("ExpireDate"), 0, 0, 0, 0);
	m_wndExpireDate.Create(this,0, 0, 0, 0); 
	m_wndCountryLabel.Create(this, _T("Country"), 0, 0, 0, 0);
	m_wndCountry.Create(this,0, 0, 0, 0); 
	m_wndActive.Create(this, _T("Active"), 10, 416, 90, 441);
	m_wndAdd.Create(this, _T("&Add"), 254, 452, 334, 477);
	m_wndEdit.Create(this, _T("&Edit"), 339, 452, 419, 477);
	m_wndDelete.Create(this, _T("&Delete"), 424, 452, 504, 477);
	m_wndSave.Create(this, _T("&Save"), 509, 452, 589, 477);
	m_wndCancel.Create(this, _T("&Cancel"), 594, 452, 674, 477);
	m_wndClose.Create(this, _T("&Close"), 679, 452, 759, 477);
	m_wndOutMilitary.Create(this, _T("Trong quân đội"), 95, 416, 217, 441);
}
void CHMSThietLap_Diachi_Vaccine::OnInitializeComponents()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndSearchByName.SetLimitText(81);
	//m_wndSearchByName.SetCheckValue(true);
	m_wndID.SetLimitText(15);
	m_wndID.SetCheckValue(true);
	m_wndName.SetLimitText(81);
	m_wndName.SetCheckValue(true);
	


	m_wndList.InsertColumn(0, _T("ID"), CFMT_TEXT, 120);
	m_wndList.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);	
	m_wndList.InsertColumn(2, _T("Trong quân đội"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(3, _T("Active"), CFMT_TEXT, 50);

	m_wndCountry.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndCountry.InsertColumn(1, _T("Name"), CFMT_TEXT, 425);

	M_VACCINE_ADDRESS_Tbl.SetTableName(_T("M_VACCINE_ADDRESS"));
	M_VACCINE_ADDRESS_Tbl.AddField(_T("VC_ADDRESS_CODE"), dfText, 35);
	M_VACCINE_ADDRESS_Tbl.AddField(_T("VC_ADDRESS_NAME"), dfText, 256); 
	M_VACCINE_ADDRESS_Tbl.AddField(_T("VC_ADDRESS_INMILITARY"), dfText, 1);	
	M_VACCINE_ADDRESS_Tbl.AddField(_T("VC_ADDRESS_ISACTIVE"), dfText, 1);
}
void CHMSThietLap_Diachi_Vaccine::OnSetWindowEvents()
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

	m_wndLot.SetEvent(WE_CHECKVALUE, _OnLotCheckValueFnc);	
	m_wndExpireDate.SetEvent(WE_CHECKVALUE, _OnExpireDateCheckValueFnc);	
	m_wndCountry.SetEvent(WE_LOADDATA, _OnCountryLoadDataFnc);	
	m_wndActive.SetEvent(WE_CLICK, _OnActiveSelectFnc);
	m_wndOutMilitary.SetEvent(WE_CLICK, _OnOutMilitarySelectFnc);

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
void CHMSThietLap_Diachi_Vaccine::OnDoDataExchange(CDataExchange* pDX)
{
	DDX_Text(pDX, m_wndSearchByName.GetDlgCtrlID(), m_szSearchByName);
	DDX_Text(pDX, m_wndID.GetDlgCtrlID(), m_szID);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_Text(pDX, m_wndLot.GetDlgCtrlID(), m_szLot);
	DDX_TextEx(pDX, m_wndExpireDate.GetDlgCtrlID(), m_szExpireDate);
	DDX_TextEx(pDX, m_wndCountry.GetDlgCtrlID(), m_szCountryKey);
	DDX_Check(pDX, m_wndActive.GetDlgCtrlID(), m_bActive);
	DDX_Check(pDX, m_wndOutMilitary.GetDlgCtrlID(), m_bOutMilitary);
}
void CHMSThietLap_Diachi_Vaccine::GetDataToScreen()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr;
	szSQL.Format(_T("SELECT * FROM M_VACCINE_ADDRESS WHERE VC_ADDRESS_CODE='%s'"), m_szID);
	rs.ExecSQL(szSQL);

	if (!rs.IsEOF())
	{
		rs.GetValue(_T("VC_ADDRESS_CODE"), m_szID);
		rs.GetValue(_T("VC_ADDRESS_NAME"), m_szName);					
		
		rs.GetValue(_T("VC_ADDRESS_INMILITARY"), tmpStr);
		m_bOutMilitary = tmpStr==_T("Y")?true:false;

		rs.GetValue(_T("VC_ADDRESS_ISACTIVE"), tmpStr);
		m_bActive = tmpStr==_T("Y")?true:false;


		SetMode(VM_VIEW);
	}
	else
	{
		SetMode(VM_NONE);
	}
}
void CHMSThietLap_Diachi_Vaccine::GetScreenToData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

	M_VACCINE_ADDRESS_Tbl.SetValue(_T("VC_ADDRESS_CODE"), m_szID);
	M_VACCINE_ADDRESS_Tbl.SetValue(_T("VC_ADDRESS_NAME"), m_szName);	
	M_VACCINE_ADDRESS_Tbl.SetValue(_T("VC_ADDRESS_INMILITARY"),  m_bOutMilitary?_T("Y"):_T("N"));	
	M_VACCINE_ADDRESS_Tbl.SetValue(_T("VC_ADDRESS_ISACTIVE"),  m_bActive?_T("Y"):_T("N"));	
}
void CHMSThietLap_Diachi_Vaccine::SetDefaultValues()
{
	m_szSearchByName.Empty();
	m_szID.Empty();
	m_szName.Empty();
	m_szLot.Empty();
	m_szExpireDate.Empty();
	m_szCountryKey.Empty();
	m_bActive=FALSE;
	m_bOutMilitary=FALSE;

}
int CHMSThietLap_Diachi_Vaccine::SetMode(int nMode)
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
void CHMSThietLap_Diachi_Vaccine::OnSearchByNameChange()
{
	UpdateData(TRUE);
	OnListLoadData();
}
/*void CHMSThietLap_Diachi_Vaccine::OnSearchByNameSetfocus(){
	
} */
/*void CHMSThietLap_Diachi_Vaccine::OnSearchByNameKillfocus(){
	
} */
int CHMSThietLap_Diachi_Vaccine::OnSearchByNameCheckValue(){
	return 0;
} 

void CHMSThietLap_Diachi_Vaccine::OnOutMilitarySelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
void CHMSThietLap_Diachi_Vaccine::OnListDblClick(){
	
} 
void CHMSThietLap_Diachi_Vaccine::OnListSelectChange(int nOldItem, int nNewItem)
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	if (nNewItem < 0)
		return;
	m_nIndex = nNewItem;
	m_szID = m_wndList.GetItemText(nNewItem, 0);
	GetDataToScreen();
} 
int CHMSThietLap_Diachi_Vaccine::OnListDeleteItem()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnDeleteHMSThietLap_Thongtin_Vaccine();
	return 0;
} 
long CHMSThietLap_Diachi_Vaccine::OnListLoadData()
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
		szWhere.Format(_T(" AND lower(VC_ADDRESS_NAME) LIKE lower('%s%s%s') "),
			           _T("%"), m_szSearchByName, _T("%"));
	}

	szSQL.Format(_T("SELECT VC_ADDRESS_CODE AS ID, VC_ADDRESS_NAME AS Name, VC_ADDRESS_INMILITARY as inmilitary, VC_ADDRESS_ISACTIVE as Active ")\
			     _T("FROM M_VACCINE_ADDRESS ")\
				 _T("WHERE 1=1 %s ORDER BY cast(VC_ADDRESS_CODE as integer) desc "), szWhere);
	nCount = rs.ExecSQL(szSQL);

	while(!rs.IsEOF())
	{ 
		int nItem = m_wndList.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Name")),
			rs.GetValue(_T("inmilitary")),			
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
/*void CHMSThietLap_Diachi_Vaccine::OnIDChange(){
	
} */
/*void CHMSThietLap_Diachi_Vaccine::OnIDSetfocus(){
	
} */
/*void CHMSThietLap_Diachi_Vaccine::OnIDKillfocus(){
	
} */
int CHMSThietLap_Diachi_Vaccine::OnIDCheckValue()
{
	UpdateData(TRUE);
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;

	szSQL.Format(_T("SELECT Count(*) FROM M_VACCINE_ADDRESS WHERE VC_ADDRESS_CODE='%s'"), m_szID);
	rs.ExecSQL(szSQL);

	if (rs.GetIntValue() > 0)
	{
		m_wndID.SetToolTipMessage(_T("Đã có đề mục trùng mã trong dữ liệu rồi"));
		return -1;
	}
	return 0;
} 
/*void CHMSThietLap_Diachi_Vaccine::OnNameChange(){
	
} */
/*void CHMSThietLap_Diachi_Vaccine::OnNameSetfocus(){
	
} */
/*void CHMSThietLap_Diachi_Vaccine::OnNameKillfocus(){
	
} */
int CHMSThietLap_Diachi_Vaccine::OnNameCheckValue()
{
	UpdateData(TRUE);
	CString szTemp;
	PreInitCap(m_szName, szTemp);
	m_szName = szTemp;
	UpdateData(FALSE);
	return 0;
}

int CHMSThietLap_Diachi_Vaccine::OnLotCheckValue(){
	return 0;
}

int CHMSThietLap_Diachi_Vaccine::OnExpireDateCheckValue()
{
	return 0;
} 

long CHMSThietLap_Diachi_Vaccine::OnCountryLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndCountry.IsSearchKey() && !m_szCountryKey.IsEmpty())
	{
	 szWhere.Format(_T(" and id='%s'"), m_szCountryKey);
	}
	m_wndCountry.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("select ADC_COUNTRY_ID as id, ADC_NAME as name from ad_COUNTRY where ADC_ISACTIVE='Y' "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF())
	{ 
		m_wndCountry.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
	return 0;
}

void CHMSThietLap_Diachi_Vaccine::OnActiveSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
}

void CHMSThietLap_Diachi_Vaccine::OnAddSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnAddHMSThietLap_Thongtin_Vaccine();
} 
void CHMSThietLap_Diachi_Vaccine::OnEditSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnEditHMSThietLap_Thongtin_Vaccine();
} 
void CHMSThietLap_Diachi_Vaccine::OnDeleteSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnDeleteHMSThietLap_Thongtin_Vaccine();
} 
void CHMSThietLap_Diachi_Vaccine::OnSaveSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnSaveHMSThietLap_Thongtin_Vaccine();
} 
void CHMSThietLap_Diachi_Vaccine::OnCancelSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnCancelHMSThietLap_Thongtin_Vaccine();
} 
void CHMSThietLap_Diachi_Vaccine::OnCloseSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnCancel();
} 
int CHMSThietLap_Diachi_Vaccine::OnAddHMSThietLap_Thongtin_Vaccine(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSThietLap_Diachi_Vaccine::OnEditHMSThietLap_Thongtin_Vaccine(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSThietLap_Diachi_Vaccine::OnDeleteHMSThietLap_Thongtin_Vaccine()
{
 	if(GetMode() != VM_VIEW) 
 		return -1;
	m_nIndex = m_wndList.GetCurSel();
	if (m_nIndex < 0)
		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
	szSQL.Format(_T("DELETE FROM M_VACCINE_ADDRESS WHERE VC_ADDRESS_CODE='%s'"), m_szID); 
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
int CHMSThietLap_Diachi_Vaccine::OnSaveHMSThietLap_Thongtin_Vaccine()
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
		szSQL = M_VACCINE_ADDRESS_Tbl.GetInsertSQL();
		bAdd = true;
 	} 
 	else if(GetMode() == VM_EDIT)
	{ 
 		CString szWhere;
		szWhere.Format(_T(" WHERE VC_ADDRESS_CODE='%s' "), m_szID); 
 		szSQL = M_VACCINE_ADDRESS_Tbl.GetUpdateSQL(_T("VC_ADDRESS_CODE")); 
 		szSQL += szWhere; 
 	} 
	_fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		//OnHMSThietLap_Thongtin_VaccineListLoadData(); 
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
int CHMSThietLap_Diachi_Vaccine::OnCancelHMSThietLap_Thongtin_Vaccine()
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
int CHMSThietLap_Diachi_Vaccine::OnHMSThietLap_Thongtin_VaccineListLoadData(){
	return 0;
}
void CHMSThietLap_Diachi_Vaccine::SetItemSel(CGuiListCtrl *pList, CString szID, int nIndex)
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