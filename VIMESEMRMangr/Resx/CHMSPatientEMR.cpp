#include "CHMSPatientEMR.h"
#include "MainFrm.h"
static void _OnTreatmentTabSelectChangeFnc(CWnd *pWnd, int nOld, int nNew){
	((CCHMSPatientEMR*)pWnd)->OnTreatmentTabSelectChange(nOld, nNew);
} 
static void _OnTreatmentTrackingSelectFnc(CWnd *pWnd){
	CCHMSPatientEMR *pVw = (CCHMSPatientEMR *)pWnd;
	pVw->OnTreatmentTrackingSelect();
} 
static void _OnPatientCareSelectFnc(CWnd *pWnd){
	CCHMSPatientEMR *pVw = (CCHMSPatientEMR *)pWnd;
	pVw->OnPatientCareSelect();
} 
static void _OnClinicalRecordSelectFnc(CWnd *pWnd){
	CCHMSPatientEMR *pVw = (CCHMSPatientEMR *)pWnd;
	pVw->OnClinicalRecordSelect();
} 
static void _OnElectronicRecordSelectFnc(CWnd *pWnd){
	CCHMSPatientEMR *pVw = (CCHMSPatientEMR *)pWnd;
	pVw->OnElectronicRecordSelect();
} 
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCHMSPatientEMR* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CCHMSPatientEMR *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CCHMSPatientEMR *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CCHMSPatientEMR *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CCHMSPatientEMR *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CCHMSPatientEMR *)pWnd)->OnDepartmentAddNew();
}*/
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CCHMSPatientEMR*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CCHMSPatientEMR*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CCHMSPatientEMR*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CCHMSPatientEMR*)pWnd)->OnListDeleteItem();
} 
/*static void _OnDocumentNoChangeFnc(CWnd *pWnd){
	((CCHMSPatientEMR *)pWnd)->OnDocumentNoChange();
} */
/*static void _OnDocumentNoSetfocusFnc(CWnd *pWnd){
	((CCHMSPatientEMR *)pWnd)->OnDocumentNoSetfocus();} */ 
/*static void _OnDocumentNoKillfocusFnc(CWnd *pWnd){
	((CCHMSPatientEMR *)pWnd)->OnDocumentNoKillfocus();
} */
static int _OnDocumentNoCheckValueFnc(CWnd *pWnd){
	return ((CCHMSPatientEMR *)pWnd)->OnDocumentNoCheckValue();
} 
/*static void _OnPatientNameChangeFnc(CWnd *pWnd){
	((CCHMSPatientEMR *)pWnd)->OnPatientNameChange();
} */
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CCHMSPatientEMR *)pWnd)->OnPatientNameSetfocus();} */ 
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((CCHMSPatientEMR *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((CCHMSPatientEMR *)pWnd)->OnPatientNameCheckValue();
} 
/*static void _OnSexChangeFnc(CWnd *pWnd){
	((CCHMSPatientEMR *)pWnd)->OnSexChange();
} */
/*static void _OnSexSetfocusFnc(CWnd *pWnd){
	((CCHMSPatientEMR *)pWnd)->OnSexSetfocus();} */ 
/*static void _OnSexKillfocusFnc(CWnd *pWnd){
	((CCHMSPatientEMR *)pWnd)->OnSexKillfocus();
} */
static int _OnSexCheckValueFnc(CWnd *pWnd){
	return ((CCHMSPatientEMR *)pWnd)->OnSexCheckValue();
} 
/*static void _OnAgeChangeFnc(CWnd *pWnd){
	((CCHMSPatientEMR *)pWnd)->OnAgeChange();
} */
/*static void _OnAgeSetfocusFnc(CWnd *pWnd){
	((CCHMSPatientEMR *)pWnd)->OnAgeSetfocus();} */ 
/*static void _OnAgeKillfocusFnc(CWnd *pWnd){
	((CCHMSPatientEMR *)pWnd)->OnAgeKillfocus();
} */
static int _OnAgeCheckValueFnc(CWnd *pWnd){
	return ((CCHMSPatientEMR *)pWnd)->OnAgeCheckValue();
} 
static int _OnAddCHMSPatientEMRFnc(CWnd *pWnd){
	 return ((CCHMSPatientEMR*)pWnd)->OnAddCHMSPatientEMR();
} 
static int _OnEditCHMSPatientEMRFnc(CWnd *pWnd){
	 return ((CCHMSPatientEMR*)pWnd)->OnEditCHMSPatientEMR();
} 
static int _OnDeleteCHMSPatientEMRFnc(CWnd *pWnd){
	 return ((CCHMSPatientEMR*)pWnd)->OnDeleteCHMSPatientEMR();
} 
static int _OnSaveCHMSPatientEMRFnc(CWnd *pWnd){
	 return ((CCHMSPatientEMR*)pWnd)->OnSaveCHMSPatientEMR();
} 
static int _OnCancelCHMSPatientEMRFnc(CWnd *pWnd){
	 return ((CCHMSPatientEMR*)pWnd)->OnCancelCHMSPatientEMR();
} 
CCHMSPatientEMR::CCHMSPatientEMR(){

	m_nDlgWidth = 1019;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CCHMSPatientEMR::~CCHMSPatientEMR(){
}
void CCHMSPatientEMR::OnCreateComponents(){
	m_wndInformation.Create(this, _T("Information"), 5, 5, 1018, 60);
	m_wndTreatmentTab.Create(this,270, 65, 1018, 600); 
	m_wndTreatmentTracking.Create(this, _T("Phiếu điều trị (F3)"), 419, 605, 564, 630);
	m_wndPatientCare.Create(this, _T("Phiếu chăm sóc (F4)"), 569, 605, 714, 630);
	m_wndClinicalRecord.Create(this, _T("Clinical Record"), 719, 605, 864, 630);
	m_wndElectronicRecord.Create(this, _T("Mẫu biểu chuyên môn"), 869, 605, 1014, 630);
	m_wndDepartmentLabel.Create(this, _T("Department"), 5, 605, 85, 630);
	m_wndDepartment.Create(this,90, 605, 265, 630); 
	m_wndList.Create(this,5, 65, 265, 600); 
	m_wndDocumentNoLabel.Create(this, _T("DocumentNo"), 10, 30, 100, 55);
	m_wndDocumentNo.Create(this,105, 30, 195, 55); 
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 200, 30, 290, 55);
	m_wndPatientName.Create(this,295, 30, 470, 55); 
	m_wndSexLabel.Create(this, _T("Sex"), 475, 30, 565, 55);
	m_wndSex.Create(this,570, 30, 650, 55); 
	m_wndAgeLabel.Create(this, _T("Age"), 655, 30, 745, 55);
	m_wndAge.Create(this,750, 30, 830, 55); 

}
void CCHMSPatientEMR::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(1024);
	m_wndDocumentNo.SetLimitText(16);
	m_wndDocumentNo.SetCheckValue(true);
	m_wndPatientName.SetLimitText(35);
	m_wndPatientName.SetCheckValue(true);
	m_wndSex.SetLimitText(35);
	m_wndSex.SetCheckValue(true);
	m_wndAge.SetLimitText(35);
	m_wndAge.SetCheckValue(true);





}
void CCHMSPatientEMR::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndTreatmentTab.SetEvent(WE_SELCHANGE, _OnTreatmentTabSelectChangeFnc);
	m_wndTreatmentTracking.SetEvent(WE_CLICK, _OnTreatmentTrackingSelectFnc);
	m_wndPatientCare.SetEvent(WE_CLICK, _OnPatientCareSelectFnc);
	m_wndClinicalRecord.SetEvent(WE_CLICK, _OnClinicalRecordSelectFnc);
	m_wndElectronicRecord.SetEvent(WE_CLICK, _OnElectronicRecordSelectFnc);
	m_wndDepartment.SetEvent(WE_SELENDOK, _OnDepartmentSelendokFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	//m_wndDepartment.SetEvent(WE_ADDNEW, _OnDepartmentAddNewFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	//m_wndDocumentNo.SetEvent(WE_CHANGE, _OnDocumentNoChangeFnc);
	//m_wndDocumentNo.SetEvent(WE_SETFOCUS, _OnDocumentNoSetfocusFnc);
	//m_wndDocumentNo.SetEvent(WE_KILLFOCUS, _OnDocumentNoKillfocusFnc);
	m_wndDocumentNo.SetEvent(WE_CHECKVALUE, _OnDocumentNoCheckValueFnc);
	//m_wndPatientName.SetEvent(WE_CHANGE, _OnPatientNameChangeFnc);
	//m_wndPatientName.SetEvent(WE_SETFOCUS, _OnPatientNameSetfocusFnc);
	//m_wndPatientName.SetEvent(WE_KILLFOCUS, _OnPatientNameKillfocusFnc);
	m_wndPatientName.SetEvent(WE_CHECKVALUE, _OnPatientNameCheckValueFnc);
	//m_wndSex.SetEvent(WE_CHANGE, _OnSexChangeFnc);
	//m_wndSex.SetEvent(WE_SETFOCUS, _OnSexSetfocusFnc);
	//m_wndSex.SetEvent(WE_KILLFOCUS, _OnSexKillfocusFnc);
	m_wndSex.SetEvent(WE_CHECKVALUE, _OnSexCheckValueFnc);
	//m_wndAge.SetEvent(WE_CHANGE, _OnAgeChangeFnc);
	//m_wndAge.SetEvent(WE_SETFOCUS, _OnAgeSetfocusFnc);
	//m_wndAge.SetEvent(WE_KILLFOCUS, _OnAgeKillfocusFnc);
	m_wndAge.SetEvent(WE_CHECKVALUE, _OnAgeCheckValueFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddCHMSPatientEMRFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditCHMSPatientEMRFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteCHMSPatientEMRFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveCHMSPatientEMRFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelCHMSPatientEMRFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CCHMSPatientEMR::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_Text(pDX, m_wndDocumentNo.GetDlgCtrlID(), m_nDocumentNo);
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);
	DDX_Text(pDX, m_wndSex.GetDlgCtrlID(), m_szSex);
	DDX_Text(pDX, m_wndAge.GetDlgCtrlID(), m_szAge);

}
void CCHMSPatientEMR::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Department")] =  m_szDepartmentKey;
	m_jData[_T("DocumentNo")] =  m_nDocumentNo;
	m_jData[_T("PatientName")] =  m_szPatientName;
	m_jData[_T("Sex")] =  m_szSex;
	m_jData[_T("Age")] =  m_szAge;
	}
	else
	{
			
	m_jData[_T("Department")].GetValue(m_szDepartmentKey);
	m_jData[_T("DocumentNo")].GetValue(m_nDocumentNo);
	m_jData[_T("PatientName")].GetValue(m_szPatientName);
	m_jData[_T("Sex")].GetValue(m_szSex);
	m_jData[_T("Age")].GetValue(m_szAge);
	}

}
void CCHMSPatientEMR::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CCHMSPatientEMR::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CCHMSPatientEMR::SetDefaultValues(){

	m_szDepartmentKey.Empty();
	m_nDocumentNo=0;
	m_szPatientName.Empty();
	m_szSex.Empty();
	m_szAge.Empty();

}
int CCHMSPatientEMR::SetMode(int nMode){
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
void CCHMSPatientEMR::OnTreatmentTabSelectChange(int nOld, int nNew){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCHMSPatientEMR::OnTreatmentTrackingSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCHMSPatientEMR::OnPatientCareSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCHMSPatientEMR::OnClinicalRecordSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCHMSPatientEMR::OnElectronicRecordSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCHMSPatientEMR::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCHMSPatientEMR::OnDepartmentSelendok(){
	 
}
/*void CCHMSPatientEMR::OnDepartmentSetfocus(){
	
}*/
/*void CCHMSPatientEMR::OnDepartmentKillfocus(){
	
}*/
long CCHMSPatientEMR::OnDepartmentLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDepartment.IsSearchKey() && !m_szDepartmentKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szDepartmentKey
};
	m_wndDepartment.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDepartment.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CCHMSPatientEMR::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CCHMSPatientEMR::OnListDblClick(){
	
} 
void CCHMSPatientEMR::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CCHMSPatientEMR::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CCHMSPatientEMR::OnListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
*/
	return 0;
}
/*void CCHMSPatientEMR::OnDocumentNoChange(){
	
} */
/*void CCHMSPatientEMR::OnDocumentNoSetfocus(){
	
} */
/*void CCHMSPatientEMR::OnDocumentNoKillfocus(){
	
} */
int CCHMSPatientEMR::OnDocumentNoCheckValue(){
	return 0;
} 
/*void CCHMSPatientEMR::OnPatientNameChange(){
	
} */
/*void CCHMSPatientEMR::OnPatientNameSetfocus(){
	
} */
/*void CCHMSPatientEMR::OnPatientNameKillfocus(){
	
} */
int CCHMSPatientEMR::OnPatientNameCheckValue(){
	return 0;
} 
/*void CCHMSPatientEMR::OnSexChange(){
	
} */
/*void CCHMSPatientEMR::OnSexSetfocus(){
	
} */
/*void CCHMSPatientEMR::OnSexKillfocus(){
	
} */
int CCHMSPatientEMR::OnSexCheckValue(){
	return 0;
} 
/*void CCHMSPatientEMR::OnAgeChange(){
	
} */
/*void CCHMSPatientEMR::OnAgeSetfocus(){
	
} */
/*void CCHMSPatientEMR::OnAgeKillfocus(){
	
} */
int CCHMSPatientEMR::OnAgeCheckValue(){
	return 0;
} 
int CCHMSPatientEMR::OnAddCHMSPatientEMR(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CCHMSPatientEMR::OnEditCHMSPatientEMR(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CCHMSPatientEMR::OnDeleteCHMSPatientEMR(){
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
 		OnCancelCHMSPatientEMR();
 	}
	return 0;
}
int CCHMSPatientEMR::OnSaveCHMSPatientEMR(){
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
 		//OnCHMSPatientEMRListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CCHMSPatientEMR::OnCancelCHMSPatientEMR(){
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
int CCHMSPatientEMR::OnCHMSPatientEMRListLoadData(){
	return 0;
}
