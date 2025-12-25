#include "HMSTreatmentExamineEx.h"
#include "MainFrm.h"
#include ".\hmstreatmentexamineex.h"
static long _OnExamineListLoadDataFnc(CWnd *pWnd){
	return ((CHMSTreatmentExamineEx*)pWnd)->OnExamineListLoadData();
} 
static void _OnExamineListDblClickFnc(CWnd *pWnd){
	((CHMSTreatmentExamineEx*)pWnd)->OnExamineListDblClick();
} 
static void _OnExamineListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSTreatmentExamineEx*)pWnd)->OnExamineListSelectChange(nOldItem, nNewItem);
} 
static int _OnExamineListDeleteItemFnc(CWnd *pWnd){
	return ((CHMSTreatmentExamineEx*)pWnd)->OnExamineListDeleteItem();
}

static int _OnExamineListRefreshItemFnc(CWnd *pWnd){
	((CHMSTreatmentExamineEx*)pWnd)->RefreshData();
	return 0;
}
static void _OnSelectSelectChangeFnc(CWnd* pWnd, int nOldItemSel, int nNewItemSel) {
	((CHMSTreatmentExamineEx*)pWnd)->OnSelectSelectChange(nOldItemSel, nNewItemSel);
}
static void _OnSelectSelendokFnc(CWnd* pWnd) {
	((CHMSTreatmentExamineEx*)pWnd)->OnSelectSelendok();
}
/*static void _OnSelectSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentExamineEx *)pWnd)->OnSelectKillfocus();
}*/
/*static void _OnSelectKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentExamineEx *)pWnd)->OnSelectKillfocus();
}*/
static long _OnSelectLoadDataFnc(CWnd* pWnd) {
	return ((CHMSTreatmentExamineEx*)pWnd)->OnSelectLoadData();
}
/*static void _OnRegistrationPlace2AddNewFnc(CWnd *pWnd){
	((CHMSTreatmentExamineEx *)pWnd)->OnRegistrationPlace2AddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CHMSTreatmentExamineEx *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentExamineEx *)pWnd)->OnFromDateSetfocus();} */
	/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
		((CHMSTreatmentExamineEx *)pWnd)->OnFromDateKillfocus();
	} */
static int _OnFromDateCheckValueFnc(CWnd* pWnd) {
	return ((CHMSTreatmentExamineEx*)pWnd)->OnFromDateCheckValue();
}
static void _OnToDateChangeFnc(CWnd *pWnd){
	((CHMSTreatmentExamineEx *)pWnd)->OnToDateChange();
} 
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentExamineEx *)pWnd)->OnToDateSetfocus();} */
static void _OnToDateKillfocusFnc(CWnd *pWnd){
		((CHMSTreatmentExamineEx *)pWnd)->OnToDateKillfocus();
}
static int _OnToDateCheckValueFnc(CWnd* pWnd) {
	return ((CHMSTreatmentExamineEx*)pWnd)->OnToDateCheckValue();
}
static void _OnSearchSelectFnc(CWnd* pWnd) {
	CHMSTreatmentExamineEx* pVw = (CHMSTreatmentExamineEx*)pWnd;
	pVw->OnSearchSelect();
}
static void _OnAddSelectFnc(CWnd* pWnd) {
	CHMSTreatmentExamineEx* pVw = (CHMSTreatmentExamineEx*)pWnd;
	pVw->OnAddSelect();
}
static void _OnEditSelectFnc(CWnd* pWnd) {
	CHMSTreatmentExamineEx* pVw = (CHMSTreatmentExamineEx*)pWnd;
	pVw->OnEditSelect();
}
static void _OnPrintSelectFnc(CWnd* pWnd) {
	CHMSTreatmentExamineEx* pVw = (CHMSTreatmentExamineEx*)pWnd;
	pVw->OnPrintSelect();
}

static int _OnAddHMSTreatmentExamineExFnc(CWnd *pWnd){
	return ((CHMSTreatmentExamineEx*)pWnd)->OnAddHMSTreatmentExamineEx();
} 
static int _OnEditHMSTreatmentExamineExFnc(CWnd *pWnd){
	return ((CHMSTreatmentExamineEx*)pWnd)->OnEditHMSTreatmentExamineEx();
} 
static int _OnDeleteHMSTreatmentExamineExFnc(CWnd *pWnd){
	return ((CHMSTreatmentExamineEx*)pWnd)->OnDeleteHMSTreatmentExamineEx();
} 
static int _OnSaveHMSTreatmentExamineExFnc(CWnd *pWnd){
	return ((CHMSTreatmentExamineEx*)pWnd)->OnSaveHMSTreatmentExamineEx();
} 
static int _OnCancelHMSTreatmentExamineExFnc(CWnd *pWnd){
	return ((CHMSTreatmentExamineEx*)pWnd)->OnCancelHMSTreatmentExamineEx();
} 


BEGIN_MESSAGE_MAP(CHMSTreatmentExamineEx, CGuiView)
	ON_WM_SIZE()
END_MESSAGE_MAP()


CHMSTreatmentExamineEx::CHMSTreatmentExamineEx(){

	m_nDlgWidth = 679;
	m_nDlgHeight = 643;
	SetDefaultValues();
	m_nListWidth = 0;
}

CHMSTreatmentExamineEx::~CHMSTreatmentExamineEx(){
}
void CHMSTreatmentExamineEx::OnCreateComponents(){
	m_wndSelectLabel.Create(this, _T("Lựa chọn"), 5, 5, 80, 30);
	m_wndSelect.Create(this, 85, 5, 200, 30);
	m_wndHtml.Create(WS_CHILD|WS_VISIBLE, CRect(5, 200, 605, 400), this, 1);
	//m_wndHtml.Load(L"./HTML/DT_BENHTRINH.HTML");
	//m_wndSelect.Create(this, L"Thêm mới", CRect(5, 5, 75, 30));
	//AddResize(&m_wndHtml, 100, 100);
	m_wndFromDateLabel.Create(this, _T("From Date"), 265, 5, 345, 30);
	m_wndFromDate.Create(this, 350, 5, 470, 30);
	m_wndToDateLabel.Create(this, _T("To Date"), 475, 5, 555, 30);
	m_wndToDate.Create(this, 560, 5, 680, 30);
	m_wndSearch.Create(this, _T("@"), 685, 5, 715, 30);
	m_wndAdd.Create(this, _T("Add"), 5, 520, 125, 545);
	m_wndEdit.Create(this, _T("Edit"), 130, 520, 250, 545);
	m_wndPrint.Create(this, _T("Print"), 255, 520, 375, 545);
	

	AddBottom(&m_wndAdd, 5, true);
	AddBottom(&m_wndEdit, 5, true);
	AddBottom(&m_wndPrint, 5, true);
}
void CHMSTreatmentExamineEx::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	m_wndSelect.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndSelect.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CHMSTreatmentExamineEx::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);

	m_wndSelect.SetEvent(WE_SELENDOK, _OnSelectSelendokFnc);
	//m_wndSelect.SetEvent(WE_SETFOCUS, _OnSelectSetfocusFnc);
	//m_wndSelect.SetEvent(WE_KILLFOCUS, _OnSelectKillfocusFnc);
	m_wndSelect.SetEvent(WE_SELCHANGE, _OnSelectSelectChangeFnc);
	m_wndSelect.SetEvent(WE_LOADDATA, _OnSelectLoadDataFnc);
	//m_wndSelect.SetEvent(WE_ADDNEW, _OnSelectAddNewFnc);

	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndSearch.SetEvent(WE_CLICK, _OnSearchSelectFnc);

	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T(" 00:00");
	m_szToDate += _T(" 23:59");
	UpdateData(false);

}
void CHMSTreatmentExamineEx::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndSelect.GetDlgCtrlID(), m_szSelectKey);
}
void CHMSTreatmentExamineEx::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSTreatmentExamineEx::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSTreatmentExamineEx::SetDefaultValues(){
	m_szWhere.Empty();
	m_szOrderBy.Empty();

}
int CHMSTreatmentExamineEx::SetMode(int nMode){
	int nOldMode = GetMode();
	CGuiView::SetMode(nMode);
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
			EnableButtons(TRUE, 0, 6, -1);
			SetDefaultValues();
			break;
	};
	UpdateData(FALSE);
	return nOldMode;
}
void CHMSTreatmentExamineEx::OnExamineListDblClick(){

} 
void CHMSTreatmentExamineEx::OnExamineListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();


} 
int CHMSTreatmentExamineEx::OnExamineListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return 0;
} 

#define COLOR_CAPTION RGB(64,128,192)
#define COLOR_GROUP RGB(225, 225, 225)
#define COLOR_GROUP1 RGB(192,192,255)
#define COLOR_GROUP2 RGB(192,192,255)

long CHMSTreatmentExamineEx::LoadTreatInfo(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szOrderBy;
	int nCount = 0;
	n_treatIDX=0;
	CRect rect;

	if (m_wndSelect.GetCurrent(0) == 6)
		szOrderBy.Format(_T(" ORDER BY hsie_date "));
	else
		szOrderBy.Format(_T(" ORDER BY hsie_date DESC "));
	
	szSQL.Format(_T("SELECT hsie_deptid as deptid, TO_CHAR(hsie_date, 'HH24:MI DD/MM/YYYY') as order_date, ") \
		_T(" get_username(hsie_doctor) as doctor, hsie_desc as description, hsie_para_res as para_res, ") \
		_T(" hsie_pulse as pulse, hsie_temperature as temperature, ") \
		_T(" HSIE_BLOODPRESSURE, HSIE_BLOODPRESSUREX, HSIE_BREATHINTERVAL, get_syssel_desc(hsie_diet, 'HMS_DIET_MODE') as diet, hsie_nurseassistance,hsie_idx  ") \
		_T(" FROM hms_siexam ") \
		//_T(" WHERE hsie_docno=%ld and hsie_refidx=%ld and nvl(hsie_type,'DT')='DT' ORDER BY hsie_idx DESC "), 
		_T(" WHERE hsie_docno=%ld and hsie_refidx=%ld and nvl(hsie_type,'DT')='DT' %s %s"),
		pMF->m_nDocumentNo, pMF->m_nRefIndex, m_szWhere, szOrderBy);
	nCount = rs.ExecSQL(szSQL);

	CString szDesc;
	CString tmpStr;
	CString szData, szDate;
	int cx = 0;
	std::string strHtml;
	utf8::ostream os;
	CRecord rsl(&pMF->m_db);
	CRecord rs2(&pMF->m_db);
	CRecord rsx(&pMF->m_db);
	CRecord rsPTTT(&pMF->m_db);



	dom::element el = m_wndHtml.Find(L"content");

	os << L"<tr height=\"25px\">";
	os << L"<td width=\"90px\" align=\"center\" ><b>" << L"NGÀY GIỜ" << L"</b></td>";
	os << L"<td width=\"40\%\" align=\"center\" ><b>" << L"DIỄN BIẾN CỦA BỆNH" << L"</b></td>";
	os << L"<td width=\"40\%\" align=\"center\" ><b>" << L"Y LỆNH" << L"</b></td>";
	os << L"</tr>";

	CString szYLenh;
	CString szDrugInfo;
	CString szDiet, szNurseAssistance;
	CString szDescription;
	CString szDrugAdvice;

	while(!rs.IsEOF()){ 
		szYLenh.Empty();
		szDrugInfo.Empty();
		szDiet.Empty();
		szNurseAssistance.Empty();

		rs.GetValue(_T("description"), szDesc);
		//if(!szDesc.IsEmpty())
		{
			rs.GetValue(_T("hsie_idx"),n_treatIDX);
			
			rs.GetValue(_T("order_date"), szData);
			szDate = szData;

			rs.GetValue(_T("deptid"), szData);
			//tmpStr.Format(_T("Khoa: %s"), szData);
			szDate.AppendFormat(L"<br/>Khoa: %s", szData);

			//rs.GetValue(_T("doctor"), szData);
			//tmpStr.Format(_T("Bác sĩ: %s"), szData);

			


			int pulse, bloodpreL, bloodpreH, breathInterval;
			float temperature;

			

			rs.GetValue(_T("pulse"), pulse);
			rs.GetValue(_T("temperature"), temperature);
			rs.GetValue(_T("HSIE_BLOODPRESSURE"), bloodpreL);
			rs.GetValue(_T("HSIE_BLOODPRESSUREX"), bloodpreH);
			rs.GetValue(_T("HSIE_BREATHINTERVAL"), breathInterval);
			rs.GetValue(_T("para_res"), szData);
			rs.GetValue(_T("diet"), szDiet);
			rs.GetValue(_T("hsie_nurseassistance"), szNurseAssistance);

			CString szFuncs;
			szFuncs.Empty();
			if(pulse > 0)
			{
				szFuncs.AppendFormat(_T("  M: %d;"), pulse);
			}
			if(temperature > 0)
			{
				szFuncs.AppendFormat(_T("  T<sup>o</sup>: %.1f<sup>o</sup>;"), temperature);
			}

			if(bloodpreL+bloodpreH > 0)
			{

				szFuncs.AppendFormat(_T("  HA: %d/%d;"), bloodpreL, bloodpreH);
			}
			if(breathInterval > 0)
			{
				szFuncs.AppendFormat(_T("  NT: %d"), breathInterval);
			}

			

			szDescription.Format(_T("<b><i>Diễn biến</i></b><br>%s"),szDesc);

			if(!szData.IsEmpty())
			{
				szDescription.AppendFormat(_T("<br><b><i>Kết quả cận lâm sàng</i></b><br><i>%s</i>"),szData);
			}


			if(!szFuncs.IsEmpty())
			{
				szDescription.AppendFormat(_T("<br><b><i>Chức năng sống</i></b><br>%s"), szFuncs);
			}


			szSQL.Format(_T(" SELECT hpo_storage_id            AS storage_id,") \
				_T("   hpo_transaction_id, ") \
				_T("   hpol_orderid                   AS order_id, TO_CHAR(hpo_createddate,'DD/MM/YYYY HH24:MI') as order_date, ") \
				_T("   hpo_orderstatus as status, ") \
				_T("   hpol_product_id                AS product_id,") \
				_T("   hpol_line                      AS lineidx,") \
				_T("  mp_name AS drugname,") \
				_T("   get_uomname(mp_product_uom_id) AS unit,") \
				_T("   SUM(hpol_qtyorder)             AS qty,") \
				_T("   SUM(hpol_qtyissue)             AS qtyissue,") \
				_T("   hpou_dousage||' '||hpou_speed as dousage,mp_isoxy ") \
				_T(" FROM hms_ipharmaorder") \
				_T(" LEFT JOIN hms_ipharmaorderline") \
				_T(" ON(hpol_orderid = hpo_orderid)") \
				_T(" LEFT JOIN hms_ipharmaorder_usage") \
				_T(" ON(hpou_orderid     = hpol_orderid") \
				_T(" AND hpou_product_id = hpol_product_id)") \
				_T(" LEFT JOIN m_product") \
				_T(" ON(hpol_product_id = mp_product_id)") \
				_T(" WHERE hpo_docno    =%ld ") \
				_T(" AND hpo_treatidx   =%ld ") \
				_T(" GROUP BY hpo_storage_id,hpo_transaction_id, ") \
				_T("   hpol_orderid,hpo_createddate, ") \
				_T("   hpo_orderstatus,") \
				_T("   hpol_product_id,") \
				_T("   mp_name,") \
				_T("   hpol_line,") \
				_T("   mp_product_uom_id,") \
				_T("   hpou_dousage, hpou_speed ,mp_isoxy ") \
				_T(" ORDER BY hpo_storage_id, hpol_orderid, hpol_line,") \
				_T("   mp_name"), pMF->m_nDocumentNo, n_treatIDX);



			rsl.ExecSQL(szSQL);


			CString tmpStr;
			int nIndex = 1;
			long nOrderId, nProductId;
			int nStorageId, nOldStorageId=0;
			int nItem;




			szSQL.Format(_T("select hsie_drug_advice from hms_siexam ") \
				_T("where hsie_docno=%ld and hsie_idx=%ld and hsie_type='DT'"), pMF->m_nDocumentNo,n_treatIDX);
			rs2.ExecSQL(szSQL);
			szDrugAdvice.Empty();
			if(!rs2.IsEOF())
			{
				rs2.GetValue(_T("hsie_drug_advice"), szDrugAdvice);
			}
			if(!szDrugAdvice.IsEmpty())
			{

			}

			CString szStatus, szOrderDate;
			CString szTransactionNo;
			long nOldOrderId = 0;
			long nTransId;



			while(!rsl.IsEOF())
			{
				rsl.GetValue(_T("order_id"), nOrderId);
				rsl.GetValue(_T("order_date"), szOrderDate);
				rsl.GetValue(_T("product_id"), nProductId);
				rsl.GetValue(_T("storage_id"), nStorageId);
				rsl.GetValue(_T("status"), szStatus);
				rsl.GetValue(_T("hpo_transaction_id"), nTransId);
				if(nStorageId != nOldStorageId || nOldOrderId != nOrderId)
				{
					szSQL.Format(_T("SELECT msl_name FROM  m_storagelist WHERE msl_storage_id=%d"), nStorageId);
					rsx.ExecSQL(szSQL);
					rsx.GetValue(_T("msl_name"), tmpStr);
					szTransactionNo.Empty();
					if(nTransId > 0) 
					{
						szSQL.Format(_T("SELECT mt_orderno FROM  m_transaction WHERE mt_transaction_id=%d"), nTransId);
						rsx.ExecSQL(szSQL);
						rsx.GetValue(_T("mt_orderno"), szTransactionNo);

					}
					if(!szTransactionNo.IsEmpty())
					{
						tmpStr.AppendFormat(_T("; Số phiếu [%s-%ld]; Ngày giời tạo [%s] Trạng thái [%s]"), szTransactionNo, nOrderId, szOrderDate, szStatus);
					}
					else
						tmpStr.AppendFormat(_T("; Số phiếu[%ld]; Ngày giời tạo [%s] Trạng thái [%s]"), nOrderId, szOrderDate, szStatus);

					nOldStorageId = nStorageId;
					nOldOrderId = nOrderId;

				}

				//				szDrugInfo.AppendFormat(_T("%s"), tmpStr);
				if(!szDrugInfo.IsEmpty())
					szDrugInfo.AppendFormat(_T("<br>"));
				rsl.GetValue(_T("drugname"), tmpStr);
				szDrugInfo.AppendFormat(_T("%s"), tmpStr);
				rsl.GetValue(_T("qty"), tmpStr);
				szDrugInfo.AppendFormat(_T(" x %0.f"), str2float(tmpStr));

				rsl.GetValue(_T("unit"), tmpStr);
				if(!tmpStr.IsEmpty())
					szDrugInfo.AppendFormat(_T(" /%s"), tmpStr); 

				rsl.GetValue(_T("dousage"), tmpStr);
				if(!tmpStr.IsEmpty())
				{
					szDrugInfo.AppendFormat(_T("<br><i>%s</i>"), tmpStr);
				}
				rsl.MoveNext();
			}

			//LoadDrugList(n_treatIDX);

			rs.MoveNext();
		}

		szYLenh.AppendFormat(_T("%s"), szDrugInfo);




		szSQL.Format(_T(" SELECT hpc_groupid,") \
			_T(" (SELECT hfg_name FROM hms_fee_group WHERE hfg_id = hpc_groupid) AS hfg_name,") \
			_T(" hfl_name ") \
			_T(" FROM hms_testorder") \
			_T(" LEFT JOIN hms_testorderline") \
			_T(" ON(hpc_orderid = hpcl_orderid)") \
			_T(" LEFT JOIN hms_fee_list") \
			_T(" ON(hfl_feeid = hpcl_itemid)") \
			_T(" WHERE hpcl_hasfee = 'Y'") \
			_T(" AND hpc_docno = %ld") \
			_T(" AND hpc_treatidx = %ld") \
			_T(" UNION ALL") \
			_T(" SELECT hpc_groupid,") \
			_T(" (SELECT hfg_name FROM hms_fee_group WHERE hfg_id = hpc_groupid) AS hfg_name,") \
			_T(" hfl_name  ") \
			_T(" FROM hms_pacsorder") \
			_T(" LEFT JOIN hms_pacsorderline") \
			_T(" ON(hpc_orderid = hpcl_orderid)") \
			_T(" LEFT JOIN hms_fee_list") \
			_T(" ON(hfl_feeid = hpcl_itemid)") \
			_T(" WHERE hpcl_hasfee = 'Y'") \
			_T(" AND hpc_docno = %ld") \
			_T(" AND hpc_treatidx = %ld") \
			_T(" ORDER BY hpc_groupid, hfl_name"), pMF->m_nDocumentNo, n_treatIDX, pMF->m_nDocumentNo, n_treatIDX);

		int nCount = 0;
		CString szCLS, szNewLine, szOldLine;
		nCount = rsPTTT.ExecSQL(szSQL);
		if(nCount > 0)
		{
			szCLS.AppendFormat(_T("<br><br><b>Cận lâm sàng</b><br>"));
		}
		while (!rsPTTT.IsEOF())
		{
			rsPTTT.GetValue(_T("hfg_name"), szNewLine);
			if(szOldLine != szNewLine && !szNewLine.IsEmpty())
			{
				szCLS.AppendFormat(_T("<b><i>%s</i></b><br>"), szNewLine);
				szOldLine = szNewLine;
			}

			rsPTTT.GetValue(_T("hfl_name"), tmpStr);
			szCLS.AppendFormat(_T("%s <br>"), tmpStr);
			rsPTTT.MoveNext();
		}



		szSQL.Format(_T(" SELECT hfl_groupid,") \
			_T("   ho_idx,") \
			_T("   ho_orderdate,") \
			_T("   ho_status,") \
			_T("   ho_itemid,") \
			_T("   hfl_name AS ho_name,") \
			_T("   ho_deptid,") \
			_T("   ho_createdby,") \
			_T("   ho_hitech,") \
			_T("   ho_note, ho_comment") \
			_T(" FROM hms_operation") \
			_T(" LEFT JOIN hms_fee_list") \
			_T(" ON(ho_itemid                                                  =hfl_feeid)") \
			_T(" WHERE ho_docno                                                = %ld") \
			_T(" AND ho_treatidx                                               = %ld") \
			_T(" AND ((hfl_servprice+hfl_insprice+hfl_polprice + hfl_reqprice) > 0") \
			_T(" OR hms_fee_list.hfl_opt_ref                                   ='Y')") \
			_T(" ORDER BY ho_idx "), pMF->m_nDocumentNo, n_treatIDX);

		nCount = 0;
		nCount = rsPTTT.ExecSQL(szSQL);
		CString szOperation;
		if(nCount > 0)
			szOperation.AppendFormat(_T("<br><br><b><i>Phẫu thuật thủ thuật:</i></b>"));

		while (!rsPTTT.IsEOF())
		{
			rsPTTT.GetValue(_T("ho_name"), tmpStr);
			szOperation.AppendFormat(_T("<br>%s"), tmpStr);

			rsPTTT.GetValue(_T("ho_comment"), tmpStr);
			if(!tmpStr.IsEmpty())
				szOperation.AppendFormat(_T("<br><i>%s</i>"), tmpStr);
			rsPTTT.MoveNext();
		}

		szYLenh.AppendFormat(_T("%s"), szCLS);
		szYLenh.AppendFormat(_T("%s"), szOperation);

		if(!szDiet.IsEmpty() || !szNurseAssistance.IsEmpty())
		{
			if(!szNurseAssistance.IsEmpty())
			{
				if(!szDiet.IsEmpty())
					szDiet.AppendFormat(_T("<br>"));
				szDiet.AppendFormat(_T("%s"), szNurseAssistance);
			}
			if(!szDiet.IsEmpty())
				szYLenh.AppendFormat(_T("<br><br>"));
			szYLenh.AppendFormat(_T("<b><i>Chế độ ăn và hộ lý</i></b><br>%s"), szDiet);
		}


		szDescription.Replace(_T("\r\n"), _T("<br>"));
		szYLenh.Replace(_T("\r\n"), _T("<br>"));
		if(!szDrugAdvice.IsEmpty())
		{
			szDescription.AppendFormat(_T("<br><br><b>Mệnh lệnh điều trị</b><br>%s"), szDrugAdvice);
		}


		os << L"<tr>";
		os << L"<td width=\"100px%\" align=\"left\">" << szDate << L"</td>";
		os << L"<td width=\"40\%\" align=\"left\">" << szDescription << L"</td>";
		os << L"<td width=\"40\%\" align=\"left\">" << szYLenh << L"</td>";
		os << L"</tr>";



	}
	el.set_html(os.data(), os.length());
	el.update();
	m_wndHtml.RedrawWindow();

	
	return nCount;

}

long CHMSTreatmentExamineEx::OnExamineListLoadData(){
	//Dung phieu html
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndHtml.LoadData(pMF->m_nDocumentNo, pMF->m_nRefIndex, m_szWhere, m_szOrderBy);

	return 0;

}


int CHMSTreatmentExamineEx::OnAddHMSTreatmentExamineEx(){
	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
		return -1;
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	SetMode(VM_ADD);
	return 0;
}
int CHMSTreatmentExamineEx::OnEditHMSTreatmentExamineEx(){
	if(GetMode() != VM_VIEW)
		return -1;
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	SetMode(VM_EDIT);
	return 0;  
}
int CHMSTreatmentExamineEx::OnDeleteHMSTreatmentExamineEx(){
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
		OnCancelHMSTreatmentExamineEx();
	}
	return 0;
}
int CHMSTreatmentExamineEx::OnSaveHMSTreatmentExamineEx(){
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
		//OnHMSTreatmentExamineExListLoadData();
		SetMode(VM_VIEW);
	}
	else
	{
	}
	return ret;
	return 0;
}
int CHMSTreatmentExamineEx::OnCancelHMSTreatmentExamineEx(){
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
int CHMSTreatmentExamineEx::OnHMSTreatmentExamineExListLoadData(){
	return 0;
}


void CHMSTreatmentExamineEx::RefreshData()
{
	AfxGetApp()->BeginWaitCursor();
	m_wndHtml.Load(L"./HTML/DT_BENHTRINH.HTML");
	OnExamineListLoadData();
	LoadTreatInfo();
	AfxGetApp()->EndWaitCursor();
}


void CHMSTreatmentExamineEx::OnSize(UINT nType, int cx, int cy)
{
	CGuiView::OnSize(nType, cx, cy);
	CRect rect;
	m_nListWidth = rect.Width();
	GetClientRect(&rect);
	if (m_wndHtml.GetSafeHwnd())
	{
		rect.top += 35;
		rect.bottom -= 50;
		m_wndHtml.MoveWindow(rect);
	}
	
}




CHTMLBenhtrinh::CHTMLBenhtrinh(){
}

CHTMLBenhtrinh::~CHTMLBenhtrinh(){
}

void CHTMLBenhtrinh::LoadData(long nDocNo, long nTreatIdx, CString szWhere, CString szOrderBy){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	int nCount = 0;
	CRect rect;
	if (!GetSafeHwnd() || !IsWindowVisible())
		return;

	
	SetValue(L"HEALTH_SERVICE", pMF->m_CompanyInfo.sc_pname);
	SetValue(L"HOSPITAL_NAME", pMF->m_CompanyInfo.sc_name);

	SetValue(L"PATIENT_NAME", pMF->m_wndPatientDocument.m_szPatientName);
	SetValue(L"YOB", pMF->m_wndPatientDocument.m_szBirthDate);
	SetValue(L"GENDER", pMF->m_wndPatientDocument.m_szSex);
	SetValue(L"DIAGNOSTIC", pMF->m_wndPatientDocument.m_szMainDiseaseDiagnostic);
	


	szSQL.Format(_T("SELECT hsie_deptid as deptid, TO_CHAR(hsie_date, 'HH24:MI DD/MM/YYYY') as order_date, ") \
		_T(" get_username(hsie_doctor) as doctor, hsie_desc as description, hsie_para_res as para_res, ") \
		_T(" hsie_pulse as pulse, hsie_temperature as temperature, ") \
		_T(" HSIE_BLOODPRESSURE, HSIE_BLOODPRESSUREX, HSIE_BREATHINTERVAL, get_syssel_desc(hsie_diet, 'HMS_DIET_MODE') as diet, hsie_nurseassistance,hsie_idx  ") \
		_T(" FROM hms_siexam ") \
		_T(" WHERE hsie_docno=%ld and hsie_refidx=%ld and nvl(hsie_type,'DT')='DT' %s %s "), 
		nDocNo, nTreatIdx, szWhere, szOrderBy);
	_tprintf(L"\r\n-------------%s \r\n-------------", szSQL);
	nCount = rs.ExecSQL(szSQL);

	CString szDesc;
	CString tmpStr;
	CString szData, szDate;
	int cx = 0;
	std::string strHtml;
	utf8::ostream os;
	CRecord rsl(&pMF->m_db);
	CRecord rs2(&pMF->m_db);
	CRecord rsx(&pMF->m_db);
	CRecord rsPTTT(&pMF->m_db);



	dom::element el = this->Find(L"content");

	os << L"<tr height=\"25px\">";
	os << L"<td width=\"90px\" align=\"center\" ><b>" << L"NGÀY GIỜ" << L"</b></td>";
	os << L"<td width=\"40\%\" align=\"center\" ><b>" << L"DIỄN BIẾN CỦA BỆNH" << L"</b></td>";
	os << L"<td width=\"40\%\" align=\"center\" ><b>" << L"Y LỆNH" << L"</b></td>";
	os << L"</tr>";

	CString szYLenh;
	CString szDrugInfo;
	CString szDiet, szNurseAssistance;
	CString szDescription;
	CString szDrugAdvice;

	while(!rs.IsEOF()){ 
		szYLenh.Empty();
		szDrugInfo.Empty();
		szDiet.Empty();
		szNurseAssistance.Empty();

		rs.GetValue(_T("description"), szDesc);
		//if(!szDesc.IsEmpty())
		{
			rs.GetValue(_T("hsie_idx"), nTreatIdx);
			rs.GetValue(_T("deptid"), szData);
			tmpStr.Format(_T("Khoa: %s"), szData);
			rs.GetValue(_T("order_date"), szData);
			szDate = szData;
			tmpStr.Format(_T("Ngày: %s"), szData);

			rs.GetValue(_T("doctor"), szData);
			tmpStr.Format(_T("Bác sĩ: %s"), szData);

			int pulse, bloodpreL, bloodpreH, breathInterval;
			float temperature;


			rs.GetValue(_T("pulse"), pulse);
			rs.GetValue(_T("temperature"), temperature);
			rs.GetValue(_T("HSIE_BLOODPRESSURE"), bloodpreL);
			rs.GetValue(_T("HSIE_BLOODPRESSUREX"), bloodpreH);
			rs.GetValue(_T("HSIE_BREATHINTERVAL"), breathInterval);
			rs.GetValue(_T("para_res"), szData);
			rs.GetValue(_T("diet"), szDiet);
			rs.GetValue(_T("hsie_nurseassistance"), szNurseAssistance);

			CString szFuncs;
			szFuncs.Empty();
			if(pulse > 0)
			{
				szFuncs.AppendFormat(_T("  M: %d;"), pulse);
			}
			if(temperature > 0)
			{
				szFuncs.AppendFormat(_T("  T<sup>o</sup>: %.1f<sup>o</sup>;"), temperature);
			}

			if(bloodpreL+bloodpreH > 0)
			{

				szFuncs.AppendFormat(_T("  HA: %d/%d;"), bloodpreL, bloodpreH);
			}
			if(breathInterval > 0)
			{
				szFuncs.AppendFormat(_T("  NT: %d"), breathInterval);
			}

			szDescription.Format(_T("<b><i>Diễn biến</i></b><br>%s"),szDesc);

			if(!szData.IsEmpty())
			{
				szDescription.AppendFormat(_T("<br><b><i>Kết quả cận lâm sàng</i></b><br><i>%s</i>"),szData);
			}


			if(!szFuncs.IsEmpty())
			{
				szDescription.AppendFormat(_T("<br><b><i>Chức năng sống</i></b><br>%s"), szFuncs);
			}


			szSQL.Format(_T(" SELECT hpo_storage_id            AS storage_id,") \
				_T("   hpo_transaction_id, ") \
				_T("   hpol_orderid                   AS order_id, TO_CHAR(hpo_createddate,'DD/MM/YYYY HH24:MI') as order_date, ") \
				_T("   hpo_orderstatus as status, ") \
				_T("   hpol_product_id                AS product_id,") \
				_T("   hpol_line                      AS lineidx,") \
				_T("   mp_name AS drugname,") \
				_T("   get_uomname(mp_product_uom_id) AS unit,") \
				_T("   SUM(hpol_qtyorder)             AS qty,") \
				_T("   SUM(hpol_qtyissue)             AS qtyissue,") \
				_T("   hpou_dousage||' '||hpou_speed as dousage,mp_isoxy ") \
				_T(" FROM hms_ipharmaorder") \
				_T(" LEFT JOIN hms_ipharmaorderline") \
				_T(" ON(hpol_orderid = hpo_orderid)") \
				_T(" LEFT JOIN hms_ipharmaorder_usage") \
				_T(" ON(hpou_orderid     = hpol_orderid") \
				_T(" AND hpou_product_id = hpol_product_id)") \
				_T(" LEFT JOIN m_product") \
				_T(" ON(hpol_product_id = mp_product_id)") \
				_T(" WHERE hpo_docno    =%ld ") \
				_T(" AND hpo_treatidx   =%ld ") \
				_T(" GROUP BY hpo_storage_id,hpo_transaction_id, ") \
				_T("   hpol_orderid,hpo_createddate, ") \
				_T("   hpo_orderstatus,") \
				_T("   hpol_product_id,") \
				_T("   mp_name,") \
				_T("   hpol_line,") \
				_T("   mp_product_uom_id,") \
				_T("   hpou_dousage, hpou_speed ,mp_isoxy ") \
				_T(" ORDER BY hpo_storage_id, hpol_orderid, hpol_line,") \
				_T("   mp_name"), nDocNo, nTreatIdx);



			rsl.ExecSQL(szSQL);


			CString tmpStr;
			int nIndex = 1;
			long nOrderId, nProductId;
			int nStorageId, nOldStorageId=0;
			int nItem;




			szSQL.Format(_T("select hsie_drug_advice from hms_siexam ") \
				_T("where hsie_docno=%ld and hsie_idx=%ld and hsie_type='DT'"),
				nDocNo, nTreatIdx);
			rs2.ExecSQL(szSQL);
			szDrugAdvice.Empty();
			if(!rs2.IsEOF())
			{
				rs2.GetValue(_T("hsie_drug_advice"), szDrugAdvice);
			}
			if(!szDrugAdvice.IsEmpty())
			{

			}

			CString szStatus, szOrderDate;
			CString szTransactionNo;
			long nOldOrderId = 0;
			long nTransId;



			while(!rsl.IsEOF())
			{
				rsl.GetValue(_T("order_id"), nOrderId);
				rsl.GetValue(_T("order_date"), szOrderDate);
				rsl.GetValue(_T("product_id"), nProductId);
				rsl.GetValue(_T("storage_id"), nStorageId);
				rsl.GetValue(_T("status"), szStatus);
				rsl.GetValue(_T("hpo_transaction_id"), nTransId);
				if(nStorageId != nOldStorageId || nOldOrderId != nOrderId)
				{
					szSQL.Format(_T("SELECT msl_name FROM  m_storagelist WHERE msl_storage_id=%d"), nStorageId);
					rsx.ExecSQL(szSQL);
					rsx.GetValue(_T("msl_name"), tmpStr);
					szTransactionNo.Empty();
					if(nTransId > 0) 
					{
						szSQL.Format(_T("SELECT mt_orderno FROM  m_transaction WHERE mt_transaction_id=%d"), nTransId);
						rsx.ExecSQL(szSQL);
						rsx.GetValue(_T("mt_orderno"), szTransactionNo);

					}
					if(!szTransactionNo.IsEmpty())
					{
						tmpStr.AppendFormat(_T("; Số phiếu [%s-%ld]; Ngày giời tạo [%s] Trạng thái [%s]"), szTransactionNo, nOrderId, szOrderDate, szStatus);
					}
					else
						tmpStr.AppendFormat(_T("; Số phiếu[%ld]; Ngày giời tạo [%s] Trạng thái [%s]"), nOrderId, szOrderDate, szStatus);

					nOldStorageId = nStorageId;
					nOldOrderId = nOrderId;

				}

				//				szDrugInfo.AppendFormat(_T("%s"), tmpStr);
				if(!szDrugInfo.IsEmpty())
					szDrugInfo.AppendFormat(_T("<br>"));
				rsl.GetValue(_T("drugname"), tmpStr);
				szDrugInfo.AppendFormat(_T("%s"), tmpStr);
				rsl.GetValue(_T("qty"), tmpStr);
				szDrugInfo.AppendFormat(_T(" x %0.f"), str2float(tmpStr));

				rsl.GetValue(_T("unit"), tmpStr);
				if(!tmpStr.IsEmpty())
					szDrugInfo.AppendFormat(_T(" /%s"), tmpStr); 

				rsl.GetValue(_T("dousage"), tmpStr);
				if(!tmpStr.IsEmpty())
				{
					szDrugInfo.AppendFormat(_T("<br><i>%s</i>"), tmpStr);
				}
				rsl.MoveNext();
			}

			//LoadDrugList(n_treatIDX);

			rs.MoveNext();
		}

		szYLenh.AppendFormat(_T("%s"), szDrugInfo);




		szSQL.Format(_T(" SELECT hpc_groupid,") \
			_T(" (SELECT hfg_name FROM hms_fee_group WHERE hfg_id = hpc_groupid) AS hfg_name,") \
			_T(" hfl_name ") \
			_T(" FROM hms_testorder") \
			_T(" LEFT JOIN hms_testorderline") \
			_T(" ON(hpc_orderid = hpcl_orderid)") \
			_T(" LEFT JOIN hms_fee_list") \
			_T(" ON(hfl_feeid = hpcl_itemid)") \
			_T(" WHERE hpcl_hasfee = 'Y'") \
			_T(" AND hpc_docno = %ld") \
			_T(" AND hpc_treatidx = %ld") \
			_T(" UNION ALL") \
			_T(" SELECT hpc_groupid,") \
			_T(" (SELECT hfg_name FROM hms_fee_group WHERE hfg_id = hpc_groupid) AS hfg_name,") \
			_T(" hfl_name  ") \
			_T(" FROM hms_pacsorder") \
			_T(" LEFT JOIN hms_pacsorderline") \
			_T(" ON(hpc_orderid = hpcl_orderid)") \
			_T(" LEFT JOIN hms_fee_list") \
			_T(" ON(hfl_feeid = hpcl_itemid)") \
			_T(" WHERE hpcl_hasfee = 'Y'") \
			_T(" AND hpc_docno = %ld") \
			_T(" AND hpc_treatidx = %ld") \
			_T(" ORDER BY hpc_groupid, hfl_name"), 
			nDocNo, nTreatIdx, nDocNo, nTreatIdx);

		int nCount = 0;
		CString szCLS, szNewLine, szOldLine;
		nCount = rsPTTT.ExecSQL(szSQL);
		if(nCount > 0)
		{
			szCLS.AppendFormat(_T("<br><br><b>Cận lâm sàng</b><br>"));
		}
		while (!rsPTTT.IsEOF())
		{
			rsPTTT.GetValue(_T("hfg_name"), szNewLine);
			if(szOldLine != szNewLine && !szNewLine.IsEmpty())
			{
				szCLS.AppendFormat(_T("<b><i>%s</i></b><br>"), szNewLine);
				szOldLine = szNewLine;
			}

			rsPTTT.GetValue(_T("hfl_name"), tmpStr);
			szCLS.AppendFormat(_T("%s <br>"), tmpStr);
			rsPTTT.MoveNext();
		}



		szSQL.Format(_T(" SELECT hfl_groupid,") \
			_T("   ho_idx,") \
			_T("   ho_orderdate,") \
			_T("   ho_status,") \
			_T("   ho_itemid,") \
			_T("   hfl_name AS ho_name,") \
			_T("   ho_deptid,") \
			_T("   ho_createdby,") \
			_T("   ho_hitech,") \
			_T("   ho_note, ho_comment") \
			_T(" FROM hms_operation") \
			_T(" LEFT JOIN hms_fee_list") \
			_T(" ON(ho_itemid                                                  =hfl_feeid)") \
			_T(" WHERE ho_docno                                                = %ld") \
			_T(" AND ho_treatidx                                               = %ld") \
			_T(" AND ((hfl_servprice+hfl_insprice+hfl_polprice + hfl_reqprice) > 0") \
			_T(" OR hms_fee_list.hfl_opt_ref                                   ='Y')") \
			_T(" ORDER BY ho_idx "), nDocNo, nTreatIdx);

		nCount = 0;
		nCount = rsPTTT.ExecSQL(szSQL);
		CString szOperation;
		if(nCount > 0)
			szOperation.AppendFormat(_T("<br><br><b><i>Phẫu thuật thủ thuật:</i></b>"));

		while (!rsPTTT.IsEOF())
		{
			rsPTTT.GetValue(_T("ho_name"), tmpStr);
			szOperation.AppendFormat(_T("<br>%s"), tmpStr);

			rsPTTT.GetValue(_T("ho_comment"), tmpStr);
			if(!tmpStr.IsEmpty())
				szOperation.AppendFormat(_T("<br><i>%s</i>"), tmpStr);
			rsPTTT.MoveNext();
		}

		szYLenh.AppendFormat(_T("%s"), szCLS);
		szYLenh.AppendFormat(_T("%s"), szOperation);

		if(!szDiet.IsEmpty() || !szNurseAssistance.IsEmpty())
		{
			if(!szNurseAssistance.IsEmpty())
			{
				if(!szDiet.IsEmpty())
					szDiet.AppendFormat(_T("<br>"));
				szDiet.AppendFormat(_T("%s"), szNurseAssistance);
			}
			if(!szDiet.IsEmpty())
				szYLenh.AppendFormat(_T("<br><br>"));
			szYLenh.AppendFormat(_T("<b><i>Chế độ ăn và hộ lý</i></b><br>%s"), szDiet);
		}


		szDescription.Replace(_T("\r\n"), _T("<br>"));
		szYLenh.Replace(_T("\r\n"), _T("<br>"));
		if(!szDrugAdvice.IsEmpty())
		{
			szDescription.AppendFormat(_T("<br><br><b>Mệnh lệnh điều trị</b><br>%s"), szDrugAdvice);
		}


		os << L"<tr>";
		os << L"<td width=\"100px%\" align=\"left\" >" << szDate << L"</td>";
		os << L"<td width=\"40\%\" align=\"left\" >" << szDescription << L"</td>";
		os << L"<td width=\"40\%\" align=\"left\" >" << szYLenh << L"</td>";
		os << L"</tr>";



	}
	el.set_html(os.data(), os.length());
	el.update();
	RedrawWindow();

	//	OnFilePrint();

}


void CHTMLBenhtrinh::OnPrint(CDC *pDC, CPrintInfo* pInfo){

	//In phan header
	int nPage = pInfo->m_nCurPage-1;

	if(nPage > 0)
	{
		utf8::ostream os;
		PrintEx printer;
		dom::element el;

		printer.load(m_szFile);
		dom::element root  = printer.getRootElement();

		el = Find(_T("PageHeader"));
		//os << "<body xmargin-left=\"1cm\" xmargin-right=\"1cm\" paper_size=\"A4\">";
		os << "<div name=\"PageHeader\">";
		int height = 0;
		if(nPage%2 == 0)
		{
			os << el.get_html().c_str();
//			height = el.get_intrinsic_height();
		}
		//os.clear();
		os << L"<table width=\"99%\"  name=\"content\">";
		os << L"<tr height=\"25px\">";
		os << L"<td width=\"98px\" align=\"center\" ><b>" << L"NGÀY GIỜ" << L"</b></td>";
		os << L"<td width=\"45\%\" align=\"center\" ><b>" << L"DIỄN BIẾN CỦA BỆNH" << L"</b></td>";
		os << L"<td width=\"45\%\" align=\"center\" ><b>" << L"Y LỆNH" << L"</b></td>";
		os << L"</tr>";
		os << L"</table>";
//		height += 30;
		os << "</div>";
		//os << "</body>";
		
		dom::element body = root.find_first("body", L"PageHeader");
		body.set_html(os.data(), os.length());
		body.update();
		
		printf("%s", os.data());

		printer.measure(pDC->GetSafeHdc(), m_scaled_width, m_rcPrintArea.Width(), m_rcPrintArea.Height());
		printer.render(pDC->GetSafeHdc(), m_rcPrintArea.left-45, m_rcPrintArea.top, 0);
		
		root = printer.getRootElement();
		el = root.find_first("[name='%S']",L"PageHeader"); 
		CRect rc = el.get_location();
		height = rc.Height();
		printf("\r\n%d", height);
		m_offsetY = height;
	}
	CHTMLayoutCtrl::OnPrint(pDC, pInfo);
}


void CHTMLBenhtrinh::PrintPreview()
{
	CReport rpt;
	CHTMLBenhtrinh* pBenhtrinh = new CHTMLBenhtrinh();
	pBenhtrinh->Load(m_szFile);
	rpt.Init(pBenhtrinh);
	dom::element root = pBenhtrinh->GetRootElement();
	dom::element rootBase = this->GetRootElement();
	utf8::ostream os;
	os << rootBase.get_html().c_str();
	root.set_html(os.data(), os.length());
	root.update();
	rpt.PrintPreview();


}
void CHMSTreatmentExamineEx::OnSelectSelectChange(int nOldItemSel, int nNewItemSel) {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	
	int nIdx = ToInt(m_wndSelect.GetCurrent(0));
	int nDayOfWeek, nYear, nMonth, nextMonth, nextYear; // Move declaration outside switch
	CTime dtCurrent, dtStart, dtEnd, endOfMonth, startOfMonth, firstDayNextMonth;
	//_msg(L"%d", nIdx);
	switch (nIdx)
	{
		case 1:
			m_szWhere.Empty();
			break;
		case 2:
			m_szWhere.Format(_T(" AND hsie_date BETWEEN to_timestamp('%s 00:00:00','yyyy/mm/dd hh24:mi:ss') ") \
				_T(" AND to_timestamp('%s 23:59:59', 'yyyy/mm/dd hh24:mi:ss')"), pMF->GetSysDate(), pMF->GetSysDate());
			break;
		case 3:
			dtCurrent = CTime::GetCurrentTime();
			nDayOfWeek = dtCurrent.GetDayOfWeek(); // 1 = Sunday, 2 = Monday, ..., 7 = Saturday

			// Điều chỉnh để lấy thứ 2 là ngày đầu tuần
			if (nDayOfWeek == 1) nDayOfWeek = 8;

			dtStart = dtCurrent - CTimeSpan(nDayOfWeek - 2, 0, 0, 0);
			dtEnd = dtStart + CTimeSpan(6, 0, 0, 0);

			m_szWhere.Format(_T(" AND hsie_date BETWEEN to_timestamp('%s 00:00:00','yyyy/mm/dd hh24:mi:ss') ") \
				_T(" AND to_timestamp('%s 23:59:59', 'yyyy/mm/dd hh24:mi:ss')"), dtStart.Format(_T("%Y/%m/%d")), dtEnd.Format(_T("%Y/%m/%d")));
			break;
		case 4:
			// Lấy ngày hiện tại
			dtCurrent = CTime::GetCurrentTime();
			nDayOfWeek = dtCurrent.GetDayOfWeek(); // 1 = Chủ Nhật, 2 = Thứ Hai, ..., 7 = Thứ Bảy

			// ---- TÍNH KHOẢNG THỜI GIAN TRONG THÁNG ----
			nYear = dtCurrent.GetYear();
			nMonth = dtCurrent.GetMonth();

			// Ngày đầu tháng
			startOfMonth = CTime(nYear, nMonth, 1, 0, 0, 0);

			// Ngày cuối tháng (Lấy ngày đầu tháng của tháng sau - 1 ngày)
			nextMonth = (nMonth == 12) ? 1 : (nMonth + 1);
			nextYear = (nMonth == 12) ? (nYear + 1) : nYear;
			firstDayNextMonth = CTime(nextYear, nextMonth, 1, 0, 0, 0);
			endOfMonth = firstDayNextMonth - CTimeSpan(1, 0, 0, 0);

		
			m_szWhere.Format(_T(" AND hsie_date BETWEEN to_timestamp('%s 00:00:00','yyyy/mm/dd hh24:mi:ss') ") \
				_T(" AND to_timestamp('%s 23:59:59', 'yyyy/mm/dd hh24:mi:ss')"), startOfMonth.Format(_T("%Y/%m/%d")), endOfMonth.Format(_T("%Y/%m/%d")));
			break;
		case 5:
			break;
		case 6:
			m_szOrderBy.Format(_T(" ORDER BY hsie_idx"));
			break;
		case 7:
			m_szOrderBy.Format(_T(" ORDER BY hsie_idx DESC"));
			break;
	}
	m_wndHtml.LoadData(pMF->m_nDocumentNo, pMF->m_nRefIndex, m_szWhere, m_szOrderBy);
}
void CHMSTreatmentExamineEx::OnSelectSelendok() {

}
/*void CHMSTreatmentExamineEx::OnSelectSetfocus(){

}*/
/*void CHMSTreatmentExamineEx::OnSelectKillfocus(){

}*/
long CHMSTreatmentExamineEx::OnSelectLoadData() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if (m_wndSelect.IsSearchKey() && !m_szSelectKey.IsEmpty()) {
		szWhere.Format(_T(" AND ss_code='%s' "), m_szSelectKey);
	};

	m_wndSelect.DeleteAllItems();
	int nCount = 0;
	szSQL.Format(_T("SELECT * FROM sys_sel WHERE ss_id = 'option_examcare' %s ORDER BY ss_code"), szWhere);

	nCount = rs.ExecSQL(szSQL);
	while (!rs.IsEOF()) {
		m_wndSelect.AddItems(
			rs.GetValue(_T("ss_code")),
			rs.GetValue(_T("ss_desc")),
			NULL);
		rs.MoveNext();
	}
	return nCount;
	//option_examcare
	return 0;
}
/*void CHMSTreatmentExamineEx::OnSelectAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

} */

/*void CHMSTreatmentExamineEx::OnFromDateChange(){

} */
/*void CHMSTreatmentExamineEx::OnFromDateSetfocus(){

} */
/*void CHMSTreatmentExamineEx::OnFromDateKillfocus(){

} */
int CHMSTreatmentExamineEx::OnFromDateCheckValue() {
	return 0;
}
void CHMSTreatmentExamineEx::OnToDateChange(){
	//UpdateData(false);
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	
	
} 
/*void CHMSTreatmentExamineEx::OnToDateSetfocus(){

} */
void CHMSTreatmentExamineEx::OnToDateKillfocus(){
	
} 
int CHMSTreatmentExamineEx::OnToDateCheckValue() {
	return 0;
}

void CHMSTreatmentExamineEx::OnAddSelect() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	((CHMSPatientDocument*)m_pWndBenhTrinh)->OnTreatmentTrackingSelect();
}
void CHMSTreatmentExamineEx::OnEditSelect() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	((CHMSPatientDocument*)m_pWndBenhTrinh)->OnTreatmentTrackingSelect();
}
#include "HMSReportForms/PrintForms.h"
void CHMSTreatmentExamineEx::OnPrintSelect() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CPrintForms printer;
	//_msg(L"%d", pMF->m_nTreatIdx);
	//printer.TM_OnPrintBenhTrinhDieuTriHoLy(pMF->m_nDocumentNo, pMF->m_nTreatIdx);
	m_wndHtml.PrintPreview();
}
void CHMSTreatmentExamineEx::OnSearchSelect() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	UpdateData(FALSE);
	m_szWhere.Format(_T(" AND hsie_date BETWEEN to_timestamp('%s','yyyy/mm/dd hh24:mi:ss') ") \
		_T(" AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')"), m_szFromDate, m_szToDate);
	m_wndHtml.LoadData(pMF->m_nDocumentNo, pMF->m_nRefIndex, m_szWhere, m_szOrderBy);
}