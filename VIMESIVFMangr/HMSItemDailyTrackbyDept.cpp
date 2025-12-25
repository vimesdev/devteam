#include "HMSItemDailyTrackbyDept.h"
#include "MainFrm.h"
static void _OnDeptSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSItemDailyTrackbyDept* )pWnd)->OnDeptSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDeptSelendokFnc(CWnd *pWnd){
	((CHMSItemDailyTrackbyDept *)pWnd)->OnDeptSelendok();
}
/*static void _OnDeptSetfocusFnc(CWnd *pWnd){
	((CHMSItemDailyTrackbyDept *)pWnd)->OnDeptKillfocus();
}*/
/*static void _OnDeptKillfocusFnc(CWnd *pWnd){
	((CHMSItemDailyTrackbyDept *)pWnd)->OnDeptKillfocus();
}*/
static long _OnDeptLoadDataFnc(CWnd *pWnd){
	return ((CHMSItemDailyTrackbyDept *)pWnd)->OnDeptLoadData();
}
/*static void _OnDeptAddNewFnc(CWnd *pWnd){
	((CHMSItemDailyTrackbyDept *)pWnd)->OnDeptAddNew();
}*/
static void _OnDrugSelectFnc(CWnd *pWnd){
	  ((CHMSItemDailyTrackbyDept*)pWnd)->OnDrugSelect();
}
static void _OnMaterialSelectFnc(CWnd *pWnd){
	  ((CHMSItemDailyTrackbyDept*)pWnd)->OnMaterialSelect();
}
static void _OnPrintSelectFnc(CWnd *pWnd){
	CHMSItemDailyTrackbyDept *pVw = (CHMSItemDailyTrackbyDept *)pWnd;
	pVw->OnPrintSelect();
} 
static int _OnAddHMSItemDailyTrackbyDeptFnc(CWnd *pWnd){
	 return ((CHMSItemDailyTrackbyDept*)pWnd)->OnAddHMSItemDailyTrackbyDept();
} 
static int _OnEditHMSItemDailyTrackbyDeptFnc(CWnd *pWnd){
	 return ((CHMSItemDailyTrackbyDept*)pWnd)->OnEditHMSItemDailyTrackbyDept();
} 
static int _OnDeleteHMSItemDailyTrackbyDeptFnc(CWnd *pWnd){
	 return ((CHMSItemDailyTrackbyDept*)pWnd)->OnDeleteHMSItemDailyTrackbyDept();
} 
static int _OnSaveHMSItemDailyTrackbyDeptFnc(CWnd *pWnd){
	 return ((CHMSItemDailyTrackbyDept*)pWnd)->OnSaveHMSItemDailyTrackbyDept();
} 
static int _OnCancelHMSItemDailyTrackbyDeptFnc(CWnd *pWnd){
	 return ((CHMSItemDailyTrackbyDept*)pWnd)->OnCancelHMSItemDailyTrackbyDept();
} 
CHMSItemDailyTrackbyDept::CHMSItemDailyTrackbyDept(CWnd *pParent, long nDocNo):
	CGuiDialog(pParent){
	m_nDocNo = nDocNo;
	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	m_bInPatient = true;
	SetDefaultValues();
}
CHMSItemDailyTrackbyDept::~CHMSItemDailyTrackbyDept(){
}
void CHMSItemDailyTrackbyDept::OnCreateComponents(){
	m_wndDrugDailyTrack.Create(this, _T("Drug Daily Track"), 5, 5, 335, 25);
	m_wndDeptLabel.Create(this, _T("Dept"), 5, 30, 85, 55);
	m_wndDept.Create(this,90, 30, 335, 55); 
	m_wndDrug.Create(this, _T("Drug"), 5, 60, 85, 85);
	m_wndMaterial.Create(this, _T("Material"), 90, 60, 170, 85);
	m_wndPrint.Create(this, _T("&Print"), 255, 60, 335, 85);

}
void CHMSItemDailyTrackbyDept::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndDept.SetCheckValue(true);
	m_wndDept.LimitText(35);


	m_wndDept.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDept.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);
	m_wndDept.InsertColumn(2, _T("Type"), CFMT_TEXT, 0);

}
void CHMSItemDailyTrackbyDept::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndDept.SetEvent(WE_SELENDOK, _OnDeptSelendokFnc);
	//m_wndDept.SetEvent(WE_SETFOCUS, _OnDeptSetfocusFnc);
	//m_wndDept.SetEvent(WE_KILLFOCUS, _OnDeptKillfocusFnc);
	m_wndDept.SetEvent(WE_SELCHANGE, _OnDeptSelectChangeFnc);
	m_wndDept.SetEvent(WE_LOADDATA, _OnDeptLoadDataFnc);
	//m_wndDept.SetEvent(WE_ADDNEW, _OnDeptAddNewFnc);
	m_wndDrug.SetEvent(WE_CLICK, _OnDrugSelectFnc);
	m_wndMaterial.SetEvent(WE_CLICK, _OnMaterialSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	SetMode(VM_NONE);

}
void CHMSItemDailyTrackbyDept::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndDept.GetDlgCtrlID(), m_szDeptKey);
	DDX_Radio(pDX, m_wndDrug.GetDlgCtrlID(), m_nDrug);
	DDX_Radio(pDX, m_wndMaterial.GetDlgCtrlID(), m_nMaterial);

}
void CHMSItemDailyTrackbyDept::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSItemDailyTrackbyDept::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSItemDailyTrackbyDept::SetDefaultValues(){

	m_szDeptKey.Empty();
	m_nDrug=0;
	m_nMaterial=1;

}
int CHMSItemDailyTrackbyDept::SetMode(int nMode){
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
 			EnableButtons(TRUE, 0, 6, -1);
 			SetDefaultValues();
 			break;
 		};
 		UpdateData(FALSE);
		m_wndDept.EnableWindow(true);
 		return nOldMode;
}
void CHMSItemDailyTrackbyDept::OnDeptSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSItemDailyTrackbyDept::OnDeptSelendok(){
	 
}
/*void CHMSItemDailyTrackbyDept::OnDeptSetfocus(){
	
}*/
/*void CHMSItemDailyTrackbyDept::OnDeptKillfocus(){
	
}*/
long CHMSItemDailyTrackbyDept::OnDeptLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDept.IsSearchKey() && !m_szDeptKey.IsEmpty()){
		szWhere.Format(_T(" and hpo_deptid='%s' "), m_szDeptKey);
	}
	m_wndDept.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT distinct hpo_deptid as id, get_departmentname(hpo_deptid) as name, sd_type dept_type ") \
				 _T("FROM hms_pharmaorder_view ") \
				 _T("LEFT JOIN sys_dept ON (sd_id = hpo_deptid)") \
				 _T("WHERE hpo_orderstatus NOT IN ('O', 'C') AND hpo_org_id <> 'SMM' AND hpo_docno = %ld %s ") \
				 _T("ORDER BY id "), m_nDocNo, szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDept.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), 
			rs.GetValue(_T("dept_type")), 
			NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSItemDailyTrackbyDept::OnDeptAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSItemDailyTrackbyDept::OnDrugSelect(){
	
}
void CHMSItemDailyTrackbyDept::OnMaterialSelect(){
	
}
void CHMSItemDailyTrackbyDept::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString tmpStr;
	tmpStr = m_wndDept.GetCurrent(2);
	_debug(_T("%s"), tmpStr);
	if (tmpStr == _T("KB"))
		m_bInPatient = false;
	else
		m_bInPatient = true;
	OnPrintItemDailyTrackbyDept();
		
} 
int CHMSItemDailyTrackbyDept::OnAddHMSItemDailyTrackbyDept(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSItemDailyTrackbyDept::OnEditHMSItemDailyTrackbyDept(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSItemDailyTrackbyDept::OnDeleteHMSItemDailyTrackbyDept(){
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
 		OnCancelHMSItemDailyTrackbyDept();
 	}
	return 0;
}
int CHMSItemDailyTrackbyDept::OnSaveHMSItemDailyTrackbyDept(){
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
 		//OnHMSItemDailyTrackbyDeptListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSItemDailyTrackbyDept::OnCancelHMSItemDailyTrackbyDept(){
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
int CHMSItemDailyTrackbyDept::OnHMSItemDailyTrackbyDeptListLoadData(){
	return 0;
}

//typedef struct  tagColum
//{
//	CString szDate;
//	int nIndex;
//}DAYCOLUMN;
//
//typedef struct tagDrug
//{
//	CString szItemID;
//	double nTotal;
//	int nMaxIdx;
//}DRUGITEM;

void CHMSItemDailyTrackbyDept::OnPrintItemDailyTrackbyDept(){	
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CReport rpt;
	CRecord rsl(&pMF->m_db);
	CRecord rs(&pMF->m_db);
	CRecord rs1(&pMF->m_db);
	CRecord rsd(&pMF->m_db);
	CString tmpStr, szSQL, szWhere, szSysDate, szReportTitle;
	CString szTableName;
	UpdateData(true);
	
	if(!rpt.Init(_T("Reports/HMS/TM_NHATTRINHVACONGKHAITHUOC.RPT"),true) )
	{
		return;
	}
	
	
	if(m_nMaterial == 0)
		szWhere.AppendFormat(_T(" and product_org_id in ('GL', 'MA') "));

	if(m_nDrug == 0)
		szWhere.AppendFormat(_T(" and product_org_id in ('GL', 'PM') "));

	if (!m_szDeptKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND hpo_deptid = '%s'"), m_szDeptKey);

	if(m_bInPatient)
	{
		szSQL.Format(_T(" SELECT hcr_docno as docno,") \
					_T("    trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
					_T("    hms_getage( trunc_date(hd_admitdate), hp_birthdate) as age,") \
					_T(" 	extract(year from hp_birthdate) as yearofbirth,") \
					_T("    sys_sel_getname('sys_sex', hp_sex) as sex,") \
					_T("	hms_getobjectname(hd_object)                       AS object, ") \
					_T("    hcr_maindisease as diagnostic,") \
					_T("    trunc_date(hcr_admitdate) as admitdate,") \
					_T("    trunc_date(hcr_dischargedate) as dischargedate,") \
					_T("    htr_deptid,") \
					_T("    hb_roomid,") \
					_T("    hb_bedid,") \
					_T("    (SELECT sd_name FROM sys_dept WHERE htr_deptid=sd_id AND ROWNUM < 2) as deptname,") \
					_T("    hrl_name as roomname,") \
					_T("    hbl_name as bedname") \
					_T(" FROM hms_patient") \
					_T(" LEFT JOIN hms_doc") \
					_T(" ON(hd_patientno=hp_patientno)") \
					_T(" LEFT JOIN hms_clinical_record") \
					_T(" ON(hd_docno=hcr_docno)") \
					_T(" LEFT JOIN hms_treatment_record") \
					_T(" ON(htr_docno=hcr_docno)") \
					_T(" LEFT JOIN hms_bed") \
					_T(" ON(hb_docno  =hcr_docno") \
					_T(" AND hb_deptid=htr_deptid)") \
					_T(" LEFT JOIN hms_roomlist") \
					_T(" ON(hrl_deptid=hb_deptid") \
					_T(" AND hrl_id   =hb_roomid)") \
					_T(" LEFT JOIN hms_bedlist") \
					_T(" ON(hbl_deptid =hb_deptid") \
					_T(" AND hbl_roomid=hb_roomid") \
					_T(" AND hbl_id    =hb_bedid)") \
					_T(" WHERE hd_docno=%ld AND htr_deptid = '%s' "), m_nDocNo, m_szDeptKey);

		rs1.ExecSQL(szSQL);

//	_fmsg(_T("%s"), szSQL);		
			
		szSQL.Format(_T(" SELECT trunc_date(hpo_orderdate) as orderdate,") \
					_T("        hpol_product_id as itemid") \
					_T(" FROM hms_patient") \
					_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
					_T(" LEFT JOIN hms_ipharmaorder ON(hpo_docno=hd_docno)") \
					_T(" LEFT JOIN hms_ipharmaorderline ON(hpol_docno=hpo_docno and hpol_orderid=hpo_orderid)") \
					_T(" LEFT JOIN hms_treatment_record ON(htr_docno=hpo_docno AND htr_idx=hpo_refidx)") \
					_T(" LEFT JOIN m_productitem_view ON(product_item_id=hpol_product_item_id)") \
					_T(" WHERE hpo_docno=%ld and hpo_orderstatus in('S','I','A') AND hpol_qtyissue > 0") \
					_T(" AND hpo_org_id NOT IN('SMM') %s") \
					_T(" GROUP BY trunc_date(hpo_orderdate), hpol_product_id") \
					_T(" ORDER BY orderdate, itemid"), m_nDocNo, szWhere);
		rsl.ExecSQL(szSQL);

		szTableName = _T("hms_ipharmaorder");
	}
	else
	{
		szSQL.Format(_T(" SELECT hd_docno as docno,") \
				_T("    trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
				_T("    hms_getage( trunc_date(hd_admitdate), hp_birthdate) as age,") \
				_T(" 	extract(year from hp_birthdate) as yearofbirth,") \
				_T("    sys_sel_getname('sys_sex', hp_sex) as sex,") \
				_T("	hms_getobjectname(hd_object)                       AS object, ") \
				_T("    hd_diagnostic as diagnostic,") \
				_T("    trunc_date(hd_admitdate) as admitdate,") \
				_T("    trunc_date(hd_enddate) as dischargedate,") \
				_T("    hd_admitdept, ") \
				_T("    GET_DEPARTMENTNAME(hd_admitdept) as deptname ") \
				_T(" FROM hms_patient") \
				_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
				_T(" WHERE hd_docno=%ld"), m_nDocNo);

		rs1.ExecSQL(szSQL);

//	_fmsg(_T("%s"), szSQL);		
			
		szSQL.Format(_T(" SELECT trunc_date(hpo_orderdate) as orderdate,") \
					_T("        hpol_product_id as itemid") \
					_T(" FROM hms_patient") \
					_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
					_T(" LEFT JOIN hms_pharmaorder ON(hpo_docno=hd_docno)") \
					_T(" LEFT JOIN hms_pharmaorderline ON(hpol_docno=hpo_docno and hpol_orderid=hpo_orderid)") \
					_T(" LEFT JOIN m_productitem_view ON(product_item_id=hpol_product_item_id)") \
					_T(" WHERE hpo_docno=%ld and hpo_orderstatus in('S','I','A') AND hpol_qtyissue > 0") \
					_T(" AND hpo_org_id NOT IN('SMM') %s") \
					_T(" GROUP BY trunc_date(hpo_orderdate), hpol_product_id") \
					_T(" ORDER BY orderdate, itemid"), m_nDocNo, szWhere);
		rsl.ExecSQL(szSQL);

		szTableName = _T("hms_pharmaorder");

	}

//_fmsg(_T("%s"), szSQL);
	if(rsl.IsEOF())
	{			
		return;
	}
		
	/*rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), pMF->m_CompanyInfo.sc_pname);
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), pMF->m_CompanyInfo.sc_name);*/
	rpt.GetReportHeader()->SetValue(_T("ReportTitle"), szReportTitle);

	rs1.GetValue(_T("deptname"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("DEPARTMENT"), tmpStr);

	rs1.GetValue(_T("pname"), tmpStr);
	rpt.GetPageHeader()->SetValue(_T("PatientName"), tmpStr);

	rs1.GetValue(_T("age"), tmpStr);
	rpt.GetPageHeader()->SetValue(_T("Age"), tmpStr);

	rs1.GetValue(_T("sex"), tmpStr);
	rpt.GetPageHeader()->SetValue(_T("Sex"), tmpStr);

	rs1.GetValue(_T("bedname"), tmpStr);
	rpt.GetPageHeader()->SetValue(_T("Bednumber"), tmpStr);

	rs1.GetValue(_T("roomname"), tmpStr);
	rpt.GetPageHeader()->SetValue(_T("Room"), tmpStr);

	rpt.GetPageHeader()->SetValue(_T("object"), rs1.GetValue(_T("object")));
	rpt.GetPageHeader()->SetValue(_T("yearofbirth"), rs1.GetValue(_T("yearofbirth")));

	tmpStr = CDate::Convert(rs1.GetValue(_T("Admitdate")), yyyymmdd, ddmmyyyy);
	rpt.GetPageHeader()->SetValue(_T("AdmitDate"), tmpStr);

	rs1.GetValue(_T("diagnostic"), tmpStr);
	rpt.GetPageHeader()->SetValue(_T("Diagnostic"), tmpStr);

	tmpStr = CDate::Convert(rs1.GetValue(_T("Dischargedate")), yyyymmdd, ddmmyyyy);
	rpt.GetPageHeader()->SetValue(_T("DischargeDate"), tmpStr);
	

	CReportSection* rptDetail;
	CReportSection* rptDetailH2;

	double grpCost=0;
	//long cost = 0;
	int nItem;
	
	int nIndex=0;
	CString szTemp, szString, szConvert, szDate;
	int nCount = 0, i = 0;
	DAYCOLUMN dc_cotngay;
	DRUGITEM drugItem;
	int y = 1;
	int nMaxDay = 15;
	CString szOld;
	CArray<DAYCOLUMN,DAYCOLUMN&> m_array;
	CArray<DRUGITEM, DRUGITEM&> arrDrug;
	CString szStartDay, szEndDay, szItemID;
	CString szFeeTypeNew, szFeeTypeOld;
	CString szDeptNew, szDeptOld;
	bool bCheck = false;

	m_array.RemoveAll();
	arrDrug.RemoveAll();

	while(!rsl.IsEOF())
	{
		if (szDate.IsEmpty() || CompareDate(szDate, rsl.GetValue(_T("orderdate"))) != 0)
		{
			rsl.GetValue(_T("orderdate"), szDate);
			dc_cotngay.szDate = szDate;
			dc_cotngay.nIndex = y;
			m_array.Add(dc_cotngay);
			y++;
		}

		rsl.GetValue(_T("itemid"), szItemID);

		for (int j = 0; j < arrDrug.GetSize(); j++)
		{
			drugItem = arrDrug[j];
			if (drugItem.szItemID == szItemID)
			{
				if (drugItem.nMaxIdx < (y - 1))
				{
					drugItem.nMaxIdx = y - 1;
					arrDrug.SetAt(j, drugItem);
				}
				bCheck = true;
				break;
			}
		}

		if (!bCheck)
		{
			drugItem.szItemID = szItemID;
			drugItem.nMaxIdx = y - 1;
			drugItem.nTotal = 0;
			arrDrug.Add(drugItem);
		}
		else
			bCheck = false;

		rsl.MoveNext();
	}

	szDate.Empty();
	szItemID.Empty();

	int nColIdx = 1;
	int nPage = 0;
	int ktra;

	for(int x = 1; x <= (m_array.GetSize()/nMaxDay)+1; x++)
	{

		if(nPage > 0)
		{
			if (rptDetail)
			{
				//MessageBox(_T("OK"));
				rptDetail->SetPageBreak(true);
			}
			//rs.MoveFirst();
		}

		if(m_array.GetSize() < (nPage+1)*nMaxDay)
		{
			ktra = m_array.GetSize();
		}
		else 
		{
			ktra = (nPage + 1)*nMaxDay;
		}

		rptDetail = rpt.AddDetail(rpt.GetGroupHeader(1));
		CString szDay;
		for (int i = nPage*nMaxDay; i < ktra; i++)
		{
			dc_cotngay = m_array[i];
			szTemp.Format(_T("l%d"), nColIdx);
			szDay.Format(_T("%s"), CDate::Convert(dc_cotngay.szDate,yyyymmdd,ddmmyyyy));
			rptDetail->SetValue(szTemp, szDay.Left(5));
			if (i == nPage * nMaxDay)
				szStartDay = dc_cotngay.szDate;
			if (i == ktra - 1)
				szEndDay = dc_cotngay.szDate;
			nColIdx++;
		}

		nColIdx = 1;
		nItem = 1;
		szOld.Empty();

		if(m_bInPatient)
		{
		
			szSQL.Format(_T(" SELECT distinct hpo_deptid as deptid, ") \
					_T("	product_name as drugname,") \
					_T("	hpo_feetype as feetype, ") \
			        _T("    product_uomname as unit,") \
					_T(" 	hpol_product_id as itemid ") \
					_T(" FROM hms_ipharmaorder ") \
					_T(" LEFT JOIN hms_ipharmaorderline ON(hpol_docno=hpo_docno and hpol_orderid=hpo_orderid)") \
					_T(" LEFT JOIN m_productitem_view ON(product_item_id=hpol_product_item_id) ") \
					_T(" WHERE hpo_docno=%ld and hpo_orderstatus in('S','I','A') AND hpol_qtyissue > 0 ") \
					_T(" AND hpo_org_id NOT IN('SMM') ") \
					_T(" 	%s ") \
					_T("    and trunc_date(hpo_orderdate) between to_date('%s', 'yyyy/mm/dd hh24:mi:ss') and to_date('%s', 'yyyy/mm/dd hh24:mi:ss')") \
					_T(" ORDER BY deptid, feetype, drugname"),
					m_nDocNo, szWhere, szStartDay, szEndDay);
		}
		else
		{
			szSQL.Format(_T("SELECT deptid, drugname, feetype, unit, itemid ") \
					_T("	  FROM ") \
					_T("	(SELECT distinct hpo_deptid as deptid, product_name as drugname,") \
					_T("		case when NVL(hpo_feetype, 'X') = 'PT' AND coalesce(hpo_reference_id, 0) > 0 then 'PT' ") \
					_T("		else case when hpo_ordertype = 'C' then 'TT' ") \
					_T("		else 'CP' end end as feetype, ") \
			        _T("		product_uomname as unit,") \
					_T(" 		hpol_product_id as itemid ") \
					_T("	FROM hms_pharmaorder ") \
					_T("	LEFT JOIN hms_pharmaorderline ON(hpol_docno=hpo_docno and hpol_orderid=hpo_orderid)") \
					_T("	LEFT JOIN m_productitem_view ON(product_item_id=hpol_product_item_id) ") \
					_T("	WHERE hpo_docno=%ld and hpo_orderstatus in('S','I','A') AND hpol_qtyissue > 0 ") \
					_T("	AND hpo_org_id NOT IN('SMM') ") \
					_T(" 	%s ") \
					_T("    and trunc_date(hpo_orderdate) between to_date('%s', 'yyyy/mm/dd hh24:mi:ss') and to_date('%s', 'yyyy/mm/dd hh24:mi:ss'))") \
					_T(" ORDER BY deptid, feetype, drugname"),
					m_nDocNo, szWhere, szStartDay, szEndDay);
		}
		rsd.ExecSQL(szSQL);


		while (!rsd.IsEOF())
		{
			rsd.GetValue(_T("deptid"), szDeptNew);
			rsd.GetValue(_T("itemid"), szItemID);
			rsd.GetValue(_T("feetype"), szFeeTypeNew);

			if(m_bInPatient)
			{
				szSQL.Format(_T(" SELECT sum(hpol_qtyissue) as issueqty, ") \
						_T(" 	 trunc_date(hpo_orderdate) as orderdate ") \
						_T(" FROM hms_ipharmaorder ") \
						_T(" LEFT JOIN hms_ipharmaorderline ON(hpol_docno=hpo_docno and hpol_orderid=hpo_orderid)") \
						_T(" LEFT JOIN m_productitem_view ON(product_item_id=hpol_product_item_id) ") \
						_T(" WHERE hpo_docno=%ld and hpo_orderstatus in('A') AND hpol_qtyissue > 0") \
						_T(" AND hpo_org_id NOT IN('SMM') ") \
						_T(" 	%s ") \
						_T("    and trunc_date(hpo_orderdate) between to_date('%s', 'yyyy/mm/dd hh24:mi:ss') and to_date('%s', 'yyyy/mm/dd hh24:mi:ss')") \
						_T("    and hpol_product_id='%s' and hpo_feetype ='%s' and hpo_deptid = '%s'") \
						_T(" GROUP BY trunc_date(hpo_orderdate)") \
						_T(" ORDER BY trunc_date(hpo_orderdate)"),
						m_nDocNo, szWhere, szStartDay, szEndDay, szItemID, szFeeTypeNew, szDeptNew);
			}
			else
			{
				szSQL.Format(_T(" SELECT sum(hpol_qtyissue) as issueqty, ") \
						_T(" 	 trunc_date(hpo_orderdate) as orderdate ") \
						_T(" FROM hms_pharmaorder ") \
						_T(" LEFT JOIN hms_pharmaorderline ON(hpol_docno=hpo_docno and hpol_orderid=hpo_orderid)") \
						_T(" LEFT JOIN m_productitem_view ON(product_item_id=hpol_product_item_id) ") \
						_T(" WHERE hpo_docno=%ld and hpo_orderstatus in('A') AND hpol_qtyissue > 0") \
						_T(" AND hpo_org_id NOT IN('SMM') ") \
						_T(" 	%s ") \
						_T("    and trunc_date(hpo_orderdate) between to_date('%s', 'yyyy/mm/dd hh24:mi:ss') and to_date('%s', 'yyyy/mm/dd hh24:mi:ss')") \
						_T("    and hpol_product_id='%s'") \
						_T("	and hpo_deptid = '%s'") \
						_T(" GROUP BY trunc_date(hpo_orderdate)") \
						_T(" ORDER BY trunc_date(hpo_orderdate)"),
						m_nDocNo, szWhere, szStartDay, szEndDay, szItemID, szDeptNew);
			}
			/*if (x == 1 && nItem == 1)
				_fmsg(_T("%s"), szSQL);*/

			//_msg(_T("%s"), szSQL);
			if (szDeptNew != szDeptOld)
			{
				rptDetailH2 = rpt.AddDetail(rpt.GetGroupHeader(2));
				rptDetailH2->SetValue(_T("GroupName"), pMF->GetDepartmentName(szDeptNew));
				szDeptOld = szDeptNew;
				szFeeTypeOld.Empty();
			}
			if(szFeeTypeNew != szFeeTypeOld && !szFeeTypeNew.IsEmpty())
			{
				rptDetailH2 = rpt.AddDetail(rpt.GetGroupHeader(2));
				rptDetailH2->SetValue(_T("GroupName"), pMF->GetSelectionString(_T("hms_drugissue_type"), szFeeTypeNew));
				szFeeTypeOld = szFeeTypeNew;
			}
			rs.ExecSQL(szSQL);

			rptDetail = rpt.AddDetail();
			tmpStr.Format(_T("%d"), nItem++);
			rptDetail->SetValue(_T("Index"), tmpStr);	

			rsd.GetValue(_T("drugname"), tmpStr);
			rptDetail->SetValue(_T("DrugName"), tmpStr);

			rsd.GetValue(_T("unit"), tmpStr);
			rptDetail->SetValue(_T("Unit"), tmpStr);

			while(!rs.IsEOF())
			{

				rs.GetValue(_T("orderdate"), tmpStr);

				for (int z = 0; z < m_array.GetSize(); z++)
				{
					dc_cotngay = m_array[z];					
					if(tmpStr == dc_cotngay.szDate)
					{
						nIndex = dc_cotngay.nIndex;
						break;
					}

				}

				if(nIndex > (nPage+1) * nMaxDay)
				{
					rs.MoveNext();
					continue;
				}

				//Neu bn qua nMaxDay ngay thi tinh lai chi so cot
				if (nPage > 0)
				{
					nIndex = nIndex - (nPage * nMaxDay);
				}

				rs.GetValue(_T("issueqty"), tmpStr);
				grpCost += ToDouble(tmpStr);
				szTemp.Format(_T("%d"), nIndex);
				rptDetail->SetValue(szTemp, tmpStr);
			
				rs.MoveNext();
			}

			if(grpCost > 0)
			{
				for (int j = 0; j < arrDrug.GetSize(); j++)
				{
					drugItem = arrDrug[j];
					if (drugItem.szItemID == szItemID)
					{
						drugItem.nTotal += grpCost;

						if ((drugItem.nMaxIdx <= (nPage + 1) * nMaxDay) &&
							(drugItem.nMaxIdx > nPage * nMaxDay))
						{
							/*if ((drugItem.nTotal - (drugItem.nTotal)) > 0)
							{
								tmpStr.Format(_T("%.3f"), drugItem.nTotal);
							}
							else
								tmpStr.Format(_T("%.0f"), drugItem.nTotal);*/
							tmpStr.Format(_T("%.3f"), drugItem.nTotal);
							rptDetail->SetValue(_T("32"), tmpStr);
						}

						arrDrug.SetAt(j, drugItem);
						break;
					}
				}
				grpCost = 0;
			}

			rsd.MoveNext();
		}
		nPage++;
	}

	/*if(grpCost>0)
	{
		tmpStr.Format(_T("%d"),grpCost);
		rptDetail->SetValue(_T("32"), tmpStr);
		grpCost =0;
	}*/

	szSysDate = pMF->GetSysDate(); 
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),szSysDate.Mid(8,2),szSysDate.Mid(5,2),szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);

	rpt.PrintPreview();
}