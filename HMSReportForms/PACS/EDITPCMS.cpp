#include "stdafx.h"
#include "EDITPCMS.h"
#include "HMSMainFrame.h"
/*static void _OnOrderidChangeFnc(CWnd *pWnd){
	((CEDITPCMS *)pWnd)->OnOrderidChange();
} */
/*static void _OnOrderidSetfocusFnc(CWnd *pWnd){
	((CEDITPCMS *)pWnd)->OnOrderidSetfocus();} */ 
/*static void _OnOrderidKillfocusFnc(CWnd *pWnd){
	((CEDITPCMS *)pWnd)->OnOrderidKillfocus();
} */
static int _OnOrderidCheckValueFnc(CWnd *pWnd){
	return ((CEDITPCMS *)pWnd)->OnOrderidCheckValue();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CEDITPCMS*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CEDITPCMS*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CEDITPCMS*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CEDITPCMS*)pWnd)->OnListDeleteItem();
} 
static void _OnPRoomSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEDITPCMS* )pWnd)->OnPRoomSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPRoomSelendokFnc(CWnd *pWnd){
	((CEDITPCMS *)pWnd)->OnPRoomSelendok();
}
/*static void _OnPRoomSetfocusFnc(CWnd *pWnd){
	((CEDITPCMS *)pWnd)->OnPRoomKillfocus();
}*/
/*static void _OnPRoomKillfocusFnc(CWnd *pWnd){
	((CEDITPCMS *)pWnd)->OnPRoomKillfocus();
}*/
static long _OnPRoomLoadDataFnc(CWnd *pWnd){
	return ((CEDITPCMS *)pWnd)->OnPRoomLoadData();
}
/*static void _OnPRoomAddNewFnc(CWnd *pWnd){
	((CEDITPCMS *)pWnd)->OnPRoomAddNew();
}*/
static void _OnDoctorSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEDITPCMS* )pWnd)->OnDoctorSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDoctorSelendokFnc(CWnd *pWnd){
	((CEDITPCMS *)pWnd)->OnDoctorSelendok();
}
/*static void _OnDoctorSetfocusFnc(CWnd *pWnd){
	((CEDITPCMS *)pWnd)->OnDoctorKillfocus();
}*/
/*static void _OnDoctorKillfocusFnc(CWnd *pWnd){
	((CEDITPCMS *)pWnd)->OnDoctorKillfocus();
}*/
static long _OnDoctorLoadDataFnc(CWnd *pWnd){
	return ((CEDITPCMS *)pWnd)->OnDoctorLoadData();
}
/*static void _OnDoctorAddNewFnc(CWnd *pWnd){
	((CEDITPCMS *)pWnd)->OnDoctorAddNew();
}*/
static void _OnUpdateStatusSelectFnc(CWnd *pWnd){
	CEDITPCMS *pVw = (CEDITPCMS *)pWnd;
	pVw->OnUpdateStatusSelect();
} 
static void _OnUpdatePRoomSelectFnc(CWnd *pWnd){
	CEDITPCMS *pVw = (CEDITPCMS *)pWnd;
	pVw->OnUpdatePRoomSelect();
} 
static void _OnUpdateDoctorSelectFnc(CWnd *pWnd){
	CEDITPCMS *pVw = (CEDITPCMS *)pWnd;
	pVw->OnUpdateDoctorSelect();
} 
static int _OnAddEDITPCMSFnc(CWnd *pWnd){
	 return ((CEDITPCMS*)pWnd)->OnAddEDITPCMS();
} 
static int _OnEditEDITPCMSFnc(CWnd *pWnd){
	 return ((CEDITPCMS*)pWnd)->OnEditEDITPCMS();
} 
static int _OnDeleteEDITPCMSFnc(CWnd *pWnd){
	 return ((CEDITPCMS*)pWnd)->OnDeleteEDITPCMS();
} 
static int _OnSaveEDITPCMSFnc(CWnd *pWnd){
	 return ((CEDITPCMS*)pWnd)->OnSaveEDITPCMS();
} 
static int _OnCancelEDITPCMSFnc(CWnd *pWnd){
	 return ((CEDITPCMS*)pWnd)->OnCancelEDITPCMS();
} 
CEDITPCMS::CEDITPCMS(CWnd *pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CEDITPCMS::~CEDITPCMS(){
}
void CEDITPCMS::OnCreateComponents(){
	m_wndEditPcmsOrder.Create(this, _T("Edit Pcms Order"), 5, 5, 480, 325);
	m_wndOrderidLabel.Create(this, _T("Orderid"), 10, 30, 100, 55);
	m_wndOrderid.Create(this,105, 30, 305, 55); 
	m_wndList.Create(this,10, 60, 475, 210); 
	m_wndPRoomLabel.Create(this, _T("PRoom"), 10, 245, 100, 270);
	m_wndPRoom.Create(this,105, 245, 305, 270); 
	m_wndDoctorLabel.Create(this, _T("Doctor"), 10, 275, 100, 300);
	m_wndDoctor.Create(this,105, 275, 305, 300); 
	m_wndUpdateStatus.Create(this, _T("Update Status"), 330, 215, 475, 240);
	m_wndUpdatePRoom.Create(this, _T("Update PRoom"), 330, 245, 475, 270);
	m_wndUpdateDoctor.Create(this, _T("Update Doctor"), 330, 275, 475, 300);

}
void CEDITPCMS::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndOrderid.SetLimitText(16);
	m_wndOrderid.SetCheckValue(true);
	m_wndPRoom.SetCheckValue(true);
	m_wndPRoom.LimitText(35);
	m_wndDoctor.SetCheckValue(true);
	m_wndDoctor.LimitText(35);


	m_wndList.InsertColumn(0, _T("STT"), CFMT_TEXT, 30);
	m_wndList.InsertColumn(1, _T("ItemID"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(2, _T("FeeName"), CFMT_TEXT, 200);
	m_wndList.InsertColumn(3, _T("Status"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(4, _T("PRoom"), CFMT_TEXT, 150);
	m_wndList.InsertColumn(5, _T("Doctor"), CFMT_TEXT, 150);
	m_wndList.InsertColumn(6, _T("OrderlineID"), CFMT_TEXT, 0);


	m_wndPRoom.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndPRoom.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);


	m_wndDoctor.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndDoctor.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

}
void CEDITPCMS::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//m_wndOrderid.SetEvent(WE_CHANGE, _OnOrderidChangeFnc);
	//m_wndOrderid.SetEvent(WE_SETFOCUS, _OnOrderidSetfocusFnc);
	//m_wndOrderid.SetEvent(WE_KILLFOCUS, _OnOrderidKillfocusFnc);
	m_wndOrderid.SetEvent(WE_CHECKVALUE, _OnOrderidCheckValueFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndPRoom.SetEvent(WE_SELENDOK, _OnPRoomSelendokFnc);
	//m_wndPRoom.SetEvent(WE_SETFOCUS, _OnPRoomSetfocusFnc);
	//m_wndPRoom.SetEvent(WE_KILLFOCUS, _OnPRoomKillfocusFnc);
	m_wndPRoom.SetEvent(WE_SELCHANGE, _OnPRoomSelectChangeFnc);
	m_wndPRoom.SetEvent(WE_LOADDATA, _OnPRoomLoadDataFnc);
	//m_wndPRoom.SetEvent(WE_ADDNEW, _OnPRoomAddNewFnc);
	m_wndDoctor.SetEvent(WE_SELENDOK, _OnDoctorSelendokFnc);
	//m_wndDoctor.SetEvent(WE_SETFOCUS, _OnDoctorSetfocusFnc);
	//m_wndDoctor.SetEvent(WE_KILLFOCUS, _OnDoctorKillfocusFnc);
	m_wndDoctor.SetEvent(WE_SELCHANGE, _OnDoctorSelectChangeFnc);
	m_wndDoctor.SetEvent(WE_LOADDATA, _OnDoctorLoadDataFnc);
	//m_wndDoctor.SetEvent(WE_ADDNEW, _OnDoctorAddNewFnc);
	m_wndUpdateStatus.SetEvent(WE_CLICK, _OnUpdateStatusSelectFnc);
	m_wndUpdatePRoom.SetEvent(WE_CLICK, _OnUpdatePRoomSelectFnc);
	m_wndUpdateDoctor.SetEvent(WE_CLICK, _OnUpdateDoctorSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddEDITPCMSFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditEDITPCMSFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteEDITPCMSFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveEDITPCMSFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelEDITPCMSFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_EDIT);

}
void CEDITPCMS::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndOrderid.GetDlgCtrlID(), m_nOrderid);
	DDX_TextEx(pDX, m_wndPRoom.GetDlgCtrlID(), m_szPRoomKey);
	DDX_TextEx(pDX, m_wndDoctor.GetDlgCtrlID(), m_szDoctorKey);

}
void CEDITPCMS::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Orderid")] =  m_nOrderid;
	m_jData[_T("PRoom")] =  m_szPRoomKey;
	m_jData[_T("Doctor")] =  m_szDoctorKey;
	}
	else
	{
			
	m_jData[_T("Orderid")].GetValue(m_nOrderid);
	m_jData[_T("PRoom")].GetValue(m_szPRoomKey);
	m_jData[_T("Doctor")].GetValue(m_szDoctorKey);
	}

}
void CEDITPCMS::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CEDITPCMS::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CEDITPCMS::SetDefaultValues(){

	m_nOrderid=0;
	m_szPRoomKey.Empty();
	m_szDoctorKey.Empty();

}
int CEDITPCMS::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
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
 			EnableButtons(TRUE, 0, 1, 2, 3, 4, -1);
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
/*void CEDITPCMS::OnOrderidChange(){
	
} */
/*void CEDITPCMS::OnOrderidSetfocus(){
	
} */
/*void CEDITPCMS::OnOrderidKillfocus(){
	
} */
int CEDITPCMS::OnOrderidCheckValue(){
	OnListLoadData();
	return 0;
} 
void CEDITPCMS::OnListDblClick(){

} 
void CEDITPCMS::OnListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_nOrderlineid = str2long(m_wndList.GetItemText(nNewItem, 6));

} 
int CEDITPCMS::OnListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CEDITPCMS::OnListLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr;
	m_wndList.BeginLoad(); 
	int nCount = 0, nIdx = 1;

	szSQL.Format(_T(" SELECT hpc_groupid") \
		_T(" FROM hms_pacsorder") \
		_T(" WHERE hpc_orderid = %ld"), m_nOrderid);
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("hpc_groupid"), tmpStr);
	if(tmpStr == _T("B3100"))
		{
			szSQL.Format(_T(" SELECT") \
				_T(" hpcl_itemid AS ItemID,") \
				_T(" hfl_name AS FeeName,") \
				_T(" hpcl_status AS Status,") \
				_T(" (SELECT hrl_name FROM hms_roomlist WHERE hrl_id = hpcl_proomid AND hrl_deptid = hpcl_perform_deptid) AS PRoom,") \
				_T(" get_username(hpcl_practitioner) AS Doctor,") \
				_T(" hpcl_orderlineid AS OrderlineId") \
				_T(" FROM hms_pacsorderline") \
				_T(" LEFT JOIN hms_fee_list ON(hfl_feeid = hpcl_itemid)") \
				_T(" WHERE hpcl_orderid = %ld ") \
				_T(" ORDER BY hpcl_orderlineid"), m_nOrderid);

			nCount = rs.ExecSQL(szSQL);

			while(!rs.IsEOF()){ 
				m_wndList.AddItems(
					int2str(nIdx++),
					rs.GetValue(_T("ItemID")), 
					rs.GetValue(_T("FeeName")), 
					rs.GetValue(_T("Status")), 
					rs.GetValue(_T("PRoom")), 
					rs.GetValue(_T("Doctor")),
					rs.GetValue(_T("OrderlineId")), NULL);
				rs.MoveNext();
			}
			m_wndList.EndLoad(); 
			return nCount;
		}
	else
		{
			MessageBox(_T("Or\x64\x65rI\x44 kh\xF4ng thu\x1ED9\x63 nh\xF3m N\x1ED9i soi (\x42\x33\x31\x30\x30)"));
			return nCount;
		}
}
void CEDITPCMS::OnPRoomSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CEDITPCMS::OnPRoomSelendok(){
	 
}
/*void CEDITPCMS::OnPRoomSetfocus(){
	
}*/
/*void CEDITPCMS::OnPRoomKillfocus(){
	
}*/
long CEDITPCMS::OnPRoomLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndPRoom.IsSearchKey() && !m_szPRoomKey.IsEmpty()){
	 szWhere.Format(_T(" and hrl_id='%s' "), m_szPRoomKey);
};
	m_wndPRoom.DeleteAllItems(); 
	int nCount = 0;

	szSQL.Format(_T("SELECT hrl_id as ID, hrl_name as Name ") \
		_T("FROM hms_roomlist ") \
		_T("WHERE hrl_deptid = '%s' ") \
		_T("ORDER BY hrl_id"), pMF->GetDepartmentID());

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPRoom.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CEDITPCMS::OnPRoomAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CEDITPCMS::OnDoctorSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CEDITPCMS::OnDoctorSelendok(){
	 
}
/*void CEDITPCMS::OnDoctorSetfocus(){
	
}*/
/*void CEDITPCMS::OnDoctorKillfocus(){
	
}*/
long CEDITPCMS::OnDoctorLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDoctor.IsSearchKey() && !m_szDoctorKey.IsEmpty()){
	 szWhere.Format(_T(" and su_userid='%s' "), m_szDoctorKey);
};
	m_wndDoctor.DeleteAllItems(); 
	int nCount = 0;
	
	szSQL.Format(_T("SELECT su_userid AS id, su_name AS name ") \
		_T("FROM sys_user ") \
		_T("WHERE su_deptid = '%s' ") \
		_T("ORDER BY su_userid"), pMF->GetDepartmentID());

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDoctor.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CEDITPCMS::OnDoctorAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CEDITPCMS::OnUpdateStatusSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, tmpStr;

	szSQL.Format(_T("SELECT hpcl_status AS Status FROM hms_pacsorderline WHERE hpcl_orderlineid = %ld"), m_nOrderlineid);
	rs.ExecSQL(szSQL);

	if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data."), MB_ICONASTERISK);
		return;
	}
	else
	{
		rs.GetValue(_T("Status"), tmpStr);
		if(tmpStr == _T("S"))
		{
			ShowMessageBox(_T("\x43h\xFA \xFD, th\x1EE7 thu\x1EADt \x111\x61ng \x1EDF tr\x1EA1ng th\xE1i S!"));
		}
		else
		{
			szSQL.Format(_T("UPDATE hms_pacsorderline SET hpcl_status = 'S', hpcl_result = NULL WHERE  hpcl_orderlineid = %ld"), m_nOrderlineid);
			pMF->ExecSQL(szSQL);
			ShowMessageBox(_T("\x110\xE3 \x63\x1EADp nh\x1EADt!"));
			OnListLoadData();
		}
	}
} 
void CEDITPCMS::OnUpdatePRoomSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, tmpStr;

	szSQL.Format(_T("SELECT COUNT(*) FROM hms_pacsorderline WHERE hpcl_orderlineid = %ld"), m_nOrderlineid);
	rs.ExecSQL(szSQL);

	if (rs.GetIntValue() == 0)
		{
			AfxMessageBox(_T("No Data."), MB_ICONASTERISK);
			return;
		}
	else
		{
			if(m_szPRoomKey.IsEmpty())
			{
				ShowMessageBox(_T("\x43h\x1B0\x61 \x63h\x1ECDn ph\xF2ng!"));
				m_wndPRoom.SetFocus();
			}
			else
			{
				szSQL.Format(_T("UPDATE hms_pacsorderline SET hpcl_proomid = '%s' WHERE  hpcl_orderlineid = %ld"), m_szPRoomKey, m_nOrderlineid);
				pMF->ExecSQL(szSQL);
				ShowMessageBox(_T("\x110\xE3 \x63\x1EADp nh\x1EADt!"));
				OnListLoadData();
			}
		}
} 
void CEDITPCMS::OnUpdateDoctorSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, tmpStr;

	szSQL.Format(_T("SELECT COUNT(*) FROM hms_pacsorderline WHERE hpcl_orderlineid = %ld"), m_nOrderlineid);
	rs.ExecSQL(szSQL);

	if (rs.GetIntValue() == 0)
	{
		AfxMessageBox(_T("No Data."), MB_ICONASTERISK);
		return;
	}
	else
	{
		if(m_szDoctorKey.IsEmpty())
		{
			ShowMessageBox(_T("\x43h\x1B0\x61 \x63h\x1ECDn \x62\xE1\x63 s\x129 th\x1EF1\x63 hi\x1EC7n!"));
			m_wndDoctor.SetFocus();
		}
		else
		{
			szSQL.Format(_T("UPDATE hms_pacsorderline SET hpcl_practitioner = '%s' WHERE  hpcl_orderlineid = %ld"), m_szDoctorKey, m_nOrderlineid);
			pMF->ExecSQL(szSQL);
			ShowMessageBox(_T("\x110\xE3 \x63\x1EADp nh\x1EADt!"));
			OnListLoadData();
		}
	}
} 
int CEDITPCMS::OnAddEDITPCMS(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CEDITPCMS::OnEditEDITPCMS(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CEDITPCMS::OnDeleteEDITPCMS(){
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
 		OnCancelEDITPCMS();
 	}
	return 0;
}
int CEDITPCMS::OnSaveEDITPCMS(){
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
 		//OnEDITPCMSListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CEDITPCMS::OnCancelEDITPCMS(){
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
int CEDITPCMS::OnEDITPCMSListLoadData(){
	return 0;
}
