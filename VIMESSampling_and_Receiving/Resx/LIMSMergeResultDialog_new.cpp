#include "LIMSMergeResultDialog.h"
#include "MainFrm.h"
static void _OnInstrumentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CLIMSMergeResultDialog* )pWnd)->OnInstrumentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnInstrumentSelendokFnc(CWnd *pWnd){
	((CLIMSMergeResultDialog *)pWnd)->OnInstrumentSelendok();
}
/*static void _OnInstrumentSetfocusFnc(CWnd *pWnd){
	((CLIMSMergeResultDialog *)pWnd)->OnInstrumentKillfocus();
}*/
/*static void _OnInstrumentKillfocusFnc(CWnd *pWnd){
	((CLIMSMergeResultDialog *)pWnd)->OnInstrumentKillfocus();
}*/
static long _OnInstrumentLoadDataFnc(CWnd *pWnd){
	return ((CLIMSMergeResultDialog *)pWnd)->OnInstrumentLoadData();
}
/*static void _OnInstrumentAddNewFnc(CWnd *pWnd){
	((CLIMSMergeResultDialog *)pWnd)->OnInstrumentAddNew();
}*/
/*static void _OnSIDChangeFnc(CWnd *pWnd){
	((CLIMSMergeResultDialog *)pWnd)->OnSIDChange();
} */
/*static void _OnSIDSetfocusFnc(CWnd *pWnd){
	((CLIMSMergeResultDialog *)pWnd)->OnSIDSetfocus();} */ 
/*static void _OnSIDKillfocusFnc(CWnd *pWnd){
	((CLIMSMergeResultDialog *)pWnd)->OnSIDKillfocus();
} */
static int _OnSIDCheckValueFnc(CWnd *pWnd){
	return ((CLIMSMergeResultDialog *)pWnd)->OnSIDCheckValue();
} 
/*static void _OnPatientNameChangeFnc(CWnd *pWnd){
	((CLIMSMergeResultDialog *)pWnd)->OnPatientNameChange();
} */
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CLIMSMergeResultDialog *)pWnd)->OnPatientNameSetfocus();} */ 
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((CLIMSMergeResultDialog *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((CLIMSMergeResultDialog *)pWnd)->OnPatientNameCheckValue();
} 
static void _OnSearchSelectFnc(CWnd *pWnd){
	CLIMSMergeResultDialog *pVw = (CLIMSMergeResultDialog *)pWnd;
	pVw->OnSearchSelect();
} 
static long _OnPatientListLoadDataFnc(CWnd *pWnd){
	return ((CLIMSMergeResultDialog*)pWnd)->OnPatientListLoadData();
} 
static void _OnPatientListDblClickFnc(CWnd *pWnd){
	((CLIMSMergeResultDialog*)pWnd)->OnPatientListDblClick();
} 
static void _OnPatientListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CLIMSMergeResultDialog*)pWnd)->OnPatientListSelectChange(nOldItem, nNewItem);
} 
static int _OnPatientListDeleteItemFnc(CWnd *pWnd){
	 return ((CLIMSMergeResultDialog*)pWnd)->OnPatientListDeleteItem();
} 
static long _OnResListLoadDataFnc(CWnd *pWnd){
	return ((CLIMSMergeResultDialog*)pWnd)->OnResListLoadData();
} 
static void _OnResListDblClickFnc(CWnd *pWnd){
	((CLIMSMergeResultDialog*)pWnd)->OnResListDblClick();
} 
static void _OnResListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CLIMSMergeResultDialog*)pWnd)->OnResListSelectChange(nOldItem, nNewItem);
} 
static int _OnResListDeleteItemFnc(CWnd *pWnd){
	 return ((CLIMSMergeResultDialog*)pWnd)->OnResListDeleteItem();
} 
static void _OnApplySelectFnc(CWnd *pWnd){
	CLIMSMergeResultDialog *pVw = (CLIMSMergeResultDialog *)pWnd;
	pVw->OnApplySelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CLIMSMergeResultDialog *pVw = (CLIMSMergeResultDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddLIMSMergeResultDialogFnc(CWnd *pWnd){
	 return ((CLIMSMergeResultDialog*)pWnd)->OnAddLIMSMergeResultDialog();
} 
static int _OnEditLIMSMergeResultDialogFnc(CWnd *pWnd){
	 return ((CLIMSMergeResultDialog*)pWnd)->OnEditLIMSMergeResultDialog();
} 
static int _OnDeleteLIMSMergeResultDialogFnc(CWnd *pWnd){
	 return ((CLIMSMergeResultDialog*)pWnd)->OnDeleteLIMSMergeResultDialog();
} 
static int _OnSaveLIMSMergeResultDialogFnc(CWnd *pWnd){
	 return ((CLIMSMergeResultDialog*)pWnd)->OnSaveLIMSMergeResultDialog();
} 
static int _OnCancelLIMSMergeResultDialogFnc(CWnd *pWnd){
	 return ((CLIMSMergeResultDialog*)pWnd)->OnCancelLIMSMergeResultDialog();
} 
CLIMSMergeResultDialog::CLIMSMergeResultDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1019;
	m_nDlgHeight = 728;
	SetDefaultValues();
}
CLIMSMergeResultDialog::~CLIMSMergeResultDialog(){
}
void CLIMSMergeResultDialog::OnCreateComponents(){
	m_wndInstrumentLabel.Create(this, _T("Instrument"), 10, 30, 130, 55);
	m_wndInstrument.Create(this,135, 30, 335, 55); 
	m_wndSIDLabel.Create(this, _T("SID"), 340, 30, 420, 55);
	m_wndSID.Create(this,425, 30, 545, 55); 
	m_wndOrderInformation.Create(this, _T("Order Information"), 5, 5, 960, 650);
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 550, 30, 670, 55);
	m_wndPatientName.Create(this,675, 30, 870, 55); 
	m_wndSearch.Create(this, _T("Search"), 875, 30, 955, 55);
	m_wndPatientList.Create(this,10, 60, 955, 240); 
	m_wndResList.Create(this,10, 245, 955, 645); 
	m_wndApply.Create(this, _T("&Apply"), 794, 655, 874, 680);
	m_wndClose.Create(this, _T("&Close"), 879, 655, 959, 680);

}
void CLIMSMergeResultDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndSID.SetLimitText(8);
	//m_wndSID.SetCheckValue(true);


	m_wndPatientList.InsertColumn(0, _T("Index"), CFMT_NUMBER, 50);
	m_wndPatientList.InsertColumn(1, _T("SID"), CFMT_NUMBER, 80);
	m_wndPatientList.InsertColumn(2, _T("PID"), CFMT_NUMBER, 80);
	m_wndPatientList.InsertColumn(3, _T("Patient Name"), CFMT_TEXT, 220);
	m_wndPatientList.InsertColumn(4, _T("Age"), CFMT_TEXT, 50);
	m_wndPatientList.InsertColumn(5, _T("Perform Date"), CFMT_DATETIME, 120);
	m_wndPatientList.InsertColumn(6, _T("Oid"), CFMT_NUMBER, 0);
	m_wndPatientList.InsertColumn(7, _T("Instid"), CFMT_NUMBER, 0);


	m_wndResList.InsertColumn(0, _T("Index"), CFMT_NUMBER, 30);
	m_wndResList.InsertColumn(1, _T("Test Name"), CFMT_TEXT, 150);
	m_wndResList.InsertColumn(2, _T("Unit"), CFMT_TEXT, 70);
	m_wndResList.InsertColumn(3, _T("Result"), CFMT_TEXT, 80);
	m_wndResList.InsertColumn(4, _T("Male Index"), CFMT_TEXT, 90);
	m_wndResList.InsertColumn(5, _T("Female Index"), CFMT_TEXT, 90);
	m_wndResList.InsertColumn(6, _T("Comment"), CFMT_TEXT, 90);
	m_wndResList.InsertColumn(7, _T("Testid"), CFMT_TEXT, 0);
	m_wndResList.InsertColumn(8, _T("Code"), CFMT_TEXT, 0);

}

void CLIMSMergeResultDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndInstrument.SetEvent(WE_SELENDOK, _OnInstrumentSelendokFnc);
	//m_wndInstrument.SetEvent(WE_SETFOCUS, _OnInstrumentSetfocusFnc);
	//m_wndInstrument.SetEvent(WE_KILLFOCUS, _OnInstrumentKillfocusFnc);
	m_wndInstrument.SetEvent(WE_SELCHANGE, _OnInstrumentSelectChangeFnc);
	m_wndInstrument.SetEvent(WE_LOADDATA, _OnInstrumentLoadDataFnc);
	//m_wndInstrument.SetEvent(WE_ADDNEW, _OnInstrumentAddNewFnc);
	//m_wndSID.SetEvent(WE_CHANGE, _OnSIDChangeFnc);
	//m_wndSID.SetEvent(WE_SETFOCUS, _OnSIDSetfocusFnc);
	//m_wndSID.SetEvent(WE_KILLFOCUS, _OnSIDKillfocusFnc);
	m_wndSID.SetEvent(WE_CHECKVALUE, _OnSIDCheckValueFnc);
	//m_wndPatientName.SetEvent(WE_CHANGE, _OnPatientNameChangeFnc);
	//m_wndPatientName.SetEvent(WE_SETFOCUS, _OnPatientNameSetfocusFnc);
	//m_wndPatientName.SetEvent(WE_KILLFOCUS, _OnPatientNameKillfocusFnc);
	m_wndPatientName.SetEvent(WE_CHECKVALUE, _OnPatientNameCheckValueFnc);
	m_wndSearch.SetEvent(WE_CLICK, _OnSearchSelectFnc);
	m_wndPatientList.SetEvent(WE_SELCHANGE, _OnPatientListSelectChangeFnc);
	m_wndPatientList.SetEvent(WE_LOADDATA, _OnPatientListLoadDataFnc);
	m_wndPatientList.SetEvent(WE_DBLCLICK, _OnPatientListDblClickFnc);
	m_wndPatientList.AddEvent(1, _T("Delete"), _OnPatientListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndResList.SetEvent(WE_SELCHANGE, _OnResListSelectChangeFnc);
	m_wndResList.SetEvent(WE_LOADDATA, _OnResListLoadDataFnc);
	m_wndResList.SetEvent(WE_DBLCLICK, _OnResListDblClickFnc);
	m_wndResList.AddEvent(1, _T("Delete"), _OnResListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_NONE);

}
void CLIMSMergeResultDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndInstrument.GetDlgCtrlID(), m_szInstrumentKey);
	DDX_Text(pDX, m_wndSID.GetDlgCtrlID(), m_szSID);
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);

}
void CLIMSMergeResultDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}

void CLIMSMergeResultDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}

void CLIMSMergeResultDialog::SetDefaultValues(){


}

int CLIMSMergeResultDialog::SetMode(int nMode){
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
		m_wndSID.EnableWindow(true);
 		UpdateData(FALSE); 
 		return nOldMode; 
}

void CLIMSMergeResultDialog::OnInstrumentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CLIMSMergeResultDialog::OnInstrumentSelendok(){
	 
}
/*void CLIMSMergeResultDialog::OnInstrumentSetfocus(){
	
}*/
/*void CLIMSMergeResultDialog::OnInstrumentKillfocus(){
	
}*/
long CLIMSMergeResultDialog::OnInstrumentLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndInstrument.IsSearchKey() && !m_szInstrumentKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szInstrumentKey
};
	m_wndInstrument.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndInstrument.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CLIMSMergeResultDialog::OnInstrumentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CLIMSMergeResultDialog::OnSIDChange(){
	
} */
/*void CLIMSMergeResultDialog::OnSIDSetfocus(){
	
} */
/*void CLIMSMergeResultDialog::OnSIDKillfocus(){
	
} */
int CLIMSMergeResultDialog::OnSIDCheckValue(){
	OnPatientListLoadData();
	return 0;
}
 
/*void CLIMSMergeResultDialog::OnPatientNameChange(){
	
} */
/*void CLIMSMergeResultDialog::OnPatientNameSetfocus(){
	
} */
/*void CLIMSMergeResultDialog::OnPatientNameKillfocus(){
	
} */
int CLIMSMergeResultDialog::OnPatientNameCheckValue(){
	return 0;
} 
void CLIMSMergeResultDialog::OnSearchSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CLIMSMergeResultDialog::OnPatientListDblClick(){
	
}
 
void CLIMSMergeResultDialog::OnPatientListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(nNewItem < 0) return;
	m_nSID = str2long(m_wndPatientList.GetItemText(nNewItem, 1));
	m_nOID = str2long(m_wndPatientList.GetItemText(nNewItem, 6));
	m_nInstID = str2int(m_wndPatientList.GetItemText(nNewItem, 7));
	OnResListLoadData();
	
}
 
int CLIMSMergeResultDialog::OnPatientListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
}
 
long CLIMSMergeResultDialog::OnPatientListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_LocalDb);
	CString szSQL, tmpStr, szDate, szWhere;
	int nIndex= 1;
	m_wndPatientList.BeginLoad();
	UpdateData(true);

	if(!m_szSID.IsEmpty())
		szWhere.Format(_T(" and limso_barcode = %d "), ToInt(m_szSID));

	szDate = pMF->GetSysDate();
	szDate.Replace(_T("/), _T("-"));

	szSQL.Format(_T(" SELECT limso_oid as oid, ") \
_T(" limso_instid AS deviceid,") \
_T("   limso_docno         AS docno,") \
_T("   limso_pname         AS pname,") \
_T("   limso_barcode       AS barcode,") \
_T("   limso_performdate   AS performdate") \
_T(" FROM lims_order") \
_T(" WHERE limso_status='P' and limso_class='X' ") \
_T(" %s ") \
_T(" ORDER BY limso_oid "), szWhere);

_fmsg(_T("%s"), szSQL);
	int nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		tmpStr.Format(_T("%d"), nIndex++);
		
		int nItem = m_wndPatientList.AddItems(
			tmpStr, 
			rs.GetValue(_T("barcode")), 
			rs.GetValue(_T("PID")), 
			rs.GetValue(_T("pname")), 
			rs.GetValue(_T("Age")), 
			rs.GetValue(_T("performdate")), 
			rs.GetValue(_T("oid")), 
			rs.GetValue(_T("deviceid")), 
			NULL);			


		rs.MoveNext();
	}
	m_wndPatientList.EndLoad(); 
	return nCount;

}

void CLIMSMergeResultDialog::OnResListDblClick(){
	
}
 
void CLIMSMergeResultDialog::OnResListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
 
int CLIMSMergeResultDialog::OnResListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnApplySelect();
	 return 0;
}
 
long CLIMSMergeResultDialog::OnResListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//Local database sqlite
	CRecord rs(&pMF->m_LocalDb);
	
	CRecord rss(&pMF->m_LocalDb);
	CString szSQL, tmpStr, szRes, szComment, szCode;
	int nInstID;
	double minval, maxval;

	m_wndResList.BeginLoad(); 
	
	int nCount = 0;
	szSQL.Format(_T("SELECT limsol_instcode as code, limsol_result as result, limsol_note as note ") \
		_T(" FROM lims_order_line ") \
_T(" WHERE limsol_oid=%ld"), m_nOID);
_fmsg(_T("%s"), szSQL);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		rs.GetValue(_T("code"), szCode);
		rs.GetValue(_T("Result"), szRes);
		rs.GetValue(_T("note"), szComment);

		szSQL.Format(_T(" select ") \
					_T(" 	limsid_index as idx, ") \
					_T(" 	limsid_name as testname, ") \
					_T(" 	limsid_unit as unit, ") \
					_T(" 	limsid_testid as testid, ") \
					_T(" 	limsid_fnorm as fnorm, ") \
					_T(" 	limsid_mnorm as mnorm, ") \
					_T(" 	limsid_min as minval, ") \
					_T(" 	limsid_max as maxval ") \
					_T(" from lims_instrument_data") \
					_T(" where limsid_instid=%d  and limsid_code='%s' "), m_nInstID, szCode);




		rss.ExecSQL(szSQL);

		if(!rss.IsEOF())
		{
			rss.GetValue(_T("minval"), minval);
			rss.GetValue(_T("maxval"), maxval);

			if(maxval != 0 && maxval < str2float(szRes)){
				if(szCode.IsEmpty())
					szCode = _T("H");
			}
			if(minval != 0 && minval > str2float(szRes)){
				if(szCode.IsEmpty())
					szCode = _T("L");
			}

			int nItem = m_wndResList.AddItems(
				rss.GetValue(_T("idx")), 
				rss.GetValue(_T("TestName")), 
				rss.GetValue(_T("Unit")), 
				szRes, 
				rss.GetValue(_T("fnorm")), 
				rss.GetValue(_T("mnorm")), 
				szComment, 
				rss.GetValue(_T("testid")),
				szCode,
				NULL);

			if(maxval != 0 && maxval < str2float(szRes)){
				m_wndResList.SetSubItemBkColor(nItem, 3, COLOR_RED, FALSE);
				m_wndResList.SetSubItemTextColor(nItem, 3, COLOR_WHITE, FALSE);
			}
			if(minval != 0 && minval > str2float(szRes)){
				m_wndResList.SetSubItemBkColor(nItem, 3, RGB(255, 128, 0), FALSE);
				m_wndResList.SetSubItemTextColor(nItem, 3, COLOR_WHITE, FALSE);
			}


			
		}


		rs.MoveNext();
	}
	m_wndResList.EndLoad(); 
	return nCount;

}

void CLIMSMergeResultDialog::OnApplySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL, szRes, szComment, szCode,szItemID;
	CString szTableName;
	long nOrderId;


	szSQL.Format(_T("UPDATE lims_order SET limso_status='T' WHERE limso_oid=%ld"), m_nOID);
	pMF->m_LocalDb.ExecSQL(szSQL);
	for (int i = 0; i < m_wndResList.GetItemCount(); i++){
		szRes = m_wndResList.GetItemText(i, 3);
		szComment = m_wndResList.GetItemText(i, 6);
		szItemID = m_wndResList.GetItemText(i, 7);
		szCode = m_wndResList.GetItemText(i, 8);
		
		szSQL.Format(_T("UPDATE hms_testorderline SET hpcl_instid=%d, hpcl_instcode='%s', hpcl_result='%s', hpcl_note='%s', hpcl_status='T' ") \
			_T("WHERE hpcl_orderid=%ld and hpcl_itemid='%s' "), m_nInstID, szCode, szRes, szComment, m_nOrderID, szItemID);
_tprintf(_T("\r\n%s"), szSQL);

		pMF->ExecSQL(szSQL);
	}
	szSQL.Format(_T("UPDATE hms_testorder SET hpc_status='T', hpc_instid=%d, hpc_practitioner='%s', hpc_performdate=current_timestamp ") \
		_T("WHERE hpc_orderid=%ld"),  m_nInstID, pMF->GetCurrentUser(),  m_nOrderID);
_fmsg(_T("%s"), szSQL);
	pMF->ExecSQL(szSQL);
	CGuiDialog::OnOK();

}
 
void CLIMSMergeResultDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();
	
}
 
int CLIMSMergeResultDialog::OnAddLIMSMergeResultDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}

int CLIMSMergeResultDialog::OnEditLIMSMergeResultDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}

int CLIMSMergeResultDialog::OnDeleteLIMSMergeResultDialog(){
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
 		OnCancelLIMSMergeResultDialog(); 
 	}
	return 0;
}

int CLIMSMergeResultDialog::OnSaveLIMSMergeResultDialog(){
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
 		//OnLIMSMergeResultDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}

int CLIMSMergeResultDialog::OnCancelLIMSMergeResultDialog(){
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
 
int CLIMSMergeResultDialog::OnLIMSMergeResultDialogListLoadData(){
	return 0;
}

