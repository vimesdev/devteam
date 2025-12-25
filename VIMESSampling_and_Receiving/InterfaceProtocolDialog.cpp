#include "InterfaceProtocolDialog.h"
//#include "stdafx.h"
#include "MainFrm.h"
#include "SelectionEntryDialog.h"
#include "StringToken.h"


/*static void _OnProtocolNameChangeFnc(CWnd *pWnd){
	((CInterfaceProtocolDialog *)pWnd)->OnProtocolNameChange();
} */
/*static void _OnProtocolNameSetfocusFnc(CWnd *pWnd){
	((CInterfaceProtocolDialog *)pWnd)->OnProtocolNameSetfocus();} */ 
/*static void _OnProtocolNameKillfocusFnc(CWnd *pWnd){
	((CInterfaceProtocolDialog *)pWnd)->OnProtocolNameKillfocus();
} */
static int _OnProtocolNameCheckValueFnc(CWnd *pWnd){
	return ((CInterfaceProtocolDialog *)pWnd)->OnProtocolNameCheckValue();
} 
static void _OnFindButtonSelectFnc(CWnd *pWnd){
	CInterfaceProtocolDialog *pVw = (CInterfaceProtocolDialog *)pWnd;
	pVw->OnFindButtonSelect();
} 
static void _OnProtocolTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CInterfaceProtocolDialog* )pWnd)->OnProtocolTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnProtocolTypeSelendokFnc(CWnd *pWnd){
	((CInterfaceProtocolDialog *)pWnd)->OnProtocolTypeSelendok();
}
/*static void _OnProtocolTypeSetfocusFnc(CWnd *pWnd){
	((CInterfaceProtocolDialog *)pWnd)->OnProtocolTypeKillfocus();
}*/
/*static void _OnProtocolTypeKillfocusFnc(CWnd *pWnd){
	((CInterfaceProtocolDialog *)pWnd)->OnProtocolTypeKillfocus();
}*/
static long _OnProtocolTypeLoadDataFnc(CWnd *pWnd){
	return ((CInterfaceProtocolDialog *)pWnd)->OnProtocolTypeLoadData();
}
/*static void _OnProtocolTypeAddNewFnc(CWnd *pWnd){
	((CInterfaceProtocolDialog *)pWnd)->OnProtocolTypeAddNew();
}*/
static void _OnQueryModeSelectFnc(CWnd *pWnd){
	  ((CInterfaceProtocolDialog*)pWnd)->OnQueryModeSelect();
}
static void _OnDownloadModeSelectFnc(CWnd *pWnd){
	  ((CInterfaceProtocolDialog*)pWnd)->OnDownloadModeSelect();
}
/*static void _OnTimeOutChangeFnc(CWnd *pWnd){
	((CInterfaceProtocolDialog *)pWnd)->OnTimeOutChange();
} */
/*static void _OnTimeOutSetfocusFnc(CWnd *pWnd){
	((CInterfaceProtocolDialog *)pWnd)->OnTimeOutSetfocus();} */ 
/*static void _OnTimeOutKillfocusFnc(CWnd *pWnd){
	((CInterfaceProtocolDialog *)pWnd)->OnTimeOutKillfocus();
} */
static int _OnTimeOutCheckValueFnc(CWnd *pWnd){
	return ((CInterfaceProtocolDialog *)pWnd)->OnTimeOutCheckValue();
} 
/*static void _OnBufferSizeChangeFnc(CWnd *pWnd){
	((CInterfaceProtocolDialog *)pWnd)->OnBufferSizeChange();
} */
/*static void _OnBufferSizeSetfocusFnc(CWnd *pWnd){
	((CInterfaceProtocolDialog *)pWnd)->OnBufferSizeSetfocus();} */ 
/*static void _OnBufferSizeKillfocusFnc(CWnd *pWnd){
	((CInterfaceProtocolDialog *)pWnd)->OnBufferSizeKillfocus();
} */
static int _OnBufferSizeCheckValueFnc(CWnd *pWnd){
	return ((CInterfaceProtocolDialog *)pWnd)->OnBufferSizeCheckValue();
} 
static void _OnFormatSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CInterfaceProtocolDialog* )pWnd)->OnFormatSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnFormatSelendokFnc(CWnd *pWnd){
	((CInterfaceProtocolDialog *)pWnd)->OnFormatSelendok();
}
/*static void _OnFormatSetfocusFnc(CWnd *pWnd){
	((CInterfaceProtocolDialog *)pWnd)->OnFormatKillfocus();
}*/
/*static void _OnFormatKillfocusFnc(CWnd *pWnd){
	((CInterfaceProtocolDialog *)pWnd)->OnFormatKillfocus();
}*/
static long _OnFormatLoadDataFnc(CWnd *pWnd){
	return ((CInterfaceProtocolDialog *)pWnd)->OnFormatLoadData();
}
/*static void _OnFormatAddNewFnc(CWnd *pWnd){
	((CInterfaceProtocolDialog *)pWnd)->OnFormatAddNew();
}*/

/*static void _OnSampleChangeFnc(CWnd *pWnd){
	((CInterfaceProtocolDialog *)pWnd)->OnSampleChange();
} */
/*static void _OnSampleSetfocusFnc(CWnd *pWnd){
	((CInterfaceProtocolDialog *)pWnd)->OnSampleSetfocus();} */ 
/*static void _OnSampleKillfocusFnc(CWnd *pWnd){
	((CInterfaceProtocolDialog *)pWnd)->OnSampleKillfocus();
} */
static int _OnSampleCheckValueFnc(CWnd *pWnd){
	return ((CInterfaceProtocolDialog *)pWnd)->OnSampleCheckValue();
} 

/*static void _OnSeperatorChangeFnc(CWnd *pWnd){
	((CInterfaceProtocolDialog *)pWnd)->OnSeperatorChange();
} */
/*static void _OnSeperatorSetfocusFnc(CWnd *pWnd){
	((CInterfaceProtocolDialog *)pWnd)->OnSeperatorSetfocus();} */ 
/*static void _OnSeperatorKillfocusFnc(CWnd *pWnd){
	((CInterfaceProtocolDialog *)pWnd)->OnSeperatorKillfocus();
} */
static int _OnSeperatorCheckValueFnc(CWnd *pWnd){
	return ((CInterfaceProtocolDialog *)pWnd)->OnSeperatorCheckValue();
} 


static long _OnFieldListLoadDataFnc(CWnd *pWnd){
	return ((CInterfaceProtocolDialog*)pWnd)->OnFieldListLoadData();
} 
static void _OnFieldListDblClickFnc(CWnd *pWnd){
	((CInterfaceProtocolDialog*)pWnd)->OnFieldListDblClick();
} 
static void _OnFieldListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CInterfaceProtocolDialog*)pWnd)->OnFieldListSelectChange(nOldItem, nNewItem);
} 
static int _OnFieldListDeleteItemFnc(CWnd *pWnd){
	 return ((CInterfaceProtocolDialog*)pWnd)->OnFieldListDeleteItem();
} 

static int _OnFieldListUpdateSampleFnc(CWnd *pWnd){
	 return ((CInterfaceProtocolDialog*)pWnd)->OnFieldListUpdateSample();
} 


static long _OnTestListLoadDataFnc(CWnd *pWnd){
	return ((CInterfaceProtocolDialog*)pWnd)->OnTestListLoadData();
} 
static void _OnTestListDblClickFnc(CWnd *pWnd){
	((CInterfaceProtocolDialog*)pWnd)->OnTestListDblClick();
} 
static void _OnTestListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CInterfaceProtocolDialog*)pWnd)->OnTestListSelectChange(nOldItem, nNewItem);
} 
static int _OnTestListDeleteItemFnc(CWnd *pWnd){
	 return ((CInterfaceProtocolDialog*)pWnd)->OnTestListDeleteItem();
} 
static long _OnDescriptionListLoadDataFnc(CWnd *pWnd){
	return ((CInterfaceProtocolDialog*)pWnd)->OnDescriptionListLoadData();
} 
static void _OnDescriptionListDblClickFnc(CWnd *pWnd){
	((CInterfaceProtocolDialog*)pWnd)->OnDescriptionListDblClick();
} 
static void _OnDescriptionListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CInterfaceProtocolDialog*)pWnd)->OnDescriptionListSelectChange(nOldItem, nNewItem);
} 
static int _OnDescriptionListDeleteItemFnc(CWnd *pWnd){
	 return ((CInterfaceProtocolDialog*)pWnd)->OnDescriptionListDeleteItem();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CInterfaceProtocolDialog *pVw = (CInterfaceProtocolDialog *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CInterfaceProtocolDialog *pVw = (CInterfaceProtocolDialog *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CInterfaceProtocolDialog *pVw = (CInterfaceProtocolDialog *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CInterfaceProtocolDialog *pVw = (CInterfaceProtocolDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CInterfaceProtocolDialog *pVw = (CInterfaceProtocolDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnTestSelectFnc(CWnd *pWnd){
	CInterfaceProtocolDialog *pVw = (CInterfaceProtocolDialog *)pWnd;
	pVw->OnTestSelect();
} 
static int _OnAddInterfaceProtocolDialogFnc(CWnd *pWnd){
	 return ((CInterfaceProtocolDialog*)pWnd)->OnAddInterfaceProtocolDialog();
} 
static int _OnEditInterfaceProtocolDialogFnc(CWnd *pWnd){
	 return ((CInterfaceProtocolDialog*)pWnd)->OnEditInterfaceProtocolDialog();
} 
static int _OnDeleteInterfaceProtocolDialogFnc(CWnd *pWnd){
	 return ((CInterfaceProtocolDialog*)pWnd)->OnDeleteInterfaceProtocolDialog();
} 
static int _OnSaveInterfaceProtocolDialogFnc(CWnd *pWnd){
	 return ((CInterfaceProtocolDialog*)pWnd)->OnSaveInterfaceProtocolDialog();
} 
static int _OnCancelInterfaceProtocolDialogFnc(CWnd *pWnd){
	 return ((CInterfaceProtocolDialog*)pWnd)->OnCancelInterfaceProtocolDialog();
} 
CInterfaceProtocolDialog::CInterfaceProtocolDialog(CWnd *pParent):
	CGuiDialog(pParent)
{

	m_nDlgWidth = 805;
	m_nDlgHeight = 605;
	SetDefaultValues();
}
CInterfaceProtocolDialog::~CInterfaceProtocolDialog(){
}
void CInterfaceProtocolDialog::OnCreateComponents(){
	m_wndProtocolNameLabel.Create(this, _T("Protocol Name"), 5, 5, 105, 27);
	m_wndProtocolName.Create(this,110, 5, 210, 27); 
	m_wndFindButton.Create(this, _T("..."), 215, 5, 240, 27);
	m_wndProtocolTypeLabel.Create(this, _T("Protocol Type"), 245, 5, 330, 27);
	m_wndProtocolType.Create(this,335, 5, 460, 27); 
	m_wndQueryMode.Create(this, _T("Query Mode"), 465, 5, 585, 27);
	m_wndDownloadMode.Create(this, _T("Download Mode"), 590, 4, 710, 26);
	m_wndTimeOutLabel.Create(this, _T("Time Out"), 465, 31, 525, 53);
	m_wndTimeOut.Create(this,530, 31, 585, 53); 
	m_wndBufferSizeLabel.Create(this, _T("Buffer Size"), 590, 31, 660, 53);
	m_wndBufferSize.Create(this,665, 31, 745, 53); 
	m_wndFormatLabel.Create(this, _T("Message Format"), 5, 31, 105, 53);
	m_wndFormat.Create(this,110, 31, 460, 53); 
	m_wndSampleLabel.Create(this, _T("Sample"), 5, 58, 105, 80);
	m_wndSample.Create(this,110, 58, 585, 80); 
	m_wndSeperatorLabel.Create(this, _T("Seperator"), 590, 57, 660, 79);
	m_wndSeperator.Create(this,665, 57, 795, 79); 
	m_wndFieldList.Create(this,5, 85, 460, 313); 
	m_wndTestList.Create(this,465, 85, 795, 568); 
	m_wndDescriptionList.Create(this,5, 318, 460, 568); 
	m_wndAdd.Create(this, _T("&Add"), 425, 573, 495, 595);
	m_wndEdit.Create(this, _T("&Edit"), 500, 573, 570, 595);
	m_wndDelete.Create(this, _T("&Delete"), 575, 573, 645, 595);
	m_wndSave.Create(this, _T("&Save"), 650, 573, 720, 595);
	m_wndCancel.Create(this, _T("&Cancel"), 725, 573, 795, 595);
	m_wndTest.Create(this, _T("Test"), 3, 573, 73, 595);

}
void CInterfaceProtocolDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndProtocolName.SetLimitText(35);
	m_wndProtocolName.SetCheckValue(true);
	m_wndProtocolType.SetCheckValue(true);
	m_wndProtocolType.LimitText(35);
	m_wndTimeOut.SetLimitText(16);
	m_wndTimeOut.SetCheckValue(true);
	m_wndBufferSize.SetLimitText(16);
	m_wndBufferSize.SetCheckValue(true);
	m_wndFormat.SetCheckValue(true);
	m_wndFormat.LimitText(35);

	m_wndProtocolType.InsertColumn(0, _T("ID"), CFMT_NUMBER, 30);
	m_wndProtocolType.InsertColumn(1, _T("Description"), CFMT_TEXT, 100);

	m_wndFormat.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndFormat.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);
	
	m_wndFieldList.InsertColumn(0, _T("No"), CFMT_TEXT, 80);
	m_wndFieldList.InsertColumn(1, _T("Field"), CFMT_TEXT, 150);
	m_wndFieldList.InsertColumn(2, _T("Fields Data"), CFMT_TEXT, 100);
	m_wndFieldList.InsertColumn(3, _T("Length"), CFMT_NUMBER, 80);
	m_wndFieldList.SetEditLabel(2, GUI_TEXTCTRL);

	m_wndTestList.InsertColumn(0, _T("Code"), CFMT_TEXT, 50);
	m_wndTestList.InsertColumn(1, _T("Code In"), CFMT_TEXT, 50);
	m_wndTestList.InsertColumn(2, _T("Test ID"), CFMT_TEXT, 80);
	m_wndTestList.InsertColumn(3, _T("Test Name"), CFMT_TEXT, 120);


	m_wndDescriptionList.InsertColumn(0, _T("Field Name"), CFMT_TEXT, 150);
	m_wndDescriptionList.InsertColumn(1, _T("Description"), CFMT_TEXT, 280);
	SetMode(VM_NONE);

	m_wndDescriptionList.ModifyStyle(WS_TABSTOP, 0);
	m_wndFindButton.ModifyStyle(WS_TABSTOP, 0);

	m_hms_instrument_protocolTbl.SetTableName(_T("hms_instrument_protocol"));
	m_hms_instrument_protocolTbl.AddField(_T("hip_id"), dfText, 15); 
	m_hms_instrument_protocolTbl.AddField(_T("hip_name"), dfText, 35); 
	m_hms_instrument_protocolTbl.AddField(_T("hip_type"), dfLong); 
	m_hms_instrument_protocolTbl.AddField(_T("hip_mode"), dfLong); 
	m_hms_instrument_protocolTbl.AddField(_T("hip_timeout"), dfFloat); 
	m_hms_instrument_protocolTbl.AddField(_T("hip_buffsize"), dfLong); 
	m_hms_instrument_protocolTbl.AddField(_T("hip_sof"), dfText, 35); 
	m_hms_instrument_protocolTbl.AddField(_T("hip_eof"), dfText, 35); 
	m_hms_instrument_protocolTbl.AddField(_T("hip_hor"), dfText, 254); 
	m_hms_instrument_protocolTbl.AddField(_T("hip_por"), dfText, 254); 
	m_hms_instrument_protocolTbl.AddField(_T("hip_oor"), dfText, 254); 
	m_hms_instrument_protocolTbl.AddField(_T("hip_ror"), dfText, 254); 
	m_hms_instrument_protocolTbl.AddField(_T("hip_qor"), dfText, 254); 
	m_hms_instrument_protocolTbl.AddField(_T("hip_sep"), dfText, 15); 
	m_hms_instrument_protocolTbl.AddField(_T("hip_tor"), dfText, 81); 
	m_hms_instrument_protocolTbl.AddField(_T("hip_init"), dfText, 254); 
	m_hms_instrument_protocolTbl.AddField(_T("hip_active"), dfText, 1); 

	OnDescriptionListLoadData();
	for (int i =0; i < 7; i++){
		m_Messages.Add(_T(""));
	}

}
void CInterfaceProtocolDialog::OnSetWindowEvents(){
	//m_wndProtocolName.SetEvent(WE_CHANGE, _OnProtocolNameChangeFnc);
	//m_wndProtocolName.SetEvent(WE_SETFOCUS, _OnProtocolNameSetfocusFnc);
	//m_wndProtocolName.SetEvent(WE_KILLFOCUS, _OnProtocolNameKillfocusFnc);
	m_wndProtocolName.SetEvent(WE_CHECKVALUE, _OnProtocolNameCheckValueFnc);
	m_wndFindButton.SetEvent(WE_CLICK, _OnFindButtonSelectFnc);
	m_wndProtocolType.SetEvent(WE_SELENDOK, _OnProtocolTypeSelendokFnc);
	//m_wndProtocolType.SetEvent(WE_SETFOCUS, _OnProtocolTypeSetfocusFnc);
	//m_wndProtocolType.SetEvent(WE_KILLFOCUS, _OnProtocolTypeKillfocusFnc);
	m_wndProtocolType.SetEvent(WE_SELCHANGE, _OnProtocolTypeSelectChangeFnc);
	m_wndProtocolType.SetEvent(WE_LOADDATA, _OnProtocolTypeLoadDataFnc);
	//m_wndProtocolType.SetEvent(WE_ADDNEW, _OnProtocolTypeAddNewFnc);
	m_wndQueryMode.SetEvent(WE_CLICK, _OnQueryModeSelectFnc);
	m_wndDownloadMode.SetEvent(WE_CLICK, _OnDownloadModeSelectFnc);
	//m_wndTimeOut.SetEvent(WE_CHANGE, _OnTimeOutChangeFnc);
	//m_wndTimeOut.SetEvent(WE_SETFOCUS, _OnTimeOutSetfocusFnc);
	//m_wndTimeOut.SetEvent(WE_KILLFOCUS, _OnTimeOutKillfocusFnc);
	m_wndTimeOut.SetEvent(WE_CHECKVALUE, _OnTimeOutCheckValueFnc);
	//m_wndBufferSize.SetEvent(WE_CHANGE, _OnBufferSizeChangeFnc);
	//m_wndBufferSize.SetEvent(WE_SETFOCUS, _OnBufferSizeSetfocusFnc);
	//m_wndBufferSize.SetEvent(WE_KILLFOCUS, _OnBufferSizeKillfocusFnc);
	m_wndBufferSize.SetEvent(WE_CHECKVALUE, _OnBufferSizeCheckValueFnc);
	m_wndFormat.SetEvent(WE_SELENDOK, _OnFormatSelendokFnc);
	//m_wndFormat.SetEvent(WE_SETFOCUS, _OnFormatSetfocusFnc);
	//m_wndFormat.SetEvent(WE_KILLFOCUS, _OnFormatKillfocusFnc);
	m_wndFormat.SetEvent(WE_SELCHANGE, _OnFormatSelectChangeFnc);
	m_wndFormat.SetEvent(WE_LOADDATA, _OnFormatLoadDataFnc);
	//m_wndFormat.SetEvent(WE_ADDNEW, _OnFormatAddNewFnc);
	//m_wndSample.SetEvent(WE_CHANGE, _OnSampleChangeFnc);
	//m_wndSample.SetEvent(WE_SETFOCUS, _OnSampleSetfocusFnc);
	//m_wndSample.SetEvent(WE_KILLFOCUS, _OnSampleKillfocusFnc);
	m_wndSample.SetEvent(WE_CHECKVALUE, _OnSampleCheckValueFnc);
	//m_wndSeperator.SetEvent(WE_CHANGE, _OnSeperatorChangeFnc);
	//m_wndSeperator.SetEvent(WE_SETFOCUS, _OnSeperatorSetfocusFnc);
	//m_wndSeperator.SetEvent(WE_KILLFOCUS, _OnSeperatorKillfocusFnc);
	m_wndSeperator.SetEvent(WE_CHECKVALUE, _OnSeperatorCheckValueFnc);
	m_wndFieldList.SetEvent(WE_SELCHANGE, _OnFieldListSelectChangeFnc);
	m_wndFieldList.SetEvent(WE_LOADDATA, _OnFieldListLoadDataFnc);
	m_wndFieldList.SetEvent(WE_DBLCLICK, _OnFieldListDblClickFnc);
	m_wndFieldList.AddEvent(1, _T("Update To Sample"), _OnFieldListUpdateSampleFnc);
	m_wndTestList.SetEvent(WE_SELCHANGE, _OnTestListSelectChangeFnc);
	m_wndTestList.SetEvent(WE_LOADDATA, _OnTestListLoadDataFnc);
	m_wndTestList.SetEvent(WE_DBLCLICK, _OnTestListDblClickFnc);
	m_wndTestList.AddEvent(1, _T("Delete"), _OnTestListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndDescriptionList.SetEvent(WE_SELCHANGE, _OnDescriptionListSelectChangeFnc);
	m_wndDescriptionList.SetEvent(WE_LOADDATA, _OnDescriptionListLoadDataFnc);
	m_wndDescriptionList.SetEvent(WE_DBLCLICK, _OnDescriptionListDblClickFnc);
	m_wndDescriptionList.AddEvent(1, _T("Delete"), _OnDescriptionListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndTest.SetEvent(WE_CLICK, _OnTestSelectFnc);


}
void CInterfaceProtocolDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndProtocolName.GetDlgCtrlID(), m_szProtocolName);
	DDX_TextEx(pDX, m_wndProtocolType.GetDlgCtrlID(), m_szProtocolTypeKey);
	DDX_Radio(pDX, m_wndQueryMode.GetDlgCtrlID(), m_nQueryMode);
	DDX_Text(pDX, m_wndTimeOut.GetDlgCtrlID(), m_nTimeOut);
	DDX_Text(pDX, m_wndBufferSize.GetDlgCtrlID(), m_nBufferSize);
	DDX_TextEx(pDX, m_wndFormat.GetDlgCtrlID(), m_szFormatKey);
	DDX_Text(pDX, m_wndSample.GetDlgCtrlID(), m_szSample);
	DDX_Text(pDX, m_wndSeperator.GetDlgCtrlID(), m_szSeperator);
}
void CInterfaceProtocolDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM hms_instrument_protocol WHERE hip_id='%s' "), m_szProtocolName);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("hip_name"), m_szProtocolName);
		rs.GetValue(_T("hip_type"), m_szProtocolTypeKey);
		rs.GetValue(_T("hip_mode"), m_nQueryMode);
		rs.GetValue(_T("hip_timeout"), m_nTimeOut);
		rs.GetValue(_T("hip_buffsize"), m_nBufferSize);
		rs.GetValue(_T("hip_sep"), m_szSeperator);
		m_Messages.SetAt(0, rs.GetValue(_T("hip_sof")));
		m_Messages.SetAt(1, rs.GetValue(_T("hip_por")));
		m_Messages.SetAt(2, rs.GetValue(_T("hip_oor")));
		m_Messages.SetAt(3, rs.GetValue(_T("hip_ror")));
		m_Messages.SetAt(4, rs.GetValue(_T("hip_qor")));
		m_Messages.SetAt(5, rs.GetValue(_T("hip_sof")));
		m_Messages.SetAt(6, rs.GetValue(_T("hip_init")));
		m_wndProtocolType.SetCurSel(0);
		SetMode(VM_VIEW);
	}
	else
		SetMode(VM_NONE);

}
void CInterfaceProtocolDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_hms_instrument_protocolTbl.SetValue(_T("hip_id"), m_szProtocolName);
	m_hms_instrument_protocolTbl.SetValue(_T("hip_name"), m_szProtocolName);
	m_hms_instrument_protocolTbl.SetValue(_T("hip_type"), m_szProtocolTypeKey);
	m_hms_instrument_protocolTbl.SetValue(_T("hip_mode"), m_nQueryMode);
	m_hms_instrument_protocolTbl.SetValue(_T("hip_timeout"), m_nTimeOut);
	m_hms_instrument_protocolTbl.SetValue(_T("hip_buffsize"), m_nBufferSize);
	m_hms_instrument_protocolTbl.SetValue(_T("hip_active"), _T("Y"));
	m_hms_instrument_protocolTbl.SetValue(_T("hip_sof"), m_Messages[0]);
	m_hms_instrument_protocolTbl.SetValue(_T("hip_por"), m_Messages[1]);
	m_hms_instrument_protocolTbl.SetValue(_T("hip_oor"), m_Messages[2]);
	m_hms_instrument_protocolTbl.SetValue(_T("hip_ror"), m_Messages[3]);
	m_hms_instrument_protocolTbl.SetValue(_T("hip_qor"), m_Messages[4]);
	m_hms_instrument_protocolTbl.SetValue(_T("hip_tof"), m_Messages[5]);
	m_hms_instrument_protocolTbl.SetValue(_T("hip_init"), m_Messages[6]);
	m_hms_instrument_protocolTbl.SetValue(_T("hip_sep"), m_szSeperator);
}
void CInterfaceProtocolDialog::SetDefaultValues(){
	m_szProtocolName.Empty();
	m_szProtocolTypeKey.Empty();
	m_nQueryMode=0;
	m_nTimeOut=10.0;
	m_nBufferSize=1024;
	m_szFormatKey.Empty();
	m_szSample.Empty();
	m_szSeperator.Empty();
}
int CInterfaceProtocolDialog::SetMode(int nMode){ 
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
			m_wndProtocolName.SetFocus();
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 3, 4, -1); 
			m_wndProtocolName.EnableWindow(false);
			m_wndProtocolType.SetFocus();
 			break; 
 		case VM_VIEW: 
 			EnableControls(FALSE); 
 			EnableButtons(FALSE, 3, 4, -1); 
 			break; 
 		case VM_NONE: 
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 0, 1, 6, -1); 
 			SetDefaultValues(); 
 			break; 
 		}; 
		m_wndProtocolName.EnableWindow(true);
 		UpdateData(FALSE); 
 		return nOldMode; 
 	} 
/*void CInterfaceProtocolDialog::OnProtocolNameChange(){
	
} */
/*void CInterfaceProtocolDialog::OnProtocolNameSetfocus(){
	
} */
/*void CInterfaceProtocolDialog::OnProtocolNameKillfocus(){
	
} */
int CInterfaceProtocolDialog::OnProtocolNameCheckValue(){
	
	return 0;
} 
void CInterfaceProtocolDialog::OnFindButtonSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL, szID;
	CRecord rs(&pMF->m_db);
	szSQL.Format(_T("select * from hms_instrument_protocol order by hip_id"));
	rs.ExecSQL(szSQL);
	while(!rs.IsEOF())
	{
		if(!szID.IsEmpty())
			szID += _T(",");
		szID.AppendFormat(_T("%s"), rs.GetValue(_T("hip_id")));
		rs.MoveNext();
	}
	CSelectionEntryDialog dlg(szID);
	if(dlg.DoModal() == IDOK){
		CStringToken token(dlg.m_szSelects);
		token.GetAt(0, m_szProtocolName);
		UpdateData(false);
		GetDataToScreen();
	}
//	UpdateData(true);
//	GetDataToScreen();
} 
void CInterfaceProtocolDialog::OnProtocolTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CInterfaceProtocolDialog::OnProtocolTypeSelendok(){
	 
}
/*void CInterfaceProtocolDialog::OnProtocolTypeSetfocus(){
	
}*/
/*void CInterfaceProtocolDialog::OnProtocolTypeKillfocus(){
	
}*/
long CInterfaceProtocolDialog::OnProtocolTypeLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndProtocolType.AddItems(_T("1"), _T("ASTM"), NULL);
	m_wndProtocolType.AddItems(_T("2"), _T("SEPERATOR"), NULL);
	m_wndProtocolType.AddItems(_T("3"), _T("BINARY"), NULL);

/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndProtocolType.IsSearchKey() && !m_szProtocolTypeKey.IsEmpty()){
	};
	m_wndProtocolType.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndProtocolType.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CInterfaceProtocolDialog::OnProtocolTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CInterfaceProtocolDialog::OnQueryModeSelect(){
	
}
void CInterfaceProtocolDialog::OnDownloadModeSelect(){
	
}
/*void CInterfaceProtocolDialog::OnTimeOutChange(){
	
} */
/*void CInterfaceProtocolDialog::OnTimeOutSetfocus(){
	
} */
/*void CInterfaceProtocolDialog::OnTimeOutKillfocus(){
	
} */
int CInterfaceProtocolDialog::OnTimeOutCheckValue(){
	return 0;
} 
/*void CInterfaceProtocolDialog::OnBufferSizeChange(){
	
} */
/*void CInterfaceProtocolDialog::OnBufferSizeSetfocus(){
	
} */
/*void CInterfaceProtocolDialog::OnBufferSizeKillfocus(){
	
} */
int CInterfaceProtocolDialog::OnBufferSizeCheckValue(){
	return 0;
} 
void CInterfaceProtocolDialog::OnFormatSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CInterfaceProtocolDialog::OnFormatSelendok(){
	UpdateData(true);
	m_szSample = m_Messages[ToInt(m_szFormatKey)];
	UpdateData(false);	 
}
/*void CInterfaceProtocolDialog::OnFormatSetfocus(){
	
}*/
/*void CInterfaceProtocolDialog::OnFormatKillfocus(){
	
}*/
long CInterfaceProtocolDialog::OnFormatLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndFormat.AddItems(_T("0"), _T("Begin Transmission"), NULL);
	m_wndFormat.AddItems(_T("1"), _T("Patient Record"), NULL);
	m_wndFormat.AddItems(_T("2"), _T("Order Record"), NULL);
	m_wndFormat.AddItems(_T("3"), _T("Result Record"), NULL);
	m_wndFormat.AddItems(_T("4"), _T("Query Record"), NULL);
	m_wndFormat.AddItems(_T("5"), _T("End Transmission"), NULL);
	m_wndFormat.AddItems(_T("6"), _T("Initialize Data"), NULL);
	
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndFormat.IsSearchKey() && !m_szFormatKey.IsEmpty()){
	};
	m_wndFormat.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndFormat.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CInterfaceProtocolDialog::OnFormatAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */


/*void CInterfaceProtocolDialog::OnSampleChange(){
	
} */
/*void CInterfaceProtocolDialog::OnSampleSetfocus(){
	
} */
/*void CInterfaceProtocolDialog::OnSampleKillfocus(){
	
} */
int CInterfaceProtocolDialog::OnSampleCheckValue(){
	UpdateData(true);
	m_Messages[ToInt(m_szFormatKey)] = m_szSample;
	return 0;
} 

/*void CInterfaceProtocolDialog::OnSeperatorChange(){
	
} */
/*void CInterfaceProtocolDialog::OnSeperatorSetfocus(){
	
} */
/*void CInterfaceProtocolDialog::OnSeperatorKillfocus(){
	
} */
int CInterfaceProtocolDialog::OnSeperatorCheckValue(){
	UpdateData(true);
	CString szIndex, tmpStr, szSep;
	int nIndex=1, nLength;
	m_wndFieldList.BeginLoad();
	bool bFlag = false;
	LPCTSTR pstr = m_szSample;
	tmpStr.Empty();
	if(*pstr == NULL)
		return -1;
	while(*pstr != NULL){
		bFlag = false;
		for (int i =0; i < _tcslen(m_szSeperator); i++){
			if(*pstr == m_szSeperator[i]){
				szIndex.Format(_T("Field %d"), nIndex++);
				szSep.Format(_T("%c"), *pstr);
				if(m_szFormatKey == _T("3") && m_szSeperator == _T("|"))
				{
					nLength = ToInt(tmpStr.Left(2));
					tmpStr = tmpStr.Mid(2);
				}
				else
                	nLength = tmpStr.GetLength();
				m_wndFieldList.AddItems(szIndex, szSep, tmpStr, ToString(nLength), NULL);
				tmpStr.Empty();
				bFlag = true;
				break;
			}
		}
		if(!bFlag)
			tmpStr += *pstr;
		pstr++;
	}
	szIndex.Format(_T("Field %d"), nIndex++);
	nLength = tmpStr.GetLength();
	if(m_szProtocolTypeKey == _T("1"))
		szSep = _T("\r\n");
	m_wndFieldList.AddItems(szIndex, szSep, tmpStr, ToString(nLength), NULL);
	m_wndFieldList.EndLoad();
	return 0;
} 


void CInterfaceProtocolDialog::OnFieldListDblClick(){
	
} 
void CInterfaceProtocolDialog::OnFieldListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CInterfaceProtocolDialog::OnFieldListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 

int CInterfaceProtocolDialog::OnFieldListUpdateSample(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	int nLength;
	CString tmpStr;
	if(m_szProtocolTypeKey == _T("BINARY") && m_wndFieldList.GetItemCount() > 0){
		m_szSample.Empty();
		for (int i =0; i < m_wndFieldList.GetItemCount(); i++){
			nLength = ToInt(m_wndFieldList.GetItemText(i, 3));
			tmpStr.Format(_T("%.2d%s"), nLength, m_wndFieldList.GetItemText(i, 2));
			if(!m_szSample.IsEmpty())
				m_szSample += _T("|");
			m_szSample += tmpStr;
			
		}
		m_szSeperator = _T("|");
		UpdateData(false);
		return 0;
	}
	m_szSample.Empty();
		for (int i =0; i < m_wndFieldList.GetItemCount(); i++){
			m_szSample += m_wndFieldList.GetItemText(i, 2);
			m_szSample += m_wndFieldList.GetItemText(i, 1);
		}
		m_Messages[ToInt(m_szFormatKey)] = m_szSample;
		UpdateData(false);

	 return 0;
} 

long CInterfaceProtocolDialog::OnFieldListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndFieldList.BeginLoad(); 
	m_wndFieldList.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndFieldList.AddItems(
			rs.GetValue(_T("No")), 
			rs.GetValue(_T("Field")), 
			rs.GetValue(_T("FieldsData")), 
			rs.GetValue(_T("Length")), NULL);
		rs.MoveNext();
	}
	m_wndFieldList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CInterfaceProtocolDialog::OnTestListDblClick(){
	
} 
void CInterfaceProtocolDialog::OnTestListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CInterfaceProtocolDialog::OnTestListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CInterfaceProtocolDialog::OnTestListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndTestList.BeginLoad(); 
	m_wndTestList.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndTestList.AddItems(
			rs.GetValue(_T("Code")), 
			rs.GetValue(_T("CodeIn")), 
			rs.GetValue(_T("TestID")), 
			rs.GetValue(_T("TestName")), NULL);
		rs.MoveNext();
	}
	m_wndTestList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CInterfaceProtocolDialog::OnDescriptionListDblClick(){
	
} 
void CInterfaceProtocolDialog::OnDescriptionListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CInterfaceProtocolDialog::OnDescriptionListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CInterfaceProtocolDialog::OnDescriptionListLoadData(){
	m_wndDescriptionList.BeginLoad(); 
	m_wndDescriptionList.AddItems(_T("<SOH>"), _T("Start of Header 0x01"), NULL);
	m_wndDescriptionList.AddItems(_T("<STX>"), _T("Start of text 0x02"), NULL);
	m_wndDescriptionList.AddItems(_T("<ETX>"), _T("End of text 0x03"), NULL);
	m_wndDescriptionList.AddItems(_T("<EOT>"), _T("End of Transmission 0x04"), NULL);
	m_wndDescriptionList.AddItems(_T("#"), _T("Space"), NULL);
	m_wndDescriptionList.AddItems(_T("<CR>"), _T("Cariage Line 0x0D"), NULL);
	m_wndDescriptionList.AddItems(_T("<LF>"), _T("Line Feed 0x0C"), NULL);
	m_wndDescriptionList.AddItems(_T("<PID>"), _T("Patient ID"), NULL);
	m_wndDescriptionList.AddItems(_T("<PNAME>"), _T("Patient Name"), NULL);
	m_wndDescriptionList.AddItems(_T("<AGE>"), _T("Age"), NULL);
	m_wndDescriptionList.AddItems(_T("<MONTH>"), _T("Month"), NULL);
	m_wndDescriptionList.AddItems(_T("<SEX>"), _T("Sex"), NULL);
	m_wndDescriptionList.AddItems(_T("<SID>"), _T("Sample ID"), NULL);
	m_wndDescriptionList.AddItems(_T("<ST>"), _T("Sample Type"), NULL);
	m_wndDescriptionList.AddItems(_T("<TRAY>"), _T("Tray ID"), NULL);
	m_wndDescriptionList.AddItems(_T("<RACK>"), _T("Rack No"), NULL);
	m_wndDescriptionList.AddItems(_T("<CUP>"), _T("Cup No"), NULL);
	m_wndDescriptionList.AddItems(_T("<TESTLIST>"), _T("List of test code"), NULL);	
	m_wndDescriptionList.AddItems(_T("<RESULT>"), _T("Result of test"), NULL);	
	
	m_wndDescriptionList.EndLoad(); 
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndDescriptionList.BeginLoad(); 
	m_wndDescriptionList.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDescriptionList.AddItems(
			rs.GetValue(_T("FieldName")), 
			rs.GetValue(_T("Description")), NULL);
		rs.MoveNext();
	}
	m_wndDescriptionList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CInterfaceProtocolDialog::OnAddSelect(){
	OnAddInterfaceProtocolDialog();
	
} 
void CInterfaceProtocolDialog::OnEditSelect(){
	OnEditInterfaceProtocolDialog();	
} 
void CInterfaceProtocolDialog::OnDeleteSelect(){
	OnDeleteInterfaceProtocolDialog();
	
} 
void CInterfaceProtocolDialog::OnSaveSelect(){
	OnSaveInterfaceProtocolDialog();
	
} 
void CInterfaceProtocolDialog::OnCancelSelect(){
	OnCancelInterfaceProtocolDialog();	
} 
void CInterfaceProtocolDialog::OnTestSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CInterfaceProtocolDialog::OnAddInterfaceProtocolDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0;  
} 
int CInterfaceProtocolDialog::OnEditInterfaceProtocolDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0; 
} 
int CInterfaceProtocolDialog::OnDeleteInterfaceProtocolDialog(){
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
 		OnCancelInterfaceProtocolDialog(); 
 	}
return 0;
 } 
int CInterfaceProtocolDialog::OnSaveInterfaceProtocolDialog(){
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
		szWhere.Format(_T(" WHERE hip_id='%s'"), m_szProtocolName); 
 		szSQL = m_hms_instrument_protocolTbl.GetUpdateSQL(); 
 		szSQL += szWhere; 
 	} 
 _fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 
}
int CInterfaceProtocolDialog::OnCancelInterfaceProtocolDialog(){
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
int CInterfaceProtocolDialog::OnInterfaceProtocolDialogListLoadData(){
	return 0;
}
