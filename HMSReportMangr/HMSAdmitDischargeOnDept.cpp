#include "HMSAdmitDischargeOnDept.h"
#include "MainFrm.h"
#include "Excel.h"
#include "ReportDocument.h"
#include "HMSReportSnapDlg.h"
#include "StringToken.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CHMSAdmitDischargeOnDept *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CHMSAdmitDischargeOnDept *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CHMSAdmitDischargeOnDept *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSAdmitDischargeOnDept *)pWnd)->OnFromDateCheckValue();
} 
static void _OnLoadSelectFnc(CWnd *pWnd){
	CHMSAdmitDischargeOnDept *pVw = (CHMSAdmitDischargeOnDept *)pWnd;
	pVw->OnLoadSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSAdmitDischargeOnDept*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSAdmitDischargeOnDept*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSAdmitDischargeOnDept*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSAdmitDischargeOnDept*)pWnd)->OnListDeleteItem();
} 
static void _OnDeptSelectChangeFnc(CWnd *pWnd, int nOldItemSel,
                                   int nNewItemSel) {
    ((CHMSAdmitDischargeOnDept *)pWnd)
        ->OnDeptSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDeptSelendokFnc(CWnd *pWnd){
	((CHMSAdmitDischargeOnDept *)pWnd)->OnDeptSelendok();
}
/*static void _OnDeptSetfocusFnc(CWnd *pWnd){
	((CHMSAdmitDischargeOnDept *)pWnd)->OnDeptKillfocus();
}*/
/*static void _OnDeptKillfocusFnc(CWnd *pWnd){
	((CHMSAdmitDischargeOnDept *)pWnd)->OnDeptKillfocus();
}*/
static long _OnDeptLoadDataFnc(CWnd *pWnd){
	return ((CHMSAdmitDischargeOnDept *)pWnd)->OnDeptLoadData();
}
/*static void _OnDeptAddNewFnc(CWnd *pWnd){
	((CHMSAdmitDischargeOnDept *)pWnd)->OnDeptAddNew();
}*/
static void _OnOutpatientSelectFnc(CWnd *pWnd){
	 ((CHMSAdmitDischargeOnDept*)pWnd)->OnOutpatientSelect();
}

static void _OnPrintSelectFnc(CWnd *pWnd){
	CHMSAdmitDischargeOnDept *pVw = (CHMSAdmitDischargeOnDept *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CHMSAdmitDischargeOnDept *pVw = (CHMSAdmitDischargeOnDept *)pWnd;
	pVw->OnExportSelect();
} 

static void _OnCaptureSelectFnc(CWnd *pWnd){
	CHMSAdmitDischargeOnDept *pVw = (CHMSAdmitDischargeOnDept *)pWnd;
	pVw->OnCaptureSelect();
} 
static int _OnAddHMSAdmitDischargeOnDeptFnc(CWnd *pWnd){
	 return ((CHMSAdmitDischargeOnDept*)pWnd)->OnAddHMSAdmitDischargeOnDept();
} 
static int _OnEditHMSAdmitDischargeOnDeptFnc(CWnd *pWnd){
	 return ((CHMSAdmitDischargeOnDept*)pWnd)->OnEditHMSAdmitDischargeOnDept();
} 
static int _OnDeleteHMSAdmitDischargeOnDeptFnc(CWnd *pWnd){
    return ((CHMSAdmitDischargeOnDept *)pWnd)
        ->OnDeleteHMSAdmitDischargeOnDept();
} 
static int _OnSaveHMSAdmitDischargeOnDeptFnc(CWnd *pWnd){
	 return ((CHMSAdmitDischargeOnDept*)pWnd)->OnSaveHMSAdmitDischargeOnDept();
} 
static int _OnCancelHMSAdmitDischargeOnDeptFnc(CWnd *pWnd){
    return ((CHMSAdmitDischargeOnDept *)pWnd)
        ->OnCancelHMSAdmitDischargeOnDept();
} 
CHMSAdmitDischargeOnDept::CHMSAdmitDischargeOnDept(){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
	m_szReport_id = _T("RPM_QUAN_SO_RA_VAO");
	m_nNoDataCol = 51;
}
CHMSAdmitDischargeOnDept::~CHMSAdmitDischargeOnDept() {}
void CHMSAdmitDischargeOnDept::OnCreateComponents(){
	m_wndReportFilterInfo.Create(this, _T("Report Condition"), 5, 5, 1015, 60);
	m_wndFromDateLabel.Create(this, _T("Date"), 10, 30, 80, 55);
	m_wndFromDate.Create(this,85, 30, 185, 55); 
	m_wndOutpatient.Create(this, _T("Outpatient"), 190, 30, 290, 55);
	m_wndDepartmentLab.Create(this, _T("&Department"), 295, 30, 370, 55);
	m_wndDept.Create(this,375, 30, 670, 55); 
	m_wndPrint.Create(this, _T("&Print"), 675, 30, 755, 55);
	m_wndExport.Create(this, _T("&Export"), 760, 30, 840, 55);
	m_wndLoad.Create(this, _T("&Load"), 845, 30, 925, 55);
	m_wndCapture.Create(this, _T("Capture"), 930, 30, 1010, 55);

	m_wndList.Create(this,5, 65, 1015, 755); 
	
	CString tmpStr;
    m_wndList.EnableScrollBar(SB_HORZ);
	m_wndList.ModifyStyle(0, LVS_NOSORTHEADER);
	m_wndList.GetHeaderControl()->SetItemHeight(4);
	m_wndList.InsertColumn(0, _T("Khoa"), CFMT_TEXT , 50);

	
	m_wndList.InsertColumn(1, _T("Chỉ tiêu"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(2, _T("Thực kê"), CFMT_MONEY, 50);
	m_wndList.GetHeaderControl()->MergeCell(_T("Giường"), 0, 1, 2, 2, true);
	
    // m_wndList.GetHeaderControl()->MergeCell(_T("BN cũ 6h"), 0, 3, 4, 4,
    // true);
	m_wndList.InsertColumn(3, _T("BN cũ 6h"), CFMT_MONEY, 50);
	
	m_wndList.InsertColumn(4, _T("C1-1"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(5, _T("AB"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(6, _T("TYC"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(7, _T("C1-2"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(8, _T("C1-3"), CFMT_MONEY, 50);
    m_wndList.InsertColumn(9, _T("KB_A11"), CFMT_MONEY, 50);
    m_wndList.InsertColumn(10, _T("KB_A16"), CFMT_MONEY, 50);
    m_wndList.InsertColumn(11, _T("KB_A4"), CFMT_MONEY, 50);
    m_wndList.InsertColumn(12, _T("TTTM"), CFMT_MONEY, 50);
    m_wndList.InsertColumn(13, _T("TTTVDT"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(14, _T("CK đến"), CFMT_MONEY, 50);
	m_wndList.GetHeaderControl()->MergeCell(_T("Tăng"), 1, 4, 2, 14, true);

	m_wndList.InsertColumn(15, _T("Ra viện"), CFMT_MONEY, 70);
	m_wndList.InsertColumn(16, _T("Xin về"), CFMT_MONEY, 70);
	m_wndList.InsertColumn(17, _T("Tử vong"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(18, _T("Ck đi"), CFMT_MONEY, 70);
	m_wndList.InsertColumn(19, _T("Chuyển viện"), CFMT_MONEY, 70);
	m_wndList.GetHeaderControl()->MergeCell(_T("Giảm"), 1, 10, 2, 19, true);
    m_wndList.GetHeaderControl()->MergeCell(_T("Tăng, giảm QS từ 6h đến 17h"), 0, 4, 1, 19, true);

	m_wndList.InsertColumn(20, _T("QS lúc 17h"), CFMT_MONEY, 50);

	m_wndList.InsertColumn(21, _T("C1-1"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(22, _T("AB"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(23, _T("TYC"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(24, _T("C1-2"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(25, _T("C1-3"), CFMT_MONEY, 50);
    m_wndList.InsertColumn(26, _T("KB_A11"), CFMT_MONEY, 50);
    m_wndList.InsertColumn(27, _T("KB_A16"), CFMT_MONEY, 50);
    m_wndList.InsertColumn(28, _T("KB_A4"), CFMT_MONEY, 50);
    m_wndList.InsertColumn(29, _T("TTTM"), CFMT_MONEY, 50);
    m_wndList.InsertColumn(30, _T("TTTVDT"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(31, _T("CK đến"), CFMT_MONEY, 50);
	m_wndList.GetHeaderControl()->MergeCell(_T("Tăng"), 1, 16, 2, 31, true);

	m_wndList.InsertColumn(32, _T("Ra viện"), CFMT_MONEY, 70);
	m_wndList.InsertColumn(33, _T("Xin về"), CFMT_MONEY, 70);
	m_wndList.InsertColumn(34, _T("Tử vong"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(35, _T("Ck đi"), CFMT_MONEY, 70);
	m_wndList.InsertColumn(36, _T("Chuyển viện"), CFMT_MONEY, 70);
	m_wndList.GetHeaderControl()->MergeCell(_T("Giảm"), 1, 22, 2, 36, true);
    m_wndList.GetHeaderControl()->MergeCell(_T("Tăng, giảm QS từ 17h đến 6h"), 0, 16, 1, 36, true);

	m_wndList.InsertColumn(37, _T("Tướng"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(38, _T("3//,4//"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(39, _T("<= 2//"), CFMT_MONEY, 50);
	m_wndList.GetHeaderControl()->MergeCell(_T("BHQN"), 1, 27, 2, 39, true);
	m_wndList.InsertColumn(40, _T("BHQĐ"), CFMT_MONEY, 50);

	m_wndList.InsertColumn(41, _T("Tướng"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(42, _T("3//,4//"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(44, _T("<= 2//"), CFMT_MONEY, 50);
	m_wndList.GetHeaderControl()->MergeCell(_T("BHQH"), 1, 31, 2, 44, true);
	
	m_wndList.InsertColumn(45, _T("BH #"), CFMT_MONEY, 70);
	m_wndList.InsertColumn(46, _T("Bạn"), CFMT_MONEY, 70);
	m_wndList.InsertColumn(47, _T("DVYT"), CFMT_MONEY, 50);
    m_wndList.GetHeaderControl()->MergeCell(_T("Thành phần hiện có "), 0, 27, 1, 47, true);
	m_wndList.InsertColumn(48, _T("Hiện có lúc 6h"), CFMT_MONEY, 50);
	m_wndPrint.ShowWindow(SW_HIDE);

}
void CHMSAdmitDischargeOnDept::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetCheckValue(true);
	//m_wndDept.SetCheckValue(true);
	m_wndDept.LimitText(1024);
	
	m_wndDept.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndDept.InsertColumn(1, _T("Name"), CFMT_TEXT, 550);

}
void CHMSAdmitDischargeOnDept::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	m_wndLoad.SetEvent(WE_CLICK, _OnLoadSelectFnc);
	m_wndDept.SetEvent(WE_SELENDOK, _OnDeptSelendokFnc);
	//m_wndDept.SetEvent(WE_SETFOCUS, _OnDeptSetfocusFnc);
	//m_wndDept.SetEvent(WE_KILLFOCUS, _OnDeptKillfocusFnc);
	m_wndDept.SetEvent(WE_SELCHANGE, _OnDeptSelectChangeFnc);
	m_wndDept.SetEvent(WE_LOADDATA, _OnDeptLoadDataFnc);
	//m_wndDept.SetEvent(WE_ADDNEW, _OnDeptAddNewFnc);
	m_wndOutpatient.SetEvent(WE_CLICK, _OnOutpatientSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndCapture.SetEvent(WE_CLICK, _OnCaptureSelectFnc);
    AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSAdmitDischargeOnDeptFnc, 0, 'A',
             VK_CONTROL);
    AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSAdmitDischargeOnDeptFnc, 0, 'E',
             VK_CONTROL);
    AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSAdmitDischargeOnDeptFnc, 0,
             'D', VK_CONTROL);
    AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSAdmitDischargeOnDeptFnc, 0, 'S',
             VK_CONTROL);
	AddEvent(0, _T("-"));
    AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSAdmitDischargeOnDeptFnc, 0,
             'T', VK_CONTROL);
	SetMode(VM_ADD);

}
void CHMSAdmitDischargeOnDept::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndDept.GetDlgCtrlID(), m_szDeptKey);
	DDX_Check(pDX, m_wndOutpatient.GetDlgCtrlID(), m_bOutpatient);

}
void CHMSAdmitDischargeOnDept::UpdateJson(BOOL bSave){
    if (bSave) {
	m_jData[_T("FromDate")] =  m_szFromDate;
	m_jData[_T("Dept")] =  m_szDeptKey;
	m_jData[_T("Outpatient")] =  m_bOutpatient;
    } else {
	m_jData[_T("FromDate")].GetValue(m_szFromDate);
	m_jData[_T("Dept")].GetValue(m_szDeptKey);
	m_jData[_T("Outpatient")].GetValue(m_bOutpatient);
	}

}
void CHMSAdmitDischargeOnDept::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSAdmitDischargeOnDept::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSAdmitDischargeOnDept::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szDeptKey.Empty();
	m_bOutpatient=FALSE;

}
int CHMSAdmitDischargeOnDept::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, 2, 3,-1);
 			SetDefaultValues();
			m_szFromDate= pMF->GetSysDate();
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
/*void CHMSAdmitDischargeOnDept::OnFromDateChange(){
	
} */
/*void CHMSAdmitDischargeOnDept::OnFromDateSetfocus(){
	
} */
/*void CHMSAdmitDischargeOnDept::OnFromDateKillfocus(){
	
} */
int CHMSAdmitDischargeOnDept::OnFromDateCheckValue() { return 0; }
void CHMSAdmitDischargeOnDept::OnLoadSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnListLoadData();
} 
void CHMSAdmitDischargeOnDept::OnListDblClick() {}
void CHMSAdmitDischargeOnDept::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSAdmitDischargeOnDept::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSAdmitDischargeOnDept::OnListLoadData(){

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	szSQL= GetStringQuery();
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
            rs.GetValue(_T("dept_alias")), rs.GetValue(_T("sd_avaiable_bed")),
            rs.GetValue(_T("sd_planned_bed")), rs.GetValue(_T("oldpatient")),
            rs.GetValue(_T("nTangC11")), rs.GetValue(_T("nTangAB")),
            rs.GetValue(_T("nTangTYC")), rs.GetValue(_T("nTangC12")),
            rs.GetValue(_T("nTangC13")), rs.GetValue(_T("nTangKBA11")),
            rs.GetValue(_T("nTangKBA16")),
            rs.GetValue(_T("nTangKBA4")), rs.GetValue(_T("nTangTTTM")),
            rs.GetValue(_T("nTangTTTVDT")),
            rs.GetValue(_T("nCkden")),
            rs.GetValue(_T("nRavien")), rs.GetValue(_T("nXinve")),
            rs.GetValue(_T("nTuVong")), rs.GetValue(_T("nChuyenkhoa")),
            rs.GetValue(_T("nChuyenVien")), rs.GetValue(_T("nQs17h")),
            rs.GetValue(_T("nTangC1117h")), rs.GetValue(_T("nTangAB17h")),
            rs.GetValue(_T("nTangTYC17h")), rs.GetValue(_T("nTangC1217h")),
            rs.GetValue(_T("nTangC1317h")), rs.GetValue(_T("nTangKBA1117h")),
            rs.GetValue(_T("nTangKBA1617h")),
            rs.GetValue(_T("nTangKBA417h")), rs.GetValue(_T("nTangTTTM17h")),
            rs.GetValue(_T("nTangTTTVDT17h")),
            rs.GetValue(_T("nCkden17h")),
            rs.GetValue(_T("nRavien17h")), rs.GetValue(_T("nXinve17h")),
            rs.GetValue(_T("nTuVong17h")), rs.GetValue(_T("nChuyenkhoa17h")),
            rs.GetValue(_T("nChuyenVien17h")), rs.GetValue(_T("bhqn1")),
            rs.GetValue(_T("bhqn2")), rs.GetValue(_T("bhqn3")),
            rs.GetValue(_T("bhqd")), rs.GetValue(_T("bhqh1")),
            rs.GetValue(_T("bhqh2")), rs.GetValue(_T("bhqh3")),
            rs.GetValue(_T("bhtn")), rs.GetValue(_T("bhte6t")),
            rs.GetValue(_T("bhkhac")), rs.GetValue(_T("ban")),
            rs.GetValue(_T("dv")), rs.GetValue(_T("nQSck")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;

}
void CHMSAdmitDischargeOnDept::OnDeptSelectChange(int nOldItemSel, int nNewItemSel) {
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
}
void CHMSAdmitDischargeOnDept::OnDeptSelendok() {}
/*void CHMSAdmitDischargeOnDept::OnDeptSetfocus(){
	
}*/
/*void CHMSAdmitDischargeOnDept::OnDeptKillfocus(){
	
}*/
long CHMSAdmitDischargeOnDept::OnDeptLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDept.IsSearchKey() && !m_szDeptKey.IsEmpty()){
		szWhere.Format(_T(" and sd_id_alias='%s' "), m_szDeptKey);
	}
	m_wndDept.DeleteAllItems(); 
	int nCount = 0;
    szSQL.Format(
        _T("SELECT sd_id_alias as id, sd_name as name FROM sys_dept WHERE 1=1 ")
        _T("and SD_ISACTIVE='Y' %s ORDER BY id "),
        szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
        m_wndDept.AddItems(rs.GetValue(_T("id")), rs.GetValue(_T("name")),
                           NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSAdmitDischargeOnDept::OnDeptAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
	void CHMSAdmitDischargeOnDept::OnOutpatientSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_bOutpatient= !m_bOutpatient;
	
}

void CHMSAdmitDischargeOnDept::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSAdmitDischargeOnDept::OnExportSelect(){


	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiMenu menu(this);
	CString tmpStr;
	menu.CreatePopupMenu();
	TranslateString(_T("Export summary"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 1, tmpStr);
	menu.AppendMenu(MF_SEPARATOR);
	TranslateString(_T("Export detail"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 2, tmpStr);
	menu.AppendMenu(MF_SEPARATOR);
	menu.AppendMenu(MF_BYPOSITION, 3, _T("Xuất log.."));	

	CRect rect;
	m_wndExport.GetWindowRect(&rect);
    int nPos = menu.TrackPopupMenu(
        TPM_RETURNCMD | TPM_RIGHTALIGN | TPM_BOTTOMALIGN | TPM_NONOTIFY,
        rect.right, rect.top, this);
    switch (nPos) {
		case 1:
			OnExportTonghop();
			break;
		case 2:
			OnExportChitiet();
			break;
		case 3:
			OnExportLog();
			break;
	}

	return ;
} 
void CHMSAdmitDischargeOnDept::OnExportTonghop() {
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
    CRecord rs(&pMF->m_db), rsx(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szWhere;
	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();
	int nRow =0, nCol = 0, nMergePos = 0, nMergeQty = 0;
	CExcel xls;
	
    if (!xls.Load(_T("Exports\\DANH SACH VAO RA CHUYEN VIEN.xls")))
        AfxMessageBox(_T("Load fail!"));
	xls.SetWorksheet(0);
	CellFormat cf(&xls);
	cf.SetColor(XLCOLOR_RED);
	cf.SetBold(true);
    tmpStr.Format(_T("BÁO CÁO QUÂN SỐ NGÀY  %s THÁNG  %s NĂM %s"),
                  m_szFromDate.Mid(8, 2), m_szFromDate.Mid(5, 2),
                  m_szFromDate.Left(4));
    xls.SetCellText(0, 0, tmpStr, FMT_TEXT | FMT_CENTER | FMT_WRAPING, true,
                    10);

	CellFormat hf(&xls);
	CellFormat tf(&xls);
	CellFormat hfb(&xls);
	hf.SetCellStyle(FMT_INTEGER|FMT_BORDER);
	tf.SetCellStyle(FMT_TEXT|FMT_BORDER);


	szSQL=GetStringQuery();
	rs.ExecSQL(szSQL);
	nRow = 6;
	nCol = 0;
	int nTotal[52];
    for (int i = 0; i < 52; i++) {
		nTotal[i]=0;
	}
	CString szDept;
	int nKhoiA=0, nKhoiB=0;
	int nDoiTuongA=0, nDeptCategory = 0;

	while(!rs.IsEOF()){
		rs.GetValue(_T("dept_alias"), szDept);
        /*
        if (szDept == _T("PTTYC")) {
			xls.SetCellText(nCol+0, nRow, szDept, &tf);
			

			rs.GetValue(_T("sd_avaiable_bed"), tmpStr);
			//nTotal[1] += ToInt(tmpStr);

			xls.SetCellText(nCol+1, nRow, tmpStr, &tf);
			rs.GetValue(_T("sd_planned_bed"), tmpStr);
			//nTotal[2] += ToInt(tmpStr);
			xls.SetCellText(nCol+2, nRow, tmpStr, &tf);

			rs.GetValue(_T("oldpatient"), tmpStr);
			//nTotal[3] += ToInt(tmpStr);
			xls.SetCellText(nCol+3, nRow, tmpStr, &hf);

			rs.GetValue(_T("nTangC11"), tmpStr);
			//nTotal[4] += ToInt(tmpStr);
			xls.SetCellText(nCol+4, nRow, tmpStr, &hf);
			rs.GetValue(_T("nTangAB"), tmpStr);
			//nTotal[5] += ToInt(tmpStr);
			xls.SetCellText(nCol+5, nRow, tmpStr, &hf);
			rs.GetValue(_T("nTangTYC"), tmpStr);
			//nTotal[6] += ToInt(tmpStr);
			xls.SetCellText(nCol+6, nRow, tmpStr, &hf);
			rs.GetValue(_T("nTangC12"), tmpStr);
			//nTotal[7] += ToInt(tmpStr);
			xls.SetCellText(nCol+7, nRow, tmpStr, &hf);
			rs.GetValue(_T("nTangC13"), tmpStr);
			//nTotal[8] += ToInt(tmpStr);
			xls.SetCellText(nCol+8, nRow, tmpStr, &hf);
			rs.GetValue(_T("nCkden"), tmpStr);
			//nTotal[9] += ToInt(tmpStr);
			xls.SetCellText(nCol+9, nRow, tmpStr, &hf);
			rs.GetValue(_T("nRavien"), tmpStr);
			//nTotal[10] += ToInt(tmpStr);
			xls.SetCellText(nCol+10, nRow, tmpStr, &hf);
			rs.GetValue(_T("nXinve"), tmpStr);
			//nTotal[11] += ToInt(tmpStr);
			xls.SetCellText(nCol+11, nRow, tmpStr, &hf);
			rs.GetValue(_T("nTuVong"), tmpStr);
			//nTotal[12] += ToInt(tmpStr);
			xls.SetCellText(nCol+12, nRow, tmpStr, &hf);
			rs.GetValue(_T("nChuyenkhoa"), tmpStr);
			//nTotal[13] += ToInt(tmpStr);
			xls.SetCellText(nCol+13, nRow, tmpStr, &hf);
			rs.GetValue(_T("nChuyenVien"), tmpStr);
			//nTotal[14] += ToInt(tmpStr);
			xls.SetCellText(nCol+14, nRow, tmpStr, &hf);
			rs.GetValue(_T("nQs17h"), tmpStr);
			//nTotal[15] += ToInt(tmpStr);
			xls.SetCellText(nCol+15, nRow, tmpStr, &hf);
			rs.GetValue(_T("nTangC1117h"), tmpStr);
			//nTotal[16] += ToInt(tmpStr);
			xls.SetCellText(nCol+16, nRow, tmpStr, &hf);
			rs.GetValue(_T("nTangAB17h"), tmpStr);
			//nTotal[17] += ToInt(tmpStr);
			xls.SetCellText(nCol+17, nRow, tmpStr, &hf);
			rs.GetValue(_T("nTangTYC17h"), tmpStr);
			//nTotal[18] += ToInt(tmpStr);
			xls.SetCellText(nCol+18, nRow, tmpStr, &hf);
			rs.GetValue(_T("nTangC1217h"), tmpStr);
			//nTotal[19] += ToInt(tmpStr);
			xls.SetCellText(nCol+19, nRow, tmpStr, &hf);
			rs.GetValue(_T("nTangC1317h"), tmpStr);
			//nTotal[20] += ToInt(tmpStr);
			xls.SetCellText(nCol+20, nRow, tmpStr, &hf);
			rs.GetValue(_T("nCkden17h"), tmpStr);
			//nTotal[21] += ToInt(tmpStr);
			xls.SetCellText(nCol+21, nRow, tmpStr, &hf);
			rs.GetValue(_T("nRavien17h"), tmpStr);
			//nTotal[22] += ToInt(tmpStr);
			xls.SetCellText(nCol+22, nRow, tmpStr, &hf);
			rs.GetValue(_T("nXinve17h"), tmpStr);
			//nTotal[23] += ToInt(tmpStr);
			xls.SetCellText(nCol+23, nRow, tmpStr, &hf);
			rs.GetValue(_T("nTuVong17h"), tmpStr);
			//nTotal[24] += ToInt(tmpStr);
			xls.SetCellText(nCol+24, nRow, tmpStr, &hf);
			rs.GetValue(_T("nChuyenkhoa17h"), tmpStr);
			//nTotal[25] += ToInt(tmpStr);
			xls.SetCellText(nCol+25, nRow, tmpStr, &hf);
			rs.GetValue(_T("nChuyenVien17h"), tmpStr);
			//nTotal[26] += ToInt(tmpStr);
			xls.SetCellText(nCol+26, nRow, tmpStr, &hf);
			rs.GetValue(_T("bhqn1"), tmpStr);
			//nTotal[27] += ToInt(tmpStr);
			nDoiTuongA += ToInt(tmpStr);
			xls.SetCellText(nCol+27, nRow, tmpStr, &hf);
			rs.GetValue(_T("bhqn2"), tmpStr);
			//nTotal[28] += ToInt(tmpStr);
			nDoiTuongA += ToInt(tmpStr);
			xls.SetCellText(nCol+28, nRow, tmpStr, &hf);
			rs.GetValue(_T("bhqn3"), tmpStr);
			//nTotal[29] += ToInt(tmpStr);
			nDoiTuongA += ToInt(tmpStr);
			xls.SetCellText(nCol+29, nRow, tmpStr, &hf);
			rs.GetValue(_T("bhqd"), tmpStr);
			//nTotal[30] += ToInt(tmpStr);
			nDoiTuongA += ToInt(tmpStr);
			xls.SetCellText(nCol+30, nRow, tmpStr, &hf);
			rs.GetValue(_T("bhqh1"), tmpStr);
			//nTotal[31] += ToInt(tmpStr);
			nDoiTuongA += ToInt(tmpStr);
			xls.SetCellText(nCol+31, nRow, tmpStr, &hf);
			rs.GetValue(_T("bhqh2"), tmpStr);
			//nTotal[32] += ToInt(tmpStr);
			nDoiTuongA += ToInt(tmpStr);
			xls.SetCellText(nCol+32, nRow, tmpStr, &hf);
			rs.GetValue(_T("bhqh3"), tmpStr);
			//nTotal[33] += ToInt(tmpStr);
			nDoiTuongA += ToInt(tmpStr);
			xls.SetCellText(nCol+33, nRow, tmpStr, &hf);
			rs.GetValue(_T("bhtn"), tmpStr);
			//nTotal[34] += ToInt(tmpStr);
			nDoiTuongA += ToInt(tmpStr);
			xls.SetCellText(nCol+34, nRow, tmpStr, &hf);
			rs.GetValue(_T("bhte6t"), tmpStr);
			//nTotal[35] += ToInt(tmpStr);
			xls.SetCellText(nCol+35, nRow, tmpStr, &hf);
			rs.GetValue(_T("bhkhac"),tmpStr);
			//nTotal[36] += ToInt(tmpStr);

			xls.SetCellText(nCol+36, nRow, tmpStr, &hf);
			rs.GetValue(_T("bhnothe"),tmpStr);
			//nTotal[37] += ToInt(tmpStr);
			xls.SetCellText(nCol+37, nRow, tmpStr, &hf);


			rs.GetValue(_T("ban"), tmpStr);
			//nTotal[38] += ToInt(tmpStr);
			nDoiTuongA += ToInt(tmpStr);
			xls.SetCellText(nCol+38, nRow, tmpStr, &hf);
			rs.GetValue(_T("dv"),tmpStr);
			//nTotal[39] += ToInt(tmpStr);
			xls.SetCellText(nCol+39, nRow, tmpStr, &hf);
			rs.GetValue(_T("nQSck"), tmpStr);
			//nTotal[40] += ToInt(tmpStr);

			
			//if(szDept.Left(1) == _T("A") && szDept != _T("A2-B")  )
			//	nKhoiA += ToInt(tmpStr);
			//else
			//	nKhoiB += ToInt(tmpStr);
			
            xls.SetCellText(nCol + 40, nRow, tmpStr, FMT_INTEGER | FMT_BORDER,
                            true);
			nRow++;
			rs.MoveNext();
			continue;
		}
        */
		xls.SetCellText(nCol+0, nRow, szDept, &tf);
		

		rs.GetValue(_T("sd_avaiable_bed"), tmpStr);
		nTotal[1] += ToInt(tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, &tf);

		rs.GetValue(_T("sd_planned_bed"), tmpStr);
		nTotal[2] += ToInt(tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, &tf);

		rs.GetValue(_T("oldpatient"), tmpStr);
		nTotal[3] += ToInt(tmpStr);
		xls.SetCellText(nCol+3, nRow, tmpStr, &hf);

		rs.GetValue(_T("nTangC11"), tmpStr);
		nTotal[4] += ToInt(tmpStr);
		xls.SetCellText(nCol+4, nRow, tmpStr, &hf);

		rs.GetValue(_T("nTangAB"), tmpStr);
		nTotal[5] += ToInt(tmpStr);
		xls.SetCellText(nCol+5, nRow, tmpStr, &hf);

		rs.GetValue(_T("nTangTYC"), tmpStr);
		nTotal[6] += ToInt(tmpStr);
		xls.SetCellText(nCol+6, nRow, tmpStr, &hf);

		rs.GetValue(_T("nTangC12"), tmpStr);
		nTotal[7] += ToInt(tmpStr);
		xls.SetCellText(nCol+7, nRow, tmpStr, &hf);

		rs.GetValue(_T("nTangC13"), tmpStr);
		nTotal[8] += ToInt(tmpStr);
		xls.SetCellText(nCol+8, nRow, tmpStr, &hf);

        rs.GetValue(_T("nTangKBA11"), tmpStr);
        nTotal[9] += ToInt(tmpStr);
        xls.SetCellText(nCol + 9, nRow, tmpStr, &hf);

        rs.GetValue(_T("nTangKBA16"), tmpStr);
        nTotal[10] += ToInt(tmpStr);
        xls.SetCellText(nCol + 10, nRow, tmpStr, &hf);

        rs.GetValue(_T("nTangKBA4"), tmpStr);
        nTotal[11] += ToInt(tmpStr);
        xls.SetCellText(nCol + 11, nRow, tmpStr, &hf);

        rs.GetValue(_T("nTangTTTM"), tmpStr);
        nTotal[12] += ToInt(tmpStr);
        xls.SetCellText(nCol + 12, nRow, tmpStr, &hf);

        rs.GetValue(_T("nTangTTTVDT"), tmpStr);
        nTotal[13] += ToInt(tmpStr);
        xls.SetCellText(nCol + 13, nRow, tmpStr, &hf);

		rs.GetValue(_T("nCkden"), tmpStr);
		nTotal[14] += ToInt(tmpStr);
		xls.SetCellText(nCol+14, nRow, tmpStr, &hf);

		rs.GetValue(_T("nRavien"), tmpStr);
		nTotal[15] += ToInt(tmpStr);
		xls.SetCellText(nCol+15, nRow, tmpStr, &hf);

		rs.GetValue(_T("nXinve"), tmpStr);
		nTotal[16] += ToInt(tmpStr);
		xls.SetCellText(nCol+16, nRow, tmpStr, &hf);

		rs.GetValue(_T("nTuVong"), tmpStr);
		nTotal[17] += ToInt(tmpStr);
		xls.SetCellText(nCol+17, nRow, tmpStr, &hf);

		rs.GetValue(_T("nChuyenkhoa"), tmpStr);
		nTotal[18] += ToInt(tmpStr);
		xls.SetCellText(nCol+18, nRow, tmpStr, &hf);

		rs.GetValue(_T("nChuyenVien"), tmpStr);
		nTotal[19] += ToInt(tmpStr);
		xls.SetCellText(nCol+19, nRow, tmpStr, &hf);

		rs.GetValue(_T("nQs17h"), tmpStr);
		nTotal[20] += ToInt(tmpStr);
		xls.SetCellText(nCol+20, nRow, tmpStr, &hf);

		rs.GetValue(_T("nTangC1117h"), tmpStr);
		nTotal[21] += ToInt(tmpStr);
		xls.SetCellText(nCol+21, nRow, tmpStr, &hf);

		rs.GetValue(_T("nTangAB17h"), tmpStr);
		nTotal[22] += ToInt(tmpStr);
		xls.SetCellText(nCol+22, nRow, tmpStr, &hf);

		rs.GetValue(_T("nTangTYC17h"), tmpStr);
		nTotal[23] += ToInt(tmpStr);
		xls.SetCellText(nCol+23, nRow, tmpStr, &hf);

		rs.GetValue(_T("nTangC1217h"), tmpStr);
		nTotal[24] += ToInt(tmpStr);
		xls.SetCellText(nCol+24, nRow, tmpStr, &hf);

		rs.GetValue(_T("nTangC1317h"), tmpStr);
		nTotal[25] += ToInt(tmpStr);
		xls.SetCellText(nCol+25, nRow, tmpStr, &hf);

        rs.GetValue(_T("nTangKBA1117h"), tmpStr);
        nTotal[26] += ToInt(tmpStr);
        xls.SetCellText(nCol + 26, nRow, tmpStr, &hf);

        rs.GetValue(_T("nTangKBA167h"), tmpStr);
        nTotal[27] += ToInt(tmpStr);
        xls.SetCellText(nCol + 27, nRow, tmpStr, &hf);

        rs.GetValue(_T("nTangKBA417h"), tmpStr);
        nTotal[28] += ToInt(tmpStr);
        xls.SetCellText(nCol + 28, nRow, tmpStr, &hf);

        rs.GetValue(_T("nTangTTTM17h"), tmpStr);
        nTotal[29] += ToInt(tmpStr);
        xls.SetCellText(nCol + 29, nRow, tmpStr, &hf);

        rs.GetValue(_T("nTangTTTVDT17h"), tmpStr);
        nTotal[30] += ToInt(tmpStr);
        xls.SetCellText(nCol + 30, nRow, tmpStr, &hf);

		rs.GetValue(_T("nCkden17h"), tmpStr);
		nTotal[31] += ToInt(tmpStr);
		xls.SetCellText(nCol+31, nRow, tmpStr, &hf);

		rs.GetValue(_T("nRavien17h"), tmpStr);
		nTotal[32] += ToInt(tmpStr);
		xls.SetCellText(nCol+32, nRow, tmpStr, &hf);

		rs.GetValue(_T("nXinve17h"), tmpStr);
		nTotal[33] += ToInt(tmpStr);
		xls.SetCellText(nCol+33, nRow, tmpStr, &hf);

		rs.GetValue(_T("nTuVong17h"), tmpStr);
		nTotal[34] += ToInt(tmpStr);
		xls.SetCellText(nCol+34, nRow, tmpStr, &hf);

		rs.GetValue(_T("nChuyenkhoa17h"), tmpStr);
		nTotal[35] += ToInt(tmpStr);
		xls.SetCellText(nCol+35, nRow, tmpStr, &hf);

		rs.GetValue(_T("nChuyenVien17h"), tmpStr);
		nTotal[36] += ToInt(tmpStr);
		xls.SetCellText(nCol+36, nRow, tmpStr, &hf);

		rs.GetValue(_T("bhqn1"), tmpStr);
		nTotal[37] += ToInt(tmpStr);
		nDoiTuongA += ToInt(tmpStr);
		xls.SetCellText(nCol+37, nRow, tmpStr, &hf);

		rs.GetValue(_T("bhqn2"), tmpStr);
		nTotal[38] += ToInt(tmpStr);
		nDoiTuongA += ToInt(tmpStr);
		xls.SetCellText(nCol+38, nRow, tmpStr, &hf);

		rs.GetValue(_T("bhqn3"), tmpStr);
		nTotal[39] += ToInt(tmpStr);
		nDoiTuongA += ToInt(tmpStr);
		xls.SetCellText(nCol+39, nRow, tmpStr, &hf);

		rs.GetValue(_T("bhqd"), tmpStr);
		nTotal[40] += ToInt(tmpStr);
		nDoiTuongA += ToInt(tmpStr);
		xls.SetCellText(nCol+40, nRow, tmpStr, &hf);

		rs.GetValue(_T("bhqh1"), tmpStr);
		nTotal[41] += ToInt(tmpStr);
		nDoiTuongA += ToInt(tmpStr);
		xls.SetCellText(nCol+41, nRow, tmpStr, &hf);

		rs.GetValue(_T("bhqh2"), tmpStr);
		nTotal[42] += ToInt(tmpStr);
		nDoiTuongA += ToInt(tmpStr);
		xls.SetCellText(nCol+42, nRow, tmpStr, &hf);

		rs.GetValue(_T("bhqh3"), tmpStr);
		nTotal[43] += ToInt(tmpStr);
		nDoiTuongA += ToInt(tmpStr);
		xls.SetCellText(nCol+43, nRow, tmpStr, &hf);

		rs.GetValue(_T("bhtn"), tmpStr);
		nTotal[44] += ToInt(tmpStr);
		nDoiTuongA += ToInt(tmpStr);
		xls.SetCellText(nCol+44, nRow, tmpStr, &hf);

		rs.GetValue(_T("bhte6t"), tmpStr);
		nTotal[45] += ToInt(tmpStr);
		xls.SetCellText(nCol+45, nRow, tmpStr, &hf);

		rs.GetValue(_T("bhkhac"),tmpStr);
        nTotal[46] += ToInt(tmpStr);
		xls.SetCellText(nCol+46, nRow, tmpStr, &hf);

		rs.GetValue(_T("bhnothe"),tmpStr);
		nTotal[47] += ToInt(tmpStr);
		xls.SetCellText(nCol+47, nRow, tmpStr, &hf);


		rs.GetValue(_T("ban"), tmpStr);
		nTotal[48] += ToInt(tmpStr);
		nDoiTuongA += ToInt(tmpStr);
		xls.SetCellText(nCol+48, nRow, tmpStr, &hf);

		rs.GetValue(_T("dv"),tmpStr);
		nTotal[49] += ToInt(tmpStr);
		xls.SetCellText(nCol+49, nRow, tmpStr, &hf);

		rs.GetValue(_T("nQSck"), tmpStr);
		nTotal[50] += ToInt(tmpStr);
		rs.GetValue(_T("dept_category"), nDeptCategory);
		//if(szDept.Left(1) == _T("A") && szDept != _T("A2-B")  )
        if (nDeptCategory == 0) nKhoiA += ToInt(tmpStr);
        if (nDeptCategory == 1) nKhoiB += ToInt(tmpStr);
        xls.SetCellText(nCol + 50, nRow, tmpStr, FMT_INTEGER | FMT_BORDER,
                        true);

		nRow++;
		rs.MoveNext();
	}
    for (int i = 0; i < 51; i++) {
        tmpStr.Format(_T("%d"), nTotal[i]);
        xls.SetCellText(nCol + i, nRow, tmpStr, &hf);
        /* tmpStr.Format(_T("%d"), nTotal[i]);
		if(i==48)
			xls.SetCellText(i, nRow, tmpStr, FMT_INTEGER|FMT_BORDER,true);
		else
			xls.SetCellText(i, nRow, tmpStr, &hf);*/
	}
	xls.SetCellText(0, nRow, _T("Tổng:"), FMT_TEXT, true);
	double nTyle=0.00;
	nTyle= (double)(nDoiTuongA*100/double(nTotal[48]));
	nRow++;
    tmpStr.Format(
        _T("Cộng đối tượng A nằm điều trị tại viện: %d  Tỷ lệ %s:  %0.2f "),
        nDoiTuongA, _T("%"), nTyle);
	xls.SetCellText(0, nRow++, tmpStr,FMT_TEXT, false);
    tmpStr.Format(
        _T(" Tổng số bệnh nhân khối Nội : %d     Tổng số bệnh nhân khối ")
        _T("ngoại: %d    Tổng số bệnh nhân : %d "),
        nKhoiA, nKhoiB, nKhoiB + nKhoiA);
	xls.SetCellText(0, nRow++, tmpStr,FMT_TEXT, true);
	szSQL = GetStringQuery(TONG_HOP_KHOI);
	rs.ExecSQL(szSQL);

    tmpStr.Format(
        _T("Dự kiến bệnh nhân ra viện ngày : %s : Khối nội :  %s       Khối ")
        _T("ngoại:  %s    "),
        CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy), rs.GetValue(_T("nNoi")),
        rs.GetValue(_T("nNgoai")));
	xls.SetCellText(0, nRow, tmpStr,FMT_TEXT, false);

	nRow++;
	szSQL = GetStringQuery(TONG_HOP_MO_V2);
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);

	//Ticket 2131
    tmpStr.Format(_T("Tổng số bệnh nhân phẫu thuật: %s "),
                  rs.GetValue(_T("tong_so")));
	xls.SetCellText(0, nRow, tmpStr, FMT_TEXT, true);	
	nRow++;

    tmpStr.Format(_T(" Phẫu thuật thường: %s "),
                  rs.GetValue(_T("phauthuat_thuong")));
	xls.SetCellText(0, nRow, tmpStr, FMT_TEXT, true);
	nRow++;

    tmpStr.Format(
        _T(" Phẫu thuật TYC: %s (TYC từ C1.1C: %s; TYC trong viện: %s) "),
        rs.GetValue(_T("tyc_total")), rs.GetValue(_T("tyc_c11c")),
				rs.GetValue(_T("tyc_b5")));
	xls.SetCellText(0, nRow, tmpStr, FMT_TEXT, true);
	nRow++;

    tmpStr.Format(
        _T(" Phẫu thuật cấp cứu: %s(Cấp cứu trong giờ: %s; Cấp cứu ngoài giờ: ")
        _T("%s)"),
        rs.GetValue(_T("so_cap_cuu")), rs.GetValue(_T("so_ngay")),
				rs.GetValue(_T("so_dem")));
	xls.SetCellText(0, nRow, tmpStr, FMT_TEXT, true);
	nRow++;

    tmpStr.Format(
        _T(" Phẫu thuật ngoại trú: %s (Ngoại trú TYC: %s; Thường: %s) "),
        rs.GetValue(_T("ngt_toanvien")), rs.GetValue(_T("ngt_tyc")),
				rs.GetValue(_T("ngt_b5")));			

	xls.SetCellText(0, nRow, tmpStr, FMT_TEXT, true);	
	nRow++;
	
    tmpStr.Format(
        _T(" Phân loại: Loại đặc biệt: %s(Tỷ lệ%%: %s); ")
        _T(" Loại I: %s(Tỷ lệ %%:%s) ")
        _T(" Loại II: %s(Tỷ lệ%%: %s)")
        _T(" Loại III: %s(Tỷ lệ %%: %s)")
        _T(" Loại khác: %s(Tỷ lệ %%: %s)"),
        rs.GetValue(_T("loai_db")), rs.GetValue(_T("ty_le_db")),
				rs.GetValue(_T("loai_1")), rs.GetValue(_T("ty_le_l1")),
				rs.GetValue(_T("loai_2")), rs.GetValue(_T("ty_le_l2")),
				rs.GetValue(_T("loai_3")), rs.GetValue(_T("ty_le_l3")),
				rs.GetValue(_T("loai_khac")), rs.GetValue(_T("ty_le_lk")));
	xls.SetCellText(0, nRow, tmpStr, FMT_TEXT);

	nRow++;
	//xls.SetCellText(0, nRow, _T("Số Bệnh nhân phẫu thuật:  {PT cấp cứu:  (Ngày:  - Đêm: )};  ") \
					_T(" Tổng số máy thở:  {Đang sử dụng:  ; Còn lại sử dụng được: ; Hỏng: } ") ,FMT_TEXT, false);
	//nRow++;
    // xls.SetCellText(0, nRow, _T("Tổng số máu huyết tương còn trong viện: A:
    // /đơn vị,B:  /đơn vị, O:  /đơn vị, AB:  /đơn vị;   Tổng số cáng:   ; Đang
    // sử dụng:  ; Còn lại:  ") ,FMT_TEXT, false);
    szSQL.Format(
        _T(" SELECT *")
        _T("   FROM ldson_bcqs_mau")
        _T("  WHERE Trunc (ngaytruc) = To_date ('%s', 'yyyy/mm/dd')"),
        m_szFromDate.Left(10));
    rsx.ExecSQL(szSQL);
    tmpStr.Format(
        _T("Tổng số máu huyết tương còn trong viện: A: %s đơn vị,B: %s đơn ")
        _T("vị, ")
        _T(" O: %sđơn vị, AB: %s đơn vị;"),
        rsx.GetValue(_T("slnhoma")), rsx.GetValue(_T("slnhomb")),
        rsx.GetValue(_T("slnhomo")), rsx.GetValue(_T("slnhomab")));
    xls.SetCellText(0, nRow, tmpStr, FMT_TEXT, false);
    nRow++;
    szSQL.Format(
        _T(" SELECT *")
        _T("   FROM ldson_bcqs_maytho")
        _T("  WHERE Trunc (ngaytruc) = To_date ('%s', 'yyyy/mm/dd')"),
        m_szFromDate.Left(10));
    rsx.ExecSQL(szSQL);
    tmpStr.Format(
        _T("Tổng số máy thở: %s {Đang sử dụng: %s ; ")
        _T(" Còn lại sử dụng được: %s; Hỏng: %s} "),
        rsx.GetValue(_T("tsmaytho")), rsx.GetValue(_T("dangsudung")),
        rsx.GetValue(_T("consudung")), rsx.GetValue(_T("hong")));
	szTemp.Format(_T("Báo cáo tình hình máy TBYT trọng điểm hỏng: %s"), 
		rsx.GetValue(_T("mayhong")));
    szSQL.Format(
        _T(" SELECT *")
        _T("   FROM ldson_bcqs_cang")
        _T("  WHERE Trunc (ngaytruc) = To_date ('%s', 'yyyy/mm/dd')"),
        m_szFromDate.Left(10));
    rsx.ExecSQL(szSQL);
    tmpStr.AppendFormat(
        _T(" Tổng số cáng: %s ; Đang sử dụng: %s ; Còn lại: %s "),
        rsx.GetValue(_T("tscang")), rsx.GetValue(_T("dangsudung")),
        rsx.GetValue(_T("conlai")));
    xls.SetCellText(0, nRow, tmpStr, FMT_TEXT, false);
	nRow++;

	xls.MergeCell(0, nRow, 48, nRow);
	xls.SetCellText(0, nRow, szTemp, FMT_TEXT | FMT_WRAPING, false);
	xls.SetColumnWidth(m_nNoDataCol + 1, GetRangeWidth(xls, 0, 50));
	xls.SetCellText(m_nNoDataCol + 1, nRow, szTemp, FMT_TEXT | FMT_WRAPING);
	nRow++;
    xls.SetCellText(
        0, nRow, _T("Danh sách bệnh nhân cấp tướng đang nằm điều trị tại viện"),
        FMT_TEXT, false);
	szSQL = GetStringQuery(TONG_HOP_TUONG);
	rs.ExecSQL(szSQL);
	int nCount =1;
    while (!rs.IsEOF()) {
		nRow++;
		tmpStr.Format(_T("%d"), nCount++);
		xls.SetCellText(0, nRow, tmpStr ,FMT_TEXT, false);
		rs.GetValue(_T("hovaten"), tmpStr);
		xls.MergeCell(1,nRow,4,nRow);
		xls.SetCellText(1, nRow, tmpStr ,FMT_TEXT, false);

		xls.MergeCell(5,nRow,6,nRow);
		rs.GetValue(_T("age"), tmpStr);
		xls.SetCellText(5, nRow, tmpStr ,FMT_TEXT, false);
		
		xls.MergeCell(7,nRow,11,nRow);
		rs.GetValue(_T("capbac"), tmpStr);
		xls.SetCellText(7, nRow, tmpStr ,FMT_TEXT, false);
		

		xls.MergeCell(12,nRow,17,nRow);
		rs.GetValue(_T("hp_workplace"), tmpStr);
		xls.SetCellText(12, nRow, tmpStr ,FMT_TEXT, false);
		
		xls.MergeCell(18,nRow,29,nRow);
		rs.GetValue(_T("hd_diagnostic"), tmpStr);
		xls.SetCellText(18, nRow, tmpStr ,FMT_TEXT | FMT_WRAPING, false);
		SetRowHeight(&xls, m_nNoDataCol, nRow, tmpStr);

		xls.MergeCell(30,nRow,36,nRow);
		rs.GetValue(_T("doituong"), tmpStr);
		xls.SetCellText(30, nRow, tmpStr ,FMT_TEXT, false);

		xls.MergeCell(37,nRow,40,nRow);
		rs.GetValue(_T("htr_deptid"), tmpStr);
		xls.SetCellText(37, nRow, tmpStr ,FMT_TEXT, false);

		rs.MoveNext();
	}

	EndWaitCursor();
	xls.SetColHidden(m_nNoDataCol, true);
	xls.SetColHidden(m_nNoDataCol + 1, true);
	xls.Save(_T("Exports\\DANH SACH VAO RA CHUYEN VIEN2.xls"));


} 

void CHMSAdmitDischargeOnDept::SetRowHeight(CExcel *pXls, int nCol, int nRow,
                                            CString szData) {
	int nMergeCol = 12, nDefWidth = pXls->GetColWidth(nCol);
	nDefWidth = 3;
	pXls->SetColumnWidth(nCol, nMergeCol*nDefWidth);
	pXls->SetCellText(nCol, nRow, szData, FMT_TEXT | FMT_WRAPING);
}

double CHMSAdmitDischargeOnDept::GetRangeWidth(CExcel& xls, int nFromCol, int nToCol){
	double nWidth = 0;
	for (int i = nFromCol; i <= nToCol; i++)
	{
		_tprintf(_T("\ni:%d|w:%f"), i, xls.GetColWidth(i));
		nWidth += xls.GetColWidth(i);
	}
	return nWidth;
}

void CHMSAdmitDischargeOnDept::OnExportChitiet() {
CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
		CString szSQL, tmpStr, szTemp, szWhere;
		UpdateData(TRUE);
		BeginWaitCursor();
		szWhere.Empty();
		int nRow =0, nCol = 0;
		CExcel xls;
		xls.CreateSheet(1);
		xls.SetWorksheet(0);

		xls.SetColumnWidth(0, 8);
		xls.SetColumnWidth(1, 5);
		xls.SetColumnWidth(2, 5);
		xls.SetColumnWidth(3, 3);
		xls.SetColumnWidth(4, 4);
		xls.SetColumnWidth(5, 4);
		xls.SetColumnWidth(6, 4);
		xls.SetColumnWidth(7, 5);
		xls.SetColumnWidth(8, 5);
		xls.SetColumnWidth(9, 4);
		xls.SetColumnWidth(10, 3);
		xls.SetColumnWidth(11, 5);
		xls.SetColumnWidth(12, 3);
		xls.SetColumnWidth(13, 3);
		xls.SetColumnWidth(14, 3);
		xls.SetColumnWidth(15, 5);
		xls.SetColumnWidth(16, 6);
		xls.SetColumnWidth(17, 5);
		xls.SetColumnWidth(18, 4);
		xls.SetColumnWidth(19, 4);
		xls.SetColumnWidth(20, 3);
		xls.SetColumnWidth(21, 5);
		xls.SetColumnWidth(22, 4);
		xls.SetColumnWidth(23, 4);
		xls.SetColumnWidth(24, 3);
		xls.SetColumnWidth(25, 2);
		xls.SetColumnWidth(26, 4);
		xls.SetColumnWidth(27, 3);
		xls.SetColumnWidth(28, 4);
		xls.SetColumnWidth(29, 3);
		xls.SetColumnWidth(30, 3);
		xls.SetColumnWidth(31, 4);
		xls.SetColumnWidth(32, 4);
		xls.SetColumnWidth(33, 3);
		xls.SetColumnWidth(34, 4);
		xls.SetColumnWidth(35, 3);
		xls.SetColumnWidth(36, 5);
		xls.SetColumnWidth(37, 4);
		xls.SetColumnWidth(38, 3);
		xls.SetColumnWidth(39, 4);
		xls.SetColumnWidth(40, 10);
		xls.SetColumnWidth(41, 20);
		xls.SetColumnWidth(42, 15);
		xls.SetColumnWidth(43, 15);
		xls.SetColumnWidth(44, 4);
    xls.SetCellText(0, 0,
                    _T("BÁO CÁO QUÂN SỐ NGÀY       THÁNG          NĂM 2019"),
                    FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
    xls.SetCellText(
        0, 1,
        _T("       Trực chỉ hủy:               Trực cơ quan:                ")
        _T("KHTH:                  Trực ngoại:        Trực nội: "),
        FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
    xls.SetCellText(0, 2, _T("Khoa "), FMT_TEXT | FMT_CENTER | FMT_WRAPING,
                    true, 10);
    xls.SetCellText(1, 2, _T("Giường"), FMT_TEXT | FMT_CENTER | FMT_WRAPING,
                    true, 10);
    xls.SetCellText(1, 3, _T("Chỉ tiêu"), FMT_TEXT | FMT_CENTER | FMT_WRAPING,
                    true, 10);
    xls.SetCellText(2, 3, _T("Thực kê"), FMT_TEXT | FMT_CENTER | FMT_WRAPING,
                    true, 10);
    xls.SetCellText(3, 2, _T("BN cũ lúc 6h"),
                    FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
    xls.SetCellText(4, 2, _T("Tăng giảm QS từ 6h đến 17h"),
                    FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
    xls.SetCellText(4, 3, _T("Tăng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true,
                    10);
    xls.SetCellText(4, 4, _T("C1-1"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true,
                    10);
    xls.SetCellText(5, 4, _T("AB"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true,
                    10);
    xls.SetCellText(6, 4, _T("TYC"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true,
                    10);
    xls.SetCellText(7, 4, _T("C1-2"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true,
                    10);
    xls.SetCellText(8, 4, _T("C1-3"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true,
                    10);
    xls.SetCellText(9, 4, _T("CK đến"), FMT_TEXT | FMT_CENTER | FMT_WRAPING,
                    true, 10);
    xls.SetCellText(10, 3, _T("Giảm"), FMT_TEXT | FMT_CENTER | FMT_WRAPING,
                    true, 10);
    xls.SetCellText(10, 4, _T("Ra viện"), FMT_TEXT | FMT_CENTER | FMT_WRAPING,
                    true, 10);
    xls.SetCellText(11, 4, _T("xin về"), FMT_TEXT | FMT_CENTER | FMT_WRAPING,
                    true, 10);
    xls.SetCellText(12, 4, _T("tử vong"), FMT_TEXT | FMT_CENTER | FMT_WRAPING,
                    true, 10);
    xls.SetCellText(13, 4, _T("CK đi"), FMT_TEXT | FMT_CENTER | FMT_WRAPING,
                    true, 10);
    xls.SetCellText(14, 4, _T("C. viện"), FMT_TEXT | FMT_CENTER | FMT_WRAPING,
                    true, 10);
    xls.SetCellText(15, 2, _T("QS  lúc 17h"),
                    FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
    xls.SetCellText(16, 2, _T("Tăng giảm QS từ 17h đến 6h"),
                    FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
    xls.SetCellText(16, 3, _T("Tăng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING,
                    true, 10);
    xls.SetCellText(16, 4, _T("C1-1"), FMT_TEXT | FMT_CENTER | FMT_WRAPING,
                    true, 10);
    xls.SetCellText(17, 4, _T("AB"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true,
                    10);
    xls.SetCellText(18, 4, _T("TYC"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true,
                    10);
    xls.SetCellText(19, 4, _T("C1-2"), FMT_TEXT | FMT_CENTER | FMT_WRAPING,
                    true, 10);
    xls.SetCellText(20, 4, _T("C1-3"), FMT_TEXT | FMT_CENTER | FMT_WRAPING,
                    true, 10);
    xls.SetCellText(21, 4, _T("CK đến"), FMT_TEXT | FMT_CENTER | FMT_WRAPING,
                    true, 10);
    xls.SetCellText(22, 3, _T("Giảm"), FMT_TEXT | FMT_CENTER | FMT_WRAPING,
                    true, 10);
    xls.SetCellText(22, 4, _T("Ra viện"), FMT_TEXT | FMT_CENTER | FMT_WRAPING,
                    true, 10);
    xls.SetCellText(23, 4, _T("xin về"), FMT_TEXT | FMT_CENTER | FMT_WRAPING,
                    true, 10);
    xls.SetCellText(24, 4, _T("tử vong"), FMT_TEXT | FMT_CENTER | FMT_WRAPING,
                    true, 10);
    xls.SetCellText(25, 4, _T("CK đi"), FMT_TEXT | FMT_CENTER | FMT_WRAPING,
                    true, 10);
    xls.SetCellText(26, 4, _T("C. viện"), FMT_TEXT | FMT_CENTER | FMT_WRAPING,
                    true, 10);
    xls.SetCellText(27, 2, _T("Thành phần hiện có"),
                    FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
    xls.SetCellText(27, 3, _T("BHQN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING,
                    true, 10);
    xls.SetCellText(27, 4, _T("Tướng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING,
                    true, 10);
    xls.SetCellText(28, 4, _T("3//, 4//"), FMT_TEXT | FMT_CENTER | FMT_WRAPING,
                    true, 10);
    xls.SetCellText(29, 4, _T("<= 2//"), FMT_TEXT | FMT_CENTER | FMT_WRAPING,
                    true, 10);
    xls.SetCellText(30, 3, _T("BHQÐ"), FMT_TEXT | FMT_CENTER | FMT_WRAPING,
                    true, 10);
    xls.SetCellText(31, 3, _T("BHQH"), FMT_TEXT | FMT_CENTER | FMT_WRAPING,
                    true, 10);
    xls.SetCellText(31, 4, _T("Tướng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING,
                    true, 10);
    xls.SetCellText(32, 4, _T("3//, 4//"), FMT_TEXT | FMT_CENTER | FMT_WRAPING,
                    true, 10);
    xls.SetCellText(33, 4, _T("<= 2//"), FMT_TEXT | FMT_CENTER | FMT_WRAPING,
                    true, 10);
    xls.SetCellText(34, 3, _T("BHTN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING,
                    true, 10);
    xls.SetCellText(35, 3, _T("TE<6T"), FMT_TEXT | FMT_CENTER | FMT_WRAPING,
                    true, 10);
    xls.SetCellText(36, 3, _T("BH#"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true,
                    10);
    xls.SetCellText(37, 3, _T("BH nợ thẻ"), FMT_TEXT | FMT_CENTER | FMT_WRAPING,
                    true, 10);
    xls.SetCellText(38, 3, _T("Bạn"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true,
                    10);
    xls.SetCellText(39, 3, _T("DVYT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING,
                    true, 10);
    xls.SetCellText(40, 2, _T("Hiện có tại thời điểm 6h hôm sau"),
                    FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);

    xls.SetCellText(41, 2, _T("Số hồ sơ"), FMT_TEXT | FMT_CENTER | FMT_WRAPING,
                    true, 10);
    xls.SetCellText(42, 2, _T("Tên bệnh nhân"),
                    FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
    xls.SetCellText(43, 2, _T("Ngày vào viện"),
                    FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
    xls.SetCellText(44, 2, _T("Ngày ra viện"),
                    FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);

		xls.SetMerge(0, 0, 0, 39);
		xls.SetMerge(1, 1, 0, 39);
		xls.SetMerge(2, 4, 0, 0);
		xls.SetMerge(2, 2, 1, 2);
		xls.SetMerge(3, 4, 1, 1);
		xls.SetMerge(3, 4, 2, 2);
		xls.SetMerge(2, 4, 3, 3);
		xls.SetMerge(2, 2, 4, 14);
		xls.SetMerge(3, 3, 4, 9);
		xls.SetMerge(3, 3, 10, 14);
		xls.SetMerge(2, 4, 15, 15);
		xls.SetMerge(2, 2, 16, 26);
		xls.SetMerge(3, 3, 16, 21);
		xls.SetMerge(3, 3, 22, 26);
		xls.SetMerge(2, 2, 27, 38);
		xls.SetMerge(3, 3, 27, 29);
		xls.SetMerge(3, 4, 30, 30);
		xls.SetMerge(3, 4, 34, 34);
		xls.SetMerge(3, 4, 35, 35);
		xls.SetMerge(3, 4, 36, 36);
		xls.SetMerge(3, 4, 37, 37);
		xls.SetMerge(3, 4, 38, 38);
		xls.SetMerge(2, 4, 39, 39);


		szSQL=GetStringQuery1();
		rs.ExecSQL(szSQL);
		nRow = 7;
		nCol = 0;
		int nTotal[40];
    for (int i = 0; i < 41; i++) {
			nTotal[i]=0;
		}
		while(!rs.IsEOF()){
		rs.GetValue(_T("dept_alias"), tmpStr);
		xls.SetCellText(nCol+0, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T(""), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T(""), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("oldpatient"), tmpStr);
		nTotal[3] += ToInt(tmpStr);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_INTEGER);

		rs.GetValue(_T("nTangC11"), tmpStr);
		nTotal[4] += ToInt(tmpStr);
		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_INTEGER);
		rs.GetValue(_T("nTangAB"), tmpStr);
		nTotal[5] += ToInt(tmpStr);
		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_INTEGER);
		rs.GetValue(_T("nTangTYC"), tmpStr);
		nTotal[6] += ToInt(tmpStr);
		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_INTEGER);
		rs.GetValue(_T("nTangC12"), tmpStr);
		nTotal[7] += ToInt(tmpStr);
		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_INTEGER);
		rs.GetValue(_T("nTangC13"), tmpStr);
		nTotal[8] += ToInt(tmpStr);
		xls.SetCellText(nCol+8, nRow, tmpStr, FMT_INTEGER);
		rs.GetValue(_T("nCkden"), tmpStr);
		nTotal[9] += ToInt(tmpStr);
		xls.SetCellText(nCol+9, nRow, tmpStr, FMT_INTEGER);
		rs.GetValue(_T("nRavien"), tmpStr);
		nTotal[10] += ToInt(tmpStr);
		xls.SetCellText(nCol+10, nRow, tmpStr, FMT_INTEGER);
		rs.GetValue(_T("nXinve"), tmpStr);
		nTotal[11] += ToInt(tmpStr);
		xls.SetCellText(nCol+11, nRow, tmpStr, FMT_INTEGER);
		rs.GetValue(_T("nTuVong"), tmpStr);
		nTotal[12] += ToInt(tmpStr);
		xls.SetCellText(nCol+12, nRow, tmpStr, FMT_INTEGER);
		rs.GetValue(_T("nChuyenkhoa"), tmpStr);
		nTotal[13] += ToInt(tmpStr);
		xls.SetCellText(nCol+13, nRow, tmpStr, FMT_INTEGER);
		rs.GetValue(_T("nChuyenVien"), tmpStr);
		nTotal[14] += ToInt(tmpStr);
		xls.SetCellText(nCol+14, nRow, tmpStr, FMT_INTEGER);
		rs.GetValue(_T("nQs17h"), tmpStr);
		nTotal[15] += ToInt(tmpStr);
		xls.SetCellText(nCol+15, nRow, tmpStr, FMT_INTEGER);
		rs.GetValue(_T("nTangC1117h"), tmpStr);
		nTotal[16] += ToInt(tmpStr);
		xls.SetCellText(nCol+16, nRow, tmpStr, FMT_INTEGER);
		rs.GetValue(_T("nTangAB17h"), tmpStr);
		nTotal[17] += ToInt(tmpStr);
		xls.SetCellText(nCol+17, nRow, tmpStr, FMT_INTEGER);
		rs.GetValue(_T("nTangTYC17h"), tmpStr);
		nTotal[18] += ToInt(tmpStr);
		xls.SetCellText(nCol+18, nRow, tmpStr, FMT_INTEGER);
		rs.GetValue(_T("nTangC1217h"), tmpStr);
		nTotal[19] += ToInt(tmpStr);
		xls.SetCellText(nCol+19, nRow, tmpStr, FMT_INTEGER);
		rs.GetValue(_T("nTangC1317h"), tmpStr);
		nTotal[20] += ToInt(tmpStr);
		xls.SetCellText(nCol+20, nRow, tmpStr, FMT_INTEGER);
		rs.GetValue(_T("nCkden17h"), tmpStr);
		nTotal[21] += ToInt(tmpStr);
		xls.SetCellText(nCol+21, nRow, tmpStr, FMT_INTEGER);
		rs.GetValue(_T("nRavien17h"), tmpStr);
		nTotal[22] += ToInt(tmpStr);
		xls.SetCellText(nCol+22, nRow, tmpStr, FMT_INTEGER);
		rs.GetValue(_T("nXinve17h"), tmpStr);
		nTotal[23] += ToInt(tmpStr);
		xls.SetCellText(nCol+23, nRow, tmpStr, FMT_INTEGER);
		rs.GetValue(_T("nTuVong17h"), tmpStr);
		nTotal[24] += ToInt(tmpStr);
		xls.SetCellText(nCol+24, nRow, tmpStr, FMT_INTEGER);
		rs.GetValue(_T("nChuyenkhoa17h"), tmpStr);
		nTotal[25] += ToInt(tmpStr);
		xls.SetCellText(nCol+25, nRow, tmpStr, FMT_INTEGER);
		rs.GetValue(_T("nChuyenVien17h"), tmpStr);
		nTotal[26] += ToInt(tmpStr);
		xls.SetCellText(nCol+26, nRow, tmpStr, FMT_INTEGER);
		rs.GetValue(_T("bhqn1"), tmpStr);
		nTotal[27] += ToInt(tmpStr);
		xls.SetCellText(nCol+27, nRow, tmpStr, FMT_INTEGER);
		rs.GetValue(_T("bhqn2"), tmpStr);
		nTotal[28] += ToInt(tmpStr);
		xls.SetCellText(nCol+28, nRow, tmpStr, FMT_INTEGER);
		rs.GetValue(_T("bhqn3"), tmpStr);
		nTotal[29] += ToInt(tmpStr);
		xls.SetCellText(nCol+29, nRow, tmpStr, FMT_INTEGER);
		rs.GetValue(_T("bhqd"), tmpStr);
		nTotal[30] += ToInt(tmpStr);
		xls.SetCellText(nCol+30, nRow, tmpStr, FMT_INTEGER);
		rs.GetValue(_T("bhqh1"), tmpStr);
		nTotal[31] += ToInt(tmpStr);
		xls.SetCellText(nCol+31, nRow, tmpStr, FMT_INTEGER);
		rs.GetValue(_T("bhqh2"), tmpStr);
		nTotal[32] += ToInt(tmpStr);
		xls.SetCellText(nCol+32, nRow, tmpStr, FMT_INTEGER);
		rs.GetValue(_T("bhqh3"), tmpStr);
		nTotal[33] += ToInt(tmpStr);
		xls.SetCellText(nCol+33, nRow, tmpStr, FMT_INTEGER);
		rs.GetValue(_T("bhtn"), tmpStr);
		nTotal[34] += ToInt(tmpStr);
		xls.SetCellText(nCol+34, nRow, tmpStr, FMT_INTEGER);
		rs.GetValue(_T("bhte6t"), tmpStr);
		nTotal[35] += ToInt(tmpStr);
		xls.SetCellText(nCol+35, nRow, tmpStr, FMT_INTEGER);
		rs.GetValue(_T("bhkhac"),tmpStr);
		nTotal[36] += ToInt(tmpStr);
		xls.SetCellText(nCol+36, nRow, tmpStr, FMT_INTEGER);

		rs.GetValue(_T("bhnothe"),tmpStr);
		nTotal[37] += ToInt(tmpStr);
		xls.SetCellText(nCol+37, nRow, tmpStr, FMT_INTEGER);


		rs.GetValue(_T("ban"), tmpStr);
		nTotal[38] += ToInt(tmpStr);
		xls.SetCellText(nCol+38, nRow, tmpStr, FMT_INTEGER);
		rs.GetValue(_T("dv"),tmpStr);
		nTotal[39] += ToInt(tmpStr);
		xls.SetCellText(nCol+39, nRow, tmpStr, FMT_INTEGER);
		rs.GetValue(_T("nQSck"), tmpStr);
		nTotal[40] += ToInt(tmpStr);
		xls.SetCellText(nCol+40, nRow, tmpStr, FMT_INTEGER);

		rs.GetValue(_T("docno"), tmpStr);
		xls.SetCellText(nCol+41, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("pname"), tmpStr);
		xls.SetCellText(nCol+42, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("admitdate"), tmpStr);
        xls.SetCellText(
            nCol + 43, nRow,
            CDateTime::Convert(tmpStr, yyyymmdd | hhmmss, ddmmyyyy | hhmmss),
            FMT_TEXT);

		rs.GetValue(_T("dischargedate"), tmpStr);
        xls.SetCellText(
            nCol + 44, nRow,
            CDateTime::Convert(tmpStr, yyyymmdd | hhmmss, ddmmyyyy | hhmmss),
            FMT_TEXT);
		nRow++;
		rs.MoveNext();
	}
    for (int i = 0; i < 41; i++) {
		tmpStr.Format(_T("%d"),nTotal[i]);
		xls.SetCellText(i, nRow, tmpStr, FMT_INTEGER,true);
	}
	EndWaitCursor();
	xls.Save(_T("Exports\\DANH SACH VAO RA CHUYEN VIEN CHi tiet.xls"));

	
} 
int CHMSAdmitDischargeOnDept::OnAddHMSAdmitDischargeOnDept(){
    if (GetMode() == VM_ADD || GetMode() == VM_EDIT) return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSAdmitDischargeOnDept::OnEditHMSAdmitDischargeOnDept(){
    if (GetMode() != VM_VIEW) return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSAdmitDischargeOnDept::OnDeleteHMSAdmitDischargeOnDept(){
    if (GetMode() != VM_VIEW) return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
 	szSQL.Format(_T("DELETE FROM  WHERE  AND") );
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
 		SetMode(VM_NONE);
 		OnCancelHMSAdmitDischargeOnDept();
 	}
	return 0;
}
int CHMSAdmitDischargeOnDept::OnSaveHMSAdmitDischargeOnDept(){
    if (GetMode() != VM_ADD && GetMode() != VM_EDIT) return -1;
    if (!IsValidateData()) return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
 		//szSQL = m_tblTbl.GetInsertSQL();
    } else if (GetMode() == VM_EDIT) {
 		CString szWhere;
 		szWhere.Format(_T(" WHERE"));
 		//szSQL = m_tblTbl.GetUpdateSQL(_T("createdby,createddate"));
 		szSQL += szWhere;
 	}
 _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
    if (ret > 0) {
 		//OnHMSAdmitDischargeOnDeptListLoadData();
 		SetMode(VM_VIEW);
    } else {
 	}
 	return ret;
 	return 0;
}
int CHMSAdmitDischargeOnDept::OnCancelHMSAdmitDischargeOnDept(){
    if (GetMode() == VM_EDIT) {
 		SetMode(VM_VIEW);
    } else {
 		SetMode(VM_NONE);
 	} 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	return 0;
} 
int CHMSAdmitDischargeOnDept::OnHMSAdmitDischargeOnDeptListLoadData(){
	return 0;
}
CString CHMSAdmitDischargeOnDept::GetStringQuery(int nQuery) {
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
	UpdateData(true);
	CDate odate;
	odate.ParseDate(m_szFromDate);
	odate += 1;
	CString szToDate = odate.GetDate();
	m_szToDate= szToDate;

	CString szSQL,szWhere, szFeeType;
	szWhere.Empty();
	szFeeType.Format(_T("%s,%s,%s,%s"), PTLI, PTLII, PTLIII, PTLDB);
	if(m_bOutpatient)
		szWhere.Format(_T(" and outpatient ='Y' "));
	else
		szWhere.Format(_T(" and nvl(outpatient,'N') <>'Y' "));

	if(!m_szDeptKey.IsEmpty())
		szWhere.AppendFormat(_T(" and dept='%s'"), m_szDeptKey);
    szSQL.Format(
        _T(" SELECT sd_id as dept, sd_id_alias as dept_alias,")
        _T("   sdi_index as sd_index1,sd_planned_bed, sd_avaiable_bed,")
        _T("	sd_category as dept_category,")
        _T("   SUM(oldpatient)     AS oldpatient ,")
        _T("   SUM( nTang6)        AS nTang6 ,")
        _T("   SUM(nTangC11)       AS nTangC11,")
        _T("   SUM(nTangC12)       AS nTangC12,")
        _T("   SUM(nTangC13)       AS nTangC13,")
        _T("   SUM(nTangAB)        AS nTangAB,")
        _T("   SUM(nTangTYC)       AS nTangTYC,")
        _T("   SUM(nTangKBA11)    AS nTangKBA11,")
        _T("   SUM(nTangKBA16)    AS nTangKBA16,")
        _T("   SUM(nTangKBA4)     AS nTangKBA4,")
        _T("   SUM(nTangTTTM)     AS nTangTTTM,")
        _T("   SUM(nTangTTTVDT)   AS nTangTTTVDT,")
        _T("   SUM(nCkden)         AS nCkden,")
        _T("   SUM(nRavien)        AS nRavien,")
        _T("   SUM(nXinve)         AS nXinve,")
        _T("   SUM(nTuVong)        AS nTuVong,")
        _T("   SUM(nChuyenkhoa)    AS nChuyenkhoa,")
        _T("   SUM(nChuyenVien)    AS nChuyenVien,")
        _T("   SUM(nQs17h)         AS nQs17h,")
        _T("   SUM(nTangC1117h)    AS nTangC1117h,")
        _T("   SUM(nTangC1217h)    AS nTangC1217h,")
        _T("   SUM(nTangC1317h)    AS nTangC1317h,")
        _T("   SUM(nTangAB17h)     AS nTangAB17h,")
        _T("   SUM(nTangTYC17h)    AS nTangTYC17h,")
        _T("   SUM(nTangKBA1117h)    AS nTangKBA1117h,")
        _T("   SUM(nTangKBA1617h)    AS nTangKBA1617h,")
        _T("   SUM(nTangKBA417h)     AS nTangKBA417h,")
        _T("   SUM(nTangTTTM17h)     AS nTangTTTM17h,")
        _T("   SUM(nTangTTTVDT17h)   AS nTangTTTVDT17h,")
        _T("   SUM(nckden17h)      AS nckden17h,")
        _T("   SUM(nRavien17h)     AS nRavien17h,")
        _T("   SUM(nXinve17h)      AS nXinve17h,")
        _T("   SUM(nTuVong17h)     AS nTuVong17h,")
        _T("   SUM(nChuyenkhoa17h) AS nChuyenkhoa17h,")
        _T("   SUM(nChuyenVien17h) AS nChuyenVien17h,")
        _T("   SUM(bhqn1)          AS bhqn1,")
        _T("   SUM(bhqn2)          AS bhqn2,")
        _T("   SUM(bhqn3)          AS bhqn3,")
        _T("   SUM(bhqd)           AS bhqd,")
        _T("   SUM(bhqh1)          AS bhqh1,")
        _T("   SUM(bhqh2)          AS bhqh2,")
        _T("   SUM(bhqh3)          AS bhqh3,")
        _T("   SUM(bhtn)           AS bhtn,")
        _T("   SUM(bhte6t)         AS bhte6t,")
        _T("   SUM(bhkhac)         AS bhkhac,")
        _T("   SUM(ban)            AS ban,")
        _T("   SUM(dv)             AS dv,")
        _T("   SUM(nQSck)          AS nQSck, ")
        _T("   SUM(bhnothe)			AS bhnothe ")
        _T(" FROM")
        _T("   (SELECT htr_deptid AS dept,")
        _T("     htr_outpatient   AS outpatient,")
        _T("     1                AS oldpatient, ")
        _T("     0 AS nTang6,0  AS nTangC11, 0 AS nTangC12, 0 AS nTangC13, 0 AS nTangAB,0 AS nTangTYC, 0 as nTangKBA11, 0 as nTangKBA16, 0 as nTangKBA4, 0 as nTangTTTM, 0 as nTangTTTVDT, 0 AS nCkden,")
        _T("     0 AS nRavien,0 AS nXinve,0 AS nTuVong,0  AS nChuyenkhoa,0 AS nChuyenVien,")
        _T("     0 AS nQs17h, 0 AS nTangC1117h, 0  AS nTangC1217h,0 AS nTangC1317h, 0 AS nTangAB17h, 0 AS nTangTYC17h, 0 as nTangKBA1117h, 0 as nTangKBA1617h, 0 as nTangKBA417h, 0 as nTangTTTM17h, 0 as nTangTTTVDT17h,0 AS nckden17h,")
        _T("     0  AS nRavien17h, 0   AS nXinve17h,0  AS nTuVong17h,0 AS nChuyenkhoa17h,0 AS nChuyenVien17h,")
        _T("     0 AS bhqn1,0 AS bhqn2,0 AS bhqn3, 0 AS bhqd,0 AS bhqh1,0 AS bhqh2,0 AS bhqh3,0 AS bhtn,0 AS bhte6t,0 AS bhkhac, 0 AS ban,0 AS dv, 0 AS nQSck, 0 as bhnothe")
        _T("   FROM VIMES.hms_treatment_record")
        _T("   LEFT JOIN hms_doc ON (hd_docno = htr_docno) ")
        _T("   WHERE htr_admitdate  <= TO_TIMESTAMP ('%s 06:29:59', 'YYYY/MM/DD HH24:MI:SS')")
        _T("   AND (htr_status       ='I'")
        _T("   OR (htr_status        ='T'")
        _T("   AND htr_dischargedate > TO_TIMESTAMP ('%s 06:29:59', 'YYYY/MM/DD HH24:MI:SS'))) AND (htr_deptid <>'B11' or (htr_deptid='B11' and hd_object <> 9 )) ")
        _T("   UNION ALL")
        _T("   SELECT htr_deptid AS dept,")
        _T("     htr_outpatient  AS outpatient,")
        _T("     0 ,")
        _T("     1 AS nTang6,")
        _T("     CASE WHEN hd_enddept='C1.1' and coalesce(he_roomid,0) <> 150 AND htr_idx=1 THEN 1 ELSE 0 END AS nTangC11,")
        _T("     CASE WHEN  hd_enddept='C1.2' AND htr_idx    =1 THEN 1 ELSE 0  END AS nTangC12, ")
        _T("     CASE WHEN ( hd_enddept='C1.3'  or ( he_deptid ='C1.1' and he_roomid = 150) ) AND htr_idx =1 THEN 1 ELSE 0 END AS nTangC13,")
        _T("     CASE WHEN hd_enddept='AB' AND htr_idx =1 THEN 1  ELSE 0 END AS nTangAB,")
        _T("     CASE  WHEN hd_enddept='TYC' AND htr_idx =1 THEN 1 ELSE 0 END AS nTangTYC,")
        _T("    CASE WHEN hd_enddept='KB_A11' AND htr_idx=1 THEN 1 ELSE 0 END AS nTangKBA11,")
        _T("    CASE WHEN hd_enddept='KB_A16' AND htr_idx=1 THEN 1 ELSE 0 END AS nTangKBA16,")
        _T("    CASE WHEN hd_enddept='KB_A4' AND htr_idx=1 THEN 1 ELSE 0 END AS nTangKBA4,")
        _T("    CASE WHEN hd_enddept='TTTM' AND htr_idx=1 THEN 1 ELSE 0 END AS nTangTTTM,")
        _T("    CASE WHEN hd_enddept='TTTVDT' AND htr_idx=1 THEN 1 ELSE 0 END AS nTangTTTVDT,")
        _T("    CASE  WHEN htr_idx >1 THEN 1 ELSE 0 END AS nCkden,")
    _T("     0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0")
        _T("   FROM VIMES.hms_treatment_record")
        _T("   LEFT JOIN hms_doc")
        _T("   ON (hd_docno= htr_docno)")
        _T("   LEFT JOIN hms_exam on (hd_docno = he_docno and hd_areceptidx = ")
        _T("he_receptidx) ")
        _T("   WHERE htr_admitdate BETWEEN TO_TIMESTAMP ('%s 06:30:00', ")
        _T("'YYYY/MM/DD HH24:MI:SS') AND TO_TIMESTAMP ('%s 16:59:59', ")
        _T("'YYYY/MM/DD HH24:MI:SS')")
        _T(" AND (htr_deptid <>'B11' or ( htr_deptid='B11' and hd_object <> 9 ")
        _T(")) AND nvl(htr_status, 'A') <> 'A' ")
        _T(" UNION ALL")
        _T("   SELECT htr_deptid AS dept,")
        _T("     htr_outpatient  AS outpatient,")
    _T("     0 ,")
    _T("     0,0,0,0,")
    _T("     0,0,0,0,0,0,0,0,")
        _T("     CASE")
        _T("       WHEN hcr_suggestion ='T'")
        _T("       AND hcr_result NOT IN ('7','5','6')")
        _T("       THEN 1")
        _T("       ELSE 0")
        _T("     END AS nRavien,")
        _T("     CASE")
        _T("       WHEN hcr_suggestion='T'")
        _T("       AND hcr_result     ='7'")
        _T("       THEN 1")
        _T("       ELSE 0")
        _T("     END AS nXinve,")
        _T("     CASE")
        _T("       WHEN hcr_suggestion='T'")
        _T("       AND hcr_result    IN ('5','6')")
        _T("       THEN 1")
        _T("       ELSE 0")
        _T("     END AS nTuVong,")
        _T("     CASE")
        _T("       WHEN htr_suggestion='M'")
        _T("       AND htr_tdeptid   IS NOT NULL")
        _T("       THEN 1")
        _T("       ELSE 0")
        _T("     END AS nChuyenkhoa,")
        _T("     CASE")
        _T("       WHEN hcr_suggestion='F'")
        _T("       THEN 1")
        _T("       ELSE 0")
        _T("     END AS nChuyenVien,")
        _T("     0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0")
        _T("   FROM VIMES.hms_treatment_record")
        _T("   LEFT JOIN VIMES.hms_clinical_record")
        _T("   ON (hcr_docno   = htr_docno  and htr_suggestion in ('T','F') )")
        _T("   LEFT JOIN hms_doc ON (hd_docno = htr_docno) ")
        _T("   WHERE htr_status='T'")
        _T("   AND htr_dischargedate BETWEEN TO_TIMESTAMP ('%s 06:30:00', ")
        _T("'YYYY/MM/DD HH24:MI:SS') AND TO_TIMESTAMP ('%s 16:59:59', ")
        _T("'YYYY/MM/DD HH24:MI:SS')")
        _T("   AND (htr_deptid <>'B11' or ( htr_deptid='B11' and hd_object <> ")
        _T("9 ))")
        _T("   UNION ALL")
        _T("   SELECT htr_deptid AS dept,")
        _T("     htr_outpatient  AS outpatient,")
        _T("     0,0,0,0,0,0,0,0,")
        _T("     0 ,")
        _T("     0,0 ,0,0,0,0,0,")
        _T("     0 ,")
        _T("     0,")
    _T("     1 AS nQs17h,")
    _T("     0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0")
        _T("   FROM VIMES.hms_treatment_record")
        _T("   LEFT JOIN hms_doc ON (hd_docno = htr_docno) ")
        _T("   WHERE htr_admitdate  <= TO_TIMESTAMP ('%s 16:59:59', ")
        _T("'YYYY/MM/DD HH24:MI:SS')")
        _T("   AND (htr_status       ='I'")
        _T("   OR (htr_status        ='T'")
        _T("   AND htr_dischargedate > TO_TIMESTAMP ('%s 16:59:59', ")
        _T("'YYYY/MM/DD HH24:MI:SS')))")
        _T(" AND (htr_deptid <>'B11' or ( htr_deptid='B11' and hd_object <> 9 ")
        _T("))")
        _T("   UNION ALL")
        _T("   SELECT htr_deptid AS dept,")
        _T("     htr_outpatient  AS outpatient,")
        _T("     0 ,")
        _T("     0,")
        _T("     0 ,")
        _T("     0 ,")
        _T("     0 ,")
        _T("     0 ,")
        _T("     0 ,")
        _T("     0 ,")
        _T("     0,0,0,0,0,0,0,0,0,0,0,")
        _T("     CASE")
        _T("       WHEN hd_enddept='C1.1' and coalesce(he_roomid,0) <> 150 ")
        _T("       AND htr_idx    =1")
        _T("       THEN 1")
        _T("       ELSE 0")
        _T("     END AS nTangC1117h,")
        _T("     CASE")
        _T("       WHEN hd_enddept='C1.2'")
        _T("       AND htr_idx    =1")
        _T("       THEN 1")
        _T("       ELSE 0")
        _T("     END AS nTangC1217h,")
        _T("     CASE")
        _T("       WHEN ( hd_enddept='C1.3'  or ( he_deptid ='C1.1' and ")
        _T("he_roomid = 150) )  ")
        _T("       AND htr_idx    =1")
        _T("       THEN 1")
        _T("       ELSE 0")
        _T("     END AS nTangC1317h,")
        _T("     CASE")
        _T("       WHEN hd_enddept='AB'")
        _T("       AND htr_idx    =1")
        _T("       THEN 1")
        _T("       ELSE 0")
        _T("     END AS nTangAB17h,")
        _T("     CASE")
        _T("       WHEN hd_enddept='TYC'")
        _T("       AND htr_idx    =1")
        _T("       THEN 1")
        _T("       ELSE 0")
        _T("     END AS nTangTYC17h,")
        _T("     CASE")
        _T("       WHEN hd_enddept='KB_A11'")
        _T("       AND htr_idx    =1")
        _T("       THEN 1")
        _T("       ELSE 0")
        _T("     END AS nTangKBA1117h,")
        _T("     CASE")
        _T("       WHEN hd_enddept='KB_A16'")
        _T("       AND htr_idx    =1")
        _T("       THEN 1")
        _T("       ELSE 0")
        _T("     END AS nTangKBA1617h,")
        _T("     CASE")
        _T("       WHEN hd_enddept='KB_A4'")
        _T("       AND htr_idx    =1")
        _T("       THEN 1")
        _T("       ELSE 0")
        _T("     END AS nTangKBA417h,")
        _T("     CASE")
        _T("       WHEN hd_enddept='TTTM'")
        _T("       AND htr_idx    =1")
        _T("       THEN 1")
        _T("       ELSE 0")
        _T("     END AS nTangTTTM17h,")
        _T("     CASE")
        _T("       WHEN hd_enddept='TTTVDT'")
        _T("       AND htr_idx    =1")
        _T("       THEN 1")
        _T("       ELSE 0")
        _T("     END AS nTangTTTVDT17h,")
        _T("     CASE")
        _T("       WHEN htr_idx >1")
        _T("       THEN 1")
        _T("       ELSE 0")
        _T("     END AS nckden17h,")
        _T("     0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0")
        _T("   FROM VIMES.hms_treatment_record")
        _T("   LEFT JOIN hms_doc")
        _T("   ON (hd_docno= htr_docno)")
        _T("   LEFT JOIN hms_exam on (hd_docno = he_docno and hd_areceptidx = ")
        _T("he_receptidx) ")
        _T("   WHERE htr_admitdate BETWEEN TO_TIMESTAMP ('%s 17:00:00', ")
        _T("'YYYY/MM/DD HH24:MI:SS') AND TO_TIMESTAMP ('%s 06:29:59', ")
        _T("'YYYY/MM/DD HH24:MI:SS')")
        _T(" AND (htr_deptid <>'B11' or ( htr_deptid='B11' and hd_object <> 9 ")
        _T(")) AND NVL(htr_status, 'A') <> 'A'")
        _T("  UNION ALL")
        _T("   SELECT htr_deptid AS dept,")
        _T("     htr_outpatient  AS outpatient,")
        _T("     0 ,")
        _T("     0,0,0,0,")
        _T("     0,0,0,0,0,")
        _T("     0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,")
        _T("     CASE")
        _T("       WHEN hcr_suggestion ='T'")
        _T("       AND hcr_result NOT IN ('7','5','6')")
        _T("       THEN 1")
        _T("       ELSE 0")
        _T("     END AS nRavien17h,")
        _T("     CASE")
        _T("       WHEN hcr_suggestion='T'")
        _T("       AND hcr_result     ='7'")
        _T("       THEN 1")
        _T("       ELSE 0")
        _T("     END AS nXinve17h,")
        _T("     CASE")
        _T("       WHEN hcr_suggestion='T'")
        _T("       AND hcr_result    IN ('5','6')")
        _T("       THEN 1")
        _T("       ELSE 0")
        _T("     END AS nTuVong17h,")
        _T("     CASE")
        _T("       WHEN htr_suggestion='M'")
        _T("       AND htr_tdeptid   IS NOT NULL")
        _T("       THEN 1")
        _T("       ELSE 0")
        _T("     END AS nChuyenkhoa17h,")
        _T("     CASE")
        _T("       WHEN hcr_suggestion='F'")
        _T("       THEN 1")
        _T("       ELSE 0")
        _T("     END AS nChuyenVien17h,")
        _T("     0,0,0,0,0,0,0,0,0,0,0,0,0,0")
        _T("   FROM VIMES.hms_treatment_record")
        _T("   LEFT JOIN VIMES.hms_clinical_record")
        _T("   ON (hcr_docno   = htr_docno and htr_suggestion in ('T','F') )")
        _T("   LEFT JOIN hms_doc ON (hd_docno = htr_docno) ")
        _T("   WHERE htr_status='T'")
        _T("   AND htr_dischargedate BETWEEN TO_TIMESTAMP ('%s 17:00:00', ")
        _T("'YYYY/MM/DD HH24:MI:SS') AND TO_TIMESTAMP ('%s 06:29:59', ")
        _T("'YYYY/MM/DD HH24:MI:SS')")
        _T(" AND (htr_deptid <>'B11' or ( htr_deptid='B11' and hd_object <> 9 ")
        _T(")) ")
        _T("   UNION ALL")
        _T("   SELECT htr_deptid AS dept,")
        _T("     htr_outpatient  AS outpatient,")
        _T("     0,0,0,0,0,0,0,0,")
        _T("     0 ,")
        _T("     0,0 ,0,0,0,0,0,")
        _T("     0 ,")
        _T("     0,")
    _T("     0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,")
        _T("     CASE")
        _T("       WHEN hd_object                   =11")
        _T("       AND hms_get_rank(hd_rank) IN (15,16,17,18,58)")
        _T("       THEN 1")
        _T("       ELSE 0")
        _T("     END AS bhqn1,")
        _T("     CASE")
        _T("       WHEN hd_object                   =11")
        _T("       AND hms_get_rank(hd_rank) IN (13,14,56,57,66)")
        _T("       THEN 1")
        _T("       ELSE 0")
        _T("     END AS bhqn2,")
        _T("     CASE")
        _T("       WHEN hd_object                  =11")
        _T("       AND ( hms_get_rank(hd_rank) <13   or hms_get_rank(hd_rank) ")
        _T(" between 50 and 55  ")
        _T("			or hms_get_rank(hd_rank)  between 59 and 65 ")
        _T("or hms_get_rank(hd_rank)  between 71 and 76 )  ")
        _T("       THEN 1")
        _T("       ELSE 0")
        _T("     END AS bhqn3,")
        _T("     CASE")
        _T("       WHEN hd_object=10")
        _T("       THEN 1")
        _T("       ELSE 0")
        _T("     END AS bhqd,")
        _T("     CASE")
        _T("       WHEN hd_object                   =2")
        _T("       AND hms_get_rank(hd_rank) IN (15,16,17,18,21,22,23,24)")
        _T("       THEN 1")
        _T("       ELSE 0")
        _T("     END AS bhqh1,")
        _T("     CASE")
        _T("       WHEN hd_object                   =2")
        _T("       AND hms_get_rank(hd_rank) IN (13,14,56,57,66)")
        _T("       THEN 1")
        _T("       ELSE 0")
        _T("     END AS bhqh2,")
        _T("     CASE")
        _T("       WHEN hd_object                  =2")
        _T("       AND ( hms_get_rank(hd_rank) <13   or hms_get_rank(hd_rank) ")
        _T(" between 50 and 55  ")
        _T("		or hms_get_rank(hd_rank)  between 59 and 64  or ")
        _T("hms_get_rank(hd_rank) =19 ) ")
        _T("       THEN 1")
        _T("       ELSE 0")
        _T("     END AS bhqh3,")
        _T("     CASE")
        _T("       WHEN hd_object=5")
        _T("       THEN 1")
        _T("       ELSE 0")
        _T("     END AS bhtn,")
        _T("     CASE")
        _T("       WHEN hd_object=9")
        _T("       THEN 1")
        _T("       ELSE 0")
        _T("     END AS bhte6t,")
        _T("     CASE")
        _T("       WHEN hd_object =4 ")
        _T("       THEN 1")
        _T("       ELSE 0")
        _T("     END AS bhkhac,")
    _T("     CASE")
    _T("       WHEN hd_object IN (8)")
        _T("       THEN 1")
        _T("       ELSE 0")
        _T("     END AS ban,")
        _T("     CASE")
        _T("       WHEN hd_object=7")
        _T("       THEN 1")
        _T("       ELSE 0")
        _T("     END AS dv,")
        _T("     1   AS nQSck, ")
        _T("     CASE")
        _T("       WHEN hd_object =12 ")
        _T("       THEN 1")
        _T("       ELSE 0")
        _T("     END AS bhnothe")
        _T("   FROM VIMES.hms_treatment_record")
        _T("   LEFT JOIN hms_doc")
        _T("   ON (hd_docno          = htr_docno)")
        _T("   WHERE htr_admitdate  <= TO_TIMESTAMP ('%s 06:29:59', ")
        _T("'YYYY/MM/DD HH24:MI:SS')")
        _T("   AND (htr_status       ='I'")
        _T("   OR (htr_status        ='T'")
        _T("   AND htr_dischargedate > TO_TIMESTAMP ('%s 06:29:59', ")
        _T("'YYYY/MM/DD HH24:MI:SS')))")
        _T(" AND (htr_deptid <>'B11' or ( htr_deptid='B11' and hd_object <> 9 ")
        _T(")) ")
        _T("   ) tbl")
        _T(" LEFT JOIN sys_dept")
        _T(" ON (dept                 = sd_id)")
        _T(" LEFT JOIN sys_dept_index ON (sd_id = sdi_deptid)")
        _T(" WHERE 1=1 %s and SD_ISACTIVE='Y'  and sd_id not in ('A11','A15') ")
        _T(" GROUP BY sd_id_alias, sd_id, ")
        _T("   sdi_index,sd_planned_bed, sd_avaiable_bed, sd_category ")
        _T(" ORDER BY sdi_index, sd_id_alias,")
        _T("   dept"),
        m_szFromDate, m_szFromDate, m_szFromDate, m_szFromDate, m_szFromDate,
        m_szFromDate, m_szFromDate, m_szFromDate, m_szFromDate, szToDate,
        m_szFromDate, szToDate, szToDate, szToDate, szWhere);
_fmsg(_T("%s"),szSQL);

    if (nQuery == TONG_HOP_KHOI) {
        szSQL.Format(
            _T("  select sum(nNoi) as nNoi, sum(nNgoai) as nNgoai")
            _T("  from (")
            _T("  select case when sd_category = 0 ")
            _T("		then 1 else 0 end as nNoi,")
            _T("          case when sd_category = 1 ")
            _T("	then 1 else 0 end as nNgoai")
            _T("  from VIMES.hms_treatment_record")
            _T(" left join sys_dept on (htr_deptid = sd_id) ")
            _T("  where htr_status='T' AND htr_suggestion <> 'M' ")
            _T(" 	AND	htr_dischargedate BETWEEN TO_TIMESTAMP ('%s ")
            _T("00:00:00', 'YYYY/MM/DD HH24:MI:SS') ")
            _T("     AND TO_TIMESTAMP ('%s 23:59:00', 'YYYY/MM/DD HH24:MI:SS')")
            _T("     ) tbl"),
            m_szToDate, m_szToDate);
	}
    if (nQuery == TONG_HOP_TUONG) {
		CDate odate;
		odate.ParseDate(m_szFromDate);
		odate += 1;
		CString szToDate = odate.GetDate();
        szSQL.Format(
            _T("SELECT hd_docno,")
            _T("        trim(hp_surname||' '||hp_midname||' '||hp_firstname) ")
            _T("AS hovaten,")
            _T("        extract(YEAR FROM hp_birthdate)       AS age,")
            _T("        (SELECT ss_desc ")
            _T("		FROM sys_sel ")
            _T("		WHERE ss_id='hms_rank' and ss_code=hp_rank) ")
            _T("as capbac,")
            _T("        hp_workplace,")
            _T("        get_diagnostic_treatment(hd_docno, htr_treattime) as ")
            _T("hd_diagnostic,")
            _T("        hms_getobjectname(hd_object) AS doituong,")
            _T("        trunc_date(htr_admitdate) AS admitdate,")
            _T("        htr_deptid")
            _T(" FROM hms_patient")
            _T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)")
            _T(" LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno)")
            _T(" LEFT JOIN hms_treatment_record ON(htr_docno =hd_docno)")
            _T(" WHERE htr_admitdate  <= TO_TIMESTAMP ('%s 06:29:59', ")
            _T("'YYYY/MM/DD HH24:MI:SS')")
            _T("   AND (htr_status       ='I' ")
            _T("   OR (htr_status        ='T'")
            _T("   AND htr_dischargedate > TO_TIMESTAMP ('%s 06:29:59', ")
            _T("'YYYY/MM/DD HH24:MI:SS') )) ")
            _T("	and hp_rank IN (15,16,17,21,22,23,24) ")
            _T("	and htr_outpatient='N' and htr_deptid not in ")
            _T("('A11','A15') ")
            _T(" ORDER BY htr_deptid,capbac "),
            szToDate, szToDate);
    }
    if (nQuery == TONG_HOP_MO) {
        szSQL.Format(
            _T(" select count(*) as tong_so, ")
            _T("    sum(case when ho_pdeptid = 'B5' then 1 else 0 end) as ")
            _T("so_b5, ")
            _T("    sum(case when ho_pdeptid = 'PTTYC' then 1 else 0 end) as ")
            _T("so_pttyc, ")
            _T("    sum(case when ho_type = '2' then 1 else 0 end) as ")
            _T("so_cap_cuu, ")
            _T("    sum(case when ho_type = '2' and nvl(ho_emergencytype, ")
            _T("'0') = '0' then 1 else 0 end) as so_ngay, ")
            _T("    sum(case when ho_type = '2' and nvl(ho_emergencytype, ")
            _T("'0') = '1' then 1 else 0 end) as so_dem, ")
            _T("    sum(case when substr(ho_normal, 1, 3) = 'B44' then 1 else ")
            _T("0 end) as loai_db, ")
            _T("	cast(sum(case when substr(ho_normal, 1, 3) = 'B44' ")
            _T("then 1 else 0 end)*100/count(*) as number(5,2)) as ty_le_db,")
            _T("    sum(case when substr(ho_normal, 1, 3) IN ('B41', 'B45')  ")
            _T("then 1 else 0 end) as loai_1, ")
            _T("	cast(sum(case when substr(ho_normal, 1, 3) IN ('B41', ")
            _T("'B45') then 1 else 0 end)*100/count(*) as number(5,2)) as ")
            _T("ty_le_l1,")
            _T("    sum(case when substr(ho_normal, 1, 3) IN ('B42', 'B46')  ")
            _T("then 1 else 0 end) as loai_2, ")
            _T("	cast(sum(case when substr(ho_normal, 1, 3) IN ('B42', ")
            _T("'B46') then 1 else 0 end)*100/count(*) as number(5,2)) as ")
            _T("ty_le_l2,")
            _T("    sum(case when substr(ho_normal, 1, 3) IN ('B43', 'B47')  ")
            _T("then 1 else 0 end) as loai_3, ")
            _T("	cast(sum(case when substr(ho_normal, 1, 3) IN ('B43', ")
            _T("'B47') then 1 else 0 end)*100/count(*) as number(5,2)) as ")
            _T("ty_le_l3, ")
            _T("    sum(case when substr(nvl(ho_normal, 'X'), 1, 3) not in ")
            _T("(%s)  then 1 else 0 end) as loai_khac, ")
            _T("    cast(sum(case when substr(nvl(ho_normal, 'X'), 1, 3) not ")
            _T("in (%s)  ")
            _T("		then 1 else 0 end)*100/count(*) ")
            _T("		as number(5,2))	as ty_le_lk ")
            _T(" FROM   (SELECT    *")
            _T("         FROM      hms_operation")
            _T("		 INNER JOIN hms_clinical_record ON (hcr_docno ")
            _T("= ho_docno)")
            _T("         LEFT JOIN hms_fee_list ON( hfl_feeid = ho_itemid )")
            _T("         WHERE     ho_status = 'T' AND ho_pdeptid IN ( 'B5' ) ")
            _T("AND ho_performdate BETWEEN")
            _T("                             To_timestamp('%s 06:30:00', ")
            _T("'yyyy/mm/dd hh24:mi:ss') AND")
            _T("                             To_timestamp('%s 06:30:00', ")
            _T("'yyyy/mm/dd hh24:mi:ss'")
            _T("                             )")
            _T("                                     + interval '1' day AND ")
            _T("Nvl(hfl_categoryid, 0) <> '500' AND")
            _T("                   Nvl(hfl_tyc, 'N') <> 'TYC'")
            _T("         UNION ALL")
            _T("         SELECT    *")
            _T("         FROM      hms_operation")
            _T("		 INNER JOIN hms_clinical_record ON (hcr_docno ")
            _T("= ho_docno)")
            _T("         LEFT JOIN hms_fee_list ON( hfl_feeid = ho_itemid )")
            _T("         WHERE     ho_status = 'T' AND ho_pdeptid IN ( ")
            _T("'PTTYC' ) AND ho_performdate BETWEEN")
            _T("                   To_timestamp('%s 06:30:00', 'yyyy/mm/dd ")
            _T("hh24:mi:ss') AND")
            _T("                             To_timestamp('%s 06:30:00', ")
            _T("'yyyy/mm/dd hh24:mi:ss'")
            _T("                             )")
            _T("                                  + interval '1' day) ")
            _T(" WHERE ho_normal IS NOT NULL AND ho_emergencytype IS NOT NULL"),
            szFeeType, szFeeType, m_szFromDate, m_szFromDate, m_szFromDate,
            m_szFromDate);
	}
    if (nQuery == TONG_HOP_MO_V2) {
		/*szSQL.Format(_T(" select count(*) as tong_so, ") \
        _T("    sum(case when ho_pdeptid = 'B5' then 1 else 0 end) as so_b5, ")
        \
        _T("    sum(case when ho_pdeptid = 'PTTYC' then 1 else 0 end) as
        so_pttyc, ") \
        _T("    sum(case when ho_type = '2' then 1 else 0 end) as so_cap_cuu, ")
        \
        _T("    sum(case when ho_type = '2' and nvl(ho_emergencytype, '0') = '0'
        then 1 else 0 end) as so_ngay, ") \
        _T("    sum(case when ho_type = '2' and nvl(ho_emergencytype, '0') = '1'
        then 1 else 0 end) as so_dem, ") \
        _T("    sum(case when substr(ho_normal, 1, 3) = 'B44' then 1 else 0 end)
        as loai_db, ") \
        _T("	cast(sum(case when substr(ho_normal, 1, 3) = 'B44' then 1 else 0
        end)*100/count(*) as number(5,2)) as ty_le_db,") \
        _T("    sum(case when substr(ho_normal, 1, 3) IN ('B41', 'B45')  then 1
        else 0 end) as loai_1, ") \
        _T("	cast(sum(case when substr(ho_normal, 1, 3) IN ('B41', 'B45')
        then 1 else 0 end)*100/count(*) as number(5,2)) as ty_le_l1,") \
        _T("    sum(case when substr(ho_normal, 1, 3) IN ('B42', 'B46')  then 1
        else 0 end) as loai_2, ") \
        _T("	cast(sum(case when substr(ho_normal, 1, 3) IN ('B42', 'B46')
        then 1 else 0 end)*100/count(*) as number(5,2)) as ty_le_l2,") \
        _T("    sum(case when substr(ho_normal, 1, 3) IN ('B43', 'B47')  then 1
        else 0 end) as loai_3, ") \
        _T("	cast(sum(case when substr(ho_normal, 1, 3) IN ('B43', 'B47')
        then 1 else 0 end)*100/count(*) as number(5,2)) as ty_le_l3, ") \
        _T("    sum(case when substr(nvl(ho_normal, 'X'), 1, 3) not in (%s) then
        1 else 0 end) as loai_khac, ") \
        _T("    cast(sum(case when substr(nvl(ho_normal, 'X'), 1, 3) not in (%s)
        ") \
		_T("		then 1 else 0 end)*100/count(*) ") \
		_T("		as number(5,2))	as ty_le_lk,  ") \
        _T("	sum(case when NVL(tyc_b5, 'N') = 'Y' then 1 else 0 end) as
        tyc_b5,") \
		_T("	sum(case when tyc_b5 = 'N' then 1 else 0 end) as thuong_b5,") \
		_T("	sum(nt_tyc) as nt_tyc, sum(ngt_tyc) as ngt_tyc ") \
		_T(" FROM   (SELECT    distinct ho_docno, ho_pdeptid,") \
		_T("					ho_type, ") \
		_T("					ho_emergencytype, ") \
        _T("				first_value(ho_normal) over (partition
        by ho_docno order by ho_normal desc) as ho_normal,")	\
        _T("				first_value(nvl(ho_itemidreq, 'N')) over
        (partition by ho_docno order by ho_normal desc) as tyc_b5,") \
        _T("				0 as nt_tyc, case when sd_type = 'KB'
        then 1 else 0 end as ngt_tyc") \
		_T("         FROM      hms_operation") \
		_T("         LEFT JOIN hms_fee_list ON( hfl_feeid = ho_itemid )") \
		_T("		 LEFT JOIN sys_dept ON (sd_id = ho_deptid)") \
        _T("         WHERE     ho_status = 'T' AND ho_pdeptid IN ( 'B5' ) AND
        ho_performdate BETWEEN") \
        _T("                             To_timestamp('%s 06:30:00', 'yyyy/mm/dd
        hh24:mi:ss') AND") \
        _T("                             To_timestamp('%s 06:30:00', 'yyyy/mm/dd
        hh24:mi:ss'") \
		_T("                             )") \
        _T("                                     + interval '1' day AND
        Nvl(hfl_categoryid, 0) NOT IN ('500', '501') AND") \
        _T("                   Nvl(hfl_tyc, 'N') <> 'TYC' AND ho_normal IS NOT
        NULL ") \
        _T("		AND ho_normal <> '4' AND   substr (hfl_groupid, 1, 2) =
        'B4' ") \
		_T("         UNION ALL") \
		_T("         SELECT    distinct ho_docno, ho_pdeptid,") \
		_T("					ho_type, ") \
		_T("					ho_emergencytype, ") \
        _T("				first_value(ho_normal) over (partition
        by ho_docno order by ho_normal desc) as ho_normal,")	\
		_T("				null as tyc_b5,") \
        _T("				case when ho_deptid <> 'TYC' then 1 else
        0 end as nt_tyc,") \
        _T("				case when ho_deptid = 'TYC' then 1 else
        0 end as ngt_tyc") \
		_T("         FROM      hms_operation") \
		_T("         LEFT JOIN hms_fee_list ON( hfl_feeid = ho_itemid )") \
		_T("		 LEFT JOIN sys_dept ON (sd_id = ho_deptid)") \
        _T("         WHERE     ho_status = 'T' AND ho_pdeptid IN ( 'PTTYC' ) AND
        ho_performdate BETWEEN") \
        _T("                   To_timestamp('%s 06:30:00', 'yyyy/mm/dd
        hh24:mi:ss') AND") \
        _T("                             To_timestamp('%s 06:30:00', 'yyyy/mm/dd
        hh24:mi:ss'") \
		_T("                             )") \
		_T("                                  + interval '1' day ") \
		_T("		AND ho_normal IS NOT NULL ") \
        _T("		AND ho_normal <> '4' AND   substr (hfl_groupid, 1, 2) =
        'B4')") , szFeeType, szFeeType, m_szFromDate, m_szFromDate,
        m_szFromDate, m_szFromDate);*/

        szSQL.Format(
            _T(" SELECT temp.*,")
            _T(" (tong_so - so_cap_cuu - ngt_toanvien - tyc_b5 - tyc_c11c) as ")
            _T("phauthuat_thuong, ")
            _T(" (tyc_b5 + tyc_c11c) as tyc_total ")
            _T(" from")
            _T(" (")
            _T(" SELECT COUNT(*) AS tong_so,")
            _T("   SUM(")
            _T("   CASE")
            _T("     WHEN ho_pdeptid = 'B5'")
            _T("     THEN 1")
            _T("     ELSE 0")
            _T("   END) AS so_b5,")
            _T("   SUM(")
            _T("   CASE")
            _T("     WHEN ho_pdeptid = 'PTTYC'")
            _T("     THEN 1")
            _T("     ELSE 0")
            _T("   END) AS so_pttyc,")
            _T("   SUM(")
            _T("   CASE")
            _T("     WHEN ho_type = '2'")
            _T("     THEN 1")
            _T("     ELSE 0")
            _T("   END) AS so_cap_cuu,")
            _T("   SUM(")
            _T("   CASE")
            _T("     WHEN ho_type                   = '2'")
            _T("     AND NVL(ho_emergencytype, '0') IN ('0', '2')")
            _T("     THEN 1")
            _T("     ELSE 0")
            _T("   END) AS so_ngay,")
            _T("   SUM(")
            _T("   CASE")
            _T("     WHEN ho_type                   = '2'")
            _T("     AND NVL(ho_emergencytype, '0') IN ('1', '3')")
            _T("     THEN 1")
            _T("     ELSE 0")
            _T("   END) AS so_dem,")
            _T("   SUM(")
            _T("   CASE")
            _T("     WHEN SUBSTR(ho_normal, 1, 3) = 'B44'")
            _T("     THEN 1")
            _T("     ELSE 0")
            _T("   END) AS loai_db,")
            _T("   CAST(SUM(")
            _T("   CASE")
            _T("     WHEN SUBSTR(ho_normal, 1, 3) = 'B44'")
            _T("     THEN 1")
            _T("     ELSE 0")
            _T("   END)*100/COUNT(*) AS NUMBER(5,2)) AS ty_le_db,")
            _T("   SUM(")
            _T("   CASE")
            _T("     WHEN SUBSTR(ho_normal, 1, 3) IN ('B41', 'B45')")
            _T("     THEN 1")
            _T("     ELSE 0")
            _T("   END) AS loai_1,")
            _T("   CAST(SUM(")
            _T("   CASE")
            _T("     WHEN SUBSTR(ho_normal, 1, 3) IN ('B41', 'B45')")
            _T("     THEN 1")
            _T("     ELSE 0")
            _T("   END)*100/COUNT(*) AS NUMBER(5,2)) AS ty_le_l1,")
            _T("   SUM(")
            _T("   CASE")
            _T("     WHEN SUBSTR(ho_normal, 1, 3) IN ('B42', 'B46')")
            _T("     THEN 1")
            _T("     ELSE 0")
            _T("   END) AS loai_2,")
            _T("   CAST(SUM(")
            _T("   CASE")
            _T("     WHEN SUBSTR(ho_normal, 1, 3) IN ('B42', 'B46')")
            _T("     THEN 1")
            _T("     ELSE 0")
            _T("   END)*100/COUNT(*) AS NUMBER(5,2)) AS ty_le_l2,")
            _T("   SUM(")
            _T("   CASE")
            _T("     WHEN SUBSTR(ho_normal, 1, 3) IN ('B43', 'B47')")
            _T("     THEN 1")
            _T("     ELSE 0")
            _T("   END) AS loai_3,")
            _T("   CAST(SUM(")
            _T("   CASE")
            _T("     WHEN SUBSTR(ho_normal, 1, 3) IN ('B43', 'B47')")
            _T("     THEN 1")
            _T("     ELSE 0")
            _T("   END)*100/COUNT(*) AS NUMBER(5,2)) AS ty_le_l3,")
            _T("   SUM(")
            _T("   CASE")
            _T("     WHEN SUBSTR(NVL(ho_normal, 'X'), 1, 3) NOT IN (%s)")
            _T("     THEN 1")
            _T("     ELSE 0")
            _T("   END) AS loai_khac,")
            _T("   CAST(SUM(")
            _T("   CASE")
            _T("     WHEN SUBSTR(NVL(ho_normal, 'X'), 1, 3) NOT IN (%s)")
            _T("     THEN 1")
            _T("     ELSE 0")
            _T("   END)*100/COUNT(*) AS NUMBER(5,2)) AS ty_le_lk,")
            _T("   SUM(")
            _T("   CASE")
            _T("    WHEN tyc_b5 = 'Y'")
            _T("     and ho_type <> '2'")
            _T("     THEN 1")
            _T("     ELSE 0")
            _T("   END) AS tyc_b5,")
            _T("   SUM(")
            _T("   CASE")
            _T("     WHEN tyc_b5 <> 'Y'")
            _T("     and ho_type <> '2'")
            _T("     THEN 1")
            _T("     ELSE 0")
            _T("   END)         AS thuong_b5,")
            _T("   SUM(nt_tyc)  AS nt_tyc,")
            _T("   SUM(ngt_b5)  AS ngt_b5,")
            _T("   SUM(ngt_tyc) AS ngt_tyc,")
            _T("   SUM(ngt_b5 + ngt_tyc) as ngt_toanvien,")
            _T("   sum(tyc_c11c) as tyc_c11c")
            _T(" FROM")
            _T("   (SELECT DISTINCT ho_docno,")
            _T("     ho_pdeptid,")
            _T("     ho_type,")
            _T("     ho_emergencytype,")
            _T("     first_value(ho_normal) over (partition BY ho_docno order ")
            _T("by ho_normal DESC)              AS ho_normal,")
            _T("     first_value(NVL(ho_itemidreq, 'N')) over (partition BY ")
            _T("ho_docno order by ho_normal DESC) AS tyc_b5,")
            _T("     0                                                        ")
            _T("                                AS nt_tyc,")
            _T("     CASE")
            _T("       WHEN sd_type = 'KB' ")
            _T("       AND ho_deptid <> 'TYC'")
            _T("       and ho_type <> '2'")
            _T("       THEN 1")
            _T("       ELSE 0")
            _T("     END AS ngt_b5,")
            _T("     CASE")
            _T("       WHEN sd_type = 'KB' ")
            _T("       AND ho_deptid = 'TYC'")
            _T("       and ho_type <> '2'")
            _T("       THEN 1")
            _T("       ELSE 0")
            _T("     END AS ngt_tyc,")
            _T("    CASE")
            _T("       WHEN ho_deptid = 'PTTYC'")
            _T("       and ho_type <> '2'")
            _T("       THEN 1")
            _T("       ELSE 0")
            _T("     END AS tyc_c11c")
            _T("   FROM hms_operation")
            _T("   LEFT JOIN hms_fee_list")
            _T("   ON( hfl_feeid = ho_itemid )")
            _T("   LEFT JOIN sys_dept")
            _T("   ON (sd_id       = ho_deptid)")
            _T("   WHERE ho_status = 'T'")
            _T("   AND ho_pdeptid                                             ")
            _T("                                                              ")
            _T("                                IN ( 'B5' )")
            _T("   AND ho_performdate BETWEEN To_timestamp('%s 06:30:00', ")
            _T("'yyyy/mm/dd hh24:mi:ss') AND To_timestamp('%s 06:30:00', ")
            _T("'yyyy/mm/dd hh24:mi:ss' ) + interval '1' DAY")
            _T("   AND NVL(hfl_categoryid, 0) NOT                             ")
            _T("                                                              ")
            _T("                                IN ('500', '501')")
            _T("   AND NVL(hfl_tyc, 'N')          <> 'TYC'")
            _T("   AND ho_normal                  IS NOT NULL")
            _T("   AND ho_normal                  <> '4'")
            _T("   AND SUBSTR (hfl_groupid, 1, 2)  = 'B4'  ")
            _T("   UNION ALL")
            _T("   SELECT DISTINCT ho_docno,")
            _T("     ho_pdeptid,")
            _T("     ho_type,")
            _T("     ho_emergencytype,")
            _T("     first_value(ho_normal) over (partition BY ho_docno order ")
            _T("by ho_normal DESC) AS ho_normal,")
            _T("     NULL                                                     ")
            _T("                   AS tyc_b5,")
            _T("     CASE")
            _T("       WHEN ho_deptid <> 'TYC'")
            _T("       THEN 1")
            _T("       ELSE 0")
            _T("     END AS nt_tyc,")
            _T("      CASE")
            _T("       WHEN sd_type = 'KB' ")
            _T("       AND ho_deptid <> 'TYC'")
            _T("       and ho_type <> '2'")
            _T("       THEN 1")
            _T("       ELSE 0")
            _T("     END AS ngt_b5,")
            _T("     CASE")
            _T("       WHEN sd_type = 'KB' ")
            _T("       AND ho_deptid = 'TYC'")
            _T("       and ho_type <> '2'")
            _T("       THEN 1")
            _T("       ELSE 0")
            _T("     END AS ngt_tyc,")
            _T("      CASE")
            _T("       WHEN ho_deptid = 'PTTYC'")
            _T("       and ho_type <> '2'")
            _T("       THEN 1")
            _T("       ELSE 0")
            _T("     END AS tyc_c11c")
            _T("   FROM hms_operation")
            _T("   LEFT JOIN hms_fee_list")
            _T("   ON( hfl_feeid = ho_itemid )")
            _T("   LEFT JOIN sys_dept")
            _T("   ON (sd_id       = ho_deptid)")
            _T("   WHERE ho_status = 'T'")
            _T("   AND ho_pdeptid                                             ")
            _T("                                                              ")
            _T("                                IN ( 'PTTYC' )")
            _T("   AND ho_performdate BETWEEN To_timestamp('%s 06:30:00', ")
            _T("'yyyy/mm/dd hh24:mi:ss') AND To_timestamp('%s 06:30:00', ")
            _T("'yyyy/mm/dd hh24:mi:ss' ) + interval '1' DAY")
            _T("   AND ho_normal                 IS NOT NULL")
            _T("   AND ho_normal                 <> '4'")
            _T("   AND SUBSTR (hfl_groupid, 1, 2) = 'B4'")
            _T("   )")
            _T("   )temp"),
            szFeeType, szFeeType, m_szFromDate, m_szFromDate, m_szFromDate,
            m_szFromDate);
	}
    if (nQuery == TONG_HOP_MO_V2_CT) {
		/*szSQL.Format(_T(" SELECT dept,") \
		_T("        Count(*) AS tong_so,") \
		_T("        SUM(CASE WHEN ho_pdeptid = 'B5' THEN 1") \
		_T("            ELSE 0") \
		_T("            END) AS so_b5,") \
		_T("        SUM(CASE WHEN ho_pdeptid = 'PTTYC' THEN 1") \
		_T("            ELSE 0") \
		_T("            END) AS so_pttyc,") \
		_T("        SUM(CASE WHEN ho_type = '2' THEN 1") \
		_T("            ELSE 0") \
		_T("            END) AS so_cap_cuu,") \
        _T("        SUM(CASE WHEN ho_type = '2' AND Nvl(ho_emergencytype, '0') =
        '0' THEN 1") \
		_T("            ELSE 0") \
		_T("            END) AS so_ngay,") \
        _T("        SUM(CASE WHEN ho_type = '2' AND Nvl(ho_emergencytype, '0') =
        '1' THEN 1") \
		_T("            ELSE 0") \
		_T("            END) AS so_dem,") \
		_T("        SUM(CASE WHEN substr(ho_normal, 1, 3) = 'B44' THEN 1") \
		_T("            ELSE 0") \
		_T("            END) AS loai_db,") \
        _T("        Cast(SUM(CASE WHEN substr(ho_normal, 1, 3) = 'B44' THEN 1")
        \
		_T("                 ELSE 0") \
        _T("                 END) * 100 / Count(*) AS NUMBER(5, 2)) AS
        ty_le_db,") \
        _T("        SUM(CASE WHEN substr(ho_normal, 1, 3) IN ('B41', 'B45') THEN
        1") \
		_T("            ELSE 0") \
		_T("            END) AS loai_1,") \
        _T("        Cast(SUM(CASE WHEN substr(ho_normal, 1, 3) IN ('B41', 'B45')
        THEN 1") \
		_T("                 ELSE 0") \
        _T("                 END) * 100 / Count(*) AS NUMBER(5, 2)) AS
        ty_le_l1,") \
        _T("        SUM(CASE WHEN substr(ho_normal, 1, 3) IN ('B42', 'B46') THEN
        1") \
		_T("            ELSE 0") \
		_T("            END) AS loai_2,") \
        _T("        Cast(SUM(CASE WHEN substr(ho_normal, 1, 3) IN ('B42', 'B46')
        THEN 1") \
		_T("                 ELSE 0") \
        _T("                 END) * 100 / Count(*) AS NUMBER(5, 2)) AS
        ty_le_l2,") \
        _T("        SUM(CASE WHEN substr(ho_normal, 1, 3) IN ('B43', 'B47') THEN
        1") \
		_T("            ELSE 0") \
		_T("            END) AS loai_3,") \
        _T("        Cast(SUM(CASE WHEN substr(ho_normal, 1, 3) IN ('B43', 'B47')
        THEN 1") \
		_T("                 ELSE 0") \
        _T("                 END) * 100 / Count(*) AS NUMBER(5, 2)) AS
        ty_le_l3,") \
        _T("        SUM(CASE WHEN substr(nvl(ho_normal, 'X'), 1, 3) not in (%s)
        THEN 1") \
		_T("            ELSE 0") \
		_T("            END) AS loai_khac,") \
        _T("        Cast(SUM(CASE WHEN substr(nvl(ho_normal, 'X'), 1, 3) not in
        (%s) THEN 1") \
		_T("                 ELSE 0") \
        _T("                 END) * 100 / Count(*) AS NUMBER(5, 2)) AS
        ty_le_lk,") \
		_T("        SUM(CASE WHEN NVL(tyc_b5,'N') = 'Y' THEN 1") \
		_T("            ELSE 0") \
		_T("            END) AS tyc_b5,") \
		_T("        SUM(CASE WHEN tyc_b5 = 'N' THEN 1") \
		_T("            ELSE 0") \
		_T("            END) AS thuong_b5") \
		_T(" FROM   (SELECT    DISTINCT ho_docno,") \
		_T("                            ho_pdeptid,") \
		_T("                            ho_type,") \
		_T("                            ho_emergencytype,") \
		_T("                            First_value(ho_normal)") \
		_T("                              over (") \
		_T("                                PARTITION BY ho_docno") \
        _T("                                ORDER BY ho_normal DESC) AS
        ho_normal,") \
		_T("                            First_value(Nvl(ho_itemidreq, 'N'))") \
		_T("                              over (") \
		_T("                                PARTITION BY ho_docno") \
        _T("                                ORDER BY ho_normal DESC) AS
        tyc_b5,") \
		_T("                            First_value(Nvl(ho_deptid, 'N'))") \
		_T("                              over (") \
		_T("                                PARTITION BY ho_docno") \
		_T("                                ORDER BY ho_normal DESC) AS dept") \
		_T("         FROM      hms_operation") \
		_T("         LEFT JOIN hms_fee_list ON( hfl_feeid = ho_itemid )") \
		_T("		 LEFT JOIN sys_dept ON (sd_id = ho_deptid)") \
        _T("         WHERE     ho_status = 'T' AND ho_pdeptid IN ( 'B5' ) AND")
        \
        _T("                             ho_performdate BETWEEN To_timestamp('%s
        06:30:00',") \
        _T("                                                    'yyyy/mm/dd
        hh24:mi:ss'") \
		_T("                                                    ) AND") \
        _T("                             To_timestamp('%s 06:30:00', 'yyyy/mm/dd
        hh24:mi:ss'") \
		_T("                             )") \
        _T("                             + interval '1' day AND
        Nvl(hfl_categoryid, 0) NOT IN ( '500', '501' )") \
		_T("                   AND") \
        _T("                             Nvl(hfl_tyc, 'N') <> 'TYC' AND
        ho_normal IS NOT NULL AND") \
        _T("                   ho_normal <> '4' AND   substr (hfl_groupid, 1, 2)
        = 'B4' ") \
		_T("         UNION ALL") \
		_T("         SELECT    DISTINCT ho_docno,") \
		_T("                            ho_pdeptid,") \
		_T("                            ho_type,") \
		_T("                            ho_emergencytype,") \
		_T("                            First_value(ho_normal)") \
		_T("                              over (") \
		_T("                                PARTITION BY ho_docno") \
        _T("                                ORDER BY ho_normal DESC) AS
        ho_normal,") \
		_T("                            NULL AS tyc_b5,") \
		_T("                            First_value(Nvl(ho_deptid, 'N'))") \
		_T("                              over (") \
		_T("                                PARTITION BY ho_docno") \
		_T("                                ORDER BY ho_normal DESC) AS dept") \
		_T("         FROM      hms_operation") \
		_T("         LEFT JOIN hms_fee_list ON( hfl_feeid = ho_itemid )") \
		_T("		 LEFT JOIN sys_dept ON (sd_id = ho_deptid)") \
        _T("         WHERE     ho_status = 'T' AND ho_pdeptid IN ( 'PTTYC' )
        AND") \
        _T("                             ho_performdate BETWEEN To_timestamp('%s
        06:30:00',") \
        _T("                                                    'yyyy/mm/dd
        hh24:mi:ss'") \
		_T("                                                    ) AND") \
        _T("                             To_timestamp('%s 06:30:00', 'yyyy/mm/dd
        hh24:mi:ss'") \
		_T("                             )") \
        _T("                                                     + interval '1'
        day AND ho_normal IS NOT NULL AND") \
        _T("                   ho_normal <> '4' AND   substr (hfl_groupid, 1, 2)
        = 'B4')") \ _T(" GROUP  BY dept ")
        , szFeeType, szFeeType, m_szFromDate, m_szFromDate, m_szFromDate,
        m_szFromDate);*/

        szSQL.Format(
            _T(" SELECT temp.*,")
            _T("   (tong_so  - so_cap_cuu - ngt_toanvien - tyc_b5 - tyc_c11c) ")
            _T("AS phauthuat_thuong,")
            _T("   (tyc_b5 + tyc_c11c)                                      ")
            _T("AS tyc_total")
            _T(" FROM")
            _T("   (")
            _T(" SELECT dept,")
            _T("   COUNT(*) AS tong_so,")
            _T("   SUM(")
            _T("   CASE")
            _T("     WHEN ho_pdeptid = 'B5'")
            _T("     THEN 1")
            _T("     ELSE 0")
            _T("   END) AS so_b5,")
            _T("   SUM(")
            _T("   CASE")
            _T("     WHEN ho_pdeptid = 'PTTYC'")
            _T("     THEN 1")
            _T("     ELSE 0")
            _T("   END) AS so_pttyc,")
            _T("   SUM(")
            _T("   CASE")
            _T("     WHEN ho_type = '2'")
            _T("     THEN 1")
            _T("     ELSE 0")
            _T("   END) AS so_cap_cuu,")
            _T("   SUM(")
            _T("   CASE")
            _T("     WHEN ho_type                   = '2'")
            _T("       AND NVL(ho_emergencytype, '0') IN ('0', '2')")
            _T("     THEN 1")
            _T("     ELSE 0")
            _T("   END) AS so_ngay,")
            _T("   SUM(")
            _T("   CASE")
            _T("     WHEN ho_type                   = '2'")
            _T("       AND NVL(ho_emergencytype, '0') IN ('1', '3')")
            _T("     THEN 1")
            _T("     ELSE 0")
            _T("   END) AS so_dem,")
            _T("   SUM(")
            _T("   CASE")
            _T("     WHEN SUBSTR(ho_normal, 1, 3) = 'B44'")
            _T("     THEN 1")
            _T("     ELSE 0")
            _T("   END) AS loai_db,")
            _T("   CAST(SUM(")
            _T("   CASE")
            _T("     WHEN SUBSTR(ho_normal, 1, 3) = 'B44'")
            _T("     THEN 1")
            _T("     ELSE 0")
            _T("   END) * 100 / COUNT(*) AS NUMBER(5, 2)) AS ty_le_db,")
            _T("   SUM(")
            _T("   CASE")
            _T("     WHEN SUBSTR(ho_normal, 1, 3) IN ('B41', 'B45')")
            _T("     THEN 1")
            _T("     ELSE 0")
            _T("   END) AS loai_1,")
            _T("   CAST(SUM(")
            _T("   CASE")
            _T("     WHEN SUBSTR(ho_normal, 1, 3) IN ('B41', 'B45')")
            _T("     THEN 1")
            _T("     ELSE 0")
            _T("   END) * 100 / COUNT(*) AS NUMBER(5, 2)) AS ty_le_l1,")
            _T("   SUM(")
            _T("   CASE")
            _T("     WHEN SUBSTR(ho_normal, 1, 3) IN ('B42', 'B46')")
            _T("     THEN 1")
            _T("     ELSE 0")
            _T("   END) AS loai_2,")
            _T("   CAST(SUM(")
            _T("   CASE")
            _T("     WHEN SUBSTR(ho_normal, 1, 3) IN ('B42', 'B46')")
            _T("     THEN 1")
            _T("     ELSE 0")
            _T("   END) * 100 / COUNT(*) AS NUMBER(5, 2)) AS ty_le_l2,")
            _T("   SUM(")
            _T("   CASE")
            _T("     WHEN SUBSTR(ho_normal, 1, 3) IN ('B43', 'B47')")
            _T("     THEN 1")
            _T("     ELSE 0")
            _T("   END) AS loai_3,")
            _T("   CAST(SUM(")
            _T("   CASE")
            _T("     WHEN SUBSTR(ho_normal, 1, 3) IN ('B43', 'B47')")
            _T("     THEN 1")
            _T("     ELSE 0")
            _T("   END) * 100 / COUNT(*) AS NUMBER(5, 2)) AS ty_le_l3,")
            _T("   SUM(")
            _T("   CASE")
            _T("     WHEN SUBSTR(NVL(ho_normal, 'X'), 1, 3) NOT IN (%s)")
            _T("     THEN 1")
            _T("     ELSE 0")
            _T("   END) AS loai_khac,")
            _T("   CAST(SUM(")
            _T("   CASE")
            _T("     WHEN SUBSTR(NVL(ho_normal, 'X'), 1, 3) NOT IN (%s)")
            _T("     THEN 1")
            _T("     ELSE 0")
            _T("   END) * 100 / COUNT(*) AS NUMBER(5, 2)) AS ty_le_lk,")
            _T("  SUM(")
            _T("   CASE")
            _T("     WHEN NVL(tyc_b5,'N') = 'Y'")
            _T("     AND ho_type <> '2'")
            _T("     THEN 1")
            _T("     ELSE 0")
            _T("   END) AS tyc_b5,")
            _T("   SUM(")
            _T("   CASE")
            _T("     WHEN tyc_b5 = 'N'")
            _T("     AND ho_type <> '2'")
            _T("     THEN 1")
            _T("     ELSE 0")
            _T("   END) AS thuong_b5,   ")
            _T("     SUM(ngt_b5)           AS ngt_b5,")
            _T("     SUM(ngt_tyc)          AS ngt_tyc,")
            _T("     SUM(ngt_b5 + ngt_tyc) AS ngt_toanvien,")
            _T("     SUM(tyc_c11c)         AS tyc_c11c")
            _T(" FROM")
            _T("   (SELECT DISTINCT ho_docno,")
            _T("     ho_pdeptid,")
            _T("     ho_type,")
            _T("     ho_emergencytype,")
            _T("     First_value(ho_normal) over ( PARTITION BY ho_docno ")
            _T("ORDER BY ho_normal DESC)              AS ho_normal,")
            _T("     First_value(NVL(ho_itemidreq, 'N')) over ( PARTITION BY ")
            _T("ho_docno ORDER BY ho_normal DESC) AS tyc_b5,")
            _T("     First_value(NVL(ho_deptid, 'N')) over ( PARTITION BY ")
            _T("ho_docno ORDER BY ho_normal DESC)    AS dept,")
            _T("     CASE")
            _T("         WHEN sd_type   = 'KB'")
            _T("         AND ho_deptid <> 'TYC'")
            _T("         AND ho_type   <> '2'")
            _T("         THEN 1")
            _T("         ELSE 0")
            _T("       END AS ngt_b5,")
            _T("       CASE")
            _T("         WHEN sd_type  = 'KB'")
            _T("         AND ho_deptid = 'TYC'")
            _T("         AND ho_type  <> '2'")
            _T("         THEN 1")
            _T("         ELSE 0")
            _T("       END AS ngt_tyc,")
            _T("       CASE")
            _T("         WHEN ho_deptid = 'PTTYC'")
            _T("         AND ho_type   <> '2'")
            _T("         THEN 1")
            _T("         ELSE 0")
            _T("       END AS tyc_c11c")
            _T("   FROM hms_operation")
            _T("   LEFT JOIN hms_fee_list")
            _T("   ON( hfl_feeid = ho_itemid )")
            _T("   LEFT JOIN sys_dept")
            _T("   ON (sd_id       = ho_deptid)")
            _T("   WHERE ho_status = 'T'")
            _T("   AND ho_pdeptid                                             ")
            _T("                                                              ")
            _T("                 IN ( 'B5' )")
            _T("   AND ho_performdate BETWEEN To_timestamp('%s 06:30:00', ")
            _T("'yyyy/mm/dd hh24:mi:ss') AND To_timestamp('%s 06:30:00', ")
            _T("'yyyy/mm/dd hh24:mi:ss' ) + interval '1' DAY")
            _T("   AND NVL(hfl_categoryid, 0) NOT                             ")
            _T("                                                              ")
            _T("                 IN ( '500', '501' )")
            _T("   AND NVL(hfl_tyc, 'N')          <> 'TYC'")
            _T("   AND ho_normal                  IS NOT NULL")
            _T("   AND ho_normal                  <> '4'")
            _T("   AND SUBSTR (hfl_groupid, 1, 2)  = 'B4'")
            _T("   UNION ALL")
            _T("   SELECT DISTINCT ho_docno,")
            _T("     ho_pdeptid,")
            _T("     ho_type,")
            _T("     ho_emergencytype,")
            _T("     First_value(ho_normal) over ( PARTITION BY ho_docno ")
            _T("ORDER BY ho_normal DESC)           AS ho_normal,")
            _T("     NULL                                                     ")
            _T("                              AS tyc_b5,")
            _T("     First_value(NVL(ho_deptid, 'N')) over ( PARTITION BY ")
            _T("ho_docno ORDER BY ho_normal DESC) AS dept,")
            _T("      CASE")
            _T("         WHEN sd_type   = 'KB'")
            _T("         AND ho_deptid <> 'TYC'")
            _T("         AND ho_type   <> '2'")
            _T("         THEN 1")
            _T("         ELSE 0")
            _T("       END AS ngt_b5,")
            _T("       CASE")
            _T("         WHEN sd_type  = 'KB'")
            _T("         AND ho_deptid = 'TYC'")
            _T("         AND ho_type  <> '2'")
            _T("         THEN 1")
            _T("         ELSE 0")
            _T("       END AS ngt_tyc,")
            _T("       CASE")
            _T("         WHEN ho_deptid = 'PTTYC'")
            _T("         AND ho_type   <> '2'")
            _T("         THEN 1")
            _T("         ELSE 0")
            _T("       END AS tyc_c11c")
            _T("   FROM hms_operation")
            _T("   LEFT JOIN hms_fee_list")
            _T("   ON( hfl_feeid = ho_itemid )")
            _T("   LEFT JOIN sys_dept")
            _T("   ON (sd_id       = ho_deptid)")
            _T("   WHERE ho_status = 'T'")
            _T("   AND ho_pdeptid                                             ")
            _T("                                                              ")
            _T("                 IN ( 'PTTYC' )")
            _T("   AND ho_performdate BETWEEN To_timestamp('%s 06:30:00', ")
            _T("'yyyy/mm/dd hh24:mi:ss') AND To_timestamp('%s 06:30:00', ")
            _T("'yyyy/mm/dd hh24:mi:ss' ) + interval '1' DAY")
            _T("   AND ho_normal                 IS NOT NULL")
            _T("   AND ho_normal                 <> '4'")
            _T("   AND SUBSTR (hfl_groupid, 1, 2) = 'B4'")
            _T("   )")
		_T(" GROUP  BY dept ")
            _T(" )temp"),
            szFeeType, szFeeType, m_szFromDate, m_szFromDate, m_szFromDate,
            m_szFromDate);
	}
	return szSQL;
}
CString CHMSAdmitDischargeOnDept::GetStringQuery1() {
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
	UpdateData(true);
	CDate odate;
	odate.ParseDate(m_szFromDate);
	odate += 1;
	CString szToDate = odate.GetDate();

	CString szSQL,szWhere;
	szWhere.Empty();
	
	if(m_bOutpatient)
		szWhere.Format(_T(" and outpatient ='Y' "));
	else
		szWhere.Format(_T(" and nvl(outpatient,'N') <>'Y' "));

	if(!m_szDeptKey.IsEmpty())
		szWhere.AppendFormat(_T(" and dept='%s'"), m_szDeptKey);
    szSQL.Format(
        _T(" SELECT sd_id_alias as dept,")
        _T("   sd_index as sd_index1,")
        _T("   htr_docno as docno, ")
        _T("   get_patientname(htr_docno) as pname, ")
        _T("    htr_admitdate as admitdate, ")
        _T("   case when htr_status = 'T' then  htr_dischargedate else null ")
        _T("end as dischargedate, ")
        _T("   SUM(oldpatient)     AS oldpatient ,")
        _T("   SUM( nTang6)        AS nTang6 ,")
        _T("   SUM(nTangC11)       AS nTangC11,")
        _T("   SUM(nTangC12)       AS nTangC12,")
        _T("   SUM(nTangC13)       AS nTangC13,")
        _T("   SUM(nTangAB)        AS nTangAB,")
        _T("   SUM(nTangTYC)       AS nTangTYC,")
        _T("   SUM(nCkden)         AS nCkden,")
        _T("   SUM(nRavien)        AS nRavien,")
        _T("   SUM(nXinve)         AS nXinve,")
        _T("   SUM(nTuVong)        AS nTuVong,")
        _T("   SUM(nChuyenkhoa)    AS nChuyenkhoa,")
        _T("   SUM(nChuyenVien)    AS nChuyenVien,")
        _T("   SUM(nQs17h)         AS nQs17h,")
        _T("   SUM(nTangC1117h)    AS nTangC1117h,")
        _T("   SUM(nTangC1217h)    AS nTangC1217h,")
        _T("   SUM(nTangC1317h)    AS nTangC1317h,")
        _T("   SUM(nTangAB17h)     AS nTangAB17h,")
        _T("   SUM(nTangTYC17h)    AS nTangTYC17h,")
        _T("   SUM(nckden17h)      AS nckden17h,")
        _T("   SUM(nRavien17h)     AS nRavien17h,")
        _T("   SUM(nXinve17h)      AS nXinve17h,")
        _T("   SUM(nTuVong17h)     AS nTuVong17h,")
        _T("   SUM(nChuyenkhoa17h) AS nChuyenkhoa17h,")
        _T("   SUM(nChuyenVien17h) AS nChuyenVien17h,")
        _T("   SUM(bhqn1)          AS bhqn1,")
        _T("   SUM(bhqn2)          AS bhqn2,")
        _T("   SUM(bhqn3)          AS bhqn3,")
        _T("   SUM(bhqd)           AS bhqd,")
        _T("   SUM(bhqh1)          AS bhqh1,")
        _T("   SUM(bhqh2)          AS bhqh2,")
        _T("   SUM(bhqh3)          AS bhqh3,")
        _T("   SUM(bhtn)           AS bhtn,")
        _T("   SUM(bhte6t)         AS bhte6t,")
        _T("   SUM(bhkhac)         AS bhkhac,")
        _T("   SUM(ban)            AS ban,")
        _T("   SUM(dv)             AS dv,")
        _T("   SUM(nQSck)          AS nQSck, ")
        _T("   SUM(bhnothe)          AS bhnothe ")
        _T(" FROM")
        _T("   (SELECT htr_status,htr_deptid AS dept,")
        _T("     htr_outpatient   AS outpatient,")
        _T(" htr_docno, ")
        _T("    htr_admitdate, ")
        _T("    htr_dischargedate,   ")
        _T("     1                AS oldpatient, ")
        _T("     0 AS nTang6,0  AS nTangC11, 0 AS nTangC12, 0 AS nTangC13, 0  ")
        _T("AS nTangAB,0 AS nTangTYC,0 AS nCkden,")
        _T("     0 AS nRavien,0 AS nXinve,0 AS nTuVong,0  AS nChuyenkhoa,0 AS ")
        _T("nChuyenVien,")
        _T("     0 AS nQs17h,")
        _T("     0 AS nTangC1117h, 0  AS nTangC1217h,0 AS nTangC1317h, 0 AS ")
        _T("nTangAB17h, 0 AS nTangTYC17h,0 AS nckden17h,")
        _T("     0  AS nRavien17h, 0   AS nXinve17h,0  AS nTuVong17h,0 AS ")
        _T("nChuyenkhoa17h,0 AS nChuyenVien17h,")
        _T("     0 AS bhqn1,0 AS bhqn2,0 AS bhqn3, 0 AS bhqd,0 AS bhqh1,0 AS ")
        _T("bhqh2,0 AS bhqh3,0 AS bhtn,0 AS bhte6t,0 AS bhkhac, 0 AS ban,0 AS ")
        _T("dv, 0 AS nQSck, 0 as bhnothe ")
        _T("   FROM VIMES.hms_treatment_record")
        _T("   LEFT JOIN hms_doc ON (hd_docno = htr_docno) ")
        _T("   WHERE htr_admitdate  <= TO_TIMESTAMP ('%s 06:29:59', ")
        _T("'YYYY/MM/DD HH24:MI:SS')")
        _T("   AND (htr_status       ='I'")
        _T("   OR (htr_status        ='T'")
        _T("   AND htr_dischargedate > TO_TIMESTAMP ('%s 06:29:59', ")
        _T("'YYYY/MM/DD HH24:MI:SS')))")
        _T(" AND (htr_deptid <>'B11' or ( htr_deptid='B11' and hd_object <> 9 ")
        _T(")) ")
        _T("   UNION ALL")
        _T("   SELECT htr_status, htr_deptid AS dept,")
        _T("     htr_outpatient  AS outpatient,")
        _T(" htr_docno, ")
        _T("    htr_admitdate, ")
        _T("    htr_dischargedate,   ")
        _T("     0 ,")
        _T("     1 AS nTang6,")
        _T("     CASE")
        _T("       WHEN hd_enddept='C1.1'  and coalesce(he_roomid,0) <> 150 ")
        _T("       AND htr_idx    =1")
        _T("       THEN 1")
        _T("       ELSE 0")
        _T("     END AS nTangC11,")
        _T("     CASE")
        _T("       WHEN hd_enddept='C1.2'")
        _T("       AND htr_idx    =1")
        _T("       THEN 1")
        _T("       ELSE 0")
        _T("     END AS nTangC12,")
        _T("     CASE")
        _T("       WHEN ( hd_enddept='C1.3' or  ( he_deptid='C1.1' and ")
        _T("he_roomid =150)  ) ")
        _T("       AND htr_idx    =1")
        _T("       THEN 1")
        _T("       ELSE 0")
        _T("     END AS nTangC13,")
        _T("     CASE")
        _T("       WHEN hd_enddept='AB'")
        _T("       AND htr_idx    =1")
        _T("       THEN 1")
        _T("       ELSE 0")
        _T("     END AS nTangAB,")
        _T("     CASE")
        _T("       WHEN hd_enddept='TYC'")
        _T("       AND htr_idx    =1")
        _T("       THEN 1")
        _T("       ELSE 0")
        _T("     END AS nTangTYC,")
        _T("     CASE")
        _T("       WHEN htr_idx >1")
        _T("       THEN 1")
        _T("       ELSE 0")
        _T("     END AS nCkden,")
        _T("     0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0")
        _T("   FROM VIMES.hms_treatment_record")
        _T("   LEFT JOIN hms_doc")
        _T("   ON (hd_docno= htr_docno)")
        _T("   LEFT JOIN hms_exam on (hd_docno = he_docno and hd_areceptidx = ")
        _T("he_receptidx) ")
        _T("   WHERE htr_admitdate BETWEEN TO_TIMESTAMP ('%s 06:30:00', ")
        _T("'YYYY/MM/DD HH24:MI:SS') AND TO_TIMESTAMP ('%s 16:59:59', ")
        _T("'YYYY/MM/DD HH24:MI:SS')")
        _T(" AND (htr_deptid <>'B11' or ( htr_deptid='B11' and hd_object <> 9 ")
        _T(")) ")
        _T(" UNION ALL")
        _T("   SELECT htr_status, htr_deptid AS dept,")
        _T("     htr_outpatient  AS outpatient,")
        _T(" htr_docno, ")
        _T("    htr_admitdate, ")
        _T("    htr_dischargedate,   ")
        _T("     0 ,")
        _T("     0,0,0,0,")
        _T("     0,0,0,")
        _T("     CASE")
        _T("       WHEN hcr_suggestion ='T'")
        _T("       AND hcr_result NOT IN ('7','5','6')")
        _T("       THEN 1")
        _T("       ELSE 0")
        _T("     END AS nRavien,")
        _T("     CASE")
        _T("       WHEN hcr_suggestion='T'")
        _T("       AND hcr_result     ='7'")
        _T("       THEN 1")
        _T("       ELSE 0")
        _T("     END AS nXinve,")
        _T("     CASE")
        _T("       WHEN hcr_suggestion='T'")
        _T("       AND hcr_result    IN ('5','6')")
        _T("       THEN 1")
        _T("       ELSE 0")
        _T("     END AS nTuVong,")
        _T("     CASE")
        _T("       WHEN htr_suggestion='M'")
        _T("       AND htr_tdeptid   IS NOT NULL")
        _T("       THEN 1")
        _T("       ELSE 0")
        _T("     END AS nChuyenkhoa,")
        _T("     CASE")
        _T("       WHEN hcr_suggestion='F'")
        _T("       THEN 1")
        _T("       ELSE 0")
        _T("     END AS nChuyenVien,")
        _T("     0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 ")
        _T("   FROM VIMES.hms_treatment_record")
        _T("   LEFT JOIN VIMES.hms_clinical_record")
        _T("   ON (hcr_docno   = htr_docno and htr_suggestion in ('T','F' )) ")
        _T("   LEFT JOIN hms_doc ON (hd_docno = htr_docno) ")
        _T("   WHERE htr_status='T'")
        _T("   AND htr_dischargedate BETWEEN TO_TIMESTAMP ('%s 06:30:00', ")
        _T("'YYYY/MM/DD HH24:MI:SS') AND TO_TIMESTAMP ('%s 16:59:59', ")
        _T("'YYYY/MM/DD HH24:MI:SS')")
        _T("   AND (htr_deptid <>'B11' or ( htr_deptid='B11' and hd_object <> ")
        _T("9 )) ")
        _T("   UNION ALL")
        _T("   SELECT htr_status, htr_deptid AS dept,")
        _T("     htr_outpatient  AS outpatient, ")
        _T("	htr_docno, ")
        _T("    htr_admitdate, ")
        _T("    htr_dischargedate,   ")
        _T("     0,0,0,0,0,0,0,0,")
        _T("     0 ,")
        _T("     0,0 ,")
        _T("     0 ,")
        _T("     0,")
        _T("     1 AS nQs17h,")
        _T("     0,")
        _T("     0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0")
        _T("   FROM VIMES.hms_treatment_record")
        _T("   LEFT JOIN hms_doc ON (hd_docno = htr_docno) ")
        _T("   WHERE htr_admitdate  <= TO_TIMESTAMP ('%s 16:59:59', ")
        _T("'YYYY/MM/DD HH24:MI:SS')")
        _T("   AND (htr_status       ='I'")
        _T("   OR (htr_status        ='T'")
        _T("   AND htr_dischargedate > TO_TIMESTAMP ('%s 16:59:59', ")
        _T("'YYYY/MM/DD HH24:MI:SS')))")
        _T(" AND (htr_deptid <>'B11' or ( htr_deptid='B11' and hd_object <> 9 ")
        _T(")) ")
        _T("   UNION ALL")
        _T("   SELECT htr_status,htr_deptid AS dept,")
        _T("     htr_outpatient  AS outpatient,")
        _T(" htr_docno, ")
        _T("    htr_admitdate, ")
        _T("    htr_dischargedate,   ")
        _T("     0 ,")
        _T("     0,")
        _T("     0 ,")
        _T("     0 ,")
        _T("     0 ,")
        _T("     0 ,")
        _T("     0 ,")
        _T("     0 ,")
        _T("     0,0,0,0,0,0,")
        _T("     CASE")
        _T("       WHEN hd_enddept='C1.1' and coalesce(he_receptidx,0) <> 150 ")
        _T("       AND htr_idx    =1")
        _T("       THEN 1")
        _T("       ELSE 0")
        _T("     END AS nTangC1117h,")
        _T("     CASE")
        _T("       WHEN hd_enddept='C1.2'")
        _T("       AND htr_idx    =1")
        _T("       THEN 1")
        _T("       ELSE 0")
        _T("     END AS nTangC1217h,")
        _T("     CASE")
        _T("       WHEN ( hd_enddept='C1.3' or  ( he_deptid='C1.1' and ")
        _T("he_roomid =150)  )  ")
        _T("       AND htr_idx    =1")
        _T("       THEN 1")
        _T("       ELSE 0")
        _T("     END AS nTangC1317h,")
        _T("     CASE")
        _T("       WHEN hd_enddept='AB'")
        _T("       AND htr_idx    =1")
        _T("       THEN 1")
        _T("       ELSE 0")
        _T("     END AS nTangAB17h,")
        _T("     CASE")
        _T("       WHEN hd_enddept='TYC'")
        _T("       AND htr_idx    =1")
        _T("       THEN 1")
        _T("       ELSE 0")
        _T("     END AS nTangTYC17h,")
        _T("     CASE")
        _T("       WHEN htr_idx >1")
        _T("       THEN 1")
        _T("       ELSE 0")
        _T("     END AS nckden17h,")
        _T("     0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 ")
        _T("   FROM VIMES.hms_treatment_record")
        _T("   LEFT JOIN hms_doc")
        _T("   ON (hd_docno= htr_docno)")
        _T("   LEFT JOIN hms_exam on (hd_docno = he_docno and hd_areceptidx = ")
        _T("he_receptidx) ")
        _T("   WHERE htr_admitdate BETWEEN TO_TIMESTAMP ('%s 17:00:00', ")
        _T("'YYYY/MM/DD HH24:MI:SS') AND TO_TIMESTAMP ('%s 06:29:59', ")
        _T("'YYYY/MM/DD HH24:MI:SS')")
        _T(" AND (htr_deptid <>'B11' or ( htr_deptid='B11' and hd_object <> 9 ")
        _T(")) ")
        _T("  UNION ALL")
        _T("   SELECT htr_status,htr_deptid AS dept,")
        _T("     htr_outpatient  AS outpatient,")
        _T("	htr_docno, ")
        _T("    htr_admitdate, ")
        _T("    htr_dischargedate,   ")
        _T("     0 ,")
        _T("     0,0,0,0,")
        _T("     0,0,0,0,0,")
        _T("     0,0,0,0,0,0,0,0,0,0,")
        _T("     CASE")
        _T("       WHEN hcr_suggestion ='T'")
        _T("       AND hcr_result NOT IN ('7','5','6')")
        _T("       THEN 1")
        _T("       ELSE 0")
        _T("     END AS nRavien17h,")
        _T("     CASE")
        _T("       WHEN hcr_suggestion='T'")
        _T("       AND hcr_result     ='7'")
        _T("       THEN 1")
        _T("       ELSE 0")
        _T("     END AS nXinve17h,")
        _T("     CASE")
        _T("       WHEN hcr_suggestion='T'")
        _T("       AND hcr_result    IN ('5','6')")
        _T("       THEN 1")
        _T("       ELSE 0")
        _T("     END AS nTuVong17h,")
        _T("     CASE")
        _T("       WHEN htr_suggestion='M'")
        _T("       AND htr_tdeptid   IS NOT NULL")
        _T("       THEN 1")
        _T("       ELSE 0")
        _T("     END AS nChuyenkhoa17h,")
        _T("     CASE")
        _T("       WHEN hcr_suggestion='F'")
        _T("       THEN 1")
        _T("       ELSE 0")
        _T("     END AS nChuyenVien17h,")
        _T("     0,0,0,0,0,0,0,0,0,0,0,0,0,0")
        _T("   FROM VIMES.hms_treatment_record")
        _T("   LEFT JOIN VIMES.hms_clinical_record")
        _T("   ON (hcr_docno   = htr_docno  and htr_suggestion in ('T','F') )")
        _T("   LEFT JOIN hms_doc ON (hd_docno = htr_docno) ")
        _T("   WHERE htr_status='T'")
        _T("   AND htr_dischargedate BETWEEN TO_TIMESTAMP ('%s 17:00:00', ")
        _T("'YYYY/MM/DD HH24:MI:SS') AND TO_TIMESTAMP ('%s 06:29:59', ")
        _T("'YYYY/MM/DD HH24:MI:SS')")
        _T(" AND (htr_deptid <>'B11' or ( htr_deptid='B11' and hd_object <> 9 ")
        _T(")) ")
        _T("   UNION ALL")
        _T("   SELECT htr_status,htr_deptid AS dept,")
        _T("     htr_outpatient  AS outpatient,")
        _T("	htr_docno, ")
        _T("    htr_admitdate, ")
        _T("    htr_dischargedate,   ")
        _T("     0,0,0,0,0,0,0,0,")
        _T("     0 ,")
        _T("     0,0 ,")
        _T("     0 ,")
        _T("     0,")
        _T("     0,0,0,0,0,0,0,0,0,0,0,0,")
        _T("     CASE")
        _T("       WHEN hd_object                   =11")
        _T("       AND hms_get_rank(hd_rank) IN (15,16,17,18,58)")
        _T("       THEN 1")
        _T("       ELSE 0")
        _T("     END AS bhqn1,")
        _T("     CASE")
        _T("       WHEN hd_object                   =11")
        _T("       AND hms_get_rank(hd_rank) IN (13,14,56,57,66)")
        _T("       THEN 1")
        _T("       ELSE 0")
        _T("     END AS bhqn2,")
        _T("     CASE")
        _T("       WHEN hd_object                  =11")
        _T("       AND ( hms_get_rank(hd_rank) <13   or hms_get_rank(hd_rank) ")
        _T(" between 50 and 55  or hms_get_rank(hd_rank)  between 59 and 64)  ")
        _T("       THEN 1")
        _T("       ELSE 0")
        _T("     END AS bhqn3,")
        _T("     CASE")
        _T("       WHEN hd_object=10")
        _T("       THEN 1")
        _T("       ELSE 0")
        _T("     END AS bhqd,")
        _T("     CASE")
        _T("       WHEN hd_object                   =2")
        _T("       AND hms_get_rank(hd_rank) IN (15,16,17,18,21,22,23,24)")
        _T("       THEN 1")
        _T("       ELSE 0")
        _T("     END AS bhqh1,")
        _T("     CASE")
        _T("       WHEN hd_object                   =2")
        _T("       AND hms_get_rank(hd_rank) IN (13,14,56,57,66)")
        _T("       THEN 1")
        _T("       ELSE 0")
        _T("     END AS bhqh2,")
        _T("     CASE")
        _T("       WHEN hd_object                  =2")
        _T("       AND ( hms_get_rank(hd_rank) <13   or hms_get_rank(hd_rank) ")
        _T(" between 50 and 55  or hms_get_rank(hd_rank)  between 59 and 64  ")
        _T("or hms_get_rank(hd_rank) =19 ) ")
        _T("       THEN 1")
        _T("       ELSE 0")
        _T("     END AS bhqh3,")
        _T("     CASE")
        _T("       WHEN hd_object=5")
        _T("       THEN 1")
        _T("       ELSE 0")
        _T("     END AS bhtn,")
        _T("     CASE")
        _T("       WHEN hd_object=9")
        _T("       THEN 1")
        _T("       ELSE 0")
        _T("     END AS bhte6t,")
        _T("     CASE")
        _T("       WHEN hd_object =4 ")
        _T("       THEN 1")
        _T("       ELSE 0")
        _T("     END AS bhkhac,")
        _T("     CASE")
        _T("       WHEN hd_object IN 8")
        _T("       THEN 1")
        _T("       ELSE 0")
        _T("     END AS ban,")
        _T("     CASE")
        _T("       WHEN hd_object=7")
        _T("       THEN 1")
        _T("       ELSE 0")
        _T("     END AS dv,")
        _T("     1   AS nQSck, ")
        _T("     CASE")
        _T("       WHEN hd_object =12 ")
        _T("       THEN 1")
        _T("       ELSE 0")
        _T("     END AS bhnothe")
        _T("   FROM VIMES.hms_treatment_record")
        _T("   LEFT JOIN hms_doc")
        _T("   ON (hd_docno          = htr_docno)")
        _T("   WHERE htr_admitdate  <= TO_TIMESTAMP ('%s 06:29:59', ")
        _T("'YYYY/MM/DD HH24:MI:SS')")
        _T("   AND (htr_status       ='I'")
        _T("   OR (htr_status        ='T'")
        _T("   AND htr_dischargedate > TO_TIMESTAMP ('%s 06:29:59', ")
        _T("'YYYY/MM/DD HH24:MI:SS')))")
        _T(" AND (htr_deptid <>'B11' or ( htr_deptid='B11' and hd_object <> 9 ")
        _T(")) ")
        _T("   ) tbl")
        _T(" LEFT JOIN sys_dept")
        _T(" ON (dept                 = sd_id)")
        _T(" WHERE 1=1 %s  and SD_ISACTIVE='Y' and sd_id not in ('A11','A15') ")
        _T(" GROUP BY sd_id_alias,")
        _T("   sd_index,htr_docno,htr_admitdate, htr_dischargedate,htr_status ")
        _T(" ORDER BY sd_id_alias, sd_index,")
        _T("   dept,htr_docno "),
        m_szFromDate, m_szFromDate, m_szFromDate, m_szFromDate, m_szFromDate,
        m_szFromDate, m_szFromDate, m_szFromDate, m_szFromDate, szToDate,
        m_szFromDate, szToDate, szToDate, szToDate, szWhere);
_tprintf(_T("%s"),szSQL);


	return szSQL;
}

void CHMSAdmitDischargeOnDept::OnCaptureSelect() {
	CMainFrame* pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szOption;
	int nRet = 0;
	JSONVALUE jop;
	jop[_T("outpatient")] = m_bOutpatient;
	jop.ToString(szOption);
	nRet = SaveLog(GetStringQuery(), szOption);
	m_szReport_id = _T("RPM_QUAN_SO_RA_VAO_EX1");
	nRet += SaveLog(GetStringQuery(TONG_HOP_KHOI));
	m_szReport_id = _T("RPM_QUAN_SO_RA_VAO_EX2");
	nRet += SaveLog(GetStringQuery(TONG_HOP_TUONG));
	m_szReport_id = _T("RPM_QUAN_SO_RA_VAO_EX3");
	nRet += SaveLog(GetStringQuery(TONG_HOP_MO_V2));

    if (nRet > 0) {
		ShowMessageBox(_T("Saved!"));
    } else if (nRet == 0) {
		ShowMessageBox(_T("Đã có dữ liệu lưu trữ!"));
	}
	m_szReport_id = _T("RPM_QUAN_SO_RA_VAO_EX3_CT");
	nRet = SaveLog(GetStringQuery(TONG_HOP_MO_V2_CT));
_tprintf(_T("\nRPM_QUAN_SO_RA_VAO_EX3_CT: %d"), nRet);
	m_szReport_id = _T("RPM_QUAN_SO_RA_VAO");
}

int CHMSAdmitDischargeOnDept::SaveLog(CString szQuery, CString szOption) {
	CMainFrame* pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL = szQuery, szData;
	long nLimit = 32767;
	rs.ExecSQL(szSQL);
    if (rs.IsEOF()) {
		return 0;
	}
	JSONVALUE jo, ja, jop;
    while (!rs.IsEOF()) {
        for (int i = 0; i < rs.GetFieldCount(); i++) {
			jo[rs.GetFieldName(i)] = rs.GetValue(i);
		}
		ja.Push(jo);
		rs.MoveNext();
	}
	ja.ToString(szData);
_tprintf(_T("\nja: %s"), szData);
_tprintf(_T("\noption: %s"), szOption);
	//szSQL.Format(_T("HMS_REPORT_SNAP_CREATE('%s', '%s', '%s', '%s')"),
    //				pMF->GetCurrentUser(), m_szReport_id, szData,
    //szOption);
    if (szData.GetLength() > nLimit) {
		CString szLob_id;
		szLob_id = OnCreateLob(szData);
        if (!szLob_id.IsEmpty()) {
            szSQL.Format(
                _T("HMS_REPORT_SNAP_CREATE_V3('%s', '%s', to_date('%s', ")
                _T("'yyyy/mm/dd'), '%s', '%s')"),
                pMF->GetCurrentUser(), m_szReport_id, m_szFromDate, szLob_id,
                szOption);
        } else {
			szSQL.Empty();
		}
    } else {
        szSQL.Format(
            _T("HMS_REPORT_SNAP_CREATE_V2('%s', '%s', to_date('%s', ")
            _T("'yyyy/mm/dd'), '%s', '%s')"),
            pMF->GetCurrentUser(), m_szReport_id, m_szFromDate, szData,
            szOption);
	}
	int nRet = str2int(pMF->ExecDML(szSQL));
	return nRet;
}

CString CHMSAdmitDischargeOnDept::OnCreateLob(CString szData) {
	CMainFrame* pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL, szData_chunk;
	CString szId;
	szId.Empty();
	long nLimit = 32767, nPos = nLimit, nLength = szData.GetLength();
    if (szData.GetLength() <= nLimit) {
		return szId;
	}
    while (nPos < nLength) {
		szData.Insert(nPos, _T("|"));
		nPos += nLimit;
	}
	CStringToken dat(szData, _T("|"));
    for (int i = 0; i < dat.GetSize(); i++) {
		dat.GetAt(i, szData_chunk);
		szSQL.Format(_T("sys_lob_create('%s', '%s')"), szId, szData_chunk);
		szId = pMF->ExecDML(szSQL);
	_tprintf(_T("\nszId: %s"), szId);
	}
	return szId;
}

void CHMSAdmitDischargeOnDept::OnExportLog() {
	CHMSReportSnapDlg dlg(this, m_szReport_id);
    if (dlg.DoModal() == IDOK) {
		ExportLog(dlg.m_szSnap_id, dlg.m_szReport_date);
	}	
}

void CHMSAdmitDischargeOnDept::ExportLog(CString szSnap_id,
                                         CString szReport_date) {
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
    CRecord rs(&pMF->m_db), rsx(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szWhere, szFileName, szFilePath;
	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();
	int nRow =0, nCol = 0;
	CExcel xls;
	
    if (!xls.Load(_T("Exports\\DANH SACH VAO RA CHUYEN VIEN.xls")))
        AfxMessageBox(_T("Load fail!"));
	xls.SetWorksheet(0);
    tmpStr.Format(_T("BÁO CÁO QUÂN SỐ NGÀY  %s THÁNG %s NĂM %s"),
                  szReport_date.Left(2), szReport_date.Mid(3, 2),
                  szReport_date.Right(4));
    xls.SetCellText(0, 0, tmpStr, FMT_TEXT | FMT_CENTER | FMT_WRAPING, true,
                    10);

	CellFormat hf(&xls);
	CellFormat tf(&xls);
	CellFormat hfb(&xls);
	hf.SetCellStyle(FMT_INTEGER|FMT_BORDER);
	tf.SetCellStyle(FMT_TEXT|FMT_BORDER);
	hfb.SetCellStyle(FMT_INTEGER | FMT_BORDER);
	hfb.SetFontSize(9);
	hfb.SetBold(true);
    szSQL.Format(
        _T(" SELECT To_char(hrs_createddate, 'hh24:mi') AS log_time,")
        _T("        To_char(hrs_createddate, 'dd/mm/yyyy') AS log_date")
        _T(" FROM   hms_report_snap")
        _T(" WHERE  hrs_id = '%s' "),
        szSnap_id);

	rs.ExecSQL(szSQL);
    tmpStr.Format(_T("Xuất log vào: %s ngày %s"), rs.GetValue(_T("log_time")),
                  rs.GetValue(_T("log_date")));
	xls.SetCellText(24, 1, tmpStr, FMT_TEXT, true);

    szSQL.Format(
        _T("select * ")
        _T(" from v_rpm_quan_so_ra_vao")
        _T(" left join sys_dept on (sd_id = jv_dept)")
        _T(" LEFT JOIN sys_dept_index ON (sd_id = sdi_deptid)")
        _T(" where snap_id = '%s'")
        _T(" order by sdi_index, jv_dept"),
        szSnap_id);
	rs.ExecSQL(szSQL);
	nRow = 6;
	nCol = 0;
	int nTotal[51];
    for (int i = 0; i < 51; i++) {
		nTotal[i]=0;
	}
	CString szDept;
	int nKhoiA=0, nKhoiB=0;
	int nDoiTuongA=0, nDeptCategory = 0;
	while(!rs.IsEOF()){
		rs.GetValue(_T("JV_dept_alias"), szDept);
        /*
        if (szDept == _T("PTTYC")) {
            xls.SetCellText(nCol + 0, nRow, szDept, FMT_TEXT | FMT_BORDER, true);

			rs.GetValue(_T("JV_sd_avaiable_bed"), tmpStr);
			//nTotal[1] += ToInt(tmpStr);
			xls.SetCellText(nCol+1, nRow, tmpStr, &tf);
			rs.GetValue(_T("JV_sd_planned_bed"), tmpStr);
			//nTotal[2] += ToInt(tmpStr);
			xls.SetCellText(nCol+2, nRow, tmpStr, &tf);

			rs.GetValue(_T("JV_oldpatient"), tmpStr);
			//nTotal[3] += ToInt(tmpStr);
            xls.SetCellText(nCol + 3, nRow, tmpStr, &hfb);

			rs.GetValue(_T("JV_nTangC11"), tmpStr);
			//nTotal[4] += ToInt(tmpStr);
			xls.SetCellText(nCol+4, nRow, tmpStr, &hf);
			rs.GetValue(_T("JV_nTangAB"), tmpStr);
			//nTotal[5] += ToInt(tmpStr);
			xls.SetCellText(nCol+5, nRow, tmpStr, &hf);
			rs.GetValue(_T("JV_nTangTYC"), tmpStr);
			//nTotal[6] += ToInt(tmpStr);
			xls.SetCellText(nCol+6, nRow, tmpStr, &hf);
			rs.GetValue(_T("JV_nTangC12"), tmpStr);
			//nTotal[7] += ToInt(tmpStr);
			xls.SetCellText(nCol+7, nRow, tmpStr, &hf);
			rs.GetValue(_T("JV_nTangC13"), tmpStr);
			//nTotal[8] += ToInt(tmpStr);
			xls.SetCellText(nCol+8, nRow, tmpStr, &hf);
			rs.GetValue(_T("JV_nCkden"), tmpStr);
			//nTotal[9] += ToInt(tmpStr);
			xls.SetCellText(nCol+9, nRow, tmpStr, &hf);
			rs.GetValue(_T("JV_nRavien"), tmpStr);
			//nTotal[10] += ToInt(tmpStr);
			xls.SetCellText(nCol+10, nRow, tmpStr, &hf);
			rs.GetValue(_T("JV_nXinve"), tmpStr);
			//nTotal[11] += ToInt(tmpStr);
			xls.SetCellText(nCol+11, nRow, tmpStr, &hf);
			rs.GetValue(_T("JV_nTuVong"), tmpStr);
			//nTotal[12] += ToInt(tmpStr);
			xls.SetCellText(nCol+12, nRow, tmpStr, &hf);
			rs.GetValue(_T("JV_nChuyenkhoa"), tmpStr);
			//nTotal[13] += ToInt(tmpStr);
			xls.SetCellText(nCol+13, nRow, tmpStr, &hf);
			rs.GetValue(_T("JV_nChuyenVien"), tmpStr);
			//nTotal[14] += ToInt(tmpStr);
			xls.SetCellText(nCol+14, nRow, tmpStr, &hf);
			rs.GetValue(_T("JV_nQs17h"), tmpStr);
			//nTotal[15] += ToInt(tmpStr);
            xls.SetCellText(nCol + 15, nRow, tmpStr, &hfb);
			rs.GetValue(_T("JV_nTangC1117h"), tmpStr);
			//nTotal[16] += ToInt(tmpStr);
			xls.SetCellText(nCol+16, nRow, tmpStr, &hf);
			rs.GetValue(_T("JV_nTangAB17h"), tmpStr);
			//nTotal[17] += ToInt(tmpStr);
			xls.SetCellText(nCol+17, nRow, tmpStr, &hf);
			rs.GetValue(_T("JV_nTangTYC17h"), tmpStr);
			//nTotal[18] += ToInt(tmpStr);
			xls.SetCellText(nCol+18, nRow, tmpStr, &hf);
			rs.GetValue(_T("JV_nTangC1217h"), tmpStr);
			//nTotal[19] += ToInt(tmpStr);
			xls.SetCellText(nCol+19, nRow, tmpStr, &hf);
			rs.GetValue(_T("JV_nTangC1317h"), tmpStr);
			//nTotal[20] += ToInt(tmpStr);
			xls.SetCellText(nCol+20, nRow, tmpStr, &hf);
			rs.GetValue(_T("JV_nCkden17h"), tmpStr);
			//nTotal[21] += ToInt(tmpStr);
			xls.SetCellText(nCol+21, nRow, tmpStr, &hf);
			rs.GetValue(_T("JV_nRavien17h"), tmpStr);
			//nTotal[22] += ToInt(tmpStr);
			xls.SetCellText(nCol+22, nRow, tmpStr, &hf);
			rs.GetValue(_T("JV_nXinve17h"), tmpStr);
			//nTotal[23] += ToInt(tmpStr);
			xls.SetCellText(nCol+23, nRow, tmpStr, &hf);
			rs.GetValue(_T("JV_nTuVong17h"), tmpStr);
			//nTotal[24] += ToInt(tmpStr);
			xls.SetCellText(nCol+24, nRow, tmpStr, &hf);
			rs.GetValue(_T("JV_nChuyenkhoa17h"), tmpStr);
			//nTotal[25] += ToInt(tmpStr);
			xls.SetCellText(nCol+25, nRow, tmpStr, &hf);
			rs.GetValue(_T("JV_nChuyenVien17h"), tmpStr);
			//nTotal[26] += ToInt(tmpStr);
			xls.SetCellText(nCol+26, nRow, tmpStr, &hf);
			rs.GetValue(_T("JV_bhqn1"), tmpStr);
			//nTotal[27] += ToInt(tmpStr);
			nDoiTuongA += ToInt(tmpStr);
			xls.SetCellText(nCol+27, nRow, tmpStr, &hf);
			rs.GetValue(_T("JV_bhqn2"), tmpStr);
			//nTotal[28] += ToInt(tmpStr);
			nDoiTuongA += ToInt(tmpStr);
			xls.SetCellText(nCol+28, nRow, tmpStr, &hf);
			rs.GetValue(_T("JV_bhqn3"), tmpStr);
			//nTotal[29] += ToInt(tmpStr);
			nDoiTuongA += ToInt(tmpStr);
			xls.SetCellText(nCol+29, nRow, tmpStr, &hf);
			rs.GetValue(_T("JV_bhqd"), tmpStr);
			//nTotal[30] += ToInt(tmpStr);
			nDoiTuongA += ToInt(tmpStr);
			xls.SetCellText(nCol+30, nRow, tmpStr, &hf);
			rs.GetValue(_T("JV_bhqh1"), tmpStr);
			//nTotal[31] += ToInt(tmpStr);
			nDoiTuongA += ToInt(tmpStr);
			xls.SetCellText(nCol+31, nRow, tmpStr, &hf);
			rs.GetValue(_T("JV_bhqh2"), tmpStr);
			//nTotal[32] += ToInt(tmpStr);
			nDoiTuongA += ToInt(tmpStr);
			xls.SetCellText(nCol+32, nRow, tmpStr, &hf);
			rs.GetValue(_T("JV_bhqh3"), tmpStr);
			//nTotal[33] += ToInt(tmpStr);
			nDoiTuongA += ToInt(tmpStr);
			xls.SetCellText(nCol+33, nRow, tmpStr, &hf);
			rs.GetValue(_T("JV_bhtn"), tmpStr);
			//nTotal[34] += ToInt(tmpStr);
			nDoiTuongA += ToInt(tmpStr);
			xls.SetCellText(nCol+34, nRow, tmpStr, &hf);
			rs.GetValue(_T("JV_bhte6t"), tmpStr);
			//nTotal[35] += ToInt(tmpStr);
			xls.SetCellText(nCol+35, nRow, tmpStr, &hf);
			rs.GetValue(_T("JV_bhkhac"),tmpStr);
			//nTotal[36] += ToInt(tmpStr);
			xls.SetCellText(nCol+36, nRow, tmpStr, &hf);

			rs.GetValue(_T("JV_bhnothe"),tmpStr);
			//nTotal[37] += ToInt(tmpStr);
			xls.SetCellText(nCol+37, nRow, tmpStr, &hf);


			rs.GetValue(_T("JV_ban"), tmpStr);
			//nTotal[38] += ToInt(tmpStr);
			nDoiTuongA += ToInt(tmpStr);
			xls.SetCellText(nCol+38, nRow, tmpStr, &hf);
			rs.GetValue(_T("JV_dv"),tmpStr);
			//nTotal[39] += ToInt(tmpStr);
			xls.SetCellText(nCol+39, nRow, tmpStr, &hf);
			rs.GetValue(_T("JV_nQSck"), tmpStr);
			//nTotal[40] += ToInt(tmpStr);
			
			//if(szDept.Left(1) == _T("A") && szDept != _T("A2-B")  )
			//	nKhoiA += ToInt(tmpStr);
			//else
			//	nKhoiB += ToInt(tmpStr);
			
            xls.SetCellText(nCol + 40, nRow, tmpStr, FMT_INTEGER | FMT_BORDER,
                            true);
			nRow++;
			rs.MoveNext();
			continue;
		}
        */
        xls.SetCellText(nCol + 0, nRow, szDept, FMT_TEXT | FMT_BORDER, true);

		rs.GetValue(_T("JV_sd_avaiable_bed"), tmpStr);
		nTotal[1] += ToInt(tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, &tf);
		rs.GetValue(_T("JV_sd_planned_bed"), tmpStr);
		nTotal[2] += ToInt(tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, &tf);

		rs.GetValue(_T("JV_oldpatient"), tmpStr);
		nTotal[3] += ToInt(tmpStr);
        xls.SetCellText(nCol + 3, nRow, tmpStr, &hfb);

		rs.GetValue(_T("JV_nTangC11"), tmpStr);
		nTotal[4] += ToInt(tmpStr);
		xls.SetCellText(nCol+4, nRow, tmpStr, &hf);
		rs.GetValue(_T("JV_nTangAB"), tmpStr);
		nTotal[5] += ToInt(tmpStr);
		xls.SetCellText(nCol+5, nRow, tmpStr, &hf);
		rs.GetValue(_T("JV_nTangTYC"), tmpStr);
		nTotal[6] += ToInt(tmpStr);
		xls.SetCellText(nCol+6, nRow, tmpStr, &hf);
		rs.GetValue(_T("JV_nTangC12"), tmpStr);
		nTotal[7] += ToInt(tmpStr);
		xls.SetCellText(nCol+7, nRow, tmpStr, &hf);
		rs.GetValue(_T("JV_nTangC13"), tmpStr);
		nTotal[8] += ToInt(tmpStr);
		xls.SetCellText(nCol+8, nRow, tmpStr, &hf);

        rs.GetValue(_T("JV_nTangKBA11"), tmpStr);
        nTotal[9] += ToInt(tmpStr);
        xls.SetCellText(nCol + 9, nRow, tmpStr, &hf);
        rs.GetValue(_T("JV_nTangKBA16"), tmpStr);
        nTotal[10] += ToInt(tmpStr);
        xls.SetCellText(nCol + 10, nRow, tmpStr, &hf);
        rs.GetValue(_T("JV_nTangKBA4"), tmpStr);
        nTotal[11] += ToInt(tmpStr);
        xls.SetCellText(nCol + 11, nRow, tmpStr, &hf);
        rs.GetValue(_T("JV_nTangTTTM"), tmpStr);
        nTotal[12] += ToInt(tmpStr);
        xls.SetCellText(nCol + 12, nRow, tmpStr, &hf);
        rs.GetValue(_T("JV_nTangTTTVDT"), tmpStr);
        nTotal[13] += ToInt(tmpStr);
        xls.SetCellText(nCol + 13, nRow, tmpStr, &hf);

		rs.GetValue(_T("JV_nCkden"), tmpStr);
		nTotal[14] += ToInt(tmpStr);
		xls.SetCellText(nCol+14, nRow, tmpStr, &hf);
		rs.GetValue(_T("JV_nRavien"), tmpStr);
		nTotal[15] += ToInt(tmpStr);
		xls.SetCellText(nCol+15, nRow, tmpStr, &hf);
		rs.GetValue(_T("JV_nXinve"), tmpStr);
		nTotal[16] += ToInt(tmpStr);
		xls.SetCellText(nCol+16, nRow, tmpStr, &hf);
		rs.GetValue(_T("JV_nTuVong"), tmpStr);
		nTotal[17] += ToInt(tmpStr);
		xls.SetCellText(nCol+17, nRow, tmpStr, &hf);
		rs.GetValue(_T("JV_nChuyenkhoa"), tmpStr);
		nTotal[18] += ToInt(tmpStr);
		xls.SetCellText(nCol+18, nRow, tmpStr, &hf);
		rs.GetValue(_T("JV_nChuyenVien"), tmpStr);
		nTotal[19] += ToInt(tmpStr);
		xls.SetCellText(nCol+19, nRow, tmpStr, &hf);
		rs.GetValue(_T("JV_nQs17h"), tmpStr);
		nTotal[20] += ToInt(tmpStr);
        xls.SetCellText(nCol + 20, nRow, tmpStr, &hfb);
		rs.GetValue(_T("JV_nTangC1117h"), tmpStr);
		nTotal[21] += ToInt(tmpStr);
		xls.SetCellText(nCol+21, nRow, tmpStr, &hf);
		rs.GetValue(_T("JV_nTangAB17h"), tmpStr);
		nTotal[22] += ToInt(tmpStr);
		xls.SetCellText(nCol+22, nRow, tmpStr, &hf);
		rs.GetValue(_T("JV_nTangTYC17h"), tmpStr);
		nTotal[23] += ToInt(tmpStr);
		xls.SetCellText(nCol+23, nRow, tmpStr, &hf);
		rs.GetValue(_T("JV_nTangC1217h"), tmpStr);
		nTotal[24] += ToInt(tmpStr);
		xls.SetCellText(nCol+24, nRow, tmpStr, &hf);
		rs.GetValue(_T("JV_nTangC1317h"), tmpStr);
		nTotal[25] += ToInt(tmpStr);
		xls.SetCellText(nCol+25, nRow, tmpStr, &hf);

        rs.GetValue(_T("JV_nTangKBA1117h"), tmpStr);
        nTotal[26] += ToInt(tmpStr);
        xls.SetCellText(nCol + 26, nRow, tmpStr, &hf);
        rs.GetValue(_T("JV_nTangKBA1617h"), tmpStr);
        nTotal[27] += ToInt(tmpStr);
        xls.SetCellText(nCol + 27, nRow, tmpStr, &hf);
        rs.GetValue(_T("JV_nTangKBA417h"), tmpStr);
        nTotal[28] += ToInt(tmpStr);
        xls.SetCellText(nCol + 28, nRow, tmpStr, &hf);
        rs.GetValue(_T("JV_nTangTTTM17h"), tmpStr);
        nTotal[29] += ToInt(tmpStr);
        xls.SetCellText(nCol + 29, nRow, tmpStr, &hf);
        rs.GetValue(_T("JV_nTangTTTVDT17h"), tmpStr);
        nTotal[30] += ToInt(tmpStr);
        xls.SetCellText(nCol + 30, nRow, tmpStr, &hf);

		rs.GetValue(_T("JV_nCkden17h"), tmpStr);
		nTotal[31] += ToInt(tmpStr);
		xls.SetCellText(nCol+31, nRow, tmpStr, &hf);
		rs.GetValue(_T("JV_nRavien17h"), tmpStr);
		nTotal[32] += ToInt(tmpStr);
		xls.SetCellText(nCol+32, nRow, tmpStr, &hf);
		rs.GetValue(_T("JV_nXinve17h"), tmpStr);
		nTotal[33] += ToInt(tmpStr);
		xls.SetCellText(nCol+33, nRow, tmpStr, &hf);
		rs.GetValue(_T("JV_nTuVong17h"), tmpStr);
		nTotal[34] += ToInt(tmpStr);
		xls.SetCellText(nCol+34, nRow, tmpStr, &hf);
		rs.GetValue(_T("JV_nChuyenkhoa17h"), tmpStr);
		nTotal[35] += ToInt(tmpStr);
		xls.SetCellText(nCol+35, nRow, tmpStr, &hf);
		rs.GetValue(_T("JV_nChuyenVien17h"), tmpStr);
		nTotal[36] += ToInt(tmpStr);
		xls.SetCellText(nCol+36, nRow, tmpStr, &hf);
		rs.GetValue(_T("JV_bhqn1"), tmpStr);
		nTotal[37] += ToInt(tmpStr);
		nDoiTuongA += ToInt(tmpStr);
		xls.SetCellText(nCol+37, nRow, tmpStr, &hf);
		rs.GetValue(_T("JV_bhqn2"), tmpStr);
		nTotal[38] += ToInt(tmpStr);
		nDoiTuongA += ToInt(tmpStr);
		xls.SetCellText(nCol+38, nRow, tmpStr, &hf);
		rs.GetValue(_T("JV_bhqn3"), tmpStr);
		nTotal[39] += ToInt(tmpStr);
		nDoiTuongA += ToInt(tmpStr);
		xls.SetCellText(nCol+39, nRow, tmpStr, &hf);
		rs.GetValue(_T("JV_bhqd"), tmpStr);
		nTotal[40] += ToInt(tmpStr);
		nDoiTuongA += ToInt(tmpStr);
		xls.SetCellText(nCol+40, nRow, tmpStr, &hf);
		rs.GetValue(_T("JV_bhqh1"), tmpStr);
		nTotal[41] += ToInt(tmpStr);
		nDoiTuongA += ToInt(tmpStr);
		xls.SetCellText(nCol+41, nRow, tmpStr, &hf);
		rs.GetValue(_T("JV_bhqh2"), tmpStr);
		nTotal[42] += ToInt(tmpStr);
		nDoiTuongA += ToInt(tmpStr);
		xls.SetCellText(nCol+42, nRow, tmpStr, &hf);
		rs.GetValue(_T("JV_bhqh3"), tmpStr);
		nTotal[43] += ToInt(tmpStr);
		nDoiTuongA += ToInt(tmpStr);
		xls.SetCellText(nCol+43, nRow, tmpStr, &hf);
		rs.GetValue(_T("JV_bhtn"), tmpStr);
		nTotal[44] += ToInt(tmpStr);
		nDoiTuongA += ToInt(tmpStr);
		xls.SetCellText(nCol+44, nRow, tmpStr, &hf);
		rs.GetValue(_T("JV_bhte6t"), tmpStr);
		nTotal[45] += ToInt(tmpStr);
		xls.SetCellText(nCol+45, nRow, tmpStr, &hf);
		rs.GetValue(_T("JV_bhkhac"),tmpStr);
		nTotal[46] += ToInt(tmpStr);
		xls.SetCellText(nCol+46, nRow, tmpStr, &hf);

		rs.GetValue(_T("JV_bhnothe"),tmpStr);
		nTotal[47] += ToInt(tmpStr);
		xls.SetCellText(nCol+47, nRow, tmpStr, &hf);


		rs.GetValue(_T("JV_ban"), tmpStr);
		nTotal[48] += ToInt(tmpStr);
		nDoiTuongA += ToInt(tmpStr);
		xls.SetCellText(nCol+48, nRow, tmpStr, &hf);
		rs.GetValue(_T("JV_dv"),tmpStr);
		nTotal[49] += ToInt(tmpStr);
		xls.SetCellText(nCol+49, nRow, tmpStr, &hf);
		rs.GetValue(_T("JV_nQSck"), tmpStr);
		nTotal[40] += ToInt(tmpStr);
		rs.GetValue(_T("sd_category"), nDeptCategory);
		//if(szDept.Left(1) == _T("A") && szDept != _T("A2-B")  )
        if (nDeptCategory == 0) nKhoiA += ToInt(tmpStr);
        if (nDeptCategory == 1) nKhoiB += ToInt(tmpStr);
        xls.SetCellText(nCol + 50, nRow, tmpStr, FMT_INTEGER | FMT_BORDER,
                        true);
		nRow++;
		rs.MoveNext();
	}
    for (int i = 0; i < 51; i++) {
		tmpStr.Format(_T("%d"),nTotal[i]);
        //if (i == 40)
            xls.SetCellText(i, nRow, tmpStr, FMT_INTEGER | FMT_BORDER, true, 8);
        //else
         //   xls.SetCellText(i, nRow, tmpStr, &hf);
	}
	xls.SetCellText(0, nRow, _T("Tổng:"), FMT_TEXT, true);
	double nTyle=0.00;
	nTyle= (double)(nDoiTuongA*100/double(nTotal[40]));
	nRow++;
    tmpStr.Format(
        _T("Cộng đối tượng A nằm điều trị tại viện: %d  Tỷ lệ %s:  %0.2f "),
        nDoiTuongA, _T("%"), nTyle);
	xls.SetCellText(0, nRow++, tmpStr,FMT_TEXT, false);
    tmpStr.Format(
        _T(" Tổng số bệnh nhân khối Nội : %d     Tổng số bệnh nhân khối ")
        _T("ngoại: %d    Tổng số bệnh nhân : %d "),
        nKhoiA, nKhoiB, nKhoiB + nKhoiA);
	xls.SetCellText(0, nRow++, tmpStr,FMT_TEXT, true);
	ExportEx1(&xls, nRow, szSnap_id);
    // xls.SetCellText(0, nRow, _T("Số Bệnh nhân phẫu thuật:  {PT cấp cứu:
    // (Ngày:  - Đêm: )};  Tổng số máy thở:  {Đang sử dụng:  ; Còn lại sử dụng
    // được: ; Hỏng: } ") ,FMT_TEXT, false);
	ExportEx3(&xls, nRow, szSnap_id);
    // xls.SetCellText(0, nRow, _T("Tổng số máu huyết tương còn trong viện: A:
    // /đơn vị,B:  /đơn vị, O:  /đơn vị, AB:  /đơn vị;   Tổng số cáng:   ; Đang
    // sử dụng:  ; Còn lại:  ") ,FMT_TEXT, false);
    szSQL.Format(
        _T(" SELECT *")
        _T("   FROM ldson_bcqs_mau")
        _T("  WHERE Trunc (ngaytruc) = To_date ('%s', 'dd/mm/yyyy')"),
        szReport_date.Left(10));
    rsx.ExecSQL(szSQL);
    tmpStr.Format(
        _T("Tổng số máu huyết tương còn trong viện: A: %s đơn vị,B: %s đơn ")
        _T("vị, ")
        _T(" O: %sđơn vị, AB: %s đơn vị;"),
        rsx.GetValue(_T("slnhoma")), rsx.GetValue(_T("slnhomb")),
        rsx.GetValue(_T("slnhomo")), rsx.GetValue(_T("slnhomab")));
    xls.SetCellText(0, nRow, tmpStr, FMT_TEXT, true);
    nRow++;
    szSQL.Format(
        _T(" SELECT *")
        _T("   FROM ldson_bcqs_maytho")
        _T("  WHERE Trunc (ngaytruc) = To_date ('%s', 'dd/mm/yyyy')"),
        szReport_date.Left(10));
    rsx.ExecSQL(szSQL);
    tmpStr.Format(
        _T("Tổng số máy thở: %s {Đang sử dụng: %s ; ")
        _T(" Còn lại sử dụng được: %s; Hỏng: %s} "),
        rsx.GetValue(_T("tsmaytho")), rsx.GetValue(_T("dangsudung")),
        rsx.GetValue(_T("consudung")), rsx.GetValue(_T("hong")));
	szTemp.Format(_T("Báo cáo tình hình máy TBYT trọng điểm hỏng: %s"), 
		rsx.GetValue(_T("mayhong")));
    szSQL.Format(
        _T(" SELECT *")
        _T("   FROM ldson_bcqs_cang")
        _T("  WHERE Trunc (ngaytruc) = To_date ('%s', 'dd/mm/yyyy')"),
        szReport_date.Left(10));
    rsx.ExecSQL(szSQL);
    tmpStr.AppendFormat(
        _T(" Tổng số cáng: %s ; Đang sử dụng: %s ; Còn lại: %s "),
        rsx.GetValue(_T("tscang")), rsx.GetValue(_T("dangsudung")),
        rsx.GetValue(_T("conlai")));
    xls.SetCellText(0, nRow, tmpStr, FMT_TEXT, true);

	nRow++;
	xls.MergeCell(0, nRow, 51, nRow);
	xls.SetCellText(0, nRow, szTemp, FMT_TEXT | FMT_WRAPING, false);
	xls.SetColumnWidth(m_nNoDataCol + 1, GetRangeWidth(xls, 0, 50));
	xls.SetCellText(m_nNoDataCol + 1, nRow, szTemp, FMT_TEXT | FMT_WRAPING);
	nRow++;
	ExportEx2(&xls, nRow, szSnap_id);
	szFileName = _T("QUAN_SO_RA_VAO");
	szFilePath.Format(_T("Exports\\%s.xls"), szFileName);
	xls.SetColHidden(m_nNoDataCol, true);
	xls.SetColHidden(m_nNoDataCol + 1, true);
	xls.Save(szFilePath);
}

void CHMSAdmitDischargeOnDept::ExportLog_V2(CString szSnap_id) {
	CMainFrame* pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szFilePath, szFileName, szFieldName;
    szSQL.Format(
        _T("select * ")
        _T(" from v_rpm_quan_so_ra_vao")
        _T(" where snap_id = '%s'"),
        szSnap_id);
	/*
	szSQL.Format(_T("select * ") \
				_T(" from hms_report_snapline ") \
				_T(" where hrsl_snap_id = '%s'"), szSnap_id);
				*/
	rs.ExecSQL(szSQL);
    if (rs.IsEOF()) {
		return;
	}
	CExcel xls;
    if (!xls.Load(_T("Exports\\DANH SACH VAO RA CHUYEN VIEN.xls"))) {
        ShowMessageBox(
            _T("Thiếu file Exports\\DANH SACH VAO RA CHUYEN VIEN.xls"));
		return;
	}
	xls.SetWorksheet(0);
	int nCol = 0, nRow = 6;
	JSONVALUE jv;
	CString tmpStr;
    while (!rs.IsEOF()) {
		nCol = 0;
        for (int i = 0; i < rs.GetFieldCount(); i++) {
			szFieldName = rs.GetFieldName(i);
            _tprintf(_T("\nszFieldName: %s|Find: %d|Val: %s"), szFieldName,
                     szFieldName.Find(_T("JV_")), rs.GetValue(i));
            if (szFieldName.Find(_T("JV_")) == 0) {
				xls.SetCellText(nCol, nRow, rs.GetValue(i));
				nCol++;
            } else {
				continue;
			}			
		}
		/*
		rs.GetValue(_T("hrsl_data"), tmpStr);
		jv.Parse(tmpStr);
		_tprintf(_T("\ntmpStr: %s"), tmpStr);
		_tprintf(_T("\nsize: %d"), jv.Size());		
		for (int i = 0; i < jv.Size(); i++)
		{
			JSONVALUE j;
			j = jv.At(i);
			j.ToString(tmpStr);
			_tprintf(_T("\nj: %s"), tmpStr);
		}
		*/
		nRow++;
		rs.MoveNext();
	}
	ExportEx1(&xls, nRow, szSnap_id);
    xls.SetCellText(
        0, nRow,
        _T("Số Bệnh nhân phẫu thuật:  {PT cấp cứu:  (Ngày:  - Đêm: )};  Tổng ")
        _T("số máy thở:  {Đang sử dụng:  ; Còn lại sử dụng được: ; Hỏng: } "),
        FMT_TEXT, false);
    nRow++;
    xls.SetCellText(0, nRow,
                    _T("Tổng số máu huyết tương còn trong viện: A: /đơn vị,B: ")
                    _T(" /đơn vị, O:  /đơn vị, AB:  /đơn vị;   Tổng số cáng:  ")
                    _T(" ; Đang sử dụng:  ; Còn lại:  "),
                    FMT_TEXT, false);
	nRow++;
	ExportEx2(&xls, nRow, szSnap_id);
	szFileName = _T("QUAN_SO_RA_VAO");
	szFilePath.Format(_T("Exports\\%s.xls"), szFileName);
	xls.Save(szFilePath);
}

void CHMSAdmitDischargeOnDept::ExportEx1(CExcel *pXls, int &nRow,
                                         CString szSnap_id) {
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr;
    szSQL.Format(
        _T("select * ")
        _T(" from v_rpm_quan_so_ra_vao_ex1 ")
        _T(" where report_date = ")
        _T("	(select hrs_report_date ")
        _T("	from hms_report_snap ")
        _T("	where hrs_id = '%s')"),
        szSnap_id);
	rs.ExecSQL(szSQL);
    if (rs.IsEOF()) {
		return;
	}
    tmpStr.Format(
        _T("Dự kiến bệnh nhân ra viện ngày : %s : Khối nội :  %s       Khối ")
        _T("ngoại:  %s    "),
        CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy),
        rs.GetValue(_T("JV_NNOI")), rs.GetValue(_T("JV_NNGOAI")));
	pXls->SetCellText(0, nRow, tmpStr,FMT_TEXT, false);
	nRow++;	
}
void CHMSAdmitDischargeOnDept::ExportEx2(CExcel *pXls, int &nRow,
                                         CString szSnap_id) {
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr;
    szSQL.Format(
        _T("select * ")
        _T(" from v_rpm_quan_so_ra_vao_ex2 ")
        _T(" where report_date = ")
        _T("	(select hrs_report_date ")
        _T("	from hms_report_snap ")
        _T("	where hrs_id = '%s')"),
        szSnap_id);
	rs.ExecSQL(szSQL);
    if (rs.IsEOF()) {
		return;
	}	
    pXls->SetCellText(
        0, nRow, _T("Danh sách bệnh nhân cấp tướng đang nằm điều trị tại viện"),
        FMT_TEXT, false);
	int nCount =1;
    while (!rs.IsEOF()) {
		nRow++;
		tmpStr.Format(_T("%d"), nCount++);
		pXls->SetCellText(0, nRow, tmpStr ,FMT_TEXT, false);
		rs.GetValue(_T("JV_HOVATEN"), tmpStr);
		pXls->MergeCell(1,nRow,4,nRow);
		pXls->SetCellText(1, nRow, tmpStr ,FMT_TEXT, false);

		pXls->MergeCell(5,nRow,6,nRow);
		rs.GetValue(_T("JV_AGE"), tmpStr);
		pXls->SetCellText(5, nRow, tmpStr ,FMT_TEXT, false);
		
		pXls->MergeCell(7,nRow,11,nRow);
		rs.GetValue(_T("JV_CAPBAC"), tmpStr);
		pXls->SetCellText(7, nRow, tmpStr ,FMT_TEXT, false);
		

		pXls->MergeCell(12,nRow,17,nRow);
		rs.GetValue(_T("JV_HP_WORKPLACE"), tmpStr);
		pXls->SetCellText(12, nRow, tmpStr ,FMT_TEXT, false);
		
		pXls->MergeCell(18,nRow,29,nRow);
		rs.GetValue(_T("JV_HD_DIAGNOSTIC"), tmpStr);
		pXls->SetCellText(18, nRow, tmpStr ,FMT_TEXT | FMT_WRAPING, false);
		SetRowHeight(pXls, m_nNoDataCol, nRow, tmpStr);

		pXls->MergeCell(30,nRow,36,nRow);
		rs.GetValue(_T("JV_DOITUONG"), tmpStr);
		pXls->SetCellText(30, nRow, tmpStr ,FMT_TEXT, false);
		
		pXls->MergeCell(37,nRow,40,nRow);
		rs.GetValue(_T("JV_HTR_DEPTID"), tmpStr);
		pXls->SetCellText(37, nRow, tmpStr ,FMT_TEXT, false);

		rs.MoveNext();
	}
}

void CHMSAdmitDischargeOnDept::ExportEx3(CExcel *pXls, int &nRow,
                                         CString szSnap_id) {
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr;
    szSQL.Format(
        _T("select * ")
        _T(" from v_rpm_quan_so_ra_vao_ex3 ")
        _T(" where report_date = ")
        _T("	(select hrs_report_date ")
        _T("	from hms_report_snap ")
        _T("	where hrs_id = '%s')"),
        szSnap_id);
	rs.ExecSQL(szSQL);
    if (rs.IsEOF()) {
		return;
	}
	int nMergePos = 0, nMergeQty = 0;
	CellFormat cf(pXls);
	cf.SetColor(XLCOLOR_RED);
	cf.SetBold(true);
	
	//Ticket 2131
    tmpStr.Format(_T("Tổng số bệnh nhân phẫu thuật: %s "),
                  rs.GetValue(_T("jv_tong_so")));
	pXls->SetCellText(0, nRow, tmpStr, FMT_TEXT, true);
	nRow++;

    tmpStr.Format(_T(" Phẫu thuật thường: %s "),
                  rs.GetValue(_T("jv_phauthuat_thuong")));
	pXls->SetCellText(0, nRow, tmpStr, FMT_TEXT, true);	
	nRow++;

    tmpStr.Format(
        _T(" Phẫu thuật TYC: %s (TYC từ C1.1C: %s; TYC trong viện: %s) "),
        rs.GetValue(_T("jv_tyc_total")), rs.GetValue(_T("jv_tyc_c11c")),
				rs.GetValue(_T("jv_tyc_b5")));
	pXls->SetCellText(0, nRow, tmpStr, FMT_TEXT, true);
	nRow++;

    tmpStr.Format(
        _T(" Phẫu thuật cấp cứu: %s(Cấp cứu trong giờ: %s; Cấp cứu ngoài giờ: ")
        _T("%s)"),
        rs.GetValue(_T("jv_so_cap_cuu")), rs.GetValue(_T("jv_so_ngay")),
				rs.GetValue(_T("jv_so_dem")));
	pXls->SetCellText(0, nRow, tmpStr, FMT_TEXT, true);
	nRow++;

    tmpStr.Format(
        _T(" Phẫu thuật ngoại trú: %s (Ngoại trú TYC: %s; Thường: %s) "),
        rs.GetValue(_T("jv_ngt_toanvien")), rs.GetValue(_T("jv_ngt_tyc")),
				rs.GetValue(_T("jv_ngt_b5")));			

	pXls->SetCellText(0, nRow, tmpStr, FMT_TEXT, true);	
	nRow++;
	
    tmpStr.Format(
        _T(" Phân loại: Loại đặc biệt: %s(Tỷ lệ%%: %s); ")
        _T(" Loại I: %s(Tỷ lệ %%:%s) ")
        _T(" Loại II: %s(Tỷ lệ%%: %s)")
        _T(" Loại III: %s(Tỷ lệ %%: %s)")
        _T(" Loại khác: %s(Tỷ lệ %%: %s)"),
        rs.GetValue(_T("jv_loai_db")), rs.GetValue(_T("jv_ty_le_db")),
				rs.GetValue(_T("jv_loai_1")), rs.GetValue(_T("jv_ty_le_l1")),
				rs.GetValue(_T("jv_loai_2")), rs.GetValue(_T("jv_ty_le_l2")),
				rs.GetValue(_T("jv_loai_3")), rs.GetValue(_T("jv_ty_le_l3")),
				rs.GetValue(_T("jv_loai_khac")), rs.GetValue(_T("jv_ty_le_lk")));
	pXls->SetCellText(0, nRow, tmpStr, FMT_TEXT);
	nRow++;
}