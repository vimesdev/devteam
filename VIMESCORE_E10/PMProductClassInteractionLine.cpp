#include "PMProductClassInteractionLine.h"
#include "MainFrame_E10.h"
#include "ProductClassICD10Dialog.h"
static void _OnFeeIDSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPMProductClassInteractionLine* )pWnd)->OnFeeIDSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnFeeIDSelendokFnc(CWnd *pWnd){
	((CPMProductClassInteractionLine *)pWnd)->OnFeeIDSelendok();
}
/*static void _OnFeeIDSetfocusFnc(CWnd *pWnd){
	((CPMProductClassInteractionLine *)pWnd)->OnFeeIDKillfocus();
}*/
/*static void _OnFeeIDKillfocusFnc(CWnd *pWnd){
	((CPMProductClassInteractionLine *)pWnd)->OnFeeIDKillfocus();
}*/
static long _OnFeeIDLoadDataFnc(CWnd *pWnd){
	return ((CPMProductClassInteractionLine *)pWnd)->OnFeeIDLoadData();
}
/*static void _OnFeeIDAddNewFnc(CWnd *pWnd){
	((CPMProductClassInteractionLine *)pWnd)->OnFeeIDAddNew();
}*/
static void _OnCondisionSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPMProductClassInteractionLine* )pWnd)->OnCondisionSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnCondisionSelendokFnc(CWnd *pWnd){
	((CPMProductClassInteractionLine *)pWnd)->OnCondisionSelendok();
}
/*static void _OnCondisionSetfocusFnc(CWnd *pWnd){
	((CPMProductClassInteractionLine *)pWnd)->OnCondisionKillfocus();
}*/
/*static void _OnCondisionKillfocusFnc(CWnd *pWnd){
	((CPMProductClassInteractionLine *)pWnd)->OnCondisionKillfocus();
}*/
static long _OnCondisionLoadDataFnc(CWnd *pWnd){
	return ((CPMProductClassInteractionLine *)pWnd)->OnCondisionLoadData();
}
/*static void _OnCondisionAddNewFnc(CWnd *pWnd){
	((CPMProductClassInteractionLine *)pWnd)->OnCondisionAddNew();
}*/
/*static void _OnValueChangeFnc(CWnd *pWnd){
	((CPMProductClassInteractionLine *)pWnd)->OnValueChange();
} */
/*static void _OnValueSetfocusFnc(CWnd *pWnd){
	((CPMProductClassInteractionLine *)pWnd)->OnValueSetfocus();} */ 
/*static void _OnValueKillfocusFnc(CWnd *pWnd){
	((CPMProductClassInteractionLine *)pWnd)->OnValueKillfocus();
} */
static int _OnValueCheckValueFnc(CWnd *pWnd){
	return ((CPMProductClassInteractionLine *)pWnd)->OnValueCheckValue();
} 

static int _OnValue2CheckValueFnc(CWnd *pWnd){
	return ((CPMProductClassInteractionLine *)pWnd)->OnValue2CheckValue();
} 
/*static void _OnUnitChangeFnc(CWnd *pWnd){
	((CPMProductClassInteractionLine *)pWnd)->OnUnitChange();
} */
/*static void _OnUnitSetfocusFnc(CWnd *pWnd){
	((CPMProductClassInteractionLine *)pWnd)->OnUnitSetfocus();} */ 
/*static void _OnUnitKillfocusFnc(CWnd *pWnd){
	((CPMProductClassInteractionLine *)pWnd)->OnUnitKillfocus();
} */
static int _OnUnitCheckValueFnc(CWnd *pWnd){
	return ((CPMProductClassInteractionLine *)pWnd)->OnUnitCheckValue();
} 
/*static void _OnDescChangeFnc(CWnd *pWnd){
	((CPMProductClassInteractionLine *)pWnd)->OnDescChange();
} */
/*static void _OnDescSetfocusFnc(CWnd *pWnd){
	((CPMProductClassInteractionLine *)pWnd)->OnDescSetfocus();} */ 
/*static void _OnDescKillfocusFnc(CWnd *pWnd){
	((CPMProductClassInteractionLine *)pWnd)->OnDescKillfocus();
} */
static int _OnDescCheckValueFnc(CWnd *pWnd){
	return ((CPMProductClassInteractionLine *)pWnd)->OnDescCheckValue();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CPMProductClassInteractionLine *pVw = (CPMProductClassInteractionLine *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CPMProductClassInteractionLine *pVw = (CPMProductClassInteractionLine *)pWnd;
	pVw->OnCloseSelect();
} 
														static void _OnShowWarningSelectFnc(CWnd *pWnd){
	 ((CPMProductClassInteractionLine*)pWnd)->OnShowWarningSelect();
}		 
static int _OnAddPMProductClassInteractionLineFnc(CWnd *pWnd){
	 return ((CPMProductClassInteractionLine*)pWnd)->OnAddPMProductClassInteractionLine();
} 
static int _OnEditPMProductClassInteractionLineFnc(CWnd *pWnd){
	 return ((CPMProductClassInteractionLine*)pWnd)->OnEditPMProductClassInteractionLine();
} 
static int _OnDeletePMProductClassInteractionLineFnc(CWnd *pWnd){
	 return ((CPMProductClassInteractionLine*)pWnd)->OnDeletePMProductClassInteractionLine();
} 
static int _OnSavePMProductClassInteractionLineFnc(CWnd *pWnd){
	 return ((CPMProductClassInteractionLine*)pWnd)->OnSavePMProductClassInteractionLine();
} 
static int _OnCancelPMProductClassInteractionLineFnc(CWnd *pWnd){
	 return ((CPMProductClassInteractionLine*)pWnd)->OnCancelPMProductClassInteractionLine();
} 
CPMProductClassInteractionLine::CPMProductClassInteractionLine(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CPMProductClassInteractionLine::~CPMProductClassInteractionLine(){
}
void CPMProductClassInteractionLine::OnCreateComponents(){
	m_wndgrpthietla.Create(this, _T("Thiết lập điều kiện tương tác"), 5, 5, 615, 200);
	m_wndFeeIDLabel.Create(this, _T("Mục phí"), 10, 30, 105, 55);
	m_wndFeeID.Create(this,110, 30, 610, 55); 
	m_wndCondisionLabel.Create(this, _T("Conditions"), 10, 60, 105, 85);
	m_wndCondision.Create(this,110, 60, 230, 85); 
	m_wndValueLabel.Create(this, _T("Value"), 235, 60, 315, 85);
	m_wndValue.Create(this,320, 60, 380, 85);
	m_wndLink.Create(this, _T("-"), 385, 60, 395, 85);
	m_wndValue2.Create(this,400, 60, 460, 85); 
	m_wndUnitLabel.Create(this, _T("Unit"), 465, 60, 530, 85);
	m_wndUnit.Create(this,535, 59, 610, 84); 

	m_wndDescLabel.Create(this, _T("Desc"), 10, 115, 105, 140);
	m_wndDesc.Create(this,110, 90, 610, 165, 1, 0, 1); 

	m_wndAdd.Create(this, _T("Save"), 450, 205, 530, 230);
	m_wndClose.Create(this, _T("Close"), 535, 205, 615, 230);
	m_wndShowWarning.Create(this, _T("Show Warning"), 10, 170, 150, 195);
	
}
void CPMProductClassInteractionLine::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//m_wndFeeID.SetCheckValue(true);
	m_wndFeeID.LimitText(35);
	//m_wndCondision.SetCheckValue(true);
	m_wndCondision.LimitText(35);
	m_wndValue.SetLimitText(16);
	//m_wndValue.SetCheckValue(true);
	//m_wndUnit.SetLimitText(35);
	//m_wndUnit.SetCheckValue(true);
	m_wndDesc.SetLimitText(2000);
	m_wndDesc.SetCheckValue(true);


	m_wndFeeID.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndFeeID.InsertColumn(1, _T("Name"), CFMT_TEXT, 300);


	m_wndCondision.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndCondision.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);
	m_tblLine.SetTableName(_T("m_product_class_interactionln"));
	m_tblLine.AddField(_T("mpcil_class_id"),dfLong);
	m_tblLine.AddField(_T("mpcil_icd"),dfText,7);
	m_tblLine.AddField(_T("mpcil_feeid"),dfText,15);
	m_tblLine.AddField(_T("mpcil_condision"),dfText,2);
	m_tblLine.AddField(_T("mpcil_value"),dfFloat);
	m_tblLine.AddField(_T("mpcil_value2"),dfFloat);
	m_tblLine.AddField(_T("mpcil_unit"),dfText,24);
	m_tblLine.AddField(_T("mpcil_desc"),dfText,254);
	m_tblLine.AddField(_T("mpcil_isactivewarning"),dfText,1);

}
void CPMProductClassInteractionLine::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndFeeID.SetEvent(WE_SELENDOK, _OnFeeIDSelendokFnc);
	//m_wndFeeID.SetEvent(WE_SETFOCUS, _OnFeeIDSetfocusFnc);
	//m_wndFeeID.SetEvent(WE_KILLFOCUS, _OnFeeIDKillfocusFnc);
	m_wndFeeID.SetEvent(WE_SELCHANGE, _OnFeeIDSelectChangeFnc);
	m_wndFeeID.SetEvent(WE_LOADDATA, _OnFeeIDLoadDataFnc);
	//m_wndFeeID.SetEvent(WE_ADDNEW, _OnFeeIDAddNewFnc);
	m_wndCondision.SetEvent(WE_SELENDOK, _OnCondisionSelendokFnc);
	//m_wndCondision.SetEvent(WE_SETFOCUS, _OnCondisionSetfocusFnc);
	//m_wndCondision.SetEvent(WE_KILLFOCUS, _OnCondisionKillfocusFnc);
	m_wndCondision.SetEvent(WE_SELCHANGE, _OnCondisionSelectChangeFnc);
	m_wndCondision.SetEvent(WE_LOADDATA, _OnCondisionLoadDataFnc);
	//m_wndCondision.SetEvent(WE_ADDNEW, _OnCondisionAddNewFnc);
	//m_wndValue.SetEvent(WE_CHANGE, _OnValueChangeFnc);
	//m_wndValue.SetEvent(WE_SETFOCUS, _OnValueSetfocusFnc);
	//m_wndValue.SetEvent(WE_KILLFOCUS, _OnValueKillfocusFnc);
	m_wndValue.SetEvent(WE_CHECKVALUE, _OnValueCheckValueFnc);
	m_wndValue2.SetEvent(WE_CHECKVALUE, _OnValue2CheckValueFnc);
	//m_wndUnit.SetEvent(WE_CHANGE, _OnUnitChangeFnc);
	//m_wndUnit.SetEvent(WE_SETFOCUS, _OnUnitSetfocusFnc);
	//m_wndUnit.SetEvent(WE_KILLFOCUS, _OnUnitKillfocusFnc);
	m_wndUnit.SetEvent(WE_CHECKVALUE, _OnUnitCheckValueFnc);
	//m_wndDesc.SetEvent(WE_CHANGE, _OnDescChangeFnc);
	//m_wndDesc.SetEvent(WE_SETFOCUS, _OnDescSetfocusFnc);
	//m_wndDesc.SetEvent(WE_KILLFOCUS, _OnDescKillfocusFnc);
	m_wndDesc.SetEvent(WE_CHECKVALUE, _OnDescCheckValueFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndShowWarning.SetEvent(WE_CLICK, _OnShowWarningSelectFnc);																				  
	SetMode(VM_ADD);
	GetDataToScreen();
}
void CPMProductClassInteractionLine::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFeeID.GetDlgCtrlID(), m_szFeeIDKey);
	DDX_TextEx(pDX, m_wndCondision.GetDlgCtrlID(), m_szCondisionKey);
	DDX_Text(pDX, m_wndValue.GetDlgCtrlID(), m_nValue);
	DDX_Text(pDX, m_wndValue2.GetDlgCtrlID(), m_nValue2);
	DDX_Text(pDX, m_wndUnit.GetDlgCtrlID(), m_szUnit);
	DDX_Text(pDX, m_wndDesc.GetDlgCtrlID(), m_szDesc);
	DDX_Check(pDX, m_wndShowWarning.GetDlgCtrlID(), m_bShowWarning);													  

}
void CPMProductClassInteractionLine::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("FeeID")] =  m_szFeeIDKey;
	m_jData[_T("Condision")] =  m_szCondisionKey;
	m_jData[_T("Value")] =  m_nValue;
	m_jData[_T("Unit")] =  m_szUnit;
	m_jData[_T("Desc")] =  m_szDesc;
	}
	else
	{
			
	m_jData[_T("FeeID")].GetValue(m_szFeeIDKey);
	m_jData[_T("Condision")].GetValue(m_szCondisionKey);
	m_jData[_T("Value")].GetValue(m_nValue);
	m_jData[_T("Unit")].GetValue(m_szUnit);
	m_jData[_T("Desc")].GetValue(m_szDesc);
	}

}
void CPMProductClassInteractionLine::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr;
	szSQL.Format(_T("SELECT * FROM M_PRODUCT_CLASS_INTERACTIONLN ") \
				_T(" where MPCIL_CLASS_ID = %ld")
				_T(" ORDER BY mpcil_id"),
				m_nClassID);
	rs.ExecSQL(szSQL);
	if (!rs.IsEOF())
	{
		rs.GetValue(_T("mpcil_feeid"), m_szFeeIDKey);
		rs.GetValue(_T("mpcil_condision"), m_szCondisionKey);
		rs.GetValue(_T("mpcil_value"), m_nValue);
		rs.GetValue(_T("mpcil_value2"), m_nValue2);
		rs.GetValue(_T("mpcil_unit"), m_szUnit);
		rs.GetValue(_T("mpcil_desc"), m_szDesc);
		rs.GetValue(_T("mpcil_id"), m_nID);
		rs.GetValue(_T("mpcil_isactivewarning"), tmpStr);
		m_bShowWarning = tmpStr==_T("Y")?true:false;
		SetMode(VM_EDIT);
	}
}
void CPMProductClassInteractionLine::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

	m_tblLine.SetValue(_T("mpcil_class_id"),m_nClassID);
	m_tblLine.SetValue(_T("mpcil_icd"),m_szICD);
	m_tblLine.SetValue(_T("mpcil_feeid"),m_szFeeIDKey);
	m_tblLine.SetValue(_T("mpcil_condision"),m_szCondisionKey);
	m_tblLine.SetValue(_T("mpcil_value"),m_nValue);
	m_tblLine.SetValue(_T("mpcil_value2"),m_nValue2);
	m_tblLine.SetValue(_T("mpcil_unit"),m_szUnit);
	m_tblLine.SetValue(_T("mpcil_desc"),m_szDesc);
	m_tblLine.SetValue(_T("mpcil_isactivewarning"),m_bShowWarning?_T("Y"):_T("N"));

}
void CPMProductClassInteractionLine::SetDefaultValues(){

	m_szFeeIDKey.Empty();
	m_szCondisionKey.Empty();
	m_nValue=0;
	m_szUnit.Empty();
	m_szDesc.Empty();
	m_nValue2=0;
	m_bShowWarning = TRUE;
}
int CPMProductClassInteractionLine::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, -1);
 			SetDefaultValues();
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(FALSE, -1);
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
void CPMProductClassInteractionLine::OnFeeIDSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CPMProductClassInteractionLine::OnFeeIDSelendok(){
	 
}
/*void CPMProductClassInteractionLine::OnFeeIDSetfocus(){
	
}*/
/*void CPMProductClassInteractionLine::OnFeeIDKillfocus(){
	
}*/
long CPMProductClassInteractionLine::OnFeeIDLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	//if(m_wndFeeID.IsSearchKey() && !m_szFeeIDKey.IsEmpty())
	//	 szWhere.Format(_T(" and id='%s' "), m_szFeeIDKey);
	m_wndFeeID.DeleteAllItems(); 
	int nCount = 0;
	/*m_wndFeeID.AddItems(
			_T("CLCR"), 
			_T("Độ thanh thải thận"), NULL);
	szSQL.Format(_T("SELECT hfl_feeid as id, hfl_name as name FROM hms_fee_list WHERE 1=1 and hfl_active ='Y' and hfl_typeid in ('T') %s ORDER BY id "), szWhere);*/

	szSQL.Format(_T(" SELECT ss_code as id,") \
	_T(" ss_desc as name from sys_sel ") \
	_T(" WHERE ss_id='hms_do_thanh_thai_than'") \
	_T(" UNION ALL") \
	_T(" SELECT hfl_feeid as id, ") \
	_T(" hfl_name as name FROM hms_fee_list ") \
	_T(" WHERE 1=1 ") \
	_T(" and hfl_active ='Y' ") \
	_T(" and hfl_typeid in ('T')"), szWhere);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndFeeID.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CPMProductClassInteractionLine::OnFeeIDAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CPMProductClassInteractionLine::OnCondisionSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CPMProductClassInteractionLine::OnCondisionSelendok(){
	 
}
/*void CPMProductClassInteractionLine::OnCondisionSetfocus(){
	
}*/
/*void CPMProductClassInteractionLine::OnCondisionKillfocus(){
	
}*/
long CPMProductClassInteractionLine::OnCondisionLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndCondision.IsSearchKey() && !m_szCondisionKey.IsEmpty()){
		szWhere.Format(_T(" and ss_code ='%s' "), m_szCondisionKey);
	};
	m_wndCondision.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T(" select * from sys_sel where ss_id='hms_condition_query'  %s ORDER BY ss_index, ss_code"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndCondision.AddItems(
			rs.GetValue(_T("ss_code")), 
			rs.GetValue(_T("ss_desc")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CPMProductClassInteractionLine::OnCondisionAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CPMProductClassInteractionLine::OnValueChange(){
	
} */
/*void CPMProductClassInteractionLine::OnValueSetfocus(){
	
} */
/*void CPMProductClassInteractionLine::OnValueKillfocus(){
	
} */
int CPMProductClassInteractionLine::OnValueCheckValue(){
	return 0;
} 
/*void CPMProductClassInteractionLine::OnUnitChange(){
	
} */
/*void CPMProductClassInteractionLine::OnUnitSetfocus(){
	
} */
/*void CPMProductClassInteractionLine::OnUnitKillfocus(){
	
} */
int CPMProductClassInteractionLine::OnUnitCheckValue(){
	return 0;
} 
/*void CPMProductClassInteractionLine::OnDescChange(){
	
} */
/*void CPMProductClassInteractionLine::OnDescSetfocus(){
	
} */
/*void CPMProductClassInteractionLine::OnDescKillfocus(){
	
} */
int CPMProductClassInteractionLine::OnDescCheckValue(){
	return 0;
} 
void CPMProductClassInteractionLine::OnAddSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnSavePMProductClassInteractionLine();
	
} 
void CPMProductClassInteractionLine::OnCloseSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnCancel();
	
}
int CPMProductClassInteractionLine::OnValue2CheckValue(){
	return 0;
} 
void CPMProductClassInteractionLine::OnShowWarningSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}															
int CPMProductClassInteractionLine::OnAddPMProductClassInteractionLine(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CPMProductClassInteractionLine::OnEditPMProductClassInteractionLine(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CPMProductClassInteractionLine::OnDeletePMProductClassInteractionLine(){
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
 		OnCancelPMProductClassInteractionLine();
 	}
	return 0;
}
int CPMProductClassInteractionLine::OnSavePMProductClassInteractionLine(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
 		szSQL = m_tblLine.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
 		szWhere.Format(_T(" WHERE mpcil_id = %ld"), m_nID);
 		szSQL = m_tblLine.GetUpdateSQL(_T("createdby,createddate"));
 		szSQL += szWhere;
 	}
 //_msg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
		szSQL.Format(_T("update m_product_class_interaction set  mpci_iscondision='Y' where mpci_class_id=%ld and mpci_icd='%s' "), m_nClassID, m_szICD);
		pMF->ExecSQL(szSQL);
		//_msg(_T("%s"), szSQL);
		/*((CProductClassICD10Dialog*) GetParent())->OnListQueryLoadData();*/
 		//OnPMProductClassInteractionLineListLoadData();
 		SetMode(GetMode());
		ShowMessageBox(_T("Đã lưu thành công!"));
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CPMProductClassInteractionLine::OnCancelPMProductClassInteractionLine(){
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
int CPMProductClassInteractionLine::OnPMProductClassInteractionLineListLoadData(){
	return 0;
}
