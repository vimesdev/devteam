#include "HMSPatientFoodOrderEntry.h"
#include "MainFrm.h"
static void _OnMultipleDaySelectFnc(CWnd *pWnd){
	 ((CHMSPatientFoodOrderEntry*)pWnd)->OnMultipleDaySelect();
}
/*static void _OnDaysChangeFnc(CWnd *pWnd){
	((CHMSPatientFoodOrderEntry *)pWnd)->OnDaysChange();
} */
/*static void _OnDaysSetfocusFnc(CWnd *pWnd){
	((CHMSPatientFoodOrderEntry *)pWnd)->OnDaysSetfocus();} */ 
/*static void _OnDaysKillfocusFnc(CWnd *pWnd){
	((CHMSPatientFoodOrderEntry *)pWnd)->OnDaysKillfocus();
} */
static int _OnDaysCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientFoodOrderEntry *)pWnd)->OnDaysCheckValue();
} 
/*static void _OnOrderDateChangeFnc(CWnd *pWnd){
	((CHMSPatientFoodOrderEntry *)pWnd)->OnOrderDateChange();
} */
/*static void _OnOrderDateSetfocusFnc(CWnd *pWnd){
	((CHMSPatientFoodOrderEntry *)pWnd)->OnOrderDateSetfocus();} */ 
/*static void _OnOrderDateKillfocusFnc(CWnd *pWnd){
	((CHMSPatientFoodOrderEntry *)pWnd)->OnOrderDateKillfocus();
} */
static int _OnOrderDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientFoodOrderEntry *)pWnd)->OnOrderDateCheckValue();
} 
static void _OnPatientNameSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSPatientFoodOrderEntry* )pWnd)->OnPatientNameSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPatientNameSelendokFnc(CWnd *pWnd){
	((CHMSPatientFoodOrderEntry *)pWnd)->OnPatientNameSelendok();
}
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CHMSPatientFoodOrderEntry *)pWnd)->OnPatientNameKillfocus();
}*/
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((CHMSPatientFoodOrderEntry *)pWnd)->OnPatientNameKillfocus();
}*/
static long _OnPatientNameLoadDataFnc(CWnd *pWnd){
	return ((CHMSPatientFoodOrderEntry *)pWnd)->OnPatientNameLoadData();
}
/*static void _OnPatientNameAddNewFnc(CWnd *pWnd){
	((CHMSPatientFoodOrderEntry *)pWnd)->OnPatientNameAddNew();
}*/
/*static void _OnDocumentNoChangeFnc(CWnd *pWnd){
	((CHMSPatientFoodOrderEntry *)pWnd)->OnDocumentNoChange();
} */
/*static void _OnDocumentNoSetfocusFnc(CWnd *pWnd){
	((CHMSPatientFoodOrderEntry *)pWnd)->OnDocumentNoSetfocus();} */ 
/*static void _OnDocumentNoKillfocusFnc(CWnd *pWnd){
	((CHMSPatientFoodOrderEntry *)pWnd)->OnDocumentNoKillfocus();
} */
static int _OnDocumentNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientFoodOrderEntry *)pWnd)->OnDocumentNoCheckValue();
} 
static void _OnNameSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSPatientFoodOrderEntry* )pWnd)->OnNameSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnNameSelendokFnc(CWnd *pWnd){
	((CHMSPatientFoodOrderEntry *)pWnd)->OnNameSelendok();
}
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CHMSPatientFoodOrderEntry *)pWnd)->OnNameKillfocus();
}*/
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CHMSPatientFoodOrderEntry *)pWnd)->OnNameKillfocus();
}*/
static long _OnNameLoadDataFnc(CWnd *pWnd){
	return ((CHMSPatientFoodOrderEntry *)pWnd)->OnNameLoadData();
}
/*static void _OnNameAddNewFnc(CWnd *pWnd){
	((CHMSPatientFoodOrderEntry *)pWnd)->OnNameAddNew();
}*/
/*static void _OnQtyChangeFnc(CWnd *pWnd){
	((CHMSPatientFoodOrderEntry *)pWnd)->OnQtyChange();
} */
/*static void _OnQtySetfocusFnc(CWnd *pWnd){
	((CHMSPatientFoodOrderEntry *)pWnd)->OnQtySetfocus();} */ 
/*static void _OnQtyKillfocusFnc(CWnd *pWnd){
	((CHMSPatientFoodOrderEntry *)pWnd)->OnQtyKillfocus();
} */
static int _OnQtyCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientFoodOrderEntry *)pWnd)->OnQtyCheckValue();
} 
static void _OnName1SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSPatientFoodOrderEntry* )pWnd)->OnName1SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnName1SelendokFnc(CWnd *pWnd){
	((CHMSPatientFoodOrderEntry *)pWnd)->OnName1Selendok();
}
/*static void _OnName1SetfocusFnc(CWnd *pWnd){
	((CHMSPatientFoodOrderEntry *)pWnd)->OnName1Killfocus();
}*/
/*static void _OnName1KillfocusFnc(CWnd *pWnd){
	((CHMSPatientFoodOrderEntry *)pWnd)->OnName1Killfocus();
}*/
static long _OnName1LoadDataFnc(CWnd *pWnd){
	return ((CHMSPatientFoodOrderEntry *)pWnd)->OnName1LoadData();
}
/*static void _OnName1AddNewFnc(CWnd *pWnd){
	((CHMSPatientFoodOrderEntry *)pWnd)->OnName1AddNew();
}*/
/*static void _OnQty1ChangeFnc(CWnd *pWnd){
	((CHMSPatientFoodOrderEntry *)pWnd)->OnQty1Change();
} */
/*static void _OnQty1SetfocusFnc(CWnd *pWnd){
	((CHMSPatientFoodOrderEntry *)pWnd)->OnQty1Setfocus();} */ 
/*static void _OnQty1KillfocusFnc(CWnd *pWnd){
	((CHMSPatientFoodOrderEntry *)pWnd)->OnQty1Killfocus();
} */
static int _OnQty1CheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientFoodOrderEntry *)pWnd)->OnQty1CheckValue();
} 
static void _OnName2SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSPatientFoodOrderEntry* )pWnd)->OnName2SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnName2SelendokFnc(CWnd *pWnd){
	((CHMSPatientFoodOrderEntry *)pWnd)->OnName2Selendok();
}
/*static void _OnName2SetfocusFnc(CWnd *pWnd){
	((CHMSPatientFoodOrderEntry *)pWnd)->OnName2Killfocus();
}*/
/*static void _OnName2KillfocusFnc(CWnd *pWnd){
	((CHMSPatientFoodOrderEntry *)pWnd)->OnName2Killfocus();
}*/
static long _OnName2LoadDataFnc(CWnd *pWnd){
	return ((CHMSPatientFoodOrderEntry *)pWnd)->OnName2LoadData();
}
/*static void _OnName2AddNewFnc(CWnd *pWnd){
	((CHMSPatientFoodOrderEntry *)pWnd)->OnName2AddNew();
}*/
/*static void _OnQty2ChangeFnc(CWnd *pWnd){
	((CHMSPatientFoodOrderEntry *)pWnd)->OnQty2Change();
} */
/*static void _OnQty2SetfocusFnc(CWnd *pWnd){
	((CHMSPatientFoodOrderEntry *)pWnd)->OnQty2Setfocus();} */ 
/*static void _OnQty2KillfocusFnc(CWnd *pWnd){
	((CHMSPatientFoodOrderEntry *)pWnd)->OnQty2Killfocus();
} */
static int _OnQty2CheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientFoodOrderEntry *)pWnd)->OnQty2CheckValue();
} 
static void _OnBreakfastRelativeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSPatientFoodOrderEntry* )pWnd)->OnBreakfastRelativeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnBreakfastRelativeSelendokFnc(CWnd *pWnd){
	((CHMSPatientFoodOrderEntry *)pWnd)->OnBreakfastRelativeSelendok();
}
/*static void _OnBreakfastRelativeSetfocusFnc(CWnd *pWnd){
	((CHMSPatientFoodOrderEntry *)pWnd)->OnBreakfastRelativeKillfocus();
}*/
/*static void _OnBreakfastRelativeKillfocusFnc(CWnd *pWnd){
	((CHMSPatientFoodOrderEntry *)pWnd)->OnBreakfastRelativeKillfocus();
}*/
static long _OnBreakfastRelativeLoadDataFnc(CWnd *pWnd){
	return ((CHMSPatientFoodOrderEntry *)pWnd)->OnBreakfastRelativeLoadData();
}
/*static void _OnBreakfastRelativeAddNewFnc(CWnd *pWnd){
	((CHMSPatientFoodOrderEntry *)pWnd)->OnBreakfastRelativeAddNew();
}*/
/*static void _OnQty3ChangeFnc(CWnd *pWnd){
	((CHMSPatientFoodOrderEntry *)pWnd)->OnQty3Change();
} */
/*static void _OnQty3SetfocusFnc(CWnd *pWnd){
	((CHMSPatientFoodOrderEntry *)pWnd)->OnQty3Setfocus();} */ 
/*static void _OnQty3KillfocusFnc(CWnd *pWnd){
	((CHMSPatientFoodOrderEntry *)pWnd)->OnQty3Killfocus();
} */
static int _OnQty3CheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientFoodOrderEntry *)pWnd)->OnQty3CheckValue();
} 
/*static void _OnNoteChangeFnc(CWnd *pWnd){
	((CHMSPatientFoodOrderEntry *)pWnd)->OnNoteChange();
} */
/*static void _OnNoteSetfocusFnc(CWnd *pWnd){
	((CHMSPatientFoodOrderEntry *)pWnd)->OnNoteSetfocus();} */ 
/*static void _OnNoteKillfocusFnc(CWnd *pWnd){
	((CHMSPatientFoodOrderEntry *)pWnd)->OnNoteKillfocus();
} */
static int _OnNoteCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientFoodOrderEntry *)pWnd)->OnNoteCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSPatientFoodOrderEntry *pVw = (CHMSPatientFoodOrderEntry *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSPatientFoodOrderEntry *pVw = (CHMSPatientFoodOrderEntry *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSPatientFoodOrderEntryFnc(CWnd *pWnd){
	 return ((CHMSPatientFoodOrderEntry*)pWnd)->OnAddHMSPatientFoodOrderEntry();
} 
static int _OnEditHMSPatientFoodOrderEntryFnc(CWnd *pWnd){
	 return ((CHMSPatientFoodOrderEntry*)pWnd)->OnEditHMSPatientFoodOrderEntry();
} 
static int _OnDeleteHMSPatientFoodOrderEntryFnc(CWnd *pWnd){
	 return ((CHMSPatientFoodOrderEntry*)pWnd)->OnDeleteHMSPatientFoodOrderEntry();
} 
static int _OnSaveHMSPatientFoodOrderEntryFnc(CWnd *pWnd){
	 return ((CHMSPatientFoodOrderEntry*)pWnd)->OnSaveHMSPatientFoodOrderEntry();
} 
static int _OnCancelHMSPatientFoodOrderEntryFnc(CWnd *pWnd){
	 return ((CHMSPatientFoodOrderEntry*)pWnd)->OnCancelHMSPatientFoodOrderEntry();
} 
CHMSPatientFoodOrderEntry::CHMSPatientFoodOrderEntry(){

	m_nDlgWidth = 485;
	m_nDlgHeight = 225;
	SetDefaultValues();
}
CHMSPatientFoodOrderEntry::~CHMSPatientFoodOrderEntry(){
}
void CHMSPatientFoodOrderEntry::OnCreateComponents(){
	m_wndMultipleDay.Create(this, _T("Multiple Day"), 5, 5, 115, 30);
	m_wndDays.Create(this,120, 5, 200, 30); 
	m_wndOrderDateLabel.Create(this, _T("Date"), 305, 5, 375, 30);
	m_wndOrderDate.Create(this,380, 5, 475, 30); 
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 5, 35, 115, 60);
	m_wndPatientName.Create(this,120, 35, 375, 60); 
	m_wndDocumentNo.Create(this,380, 35, 475, 60); 
	m_wndNameLabel.Create(this, _T("\x102n s\xE1ng"), 5, 65, 115, 90);
	m_wndName.Create(this,120, 65, 375, 90); 
	m_wndQtyLabel.Create(this, _T("S\x1ED1 su\x1EA5t"), 380, 65, 435, 90);
	m_wndQty.Create(this,440, 65, 475, 90); 
	m_wndName1Label.Create(this, _T("\x102n tr\x1B0\x61"), 5, 95, 115, 120);
	m_wndName1.Create(this,120, 95, 375, 120); 
	m_wndQty1Label.Create(this, _T("S\x1ED1 su\x1EA5t"), 380, 95, 435, 120);
	m_wndQty1.Create(this,440, 95, 475, 120); 
	m_wndName2Label.Create(this, _T("\x102n t\x1ED1i"), 5, 125, 115, 150);
	m_wndName2.Create(this,120, 125, 375, 150); 
	m_wndQty2Label.Create(this, _T("S\x1ED1 su\x1EA5t"), 380, 125, 435, 150);
	m_wndQty2.Create(this,440, 125, 475, 150); 
	m_wndBreakfastRelativeLabel.Create(this, _T("BreakfastRelative"), 5, 155, 115, 180);
	m_wndBreakfastRelative.Create(this,120, 155, 375, 180); 
	m_wndQty3Label.Create(this, _T("Qty3"), 380, 155, 435, 180);
	m_wndQty3.Create(this,440, 155, 475, 180); 
	m_wndNoteLabel.Create(this, _T("Note"), 5, 185, 115, 210);
	m_wndNote.Create(this,120, 185, 374, 210); 
	m_wndSave.Create(this, _T("&Save"), 379, 185, 434, 210);
	m_wndClose.Create(this, _T("X"), 439, 185, 474, 210);

}
void CHMSPatientFoodOrderEntry::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndDays.SetLimitText(1024);
	m_wndDays.SetCheckValue(true);
	m_wndOrderDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndOrderDate.SetCheckValue(true);
	m_wndPatientName.SetCheckValue(true);
	m_wndPatientName.LimitText(1024);
	m_wndDocumentNo.SetLimitText(1024);
	m_wndDocumentNo.SetCheckValue(true);
	m_wndName.SetCheckValue(true);
	m_wndName.LimitText(1024);
	m_wndQty.SetLimitText(1024);
	m_wndQty.SetCheckValue(true);
	m_wndName1.SetCheckValue(true);
	m_wndName1.LimitText(1024);
	m_wndQty1.SetLimitText(1024);
	m_wndQty1.SetCheckValue(true);
	m_wndName2.SetCheckValue(true);
	m_wndName2.LimitText(1024);
	m_wndQty2.SetLimitText(1024);
	m_wndQty2.SetCheckValue(true);
	m_wndBreakfastRelative.SetCheckValue(true);
	m_wndBreakfastRelative.LimitText(35);
	m_wndQty3.SetLimitText(16);
	m_wndQty3.SetCheckValue(true);
	m_wndNote.SetLimitText(35);
	m_wndNote.SetCheckValue(true);










	m_wndBreakfastRelative.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndBreakfastRelative.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CHMSPatientFoodOrderEntry::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndMultipleDay.SetEvent(WE_CLICK, _OnMultipleDaySelectFnc);
	//m_wndDays.SetEvent(WE_CHANGE, _OnDaysChangeFnc);
	//m_wndDays.SetEvent(WE_SETFOCUS, _OnDaysSetfocusFnc);
	//m_wndDays.SetEvent(WE_KILLFOCUS, _OnDaysKillfocusFnc);
	m_wndDays.SetEvent(WE_CHECKVALUE, _OnDaysCheckValueFnc);
	//m_wndOrderDate.SetEvent(WE_CHANGE, _OnOrderDateChangeFnc);
	//m_wndOrderDate.SetEvent(WE_SETFOCUS, _OnOrderDateSetfocusFnc);
	//m_wndOrderDate.SetEvent(WE_KILLFOCUS, _OnOrderDateKillfocusFnc);
	m_wndOrderDate.SetEvent(WE_CHECKVALUE, _OnOrderDateCheckValueFnc);
	m_wndPatientName.SetEvent(WE_SELENDOK, _OnPatientNameSelendokFnc);
	//m_wndPatientName.SetEvent(WE_SETFOCUS, _OnPatientNameSetfocusFnc);
	//m_wndPatientName.SetEvent(WE_KILLFOCUS, _OnPatientNameKillfocusFnc);
	m_wndPatientName.SetEvent(WE_SELCHANGE, _OnPatientNameSelectChangeFnc);
	m_wndPatientName.SetEvent(WE_LOADDATA, _OnPatientNameLoadDataFnc);
	//m_wndPatientName.SetEvent(WE_ADDNEW, _OnPatientNameAddNewFnc);
	//m_wndDocumentNo.SetEvent(WE_CHANGE, _OnDocumentNoChangeFnc);
	//m_wndDocumentNo.SetEvent(WE_SETFOCUS, _OnDocumentNoSetfocusFnc);
	//m_wndDocumentNo.SetEvent(WE_KILLFOCUS, _OnDocumentNoKillfocusFnc);
	m_wndDocumentNo.SetEvent(WE_CHECKVALUE, _OnDocumentNoCheckValueFnc);
	m_wndName.SetEvent(WE_SELENDOK, _OnNameSelendokFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_SELCHANGE, _OnNameSelectChangeFnc);
	m_wndName.SetEvent(WE_LOADDATA, _OnNameLoadDataFnc);
	//m_wndName.SetEvent(WE_ADDNEW, _OnNameAddNewFnc);
	//m_wndQty.SetEvent(WE_CHANGE, _OnQtyChangeFnc);
	//m_wndQty.SetEvent(WE_SETFOCUS, _OnQtySetfocusFnc);
	//m_wndQty.SetEvent(WE_KILLFOCUS, _OnQtyKillfocusFnc);
	m_wndQty.SetEvent(WE_CHECKVALUE, _OnQtyCheckValueFnc);
	m_wndName1.SetEvent(WE_SELENDOK, _OnName1SelendokFnc);
	//m_wndName1.SetEvent(WE_SETFOCUS, _OnName1SetfocusFnc);
	//m_wndName1.SetEvent(WE_KILLFOCUS, _OnName1KillfocusFnc);
	m_wndName1.SetEvent(WE_SELCHANGE, _OnName1SelectChangeFnc);
	m_wndName1.SetEvent(WE_LOADDATA, _OnName1LoadDataFnc);
	//m_wndName1.SetEvent(WE_ADDNEW, _OnName1AddNewFnc);
	//m_wndQty1.SetEvent(WE_CHANGE, _OnQty1ChangeFnc);
	//m_wndQty1.SetEvent(WE_SETFOCUS, _OnQty1SetfocusFnc);
	//m_wndQty1.SetEvent(WE_KILLFOCUS, _OnQty1KillfocusFnc);
	m_wndQty1.SetEvent(WE_CHECKVALUE, _OnQty1CheckValueFnc);
	m_wndName2.SetEvent(WE_SELENDOK, _OnName2SelendokFnc);
	//m_wndName2.SetEvent(WE_SETFOCUS, _OnName2SetfocusFnc);
	//m_wndName2.SetEvent(WE_KILLFOCUS, _OnName2KillfocusFnc);
	m_wndName2.SetEvent(WE_SELCHANGE, _OnName2SelectChangeFnc);
	m_wndName2.SetEvent(WE_LOADDATA, _OnName2LoadDataFnc);
	//m_wndName2.SetEvent(WE_ADDNEW, _OnName2AddNewFnc);
	//m_wndQty2.SetEvent(WE_CHANGE, _OnQty2ChangeFnc);
	//m_wndQty2.SetEvent(WE_SETFOCUS, _OnQty2SetfocusFnc);
	//m_wndQty2.SetEvent(WE_KILLFOCUS, _OnQty2KillfocusFnc);
	m_wndQty2.SetEvent(WE_CHECKVALUE, _OnQty2CheckValueFnc);
	m_wndBreakfastRelative.SetEvent(WE_SELENDOK, _OnBreakfastRelativeSelendokFnc);
	//m_wndBreakfastRelative.SetEvent(WE_SETFOCUS, _OnBreakfastRelativeSetfocusFnc);
	//m_wndBreakfastRelative.SetEvent(WE_KILLFOCUS, _OnBreakfastRelativeKillfocusFnc);
	m_wndBreakfastRelative.SetEvent(WE_SELCHANGE, _OnBreakfastRelativeSelectChangeFnc);
	m_wndBreakfastRelative.SetEvent(WE_LOADDATA, _OnBreakfastRelativeLoadDataFnc);
	//m_wndBreakfastRelative.SetEvent(WE_ADDNEW, _OnBreakfastRelativeAddNewFnc);
	//m_wndQty3.SetEvent(WE_CHANGE, _OnQty3ChangeFnc);
	//m_wndQty3.SetEvent(WE_SETFOCUS, _OnQty3SetfocusFnc);
	//m_wndQty3.SetEvent(WE_KILLFOCUS, _OnQty3KillfocusFnc);
	m_wndQty3.SetEvent(WE_CHECKVALUE, _OnQty3CheckValueFnc);
	//m_wndNote.SetEvent(WE_CHANGE, _OnNoteChangeFnc);
	//m_wndNote.SetEvent(WE_SETFOCUS, _OnNoteSetfocusFnc);
	//m_wndNote.SetEvent(WE_KILLFOCUS, _OnNoteKillfocusFnc);
	m_wndNote.SetEvent(WE_CHECKVALUE, _OnNoteCheckValueFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSPatientFoodOrderEntryFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSPatientFoodOrderEntryFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSPatientFoodOrderEntryFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSPatientFoodOrderEntryFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSPatientFoodOrderEntryFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CHMSPatientFoodOrderEntry::OnDoDataExchange(CDataExchange* pDX){
	DDX_Check(pDX, m_wndMultipleDay.GetDlgCtrlID(), m_bMultipleDay);
	DDX_Text(pDX, m_wndDays.GetDlgCtrlID(), m_nDays);
	DDX_TextEx(pDX, m_wndOrderDate.GetDlgCtrlID(), m_szOrderDate);
	DDX_TextEx(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientNameKey);
	DDX_Text(pDX, m_wndDocumentNo.GetDlgCtrlID(), m_szDocumentNo);
	DDX_TextEx(pDX, m_wndName.GetDlgCtrlID(), m_szNameKey);
	DDX_Text(pDX, m_wndQty.GetDlgCtrlID(), m_nQty);
	DDX_TextEx(pDX, m_wndName1.GetDlgCtrlID(), m_szName1Key);
	DDX_Text(pDX, m_wndQty1.GetDlgCtrlID(), m_nQty1);
	DDX_TextEx(pDX, m_wndName2.GetDlgCtrlID(), m_szName2Key);
	DDX_Text(pDX, m_wndQty2.GetDlgCtrlID(), m_nQty2);
	DDX_TextEx(pDX, m_wndBreakfastRelative.GetDlgCtrlID(), m_szBreakfastRelativeKey);
	DDX_Text(pDX, m_wndQty3.GetDlgCtrlID(), m_nQty3);
	DDX_Text(pDX, m_wndNote.GetDlgCtrlID(), m_szNote);

}
void CHMSPatientFoodOrderEntry::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("MultipleDay")] =  m_bMultipleDay;
	m_jData[_T("Days")] =  m_nDays;
	m_jData[_T("OrderDate")] =  m_szOrderDate;
	m_jData[_T("PatientName")] =  m_szPatientNameKey;
	m_jData[_T("DocumentNo")] =  m_szDocumentNo;
	m_jData[_T("Name")] =  m_szNameKey;
	m_jData[_T("Qty")] =  m_nQty;
	m_jData[_T("Name1")] =  m_szName1Key;
	m_jData[_T("Qty1")] =  m_nQty1;
	m_jData[_T("Name2")] =  m_szName2Key;
	m_jData[_T("Qty2")] =  m_nQty2;
	m_jData[_T("BreakfastRelative")] =  m_szBreakfastRelativeKey;
	m_jData[_T("Qty3")] =  m_nQty3;
	m_jData[_T("Note")] =  m_szNote;
	}
	else
	{
			
	m_jData[_T("MultipleDay")].GetValue(m_bMultipleDay);
	m_jData[_T("Days")].GetValue(m_nDays);
	m_jData[_T("OrderDate")].GetValue(m_szOrderDate);
	m_jData[_T("PatientName")].GetValue(m_szPatientNameKey);
	m_jData[_T("DocumentNo")].GetValue(m_szDocumentNo);
	m_jData[_T("Name")].GetValue(m_szNameKey);
	m_jData[_T("Qty")].GetValue(m_nQty);
	m_jData[_T("Name1")].GetValue(m_szName1Key);
	m_jData[_T("Qty1")].GetValue(m_nQty1);
	m_jData[_T("Name2")].GetValue(m_szName2Key);
	m_jData[_T("Qty2")].GetValue(m_nQty2);
	m_jData[_T("BreakfastRelative")].GetValue(m_szBreakfastRelativeKey);
	m_jData[_T("Qty3")].GetValue(m_nQty3);
	m_jData[_T("Note")].GetValue(m_szNote);
	}

}
void CHMSPatientFoodOrderEntry::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSPatientFoodOrderEntry::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSPatientFoodOrderEntry::SetDefaultValues(){

	m_bMultipleDay=FALSE;
	m_nDays=0;
	m_szOrderDate.Empty();
	m_szPatientNameKey.Empty();
	m_szDocumentNo.Empty();
	m_szNameKey.Empty();
	m_nQty=0;
	m_szName1Key.Empty();
	m_nQty1=0;
	m_szName2Key.Empty();
	m_nQty2=0;
	m_szBreakfastRelativeKey.Empty();
	m_nQty3=0;
	m_szNote.Empty();

}
int CHMSPatientFoodOrderEntry::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
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
	void CHMSPatientFoodOrderEntry::OnMultipleDaySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
/*void CHMSPatientFoodOrderEntry::OnDaysChange(){
	
} */
/*void CHMSPatientFoodOrderEntry::OnDaysSetfocus(){
	
} */
/*void CHMSPatientFoodOrderEntry::OnDaysKillfocus(){
	
} */
int CHMSPatientFoodOrderEntry::OnDaysCheckValue(){
	return 0;
} 
/*void CHMSPatientFoodOrderEntry::OnOrderDateChange(){
	
} */
/*void CHMSPatientFoodOrderEntry::OnOrderDateSetfocus(){
	
} */
/*void CHMSPatientFoodOrderEntry::OnOrderDateKillfocus(){
	
} */
int CHMSPatientFoodOrderEntry::OnOrderDateCheckValue(){
	return 0;
} 
void CHMSPatientFoodOrderEntry::OnPatientNameSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPatientFoodOrderEntry::OnPatientNameSelendok(){
	 
}
/*void CHMSPatientFoodOrderEntry::OnPatientNameSetfocus(){
	
}*/
/*void CHMSPatientFoodOrderEntry::OnPatientNameKillfocus(){
	
}*/
long CHMSPatientFoodOrderEntry::OnPatientNameLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndPatientName.IsSearchKey() && !m_szPatientNameKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szPatientNameKey
};
	m_wndPatientName.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPatientName.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSPatientFoodOrderEntry::OnPatientNameAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSPatientFoodOrderEntry::OnDocumentNoChange(){
	
} */
/*void CHMSPatientFoodOrderEntry::OnDocumentNoSetfocus(){
	
} */
/*void CHMSPatientFoodOrderEntry::OnDocumentNoKillfocus(){
	
} */
int CHMSPatientFoodOrderEntry::OnDocumentNoCheckValue(){
	return 0;
} 
void CHMSPatientFoodOrderEntry::OnNameSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPatientFoodOrderEntry::OnNameSelendok(){
	 
}
/*void CHMSPatientFoodOrderEntry::OnNameSetfocus(){
	
}*/
/*void CHMSPatientFoodOrderEntry::OnNameKillfocus(){
	
}*/
long CHMSPatientFoodOrderEntry::OnNameLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndName.IsSearchKey() && !m_szNameKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szNameKey
};
	m_wndName.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndName.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSPatientFoodOrderEntry::OnNameAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSPatientFoodOrderEntry::OnQtyChange(){
	
} */
/*void CHMSPatientFoodOrderEntry::OnQtySetfocus(){
	
} */
/*void CHMSPatientFoodOrderEntry::OnQtyKillfocus(){
	
} */
int CHMSPatientFoodOrderEntry::OnQtyCheckValue(){
	return 0;
} 
void CHMSPatientFoodOrderEntry::OnName1SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPatientFoodOrderEntry::OnName1Selendok(){
	 
}
/*void CHMSPatientFoodOrderEntry::OnName1Setfocus(){
	
}*/
/*void CHMSPatientFoodOrderEntry::OnName1Killfocus(){
	
}*/
long CHMSPatientFoodOrderEntry::OnName1LoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndName1.IsSearchKey() && !m_szName1Key.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szName1Key
};
	m_wndName1.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndName1.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSPatientFoodOrderEntry::OnName1AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSPatientFoodOrderEntry::OnQty1Change(){
	
} */
/*void CHMSPatientFoodOrderEntry::OnQty1Setfocus(){
	
} */
/*void CHMSPatientFoodOrderEntry::OnQty1Killfocus(){
	
} */
int CHMSPatientFoodOrderEntry::OnQty1CheckValue(){
	return 0;
} 
void CHMSPatientFoodOrderEntry::OnName2SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPatientFoodOrderEntry::OnName2Selendok(){
	 
}
/*void CHMSPatientFoodOrderEntry::OnName2Setfocus(){
	
}*/
/*void CHMSPatientFoodOrderEntry::OnName2Killfocus(){
	
}*/
long CHMSPatientFoodOrderEntry::OnName2LoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndName2.IsSearchKey() && !m_szName2Key.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szName2Key
};
	m_wndName2.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndName2.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSPatientFoodOrderEntry::OnName2AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSPatientFoodOrderEntry::OnQty2Change(){
	
} */
/*void CHMSPatientFoodOrderEntry::OnQty2Setfocus(){
	
} */
/*void CHMSPatientFoodOrderEntry::OnQty2Killfocus(){
	
} */
int CHMSPatientFoodOrderEntry::OnQty2CheckValue(){
	return 0;
} 
void CHMSPatientFoodOrderEntry::OnBreakfastRelativeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPatientFoodOrderEntry::OnBreakfastRelativeSelendok(){
	 
}
/*void CHMSPatientFoodOrderEntry::OnBreakfastRelativeSetfocus(){
	
}*/
/*void CHMSPatientFoodOrderEntry::OnBreakfastRelativeKillfocus(){
	
}*/
long CHMSPatientFoodOrderEntry::OnBreakfastRelativeLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndBreakfastRelative.IsSearchKey() && !m_szBreakfastRelativeKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szBreakfastRelativeKey
};
	m_wndBreakfastRelative.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndBreakfastRelative.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSPatientFoodOrderEntry::OnBreakfastRelativeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSPatientFoodOrderEntry::OnQty3Change(){
	
} */
/*void CHMSPatientFoodOrderEntry::OnQty3Setfocus(){
	
} */
/*void CHMSPatientFoodOrderEntry::OnQty3Killfocus(){
	
} */
int CHMSPatientFoodOrderEntry::OnQty3CheckValue(){
	return 0;
} 
/*void CHMSPatientFoodOrderEntry::OnNoteChange(){
	
} */
/*void CHMSPatientFoodOrderEntry::OnNoteSetfocus(){
	
} */
/*void CHMSPatientFoodOrderEntry::OnNoteKillfocus(){
	
} */
int CHMSPatientFoodOrderEntry::OnNoteCheckValue(){
	return 0;
} 
void CHMSPatientFoodOrderEntry::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPatientFoodOrderEntry::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSPatientFoodOrderEntry::OnAddHMSPatientFoodOrderEntry(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSPatientFoodOrderEntry::OnEditHMSPatientFoodOrderEntry(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSPatientFoodOrderEntry::OnDeleteHMSPatientFoodOrderEntry(){
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
 		OnCancelHMSPatientFoodOrderEntry();
 	}
	return 0;
}
int CHMSPatientFoodOrderEntry::OnSaveHMSPatientFoodOrderEntry(){
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
 		//OnHMSPatientFoodOrderEntryListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSPatientFoodOrderEntry::OnCancelHMSPatientFoodOrderEntry(){
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
int CHMSPatientFoodOrderEntry::OnHMSPatientFoodOrderEntryListLoadData(){
	return 0;
}
