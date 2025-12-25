#include "PMSysPurchaseToDuocQG.h"
#include "MainFrame_E10.h"
#include "HMSLienThongNhaThuoc.h"
/*static void _OnOrderIDChangeFnc(CWnd *pWnd){
	((CPMSysPurchaseToDuocQG *)pWnd)->OnOrderIDChange();
} */
/*static void _OnOrderIDSetfocusFnc(CWnd *pWnd){
	((CPMSysPurchaseToDuocQG *)pWnd)->OnOrderIDSetfocus();} */ 
/*static void _OnOrderIDKillfocusFnc(CWnd *pWnd){
	((CPMSysPurchaseToDuocQG *)pWnd)->OnOrderIDKillfocus();
} */
static int _OnOrderIDCheckValueFnc(CWnd *pWnd){
	return ((CPMSysPurchaseToDuocQG *)pWnd)->OnOrderIDCheckValue();
} 
/*static void _OnOrderNoChangeFnc(CWnd *pWnd){
	((CPMSysPurchaseToDuocQG *)pWnd)->OnOrderNoChange();
} */
/*static void _OnOrderNoSetfocusFnc(CWnd *pWnd){
	((CPMSysPurchaseToDuocQG *)pWnd)->OnOrderNoSetfocus();} */ 
/*static void _OnOrderNoKillfocusFnc(CWnd *pWnd){
	((CPMSysPurchaseToDuocQG *)pWnd)->OnOrderNoKillfocus();
} */
static int _OnOrderNoCheckValueFnc(CWnd *pWnd){
	return ((CPMSysPurchaseToDuocQG *)pWnd)->OnOrderNoCheckValue();
} 
/*static void _OnDateChangeFnc(CWnd *pWnd){
	((CPMSysPurchaseToDuocQG *)pWnd)->OnDateChange();
} */
/*static void _OnDateSetfocusFnc(CWnd *pWnd){
	((CPMSysPurchaseToDuocQG *)pWnd)->OnDateSetfocus();} */ 
/*static void _OnDateKillfocusFnc(CWnd *pWnd){
	((CPMSysPurchaseToDuocQG *)pWnd)->OnDateKillfocus();
} */
static int _OnDateCheckValueFnc(CWnd *pWnd){
	return ((CPMSysPurchaseToDuocQG *)pWnd)->OnDateCheckValue();
} 
/*static void _OnNoteChangeFnc(CWnd *pWnd){
	((CPMSysPurchaseToDuocQG *)pWnd)->OnNoteChange();
} */
/*static void _OnNoteSetfocusFnc(CWnd *pWnd){
	((CPMSysPurchaseToDuocQG *)pWnd)->OnNoteSetfocus();} */ 
/*static void _OnNoteKillfocusFnc(CWnd *pWnd){
	((CPMSysPurchaseToDuocQG *)pWnd)->OnNoteKillfocus();
} */
static int _OnNoteCheckValueFnc(CWnd *pWnd){
	return ((CPMSysPurchaseToDuocQG *)pWnd)->OnNoteCheckValue();
} 
/*static void _OnPartnerChangeFnc(CWnd *pWnd){
	((CPMSysPurchaseToDuocQG *)pWnd)->OnPartnerChange();
} */
/*static void _OnPartnerSetfocusFnc(CWnd *pWnd){
	((CPMSysPurchaseToDuocQG *)pWnd)->OnPartnerSetfocus();} */ 
/*static void _OnPartnerKillfocusFnc(CWnd *pWnd){
	((CPMSysPurchaseToDuocQG *)pWnd)->OnPartnerKillfocus();
} */
static int _OnPartnerCheckValueFnc(CWnd *pWnd){
	return ((CPMSysPurchaseToDuocQG *)pWnd)->OnPartnerCheckValue();
} 
/*static void _OnmaQGChangeFnc(CWnd *pWnd){
	((CPMSysPurchaseToDuocQG *)pWnd)->OnmaQGChange();
} */
/*static void _OnmaQGSetfocusFnc(CWnd *pWnd){
	((CPMSysPurchaseToDuocQG *)pWnd)->OnmaQGSetfocus();} */ 
/*static void _OnmaQGKillfocusFnc(CWnd *pWnd){
	((CPMSysPurchaseToDuocQG *)pWnd)->OnmaQGKillfocus();
} */
static int _OnmaQGCheckValueFnc(CWnd *pWnd){
	return ((CPMSysPurchaseToDuocQG *)pWnd)->OnmaQGCheckValue();
} 
/*static void _OnStatusChangeFnc(CWnd *pWnd){
	((CPMSysPurchaseToDuocQG *)pWnd)->OnStatusChange();
} */
/*static void _OnStatusSetfocusFnc(CWnd *pWnd){
	((CPMSysPurchaseToDuocQG *)pWnd)->OnStatusSetfocus();} */ 
/*static void _OnStatusKillfocusFnc(CWnd *pWnd){
	((CPMSysPurchaseToDuocQG *)pWnd)->OnStatusKillfocus();
} */
static int _OnStatusCheckValueFnc(CWnd *pWnd){
	return ((CPMSysPurchaseToDuocQG *)pWnd)->OnStatusCheckValue();
} 
static void _OnUpdateSelectFnc(CWnd *pWnd){
	CPMSysPurchaseToDuocQG *pVw = (CPMSysPurchaseToDuocQG *)pWnd;
	pVw->OnUpdateSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CPMSysPurchaseToDuocQG *pVw = (CPMSysPurchaseToDuocQG *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CPMSysPurchaseToDuocQG *pVw = (CPMSysPurchaseToDuocQG *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnPostToAPISelectFnc(CWnd *pWnd){
	CPMSysPurchaseToDuocQG *pVw = (CPMSysPurchaseToDuocQG *)pWnd;
	pVw->OnPostToAPISelect();
} 
static void _OnUnPostSelectFnc(CWnd *pWnd){
	CPMSysPurchaseToDuocQG *pVw = (CPMSysPurchaseToDuocQG *)pWnd;
	pVw->OnUnPostSelect();
} 
static long _OnListPostLoadDataFnc(CWnd *pWnd){
	return ((CPMSysPurchaseToDuocQG*)pWnd)->OnListPostLoadData();
} 
static void _OnListPostDblClickFnc(CWnd *pWnd){
	((CPMSysPurchaseToDuocQG*)pWnd)->OnListPostDblClick();
} 
static void _OnListPostSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CPMSysPurchaseToDuocQG*)pWnd)->OnListPostSelectChange(nOldItem, nNewItem);
} 
static int _OnListPostDeleteItemFnc(CWnd *pWnd){
	 return ((CPMSysPurchaseToDuocQG*)pWnd)->OnListPostDeleteItem();
} 
static long _OnDrugListLoadDataFnc(CWnd *pWnd){
	return ((CPMSysPurchaseToDuocQG*)pWnd)->OnDrugListLoadData();
} 
static void _OnDrugListDblClickFnc(CWnd *pWnd){
	((CPMSysPurchaseToDuocQG*)pWnd)->OnDrugListDblClick();
} 
static void _OnDrugListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CPMSysPurchaseToDuocQG*)pWnd)->OnDrugListSelectChange(nOldItem, nNewItem);
} 
static int _OnDrugListDeleteItemFnc(CWnd *pWnd){
	 return ((CPMSysPurchaseToDuocQG*)pWnd)->OnDrugListDeleteItem();
} 
static int _OnAddPMSysPurchaseToDuocQGFnc(CWnd *pWnd){
	 return ((CPMSysPurchaseToDuocQG*)pWnd)->OnAddPMSysPurchaseToDuocQG();
} 
static int _OnEditPMSysPurchaseToDuocQGFnc(CWnd *pWnd){
	 return ((CPMSysPurchaseToDuocQG*)pWnd)->OnEditPMSysPurchaseToDuocQG();
} 
static int _OnDeletePMSysPurchaseToDuocQGFnc(CWnd *pWnd){
	 return ((CPMSysPurchaseToDuocQG*)pWnd)->OnDeletePMSysPurchaseToDuocQG();
} 
static int _OnSavePMSysPurchaseToDuocQGFnc(CWnd *pWnd){
	 return ((CPMSysPurchaseToDuocQG*)pWnd)->OnSavePMSysPurchaseToDuocQG();
} 
static int _OnCancelPMSysPurchaseToDuocQGFnc(CWnd *pWnd){
	 return ((CPMSysPurchaseToDuocQG*)pWnd)->OnCancelPMSysPurchaseToDuocQG();
} 
static int _OnCreateDataFnc(CWnd *pWnd){
	 return ((CPMSysPurchaseToDuocQG*)pWnd)->OnCreateData();
} 

CPMSysPurchaseToDuocQG::CPMSysPurchaseToDuocQG(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 890;
	m_nDlgHeight = 515;
	SetDefaultValues();
	m_nID=0;
}
CPMSysPurchaseToDuocQG::~CPMSysPurchaseToDuocQG(){
}
void CPMSysPurchaseToDuocQG::OnCreateComponents(){
	m_wndOrderIDLabel.Create(this, _T("OrderID"), 10, 30, 90, 55);
	m_wndOrderID.Create(this,95, 30, 175, 55); 
	m_wndOrderNoLabel.Create(this, _T("OrderNo"), 180, 30, 260, 55);
	m_wndOrderNo.Create(this,265, 30, 410, 55); 
	m_wndDateLabel.Create(this, _T("Date"), 415, 30, 475, 55);
	m_wndOrderInformation.Create(this, _T("Order Information"), 5, 5, 575, 150);
	m_wndDate.Create(this,480, 30, 570, 55); 
	m_wndNoteLabel.Create(this, _T("Note"), 10, 60, 90, 85);
	m_wndNote.Create(this,95, 60, 570, 85); 
	m_wndPartnerLabel.Create(this, _T("Partner"), 10, 90, 90, 115);
	m_wndPartner.Create(this,95, 90, 570, 115); 
	m_wndMaQGLabel.Create(this, _T("MaQG"), 10, 120, 90, 145);
	m_wndmaQG.Create(this,95, 120, 290, 145); 
	m_wndStatusLabel.Create(this, _T("Status"), 295, 120, 360, 145);
	m_wndStatus.Create(this,365, 120, 570, 145); 
	m_wndUpdate.Create(this, _T("&Update"), 15, 155, 95, 180);
	m_wndSave.Create(this, _T("&Save"), 100, 155, 180, 180);
	m_wndCancel.Create(this, _T("&Cancel"), 185, 155, 265, 180);
	m_wndPostToAPI.Create(this, _T("Post To API"), 270, 155, 370, 180);
	m_wndUnPost.Create(this, _T("Un Post"), 375, 155, 455, 180);
	m_wndListPost.Create(this,5, 185, 575, 505); 
	m_wndDrugList.Create(this,580, 5, 880, 505); 

}
void CPMSysPurchaseToDuocQG::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndOrderID.SetLimitText(16);
	m_wndOrderID.SetCheckValue(true);
	m_wndOrderNo.SetLimitText(35);
	m_wndOrderNo.SetCheckValue(true);
	m_wndDate.SetLimitText(35);
	m_wndDate.SetCheckValue(true);
	m_wndNote.SetLimitText(35);
	m_wndNote.SetCheckValue(true);
	m_wndPartner.SetLimitText(35);
	m_wndPartner.SetCheckValue(true);
	m_wndmaQG.SetLimitText(35);
	m_wndmaQG.SetCheckValue(true);
	m_wndStatus.SetLimitText(35);
	m_wndStatus.SetCheckValue(true);


	m_wndListPost.InsertColumn(0, _T("Check"), CFMT_TEXT, 40);
	m_wndListPost.InsertColumn(1, _T("STT"), CFMT_TEXT, 30);
	m_wndListPost.InsertColumn(2, _T("Ten_thuoc"), CFMT_TEXT, 150);
	m_wndListPost.InsertColumn(3, _T("So_luong"), CFMT_NUMBER, 40);
	m_wndListPost.InsertColumn(4, _T("don_vi"), CFMT_TEXT, 50);

	m_wndListPost.InsertColumn(5, _T("So_dang_ky"), CFMT_TEXT, 50);
	m_wndListPost.InsertColumn(6, _T("lotno"), CFMT_TEXT, 50);
	m_wndListPost.InsertColumn(7, _T("mfgdate"), CFMT_DATE, 50);
	m_wndListPost.InsertColumn(8, _T("expdate"), CFMT_DATE, 50);
	m_wndListPost.InsertColumn(9, _T("Price"), CFMT_MONEY, 50);

	m_wndDrugList.InsertColumn(0, _T("ProductID"), CFMT_TEXT, 0);
	m_wndDrugList.InsertColumn(1, _T("DrugName"), CFMT_TEXT, 100);
	m_wndDrugList.InsertColumn(2, _T("RegCode"), CFMT_TEXT, 80);
	m_wndDrugList.InsertColumn(3, _T("Ma Thuoc QG"), CFMT_TEXT, 80);
	m_hms_lienthong_orderTbl.SetTableName(_T("hms_lienthong_purchase_order"));
	m_hms_lienthong_orderTbl.AddField(_T("hlp_idx"), dfLong); 
	m_hms_lienthong_orderTbl.AddField(_T("hlp_orderid"), dfLong); 
	m_hms_lienthong_orderTbl.AddField(_T("hlp_orderno"), dfText, 128); 
	m_hms_lienthong_orderTbl.AddField(_T("hlp_note"), dfText, 254); 
	m_hms_lienthong_orderTbl.AddField(_T("hlp_nha_cungcap"), dfText, 254); 

}
void CPMSysPurchaseToDuocQG::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//m_wndOrderID.SetEvent(WE_CHANGE, _OnOrderIDChangeFnc);
	//m_wndOrderID.SetEvent(WE_SETFOCUS, _OnOrderIDSetfocusFnc);
	//m_wndOrderID.SetEvent(WE_KILLFOCUS, _OnOrderIDKillfocusFnc);
	m_wndOrderID.SetEvent(WE_CHECKVALUE, _OnOrderIDCheckValueFnc);
	//m_wndOrderNo.SetEvent(WE_CHANGE, _OnOrderNoChangeFnc);
	//m_wndOrderNo.SetEvent(WE_SETFOCUS, _OnOrderNoSetfocusFnc);
	//m_wndOrderNo.SetEvent(WE_KILLFOCUS, _OnOrderNoKillfocusFnc);
	m_wndOrderNo.SetEvent(WE_CHECKVALUE, _OnOrderNoCheckValueFnc);
	//m_wndDate.SetEvent(WE_CHANGE, _OnDateChangeFnc);
	//m_wndDate.SetEvent(WE_SETFOCUS, _OnDateSetfocusFnc);
	//m_wndDate.SetEvent(WE_KILLFOCUS, _OnDateKillfocusFnc);
	m_wndDate.SetEvent(WE_CHECKVALUE, _OnDateCheckValueFnc);
	//m_wndNote.SetEvent(WE_CHANGE, _OnNoteChangeFnc);
	//m_wndNote.SetEvent(WE_SETFOCUS, _OnNoteSetfocusFnc);
	//m_wndNote.SetEvent(WE_KILLFOCUS, _OnNoteKillfocusFnc);
	m_wndNote.SetEvent(WE_CHECKVALUE, _OnNoteCheckValueFnc);
	//m_wndPartner.SetEvent(WE_CHANGE, _OnPartnerChangeFnc);
	//m_wndPartner.SetEvent(WE_SETFOCUS, _OnPartnerSetfocusFnc);
	//m_wndPartner.SetEvent(WE_KILLFOCUS, _OnPartnerKillfocusFnc);
	m_wndPartner.SetEvent(WE_CHECKVALUE, _OnPartnerCheckValueFnc);
	//m_wndmaQG.SetEvent(WE_CHANGE, _OnmaQGChangeFnc);
	//m_wndmaQG.SetEvent(WE_SETFOCUS, _OnmaQGSetfocusFnc);
	//m_wndmaQG.SetEvent(WE_KILLFOCUS, _OnmaQGKillfocusFnc);
	m_wndmaQG.SetEvent(WE_CHECKVALUE, _OnmaQGCheckValueFnc);
	//m_wndStatus.SetEvent(WE_CHANGE, _OnStatusChangeFnc);
	//m_wndStatus.SetEvent(WE_SETFOCUS, _OnStatusSetfocusFnc);
	//m_wndStatus.SetEvent(WE_KILLFOCUS, _OnStatusKillfocusFnc);
	m_wndStatus.SetEvent(WE_CHECKVALUE, _OnStatusCheckValueFnc);
	m_wndUpdate.SetEvent(WE_CLICK, _OnUpdateSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndPostToAPI.SetEvent(WE_CLICK, _OnPostToAPISelectFnc);
	m_wndUnPost.SetEvent(WE_CLICK, _OnUnPostSelectFnc);
	m_wndListPost.SetEvent(WE_SELCHANGE, _OnListPostSelectChangeFnc);
	m_wndListPost.SetEvent(WE_LOADDATA, _OnListPostLoadDataFnc);
	m_wndListPost.SetEvent(WE_DBLCLICK, _OnListPostDblClickFnc);
	m_wndListPost.AddEvent(1, _T("Create Data"), _OnCreateDataFnc);
	m_wndDrugList.SetEvent(WE_SELCHANGE, _OnDrugListSelectChangeFnc);
	m_wndDrugList.SetEvent(WE_LOADDATA, _OnDrugListLoadDataFnc);
	m_wndDrugList.SetEvent(WE_DBLCLICK, _OnDrugListDblClickFnc);
	//m_wndDrugList.AddEvent(1, _T("Delete"), _OnDrugListDeleteItemFnc, 0, VK_DELETE, 0);
	SetMode(VM_VIEW);
	GetDataToScreen();


}
void CPMSysPurchaseToDuocQG::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndOrderID.GetDlgCtrlID(), m_nOrderID);
	DDX_Text(pDX, m_wndOrderNo.GetDlgCtrlID(), m_szOrderNo);
	DDX_Text(pDX, m_wndDate.GetDlgCtrlID(), m_szDate);
	DDX_Text(pDX, m_wndNote.GetDlgCtrlID(), m_szNote);
	DDX_Text(pDX, m_wndPartner.GetDlgCtrlID(), m_szPartner);
	DDX_Text(pDX, m_wndmaQG.GetDlgCtrlID(), m_szmaQG);
	DDX_Text(pDX, m_wndStatus.GetDlgCtrlID(), m_szStatus);

}
void CPMSysPurchaseToDuocQG::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("OrderID")] =  m_nOrderID;
	m_jData[_T("OrderNo")] =  m_szOrderNo;
	m_jData[_T("Date")] =  m_szDate;
	m_jData[_T("Note")] =  m_szNote;
	m_jData[_T("Partner")] =  m_szPartner;
	m_jData[_T("maQG")] =  m_szmaQG;
	m_jData[_T("Status")] =  m_szStatus;
	}
	else
	{
			
	m_jData[_T("OrderID")].GetValue(m_nOrderID);
	m_jData[_T("OrderNo")].GetValue(m_szOrderNo);
	m_jData[_T("Date")].GetValue(m_szDate);
	m_jData[_T("Note")].GetValue(m_szNote);
	m_jData[_T("Partner")].GetValue(m_szPartner);
	m_jData[_T("maQG")].GetValue(m_szmaQG);
	m_jData[_T("Status")].GetValue(m_szStatus);
	}

}
void CPMSysPurchaseToDuocQG::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL,tmpStr,szWhere;
	if(m_nType==3)
		szWhere.Format(_T(" and hlp_type=%d "),m_nType);
	else
		szWhere.Format(_T(" and hlp_orderid= %ld and hlp_type=%d "), m_nOrderID,m_nType);
	szSQL.Format(_T("SELECT * FROM hms_lienthong_purchase_order where 1=1 %s "), szWhere);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		
		rs.GetValue(_T("hlp_orderno"), m_szOrderNo);
		rs.GetValue(_T("hlp_status"), tmpStr);
		if(tmpStr == _T("P"))
			m_szStatus= _T("Đã gửi lên cổng");
		else 
			m_szStatus= _T("Chưa gửi cổng");
		rs.GetValue(_T("hlp_note"), m_szNote);
		rs.GetValue(_T("hlp_nha_cungcap"), m_szPartner);
		rs.GetValue(_T("hlp_ma_don_qg"), m_szmaQG);
		rs.GetValue(_T("hlp_ngaynhap"), m_szDate);
		rs.GetValue(_T("hlp_idx"), m_nID);
		rs.GetValue(_T("hlp_stockid"), m_nStockID);

		OnListPostLoadData();
		OnDrugListLoadData();
		UpdateData(false);
		SetMode(VM_VIEW);
	}
	

}
void CPMSysPurchaseToDuocQG::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_hms_lienthong_orderTbl.SetValue(_T("hlp_idx"), m_nID); 
	m_hms_lienthong_orderTbl.SetValue(_T("hlp_orderid"), m_nOrderID); 
	m_hms_lienthong_orderTbl.SetValue(_T("hlp_orderno"), m_szOrderNo); 
	m_hms_lienthong_orderTbl.SetValue(_T("hlp_note"), m_szNote); 
	m_hms_lienthong_orderTbl.SetValue(_T("hlp_nha_cungcap"), m_szPartner); 

}
void CPMSysPurchaseToDuocQG::SetDefaultValues(){

	m_nOrderID=0;
	m_szOrderNo.Empty();
	m_szDate.Empty();
	m_szNote.Empty();
	m_szPartner.Empty();
	m_szmaQG.Empty();
	m_szStatus.Empty();

}
int CPMSysPurchaseToDuocQG::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 3, 4, -1);
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
		m_wndPostToAPI.EnableWindow(true);
		m_wndUnPost.EnableWindow(true);
 		UpdateData(FALSE);
 		return nOldMode;
}
/*void CPMSysPurchaseToDuocQG::OnOrderIDChange(){
	
} */
/*void CPMSysPurchaseToDuocQG::OnOrderIDSetfocus(){
	
} */
/*void CPMSysPurchaseToDuocQG::OnOrderIDKillfocus(){
	
} */
int CPMSysPurchaseToDuocQG::OnOrderIDCheckValue(){
	return 0;
} 
/*void CPMSysPurchaseToDuocQG::OnOrderNoChange(){
	
} */
/*void CPMSysPurchaseToDuocQG::OnOrderNoSetfocus(){
	
} */
/*void CPMSysPurchaseToDuocQG::OnOrderNoKillfocus(){
	
} */
int CPMSysPurchaseToDuocQG::OnOrderNoCheckValue(){
	return 0;
} 
/*void CPMSysPurchaseToDuocQG::OnDateChange(){
	
} */
/*void CPMSysPurchaseToDuocQG::OnDateSetfocus(){
	
} */
/*void CPMSysPurchaseToDuocQG::OnDateKillfocus(){
	
} */
int CPMSysPurchaseToDuocQG::OnDateCheckValue(){
	return 0;
} 
/*void CPMSysPurchaseToDuocQG::OnNoteChange(){
	
} */
/*void CPMSysPurchaseToDuocQG::OnNoteSetfocus(){
	
} */
/*void CPMSysPurchaseToDuocQG::OnNoteKillfocus(){
	
} */
int CPMSysPurchaseToDuocQG::OnNoteCheckValue(){
	return 0;
} 
/*void CPMSysPurchaseToDuocQG::OnPartnerChange(){
	
} */
/*void CPMSysPurchaseToDuocQG::OnPartnerSetfocus(){
	
} */
/*void CPMSysPurchaseToDuocQG::OnPartnerKillfocus(){
	
} */
int CPMSysPurchaseToDuocQG::OnPartnerCheckValue(){
	return 0;
} 
/*void CPMSysPurchaseToDuocQG::OnmaQGChange(){
	
} */
/*void CPMSysPurchaseToDuocQG::OnmaQGSetfocus(){
	
} */
/*void CPMSysPurchaseToDuocQG::OnmaQGKillfocus(){
	
} */
int CPMSysPurchaseToDuocQG::OnmaQGCheckValue(){
	return 0;
} 
/*void CPMSysPurchaseToDuocQG::OnStatusChange(){
	
} */
/*void CPMSysPurchaseToDuocQG::OnStatusSetfocus(){
	
} */
/*void CPMSysPurchaseToDuocQG::OnStatusKillfocus(){
	
} */
int CPMSysPurchaseToDuocQG::OnStatusCheckValue(){
	return 0;
} 
void CPMSysPurchaseToDuocQG::OnUpdateSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CPMSysPurchaseToDuocQG::OnSaveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CPMSysPurchaseToDuocQG::OnCancelSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
} 
void CPMSysPurchaseToDuocQG::OnPostToAPISelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CHMSLienThongNhaThuoc lt;
	if(lt.OnPostPhieuNhapKhoWithKey(m_nID))
		GetDataToScreen();
	
} 
void CPMSysPurchaseToDuocQG::OnUnPostSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CHMSLienThongNhaThuoc lt;
	if(lt.OnDeletePhieuNhapKho(m_nID))
		GetDataToScreen();
} 
void CPMSysPurchaseToDuocQG::OnListPostDblClick(){
	
} 
void CPMSysPurchaseToDuocQG::OnListPostSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
int CPMSysPurchaseToDuocQG::OnListPostDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	 return 0;
} 
long CPMSysPurchaseToDuocQG::OnListPostLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL,tmpStr;
	m_wndListPost.BeginLoad(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT * from hms_lienthong_purchase_line where hlpl_idx = %ld "), m_nID);
	nCount = rs.ExecSQL(szSQL);
	int nIndex=1;
	while(!rs.IsEOF()){ 
		tmpStr.Format(_T("%d"), nIndex++);
		m_wndListPost.AddItems(
			rs.GetValue(_T("hlpl_isok")), 
			tmpStr, 
			rs.GetValue(_T("hlpl_ten_thuoc")), 
			rs.GetValue(_T("hlpl_so_luong")), 
			rs.GetValue(_T("hlpl_don_vi")),
			rs.GetValue(_T("hlpl_so_dang_ky")), 
			rs.GetValue(_T("hlpl_lotno")),
			rs.GetValue(_T("hlpl_mfgdate")),
			rs.GetValue(_T("hlpl_expdate")), 
			rs.GetValue(_T("hlpl_price")),
			NULL);
		rs.MoveNext();
	}
	m_wndListPost.EndLoad(); 
	return nCount;
}
#include "PMEditDrugDuocQG.h"
void CPMSysPurchaseToDuocQG::OnDrugListDblClick(){
	int nCel= m_wndDrugList.GetCurSel();
	if (nCel <0 )
		return ;
	long nProduct_item_id = str2long(m_wndDrugList.GetItemText(nCel,0));
	CPMEditDrugDuocQG dlg(this,_T("PUR"));
	dlg.m_nOrderID = m_nOrderID;
	dlg.m_nProduct_Item_id = nProduct_item_id;
	dlg.m_nStockId = m_nStockID;
	if(dlg.DoModal()== IDOK)
	{
		GetDataToScreen();
	}
} 
void CPMSysPurchaseToDuocQG::OnDrugListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
int CPMSysPurchaseToDuocQG::OnDrugListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	 return 0;
} 
long CPMSysPurchaseToDuocQG::OnDrugListLoadData(){
CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL,szTable,szJoin;
	m_wndDrugList.BeginLoad(); 
	int nCount = 0;
	if(m_nType==3)
	{
			szSQL.Format(_T("SELECT ") \
				_T(" product_item_id, ") \
				_T(" product_name, ") \
				_T(" product_ma_cuc_duoc, ") \
				_T(" product_regcode ") \
				_T(" FROM ") \
				_T(" hms_lienthong_purchase_line ") \
				_T(" LEFT JOIN m_productitem_view ON (product_item_id = hlpl_product_item_id) ") \
				_T(" where hlpl_idx = %ld order by product_regcode,product_name "), m_nID);
	}
	else
	{
		szSQL.Format(_T("SELECT ") \
				_T(" product_item_id, ") \
				_T(" product_name, ") \
				_T(" product_ma_cuc_duoc, ") \
				_T(" product_regcode ") \
				_T(" FROM ") \
				_T("  purchase_orderline ") \
				_T(" LEFT JOIN m_productitem_view ON (product_item_id = pol_product_item_id) ") \
				_T(" where pol_purchase_order_id = %ld order by product_regcode,product_name  "), m_nOrderID);
	}
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDrugList.AddItems(
			rs.GetValue(_T("product_item_id")), 
			rs.GetValue(_T("product_name")), 
			rs.GetValue(_T("product_regcode")), 
			rs.GetValue(_T("product_ma_cuc_duoc")), NULL);
		rs.MoveNext();
	}
	m_wndDrugList.EndLoad(); 
	return nCount;
}
int CPMSysPurchaseToDuocQG::OnAddPMSysPurchaseToDuocQG(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CPMSysPurchaseToDuocQG::OnEditPMSysPurchaseToDuocQG(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CPMSysPurchaseToDuocQG::OnDeletePMSysPurchaseToDuocQG(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	CString szSQL;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
 	szSQL.Format(_T("DELETE FROM  WHERE  AND") );
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
 		SetMode(VM_NONE);
 		OnCancelPMSysPurchaseToDuocQG();
 	}
	return 0;
}
int CPMSysPurchaseToDuocQG::OnSavePMSysPurchaseToDuocQG(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
 		//szSQL = m_hms_lienthong_orderTbl.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
 		szWhere.Format(_T(" WHERE"));
 		//szSQL = m_hms_lienthong_orderTbl.GetUpdateSQL(_T("createdby,createddate"));
 		szSQL += szWhere;
 	}
 _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
 		//OnPMSysPurchaseToDuocQGListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CPMSysPurchaseToDuocQG::OnCancelPMSysPurchaseToDuocQG(){
 	if(GetMode() == VM_EDIT)
 	{
 		SetMode(VM_VIEW);
 	} 
 	else 
 	{
 		SetMode(VM_NONE);
 	} 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	return 0;
} 
int CPMSysPurchaseToDuocQG::OnPMSysPurchaseToDuocQGListLoadData(){
	return 0;
}
int CPMSysPurchaseToDuocQG::OnCreateData()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
 	CString szSQL;
	if(m_nType==1)
	{
		szSQL.Format(_T("hms_lienthong_create_purchase(%ld, '%s', 1) "), m_nOrderID, pMF->GetCurrentUser());
		int ret = str2int(pMF->ExecDML(szSQL));
		if(ret >0) 
		{
			GetDataToScreen();
			_msg(_T(" tao du lieu thanh cong"));
		}
		return ret;
	}
	return 0;
}