#include "FACashGeneralView.h"
#include "MainFrame_E10.h"
#include "FACashView.h"
/*static void _OnVoucherNoChangeFnc(CWnd *pWnd){
	((CFACashGeneralView *)pWnd)->OnVoucherNoChange();
} */
/*static void _OnVoucherNoSetfocusFnc(CWnd *pWnd){
	((CFACashGeneralView *)pWnd)->OnVoucherNoSetfocus();} */ 
/*static void _OnVoucherNoKillfocusFnc(CWnd *pWnd){
	((CFACashGeneralView *)pWnd)->OnVoucherNoKillfocus();
} */
static int _OnVoucherNoCheckValueFnc(CWnd *pWnd){
	return ((CFACashGeneralView *)pWnd)->OnVoucherNoCheckValue();
} 
/*static void _OnVoucherDateChangeFnc(CWnd *pWnd){
	((CFACashGeneralView *)pWnd)->OnVoucherDateChange();
} */
/*static void _OnVoucherDateSetfocusFnc(CWnd *pWnd){
	((CFACashGeneralView *)pWnd)->OnVoucherDateSetfocus();} */ 
/*static void _OnVoucherDateKillfocusFnc(CWnd *pWnd){
	((CFACashGeneralView *)pWnd)->OnVoucherDateKillfocus();
} */
static int _OnVoucherDateCheckValueFnc(CWnd *pWnd){
	return ((CFACashGeneralView *)pWnd)->OnVoucherDateCheckValue();
} 
/*static void _OnAccountingDateChangeFnc(CWnd *pWnd){
	((CFACashGeneralView *)pWnd)->OnAccountingDateChange();
} */
/*static void _OnAccountingDateSetfocusFnc(CWnd *pWnd){
	((CFACashGeneralView *)pWnd)->OnAccountingDateSetfocus();} */ 
/*static void _OnAccountingDateKillfocusFnc(CWnd *pWnd){
	((CFACashGeneralView *)pWnd)->OnAccountingDateKillfocus();
} */
static int _OnAccountingDateCheckValueFnc(CWnd *pWnd){
	return ((CFACashGeneralView *)pWnd)->OnAccountingDateCheckValue();
} 
/*static void _OnDocumentNoChangeFnc(CWnd *pWnd){
	((CFACashGeneralView *)pWnd)->OnDocumentNoChange();
} */
/*static void _OnDocumentNoSetfocusFnc(CWnd *pWnd){
	((CFACashGeneralView *)pWnd)->OnDocumentNoSetfocus();} */ 
/*static void _OnDocumentNoKillfocusFnc(CWnd *pWnd){
	((CFACashGeneralView *)pWnd)->OnDocumentNoKillfocus();
} */
static int _OnDocumentNoCheckValueFnc(CWnd *pWnd){
	return ((CFACashGeneralView *)pWnd)->OnDocumentNoCheckValue();
} 
static void _OnObjectSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFACashGeneralView* )pWnd)->OnObjectSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnObjectSelendokFnc(CWnd *pWnd){
	((CFACashGeneralView *)pWnd)->OnObjectSelendok();
}
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CFACashGeneralView *)pWnd)->OnObjectKillfocus();
}*/
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CFACashGeneralView *)pWnd)->OnObjectKillfocus();
}*/
static long _OnObjectLoadDataFnc(CWnd *pWnd){
	return ((CFACashGeneralView *)pWnd)->OnObjectLoadData();
}
/*static void _OnObjectAddNewFnc(CWnd *pWnd){
	((CFACashGeneralView *)pWnd)->OnObjectAddNew();
}*/
/*static void _OnObjectNameChangeFnc(CWnd *pWnd){
	((CFACashGeneralView *)pWnd)->OnObjectNameChange();
} */
/*static void _OnObjectNameSetfocusFnc(CWnd *pWnd){
	((CFACashGeneralView *)pWnd)->OnObjectNameSetfocus();} */ 
/*static void _OnObjectNameKillfocusFnc(CWnd *pWnd){
	((CFACashGeneralView *)pWnd)->OnObjectNameKillfocus();
} */
static int _OnObjectNameCheckValueFnc(CWnd *pWnd){
	return ((CFACashGeneralView *)pWnd)->OnObjectNameCheckValue();
} 
/*static void _OnAddressChangeFnc(CWnd *pWnd){
	((CFACashGeneralView *)pWnd)->OnAddressChange();
} */
/*static void _OnAddressSetfocusFnc(CWnd *pWnd){
	((CFACashGeneralView *)pWnd)->OnAddressSetfocus();} */ 
/*static void _OnAddressKillfocusFnc(CWnd *pWnd){
	((CFACashGeneralView *)pWnd)->OnAddressKillfocus();
} */
static int _OnAddressCheckValueFnc(CWnd *pWnd){
	return ((CFACashGeneralView *)pWnd)->OnAddressCheckValue();
} 
/*static void _OnReasonChangeFnc(CWnd *pWnd){
	((CFACashGeneralView *)pWnd)->OnReasonChange();
} */
/*static void _OnReasonSetfocusFnc(CWnd *pWnd){
	((CFACashGeneralView *)pWnd)->OnReasonSetfocus();} */ 
/*static void _OnReasonKillfocusFnc(CWnd *pWnd){
	((CFACashGeneralView *)pWnd)->OnReasonKillfocus();
} */
static int _OnReasonCheckValueFnc(CWnd *pWnd){
	return ((CFACashGeneralView *)pWnd)->OnReasonCheckValue();
} 
/*static void _OnReferenceChangeFnc(CWnd *pWnd){
	((CFACashGeneralView *)pWnd)->OnReferenceChange();
} */
/*static void _OnReferenceSetfocusFnc(CWnd *pWnd){
	((CFACashGeneralView *)pWnd)->OnReferenceSetfocus();} */ 
static void _OnReferenceKillfocusFnc(CWnd *pWnd){
	((CFACashGeneralView *)pWnd)->OnReferenceKillfocus();
} 
static int _OnReferenceCheckValueFnc(CWnd *pWnd){
	return ((CFACashGeneralView *)pWnd)->OnReferenceCheckValue();
}


static void _OnTaxIncludedSelectFnc(CWnd *pWnd){
	((CFACashGeneralView *)pWnd)->OnTaxIncludedSelect();
	
}


static int _OnAddFACashGeneralViewFnc(CWnd *pWnd){
	 return ((CFACashGeneralView*)pWnd)->OnAddFACashGeneralView();
} 
static int _OnEditFACashGeneralViewFnc(CWnd *pWnd){
	 return ((CFACashGeneralView*)pWnd)->OnEditFACashGeneralView();
} 
static int _OnDeleteFACashGeneralViewFnc(CWnd *pWnd){
	 return ((CFACashGeneralView*)pWnd)->OnDeleteFACashGeneralView();
} 
static int _OnSaveFACashGeneralViewFnc(CWnd *pWnd){
	 return ((CFACashGeneralView*)pWnd)->OnSaveFACashGeneralView();
} 
static int _OnCancelFACashGeneralViewFnc(CWnd *pWnd){
	 return ((CFACashGeneralView*)pWnd)->OnCancelFACashGeneralView();
} 
CFACashGeneralView::CFACashGeneralView(){

	m_nDlgWidth = 810;
	m_nDlgHeight = 155;
	SetDefaultValues();
	m_bIsTaxIncluded = false;
}
CFACashGeneralView::~CFACashGeneralView(){
}
void CFACashGeneralView::OnCreateComponents(){
if(m_szDocType == _T("CAR"))
{
	m_wndVoucherInformation.Create(this, _T("Receipt Information"), 5, 5, 225, 150);
	m_wndGeneralInformation.Create(this, _T("General Information"), 230, 5, 800, 150);
	m_wndVoucherNoLabel.Create(this, _T("CA_RECEIPT_NO"), 10, 30, 110, 55);
	m_wndVoucherNo.Create(this,115, 30, 220, 55); 
	m_wndVoucherDateLabel.Create(this, _T("CA_RECEIPT_DATE"), 10, 60, 110, 85);
	m_wndVoucherDate.Create(this,115, 60, 220, 85); 
	m_wndAccountingDateLabel.Create(this, _T("CA_ACCOUNTING_DATE"), 10, 90, 110, 115);
	m_wndAccountingDate.Create(this,115, 90, 220, 115); 
	m_wndDocumentNoLabel.Create(this, _T("Ref#"), 10, 120, 110, 145);
	m_wndDocumentNo.Create(this,115, 120, 220, 145); 
	m_wndObjectLabel.Create(this, _T("CA_PAYER"), 235, 30, 335, 55);

	m_wndObject.Create(this,340, 30, 460, 55); 
	m_wndObjectName.Create(this,465, 30, 795, 55); 
	m_wndAddressLabel.Create(this, _T("Address"), 235, 60, 335, 85);
	m_wndAddress.Create(this,340, 60, 795, 85); 
	m_wndReasonLabel.Create(this, _T("Reason"), 235, 90, 335, 115);
	m_wndReason.Create(this,340, 90, 795, 115); 
	m_wndReferenceLabel.Create(this, _T("Included"), 235, 120, 335, 145);
	m_wndReference.Create(this,340, 120, 695, 145); 
	m_wndTaxIncluded.Create(this, _T("Tax Included"), 695, 120, 795, 145);
}
else
{
	m_wndVoucherInformation.Create(this, _T("Payment Information"), 5, 5, 225, 150);
	m_wndGeneralInformation.Create(this, _T("General Information"), 230, 5, 800, 150);
	m_wndVoucherNoLabel.Create(this, _T("CA_PAYMENT_NO"), 10, 30, 110, 55);
	m_wndVoucherNo.Create(this,115, 30, 220, 55); 
	m_wndVoucherDateLabel.Create(this, _T("CA_PAYMENT_DATE"), 10, 60, 110, 85);
	m_wndVoucherDate.Create(this,115, 60, 220, 85); 
	m_wndAccountingDateLabel.Create(this, _T("CA_ACCOUNTING_DATE"), 10, 90, 110, 115);
	m_wndAccountingDate.Create(this,115, 90, 220, 115); 
	m_wndDocumentNoLabel.Create(this, _T("Ref#"), 10, 120, 110, 145);
	m_wndDocumentNo.Create(this,115, 120, 220, 145); 
	m_wndObjectLabel.Create(this, _T("CA_RECEIVER"), 235, 30, 335, 55);

	m_wndObject.Create(this,340, 30, 460, 55); 
	m_wndObjectName.Create(this,465, 30, 795, 55); 
	m_wndAddressLabel.Create(this, _T("Address"), 235, 60, 335, 85);
	m_wndAddress.Create(this,340, 60, 795, 85); 
	m_wndReasonLabel.Create(this, _T("Reason"), 235, 90, 335, 115);
	m_wndReason.Create(this,340, 90, 795, 115); 
	m_wndReferenceLabel.Create(this, _T("Included"), 235, 120, 335, 145);
	m_wndReference.Create(this,340, 120, 795, 145); 
	m_wndTaxIncluded.Create(this, _T("Tax Included"), 695, 120, 795, 145);

}

//	m_wndAdditionView.Create(this, CRect(0, 150, 800,  200));

}
void CFACashGeneralView::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndVoucherNo.SetLimitText(1024);
	m_wndVoucherNo.SetCheckValue(true);
	m_wndVoucherDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndVoucherDate.SetCheckValue(true);
	m_wndAccountingDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndAccountingDate.SetCheckValue(true);
	m_wndDocumentNo.SetLimitText(35);
	m_wndDocumentNo.SetCheckValue(true);
	m_wndObject.SetCheckValue(true);
	m_wndObject.LimitText(1024);
	m_wndObjectName.SetLimitText(35);
	m_wndObjectName.SetCheckValue(true);
	m_wndAddress.SetLimitText(1024);
	m_wndAddress.SetCheckValue(true);
	m_wndReason.SetLimitText(1024);
	m_wndReason.SetCheckValue(true);
	m_wndReference.SetLimitText(1024);
	m_wndReference.SetCheckValue(true);


	m_wndObjectName.SetReadOnly(true);
	m_wndAddress.SetCheckValue(false);
	m_wndReason.SetCheckValue(false);
	m_wndReference.SetCheckValue(false);

	m_wndDocumentNo.SetReadOnly(true);

	
	m_wndObject.InsertColumn(0, _T("ID"), DT_LEFT, 119);
	m_wndObject.InsertColumn(1, _T("Name"), DT_LEFT, 315);
	m_wndObject.Format(2, 0, 10);

}
void CFACashGeneralView::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//m_wndVoucherNo.SetEvent(WE_CHANGE, _OnVoucherNoChangeFnc);
	//m_wndVoucherNo.SetEvent(WE_SETFOCUS, _OnVoucherNoSetfocusFnc);
	//m_wndVoucherNo.SetEvent(WE_KILLFOCUS, _OnVoucherNoKillfocusFnc);
	m_wndVoucherNo.SetEvent(WE_CHECKVALUE, _OnVoucherNoCheckValueFnc);
	//m_wndVoucherDate.SetEvent(WE_CHANGE, _OnVoucherDateChangeFnc);
	//m_wndVoucherDate.SetEvent(WE_SETFOCUS, _OnVoucherDateSetfocusFnc);
	//m_wndVoucherDate.SetEvent(WE_KILLFOCUS, _OnVoucherDateKillfocusFnc);
	m_wndVoucherDate.SetEvent(WE_CHECKVALUE, _OnVoucherDateCheckValueFnc);
	//m_wndAccountingDate.SetEvent(WE_CHANGE, _OnAccountingDateChangeFnc);
	//m_wndAccountingDate.SetEvent(WE_SETFOCUS, _OnAccountingDateSetfocusFnc);
	//m_wndAccountingDate.SetEvent(WE_KILLFOCUS, _OnAccountingDateKillfocusFnc);
	m_wndAccountingDate.SetEvent(WE_CHECKVALUE, _OnAccountingDateCheckValueFnc);
	//m_wndDocumentNo.SetEvent(WE_CHANGE, _OnDocumentNoChangeFnc);
	//m_wndDocumentNo.SetEvent(WE_SETFOCUS, _OnDocumentNoSetfocusFnc);
	//m_wndDocumentNo.SetEvent(WE_KILLFOCUS, _OnDocumentNoKillfocusFnc);
	m_wndDocumentNo.SetEvent(WE_CHECKVALUE, _OnDocumentNoCheckValueFnc);
	m_wndObject.SetEvent(WE_SELENDOK, _OnObjectSelendokFnc);
	//m_wndObject.SetEvent(WE_SETFOCUS, _OnObjectSetfocusFnc);
	//m_wndObject.SetEvent(WE_KILLFOCUS, _OnObjectKillfocusFnc);
	m_wndObject.SetEvent(WE_SELCHANGE, _OnObjectSelectChangeFnc);
	m_wndObject.SetEvent(WE_LOADDATA, _OnObjectLoadDataFnc);
	//m_wndObject.SetEvent(WE_ADDNEW, _OnObjectAddNewFnc);
	//m_wndObjectName.SetEvent(WE_CHANGE, _OnObjectNameChangeFnc);
	//m_wndObjectName.SetEvent(WE_SETFOCUS, _OnObjectNameSetfocusFnc);
	//m_wndObjectName.SetEvent(WE_KILLFOCUS, _OnObjectNameKillfocusFnc);
	m_wndObjectName.SetEvent(WE_CHECKVALUE, _OnObjectNameCheckValueFnc);
	//m_wndAddress.SetEvent(WE_CHANGE, _OnAddressChangeFnc);
	//m_wndAddress.SetEvent(WE_SETFOCUS, _OnAddressSetfocusFnc);
	//m_wndAddress.SetEvent(WE_KILLFOCUS, _OnAddressKillfocusFnc);
	m_wndAddress.SetEvent(WE_CHECKVALUE, _OnAddressCheckValueFnc);
	//m_wndReason.SetEvent(WE_CHANGE, _OnReasonChangeFnc);
	//m_wndReason.SetEvent(WE_SETFOCUS, _OnReasonSetfocusFnc);
	//m_wndReason.SetEvent(WE_KILLFOCUS, _OnReasonKillfocusFnc);
	m_wndReason.SetEvent(WE_CHECKVALUE, _OnReasonCheckValueFnc);
	//m_wndReference.SetEvent(WE_CHANGE, _OnReferenceChangeFnc);
	//m_wndReference.SetEvent(WE_SETFOCUS, _OnReferenceSetfocusFnc);
	m_wndReference.SetEvent(WE_KILLFOCUS, _OnReferenceKillfocusFnc);
	m_wndReference.SetEvent(WE_CHECKVALUE, _OnReferenceCheckValueFnc);

	m_wndTaxIncluded.SetEvent(WE_CLICK, _OnTaxIncludedSelectFnc);

/*
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddFACashGeneralViewFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditFACashGeneralViewFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteFACashGeneralViewFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveFACashGeneralViewFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelFACashGeneralViewFnc, 0, 'T', VK_CONTROL);
*/
	SetMode(VM_NONE);
	

}
void CFACashGeneralView::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndVoucherNo.GetDlgCtrlID(), m_szVoucherNo);
	DDX_TextEx(pDX, m_wndVoucherDate.GetDlgCtrlID(), m_szVoucherDate);
	DDX_TextEx(pDX, m_wndAccountingDate.GetDlgCtrlID(), m_szAccountingDate);
	DDX_Text(pDX, m_wndDocumentNo.GetDlgCtrlID(), m_szDocumentNo);
	DDX_TextEx(pDX, m_wndObject.GetDlgCtrlID(), m_szObjectKey);
	DDX_Text(pDX, m_wndObjectName.GetDlgCtrlID(), m_szObjectName);
	DDX_Text(pDX, m_wndAddress.GetDlgCtrlID(), m_szAddress);
	DDX_Text(pDX, m_wndReason.GetDlgCtrlID(), m_szReason);
	DDX_Text(pDX, m_wndReference.GetDlgCtrlID(), m_szReference);
	DDX_Check(pDX, m_wndTaxIncluded.GetDlgCtrlID(), m_bIsTaxIncluded);

}
void CFACashGeneralView::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CFACashGeneralView::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CFACashGeneralView::SetDefaultValues(){

	m_szVoucherNo.Empty();
	m_szVoucherDate.Empty();
	m_szAccountingDate.Empty();
	m_szDocumentNo.Empty();
	m_szObjectKey.Empty();
	m_szObjectName.Empty();
	m_szAddress.Empty();
	m_szReason.Empty();
	m_szReference.Empty();
	
}
int CFACashGeneralView::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 3, 4, -1);
 			SetDefaultValues();
			m_wndVoucherNo.SetFocus();
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 3, 4, -1);
			m_wndVoucherNo.SetFocus();
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

		((CFACashDialog*)GetParent())->OnTaxIncluded((bool)m_bIsTaxIncluded);

 		UpdateData(FALSE);
 		return nOldMode;
}
/*void CFACashGeneralView::OnVoucherNoChange(){
	
} */
/*void CFACashGeneralView::OnVoucherNoSetfocus(){
	
} */
/*void CFACashGeneralView::OnVoucherNoKillfocus(){
	
} */
int CFACashGeneralView::OnVoucherNoCheckValue(){
	return 0;
} 
/*void CFACashGeneralView::OnVoucherDateChange(){
	
} */
/*void CFACashGeneralView::OnVoucherDateSetfocus(){
	
} */
/*void CFACashGeneralView::OnVoucherDateKillfocus(){
	
} */
int CFACashGeneralView::OnVoucherDateCheckValue(){
	return 0;
} 
/*void CFACashGeneralView::OnAccountingDateChange(){
	
} */
/*void CFACashGeneralView::OnAccountingDateSetfocus(){
	
} */
/*void CFACashGeneralView::OnAccountingDateKillfocus(){
	
} */
int CFACashGeneralView::OnAccountingDateCheckValue(){
	return 0;
} 
/*void CFACashGeneralView::OnDocumentNoChange(){
	
} */
/*void CFACashGeneralView::OnDocumentNoSetfocus(){
	
} */
/*void CFACashGeneralView::OnDocumentNoKillfocus(){
	
} */
int CFACashGeneralView::OnDocumentNoCheckValue(){
	return 0;
} 
void CFACashGeneralView::OnObjectSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CFACashGeneralView::OnObjectSelendok(){
	 UpdateData(true);
	 m_szObjectName = m_wndObject.GetCurrent(1);
	 UpdateData(false);
}
/*void CFACashGeneralView::OnObjectSetfocus(){
	
}*/
/*void CFACashGeneralView::OnObjectKillfocus(){
	
}*/
long CFACashGeneralView::OnObjectLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szWhere;
	szWhere.Empty();

	return pMF->LoadObjectList(&m_wndObject, m_szObjectKey, szWhere);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndObject.IsSearchKey() && !m_szObjectKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szObjectKey
};
	m_wndObject.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndObject.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CFACashGeneralView::OnObjectAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CFACashGeneralView::OnObjectNameChange(){
	
} */
/*void CFACashGeneralView::OnObjectNameSetfocus(){
	
} */
/*void CFACashGeneralView::OnObjectNameKillfocus(){
	
} */
int CFACashGeneralView::OnObjectNameCheckValue(){
	return 0;
} 
/*void CFACashGeneralView::OnAddressChange(){
	
} */
/*void CFACashGeneralView::OnAddressSetfocus(){
	
} */
/*void CFACashGeneralView::OnAddressKillfocus(){
	
} */
int CFACashGeneralView::OnAddressCheckValue(){
	return 0;
} 
/*void CFACashGeneralView::OnReasonChange(){
	
} */
/*void CFACashGeneralView::OnReasonSetfocus(){
	
} */
/*void CFACashGeneralView::OnReasonKillfocus(){
	
} */
int CFACashGeneralView::OnReasonCheckValue(){
	return 0;
} 
/*void CFACashGeneralView::OnReferenceChange(){
	
} */
/*void CFACashGeneralView::OnReferenceSetfocus(){
	
} */
void CFACashGeneralView::OnReferenceKillfocus(){
	
}
int CFACashGeneralView::OnReferenceCheckValue(){
	return 0;
}


void CFACashGeneralView::OnTaxIncludedSelect(){
	UpdateData(TRUE);
	((CFACashDialog*)GetParent())->OnTaxIncluded((bool)m_bIsTaxIncluded);
}

int CFACashGeneralView::OnAddFACashGeneralView(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CFACashGeneralView::OnEditFACashGeneralView(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CFACashGeneralView::OnDeleteFACashGeneralView(){
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
 		OnCancelFACashGeneralView();
 	}
	return 0;
}
int CFACashGeneralView::OnSaveFACashGeneralView(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
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
 		//OnFACashGeneralViewListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CFACashGeneralView::OnCancelFACashGeneralView(){
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
int CFACashGeneralView::OnFACashGeneralViewListLoadData(){
	return 0;
}


void CFACashGeneralView::GetData(CRecord* rs)
{
	if(rs == NULL)
		return;
	rs->GetValue(_T("fi_invoiceno"), m_szVoucherNo);
	rs->GetValue(_T("fi_invoicedate"), m_szVoucherDate);
	rs->GetValue(_T("fi_acctdate"), m_szAccountingDate);
	rs->GetValue(_T("fi_DocumentNo"), m_szDocumentNo);
	rs->GetValue(_T("fi_partner_id"), m_szObjectKey);
	rs->GetValue(_T("fi_parter_name"), m_szObjectName);
	rs->GetValue(_T("fi_partner_location"), m_szAddress);
	rs->GetValue(_T("fi_reason"), m_szReason);
	rs->GetValue(_T("fi_reference"), m_szReference);
	UpdateData(FALSE);
}

void CFACashGeneralView::SetData(CDbfMap* dbf)
{
	if(!IsValidateData())
		return;

	dbf->SetValue(_T("fi_invoiceno"), m_szVoucherNo);
	dbf->SetValue(_T("fi_invoicedate"), m_szVoucherDate);
	dbf->SetValue(_T("fi_accdate"), m_szAccountingDate);
	dbf->SetValue(_T("fi_documentno"), m_szDocumentNo);
	dbf->SetValue(_T("fi_partner_id"), m_szObjectKey);
	dbf->SetValue(_T("FI_PARTNER_NAME"), m_szObjectName);
	dbf->SetValue(_T("fi_partner_location"), m_szAddress);
	dbf->SetValue(_T("fi_reason"), m_szReason);
	dbf->SetValue(_T("fi_reference"), m_szReference);
	
}