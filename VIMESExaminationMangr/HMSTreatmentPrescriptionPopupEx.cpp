#include "HMSTreatmentPrescriptionPopupEx.h"
#include "MainFrm.h"
#include "StringToken.h"
#include "GuiInputDataDialog.h"
#include "GuiTabCtrl.h"
#include "HMSTreatmentTrackingDialog.h"



static void _OnNameSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSTreatmentPrescriptionPopupEx* )pWnd)->OnNameSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnNameSelendokFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionPopupEx *)pWnd)->OnNameSelendok();
}
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionPopupEx *)pWnd)->OnNameKillfocus();
}*/
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionPopupEx *)pWnd)->OnNameKillfocus();
}*/

static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentPrescriptionPopupEx *)pWnd)->OnNameCheckValue();
}

/*static void _OnNameAddNewFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionPopupEx *)pWnd)->OnNameAddNew();
}*/
/*static void _OnUnitChangeFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionPopupEx *)pWnd)->OnUnitChange();
} */
/*static void _OnUnitSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionPopupEx *)pWnd)->OnUnitSetfocus();} */ 
/*static void _OnUnitKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionPopupEx *)pWnd)->OnUnitKillfocus();
} */
static int _OnUnitCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentPrescriptionPopupEx *)pWnd)->OnUnitCheckValue();
} 

static long _OnUnitLoadDataFnc(CWnd *pWnd){
	return ((CHMSTreatmentPrescriptionPopupEx *)pWnd)->OnUnitLoadData();
}

/*static void _OnQtyChangeFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionPopupEx *)pWnd)->OnQtyChange();
} */
/*static void _OnQtySetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionPopupEx *)pWnd)->OnQtySetfocus();} */ 
/*static void _OnQtyKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionPopupEx *)pWnd)->OnQtyKillfocus();
} */
static int _OnQtyCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentPrescriptionPopupEx *)pWnd)->OnQtyCheckValue();
} 
static void _OnIndicationSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSTreatmentPrescriptionPopupEx* )pWnd)->OnIndicationSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnIndicationSelendokFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionPopupEx *)pWnd)->OnIndicationSelendok();
}
/*static void _OnIndicationSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionPopupEx *)pWnd)->OnIndicationKillfocus();
}*/
/*static void _OnIndicationKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionPopupEx *)pWnd)->OnIndicationKillfocus();
}*/
static long _OnIndicationLoadDataFnc(CWnd *pWnd){
	return ((CHMSTreatmentPrescriptionPopupEx *)pWnd)->OnIndicationLoadData();
}
/*static void _OnIndicationAddNewFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionPopupEx *)pWnd)->OnIndicationAddNew();
}*/
static long _OnIndicationCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentPrescriptionPopupEx *)pWnd)->OnIndicationCheckValue();
}

/*static void _OnSpeedChangeFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionPopupEx *)pWnd)->OnSpeedChange();
} */
/*static void _OnSpeedSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionPopupEx *)pWnd)->OnSpeedSetfocus();} */ 
/*static void _OnSpeedKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionPopupEx *)pWnd)->OnSpeedKillfocus();
} */
static int _OnSpeedCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentPrescriptionPopupEx *)pWnd)->OnSpeedCheckValue();
} 
/*static void _OnUsageChangeFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionPopupEx *)pWnd)->OnUsageChange();
} */
static void _OnUsageSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionPopupEx *)pWnd)->OnUsageSetfocus();}

/*static void _OnUsageKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionPopupEx *)pWnd)->OnUsageKillfocus();
} */
static int _OnUsageCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentPrescriptionPopupEx *)pWnd)->OnUsageCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSTreatmentPrescriptionPopupEx *pVw = (CHMSTreatmentPrescriptionPopupEx *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSTreatmentPrescriptionPopupEx *pVw = (CHMSTreatmentPrescriptionPopupEx *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSTreatmentPrescriptionPopupExFnc(CWnd *pWnd){
	 return ((CHMSTreatmentPrescriptionPopupEx*)pWnd)->OnAddHMSTreatmentPrescriptionPopupEx();
} 
static int _OnEditHMSTreatmentPrescriptionPopupExFnc(CWnd *pWnd){
	 return ((CHMSTreatmentPrescriptionPopupEx*)pWnd)->OnEditHMSTreatmentPrescriptionPopupEx();
} 
static int _OnDeleteHMSTreatmentPrescriptionPopupExFnc(CWnd *pWnd){
	 return ((CHMSTreatmentPrescriptionPopupEx*)pWnd)->OnDeleteHMSTreatmentPrescriptionPopupEx();
} 
static int _OnSaveHMSTreatmentPrescriptionPopupExFnc(CWnd *pWnd){
	 return ((CHMSTreatmentPrescriptionPopupEx*)pWnd)->OnSaveHMSTreatmentPrescriptionPopupEx();
} 
static int _OnCancelHMSTreatmentPrescriptionPopupExFnc(CWnd *pWnd){
	 return ((CHMSTreatmentPrescriptionPopupEx*)pWnd)->OnCancelHMSTreatmentPrescriptionPopupEx();
}

/*
CHMSTreatmentPrescriptionPopupEx::CHMSTreatmentPrescriptionPopupEx()
{

	m_nDlgWidth = 600;
	m_nDlgHeight = 155;
	SetDefaultValues();
	m_szStorageKey.Empty();
	m_szOrderDate.Empty();
	m_nOrderID = 0;

}
*/
CHMSTreatmentPrescriptionPopupEx::CHMSTreatmentPrescriptionPopupEx(CWnd *pParent, int nMode, int x, int y):
	m_pParentOwner(pParent), CGuiPopup(pParent)
{
	
	CGuiPopup::SetMode(nMode);
	
	SetDefaultValues();
	m_szOrderDate.Empty();
	m_nX = x;
	m_nY = y;
	m_nDlgWidth = 775;
	m_nDlgHeight = 120;
	SetAutoClose(false);
//	SetAutoCenter(false);
//	SetAutoCalcSize(false);


}
CHMSTreatmentPrescriptionPopupEx::~CHMSTreatmentPrescriptionPopupEx(){
}
void CHMSTreatmentPrescriptionPopupEx::OnCreateComponents(){
	m_wndPrescriptionInput.Create(this, _T("Nhập thuốc"), 0, 0, 0, 22);
	m_wndNameLabel.Create(this, _T("Tên thuốc/HL"), 5, 5, 125, 30);
	m_wndName.Create(this,130, 5, 385, 30); 
	m_wndUnitLabel.Create(this, _T("Unit"), 390, 5, 480, 30);
	m_wndUnit.Create(this,485, 5, 740, 30); 
	m_wndQuantityLabel.Create(this, _T("Quantity"), 5, 35, 125, 60);
	m_wndQty.Create(this,130, 35, 200, 60); 
	m_wndIndicationLabel.Create(this, _T("Đường dùng"), 205, 35, 295, 60);
	m_wndIndication.Create(this,300, 35, 385, 60); 
	m_wndUsage.Create(this,390, 35, 740, 60); 
	m_wndSpeedLabel.Create(this, _T("Tốc độ"), 5, 65, 125, 90);
	m_wndSpeed.Create(this,130, 65, 385, 90); 
	m_wndSave.Create(this, _T("&Save"), 550, 65, 650, 90);
	m_wndClose.Create(this, _T("&X"), 655, 65, 740, 90);

	m_wndUsageLabel.Create(this, _T(""), 0, 0, 0, 0);
	m_wndUsageLabel.ShowWindow(SW_HIDE);
	m_wndUsageLabel.EnableWindow(FALSE);

}
void CHMSTreatmentPrescriptionPopupEx::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndName.SetCheckValue(true);
	m_wndName.LimitText(35);
	m_wndQty.SetCheckValue(true);
	m_wndUsage.SetLimitText(254);
	
	m_wndUsage.SetCheckValue(true);
	m_wndUsage.SetAllowEmpty(true);
	m_wndUsage.SetInitCap(2);	

	m_wndIndication.InsertColumn(0,_T("ID"), CFMT_NUMBER, 40);
	m_wndIndication.InsertColumn(1,_T("Desc"), CFMT_TEXT, 300);
	m_wndIndication.InsertColumn(2,_T(""), CFMT_TEXT, 0);//index
	m_wndIndication.Format(3, 0, 10, 1);
	m_wndIndication.SetCheckValue(true);
//	m_wndName.SetSearchEx(TRUE);
	
	/*
	m_wndName.InsertColumn(0, _T(""), CFMT_TEXT, 0); //ProductID
	m_wndName.InsertColumn(1, _T("Drug Name"), CFMT_TEXT, 350);
	m_wndName.InsertColumn(2, _T("Generic Name"), CFMT_TEXT, 150);
	m_wndName.InsertColumn(3, _T("Uom"), CFMT_TEXT, 60);
	m_wndName.InsertColumn(4, _T("Prod.Country"), CFMT_TEXT, 80);
	m_wndName.InsertColumn(5, _T("On Hand"), CFMT_NUMBER, 65);
	m_wndName.InsertColumn(6, _T(""), CFMT_TEXT, 0);//precision
	m_wndName.Format(6, 1);
	m_wndName.SetSearchStyle(SS_COMPARE);
	*/
	m_wndName.SetInitCap(1);


	m_wndUnit.InsertColumn(0,_T("ID"), CFMT_NUMBER, 40);
	m_wndUnit.InsertColumn(1,_T("Desc"), CFMT_TEXT, 300);



	m_hms_prescriptionTbl.SetTableName(_T("hms_prescription"));
	m_hms_prescriptionTbl.AddField(_T("hp_createdby"), dfText, 15); 
	m_hms_prescriptionTbl.AddField(_T("hp_createddate"), dfDateTime); 
	m_hms_prescriptionTbl.AddField(_T("hp_updatedby"), dfText, 15); 
	m_hms_prescriptionTbl.AddField(_T("hp_updateddate"), dfDateTime); 
	m_hms_prescriptionTbl.AddField(_T("hp_docno"), dfLong); 
	m_hms_prescriptionTbl.AddField(_T("hp_receptidx"), dfLong); 
	m_hms_prescriptionTbl.AddField(_T("hp_drugname"), dfText, 81); 
	m_hms_prescriptionTbl.AddField(_T("hp_uom_id"), dfLong); 
	m_hms_prescriptionTbl.AddField(_T("hp_unit"), dfText, 15); 
	m_hms_prescriptionTbl.AddField(_T("hp_quantity"), dfFloat); 
	m_hms_prescriptionTbl.AddField(_T("hp_usage"), dfText, 128); 
	m_hms_prescriptionTbl.AddField(_T("hp_dose"), dfText, 35); 
	m_hms_prescriptionTbl.AddField(_T("hp_speed"), dfText, 35); 


}
void CHMSTreatmentPrescriptionPopupEx::OnSetWindowEvents(){
	
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	m_wndName.SetEvent(WE_SELENDOK, _OnNameSelendokFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	
	
	//m_wndName.SetEvent(WE_ADDNEW, _OnNameAddNewFnc);
	//m_wndUnit.SetEvent(WE_CHANGE, _OnUnitChangeFnc);
	//m_wndUnit.SetEvent(WE_SETFOCUS, _OnUnitSetfocusFnc);
	//m_wndUnit.SetEvent(WE_KILLFOCUS, _OnUnitKillfocusFnc);
	m_wndUnit.SetEvent(WE_CHECKVALUE, _OnUnitCheckValueFnc);
	m_wndUnit.SetEvent(WE_LOADDATA, _OnUnitLoadDataFnc);

	//m_wndQty.SetEvent(WE_CHANGE, _OnQtyChangeFnc);
	//m_wndQty.SetEvent(WE_SETFOCUS, _OnQtySetfocusFnc);
	//m_wndQty.SetEvent(WE_KILLFOCUS, _OnQtyKillfocusFnc);
	m_wndQty.SetEvent(WE_CHECKVALUE, _OnQtyCheckValueFnc);
	m_wndIndication.SetEvent(WE_SELENDOK, _OnIndicationSelendokFnc);
	//m_wndIndication.SetEvent(WE_SETFOCUS, _OnIndicationSetfocusFnc);
	//m_wndIndication.SetEvent(WE_KILLFOCUS, _OnIndicationKillfocusFnc);
	m_wndIndication.SetEvent(WE_SELCHANGE, _OnIndicationSelectChangeFnc);
	m_wndIndication.SetEvent(WE_LOADDATA, _OnIndicationLoadDataFnc);
	//m_wndIndication.SetEvent(WE_ADDNEW, _OnIndicationAddNewFnc);
	m_wndIndication.SetEvent(WE_CHECKVALUE, _OnIndicationCheckValueFnc);
	//m_wndSpeed.SetEvent(WE_CHANGE, _OnSpeedChangeFnc);
	//m_wndSpeed.SetEvent(WE_SETFOCUS, _OnSpeedSetfocusFnc);
	//m_wndSpeed.SetEvent(WE_KILLFOCUS, _OnSpeedKillfocusFnc);
	m_wndSpeed.SetEvent(WE_CHECKVALUE, _OnSpeedCheckValueFnc);
	//m_wndUsage.SetEvent(WE_CHANGE, _OnUsageChangeFnc);
	m_wndUsage.SetEvent(WE_SETFOCUS, _OnUsageSetfocusFnc);
	//m_wndUsage.SetEvent(WE_KILLFOCUS, _OnUsageKillfocusFnc);
	m_wndUsage.SetEvent(WE_CHECKVALUE, _OnUsageCheckValueFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	
	int nMode = GetMode();
	
	m_szOrderDate = m_szTreatDate;

	if(nMode == VM_VIEW || nMode == VM_EDIT)
		GetDataToScreen();
	SetMode(nMode);
	
	((CHMSTreatmentTrackingDialog*)m_pParentOwner)->RefreshDrugs();

}
void CHMSTreatmentPrescriptionPopupEx::OnDoDataExchange(CDataExchange* pDX){
	
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_TextEx(pDX, m_wndUnit.GetDlgCtrlID(), m_szUnitKey);
	DDX_Text(pDX, m_wndQty.GetDlgCtrlID(), m_nQty);
	DDX_TextEx(pDX, m_wndIndication.GetDlgCtrlID(), m_szIndicationKey);
	DDX_Text(pDX, m_wndSpeed.GetDlgCtrlID(), m_szSpeed);
	DDX_Text(pDX, m_wndUsage.GetDlgCtrlID(), m_szUsage);
}
void CHMSTreatmentPrescriptionPopupEx::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T(" SELECT * FROM hms_prescription WHERE hp_docno=%ld and hp_receptidx=%ld and hp_idx=%ld"), pMF->m_nDocumentNo, m_nTreatIdx, m_nIdx);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("hp_drugname"), m_szName);
		rs.GetValue(_T("hp_uom_id"), m_szUnitKey);
		rs.GetValue(_T("hp_quantity"), m_nQty);
		rs.GetValue(_T("hp_usage"), m_szUsage);
		rs.GetValue(_T("hp_dose"), m_szIndicationKey);
		rs.GetValue(_T("hp_speed"), m_szSpeed);

	}
	

}
void CHMSTreatmentPrescriptionPopupEx::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
	
	m_hms_prescriptionTbl.SetValue(_T("hp_createdby"), pMF->GetCurrentUser());
	m_hms_prescriptionTbl.SetValue(_T("hp_createddate"), pMF->GetSysDateTime());
	m_hms_prescriptionTbl.SetValue(_T("hp_updatedby"), pMF->GetCurrentUser());
	m_hms_prescriptionTbl.SetValue(_T("hp_updateddate"), pMF->GetSysDateTime());
	m_hms_prescriptionTbl.SetValue(_T("hp_docno"), pMF->m_nDocumentNo);
	
	m_hms_prescriptionTbl.SetValue(_T("hp_receptidx"), m_nTreatIdx);
	
	m_hms_prescriptionTbl.SetValue(_T("hp_drugname"), m_szName);
	m_hms_prescriptionTbl.SetValue(_T("hp_uom_id"), m_szUnitKey);
	m_hms_prescriptionTbl.SetValue(_T("hp_unit"), m_wndUnit.GetCurrent(1));
	m_hms_prescriptionTbl.SetValue(_T("hp_quantity"), m_nQty);
	m_hms_prescriptionTbl.SetValue(_T("hp_usage"), m_szUsage);
	m_hms_prescriptionTbl.SetValue(_T("hp_dose"), m_szIndicationKey);
	m_hms_prescriptionTbl.SetValue(_T("hp_speed"), m_szSpeed);

}
void CHMSTreatmentPrescriptionPopupEx::SetDefaultValues(){

	m_szName.Empty();
	m_szUnitKey.Empty();
	m_nQty=0;
	m_szIndicationKey.Empty();
	m_szSpeed.Empty();
	m_szUsage.Empty();	

}
int CHMSTreatmentPrescriptionPopupEx::SetMode(int nMode){
	
 		int nOldMode = GetMode(); 
 		CGuiPopup::SetMode(nMode); 
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
		
  		switch(nMode)
		{ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 1, -1); 
			SetDefaultValues();
			m_wndName.SetFocus();
 			break; 
 		case VM_ADDCHILD: 
			SetDefaultValues();
//			m_szOrderDate = pMF->GetSysDate();
			m_wndName.SetFocus();
//			m_wndStorage.EnableWindow(FALSE);
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 1, -1); 
			//m_wndName.EnableWindow(FALSE);
			//m_wndQty.EnableWindow(FALSE);
			m_wndName.SetFocus();
 			break; 
 		case VM_VIEW: 
 			EnableControls(FALSE); 
 			EnableButtons(FALSE, 1, -1); 
 			break; 
 		case VM_NONE: 
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 0, 6, -1); 
 			SetDefaultValues(); 
 			break; 
 		}; 
 		UpdateData(FALSE); 

		
 		return nOldMode; 
}

void CHMSTreatmentPrescriptionPopupEx::OnNameSelectChange(int nOldItemSel, int nNewItemSel)
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSTreatmentPrescriptionPopupEx::OnNameSelendok()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
/*
	UpdateData(true);
	//m_szProdCountry = m_wndName.GetCurrent(1);
	m_szUnitKey = m_wndName.GetCurrent(3);
	m_nMaxQuantity = str2float(m_wndName.GetCurrent(5));
//	szSQL.Format(_T("SELECT distinct hpou_dousage ") \
//		_T(" FROM hms_ipharmaorder_usage ") \
//		_T(" WHERE hpou_user_id='%s' and hpou_product_id=%ld  and rownum <= 1 and hpou_dousage is not null "),
//		pMF->GetCurrentUser(), str2long(m_szName));	

	szSQL.Format(_T(" SELECT hpou_dousage") \
_T(" FROM") \
_T("   (SELECT hpou_dousage,") \
_T("     hpou_orderid, hpou_indication_id ") \
_T("   FROM hms_ipharmaorder_usage") \
_T("   WHERE hpou_user_id ='%s'") \
_T("   AND hpou_product_id=%ld ") \
_T("   AND hpou_dousage  IS NOT NULL") \
_T("   ORDER BY hpou_orderid DESC") \
_T("   )") \
_T(" WHERE rownum <= 1"), pMF->GetCurrentUser(), str2long(m_szName));

	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("hpou_dousage"), m_szUsage);
		rs.GetValue(_T("hpou_indication_id"), m_szIndicationKey);
	}
	
	CString szIsPrecision = m_wndName.GetCurrent(6);
	if(szIsPrecision == _T("Y"))
	{
		m_wndQty.SetNumberDecimal(2);
	}
	else
	{
		m_wndQty.SetNumberDecimal(0);
	}

	m_wndQty.SetNumberDecimal(0);
	UpdateData(false);
	*/

}
/*void CHMSTreatmentPrescriptionPopupEx::OnNameSetfocus(){
	
}*/
/*void CHMSTreatmentPrescriptionPopupEx::OnNameKillfocus(){
	
}*/


int  CHMSTreatmentPrescriptionPopupEx::OnNameCheckValue()
{
	return 0;
}

/*void CHMSTreatmentPrescriptionPopupEx::OnNameAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSTreatmentPrescriptionPopupEx::OnUnitChange(){
	
} */
/*void CHMSTreatmentPrescriptionPopupEx::OnUnitSetfocus(){
	
} */
/*void CHMSTreatmentPrescriptionPopupEx::OnUnitKillfocus(){
	
} */
int CHMSTreatmentPrescriptionPopupEx::OnUnitCheckValue(){
	return 0;
} 


long CHMSTreatmentPrescriptionPopupEx::OnUnitLoadData()
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();
	if(m_wndUnit.IsSearchKey() && str2long(m_szUnitKey) > 0){
		szWhere.Format(_T(" and adu_uom_id=%ld "), str2long(m_szUnitKey));
	};
	m_wndUnit.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT adu_uom_id as id, adu_name as name ") \
		_T("FROM ad_uom ") \
		_T("WHERE adu_isactive='Y' %s ORDER BY adu_uom_id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndUnit.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;	

}
/*void CHMSTreatmentPrescriptionPopupEx::OnQtyChange(){
	
} */
/*void CHMSTreatmentPrescriptionPopupEx::OnQtySetfocus(){
	
} */
/*void CHMSTreatmentPrescriptionPopupEx::OnQtyKillfocus(){
	
} */
int CHMSTreatmentPrescriptionPopupEx::OnQtyCheckValue()
{

	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szMsg;
	if(m_nQty <= 0)
	{
		return -1;
	}
	return 0;
} 
/*void CHMSTreatmentPrescriptionPopupEx::OnMaxQuantityChange(){
	
} */
/*void CHMSTreatmentPrescriptionPopupEx::OnMaxQuantitySetfocus(){
	
} */
/*void CHMSTreatmentPrescriptionPopupEx::OnMaxQuantityKillfocus(){
	
} */
void CHMSTreatmentPrescriptionPopupEx::OnIndicationSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSTreatmentPrescriptionPopupEx::OnIndicationSelendok(){
	UpdateData(true);
	if(m_szUsage.IsEmpty())
		m_szUsage = m_wndIndication.GetCurrent(1);
	UpdateData(false);

}
/*void CHMSTreatmentPrescriptionPopupEx::OnIndicationSetfocus(){
	
}*/
/*void CHMSTreatmentPrescriptionPopupEx::OnIndicationKillfocus(){
	
}*/
long CHMSTreatmentPrescriptionPopupEx::OnIndicationLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return pMF->LoadDrugIndication(&m_wndIndication, m_szIndicationKey);
	
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndIndication.IsSearchKey() && !m_szIndicationKey.IsEmpty()){
		szWhere.Format(_T(" AND ss_code='%s' "), m_szIndicationKey);
	};
	
	//szWhere.AppendFormat(_T(" and lower(ss_desc) like(chr(37)||lower('%s')||chr(37)) "), m_szIndicationKey);

	m_wndIndication.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name, ss_index FROM sys_sel WHERE ss_id='hms_indication_drug' %s ORDER BY name,CAST(ss_code AS INTEGER) "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndIndication.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), 
			rs.GetValue(_T("ss_index")), 
			NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CHMSTreatmentPrescriptionPopupEx::OnIndicationAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSTreatmentPrescriptionPopupEx::OnSpeedChange(){
	
} */
/*void CHMSTreatmentPrescriptionPopupEx::OnSpeedSetfocus(){
	
} */
/*void CHMSTreatmentPrescriptionPopupEx::OnSpeedKillfocus(){
	
} */
int CHMSTreatmentPrescriptionPopupEx::OnSpeedCheckValue(){
		return 0;
} 
/*void CHMSTreatmentPrescriptionPopupEx::OnUsageChange(){
	
} */
void CHMSTreatmentPrescriptionPopupEx::OnUsageSetfocus(){
	m_wndUsage.SetSel(-1);	
} 
/*void CHMSTreatmentPrescriptionPopupEx::OnUsageKillfocus(){
	
} */

int	CHMSTreatmentPrescriptionPopupEx::OnUsageCheckValue()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_szUsage.Trim();
	if(m_szUsage.IsEmpty() && pMF->IsRequireUsage(m_szName))
		return -1;
	return 0;
}
void CHMSTreatmentPrescriptionPopupEx::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveHMSTreatmentPrescriptionPopupEx();
} 

#include "HMSConfirmDialog.h"
#include ".\HMSTreatmentPrescriptionPopupEx.h"
/*
void CHMSTreatmentPrescriptionPopupEx::OnConfirmSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(pMF->m_szDoctor == pMF->GetCurrentUser())
	{
	}
	else
	{
		if(pMF->m_bConfirm)
		{
			CHMSConfirmDialog dlg;
			dlg.m_szDoctor = pMF->m_szDoctor;

			if(dlg.DoModal() != IDOK)
				return;
		}
	}
	CString szSQL;
	szSQL.Format(_T("UPDATE hms_ipharmaorder SET hpo_orderstatus='S', hpo_doctor='%s' WHERE hpo_orderid=%ld and hpo_orderstatus='O' "), 
		pMF->m_szDoctor, m_nOrderID);
	_debug(_T("\t\n%s"), szSQL);
	pMF->ExecSQL(szSQL);

} 
*/
void CHMSTreatmentPrescriptionPopupEx::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();	
//	ClosePopup();
	CGuiPopup::OnCancel();
	
} 
int CHMSTreatmentPrescriptionPopupEx::OnAddHMSTreatmentPrescriptionPopupEx(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSTreatmentPrescriptionPopupEx::OnEditHMSTreatmentPrescriptionPopupEx()
{
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSTreatmentPrescriptionPopupEx::OnDeleteHMSTreatmentPrescriptionPopupEx(){
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
 		OnCancelHMSTreatmentPrescriptionPopupEx(); 
 	}
	return 0;
}
int CHMSTreatmentPrescriptionPopupEx::OnSaveHMSTreatmentPrescriptionPopupEx()
{
 	if(GetMode() != VM_ADD && GetMode() != VM_ADDCHILD && GetMode() != VM_EDIT) 
 		return -1; 
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 

//	m_szOrderDate.AppendFormat(_T(" %s"), pMF->GetSysTime());
	m_szOrderDate = m_szTreatDate;

 	if(!IsValidateData()) 
 		return -1; 
	
 	CString szSQL;
	//if(GetMode() == VM_EDIT)
	//{
	//	szSQL.Format(_T("HMS_IPHARMAORDER_EDITUSAGE_V5(%ld, %ld, %ld, '%s','%s','%s') "), 
	//		pMF->m_nDocumentNo, m_nOrderID, m_nProductId, m_szSpeed, m_szUsage, m_szIndicationKey);
	//}
	//else
	//	szSQL.Format(_T("HMS_IPHARMAORDER_CREATELINE_V5(%s) "), m_hms_ipharmaorderTbl.FormatSQL());
 	if(GetMode() == VM_ADD){ 
 		szSQL = m_hms_prescriptionTbl.GetInsertSQL(_T("hp_idx")); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
		szWhere.Format(_T(" WHERE hp_docno=%ld and hp_receptidx=%ld and hp_idx=%ld "), pMF->m_nDocumentNo, m_nTreatIdx, m_nIdx); 
 		szSQL = m_hms_prescriptionTbl.GetUpdateSQL(_T("hp_createdby,hp_createddate,hp_docno,hp_idx,hp_receptidx")); 
 		szSQL += szWhere; 
 	}
	int ret = pMF->ExecSQL(szSQL);
	//_msg(_T("\r\nret: %d|szSQL: %s"), ret, szSQL);
	if(ret <= 0)
	{
		CString szMsg;
		szMsg.Format(_T("[%d] Lỗi không thêm được thuốc, vật tư"), ret);
		ShowToolTip(&m_wndName, szMsg);
		
	}
	else
	{
		if(GetMode() != VM_EDIT)
		{
			SetMode(VM_ADD);
			//((CHMSTreatmentTrackingDialog*)m_pParentOwner)->RefreshDrugs();
			//m_pParentOwner->SendMessage(WM_COMMAND, (WPARAM)CMD_REFRESHDATA);
			((CHMSTreatmentTrackingDialog*)m_pParentOwner)->RefreshDrugs();
		}
		else
		{
			ClosePopup();
		}

		
		
	//	((CHMSTreatmentTrackingDialog*)GetParent())->LoadDrugListEx();
	//	((CHMSTreatmentTrackingDialog*)GetParent())->m_wndTreatList.Invalidate();
	}
	return ret;

}
int CHMSTreatmentPrescriptionPopupEx::OnCancelHMSTreatmentPrescriptionPopupEx(){
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
int CHMSTreatmentPrescriptionPopupEx::OnHMSTreatmentPrescriptionPopupExListLoadData(){
	return 0;
}
BEGIN_MESSAGE_MAP(CHMSTreatmentPrescriptionPopupEx, CGuiPopup)
	
END_MESSAGE_MAP()

/*
void CHMSTreatmentPrescriptionPopupEx::ShowPopup(CWnd *pWndRef, int nShow){
//	CGuiPopup::ShowPopup(pWndRef, nShow);
} 
*/
void CHMSTreatmentPrescriptionPopupEx::ClosePopup()
{
	CGuiPopup::ClosePopup();
	((CHMSTreatmentTrackingDialog*)m_pParentOwner)->Refresh();

}



int CHMSTreatmentPrescriptionPopupEx::OnIndicationCheckValue()
{
	m_wndUsage.SetSel(m_wndUsage.GetWindowTextLength(), m_wndUsage.GetWindowTextLength());
	return 0;
}

/*
void CHMSTreatmentPrescriptionPopupEx::CreatePopup(bool bInPackage){
	static bool bInited = false;
	m_bInPackage = bInPackage;

	if(!bInited)
	{
		bInited = true;
	}

	
}
*/



