#include "TMThongTinHoiChanThanhVien.h"
#include "HMSMainFrame.h"
static long _OnMemberListLoadDataFnc(CWnd *pWnd){
	return ((CTMThongTinHoiChanThanhVien*)pWnd)->OnMemberListLoadData();
} 
static void _OnMemberListDblClickFnc(CWnd *pWnd){
	((CTMThongTinHoiChanThanhVien*)pWnd)->OnMemberListDblClick();
} 
static void _OnMemberListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CTMThongTinHoiChanThanhVien*)pWnd)->OnMemberListSelectChange(nOldItem, nNewItem);
} 
static int _OnMemberListDeleteItemFnc(CWnd *pWnd){
	 return ((CTMThongTinHoiChanThanhVien*)pWnd)->OnMemberListDeleteItem();
} 
static void _OnUpdateSelectFnc(CWnd *pWnd){
	CTMThongTinHoiChanThanhVien *pVw = (CTMThongTinHoiChanThanhVien *)pWnd;
	pVw->OnUpdateSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CTMThongTinHoiChanThanhVien *pVw = (CTMThongTinHoiChanThanhVien *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CTMThongTinHoiChanThanhVien *pVw = (CTMThongTinHoiChanThanhVien *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddTMThongTinHoiChanThanhVienFnc(CWnd *pWnd){
	 return ((CTMThongTinHoiChanThanhVien*)pWnd)->OnAddTMThongTinHoiChanThanhVien();
} 
static int _OnEditTMThongTinHoiChanThanhVienFnc(CWnd *pWnd){
	 return ((CTMThongTinHoiChanThanhVien*)pWnd)->OnEditTMThongTinHoiChanThanhVien();
} 
static int _OnDeleteTMThongTinHoiChanThanhVienFnc(CWnd *pWnd){
	 return ((CTMThongTinHoiChanThanhVien*)pWnd)->OnDeleteTMThongTinHoiChanThanhVien();
} 
static int _OnSaveTMThongTinHoiChanThanhVienFnc(CWnd *pWnd){
	 return ((CTMThongTinHoiChanThanhVien*)pWnd)->OnSaveTMThongTinHoiChanThanhVien();
} 
static int _OnCancelTMThongTinHoiChanThanhVienFnc(CWnd *pWnd){
	 return ((CTMThongTinHoiChanThanhVien*)pWnd)->OnCancelTMThongTinHoiChanThanhVien();
} 
static int _OnNameCheckValueFnc(CWnd *pWnd){return ((CTMThongTinHoiChanThanhVien*)pWnd)->OnNameCheckValue();}
static int _OnPositionCheckValueFnc(CWnd *pWnd){return ((CTMThongTinHoiChanThanhVien*)pWnd)->OnPositionCheckValue();}
static int _OnWorkUnitCheckValueFnc(CWnd *pWnd){return ((CTMThongTinHoiChanThanhVien*)pWnd)->OnWorkUnitCheckValue();}
static int _OnTelephoneCheckValueFnc(CWnd *pWnd){return ((CTMThongTinHoiChanThanhVien*)pWnd)->OnTelephoneCheckValue();}

CTMThongTinHoiChanThanhVien::CTMThongTinHoiChanThanhVien(CWnd *pParent, long nDocNo, CString szDeptID, CString szCap, long nLan):
	CGuiDialog(pParent){
		m_nDocumentNo = nDocNo;
		m_szDeptID = szDeptID;
		m_szCap = szCap;
		m_nLan = nLan;
	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CTMThongTinHoiChanThanhVien::~CTMThongTinHoiChanThanhVien(){
}
void CTMThongTinHoiChanThanhVien::OnCreateComponents(){
	m_wndInformation.Create(this, _T("Information"), 5, 5, 805, 535);
	m_wndMemberList.Create(this,10, 30, 800, 530); 
	//m_wndUpdate.Create(this, _T("Update"), 530, 540, 630, 565);
	m_wndSave.Create(this, _T("Save"), 635, 540, 715, 565);
	m_wndCancel.Create(this, _T("Cancel"), 720, 540, 800, 565);

}
void CTMThongTinHoiChanThanhVien::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

	m_tbl_consultation.SetTableName(_T("hms_consultation"));
	m_tbl_consultation.AddField(_T("hc_docno"), dfLong);
	m_tbl_consultation.AddField(_T("hc_deptid"), dfText);
	m_tbl_consultation.AddField(_T("hc_level"), dfLong);
	m_tbl_consultation.AddField(_T("hc_idx"), dfLong);
	m_tbl_consultation.AddField(_T("hc_name"), dfText);
	m_tbl_consultation.AddField(_T("hc_position"), dfText);
	m_tbl_consultation.AddField(_T("hc_workunit"), dfText);
	m_tbl_consultation.AddField(_T("hc_telephone"), dfText);
	m_tbl_consultation.AddField(_T("hc_line"), dfLong);

	m_wndMemberList.InsertColumn(0, _T("STT"), CFMT_NUMBER, 50);
	m_wndMemberList.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);
	m_wndMemberList.InsertColumn(2, _T("Position"), CFMT_TEXT, 200);
	m_wndMemberList.InsertColumn(3, _T("Work Unit"), CFMT_TEXT, 200);
	m_wndMemberList.InsertColumn(4, _T("Telephone"), CFMT_TEXT, 100);

	m_wndMemberList.ModifyStyle(0, LVS_NOSORTHEADER);
	m_wndMemberList.SetEditLabel(1, GUI_TEXTCTRL);
	m_wndMemberList.SetEditLabel(2, GUI_TEXTCTRL);
	m_wndMemberList.SetEditLabel(3, GUI_TEXTCTRL);
	m_wndMemberList.SetEditLabel(4, GUI_TEXTCTRL);
	CGuiTextCtrl* pCtrl = NULL;
	pCtrl = (CGuiTextCtrl*) m_wndMemberList.GetEditControl(1);
	if (pCtrl) pCtrl->SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	pCtrl = (CGuiTextCtrl*) m_wndMemberList.GetEditControl(2);
	if (pCtrl) pCtrl->SetEvent(WE_CHECKVALUE, _OnPositionCheckValueFnc);
	pCtrl = (CGuiTextCtrl*) m_wndMemberList.GetEditControl(3);
	if (pCtrl) pCtrl->SetEvent(WE_CHECKVALUE, _OnWorkUnitCheckValueFnc);
	pCtrl = (CGuiNumberCtrl*) m_wndMemberList.GetEditControl(4);
	if (pCtrl) pCtrl->SetEvent(WE_CHECKVALUE, _OnTelephoneCheckValueFnc);
	m_wndMemberList.SetDisplayColor(true);

}
void CTMThongTinHoiChanThanhVien::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndMemberList.SetEvent(WE_SELCHANGE, _OnMemberListSelectChangeFnc);
	m_wndMemberList.SetEvent(WE_LOADDATA, _OnMemberListLoadDataFnc);
	m_wndMemberList.SetEvent(WE_DBLCLICK, _OnMemberListDblClickFnc);
	m_wndMemberList.AddEvent(1, _T("Delete"), _OnMemberListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndUpdate.SetEvent(WE_CLICK, _OnUpdateSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	SetMode(VM_ADD);
	OnMemberListLoadData();

}
void CTMThongTinHoiChanThanhVien::OnDoDataExchange(CDataExchange* pDX){

}
void CTMThongTinHoiChanThanhVien::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	}
	else
	{
			
	}

}
void CTMThongTinHoiChanThanhVien::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CTMThongTinHoiChanThanhVien::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CTMThongTinHoiChanThanhVien::SetDefaultValues(){


}
int CTMThongTinHoiChanThanhVien::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, -1);
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
 			EnableButtons(TRUE, 0, 2, -1);
 			SetDefaultValues();
 			break;
 		};
 		UpdateData(FALSE);
 		return nOldMode;
}
void CTMThongTinHoiChanThanhVien::OnMemberListDblClick(){
	m_wndMemberList.PostMessage(WM_KEYDOWN, VK_F2);
} 
void CTMThongTinHoiChanThanhVien::OnMemberListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CTMThongTinHoiChanThanhVien::OnMemberListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnDeleteTMThongTinHoiChanThanhVien();
	 return 0;
} 
long CTMThongTinHoiChanThanhVien::OnMemberListLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndMemberList.BeginLoad(); 

	szSQL.Format(_T(" SELECT") \
		_T(" hc_docno AS docno,") \
		_T(" hc_deptid AS deptid,") \
		_T(" hc_level AS plevel,") \
		_T(" hc_idx AS idx,") \
		_T(" hc_name AS pname,") \
		_T(" hc_position AS pposition,") \
		_T(" hc_workunit AS pworkunit,") \
		_T(" hc_telephone AS ptelephone,") \
		_T(" hc_line AS pline") \
		_T(" FROM hms_consultation WHERE hc_docno = %ld AND hc_deptid = '%s' AND hc_level = %s AND hc_idx = %ld ORDER BY CAST(hc_line AS INTEGER)"), m_nDocumentNo, m_szDeptID, m_szCap, m_nLan);

	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);

	if(nCount == 0)
	{
		szSQL.Format(_T(" SELECT ") \
			_T(" ss_code AS pline,") \
			_T(" '' AS pname,") \
			_T(" '' AS pworkunit,") \
			_T(" '' AS ptelephone,") \
			_T(" '' AS pposition") \
			_T(" FROM sys_sel") \
			_T(" WHERE ss_id = 'hms_count'") \
			_T(" ORDER BY CAST(ss_code AS INTEGER)"));
		nCount = rs.ExecSQL(szSQL);
	}

	while(!rs.IsEOF()){ 
		m_wndMemberList.AddItems(
			rs.GetValue(_T("pline")), 
			rs.GetValue(_T("pname")), 
			rs.GetValue(_T("pposition")), 
			rs.GetValue(_T("pworkunit")),
			rs.GetValue(_T("ptelephone")),
			NULL);
		rs.MoveNext();
	}

	m_wndMemberList.EndLoad(); 
	return nCount;
}
void CTMThongTinHoiChanThanhVien::OnUpdateSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	SetMode(VM_ADD);
} 
void CTMThongTinHoiChanThanhVien::OnSaveSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnSaveTMThongTinHoiChanThanhVien();
} 
void CTMThongTinHoiChanThanhVien::OnCancelSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CTMThongTinHoiChanThanhVien::OnAddTMThongTinHoiChanThanhVien(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CTMThongTinHoiChanThanhVien::OnEditTMThongTinHoiChanThanhVien(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CTMThongTinHoiChanThanhVien::OnDeleteTMThongTinHoiChanThanhVien(){
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
 	szSQL.Format(_T("DELETE FROM hms_consultation WHERE hc_docno = %ld AND hc_deptid = '%s' AND hc_level = %s AND hc_idx = %ld"), m_nDocumentNo, m_szDeptID, m_szCap, m_nLan);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
 		SetMode(VM_NONE);
 		OnMemberListLoadData();
 	}
	return 0;
}
int CTMThongTinHoiChanThanhVien::OnSaveTMThongTinHoiChanThanhVien(){
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	UpdateData(TRUE);
	CRecord rs(&pMF->m_db);
	CString szSQL;
	CString szLine, szName, szPosition, szWorkUnit, szTelephone;

	for (int i = 0; i < m_wndMemberList.GetItemCount(); i++)
	{
		szLine = m_wndMemberList.GetItemText(i, 0);
		szName = m_wndMemberList.GetItemText(i, 1);
		szPosition = m_wndMemberList.GetItemText(i, 2);
		szWorkUnit = m_wndMemberList.GetItemText(i, 3);
		szTelephone = m_wndMemberList.GetItemText(i, 4);

		szSQL.Format(_T("SELECT Count(*) FROM hms_consultation WHERE hc_docno = %ld AND hc_deptid = '%s' AND hc_level = %s AND hc_idx = %ld AND hc_line = %s"), m_nDocumentNo, m_szDeptID, m_szCap, m_nLan, szLine);
		rs.ExecSQL(szSQL);

		if (rs.GetIntValue() > 0)
		{
			szSQL.Format(_T("UPDATE hms_consultation SET hc_name = '%s', hc_position = '%s', hc_workunit = '%s' , hc_telephone = '%s' ") \
				_T("WHERE hc_docno = %ld AND hc_deptid = '%s' AND hc_level = %s AND hc_idx = %ld AND hc_line = %s"), szName, szPosition, szWorkUnit, szTelephone, m_nDocumentNo, m_szDeptID, m_szCap, m_nLan, szLine);
			pMF->ExecSQL(szSQL);
		}
		else
		{
			m_tbl_consultation.SetValue(_T("hc_docno"), m_nDocumentNo);
			m_tbl_consultation.SetValue(_T("hc_deptid"), m_szDeptID);
			m_tbl_consultation.SetValue(_T("hc_level"), m_szCap);
			m_tbl_consultation.SetValue(_T("hc_idx"), m_nLan);
			m_tbl_consultation.SetValue(_T("hc_name"), szName);
			m_tbl_consultation.SetValue(_T("hc_position"), szPosition);
			m_tbl_consultation.SetValue(_T("hc_workunit"), szWorkUnit);
			m_tbl_consultation.SetValue(_T("hc_telephone"), szTelephone);
			m_tbl_consultation.SetValue(_T("hc_line"), szLine);
			szSQL = m_tbl_consultation.GetInsertSQL();
			pMF->ExecSQL(szSQL);
		}
	}

	OnMemberListLoadData();
	return 0;
}
int CTMThongTinHoiChanThanhVien::OnCancelTMThongTinHoiChanThanhVien(){
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
int CTMThongTinHoiChanThanhVien::OnTMThongTinHoiChanThanhVienListLoadData(){
	return 0;
}
int CTMThongTinHoiChanThanhVien::OnNameCheckValue(){
	CGuiListCtrl *pList = (CGuiListCtrl*) (GetFocus()->GetParent());
	pList->PostMessage(WM_KEYDOWN, VK_F2);
	return 0;
}
int CTMThongTinHoiChanThanhVien::OnPositionCheckValue(){
	CGuiListCtrl *pList = (CGuiListCtrl*) (GetFocus()->GetParent());
	pList->PostMessage(WM_KEYDOWN, VK_F2);
	return 0;
}
int CTMThongTinHoiChanThanhVien::OnWorkUnitCheckValue(){
	CGuiListCtrl *pList = (CGuiListCtrl*) (GetFocus()->GetParent());
	pList->PostMessage(WM_KEYDOWN, VK_F2);
	return 0;
}
int CTMThongTinHoiChanThanhVien::OnTelephoneCheckValue(){
	CGuiListCtrl *pList = (CGuiListCtrl*) (GetFocus()->GetParent());
	pList->PostMessage(WM_KEYDOWN, VK_F2);
	return 0;
}