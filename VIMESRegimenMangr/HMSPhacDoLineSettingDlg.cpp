#include "HMSPhacDoLineSettingDlg.h"
#include "HMSMainFrame.h"
static void _OnLoadSelectFnc(CWnd *pWnd){
	CHMSPhacDoLineSettingDlg *pVw = (CHMSPhacDoLineSettingDlg *)pWnd;
	pVw->OnLoadSelect();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSPhacDoLineSettingDlg *pVw = (CHMSPhacDoLineSettingDlg *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CHMSPhacDoLineSettingDlg *pVw = (CHMSPhacDoLineSettingDlg *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSPhacDoLineSettingDlg *pVw = (CHMSPhacDoLineSettingDlg *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSPhacDoLineSettingDlg *pVw = (CHMSPhacDoLineSettingDlg *)pWnd;
	pVw->OnSaveSelect();
} 
/*static void _OnSearchChangeFnc(CWnd *pWnd){
	((CHMSPhacDoLineSettingDlg *)pWnd)->OnSearchChange();
} */
/*static void _OnSearchSetfocusFnc(CWnd *pWnd){
	((CHMSPhacDoLineSettingDlg *)pWnd)->OnSearchSetfocus();} */ 
/*static void _OnSearchKillfocusFnc(CWnd *pWnd){
	((CHMSPhacDoLineSettingDlg *)pWnd)->OnSearchKillfocus();
} */
static int _OnSearchCheckValueFnc(CWnd *pWnd){
	return ((CHMSPhacDoLineSettingDlg *)pWnd)->OnSearchCheckValue();
} 
/*static void _OnNgayPhacDoChangeFnc(CWnd *pWnd){
	((CHMSPhacDoLineSettingDlg *)pWnd)->OnNgayPhacDoChange();
} */
/*static void _OnNgayPhacDoSetfocusFnc(CWnd *pWnd){
	((CHMSPhacDoLineSettingDlg *)pWnd)->OnNgayPhacDoSetfocus();} */ 
/*static void _OnNgayPhacDoKillfocusFnc(CWnd *pWnd){
	((CHMSPhacDoLineSettingDlg *)pWnd)->OnNgayPhacDoKillfocus();
} */
static int _OnNgayPhacDoCheckValueFnc(CWnd *pWnd){
	return ((CHMSPhacDoLineSettingDlg *)pWnd)->OnNgayPhacDoCheckValue();
} 
/*static void _OnNoteChangeFnc(CWnd *pWnd){
	((CHMSPhacDoLineSettingDlg *)pWnd)->OnNoteChange();
} */
/*static void _OnNoteSetfocusFnc(CWnd *pWnd){
	((CHMSPhacDoLineSettingDlg *)pWnd)->OnNoteSetfocus();} */ 
/*static void _OnNoteKillfocusFnc(CWnd *pWnd){
	((CHMSPhacDoLineSettingDlg *)pWnd)->OnNoteKillfocus();
} */
static int _OnNoteCheckValueFnc(CWnd *pWnd){
	return ((CHMSPhacDoLineSettingDlg *)pWnd)->OnNoteCheckValue();
} 
/*static void _OnHuongXuTriChangeFnc(CWnd *pWnd){
	((CHMSPhacDoLineSettingDlg *)pWnd)->OnHuongXuTriChange();
} */
/*static void _OnHuongXuTriSetfocusFnc(CWnd *pWnd){
	((CHMSPhacDoLineSettingDlg *)pWnd)->OnHuongXuTriSetfocus();} */ 
/*static void _OnHuongXuTriKillfocusFnc(CWnd *pWnd){
	((CHMSPhacDoLineSettingDlg *)pWnd)->OnHuongXuTriKillfocus();
} */
static int _OnHuongXuTriCheckValueFnc(CWnd *pWnd){
	return ((CHMSPhacDoLineSettingDlg *)pWnd)->OnHuongXuTriCheckValue();
} 
static void _OnCheDoAnSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSPhacDoLineSettingDlg* )pWnd)->OnCheDoAnSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnCheDoAnSelendokFnc(CWnd *pWnd){
	((CHMSPhacDoLineSettingDlg *)pWnd)->OnCheDoAnSelendok();
}
/*static void _OnCheDoAnSetfocusFnc(CWnd *pWnd){
	((CHMSPhacDoLineSettingDlg *)pWnd)->OnCheDoAnKillfocus();
}*/
/*static void _OnCheDoAnKillfocusFnc(CWnd *pWnd){
	((CHMSPhacDoLineSettingDlg *)pWnd)->OnCheDoAnKillfocus();
}*/
static long _OnCheDoAnLoadDataFnc(CWnd *pWnd){
	return ((CHMSPhacDoLineSettingDlg *)pWnd)->OnCheDoAnLoadData();
}
/*static void _OnCheDoAnAddNewFnc(CWnd *pWnd){
	((CHMSPhacDoLineSettingDlg *)pWnd)->OnCheDoAnAddNew();
}*/
/*static void _OnCheDoChamSocChangeFnc(CWnd *pWnd){
	((CHMSPhacDoLineSettingDlg *)pWnd)->OnCheDoChamSocChange();
} */
/*static void _OnCheDoChamSocSetfocusFnc(CWnd *pWnd){
	((CHMSPhacDoLineSettingDlg *)pWnd)->OnCheDoChamSocSetfocus();} */ 
/*static void _OnCheDoChamSocKillfocusFnc(CWnd *pWnd){
	((CHMSPhacDoLineSettingDlg *)pWnd)->OnCheDoChamSocKillfocus();
} */
static int _OnCheDoChamSocCheckValueFnc(CWnd *pWnd){
	return ((CHMSPhacDoLineSettingDlg *)pWnd)->OnCheDoChamSocCheckValue();
} 
static void _OnAddFeeSelectFnc(CWnd *pWnd){
	CHMSPhacDoLineSettingDlg *pVw = (CHMSPhacDoLineSettingDlg *)pWnd;
	pVw->OnAddFeeSelect();
} 
static void _OnAddGenericSelectFnc(CWnd *pWnd){
	CHMSPhacDoLineSettingDlg *pVw = (CHMSPhacDoLineSettingDlg *)pWnd;
	pVw->OnAddGenericSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSPhacDoLineSettingDlg*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSPhacDoLineSettingDlg*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSPhacDoLineSettingDlg*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSPhacDoLineSettingDlg*)pWnd)->OnListDeleteItem();
} 
static void _OnTabSelectChangeFnc(CWnd *pWnd, int nOld, int nNew){
	((CHMSPhacDoLineSettingDlg*)pWnd)->OnTabSelectChange(nOld, nNew);
} 
static int _OnAddHMSPhacDoLineSettingDlgFnc(CWnd *pWnd){
	 return ((CHMSPhacDoLineSettingDlg*)pWnd)->OnAddHMSPhacDoLineSettingDlg();
} 
static int _OnEditHMSPhacDoLineSettingDlgFnc(CWnd *pWnd){
	 return ((CHMSPhacDoLineSettingDlg*)pWnd)->OnEditHMSPhacDoLineSettingDlg();
} 
static int _OnDeleteHMSPhacDoLineSettingDlgFnc(CWnd *pWnd){
	 return ((CHMSPhacDoLineSettingDlg*)pWnd)->OnDeleteHMSPhacDoLineSettingDlg();
} 
static int _OnSaveHMSPhacDoLineSettingDlgFnc(CWnd *pWnd){
	 return ((CHMSPhacDoLineSettingDlg*)pWnd)->OnSaveHMSPhacDoLineSettingDlg();
} 
static int _OnCancelHMSPhacDoLineSettingDlgFnc(CWnd *pWnd){
	 return ((CHMSPhacDoLineSettingDlg*)pWnd)->OnCancelHMSPhacDoLineSettingDlg();
} 
CHMSPhacDoLineSettingDlg::CHMSPhacDoLineSettingDlg(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1015;
	m_nDlgHeight = 685;
	SetDefaultValues();
}
CHMSPhacDoLineSettingDlg::~CHMSPhacDoLineSettingDlg(){
}
void CHMSPhacDoLineSettingDlg::OnCreateComponents(){
	m_wndLoad.Create(this, _T("Load"), 5, 5, 85, 30);
	m_wndAdd.Create(this, _T("&Add"), 90, 5, 170, 30);
	m_wndEdit.Create(this, _T("&Edit"), 175, 5, 255, 30);
	m_wndDelete.Create(this, _T("Delete"), 260, 5, 340, 30);
	m_wndGrpPhacDo.Create(this, _T("Thông tin thiết lập ngày điều trị của phác đồ"), 5, 35, 1005, 675);
	m_wndSave.Create(this, _T("&Save"), 345, 5, 425, 30);
	m_wndPhacDoLabel.Create(this, _T("Tên phác đồ"), 620, 5, 1005, 30);
	m_wndSearchLabel.Create(this, _T("Search"), 10, 60, 90, 85);
	m_wndSearch.Create(this,95, 60, 220, 85); 
	m_wndNgayPhacDoLabel.Create(this, _T("Ngày phác đồ"), 225, 60, 440, 85);
	m_wndNgayPhacDo.Create(this,445, 60, 530, 85); 
	m_wndNoteLabel.Create(this, _T("Note"), 225, 90, 530, 115);
	m_wndNote.Create(this,225, 120, 530, 220, TRUE, FALSE, TRUE) ;
	m_wndHuongXuTriLabel.Create(this, _T("Hướng xử trí"), 225, 225, 530, 250);
	m_wndHuongXuTri.Create(this,225, 256, 530, 356, TRUE, FALSE, TRUE) ;
	m_wndCheDoAnLabel.Create(this, _T("Chế độ ăn"), 225, 360, 530, 385);
	m_wndCheDoAn.Create(this,225, 390, 530, 415); 
	m_wndCheDoChamSocLabel.Create(this, _T("Chế độ chăm sóc"), 225, 420, 530, 445);
	m_wndCheDoChamSoc.Create(this,225, 449, 530, 549, TRUE, FALSE, TRUE) ;
	m_wndAddFee.Create(this, _T("Thêm CLS"), 235, 555, 380, 605);
	m_wndAddGeneric.Create(this, _T("Thêm thuốc-VT"), 385, 555, 515, 605);
	m_wndList.Create(this,10, 90, 220, 670); 

	m_wndTab.Create(this,540, 60, 1000, 670);

	m_wndFeeView.Create(&m_wndTab);
	m_wndDrugView.Create(&m_wndTab);
	m_wndFeeView.OnInitDialog();
	m_wndDrugView.OnInitDialog();
	m_wndTab.Add(_T("Chỉ định CLS"), &m_wndFeeView);
	m_wndTab.Add(_T("Chỉ định thuốc"), &m_wndDrugView);	

}
void CHMSPhacDoLineSettingDlg::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndSearch.SetLimitText(1024);
	//m_wndSearch.SetCheckValue(true);
	m_wndNgayPhacDo.SetLimitText(16);
	m_wndNgayPhacDo.SetCheckValue(true);
	m_wndNote.SetLimitText(254);
	//m_wndNote.SetCheckValue(true);
	m_wndHuongXuTri.SetLimitText(254);
//	m_wndHuongXuTri.SetCheckValue(true);
//	m_wndCheDoAn.SetCheckValue(true);
	m_wndCheDoAn.LimitText(35);
	m_wndCheDoChamSoc.SetLimitText(254);
//	m_wndCheDoChamSoc.SetCheckValue(true);
	m_wndCheDoAn.InsertColumn(0,_T("id"),FMT_TEXT,80);
	m_wndCheDoAn.InsertColumn(1,_T("description"),FMT_TEXT,200);
	m_wndList.InsertColumn(0,_T("id"),FMT_TEXT,0);
	m_wndList.InsertColumn(1,_T("Ngày điều trị"),FMT_TEXT,80);
	m_hms_phacdo_treatment_day.SetTableName(_T("hms_phacdo_treatment_day"));
	m_hms_phacdo_treatment_day.AddField(_T("phacdo_id"),dfLong);
	m_hms_phacdo_treatment_day.AddField(_T("treatment_day_id"),dfLong);
	m_hms_phacdo_treatment_day.AddField(_T("number_day"),dfInteger);
	m_hms_phacdo_treatment_day.AddField(_T("note"),dfText,254);
	m_hms_phacdo_treatment_day.AddField(_T("huong_xu_tri"),dfText,254);
	m_hms_phacdo_treatment_day.AddField(_T("che_do_an"),dfText,10);
	m_hms_phacdo_treatment_day.AddField(_T("che_do_chamsoc"),dfText,254);
	

}
void CHMSPhacDoLineSettingDlg::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndLoad.SetEvent(WE_CLICK, _OnLoadSelectFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	//m_wndSearch.SetEvent(WE_CHANGE, _OnSearchChangeFnc);
	//m_wndSearch.SetEvent(WE_SETFOCUS, _OnSearchSetfocusFnc);
	//m_wndSearch.SetEvent(WE_KILLFOCUS, _OnSearchKillfocusFnc);
	m_wndSearch.SetEvent(WE_CHECKVALUE, _OnSearchCheckValueFnc);
	//m_wndNgayPhacDo.SetEvent(WE_CHANGE, _OnNgayPhacDoChangeFnc);
	//m_wndNgayPhacDo.SetEvent(WE_SETFOCUS, _OnNgayPhacDoSetfocusFnc);
	//m_wndNgayPhacDo.SetEvent(WE_KILLFOCUS, _OnNgayPhacDoKillfocusFnc);
	m_wndNgayPhacDo.SetEvent(WE_CHECKVALUE, _OnNgayPhacDoCheckValueFnc);
	//m_wndNote.SetEvent(WE_CHANGE, _OnNoteChangeFnc);
	//m_wndNote.SetEvent(WE_SETFOCUS, _OnNoteSetfocusFnc);
	//m_wndNote.SetEvent(WE_KILLFOCUS, _OnNoteKillfocusFnc);
	m_wndNote.SetEvent(WE_CHECKVALUE, _OnNoteCheckValueFnc);
	//m_wndHuongXuTri.SetEvent(WE_CHANGE, _OnHuongXuTriChangeFnc);
	//m_wndHuongXuTri.SetEvent(WE_SETFOCUS, _OnHuongXuTriSetfocusFnc);
	//m_wndHuongXuTri.SetEvent(WE_KILLFOCUS, _OnHuongXuTriKillfocusFnc);
	m_wndHuongXuTri.SetEvent(WE_CHECKVALUE, _OnHuongXuTriCheckValueFnc);
	m_wndCheDoAn.SetEvent(WE_SELENDOK, _OnCheDoAnSelendokFnc);
	//m_wndCheDoAn.SetEvent(WE_SETFOCUS, _OnCheDoAnSetfocusFnc);
	//m_wndCheDoAn.SetEvent(WE_KILLFOCUS, _OnCheDoAnKillfocusFnc);
	m_wndCheDoAn.SetEvent(WE_SELCHANGE, _OnCheDoAnSelectChangeFnc);
	m_wndCheDoAn.SetEvent(WE_LOADDATA, _OnCheDoAnLoadDataFnc);
	//m_wndCheDoAn.SetEvent(WE_ADDNEW, _OnCheDoAnAddNewFnc);
	//m_wndCheDoChamSoc.SetEvent(WE_CHANGE, _OnCheDoChamSocChangeFnc);
	//m_wndCheDoChamSoc.SetEvent(WE_SETFOCUS, _OnCheDoChamSocSetfocusFnc);
	//m_wndCheDoChamSoc.SetEvent(WE_KILLFOCUS, _OnCheDoChamSocKillfocusFnc);
	m_wndCheDoChamSoc.SetEvent(WE_CHECKVALUE, _OnCheDoChamSocCheckValueFnc);
	m_wndAddFee.SetEvent(WE_CLICK, _OnAddFeeSelectFnc);
	m_wndAddGeneric.SetEvent(WE_CLICK, _OnAddGenericSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndTab.SetEvent(WE_SELCHANGE, _OnTabSelectChangeFnc);
	CString szSQL;
	szSQL.Format(_T("Select ten_phacdo, so_ngay_dtri ") \
			_T("	from hms_phacdo where phacdo_id= %ld"), m_nPhacDoID);
	CRecord rs(&pMF->m_db);
	rs.ExecSQL(szSQL);
	CString tmpStr;
	rs.GetValue(_T("ten_phacdo"),tmpStr);
	m_wndPhacDoLabel.SetWindowText(tmpStr);
	
	SetMode(VM_NONE);
	OnListLoadData();
	

}
void CHMSPhacDoLineSettingDlg::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndSearch.GetDlgCtrlID(), m_szSearch);
	DDX_Text(pDX, m_wndNgayPhacDo.GetDlgCtrlID(), m_nNgayPhacDo);
	DDX_Text(pDX, m_wndNote.GetDlgCtrlID(), m_szNote);
	DDX_Text(pDX, m_wndHuongXuTri.GetDlgCtrlID(), m_szHuongXuTri);
	DDX_TextEx(pDX, m_wndCheDoAn.GetDlgCtrlID(), m_szCheDoAnKey);
	DDX_Text(pDX, m_wndCheDoChamSoc.GetDlgCtrlID(), m_szCheDoChamSoc);

}
void CHMSPhacDoLineSettingDlg::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Search")] =  m_szSearch;
	m_jData[_T("NgayPhacDo")] =  m_nNgayPhacDo;
	m_jData[_T("Note")] =  m_szNote;
	m_jData[_T("HuongXuTri")] =  m_szHuongXuTri;
	m_jData[_T("CheDoAn")] =  m_szCheDoAnKey;
	m_jData[_T("CheDoChamSoc")] =  m_szCheDoChamSoc;
	}
	else
	{
			
	m_jData[_T("Search")].GetValue(m_szSearch);
	m_jData[_T("NgayPhacDo")].GetValue(m_nNgayPhacDo);
	m_jData[_T("Note")].GetValue(m_szNote);
	m_jData[_T("HuongXuTri")].GetValue(m_szHuongXuTri);
	m_jData[_T("CheDoAn")].GetValue(m_szCheDoAnKey);
	m_jData[_T("CheDoChamSoc")].GetValue(m_szCheDoChamSoc);
	}

}
void CHMSPhacDoLineSettingDlg::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM hms_phacdo_treatment_day where treatment_day_id=%ld and phacdo_id =%ld "), m_nPhacDoLineID, m_nPhacDoID);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("number_day"), m_nNgayPhacDo);
		rs.GetValue(_T("note"), m_szNote);
		rs.GetValue(_T("huong_xu_tri"), m_szHuongXuTri);
		rs.GetValue(_T("che_do_an"), m_szCheDoAnKey);
		rs.GetValue(_T("che_do_chamsoc"), m_szCheDoChamSoc);

		SetMode(VM_VIEW);
	}

}
void CHMSPhacDoLineSettingDlg::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szSQL;
	CRecord rs(&pMF->m_db);
	m_hms_phacdo_treatment_day.SetValue(_T("phacdo_id"),m_nPhacDoID);
	if(GetMode()== VM_ADD)
	{
		szSQL.Format(_T("select nextval('hms_phacdo_treatment_day_treatment_day_id_seq') as id "));
		rs.ExecSQL(szSQL);
		rs.GetValue(_T("id"),m_nPhacDoLineID);
		

	}

	m_hms_phacdo_treatment_day.SetValue(_T("treatment_day_id"),m_nPhacDoLineID);
	m_hms_phacdo_treatment_day.SetValue(_T("number_day"),m_nNgayPhacDo);
	m_hms_phacdo_treatment_day.SetValue(_T("note"),m_szNote);
	m_hms_phacdo_treatment_day.SetValue(_T("huong_xu_tri"),m_szHuongXuTri);
	m_hms_phacdo_treatment_day.SetValue(_T("che_do_an"),m_szCheDoAnKey);
	m_hms_phacdo_treatment_day.SetValue(_T("che_do_chamsoc"),m_szCheDoChamSoc);

}
void CHMSPhacDoLineSettingDlg::SetDefaultValues(){

	m_szSearch.Empty();
	m_nNgayPhacDo=0;
	m_szNote.Empty();
	m_szHuongXuTri.Empty();
	m_szCheDoAnKey.Empty();
	m_szCheDoChamSoc.Empty();

}
int CHMSPhacDoLineSettingDlg::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE,  4, -1);
 			SetDefaultValues();
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 4, 5,6, -1);
 			break;
 		case VM_VIEW: 
 			EnableControls(FALSE);
 			EnableButtons(FALSE, 4, -1);
			m_wndAddFee.EnableWindow(true);
			m_wndAddGeneric.EnableWindow(true);
 			break;
 		case VM_NONE: 
 			EnableControls(FALSE);
 			EnableButtons(TRUE, 0, 1,2,3, -1);
 			SetDefaultValues();
 			break;
 		};
 		UpdateData(FALSE);
 		return nOldMode;
}
void CHMSPhacDoLineSettingDlg::OnLoadSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPhacDoLineSettingDlg::OnAddSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnAddHMSPhacDoLineSettingDlg();
	
} 
void CHMSPhacDoLineSettingDlg::OnEditSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnEditHMSPhacDoLineSettingDlg();
	
} 
void CHMSPhacDoLineSettingDlg::OnDeleteSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnDeleteHMSPhacDoLineSettingDlg();
	
} 
void CHMSPhacDoLineSettingDlg::OnSaveSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnSaveHMSPhacDoLineSettingDlg();
	
} 
/*void CHMSPhacDoLineSettingDlg::OnSearchChange(){
	
} */
/*void CHMSPhacDoLineSettingDlg::OnSearchSetfocus(){
	
} */
/*void CHMSPhacDoLineSettingDlg::OnSearchKillfocus(){
	
} */
int CHMSPhacDoLineSettingDlg::OnSearchCheckValue(){
	return 0;
} 
/*void CHMSPhacDoLineSettingDlg::OnNgayPhacDoChange(){
	
} */
/*void CHMSPhacDoLineSettingDlg::OnNgayPhacDoSetfocus(){
	
} */
/*void CHMSPhacDoLineSettingDlg::OnNgayPhacDoKillfocus(){
	
} */
int CHMSPhacDoLineSettingDlg::OnNgayPhacDoCheckValue(){
	return 0;
} 
/*void CHMSPhacDoLineSettingDlg::OnNoteChange(){
	
} */
/*void CHMSPhacDoLineSettingDlg::OnNoteSetfocus(){
	
} */
/*void CHMSPhacDoLineSettingDlg::OnNoteKillfocus(){
	
} */
int CHMSPhacDoLineSettingDlg::OnNoteCheckValue(){
	return 0;
} 
/*void CHMSPhacDoLineSettingDlg::OnHuongXuTriChange(){
	
} */
/*void CHMSPhacDoLineSettingDlg::OnHuongXuTriSetfocus(){
	
} */
/*void CHMSPhacDoLineSettingDlg::OnHuongXuTriKillfocus(){
	
} */
int CHMSPhacDoLineSettingDlg::OnHuongXuTriCheckValue(){
	return 0;
} 
void CHMSPhacDoLineSettingDlg::OnCheDoAnSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPhacDoLineSettingDlg::OnCheDoAnSelendok(){
	 
}
/*void CHMSPhacDoLineSettingDlg::OnCheDoAnSetfocus(){
	
}*/
/*void CHMSPhacDoLineSettingDlg::OnCheDoAnKillfocus(){
	
}*/
long CHMSPhacDoLineSettingDlg::OnCheDoAnLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	return pMF->LoadSelectionList(&m_wndCheDoAn, _T("HMS_DIET_MODE"), m_szCheDoAnKey);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndCheDoAn.IsSearchKey() && !m_szCheDoAnKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szCheDoAnKey
};
	m_wndCheDoAn.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndCheDoAn.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSPhacDoLineSettingDlg::OnCheDoAnAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSPhacDoLineSettingDlg::OnCheDoChamSocChange(){
	
} */
/*void CHMSPhacDoLineSettingDlg::OnCheDoChamSocSetfocus(){
	
} */
/*void CHMSPhacDoLineSettingDlg::OnCheDoChamSocKillfocus(){
	
} */
int CHMSPhacDoLineSettingDlg::OnCheDoChamSocCheckValue(){
	return 0;
} 
#include "HMSParaclinicalDialog.h"
void CHMSPhacDoLineSettingDlg::OnAddFeeSelect(){
	
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	// them cLS nhu trong thiet lap nhom
	if(m_nPhacDoLineID <= 0)
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

		
			szSQL.Format(_T("hms_phacdo_addline(%ld,%ld,'%s','%s', %f, '%s','%s') "),
				m_nPhacDoID,m_nPhacDoLineID, _T("CLS"), item.szID, str2float(item.szQty), item.szNote, _T(""));
			pMF->ExecDML(szSQL);
		}
		m_wndTab.SetCurSel(1);
	}
	
} 

#include "HMSPhacDoDrugSettingDlg.h"
void CHMSPhacDoLineSettingDlg::OnAddGenericSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CHMSPhacDoDrugSettingDlg dlg(this);
	dlg.m_nPhacDoID= m_nPhacDoID;
	dlg.m_nPhacDoLineID= m_nPhacDoLineID;
	dlg.DoModal();
	
} 
void CHMSPhacDoLineSettingDlg::OnListDblClick(){
	
} 
void CHMSPhacDoLineSettingDlg::OnListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_nPhacDoLineID= str2long(m_wndList.GetItemText(nNewItem,0));
	GetDataToScreen();
	m_wndTab.SetCurSel(0);
	
} 
int CHMSPhacDoLineSettingDlg::OnListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSPhacDoLineSettingDlg::OnListLoadData(){

	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	szSQL.Format(_T(" select * from hms_phacdo_treatment_day where phacdo_id=%ld "), m_nPhacDoID);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("treatment_day_id")),
			rs.GetValue(_T("number_day")),
			NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;

}
void CHMSPhacDoLineSettingDlg::OnTabSelectChange(int nOld, int nNew){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

	if(nNew < 0)
		return;
	m_wndTab.SetCurSel(nNew);

	switch(nNew){
	case 0:
		//m_wndFeeView.OnInitializeComponents();
	//	m_wndManagerRecord.OnInitDialog();
		//m_wndFeeView.OnSetWindowEvents();
		m_wndFeeView.m_nType=1;
		m_wndFeeView.m_nPhacDoId= m_nPhacDoID;
		m_wndFeeView.m_nPhacDoLineID= m_nPhacDoLineID;
		m_wndFeeView.OnListLoadData();	
		break;
	case 1:
		//m_wndDrugView.OnInitializeComponents();
		//m_wndDrugView.OnSetWindowEvents();
		m_wndDrugView.m_nType=2;
		m_wndDrugView.m_nPhacDoId= m_nPhacDoID;
		m_wndDrugView.m_nPhacDoLineID= m_nPhacDoLineID;
		m_wndDrugView.OnListLoadData();	
		break;	
	}
	
} 
int CHMSPhacDoLineSettingDlg::OnAddHMSPhacDoLineSettingDlg(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSPhacDoLineSettingDlg::OnEditHMSPhacDoLineSettingDlg(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSPhacDoLineSettingDlg::OnDeleteHMSPhacDoLineSettingDlg(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
 	szSQL.Format(_T("DELETE FROM  WHERE  AND") );
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
 		SetMode(VM_NONE);
 		OnCancelHMSPhacDoLineSettingDlg();
 	}
	return 0;
}
int CHMSPhacDoLineSettingDlg::OnSaveHMSPhacDoLineSettingDlg(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
 		szSQL = m_hms_phacdo_treatment_day.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
		szWhere.Format(_T(" WHERE phacdo_id =%ld and treatment_day_id =%ld "), m_nPhacDoID, m_nPhacDoLineID);
 		szSQL = m_hms_phacdo_treatment_day.GetUpdateSQL(_T("phacdo_id,treatment_day_id"));
 		szSQL += szWhere;
 	}
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
 		//OnHMSPhacDoLineSettingDlgListLoadData();
		
 		SetMode(VM_VIEW);
		OnListLoadData();
		
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSPhacDoLineSettingDlg::OnCancelHMSPhacDoLineSettingDlg(){
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
int CHMSPhacDoLineSettingDlg::OnHMSPhacDoLineSettingDlgListLoadData(){
	return 0;
}
