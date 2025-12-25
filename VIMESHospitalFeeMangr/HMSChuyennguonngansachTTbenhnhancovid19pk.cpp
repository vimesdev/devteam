#include "HMSChuyennguonngansachTTbenhnhancovid19pk.h"
#include "MainFrm.h"
static void _OnOKSelectFnc(CWnd *pWnd){
	CHMSChuyennguonTTbenhnhancovid19pk *pVw = (CHMSChuyennguonTTbenhnhancovid19pk *)pWnd;
	pVw->OnOKSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSChuyennguonTTbenhnhancovid19pk *pVw = (CHMSChuyennguonTTbenhnhancovid19pk *)pWnd;
	pVw->OnCloseSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSChuyennguonTTbenhnhancovid19pk*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSChuyennguonTTbenhnhancovid19pk*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSChuyennguonTTbenhnhancovid19pk*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSChuyennguonTTbenhnhancovid19pk*)pWnd)->OnListDeleteItem();
} 
static int _OnAddHMSChuyennguonTTbenhnhancovid19Fnc(CWnd *pWnd){
	 return ((CHMSChuyennguonTTbenhnhancovid19pk*)pWnd)->OnAddHMSChuyennguonTTbenhnhancovid19();
} 
static int _OnEditHMSChuyennguonTTbenhnhancovid19Fnc(CWnd *pWnd){
	 return ((CHMSChuyennguonTTbenhnhancovid19pk*)pWnd)->OnEditHMSChuyennguonTTbenhnhancovid19();
} 
static int _OnDeleteHMSChuyennguonTTbenhnhancovid19Fnc(CWnd *pWnd){
	 return ((CHMSChuyennguonTTbenhnhancovid19pk*)pWnd)->OnDeleteHMSChuyennguonTTbenhnhancovid19();
} 
static int _OnSaveHMSChuyennguonTTbenhnhancovid19Fnc(CWnd *pWnd){
	 return ((CHMSChuyennguonTTbenhnhancovid19pk*)pWnd)->OnSaveHMSChuyennguonTTbenhnhancovid19();
} 
static int _OnCancelHMSChuyennguonTTbenhnhancovid19Fnc(CWnd *pWnd){
	 return ((CHMSChuyennguonTTbenhnhancovid19pk*)pWnd)->OnCancelHMSChuyennguonTTbenhnhancovid19();
}

static void _OnTatcaSelectFnc(CWnd *pWnd){
	  ((CHMSChuyennguonTTbenhnhancovid19pk*)pWnd)->OnTatcaSelect();
}
static void _OnPhikhamSelectFnc(CWnd *pWnd){
	  ((CHMSChuyennguonTTbenhnhancovid19pk*)pWnd)->OnPhikhamSelect();
}
static void _OnPhiCLSSelectFnc(CWnd *pWnd){
	  ((CHMSChuyennguonTTbenhnhancovid19pk*)pWnd)->OnPhiCLSSelect();
}
static void _OnPhithuocSelectFnc(CWnd *pWnd){
	  ((CHMSChuyennguonTTbenhnhancovid19pk*)pWnd)->OnPhithuocSelect();
}
static void _OnPhivattuSelectFnc(CWnd *pWnd){
	  ((CHMSChuyennguonTTbenhnhancovid19pk*)pWnd)->OnPhivattuSelect();
}
static void _OnTienanSelectFnc(CWnd *pWnd){
	  ((CHMSChuyennguonTTbenhnhancovid19pk*)pWnd)->OnTienanSelect();
}
static void _OnGoidichvuSelectFnc(CWnd *pWnd){
	  ((CHMSChuyennguonTTbenhnhancovid19pk*)pWnd)->OnGoidichvuSelect();
}
static void _OnTiengiuongSelectFnc(CWnd *pWnd){
	  ((CHMSChuyennguonTTbenhnhancovid19pk*)pWnd)->OnTiengiuongSelect();
}
static void _OnPhiPTTTSelectFnc(CWnd *pWnd){
	  ((CHMSChuyennguonTTbenhnhancovid19pk*)pWnd)->OnPhiPTTTSelect();
}
static void _OnChitinhmucphingansachttSelectFnc(CWnd *pWnd){
	 ((CHMSChuyennguonTTbenhnhancovid19pk*)pWnd)->OnChitinhmucphingansachttSelect();
}

static int _OnMarkAllSelectFnc(CWnd *pWnd){
	CHMSChuyennguonTTbenhnhancovid19pk *pVw = (CHMSChuyennguonTTbenhnhancovid19pk *)pWnd;
	pVw->OnMarkAllSelect();
	return 0;
} 
static int _OnUnMarkSelectFnc(CWnd *pWnd){
	CHMSChuyennguonTTbenhnhancovid19pk *pVw = (CHMSChuyennguonTTbenhnhancovid19pk *)pWnd;
	pVw->OnUnMarkSelect();
	return 0;
}
static void _OnLocxncovid19SelectFnc(CWnd *pWnd){
	 ((CHMSChuyennguonTTbenhnhancovid19pk*)pWnd)->OnLocxncovid19Select();
}

static int _OnMarkFoodFeeSelectFnc(CWnd *pWnd){
	CHMSChuyennguonTTbenhnhancovid19pk *pVw = (CHMSChuyennguonTTbenhnhancovid19pk *)pWnd;
	pVw->OnMarkFoodFeeSelect();
	return 0;
}

static void _OnLoccpbntraSelectFnc(CWnd *pWnd){
	 ((CHMSChuyennguonTTbenhnhancovid19pk*)pWnd)->OnLoccpbntraSelect();
}


CHMSChuyennguonTTbenhnhancovid19pk::CHMSChuyennguonTTbenhnhancovid19pk(CWnd *pParent):
	CGuiDialog(pParent)
{
	m_nDlgWidth = 605;
	m_nDlgHeight = 485;
	SetDefaultValues();
}
CHMSChuyennguonTTbenhnhancovid19pk::~CHMSChuyennguonTTbenhnhancovid19pk()
{
}
void CHMSChuyennguonTTbenhnhancovid19pk::OnCreateComponents()
{
	
	m_wndPaymentSource.Create(this, _T("CHUYỂN NGUỒN THANH TOÁN BỆNH NHÂN COVID 19"), 5, 5, 959, 549);
	m_wndBoloc.Create(this, _T("CHỌN CÁC MỤC PHÍ THEO NHÓM"), 5, 550, 659, 675);
	m_wndOK.Create(this, _T("&OK"), 665, 550, 811, 675);
	m_wndClose.Create(this, _T("&Close"), 816, 550, 954, 675);
	m_wndList.Create(this,10, 30, 954, 544); 
	m_wndTatca.Create(this, _T("Tất cả"), 10, 579, 127, 604);
	m_wndPhikham.Create(this, _T("Phí khám"), 133, 579, 250, 604);
	m_wndPhiCLS.Create(this, _T("Phí cận lâm sàng"), 379, 579, 519, 604);
	m_wndPhithuoc.Create(this, _T("Phí thuốc"), 133, 615, 250, 640);
	m_wndPhivattu.Create(this, _T("Phí vật tư"), 256, 615, 373, 640);
	m_wndTienan.Create(this, _T("Tiền ăn"), 379, 615, 519, 640);
	m_wndGoidichvu.Create(this, _T("Gói dịch vụ"), 525, 615, 653, 640);
	m_wndTiengiuong.Create(this, _T("Tiền giường"), 256, 579, 373, 604);
	m_wndPhiPTTT.Create(this, _T("Phí PT-TT"), 525, 579, 653, 604);
	m_wndChitinhmucphingansachtt.Create(this, _T("Chỉ tính mục phí ngân sách thanh toán"), 10, 646, 250, 671);
	m_wndLocxncovid19.Create(this, _T("Lọc riêng xét nghiệm covid19"), 256, 646, 447, 671);
	m_wndLoccpbntra.Create(this, _T("Lọc chi phí BN phải trả"), 453, 646, 653, 671);


}
void CHMSChuyennguonTTbenhnhancovid19pk::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();


	m_wndList.InsertColumn(0, _T("STT"), CFMT_TEXT, 30);
	m_wndList.InsertColumn(1, _T("Mã phí"), CFMT_NUMBER, 0);
	m_wndList.InsertColumn(2, _T("Mã nhóm"), CFMT_TEXT, 150);
	m_wndList.InsertColumn(3, _T("Khoa chỉ định"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(4, _T("Tên mục phí"), CFMT_TEXT, 500);
	m_wndList.InsertColumn(5, _T("Amount"), CFMT_MONEY, 100);
	m_wndList.InsertColumn(6, _T("Nguồn thanh toán"), CFMT_TEXT, 0);
	m_wndList.InsertColumn(7, _T("T/G chỉ định"), CFMT_TEXT, 100);
	//m_wndList.InsertColumn(7, _T("Khoa chỉ định"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(8, _T("Mã nhóm phí"), CFMT_TEXT, 0);
	m_wndList.SetCheckBox(true);
	m_wndList.SetSortHeader(true);


}
void CHMSChuyennguonTTbenhnhancovid19pk::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndOK.SetEvent(WE_CLICK, _OnOKSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	
	m_wndList.AddEvent(1, _T("Chọn tất cả"), _OnMarkAllSelectFnc);
	m_wndList.AddEvent(2, _T("Bỏ chọn tất cả"), _OnUnMarkSelectFnc);
	m_wndList.AddEvent(3, _T("Chỉ chọn tiền ăn"), _OnMarkFoodFeeSelectFnc);
	

	m_wndTatca.SetEvent(WE_CLICK, _OnTatcaSelectFnc);
	m_wndPhikham.SetEvent(WE_CLICK, _OnPhikhamSelectFnc);
	m_wndPhiCLS.SetEvent(WE_CLICK, _OnPhiCLSSelectFnc);
	m_wndPhithuoc.SetEvent(WE_CLICK, _OnPhithuocSelectFnc);
	m_wndPhivattu.SetEvent(WE_CLICK, _OnPhivattuSelectFnc);
	m_wndTienan.SetEvent(WE_CLICK, _OnTienanSelectFnc);
	m_wndGoidichvu.SetEvent(WE_CLICK, _OnGoidichvuSelectFnc);
	m_wndTiengiuong.SetEvent(WE_CLICK, _OnTiengiuongSelectFnc);
	m_wndPhiPTTT.SetEvent(WE_CLICK, _OnPhiPTTTSelectFnc);
	m_wndChitinhmucphingansachtt.SetEvent(WE_CLICK, _OnChitinhmucphingansachttSelectFnc);
	m_wndLocxncovid19.SetEvent(WE_CLICK, _OnLocxncovid19SelectFnc);
	m_wndLoccpbntra.SetEvent(WE_CLICK, _OnLoccpbntraSelectFnc);

	SetMode(VM_NONE);

	OnListLoadData();

}
void CHMSChuyennguonTTbenhnhancovid19pk::OnDoDataExchange(CDataExchange* pDX)

{
	DDX_Radio(pDX, m_wndTatca.GetDlgCtrlID(), m_nTatca);
	DDX_Radio(pDX, m_wndPhikham.GetDlgCtrlID(), m_nPhikham);
	DDX_Radio(pDX, m_wndPhiCLS.GetDlgCtrlID(), m_nPhiCLS);
	DDX_Radio(pDX, m_wndPhithuoc.GetDlgCtrlID(), m_nPhithuoc);
	DDX_Radio(pDX, m_wndPhivattu.GetDlgCtrlID(), m_nPhivattu);
	DDX_Radio(pDX, m_wndTienan.GetDlgCtrlID(), m_nTienan);
	DDX_Radio(pDX, m_wndGoidichvu.GetDlgCtrlID(), m_nGoidichvu);
	DDX_Radio(pDX, m_wndTiengiuong.GetDlgCtrlID(), m_nTiengiuong);
	DDX_Radio(pDX, m_wndPhiPTTT.GetDlgCtrlID(), m_nPhiPTTT);
	DDX_Check(pDX, m_wndChitinhmucphingansachtt.GetDlgCtrlID(), m_bChitinhmucphingansachtt);
	DDX_Check(pDX, m_wndLocxncovid19.GetDlgCtrlID(), m_bLocxncovid19);
	DDX_Check(pDX, m_wndLoccpbntra.GetDlgCtrlID(), m_bLoccpbntra);

}
void CHMSChuyennguonTTbenhnhancovid19pk::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);
}
void CHMSChuyennguonTTbenhnhancovid19pk::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSChuyennguonTTbenhnhancovid19pk::SetDefaultValues()
{
	m_nTatca=0;
	m_nPhikham=1;
	m_nPhiCLS=1;
	m_nPhithuoc=1;
	m_nPhivattu=1;
	m_nTienan=1;
	m_nGoidichvu=1;
	m_nTiengiuong=1;
	m_nPhiPTTT=1;
	m_bChitinhmucphingansachtt=FALSE;
	m_bLocxncovid19=FALSE;
	m_bLoccpbntra=FALSE;
}
int CHMSChuyennguonTTbenhnhancovid19pk::SetMode(int nMode)
{
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
		m_wndClose.EnableWindow(true);
 		UpdateData(FALSE);
 		return nOldMode;
}
void CHMSChuyennguonTTbenhnhancovid19pk::OnOKSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);
	CString szSQL, tmpStr;
	int nPatpaid = 0;
	int nTypeID = 0;
	long nOderlineID = 0;

	for (int i =0; i < m_wndList.GetItemCount(); i++)
	{
		nPatpaid = 0;
		if(m_wndList.GetCheck(i))
		{
			nPatpaid = 1;
		}
		
		nOderlineID = str2long(m_wndList.GetItemText(i, 1));
		tmpStr == m_wndList.GetItemText(i, 5);//Amount//
		if(tmpStr == _T("TTL"))
			continue;
		//_msg(_T("%d"), nPatpaid);
		//_msg(_T("%ld"), nOderlineID);
		szSQL.Format(_T("HMS_FEE_PAYSOURCE_COVID_PK(%ld, %ld, %ld, '%s', %d) "),
			m_nDocumentNo, m_nInvoiceNo, nOderlineID, pMF->GetCurrentUser(), nPatpaid);
		
		pMF->ExecDML(szSQL);
		//_msg(_T("%s"),szSQL);
	}
	CGuiDialog::OnOK();
}	

void CHMSChuyennguonTTbenhnhancovid19pk::OnTatcaSelect()
{
	UpdateData(TRUE);
	OnListLoadData();	
	UpdateData(FALSE);
}
void CHMSChuyennguonTTbenhnhancovid19pk::OnPhikhamSelect()
{
	/*UpdateData(TRUE);
	OnListLoadData();	
	UpdateData(FALSE);*/
}
void CHMSChuyennguonTTbenhnhancovid19pk::OnPhiCLSSelect()
{
	/*UpdateData(TRUE);
	OnListLoadData();
	UpdateData(FALSE);*/
}
void CHMSChuyennguonTTbenhnhancovid19pk::OnPhithuocSelect()
{
	/*UpdateData(TRUE);
	OnListLoadData();
	UpdateData(FALSE);*/	
}
void CHMSChuyennguonTTbenhnhancovid19pk::OnPhivattuSelect()
{
	/*UpdateData(TRUE);
	OnListLoadData();
	UpdateData(FALSE);	*/
}
void CHMSChuyennguonTTbenhnhancovid19pk::OnTienanSelect()
{
	/*UpdateData(TRUE);
	OnListLoadData();
	UpdateData(FALSE);*/	
}
void CHMSChuyennguonTTbenhnhancovid19pk::OnGoidichvuSelect()
{
	/*UpdateData(TRUE);
	OnListLoadData();
	UpdateData(FALSE);	*/
}
void CHMSChuyennguonTTbenhnhancovid19pk::OnTiengiuongSelect()
{
	/*UpdateData(TRUE);
	OnListLoadData();
	UpdateData(FALSE);	*/
}
void CHMSChuyennguonTTbenhnhancovid19pk::OnPhiPTTTSelect()
{
	/*UpdateData(TRUE);
	OnListLoadData();
	UpdateData(FALSE);*/
}
void CHMSChuyennguonTTbenhnhancovid19pk::OnChitinhmucphingansachttSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	/*UpdateData(TRUE);
	OnListLoadData();
	UpdateData(FALSE);*/
}

void CHMSChuyennguonTTbenhnhancovid19pk::OnLocxncovid19Select()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);
	OnListLoadData();
	UpdateData(FALSE);	
}

void CHMSChuyennguonTTbenhnhancovid19pk::OnLoccpbntraSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	/*UpdateData(TRUE);
	OnListLoadData();
	UpdateData(FALSE);	*/
}

void CHMSChuyennguonTTbenhnhancovid19pk::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
void CHMSChuyennguonTTbenhnhancovid19pk::OnListDblClick()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	/*CString szItemText;	
	int nCheck = 0;
	for (int i=0; i<m_wndList.GetItemCount(); i++)	
	{
		szItemText=m_wndList.GetItemText(i,2);	
		{
			m_wndList.SetCheck(szItemText, true);
			nCheck++;
		}
		
	}
	AfxMessageBox(int2str(nCheck));*/

} 
void CHMSChuyennguonTTbenhnhancovid19pk::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSChuyennguonTTbenhnhancovid19pk::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSChuyennguonTTbenhnhancovid19pk::OnListLoadData()
{

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szngansach_paid;

	if (m_nPhikham == 0)
	{
		szWhere.AppendFormat(_T("AND hfe_type = 'E'"));
	}

	if (m_nTiengiuong == 0)
	{
		szWhere.AppendFormat(_T("AND hfe_type in ('B')"));
	}

	if (m_nPhiCLS == 0)
	{
		szWhere.AppendFormat(_T("AND hfe_type in ('P', 'T')"));
	}
	if (m_nPhiPTTT == 0)
	{
		szWhere.AppendFormat(_T("AND hfe_type in ('O')"));
	}
	if (m_nPhithuoc == 0)
	{
		szWhere.AppendFormat(_T("AND hfe_type in ('D')"));
	}
	
	if (m_nPhivattu == 0)
	{
		szWhere.AppendFormat(_T("AND hfe_type in ('M')"));
	}

	 if (m_nTienan == 0)
	{
		szWhere.AppendFormat(_T("AND hfe_type in ('F')"));
	}

	if (m_nGoidichvu == 0)
	{
		szWhere.AppendFormat(_T("AND hfe_type in ('X')"));
	}
	if (m_nTatca == 0)
	{
		szWhere.AppendFormat(_T("AND hfe_type in ('E','O','I','T','P', 'D','M','X','F', 'B')"));
	}

	if (m_bChitinhmucphingansachtt)
	{
		szWhere.AppendFormat(_T("AND hfe_ngansach_paid='cov'"));
	}

	if (m_bLocxncovid19)
	{
		szWhere.AppendFormat(_T("AND NVL(HFL_XNCOVID19, 'X')='Y'"));
	}

	if (m_bLoccpbntra)
	{
		szWhere.AppendFormat(_T("AND (hfe_patpaid+hfe_patdebt) > 0"));
	
	}

	szWhere.AppendFormat(_T(" and hfe_itemid not in(select hfe_itemid from hms_fee_discountline where hfe_docno = %ld and hfe_refidx=%ld) "), m_nDocumentNo, m_nInvoiceNo);

	szSQL.Format(_T(" SELECT idx,") \
	_T("   description,") \
	_T("   maphi,") \
	_T("   tenmucphi, ngansach_paid,") \
	_T("   SUM(amount) AS amount, tgchidinh, khoachidinh, manhom") \
	_T(" FROM") \
	_T("   (SELECT hft_id AS idx,") \
	_T("     to_char(hfe_date, 'DD/MM/YYYY') as tgchidinh,") \
	_T("     hfe_deptid as khoachidinh,") \
	_T("     hft_name     AS description,") \
	_T("     hfe_fee_id as maphi,") \
	_T("     hfe_desc as tenmucphi, NVL(hfe_ngansach_paid, 'N') as ngansach_paid, hfe_group AS manhom,") \
	_T("     CASE") \
	_T("       WHEN hfe_type='V'") \
	_T("       THEN (hfe_cost -hfe_discount)") \
	_T("       WHEN hfe_type='X'") \
	_T("       THEN hfe_cost") \
	_T("       ELSE (hfe_patpaid+hfe_patdebt)") \
	_T("     END AS amount") \
	_T("   FROM hms_fee") \
	_T("   LEFT JOIN hms_fee_group") \
	_T("   ON(hfg_id =hfe_group)") \
	_T("   LEFT JOIN hms_fee_type") \
	_T("   ON(hft_id                     =hfg_type_id)") \
	_T("   LEFT JOIN hms_fee_list ON (hfe_itemid=hfl_feeid)") \
	_T("   WHERE hfe_docno               = %ld") \
	_T("   AND hfe_invoiceno             = %ld") \
	_T("   AND hfe_status               IN('O','A')") \
	_T("   AND hfe_category             NOT IN ('Y', 'BQP')") \
	_T("   AND ((hfe_type               <>'V'") \
	_T("   AND hfe_feegroup NOT         IN('OPT_L'))") \
	_T("   OR hfe_type                   ='V')") \
	_T("   AND (hfe_patpaid+hfe_patdebt+hfe_discount) > 0 %s ") \
	_T("   ) tbl") \
	_T(" GROUP BY idx,") \
	_T("   description,") \
	_T("   maphi,") \
	_T("   tenmucphi, khoachidinh, tgchidinh, ngansach_paid, manhom") \
	_T(" ORDER BY idx, tenmucphi"), m_nDocumentNo, m_nInvoiceNo, szWhere);

	rs.ExecSQL(szSQL);
	//_msg(_T("%s"),szSQL);

	m_wndList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	int nItem = 0;
	double nAmount = 0;
	double nTotalAmount =0;
	while(!rs.IsEOF())
	{ 
		rs.GetValue(_T("amount"), nAmount);
		rs.GetValue(_T("ngansach_paid"), szngansach_paid);	
		nTotalAmount += nAmount;
		nItem = m_wndList.AddItems(
			_T(""),			 
			rs.GetValue(_T("maphi")),
			rs.GetValue(_T("Description")),			
			rs.GetValue(_T("khoachidinh")),
			rs.GetValue(_T("tenmucphi")),
			rs.GetValue(_T("Amount")), 
			_T("BN"),
			rs.GetValue(_T("tgchidinh")),
			
			rs.GetValue(_T("manhom")),
			NULL);
		m_wndList.SetCheck(nItem, TRUE);

		if (szngansach_paid == _T("cov"))
		{
			m_wndList.SetSubItemBkColor(nItem, 2, RGB(69, 139, 0), FALSE);	
			m_wndList.SetSubItemTextColor(nItem, 2, RGB(255, 255, 255), FALSE);
		}

		rs.MoveNext();
	}
	if(nTotalAmount > 0)
	{
		nItem = m_wndList.AddItems
			(
			_T(""),
			_T(""),
			_T(""),
			_T(""),
			_T("Tổng Cộng"), 
			ToString(nTotalAmount), 
			_T("TTL"), 
			NULL);
		m_wndList.SetItemTextColor(nItem, RGB(0, 0, 255), FALSE);
	}
	m_wndList.EndLoad(); 
	return nCount;
}
int CHMSChuyennguonTTbenhnhancovid19pk::OnAddHMSChuyennguonTTbenhnhancovid19(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSChuyennguonTTbenhnhancovid19pk::OnEditHMSChuyennguonTTbenhnhancovid19(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSChuyennguonTTbenhnhancovid19pk::OnDeleteHMSChuyennguonTTbenhnhancovid19(){
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
 		OnCancelHMSChuyennguonTTbenhnhancovid19();
 	}
	return 0;
}
int CHMSChuyennguonTTbenhnhancovid19pk::OnSaveHMSChuyennguonTTbenhnhancovid19(){
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
 		//OnHMSChuyennguonTTbenhnhancovid19ListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSChuyennguonTTbenhnhancovid19pk::OnCancelHMSChuyennguonTTbenhnhancovid19(){
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
int CHMSChuyennguonTTbenhnhancovid19pk::OnHMSChuyennguonTTbenhnhancovid19ListLoadData(){
	return 0;
}

int CHMSChuyennguonTTbenhnhancovid19pk::OnMarkAllSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	for(int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		m_wndList.SetCheck(i, TRUE);
	}
	return 0;
	
} 
int CHMSChuyennguonTTbenhnhancovid19pk::OnUnMarkSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	for(int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		m_wndList.SetCheck(i, FALSE);
	}
	return 0;
}

int CHMSChuyennguonTTbenhnhancovid19pk::OnMarkFoodFeeSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szItemText;
	int nCheck = 0;
	for (int i=0; i<m_wndList.GetItemCount(); i++)	
	{
		szItemText=m_wndList.GetItemText(i,8);//Mã nhóm phí//
		if ((_T("FF000"))==szItemText)
		{
			m_wndList.SetCheck(i, true);
			nCheck++;
		}
		else m_wndList.SetCheck(i, false);
	}
	AfxMessageBox(int2str(nCheck));
	return 0;	
}