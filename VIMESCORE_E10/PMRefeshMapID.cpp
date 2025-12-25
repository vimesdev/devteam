#include "PMRefeshMapID.h"
#include "MainFrame_E10.h"
/*static void _OnProduct_itemIDChangeFnc(CWnd *pWnd){
	((CPMRefeshMapID *)pWnd)->OnProduct_itemIDChange();
} */
/*static void _OnProduct_itemIDSetfocusFnc(CWnd *pWnd){
	((CPMRefeshMapID *)pWnd)->OnProduct_itemIDSetfocus();} */ 
/*static void _OnProduct_itemIDKillfocusFnc(CWnd *pWnd){
	((CPMRefeshMapID *)pWnd)->OnProduct_itemIDKillfocus();
} */
static int _OnProduct_itemIDCheckValueFnc(CWnd *pWnd){
	return ((CPMRefeshMapID *)pWnd)->OnProduct_itemIDCheckValue();
} 
/*static void _OnDrugNameChangeFnc(CWnd *pWnd){
	((CPMRefeshMapID *)pWnd)->OnDrugNameChange();
} */
/*static void _OnDrugNameSetfocusFnc(CWnd *pWnd){
	((CPMRefeshMapID *)pWnd)->OnDrugNameSetfocus();} */ 
/*static void _OnDrugNameKillfocusFnc(CWnd *pWnd){
	((CPMRefeshMapID *)pWnd)->OnDrugNameKillfocus();
} */
static int _OnDrugNameCheckValueFnc(CWnd *pWnd){
	return ((CPMRefeshMapID *)pWnd)->OnDrugNameCheckValue();
} 
/*static void _OnMapNameChangeFnc(CWnd *pWnd){
	((CPMRefeshMapID *)pWnd)->OnMapNameChange();
} */
/*static void _OnMapNameSetfocusFnc(CWnd *pWnd){
	((CPMRefeshMapID *)pWnd)->OnMapNameSetfocus();} */ 
/*static void _OnMapNameKillfocusFnc(CWnd *pWnd){
	((CPMRefeshMapID *)pWnd)->OnMapNameKillfocus();
} */
static int _OnMapNameCheckValueFnc(CWnd *pWnd){
	return ((CPMRefeshMapID *)pWnd)->OnMapNameCheckValue();
} 
static void _OnUpdateSelectFnc(CWnd *pWnd){
	CPMRefeshMapID *pVw = (CPMRefeshMapID *)pWnd;
	pVw->OnUpdateSelect();
} 
static int _OnAddPMRefeshMapIDFnc(CWnd *pWnd){
	 return ((CPMRefeshMapID*)pWnd)->OnAddPMRefeshMapID();
} 
static int _OnEditPMRefeshMapIDFnc(CWnd *pWnd){
	 return ((CPMRefeshMapID*)pWnd)->OnEditPMRefeshMapID();
} 
static int _OnDeletePMRefeshMapIDFnc(CWnd *pWnd){
	 return ((CPMRefeshMapID*)pWnd)->OnDeletePMRefeshMapID();
} 
static int _OnSavePMRefeshMapIDFnc(CWnd *pWnd){
	 return ((CPMRefeshMapID*)pWnd)->OnSavePMRefeshMapID();
} 
static int _OnCancelPMRefeshMapIDFnc(CWnd *pWnd){
	 return ((CPMRefeshMapID*)pWnd)->OnCancelPMRefeshMapID();
} 
CPMRefeshMapID::CPMRefeshMapID(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 415;
	m_nDlgHeight = 130;
	SetDefaultValues();
}
CPMRefeshMapID::~CPMRefeshMapID(){
}
void CPMRefeshMapID::OnCreateComponents(){
	m_wndProduct_item_idLabel.Create(this, _T("Product_item"), 5, 5, 85, 30);
	m_wndProduct_itemID.Create(this,90, 5, 170, 30); 
	m_wndDrugNameLabel.Create(this, _T("Drug Name"), 5, 35, 85, 60);
	m_wndDrugName.Create(this,90, 35, 405, 60); 
	m_wndMapNameLabel.Create(this, _T("Map Name"), 5, 65, 85, 90);
	m_wndMapName.Create(this,90, 65, 405, 90); 
	m_wndUpdate.Create(this, _T("&Update"), 325, 95, 405, 120);

}
void CPMRefeshMapID::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndProduct_itemID.SetLimitText(16);
	m_wndProduct_itemID.SetCheckValue(true);
	m_wndDrugName.SetLimitText(35);
	m_wndDrugName.SetCheckValue(true);
	m_wndMapName.SetLimitText(35);
	m_wndMapName.SetCheckValue(true);

}
void CPMRefeshMapID::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//m_wndProduct_itemID.SetEvent(WE_CHANGE, _OnProduct_itemIDChangeFnc);
	//m_wndProduct_itemID.SetEvent(WE_SETFOCUS, _OnProduct_itemIDSetfocusFnc);
	//m_wndProduct_itemID.SetEvent(WE_KILLFOCUS, _OnProduct_itemIDKillfocusFnc);
	m_wndProduct_itemID.SetEvent(WE_CHECKVALUE, _OnProduct_itemIDCheckValueFnc);
	//m_wndDrugName.SetEvent(WE_CHANGE, _OnDrugNameChangeFnc);
	//m_wndDrugName.SetEvent(WE_SETFOCUS, _OnDrugNameSetfocusFnc);
	//m_wndDrugName.SetEvent(WE_KILLFOCUS, _OnDrugNameKillfocusFnc);
	m_wndDrugName.SetEvent(WE_CHECKVALUE, _OnDrugNameCheckValueFnc);
	//m_wndMapName.SetEvent(WE_CHANGE, _OnMapNameChangeFnc);
	//m_wndMapName.SetEvent(WE_SETFOCUS, _OnMapNameSetfocusFnc);
	//m_wndMapName.SetEvent(WE_KILLFOCUS, _OnMapNameKillfocusFnc);
	m_wndMapName.SetEvent(WE_CHECKVALUE, _OnMapNameCheckValueFnc);
	m_wndUpdate.SetEvent(WE_CLICK, _OnUpdateSelectFnc);
	SetMode(VM_VIEW);

}
void CPMRefeshMapID::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndProduct_itemID.GetDlgCtrlID(), m_nProduct_itemID);
	DDX_Text(pDX, m_wndDrugName.GetDlgCtrlID(), m_szDrugName);
	DDX_Text(pDX, m_wndMapName.GetDlgCtrlID(), m_szMapName);

}
void CPMRefeshMapID::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Product_itemID")] =  m_nProduct_itemID;
	m_jData[_T("DrugName")] =  m_szDrugName;
	m_jData[_T("MapName")] =  m_szMapName;
	}
	else
	{
			
	m_jData[_T("Product_itemID")].GetValue(m_nProduct_itemID);
	m_jData[_T("DrugName")].GetValue(m_szDrugName);
	m_jData[_T("MapName")].GetValue(m_szMapName);
	}

}
void CPMRefeshMapID::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM m_product_item ") \
				_T("			LEFT JOIN m_product ON (mp_product_id= mpi_product_id) ") \
				_T("			LEFT JOIN m_product_extra_info ON (mpei_id= mpi_productextra_id) ") \
				_T("			WHERE  mpi_product_item_id= %ld  "), m_nProduct_itemID  );

	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("mp_name"), m_szDrugName);
		rs.GetValue(_T("mpei_ten_thuoc"), m_szMapName);
		UpdateData(false);
	}

}
void CPMRefeshMapID::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CPMRefeshMapID::SetDefaultValues(){

	m_nProduct_itemID=0;
	m_szDrugName.Empty();
	m_szMapName.Empty();

}
int CPMRefeshMapID::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
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
		m_wndUpdate.EnableWindow(true);
		m_wndProduct_itemID.EnableWindow(true);
 		UpdateData(FALSE);
 		return nOldMode;
}
/*void CPMRefeshMapID::OnProduct_itemIDChange(){
	
} */
/*void CPMRefeshMapID::OnProduct_itemIDSetfocus(){
	
} */
/*void CPMRefeshMapID::OnProduct_itemIDKillfocus(){
	
} */
int CPMRefeshMapID::OnProduct_itemIDCheckValue(){
	GetDataToScreen();
	return 0;
} 
/*void CPMRefeshMapID::OnDrugNameChange(){
	
} */
/*void CPMRefeshMapID::OnDrugNameSetfocus(){
	
} */
/*void CPMRefeshMapID::OnDrugNameKillfocus(){
	
} */
int CPMRefeshMapID::OnDrugNameCheckValue(){
	return 0;
} 
/*void CPMRefeshMapID::OnMapNameChange(){
	
} */
/*void CPMRefeshMapID::OnMapNameSetfocus(){
	
} */
/*void CPMRefeshMapID::OnMapNameKillfocus(){
	
} */
int CPMRefeshMapID::OnMapNameCheckValue(){
	return 0;
} 
void CPMRefeshMapID::OnUpdateSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	if (m_nProduct_itemID <=0)
		return;

	szSQL.Format(_T("Update m_product_item  set mpi_productextra_id=0 where mpi_product_item_id= %ld"), m_nProduct_itemID);
	int nCount = pMF->ExecSQL(szSQL);
	if (nCount <= 0 )
		_msg(_T("Update ko thanh cong"));

	
} 
int CPMRefeshMapID::OnAddPMRefeshMapID(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CPMRefeshMapID::OnEditPMRefeshMapID(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CPMRefeshMapID::OnDeletePMRefeshMapID(){
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
 		OnCancelPMRefeshMapID();
 	}
	return 0;
}
int CPMRefeshMapID::OnSavePMRefeshMapID(){
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
 		//OnPMRefeshMapIDListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CPMRefeshMapID::OnCancelPMRefeshMapID(){
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
int CPMRefeshMapID::OnPMRefeshMapIDListLoadData(){
	return 0;
}
