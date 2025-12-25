#include "HMSPatientPaymentOrerDialog.h"
#include "MainFrm.h"
/*static void _OnPaymentNoChangeFnc(CWnd *pWnd){
	((CHMSPatientPaymentOrerDialog *)pWnd)->OnPaymentNoChange();
} */
/*static void _OnPaymentNoSetfocusFnc(CWnd *pWnd){
	((CHMSPatientPaymentOrerDialog *)pWnd)->OnPaymentNoSetfocus();} */ 
/*static void _OnPaymentNoKillfocusFnc(CWnd *pWnd){
	((CHMSPatientPaymentOrerDialog *)pWnd)->OnPaymentNoKillfocus();
} */
static int _OnPaymentNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientPaymentOrerDialog *)pWnd)->OnPaymentNoCheckValue();
} 
/*static void _OnPaymentDateChangeFnc(CWnd *pWnd){
	((CHMSPatientPaymentOrerDialog *)pWnd)->OnPaymentDateChange();
} */
/*static void _OnPaymentDateSetfocusFnc(CWnd *pWnd){
	((CHMSPatientPaymentOrerDialog *)pWnd)->OnPaymentDateSetfocus();} */ 
/*static void _OnPaymentDateKillfocusFnc(CWnd *pWnd){
	((CHMSPatientPaymentOrerDialog *)pWnd)->OnPaymentDateKillfocus();
} */
static int _OnPaymentDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientPaymentOrerDialog *)pWnd)->OnPaymentDateCheckValue();
} 
/*static void _OnReasonChangeFnc(CWnd *pWnd){
	((CHMSPatientPaymentOrerDialog *)pWnd)->OnReasonChange();
} */
/*static void _OnReasonSetfocusFnc(CWnd *pWnd){
	((CHMSPatientPaymentOrerDialog *)pWnd)->OnReasonSetfocus();} */ 
/*static void _OnReasonKillfocusFnc(CWnd *pWnd){
	((CHMSPatientPaymentOrerDialog *)pWnd)->OnReasonKillfocus();
} */
static int _OnReasonCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientPaymentOrerDialog *)pWnd)->OnReasonCheckValue();
} 
static void _OnPaymentTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSPatientPaymentOrerDialog* )pWnd)->OnPaymentTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPaymentTypeSelendokFnc(CWnd *pWnd){
	((CHMSPatientPaymentOrerDialog *)pWnd)->OnPaymentTypeSelendok();
}
/*static void _OnPaymentTypeSetfocusFnc(CWnd *pWnd){
	((CHMSPatientPaymentOrerDialog *)pWnd)->OnPaymentTypeKillfocus();
}*/
/*static void _OnPaymentTypeKillfocusFnc(CWnd *pWnd){
	((CHMSPatientPaymentOrerDialog *)pWnd)->OnPaymentTypeKillfocus();
}*/
static long _OnPaymentTypeLoadDataFnc(CWnd *pWnd){
	return ((CHMSPatientPaymentOrerDialog *)pWnd)->OnPaymentTypeLoadData();
}
/*static void _OnPaymentTypeAddNewFnc(CWnd *pWnd){
	((CHMSPatientPaymentOrerDialog *)pWnd)->OnPaymentTypeAddNew();
}*/
/*static void _OnAmountChangeFnc(CWnd *pWnd){
	((CHMSPatientPaymentOrerDialog *)pWnd)->OnAmountChange();
} */
/*static void _OnAmountSetfocusFnc(CWnd *pWnd){
	((CHMSPatientPaymentOrerDialog *)pWnd)->OnAmountSetfocus();} */ 
/*static void _OnAmountKillfocusFnc(CWnd *pWnd){
	((CHMSPatientPaymentOrerDialog *)pWnd)->OnAmountKillfocus();
} */
static int _OnAmountCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientPaymentOrerDialog *)pWnd)->OnAmountCheckValue();
} 
static void _OnAddButtonSelectFnc(CWnd *pWnd){
	CHMSPatientPaymentOrerDialog *pVw = (CHMSPatientPaymentOrerDialog *)pWnd;
	pVw->OnAddButtonSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSPatientPaymentOrerDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSPatientPaymentOrerDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSPatientPaymentOrerDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSPatientPaymentOrerDialog*)pWnd)->OnListDeleteItem();
} 
/*static void _OnTotalAmountChangeFnc(CWnd *pWnd){
	((CHMSPatientPaymentOrerDialog *)pWnd)->OnTotalAmountChange();
} */
/*static void _OnTotalAmountSetfocusFnc(CWnd *pWnd){
	((CHMSPatientPaymentOrerDialog *)pWnd)->OnTotalAmountSetfocus();} */ 
/*static void _OnTotalAmountKillfocusFnc(CWnd *pWnd){
	((CHMSPatientPaymentOrerDialog *)pWnd)->OnTotalAmountKillfocus();
} */
static int _OnTotalAmountCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientPaymentOrerDialog *)pWnd)->OnTotalAmountCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSPatientPaymentOrerDialog *pVw = (CHMSPatientPaymentOrerDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSPatientPaymentOrerDialog *pVw = (CHMSPatientPaymentOrerDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSPatientPaymentOrerDialogFnc(CWnd *pWnd){
	 return ((CHMSPatientPaymentOrerDialog*)pWnd)->OnAddHMSPatientPaymentOrerDialog();
} 
static int _OnEditHMSPatientPaymentOrerDialogFnc(CWnd *pWnd){
	 return ((CHMSPatientPaymentOrerDialog*)pWnd)->OnEditHMSPatientPaymentOrerDialog();
} 
static int _OnDeleteHMSPatientPaymentOrerDialogFnc(CWnd *pWnd){
	 return ((CHMSPatientPaymentOrerDialog*)pWnd)->OnDeleteHMSPatientPaymentOrerDialog();
} 
static int _OnSaveHMSPatientPaymentOrerDialogFnc(CWnd *pWnd){
	 return ((CHMSPatientPaymentOrerDialog*)pWnd)->OnSaveHMSPatientPaymentOrerDialog();
} 
static int _OnCancelHMSPatientPaymentOrerDialogFnc(CWnd *pWnd){
	 return ((CHMSPatientPaymentOrerDialog*)pWnd)->OnCancelHMSPatientPaymentOrerDialog();
} 
CHMSPatientPaymentOrerDialog::CHMSPatientPaymentOrerDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 635;
	m_nDlgHeight = 376;
	SetDefaultValues();
}
CHMSPatientPaymentOrerDialog::~CHMSPatientPaymentOrerDialog(){
}
void CHMSPatientPaymentOrerDialog::OnCreateComponents(){
	m_wndPaymentOrderInformation.Create(this, _T("Payment Order Information"), 5, 5, 485, 310);
	m_wndPaymentNoLabel.Create(this, _T("Payment No"), 10, 30, 110, 55);
	m_wndPaymentNo.Create(this,115, 30, 260, 55); 
	m_wndPaymentDateLabel.Create(this, _T("PAYMENT_DATE"), 265, 30, 365, 55);
	m_wndPaymentDate.Create(this,370, 30, 480, 55); 
	m_wndReasonLabel.Create(this, _T("Reason"), 10, 60, 110, 85);
	m_wndReason.Create(this,115, 60, 480, 85); 
	m_wndPaymentTypeLabel.Create(this, _T("Payment Type"), 10, 90, 110, 115);
	m_wndPaymentType.Create(this,115, 90, 260, 115); 
	m_wndAmountLabel.Create(this, _T("Amount"), 265, 90, 365, 115);
	m_wndAmount.Create(this,370, 90, 450, 115); 
	m_wndAddButton.Create(this, _T("..."), 455, 90, 480, 115);
	m_wndList.Create(this,10, 120, 480, 275); 
	m_wndTotalAmountLabel.Create(this, _T("Total Amount"), 265, 280, 365, 305);
	m_wndTotalAmount.Create(this,370, 280, 475, 305); 
	m_wndSave.Create(this, _T("&Save"), 320, 315, 400, 340);
	m_wndClose.Create(this, _T("&Close"), 405, 315, 485, 340);

}
void CHMSPatientPaymentOrerDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndPaymentNo.SetLimitText(35);
	m_wndPaymentNo.SetCheckValue(true);
	m_wndPaymentDate.SetLimitText(35);
	m_wndPaymentDate.SetCheckValue(true);
	m_wndReason.SetLimitText(35);
	m_wndReason.SetCheckValue(true);
	m_wndPaymentType.SetCheckValue(true);
	m_wndPaymentType.LimitText(35);
	m_wndAmount.SetLimitText(16);
	m_wndAmount.SetCheckValue(true);
	m_wndTotalAmount.SetLimitText(16);


	m_wndPaymentType.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndPaymentType.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndList.InsertColumn(0, _T("Index"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(1, _T("Description"), CFMT_TEXT, 320);
	m_wndList.InsertColumn(2, _T("Amount"), CFMT_NUMBER, 90);

}
void CHMSPatientPaymentOrerDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndPaymentNo.SetEvent(WE_CHANGE, _OnPaymentNoChangeFnc);
	//m_wndPaymentNo.SetEvent(WE_SETFOCUS, _OnPaymentNoSetfocusFnc);
	//m_wndPaymentNo.SetEvent(WE_KILLFOCUS, _OnPaymentNoKillfocusFnc);
	m_wndPaymentNo.SetEvent(WE_CHECKVALUE, _OnPaymentNoCheckValueFnc);
	//m_wndPaymentDate.SetEvent(WE_CHANGE, _OnPaymentDateChangeFnc);
	//m_wndPaymentDate.SetEvent(WE_SETFOCUS, _OnPaymentDateSetfocusFnc);
	//m_wndPaymentDate.SetEvent(WE_KILLFOCUS, _OnPaymentDateKillfocusFnc);
	m_wndPaymentDate.SetEvent(WE_CHECKVALUE, _OnPaymentDateCheckValueFnc);
	//m_wndReason.SetEvent(WE_CHANGE, _OnReasonChangeFnc);
	//m_wndReason.SetEvent(WE_SETFOCUS, _OnReasonSetfocusFnc);
	//m_wndReason.SetEvent(WE_KILLFOCUS, _OnReasonKillfocusFnc);
	m_wndReason.SetEvent(WE_CHECKVALUE, _OnReasonCheckValueFnc);
	m_wndPaymentType.SetEvent(WE_SELENDOK, _OnPaymentTypeSelendokFnc);
	//m_wndPaymentType.SetEvent(WE_SETFOCUS, _OnPaymentTypeSetfocusFnc);
	//m_wndPaymentType.SetEvent(WE_KILLFOCUS, _OnPaymentTypeKillfocusFnc);
	m_wndPaymentType.SetEvent(WE_SELCHANGE, _OnPaymentTypeSelectChangeFnc);
	m_wndPaymentType.SetEvent(WE_LOADDATA, _OnPaymentTypeLoadDataFnc);
	//m_wndPaymentType.SetEvent(WE_ADDNEW, _OnPaymentTypeAddNewFnc);
	//m_wndAmount.SetEvent(WE_CHANGE, _OnAmountChangeFnc);
	//m_wndAmount.SetEvent(WE_SETFOCUS, _OnAmountSetfocusFnc);
	//m_wndAmount.SetEvent(WE_KILLFOCUS, _OnAmountKillfocusFnc);
	m_wndAmount.SetEvent(WE_CHECKVALUE, _OnAmountCheckValueFnc);
	m_wndAddButton.SetEvent(WE_CLICK, _OnAddButtonSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	//m_wndTotalAmount.SetEvent(WE_CHANGE, _OnTotalAmountChangeFnc);
	//m_wndTotalAmount.SetEvent(WE_SETFOCUS, _OnTotalAmountSetfocusFnc);
	//m_wndTotalAmount.SetEvent(WE_KILLFOCUS, _OnTotalAmountKillfocusFnc);
	m_wndTotalAmount.SetEvent(WE_CHECKVALUE, _OnTotalAmountCheckValueFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_NONE);

}
void CHMSPatientPaymentOrerDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndPaymentNo.GetDlgCtrlID(), m_szPaymentNo);
	DDX_Text(pDX, m_wndPaymentDate.GetDlgCtrlID(), m_szPaymentDate);
	DDX_Text(pDX, m_wndReason.GetDlgCtrlID(), m_szReason);
	DDX_TextEx(pDX, m_wndPaymentType.GetDlgCtrlID(), m_szPaymentTypeKey);
	DDX_Text(pDX, m_wndAmount.GetDlgCtrlID(), m_nAmount);
	DDX_Text(pDX, m_wndTotalAmount.GetDlgCtrlID(), m_nTotalAmount);

}
void CHMSPatientPaymentOrerDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSPatientPaymentOrerDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSPatientPaymentOrerDialog::SetDefaultValues(){

	m_szPaymentNo.Empty();
	m_szPaymentDate.Empty();
	m_szReason.Empty();
	m_szPaymentTypeKey.Empty();
	m_nAmount=0;
	m_nTotalAmount=0;

}
int CHMSPatientPaymentOrerDialog::SetMode(int nMode){
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
/*void CHMSPatientPaymentOrerDialog::OnPaymentNoChange(){
	
} */
/*void CHMSPatientPaymentOrerDialog::OnPaymentNoSetfocus(){
	
} */
/*void CHMSPatientPaymentOrerDialog::OnPaymentNoKillfocus(){
	
} */
int CHMSPatientPaymentOrerDialog::OnPaymentNoCheckValue(){
	return 0;
} 
/*void CHMSPatientPaymentOrerDialog::OnPaymentDateChange(){
	
} */
/*void CHMSPatientPaymentOrerDialog::OnPaymentDateSetfocus(){
	
} */
/*void CHMSPatientPaymentOrerDialog::OnPaymentDateKillfocus(){
	
} */
int CHMSPatientPaymentOrerDialog::OnPaymentDateCheckValue(){
	return 0;
} 
/*void CHMSPatientPaymentOrerDialog::OnReasonChange(){
	
} */
/*void CHMSPatientPaymentOrerDialog::OnReasonSetfocus(){
	
} */
/*void CHMSPatientPaymentOrerDialog::OnReasonKillfocus(){
	
} */
int CHMSPatientPaymentOrerDialog::OnReasonCheckValue(){
	return 0;
} 
void CHMSPatientPaymentOrerDialog::OnPaymentTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPatientPaymentOrerDialog::OnPaymentTypeSelendok(){
	 
}
/*void CHMSPatientPaymentOrerDialog::OnPaymentTypeSetfocus(){
	
}*/
/*void CHMSPatientPaymentOrerDialog::OnPaymentTypeKillfocus(){
	
}*/
long CHMSPatientPaymentOrerDialog::OnPaymentTypeLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndPaymentType.IsSearchKey() && !m_szPaymentTypeKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szPaymentTypeKey
};
	m_wndPaymentType.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPaymentType.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSPatientPaymentOrerDialog::OnPaymentTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSPatientPaymentOrerDialog::OnAmountChange(){
	
} */
/*void CHMSPatientPaymentOrerDialog::OnAmountSetfocus(){
	
} */
/*void CHMSPatientPaymentOrerDialog::OnAmountKillfocus(){
	
} */
int CHMSPatientPaymentOrerDialog::OnAmountCheckValue(){
	return 0;
} 
void CHMSPatientPaymentOrerDialog::OnAddButtonSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPatientPaymentOrerDialog::OnListDblClick(){
	
} 
void CHMSPatientPaymentOrerDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSPatientPaymentOrerDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSPatientPaymentOrerDialog::OnListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("Index")), 
			rs.GetValue(_T("Description")), 
			rs.GetValue(_T("Amount")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
*/
	return 0;
}
/*void CHMSPatientPaymentOrerDialog::OnTotalAmountChange(){
	
} */
/*void CHMSPatientPaymentOrerDialog::OnTotalAmountSetfocus(){
	
} */
/*void CHMSPatientPaymentOrerDialog::OnTotalAmountKillfocus(){
	
} */
int CHMSPatientPaymentOrerDialog::OnTotalAmountCheckValue(){
	return 0;
} 
void CHMSPatientPaymentOrerDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPatientPaymentOrerDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSPatientPaymentOrerDialog::OnAddHMSPatientPaymentOrerDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSPatientPaymentOrerDialog::OnEditHMSPatientPaymentOrerDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSPatientPaymentOrerDialog::OnDeleteHMSPatientPaymentOrerDialog(){
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
 		OnCancelHMSPatientPaymentOrerDialog();
 	}
	return 0;
}
int CHMSPatientPaymentOrerDialog::OnSaveHMSPatientPaymentOrerDialog(){
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
 		//OnHMSPatientPaymentOrerDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSPatientPaymentOrerDialog::OnCancelHMSPatientPaymentOrerDialog(){
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
int CHMSPatientPaymentOrerDialog::OnHMSPatientPaymentOrerDialogListLoadData(){
	return 0;
}
