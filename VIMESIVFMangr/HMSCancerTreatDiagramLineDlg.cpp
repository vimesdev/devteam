#include "HMSCancerTreatDiagramLineDlg.h"
#include "HMSCancerTreatDiagramDialog.h"
#include "MainFrm.h"
/*static void _OnDrugNameChangeFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagramLineDlg *)pWnd)->OnDrugNameChange();
} */
/*static void _OnDrugNameSetfocusFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagramLineDlg *)pWnd)->OnDrugNameSetfocus();} */ 
/*static void _OnDrugNameKillfocusFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagramLineDlg *)pWnd)->OnDrugNameKillfocus();
} */
static int _OnDrugNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSCancerTreatDiagramLineDlg *)pWnd)->OnDrugNameCheckValue();
} 
/*static void _OnUOMIDChangeFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagramLineDlg *)pWnd)->OnUOMIDChange();
} */
/*static void _OnUOMIDSetfocusFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagramLineDlg *)pWnd)->OnUOMIDSetfocus();} */ 
/*static void _OnUOMIDKillfocusFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagramLineDlg *)pWnd)->OnUOMIDKillfocus();
} */
static int _OnUOMIDCheckValueFnc(CWnd *pWnd){
	return ((CHMSCancerTreatDiagramLineDlg *)pWnd)->OnUOMIDCheckValue();
} 
/*static void _OnLDMChangeFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagramLineDlg *)pWnd)->OnLDMChange();
} */
/*static void _OnLDMSetfocusFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagramLineDlg *)pWnd)->OnLDMSetfocus();} */ 
/*static void _OnLDMKillfocusFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagramLineDlg *)pWnd)->OnLDMKillfocus();
} */
static int _OnLDMCheckValueFnc(CWnd *pWnd){
	return ((CHMSCancerTreatDiagramLineDlg *)pWnd)->OnLDMCheckValue();
} 
/*static void _OnDungMoiChangeFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagramLineDlg *)pWnd)->OnDungMoiChange();
} */
/*static void _OnDungMoiSetfocusFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagramLineDlg *)pWnd)->OnDungMoiSetfocus();} */ 
/*static void _OnDungMoiKillfocusFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagramLineDlg *)pWnd)->OnDungMoiKillfocus();
} */
static int _OnDungMoiCheckValueFnc(CWnd *pWnd){
	return ((CHMSCancerTreatDiagramLineDlg *)pWnd)->OnDungMoiCheckValue();
} 
/*static void _OnTheTichChangeFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagramLineDlg *)pWnd)->OnTheTichChange();
} */
/*static void _OnTheTichSetfocusFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagramLineDlg *)pWnd)->OnTheTichSetfocus();} */ 
/*static void _OnTheTichKillfocusFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagramLineDlg *)pWnd)->OnTheTichKillfocus();
} */
static int _OnTheTichCheckValueFnc(CWnd *pWnd){
	return ((CHMSCancerTreatDiagramLineDlg *)pWnd)->OnTheTichCheckValue();
} 
/*static void _OnThoiGianSDChangeFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagramLineDlg *)pWnd)->OnThoiGianSDChange();
} */
/*static void _OnThoiGianSDSetfocusFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagramLineDlg *)pWnd)->OnThoiGianSDSetfocus();} */ 
/*static void _OnThoiGianSDKillfocusFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagramLineDlg *)pWnd)->OnThoiGianSDKillfocus();
} */
static int _OnThoiGianSDCheckValueFnc(CWnd *pWnd){
	return ((CHMSCancerTreatDiagramLineDlg *)pWnd)->OnThoiGianSDCheckValue();
} 
static void _OnReferenceSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSCancerTreatDiagramLineDlg* )pWnd)->OnReferenceSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReferenceSelendokFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagramLineDlg *)pWnd)->OnReferenceSelendok();
}
/*static void _OnReferenceSetfocusFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagramLineDlg *)pWnd)->OnReferenceKillfocus();
}*/
/*static void _OnReferenceKillfocusFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagramLineDlg *)pWnd)->OnReferenceKillfocus();
}*/
static long _OnReferenceLoadDataFnc(CWnd *pWnd){
	return ((CHMSCancerTreatDiagramLineDlg *)pWnd)->OnReferenceLoadData();
}
/*static void _OnReferenceAddNewFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagramLineDlg *)pWnd)->OnReferenceAddNew();
}*/
static void _OnReference2SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSCancerTreatDiagramLineDlg* )pWnd)->OnReference2SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReference2SelendokFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagramLineDlg *)pWnd)->OnReference2Selendok();
}
/*static void _OnReference2SetfocusFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagramLineDlg *)pWnd)->OnReference2Killfocus();
}*/
/*static void _OnReference2KillfocusFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagramLineDlg *)pWnd)->OnReference2Killfocus();
}*/
static long _OnReference2LoadDataFnc(CWnd *pWnd){
	return ((CHMSCancerTreatDiagramLineDlg *)pWnd)->OnReference2LoadData();
}
/*static void _OnReference2AddNewFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagramLineDlg *)pWnd)->OnReference2AddNew();
}*/
static void _OnReference3SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSCancerTreatDiagramLineDlg* )pWnd)->OnReference3SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReference3SelendokFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagramLineDlg *)pWnd)->OnReference3Selendok();
}
/*static void _OnReference3SetfocusFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagramLineDlg *)pWnd)->OnReference3Killfocus();
}*/
/*static void _OnReference3KillfocusFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagramLineDlg *)pWnd)->OnReference3Killfocus();
}*/
static long _OnReference3LoadDataFnc(CWnd *pWnd){
	return ((CHMSCancerTreatDiagramLineDlg *)pWnd)->OnReference3LoadData();
}
/*static void _OnReference3AddNewFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagramLineDlg *)pWnd)->OnReference3AddNew();
}*/
static void _OnReference4SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSCancerTreatDiagramLineDlg* )pWnd)->OnReference4SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReference4SelendokFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagramLineDlg *)pWnd)->OnReference4Selendok();
}
/*static void _OnReference4SetfocusFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagramLineDlg *)pWnd)->OnReference4Killfocus();
}*/
/*static void _OnReference4KillfocusFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagramLineDlg *)pWnd)->OnReference4Killfocus();
}*/
static long _OnReference4LoadDataFnc(CWnd *pWnd){
	return ((CHMSCancerTreatDiagramLineDlg *)pWnd)->OnReference4LoadData();
}
/*static void _OnReference4AddNewFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagramLineDlg *)pWnd)->OnReference4AddNew();
}*/
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSCancerTreatDiagramLineDlg *pVw = (CHMSCancerTreatDiagramLineDlg *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSCancerTreatDiagramLineDlg *pVw = (CHMSCancerTreatDiagramLineDlg *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSCancerTreatDiagramLineDlg *pVw = (CHMSCancerTreatDiagramLineDlg *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSCancerTreatDiagramLineDlgFnc(CWnd *pWnd){
	 return ((CHMSCancerTreatDiagramLineDlg*)pWnd)->OnAddHMSCancerTreatDiagramLineDlg();
} 
static int _OnEditHMSCancerTreatDiagramLineDlgFnc(CWnd *pWnd){
	 return ((CHMSCancerTreatDiagramLineDlg*)pWnd)->OnEditHMSCancerTreatDiagramLineDlg();
} 
static int _OnDeleteHMSCancerTreatDiagramLineDlgFnc(CWnd *pWnd){
	 return ((CHMSCancerTreatDiagramLineDlg*)pWnd)->OnDeleteHMSCancerTreatDiagramLineDlg();
} 
static int _OnSaveHMSCancerTreatDiagramLineDlgFnc(CWnd *pWnd){
	 return ((CHMSCancerTreatDiagramLineDlg*)pWnd)->OnSaveHMSCancerTreatDiagramLineDlg();
} 
static int _OnCancelHMSCancerTreatDiagramLineDlgFnc(CWnd *pWnd){
	 return ((CHMSCancerTreatDiagramLineDlg*)pWnd)->OnCancelHMSCancerTreatDiagramLineDlg();
} 
CHMSCancerTreatDiagramLineDlg::CHMSCancerTreatDiagramLineDlg(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CHMSCancerTreatDiagramLineDlg::~CHMSCancerTreatDiagramLineDlg(){
}
void CHMSCancerTreatDiagramLineDlg::OnCreateComponents(){
	m_wndDiagramDetail.Create(this, _T("Diagram Detail"), 5, 5, 545, 120);
	m_wndDrugNameLabel.Create(this, _T("Drug Name"), 10, 30, 110, 55);
	m_wndDrugName.Create(this,115, 30, 310, 55); 
	m_wndUOMIDLabel.Create(this, _T("UOM ID"), 315, 30, 415, 55);
	m_wndUOMID.Create(this,420, 30, 540, 55); 
	m_wndLDMLabel.Create(this, _T("LD M2"), 10, 60, 110, 85);
	m_wndLDM.Create(this,115, 60, 310, 85); 
	m_wndDungMoiLabel.Create(this, _T("Dung Moi"), 315, 60, 415, 85);
	m_wndDungMoi.Create(this,420, 60, 540, 85); 
	m_wndTheTichLabel.Create(this, _T("The Tich"), 10, 90, 110, 115);
	m_wndTheTich.Create(this,115, 90, 310, 115); 
	m_wndThoiGianSDLabel.Create(this, _T("Thoi gian SD"), 315, 90, 415, 115);
	m_wndThoiGianSD.Create(this,420, 90, 540, 115); 
	m_wndReferenceLabel.Create(this, _T("Reference#"), 10, 119, 110, 144);
	m_wndReference.Create(this,115, 119, 540, 144); 
	m_wndReference2Label.Create(this, _T("Reference#"), 10, 149, 110, 174);
	m_wndReference2.Create(this,115, 149, 540, 174); 
	m_wndReference3Label.Create(this, _T("Reference#"), 10, 179, 110, 204);
	m_wndReference3.Create(this,115, 179, 540, 204); 
	m_wndReference4Label.Create(this, _T("Reference#"), 10, 209, 110, 234);
	m_wndReference4.Create(this,115, 209, 540, 234); 
	m_wndSave.Create(this, _T("Save"), 295, 246, 375, 271);
	m_wndCancel.Create(this, _T("Cancel"), 380, 246, 460, 271);
	m_wndClose.Create(this, _T("Close"), 465, 246, 545, 271);

}
void CHMSCancerTreatDiagramLineDlg::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndDrugName.SetLimitText(1024);
	m_wndDrugName.SetCheckValue(true);
	m_wndUOMID.SetLimitText(1024);
	m_wndLDM.SetLimitText(1024);
	m_wndLDM.SetCheckValue(true);
	m_wndDungMoi.SetLimitText(1024);
	m_wndDungMoi.SetCheckValue(true);
	m_wndTheTich.SetLimitText(22);
	m_wndTheTich.SetCheckValue(true);
	m_wndThoiGianSD.SetLimitText(22);
	m_wndThoiGianSD.SetCheckValue(true);


	m_wndReference.SetCheckValue(true);
	m_wndReference.LimitText(35);
	m_wndReference2.SetCheckValue(false);
	m_wndReference2.LimitText(35);
	m_wndReference3.SetCheckValue(false);
	m_wndReference3.LimitText(35);
	m_wndReference4.SetCheckValue(false);
	m_wndReference4.LimitText(35);


	m_wndReference.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndReference.InsertColumn(1, _T("Name"), CFMT_TEXT, 450);


	m_wndReference2.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndReference2.InsertColumn(1, _T("Name"), CFMT_TEXT, 450);


	m_wndReference3.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndReference3.InsertColumn(1, _T("Name"), CFMT_TEXT, 450);


	m_wndReference4.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndReference4.InsertColumn(1, _T("Name"), CFMT_TEXT, 450);	

	m_hms_cancer_diaglnTbl.SetTableName(_T("HMS_CANCER_TREATDIAGLN"));
	m_hms_cancer_diaglnTbl.AddField(_T("HCTL_ORDER_ID"), dfText, 32);  
	m_hms_cancer_diaglnTbl.AddField(_T("HCTL_TENTHUOC"), dfText, 254); 
	m_hms_cancer_diaglnTbl.AddField(_T("HCTL_DONVI"), dfText, 15); 
	m_hms_cancer_diaglnTbl.AddField(_T("HCTL_LIEUDUNG_M2"), dfLong); 
	m_hms_cancer_diaglnTbl.AddField(_T("HCTL_LIEUDUNG_BN"), dfLong); 
	m_hms_cancer_diaglnTbl.AddField(_T("HCTL_SOLUONG_LINH"), dfLong); 
	m_hms_cancer_diaglnTbl.AddField(_T("HCTL_DUNGMOI"), dfText, 15); 
	m_hms_cancer_diaglnTbl.AddField(_T("HCTL_THETICH"), dfLong); 
	m_hms_cancer_diaglnTbl.AddField(_T("HCTL_THOIGIAN_SD"), dfLong); 
	m_hms_cancer_diaglnTbl.AddField(_T("HCTL_PRODUCT_ID"), dfLong); 
	m_hms_cancer_diaglnTbl.AddField(_T("HCTL_PRODUCT_ID2"), dfLong); 
	m_hms_cancer_diaglnTbl.AddField(_T("HCTL_PRODUCT_ID3"), dfLong); 
	m_hms_cancer_diaglnTbl.AddField(_T("HCTL_PRODUCT_ID4"), dfLong); 

}
void CHMSCancerTreatDiagramLineDlg::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndDrugName.SetEvent(WE_CHANGE, _OnDrugNameChangeFnc);
	//m_wndDrugName.SetEvent(WE_SETFOCUS, _OnDrugNameSetfocusFnc);
	//m_wndDrugName.SetEvent(WE_KILLFOCUS, _OnDrugNameKillfocusFnc);
	m_wndDrugName.SetEvent(WE_CHECKVALUE, _OnDrugNameCheckValueFnc);
	//m_wndUOMID.SetEvent(WE_CHANGE, _OnUOMIDChangeFnc);
	//m_wndUOMID.SetEvent(WE_SETFOCUS, _OnUOMIDSetfocusFnc);
	//m_wndUOMID.SetEvent(WE_KILLFOCUS, _OnUOMIDKillfocusFnc);
	m_wndUOMID.SetEvent(WE_CHECKVALUE, _OnUOMIDCheckValueFnc);
	//m_wndLDM.SetEvent(WE_CHANGE, _OnLDMChangeFnc);
	//m_wndLDM.SetEvent(WE_SETFOCUS, _OnLDMSetfocusFnc);
	//m_wndLDM.SetEvent(WE_KILLFOCUS, _OnLDMKillfocusFnc);
	m_wndLDM.SetEvent(WE_CHECKVALUE, _OnLDMCheckValueFnc);
	//m_wndDungMoi.SetEvent(WE_CHANGE, _OnDungMoiChangeFnc);
	//m_wndDungMoi.SetEvent(WE_SETFOCUS, _OnDungMoiSetfocusFnc);
	//m_wndDungMoi.SetEvent(WE_KILLFOCUS, _OnDungMoiKillfocusFnc);
	m_wndDungMoi.SetEvent(WE_CHECKVALUE, _OnDungMoiCheckValueFnc);
	//m_wndTheTich.SetEvent(WE_CHANGE, _OnTheTichChangeFnc);
	//m_wndTheTich.SetEvent(WE_SETFOCUS, _OnTheTichSetfocusFnc);
	//m_wndTheTich.SetEvent(WE_KILLFOCUS, _OnTheTichKillfocusFnc);
	m_wndTheTich.SetEvent(WE_CHECKVALUE, _OnTheTichCheckValueFnc);
	//m_wndThoiGianSD.SetEvent(WE_CHANGE, _OnThoiGianSDChangeFnc);
	//m_wndThoiGianSD.SetEvent(WE_SETFOCUS, _OnThoiGianSDSetfocusFnc);
	//m_wndThoiGianSD.SetEvent(WE_KILLFOCUS, _OnThoiGianSDKillfocusFnc);
	m_wndThoiGianSD.SetEvent(WE_CHECKVALUE, _OnThoiGianSDCheckValueFnc);
	m_wndReference.SetEvent(WE_SELENDOK, _OnReferenceSelendokFnc);
	//m_wndReference.SetEvent(WE_SETFOCUS, _OnReferenceSetfocusFnc);
	//m_wndReference.SetEvent(WE_KILLFOCUS, _OnReferenceKillfocusFnc);
	m_wndReference.SetEvent(WE_SELCHANGE, _OnReferenceSelectChangeFnc);
	m_wndReference.SetEvent(WE_LOADDATA, _OnReferenceLoadDataFnc);
	//m_wndReference.SetEvent(WE_ADDNEW, _OnReferenceAddNewFnc);
	m_wndReference2.SetEvent(WE_SELENDOK, _OnReference2SelendokFnc);
	//m_wndReference2.SetEvent(WE_SETFOCUS, _OnReference2SetfocusFnc);
	//m_wndReference2.SetEvent(WE_KILLFOCUS, _OnReference2KillfocusFnc);
	m_wndReference2.SetEvent(WE_SELCHANGE, _OnReference2SelectChangeFnc);
	m_wndReference2.SetEvent(WE_LOADDATA, _OnReference2LoadDataFnc);
	//m_wndReference2.SetEvent(WE_ADDNEW, _OnReference2AddNewFnc);
	m_wndReference3.SetEvent(WE_SELENDOK, _OnReference3SelendokFnc);
	//m_wndReference3.SetEvent(WE_SETFOCUS, _OnReference3SetfocusFnc);
	//m_wndReference3.SetEvent(WE_KILLFOCUS, _OnReference3KillfocusFnc);
	m_wndReference3.SetEvent(WE_SELCHANGE, _OnReference3SelectChangeFnc);
	m_wndReference3.SetEvent(WE_LOADDATA, _OnReference3LoadDataFnc);
	//m_wndReference3.SetEvent(WE_ADDNEW, _OnReference3AddNewFnc);
	m_wndReference4.SetEvent(WE_SELENDOK, _OnReference4SelendokFnc);
	//m_wndReference4.SetEvent(WE_SETFOCUS, _OnReference4SetfocusFnc);
	//m_wndReference4.SetEvent(WE_KILLFOCUS, _OnReference4KillfocusFnc);
	m_wndReference4.SetEvent(WE_SELCHANGE, _OnReference4SelectChangeFnc);
	m_wndReference4.SetEvent(WE_LOADDATA, _OnReference4LoadDataFnc);
	//m_wndReference4.SetEvent(WE_ADDNEW, _OnReference4AddNewFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	int nMode = GetMode();
	if(nMode == VM_EDIT || nMode == VM_VIEW)
		GetDataToScreen();

	SetMode(nMode);

}
void CHMSCancerTreatDiagramLineDlg::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndDrugName.GetDlgCtrlID(), m_szDrugName);
	DDX_Text(pDX, m_wndUOMID.GetDlgCtrlID(), m_szUOMID);
	DDX_Text(pDX, m_wndLDM.GetDlgCtrlID(), m_nLDM);
	DDX_Text(pDX, m_wndDungMoi.GetDlgCtrlID(), m_szDungMoi);
	DDX_Text(pDX, m_wndTheTich.GetDlgCtrlID(), m_nTheTich);
	DDX_Text(pDX, m_wndThoiGianSD.GetDlgCtrlID(), m_nThoiGianSD);
	DDX_TextEx(pDX, m_wndReference.GetDlgCtrlID(), m_szReferenceKey);
	DDX_TextEx(pDX, m_wndReference2.GetDlgCtrlID(), m_szReference2Key);
	DDX_TextEx(pDX, m_wndReference3.GetDlgCtrlID(), m_szReference3Key);
	DDX_TextEx(pDX, m_wndReference4.GetDlgCtrlID(), m_szReference4Key);

}
void CHMSCancerTreatDiagramLineDlg::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM HMS_CANCER_TREATDIAGLN WHERE HCTL_ORDERLINE_ID = %ld AND HCTL_ORDER_ID = '%s'"),m_nOrderLineID, m_szOrderID);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("HCTL_TENTHUOC"), m_szDrugName);
		rs.GetValue(_T("HCTL_DONVI"), m_szUOMID);
		rs.GetValue(_T("HCTL_LIEUDUNG_M2"), m_nLDM);
		rs.GetValue(_T("HCTL_DUNGMOI"), m_szDungMoi);
		rs.GetValue(_T("HCTL_THETICH"), m_nTheTich);
		rs.GetValue(_T("HCTL_THOIGIAN_SD"), m_nThoiGianSD);
		rs.GetValue(_T("HCTL_PRODUCT_ID"), m_szReferenceKey);
		rs.GetValue(_T("HCTL_PRODUCT_ID2"), m_szReference2Key);
		rs.GetValue(_T("HCTL_PRODUCT_ID3"), m_szReference3Key);
		rs.GetValue(_T("HCTL_PRODUCT_ID4"), m_szReference4Key);

		UpdateData(FALSE);
	}

}
void CHMSCancerTreatDiagramLineDlg::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);
	m_hms_cancer_diaglnTbl.SetValue(_T("HCTL_ORDER_ID"), m_szOrderID);
	m_hms_cancer_diaglnTbl.SetValue(_T("HCTL_TENTHUOC"), m_szDrugName);
	m_hms_cancer_diaglnTbl.SetValue(_T("HCTL_DONVI"), m_szUOMID);
	m_hms_cancer_diaglnTbl.SetValue(_T("HCTL_LIEUDUNG_M2"), m_nLDM);
	m_hms_cancer_diaglnTbl.SetValue(_T("HCTL_DUNGMOI"), m_szDungMoi);
	m_hms_cancer_diaglnTbl.SetValue(_T("HCTL_THETICH"), m_nTheTich);
	m_hms_cancer_diaglnTbl.SetValue(_T("HCTL_THOIGIAN_SD"), m_nThoiGianSD);
	m_hms_cancer_diaglnTbl.SetValue(_T("HCTL_PRODUCT_ID"), m_szReferenceKey);
	m_hms_cancer_diaglnTbl.SetValue(_T("HCTL_PRODUCT_ID2"), m_szReference2Key);
	m_hms_cancer_diaglnTbl.SetValue(_T("HCTL_PRODUCT_ID3"), m_szReference3Key);
	m_hms_cancer_diaglnTbl.SetValue(_T("HCTL_PRODUCT_ID4"), m_szReference4Key);

}
void CHMSCancerTreatDiagramLineDlg::SetDefaultValues(){

	m_szDrugName.Empty();
	m_szUOMID.Empty();
	m_nLDM=0;
	m_szDungMoi.Empty();
	m_nTheTich=0;
	m_nThoiGianSD=0;
	m_szReferenceKey.Empty();
	m_szReference2Key.Empty();
	m_szReference3Key.Empty();
	m_szReference4Key.Empty();

}
int CHMSCancerTreatDiagramLineDlg::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, 2, -1);
 			SetDefaultValues();
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 3, 4, -1);
			GetDataToScreen();
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
 		UpdateData(FALSE);
 		return nOldMode;
}
/*void CHMSCancerTreatDiagramLineDlg::OnDrugNameChange(){
	
} */
/*void CHMSCancerTreatDiagramLineDlg::OnDrugNameSetfocus(){
	
} */
/*void CHMSCancerTreatDiagramLineDlg::OnDrugNameKillfocus(){
	
} */
int CHMSCancerTreatDiagramLineDlg::OnDrugNameCheckValue(){

	return 0;
} 
/*void CHMSCancerTreatDiagramLineDlg::OnUOMIDChange(){
	
} */
/*void CHMSCancerTreatDiagramLineDlg::OnUOMIDSetfocus(){
	
} */
/*void CHMSCancerTreatDiagramLineDlg::OnUOMIDKillfocus(){
	
} */
int CHMSCancerTreatDiagramLineDlg::OnUOMIDCheckValue(){
	return 0;
} 
/*void CHMSCancerTreatDiagramLineDlg::OnLDMChange(){
	
} */
/*void CHMSCancerTreatDiagramLineDlg::OnLDMSetfocus(){
	
} */
/*void CHMSCancerTreatDiagramLineDlg::OnLDMKillfocus(){
	
} */
int CHMSCancerTreatDiagramLineDlg::OnLDMCheckValue(){
	return 0;
} 
/*void CHMSCancerTreatDiagramLineDlg::OnDungMoiChange(){
	
} */
/*void CHMSCancerTreatDiagramLineDlg::OnDungMoiSetfocus(){
	
} */
/*void CHMSCancerTreatDiagramLineDlg::OnDungMoiKillfocus(){
	
} */
int CHMSCancerTreatDiagramLineDlg::OnDungMoiCheckValue(){
	return 0;
} 
/*void CHMSCancerTreatDiagramLineDlg::OnTheTichChange(){
	
} */
/*void CHMSCancerTreatDiagramLineDlg::OnTheTichSetfocus(){
	
} */
/*void CHMSCancerTreatDiagramLineDlg::OnTheTichKillfocus(){
	
} */
int CHMSCancerTreatDiagramLineDlg::OnTheTichCheckValue(){
	return 0;
} 
/*void CHMSCancerTreatDiagramLineDlg::OnThoiGianSDChange(){
	
} */
/*void CHMSCancerTreatDiagramLineDlg::OnThoiGianSDSetfocus(){
	
} */
/*void CHMSCancerTreatDiagramLineDlg::OnThoiGianSDKillfocus(){
	
} */
int CHMSCancerTreatDiagramLineDlg::OnThoiGianSDCheckValue(){
	return 0;
} 
void CHMSCancerTreatDiagramLineDlg::OnReferenceSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSCancerTreatDiagramLineDlg::OnReferenceSelendok(){
	 
}
/*void CHMSCancerTreatDiagramLineDlg::OnReferenceSetfocus(){
	
}*/
/*void CHMSCancerTreatDiagramLineDlg::OnReferenceKillfocus(){
	
}*/
long CHMSCancerTreatDiagramLineDlg::OnReferenceLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);

	CString szSQL, szWhere;
	if(m_wndReference.IsSearchKey() && !m_szReferenceKey.IsEmpty()){
		 szWhere.Format(_T(" and mp_product_id='%s' "), m_szReferenceKey);
	};
	m_wndReference.DeleteAllItems(); 
	int nCount = 0;

	szSQL.Format(_T(" SELECT mp_product_id             AS product_id,") \
_T("   mp_name||'('||get_uomname(mp_product_uom_id)||')' AS product_name") \
_T(" FROM m_product") \
_T(" WHERE mp_org_id = 'PM' %s ") \
_T(" ORDER BY mp_name"), szWhere);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndReference.AddItems(
			rs.GetValue(_T("product_id")), 
			rs.GetValue(_T("product_name")), NULL);
		rs.MoveNext();
	}
	return nCount;

	return 0;
}
/*void CHMSCancerTreatDiagramLineDlg::OnReferenceAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSCancerTreatDiagramLineDlg::OnReference2SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSCancerTreatDiagramLineDlg::OnReference2Selendok(){
	 
}
/*void CHMSCancerTreatDiagramLineDlg::OnReference2Setfocus(){
	
}*/
/*void CHMSCancerTreatDiagramLineDlg::OnReference2Killfocus(){
	
}*/
long CHMSCancerTreatDiagramLineDlg::OnReference2LoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);

	CString szSQL, szWhere;
	if(m_wndReference2.IsSearchKey() && !m_szReference2Key.IsEmpty()){
		 szWhere.Format(_T(" and mp_product_id='%s' "), m_szReference2Key);
	};
	m_wndReference2.DeleteAllItems(); 
	int nCount = 0;

	szSQL.Format(_T(" SELECT mp_product_id             AS product_id,") \
_T("   mp_name||'('||get_uomname(mp_product_uom_id)||')' AS product_name") \
_T(" FROM m_product") \
_T(" WHERE mp_org_id = 'PM' %s ") \
_T(" ORDER BY mp_name"), szWhere);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndReference2.AddItems(
			rs.GetValue(_T("product_id")), 
			rs.GetValue(_T("product_name")), NULL);
		rs.MoveNext();
	}
	return nCount;

	return 0;
}
/*void CHMSCancerTreatDiagramLineDlg::OnReference2AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSCancerTreatDiagramLineDlg::OnReference3SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSCancerTreatDiagramLineDlg::OnReference3Selendok(){
	 
}
/*void CHMSCancerTreatDiagramLineDlg::OnReference3Setfocus(){
	
}*/
/*void CHMSCancerTreatDiagramLineDlg::OnReference3Killfocus(){
	
}*/
long CHMSCancerTreatDiagramLineDlg::OnReference3LoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);

	CString szSQL, szWhere;
	if(m_wndReference3.IsSearchKey() && !m_szReference3Key.IsEmpty()){
		 szWhere.Format(_T(" and mp_product_id='%s' "), m_szReference3Key);
	};
	m_wndReference3.DeleteAllItems(); 
	int nCount = 0;

	szSQL.Format(_T(" SELECT mp_product_id             AS product_id,") \
_T("   mp_name||'('||get_uomname(mp_product_uom_id)||')' AS product_name") \
_T(" FROM m_product") \
_T(" WHERE mp_org_id = 'PM' %s ") \
_T(" ORDER BY mp_name"), szWhere);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndReference3.AddItems(
			rs.GetValue(_T("product_id")), 
			rs.GetValue(_T("product_name")), NULL);
		rs.MoveNext();
	}
	return nCount;

	return 0;

}
/*void CHMSCancerTreatDiagramLineDlg::OnReference3AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSCancerTreatDiagramLineDlg::OnReference4SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSCancerTreatDiagramLineDlg::OnReference4Selendok(){
	 
}
/*void CHMSCancerTreatDiagramLineDlg::OnReference4Setfocus(){
	
}*/
/*void CHMSCancerTreatDiagramLineDlg::OnReference4Killfocus(){
	
}*/
long CHMSCancerTreatDiagramLineDlg::OnReference4LoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);

	CString szSQL, szWhere;
	if(m_wndReference4.IsSearchKey() && !m_szReference4Key.IsEmpty()){
		 szWhere.Format(_T(" and mp_product_id='%s' "), m_szReference4Key);
	};
	m_wndReference4.DeleteAllItems(); 
	int nCount = 0;

	szSQL.Format(_T(" SELECT mp_product_id             AS product_id,") \
_T("   mp_name||'('||get_uomname(mp_product_uom_id)||')' AS product_name") \
_T(" FROM m_product") \
_T(" WHERE mp_org_id = 'PM' %s ") \
_T(" ORDER BY mp_name"), szWhere);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndReference4.AddItems(
			rs.GetValue(_T("product_id")), 
			rs.GetValue(_T("product_name")), NULL);
		rs.MoveNext();
	}
	return nCount;

	return 0;

}
/*void CHMSCancerTreatDiagramLineDlg::OnReference4AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSCancerTreatDiagramLineDlg::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	int ret = OnSaveHMSCancerTreatDiagramLineDlg();
	if(ret > 0)
	{
		
	}
} 
void CHMSCancerTreatDiagramLineDlg::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSCancerTreatDiagramLineDlg::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSCancerTreatDiagramLineDlg::OnAddHMSCancerTreatDiagramLineDlg(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSCancerTreatDiagramLineDlg::OnEditHMSCancerTreatDiagramLineDlg(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSCancerTreatDiagramLineDlg::OnDeleteHMSCancerTreatDiagramLineDlg(){
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
 		OnCancelHMSCancerTreatDiagramLineDlg();
 	}
	return 0;
}
int CHMSCancerTreatDiagramLineDlg::OnSaveHMSCancerTreatDiagramLineDlg(){
	
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
 		szSQL = m_hms_cancer_diaglnTbl.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
		szWhere.Format(_T(" WHERE HCTL_ORDERLINE_ID = %ld AND HCTL_ORDER_ID = '%s'"), m_nOrderLineID, m_szOrderID);
 		szSQL = m_hms_cancer_diaglnTbl.GetUpdateSQL(_T("HCTL_ORDERLINE_ID, HCTL_ORDER_ID"));
 		szSQL += szWhere;
 	}
 _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
		((CHMSCancerTreatDiagramDialog *)m_pParent)->OnDiagramListDetailLoadData();
 		//OnHMSCancerTreatDiagramLineDlgListLoadData();
 		SetMode(VM_ADD);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSCancerTreatDiagramLineDlg::OnCancelHMSCancerTreatDiagramLineDlg(){
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
int CHMSCancerTreatDiagramLineDlg::OnHMSCancerTreatDiagramLineDlgListLoadData(){
	return 0;
}
