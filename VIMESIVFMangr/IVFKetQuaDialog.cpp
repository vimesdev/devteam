#include "IVFKetQuaDialog.h"
#include "MainFrm.h"
#include "IVFParaclinicResultDialog.h"
static void _OnBetaHCGSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CIVFKetQuaDialog* )pWnd)->OnBetaHCGSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnBetaHCGSelendokFnc(CWnd *pWnd){
	((CIVFKetQuaDialog *)pWnd)->OnBetaHCGSelendok();
}
/*static void _OnBetaHCGSetfocusFnc(CWnd *pWnd){
	((CIVFKetQuaDialog *)pWnd)->OnBetaHCGKillfocus();
}*/
/*static void _OnBetaHCGKillfocusFnc(CWnd *pWnd){
	((CIVFKetQuaDialog *)pWnd)->OnBetaHCGKillfocus();
}*/
static long _OnBetaHCGLoadDataFnc(CWnd *pWnd){
	return ((CIVFKetQuaDialog *)pWnd)->OnBetaHCGLoadData();
}
/*static void _OnBetaHCGAddNewFnc(CWnd *pWnd){
	((CIVFKetQuaDialog *)pWnd)->OnBetaHCGAddNew();
}*/
static void _OnThailamsangSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CIVFKetQuaDialog* )pWnd)->OnThailamsangSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnThailamsangSelendokFnc(CWnd *pWnd){
	((CIVFKetQuaDialog *)pWnd)->OnThailamsangSelendok();
}
/*static void _OnThailamsangSetfocusFnc(CWnd *pWnd){
	((CIVFKetQuaDialog *)pWnd)->OnThailamsangKillfocus();
}*/
/*static void _OnThailamsangKillfocusFnc(CWnd *pWnd){
	((CIVFKetQuaDialog *)pWnd)->OnThailamsangKillfocus();
}*/
static long _OnThailamsangLoadDataFnc(CWnd *pWnd){
	return ((CIVFKetQuaDialog *)pWnd)->OnThailamsangLoadData();
}
/*static void _OnThailamsangAddNewFnc(CWnd *pWnd){
	((CIVFKetQuaDialog *)pWnd)->OnThailamsangAddNew();
}*/
/*static void _OnSoluongthaiChangeFnc(CWnd *pWnd){
	((CIVFKetQuaDialog *)pWnd)->OnSoluongthaiChange();
} */
/*static void _OnSoluongthaiSetfocusFnc(CWnd *pWnd){
	((CIVFKetQuaDialog *)pWnd)->OnSoluongthaiSetfocus();} */ 
/*static void _OnSoluongthaiKillfocusFnc(CWnd *pWnd){
	((CIVFKetQuaDialog *)pWnd)->OnSoluongthaiKillfocus();
} */
static int _OnSoluongthaiCheckValueFnc(CWnd *pWnd){
	return ((CIVFKetQuaDialog *)pWnd)->OnSoluongthaiCheckValue();
} 
static void _OnKetcucsankhoaSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CIVFKetQuaDialog* )pWnd)->OnKetcucsankhoaSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnKetcucsankhoaSelendokFnc(CWnd *pWnd){
	((CIVFKetQuaDialog *)pWnd)->OnKetcucsankhoaSelendok();
}
/*static void _OnKetcucsankhoaSetfocusFnc(CWnd *pWnd){
	((CIVFKetQuaDialog *)pWnd)->OnKetcucsankhoaKillfocus();
}*/
/*static void _OnKetcucsankhoaKillfocusFnc(CWnd *pWnd){
	((CIVFKetQuaDialog *)pWnd)->OnKetcucsankhoaKillfocus();
}*/
static long _OnKetcucsankhoaLoadDataFnc(CWnd *pWnd){
	return ((CIVFKetQuaDialog *)pWnd)->OnKetcucsankhoaLoadData();
}
/*static void _OnKetcucsankhoaAddNewFnc(CWnd *pWnd){
	((CIVFKetQuaDialog *)pWnd)->OnKetcucsankhoaAddNew();
}*/
static void _OnKetquaclsSelectFnc(CWnd *pWnd){
	CIVFKetQuaDialog *pVw = (CIVFKetQuaDialog *)pWnd;
	pVw->OnKetquaclsSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CIVFKetQuaDialog *pVw = (CIVFKetQuaDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CIVFKetQuaDialog *pVw = (CIVFKetQuaDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddIVFKetQuaDialogFnc(CWnd *pWnd){
	 return ((CIVFKetQuaDialog*)pWnd)->OnAddIVFKetQuaDialog();
} 
static int _OnEditIVFKetQuaDialogFnc(CWnd *pWnd){
	 return ((CIVFKetQuaDialog*)pWnd)->OnEditIVFKetQuaDialog();
} 
static int _OnDeleteIVFKetQuaDialogFnc(CWnd *pWnd){
	 return ((CIVFKetQuaDialog*)pWnd)->OnDeleteIVFKetQuaDialog();
} 
static int _OnSaveIVFKetQuaDialogFnc(CWnd *pWnd){
	 return ((CIVFKetQuaDialog*)pWnd)->OnSaveIVFKetQuaDialog();
} 
static int _OnCancelIVFKetQuaDialogFnc(CWnd *pWnd){
	 return ((CIVFKetQuaDialog*)pWnd)->OnCancelIVFKetQuaDialog();
} 
CIVFKetQuaDialog::CIVFKetQuaDialog(CWnd *pParent, long nOrderID, CString szOrderType):
	CGuiDialog(pParent), m_nOrderID(nOrderID), m_szOrderType(szOrderType){

	m_nDlgWidth = 350;
	m_nDlgHeight = 160;
	SetDefaultValues();
}
CIVFKetQuaDialog::~CIVFKetQuaDialog(){
}
void CIVFKetQuaDialog::OnCreateComponents(){
	m_wndBetaHCGLabel.Create(this, _T("Beta HCG"), 5, 5, 130, 30);
	m_wndBetaHCG.Create(this,135, 5, 335, 30); 
	m_wndThailamsangLabel.Create(this, _T("thai_lam_sang"), 5, 35, 130, 60);
	m_wndThailamsang.Create(this,135, 35, 335, 60); 
	m_wndSoluongthaiLabel.Create(this, _T("so_luong_thai"), 5, 65, 130, 90);
	m_wndSoluongthai.Create(this,135, 65, 215, 90); 
	m_wndKetcucsankhoaLabel.Create(this, _T("ket_cuc_san_khoa"), 5, 95, 130, 120);
	m_wndKetcucsankhoa.Create(this,135, 95, 335, 120); 
	m_wndKetquacls.Create(this, _T("ket_qua_cls"), 5, 125, 130, 150);
	m_wndSave.Create(this, _T("&Save"), 170, 125, 250, 150);
	m_wndClose.Create(this, _T("&Close"), 255, 125, 335, 150);

}
void CIVFKetQuaDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndBetaHCG.SetCheckValue(true);
	m_wndBetaHCG.LimitText(35);
	//m_wndThailamsang.SetCheckValue(true);
	m_wndThailamsang.LimitText(35);
	m_wndSoluongthai.SetLimitText(16);
	//m_wndSoluongthai.SetCheckValue(true);
	//m_wndKetcucsankhoa.SetCheckValue(true);
	m_wndKetcucsankhoa.LimitText(35);


	m_wndBetaHCG.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndBetaHCG.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndThailamsang.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndThailamsang.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndKetcucsankhoa.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndKetcucsankhoa.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CIVFKetQuaDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndBetaHCG.SetEvent(WE_SELENDOK, _OnBetaHCGSelendokFnc);
	//m_wndBetaHCG.SetEvent(WE_SETFOCUS, _OnBetaHCGSetfocusFnc);
	//m_wndBetaHCG.SetEvent(WE_KILLFOCUS, _OnBetaHCGKillfocusFnc);
	m_wndBetaHCG.SetEvent(WE_SELCHANGE, _OnBetaHCGSelectChangeFnc);
	m_wndBetaHCG.SetEvent(WE_LOADDATA, _OnBetaHCGLoadDataFnc);
	//m_wndBetaHCG.SetEvent(WE_ADDNEW, _OnBetaHCGAddNewFnc);
	m_wndThailamsang.SetEvent(WE_SELENDOK, _OnThailamsangSelendokFnc);
	//m_wndThailamsang.SetEvent(WE_SETFOCUS, _OnThailamsangSetfocusFnc);
	//m_wndThailamsang.SetEvent(WE_KILLFOCUS, _OnThailamsangKillfocusFnc);
	m_wndThailamsang.SetEvent(WE_SELCHANGE, _OnThailamsangSelectChangeFnc);
	m_wndThailamsang.SetEvent(WE_LOADDATA, _OnThailamsangLoadDataFnc);
	//m_wndThailamsang.SetEvent(WE_ADDNEW, _OnThailamsangAddNewFnc);
	//m_wndSoluongthai.SetEvent(WE_CHANGE, _OnSoluongthaiChangeFnc);
	//m_wndSoluongthai.SetEvent(WE_SETFOCUS, _OnSoluongthaiSetfocusFnc);
	//m_wndSoluongthai.SetEvent(WE_KILLFOCUS, _OnSoluongthaiKillfocusFnc);
	m_wndSoluongthai.SetEvent(WE_CHECKVALUE, _OnSoluongthaiCheckValueFnc);
	m_wndKetcucsankhoa.SetEvent(WE_SELENDOK, _OnKetcucsankhoaSelendokFnc);
	//m_wndKetcucsankhoa.SetEvent(WE_SETFOCUS, _OnKetcucsankhoaSetfocusFnc);
	//m_wndKetcucsankhoa.SetEvent(WE_KILLFOCUS, _OnKetcucsankhoaKillfocusFnc);
	m_wndKetcucsankhoa.SetEvent(WE_SELCHANGE, _OnKetcucsankhoaSelectChangeFnc);
	m_wndKetcucsankhoa.SetEvent(WE_LOADDATA, _OnKetcucsankhoaLoadDataFnc);
	//m_wndKetcucsankhoa.SetEvent(WE_ADDNEW, _OnKetcucsankhoaAddNewFnc);
	m_wndKetquacls.SetEvent(WE_CLICK, _OnKetquaclsSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	GetDataToScreen();
	
}
void CIVFKetQuaDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndBetaHCG.GetDlgCtrlID(), m_szBetaHCGKey);
	DDX_TextEx(pDX, m_wndThailamsang.GetDlgCtrlID(), m_szThailamsangKey);
	DDX_Text(pDX, m_wndSoluongthai.GetDlgCtrlID(), m_nSoluongthai);
	DDX_TextEx(pDX, m_wndKetcucsankhoa.GetDlgCtrlID(), m_szKetcucsankhoaKey);

}
void CIVFKetQuaDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("BetaHCG")] =  m_szBetaHCGKey;
	m_jData[_T("Thailamsang")] =  m_szThailamsangKey;
	m_jData[_T("Soluongthai")] =  m_nSoluongthai;
	m_jData[_T("Ketcucsankhoa")] =  m_szKetcucsankhoaKey;
	}
	else
	{
			
	m_jData[_T("BetaHCG")].GetValue(m_szBetaHCGKey);
	m_jData[_T("Thailamsang")].GetValue(m_szThailamsangKey);
	m_jData[_T("Soluongthai")].GetValue(m_nSoluongthai);
	m_jData[_T("Ketcucsankhoa")].GetValue(m_szKetcucsankhoaKey);
	}

}
void CIVFKetQuaDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	if (m_szOrderType == _T("IVF"))
		szSQL.Format(_T("SELECT betahcg, thai_lam_sang, so_thai, ket_qua ") \
					_T(" FROM ivf_phieu_chuyen WHERE ivf_phieu_chuyen_id = %ld"), m_nOrderID);
	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		SetMode(VM_ADD);
		return;
	}
	rs.GetValue(_T("betahcg"), m_szBetaHCGKey);
	rs.GetValue(_T("thai_lam_sang"), m_szThailamsangKey);
	rs.GetValue(_T("so_thai"), m_nSoluongthai);
	rs.GetValue(_T("ket_qua"), m_szKetcucsankhoaKey);
	SetMode(VM_EDIT);
}
void CIVFKetQuaDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CIVFKetQuaDialog::SetDefaultValues(){

	m_szBetaHCGKey.Empty();
	m_szThailamsangKey.Empty();
	m_nSoluongthai=0;
	m_szKetcucsankhoaKey.Empty();

}
int CIVFKetQuaDialog::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(FALSE, -1);
 			SetDefaultValues();
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(FALSE, -1);
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
void CIVFKetQuaDialog::OnBetaHCGSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

} 
void CIVFKetQuaDialog::OnBetaHCGSelendok(){
	 
}
/*void CIVFKetQuaDialog::OnBetaHCGSetfocus(){
	
}*/
/*void CIVFKetQuaDialog::OnBetaHCGKillfocus(){
	
}*/
long CIVFKetQuaDialog::OnBetaHCGLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return pMF->LoadIVFSelectionList(&m_wndBetaHCG, _T("ket_qua_xn"), m_szBetaHCGKey);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndBetaHCG.IsSearchKey() && !m_szBetaHCGKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szBetaHCGKey
};
	m_wndBetaHCG.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndBetaHCG.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CIVFKetQuaDialog::OnBetaHCGAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CIVFKetQuaDialog::OnThailamsangSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFKetQuaDialog::OnThailamsangSelendok(){
	 
}
/*void CIVFKetQuaDialog::OnThailamsangSetfocus(){
	
}*/
/*void CIVFKetQuaDialog::OnThailamsangKillfocus(){
	
}*/
long CIVFKetQuaDialog::OnThailamsangLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return pMF->LoadIVFSelectionList(&m_wndThailamsang, _T("ket_qua_xn"), m_szThailamsangKey);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndThailamsang.IsSearchKey() && !m_szThailamsangKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szThailamsangKey
};
	m_wndThailamsang.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndThailamsang.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CIVFKetQuaDialog::OnThailamsangAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CIVFKetQuaDialog::OnSoluongthaiChange(){
	
} */
/*void CIVFKetQuaDialog::OnSoluongthaiSetfocus(){
	
} */
/*void CIVFKetQuaDialog::OnSoluongthaiKillfocus(){
	
} */
int CIVFKetQuaDialog::OnSoluongthaiCheckValue(){
	return 0;
} 
void CIVFKetQuaDialog::OnKetcucsankhoaSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFKetQuaDialog::OnKetcucsankhoaSelendok(){
	 
}
/*void CIVFKetQuaDialog::OnKetcucsankhoaSetfocus(){
	
}*/
/*void CIVFKetQuaDialog::OnKetcucsankhoaKillfocus(){
	
}*/
long CIVFKetQuaDialog::OnKetcucsankhoaLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return pMF->LoadIVFSelectionList(&m_wndKetcucsankhoa, _T("ket_cuc_san_khoa"), m_szKetcucsankhoaKey);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndKetcucsankhoa.IsSearchKey() && !m_szKetcucsankhoaKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szKetcucsankhoaKey
};
	m_wndKetcucsankhoa.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndKetcucsankhoa.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CIVFKetQuaDialog::OnKetcucsankhoaAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CIVFKetQuaDialog::OnKetquaclsSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CIVFParaclinicResultDialog dlg(this, pMF->m_nDocumentNo);
	dlg.DoModal();
} 
void CIVFKetQuaDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if (!IsValidateData())
	{
		return;
	}
	CString szSQL;
	if (m_szOrderType == _T("IVF"))
		szSQL.Format(_T("UPDATE ivf_phieu_chuyen SET betahcg = '%s', thai_lam_sang = '%s', so_thai = %d, ket_qua = '%s'") \
					_T(" WHERE ivf_phieu_chuyen_id = %ld")
					, m_szBetaHCGKey, m_szThailamsangKey, m_nSoluongthai, m_szKetcucsankhoaKey, m_nOrderID);
	else if (m_szOrderType == _T("IUI"))
		szSQL.Format(_T(""));
	int nRet = pMF->ExecSQL(szSQL);
	if (nRet > 0)
	{
		CGuiDialog::OnOK();
	}
} 
void CIVFKetQuaDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CIVFKetQuaDialog::OnAddIVFKetQuaDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CIVFKetQuaDialog::OnEditIVFKetQuaDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CIVFKetQuaDialog::OnDeleteIVFKetQuaDialog(){
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
 		OnCancelIVFKetQuaDialog();
 	}
	return 0;
}
int CIVFKetQuaDialog::OnSaveIVFKetQuaDialog(){
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
 		//OnIVFKetQuaDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CIVFKetQuaDialog::OnCancelIVFKetQuaDialog(){
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
int CIVFKetQuaDialog::OnIVFKetQuaDialogListLoadData(){
	return 0;
}
