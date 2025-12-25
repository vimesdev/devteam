#include "HMSAdditionalFeeDialog.h"
#include "MainFrm.h"
static long _OnTestListLoadDataFnc(CWnd *pWnd){
	return ((CHMSAdditionalFeeDialog*)pWnd)->OnTestListLoadData();
} 
static void _OnTestListDblClickFnc(CWnd *pWnd){
	((CHMSAdditionalFeeDialog*)pWnd)->OnTestListDblClick();
} 
static void _OnTestListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSAdditionalFeeDialog*)pWnd)->OnTestListSelectChange(nOldItem, nNewItem);
} 
static int _OnTestListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSAdditionalFeeDialog*)pWnd)->OnTestListDeleteItem();
} 
/*static void _OnSearchChangeFnc(CWnd *pWnd){
	((CHMSAdditionalFeeDialog *)pWnd)->OnSearchChange();
} */
/*static void _OnSearchSetfocusFnc(CWnd *pWnd){
	((CHMSAdditionalFeeDialog *)pWnd)->OnSearchSetfocus();} */ 
/*static void _OnSearchKillfocusFnc(CWnd *pWnd){
	((CHMSAdditionalFeeDialog *)pWnd)->OnSearchKillfocus();
} */
static int _OnSearchCheckValueFnc(CWnd *pWnd){
	return ((CHMSAdditionalFeeDialog *)pWnd)->OnSearchCheckValue();
} 
static long _OnSelectListLoadDataFnc(CWnd *pWnd){
	return ((CHMSAdditionalFeeDialog*)pWnd)->OnSelectListLoadData();
} 
static void _OnSelectListDblClickFnc(CWnd *pWnd){
	((CHMSAdditionalFeeDialog*)pWnd)->OnSelectListDblClick();
} 
static void _OnSelectListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSAdditionalFeeDialog*)pWnd)->OnSelectListSelectChange(nOldItem, nNewItem);
} 
static int _OnSelectListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSAdditionalFeeDialog*)pWnd)->OnSelectListDeleteItem();
} 
static void _OnApplySelectFnc(CWnd *pWnd){
	CHMSAdditionalFeeDialog *pVw = (CHMSAdditionalFeeDialog *)pWnd;
	pVw->OnApplySelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSAdditionalFeeDialog *pVw = (CHMSAdditionalFeeDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static void _OnSearchSelectFnc(CWnd *pWnd){
	CHMSAdditionalFeeDialog *pVw = (CHMSAdditionalFeeDialog *)pWnd;
	pVw->OnSearchSelect();
} 
static int _OnAddHMSAdditionalFeeDialogFnc(CWnd *pWnd){
	 return ((CHMSAdditionalFeeDialog*)pWnd)->OnAddHMSAdditionalFeeDialog();
} 
static int _OnEditHMSAdditionalFeeDialogFnc(CWnd *pWnd){
	 return ((CHMSAdditionalFeeDialog*)pWnd)->OnEditHMSAdditionalFeeDialog();
} 
static int _OnDeleteHMSAdditionalFeeDialogFnc(CWnd *pWnd){
	 return ((CHMSAdditionalFeeDialog*)pWnd)->OnDeleteHMSAdditionalFeeDialog();
} 
static int _OnSaveHMSAdditionalFeeDialogFnc(CWnd *pWnd){
	 return ((CHMSAdditionalFeeDialog*)pWnd)->OnSaveHMSAdditionalFeeDialog();
} 
static int _OnCancelHMSAdditionalFeeDialogFnc(CWnd *pWnd){
	 return ((CHMSAdditionalFeeDialog*)pWnd)->OnCancelHMSAdditionalFeeDialog();
} 
CHMSAdditionalFeeDialog::CHMSAdditionalFeeDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CHMSAdditionalFeeDialog::~CHMSAdditionalFeeDialog(){
}
void CHMSAdditionalFeeDialog::OnCreateComponents(){
	m_wndGroupTest.Create(this, _T("Group Fee"), 5, 5, 290, 575);
	m_wndTestList.Create(this,295, 5, 1000, 210); 
	m_wndSearchLabel.Create(this, _T("&Search"), 295, 215, 395, 240);
	m_wndSearch.Create(this,400, 215, 895, 240); 
	m_wndSelectList.Create(this,295, 245, 1000, 575); 
	m_wndApply.Create(this, _T("&Apply"), 795, 580, 895, 605);
	m_wndClose.Create(this, _T("&Cancel"), 900, 580, 1000, 605);
	m_wndSearch.Create(this, _T("Search"), 900, 215, 1000, 240);

}
void CHMSAdditionalFeeDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(35);
	m_wndSearch.SetLimitText(35);
	m_wndSearch.SetCheckValue(true);
	m_wndSearch.SetNotEmpty(false);
	m_wndDeptFind.ModifyStyle(WS_TABSTOP, 0);
	m_wndSearch.ModifyStyle(WS_TABSTOP, 0);
	m_wndSearch.SetNotEmpty(false);
	m_wndDocumentNo.SetLimitText(8);
	m_wndDocumentNo.SetCheckValue(true);
	m_wndPatientName.SetInitCap(TRUE);
//	m_wndPatientName.SetReadOnly(true);
//	m_wndAge.SetReadOnly(true);
//	m_wndAge.SetCheckValue(true);
	//m_wndAge.SetMinMax(0, 100);
	m_wndAge.SetLimitText(4);
//	m_wndSex.SetReadOnly(true);
	//m_wndSex.SetCheckValue(true);
	m_wndSex.LimitText(5);

	m_wndRecordNo.SetLimitText(15);
	m_wndRecordNo.ModifyStyle(0, ES_UPPERCASE);

	m_wndDescription.SetLimitText(254);
	m_wndDescription.SetCheckValue(false);

	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDepartment.InsertColumn(1, _T("Description"), CFMT_TEXT, 250);


	m_wndTestList.InsertColumn(0, _T("Idx"), CFMT_NUMBER, 50);
	m_wndTestList.InsertColumn(1, _T("Name"), CFMT_TEXT, 320);
	m_wndTestList.InsertColumn(2, _T("Unit"), CFMT_TEXT|CFMT_CENTER, 60);
	m_wndTestList.InsertColumn(3, _T("Serv Price"), CFMT_MONEY, 90);
	m_wndTestList.InsertColumn(4, _T("Ins Price"), CFMT_MONEY, 90);
	m_wndTestList.InsertColumn(5, _T("Dept"), CFMT_TEXT, 70);
	m_wndTestList.InsertColumn(6, _T("GroupID"), CFMT_TEXT, 0);
	m_wndTestList.InsertColumn(7, _T("Itemid"), CFMT_TEXT, 0);


	m_wndSelectList.InsertColumn(0, _T("ID"), CFMT_NUMBER, 60);
	m_wndSelectList.InsertColumn(1, _T("Name"), CFMT_TEXT, 300);
	m_wndSelectList.InsertColumn(2, _T("Unit"), CFMT_TEXT|CFMT_CENTER, 70);
	m_wndSelectList.InsertColumn(3, _T("Qty"), CFMT_NUMBER, 70);
	m_wndSelectList.InsertColumn(4, _T("Price"), CFMT_MONEY, 90);
	m_wndSelectList.InsertColumn(5, _T("Amount"), CFMT_MONEY, 90);
	m_wndSelectList.InsertColumn(6, _T("GroupID"), CFMT_TEXT, 0);
	m_wndSelectList.InsertColumn(7, _T("ItemId"), CFMT_TEXT, 0);


//	m_wndSelectList.SetEditLabel(3,GUI_NUMBERCTRL);
	//m_wndSelectList.SetEditLabel(4,GUI_NUMBERCTRL);


	m_wndSex.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndSex.InsertColumn(1, _T("Name"), CFMT_TEXT, 100);


	m_wndDeptFind.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndDeptFind.InsertColumn(1, _T("Description"), CFMT_TEXT, 250);
	//hms_patient: thong tin chinh cua benh nhan
	m_hms_patientTbl.SetTableName(_T("hms_patient"));
	m_hms_patientTbl.AddField(_T("hp_createdby"), dfText, 15); 
	m_hms_patientTbl.AddField(_T("hp_createddate"), dfDateTime); 
	m_hms_patientTbl.AddField(_T("hp_updatedby"), dfText, 15); 
	m_hms_patientTbl.AddField(_T("hp_patientno"), dfLong); 
	m_hms_patientTbl.AddField(_T("hp_patientid"), dfText, 15); 
	m_hms_patientTbl.AddField(_T("hp_surname"), dfText, 15); 
	m_hms_patientTbl.AddField(_T("hp_midname"), dfText, 45); 
	m_hms_patientTbl.AddField(_T("hp_firstname"), dfText, 15); 
	m_hms_patientTbl.AddField(_T("hp_birthdate"), dfDate); 
	m_hms_patientTbl.AddField(_T("hp_sex"), dfText, 1); 

	m_hms_docTbl.SetTableName(_T("hms_doc"));
	m_hms_docTbl.AddField(_T("hd_createdby"), dfText, 15); 
	m_hms_docTbl.AddField(_T("hd_createddate"), dfDateTime); 
	m_hms_docTbl.AddField(_T("hd_updatedby"), dfText, 15); 
	m_hms_docTbl.AddField(_T("hd_updateddate"), dfDateTime); 
	m_hms_docTbl.AddField(_T("hd_patientno"), dfLong); 
	m_hms_docTbl.AddField(_T("hd_docno"), dfLong); 	
	m_hms_docTbl.AddField(_T("hd_admitdate"), dfDateTime); 
	m_hms_docTbl.AddField(_T("hd_admitdept"), dfText, 7); 
	m_hms_docTbl.AddField(_T("hd_object"), dfText, 1); 

	
	// hms_fee_invoice
	m_hms_fee_invoieceTbl.SetTableName(_T("hms_fee_invoice"));
	m_hms_fee_invoieceTbl.AddField(_T("HFE_CREATEDBY"), dfText, 15); 
	m_hms_fee_invoieceTbl.AddField(_T("HFE_CREATEDDATE"), dfDateTime); 
	m_hms_fee_invoieceTbl.AddField(_T("HFE_UPDATEDBY"), dfText, 15);
	m_hms_fee_invoieceTbl.AddField(_T("HFE_INVOICENO"), dfLong); 
	m_hms_fee_invoieceTbl.AddField(_T("HFE_DEPTID"),dfText, 7);
	m_hms_fee_invoieceTbl.AddField(_T("HFE_PATIENTNO"), dfLong); 
	m_hms_fee_invoieceTbl.AddField(_T("HFE_DOCNO"), dfLong); 	
	m_hms_fee_invoieceTbl.AddField(_T("HFE_DATE"), dfDateTime); 
	m_hms_fee_invoieceTbl.AddField(_T("HFE_TYPE"), dfText, 1); 	
	m_hms_fee_invoieceTbl.AddField(_T("HFE_STATUS"), dfText, 1); 
	m_hms_fee_invoieceTbl.AddField(_T("HFE_STAFF"), dfText, 15); 
	m_hms_fee_invoieceTbl.AddField(_T("hfe_class"), dfText, 1); 
	m_hms_fee_invoieceTbl.AddField(_T("HFE_DESC"), dfText, 254); 		
	m_hms_fee_invoieceTbl.AddField(_T("HFE_AMOUNT"), dfDouble); 
	m_hms_fee_invoieceTbl.AddField(_T("HFE_PATPAID"), dfDouble);
	m_hms_fee_invoieceTbl.AddField(_T("HFE_SERIALNO"), dfText, 15); 
	m_hms_fee_invoieceTbl.AddField(_T("HFE_RECEIPTNO"), dfLong);
	m_hms_fee_invoieceTbl.AddField(_T("HFE_OBJECTID"), dfInteger);


// hms_fee
	m_hms_feeTbl.SetTableName(_T("hms_fee"));
	m_hms_feeTbl.AddField(_T("HFE_CREATEDBY"), dfText, 15); 
	m_hms_feeTbl.AddField(_T("HFE_CREATEDDATE"), dfDateTime); 
	m_hms_feeTbl.AddField(_T("HFE_UPDATEDBY"), dfText, 15); 
	m_hms_feeTbl.AddField(_T("HFE_DEPTID"),dfText, 7);
	m_hms_feeTbl.AddField(_T("HFE_PATIENTNO"), dfLong); 
	m_hms_feeTbl.AddField(_T("HFE_DOCNO"), dfLong); 
	m_hms_feeTbl.AddField(_T("HFE_REFIDX"), dfLong); 
	m_hms_feeTbl.AddField(_T("HFE_INSINVOICE"), dfLong); 
	m_hms_feeTbl.AddField(_T("HFE_INVOICENO"), dfLong); 
	m_hms_feeTbl.AddField(_T("HFE_DATE"), dfDateTime); 
	m_hms_feeTbl.AddField(_T("HFE_TYPE"), dfText, 1); 
	m_hms_feeTbl.AddField(_T("HFE_GROUP"), dfText, 7); 
	m_hms_feeTbl.AddField(_T("HFE_STATUS"), dfText, 1); 
	m_hms_feeTbl.AddField(_T("hfe_class"), dfText, 1); 
	m_hms_feeTbl.AddField(_T("HFE_DESC"), dfText, 254); 
	m_hms_feeTbl.AddField(_T("HFE_UNIT"), dfText, 15); 
	m_hms_feeTbl.AddField(_T("HFE_ITEMID"), dfText, 13); 
	m_hms_feeTbl.AddField(_T("HFE_QUANTITY"), dfDouble); 
	m_hms_feeTbl.AddField(_T("HFE_UNITPRICE"), dfDouble); 
	m_hms_feeTbl.AddField(_T("HFE_INSPRICE"), dfDouble); 
	m_hms_feeTbl.AddField(_T("HFE_POLPRICE"), dfDouble); 
	m_hms_feeTbl.AddField(_T("HFE_COST"), dfDouble); 
	m_hms_feeTbl.AddField(_T("HFE_INSPAID"), dfDouble); 
	m_hms_feeTbl.AddField(_T("HFE_DISCOUNT"), dfDouble);
	m_hms_feeTbl.AddField(_T("HFE_DIFFCOST"), dfDouble);
	m_hms_feeTbl.AddField(_T("HFE_DIFFPAID"), dfDouble);
	m_hms_feeTbl.AddField(_T("HFE_PATPAID"), dfDouble); 
	


}

void CHMSAdditionalFeeDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndTestList.SetEvent(WE_SELCHANGE, _OnTestListSelectChangeFnc);
	m_wndTestList.SetEvent(WE_LOADDATA, _OnTestListLoadDataFnc);
	m_wndTestList.SetEvent(WE_DBLCLICK, _OnTestListDblClickFnc);
	m_wndTestList.AddEvent(1, _T("Delete"), _OnTestListDeleteItemFnc, 0, VK_DELETE, 0);
	//m_wndSearch.SetEvent(WE_CHANGE, _OnSearchChangeFnc);
	//m_wndSearch.SetEvent(WE_SETFOCUS, _OnSearchSetfocusFnc);
	//m_wndSearch.SetEvent(WE_KILLFOCUS, _OnSearchKillfocusFnc);
	m_wndSearch.SetEvent(WE_CHECKVALUE, _OnSearchCheckValueFnc);
	m_wndSelectList.SetEvent(WE_SELCHANGE, _OnSelectListSelectChangeFnc);
	m_wndSelectList.SetEvent(WE_LOADDATA, _OnSelectListLoadDataFnc);
	m_wndSelectList.SetEvent(WE_DBLCLICK, _OnSelectListDblClickFnc);
	m_wndSelectList.AddEvent(1, _T("Delete"), _OnSelectListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndSearch.SetEvent(WE_CLICK, _OnSearchSelectFnc);
	SetMode(VM_NONE);

}
void CHMSAdditionalFeeDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndSearch.GetDlgCtrlID(), m_szSearch);

}
void CHMSAdditionalFeeDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Search")] =  m_szSearch;
	}
	else
	{
			
	m_jData[_T("Search")].GetValue(m_szSearch);
	}

}
void CHMSAdditionalFeeDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}

void CHMSAdditionalFeeDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSurName, szMidName, szFirstName, szSQL;
	
	SplitName(m_szPatientName, szSurName, szMidName, szFirstName);	
	m_hms_patientTbl.SetValue(_T("hp_createdby"), pMF->GetCurrentUser());
	m_hms_patientTbl.SetValue(_T("hp_createddate"), pMF->GetSysDateTime());
	m_hms_patientTbl.SetValue(_T("hp_updatedby"), pMF->GetCurrentUser());
	m_hms_patientTbl.SetValue(_T("hp_updateddate"), pMF->GetSysDateTime());
//Lay ma benh nhan moi	
	m_hms_patientTbl.SetValue(_T("hp_patientno"), m_nPatientNo);
	m_hms_patientTbl.SetValue(_T("hp_surname"), szSurName);
	m_hms_patientTbl.SetValue(_T("hp_midname"), szMidName); 
	m_hms_patientTbl.SetValue(_T("hp_firstname"), szFirstName); 
	m_hms_patientTbl.SetValue(_T("hp_birthdate"), m_szBirthDate); 
	m_hms_patientTbl.SetValue(_T("hp_sex"), m_szSexKey); 

	
	
// Bang hms_doc
	m_hms_docTbl.SetValue(_T("hd_createdby"), pMF->GetCurrentUser());
	m_hms_docTbl.SetValue(_T("hd_createddate"), pMF->GetSysDateTime());
	m_hms_docTbl.SetValue(_T("hd_updatedby"), pMF->GetCurrentUser());
	m_hms_docTbl.SetValue(_T("hp_updateddate"), pMF->GetSysDateTime());
	m_hms_docTbl.SetValue(_T("hd_patientno"), m_nPatientNo); 
	m_hms_docTbl.SetValue(_T("hd_docno"), m_nDocumentNo); 
	m_hms_docTbl.SetValue(_T("hd_status"), _T("O")); 	
	m_hms_docTbl.SetValue(_T("hd_admitdept"), m_szDepartmentKey);
	m_hms_docTbl.SetValue(_T("hd_admitdate"), pMF->GetSysDateTime()); 

	//hms_fee

	m_hms_feeTbl.SetValue(_T("HFE_CREATEDBY"), pMF->GetCurrentUser());
	m_hms_feeTbl.SetValue(_T("HFE_CREATEDDATE"), pMF->GetSysDateTime());
	m_hms_feeTbl.SetValue(_T("HFE_DEPTID"),m_szDepartmentKey);
	m_hms_feeTbl.SetValue(_T("HFE_PATIENTNO"), m_nPatientNo); 
	m_hms_feeTbl.SetValue(_T("HFE_DOCNO"), m_nDocumentNo);	
	m_hms_feeTbl.SetValue(_T("HFE_DATE"), pMF->GetSysDateTime()); 
	m_hms_feeTbl.SetValue(_T("HFE_STATUS"), _T("O"));
	m_hms_feeTbl.SetValue(_T("HFE_TYPE"), _T("E")); 
	m_hms_feeTbl.SetValue(_T("hfe_class"), _T("X")); 

}

void CHMSAdditionalFeeDialog::SetDefaultValues(){

	//m_szDepartmentKey.Empty();
//	if(m_bAddNew) m_nDocumentNo=0;
	m_nDocumentNo = 0;
	m_szRecordNo.Empty();
	m_szPatientName.Empty();
	m_nAge = 0;
	m_szSexKey.Empty();
	m_szDeptFindKey.Empty();
	m_szSearch.Empty();
	m_szDescription.Empty();


}

int CHMSAdditionalFeeDialog::SetMode(int nMode){
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
 			EnableButtons(TRUE, 0, 1, 2, 3, 4, 5, -1); 
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

void CHMSAdditionalFeeDialog::OnTestListDblClick(){

	int nSel = m_wndTestList.GetCurSel();
	if(nSel < 0)
		return;
	CString szID, szOldID, tmpStr;
	bool bExisting=false;
	double	nPrice=0;
	
	nPrice = ToDouble(m_wndTestList.GetItemText(nSel, 3));
	
	if(nPrice <= 0)
	{
		CGuiInputDataDialog dlg(this, true);
		dlg.m_wndValueLabel.SetWindowText(_T("Price"));
		if(dlg.DoModal()== IDOK){
			tmpStr.Format(_T("%.0f"), dlg.m_nNumberValue);
			nPrice = dlg.m_nNumberValue;
			m_wndTestList.SetItemText(nSel, 3, tmpStr);			
		}
		else
			return;
	}
	
	szID = m_wndTestList.GetItemText(nSel, 7);
	bExisting = false;
	for (int j = 0; j < m_arItems.GetCount(); j++){
		FEEITEMDATA item = m_arItems[j];
		szOldID =item.szFeeID;
		if(szOldID == szID){
			bExisting = true;
			break;
		}
	}
	if(!bExisting)
	{
		FEEITEMDATA item;
		item.szFeeID = szID;
		item.nQty = 1;
		item.nPrice = nPrice;
		m_arItems.Add(item);
		m_wndTestList.DeleteItem(nSel);
		OnSelectListLoadData();
	}
	
}
 
void CHMSAdditionalFeeDialog::OnTestListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();	
}
 
int CHMSAdditionalFeeDialog::OnTestListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
}
 
long CHMSAdditionalFeeDialog::OnTestListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, tmpStr;
	CString szExisting;
	szWhere.Empty();
	
	UpdateData(true);
	if(!m_szDeptFindKey.IsEmpty()){
		szWhere.Format(_T(" AND hfl_deptid ='%s' "), m_szDeptFindKey);
	}

	if(!m_szSearch.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND lower(hfl_name) like(chr(37)||lower('%s')||chr(37)) "), m_szSearch);
	}

	
	//szExisting=_T("'X'");
	//for (int i =0; i < m_arItems.GetCount(); i++){
	//	szExisting.AppendFormat(_T(",'%s'"), m_arItems[i]);
	//}
	
	/*if(m_szGroup != _T("A0000"))
	{
		szWhere.AppendFormat(_T(" AND (hfl_servprice+hfl_insprice+hfl_polprice) > 0 "));
	}*/
	m_wndTestList.DeleteAllItems();
	m_wndTestList.BeginLoad();
	
	szSQL.Format(_T("SELECT hfl_feeid, hfl_unit,hfl_groupid, hfl_name, hfl_deptid, hfl_servprice, hfl_insprice ") \
		_T("FROM hms_fee_list ") \
		_T("WHERE hfl_groupid='%s' ") \
		_T("AND hfl_active='Y' and hfl_subgroup<>'Y' ") \
		_T("AND (length(hfl_subitem) <= 1 or hfl_subitem is null) ") \
		_T(" %s ") \
		_T("ORDER BY hfl_line, hfl_name"), m_szGroup,  szWhere);
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
	CString szIdx;
	int nIdx=1;
	while(!rs.IsEOF()){

		rs.GetValue(_T("hfl_servprice"), tmpStr);
		szIdx.Format(_T("%d"), nIdx++);

		m_wndTestList.AddItems(
			szIdx,
			rs.GetValue(_T("hfl_name")),
			rs.GetValue(_T("hfl_unit")),
			tmpStr,
			rs.GetValue(_T("hfl_insprice")), 
			rs.GetValue(_T("hfl_deptid")),
			rs.GetValue(_T("hfl_groupid")),
			rs.GetValue(_T("hfl_feeid")),			
			NULL);
		rs.MoveNext();
	}

	m_wndTestList.EndLoad();
	
	return 1;
}

/*void CHMSAdditionalFeeDialog::OnSearchChange(){
	
} */
/*void CHMSAdditionalFeeDialog::OnSearchSetfocus(){
	
} */
/*void CHMSAdditionalFeeDialog::OnSearchKillfocus(){
	
} */
int CHMSAdditionalFeeDialog::OnSearchCheckValue(){
	//OnTestListLoadData();
	return 1;
}
 
void CHMSAdditionalFeeDialog::OnSelectListDblClick(){

	int nSel = m_wndSelectList.GetCurSel();
	if(nSel < 0) return;
	CString tmpStr, szLabel, szItemID;
	CGuiInputDataDialog dlg(this, true);
	

	dlg.m_szValueName = _T("Quantity");
	dlg.m_nNumberValue = str2double(m_wndSelectList.GetItemText(nSel, 3));
	if(dlg.DoModal()== IDOK){
		tmpStr.Format(_T("%.0f"), dlg.m_nNumberValue);
		szItemID = m_wndSelectList.GetItemText(nSel, 6);
		m_wndSelectList.SetItemText(nSel, 3, tmpStr);	
		for (int i =0; i < m_arItems.GetCount(); i++){
			FEEITEMDATA item = m_arItems[i];
			if(item.szFeeID == szItemID)
			{
				item.nQty = dlg.m_nNumberValue;
				m_arItems.SetAt(i, item);
				break;
			}
		}

	}
	OnSelectListLoadData();
	m_wndSelectList.SetCurSel(nSel);
}
 
void CHMSAdditionalFeeDialog::OnSelectListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
 
int CHMSAdditionalFeeDialog::OnSelectListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szID;
	int nItem = m_wndSelectList.GetCurSel();
	
	if(nItem <0 ) return -1;
	
	szID = m_wndSelectList.GetItemText(nItem, 6);
	int ret = ShowMessageBox(_T("You want to delete fee items"), MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2);	
	if(ret == IDNO)
		return -1;	
	
	for(int i=0; i< m_arItems.GetCount(); i++){
		FEEITEMDATA item = m_arItems[i];
		if(szID == item.szFeeID){			
			m_arItems.RemoveAt(i);
			break;
		}
	}	
	OnSelectListLoadData();
	m_wndSelectList.SetCurSel(nItem);
	
	
	return 0;
}
 
long CHMSAdditionalFeeDialog::OnSelectListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CRecord rs2(&pMF->m_db);
	CString szSQL, tmpStr, szIdx, szItemID;
	CString szCode, szExisting, szGroup, szOldGroup=_T("XX"), szTmp;
	m_nGroupCost =0;
	CString szAmount;
	double nPrice = 0;
	double long nTotalAmount =0;
	int nArr[100], nArrIdx=0;
	for(int i=0; i<=100; i++)
	{
		nArr[i]=0;
	}

	if(m_arItems.GetCount() <= 0)
		return -1;

	szExisting=_T("'X'");

	for (int i = 0; i < m_arItems.GetCount(); i++)
	{
		szExisting.AppendFormat(_T(",'%s'"), m_arItems[i]);
	}

	szSQL.Format(_T("SELECT hfl_feeid, hfl_name, hfl_unit, hfl_groupid, hfl_subitem, hfl_servprice ") \
		_T("FROM hms_fee_list WHERE hfl_active='Y' and hfl_subgroup<>'Y' and (length(hfl_subitem) <= 1 or hfl_subitem is null)AND hfl_feeid in(%s) ORDER BY hfl_groupid, hfl_line, hfl_name"), szExisting);

	rs.ExecSQL(szSQL);
//_fmsg(_T("%s"), szSQL);
	m_wndSelectList.BeginLoad();
	int nIdx=1, nItem=0;

	while(!rs.IsEOF()){

		szGroup = rs.GetValue(_T("hfl_groupid"));		
		if(szGroup != szOldGroup && !szGroup.IsEmpty())
		{
		
			szSQL.Format(_T("SELECT * FROM hms_fee_group WHERE hfg_id='%s' "), szGroup);
			rs2.ExecSQL(szSQL);
			if(!rs2.IsEOF())
				rs2.GetValue(_T("hfg_name"), tmpStr);
			else
				tmpStr.Empty();
			
			if(m_nGroupCost > 0){
				szTmp.Format(_T("%.2f"), m_nGroupCost);
				m_wndSelectList.SetItemText(nArr[nArrIdx-1], 5, szTmp);
				nTotalAmount += m_nGroupCost;
				m_nGroupCost =0;	

			}

//<<<<<<< .mine
//			szTmp.Empty();
//
//			nItem = m_wndSelectList.AddItems(_T(""), tmpStr, _T(""),	_T(""), szTmp, szGroup,	NULL);
			nItem = m_wndSelectList.AddItems(_T(""), tmpStr,	_T(""),	_T(""), _T(""),szGroup,	NULL);

			nArr[nArrIdx]=nItem;			
	
			m_wndSelectList.SetItemBkColor(nItem, RGB(240, 240, 240));
			m_wndSelectList.SetItemTextColor(nItem, RGB(0, 0, 255));
			nArrIdx++;		
			nIdx =1;
			szOldGroup = szGroup;			
		}
		
		rs.GetValue(_T("hfl_feeid"), szItemID);		
		rs.GetValue(_T("hfl_servprice"), tmpStr);
		FEEITEMDATA item;
		for(int i =0; i< m_arItems.GetCount(); i++)
		{				
			item = m_arItems[i];
			if(item.szFeeID == szItemID)
			{
				break;
			}
		}
		double amount = item.nQty*item.nPrice;
		m_nGroupCost += amount;
		szAmount = ToString(amount);
		
		szIdx.Format(_T("%d"), nIdx++);
		m_wndSelectList.AddItems(
			szIdx,
			rs.GetValue(_T("hfl_name")),
			rs.GetValue(_T("hfl_unit")),
			ToString(item.nQty),
			ToString(item.nPrice),
			szAmount,
			rs.GetValue(_T("hfl_feeid")),
			rs.GetValue(_T("hfl_groupid")),
			rs.GetValue(_T("hfl_subitem")),
			NULL);
		rs.MoveNext();
	}

	if(m_nGroupCost > 0)
	{
		tmpStr.Format(_T("%.2f"), m_nGroupCost);
		m_wndSelectList.SetItemText(nItem, 5, tmpStr);
		nTotalAmount += m_nGroupCost;
		m_nGroupCost =0;
	}
	
	if(nTotalAmount > 0){		
		tmpStr.Format(_T("%.2f"), nTotalAmount);
		CString szLabel;
		TranslateString(_T("Total Amount"), szLabel);
		nItem = m_wndSelectList.AddItems(_T(""), szLabel,	_T(""),	_T(""), _T(""), tmpStr,szGroup,	NULL);
		m_wndSelectList.SetItemBkColor(nItem, RGB(255, 128, 0), FALSE);
		m_wndSelectList.SetItemTextColor(nItem,COLOR_WHITE, FALSE);

	}
	m_wndSelectList.AddItems(_T(""), _T(""),	_T(""),	_T(""), _T(""),szGroup,	NULL);
	m_wndSelectList.EndLoad();

	m_wndSelectList.SetCurSel(m_wndSelectList.GetItemCount()-1);
	return 0;
}

void CHMSAdditionalFeeDialog::OnApplySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szStatus, szDoctor;
	CString	szSQL;
	long	nOrderID=0;
	int ret=0;
	bool bConfirm = true;
	if(m_wndSelectList.GetItemCount() <= 0)
	{
		ShowMessageBox(_T("No item selected."));
		return;
	}
	if(m_bEnterPatient){
		m_wndPatientName.SetCheckValue(true);
	}
	else
	{
		m_wndPatientName.SetCheckValue(false);
	}
	if(!IsValidateData())
		return;	
	
	if(m_bEnterPatient)
	{
		pMF->BeginTransaction();
	
		szSQL.Format(_T("hms_getnextpatientno()"));
		m_nPatientNo = str2long(pMF->ExecDML(szSQL));

		szSQL.Format(_T("hms_getnextdocno()"));
		m_nDocumentNo = str2long(pMF->ExecDML(szSQL));
		
		m_hms_patientTbl.SetValue(_T("hp_patientno"), m_nPatientNo);
		m_hms_docTbl.SetValue(_T("hd_patientno"), m_nPatientNo); 
		m_hms_docTbl.SetValue(_T("hd_docno"), m_nDocumentNo); 
		m_hms_docTbl.SetValue(_T("hd_object"), _T("7")); 

		szSQL = m_hms_patientTbl.GetInsertSQL();
		
		ret = pMF->ExecSQL(szSQL);
		if(ret <= 0) {
			pMF->Rollback();
			ShowMessageBox(_T("Can not add new patient information"), MB_OK);
			return ;
		}
	

		szSQL = m_hms_docTbl.GetInsertSQL(); 

		ret = pMF->ExecSQL(szSQL); 
		if(ret <= 0) {
			pMF->Rollback();
			ShowMessageBox(_T("Can not add new document information"), MB_OK);
			return;
		}
		pMF->Commit();

	}
	
	double nQty=0, nAmount=0,nTotalAmount=0, nPrice;
	CString tmpStr;
	long nInvoiceNo;
	long nReceiptNo;
	pMF->BeginTransaction();
	

	szSQL.Format(_T(" nextseq('%s')"),_T("hms_fee_invoice_invoiceno_asq"));
	nInvoiceNo = str2long(pMF->ExecDML(szSQL));	
	

	pMF->GetSerialInformation();
	CString szSerialNo = pMF->m_szSerialNo;
	CString szReceiptDate = pMF->m_szRecvDate;
	nReceiptNo = pMF->m_nReceiptNo;



	m_hms_fee_invoieceTbl.SetValue(_T("HFE_INVOICENO"), nInvoiceNo);	 
	m_hms_fee_invoieceTbl.SetValue(_T("HFE_PATIENTNO"), m_nPatientNo); 
	m_hms_fee_invoieceTbl.SetValue(_T("HFE_DOCNO"), m_nDocumentNo);			
	m_hms_fee_invoieceTbl.SetValue(_T("HFE_TYPE"), _T("X"));
	m_hms_fee_invoieceTbl.SetValue(_T("HFE_STATUS"), _T("P"));
	
	if(m_bEnterPatient)
		m_hms_fee_invoieceTbl.SetValue(_T("HFE_OBJECTID"), _T("Z"));


	m_hms_fee_invoieceTbl.SetValue(_T("HFE_DESC"),	m_szDescription); 	
	m_hms_fee_invoieceTbl.SetValue(_T("HFE_AMOUNT"), nTotalAmount);
	m_hms_fee_invoieceTbl.SetValue(_T("HFE_PATPAID"), nTotalAmount);
	m_hms_fee_invoieceTbl.SetValue(_T("hfe_class"), _T("X"));
	m_hms_fee_invoieceTbl.SetValue(_T("HFE_DEPTID"), m_szDepartmentKey);
	m_hms_fee_invoieceTbl.SetValue(_T("HFE_STAFF"), pMF->GetCurrentUser());
	m_hms_fee_invoieceTbl.SetValue(_T("HFE_CREATEDBY"), pMF->GetCurrentUser());
	m_hms_fee_invoieceTbl.SetValue(_T("HFE_CREATEDDATE"), pMF->GetSysDateTime());
	m_hms_fee_invoieceTbl.SetValue(_T("HFE_UPDATEDBY"), pMF->GetCurrentUser());
	m_hms_fee_invoieceTbl.SetValue(_T("HFE_DATE"), szReceiptDate);
	m_hms_fee_invoieceTbl.SetValue(_T("HFE_SERIALNO"), szSerialNo);
	m_hms_fee_invoieceTbl.SetValue(_T("HFE_RECEIPTNO"), nReceiptNo);
	m_hms_fee_invoieceTbl.SetValue(_T("HFE_OBJECTID"), 7);
	szSQL = m_hms_fee_invoieceTbl.GetInsertSQL();
	
	
	ret = pMF->ExecSQL(szSQL);
	
	for(int i=0; i< m_wndSelectList.GetItemCount(); i++){
		if(!m_wndSelectList.GetItemText(i, 0).IsEmpty() && !m_wndSelectList.GetItemText(i, 4).IsEmpty()){
			
			nQty = ToFloat(m_wndSelectList.GetItemText(i, 3));
			nPrice = ToFloat(m_wndSelectList.GetItemText(i, 4));
			nAmount = nQty*nPrice;
			nTotalAmount += nAmount;
			m_hms_feeTbl.SetValue(_T("HFE_DEPTID"), m_szDepartmentKey); 			
			m_hms_feeTbl.SetValue(_T("HFE_PATIENTNO"), m_nPatientNo); 
			m_hms_feeTbl.SetValue(_T("HFE_DOCNO"), m_nDocumentNo);			
			m_hms_feeTbl.SetValue(_T("HFE_INVOICENO"), nInvoiceNo);			
			m_hms_feeTbl.SetValue(_T("HFE_TYPE"), _T("X")); 
			m_hms_feeTbl.SetValue(_T("HFE_QUANTITY"), nQty); 
			m_hms_feeTbl.SetValue(_T("HFE_UNITPRICE"), nPrice); 
			m_hms_feeTbl.SetValue(_T("HFE_DESC"), m_wndSelectList.GetItemText(i, 1)); 
			m_hms_feeTbl.SetValue(_T("HFE_ITEMID"), m_wndSelectList.GetItemText(i, 6));
			m_hms_feeTbl.SetValue(_T("HFE_GROUP"), m_wndSelectList.GetItemText(i, 7)); 
			m_hms_feeTbl.SetValue(_T("HFE_COST"), nAmount);
			m_hms_feeTbl.SetValue(_T("HFE_PATPAID"), nAmount);			
			m_hms_feeTbl.SetValue(_T("HFE_STATUS"), _T("P")); 
			m_hms_feeTbl.SetValue(_T("HFE_CREATEDBY"), pMF->GetCurrentUser()); 
			m_hms_feeTbl.SetValue(_T("HFE_UPDATEDBY"), pMF->GetCurrentUser()); 
			m_hms_feeTbl.SetValue(_T("HFE_DATE"), pMF->m_szRecvDate); 

			szSQL = m_hms_feeTbl.GetInsertSQL(); 			
			ret = pMF->ExecSQL(szSQL); 
			if(ret <= 0) {
				pMF->Rollback();
				ShowMessageBox(_T("Can not add new other fee"), MB_OK);
				return;
			}
		}
	
	}

	szSQL.Format(_T("UPDATE hms_fee_invoice SET hfe_amount=%.2f, hfe_patpaid=%.2f, hfe_payment=%.2f WHERE hfe_invoiceno=%ld"),
		nTotalAmount, nTotalAmount, nTotalAmount, nInvoiceNo);
_debug(_T("%s"), szSQL);
	pMF->ExecSQL(szSQL);

	pMF->Commit();
	m_nInvoiceNo = nInvoiceNo;
	
	m_wndSelectList.DeleteAllItems();
	m_arItems.RemoveAll();
	UpdateData(FALSE);
	CGuiDialog::OnOK();
}
 
void CHMSAdditionalFeeDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
	
}
 
void CHMSAdditionalFeeDialog::OnSearchSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSAdditionalFeeDialog::OnAddHMSAdditionalFeeDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}

int CHMSAdditionalFeeDialog::OnEditHMSAdditionalFeeDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}

int CHMSAdditionalFeeDialog::OnDeleteHMSAdditionalFeeDialog(){
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
 		OnCloseHMSAdditionalFeeDialog(); 
 	}
	return 0;
}

int CHMSAdditionalFeeDialog::OnSaveHMSAdditionalFeeDialog(){
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
 		//OnHMSAdditionalFeeDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}

int CHMSAdditionalFeeDialog::OnCancelHMSAdditionalFeeDialog(){
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
int CHMSAdditionalFeeDialog::OnHMSAdditionalFeeDialogListLoadData(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szCode;
	TCHAR chOld=_T(' '), ch;
	//1: Nhom can lam sang
	szSQL.Format(_T("SELECT * FROM hms_fee_group WHERE substr(hfg_id, 1, 2) IN('B1','B2','B3') AND hfg_active='Y' ORDER BY hfg_id "));
	
	rs.ExecSQL(szSQL);
	rs.ExecSQL(szSQL);
	m_arGroup.RemoveAll();
	while(!rs.IsEOF()){
		rs.GetValue(_T("hfg_id"), szCode);
		ch = szCode[2];
		if(ch == _T('0'))
		{
			rs.GetValue(_T("hfg_name"), tmpStr);
			m_wndParaclinicalList.AddCaption(tmpStr);
			m_arGroup.Add(CString(_T("")));
		}
		else
		{
			m_wndParaclinicalList.Add(rs.GetValue(_T("hfg_name")), _T(""), NULL);
			m_arGroup.Add(szCode);
		}
		rs.MoveNext();
	};
	m_wndParaclinicalList.ModifyStyle(0, WS_BORDER|WS_VSCROLL);


	//
	CString szNameGroup;
	m_wndParaclinicalList.AddCaption(_T("Other Fee"));
	m_arGroup.Add(CString(_T("")));

	szSQL.Format(_T("SELECT hfg_name FROM hms_fee_group WHERE hfg_id='B4000' AND hfg_active='Y' ORDER BY hfg_id "));	
	rs.ExecSQL(szSQL);
	szNameGroup = rs.GetStringValue();
	m_wndParaclinicalList.Add( szNameGroup, _T(""));	
	szCode =_T("B4000");
	m_arGroup.Add(szCode);
	
	szSQL.Format(_T("SELECT hfg_name FROM hms_fee_group WHERE hfg_id='B5000' AND hfg_active='Y' ORDER BY hfg_id "));	
	rs.ExecSQL(szSQL);
	szNameGroup = rs.GetStringValue();	
	m_wndParaclinicalList.Add(szNameGroup, _T(""));
	szCode =_T("B5000");
	m_arGroup.Add(szCode);	
	
	szSQL.Format(_T("SELECT hfg_name FROM hms_fee_group WHERE hfg_id='F0000' AND hfg_active='Y' ORDER BY hfg_id "));	
	rs.ExecSQL(szSQL);
	szNameGroup = rs.GetStringValue();	
	m_wndParaclinicalList.Add(szNameGroup, _T(""));	
	szCode =_T("F0000");
	m_arGroup.Add(szCode);
	

	//m_wndParaclinicalList.SetCurSel(m_wndParaclinicalList.GetCount() -1);
	OnParaclinicalListSelectChange(0, m_wndParaclinicalList.GetCount() -1);
	m_wndTestList.SetCurSel(0);
	//m_wndParaclinicalList.ModifyStyle(0, WS_BORDER|WS_VSCROLL);

	return 0;
}

