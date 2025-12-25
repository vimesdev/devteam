#include "HMSPCDescribeSetup.h"
//#include "stdafx.h"
#include "MainFrm.h"
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSPCDescribeSetup*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSPCDescribeSetup*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSPCDescribeSetup*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSPCDescribeSetup*)pWnd)->OnListDeleteItem();
} 
static void _OnDescIDSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSPCDescribeSetup* )pWnd)->OnDescIDSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDescIDSelendokFnc(CWnd *pWnd){
	((CHMSPCDescribeSetup *)pWnd)->OnDescIDSelendok();
}
/*static void _OnDescIDSetfocusFnc(CWnd *pWnd){
	((CHMSPCDescribeSetup *)pWnd)->OnDescIDKillfocus();
}*/
/*static void _OnDescIDKillfocusFnc(CWnd *pWnd){
	((CHMSPCDescribeSetup *)pWnd)->OnDescIDKillfocus();
}*/
static long _OnDescIDLoadDataFnc(CWnd *pWnd){
	return ((CHMSPCDescribeSetup *)pWnd)->OnDescIDLoadData();
}
/*static void _OnDescIDAddNewFnc(CWnd *pWnd){
	((CHMSPCDescribeSetup *)pWnd)->OnDescIDAddNew();
}*/
/*static void _OnIndexChangeFnc(CWnd *pWnd){
	((CHMSPCDescribeSetup *)pWnd)->OnIndexChange();
} */
/*static void _OnIndexSetfocusFnc(CWnd *pWnd){
	((CHMSPCDescribeSetup *)pWnd)->OnIndexSetfocus();} */ 
/*static void _OnIndexKillfocusFnc(CWnd *pWnd){
	((CHMSPCDescribeSetup *)pWnd)->OnIndexKillfocus();
} */
static int _OnIndexCheckValueFnc(CWnd *pWnd){
	return ((CHMSPCDescribeSetup *)pWnd)->OnIndexCheckValue();
} 
/*static void _OnTypeChangeFnc(CWnd *pWnd){
	((CHMSPCDescribeSetup *)pWnd)->OnTypeChange();
} */
/*static void _OnTypeSetfocusFnc(CWnd *pWnd){
	((CHMSPCDescribeSetup *)pWnd)->OnTypeSetfocus();} */ 
/*static void _OnTypeKillfocusFnc(CWnd *pWnd){
	((CHMSPCDescribeSetup *)pWnd)->OnTypeKillfocus();
} */
static int _OnTypeCheckValueFnc(CWnd *pWnd){
	return ((CHMSPCDescribeSetup *)pWnd)->OnTypeCheckValue();
} 
/*static void _OnWidthChangeFnc(CWnd *pWnd){
	((CHMSPCDescribeSetup *)pWnd)->OnWidthChange();
} */
/*static void _OnWidthSetfocusFnc(CWnd *pWnd){
	((CHMSPCDescribeSetup *)pWnd)->OnWidthSetfocus();} */ 
/*static void _OnWidthKillfocusFnc(CWnd *pWnd){
	((CHMSPCDescribeSetup *)pWnd)->OnWidthKillfocus();
} */
static int _OnWidthCheckValueFnc(CWnd *pWnd){
	return ((CHMSPCDescribeSetup *)pWnd)->OnWidthCheckValue();
} 
/*static void _OnHeightChangeFnc(CWnd *pWnd){
	((CHMSPCDescribeSetup *)pWnd)->OnHeightChange();
} */
/*static void _OnHeightSetfocusFnc(CWnd *pWnd){
	((CHMSPCDescribeSetup *)pWnd)->OnHeightSetfocus();} */ 
/*static void _OnHeightKillfocusFnc(CWnd *pWnd){
	((CHMSPCDescribeSetup *)pWnd)->OnHeightKillfocus();
} */
static int _OnHeightCheckValueFnc(CWnd *pWnd){
	return ((CHMSPCDescribeSetup *)pWnd)->OnHeightCheckValue();
} 
/*static void _OnColumnChangeFnc(CWnd *pWnd){
	((CHMSPCDescribeSetup *)pWnd)->OnColumnChange();
} */
/*static void _OnColumnSetfocusFnc(CWnd *pWnd){
	((CHMSPCDescribeSetup *)pWnd)->OnColumnSetfocus();} */ 
/*static void _OnColumnKillfocusFnc(CWnd *pWnd){
	((CHMSPCDescribeSetup *)pWnd)->OnColumnKillfocus();
} */
static int _OnColumnCheckValueFnc(CWnd *pWnd){
	return ((CHMSPCDescribeSetup *)pWnd)->OnColumnCheckValue();
} 
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CHMSPCDescribeSetup *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CHMSPCDescribeSetup *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CHMSPCDescribeSetup *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSPCDescribeSetup *)pWnd)->OnNameCheckValue();
} 
/*static void _OnCaptionChangeFnc(CWnd *pWnd){
	((CHMSPCDescribeSetup *)pWnd)->OnCaptionChange();
} */
/*static void _OnCaptionSetfocusFnc(CWnd *pWnd){
	((CHMSPCDescribeSetup *)pWnd)->OnCaptionSetfocus();} */ 
/*static void _OnCaptionKillfocusFnc(CWnd *pWnd){
	((CHMSPCDescribeSetup *)pWnd)->OnCaptionKillfocus();
} */
static int _OnCaptionCheckValueFnc(CWnd *pWnd){
	return ((CHMSPCDescribeSetup *)pWnd)->OnCaptionCheckValue();
} 
/*static void _OnDefaultValueChangeFnc(CWnd *pWnd){
	((CHMSPCDescribeSetup *)pWnd)->OnDefaultValueChange();
} */
/*static void _OnDefaultValueSetfocusFnc(CWnd *pWnd){
	((CHMSPCDescribeSetup *)pWnd)->OnDefaultValueSetfocus();} */ 
/*static void _OnDefaultValueKillfocusFnc(CWnd *pWnd){
	((CHMSPCDescribeSetup *)pWnd)->OnDefaultValueKillfocus();
} */
static int _OnDefaultValueCheckValueFnc(CWnd *pWnd){
	return ((CHMSPCDescribeSetup *)pWnd)->OnDefaultValueCheckValue();
} 
/*static void _OnDataChangeFnc(CWnd *pWnd){
	((CHMSPCDescribeSetup *)pWnd)->OnDataChange();
} */
/*static void _OnDataSetfocusFnc(CWnd *pWnd){
	((CHMSPCDescribeSetup *)pWnd)->OnDataSetfocus();} */ 
/*static void _OnDataKillfocusFnc(CWnd *pWnd){
	((CHMSPCDescribeSetup *)pWnd)->OnDataKillfocus();
} */
static int _OnDataCheckValueFnc(CWnd *pWnd){
	return ((CHMSPCDescribeSetup *)pWnd)->OnDataCheckValue();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSPCDescribeSetup *pVw = (CHMSPCDescribeSetup *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CHMSPCDescribeSetup *pVw = (CHMSPCDescribeSetup *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSPCDescribeSetup *pVw = (CHMSPCDescribeSetup *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSPCDescribeSetup *pVw = (CHMSPCDescribeSetup *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSPCDescribeSetup *pVw = (CHMSPCDescribeSetup *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSPCDescribeSetup *pVw = (CHMSPCDescribeSetup *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSPCDescribeSetupFnc(CWnd *pWnd){
	 return ((CHMSPCDescribeSetup*)pWnd)->OnAddHMSPCDescribeSetup();
} 
static int _OnEditHMSPCDescribeSetupFnc(CWnd *pWnd){
	 return ((CHMSPCDescribeSetup*)pWnd)->OnEditHMSPCDescribeSetup();
} 
static int _OnDeleteHMSPCDescribeSetupFnc(CWnd *pWnd){
	 return ((CHMSPCDescribeSetup*)pWnd)->OnDeleteHMSPCDescribeSetup();
} 
static int _OnSaveHMSPCDescribeSetupFnc(CWnd *pWnd){
	 return ((CHMSPCDescribeSetup*)pWnd)->OnSaveHMSPCDescribeSetup();
} 
static int _OnCancelHMSPCDescribeSetupFnc(CWnd *pWnd){
	 return ((CHMSPCDescribeSetup*)pWnd)->OnCancelHMSPCDescribeSetup();
} 
CHMSPCDescribeSetup::CHMSPCDescribeSetup(){

	m_nDlgWidth = 605;
	m_nDlgHeight = 485;
	SetDefaultValues();
}
CHMSPCDescribeSetup::~CHMSPCDescribeSetup(){
}
void CHMSPCDescribeSetup::OnCreateComponents(){
	m_wndDescribeItems.Create(this, _T("Describe Items"), 5, 5, 600, 453);
	m_wndList.Create(this,9, 27, 595, 290); 
	m_wndDescIDLabel.Create(this, _T("Desc ID"), 11, 295, 92, 317);
	m_wndDescID.Create(this,97, 295, 363, 317); 
	m_wndIndexLabel.Create(this, _T("Index"), 11, 322, 92, 344);
	m_wndIndex.Create(this,97, 322, 147, 344); 
	m_wndTypeLabel.Create(this, _T("Type"), 152, 322, 198, 344);
	m_wndType.Create(this,203, 322, 253, 344); 
	m_wndWidthLabel.Create(this, _T("Width"), 258, 322, 308, 344);
	m_wndWidth.Create(this,313, 322, 363, 344); 
	m_wndHeightLabel.Create(this, _T("Height"), 368, 322, 418, 344);
	m_wndHeight.Create(this,423, 322, 473, 344); 
	m_wndColumnLabel.Create(this, _T("Column"), 478, 322, 528, 344);
	m_wndColumn.Create(this,533, 322, 595, 344); 
	m_wndNameLabel.Create(this, _T("Name"), 11, 349, 92, 371);
	m_wndName.Create(this,97, 349, 253, 371); 
	m_wndCaptionLabel.Create(this, _T("Caption"), 258, 349, 308, 371);
	m_wndCaption.Create(this,313, 349, 595, 371); 
	m_wndDefaultValueLabel.Create(this, _T("Default Value"), 11, 376, 92, 398);
	m_wndDefaultValue.Create(this,97, 376, 595, 398); 
	m_wndDataLabel.Create(this, _T("Data"), 11, 403, 92, 425);
	m_wndData.Create(this,97, 403, 595, 447); 
	m_wndAdd.Create(this, _T("&Add"), 154, 458, 224, 480);
	m_wndEdit.Create(this, _T("&Edit"), 229, 458, 299, 480);
	m_wndDelete.Create(this, _T("&Delete"), 304, 458, 374, 480);
	m_wndSave.Create(this, _T("&Save"), 379, 458, 449, 480);
	m_wndCancel.Create(this, _T("&Cancel"), 454, 458, 524, 480);
	m_wndClose.Create(this, _T("&Close"), 529, 458, 599, 480);

}
void CHMSPCDescribeSetup::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndDescID.SetCheckValue(true);
	m_wndDescID.LimitText(35);
	m_wndIndex.SetCheckValue(true);
	m_wndType.SetCheckValue(true);
	m_wndWidth.SetCheckValue(true);
	m_wndHeight.SetCheckValue(true);
	m_wndColumn.SetCheckValue(true);
	m_wndName.SetLimitText(35);
	m_wndName.SetCheckValue(true);
	m_wndCaption.SetLimitText(81);
	m_wndCaption.SetCheckValue(true);
	m_wndDefaultValue.SetLimitText(254);
	m_wndDefaultValue.SetCheckValue(true);
	m_wndData.SetLimitText(512);
	m_wndData.SetCheckValue(true);


	m_wndList.InsertColumn(0, _T("Index"), CFMT_NUMBER, 30);
	m_wndList.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);
	m_wndList.InsertColumn(2, _T("Caption"), CFMT_TEXT, 150);
	m_wndList.InsertColumn(3, _T("Type"), CFMT_NUMBER, 40);
	m_wndList.InsertColumn(4, _T("Width"), CFMT_NUMBER, 60);
	m_wndList.InsertColumn(5, _T("Height"), CFMT_NUMBER, 70);
	m_wndList.InsertColumn(6, _T("Column"), CFMT_NUMBER, 55);


	m_wndDescID.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndDescID.InsertColumn(1, _T("Description"), CFMT_TEXT, 200);
	m_hms_pcdescsetupTbl.SetTableName(_T("hms_pcdescsetup"));
	m_hms_pcdescsetupTbl.AddField(_T("hpds_id"), dfText, 15); 
	m_hms_pcdescsetupTbl.AddField(_T("hpds_index"), dfLong); 
	m_hms_pcdescsetupTbl.AddField(_T("hpds_name"), dfText, 35); 
	m_hms_pcdescsetupTbl.AddField(_T("hpds_caption"), dfText, 81); 
	m_hms_pcdescsetupTbl.AddField(_T("hpds_type"), dfLong); 
	m_hms_pcdescsetupTbl.AddField(_T("hpds_width"), dfLong); 
	m_hms_pcdescsetupTbl.AddField(_T("hpds_height"), dfLong); 
	m_hms_pcdescsetupTbl.AddField(_T("hpds_column"), dfLong); 
	m_hms_pcdescsetupTbl.AddField(_T("hpds_defval"), dfText, 254); 
	m_hms_pcdescsetupTbl.AddField(_T("hpds_values"), dfText, 512); 

}
void CHMSPCDescribeSetup::OnSetWindowEvents(){
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndDescID.SetEvent(WE_SELENDOK, _OnDescIDSelendokFnc);
	//m_wndDescID.SetEvent(WE_SETFOCUS, _OnDescIDSetfocusFnc);
	//m_wndDescID.SetEvent(WE_KILLFOCUS, _OnDescIDKillfocusFnc);
	m_wndDescID.SetEvent(WE_SELCHANGE, _OnDescIDSelectChangeFnc);
	m_wndDescID.SetEvent(WE_LOADDATA, _OnDescIDLoadDataFnc);
	//m_wndDescID.SetEvent(WE_ADDNEW, _OnDescIDAddNewFnc);
	//m_wndIndex.SetEvent(WE_CHANGE, _OnIndexChangeFnc);
	//m_wndIndex.SetEvent(WE_SETFOCUS, _OnIndexSetfocusFnc);
	//m_wndIndex.SetEvent(WE_KILLFOCUS, _OnIndexKillfocusFnc);
	m_wndIndex.SetEvent(WE_CHECKVALUE, _OnIndexCheckValueFnc);
	//m_wndType.SetEvent(WE_CHANGE, _OnTypeChangeFnc);
	//m_wndType.SetEvent(WE_SETFOCUS, _OnTypeSetfocusFnc);
	//m_wndType.SetEvent(WE_KILLFOCUS, _OnTypeKillfocusFnc);
	m_wndType.SetEvent(WE_CHECKVALUE, _OnTypeCheckValueFnc);
	//m_wndWidth.SetEvent(WE_CHANGE, _OnWidthChangeFnc);
	//m_wndWidth.SetEvent(WE_SETFOCUS, _OnWidthSetfocusFnc);
	//m_wndWidth.SetEvent(WE_KILLFOCUS, _OnWidthKillfocusFnc);
	m_wndWidth.SetEvent(WE_CHECKVALUE, _OnWidthCheckValueFnc);
	//m_wndHeight.SetEvent(WE_CHANGE, _OnHeightChangeFnc);
	//m_wndHeight.SetEvent(WE_SETFOCUS, _OnHeightSetfocusFnc);
	//m_wndHeight.SetEvent(WE_KILLFOCUS, _OnHeightKillfocusFnc);
	m_wndHeight.SetEvent(WE_CHECKVALUE, _OnHeightCheckValueFnc);
	//m_wndColumn.SetEvent(WE_CHANGE, _OnColumnChangeFnc);
	//m_wndColumn.SetEvent(WE_SETFOCUS, _OnColumnSetfocusFnc);
	//m_wndColumn.SetEvent(WE_KILLFOCUS, _OnColumnKillfocusFnc);
	m_wndColumn.SetEvent(WE_CHECKVALUE, _OnColumnCheckValueFnc);
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	//m_wndCaption.SetEvent(WE_CHANGE, _OnCaptionChangeFnc);
	//m_wndCaption.SetEvent(WE_SETFOCUS, _OnCaptionSetfocusFnc);
	//m_wndCaption.SetEvent(WE_KILLFOCUS, _OnCaptionKillfocusFnc);
	m_wndCaption.SetEvent(WE_CHECKVALUE, _OnCaptionCheckValueFnc);
	//m_wndDefaultValue.SetEvent(WE_CHANGE, _OnDefaultValueChangeFnc);
	//m_wndDefaultValue.SetEvent(WE_SETFOCUS, _OnDefaultValueSetfocusFnc);
	//m_wndDefaultValue.SetEvent(WE_KILLFOCUS, _OnDefaultValueKillfocusFnc);
	m_wndDefaultValue.SetEvent(WE_CHECKVALUE, _OnDefaultValueCheckValueFnc);
	//m_wndData.SetEvent(WE_CHANGE, _OnDataChangeFnc);
	//m_wndData.SetEvent(WE_SETFOCUS, _OnDataSetfocusFnc);
	//m_wndData.SetEvent(WE_KILLFOCUS, _OnDataKillfocusFnc);
	m_wndData.SetEvent(WE_CHECKVALUE, _OnDataCheckValueFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);

}
void CHMSPCDescribeSetup::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndDescID.GetDlgCtrlID(), m_szDescIDKey);
	DDX_Text(pDX, m_wndIndex.GetDlgCtrlID(), m_nIndex);
	DDX_Text(pDX, m_wndType.GetDlgCtrlID(), m_nType);
	DDX_Text(pDX, m_wndWidth.GetDlgCtrlID(), m_nWidth);
	DDX_Text(pDX, m_wndHeight.GetDlgCtrlID(), m_nHeight);
	DDX_Text(pDX, m_wndColumn.GetDlgCtrlID(), m_nColumn);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_Text(pDX, m_wndCaption.GetDlgCtrlID(), m_szCaption);
	DDX_Text(pDX, m_wndDefaultValue.GetDlgCtrlID(), m_szDefaultValue);
	DDX_Text(pDX, m_wndData.GetDlgCtrlID(), m_szData);

}
void CHMSPCDescribeSetup::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("hpds_index"), m_nIndex);
	rs.GetValue(_T("hpds_name"), m_szName);
	rs.GetValue(_T("hpds_caption"), m_szCaption);
	rs.GetValue(_T("hpds_type"), m_nType);
	rs.GetValue(_T("hpds_width"), m_nWidth);
	rs.GetValue(_T("hpds_height"), m_nHeight);
	rs.GetValue(_T("hpds_column"), m_nColumn);
	rs.GetValue(_T("hpds_defval"), m_szDefaultValue);
	rs.GetValue(_T("hpds_values"), m_szData);

}
void CHMSPCDescribeSetup::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_hms_pcdescsetupTbl.SetValue(_T("hpds_index"), m_nIndex);
	m_hms_pcdescsetupTbl.SetValue(_T("hpds_name"), m_szName);
	m_hms_pcdescsetupTbl.SetValue(_T("hpds_caption"), m_szCaption);
	m_hms_pcdescsetupTbl.SetValue(_T("hpds_type"), m_nType);
	m_hms_pcdescsetupTbl.SetValue(_T("hpds_width"), m_nWidth);
	m_hms_pcdescsetupTbl.SetValue(_T("hpds_height"), m_nHeight);
	m_hms_pcdescsetupTbl.SetValue(_T("hpds_column"), m_nColumn);
	m_hms_pcdescsetupTbl.SetValue(_T("hpds_defval"), m_szDefaultValue);
	m_hms_pcdescsetupTbl.SetValue(_T("hpds_values"), m_szData);

}
void CHMSPCDescribeSetup::SetDefaultValues(){

	m_szDescIDKey.Empty();
	m_nIndex=0;
	m_nType=0;
	m_nWidth=0;
	m_nHeight=0;
	m_nColumn=0;
	m_szName.Empty();
	m_szCaption.Empty();
	m_szDefaultValue.Empty();
	m_szData.Empty();

}
int CHMSPCDescribeSetup::SetMode(int nMode){ 
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
void CHMSPCDescribeSetup::OnListDblClick(){
	
} 
void CHMSPCDescribeSetup::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSPCDescribeSetup::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSPCDescribeSetup::OnListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	m_wndList.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("Index")), 
			rs.GetValue(_T("Name")), 
			rs.GetValue(_T("Caption")), 
			rs.GetValue(_T("Type")), 
			rs.GetValue(_T("Width")), 
			rs.GetValue(_T("Height")), 
			rs.GetValue(_T("Column")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CHMSPCDescribeSetup::OnDescIDSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPCDescribeSetup::OnDescIDSelendok(){
	 
}
/*void CHMSPCDescribeSetup::OnDescIDSetfocus(){
	
}*/
/*void CHMSPCDescribeSetup::OnDescIDKillfocus(){
	
}*/
long CHMSPCDescribeSetup::OnDescIDLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDescID.IsSearchKey()){
	};
	m_wndDescID.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDescID.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSPCDescribeSetup::OnDescIDAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSPCDescribeSetup::OnIndexChange(){
	
} */
/*void CHMSPCDescribeSetup::OnIndexSetfocus(){
	
} */
/*void CHMSPCDescribeSetup::OnIndexKillfocus(){
	
} */
int CHMSPCDescribeSetup::OnIndexCheckValue(){
	return 0;
} 
/*void CHMSPCDescribeSetup::OnTypeChange(){
	
} */
/*void CHMSPCDescribeSetup::OnTypeSetfocus(){
	
} */
/*void CHMSPCDescribeSetup::OnTypeKillfocus(){
	
} */
int CHMSPCDescribeSetup::OnTypeCheckValue(){
	return 0;
} 
/*void CHMSPCDescribeSetup::OnWidthChange(){
	
} */
/*void CHMSPCDescribeSetup::OnWidthSetfocus(){
	
} */
/*void CHMSPCDescribeSetup::OnWidthKillfocus(){
	
} */
int CHMSPCDescribeSetup::OnWidthCheckValue(){
	return 0;
} 
/*void CHMSPCDescribeSetup::OnHeightChange(){
	
} */
/*void CHMSPCDescribeSetup::OnHeightSetfocus(){
	
} */
/*void CHMSPCDescribeSetup::OnHeightKillfocus(){
	
} */
int CHMSPCDescribeSetup::OnHeightCheckValue(){
	return 0;
} 
/*void CHMSPCDescribeSetup::OnColumnChange(){
	
} */
/*void CHMSPCDescribeSetup::OnColumnSetfocus(){
	
} */
/*void CHMSPCDescribeSetup::OnColumnKillfocus(){
	
} */
int CHMSPCDescribeSetup::OnColumnCheckValue(){
	return 0;
} 
/*void CHMSPCDescribeSetup::OnNameChange(){
	
} */
/*void CHMSPCDescribeSetup::OnNameSetfocus(){
	
} */
/*void CHMSPCDescribeSetup::OnNameKillfocus(){
	
} */
int CHMSPCDescribeSetup::OnNameCheckValue(){
	return 0;
} 
/*void CHMSPCDescribeSetup::OnCaptionChange(){
	
} */
/*void CHMSPCDescribeSetup::OnCaptionSetfocus(){
	
} */
/*void CHMSPCDescribeSetup::OnCaptionKillfocus(){
	
} */
int CHMSPCDescribeSetup::OnCaptionCheckValue(){
	return 0;
} 
/*void CHMSPCDescribeSetup::OnDefaultValueChange(){
	
} */
/*void CHMSPCDescribeSetup::OnDefaultValueSetfocus(){
	
} */
/*void CHMSPCDescribeSetup::OnDefaultValueKillfocus(){
	
} */
int CHMSPCDescribeSetup::OnDefaultValueCheckValue(){
	return 0;
} 
/*void CHMSPCDescribeSetup::OnDataChange(){
	
} */
/*void CHMSPCDescribeSetup::OnDataSetfocus(){
	
} */
/*void CHMSPCDescribeSetup::OnDataKillfocus(){
	
} */
int CHMSPCDescribeSetup::OnDataCheckValue(){
	return 0;
} 
void CHMSPCDescribeSetup::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPCDescribeSetup::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPCDescribeSetup::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPCDescribeSetup::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPCDescribeSetup::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPCDescribeSetup::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSPCDescribeSetup::OnAddHMSPCDescribeSetup(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Add HMSPCDescribeSetup"))) 
 		return -1; 
 	SetMode(VM_ADD);
return 0; 
 
} 
int CHMSPCDescribeSetup::OnEditHMSPCDescribeSetup(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Edit HMSPCDescribeSetup"))) 
 		return -1; 
 	SetMode(VM_EDIT);
return 0;  
 
} 
int CHMSPCDescribeSetup::OnDeleteHMSPCDescribeSetup(){
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
 		OnCancelHMSPCDescribeSetup(); 
 	}
return 0;
 } 
int CHMSPCDescribeSetup::OnSaveHMSPCDescribeSetup(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		//7szSQL = m_hms_pcdescsetupTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE")); 
 		//szSQL = m_hms_pcdescsetupTbl.GetUpdateSQL(_T("createdby,createddate")); 
 		szSQL += szWhere; 
 	} 
 _fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		//OnHMSPCDescribeSetupListLoadData(); 
 		SetMode(VM_VIEW); 
 		pMF->FinishWork(this); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSPCDescribeSetup::OnCancelHMSPCDescribeSetup(){
 	if(GetMode() == VM_EDIT) 
 	{ 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 		SetMode(VM_NONE); 
 	} 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	pMF->FinishWork(this); 
 	return 0;
} 
int CHMSPCDescribeSetup::OnHMSPCDescribeSetupListLoadData(){
	return 0;
}
