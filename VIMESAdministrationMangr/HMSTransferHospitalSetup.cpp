#include "HMSTransferHospitalSetup.h"
#include "MainFrm.h"
#include "StringToken.h"
#include "Excel.h"
static void _OnProvillSearchSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSTransferHospitalSetup* )pWnd)->OnProvillSearchSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnProvillSearchSelendokFnc(CWnd *pWnd){
	((CHMSTransferHospitalSetup *)pWnd)->OnProvillSearchSelendok();
}
/*static void _OnProvillSearchSetfocusFnc(CWnd *pWnd){
	((CHMSTransferHospitalSetup *)pWnd)->OnProvillSearchKillfocus();
}*/
/*static void _OnProvillSearchKillfocusFnc(CWnd *pWnd){
	((CHMSTransferHospitalSetup *)pWnd)->OnProvillSearchKillfocus();
}*/
static long _OnProvillSearchLoadDataFnc(CWnd *pWnd){
	return ((CHMSTransferHospitalSetup *)pWnd)->OnProvillSearchLoadData();
}
/*static void _OnProvillSearchAddNewFnc(CWnd *pWnd){
	((CHMSTransferHospitalSetup *)pWnd)->OnProvillSearchAddNew();
}*/
static void _OnDistSearchSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSTransferHospitalSetup* )pWnd)->OnDistSearchSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDistSearchSelendokFnc(CWnd *pWnd){
	((CHMSTransferHospitalSetup *)pWnd)->OnDistSearchSelendok();
}
/*static void _OnDistSearchSetfocusFnc(CWnd *pWnd){
	((CHMSTransferHospitalSetup *)pWnd)->OnDistSearchKillfocus();
}*/
/*static void _OnDistSearchKillfocusFnc(CWnd *pWnd){
	((CHMSTransferHospitalSetup *)pWnd)->OnDistSearchKillfocus();
}*/
static long _OnDistSearchLoadDataFnc(CWnd *pWnd){
	return ((CHMSTransferHospitalSetup *)pWnd)->OnDistSearchLoadData();
}
/*static void _OnDistSearchAddNewFnc(CWnd *pWnd){
	((CHMSTransferHospitalSetup *)pWnd)->OnDistSearchAddNew();
}*/
/*static void _OnHospitalNameChangeFnc(CWnd *pWnd){
	((CHMSTransferHospitalSetup *)pWnd)->OnHospitalNameChange();
} */
/*static void _OnHospitalNameSetfocusFnc(CWnd *pWnd){
	((CHMSTransferHospitalSetup *)pWnd)->OnHospitalNameSetfocus();} */ 
/*static void _OnHospitalNameKillfocusFnc(CWnd *pWnd){
	((CHMSTransferHospitalSetup *)pWnd)->OnHospitalNameKillfocus();
} */
static int _OnHospitalNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSTransferHospitalSetup *)pWnd)->OnHospitalNameCheckValue();
} 
static void _OnTransferHospitalSelectFnc(CWnd *pWnd){
	 ((CHMSTransferHospitalSetup*)pWnd)->OnTransferHospitalSelect();
}
static void _OnApplySelectFnc(CWnd *pWnd){
	CHMSTransferHospitalSetup *pVw = (CHMSTransferHospitalSetup *)pWnd;
	pVw->OnApplySelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSTransferHospitalSetup *pVw = (CHMSTransferHospitalSetup *)pWnd;
	pVw->OnCloseSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSTransferHospitalSetup*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSTransferHospitalSetup*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSTransferHospitalSetup*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSTransferHospitalSetup*)pWnd)->OnListDeleteItem();
} 
static int _OnAddHMSTransferHospitalSetupFnc(CWnd *pWnd){
	 return ((CHMSTransferHospitalSetup*)pWnd)->OnAddHMSTransferHospitalSetup();
} 
static int _OnEditHMSTransferHospitalSetupFnc(CWnd *pWnd){
	 return ((CHMSTransferHospitalSetup*)pWnd)->OnEditHMSTransferHospitalSetup();
} 
static int _OnDeleteHMSTransferHospitalSetupFnc(CWnd *pWnd){
	 return ((CHMSTransferHospitalSetup*)pWnd)->OnDeleteHMSTransferHospitalSetup();
} 
static int _OnSaveHMSTransferHospitalSetupFnc(CWnd *pWnd){
	 return ((CHMSTransferHospitalSetup*)pWnd)->OnSaveHMSTransferHospitalSetup();
} 
static int _OnCancelHMSTransferHospitalSetupFnc(CWnd *pWnd){
	 return ((CHMSTransferHospitalSetup*)pWnd)->OnCancelHMSTransferHospitalSetup();
} 
static int _OnListCheckAllFnc(CWnd* pWnd){
	((CHMSTransferHospitalSetup*)pWnd)->OnListCheckAll();
	return 0;
}
static int _OnListUnCheckAllFnc(CWnd* pWnd){
	((CHMSTransferHospitalSetup*)pWnd)->OnListUnCheckAll();
	return 0;
}
static int _OnExportTransferHospitalFnc(CWnd* pWnd){
	((CHMSTransferHospitalSetup*)pWnd)->OnExportTransferHospital();
	return 0;
}

CHMSTransferHospitalSetup::CHMSTransferHospitalSetup(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 815;
	m_nDlgHeight = 630;
	SetDefaultValues();
}
CHMSTransferHospitalSetup::~CHMSTransferHospitalSetup(){
}
void CHMSTransferHospitalSetup::OnCreateComponents(){
	m_wndFilter.Create(this, _T("Filter"), 5, 5, 805, 60);
	m_wndProvillSearchLabel.Create(this, _T("Provill"), 10, 30, 110, 55);
	m_wndProvillSearch.Create(this,115, 30, 275, 55); 
	m_wndDistSearchLabel.Create(this, _T("Dist"), 280, 30, 385, 55);
	m_wndDistSearch.Create(this,390, 30, 560, 55); 
	m_wndHospitalNameLabel.Create(this, _T("Hostpital Name"), 565, 30, 650, 55);
	m_wndHospitalList.Create(this, _T("Hospital List"), 5, 65, 805, 570);
	m_wndHospitalName.Create(this,655, 30, 800, 55); 
	m_wndTransferHospital.Create(this, _T("Transfer Hospital"), 5, 575, 165, 600);
	m_wndApply.Create(this, _T("&Apply"), 640, 575, 720, 600);
	m_wndClose.Create(this, _T("&Close"), 725, 575, 805, 600);
	m_wndList.Create(this,10, 90, 800, 565); 
	m_wndList.SetCheckBox(true);

}
void CHMSTransferHospitalSetup::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	SetMode(VM_NONE);	

	m_wndList.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);
	m_wndList.InsertColumn(2, _T("Provill"), CFMT_TEXT, 150);
	m_wndList.InsertColumn(3, _T("District"), CFMT_TEXT, 150);
	m_wndList.InsertColumn(4, _T("Type"), CFMT_TEXT, 100);

	m_wndProvillSearch.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndProvillSearch.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndDistSearch.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndDistSearch.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);
}

void CHMSTransferHospitalSetup::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndProvillSearch.SetEvent(WE_SELENDOK, _OnProvillSearchSelendokFnc);
	//m_wndProvillSearch.SetEvent(WE_SETFOCUS, _OnProvillSearchSetfocusFnc);
	//m_wndProvillSearch.SetEvent(WE_KILLFOCUS, _OnProvillSearchKillfocusFnc);
	m_wndProvillSearch.SetEvent(WE_SELCHANGE, _OnProvillSearchSelectChangeFnc);
	m_wndProvillSearch.SetEvent(WE_LOADDATA, _OnProvillSearchLoadDataFnc);
	//m_wndProvillSearch.SetEvent(WE_ADDNEW, _OnProvillSearchAddNewFnc);
	m_wndDistSearch.SetEvent(WE_SELENDOK, _OnDistSearchSelendokFnc);
	//m_wndDistSearch.SetEvent(WE_SETFOCUS, _OnDistSearchSetfocusFnc);
	//m_wndDistSearch.SetEvent(WE_KILLFOCUS, _OnDistSearchKillfocusFnc);
	m_wndDistSearch.SetEvent(WE_SELCHANGE, _OnDistSearchSelectChangeFnc);
	m_wndDistSearch.SetEvent(WE_LOADDATA, _OnDistSearchLoadDataFnc);
	//m_wndDistSearch.SetEvent(WE_ADDNEW, _OnDistSearchAddNewFnc);
	//m_wndHospitalName.SetEvent(WE_CHANGE, _OnHospitalNameChangeFnc);
	//m_wndHospitalName.SetEvent(WE_SETFOCUS, _OnHospitalNameSetfocusFnc);
	//m_wndHospitalName.SetEvent(WE_KILLFOCUS, _OnHospitalNameKillfocusFnc);
	m_wndHospitalName.SetEvent(WE_CHECKVALUE, _OnHospitalNameCheckValueFnc);
	m_wndTransferHospital.SetEvent(WE_CLICK, _OnTransferHospitalSelectFnc);
	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Check All"), _OnListCheckAllFnc);
	m_wndList.AddEvent(2, _T("Uncheck All"), _OnListUnCheckAllFnc);
	m_wndList.AddEvent(3, _T("Export Transfer Hospital"), _OnExportTransferHospitalFnc);
	SetMode(VM_VIEW);

}
void CHMSTransferHospitalSetup::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndProvillSearch.GetDlgCtrlID(), m_szProvillSearchKey);
	DDX_TextEx(pDX, m_wndDistSearch.GetDlgCtrlID(), m_szDistSearchKey);
	DDX_Text(pDX, m_wndHospitalName.GetDlgCtrlID(), m_szHospitalName);
	DDX_Check(pDX, m_wndTransferHospital.GetDlgCtrlID(), m_bTransferHospital);

}
void CHMSTransferHospitalSetup::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
}

void CHMSTransferHospitalSetup::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 

}

void CHMSTransferHospitalSetup::SetDefaultValues(){
	m_bTransferHospital = FALSE;
}

int CHMSTransferHospitalSetup::SetMode(int nMode){ 
 		int nOldMode = GetMode(); 
 		CGuiDialog::SetMode(nMode); 
 		CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
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
		m_wndProvillSearch.EnableWindow(true);
		m_wndDistSearch.EnableWindow(true);
		m_wndHospitalName.EnableWindow(true);	
 		UpdateData(FALSE); 
 		return nOldMode; 
 	}

void CHMSTransferHospitalSetup::OnProvillSearchSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSTransferHospitalSetup::OnProvillSearchSelendok(){
	OnListLoadData();
	return;
}

/*void CHMSTransferHospitalSetup::OnProvillSearchSetfocus(){
	
}*/
/*void CHMSTransferHospitalSetup::OnProvillSearchKillfocus(){
	
}*/
long CHMSTransferHospitalSetup::OnProvillSearchLoadData(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	
	if(m_wndProvillSearch.IsSearchKey() && ToInt(m_szProvillSearchKey) >0){	
			szWhere.Format(_T(" WHERE sp_id=%ld "), ToLong(m_szProvillSearchKey));		
	}
	szSQL.Format(_T("SELECT sp_id as id, sp_name as name FROM sys_prov %s ORDER BY sp_id "), szWhere);
	m_wndProvillSearch.DeleteAllItems(); 
	int nCount = 0;	
	nCount = rs.ExecSQL(szSQL);	
	while(!rs.IsEOF()){ 
		m_wndProvillSearch.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSTransferHospitalSetup::OnProvillSearchAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSTransferHospitalSetup::OnDistSearchSelectChange(int nOldItemSel, int nNewItemSel){
	OnListLoadData();
	return;
}
 
void CHMSTransferHospitalSetup::OnDistSearchSelendok(){
	OnListLoadData();
	return ;
}

/*void CHMSTransferHospitalSetup::OnDistSearchSetfocus(){
	
}*/
/*void CHMSTransferHospitalSetup::OnDistSearchKillfocus(){
	
}*/
long CHMSTransferHospitalSetup::OnDistSearchLoadData(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	UpdateData(true);	
	if(m_wndDistSearch.IsSearchKey() && ToInt(m_szDistSearchKey) > 0){		
			szWhere.Format(_T(" and sd_id=%ld "), ToLong(m_szDistSearchKey));			
	}
	szSQL.Format(_T("SELECT sd_id as id, sd_name as name FROM sys_dist WHERE sd_provid =%ld %s ORDER BY sd_id "), ToLong(m_szProvillSearchKey), szWhere);

	m_wndDistSearch.DeleteAllItems(); 
	int nCount = 0;	
	
	nCount = rs.ExecSQL(szSQL);	
	while(!rs.IsEOF()){ 
		m_wndDistSearch.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSTransferHospitalSetup::OnDistSearchAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSTransferHospitalSetup::OnHospitalNameChange(){
	
} */
/*void CHMSTransferHospitalSetup::OnHospitalNameSetfocus(){
	
} */
/*void CHMSTransferHospitalSetup::OnHospitalNameKillfocus(){
	
} */
int CHMSTransferHospitalSetup::OnHospitalNameCheckValue(){
	OnListLoadData();
	return 0;
} 
void CHMSTransferHospitalSetup::OnTransferHospitalSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnListLoadData();	
}
void CHMSTransferHospitalSetup::OnApplySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CString szSQL, szAppliedID, szUnAppliedID, tmpStr;
	int nRes = 0;
	for (int i = 0;i < m_wndList.GetItemCount(); i++)
	{
		if (m_wndList.GetCheck(i))
		{
			if (!szAppliedID.IsEmpty())
				szAppliedID += _T(", ");
			szAppliedID.AppendFormat(_T("'%s'"), m_wndList.GetItemText(i, 0));
		}
		else
		{
			if (!szUnAppliedID.IsEmpty())
				szUnAppliedID += _T(", ");
			szUnAppliedID.AppendFormat(_T("'%s'"), m_wndList.GetItemText(i, 0));
		}
	}
	pMF->BeginTransaction();
	if (m_bTransferHospital)
	{
		CStringToken token1(szUnAppliedID);
		for (int i = 0; i < token1.GetSize();i++)
		{
			token1.GetAt(i, tmpStr);
			szSQL.Format(_T("UPDATE hms_hospital SET hh_isactive2 = 'N' WHERE hh_id = %s"), tmpStr);
			nRes = pMF->ExecSQL(szSQL);
			if (nRes <= 0)
			{
				pMF->Rollback();
				return;
			}
		}
	}
	else
	{
		CStringToken token2(szAppliedID);
		for (int i = 0; i < token2.GetSize(); i++)
		{
			token2.GetAt(i, tmpStr);
			szSQL.Format(_T("UPDATE hms_hospital SET hh_isactive2 = 'Y' WHERE hh_id = %s"), tmpStr);
			nRes = pMF->ExecSQL(szSQL);
			if (nRes <= 0)
			{
				pMF->Rollback();
				return;
			}
		}
	}
	pMF->Commit();
	OnListLoadData();

} 
void CHMSTransferHospitalSetup::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
void CHMSTransferHospitalSetup::OnListDblClick(){
	int nSel = m_wndList.GetCurSel();
	if (m_wndList.GetCheck(nSel))
		m_wndList.SetCheck(nSel, false);
	else
		m_wndList.SetCheck(nSel, true);
	return;
}
 
void CHMSTransferHospitalSetup::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0)
		return;
	GetDataToScreen();
	return;
}
 
int CHMSTransferHospitalSetup::OnListDeleteItem(){
	return 0;
}
 
long CHMSTransferHospitalSetup::OnListLoadData(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, tmpStr;
	szWhere.Empty();
	int nLine = 0;
	UpdateData(true);
	if (ToLong(m_szProvillSearchKey) > 0)
	{
		szWhere.Format(_T(" and hh_provid =%ld"), ToInt(m_szProvillSearchKey));

		if(ToLong(m_szDistSearchKey) >0 )
			szWhere.AppendFormat(_T(" and hh_distid =%ld"), ToInt(m_szDistSearchKey));

	}
	
	if (!m_szHospitalName.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and upper(hh_name) like(chr(37)||upper('%s')||chr(37))"), m_szHospitalName);
	}
	if (m_bTransferHospital)
		szWhere.AppendFormat(_T(" AND hh_isactive2 = 'Y'"));
	else
		szWhere.AppendFormat(_T(" AND NVL(hh_isactive2, 'N') <> 'Y'"));
	m_wndList.BeginLoad(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT hh_id as id, hh_name as name, ") \
					_T("(SELECT sp_name FROM sys_prov WHERE sp_id=hh_provid) AS provill, ") \
					_T("(SELECT sd_name FROM sys_dist WHERE sd_id=hh_distid) AS dist, ") \
					_T(" hh_isactive2,") \
					_T("(SELECT ss_desc FROM sys_sel WHERE ss_id='hms_hospital_type' and ss_code=hh_type) as type ") \
					_T("FROM hms_hospital WHERE 0=0 %s ORDER BY hh_id "), szWhere);	;	
	nCount = rs.ExecSQL(szSQL);
_fmsg(_T("%s"), szSQL);
	while(!rs.IsEOF()){ 
		nLine = m_wndList.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), 
			rs.GetValue(_T("provill")), 
			rs.GetValue(_T("dist")), 
			rs.GetValue(_T("type")), NULL);
		rs.GetValue(_T("hh_isactive2"), tmpStr);
		if (tmpStr == _T("Y"))
			m_wndList.SetCheck(nLine);
		rs.MoveNext();
	}	
	m_wndList.EndLoad(); 
	return nCount;

}

int CHMSTransferHospitalSetup::OnAddHMSTransferHospitalSetup(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSTransferHospitalSetup::OnEditHMSTransferHospitalSetup(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSTransferHospitalSetup::OnDeleteHMSTransferHospitalSetup(){
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
 		OnCancelHMSTransferHospitalSetup();
 	}
	return 0;
}
int CHMSTransferHospitalSetup::OnSaveHMSTransferHospitalSetup(){
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
 		//OnHMSTransferHospitalSetupListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSTransferHospitalSetup::OnCancelHMSTransferHospitalSetup(){
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
int CHMSTransferHospitalSetup::OnHMSTransferHospitalSetupListLoadData(){
	return 0;
}

void CHMSTransferHospitalSetup::OnListCheckAll(){
	for (int i = 0;i < m_wndList.GetItemCount(); i++)
		if (!m_wndList.GetCheck(i))
			m_wndList.SetCheck(i, true);
}

void CHMSTransferHospitalSetup::OnListUnCheckAll(){
	for (int i = 0;i < m_wndList.GetItemCount(); i++)
		if (m_wndList.GetCheck(i))
			m_wndList.SetCheck(i, false);
}

void CHMSTransferHospitalSetup::OnExportTransferHospital(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CExcel xls;
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szOldProv, szNewProv;
	int nRow = 0, nCol = 0, nIdx = 1;
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	xls.SetColumnWidth(1, 40);
	xls.SetColumnWidth(2, 50);
	xls.SetCellMergedColumns(0, 0, 3);
	xls.SetCellText(0, 0, _T("\x44\x41NH S\xC1\x43H \x42\x1EC6NH VI\x1EC6N \x43HUY\x1EC2N TUY\x1EBEN"), 4098, true);
	xls.SetCellText(0, 1, _T("STT"), 4098, true);
	xls.SetCellText(1, 1, _T("T\xEAn"), 4098, true);
	xls.SetCellText(2, 1, _T("\x110\x1ECB\x61 \x63h\x1EC9"), 4098, true);
	nRow = 2;
	szSQL.Format(_T("SELECT hh_provid, hh_name, hh_address FROM hms_hospital WHERE hh_isactive2 = 'Y' ORDER BY hh_provid, hh_name"));
	rs.ExecSQL(szSQL);
	while (!rs.IsEOF())
	{
		rs.GetValue(_T("hh_provid"), szNewProv);
		if (szNewProv != szOldProv)
		{
			xls.SetCellMergedColumns(0, nRow, 3);
			xls.SetCellText(0, nRow, pMF->GetProvinceString(szNewProv), FMT_TEXT, true);
			nRow++;
			szOldProv = szNewProv;
		}
		xls.SetCellText(0, nRow, int2str(nIdx++), FMT_TEXT | FMT_RIGHT);
		xls.SetCellText(1, nRow, rs.GetValue(_T("hh_name")), FMT_TEXT);
		xls.SetCellText(2, nRow, rs.GetValue(_T("hh_address")), FMT_TEXT);
		nRow++;
		rs.MoveNext();
	}
	xls.Save(_T("Exports\\Danh sach BV chuyen tuyen.xls"));

}