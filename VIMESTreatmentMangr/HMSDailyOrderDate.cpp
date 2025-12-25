#include "HMSDailyOrderDate.h"
#include "ReportDocument.h"
#include "MainFrm.h"
static long _OnOrderDateLoadDataFnc(CWnd *pWnd){
	return ((CHMSDailyOrderDate*)pWnd)->OnOrderDateLoadData();
} 
static void _OnOrderDateDblClickFnc(CWnd *pWnd){
	((CHMSDailyOrderDate*)pWnd)->OnOrderDateDblClick();
} 
static void _OnOrderDateSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSDailyOrderDate*)pWnd)->OnOrderDateSelectChange(nOldItem, nNewItem);
} 
static int _OnOrderDateDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSDailyOrderDate*)pWnd)->OnOrderDateDeleteItem();
} 
static void _OnOkSelectFnc(CWnd *pWnd){
	CHMSDailyOrderDate *pVw = (CHMSDailyOrderDate *)pWnd;
	pVw->OnOkSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSDailyOrderDate *pVw = (CHMSDailyOrderDate *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddHMSDailyOrderDateFnc(CWnd *pWnd){
	 return ((CHMSDailyOrderDate*)pWnd)->OnAddHMSDailyOrderDate();
} 
static int _OnEditHMSDailyOrderDateFnc(CWnd *pWnd){
	 return ((CHMSDailyOrderDate*)pWnd)->OnEditHMSDailyOrderDate();
} 
static int _OnDeleteHMSDailyOrderDateFnc(CWnd *pWnd){
	 return ((CHMSDailyOrderDate*)pWnd)->OnDeleteHMSDailyOrderDate();
} 
static int _OnSaveHMSDailyOrderDateFnc(CWnd *pWnd){
	 return ((CHMSDailyOrderDate*)pWnd)->OnSaveHMSDailyOrderDate();
} 
static int _OnCancelHMSDailyOrderDateFnc(CWnd *pWnd){
	 return ((CHMSDailyOrderDate*)pWnd)->OnCancelHMSDailyOrderDate();
} 
CHMSDailyOrderDate::CHMSDailyOrderDate(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 215;
	m_nDlgHeight = 165;
	SetDefaultValues();
}
CHMSDailyOrderDate::~CHMSDailyOrderDate(){
}
void CHMSDailyOrderDate::OnCreateComponents(){
	m_wndOrderDateList.Create(this, _T("Order Date List"), 5, 5, 205, 125);
	m_wndOrderDate.Create(this,10, 30, 200, 120); 
	m_wndOk.Create(this, _T("&Ok"), 50, 130, 125, 155);
	m_wndCancel.Create(this, _T("&Cancel"), 130, 130, 205, 155);

}
void CHMSDailyOrderDate::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);

	m_wndOrderDate.SetCheckBox(true);
	m_wndOrderDate.InsertColumn(0, _T("Date"), CFMT_DATE, 180);

}
void CHMSDailyOrderDate::OnSetWindowEvents(){
	m_wndOrderDate.SetEvent(WE_SELCHANGE, _OnOrderDateSelectChangeFnc);
	m_wndOrderDate.SetEvent(WE_LOADDATA, _OnOrderDateLoadDataFnc);
	m_wndOrderDate.SetEvent(WE_DBLCLICK, _OnOrderDateDblClickFnc);
	m_wndOrderDate.AddEvent(1, _T("Delete"), _OnOrderDateDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndOk.SetEvent(WE_CLICK, _OnOkSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	OnOrderDateLoadData();
}
void CHMSDailyOrderDate::OnDoDataExchange(CDataExchange* pDX){

}
void CHMSDailyOrderDate::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSDailyOrderDate::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSDailyOrderDate::SetDefaultValues(){


}
int CHMSDailyOrderDate::SetMode(int nMode){
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
 		return nOldMode; 
}
void CHMSDailyOrderDate::OnOrderDateDblClick(){
	
} 
void CHMSDailyOrderDate::OnOrderDateSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();	
	for(int i=0; i<= m_wndOrderDate.GetItemCount();i++)
		m_wndOrderDate.SetCheck(i,false);

	m_wndOrderDate.SetCheck(nNewItem,true);
	//m_szDate = m_wndOrderDate.GetItemText(nNewItem,0);
	
} 
int CHMSDailyOrderDate::OnOrderDateDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSDailyOrderDate::OnOrderDateLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndOrderDate.BeginLoad(); 
	m_wndOrderDate.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(
		_T("SELECT distinct trunc(hpo_orderdate) as orderdate ") \
		_T(" FROM hms_ipharmaorder")
		_T(" WHERE hpo_transaction_id = %ld ") \
		_T(" ORDER BY trunc(hpo_orderdate)"), pMF->m_wndDailyDrugOrder.m_nTransactionID);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndOrderDate.AddItems(
			rs.GetValue(_T("OrderDate")), NULL);
		rs.MoveNext();
	}
	m_wndOrderDate.EndLoad(); 
	return nCount;
}
void CHMSDailyOrderDate::OnOkSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();	
	CReport rpt;
	CString tmpStr, szSQL;	
	CRecord rsl(&pMF->m_db);
	
	for (int i=0;i< m_wndOrderDate.GetItemCount();i++)
	{
		if(m_wndOrderDate.GetCheck(i))
			m_szDate = m_wndOrderDate.GetItemText(i,0);
	}
	BeginWaitCursor();
	if (m_nType ==1)
	{		
		CReport rpt;	
		CString tmpStr, szSQL;
		CRecord rs(&pMF->m_db);
		CRecord prs(&pMF->m_db);
		CRecord rsl(&pMF->m_db);
		
		if(!rpt.Init(_T("Reports/HMS/PMS_PHIEUCONGKHAITHUOC.RPT"),TRUE))
			return;
		
		szSQL.Format(_T(" SELECT distinct hpo_docno as docno, hpo_orderid as orderid, ") \
			_T(" trunc(hpo_orderdate) as orderdate, ") \
			_T(" 	trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
			_T("	hms_getage( trunc(hd_admitdate), hp_birthdate) as age, ") \
			_T(" 	sys_sel_getname('sys_sex', hp_sex) as sex,") \
			_T(" 	(SELECT ho_desc FROM hms_object WHERE ho_id=hd_object) as objectname,") \
			_T("	 trunc(htr_admitdate) as Admitdate,htr_maindisease as Diagnostic,htr_mainicd as icd, ") \
			_T(" hpo_roomid as roomid,	hpo_bedid as bedid ") \
			_T(" FROM hms_patient ") \
			_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno) ") \
			_T(" LEFT JOIN hms_ipharmaorder ON(hpo_docno=hd_docno)") \
			_T(" LEFT JOIN hms_treatment_record ON(htr_docno = hpo_docno AND htr_idx=hpo_refidx) ") \
			_T(" WHERE 	hpo_transaction_id=%ld and trunc(hpo_orderdate)= trunc(to_date('%s', 'yyyy/mm/dd hh24:mi:ss')) ") \
			_T(" ORDER BY roomid, bedid, pname, docno"), pMF->m_wndDailyDrugOrder.m_nTransactionID, m_szDate);
		_fmsg(_T("%s"), szSQL);
		prs.ExecSQL(szSQL);
		CReportSection* rptDetail=NULL;
		CString szItemID,szDeptID;
		long nOrderID;
		int i = 1,nRoomId=0,nBedIdx=0;
		while(!prs.IsEOF())
		{
			if(rptDetail)	rptDetail->SetPageBreak();
			rptDetail = rpt.AddDetail(rpt.GetGroupHeader(1));
			
			tmpStr.Empty();
			StringUpper(pMF->m_CompanyInfo.sc_pname, tmpStr);
			rptDetail->SetValue(_T("HealthService"), tmpStr);
			StringUpper(pMF->m_CompanyInfo.sc_name, tmpStr);
			rptDetail->SetValue(_T("HospitalName"), tmpStr);			
			szDeptID = pMF->m_szDept;
			rptDetail->SetValue(_T("Department"), pMF->GetDepartmentName(szDeptID));
			tmpStr.Format(rptDetail->GetValue(_T("ReportDate")), CDate::Convert(m_szDate, yyyymmdd, ddmmyyyy));
			rptDetail->SetValue(_T("ReportDate"), tmpStr);
			rptDetail->SetValue(_T("SheetNo"), pMF->m_wndDailyDrugOrder.m_szOrderNo);
			//Page Header

			tmpStr.Format(_T("%d"), i++);
			rptDetail->SetValue(_T("Index"), tmpStr);
			prs.GetValue(_T("docno"), tmpStr);
			rptDetail->SetValue(_T("DocNo"), tmpStr);
			prs.GetValue(_T("pname"), tmpStr);
			rptDetail->SetValue(_T("PatientName"), tmpStr);
			prs.GetValue(_T("age"), tmpStr);
			rptDetail->SetValue(_T("age"), tmpStr);
			prs.GetValue(_T("yearofbirth"), tmpStr);
			rptDetail->SetValue(_T("yearofbirth"), tmpStr);
			prs.GetValue(_T("sex"), tmpStr);
			rptDetail->SetValue(_T("sex"), tmpStr);
			prs.GetValue(_T("ObjectName"), tmpStr);
			rptDetail->SetValue(_T("Object"), tmpStr);
			tmpStr.Format(_T("%s[%s]"),prs.GetValue(_T("Diagnostic")),prs.GetValue(_T("icd")));
			rptDetail->SetValue(_T("Diagnostic"), tmpStr);
			prs.GetValue(_T("roomid"), nRoomId);
			rptDetail->SetValue(_T("roomid"), pMF->GetRoomName(szDeptID, nRoomId));
			prs.GetValue(_T("bedid"), nBedIdx);
			rptDetail->SetValue(_T("bedid"), pMF->GetBedName(szDeptID, nRoomId, nBedIdx));
			prs.GetValue(_T("Admitdate"), tmpStr);
			rptDetail->SetValue(_T("Admitdate"), CDate::Convert(tmpStr,yyyymmdd,ddmmyyyy));
	
			prs.GetValue(_T("orderid"), nOrderID);
	
			szSQL.Format(_T(" SELECT 	pmi_id as itemid,") \
			_T(" product_name as name, product_uomname as unit, ") \
			_T(" 	sum(hpol_orderqty) as qty,hpol_unitprice as price, ") \
			_T("	sum(hpol_orderqty*hpol_unitprice) as Amount, hpol_usage as usage, ") \
			_T("	(select sc_name from sys_country where sc_id=pmi_countryid) as country ") \
			_T(" FROM hms_ipharmaorder_line ") \
			_T(" LEFT JOIN pms_items ON(hpol_product_id=pmi_id)") \
			_T(" WHERE hpol_orderid=%ld ") \
			_T(" GROUP BY itemid, name, unit,price, usage,country ORDER BY name"), nOrderID);
			rsl.ExecSQL(szSQL);
			//_fmsg(_T("%s"), szSQL);
			int n = 1;
			double dblTotalAmount=0,cost;
			while(!rsl.IsEOF()){
				rptDetail = rpt.AddDetail();
				tmpStr.Format(_T("%d"), n++);
				rptDetail->SetValue(_T("1"), tmpStr);
				rsl.GetValue(_T("name"), tmpStr);
				rptDetail->SetValue(_T("2"), tmpStr);
				rsl.GetValue(_T("unit"), tmpStr);
				rptDetail->SetValue(_T("3"), tmpStr);
				rsl.GetValue(_T("qty"), tmpStr);
				rptDetail->SetValue(_T("4"), tmpStr);
				rsl.GetValue(_T("price"), tmpStr);
				rptDetail->SetValue(_T("5"), tmpStr);
				rsl.GetValue(_T("Amount"), cost);
				dblTotalAmount += cost;
				FormatCurrency(cost, tmpStr);
				rptDetail->SetValue(_T("6"), tmpStr);				
				rsl.GetValue(_T("country"), tmpStr);
				rptDetail->SetValue(_T("7"), tmpStr);
				rsl.GetValue(_T("usage"), tmpStr);
				rptDetail->SetValue(_T("8"), tmpStr);
				rsl.MoveNext();
			}
			
			rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
			tmpStr.Format(_T("%d"), n-1);
			rptDetail->SetValue(_T("TotalItem"), tmpStr);	
			FormatCurrency(dblTotalAmount, tmpStr);
			rptDetail->SetValue(_T("TotalAmount"), tmpStr);
			MoneyToString(ToString(dblTotalAmount), tmpStr);
			rptDetail->SetValue(_T("SumWordAmount"), tmpStr);		
			prs.MoveNext();	
		}
		rpt.PrintPreview();
	}
	else
	{
		
	
		if(!rpt.Init(_T("Reports/HMS/HT_BANGTONGHOPTHUOCTHEONGAY.RPT")) )
				return;

			tmpStr.Empty();
			StringUpper(pMF->m_CompanyInfo.sc_pname, tmpStr);
			rpt.GetReportHeader()->SetValue(_T("HealthService"), tmpStr);
			StringUpper(pMF->m_CompanyInfo.sc_name, tmpStr);
			rpt.GetReportHeader()->SetValue(_T("HospitalName"), tmpStr);
			rpt.GetReportHeader()->SetValue(_T("Department"), pMF->GetDepartmentName(pMF->m_szDept));
			tmpStr.Format(rpt.GetReportHeader()->GetValue(_T("ReportDate")), CDate::Convert(m_szDate, yyyymmdd, ddmmyyyy));
			rpt.GetReportHeader()->SetValue(_T("ReportDate"), tmpStr);
			rpt.GetReportHeader()->SetValue(_T("SheetNo"), pMF->m_wndDailyDrugOrder.m_szOrderNo);
			//Page Header

				szSQL.Format(_T(" SELECT 	product_name as drugname, ") \
					_T(" 	product_uomname as unit,") \
					_T(" 	sum(hpol_qtyorder) as orderqty,") \
					_T(" 	sum(hpol_qtyissue) as issueqty") \
					_T(" FROM hms_ipharmaorder") \
					_T(" LEFT JOIN hms_ipharmaorderline ON(hpo_orderid=hpol_orderid)") \
					_T("   LEFT JOIN m_productitem_view ON(hpol_product_item_id = product_item_id)") \
					_T(" WHERE hpo_transaction_id=%ld  and trunc(hpo_orderdate)= trunc(to_date('%s', 'yyyy/mm/dd hh24:mi:ss'))") \
					_T(" GROUP BY product_name, product_uomname ") \
					_T(" ORDER BY drugname, unit  ") , pMF->m_wndDailyDrugOrder.m_nTransactionID, m_szDate);

				rsl.ExecSQL(szSQL);
				int n = 1;
				CReportSection* rptDetail;
				while(!rsl.IsEOF()){
					rptDetail = rpt.AddDetail();
					tmpStr.Format(_T("%d"), n++);
					rptDetail->SetValue(_T("1"), tmpStr);
					rsl.GetValue(_T("drugname"), tmpStr);
					rptDetail->SetValue(_T("2"), tmpStr);
					rsl.GetValue(_T("unit"), tmpStr);
					rptDetail->SetValue(_T("3"), tmpStr);
					rsl.GetValue(_T("orderqty"), tmpStr);
					rptDetail->SetValue(_T("4"), tmpStr);
					rsl.GetValue(_T("issueqty"), tmpStr);
					rptDetail->SetValue(_T("5"), tmpStr);
					rsl.MoveNext();
				}		
			
			CString szDate, szTime;
			tmpStr = pMF->GetSysDate();
			szTime= pMF->GetSysDateTime();
			szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), szTime.Mid(11,5),tmpStr.Mid(8, 2), tmpStr.Mid(5, 2), tmpStr.Left(4));
			rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
		//	rs.GetValue(_T("doctor"), tmpStr);
			rpt.GetReportFooter()->SetValue(_T("UserName"), pMF->GetDoctorName(pMF->GetCurrentUser()));
			CReportItem *img = rpt.GetReportFooter()->GetItem(_T("Signature"));
			if(img)
			{
				img->SetHBITMAP(pMF->GetSignatureImage(tmpStr));
				img->SetFixedHeight(false);
			}

			rpt.PrintPreview();
	}
	
	EndWaitCursor();
	//OnOK();
	
} 
void CHMSDailyOrderDate::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();
} 
int CHMSDailyOrderDate::OnAddHMSDailyOrderDate(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSDailyOrderDate::OnEditHMSDailyOrderDate(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSDailyOrderDate::OnDeleteHMSDailyOrderDate(){
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
 		OnCancelHMSDailyOrderDate(); 
 	}
	return 0;
}
int CHMSDailyOrderDate::OnSaveHMSDailyOrderDate(){
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
 		//OnHMSDailyOrderDateListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSDailyOrderDate::OnCancelHMSDailyOrderDate(){
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
int CHMSDailyOrderDate::OnHMSDailyOrderDateListLoadData(){
	return 0;
}
