#include "PCMSChangeOrderDialog.h"
#include "MainFrm.h"
static void _OnNameCurrentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPCMSChangeOrderDialog* )pWnd)->OnNameCurrentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnNameCurrentSelendokFnc(CWnd *pWnd){
	((CPCMSChangeOrderDialog *)pWnd)->OnNameCurrentSelendok();
}
/*static void _OnNameCurrentSetfocusFnc(CWnd *pWnd){
	((CPCMSChangeOrderDialog *)pWnd)->OnNameCurrentKillfocus();
}*/
/*static void _OnNameCurrentKillfocusFnc(CWnd *pWnd){
	((CPCMSChangeOrderDialog *)pWnd)->OnNameCurrentKillfocus();
}*/
static long _OnNameCurrentLoadDataFnc(CWnd *pWnd){
	return ((CPCMSChangeOrderDialog *)pWnd)->OnNameCurrentLoadData();
}
/*static void _OnNameCurrentAddNewFnc(CWnd *pWnd){
	((CPCMSChangeOrderDialog *)pWnd)->OnNameCurrentAddNew();
}*/
static void _OnNameNewSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPCMSChangeOrderDialog* )pWnd)->OnNameNewSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnNameNewSelendokFnc(CWnd *pWnd){
	((CPCMSChangeOrderDialog *)pWnd)->OnNameNewSelendok();
}
/*static void _OnNameNewSetfocusFnc(CWnd *pWnd){
	((CPCMSChangeOrderDialog *)pWnd)->OnNameNewKillfocus();
}*/
/*static void _OnNameNewKillfocusFnc(CWnd *pWnd){
	((CPCMSChangeOrderDialog *)pWnd)->OnNameNewKillfocus();
}*/
static long _OnNameNewLoadDataFnc(CWnd *pWnd){
	return ((CPCMSChangeOrderDialog *)pWnd)->OnNameNewLoadData();
}
/*static void _OnNameNewAddNewFnc(CWnd *pWnd){
	((CPCMSChangeOrderDialog *)pWnd)->OnNameNewAddNew();
}*/
static void _OnApplySelectFnc(CWnd *pWnd){
	CPCMSChangeOrderDialog *pVw = (CPCMSChangeOrderDialog *)pWnd;
	pVw->OnApplySelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CPCMSChangeOrderDialog *pVw = (CPCMSChangeOrderDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddPCMSChangeOrderDialogFnc(CWnd *pWnd){
	 return ((CPCMSChangeOrderDialog*)pWnd)->OnAddPCMSChangeOrderDialog();
} 
static int _OnEditPCMSChangeOrderDialogFnc(CWnd *pWnd){
	 return ((CPCMSChangeOrderDialog*)pWnd)->OnEditPCMSChangeOrderDialog();
} 
static int _OnDeletePCMSChangeOrderDialogFnc(CWnd *pWnd){
	 return ((CPCMSChangeOrderDialog*)pWnd)->OnDeletePCMSChangeOrderDialog();
} 
static int _OnSavePCMSChangeOrderDialogFnc(CWnd *pWnd){
	 return ((CPCMSChangeOrderDialog*)pWnd)->OnSavePCMSChangeOrderDialog();
} 
static int _OnCancelPCMSChangeOrderDialogFnc(CWnd *pWnd){
	 return ((CPCMSChangeOrderDialog*)pWnd)->OnCancelPCMSChangeOrderDialog();
} 
CPCMSChangeOrderDialog::CPCMSChangeOrderDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 510;
	m_nDlgHeight = 125;
	SetDefaultValues();
}
CPCMSChangeOrderDialog::~CPCMSChangeOrderDialog(){
}
void CPCMSChangeOrderDialog::OnCreateComponents(){
	m_wndChangeOrder.Create(this, _T("Thay d?i yêu c?u"), 5, 5, 500, 90);
	m_wndNameCurrentLabel.Create(this, _T("Name Current"), 10, 30, 105, 50);
	m_wndNameCurrent.Create(this,110, 30, 495, 50);
	m_wndNameNewLabel.Create(this, _T("Name New"), 10, 60, 105, 85);
	m_wndNameNew.Create(this,110, 60, 495, 85);
	m_wndApply.Create(this, _T("&Apply"), 330, 95, 410, 120);
	m_wndCancel.Create(this, _T("&Cancel"), 415, 95, 495, 120);

}
void CPCMSChangeOrderDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndNameCurrent.SetCheckValue(true);
	m_wndNameCurrent.LimitText(35);
	m_wndNameNew.SetCheckValue(true);
	m_wndNameNew.LimitText(35);
	m_wndNameCurrent.SetReadOnly(true);
	
	m_wndNameCurrent.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndNameCurrent.InsertColumn(1, _T("Name"), CFMT_TEXT, 450);
	m_wndNameCurrent.InsertColumn(2, _T("GroupID"), CFMT_TEXT, 0);


	m_wndNameNew.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndNameNew.InsertColumn(1, _T("Name"), CFMT_TEXT, 400);
	m_wndNameNew.InsertColumn(2, _T("GroupID"), CFMT_TEXT, 0);
	m_wndNameNew.InsertColumn(3, _T("Serv Price"), CFMT_NUMBER, 70);
	m_wndNameNew.InsertColumn(4, _T("Ins Price"), CFMT_NUMBER, 70);

}
void CPCMSChangeOrderDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndNameCurrent.SetEvent(WE_SELENDOK, _OnNameCurrentSelendokFnc);
	//m_wndNameCurrent.SetEvent(WE_SETFOCUS, _OnNameCurrentSetfocusFnc);
	//m_wndNameCurrent.SetEvent(WE_KILLFOCUS, _OnNameCurrentKillfocusFnc);
	m_wndNameCurrent.SetEvent(WE_SELCHANGE, _OnNameCurrentSelectChangeFnc);
	m_wndNameCurrent.SetEvent(WE_LOADDATA, _OnNameCurrentLoadDataFnc);
	//m_wndNameCurrent.SetEvent(WE_ADDNEW, _OnNameCurrentAddNewFnc);
	m_wndNameNew.SetEvent(WE_SELENDOK, _OnNameNewSelendokFnc);
	//m_wndNameNew.SetEvent(WE_SETFOCUS, _OnNameNewSetfocusFnc);
	//m_wndNameNew.SetEvent(WE_KILLFOCUS, _OnNameNewKillfocusFnc);
	m_wndNameNew.SetEvent(WE_SELCHANGE, _OnNameNewSelectChangeFnc);
	m_wndNameNew.SetEvent(WE_LOADDATA, _OnNameNewLoadDataFnc);
	//m_wndNameNew.SetEvent(WE_ADDNEW, _OnNameNewAddNewFnc);
	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);		
	OnNameCurrentLoadData();
	SetMode(VM_NONE);

	m_szAdmitDate = pMF->GetAdmitDate();

}
void CPCMSChangeOrderDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndNameCurrent.GetDlgCtrlID(), m_szNameCurrentKey);
	DDX_TextEx(pDX, m_wndNameNew.GetDlgCtrlID(), m_szNameNewKey);

}
void CPCMSChangeOrderDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CPCMSChangeOrderDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CPCMSChangeOrderDialog::SetDefaultValues(){

	/*m_szNameCurrentKey.Empty();*/
	m_szNameNewKey.Empty();

}
int CPCMSChangeOrderDialog::SetMode(int nMode){
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
 			EnableButtons(TRUE, 0, 1, -1);
 			SetDefaultValues();
 			break;
 		};
		
		m_wndNameNew.EnableWindow(true);
 		UpdateData(FALSE);
 		return nOldMode;
}
void CPCMSChangeOrderDialog::OnNameCurrentSelectChange(int nOldItemSel, int nNewItemSel)
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPCMSChangeOrderDialog::OnNameCurrentSelendok(){
	 
}
/*void CPCMSChangeOrderDialog::OnNameCurrentSetfocus(){
	
}*/
/*void CPCMSChangeOrderDialog::OnNameCurrentKillfocus(){
	
}*/
long CPCMSChangeOrderDialog::OnNameCurrentLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndNameCurrent.IsSearchKey() && !m_szNameCurrentKey.IsEmpty()){
		szWhere.Format(_T(" WHERE hfl_feeid='%s' "), m_szNameCurrentKey);
	}
	m_wndNameCurrent.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT hfl_feeid as id, hfl_name as name, hfl_groupid as groupid FROM hms_fee_list %s ORDER BY id "), szWhere);
	//_fmsg(_T("%s"), szSQL);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndNameCurrent.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")),
			rs.GetValue(_T("groupid")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CPCMSChangeOrderDialog::OnNameCurrentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CPCMSChangeOrderDialog::OnNameNewSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPCMSChangeOrderDialog::OnNameNewSelendok(){
	 
}
/*void CPCMSChangeOrderDialog::OnNameNewSetfocus(){
	
}*/
/*void CPCMSChangeOrderDialog::OnNameNewKillfocus(){
	
}*/
long CPCMSChangeOrderDialog::OnNameNewLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndNameNew.IsSearchKey() && !m_szNameNewKey.IsEmpty()){
		szWhere.Format(_T(" and hfl_feeid='%s' "), m_szNameNewKey);
	};
	m_wndNameNew.DeleteAllItems(); 
	int nCount = 0;


	{
		if(pMF->GetObjectType() == _T("S"))
		{
			szWhere.AppendFormat(_T(" and hfl_object <>'I' "));
		}
		else if(pMF->GetObjectType() == _T("I") || pMF->GetObjectType() == _T("C"))
		{
			//szWhere.AppendFormat(_T(" and (hfl_object <>'S' or hfl_insprice>=0) "));
			szWhere.AppendFormat(_T(" and (hfl_object IN ('A', 'I') or hfl_insprice>=0) "));
		}
	}
	if(pMF->GetModuleID() == _T("EM") || pMF->GetModuleID() == _T("RM"))
	{
		szWhere.AppendFormat(_T(" and hfl_org_id in('GL','EM') "));
	}
	else if(pMF->GetModuleID() == _T("TM"))
	{
		szWhere.AppendFormat(_T(" and hfl_org_id in('GL','TM') "));
	}
	else
	{
		szWhere.AppendFormat(_T(" and hfl_org_id in('GL','TM','EM') "));

	}

	//Ap dung danh muc phi moi
	//1.Neu ngay vao vien(ngay kham) truoc ngay 01/03/2016 thi ap dung danh muc phi cu
	//2.Neu ngau vao vien(Ngay kham) sau ngay /01/03/2016 va < 01/07/2016 thi ap dung danh muc phi moi(01/03)
	//3.Neu ngay vao vien(ngay kham) >= 01/07/2016 thi ap dung dang muc phi (01/07 )
	CString szApplyDate = _T("2016-03-01");
	
	bool bNewPrice = str2int(pMF->GetParam(_T("apply_newprice")));
	if(bNewPrice)
	{
		szApplyDate = pMF->GetParam(_T("apply_date"));
		szWhere.AppendFormat(_T(" and hfl_applydate >= to_date('%s', 'YYYY-MM-DD') "), szApplyDate);

		if(pMF->GetObjectType() == _T("S"))
		{
			szWhere.AppendFormat(_T(" and hfl_object <>'I' "));
		}
		else if(pMF->GetObjectType() == _T("I") || pMF->GetObjectType() == _T("C"))
		{
			szWhere.AppendFormat(_T(" and (hfl_object <>'S' or hfl_insprice>=0) "));
		
		}

	}
	else
	{
		if(pMF->GetObjectType() == _T("S"))
		{
			szWhere.AppendFormat(_T(" and hfl_applydate < TO_DATE('%s','YYYY-MM-DD') "), szApplyDate);
		}
		else
		{
			int nDate = CompareDate(m_szAdmitDate, szApplyDate);

			if(nDate < 0)
			{
				szWhere.AppendFormat(_T(" and hfl_applydate < TO_DATE('%s','YYYY-MM-DD') "), szApplyDate);
			}
			else
			{
				szWhere.AppendFormat(_T(" and hfl_applydate >= TO_DATE('%s','YYYY-MM-DD') "), szApplyDate);
			}
			

		}
	}

	CString szGroup = m_wndNameCurrent.GetCurrent(2);
	
	szSQL.Format(_T("SELECT hfl_feeid, hfl_name, hfl_line, hfl_insprice, hfl_polprice, hfl_servprice, hfl_groupid ") \
		_T("FROM hms_fee_list ") \
		_T("WHERE hfl_groupid='%s' ") \
		_T("AND hfl_active='Y' and hfl_subgroup<>'Y' ") \
		_T("AND (length(hfl_subitem) <= 1 or hfl_subitem is null)  ") \
		_T("AND (hfl_servprice+hfl_insprice+hfl_polprice) > 0 %s ") \
		_T("ORDER BY hfl_line, hfl_name"), szGroup, szWhere);


	_fmsg(_T("%s"), szSQL);
	
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndNameNew.AddItems(
			rs.GetValue(_T("hfl_feeid")), 
			rs.GetValue(_T("hfl_name")),
			rs.GetValue(_T("hfl_groupid")), 
			rs.GetValue(_T("hfl_servprice")), 
			rs.GetValue(_T("hfl_insprice")), 
			NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CPCMSChangeOrderDialog::OnNameNewAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CPCMSChangeOrderDialog::OnApplySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL;
	UpdateData(true);
	m_szGroupID = m_wndNameCurrent.GetCurrent(2);
	
	if(m_szNameNewKey.IsEmpty())
	{
		ShowMessageBox(_T("Ph\x1EA3i \x63h\x1ECDn t\xEAn \x111\x1EC3 m\x1EE5\x63 \x63\x1EA7n th\x61y \x111\x1ED5i."));
		return ;
	}
	szSQL.Format(_T("HMS_PARACLINIC_LINE_CHANGE(%ld, %ld, '%s', '%s', '%s')"), m_nOrderID, m_nOrderlineID, m_szGroupID, m_szNameCurrentKey, m_szNameNewKey);
	//_fmsg(_T("%s"), szSQL);
	int rec = ToInt(pMF->ExecDML(szSQL));

	if(rec < 0)
	{
		ShowMessageBox(_T("M\x1EE5\x63 ph\xED \x111\xE3 th\x61nh to\xE1n ho\x1EB7\x63 \x111\xE3 nh\x1EADp k\x1EBFt qu\x1EA3 ho?c có k?t qu? t? PACS. Kh\xF4ng th\x1EC3 \x111\x1ED5i m\x1EE5\x63 ph\xED"));
		return;
	} 
	
	if(rec > 0)
	{
		CString szDesc;
		szDesc.Format(_T("\x110\x1ED5i m\x1EE5\x63 ph\xED [%s] -> [%s]; M\xE3 [%ld]; S? h? so [%ld]"), m_wndNameCurrent.GetCurrent(1), m_wndNameNew.GetCurrent(1), m_nOrderID, pMF->m_nDocumentNo);
		pMF->SystemLog(_T("Change"), szDesc);
		
		OnOK();
	}
	
} 
void CPCMSChangeOrderDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();	
} 
int CPCMSChangeOrderDialog::OnAddPCMSChangeOrderDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CPCMSChangeOrderDialog::OnEditPCMSChangeOrderDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CPCMSChangeOrderDialog::OnDeletePCMSChangeOrderDialog(){
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
 		OnCancelPCMSChangeOrderDialog();
 	}
	return 0;
}
int CPCMSChangeOrderDialog::OnSavePCMSChangeOrderDialog(){
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
 		//OnPCMSChangeOrderDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CPCMSChangeOrderDialog::OnCancelPCMSChangeOrderDialog(){
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
int CPCMSChangeOrderDialog::OnPCMSChangeOrderDialogListLoadData(){
	return 0;
}
