#include "IVFLabNgayTaoPhoiDialog.h"
#include "MainFrm.h"
#include "IVFLabPhieuTheoDoiPhoiDialog_v2.h"

/*static void _OnNgaytaoChangeFnc(CWnd *pWnd){
	((CIVFLabNgayTaoPhoiDialog *)pWnd)->OnNgaytaoChange();
} */
/*static void _OnNgaytaoSetfocusFnc(CWnd *pWnd){
	((CIVFLabNgayTaoPhoiDialog *)pWnd)->OnNgaytaoSetfocus();} */ 
/*static void _OnNgaytaoKillfocusFnc(CWnd *pWnd){
	((CIVFLabNgayTaoPhoiDialog *)pWnd)->OnNgaytaoKillfocus();
} */
static int _OnNgaytaoCheckValueFnc(CWnd *pWnd){
	return ((CIVFLabNgayTaoPhoiDialog *)pWnd)->OnNgaytaoCheckValue();
} 
static void _OnLoaitrungSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CIVFLabNgayTaoPhoiDialog* )pWnd)->OnLoaitrungSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnLoaitrungSelendokFnc(CWnd *pWnd){
	((CIVFLabNgayTaoPhoiDialog *)pWnd)->OnLoaitrungSelendok();
}
/*static void _OnLoaitrungSetfocusFnc(CWnd *pWnd){
	((CIVFLabNgayTaoPhoiDialog *)pWnd)->OnLoaitrungKillfocus();
}*/
/*static void _OnLoaitrungKillfocusFnc(CWnd *pWnd){
	((CIVFLabNgayTaoPhoiDialog *)pWnd)->OnLoaitrungKillfocus();
}*/
static long _OnLoaitrungLoadDataFnc(CWnd *pWnd){
	return ((CIVFLabNgayTaoPhoiDialog *)pWnd)->OnLoaitrungLoadData();
}
/*static void _OnLoaitrungAddNewFnc(CWnd *pWnd){
	((CIVFLabNgayTaoPhoiDialog *)pWnd)->OnLoaitrungAddNew();
}*/
/*static void _OnSoluongChangeFnc(CWnd *pWnd){
	((CIVFLabNgayTaoPhoiDialog *)pWnd)->OnSoluongChange();
} */
/*static void _OnSoluongSetfocusFnc(CWnd *pWnd){
	((CIVFLabNgayTaoPhoiDialog *)pWnd)->OnSoluongSetfocus();} */ 
/*static void _OnSoluongKillfocusFnc(CWnd *pWnd){
	((CIVFLabNgayTaoPhoiDialog *)pWnd)->OnSoluongKillfocus();
} */
static int _OnSoluongCheckValueFnc(CWnd *pWnd){
	return ((CIVFLabNgayTaoPhoiDialog *)pWnd)->OnSoluongCheckValue();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CIVFLabNgayTaoPhoiDialog *pVw = (CIVFLabNgayTaoPhoiDialog *)pWnd;
	pVw->OnAddSelect();
} 
static int _OnAddIVFLabNgayTaoPhoiDialogFnc(CWnd *pWnd){
	 return ((CIVFLabNgayTaoPhoiDialog*)pWnd)->OnAddIVFLabNgayTaoPhoiDialog();
} 
static int _OnEditIVFLabNgayTaoPhoiDialogFnc(CWnd *pWnd){
	 return ((CIVFLabNgayTaoPhoiDialog*)pWnd)->OnEditIVFLabNgayTaoPhoiDialog();
} 
static int _OnDeleteIVFLabNgayTaoPhoiDialogFnc(CWnd *pWnd){
	 return ((CIVFLabNgayTaoPhoiDialog*)pWnd)->OnDeleteIVFLabNgayTaoPhoiDialog();
} 
static int _OnSaveIVFLabNgayTaoPhoiDialogFnc(CWnd *pWnd){
	 return ((CIVFLabNgayTaoPhoiDialog*)pWnd)->OnSaveIVFLabNgayTaoPhoiDialog();
} 
static int _OnCancelIVFLabNgayTaoPhoiDialogFnc(CWnd *pWnd){
	 return ((CIVFLabNgayTaoPhoiDialog*)pWnd)->OnCancelIVFLabNgayTaoPhoiDialog();
} 
CIVFLabNgayTaoPhoiDialog::CIVFLabNgayTaoPhoiDialog(CWnd *pParent, long nDocNo, long nOrderId):
	CGuiDialog(pParent), m_nDocNo(nDocNo), m_nOrderId(nOrderId){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CIVFLabNgayTaoPhoiDialog::~CIVFLabNgayTaoPhoiDialog(){
}
void CIVFLabNgayTaoPhoiDialog::OnCreateComponents(){
	m_wndNgaytaoLabel.Create(this, _T("ngay_tao"), 5, 5, 75, 30);
	m_wndNgaytao.Create(this,80, 5, 180, 30); 
	m_wndLoaitrungLabel.Create(this, _T("loai_trung"), 185, 5, 255, 30);
	m_wndLoaitrung.Create(this,260, 5, 360, 30); 
	m_wndSoluongLabel.Create(this, _T("so_luong"), 365, 5, 435, 30);
	m_wndSoluong.Create(this,440, 5, 485, 30); 
	m_wndAdd.Create(this, _T("&Add"), 490, 5, 515, 30);

}
void CIVFLabNgayTaoPhoiDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndNgaytao.SetMax(CDate(pMF->GetSysDate()));
	m_wndNgaytao.SetCheckValue(true);
	m_wndLoaitrung.SetCheckValue(true);
	m_wndLoaitrung.LimitText(35);
	m_wndSoluong.SetLimitText(16);
	m_wndSoluong.SetCheckValue(true);
	m_wndSoluong.SetReadOnly();

	m_wndLoaitrung.InsertColumn(0, _T("ID"), CFMT_TEXT, 0);
	m_wndLoaitrung.InsertColumn(1, _T("Name"), CFMT_TEXT, 100);
	m_wndLoaitrung.InsertColumn(2, _T("Qty"), CFMT_NUMBER, 50);

}
void CIVFLabNgayTaoPhoiDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndNgaytao.SetEvent(WE_CHANGE, _OnNgaytaoChangeFnc);
	//m_wndNgaytao.SetEvent(WE_SETFOCUS, _OnNgaytaoSetfocusFnc);
	//m_wndNgaytao.SetEvent(WE_KILLFOCUS, _OnNgaytaoKillfocusFnc);
	m_wndNgaytao.SetEvent(WE_CHECKVALUE, _OnNgaytaoCheckValueFnc);
	m_wndLoaitrung.SetEvent(WE_SELENDOK, _OnLoaitrungSelendokFnc);
	//m_wndLoaitrung.SetEvent(WE_SETFOCUS, _OnLoaitrungSetfocusFnc);
	//m_wndLoaitrung.SetEvent(WE_KILLFOCUS, _OnLoaitrungKillfocusFnc);
	m_wndLoaitrung.SetEvent(WE_SELCHANGE, _OnLoaitrungSelectChangeFnc);
	m_wndLoaitrung.SetEvent(WE_LOADDATA, _OnLoaitrungLoadDataFnc);
	//m_wndLoaitrung.SetEvent(WE_ADDNEW, _OnLoaitrungAddNewFnc);
	//m_wndSoluong.SetEvent(WE_CHANGE, _OnSoluongChangeFnc);
	//m_wndSoluong.SetEvent(WE_SETFOCUS, _OnSoluongSetfocusFnc);
	//m_wndSoluong.SetEvent(WE_KILLFOCUS, _OnSoluongKillfocusFnc);
	m_wndSoluong.SetEvent(WE_CHECKVALUE, _OnSoluongCheckValueFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	SetMode(VM_ADD);

}
void CIVFLabNgayTaoPhoiDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndNgaytao.GetDlgCtrlID(), m_szNgaytao);
	DDX_TextEx(pDX, m_wndLoaitrung.GetDlgCtrlID(), m_szLoaitrungKey);
	DDX_Text(pDX, m_wndSoluong.GetDlgCtrlID(), m_nSoluong);

}
void CIVFLabNgayTaoPhoiDialog::UpdateJson(BOOL bSave){
	CMainFrame* pMF = (CMainFrame*) AfxGetMainWnd();
	if(bSave)
	{		
		m_jData[_T("Ngaytao")] =  m_szNgaytao;
		m_jData[_T("Loaitrung")] =  m_szLoaitrungKey;
		m_jData[_T("Soluong")] =  m_nSoluong;

		m_jData[_T("order_id")] = m_nOrderId;
		m_jData[_T("doc_no")] = m_nDocNo;
		m_jData[_T("nguoi_tao")] = pMF->GetCurrentUser();
	}
	else
	{
			
	m_jData[_T("Ngaytao")].GetValue(m_szNgaytao);
	m_jData[_T("Loaitrung")].GetValue(m_szLoaitrungKey);
	m_jData[_T("Soluong")].GetValue(m_nSoluong);
	}

}
void CIVFLabNgayTaoPhoiDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CIVFLabNgayTaoPhoiDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateJson(TRUE);
}
void CIVFLabNgayTaoPhoiDialog::SetDefaultValues(){
	CMainFrame* pMF = (CMainFrame*) AfxGetMainWnd();
	m_szNgaytao.Empty();
	m_szLoaitrungKey.Empty();
	m_nSoluong=0;
	m_szNgaytao = pMF->GetSysDate();
	
}
int CIVFLabNgayTaoPhoiDialog::SetMode(int nMode){
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
/*void CIVFLabNgayTaoPhoiDialog::OnNgaytaoChange(){
	
} */
/*void CIVFLabNgayTaoPhoiDialog::OnNgaytaoSetfocus(){
	
} */
/*void CIVFLabNgayTaoPhoiDialog::OnNgaytaoKillfocus(){
	
} */
int CIVFLabNgayTaoPhoiDialog::OnNgaytaoCheckValue(){
	return 0;
} 
void CIVFLabNgayTaoPhoiDialog::OnLoaitrungSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFLabNgayTaoPhoiDialog::OnLoaitrungSelendok(){
	UpdateData();
	m_nSoluong = str2int(m_wndLoaitrung.GetCurrent(2));
	UpdateData(FALSE);
}
/*void CIVFLabNgayTaoPhoiDialog::OnLoaitrungSetfocus(){
	
}*/
/*void CIVFLabNgayTaoPhoiDialog::OnLoaitrungKillfocus(){
	
}*/
long CIVFLabNgayTaoPhoiDialog::OnLoaitrungLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndLoaitrung.IsSearchKey() && !m_szLoaitrungKey.IsEmpty()){
		szWhere.Format(_T(" and ivf_phieu_theo_doi_line_id = '%s'"), m_szLoaitrungKey);
	}
	m_wndLoaitrung.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T(" SELECT ivf_phieu_theo_doi_line_id AS id,") \
	_T("        ten_chat_luong,") \
	_T("        so_luong") \
	_T(" FROM   ivf_phieu_theo_doi_line l") \
	_T(" LEFT JOIN ivf_thietlap_chatluong ON (ivf_thietlap_chatluong_id = chat_luong)") \
	_T(" WHERE  nhom = 'Eg' AND id_phieu_theo_doi = %ld AND l.hoat_dong = 'Y' AND trang_thai_nuoi = 'O' %s") \
	_T(" ORDER BY muc_chat_luong"), m_nOrderId, szWhere);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndLoaitrung.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("ten_chat_luong")), 
			rs.GetValue(_T("so_luong")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CIVFLabNgayTaoPhoiDialog::OnLoaitrungAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CIVFLabNgayTaoPhoiDialog::OnSoluongChange(){
	
} */
/*void CIVFLabNgayTaoPhoiDialog::OnSoluongSetfocus(){
	
} */
/*void CIVFLabNgayTaoPhoiDialog::OnSoluongKillfocus(){
	
} */
int CIVFLabNgayTaoPhoiDialog::OnSoluongCheckValue(){
	return 0;
} 
void CIVFLabNgayTaoPhoiDialog::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveIVFLabNgayTaoPhoiDialog();
} 
int CIVFLabNgayTaoPhoiDialog::OnAddIVFLabNgayTaoPhoiDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CIVFLabNgayTaoPhoiDialog::OnEditIVFLabNgayTaoPhoiDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CIVFLabNgayTaoPhoiDialog::OnDeleteIVFLabNgayTaoPhoiDialog(){
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
 		OnCancelIVFLabNgayTaoPhoiDialog();
 	}
	return 0;
}
int CIVFLabNgayTaoPhoiDialog::OnSaveIVFLabNgayTaoPhoiDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL, jData, tmpStr;
	m_jData.ToString(jData);
	szSQL.Format(_T("IVF_NGAY_TAO_PHOI_CREATE('%s')"), jData);
 	long ret = str2long(pMF->ExecDML(szSQL));
 	if(ret > 0)
 	{
		((CIVFLabPhieuTheoDoiPhoiDialog_v2*) m_pParentWnd)->OnListNgayLoadData();
 		SetMode(VM_ADD);
 	}
 	else
 	{
 	}
 	return ret;
}
int CIVFLabNgayTaoPhoiDialog::OnCancelIVFLabNgayTaoPhoiDialog(){
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
int CIVFLabNgayTaoPhoiDialog::OnIVFLabNgayTaoPhoiDialogListLoadData(){
	return 0;
}
