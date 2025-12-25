#include "HMSTestEntryDialog.h"
#include "MainFrm.h"
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSTestEntryDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSTestEntryDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSTestEntryDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSTestEntryDialog*)pWnd)->OnListDeleteItem();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSTestEntryDialog *pVw = (CHMSTestEntryDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSTestEntryDialog *pVw = (CHMSTestEntryDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSTestEntryDialogFnc(CWnd *pWnd){
	 return ((CHMSTestEntryDialog*)pWnd)->OnAddHMSTestEntryDialog();
} 
static int _OnEditHMSTestEntryDialogFnc(CWnd *pWnd){
	 return ((CHMSTestEntryDialog*)pWnd)->OnEditHMSTestEntryDialog();
} 
static int _OnDeleteHMSTestEntryDialogFnc(CWnd *pWnd){
	 return ((CHMSTestEntryDialog*)pWnd)->OnDeleteHMSTestEntryDialog();
} 
static int _OnSaveHMSTestEntryDialogFnc(CWnd *pWnd){
	 return ((CHMSTestEntryDialog*)pWnd)->OnSaveHMSTestEntryDialog();
} 
static int _OnCancelHMSTestEntryDialogFnc(CWnd *pWnd){
	 return ((CHMSTestEntryDialog*)pWnd)->OnCancelHMSTestEntryDialog();
} 
CHMSTestEntryDialog::CHMSTestEntryDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 605;
	m_nDlgHeight = 570;
	SetDefaultValues();
}
CHMSTestEntryDialog::~CHMSTestEntryDialog()
{
}
void CHMSTestEntryDialog::OnCreateComponents()
{
	m_wndList.Create(this,5, 5, 595, 535); 
	m_wndAutoPrint.Create(this, _T("&Auto Print"), 430-150, 540, 510-85, 565);
	m_wndSave.Create(this, _T("&Save"), 430, 540, 510, 565);
	m_wndClose.Create(this, _T("&Close"), 515, 540, 595, 565);

}
void CHMSTestEntryDialog::OnInitializeComponents()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndList.ModifyStyle(0, LVS_NOSORTHEADER);
	m_wndList.InsertColumn(0, _T("Index"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(1, _T("Test Name"), CFMT_TEXT, 200);
	m_wndList.InsertColumn(2, _T("Unit"), CFMT_TEXT, 65);
	m_wndList.InsertColumn(3, _T("Norm Index"), CFMT_TEXT, 120);
	m_wndList.InsertColumn(4, _T("Result"), CFMT_TEXT, 70);
	m_wndList.InsertColumn(5, _T("Note"), CFMT_TEXT, 70);
	m_wndList.InsertColumn(6, _T("itemid"), CFMT_TEXT, 0);

}
void CHMSTestEntryDialog::OnSetWindowEvents()
{
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	//m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndList.SetEditLabel(4, GUI_TEXTCTRL);
	OnListLoadData();
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(pMF->m_szAutoPrint == _T("Y"))
		m_bAutoPrint = TRUE;
	else
		m_bAutoPrint = FALSE;
	SetMode(VM_EDIT);
	//m_wndList.SetStartEdit(0, 4);
}
void CHMSTestEntryDialog::OnDoDataExchange(CDataExchange* pDX)
{
	DDX_Check(pDX, m_wndAutoPrint.GetDlgCtrlID(), m_bAutoPrint);
}
void CHMSTestEntryDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSTestEntryDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSTestEntryDialog::SetDefaultValues(){


}
int CHMSTestEntryDialog::SetMode(int nMode){
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
 			EnableButtons(TRUE, 0, 1, -1); 
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
void CHMSTestEntryDialog::OnListDblClick()
{
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0) return;
		m_wndList.SetStartEdit(nSel, 4);
} 
void CHMSTestEntryDialog::OnListSelectChange(int nOldItem, int nNewItem)
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSTestEntryDialog::OnListDeleteItem()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return 0;
} 
long CHMSTestEntryDialog::OnListLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szNormIndex, szStatus, szResult;
	if(pMF->m_bExternalInput)
	{
		szSQL.Format(_T("SELECT limsol_code as code, limsid_name as name, limsol_result as result, limsol_note as note, limsid_mnorm as mnorm, limsid_fnorm as fnorm " )
			_T("FROM lims_order_line LEFT JOIN lims_instrument_data ON(limsid_instid=%d AND limsid_code=limsol_instcode) WHERE limsol_oid=%ld "), pMF->m_nInstID, m_nOrderID);
	}
	else
	{
		if (m_szDeptType == _T("E"))
		{
			szSQL.Format(_T("SELECT hpc_status,hpcl_itemid as itemid, hfl_name as name, hfl_unit as unit, hpcl_result as result, hpcl_note as note, hfl_index1 as mnorm, hfl_index2 as fnorm,hfl_result1 as result1, hfl_result2 as result2 " )
						 _T(" FROM hms_testorder LEFT JOIN hms_testorderline ON(hpc_orderid=hpcl_orderid) ")
						 _T(" LEFT JOIN hms_fee_list ON(hfl_feeid=hpcl_itemid) WHERE hpcl_orderid=%ld and length(hpcl_itemid) > 0 ORDER BY hfl_line "), m_nOrderID);
		}
		else
		{
			szSQL.Format(_T("SELECT hpc_status,hpcl_itemid as itemid, hfl_name as name, hfl_unit as unit, hpcl_result as result, hpcl_note as note, hfl_index1 as mnorm, hfl_index2 as fnorm,hfl_result1 as result1, hfl_result2 as result2 " )
						 _T(" FROM hms_test LEFT JOIN hms_testorderline ON(hpc_orderid=hpcl_orderid) ")
						 _T(" LEFT JOIN hms_fee_list ON(hfl_feeid=hpcl_itemid) WHERE hpcl_orderid=%ld and length(hpcl_itemid) > 0 ORDER BY hfl_line "), m_nOrderID);
		}
	}

	_fmsg(_T("%s"), szSQL);

	rs.ExecSQL(szSQL);
	int nItem = 1;
	m_wndList.BeginLoad();
	while(!rs.IsEOF())
	{
		tmpStr.Format(_T("%d"), nItem++);
		if(m_szSexKey == _T("F")){
			rs.GetValue(_T("fnorm"), szNormIndex);
			rs.GetValue(_T("result2"), szResult);
		}
		else
		{
			rs.GetValue(_T("mnorm"), szNormIndex);
			rs.GetValue(_T("result1"), szResult);
		}
		
		rs.GetValue(_T("hpc_status"), szStatus);
		if(szStatus == _T("P"))		
			szResult = rs.GetValue(_T("result"));		
			
		m_wndList.AddItems(tmpStr, 
			rs.GetValue(_T("name")), 
			rs.GetValue(_T("unit")), 
			szNormIndex,
			szResult,
			rs.GetValue(_T("note")), 
			rs.GetValue(_T("itemid")),
			NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad();
	return nItem;
}
void CHMSTestEntryDialog::OnSaveSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL, szItemID, szStatus;
	CRecord rs(&pMF->m_db);

	UpdateData(TRUE);
	m_wndList.CancelEditLabel();
	pMF->BeginTransaction();

	if(pMF->m_szConfirmResult != _T("Y"))
	{
		if (m_szDeptType == _T("E"))
		{
			szSQL.Format(_T("UPDATE hms_testorder SET hpc_pdeptid='%s', hpc_performdate=systimestamp, hpc_practitioner='%s' , hpc_status='T' WHERE hpc_orderid=%ld "), 
				         pMF->m_szDeptPatient, pMF->GetCurrentUser(),  m_nOrderID);

			pMF->ExecSQL(szSQL);

			for (int i =0; i < m_wndList.GetItemCount(); i++)
			{
				szItemID = m_wndList.GetItemText(i, 6);
				szSQL.Format(_T("UPDATE hms_testorderline SET hpcl_result='%s' WHERE hpcl_orderid=%ld and hpcl_itemid='%s' "), 
					m_wndList.GetItemText(i, 4), m_nOrderID, szItemID);
				pMF->ExecSQL(szSQL);
			}
		}
		else
		{
			szSQL.Format(_T("UPDATE hms_test SET hpc_pdeptid='%s', hpc_performdate=systimestamp, hpc_practitioner='%s' , hpc_status='T' WHERE hpc_orderid=%ld "), 
				         pMF->m_szDeptPatient, pMF->GetCurrentUser(),  m_nOrderID);

			pMF->ExecSQL(szSQL);

			for (int i =0; i < m_wndList.GetItemCount(); i++)
			{
				szItemID = m_wndList.GetItemText(i, 6);
				szSQL.Format(_T("UPDATE hms_testorderline SET hpcl_result='%s' WHERE hpcl_orderid=%ld and hpcl_itemid='%s' "), 
					m_wndList.GetItemText(i, 4), m_nOrderID, szItemID);
				pMF->ExecSQL(szSQL);
			}
		}
	}		
	else
	{					 
		CString tmpStr;

		if (m_szDeptType == _T("E"))
			szSQL.Format(_T("SELECT hpc_status FROM hms_testorder WHERE hpc_orderid=%ld"), m_nOrderID);
		else
			szSQL.Format(_T("SELECT hpc_status FROM hms_test WHERE hpc_orderid=%ld"), m_nOrderID);

		rs.ExecSQL(szSQL);
		if(rs.IsEOF())
		{
			pMF->Rollback();
			return; 
		}
		rs.GetValue(_T("hpc_status"), tmpStr);
		if(tmpStr == _T("T"))
		{
			ShowMessageBox(_T("Can not update result"));
			pMF->Rollback();
			return;
		}

		if (m_szDeptType == _T("E"))
		{
			szSQL.Format(_T("UPDATE hms_testorder SET hpc_pdeptid='%s', hpc_performdate=systimestamp, hpc_practitioner='%s' , hpc_status='P' WHERE hpc_orderid=%ld "), pMF->m_szDeptPatient, pMF->GetCurrentUser(),  m_nOrderID);
			pMF->ExecSQL(szSQL);
			for (int i = 0; i < m_wndList.GetItemCount(); i++)
			{
				szItemID = m_wndList.GetItemText(i, 6);
				szSQL.Format(_T("UPDATE hms_testorderline SET hpcl_result='%s' WHERE hpcl_orderid=%ld and hpcl_itemid='%s' "), 
					m_wndList.GetItemText(i, 4), m_nOrderID, szItemID);
				pMF->ExecSQL(szSQL);
			}
		}
		else
		{
			szSQL.Format(_T("UPDATE hms_test SET hpc_pdeptid='%s', hpc_performdate=systimestamp, hpc_practitioner='%s' , hpc_status='P' WHERE hpc_orderid=%ld "), pMF->m_szDeptPatient, pMF->GetCurrentUser(),  m_nOrderID);
			pMF->ExecSQL(szSQL);

			for (int i = 0; i < m_wndList.GetItemCount(); i++)
			{
				szItemID = m_wndList.GetItemText(i, 6);
				szSQL.Format(_T("UPDATE hms_testorderline SET hpcl_result='%s' WHERE hpcl_orderid=%ld and hpcl_itemid='%s' "), 
							 m_wndList.GetItemText(i, 4), m_nOrderID, szItemID);
				pMF->ExecSQL(szSQL);
			}
		}

	}

	
	pMF->Commit();
	if(m_bAutoPrint)
	{
//		pMF->PrintParaclinicalOrder(m_nOrderID, _T(""), true);
	}
	CGuiDialog::OnOK();
} 
void CHMSTestEntryDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CHMSTestEntryDialog::OnAddHMSTestEntryDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSTestEntryDialog::OnEditHMSTestEntryDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSTestEntryDialog::OnDeleteHMSTestEntryDialog(){
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
 		OnCancelHMSTestEntryDialog(); 
 	}
	return 0;
}
int CHMSTestEntryDialog::OnSaveHMSTestEntryDialog(){
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
 		//OnHMSTestEntryDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSTestEntryDialog::OnCancelHMSTestEntryDialog(){
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
int CHMSTestEntryDialog::OnHMSTestEntryDialogListLoadData(){
	return 0;
}


