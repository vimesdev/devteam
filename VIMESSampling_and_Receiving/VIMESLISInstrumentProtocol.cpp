#include "VIMESLISInstrumentProtocol.h"
//#include "stdafx.h"
#include "MainFrm.h"
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CVIMESLISInstrumentProtocol*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CVIMESLISInstrumentProtocol*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CVIMESLISInstrumentProtocol*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CVIMESLISInstrumentProtocol*)pWnd)->OnListDeleteItem();
} 
/*static void _OnIDChangeFnc(CWnd *pWnd){
	((CVIMESLISInstrumentProtocol *)pWnd)->OnIDChange();
} */
/*static void _OnIDSetfocusFnc(CWnd *pWnd){
	((CVIMESLISInstrumentProtocol *)pWnd)->OnIDSetfocus();} */ 
/*static void _OnIDKillfocusFnc(CWnd *pWnd){
	((CVIMESLISInstrumentProtocol *)pWnd)->OnIDKillfocus();
} */
static int _OnIDCheckValueFnc(CWnd *pWnd){
	return ((CVIMESLISInstrumentProtocol *)pWnd)->OnIDCheckValue();
} 
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CVIMESLISInstrumentProtocol *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CVIMESLISInstrumentProtocol *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CVIMESLISInstrumentProtocol *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CVIMESLISInstrumentProtocol *)pWnd)->OnNameCheckValue();
} 
/*static void _OnNoteChangeFnc(CWnd *pWnd){
	((CVIMESLISInstrumentProtocol *)pWnd)->OnNoteChange();
} */
/*static void _OnNoteSetfocusFnc(CWnd *pWnd){
	((CVIMESLISInstrumentProtocol *)pWnd)->OnNoteSetfocus();} */ 
/*static void _OnNoteKillfocusFnc(CWnd *pWnd){
	((CVIMESLISInstrumentProtocol *)pWnd)->OnNoteKillfocus();
} */
static int _OnNoteCheckValueFnc(CWnd *pWnd){
	return ((CVIMESLISInstrumentProtocol *)pWnd)->OnNoteCheckValue();
} 
/*static void _OnFileHeaderChangeFnc(CWnd *pWnd){
	((CVIMESLISInstrumentProtocol *)pWnd)->OnFileHeaderChange();
} */
/*static void _OnFileHeaderSetfocusFnc(CWnd *pWnd){
	((CVIMESLISInstrumentProtocol *)pWnd)->OnFileHeaderSetfocus();} */ 
/*static void _OnFileHeaderKillfocusFnc(CWnd *pWnd){
	((CVIMESLISInstrumentProtocol *)pWnd)->OnFileHeaderKillfocus();
} */
static int _OnFileHeaderCheckValueFnc(CWnd *pWnd){
	return ((CVIMESLISInstrumentProtocol *)pWnd)->OnFileHeaderCheckValue();
} 
/*static void _OnFileEndChangeFnc(CWnd *pWnd){
	((CVIMESLISInstrumentProtocol *)pWnd)->OnFileEndChange();
} */
/*static void _OnFileEndSetfocusFnc(CWnd *pWnd){
	((CVIMESLISInstrumentProtocol *)pWnd)->OnFileEndSetfocus();} */ 
/*static void _OnFileEndKillfocusFnc(CWnd *pWnd){
	((CVIMESLISInstrumentProtocol *)pWnd)->OnFileEndKillfocus();
} */
static int _OnFileEndCheckValueFnc(CWnd *pWnd){
	return ((CVIMESLISInstrumentProtocol *)pWnd)->OnFileEndCheckValue();
} 
/*static void _OnHeaderRecordChangeFnc(CWnd *pWnd){
	((CVIMESLISInstrumentProtocol *)pWnd)->OnHeaderRecordChange();
} */
/*static void _OnHeaderRecordSetfocusFnc(CWnd *pWnd){
	((CVIMESLISInstrumentProtocol *)pWnd)->OnHeaderRecordSetfocus();} */ 
/*static void _OnHeaderRecordKillfocusFnc(CWnd *pWnd){
	((CVIMESLISInstrumentProtocol *)pWnd)->OnHeaderRecordKillfocus();
} */
static int _OnHeaderRecordCheckValueFnc(CWnd *pWnd){
	return ((CVIMESLISInstrumentProtocol *)pWnd)->OnHeaderRecordCheckValue();
} 
/*static void _OnEndOfRecordChangeFnc(CWnd *pWnd){
	((CVIMESLISInstrumentProtocol *)pWnd)->OnEndOfRecordChange();
} */
/*static void _OnEndOfRecordSetfocusFnc(CWnd *pWnd){
	((CVIMESLISInstrumentProtocol *)pWnd)->OnEndOfRecordSetfocus();} */ 
/*static void _OnEndOfRecordKillfocusFnc(CWnd *pWnd){
	((CVIMESLISInstrumentProtocol *)pWnd)->OnEndOfRecordKillfocus();
} */
static int _OnEndOfRecordCheckValueFnc(CWnd *pWnd){
	return ((CVIMESLISInstrumentProtocol *)pWnd)->OnEndOfRecordCheckValue();
} 
/*static void _OnOrderRecordChangeFnc(CWnd *pWnd){
	((CVIMESLISInstrumentProtocol *)pWnd)->OnOrderRecordChange();
} */
/*static void _OnOrderRecordSetfocusFnc(CWnd *pWnd){
	((CVIMESLISInstrumentProtocol *)pWnd)->OnOrderRecordSetfocus();} */ 
/*static void _OnOrderRecordKillfocusFnc(CWnd *pWnd){
	((CVIMESLISInstrumentProtocol *)pWnd)->OnOrderRecordKillfocus();
} */
static int _OnOrderRecordCheckValueFnc(CWnd *pWnd){
	return ((CVIMESLISInstrumentProtocol *)pWnd)->OnOrderRecordCheckValue();
} 
/*static void _OnOrderRecordMapChangeFnc(CWnd *pWnd){
	((CVIMESLISInstrumentProtocol *)pWnd)->OnOrderRecordMapChange();
} */
/*static void _OnOrderRecordMapSetfocusFnc(CWnd *pWnd){
	((CVIMESLISInstrumentProtocol *)pWnd)->OnOrderRecordMapSetfocus();} */ 
/*static void _OnOrderRecordMapKillfocusFnc(CWnd *pWnd){
	((CVIMESLISInstrumentProtocol *)pWnd)->OnOrderRecordMapKillfocus();
} */
static int _OnOrderRecordMapCheckValueFnc(CWnd *pWnd){
	return ((CVIMESLISInstrumentProtocol *)pWnd)->OnOrderRecordMapCheckValue();
} 
/*static void _OnResultRecordChangeFnc(CWnd *pWnd){
	((CVIMESLISInstrumentProtocol *)pWnd)->OnResultRecordChange();
} */
/*static void _OnResultRecordSetfocusFnc(CWnd *pWnd){
	((CVIMESLISInstrumentProtocol *)pWnd)->OnResultRecordSetfocus();} */ 
/*static void _OnResultRecordKillfocusFnc(CWnd *pWnd){
	((CVIMESLISInstrumentProtocol *)pWnd)->OnResultRecordKillfocus();
} */
static int _OnResultRecordCheckValueFnc(CWnd *pWnd){
	return ((CVIMESLISInstrumentProtocol *)pWnd)->OnResultRecordCheckValue();
} 
/*static void _OnResultRecordMapChangeFnc(CWnd *pWnd){
	((CVIMESLISInstrumentProtocol *)pWnd)->OnResultRecordMapChange();
} */
/*static void _OnResultRecordMapSetfocusFnc(CWnd *pWnd){
	((CVIMESLISInstrumentProtocol *)pWnd)->OnResultRecordMapSetfocus();} */ 
/*static void _OnResultRecordMapKillfocusFnc(CWnd *pWnd){
	((CVIMESLISInstrumentProtocol *)pWnd)->OnResultRecordMapKillfocus();
} */
static int _OnResultRecordMapCheckValueFnc(CWnd *pWnd){
	return ((CVIMESLISInstrumentProtocol *)pWnd)->OnResultRecordMapCheckValue();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CVIMESLISInstrumentProtocol *pVw = (CVIMESLISInstrumentProtocol *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CVIMESLISInstrumentProtocol *pVw = (CVIMESLISInstrumentProtocol *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CVIMESLISInstrumentProtocol *pVw = (CVIMESLISInstrumentProtocol *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CVIMESLISInstrumentProtocol *pVw = (CVIMESLISInstrumentProtocol *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CVIMESLISInstrumentProtocol *pVw = (CVIMESLISInstrumentProtocol *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CVIMESLISInstrumentProtocol *pVw = (CVIMESLISInstrumentProtocol *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSInstrumentProtocolFnc(CWnd *pWnd){
	 return ((CVIMESLISInstrumentProtocol*)pWnd)->OnAddHMSInstrumentProtocol();
} 
static int _OnEditHMSInstrumentProtocolFnc(CWnd *pWnd){
	 return ((CVIMESLISInstrumentProtocol*)pWnd)->OnEditHMSInstrumentProtocol();
} 
static int _OnDeleteHMSInstrumentProtocolFnc(CWnd *pWnd){
	 return ((CVIMESLISInstrumentProtocol*)pWnd)->OnDeleteHMSInstrumentProtocol();
} 
static int _OnSaveHMSInstrumentProtocolFnc(CWnd *pWnd){
	 return ((CVIMESLISInstrumentProtocol*)pWnd)->OnSaveHMSInstrumentProtocol();
} 
static int _OnCancelHMSInstrumentProtocolFnc(CWnd *pWnd){
	 return ((CVIMESLISInstrumentProtocol*)pWnd)->OnCancelHMSInstrumentProtocol();
} 
CVIMESLISInstrumentProtocol::CVIMESLISInstrumentProtocol(){

	m_nDlgWidth = 645;
	m_nDlgHeight = 485;
	SetDefaultValues();
}
CVIMESLISInstrumentProtocol::~CVIMESLISInstrumentProtocol(){
}
void CVIMESLISInstrumentProtocol::OnCreateComponents(){
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
void CVIMESLISInstrumentProtocol::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	SetMode(VM_NONE);
	m_wndID.SetLimitText(15);
	m_wndID.SetCheckValue(true);
	m_wndName.SetLimitText(35);
	m_wndName.SetCheckValue(true);
	m_wndNote.SetLimitText(254);
//	m_wndNote.SetCheckValue(true);
	m_wndFileHeader.SetLimitText(35);
//	m_wndFileHeader.SetCheckValue(true);
	m_wndFileEnd.SetLimitText(35);
//	m_wndFileEnd.SetCheckValue(true);
	m_wndHeaderRecord.SetLimitText(35);
//	m_wndHeaderRecord.SetCheckValue(true);
	m_wndEndOfRecord.SetLimitText(35);
	m_wndEndOfRecord.SetCheckValue(true);
	m_wndOrderRecord.SetLimitText(512);
//	m_wndOrderRecord.SetCheckValue(true);
	m_wndOrderRecordMap.SetLimitText(512);
//	m_wndOrderRecordMap.SetCheckValue(true);
	m_wndResultRecord.SetLimitText(254);
	m_wndResultRecord.SetCheckValue(true);
	m_wndResultRecordMap.SetLimitText(254);
//	m_wndResultRecordMap.SetCheckValue(true);


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
void CVIMESLISInstrumentProtocol::OnSetWindowEvents(){
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
	OnListLoadData();
}
void CVIMESLISInstrumentProtocol::OnDoDataExchange(CDataExchange* pDX){
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
void CVIMESLISInstrumentProtocol::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM hms_instrument_protocol WHERE hip_id='%s'  "), m_szID);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
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
		SetMode(VM_VIEW);
	}
	else
		SetMode(VM_NONE);
}
void CVIMESLISInstrumentProtocol::GetScreenToData(){
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
void CVIMESLISInstrumentProtocol::SetDefaultValues(){

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
int CVIMESLISInstrumentProtocol::SetMode(int nMode){ 
 		int nOldMode = GetMode(); 
 		CGuiView::SetMode(nMode); 
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
  		switch(nMode){ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 3, 4, 5, -1); 
 			SetDefaultValues(); 
			m_wndID.SetFocus();
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 3, 4, 5, -1); 
			m_wndName.SetFocus();
			m_wndID.EnableWindow(false);
 			break; 
 		case VM_VIEW: 
 			EnableControls(FALSE); 
 			EnableButtons(FALSE, 3, 4, -1); 
 			break; 
 		case VM_NONE: 
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 0, 5, 6, -1); 
 			SetDefaultValues(); 
 			break; 
 		}; 
 		UpdateData(FALSE); 
 		return nOldMode; 
 	} 
void CVIMESLISInstrumentProtocol::OnListDblClick(){
	
} 
void CVIMESLISInstrumentProtocol::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(nNewItem < 0)
		return;

	m_szID = m_wndList.GetItemText(nNewItem, 0);
	GetDataToScreen();
} 
int CVIMESLISInstrumentProtocol::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnDeleteHMSInstrumentProtocol();
	 return 0;
} 
long CVIMESLISInstrumentProtocol::OnListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 

	int nCount = 0;
	szSQL.Format(_T("SELECT * FROM hms_instrument_protocol ORDER BY hip_id"));
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("hip_id")), 
			rs.GetValue(_T("hip_name")), 
			rs.GetValue(_T("hip_note")), 
			NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;

}
/*void CVIMESLISInstrumentProtocol::OnIDChange(){
	
} */
/*void CVIMESLISInstrumentProtocol::OnIDSetfocus(){
	
} */
/*void CVIMESLISInstrumentProtocol::OnIDKillfocus(){
	
} */
int CVIMESLISInstrumentProtocol::OnIDCheckValue(){
	return 0;
} 
/*void CVIMESLISInstrumentProtocol::OnNameChange(){
	
} */
/*void CVIMESLISInstrumentProtocol::OnNameSetfocus(){
	
} */
/*void CVIMESLISInstrumentProtocol::OnNameKillfocus(){
	
} */
int CVIMESLISInstrumentProtocol::OnNameCheckValue(){
	return 0;
} 
/*void CVIMESLISInstrumentProtocol::OnNoteChange(){
	
} */
/*void CVIMESLISInstrumentProtocol::OnNoteSetfocus(){
	
} */
/*void CVIMESLISInstrumentProtocol::OnNoteKillfocus(){
	
} */
int CVIMESLISInstrumentProtocol::OnNoteCheckValue(){
	return 0;
} 
/*void CVIMESLISInstrumentProtocol::OnFileHeaderChange(){
	
} */
/*void CVIMESLISInstrumentProtocol::OnFileHeaderSetfocus(){
	
} */
/*void CVIMESLISInstrumentProtocol::OnFileHeaderKillfocus(){
	
} */
int CVIMESLISInstrumentProtocol::OnFileHeaderCheckValue(){
	return 0;
} 
/*void CVIMESLISInstrumentProtocol::OnFileEndChange(){
	
} */
/*void CVIMESLISInstrumentProtocol::OnFileEndSetfocus(){
	
} */
/*void CVIMESLISInstrumentProtocol::OnFileEndKillfocus(){
	
} */
int CVIMESLISInstrumentProtocol::OnFileEndCheckValue(){
	return 0;
} 
/*void CVIMESLISInstrumentProtocol::OnHeaderRecordChange(){
	
} */
/*void CVIMESLISInstrumentProtocol::OnHeaderRecordSetfocus(){
	
} */
/*void CVIMESLISInstrumentProtocol::OnHeaderRecordKillfocus(){
	
} */
int CVIMESLISInstrumentProtocol::OnHeaderRecordCheckValue(){
	return 0;
} 
/*void CVIMESLISInstrumentProtocol::OnEndOfRecordChange(){
	
} */
/*void CVIMESLISInstrumentProtocol::OnEndOfRecordSetfocus(){
	
} */
/*void CVIMESLISInstrumentProtocol::OnEndOfRecordKillfocus(){
	
} */
int CVIMESLISInstrumentProtocol::OnEndOfRecordCheckValue(){
	return 0;
} 
/*void CVIMESLISInstrumentProtocol::OnOrderRecordChange(){
	
} */
/*void CVIMESLISInstrumentProtocol::OnOrderRecordSetfocus(){
	
} */
/*void CVIMESLISInstrumentProtocol::OnOrderRecordKillfocus(){
	
} */
int CVIMESLISInstrumentProtocol::OnOrderRecordCheckValue(){
	return 0;
} 
/*void CVIMESLISInstrumentProtocol::OnOrderRecordMapChange(){
	
} */
/*void CVIMESLISInstrumentProtocol::OnOrderRecordMapSetfocus(){
	
} */
/*void CVIMESLISInstrumentProtocol::OnOrderRecordMapKillfocus(){
	
} */
int CVIMESLISInstrumentProtocol::OnOrderRecordMapCheckValue(){
	return 0;
} 
/*void CVIMESLISInstrumentProtocol::OnResultRecordChange(){
	
} */
/*void CVIMESLISInstrumentProtocol::OnResultRecordSetfocus(){
	
} */
/*void CVIMESLISInstrumentProtocol::OnResultRecordKillfocus(){
	
} */
int CVIMESLISInstrumentProtocol::OnResultRecordCheckValue(){
	return 0;
} 
/*void CVIMESLISInstrumentProtocol::OnResultRecordMapChange(){
	
} */
/*void CVIMESLISInstrumentProtocol::OnResultRecordMapSetfocus(){
	
} */
/*void CVIMESLISInstrumentProtocol::OnResultRecordMapKillfocus(){
	
} */
int CVIMESLISInstrumentProtocol::OnResultRecordMapCheckValue(){
	return 0;
} 
void CVIMESLISInstrumentProtocol::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnAddHMSInstrumentProtocol();
} 
void CVIMESLISInstrumentProtocol::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnEditHMSInstrumentProtocol();
} 
void CVIMESLISInstrumentProtocol::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnDeleteHMSInstrumentProtocol();
} 
void CVIMESLISInstrumentProtocol::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveHMSInstrumentProtocol();
} 
void CVIMESLISInstrumentProtocol::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancelHMSInstrumentProtocol();
} 
void CVIMESLISInstrumentProtocol::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

} 
int CVIMESLISInstrumentProtocol::OnAddHMSInstrumentProtocol(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0;  
} 
int CVIMESLISInstrumentProtocol::OnEditHMSInstrumentProtocol(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0; 
} 
int CVIMESLISInstrumentProtocol::OnDeleteHMSInstrumentProtocol(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
 	szSQL.Format(_T("DELETE FROM hms_instrument_protocol WHERE  hip_id='%s' "), m_szID ); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret >= 0){ 
 		SetMode(VM_NONE); 
 		OnCancelHMSInstrumentProtocol(); 
 	}
	return 0;
 } 
int CVIMESLISInstrumentProtocol::OnSaveHMSInstrumentProtocol(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		szSQL = m_hms_instrument_protocolTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE hip_id "), m_szID); 
 		szSQL = m_hms_instrument_protocolTbl.GetUpdateSQL(_T("hip_id")); 
 		szSQL += szWhere; 
 	} 
 _fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		OnListLoadData();
 		SetMode(VM_VIEW); 
		m_wndAdd.SetFocus();
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
}
int CVIMESLISInstrumentProtocol::OnCancelHMSInstrumentProtocol(){
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
int CVIMESLISInstrumentProtocol::OnHMSInstrumentProtocolListLoadData(){
	return 0;
}
