#include "VIMESAddress.h"
#include "VIMESEntryDialog.h"
#include "MainFrm.h"
static long _OnListDistLoadDataFnc(CWnd *pWnd){
	return ((CVIMESAddress*)pWnd)->OnListDistLoadData();
} 
static void _OnListDistDblClickFnc(CWnd *pWnd){
	((CVIMESAddress*)pWnd)->OnListDistDblClick();
} 
static void _OnListDistSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CVIMESAddress*)pWnd)->OnListDistSelectChange(nOldItem, nNewItem);
} 
static int _OnListDistAddItemFnc(CWnd *pWnd){
	 return ((CVIMESAddress*)pWnd)->OnListDistAddItem();
}
static int _OnListDistEditItemFnc(CWnd *pWnd){
	 return ((CVIMESAddress*)pWnd)->OnListDistEditItem();
} 
static int _OnListDistDeleteItemFnc(CWnd *pWnd){
	 return ((CVIMESAddress*)pWnd)->OnListDistDeleteItem();
} 

static long _OnListProvLoadDataFnc(CWnd *pWnd){
	return ((CVIMESAddress*)pWnd)->OnListProvLoadData();
} 
static void _OnListProvDblClickFnc(CWnd *pWnd){
	((CVIMESAddress*)pWnd)->OnListProvDblClick();
} 
static void _OnListProvSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CVIMESAddress*)pWnd)->OnListProvSelectChange(nOldItem, nNewItem);
} 
static int _OnListProvAddItemFnc(CWnd *pWnd){
	 return ((CVIMESAddress*)pWnd)->OnListProvAddItem();
} 

static int _OnListProvEditItemFnc(CWnd *pWnd){
	 return ((CVIMESAddress*)pWnd)->OnListProvEditItem();
}
static int _OnListProvDeleteItemFnc(CWnd *pWnd){
	 return ((CVIMESAddress*)pWnd)->OnListProvDeleteItem();
}

static long _OnListVilageLoadDataFnc(CWnd *pWnd){
	return ((CVIMESAddress*)pWnd)->OnListVilageLoadData();
} 
static void _OnListVilageDblClickFnc(CWnd *pWnd){
	((CVIMESAddress*)pWnd)->OnListVilageDblClick();
} 
static void _OnListVilageSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CVIMESAddress*)pWnd)->OnListVilageSelectChange(nOldItem, nNewItem);
} 
static int _OnListVilageAddItemFnc(CWnd *pWnd){
	 return ((CVIMESAddress*)pWnd)->OnListVilageAddItem();
}
static int _OnListViageEditItemFnc(CWnd *pWnd){
	 return ((CVIMESAddress*)pWnd)->OnListVilageEditItem();
}
static int _OnListVilageDeleteItemFnc(CWnd *pWnd){
	 return ((CVIMESAddress*)pWnd)->OnListVilageDeleteItem();
}
static void _OnCheckAddressLevel2SelectFnc(CWnd *pWnd)
{
    ((CVIMESAddress *)pWnd)->CheckAddressLevel2();
}
static int _OnAddVIMESAdressDialogFnc(CWnd *pWnd){
	 return ((CVIMESAddress*)pWnd)->OnAddVIMESAdressDialog();
} 
static int _OnEditVIMESAdressDialogFnc(CWnd *pWnd){
	 return ((CVIMESAddress*)pWnd)->OnEditVIMESAdressDialog();
} 
static int _OnDeleteVIMESAdressDialogFnc(CWnd *pWnd){
	 return ((CVIMESAddress*)pWnd)->OnDeleteVIMESAdressDialog();
} 
static int _OnSaveVIMESAdressDialogFnc(CWnd *pWnd){
	 return ((CVIMESAddress*)pWnd)->OnSaveVIMESAdressDialog();
} 
static int _OnCancelVIMESAdressDialogFnc(CWnd *pWnd){
	 return ((CVIMESAddress*)pWnd)->OnCancelVIMESAdressDialog();
} 
CVIMESAddress::CVIMESAddress()
{

	m_nDlgWidth = 810;
	m_nDlgHeight = 620;
	SetDefaultValues();
}
CVIMESAddress::~CVIMESAddress(){
}
void CVIMESAddress::OnCreateComponents(){
	m_wndGroupProvince.Create(this, _T("Province"), 5, 5, 405, 620);
	m_wndGroupDistrict.Create(this, _T("District"), 410, 5, 805, 310);
	m_wndVillage.Create(this, _T("Village"), 410, 315, 805, 620);
	m_wndListDist.Create(this,415, 30, 800, 305); 
	m_wndListProv.Create(this,10, 30, 400, 615); 
	m_wndCheckAddressLevel2.Create(this, _T("Địa chỉ cấp 2"), 10, 620, 200, 645);
	m_wndListVilage.Create(this,415, 340, 800, 615); 

}
void CVIMESAddress::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);


	m_wndListDist.InsertColumn(0, _T("ID"), CFMT_NUMBER, 80);
	m_wndListDist.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);
	m_wndListDist.InsertColumn(2, _T("ShortCut"), CFMT_TEXT, 80);
	m_wndListDist.InsertColumn(3, _T("IDBH"), CFMT_TEXT, 100);
	m_wndListDist.InsertColumn(4, _T("TT"), CFMT_TEXT, 30);


	m_wndListProv.InsertColumn(0, _T("ID"), CFMT_NUMBER, 80);
	m_wndListProv.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);
	m_wndListProv.InsertColumn(2, _T("Shortcut"), CFMT_TEXT, 50);
	m_wndListProv.InsertColumn(3, _T("IDBH"), CFMT_TEXT, 100);
	m_wndListProv.InsertColumn(4, _T("TT"), CFMT_TEXT, 30);


	m_wndListVilage.InsertColumn(0, _T("ID"), CFMT_NUMBER, 80);
	m_wndListVilage.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);
	m_wndListVilage.InsertColumn(2, _T("Shortcut"), CFMT_TEXT, 50);
	m_wndListVilage.InsertColumn(3, _T("IDBH"), CFMT_TEXT, 100);
	m_wndListVilage.InsertColumn(4, _T("TT"), CFMT_TEXT, 30);

	m_sys_provTbl.SetTableName(_T("sys_prov"));
	m_sys_provTbl.AddField(_T("sp_id"), dfLong); 
	m_sys_provTbl.AddField(_T("sp_name"), dfLong); 
	m_sys_provTbl.AddField(_T("sp_wrd"), dfLong); 
	m_sys_provTbl.AddField(_T("sp_idbh"), dfText, 5);
	m_sys_provTbl.AddField(_T("sp_isactive"), dfText, 1);

	m_sys_distTbl.SetTableName(_T("sys_dist"));
	m_sys_distTbl.AddField(_T("sd_id"), dfLong); 
	m_sys_distTbl.AddField(_T("sd_provid"), dfLong); 
	m_sys_distTbl.AddField(_T("sd_name"), dfText, 81); 
	m_sys_distTbl.AddField(_T("sd_wrd"), dfText, 7); 
	m_sys_distTbl.AddField(_T("sd_idbh"), dfText, 5);
	m_sys_distTbl.AddField(_T("sd_isactive"), dfText, 1);

	m_sys_villTbl.SetTableName(_T("sys_vill"));
	m_sys_villTbl.AddField(_T("sv_id"), dfLong); 
	m_sys_villTbl.AddField(_T("sv_distid"), dfLong); 
	m_sys_villTbl.AddField(_T("sv_provid"), dfLong); 
	m_sys_villTbl.AddField(_T("sv_name"), dfText, 81); 
	m_sys_villTbl.AddField(_T("sv_wrd"), dfText, 7); 
	m_sys_villTbl.AddField(_T("sv_idbh"), dfText, 5);
	m_sys_villTbl.AddField(_T("sv_isactive"), dfText, 1);
	OnListProvLoadData();

}
void CVIMESAddress::OnSetWindowEvents(){
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
	m_wndCheckAddressLevel2.SetEvent(WE_CLICK, _OnCheckAddressLevel2SelectFnc);
	/*AddEvent(1, _T("Add	Ctrl+A"), _OnAddVIMESAdressDialogFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditVIMESAdressDialogFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteVIMESAdressDialogFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveVIMESAdressDialogFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelVIMESAdressDialogFnc, 0, 'T', VK_CONTROL);*/

}
void CVIMESAddress::OnDoDataExchange(CDataExchange *pDX) {
    DDX_Check(pDX, m_wndCheckAddressLevel2.GetDlgCtrlID(), m_bAddressLevel2);
}
void CVIMESAddress::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CVIMESAddress::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CVIMESAddress::SetDefaultValues(){
	m_bAddressLevel2 = false;
}
int CVIMESAddress::SetMode(int nMode){
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
void CVIMESAddress::OnListDistDblClick(){
	
} 
void CVIMESAddress::OnListDistSelectChange(int nOldItem, int nNewItem)
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	int nSel=m_wndListDist.GetCurSel();
	if (nSel < 0 ) return ;	

	m_nDistID=ToInt(m_wndListDist.GetItemText(nSel,0));			
	OnListVilageLoadData();
} 
int CVIMESAddress::OnListDistAddItem(){
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
int CVIMESAddress::OnListDistEditItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	int nSel =m_wndListDist.GetCurSel();	
	if (nSel < 0 ) return -1 ;
	CVIMESEntryDialog dlg(this);
	dlg.m_nModule=1;
	dlg.SetMode(VM_EDIT);	
	dlg.m_nID=ToInt(m_wndListDist.GetItemText(nSel,0));
	dlg.m_szName=m_wndListDist.GetItemText(nSel,1);
	dlg.m_szShortcut=m_wndListDist.GetItemText(nSel, 2);
	dlg.m_szIDBH = m_wndListDist.GetItemText(nSel, 3);
	dlg.DoModal();	
	OnListDistLoadData();	
	 return 0;
} 

int CVIMESAddress::OnListDistDeleteItem(){
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
	dlg.m_szIDBH = m_wndListDist.GetItemText(nSel, 3);
	dlg.DoModal();
	OnListDistLoadData();
	 return 0;
} 

long CVIMESAddress::OnListDistLoadData(){

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndListDist.BeginLoad(); 
	m_wndListDist.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T(" SELECT *  FROM sys_dist WHERE sd_provid =%ld ORDER BY sd_id"), m_nProvID);
	nCount = rs.ExecSQL(szSQL);	
	//_msg(_T("%s"), szSQL);
	while(!rs.IsEOF()){ 
		m_wndListDist.AddItems(
			rs.GetValue(_T("sd_ID")), 
			rs.GetValue(_T("sd_Name")), 
			rs.GetValue(_T("sd_wrd")),
			rs.GetValue(_T("sd_idbh")), 
			rs.GetValue(_T("sd_isactive")), NULL);
		rs.MoveNext();
	}
	m_wndListDist.EndLoad(); 
	return nCount;

	return 0;
}
void CVIMESAddress::OnListProvDblClick(){
	
} 
void CVIMESAddress::OnListProvSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	int nSel =m_wndListProv.GetCurSel();
	if (nSel < 0 ) return ;	
	m_nProvID=ToInt(m_wndListProv.GetItemText(nSel,0));

        OnListDistLoadData();
		OnListVilageLoadData();  
   
	
} 
int CVIMESAddress::OnListProvDeleteItem(){
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
	dlg.m_szIDBH = m_wndListProv.GetItemText(nSel, 3);
	dlg.DoModal();
	OnListProvLoadData();
	 return 0;
}
int CVIMESAddress::OnListProvAddItem(){
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

int CVIMESAddress::OnListProvEditItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();	
	int nSel =m_wndListProv.GetCurSel();	
	if (nSel < 0 ) return -1 ;
	CVIMESEntryDialog dlg(this);
	dlg.m_nModule=0;
	dlg.SetMode(VM_EDIT);
    dlg.m_nProvID = ToInt(m_wndListProv.GetItemText(nSel, 0));
    dlg.m_nID = ToInt(m_wndListProv.GetItemText(nSel, 0));
	dlg.m_szName=m_wndListProv.GetItemText(nSel,1);
	dlg.m_szShortcut=m_wndListProv.GetItemText(nSel, 2);
	dlg.m_szIDBH = m_wndListProv.GetItemText(nSel, 3);
	dlg.DoModal();	
	OnListProvLoadData();
	 return 0;
} 

long CVIMESAddress::OnListProvLoadData(){

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndListProv.BeginLoad(); 
	m_wndListProv.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T(" SELECT * FROM sys_prov WHERE sp_isactive = 'Y' ORDER BY sp_id"));
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndListProv.AddItems(
			rs.GetValue(_T("sp_id")), 
			rs.GetValue(_T("sp_name")), 
			rs.GetValue(_T("sp_wrd")),
			rs.GetValue(_T("sp_idbh")),
			rs.GetValue(_T("sp_isactive")), NULL);
		rs.MoveNext();
	}
	m_wndListProv.EndLoad(); 
	return nCount;

	return 0;
}
void CVIMESAddress::OnListVilageDblClick(){
	
} 
void CVIMESAddress::OnListVilageSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	int nSel=m_wndListVilage.GetCurSel();
	if (nSel < 0 ) return ;	
	m_nVillageID=ToInt(m_wndListVilage.GetItemText(nSel,0));	
} 
int CVIMESAddress::OnListVilageAddItem(){
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
int CVIMESAddress::OnListVilageEditItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	int nSel =m_wndListVilage.GetCurSel();
	if (nSel < 0 ) return -1 ;
	CVIMESEntryDialog dlg(this);	
	dlg.m_nModule=2;
	dlg.SetMode(VM_EDIT);	
	dlg.m_nID=ToInt(m_wndListVilage.GetItemText(nSel,0));
    dlg.m_nVillID = ToInt(m_wndListVilage.GetItemText(nSel, 0));
	dlg.m_szName=m_wndListVilage.GetItemText(nSel,1);
	dlg.m_szShortcut=m_wndListVilage.GetItemText(nSel, 2);
	dlg.m_szIDBH = m_wndListVilage.GetItemText(nSel, 3);
	dlg.DoModal();	
	OnListVilageLoadData();
	
	 return 0;
} 
int CVIMESAddress::OnListVilageDeleteItem(){
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
	dlg.m_szIDBH = m_wndListVilage.GetItemText(nSel, 3);
	//dlg.m_bIsActive = m_wndListVilage.GetItemText(nSel, 4);
	dlg.DoModal();	
	OnListVilageLoadData();
	 return 0;
} 


long CVIMESAddress::OnListVilageLoadData()
{

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndListVilage.BeginLoad(); 
	m_wndListVilage.DeleteAllItems(); 
	int nCount = 0;

    if (m_nProvID <= 100)
    {
        szSQL.Format(_T(" SELECT * FROM sys_vill WHERE ")
                     _T("sv_provid = %ld ORDER BY sv_id"), m_nProvID);
	}
	else
	{
        szSQL.Format(_T(" SELECT * FROM sys_vill WHERE sv_provid = %ld and sv_distid = %ld ")
                     _T(" ORDER BY sv_id"), m_nProvID, m_nDistID);
	}	

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndListVilage.AddItems(
			rs.GetValue(_T("sv_id")), 
			rs.GetValue(_T("sv_name")), 
			rs.GetValue(_T("sv_wrd")), 
			rs.GetValue(_T("sv_idbh")),
			rs.GetValue(_T("sv_isactive")), NULL);
		rs.MoveNext();
	}
	m_wndListVilage.EndLoad(); 
	return nCount;

	return 0;
}
int CVIMESAddress::OnAddVIMESAdressDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CVIMESAddress::OnEditVIMESAdressDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CVIMESAddress::OnDeleteVIMESAdressDialog(){
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
int CVIMESAddress::OnSaveVIMESAdressDialog(){
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
int CVIMESAddress::OnCancelVIMESAdressDialog(){
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
int CVIMESAddress::OnVIMESAdressDialogListLoadData(){
	return 0;
}
void CVIMESAddress::Refresh(){
	OnListProvLoadData();
}
void CVIMESAddress::CheckAddressLevel2() { 
	UpdateData(TRUE);
	OnListProvLoadData(); 
}