#include "SysSetupPanel.h"
//#include "stdafx.h"
#include "HMSMainFrame.h"
static int _OnSetupListLoadDataFnc(CWnd *pWnd){
	 return ((CSysSetupPanel*)pWnd)->OnSetupListLoadData();
} 
static int _OnSetupListDblClickFnc(CWnd *pWnd){
	return ((CSysSetupPanel*)pWnd)->OnSetupListDblClick();
} 
static int _OnSetupListSelChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	 return ((CSysSetupPanel*)pWnd)->OnSetupListSelChange(nOldItem, nNewItem);
} 
static int _OnSetupListDeleteItemFnc(CWnd *pWnd){
	 return ((CSysSetupPanel*)pWnd)->OnSetupListDeleteItem();
} 
CSysSetupPanel::CSysSetupPanel(){

	m_nDlgWidth = 600;
	m_nDlgHeight = 400;
}
CSysSetupPanel::~CSysSetupPanel(){
}
void CSysSetupPanel::OnCreateComponents(){
	m_wndSetupList.Create(this,6, 9, 204, 397); 
	m_wndSetup.Create(this, CRect(208, 9, 208, 9));

}
void CSysSetupPanel::OnInitializeComponents(){


	m_wndSetupList.InsertColumn(0, _T("ID"), CFMT_NUMBER, 30);
	m_wndSetupList.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	OnSetupListLoadData();

}
void CSysSetupPanel::OnSetWindowEvents(){
	m_wndSetupList.SetEvent(WE_SELCHANGE, _OnSetupListSelChangeFnc);
	m_wndSetupList.SetEvent(WE_LOADDATA, _OnSetupListLoadDataFnc);
	m_wndSetupList.SetEvent(WE_DBLCLICK, _OnSetupListDblClickFnc);
	m_wndSetupList.AddEvent(1, _T("Delete"), _OnSetupListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndSetupList.AddEvent(2, _T("Refresh"), _OnSetupListLoadDataFnc, 0, VK_F5);

}
void CSysSetupPanel::OnDoDataExchange(CDataExchange* pDX){

}
void CSysSetupPanel::GetDataToScreen(){

}
void CSysSetupPanel::GetScreenToData(){

}
int CSysSetupPanel::OnSetupListDblClick(){
	 return 0;
} 
int CSysSetupPanel::OnSetupListSelChange(int nOldItem, int nNewItem){
	 return 0;
} 
int CSysSetupPanel::OnSetupListDeleteItem(){
	 return 0;
} 



int CSysSetupPanel::OnSetupListLoadData(){
	
	return 0;
}
