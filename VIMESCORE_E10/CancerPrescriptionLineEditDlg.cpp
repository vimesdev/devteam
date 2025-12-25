#include "CancerPrescriptionLineEditDlg.h"
#include "MainFrame_E10.h"
/*static void _OnProductChangeFnc(CWnd *pWnd){
	((CCancerPrescriptionLineEditDlg *)pWnd)->OnProductChange();
} */
/*static void _OnProductSetfocusFnc(CWnd *pWnd){
	((CCancerPrescriptionLineEditDlg *)pWnd)->OnProductSetfocus();} */ 
/*static void _OnProductKillfocusFnc(CWnd *pWnd){
	((CCancerPrescriptionLineEditDlg *)pWnd)->OnProductKillfocus();
} */
static int _OnProductCheckValueFnc(CWnd *pWnd){
	return ((CCancerPrescriptionLineEditDlg *)pWnd)->OnProductCheckValue();
} 
/*static void _OnUomChangeFnc(CWnd *pWnd){
	((CCancerPrescriptionLineEditDlg *)pWnd)->OnUomChange();
} */
/*static void _OnUomSetfocusFnc(CWnd *pWnd){
	((CCancerPrescriptionLineEditDlg *)pWnd)->OnUomSetfocus();} */ 
/*static void _OnUomKillfocusFnc(CWnd *pWnd){
	((CCancerPrescriptionLineEditDlg *)pWnd)->OnUomKillfocus();
} */
static int _OnUomCheckValueFnc(CWnd *pWnd){
	return ((CCancerPrescriptionLineEditDlg *)pWnd)->OnUomCheckValue();
} 
/*static void _OnManufactureChangeFnc(CWnd *pWnd){
	((CCancerPrescriptionLineEditDlg *)pWnd)->OnManufactureChange();
} */
/*static void _OnManufactureSetfocusFnc(CWnd *pWnd){
	((CCancerPrescriptionLineEditDlg *)pWnd)->OnManufactureSetfocus();} */ 
/*static void _OnManufactureKillfocusFnc(CWnd *pWnd){
	((CCancerPrescriptionLineEditDlg *)pWnd)->OnManufactureKillfocus();
} */
static int _OnManufactureCheckValueFnc(CWnd *pWnd){
	return ((CCancerPrescriptionLineEditDlg *)pWnd)->OnManufactureCheckValue();
} 
/*static void _OnLotNoChangeFnc(CWnd *pWnd){
	((CCancerPrescriptionLineEditDlg *)pWnd)->OnLotNoChange();
} */
/*static void _OnLotNoSetfocusFnc(CWnd *pWnd){
	((CCancerPrescriptionLineEditDlg *)pWnd)->OnLotNoSetfocus();} */ 
/*static void _OnLotNoKillfocusFnc(CWnd *pWnd){
	((CCancerPrescriptionLineEditDlg *)pWnd)->OnLotNoKillfocus();
} */
static int _OnLotNoCheckValueFnc(CWnd *pWnd){
	return ((CCancerPrescriptionLineEditDlg *)pWnd)->OnLotNoCheckValue();
} 
/*static void _OnExprDateChangeFnc(CWnd *pWnd){
	((CCancerPrescriptionLineEditDlg *)pWnd)->OnExprDateChange();
} */
/*static void _OnExprDateSetfocusFnc(CWnd *pWnd){
	((CCancerPrescriptionLineEditDlg *)pWnd)->OnExprDateSetfocus();} */ 
/*static void _OnExprDateKillfocusFnc(CWnd *pWnd){
	((CCancerPrescriptionLineEditDlg *)pWnd)->OnExprDateKillfocus();
} */
static int _OnExprDateCheckValueFnc(CWnd *pWnd){
	return ((CCancerPrescriptionLineEditDlg *)pWnd)->OnExprDateCheckValue();
} 
/*static void _OnLieuDungTTChangeFnc(CWnd *pWnd){
	((CCancerPrescriptionLineEditDlg *)pWnd)->OnLieuDungTTChange();
} */
/*static void _OnLieuDungTTSetfocusFnc(CWnd *pWnd){
	((CCancerPrescriptionLineEditDlg *)pWnd)->OnLieuDungTTSetfocus();} */ 
/*static void _OnLieuDungTTKillfocusFnc(CWnd *pWnd){
	((CCancerPrescriptionLineEditDlg *)pWnd)->OnLieuDungTTKillfocus();
} */
static int _OnLieuDungTTCheckValueFnc(CWnd *pWnd){
	return ((CCancerPrescriptionLineEditDlg *)pWnd)->OnLieuDungTTCheckValue();
} 
/*static void _OnUnitPriceChangeFnc(CWnd *pWnd){
	((CCancerPrescriptionLineEditDlg *)pWnd)->OnUnitPriceChange();
} */
/*static void _OnUnitPriceSetfocusFnc(CWnd *pWnd){
	((CCancerPrescriptionLineEditDlg *)pWnd)->OnUnitPriceSetfocus();} */ 
/*static void _OnUnitPriceKillfocusFnc(CWnd *pWnd){
	((CCancerPrescriptionLineEditDlg *)pWnd)->OnUnitPriceKillfocus();
} */
static int _OnUnitPriceCheckValueFnc(CWnd *pWnd){
	return ((CCancerPrescriptionLineEditDlg *)pWnd)->OnUnitPriceCheckValue();
} 
/*static void _OnLieuDungBNChangeFnc(CWnd *pWnd){
	((CCancerPrescriptionLineEditDlg *)pWnd)->OnLieuDungBNChange();
} */
/*static void _OnLieuDungBNSetfocusFnc(CWnd *pWnd){
	((CCancerPrescriptionLineEditDlg *)pWnd)->OnLieuDungBNSetfocus();} */ 
/*static void _OnLieuDungBNKillfocusFnc(CWnd *pWnd){
	((CCancerPrescriptionLineEditDlg *)pWnd)->OnLieuDungBNKillfocus();
} */
static int _OnLieuDungBNCheckValueFnc(CWnd *pWnd){
	return ((CCancerPrescriptionLineEditDlg *)pWnd)->OnLieuDungBNCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CCancerPrescriptionLineEditDlg *pVw = (CCancerPrescriptionLineEditDlg *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CCancerPrescriptionLineEditDlg *pVw = (CCancerPrescriptionLineEditDlg *)pWnd;
	pVw->OnCloseSelect();
} 
/*static void _OnDungTichTPChangeFnc(CWnd *pWnd){
	((CCancerPrescriptionLineEditDlg *)pWnd)->OnDungTichTPChange();
} */
/*static void _OnDungTichTPSetfocusFnc(CWnd *pWnd){
	((CCancerPrescriptionLineEditDlg *)pWnd)->OnDungTichTPSetfocus();} */ 
/*static void _OnDungTichTPKillfocusFnc(CWnd *pWnd){
	((CCancerPrescriptionLineEditDlg *)pWnd)->OnDungTichTPKillfocus();
} */
static int _OnDungTichTPCheckValueFnc(CWnd *pWnd){
	return ((CCancerPrescriptionLineEditDlg *)pWnd)->OnDungTichTPCheckValue();
} 
/*static void _OnDonviChangeFnc(CWnd *pWnd){
	((CCancerPrescriptionLineEditDlg *)pWnd)->OnDonviChange();
} */
/*static void _OnDonviSetfocusFnc(CWnd *pWnd){
	((CCancerPrescriptionLineEditDlg *)pWnd)->OnDonviSetfocus();} */ 
/*static void _OnDonviKillfocusFnc(CWnd *pWnd){
	((CCancerPrescriptionLineEditDlg *)pWnd)->OnDonviKillfocus();
} */

static int _OnDonviLoadDataFnc(CWnd *pWnd){
	return ((CCancerPrescriptionLineEditDlg *)pWnd)->OnDonviLoadData();
}

static int _OnDonviCheckValueFnc(CWnd *pWnd){
	return ((CCancerPrescriptionLineEditDlg *)pWnd)->OnDonviCheckValue();
} 
static int _OnAddCancerPrescriptionLineEditDlgFnc(CWnd *pWnd){
	 return ((CCancerPrescriptionLineEditDlg*)pWnd)->OnAddCancerPrescriptionLineEditDlg();
} 
static int _OnEditCancerPrescriptionLineEditDlgFnc(CWnd *pWnd){
	 return ((CCancerPrescriptionLineEditDlg*)pWnd)->OnEditCancerPrescriptionLineEditDlg();
} 
static int _OnDeleteCancerPrescriptionLineEditDlgFnc(CWnd *pWnd){
	 return ((CCancerPrescriptionLineEditDlg*)pWnd)->OnDeleteCancerPrescriptionLineEditDlg();
} 
static int _OnSaveCancerPrescriptionLineEditDlgFnc(CWnd *pWnd){
	 return ((CCancerPrescriptionLineEditDlg*)pWnd)->OnSaveCancerPrescriptionLineEditDlg();
} 
static int _OnCancelCancerPrescriptionLineEditDlgFnc(CWnd *pWnd){
	 return ((CCancerPrescriptionLineEditDlg*)pWnd)->OnCancelCancerPrescriptionLineEditDlg();
} 
CCancerPrescriptionLineEditDlg::CCancerPrescriptionLineEditDlg(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 455;
	m_nDlgHeight = 285;
	SetDefaultValues();
}
CCancerPrescriptionLineEditDlg::~CCancerPrescriptionLineEditDlg(){
}
void CCancerPrescriptionLineEditDlg::OnCreateComponents(){
	m_wndInformation.Create(this, _T("Information"), 5, 5, 445, 245);
	m_wndProductLabel.Create(this, _T("Item Name"), 10, 30, 110, 55);
	m_wndProduct.Create(this,115, 30, 440, 55); 
	m_wndUomLabel.Create(this, _T("Unit of Measure"), 10, 90, 110, 115);
	m_wndUom.Create(this,115, 90, 225, 115); 
	m_wndManufactureLabel.Create(this, _T("Manufacture"), 10, 120, 110, 145);
	m_wndManufacture.Create(this,115, 120, 440, 145); 
	m_wndLotNoLabel.Create(this, _T("Lot No"), 230, 60, 330, 85);
	m_wndLotNo.Create(this,335, 60, 440, 85); 
	m_wndExprDateLabel.Create(this, _T("Expr Date"), 10, 60, 110, 85);
	m_wndExprDate.Create(this,115, 60, 225, 85); 
	m_wndUnitPriceLabel.Create(this, _T("Unit Price"), 10, 150, 110, 175);
	m_wndUnitPrice.Create(this,115, 150, 225, 175); 
	m_wndLieuDungTTLabel.Create(this, _T("Liều dùng TT"), 10, 180, 110, 205);
	m_wndLieuDungTT.Create(this,115, 180, 225, 205); 
	m_wndLieuDungBN.Create(this,230, 180, 340, 205); 
	m_wndDungTichTPLabel.Create(this, _T("Dung tích TP"), 10, 215, 110, 240);
	m_wndDungTichTP.Create(this,115, 215, 225, 240); 
	//m_wndDungTichTP1Label.Create(this, _T(""), 345, 215, 440, 240);
	m_wndDonvi.Create(this,230, 215, 340, 240); 

	m_wndSave.Create(this, _T("&Save"), 270, 250, 355, 275);
	m_wndClose.Create(this, _T("X"), 360, 250, 445, 275);
}
void CCancerPrescriptionLineEditDlg::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndProduct.SetLimitText(1024);
	m_wndProduct.SetCheckValue(true);
	m_wndUom.SetLimitText(1024);
	m_wndUom.SetCheckValue(true);
	m_wndManufacture.SetLimitText(1024);
	m_wndManufacture.SetCheckValue(true);
	m_wndLotNo.SetLimitText(1024);
	m_wndLotNo.SetCheckValue(true);
	m_wndExprDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndExprDate.SetCheckValue(true);
	m_wndLieuDungTT.SetLimitText(1024);
	m_wndLieuDungTT.SetCheckValue(true);
	m_wndUnitPrice.SetLimitText(1024);
	m_wndUnitPrice.SetCheckValue(true);
	m_wndLieuDungBN.SetLimitText(1024);
	m_wndLieuDungBN.SetCheckValue(true);
	m_wndDungTichTP.SetLimitText(16);
	m_wndDungTichTP.SetCheckValue(true);
//	m_wndDonvi.SetLimitText(16);
	m_wndDonvi.SetCheckValue(true);
	m_wndDonvi.InsertColumn(0, _T("ID"), DT_LEFT, 50);
	m_wndDonvi.InsertColumn(1, _T("Name"), DT_LEFT, 200);

}
void CCancerPrescriptionLineEditDlg::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//m_wndProduct.SetEvent(WE_CHANGE, _OnProductChangeFnc);
	//m_wndProduct.SetEvent(WE_SETFOCUS, _OnProductSetfocusFnc);
	//m_wndProduct.SetEvent(WE_KILLFOCUS, _OnProductKillfocusFnc);
	m_wndProduct.SetEvent(WE_CHECKVALUE, _OnProductCheckValueFnc);
	//m_wndUom.SetEvent(WE_CHANGE, _OnUomChangeFnc);
	//m_wndUom.SetEvent(WE_SETFOCUS, _OnUomSetfocusFnc);
	//m_wndUom.SetEvent(WE_KILLFOCUS, _OnUomKillfocusFnc);
	m_wndUom.SetEvent(WE_CHECKVALUE, _OnUomCheckValueFnc);
	//m_wndManufacture.SetEvent(WE_CHANGE, _OnManufactureChangeFnc);
	//m_wndManufacture.SetEvent(WE_SETFOCUS, _OnManufactureSetfocusFnc);
	//m_wndManufacture.SetEvent(WE_KILLFOCUS, _OnManufactureKillfocusFnc);
	m_wndManufacture.SetEvent(WE_CHECKVALUE, _OnManufactureCheckValueFnc);
	//m_wndLotNo.SetEvent(WE_CHANGE, _OnLotNoChangeFnc);
	//m_wndLotNo.SetEvent(WE_SETFOCUS, _OnLotNoSetfocusFnc);
	//m_wndLotNo.SetEvent(WE_KILLFOCUS, _OnLotNoKillfocusFnc);
	m_wndLotNo.SetEvent(WE_CHECKVALUE, _OnLotNoCheckValueFnc);
	//m_wndExprDate.SetEvent(WE_CHANGE, _OnExprDateChangeFnc);
	//m_wndExprDate.SetEvent(WE_SETFOCUS, _OnExprDateSetfocusFnc);
	//m_wndExprDate.SetEvent(WE_KILLFOCUS, _OnExprDateKillfocusFnc);
	m_wndExprDate.SetEvent(WE_CHECKVALUE, _OnExprDateCheckValueFnc);
	//m_wndLieuDungTT.SetEvent(WE_CHANGE, _OnLieuDungTTChangeFnc);
	//m_wndLieuDungTT.SetEvent(WE_SETFOCUS, _OnLieuDungTTSetfocusFnc);
	//m_wndLieuDungTT.SetEvent(WE_KILLFOCUS, _OnLieuDungTTKillfocusFnc);
	m_wndLieuDungTT.SetEvent(WE_CHECKVALUE, _OnLieuDungTTCheckValueFnc);
	//m_wndUnitPrice.SetEvent(WE_CHANGE, _OnUnitPriceChangeFnc);
	//m_wndUnitPrice.SetEvent(WE_SETFOCUS, _OnUnitPriceSetfocusFnc);
	//m_wndUnitPrice.SetEvent(WE_KILLFOCUS, _OnUnitPriceKillfocusFnc);
	m_wndUnitPrice.SetEvent(WE_CHECKVALUE, _OnUnitPriceCheckValueFnc);
	//m_wndLieuDungBN.SetEvent(WE_CHANGE, _OnLieuDungBNChangeFnc);
	//m_wndLieuDungBN.SetEvent(WE_SETFOCUS, _OnLieuDungBNSetfocusFnc);
	//m_wndLieuDungBN.SetEvent(WE_KILLFOCUS, _OnLieuDungBNKillfocusFnc);
	m_wndLieuDungBN.SetEvent(WE_CHECKVALUE, _OnLieuDungBNCheckValueFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	//m_wndDungTichTP.SetEvent(WE_CHANGE, _OnDungTichTPChangeFnc);
	//m_wndDungTichTP.SetEvent(WE_SETFOCUS, _OnDungTichTPSetfocusFnc);
	//m_wndDungTichTP.SetEvent(WE_KILLFOCUS, _OnDungTichTPKillfocusFnc);
	m_wndDungTichTP.SetEvent(WE_CHECKVALUE, _OnDungTichTPCheckValueFnc);
	m_wndDonvi.SetEvent(WE_LOADDATA, _OnDonviLoadDataFnc);
	//m_wndDonvi.SetEvent(WE_SETFOCUS, _OnDonviSetfocusFnc);
	//m_wndDonvi.SetEvent(WE_KILLFOCUS, _OnDonviKillfocusFnc);
	m_wndDonvi.SetEvent(WE_CHECKVALUE, _OnDonviCheckValueFnc);
	SetMode(VM_NONE);

	GetDataToScreen();

}
void CCancerPrescriptionLineEditDlg::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndProduct.GetDlgCtrlID(), m_szProduct);
	DDX_Text(pDX, m_wndUom.GetDlgCtrlID(), m_szUom);
	DDX_Text(pDX, m_wndManufacture.GetDlgCtrlID(), m_szManufacture);
	DDX_Text(pDX, m_wndLotNo.GetDlgCtrlID(), m_szLotNo);
	DDX_TextEx(pDX, m_wndExprDate.GetDlgCtrlID(), m_szExprDate);
	DDX_Text(pDX, m_wndLieuDungTT.GetDlgCtrlID(), m_nLieuDungTT);
	DDX_Text(pDX, m_wndUnitPrice.GetDlgCtrlID(), m_nUnitPrice);
	DDX_Text(pDX, m_wndLieuDungBN.GetDlgCtrlID(), m_nLieuDungBN);
	DDX_Text(pDX, m_wndDungTichTP.GetDlgCtrlID(), m_nDungTichTP);
	DDX_TextEx(pDX, m_wndDonvi.GetDlgCtrlID(), m_szDonviKey);

}
void CCancerPrescriptionLineEditDlg::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Product")] =  m_szProduct;
	m_jData[_T("Uom")] =  m_szUom;
	m_jData[_T("Manufacture")] =  m_szManufacture;
	m_jData[_T("LotNo")] =  m_szLotNo;
	m_jData[_T("ExprDate")] =  m_szExprDate;
	m_jData[_T("LieuDungTT")] =  m_nLieuDungTT;
	m_jData[_T("UnitPrice")] =  m_nUnitPrice;
	m_jData[_T("LieuDungBN")] =  m_nLieuDungBN;
	m_jData[_T("DungTichTP")] =  m_nDungTichTP;
	m_jData[_T("Donvi")] =  m_szDonviKey;
	}
	else
	{
			
	m_jData[_T("Product")].GetValue(m_szProduct);
	m_jData[_T("Uom")].GetValue(m_szUom);
	m_jData[_T("Manufacture")].GetValue(m_szManufacture);
	m_jData[_T("LotNo")].GetValue(m_szLotNo);
	m_jData[_T("ExprDate")].GetValue(m_szExprDate);
	m_jData[_T("LieuDungTT")].GetValue(m_nLieuDungTT);
	m_jData[_T("UnitPrice")].GetValue(m_nUnitPrice);
	m_jData[_T("LieuDungBN")].GetValue(m_nLieuDungBN);
	m_jData[_T("DungTichTP")].GetValue(m_nDungTichTP);
	m_jData[_T("Donvi")].GetValue(m_szDonviKey);
	}

}
void CCancerPrescriptionLineEditDlg::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;

	szSQL.Format(_T(" SELECT hcol_cancer_orderline_id, hcol_tenthuoc") \
	_T("   ||' ['") \
	_T("   ||mp_name") \
	_T("   ||']' AS tenbietduoc,") \
	_T("   (SELECT adu_name FROM ad_uom WHERE adu_uom_id=hcol_donvi") \
	_T("   ) AS hcol_donvi,") \
	_T(" (SELECT adm_name ") \
	_T("	FROM AD_MANUFACTURE	WHERE adm_manufacture_id=mp_manufacture_id ") \
	_T("	) AS Manufacture, ") \
	_T("   hcol_lieudung_m2,") \
	_T("   hcol_lieudung_bn,") \
	_T("   hcol_lieudung_tt,") \
	_T("   hcoi_qtyorder,") \
	_T("   hcoi_qtyissue,") \
	_T("   hcoi_dm_qtyorder,") \
	_T("   hcoi_dm_qtyissue,") \
	_T("   (SELECT ss_desc FROM sys_sel WHERE ss_id='cancer_dungmoi' AND ss_code = hcol_dungmoi) AS hcol_dungmoi,") \
	_T("   hcol_thetich,") \
	_T("   hcol_thoigian_sd,") \
	_T("   hcoi_orderline,") \
	_T("   hcoi_product_item_id, hcol_dungtich_tp, hcol_donvi_tp ") \
	_T(" FROM hms_cancer_orderline") \
	_T(" LEFT JOIN hms_cancer_orderitem") \
	_T(" ON(hms_cancer_orderitem.hcoi_cancer_order_id      = hcol_cancer_order_id") \
	_T(" AND hms_cancer_orderitem.hcoi_cancer_orderline_id = hcol_cancer_orderline_id)") \
	_T(" LEFT JOIN m_product_item") \
	_T(" ON(mpi_product_item_id = hcoi_product_item_id)") \
	_T(" LEFT JOIN m_product") \
	_T(" ON(mp_product_id           = mpi_product_id)") \
	_T(" WHERE hcol_cancer_order_id = %ld") \
	_T(" AND hcoi_orderline=%ld") \
	_T(" ORDER BY hcol_index,") \
	_T("   hcol_tenthuoc"), m_nOrderID, m_nOrderItemLineID);
//_msg(_T("%s"), szSQL);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF()){
	
		rs.GetValue(_T("tenbietduoc"), m_szProduct);
		rs.GetValue(_T("hcol_donvi"), m_szUom);
		rs.GetValue(_T("hcol_lieudung_tt"), m_nLieuDungTT);
		rs.GetValue(_T("hcol_lieudung_bn"), m_nLieuDungBN); 
		if(m_nLieuDungTT == 0)
			m_nLieuDungTT = m_nLieuDungBN;

		rs.GetValue(_T("Manufacture"), m_szManufacture);
		rs.GetValue(_T("hcol_dungtich_tp"), m_nDungTichTP);
		rs.GetValue(_T("hcol_donvi_tp"), m_szDonviKey);

		rs.GetValue(_T("hcol_cancer_orderline_id"), m_nOrderLineID); 

		SetMode(VM_EDIT);
	}
	else
		SetMode(VM_NONE);

}
void CCancerPrescriptionLineEditDlg::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CCancerPrescriptionLineEditDlg::SetDefaultValues(){

	m_szProduct.Empty();
	m_szUom.Empty();
	m_szManufacture.Empty();
	m_szLotNo.Empty();
	m_szExprDate.Empty();
	m_nLieuDungTT=0;
	m_nUnitPrice=0;
	m_nLieuDungBN=0;
	m_nDungTichTP=0;
	m_szDonviKey.Empty();

}
int CCancerPrescriptionLineEditDlg::SetMode(int nMode){
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
 			EnableControls(FALSE);
 			EnableButtons(TRUE, 0, 1, -1);
 			break;
 		case VM_VIEW: 
 			EnableControls(FALSE);
 			EnableButtons(FALSE, 0, -1);
 			break;
 		case VM_NONE: 
 			EnableControls(FALSE);
 			EnableButtons(TRUE, 0, 6, -1);
 			SetDefaultValues();
 			break;
 		};

		m_wndLieuDungTT.EnableWindow(true);
		m_wndDungTichTP.EnableWindow(true);
		m_wndDonvi.EnableWindow(true);
 		UpdateData(FALSE);
 		return nOldMode;
}
/*void CCancerPrescriptionLineEditDlg::OnProductChange(){
	
} */
/*void CCancerPrescriptionLineEditDlg::OnProductSetfocus(){
	
} */
/*void CCancerPrescriptionLineEditDlg::OnProductKillfocus(){
	
} */
int CCancerPrescriptionLineEditDlg::OnProductCheckValue(){
	return 0;
} 
/*void CCancerPrescriptionLineEditDlg::OnUomChange(){
	
} */
/*void CCancerPrescriptionLineEditDlg::OnUomSetfocus(){
	
} */
/*void CCancerPrescriptionLineEditDlg::OnUomKillfocus(){
	
} */
int CCancerPrescriptionLineEditDlg::OnUomCheckValue(){
	return 0;
} 
/*void CCancerPrescriptionLineEditDlg::OnManufactureChange(){
	
} */
/*void CCancerPrescriptionLineEditDlg::OnManufactureSetfocus(){
	
} */
/*void CCancerPrescriptionLineEditDlg::OnManufactureKillfocus(){
	
} */
int CCancerPrescriptionLineEditDlg::OnManufactureCheckValue(){
	return 0;
} 
/*void CCancerPrescriptionLineEditDlg::OnLotNoChange(){
	
} */
/*void CCancerPrescriptionLineEditDlg::OnLotNoSetfocus(){
	
} */
/*void CCancerPrescriptionLineEditDlg::OnLotNoKillfocus(){
	
} */
int CCancerPrescriptionLineEditDlg::OnLotNoCheckValue(){
	return 0;
} 
/*void CCancerPrescriptionLineEditDlg::OnExprDateChange(){
	
} */
/*void CCancerPrescriptionLineEditDlg::OnExprDateSetfocus(){
	
} */
/*void CCancerPrescriptionLineEditDlg::OnExprDateKillfocus(){
	
} */
int CCancerPrescriptionLineEditDlg::OnExprDateCheckValue(){
	return 0;
} 
/*void CCancerPrescriptionLineEditDlg::OnLieuDungTTChange(){
	
} */
/*void CCancerPrescriptionLineEditDlg::OnLieuDungTTSetfocus(){
	
} */
/*void CCancerPrescriptionLineEditDlg::OnLieuDungTTKillfocus(){
	
} */
int CCancerPrescriptionLineEditDlg::OnLieuDungTTCheckValue(){
	return 0;
} 
/*void CCancerPrescriptionLineEditDlg::OnUnitPriceChange(){
	
} */
/*void CCancerPrescriptionLineEditDlg::OnUnitPriceSetfocus(){
	
} */
/*void CCancerPrescriptionLineEditDlg::OnUnitPriceKillfocus(){
	
} */
int CCancerPrescriptionLineEditDlg::OnUnitPriceCheckValue(){
	return 0;
} 
/*void CCancerPrescriptionLineEditDlg::OnLieuDungBNChange(){
	
} */
/*void CCancerPrescriptionLineEditDlg::OnLieuDungBNSetfocus(){
	
} */
/*void CCancerPrescriptionLineEditDlg::OnLieuDungBNKillfocus(){
	
} */
int CCancerPrescriptionLineEditDlg::OnLieuDungBNCheckValue(){
	return 0;
} 
void CCancerPrescriptionLineEditDlg::OnSaveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnSaveCancerPrescriptionLineEditDlg();
} 
void CCancerPrescriptionLineEditDlg::OnCloseSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnCancel();
} 
/*void CCancerPrescriptionLineEditDlg::OnDungTichTPChange(){
	
} */
/*void CCancerPrescriptionLineEditDlg::OnDungTichTPSetfocus(){
	
} */
/*void CCancerPrescriptionLineEditDlg::OnDungTichTPKillfocus(){
	
} */
int CCancerPrescriptionLineEditDlg::OnDungTichTPCheckValue(){
	return 0;
} 
/*void CCancerPrescriptionLineEditDlg::OnDonviChange(){
	
} */
/*void CCancerPrescriptionLineEditDlg::OnDonviSetfocus(){
	
} */
/*void CCancerPrescriptionLineEditDlg::OnDonviKillfocus(){
	
} */
int CCancerPrescriptionLineEditDlg::OnDonviCheckValue(){
	return 0;
} 
int CCancerPrescriptionLineEditDlg::OnAddCancerPrescriptionLineEditDlg(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CCancerPrescriptionLineEditDlg::OnEditCancerPrescriptionLineEditDlg(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CCancerPrescriptionLineEditDlg::OnDeleteCancerPrescriptionLineEditDlg(){
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
 		OnCancelCancerPrescriptionLineEditDlg();
 	}
	return 0;
}
int CCancerPrescriptionLineEditDlg::OnSaveCancerPrescriptionLineEditDlg(){
	
 	if(GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	CString szSQL;
	CString szWhere;
	szSQL.Format(_T("UPDATE hms_cancer_orderline SET hcol_lieudung_tt=%.2f, hcol_dungtich_tp='%.2f', hcol_donvi_tp=%d ") \
		_T(" WHERE hcol_cancer_order_id = %ld AND  hcol_cancer_orderline_id = %ld"), 
		m_nLieuDungTT, m_nDungTichTP, str2int(m_szDonviKey), m_nOrderID, m_nOrderLineID);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
		CGuiDialog::OnOK();
 	}
 	else
 	{
		ShowMessageBox(_T("Không cập nhật được thông tin"));
		_tprintf(_T("\r\n%s"), szSQL);
 	}
 	return ret;
 	return 0;
}
int CCancerPrescriptionLineEditDlg::OnCancelCancerPrescriptionLineEditDlg(){
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
int CCancerPrescriptionLineEditDlg::OnCancerPrescriptionLineEditDlgListLoadData(){
	return 0;
}


int CCancerPrescriptionLineEditDlg::OnDonviLoadData()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
	return pMF->LoadUomList(&m_wndDonvi, m_szDonviKey);
	return 0;
}