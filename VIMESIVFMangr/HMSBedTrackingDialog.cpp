#include "HMSBedTrackingDialog.h"
#include "MainFrm.h"
#include "HMSBedTrackingChangeDialog.h"



static void _OnTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSBedTrackingDialog* )pWnd)->OnTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTypeSelendokFnc(CWnd *pWnd){
	((CHMSBedTrackingDialog *)pWnd)->OnTypeSelendok();
}
/*static void _OnTypeSetfocusFnc(CWnd *pWnd){
	((CHMSBedTrackingDialog *)pWnd)->OnTypeKillfocus();
}*/
/*static void _OnTypeKillfocusFnc(CWnd *pWnd){
	((CHMSBedTrackingDialog *)pWnd)->OnTypeKillfocus();
}*/
static long _OnTypeLoadDataFnc(CWnd *pWnd){
	return ((CHMSBedTrackingDialog *)pWnd)->OnTypeLoadData();
}
/*static void _OnTypeAddNewFnc(CWnd *pWnd){
	((CHMSBedTrackingDialog *)pWnd)->OnTypeAddNew();
}*/
static void _OnRoomSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSBedTrackingDialog* )pWnd)->OnRoomSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnRoomSelendokFnc(CWnd *pWnd){
	((CHMSBedTrackingDialog *)pWnd)->OnRoomSelendok();
}
/*static void _OnRoomSetfocusFnc(CWnd *pWnd){
	((CHMSBedTrackingDialog *)pWnd)->OnRoomKillfocus();
}*/
/*static void _OnRoomKillfocusFnc(CWnd *pWnd){
	((CHMSBedTrackingDialog *)pWnd)->OnRoomKillfocus();
}*/
static long _OnRoomLoadDataFnc(CWnd *pWnd){
	return ((CHMSBedTrackingDialog *)pWnd)->OnRoomLoadData();
}
/*static void _OnRoomAddNewFnc(CWnd *pWnd){
	((CHMSBedTrackingDialog *)pWnd)->OnRoomAddNew();
}*/
static void _OnRefreshSelectFnc(CWnd *pWnd){
	CHMSBedTrackingDialog *pVw = (CHMSBedTrackingDialog *)pWnd;
	pVw->OnRefreshSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSBedTrackingDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSBedTrackingDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSBedTrackingDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSBedTrackingDialog*)pWnd)->OnListDeleteItem();
} 


static int _OnListEditItemFnc(CWnd *pWnd){
	 return ((CHMSBedTrackingDialog*)pWnd)->OnListEditItem();
}

static int _OnListMoveItemFnc(CWnd *pWnd){
	 return ((CHMSBedTrackingDialog*)pWnd)->OnListMoveItem();
}

static void _OnEditSelectFnc(CWnd *pWnd){
	CHMSBedTrackingDialog *pVw = (CHMSBedTrackingDialog *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnMoveSelectFnc(CWnd *pWnd){
	CHMSBedTrackingDialog *pVw = (CHMSBedTrackingDialog *)pWnd;
	pVw->OnMoveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSBedTrackingDialog *pVw = (CHMSBedTrackingDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSBedTrackingDialogFnc(CWnd *pWnd){
	 return ((CHMSBedTrackingDialog*)pWnd)->OnAddHMSBedTrackingDialog();
} 
static int _OnEditHMSBedTrackingDialogFnc(CWnd *pWnd){
	 return ((CHMSBedTrackingDialog*)pWnd)->OnEditHMSBedTrackingDialog();
} 
static int _OnDeleteHMSBedTrackingDialogFnc(CWnd *pWnd){
	 return ((CHMSBedTrackingDialog*)pWnd)->OnDeleteHMSBedTrackingDialog();
} 
static int _OnSaveHMSBedTrackingDialogFnc(CWnd *pWnd){
	 return ((CHMSBedTrackingDialog*)pWnd)->OnSaveHMSBedTrackingDialog();
} 
static int _OnCancelHMSBedTrackingDialogFnc(CWnd *pWnd){
	 return ((CHMSBedTrackingDialog*)pWnd)->OnCancelHMSBedTrackingDialog();
} 
CHMSBedTrackingDialog::CHMSBedTrackingDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 965;
	m_nDlgHeight = 605;
	SetDefaultValues();
}
CHMSBedTrackingDialog::~CHMSBedTrackingDialog(){
}
void CHMSBedTrackingDialog::OnCreateComponents(){
	m_wndBedInformation.Create(this, _T("Bed Information"), 5, 6, 960, 571);
	m_wndTypeLabel.Create(this, _T("Type"), 10, 30, 90, 55);
	m_wndType.Create(this,95, 30, 320, 55); 
	m_wndRoomLabel.Create(this, _T("Room"), 325, 30, 405, 55);
	m_wndRoom.Create(this,410, 30, 635, 55); 
	m_wndRefresh.Create(this, _T("Refresh"), 640, 30, 720, 55);
	m_wndList.Create(this,10, 60, 955, 565); 
	m_wndEdit.Create(this, _T("&Edit"), 710, 576, 790, 601);
	m_wndMove.Create(this, _T("&Move"), 795, 576, 875, 601);
	m_wndClose.Create(this, _T("&Close"), 880, 576, 960, 601);

}
void CHMSBedTrackingDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndType.SetCheckValue(true);
	m_wndType.LimitText(35);
	m_wndRoom.SetCheckValue(true);
	m_wndRoom.LimitText(35);

	m_wndList.InsertColumn(0, _T(""), CFMT_NUMBER, 0);//bedidx
	m_wndList.InsertColumn(1, _T("Index"), CFMT_NUMBER, 60);
	m_wndList.InsertColumn(2, _T("Type"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(3, _T("Room"), CFMT_TEXT, 150);
	m_wndList.InsertColumn(5, _T("Bed"), CFMT_TEXT, 150);
	m_wndList.InsertColumn(6, _T("Document No"), CFMT_NUMBER, 90);
	m_wndList.InsertColumn(7, _T("Record No"), CFMT_TEXT, 90);
	m_wndList.InsertColumn(8, _T("Patient Name"), CFMT_TEXT, 160);
	m_wndList.InsertColumn(9, _T("Admit Date"), CFMT_DATETIME, 120);


	m_wndType.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndType.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);
	m_wndRoom.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndRoom.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CHMSBedTrackingDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
	m_wndType.SetEvent(WE_SELENDOK, _OnTypeSelendokFnc);
	//m_wndType.SetEvent(WE_SETFOCUS, _OnTypeSetfocusFnc);
	//m_wndType.SetEvent(WE_KILLFOCUS, _OnTypeKillfocusFnc);
	m_wndType.SetEvent(WE_SELCHANGE, _OnTypeSelectChangeFnc);
	m_wndType.SetEvent(WE_LOADDATA, _OnTypeLoadDataFnc);
	//m_wndType.SetEvent(WE_ADDNEW, _OnTypeAddNewFnc);
	m_wndRoom.SetEvent(WE_SELENDOK, _OnRoomSelendokFnc);
	//m_wndRoom.SetEvent(WE_SETFOCUS, _OnRoomSetfocusFnc);
	//m_wndRoom.SetEvent(WE_KILLFOCUS, _OnRoomKillfocusFnc);
	m_wndRoom.SetEvent(WE_SELCHANGE, _OnRoomSelectChangeFnc);
	m_wndRoom.SetEvent(WE_LOADDATA, _OnRoomLoadDataFnc);
	//m_wndRoom.SetEvent(WE_ADDNEW, _OnRoomAddNewFnc);
	m_wndRefresh.SetEvent(WE_CLICK, _OnRefreshSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	

	m_wndList.SetWindowText(_T("Bed tracking"));
	m_wndList.AddEvent(1, _T("Edit"), _OnListEditItemFnc);
	m_wndList.AddEvent(0, _T("-"), NULL);
	m_wndList.AddEvent(2, _T("Move"), _OnListMoveItemFnc);

	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndMove.SetEvent(WE_CLICK, _OnMoveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_EDIT);
	OnListLoadData();
}
void CHMSBedTrackingDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndType.GetDlgCtrlID(), m_szTypeKey);
	DDX_TextEx(pDX, m_wndRoom.GetDlgCtrlID(), m_szRoomKey);

}
void CHMSBedTrackingDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSBedTrackingDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSBedTrackingDialog::SetDefaultValues(){

	m_szTypeKey.Empty();

}
int CHMSBedTrackingDialog::SetMode(int nMode){
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
 			EnableButtons(TRUE, 0, 1, 2, -1);
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
void CHMSBedTrackingDialog::OnListDblClick(){
	
} 
void CHMSBedTrackingDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 

int CHMSBedTrackingDialog::OnListEditItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0)
		return 0;
	long nBedIdx = str2long(m_wndList.GetItemText(nSel, 0));
	long nDocumentNo = str2long(m_wndList.GetItemText(nSel, 5));
	CHMSBedTrackingChangeDialog dlg(this, nBedIdx, false);
	dlg.m_nDocumentNo = nDocumentNo;

	if(dlg.DoModal() == IDOK)
	{
		OnListLoadData();
	}
	return 0;
}

int CHMSBedTrackingDialog::OnListMoveItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0)
		return 0;
	long nBedIdx = str2long(m_wndList.GetItemText(nSel, 0));
	long nDocumentNo = str2long(m_wndList.GetItemText(nSel, 5));
	CHMSBedTrackingChangeDialog dlg(this, nBedIdx, true);
	dlg.m_nDocumentNo = nDocumentNo;
	if(dlg.DoModal() == IDOK)
	{
		OnListLoadData();
	}
	return 0;
}

long CHMSBedTrackingDialog::OnListLoadData(){

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	int nCount = 0;
	szSQL.Format(_T(" SELECT COALESCE(hbl_typeid,CAST('N' AS NVARCHAR2(1)))                               AS bedtypeid,") \
_T("   get_selection_desc('hms_bed_type',COALESCE(hbl_typeid,CAST('N' AS NVARCHAR2(1)))) AS bedtypedesc,") \
_T("   hb_admitdate                                                                      AS admitdate,") \
_T("   hrl_name                                                                          AS roomname,") \
_T("   hb_bedid                                                                          AS bedid,") \
_T("   hb_idx                                                                            AS bedidx,") \
_T("   hbl_name                                                                          AS bedname,") \
_T("   htr_docno                                                                         AS docno,") \
_T("   hcr_recordno                                                                      AS recordno,") \
_T("   trim(hp_surname") \
_T("   ||' '") \
_T("   ||hp_midname") \
_T("   ||' '") \
_T("   ||hp_firstname) AS pname") \
_T(" FROM hms_bedlist") \
_T(" LEFT JOIN hms_roomlist") \
_T(" ON(hrl_deptid = hbl_deptid") \
_T(" AND hrl_id    = hbl_roomid)") \
_T(" LEFT JOIN hms_bed") \
_T(" ON(hbl_deptid  = hb_deptid") \
_T(" AND hbl_roomid = hb_roomid") \
_T(" AND hbl_id     = hb_bedid") \
_T(" AND hb_status  ='O')") \
_T(" LEFT JOIN hms_treatment_record") \
_T(" ON(htr_deptid = hb_deptid") \
_T(" AND htr_idx   = hb_refidx") \
_T(" AND htr_docno = hb_docno)") \
_T(" LEFT JOIN hms_clinical_record") \
_T(" ON(hcr_docno = htr_docno)") \
_T(" LEFT JOIN hms_patient") \
_T(" ON(hcr_patientno = hp_patientno)") \
_T(" WHERE hbl_deptid = '%s'") \
_T(" ORDER BY hbl_deptid,") \
_T("   hbl_roomid,") \
_T("   hbl_id") , pMF->m_szDept);

	CString tmpStr;
	int nIndex = 1;
	m_wndList.BeginLoad(); 
	
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		tmpStr.Format(_T("%d"), nIndex++);
		m_wndList.AddItems(
			rs.GetValue(_T("bedidx")), 
			tmpStr, 
			rs.GetValue(_T("bedtypedesc")), 
			rs.GetValue(_T("roomname")), 
			rs.GetValue(_T("bedname")), 
			rs.GetValue(_T("docno")), 
			rs.GetValue(_T("RecordNo")), 
			rs.GetValue(_T("pname")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;

}
void CHMSBedTrackingDialog::OnTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSBedTrackingDialog::OnTypeSelendok(){
	 
}
/*void CHMSBedTrackingDialog::OnTypeSetfocus(){
	
}*/
/*void CHMSBedTrackingDialog::OnTypeKillfocus(){
	
}*/
long CHMSBedTrackingDialog::OnTypeLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndType.IsSearchKey() && !m_szTypeKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szTypeKey
};
	m_wndType.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndType.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSBedTrackingDialog::OnTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSBedTrackingDialog::OnRoomSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSBedTrackingDialog::OnRoomSelendok(){
	 
}
/*void CHMSBedTrackingDialog::OnRoomSetfocus(){
	
}*/
/*void CHMSBedTrackingDialog::OnRoomKillfocus(){
	
}*/
long CHMSBedTrackingDialog::OnRoomLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndRoom.IsSearchKey() && !m_szRoomKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szRoomKey
};
	m_wndRoom.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndRoom.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSBedTrackingDialog::OnRoomAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSBedTrackingDialog::OnRefreshSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 

void CHMSBedTrackingDialog::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSBedTrackingDialog::OnMoveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSBedTrackingDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSBedTrackingDialog::OnAddHMSBedTrackingDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSBedTrackingDialog::OnEditHMSBedTrackingDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSBedTrackingDialog::OnDeleteHMSBedTrackingDialog(){
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
 		OnCancelHMSBedTrackingDialog();
 	}
	return 0;
}
int CHMSBedTrackingDialog::OnSaveHMSBedTrackingDialog(){
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
 		//OnHMSBedTrackingDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSBedTrackingDialog::OnCancelHMSBedTrackingDialog(){
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
int CHMSBedTrackingDialog::OnHMSBedTrackingDialogListLoadData(){
	return 0;
}
