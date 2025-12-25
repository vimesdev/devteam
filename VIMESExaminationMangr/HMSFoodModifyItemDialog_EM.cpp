#include "HMSFoodModifyItemDialog_EM.h"
#include "MainFrm.h"
static void _OnLightSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSFoodModifyItemDialog_EM* )pWnd)->OnLightSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnLightSelendokFnc(CWnd *pWnd){
	((CHMSFoodModifyItemDialog_EM *)pWnd)->OnLightSelendok();
}
/*static void _OnLightSetfocusFnc(CWnd *pWnd){
	((CHMSFoodModifyItemDialog_EM *)pWnd)->OnLightKillfocus();
}*/
/*static void _OnLightKillfocusFnc(CWnd *pWnd){
	((CHMSFoodModifyItemDialog_EM *)pWnd)->OnLightKillfocus();
}*/
static long _OnLightLoadDataFnc(CWnd *pWnd){
	return ((CHMSFoodModifyItemDialog_EM *)pWnd)->OnLightLoadData();
}
/*static void _OnLightAddNewFnc(CWnd *pWnd){
	((CHMSFoodModifyItemDialog_EM *)pWnd)->OnLightAddNew();
}*/

static void _OnLunchSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSFoodModifyItemDialog_EM* )pWnd)->OnLunchSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnLunchSelendokFnc(CWnd *pWnd){
	((CHMSFoodModifyItemDialog_EM *)pWnd)->OnLunchSelendok();
}
/*static void _OnLunchSetfocusFnc(CWnd *pWnd){
	((CHMSFoodModifyItemDialog_EM *)pWnd)->OnLunchKillfocus();
}*/
/*static void _OnLunchKillfocusFnc(CWnd *pWnd){
	((CHMSFoodModifyItemDialog_EM *)pWnd)->OnLunchKillfocus();
}*/
static long _OnLunchLoadDataFnc(CWnd *pWnd){
	return ((CHMSFoodModifyItemDialog_EM *)pWnd)->OnLunchLoadData();
}
/*static void _OnLunchAddNewFnc(CWnd *pWnd){
	((CHMSFoodModifyItemDialog_EM *)pWnd)->OnLunchAddNew();
}*/

static void _OnDinnerSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSFoodModifyItemDialog_EM* )pWnd)->OnDinnerSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDinnerSelendokFnc(CWnd *pWnd){
	((CHMSFoodModifyItemDialog_EM *)pWnd)->OnDinnerSelendok();
}
/*static void _OnDinnerSetfocusFnc(CWnd *pWnd){
	((CHMSFoodModifyItemDialog_EM *)pWnd)->OnDinnerKillfocus();
}*/
/*static void _OnDinnerKillfocusFnc(CWnd *pWnd){
	((CHMSFoodModifyItemDialog_EM *)pWnd)->OnDinnerKillfocus();
}*/
static long _OnDinnerLoadDataFnc(CWnd *pWnd){
	return ((CHMSFoodModifyItemDialog_EM *)pWnd)->OnDinnerLoadData();
}
/*static void _OnDinnerAddNewFnc(CWnd *pWnd){
	((CHMSFoodModifyItemDialog_EM *)pWnd)->OnDinnerAddNew();
}*/
static void _OnApplySelectFnc(CWnd *pWnd){
	CHMSFoodModifyItemDialog_EM *pVw = (CHMSFoodModifyItemDialog_EM *)pWnd;
	pVw->OnApplySelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSFoodModifyItemDialog_EM *pVw = (CHMSFoodModifyItemDialog_EM *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddHMSFoodModifyItemDialogFnc(CWnd *pWnd){
	 return ((CHMSFoodModifyItemDialog_EM*)pWnd)->OnAddHMSFoodModifyItemDialog();
} 
static int _OnEditHMSFoodModifyItemDialogFnc(CWnd *pWnd){
	 return ((CHMSFoodModifyItemDialog_EM*)pWnd)->OnEditHMSFoodModifyItemDialog();
} 
static int _OnDeleteHMSFoodModifyItemDialogFnc(CWnd *pWnd){
	 return ((CHMSFoodModifyItemDialog_EM*)pWnd)->OnDeleteHMSFoodModifyItemDialog();
} 
static int _OnSaveHMSFoodModifyItemDialogFnc(CWnd *pWnd){
	 return ((CHMSFoodModifyItemDialog_EM*)pWnd)->OnSaveHMSFoodModifyItemDialog();
} 
static int _OnCancelHMSFoodModifyItemDialogFnc(CWnd *pWnd){
	 return ((CHMSFoodModifyItemDialog_EM*)pWnd)->OnCancelHMSFoodModifyItemDialog();
} 
CHMSFoodModifyItemDialog_EM::CHMSFoodModifyItemDialog_EM(CWnd *pParent, int nMode):
	CGuiDialog(pParent)
	{
	CGuiDialog::SetMode(nMode);
	m_nDlgWidth = 465;
	m_nDlgHeight = 125;
	SetDefaultValues();
	m_szSkipName2 = _T("'PK1','PK2','PK3','PK4','PK5','PK6','PK7','PK8','PK9','PK10'");
}
CHMSFoodModifyItemDialog_EM::~CHMSFoodModifyItemDialog_EM(){
}
void CHMSFoodModifyItemDialog_EM::OnCreateComponents(){
	m_wndModifyInformation.Create(this, _T("Modify  Information"), 5, 5, 455, 120);
	m_wndLightLabel.Create(this, _T("Light"), 10, 30, 90, 55);
	m_wndLight.Create(this,95, 30, 450, 55); 
	m_wndLunchLabel.Create(this, _T("Lunch"), 10, 60, 90, 85);
	m_wndLunch.Create(this,95, 60, 450, 85); 
	m_wndDinnerLabel.Create(this, _T("Dinner"), 10, 90, 90, 115);
	m_wndDinner.Create(this,95, 90, 450, 115);
	m_wndLevel.Create(this, _T("M\x1EE9\x63 \x103n(150.000)"),10, 125, 280, 150); 
	m_wndApply.Create(this, _T("&Apply"), 290, 125, 370, 150);
	m_wndCancel.Create(this, _T("&Cancel"), 375, 125, 455, 150);

}
void CHMSFoodModifyItemDialog_EM::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndLunch.SetCheckValue(true);
	m_wndLunch.LimitText(35);
	m_wndDinner.SetCheckValue(true);
	m_wndDinner.LimitText(35);


	m_wndLight.InsertColumn(0, _T(""), CFMT_TEXT, 0); //itemid
	m_wndLight.InsertColumn(1, _T("ID"), CFMT_TEXT, 100); //refidx	
	m_wndLight.InsertColumn(2, _T("Name /Cnt"), CFMT_TEXT, 350);
	m_wndLight.InsertColumn(3, _T("Unit"), CFMT_TEXT|CFMT_CENTER, 80);
	m_wndLight.InsertColumn(4, _T("Unit Price"), CFMT_MONEY, 70);
	m_wndLight.InsertColumn(5, _T("GroupID"), CFMT_TEXT, 0);
	m_wndLight.Format(6, 2, 10, 2);
	m_wndLight.SetSearchEx(true, 1);

	m_wndLunch.InsertColumn(0, _T(""), CFMT_TEXT, 0); //itemid
	m_wndLunch.InsertColumn(1, _T("ID"), CFMT_TEXT, 100); //refidx	
	m_wndLunch.InsertColumn(2, _T("Name /Cnt"), CFMT_TEXT, 350);
	m_wndLunch.InsertColumn(3, _T("Unit"), CFMT_TEXT|CFMT_CENTER, 80);
	m_wndLunch.InsertColumn(4, _T("Unit Price"), CFMT_MONEY, 70);
	m_wndLunch.InsertColumn(5, _T("GroupID"), CFMT_TEXT, 0);
	m_wndLunch.Format(6, 2, 10, 2);
	m_wndLunch.SetSearchEx(true, 1);
	m_wndDinner.InsertColumn(0, _T(""), CFMT_TEXT, 0); //itemid
	m_wndDinner.InsertColumn(1, _T("ID"), CFMT_TEXT, 100); //refidx	
	m_wndDinner.InsertColumn(2, _T("Name /Cnt"), CFMT_TEXT, 350);
	m_wndDinner.InsertColumn(3, _T("Unit"), CFMT_TEXT|CFMT_CENTER, 80);
	m_wndDinner.InsertColumn(4, _T("Unit Price"), CFMT_MONEY, 70);
	m_wndDinner.InsertColumn(5, _T("GroupID"), CFMT_TEXT, 0);
	m_wndDinner.Format(6, 2, 10, 2);
	m_wndDinner.SetSearchEx(true, 1);


}
void CHMSFoodModifyItemDialog_EM::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndLight.SetEvent(WE_SELENDOK, _OnLightSelendokFnc);
	//m_wndLight.SetEvent(WE_SETFOCUS, _OnLightSetfocusFnc);
	//m_wndLight.SetEvent(WE_KILLFOCUS, _OnLightKillfocusFnc);
	m_wndLight.SetEvent(WE_SELCHANGE, _OnLightSelectChangeFnc);
	m_wndLight.SetEvent(WE_LOADDATA, _OnLightLoadDataFnc);
	//m_wndLight.SetEvent(WE_ADDNEW, _OnLightAddNewFnc);

	m_wndLunch.SetEvent(WE_SELENDOK, _OnLunchSelendokFnc);
	//m_wndLunch.SetEvent(WE_SETFOCUS, _OnLunchSetfocusFnc);
	//m_wndLunch.SetEvent(WE_KILLFOCUS, _OnLunchKillfocusFnc);
	m_wndLunch.SetEvent(WE_SELCHANGE, _OnLunchSelectChangeFnc);
	m_wndLunch.SetEvent(WE_LOADDATA, _OnLunchLoadDataFnc);
	//m_wndLunch.SetEvent(WE_ADDNEW, _OnLunchAddNewFnc);

	m_wndDinner.SetEvent(WE_SELENDOK, _OnDinnerSelendokFnc);
	//m_wndDinner.SetEvent(WE_SETFOCUS, _OnDinnerSetfocusFnc);
	//m_wndDinner.SetEvent(WE_KILLFOCUS, _OnDinnerKillfocusFnc);
	m_wndDinner.SetEvent(WE_SELCHANGE, _OnDinnerSelectChangeFnc);
	m_wndDinner.SetEvent(WE_LOADDATA, _OnDinnerLoadDataFnc);
	//m_wndDinner.SetEvent(WE_ADDNEW, _OnDinnerAddNewFnc);
	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	SetMode(VM_EDIT);
}
void CHMSFoodModifyItemDialog_EM::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndLight.GetDlgCtrlID(), m_szLightKey);
	DDX_TextEx(pDX, m_wndLunch.GetDlgCtrlID(), m_szLunchKey);
	DDX_TextEx(pDX, m_wndDinner.GetDlgCtrlID(), m_szDinnerKey);
	DDX_Check(pDX, m_wndLevel.GetDlgCtrlID(), m_bLevel);
}
void CHMSFoodModifyItemDialog_EM::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSFoodModifyItemDialog_EM::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSFoodModifyItemDialog_EM::SetDefaultValues(){

	m_szLightKey.Empty();
	m_szLunchKey.Empty();
	m_szDinnerKey.Empty();

}
int CHMSFoodModifyItemDialog_EM::SetMode(int nMode){
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
		//m_wndLight.EnableWindow(false);
 		UpdateData(FALSE);
 		return nOldMode;
}
void CHMSFoodModifyItemDialog_EM::OnLightSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSFoodModifyItemDialog_EM::OnLightSelendok(){
	 
}
/*void CHMSFoodModifyItemDialog_EM::OnLightSetfocus(){
	
}*/
/*void CHMSFoodModifyItemDialog_EM::OnLightKillfocus(){
	
}*/
long CHMSFoodModifyItemDialog_EM::OnLightLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndLight.IsSearchKey() && !m_szLightKey.IsEmpty()){
		szWhere.Format(_T(" AND hfl_feeid='%s' "), m_szLightKey);
	};
	//_msg(_T("%d"), m_bHaucan);
	if(m_bHaucan)
	{
		szWhere.AppendFormat(_T(" and NVL(hfl_deptid,'XX') = 'HCKT' and hfl_index2='sang' "));
	}
	else
	{
		if(pMF->m_szDept == _T("A16")){		
			szWhere.AppendFormat(_T(" and hfl_feeid IN('FF000132', 'FF000189','FF000207','FF000220','FF000221','FF000222','FF000474', 'FF000475', 'FF0001205', 'FF0001206', 'FF0001207', 'FF0030008', 'FF0030009', 'FF0030010') "));
		}
		else
			szWhere.AppendFormat(_T(" and hfl_feeid IN('FF000132','FF000220','FF000221','FF000222','FF000474', 'FF000475', 'FF0001035', 'FF0001036', 'FF0001205', 'FF0001206', 'FF0001207', 'FF0030008', 'FF0030009', 'FF0030010') "));


		szWhere.AppendFormat(_T(" AND hfl_name2 NOT IN (%s)"), m_szSkipName2);

		szWhere.AppendFormat(_T(" and NVL(hfl_deptid,'XX') <> 'PTTYC' "));
	}
	
	m_wndLight.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T(" SELECT  hfl_name2 as id,") \
	_T(" 	hfl_feeid as itemid, ") \
	_T(" 	hfl_name as name, ") \
	_T(" 	hfl_unit as unit, ") \
	_T(" 	hfl_servprice as unitprice,") \
	_T(" 	hfl_groupid as groupid, ") \
	_T(" 	hfl_typeid as typeid ") \
	_T(" FROM hms_fee_list ") \
	_T(" WHERE hfl_typeid = 'F' and hfl_groupid = 'FF000' and hfl_active='Y' and nvl(hfl_subgroup,'N') <> 'NN' %s ") \
	_T(" ORDER BY name, unit, unitprice "), szWhere );
		nCount = rs.ExecSQL(szSQL);
	_tprintf(_T("%s"), szSQL);

	while(!rs.IsEOF()){ 
		m_wndLight.AddItems(
			rs.GetValue(_T("itemid")),
			rs.GetValue(_T("id")),			
			rs.GetValue(_T("name")), 
			rs.GetValue(_T("unit")), 
			rs.GetValue(_T("unitprice")), 
			rs.GetValue(_T("groupid")), 
			
			NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CHMSFoodModifyItemDialog_EM::OnLightAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */

void CHMSFoodModifyItemDialog_EM::OnLunchSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSFoodModifyItemDialog_EM::OnLunchSelendok(){
	 
}
/*void CHMSFoodModifyItemDialog_EM::OnLunchSetfocus(){
	
}*/
/*void CHMSFoodModifyItemDialog_EM::OnLunchKillfocus(){
	
}*/
long CHMSFoodModifyItemDialog_EM::OnLunchLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndLunch.IsSearchKey() && !m_szLunchKey.IsEmpty()){
		szWhere.Format(_T(" AND hfl_feeid='%s' "), m_szLunchKey);
	};
	
	m_wndLunch.DeleteAllItems(); 
	int nCount = 0;
	
	if(m_bHaucan)
	{
		szWhere.AppendFormat(_T(" and NVL(hfl_deptid,'XX') = 'HCKT'"));
	}
	
	szSQL.Format(_T(" SELECT  hfl_name2 as id,") \
	_T(" 	hfl_feeid as itemid, ") \
	_T(" 	hfl_name as name, ") \
	_T(" 	hfl_unit as unit, ") \
	_T(" 	hfl_servprice as unitprice,") \
	_T(" 	hfl_groupid as groupid, ") \
	_T(" 	hfl_typeid as typeid ") \
	_T(" FROM hms_fee_list ") \
	_T(" WHERE hfl_typeid = 'F' and hfl_groupid = 'FF000' and hfl_active='Y' and NVL(hfl_index2,'XXX') <> 'sang' %s ") \
	_T(" ORDER BY name, unit, unitprice "), szWhere );
		nCount = rs.ExecSQL(szSQL);
	_tprintf(_T("%s"), szSQL);

	while(!rs.IsEOF()){ 
		m_wndLunch.AddItems(
			rs.GetValue(_T("itemid")),
			rs.GetValue(_T("id")),			
			rs.GetValue(_T("name")), 
			rs.GetValue(_T("unit")), 
			rs.GetValue(_T("unitprice")), 
			rs.GetValue(_T("groupid")), 
			
			NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CHMSFoodModifyItemDialog_EM::OnLunchAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */

void CHMSFoodModifyItemDialog_EM::OnDinnerSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSFoodModifyItemDialog_EM::OnDinnerSelendok(){
	 
}
/*void CHMSFoodModifyItemDialog_EM::OnDinnerSetfocus(){
	
}*/
/*void CHMSFoodModifyItemDialog_EM::OnDinnerKillfocus(){
	
}*/
long CHMSFoodModifyItemDialog_EM::OnDinnerLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDinner.IsSearchKey() && !m_szDinnerKey.IsEmpty()){
		szWhere.Format(_T(" AND hfl_feeid='%s' "), m_szDinnerKey);
	};
	
	m_wndDinner.DeleteAllItems(); 
	int nCount = 0;
	if(m_bHaucan)
	{
		szWhere.AppendFormat(_T(" and NVL(hfl_deptid,'XX') = 'HCKT'"));
	}
	szSQL.Format(_T(" SELECT  hfl_name2 as id,") \
	_T(" 	hfl_feeid as itemid, ") \
	_T(" 	hfl_name as name, ") \
	_T(" 	hfl_unit as unit, ") \
	_T(" 	hfl_servprice as unitprice,") \
	_T(" 	hfl_groupid as groupid, ") \
	_T(" 	hfl_typeid as typeid ") \
	_T(" FROM hms_fee_list ") \
	_T(" WHERE hfl_typeid = 'F' and hfl_groupid = 'FF000' and hfl_active='Y' and NVL(hfl_index2,'XXX') <> 'sang' %s ") \
	_T(" ORDER BY name, unit, unitprice "), szWhere );
		nCount = rs.ExecSQL(szSQL);
	_tprintf(_T("%s"), szSQL);

_fmsg(_T("%s"), szSQL);
	while(!rs.IsEOF()){ 
		m_wndDinner.AddItems(
			rs.GetValue(_T("itemid")),
			rs.GetValue(_T("id")),
			rs.GetValue(_T("name")), 
			rs.GetValue(_T("unit")), 
			rs.GetValue(_T("unitprice")), 
			rs.GetValue(_T("groupid")), 
						
			NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CHMSFoodModifyItemDialog_EM::OnDinnerAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSFoodModifyItemDialog_EM::OnApplySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);

	m_szLightName = m_wndLight.GetCurrent(2);
	m_szLunchName = m_wndLunch.GetCurrent(2);
	m_szDinnerName = m_wndDinner.GetCurrent(2);
	m_nUnitPrice	= ToInt(m_wndLight.GetCurrent(4));
	m_nUnitPrice1	= ToInt(m_wndLunch.GetCurrent(4));
	m_nUnitPrice2	= ToInt(m_wndDinner.GetCurrent(4));
	m_bLevel		= ToInt(m_wndLunch.GetCurrent(5));

	UpdateData(FALSE);
	CGuiDialog::OnOK();
} 
void CHMSFoodModifyItemDialog_EM::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CHMSFoodModifyItemDialog_EM::OnAddHMSFoodModifyItemDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSFoodModifyItemDialog_EM::OnEditHMSFoodModifyItemDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSFoodModifyItemDialog_EM::OnDeleteHMSFoodModifyItemDialog(){
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
 		OnCancelHMSFoodModifyItemDialog();
 	}
	return 0;
}
int CHMSFoodModifyItemDialog_EM::OnSaveHMSFoodModifyItemDialog(){
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
 		//OnHMSFoodModifyItemDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSFoodModifyItemDialog_EM::OnCancelHMSFoodModifyItemDialog(){
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
int CHMSFoodModifyItemDialog_EM::OnHMSFoodModifyItemDialogListLoadData(){
	return 0;
}
