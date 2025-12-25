#include "HMSSettingHolidayDialog.h"
#include "MainFrm.h"
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSSettingHolidayDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSSettingHolidayDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSSettingHolidayDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSSettingHolidayDialog*)pWnd)->OnListDeleteItem();
} 
static int _OnAutoCreateHolidayAllYearkFnc(CWnd *pWnd){
	 return ((CHMSSettingHolidayDialog*)pWnd)->OnAutoCreateHolidayAllYear();
} 


/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CHMSSettingHolidayDialog *)pWnd)->OnYearChange();
}*/
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CHMSSettingHolidayDialog *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CHMSSettingHolidayDialog *)pWnd)->OnYearKillfocus();
}*/
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CHMSSettingHolidayDialog *)pWnd)->OnYearCheckValue();
}
/*static void _OnDateChangeFnc(CWnd *pWnd){
	((CHMSSettingHolidayDialog *)pWnd)->OnDateChange();
} */
/*static void _OnDateSetfocusFnc(CWnd *pWnd){
	((CHMSSettingHolidayDialog *)pWnd)->OnDateSetfocus();} */ 
/*static void _OnDateKillfocusFnc(CWnd *pWnd){
	((CHMSSettingHolidayDialog *)pWnd)->OnDateKillfocus();
} */
static int _OnDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSSettingHolidayDialog *)pWnd)->OnDateCheckValue();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSSettingHolidayDialog *pVw = (CHMSSettingHolidayDialog *)pWnd;
	pVw->OnAddSelect();
} 
/*static void _OnDescChangeFnc(CWnd *pWnd){
	((CHMSSettingHolidayDialog *)pWnd)->OnDescChange();
} */
/*static void _OnDescSetfocusFnc(CWnd *pWnd){
	((CHMSSettingHolidayDialog *)pWnd)->OnDescSetfocus();} */ 
/*static void _OnDescKillfocusFnc(CWnd *pWnd){
	((CHMSSettingHolidayDialog *)pWnd)->OnDescKillfocus();
} */
static int _OnDescCheckValueFnc(CWnd *pWnd){
	return ((CHMSSettingHolidayDialog *)pWnd)->OnDescCheckValue();
} 
static int _OnAddHMSSettingHolidayDialogFnc(CWnd *pWnd){
	 return ((CHMSSettingHolidayDialog*)pWnd)->OnAddHMSSettingHolidayDialog();
} 
static int _OnEditHMSSettingHolidayDialogFnc(CWnd *pWnd){
	 return ((CHMSSettingHolidayDialog*)pWnd)->OnEditHMSSettingHolidayDialog();
} 
static int _OnDeleteHMSSettingHolidayDialogFnc(CWnd *pWnd){
	 return ((CHMSSettingHolidayDialog*)pWnd)->OnDeleteHMSSettingHolidayDialog();
} 
static int _OnSaveHMSSettingHolidayDialogFnc(CWnd *pWnd){
	 return ((CHMSSettingHolidayDialog*)pWnd)->OnSaveHMSSettingHolidayDialog();
} 
static int _OnCancelHMSSettingHolidayDialogFnc(CWnd *pWnd){
	 return ((CHMSSettingHolidayDialog*)pWnd)->OnCancelHMSSettingHolidayDialog();
} 
CHMSSettingHolidayDialog::CHMSSettingHolidayDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 715;
	m_nDlgHeight = 425;
	SetDefaultValues();
}
CHMSSettingHolidayDialog::~CHMSSettingHolidayDialog(){
}
void CHMSSettingHolidayDialog::OnCreateComponents(){
	m_wndList.Create(this,5, 35, 705, 355); 
	m_wndYearLabel.Create(this, _T("Year"), 5, 5, 85, 30);
	m_wndYear.Create(this,90, 5, 220, 30); 
	m_wndDateLabel.Create(this, _T("Date"), 10, 360, 90, 385);
	m_wndDate.Create(this,95, 360, 220, 385); 
	m_wndDate.SetButtonMode(BUTTON_CALENDAR);
	m_wndAdd.Create(this, _T("&Add"), 615, 360, 695, 385);
	m_wndDescLabel.Create(this, _T("Desc"), 240, 360, 320, 385);
	m_wndDesc.Create(this,325, 360, 610, 410); 

}
void CHMSSettingHolidayDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndYear.SetCheckValue(true);
	m_wndYear.LimitText(35);
	//m_wndDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndDate.SetCheckValue(true);
	m_wndDesc.SetMultiLine(TRUE);
	m_wndDesc.SetLimitText(35);
	//m_wndDesc.SetCheckValue(true);


	m_wndList.InsertColumn(0, _T("Date"), CFMT_DATE, 100);
	m_wndList.InsertColumn(1, _T("Note"), CFMT_TEXT, 300);
	m_wndList.InsertColumn(2, _T("User"), CFMT_TEXT, 100);


	m_hms_holiday_settingTbl.SetTableName(_T("hms_holiday_setting"));
	m_hms_holiday_settingTbl.AddField(_T("hhs_year"),dfInteger);
	m_hms_holiday_settingTbl.AddField(_T("hhs_date"),dfDate);
	m_hms_holiday_settingTbl.AddField(_T("hhs_userid"),dfText,15);
	m_hms_holiday_settingTbl.AddField(_T("hhs_note"),dfText,254);

}
void CHMSSettingHolidayDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndList.AddEvent(2, _T("Tự động tạo các ngày nghỉ trong năm"), _OnAutoCreateHolidayAllYearkFnc);
	
		//m_wndYear.SetEvent(WE_CHANGE, _OnYearChangeFnc);
	//m_wndYear.SetEvent(WE_SETFOCUS, _OnYearSetfocusFnc);
	//m_wndYear.SetEvent(WE_KILLFOCUS, _OnYearKillfocusFnc);
	m_wndYear.SetEvent(WE_CHECKVALUE, _OnYearCheckValueFnc);
	//m_wndDate.SetEvent(WE_CHANGE, _OnDateChangeFnc);
	//m_wndDate.SetEvent(WE_SETFOCUS, _OnDateSetfocusFnc);
	//m_wndDate.SetEvent(WE_KILLFOCUS, _OnDateKillfocusFnc);
	m_wndDate.SetEvent(WE_CHECKVALUE, _OnDateCheckValueFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	//m_wndDesc.SetEvent(WE_CHANGE, _OnDescChangeFnc);
	//m_wndDesc.SetEvent(WE_SETFOCUS, _OnDescSetfocusFnc);
	//m_wndDesc.SetEvent(WE_KILLFOCUS, _OnDescKillfocusFnc);
	m_wndDesc.SetEvent(WE_CHECKVALUE, _OnDescCheckValueFnc);
	
	
	SetMode(VM_ADD);
	
	

}
void CHMSSettingHolidayDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndDate.GetDlgCtrlID(), m_szDate);
	DDX_Text(pDX, m_wndDesc.GetDlgCtrlID(), m_szDesc);

}
void CHMSSettingHolidayDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Year")] =  m_nYear;
	m_jData[_T("Date")] =  m_szDate;
	m_jData[_T("Desc")] =  m_szDesc;
	}
	else
	{
			
	m_jData[_T("Year")].GetValue(m_nYear);
	m_jData[_T("Date")].GetValue(m_szDate);
	m_jData[_T("Desc")].GetValue(m_szDesc);
	}

}
void CHMSSettingHolidayDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSSettingHolidayDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_hms_holiday_settingTbl.SetValue(_T("hhs_year"),str2int(m_szDate.Left(4)));
	m_hms_holiday_settingTbl.SetValue(_T("hhs_date"),m_szDate);
	m_hms_holiday_settingTbl.SetValue(_T("hhs_userid"),pMF->GetCurrentUser());
	m_hms_holiday_settingTbl.SetValue(_T("hhs_note"),m_szDesc);

}
void CHMSSettingHolidayDialog::SetDefaultValues(){

	m_nYear=0;
	m_szDate.Empty();
	m_szDesc.Empty();

}
int CHMSSettingHolidayDialog::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 4, -1);
 			SetDefaultValues();
			m_szDate= pMF->GetSysDate();
			OnListLoadData();
			m_nYear= str2int(m_szDate.Left(4));
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
void CHMSSettingHolidayDialog::OnListDblClick(){
	
} 
void CHMSSettingHolidayDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSSettingHolidayDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL;
	int nCel = m_wndList.GetCurSel();
	if (nCel <0)
		return -1;

	szSQL.Format(_T("delete from hms_holiday_setting where trunc(hhs_date)=trunc(to_date('%s', 'yyyy/mm/dd hh24:mi:ss')) ")
		, m_wndList.GetItemText(nCel,0));
	int nCount = pMF->ExecSQL(szSQL);
	if(nCount >0)
		OnListLoadData();
	else
		_msg(_T("xóa không thành công"));

	 return 0;
} 

int CHMSSettingHolidayDialog::OnAutoCreateHolidayAllYear()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL;
	szSQL.Format(_T("INSERT INTO hms_holiday_setting(    ") \
				_T("		hhs_year, hhs_date, hhs_userid, hhs_note)   ") \
				_T(" VALUES (%d, '%d/01/01', '%s', 'Tết dương lịch') "), m_nYear, m_nYear, pMF->GetCurrentUser());
	pMF->ExecSQL(szSQL);

		szSQL.Format(_T("INSERT INTO hms_holiday_setting(    ") \
				_T("		hhs_year, hhs_date, hhs_userid, hhs_note)   ") \
				_T(" VALUES ('%d', '%d/04/30', '%s', 'Giải phóng đất nước') "), m_nYear, m_nYear, pMF->GetCurrentUser());
	pMF->ExecSQL(szSQL);


		szSQL.Format(_T("INSERT INTO hms_holiday_setting(    ") \
				_T("		hhs_year, hhs_date, hhs_userid, hhs_note)   ") \
				_T(" VALUES ('%d', '%d/05/01', '%s', 'Nghỉ lễ lao động') "), m_nYear, m_nYear, pMF->GetCurrentUser());
	pMF->ExecSQL(szSQL);


		szSQL.Format(_T("INSERT INTO hms_holiday_setting(    ") \
				_T("		hhs_year, hhs_date, hhs_userid, hhs_note)   ") \
				_T(" VALUES ('%d', '%d/09/02', '%s', 'Ngày quốc khánh') "), m_nYear, m_nYear, pMF->GetCurrentUser());
	pMF->ExecSQL(szSQL);

	OnListLoadData();
		return 1;

}
long CHMSSettingHolidayDialog::OnListLoadData(){

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad();
	szSQL.Format(_T("select * from hms_holiday_setting where hhs_year =%d order by hhs_date "), m_nYear);
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("hhs_date")), 
			rs.GetValue(_T("hhs_note")), 
			rs.GetValue(_T("hhs_userid")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}
/*void CHMSSettingHolidayDialog::OnYearChange(){
	
} */
/*void CHMSSettingHolidayDialog::OnYearSetfocus(){
	
} */
/*void CHMSSettingHolidayDialog::OnYearKillfocus(){
	
} */
int CHMSSettingHolidayDialog::OnYearCheckValue(){
	
	return OnListLoadData();
} 

/*void CHMSSettingHolidayDialog::OnDateChange(){
	
} */
/*void CHMSSettingHolidayDialog::OnDateSetfocus(){
	
} */
/*void CHMSSettingHolidayDialog::OnDateKillfocus(){
	
} */
int CHMSSettingHolidayDialog::OnDateCheckValue(){
	return 0;
} 
void CHMSSettingHolidayDialog::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveHMSSettingHolidayDialog();
	
} 
/*void CHMSSettingHolidayDialog::OnDescChange(){
	
} */
/*void CHMSSettingHolidayDialog::OnDescSetfocus(){
	
} */
/*void CHMSSettingHolidayDialog::OnDescKillfocus(){
	
} */
int CHMSSettingHolidayDialog::OnDescCheckValue(){
	return 0;
} 
int CHMSSettingHolidayDialog::OnAddHMSSettingHolidayDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSSettingHolidayDialog::OnEditHMSSettingHolidayDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSSettingHolidayDialog::OnDeleteHMSSettingHolidayDialog(){
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
 		OnCancelHMSSettingHolidayDialog();
 	}
	return 0;
}
int CHMSSettingHolidayDialog::OnSaveHMSSettingHolidayDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
 		szSQL = m_hms_holiday_settingTbl.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
 		szWhere.Format(_T(" WHERE"));
 		szSQL = m_hms_holiday_settingTbl.GetUpdateSQL(_T("createdby,createddate"));
 		szSQL += szWhere;
 	}
 _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
		OnListLoadData();
 		SetMode(VM_ADD);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSSettingHolidayDialog::OnCancelHMSSettingHolidayDialog(){
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
int CHMSSettingHolidayDialog::OnHMSSettingHolidayDialogListLoadData(){
	return 0;
}
