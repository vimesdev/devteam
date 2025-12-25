#include "HMSThietLap_Thongtin_Vattu.h"
#include "HMSMainFrame.h"

static void _OnSearchByNameChangeFnc(CWnd *pWnd)
{
	((CHMSThietLap_Thongtin_Vattu *)pWnd)->OnSearchByNameChange();
}
/*static void _OnSearchByNameSetfocusFnc(CWnd *pWnd){
	((CHMSThietLap_Thongtin_Vattu *)pWnd)->OnSearchByNameSetfocus();} */ 
/*static void _OnSearchByNameKillfocusFnc(CWnd *pWnd){
	((CHMSThietLap_Thongtin_Vattu *)pWnd)->OnSearchByNameKillfocus();
} */
static int _OnSearchByNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSThietLap_Thongtin_Vattu *)pWnd)->OnSearchByNameCheckValue();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSThietLap_Thongtin_Vattu*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSThietLap_Thongtin_Vattu*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem)
{
	((CHMSThietLap_Thongtin_Vattu*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSThietLap_Thongtin_Vattu*)pWnd)->OnListDeleteItem();
} 
/*static void _OnIDChangeFnc(CWnd *pWnd){
	((CHMSThietLap_Thongtin_Vattu *)pWnd)->OnIDChange();
} */
/*static void _OnIDSetfocusFnc(CWnd *pWnd){
	((CHMSThietLap_Thongtin_Vattu *)pWnd)->OnIDSetfocus();} */ 
/*static void _OnIDKillfocusFnc(CWnd *pWnd){
	((CHMSThietLap_Thongtin_Vattu *)pWnd)->OnIDKillfocus();
} */
static int _OnIDCheckValueFnc(CWnd *pWnd){
	return ((CHMSThietLap_Thongtin_Vattu *)pWnd)->OnIDCheckValue();
} 
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CHMSThietLap_Thongtin_Vattu *)pWnd)->OnNameChange();
}*/
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CHMSThietLap_Thongtin_Vattu *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CHMSThietLap_Thongtin_Vattu *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSThietLap_Thongtin_Vattu *)pWnd)->OnNameCheckValue();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSThietLap_Thongtin_Vattu *pVw = (CHMSThietLap_Thongtin_Vattu *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CHMSThietLap_Thongtin_Vattu *pVw = (CHMSThietLap_Thongtin_Vattu *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSThietLap_Thongtin_Vattu *pVw = (CHMSThietLap_Thongtin_Vattu *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSThietLap_Thongtin_Vattu *pVw = (CHMSThietLap_Thongtin_Vattu *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSThietLap_Thongtin_Vattu *pVw = (CHMSThietLap_Thongtin_Vattu *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSThietLap_Thongtin_Vattu *pVw = (CHMSThietLap_Thongtin_Vattu *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSThietLap_Thongtin_VattuFnc(CWnd *pWnd){
	 return ((CHMSThietLap_Thongtin_Vattu*)pWnd)->OnAddHMSThietLap_Thongtin_Vattu();
} 
static int _OnEditHMSThietLap_Thongtin_VattuFnc(CWnd *pWnd){
	 return ((CHMSThietLap_Thongtin_Vattu*)pWnd)->OnEditHMSThietLap_Thongtin_Vattu();
} 
static int _OnDeleteHMSThietLap_Thongtin_VattuFnc(CWnd *pWnd){
	 return ((CHMSThietLap_Thongtin_Vattu*)pWnd)->OnDeleteHMSThietLap_Thongtin_Vattu();
} 
static int _OnSaveHMSThietLap_Thongtin_VattuFnc(CWnd *pWnd){
	 return ((CHMSThietLap_Thongtin_Vattu*)pWnd)->OnSaveHMSThietLap_Thongtin_Vattu();
} 
static int _OnCancelHMSThietLap_Thongtin_VattuFnc(CWnd *pWnd){
	 return ((CHMSThietLap_Thongtin_Vattu*)pWnd)->OnCancelHMSThietLap_Thongtin_Vattu();
}
static int _OnLotCheckValueFnc(CWnd *pWnd){
	return ((CHMSThietLap_Thongtin_Vattu *)pWnd)->OnLotCheckValue();
}
static int _OnExpireDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSThietLap_Thongtin_Vattu *)pWnd)->OnExpireDateCheckValue();
}

static long _OnCountryLoadDataFnc(CWnd *pWnd){
	return ((CHMSThietLap_Thongtin_Vattu *)pWnd)->OnCountryLoadData();
}
static void _OnActiveSelectFnc(CWnd *pWnd){
	 ((CHMSThietLap_Thongtin_Vattu*)pWnd)->OnActiveSelect();
}
static long _OnPhanloaiLoadDataFnc(CWnd *pWnd){
	return ((CHMSThietLap_Thongtin_Vattu *)pWnd)->OnPhanloaiLoadData();
}

static int _OnPriceCheckValueFnc(CWnd *pWnd){
	return ((CHMSThietLap_Thongtin_Vattu *)pWnd)->OnPriceCheckValue();
}
static int _OnQtyCheckValueFnc(CWnd *pWnd){
	return ((CHMSThietLap_Thongtin_Vattu *)pWnd)->OnQtyCheckValue();
}

CHMSThietLap_Thongtin_Vattu::CHMSThietLap_Thongtin_Vattu(CWnd *pParent, long nOrderId):
	CGuiDialog(pParent)
	{
	m_nDlgWidth = 530;
	m_nDlgHeight = 425;
	SetDefaultValues();
	m_nOrderId = nOrderId;
	}
CHMSThietLap_Thongtin_Vattu::~CHMSThietLap_Thongtin_Vattu()
{

}
void CHMSThietLap_Thongtin_Vattu::OnCreateComponents()
{
	/*m_wndSearchByNameLabel.Create(this, _T("Search By Name"), 10, 30, 90, 55);
	m_wndSearchByName.Create(this,95, 30, 759, 55); 
	m_wndList.Create(this,10, 60, 759, 350); 
	m_wndIDLabel.Create(this, _T("ID"), 10, 355, 90, 380);
	m_wndItemInformation.Create(this, _T("Drug Information"), 5, 5, 759, 476);
	m_wndID.Create(this,95, 355, 217, 380); 
	m_wndNameLabel.Create(this, _T("Name"), 223, 355, 303, 380);
	m_wndName.Create(this,309, 355, 759, 380); 
	m_wndLotLabel.Create(this, _T("Lot"), 10, 385, 90, 410);
	m_wndLot.Create(this,95, 385, 217, 410); 
	m_wndExpireDateLabel.Create(this, _T("ExpireDate"), 223, 385, 303, 410);
	m_wndExpireDate.Create(this,309, 385, 441, 410); 
	m_wndCountryLabel.Create(this, _T("Country"), 446, 385, 526, 410);
	m_wndCountry.Create(this,531, 385, 759, 410); 
	m_wndPhanloailabel.Create(this, _T("Phân loại"), 10, 415, 90, 440);
	m_wndPhanloai.Create(this,95, 415, 759, 440); 
	m_wndActive.Create(this, _T("Active"), 10, 445, 90, 470);
	m_wndAdd.Create(this, _T("&Add"), 254, 481, 334, 506);
	m_wndEdit.Create(this, _T("&Edit"), 339, 481, 419, 506);
	m_wndDelete.Create(this, _T("&Delete"), 424, 481, 504, 506);
	m_wndSave.Create(this, _T("&Save"), 509, 481, 589, 506);
	m_wndCancel.Create(this, _T("&Cancel"), 594, 481, 674, 506);
	m_wndClose.Create(this, _T("&Close"), 679, 481, 759, 506);*/

	m_wndSearchByNameLabel.Create(this, _T("Search By Name"), 10, 30, 90, 55);
	m_wndSearchByName.Create(this,95, 30, 759, 55); 
	m_wndList.Create(this,10, 60, 759, 350); 
	m_wndIDLabel.Create(this, _T("ID"), 10, 355, 90, 380);
	m_wndID.Create(this,95, 355, 217, 380); 
	m_wndItemInformation.Create(this, _T("THÔNG TIN THUỐC - VẬT TƯ"), 5, 5, 759, 476);
	m_wndNameLabel.Create(this, _T("Name"), 223, 355, 303, 380);
	m_wndName.Create(this,309, 355, 759, 380); 
	m_wndQtyLabel.Create(this, _T("Qty"), 10, 384, 90, 409);
	m_wndQty.Create(this,95, 385, 217, 410); 
	m_wndPriceLabel.Create(this, _T("Price"), 223, 385, 303, 410);
	m_wndPrice.Create(this,309, 385, 441, 410); 
	m_wndCountryLabel.Create(this, _T("Country"), 446, 385, 526, 410);
	m_wndCountry.Create(this,531, 384, 759, 409); 
	m_wndPhanloailabel.Create(this, _T("Phân loại gói"), 10, 415, 90, 440);
	m_wndPhanloai.Create(this,95, 415, 759, 440); 
	m_wndActive.Create(this, _T("Active"), 10, 445, 90, 470);
	m_wndAdd.Create(this, _T("&Add"), 254, 481, 334, 506);
	m_wndEdit.Create(this, _T("&Edit"), 339, 481, 419, 506);
	m_wndDelete.Create(this, _T("&Delete"), 424, 481, 504, 506);
	m_wndSave.Create(this, _T("&Save"), 509, 481, 589, 506);
	m_wndCancel.Create(this, _T("&Cancel"), 594, 481, 674, 506);
	m_wndClose.Create(this, _T("&Close"), 679, 481, 759, 506);
}
void CHMSThietLap_Thongtin_Vattu::OnInitializeComponents()
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
	m_wndLot.SetLimitText(35);
	m_wndLot.SetCheckValue(true);
	//m_wndExpireDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndExpireDate.SetCheckValue(true);
	m_wndCountry.SetCheckValue(true);
	m_wndCountry.LimitText(35);

	m_wndList.InsertColumn(0, _T("ID"), CFMT_TEXT, 120);
	m_wndList.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);
	m_wndList.InsertColumn(2, _T("Qty"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(3, _T("Price"), CFMT_MONEY, 80);
	m_wndList.InsertColumn(4, _T("Nước SX"), CFMT_TEXT, 120);
	m_wndList.InsertColumn(5, _T("Phân loại"), CFMT_TEXT, 120);
	m_wndList.InsertColumn(6, _T("Active"), CFMT_TEXT, 50);

	m_wndCountry.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndCountry.InsertColumn(1, _T("Name"), CFMT_TEXT, 425);

	m_wndPhanloai.InsertColumn(0, _T("ID"), CFMT_TEXT, 120);
	m_wndPhanloai.InsertColumn(1, _T("Name"), CFMT_TEXT, 600);

	m_material_list_Tbl.SetTableName(_T("M_MATERIAL_LIST"));
	m_material_list_Tbl.AddField(_T("MA_CODE"), dfText, 35);
	m_material_list_Tbl.AddField(_T("MA_NAME"), dfText, 256); 
	m_material_list_Tbl.AddField(_T("MA_QTY"), dfInteger);
	m_material_list_Tbl.AddField(_T("MA_PRICE"), dfDouble);
	m_material_list_Tbl.AddField(_T("MA_COUNTRY"), dfText, 35);
	m_material_list_Tbl.AddField(_T("MA_ISACTIVE"), dfText, 1);
	m_material_list_Tbl.AddField(_T("MA_TYPE"), dfText, 12);
}
void CHMSThietLap_Thongtin_Vattu::OnSetWindowEvents()
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
	m_wndLot.SetEvent(WE_CHECKVALUE, _OnLotCheckValueFnc);	
	m_wndExpireDate.SetEvent(WE_CHECKVALUE, _OnExpireDateCheckValueFnc);	
	m_wndCountry.SetEvent(WE_LOADDATA, _OnCountryLoadDataFnc);	
	m_wndActive.SetEvent(WE_CLICK, _OnActiveSelectFnc);

	m_wndQty.SetEvent(WE_CHECKVALUE, _OnQtyCheckValueFnc);	
	m_wndPrice.SetEvent(WE_CHECKVALUE, _OnPriceCheckValueFnc);

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
void CHMSThietLap_Thongtin_Vattu::OnDoDataExchange(CDataExchange* pDX)
{
	DDX_Text(pDX, m_wndSearchByName.GetDlgCtrlID(), m_szSearchByName);
	DDX_Text(pDX, m_wndID.GetDlgCtrlID(), m_szID);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_Text(pDX, m_wndLot.GetDlgCtrlID(), m_szLot);
	DDX_TextEx(pDX, m_wndExpireDate.GetDlgCtrlID(), m_szExpireDate);
	DDX_TextEx(pDX, m_wndCountry.GetDlgCtrlID(), m_szCountryKey);
	DDX_Check(pDX, m_wndActive.GetDlgCtrlID(), m_bActive);
	DDX_TextEx(pDX, m_wndPhanloai.GetDlgCtrlID(), m_szPhanloaiKey);
	DDX_Text(pDX, m_wndQty.GetDlgCtrlID(), m_nQty);
	DDX_Text(pDX, m_wndPrice.GetDlgCtrlID(), m_nPrice);
}
void CHMSThietLap_Thongtin_Vattu::GetDataToScreen()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr;
	szSQL.Format(_T("SELECT * FROM M_MATERIAL_LIST WHERE MA_CODE='%s'"), m_szID);
	rs.ExecSQL(szSQL);

	if (!rs.IsEOF())
	{
		rs.GetValue(_T("MA_CODE"), m_szID);
		rs.GetValue(_T("MA_NAME"), m_szName);		
		rs.GetValue(_T("MA_QTY"), m_nQty);
		rs.GetValue(_T("MA_PRICE"), m_nPrice);
		rs.GetValue(_T("MA_COUNTRY"), m_szCountryKey);		
		rs.GetValue(_T("MA_ISACTIVE"), tmpStr);
		m_bActive = tmpStr==_T("Y")?true:false;
		rs.GetValue(_T("MA_TYPE"), m_szPhanloaiKey);
		SetMode(VM_VIEW);
	}
	else
	{
		SetMode(VM_NONE);
	}
}
void CHMSThietLap_Thongtin_Vattu::GetScreenToData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

	m_material_list_Tbl.SetValue(_T("MA_CODE"), m_szID);
	m_material_list_Tbl.SetValue(_T("MA_NAME"), m_szName);
	m_material_list_Tbl.SetValue(_T("MA_QTY"), m_nQty);
	m_material_list_Tbl.SetValue(_T("MA_PRICE"), m_nPrice);
	m_material_list_Tbl.SetValue(_T("MA_COUNTRY"), m_szCountryKey);	
	m_material_list_Tbl.SetValue(_T("MA_ISACTIVE"),  m_bActive?_T("Y"):_T("N"));
	m_material_list_Tbl.SetValue(_T("MA_TYPE"), m_szPhanloaiKey);	
}
void CHMSThietLap_Thongtin_Vattu::SetDefaultValues()
{
	m_szSearchByName.Empty();
	m_szID.Empty();
	m_szName.Empty();
	m_nQty = 0;
	m_nPrice = 0;
	m_szCountryKey.Empty();
	m_bActive=FALSE;
	m_szPhanloaiKey.Empty();

}
int CHMSThietLap_Thongtin_Vattu::SetMode(int nMode)
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
void CHMSThietLap_Thongtin_Vattu::OnSearchByNameChange()
{
	UpdateData(TRUE);
	OnListLoadData();
}
/*void CHMSThietLap_Thongtin_Vattu::OnSearchByNameSetfocus(){
	
} */
/*void CHMSThietLap_Thongtin_Vattu::OnSearchByNameKillfocus(){
	
} */
int CHMSThietLap_Thongtin_Vattu::OnSearchByNameCheckValue(){
	return 0;
} 
void CHMSThietLap_Thongtin_Vattu::OnListDblClick(){
	
} 

long CHMSThietLap_Thongtin_Vattu::OnPhanloaiLoadData()
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
	szSQL.Format(_T("select ss_code as id, ss_desc as name from sys_sel where ss_id='vc_vaccine_type' "), szWhere);
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

void CHMSThietLap_Thongtin_Vattu::OnListSelectChange(int nOldItem, int nNewItem)
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	if (nNewItem < 0)
		return;
	m_nIndex = nNewItem;
	m_szID = m_wndList.GetItemText(nNewItem, 0);
	GetDataToScreen();
} 
int CHMSThietLap_Thongtin_Vattu::OnListDeleteItem()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnDeleteHMSThietLap_Thongtin_Vattu();
	return 0;
} 
long CHMSThietLap_Thongtin_Vattu::OnListLoadData()
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
		szWhere.Format(_T(" AND lower(MA_NAME) LIKE lower('%s%s%s') "),
			           _T("%"), m_szSearchByName, _T("%"));
	}

	szSQL.Format(_T("SELECT MA_CODE AS ID, MA_NAME AS Name, MA_QTY as Qty, MA_PRICE as Price,  MA_COUNTRY as Country, MA_TYPE,MA_ISACTIVE as Active ")\
			     _T("FROM M_MATERIAL_LIST ")\
				 _T("WHERE 1=1 ORDER BY MA_TYPE %s "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF())
	{ 
		int nItem = m_wndList.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Name")),
			rs.GetValue(_T("Qty")),
			rs.GetValue(_T("Price")),
			rs.GetValue(_T("Country")),
			rs.GetValue(_T("MA_TYPE")),
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
/*void CHMSThietLap_Thongtin_Vattu::OnIDChange(){
	
} */
/*void CHMSThietLap_Thongtin_Vattu::OnIDSetfocus(){
	
} */
/*void CHMSThietLap_Thongtin_Vattu::OnIDKillfocus(){
	
} */
int CHMSThietLap_Thongtin_Vattu::OnIDCheckValue()
{
	UpdateData(TRUE);
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;

	szSQL.Format(_T("SELECT Count(*) FROM M_MATERIAL_LIST WHERE MA_CODE='%s'"), m_szID);
	rs.ExecSQL(szSQL);

	if (rs.GetIntValue() > 0 && (GetMode() == VM_ADD))
	{
		m_wndID.SetToolTipMessage(_T("Đã có đề mục trùng mã trong dữ liệu rồi"));
		return -1;
	}
	return 0;
} 
/*void CHMSThietLap_Thongtin_Vattu::OnNameChange(){
	
} */
/*void CHMSThietLap_Thongtin_Vattu::OnNameSetfocus(){
	
} */
/*void CHMSThietLap_Thongtin_Vattu::OnNameKillfocus(){
	
} */
int CHMSThietLap_Thongtin_Vattu::OnNameCheckValue()
{
	UpdateData(TRUE);
	CString szTemp;
	PreInitCap(m_szName, szTemp);
	m_szName = szTemp;
	UpdateData(FALSE);
	return 0;
}

int CHMSThietLap_Thongtin_Vattu::OnLotCheckValue(){
	return 0;
}

int CHMSThietLap_Thongtin_Vattu::OnExpireDateCheckValue()
{
	return 0;
} 

long CHMSThietLap_Thongtin_Vattu::OnCountryLoadData()
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

void CHMSThietLap_Thongtin_Vattu::OnActiveSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
}

void CHMSThietLap_Thongtin_Vattu::OnAddSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnAddHMSThietLap_Thongtin_Vattu();
} 
void CHMSThietLap_Thongtin_Vattu::OnEditSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnEditHMSThietLap_Thongtin_Vattu();
} 
void CHMSThietLap_Thongtin_Vattu::OnDeleteSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnDeleteHMSThietLap_Thongtin_Vattu();
} 
void CHMSThietLap_Thongtin_Vattu::OnSaveSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnSaveHMSThietLap_Thongtin_Vattu();
} 
void CHMSThietLap_Thongtin_Vattu::OnCancelSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnCancelHMSThietLap_Thongtin_Vattu();
} 
void CHMSThietLap_Thongtin_Vattu::OnCloseSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnCancel();
} 
int CHMSThietLap_Thongtin_Vattu::OnAddHMSThietLap_Thongtin_Vattu(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSThietLap_Thongtin_Vattu::OnEditHMSThietLap_Thongtin_Vattu(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSThietLap_Thongtin_Vattu::OnDeleteHMSThietLap_Thongtin_Vattu()
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
	szSQL.Format(_T("DELETE FROM M_MATERIAL_LIST WHERE MA_CODE='%s'"), m_szID); 
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
int CHMSThietLap_Thongtin_Vattu::OnSaveHMSThietLap_Thongtin_Vattu()
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
		szSQL = m_material_list_Tbl.GetInsertSQL();
		bAdd = true;
 	} 
 	else if(GetMode() == VM_EDIT)
	{ 
 		CString szWhere;
		szWhere.Format(_T(" WHERE MA_CODE='%s' "), m_szID); 
 		szSQL = m_material_list_Tbl.GetUpdateSQL(_T("MA_CODE")); 
 		szSQL += szWhere; 
 	} 
	_fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		//OnHMSThietLap_Thongtin_VattuListLoadData(); 
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
int CHMSThietLap_Thongtin_Vattu::OnCancelHMSThietLap_Thongtin_Vattu()
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
int CHMSThietLap_Thongtin_Vattu::OnHMSThietLap_Thongtin_VattuListLoadData(){
	return 0;
}
void CHMSThietLap_Thongtin_Vattu::SetItemSel(CGuiListCtrl *pList, CString szID, int nIndex)
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
int CHMSThietLap_Thongtin_Vattu::OnQtyCheckValue(){
	return 0;
} 
int CHMSThietLap_Thongtin_Vattu::OnPriceCheckValue(){
	return 0;
}