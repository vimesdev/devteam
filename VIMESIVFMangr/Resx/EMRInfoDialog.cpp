#include "EMRInfoDialog.h"
#include "MainFrm.h"
/*static void _OnDateTimeChangeFnc(CWnd *pWnd){
	((CEMRInfoDialog *)pWnd)->OnDateTimeChange();
} */
/*static void _OnDateTimeSetfocusFnc(CWnd *pWnd){
	((CEMRInfoDialog *)pWnd)->OnDateTimeSetfocus();} */ 
/*static void _OnDateTimeKillfocusFnc(CWnd *pWnd){
	((CEMRInfoDialog *)pWnd)->OnDateTimeKillfocus();
} */
static int _OnDateTimeCheckValueFnc(CWnd *pWnd){
	return ((CEMRInfoDialog *)pWnd)->OnDateTimeCheckValue();
} 
static void _OnDoctorSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEMRInfoDialog* )pWnd)->OnDoctorSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDoctorSelendokFnc(CWnd *pWnd){
	((CEMRInfoDialog *)pWnd)->OnDoctorSelendok();
}
/*static void _OnDoctorSetfocusFnc(CWnd *pWnd){
	((CEMRInfoDialog *)pWnd)->OnDoctorKillfocus();
}*/
/*static void _OnDoctorKillfocusFnc(CWnd *pWnd){
	((CEMRInfoDialog *)pWnd)->OnDoctorKillfocus();
}*/
static long _OnDoctorLoadDataFnc(CWnd *pWnd){
	return ((CEMRInfoDialog *)pWnd)->OnDoctorLoadData();
}
/*static void _OnDoctorAddNewFnc(CWnd *pWnd){
	((CEMRInfoDialog *)pWnd)->OnDoctorAddNew();
}*/
/*static void _OnPluseChangeFnc(CWnd *pWnd){
	((CEMRInfoDialog *)pWnd)->OnPluseChange();
} */
/*static void _OnPluseSetfocusFnc(CWnd *pWnd){
	((CEMRInfoDialog *)pWnd)->OnPluseSetfocus();} */ 
/*static void _OnPluseKillfocusFnc(CWnd *pWnd){
	((CEMRInfoDialog *)pWnd)->OnPluseKillfocus();
} */
static int _OnPluseCheckValueFnc(CWnd *pWnd){
	return ((CEMRInfoDialog *)pWnd)->OnPluseCheckValue();
} 
/*static void _OnTempChangeFnc(CWnd *pWnd){
	((CEMRInfoDialog *)pWnd)->OnTempChange();
} */
/*static void _OnTempSetfocusFnc(CWnd *pWnd){
	((CEMRInfoDialog *)pWnd)->OnTempSetfocus();} */ 
/*static void _OnTempKillfocusFnc(CWnd *pWnd){
	((CEMRInfoDialog *)pWnd)->OnTempKillfocus();
} */
static int _OnTempCheckValueFnc(CWnd *pWnd){
	return ((CEMRInfoDialog *)pWnd)->OnTempCheckValue();
} 
/*static void _OnDescriptionChangeFnc(CWnd *pWnd){
	((CEMRInfoDialog *)pWnd)->OnDescriptionChange();
} */
/*static void _OnDescriptionSetfocusFnc(CWnd *pWnd){
	((CEMRInfoDialog *)pWnd)->OnDescriptionSetfocus();} */ 
/*static void _OnDescriptionKillfocusFnc(CWnd *pWnd){
	((CEMRInfoDialog *)pWnd)->OnDescriptionKillfocus();
} */
static int _OnDescriptionCheckValueFnc(CWnd *pWnd){
	return ((CEMRInfoDialog *)pWnd)->OnDescriptionCheckValue();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CEMRInfoDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CEMRInfoDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CEMRInfoDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CEMRInfoDialog*)pWnd)->OnListDeleteItem();
} 
static int _OnAddEMRInfoDialogFnc(CWnd *pWnd){
	 return ((CEMRInfoDialog*)pWnd)->OnAddEMRInfoDialog();
} 
static int _OnEditEMRInfoDialogFnc(CWnd *pWnd){
	 return ((CEMRInfoDialog*)pWnd)->OnEditEMRInfoDialog();
} 
static int _OnDeleteEMRInfoDialogFnc(CWnd *pWnd){
	 return ((CEMRInfoDialog*)pWnd)->OnDeleteEMRInfoDialog();
} 
static int _OnSaveEMRInfoDialogFnc(CWnd *pWnd){
	 return ((CEMRInfoDialog*)pWnd)->OnSaveEMRInfoDialog();
} 
static int _OnCancelEMRInfoDialogFnc(CWnd *pWnd){
	 return ((CEMRInfoDialog*)pWnd)->OnCancelEMRInfoDialog();
} 
CEMRInfoDialog::CEMRInfoDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 2053;
	SetDefaultValues();
}
CEMRInfoDialog::~CEMRInfoDialog(){
}
void CEMRInfoDialog::OnCreateComponents(){
	m_wndDateTimeLabel.Create(this, _T("Date Time"), 5, 5, 85, 30);
	m_wndDateTime.Create(this,90, 5, 210, 30); 
	m_wndDoctorLabel.Create(this, _T("Doctor"), 215, 5, 295, 30);
	m_wndDoctor.Create(this,300, 5, 473, 30); 
	m_wndPluseTempLabel.Create(this, _T("Pluse/Temp"), 478, 5, 558, 30);
	m_wndPluse.Create(this,563, 5, 621, 30); 
	m_wndTemp.Create(this,626, 5, 690, 30); 
	m_wndDescriptionLabel.Create(this, _T("Description"), 5, 35, 85, 60);
	m_wndDescription.Create(this,90, 35, 690, 155); 
	m_wndList.Create(this,78, 950, 763, 1910); 

}
void CEMRInfoDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndDateTime.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndDateTime.SetCheckValue(true);
	m_wndDoctor.SetCheckValue(true);
	m_wndDoctor.LimitText(35);
	m_wndPluse.SetLimitText(35);
	m_wndPluse.SetCheckValue(true);
	m_wndTemp.SetLimitText(16);
	m_wndTemp.SetCheckValue(true);
	m_wndDescription.SetLimitText(35);
	m_wndDescription.SetCheckValue(true);


	m_wndDoctor.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDoctor.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);



}
void CEMRInfoDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndDateTime.SetEvent(WE_CHANGE, _OnDateTimeChangeFnc);
	//m_wndDateTime.SetEvent(WE_SETFOCUS, _OnDateTimeSetfocusFnc);
	//m_wndDateTime.SetEvent(WE_KILLFOCUS, _OnDateTimeKillfocusFnc);
	m_wndDateTime.SetEvent(WE_CHECKVALUE, _OnDateTimeCheckValueFnc);
	m_wndDoctor.SetEvent(WE_SELENDOK, _OnDoctorSelendokFnc);
	//m_wndDoctor.SetEvent(WE_SETFOCUS, _OnDoctorSetfocusFnc);
	//m_wndDoctor.SetEvent(WE_KILLFOCUS, _OnDoctorKillfocusFnc);
	m_wndDoctor.SetEvent(WE_SELCHANGE, _OnDoctorSelectChangeFnc);
	m_wndDoctor.SetEvent(WE_LOADDATA, _OnDoctorLoadDataFnc);
	//m_wndDoctor.SetEvent(WE_ADDNEW, _OnDoctorAddNewFnc);
	//m_wndPluse.SetEvent(WE_CHANGE, _OnPluseChangeFnc);
	//m_wndPluse.SetEvent(WE_SETFOCUS, _OnPluseSetfocusFnc);
	//m_wndPluse.SetEvent(WE_KILLFOCUS, _OnPluseKillfocusFnc);
	m_wndPluse.SetEvent(WE_CHECKVALUE, _OnPluseCheckValueFnc);
	//m_wndTemp.SetEvent(WE_CHANGE, _OnTempChangeFnc);
	//m_wndTemp.SetEvent(WE_SETFOCUS, _OnTempSetfocusFnc);
	//m_wndTemp.SetEvent(WE_KILLFOCUS, _OnTempKillfocusFnc);
	m_wndTemp.SetEvent(WE_CHECKVALUE, _OnTempCheckValueFnc);
	//m_wndDescription.SetEvent(WE_CHANGE, _OnDescriptionChangeFnc);
	//m_wndDescription.SetEvent(WE_SETFOCUS, _OnDescriptionSetfocusFnc);
	//m_wndDescription.SetEvent(WE_KILLFOCUS, _OnDescriptionKillfocusFnc);
	m_wndDescription.SetEvent(WE_CHECKVALUE, _OnDescriptionCheckValueFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	SetMode(VM_NONE);

}
void CEMRInfoDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndDateTime.GetDlgCtrlID(), m_szDateTime);
	DDX_TextEx(pDX, m_wndDoctor.GetDlgCtrlID(), m_szDoctorKey);
	DDX_Text(pDX, m_wndPluse.GetDlgCtrlID(), m_nPluse);
	DDX_Text(pDX, m_wndTemp.GetDlgCtrlID(), m_nTemp);
	DDX_Text(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescription);

}
void CEMRInfoDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("DateTime")] =  m_szDateTime;
	m_jData[_T("Doctor")] =  m_szDoctorKey;
	m_jData[_T("Pluse")] =  m_nPluse;
	m_jData[_T("Temp")] =  m_nTemp;
	m_jData[_T("Description")] =  m_szDescription;
	}
	else
	{
			
	m_jData[_T("DateTime")].GetValue(m_szDateTime);
	m_jData[_T("Doctor")].GetValue(m_szDoctorKey);
	m_jData[_T("Pluse")].GetValue(m_nPluse);
	m_jData[_T("Temp")].GetValue(m_nTemp);
	m_jData[_T("Description")].GetValue(m_szDescription);
	}

}
void CEMRInfoDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CEMRInfoDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CEMRInfoDialog::SetDefaultValues(){

	m_szDateTime.Empty();
	m_szDoctorKey.Empty();
	m_nPluse=0;
	m_nTemp=0;
	m_szDescription.Empty();

}
int CEMRInfoDialog::SetMode(int nMode){
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
/*void CEMRInfoDialog::OnDateTimeChange(){
	
} */
/*void CEMRInfoDialog::OnDateTimeSetfocus(){
	
} */
/*void CEMRInfoDialog::OnDateTimeKillfocus(){
	
} */
int CEMRInfoDialog::OnDateTimeCheckValue(){
	return 0;
} 
void CEMRInfoDialog::OnDoctorSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CEMRInfoDialog::OnDoctorSelendok(){
	 
}
/*void CEMRInfoDialog::OnDoctorSetfocus(){
	
}*/
/*void CEMRInfoDialog::OnDoctorKillfocus(){
	
}*/
long CEMRInfoDialog::OnDoctorLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDoctor.IsSearchKey() && !m_szDoctorKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szDoctorKey
};
	m_wndDoctor.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDoctor.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CEMRInfoDialog::OnDoctorAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CEMRInfoDialog::OnPluseChange(){
	
} */
/*void CEMRInfoDialog::OnPluseSetfocus(){
	
} */
/*void CEMRInfoDialog::OnPluseKillfocus(){
	
} */
int CEMRInfoDialog::OnPluseCheckValue(){
	return 0;
} 
/*void CEMRInfoDialog::OnTempChange(){
	
} */
/*void CEMRInfoDialog::OnTempSetfocus(){
	
} */
/*void CEMRInfoDialog::OnTempKillfocus(){
	
} */
int CEMRInfoDialog::OnTempCheckValue(){
	return 0;
} 
/*void CEMRInfoDialog::OnDescriptionChange(){
	
} */
/*void CEMRInfoDialog::OnDescriptionSetfocus(){
	
} */
/*void CEMRInfoDialog::OnDescriptionKillfocus(){
	
} */
int CEMRInfoDialog::OnDescriptionCheckValue(){
	return 0;
} 
void CEMRInfoDialog::OnListDblClick(){
	
} 
void CEMRInfoDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CEMRInfoDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CEMRInfoDialog::OnListLoadData(){
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
int CEMRInfoDialog::OnAddEMRInfoDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CEMRInfoDialog::OnEditEMRInfoDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CEMRInfoDialog::OnDeleteEMRInfoDialog(){
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
 		OnCancelEMRInfoDialog();
 	}
	return 0;
}
int CEMRInfoDialog::OnSaveEMRInfoDialog(){
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
 		//OnEMRInfoDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CEMRInfoDialog::OnCancelEMRInfoDialog(){
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
int CEMRInfoDialog::OnEMRInfoDialogListLoadData(){
	return 0;
}
