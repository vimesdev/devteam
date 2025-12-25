#include "RegimenOrder.h"
#include "MainFrm.h"
/*static void _OnCreatedbyChangeFnc(CWnd *pWnd){
	((CRegimenOrder *)pWnd)->OnCreatedbyChange();
} */
/*static void _OnCreatedbySetfocusFnc(CWnd *pWnd){
	((CRegimenOrder *)pWnd)->OnCreatedbySetfocus();} */ 
/*static void _OnCreatedbyKillfocusFnc(CWnd *pWnd){
	((CRegimenOrder *)pWnd)->OnCreatedbyKillfocus();
} */
static int _OnCreatedbyCheckValueFnc(CWnd *pWnd){
	return ((CRegimenOrder *)pWnd)->OnCreatedbyCheckValue();
} 
/*static void _OnCreateddateChangeFnc(CWnd *pWnd){
	((CRegimenOrder *)pWnd)->OnCreateddateChange();
} */
/*static void _OnCreateddateSetfocusFnc(CWnd *pWnd){
	((CRegimenOrder *)pWnd)->OnCreateddateSetfocus();} */ 
/*static void _OnCreateddateKillfocusFnc(CWnd *pWnd){
	((CRegimenOrder *)pWnd)->OnCreateddateKillfocus();
} */
static int _OnCreateddateCheckValueFnc(CWnd *pWnd){
	return ((CRegimenOrder *)pWnd)->OnCreateddateCheckValue();
} 
/*static void _OnIdChangeFnc(CWnd *pWnd){
	((CRegimenOrder *)pWnd)->OnIdChange();
} */
/*static void _OnIdSetfocusFnc(CWnd *pWnd){
	((CRegimenOrder *)pWnd)->OnIdSetfocus();} */ 
/*static void _OnIdKillfocusFnc(CWnd *pWnd){
	((CRegimenOrder *)pWnd)->OnIdKillfocus();
} */
static int _OnIdCheckValueFnc(CWnd *pWnd){
	return ((CRegimenOrder *)pWnd)->OnIdCheckValue();
} 
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CRegimenOrder *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CRegimenOrder *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CRegimenOrder *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CRegimenOrder *)pWnd)->OnNameCheckValue();
} 
/*static void _OnNoteChangeFnc(CWnd *pWnd){
	((CRegimenOrder *)pWnd)->OnNoteChange();
} */
/*static void _OnNoteSetfocusFnc(CWnd *pWnd){
	((CRegimenOrder *)pWnd)->OnNoteSetfocus();} */ 
/*static void _OnNoteKillfocusFnc(CWnd *pWnd){
	((CRegimenOrder *)pWnd)->OnNoteKillfocus();
} */
static int _OnNoteCheckValueFnc(CWnd *pWnd){
	return ((CRegimenOrder *)pWnd)->OnNoteCheckValue();
} 
/*static void _OnStatusChangeFnc(CWnd *pWnd){
	((CRegimenOrder *)pWnd)->OnStatusChange();
} */
/*static void _OnStatusSetfocusFnc(CWnd *pWnd){
	((CRegimenOrder *)pWnd)->OnStatusSetfocus();} */ 
/*static void _OnStatusKillfocusFnc(CWnd *pWnd){
	((CRegimenOrder *)pWnd)->OnStatusKillfocus();
} */
static int _OnStatusCheckValueFnc(CWnd *pWnd){
	return ((CRegimenOrder *)pWnd)->OnStatusCheckValue();
} 
/*static void _OnApplyDateChangeFnc(CWnd *pWnd){
	((CRegimenOrder *)pWnd)->OnApplyDateChange();
} */
/*static void _OnApplyDateSetfocusFnc(CWnd *pWnd){
	((CRegimenOrder *)pWnd)->OnApplyDateSetfocus();} */ 
/*static void _OnApplyDateKillfocusFnc(CWnd *pWnd){
	((CRegimenOrder *)pWnd)->OnApplyDateKillfocus();
} */
static int _OnApplyDateCheckValueFnc(CWnd *pWnd){
	return ((CRegimenOrder *)pWnd)->OnApplyDateCheckValue();
} 
/*static void _OnCategoyChangeFnc(CWnd *pWnd){
	((CRegimenOrder *)pWnd)->OnCategoyChange();
} */
/*static void _OnCategoySetfocusFnc(CWnd *pWnd){
	((CRegimenOrder *)pWnd)->OnCategoySetfocus();} */ 
/*static void _OnCategoyKillfocusFnc(CWnd *pWnd){
	((CRegimenOrder *)pWnd)->OnCategoyKillfocus();
} */
static int _OnCategoyCheckValueFnc(CWnd *pWnd){
	return ((CRegimenOrder *)pWnd)->OnCategoyCheckValue();
} 
/*static void _OnDateDayChangeFnc(CWnd *pWnd){
	((CRegimenOrder *)pWnd)->OnDateDayChange();
} */
/*static void _OnDateDaySetfocusFnc(CWnd *pWnd){
	((CRegimenOrder *)pWnd)->OnDateDaySetfocus();} */ 
/*static void _OnDateDayKillfocusFnc(CWnd *pWnd){
	((CRegimenOrder *)pWnd)->OnDateDayKillfocus();
} */
static int _OnDateDayCheckValueFnc(CWnd *pWnd){
	return ((CRegimenOrder *)pWnd)->OnDateDayCheckValue();
} 
/*static void _OnVersionChangeFnc(CWnd *pWnd){
	((CRegimenOrder *)pWnd)->OnVersionChange();
} */
/*static void _OnVersionSetfocusFnc(CWnd *pWnd){
	((CRegimenOrder *)pWnd)->OnVersionSetfocus();} */ 
/*static void _OnVersionKillfocusFnc(CWnd *pWnd){
	((CRegimenOrder *)pWnd)->OnVersionKillfocus();
} */
static int _OnVersionCheckValueFnc(CWnd *pWnd){
	return ((CRegimenOrder *)pWnd)->OnVersionCheckValue();
} 
/*static void _OnSoluotDTChangeFnc(CWnd *pWnd){
	((CRegimenOrder *)pWnd)->OnSoluotDTChange();
} */
/*static void _OnSoluotDTSetfocusFnc(CWnd *pWnd){
	((CRegimenOrder *)pWnd)->OnSoluotDTSetfocus();} */ 
/*static void _OnSoluotDTKillfocusFnc(CWnd *pWnd){
	((CRegimenOrder *)pWnd)->OnSoluotDTKillfocus();
} */
static int _OnSoluotDTCheckValueFnc(CWnd *pWnd){
	return ((CRegimenOrder *)pWnd)->OnSoluotDTCheckValue();
} 
/*static void _OnDanhGiaChangeFnc(CWnd *pWnd){
	((CRegimenOrder *)pWnd)->OnDanhGiaChange();
} */
/*static void _OnDanhGiaSetfocusFnc(CWnd *pWnd){
	((CRegimenOrder *)pWnd)->OnDanhGiaSetfocus();} */ 
/*static void _OnDanhGiaKillfocusFnc(CWnd *pWnd){
	((CRegimenOrder *)pWnd)->OnDanhGiaKillfocus();
} */
static int _OnDanhGiaCheckValueFnc(CWnd *pWnd){
	return ((CRegimenOrder *)pWnd)->OnDanhGiaCheckValue();
} 
static void _OnHosoSelectFnc(CWnd *pWnd){
	CRegimenOrder *pVw = (CRegimenOrder *)pWnd;
	pVw->OnHosoSelect();
} 
static void _OnTabSelectChangeFnc(CWnd *pWnd, int nOld, int nNew){
	((CRegimenOrder*)pWnd)->OnTabSelectChange(nOld, nNew);
} 
static int _OnAddRegimenOrderFnc(CWnd *pWnd){
	 return ((CRegimenOrder*)pWnd)->OnAddRegimenOrder();
} 
static int _OnEditRegimenOrderFnc(CWnd *pWnd){
	 return ((CRegimenOrder*)pWnd)->OnEditRegimenOrder();
} 
static int _OnDeleteRegimenOrderFnc(CWnd *pWnd){
	 return ((CRegimenOrder*)pWnd)->OnDeleteRegimenOrder();
} 
static int _OnSaveRegimenOrderFnc(CWnd *pWnd){
	 return ((CRegimenOrder*)pWnd)->OnSaveRegimenOrder();
} 
static int _OnCancelRegimenOrderFnc(CWnd *pWnd){
	 return ((CRegimenOrder*)pWnd)->OnCancelRegimenOrder();
} 
CRegimenOrder::CRegimenOrder(){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CRegimenOrder::~CRegimenOrder(){
}
void CRegimenOrder::OnCreateComponents(){
	m_wndInformation.Create(this, _T("Information"), 5, 5, 805, 230);
	m_wndCreatedbyLabel.Create(this, _T("Created By"), 220, 30, 320, 55);
	m_wndCreatedby.Create(this,325, 30, 555, 55); 
	m_wndCreateddateLabel.Create(this, _T("Created Date"), 560, 30, 660, 55);
	m_wndCreateddate.Create(this,665, 30, 800, 55); 
	m_wndIdLabel.Create(this, _T("Mã PĐ"), 10, 30, 110, 55);
	m_wndId.Create(this,115, 30, 215, 55); 
	m_wndNameLabel.Create(this, _T("Name"), 10, 60, 110, 85);
	m_wndName.Create(this,115, 60, 800, 85); 
	m_wndNoteLabel.Create(this, _T("Nội dung"), 10, 90, 110, 115);
	m_wndNote.Create(this,115, 90, 800, 165); 
	m_wndStatusLabel.Create(this, _T("Status"), 10, 200, 110, 225);
	m_wndStatus.Create(this,115, 200, 215, 225); 
	m_wndApplyDateLabel.Create(this, _T("Apply Date"), 10, 170, 110, 195);
	m_wndApplyDate.Create(this,115, 170, 215, 195); 
	m_wndCategoyLabel.Create(this, _T("Categoy"), 220, 170, 320, 195);
	m_wndCategoy.Create(this,325, 170, 460, 195); 
	m_wndDateDayLabel.Create(this, _T("Số ngày ĐT"), 465, 170, 565, 195);
	m_wndDateDay.Create(this,570, 169, 628, 195); 
	m_wndVersionLabel.Create(this, _T("Version"), 633, 170, 733, 195);
	m_wndVersion.Create(this,738, 170, 798, 195); 
	m_wndSoluotDTLabel.Create(this, _T("Số lượt ĐT"), 220, 200, 320, 225);
	m_wndSoluotDT.Create(this,325, 200, 460, 225); 
	m_wndDanhGiaLabel.Create(this, _T("Đánh giá"), 465, 200, 565, 225);
	m_wndDanhGia.Create(this,570, 200, 625, 225); 
	m_wndHoso.Create(this,_T("Chi tiết HS"),630, 200, 805, 225); 

	m_wndTab.Create(this,5, 235, 805, 585);
}
void CRegimenOrder::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndCreatedby.SetLimitText(15);
	m_wndCreatedby.SetCheckValue(true);
	m_wndCreateddate.SetLimitText(25);
	m_wndCreateddate.SetCheckValue(true);
	m_wndId.SetLimitText(4);
	m_wndId.SetCheckValue(true);
	m_wndName.SetLimitText(254);
	m_wndName.SetCheckValue(true);
	m_wndNote.SetMultiLine(TRUE);
	m_wndNote.SetLimitText(254);
	m_wndNote.SetCheckValue(true);
	m_wndStatus.SetLimitText(1);
	m_wndStatus.SetCheckValue(true);
	m_wndApplyDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndApplyDate.SetCheckValue(true);
	m_wndCategoy.SetLimitText(5);
	m_wndCategoy.SetCheckValue(true);
	m_wndDateDay.SetLimitText(4);
	m_wndDateDay.SetCheckValue(true);
	m_wndVersion.SetLimitText(24);
	m_wndVersion.SetCheckValue(true);
	m_wndSoluotDT.SetLimitText(16);
	m_wndSoluotDT.SetCheckValue(true);
	m_wndDanhGia.SetLimitText(16);
	m_wndDanhGia.SetCheckValue(true);
	m_hms_phacdoTbl.SetTableName(_T("hms_phacdo"));
	m_hms_phacdoTbl.AddField(_T("createdby"), dfText, 15); 
	m_hms_phacdoTbl.AddField(_T("createddate"), dfDateTime); 
	m_hms_phacdoTbl.AddField(_T("phacdo_id"), dfLong); 
	m_hms_phacdoTbl.AddField(_T("ten_phacdo"), dfText, 254); 
	m_hms_phacdoTbl.AddField(_T("note"), dfText, 254); 
	m_hms_phacdoTbl.AddField(_T("isactive"), dfText, 1); 
	m_hms_phacdoTbl.AddField(_T("apply_date"), dfDate); 
	m_hms_phacdoTbl.AddField(_T("category_id"), dfText, 5); 
	m_hms_phacdoTbl.AddField(_T("so_ngay_dtri"), dfLong); 
	m_hms_phacdoTbl.AddField(_T("version"), dfText, 24); 

	m_wndRegimenICD.Create(&m_wndTab);
	m_wndRegimenCLS.Create(&m_wndTab);
	m_wndRegimenDrug.Create(&m_wndTab);
	m_wndRegimenDoc.Create(&m_wndTab);
	
	m_wndTab.Add(_T("&Mã ICD"), &m_wndRegimenICD);
	m_wndTab.Add(_T("&Chỉ định CLS"), &m_wndRegimenCLS);	
	m_wndTab.Add(_T("&Chỉ định thuốc"), &m_wndRegimenDrug);
	m_wndTab.Add(_T("Tài liệu đính kèm"), &m_wndRegimenDoc);
	m_wndTab.SetCurSel(0);
}
void CRegimenOrder::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndCreatedby.SetEvent(WE_CHANGE, _OnCreatedbyChangeFnc);
	//m_wndCreatedby.SetEvent(WE_SETFOCUS, _OnCreatedbySetfocusFnc);
	//m_wndCreatedby.SetEvent(WE_KILLFOCUS, _OnCreatedbyKillfocusFnc);
	m_wndCreatedby.SetEvent(WE_CHECKVALUE, _OnCreatedbyCheckValueFnc);
	//m_wndCreateddate.SetEvent(WE_CHANGE, _OnCreateddateChangeFnc);
	//m_wndCreateddate.SetEvent(WE_SETFOCUS, _OnCreateddateSetfocusFnc);
	//m_wndCreateddate.SetEvent(WE_KILLFOCUS, _OnCreateddateKillfocusFnc);
	m_wndCreateddate.SetEvent(WE_CHECKVALUE, _OnCreateddateCheckValueFnc);
	//m_wndId.SetEvent(WE_CHANGE, _OnIdChangeFnc);
	//m_wndId.SetEvent(WE_SETFOCUS, _OnIdSetfocusFnc);
	//m_wndId.SetEvent(WE_KILLFOCUS, _OnIdKillfocusFnc);
	m_wndId.SetEvent(WE_CHECKVALUE, _OnIdCheckValueFnc);
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	//m_wndNote.SetEvent(WE_CHANGE, _OnNoteChangeFnc);
	//m_wndNote.SetEvent(WE_SETFOCUS, _OnNoteSetfocusFnc);
	//m_wndNote.SetEvent(WE_KILLFOCUS, _OnNoteKillfocusFnc);
	m_wndNote.SetEvent(WE_CHECKVALUE, _OnNoteCheckValueFnc);
	//m_wndStatus.SetEvent(WE_CHANGE, _OnStatusChangeFnc);
	//m_wndStatus.SetEvent(WE_SETFOCUS, _OnStatusSetfocusFnc);
	//m_wndStatus.SetEvent(WE_KILLFOCUS, _OnStatusKillfocusFnc);
	m_wndStatus.SetEvent(WE_CHECKVALUE, _OnStatusCheckValueFnc);
	//m_wndApplyDate.SetEvent(WE_CHANGE, _OnApplyDateChangeFnc);
	//m_wndApplyDate.SetEvent(WE_SETFOCUS, _OnApplyDateSetfocusFnc);
	//m_wndApplyDate.SetEvent(WE_KILLFOCUS, _OnApplyDateKillfocusFnc);
	m_wndApplyDate.SetEvent(WE_CHECKVALUE, _OnApplyDateCheckValueFnc);
	//m_wndCategoy.SetEvent(WE_CHANGE, _OnCategoyChangeFnc);
	//m_wndCategoy.SetEvent(WE_SETFOCUS, _OnCategoySetfocusFnc);
	//m_wndCategoy.SetEvent(WE_KILLFOCUS, _OnCategoyKillfocusFnc);
	m_wndCategoy.SetEvent(WE_CHECKVALUE, _OnCategoyCheckValueFnc);
	//m_wndDateDay.SetEvent(WE_CHANGE, _OnDateDayChangeFnc);
	//m_wndDateDay.SetEvent(WE_SETFOCUS, _OnDateDaySetfocusFnc);
	//m_wndDateDay.SetEvent(WE_KILLFOCUS, _OnDateDayKillfocusFnc);
	m_wndDateDay.SetEvent(WE_CHECKVALUE, _OnDateDayCheckValueFnc);
	//m_wndVersion.SetEvent(WE_CHANGE, _OnVersionChangeFnc);
	//m_wndVersion.SetEvent(WE_SETFOCUS, _OnVersionSetfocusFnc);
	//m_wndVersion.SetEvent(WE_KILLFOCUS, _OnVersionKillfocusFnc);
	m_wndVersion.SetEvent(WE_CHECKVALUE, _OnVersionCheckValueFnc);
	//m_wndSoluotDT.SetEvent(WE_CHANGE, _OnSoluotDTChangeFnc);
	//m_wndSoluotDT.SetEvent(WE_SETFOCUS, _OnSoluotDTSetfocusFnc);
	//m_wndSoluotDT.SetEvent(WE_KILLFOCUS, _OnSoluotDTKillfocusFnc);
	m_wndSoluotDT.SetEvent(WE_CHECKVALUE, _OnSoluotDTCheckValueFnc);
	//m_wndDanhGia.SetEvent(WE_CHANGE, _OnDanhGiaChangeFnc);
	//m_wndDanhGia.SetEvent(WE_SETFOCUS, _OnDanhGiaSetfocusFnc);
	//m_wndDanhGia.SetEvent(WE_KILLFOCUS, _OnDanhGiaKillfocusFnc);
	m_wndDanhGia.SetEvent(WE_CHECKVALUE, _OnDanhGiaCheckValueFnc);
	m_wndTab.SetEvent(WE_SELCHANGE, _OnTabSelectChangeFnc);

	m_wndHoso.SetEvent(WE_CLICK, _OnHosoSelectFnc);
	
	SetMode(VM_NONE);

}
void CRegimenOrder::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndCreatedby.GetDlgCtrlID(), m_szCreatedby);
	DDX_TextEx(pDX, m_wndCreateddate.GetDlgCtrlID(), m_szCreateddate);
	DDX_Text(pDX, m_wndId.GetDlgCtrlID(), m_nID);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_Text(pDX, m_wndNote.GetDlgCtrlID(), m_szNote);
	DDX_Text(pDX, m_wndStatus.GetDlgCtrlID(), m_szStatus);
	DDX_TextEx(pDX, m_wndApplyDate.GetDlgCtrlID(), m_szApplyDate);
	DDX_Text(pDX, m_wndCategoy.GetDlgCtrlID(), m_szCategoy);
	DDX_Text(pDX, m_wndDateDay.GetDlgCtrlID(), m_nDateDay);
	DDX_Text(pDX, m_wndVersion.GetDlgCtrlID(), m_szVersion);
	DDX_Text(pDX, m_wndSoluotDT.GetDlgCtrlID(), m_nSoluotDT);
	DDX_Text(pDX, m_wndDanhGia.GetDlgCtrlID(), m_nDanhGia);
}
void CRegimenOrder::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Createdby")] =  m_szCreatedby;
	m_jData[_T("Createddate")] =  m_szCreateddate;
	m_jData[_T("Id")] =  m_nID;
	m_jData[_T("Name")] =  m_szName;
	m_jData[_T("Note")] =  m_szNote;
	m_jData[_T("Status")] =  m_szStatus;
	m_jData[_T("ApplyDate")] =  m_szApplyDate;
	m_jData[_T("Categoy")] =  m_szCategoy;
	m_jData[_T("DateDay")] =  m_nDateDay;
	m_jData[_T("Version")] =  m_szVersion;
	m_jData[_T("SoluotDT")] =  m_nSoluotDT;
	m_jData[_T("DanhGia")] =  m_nDanhGia;
	}
	else
	{
			
	m_jData[_T("Createdby")].GetValue(m_szCreatedby);
	m_jData[_T("Createddate")].GetValue(m_szCreateddate);
	m_jData[_T("Id")].GetValue(m_nID);
	m_jData[_T("Name")].GetValue(m_szName);
	m_jData[_T("Note")].GetValue(m_szNote);
	m_jData[_T("Status")].GetValue(m_szStatus);
	m_jData[_T("ApplyDate")].GetValue(m_szApplyDate);
	m_jData[_T("Categoy")].GetValue(m_szCategoy);
	m_jData[_T("DateDay")].GetValue(m_nDateDay);
	m_jData[_T("Version")].GetValue(m_szVersion);
	m_jData[_T("SoluotDT")].GetValue(m_nSoluotDT);
	m_jData[_T("DanhGia")].GetValue(m_nDanhGia);
	}

}
void CRegimenOrder::GetDataToScreen()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CRecord rs1(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM hms_phacdo WHERE phacdo_id=%ld"), m_nID);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF()){
		rs.GetValue(_T("createdby"), pMF->GetDoctorName(m_szCreatedby));
		rs.GetValue(_T("createddate"), m_szCreateddate);
		rs.GetValue(_T("phacdo_id"), m_nID);
		rs.GetValue(_T("ten_phacdo"), m_szName);
		rs.GetValue(_T("note"), m_szNote);
		rs.GetValue(_T("isactive"), m_szStatus);
		rs.GetValue(_T("apply_date"), m_szApplyDate);
		rs.GetValue(_T("category_id"), m_szCategoy);
		rs.GetValue(_T("so_ngay_dtri"), m_nDateDay);
		rs.GetValue(_T("version"), m_szVersion);

		m_wndRegimenICD.m_nID = m_nID;
		m_wndRegimenICD.OnListLoadData();
		m_wndRegimenCLS.m_nID = m_nID;
		m_wndRegimenCLS.OnListLoadData();
		m_wndRegimenDrug.m_nID = m_nID;

		szSQL.Format(_T("SELECT COUNT(*) FROM hms_phacdo_apply WHERE docno > 0 AND hms_phacdo_id=%ld"), m_nID);
		rs1.ExecSQL(szSQL);		
		m_nSoluotDT = rs1.GetIntValue();
		m_nDanhGia = m_nSoluotDT*60/100;
		m_wndRegimenDrug.OnListLoadData();

		SetMode(VM_VIEW);
	}
	else
		SetMode(VM_NONE);

}
void CRegimenOrder::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_hms_phacdoTbl.SetValue(_T("createdby"), m_szCreatedby);
	m_hms_phacdoTbl.SetValue(_T("createdby"), pMF->GetCurrentUser());
	m_hms_phacdoTbl.SetValue(_T("createddate"), m_szCreateddate);
	m_hms_phacdoTbl.SetValue(_T("createddate"), pMF->GetSysDateTime());
	m_hms_phacdoTbl.SetValue(_T("phacdo_id"), m_nID);
	m_hms_phacdoTbl.SetValue(_T("ten_phacdo"), m_szName);
	m_hms_phacdoTbl.SetValue(_T("note"), m_szNote);
	m_hms_phacdoTbl.SetValue(_T("isactive"), m_szStatus);
	m_hms_phacdoTbl.SetValue(_T("apply_date"), m_szApplyDate);
	m_hms_phacdoTbl.SetValue(_T("category_id"), m_szCategoy);
	m_hms_phacdoTbl.SetValue(_T("so_ngay_dtri"), m_nDateDay);
	m_hms_phacdoTbl.SetValue(_T("version"), m_szVersion);

}
void CRegimenOrder::SetDefaultValues(){

	m_szCreatedby.Empty();
	m_szCreateddate.Empty();
	m_nID=0;
	m_szName.Empty();
	m_szNote.Empty();
	m_szStatus.Empty();
	m_szApplyDate.Empty();
	m_szCategoy.Empty();
	m_nDateDay=0;
	m_szVersion.Empty();
	m_nSoluotDT=0;
	m_nDanhGia=0;

}
int CRegimenOrder::SetMode(int nMode){
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
/*void CRegimenOrder::OnCreatedbyChange(){
	
} */
/*void CRegimenOrder::OnCreatedbySetfocus(){
	
} */
/*void CRegimenOrder::OnCreatedbyKillfocus(){
	
} */
int CRegimenOrder::OnCreatedbyCheckValue(){
	return 0;
} 
/*void CRegimenOrder::OnCreateddateChange(){
	
} */
/*void CRegimenOrder::OnCreateddateSetfocus(){
	
} */
/*void CRegimenOrder::OnCreateddateKillfocus(){
	
} */
int CRegimenOrder::OnCreateddateCheckValue(){
	return 0;
} 
/*void CRegimenOrder::OnIdChange(){
	
} */
/*void CRegimenOrder::OnIdSetfocus(){
	
} */
/*void CRegimenOrder::OnIdKillfocus(){
	
} */
int CRegimenOrder::OnIdCheckValue(){
	return 0;
} 
/*void CRegimenOrder::OnNameChange(){
	
} */
/*void CRegimenOrder::OnNameSetfocus(){
	
} */
/*void CRegimenOrder::OnNameKillfocus(){
	
} */
int CRegimenOrder::OnNameCheckValue(){
	return 0;
} 
/*void CRegimenOrder::OnNoteChange(){
	
} */
/*void CRegimenOrder::OnNoteSetfocus(){
	
} */
/*void CRegimenOrder::OnNoteKillfocus(){
	
} */
int CRegimenOrder::OnNoteCheckValue(){
	return 0;
} 
/*void CRegimenOrder::OnStatusChange(){
	
} */
/*void CRegimenOrder::OnStatusSetfocus(){
	
} */
/*void CRegimenOrder::OnStatusKillfocus(){
	
} */
int CRegimenOrder::OnStatusCheckValue(){
	return 0;
} 
/*void CRegimenOrder::OnApplyDateChange(){
	
} */
/*void CRegimenOrder::OnApplyDateSetfocus(){
	
} */
/*void CRegimenOrder::OnApplyDateKillfocus(){
	
} */
int CRegimenOrder::OnApplyDateCheckValue(){
	return 0;
} 
/*void CRegimenOrder::OnCategoyChange(){
	
} */
/*void CRegimenOrder::OnCategoySetfocus(){
	
} */
/*void CRegimenOrder::OnCategoyKillfocus(){
	
} */
int CRegimenOrder::OnCategoyCheckValue(){
	return 0;
} 
/*void CRegimenOrder::OnDateDayChange(){
	
} */
/*void CRegimenOrder::OnDateDaySetfocus(){
	
} */
/*void CRegimenOrder::OnDateDayKillfocus(){
	
} */
int CRegimenOrder::OnDateDayCheckValue(){
	return 0;
} 
/*void CRegimenOrder::OnVersionChange(){
	
} */
/*void CRegimenOrder::OnVersionSetfocus(){
	
} */
/*void CRegimenOrder::OnVersionKillfocus(){
	
} */
int CRegimenOrder::OnVersionCheckValue(){
	return 0;
} 
/*void CRegimenOrder::OnSoluotDTChange(){
	
} */
/*void CRegimenOrder::OnSoluotDTSetfocus(){
	
} */
/*void CRegimenOrder::OnSoluotDTKillfocus(){
	
} */
int CRegimenOrder::OnSoluotDTCheckValue(){
	return 0;
} 
/*void CRegimenOrder::OnDanhGiaChange(){
	
} */
/*void CRegimenOrder::OnDanhGiaSetfocus(){
	
} */
/*void CRegimenOrder::OnDanhGiaKillfocus(){
	
} */
#include "RegimenPatientList.h"
void CRegimenOrder::OnHosoSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRegimenPatientList dlg(this);
	dlg.m_nID = m_nID;
	dlg.m_szTen = m_szName;
	dlg.DoModal();
} 

int CRegimenOrder::OnDanhGiaCheckValue(){
	return 0;
} 
void CRegimenOrder::OnTabSelectChange(int nOld, int nNew){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CRegimenOrder::OnAddRegimenOrder(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CRegimenOrder::OnEditRegimenOrder(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CRegimenOrder::OnDeleteRegimenOrder(){
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
 		OnCancelRegimenOrder();
 	}
	return 0;
}
int CRegimenOrder::OnSaveRegimenOrder(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
 		//szSQL = m_hms_phacdoTbl.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
 		szWhere.Format(_T(" WHERE"));
 		//szSQL = m_hms_phacdoTbl.GetUpdateSQL(_T("createdby,createddate"));
 		szSQL += szWhere;
 	}
 _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
 		//OnRegimenOrderListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CRegimenOrder::OnCancelRegimenOrder(){
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
int CRegimenOrder::OnRegimenOrderListLoadData(){
	return 0;
}
