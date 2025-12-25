#include "SysConfigEditDialog1.h"
#include "HMSMainFrame.h"
/*static void _OnSTTChangeFnc(CWnd *pWnd){
	((CSysConfigEditDialog1 *)pWnd)->OnSTTChange();
} */
/*static void _OnSTTSetfocusFnc(CWnd *pWnd){
	((CSysConfigEditDialog1 *)pWnd)->OnSTTSetfocus();} */ 
/*static void _OnSTTKillfocusFnc(CWnd *pWnd){
	((CSysConfigEditDialog1 *)pWnd)->OnSTTKillfocus();
} */
static int _OnSTTCheckValueFnc(CWnd *pWnd){
	return ((CSysConfigEditDialog1 *)pWnd)->OnSTTCheckValue();
} 
static void _OnDataTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CSysConfigEditDialog1* )pWnd)->OnDataTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDataTypeSelendokFnc(CWnd *pWnd){
	((CSysConfigEditDialog1 *)pWnd)->OnDataTypeSelendok();
}
/*static void _OnDataTypeSetfocusFnc(CWnd *pWnd){
	((CSysConfigEditDialog1 *)pWnd)->OnDataTypeKillfocus();
}*/
/*static void _OnDataTypeKillfocusFnc(CWnd *pWnd){
	((CSysConfigEditDialog1 *)pWnd)->OnDataTypeKillfocus();
}*/
static long _OnDataTypeLoadDataFnc(CWnd *pWnd){
	return ((CSysConfigEditDialog1 *)pWnd)->OnDataTypeLoadData();
}
/*static void _OnDataTypeAddNewFnc(CWnd *pWnd){
	((CSysConfigEditDialog1 *)pWnd)->OnDataTypeAddNew();
}*/
/*static void _OnIDChangeFnc(CWnd *pWnd){
	((CSysConfigEditDialog1 *)pWnd)->OnIDChange();
} */
/*static void _OnIDSetfocusFnc(CWnd *pWnd){
	((CSysConfigEditDialog1 *)pWnd)->OnIDSetfocus();} */ 
/*static void _OnIDKillfocusFnc(CWnd *pWnd){
	((CSysConfigEditDialog1 *)pWnd)->OnIDKillfocus();
} */
static int _OnIDCheckValueFnc(CWnd *pWnd){
	return ((CSysConfigEditDialog1 *)pWnd)->OnIDCheckValue();
} 
/*static void _OnDescriptionChangeFnc(CWnd *pWnd){
	((CSysConfigEditDialog1 *)pWnd)->OnDescriptionChange();
} */
/*static void _OnDescriptionSetfocusFnc(CWnd *pWnd){
	((CSysConfigEditDialog1 *)pWnd)->OnDescriptionSetfocus();} */ 
/*static void _OnDescriptionKillfocusFnc(CWnd *pWnd){
	((CSysConfigEditDialog1 *)pWnd)->OnDescriptionKillfocus();
} */
static int _OnDescriptionCheckValueFnc(CWnd *pWnd){
	return ((CSysConfigEditDialog1 *)pWnd)->OnDescriptionCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CSysConfigEditDialog1 *pVw = (CSysConfigEditDialog1 *)pWnd;
	pVw->OnSaveSelect();
} 
/*static void _Oncontrol_11ChangeFnc(CWnd *pWnd){
	((CSysConfigEditDialog1 *)pWnd)->Oncontrol_11Change();
} */
/*static void _Oncontrol_11SetfocusFnc(CWnd *pWnd){
	((CSysConfigEditDialog1 *)pWnd)->Oncontrol_11Setfocus();} */ 
/*static void _Oncontrol_11KillfocusFnc(CWnd *pWnd){
	((CSysConfigEditDialog1 *)pWnd)->Oncontrol_11Killfocus();
} */
static int _Oncontrol_11CheckValueFnc(CWnd *pWnd){
	return ((CSysConfigEditDialog1 *)pWnd)->Oncontrol_11CheckValue();
} 
static int _OnAddSysConfigEditDialog1Fnc(CWnd *pWnd){
	 return ((CSysConfigEditDialog1*)pWnd)->OnAddSysConfigEditDialog1();
} 
static int _OnEditSysConfigEditDialog1Fnc(CWnd *pWnd){
	 return ((CSysConfigEditDialog1*)pWnd)->OnEditSysConfigEditDialog1();
} 
static int _OnDeleteSysConfigEditDialog1Fnc(CWnd *pWnd){
	 return ((CSysConfigEditDialog1*)pWnd)->OnDeleteSysConfigEditDialog1();
} 
static int _OnSaveSysConfigEditDialog1Fnc(CWnd *pWnd){
	 return ((CSysConfigEditDialog1*)pWnd)->OnSaveSysConfigEditDialog1();
} 
static int _OnCancelSysConfigEditDialog1Fnc(CWnd *pWnd){
	 return ((CSysConfigEditDialog1*)pWnd)->OnCancelSysConfigEditDialog1();
} 
CSysConfigEditDialog1::CSysConfigEditDialog1(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 360;
	m_nDlgHeight = 215;
	SetDefaultValues();
}
CSysConfigEditDialog1::~CSysConfigEditDialog1(){
}
void CSysConfigEditDialog1::OnCreateComponents(){
	m_wndUpdate.Create(this, _T("Update"), 5, 5, 350, 175);
	m_wndSTTLabel.Create(this, _T("STT"), 10, 30, 90, 55);
	m_wndSTT.Create(this,95, 30, 175, 55); 
	m_wndDataTypeLabel.Create(this, _T("Data type"), 180, 30, 260, 55);
	m_wndDataType.Create(this,265, 30, 345, 55); 
	m_wndIDLabel.Create(this, _T("ID"), 10, 60, 90, 85);
	m_wndID.Create(this,95, 60, 345, 85); 
	m_wndDescriptionLabel.Create(this, _T("Description"), 10, 92, 90, 117);
	m_wndDescription.Create(this,95, 92, 345, 142); 
	m_wndSave.Create(this, _T("&Save"), 275, 180, 350, 205);
	m_wndLabel_10.Create(this, _T("Label_10"), 10, 145, 90, 170);
	m_wndcontrol_11.Create(this,95, 145, 345, 170); 

}
void CSysConfigEditDialog1::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	EnableControls(TRUE);
	//EnableButtons(TRUE, 0, -1);
	m_wndSTT.SetLimitText(16);
	//m_wndSTT.SetCheckValue(true);
	//m_wndDataType.SetCheckValue(true);
	m_wndDataType.LimitText(35);
	m_wndID.SetLimitText(35);
	//m_wndID.SetCheckValue(true);
	m_wndDescription.SetLimitText(35);
	//m_wndDescription.SetCheckValue(true);


	m_wndDataType.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndDataType.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);
	m_sys_configTbl.SetTableName(_T("sys_config"));
	m_sys_configTbl.AddField(_T("sc_id"), dfLong); 
	m_sys_configTbl.AddField(_T("sc_modid"), dfText, 7); 
	m_sys_configTbl.AddField(_T("sc_name"), dfText, 35); 
	m_sys_configTbl.AddField(_T("sc_desc"), dfText, 81); 
	m_sys_configTbl.AddField(_T("sc_val"), dfText, 35); 
	m_sys_configTbl.AddField(_T("sc_type"), dfText, 2); 

}
void CSysConfigEditDialog1::OnSetWindowEvents(){
	//m_wndSTT.SetEvent(WE_CHANGE, _OnSTTChangeFnc);
	//m_wndSTT.SetEvent(WE_SETFOCUS, _OnSTTSetfocusFnc);
	//m_wndSTT.SetEvent(WE_KILLFOCUS, _OnSTTKillfocusFnc);
	m_wndSTT.SetEvent(WE_CHECKVALUE, _OnSTTCheckValueFnc);
	m_wndDataType.SetEvent(WE_SELENDOK, _OnDataTypeSelendokFnc);
	//m_wndDataType.SetEvent(WE_SETFOCUS, _OnDataTypeSetfocusFnc);
	//m_wndDataType.SetEvent(WE_KILLFOCUS, _OnDataTypeKillfocusFnc);
	m_wndDataType.SetEvent(WE_SELCHANGE, _OnDataTypeSelectChangeFnc);
	m_wndDataType.SetEvent(WE_LOADDATA, _OnDataTypeLoadDataFnc);
	//m_wndDataType.SetEvent(WE_ADDNEW, _OnDataTypeAddNewFnc);
	//m_wndID.SetEvent(WE_CHANGE, _OnIDChangeFnc);
	//m_wndID.SetEvent(WE_SETFOCUS, _OnIDSetfocusFnc);
	//m_wndID.SetEvent(WE_KILLFOCUS, _OnIDKillfocusFnc);
	m_wndID.SetEvent(WE_CHECKVALUE, _OnIDCheckValueFnc);
	//m_wndDescription.SetEvent(WE_CHANGE, _OnDescriptionChangeFnc);
	//m_wndDescription.SetEvent(WE_SETFOCUS, _OnDescriptionSetfocusFnc);
	//m_wndDescription.SetEvent(WE_KILLFOCUS, _OnDescriptionKillfocusFnc);
	m_wndDescription.SetEvent(WE_CHECKVALUE, _OnDescriptionCheckValueFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	//m_wndcontrol_11.SetEvent(WE_CHANGE, _Oncontrol_11ChangeFnc);
	//m_wndcontrol_11.SetEvent(WE_SETFOCUS, _Oncontrol_11SetfocusFnc);
	//m_wndcontrol_11.SetEvent(WE_KILLFOCUS, _Oncontrol_11KillfocusFnc);
	m_wndcontrol_11.SetEvent(WE_CHECKVALUE, _Oncontrol_11CheckValueFnc);

}
void CSysConfigEditDialog1::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndSTT.GetDlgCtrlID(), m_nSTT);
	DDX_TextEx(pDX, m_wndDataType.GetDlgCtrlID(), m_szDataTypeKey);
	DDX_Text(pDX, m_wndID.GetDlgCtrlID(), m_szID);
	DDX_Text(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescription);
	DDX_TextEx(pDX, m_wndcontrol_11.GetDlgCtrlID(), m_szcontrol_11);

}
void CSysConfigEditDialog1::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CSysConfigEditDialog1::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CSysConfigEditDialog1::SetDefaultValues(){

	m_nSTT=0;
	m_szDataTypeKey.Empty();
	m_szID.Empty();
	m_szDescription.Empty();
	m_szcontrol_11.Empty();

}
int CSysConfigEditDialog1::SetMode(int nMode){
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
 		UpdateData(FALSE); 
 		return nOldMode; 
}
/*void CSysConfigEditDialog1::OnSTTChange(){
	
} */
/*void CSysConfigEditDialog1::OnSTTSetfocus(){
	
} */
/*void CSysConfigEditDialog1::OnSTTKillfocus(){
	
} */
int CSysConfigEditDialog1::OnSTTCheckValue(){
	return 0;
} 
void CSysConfigEditDialog1::OnDataTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CSysConfigEditDialog1::OnDataTypeSelendok(){
	 
}
/*void CSysConfigEditDialog1::OnDataTypeSetfocus(){
	
}*/
/*void CSysConfigEditDialog1::OnDataTypeKillfocus(){
	
}*/
long CSysConfigEditDialog1::OnDataTypeLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDataType.IsSearchKey() && !m_szDataTypeKey.IsEmpty()){
	};
	m_wndDataType.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDataType.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CSysConfigEditDialog1::OnDataTypeAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CSysConfigEditDialog1::OnIDChange(){
	
} */
/*void CSysConfigEditDialog1::OnIDSetfocus(){
	
} */
/*void CSysConfigEditDialog1::OnIDKillfocus(){
	
} */
int CSysConfigEditDialog1::OnIDCheckValue(){
	return 0;
} 
/*void CSysConfigEditDialog1::OnDescriptionChange(){
	
} */
/*void CSysConfigEditDialog1::OnDescriptionSetfocus(){
	
} */
/*void CSysConfigEditDialog1::OnDescriptionKillfocus(){
	
} */
int CSysConfigEditDialog1::OnDescriptionCheckValue(){
	return 0;
} 
void CSysConfigEditDialog1::OnSaveSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
/*void CSysConfigEditDialog1::Oncontrol_11Change(){
	
} */
/*void CSysConfigEditDialog1::Oncontrol_11Setfocus(){
	
} */
/*void CSysConfigEditDialog1::Oncontrol_11Killfocus(){
	
} */
int CSysConfigEditDialog1::Oncontrol_11CheckValue(){
	return 0;
} 
int CSysConfigEditDialog1::OnAddSysConfigEditDialog1(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CSysConfigEditDialog1::OnEditSysConfigEditDialog1(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CSysConfigEditDialog1::OnDeleteSysConfigEditDialog1(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
 	szSQL.Format(_T("DELETE FROM  WHERE  AND") ); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret >= 0){ 
 		SetMode(VM_NONE); 
 		OnCancelSysConfigEditDialog1(); 
 	}
	return 0;
}
int CSysConfigEditDialog1::OnSaveSysConfigEditDialog1(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		//szSQL = m_sys_configTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE")); 
 		//szSQL = m_sys_configTbl.GetUpdateSQL(_T("createdby,createddate")); 
 		szSQL += szWhere; 
 	} 
 _fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		//OnSysConfigEditDialog1ListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CSysConfigEditDialog1::OnCancelSysConfigEditDialog1(){
 	if(GetMode() == VM_EDIT) 
 	{ 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 		SetMode(VM_NONE); 
 	} 
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
 	return 0;
} 
int CSysConfigEditDialog1::OnSysConfigEditDialog1ListLoadData(){
	return 0;
}
