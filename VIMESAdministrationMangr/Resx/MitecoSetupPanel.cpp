#include "VIMESSetupPanel.h"
//#include "stdafx.h"
//#include "MainFrm.h"
static int _OnSetupListLoadDataFnc(CWnd *pWnd){
	 return ((CVIMESSetupPanel*)pWnd)->OnSetupListLoadData();
} 
static int _OnSetupListDblClickFnc(CWnd *pWnd){
	 return ((CVIMESSetupPanel*)pWnd)->OnSetupListLoadData();
} 
static int _OnSetupListSelChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	 return ((CVIMESSetupPanel*)pWnd)->OnSetupListSelChange(nOldItem, nNewItem);
} 
static int _OnSetupListDeleteItemFnc(CWnd *pWnd){
	 return ((CVIMESSetupPanel*)pWnd)->OnSetupListDeleteItem();
} 
CVIMESSetupPanel::CVIMESSetupPanel(){

	m_nDlgWidth = 600;
	m_nDlgHeight = 473;
}
CVIMESSetupPanel::~CVIMESSetupPanel(){
}
void CVIMESSetupPanel::OnCreateComponents(){
	m_wndSetupList.Create(this,5, 5, 203, 468); 

}
void CVIMESSetupPanel::OnInitializeComponents(){


	m_wndSetupList.InsertColumn(0, _T("ID"), CFMT_NUMBER, 30);
	m_wndSetupList.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CVIMESSetupPanel::OnSetWindowEvents(){
	m_wndSetupList.SetEvent(WE_SELCHANGE, _OnSetupListSelChangeFnc);
	m_wndSetupList.SetEvent(WE_LOADDATA, _OnSetupListLoadDataFnc);
	m_wndSetupList.SetEvent(WE_DBLCLICK, _OnSetupListDblClickFnc);
	m_wndSetupList.AddEvent(1, _T("Delete"), _OnSetupListDeleteItemFnc, 0, VK_DELETE, 0);

}
void CVIMESSetupPanel::OnDoDataExchange(CDataExchange* pDX){

}
void CVIMESSetupPanel::OnGetDataToScreen(){

}
void CVIMESSetupPanel::OnGetScreenToData(){

}
int CVIMESSetupPanel::OnSetupListDblClick(){
	 return 0;
} 
int CVIMESSetupPanel::OnSetupListSelChange(int nOldItem, int nNewItem){
	 return 0;
} 
int CVIMESSetupPanel::OnSetupListDeleteItem(){
	 return 0;
} 
int CVIMESSetupPanel::OnSetupListLoadData(){
/*

	struct DbView _pl_SetupListView[]={ 
		{_T("ID"), RSDE_INT, RSDE_NUM_SIZE} , 
		{_T("Name"), RSDE_STR, 150} 
	}
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	RSDEPLSQL pl_SetupListList;
	pl_SetupListList = new RSDEPLSQL(pMF, _T("plsql_SetupList"), _pl_SetupListView, sizeof(_pl_SetupListView)/sizeof(DbView));
	CString szSQL;
	m_wndSetupList.DeleteAllItems(); 
	int foundFlg = pl_SetupListList->exec(szSQL);
	while(foundFlg){ 
		m_wndSetupList.AddItems(
			pl_SetupListList->getFld(_T("ID"), 
			pl_SetupListList->getFld(_T("Name"), NULL);
		foundFlg = pl_SetupListList->findItem(NEXT);
	}
	delete pl_SetupListList; pl_SetupListList = NULL; 
*/
	return 0;
}
