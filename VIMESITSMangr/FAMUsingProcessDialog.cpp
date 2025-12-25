#include "FAMUsingProcessDialog.h"
#include "MainFrm.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CFAMUsingProcessDialog *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CFAMUsingProcessDialog *)pWnd)->OnFromDateSetfocus();} */ 
static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CFAMUsingProcessDialog *)pWnd)->OnFromDateKillfocus();
}
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CFAMUsingProcessDialog *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CFAMUsingProcessDialog *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CFAMUsingProcessDialog *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CFAMUsingProcessDialog *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CFAMUsingProcessDialog *)pWnd)->OnToDateCheckValue();
} 
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAMUsingProcessDialog* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CFAMUsingProcessDialog *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CFAMUsingProcessDialog *)pWnd)->OnDepartmentKillfocus();
}*/
static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CFAMUsingProcessDialog *)pWnd)->OnDepartmentKillfocus();
}
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CFAMUsingProcessDialog *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CFAMUsingProcessDialog *)pWnd)->OnDepartmentAddNew();
}*/
static void _OnDeliverBySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAMUsingProcessDialog* )pWnd)->OnDeliverBySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDeliverBySelendokFnc(CWnd *pWnd){
	((CFAMUsingProcessDialog *)pWnd)->OnDeliverBySelendok();
}
/*static void _OnDeliverBySetfocusFnc(CWnd *pWnd){
	((CFAMUsingProcessDialog *)pWnd)->OnDeliverByKillfocus();
}*/
/*static void _OnDeliverByKillfocusFnc(CWnd *pWnd){
	((CFAMUsingProcessDialog *)pWnd)->OnDeliverByKillfocus();
}*/
static long _OnDeliverByLoadDataFnc(CWnd *pWnd){
	return ((CFAMUsingProcessDialog *)pWnd)->OnDeliverByLoadData();
}
/*static void _OnDeliverByAddNewFnc(CWnd *pWnd){
	((CFAMUsingProcessDialog *)pWnd)->OnDeliverByAddNew();
}*/
static void _OnReceiveBySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAMUsingProcessDialog* )pWnd)->OnReceiveBySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReceiveBySelendokFnc(CWnd *pWnd){
	((CFAMUsingProcessDialog *)pWnd)->OnReceiveBySelendok();
}
/*static void _OnReceiveBySetfocusFnc(CWnd *pWnd){
	((CFAMUsingProcessDialog *)pWnd)->OnReceiveByKillfocus();
}*/
/*static void _OnReceiveByKillfocusFnc(CWnd *pWnd){
	((CFAMUsingProcessDialog *)pWnd)->OnReceiveByKillfocus();
}*/
static long _OnReceiveByLoadDataFnc(CWnd *pWnd){
	return ((CFAMUsingProcessDialog *)pWnd)->OnReceiveByLoadData();
}
/*static void _OnReceiveByAddNewFnc(CWnd *pWnd){
	((CFAMUsingProcessDialog *)pWnd)->OnReceiveByAddNew();
}*/
/*static void _OnCurrentValueChangeFnc(CWnd *pWnd){
	((CFAMUsingProcessDialog *)pWnd)->OnCurrentValueChange();
} */
/*static void _OnCurrentValueSetfocusFnc(CWnd *pWnd){
	((CFAMUsingProcessDialog *)pWnd)->OnCurrentValueSetfocus();} */ 
/*static void _OnCurrentValueKillfocusFnc(CWnd *pWnd){
	((CFAMUsingProcessDialog *)pWnd)->OnCurrentValueKillfocus();
} */
static int _OnCurrentValueCheckValueFnc(CWnd *pWnd){
	return ((CFAMUsingProcessDialog *)pWnd)->OnCurrentValueCheckValue();
} 
static void _OnTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAMUsingProcessDialog* )pWnd)->OnTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTypeSelendokFnc(CWnd *pWnd){
	((CFAMUsingProcessDialog *)pWnd)->OnTypeSelendok();
}
/*static void _OnTypeSetfocusFnc(CWnd *pWnd){
	((CFAMUsingProcessDialog *)pWnd)->OnTypeKillfocus();
}*/
static void _OnTypeKillfocusFnc(CWnd *pWnd){
	((CFAMUsingProcessDialog *)pWnd)->OnTypeKillfocus();
}
static long _OnTypeLoadDataFnc(CWnd *pWnd){
	return ((CFAMUsingProcessDialog *)pWnd)->OnTypeLoadData();
}
/*static void _OnTypeAddNewFnc(CWnd *pWnd){
	((CFAMUsingProcessDialog *)pWnd)->OnTypeAddNew();
}*/
static void _OnEmployeeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAMUsingProcessDialog* )pWnd)->OnEmployeeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnEmployeeSelendokFnc(CWnd *pWnd){
	((CFAMUsingProcessDialog *)pWnd)->OnEmployeeSelendok();
}
/*static void _OnEmployeeSetfocusFnc(CWnd *pWnd){
	((CFAMUsingProcessDialog *)pWnd)->OnEmployeeKillfocus();
}*/
/*static void _OnEmployeeKillfocusFnc(CWnd *pWnd){
	((CFAMUsingProcessDialog *)pWnd)->OnEmployeeKillfocus();
}*/
static long _OnEmployeeLoadDataFnc(CWnd *pWnd){
	return ((CFAMUsingProcessDialog *)pWnd)->OnEmployeeLoadData();
}
/*static void _OnEmployeeAddNewFnc(CWnd *pWnd){
	((CFAMUsingProcessDialog *)pWnd)->OnEmployeeAddNew();
}*/
/*static void _OnDeposeToChangeFnc(CWnd *pWnd){
	((CFAMUsingProcessDialog *)pWnd)->OnDeposeToChange();
} */
/*static void _OnDeposeToSetfocusFnc(CWnd *pWnd){
	((CFAMUsingProcessDialog *)pWnd)->OnDeposeToSetfocus();} */ 
/*static void _OnDeposeToKillfocusFnc(CWnd *pWnd){
	((CFAMUsingProcessDialog *)pWnd)->OnDeposeToKillfocus();
} */
static int _OnDeposeToCheckValueFnc(CWnd *pWnd){
	return ((CFAMUsingProcessDialog *)pWnd)->OnDeposeToCheckValue();
} 
static void _OnbtnSaveSelectFnc(CWnd *pWnd){
	CFAMUsingProcessDialog *pVw = (CFAMUsingProcessDialog *)pWnd;
	pVw->OnbtnSaveSelect();
} 
static void _OnbtnCancelSelectFnc(CWnd *pWnd){
	CFAMUsingProcessDialog *pVw = (CFAMUsingProcessDialog *)pWnd;
	pVw->OnbtnCancelSelect();
} 
static int _OnAddFAMUsingProcessDialogFnc(CWnd *pWnd){
	 return ((CFAMUsingProcessDialog*)pWnd)->OnAddFAMUsingProcessDialog();
} 
static int _OnEditFAMUsingProcessDialogFnc(CWnd *pWnd){
	 return ((CFAMUsingProcessDialog*)pWnd)->OnEditFAMUsingProcessDialog();
} 
static int _OnDeleteFAMUsingProcessDialogFnc(CWnd *pWnd){
	 return ((CFAMUsingProcessDialog*)pWnd)->OnDeleteFAMUsingProcessDialog();
} 
static int _OnSaveFAMUsingProcessDialogFnc(CWnd *pWnd){
	 return ((CFAMUsingProcessDialog*)pWnd)->OnSaveFAMUsingProcessDialog();
} 
static int _OnCancelFAMUsingProcessDialogFnc(CWnd *pWnd){
	 return ((CFAMUsingProcessDialog*)pWnd)->OnCancelFAMUsingProcessDialog();
}

/*static void _OnDeliverBy1ChangeFnc(CWnd *pWnd){
	((CFAMUsingProcessDialog *)pWnd)->OnDeliverBy1Change();
} */
/*static void _OnDeliverBy1SetfocusFnc(CWnd *pWnd){
	((CFAMUsingProcessDialog *)pWnd)->OnDeliverBy1Setfocus();} */ 
/*static void _OnDeliverBy1KillfocusFnc(CWnd *pWnd){
	((CFAMUsingProcessDialog *)pWnd)->OnDeliverBy1Killfocus();
} */
static int _OnDeliverBy1CheckValueFnc(CWnd *pWnd){
	return ((CFAMUsingProcessDialog *)pWnd)->OnDeliverBy1CheckValue();
}

/*static void _OnReceiveBy1ChangeFnc(CWnd *pWnd){
	((CFAMUsingProcessDialog *)pWnd)->OnReceiveBy1Change();
} */
/*static void _OnReceiveBy1SetfocusFnc(CWnd *pWnd){
	((CFAMUsingProcessDialog *)pWnd)->OnReceiveBy1Setfocus();} */ 
/*static void _OnReceiveBy1KillfocusFnc(CWnd *pWnd){
	((CFAMUsingProcessDialog *)pWnd)->OnReceiveBy1Killfocus();
} */
static int _OnReceiveBy1CheckValueFnc(CWnd *pWnd){
	return ((CFAMUsingProcessDialog *)pWnd)->OnReceiveBy1CheckValue();
}

/*static void _OnEmployee1ChangeFnc(CWnd *pWnd){
	((CFAMUsingProcessDialog *)pWnd)->OnEmployee1Change();
} */
/*static void _OnEmployee1SetfocusFnc(CWnd *pWnd){
	((CFAMUsingProcessDialog *)pWnd)->OnEmployee1Setfocus();} */ 
/*static void _OnEmployee1KillfocusFnc(CWnd *pWnd){
	((CFAMUsingProcessDialog *)pWnd)->OnEmployee1Killfocus();
} */
static int _OnEmployee1CheckValueFnc(CWnd *pWnd){
	return ((CFAMUsingProcessDialog *)pWnd)->OnEmployee1CheckValue();
}

CFAMUsingProcessDialog::CFAMUsingProcessDialog(CWnd *pParent):
	CGuiDialog(pParent)
{
	m_nDlgWidth = 900;
	m_nDlgHeight = 695;
	SetDefaultValues();
}
CFAMUsingProcessDialog::~CFAMUsingProcessDialog()
{
	m_bUsed = false;
}
void CFAMUsingProcessDialog::OnCreateComponents()
{
	m_wndTypeLabel.Create(this, _T("Type"), 5, 10, 85, 35);
	m_wndType.Create(this,90, 10, 225, 35); 
	m_wndCurrentValueLabel.Create(this, _T("Value"), 230, 10, 300, 35);
	m_wndCurrentValue.Create(this,305, 10, 395, 35); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 5, 40, 85, 65);
	m_wndFromDate.Create(this,90, 40, 180, 65); 
	m_wndToDateLabel.Create(this, _T("To Date"), 230, 40, 300, 65);
	m_wndToDate.Create(this,305, 40, 395, 65); 
	m_wndDepartmentLabel.Create(this, _T("Department"), 5, 70, 85, 95);
	m_wndDepartment.Create(this,90, 70, 395, 95);

	m_wndEmployeeLabel.Create(this, _T("Employee Use"), 5, 100, 85, 125);
	m_wndEmployee.Create(this,90, 100, 395, 125);
	m_wndEmployee1.Create(this,90, 100, 395, 125);

	m_wndDeliverByLabel.Create(this, _T("Deliver By"), 5, 130, 85, 155);
	m_wndDeliverBy.Create(this,90, 130, 395, 155);
	m_wndDeliverBy1.Create(this,90, 130, 395, 155);

	m_wndReceiveByLabel.Create(this, _T("Receive By"), 5, 160, 85, 185);
	m_wndReceiveBy.Create(this,90, 160, 395, 185);
	m_wndReceiveBy1.Create(this,90, 160, 395, 185);

	m_wndDeposeToLabel.Create(this, _T("Depose To"), 5, 190, 85, 215);
	m_wndDeposeTo.Create(this,90, 190, 395, 215); 
	m_wndbtnSave.Create(this, _T("Save"), 230, 220, 310, 245);
	m_wndbtnCancel.Create(this, _T("Cancel"), 315, 220, 395, 245);

}
void CFAMUsingProcessDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
	m_wndType.SetCheckValue(true);
	m_wndType.LimitText(1);
	m_wndCurrentValue.SetLimitText(16);
	m_wndCurrentValue.SetCurrencyFormat(TRUE);
	m_wndCurrentValue.SetCheckValue(true);
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(false);
	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(15);
	//m_wndEmployee.SetCheckValue(true);
	m_wndEmployee.LimitText(15);
	//m_wndDeliverBy.SetCheckValue(true);
	m_wndDeliverBy.LimitText(15);
	//m_wndReceiveBy.SetCheckValue(true);
	m_wndReceiveBy.LimitText(15);
	m_wndDeposeTo.SetLimitText(254);
	m_wndDeposeTo.SetCheckValue(true);

	m_wndDeliverBy1.SetLimitText(75);
	m_wndReceiveBy1.SetLimitText(75);
	m_wndEmployee1.SetLimitText(75);

	m_wndType.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndType.InsertColumn(1, _T("Description"), CFMT_TEXT, 200);


	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 70);
	m_wndDepartment.InsertColumn(1, _T("Description"), CFMT_TEXT, 250);


	m_wndEmployee.InsertColumn(0, _T("ID"), CFMT_TEXT, 70);
	m_wndEmployee.InsertColumn(1, _T("Description"), CFMT_TEXT, 200);


	m_wndDeliverBy.InsertColumn(0, _T("ID"), CFMT_TEXT, 70);
	m_wndDeliverBy.InsertColumn(1, _T("Description"), CFMT_TEXT, 200);


	m_wndReceiveBy.InsertColumn(0, _T("ID"), CFMT_TEXT, 70);
	m_wndReceiveBy.InsertColumn(1, _T("Description"), CFMT_TEXT, 200);

	m_fam_usingprocessTbl.SetTableName(_T("fam_usingprocess"));
	m_fam_usingprocessTbl.AddField(_T("faup_createdby"), dfText, 15); 
	m_fam_usingprocessTbl.AddField(_T("faup_createddate"), dfDateTime); 
	m_fam_usingprocessTbl.AddField(_T("faup_updatedby"), dfText, 15); 
	m_fam_usingprocessTbl.AddField(_T("faup_updateddate"), dfDateTime); 
	m_fam_usingprocessTbl.AddField(_T("faup_assetno"), dfText, 15); 
	m_fam_usingprocessTbl.AddField(_T("faup_idx"), dfLong); 
	m_fam_usingprocessTbl.AddField(_T("faup_fromdate"), dfDateTime); 
	m_fam_usingprocessTbl.AddField(_T("faup_todate"), dfDateTime);
	m_fam_usingprocessTbl.AddField(_T("faup_olddept"), dfText, 15);
	m_fam_usingprocessTbl.AddField(_T("faup_newdept"), dfText, 15); 
	m_fam_usingprocessTbl.AddField(_T("faup_deliveby"), dfText, 75); 
	m_fam_usingprocessTbl.AddField(_T("faup_receiveby"), dfText, 75); 
	m_fam_usingprocessTbl.AddField(_T("faup_currentvalue"), dfDouble); 
	m_fam_usingprocessTbl.AddField(_T("faup_type"), dfText, 1); 
	m_fam_usingprocessTbl.AddField(_T("faup_usingby"), dfText, 75); 
	m_fam_usingprocessTbl.AddField(_T("faup_status"), dfText, 1); 
	m_fam_usingprocessTbl.AddField(_T("faup_deposeto"), dfText, 254); 
	SetWindowTitle(_T("Usage Information"));

}
void CFAMUsingProcessDialog::OnSetWindowEvents(){
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndDepartment.SetEvent(WE_SELENDOK, _OnDepartmentSelendokFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	//m_wndDepartment.SetEvent(WE_ADDNEW, _OnDepartmentAddNewFnc);
	m_wndDeliverBy.SetEvent(WE_SELENDOK, _OnDeliverBySelendokFnc);
	//m_wndDeliverBy.SetEvent(WE_SETFOCUS, _OnDeliverBySetfocusFnc);
	//m_wndDeliverBy.SetEvent(WE_KILLFOCUS, _OnDeliverByKillfocusFnc);
	m_wndDeliverBy.SetEvent(WE_SELCHANGE, _OnDeliverBySelectChangeFnc);
	m_wndDeliverBy.SetEvent(WE_LOADDATA, _OnDeliverByLoadDataFnc);
	//m_wndDeliverBy.SetEvent(WE_ADDNEW, _OnDeliverByAddNewFnc);
	m_wndReceiveBy.SetEvent(WE_SELENDOK, _OnReceiveBySelendokFnc);
	//m_wndReceiveBy.SetEvent(WE_SETFOCUS, _OnReceiveBySetfocusFnc);
	//m_wndReceiveBy.SetEvent(WE_KILLFOCUS, _OnReceiveByKillfocusFnc);
	m_wndReceiveBy.SetEvent(WE_SELCHANGE, _OnReceiveBySelectChangeFnc);
	m_wndReceiveBy.SetEvent(WE_LOADDATA, _OnReceiveByLoadDataFnc);
	//m_wndReceiveBy.SetEvent(WE_ADDNEW, _OnReceiveByAddNewFnc);
	//m_wndCurrentValue.SetEvent(WE_CHANGE, _OnCurrentValueChangeFnc);
	//m_wndCurrentValue.SetEvent(WE_SETFOCUS, _OnCurrentValueSetfocusFnc);
	//m_wndCurrentValue.SetEvent(WE_KILLFOCUS, _OnCurrentValueKillfocusFnc);
	m_wndCurrentValue.SetEvent(WE_CHECKVALUE, _OnCurrentValueCheckValueFnc);
	m_wndType.SetEvent(WE_SELENDOK, _OnTypeSelendokFnc);
	//m_wndType.SetEvent(WE_SETFOCUS, _OnTypeSetfocusFnc);
	m_wndType.SetEvent(WE_KILLFOCUS, _OnTypeKillfocusFnc);
	m_wndType.SetEvent(WE_SELCHANGE, _OnTypeSelectChangeFnc);
	m_wndType.SetEvent(WE_LOADDATA, _OnTypeLoadDataFnc);
	//m_wndType.SetEvent(WE_ADDNEW, _OnTypeAddNewFnc);
	m_wndEmployee.SetEvent(WE_SELENDOK, _OnEmployeeSelendokFnc);
	//m_wndEmployee.SetEvent(WE_SETFOCUS, _OnEmployeeSetfocusFnc);
	//m_wndEmployee.SetEvent(WE_KILLFOCUS, _OnEmployeeKillfocusFnc);
	m_wndEmployee.SetEvent(WE_SELCHANGE, _OnEmployeeSelectChangeFnc);
	m_wndEmployee.SetEvent(WE_LOADDATA, _OnEmployeeLoadDataFnc);
	//m_wndEmployee.SetEvent(WE_ADDNEW, _OnEmployeeAddNewFnc);
	//m_wndDeposeTo.SetEvent(WE_CHANGE, _OnDeposeToChangeFnc);
	//m_wndDeposeTo.SetEvent(WE_SETFOCUS, _OnDeposeToSetfocusFnc);
	//m_wndDeposeTo.SetEvent(WE_KILLFOCUS, _OnDeposeToKillfocusFnc);
	m_wndDeposeTo.SetEvent(WE_CHECKVALUE, _OnDeposeToCheckValueFnc);

	//m_wndDeliverBy1.SetEvent(WE_CHANGE, _OnDeliverBy1ChangeFnc);
	//m_wndDeliverBy1.SetEvent(WE_SETFOCUS, _OnDeliverBy1SetfocusFnc);
	//m_wndDeliverBy1.SetEvent(WE_KILLFOCUS, _OnDeliverBy1KillfocusFnc);
	m_wndDeliverBy1.SetEvent(WE_CHECKVALUE, _OnDeliverBy1CheckValueFnc);

	//m_wndReceiveBy1.SetEvent(WE_CHANGE, _OnReceiveBy1ChangeFnc);
	//m_wndReceiveBy1.SetEvent(WE_SETFOCUS, _OnReceiveBy1SetfocusFnc);
	//m_wndReceiveBy1.SetEvent(WE_KILLFOCUS, _OnReceiveBy1KillfocusFnc);
	m_wndReceiveBy1.SetEvent(WE_CHECKVALUE, _OnReceiveBy1CheckValueFnc);

	//m_wndEmployee1.SetEvent(WE_CHANGE, _OnEmployee1ChangeFnc);
	//m_wndEmployee1.SetEvent(WE_SETFOCUS, _OnEmployee1SetfocusFnc);
	//m_wndEmployee1.SetEvent(WE_KILLFOCUS, _OnEmployee1KillfocusFnc);
	m_wndEmployee1.SetEvent(WE_CHECKVALUE, _OnEmployee1CheckValueFnc);

	m_wndbtnSave.SetEvent(WE_CLICK, _OnbtnSaveSelectFnc);
	m_wndbtnCancel.SetEvent(WE_CLICK, _OnbtnCancelSelectFnc);

	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CString szSQL;
	CRecord rs(&pMF->m_db);
	
	//MessageBox(ToString(GetMode()));
	isSetDep = false;
	m_bChangeDept = false;
	m_bUsed = false;
	//m_szDept = _T("");
	m_szNType = _T("A");
	m_szDType = _T("E");
	m_szIStatus = _T("I");
	m_szOStatus = _T("O");
	m_szStatus.Empty();

	if (pMF->m_szUseHRM.Trim() == _T("N"))
		m_bShow = true;
	else
		m_bShow = false;

	if (GetMode() == VM_ADD)
	{
		szSQL.Format(_T("SELECT Count(*) FROM fam_usingprocess ")\
					 _T("WHERE faup_assetno='%s' AND faup_type='A'"), m_szAssetNo);

		rs.ExecSQL(szSQL);

		if (rs.GetIntValue() > 0)
		{
			m_szTypeFilter.Format(_T(" AND faut_id<>'A' "));
		}
		else
			m_szTypeFilter.Empty();
	}

	SetMode(GetMode());

	if (GetMode() == VM_EDIT)
	{
		GetDataToScreen();
		//UpdateData(TRUE);
		if (m_szTypeKey == m_szDType)
		{
			m_wndType.EnableWindow(FALSE);
			m_wndToDate.EnableWindow(FALSE);
			m_wndDepartment.EnableWindow(FALSE);
			m_wndEmployee.EnableWindow(FALSE);
			m_wndDeliverBy.EnableWindow(FALSE);
			m_wndReceiveBy.EnableWindow(FALSE);

			m_wndEmployee1.EnableWindow(FALSE);
			m_wndDeliverBy1.EnableWindow(FALSE);
			m_wndReceiveBy1.EnableWindow(FALSE);
		}
		else
		{
			//Textbox DeposeTo bi vo hieu hoa
			m_wndDeposeTo.EnableWindow(FALSE);
			m_wndCurrentValue.EnableWindow(FALSE);
			m_bUsed = true;
		}
	}
}
void CFAMUsingProcessDialog::OnDoDataExchange(CDataExchange* pDX)
{
	DDX_TextEx(pDX, m_wndType.GetDlgCtrlID(), m_szTypeKey);
	DDX_Text(pDX, m_wndCurrentValue.GetDlgCtrlID(), m_nCurrentValue);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_TextEx(pDX, m_wndEmployee.GetDlgCtrlID(), m_szEmployeeKey);
	DDX_TextEx(pDX, m_wndDeliverBy.GetDlgCtrlID(), m_szDeliverByKey);
	DDX_TextEx(pDX, m_wndReceiveBy.GetDlgCtrlID(), m_szReceiveByKey);
	DDX_Text(pDX, m_wndDeposeTo.GetDlgCtrlID(), m_szDeposeTo);

	DDX_Text(pDX, m_wndDeliverBy1.GetDlgCtrlID(), m_szDeliverBy);
	DDX_Text(pDX, m_wndReceiveBy1.GetDlgCtrlID(), m_szReceiveBy);
	DDX_Text(pDX, m_wndEmployee1.GetDlgCtrlID(), m_szEmployee);
}
void CFAMUsingProcessDialog::GetDataToScreen()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM fam_usingprocess WHERE trim(faup_assetno)=trim('%s') AND faup_idx=%d"), pMF->m_szAssetNo, m_nIndex);
	rs.ExecSQL(szSQL);	
	if (!rs.IsEOF())
	{	
		rs.GetValue(_T("faup_fromdate"), m_szFromDate);
		rs.GetValue(_T("faup_todate"), m_szToDate);
		rs.GetValue(_T("faup_newdept"), m_szDepartmentKey);
		if (pMF->m_szUseHRM.Trim() == _T("N"))
		{
			rs.GetValue(_T("faup_deliveby"), m_szDeliverBy);
			rs.GetValue(_T("faup_receiveby"), m_szReceiveBy);
			rs.GetValue(_T("faup_usingby"), m_szEmployee);
		}
		else
		{
			rs.GetValue(_T("faup_deliveby"), m_szDeliverByKey);
			rs.GetValue(_T("faup_receiveby"), m_szReceiveByKey);
			rs.GetValue(_T("faup_usingby"), m_szEmployeeKey);
		}
		rs.GetValue(_T("faup_currentvalue"), m_nCurrentValue);
		rs.GetValue(_T("faup_type"), m_szTypeKey);
		
		rs.GetValue(_T("faup_deposeto"), m_szDeposeTo);

		if (rs.GetValue(_T("faup_type")) != _T("A"))
		{
			m_szTypeFilter.Format(_T(" AND faut_id<>'A' "));
		}
		UpdateData(FALSE);
		//SetMode(VM_EDIT);
	}

}
void CFAMUsingProcessDialog::GetScreenToData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if (GetMode() == VM_ADD)
	{
		CRecord rs(&pMF->m_db);
		CString szSQL;
		szSQL.Format(_T("SELECT coalesce(max(faup_idx), 0)+1 FROM fam_usingprocess WHERE faup_assetno='%s'"), pMF->m_szAssetNo);
		rs.ExecSQL(szSQL);
		m_nIndex = rs.GetIntValue();
	}
	m_fam_usingprocessTbl.SetValue(_T("faup_createdby"), pMF->GetCurrentUser());
	m_fam_usingprocessTbl.SetValue(_T("faup_createddate"), pMF->GetSysDateTime());
	m_fam_usingprocessTbl.SetValue(_T("faup_updatedby"), pMF->GetCurrentUser());
	m_fam_usingprocessTbl.SetValue(_T("faup_updateddate"), pMF->GetSysDateTime());
	m_fam_usingprocessTbl.SetValue(_T("faup_assetno"), m_szAssetNo);
	m_fam_usingprocessTbl.SetValue(_T("faup_idx"), m_nIndex);
	m_fam_usingprocessTbl.SetValue(_T("faup_fromdate"), m_szFromDate);
	m_fam_usingprocessTbl.SetValue(_T("faup_todate"), m_szToDate);
	m_fam_usingprocessTbl.SetValue(_T("faup_olddept"), pMF->m_szDepartment);
	m_fam_usingprocessTbl.SetValue(_T("faup_newdept"), m_szDepartmentKey);

	if (pMF->m_szUseHRM.Trim() == _T("N"))
	{
		m_fam_usingprocessTbl.SetValue(_T("faup_deliveby"), m_szDeliverBy);
		m_fam_usingprocessTbl.SetValue(_T("faup_receiveby"), m_szReceiveBy);
		m_fam_usingprocessTbl.SetValue(_T("faup_usingby"), m_szEmployee);
	}
	else
	{
		m_fam_usingprocessTbl.SetValue(_T("faup_deliveby"), m_szDeliverByKey);
		m_fam_usingprocessTbl.SetValue(_T("faup_receiveby"), m_szReceiveByKey);
		m_fam_usingprocessTbl.SetValue(_T("faup_usingby"), m_szEmployeeKey);
	}

	m_fam_usingprocessTbl.SetValue(_T("faup_currentvalue"), m_nCurrentValue);
	m_fam_usingprocessTbl.SetValue(_T("faup_type"), m_szTypeKey);
	m_fam_usingprocessTbl.SetValue(_T("faup_deposeto"), m_szDeposeTo);
}
void CFAMUsingProcessDialog::SetDefaultValues()
{
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szDepartmentKey.Empty();
	m_szDeliverByKey.Empty();
	m_szReceiveByKey.Empty();
	m_nCurrentValue=0;
	m_szTypeKey.Empty();
	m_szEmployeeKey.Empty();
	m_szDeposeTo.Empty();

	m_szDeliverBy.Empty();
	m_szReceiveBy.Empty();
	m_szEmployee.Empty();
}
int CFAMUsingProcessDialog::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiDialog::SetMode(nMode); 
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
  		switch(nMode)
		{ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 1, -1); 
 			SetDefaultValues();
			m_wndToDate.EnableWindow(FALSE);
			//if (m_nCount == 0)
			m_szFromDate = pMF->GetSysDate();
				//m_szToDate = pMF->GetSysDate();
			//else
				//m_szFromDate = m_szGetDate;
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 1, -1); 
			m_wndToDate.EnableWindow(TRUE);
			//m_wndToDate.SetCheckValue(true);
 			break; 
 		case VM_VIEW: 
 			EnableControls(FALSE); 
 			EnableButtons(FALSE, 0, 1, -1); 
 			break; 
 		case VM_NONE: 
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 0, 6, -1); 
 			SetDefaultValues(); 
 			break; 
 		};

		m_wndDeliverBy.ShowWindow(!m_bShow);
		m_wndReceiveBy.ShowWindow(!m_bShow);
		m_wndEmployee.ShowWindow(!m_bShow);

		
		m_wndDeliverBy1.ShowWindow(m_bShow);
		m_wndReceiveBy1.ShowWindow(m_bShow);
		m_wndEmployee1.ShowWindow(m_bShow);

 		UpdateData(FALSE); 
 		return nOldMode; 
}
/*void CFAMUsingProcessDialog::OnFromDateChange(){
	
} */
/*void CFAMUsingProcessDialog::OnFromDateSetfocus(){
	
} */
void CFAMUsingProcessDialog::OnFromDateKillfocus()
{
	if (m_szTypeKey != m_szDType)
	{
		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
		CRecord rs(&pMF->m_db);
		CString szSQL;
		double nTotalDepr = 0;
		szSQL.Format(_T("SELECT fad_assetno, SUM(fad_amount) AS Amount FROM fam_depreciation")\
					 _T(" WHERE cast_string2date(fad_date) <= cast_string2date('%s') AND fad_assetno='%s' GROUP BY fad_assetno"),
					 m_szFromDate, m_szAssetNo);
		rs.ExecSQL(szSQL);
		rs.GetValue(_T("Amount"), nTotalDepr);
		m_nCurrentValue = pMF->m_nCurValue - nTotalDepr;
		m_wndCurrentValue.EnableWindow(FALSE);
		UpdateData(FALSE);
	}
}
int CFAMUsingProcessDialog::OnFromDateCheckValue()
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	//UpdateData(TRUE);
	if (CompareDate(m_szFromDate, pMF->m_szPurchaseDate) < 0)
	{
		m_wndFromDate.SetToolTipMessage(_T("This value must be greater than or equal to Purchase Date"));
		return -1;
	}
	return 0;
} 
/*void CFAMUsingProcessDialog::OnToDateChange(){
	
} */
/*void CFAMUsingProcessDialog::OnToDateSetfocus(){
	
} */
/*void CFAMUsingProcessDialog::OnToDateKillfocus(){
	
} */
int CFAMUsingProcessDialog::OnToDateCheckValue()
{
	//_msg(_T("OK"));
	//CString szFromDate;
	//CString szToDate;
	//m_wndFromDate.GetWindowText(szFromDate);
	//m_wndToDate.GetWindowText(szToDate);
	//UpdateData(TRUE);
	//_msg(_T("%d"), CompareDate(m_szFromDate, m_szToDate));
	if (CompareDate(m_szFromDate, m_szToDate) > 0)
	{
		//MessageBox(_T("OK"));
		m_wndToDate.SetToolTipMessage(_T("This value must be greater than or equal to From Date"));
		return -1;
	}
	return 0;
} 
void CFAMUsingProcessDialog::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel)
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//UpdateData(TRUE);
} 
void CFAMUsingProcessDialog::OnDepartmentSelendok()
{
	 //UpdateData(TRUE);
	 //MessageBox(m_szDepartmentKey);
}
/*void CFAMUsingProcessDialog::OnDepartmentSetfocus(){
	
}*/
void CFAMUsingProcessDialog::OnDepartmentKillfocus()
{	
	
}
long CFAMUsingProcessDialog::OnDepartmentLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();
	if(m_wndDepartment.IsSearchKey() && !m_szDepartmentKey.IsEmpty())
	{
		szWhere.Format(_T(" WHERE sd_id='%s' "), m_szDepartmentKey);
	}
	m_wndDepartment.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT sd_id AS id, sd_name AS description FROM sys_dept %s ORDER BY sd_id"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDepartment.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CFAMUsingProcessDialog::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CFAMUsingProcessDialog::OnDeliverBySelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAMUsingProcessDialog::OnDeliverBySelendok(){
	 
}
/*void CFAMUsingProcessDialog::OnDeliverBySetfocus(){
	
}*/
/*void CFAMUsingProcessDialog::OnDeliverByKillfocus(){
	
}*/
long CFAMUsingProcessDialog::OnDeliverByLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();
	if(m_wndDeliverBy.IsSearchKey() && !m_szDeliverByKey.IsEmpty())
	{
		szWhere.Format(_T(" WHERE su_userid = '%s' "), m_szDeliverByKey);
	}
	m_wndDeliverBy.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T(" SELECT su_userid as id, su_name as name FROM sys_user %s ORDER BY su_userid"), szWhere);
	/*szSQL.Format(_T("SELECT empl_id AS id, trim(empl_surname||' '||empl_midname||' '||empl_firstname) AS name")\
		         _T(" FROM hrm_employee %s ORDER BY empl_id"),
				 szWhere);*/
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDeliverBy.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CFAMUsingProcessDialog::OnDeliverByAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CFAMUsingProcessDialog::OnReceiveBySelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAMUsingProcessDialog::OnReceiveBySelendok(){
	 
}
/*void CFAMUsingProcessDialog::OnReceiveBySetfocus(){
	
}*/
/*void CFAMUsingProcessDialog::OnReceiveByKillfocus(){
	
}*/
long CFAMUsingProcessDialog::OnReceiveByLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();
	if(m_wndReceiveBy.IsSearchKey() && !m_szReceiveByKey.IsEmpty())
	{	
		szWhere.Format(_T(" WHERE su_userid = '%s' "), m_szReceiveByKey);
	}
	m_wndReceiveBy.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T(" SELECT su_userid as id, su_name as name FROM sys_user %s ORDER BY su_userid"), szWhere);
	/*szSQL.Format(_T("SELECT empl_id AS id, trim(empl_surname||' '||empl_midname||' '||empl_firstname) AS name")\
				 _T(" FROM hrm_employee %s ORDER BY empl_id"), szWhere);*/
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndReceiveBy.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CFAMUsingProcessDialog::OnReceiveByAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CFAMUsingProcessDialog::OnCurrentValueChange(){
	
} */
/*void CFAMUsingProcessDialog::OnCurrentValueSetfocus(){
	
} */
/*void CFAMUsingProcessDialog::OnCurrentValueKillfocus(){
	
} */
int CFAMUsingProcessDialog::OnCurrentValueCheckValue()
{
	//_msg(_T("OK"));
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//_msg(_T("%d"), pMF->m_nCost);
	//m_wndCurrentValue.GetWindowText(szValue);
	//long m_nValue = ToLong(szValue.Trim());
	//UpdateData(TRUE);
	//long m_nCost = pMF->m_nCost;
	//_msg(_T("%d"), m_nCost);
	if (pMF->m_nAccumDepr > 0)
	{
		if (m_szTypeKey == m_szDType && m_nCurrentValue > (pMF->m_nCurValue - pMF->m_nAccumDepr))
		{
			m_wndCurrentValue.SetToolTipMessage(_T("This value exceeds the allowed limit"));
			return -1;
		}
		/*else if (m_szTypeKey != m_szDType && m_nCurrentValue != pMF->m_nCurValue)
		{
			m_wndCurrentValue.SetToolTipMessage(_T("This value must be equal to the Current Value"));
			return -1;
		}*/
	}
	else
	{
		if (m_szTypeKey == m_szDType && m_nCurrentValue > pMF->m_nCurValue)
		{
			m_wndCurrentValue.SetToolTipMessage(_T("This value must be less than the Current Value"));
			return -1;
		//MessageBox(_T("OK"));
		}
		/*else if (m_szTypeKey != m_szDType && m_nCurrentValue > pMF->m_nCost)
		{
			m_wndCurrentValue.SetToolTipMessage(_T("This value must be less than or equal to the Purchase Price"));
			return -1;
		}*/
	}
	return 0;
} 
void CFAMUsingProcessDialog::OnTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAMUsingProcessDialog::OnTypeSelendok()
{
	UpdateData(TRUE);
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	if (GetMode() == VM_ADD && m_szTypeKey == m_szDType)
	{
		//MessageBox(_T("OK"));
		m_wndDepartment.EnableWindow(FALSE);
		m_wndEmployee.EnableWindow(FALSE);
		m_wndDeliverBy.EnableWindow(FALSE);
		m_wndReceiveBy.EnableWindow(FALSE);

		m_wndEmployee1.EnableWindow(FALSE);
		m_wndDeliverBy1.EnableWindow(FALSE);
		m_wndReceiveBy1.EnableWindow(FALSE);

		m_wndDeposeTo.EnableWindow(TRUE);
		m_wndCurrentValue.EnableWindow(TRUE);
		m_nCurrentValue = 0;
		UpdateData(FALSE);
	}
	else if (GetMode() == VM_ADD && m_szTypeKey != m_szDType)
	{
		//Textbox DeposeTo bi vo hieu hoa
		m_wndDepartment.EnableWindow(TRUE);
		m_wndEmployee.EnableWindow(TRUE);
		m_wndDeliverBy.EnableWindow(TRUE);
		m_wndReceiveBy.EnableWindow(TRUE);

		m_wndEmployee1.EnableWindow(TRUE);
		m_wndDeliverBy1.EnableWindow(TRUE);
		m_wndReceiveBy1.EnableWindow(TRUE);

		m_wndDeposeTo.EnableWindow(FALSE);
		m_wndCurrentValue.EnableWindow(FALSE);
		/*if (m_szTypeKey == m_szNType)
		{
			m_wndDeliverBy.SetCheckValue(false);
			m_wndReceiveBy.SetCheckValue(false);
		}
		else
		{
			m_wndDeliverBy.SetCheckValue(true);
			m_wndReceiveBy.SetCheckValue(true);
		}*/
		//UpdateData(FALSE);
	}
	//UpdateData(FALSE);
}
/*void CFAMUsingProcessDialog::OnTypeSetfocus(){
	
}*/
void CFAMUsingProcessDialog::OnTypeKillfocus()
{
	//MessageBox(_T("OK"));
}
long CFAMUsingProcessDialog::OnTypeLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szFilter;
	szWhere.Empty();
	szFilter.Empty();
	if(m_wndType.IsSearchKey() && !m_szTypeKey.IsEmpty())
	{
		/*if (m_bUsed)
			szWhere.Format(_T(" WHERE faut_id='%s' AND faut_id<>'%s' "), m_szTypeKey, m_szDType);
		else*/
			szWhere.Format(_T(" AND faut_id='%s' "), m_szTypeKey);
	}
	if (m_bUsed)
		szFilter.AppendFormat(_T(" AND faut_id<>'%s' "), m_szDType);
	m_wndType.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT * FROM fam_usagetype WHERE 1=1 %s %s %s ORDER BY faut_id"), 
		         m_szTypeFilter, szFilter, szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndType.AddItems(
			rs.GetValue(_T("faut_id")), 
			rs.GetValue(_T("faut_desc")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CFAMUsingProcessDialog::OnTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CFAMUsingProcessDialog::OnEmployeeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAMUsingProcessDialog::OnEmployeeSelendok(){
	 
}
/*void CFAMUsingProcessDialog::OnEmployeeSetfocus(){
	
}*/
/*void CFAMUsingProcessDialog::OnEmployeeKillfocus(){
	
}*/
long CFAMUsingProcessDialog::OnEmployeeLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();
	//m_wndDepartment.GetWindowText(szWhere);
	//szSQL.Format(_T("Select sd_id From sys_dept Where sd_name='%s'"), szWhere);
	//rs.ExecSQL(szSQL);
	//CString szDeptKey;
	//szDeptKey = rs.GetStringValue();
	if(m_wndEmployee.IsSearchKey() && !m_szEmployeeKey.IsEmpty())
	{
		szWhere.Format(_T(" AND empl_id='%s' "), m_szEmployeeKey);
	}
	m_wndEmployee.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T(" SELECT su_userid as id, su_name as name FROM sys_user WHERE su_deptid = '%s' %s ORDER BY su_userid"), m_szDepartmentKey, szWhere);
	/*szSQL.Format(_T("SELECT empl_id AS id, trim(empl_surname||' '||empl_midname||' '||empl_firstname) AS name")\
				 _T(" FROM hrm_employee WHERE empl_dept='%s' %s ORDER BY empl_id"), 
				 m_szDepartmentKey, szWhere);*/
	//_fmsg(_T("%s"), szSQL);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndEmployee.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CFAMUsingProcessDialog::OnEmployeeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CFAMUsingProcessDialog::OnDeposeToChange(){
	
} */
/*void CFAMUsingProcessDialog::OnDeposeToSetfocus(){
	
} */
/*void CFAMUsingProcessDialog::OnDeposeToKillfocus(){
	
} */
int CFAMUsingProcessDialog::OnDeposeToCheckValue(){
	return 0;
}

/*void CFAMUsingProcessDialog::OnDeliverBy1Change(){
	
} */
/*void CFAMUsingProcessDialog::OnDeliverBy1Setfocus(){
	
} */
/*void CFAMUsingProcessDialog::OnDeliverBy1Killfocus(){
	
} */
int CFAMUsingProcessDialog::OnDeliverBy1CheckValue()
{
	UpdateData(TRUE);
	CString szTemp;
	PreInitCap(m_szDeliverBy, szTemp);
	m_szDeliverBy = szTemp;
	UpdateData(FALSE);
	return 0;
}

/*void CFAMUsingProcessDialog::OnReceiveBy1Change(){
	
} */
/*void CFAMUsingProcessDialog::OnReceiveBy1Setfocus(){
	
} */
/*void CFAMUsingProcessDialog::OnReceiveBy1Killfocus(){
	
} */
int CFAMUsingProcessDialog::OnReceiveBy1CheckValue()
{
	UpdateData(TRUE);
	CString szTemp;
	PreInitCap(m_szReceiveBy, szTemp);
	m_szReceiveBy = szTemp;
	UpdateData(FALSE);
	return 0;
}

/*void CFAMUsingProcessDialog::OnEmployee1Change(){
	
} */
/*void CFAMUsingProcessDialog::OnEmployee1Setfocus(){
	
} */
/*void CFAMUsingProcessDialog::OnEmployee1Killfocus(){
	
} */
int CFAMUsingProcessDialog::OnEmployee1CheckValue()
{
	UpdateData(TRUE);
	CString szTemp;
	PreInitCap(m_szEmployee, szTemp);
	m_szEmployee = szTemp;
	UpdateData(FALSE);
	return 0;
}

void CFAMUsingProcessDialog::OnbtnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if (OnSaveFAMUsingProcessDialog() >= 0)
		CGuiDialog::OnOK();
} 
void CFAMUsingProcessDialog::OnbtnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CFAMUsingProcessDialog::OnAddFAMUsingProcessDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CFAMUsingProcessDialog::OnEditFAMUsingProcessDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CFAMUsingProcessDialog::OnDeleteFAMUsingProcessDialog(){
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
 		OnCancelFAMUsingProcessDialog(); 
 	}
	return 0;
}
int CFAMUsingProcessDialog::OnSaveFAMUsingProcessDialog()
{
	//MessageBox(ToString(GetMode()));
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
	{
		//MessageBox(_T("Ex"));
 		return -1; 
	}
 	if(!IsValidateData()) 
	{
		//MessageBox(_T("Invalidate"));
 		return -1; 
	}
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD)
	{ 
		//MessageBox(_T("ADD"));
 		szSQL = m_fam_usingprocessTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT)
	{ 
		//UpdateData(TRUE);
		//MessageBox(m_szDepartmentKey);
 		CString szWhere; 
		szWhere.Format(_T(" WHERE faup_assetno='%s' AND faup_idx=%d "),  m_szAssetNo, m_nIndex); 
 		szSQL = m_fam_usingprocessTbl.GetUpdateSQL(_T("faup_createdby, faup_createddate, faup_assetno, faup_idx, faup_olddept")); 
 		szSQL += szWhere; 
 	} 
	_fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
	//_msg(_T("%d"), ret); 
 	if(ret >= 0) 
 	{ 
 		//OnFAMUsingProcessDialogListLoadData(); 
 		//SetMode(VM_VIEW); 
		
		if (pMF->m_szDepartment != m_szDepartmentKey)
			m_bChangeDept = true;
		CRecord rs(&pMF->m_db); 
		CRecord rsn(&pMF->m_db);
		CString szStatus;
		szStatus.Empty();
		if (m_szTypeKey != m_szDType)
		{ 
			/*if (m_szTypeKey == _T("A"))
			{
				szSQL.Format(_T("UPDATE fam_usingprocess SET faup_status='%s' WHERE faup_assetno='%s' AND faup_idx=%d"), 
						     m_szIStatus, m_szAssetNo, m_nIndex);
				szStatus = m_szIStatus;
			}*/
			if (m_szTypeKey == _T("A") || m_szTypeKey == _T("D"))
			{
					/*szSQL.Format(_T("UPDATE fam_usingprocess SET faup_status='%s' WHERE faup_assetno='%s' AND faup_idx=%d"), 
								 m_szOStatus, m_szAssetNo, m_nIndex);*/
				szStatus = m_szOStatus;
			}
			else
			{
				/*szSQL.Format(_T("UPDATE fam_usingprocess SET faup_status='%s' WHERE faup_assetno='%s' AND faup_idx=%d"), 
							m_szIStatus, m_szAssetNo, m_nIndex);*/
				szStatus = m_szIStatus;
			}
			//}
			if (GetMode() == VM_EDIT)
			{
				CDate dt;
				dt.ParseDate(m_szToDate);
				if (dt.GetYear() != 1752)
				{
					//MessageBox(_T("OK"));
					szStatus = m_szOStatus;
					/*rs.ExecSQL(szSQL);
					szSQL.Format(_T("UPDATE fam_asset SET fa_department='%s', fa_employee='%s', fa_status='%s' WHERE fa_assetno='%s'"),
						         m_szDepartmentKey, m_szEmployeeKey, szStatus, m_szAssetNo);
					rsn.ExecSQL(szSQL);
					return ret;*/
				}
				else
					szStatus = m_szIStatus;
			}
			szSQL.Format(_T("UPDATE fam_usingprocess SET faup_status='%s' WHERE faup_assetno='%s' AND faup_idx=%d"), 
						 szStatus, m_szAssetNo, m_nIndex);
			rs.ExecSQL(szSQL);
			if (GetMode() == VM_ADD || GetMode() == VM_EDIT)
			{
				if (pMF->m_szUseHRM.Trim() == _T("N"))
				{
					szSQL.Format(_T("UPDATE fam_asset SET fa_department='%s', fa_employee='%s', fa_status='%s' WHERE fa_assetno='%s'"),
								m_szDepartmentKey, m_szEmployee, szStatus, m_szAssetNo);
					
				}
				else
				{
					szSQL.Format(_T("UPDATE fam_asset SET fa_department='%s', fa_employee='%s', fa_status='%s' WHERE fa_assetno='%s'"),
								m_szDepartmentKey, m_szEmployeeKey, szStatus, m_szAssetNo);
				}
				rsn.ExecSQL(szSQL);
			}
		}
		else
		{
			isSetDep = true;
			if (GetMode() == VM_ADD)
			{

				szSQL.Format(_T("UPDATE fam_usingprocess SET faup_status='%s' WHERE faup_assetno='%s' AND faup_idx=%d"), 
					         m_szOStatus, m_szAssetNo, m_nIndex);
				rs.ExecSQL(szSQL);
				//_msg(_T("DLG: %d"), rs.ExecSQL(szSQL));
				pMF->m_wndAsset.m_isDeposed = true;
				if (m_nCurrentValue > 0)
				{
					szSQL.Format(_T("UPDATE fam_asset SET fa_deposedamount=%d, fa_deposeddate='%s', fa_status='%s' WHERE fa_assetno='%s'"), 
								 m_nCurrentValue, m_szFromDate, m_szOStatus, m_szAssetNo);
					rsn.ExecSQL(szSQL);
				}
			}
			else if (GetMode() == VM_EDIT)
			{
				szSQL.Format(_T("UPDATE fam_asset SET fa_deposedamount=%d, fa_deposeddate='%s' WHERE fa_assetno='%s'"), 
				             m_nCurrentValue, m_szFromDate, m_szAssetNo);
				rs.ExecSQL(szSQL);
			}
		}
 	} 
 	//else 
 	//{ 
 	//} 
 	return ret; 
 	//return 0; 
}
int CFAMUsingProcessDialog::OnCancelFAMUsingProcessDialog(){
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
int CFAMUsingProcessDialog::OnFAMUsingProcessDialogListLoadData(){
	return 0;
}
