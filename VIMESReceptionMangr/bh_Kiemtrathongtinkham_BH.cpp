#include "bh_Kiemtrathongtinkham_BH.h"
#include "MainFrm.h"

static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((Cbh_Kiemtrathongtinkham_BH*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((Cbh_Kiemtrathongtinkham_BH*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((Cbh_Kiemtrathongtinkham_BH*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((Cbh_Kiemtrathongtinkham_BH*)pWnd)->OnListDeleteItem();
} 
static void _OnOKSelectFnc(CWnd *pWnd){
	Cbh_Kiemtrathongtinkham_BH *pVw = (Cbh_Kiemtrathongtinkham_BH *)pWnd;
	pVw->OnOKSelect();
} 
/*static void _OnTongSoChangeFnc(CWnd *pWnd){
	((Cbh_Kiemtrathongtinkham_BH *)pWnd)->OnTongSoChange();
} */
/*static void _OnTongSoSetfocusFnc(CWnd *pWnd){
	((Cbh_Kiemtrathongtinkham_BH *)pWnd)->OnTongSoSetfocus();} */ 
/*static void _OnTongSoKillfocusFnc(CWnd *pWnd){
	((Cbh_Kiemtrathongtinkham_BH *)pWnd)->OnTongSoKillfocus();
} */
static int _OnTongSoCheckValueFnc(CWnd *pWnd){
	return ((Cbh_Kiemtrathongtinkham_BH *)pWnd)->OnTongSoCheckValue();
} 
/*static void _OnTrangThaiChangeFnc(CWnd *pWnd){
	((Cbh_Kiemtrathongtinkham_BH *)pWnd)->OnTrangThaiChange();
} */
/*static void _OnTrangThaiSetfocusFnc(CWnd *pWnd){
	((Cbh_Kiemtrathongtinkham_BH *)pWnd)->OnTrangThaiSetfocus();} */ 
/*static void _OnTrangThaiKillfocusFnc(CWnd *pWnd){
	((Cbh_Kiemtrathongtinkham_BH *)pWnd)->OnTrangThaiKillfocus();
} */
static int _OnTrangThaiCheckValueFnc(CWnd *pWnd){
	return ((Cbh_Kiemtrathongtinkham_BH *)pWnd)->OnTrangThaiCheckValue();
} 
/*static void _OnPatientNameChangeFnc(CWnd *pWnd){
	((Cbh_Kiemtrathongtinkham_BH *)pWnd)->OnPatientNameChange();
} */
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((Cbh_Kiemtrathongtinkham_BH *)pWnd)->OnPatientNameSetfocus();} */ 
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((Cbh_Kiemtrathongtinkham_BH *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((Cbh_Kiemtrathongtinkham_BH *)pWnd)->OnPatientNameCheckValue();
} 
/*static void _OnAgeChangeFnc(CWnd *pWnd){
	((Cbh_Kiemtrathongtinkham_BH *)pWnd)->OnAgeChange();
} */
/*static void _OnAgeSetfocusFnc(CWnd *pWnd){
	((Cbh_Kiemtrathongtinkham_BH *)pWnd)->OnAgeSetfocus();} */ 
/*static void _OnAgeKillfocusFnc(CWnd *pWnd){
	((Cbh_Kiemtrathongtinkham_BH *)pWnd)->OnAgeKillfocus();
} */
static int _OnAgeCheckValueFnc(CWnd *pWnd){
	return ((Cbh_Kiemtrathongtinkham_BH *)pWnd)->OnAgeCheckValue();
} 
/*static void _OnSexChangeFnc(CWnd *pWnd){
	((Cbh_Kiemtrathongtinkham_BH *)pWnd)->OnSexChange();
} */
/*static void _OnSexSetfocusFnc(CWnd *pWnd){
	((Cbh_Kiemtrathongtinkham_BH *)pWnd)->OnSexSetfocus();} */ 
/*static void _OnSexKillfocusFnc(CWnd *pWnd){
	((Cbh_Kiemtrathongtinkham_BH *)pWnd)->OnSexKillfocus();
} */
static int _OnSexCheckValueFnc(CWnd *pWnd){
	return ((Cbh_Kiemtrathongtinkham_BH *)pWnd)->OnSexCheckValue();
} 
/*static void _OnCardNoChangeFnc(CWnd *pWnd){
	((Cbh_Kiemtrathongtinkham_BH *)pWnd)->OnCardNoChange();
} */
/*static void _OnCardNoSetfocusFnc(CWnd *pWnd){
	((Cbh_Kiemtrathongtinkham_BH *)pWnd)->OnCardNoSetfocus();} */ 
/*static void _OnCardNoKillfocusFnc(CWnd *pWnd){
	((Cbh_Kiemtrathongtinkham_BH *)pWnd)->OnCardNoKillfocus();
} */
static int _OnCardNoCheckValueFnc(CWnd *pWnd){
	return ((Cbh_Kiemtrathongtinkham_BH *)pWnd)->OnCardNoCheckValue();
} 
/*static void _OnAddressChangeFnc(CWnd *pWnd){
	((Cbh_Kiemtrathongtinkham_BH *)pWnd)->OnAddressChange();
} */
/*static void _OnAddressSetfocusFnc(CWnd *pWnd){
	((Cbh_Kiemtrathongtinkham_BH *)pWnd)->OnAddressSetfocus();} */ 
/*static void _OnAddressKillfocusFnc(CWnd *pWnd){
	((Cbh_Kiemtrathongtinkham_BH *)pWnd)->OnAddressKillfocus();
} */
static int _OnAddressCheckValueFnc(CWnd *pWnd){
	return ((Cbh_Kiemtrathongtinkham_BH *)pWnd)->OnAddressCheckValue();
} 
/*static void _OnHospitalNameChangeFnc(CWnd *pWnd){
	((Cbh_Kiemtrathongtinkham_BH *)pWnd)->OnHospitalNameChange();
} */
/*static void _OnHospitalNameSetfocusFnc(CWnd *pWnd){
	((Cbh_Kiemtrathongtinkham_BH *)pWnd)->OnHospitalNameSetfocus();} */ 
/*static void _OnHospitalNameKillfocusFnc(CWnd *pWnd){
	((Cbh_Kiemtrathongtinkham_BH *)pWnd)->OnHospitalNameKillfocus();
} */
static int _OnHospitalNameCheckValueFnc(CWnd *pWnd){
	return ((Cbh_Kiemtrathongtinkham_BH *)pWnd)->OnHospitalNameCheckValue();
} 
/*static void _OnDianosticChangeFnc(CWnd *pWnd){
	((Cbh_Kiemtrathongtinkham_BH *)pWnd)->OnDianosticChange();
} */
/*static void _OnDianosticSetfocusFnc(CWnd *pWnd){
	((Cbh_Kiemtrathongtinkham_BH *)pWnd)->OnDianosticSetfocus();} */ 
/*static void _OnDianosticKillfocusFnc(CWnd *pWnd){
	((Cbh_Kiemtrathongtinkham_BH *)pWnd)->OnDianosticKillfocus();
} */
static int _OnDianosticCheckValueFnc(CWnd *pWnd){
	return ((Cbh_Kiemtrathongtinkham_BH *)pWnd)->OnDianosticCheckValue();
} 
/*static void _OnICDChangeFnc(CWnd *pWnd){
	((Cbh_Kiemtrathongtinkham_BH *)pWnd)->OnICDChange();
} */
/*static void _OnICDSetfocusFnc(CWnd *pWnd){
	((Cbh_Kiemtrathongtinkham_BH *)pWnd)->OnICDSetfocus();} */ 
/*static void _OnICDKillfocusFnc(CWnd *pWnd){
	((Cbh_Kiemtrathongtinkham_BH *)pWnd)->OnICDKillfocus();
} */
static int _OnICDCheckValueFnc(CWnd *pWnd){
	return ((Cbh_Kiemtrathongtinkham_BH *)pWnd)->OnICDCheckValue();
} 
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((Cbh_Kiemtrathongtinkham_BH *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((Cbh_Kiemtrathongtinkham_BH *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((Cbh_Kiemtrathongtinkham_BH *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((Cbh_Kiemtrathongtinkham_BH *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((Cbh_Kiemtrathongtinkham_BH *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((Cbh_Kiemtrathongtinkham_BH *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((Cbh_Kiemtrathongtinkham_BH *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((Cbh_Kiemtrathongtinkham_BH *)pWnd)->OnToDateCheckValue();
} 
/*static void _OnHospitalIDChangeFnc(CWnd *pWnd){
	((Cbh_Kiemtrathongtinkham_BH *)pWnd)->OnHospitalIDChange();
} */
/*static void _OnHospitalIDSetfocusFnc(CWnd *pWnd){
	((Cbh_Kiemtrathongtinkham_BH *)pWnd)->OnHospitalIDSetfocus();} */ 
/*static void _OnHospitalIDKillfocusFnc(CWnd *pWnd){
	((Cbh_Kiemtrathongtinkham_BH *)pWnd)->OnHospitalIDKillfocus();
} */
static int _OnHospitalIDCheckValueFnc(CWnd *pWnd){
	return ((Cbh_Kiemtrathongtinkham_BH *)pWnd)->OnHospitalIDCheckValue();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	Cbh_Kiemtrathongtinkham_BH *pVw = (Cbh_Kiemtrathongtinkham_BH *)pWnd;
	pVw->OnPrintSelect();
} 
static int _OnAddbh_KiemtrathongtinkhamFnc(CWnd *pWnd){
	 return ((Cbh_Kiemtrathongtinkham_BH*)pWnd)->OnAddbh_Kiemtrathongtinkham();
} 
static int _OnEditbh_KiemtrathongtinkhamFnc(CWnd *pWnd){
	 return ((Cbh_Kiemtrathongtinkham_BH*)pWnd)->OnEditbh_Kiemtrathongtinkham();
} 
static int _OnDeletebh_KiemtrathongtinkhamFnc(CWnd *pWnd){
	 return ((Cbh_Kiemtrathongtinkham_BH*)pWnd)->OnDeletebh_Kiemtrathongtinkham();
} 
static int _OnSavebh_KiemtrathongtinkhamFnc(CWnd *pWnd){
	 return ((Cbh_Kiemtrathongtinkham_BH*)pWnd)->OnSavebh_Kiemtrathongtinkham();
} 
static int _OnCancelbh_KiemtrathongtinkhamFnc(CWnd *pWnd){
	 return ((Cbh_Kiemtrathongtinkham_BH*)pWnd)->OnCancelbh_Kiemtrathongtinkham();
} 
Cbh_Kiemtrathongtinkham_BH::Cbh_Kiemtrathongtinkham_BH(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 745;
	m_nDlgHeight = 555;
	SetDefaultValues();
}
Cbh_Kiemtrathongtinkham_BH::~Cbh_Kiemtrathongtinkham_BH(){
}
void Cbh_Kiemtrathongtinkham_BH::OnCreateComponents(){
	m_wndGroupBoxPatientList.Create(this, _T("Patient List"), 5, 60, 735, 515);
	m_wndList.Create(this,10, 80, 730, 330); 
	m_wndOK.Create(this, _T("OK"), 655, 520, 735, 545);
	m_wndTongSoLabel.Create(this, _T("Tong so"), 515, 485, 615, 510);
	m_wndTongSo.Create(this,620, 485, 730, 510); 
	m_wndTrangThaiLabel.Create(this, _T("Trang thai"), 515, 455, 615, 480);
	m_wndTrangThai.Create(this,620, 455, 730, 480); 
	m_wndFromName.Create(this, _T("From Name"), 5, 5, 735, 55);
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 10, 335, 110, 360);
	m_wndPatientName.Create(this,115, 335, 320, 360); 
	m_wndAgeLabel.Create(this, _T("Age"), 325, 335, 425, 360);
	m_wndAge.Create(this,430, 335, 510, 360); 
	m_wndSexLabel.Create(this, _T("Sex"), 515, 335, 615, 360);
	m_wndSex.Create(this,620, 335, 730, 360); 
	m_wndCardNoLabel.Create(this, _T("Card No"), 10, 455, 110, 480);
	m_wndCardNo.Create(this,115, 455, 510, 480); 
	m_wndAddressLabel.Create(this, _T("Address"), 10, 365, 110, 390);
	m_wndAddress.Create(this,115, 365, 735, 390); 
	m_wndHospitalNameLabel.Create(this, _T("Hospital Name"), 10, 395, 110, 420);
	m_wndHospitalName.Create(this,115, 395, 510, 420); 
	m_wndDiagnosticLabel.Create(this, _T("Diagnostic"), 10, 425, 110, 450);
	m_wndDianostic.Create(this,115, 425, 510, 450); 
	m_wndICDLabel.Create(this, _T("ICD"), 515, 425, 615, 450);
	m_wndICD.Create(this,620, 425, 730, 450); 
	m_wndFromDateLabel.Create(this, _T("Admit Date"), 260, 485, 360, 510);
	m_wndFromDate.Create(this,365, 485, 510, 510); 
	m_wndToDateLabel.Create(this, _T("End Date"), 10, 485, 110, 510);
	m_wndToDate.Create(this,115, 485, 255, 510); 
	m_wndHospitalIDLabel.Create(this, _T("Hospital ID"), 515, 395, 615, 420);
	m_wndHospitalID.Create(this,620, 395, 730, 420); 
	m_wndPrint.Create(this, _T("&Print"), 575, 520, 650, 545);
}
void Cbh_Kiemtrathongtinkham_BH::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndTongSo.SetLimitText(16);
	m_wndTongSo.SetCheckValue(true);
	m_wndTrangThai.SetLimitText(35);
	m_wndTrangThai.SetCheckValue(true);
	m_wndPatientName.SetLimitText(35);
	m_wndPatientName.SetCheckValue(true);
	m_wndAge.SetLimitText(35);
	m_wndAge.SetCheckValue(true);
	m_wndSex.SetLimitText(35);
	m_wndSex.SetCheckValue(true);
	m_wndCardNo.SetLimitText(35);
	m_wndCardNo.SetCheckValue(true);
	m_wndAddress.SetLimitText(35);
	m_wndAddress.SetCheckValue(true);
	m_wndHospitalName.SetLimitText(35);
	m_wndHospitalName.SetCheckValue(true);
	m_wndDianostic.SetLimitText(35);
	m_wndDianostic.SetCheckValue(true);
	m_wndICD.SetLimitText(35);
	m_wndICD.SetCheckValue(true);
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	m_wndHospitalID.SetLimitText(35);
	m_wndHospitalID.SetCheckValue(true);

	m_wndList.InsertColumn(0, _T("Patient Name"), CFMT_TEXT, 150);
	m_wndList.InsertColumn(1, _T("Age"), CFMT_DATE, 60);
	m_wndList.InsertColumn(2, _T("Sex"), CFMT_TEXT, 60);
	m_wndList.InsertColumn(3, _T("Card No"), CFMT_TEXT, 150);
	m_wndList.InsertColumn(4, _T("Admit Date"), CFMT_DATETIME, 120);
	m_wndList.InsertColumn(5, _T("End Date"), CFMT_DATETIME, 120);
	m_wndList.InsertColumn(6, _T("Hospital ID"), CFMT_TEXT, 0);
	m_wndList.InsertColumn(7, _T("Hospital"), CFMT_TEXT, 140);
	m_wndList.InsertColumn(8, _T("Diagnostic"), CFMT_TEXT, 150);
	m_wndList.InsertColumn(9, _T("ICD"), CFMT_TEXT, 70);
	m_wndList.InsertColumn(10, _T("Status"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(11, _T("Address"), CFMT_TEXT, 80);

}
void Cbh_Kiemtrathongtinkham_BH::OnSetWindowEvents(){
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndOK.SetEvent(WE_CLICK, _OnOKSelectFnc);
	//m_wndTongSo.SetEvent(WE_CHANGE, _OnTongSoChangeFnc);
	//m_wndTongSo.SetEvent(WE_SETFOCUS, _OnTongSoSetfocusFnc);
	//m_wndTongSo.SetEvent(WE_KILLFOCUS, _OnTongSoKillfocusFnc);
	m_wndTongSo.SetEvent(WE_CHECKVALUE, _OnTongSoCheckValueFnc);
	//m_wndTrangThai.SetEvent(WE_CHANGE, _OnTrangThaiChangeFnc);
	//m_wndTrangThai.SetEvent(WE_SETFOCUS, _OnTrangThaiSetfocusFnc);
	//m_wndTrangThai.SetEvent(WE_KILLFOCUS, _OnTrangThaiKillfocusFnc);
	m_wndTrangThai.SetEvent(WE_CHECKVALUE, _OnTrangThaiCheckValueFnc);
	//m_wndPatientName.SetEvent(WE_CHANGE, _OnPatientNameChangeFnc);
	//m_wndPatientName.SetEvent(WE_SETFOCUS, _OnPatientNameSetfocusFnc);
	//m_wndPatientName.SetEvent(WE_KILLFOCUS, _OnPatientNameKillfocusFnc);
	m_wndPatientName.SetEvent(WE_CHECKVALUE, _OnPatientNameCheckValueFnc);
	//m_wndAge.SetEvent(WE_CHANGE, _OnAgeChangeFnc);
	//m_wndAge.SetEvent(WE_SETFOCUS, _OnAgeSetfocusFnc);
	//m_wndAge.SetEvent(WE_KILLFOCUS, _OnAgeKillfocusFnc);
	m_wndAge.SetEvent(WE_CHECKVALUE, _OnAgeCheckValueFnc);
	//m_wndSex.SetEvent(WE_CHANGE, _OnSexChangeFnc);
	//m_wndSex.SetEvent(WE_SETFOCUS, _OnSexSetfocusFnc);
	//m_wndSex.SetEvent(WE_KILLFOCUS, _OnSexKillfocusFnc);
	m_wndSex.SetEvent(WE_CHECKVALUE, _OnSexCheckValueFnc);
	//m_wndCardNo.SetEvent(WE_CHANGE, _OnCardNoChangeFnc);
	//m_wndCardNo.SetEvent(WE_SETFOCUS, _OnCardNoSetfocusFnc);
	//m_wndCardNo.SetEvent(WE_KILLFOCUS, _OnCardNoKillfocusFnc);
	m_wndCardNo.SetEvent(WE_CHECKVALUE, _OnCardNoCheckValueFnc);
	//m_wndAddress.SetEvent(WE_CHANGE, _OnAddressChangeFnc);
	//m_wndAddress.SetEvent(WE_SETFOCUS, _OnAddressSetfocusFnc);
	//m_wndAddress.SetEvent(WE_KILLFOCUS, _OnAddressKillfocusFnc);
	m_wndAddress.SetEvent(WE_CHECKVALUE, _OnAddressCheckValueFnc);
	//m_wndHospitalName.SetEvent(WE_CHANGE, _OnHospitalNameChangeFnc);
	//m_wndHospitalName.SetEvent(WE_SETFOCUS, _OnHospitalNameSetfocusFnc);
	//m_wndHospitalName.SetEvent(WE_KILLFOCUS, _OnHospitalNameKillfocusFnc);
	m_wndHospitalName.SetEvent(WE_CHECKVALUE, _OnHospitalNameCheckValueFnc);
	//m_wndDianostic.SetEvent(WE_CHANGE, _OnDianosticChangeFnc);
	//m_wndDianostic.SetEvent(WE_SETFOCUS, _OnDianosticSetfocusFnc);
	//m_wndDianostic.SetEvent(WE_KILLFOCUS, _OnDianosticKillfocusFnc);
	m_wndDianostic.SetEvent(WE_CHECKVALUE, _OnDianosticCheckValueFnc);
	//m_wndICD.SetEvent(WE_CHANGE, _OnICDChangeFnc);
	//m_wndICD.SetEvent(WE_SETFOCUS, _OnICDSetfocusFnc);
	//m_wndICD.SetEvent(WE_KILLFOCUS, _OnICDKillfocusFnc);
	m_wndICD.SetEvent(WE_CHECKVALUE, _OnICDCheckValueFnc);
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	//m_wndHospitalID.SetEvent(WE_CHANGE, _OnHospitalIDChangeFnc);
	//m_wndHospitalID.SetEvent(WE_SETFOCUS, _OnHospitalIDSetfocusFnc);
	//m_wndHospitalID.SetEvent(WE_KILLFOCUS, _OnHospitalIDKillfocusFnc);
	m_wndHospitalID.SetEvent(WE_CHECKVALUE, _OnHospitalIDCheckValueFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);

#undef SetWindowFont
	m_wndFromName.ModifyStyle(0, ES_CENTER);
	m_wndFromName.SetWindowText(_T("KI\x1EC2M TR\x41 L\x1ECA\x43H S\x1EEC KH\xC1M \x42\x1EC6NH NH\xC2N"));
	SetWindowFont(&m_wndFromName, GetFaceName(), GetFaceSize()+2, true);
	m_wndFromName.SetTextColor(RGB(255, 0, 0));

	m_wndPatientName.SetTextColor(RGB(0, 0, 255));
	SetWindowFont(&m_wndPatientName, GetFaceName(), GetFaceSize()+4, true);

	SetWindowFont(&m_wndCardNo, GetFaceName(), GetFaceSize()+4, true);	
	m_wndCardNo.SetTextColor(RGB(255, 0, 0));	
	OnListLoadData();

}
void Cbh_Kiemtrathongtinkham_BH::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndTongSo.GetDlgCtrlID(), m_nTongSo);
	DDX_Text(pDX, m_wndTrangThai.GetDlgCtrlID(), m_szTrangThai);
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);
	DDX_Text(pDX, m_wndAge.GetDlgCtrlID(), m_szAge);
	DDX_Text(pDX, m_wndSex.GetDlgCtrlID(), m_szSex);
	DDX_Text(pDX, m_wndCardNo.GetDlgCtrlID(), m_szCardNo);
	DDX_Text(pDX, m_wndAddress.GetDlgCtrlID(), m_szAddress);
	DDX_Text(pDX, m_wndHospitalName.GetDlgCtrlID(), m_szHospitalName);
	DDX_Text(pDX, m_wndDianostic.GetDlgCtrlID(), m_szDianostic);
	DDX_Text(pDX, m_wndICD.GetDlgCtrlID(), m_szICD);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Text(pDX, m_wndHospitalID.GetDlgCtrlID(), m_szHospitalID);

}
void Cbh_Kiemtrathongtinkham_BH::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void Cbh_Kiemtrathongtinkham_BH::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void Cbh_Kiemtrathongtinkham_BH::SetDefaultValues(){

	m_nTongSo=0;
	m_szTrangThai.Empty();
	m_szPatientName.Empty();
	m_szAge.Empty();
	m_szSex.Empty();
	m_szCardNo.Empty();
	m_szAddress.Empty();
	m_szHospitalName.Empty();
	m_szDianostic.Empty();
	m_szICD.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szHospitalID.Empty();

}
int Cbh_Kiemtrathongtinkham_BH::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiDialog::SetMode(nMode); 
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
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
 		UpdateData(FALSE); 
 		return nOldMode; 
}
void Cbh_Kiemtrathongtinkham_BH::OnListDblClick(){
	
} 
void Cbh_Kiemtrathongtinkham_BH::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_szPatientName = m_wndList.GetItemText(nNewItem, 0);
	m_szAge = m_wndList.GetItemText(nNewItem, 1);
	m_szSex = m_wndList.GetItemText(nNewItem, 2);
	m_szCardNo = m_wndList.GetItemText(nNewItem, 3);
	m_szFromDate = m_wndList.GetItemText(nNewItem, 4);
	m_szToDate = m_wndList.GetItemText(nNewItem, 5);
	//m_szAddress = m_wndList.GetItemText(nNewItem, 6);
	m_szHospitalName = m_wndList.GetItemText(nNewItem, 7);
	m_szDianostic = m_wndList.GetItemText(nNewItem, 8);
	m_szICD = m_wndList.GetItemText(nNewItem, 8).Left(5);
	m_szTrangThai = m_wndList.GetItemText(nNewItem, 10);
	m_szHospitalID = m_wndList.GetItemText(nNewItem, 6);
	UpdateData(false);
} 
int Cbh_Kiemtrathongtinkham_BH::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long Cbh_Kiemtrathongtinkham_BH::OnListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL,tmpStr,szSex;
	m_wndList.BeginLoad(); 
	m_wndList.DeleteAllItems(); 
	int nCount = 0;
	for(int i= 0; i < pMF->Patient.GetCount(); i++){
		pMF->patientInfo = pMF->Patient[i];
		szSQL.Format(_T("select hh_name from hms_hospital where hh_id='%s'"),pMF->patientInfo.MABENHVIEN);
		rs.ExecSQL(szSQL);
		rs.GetValue(_T("hh_name"),tmpStr);
		if(pMF->patientInfo.GIOITINH==_T("M"))
			szSex=_T("Nam");
		else
			szSex=_T("N\x1EEF");

		m_wndList.AddItems(
			pMF->patientInfo.HOTEN,
			pMF->patientInfo.NAMSINH,
			szSex,
			pMF->patientInfo.SOTHE,
			pMF->patientInfo.NGAYGIOVAO,
			pMF->patientInfo.NGAYGIORA,
			pMF->patientInfo.MABENHVIEN,
			tmpStr,
			pMF->patientInfo.TENBENH,
			pMF->patientInfo.MABENH,
			pMF->patientInfo.TRANGTHAI,
			pMF->patientInfo.DIACHI,
			NULL);
	}

	
	m_nTongSo = pMF->Patient.GetCount();

	m_wndList.EndLoad(); 

	m_wndList.SetCurSel(m_wndList.GetCurSel());
	return nCount;
}
void Cbh_Kiemtrathongtinkham_BH::OnOKSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnOK();
} 
/*void Cbh_Kiemtrathongtinkham_BH::OnTongSoChange(){
	
} */
/*void Cbh_Kiemtrathongtinkham_BH::OnTongSoSetfocus(){
	
} */
/*void Cbh_Kiemtrathongtinkham_BH::OnTongSoKillfocus(){
	
} */
int Cbh_Kiemtrathongtinkham_BH::OnTongSoCheckValue(){
	return 0;
} 
/*void Cbh_Kiemtrathongtinkham_BH::OnTrangThaiChange(){
	
} */
/*void Cbh_Kiemtrathongtinkham_BH::OnTrangThaiSetfocus(){
	
} */
/*void Cbh_Kiemtrathongtinkham_BH::OnTrangThaiKillfocus(){
	
} */
int Cbh_Kiemtrathongtinkham_BH::OnTrangThaiCheckValue(){
	return 0;
} 
/*void Cbh_Kiemtrathongtinkham_BH::OnPatientNameChange(){
	
} */
/*void Cbh_Kiemtrathongtinkham_BH::OnPatientNameSetfocus(){
	
} */
/*void Cbh_Kiemtrathongtinkham_BH::OnPatientNameKillfocus(){
	
} */
int Cbh_Kiemtrathongtinkham_BH::OnPatientNameCheckValue(){
	return 0;
} 
/*void Cbh_Kiemtrathongtinkham_BH::OnAgeChange(){
	
} */
/*void Cbh_Kiemtrathongtinkham_BH::OnAgeSetfocus(){
	
} */
/*void Cbh_Kiemtrathongtinkham_BH::OnAgeKillfocus(){
	
} */
int Cbh_Kiemtrathongtinkham_BH::OnAgeCheckValue(){
	return 0;
} 
/*void Cbh_Kiemtrathongtinkham_BH::OnSexChange(){
	
} */
/*void Cbh_Kiemtrathongtinkham_BH::OnSexSetfocus(){
	
} */
/*void Cbh_Kiemtrathongtinkham_BH::OnSexKillfocus(){
	
} */
int Cbh_Kiemtrathongtinkham_BH::OnSexCheckValue(){
	return 0;
} 
/*void Cbh_Kiemtrathongtinkham_BH::OnCardNoChange(){
	
} */
/*void Cbh_Kiemtrathongtinkham_BH::OnCardNoSetfocus(){
	
} */
/*void Cbh_Kiemtrathongtinkham_BH::OnCardNoKillfocus(){
	
} */
int Cbh_Kiemtrathongtinkham_BH::OnCardNoCheckValue(){
	return 0;
} 
/*void Cbh_Kiemtrathongtinkham_BH::OnAddressChange(){
	
} */
/*void Cbh_Kiemtrathongtinkham_BH::OnAddressSetfocus(){
	
} */
/*void Cbh_Kiemtrathongtinkham_BH::OnAddressKillfocus(){
	
} */
int Cbh_Kiemtrathongtinkham_BH::OnAddressCheckValue(){
	return 0;
} 
/*void Cbh_Kiemtrathongtinkham_BH::OnHospitalNameChange(){
	
} */
/*void Cbh_Kiemtrathongtinkham_BH::OnHospitalNameSetfocus(){
	
} */
/*void Cbh_Kiemtrathongtinkham_BH::OnHospitalNameKillfocus(){
	
} */
int Cbh_Kiemtrathongtinkham_BH::OnHospitalNameCheckValue(){
	return 0;
} 
/*void Cbh_Kiemtrathongtinkham_BH::OnDianosticChange(){
	
} */
/*void Cbh_Kiemtrathongtinkham_BH::OnDianosticSetfocus(){
	
} */
/*void Cbh_Kiemtrathongtinkham_BH::OnDianosticKillfocus(){
	
} */
int Cbh_Kiemtrathongtinkham_BH::OnDianosticCheckValue(){
	return 0;
} 
/*void Cbh_Kiemtrathongtinkham_BH::OnICDChange(){
	
} */
/*void Cbh_Kiemtrathongtinkham_BH::OnICDSetfocus(){
	
} */
/*void Cbh_Kiemtrathongtinkham_BH::OnICDKillfocus(){
	
} */
int Cbh_Kiemtrathongtinkham_BH::OnICDCheckValue(){
	return 0;
} 
/*void Cbh_Kiemtrathongtinkham_BH::OnFromDateChange(){
	
} */
/*void Cbh_Kiemtrathongtinkham_BH::OnFromDateSetfocus(){
	
} */
/*void Cbh_Kiemtrathongtinkham_BH::OnFromDateKillfocus(){
	
} */
int Cbh_Kiemtrathongtinkham_BH::OnFromDateCheckValue(){
	return 0;
} 
/*void Cbh_Kiemtrathongtinkham_BH::OnToDateChange(){
	
} */
/*void Cbh_Kiemtrathongtinkham_BH::OnToDateSetfocus(){
	
} */
/*void Cbh_Kiemtrathongtinkham_BH::OnToDateKillfocus(){
	
} */
int Cbh_Kiemtrathongtinkham_BH::OnToDateCheckValue(){
	return 0;
} 
/*void Cbh_Kiemtrathongtinkham_BH::OnHospitalIDChange(){
	
} */
/*void Cbh_Kiemtrathongtinkham_BH::OnHospitalIDSetfocus(){
	
} */
/*void Cbh_Kiemtrathongtinkham_BH::OnHospitalIDKillfocus(){
	
} */
int Cbh_Kiemtrathongtinkham_BH::OnHospitalIDCheckValue(){
	return 0;
} 
void Cbh_Kiemtrathongtinkham_BH::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int Cbh_Kiemtrathongtinkham_BH::OnAddbh_Kiemtrathongtinkham(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int Cbh_Kiemtrathongtinkham_BH::OnEditbh_Kiemtrathongtinkham(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int Cbh_Kiemtrathongtinkham_BH::OnDeletebh_Kiemtrathongtinkham(){
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
 		OnCancelbh_Kiemtrathongtinkham(); 
 	}
	return 0;
}
int Cbh_Kiemtrathongtinkham_BH::OnSavebh_Kiemtrathongtinkham(){
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
 		//Onbh_KiemtrathongtinkhamListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int Cbh_Kiemtrathongtinkham_BH::OnCancelbh_Kiemtrathongtinkham(){
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
int Cbh_Kiemtrathongtinkham_BH::Onbh_KiemtrathongtinkhamListLoadData(){
	return 0;
}
