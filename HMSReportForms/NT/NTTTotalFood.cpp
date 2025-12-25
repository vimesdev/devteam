#include "stdafx.h"
#include "NTTTotalFood.h"
#include "HMSMainFrame.h"
#include "Excel.h"
#include "StringToken.h"
/*static void _OnDateChangeFnc(CWnd *pWnd){
	((CNTTTotalFood *)pWnd)->OnDateChange();
} */
/*static void _OnDateSetfocusFnc(CWnd *pWnd){
	((CNTTTotalFood *)pWnd)->OnDateSetfocus();} */ 
/*static void _OnDateKillfocusFnc(CWnd *pWnd){
	((CNTTTotalFood *)pWnd)->OnDateKillfocus();
} */
static int _OnDateCheckValueFnc(CWnd *pWnd){
	return ((CNTTTotalFood *)pWnd)->OnDateCheckValue();
} 
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CNTTTotalFood* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CNTTTotalFood *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CNTTTotalFood *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CNTTTotalFood *)pWnd)->OnDepartmentKillfocus();
}*/
static double _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CNTTTotalFood *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CNTTTotalFood *)pWnd)->OnDepartmentAddNew();
}*/
static void _OnAllSelectFnc(CWnd *pWnd){
	  ((CNTTTotalFood*)pWnd)->OnAllSelect();
}
static void _OnBreakfastSelectFnc(CWnd *pWnd){
	  ((CNTTTotalFood*)pWnd)->OnBreakfastSelect();
}
static void _OnLunchSelectFnc(CWnd *pWnd){
	  ((CNTTTotalFood*)pWnd)->OnLunchSelect();
}
static void _OnDinnerSelectFnc(CWnd *pWnd){
	  ((CNTTTotalFood*)pWnd)->OnDinnerSelect();
}
static void _OnExportSelectFnc(CWnd *pWnd){
	CNTTTotalFood *pVw = (CNTTTotalFood *)pWnd;
	pVw->OnExportSelect();
}
static void _Ontruoc10hSelectFnc(CWnd *pWnd){
	 ((CNTTTotalFood*)pWnd)->Ontruoc10hSelect();
}
static void _Onsau10hSelectFnc(CWnd *pWnd){
	 ((CNTTTotalFood*)pWnd)->Onsau10hSelect();
}
static void _OnbaocatSelectFnc(CWnd *pWnd){
	 ((CNTTTotalFood*)pWnd)->OnbaocatSelect();
}
static int _OnAddNTTTotalFoodFnc(CWnd *pWnd){
	 return ((CNTTTotalFood*)pWnd)->OnAddNTTTotalFood();
} 
static int _OnEditNTTTotalFoodFnc(CWnd *pWnd){
	 return ((CNTTTotalFood*)pWnd)->OnEditNTTTotalFood();
} 
static int _OnDeleteNTTTotalFoodFnc(CWnd *pWnd){
	 return ((CNTTTotalFood*)pWnd)->OnDeleteNTTTotalFood();
} 
static int _OnSaveNTTTotalFoodFnc(CWnd *pWnd){
	 return ((CNTTTotalFood*)pWnd)->OnSaveNTTTotalFood();
} 
static int _OnCancelNTTTotalFoodFnc(CWnd *pWnd){
	 return ((CNTTTotalFood*)pWnd)->OnCancelNTTTotalFood();
} 
CNTTTotalFood::CNTTTotalFood(CWnd *pParent)
{

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CNTTTotalFood::~CNTTTotalFood(){
}
void CNTTTotalFood::OnCreateComponents(){
	m_wndReportFilter.Create(this, _T("Report Parameters"), 5, 5, 465, 90);
	m_wndDateLabel.Create(this, _T("Date"), 10, 30, 115, 55);
	m_wndDate.Create(this,120, 30, 460, 55); 
	m_wndDepartmentLabel.Create(this, _T("Department"), 10, 60, 115, 85);
	m_wndDepartment.Create(this,120, 60, 460, 85); 
	m_wndAll.Create(this, _T("All"), 10, 95, 75, 120);
	m_wndBreakfast.Create(this, _T("Breakfast"), 80, 95, 175, 120);
	m_wndBreakfast.EnableWindow(FALSE);
	m_wndLunch.Create(this, _T("Lunch"), 180, 95, 270, 120);
	m_wndLunch.EnableWindow(FALSE);
	m_wndDinner.Create(this, _T("Dinner"), 275, 95, 355, 120);
	m_wndDinner.EnableWindow(FALSE);
	m_wndExport.Create(this, _T("&Export"), 360, 95, 460, 120);
	m_wndHauCan.Create(this, _T("Báo ăn hậu cần"), 10, 125, 200, 150);
	m_wndtruoc10h.Create(this, _T("Trước 10h"), 135, 125, 215, 150);
	m_wndsau10h.Create(this, _T("Sau 10h"), 220, 125, 300, 150);
	m_wndbaocat.Create(this, _T("Báo cắt"), 305, 125, 390, 150);

}
void CNTTTotalFood::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndDate.SetCheckValue(true);
	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(1024);

	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

}
void CNTTTotalFood::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//m_wndDate.SetEvent(WE_CHANGE, _OnDateChangeFnc);
	//m_wndDate.SetEvent(WE_SETFOCUS, _OnDateSetfocusFnc);
	//m_wndDate.SetEvent(WE_KILLFOCUS, _OnDateKillfocusFnc);
	m_wndDate.SetEvent(WE_CHECKVALUE, _OnDateCheckValueFnc);
	m_wndDepartment.SetEvent(WE_SELENDOK, _OnDepartmentSelendokFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	//m_wndDepartment.SetEvent(WE_ADDNEW, _OnDepartmentAddNewFnc);
	m_wndAll.SetEvent(WE_CLICK, _OnAllSelectFnc);
	m_wndBreakfast.SetEvent(WE_CLICK, _OnBreakfastSelectFnc);
	m_wndLunch.SetEvent(WE_CLICK, _OnLunchSelectFnc);
	m_wndDinner.SetEvent(WE_CLICK, _OnDinnerSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndtruoc10h.SetEvent(WE_CLICK, _Ontruoc10hSelectFnc);
	m_wndsau10h.SetEvent(WE_CLICK, _Onsau10hSelectFnc);
	m_wndbaocat.SetEvent(WE_CLICK, _OnbaocatSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddNTTTotalFoodFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditNTTTotalFoodFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteNTTTotalFoodFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveNTTTotalFoodFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelNTTTotalFoodFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

	m_szDate = pMF->GetSysDate();
	UpdateData(false);

}
void CNTTTotalFood::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndDate.GetDlgCtrlID(), m_szDate);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_Radio(pDX, m_wndAll.GetDlgCtrlID(), m_nAll);
	DDX_Radio(pDX, m_wndBreakfast.GetDlgCtrlID(), m_nBreakfast);
	DDX_Radio(pDX, m_wndLunch.GetDlgCtrlID(), m_nLunch);
	DDX_Radio(pDX, m_wndDinner.GetDlgCtrlID(), m_nDinner);
	DDX_Check(pDX, m_wndHauCan.GetDlgCtrlID(), m_bHauCan);
	DDX_Check(pDX, m_wndtruoc10h.GetDlgCtrlID(), m_btruoc10h);
	DDX_Check(pDX, m_wndsau10h.GetDlgCtrlID(), m_bsau10h);
	DDX_Check(pDX, m_wndbaocat.GetDlgCtrlID(), m_bbaocat);

}
void CNTTTotalFood::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CNTTTotalFood::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CNTTTotalFood::SetDefaultValues(){

	m_szDate.Empty();
	m_szDepartmentKey.Empty();
	m_nAll=0;
	m_nBreakfast=1;
	m_nLunch=1;
	m_nDinner=1;

}
int CNTTTotalFood::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
 		CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
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
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 6, -1);
 			SetDefaultValues();
 			break;
 		};
 		UpdateData(FALSE);
 		return nOldMode;
}
/*void CNTTTotalFood::OnDateChange(){
	
} */
/*void CNTTTotalFood::OnDateSetfocus(){
	
} */
/*void CNTTTotalFood::OnDateKillfocus(){
	
} */
int CNTTTotalFood::OnDateCheckValue(){
	return 0;
} 
void CNTTTotalFood::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CNTTTotalFood::OnDepartmentSelendok(){
	 
}
/*void CNTTTotalFood::OnDepartmentSetfocus(){
	
}*/
/*void CNTTTotalFood::OnDepartmentKillfocus(){
	
}*/
long CNTTTotalFood::OnDepartmentLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();

	if (m_wndDepartment.IsSearchKey() && !m_szDepartmentKey.IsEmpty())
	{
		szWhere.Format(_T(" AND sd_id='%s' "), m_szDepartmentKey);
	}

	m_wndDepartment.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT sd_id as id, sd_name as name FROM sys_dept ") \
		_T("WHERE sd_type IN ('DT') AND sd_id NOT IN ('A22', 'B5', 'B10', 'B15', 'CYBERL', 'C6', 'C18', 'C15', 'KD1', 'B3') ORDER BY sd_id"));
	nCount = rs.ExecSQL(szSQL);
	while (!rs.IsEOF())
	{ 
		m_wndDepartment.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CNTTTotalFood::OnDepartmentAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CNTTTotalFood::OnAllSelect(){
	
}
void CNTTTotalFood::OnBreakfastSelect(){
	
}
void CNTTTotalFood::OnLunchSelect(){
	
}
void CNTTTotalFood::OnDinnerSelect(){
	
}
void CNTTTotalFood::OnExportSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CGuiMenu menu(this);
	HMENU hSubMenu = NULL;
	CString tmpStr;
	CRect rect;
	CStringArray arrFeeType;	
	menu.CreatePopupMenu();
	m_wndExport.GetWindowRect(&rect);

	TranslateString(_T("Mẫu 1"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 1, tmpStr);

	TranslateString(_T("Mẫu 2 (mới)"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 2, tmpStr);

	int nPos = menu.TrackPopupMenu(TPM_RETURNCMD|TPM_RIGHTALIGN|TPM_BOTTOMALIGN|TPM_NONOTIFY, rect.right, rect.top, this);
	if(!m_bHauCan)
		OnExport_ALL();
	else
	{
		switch (nPos)
		{
		case 1:
			OnExportHCKT();
			break;
		case 2:
			OnExportHCKT_VER2();
			break;		
		}
	}
	
} 
void CNTTTotalFood::Ontruoc10hSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
void CNTTTotalFood::Onsau10hSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
void CNTTTotalFood::OnbaocatSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
CString CNTTTotalFood::GetQueryString(){
	CString szSQL, szWhere, szSubWhere, szField, szField1, szField2, szSumField1, szSumField2, szSumField3, szSumField4, szSumField5,
		tmpStr, tmpStr2, szTemp, szRoomID, szObjects;

	CStringToken token(m_szProductIDStr);
	for (int i = 0; i < token.GetSize(); i++)
	{
		token.GetAt(i, szTemp);
		tmpStr.Format(_T("FFID_%s"), szTemp);
		tmpStr2.Format(_T("FFID_%sC"), szTemp);
		szSumField1.AppendFormat(_T("SUM(%s - %s) AS %s,"),tmpStr, tmpStr2, tmpStr);
		szSumField3.AppendFormat(_T("0,0,"));
		szSumField4.AppendFormat(_T("NVL(SUM(%s), 0) AS %s,"),tmpStr, tmpStr);
		szField1.AppendFormat(_T("CASE WHEN hfl_feeid = '%s' AND deptid IN('A1','A1-A','A1-C','A12','A16') AND hfl_index1 IN(200) THEN hfol_qtyorder ELSE 0 END AS %s,"), szTemp,  tmpStr);
		szField1.AppendFormat(_T("CASE WHEN hfl_feeid = '%s' AND deptid IN('A1','A1-A','A1-C','A12','A16') AND hfl_index1 IN(200) AND hfe_refstatus = 'C' THEN hfol_qtyorder ELSE 0 END AS %s,"), szTemp,  tmpStr2);
	}

	CStringToken token2(m_szProductIDStr2);
	for (int i = 0; i < token2.GetSize(); i++)
	{
		token2.GetAt(i, szTemp);
		tmpStr.Format(_T("FFID2_%s"), szTemp);
		tmpStr2.Format(_T("FFID2_%sC"), szTemp);
		szSumField2.AppendFormat(_T("SUM(%s - %s) AS %s,"),tmpStr, tmpStr2, tmpStr);
		szSumField3.AppendFormat(_T("0,0,"));
		szSumField5.AppendFormat(_T("NVL(SUM(%s), 0) AS %s,"),tmpStr, tmpStr);

		szField2.AppendFormat(_T("CASE WHEN hfl_feeid = '%s' AND deptid NOT IN('A1','A1-A','A1-C','A12','A16') AND hfl_index1 IN(200)") \
			_T(" AND HFL_MEDICAL_CODE NOT IN('BT01-Cơm', 'PK4')") \
							  _T(" THEN hfol_qtyorder ELSE 0 END AS %s,"), szTemp,  tmpStr);
		szField2.AppendFormat(_T("CASE WHEN hfl_feeid = '%s' AND deptid NOT IN('A1','A1-A','A1-C','A12','A16') AND hfl_index1 IN(200) AND hfe_refstatus = 'C'") \
			_T(" AND HFL_MEDICAL_CODE NOT IN('BT01-Cơm', 'PK4')") \
							  _T(" THEN hfol_qtyorder ELSE 0 END AS %s,"), szTemp,  tmpStr2);
	}

	CStringToken token3(m_szProductIDStr3);
	for (int i = 0; i < token3.GetSize(); i++)
	{
		token3.GetAt(i, szTemp);
		tmpStr.Format(_T("FFID3_%s"), szTemp);
		tmpStr2.Format(_T("FFID3_%sC"), szTemp);
		szSumField2.AppendFormat(_T("SUM(%s - %s) AS %s,"),tmpStr, tmpStr2, tmpStr);
		szSumField3.AppendFormat(_T("0,0,"));
		szSumField5.AppendFormat(_T("NVL(SUM(%s), 0) AS %s,"),tmpStr, tmpStr);
		szField2.AppendFormat(_T("CASE WHEN hfl_feeid = '%s' AND hfl_index1 IN(201) THEN hfol_qtyorder ELSE 0 END AS %s,"), szTemp,  tmpStr);
		szField2.AppendFormat(_T("CASE WHEN hfl_feeid = '%s' AND hfe_refstatus = 'C' AND hfl_index1 IN(201) THEN hfol_qtyorder ELSE 0 END AS %s,"), szTemp,  tmpStr2);
	}

	CStringToken token4(m_szProductIDStr4);
	for (int i = 0; i < token4.GetSize(); i++)
	{
		token4.GetAt(i, szTemp);
		tmpStr.Format(_T("FFID4_%s"), szTemp);
		tmpStr2.Format(_T("FFID4_%sC"), szTemp);
		szSumField2.AppendFormat(_T("SUM(%s - %s) AS %s,"),tmpStr, tmpStr2, tmpStr);
		szSumField3.AppendFormat(_T("0,0,"));
		szSumField5.AppendFormat(_T("NVL(SUM(%s), 0) AS %s,"),tmpStr, tmpStr);
		szField2.AppendFormat(_T("CASE WHEN hfl_feeid = '%s' AND hfl_index1 IN(202) THEN hfol_qtyorder ELSE 0 END AS %s,"), szTemp,  tmpStr);
		szField2.AppendFormat(_T("CASE WHEN hfl_feeid = '%s' AND hfe_refstatus = 'C' AND hfl_index1 IN(202) THEN hfol_qtyorder ELSE 0 END AS %s,"), szTemp,  tmpStr2);
	}

	CStringToken token5(m_szProductIDStr5);
	for (int i = 0; i < token5.GetSize(); i++)
	{
		token5.GetAt(i, szTemp);
		tmpStr.Format(_T("FFID5_%s"), szTemp);
		tmpStr2.Format(_T("FFID5_%sC"), szTemp);
		szSumField2.AppendFormat(_T("SUM(%s - %s) AS %s,"),tmpStr, tmpStr2, tmpStr);
		szSumField3.AppendFormat(_T("0,0,"));
		szSumField5.AppendFormat(_T("NVL(SUM(%s), 0) AS %s,"),tmpStr, tmpStr);
		szField2.AppendFormat(_T("CASE WHEN hfl_feeid = '%s' AND hfl_index1 IN(203) THEN hfol_qtyorder ELSE 0 END AS %s,"), szTemp,  tmpStr);
		szField2.AppendFormat(_T("CASE WHEN hfl_feeid = '%s' AND hfe_refstatus = 'C' AND hfl_index1 IN(203) THEN hfol_qtyorder ELSE 0 END AS %s,"), szTemp,  tmpStr2);
	}

	szWhere.AppendFormat(_T(" AND hfo_orderdate BETWEEN TO_TIMESTAMP('%s 00:00:00', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" AND TO_TIMESTAMP('%s 23:59:59', 'YYYY-MM-DD HH24:MI:SS') AND hfo_approvedate < TO_TIMESTAMP('%s 10:00:00', 'YYYY-MM-DD HH24:MI:SS') AND hfo_depttype <> 'KB'"), m_szDate.Left(10), m_szDate.Left(10), m_szDate.Left(10));


	if(!m_szDepartmentKey.IsEmpty())
	{
		szSubWhere.AppendFormat(_T(" AND deptid = '%s'"), m_szDepartmentKey);
	}

	/*if(m_bHauCan)
		szWhere.AppendFormat(_T(" AND NVL(hfl_deptid, 'X') = 'HCKT'"));
	else
		szWhere.AppendFormat(_T(" AND NVL(hfl_deptid, 'X') <> 'HCKT'"));*/
	if(m_bHauCan)
		szWhere.AppendFormat(_T(" AND NVL(hfl_deptid, 'X') = 'HCKT' AND NVL(hfl_index1, 'N') <> '212' AND NVL(hfos_milk,'N')<>'MILK'"));
	else
		szWhere.AppendFormat(_T(" AND NVL(hfl_deptid, 'X') <> 'HCKT' AND NVL(hfl_index1, 'N') <> '212' AND NVL(hfos_milk,'N')<>'MILK'"));

	szSQL.Format(_T(" SELECT sd_index2,") \
		//GIANGDH updated sd_id_alias 07/12/2023
		_T("   sd_id, sd_id_alias,") \
		_T("   deptid,") \
		_T("   %s %s ") \
		_T("   NVL(SUM(foodqty), 0) AS foodqty") \
		_T(" FROM sys_dept") \
		_T(" LEFT JOIN") \
		_T("   (SELECT deptid,") \
		_T("     %s %s ") \
		_T("     SUM(foodqty - foodqtyC) AS foodqty") \
		_T("   FROM") \
		_T("     (SELECT deptid,") \
		_T("       %s %s") \
		_T("       foodqty,") \
		_T("       foodqtyC") \
		_T("     FROM") \
		_T("       (SELECT") \
		_T("         CASE") \
		_T("           WHEN hfo_depttype = 'DT'") \
		_T("           THEN hfo_deptid") \
		_T("           ELSE hcr_admitdept") \
		_T("         END           AS deptid,") \
		_T("         hfol_qtyorder AS foodqty,") \
		_T("         CASE") \
		_T("           WHEN hfe_refstatus = 'C'") \
		_T("           THEN hfol_qtyorder") \
		_T("           ELSE 0") \
		_T("         END AS foodqtyC,") \
		_T("         HFL_MEDICAL_CODE,") \
		_T("         hfl_name,") \
		_T("         hfl_feeid,") \
		_T("         hfol_qtyorder,") \
		_T("         hfe_refstatus,") \
		_T("         hfl_index1") \
		_T("       FROM hms_feefood") \
		_T("       LEFT JOIN hms_feefoodline") \
		_T("       ON(hfo_orderid=hfol_orderid)") \
		_T("       LEFT JOIN hms_clinical_record") \
		_T("       ON(hcr_docno=hfo_docno)") \
		_T("       LEFT JOIN hms_doc") \
		_T("       ON(hd_docno=hfo_docno)") \
		_T("       LEFT JOIN hms_fee_list") \
		_T("       ON(hfl_feeid        =hfol_itemid)") \
		_T("       LEFT JOIN hms_foodordersheet ON (hfos_orderid = hfo_reforder_id)") \
		_T("       WHERE hfo_ordertype = 'D' AND NVL(HFOS_DEPTTYPE_NN,'N')<>'HCNN' ") \
		_T("       AND hfo_orderstatus = 'A' %s ") \
		_T("       ) tbl") \
		_T("     ) tbl3") \
		_T("   GROUP BY deptid") \
		_T("   ) ON(deptid = sd_id)") \
		_T(" WHERE sd_type IN ('DT') AND sd_id NOT IN ('A14', 'A22', 'B5', 'B10', 'B15', 'CYBERL', 'C6', 'C18', 'C15', 'KD1', 'B3')") \
		_T(" AND SD_USE_NORMAL='Y' %s ") \
		_T(" GROUP BY sd_index2,") \
		_T("   sd_id,sd_id_alias,") \
		_T("   deptid") \
		_T(" ORDER BY sd_index2"), szSumField4, szSumField5, szSumField1, szSumField2, szField1, szField2, szWhere, szSubWhere);

	//_msg(_T("%s"), szSQL);
	return szSQL;
}

CString CNTTTotalFood::GetQueryStringItems(){
	CString szSQL, szWhere, szSubWhere, tmpStr, szTemp, szRoomID, szObjects;

	szWhere.AppendFormat(_T(" AND hfo_orderdate BETWEEN TO_TIMESTAMP('%s 00:00:00', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" AND TO_TIMESTAMP('%s 23:59:59', 'YYYY-MM-DD HH24:MI:SS') AND hfo_approvedate < TO_TIMESTAMP('%s 10:00:00', 'YYYY-MM-DD HH24:MI:SS') AND hfo_depttype <> 'KB'"), m_szDate.Left(10), m_szDate.Left(10), m_szDate.Left(10));

	if(!m_szDepartmentKey.IsEmpty())
	{
		szSubWhere.AppendFormat(_T(" AND deptid3 = '%s'"), m_szDepartmentKey);
	}

	/*if(m_bHauCan)
		szWhere.AppendFormat(_T(" AND NVL(hfl_deptid, 'X') = 'HCKT'"));
	else
		szWhere.AppendFormat(_T(" AND NVL(hfl_deptid, 'X') <> 'HCKT'"));*/
	if(m_bHauCan)
		szWhere.AppendFormat(_T(" AND NVL(hfl_deptid, 'X') = 'HCKT' AND NVL(hfl_index1, 'N') <> '212' AND NVL(hfos_milk,'N')<>'MILK'"));
	else
		szWhere.AppendFormat(_T(" AND NVL(hfl_deptid, 'X') <> 'HCKT' AND NVL(hfl_index1, 'N') <> '212' AND NVL(hfos_milk,'N')<>'MILK'"));

	szSQL.Format(_T(" SELECT sd_index2,") \
		//GIANGDH updated sd_id_alias 07/12/2023
		_T("   sd_id, sd_id_alias,") \
		_T("   deptid3,") \
		_T("   NVL(SUM(BT10), 0)   AS BT10,") \
		_T("   NVL(SUM(PK4), 0)    AS PK4,") \
		_T("   NVL(SUM(tongT), 0)  AS tongT,") \
		_T("   NVL(SUM(tongC), 0)  AS tongC,") \
		_T("   NVL(SUM(tongTT), 0) AS tongTT") \
		_T(" FROM sys_dept") \
		_T(" LEFT JOIN") \
		_T("   (SELECT deptid           AS deptid3,") \
		_T("     SUM(BT10   - BT10CT)   AS BT10,") \
		_T("     SUM(PK4    - PK4CT)    AS PK4,") \
		_T("     SUM(tongT  - tongTCT)  AS tongT,") \
		_T("     SUM(tongC  - tongCCT)  AS tongC,") \
		_T("     SUM(tongTT - tongTTCT) AS tongTT") \
		_T("   FROM") \
		_T("     (SELECT deptid,") \
		_T("       CASE") \
		_T("         WHEN hfl_index1 = 200") \
		_T("         AND HFL_MEDICAL_CODE   = 'BT01-Cơm'") \
		_T("         THEN hfol_qtyorder") \
		_T("         ELSE 0") \
		_T("       END AS BT10,") \
		_T("       CASE") \
		_T("         WHEN hfl_index1   = 200") \
		_T("         AND HFL_MEDICAL_CODE     = 'BT01-Cơm'") \
		_T("         AND hfe_refstatus = 'C'") \
		_T("         THEN hfol_qtyorder") \
		_T("         ELSE 0") \
		_T("       END AS BT10CT,") \
		_T("       CASE") \
		_T("         WHEN hfl_index1 = 200") \
		_T("         AND HFL_MEDICAL_CODE   = 'PK4'") \
		_T("         THEN hfol_qtyorder") \
		_T("         ELSE 0") \
		_T("       END AS PK4,") \
		_T("       CASE") \
		_T("         WHEN hfl_index1   = 200") \
		_T("         AND HFL_MEDICAL_CODE     = 'PK4'") \
		_T("         AND hfe_refstatus = 'C'") \
		_T("         THEN hfol_qtyorder") \
		_T("         ELSE 0") \
		_T("       END AS PK4CT,") \
		_T("       CASE") \
		_T("         WHEN hfl_index1 = 200") \
		_T("         AND hfol_type   = 'T'") \
		_T("         THEN hfol_qtyorder") \
		_T("         ELSE 0") \
		_T("       END AS tongT,") \
		_T("       CASE") \
		_T("         WHEN hfl_index1   = 200") \
		_T("         AND hfol_type     = 'T'") \
		_T("         AND hfe_refstatus = 'C'") \
		_T("         THEN hfol_qtyorder") \
		_T("         ELSE 0") \
		_T("       END AS tongTCT,") \
		_T("       CASE") \
		_T("         WHEN hfl_index1 = 200") \
		_T("         AND hfol_type   = 'C'") \
		_T("         THEN hfol_qtyorder") \
		_T("         ELSE 0") \
		_T("       END AS tongC,") \
		_T("       CASE") \
		_T("         WHEN hfl_index1   = 200") \
		_T("         AND hfol_type     = 'C'") \
		_T("         AND hfe_refstatus = 'C'") \
		_T("         THEN hfol_qtyorder") \
		_T("         ELSE 0") \
		_T("       END AS tongCCT,") \
		_T("       CASE") \
		_T("         WHEN hfl_index1 = 200") \
		_T("         THEN hfol_qtyorder") \
		_T("         ELSE 0") \
		_T("       END AS tongTT,") \
		_T("       CASE") \
		_T("         WHEN hfl_index1   = 200") \
		_T("         AND hfe_refstatus = 'C'") \
		_T("         THEN hfol_qtyorder") \
		_T("         ELSE 0") \
		_T("       END AS tongTTCT") \
		_T("     FROM") \
		_T("       (SELECT") \
		_T("         CASE") \
		_T("           WHEN hfo_depttype = 'DT'") \
		_T("           THEN hfo_deptid") \
		_T("           ELSE hcr_admitdept") \
		_T("         END           AS deptid,") \
		_T("         hfol_qtyorder AS foodqty,") \
		_T("         CASE") \
		_T("           WHEN hfe_refstatus = 'C'") \
		_T("           THEN hfol_qtyorder") \
		_T("           ELSE 0") \
		_T("         END AS foodqtyC,") \
		_T("         HFL_MEDICAL_CODE,") \
		_T("         hfl_name,") \
		_T("         hfl_feeid,") \
		_T("         hfol_qtyorder,") \
		_T("         hfe_refstatus,") \
		_T("         hfl_index1,") \
		_T("         hfol_type") \
		_T("       FROM hms_feefood") \
		_T("       LEFT JOIN hms_feefoodline") \
		_T("       ON(hfo_orderid=hfol_orderid)") \
		_T("       LEFT JOIN hms_clinical_record") \
		_T("       ON(hcr_docno=hfo_docno)") \
		_T("       LEFT JOIN hms_doc") \
		_T("       ON(hd_docno=hfo_docno)") \
		_T("       LEFT JOIN hms_fee_list") \
		_T("       ON(hfl_feeid        =hfol_itemid)") \
		_T(" LEFT JOIN hms_foodordersheet ON (hfos_orderid = hfo_reforder_id)") \
		_T("       WHERE hfo_ordertype = 'D' AND NVL(HFOS_DEPTTYPE_NN,'N')<>'HCNN' ") \
		_T("       AND hfo_orderstatus = 'A' %s") \
		_T("       ) tb3") \
		_T("     WHERE HFL_MEDICAL_CODE IN('BT01-Cơm', 'PK4')") \
		_T("     AND deptid NOT  IN('A1','A1-A','A1-C', 'A12', 'A16')") \
		_T("     ) tb4") \
		_T("   GROUP BY deptid") \
		_T("   ) ON (deptid3 = sd_id)") \
		_T(" WHERE sd_type IN ('DT') AND sd_id NOT IN ('A14', 'A22', 'B5', 'B10', 'B15', 'CYBERL', 'C6', 'C18', 'C15', 'KD1', 'B3')") \
		_T(" AND SD_USE_NORMAL='Y' %s ") \
		_T(" GROUP BY sd_index2,") \
		_T("   sd_id,sd_id_alias,") \
		_T("   deptid3") \
		_T(" ORDER BY sd_index2"), szWhere, szSubWhere);
	
	//_fmsg(_T("%s"), szSQL);
	return szSQL;
}

CString CNTTTotalFood::GetQueryStringTotal(){
	CString szSQL, szWhere, szSubWhere, tmpStr, szTemp, szRoomID, szObjects;

	szWhere.AppendFormat(_T(" AND hfo_orderdate BETWEEN TO_TIMESTAMP('%s 00:00:00', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" AND TO_TIMESTAMP('%s 23:59:59', 'YYYY-MM-DD HH24:MI:SS') AND hfo_approvedate < TO_TIMESTAMP('%s 10:00:00', 'YYYY-MM-DD HH24:MI:SS') AND hfo_depttype <> 'KB'"), m_szDate.Left(10), m_szDate.Left(10), m_szDate.Left(10));

	if(!m_szDepartmentKey.IsEmpty())
	{
		szSubWhere.AppendFormat(_T(" AND deptid2 = '%s'"), m_szDepartmentKey);
	}

	/*if(m_bHauCan)
		szWhere.AppendFormat(_T(" AND NVL(hfl_deptid, 'X') = 'HCKT'"));
	else
		szWhere.AppendFormat(_T(" AND NVL(hfl_deptid, 'X') <> 'HCKT'"));*/

	if(m_bHauCan)
		szWhere.AppendFormat(_T(" AND NVL(hfl_deptid, 'X') = 'HCKT' AND NVL(hfl_index1, 'N') <> '212' AND NVL(hfos_milk,'N')<>'MILK'"));
	else
		szWhere.AppendFormat(_T(" AND NVL(hfl_deptid, 'X') <> 'HCKT' AND NVL(hfl_index1, 'N') <> '212' AND NVL(hfos_milk,'N')<>'MILK'"));

	szSQL.Format(_T(" SELECT sd_index2,") \
		//GIANGDH updated sd_id_alias 07/12/2023
		_T("   sd_id, sd_id_alias,") \
		_T("   deptid2,") \
		_T("   NVL(SUM(comA1A16), 0)  AS comA1A16,") \
		_T("   NVL(SUM(com), 0)       AS com,") \
		_T("   NVL(SUM(chao), 0)      AS chao,") \
		_T("   NVL(SUM(OT), 0)        AS OT,") \
		_T("   NVL(SUM(sua), 0)       AS sua,") \
		_T("   NVL(SUM(comA1A16T), 0) AS comA1A16T,") \
		_T("   NVL(SUM(comT), 0)      AS comT,") \
		_T("   NVL(SUM(chaoT), 0)     AS chaoT,") \
		_T("   NVL(SUM(OTT), 0)       AS OTT,") \
		_T("   NVL(SUM(suaT), 0)      AS suaT,") \
		_T("   NVL(SUM(comA1A16C), 0) AS comA1A16C,") \
		_T("   NVL(SUM(comC), 0)      AS comC,") \
		_T("   NVL(SUM(chaoC), 0)     AS chaoC,") \
		_T("   NVL(SUM(OTC), 0)       AS OTC,") \
		_T("   NVL(SUM(suaC), 0)      AS suaC") \
		_T(" FROM sys_dept") \
		_T(" LEFT JOIN") \
		_T("   (SELECT deptid                 AS deptid2,") \
		_T("     SUM(comA1A16  - comA1A16CT)  AS comA1A16,") \
		_T("     SUM(com       - comCT)       AS com,") \
		_T("     SUM(chao      - chaoCT)      AS chao,") \
		_T("     SUM(OT        - OTCT)        AS OT,") \
		_T("     SUM(sua       - suaCT)       AS sua,") \
		_T("     SUM(comA1A16T - comA1A16TCT) AS comA1A16T,") \
		_T("     SUM(comT      - comTCT)      AS comT,") \
		_T("     SUM(chaoT     - chaoTCT)     AS chaoT,") \
		_T("     SUM(OTT       - OTTCT)       AS OTT,") \
		_T("     SUM(suaT      - suaTCT)      AS suaT,") \
		_T("     SUM(comA1A16C - comA1A16CCT) AS comA1A16C,") \
		_T("     SUM(comC      - comCCT)      AS comC,") \
		_T("     SUM(chaoC     - chaoCCT)     AS chaoC,") \
		_T("     SUM(OTC       - OTCCT)       AS OTC,") \
		_T("     SUM(suaC      - suaCCT)      AS suaC") \
		_T("   FROM") \
		_T("     (SELECT deptid,") \
		_T("       CASE") \
		_T("         WHEN hfl_index1 = 200") \
		_T("         AND deptid     IN('A1','A1-A','A1-C','A12','A16')") \
		_T("         THEN hfol_qtyorder") \
		_T("         ELSE 0") \
		_T("       END AS comA1A16,") \
		_T("       CASE") \
		_T("         WHEN hfl_index1   = 200") \
		_T("         AND deptid       IN('A1','A1-A','A1-C','A12','A16')") \
		_T("         AND hfe_refstatus = 'C'") \
		_T("         THEN hfol_qtyorder") \
		_T("         ELSE 0") \
		_T("       END AS comA1A16CT,") \
		_T("       CASE") \
		_T("         WHEN hfl_index1 = 200") \
		_T("         AND deptid     IN('A1','A1-A','A1-C','A12','A16')") \
		_T("         AND hfol_type   = 'T'") \
		_T("         THEN hfol_qtyorder") \
		_T("         ELSE 0") \
		_T("       END AS comA1A16T,") \
		_T("       CASE") \
		_T("         WHEN hfl_index1   = 200") \
		_T("         AND deptid       IN('A1','A1-A','A1-C','A12','A16')") \
		_T("         AND hfol_type     = 'T'") \
		_T("         AND hfe_refstatus = 'C'") \
		_T("         THEN hfol_qtyorder") \
		_T("         ELSE 0") \
		_T("       END AS comA1A16TCT,") \
		_T("       CASE") \
		_T("         WHEN hfl_index1 = 200") \
		_T("         AND deptid     IN('A1','A1-A','A1-C','A12','A16')") \
		_T("         AND hfol_type   = 'C'") \
		_T("         THEN hfol_qtyorder") \
		_T("         ELSE 0") \
		_T("       END AS comA1A16C,") \
		_T("       CASE") \
		_T("         WHEN hfl_index1   = 200") \
		_T("         AND deptid       IN('A1','A1-A','A1-C','A12','A16')") \
		_T("         AND hfol_type     = 'C'") \
		_T("         AND hfe_refstatus = 'C'") \
		_T("         THEN hfol_qtyorder") \
		_T("         ELSE 0") \
		_T("       END AS comA1A16CCT,") \
		_T("       CASE") \
		_T("         WHEN hfl_index1 = 200") \
		_T("         AND deptid NOT IN('A1','A1-A','A1-C','A12','A16')") \
		_T("         THEN hfol_qtyorder") \
		_T("         ELSE 0") \
		_T("       END AS com,") \
		_T("       CASE") \
		_T("         WHEN hfl_index1   = 200") \
		_T("         AND deptid NOT   IN('A1','A1-A','A1-C','A12','A16')") \
		_T("         AND hfe_refstatus = 'C'") \
		_T("         THEN hfol_qtyorder") \
		_T("         ELSE 0") \
		_T("       END AS comCT,") \
		_T("       CASE") \
		_T("         WHEN hfl_index1 = 200") \
		_T("         AND deptid NOT IN('A1','A1-A','A1-C','A12','A16')") \
		_T("         AND hfol_type   = 'T'") \
		_T("         THEN hfol_qtyorder") \
		_T("         ELSE 0") \
		_T("       END AS comT,") \
		_T("       CASE") \
		_T("         WHEN hfl_index1   = 200") \
		_T("         AND deptid NOT   IN('A1','A1-A','A1-C','A12','A16')") \
		_T("         AND hfol_type     = 'T'") \
		_T("         AND hfe_refstatus = 'C'") \
		_T("         THEN hfol_qtyorder") \
		_T("         ELSE 0") \
		_T("       END AS comTCT,") \
		_T("       CASE") \
		_T("         WHEN hfl_index1 = 200") \
		_T("         AND deptid NOT IN('A1','A1-A','A1-C','A12','A16')") \
		_T("         AND hfol_type   = 'C'") \
		_T("         THEN hfol_qtyorder") \
		_T("         ELSE 0") \
		_T("       END AS comC,") \
		_T("       CASE") \
		_T("         WHEN hfl_index1   = 200") \
		_T("         AND deptid NOT   IN('A1','A1-A','A1-C','A12','A16')") \
		_T("         AND hfol_type     = 'C'") \
		_T("         AND hfe_refstatus = 'C'") \
		_T("         THEN hfol_qtyorder") \
		_T("         ELSE 0") \
		_T("       END AS comCCT,") \
		_T("       CASE") \
		_T("         WHEN hfl_index1 = 201") \
		_T("         THEN hfol_qtyorder") \
		_T("         ELSE 0") \
		_T("       END AS chao,") \
		_T("       CASE") \
		_T("         WHEN hfl_index1   = 201") \
		_T("         AND hfe_refstatus = 'C'") \
		_T("         THEN hfol_qtyorder") \
		_T("         ELSE 0") \
		_T("       END AS chaoCT,") \
		_T("       CASE") \
		_T("         WHEN hfl_index1 = 201") \
		_T("         AND hfol_type   = 'T'") \
		_T("         THEN hfol_qtyorder") \
		_T("         ELSE 0") \
		_T("       END AS chaoT,") \
		_T("       CASE") \
		_T("         WHEN hfl_index1   = 201") \
		_T("         AND hfol_type     = 'T'") \
		_T("         AND hfe_refstatus = 'C'") \
		_T("         THEN hfol_qtyorder") \
		_T("         ELSE 0") \
		_T("       END AS chaoTCT,") \
		_T("       CASE") \
		_T("         WHEN hfl_index1 = 201") \
		_T("         AND hfol_type   = 'C'") \
		_T("         THEN hfol_qtyorder") \
		_T("         ELSE 0") \
		_T("       END AS chaoC,") \
		_T("       CASE") \
		_T("         WHEN hfl_index1   = 201") \
		_T("         AND hfol_type     = 'C'") \
		_T("         AND hfe_refstatus = 'C'") \
		_T("         THEN hfol_qtyorder") \
		_T("         ELSE 0") \
		_T("       END AS chaoCCT,") \
		_T("       CASE") \
		_T("         WHEN hfl_index1 = 202") \
		_T("         THEN hfol_qtyorder") \
		_T("         ELSE 0") \
		_T("       END AS OT,") \
		_T("       CASE") \
		_T("         WHEN hfl_index1   = 202") \
		_T("         AND hfe_refstatus = 'C'") \
		_T("         THEN hfol_qtyorder") \
		_T("         ELSE 0") \
		_T("       END AS OTCT,") \
		_T("       CASE") \
		_T("         WHEN hfl_index1 = 202") \
		_T("         AND hfol_type   = 'T'") \
		_T("         THEN hfol_qtyorder") \
		_T("         ELSE 0") \
		_T("       END AS OTT,") \
		_T("       CASE") \
		_T("         WHEN hfl_index1   = 202") \
		_T("         AND hfol_type     = 'T'") \
		_T("         AND hfe_refstatus = 'C'") \
		_T("         THEN hfol_qtyorder") \
		_T("         ELSE 0") \
		_T("       END AS OTTCT,") \
		_T("       CASE") \
		_T("         WHEN hfl_index1 = 202") \
		_T("         AND hfol_type   = 'C'") \
		_T("         THEN hfol_qtyorder") \
		_T("         ELSE 0") \
		_T("       END AS OTC,") \
		_T("       CASE") \
		_T("         WHEN hfl_index1   = 202") \
		_T("         AND hfol_type     = 'C'") \
		_T("         AND hfe_refstatus = 'C'") \
		_T("         THEN hfol_qtyorder") \
		_T("         ELSE 0") \
		_T("       END AS OTCCT,") \
		_T("       CASE") \
		_T("         WHEN hfl_index1 = 203") \
		_T("         THEN hfol_qtyorder") \
		_T("         ELSE 0") \
		_T("       END AS sua,") \
		_T("       CASE") \
		_T("         WHEN hfl_index1   = 203") \
		_T("         AND hfe_refstatus = 'C'") \
		_T("         THEN hfol_qtyorder") \
		_T("         ELSE 0") \
		_T("       END AS suaCT,") \
		_T("       CASE") \
		_T("         WHEN hfl_index1 = 203") \
		_T("         AND hfol_type   = 'T'") \
		_T("         THEN hfol_qtyorder") \
		_T("         ELSE 0") \
		_T("       END AS suaT,") \
		_T("       CASE") \
		_T("         WHEN hfl_index1   = 203") \
		_T("         AND hfol_type     = 'T'") \
		_T("         AND hfe_refstatus = 'C'") \
		_T("         THEN hfol_qtyorder") \
		_T("         ELSE 0") \
		_T("       END AS suaTCT,") \
		_T("       CASE") \
		_T("         WHEN hfl_index1 = 203") \
		_T("         AND hfol_type   = 'C'") \
		_T("         THEN hfol_qtyorder") \
		_T("         ELSE 0") \
		_T("       END AS suaC,") \
		_T("       CASE") \
		_T("         WHEN hfl_index1   = 203") \
		_T("         AND hfol_type     = 'C'") \
		_T("         AND hfe_refstatus = 'C'") \
		_T("         THEN hfol_qtyorder") \
		_T("         ELSE 0") \
		_T("       END AS suaCCT") \
		_T("     FROM") \
		_T("       (SELECT") \
		_T("         CASE") \
		_T("           WHEN hfo_depttype = 'DT'") \
		_T("           THEN hfo_deptid") \
		_T("           ELSE hcr_admitdept") \
		_T("         END           AS deptid,") \
		_T("         hfol_qtyorder AS foodqty,") \
		_T("         CASE") \
		_T("           WHEN hfe_refstatus = 'C'") \
		_T("           THEN hfol_qtyorder") \
		_T("           ELSE 0") \
		_T("         END AS foodqtyC,") \
		_T("         HFL_MEDICAL_CODE,") \
		_T("         hfl_name,") \
		_T("         hfl_feeid,") \
		_T("         hfol_qtyorder,") \
		_T("         hfe_refstatus,") \
		_T("         hfl_index1,") \
		_T("         hfol_type") \
		_T("       FROM hms_feefood") \
		_T("       LEFT JOIN hms_feefoodline") \
		_T("       ON(hfo_orderid=hfol_orderid)") \
		_T("       LEFT JOIN hms_clinical_record") \
		_T("       ON(hcr_docno=hfo_docno)") \
		_T("       LEFT JOIN hms_doc") \
		_T("       ON(hd_docno=hfo_docno)") \
		_T("       LEFT JOIN hms_fee_list") \
		_T("       ON(hfl_feeid        =hfol_itemid)") \
		_T(" LEFT JOIN hms_foodordersheet ON (hfos_orderid = hfo_reforder_id)") \
		_T("       WHERE hfo_ordertype = 'D' AND NVL(HFOS_DEPTTYPE_NN,'N')<>'HCNN' ") \
		_T("       AND hfo_orderstatus = 'A' %s ") \
		_T("       ) tbl") \
		_T("     WHERE (HFL_MEDICAL_CODE NOT IN('BT01-Cơm', 'PK4')") \
		_T("     OR (HFL_MEDICAL_CODE        IN('BT01-Cơm', 'PK4')") \
		_T("     AND deptid           IN('A1','A1-A','A1-C', 'A12', 'A16')))") \
		_T("     ) tb2") \
		_T("   GROUP BY deptid") \
		_T("   ) ON (deptid2 = sd_id)") \
		_T(" WHERE sd_type IN ('DT') AND sd_id NOT IN ('A14', 'A22', 'B5', 'B10', 'B15', 'CYBERL', 'C6', 'C18', 'C15', 'KD1', 'B3')") \
		_T(" AND SD_USE_NORMAL='Y' %s ") \
		_T(" GROUP BY sd_index2,") \
		_T("   sd_id,sd_id_alias,") \
		_T("   deptid2") \
		_T(" ORDER BY sd_index2"), szWhere, szSubWhere);
	
	//_fmsg(_T("%s"), szSQL);
	return szSQL;
}

CString CNTTTotalFood::GetQueryStringTotal10h(){
	CString szSQL, szWhere, szWhere2, szSubWhere, tmpStr, szTemp, szRoomID, szObjects;
	
	szWhere.AppendFormat(_T(" AND hfo_orderdate BETWEEN TO_TIMESTAMP('%s 00:00:00', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" AND TO_TIMESTAMP('%s 23:59:59', 'YYYY-MM-DD HH24:MI:SS')"), m_szDate.Left(10), m_szDate.Left(10));

	szWhere2.AppendFormat(_T(" AND ((hfo_orderdate BETWEEN TO_TIMESTAMP('%s 00:00:00', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" AND TO_TIMESTAMP ('%s 23:59:59', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" AND hfo_depttype = 'KB')") \
		_T(" OR (hfo_orderdate BETWEEN TO_TIMESTAMP('%s 00:00:00', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" AND TO_TIMESTAMP('%s 23:59:59', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" AND hfo_approvedate > TO_TIMESTAMP('%s 10:00:00', 'YYYY-MM-DD HH24:MI:SS')))"), m_szDate.Left(10), m_szDate.Left(10), m_szDate.Left(10), m_szDate.Left(10), m_szDate.Left(10));

	if(!m_szDepartmentKey.IsEmpty())
	{
		szSubWhere.AppendFormat(_T(" AND deptid = '%s'"), m_szDepartmentKey);
	}

	if(m_bHauCan)
		{
			/*szWhere.AppendFormat(_T(" AND NVL(hfl_deptid, 'X') = 'HCKT'"));
			szWhere2.AppendFormat(_T(" AND NVL(hfl_deptid, 'X') = 'HCKT'"));*/
			szWhere.AppendFormat(_T(" AND NVL(hfl_deptid, 'X') = 'HCKT' AND NVL(hfl_index1, 'N') <> '212' AND NVL(hfos_milk,'N')<>'MILK'"));
			szWhere2.AppendFormat(_T(" AND NVL(hfl_deptid, 'X') = 'HCKT' AND NVL(hfl_index1, 'N') <> '212' AND NVL(hfos_milk,'N')<>'MILK'"));

		}
	else
		{
			/*szWhere.AppendFormat(_T(" AND NVL(hfl_deptid, 'X') <> 'HCKT'"));
			szWhere2.AppendFormat(_T(" AND NVL(hfl_deptid, 'X') <> 'HCKT'"));*/
			szWhere.AppendFormat(_T(" AND NVL(hfl_deptid, 'X') <> 'HCKT' AND NVL(hfl_index1, 'N') <> '212' AND NVL(hfos_milk,'N')<>'MILK'"));
			szWhere2.AppendFormat(_T(" AND NVL(hfl_deptid, 'X') <> 'HCKT' AND NVL(hfl_index1, 'N') <> '212' AND NVL(hfos_milk,'N')<>'MILK'"));
		}

	szSQL.Format(_T(" SELECT sd_index2,") \
		//GIANGDH updated sd_id_alias 07/12/2023
		_T("   sd_id, sd_id_alias,") \
		_T("   deptid,") \
		_T("   NVL(SUM(qtyS), 0)     AS vienS,") \
		_T("   NVL(SUM(CASE WHEN sd_id NOT IN('A1','A1-A','A1-C', 'A12', 'A16') AND HFL_MEDICAL_CODE IN('BT01-Cơm', 'PK4') THEN qtyTCom ELSE 0 END), 0) AS vientComTT,") \
		_T("   NVL(SUM(CASE WHEN sd_id IN('A1','A1-A','A1-C', 'A12', 'A16') THEN qtyTCom ELSE 0 END), 0) AS vientComA1A16,") \
		_T("   NVL(SUM(CASE WHEN sd_id NOT IN('A1','A1-A','A1-C', 'A12', 'A16') AND HFL_MEDICAL_CODE NOT IN('BT01-Cơm', 'PK4') THEN qtyTCom ELSE 0 END), 0) AS vientComBL, ") \
		_T("   NVL(SUM(CASE WHEN sd_id NOT IN('A1','A1-A','A1-C', 'A12', 'A16') AND HFL_MEDICAL_CODE IN('BT01-Cơm', 'PK4') THEN qtyCCom ELSE 0 END), 0) AS viencComTT,") \
		_T("   NVL(SUM(CASE WHEN sd_id IN('A1','A1-A','A1-C', 'A12', 'A16') THEN qtyCCom ELSE 0 END), 0) AS viencComA1A16,") \
		_T("   NVL(SUM(CASE WHEN sd_id NOT IN('A1','A1-A','A1-C', 'A12', 'A16') AND HFL_MEDICAL_CODE NOT IN('BT01-Cơm', 'PK4') THEN qtyCCom ELSE 0 END), 0) AS viencComBL,") \
		_T("   NVL(SUM(qtyTChao), 0) AS vientChao,") \
		_T("   NVL(SUM(qtyCChao), 0) AS viencChao,") \
		_T("   NVL(SUM(qtyTOT), 0)   AS vientOT,") \
		_T("   NVL(SUM(qtyCOT), 0)   AS viencOT,") \
		_T("   NVL(SUM(qtyTSua), 0)  AS vientSua,") \
		_T("   NVL(SUM(qtyCSua), 0)  AS viencSua,") \
		_T("   NVL(SUM(qtyTotal), 0) AS total") \
		_T(" FROM sys_dept") \
		_T(" LEFT JOIN") \
		_T("   (SELECT deptid              AS deptid,") \
		_T("     SUM(qtyS     - qtySC)     AS qtyS,") \
		_T("     SUM(qtyTCom  - qtyTCCom)  AS qtyTCom,") \
		_T("     SUM(qtyCCom  - qtyCCCom)  AS qtyCCom,") \
		_T("     SUM(qtyTChao - qtyTCChao) AS qtyTChao,") \
		_T("     SUM(qtyCChao - qtyCCChao) AS qtyCChao,") \
		_T("     SUM(qtyTOT   - qtyTCOT)   AS qtyTOT,") \
		_T("     SUM(qtyCOT   - qtyCCOT)   AS qtyCOT,") \
		_T("     SUM(qtyTSua  - qtyTCSua)  AS qtyTSua,") \
		_T("     SUM(qtyCSua  - qtyCCSua)  AS qtyCSua,") \
		_T("     SUM(qtyTotal - qtyTotalC) AS qtyTotal, HFL_MEDICAL_CODE") \
		_T("   FROM") \
		_T("     (SELECT") \
		_T("       CASE") \
		_T("         WHEN hfo_depttype = 'DT'") \
		_T("         THEN hfo_deptid") \
		_T("         ELSE hcr_admitdept") \
		_T("       END AS deptid,") \
		_T("       CASE") \
		_T("         WHEN hfol_type = 'S'") \
		_T("         THEN hfol_qtyorder") \
		_T("         ELSE 0") \
		_T("       END AS qtyS,") \
		_T("       CASE") \
		_T("         WHEN hfe_refstatus = 'C'") \
		_T("         AND hfol_type      = 'S'") \
		_T("         THEN hfol_qtyorder") \
		_T("         ELSE 0") \
		_T("       END           AS qtySC,") \
		_T("       0             AS qtyTCom,") \
		_T("       0             AS qtyTCCom,") \
		_T("       0             AS qtyCCom,") \
		_T("       0             AS qtyCCCom,") \
		_T("       0             AS qtyTChao,") \
		_T("       0             AS qtyTCChao,") \
		_T("       0             AS qtyCChao,") \
		_T("       0             AS qtyCCChao,") \
		_T("       0             AS qtyTOT,") \
		_T("       0             AS qtyTCOT,") \
		_T("       0             AS qtyCOT,") \
		_T("       0             AS qtyCCOT,") \
		_T("       0             AS qtyTSua,") \
		_T("       0             AS qtyTCSua,") \
		_T("       0             AS qtyCSua,") \
		_T("       0             AS qtyCCSua,") \
		_T("       hfol_qtyorder AS qtyTotal,") \
		_T("       CASE") \
		_T("         WHEN hfe_refstatus = 'C'") \
		_T("         THEN hfol_qtyorder") \
		_T("         ELSE 0") \
		_T("       END AS qtyTotalC, HFL_MEDICAL_CODE") \
		_T("     FROM hms_feefood") \
		_T("     LEFT JOIN hms_feefoodline") \
		_T("     ON(hfo_orderid=hfol_orderid)") \
		_T("     LEFT JOIN hms_clinical_record") \
		_T("     ON(hcr_docno=hfo_docno)") \
		_T("     LEFT JOIN hms_doc") \
		_T("     ON(hd_docno=hfo_docno)") \
		_T("     LEFT JOIN hms_fee_list") \
		_T("     ON(hfl_feeid        =hfol_itemid)") \
		_T(" LEFT JOIN hms_foodordersheet ON (hfos_orderid = hfo_reforder_id)") \
		_T("     WHERE hfo_ordertype = 'D'") \
		_T("     AND hfo_orderstatus = 'A' %s ") \
		_T("     UNION ALL") \
		_T("     SELECT") \
		_T("       CASE") \
		_T("         WHEN hfo_depttype = 'DT'") \
		_T("         THEN hfo_deptid") \
		_T("         ELSE hcr_admitdept") \
		_T("       END AS deptid,") \
		_T("       0   AS qtyS,") \
		_T("       0   AS qtySC,") \
		_T("       CASE") \
		_T("         WHEN hfl_index1 IN(200)") \
		_T("         AND hfol_type    = 'T'") \
		_T("         THEN hfol_qtyorder") \
		_T("         ELSE 0") \
		_T("       END AS qtyTCom,") \
		_T("       CASE") \
		_T("         WHEN hfe_refstatus = 'C'") \
		_T("         AND hfl_index1    IN(200)") \
		_T("         AND hfol_type      = 'T'") \
		_T("         THEN hfol_qtyorder") \
		_T("         ELSE 0") \
		_T("       END AS qtyTCCom,") \
		_T("       CASE") \
		_T("         WHEN hfl_index1 IN(200)") \
		_T("         AND hfol_type    = 'C'") \
		_T("         THEN hfol_qtyorder") \
		_T("         ELSE 0") \
		_T("       END AS qtyCCom,") \
		_T("       CASE") \
		_T("         WHEN hfe_refstatus = 'C'") \
		_T("         AND hfl_index1    IN(200)") \
		_T("         AND hfol_type      = 'C'") \
		_T("         THEN hfol_qtyorder") \
		_T("         ELSE 0") \
		_T("       END AS qtyCCCom,") \
		_T("       CASE") \
		_T("         WHEN hfl_index1 IN(201)") \
		_T("         AND hfol_type    = 'T'") \
		_T("         THEN hfol_qtyorder") \
		_T("         ELSE 0") \
		_T("       END AS qtyTChao,") \
		_T("       CASE") \
		_T("         WHEN hfe_refstatus = 'C'") \
		_T("         AND hfl_index1    IN(201)") \
		_T("         AND hfol_type      = 'T'") \
		_T("         THEN hfol_qtyorder") \
		_T("         ELSE 0") \
		_T("       END AS qtyTCChao,") \
		_T("       CASE") \
		_T("         WHEN hfl_index1 IN(201)") \
		_T("         AND hfol_type    = 'C'") \
		_T("         THEN hfol_qtyorder") \
		_T("         ELSE 0") \
		_T("       END AS qtyCChao,") \
		_T("       CASE") \
		_T("         WHEN hfe_refstatus = 'C'") \
		_T("         AND hfl_index1    IN(201)") \
		_T("         AND hfol_type      = 'C'") \
		_T("         THEN hfol_qtyorder") \
		_T("         ELSE 0") \
		_T("       END AS qtyCCChao,") \
		_T("       CASE") \
		_T("         WHEN hfl_index1 IN(202)") \
		_T("         AND hfol_type    = 'T'") \
		_T("         THEN hfol_qtyorder") \
		_T("         ELSE 0") \
		_T("       END AS qtyTOT,") \
		_T("       CASE") \
		_T("         WHEN hfe_refstatus = 'C'") \
		_T("         AND hfl_index1    IN(202)") \
		_T("         AND hfol_type      = 'T'") \
		_T("         THEN hfol_qtyorder") \
		_T("         ELSE 0") \
		_T("       END AS qtyTCOT,") \
		_T("       CASE") \
		_T("         WHEN hfl_index1 IN(202)") \
		_T("         AND hfol_type    = 'C'") \
		_T("         THEN hfol_qtyorder") \
		_T("         ELSE 0") \
		_T("       END AS qtyCOT,") \
		_T("       CASE") \
		_T("         WHEN hfe_refstatus = 'C'") \
		_T("         AND hfl_index1    IN(202)") \
		_T("         AND hfol_type      = 'C'") \
		_T("         THEN hfol_qtyorder") \
		_T("         ELSE 0") \
		_T("       END AS qtyCCOT,") \
		_T("       CASE") \
		_T("         WHEN hfl_index1 IN(203)") \
		_T("         AND hfol_type    = 'T'") \
		_T("         THEN hfol_qtyorder") \
		_T("         ELSE 0") \
		_T("       END AS qtyTSua,") \
		_T("       CASE") \
		_T("         WHEN hfe_refstatus = 'C'") \
		_T("         AND hfl_index1    IN(203)") \
		_T("         AND hfol_type      = 'T'") \
		_T("         THEN hfol_qtyorder") \
		_T("         ELSE 0") \
		_T("       END AS qtyTCSua,") \
		_T("       CASE") \
		_T("         WHEN hfl_index1 IN(203)") \
		_T("         AND hfol_type    = 'C'") \
		_T("         THEN hfol_qtyorder") \
		_T("         ELSE 0") \
		_T("       END AS qtyCSua,") \
		_T("       CASE") \
		_T("         WHEN hfe_refstatus = 'C'") \
		_T("         AND hfl_index1    IN(203)") \
		_T("         AND hfol_type      = 'C'") \
		_T("         THEN hfol_qtyorder") \
		_T("         ELSE 0") \
		_T("       END AS qtyCCSua,") \
		_T("       0   AS qtyTotal,") \
		_T("       0   AS qtyTotalC, HFL_MEDICAL_CODE") \
		_T("     FROM hms_feefood") \
		_T("     LEFT JOIN hms_feefoodline") \
		_T("     ON(hfo_orderid=hfol_orderid)") \
		_T("     LEFT JOIN hms_clinical_record") \
		_T("     ON(hcr_docno=hfo_docno)") \
		_T("     LEFT JOIN hms_doc") \
		_T("     ON(hd_docno=hfo_docno)") \
		_T("     LEFT JOIN hms_fee_list") \
		_T("     ON(hfl_feeid        =hfol_itemid)") \
		_T(" LEFT JOIN hms_foodordersheet ON (hfos_orderid = hfo_reforder_id)") \
		_T("     WHERE hfo_ordertype = 'D' AND NVL(HFOS_DEPTTYPE_NN,'N')<>'HCNN' ") \
		_T("     AND hfo_orderstatus = 'A' %s ") \
		_T("     ) tbl2") \
		_T("   GROUP BY deptid, HFL_MEDICAL_CODE") \
		_T("   ) ON(deptid = sd_id)") \
		_T(" WHERE sd_type IN ('DT') AND sd_id NOT IN ('A14', 'A22', 'B5', 'B10', 'B15', 'CYBERL', 'C6', 'C18', 'C15', 'KD1', 'B3')") \
		_T(" AND SD_USE_NORMAL='Y' %s ") \
		_T(" GROUP BY sd_index2,") \
		_T("   sd_id,sd_id_alias,") \
		_T("   deptid") \
		_T(" ORDER BY sd_index2"), szWhere, szWhere2, szSubWhere);
	//_fmsg(_T("%s"), szSQL);
	return szSQL;
}

CString CNTTTotalFood::GetQueryStringCOMA1A16(){
	CString szSQL, szWhere, szSubWhere, szRoomID;

	if(!m_szDepartmentKey.IsEmpty())
	{
		szSubWhere.AppendFormat(_T(" AND deptid = '%s'"), m_szDepartmentKey);
	}

	if(m_nBreakfast == 0)
		szWhere.AppendFormat(_T(" AND hfol_type = 'S'"));
	if(m_nLunch == 0)
		szWhere.AppendFormat(_T(" AND hfol_type = 'T'"));
	if(m_nDinner == 0)
		szWhere.AppendFormat(_T(" AND hfol_type = 'C'"));

	szWhere.AppendFormat(_T(" AND hfo_orderdate BETWEEN TO_TIMESTAMP('%s 00:00:00', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" AND TO_TIMESTAMP('%s 23:59:59', 'YYYY-MM-DD HH24:MI:SS') AND hfo_approvedate < TO_TIMESTAMP('%s 10:00:00', 'YYYY-MM-DD HH24:MI:SS')"), m_szDate.Left(10), m_szDate.Left(10), m_szDate.Left(10));

	/*if(m_bHauCan)
		szWhere.AppendFormat(_T(" AND NVL(hfl_deptid, 'X') = 'HCKT'"));
	else
		szWhere.AppendFormat(_T(" AND NVL(hfl_deptid, 'X') <> 'HCKT'"));*/
	if(m_bHauCan)
		szWhere.AppendFormat(_T(" AND NVL(hfl_deptid, 'X') = 'HCKT' AND NVL(hfl_index1, 'N') <> '212' AND NVL(hfos_milk,'N')<>'MILK'"));
	else
		szWhere.AppendFormat(_T(" AND NVL(hfl_deptid, 'X') <> 'HCKT' AND NVL(hfl_index1, 'N') <> '212' AND NVL(hfos_milk,'N')<>'MILK'"));

	szSQL.Format(_T(" SELECT DISTINCT") \
		_T(" foodid,") \
		_T(" foodname2,") \
		_T(" foodname") \
		_T(" FROM") \
		_T(" (SELECT") \
		_T(" CASE") \
		_T(" WHEN hfo_depttype = 'DT'") \
		_T(" THEN hfo_deptid") \
		_T(" ELSE hcr_admitdept") \
		_T(" END AS deptid,") \
		_T(" hfl_feeid AS foodid,") \
		_T(" HFL_MEDICAL_CODE AS foodname2,") \
		_T(" hfl_name AS foodname") \
		_T(" FROM hms_feefood") \
		_T("   LEFT JOIN hms_feefoodline") \
		_T("   ON(hfo_orderid = hfol_orderid)") \
		_T("   LEFT JOIN hms_clinical_record") \
		_T("   ON(hcr_docno = hfo_docno)") \
		_T("   LEFT JOIN hms_doc") \
		_T("   ON(hd_docno = hfo_docno)") \
		_T("   LEFT JOIN hms_fee_list") \
		_T("   ON(hfl_feeid = hfol_itemid)") \
		_T(" LEFT JOIN hms_foodordersheet ON (hfos_orderid = hfo_reforder_id)") \
		_T("   WHERE hfo_ordertype = 'D' AND NVL(HFOS_DEPTTYPE_NN,'N')<>'HCNN' ") \
		_T("   AND hfo_orderstatus = 'A' AND hfl_index1 IN(200) AND hfo_depttype <> 'KB' %s") \
		_T("   ) tbl") \
		_T("   WHERE deptid IN('A1','A1-A','A1-C', 'A12', 'A16') %s"), szWhere, szSubWhere);
	//_fmsg(_T("%s"), szSQL);
	return szSQL;
}
CString CNTTTotalFood::GetQueryStringCOM(){
	CString szSQL, szWhere, szSubWhere, szRoomID;

	if(!m_szDepartmentKey.IsEmpty())
	{
		szSubWhere.AppendFormat(_T(" AND deptid = '%s'"), m_szDepartmentKey);
	}

	if(m_nBreakfast == 0)
		szWhere.AppendFormat(_T(" AND hfol_type = 'S'"));
	if(m_nLunch == 0)
		szWhere.AppendFormat(_T(" AND hfol_type = 'T'"));
	if(m_nDinner == 0)
		szWhere.AppendFormat(_T(" AND hfol_type = 'C'"));

	szWhere.AppendFormat(_T(" AND hfo_orderdate BETWEEN TO_TIMESTAMP('%s 00:00:00', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" AND TO_TIMESTAMP('%s 23:59:59', 'YYYY-MM-DD HH24:MI:SS') AND hfo_approvedate < TO_TIMESTAMP('%s 10:00:00', 'YYYY-MM-DD HH24:MI:SS')"), m_szDate.Left(10), m_szDate.Left(10), m_szDate.Left(10));

	/*if(m_bHauCan)
		szWhere.AppendFormat(_T(" AND NVL(hfl_deptid, 'X') = 'HCKT'"));
	else
		szWhere.AppendFormat(_T(" AND NVL(hfl_deptid, 'X') <> 'HCKT'"));*/
	if(m_bHauCan)
		szWhere.AppendFormat(_T(" AND NVL(hfl_deptid, 'X') = 'HCKT' AND NVL(hfl_index1, 'N') <> '212' AND NVL(hfos_milk,'N')<>'MILK'"));
	else
		szWhere.AppendFormat(_T(" AND NVL(hfl_deptid, 'X') <> 'HCKT' AND NVL(hfl_index1, 'N') <> '212' AND NVL(hfos_milk,'N')<>'MILK'"));

	szSQL.Format(_T(" SELECT DISTINCT") \
		_T(" foodid,") \
		_T(" foodname2,") \
		_T(" foodname") \
		_T(" FROM") \
		_T(" (SELECT") \
		_T(" CASE") \
		_T(" WHEN hfo_depttype = 'DT'") \
		_T(" THEN hfo_deptid") \
		_T(" ELSE hcr_admitdept") \
		_T(" END AS deptid,") \
		_T(" hfl_feeid AS foodid,") \
		_T(" HFL_MEDICAL_CODE AS foodname2,") \
		_T(" hfl_name AS foodname") \
		_T(" FROM hms_feefood") \
		_T("   LEFT JOIN hms_feefoodline") \
		_T("   ON(hfo_orderid = hfol_orderid)") \
		_T("   LEFT JOIN hms_clinical_record") \
		_T("   ON(hcr_docno = hfo_docno)") \
		_T("   LEFT JOIN hms_doc") \
		_T("   ON(hd_docno = hfo_docno)") \
		_T("   LEFT JOIN hms_fee_list") \
		_T("   ON(hfl_feeid = hfol_itemid)") \
		_T(" LEFT JOIN hms_foodordersheet ON (hfos_orderid = hfo_reforder_id)") \
		_T("   WHERE hfo_ordertype = 'D' AND NVL(HFOS_DEPTTYPE_NN,'N')<>'HCNN' ") \
		_T("   AND hfo_orderstatus = 'A' AND hfl_index1 IN(200) AND hfo_depttype <> 'KB' %s") \
		_T("   ) tbl") \
		_T(" WHERE deptid NOT IN('A1','A1-A','A1-C', 'A12', 'A16')") \
		_T(" AND foodname2 NOT IN('BT01-Cơm', 'PK4') %s"), szWhere, szSubWhere);
	_fmsg(_T("%s"), szSQL);
	return szSQL;
}
CString CNTTTotalFood::GetQueryStringCHAO(){
	CString szSQL, szWhere, szSubWhere, szRoomID;

	if(!m_szDepartmentKey.IsEmpty())
	{
		szSubWhere.AppendFormat(_T(" AND deptid = '%s'"), m_szDepartmentKey);
	}

	if(m_nBreakfast == 0)
		szWhere.AppendFormat(_T(" AND hfol_type = 'S'"));
	if(m_nLunch == 0)
		szWhere.AppendFormat(_T(" AND hfol_type = 'T'"));
	if(m_nDinner == 0)
		szWhere.AppendFormat(_T(" AND hfol_type = 'C'"));

	szWhere.AppendFormat(_T(" AND hfo_orderdate BETWEEN TO_TIMESTAMP('%s 00:00:00', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" AND TO_TIMESTAMP('%s 23:59:59', 'YYYY-MM-DD HH24:MI:SS') AND hfo_approvedate < TO_TIMESTAMP('%s 10:00:00', 'YYYY-MM-DD HH24:MI:SS')"), m_szDate.Left(10), m_szDate.Left(10), m_szDate.Left(10));

	if(m_bHauCan)
		szWhere.AppendFormat(_T(" AND NVL(hfl_deptid, 'X') = 'HCKT'"));
	else
		szWhere.AppendFormat(_T(" AND NVL(hfl_deptid, 'X') <> 'HCKT'"));

	szSQL.Format(_T(" SELECT DISTINCT") \
		_T(" foodid,") \
		_T(" foodname2,") \
		_T(" foodname") \
		_T(" FROM") \
		_T(" (SELECT") \
		_T(" CASE") \
		_T(" WHEN hfo_depttype = 'DT'") \
		_T(" THEN hfo_deptid") \
		_T(" ELSE hcr_admitdept") \
		_T(" END AS deptid,") \
		_T(" hfl_feeid AS foodid,") \
		_T(" HFL_MEDICAL_CODE AS foodname2,") \
		_T(" hfl_name AS foodname") \
		_T(" FROM hms_feefood") \
		_T("   LEFT JOIN hms_feefoodline") \
		_T("   ON(hfo_orderid = hfol_orderid)") \
		_T("   LEFT JOIN hms_clinical_record") \
		_T("   ON(hcr_docno = hfo_docno)") \
		_T("   LEFT JOIN hms_doc") \
		_T("   ON(hd_docno = hfo_docno)") \
		_T("   LEFT JOIN hms_fee_list") \
		_T("   ON(hfl_feeid = hfol_itemid)") \
		_T(" LEFT JOIN hms_foodordersheet ON (hfos_orderid = hfo_reforder_id)") \
		_T("   WHERE hfo_ordertype = 'D' AND NVL(HFOS_DEPTTYPE_NN,'N')<>'HCNN' ") \
		_T("   AND hfo_orderstatus = 'A' AND hfl_index1 IN(201) AND hfo_depttype <> 'KB' %s") \
		_T("   ) tbl") \
		_T("   WHERE 1 = 1 %s"), szWhere, szSubWhere);
	//_fmsg(_T("%s"), szSQL);
	return szSQL;
}
CString CNTTTotalFood::GetQueryStringOT(){
	CString szSQL, szWhere, szSubWhere, szRoomID;

	if(!m_szDepartmentKey.IsEmpty())
	{
		szSubWhere.AppendFormat(_T(" AND deptid = '%s'"), m_szDepartmentKey);
	}

	if(m_nBreakfast == 0)
		szWhere.AppendFormat(_T(" AND hfol_type = 'S'"));
	if(m_nLunch == 0)
		szWhere.AppendFormat(_T(" AND hfol_type = 'T'"));
	if(m_nDinner == 0)
		szWhere.AppendFormat(_T(" AND hfol_type = 'C'"));

	szWhere.AppendFormat(_T(" AND hfo_orderdate BETWEEN TO_TIMESTAMP('%s 00:00:00', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" AND TO_TIMESTAMP('%s 23:59:59', 'YYYY-MM-DD HH24:MI:SS') AND hfo_approvedate < TO_TIMESTAMP('%s 10:00:00', 'YYYY-MM-DD HH24:MI:SS')"), m_szDate.Left(10), m_szDate.Left(10), m_szDate.Left(10));

	if(m_bHauCan)
		szWhere.AppendFormat(_T(" AND NVL(hfl_deptid, 'X') = 'HCKT'"));
	else
		szWhere.AppendFormat(_T(" AND NVL(hfl_deptid, 'X') <> 'HCKT'"));

	szSQL.Format(_T(" SELECT DISTINCT") \
		_T(" foodid,") \
		_T(" foodname2,") \
		_T(" foodname") \
		_T(" FROM") \
		_T(" (SELECT") \
		_T(" CASE") \
		_T(" WHEN hfo_depttype = 'DT'") \
		_T(" THEN hfo_deptid") \
		_T(" ELSE hcr_admitdept") \
		_T(" END AS deptid,") \
		_T(" hfl_feeid AS foodid,") \
		_T(" HFL_MEDICAL_CODE AS foodname2,") \
		_T(" hfl_name AS foodname") \
		_T(" FROM hms_feefood") \
		_T("   LEFT JOIN hms_feefoodline") \
		_T("   ON(hfo_orderid = hfol_orderid)") \
		_T("   LEFT JOIN hms_clinical_record") \
		_T("   ON(hcr_docno = hfo_docno)") \
		_T("   LEFT JOIN hms_doc") \
		_T("   ON(hd_docno = hfo_docno)") \
		_T("   LEFT JOIN hms_fee_list") \
		_T("   ON(hfl_feeid = hfol_itemid)") \
		_T(" LEFT JOIN hms_foodordersheet ON (hfos_orderid = hfo_reforder_id)") \
		_T("   WHERE hfo_ordertype = 'D' AND NVL(HFOS_DEPTTYPE_NN,'N')<>'HCNN' ") \
		_T("   AND hfo_orderstatus = 'A' AND hfl_index1 IN(202) AND hfo_depttype <> 'KB' %s") \
		_T("   ) tbl") \
		_T("   WHERE 1 = 1 %s"), szWhere, szSubWhere);
	//_fmsg(_T("%s"), szSQL);
	return szSQL;
}
CString CNTTTotalFood::GetQueryStringSua(){
	CString szSQL, szWhere, szSubWhere, szRoomID;

	if(!m_szDepartmentKey.IsEmpty())
	{
		szSubWhere.AppendFormat(_T(" AND deptid = '%s'"), m_szDepartmentKey);
	}

	if(m_nBreakfast == 0)
		szWhere.AppendFormat(_T(" AND hfol_type = 'S'"));
	if(m_nLunch == 0)
		szWhere.AppendFormat(_T(" AND hfol_type = 'T'"));
	if(m_nDinner == 0)
		szWhere.AppendFormat(_T(" AND hfol_type = 'C'"));

	szWhere.AppendFormat(_T(" AND hfo_orderdate BETWEEN TO_TIMESTAMP('%s 00:00:00', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" AND TO_TIMESTAMP('%s 23:59:59', 'YYYY-MM-DD HH24:MI:SS') AND hfo_approvedate < TO_TIMESTAMP('%s 10:00:00', 'YYYY-MM-DD HH24:MI:SS')"), m_szDate.Left(10), m_szDate.Left(10), m_szDate.Left(10));

	if(m_bHauCan)
		szWhere.AppendFormat(_T(" AND NVL(hfl_deptid, 'X') = 'HCKT'"));
	else
		szWhere.AppendFormat(_T(" AND NVL(hfl_deptid, 'X') <> 'HCKT'"));

	szSQL.Format(_T(" SELECT DISTINCT") \
		_T(" foodid,") \
		_T(" foodname2,") \
		_T(" foodname") \
		_T(" FROM") \
		_T(" (SELECT") \
		_T(" CASE") \
		_T(" WHEN hfo_depttype = 'DT'") \
		_T(" THEN hfo_deptid") \
		_T(" ELSE hcr_admitdept") \
		_T(" END AS deptid,") \
		_T(" hfl_feeid AS foodid,") \
		_T(" HFL_MEDICAL_CODE AS foodname2,") \
		_T(" hfl_name AS foodname") \
		_T(" FROM hms_feefood") \
		_T("   LEFT JOIN hms_feefoodline") \
		_T("   ON(hfo_orderid = hfol_orderid)") \
		_T("   LEFT JOIN hms_clinical_record") \
		_T("   ON(hcr_docno = hfo_docno)") \
		_T("   LEFT JOIN hms_doc") \
		_T("   ON(hd_docno = hfo_docno)") \
		_T("   LEFT JOIN hms_fee_list") \
		_T("   ON(hfl_feeid = hfol_itemid)") \
		_T(" LEFT JOIN hms_foodordersheet ON (hfos_orderid = hfo_reforder_id)") \
		_T("   WHERE hfo_ordertype = 'D' AND NVL(HFOS_DEPTTYPE_NN,'N')<>'HCNN' ") \
		_T("   AND hfo_orderstatus = 'A' AND hfl_index1 IN(203) AND hfo_depttype <> 'KB' %s") \
		_T("   ) tbl") \
		_T("   WHERE 1 = 1 %s"), szWhere, szSubWhere);
	//_fmsg(_T("%s"), szSQL);
	return szSQL;
}
void CNTTTotalFood::OnInitDataStringCOMA1A16(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szSQL;
	CRecord rs(&pMF->m_db);
	szSQL = GetQueryStringCOMA1A16();
	rs.ExecSQL(szSQL);
	m_szProductIDStr.Empty();
	m_szProductNameStr.Empty();
	while (!rs.IsEOF())
	{
		if (!m_szProductIDStr.IsEmpty())
			m_szProductIDStr += _T(",");
		m_szProductIDStr += rs.GetValue(_T("foodid"));
		if (!m_szProductNameStr.IsEmpty())
			m_szProductNameStr += _T(",");
		m_szProductNameStr += rs.GetValue(_T("foodname2"));
		rs.MoveNext();
	}
}
void CNTTTotalFood::OnInitDataStringCOM(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szSQL;
	CRecord rs(&pMF->m_db);
	szSQL = GetQueryStringCOM();
	rs.ExecSQL(szSQL);
	m_szProductIDStr2.Empty();
	m_szProductNameStr2.Empty();
	while (!rs.IsEOF())
	{
		if (!m_szProductIDStr2.IsEmpty())
			m_szProductIDStr2 += _T(",");
		m_szProductIDStr2 += rs.GetValue(_T("foodid"));
		if (!m_szProductNameStr2.IsEmpty())
			m_szProductNameStr2 += _T(",");
		m_szProductNameStr2 += rs.GetValue(_T("foodname2"));
		rs.MoveNext();
	}
}
void CNTTTotalFood::OnInitDataStringCHAO(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szSQL;
	CRecord rs(&pMF->m_db);
	szSQL = GetQueryStringCHAO();
	rs.ExecSQL(szSQL);
	m_szProductIDStr3.Empty();
	m_szProductNameStr3.Empty();
	while (!rs.IsEOF())
	{
		if (!m_szProductIDStr3.IsEmpty())
			m_szProductIDStr3 += _T(",");
		m_szProductIDStr3 += rs.GetValue(_T("foodid"));
		if (!m_szProductNameStr3.IsEmpty())
			m_szProductNameStr3 += _T(",");
		m_szProductNameStr3 += rs.GetValue(_T("foodname2"));
		rs.MoveNext();
	}
}
void CNTTTotalFood::OnInitDataStringOT(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szSQL;
	CRecord rs(&pMF->m_db);
	szSQL = GetQueryStringOT();
	rs.ExecSQL(szSQL);
	m_szProductIDStr4.Empty();
	m_szProductNameStr4.Empty();
	while (!rs.IsEOF())
	{
		if (!m_szProductIDStr4.IsEmpty())
			m_szProductIDStr4 += _T(",");
		m_szProductIDStr4 += rs.GetValue(_T("foodid"));
		if (!m_szProductNameStr4.IsEmpty())
			m_szProductNameStr4 += _T(",");
		m_szProductNameStr4 += rs.GetValue(_T("foodname2"));
		rs.MoveNext();
	}
}
void CNTTTotalFood::OnInitDataStringSua(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szSQL;
	CRecord rs(&pMF->m_db);
	szSQL = GetQueryStringSua();
	rs.ExecSQL(szSQL);
	m_szProductIDStr5.Empty();
	m_szProductNameStr5.Empty();
	while (!rs.IsEOF())
	{
		if (!m_szProductIDStr5.IsEmpty())
			m_szProductIDStr5 += _T(",");
		m_szProductIDStr5 += rs.GetValue(_T("foodid"));
		if (!m_szProductNameStr5.IsEmpty())
			m_szProductNameStr5 += _T(",");
		m_szProductNameStr5 += rs.GetValue(_T("foodname2"));
		rs.MoveNext();
	}
}
int CNTTTotalFood::OnAddNTTTotalFood(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CNTTTotalFood::OnEditNTTTotalFood(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CNTTTotalFood::OnDeleteNTTTotalFood(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
 	szSQL.Format(_T("DELETE FROM  WHERE  AND") );
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
 		SetMode(VM_NONE);
 		OnCancelNTTTotalFood();
 	}
	return 0;
}
int CNTTTotalFood::OnSaveNTTTotalFood(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
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
 //_fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
 		//OnNTTTotalFoodListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CNTTTotalFood::OnCancelNTTTotalFood(){
 	if(GetMode() == VM_EDIT)
 	{
 		SetMode(VM_VIEW);
 	} 
 	else 
 	{
 		SetMode(VM_NONE);
 	} 
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
 	return 0;
} 
int CNTTTotalFood::OnNTTTotalFoodListLoadData(){
	return 0;
}
void CNTTTotalFood::OnExport_ALL(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	BeginWaitCursor();
	OnInitDataStringCOMA1A16();
	OnInitDataStringCOM();
	OnInitDataStringCHAO();
	OnInitDataStringOT();
	OnInitDataStringSua();
	CRecord rs(&pMF->m_db), rs2(&pMF->m_db), rs3(&pMF->m_db), rs4(&pMF->m_db), crs(&pMF->m_db);
	CExcel xls;
	CString szSQL, tmpStr, tmpStr2, szOldVendor, szNewVendor, szTemp;
	CStringToken token(m_szProductIDStr);
	CStringToken token2(m_szProductIDStr2);
	CStringToken token3(m_szProductIDStr3);
	CStringToken token4(m_szProductIDStr4);
	CStringToken token5(m_szProductIDStr5);
	double nTmp = 0;
	int nIdx = 1, nCol = 0, nRow = 0, i = 0, j = 0, x = 0, z = 0, k = 0, nOldCol = 0;
	double nTotal1 = 0, nTotal2 = 0, nTotal3 = 0, nTotal4 = 0, nTotal5 = 0, nTotal6 = 0, nTotal7 = 0, nTotal8 = 0, nTotal9 = 0, nTotal10 = 0, nTotal11 = 0;
	double nTotal12 = 0, nTotal13 = 0, nTotal14 = 0, nTotal15 = 0, nTotal16 = 0;

	double nTotal[200];
	for(int y = 0; y < 200; y++)
	{
		nTotal[y] = 0;
	}
	szSQL = GetQueryString();
	int nRet = rs.ExecSQL(szSQL);
	szSQL = GetQueryStringItems();
	int nRet2 = rs2.ExecSQL(szSQL);
	szSQL = GetQueryStringTotal();
	int nRet3 = rs3.ExecSQL(szSQL);
	szSQL = GetQueryStringTotal10h();
	int nRet4 = rs4.ExecSQL(szSQL);

	if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data."));
		return;
	}
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	xls.SetCellMergedColumns(0, 0, 5);
	xls.SetCellMergedColumns(0, 1, 5);
	xls.SetCellMergedColumns(0, 2, 10);
	xls.SetCellMergedColumns(0, 3, 10);
	xls.SetCellText(0, 0, pMF->m_szHealthService, 4098, true);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, 4098, true);
	//TODO: Write Excel Name
	tmpStr = _T("TỔNG HỢP QUÂN SỐ ĂN");
	xls.SetCellText(0, 2, tmpStr, 4098, true);

	tmpStr.Format(_T("Ngày %s tháng %s năm %s"), m_szDate.Right(2) ,m_szDate.Mid(5,2), m_szDate.Left(4));
	xls.SetCellText(0, 3, tmpStr, 4098, true);
	//TODO: Write Column Header
	nRow = 4;
	//Fixed col

	xls.SetCellMergedRows(0, nRow, 2);
	xls.SetCellMergedRows(1, nRow, 2);
	xls.SetCellMergedRows(2, nRow, 2);
	xls.SetCellMergedRows(11, nRow, 2);
	xls.SetCellMergedRows(12, nRow, 2);
	xls.SetCellMergedRows(13, nRow, 2);
	xls.SetCellMergedRows(14, nRow, 2);
	xls.SetCellMergedRows(15, nRow, 2);
	xls.SetCellMergedRows(16, nRow, 2);

	xls.SetCellMergedColumns(3, nRow, 4);
	xls.SetCellMergedColumns(7, nRow, 4);

	xls.SetCellText(0, nRow, _T("STT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
	xls.SetCellText(1, nRow, _T("Khoa"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
	xls.SetCellText(2, nRow, _T("Viện sáng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);

	xls.SetCellText(3, nRow, _T("Viện trưa"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
	xls.SetCellText(3, nRow+1, _T("TT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
	xls.SetCellText(4, nRow+1, _T("A1 + A16"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
	xls.SetCellText(5, nRow+1, _T("Bệnh lý"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
	xls.SetCellText(6, nRow+1, _T("Sữa"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);

	xls.SetCellText(7, nRow, _T("Viện chiều"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
	xls.SetCellText(7, nRow+1, _T("TT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
	xls.SetCellText(8, nRow+1, _T("A1 + A16"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
	xls.SetCellText(9, nRow+1, _T("Bệnh lý"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
	xls.SetCellText(10, nRow+1, _T("Sữa"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);

	xls.SetCellText(11, nRow, _T("BT01-Cơm"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
	xls.SetCellText(12, nRow, _T("PK4"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
	xls.SetCellText(13, nRow, _T("Tổng trưa"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
	xls.SetCellText(14, nRow, _T("Tổng chiều"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
	xls.SetCellText(15, nRow, _T("Tổng cộng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
	xls.SetCellText(16, nRow, _T("Khoa"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
	//Dynamic Col Material
	nCol = 17;
	szSQL = GetQueryStringCOMA1A16();
	crs.ExecSQL(szSQL);
	//_msg(_T("%s"),szSQL );
	i = 0;
	while (!crs.IsEOF())
	{
		xls.SetCellText(nCol++, nRow+1, crs.GetValue(_T("foodname2")), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
		i++;
		crs.MoveNext();
	}
	xls.SetCellMergedColumns(nCol-i, nRow, i);
	xls.SetCellText(nCol-i, nRow, _T("A1 + A16"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);

	xls.SetCellMergedRows(nCol, nRow, 2);
	xls.SetCellText(nCol, nRow, _T("Tổng trưa"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
	nCol++;
	xls.SetCellMergedRows(nCol, nRow, 2);
	xls.SetCellText(nCol, nRow, _T("Tổng chiều"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
	nCol++;
	xls.SetCellMergedRows(nCol, nRow, 2);
	xls.SetCellText(nCol, nRow, _T("Tổng cộng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
	nCol++;
	xls.SetCellMergedRows(nCol, nRow, 2);
	xls.SetCellText(nCol, nRow, _T("Khoa"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
	nCol++;

	szSQL = GetQueryStringCOM();
	crs.ExecSQL(szSQL);
	j = 0;
	while (!crs.IsEOF())
	{
		xls.SetCellText(nCol++, nRow+1, crs.GetValue(_T("foodname2")), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
		j++;
		crs.MoveNext();
	}
	xls.SetCellMergedColumns(nCol-j, nRow, j);
	xls.SetCellText(nCol-j, nRow, _T("Bệnh lý"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);

	xls.SetCellMergedRows(nCol, nRow, 2);
	xls.SetCellText(nCol, nRow, _T("Tổng trưa"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
	nCol++;
	xls.SetCellMergedRows(nCol, nRow, 2);
	xls.SetCellText(nCol, nRow, _T("Tổng chiều"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
	nCol++;
	xls.SetCellMergedRows(nCol, nRow, 2);
	xls.SetCellText(nCol, nRow, _T("Tổng cộng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
	nCol++;
	xls.SetCellMergedRows(nCol, nRow, 2);
	xls.SetCellText(nCol, nRow, _T("Khoa"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
	nCol++;

	szSQL = GetQueryStringCHAO();
	crs.ExecSQL(szSQL);
	x = 0;
	while (!crs.IsEOF())
	{
		xls.SetCellText(nCol++, nRow+1, crs.GetValue(_T("foodname2")), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
		x++;
		crs.MoveNext();
	}
	xls.SetCellMergedColumns(nCol-x, nRow, x);
	xls.SetCellText(nCol-x, nRow, _T("Cháo"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);

	xls.SetCellMergedRows(nCol, nRow, 2);
	xls.SetCellText(nCol, nRow, _T("Tổng trưa"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
	nCol++;
	xls.SetCellMergedRows(nCol, nRow, 2);
	xls.SetCellText(nCol, nRow, _T("Tổng trưa sau 10h"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
	nCol++;
	xls.SetCellMergedRows(nCol, nRow, 2);
	xls.SetCellText(nCol, nRow, _T("Tổng chiều"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
	nCol++;
	xls.SetCellMergedRows(nCol, nRow, 2);
	xls.SetCellText(nCol, nRow, _T("Tổng chiều sau 10h"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
	nCol++;
	xls.SetCellMergedRows(nCol, nRow, 2);
	xls.SetCellText(nCol, nRow, _T("Tổng cộng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
	nCol++;
	xls.SetCellMergedRows(nCol, nRow, 2);
	xls.SetCellText(nCol, nRow, _T("Khoa"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
	nCol++;

	szSQL = GetQueryStringOT();
	crs.ExecSQL(szSQL);
	z = 0;
	while (!crs.IsEOF())
	{
		xls.SetCellText(nCol++, nRow+1, crs.GetValue(_T("foodname2")), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
		z++;
		crs.MoveNext();
	}
	xls.SetCellMergedColumns(nCol-z, nRow, z);
	xls.SetCellText(nCol-z, nRow, _T("OT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);

	xls.SetCellMergedRows(nCol, nRow, 2);
	xls.SetCellText(nCol, nRow, _T("Tổng trưa"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
	nCol++;
	xls.SetCellMergedRows(nCol, nRow, 2);
	xls.SetCellText(nCol, nRow, _T("Tổng trưa sau 10h"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
	nCol++;
	xls.SetCellMergedRows(nCol, nRow, 2);
	xls.SetCellText(nCol, nRow, _T("Tổng chiều"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
	nCol++;
	xls.SetCellMergedRows(nCol, nRow, 2);
	xls.SetCellText(nCol, nRow, _T("Tổng chiều sau 10h"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
	nCol++;
	xls.SetCellMergedRows(nCol, nRow, 2);
	xls.SetCellText(nCol, nRow, _T("Tổng cộng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
	nCol++;
	xls.SetCellMergedRows(nCol, nRow, 2);
	xls.SetCellText(nCol, nRow, _T("Khoa"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
	nCol++;

	szSQL = GetQueryStringSua();
	crs.ExecSQL(szSQL);
	k = 0;
	while (!crs.IsEOF())
	{
		xls.SetCellText(nCol++, nRow+1, crs.GetValue(_T("foodname2")), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
		k++;
		crs.MoveNext();
	}
	xls.SetCellMergedColumns(nCol-k, nRow, k);
	xls.SetCellText(nCol-k, nRow, _T("Sữa"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);

	xls.SetCellMergedRows(nCol, nRow, 2);
	xls.SetCellText(nCol, nRow, _T("Tổng trưa"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
	nCol++;
	xls.SetCellMergedRows(nCol, nRow, 2);
	xls.SetCellText(nCol, nRow, _T("Tổng trưa sau 10h"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
	nCol++;
	xls.SetCellMergedRows(nCol, nRow, 2);
	xls.SetCellText(nCol, nRow, _T("Tổng chiều"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
	nCol++;
	xls.SetCellMergedRows(nCol, nRow, 2);
	xls.SetCellText(nCol, nRow, _T("Tổng chiều sau 10h"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
	nCol++;
	xls.SetCellMergedRows(nCol, nRow, 2);
	xls.SetCellText(nCol, nRow, _T("Tổng cộng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
	nCol++;
	xls.SetCellMergedRows(nCol, nRow, 2);
	xls.SetCellText(nCol, nRow, _T("Cộng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);

	nCol = 0;
	nRow = 6;
	while (!rs.IsEOF())
	{
		xls.SetCellText(0, nRow, int2str(nIdx++), FMT_INTEGER);
		xls.SetCellText(1, nRow, rs.GetValue(_T("sd_id_alias")), FMT_TEXT);
		rs4.GetValue(_T("viens"), nTmp);
		nTotal1 += nTmp;
		xls.SetCellText(2, nRow, double2str(nTmp), FMT_NUMBER1);
		rs4.GetValue(_T("vientComTT"), nTmp);
		nTotal2 += nTmp;
		xls.SetCellText(3, nRow, double2str(nTmp), FMT_NUMBER1);
		rs4.GetValue(_T("vientComA1A16"), nTmp);
		nTotal3 += nTmp;
		xls.SetCellText(4, nRow, double2str(nTmp), FMT_NUMBER1);
		rs4.GetValue(_T("vientComBL"), nTmp);
		nTotal4 += nTmp;
		xls.SetCellText(5, nRow, double2str(nTmp), FMT_NUMBER1);
		rs4.GetValue(_T("vientSua"), nTmp);
		nTotal5 += nTmp;
		xls.SetCellText(6, nRow, double2str(nTmp), FMT_NUMBER1);
		rs4.GetValue(_T("viencComTT"), nTmp);
		nTotal6 += nTmp;
		xls.SetCellText(7, nRow, double2str(nTmp), FMT_NUMBER1);
		rs4.GetValue(_T("viencComA1A16"), nTmp);
		nTotal7 += nTmp;
		xls.SetCellText(8, nRow, double2str(nTmp), FMT_NUMBER1);
		rs4.GetValue(_T("viencComBL"), nTmp);
		nTotal8 += nTmp;
		xls.SetCellText(9, nRow, double2str(nTmp), FMT_NUMBER1);
		rs4.GetValue(_T("viencSua"), nTmp);
		nTotal9 += nTmp;
		xls.SetCellText(10, nRow, double2str(nTmp), FMT_NUMBER1);
		rs2.GetValue(_T("BT10"), nTmp);
		nTotal10 += nTmp;
		xls.SetCellText(11, nRow, double2str(nTmp), FMT_NUMBER1);
		rs2.GetValue(_T("PK4"), nTmp);
		nTotal11 += nTmp;
		xls.SetCellText(12, nRow, double2str(nTmp), FMT_NUMBER1);
		rs2.GetValue(_T("tongT"), nTmp);
		nTotal12 += nTmp;
		xls.SetCellText(13, nRow, double2str(nTmp), FMT_NUMBER1);
		rs2.GetValue(_T("tongC"), nTmp);
		nTotal13 += nTmp;
		xls.SetCellText(14, nRow, double2str(nTmp), FMT_NUMBER1);
		rs2.GetValue(_T("tongTT"), nTmp);
		nTotal14 += nTmp;
		xls.SetCellText(15, nRow, double2str(nTmp), FMT_NUMBER1);
		xls.SetCellText(16, nRow, rs.GetValue(_T("sd_id_alias")), FMT_TEXT);

		nCol = 17;
		for (i = 0; i < token.GetSize(); i++)
		{
			token.GetAt(i, szTemp);
			tmpStr.Format(_T("FFID_%s"), szTemp);
			rs.GetValue(tmpStr, nTmp);
			nTotal[i] += nTmp;
			xls.SetCellText(nCol++, nRow, double2str(nTmp), FMT_NUMBER1);
		}
		i++;
		rs3.GetValue(_T("comA1A16T"), nTmp);
		nTotal[i] += nTmp;
		xls.SetCellText(nCol++, nRow, double2str(nTmp), FMT_NUMBER1);
		i++;
		rs3.GetValue(_T("comA1A16C"), nTmp);
		nTotal[i] += nTmp;
		xls.SetCellText(nCol++, nRow, double2str(nTmp), FMT_NUMBER1);
		i++;
		rs3.GetValue(_T("comA1A16"), nTmp);
		nTotal[i] += nTmp;
		xls.SetCellText(nCol++, nRow, double2str(nTmp), FMT_NUMBER1);
		i++;
		xls.SetCellText(nCol++, nRow, rs.GetValue(_T("sd_id_alias")), FMT_TEXT);
		for (j = 0; j < token2.GetSize(); j++)
		{
			token2.GetAt(j, szTemp);
			tmpStr.Format(_T("FFID2_%s"), szTemp);
			rs.GetValue(tmpStr, nTmp);
			nTotal[i+j] += nTmp;
			xls.SetCellText(nCol++, nRow, double2str(nTmp), FMT_NUMBER1);
		}
		j++;
		rs3.GetValue(_T("comT"), nTmp);
		nTotal[i+j] += nTmp;
		xls.SetCellText(nCol++, nRow, double2str(nTmp), FMT_NUMBER1);
		j++;
		rs3.GetValue(_T("comC"), nTmp);
		nTotal[i+j] += nTmp;
		xls.SetCellText(nCol++, nRow, double2str(nTmp), FMT_NUMBER1);
		j++;
		rs3.GetValue(_T("com"), nTmp);
		nTotal[i+j] += nTmp;
		xls.SetCellText(nCol++, nRow, double2str(nTmp), FMT_NUMBER1);
		j++;
		xls.SetCellText(nCol++, nRow, rs.GetValue(_T("sd_id_alias")), FMT_TEXT);
		for (x = 0; x < token3.GetSize(); x++)
		{
			token3.GetAt(x, szTemp);
			tmpStr.Format(_T("FFID3_%s"), szTemp);
			rs.GetValue(tmpStr, nTmp);
			nTotal[i+j+x] += nTmp;
			xls.SetCellText(nCol++, nRow, double2str(nTmp), FMT_NUMBER1);
		}
		x++;
		rs3.GetValue(_T("chaoT"), nTmp);
		nTotal[i+j+x] += nTmp;
		xls.SetCellText(nCol++, nRow, double2str(nTmp), FMT_NUMBER1);
		x++;
		rs4.GetValue(_T("vientChao"), nTmp);
		nTotal[i+j+x] += nTmp;
		xls.SetCellText(nCol++, nRow, double2str(nTmp), FMT_NUMBER1);
		x++;
		rs3.GetValue(_T("chaoC"), nTmp);
		nTotal[i+j+x] += nTmp;
		xls.SetCellText(nCol++, nRow, double2str(nTmp), FMT_NUMBER1);
		x++;
		rs4.GetValue(_T("viencChao"), nTmp);
		nTotal[i+j+x] += nTmp;
		xls.SetCellText(nCol++, nRow, double2str(nTmp), FMT_NUMBER1);
		x++;
		rs3.GetValue(_T("chao"), nTmp);
		nTotal[i+j+x] += nTmp;
		xls.SetCellText(nCol++, nRow, double2str(nTmp), FMT_NUMBER1);
		x++;
		xls.SetCellText(nCol++, nRow, rs.GetValue(_T("sd_id_alias")), FMT_TEXT);
		for (z = 0; z < token4.GetSize(); z++)
		{
			token4.GetAt(z, szTemp);
			tmpStr.Format(_T("FFID4_%s"), szTemp);
			rs.GetValue(tmpStr, nTmp);
			nTotal[i+j+x+z] += nTmp;
			xls.SetCellText(nCol++, nRow, double2str(nTmp), FMT_NUMBER1);
		}
		z++;
		rs3.GetValue(_T("OTT"), nTmp);
		nTotal[i+j+x+z] += nTmp;
		xls.SetCellText(nCol++, nRow, double2str(nTmp), FMT_NUMBER1);
		z++;
		rs4.GetValue(_T("vientOT"), nTmp);
		nTotal[i+j+x+z] += nTmp;
		xls.SetCellText(nCol++, nRow, double2str(nTmp), FMT_NUMBER1);
		z++;
		rs3.GetValue(_T("OTC"), nTmp);
		nTotal[i+j+x+z] += nTmp;
		xls.SetCellText(nCol++, nRow, double2str(nTmp), FMT_NUMBER1);
		z++;
		rs4.GetValue(_T("viencOT"), nTmp);
		nTotal[i+j+x+z] += nTmp;
		xls.SetCellText(nCol++, nRow, double2str(nTmp), FMT_NUMBER1);
		z++;
		rs3.GetValue(_T("OT"), nTmp);
		nTotal[i+j+x+z] += nTmp;
		xls.SetCellText(nCol++, nRow, double2str(nTmp), FMT_NUMBER1);
		z++;
		xls.SetCellText(nCol++, nRow, rs.GetValue(_T("sd_id_alias")), FMT_TEXT);
		for (k = 0; k < token5.GetSize(); k++)
		{
			token5.GetAt(k, szTemp);
			tmpStr.Format(_T("FFID5_%s"), szTemp);
			rs.GetValue(tmpStr, nTmp);
			nTotal[i+j+x+z+k] += nTmp;
			xls.SetCellText(nCol++, nRow, double2str(nTmp), FMT_NUMBER1);
		}
		k++;
		rs3.GetValue(_T("suaT"), nTmp);
		nTotal[i+j+x+z+k] += nTmp;
		xls.SetCellText(nCol++, nRow, double2str(nTmp), FMT_NUMBER1);
		k++;
		rs4.GetValue(_T("vientSua"), nTmp);
		nTotal[i+j+x+z+k] += nTmp;
		xls.SetCellText(nCol++, nRow, double2str(nTmp), FMT_NUMBER1);
		k++;
		rs3.GetValue(_T("suaC"), nTmp);
		nTotal[i+j+x+z+k] += nTmp;
		xls.SetCellText(nCol++, nRow, double2str(nTmp), FMT_NUMBER1);
		k++;
		rs4.GetValue(_T("viencSua"), nTmp);
		nTotal[i+j+x+z+k] += nTmp;
		xls.SetCellText(nCol++, nRow, double2str(nTmp), FMT_NUMBER1);
		k++;
		rs3.GetValue(_T("sua"), nTmp);
		nTotal[i+j+x+z+k] += nTmp;
		xls.SetCellText(nCol++, nRow, double2str(nTmp), FMT_NUMBER1);
		k++;
		rs4.GetValue(_T("total"), nTmp);
		nTotal[i+j+x+z+k] += nTmp;
		xls.SetCellText(nCol++, nRow, double2str(nTmp), FMT_NUMBER1);
		nRow++;
		rs.MoveNext();
		rs2.MoveNext();
		rs3.MoveNext();
		rs4.MoveNext();
	}
	xls.SetCellMergedColumns(0, nRow, 2);
	xls.SetCellText(0, nRow, _T("Tổng cộng: "), FMT_TEXT | FMT_RIGHT, true);
	xls.SetCellText(2, nRow, double2str(nTotal1), FMT_NUMBER1, true);
	xls.SetCellText(3, nRow, double2str(nTotal2), FMT_NUMBER1, true);
	xls.SetCellText(4, nRow, double2str(nTotal3), FMT_NUMBER1, true);
	xls.SetCellText(5, nRow, double2str(nTotal4), FMT_NUMBER1, true);
	xls.SetCellText(6, nRow, double2str(nTotal5), FMT_NUMBER1, true);
	xls.SetCellText(7, nRow, double2str(nTotal6), FMT_NUMBER1, true);
	xls.SetCellText(8, nRow, double2str(nTotal7), FMT_NUMBER1, true);
	xls.SetCellText(9, nRow, double2str(nTotal8), FMT_NUMBER1, true);
	xls.SetCellText(10, nRow, double2str(nTotal9), FMT_NUMBER1, true);
	xls.SetCellText(11, nRow, double2str(nTotal10), FMT_NUMBER1, true);
	xls.SetCellText(12, nRow, double2str(nTotal11), FMT_NUMBER1, true);
	xls.SetCellText(13, nRow, double2str(nTotal12), FMT_NUMBER1, true);
	double nAnSang = 0, nThongThuongT = 0, nThongThuongC = 0;
	nAnSang += nTotal12;
	nThongThuongT = nTotal12;
	xls.SetCellText(14, nRow, double2str(nTotal13), FMT_NUMBER1, true);
	nThongThuongC = nTotal13;
	xls.SetCellText(15, nRow, double2str(nTotal14), FMT_NUMBER1, true);
	nCol = 17;
	for (i = 0; i < token.GetSize(); i++)
	{
		xls.SetCellText(nCol++, nRow, double2str(nTotal[i]), FMT_NUMBER1, true);
	}
	i++;
	xls.SetCellText(nCol++, nRow, double2str(nTotal[i]), FMT_NUMBER1, true);
	double nA11A16T = 0, nA11A16C = 0;
	nAnSang += nTotal[i];
	nA11A16T = nTotal[i];
	i++;
	xls.SetCellText(nCol++, nRow, double2str(nTotal[i]), FMT_NUMBER1, true);
	nA11A16C = nTotal[i];
	i++;
	xls.SetCellText(nCol++, nRow, double2str(nTotal[i]), FMT_NUMBER1, true);
	i++;
	nCol++;
	for (j = 0; j < token2.GetSize(); j++)
	{
		xls.SetCellText(nCol++, nRow, double2str(nTotal[i+j]), FMT_NUMBER1, true);
	}
	j++;
	xls.SetCellText(nCol++, nRow, double2str(nTotal[i+j]), FMT_NUMBER1, true);
	double nBenhLyT = 0, nBenhLyC = 0;
	nAnSang += nTotal[i+j];
	nBenhLyT = nTotal[i+j];
	j++;
	xls.SetCellText(nCol++, nRow, double2str(nTotal[i+j]), FMT_NUMBER1, true);
	nBenhLyC = nTotal[i+j];
	j++;
	xls.SetCellText(nCol++, nRow, double2str(nTotal[i+j]), FMT_NUMBER1, true);
	j++;
	nCol++;
	for (x = 0; x < token3.GetSize(); x++)
	{
		xls.SetCellText(nCol++, nRow, double2str(nTotal[i+j+x]), FMT_NUMBER1, true);
	}
	x++;
	xls.SetCellText(nCol++, nRow, double2str(nTotal[i+j+x]), FMT_NUMBER1, true);
	double nChaoT = 0, nChaoC = 0;
	nChaoT = nTotal[i+j+x];
	x++;
	xls.SetCellText(nCol++, nRow, double2str(nTotal[i+j+x]), FMT_NUMBER1, true);
	x++;
	xls.SetCellText(nCol++, nRow, double2str(nTotal[i+j+x]), FMT_NUMBER1, true);
	nChaoC = nTotal[i+j+x];
	x++;
	xls.SetCellText(nCol++, nRow, double2str(nTotal[i+j+x]), FMT_NUMBER1, true);
	x++;
	xls.SetCellText(nCol++, nRow, double2str(nTotal[i+j+x]), FMT_NUMBER1, true);
	x++;
	nCol++;
	for (z = 0; z < token4.GetSize(); z++)
	{
		xls.SetCellText(nCol++, nRow, double2str(nTotal[i+j+x+z]), FMT_NUMBER1, true);
	}
	z++;
	xls.SetCellText(nCol++, nRow, double2str(nTotal[i+j+x+z]), FMT_NUMBER1, true);
	double nOTT = 0, nOTC = 0;
	nOTT = nTotal[i+j+x+z];
	z++;
	xls.SetCellText(nCol++, nRow, double2str(nTotal[i+j+x+z]), FMT_NUMBER1, true);
	z++;
	xls.SetCellText(nCol++, nRow, double2str(nTotal[i+j+x+z]), FMT_NUMBER1, true);
	nOTC = nTotal[i+j+x+z];
	z++;
	xls.SetCellText(nCol++, nRow, double2str(nTotal[i+j+x+z]), FMT_NUMBER1, true);
	z++;
	xls.SetCellText(nCol++, nRow, double2str(nTotal[i+j+x+z]), FMT_NUMBER1, true);
	z++;
	nCol++;
	for (k = 0; k < token5.GetSize(); k++)
	{
		xls.SetCellText(nCol++, nRow, double2str(nTotal[i+j+x+z+k]), FMT_NUMBER1, true);
	}
	k++;
	xls.SetCellText(nCol++, nRow, double2str(nTotal[i+j+x+z+k]), FMT_NUMBER1, true);
	double nSua = 0;
	nSua = nTotal[i+j+x+z+k];
	k++;
	xls.SetCellText(nCol++, nRow, double2str(nTotal[i+j+x+z+k]), FMT_NUMBER1, true);
	k++;
	xls.SetCellText(nCol++, nRow, double2str(nTotal[i+j+x+z+k]), FMT_NUMBER1, true);
	k++;
	xls.SetCellText(nCol++, nRow, double2str(nTotal[i+j+x+z+k]), FMT_NUMBER1, true);
	k++;
	xls.SetCellText(nCol++, nRow, double2str(nTotal[i+j+x+z+k]), FMT_NUMBER1, true);
	k++;
	xls.SetCellText(nCol++, nRow, double2str(nTotal[i+j+x+z+k]), FMT_NUMBER1, true);
	nRow++;
	nRow++;

	nCol = 0;
	xls.SetCellText(nCol, nRow, _T("QUÂN SỐ ĂN SỮA: "), FMT_TEXT, true, 10);
	xls.SetCellText(11, nRow, double2str(nSua), FMT_NUMBER1, true);
	nRow++;

	xls.SetCellText(nCol, nRow, _T("CHẾ BIẾN ĂN SÁNG: = ( TỔNG CƠM TRƯA CỦA THÔNG THƯỜNG + CƠM A1+A16 + CƠM TRƯA BỆNH LÝ)"), FMT_TEXT, true, 10);
	xls.SetCellText(11, nRow, double2str(nAnSang), FMT_NUMBER1, true);
	nRow++;

	xls.SetCellText(nCol, nRow, _T("QUÂN SỐ ĂN TRƯA THÔNG THƯỜNG:"), FMT_TEXT, true, 10);
	xls.SetCellText(11, nRow, double2str(nThongThuongT), FMT_NUMBER1, true);
	nRow++;

	xls.SetCellText(nCol, nRow, _T("QUÂN SỐ ĂN CHIỀU THÔNG THƯỜNG:"), FMT_TEXT, true, 10);
	xls.SetCellText(11, nRow, double2str(nThongThuongC), FMT_NUMBER1, true);
	nRow++;

	xls.SetCellText(nCol, nRow, _T("QUÂN SỐ ĂN TRƯA BỆNH LÝ:"), FMT_TEXT, true, 10);
	xls.SetCellText(11, nRow, double2str(nBenhLyT), FMT_NUMBER1, true);
	nRow++;

	xls.SetCellText(nCol, nRow, _T("QUÂN SỐ ĂN CHIỀU BỆNH LÝ: "), FMT_TEXT, true, 10);
	xls.SetCellText(11, nRow, double2str(nBenhLyC), FMT_NUMBER1, true);
	nRow++;

	xls.SetCellText(nCol, nRow, _T("QUÂN SỐ ĂN TRƯA A1+ A16:"), FMT_TEXT, true, 10);
	xls.SetCellText(11, nRow, double2str(nA11A16T), FMT_NUMBER1, true);
	nRow++;

	xls.SetCellText(nCol, nRow, _T("QUÂN SỐ ĂN CHIỀU A1+ A16:"), FMT_TEXT, true, 10);
	xls.SetCellText(11, nRow, double2str(nA11A16C), FMT_NUMBER1, true);
	nRow++;

	xls.SetCellText(nCol, nRow, _T("QUÂN SỐ ĂN CHÁO TRƯA:"), FMT_TEXT, true, 10);
	xls.SetCellText(11, nRow, double2str(nChaoT), FMT_NUMBER1, true);
	nRow++;

	xls.SetCellText(nCol, nRow, _T("QUÂN SỐ ĂN CHÁO CHIỀU:"), FMT_TEXT, true, 10);
	xls.SetCellText(11, nRow, double2str(nChaoC), FMT_NUMBER1, true);
	nRow++;

	xls.SetCellText(nCol, nRow, _T("QUÂN SỐ ĂN OT TRƯA:"), FMT_TEXT, true, 10);
	xls.SetCellText(11, nRow, double2str(nOTT), FMT_NUMBER1, true);
	nRow++;

	xls.SetCellText(nCol, nRow, _T("QUÂN SỐ ĂN OT CHIỀU: "), FMT_TEXT, true, 10);
	xls.SetCellText(11, nRow, double2str(nOTC), FMT_NUMBER1, true);
	nRow++;

	xls.SetCellText(nCol, nRow, _T("TỔNG QUÂN SỐ ĂN  TRƯA: =  ( THÔNG THƯỜNG+ A1+A16+ CƠM BỆNH LÝ + CHÁO + OT)"), FMT_TEXT, true, 10);
	xls.SetCellText(11, nRow, double2str(nThongThuongT+nBenhLyT+nA11A16T+nChaoT+nOTT), FMT_NUMBER1, true);
	nRow++;

	xls.SetCellText(nCol, nRow, _T("TỔNG QUÂN SỐ ĂN  CHIỀU: = ( THÔNG THƯỜNG+ A1+A16+ CƠM BỆNH LÝ + CHÁO + OT)"), FMT_TEXT, true, 10);
	xls.SetCellText(11, nRow, double2str(nThongThuongC+nBenhLyC+nA11A16C+nChaoC+nOTC), FMT_NUMBER1, true);
	nRow++;
	nRow++;

	xls.SetCellText(1, nRow, _T("QUẢN LÝ BẾP"), FMT_TEXT, true, 10);
	xls.SetCellText(8, nRow, _T("NGƯỜI TỔNG HỢP"), FMT_TEXT, true, 10);

	EndWaitCursor();
	xls.Save(_T("Exports\\Tong hop quan so an.xls"));
} 
void CNTTTotalFood::OnExportHCKT(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CRecord rs1(&pMF->m_db);
	CString tmpStr;
	UpdateData(true);
	BeginWaitCursor();
	CExcel xls;
	int nCol=0;
	int nRow=0;
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	xls.SetCellMergedColumns(0, 0, 5);
	xls.SetCellMergedColumns(0, 1, 5);
	xls.SetCellMergedColumns(0, 2, 10);
	xls.SetCellMergedColumns(0, 3, 10);
	xls.SetCellText(0, 0, pMF->m_szHealthService, 4098, true);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, 4098, true);
	//TODO: Write Excel Name
	tmpStr = _T("TỔNG HỢP QUÂN SỐ ĂN");
	xls.SetCellText(0, 2, tmpStr, 4098, true);

	tmpStr.Format(_T("Ngày %s tháng %s năm %s"), m_szDate.Right(2) ,m_szDate.Mid(5,2), m_szDate.Left(4));
	xls.SetCellText(0, 3, tmpStr, 4098, true);
	//TODO: Write Column Header
	nRow = 4;
	//Fixed col

	/*xls.SetCellMergedRows(0, nRow, 2);
	xls.SetCellMergedRows(1, nRow, 2);
	xls.SetCellMergedRows(2, nRow, 2);
	xls.SetCellMergedRows(11, nRow, 2);
	xls.SetCellMergedRows(12, nRow, 2);
	xls.SetCellMergedRows(13, nRow, 2);
	xls.SetCellMergedRows(14, nRow, 2);
	xls.SetCellMergedRows(15, nRow, 2);
	xls.SetCellMergedRows(16, nRow, 2);

	xls.SetCellMergedColumns(3, nRow, 4);
	xls.SetCellMergedColumns(7, nRow, 4);*/
	xls.SetCellMergedRows(0,nRow,3);
	xls.SetCellMergedRows(1,nRow,3);
	xls.SetCellMergedRows(2,nRow,3);
	xls.SetCellMergedRows(3,nRow,3);
	xls.SetCellText(0, nRow, _T("STT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
	xls.SetCellText(1, nRow, _T("Khoa"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
	xls.SetCellText(2, nRow, _T("NG Nhà"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
	xls.SetCellText(3, nRow, _T("NG NHà VIP A"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
	CString szSQL;
	CString szWhere,szNamefill;

	if(!m_szDepartmentKey.IsEmpty())
		szWhere.Format(_T(" and hfos_deptid ='%s' "),m_szDepartmentKey);

	if(m_btruoc10h)
		szWhere.AppendFormat(_T("  and hfos_approvedate <= TO_TIMESTAMP('%s 10:00:00', 'YYYY-MM-DD HH24:MI:SS') "),m_szDate);
	if(m_bsau10h)
		szWhere.AppendFormat(_T(" and hfos_approvedate > TO_TIMESTAMP('%s 10:00:00', 'YYYY-MM-DD HH24:MI:SS') "),m_szDate);
	if(m_bHauCan && !m_btruoc10h && !m_bsau10h)
	{
		szWhere.AppendFormat(_T(" and hfe_refstatus <> 'C' "));
	}

	if(m_bbaocat)
		szWhere.AppendFormat(_T(" and hfe_refstatus <> 'C' "));

	szSQL.Format(_T("SELECT distinct  hfl_feeid, hfl_name ") \
				_T("	FROM hms_foodordersheet ") \
				_T("		LEFT JOIN hms_feefood ") \
				_T("		ON (hfo_reforder_id= hfos_orderid) ") \
				_T("		LEFT JOIN hms_feefoodline ") \
				_T("		ON (hfol_orderid= hfo_orderid) ") \
				_T("		LEFT JOIN hms_fee_list ") \
				_T("		ON (hfl_feeid= hfol_itemid) ") \
				_T("		WHERE hfo_orderdate BETWEEN TO_TIMESTAMP('%s 00:00:00', 'YYYY-MM-DD HH24:MI:SS')  ") \
				_T("			AND TO_TIMESTAMP('%s 23:59:59', 'YYYY-MM-DD HH24:MI:SS') ") \
				_T("		AND hfos_depttype='HC' %s ") \
				_T("		AND hfo_ordertype = 'D' AND hfo_orderstatus='A' ") \
				_T("		AND hfl_typeid    = 'F' ") \
				_T("		AND hfl_groupid   = 'FF000' ") \
				_T("		AND hfl_deptid    ='HCKT' ") \
				_T("		AND hfl_subgroup <>'NN' ORDER BY hfl_feeid "), m_szDate,m_szDate,szWhere);
	rs1.ExecSQL(szSQL);
	_msg(_T("SQL1: %s"), szSQL);
	if(rs1.IsEOF())
	{
		ShowMessageBox(_T("No Data"), MB_OK | MB_ICONERROR);
		return;
	}
	nCol=4;
	CString szCase,szSum,szTmp;
	CStringArray arrCol;
	CStringArray arrNameID;
	CStringArray arrType;
	arrType.Add(_T("S"));
	arrType.Add(_T("T"));
	arrType.Add(_T("C"));
	for(int i =0; i < arrType.GetCount();i++)
	{
		rs1.MoveFirst();

			while(!rs1.IsEOF())
			{	
				if(!szSum.IsEmpty())
					szSum.AppendFormat(_T(","));
				szSum.AppendFormat(_T("sum(%s%s) as %s%s"),arrType.GetAt(i),rs1.GetValue(_T("hfl_feeid")),arrType.GetAt(i),rs1.GetValue(_T("hfl_feeid")));
				_fmsg(_T("%s"), szSum);
				if(!szCase.IsEmpty())
					szCase.AppendFormat(_T(","));
				szCase.AppendFormat(_T("case when hfl_subgroup <> 'NN' and hfol_type='%s' and  hfol_itemid='%s' then hfol_qtyissue else 0 end as %s%s"),arrType.GetAt(i),rs1.GetValue(_T("hfl_feeid")),arrType.GetAt(i),rs1.GetValue(_T("hfl_feeid")));
				rs1.GetValue(_T("hfl_feeid"),szTmp);
				tmpStr.Format(_T("%s%s"),arrType.GetAt(i),szTmp);
				arrNameID.Add(tmpStr);
				arrCol.Add(rs1.GetValue(_T("hfl_name")));
				rs1.MoveNext();
			}
			arrCol.Add(_T("Tổng"));
			tmpStr.Format(_T("Sum%s"),arrType.GetAt(i));
			arrNameID.Add(tmpStr);
	}
	xls.SetCellMergedColumns(4,nRow,arrCol.GetCount());
	xls.SetCellText(4, nRow, _T("BỆNH NHÂN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);

	xls.SetCellMergedColumns(4,nRow+1,rs1.GetRecordCount()+1);
	xls.SetCellText(4, nRow +1, _T("SÁNG"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);

	xls.SetCellMergedColumns(4 + rs1.GetRecordCount()+1,nRow+1,rs1.GetRecordCount()+1);
	xls.SetCellText(4 + rs1.GetRecordCount()+1 , nRow +1, _T("TRƯA"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);

	xls.SetCellMergedColumns(4 + rs1.GetRecordCount() + rs1.GetRecordCount() +2 ,nRow+1,rs1.GetRecordCount()+1);
	xls.SetCellText(4 + rs1.GetRecordCount()+1 + rs1.GetRecordCount()+1, nRow +1, _T("TỐI"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
	nRow +=2;
	nCol= 4;
	for (int i = 0; i < arrCol.GetCount(); i++)
	{
		xls.SetCellText(nCol++, nRow, arrCol.GetAt(i), FMT_TEXT | FMT_CENTER, true, 10); 
	}
	xls.SetCellText(nCol ++, nRow, _T("Cộng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
	xls.SetCellText(nCol ++, nRow, _T("Ký nhận"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);

	rs1.MoveFirst();

		
	szSQL.Format(_T("SELECT sd_id, sd_id_alias,tblxxx.* from sys_dept  ") \
				_T("		LEFT JOIN ( ") \
				_T("SELECT hfo_deptid,sum(nnKhac) as nnKhac, ") \
				_T("  sum(nnVipA) as nnVipA, ") \
				_T("  sum(nSang) as SumS, ") \
				_T("  sum(nTrua) as SumT, ") \
				_T("  sum(nChieu) as SumC, ") \
				_T("	%s ") \
				_T(" FROM  ( ") \
				_T("SELECT  hfo_deptid, ") \
				_T("	case when hfl_subgroup='NN' and hfol_type='S' and  VIMES.hms_getvipa(docno,orderdate) >0 then hfol_qtyissue else 0 end as nnVipA, ") \
				_T("		case when hfl_subgroup='NN' and hfol_type='S' and VIMES.hms_getvipa(docno,orderdate) <=0  then hfol_qtyissue else 0 end as nnKhac, ") \
				_T("		case when hfl_subgroup <> 'NN' and hfol_type='S' then hfol_qtyissue else 0 end as nSang, ") \
				_T("		case when hfl_subgroup <> 'NN' and hfol_type='T'   then hfol_qtyissue else 0 end as nTrua, ") \
				_T("		case when hfl_subgroup <> 'NN' and hfol_type='C'   then hfol_qtyissue else 0 end as nChieu, ") \
				_T("	%s ") \
				_T("	from ( ") \
				_T("	SELECT hfo_deptid, ") \
				_T("	hfol_qtyissue, ") \
				_T("	hfol_itemid, ") \
				_T("	hfol_type, ") \
				_T("	hfl_subgroup, ") \
				_T("	trunc(hfo_orderdate) as orderdate, ") \
				_T("	hfo_docno as docno ") \
				_T("	FROM hms_foodordersheet ") \
				_T("	LEFT JOIN hms_feefood ") \
				_T("	ON (hfo_reforder_id= hfos_orderid) ") \
				_T("	LEFT JOIN hms_feefoodline ") \
				_T("	ON (hfol_orderid= hfo_orderid) ") \
				_T("	LEFT JOIN hms_fee_list ON (hfl_feeid= hfol_itemid) ") \
				_T("	WHERE hfo_orderdate BETWEEN TO_TIMESTAMP('%s 00:00:00', 'YYYY-MM-DD HH24:MI:SS')  ") \
				_T("							AND TO_TIMESTAMP('%s 23:59:59', 'YYYY-MM-DD HH24:MI:SS') ") \
				_T("	%s AND hfos_depttype='HC'  AND hfo_ordertype   = 'D' AND hfl_typeid = 'F' ") \
				_T("	AND hfo_orderstatus = 'A' and hfl_groupid = 'FF000' and hfl_deptid='HCKT'   ") \
				_T("	  ") \
				_T("	) tbl ") \
				_T(" ) tbx ") \
				_T(" GROUP BY hfo_deptid ") \
				_T("	)  tblxxx ON (hfo_deptid= sd_id) ") \
				_T(" where sd_type ='DT' and sd_use_hc='Y' ") \
				_T(" order by sd_index1 "),szSum, szCase, m_szDate,m_szDate,szWhere);
	// AND hfo_orderstatus = 'A'
	
	//_msg(_T("%s"),szSQL);
	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
	{	
		_msg(_T("no data"));
		return ;
	}
	int nIndex=1;
	nCol=0;
	nRow++;

	double nCost=0;
	double nLine=0;
	double nGTotal[100];
	for(int i=0; i< 100; i++)
	{
		nGTotal[i]=0;
	}
	CString szQty;
	int nTmp=0;
	while(!rs.IsEOF())
	{	
		nCol=0;
		nLine=0;
		tmpStr.Format(_T("%d"),nIndex++);
		xls.SetCellText(nCol ++, nRow,tmpStr , FMT_TEXT | FMT_CENTER | FMT_WRAPING, false);

		rs.GetValue(_T("sd_id_alias"),tmpStr);
		xls.SetCellText(nCol ++, nRow,tmpStr , FMT_TEXT | FMT_CENTER | FMT_WRAPING, false);
		nTmp=0;
		rs.GetValue(_T("nnKhac"),nCost);
		nGTotal[0] += nCost;
		xls.SetCellText(nCol ++, nRow,double2str(nCost) , FMT_NUMBER1 | FMT_CENTER | FMT_WRAPING, false);

		rs.GetValue(_T("nnVIPA"),nCost);
		nGTotal[1] += nCost;
		xls.SetCellText(nCol ++, nRow,double2str(nCost) , FMT_NUMBER1 | FMT_CENTER | FMT_WRAPING, false);
		nTmp=2;
		
		for(int i=0; i < arrNameID.GetCount(); i ++)
		{	
			
			tmpStr.Format(_T("%s"),arrNameID.GetAt(i));
			rs.GetValue(tmpStr,nCost);
			nGTotal[nTmp] += nCost;
			xls.SetCellText(nCol ++, nRow,double2str(nCost) , FMT_NUMBER1 | FMT_CENTER | FMT_WRAPING, false);
			nTmp++;
		}
		xls.SetCellText(nCol ++, nRow,double2str(nLine) , FMT_NUMBER1 | FMT_CENTER | FMT_WRAPING, false);
		nGTotal[nTmp] += nLine;
		nRow++;
		
		rs.MoveNext();
	}
	
	xls.SetCellText(0 , nRow,_T("TỔNG") , FMT_TEXT | FMT_CENTER | FMT_WRAPING, false);
	nCol=2;
	for(int i=0; i < 100;i++)
	{
		xls.SetCellText(nCol++ , nRow,double2str(nGTotal[i]) , FMT_NUMBER1 | FMT_CENTER | FMT_WRAPING, true);
	}

	EndWaitCursor();
	xls.Save(_T("Exports\\Tong hop quan so an HCKT.xls"));
	
}

void CNTTTotalFood::OnExportHCKT_VER2(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CRecord rs1(&pMF->m_db);
	CString tmpStr;
	UpdateData(true);
	BeginWaitCursor();
	CExcel xls;
	int nCol=0;
	int nRow=0;
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	xls.SetCellMergedColumns(0, 0, 5);
	xls.SetCellMergedColumns(0, 1, 5);
	xls.SetCellMergedColumns(0, 2, 10);
	xls.SetCellMergedColumns(0, 3, 10);
	xls.SetCellText(0, 0, pMF->m_szHealthService, 4098, true);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, 4098, true);
	//TODO: Write Excel Name
	tmpStr = _T("TỔNG HỢP QUÂN SỐ ĂN");
	xls.SetCellText(0, 2, tmpStr, 4098, true);

	tmpStr.Format(_T("Ngày %s tháng %s năm %s"), m_szDate.Right(2) ,m_szDate.Mid(5,2), m_szDate.Left(4));
	xls.SetCellText(0, 3, tmpStr, 4098, true);
	//TODO: Write Column Header
	nRow = 4;
	//Fixed col

	/*xls.SetCellMergedRows(0, nRow, 2);
	xls.SetCellMergedRows(1, nRow, 2);
	xls.SetCellMergedRows(2, nRow, 2);
	xls.SetCellMergedRows(11, nRow, 2);
	xls.SetCellMergedRows(12, nRow, 2);
	xls.SetCellMergedRows(13, nRow, 2);
	xls.SetCellMergedRows(14, nRow, 2);
	xls.SetCellMergedRows(15, nRow, 2);
	xls.SetCellMergedRows(16, nRow, 2);

	xls.SetCellMergedColumns(3, nRow, 4);
	xls.SetCellMergedColumns(7, nRow, 4);*/
	xls.SetCellMergedRows(0,nRow,3);
	xls.SetCellMergedRows(1,nRow,3);
	xls.SetCellMergedRows(2,nRow,3);
	xls.SetCellMergedRows(3,nRow,3);
	xls.SetCellText(0, nRow, _T("STT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
	xls.SetCellText(1, nRow, _T("Khoa"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
	xls.SetCellText(2, nRow, _T("NG Nhà"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
	xls.SetCellText(3, nRow, _T("NG NHà VIP A"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
	CString szSQL;
	CString szWhere,szNamefill;

	if(!m_szDepartmentKey.IsEmpty())
		szWhere.Format(_T(" and hfos_deptid ='%s' "),m_szDepartmentKey);

	if(m_btruoc10h)
		szWhere.AppendFormat(_T("  and hfos_approvedate <= TO_TIMESTAMP('%s 10:00:00', 'YYYY-MM-DD HH24:MI:SS') "),m_szDate);
	if(m_bsau10h)
		szWhere.AppendFormat(_T(" and hfos_approvedate > TO_TIMESTAMP('%s 10:00:00', 'YYYY-MM-DD HH24:MI:SS') "),m_szDate);
	if(m_bHauCan && !m_btruoc10h && !m_bsau10h)
	{
		szWhere.AppendFormat(_T(" and hfe_refstatus <> 'C' "));
	}

	if(m_bbaocat)
		szWhere.AppendFormat(_T(" and hfe_refstatus <> 'C' "));

	/*szSQL.Format(_T("SELECT distinct  hfl_feeid, hfl_name ") \
				_T("	FROM hms_foodordersheet ") \
				_T("		LEFT JOIN hms_feefood ") \
				_T("		ON (hfo_reforder_id= hfos_orderid) ") \
				_T("		LEFT JOIN hms_feefoodline ") \
				_T("		ON (hfol_orderid= hfo_orderid) ") \
				_T("		LEFT JOIN hms_fee_list ") \
				_T("		ON (hfl_feeid= hfol_itemid) ") \
				_T("		WHERE hfo_orderdate BETWEEN TO_TIMESTAMP('%s 00:00:00', 'YYYY-MM-DD HH24:MI:SS')  ") \
				_T("			AND TO_TIMESTAMP('%s 23:59:59', 'YYYY-MM-DD HH24:MI:SS') ") \
				_T("		AND hfos_depttype='HC' %s ") \
				_T("		AND hfo_ordertype = 'D' AND hfo_orderstatus='A' ") \
				_T("		AND hfl_typeid    = 'F' ") \
				_T("		AND hfl_groupid   = 'FF000' ") \
				_T("		AND hfl_deptid    ='HCKT' ") \
				_T("		AND hfl_subgroup <>'NN' ORDER BY hfl_feeid "), m_szDate,m_szDate,szWhere);
	rs1.ExecSQL(szSQL);
	_fmsg(_T("SQL1: %s"), szSQL);
	if(rs1.IsEOF())
	{
		ShowMessageBox(_T("No Data"), MB_OK | MB_ICONERROR);
		return;
	}*/
	nCol=4;
	CString szCase,szSum,szTmp;
	CStringArray arrCol;
	CStringArray arrNameID;
	CStringArray arrType;
	arrType.Add(_T("S"));
	arrType.Add(_T("T"));
	arrType.Add(_T("C"));
	for(int i =0; i < arrType.GetCount();i++)
	{
		szSQL.Format(_T("SELECT distinct  hfl_feeid, hfl_name ") \
				_T("	FROM hms_foodordersheet ") \
				_T("		LEFT JOIN hms_feefood ") \
				_T("		ON (hfo_reforder_id= hfos_orderid) ") \
				_T("		LEFT JOIN hms_feefoodline ") \
				_T("		ON (hfol_orderid= hfo_orderid) ") \
				_T("		LEFT JOIN hms_fee_list ") \
				_T("		ON (hfl_feeid= hfol_itemid) ") \
				_T("		WHERE hfo_orderdate BETWEEN TO_TIMESTAMP('%s 00:00:00', 'YYYY-MM-DD HH24:MI:SS')  ") \
				_T("			AND TO_TIMESTAMP('%s 23:59:59', 'YYYY-MM-DD HH24:MI:SS') ") \
				_T("		AND hfos_depttype='HC' %s ") \
				_T("		AND hfo_ordertype = 'D' AND hfo_orderstatus='A' and hfol_type = '%s'") \
				_T("		AND hfl_typeid    = 'F' ") \
				_T("		AND hfl_groupid   = 'FF000' ") \
				_T("		AND hfl_deptid    ='HCKT' ") \
				_T("		AND hfl_subgroup <>'NN' ORDER BY hfl_feeid "), m_szDate,m_szDate,szWhere, arrType.GetAt(i));

		//szWhere.AppendFormat(_T(" and hfol_type = '%s' "), arrType.GetAt(i));

		rs1.ExecSQL(szSQL);
		_fmsg(_T("SQL1: %s"), szSQL);
		if(rs1.IsEOF())
		{
			ShowMessageBox(_T("No Data"), MB_OK | MB_ICONERROR);
			return;
		}

		rs1.MoveFirst();

			while(!rs1.IsEOF())
			{	
				if(!szSum.IsEmpty())
					szSum.AppendFormat(_T(","));
				szSum.AppendFormat(_T("sum(%s%s) as %s%s"),arrType.GetAt(i),rs1.GetValue(_T("hfl_feeid")),arrType.GetAt(i),rs1.GetValue(_T("hfl_feeid")));
				if(!szCase.IsEmpty())
					szCase.AppendFormat(_T(","));
				szCase.AppendFormat(_T("case when hfl_subgroup <> 'NN' and hfol_type='%s' and  hfol_itemid='%s' then hfol_qtyissue else 0 end as %s%s"),arrType.GetAt(i),rs1.GetValue(_T("hfl_feeid")),arrType.GetAt(i),rs1.GetValue(_T("hfl_feeid")));
				rs1.GetValue(_T("hfl_feeid"),szTmp);
				tmpStr.Format(_T("%s%s"),arrType.GetAt(i),szTmp);
				arrNameID.Add(tmpStr);
				arrCol.Add(rs1.GetValue(_T("hfl_name")));
				rs1.MoveNext();
			}
			arrCol.Add(_T("Tổng"));
			tmpStr.Format(_T("Sum%s"),arrType.GetAt(i));
			arrNameID.Add(tmpStr);
	}
	xls.SetCellMergedColumns(4,nRow,arrCol.GetCount());
	xls.SetCellText(4, nRow, _T("BỆNH NHÂN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);

	xls.SetCellMergedColumns(4,nRow+1,rs1.GetRecordCount());
	xls.SetCellText(4, nRow +1, _T("SÁNG"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);

	xls.SetCellMergedColumns(4 + rs1.GetRecordCount(),nRow+1,rs1.GetRecordCount()+1);
	xls.SetCellText(4 + rs1.GetRecordCount() , nRow +1, _T("TRƯA"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);

	xls.SetCellMergedColumns(4 + rs1.GetRecordCount() + rs1.GetRecordCount() +2 ,nRow+1,rs1.GetRecordCount()+1);
	xls.SetCellText(4 + rs1.GetRecordCount()+1 + rs1.GetRecordCount()+1, nRow +1, _T("TỐI"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
	nRow +=2;
	nCol= 4;
	for (int i = 0; i < arrCol.GetCount(); i++)
	{
		xls.SetCellText(nCol++, nRow, arrCol.GetAt(i), FMT_TEXT | FMT_CENTER, true, 10); 
	}
	xls.SetCellText(nCol ++, nRow, _T("Cộng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
	xls.SetCellText(nCol ++, nRow, _T("Ký nhận"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);

	rs1.MoveFirst();

		
	szSQL.Format(_T("SELECT sd_id, sd_id_alias,tblxxx.* from sys_dept  ") \
				_T("		LEFT JOIN ( ") \
				_T("SELECT hfo_deptid,sum(nnKhac) as nnKhac, ") \
				_T("  sum(nnVipA) as nnVipA, ") \
				_T("  sum(nSang) as SumS, ") \
				_T("  sum(nTrua) as SumT, ") \
				_T("  sum(nChieu) as SumC, ") \
				_T("	%s ") \
				_T(" FROM  ( ") \
				_T("SELECT  hfo_deptid, ") \
				_T("	case when hfl_subgroup='NN' and hfol_type='S' and  VIMES.hms_getvipa(docno,orderdate) >0 then hfol_qtyissue else 0 end as nnVipA, ") \
				_T("		case when hfl_subgroup='NN' and hfol_type='S' and VIMES.hms_getvipa(docno,orderdate) <=0  then hfol_qtyissue else 0 end as nnKhac, ") \
				_T("		case when hfl_subgroup <> 'NN' and hfol_type='S' then hfol_qtyissue else 0 end as nSang, ") \
				_T("		case when hfl_subgroup <> 'NN' and hfol_type='T'   then hfol_qtyissue else 0 end as nTrua, ") \
				_T("		case when hfl_subgroup <> 'NN' and hfol_type='C'   then hfol_qtyissue else 0 end as nChieu, ") \
				_T("	%s ") \
				_T("	from ( ") \
				_T("	SELECT hfo_deptid, ") \
				_T("	hfol_qtyissue, ") \
				_T("	hfol_itemid, ") \
				_T("	hfol_type, ") \
				_T("	hfl_subgroup, ") \
				_T("	trunc(hfo_orderdate) as orderdate, ") \
				_T("	hfo_docno as docno ") \
				_T("	FROM hms_foodordersheet ") \
				_T("	LEFT JOIN hms_feefood ") \
				_T("	ON (hfo_reforder_id= hfos_orderid) ") \
				_T("	LEFT JOIN hms_feefoodline ") \
				_T("	ON (hfol_orderid= hfo_orderid) ") \
				_T("	LEFT JOIN hms_fee_list ON (hfl_feeid= hfol_itemid) ") \
				_T("	WHERE hfo_orderdate BETWEEN TO_TIMESTAMP('%s 00:00:00', 'YYYY-MM-DD HH24:MI:SS')  ") \
				_T("							AND TO_TIMESTAMP('%s 23:59:59', 'YYYY-MM-DD HH24:MI:SS') ") \
				_T("	%s AND hfos_depttype='HC'  AND hfo_ordertype   = 'D' AND hfl_typeid = 'F' ") \
				_T("	AND hfo_orderstatus = 'A' and hfl_groupid = 'FF000' and hfl_deptid='HCKT'   ") \
				_T("	  ") \
				_T("	) tbl ") \
				_T(" ) tbx ") \
				_T(" GROUP BY hfo_deptid ") \
				_T("	)  tblxxx ON (hfo_deptid= sd_id) ") \
				_T(" where sd_type ='DT' and sd_use_hc='Y' ") \
				_T(" order by sd_index1 "),szSum, szCase, m_szDate,m_szDate,szWhere);
	// AND hfo_orderstatus = 'A'
	
	//_msg(_T("%s"),szSQL);
	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
	{	
		_msg(_T("no data"));
		return ;
	}
	int nIndex=1;
	nCol=0;
	nRow++;

	double nCost=0;
	double nLine=0;
	double nGTotal[100];
	for(int i=0; i< 100; i++)
	{
		nGTotal[i]=0;
	}
	CString szQty;
	int nTmp=0;
	while(!rs.IsEOF())
	{	
		nCol=0;
		nLine=0;
		tmpStr.Format(_T("%d"),nIndex++);
		xls.SetCellText(nCol ++, nRow,tmpStr , FMT_TEXT | FMT_CENTER | FMT_WRAPING, false);

		rs.GetValue(_T("sd_id_alias"),tmpStr);
		xls.SetCellText(nCol ++, nRow,tmpStr , FMT_TEXT | FMT_CENTER | FMT_WRAPING, false);
		nTmp=0;
		rs.GetValue(_T("nnKhac"),nCost);
		nGTotal[0] += nCost;
		xls.SetCellText(nCol ++, nRow,double2str(nCost) , FMT_NUMBER1 | FMT_CENTER | FMT_WRAPING, false);

		rs.GetValue(_T("nnVIPA"),nCost);
		nGTotal[1] += nCost;
		xls.SetCellText(nCol ++, nRow,double2str(nCost) , FMT_NUMBER1 | FMT_CENTER | FMT_WRAPING, false);
		nTmp=2;
		
		for(int i=0; i < arrNameID.GetCount(); i ++)
		{	
			
			tmpStr.Format(_T("%s"),arrNameID.GetAt(i));
			rs.GetValue(tmpStr,nCost);
			nGTotal[nTmp] += nCost;
			xls.SetCellText(nCol ++, nRow,double2str(nCost) , FMT_NUMBER1 | FMT_CENTER | FMT_WRAPING, false);
			nTmp++;
		}
		xls.SetCellText(nCol ++, nRow,double2str(nLine) , FMT_NUMBER1 | FMT_CENTER | FMT_WRAPING, false);
		nGTotal[nTmp] += nLine;
		nRow++;
		
		rs.MoveNext();
	}
	
	xls.SetCellText(0 , nRow,_T("TỔNG") , FMT_TEXT | FMT_CENTER | FMT_WRAPING, false);
	nCol=2;
	for(int i=0; i < 100;i++)
	{
		xls.SetCellText(nCol++ , nRow,double2str(nGTotal[i]) , FMT_NUMBER1 | FMT_CENTER | FMT_WRAPING, true);
	}

	EndWaitCursor();
	xls.Save(_T("Exports\\Tong hop quan so an HCKT ver2.xls"));
	
}

CString CNTTTotalFood::GetQueryStringHCKT(){
	CString szSQL, szWhere, szSubWhere, tmpStr, szTemp, szRoomID, szObjects;

	szWhere.AppendFormat(_T(" AND hfo_orderdate BETWEEN TO_TIMESTAMP('%s 00:00:00', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" AND TO_TIMESTAMP('%s 23:59:59', 'YYYY-MM-DD HH24:MI:SS') AND hfo_approvedate < TO_TIMESTAMP('%s 10:00:00', 'YYYY-MM-DD HH24:MI:SS') AND hfo_depttype <> 'KB'"), m_szDate.Left(10), m_szDate.Left(10), m_szDate.Left(10));

	if(!m_szDepartmentKey.IsEmpty())
	{
		szSubWhere.AppendFormat(_T(" AND deptid3 = '%s'"), m_szDepartmentKey);
	}

	if(m_bHauCan)
		//szWhere.AppendFormat(_T(" AND NVL(hfl_deptid, 'X') = 'HCKT'"));
		szWhere.AppendFormat(_T(" AND NVL(hfl_deptid, 'X') = 'HCKT' AND NVL(hfl_index1, 'N') <> '212' AND NVL(hfos_milk,'N')<>'MILK'"));
	else
		//szWhere.AppendFormat(_T(" AND NVL(hfl_deptid, 'X') <> 'HCKT'"));
		szWhere.AppendFormat(_T(" AND NVL(hfl_deptid, 'X') <> 'HCKT' AND NVL(hfl_index1, 'N') <> '212' AND NVL(hfos_milk,'N')<>'MILK'"));

	szSQL.Format(_T(" SELECT sd_index,") \
		//GIANGDH updated sd_id_alias 07/12/2023
		_T("   sd_id, sd_id_alias,") \
		_T("   deptid3,") \
		_T("   NVL(SUM(BT10), 0)   AS BT10,") \
		_T("   NVL(SUM(PK4), 0)    AS PK4,") \
		_T("   NVL(SUM(tongT), 0)  AS tongT,") \
		_T("   NVL(SUM(tongC), 0)  AS tongC,") \
		_T("   NVL(SUM(tongTT), 0) AS tongTT") \
		_T(" FROM sys_dept") \
		_T(" LEFT JOIN") \
		_T("   (SELECT deptid           AS deptid3,") \
		_T("     SUM(BT10   - BT10CT)   AS BT10,") \
		_T("     SUM(PK4    - PK4CT)    AS PK4,") \
		_T("     SUM(tongT  - tongTCT)  AS tongT,") \
		_T("     SUM(tongC  - tongCCT)  AS tongC,") \
		_T("     SUM(tongTT - tongTTCT) AS tongTT") \
		_T("   FROM") \
		_T("     (SELECT deptid,") \
		_T("       CASE") \
		_T("         WHEN hfl_index1 = 200") \
		_T("         AND HFL_MEDICAL_CODE   = 'BT01-Cơm'") \
		_T("         THEN hfol_qtyorder") \
		_T("         ELSE 0") \
		_T("       END AS BT10,") \
		_T("       CASE") \
		_T("         WHEN hfl_index1   = 200") \
		_T("         AND HFL_MEDICAL_CODE     = 'BT01-Cơm'") \
		_T("         AND hfe_refstatus = 'C'") \
		_T("         THEN hfol_qtyorder") \
		_T("         ELSE 0") \
		_T("       END AS BT10CT,") \
		_T("       CASE") \
		_T("         WHEN hfl_index1 = 200") \
		_T("         AND HFL_MEDICAL_CODE   = 'PK4'") \
		_T("         THEN hfol_qtyorder") \
		_T("         ELSE 0") \
		_T("       END AS PK4,") \
		_T("       CASE") \
		_T("         WHEN hfl_index1   = 200") \
		_T("         AND HFL_MEDICAL_CODE     = 'PK4'") \
		_T("         AND hfe_refstatus = 'C'") \
		_T("         THEN hfol_qtyorder") \
		_T("         ELSE 0") \
		_T("       END AS PK4CT,") \
		_T("       CASE") \
		_T("         WHEN hfl_index1 = 200") \
		_T("         AND hfol_type   = 'T'") \
		_T("         THEN hfol_qtyorder") \
		_T("         ELSE 0") \
		_T("       END AS tongT,") \
		_T("       CASE") \
		_T("         WHEN hfl_index1   = 200") \
		_T("         AND hfol_type     = 'T'") \
		_T("         AND hfe_refstatus = 'C'") \
		_T("         THEN hfol_qtyorder") \
		_T("         ELSE 0") \
		_T("       END AS tongTCT,") \
		_T("       CASE") \
		_T("         WHEN hfl_index1 = 200") \
		_T("         AND hfol_type   = 'C'") \
		_T("         THEN hfol_qtyorder") \
		_T("         ELSE 0") \
		_T("       END AS tongC,") \
		_T("       CASE") \
		_T("         WHEN hfl_index1   = 200") \
		_T("         AND hfol_type     = 'C'") \
		_T("         AND hfe_refstatus = 'C'") \
		_T("         THEN hfol_qtyorder") \
		_T("         ELSE 0") \
		_T("       END AS tongCCT,") \
		_T("       CASE") \
		_T("         WHEN hfl_index1 = 200") \
		_T("         THEN hfol_qtyorder") \
		_T("         ELSE 0") \
		_T("       END AS tongTT,") \
		_T("       CASE") \
		_T("         WHEN hfl_index1   = 200") \
		_T("         AND hfe_refstatus = 'C'") \
		_T("         THEN hfol_qtyorder") \
		_T("         ELSE 0") \
		_T("       END AS tongTTCT") \
		_T("     FROM") \
		_T("       (SELECT") \
		_T("         CASE") \
		_T("           WHEN hfo_depttype = 'DT'") \
		_T("           THEN hfo_deptid") \
		_T("           ELSE hcr_admitdept") \
		_T("         END           AS deptid,") \
		_T("         hfol_qtyorder AS foodqty,") \
		_T("         CASE") \
		_T("           WHEN hfe_refstatus = 'C'") \
		_T("           THEN hfol_qtyorder") \
		_T("           ELSE 0") \
		_T("         END AS foodqtyC,") \
		_T("         HFL_MEDICAL_CODE,") \
		_T("         hfl_name,") \
		_T("         hfl_feeid,") \
		_T("         hfol_qtyorder,") \
		_T("         hfe_refstatus,") \
		_T("         hfl_index1,") \
		_T("         hfol_type") \
		_T("       FROM hms_feefood") \
		_T("       LEFT JOIN hms_feefoodline") \
		_T("       ON(hfo_orderid=hfol_orderid)") \
		_T("       LEFT JOIN hms_clinical_record") \
		_T("       ON(hcr_docno=hfo_docno)") \
		_T("       LEFT JOIN hms_doc") \
		_T("       ON(hd_docno=hfo_docno)") \
		_T("       LEFT JOIN hms_fee_list") \
		_T("       ON(hfl_feeid        =hfol_itemid)") \
		_T("       LEFT JOIN hms_foodordersheet ON (hfos_orderid = hfo_reforder_id)") \
		_T("       WHERE hfo_ordertype = 'D' AND NVL(HFOS_DEPTTYPE_NN,'N')<>'HCNN' ") \
		_T("       AND hfo_orderstatus = 'A' %s") \
		_T("       ) tb3") \
		_T("     WHERE HFL_MEDICAL_CODE IN('BT01-Cơm', 'PK4')") \
		_T("     AND deptid NOT  IN('A1','A1-A','A1-C', 'A12', 'A16')") \
		_T("     ) tb4") \
		_T("   GROUP BY deptid") \
		_T("   ) ON (deptid3 = sd_id)") \
		_T(" WHERE sd_type IN ('DT') AND sd_id NOT IN ('A14', 'A22', 'B5', 'B10', 'B15', 'CYBERL', 'C6', 'C18', 'C15', 'KD1', 'B3')") \
		_T(" AND sd_index   IS NOT NULL %s ") \
		_T(" GROUP BY sd_index,") \
		_T("   sd_id,sd_id_alias,") \
		_T("   deptid3") \
		_T(" ORDER BY sd_index"), szWhere, szSubWhere);
	//_fmsg(_T("%s"), szSQL);
	return szSQL;
}
