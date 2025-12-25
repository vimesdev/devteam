#include "HMSFormInfo.h"
#include "MainFrm.h"
#include "StringToken.h"
/*static void _OnFieldChangeFnc(CWnd *pWnd){
	((CHMSFormInfo *)pWnd)->OnFieldChange();
} */
/*static void _OnFieldSetfocusFnc(CWnd *pWnd){
	((CHMSFormInfo *)pWnd)->OnFieldSetfocus();} */ 
/*static void _OnFieldKillfocusFnc(CWnd *pWnd){
	((CHMSFormInfo *)pWnd)->OnFieldKillfocus();
} */
static int _OnFieldCheckValueFnc(CWnd *pWnd){
	return ((CHMSFormInfo *)pWnd)->OnFieldCheckValue();
} 
static void _OnDataSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSFormInfo* )pWnd)->OnDataSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDataSelendokFnc(CWnd *pWnd){
	((CHMSFormInfo *)pWnd)->OnDataSelendok();
}
/*static void _OnDataSetfocusFnc(CWnd *pWnd){
	((CHMSFormInfo *)pWnd)->OnDataKillfocus();
}*/
/*static void _OnDataKillfocusFnc(CWnd *pWnd){
	((CHMSFormInfo *)pWnd)->OnDataKillfocus();
}*/
static long _OnDataLoadDataFnc(CWnd *pWnd){
	return ((CHMSFormInfo *)pWnd)->OnDataLoadData();
}
/*static void _OnDataAddNewFnc(CWnd *pWnd){
	((CHMSFormInfo *)pWnd)->OnDataAddNew();
}*/
/*static void _OnFormNameChangeFnc(CWnd *pWnd){
	((CHMSFormInfo *)pWnd)->OnFormNameChange();
} */
/*static void _OnFormNameSetfocusFnc(CWnd *pWnd){
	((CHMSFormInfo *)pWnd)->OnFormNameSetfocus();} */ 
/*static void _OnFormNameKillfocusFnc(CWnd *pWnd){
	((CHMSFormInfo *)pWnd)->OnFormNameKillfocus();
} */
static int _OnFormNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSFormInfo *)pWnd)->OnFormNameCheckValue();
} 
static void _OnFormListSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSFormInfo* )pWnd)->OnFormListSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnFormListSelendokFnc(CWnd *pWnd){
	((CHMSFormInfo *)pWnd)->OnFormListSelendok();
}
/*static void _OnFormListSetfocusFnc(CWnd *pWnd){
	((CHMSFormInfo *)pWnd)->OnFormListKillfocus();
}*/
/*static void _OnFormListKillfocusFnc(CWnd *pWnd){
	((CHMSFormInfo *)pWnd)->OnFormListKillfocus();
}*/
static long _OnFormListLoadDataFnc(CWnd *pWnd){
	return ((CHMSFormInfo *)pWnd)->OnFormListLoadData();
}
/*static void _OnFormListAddNewFnc(CWnd *pWnd){
	((CHMSFormInfo *)pWnd)->OnFormListAddNew();
}*/
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSFormInfo *pVw = (CHMSFormInfo *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CHMSFormInfo *pVw = (CHMSFormInfo *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSFormInfo *pVw = (CHMSFormInfo *)pWnd;
	pVw->OnSaveSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSFormInfo*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSFormInfo*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSFormInfo*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSFormInfo*)pWnd)->OnListDeleteItem();
} 
static int _OnAddHMSFormInfoFnc(CWnd *pWnd){
	 return ((CHMSFormInfo*)pWnd)->OnAddHMSFormInfo();
} 
static int _OnEditHMSFormInfoFnc(CWnd *pWnd){
	 return ((CHMSFormInfo*)pWnd)->OnEditHMSFormInfo();
} 
static int _OnDeleteHMSFormInfoFnc(CWnd *pWnd){
	 return ((CHMSFormInfo*)pWnd)->OnDeleteHMSFormInfo();
} 
static int _OnSaveHMSFormInfoFnc(CWnd *pWnd){
	 return ((CHMSFormInfo*)pWnd)->OnSaveHMSFormInfo();
} 
static int _OnCancelHMSFormInfoFnc(CWnd *pWnd){
	 return ((CHMSFormInfo*)pWnd)->OnCancelHMSFormInfo();
} 
CHMSFormInfo::CHMSFormInfo(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CHMSFormInfo::~CHMSFormInfo(){
}
void CHMSFormInfo::OnCreateComponents(){
	m_wndFormInfo.Create(this, _T("Form Info"), 5, 5, 355, 495);
	m_wndFormListLabel.Create(this, _T("Form List"), 10, 30, 90, 55);
	m_wndFormList.Create(this,95, 30, 350, 55); 
	m_wndFieldLabel.Create(this, _T("Field"), 10, 405, 90, 430);
	m_wndField.Create(this,95, 405, 265, 430); 
	m_wndDataLabel.Create(this, _T("Data"), 10, 435, 90, 460);
	m_wndData.Create(this,95, 435, 265, 460); 
	m_wndFormNameLabel.Create(this, _T("Form Name"), 10, 465, 90, 490);
	m_wndFormName.Create(this,95, 465, 265, 490, 0, 0, 0); 	
	m_wndAdd.Create(this, _T("&Add"), 270, 405, 350, 430);
	m_wndEdit.Create(this, _T("&Edit"), 270, 435, 350, 460);
	m_wndSave.Create(this, _T("&Save"), 270, 465, 350, 490);
	m_wndList.Create(this,10, 60, 350, 400); 

}
void CHMSFormInfo::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndField.SetLimitText(35);
	m_wndField.SetCheckValue(true);
	m_wndData.SetCheckValue(true);
	m_wndData.LimitText(35);
	m_wndFormName.SetLimitText(35);
	m_wndFormName.SetCheckValue(true);
	m_wndFormList.SetCheckValue(true);
	m_wndFormList.LimitText(35);

	m_wndData.Format(1, 0);
	m_wndData.InsertColumn(0, _T("Name"), CFMT_TEXT, 150);
	
	m_wndFormList.Format(1, 0);
	m_wndFormList.InsertColumn(0, _T("Name"), CFMT_TEXT, 150);


	m_wndList.InsertColumn(0, _T("Field Name"), CFMT_TEXT, 170);
	m_wndList.InsertColumn(1, _T("Field Value"), CFMT_TEXT, 170);

}
void CHMSFormInfo::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndField.SetEvent(WE_CHANGE, _OnFieldChangeFnc);
	//m_wndField.SetEvent(WE_SETFOCUS, _OnFieldSetfocusFnc);
	//m_wndField.SetEvent(WE_KILLFOCUS, _OnFieldKillfocusFnc);
	m_wndField.SetEvent(WE_CHECKVALUE, _OnFieldCheckValueFnc);
	m_wndData.SetEvent(WE_SELENDOK, _OnDataSelendokFnc);
	//m_wndData.SetEvent(WE_SETFOCUS, _OnDataSetfocusFnc);
	//m_wndData.SetEvent(WE_KILLFOCUS, _OnDataKillfocusFnc);
	m_wndData.SetEvent(WE_SELCHANGE, _OnDataSelectChangeFnc);
	m_wndData.SetEvent(WE_LOADDATA, _OnDataLoadDataFnc);
	//m_wndData.SetEvent(WE_ADDNEW, _OnDataAddNewFnc);
	//m_wndFormName.SetEvent(WE_CHANGE, _OnFormNameChangeFnc);
	//m_wndFormName.SetEvent(WE_SETFOCUS, _OnFormNameSetfocusFnc);
	//m_wndFormName.SetEvent(WE_KILLFOCUS, _OnFormNameKillfocusFnc);
	m_wndFormName.SetEvent(WE_CHECKVALUE, _OnFormNameCheckValueFnc);
	m_wndFormList.SetEvent(WE_SELENDOK, _OnFormListSelendokFnc);
	//m_wndFormList.SetEvent(WE_SETFOCUS, _OnFormListSetfocusFnc);
	//m_wndFormList.SetEvent(WE_KILLFOCUS, _OnFormListKillfocusFnc);
	m_wndFormList.SetEvent(WE_SELCHANGE, _OnFormListSelectChangeFnc);
	m_wndFormList.SetEvent(WE_LOADDATA, _OnFormListLoadDataFnc);
	//m_wndFormList.SetEvent(WE_ADDNEW, _OnFormListAddNewFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	SetMode(VM_ADD);

}
void CHMSFormInfo::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndField.GetDlgCtrlID(), m_szField);
	DDX_TextEx(pDX, m_wndData.GetDlgCtrlID(), m_szDataKey);
	DDX_Text(pDX, m_wndFormName.GetDlgCtrlID(), m_szFormName);
	DDX_TextEx(pDX, m_wndFormList.GetDlgCtrlID(), m_szFormListKey);

}
void CHMSFormInfo::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Field")] =  m_szField;
	m_jData[_T("Data")] =  m_szDataKey;
	m_jData[_T("FormName")] =  m_szFormName;
	m_jData[_T("FormList")] =  m_szFormListKey;
	}
	else
	{
			
	m_jData[_T("Field")].GetValue(m_szField);
	m_jData[_T("Data")].GetValue(m_szDataKey);
	m_jData[_T("FormName")].GetValue(m_szFormName);
	m_jData[_T("FormList")].GetValue(m_szFormListKey);
	}

}
void CHMSFormInfo::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSFormInfo::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSFormInfo::SetDefaultValues(){

	m_szField.Empty();
	m_szDataKey.Empty();
	//m_szFormName.Empty();
	m_szFormListKey.Empty();

}
int CHMSFormInfo::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			//EnableControls(TRUE);
 			//EnableButtons(TRUE, 3, 4, -1);
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
/*void CHMSFormInfo::OnFieldChange(){
	
} */
/*void CHMSFormInfo::OnFieldSetfocus(){
	
} */
/*void CHMSFormInfo::OnFieldKillfocus(){
	
} */
int CHMSFormInfo::OnFieldCheckValue(){
	return 0;
} 
void CHMSFormInfo::OnDataSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSFormInfo::OnDataSelendok(){
	 
}
/*void CHMSFormInfo::OnDataSetfocus(){
	
}*/
/*void CHMSFormInfo::OnDataKillfocus(){
	
}*/
long CHMSFormInfo::OnDataLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndData.IsSearchKey() && !m_szDataKey.IsEmpty()){
		szWhere.Format(_T(" and column_name='%s' "), m_szDataKey);
	}
	m_wndData.DeleteAllItems(); 
	int nCount = 0;
	szWhere.Format(_T(" and table_name = 'V_PATIENT_INFO' and owner = 'VIMES'"));
	szSQL.Format(_T("SELECT column_name as name FROM all_tab_cols WHERE 1=1 %s ORDER BY column_id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndData.AddItems(
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSFormInfo::OnDataAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSFormInfo::OnFormNameChange(){
	
} */
/*void CHMSFormInfo::OnFormNameSetfocus(){
	
} */
/*void CHMSFormInfo::OnFormNameKillfocus(){
	
} */
int CHMSFormInfo::OnFormNameCheckValue(){
	return 0;
} 
void CHMSFormInfo::OnFormListSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData();
	OnListLoadData();	
} 
void CHMSFormInfo::OnFormListSelendok(){
	UpdateData();
	OnListLoadData();
	m_wndFormName.SetWindowText(m_szFormListKey);
}
/*void CHMSFormInfo::OnFormListSetfocus(){
	
}*/
/*void CHMSFormInfo::OnFormListKillfocus(){
	
}*/
long CHMSFormInfo::OnFormListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndFormList.IsSearchKey() && !m_szFormListKey.IsEmpty()){
		szWhere.Format(_T(" and hfi_id='%s' "), m_szFormListKey);
	}
	m_wndFormList.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT hfi_id as name FROM hms_form_info WHERE 1=1 %s ORDER BY hfi_id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndFormList.AddItems(
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	m_wndFormList.AddItems(_T("{Add New}"), NULL);
	return nCount;

}
/*void CHMSFormInfo::OnFormListAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSFormInfo::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData();
	if (m_wndList.Search(0, m_szField) > 0){
		_msg(_T("Đã có trường: %s"), m_szField);
		m_wndList.EndLoad();
		return;
	}
	m_wndList.AddItems(m_szField, m_szDataKey, NULL);
	m_wndList.EndLoad();
	SetMode(VM_ADD);
	m_wndField.SetFocus();
} 
void CHMSFormInfo::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData();
	int nSel = m_wndList.GetCurSel();
	m_wndList.SetItemText(nSel, 0, m_szField);
	m_wndList.SetItemText(nSel, 1, m_szDataKey);
} 
void CHMSFormInfo::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData();
	CString szFields = ToConcatColumns();
	CString szSQL;
	szSQL.Format(_T("hms_form_info_add('%s', '%s')"), m_szFormName, szFields);
	int nRet = str2int(pMF->ExecDML(szSQL));
	if (nRet > 0){
		_msg(_T("Đã thêm mẫu %s"), m_szFormName);
		OnFormListLoadData();
	}
} 

CString CHMSFormInfo::ToConcatColumns(){
	CString retStr;
	for (int i = 0; i < m_wndList.GetItemCount(); i++)
		for (int j = 0; j < m_wndList.GetColumnCount(); j++){
			if (j == 0 && i > 0) retStr += _T("|");
			if (j > 0) retStr+=_T("~");
			retStr += m_wndList.GetItemText(i, j);
		}
_tprintf(_T("\r\nretStr: %s"), retStr);
	return retStr;
}

void CHMSFormInfo::OnListDblClick(){
	
} 
void CHMSFormInfo::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_szField = m_wndList.GetItemText(nNewItem, 0);
	m_szDataKey = m_wndList.GetItemText(nNewItem, 1);
	UpdateData(FALSE);
} 
int CHMSFormInfo::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndList.DeleteItem(m_wndList.GetCurSel());
	return 0;
} 
long CHMSFormInfo::OnListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szName, szValue;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	szSQL.Format(_T("select hfi_fields fields from hms_form_info where hfi_id = '%s'"), m_szFormListKey);
	nCount = rs.ExecSQL(szSQL);
	CStringToken tkFields(rs.GetStringValue(), _T("|"));
	if (!rs.IsEOF()){
		for (int i = 0; i < tkFields.GetSize(); i++){
			tkFields.GetAt(i, tmpStr);
			CStringToken tkPair(tmpStr, _T("~"));
			szName.Empty();
			szValue.Empty();
			tkPair.GetAt(0, szName);
			tkPair.GetAt(1, szValue);
			m_wndList.AddItems(szName, szValue, NULL);
		}
	}
	m_wndList.EndLoad(); 
	return nCount;
}
int CHMSFormInfo::OnAddHMSFormInfo(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSFormInfo::OnEditHMSFormInfo(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSFormInfo::OnDeleteHMSFormInfo(){
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
 		OnCancelHMSFormInfo();
 	}
	return 0;
}
int CHMSFormInfo::OnSaveHMSFormInfo(){
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
 		//OnHMSFormInfoListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSFormInfo::OnCancelHMSFormInfo(){
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
int CHMSFormInfo::OnHMSFormInfoListLoadData(){
	return 0;
}
