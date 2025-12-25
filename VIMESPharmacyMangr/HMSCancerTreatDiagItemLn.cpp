#include "HMSCancerTreatDiagItemLn.h"
#include "MainFrm.h"
#include "HMSCancerTreatDiagItem.h"
static void _OnObjectSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSCancerTreatDiagItemLn* )pWnd)->OnObjectSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnObjectSelendokFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagItemLn *)pWnd)->OnObjectSelendok();
}
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagItemLn *)pWnd)->OnObjectKillfocus();
}*/
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagItemLn *)pWnd)->OnObjectKillfocus();
}*/
static long _OnObjectLoadDataFnc(CWnd *pWnd){
	return ((CHMSCancerTreatDiagItemLn *)pWnd)->OnObjectLoadData();
}
/*static void _OnObjectAddNewFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagItemLn *)pWnd)->OnObjectAddNew();
}*/
static void _OnStorageSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSCancerTreatDiagItemLn* )pWnd)->OnStorageSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStorageSelendokFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagItemLn *)pWnd)->OnStorageSelendok();
}
/*static void _OnStorageSetfocusFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagItemLn *)pWnd)->OnStorageKillfocus();
}*/
/*static void _OnStorageKillfocusFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagItemLn *)pWnd)->OnStorageKillfocus();
}*/
static long _OnStorageLoadDataFnc(CWnd *pWnd){
	return ((CHMSCancerTreatDiagItemLn *)pWnd)->OnStorageLoadData();
}
/*static void _OnStorageAddNewFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagItemLn *)pWnd)->OnStorageAddNew();
}*/
static void _OnTenThuocSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSCancerTreatDiagItemLn* )pWnd)->OnTenThuocSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTenThuocSelendokFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagItemLn *)pWnd)->OnTenThuocSelendok();
}
/*static void _OnTenThuocSetfocusFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagItemLn *)pWnd)->OnTenThuocKillfocus();
}*/
/*static void _OnTenThuocKillfocusFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagItemLn *)pWnd)->OnTenThuocKillfocus();
}*/
static long _OnTenThuocLoadDataFnc(CWnd *pWnd){
	return ((CHMSCancerTreatDiagItemLn *)pWnd)->OnTenThuocLoadData();
}
/*static void _OnTenThuocAddNewFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagItemLn *)pWnd)->OnTenThuocAddNew();
}*/
/*static void _OnSoLuongChangeFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagItemLn *)pWnd)->OnSoLuongChange();
} */
/*static void _OnSoLuongSetfocusFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagItemLn *)pWnd)->OnSoLuongSetfocus();} */ 
/*static void _OnSoLuongKillfocusFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagItemLn *)pWnd)->OnSoLuongKillfocus();
} */
static int _OnSoLuongCheckValueFnc(CWnd *pWnd){
	return ((CHMSCancerTreatDiagItemLn *)pWnd)->OnSoLuongCheckValue();
} 
/*static void _OnContentChangeFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagItemLn *)pWnd)->OnContentChange();
} */
/*static void _OnContentSetfocusFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagItemLn *)pWnd)->OnContentSetfocus();} */ 
/*static void _OnContentKillfocusFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagItemLn *)pWnd)->OnContentKillfocus();
} */
static int _OnContentCheckValueFnc(CWnd *pWnd){
	return ((CHMSCancerTreatDiagItemLn *)pWnd)->OnContentCheckValue();
} 
/*static void _OnUomChangeFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagItemLn *)pWnd)->OnUomChange();
} */
/*static void _OnUomSetfocusFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagItemLn *)pWnd)->OnUomSetfocus();} */ 
/*static void _OnUomKillfocusFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagItemLn *)pWnd)->OnUomKillfocus();
} */
static int _OnUomCheckValueFnc(CWnd *pWnd){
	return ((CHMSCancerTreatDiagItemLn *)pWnd)->OnUomCheckValue();
} 
/*static void _OnTenphacdoChangeFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagItemLn *)pWnd)->OnTenphacdoChange();
} */
/*static void _OnTenphacdoSetfocusFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagItemLn *)pWnd)->OnTenphacdoSetfocus();} */ 
/*static void _OnTenphacdoKillfocusFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagItemLn *)pWnd)->OnTenphacdoKillfocus();
} */
static int _OnTenphacdoCheckValueFnc(CWnd *pWnd){
	return ((CHMSCancerTreatDiagItemLn *)pWnd)->OnTenphacdoCheckValue();
} 
/*static void _OnDonviChangeFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagItemLn *)pWnd)->OnDonviChange();
} */
/*static void _OnDonviSetfocusFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagItemLn *)pWnd)->OnDonviSetfocus();} */ 
/*static void _OnDonviKillfocusFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagItemLn *)pWnd)->OnDonviKillfocus();
} */
static int _OnDonviCheckValueFnc(CWnd *pWnd){
	return ((CHMSCancerTreatDiagItemLn *)pWnd)->OnDonviCheckValue();
} 

static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSCancerTreatDiagItemLn *pVw = (CHMSCancerTreatDiagItemLn *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSCancerTreatDiagItemLn *pVw = (CHMSCancerTreatDiagItemLn *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddHMSCancerTreatDiagItemLnFnc(CWnd *pWnd){
	 return ((CHMSCancerTreatDiagItemLn*)pWnd)->OnAddHMSCancerTreatDiagItemLn();
} 
static int _OnEditHMSCancerTreatDiagItemLnFnc(CWnd *pWnd){
	 return ((CHMSCancerTreatDiagItemLn*)pWnd)->OnEditHMSCancerTreatDiagItemLn();
} 
static int _OnDeleteHMSCancerTreatDiagItemLnFnc(CWnd *pWnd){
	 return ((CHMSCancerTreatDiagItemLn*)pWnd)->OnDeleteHMSCancerTreatDiagItemLn();
} 
static int _OnSaveHMSCancerTreatDiagItemLnFnc(CWnd *pWnd){
	 return ((CHMSCancerTreatDiagItemLn*)pWnd)->OnSaveHMSCancerTreatDiagItemLn();
} 
static int _OnCancelHMSCancerTreatDiagItemLnFnc(CWnd *pWnd){
	 return ((CHMSCancerTreatDiagItemLn*)pWnd)->OnCancelHMSCancerTreatDiagItemLn();
} 
CHMSCancerTreatDiagItemLn::CHMSCancerTreatDiagItemLn(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
	m_szObjectKey.Empty();
	m_szStorageKey.Empty();
	m_pParent = pParent;
}
CHMSCancerTreatDiagItemLn::~CHMSCancerTreatDiagItemLn(){
}
void CHMSCancerTreatDiagItemLn::OnCreateComponents(){
	m_wndTenphacdoLabel.Create(this, _T("Tên theo phác đồ"), 5, 5, 155, 30);
	m_wndTenphacdo.Create(this,160, 5, 495, 30); 
	m_wndDonviLabel.Create(this, _T("Đơn vị"), 5, 35, 155, 60);
	m_wndDonvi.Create(this,160, 35, 280, 60); 
	m_wndSoluongPDLabel.Create(this, _T("Liều dùng M2"), 285, 35, 385, 60);
	m_wndSoluongPD.Create(this,390, 35, 495, 60); 
	m_wndInformation.Create(this, _T("Thông tin thiết lập"), 5, 65, 505, 240);
	m_wndObjectLabel.Create(this, _T("Object"), 10, 90, 160, 115);
	m_wndObject.Create(this,165, 90, 500, 115); 
	m_wndStorageLabel.Create(this, _T("Storage"), 10, 120, 160, 145);
	m_wndStorage.Create(this,165, 120, 500, 145); 
	m_wndTenThuocLabel.Create(this, _T("Tên thuốc"), 10, 150, 160, 175);
	m_wndTenThuoc.Create(this,165, 150, 500, 175); 
	m_wndContentLabel.Create(this, _T("Hàm lượng"), 10, 180, 160, 205);
	m_wndContent.Create(this,165, 180, 285, 205); 
	m_wndUomLabel.Create(this, _T("Uom"), 290, 180, 390, 205);
	m_wndUom.Create(this,395, 180, 500, 205);
	m_wndSoLuongLabel.Create(this, _T("Số lượng"), 10, 210, 160, 235);
	m_wndSoLuong.Create(this,165, 210, 285, 235); 
	m_wndSave.Create(this, _T("&Save"), 295, 246, 395, 271);
	m_wndCancel.Create(this, _T("&Cancel"), 400, 246, 500, 271);	
}
void CHMSCancerTreatDiagItemLn::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndObject.SetCheckValue(true);
	//m_wndObject.LimitText(35);
	m_wndStorage.SetCheckValue(true);
	//m_wndStorage.LimitText(35);
	m_wndTenThuoc.SetCheckValue(true);
	//m_wndTenThuoc.LimitText(35);
	//m_wndSoLuong.SetLimitText(16);
	m_wndSoLuong.SetCheckValue(true);

	m_wndTenphacdo.SetReadOnly(true);
	m_wndDonvi.SetReadOnly(true);
	m_wndSoluongPD.SetReadOnly(true);

	m_wndContent.SetReadOnly(true);
	m_wndUom.SetReadOnly(true);

	m_wndObject.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndObject.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);


	m_wndStorage.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndStorage.InsertColumn(1, _T("Name"), CFMT_TEXT, 300);


	m_wndTenThuoc.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndTenThuoc.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);
	m_wndTenThuoc.InsertColumn(2, _T("Hàm lượng"), CFMT_TEXT, 90);
	m_wndTenThuoc.InsertColumn(3, _T("Đơn vị"), CFMT_TEXT, 60);
	m_wndTenThuoc.InsertColumn(4, _T("Hãng SX"), CFMT_TEXT, 100);

	hms_cancer_treatdiagitem.SetTableName(_T("hms_cancer_treatdiagitem"));
	hms_cancer_treatdiagitem.AddField(_T("hcti_cancer_treatdiag_id"), dfText);
	hms_cancer_treatdiagitem.AddField(_T("hcti_cancer_treatdiagln_id"), dfLong);
	hms_cancer_treatdiagitem.AddField(_T("hcti_product_id"), dfLong);
	hms_cancer_treatdiagitem.AddField(_T("hcti_qty"), dfLong);
	hms_cancer_treatdiagitem.AddField(_T("hcti_object_type"), dfText);
	hms_cancer_treatdiagitem.AddField(_T("hcti_storage_id"), dfLong);


}
void CHMSCancerTreatDiagItemLn::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndObject.SetEvent(WE_SELENDOK, _OnObjectSelendokFnc);
	//m_wndObject.SetEvent(WE_SETFOCUS, _OnObjectSetfocusFnc);
	//m_wndObject.SetEvent(WE_KILLFOCUS, _OnObjectKillfocusFnc);
	m_wndObject.SetEvent(WE_SELCHANGE, _OnObjectSelectChangeFnc);
	m_wndObject.SetEvent(WE_LOADDATA, _OnObjectLoadDataFnc);
	//m_wndObject.SetEvent(WE_ADDNEW, _OnObjectAddNewFnc);
	m_wndStorage.SetEvent(WE_SELENDOK, _OnStorageSelendokFnc);
	//m_wndStorage.SetEvent(WE_SETFOCUS, _OnStorageSetfocusFnc);
	//m_wndStorage.SetEvent(WE_KILLFOCUS, _OnStorageKillfocusFnc);
	m_wndStorage.SetEvent(WE_SELCHANGE, _OnStorageSelectChangeFnc);
	m_wndStorage.SetEvent(WE_LOADDATA, _OnStorageLoadDataFnc);
	//m_wndStorage.SetEvent(WE_ADDNEW, _OnStorageAddNewFnc);
	m_wndTenThuoc.SetEvent(WE_SELENDOK, _OnTenThuocSelendokFnc);
	//m_wndTenThuoc.SetEvent(WE_SETFOCUS, _OnTenThuocSetfocusFnc);
	//m_wndTenThuoc.SetEvent(WE_KILLFOCUS, _OnTenThuocKillfocusFnc);
	m_wndTenThuoc.SetEvent(WE_SELCHANGE, _OnTenThuocSelectChangeFnc);
	m_wndTenThuoc.SetEvent(WE_LOADDATA, _OnTenThuocLoadDataFnc);
	//m_wndTenThuoc.SetEvent(WE_ADDNEW, _OnTenThuocAddNewFnc);
	//m_wndSoLuong.SetEvent(WE_CHANGE, _OnSoLuongChangeFnc);
	//m_wndSoLuong.SetEvent(WE_SETFOCUS, _OnSoLuongSetfocusFnc);
	//m_wndSoLuong.SetEvent(WE_KILLFOCUS, _OnSoLuongKillfocusFnc);
	m_wndSoLuong.SetEvent(WE_CHECKVALUE, _OnSoLuongCheckValueFnc);

	//m_wndContent.SetEvent(WE_CHANGE, _OnContentChangeFnc);
	//m_wndContent.SetEvent(WE_SETFOCUS, _OnContentSetfocusFnc);
	//m_wndContent.SetEvent(WE_KILLFOCUS, _OnContentKillfocusFnc);
	m_wndContent.SetEvent(WE_CHECKVALUE, _OnContentCheckValueFnc);
	//m_wndUom.SetEvent(WE_CHANGE, _OnUomChangeFnc);
	//m_wndUom.SetEvent(WE_SETFOCUS, _OnUomSetfocusFnc);
	//m_wndUom.SetEvent(WE_KILLFOCUS, _OnUomKillfocusFnc);
	m_wndUom.SetEvent(WE_CHECKVALUE, _OnUomCheckValueFnc);
	//m_wndTenphacdo.SetEvent(WE_CHANGE, _OnTenphacdoChangeFnc);
	//m_wndTenphacdo.SetEvent(WE_SETFOCUS, _OnTenphacdoSetfocusFnc);
	//m_wndTenphacdo.SetEvent(WE_KILLFOCUS, _OnTenphacdoKillfocusFnc);
	m_wndTenphacdo.SetEvent(WE_CHECKVALUE, _OnTenphacdoCheckValueFnc);
	//m_wndDonvi.SetEvent(WE_CHANGE, _OnDonviChangeFnc);
	//m_wndDonvi.SetEvent(WE_SETFOCUS, _OnDonviSetfocusFnc);
	//m_wndDonvi.SetEvent(WE_KILLFOCUS, _OnDonviKillfocusFnc);
	m_wndDonvi.SetEvent(WE_CHECKVALUE, _OnDonviCheckValueFnc);

	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	GetDataToScreen();

}
void CHMSCancerTreatDiagItemLn::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndObject.GetDlgCtrlID(), m_szObjectKey);
	DDX_TextEx(pDX, m_wndStorage.GetDlgCtrlID(), m_szStorageKey);
	DDX_TextEx(pDX, m_wndTenThuoc.GetDlgCtrlID(), m_szTenThuocKey);
	DDX_Text(pDX, m_wndSoLuong.GetDlgCtrlID(), m_nSoLuong);
	DDX_Text(pDX, m_wndContent.GetDlgCtrlID(), m_szContent);
	DDX_Text(pDX, m_wndUom.GetDlgCtrlID(), m_szUom);
	DDX_Text(pDX, m_wndTenphacdo.GetDlgCtrlID(), m_szTenphacdo);
	DDX_Text(pDX, m_wndDonvi.GetDlgCtrlID(), m_szDonvi);
	DDX_Text(pDX, m_wndSoluongPD.GetDlgCtrlID(), m_nSoluongPD);
}
void CHMSCancerTreatDiagItemLn::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Object")] =  m_szObjectKey;
	m_jData[_T("Storage")] =  m_szStorageKey;
	m_jData[_T("TenThuoc")] =  m_szTenThuocKey;
	m_jData[_T("SoLuong")] =  m_nSoLuong;
	}
	else
	{
			
	m_jData[_T("Object")].GetValue(m_szObjectKey);
	m_jData[_T("Storage")].GetValue(m_szStorageKey);
	m_jData[_T("TenThuoc")].GetValue(m_szTenThuocKey);
	m_jData[_T("SoLuong")].GetValue(m_nSoLuong);
	}

}
void CHMSCancerTreatDiagItemLn::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	float nTemp = 0;

	szSQL.Format(_T(" SELECT ") \
		_T("   hctl_lieudung_m2,") \
		_T("   hctl_tenthuoc,") \
		_T("   GET_UOMNAME(hctl_donvi) AS uomname,") \
		_T("   hctl_donvi") \
		_T("   FROM hms_cancer_treatdiagln") \
		_T("   WHERE hctl_cancer_treatdiag_id = '%s' AND hctl_cancer_treatdiagln_id = '%s'") \
		_T("   ORDER BY hctl_cancer_treatdiagln_id"), m_szOrderID, m_szLine);
	//_msg(_T("%s"), szSQL );
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("hctl_lieudung_m2"), m_nSoluongPD);
		rs.GetValue(_T("hctl_tenthuoc"), m_szTenphacdo);
		rs.GetValue(_T("uomname"), m_szDonvi);
		rs.GetValue(_T("hctl_donvi"), m_szDonviID);
	}

	szSQL.Format(_T("   SELECT ") \
		_T("   hcti_cancer_treatdiag_id,") \
		_T("   hcti_cancer_treatdiagln_id,") \
		_T("   hcti_product_id,") \
		_T("   hcti_qty,") \
		_T("   hcti_object_type,") \
		_T("   hcti_storage_id") \
		_T("   FROM hms_cancer_treatdiagitem") \
		_T("   WHERE hcti_cancer_treatdiag_id = '%s' AND hcti_cancer_treatdiagln_id = '%s' AND hcti_product_id = '%s'") \
		_T("   ORDER BY hcti_product_id"), m_szOrderID, m_szLine, m_szTenThuocKey);
	rs.ExecSQL(szSQL);
//_msg(_T("%s"), szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("hcti_qty"), m_nSoLuong);
		rs.GetValue(_T("hcti_object_type"), m_szObjectKey);
		rs.GetValue(_T("hcti_storage_id"), m_szStorageKey);

		SetMode(VM_EDIT);
	}
	else
	{
		szSQL.Format(_T("SELECT ") \
			_T("   SUM(hcti_qty) AS qty") \
			_T("   FROM hms_cancer_treatdiagitem") \
			_T("   WHERE hcti_cancer_treatdiag_id = '%s' AND hcti_cancer_treatdiagln_id = '%s'") \
			_T("   ORDER BY hcti_product_id"), m_szOrderID, m_szLine);
		rs.ExecSQL(szSQL);

		if(!rs.IsEOF())
		{
			rs.GetValue(_T("qty"), nTemp);
		}

		m_nSoLuong = m_nSoLuongMoi - nTemp;
		SetMode(VM_ADD);
	}

}
void CHMSCancerTreatDiagItemLn::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	hms_cancer_treatdiagitem.SetValue(_T("hcti_cancer_treatdiag_id"), m_szOrderID);
	hms_cancer_treatdiagitem.SetValue(_T("hcti_cancer_treatdiagln_id"), m_szLine);
	hms_cancer_treatdiagitem.SetValue(_T("hcti_product_id"), m_szTenThuocKey);
	hms_cancer_treatdiagitem.SetValue(_T("hcti_qty"), m_nSoLuong);
	hms_cancer_treatdiagitem.SetValue(_T("hcti_object_type"), m_szObjectKey);
	hms_cancer_treatdiagitem.SetValue(_T("hcti_storage_id"), m_szStorageKey);
	
}
void CHMSCancerTreatDiagItemLn::SetDefaultValues(){

	m_szTenThuocKey.Empty();
	//m_nSoLuong=0;

}
int CHMSCancerTreatDiagItemLn::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, -1);
 			SetDefaultValues();
			m_wndObject.SetFocus();
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, -1);
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
void CHMSCancerTreatDiagItemLn::OnObjectSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSCancerTreatDiagItemLn::OnObjectSelendok(){
	 
}
/*void CHMSCancerTreatDiagItemLn::OnObjectSetfocus(){
	
}*/
/*void CHMSCancerTreatDiagItemLn::OnObjectKillfocus(){
	
}*/
long CHMSCancerTreatDiagItemLn::OnObjectLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndObject.IsSearchKey() && !m_szObjectKey.IsEmpty()){
	 szWhere.Format(_T(" AND ho_type='%s' "), m_szObjectKey);
};
	m_wndObject.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T(" SELECT DISTINCT") \
				 _T(" ho_type AS id,") \
				 _T(" CASE WHEN ho_type = 'I' THEN 'Bảo hiểm' WHEN ho_type = 'S' THEN 'Dịch vụ' WHEN ho_type = 'D' THEN 'Chính sách' END AS name") \
				 _T(" FROM hms_object WHERE ho_active = 'Y' %s ORDER BY ho_type"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndObject.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSCancerTreatDiagItemLn::OnObjectAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSCancerTreatDiagItemLn::OnStorageSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSCancerTreatDiagItemLn::OnStorageSelendok(){
	UpdateData(true);
	m_szTenThuocKey.Empty();
	UpdateData(false);
}
/*void CHMSCancerTreatDiagItemLn::OnStorageSetfocus(){
	
}*/
/*void CHMSCancerTreatDiagItemLn::OnStorageKillfocus(){
	
}*/
long CHMSCancerTreatDiagItemLn::OnStorageLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndStorage.IsSearchKey() && !m_szStorageKey.IsEmpty()){
	 szWhere.Format(_T(" AND msl_storage_id='%s' "), m_szStorageKey);
};
	m_wndStorage.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT msl_storage_id AS id, msl_name AS name FROM m_storagelist WHERE msl_isactive = 'Y' AND msl_org_id = 'PM' %s ORDER BY msl_storage_id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndStorage.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSCancerTreatDiagItemLn::OnStorageAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSCancerTreatDiagItemLn::OnTenThuocSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSCancerTreatDiagItemLn::OnTenThuocSelendok(){
	UpdateData(TRUE);
	 m_szContent = m_wndTenThuoc.GetCurrent(2);
	 m_szUom = m_wndTenThuoc.GetCurrent(3);
	 UpdateData(false);
}
/*void CHMSCancerTreatDiagItemLn::OnTenThuocSetfocus(){
	
}*/
/*void CHMSCancerTreatDiagItemLn::OnTenThuocKillfocus(){
	
}*/
long CHMSCancerTreatDiagItemLn::OnTenThuocLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndTenThuoc.IsSearchKey() && !m_szTenThuocKey.IsEmpty()){
		szWhere.Format(_T(" and product_id='%s' "), m_szTenThuocKey);
	};
	m_wndTenThuoc.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T(" SELECT DISTINCT product_id AS id,  product_name AS name, ") \
		_T(" product_name2 as content, product_purchase_uomname as uomname,  ") \
		_T(" product_manufacturename as manufacturename") \
		_T(" FROM m_storageline ") \
		_T(" LEFT JOIN m_product_view ON(msl_product_id = product_id) ") \
		_T(" WHERE msl_storage_id = %s ") \
		_T(" AND msl_product_item_id > 0 ") \
		_T(" AND msl_qtyonhand > 0 ") \
		_T(" %s ") \
		_T(" ORDER BY product_id "), m_szStorageKey, szWhere);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndTenThuoc.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Name")),
			rs.GetValue(_T("content")),
			rs.GetValue(_T("uomname")),
			rs.GetValue(_T("manufacturename")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSCancerTreatDiagItemLn::OnTenThuocAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSCancerTreatDiagItemLn::OnSoLuongChange(){
	
} */
/*void CHMSCancerTreatDiagItemLn::OnSoLuongSetfocus(){
	
} */
/*void CHMSCancerTreatDiagItemLn::OnSoLuongKillfocus(){
	
} */
int CHMSCancerTreatDiagItemLn::OnSoLuongCheckValue(){
	return 0;
} 
/*
void CHMSCancerTreatDiagItemLn::OnContentChange(){
	
} */
/*void CHMSCancerTreatDiagItemLn::OnContentSetfocus(){
	
} */
/*void CHMSCancerTreatDiagItemLn::OnContentKillfocus(){
	
} */
int CHMSCancerTreatDiagItemLn::OnContentCheckValue(){
	return 0;
} 
/*void CHMSCancerTreatDiagItemLn::OnUomChange(){
	
} */
/*void CHMSCancerTreatDiagItemLn::OnUomSetfocus(){
	
} */
/*void CHMSCancerTreatDiagItemLn::OnUomKillfocus(){
	
} */
int CHMSCancerTreatDiagItemLn::OnUomCheckValue(){
	return 0;
} 
/*void CHMSCancerTreatDiagItemLn::OnTenphacdoChange(){
	
} */
/*void CHMSCancerTreatDiagItemLn::OnTenphacdoSetfocus(){
	
} */
/*void CHMSCancerTreatDiagItemLn::OnTenphacdoKillfocus(){
	
} */
int CHMSCancerTreatDiagItemLn::OnTenphacdoCheckValue(){
	return 0;
} 
/*void CHMSCancerTreatDiagItemLn::OnDonviChange(){
	
} */
/*void CHMSCancerTreatDiagItemLn::OnDonviSetfocus(){
	
} */
/*void CHMSCancerTreatDiagItemLn::OnDonviKillfocus(){
	
} */
int CHMSCancerTreatDiagItemLn::OnDonviCheckValue(){
	return 0;
}

void CHMSCancerTreatDiagItemLn::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveHMSCancerTreatDiagItemLn();
} 
void CHMSCancerTreatDiagItemLn::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CHMSCancerTreatDiagItemLn::OnAddHMSCancerTreatDiagItemLn(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSCancerTreatDiagItemLn::OnEditHMSCancerTreatDiagItemLn(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSCancerTreatDiagItemLn::OnDeleteHMSCancerTreatDiagItemLn(){
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
 		OnCancelHMSCancerTreatDiagItemLn();
 	}
	return 0;
}
int CHMSCancerTreatDiagItemLn::OnSaveHMSCancerTreatDiagItemLn(){
	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
		return -1;
	if(!IsValidateData())
		return -1;
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	long nSoLuongCu = 0, nSoLuongCuLn = 0;

	//szSQL.Format(_T("   SELECT ") \
	//	_T("   SUM(hcti_qty) AS qty") \
	//	_T("   FROM hms_cancer_treatdiagitem") \
	//	_T("   WHERE hcti_cancer_treatdiag_id = '%s' AND hcti_cancer_treatdiagln_id = '%s'") \
	//	_T("   ORDER BY hcti_product_id"), m_szOrderID, m_szLine);
	//rs.ExecSQL(szSQL);

	//if(!rs.IsEOF())
	//{
	//	rs.GetValue(_T("qty"), nSoLuongCu);
	//}

	//szSQL.Format(_T("   SELECT ") \
	//	_T("   hcti_qty AS qty") \
	//	_T("   FROM hms_cancer_treatdiagitem") \
	//	_T("   WHERE hcti_cancer_treatdiag_id = '%s' AND hcti_cancer_treatdiagln_id = '%s' AND hcti_product_id = '%s' ") \
	//	_T("   ORDER BY hcti_product_id"), m_szOrderID, m_szLine, m_szTenThuocKey);
	//rs.ExecSQL(szSQL);

	//if(!rs.IsEOF())
	//{
	//	rs.GetValue(_T("qty"), nSoLuongCuLn);
	//}

	//if(m_nSoLuongMoi < nSoLuongCu - nSoLuongCuLn + m_nSoLuong)
	//{
	//	ShowMessageBox(_T("Đã vượt quá số lượng lĩnh"));
	//	//return -1;
	//}

	if(GetMode() == VM_ADD){
		szSQL = hms_cancer_treatdiagitem.GetInsertSQL();
	}
	else if(GetMode() == VM_EDIT){
		CString szWhere;
		szWhere.Format(_T(" WHERE hcti_cancer_treatdiag_id = '%s' AND hcti_cancer_treatdiagln_id = '%s' AND hcti_product_id = '%s'"), m_szOrderID, m_szLine, m_szTenThuocKey);
		szSQL = hms_cancer_treatdiagitem.GetUpdateSQL(_T("hcti_cancer_treatdiag_id, hcti_cancer_treatdiagln_id, hcti_product_id"));
		szSQL += szWhere;
	}
	_fmsg(_T("%s"), szSQL);
	int ret = pMF->ExecSQL(szSQL);
	if(ret > 0)
	{
		//OnHMSCancerTreatDiagItemLnListLoadData();
		((CHMSCancerTreatDiagItem*)m_pParent)->OnTreatDiagItemListLoadData();
		SetMode(VM_ADD);
		
	}
	else
	{
	}
	return ret;
	return 0;
}
int CHMSCancerTreatDiagItemLn::OnCancelHMSCancerTreatDiagItemLn(){
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
int CHMSCancerTreatDiagItemLn::OnHMSCancerTreatDiagItemLnListLoadData(){
	return 0;
}
