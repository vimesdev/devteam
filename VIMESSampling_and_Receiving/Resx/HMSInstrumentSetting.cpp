#include "HMSInstrumentSetting.h"
#include "MainFrm.h"
/*static void _OnIDChangeFnc(CWnd *pWnd){
	((CHMSInstrumentSetting *)pWnd)->OnIDChange();
} */
/*static void _OnIDSetfocusFnc(CWnd *pWnd){
	((CHMSInstrumentSetting *)pWnd)->OnIDSetfocus();} */ 
/*static void _OnIDKillfocusFnc(CWnd *pWnd){
	((CHMSInstrumentSetting *)pWnd)->OnIDKillfocus();
} */
static int _OnIDCheckValueFnc(CWnd *pWnd){
	return ((CHMSInstrumentSetting *)pWnd)->OnIDCheckValue();
} 
/*static void _OnModelChangeFnc(CWnd *pWnd){
	((CHMSInstrumentSetting *)pWnd)->OnModelChange();
} */
/*static void _OnModelSetfocusFnc(CWnd *pWnd){
	((CHMSInstrumentSetting *)pWnd)->OnModelSetfocus();} */ 
/*static void _OnModelKillfocusFnc(CWnd *pWnd){
	((CHMSInstrumentSetting *)pWnd)->OnModelKillfocus();
} */
static int _OnModelCheckValueFnc(CWnd *pWnd){
	return ((CHMSInstrumentSetting *)pWnd)->OnModelCheckValue();
} 
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CHMSInstrumentSetting *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CHMSInstrumentSetting *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CHMSInstrumentSetting *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSInstrumentSetting *)pWnd)->OnNameCheckValue();
} 
static void _OnPortSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSInstrumentSetting* )pWnd)->OnPortSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPortSelendokFnc(CWnd *pWnd){
	((CHMSInstrumentSetting *)pWnd)->OnPortSelendok();
}
/*static void _OnPortSetfocusFnc(CWnd *pWnd){
	((CHMSInstrumentSetting *)pWnd)->OnPortKillfocus();
}*/
/*static void _OnPortKillfocusFnc(CWnd *pWnd){
	((CHMSInstrumentSetting *)pWnd)->OnPortKillfocus();
}*/
static long _OnPortLoadDataFnc(CWnd *pWnd){
	return ((CHMSInstrumentSetting *)pWnd)->OnPortLoadData();
}
/*static void _OnPortAddNewFnc(CWnd *pWnd){
	((CHMSInstrumentSetting *)pWnd)->OnPortAddNew();
}*/
static void _OnBaudRateSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSInstrumentSetting* )pWnd)->OnBaudRateSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnBaudRateSelendokFnc(CWnd *pWnd){
	((CHMSInstrumentSetting *)pWnd)->OnBaudRateSelendok();
}
/*static void _OnBaudRateSetfocusFnc(CWnd *pWnd){
	((CHMSInstrumentSetting *)pWnd)->OnBaudRateKillfocus();
}*/
/*static void _OnBaudRateKillfocusFnc(CWnd *pWnd){
	((CHMSInstrumentSetting *)pWnd)->OnBaudRateKillfocus();
}*/
static long _OnBaudRateLoadDataFnc(CWnd *pWnd){
	return ((CHMSInstrumentSetting *)pWnd)->OnBaudRateLoadData();
}
/*static void _OnBaudRateAddNewFnc(CWnd *pWnd){
	((CHMSInstrumentSetting *)pWnd)->OnBaudRateAddNew();
}*/
static void _OnDataBitsSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSInstrumentSetting* )pWnd)->OnDataBitsSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDataBitsSelendokFnc(CWnd *pWnd){
	((CHMSInstrumentSetting *)pWnd)->OnDataBitsSelendok();
}
/*static void _OnDataBitsSetfocusFnc(CWnd *pWnd){
	((CHMSInstrumentSetting *)pWnd)->OnDataBitsKillfocus();
}*/
/*static void _OnDataBitsKillfocusFnc(CWnd *pWnd){
	((CHMSInstrumentSetting *)pWnd)->OnDataBitsKillfocus();
}*/
static long _OnDataBitsLoadDataFnc(CWnd *pWnd){
	return ((CHMSInstrumentSetting *)pWnd)->OnDataBitsLoadData();
}
/*static void _OnDataBitsAddNewFnc(CWnd *pWnd){
	((CHMSInstrumentSetting *)pWnd)->OnDataBitsAddNew();
}*/
static void _OnParitySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSInstrumentSetting* )pWnd)->OnParitySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnParitySelendokFnc(CWnd *pWnd){
	((CHMSInstrumentSetting *)pWnd)->OnParitySelendok();
}
/*static void _OnParitySetfocusFnc(CWnd *pWnd){
	((CHMSInstrumentSetting *)pWnd)->OnParityKillfocus();
}*/
/*static void _OnParityKillfocusFnc(CWnd *pWnd){
	((CHMSInstrumentSetting *)pWnd)->OnParityKillfocus();
}*/
static long _OnParityLoadDataFnc(CWnd *pWnd){
	return ((CHMSInstrumentSetting *)pWnd)->OnParityLoadData();
}
/*static void _OnParityAddNewFnc(CWnd *pWnd){
	((CHMSInstrumentSetting *)pWnd)->OnParityAddNew();
}*/
static void _OnStopBitsSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSInstrumentSetting* )pWnd)->OnStopBitsSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStopBitsSelendokFnc(CWnd *pWnd){
	((CHMSInstrumentSetting *)pWnd)->OnStopBitsSelendok();
}
/*static void _OnStopBitsSetfocusFnc(CWnd *pWnd){
	((CHMSInstrumentSetting *)pWnd)->OnStopBitsKillfocus();
}*/
/*static void _OnStopBitsKillfocusFnc(CWnd *pWnd){
	((CHMSInstrumentSetting *)pWnd)->OnStopBitsKillfocus();
}*/
static long _OnStopBitsLoadDataFnc(CWnd *pWnd){
	return ((CHMSInstrumentSetting *)pWnd)->OnStopBitsLoadData();
}
/*static void _OnStopBitsAddNewFnc(CWnd *pWnd){
	((CHMSInstrumentSetting *)pWnd)->OnStopBitsAddNew();
}*/
static void _OnFlowControlSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSInstrumentSetting* )pWnd)->OnFlowControlSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnFlowControlSelendokFnc(CWnd *pWnd){
	((CHMSInstrumentSetting *)pWnd)->OnFlowControlSelendok();
}
/*static void _OnFlowControlSetfocusFnc(CWnd *pWnd){
	((CHMSInstrumentSetting *)pWnd)->OnFlowControlKillfocus();
}*/
/*static void _OnFlowControlKillfocusFnc(CWnd *pWnd){
	((CHMSInstrumentSetting *)pWnd)->OnFlowControlKillfocus();
}*/
static long _OnFlowControlLoadDataFnc(CWnd *pWnd){
	return ((CHMSInstrumentSetting *)pWnd)->OnFlowControlLoadData();
}
/*static void _OnFlowControlAddNewFnc(CWnd *pWnd){
	((CHMSInstrumentSetting *)pWnd)->OnFlowControlAddNew();
}*/
static long _OnInstrumentListLoadDataFnc(CWnd *pWnd){
	return ((CHMSInstrumentSetting*)pWnd)->OnInstrumentListLoadData();
} 
static void _OnInstrumentListDblClickFnc(CWnd *pWnd){
	((CHMSInstrumentSetting*)pWnd)->OnInstrumentListDblClick();
} 
static void _OnInstrumentListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSInstrumentSetting*)pWnd)->OnInstrumentListSelectChange(nOldItem, nNewItem);
} 
static int _OnInstrumentListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSInstrumentSetting*)pWnd)->OnInstrumentListDeleteItem();
} 
static void _OnSendTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSInstrumentSetting* )pWnd)->OnSendTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSendTypeSelendokFnc(CWnd *pWnd){
	((CHMSInstrumentSetting *)pWnd)->OnSendTypeSelendok();
}
/*static void _OnSendTypeSetfocusFnc(CWnd *pWnd){
	((CHMSInstrumentSetting *)pWnd)->OnSendTypeKillfocus();
}*/
/*static void _OnSendTypeKillfocusFnc(CWnd *pWnd){
	((CHMSInstrumentSetting *)pWnd)->OnSendTypeKillfocus();
}*/
static long _OnSendTypeLoadDataFnc(CWnd *pWnd){
	return ((CHMSInstrumentSetting *)pWnd)->OnSendTypeLoadData();
}
/*static void _OnSendTypeAddNewFnc(CWnd *pWnd){
	((CHMSInstrumentSetting *)pWnd)->OnSendTypeAddNew();
}*/
static void _OnTestGroupSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSInstrumentSetting* )pWnd)->OnTestGroupSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTestGroupSelendokFnc(CWnd *pWnd){
	((CHMSInstrumentSetting *)pWnd)->OnTestGroupSelendok();
}
/*static void _OnTestGroupSetfocusFnc(CWnd *pWnd){
	((CHMSInstrumentSetting *)pWnd)->OnTestGroupKillfocus();
}*/
/*static void _OnTestGroupKillfocusFnc(CWnd *pWnd){
	((CHMSInstrumentSetting *)pWnd)->OnTestGroupKillfocus();
}*/
static long _OnTestGroupLoadDataFnc(CWnd *pWnd){
	return ((CHMSInstrumentSetting *)pWnd)->OnTestGroupLoadData();
}
/*static void _OnTestGroupAddNewFnc(CWnd *pWnd){
	((CHMSInstrumentSetting *)pWnd)->OnTestGroupAddNew();
}*/
static void _OnProtocolSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSInstrumentSetting* )pWnd)->OnProtocolSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnProtocolSelendokFnc(CWnd *pWnd){
	((CHMSInstrumentSetting *)pWnd)->OnProtocolSelendok();
}
/*static void _OnProtocolSetfocusFnc(CWnd *pWnd){
	((CHMSInstrumentSetting *)pWnd)->OnProtocolKillfocus();
}*/
/*static void _OnProtocolKillfocusFnc(CWnd *pWnd){
	((CHMSInstrumentSetting *)pWnd)->OnProtocolKillfocus();
}*/
static long _OnProtocolLoadDataFnc(CWnd *pWnd){
	return ((CHMSInstrumentSetting *)pWnd)->OnProtocolLoadData();
}
/*static void _OnProtocolAddNewFnc(CWnd *pWnd){
	((CHMSInstrumentSetting *)pWnd)->OnProtocolAddNew();
}*/
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSInstrumentSetting*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSInstrumentSetting*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSInstrumentSetting*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSInstrumentSetting*)pWnd)->OnListDeleteItem();
} 
static void _OnActiveSelectFnc(CWnd *pWnd){
	 ((CHMSInstrumentSetting*)pWnd)->OnActiveSelect();
}
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSInstrumentSetting *pVw = (CHMSInstrumentSetting *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CHMSInstrumentSetting *pVw = (CHMSInstrumentSetting *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSInstrumentSetting *pVw = (CHMSInstrumentSetting *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSInstrumentSetting *pVw = (CHMSInstrumentSetting *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSInstrumentSetting *pVw = (CHMSInstrumentSetting *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSInstrumentSetting *pVw = (CHMSInstrumentSetting *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSInstrumentSettingFnc(CWnd *pWnd){
	 return ((CHMSInstrumentSetting*)pWnd)->OnAddHMSInstrumentSetting();
} 
static int _OnEditHMSInstrumentSettingFnc(CWnd *pWnd){
	 return ((CHMSInstrumentSetting*)pWnd)->OnEditHMSInstrumentSetting();
} 
static int _OnDeleteHMSInstrumentSettingFnc(CWnd *pWnd){
	 return ((CHMSInstrumentSetting*)pWnd)->OnDeleteHMSInstrumentSetting();
} 
static int _OnSaveHMSInstrumentSettingFnc(CWnd *pWnd){
	 return ((CHMSInstrumentSetting*)pWnd)->OnSaveHMSInstrumentSetting();
} 
static int _OnCancelHMSInstrumentSettingFnc(CWnd *pWnd){
	 return ((CHMSInstrumentSetting*)pWnd)->OnCancelHMSInstrumentSetting();
} 
CHMSInstrumentSetting::CHMSInstrumentSetting(){

	m_nDlgWidth = 1019;
	m_nDlgHeight = 623;
	SetDefaultValues();
}
CHMSInstrumentSetting::~CHMSInstrumentSetting(){
}
void CHMSInstrumentSetting::OnCreateComponents(){
	m_wndIDLabel.Create(this, _T("ID"), 315, 30, 400, 55);
	m_wndID.Create(this,405, 30, 500, 55); 
	m_wndModelLabel.Create(this, _T("Model"), 505, 30, 590, 55);
	m_wndModel.Create(this,595, 30, 690, 55); 
	m_wndInstrumentSetting.Create(this, _T("Instrument Setting"), 5, 5, 960, 150);
	m_wndNameLabel.Create(this, _T("Name"), 695, 30, 795, 55);
	m_wndName.Create(this,800, 30, 955, 55); 
	m_wndDataList.Create(this, _T("Data List"), 5, 155, 960, 570);
	m_wndPortLabel.Create(this, _T("Port"), 315, 60, 400, 85);
	m_wndPort.Create(this,405, 60, 500, 85); 
	m_wndBaudRateLabel.Create(this, _T("Baud Rate"), 505, 60, 590, 85);
	m_wndBaudRate.Create(this,595, 60, 690, 85); 
	m_wndDataBitsLabel.Create(this, _T("Data Bits"), 695, 60, 795, 85);
	m_wndDataBits.Create(this,800, 60, 955, 85); 
	m_wndParityLabel.Create(this, _T("Parity"), 315, 90, 400, 115);
	m_wndParity.Create(this,405, 90, 500, 115); 
	m_wndStopBitsLabel.Create(this, _T("Stop Bits"), 505, 90, 590, 115);
	m_wndStopBits.Create(this,595, 90, 690, 115); 
	m_wndFlowControlLabel.Create(this, _T("Flow Control"), 695, 90, 795, 115);
	m_wndFlowControl.Create(this,800, 90, 955, 115); 
	m_wndInstrumentList.Create(this,10, 30, 310, 145); 
	m_wndSendTypeLabel.Create(this, _T("Send Type"), 315, 120, 400, 145);
	m_wndSendType.Create(this,405, 120, 500, 145); 
	m_wndTestGroupLabel.Create(this, _T("Test Group"), 505, 120, 590, 145);
	m_wndTestGroup.Create(this,595, 120, 690, 145); 
	m_wndProtocolLabel.Create(this, _T("Protocol"), 695, 120, 795, 145);
	m_wndProtocol.Create(this,800, 120, 955, 145); 
	m_wndList.Create(this,10, 180, 955, 565); 
	m_wndActive.Create(this, _T("Active"), 5, 574, 115, 599);
	m_wndAdd.Create(this, _T("&Add"), 455, 575, 535, 600);
	m_wndEdit.Create(this, _T("&Edit"), 540, 575, 620, 600);
	m_wndDelete.Create(this, _T("Delete"), 625, 575, 705, 600);
	m_wndSave.Create(this, _T("&Save"), 710, 575, 790, 600);
	m_wndCancel.Create(this, _T("&Cancel"), 795, 575, 875, 600);
	m_wndClose.Create(this, _T("&Close"), 880, 575, 960, 600);

}
void CHMSInstrumentSetting::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndID.SetCheckValue(true);
	m_wndModel.SetLimitText(15);
	m_wndModel.SetCheckValue(true);
	m_wndName.SetLimitText(35);
	m_wndName.SetCheckValue(true);
	m_wndPort.SetCheckValue(true);
	m_wndPort.LimitText(7);
	m_wndBaudRate.SetCheckValue(true);
	m_wndDataBits.SetCheckValue(true);
	m_wndParity.SetCheckValue(true);
	m_wndStopBits.SetCheckValue(true);
	m_wndStopBits.LimitText(4);
	m_wndFlowControl.SetCheckValue(true);
	m_wndSendType.SetCheckValue(true);
	m_wndTestGroup.SetCheckValue(true);
	m_wndTestGroup.LimitText(35);
	m_wndProtocol.SetCheckValue(true);
	m_wndProtocol.LimitText(15);


	m_wndPort.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndPort.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndBaudRate.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndBaudRate.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndDataBits.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDataBits.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndParity.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndParity.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndStopBits.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndStopBits.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndFlowControl.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndFlowControl.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndInstrumentList.InsertColumn(0, _T("ID"), CFMT_TEXT, 40);
	m_wndInstrumentList.InsertColumn(1, _T("Name"), CFMT_TEXT, 140);


	m_wndSendType.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndSendType.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndTestGroup.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndTestGroup.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndProtocol.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndProtocol.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndList.InsertColumn(0, _T("Index"), CFMT_TEXT, 30);
	m_wndList.InsertColumn(1, _T("Test ID"), CFMT_TEXT, 70);
	m_wndList.InsertColumn(2, _T("Code"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(3, _T("Code In"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(4, _T("Name"), CFMT_TEXT, 120);
	m_wndList.InsertColumn(5, _T("Unit"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(6, _T("Male Index"), CFMT_TEXT, 90);
	m_wndList.InsertColumn(7, _T("Female Index"), CFMT_TEXT, 90);
	m_wndList.InsertColumn(8, _T("Min Index"), CFMT_TEXT, 70);
	m_wndList.InsertColumn(9, _T("Max Index"), CFMT_TEXT, 70);
	m_wndList.InsertColumn(10, _T("Print Index"), CFMT_TEXT, 70);
	m_hms_instrumentTbl.SetTableName(_T("hms_instrument"));
	m_hms_instrumentTbl.AddField(_T("hi_id"), dfLong); 
	m_hms_instrumentTbl.AddField(_T("hi_name"), dfText, 35); 
	m_hms_instrumentTbl.AddField(_T("hi_model"), dfText, 15); 
	m_hms_instrumentTbl.AddField(_T("hi_protocol"), dfText, 15); 
	m_hms_instrumentTbl.AddField(_T("hi_ip"), dfText, 15); 
	m_hms_instrumentTbl.AddField(_T("hi_port"), dfText, 7); 
	m_hms_instrumentTbl.AddField(_T("hi_baudrate"), dfLong); 
	m_hms_instrumentTbl.AddField(_T("hi_databits"), dfLong); 
	m_hms_instrumentTbl.AddField(_T("hi_parity"), dfLong); 
	m_hms_instrumentTbl.AddField(_T("hi_stopbits"), dfFloat); 
	m_hms_instrumentTbl.AddField(_T("hi_flowcontrol"), dfLong); 
	m_hms_instrumentTbl.AddField(_T("hi_sendtype"), dfLong); 

}
void CHMSInstrumentSetting::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndID.SetEvent(WE_CHANGE, _OnIDChangeFnc);
	//m_wndID.SetEvent(WE_SETFOCUS, _OnIDSetfocusFnc);
	//m_wndID.SetEvent(WE_KILLFOCUS, _OnIDKillfocusFnc);
	m_wndID.SetEvent(WE_CHECKVALUE, _OnIDCheckValueFnc);
	//m_wndModel.SetEvent(WE_CHANGE, _OnModelChangeFnc);
	//m_wndModel.SetEvent(WE_SETFOCUS, _OnModelSetfocusFnc);
	//m_wndModel.SetEvent(WE_KILLFOCUS, _OnModelKillfocusFnc);
	m_wndModel.SetEvent(WE_CHECKVALUE, _OnModelCheckValueFnc);
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	m_wndPort.SetEvent(WE_SELENDOK, _OnPortSelendokFnc);
	//m_wndPort.SetEvent(WE_SETFOCUS, _OnPortSetfocusFnc);
	//m_wndPort.SetEvent(WE_KILLFOCUS, _OnPortKillfocusFnc);
	m_wndPort.SetEvent(WE_SELCHANGE, _OnPortSelectChangeFnc);
	m_wndPort.SetEvent(WE_LOADDATA, _OnPortLoadDataFnc);
	//m_wndPort.SetEvent(WE_ADDNEW, _OnPortAddNewFnc);
	m_wndBaudRate.SetEvent(WE_SELENDOK, _OnBaudRateSelendokFnc);
	//m_wndBaudRate.SetEvent(WE_SETFOCUS, _OnBaudRateSetfocusFnc);
	//m_wndBaudRate.SetEvent(WE_KILLFOCUS, _OnBaudRateKillfocusFnc);
	m_wndBaudRate.SetEvent(WE_SELCHANGE, _OnBaudRateSelectChangeFnc);
	m_wndBaudRate.SetEvent(WE_LOADDATA, _OnBaudRateLoadDataFnc);
	//m_wndBaudRate.SetEvent(WE_ADDNEW, _OnBaudRateAddNewFnc);
	m_wndDataBits.SetEvent(WE_SELENDOK, _OnDataBitsSelendokFnc);
	//m_wndDataBits.SetEvent(WE_SETFOCUS, _OnDataBitsSetfocusFnc);
	//m_wndDataBits.SetEvent(WE_KILLFOCUS, _OnDataBitsKillfocusFnc);
	m_wndDataBits.SetEvent(WE_SELCHANGE, _OnDataBitsSelectChangeFnc);
	m_wndDataBits.SetEvent(WE_LOADDATA, _OnDataBitsLoadDataFnc);
	//m_wndDataBits.SetEvent(WE_ADDNEW, _OnDataBitsAddNewFnc);
	m_wndParity.SetEvent(WE_SELENDOK, _OnParitySelendokFnc);
	//m_wndParity.SetEvent(WE_SETFOCUS, _OnParitySetfocusFnc);
	//m_wndParity.SetEvent(WE_KILLFOCUS, _OnParityKillfocusFnc);
	m_wndParity.SetEvent(WE_SELCHANGE, _OnParitySelectChangeFnc);
	m_wndParity.SetEvent(WE_LOADDATA, _OnParityLoadDataFnc);
	//m_wndParity.SetEvent(WE_ADDNEW, _OnParityAddNewFnc);
	m_wndStopBits.SetEvent(WE_SELENDOK, _OnStopBitsSelendokFnc);
	//m_wndStopBits.SetEvent(WE_SETFOCUS, _OnStopBitsSetfocusFnc);
	//m_wndStopBits.SetEvent(WE_KILLFOCUS, _OnStopBitsKillfocusFnc);
	m_wndStopBits.SetEvent(WE_SELCHANGE, _OnStopBitsSelectChangeFnc);
	m_wndStopBits.SetEvent(WE_LOADDATA, _OnStopBitsLoadDataFnc);
	//m_wndStopBits.SetEvent(WE_ADDNEW, _OnStopBitsAddNewFnc);
	m_wndFlowControl.SetEvent(WE_SELENDOK, _OnFlowControlSelendokFnc);
	//m_wndFlowControl.SetEvent(WE_SETFOCUS, _OnFlowControlSetfocusFnc);
	//m_wndFlowControl.SetEvent(WE_KILLFOCUS, _OnFlowControlKillfocusFnc);
	m_wndFlowControl.SetEvent(WE_SELCHANGE, _OnFlowControlSelectChangeFnc);
	m_wndFlowControl.SetEvent(WE_LOADDATA, _OnFlowControlLoadDataFnc);
	//m_wndFlowControl.SetEvent(WE_ADDNEW, _OnFlowControlAddNewFnc);
	m_wndInstrumentList.SetEvent(WE_SELCHANGE, _OnInstrumentListSelectChangeFnc);
	m_wndInstrumentList.SetEvent(WE_LOADDATA, _OnInstrumentListLoadDataFnc);
	m_wndInstrumentList.SetEvent(WE_DBLCLICK, _OnInstrumentListDblClickFnc);
	m_wndInstrumentList.AddEvent(1, _T("Delete"), _OnInstrumentListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndSendType.SetEvent(WE_SELENDOK, _OnSendTypeSelendokFnc);
	//m_wndSendType.SetEvent(WE_SETFOCUS, _OnSendTypeSetfocusFnc);
	//m_wndSendType.SetEvent(WE_KILLFOCUS, _OnSendTypeKillfocusFnc);
	m_wndSendType.SetEvent(WE_SELCHANGE, _OnSendTypeSelectChangeFnc);
	m_wndSendType.SetEvent(WE_LOADDATA, _OnSendTypeLoadDataFnc);
	//m_wndSendType.SetEvent(WE_ADDNEW, _OnSendTypeAddNewFnc);
	m_wndTestGroup.SetEvent(WE_SELENDOK, _OnTestGroupSelendokFnc);
	//m_wndTestGroup.SetEvent(WE_SETFOCUS, _OnTestGroupSetfocusFnc);
	//m_wndTestGroup.SetEvent(WE_KILLFOCUS, _OnTestGroupKillfocusFnc);
	m_wndTestGroup.SetEvent(WE_SELCHANGE, _OnTestGroupSelectChangeFnc);
	m_wndTestGroup.SetEvent(WE_LOADDATA, _OnTestGroupLoadDataFnc);
	//m_wndTestGroup.SetEvent(WE_ADDNEW, _OnTestGroupAddNewFnc);
	m_wndProtocol.SetEvent(WE_SELENDOK, _OnProtocolSelendokFnc);
	//m_wndProtocol.SetEvent(WE_SETFOCUS, _OnProtocolSetfocusFnc);
	//m_wndProtocol.SetEvent(WE_KILLFOCUS, _OnProtocolKillfocusFnc);
	m_wndProtocol.SetEvent(WE_SELCHANGE, _OnProtocolSelectChangeFnc);
	m_wndProtocol.SetEvent(WE_LOADDATA, _OnProtocolLoadDataFnc);
	//m_wndProtocol.SetEvent(WE_ADDNEW, _OnProtocolAddNewFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndActive.SetEvent(WE_CLICK, _OnActiveSelectFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSInstrumentSettingFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSInstrumentSettingFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSInstrumentSettingFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSInstrumentSettingFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSInstrumentSettingFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CHMSInstrumentSetting::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndID.GetDlgCtrlID(), m_nID);
	DDX_Text(pDX, m_wndModel.GetDlgCtrlID(), m_szModel);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_TextEx(pDX, m_wndPort.GetDlgCtrlID(), m_szPortKey);
	DDX_TextEx(pDX, m_wndBaudRate.GetDlgCtrlID(), m_szBaudRateKey);
	DDX_TextEx(pDX, m_wndDataBits.GetDlgCtrlID(), m_szDataBitsKey);
	DDX_TextEx(pDX, m_wndParity.GetDlgCtrlID(), m_szParityKey);
	DDX_TextEx(pDX, m_wndStopBits.GetDlgCtrlID(), m_szStopBitsKey);
	DDX_TextEx(pDX, m_wndFlowControl.GetDlgCtrlID(), m_szFlowControlKey);
	DDX_TextEx(pDX, m_wndSendType.GetDlgCtrlID(), m_szSendTypeKey);
	DDX_TextEx(pDX, m_wndTestGroup.GetDlgCtrlID(), m_szTestGroupKey);
	DDX_TextEx(pDX, m_wndProtocol.GetDlgCtrlID(), m_szProtocolKey);
	DDX_Check(pDX, m_wndActive.GetDlgCtrlID(), m_bActive);

}
void CHMSInstrumentSetting::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("hi_id"), m_nID);
	rs.GetValue(_T("hi_name"), m_szName);
	rs.GetValue(_T("hi_model"), m_szModel);
	rs.GetValue(_T("hi_protocol"), m_szProtocolKey);
	rs.GetValue(_T("hi_port"), m_szPortKey);
	rs.GetValue(_T("hi_baudrate"), m_szBaudRateKey);
	rs.GetValue(_T("hi_databits"), m_szDataBitsKey);
	rs.GetValue(_T("hi_parity"), m_szParityKey);
	rs.GetValue(_T("hi_stopbits"), m_szStopBitsKey);
	rs.GetValue(_T("hi_flowcontrol"), m_szFlowControlKey);
	rs.GetValue(_T("hi_sendtype"), m_szSendTypeKey);

}
void CHMSInstrumentSetting::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_hms_instrumentTbl.SetValue(_T("hi_id"), m_nID);
	m_hms_instrumentTbl.SetValue(_T("hi_name"), m_szName);
	m_hms_instrumentTbl.SetValue(_T("hi_model"), m_szModel);
	m_hms_instrumentTbl.SetValue(_T("hi_protocol"), m_szProtocolKey);
	m_hms_instrumentTbl.SetValue(_T("hi_port"), m_szPortKey);
	m_hms_instrumentTbl.SetValue(_T("hi_baudrate"), m_szBaudRateKey);
	m_hms_instrumentTbl.SetValue(_T("hi_databits"), m_szDataBitsKey);
	m_hms_instrumentTbl.SetValue(_T("hi_parity"), m_szParityKey);
	m_hms_instrumentTbl.SetValue(_T("hi_stopbits"), m_szStopBitsKey);
	m_hms_instrumentTbl.SetValue(_T("hi_flowcontrol"), m_szFlowControlKey);
	m_hms_instrumentTbl.SetValue(_T("hi_sendtype"), m_szSendTypeKey);

}
void CHMSInstrumentSetting::SetDefaultValues(){

	m_nID=0;
	m_szModel.Empty();
	m_szName.Empty();
	m_szPortKey.Empty();
	m_szBaudRateKey.Empty();
	m_szDataBitsKey.Empty();
	m_szParityKey.Empty();
	m_szStopBitsKey.Empty();
	m_szFlowControlKey.Empty();
	m_szSendTypeKey.Empty();
	m_szTestGroupKey.Empty();
	m_szProtocolKey.Empty();
	m_bActive=FALSE;

}
int CHMSInstrumentSetting::SetMode(int nMode){
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
/*void CHMSInstrumentSetting::OnIDChange(){
	
} */
/*void CHMSInstrumentSetting::OnIDSetfocus(){
	
} */
/*void CHMSInstrumentSetting::OnIDKillfocus(){
	
} */
int CHMSInstrumentSetting::OnIDCheckValue(){
	return 0;
} 
/*void CHMSInstrumentSetting::OnModelChange(){
	
} */
/*void CHMSInstrumentSetting::OnModelSetfocus(){
	
} */
/*void CHMSInstrumentSetting::OnModelKillfocus(){
	
} */
int CHMSInstrumentSetting::OnModelCheckValue(){
	return 0;
} 
/*void CHMSInstrumentSetting::OnNameChange(){
	
} */
/*void CHMSInstrumentSetting::OnNameSetfocus(){
	
} */
/*void CHMSInstrumentSetting::OnNameKillfocus(){
	
} */
int CHMSInstrumentSetting::OnNameCheckValue(){
	return 0;
} 
void CHMSInstrumentSetting::OnPortSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSInstrumentSetting::OnPortSelendok(){
	 
}
/*void CHMSInstrumentSetting::OnPortSetfocus(){
	
}*/
/*void CHMSInstrumentSetting::OnPortKillfocus(){
	
}*/
long CHMSInstrumentSetting::OnPortLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndPort.IsSearchKey() && !m_szPortKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szPortKey
};
	m_wndPort.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPort.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSInstrumentSetting::OnPortAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSInstrumentSetting::OnBaudRateSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSInstrumentSetting::OnBaudRateSelendok(){
	 
}
/*void CHMSInstrumentSetting::OnBaudRateSetfocus(){
	
}*/
/*void CHMSInstrumentSetting::OnBaudRateKillfocus(){
	
}*/
long CHMSInstrumentSetting::OnBaudRateLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndBaudRate.IsSearchKey() && !m_szBaudRateKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szBaudRateKey
};
	m_wndBaudRate.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndBaudRate.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSInstrumentSetting::OnBaudRateAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSInstrumentSetting::OnDataBitsSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSInstrumentSetting::OnDataBitsSelendok(){
	 
}
/*void CHMSInstrumentSetting::OnDataBitsSetfocus(){
	
}*/
/*void CHMSInstrumentSetting::OnDataBitsKillfocus(){
	
}*/
long CHMSInstrumentSetting::OnDataBitsLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDataBits.IsSearchKey() && !m_szDataBitsKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szDataBitsKey
};
	m_wndDataBits.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDataBits.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSInstrumentSetting::OnDataBitsAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSInstrumentSetting::OnParitySelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSInstrumentSetting::OnParitySelendok(){
	 
}
/*void CHMSInstrumentSetting::OnParitySetfocus(){
	
}*/
/*void CHMSInstrumentSetting::OnParityKillfocus(){
	
}*/
long CHMSInstrumentSetting::OnParityLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndParity.IsSearchKey() && !m_szParityKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szParityKey
};
	m_wndParity.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndParity.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSInstrumentSetting::OnParityAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSInstrumentSetting::OnStopBitsSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSInstrumentSetting::OnStopBitsSelendok(){
	 
}
/*void CHMSInstrumentSetting::OnStopBitsSetfocus(){
	
}*/
/*void CHMSInstrumentSetting::OnStopBitsKillfocus(){
	
}*/
long CHMSInstrumentSetting::OnStopBitsLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndStopBits.IsSearchKey() && !m_szStopBitsKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szStopBitsKey
};
	m_wndStopBits.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndStopBits.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSInstrumentSetting::OnStopBitsAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSInstrumentSetting::OnFlowControlSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSInstrumentSetting::OnFlowControlSelendok(){
	 
}
/*void CHMSInstrumentSetting::OnFlowControlSetfocus(){
	
}*/
/*void CHMSInstrumentSetting::OnFlowControlKillfocus(){
	
}*/
long CHMSInstrumentSetting::OnFlowControlLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndFlowControl.IsSearchKey() && !m_szFlowControlKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szFlowControlKey
};
	m_wndFlowControl.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndFlowControl.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSInstrumentSetting::OnFlowControlAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSInstrumentSetting::OnInstrumentListDblClick(){
	
} 
void CHMSInstrumentSetting::OnInstrumentListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSInstrumentSetting::OnInstrumentListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSInstrumentSetting::OnInstrumentListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndInstrumentList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndInstrumentList.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Name")), NULL);
		rs.MoveNext();
	}
	m_wndInstrumentList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CHMSInstrumentSetting::OnSendTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSInstrumentSetting::OnSendTypeSelendok(){
	 
}
/*void CHMSInstrumentSetting::OnSendTypeSetfocus(){
	
}*/
/*void CHMSInstrumentSetting::OnSendTypeKillfocus(){
	
}*/
long CHMSInstrumentSetting::OnSendTypeLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndSendType.IsSearchKey() && !m_szSendTypeKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szSendTypeKey
};
	m_wndSendType.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndSendType.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSInstrumentSetting::OnSendTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSInstrumentSetting::OnTestGroupSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSInstrumentSetting::OnTestGroupSelendok(){
	 
}
/*void CHMSInstrumentSetting::OnTestGroupSetfocus(){
	
}*/
/*void CHMSInstrumentSetting::OnTestGroupKillfocus(){
	
}*/
long CHMSInstrumentSetting::OnTestGroupLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndTestGroup.IsSearchKey() && !m_szTestGroupKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szTestGroupKey
};
	m_wndTestGroup.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndTestGroup.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSInstrumentSetting::OnTestGroupAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSInstrumentSetting::OnProtocolSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSInstrumentSetting::OnProtocolSelendok(){
	 
}
/*void CHMSInstrumentSetting::OnProtocolSetfocus(){
	
}*/
/*void CHMSInstrumentSetting::OnProtocolKillfocus(){
	
}*/
long CHMSInstrumentSetting::OnProtocolLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndProtocol.IsSearchKey() && !m_szProtocolKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szProtocolKey
};
	m_wndProtocol.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndProtocol.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSInstrumentSetting::OnProtocolAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSInstrumentSetting::OnListDblClick(){
	
} 
void CHMSInstrumentSetting::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSInstrumentSetting::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSInstrumentSetting::OnListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("Index")), 
			rs.GetValue(_T("TestID")), 
			rs.GetValue(_T("Code")), 
			rs.GetValue(_T("CodeIn")), 
			rs.GetValue(_T("Name")), 
			rs.GetValue(_T("Unit")), 
			rs.GetValue(_T("MaleIndex")), 
			rs.GetValue(_T("FemaleIndex")), 
			rs.GetValue(_T("MinIndex")), 
			rs.GetValue(_T("MaxIndex")), 
			rs.GetValue(_T("PrintIndex")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
*/
	return 0;
}
	void CHMSInstrumentSetting::OnActiveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void CHMSInstrumentSetting::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSInstrumentSetting::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSInstrumentSetting::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSInstrumentSetting::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSInstrumentSetting::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSInstrumentSetting::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSInstrumentSetting::OnAddHMSInstrumentSetting(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSInstrumentSetting::OnEditHMSInstrumentSetting(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSInstrumentSetting::OnDeleteHMSInstrumentSetting(){
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
 		OnCancelHMSInstrumentSetting();
 	}
	return 0;
}
int CHMSInstrumentSetting::OnSaveHMSInstrumentSetting(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
 		//szSQL = m_hms_instrumentTbl.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
 		szWhere.Format(_T(" WHERE"));
 		//szSQL = m_hms_instrumentTbl.GetUpdateSQL(_T("createdby,createddate"));
 		szSQL += szWhere;
 	}
 _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
 		//OnHMSInstrumentSettingListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSInstrumentSetting::OnCancelHMSInstrumentSetting(){
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
int CHMSInstrumentSetting::OnHMSInstrumentSettingListLoadData(){
	return 0;
}
