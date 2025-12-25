#include "VIMESDemo.h"
//#include "stdafx.h"
#include "MainFrm.h"
static int _Oncontrol_1SelectFnc(CWnd *pWnd){
	CVIMESDemo *pVw = (CVIMESDemo *)pWnd;
	return pVw->Oncontrol_1Select();
} 
static int _Oncontrol_2SelectFnc(CWnd *pWnd){
	 return ((CVIMESDemo*)pWnd)->Oncontrol_2Select();
}
static int _Oncontrol_4SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	 return ((CVIMESDemo* )pWnd)->Oncontrol_4SelectChange(nOldItemSel, nNewItemSel);
} 
static int _Oncontrol_4SetfocusFnc(CWnd *pWnd){
	 return ((CVIMESDemo *)pWnd)->Oncontrol_4Killfocus();
}
static int _Oncontrol_4KillfocusFnc(CWnd *pWnd){
	 return ((CVIMESDemo *)pWnd)->Oncontrol_4Killfocus();
}
static int _Oncontrol_4LoadDataFnc(CWnd *pWnd){
	 return ((CVIMESDemo *)pWnd)->Oncontrol_4LoadData();
}
static int _Oncontrol_4AddNewFnc(CWnd *pWnd){
	 return ((CVIMESDemo *)pWnd)->Oncontrol_4AddNew();
}
static int _Oncontrol_6ChangeFnc(CWnd *pWnd){
	 return ((CVIMESDemo *)pWnd)->Oncontrol_6Change();
} 
static int _Oncontrol_6SetfocusFnc(CWnd *pWnd){
	 return ((CVIMESDemo *)pWnd)->Oncontrol_6Killfocus();
} 
static int _Oncontrol_6KillfocusFnc(CWnd *pWnd){
	 return ((CVIMESDemo *)pWnd)->Oncontrol_6Killfocus();
} 
static int _Oncontrol_6CheckValueFnc(CWnd *pWnd){
	 return ((CVIMESDemo *)pWnd)->Oncontrol_6CheckValue();
} 
static int _Oncontrol_8ChangeFnc(CWnd *pWnd){
	 return ((CVIMESDemo *)pWnd)->Oncontrol_8Change();
} 
static int _Oncontrol_8SetfocusFnc(CWnd *pWnd){
	 return ((CVIMESDemo *)pWnd)->Oncontrol_8Killfocus();
} 
static int _Oncontrol_8KillfocusFnc(CWnd *pWnd){
	 return ((CVIMESDemo *)pWnd)->Oncontrol_8Killfocus();
} 
static int _Oncontrol_8CheckValueFnc(CWnd *pWnd){
	 return ((CVIMESDemo *)pWnd)->Oncontrol_8CheckValue();
} 
static int _Oncontrol_10ChangeFnc(CWnd *pWnd){
	 return ((CVIMESDemo *)pWnd)->Oncontrol_10Change();
} 
static int _Oncontrol_10SetfocusFnc(CWnd *pWnd){
	 return ((CVIMESDemo *)pWnd)->Oncontrol_10Killfocus();
} 
static int _Oncontrol_10KillfocusFnc(CWnd *pWnd){
	 return ((CVIMESDemo *)pWnd)->Oncontrol_10Killfocus();
} 
static int _Oncontrol_10CheckValueFnc(CWnd *pWnd){
	 return ((CVIMESDemo *)pWnd)->Oncontrol_10CheckValue();
} 
static int _Oncontrol_12ChangeFnc(CWnd *pWnd){
	 return ((CVIMESDemo *)pWnd)->Oncontrol_12Change();
} 
static int _Oncontrol_12SetfocusFnc(CWnd *pWnd){
	 return ((CVIMESDemo *)pWnd)->Oncontrol_12Killfocus();
} 
static int _Oncontrol_12KillfocusFnc(CWnd *pWnd){
	 return ((CVIMESDemo *)pWnd)->Oncontrol_12Killfocus();
} 
static int _Oncontrol_12CheckValueFnc(CWnd *pWnd){
	 return ((CVIMESDemo *)pWnd)->Oncontrol_12CheckValue();
} 
static int _Oncontrol_14ChangeFnc(CWnd *pWnd){
	 return ((CVIMESDemo *)pWnd)->Oncontrol_14Change();
} 
static int _Oncontrol_14SetfocusFnc(CWnd *pWnd){
	 return ((CVIMESDemo *)pWnd)->Oncontrol_14Killfocus();
} 
static int _Oncontrol_14KillfocusFnc(CWnd *pWnd){
	 return ((CVIMESDemo *)pWnd)->Oncontrol_14Killfocus();
} 
static int _Oncontrol_14CheckValueFnc(CWnd *pWnd){
	 return ((CVIMESDemo *)pWnd)->Oncontrol_14CheckValue();
} 
static int _Oncontrol_16ChangeFnc(CWnd *pWnd){
	 return ((CVIMESDemo *)pWnd)->Oncontrol_16Change();
} 
static int _Oncontrol_16SetfocusFnc(CWnd *pWnd){
	 return ((CVIMESDemo *)pWnd)->Oncontrol_16Killfocus();
} 
static int _Oncontrol_16KillfocusFnc(CWnd *pWnd){
	 return ((CVIMESDemo *)pWnd)->Oncontrol_16Killfocus();
} 
static int _Oncontrol_16CheckValueFnc(CWnd *pWnd){
	 return ((CVIMESDemo *)pWnd)->Oncontrol_16CheckValue();
} 
static int _Oncontrol_17LoadDataFnc(CWnd *pWnd){
	 return ((CVIMESDemo*)pWnd)->Oncontrol_17LoadData();
} 
static int _Oncontrol_17DblClickFnc(CWnd *pWnd){
	 return ((CVIMESDemo*)pWnd)->Oncontrol_17DblClickFnc();
} 
static int _Oncontrol_17SelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	 return ((CVIMESDemo*)pWnd)->Oncontrol_17SelectChange(nOldItem, nNewItem);
} 
static int _Oncontrol_17DeleteItemFnc(CWnd *pWnd){
	 return ((CVIMESDemo*)pWnd)->Oncontrol_17DeleteItem();
} 
static int _OnAddVIMESDemoFnc(CWnd *pWnd){
	 return ((CVIMESDemo*)pWnd)->OnAddVIMESDemo();
} 
static int _OnEditVIMESDemoFnc(CWnd *pWnd){
	 return ((CVIMESDemo*)pWnd)->OnEditVIMESDemo();
} 
static int _OnDeleteVIMESDemoFnc(CWnd *pWnd){
	 return ((CVIMESDemo*)pWnd)->OnDeleteVIMESDemo();
} 
static int _OnSaveVIMESDemoFnc(CWnd *pWnd){
	 return ((CVIMESDemo*)pWnd)->OnSaveVIMESDemo();
} 
static int _OnCancelVIMESDemoFnc(CWnd *pWnd){
	 return ((CVIMESDemo*)pWnd)->OnCancelVIMESDemo();
} 
CVIMESDemo::CVIMESDemo(){

	m_nDlgWidth = 600;
	m_nDlgHeight = 400;
	SetDefaultValues();
}
CVIMESDemo::~CVIMESDemo(){
}
void CVIMESDemo::OnCreateComponents(){
	m_wndcontrol_0.Create(this, _T("control_0"), 126, 5, 176, 25);
	m_wndcontrol_1.Create(this, _T("control_1"), 206, 29, 276, 53);
	m_wndcontrol_2.Create(this, _T("control_2"), 388, 9, 438, 29);
	m_wndLabel_3.Create(this, _T("Label_3"), 60, 174, 110, 194);
	m_wndcontrol_4.Create(this,115, 174, 329, 194); 
	m_wndLabel_5.Create(this, _T("Label_5"), 60, 196, 110, 216);
	m_wndcontrol_6.Create(this,115, 196, 185, 216); 
	m_wndLabel_7.Create(this, _T("Label_7"), 60, 60, 110, 80);
	m_wndcontrol_8.Create(this,115, 60, 185, 80); 
	m_wndLabel_9.Create(this, _T("Label_9"), 60, 107, 110, 127);
	m_wndcontrol_10.Create(this,115, 107, 190, 127); 
	m_wndLabel_11.Create(this, _T("Label_11"), 60, 147, 110, 167);
	m_wndcontrol_12.Create(this,115, 147, 185, 167); 
	m_wndLabel_13.Create(this, _T("Label_13"), 488, 107, 538, 127);
	m_wndcontrol_14.Create(this,538, 107, 578, 127); 
	m_wndLabel_15.Create(this, _T("Label_15"), 60, 223, 110, 243);
	m_wndcontrol_16.Create(this,115, 223, 185, 243); 
	m_wndcontrol_17.Create(this,66, 248, 336, 370); 

}
void CVIMESDemo::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndcontrol_4.SetDataRequirement(TRUE);
	m_wndcontrol_4.LimitText(1024);
	m_wndcontrol_6.SetLimitText(1024);
	m_wndcontrol_6.SetDataRequirement(TRUE);
	m_wndcontrol_10.SetLimitText(1024);
	m_wndcontrol_10.SetDataRequirement(TRUE);
	m_wndcontrol_12.SetMax(CDate(pMF->GetSysDate()));
	m_wndcontrol_12.SetDataRequirement(TRUE);
	m_wndcontrol_14.SetMax(CDate(pMF->GetSysTime()));
	m_wndcontrol_14.SetDataRequirement(TRUE);
	m_wndcontrol_16.SetMax(CDate(pMF->GetSysDateTime()));
	m_wndcontrol_16.SetDataRequirement(TRUE);


	m_wndcontrol_4.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndcontrol_4.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndcontrol_17.InsertColumn(0, _T("ID"), CFMT_NUMBER, 100);
	m_wndcontrol_17.InsertColumn(1, _T("Name"), CFMT_TEXT, 100);

}
void CVIMESDemo::OnSetWindowEvents(){
	m_wndcontrol_1.SetEvent(WE_CLICK, _Oncontrol_1SelectFnc);
	m_wndcontrol_2.SetEvent(WE_CLICK, _Oncontrol_2SelectFnc);
	m_wndcontrol_4.SetEvent(WE_CHANGE, _Oncontrol_4SelectChangeFnc);
	//m_wndcontrol_4.SetEvent(WE_SETFOCUS, _Oncontrol_4SetfocusFnc);
	//m_wndcontrol_4.SetEvent(WE_KILLFOCUS, _Oncontrol_4KillfocusFnc);
	m_wndcontrol_4.SetEvent(WE_SELCHANGE, _Oncontrol_4SelectChangeFnc);
	m_wndcontrol_4.SetEvent(WE_LOADDATA, _Oncontrol_4LoadDataFnc);
	m_wndcontrol_4.SetEvent(WE_ADDNEW, _Oncontrol_4AddNewFnc);
	m_wndcontrol_6.SetEvent(WE_CHANGE, _Oncontrol_6ChangeFnc);
	//m_wndcontrol_6.SetEvent(WE_SETFOCUS, _Oncontrol_6SetfocusFnc);
	//m_wndcontrol_6.SetEvent(WE_KILLFOCUS, _Oncontrol_6KillfocusFnc);
	m_wndcontrol_6.SetEvent(WE_CHECKVALUE, _Oncontrol_6CheckValueFnc);
	m_wndcontrol_8.SetEvent(WE_CHANGE, _Oncontrol_8ChangeFnc);
	//m_wndcontrol_8.SetEvent(WE_SETFOCUS, _Oncontrol_8SetfocusFnc);
	//m_wndcontrol_8.SetEvent(WE_KILLFOCUS, _Oncontrol_8KillfocusFnc);
	m_wndcontrol_8.SetEvent(WE_CHECKVALUE, _Oncontrol_8CheckValueFnc);
	m_wndcontrol_10.SetEvent(WE_CHANGE, _Oncontrol_10ChangeFnc);
	//m_wndcontrol_10.SetEvent(WE_SETFOCUS, _Oncontrol_10SetfocusFnc);
	//m_wndcontrol_10.SetEvent(WE_KILLFOCUS, _Oncontrol_10KillfocusFnc);
	m_wndcontrol_10.SetEvent(WE_CHECKVALUE, _Oncontrol_10CheckValueFnc);
	m_wndcontrol_12.SetEvent(WE_CHANGE, _Oncontrol_12ChangeFnc);
	//m_wndcontrol_12.SetEvent(WE_SETFOCUS, _Oncontrol_12SetfocusFnc);
	//m_wndcontrol_12.SetEvent(WE_KILLFOCUS, _Oncontrol_12KillfocusFnc);
	m_wndcontrol_12.SetEvent(WE_CHECKVALUE, _Oncontrol_12CheckValueFnc);
	m_wndcontrol_14.SetEvent(WE_CHANGE, _Oncontrol_14ChangeFnc);
	//m_wndcontrol_14.SetEvent(WE_SETFOCUS, _Oncontrol_14SetfocusFnc);
	//m_wndcontrol_14.SetEvent(WE_KILLFOCUS, _Oncontrol_14KillfocusFnc);
	m_wndcontrol_14.SetEvent(WE_CHECKVALUE, _Oncontrol_14CheckValueFnc);
	m_wndcontrol_16.SetEvent(WE_CHANGE, _Oncontrol_16ChangeFnc);
	//m_wndcontrol_16.SetEvent(WE_SETFOCUS, _Oncontrol_16SetfocusFnc);
	//m_wndcontrol_16.SetEvent(WE_KILLFOCUS, _Oncontrol_16KillfocusFnc);
	m_wndcontrol_16.SetEvent(WE_CHECKVALUE, _Oncontrol_16CheckValueFnc);
	m_wndcontrol_17.SetEvent(WE_SELCHANGE, _Oncontrol_17SelectChangeFnc);
	m_wndcontrol_17.SetEvent(WE_LOADDATA, _Oncontrol_17LoadDataFnc);
	m_wndcontrol_17.SetEvent(WE_DBLCLICK, _Oncontrol_17DblClickFnc);
	m_wndcontrol_17.AddEvent(1, _T("Delete"), _Oncontrol_17DeleteItemFnc, 0, VK_DELETE, 0);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddVIMESDemoFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditVIMESDemoFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteVIMESDemoFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveVIMESDemoFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelVIMESDemoFnc, 0, 'T', VK_CONTROL);

}
void CVIMESDemo::OnDoDataExchange(CDataExchange* pDX){
	DDX_Check(pDX, m_wndcontrol_2.GetDlgCtrlID(), m_bcontrol_2);
	DDX_TextEx(pDX, m_wndcontrol_4.GetDlgCtrlID(), m_szcontrol_4Key);
	DDX_Text(pDX, m_wndcontrol_6.GetDlgCtrlID(), m_szcontrol_6);
	DDX_TextEx(pDX, m_wndcontrol_8.GetDlgCtrlID(), m_szcontrol_8);
	DDX_Text(pDX, m_wndcontrol_10.GetDlgCtrlID(), m_ncontrol_10);
	DDX_TextEx(pDX, m_wndcontrol_12.GetDlgCtrlID(), m_szcontrol_12);
	DDX_TextEx(pDX, m_wndcontrol_14.GetDlgCtrlID(), m_szcontrol_14);
	DDX_TextEx(pDX, m_wndcontrol_16.GetDlgCtrlID(), m_szcontrol_16);

}
void CVIMESDemo::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CVIMESDemo::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CVIMESDemo::SetDefaultValues(){

	m_bcontrol_2=FALSE;
	m_szcontrol_4Key.Empty();
	m_szcontrol_6.Empty();
	m_szcontrol_8.Empty();
	m_ncontrol_10=0;
	m_szcontrol_12.Empty();
	m_szcontrol_14.Empty();
	m_szcontrol_16.Empty();

}
int CVIMESDemo::Oncontrol_1Select(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
	int CVIMESDemo::Oncontrol_2Select(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return 0;
}
int CVIMESDemo::Oncontrol_4SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CVIMESDemo::Oncontrol_4Setfocus(){
	 return 0;
}
int CVIMESDemo::Oncontrol_4Killfocus(){
	 return 0;
}
int CVIMESDemo::Oncontrol_4LoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndcontrol_4.IsSearchKey()){
	};
	m_wndcontrol_4.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndcontrol_4.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
int CVIMESDemo::Oncontrol_4AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CVIMESDemo::Oncontrol_6Change(){
	return 0;
} 
int CVIMESDemo::Oncontrol_6Setfocus(){
	return 0;
} 
int CVIMESDemo::Oncontrol_6Killfocus(){
	return 0;
} 
int CVIMESDemo::Oncontrol_6CheckValue(){
	return 0;
} 
int CVIMESDemo::Oncontrol_8Change(){
	return 0;
} 
int CVIMESDemo::Oncontrol_8Setfocus(){
	return 0;
} 
int CVIMESDemo::Oncontrol_8Killfocus(){
	return 0;
} 
int CVIMESDemo::Oncontrol_8CheckValue(){
	return 0;
} 
int CVIMESDemo::Oncontrol_10Change(){
	return 0;
} 
int CVIMESDemo::Oncontrol_10Setfocus(){
	return 0;
} 
int CVIMESDemo::Oncontrol_10Killfocus(){
	return 0;
} 
int CVIMESDemo::Oncontrol_10CheckValue(){
	return 0;
} 
int CVIMESDemo::Oncontrol_12Change(){
	return 0;
} 
int CVIMESDemo::Oncontrol_12Setfocus(){
	return 0;
} 
int CVIMESDemo::Oncontrol_12Killfocus(){
	return 0;
} 
int CVIMESDemo::Oncontrol_12CheckValue(){
	return 0;
} 
int CVIMESDemo::Oncontrol_14Change(){
	return 0;
} 
int CVIMESDemo::Oncontrol_14Setfocus(){
	return 0;
} 
int CVIMESDemo::Oncontrol_14Killfocus(){
	return 0;
} 
int CVIMESDemo::Oncontrol_14CheckValue(){
	return 0;
} 
int CVIMESDemo::Oncontrol_16Change(){
	return 0;
} 
int CVIMESDemo::Oncontrol_16Setfocus(){
	return 0;
} 
int CVIMESDemo::Oncontrol_16Killfocus(){
	return 0;
} 
int CVIMESDemo::Oncontrol_16CheckValue(){
	return 0;
} 
int CVIMESDemo::Oncontrol_17DblClick(){
	 return 0;
} 
int CVIMESDemo::Oncontrol_17SelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CVIMESDemo::Oncontrol_17DeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CVIMESDemo::Oncontrol_17LoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndcontrol_17.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndcontrol_17.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
int CVIMESDemo::OnAddVIMESDemo(){
	EnableControls(TRUE);
	SetMode(VM_ADD);
	return 0;
} 
int CVIMESDemo::OnEditVIMESDemo(){
	EnableControls(TRUE);
	SetMode(VM_EDIT);
	return 0;
} 
int CVIMESDemo::OnDeleteVIMESDemo(){
	SetMode(VM_NONE);
	return 0;
} 
int CVIMESDemo::OnSaveVIMESDemo(){
	EnableControls(FALSE);
	SetMode(VM_VIEW);
	return 0;
} 
int CVIMESDemo::OnCancelVIMESDemo(){
	EnableControls(FALSE);
	SetMode(VM_NONE);
	return 0;
} 
