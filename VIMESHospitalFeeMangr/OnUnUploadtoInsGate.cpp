#include "OnUnUploadtoInsGate.h"
#include "MainFrm.h"
#include "SearchPopup.h"
static void _OnOKSelectFnc(CWnd *pWnd){
	CHMSUnUpload2InsGate *pVw = (CHMSUnUpload2InsGate *)pWnd;
	pVw->OnOKSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSUnUpload2InsGate *pVw = (CHMSUnUpload2InsGate *)pWnd;
	pVw->OnCloseSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSUnUpload2InsGate*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSUnUpload2InsGate*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSUnUpload2InsGate*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSUnUpload2InsGate*)pWnd)->OnListDeleteItem();
} 
static int _OnAddHMSUnUpload2InsGateFnc(CWnd *pWnd){
	 return ((CHMSUnUpload2InsGate*)pWnd)->OnAddHMSUnUpload2InsGate();
} 
static int _OnEditHMSUnUpload2InsGateFnc(CWnd *pWnd){
	 return ((CHMSUnUpload2InsGate*)pWnd)->OnEditHMSUnUpload2InsGate();
} 
static int _OnDeleteHMSUnUpload2InsGateFnc(CWnd *pWnd){
	 return ((CHMSUnUpload2InsGate*)pWnd)->OnDeleteHMSUnUpload2InsGate();
} 
static int _OnSaveHMSUnUpload2InsGateFnc(CWnd *pWnd){
	 return ((CHMSUnUpload2InsGate*)pWnd)->OnSaveHMSUnUpload2InsGate();
} 
static int _OnCancelHMSUnUpload2InsGateFnc(CWnd *pWnd){
	 return ((CHMSUnUpload2InsGate*)pWnd)->OnCancelHMSUnUpload2InsGate();
}

static void _OnTatcaSelectFnc(CWnd *pWnd){
	  ((CHMSUnUpload2InsGate*)pWnd)->OnTatcaSelect();
}
static void _OnPhikhamSelectFnc(CWnd *pWnd){
	  ((CHMSUnUpload2InsGate*)pWnd)->OnPhikhamSelect();
}
static void _OnPhiCLSSelectFnc(CWnd *pWnd){
	  ((CHMSUnUpload2InsGate*)pWnd)->OnPhiCLSSelect();
}
static void _OnPhithuocSelectFnc(CWnd *pWnd){
	  ((CHMSUnUpload2InsGate*)pWnd)->OnPhithuocSelect();
}
static void _OnPhivattuSelectFnc(CWnd *pWnd){
	  ((CHMSUnUpload2InsGate*)pWnd)->OnPhivattuSelect();
}
static void _OnTienanSelectFnc(CWnd *pWnd){
	  ((CHMSUnUpload2InsGate*)pWnd)->OnTienanSelect();
}
static void _OnGoidichvuSelectFnc(CWnd *pWnd){
	  ((CHMSUnUpload2InsGate*)pWnd)->OnGoidichvuSelect();
}
static void _OnTiengiuongSelectFnc(CWnd *pWnd){
	  ((CHMSUnUpload2InsGate*)pWnd)->OnTiengiuongSelect();
}
static void _OnPhiPTTTSelectFnc(CWnd *pWnd){
	  ((CHMSUnUpload2InsGate*)pWnd)->OnPhiPTTTSelect();
}
static void _OnChitinhmucphingansachttSelectFnc(CWnd *pWnd){
	 ((CHMSUnUpload2InsGate*)pWnd)->OnChitinhmucphingansachttSelect();
}

static int _OnMarkAllSelectFnc(CWnd *pWnd){
	CHMSUnUpload2InsGate *pVw = (CHMSUnUpload2InsGate *)pWnd;
	pVw->OnMarkAllSelect();
	return 0;
} 
static int _OnUnMarkSelectFnc(CWnd *pWnd){
	CHMSUnUpload2InsGate *pVw = (CHMSUnUpload2InsGate *)pWnd;
	pVw->OnUnMarkSelect();
	return 0;
}
static void _OnLocxncovid19SelectFnc(CWnd *pWnd){
	 ((CHMSUnUpload2InsGate*)pWnd)->OnLocxncovid19Select();
}

static int _OnMarkFoodFeeSelectFnc(CWnd *pWnd){
	CHMSUnUpload2InsGate *pVw = (CHMSUnUpload2InsGate *)pWnd;
	pVw->OnMarkFoodFeeSelect();
	return 0;
}

static void _OnLoccpbntraSelectFnc(CWnd *pWnd){
	 ((CHMSUnUpload2InsGate*)pWnd)->OnLoccpbntraSelect();
}

static int _OnSearchFeeSelectFnc(CWnd *pWnd)
{
	 ((CHMSUnUpload2InsGate*)pWnd)->OnSearchFeeSelect();
	 return 0;
}
static void _OnOnlyBQPSelectFnc(CWnd *pWnd)
{
	 ((CHMSUnUpload2InsGate*)pWnd)->OnOnlyBQPSelect();
}


CHMSUnUpload2InsGate::CHMSUnUpload2InsGate(CWnd *pParent):
	CGuiDialog(pParent)
{
	m_nDlgWidth = 605;
	m_nDlgHeight = 485;
	SetDefaultValues();
}
CHMSUnUpload2InsGate::~CHMSUnUpload2InsGate()
{
}
void CHMSUnUpload2InsGate::OnCreateComponents()
{
	
	m_wndPaymentSource.Create(this, _T("DANH MỤC PHÍ CHUYỂN NGUỒN BH KHÔNG TẠO XML"), 5, 5, 959, 549);
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
	m_wndChitinhmucphingansachtt.Create(this, _T("Chỉ tính mục phí ngân sách thanh toán"), 0, 0, 0, 0);
	m_wndLocxncovid19.Create(this, _T("Lọc riêng xét nghiệm covid19"), 0, 0, 0, 0);
	m_wndLoccpbntra.Create(this, _T("Lọc chi phí BN phải trả"), 0, 0, 0, 0);
	m_wndOnlyBQP.Create(this, _T("Nguồn BQP"), 10, 647, 127, 672);

}
void CHMSUnUpload2InsGate::OnInitializeComponents(){
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
	m_wndList.InsertColumn(9, _T("Thành tiền"), CFMT_MONEY, 100);
	m_wndList.SetCheckBox(true);
	m_wndList.SetSortHeader(true);


}
void CHMSUnUpload2InsGate::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndOK.SetEvent(WE_CLICK, _OnOKSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	
	m_wndList.AddEvent(1, _T("Chọn tất cả"), _OnMarkAllSelectFnc);
	m_wndList.AddEvent(2, _T("Bỏ chọn tất cả"), _OnUnMarkSelectFnc);
	m_wndList.AddEvent(3, _T("Search"), _OnSearchFeeSelectFnc);
	

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
	m_wndOnlyBQP.SetEvent(WE_CLICK, _OnOnlyBQPSelectFnc);

	SetMode(VM_NONE);

	OnListLoadData();

}
void CHMSUnUpload2InsGate::OnDoDataExchange(CDataExchange* pDX)

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
	DDX_Check(pDX, m_wndOnlyBQP.GetDlgCtrlID(), m_bOnlyBQP);

}
void CHMSUnUpload2InsGate::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);
}
void CHMSUnUpload2InsGate::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSUnUpload2InsGate::SetDefaultValues()
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
	m_bOnlyBQP=FALSE;
}
int CHMSUnUpload2InsGate::SetMode(int nMode)
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
void CHMSUnUpload2InsGate::OnOKSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//Hàm HMS_UNUPLOAD_2_INSGATE: Chuyển mục phí ko đẩy lên cổng
	
	UpdateData(TRUE);
	CString szSQL, tmpStr;
	int ques = ShowMessageBox(_T("Chức năng này sẽ cập nhật lại mục phí được chọn trên màn hình để không tính vào XML? Bạn chắc chắn chứ? "),MB_YESNO);
		if(ques == IDNO)
		return;
	
	long nOderlineID = 0;

	for (int i =0; i < m_wndList.GetItemCount(); i++)
	{		
		if(m_wndList.GetCheck(i))
		{

		nOderlineID = str2long(m_wndList.GetItemText(i, 1));	
		
		szSQL.Format(_T("HMS_UNUPLOAD_2_INSGATE(%ld, %ld, %ld, '%s') "),
			m_nDocumentNo, m_nInvoiceNo, nOderlineID, pMF->GetCurrentUser());
		
		pMF->ExecDML(szSQL);

		}
		
	}
	CGuiDialog::OnOK();
}	

void CHMSUnUpload2InsGate::OnTatcaSelect()
{
	UpdateData(TRUE);
	OnListLoadData();	
	UpdateData(FALSE);
}
void CHMSUnUpload2InsGate::OnPhikhamSelect()
{
	/*UpdateData(TRUE);
	OnListLoadData();	
	UpdateData(FALSE);*/
}
void CHMSUnUpload2InsGate::OnPhiCLSSelect()
{
	/*UpdateData(TRUE);
	OnListLoadData();
	UpdateData(FALSE);*/
}
void CHMSUnUpload2InsGate::OnPhithuocSelect()
{
	/*UpdateData(TRUE);
	OnListLoadData();
	UpdateData(FALSE);*/	
}
void CHMSUnUpload2InsGate::OnPhivattuSelect()
{
	/*UpdateData(TRUE);
	OnListLoadData();
	UpdateData(FALSE);	*/
}
void CHMSUnUpload2InsGate::OnTienanSelect()
{
	/*UpdateData(TRUE);
	OnListLoadData();
	UpdateData(FALSE);*/	
}
void CHMSUnUpload2InsGate::OnGoidichvuSelect()
{
	/*UpdateData(TRUE);
	OnListLoadData();
	UpdateData(FALSE);	*/
}
void CHMSUnUpload2InsGate::OnTiengiuongSelect()
{
	/*UpdateData(TRUE);
	OnListLoadData();
	UpdateData(FALSE);	*/
}
void CHMSUnUpload2InsGate::OnPhiPTTTSelect()
{
	/*UpdateData(TRUE);
	OnListLoadData();
	UpdateData(FALSE);*/
}
void CHMSUnUpload2InsGate::OnChitinhmucphingansachttSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	/*UpdateData(TRUE);
	OnListLoadData();
	UpdateData(FALSE);*/
}

void CHMSUnUpload2InsGate::OnLocxncovid19Select()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);
	OnListLoadData();
	UpdateData(FALSE);	
}

void CHMSUnUpload2InsGate::OnLoccpbntraSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	/*UpdateData(TRUE);
	OnListLoadData();
	UpdateData(FALSE);	*/
}

void CHMSUnUpload2InsGate::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
void CHMSUnUpload2InsGate::OnListDblClick()
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
void CHMSUnUpload2InsGate::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSUnUpload2InsGate::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
}

void CHMSUnUpload2InsGate::OnOnlyBQPSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);
	OnListLoadData();
	UpdateData(FALSE);	
}

long CHMSUnUpload2InsGate::OnListLoadData()
{

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szngansach_paid, szUnUpload2Gate;

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
	
	if (m_bOnlyBQP)
	{
		szWhere.AppendFormat(_T("AND hfe_category IN ('BQP')"));
	
	}

	//szWhere.AppendFormat(_T("AND (hfe_patpaid+hfe_patdebt) > 0"));
	szWhere.AppendFormat(_T(" and hfe_itemid not in(select hfe_itemid from hms_fee_discountline where hfe_docno = %ld and hfe_refidx=%ld) "), m_nDocumentNo, m_nInvoiceNo);

	szSQL.Format(_T(" SELECT idx,") \
	_T("   description,") \
	_T("   maphi,") \
	_T("   tenmucphi, ngansach_paid,") \
	_T("   SUM(amount) AS amount, tgchidinh, khoachidinh, manhom, UnUpload2Gate, sum(hfe_cost) as totalcost") \
	_T(" FROM") \
	_T("   (SELECT hft_id AS idx,") \
	_T("     to_char(hfe_date, 'DD/MM/YYYY') as tgchidinh,") \
	_T("     hfe_deptid as khoachidinh,") \
	_T("     hft_name     AS description,") \
	_T("     hfe_fee_id as maphi,") \
	_T("     hfe_desc||'-'||hfe_class as tenmucphi, NVL(hfe_ngansach_paid, 'N') as ngansach_paid, NVL(hfe_un_upload2_ins_gate,'X') as UnUpload2Gate, hfe_group AS manhom,") \
	_T("     CASE") \
	_T("       WHEN hfe_type='V'") \
	_T("       THEN (hfe_cost -hfe_discount)") \
	_T("       WHEN hfe_type='X'") \
	_T("       THEN hfe_cost") \
	_T("       ELSE (hfe_patpaid+hfe_patdebt)") \
	_T("     END AS amount,") \
	_T("     hfe_cost") \
	_T("   FROM hms_fee") \
	_T("   LEFT JOIN hms_fee_group") \
	_T("   ON(hfg_id =hfe_group)") \
	_T("   LEFT JOIN hms_fee_type") \
	_T("   ON(hft_id                     =hfg_type_id)") \
	_T("   LEFT JOIN hms_fee_list ON (hfe_itemid=hfl_feeid)") \
	_T("   WHERE hfe_docno               = %ld") \
	_T("   AND hfe_invoiceno             = %ld") \
	_T("   AND hfe_status               IN('P')") \
	_T("   AND (hfe_category IN ('BQP') OR (hfe_category IN ('N') and hfe_type IN ('E', 'M', 'D', 'O')))") \
	_T("   AND ((hfe_type               <>'V'") \
	_T("   AND hfe_feegroup NOT         IN('OPT_L'))") \
	_T("   OR hfe_type                   ='V')") \
	//_T("   AND (hfe_cost) > 0 AND hfe_type in ('D', 'M') %s ") \//
	_T("   AND (hfe_cost) > 0 %s ") \
	_T("   ) tbl") \
	_T(" GROUP BY idx,") \
	_T("   description,") \
	_T("   maphi,") \
	_T("   tenmucphi, khoachidinh, tgchidinh, ngansach_paid, manhom, UnUpload2Gate") \
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
		rs.GetValue(_T("UnUpload2Gate"), szUnUpload2Gate);	
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
			rs.GetValue(_T("totalcost")), 
			NULL);
		m_wndList.SetCheck(nItem, false);

		if (szUnUpload2Gate == _T("Y"))
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
int CHMSUnUpload2InsGate::OnAddHMSUnUpload2InsGate(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSUnUpload2InsGate::OnEditHMSUnUpload2InsGate(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSUnUpload2InsGate::OnDeleteHMSUnUpload2InsGate(){
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
 		OnCancelHMSUnUpload2InsGate();
 	}
	return 0;
}
int CHMSUnUpload2InsGate::OnSaveHMSUnUpload2InsGate(){
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
 		//OnHMSUnUpload2InsGateListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSUnUpload2InsGate::OnCancelHMSUnUpload2InsGate(){
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
int CHMSUnUpload2InsGate::OnHMSUnUpload2InsGateListLoadData(){
	return 0;
}

int CHMSUnUpload2InsGate::OnMarkAllSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	for(int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		m_wndList.SetCheck(i, TRUE);
	}
	return 0;
	
} 
int CHMSUnUpload2InsGate::OnUnMarkSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	for(int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		m_wndList.SetCheck(i, FALSE);
	}
	return 0;
}

int CHMSUnUpload2InsGate::OnMarkFoodFeeSelect()
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

void CHMSUnUpload2InsGate::OnSearchFeeSelect()
{
	CSearchPopup *newPopup = new CSearchPopup(&m_wndList);
	newPopup->m_nSearchCol = 4;
	newPopup->ShowPopup(&m_wndList);
	
}