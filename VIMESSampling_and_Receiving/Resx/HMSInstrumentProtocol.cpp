#include "HMSInstrumentProtocol.h"
//#include "stdafx.h"
#include "MainFrm.h"
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSInstrumentProtocol*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSInstrumentProtocol*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSInstrumentProtocol*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSInstrumentProtocol*)pWnd)->OnListDeleteItem();
} 
/*static void _OnIDChangeFnc(CWnd *pWnd){
	((CHMSInstrumentProtocol *)pWnd)->OnIDChange();
} */
/*static void _OnIDSetfocusFnc(CWnd *pWnd){
	((CHMSInstrumentProtocol *)pWnd)->OnIDSetfocus();} */ 
/*static void _OnIDKillfocusFnc(CWnd *pWnd){
	((CHMSInstrumentProtocol *)pWnd)->OnIDKillfocus();
} */
static int _OnIDCheckValueFnc(CWnd *pWnd){
	return ((CHMSInstrumentProtocol *)pWnd)->OnIDCheckValue();
} 
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CHMSInstrumentProtocol *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CHMSInstrumentProtocol *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CHMSInstrumentProtocol *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSInstrumentProtocol *)pWnd)->OnNameCheckValue();
} 
/*static void _OnNoteChangeFnc(CWnd *pWnd){
	((CHMSInstrumentProtocol *)pWnd)->OnNoteChange();
} */
/*static void _OnNoteSetfocusFnc(CWnd *pWnd){
	((CHMSInstrumentProtocol *)pWnd)->OnNoteSetfocus();} */ 
/*static void _OnNoteKillfocusFnc(CWnd *pWnd){
	((CHMSInstrumentProtocol *)pWnd)->OnNoteKillfocus();
} */
static int _OnNoteCheckValueFnc(CWnd *pWnd){
	return ((CHMSInstrumentProtocol *)pWnd)->OnNoteCheckValue();
} 
/*static void _OnFileHeaderChangeFnc(CWnd *pWnd){
	((CHMSInstrumentProtocol *)pWnd)->OnFileHeaderChange();
} */
/*static void _OnFileHeaderSetfocusFnc(CWnd *pWnd){
	((CHMSInstrumentProtocol *)pWnd)->OnFileHeaderSetfocus();} */ 
/*static void _OnFileHeaderKillfocusFnc(CWnd *pWnd){
	((CHMSInstrumentProtocol *)pWnd)->OnFileHeaderKillfocus();
} */
static int _OnFileHeaderCheckValueFnc(CWnd *pWnd){
	return ((CHMSInstrumentProtocol *)pWnd)->OnFileHeaderCheckValue();
} 
/*static void _OnFileEndChangeFnc(CWnd *pWnd){
	((CHMSInstrumentProtocol *)pWnd)->OnFileEndChange();
} */
/*static void _OnFileEndSetfocusFnc(CWnd *pWnd){
	((CHMSInstrumentProtocol *)pWnd)->OnFileEndSetfocus();} */ 
/*static void _OnFileEndKillfocusFnc(CWnd *pWnd){
	((CHMSInstrumentProtocol *)pWnd)->OnFileEndKillfocus();
} */
static int _OnFileEndCheckValueFnc(CWnd *pWnd){
	return ((CHMSInstrumentProtocol *)pWnd)->OnFileEndCheckValue();
} 
/*static void _OnHeaderRecordChangeFnc(CWnd *pWnd){
	((CHMSInstrumentProtocol *)pWnd)->OnHeaderRecordChange();
} */
/*static void _OnHeaderRecordSetfocusFnc(CWnd *pWnd){
	((CHMSInstrumentProtocol *)pWnd)->OnHeaderRecordSetfocus();} */ 
/*static void _OnHeaderRecordKillfocusFnc(CWnd *pWnd){
	((CHMSInstrumentProtocol *)pWnd)->OnHeaderRecordKillfocus();
} */
static int _OnHeaderRecordCheckValueFnc(CWnd *pWnd){
	return ((CHMSInstrumentProtocol *)pWnd)->OnHeaderRecordCheckValue();
} 
/*static void _OnEndOfRecordChangeFnc(CWnd *pWnd){
	((CHMSInstrumentProtocol *)pWnd)->OnEndOfRecordChange();
} */
/*static void _OnEndOfRecordSetfocusFnc(CWnd *pWnd){
	((CHMSInstrumentProtocol *)pWnd)->OnEndOfRecordSetfocus();} */ 
/*static void _OnEndOfRecordKillfocusFnc(CWnd *pWnd){
	((CHMSInstrumentProtocol *)pWnd)->OnEndOfRecordKillfocus();
} */
static int _OnEndOfRecordCheckValueFnc(CWnd *pWnd){
	return ((CHMSInstrumentProtocol *)pWnd)->OnEndOfRecordCheckValue();
} 
/*static void _OnOrderRecordChangeFnc(CWnd *pWnd){
	((CHMSInstrumentProtocol *)pWnd)->OnOrderRecordChange();
} */
/*static void _OnOrderRecordSetfocusFnc(CWnd *pWnd){
	((CHMSInstrumentProtocol *)pWnd)->OnOrderRecordSetfocus();} */ 
/*static void _OnOrderRecordKillfocusFnc(CWnd *pWnd){
	((CHMSInstrumentProtocol *)pWnd)->OnOrderRecordKillfocus();
} */
static int _OnOrderRecordCheckValueFnc(CWnd *pWnd){
	return ((CHMSInstrumentProtocol *)pWnd)->OnOrderRecordCheckValue();
} 
/*static void _OnOrderRecordMapChangeFnc(CWnd *pWnd){
	((CHMSInstrumentProtocol *)pWnd)->OnOrderRecordMapChange();
} */
/*static void _OnOrderRecordMapSetfocusFnc(CWnd *pWnd){
	((CHMSInstrumentProtocol *)pWnd)->OnOrderRecordMapSetfocus();} */ 
/*static void _OnOrderRecordMapKillfocusFnc(CWnd *pWnd){
	((CHMSInstrumentProtocol *)pWnd)->OnOrderRecordMapKillfocus();
} */
static int _OnOrderRecordMapCheckValueFnc(CWnd *pWnd){
	return ((CHMSInstrumentProtocol *)pWnd)->OnOrderRecordMapCheckValue();
} 
/*static void _OnResultRecordChangeFnc(CWnd *pWnd){
	((CHMSInstrumentProtocol *)pWnd)->OnResultRecordChange();
} */
/*static void _OnResultRecordSetfocusFnc(CWnd *pWnd){
	((CHMSInstrumentProtocol *)pWnd)->OnResultRecordSetfocus();} */ 
/*static void _OnResultRecordKillfocusFnc(CWnd *pWnd){
	((CHMSInstrumentProtocol *)pWnd)->OnResultRecordKillfocus();
} */
static int _OnResultRecordCheckValueFnc(CWnd *pWnd){
	return ((CHMSInstrumentProtocol *)pWnd)->OnResultRecordCheckValue();
} 
/*static void _OnResultRecordMapChangeFnc(CWnd *pWnd){
	((CHMSInstrumentProtocol *)pWnd)->OnResultRecordMapChange();
} */
/*static void _OnResultRecordMapSetfocusFnc(CWnd *pWnd){
	((CHMSInstrumentProtocol *)pWnd)->OnResultRecordMapSetfocus();} */ 
/*static void _OnResultRecordMapKillfocusFnc(CWnd *pWnd){
	((CHMSInstrumentProtocol *)pWnd)->OnResultRecordMapKillfocus();
} */
static int _OnResultRecordMapCheckValueFnc(CWnd *pWnd){
	return ((CHMSInstrumentProtocol *)pWnd)->OnResultRecordMapCheckValue();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSInstrumentProtocol *pVw = (CHMSInstrumentProtocol *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CHMSInstrumentProtocol *pVw = (CHMSInstrumentProtocol *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSInstrumentProtocol *pVw = (CHMSInstrumentProtocol *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSInstrumentProtocol *pVw = (CHMSInstrumentProtocol *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSInstrumentProtocol *pVw = (CHMSInstrumentProtocol *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSInstrumentProtocol *pVw = (CHMSInstrumentProtocol *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSInstrumentProtocolFnc(CWnd *pWnd){
	 return ((CHMSInstrumentProtocol*)pWnd)->OnAddHMSInstrumentProtocol();
} 
static int _OnEditHMSInstrumentProtocolFnc(CWnd *pWnd){
	 return ((CHMSInstrumentProtocol*)pWnd)->OnEditHMSInstrumentProtocol();
} 
static int _OnDeleteHMSInstrumentProtocolFnc(CWnd *pWnd){
	 return ((CHMSInstrumentProtocol*)pWnd)->OnDeleteHMSInstrumentProtocol();
} 
static int _OnSaveHMSInstrumentProtocolFnc(CWnd *pWnd){
	 return ((CHMSInstrumentProtocol*)pWnd)->OnSaveHMSInstrumentProtocol();
} 
static int _OnCancelHMSInstrumentProtocolFnc(CWnd *pWnd){
	 return ((CHMSInstrumentProtocol*)pWnd)->OnCancelHMSInstrumentProtocol();
} 
CHMSInstrumentProtocol::CHMSInstrumentProtocol(){

	m_nDlgWidth = 645;
	m_nDlgHeight = 485;
	SetDefaultValues();
}
CHMSInstrumentProtocol::~CHMSInstrumentProtocol(){
}
void CHMSInstrumentProtocol::OnCreateComponents(){
	m_wndInstrumentInformation.Create(this, _T("Instrument Information"), 5, 5, 640, 454);
	m_wndList.Create(this,10, 28, 634, 178); 
	m_wndIDLabel.Create(this, _T("ID"), 10, 183, 127, 205);
	m_wndID.Create(this,132, 183, 252, 205); 
	m_wndNameLabel.Create(this, _T("Name"), 257, 183, 307, 205);
	m_wndName.Create(this,312, 183, 634, 205); 
	m_wndNoteLabel.Create(this, _T("Note"), 10, 210, 127, 232);
	m_wndNote.Create(this,132, 210, 634, 232); 
	m_wndFileHeaderLabel.Create(this, _T("File Header"), 10, 237, 127, 259);
	m_wndFileHeader.Create(this,132, 237, 634, 259); 
	m_wndFileEndLabel.Create(this, _T("File End"), 10, 264, 127, 286);
	m_wndFileEnd.Create(this,132, 264, 634, 286); 
	m_wndHeaderRecordLabel.Create(this, _T("Header Record"), 10, 291, 127, 313);
	m_wndHeaderRecord.Create(this,132, 291, 634, 313); 
	m_wndEndOfRecordLabel.Create(this, _T("End Of Record"), 10, 318, 127, 340);
	m_wndEndOfRecord.Create(this,132, 318, 634, 340); 
	m_wndOrderRecordLabel.Create(this, _T("Order Record"), 10, 345, 127, 367);
	m_wndOrderRecord.Create(this,132, 345, 634, 367); 
	m_wndOrderRecordMapLabel.Create(this, _T("Order Record Map"), 10, 372, 127, 394);
	m_wndOrderRecordMap.Create(this,132, 372, 634, 394); 
	m_wndResultRecordLabel.Create(this, _T("Result Record"), 10, 399, 127, 421);
	m_wndResultRecord.Create(this,132, 399, 634, 421); 
	m_wndResultRecordMapLabel.Create(this, _T("Result Record Map"), 10, 426, 127, 448);
	m_wndResultRecordMap.Create(this,132, 426, 634, 448); 
	m_wndAdd.Create(this, _T("&Add"), 195, 459, 265, 481);
	m_wndEdit.Create(this, _T("&Edit"), 270, 459, 340, 481);
	m_wndDelete.Create(this, _T("Delete"), 345, 459, 415, 481);
	m_wndSave.Create(this, _T("&Save"), 420, 459, 490, 481);
	m_wndCancel.Create(this, _T("&Cancel"), 495, 459, 565, 481);
	m_wndClose.Create(this, _T("&Close"), 570, 459, 640, 481);

}
void CHMSInstrumentProtocol::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndID.SetLimitText(15);
	m_wndID.SetCheckValue(true);
	m_wndName.SetLimitText(35);
	m_wndName.SetCheckValue(true);
	m_wndNote.SetLimitText(254);
	m_wndNote.SetCheckValue(true);
	m_wndFileHeader.SetLimitText(35);
	m_wndFileHeader.SetCheckValue(true);
	m_wndFileEnd.SetLimitText(35);
	m_wndFileEnd.SetCheckValue(true);
	m_wndHeaderRecord.SetLimitText(35);
	m_wndHeaderRecord.SetCheckValue(true);
	m_wndEndOfRecord.SetLimitText(35);
	m_wndEndOfRecord.SetCheckValue(true);
	m_wndOrderRecord.SetLimitText(512);
	m_wndOrderRecord.SetCheckValue(true);
	m_wndOrderRecordMap.SetLimitText(512);
	m_wndOrderRecordMap.SetCheckValue(true);
	m_wndResultRecord.SetLimitText(254);
	m_wndResultRecord.SetCheckValue(true);
	m_wndResultRecordMap.SetLimitText(254);
	m_wndResultRecordMap.SetCheckValue(true);


	m_wndList.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);
	m_wndList.InsertColumn(2, _T("Note"), CFMT_TEXT, 250);
	m_hms_instrument_protocolTbl.SetTableName(_T("hms_instrument_protocol"));
	m_hms_instrument_protocolTbl.AddField(_T("hip_id"), dfText, 15); 
	m_hms_instrument_protocolTbl.AddField(_T("hip_name"), dfText, 35); 
	m_hms_instrument_protocolTbl.AddField(_T("hip_note"), dfText, 254); 
	m_hms_instrument_protocolTbl.AddField(_T("hip_activecode"), dfText, 35); 
	m_hms_instrument_protocolTbl.AddField(_T("hip_fileheader"), dfText, 35); 
	m_hms_instrument_protocolTbl.AddField(_T("hip_fileend"), dfText, 35); 
	m_hms_instrument_protocolTbl.AddField(_T("hip_headerrecord"), dfText, 35); 
	m_hms_instrument_protocolTbl.AddField(_T("hip_endrecord"), dfText, 35); 
	m_hms_instrument_protocolTbl.AddField(_T("hip_orderrecord"), dfText, 512); 
	m_hms_instrument_protocolTbl.AddField(_T("hip_orderrecordmap"), dfText, 512); 
	m_hms_instrument_protocolTbl.AddField(_T("hip_resultrecord"), dfText, 254); 
	m_hms_instrument_protocolTbl.AddField(_T("hip_resultrecordmap"), dfText, 254); 

}
void CHMSInstrumentProtocol::OnSetWindowEvents(){
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	//m_wndID.SetEvent(WE_CHANGE, _OnIDChangeFnc);
	//m_wndID.SetEvent(WE_SETFOCUS, _OnIDSetfocusFnc);
	//m_wndID.SetEvent(WE_KILLFOCUS, _OnIDKillfocusFnc);
	m_wndID.SetEvent(WE_CHECKVALUE, _OnIDCheckValueFnc);
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	//m_wndNote.SetEvent(WE_CHANGE, _OnNoteChangeFnc);
	//m_wndNote.SetEvent(WE_SETFOCUS, _OnNoteSetfocusFnc);
	//m_wndNote.SetEvent(WE_KILLFOCUS, _OnNoteKillfocusFnc);
	m_wndNote.SetEvent(WE_CHECKVALUE, _OnNoteCheckValueFnc);
	//m_wndFileHeader.SetEvent(WE_CHANGE, _OnFileHeaderChangeFnc);
	//m_wndFileHeader.SetEvent(WE_SETFOCUS, _OnFileHeaderSetfocusFnc);
	//m_wndFileHeader.SetEvent(WE_KILLFOCUS, _OnFileHeaderKillfocusFnc);
	m_wndFileHeader.SetEvent(WE_CHECKVALUE, _OnFileHeaderCheckValueFnc);
	//m_wndFileEnd.SetEvent(WE_CHANGE, _OnFileEndChangeFnc);
	//m_wndFileEnd.SetEvent(WE_SETFOCUS, _OnFileEndSetfocusFnc);
	//m_wndFileEnd.SetEvent(WE_KILLFOCUS, _OnFileEndKillfocusFnc);
	m_wndFileEnd.SetEvent(WE_CHECKVALUE, _OnFileEndCheckValueFnc);
	//m_wndHeaderRecord.SetEvent(WE_CHANGE, _OnHeaderRecordChangeFnc);
	//m_wndHeaderRecord.SetEvent(WE_SETFOCUS, _OnHeaderRecordSetfocusFnc);
	//m_wndHeaderRecord.SetEvent(WE_KILLFOCUS, _OnHeaderRecordKillfocusFnc);
	m_wndHeaderRecord.SetEvent(WE_CHECKVALUE, _OnHeaderRecordCheckValueFnc);
	//m_wndEndOfRecord.SetEvent(WE_CHANGE, _OnEndOfRecordChangeFnc);
	//m_wndEndOfRecord.SetEvent(WE_SETFOCUS, _OnEndOfRecordSetfocusFnc);
	//m_wndEndOfRecord.SetEvent(WE_KILLFOCUS, _OnEndOfRecordKillfocusFnc);
	m_wndEndOfRecord.SetEvent(WE_CHECKVALUE, _OnEndOfRecordCheckValueFnc);
	//m_wndOrderRecord.SetEvent(WE_CHANGE, _OnOrderRecordChangeFnc);
	//m_wndOrderRecord.SetEvent(WE_SETFOCUS, _OnOrderRecordSetfocusFnc);
	//m_wndOrderRecord.SetEvent(WE_KILLFOCUS, _OnOrderRecordKillfocusFnc);
	m_wndOrderRecord.SetEvent(WE_CHECKVALUE, _OnOrderRecordCheckValueFnc);
	//m_wndOrderRecordMap.SetEvent(WE_CHANGE, _OnOrderRecordMapChangeFnc);
	//m_wndOrderRecordMap.SetEvent(WE_SETFOCUS, _OnOrderRecordMapSetfocusFnc);
	//m_wndOrderRecordMap.SetEvent(WE_KILLFOCUS, _OnOrderRecordMapKillfocusFnc);
	m_wndOrderRecordMap.SetEvent(WE_CHECKVALUE, _OnOrderRecordMapCheckValueFnc);
	//m_wndResultRecord.SetEvent(WE_CHANGE, _OnResultRecordChangeFnc);
	//m_wndResultRecord.SetEvent(WE_SETFOCUS, _OnResultRecordSetfocusFnc);
	//m_wndResultRecord.SetEvent(WE_KILLFOCUS, _OnResultRecordKillfocusFnc);
	m_wndResultRecord.SetEvent(WE_CHECKVALUE, _OnResultRecordCheckValueFnc);
	//m_wndResultRecordMap.SetEvent(WE_CHANGE, _OnResultRecordMapChangeFnc);
	//m_wndResultRecordMap.SetEvent(WE_SETFOCUS, _OnResultRecordMapSetfocusFnc);
	//m_wndResultRecordMap.SetEvent(WE_KILLFOCUS, _OnResultRecordMapKillfocusFnc);
	m_wndResultRecordMap.SetEvent(WE_CHECKVALUE, _OnResultRecordMapCheckValueFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);

}
void CHMSInstrumentProtocol::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndID.GetDlgCtrlID(), m_szID);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_Text(pDX, m_wndNote.GetDlgCtrlID(), m_szNote);
	DDX_Text(pDX, m_wndFileHeader.GetDlgCtrlID(), m_szFileHeader);
	DDX_Text(pDX, m_wndFileEnd.GetDlgCtrlID(), m_szFileEnd);
	DDX_Text(pDX, m_wndHeaderRecord.GetDlgCtrlID(), m_szHeaderRecord);
	DDX_Text(pDX, m_wndEndOfRecord.GetDlgCtrlID(), m_szEndOfRecord);
	DDX_Text(pDX, m_wndOrderRecord.GetDlgCtrlID(), m_szOrderRecord);
	DDX_Text(pDX, m_wndOrderRecordMap.GetDlgCtrlID(), m_szOrderRecordMap);
	DDX_Text(pDX, m_wndResultRecord.GetDlgCtrlID(), m_szResultRecord);
	DDX_Text(pDX, m_wndResultRecordMap.GetDlgCtrlID(), m_szResultRecordMap);

}
void CHMSInstrumentProtocol::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("hip_id"), m_szID);
	rs.GetValue(_T("hip_name"), m_szName);
	rs.GetValue(_T("hip_note"), m_szNote);
	rs.GetValue(_T("hip_fileheader"), m_szFileHeader);
	rs.GetValue(_T("hip_fileend"), m_szFileEnd);
	rs.GetValue(_T("hip_headerrecord"), m_szHeaderRecord);
	rs.GetValue(_T("hip_endrecord"), m_szEndOfRecord);
	rs.GetValue(_T("hip_orderrecord"), m_szOrderRecord);
	rs.GetValue(_T("hip_orderrecordmap"), m_szOrderRecordMap);
	rs.GetValue(_T("hip_resultrecord"), m_szResultRecord);
	rs.GetValue(_T("hip_resultrecordmap"), m_szResultRecordMap);

}
void CHMSInstrumentProtocol::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_hms_instrument_protocolTbl.SetValue(_T("hip_id"), m_szID);
	m_hms_instrument_protocolTbl.SetValue(_T("hip_name"), m_szName);
	m_hms_instrument_protocolTbl.SetValue(_T("hip_note"), m_szNote);
	m_hms_instrument_protocolTbl.SetValue(_T("hip_fileheader"), m_szFileHeader);
	m_hms_instrument_protocolTbl.SetValue(_T("hip_fileend"), m_szFileEnd);
	m_hms_instrument_protocolTbl.SetValue(_T("hip_headerrecord"), m_szHeaderRecord);
	m_hms_instrument_protocolTbl.SetValue(_T("hip_endrecord"), m_szEndOfRecord);
	m_hms_instrument_protocolTbl.SetValue(_T("hip_orderrecord"), m_szOrderRecord);
	m_hms_instrument_protocolTbl.SetValue(_T("hip_orderrecordmap"), m_szOrderRecordMap);
	m_hms_instrument_protocolTbl.SetValue(_T("hip_resultrecord"), m_szResultRecord);
	m_hms_instrument_protocolTbl.SetValue(_T("hip_resultrecordmap"), m_szResultRecordMap);

}
void CHMSInstrumentProtocol::SetDefaultValues(){

	m_szID.Empty();
	m_szName.Empty();
	m_szNote.Empty();
	m_szFileHeader.Empty();
	m_szFileEnd.Empty();
	m_szHeaderRecord.Empty();
	m_szEndOfRecord.Empty();
	m_szOrderRecord.Empty();
	m_szOrderRecordMap.Empty();
	m_szResultRecord.Empty();
	m_szResultRecordMap.Empty();

}
int CHMSInstrumentProtocol::SetMode(int nMode){ 
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
void CHMSInstrumentProtocol::OnListDblClick(){
	
} 
void CHMSInstrumentProtocol::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSInstrumentProtocol::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSInstrumentProtocol::OnListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	m_wndList.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Name")), 
			rs.GetValue(_T("Note")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
*/
	return 0;
}
/*void CHMSInstrumentProtocol::OnIDChange(){
	
} */
/*void CHMSInstrumentProtocol::OnIDSetfocus(){
	
} */
/*void CHMSInstrumentProtocol::OnIDKillfocus(){
	
} */
int CHMSInstrumentProtocol::OnIDCheckValue(){
	return 0;
} 
/*void CHMSInstrumentProtocol::OnNameChange(){
	
} */
/*void CHMSInstrumentProtocol::OnNameSetfocus(){
	
} */
/*void CHMSInstrumentProtocol::OnNameKillfocus(){
	
} */
int CHMSInstrumentProtocol::OnNameCheckValue(){
	return 0;
} 
/*void CHMSInstrumentProtocol::OnNoteChange(){
	
} */
/*void CHMSInstrumentProtocol::OnNoteSetfocus(){
	
} */
/*void CHMSInstrumentProtocol::OnNoteKillfocus(){
	
} */
int CHMSInstrumentProtocol::OnNoteCheckValue(){
	return 0;
} 
/*void CHMSInstrumentProtocol::OnFileHeaderChange(){
	
} */
/*void CHMSInstrumentProtocol::OnFileHeaderSetfocus(){
	
} */
/*void CHMSInstrumentProtocol::OnFileHeaderKillfocus(){
	
} */
int CHMSInstrumentProtocol::OnFileHeaderCheckValue(){
	return 0;
} 
/*void CHMSInstrumentProtocol::OnFileEndChange(){
	
} */
/*void CHMSInstrumentProtocol::OnFileEndSetfocus(){
	
} */
/*void CHMSInstrumentProtocol::OnFileEndKillfocus(){
	
} */
int CHMSInstrumentProtocol::OnFileEndCheckValue(){
	return 0;
} 
/*void CHMSInstrumentProtocol::OnHeaderRecordChange(){
	
} */
/*void CHMSInstrumentProtocol::OnHeaderRecordSetfocus(){
	
} */
/*void CHMSInstrumentProtocol::OnHeaderRecordKillfocus(){
	
} */
int CHMSInstrumentProtocol::OnHeaderRecordCheckValue(){
	return 0;
} 
/*void CHMSInstrumentProtocol::OnEndOfRecordChange(){
	
} */
/*void CHMSInstrumentProtocol::OnEndOfRecordSetfocus(){
	
} */
/*void CHMSInstrumentProtocol::OnEndOfRecordKillfocus(){
	
} */
int CHMSInstrumentProtocol::OnEndOfRecordCheckValue(){
	return 0;
} 
/*void CHMSInstrumentProtocol::OnOrderRecordChange(){
	
} */
/*void CHMSInstrumentProtocol::OnOrderRecordSetfocus(){
	
} */
/*void CHMSInstrumentProtocol::OnOrderRecordKillfocus(){
	
} */
int CHMSInstrumentProtocol::OnOrderRecordCheckValue(){
	return 0;
} 
/*void CHMSInstrumentProtocol::OnOrderRecordMapChange(){
	
} */
/*void CHMSInstrumentProtocol::OnOrderRecordMapSetfocus(){
	
} */
/*void CHMSInstrumentProtocol::OnOrderRecordMapKillfocus(){
	
} */
int CHMSInstrumentProtocol::OnOrderRecordMapCheckValue(){
	return 0;
} 
/*void CHMSInstrumentProtocol::OnResultRecordChange(){
	
} */
/*void CHMSInstrumentProtocol::OnResultRecordSetfocus(){
	
} */
/*void CHMSInstrumentProtocol::OnResultRecordKillfocus(){
	
} */
int CHMSInstrumentProtocol::OnResultRecordCheckValue(){
	return 0;
} 
/*void CHMSInstrumentProtocol::OnResultRecordMapChange(){
	
} */
/*void CHMSInstrumentProtocol::OnResultRecordMapSetfocus(){
	
} */
/*void CHMSInstrumentProtocol::OnResultRecordMapKillfocus(){
	
} */
int CHMSInstrumentProtocol::OnResultRecordMapCheckValue(){
	return 0;
} 
void CHMSInstrumentProtocol::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSInstrumentProtocol::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSInstrumentProtocol::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSInstrumentProtocol::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSInstrumentProtocol::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSInstrumentProtocol::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSInstrumentProtocol::OnAddHMSInstrumentProtocol(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Add HMSInstrumentProtocol"))) 
 		return -1; 
 	SetMode(VM_ADD);
return 0; 
 
} 
int CHMSInstrumentProtocol::OnEditHMSInstrumentProtocol(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Edit HMSInstrumentProtocol"))) 
 		return -1; 
 	SetMode(VM_EDIT);
return 0;  
 
} 
int CHMSInstrumentProtocol::OnDeleteHMSInstrumentProtocol(){
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
 		OnCancelHMSInstrumentProtocol(); 
 	}
return 0;
 } 
int CHMSInstrumentProtocol::OnSaveHMSInstrumentProtocol(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		//7szSQL = m_hms_instrument_protocolTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE")); 
 		//szSQL = m_hms_instrument_protocolTbl.GetUpdateSQL(_T("createdby,createddate")); 
 		szSQL += szWhere; 
 	} 
 _fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		//OnHMSInstrumentProtocolListLoadData(); 
 		SetMode(VM_VIEW); 
 		pMF->FinishWork(this); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSInstrumentProtocol::OnCancelHMSInstrumentProtocol(){
 	if(GetMode() == VM_EDIT) 
 	{ 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 		SetMode(VM_NONE); 
 	} 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	pMF->FinishWork(this); 
 	return 0;
} 
int CHMSInstrumentProtocol::OnHMSInstrumentProtocolListLoadData(){
	return 0;
}
