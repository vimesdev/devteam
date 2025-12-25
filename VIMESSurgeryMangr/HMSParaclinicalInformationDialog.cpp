#include "StdAfx.h"
#include ".\hmsparaclinicalinformationdialog.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
    ((CHMSParaclinicalInformationDialog *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
    ((CHMSParaclinicalInformationDialog *)pWnd)->OnFromDateSetfocus();} */
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
    ((CHMSParaclinicalInformationDialog *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd)
{
    return ((CHMSParaclinicalInformationDialog *)pWnd)->OnFromDateCheckValue();
}
/*static void _OnToDateChangeFnc(CWnd *pWnd){
    ((CHMSParaclinicalInformationDialog *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
    ((CHMSParaclinicalInformationDialog *)pWnd)->OnToDateSetfocus();} */
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
    ((CHMSParaclinicalInformationDialog *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd)
{
    return ((CHMSParaclinicalInformationDialog *)pWnd)->OnToDateCheckValue();
}
static void _OnPatientListSelectChangeFnc(CWnd *pWnd, int nOldItemSel,
                                          int nNewItemSel)
{
    ((CHMSParaclinicalInformationDialog *)pWnd)
        ->OnPatientListSelectChange(nOldItemSel, nNewItemSel);
}
static void _OnPatientListSelendokFnc(CWnd *pWnd)
{
    ((CHMSParaclinicalInformationDialog *)pWnd)->OnPatientListSelendok();
}
/*static void _OnPatientListSetfocusFnc(CWnd *pWnd){
    ((CHMSParaclinicalInformationDialog *)pWnd)->OnPatientListKillfocus();
}*/
/*static void _OnPatientListKillfocusFnc(CWnd *pWnd){
    ((CHMSParaclinicalInformationDialog *)pWnd)->OnPatientListKillfocus();
}*/
static long _OnPatientListLoadDataFnc(CWnd *pWnd)
{
    return ((CHMSParaclinicalInformationDialog *)pWnd)->OnPatientListLoadData();
}
/*static void _OnPatientListAddNewFnc(CWnd *pWnd){
    ((CHMSParaclinicalInformationDialog *)pWnd)->OnPatientListAddNew();
}*/
static long _OnListLoadDataFnc(CWnd *pWnd)
{
    return ((CHMSParaclinicalInformationDialog *)pWnd)->OnListLoadData();
}
static void _OnListDblClickFnc(CWnd *pWnd)
{
    ((CHMSParaclinicalInformationDialog *)pWnd)->OnListDblClick();
}
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem)
{
    ((CHMSParaclinicalInformationDialog *)pWnd)
        ->OnListSelectChange(nOldItem, nNewItem);
}
static int _OnListDeleteItemFnc(CWnd *pWnd)
{
    return ((CHMSParaclinicalInformationDialog *)pWnd)->OnListDeleteItem();
}
CHMSParaclinicalInformationDialog::CHMSParaclinicalInformationDialog(CWnd *pParent, int nMode, long nDocNo, int nRefIdx, long nOrderID):
	CGuiDialog(pParent)
{
    m_nDocumentNo = nDocNo;
    m_nRefIdx = 1;
    m_nOrderID = nOrderID;
    m_nDlgWidth = 1029;
    m_nDlgHeight = 1000;
	m_nX = 0;
	m_nY = 0;
}

CHMSParaclinicalInformationDialog::~CHMSParaclinicalInformationDialog(void)
{
     
}


void CHMSParaclinicalInformationDialog::OnCreateComponents(){
    m_wndParaclinicalInformation.Create(this, _T("Thông tin tìm kiếm"), 4, 5, 1014, 198);
	m_wndFromDateLabel.Create(this, _T("From Date"), 373, 30, 493, 55);
	m_wndFromDate.Create(this,498, 30, 633, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 639, 30, 759, 55);
	m_wndToDate.Create(this,764, 30, 899, 55); 
	m_wndPatientNoLabel.Create(this, _T("Số Hồ Sơ"), 10, 29, 65, 54);
	m_wndPatientList.Create(this,70, 29, 343, 54); 
	//m_wndList.Create(this,10, 60, 1010, 194);
	m_wndOrder.Create(this);
	m_wndOrder.OnInitDialog();
}
#include "MainFrm.h"
void CHMSParaclinicalInformationDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();


    m_wndPatientList.InsertColumn(0, _T("ID"), CFMT_TEXT, 0);
    m_wndPatientList.InsertColumn(1, _T("Số HS"), CFMT_TEXT, 80);
    m_wndPatientList.InsertColumn(2, _T("Ngày vào"), CFMT_TEXT, 120);
    m_wndPatientList.InsertColumn(3, _T("Ngày ra"), CFMT_TEXT, 120);
    m_wndPatientList.InsertColumn(4, _T("Ngày vào"), CFMT_TEXT, 0);
    m_wndPatientList.InsertColumn(5, _T("Ngày ra"), CFMT_TEXT, 0);
    m_wndPatientList.InsertColumn(6, _T("Khoa"), CFMT_TEXT, 80);
    m_wndPatientList.InsertColumn(7, _T("Lượt điều trị"), CFMT_TEXT, 80);
    m_wndPatientList.InsertColumn(8, _T("Trạng thái"), CFMT_TEXT, 80);

	m_wndOrder.RefreshData();
}

void CHMSParaclinicalInformationDialog::OnSetWindowEvents(){
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    MoveWindow(0, 0, 1010, 700);
    m_wndOrder.MoveWindow(0, 60, 1010, 600);
    /* return;
	
	CRect rect;
	pMF->GetClientRect(&rect);
	pMF->ClientToScreen(&rect);
	rect.left += 405;
	rect.top += 40;
	rect.right = rect.left+610;
	rect.bottom = rect.top + 610;
	MoveWindow(rect);*/

    m_szFromDate = m_szToDate = pMF->GetSysDate();
    m_szFromDate += _T(" 00:00:00");
    m_szToDate += _T(" 23:59:59");

    // m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
    // m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
    // m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
    m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
    // m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
    // m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
    // m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
    m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
    m_wndPatientList.SetEvent(WE_SELENDOK, _OnPatientListSelendokFnc);
    // m_wndPatientList.SetEvent(WE_SETFOCUS, _OnPatientListSetfocusFnc);
    // m_wndPatientList.SetEvent(WE_KILLFOCUS, _OnPatientListKillfocusFnc);
    m_wndPatientList.SetEvent(WE_SELCHANGE, _OnPatientListSelectChangeFnc);
    m_wndPatientList.SetEvent(WE_LOADDATA, _OnPatientListLoadDataFnc);
    // m_wndPatientList.SetEvent(WE_ADDNEW, _OnPatientListAddNewFnc);
    //m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
    //m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
    //m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
    //m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);

    //OnListLoadData();
    OnPatientListLoadData();
}

void CHMSParaclinicalInformationDialog::OnDoDataExchange(CDataExchange *pDX)
{
    DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
    DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
    DDX_TextEx(pDX, m_wndPatientList.GetDlgCtrlID(), m_szPatientListKey);
}

/*void CHMSParaclinicalInformationDialog::OnFromDateChange(){

} */
/*void CHMSParaclinicalInformationDialog::OnFromDateSetfocus(){

} */
/*void CHMSParaclinicalInformationDialog::OnFromDateKillfocus(){

} */
int CHMSParaclinicalInformationDialog::OnFromDateCheckValue() { return 0; }
/*void CHMSParaclinicalInformationDialog::OnToDateChange(){

} */
/*void CHMSParaclinicalInformationDialog::OnToDateSetfocus(){

} */
/*void CHMSParaclinicalInformationDialog::OnToDateKillfocus(){

} */
int CHMSParaclinicalInformationDialog::OnToDateCheckValue() { return 0; }
void CHMSParaclinicalInformationDialog::OnPatientListSelectChange(
    int nOldItemSel, int nNewItemSel)
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
}
void CHMSParaclinicalInformationDialog::OnPatientListSelendok()
{
    CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
    UpdateData(TRUE);
    m_nDocumentNo = str2long(m_wndPatientList.GetCurrent(1)); // DOCNO
    m_nTreattime = str2int(m_wndPatientList.GetCurrent(7));   // TREATTIME
    m_szDocStatus = m_wndPatientList.GetCurrent(8);           // STATUS

    if (!m_szDocStatus.IsEmpty())
    {
        m_szFromDate = m_wndPatientList.GetCurrent(4) + _T(" 00:00");
        m_szToDate = m_wndPatientList.GetCurrent(5) + _T(" 23:59");
    }
    else
    {
        CString szToday = pMF->GetSysDate();
        m_szFromDate = szToday + _T(" 00:00");
        m_szToDate = szToday + _T(" 23:59");
    }
    m_bFromToDate = TRUE;
    UpdateData(FALSE);
    OnListLoadData();
    pMF->m_nDocumentNo = m_nDocumentNo;
    m_wndOrder.RefreshData();
}
/*void CHMSParaclinicalInformationDialog::OnPatientListSetfocus(){

}*/
/*void CHMSParaclinicalInformationDialog::OnPatientListKillfocus(){

}*/
long CHMSParaclinicalInformationDialog::OnPatientListLoadData()
{
    CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
    CRecord rs(&pMF->m_db);
    CRecord rs1(&pMF->m_db);
    CString szSQL, szWhere, szGetPNoQuery;
    long nPatientNo;

    szGetPNoQuery.Format(
        _T("SELECT DISTINCT hd_patientno FROM hms_doc WHERE hd_docno = %ld "),
        m_nDocumentNo);
    rs1.ExecSQL(szGetPNoQuery);
    nPatientNo = ToLong(rs1.GetValue(_T("hd_patientno")));

    if (m_wndPatientList.IsSearchKey() && !m_szPatientListKey.IsEmpty())
    {
        szWhere.Format(_T(" and hd_docno='%s' "), m_szPatientListKey);
    };
    m_wndPatientList.DeleteAllItems();
    int nCount = 0;

    szSQL.Format(
        _T(" SELECT docno, docno||'-'||treattime as docnokey, ngayvao, ")
        _T("ngayra, ngayvao2, ngayra2, treattime, khoa, docstatus ")
        _T(" FROM")
        _T(" (")
        _T(" SELECT ")
        _T(" hd_docno as docno,")
        _T(" TO_CHAR(hd_admitdate, 'DD/MM/YYYY') as ngayvao,")
        _T(" TO_CHAR(hd_enddate, 'DD/MM/YYYY') as ngayra,")
        _T(" TO_CHAR(hd_admitdate, 'YYYY/MM/DD') as ngayvao2,")
        _T(" TO_CHAR(hd_enddate, 'YYYY/MM/DD') as ngayra2,")
        _T(" 0 as treattime,")
        _T(" hd_enddept as khoa, cast('T' as nvarchar2(1)) as docstatus")
        _T(" FROM hms_doc")
        _T(" LEFT JOIN hms_clinical_record")
        _T(" ON (hd_docno      = hcr_docno)")
        _T(" WHERE hd_patientno = %ld")
        _T(" and NVL(hcr_docno, 0) = 0")
        _T(" UNION ALL")
        _T(" SELECT ")
        _T(" htr_docno as docno,")
        _T(" to_char(HTR_ADMITDATE, 'DD/MM/YYYY') as ngayvao,")
        _T(" to_char(HTR_DISCHARGEDATE, 'DD/MM/YYYY') as ngayra,")
        _T(" to_char(HTR_ADMITDATE, 'YYYY/MM/DD') as ngayvao2,")
        _T(" to_char(HTR_DISCHARGEDATE, 'YYYY/MM/DD') as ngayra2,")
        _T(" htr_treattime as treattime,")
        _T(" htr_deptid as khoa, htr_status as docstatus")
        _T(" FROM hms_treatment_record")
        _T(" WHERE htr_patientno = %ld")
        _T(" and htr_docno > 0")
        _T(" )")
        _T(" WHERE 1=1")
        _T(" AND ( EXISTS")
        _T("   (SELECT 1 FROM hms_testorder t WHERE t.hpc_docno = docno and ")
        _T("t.hpc_treattime = treattime")
        _T("   )")
        _T(" OR EXISTS")
        _T("   (SELECT 1 FROM hms_pacsorder p WHERE p.hpc_docno = docno and ")
        _T("p.hpc_treattime = treattime")
        _T("   ) )")
        _T(" ORDER BY docno DESC, treattime desc"),
        nPatientNo, nPatientNo);

    nCount = rs.ExecSQL(szSQL);

    while (!rs.IsEOF())
    {
        m_wndPatientList.AddItems(
            rs.GetValue(_T("docnokey")), rs.GetValue(_T("docno")),
            rs.GetValue(_T("ngayvao")), rs.GetValue(_T("ngayra")),
            rs.GetValue(_T("ngayvao2")), rs.GetValue(_T("ngayra2")),
            rs.GetValue(_T("khoa")), rs.GetValue(_T("treattime")),
            rs.GetValue(_T("docstatus")), NULL);
        rs.MoveNext();
    }
    return nCount;
}
/*void CHMSParaclinicalInformationDialog::OnPatientListAddNew(){
    CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

} */
void CHMSParaclinicalInformationDialog::OnListDblClick() {}
void CHMSParaclinicalInformationDialog::OnListSelectChange(int nOldItem,
                                                           int nNewItem)
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
}
int CHMSParaclinicalInformationDialog::OnListDeleteItem()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    return 0;
}
long CHMSParaclinicalInformationDialog::OnListLoadData()
{
    return 0;
    CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
    UpdateData(TRUE);
    CRecord rs(&pMF->m_db);
    CRecord rsl(&pMF->m_db);
    CString szSQL, tmpStr, szWhere, szCheck, szWhereCLS, szWhereCDHA;
    int nItem = 0, nIndex = 0;
    long nOID;
    m_wndList.BeginLoad();

    if (m_bFromToDate == TRUE)
    {
        szWhere.AppendFormat(
            _T(" AND hpc_orderdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD ")
            _T("HH24:MI:SS')")
            _T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"),
            m_szFromDate, m_szToDate);
    }

    if (m_bCLSTheoMau)
    {
        szWhereCLS.AppendFormat(
            _T(" AND hpcl_itemid IN(")
            _T(" 'B1G0000770', 'B1G0011548', 'B1G0002289', 'B1G0011549', ")
            _T("'B1G0002290', 'B1G0000748', 'B1G0000752', 'B1G0000756', ")
            _T("'B1G0000758', 'B1G0012997', 'B1G0000762', 'B1G0000765',")
            _T(" 'B1G0000767', 'B1G0000768', 'B1G0000769', 'B1G0000771', ")
            _T("'B1G0000772', 'B1G0000781', 'B1G0000782', 'B1G0000784', ")
            _T("'B1G0015232', 'B1G0000786', 'B1G0015233', 'B1G0000788',")
            _T(" 'B1G0000790', 'B1G0015235', 'B1G0000791', 'B1G0000792', ")
            _T("'B1G0000793', 'B1G0000794', 'B1G0000795', 'B1G0015241', ")
            _T("'B1G0011532', 'B1G0011533', 'B1G0011534', 'B1G0011535',")
            _T(" 'B1G0011536', 'B1G0011537', 'B1G0011538', 'B1G0011539', ")
            _T("'B1G0011540', 'B1G0011541', 'B1G0011542', 'B1G0011543', ")
            _T("'B1G0015480', 'B1G0015481', 'B1G0015482',")
            _T(" 'B110010839', 'B110002200', 'B110002126',")
            _T(" 'B110010840', 'B110002201', 'B110002127',")
            _T(" 'B110010841', 'B110002202', 'B110002128',")
            _T(" 'B110010826', 'B110002199', 'B110002125',")
            _T(" 'B110010827', 'B110002212', 'B110002138',")
            _T(" 'B110010828', 'B110002213', 'B110002139',")
            _T(" 'B110010849', 'B110002210', 'B110002136',")
            _T(" 'B12009696', 'B120000213',")
            _T(" 'B12009748', 'B120000217',")
            _T(" 'B12009677', 'B120000208',")
            _T(" 'B120011391', 'B120000236',")
            _T(" 'B120011390', 'B120000238',")
            _T(" 'B12009698', 'B120000233',")
            _T(" 'B12009659', 'B120000568',")
            _T(" 'B12009726', 'B120000584',")
            _T(" 'B12009647', 'B120000575',")
            _T(" 'B140002613', 'B140012703', 'B140012704', 'B140002161', ")
            _T("'B140002160', 'B140002166', 'B140011685',")
            _T(" 'B140002919', 'B140000125', 'B140000117', 'B140012718', ")
            _T("'B140012719', 'B140012725', 'B140015374',")
            _T(" 'B140012716', 'B140000090', 'B140000085', 'B140012998',")
            _T(" 'B110000411', 'B110012743', 'B110002499',")
            _T(" 'B110002939', 'B11002965', 'B110015679', 'B110012738', ")
            _T("'B110003001', 'B110002672', 'B110012733',")
            _T(" 'B110002490', 'B110012730', 'B110002974', 'B110002971', ")
            _T("'B110015513', 'B110015530', 'B110015523', 'B110015517', ")
            _T("'B110015520', 'B110015527', 'B110002929', 'B110002957', ")
            _T("'B110002926', 'B110002932',")
            _T(" 'B12009650', 'B120000576',")
            _T(" 'B140002164', 'B140012894',")
            _T(" 'B150011406', 'B150015336',")
            _T(" 'B111020156', ")
            _T("'B111020157','B111020159','B111020160','B111020161','")
            _T("B140020354','B140019373'")
            _T(" ,'B140020353','B140019375')"));

        szWhereCDHA.AppendFormat(
            _T(" AND hpcl_itemid IN(")
            _T(" 'B330012740', 'B330012796', 'B330000153', 'B330000336',")
            _T(" 'B320002183', 'B320010423', 'B320010422',")
            _T(" 'B210000196', 'B210010763',")
            _T(" 'B320002253', 'B320010389'")
            _T(" )"));
    }

    if (m_bCLSTheoCTM)
    {
        szWhereCLS.AppendFormat(
            _T(" AND hpcl_itemid IN(")
            _T(" 'B110010826', 'B110002199', 'B110002125',")
            _T(" 'B110010839', 'B110002200', 'B110002126',")
            _T(" 'B110010849', 'B110002210', 'B110002136',")
            _T(" 'B140002613', 'B140012703', 'B140012704', 'B140002161', ")
            _T("'B140002160', 'B140002166', 'B140011685',")
            _T(" 'B12009696', 'B120000213',")
            _T(" 'B12009748', 'B120000217',")
            _T(" 'B12009677', 'B120000208',")
            _T(" 'B120011391', 'B120000236',")
            _T(" 'B120011390', 'B120000238',")
            _T(" 'B110002490', 'B110012730', 'B110002974', 'B110002971', ")
            _T("'B110015513', 'B110015530', 'B110015523', 'B110015517', ")
            _T("'B110015520', 'B110015527', 'B110002929', 'B110002957', ")
            _T("'B110002926', 'B110002932',")
            _T(" 'B110002939', 'B11002965', 'B110015679', 'B110012738', ")
            _T("'B110003001', 'B110002672', 'B110012733',")
            _T(" 'B110000411', 'B11009554', 'B110012743', 'B110002499',")
            _T(" 'B140002919', 'B140000125', 'B140000117', 'B140012718', ")
            _T("'B140012719', 'B140012725', 'B140015374',")
            _T(" 'B140012716', 'B140000090', 'B140000085', ")
            _T("'B140012998','B140020354',")
            _T(" 'B140019373','B140020353','B140019375')"));

        szWhereCDHA.AppendFormat(
            _T(" AND (SUBSTR(hpcl_itemid, 1, 3) IN(")
            _T(" 'B22') OR hpcl_itemid IN(")
            _T(" 'B330012740', 'B330012796', 'B330000153', 'B330000336',")
            _T(" 'B320002183', 'B320010423', 'B320010422'")
            _T(" ))"));
    }

    // Xet nghiem
    szSQL.Format(
        _T(" SELECT hpc_orderid,")
        _T("   hpc_groupid,")
        _T("   TRIM(hfg_name || '     -     ' || TO_CHAR(hpc_orderdate, ")
        _T("'DD/MM/YYYY HH24:MI:SS')) as hpc_groupname, hpc_type ")
        _T(" FROM ( SELECT hpc_docno, hpc_orderid, hpc_groupid, hpc_refidx, ")
        _T("10000 AS hpc_type, hpc_orderdate FROM hms_testorder ")
        _T(" UNION ALL ")
        _T(" SELECT hpc_docno, hpc_orderid, hpc_groupid, hpc_refidx, 20000, ")
        _T("hpc_orderdate AS hpc_type FROM hms_pacsorder ) ")
        _T("   ,hms_fee_group")
        _T(" WHERE hpc_docno  = %ld ")
        _T(" AND hpc_groupid  = hfg_id %s")
        _T(" ORDER BY hfg_index2,")
        _T("   hfg_index, hpc_orderid"),
        m_nDocumentNo, szWhere);
    //_T(" AND hpc_refidx = %d ")

    rs.ExecSQL(szSQL);

    CString szGroupName;
    int nType = 0;

    nIndex = 1;
    while (!rs.IsEOF())
    {
        rs.GetValue(_T("hpc_orderid"), nOID);
        rs.GetValue(_T("hpc_type"), nType);
        if (nType == 10000)
        {
            szSQL.Format(
                _T(" SELECT hpcl_orderlineid AS orderline_id,")
                _T("   hpcl_itemid           AS itemid,")
                _T("   hfl_name              AS testname,")
                _T("   hfl_unit              AS unit,")
                _T("   hpcl_qty              AS qty,") //_T("   hpcl_result           AS testresult,") \

                _T("  DECODE(hfl_groupid,")
                _T("   'B1G00', GET_PATIENT_BLOOD_GROUP_V2(hpcl_docno),")
                _T("   hpcl_result) AS testresult,")

                _T("   hfl_index1            AS normindex,")
                _T("   hpcl_note             AS testnote")
                _T(" FROM hms_testorderline")
                _T(" LEFT JOIN hms_fee_list")
                _T(" ON(hfl_feeid = hpcl_itemid)")
                _T(" WHERE hpcl_orderid = %ld and hpcl_status = 'T' ")
                _T(" %s")
                _T(" ORDER BY hpcl_orderlineid"),
                nOID, szWhereCLS);
            rsl.ExecSQL(szSQL);
            //_msg(_T("Nhom mau = %s"), szSQL);
            while (!rsl.IsEOF())
            {
                m_wndList.AddItems(
                    int2str(nIndex++), int2str(m_nDocumentNo),
                    rs.GetValue(_T("hpc_groupname")),
                    rsl.GetValue(_T("testname")), rsl.GetValue(_T("unit")),
                    rsl.GetValue(_T("qty")), rsl.GetValue(_T("testresult")),
                    rsl.GetValue(_T("orderline_id")), int2str(nType),
                    rsl.GetValue(_T("itemid")), NULL);
                rsl.MoveNext();
            }
        }
        else
        {
            szSQL.Format(_T(" SELECT hpcl_orderlineid AS orderline_id,")
                         _T("   hpcl_itemid           AS itemid,")
                         _T("   hfl_name              AS testname,")
                         _T("   hfl_unit              AS unit,")
                         _T("   hpcl_qty              AS qty,")
                         _T("   tbl.hpr_desc          AS testresult,")
                         _T("   hfl_index1            AS normindex,")
                         _T("   hpcl_note             AS testnote")
                         _T(" FROM hms_pacsorderline")
                         _T(" LEFT JOIN")
                         _T(" ( SELECT * FROM hms_pacs_result WHERE ")
                         _T("lower(trim(hpr_name))='conclusion'")
                         _T(" ) tbl")
                         _T(" ON(tbl.hpr_orderid=hpcl_orderid")
                         _T(" AND tbl.hpr_itemid=hpcl_itemid)")
                         _T(" LEFT JOIN hms_fee_list")
                         _T(" ON(hfl_feeid = hpcl_itemid)")
                         _T(" WHERE hpcl_orderid = %ld and hpcl_status = 'T' ")
                         _T(" %s")
                         _T(" ORDER BY hpcl_orderlineid"),
                         nOID, szWhereCDHA);

            rsl.ExecSQL(szSQL);
            while (!rsl.IsEOF())
            {
                m_wndList.AddItems(
                    int2str(nIndex++), int2str(m_nDocumentNo),
                    rs.GetValue(_T("hpc_groupname")),
                    rsl.GetValue(_T("testname")), rsl.GetValue(_T("unit")),
                    rsl.GetValue(_T("qty")), rsl.GetValue(_T("testresult")),
                    rsl.GetValue(_T("orderline_id")), int2str(nType),
                    rsl.GetValue(_T("itemid")), NULL);
                rsl.MoveNext();
            }
        }
        rs.MoveNext();
    }

    szSQL.Format(_T("SELECT hbo_orderlinecls FROM hms_beforeopt")
                 _T(" WHERE hbo_docno = %ld")
                 _T(" AND hbo_orderid = %ld"),
                 m_nDocumentNo, m_nOrderID);

    rs.ExecSQL(szSQL);

    while (!rs.IsEOF())
    {
        rs.GetValue(_T("hbo_orderlinecls"), tmpStr);
        for (int i = 0; i < m_wndList.GetItemCount(); i++)
        {
            if (tmpStr == m_wndList.GetItemText(i, 7))
                m_wndList.SetCheck(i, TRUE);
        }
        rs.MoveNext();
    }
    m_wndList.EndLoad();
    //ToKeepNewResult();
    return 0;
}
void CHMSParaclinicalInformationDialog::OnResizeLayout()
{
    AddResize(&m_wndOrder, 100, 100);
}