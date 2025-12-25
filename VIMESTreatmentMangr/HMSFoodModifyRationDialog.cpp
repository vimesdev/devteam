#include "HMSFoodModifyRationDialog.h"
#include "MainFrm.h"
static void _OnOldRationSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSFoodModifyRationDialog* )pWnd)->OnOldRationSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnOldRationSelendokFnc(CWnd *pWnd){
	((CHMSFoodModifyRationDialog *)pWnd)->OnOldRationSelendok();
}
/*static void _OnOldRationSetfocusFnc(CWnd *pWnd){
	((CHMSFoodModifyRationDialog *)pWnd)->OnOldRationKillfocus();
}*/
/*static void _OnOldRationKillfocusFnc(CWnd *pWnd){
	((CHMSFoodModifyRationDialog *)pWnd)->OnOldRationKillfocus();
}*/
static long _OnOldRationLoadDataFnc(CWnd *pWnd){
	return ((CHMSFoodModifyRationDialog *)pWnd)->OnOldRationLoadData();
}
/*static void _OnOldRationAddNewFnc(CWnd *pWnd){
	((CHMSFoodModifyRationDialog *)pWnd)->OnOldRationAddNew();
}*/
/*static void _OnOldRationQtyChangeFnc(CWnd *pWnd){
	((CHMSFoodModifyRationDialog *)pWnd)->OnOldRationQtyChange();
} */
/*static void _OnOldRationQtySetfocusFnc(CWnd *pWnd){
	((CHMSFoodModifyRationDialog *)pWnd)->OnOldRationQtySetfocus();} */ 
/*static void _OnOldRationQtyKillfocusFnc(CWnd *pWnd){
	((CHMSFoodModifyRationDialog *)pWnd)->OnOldRationQtyKillfocus();
} */
static int _OnOldRationQtyCheckValueFnc(CWnd *pWnd){
	return ((CHMSFoodModifyRationDialog *)pWnd)->OnOldRationQtyCheckValue();
} 
static void _OnNewRationSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSFoodModifyRationDialog* )pWnd)->OnNewRationSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnNewRationSelendokFnc(CWnd *pWnd){
	((CHMSFoodModifyRationDialog *)pWnd)->OnNewRationSelendok();
}
/*static void _OnNewRationSetfocusFnc(CWnd *pWnd){
	((CHMSFoodModifyRationDialog *)pWnd)->OnNewRationKillfocus();
}*/
/*static void _OnNewRationKillfocusFnc(CWnd *pWnd){
	((CHMSFoodModifyRationDialog *)pWnd)->OnNewRationKillfocus();
}*/
static long _OnNewRationLoadDataFnc(CWnd *pWnd){
	return ((CHMSFoodModifyRationDialog *)pWnd)->OnNewRationLoadData();
}
/*static void _OnNewRationAddNewFnc(CWnd *pWnd){
	((CHMSFoodModifyRationDialog *)pWnd)->OnNewRationAddNew();
}*/
/*static void _OnNewRationQtyChangeFnc(CWnd *pWnd){
	((CHMSFoodModifyRationDialog *)pWnd)->OnNewRationQtyChange();
} */
/*static void _OnNewRationQtySetfocusFnc(CWnd *pWnd){
	((CHMSFoodModifyRationDialog *)pWnd)->OnNewRationQtySetfocus();} */ 
/*static void _OnNewRationQtyKillfocusFnc(CWnd *pWnd){
	((CHMSFoodModifyRationDialog *)pWnd)->OnNewRationQtyKillfocus();
} */
static int _OnNewRationQtyCheckValueFnc(CWnd *pWnd){
	return ((CHMSFoodModifyRationDialog *)pWnd)->OnNewRationQtyCheckValue();
} 
static void _OnApplySelectFnc(CWnd *pWnd){
	CHMSFoodModifyRationDialog *pVw = (CHMSFoodModifyRationDialog *)pWnd;
	pVw->OnApplySelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSFoodModifyRationDialog *pVw = (CHMSFoodModifyRationDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddHMSFoodModifyRationDialogFnc(CWnd *pWnd){
	 return ((CHMSFoodModifyRationDialog*)pWnd)->OnAddHMSFoodModifyRationDialog();
} 
static int _OnEditHMSFoodModifyRationDialogFnc(CWnd *pWnd){
	 return ((CHMSFoodModifyRationDialog*)pWnd)->OnEditHMSFoodModifyRationDialog();
} 
static int _OnDeleteHMSFoodModifyRationDialogFnc(CWnd *pWnd){
	 return ((CHMSFoodModifyRationDialog*)pWnd)->OnDeleteHMSFoodModifyRationDialog();
} 
static int _OnSaveHMSFoodModifyRationDialogFnc(CWnd *pWnd){
	 return ((CHMSFoodModifyRationDialog*)pWnd)->OnSaveHMSFoodModifyRationDialog();
} 
static int _OnCancelHMSFoodModifyRationDialogFnc(CWnd *pWnd){
	 return ((CHMSFoodModifyRationDialog*)pWnd)->OnCancelHMSFoodModifyRationDialog();
} 
CHMSFoodModifyRationDialog::CHMSFoodModifyRationDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 610;
	m_nDlgHeight = 125;
	SetDefaultValues();
}
CHMSFoodModifyRationDialog::~CHMSFoodModifyRationDialog(){
}
void CHMSFoodModifyRationDialog::OnCreateComponents(){
	m_wndModifyRationInformation.Create(this, _T("Modify Ration  Information"), 5, 5, 605, 90);
	m_wndOldRationLabel.Create(this, _T("OldRation"), 10, 30, 90, 55);
	m_wndOldRation.Create(this,95, 30, 450, 55); 
	m_wndOldRationQtyLabel.Create(this, _T("Qty"), 455, 30, 525, 55);
	m_wndOldRationQty.Create(this,530, 30, 600, 55); 
	m_wndNewRationLabel.Create(this, _T("NewRation"), 10, 60, 90, 85);
	m_wndNewRation.Create(this,95, 60, 450, 85); 
	m_wndNewRationQtyLabel.Create(this, _T("Qty"), 455, 60, 525, 85);
	m_wndNewRationQty.Create(this,530, 60, 600, 85); 
	m_wndApply.Create(this, _T("&Apply"), 441, 95, 521, 120);
	m_wndCancel.Create(this, _T("&Cancel"), 526, 95, 606, 120);

}
void CHMSFoodModifyRationDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndOldRation.SetCheckValue(true);
	m_wndOldRation.LimitText(35);
	m_wndOldRationQty.SetLimitText(16);
	m_wndOldRationQty.SetCheckValue(true);
	m_wndNewRation.SetCheckValue(true);
	m_wndNewRation.LimitText(35);
	m_wndNewRationQty.SetLimitText(16);
	m_wndNewRationQty.SetCheckValue(true);


	m_wndOldRation.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndOldRation.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndNewRation.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndNewRation.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CHMSFoodModifyRationDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndOldRation.SetEvent(WE_SELENDOK, _OnOldRationSelendokFnc);
	//m_wndOldRation.SetEvent(WE_SETFOCUS, _OnOldRationSetfocusFnc);
	//m_wndOldRation.SetEvent(WE_KILLFOCUS, _OnOldRationKillfocusFnc);
	m_wndOldRation.SetEvent(WE_SELCHANGE, _OnOldRationSelectChangeFnc);
	m_wndOldRation.SetEvent(WE_LOADDATA, _OnOldRationLoadDataFnc);
	//m_wndOldRation.SetEvent(WE_ADDNEW, _OnOldRationAddNewFnc);
	//m_wndOldRationQty.SetEvent(WE_CHANGE, _OnOldRationQtyChangeFnc);
	//m_wndOldRationQty.SetEvent(WE_SETFOCUS, _OnOldRationQtySetfocusFnc);
	//m_wndOldRationQty.SetEvent(WE_KILLFOCUS, _OnOldRationQtyKillfocusFnc);
	m_wndOldRationQty.SetEvent(WE_CHECKVALUE, _OnOldRationQtyCheckValueFnc);
	m_wndNewRation.SetEvent(WE_SELENDOK, _OnNewRationSelendokFnc);
	//m_wndNewRation.SetEvent(WE_SETFOCUS, _OnNewRationSetfocusFnc);
	//m_wndNewRation.SetEvent(WE_KILLFOCUS, _OnNewRationKillfocusFnc);
	m_wndNewRation.SetEvent(WE_SELCHANGE, _OnNewRationSelectChangeFnc);
	m_wndNewRation.SetEvent(WE_LOADDATA, _OnNewRationLoadDataFnc);
	//m_wndNewRation.SetEvent(WE_ADDNEW, _OnNewRationAddNewFnc);
	//m_wndNewRationQty.SetEvent(WE_CHANGE, _OnNewRationQtyChangeFnc);
	//m_wndNewRationQty.SetEvent(WE_SETFOCUS, _OnNewRationQtySetfocusFnc);
	//m_wndNewRationQty.SetEvent(WE_KILLFOCUS, _OnNewRationQtyKillfocusFnc);
	m_wndNewRationQty.SetEvent(WE_CHECKVALUE, _OnNewRationQtyCheckValueFnc);
	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	SetMode(VM_NONE);

}
void CHMSFoodModifyRationDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndOldRation.GetDlgCtrlID(), m_szOldRationKey);
	DDX_Text(pDX, m_wndOldRationQty.GetDlgCtrlID(), m_nOldRationQty);
	DDX_TextEx(pDX, m_wndNewRation.GetDlgCtrlID(), m_szNewRationKey);
	DDX_Text(pDX, m_wndNewRationQty.GetDlgCtrlID(), m_nNewRationQty);

}
void CHMSFoodModifyRationDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSFoodModifyRationDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSFoodModifyRationDialog::SetDefaultValues(){

	m_szOldRationKey.Empty();
	m_nOldRationQty=0;
	m_szNewRationKey.Empty();
	m_nNewRationQty=0;

}
int CHMSFoodModifyRationDialog::SetMode(int nMode){
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
void CHMSFoodModifyRationDialog::OnOldRationSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSFoodModifyRationDialog::OnOldRationSelendok(){
	 
}
/*void CHMSFoodModifyRationDialog::OnOldRationSetfocus(){
	
}*/
/*void CHMSFoodModifyRationDialog::OnOldRationKillfocus(){
	
}*/
long CHMSFoodModifyRationDialog::OnOldRationLoadData(){
CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndOldRation.IsSearchKey() && !m_szOldRationKey.IsEmpty()){
		szWhere.Format(_T(" AND hfl_feeid='%s' "), m_szOldRationKey);
	};
	
	m_wndOldRation.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T(" SELECT  hfl_name2 as id,") \
_T(" 	hfl_feeid as itemid, ") \
_T(" 	hfl_name as name, ") \
_T(" 	hfl_unit as unit, ") \
_T(" 	hfl_servprice as unitprice,") \
_T(" 	hfl_groupid as groupid, ") \
_T(" 	hfl_typeid as typeid ") \
_T(" FROM hms_fee_list ") \
_T(" WHERE hfl_typeid = 'F' and hfl_groupid = 'FF000' and hfl_active='Y' %s ") \
_T(" ORDER BY name, unit, unitprice "), szWhere );
	nCount = rs.ExecSQL(szSQL);
_tprintf(_T("%s"), szSQL);

	while(!rs.IsEOF()){ 
		m_wndOldRation.AddItems(
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
/*void CHMSFoodModifyRationDialog::OnOldRationAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSFoodModifyRationDialog::OnOldRationQtyChange(){
	
} */
/*void CHMSFoodModifyRationDialog::OnOldRationQtySetfocus(){
	
} */
/*void CHMSFoodModifyRationDialog::OnOldRationQtyKillfocus(){
	
} */
int CHMSFoodModifyRationDialog::OnOldRationQtyCheckValue(){
	return 0;
} 
void CHMSFoodModifyRationDialog::OnNewRationSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSFoodModifyRationDialog::OnNewRationSelendok(){
	 
}
/*void CHMSFoodModifyRationDialog::OnNewRationSetfocus(){
	
}*/
/*void CHMSFoodModifyRationDialog::OnNewRationKillfocus(){
	
}*/
long CHMSFoodModifyRationDialog::OnNewRationLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndNewRation.IsSearchKey() && !m_szNewRationKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szNewRationKey
};
	m_wndNewRation.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndNewRation.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSFoodModifyRationDialog::OnNewRationAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSFoodModifyRationDialog::OnNewRationQtyChange(){
	
} */
/*void CHMSFoodModifyRationDialog::OnNewRationQtySetfocus(){
	
} */
/*void CHMSFoodModifyRationDialog::OnNewRationQtyKillfocus(){
	
} */
int CHMSFoodModifyRationDialog::OnNewRationQtyCheckValue(){
	return 0;
} 
void CHMSFoodModifyRationDialog::OnApplySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSFoodModifyRationDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSFoodModifyRationDialog::OnAddHMSFoodModifyRationDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSFoodModifyRationDialog::OnEditHMSFoodModifyRationDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSFoodModifyRationDialog::OnDeleteHMSFoodModifyRationDialog(){
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
 		OnCancelHMSFoodModifyRationDialog();
 	}
	return 0;
}
int CHMSFoodModifyRationDialog::OnSaveHMSFoodModifyRationDialog(){
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
 		//OnHMSFoodModifyRationDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSFoodModifyRationDialog::OnCancelHMSFoodModifyRationDialog(){
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
int CHMSFoodModifyRationDialog::OnHMSFoodModifyRationDialogListLoadData(){
	return 0;
}
