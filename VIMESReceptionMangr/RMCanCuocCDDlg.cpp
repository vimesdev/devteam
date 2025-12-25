#include "RMCanCuocCDDlg.h"
#include "MainFrm.h"
#include <afxinet.h>
#include "json.h"
#include "HMSCardInfoCheckIns.h"
#include "StringToken.h"
/*static void _OnCCCDChangeFnc(CWnd *pWnd){
	((CRMCanCuocCDDlg *)pWnd)->OnCCCDChange();
} */
/*static void _OnCCCDSetfocusFnc(CWnd *pWnd){
	((CRMCanCuocCDDlg *)pWnd)->OnCCCDSetfocus();} */ 
/*static void _OnCCCDKillfocusFnc(CWnd *pWnd){
	((CRMCanCuocCDDlg *)pWnd)->OnCCCDKillfocus();
} */
static int _OnCCCDCheckValueFnc(CWnd *pWnd){
	return ((CRMCanCuocCDDlg *)pWnd)->OnCCCDCheckValue();
} 
/*static void _OnPatientNameChangeFnc(CWnd *pWnd){
	((CRMCanCuocCDDlg *)pWnd)->OnPatientNameChange();
} */
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CRMCanCuocCDDlg *)pWnd)->OnPatientNameSetfocus();} */ 
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((CRMCanCuocCDDlg *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((CRMCanCuocCDDlg *)pWnd)->OnPatientNameCheckValue();
} 
/*static void _OnBirthDateChangeFnc(CWnd *pWnd){
	((CRMCanCuocCDDlg *)pWnd)->OnBirthDateChange();
} */
/*static void _OnBirthDateSetfocusFnc(CWnd *pWnd){
	((CRMCanCuocCDDlg *)pWnd)->OnBirthDateSetfocus();} */ 
/*static void _OnBirthDateKillfocusFnc(CWnd *pWnd){
	((CRMCanCuocCDDlg *)pWnd)->OnBirthDateKillfocus();
} */
static int _OnBirthDateCheckValueFnc(CWnd *pWnd){
	return ((CRMCanCuocCDDlg *)pWnd)->OnBirthDateCheckValue();
} 
static void _OnSexSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CRMCanCuocCDDlg* )pWnd)->OnSexSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSexSelendokFnc(CWnd *pWnd){
	((CRMCanCuocCDDlg *)pWnd)->OnSexSelendok();
}
/*static void _OnSexSetfocusFnc(CWnd *pWnd){
	((CRMCanCuocCDDlg *)pWnd)->OnSexKillfocus();
}*/
/*static void _OnSexKillfocusFnc(CWnd *pWnd){
	((CRMCanCuocCDDlg *)pWnd)->OnSexKillfocus();
}*/
static long _OnSexLoadDataFnc(CWnd *pWnd){
	return ((CRMCanCuocCDDlg *)pWnd)->OnSexLoadData();
}
/*static void _OnSexAddNewFnc(CWnd *pWnd){
	((CRMCanCuocCDDlg *)pWnd)->OnSexAddNew();
}*/
static void _OnEthnicSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CRMCanCuocCDDlg* )pWnd)->OnEthnicSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnEthnicSelendokFnc(CWnd *pWnd){
	((CRMCanCuocCDDlg *)pWnd)->OnEthnicSelendok();
}
/*static void _OnEthnicSetfocusFnc(CWnd *pWnd){
	((CRMCanCuocCDDlg *)pWnd)->OnEthnicKillfocus();
}*/
/*static void _OnEthnicKillfocusFnc(CWnd *pWnd){
	((CRMCanCuocCDDlg *)pWnd)->OnEthnicKillfocus();
}*/
static long _OnEthnicLoadDataFnc(CWnd *pWnd){
	return ((CRMCanCuocCDDlg *)pWnd)->OnEthnicLoadData();
}
/*static void _OnEthnicAddNewFnc(CWnd *pWnd){
	((CRMCanCuocCDDlg *)pWnd)->OnEthnicAddNew();
}*/																				   
/*static void _OnAddressChangeFnc(CWnd *pWnd){
	((CRMCanCuocCDDlg *)pWnd)->OnAddressChange();
} */
/*static void _OnAddressSetfocusFnc(CWnd *pWnd){
	((CRMCanCuocCDDlg *)pWnd)->OnAddressSetfocus();} */ 
/*static void _OnAddressKillfocusFnc(CWnd *pWnd){
	((CRMCanCuocCDDlg *)pWnd)->OnAddressKillfocus();
} */
static int _OnAddressCheckValueFnc(CWnd *pWnd){
	return ((CRMCanCuocCDDlg *)pWnd)->OnAddressCheckValue();
} 
/*static void _OnCardnoChangeFnc(CWnd *pWnd){
	((CRMCanCuocCDDlg *)pWnd)->OnCardnoChange();
} */
/*static void _OnCardnoSetfocusFnc(CWnd *pWnd){
	((CRMCanCuocCDDlg *)pWnd)->OnCardnoSetfocus();} */ 
/*static void _OnCardnoKillfocusFnc(CWnd *pWnd){
	((CRMCanCuocCDDlg *)pWnd)->OnCardnoKillfocus();
} */
static int _OnCardnoCheckValueFnc(CWnd *pWnd){
	return ((CRMCanCuocCDDlg *)pWnd)->OnCardnoCheckValue();
} 
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CRMCanCuocCDDlg *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CRMCanCuocCDDlg *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CRMCanCuocCDDlg *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CRMCanCuocCDDlg *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CRMCanCuocCDDlg *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CRMCanCuocCDDlg *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CRMCanCuocCDDlg *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CRMCanCuocCDDlg *)pWnd)->OnToDateCheckValue();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CRMCanCuocCDDlg*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CRMCanCuocCDDlg*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CRMCanCuocCDDlg*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CRMCanCuocCDDlg*)pWnd)->OnListDeleteItem();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CRMCanCuocCDDlg *pVw = (CRMCanCuocCDDlg *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CRMCanCuocCDDlg *pVw = (CRMCanCuocCDDlg *)pWnd;
	pVw->OnCloseSelect();
} 
static void _OnCheckinSelectFnc(CWnd *pWnd){
	CRMCanCuocCDDlg *pVw = (CRMCanCuocCDDlg *)pWnd;
	pVw->OnCheckinSelect();
} 
static void _OnRegCodeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CRMCanCuocCDDlg* )pWnd)->OnRegCodeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnRegCodeSelendokFnc(CWnd *pWnd){
	((CRMCanCuocCDDlg *)pWnd)->OnRegCodeSelendok();
}
/*static void _OnRegCodeSetfocusFnc(CWnd *pWnd){
	((CRMCanCuocCDDlg *)pWnd)->OnRegCodeKillfocus();
}*/
/*static void _OnRegCodeKillfocusFnc(CWnd *pWnd){
	((CRMCanCuocCDDlg *)pWnd)->OnRegCodeKillfocus();
}*/
static long _OnRegCodeLoadDataFnc(CWnd *pWnd){
	return ((CRMCanCuocCDDlg *)pWnd)->OnRegCodeLoadData();
}
/*static void _OnRegCodeAddNewFnc(CWnd *pWnd){
	((CRMCanCuocCDDlg *)pWnd)->OnRegCodeAddNew();
}*/
static void _OnAreaSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CRMCanCuocCDDlg* )pWnd)->OnAreaSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnAreaSelendokFnc(CWnd *pWnd){
	((CRMCanCuocCDDlg *)pWnd)->OnAreaSelendok();
}
/*static void _OnAreaSetfocusFnc(CWnd *pWnd){
	((CRMCanCuocCDDlg *)pWnd)->OnAreaKillfocus();
}*/
/*static void _OnAreaKillfocusFnc(CWnd *pWnd){
	((CRMCanCuocCDDlg *)pWnd)->OnAreaKillfocus();
}*/
static long _OnAreaLoadDataFnc(CWnd *pWnd){
	return ((CRMCanCuocCDDlg *)pWnd)->OnAreaLoadData();
}
/*static void _OnAreaAddNewFnc(CWnd *pWnd){
	((CRMCanCuocCDDlg *)pWnd)->OnAreaAddNew();
}*/
static int _OnAddRMCanCuocCDDlgFnc(CWnd *pWnd){
	 return ((CRMCanCuocCDDlg*)pWnd)->OnAddRMCanCuocCDDlg();
} 
static int _OnEditRMCanCuocCDDlgFnc(CWnd *pWnd){
	 return ((CRMCanCuocCDDlg*)pWnd)->OnEditRMCanCuocCDDlg();
} 
static int _OnDeleteRMCanCuocCDDlgFnc(CWnd *pWnd){
	 return ((CRMCanCuocCDDlg*)pWnd)->OnDeleteRMCanCuocCDDlg();
} 
static int _OnSaveRMCanCuocCDDlgFnc(CWnd *pWnd){
	 return ((CRMCanCuocCDDlg*)pWnd)->OnSaveRMCanCuocCDDlg();
} 
static int _OnCancelRMCanCuocCDDlgFnc(CWnd *pWnd){
	 return ((CRMCanCuocCDDlg*)pWnd)->OnCancelRMCanCuocCDDlg();
} 
CRMCanCuocCDDlg::CRMCanCuocCDDlg(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CRMCanCuocCDDlg::~CRMCanCuocCDDlg(){
}
void CRMCanCuocCDDlg::OnCreateComponents(){
	m_wndPatientInfor.Create(this, _T("Patient Infor"), 5, 5, 525, 150);
	m_wndCardInfor.Create(this, _T("Card Infor"), 530, 5, 1005, 150);
	m_wndCCCDLabel.Create(this, _T("CCCD"), 10, 30, 130, 55);
	m_wndCCCD.Create(this,135, 30, 520, 55); 
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 10, 60, 130, 85);
	m_wndPatientName.Create(this,135, 60, 520, 85); 
	m_wndBirthDateLabel.Create(this, _T("Birth Date"), 10, 90, 130, 115);
	m_wndBirthDate.Create(this,135, 90, 240, 115); 
	m_wndSexLabel.Create(this, _T("Sex"), 245, 90, 280, 115);
	m_wndSex.Create(this,285, 90, 350, 115); 
	m_wndEthnicLabel.Create(this, _T("Ethnic"), 355, 90, 435, 115);
	m_wndEthnic.Create(this,440, 90, 520, 115); 
	m_wndAddressLabel.Create(this, _T("Address"), 10, 120, 130, 145);
	m_wndAddress.Create(this,135, 120, 520, 145); 
	m_wndCardnoLabel.Create(this, _T("CardNo"), 535, 30, 615, 55);
	m_wndCardno.Create(this,620, 29, 910, 54); 
	m_wndCheckin.Create(this, _T("Checkin"), 915, 30, 1000, 55);
	m_wndFromDateLabel.Create(this, _T("From Date"), 535, 60, 615, 85);
	m_wndFromDate.Create(this,620, 60, 745, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 750, 60, 830, 85);
	m_wndToDate.Create(this,835, 60, 1000, 85); 
	m_wndRegCodeLabel.Create(this, _T("RegCode"), 535, 90, 615, 115);
	m_wndRegCode.Create(this,620, 90, 1000, 115); 
	m_wndAreaLabel.Create(this, _T("Area"), 535, 120, 615, 145);
	m_wndArea.Create(this,620, 120, 745, 145); 
	m_wndDiscountLabel.Create(this, _T("Discount"), 750, 120, 830, 145);
	m_wndDiscount.Create(this,835, 120, 1000, 145); 
	m_wndAdd.Create(this, _T("&Apply"), 840, 410, 920, 435);
	m_wndClose.Create(this, _T("&Close"), 925, 410, 1005, 435);
	m_wndList.Create(this,5, 155, 1005, 405);

}
void CRMCanCuocCDDlg::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndCCCD.SetLimitText(35);
	m_wndCCCD.SetCheckValue(true);
	m_wndPatientName.SetLimitText(35);
	m_wndPatientName.SetCheckValue(true);
	m_wndBirthDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndBirthDate.SetCheckValue(true);
	m_wndSex.SetCheckValue(true);
	m_wndSex.LimitText(35);
	m_wndAddress.SetLimitText(35);
	m_wndAddress.SetCheckValue(true);
	m_wndCardno.SetLimitText(35);
	m_wndCardno.SetCheckValue(true);
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
	m_wndRegCode.SetCheckValue(true);
	m_wndRegCode.LimitText(35);
	m_wndArea.SetCheckValue(true);
	m_wndArea.LimitText(35);


	m_wndSex.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndSex.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndEthnic.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndEthnic.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndList.InsertColumn(0, _T("Mã BN"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(1, _T("Tên Bệnh nhân"), CFMT_TEXT, 250);
	m_wndList.InsertColumn(2, _T("Ngày sinh"), CFMT_DATE, 125);
	m_wndList.InsertColumn(3, _T("Số Hồ Sơ"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(4, _T("CardNo"), CFMT_TEXT, 200);
	m_wndList.InsertColumn(5, _T("Ngày khám"), CFMT_DATE, 125);


	m_wndRegCode.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndRegCode.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndArea.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndArea.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CRMCanCuocCDDlg::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndCCCD.SetEvent(WE_CHANGE, _OnCCCDChangeFnc);
	//m_wndCCCD.SetEvent(WE_SETFOCUS, _OnCCCDSetfocusFnc);
	//m_wndCCCD.SetEvent(WE_KILLFOCUS, _OnCCCDKillfocusFnc);
	m_wndCCCD.SetEvent(WE_CHECKVALUE, _OnCCCDCheckValueFnc);
	//m_wndPatientName.SetEvent(WE_CHANGE, _OnPatientNameChangeFnc);
	//m_wndPatientName.SetEvent(WE_SETFOCUS, _OnPatientNameSetfocusFnc);
	//m_wndPatientName.SetEvent(WE_KILLFOCUS, _OnPatientNameKillfocusFnc);
	m_wndPatientName.SetEvent(WE_CHECKVALUE, _OnPatientNameCheckValueFnc);
	//m_wndBirthDate.SetEvent(WE_CHANGE, _OnBirthDateChangeFnc);
	//m_wndBirthDate.SetEvent(WE_SETFOCUS, _OnBirthDateSetfocusFnc);
	//m_wndBirthDate.SetEvent(WE_KILLFOCUS, _OnBirthDateKillfocusFnc);
	m_wndBirthDate.SetEvent(WE_CHECKVALUE, _OnBirthDateCheckValueFnc);
	m_wndSex.SetEvent(WE_SELENDOK, _OnSexSelendokFnc);
	//m_wndSex.SetEvent(WE_SETFOCUS, _OnSexSetfocusFnc);
	//m_wndSex.SetEvent(WE_KILLFOCUS, _OnSexKillfocusFnc);
	m_wndSex.SetEvent(WE_SELCHANGE, _OnSexSelectChangeFnc);
	m_wndSex.SetEvent(WE_LOADDATA, _OnSexLoadDataFnc);
	//m_wndSex.SetEvent(WE_ADDNEW, _OnSexAddNewFnc);
	m_wndEthnic.SetEvent(WE_SELENDOK, _OnEthnicSelendokFnc);
	//m_wndEthnic.SetEvent(WE_SETFOCUS, _OnEthnicSetfocusFnc);
	//m_wndEthnic.SetEvent(WE_KILLFOCUS, _OnEthnicKillfocusFnc);
	m_wndEthnic.SetEvent(WE_SELCHANGE, _OnEthnicSelectChangeFnc);
	m_wndEthnic.SetEvent(WE_LOADDATA, _OnEthnicLoadDataFnc);
	//m_wndEthnic.SetEvent(WE_ADDNEW, _OnEthnicAddNewFnc);														 
	//m_wndAddress.SetEvent(WE_CHANGE, _OnAddressChangeFnc);
	//m_wndAddress.SetEvent(WE_SETFOCUS, _OnAddressSetfocusFnc);
	//m_wndAddress.SetEvent(WE_KILLFOCUS, _OnAddressKillfocusFnc);
	m_wndAddress.SetEvent(WE_CHECKVALUE, _OnAddressCheckValueFnc);
	//m_wndCardno.SetEvent(WE_CHANGE, _OnCardnoChangeFnc);
	//m_wndCardno.SetEvent(WE_SETFOCUS, _OnCardnoSetfocusFnc);
	//m_wndCardno.SetEvent(WE_KILLFOCUS, _OnCardnoKillfocusFnc);
	m_wndCardno.SetEvent(WE_CHECKVALUE, _OnCardnoCheckValueFnc);
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndCheckin.SetEvent(WE_CLICK, _OnCheckinSelectFnc);
	m_wndRegCode.SetEvent(WE_SELENDOK, _OnRegCodeSelendokFnc);
	//m_wndRegCode.SetEvent(WE_SETFOCUS, _OnRegCodeSetfocusFnc);
	//m_wndRegCode.SetEvent(WE_KILLFOCUS, _OnRegCodeKillfocusFnc);
	m_wndRegCode.SetEvent(WE_SELCHANGE, _OnRegCodeSelectChangeFnc);
	m_wndRegCode.SetEvent(WE_LOADDATA, _OnRegCodeLoadDataFnc);
	//m_wndRegCode.SetEvent(WE_ADDNEW, _OnRegCodeAddNewFnc);
	m_wndArea.SetEvent(WE_SELENDOK, _OnAreaSelendokFnc);
	//m_wndArea.SetEvent(WE_SETFOCUS, _OnAreaSetfocusFnc);
	//m_wndArea.SetEvent(WE_KILLFOCUS, _OnAreaKillfocusFnc);
	m_wndArea.SetEvent(WE_SELCHANGE, _OnAreaSelectChangeFnc);
	m_wndArea.SetEvent(WE_LOADDATA, _OnAreaLoadDataFnc);
	//m_wndArea.SetEvent(WE_ADDNEW, _OnAreaAddNewFnc);
	GetDataToScreen();
	SetMode(VM_EDIT);
	CString szSQL;
	CRecord rs(&pMF->m_db);
	szSQL.Format(_T("SELECT gd.*, md5(hhgd_password) as password ") \
				_T(" FROM hms_hospital_gdbhyt gd WHERe hhgd_active = 'Y' "));
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("hhgd_url"), m_szURL);
		rs.GetValue(_T("hhgd_userid"), m_szUserName);
		rs.GetValue(_T("password"), m_szPassword);
	}
	/*
	m_szURL = pMF->m_szURLBH;
	m_szPassword = pMF->m_szPasswordBH;
	m_szUserName = pMF->m_szUserNameBH;
	*/
	OnListLoadData();

}
void CRMCanCuocCDDlg::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndCCCD.GetDlgCtrlID(), m_szCCCD);
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);
	DDX_Text(pDX, m_wndDiscount.GetDlgCtrlID(), m_nDiscount);
	DDX_TextEx(pDX, m_wndBirthDate.GetDlgCtrlID(), m_szBirthDate);
	DDX_TextEx(pDX, m_wndSex.GetDlgCtrlID(), m_szSexKey);
	DDX_TextEx(pDX, m_wndEthnic.GetDlgCtrlID(), m_szEthnicKey);															
	DDX_Text(pDX, m_wndAddress.GetDlgCtrlID(), m_szAddress);
	DDX_Text(pDX, m_wndCardno.GetDlgCtrlID(), m_szCardno);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndRegCode.GetDlgCtrlID(), m_szRegCodeKey);
	DDX_TextEx(pDX, m_wndArea.GetDlgCtrlID(), m_szAreaKey);
}
void CRMCanCuocCDDlg::UpdateJson(BOOL bSave){
	if(bSave)
	{	
		UpdateData();
		m_jData[_T("CCCD")] =  m_szCCCD;
		m_jData[_T("PatientName")] =  m_szPatientName;
		m_jData[_T("BirthDate")] =  m_szBirthDate;
		m_jData[_T("Sex")] =  m_szSexKey;
		m_jData[_T("Address")] =  m_szAddress;
		m_jData[_T("Cardno")] =  m_szCardno;
		m_jData[_T("FromDate")] =  m_szFromDate;
		m_jData[_T("ToDate")] =  m_szToDate;
		m_jData[_T("RegCode")] =  m_szRegCodeKey;
		m_jData[_T("Area")] =  m_szAreaKey;
	}
	else
	{		
		m_jData[_T("CCCD")].GetValue(m_szCCCD);
		m_jData[_T("PatientName")].GetValue(m_szPatientName);
		m_jData[_T("BirthDate")].GetValue(m_szBirthDate);
		m_jData[_T("Sex")].GetValue(m_szSexKey);
		m_jData[_T("Address")].GetValue(m_szAddress);
		m_jData[_T("Cardno")].GetValue(m_szCardno);
		m_jData[_T("FromDate")].GetValue(m_szFromDate);
		m_jData[_T("ToDate")].GetValue(m_szToDate);
		m_jData[_T("RegCode")].GetValue(m_szRegCodeKey);
		m_jData[_T("Area")].GetValue(m_szAreaKey);
		UpdateData(FALSE);
	}

}
void CRMCanCuocCDDlg::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szValue;
	szSQL.Format(_T("SELECT * FROM "));
	//rs.ExecSQL(szSQL);

	CStringToken info(m_szQrInput,L"|");
	CDate dte;
	info.GetAt(2, m_szPatientName);
	info.GetAt(3, szValue);
	m_szBirthDate.Format(_T("%s/%s/%s")
		, szValue.Right(4), szValue.Mid(2, 2), szValue.Left(2));
	info.GetAt(4, szValue);
	if (szValue == _T("Nam") || szValue == _T("NAM"))
		m_szSexKey = _T("M");
	else
		m_szSexKey = _T("F");
	info.GetAt(5, m_szAddress);
	info.GetAt(6, szValue);
	m_szIdCardIssueDate.Format(_T("%s/%s/%s")
		, szValue.Right(4), szValue.Mid(2, 2), szValue.Left(2));
	info.GetAt(7, szValue);
	szSQL.Format(
		_T(" SELECT ss_code") \
		_T("   FROM sys_sel") \
		_T("  WHERE ss_id = 'sys_ethnic' AND Lower (ss_desc) = Lower ('%s')")
		, szValue);
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("ss_code"), m_szEthnicKey);
	UpdateData(FALSE);
}
void CRMCanCuocCDDlg::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CRMCanCuocCDDlg::SetDefaultValues(){

	m_szCCCD.Empty();
	m_szPatientName.Empty();
	m_szBirthDate.Empty();
	m_szSexKey.Empty();
	m_szEthnicKey.Empty();					   
	m_szAddress.Empty();
	m_szCardno.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szRegCodeKey.Empty();
	m_szAreaKey.Empty();
	m_nDiscount = 100;

}
int CRMCanCuocCDDlg::SetMode(int nMode){
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
 			EnableButtons(TRUE, 0, 1,2, -1);
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
/*void CRMCanCuocCDDlg::OnCCCDChange(){
	
} */
/*void CRMCanCuocCDDlg::OnCCCDSetfocus(){
	
} */
/*void CRMCanCuocCDDlg::OnCCCDKillfocus(){
	
} */
int CRMCanCuocCDDlg::OnCCCDCheckValue(){
	return 0;
} 
/*void CRMCanCuocCDDlg::OnPatientNameChange(){
	
} */
/*void CRMCanCuocCDDlg::OnPatientNameSetfocus(){
	
} */
/*void CRMCanCuocCDDlg::OnPatientNameKillfocus(){
	
} */
int CRMCanCuocCDDlg::OnPatientNameCheckValue(){
	return 0;
} 
/*void CRMCanCuocCDDlg::OnBirthDateChange(){
	
} */
/*void CRMCanCuocCDDlg::OnBirthDateSetfocus(){
	
} */
/*void CRMCanCuocCDDlg::OnBirthDateKillfocus(){
	
} */
int CRMCanCuocCDDlg::OnBirthDateCheckValue(){
	return 0;
} 
void CRMCanCuocCDDlg::OnSexSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CRMCanCuocCDDlg::OnSexSelendok(){
	 
}
/*void CRMCanCuocCDDlg::OnSexSetfocus(){
	
}*/
/*void CRMCanCuocCDDlg::OnSexKillfocus(){
	
}*/
long CRMCanCuocCDDlg::OnSexLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndSex.IsSearchKey() && !m_szSexKey.IsEmpty()){
		szWhere.Format(_T(" AND ss_code='%s' "), m_szSexKey);
	};
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ss_id='sys_sex' %s ORDER BY ss_code "), szWhere);
	m_wndSex.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndSex.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CRMCanCuocCDDlg::OnSexAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CRMCanCuocCDDlg::OnEthnicSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CRMCanCuocCDDlg::OnEthnicSelendok(){
	 
}
/*void CRMCanCuocCDDlg::OnEthnicSetfocus(){
	
}*/
/*void CRMCanCuocCDDlg::OnEthnicKillfocus(){
	
}*/
long CRMCanCuocCDDlg::OnEthnicLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndEthnic.IsSearchKey() && !m_szEthnicKey.IsEmpty()){
		szWhere.Format(_T(" AND ss_code='%s' "), m_szEthnicKey);
	};
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ss_id='sys_ethnic' %s ORDER BY cast(ss_code as integer) "),szWhere);
	m_wndEthnic.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndEthnic.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CRMCanCuocCDDlg::OnEthnicAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CRMCanCuocCDDlg::OnAddressChange(){
	
} */
/*void CRMCanCuocCDDlg::OnAddressSetfocus(){
	
} */
/*void CRMCanCuocCDDlg::OnAddressKillfocus(){
	
} */
int CRMCanCuocCDDlg::OnAddressCheckValue(){
	return 0;
} 
/*void CRMCanCuocCDDlg::OnCardnoChange(){
	
} */
/*void CRMCanCuocCDDlg::OnCardnoSetfocus(){
	
} */
/*void CRMCanCuocCDDlg::OnCardnoKillfocus(){
	
} */
int CRMCanCuocCDDlg::OnCardnoCheckValue(){
	return 0;
} 
/*void CRMCanCuocCDDlg::OnFromDateChange(){
	
} */
/*void CRMCanCuocCDDlg::OnFromDateSetfocus(){
	
} */
/*void CRMCanCuocCDDlg::OnFromDateKillfocus(){
	
} */
int CRMCanCuocCDDlg::OnFromDateCheckValue(){
	return 0;
} 
/*void CRMCanCuocCDDlg::OnToDateChange(){
	
} */
/*void CRMCanCuocCDDlg::OnToDateSetfocus(){
	
} */
/*void CRMCanCuocCDDlg::OnToDateKillfocus(){
	
} */
int CRMCanCuocCDDlg::OnToDateCheckValue(){
	return 0;
} 
void CRMCanCuocCDDlg::OnListDblClick(){
	OnAddSelect();
	
} 
void CRMCanCuocCDDlg::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CRMCanCuocCDDlg::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CRMCanCuocCDDlg::OnListLoadData(){

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL,szWhere;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	if(!m_szCardno.IsEmpty())
		szWhere.Format(_T(" or (substr(hd_cardno,6,10) =  substr('%s',6,10) ) "), m_szCardno);
	szSQL.Format(_T("Select distinct hp_patientno as patientno, ") \
				_T(" get_patientname(hd_docno) as pname, ") \
				_T(" trunc(hd_admitdate) as admitdate, hp_birthdate as birthdate, ") \
				_T(" hd_cardno as cardno, hd_docno as docno ") \
				_T("  from hms_patient ") \
				_T(" left join hms_doc on (hd_patientno = hp_patientno) ") \
				_T(" where hp_sin = '%s' %s  "), m_szCCCD,szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("patientno")), 
			rs.GetValue(_T("pname")),
			rs.GetValue(_T("birthdate")), 
			rs.GetValue(_T("docno")), 
			rs.GetValue(_T("cardno")),
			rs.GetValue(_T("admitdate")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;

}
void CRMCanCuocCDDlg::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	// chia cac truong hop.
	// dau tien kiem tra neu nhu benh nhan ko co the BH thi rat don gian 
	//TH1 neu nhu List chua co item nao nghia la Bn nay chua tung den kham tai vien
	if(m_wndList.GetItemCount()<=0)
	{
		((CHMSRegistration*)m_pWndOrder)->SetMode(VM_ADDPAT);
		((CHMSRegistration*)m_pWndOrder)->m_szPatientName = m_szPatientName;
		((CHMSRegistration*)m_pWndOrder)->m_szBirthDate = m_szBirthDate;
		((CHMSRegistration*)m_pWndOrder)->m_szAge = m_szBirthDate;
		((CHMSRegistration*)m_pWndOrder)->m_szSexKey = m_szSexKey;
		((CHMSRegistration*)m_pWndOrder)->m_szIDNo = m_szCCCD;
		//((CHMSRegistration*)m_pWndOrder)->m_szOccupationKey = _T("6");
		((CHMSRegistration*)m_pWndOrder)->m_szIssueDate = m_szIdCardIssueDate;
		if (!m_szAddress.IsEmpty())
		{
			CString szSQL,tmpStr;
			szSQL.Format(_T("get_address_code('%s')"), m_szAddress);
			CString szCodeAddr = pMF->ExecDML(szSQL);
			_tprintf(_T("\r\nszCodeAddr: %s"), szCodeAddr);
			CStringToken tkAddr(szCodeAddr, _T("."));
			tkAddr.GetAt(0, tmpStr);
			((CHMSRegistration*)m_pWndOrder)->m_szProvillKey = tmpStr;
			tkAddr.GetAt(1,tmpStr );
			((CHMSRegistration*)m_pWndOrder)->m_szDistrictKey = tmpStr;
			tkAddr.GetAt(2,tmpStr );
			((CHMSRegistration*)m_pWndOrder)->m_szVillageKey = tmpStr;
			tkAddr.GetAt(3, tmpStr);
			((CHMSRegistration*)m_pWndOrder)->m_szContactAddress = tmpStr;
			// neeu co the BH thi gan cac thong tin vao
			if(m_szCardno.GetLength() ==20)
			{

				CString szCode;				
				
				int nRet = pMF->ParseCard(_T("4"),  m_szCardno, m_szCode, m_nDiscount, m_nGroupID);			
				if(nRet < 0){
					m_wndCardno.SetToolTipMessage(_T("Invalid Card Number"));
					//return;
				}
				/*Gán giá trị form tiếp đón*/
				((CHMSRegistration*)m_pWndOrder)->m_sCardInfo.regplacecde = m_szRegCodeKey;
				((CHMSRegistration*)m_pWndOrder)->m_sCardInfo.discount = m_nDiscount;
				((CHMSRegistration*)m_pWndOrder)->m_sCardInfo.groupid = m_nGroupID;
				((CHMSRegistration*)m_pWndOrder)->m_sCardInfo.code = m_szCode;
				//m_sCardInfo.company = dlg.m_szCompany;
				((CHMSRegistration*)m_pWndOrder)->m_sCardInfo.szArea = m_szAreaKey;
				((CHMSRegistration*)m_pWndOrder)->m_sCardInfo.regdate = m_szFromDate;
				((CHMSRegistration*)m_pWndOrder)->m_sCardInfo.expdate = m_szToDate;
				//((CHMSRegistration*)m_pWndOrder)->m_szObjectKey = _T("$");
				((CHMSRegistration*)m_pWndOrder)->m_szCardNo = m_szCardno;
				((CHMSRegistration*)m_pWndOrder)->m_szObjectKey = _T("4");

			}
			if (!m_szEthnicKey.IsEmpty())
			{
				((CHMSRegistration*)m_pWndOrder)->m_szEthnicKey = m_szEthnicKey;
			}
			((CHMSRegistration*)m_pWndOrder)->UpdateData(false);
		}
		
	}
	else
	{
		int nCel = m_wndList.GetCurSel();
		if(nCel <0)
			return;

		long nDocumentNo=0;
		nDocumentNo = str2long(m_wndList.GetItemText(nCel,3));
		if(nDocumentNo >0)
		{
			//((CHMSRegistration*)m_pWndOrder)->m_nDocumentNo = nDocumentNo;
			((CHMSRegistration*)m_pWndOrder)->LoadData(nDocumentNo);
			((CHMSRegistration*)m_pWndOrder)->SetMode(VM_ADDDOC);


				if(m_szCardno.GetLength() ==20)
				{

					CString szCode;
					int nDiscount=0, nGroupID=0;
					int nRet = pMF->ParseCard(_T("4"),  m_szCardno, szCode, nDiscount, nGroupID);
				

					if(nRet < 0){
						m_wndCardno.SetToolTipMessage(_T("Invalid Card Number"));
						return;
					}
					/*Gán giá trị form tiếp đón*/
					((CHMSRegistration*)m_pWndOrder)->m_sCardInfo.regplacecde = m_szRegCodeKey;
					((CHMSRegistration*)m_pWndOrder)->m_sCardInfo.discount = nDiscount;
					((CHMSRegistration*)m_pWndOrder)->m_sCardInfo.groupid = nGroupID;
					((CHMSRegistration*)m_pWndOrder)->m_sCardInfo.code = szCode;
					//m_sCardInfo.company = dlg.m_szCompany;
					((CHMSRegistration*)m_pWndOrder)->m_sCardInfo.szArea = m_szAreaKey;
					((CHMSRegistration*)m_pWndOrder)->m_sCardInfo.regdate = m_szFromDate;
					((CHMSRegistration*)m_pWndOrder)->m_sCardInfo.expdate = m_szToDate;
					((CHMSRegistration*)m_pWndOrder)->m_szObjectKey = _T("4");
					((CHMSRegistration*)m_pWndOrder)->m_szCardNo = m_szCardno;	
				}
				if (!m_szEthnicKey.IsEmpty())
				{
					((CHMSRegistration*)m_pWndOrder)->m_szEthnicKey = m_szEthnicKey;
				}
				((CHMSRegistration*)m_pWndOrder)->UpdateData(FALSE);

		}
	}
	
	CDialog::OnOK();
} 
void CRMCanCuocCDDlg::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();
} 
void CRMCanCuocCDDlg::OnCheckinSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CheckInCardInfor();
	
} 
void CRMCanCuocCDDlg::OnRegCodeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CRMCanCuocCDDlg::OnRegCodeSelendok(){
	 
}
/*void CRMCanCuocCDDlg::OnRegCodeSetfocus(){
	
}*/
/*void CRMCanCuocCDDlg::OnRegCodeKillfocus(){
	
}*/
long CRMCanCuocCDDlg::OnRegCodeLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();

	return pMF->LoadHospitalList(&m_wndRegCode, m_szRegCodeKey);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndRegCode.IsSearchKey() && !m_szRegCodeKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szRegCodeKey
};
	m_wndRegCode.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndRegCode.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CRMCanCuocCDDlg::OnRegCodeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CRMCanCuocCDDlg::OnAreaSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CRMCanCuocCDDlg::OnAreaSelendok(){
	 
}
/*void CRMCanCuocCDDlg::OnAreaSetfocus(){
	
}*/
/*void CRMCanCuocCDDlg::OnAreaKillfocus(){
	
}*/
long CRMCanCuocCDDlg::OnAreaLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return pMF->LoadSelectionList(&m_wndArea, _T("HMS_CARD_AREA"), m_szAreaKey);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndArea.IsSearchKey() && !m_szAreaKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szAreaKey
};
	m_wndArea.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndArea.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CRMCanCuocCDDlg::OnAreaAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
int CRMCanCuocCDDlg::OnAddRMCanCuocCDDlg(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CRMCanCuocCDDlg::OnEditRMCanCuocCDDlg(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CRMCanCuocCDDlg::OnDeleteRMCanCuocCDDlg(){
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
 		OnCancelRMCanCuocCDDlg();
 	}
	return 0;
}
int CRMCanCuocCDDlg::OnSaveRMCanCuocCDDlg(){
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
 		//OnRMCanCuocCDDlgListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CRMCanCuocCDDlg::OnCancelRMCanCuocCDDlg(){
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
int CRMCanCuocCDDlg::OnRMCanCuocCDDlgListLoadData(){
	return 0;
}
bool CRMCanCuocCDDlg::CheckInCardInfor()
{	
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CString szJsonData, szError;
	CString szParams, szSQL;
	CRecord rs(&pMF->m_db);
	bool bFund;
	bool bIsEditMode = GetMode() == VM_ADD || GetMode() == VM_EDIT;
	
	// For checking
	CString tmpSName, tmpSSex, tmpSBirthday, tmpSDkbd, tmpSgtTheTu, tmpSgtTheDen;
	CString tmpError;
	StringUpper(m_szPatientName, tmpSName);
	tmpSBirthday = CDate::Convert(m_szBirthDate,yyyymmdd,ddmmyyyy );


	tmpSSex = m_szSexKey.Compare(_T("M")) == 0 ? _T("NAM") : _T("NỮ");
	//tmpSDkbd = m_szRegistrationPlaceKey;
	
	//tmpSgtTheTu = CDate::Convert(m_szRegistrationDate, yyyymmdd, ddmmyyyy);		
	//tmpSgtTheDen = CDate::Convert(m_szExpiryDate, yyyymmdd, ddmmyyyy);
	tmpError.Empty();
	
	if( m_szCCCD.Trim().IsEmpty() ||  m_szPatientName.Trim().IsEmpty() || m_szBirthDate.Trim().IsEmpty() ) 
	{
		MessageBox(_T("Thiếu/lỗi thông tin tra cứu thẻ\n(Kiểm tra: Họ tên, ngày sinh, mã thẻ)"), _T("Cổng tiếp nhận BHXH"), MB_ICONERROR);
		return false;
	}

	//AfxMessageBox( tmpSName + _T("\n") + tmpSBirthday + _T("\n") + tmpSSex + _T("\n") + tmpSDkbd );

	JSONVALUE jsonRequest;	
	jsonRequest["username"] = m_szUserName;
	jsonRequest["password"] = m_szPassword;

	std::wstring json_string;
	jsonRequest.ToString(json_string);
	szJsonData.Format(_T("%s"), json_string.c_str());
	
	CInternetSession session(_T("VIMES_POST"));

	CHttpConnection* pServer = NULL;
	CHttpFile* pFile = NULL;
	CString szResponse, tmpStr;
	LPCSTR szURLLPCSTR;
	bool bCheck2The = false;

	CString szURL, szURL1;	
	DWORD dwLength;
	LPWSTR  szUrl2;
   szURL.Format(_T("http://103.57.113.22/api/token/take"));
    //_msg(_T("%s"), szURL);
	BOOL result = FALSE;
	try
	{
		CString strServerName;
		INTERNET_PORT nPort;
		DWORD dwRet = 0;			

		CString svr, strobj, strParams;
		DWORD svrtype;
		INTERNET_PORT port;

		CString strHeaders = _T("Content-Type: application/json; charset=utf-8");
		::AfxParseURL(szURL, svrtype, svr, strobj, port);
		//session.SetOption(INTERNET_OPTION_RECEIVE_TIMEOUT, 10000);
		pServer = session.GetHttpConnection(svr, port);
		 _tprintf(_T("\r\n%s -- %d"),svr,port);

		if(szURL.Left(5) == _T("https"))		
			pFile = pServer->OpenRequest(CHttpConnection::HTTP_VERB_POST,strobj,NULL,1,NULL,NULL,INTERNET_FLAG_EXISTING_CONNECT|INTERNET_FLAG_SECURE); 
		else
			pFile = pServer->OpenRequest(CHttpConnection::HTTP_VERB_POST,strobj,NULL,1,NULL,NULL,INTERNET_FLAG_EXISTING_CONNECT);

		pFile->AddRequestHeaders(strHeaders);

		char* buff;
		int len = ::WideCharToMultiByte(CP_UTF8, 0, szJsonData, szJsonData.GetLength(), NULL, 0, 0, 0);
		buff = new char[len+sizeof(char)];
		memset(buff, '\0', len+sizeof(char));
		::WideCharToMultiByte(CP_UTF8, 0, szJsonData, szJsonData.GetLength(), buff, len, 0, 0);
		printf("%s", buff);
		result = pFile->SendRequest(NULL, 0, (LPVOID)buff, (DWORD)strlen(buff));				
		delete buff;

		pFile->QueryInfoStatusCode(dwRet);

		_tprintf(_T("\r\n%d"), dwRet);
		if (dwRet == HTTP_STATUS_OK)
		{
			_tprintf(_T("\r\n%s"), _T("HTTP_STATUS_OK"));
	        char szBuff[1025];
			UINT dwLen = 0;
			std::string str;
			str.clear();

			for(;;)
			{
				memset(szBuff, '\0', 1025);
				dwLen = pFile->Read(szBuff, 1024);
				if(dwLen <= 0)
					break;
			    
				str += szBuff;			    
			}

			

			WCHAR* wcString = new WCHAR[str.length()+1];
			//memset(wcString, L'\0', str.length());			
			UINT nbyte = ::MultiByteToWideChar(CP_UTF8, 0, str.c_str(), str.length(), NULL, 0);
			::MultiByteToWideChar(CP_UTF8, 0, str.c_str(), str.length(), wcString, nbyte);			
			wcString[nbyte] = L'\0';
			tmpStr.Format(_T("%s"), wcString);
			szResponse += tmpStr;
			delete wcString;

			_tprintf(_T("\r\n%s"), szResponse);
			
			CString szData, tmpStr1;
			JSONVALUE j, js, jsonResponseToken, jResponse;	
			if(!szResponse.IsEmpty())
			{	
				jsonResponseToken.Parse(szResponse);
				
				JSONVALUE j = jsonResponseToken.At(_T("maKetQua"));
				JSONVALUE jj = jsonResponseToken.At(_T("APIKey"));
				JSONVALUE jValue;
				std::wstring strData;
				std::wstring json_string;		
				// Ma loi tra ve
				j.ToString(json_string);		
				szData.Format(_T("%s"), json_string.c_str());
				// APIKey tra ve
				jj.ToString(json_string);		
				szData.Format(_T("%s"), json_string.c_str());

				//_msg(_T("%s"),szData);

				jValue = jj["access_token"];
				jValue.ToString(strData);
				tmpStr = strData.c_str();
				tmpStr1.Format(_T("%c"), 34);
				tmpStr.Replace(tmpStr1, _T(""));
				m_szAccess_token = tmpStr;
				_tprintf(_T("\r\nm_szAccess_token:%s"), m_szAccess_token);

				jValue = jj["id_token"];
				jValue.ToString(strData);
				tmpStr = strData.c_str();
				tmpStr1.Format(_T("%c"), 34);
				tmpStr.Replace(tmpStr1, _T(""));
				m_szToken_ID = tmpStr;
				_tprintf(_T("\r\nm_szToken_ID:%s"), m_szToken_ID);				

				
				JSONVALUE jRCard_info;				
				szJsonData.Empty();
				jRCard_info["maThe"] = m_szCCCD;	
				jRCard_info["hoTen"] = m_szPatientName;

				CString szBirthDate;
				szBirthDate =CDate::Convert( m_szBirthDate,yyyymmdd,ddmmyyyy);

				if(m_szBirthDate == _T("1752/09/14")){
					szBirthDate = _T("01/01/1980");
				}
				
				if(szBirthDate.GetLength() <= 0 || szBirthDate.IsEmpty())
				{
					szBirthDate = _T("01/01/1980");
				}
												
				jRCard_info["ngaySinh"] = szBirthDate.Right(4);

				std::wstring jStr;
				jRCard_info.ToString(jStr);
				szJsonData.Format(_T("%s"), jStr.c_str());
				
				_tprintf(_T("\r\n%s"), szJsonData);
				szURL.Format(_T("http://103.57.113.22/api/egw/KQNhanLichSuKCB2019?token=%s&id_token=%s&username=%s&password=%s"), m_szAccess_token, m_szToken_ID,
					m_szUserName, m_szPassword);

		//	_msg(_T("%s, %s"), szURL, szJsonData);

				::AfxParseURL(szURL, svrtype, svr, strobj, port);
				//session.SetOption(INTERNET_OPTION_RECEIVE_TIMEOUT, 10000);
				pServer = session.GetHttpConnection(svr, port);
				_tprintf(_T("\r\n%s -- %d"),svr,port);
				if(szURL.Left(5) == _T("https"))		
					pFile = pServer->OpenRequest(CHttpConnection::HTTP_VERB_POST,strobj,NULL,1,NULL,NULL,INTERNET_FLAG_EXISTING_CONNECT|INTERNET_FLAG_SECURE); 
				else
					pFile = pServer->OpenRequest(CHttpConnection::HTTP_VERB_POST,strobj,NULL,1,NULL,NULL,INTERNET_FLAG_EXISTING_CONNECT);
				pFile->AddRequestHeaders(strHeaders);

				char* buff;
				int len = ::WideCharToMultiByte(CP_UTF8, 0, szJsonData, szJsonData.GetLength(), NULL, 0, 0, 0);
				buff = new char[len+sizeof(char)];
				memset(buff, '\0', len+sizeof(char));
				::WideCharToMultiByte(CP_UTF8, 0, szJsonData, szJsonData.GetLength(), buff, len, 0, 0);
				printf("%s", buff);
				result = pFile->SendRequest(NULL, 0, (LPVOID)buff, (DWORD)strlen(buff));				
				delete buff;

				pFile->QueryInfoStatusCode(dwRet);

				_tprintf(_T("\r\n%d"), dwRet);
				if (dwRet == HTTP_STATUS_OK)
				{
					_tprintf(_T("\r\n%s"), _T("HTTP_STATUS_OK"));
					char szBuff[1025];
					UINT dwLen = 0;
					std::string str;
					str.clear();

					for(;;)
					{
						memset(szBuff, '\0', 1025);
						dwLen = pFile->Read(szBuff, 1024);
						if(dwLen <= 0)
							break;
					    
						str += szBuff;			    
					}
					
					szResponse.Empty();
					WCHAR* wcString = new WCHAR[str.length()+1];
					//memset(wcString, L'\0', str.length());
					UINT nbyte = ::MultiByteToWideChar(CP_UTF8, 0, str.c_str(), str.length(), NULL, 0);
					::MultiByteToWideChar(CP_UTF8, 0, str.c_str(), str.length(), wcString, nbyte);
					wcString[nbyte] = L'\0';
					tmpStr.Format(_T("%s"), wcString);
					szResponse += tmpStr;
					delete wcString;					
					
					CHMSCardInfoCheckIns dlg(this);

					//_msg(_T("%s"),szResponse);
				
					if(!szResponse.IsEmpty())
					{
						jResponse.Parse(szResponse);
						//_msg(_T("%s"),szResponse);

						j= jResponse.At(_T("maKetQua"));
						j.ToString(json_string);
						CString szMaloi; 
						szMaloi.Format( _T("%s"), json_string.c_str() );						 
						szMaloi.Replace(_T("\""), _T(""));

						j= jResponse.At(_T("ghiChu"));
						j.ToString(json_string);
						tmpStr.Format(_T("%s"), json_string.c_str());						
						tmpStr.Replace(_T("\""), _T(""));
						dlg.m_szNOI_DUNG=tmpStr;
						szData.Format(_T("N\x1ED9i \x64ung: %s"),tmpStr);
						CStringToken tk(tmpStr, _T("!"));
						if(tk.GetSize() > 0)
						{
							tk.GetAt(0,tmpStr);
							dlg.m_szCanhbao=tmpStr;
						}						

						if (szMaloi.Compare(_T("000")) == 0 || szMaloi.Compare(_T("003")) == 0 || szMaloi.Compare(_T("004")) == 0) 
							// -- Thẻ còn giá trị sử dụng mới check
						{

							j= jResponse.At(_T("hoTen"));
							j.ToString(json_string);
							tmpStr.Format(_T("%s"), json_string.c_str());
							tmpStr1.Format(_T("%c"), 34);
							tmpStr.Replace(tmpStr1, _T(""));
							dlg.m_szHO_TEN=tmpStr;
							szData.AppendFormat(_T("\r\nH\x1ECD t\xEAn: %s"),tmpStr);						
							// Check 
							StringUpper(tmpStr, tmpStr);							
							if (tmpSName.Compare(tmpStr) !=0 ) {							
								tmpError.AppendFormat( _T("Họ tên sai: %s -> %s\n"), tmpSName, tmpStr );	

								// Correct
								if (bIsEditMode) 
								{	
									StringLower(tmpStr, m_szPatientName);
									InitCap(m_szPatientName, m_szPatientName);
								}
							}

							j= jResponse.At(_T("ngayDu5Nam"));
							j.ToString(json_string);
							tmpStr.Format(_T("%s"), json_string.c_str());
							tmpStr1.Format(_T("%c"), 34);
							tmpStr.Replace(tmpStr1, _T(""));
							CString szdateover5year;
							szdateover5year=tmpStr;
							szdateover5year.Replace(_T("/"),_T("-"));
							m_szFromDate = CDate::Convert(szdateover5year, ddmmyyyy, yyyymmdd);
							dlg.m_szNgayDu5nam=m_szFromDate;
							//if(CompareDate(m_szFromDate, pMF->GetSysDate()) <= 0 && !m_szFromDate.IsEmpty())
							//{	
								//m_b5Years= true;
							//}
												
							j= jResponse.At(_T("ngaySinh"));
							j.ToString(json_string);
							tmpStr.Format(_T("%s"), json_string.c_str());
							tmpStr1.Format(_T("%c"), 34);
							tmpStr.Replace(tmpStr1, _T(""));
							dlg.m_szNGAY_SINH=tmpStr;

							CString szBirthday;
							szBirthday=tmpStr;
							if(tmpStr.GetLength()==4)
							{								
								if (bIsEditMode)
								{
									m_szBirthDate =tmpStr + _T("/01/01");
									//m_bYearofBirth=TRUE;
								}
							}
							else
							{	//if (bIsEditMode)
								//	m_bYearofBirth=FALSE;
								szBirthday.Replace(_T("/"),_T("-"));
								
								CDate dte;
								if(dte.ParseDate(szBirthday, ddmmyyyy))
								{		
									szBirthDate.Format(_T("%.2d/%.2d/%.4d"), dte.GetDay(), dte.GetMonth(), dte.GetYear());								
								}
								else
								{
									dte.ParseDate(szBirthday, yyyymmdd);
									szBirthDate.Format(_T("%.2d/%.2d/%.4d"), dte.GetDay(), dte.GetMonth(), dte.GetYear());
									
								}
								
								if (bIsEditMode)
									m_szBirthDate = CDate::Convert( szBirthDate,ddmmyyyy,yyyymmdd);
							}	

							szData.AppendFormat(_T("\r\nNg\xE0y sinh: %s"),tmpStr);
							
							// Check 						
							//if (tmpSBirthday.Compare(tmpStr) !=0 ) {
							//	tmpError.AppendFormat( _T("Ngày sinh sai: %s -> %s\n"), tmpSBirthday, tmpStr );							
							//}

							j= jResponse.At(_T("gioiTinh"));
							j.ToString(json_string);
							tmpStr.Format(_T("%s"), json_string.c_str());
							tmpStr1.Format(_T("%c"), 34);
							tmpStr.Replace(tmpStr1, _T(""));
							tmpStr.Trim();
							// Correct
							if (bIsEditMode)
							  m_szSexKey = tmpStr == _T("Nam")?_T("M"):_T("F");
							dlg.m_szGIOI_TINH = tmpStr;
							szData.AppendFormat(_T("\r\nGi\x1EDBi t\xEDnh: %s"),tmpStr);
							// Check 		
							StringUpper(tmpStr, tmpStr);
							//if (GetMode() != VM_ADD && tmpSSex.Compare(tmpStr) !=0 ) {
							//	tmpError.AppendFormat( _T("Giới tính sai: %s -> %s\n"), tmpSSex, tmpStr );														
							//}

							j= jResponse.At(_T("diaChi"));
							j.ToString(json_string);
							tmpStr.Format(_T("%s"), json_string.c_str());
							tmpStr1.Format(_T("%c"), 34);
							tmpStr.Replace(tmpStr1, _T(""));
							tmpStr.Trim();
							//m_szCompany=tmpStr;
							m_szAddress = tmpStr;
							dlg.m_szDIA_CHI=tmpStr;
							szData.AppendFormat(_T("\r\n\x110\x1ECB\x61 \x63h\x1EC9: %s"),tmpStr);

							j= jResponse.At(_T("maDKBD"));
							j.ToString(json_string);
							tmpStr.Format(_T("%s"), json_string.c_str());
							tmpStr1.Format(_T("%c"), 34);
							tmpStr.Replace(tmpStr1, _T(""));
							tmpStr.Trim();
							m_szRegCodeKey=tmpStr;
							//m_szCardRegCode= tmpStr;
							dlg.m_szMADKBD=tmpStr;
							szData.AppendFormat(_T("\r\nM\xE3 \x110K\x42\x110: %s"),tmpStr);

							// Correct

							j= jResponse.At(_T("maThe"));
							j.ToString(json_string);
							tmpStr.Format(_T("%s"), json_string.c_str());
							tmpStr1.Format(_T("%c"), 34);
							tmpStr.Replace(tmpStr1, _T(""));
							//dlg.m_szTHE_CU=tmpStr;
						//	szData.AppendFormat(_T("\r\nM\xE3 th\x1EBB \x63\x169: %s"),tmpStr);
															
							m_szCardno = tmpStr1 + m_szRegCodeKey;
						
						
							j= jResponse.At(_T("gtTheTu"));
							j.ToString(json_string);
							tmpStr.Format(_T("%s"), json_string.c_str());
							tmpStr1.Format(_T("%c"), 34);
							tmpStr.Replace(tmpStr1, _T(""));
							CString szregdate;
							szregdate=tmpStr;
							szregdate.Replace(_T("/"),_T("-"));
							// Correct
							//if (bIsEditMode)
							m_szFromDate=CDate::Convert(szregdate, ddmmyyyy, yyyymmdd);
							dlg.m_szTU_NGAY1=tmpStr;
							szData.AppendFormat(_T("\r\nT\x1EEB ng\xE0y: %s"),tmpStr);
							// Check
							//if (GetMode() != VM_ADD && tmpSgtTheTu.Compare(tmpStr) != 0) {
							//	tmpError.AppendFormat(_T("Hạn thẻ (từ) sai: %s -> %s\n"), tmpSgtTheTu, tmpStr);							
							//}

							j= jResponse.At(_T("gtTheDen"));
							j.ToString(json_string);
							tmpStr.Format(_T("%s"), json_string.c_str());
							tmpStr1.Format(_T("%c"), 34);
							tmpStr.Replace(tmpStr1, _T(""));
							CString szexpdate;
							szexpdate=tmpStr;
							dlg.m_szDEN_NGAY1=tmpStr;

							// Correct
						//	if (bIsEditMode)
							m_szToDate = CDate::Convert(szexpdate, ddmmyyyy, yyyymmdd);

							szData.AppendFormat(_T("\r\n\x110\x1EBFn ng\xE0y: %s"), tmpStr);
							// Check
						/*	if (GetMode() != VM_ADD && tmpSgtTheDen.Compare(tmpStr) != 0) {
								tmpError.AppendFormat(_T("Hạn thẻ (đến) sai: %s -> %s\n"), tmpSgtTheDen, tmpStr);							
							}*/

							j= jResponse.At(_T("maKV"));
							j.ToString(json_string);
							tmpStr.Format(_T("%s"), json_string.c_str());
							tmpStr1.Format(_T("%c"), 34);
							tmpStr.Replace(tmpStr1, _T(""));
							dlg.m_szMA_KV=tmpStr;

							CString szarea;
						//	_msg(_T("%s"),tmpStr);
							if(tmpStr==_T("K1") || tmpStr==_T("K2") ||tmpStr==_T("K3"))
							{

								m_szAreaKey=tmpStr;
							}else
							{
								m_szAreaKey=_T("KXD");
							}

							szData.AppendFormat(_T("\r\nM\xE3 KV: %s"),tmpStr);

							j= jResponse.At(_T("maTheCu"));
							j.ToString(json_string);
							tmpStr.Format(_T("%s"), json_string.c_str());
							tmpStr1.Format(_T("%c"), 34);
							tmpStr.Replace(tmpStr1, _T(""));
							dlg.m_szTHE_CU=tmpStr;
							szData.AppendFormat(_T("\r\nM\xE3 th\x1EBB \x63\x169: %s"),tmpStr);

							/*if(CompareDate(m_szExpiryDate, pMF->GetSysDate()) < 0)
							{
								bCheck2The = true;
							}*/
											
							j= jResponse.At(_T("maDKBDMoi"));
							j.ToString(json_string);
							tmpStr.Format(_T("%s"), json_string.c_str());
							tmpStr1.Format(_T("%c"), 34);
							tmpStr.Replace(tmpStr1, _T(""));		
							//if (tmpStr != _T("null") && bCheck2The){
							m_szRegCodeKey = tmpStr;
							//}

							j= jResponse.At(_T("maTheMoi"));
							j.ToString(json_string);
							tmpStr.Format(_T("%s"), json_string.c_str());
							tmpStr1.Format(_T("%c"), 34);
							tmpStr.Replace(tmpStr1, _T(""));
							dlg.m_szTHE_MOI=tmpStr;
							szData.AppendFormat(_T("\r\nM\xE3 th\x1EBB m\x1EDBi: %s"),tmpStr);
							
						/*	if (tmpStr != _T("null") && (bCheck2The || m_szCardno.GetLength()==10  )&& tmpStr.GetLength() > 10){								
								m_szCardno = tmpStr + m_szRegCodeKey;
							}*/	
							m_szCardno = tmpStr + m_szRegCodeKey;
							
							j= jResponse.At(_T("gtTheTuMoi"));
							j.ToString(json_string);
							tmpStr.Format(_T("%s"), json_string.c_str());
							tmpStr1.Format(_T("%c"), 34);
							tmpStr.Replace(tmpStr1, _T(""));
							dlg.m_szTU_NGAY2=tmpStr;
							szData.AppendFormat(_T("\r\nT\x1EEB ng\xE0y: %s"),tmpStr);
							//if (tmpStr != _T("null") && bCheck2The)
							//{
							szregdate=tmpStr;
							szregdate.Replace(_T("/"),_T("-"));
							m_szFromDate=CDate::Convert(szregdate, ddmmyyyy, yyyymmdd);		
							//}

							j= jResponse.At(_T("gtTheDenMoi"));
							j.ToString(json_string);
							tmpStr.Format(_T("%s"), json_string.c_str());
							tmpStr1.Format(_T("%c"), 34);
							tmpStr.Replace(tmpStr1, _T(""));
							dlg.m_szDEN_NGAY2=tmpStr;
							szData.AppendFormat(_T("\r\n\x110\x1EBFn ng\xE0y: %s"),tmpStr);
							/*if (tmpStr != _T("null") && bCheck2The)
							{
							*/
							szexpdate=tmpStr;
							m_szToDate=CDate::Convert(szexpdate, ddmmyyyy, yyyymmdd);
							//}
							_tprintf(_T("\r\nMaloi: %s| Mode: %d| The moi: %d"), szMaloi, GetMode(), bCheck2The);

							
						//_tprintf(_T("\r\nMaloi: %d| Mode: %d"), nMaloi, GetMode());
							j= jResponse.At(_T("dsLichSuKCB2018"));
							dlg.m_json= j;
							jj= jResponse.At(_T("dsLichSuKT2018"));
							dlg.m_jsonHisCheck =jj;
							
							//if (!tmpError.IsEmpty()) 
							//{
							//	if (bIsEditMode) 
							//		tmpError.Append(_T("(Áp dụng chế độ tự động sửa)"));
							//	MessageBox(tmpError, _T("Cổng tiếp nhận BHXH"), MB_ICONERROR);
							//}

							if(m_szCardno.GetLength() > 10)
							{
								int nRet = pMF->ParseCard(_T(""),  m_szCardno, m_szCode, m_nDiscount, m_nGroupID);								
								bFund = true;
							}

							dlg.DoModal();
							UpdateData(false);
							jResponse["dsLichSuKT2018"] = _T("");
							jResponse.ToString(tmpStr);
							szSQL.Format(_T("ss_examhist_create('%s')"), tmpStr);
							pMF->ExecDML(szSQL);
						} 
						else // Mã lỗi != 000, thẻ không có giá trị sử dụng
						{						
							//dlg.m_szCanhbao= szData;																					
							MessageBox( szData, _T("Cổng tiếp nhận BHXH"), MB_ICONERROR );
							dlg.DoModal();
						}

						//m_wndSave.SetFocus();
					}
				}
			}

		}
		else
		{
			_tprintf(_T("Erro Get Topken"));			
		}	
	
		delete pFile;
		delete pServer;
	}
	catch (CInternetException* pEx)
	{
		//catch errors from WinInet
		TCHAR pszError[64];
		pEx->GetErrorMessage(pszError, 64);
		_tprintf(_T("%63s"), pszError);
		CString szMsg;
		MessageBox(_T("Không thể kết nối đến cổng tiếp nhận BHXH"), _T("Cổng tiếp nhận BHXH"), MB_ICONERROR);		
	}
	
	
	return bFund;
}

