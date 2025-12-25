#include "TMDailyFoodPrintSheetDialog.h"
#include "MainFrm.h"
static CString m_szOrderIdList;
static CReport* _pRpt = NULL;
void _OnCheckPrintFoodSheetFnc(CWnd *pMain){
	/*if (!_pRpt->GetPrinter()->IsPrinted())
	{
		return;
	}*/
	CMainFrame *pMF = (CMainFrame*) pMain;
	CString szSQL;
	szSQL.Format(_T("Update hms_feefood set hfo_printed= hfo_printed+1 where hfo_orderid in (%s) "),m_szOrderIdList);
	pMF->ExecSQL(szSQL);
}

static int _OnPatientListSelectAllItemFnc(CWnd *pWnd){
	 return ((CTMDailyFoodPrintSheetDialog*)pWnd)->OnPatientListSelectAllItem();
} 
static int _OnPatientListUnSelectAllItemFnc(CWnd *pWnd){
	 return ((CTMDailyFoodPrintSheetDialog*)pWnd)->OnPatientListUnselectAllItem();
} 

static void _OnDateSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CTMDailyFoodPrintSheetDialog* )pWnd)->OnDateSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDateSelendokFnc(CWnd *pWnd){
	((CTMDailyFoodPrintSheetDialog *)pWnd)->OnDateSelendok();
}
/*static void _OnDateSetfocusFnc(CWnd *pWnd){
	((CTMDailyFoodPrintSheetDialog *)pWnd)->OnDateKillfocus();
}*/
/*static void _OnDateKillfocusFnc(CWnd *pWnd){
	((CTMDailyFoodPrintSheetDialog *)pWnd)->OnDateKillfocus();
}*/
static long _OnDateLoadDataFnc(CWnd *pWnd){
	return ((CTMDailyFoodPrintSheetDialog *)pWnd)->OnDateLoadData();
}
/*static void _OnDateAddNewFnc(CWnd *pWnd){
	((CTMDailyFoodPrintSheetDialog *)pWnd)->OnDateAddNew();
}*/
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CTMDailyFoodPrintSheetDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CTMDailyFoodPrintSheetDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CTMDailyFoodPrintSheetDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CTMDailyFoodPrintSheetDialog*)pWnd)->OnListDeleteItem();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CTMDailyFoodPrintSheetDialog *pVw = (CTMDailyFoodPrintSheetDialog *)pWnd;
	pVw->OnPrintSelect();
} 
/*static void _OnSearchNameChangeFnc(CWnd *pWnd){
	((CTMDailyFoodPrintSheetDialog *)pWnd)->OnSearchNameChange();
} */
/*static void _OnSearchNameSetfocusFnc(CWnd *pWnd){
	((CTMDailyFoodPrintSheetDialog *)pWnd)->OnSearchNameSetfocus();} */ 
/*static void _OnSearchNameKillfocusFnc(CWnd *pWnd){
	((CTMDailyFoodPrintSheetDialog *)pWnd)->OnSearchNameKillfocus();
} */
static int _OnSearchNameCheckValueFnc(CWnd *pWnd){
	return ((CTMDailyFoodPrintSheetDialog *)pWnd)->OnSearchNameCheckValue();
} 
static void _OnLoadSelectFnc(CWnd *pWnd){
	CTMDailyFoodPrintSheetDialog *pVw = (CTMDailyFoodPrintSheetDialog *)pWnd;
	pVw->OnLoadSelect();
} 
static int _OnAddTMDailyFoodPrintSheetDialogFnc(CWnd *pWnd){
	 return ((CTMDailyFoodPrintSheetDialog*)pWnd)->OnAddTMDailyFoodPrintSheetDialog();
} 
static int _OnEditTMDailyFoodPrintSheetDialogFnc(CWnd *pWnd){
	 return ((CTMDailyFoodPrintSheetDialog*)pWnd)->OnEditTMDailyFoodPrintSheetDialog();
} 
static int _OnDeleteTMDailyFoodPrintSheetDialogFnc(CWnd *pWnd){
	 return ((CTMDailyFoodPrintSheetDialog*)pWnd)->OnDeleteTMDailyFoodPrintSheetDialog();
} 
static int _OnSaveTMDailyFoodPrintSheetDialogFnc(CWnd *pWnd){
	 return ((CTMDailyFoodPrintSheetDialog*)pWnd)->OnSaveTMDailyFoodPrintSheetDialog();
} 
static int _OnCancelTMDailyFoodPrintSheetDialogFnc(CWnd *pWnd){
	 return ((CTMDailyFoodPrintSheetDialog*)pWnd)->OnCancelTMDailyFoodPrintSheetDialog();
} 
CTMDailyFoodPrintSheetDialog::CTMDailyFoodPrintSheetDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CTMDailyFoodPrintSheetDialog::~CTMDailyFoodPrintSheetDialog(){
}
void CTMDailyFoodPrintSheetDialog::OnCreateComponents(){
	m_wndConditions.Create(this, _T("Conditions"), 5, 5, 325, 510);
	m_wndDateLabel.Create(this, _T("Date"), 10, 30, 90, 55);
	m_wndDate.Create(this,95, 30, 320, 55); 
	m_wndList.Create(this,10, 90, 320, 505); 
	m_wndList.SetCheckBox(true);
	m_wndPrint.Create(this, _T("&Print"), 241, 515, 321, 540);
	m_wndNameLabel.Create(this, _T("Name"), 10, 60, 90, 85);
	m_wndSearchName.Create(this,95, 60, 290, 85); 
	m_wndLoad.Create(this, _T("@"), 295, 60, 320, 85);

}
void CTMDailyFoodPrintSheetDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndDate.SetCheckValue(true);
	m_wndDate.LimitText(35);
	m_wndSearchName.SetLimitText(35);
	m_wndSearchName.SetCheckValue(true);


	m_wndDate.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDate.InsertColumn(1, _T("Name"), CFMT_DATE, 150);


	
	m_wndList.InsertColumn(0, _T("STT"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(1, _T("OrderLine"), CFMT_NUMBER, 0);
	m_wndList.InsertColumn(2, _T("Document No"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(3, _T("Patient Name"), CFMT_TEXT, 175);
	m_wndList.InsertColumn(4, _T("roomid"), CFMT_TEXT, 0);
	m_wndList.InsertColumn(5, _T("roomname"), CFMT_TEXT, 0);
	m_wndList.InsertColumn(6, _T("bedname"), CFMT_TEXT, 0);
	

}
void CTMDailyFoodPrintSheetDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndDate.SetEvent(WE_SELENDOK, _OnDateSelendokFnc);
	//m_wndDate.SetEvent(WE_SETFOCUS, _OnDateSetfocusFnc);
	//m_wndDate.SetEvent(WE_KILLFOCUS, _OnDateKillfocusFnc);
	m_wndDate.SetEvent(WE_SELCHANGE, _OnDateSelectChangeFnc);
	m_wndDate.SetEvent(WE_LOADDATA, _OnDateLoadDataFnc);
	//m_wndDate.SetEvent(WE_ADDNEW, _OnDateAddNewFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Select ALL"), _OnPatientListSelectAllItemFnc);
	m_wndList.AddEvent(2, _T("UnSelect ALL"), _OnPatientListUnSelectAllItemFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	//m_wndSearchName.SetEvent(WE_CHANGE, _OnSearchNameChangeFnc);
	//m_wndSearchName.SetEvent(WE_SETFOCUS, _OnSearchNameSetfocusFnc);
	//m_wndSearchName.SetEvent(WE_KILLFOCUS, _OnSearchNameKillfocusFnc);
	m_wndSearchName.SetEvent(WE_CHECKVALUE, _OnSearchNameCheckValueFnc);
	m_wndLoad.SetEvent(WE_CLICK, _OnLoadSelectFnc);
	SetMode(VM_ADD);
	OnListLoadData();
	OnPatientListSelectAllItem();


}
void CTMDailyFoodPrintSheetDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndDate.GetDlgCtrlID(), m_szDateKey);
	DDX_Text(pDX, m_wndSearchName.GetDlgCtrlID(), m_szSearchName);

}
void CTMDailyFoodPrintSheetDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Date")] =  m_szDateKey;
	m_jData[_T("SearchName")] =  m_szSearchName;
	}
	else
	{
			
	m_jData[_T("Date")].GetValue(m_szDateKey);
	m_jData[_T("SearchName")].GetValue(m_szSearchName);
	}

}
void CTMDailyFoodPrintSheetDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CTMDailyFoodPrintSheetDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CTMDailyFoodPrintSheetDialog::SetDefaultValues(){

	m_szDateKey.Empty();
	m_szSearchName.Empty();

}
int CTMDailyFoodPrintSheetDialog::SetMode(int nMode){
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
void CTMDailyFoodPrintSheetDialog::OnDateSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnListLoadData();
	
} 
void CTMDailyFoodPrintSheetDialog::OnDateSelendok(){
	OnListLoadData();
	 
}
/*void CTMDailyFoodPrintSheetDialog::OnDateSetfocus(){
	
}*/
/*void CTMDailyFoodPrintSheetDialog::OnDateKillfocus(){
	
}*/
long CTMDailyFoodPrintSheetDialog::OnDateLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDate.IsSearchKey() && !m_szDateKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szDateKey);
	}
	m_wndDate.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T(" SELECT distinct to_char(hfo_orderdate,'YYYY-MM-DD') as orderdate, TO_CHAR(hfo_orderdate, 'DD-MM-YYYY') as odate ") \
				_T(" 					FROM hms_foodordersheet ") \
				_T(" 						LEFT JOIN hms_feefood ") \
				_T(" 						ON (hfo_reforder_id= hfos_orderid) ") \
				_T(" 						LEFT JOIN hms_feefoodline ") \
				_T(" 						ON (hfol_orderid= hfo_orderid) ") \
				_T(" 						LEFT JOIN hms_fee_list ") \
				_T(" 						ON (hfl_feeid= hfol_itemid) ") \
				_T(" 						WHERE") \
				_T("             hfos_sheetno='%s'") \
				_T("             and hfos_orderstatus in ('A','S')") \
				_T("             AND hfos_depttype='HC' ") \
				_T(" 						AND hfo_ordertype = 'D' ") \
				_T(" 						AND hfl_typeid    = 'F' ") \
				_T(" 						AND hfl_groupid   = 'FF000' ") \
				_T(" 						AND hfl_deptid    ='HCKT' ") \
				_T(" 						AND hfl_subgroup ='NN' order by orderdate "), m_szOrderSheet);
	nCount = rs.ExecSQL(szSQL);
	int nTmp =0;
	CString szKey;
	while(!rs.IsEOF()){ 
			rs.GetValue(_T("orderdate"),szKey);
		m_wndDate.AddItems(
			rs.GetValue(_T("orderdate")), 
			rs.GetValue(_T("odate")), NULL);
		nTmp++;
		rs.MoveNext();
	}
	return nCount;

}
/*void CTMDailyFoodPrintSheetDialog::OnDateAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CTMDailyFoodPrintSheetDialog::OnListDblClick(){
	
} 
void CTMDailyFoodPrintSheetDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CTMDailyFoodPrintSheetDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CTMDailyFoodPrintSheetDialog::OnListLoadData(){

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	UpdateData(true);
	CString szSQL,tmpStr;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	szSQL.Format(_T("  SELECT hfo_patientno AS patientno,") \
				_T(" 		     hfo_docno           AS docno,hfo_orderid,") \
				_T(" 		     get_patientname(hfo_docno) AS patientname,") \
				_T(" 		     get_departmentname(hfos_deptid) AS deptname,") \
				_T(" 		     ''             AS relative,") \
				_T(" 		     hfol_itemid         AS itemid,") \
				_T("         to_char(hfo_orderdate, 'DD/MM/YYYY') as orderdate, ") \
				_T("		  hb_roomid as roomid, hrl_name as roomname, hbl_name as bedname ") \
				_T(" 					FROM hms_foodordersheet ") \
				_T(" 						LEFT JOIN hms_feefood ") \
				_T(" 						ON (hfo_reforder_id= hfos_orderid) ") \
				_T(" 						LEFT JOIN hms_feefoodline ") \
				_T(" 						ON (hfol_orderid= hfo_orderid) ") \
				_T("	LEFT JOIN hms_bed  on (hb_docno = hfo_docno) ") \
				_T("	LEFT JOIN hms_roomlist on (hrl_id= hb_roomid and hrl_deptid= hfo_deptid) ") \
				_T("	LEFT JOIN hms_bedlist ON (hbl_id = hb_bedid and hbl_roomid= hb_roomid and hbl_deptid= hfo_deptid) ") \
				_T(" 						LEFT JOIN hms_fee_list ") \
				_T(" 						ON (hfl_feeid= hfol_itemid) ") \
				_T(" 						WHERE") \
				_T("             hfos_sheetno='%s'") \
				_T("             and hfos_orderstatus in ('A','S')") \
				_T("             AND hfos_depttype='HC' ") \
				_T(" 						AND hfo_ordertype = 'D' ") \
				_T(" 						AND hfl_typeid    = 'F' ") \
				_T(" 						AND hfl_groupid   = 'FF000' ") \
				_T(" 						AND hfl_deptid    ='HCKT' ") \
				_T("						and TO_CHAR(hfo_orderdate,'YYYY-MM-DD')= '%s' ") \
				_T(" 						AND hfl_subgroup ='NN'  ") \
				_T("					AND (hb_idx = (select max(hb_idx) from hms_bed where hb_docno = hfo_docno  ") \
				_T("				and hb_deptid= hfo_deptid)  or hb_idx is null ) ") \
				_T("			ORDER BY hb_roomid ") , m_szOrderSheet,m_szDateKey.Left(10) );
	_fmsg(_T("%s"),szSQL);
	nCount = rs.ExecSQL(szSQL);	
	int tmpInt=1;
	while(!rs.IsEOF()){ 
		tmpStr.Format(_T("%d"),tmpInt++);
		m_wndList.AddItems(	
			tmpStr, 
			rs.GetValue(_T("hfo_orderid")), 
			rs.GetValue(_T("docno")), 
			rs.GetValue(_T("patientname")),
			rs.GetValue(_T("roomid")),
			rs.GetValue(_T("roomname")),
			rs.GetValue(_T("bedname"))
			, NULL);

		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;

}
void CTMDailyFoodPrintSheetDialog::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CReport rpt;
	CRecord rs(&pMF->m_db);
	CReportSection *rptHeader = NULL,* rptDetail = NULL;
	CString szSQL, tmpStr, szDate, szWhere;
	int nIdx = 1;
	if (!rpt.Init(_T("Reports\\HMS\\TM_GOIDICHVU_PHIEUANSANGMIENPHI.RPT")))
		return ;
	m_szOrderIdList.Empty();
	for (int i =0; i < m_wndList.GetItemCount(); i++)
	{	
		long m_nOrderid=0;
		CString szRoomName,szBedName;
		if(m_wndList.GetCheck(i)){			
			
			m_nOrderid = ToLong(m_wndList.GetItemText(i, 1));
			if (!m_szOrderIdList.IsEmpty())
				m_szOrderIdList.AppendFormat(_T(","));
			m_szOrderIdList.AppendFormat(_T("%ld"),m_nOrderid);
			szRoomName= m_wndList.GetItemText(i, 5);
			szBedName= m_wndList.GetItemText(i, 6);
			szSQL.Format(_T("  SELECT hfo_patientno AS patientno,") \
				_T(" 		     hfo_docno           AS docno,hfo_orderid,") \
				_T(" 		     get_patientname(hfo_docno) AS patientname,") \
				_T(" 		     get_departmentname(hfos_deptid) AS deptname,") \
				_T(" 		     ''             AS relative,") \
				_T(" 		     hfol_itemid         AS itemid,(hfo_printed +1) as printnumber,") \
				_T("         to_char(hfo_orderdate, 'DD/MM/YYYY') as orderdate ") \
				_T(" 					FROM hms_foodordersheet ") \
				_T(" 						LEFT JOIN hms_feefood ") \
				_T(" 						ON (hfo_reforder_id= hfos_orderid) ") \
				_T(" 						LEFT JOIN hms_feefoodline ") \
				_T(" 						ON (hfol_orderid= hfo_orderid) ") \
				_T(" 						LEFT JOIN hms_fee_list ") \
				_T(" 						ON (hfl_feeid= hfol_itemid) ") \
				_T(" 						WHERE") \
				_T("             hfos_sheetno='%s'") \
				_T("             and hfos_orderstatus in ('A','S')") \
				_T("             AND hfos_depttype='HC' ") \
				_T(" 						AND hfo_ordertype = 'D' ") \
				_T(" 						AND hfl_typeid    = 'F' ") \
				_T(" 						AND hfl_groupid   = 'FF000' ") \
				_T(" 						AND hfl_deptid    ='HCKT' ") \
				_T("						and TO_CHAR(hfo_orderdate,'YYYY-MM-DD')= '%s' and hfo_orderid= %ld ") \
				_T(" 						AND hfl_subgroup ='NN' ") , m_szOrderSheet,m_szDateKey.Left(10),m_nOrderid );
			rs.ExecSQL(szSQL);
			//_msg(_T("%s"),szSQL);
			if(rs.IsEOF())
				continue;
			if(rptHeader)
				rptHeader->SetPageBreak();

			//rptHeader = rpt.GetReportHeader();
			rptHeader=	rpt.AddDetail(rpt.GetDetail());
			rptHeader->SetValue(_T("HealthService"), pMF->m_szHealthService);
			rptHeader->SetValue(_T("HospitalName"), pMF->m_szHospitalName);
			rptHeader->SetValue(_T("Department"), rs.GetValue(_T("deptname")));
			rptHeader->SetValue(_T("Relative"), rs.GetValue(_T("relative")));
			rptHeader->SetValue(_T("DocNo"), rs.GetValue(_T("docno")));
			rptHeader->SetValue(_T("PatientName"), rs.GetValue(_T("patientname")));
			rptHeader->SetValue(_T("RoomName"), szRoomName);
			rptHeader->SetValue(_T("BedName"), szBedName);

			szDate = pMF->GetSysDateTime();
			tmpStr.Format(rptHeader->GetValue(_T("PrintDate")),szDate.Mid(11, 2),szDate.Mid(14, 2), szDate.Mid(8, 2), szDate.Mid(5, 2), szDate.Left(4));

			rptHeader->SetValue(_T("PrintDate"), tmpStr);

			rs.GetValue(_T("orderdate"),szDate);
			tmpStr.Format(rptHeader->GetValue(_T("orderdate")),szDate.Left(2), szDate.Mid(3, 2), szDate.Mid(6, 4));

			rptHeader->SetValue(_T("OrderDate"), tmpStr);
			
			rs.GetValue(_T("printnumber"),tmpStr);
			rptHeader->SetValue(_T("PrintNumber"), tmpStr);
			
		}	
	}
	_pRpt = &rpt;
	rpt.SetPrintCallback(_OnCheckPrintFoodSheetFnc);
	rpt.PrintPreview();
	
	

	return ;
} 
/*void CTMDailyFoodPrintSheetDialog::OnSearchNameChange(){
	
} */
/*void CTMDailyFoodPrintSheetDialog::OnSearchNameSetfocus(){
	
} */
/*void CTMDailyFoodPrintSheetDialog::OnSearchNameKillfocus(){
	
} */
int CTMDailyFoodPrintSheetDialog::OnSearchNameCheckValue(){
	OnListLoadData();
	return 0;
} 
void CTMDailyFoodPrintSheetDialog::OnLoadSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnListLoadData();
} 
int CTMDailyFoodPrintSheetDialog::OnAddTMDailyFoodPrintSheetDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CTMDailyFoodPrintSheetDialog::OnEditTMDailyFoodPrintSheetDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CTMDailyFoodPrintSheetDialog::OnDeleteTMDailyFoodPrintSheetDialog(){
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
 		OnCancelTMDailyFoodPrintSheetDialog();
 	}
	return 0;
}
int CTMDailyFoodPrintSheetDialog::OnSaveTMDailyFoodPrintSheetDialog(){
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
 		//OnTMDailyFoodPrintSheetDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CTMDailyFoodPrintSheetDialog::OnCancelTMDailyFoodPrintSheetDialog(){
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
int CTMDailyFoodPrintSheetDialog::OnTMDailyFoodPrintSheetDialogListLoadData(){
	return 0;
}

int CTMDailyFoodPrintSheetDialog::OnPatientListSelectAllItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	for(int i = 0; i < m_wndList.GetItemCount(); i++){
		m_wndList.SetCheck(i, true);
	}
	return 0;
}

int CTMDailyFoodPrintSheetDialog::OnPatientListUnselectAllItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	for(int i = 0; i < m_wndList.GetItemCount(); i++){
		m_wndList.SetCheck(i, false);
	}
	return 0;
}

