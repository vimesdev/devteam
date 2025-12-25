#include "AdContractPackageDialog.h"
#include "MainFrame_E10.h"
#include "AdContractPackageList.h"
/*static void _OnIDChangeFnc(CWnd *pWnd){
	((CAdContractPackageDialog *)pWnd)->OnIDChange();
} */
/*static void _OnIDSetfocusFnc(CWnd *pWnd){
	((CAdContractPackageDialog *)pWnd)->OnIDSetfocus();} */ 
/*static void _OnIDKillfocusFnc(CWnd *pWnd){
	((CAdContractPackageDialog *)pWnd)->OnIDKillfocus();
} */
static int _OnIDCheckValueFnc(CWnd *pWnd){
	return ((CAdContractPackageDialog *)pWnd)->OnIDCheckValue();
} 
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CAdContractPackageDialog *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CAdContractPackageDialog *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CAdContractPackageDialog *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CAdContractPackageDialog *)pWnd)->OnYearCheckValue();
} 
/*static void _OnDescriptionChangeFnc(CWnd *pWnd){
	((CAdContractPackageDialog *)pWnd)->OnDescriptionChange();
} */
/*static void _OnDescriptionSetfocusFnc(CWnd *pWnd){
	((CAdContractPackageDialog *)pWnd)->OnDescriptionSetfocus();} */ 
/*static void _OnDescriptionKillfocusFnc(CWnd *pWnd){
	((CAdContractPackageDialog *)pWnd)->OnDescriptionKillfocus();
} */
static int _OnDescriptionCheckValueFnc(CWnd *pWnd){
	return ((CAdContractPackageDialog *)pWnd)->OnDescriptionCheckValue();
} 
/*static void _OnDateChangeFnc(CWnd *pWnd){
	((CAdContractPackageDialog *)pWnd)->OnDateChange();
} */
/*static void _OnDateSetfocusFnc(CWnd *pWnd){
	((CAdContractPackageDialog *)pWnd)->OnDateSetfocus();} */ 
/*static void _OnDateKillfocusFnc(CWnd *pWnd){
	((CAdContractPackageDialog *)pWnd)->OnDateKillfocus();
} */
static int _OnDateCheckValueFnc(CWnd *pWnd){
	return ((CAdContractPackageDialog *)pWnd)->OnDateCheckValue();
} 
/*static void _OnDurationChangeFnc(CWnd *pWnd){
	((CAdContractPackageDialog *)pWnd)->OnDurationChange();
} */
/*static void _OnDurationSetfocusFnc(CWnd *pWnd){
	((CAdContractPackageDialog *)pWnd)->OnDurationSetfocus();} */ 
/*static void _OnDurationKillfocusFnc(CWnd *pWnd){
	((CAdContractPackageDialog *)pWnd)->OnDurationKillfocus();
} */
static int _OnDurationCheckValueFnc(CWnd *pWnd){
	return ((CAdContractPackageDialog *)pWnd)->OnDurationCheckValue();
} 
static void _OnMethodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CAdContractPackageDialog* )pWnd)->OnMethodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnMethodSelendokFnc(CWnd *pWnd){
	((CAdContractPackageDialog *)pWnd)->OnMethodSelendok();
}
/*static void _OnMethodSetfocusFnc(CWnd *pWnd){
	((CAdContractPackageDialog *)pWnd)->OnMethodKillfocus();
}*/
/*static void _OnMethodKillfocusFnc(CWnd *pWnd){
	((CAdContractPackageDialog *)pWnd)->OnMethodKillfocus();
}*/
static long _OnMethodLoadDataFnc(CWnd *pWnd){
	return ((CAdContractPackageDialog *)pWnd)->OnMethodLoadData();
}
/*static void _OnMethodAddNewFnc(CWnd *pWnd){
	((CAdContractPackageDialog *)pWnd)->OnMethodAddNew();
}*/
/*static void _OnAmountChangeFnc(CWnd *pWnd){
	((CAdContractPackageDialog *)pWnd)->OnAmountChange();
} */
/*static void _OnAmountSetfocusFnc(CWnd *pWnd){
	((CAdContractPackageDialog *)pWnd)->OnAmountSetfocus();} */ 
/*static void _OnAmountKillfocusFnc(CWnd *pWnd){
	((CAdContractPackageDialog *)pWnd)->OnAmountKillfocus();
} */
static int _OnAmountCheckValueFnc(CWnd *pWnd){
	return ((CAdContractPackageDialog *)pWnd)->OnAmountCheckValue();
} 
static void _OnActiveSelectFnc(CWnd *pWnd){
	 ((CAdContractPackageDialog*)pWnd)->OnActiveSelect();
}
static void _OnSaveSelectFnc(CWnd *pWnd){
	CAdContractPackageDialog *pVw = (CAdContractPackageDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CAdContractPackageDialog *pVw = (CAdContractPackageDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddAdContractPackageDialogFnc(CWnd *pWnd){
	 return ((CAdContractPackageDialog*)pWnd)->OnAddAdContractPackageDialog();
} 
static int _OnEditAdContractPackageDialogFnc(CWnd *pWnd){
	 return ((CAdContractPackageDialog*)pWnd)->OnEditAdContractPackageDialog();
} 
static int _OnDeleteAdContractPackageDialogFnc(CWnd *pWnd){
	 return ((CAdContractPackageDialog*)pWnd)->OnDeleteAdContractPackageDialog();
} 
static int _OnSaveAdContractPackageDialogFnc(CWnd *pWnd){
	 return ((CAdContractPackageDialog*)pWnd)->OnSaveAdContractPackageDialog();
} 
static int _OnCancelAdContractPackageDialogFnc(CWnd *pWnd){
	 return ((CAdContractPackageDialog*)pWnd)->OnCancelAdContractPackageDialog();
}
static int _OnQuyetdinhpheduyetCheckValueFnc(CWnd *pWnd){
	return ((CAdContractPackageDialog *)pWnd)->OnQuyetdinhpheduyetCheckValue();
} 

CAdContractPackageDialog::CAdContractPackageDialog(CWnd *pParent, int nMode, long nId):
	CGuiDialog(pParent)
{
	CGuiDialog::SetMode(nMode);
	m_nDlgWidth = 565;
	m_nDlgHeight = 185;
	SetDefaultValues();
	m_pParent = pParent;
	m_nPackageId = nId;	
}

CAdContractPackageDialog::~CAdContractPackageDialog(){
}
void CAdContractPackageDialog::OnCreateComponents(){
	m_wndContractGroup.Create(this, _T("Thông tin gói thầu"), 5, 5, 550, 179);
	m_wndIDLabel.Create(this, _T("ID"), 10, 30, 110, 55);
	m_wndID.Create(this,115, 30, 315, 55); 
	m_wndYearLabel.Create(this, _T("Year"), 320, 30, 430, 55);
	m_wndYear.Create(this,435, 30, 545, 55); 
	m_wndDescriptionLabel.Create(this, _T("Description"), 10, 60, 110, 85);
	m_wndDescription.Create(this,115, 60, 545, 85); 
	m_wndDateLabel.Create(this, _T("Ngày quyết định"), 10, 90, 110, 115);
	m_wndDate.Create(this,115, 90, 315, 115); 
	m_wndDurationLabel.Create(this, _T("Thời gian thực hiện"), 320, 90, 430, 115);
	m_wndDuration.Create(this,435, 90, 545, 115); 
	m_wndMethodLabel.Create(this, _T("Hình thức"), 10, 120, 110, 145);
	m_wndMethod.Create(this,115, 120, 315, 145); 
	m_wndAmountLabel.Create(this, _T("Amount"), 320, 120, 430, 145);
	m_wndAmount.Create(this,435, 120, 545, 145); 
	m_wndQuyetdinhpheduyetlabel.Create(this, _T("Quyết định"), 10, 150, 110, 175);
	m_wndQuyetdinhpheduyet.Create(this,115, 150, 545, 175); 
	m_wndActive.Create(this, _T("Active"), 5, 185, 105, 210);
	m_wndSave.Create(this, _T("&Save"), 386, 185, 466, 210);
	m_wndClose.Create(this, _T("&Close"), 471, 185, 551, 210);
}
void CAdContractPackageDialog::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndID.SetLimitText(35);
	m_wndID.SetCheckValue(true);
	m_wndID.SetTextUpper();
	//m_wndID.ModifyStyle(0, ES_UPPERCASE);
	m_wndYear.SetLimitText(254);
	m_wndYear.SetCheckValue(true);
	m_wndYear.SetInitCap(2);
	m_wndDate.SetLimitText(254);
	m_wndDate.SetCheckValue(true);
	
	//m_wndDuration.SetMax(CDate(pMF->GetSysDate()));
	m_wndDuration.SetCheckValue(false);
	m_wndMethod.SetCheckValue(true);
	m_wndMethod.LimitText(35);	
	m_wndQuyetdinhpheduyet.SetCheckValue(true);
	m_wndAmount.SetLimitText(16);
	m_wndAmount.SetCheckValue(true);	
	m_wndAmount.SetCurrencyFormat(TRUE);
	m_wndMethod.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndMethod.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndDescription.SetLimitText(254);
	//m_wndDescription.SetCheckValue(true);


	m_wndActive.ModifyStyle(WS_TABSTOP, 0);
	
	m_ad_contractTbl.SetTableName(_T("ad_contract_package"));
	m_ad_contractTbl.AddField(_T("adcp_org_id"), dfText, 3);
	m_ad_contractTbl.AddField(_T("adcp_contract_package_id"), dfText, 35);
	m_ad_contractTbl.AddField(_T("adcp_year"), dfInteger);
	m_ad_contractTbl.AddField(_T("adcp_date"), dfDate);
	m_ad_contractTbl.AddField(_T("adcp_description"), dfText, 254);
	m_ad_contractTbl.AddField(_T("adcp_method"), dfText, 15);
	m_ad_contractTbl.AddField(_T("adcp_duration"), dfInteger);
	m_ad_contractTbl.AddField(_T("adcp_amount"), dfDouble);
	m_ad_contractTbl.AddField(_T("adcp_isactive"), dfText, 1);
	m_ad_contractTbl.AddField(_T("adcp_quyetdinhpheduyet"), dfText, 128);
}
void CAdContractPackageDialog::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//m_wndID.SetEvent(WE_CHANGE, _OnIDChangeFnc);
	//m_wndID.SetEvent(WE_SETFOCUS, _OnIDSetfocusFnc);
	//m_wndID.SetEvent(WE_KILLFOCUS, _OnIDKillfocusFnc);
	m_wndID.SetEvent(WE_CHECKVALUE, _OnIDCheckValueFnc);
	//m_wndYear.SetEvent(WE_CHANGE, _OnYearChangeFnc);
	//m_wndYear.SetEvent(WE_SETFOCUS, _OnYearSetfocusFnc);
	//m_wndYear.SetEvent(WE_KILLFOCUS, _OnYearKillfocusFnc);
	m_wndYear.SetEvent(WE_CHECKVALUE, _OnYearCheckValueFnc);
	//m_wndDescription.SetEvent(WE_CHANGE, _OnDescriptionChangeFnc);
	//m_wndDescription.SetEvent(WE_SETFOCUS, _OnDescriptionSetfocusFnc);
	//m_wndDescription.SetEvent(WE_KILLFOCUS, _OnDescriptionKillfocusFnc);
	m_wndDescription.SetEvent(WE_CHECKVALUE, _OnDescriptionCheckValueFnc);
	//m_wndDate.SetEvent(WE_CHANGE, _OnDateChangeFnc);
	//m_wndDate.SetEvent(WE_SETFOCUS, _OnDateSetfocusFnc);
	//m_wndDate.SetEvent(WE_KILLFOCUS, _OnDateKillfocusFnc);
	m_wndDate.SetEvent(WE_CHECKVALUE, _OnDateCheckValueFnc);
	//m_wndDuration.SetEvent(WE_CHANGE, _OnDurationChangeFnc);
	//m_wndDuration.SetEvent(WE_SETFOCUS, _OnDurationSetfocusFnc);
	//m_wndDuration.SetEvent(WE_KILLFOCUS, _OnDurationKillfocusFnc);
	m_wndDuration.SetEvent(WE_CHECKVALUE, _OnDurationCheckValueFnc);
	m_wndMethod.SetEvent(WE_SELENDOK, _OnMethodSelendokFnc);
	//m_wndMethod.SetEvent(WE_SETFOCUS, _OnMethodSetfocusFnc);
	//m_wndMethod.SetEvent(WE_KILLFOCUS, _OnMethodKillfocusFnc);
	m_wndMethod.SetEvent(WE_SELCHANGE, _OnMethodSelectChangeFnc);
	m_wndMethod.SetEvent(WE_LOADDATA, _OnMethodLoadDataFnc);
	m_wndQuyetdinhpheduyet.SetEvent(WE_CHECKVALUE, _OnQuyetdinhpheduyetCheckValueFnc);
	//m_wndMethod.SetEvent(WE_ADDNEW, _OnMethodAddNewFnc);
	//m_wndAmount.SetEvent(WE_CHANGE, _OnAmountChangeFnc);
	//m_wndAmount.SetEvent(WE_SETFOCUS, _OnAmountSetfocusFnc);
	//m_wndAmount.SetEvent(WE_KILLFOCUS, _OnAmountKillfocusFnc);
	m_wndAmount.SetEvent(WE_CHECKVALUE, _OnAmountCheckValueFnc);
	m_wndActive.SetEvent(WE_CLICK, _OnActiveSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	int nMode = GetMode();
	SetMode(nMode);
	if(nMode == VM_EDIT){
		GetDataToScreen();
	}

}
void CAdContractPackageDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndID.GetDlgCtrlID(), m_szID);
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_Text(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescription);
	DDX_TextEx(pDX, m_wndDate.GetDlgCtrlID(), m_szDate);
	DDX_Text(pDX, m_wndDuration.GetDlgCtrlID(), m_nDuration);
	DDX_TextEx(pDX, m_wndMethod.GetDlgCtrlID(), m_szMethodKey);
	DDX_Text(pDX, m_wndAmount.GetDlgCtrlID(), m_nAmount);
	DDX_Check(pDX, m_wndActive.GetDlgCtrlID(), m_bActive);
	DDX_Text(pDX, m_wndQuyetdinhpheduyet.GetDlgCtrlID(), m_szQuyetdinhpheduyet);

}
void CAdContractPackageDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("ID")] =  m_szID;
	m_jData[_T("Year")] =  m_nYear;
	m_jData[_T("Description")] =  m_szDescription;
	m_jData[_T("Date")] =  m_szDate;
	m_jData[_T("Duration")] =  m_nDuration;
	m_jData[_T("Method")] =  m_szMethodKey;
	m_jData[_T("Amount")] =  m_nAmount;
	m_jData[_T("Active")] =  m_bActive;
	}
	else
	{
			
	m_jData[_T("ID")].GetValue(m_szID);
	m_jData[_T("Year")].GetValue(m_nYear);
	m_jData[_T("Description")].GetValue(m_szDescription);
	m_jData[_T("Date")].GetValue(m_szDate);
	m_jData[_T("Duration")].GetValue(m_nDuration);
	m_jData[_T("Method")].GetValue(m_szMethodKey);
	m_jData[_T("Amount")].GetValue(m_nAmount);
	m_jData[_T("Active")].GetValue(m_bActive);
	}

}
void CAdContractPackageDialog::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szActive;
	if(m_nPackageId > 0)
	{
		szSQL.Format(_T("SELECT * FROM ad_contract_package WHERE adcp_contract_package_uid=%ld "), m_nPackageId);
	}
	else
		szSQL.Format(_T("SELECT * FROM ad_contract_package WHERE adcp_contract_package_id='%s' "), m_szID);

	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("adcp_year"), m_nYear);
		rs.GetValue(_T("adcp_date"), m_szDate);
		rs.GetValue(_T("adcp_description"), m_szDescription);
		rs.GetValue(_T("adcp_method"), m_szMethodKey);
		rs.GetValue(_T("adcp_Duration"), m_nDuration);
		rs.GetValue(_T("adcp_quyetdinhpheduyet"), m_szQuyetdinhpheduyet);
		rs.GetValue(_T("adcp_amount"), m_nAmount);
		
		rs.GetValue(_T("adcp_isactive"), szActive);
		if(szActive==_T("Y"))
			m_bActive = TRUE;
		else
			m_bActive = FALSE;
		UpdateData(FALSE);
	}

}
void CAdContractPackageDialog::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString tmpStr;
	m_ad_contractTbl.SetValue(_T("adcp_org_id"), pMF->GetModuleID());
	m_ad_contractTbl.SetValue(_T("adcp_createdby"), pMF->GetCurrentUser());
	m_ad_contractTbl.SetValue(_T("adcp_updatedby"), pMF->GetCurrentUser());
	//if(GetMode() == VM_EDIT){
	//	CString szWhere;
	//	szWhere.Format(_T(" WHERE adcp_contract_package_id='%s' "), m_szID);
	//	m_ad_contractTbl.Open(&pMF->m_db, szWhere);
	//}
	m_ad_contractTbl.SetValue(_T("adcp_createddate"), pMF->GetSysDateTime());
	m_ad_contractTbl.SetValue(_T("adcp_updateddate"), pMF->GetSysDateTime());
	m_ad_contractTbl.SetValue(_T("adcp_contract_package_id"), m_szID);
	m_ad_contractTbl.SetValue(_T("adcp_year"), m_nYear);
	m_ad_contractTbl.SetValue(_T("adcp_date"), m_szDate);
	m_ad_contractTbl.SetValue(_T("adcp_Description"), m_szDescription);
	m_ad_contractTbl.SetValue(_T("adcp_quyetdinhpheduyet"), m_szQuyetdinhpheduyet);
	m_ad_contractTbl.SetValue(_T("adcp_method"), m_szMethodKey);
	m_ad_contractTbl.SetValue(_T("adcp_Duration"), m_nDuration);
	m_ad_contractTbl.SetValue(_T("adcp_amount"), m_nAmount);
	m_ad_contractTbl.SetValue(_T("adcp_isactive"), m_bActive?_T("Y"):_T("N"));

}
void CAdContractPackageDialog::SetDefaultValues(){

	m_szID.Empty();
	m_nYear = 0;
	m_bActive=TRUE;
	m_szDate.Empty();
	m_szDescription.Empty();
	m_szPath.Empty();
	m_nDuration=0;
	m_szMethodKey.Empty();
	m_nAmount=0;
	m_szQuyetdinhpheduyet.Empty();

}
int CAdContractPackageDialog::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiDialog::SetMode(nMode); 
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 		CString szSQL, tmpStr; 
 		CRecord rs(&pMF->m_db);

		tmpStr = pMF->GetSysDate();
		int nyear = str2int(tmpStr.Left(4));
  		switch(nMode){ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			SetDefaultValues(); 
			m_nYear = nyear;
			m_wndID.SetFocus();
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
			m_wndID.EnableWindow(FALSE);
			m_wndYear.SetFocus();
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
		m_wndSave.EnableWindow(TRUE);
 		return nOldMode; 
}
/*void CAdContractPackageDialog::OnIDChange(){
	
} */
/*void CAdContractPackageDialog::OnIDSetfocus(){
	
} */
/*void CAdContractPackageDialog::OnIDKillfocus(){
	
} */
int CAdContractPackageDialog::OnQuyetdinhpheduyetCheckValue(){
	return 0;
}
int CAdContractPackageDialog::OnIDCheckValue(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData();
	if (m_szID.Trim().GetLength() <= 0)
	{
		return -1;
	}
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT count(*) ") \
				_T(" FROM ad_contract_package ") \
				_T(" WHERE adcp_contract_package_id='%s' ") \
				_T(" AND trunc(adcp_date) = to_date('%s', 'yyyy/mm/dd hh24:mi:ss')") \
				_T(" AND adcp_org_id = '%s'")
				, m_szID, m_szDate, pMF->GetModuleID());
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() > 0){
		m_wndID.SetToolTipMessage(_T("This [ID] is existing"));
		return -1;
	}
	return 0;
} 
/*void CAdContractPackageDialog::OnYearChange(){
	
} */
/*void CAdContractPackageDialog::OnYearSetfocus(){
	
} */
/*void CAdContractPackageDialog::OnYearKillfocus(){
	
} */
int CAdContractPackageDialog::OnYearCheckValue(){
	return 0;
} 
/*void CAdContractPackageDialog::OnDescriptionChange(){
	
} */
/*void CAdContractPackageDialog::OnDescriptionSetfocus(){
	
} */
/*void CAdContractPackageDialog::OnDescriptionKillfocus(){
	
} */
int CAdContractPackageDialog::OnDescriptionCheckValue(){
	return 0;
} 
/*void CAdContractPackageDialog::OnDateChange(){
	
} */
/*void CAdContractPackageDialog::OnDateSetfocus(){
	
} */
/*void CAdContractPackageDialog::OnDateKillfocus(){
	
} */
int CAdContractPackageDialog::OnDateCheckValue(){
	return 0;
} 
/*void CAdContractPackageDialog::OnDurationChange(){
	
} */
/*void CAdContractPackageDialog::OnDurationSetfocus(){
	
} */
/*void CAdContractPackageDialog::OnDurationKillfocus(){
	
} */
int CAdContractPackageDialog::OnDurationCheckValue(){
	return 0;
} 
void CAdContractPackageDialog::OnMethodSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CAdContractPackageDialog::OnMethodSelendok(){
	 
}
/*void CAdContractPackageDialog::OnMethodSetfocus(){
	
}*/
/*void CAdContractPackageDialog::OnMethodKillfocus(){
	
}*/
long CAdContractPackageDialog::OnMethodLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadSelectionList(&m_wndMethod, m_szMethodKey, _T("CONTRACT_METHOD"));
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndMethod.IsSearchKey() && !m_szMethodKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szMethodKey
};
	m_wndMethod.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndMethod.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CAdContractPackageDialog::OnMethodAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CAdContractPackageDialog::OnAmountChange(){
	
} */
/*void CAdContractPackageDialog::OnAmountSetfocus(){
	
} */
/*void CAdContractPackageDialog::OnAmountKillfocus(){
	
} */
int CAdContractPackageDialog::OnAmountCheckValue()
{
	if(m_nAmount <= 0)
	{
		ShowMessageBox(_T("Bạn cần nhập số tiền và số phải >0"), 0);
		return -1;
	}
	return 0;
} 

void CAdContractPackageDialog::OnActiveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}
void CAdContractPackageDialog::OnSaveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnSaveAdContractPackageDialog();
} 
void CAdContractPackageDialog::OnCloseSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CAdContractPackageDialog::OnAddAdContractPackageDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CAdContractPackageDialog::OnEditAdContractPackageDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CAdContractPackageDialog::OnDeleteAdContractPackageDialog(){
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
 		OnCancelAdContractPackageDialog(); 
 	}
	return 0;
}
int CAdContractPackageDialog::OnSaveAdContractPackageDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
 	CString szSQL; 

 	if(GetMode() == VM_ADD){ 
 		szSQL = m_ad_contractTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE adcp_contract_package_uid=%ld "), m_nPackageId); 
 		szSQL = m_ad_contractTbl.GetUpdateSQL(_T("adcp_contract_package_uid, adcp_createdby,adcp_createddate")); 
 		szSQL += szWhere; 
 	}
 _fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
		if(GetMode() == VM_EDIT)
			CGuiDialog::OnCancel();
		else
			SetMode(VM_ADD);
		((CAdContractPackageList*)m_pParent)->OnListLoadData();
 		
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
}
int CAdContractPackageDialog::OnCancelAdContractPackageDialog(){
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
int CAdContractPackageDialog::OnAdContractPackageDialogListLoadData(){
	return 0;
}
