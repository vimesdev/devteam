#include "VIMESAdressDialog.h"
#include "VIMESEntryDialog.h"
#include "MainFrm.h"
static long _OnListDistLoadDataFnc(CWnd *pWnd){
	return ((CVIMESAdressDialog*)pWnd)->OnListDistLoadData();
} 
static void _OnListDistDblClickFnc(CWnd *pWnd){
	((CVIMESAdressDialog*)pWnd)->OnListDistDblClick();
} 
static void _OnListDistSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CVIMESAdressDialog*)pWnd)->OnListDistSelectChange(nOldItem, nNewItem);
} 
static int _OnListDistAddItemFnc(CWnd *pWnd){
	 return ((CVIMESAdressDialog*)pWnd)->OnListDistAddItem();
}
static int _OnListDistEditItemFnc(CWnd *pWnd){
	 return ((CVIMESAdressDialog*)pWnd)->OnListDistEditItem();
} 
static int _OnListDistDeleteItemFnc(CWnd *pWnd){
	 return ((CVIMESAdressDialog*)pWnd)->OnListDistDeleteItem();
} 

static long _OnListProvLoadDataFnc(CWnd *pWnd){
	return ((CVIMESAdressDialog*)pWnd)->OnListProvLoadData();
} 
static void _OnListProvDblClickFnc(CWnd *pWnd){
	((CVIMESAdressDialog*)pWnd)->OnListProvDblClick();
} 
static void _OnListProvSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CVIMESAdressDialog*)pWnd)->OnListProvSelectChange(nOldItem, nNewItem);
} 
static int _OnListProvAddItemFnc(CWnd *pWnd){
	 return ((CVIMESAdressDialog*)pWnd)->OnListProvAddItem();
} 

static int _OnListProvEditItemFnc(CWnd *pWnd){
	 return ((CVIMESAdressDialog*)pWnd)->OnListProvEditItem();
}
static int _OnListProvDeleteItemFnc(CWnd *pWnd){
	 return ((CVIMESAdressDialog*)pWnd)->OnListProvDeleteItem();
}

static long _OnListVilageLoadDataFnc(CWnd *pWnd){
	return ((CVIMESAdressDialog*)pWnd)->OnListVilageLoadData();
} 
static void _OnListVilageDblClickFnc(CWnd *pWnd){
	((CVIMESAdressDialog*)pWnd)->OnListVilageDblClick();
} 
static void _OnListVilageSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CVIMESAdressDialog*)pWnd)->OnListVilageSelectChange(nOldItem, nNewItem);
} 
static int _OnListVilageAddItemFnc(CWnd *pWnd){
	 return ((CVIMESAdressDialog*)pWnd)->OnListVilageAddItem();
}
static int _OnListViageEditItemFnc(CWnd *pWnd){
	 return ((CVIMESAdressDialog*)pWnd)->OnListVilageEditItem();
}
static int _OnListVilageDeleteItemFnc(CWnd *pWnd){
	 return ((CVIMESAdressDialog*)pWnd)->OnListVilageDeleteItem();
}

static int _OnAddVIMESAdressDialogFnc(CWnd *pWnd){
	 return ((CVIMESAdressDialog*)pWnd)->OnAddVIMESAdressDialog();
} 
static int _OnEditVIMESAdressDialogFnc(CWnd *pWnd){
	 return ((CVIMESAdressDialog*)pWnd)->OnEditVIMESAdressDialog();
} 
static int _OnDeleteVIMESAdressDialogFnc(CWnd *pWnd){
	 return ((CVIMESAdressDialog*)pWnd)->OnDeleteVIMESAdressDialog();
} 
static int _OnSaveVIMESAdressDialogFnc(CWnd *pWnd){
	 return ((CVIMESAdressDialog*)pWnd)->OnSaveVIMESAdressDialog();
} 
static int _OnCancelVIMESAdressDialogFnc(CWnd *pWnd){
	 return ((CVIMESAdressDialog*)pWnd)->OnCancelVIMESAdressDialog();
} 
CVIMESAdressDialog::CVIMESAdressDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 795;
	m_nDlgHeight = 605;
	SetDefaultValues();
}
CVIMESAdressDialog::~CVIMESAdressDialog(){
}
void CVIMESAdressDialog::OnCreateComponents(){
	m_wndGroupProvince.Create(this, _T("Province"), 5, 5, 393, 595);
	m_wndGroupDistrict.Create(this, _T("District"), 400, 5, 786, 305);
	m_wndVillage.Create(this, _T("Village"), 400, 309, 786, 595);
	m_wndListDist.Create(this,405, 28, 782, 302); 
	m_wndListProv.Create(this,9, 28, 389, 593); 
	m_wndListVilage.Create(this,405, 333, 782, 591); 

}
void CVIMESAdressDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);


	m_wndListDist.InsertColumn(0, _T("ID"), CFMT_NUMBER, 80);
	m_wndListDist.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);
	m_wndListDist.InsertColumn(2, _T("ShortCut"), CFMT_TEXT, 80);


	m_wndListProv.InsertColumn(0, _T("ID"), CFMT_NUMBER, 80);
	m_wndListProv.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);
	m_wndListProv.InsertColumn(2, _T("Shortcut"), CFMT_TEXT, 50);


	m_wndListVilage.InsertColumn(0, _T("ID"), CFMT_NUMBER, 80);
	m_wndListVilage.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);
	m_wndListVilage.InsertColumn(2, _T("Shortcut"), CFMT_TEXT, 50);
	m_sys_provTbl.SetTableName(_T("sys_prov"));
	m_sys_provTbl.AddField(_T("sp_id"), dfLong); 
	m_sys_provTbl.AddField(_T("sp_name"), dfLong); 
	m_sys_provTbl.AddField(_T("sp_wrd"), dfLong); 
	m_sys_distTbl.SetTableName(_T("sys_dist"));
	m_sys_distTbl.AddField(_T("sd_id"), dfLong); 
	m_sys_distTbl.AddField(_T("sd_provid"), dfLong); 
	m_sys_distTbl.AddField(_T("sd_name"), dfText, 81); 
	m_sys_distTbl.AddField(_T("sd_wrd"), dfText, 7); 
	m_sys_villTbl.SetTableName(_T("sys_vill"));
	m_sys_villTbl.AddField(_T("sv_id"), dfLong); 
	m_sys_villTbl.AddField(_T("sv_distid"), dfLong); 
	m_sys_villTbl.AddField(_T("sv_provid"), dfLong); 
	m_sys_villTbl.AddField(_T("sv_name"), dfText, 81); 
	m_sys_villTbl.AddField(_T("sv_wrd"), dfText, 7); 
	OnListProvLoadData();

}
void CVIMESAdressDialog::OnSetWindowEvents(){
	m_wndListDist.SetEvent(WE_SELCHANGE, _OnListDistSelectChangeFnc);
	m_wndListDist.SetEvent(WE_LOADDATA, _OnListDistLoadDataFnc);
	m_wndListDist.SetEvent(WE_DBLCLICK, _OnListDistDblClickFnc);
	m_wndListDist.AddEvent(1,_T("Add"),_OnListDistAddItemFnc,0,VK_ADD,0);
	m_wndListDist.AddEvent(2,_T("Edit"),_OnListDistEditItemFnc,0,0,0);
	m_wndListDist.AddEvent(3, _T("Delete"), _OnListDistDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndListProv.SetEvent(WE_SELCHANGE, _OnListProvSelectChangeFnc);
	m_wndListProv.SetEvent(WE_LOADDATA, _OnListProvLoadDataFnc);
	m_wndListProv.SetEvent(WE_DBLCLICK, _OnListProvDblClickFnc);
	m_wndListProv.AddEvent(1,_T("Add"),_OnListProvAddItemFnc,0,VK_ADD,0);
	m_wndListProv.AddEvent(2,_T("Edit"),_OnListProvEditItemFnc,0,0);
	m_wndListProv.AddEvent(3, _T("Delete"), _OnListProvDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndListVilage.SetEvent(WE_SELCHANGE, _OnListVilageSelectChangeFnc);
	m_wndListVilage.SetEvent(WE_LOADDATA, _OnListVilageLoadDataFnc);
	m_wndListVilage.SetEvent(WE_DBLCLICK, _OnListVilageDblClickFnc);
	m_wndListVilage.AddEvent(1,__T("Add"),_OnListVilageAddItemFnc,0,VK_ADD,0);	
	m_wndListVilage.AddEvent(2,__T("Edit"),_OnListViageEditItemFnc,0,0,0);
	m_wndListVilage.AddEvent(3, _T("Delete"), _OnListVilageDeleteItemFnc, 0, VK_DELETE, 0);
	/*AddEvent(1, _T("Add	Ctrl+A"), _OnAddVIMESAdressDialogFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditVIMESAdressDialogFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteVIMESAdressDialogFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveVIMESAdressDialogFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelVIMESAdressDialogFnc, 0, 'T', VK_CONTROL);*/

}
void CVIMESAdressDialog::OnDoDataExchange(CDataExchange* pDX){

}
void CVIMESAdressDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CVIMESAdressDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CVIMESAdressDialog::SetDefaultValues(){


}
int CVIMESAdressDialog::SetMode(int nMode){
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
void CVIMESAdressDialog::OnListDistDblClick(){
	
} 
void CVIMESAdressDialog::OnListDistSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	int nSel=m_wndListDist.GetCurSel();
	if (nSel < 0 ) return ;	
	m_nDistID=ToInt(m_wndListDist.GetItemText(nSel,0));			
	OnListVilageLoadData();
} 
int CVIMESAdressDialog::OnListDistAddItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	/*int nSel =m_wndListDist.GetCurSel();	
	if (nSel < 0 ) return -1 ;*/
	CVIMESEntryDialog dlg(this);
	dlg.m_nModule=1;
	dlg.SetMode(VM_ADD);	
	dlg.m_nDistID=m_nDistID;
	dlg.m_nProvID=m_nProvID;	
	dlg.DoModal();
	OnListDistLoadData();	
	 return 0;
}
int CVIMESAdressDialog::OnListDistEditItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	int nSel =m_wndListDist.GetCurSel();	
	if (nSel < 0 ) return -1 ;
	CVIMESEntryDialog dlg(this);
	dlg.m_nModule=1;
	dlg.SetMode(VM_EDIT);	
	dlg.m_nID=ToInt(m_wndListDist.GetItemText(nSel,0));
	dlg.m_szName=m_wndListDist.GetItemText(nSel,1);
	dlg.m_szShortcut=m_wndListDist.GetItemText(nSel, 2);
	dlg.DoModal();	
	OnListDistLoadData();	
	 return 0;
} 

int CVIMESAdressDialog::OnListDistDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
		int nSel =m_wndListDist.GetCurSel();	
	if (nSel < 0 ) return -1 ;
	CVIMESEntryDialog dlg(this);
	dlg.m_nModule=1;
	dlg.SetMode(VM_NONE);	
	dlg.m_nDistID=m_nDistID;
	dlg.m_nProvID=m_nProvID;
	dlg.m_nID=ToInt(m_wndListDist.GetItemText(nSel,0));
	dlg.m_szName=m_wndListDist.GetItemText(nSel,1);
	dlg.m_szShortcut=m_wndListDist.GetItemText(nSel, 2);	
	dlg.DoModal();
	OnListDistLoadData();
	 return 0;
} 

long CVIMESAdressDialog::OnListDistLoadData(){

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndListDist.BeginLoad(); 
	m_wndListDist.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T(" SELECT *  FROM sys_dist WHERE sd_provid =%ld ORDER BY sd_id"), m_nProvID);
	nCount = rs.ExecSQL(szSQL);	
	while(!rs.IsEOF()){ 
		m_wndListDist.AddItems(
			rs.GetValue(_T("sd_ID")), 
			rs.GetValue(_T("sd_Name")), 
			rs.GetValue(_T("sd_wrd")), NULL);
		rs.MoveNext();
	}
	m_wndListDist.EndLoad(); 
	return nCount;

	return 0;
}
void CVIMESAdressDialog::OnListProvDblClick(){
	
} 
void CVIMESAdressDialog::OnListProvSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	int nSel =m_wndListProv.GetCurSel();
	if (nSel < 0 ) return ;	
	m_nProvID=ToInt(m_wndListProv.GetItemText(nSel,0));
	OnListDistLoadData();
} 
int CVIMESAdressDialog::OnListProvDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
		int nSel =m_wndListProv.GetCurSel();	
	if (nSel < 0 ) return -1 ;
	CVIMESEntryDialog dlg(this);
	dlg.m_nModule=0;
	dlg.SetMode(VM_NONE);	
	dlg.m_nProvID=m_nProvID;
	dlg.m_nID=ToInt(m_wndListProv.GetItemText(nSel,0));
	dlg.m_szName=m_wndListProv.GetItemText(nSel,1);
	dlg.m_szShortcut=m_wndListProv.GetItemText(nSel, 2);
	dlg.DoModal();
	OnListProvLoadData();
	 return 0;
}
int CVIMESAdressDialog::OnListProvAddItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	int nSel =m_wndListProv.GetCurSel();
	if (nSel < 0 ) return -1 ;

	CVIMESEntryDialog dlg(this);
	dlg.m_nModule=0;
	dlg.SetMode(VM_ADD);	
	dlg.m_nProvID=m_nProvID;	
	dlg.DoModal();
	OnListProvLoadData();
	 return 0;
} 

int CVIMESAdressDialog::OnListProvEditItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();	
	int nSel =m_wndListProv.GetCurSel();	
	if (nSel < 0 ) return -1 ;
	CVIMESEntryDialog dlg(this);
	dlg.m_nModule=0;
	dlg.SetMode(VM_EDIT);
	dlg.m_nID=ToInt(m_wndListProv.GetItemText(nSel,0));
	dlg.m_szName=m_wndListProv.GetItemText(nSel,1);
	dlg.m_szShortcut=m_wndListProv.GetItemText(nSel, 2);
	dlg.DoModal();	
	OnListProvLoadData();
	 return 0;
} 

long CVIMESAdressDialog::OnListProvLoadData(){

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndListProv.BeginLoad(); 
	m_wndListProv.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T(" SELECT * FROM sys_prov ORDER BY sp_id"));
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndListProv.AddItems(
			rs.GetValue(_T("sp_id")), 
			rs.GetValue(_T("sp_name")), 
			rs.GetValue(_T("sp_wrd")), NULL);
		rs.MoveNext();
	}
	m_wndListProv.EndLoad(); 
	return nCount;

	return 0;
}
void CVIMESAdressDialog::OnListVilageDblClick(){
	
} 
void CVIMESAdressDialog::OnListVilageSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	int nSel=m_wndListVilage.GetCurSel();
	if (nSel < 0 ) return ;	
	m_nVillageID=ToInt(m_wndListVilage.GetItemText(nSel,0));	
} 
int CVIMESAdressDialog::OnListVilageAddItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//int nSel =m_wndListVilage.GetCurSel();
	//if (nSel < 0 ) return -1 ;

	CVIMESEntryDialog dlg(this);
	dlg.m_nModule=2;
	dlg.SetMode(VM_ADD);	
	dlg.m_nVillID=m_nVillageID;
	dlg.m_nDistID=m_nDistID;
	dlg.m_nProvID=m_nProvID;
	dlg.DoModal();
	OnListVilageLoadData();
	 return 0;
}
int CVIMESAdressDialog::OnListVilageEditItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	int nSel =m_wndListVilage.GetCurSel();
	if (nSel < 0 ) return -1 ;
	CVIMESEntryDialog dlg(this);	
	dlg.m_nModule=2;
	dlg.SetMode(VM_EDIT);	
	dlg.m_nID=ToInt(m_wndListVilage.GetItemText(nSel,0));
	dlg.m_szName=m_wndListVilage.GetItemText(nSel,1);
	dlg.m_szShortcut=m_wndListVilage.GetItemText(nSel, 2);
	dlg.DoModal();	
	OnListVilageLoadData();
	
	 return 0;
} 
int CVIMESAdressDialog::OnListVilageDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	int nSel =m_wndListVilage.GetCurSel();
	if (nSel < 0 ) return -1 ;

	CVIMESEntryDialog dlg(this);	
	dlg.m_nModule=2;
	dlg.SetMode(VM_NONE);	
	dlg.m_nProvID=m_nProvID;
	dlg.m_nDistID=m_nDistID;
	dlg.m_nVillID=m_nVillageID;
	dlg.m_nID=ToInt(m_wndListVilage.GetItemText(nSel,0));
	dlg.m_szName=m_wndListVilage.GetItemText(nSel,1);
	dlg.m_szShortcut=m_wndListVilage.GetItemText(nSel, 2);
	dlg.DoModal();	
	OnListVilageLoadData();
	 return 0;
} 


long CVIMESAdressDialog::OnListVilageLoadData(){

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndListVilage.BeginLoad(); 
	m_wndListVilage.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T(" SELECT * FROM sys_vill WHERE sv_distid = %ld ORDER BY sv_id"), m_nDistID);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndListVilage.AddItems(
			rs.GetValue(_T("sv_id")), 
			rs.GetValue(_T("sv_name")), 
			rs.GetValue(_T("sv_wrd")), NULL);
		rs.MoveNext();
	}
	m_wndListVilage.EndLoad(); 
	return nCount;

	return 0;
}
int CVIMESAdressDialog::OnAddVIMESAdressDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CVIMESAdressDialog::OnEditVIMESAdressDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CVIMESAdressDialog::OnDeleteVIMESAdressDialog(){
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
 		OnCancelVIMESAdressDialog(); 
 	}
	return 0;
}
int CVIMESAdressDialog::OnSaveVIMESAdressDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		//szSQL = m_sys_provTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE")); 
 		//szSQL = m_sys_provTbl.GetUpdateSQL(_T("createdby,createddate")); 
 		szSQL += szWhere; 
 	} 
 _fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		//OnVIMESAdressDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CVIMESAdressDialog::OnCancelVIMESAdressDialog(){
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
int CVIMESAdressDialog::OnVIMESAdressDialogListLoadData(){
	return 0;
}
