#include "HMSCancerTreatDiag.h"
#include "MainFrm.h"
static long _OnTreatDiagListLoadDataFnc(CWnd *pWnd){
	return ((CHMSCancerTreatDiag*)pWnd)->OnTreatDiagListLoadData();
} 
static void _OnTreatDiagListDblClickFnc(CWnd *pWnd){
	((CHMSCancerTreatDiag*)pWnd)->OnTreatDiagListDblClick();
} 
static void _OnTreatDiagListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSCancerTreatDiag*)pWnd)->OnTreatDiagListSelectChange(nOldItem, nNewItem);
} 
static int _OnTreatDiagListAddItemFnc(CWnd *pWnd){
	return ((CHMSCancerTreatDiag*)pWnd)->OnTreatDiagListAddItem();
}
static int _OnTreatDiagListEditItemFnc(CWnd *pWnd){
	return ((CHMSCancerTreatDiag*)pWnd)->OnTreatDiagListEditItem();
}
static int _OnTreatDiagListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSCancerTreatDiag*)pWnd)->OnTreatDiagListDeleteItem();
} 

static int _OnTreatDiagLnListAddItemFnc(CWnd *pWnd){
	((CHMSCancerTreatDiag*)pWnd)->OnAddSelect();
	return 0;
}
static int _OnTreatDiagLnListEditItemFnc(CWnd *pWnd){
	((CHMSCancerTreatDiag*)pWnd)->OnEditSelect();
	return 0;
}

static long _OnTreatDiagLnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSCancerTreatDiag*)pWnd)->OnTreatDiagLnListLoadData();
} 
static void _OnTreatDiagLnListDblClickFnc(CWnd *pWnd){
	((CHMSCancerTreatDiag*)pWnd)->OnTreatDiagLnListDblClick();
} 
static void _OnTreatDiagLnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSCancerTreatDiag*)pWnd)->OnTreatDiagLnListSelectChange(nOldItem, nNewItem);
} 
static int _OnTreatDiagLnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSCancerTreatDiag*)pWnd)->OnTreatDiagLnListDeleteItem();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSCancerTreatDiag *pVw = (CHMSCancerTreatDiag *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CHMSCancerTreatDiag *pVw = (CHMSCancerTreatDiag *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSCancerTreatDiag *pVw = (CHMSCancerTreatDiag *)pWnd;
	pVw->OnDeleteSelect();
} 
static int _OnAddHMSCancerTreatDiagFnc(CWnd *pWnd){
	 return ((CHMSCancerTreatDiag*)pWnd)->OnAddHMSCancerTreatDiag();
} 
static int _OnEditHMSCancerTreatDiagFnc(CWnd *pWnd){
	 return ((CHMSCancerTreatDiag*)pWnd)->OnEditHMSCancerTreatDiag();
} 
static int _OnDeleteHMSCancerTreatDiagFnc(CWnd *pWnd){
	 return ((CHMSCancerTreatDiag*)pWnd)->OnDeleteHMSCancerTreatDiag();
} 
static int _OnSaveHMSCancerTreatDiagFnc(CWnd *pWnd){
	 return ((CHMSCancerTreatDiag*)pWnd)->OnSaveHMSCancerTreatDiag();
} 
static int _OnCancelHMSCancerTreatDiagFnc(CWnd *pWnd){
	 return ((CHMSCancerTreatDiag*)pWnd)->OnCancelHMSCancerTreatDiag();
} 
CHMSCancerTreatDiag::CHMSCancerTreatDiag(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CHMSCancerTreatDiag::~CHMSCancerTreatDiag(){
}
void CHMSCancerTreatDiag::OnCreateComponents(){
	m_wndInformation.Create(this, _T("Information"), 5, 5, 1029, 605);
	m_wndTreatDiagList.Create(this,10, 30, 310, 600); 
	m_wndTreatDiagLnList.Create(this,315, 30, 1015, 600); 
	m_wndAdd.Create(this, _T("&Add"), 765, 610, 845, 635);
	m_wndEdit.Create(this, _T("&Edit"), 850, 610, 930, 635);
	m_wndDelete.Create(this, _T("&Delete"), 935, 610, 1015, 635);

}
void CHMSCancerTreatDiag::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();


	m_wndTreatDiagList.InsertColumn(0, _T("STT"), CFMT_NUMBER, 50);
	m_wndTreatDiagList.InsertColumn(1, _T("ID"), CFMT_TEXT, 80);
	m_wndTreatDiagList.InsertColumn(2, _T("Desc"), CFMT_TEXT, 200);


	m_wndTreatDiagLnList.InsertColumn(0, _T("STT"), CFMT_NUMBER, 50);
	m_wndTreatDiagLnList.InsertColumn(1, _T("Tên phác đồ"), CFMT_TEXT, 220);
	m_wndTreatDiagLnList.InsertColumn(2, _T("Đơn vị"), CFMT_TEXT, 80);
	m_wndTreatDiagLnList.InsertColumn(3, _T("Liều dùng M2"), CFMT_MONEY, 80);
	m_wndTreatDiagLnList.InsertColumn(4, _T("Liều dùng BN"), CFMT_NUMBER, 0);
	m_wndTreatDiagLnList.InsertColumn(5, _T("Số lượng lĩnh"), CFMT_NUMBER, 0);
	m_wndTreatDiagLnList.InsertColumn(6, _T("Thể tích"), CFMT_NUMBER, 80);
	m_wndTreatDiagLnList.InsertColumn(7, _T("Loại"), CFMT_TEXT, 120);
	m_wndTreatDiagLnList.InsertColumn(8, _T("Tên thương mại"), CFMT_TEXT, 220);
	m_wndTreatDiagLnList.InsertColumn(9, _T("SL Lĩnh"), CFMT_NUMBER, 0);
	m_wndTreatDiagLnList.InsertColumn(10, _T("ID"), CFMT_TEXT, 0);
	m_wndTreatDiagLnList.InsertColumn(11, _T("Line"), CFMT_NUMBER, 0);

	m_wndTreatDiagLnList.GetHeaderControl()->SetItemHeight(2);	
	m_wndTreatDiagLnList.GetHeaderControl()->MergeCell(_T("Dung môi"), 0, 6, 1, 7, true);

}
void CHMSCancerTreatDiag::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndTreatDiagList.SetEvent(WE_SELCHANGE, _OnTreatDiagListSelectChangeFnc);
	m_wndTreatDiagList.SetEvent(WE_LOADDATA, _OnTreatDiagListLoadDataFnc);
	m_wndTreatDiagList.SetEvent(WE_DBLCLICK, _OnTreatDiagListDblClickFnc);
	m_wndTreatDiagList.AddEvent(1, _T("Add"), _OnTreatDiagListAddItemFnc, 0, 0);
	m_wndTreatDiagList.AddEvent(2, _T("Edit"), _OnTreatDiagListEditItemFnc, 0, 0);
	m_wndTreatDiagList.AddEvent(3, _T("Delete"), _OnTreatDiagListDeleteItemFnc);
	m_wndTreatDiagLnList.SetEvent(WE_SELCHANGE, _OnTreatDiagLnListSelectChangeFnc);
	m_wndTreatDiagLnList.SetEvent(WE_LOADDATA, _OnTreatDiagLnListLoadDataFnc);
	m_wndTreatDiagLnList.SetEvent(WE_DBLCLICK, _OnTreatDiagLnListDblClickFnc);

	m_wndTreatDiagLnList.AddEvent(1, _T("Add"), _OnTreatDiagLnListAddItemFnc, 0, 0);
	m_wndTreatDiagLnList.AddEvent(2, _T("Edit"), _OnTreatDiagLnListEditItemFnc, 0, 0);
	m_wndTreatDiagLnList.AddEvent(3, _T("Delete"), _OnTreatDiagLnListDeleteItemFnc);

	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	SetMode(VM_NONE);
	OnTreatDiagListLoadData();

}
void CHMSCancerTreatDiag::OnDoDataExchange(CDataExchange* pDX){

}
void CHMSCancerTreatDiag::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	}
	else
	{
			
	}

}
void CHMSCancerTreatDiag::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSCancerTreatDiag::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSCancerTreatDiag::SetDefaultValues(){


}
int CHMSCancerTreatDiag::SetMode(int nMode){
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
 			EnableButtons(FALSE, 0, 1, 2, -1);
 			SetDefaultValues();
 			break;
 		};
 		UpdateData(FALSE);
 		return nOldMode;
}
void CHMSCancerTreatDiag::OnTreatDiagListDblClick(){
} 
void CHMSCancerTreatDiag::OnTreatDiagListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(nNewItem < 0)
		return;

	m_szOrderID = m_wndTreatDiagList.GetItemText(nNewItem, 1);
	OnTreatDiagLnListLoadData();
} 
#include "HMSCancerTreatDiagCategory.h"
int CHMSCancerTreatDiag::OnTreatDiagListAddItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CHMSCancerTreatDiagCategory dlg(this);
	if(dlg.DoModal() == IDOK)
	{
		OnTreatDiagListLoadData();
		OnTreatDiagLnListLoadData();
	}
	return 0;
} 
int CHMSCancerTreatDiag::OnTreatDiagListEditItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	int nSel = m_wndTreatDiagList.GetCurSel();
	if(nSel < 0)
		return 0;
	
	CHMSCancerTreatDiagCategory dlg(this);
	dlg.m_szID = m_szOrderID;
	if(dlg.DoModal() == IDOK)
	{
		OnTreatDiagListLoadData();
		OnTreatDiagLnListLoadData();
	}
	return 0;
} 
int CHMSCancerTreatDiag::OnTreatDiagListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	int nTemp = 0;
	int nSel = m_wndTreatDiagList.GetCurSel();
	if(nSel < 0)
		return 0;
	
	if(m_szOrderID.IsEmpty())
		return 0;
	
	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
		return -1;

	szSQL.Format(_T("SELECT COUNT(*) AS pcount FROM hms_cancer_treatdiagln WHERE hctl_cancer_treatdiag_id = '%s'"), m_szOrderID);
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("pcount"), nTemp);

	if(nTemp > 0)
		{
			_msg(_T("Danh mục đã có thuốc không thể xóa"));
			return 0;
		}
	else
		{
			szSQL.Format(_T("DELETE FROM hms_cancer_treatdiag WHERE hct_cancer_treatdiag_id = '%s'"), m_szOrderID);
			_fmsg(_T("%s"), szSQL);
			int ret = pMF->ExecSQL(szSQL);
			if(ret >= 0){
				SetMode(VM_NONE);
				OnTreatDiagListLoadData();
				m_wndTreatDiagLnList.DeleteAllItems();

			}
			return 0;
		}

} 
long CHMSCancerTreatDiag::OnTreatDiagListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);
	CRecord rs(&pMF->m_db);
	CString szSQL;
	int nIdx = 1;
	m_wndTreatDiagList.BeginLoad(); 
	szSQL.Format(_T("SELECT hct_cancer_treatdiag_id AS id, hct_desc AS name FROM hms_cancer_treatdiag ORDER BY hct_desc"));
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndTreatDiagList.AddItems(
			int2str(nIdx++), 
			rs.GetValue(_T("ID")),
			rs.GetValue(_T("Name")),NULL);
		rs.MoveNext();
	}
	m_wndTreatDiagList.EndLoad(); 
	return nCount;
}
#include "HMSCancerTreatDiagItem.h"
void CHMSCancerTreatDiag::OnTreatDiagLnListDblClick(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	int nSel = m_wndTreatDiagList.GetCurSel();
	if(nSel < 0)
		return;
	
	
	CHMSCancerTreatDiagItem dlg(this);
	dlg.m_szOrderID = m_szOrderID;
	dlg.m_szLine = m_szLine;
	dlg.m_nSoLuong = m_nSoLuong;
	dlg.DoModal();
} 
void CHMSCancerTreatDiag::OnTreatDiagLnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(nNewItem < 0)
		return;
	
	EnableButtons(TRUE, 0, 1, 2, -1);
	m_szLine = m_wndTreatDiagLnList.GetItemText(nNewItem, 11);
	m_nSoLuong = str2long(m_wndTreatDiagLnList.GetItemText(nNewItem, 3));
} 
int CHMSCancerTreatDiag::OnTreatDiagLnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnDeleteSelect();
	 return 0;
} 
long CHMSCancerTreatDiag::OnTreatDiagLnListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);
	CRecord rs(&pMF->m_db);
	CString szSQL;
	int nIdx = 1;
	m_wndTreatDiagLnList.BeginLoad(); 
	szSQL.Format(_T("   SELECT ") \
		_T("   HCTL_CANCER_TREATDIAG_ID AS id,") \
		_T("   HCTL_CANCER_TREATDIAGLN_ID AS line,") \
		_T("   hctl_tenthuoc AS tenthuoc,") \
		_T("   (SELECT adu_name FROM ad_uom WHERE adu_uom_id = hctl_donvi) AS donvi,") \
		_T("   (SELECT mp_name FROM m_product WHERE mp_product_id = hcti_product_id) AS tenthuoc1, ") \
		_T("   hcti_qty AS soluong,") \
		_T("   hctl_lieudung_m2 AS lieudungm2,") \
		_T("   hctl_lieudung_bn AS lieudungbn,") \
		_T("   hctl_soluong_linh AS soluonglinh,") \
		_T("   hctl_dungmoi AS dungmoi,") \
		_T("   hctl_madungmoi AS madungmoi,") \
		_T("   hctl_thetich AS thetich,") \
		_T("   hctl_thoigian_sd AS thoigiansd") \
		_T("   FROM hms_cancer_treatdiagln") \
		_T("   LEFT JOIN hms_cancer_treatdiagitem ON(hcti_cancer_treatdiag_id=HCTL_CANCER_TREATDIAG_ID AND hcti_cancer_treatdiagln_id=HCTL_CANCER_TREATDIAGLN_ID) ") \
		_T("   WHERE HCTL_CANCER_TREATDIAG_ID = '%s'") \
		_T("   ORDER BY tenthuoc"), m_szOrderID);

	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndTreatDiagLnList.AddItems(
			int2str(nIdx++), 
			rs.GetValue(_T("TenThuoc")), 
			rs.GetValue(_T("DonVi")), 
			rs.GetValue(_T("LieuDungM2")), 
			rs.GetValue(_T("LieuDungBN")), 
			rs.GetValue(_T("SoLuongLinh")), 
			rs.GetValue(_T("DungMoi")), 
			pMF->GetSelectionString(_T("cancer_dungmoi"),rs.GetValue(_T("MaDungMoi"))), 
			rs.GetValue(_T("tenthuoc1")), 
			rs.GetValue(_T("soluonglinh")),
			rs.GetValue(_T("ID")),
			rs.GetValue(_T("Line")),NULL);
		rs.MoveNext();
	}
	m_wndTreatDiagLnList.EndLoad(); 
	EnableButtons(TRUE, 0, -1);
	return nCount;
}
#include "HMSCancerTreatDiagLn.h"
void CHMSCancerTreatDiag::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	int nSel = m_wndTreatDiagList.GetCurSel();
	if(nSel < 0)
		return;

	if(m_szOrderID.IsEmpty())
		return;

	CHMSCancerTreatDiagLn dlg(this);
	dlg.m_szOrderID = m_szOrderID;
	if(dlg.DoModal() == IDOK)
	{
		OnTreatDiagLnListLoadData();
		
	}
} 
void CHMSCancerTreatDiag::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	int nSel = m_wndTreatDiagLnList.GetCurSel();
	if(nSel < 0)
		return;

	if(m_szOrderID.IsEmpty() || m_szLine.IsEmpty())
		return;
	
	CHMSCancerTreatDiagLn dlg(this);
	dlg.m_szOrderID = m_szOrderID;
	dlg.m_szLine = m_szLine;
	if(dlg.DoModal() == IDOK)
	{
		OnTreatDiagLnListLoadData();
	}
} 
void CHMSCancerTreatDiag::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnDeleteHMSCancerTreatDiag();
} 
int CHMSCancerTreatDiag::OnAddHMSCancerTreatDiag(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSCancerTreatDiag::OnEditHMSCancerTreatDiag(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSCancerTreatDiag::OnDeleteHMSCancerTreatDiag(){
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
 	CString szSQL;
	int nTemp = 0;

	int nSel = m_wndTreatDiagLnList.GetCurSel();
	if(nSel < 0)
		return 0;

	if(m_szOrderID.IsEmpty() || m_szLine.IsEmpty())
		return 0;
	
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;

	szSQL.Format(_T(" SELECT COUNT(*) AS pcount ") \
		_T(" FROM hms_cancer_treatdiagitem") \
		_T(" WHERE hcti_cancer_treatdiag_id = '%s' AND hcti_cancer_treatdiagln_id = '%s'"), m_szOrderID, m_szLine);
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("pcount"), nTemp);

	if(nTemp > 0)
		{
			_msg(_T("Thuốc đã có mục con không thể xóa"));
			return 0;
		}
	else
		{
			szSQL.Format(_T("DELETE FROM hms_cancer_treatdiagln WHERE hctl_cancer_treatdiag_id = '%s' AND hctl_cancer_treatdiagln_id = '%s'"), m_szOrderID, m_szLine);
			int ret = pMF->ExecSQL(szSQL);
			if(ret >= 0){
				SetMode(VM_NONE);
				OnTreatDiagLnListLoadData();
			}
			return 0;
		}
}
int CHMSCancerTreatDiag::OnSaveHMSCancerTreatDiag(){
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
 		//OnHMSCancerTreatDiagListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSCancerTreatDiag::OnCancelHMSCancerTreatDiag(){
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
int CHMSCancerTreatDiag::OnHMSCancerTreatDiagListLoadData(){
	return 0;
}
