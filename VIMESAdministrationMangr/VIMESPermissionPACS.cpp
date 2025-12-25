#include "VIMESPermissionPACS.h"
#include "HMSMainFrame.h"
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CVIMESPermissionPACS*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CVIMESPermissionPACS*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CVIMESPermissionPACS*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CVIMESPermissionPACS*)pWnd)->OnListDeleteItem();
} 
static void _OnPACSSelectFnc(CWnd *pWnd){
	  ((CVIMESPermissionPACS*)pWnd)->OnPACSSelect();
}
static void _OnLIMSSelectFnc(CWnd *pWnd){
	  ((CVIMESPermissionPACS*)pWnd)->OnLIMSSelect();
}
static void _OnApplySelectFnc(CWnd *pWnd){
	CVIMESPermissionPACS *pVw = (CVIMESPermissionPACS *)pWnd;
	pVw->OnApplySelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CVIMESPermissionPACS *pVw = (CVIMESPermissionPACS *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnPACSLIMSSelectFnc(CWnd *pWnd){
	  ((CVIMESPermissionPACS*)pWnd)->OnPACSLIMSSelect();
}
static void _OnCheckAllSelectFnc(CWnd *pWnd){
	 ((CVIMESPermissionPACS*)pWnd)->OnCheckAllSelect();
}
static int _OnAddVIMESPermissionPACSFnc(CWnd *pWnd){
	 return ((CVIMESPermissionPACS*)pWnd)->OnAddVIMESPermissionPACS();
} 
static int _OnEditVIMESPermissionPACSFnc(CWnd *pWnd){
	 return ((CVIMESPermissionPACS*)pWnd)->OnEditVIMESPermissionPACS();
} 
static int _OnDeleteVIMESPermissionPACSFnc(CWnd *pWnd){
	 return ((CVIMESPermissionPACS*)pWnd)->OnDeleteVIMESPermissionPACS();
} 
static int _OnSaveVIMESPermissionPACSFnc(CWnd *pWnd){
	 return ((CVIMESPermissionPACS*)pWnd)->OnSaveVIMESPermissionPACS();
} 
static int _OnCancelVIMESPermissionPACSFnc(CWnd *pWnd){
	 return ((CVIMESPermissionPACS*)pWnd)->OnCancelVIMESPermissionPACS();
} 
CVIMESPermissionPACS::CVIMESPermissionPACS(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 555;
	m_nDlgHeight = 478;
	SetDefaultValues();
}
CVIMESPermissionPACS::~CVIMESPermissionPACS(){
}
void CVIMESPermissionPACS::OnCreateComponents(){
	m_wndGroupBoxListPermission.Create(this, _T("Permission list"), 5, 5, 545, 429);
	m_wndList.Create(this,10, 28, 540, 425); 
	m_wndPACS.Create(this, _T("PACS"), 125, 440, 180, 465);
	m_wndLIMS.Create(this, _T("LIMS"), 190, 440, 245, 465);
	m_wndApply.Create(this, _T("&Apply"), 388, 440, 463, 465);
	m_wndCancel.Create(this, _T("Cancel"), 468, 440, 543, 465);
	m_wndPACSLIMS.Create(this, _T("PACS - LIMS"), 250, 440, 355, 465);
	m_wndCheckAll.Create(this, _T("Check All"), 10, 440, 100, 465);

}
void CVIMESPermissionPACS::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);


	m_wndList.InsertColumn(0, _T("ID"), CFMT_TEXT, 70);
	m_wndList.InsertColumn(1, _T("Desc"), CFMT_TEXT, 300);
	m_wndList.InsertColumn(2, _T("Module"), CFMT_TEXT, 150);
	m_wndList.SetCheckBox(true);
	m_sys_userpermTbl.SetTableName(_T("sys_userperm"));
	m_sys_userpermTbl.AddField(_T("sup_userid"), dfText, 15); 
	m_sys_userpermTbl.AddField(_T("sup_permid"), dfText, 7); 
	m_sys_userpermTbl.AddField(_T("sup_moduleid"),dfText,15);
	
	SetMode(VM_NONE);
	OnListLoadData();

}
void CVIMESPermissionPACS::OnSetWindowEvents(){
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndPACS.SetEvent(WE_CLICK, _OnPACSSelectFnc);
	m_wndLIMS.SetEvent(WE_CLICK, _OnLIMSSelectFnc);
	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndPACSLIMS.SetEvent(WE_CLICK, _OnPACSLIMSSelectFnc);
	m_wndCheckAll.SetEvent(WE_CLICK, _OnCheckAllSelectFnc);
	/*AddEvent(1, _T("Add	Ctrl+A"), _OnAddVIMESPermissionPACSFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditVIMESPermissionPACSFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteVIMESPermissionPACSFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveVIMESPermissionPACSFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelVIMESPermissionPACSFnc, 0, 'T', VK_CONTROL);*/

}
void CVIMESPermissionPACS::OnDoDataExchange(CDataExchange* pDX){
	DDX_Radio(pDX, m_wndPACS.GetDlgCtrlID(), m_nPACS);
	DDX_Radio(pDX, m_wndLIMS.GetDlgCtrlID(), m_nLIMS);
	DDX_Radio(pDX, m_wndPACSLIMS.GetDlgCtrlID(), m_nPACSLIMS);
	DDX_Check(pDX, m_wndCheckAll.GetDlgCtrlID(), m_bCheckAll);

}
void CVIMESPermissionPACS::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CVIMESPermissionPACS::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CVIMESPermissionPACS::SetDefaultValues(){

	m_nPACS=0;
	m_nLIMS=1;
	m_nPACSLIMS=1;
	m_bCheckAll=FALSE;

}
int CVIMESPermissionPACS::SetMode(int nMode){
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
 			EnableButtons(TRUE, 0,1, -1); 
 			SetDefaultValues(); 
 			break; 
 		}; 
 		UpdateData(FALSE); 
 		return nOldMode; 
}
void CVIMESPermissionPACS::OnListDblClick(){
	
} 
void CVIMESPermissionPACS::OnListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CVIMESPermissionPACS::OnListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CVIMESPermissionPACS::OnListLoadData(){

	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, tmpStr;
	m_wndList.BeginLoad(); 
	m_wndList.DeleteAllItems(); 
	int nCount = 0;
	
	switch (m_nPACSLIMS)
	{
		case 0:				
				szWhere.Format(_T(" WHERE substr(hfg_id, 1, 2) in('B1','B2','B3') and hfg_id not in('B1000','B2000','B3000') "));
				break;
		case 1:				
				szWhere.Format(_T(" WHERE substr(hfg_id, 1, 2) in('B2','B3') and hfg_id not in('B2000','B3000')"));
				break;
		case 2:				
				szWhere.Format(_T(" WHERE substr(hfg_id, 1, 2) in('B1') and hfg_id not in('B1000')"));
				break;			
	}
		

	szSQL.Format(_T(" SELECT hfg_id as id, hfg_name as name, case substr(hfg_id,1,2) when 'B1' then 'LIMS' else 'PACS' end as module") \
		_T(" FROM hms_feegroup %s ORDER BY hfg_id "), szWhere);
		
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(			
			rs.GetValue(_T("Id")), 
			rs.GetValue(_T("Name")),
			rs.GetValue(_T("Module")),NULL);
		rs.MoveNext();
	}
	for (int i=0; i < m_wndList.GetItemCount(); i++)
	{
		tmpStr.Format(_T("%s"), m_wndList.GetItemText(i,0));
		szSQL.Format(_T(" SELECT sup_userid as userid FROM hms_feegroup left join sys_userperm on(hfg_id =sup_permid) WHERE sup_userid='%s'  and hfg_id ='%s'"), m_szUserID,tmpStr);
		rs.ExecSQL(szSQL);		
		tmpStr=rs.GetStringValue();
		if(!tmpStr.IsEmpty()) m_wndList.SetCheck(i, true);
	}
	m_wndList.EndLoad(); 
	return nCount;
}
void CVIMESPermissionPACS::OnPACSSelect(){
	m_nPACSLIMS=1;
	OnListLoadData();
}
void CVIMESPermissionPACS::OnLIMSSelect(){
	m_nPACSLIMS=2;
	OnListLoadData();
}
void CVIMESPermissionPACS::OnApplySelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szSQL, szWhere;
	CRecord rs(&pMF->m_db);
    if(m_szUserID.IsEmpty())
		return;
		
	switch (m_nPACSLIMS)
	{
		case 0:				
				szWhere.Format(_T("'LIMS','PACS'"));
				break;
		case 1:				
				szWhere.Format(_T("'PACS'"));
				break;
		case 2:								
				szWhere.Format(_T("'LIMS'"));
				break;			
	}

	szSQL.Format(_T("DELETE FROM sys_userperm WHERE sup_userid='%s' AND sup_moduleid in(%s) "), m_szUserID, szWhere);
	rs.ExecSQL(szSQL);
	for (int i =0; i < m_wndList.GetItemCount(); i++)
	{
		if(m_wndList.GetCheck(i))
		{
			m_sys_userpermTbl.SetValue(_T("sup_userid"), m_szUserID);
			m_sys_userpermTbl.SetValue(_T("sup_permid"), m_wndList.GetItemText(i, 0));
			m_sys_userpermTbl.SetValue(_T("sup_moduleid"), m_wndList.GetItemText(i, 2));
			szSQL.Format(_T("%s"), m_sys_userpermTbl.GetInsertSQL());
			rs.ExecSQL(szSQL);
		}
	}
	
	AfxMessageBox(_T("Permission apply successfull"));	
} 
void CVIMESPermissionPACS::OnCancelSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnCancel();
	
	
} 
void CVIMESPermissionPACS::OnPACSLIMSSelect(){
    m_nPACSLIMS=0;
	OnListLoadData();
}
	void CVIMESPermissionPACS::OnCheckAllSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
	
	if (m_wndCheckAll.GetCheck())
	{
		for(int i =0; i< m_wndList.GetItemCount(); i++)
		{
			m_wndList.SetCheck(i,true);
		}
	}
	else
	{
		for(int i =0; i< m_wndList.GetItemCount(); i++)
		{
			m_wndList.SetCheck(i,false);
		}
	}
	
}
int CVIMESPermissionPACS::OnAddVIMESPermissionPACS(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CVIMESPermissionPACS::OnEditVIMESPermissionPACS(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CVIMESPermissionPACS::OnDeleteVIMESPermissionPACS(){
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
 		OnCancelVIMESPermissionPACS(); 
 	}
	return 0;
}
int CVIMESPermissionPACS::OnSaveVIMESPermissionPACS(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
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
 		//OnVIMESPermissionPACSListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CVIMESPermissionPACS::OnCancelVIMESPermissionPACS(){
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
int CVIMESPermissionPACS::OnVIMESPermissionPACSListLoadData(){
	return 0;
}
