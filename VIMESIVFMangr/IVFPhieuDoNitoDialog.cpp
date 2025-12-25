#include "IVFPhieuDoNitoDialog.h"
#include "MainFrm.h"
#include "IVFPhieuDoNitoPopup.h"
/*static void _Onngay_doChangeFnc(CWnd *pWnd){
	((CIVFPhieuDoNitoDialog *)pWnd)->Onngay_doChange();
} */
/*static void _Onngay_doSetfocusFnc(CWnd *pWnd){
	((CIVFPhieuDoNitoDialog *)pWnd)->Onngay_doSetfocus();} */ 
/*static void _Onngay_doKillfocusFnc(CWnd *pWnd){
	((CIVFPhieuDoNitoDialog *)pWnd)->Onngay_doKillfocus();
} */
static int _Onngay_doCheckValueFnc(CWnd *pWnd){
	return ((CIVFPhieuDoNitoDialog *)pWnd)->Onngay_doCheckValue();
} 
static void _OnNguoidoSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CIVFPhieuDoNitoDialog* )pWnd)->OnNguoidoSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnNguoidoSelendokFnc(CWnd *pWnd){
	((CIVFPhieuDoNitoDialog *)pWnd)->OnNguoidoSelendok();
}
/*static void _OnNguoidoSetfocusFnc(CWnd *pWnd){
	((CIVFPhieuDoNitoDialog *)pWnd)->OnNguoidoKillfocus();
}*/
/*static void _OnNguoidoKillfocusFnc(CWnd *pWnd){
	((CIVFPhieuDoNitoDialog *)pWnd)->OnNguoidoKillfocus();
}*/
static long _OnNguoidoLoadDataFnc(CWnd *pWnd){
	return ((CIVFPhieuDoNitoDialog *)pWnd)->OnNguoidoLoadData();
}
/*static void _OnNguoidoAddNewFnc(CWnd *pWnd){
	((CIVFPhieuDoNitoDialog *)pWnd)->OnNguoidoAddNew();
}*/
/*static void _OnDiengiaiChangeFnc(CWnd *pWnd){
	((CIVFPhieuDoNitoDialog *)pWnd)->OnDiengiaiChange();
} */
/*static void _OnDiengiaiSetfocusFnc(CWnd *pWnd){
	((CIVFPhieuDoNitoDialog *)pWnd)->OnDiengiaiSetfocus();} */ 
/*static void _OnDiengiaiKillfocusFnc(CWnd *pWnd){
	((CIVFPhieuDoNitoDialog *)pWnd)->OnDiengiaiKillfocus();
} */
static int _OnDiengiaiCheckValueFnc(CWnd *pWnd){
	return ((CIVFPhieuDoNitoDialog *)pWnd)->OnDiengiaiCheckValue();
} 
static void _OnUpdateSelectFnc(CWnd *pWnd){
	CIVFPhieuDoNitoDialog *pVw = (CIVFPhieuDoNitoDialog *)pWnd;
	pVw->OnUpdateSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CIVFPhieuDoNitoDialog *pVw = (CIVFPhieuDoNitoDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnAddLineSelectFnc(CWnd *pWnd){
	CIVFPhieuDoNitoDialog *pVw = (CIVFPhieuDoNitoDialog *)pWnd;
	pVw->OnAddLineSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CIVFPhieuDoNitoDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CIVFPhieuDoNitoDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CIVFPhieuDoNitoDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CIVFPhieuDoNitoDialog*)pWnd)->OnListDeleteItem();
} 
static int _OnAddIVFPhieuDoNitoDialogFnc(CWnd *pWnd){
	 return ((CIVFPhieuDoNitoDialog*)pWnd)->OnAddIVFPhieuDoNitoDialog();
} 
static int _OnEditIVFPhieuDoNitoDialogFnc(CWnd *pWnd){
	 return ((CIVFPhieuDoNitoDialog*)pWnd)->OnEditIVFPhieuDoNitoDialog();
} 
static int _OnDeleteIVFPhieuDoNitoDialogFnc(CWnd *pWnd){
	 return ((CIVFPhieuDoNitoDialog*)pWnd)->OnDeleteIVFPhieuDoNitoDialog();
} 
static int _OnSaveIVFPhieuDoNitoDialogFnc(CWnd *pWnd){
	 return ((CIVFPhieuDoNitoDialog*)pWnd)->OnSaveIVFPhieuDoNitoDialog();
} 
static int _OnCancelIVFPhieuDoNitoDialogFnc(CWnd *pWnd){
	 return ((CIVFPhieuDoNitoDialog*)pWnd)->OnCancelIVFPhieuDoNitoDialog();
} 
CIVFPhieuDoNitoDialog::CIVFPhieuDoNitoDialog(CWnd *pParent, long nID, int nMode):
	CGuiDialog(pParent){
	m_nID = nID;
	m_nDlgWidth = 485;
	m_nDlgHeight = 365;
	SetDefaultValues();
	SetMode(nMode);
}
CIVFPhieuDoNitoDialog::~CIVFPhieuDoNitoDialog(){
}
void CIVFPhieuDoNitoDialog::OnCreateComponents(){
	m_wndngay_doLabel.Create(this, _T("ngay_do"), 10, 30, 90, 55);
	m_wndngay_do.Create(this,95, 30, 195, 55); 
	m_wndNguoidoLabel.Create(this, _T("nguoi_do"), 200, 30, 280, 55);
	m_wndNguoido.Create(this,285, 30, 475, 55); 
	m_wndDetail.Create(this, _T("Detail"), 5, 95, 480, 325);
	m_wndInformation.Create(this, _T("Information"), 5, 5, 480, 90);
	m_wndDiengiaiLabel.Create(this, _T("dien_giai"), 10, 60, 90, 85);
	m_wndDiengiai.Create(this,95, 60, 475, 85); 
	m_wndUpdate.Create(this, _T("&Update"), 290, 330, 380, 355);
	m_wndSave.Create(this, _T("&Save"), 385, 330, 475, 355);
	m_wndAddLine.Create(this, _T("&Add Line"), 5, 332, 95, 357);
	m_wndList.Create(this,10, 120, 475, 320); 

}
void CIVFPhieuDoNitoDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndngay_do.SetMax(CDate(pMF->GetSysDate()));
	m_wndngay_do.SetCheckValue(true);
	m_wndNguoido.SetCheckValue(true);
	m_wndNguoido.LimitText(35);
	m_wndDiengiai.SetLimitText(35);
	m_wndDiengiai.SetCheckValue(true);

	m_wndNguoido.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndNguoido.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);

	m_wndList.InsertColumn(0, _T(""), CFMT_TEXT, 0);
	m_wndList.InsertColumn(1, _T("STT"), CFMT_TEXT, 60);
	m_wndList.InsertColumn(2, _T("thung"), CFMT_TEXT, 200);

}
void CIVFPhieuDoNitoDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndngay_do.SetEvent(WE_CHANGE, _Onngay_doChangeFnc);
	//m_wndngay_do.SetEvent(WE_SETFOCUS, _Onngay_doSetfocusFnc);
	//m_wndngay_do.SetEvent(WE_KILLFOCUS, _Onngay_doKillfocusFnc);
	m_wndngay_do.SetEvent(WE_CHECKVALUE, _Onngay_doCheckValueFnc);
	m_wndNguoido.SetEvent(WE_SELENDOK, _OnNguoidoSelendokFnc);
	//m_wndNguoido.SetEvent(WE_SETFOCUS, _OnNguoidoSetfocusFnc);
	//m_wndNguoido.SetEvent(WE_KILLFOCUS, _OnNguoidoKillfocusFnc);
	m_wndNguoido.SetEvent(WE_SELCHANGE, _OnNguoidoSelectChangeFnc);
	m_wndNguoido.SetEvent(WE_LOADDATA, _OnNguoidoLoadDataFnc);
	//m_wndNguoido.SetEvent(WE_ADDNEW, _OnNguoidoAddNewFnc);
	//m_wndDiengiai.SetEvent(WE_CHANGE, _OnDiengiaiChangeFnc);
	//m_wndDiengiai.SetEvent(WE_SETFOCUS, _OnDiengiaiSetfocusFnc);
	//m_wndDiengiai.SetEvent(WE_KILLFOCUS, _OnDiengiaiKillfocusFnc);
	m_wndDiengiai.SetEvent(WE_CHECKVALUE, _OnDiengiaiCheckValueFnc);
	m_wndUpdate.SetEvent(WE_CLICK, _OnUpdateSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndAddLine.SetEvent(WE_CLICK, _OnAddLineSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	SetMode(GetMode());
	if (GetMode() == VM_EDIT)
	{
		GetDataToScreen();
	}

}
void CIVFPhieuDoNitoDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndngay_do.GetDlgCtrlID(), m_szngay_do);
	DDX_TextEx(pDX, m_wndNguoido.GetDlgCtrlID(), m_szNguoidoKey);
	DDX_Text(pDX, m_wndDiengiai.GetDlgCtrlID(), m_szDiengiai);

}
void CIVFPhieuDoNitoDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("ngay_do")] =  m_szngay_do;
	m_jData[_T("Nguoido")] =  m_szNguoidoKey;
	m_jData[_T("Diengiai")] =  m_szDiengiai;
	}
	else
	{
			
	m_jData[_T("ngay_do")].GetValue(m_szngay_do);
	m_jData[_T("Nguoido")].GetValue(m_szNguoidoKey);
	m_jData[_T("Diengiai")].GetValue(m_szDiengiai);
	}

}
void CIVFPhieuDoNitoDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		SetMode(VM_ADD);
		return;
	}
	rs.GetValue(_T("ngay_do"), m_szngay_do);
	rs.GetValue(_T("nguoi_do"), m_szNguoidoKey);
	rs.GetValue(_T("dien_giai"), m_szDiengiai);
	SetMode(GetMode());
}
void CIVFPhieuDoNitoDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CIVFPhieuDoNitoDialog::SetDefaultValues(){

	m_szngay_do.Empty();
	m_szNguoidoKey.Empty();
	m_szDiengiai.Empty();

}
int CIVFPhieuDoNitoDialog::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 1, -1);
 			SetDefaultValues();
			m_szngay_do = pMF->GetSysDate();
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 1, -1);
 			break;
 		case VM_VIEW: 
 			EnableControls(FALSE);
 			EnableButtons(FALSE, 1, -1);
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
/*void CIVFPhieuDoNitoDialog::Onngay_doChange(){
	
} */
/*void CIVFPhieuDoNitoDialog::Onngay_doSetfocus(){
	
} */
/*void CIVFPhieuDoNitoDialog::Onngay_doKillfocus(){
	
} */
int CIVFPhieuDoNitoDialog::Onngay_doCheckValue(){
	return 0;
} 
void CIVFPhieuDoNitoDialog::OnNguoidoSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFPhieuDoNitoDialog::OnNguoidoSelendok(){
	 
}
/*void CIVFPhieuDoNitoDialog::OnNguoidoSetfocus(){
	
}*/
/*void CIVFPhieuDoNitoDialog::OnNguoidoKillfocus(){
	
}*/
long CIVFPhieuDoNitoDialog::OnNguoidoLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Format(_T(" and su_deptid = 'TTDTHM' and rownum < 11"));
	return pMF->LoadUserList(&m_wndNguoido, m_szNguoidoKey, szFilter);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndNguoido.IsSearchKey() && !m_szNguoidoKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szNguoidoKey
};
	m_wndNguoido.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndNguoido.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CIVFPhieuDoNitoDialog::OnNguoidoAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CIVFPhieuDoNitoDialog::OnDiengiaiChange(){
	
} */
/*void CIVFPhieuDoNitoDialog::OnDiengiaiSetfocus(){
	
} */
/*void CIVFPhieuDoNitoDialog::OnDiengiaiKillfocus(){
	
} */
int CIVFPhieuDoNitoDialog::OnDiengiaiCheckValue(){
	return 0;
} 
void CIVFPhieuDoNitoDialog::OnUpdateSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if (GetMode() != VM_VIEW)
	{
		return;
	}
	SetMode(VM_EDIT);
} 
void CIVFPhieuDoNitoDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveIVFPhieuDoNitoDialog();
} 
void CIVFPhieuDoNitoDialog::OnAddLineSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CIVFPhieuDoNitoPopup *newPop = new CIVFPhieuDoNitoPopup(this, m_nID);
	newPop->ShowPopup(&m_wndList);
} 
void CIVFPhieuDoNitoDialog::OnListDblClick(){
	
} 
void CIVFPhieuDoNitoDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CIVFPhieuDoNitoDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CIVFPhieuDoNitoDialog::OnListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0, nIdx = 1;
	szSQL.Format(_T("SELECT ivf_phieu_do_nito_line_id AS line_id,") \
	_T("       Ivf_get_setting_desc('ivf_storage_thung', id_thung) AS thung ") \
	_T(" FROM   ivf_phieu_do_nito_line") \
	_T(" WHERE  id_phieu_do_nito = %ld "), m_nID);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("line_id")),
			int2str(nIdx++),
			rs.GetValue(_T("thung")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;

}
int CIVFPhieuDoNitoDialog::OnAddIVFPhieuDoNitoDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CIVFPhieuDoNitoDialog::OnEditIVFPhieuDoNitoDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CIVFPhieuDoNitoDialog::OnDeleteIVFPhieuDoNitoDialog(){
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
 		OnCancelIVFPhieuDoNitoDialog();
 	}
	return 0;
}
int CIVFPhieuDoNitoDialog::OnSaveIVFPhieuDoNitoDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
	CDbfMap tbl;
	tbl.SetTableName(_T("ivf_phieu_do_nito"));
	tbl.AddField(_T("ngay_do"), dfDate);
	tbl.AddField(_T("nguoi_do"), dfText, 15);
	tbl.AddField(_T("dien_giai"), dfText, 254);
	tbl.SetValue(_T("ngay_do"), m_szngay_do);
	tbl.SetValue(_T("nguoi_do"), m_szNguoidoKey);
	tbl.SetValue(_T("dien_giai"), m_szDiengiai);
 	if(GetMode() == VM_ADD){
 		szSQL = tbl.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
		szWhere.Format(_T(" WHERE ivf_phieu_do_nito_id = %ld"), m_nID);
 		szSQL = tbl.GetUpdateSQL();
 		szSQL += szWhere;
 	}
 _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CIVFPhieuDoNitoDialog::OnCancelIVFPhieuDoNitoDialog(){
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
int CIVFPhieuDoNitoDialog::OnIVFPhieuDoNitoDialogListLoadData(){
	return 0;
}
