#include "HMSPhacDoSettingDlg.h"
#include "MainFrm.h"
#include "HMSPhacDoInforDlg.h"

/*static void _OnSearchChangeFnc(CWnd *pWnd){
	((CHMSPhacDoSettingDlg *)pWnd)->OnSearchChange();
} */
/*static void _OnSearchSetfocusFnc(CWnd *pWnd){
	((CHMSPhacDoSettingDlg *)pWnd)->OnSearchSetfocus();} */ 
/*static void _OnSearchKillfocusFnc(CWnd *pWnd){
	((CHMSPhacDoSettingDlg *)pWnd)->OnSearchKillfocus();
} */
static int _OnSearchCheckValueFnc(CWnd *pWnd){
	return ((CHMSPhacDoSettingDlg *)pWnd)->OnSearchCheckValue();
} 
static void _OnLoadSelectFnc(CWnd *pWnd){
	CHMSPhacDoSettingDlg *pVw = (CHMSPhacDoSettingDlg *)pWnd;
	pVw->OnLoadSelect();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSPhacDoSettingDlg *pVw = (CHMSPhacDoSettingDlg *)pWnd;
	pVw->OnAddSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSPhacDoSettingDlg*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSPhacDoSettingDlg*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSPhacDoSettingDlg*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSPhacDoSettingDlg*)pWnd)->OnListDeleteItem();
} 
/*static void _OnTenPhacDoChangeFnc(CWnd *pWnd){
	((CHMSPhacDoSettingDlg *)pWnd)->OnTenPhacDoChange();
} */
/*static void _OnTenPhacDoSetfocusFnc(CWnd *pWnd){
	((CHMSPhacDoSettingDlg *)pWnd)->OnTenPhacDoSetfocus();} */ 
/*static void _OnTenPhacDoKillfocusFnc(CWnd *pWnd){
	((CHMSPhacDoSettingDlg *)pWnd)->OnTenPhacDoKillfocus();
} */
static int _OnTenPhacDoCheckValueFnc(CWnd *pWnd){
	return ((CHMSPhacDoSettingDlg *)pWnd)->OnTenPhacDoCheckValue();
} 
/*static void _OnNoteChangeFnc(CWnd *pWnd){
	((CHMSPhacDoSettingDlg *)pWnd)->OnNoteChange();
} */
/*static void _OnNoteSetfocusFnc(CWnd *pWnd){
	((CHMSPhacDoSettingDlg *)pWnd)->OnNoteSetfocus();} */ 
/*static void _OnNoteKillfocusFnc(CWnd *pWnd){
	((CHMSPhacDoSettingDlg *)pWnd)->OnNoteKillfocus();
} */
static int _OnNoteCheckValueFnc(CWnd *pWnd){
	return ((CHMSPhacDoSettingDlg *)pWnd)->OnNoteCheckValue();
} 
static void _OnTabSelectChangeFnc(CWnd *pWnd, int nOld, int nNew){
	((CHMSPhacDoSettingDlg*)pWnd)->OnTabSelectChange(nOld, nNew);
} 
static void _OnAddICD10SelectFnc(CWnd *pWnd){
	CHMSPhacDoSettingDlg *pVw = (CHMSPhacDoSettingDlg *)pWnd;
	pVw->OnAddICD10Select();
} 
static void _OnAddFeeSelectFnc(CWnd *pWnd){
	CHMSPhacDoSettingDlg *pVw = (CHMSPhacDoSettingDlg *)pWnd;
	pVw->OnAddFeeSelect();
} 
static void _OnAddGenericSelectFnc(CWnd *pWnd){
	CHMSPhacDoSettingDlg *pVw = (CHMSPhacDoSettingDlg *)pWnd;
	pVw->OnAddGenericSelect();
} 
static void _OnAddATCcodeSelectFnc(CWnd *pWnd){
	CHMSPhacDoSettingDlg *pVw = (CHMSPhacDoSettingDlg *)pWnd;
	pVw->OnAddATCcodeSelect();
} 
static void _OnHiveActiveSelectFnc(CWnd *pWnd){
	CHMSPhacDoSettingDlg *pVw = (CHMSPhacDoSettingDlg *)pWnd;
	pVw->OnHiveActiveSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CHMSPhacDoSettingDlg *pVw = (CHMSPhacDoSettingDlg *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnAddTreatMentDaySelectFnc(CWnd *pWnd){
	CHMSPhacDoSettingDlg *pVw = (CHMSPhacDoSettingDlg *)pWnd;
	pVw->OnAddTreatMentDaySelect();
} 
/*static void _OnDinhNghiaPhacDoChangeFnc(CWnd *pWnd){
	((CHMSPhacDoSettingDlg *)pWnd)->OnDinhNghiaPhacDoChange();
} */
/*static void _OnDinhNghiaPhacDoSetfocusFnc(CWnd *pWnd){
	((CHMSPhacDoSettingDlg *)pWnd)->OnDinhNghiaPhacDoSetfocus();} */ 
/*static void _OnDinhNghiaPhacDoKillfocusFnc(CWnd *pWnd){
	((CHMSPhacDoSettingDlg *)pWnd)->OnDinhNghiaPhacDoKillfocus();
} */
static int _OnDinhNghiaPhacDoCheckValueFnc(CWnd *pWnd){
	return ((CHMSPhacDoSettingDlg *)pWnd)->OnDinhNghiaPhacDoCheckValue();
} 
static void _OnAttactFileSelectFnc(CWnd *pWnd){
	CHMSPhacDoSettingDlg *pVw = (CHMSPhacDoSettingDlg *)pWnd;
	pVw->OnAttactFileSelect();
} 
static int _OnAddHMSPhacDoSettingDlgFnc(CWnd *pWnd){
	 return ((CHMSPhacDoSettingDlg*)pWnd)->OnAddHMSPhacDoSettingDlg();
} 
static int _OnEditHMSPhacDoSettingDlgFnc(CWnd *pWnd){
	 return ((CHMSPhacDoSettingDlg*)pWnd)->OnEditHMSPhacDoSettingDlg();
} 
static int _OnDeleteHMSPhacDoSettingDlgFnc(CWnd *pWnd){
	 return ((CHMSPhacDoSettingDlg*)pWnd)->OnDeleteHMSPhacDoSettingDlg();
} 
static int _OnSaveHMSPhacDoSettingDlgFnc(CWnd *pWnd){
	 return ((CHMSPhacDoSettingDlg*)pWnd)->OnSaveHMSPhacDoSettingDlg();
} 
static int _OnCancelHMSPhacDoSettingDlgFnc(CWnd *pWnd){
	 return ((CHMSPhacDoSettingDlg*)pWnd)->OnCancelHMSPhacDoSettingDlg();
}
static void _OnGroupTreeSelChangeFnc(CWnd *pWnd, HTREEITEM oldhItem, HTREEITEM newhItem){
	((CHMSPhacDoSettingDlg*)pWnd->GetParent())->OnGroupTreeSelChange(oldhItem, newhItem);
} 

CHMSPhacDoSettingDlg::CHMSPhacDoSettingDlg(){

	m_nDlgWidth = 1015;
	m_nDlgHeight = 685;
	SetDefaultValues();
}
CHMSPhacDoSettingDlg::~CHMSPhacDoSettingDlg(){
}
void CHMSPhacDoSettingDlg::OnCreateComponents(){
	m_wndGrpPhacDo.Create(this, _T("Thông tin thiết lập phác đồ"), 5, 35, 1005, 675);
	m_wndSearchLabel.Create(this, _T("Search"), 10, 60, 90, 85);
	m_wndSearch.Create(this,95, 60, 535, 85); 
	m_wndLoad.Create(this, _T("Load"), 5, 5, 85, 30);
	m_wndAdd.Create(this, _T("&Add"), 90, 5, 170, 30);
	m_wndPhacDoLabel.Create(this, _T("Danh mục phác đồ theo ICD"), 725, 5, 1005, 30);
	//m_wndList.Create(this,10, 90, 295, 670); 

	m_wndGroupTree.Create(WS_VISIBLE | WS_TABSTOP | WS_CHILD | WS_BORDER | TVS_HASBUTTONS | TVS_LINESATROOT | TVS_HASLINES  | TVS_DISABLEDRAGDROP,
		CRect(10, 90, 535, 365), this, NULL);

	m_wndTenPhacDoLabel.Create(this, _T("Tên phác đồ"), 10, 370, 100, 395);
	m_wndTenPhacDo.Create(this,105, 370, 535, 420, TRUE, FALSE, TRUE);
	m_wndNoteLabel.Create(this, _T("Note"), 10, 505, 100, 530);
	m_wndNote.Create(this,105, 505, 535, 610, TRUE, FALSE, TRUE);

	m_wndAddICD10.Create(this, _T("Thêm ICD10"), 165, 615, 285, 640);
	m_wndAddFee.Create(this, _T("Thêm chỉ định CLS"), 290, 615, 410, 640);
	m_wndAddGeneric.Create(this, _T("Thêm hoạt chất"), 415, 615, 535, 640);
	m_wndAddATCcode.Create(this, _T("AddATCcode"), 165, 645, 285, 670);
	m_wndHiveActive.Create(this, _T("Ẩn hoạt động"), 260, 5, 365, 30);
	m_wndEdit.Create(this, _T("&Edit"), 175, 5, 255, 30);
	m_wndAddTreatMentDay.Create(this, _T("Thêm ngày ĐT"), 290, 645, 410, 670);
	m_wndDinhNghiaLabel.Create(this, _T("Định nghĩa PĐ"), 10, 425, 100, 450);
	m_wndDinhNghiaPhacDo.Create(this,105, 425, 535, 500, TRUE, FALSE, TRUE);
	m_wndAttactFile.Create(this, _T("AttactFile"), 415, 645, 535, 670);
	m_wndAddATCcode.ShowWindow(SW_HIDE);
	m_wndAddFee.ShowWindow(SW_HIDE);
	m_wndAddGeneric.ShowWindow(SW_HIDE);
	
	m_wndTab.Create(this,540, 60, 1000, 670); 	
	m_wndICDView.Create(&m_wndTab);
	m_wndFeeView.Create(&m_wndTab);
	m_wndDrugView.Create(&m_wndTab);
	m_wndAttactFileView.Create(&m_wndTab);

	m_wndTab.Add(_T("Mã bệnh ICD 10"), &m_wndICDView);
	m_wndTab.Add(_T("Chỉ định CLS"), &m_wndFeeView);
	m_wndTab.Add(_T("Chỉ định thuốc"), &m_wndDrugView);
	m_wndTab.Add(_T("File đính kèm"), &m_wndAttactFileView);

}
void CHMSPhacDoSettingDlg::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndSearch.SetLimitText(254);
//	m_wndSearch.SetCheckValue(true);
	m_wndTenPhacDo.SetLimitText(254);
	m_wndTenPhacDo.SetCheckValue(true);
//	m_wndNote.SetLimitText(35);
//	m_wndNote.SetCheckValue(true);

	m_wndList.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(1, _T("Tên phác đồ"), CFMT_TEXT, 300);
	m_wndList.InsertColumn(2, _T("Ghi chú"), CFMT_TEXT, 400);//type




}
void CHMSPhacDoSettingDlg::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	m_wndICDView.OnInitDialog();
	m_wndFeeView.OnInitDialog();
	m_wndDrugView.OnInitDialog();
	m_wndAttactFileView.OnInitDialog();

	//m_wndSearch.SetEvent(WE_CHANGE, _OnSearchChangeFnc);
	//m_wndSearch.SetEvent(WE_SETFOCUS, _OnSearchSetfocusFnc);
	//m_wndSearch.SetEvent(WE_KILLFOCUS, _OnSearchKillfocusFnc);
	m_wndSearch.SetEvent(WE_CHECKVALUE, _OnSearchCheckValueFnc);
	m_wndLoad.SetEvent(WE_CLICK, _OnLoadSelectFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	//m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	//m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	//m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	//m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndGroupTree.SetSelChangeCallback(_OnGroupTreeSelChangeFnc);
	//m_wndTenPhacDo.SetEvent(WE_CHANGE, _OnTenPhacDoChangeFnc);
	//m_wndTenPhacDo.SetEvent(WE_SETFOCUS, _OnTenPhacDoSetfocusFnc);
	//m_wndTenPhacDo.SetEvent(WE_KILLFOCUS, _OnTenPhacDoKillfocusFnc);
	m_wndTenPhacDo.SetEvent(WE_CHECKVALUE, _OnTenPhacDoCheckValueFnc);
	//m_wndNote.SetEvent(WE_CHANGE, _OnNoteChangeFnc);
	//m_wndNote.SetEvent(WE_SETFOCUS, _OnNoteSetfocusFnc);
	//m_wndNote.SetEvent(WE_KILLFOCUS, _OnNoteKillfocusFnc);
	m_wndNote.SetEvent(WE_CHECKVALUE, _OnNoteCheckValueFnc);
	m_wndTab.SetEvent(WE_SELCHANGE, _OnTabSelectChangeFnc);
	m_wndAddICD10.SetEvent(WE_CLICK, _OnAddICD10SelectFnc);
	m_wndAddFee.SetEvent(WE_CLICK, _OnAddFeeSelectFnc);
	m_wndAddGeneric.SetEvent(WE_CLICK, _OnAddGenericSelectFnc);
	m_wndAddATCcode.SetEvent(WE_CLICK, _OnAddATCcodeSelectFnc);
	m_wndHiveActive.SetEvent(WE_CLICK, _OnHiveActiveSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndAddTreatMentDay.SetEvent(WE_CLICK, _OnAddTreatMentDaySelectFnc);
	//m_wndDinhNghiaPhacDo.SetEvent(WE_CHANGE, _OnDinhNghiaPhacDoChangeFnc);
	//m_wndDinhNghiaPhacDo.SetEvent(WE_SETFOCUS, _OnDinhNghiaPhacDoSetfocusFnc);
	//m_wndDinhNghiaPhacDo.SetEvent(WE_KILLFOCUS, _OnDinhNghiaPhacDoKillfocusFnc);
	m_wndDinhNghiaPhacDo.SetEvent(WE_CHECKVALUE, _OnDinhNghiaPhacDoCheckValueFnc);
	m_wndAttactFile.SetEvent(WE_CLICK, _OnAttactFileSelectFnc);
	SetMode(VM_ADD);
	OnListLoadData();

}
void CHMSPhacDoSettingDlg::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndSearch.GetDlgCtrlID(), m_szSearch);
	DDX_Text(pDX, m_wndTenPhacDo.GetDlgCtrlID(), m_szTenPhacDo);
	DDX_Text(pDX, m_wndNote.GetDlgCtrlID(), m_szNote);
	DDX_Text(pDX, m_wndDinhNghiaPhacDo.GetDlgCtrlID(), m_szDinhNghiaPhacDo);

}
void CHMSPhacDoSettingDlg::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Search")] =  m_szSearch;
	m_jData[_T("TenPhacDo")] =  m_szTenPhacDo;
	m_jData[_T("Note")] =  m_szNote;
	m_jData[_T("DinhNghiaPhacDo")] =  m_szDinhNghiaPhacDo;
	}
	else
	{
			
	m_jData[_T("Search")].GetValue(m_szSearch);
	m_jData[_T("TenPhacDo")].GetValue(m_szTenPhacDo);
	m_jData[_T("Note")].GetValue(m_szNote);
	m_jData[_T("DinhNghiaPhacDo")].GetValue(m_szDinhNghiaPhacDo);
	}

}
void CHMSPhacDoSettingDlg::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM hms_phacdo where phacdo_id=%ld"), m_nID);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("ten_phacdo"), m_szTenPhacDo);
		rs.GetValue(_T("dinhnghia_phacdo"), m_szDinhNghiaPhacDo);
		rs.GetValue(_T("note"), m_szNote);
		// tab load cac tab de lam sau

		UpdateData(false);
	}

}
void CHMSPhacDoSettingDlg::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSPhacDoSettingDlg::SetDefaultValues(){

	m_szSearch.Empty();
	m_szTenPhacDo.Empty();
	m_szNote.Empty();
	m_szDinhNghiaPhacDo.Empty();

}
int CHMSPhacDoSettingDlg::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1,2,3,4,5,6,7,8, -1);
 			SetDefaultValues();
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 3, 4, -1);
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
		m_wndTenPhacDo.EnableWindow(false);
		m_wndNote.EnableWindow(false);
		m_wndDinhNghiaPhacDo.EnableWindow(false);
 		UpdateData(FALSE);
 		return nOldMode;
}
/*void CHMSPhacDoSettingDlg::OnSearchChange(){
	
} */
/*void CHMSPhacDoSettingDlg::OnSearchSetfocus(){
	
} */
/*void CHMSPhacDoSettingDlg::OnSearchKillfocus(){
	
} */
int CHMSPhacDoSettingDlg::OnSearchCheckValue(){
	OnListLoadData();
	return 0;
} 
void CHMSPhacDoSettingDlg::OnLoadSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 

void CHMSPhacDoSettingDlg::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	// them phac do dieu tri
	CHMSPhacDoInforDlg dlg(this,VM_ADD);
	if(dlg.DoModal() == IDOK)
	{
		OnListLoadData();
	}
	
} 
void CHMSPhacDoSettingDlg::OnListDblClick(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	// them phac do dieu tri
	
} 
void CHMSPhacDoSettingDlg::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if ( nNewItem <0)
		return;
	m_nID = str2long(m_wndList.GetItemText(nNewItem,0));
	GetDataToScreen();
	m_wndTab.SetCurSel(0);
	OnTabSelectChange(-1,0);
	
} 
int CHMSPhacDoSettingDlg::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSPhacDoSettingDlg::OnListLoadData(UINT nFlag){

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL,szWhere;
	HTREEITEM tvi[10],hCha,hCon, hItem, oldhItem = NULL;
	m_wndGroupTree.DeleteAllItems();
	m_wndGroupTree.SetItemHeight(22);
	int i=0;
	tvi[0] = 	TVI_ROOT;
	hCha =m_wndGroupTree.InsertItem(_T("Danh sách phác đồ"), TVI_ROOT);

	int nCount = 0;
	if(!m_szSearch.IsEmpty())
		szWhere.AppendFormat(_T(" AND lower(ten_phacdo) LIKE chr(37)||lower('%s')||chr(37)"), m_szSearch);
	szSQL.Format(_T("select hms_phacdo.*,name as category_name from hms_phacdo ") \
				_T(" left join hms_phacdo_category on (id=category_id) ") \
				_T("	where 1=1  %s order by category_name,ten_phacdo "),szWhere);
	nCount = rs.ExecSQL(szSQL);
	CString szTenPhacDo,szPhacDoID;
	CString szCategoryNew, szCategoryOld;
	while(!rs.IsEOF()){
		tvi[0] = TVI_ROOT;
		rs.GetValue(_T("category_name"),szCategoryNew);

		if(szCategoryNew != szCategoryOld && !szCategoryNew.IsEmpty())
		{
			hCha =m_wndGroupTree.InsertItem(szCategoryNew, TVI_ROOT);
		}
		rs.GetValue(_T("phacdo_id"),szPhacDoID);
		rs.GetValue(_T("ten_phacdo"),szTenPhacDo);
		hItem = m_wndGroupTree.InsertItem(szPhacDoID+_T(". ")+szTenPhacDo, hCha);
		tvi[i+1] = hItem;
		

		m_wndGroupTree.SetItemBold(hItem, true);
		m_wndGroupTree.SetItemID(hItem, szPhacDoID);

		szCategoryOld = szCategoryNew;

		rs.MoveNext();
	}
	m_wndGroupTree.ExpandItem(TVI_ROOT, nFlag);
	return nCount;
}

void CHMSPhacDoSettingDlg::OnGroupTreeSelChange(HTREEITEM oldhItem, HTREEITEM newhItem){

	if(!newhItem || m_wndGroupTree.GetCount()<=0)
		return;
	
	m_hItem = newhItem;
	m_nID = str2long(m_wndGroupTree.GetItemID(newhItem));
//_tprintf(_T("\r\n%ld"), m_nID);	
	GetDataToScreen();
	m_wndTab.SetCurSel(0);
	OnTabSelectChange(-1,0);
//	SetMode(VM_VIEW);
}
/*void CHMSPhacDoSettingDlg::OnTenPhacDoChange(){
	
} */
/*void CHMSPhacDoSettingDlg::OnTenPhacDoSetfocus(){
	
} */
/*void CHMSPhacDoSettingDlg::OnTenPhacDoKillfocus(){
	
} */
int CHMSPhacDoSettingDlg::OnTenPhacDoCheckValue(){
	return 0;
} 
/*void CHMSPhacDoSettingDlg::OnNoteChange(){
	
} */
/*void CHMSPhacDoSettingDlg::OnNoteSetfocus(){
	
} */
/*void CHMSPhacDoSettingDlg::OnNoteKillfocus(){
	
} */
int CHMSPhacDoSettingDlg::OnNoteCheckValue(){
	return 0;
} 
void CHMSPhacDoSettingDlg::OnTabSelectChange(int nOld, int nNew){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	if(nNew < 0)
		return;
	m_wndTab.SetCurSel(nNew);

	switch(nNew){
	case 0:
		m_wndICDView.m_nType=0;
		m_wndICDView.m_nPhacDoId= m_nID;
		m_wndICDView.OnListLoadData();	
		break;
	case 1:
		m_wndFeeView.m_nType=1;
		m_wndFeeView.m_nPhacDoId= m_nID;
		m_wndFeeView.m_nPhacDoLineID= 0;
		m_wndFeeView.OnListLoadData();	
		break;
	case 2:
		m_wndDrugView.m_nType=2;
		m_wndDrugView.m_nPhacDoId= m_nID;
		m_wndDrugView.m_nPhacDoLineID= 0;
		m_wndDrugView.OnListLoadData();	
		break;	
	}
	
} 
#include "HMSICD10Class.h"
void CHMSPhacDoSettingDlg::OnAddICD10Select()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CHMSICD10Class dlg(this);
	dlg.m_nPhacDoID = m_nID;
	if(dlg.DoModal()==IDOK)
	{
		m_wndTab.SetCurSel(0);
	}
} 
#include "HMSParaclinicalDialog.h"
void CHMSPhacDoSettingDlg::OnAddFeeSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	// them cLS nhu trong thiet lap nhom
	if(m_nID <= 0)
		return;
//	if(!pMF->CheckPermission(_T("01.31")))
//	{
//		ShowMessageBox(_T("Permission denied"));
//		return;
//	}
	CHMSParaclinicalDialog dlg(this);
	dlg.m_bHasApply = false;
	CString szSQL;
	CString szGender = _T("A");
	if(dlg.DoModal() ==  IDOK)
	{
		for (int i =0; i < dlg.m_arItems.GetCount(); i++)
		{
			PARAITEM item = dlg.m_arItems[i];

		
			szSQL.Format(_T("hms_phacdo_addline(%ld,'%s','%s', %f, '%s','%s') "),
				m_nID, _T("CLS"), item.szID, str2float(item.szQty), item.szNote, _T(""));
			pMF->ExecDML(szSQL);
		}
		m_wndTab.SetCurSel(1);
		//m_wndFeeView.OnListLoadData();
	//	OnListLoadData();
	}
	
} 
#include "HMSPhacDoDrugSettingDlg.h"
void CHMSPhacDoSettingDlg::OnAddGenericSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CHMSPhacDoDrugSettingDlg dlg(this);
	dlg.m_nPhacDoID= m_nID;
	dlg.DoModal();
	
} 
void CHMSPhacDoSettingDlg::OnAddATCcodeSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPhacDoSettingDlg::OnHiveActiveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPhacDoSettingDlg::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CHMSPhacDoInforDlg dlg(this,VM_EDIT);
	dlg.m_nID=m_nID;
	if(dlg.DoModal() == IDOK)
	{
		OnListLoadData();
	}
	
} 
#include "HMSPhacDoLineSettingDlg.h"
void CHMSPhacDoSettingDlg::OnAddTreatMentDaySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(m_nID <=0)
		return;
	CHMSPhacDoLineSettingDlg dlg(this);
	dlg.m_nPhacDoID= m_nID;
	dlg.DoModal();
	
} 
/*void CHMSPhacDoSettingDlg::OnDinhNghiaPhacDoChange(){
	
} */
/*void CHMSPhacDoSettingDlg::OnDinhNghiaPhacDoSetfocus(){
	
} */
/*void CHMSPhacDoSettingDlg::OnDinhNghiaPhacDoKillfocus(){
	
} */
int CHMSPhacDoSettingDlg::OnDinhNghiaPhacDoCheckValue(){
	return 0;
} 
void CHMSPhacDoSettingDlg::OnAttactFileSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
int CHMSPhacDoSettingDlg::OnAddHMSPhacDoSettingDlg(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSPhacDoSettingDlg::OnEditHMSPhacDoSettingDlg(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSPhacDoSettingDlg::OnDeleteHMSPhacDoSettingDlg(){
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
 		OnCancelHMSPhacDoSettingDlg();
 	}
	return 0;
}
int CHMSPhacDoSettingDlg::OnSaveHMSPhacDoSettingDlg(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
 		//szSQL = m_tblTbl.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
 		szWhere.Format(_T(" WHERE"));
 		//szSQL = m_tblTbl.GetUpdateSQL(_T("createdby,createddate"));
 		szSQL += szWhere;
 	}
 _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
 		//OnHMSPhacDoSettingDlgListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSPhacDoSettingDlg::OnCancelHMSPhacDoSettingDlg(){
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
int CHMSPhacDoSettingDlg::OnHMSPhacDoSettingDlgListLoadData(){
	return 0;
}

