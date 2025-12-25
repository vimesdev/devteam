#include "HMSDrugLogsDialog.h"
#include "MainFrm.h"
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSDrugLogsDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSDrugLogsDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSDrugLogsDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSDrugLogsDialog*)pWnd)->OnListDeleteItem();
} 
static void _OnDrugNameCntSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSDrugLogsDialog* )pWnd)->OnDrugNameCntSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDrugNameCntSelendokFnc(CWnd *pWnd){
	((CHMSDrugLogsDialog *)pWnd)->OnDrugNameCntSelendok();
}
/*static void _OnDrugNameCntSetfocusFnc(CWnd *pWnd){
	((CHMSDrugLogsDialog *)pWnd)->OnDrugNameCntKillfocus();
}*/
/*static void _OnDrugNameCntKillfocusFnc(CWnd *pWnd){
	((CHMSDrugLogsDialog *)pWnd)->OnDrugNameCntKillfocus();
}*/
static long _OnDrugNameCntLoadDataFnc(CWnd *pWnd){
	return ((CHMSDrugLogsDialog *)pWnd)->OnDrugNameCntLoadData();
}
/*static void _OnDrugNameCntAddNewFnc(CWnd *pWnd){
	((CHMSDrugLogsDialog *)pWnd)->OnDrugNameCntAddNew();
}*/
/*static void _OnQuantityChangeFnc(CWnd *pWnd){
	((CHMSDrugLogsDialog *)pWnd)->OnQuantityChange();
} */
/*static void _OnQuantitySetfocusFnc(CWnd *pWnd){
	((CHMSDrugLogsDialog *)pWnd)->OnQuantitySetfocus();} */ 
/*static void _OnQuantityKillfocusFnc(CWnd *pWnd){
	((CHMSDrugLogsDialog *)pWnd)->OnQuantityKillfocus();
} */
static int _OnQuantityCheckValueFnc(CWnd *pWnd){
	return ((CHMSDrugLogsDialog *)pWnd)->OnQuantityCheckValue();
} 
/*static void _OnDay NumberChangeFnc(CWnd *pWnd){
	((CHMSDrugLogsDialog *)pWnd)->OnDay NumberChange();
} */
/*static void _OnDay NumberSetfocusFnc(CWnd *pWnd){
	((CHMSDrugLogsDialog *)pWnd)->OnDay NumberSetfocus();} */ 
/*static void _OnDay NumberKillfocusFnc(CWnd *pWnd){
	((CHMSDrugLogsDialog *)pWnd)->OnDay NumberKillfocus();
} */
static int _OnDay NumberCheckValueFnc(CWnd *pWnd){
	return ((CHMSDrugLogsDialog *)pWnd)->OnDay NumberCheckValue();
} 
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CHMSDrugLogsDialog *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CHMSDrugLogsDialog *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CHMSDrugLogsDialog *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSDrugLogsDialog *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnNoteChangeFnc(CWnd *pWnd){
	((CHMSDrugLogsDialog *)pWnd)->OnNoteChange();
} */
/*static void _OnNoteSetfocusFnc(CWnd *pWnd){
	((CHMSDrugLogsDialog *)pWnd)->OnNoteSetfocus();} */ 
/*static void _OnNoteKillfocusFnc(CWnd *pWnd){
	((CHMSDrugLogsDialog *)pWnd)->OnNoteKillfocus();
} */
static int _OnNoteCheckValueFnc(CWnd *pWnd){
	return ((CHMSDrugLogsDialog *)pWnd)->OnNoteCheckValue();
} 
static void _OnPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSDrugLogsDialog* )pWnd)->OnPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPeriodSelendokFnc(CWnd *pWnd){
	((CHMSDrugLogsDialog *)pWnd)->OnPeriodSelendok();
}
/*static void _OnPeriodSetfocusFnc(CWnd *pWnd){
	((CHMSDrugLogsDialog *)pWnd)->OnPeriodKillfocus();
}*/
/*static void _OnPeriodKillfocusFnc(CWnd *pWnd){
	((CHMSDrugLogsDialog *)pWnd)->OnPeriodKillfocus();
}*/
static long _OnPeriodLoadDataFnc(CWnd *pWnd){
	return ((CHMSDrugLogsDialog *)pWnd)->OnPeriodLoadData();
}
/*static void _OnPeriodAddNewFnc(CWnd *pWnd){
	((CHMSDrugLogsDialog *)pWnd)->OnPeriodAddNew();
}*/
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSDrugLogsDialog *pVw = (CHMSDrugLogsDialog *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSDrugLogsDialog *pVw = (CHMSDrugLogsDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnDiscardSelectFnc(CWnd *pWnd){
	CHMSDrugLogsDialog *pVw = (CHMSDrugLogsDialog *)pWnd;
	pVw->OnDiscardSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSDrugLogsDialog *pVw = (CHMSDrugLogsDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSDrugLogsDialogFnc(CWnd *pWnd){
	 return ((CHMSDrugLogsDialog*)pWnd)->OnAddHMSDrugLogsDialog();
} 
static int _OnEditHMSDrugLogsDialogFnc(CWnd *pWnd){
	 return ((CHMSDrugLogsDialog*)pWnd)->OnEditHMSDrugLogsDialog();
} 
static int _OnDeleteHMSDrugLogsDialogFnc(CWnd *pWnd){
	 return ((CHMSDrugLogsDialog*)pWnd)->OnDeleteHMSDrugLogsDialog();
} 
static int _OnSaveHMSDrugLogsDialogFnc(CWnd *pWnd){
	 return ((CHMSDrugLogsDialog*)pWnd)->OnSaveHMSDrugLogsDialog();
} 
static int _OnCancelHMSDrugLogsDialogFnc(CWnd *pWnd){
	 return ((CHMSDrugLogsDialog*)pWnd)->OnCancelHMSDrugLogsDialog();
} 
CHMSDrugLogsDialog::CHMSDrugLogsDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1005;
	m_nDlgHeight = 605;
	SetDefaultValues();
}
CHMSDrugLogsDialog::~CHMSDrugLogsDialog(){
}
void CHMSDrugLogsDialog::OnCreateComponents(){
	m_wndDrugLogs.Create(this, _T("Drug Logs"), 5, 5, 1000, 510);
	m_wndList.Create(this,10, 30, 995, 505); 
	m_wndDrugNameCntLabel.Create(this, _T("Drug Name /Cnt"), 6, 515, 126, 540);
	m_wndDrugNameCnt.Create(this,131, 515, 401, 540); 
	m_wndQuantityLabel.Create(this, _T("Quantity"), 406, 515, 516, 540);
	m_wndQuantity.Create(this,521, 515, 591, 540); 
	m_wndDay NumberLabel.Create(this, _T("Day Of Number"), 596, 515, 706, 540);
	m_wndDay Number.Create(this,711, 515, 781, 540); 
	m_wndStartDateLabel.Create(this, _T("Start Date"), 786, 515, 896, 540);
	m_wndFromDate.Create(this,901, 515, 1001, 540); 
	m_wndNoteLabel.Create(this, _T("Note"), 6, 545, 126, 570);
	m_wndNote.Create(this,131, 545, 781, 570); 
	m_wndPeriodLabel.Create(this, _T("Period"), 786, 545, 896, 570);
	m_wndPeriod.Create(this,901, 545, 1002, 570); 
	m_wndAdd.Create(this, _T("&Add"), 626, 575, 716, 600);
	m_wndSave.Create(this, _T("&Save"), 721, 575, 811, 600);
	m_wndDiscard.Create(this, _T("&Discard"), 816, 575, 906, 600);
	m_wndClose.Create(this, _T("&Close"), 911, 575, 1001, 600);

}
void CHMSDrugLogsDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndDrugNameCnt.SetCheckValue(true);
	m_wndDrugNameCnt.LimitText(35);
	m_wndQuantity.SetLimitText(16);
	m_wndQuantity.SetCheckValue(true);
	m_wndDay Number.SetLimitText(16);
	m_wndDay Number.SetCheckValue(true);
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndNote.SetLimitText(35);
	m_wndNote.SetCheckValue(true);
	m_wndPeriod.SetCheckValue(true);
	m_wndPeriod.LimitText(35);


	m_wndList.InsertColumn(0, _T("Index"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(1, _T("Description"), CFMT_TEXT, 300);
	m_wndList.InsertColumn(2, _T("Unit"), CFMT_TEXT, 70);
	m_wndList.InsertColumn(3, _T("Quantity"), CFMT_TEXT, 70);
	m_wndList.InsertColumn(4, _T("Day Number"), CFMT_NUMBER, 70);


	m_wndDrugNameCnt.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDrugNameCnt.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndPeriod.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndPeriod.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CHMSDrugLogsDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndDrugNameCnt.SetEvent(WE_SELENDOK, _OnDrugNameCntSelendokFnc);
	//m_wndDrugNameCnt.SetEvent(WE_SETFOCUS, _OnDrugNameCntSetfocusFnc);
	//m_wndDrugNameCnt.SetEvent(WE_KILLFOCUS, _OnDrugNameCntKillfocusFnc);
	m_wndDrugNameCnt.SetEvent(WE_SELCHANGE, _OnDrugNameCntSelectChangeFnc);
	m_wndDrugNameCnt.SetEvent(WE_LOADDATA, _OnDrugNameCntLoadDataFnc);
	//m_wndDrugNameCnt.SetEvent(WE_ADDNEW, _OnDrugNameCntAddNewFnc);
	//m_wndQuantity.SetEvent(WE_CHANGE, _OnQuantityChangeFnc);
	//m_wndQuantity.SetEvent(WE_SETFOCUS, _OnQuantitySetfocusFnc);
	//m_wndQuantity.SetEvent(WE_KILLFOCUS, _OnQuantityKillfocusFnc);
	m_wndQuantity.SetEvent(WE_CHECKVALUE, _OnQuantityCheckValueFnc);
	//m_wndDay Number.SetEvent(WE_CHANGE, _OnDay NumberChangeFnc);
	//m_wndDay Number.SetEvent(WE_SETFOCUS, _OnDay NumberSetfocusFnc);
	//m_wndDay Number.SetEvent(WE_KILLFOCUS, _OnDay NumberKillfocusFnc);
	m_wndDay Number.SetEvent(WE_CHECKVALUE, _OnDay NumberCheckValueFnc);
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndNote.SetEvent(WE_CHANGE, _OnNoteChangeFnc);
	//m_wndNote.SetEvent(WE_SETFOCUS, _OnNoteSetfocusFnc);
	//m_wndNote.SetEvent(WE_KILLFOCUS, _OnNoteKillfocusFnc);
	m_wndNote.SetEvent(WE_CHECKVALUE, _OnNoteCheckValueFnc);
	m_wndPeriod.SetEvent(WE_SELENDOK, _OnPeriodSelendokFnc);
	//m_wndPeriod.SetEvent(WE_SETFOCUS, _OnPeriodSetfocusFnc);
	//m_wndPeriod.SetEvent(WE_KILLFOCUS, _OnPeriodKillfocusFnc);
	m_wndPeriod.SetEvent(WE_SELCHANGE, _OnPeriodSelectChangeFnc);
	m_wndPeriod.SetEvent(WE_LOADDATA, _OnPeriodLoadDataFnc);
	//m_wndPeriod.SetEvent(WE_ADDNEW, _OnPeriodAddNewFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndDiscard.SetEvent(WE_CLICK, _OnDiscardSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_NONE);

}
void CHMSDrugLogsDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndDrugNameCnt.GetDlgCtrlID(), m_szDrugNameCntKey);
	DDX_Text(pDX, m_wndQuantity.GetDlgCtrlID(), m_nQuantity);
	DDX_Text(pDX, m_wndDay Number.GetDlgCtrlID(), m_nDay Number);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_Text(pDX, m_wndNote.GetDlgCtrlID(), m_szNote);
	DDX_TextEx(pDX, m_wndPeriod.GetDlgCtrlID(), m_szPeriodKey);

}
void CHMSDrugLogsDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSDrugLogsDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSDrugLogsDialog::SetDefaultValues(){

	m_szDrugNameCntKey.Empty();
	m_nQuantity=0;
	m_nDay Number=0;
	m_szFromDate.Empty();
	m_szNote.Empty();
	m_szPeriodKey.Empty();

}
int CHMSDrugLogsDialog::SetMode(int nMode){
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
void CHMSDrugLogsDialog::OnListDblClick(){
	
} 
void CHMSDrugLogsDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSDrugLogsDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSDrugLogsDialog::OnListLoadData(){
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
			rs.GetValue(_T("Unit")), 
			rs.GetValue(_T("Quantity")), 
			rs.GetValue(_T("DayNumber")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CHMSDrugLogsDialog::OnDrugNameCntSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDrugLogsDialog::OnDrugNameCntSelendok(){
	 
}
/*void CHMSDrugLogsDialog::OnDrugNameCntSetfocus(){
	
}*/
/*void CHMSDrugLogsDialog::OnDrugNameCntKillfocus(){
	
}*/
long CHMSDrugLogsDialog::OnDrugNameCntLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDrugNameCnt.IsSearchKey() && !m_szDrugNameCntKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szDrugNameCntKey
};
	m_wndDrugNameCnt.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDrugNameCnt.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSDrugLogsDialog::OnDrugNameCntAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSDrugLogsDialog::OnQuantityChange(){
	
} */
/*void CHMSDrugLogsDialog::OnQuantitySetfocus(){
	
} */
/*void CHMSDrugLogsDialog::OnQuantityKillfocus(){
	
} */
int CHMSDrugLogsDialog::OnQuantityCheckValue(){
	return 0;
} 
/*void CHMSDrugLogsDialog::OnDay NumberChange(){
	
} */
/*void CHMSDrugLogsDialog::OnDay NumberSetfocus(){
	
} */
/*void CHMSDrugLogsDialog::OnDay NumberKillfocus(){
	
} */
int CHMSDrugLogsDialog::OnDay NumberCheckValue(){
	return 0;
} 
/*void CHMSDrugLogsDialog::OnFromDateChange(){
	
} */
/*void CHMSDrugLogsDialog::OnFromDateSetfocus(){
	
} */
/*void CHMSDrugLogsDialog::OnFromDateKillfocus(){
	
} */
int CHMSDrugLogsDialog::OnFromDateCheckValue(){
	return 0;
} 
/*void CHMSDrugLogsDialog::OnNoteChange(){
	
} */
/*void CHMSDrugLogsDialog::OnNoteSetfocus(){
	
} */
/*void CHMSDrugLogsDialog::OnNoteKillfocus(){
	
} */
int CHMSDrugLogsDialog::OnNoteCheckValue(){
	return 0;
} 
void CHMSDrugLogsDialog::OnPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDrugLogsDialog::OnPeriodSelendok(){
	 
}
/*void CHMSDrugLogsDialog::OnPeriodSetfocus(){
	
}*/
/*void CHMSDrugLogsDialog::OnPeriodKillfocus(){
	
}*/
long CHMSDrugLogsDialog::OnPeriodLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndPeriod.IsSearchKey() && !m_szPeriodKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szPeriodKey
};
	m_wndPeriod.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPeriod.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSDrugLogsDialog::OnPeriodAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSDrugLogsDialog::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDrugLogsDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDrugLogsDialog::OnDiscardSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDrugLogsDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSDrugLogsDialog::OnAddHMSDrugLogsDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSDrugLogsDialog::OnEditHMSDrugLogsDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSDrugLogsDialog::OnDeleteHMSDrugLogsDialog(){
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
 		OnCancelHMSDrugLogsDialog();
 	}
	return 0;
}
int CHMSDrugLogsDialog::OnSaveHMSDrugLogsDialog(){
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
 		//OnHMSDrugLogsDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSDrugLogsDialog::OnCancelHMSDrugLogsDialog(){
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
int CHMSDrugLogsDialog::OnHMSDrugLogsDialogListLoadData(){
	return 0;
}
