#include "VIMESLISInstrumentSetting.h"
//#include "stdafx.h"
#include "MainFrm.h"
#include "LIMSInputDataDialog.h"
#include "StringToken.h"
#include "LIMSFormulaSetupDialog.h"

static long _OnInstrumentListLoadDataFnc(CWnd *pWnd){
	return ((CVIMESLISInstrumentSetting*)pWnd)->OnInstrumentListLoadData();
} 
static void _OnInstrumentListDblClickFnc(CWnd *pWnd){
	((CVIMESLISInstrumentSetting*)pWnd)->OnInstrumentListDblClick();
} 
static void _OnInstrumentListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CVIMESLISInstrumentSetting*)pWnd)->OnInstrumentListSelectChange(nOldItem, nNewItem);
} 
static int _OnInstrumentListDeleteItemFnc(CWnd *pWnd){
	 return ((CVIMESLISInstrumentSetting*)pWnd)->OnInstrumentListDeleteItem();
} 
static int _OnInstrumentListSetActiveFnc(CWnd *pWnd){
	 return ((CVIMESLISInstrumentSetting*)pWnd)->OnInstrumentListSetActive();
} 
/*static void _OnIDChangeFnc(CWnd *pWnd){
	((CVIMESLISInstrumentSetting *)pWnd)->OnIDChange();
} */
/*static void _OnIDSetfocusFnc(CWnd *pWnd){
	((CVIMESLISInstrumentSetting *)pWnd)->OnIDSetfocus();} */ 
/*static void _OnIDKillfocusFnc(CWnd *pWnd){
	((CVIMESLISInstrumentSetting *)pWnd)->OnIDKillfocus();
} */
static int _OnIDCheckValueFnc(CWnd *pWnd){
	return ((CVIMESLISInstrumentSetting *)pWnd)->OnIDCheckValue();
} 
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CVIMESLISInstrumentSetting *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CVIMESLISInstrumentSetting *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CVIMESLISInstrumentSetting *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CVIMESLISInstrumentSetting *)pWnd)->OnNameCheckValue();
} 
/*static void _OnModelChangeFnc(CWnd *pWnd){
	((CVIMESLISInstrumentSetting *)pWnd)->OnModelChange();
} */
/*static void _OnModelSetfocusFnc(CWnd *pWnd){
	((CVIMESLISInstrumentSetting *)pWnd)->OnModelSetfocus();} */ 
/*static void _OnModelKillfocusFnc(CWnd *pWnd){
	((CVIMESLISInstrumentSetting *)pWnd)->OnModelKillfocus();
} */
static int _OnModelCheckValueFnc(CWnd *pWnd){
	return ((CVIMESLISInstrumentSetting *)pWnd)->OnModelCheckValue();
} 
static void _OnPortSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CVIMESLISInstrumentSetting* )pWnd)->OnPortSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPortSelendokFnc(CWnd *pWnd){
	((CVIMESLISInstrumentSetting *)pWnd)->OnPortSelendok();
}
/*static void _OnPortSetfocusFnc(CWnd *pWnd){
	((CVIMESLISInstrumentSetting *)pWnd)->OnPortKillfocus();
}*/
/*static void _OnPortKillfocusFnc(CWnd *pWnd){
	((CVIMESLISInstrumentSetting *)pWnd)->OnPortKillfocus();
}*/
static long _OnPortLoadDataFnc(CWnd *pWnd){
	return ((CVIMESLISInstrumentSetting *)pWnd)->OnPortLoadData();
}
/*static void _OnPortAddNewFnc(CWnd *pWnd){
	((CVIMESLISInstrumentSetting *)pWnd)->OnPortAddNew();
}*/
static void _OnBaudRateSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CVIMESLISInstrumentSetting* )pWnd)->OnBaudRateSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnBaudRateSelendokFnc(CWnd *pWnd){
	((CVIMESLISInstrumentSetting *)pWnd)->OnBaudRateSelendok();
}
/*static void _OnBaudRateSetfocusFnc(CWnd *pWnd){
	((CVIMESLISInstrumentSetting *)pWnd)->OnBaudRateKillfocus();
}*/
/*static void _OnBaudRateKillfocusFnc(CWnd *pWnd){
	((CVIMESLISInstrumentSetting *)pWnd)->OnBaudRateKillfocus();
}*/
static long _OnBaudRateLoadDataFnc(CWnd *pWnd){
	return ((CVIMESLISInstrumentSetting *)pWnd)->OnBaudRateLoadData();
}
/*static void _OnBaudRateAddNewFnc(CWnd *pWnd){
	((CVIMESLISInstrumentSetting *)pWnd)->OnBaudRateAddNew();
}*/
static void _OnDataBitsSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CVIMESLISInstrumentSetting* )pWnd)->OnDataBitsSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDataBitsSelendokFnc(CWnd *pWnd){
	((CVIMESLISInstrumentSetting *)pWnd)->OnDataBitsSelendok();
}
/*static void _OnDataBitsSetfocusFnc(CWnd *pWnd){
	((CVIMESLISInstrumentSetting *)pWnd)->OnDataBitsKillfocus();
}*/
/*static void _OnDataBitsKillfocusFnc(CWnd *pWnd){
	((CVIMESLISInstrumentSetting *)pWnd)->OnDataBitsKillfocus();
}*/
static long _OnDataBitsLoadDataFnc(CWnd *pWnd){
	return ((CVIMESLISInstrumentSetting *)pWnd)->OnDataBitsLoadData();
}
/*static void _OnDataBitsAddNewFnc(CWnd *pWnd){
	((CVIMESLISInstrumentSetting *)pWnd)->OnDataBitsAddNew();
}*/
static void _OnParitySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CVIMESLISInstrumentSetting* )pWnd)->OnParitySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnParitySelendokFnc(CWnd *pWnd){
	((CVIMESLISInstrumentSetting *)pWnd)->OnParitySelendok();
}
/*static void _OnParitySetfocusFnc(CWnd *pWnd){
	((CVIMESLISInstrumentSetting *)pWnd)->OnParityKillfocus();
}*/
/*static void _OnParityKillfocusFnc(CWnd *pWnd){
	((CVIMESLISInstrumentSetting *)pWnd)->OnParityKillfocus();
}*/
static long _OnParityLoadDataFnc(CWnd *pWnd){
	return ((CVIMESLISInstrumentSetting *)pWnd)->OnParityLoadData();
}
/*static void _OnParityAddNewFnc(CWnd *pWnd){
	((CVIMESLISInstrumentSetting *)pWnd)->OnParityAddNew();
}*/
static void _OnStopBitsSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CVIMESLISInstrumentSetting* )pWnd)->OnStopBitsSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStopBitsSelendokFnc(CWnd *pWnd){
	((CVIMESLISInstrumentSetting *)pWnd)->OnStopBitsSelendok();
}
/*static void _OnStopBitsSetfocusFnc(CWnd *pWnd){
	((CVIMESLISInstrumentSetting *)pWnd)->OnStopBitsKillfocus();
}*/
/*static void _OnStopBitsKillfocusFnc(CWnd *pWnd){
	((CVIMESLISInstrumentSetting *)pWnd)->OnStopBitsKillfocus();
}*/
static long _OnStopBitsLoadDataFnc(CWnd *pWnd){
	return ((CVIMESLISInstrumentSetting *)pWnd)->OnStopBitsLoadData();
}
/*static void _OnStopBitsAddNewFnc(CWnd *pWnd){
	((CVIMESLISInstrumentSetting *)pWnd)->OnStopBitsAddNew();
}*/
static void _OnFlowControlSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CVIMESLISInstrumentSetting* )pWnd)->OnFlowControlSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnFlowControlSelendokFnc(CWnd *pWnd){
	((CVIMESLISInstrumentSetting *)pWnd)->OnFlowControlSelendok();
}
/*static void _OnFlowControlSetfocusFnc(CWnd *pWnd){
	((CVIMESLISInstrumentSetting *)pWnd)->OnFlowControlKillfocus();
}*/
/*static void _OnFlowControlKillfocusFnc(CWnd *pWnd){
	((CVIMESLISInstrumentSetting *)pWnd)->OnFlowControlKillfocus();
}*/
static long _OnFlowControlLoadDataFnc(CWnd *pWnd){
	return ((CVIMESLISInstrumentSetting *)pWnd)->OnFlowControlLoadData();
}
/*static void _OnFlowControlAddNewFnc(CWnd *pWnd){
	((CVIMESLISInstrumentSetting *)pWnd)->OnFlowControlAddNew();
}*/
static void _OnSendTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CVIMESLISInstrumentSetting* )pWnd)->OnSendTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSendTypeSelendokFnc(CWnd *pWnd){
	((CVIMESLISInstrumentSetting *)pWnd)->OnSendTypeSelendok();
}
/*static void _OnSendTypeSetfocusFnc(CWnd *pWnd){
	((CVIMESLISInstrumentSetting *)pWnd)->OnSendTypeKillfocus();
}*/
/*static void _OnSendTypeKillfocusFnc(CWnd *pWnd){
	((CVIMESLISInstrumentSetting *)pWnd)->OnSendTypeKillfocus();
}*/
static long _OnSendTypeLoadDataFnc(CWnd *pWnd){
	return ((CVIMESLISInstrumentSetting *)pWnd)->OnSendTypeLoadData();
}
/*static void _OnSendTypeAddNewFnc(CWnd *pWnd){
	((CVIMESLISInstrumentSetting *)pWnd)->OnSendTypeAddNew();
}*/
static void _OnTestGroupSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CVIMESLISInstrumentSetting* )pWnd)->OnTestGroupSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTestGroupSelendokFnc(CWnd *pWnd){
	((CVIMESLISInstrumentSetting *)pWnd)->OnTestGroupSelendok();
}
/*static void _OnTestGroupSetfocusFnc(CWnd *pWnd){
	((CVIMESLISInstrumentSetting *)pWnd)->OnTestGroupKillfocus();
}*/
/*static void _OnTestGroupKillfocusFnc(CWnd *pWnd){
	((CVIMESLISInstrumentSetting *)pWnd)->OnTestGroupKillfocus();
}*/
static long _OnTestGroupLoadDataFnc(CWnd *pWnd){
	return ((CVIMESLISInstrumentSetting *)pWnd)->OnTestGroupLoadData();
}
/*static void _OnTestGroupAddNewFnc(CWnd *pWnd){
	((CVIMESLISInstrumentSetting *)pWnd)->OnTestGroupAddNew();
}*/
static void _OnProtocolSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CVIMESLISInstrumentSetting* )pWnd)->OnProtocolSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnProtocolSelendokFnc(CWnd *pWnd){
	((CVIMESLISInstrumentSetting *)pWnd)->OnProtocolSelendok();
}
/*static void _OnProtocolSetfocusFnc(CWnd *pWnd){
	((CVIMESLISInstrumentSetting *)pWnd)->OnProtocolKillfocus();
}*/
/*static void _OnProtocolKillfocusFnc(CWnd *pWnd){
	((CVIMESLISInstrumentSetting *)pWnd)->OnProtocolKillfocus();
}*/
static long _OnProtocolLoadDataFnc(CWnd *pWnd){
	return ((CVIMESLISInstrumentSetting *)pWnd)->OnProtocolLoadData();
}
/*static void _OnProtocolAddNewFnc(CWnd *pWnd){
	((CVIMESLISInstrumentSetting *)pWnd)->OnProtocolAddNew();
}*/

static long _OnTestSelLoadDataFnc(CWnd *pWnd){
	return ((CVIMESLISInstrumentSetting *)pWnd->GetParent())->OnTestSelLoadData();
}

static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CVIMESLISInstrumentSetting*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CVIMESLISInstrumentSetting*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CVIMESLISInstrumentSetting*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListApplyItemFnc(CWnd *pWnd){
	 return ((CVIMESLISInstrumentSetting*)pWnd)->OnListApplyItem();
} 

static int _OnListInsertItemFnc(CWnd *pWnd){
	 return ((CVIMESLISInstrumentSetting*)pWnd)->OnListInsertItem();
} 

static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CVIMESLISInstrumentSetting*)pWnd)->OnListDeleteItem();
} 


static int _OnSetupFormulaFnc(CWnd *pWnd){
	 ((CVIMESLISInstrumentSetting*)pWnd)->OnSetupFormula();
	 return 0;
} 



static void _OnAddSelectFnc(CWnd *pWnd){
	CVIMESLISInstrumentSetting *pVw = (CVIMESLISInstrumentSetting *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CVIMESLISInstrumentSetting *pVw = (CVIMESLISInstrumentSetting *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CVIMESLISInstrumentSetting *pVw = (CVIMESLISInstrumentSetting *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CVIMESLISInstrumentSetting *pVw = (CVIMESLISInstrumentSetting *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CVIMESLISInstrumentSetting *pVw = (CVIMESLISInstrumentSetting *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CVIMESLISInstrumentSetting *pVw = (CVIMESLISInstrumentSetting *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSInstrumentSettingFnc(CWnd *pWnd){
	 return ((CVIMESLISInstrumentSetting*)pWnd)->OnAddHMSInstrumentSetting();
} 
static int _OnEditHMSInstrumentSettingFnc(CWnd *pWnd){
	 return ((CVIMESLISInstrumentSetting*)pWnd)->OnEditHMSInstrumentSetting();
} 
static int _OnDeleteHMSInstrumentSettingFnc(CWnd *pWnd){
	 return ((CVIMESLISInstrumentSetting*)pWnd)->OnDeleteHMSInstrumentSetting();
} 
static int _OnSaveHMSInstrumentSettingFnc(CWnd *pWnd){
	 return ((CVIMESLISInstrumentSetting*)pWnd)->OnSaveHMSInstrumentSetting();
} 
static int _OnCancelHMSInstrumentSettingFnc(CWnd *pWnd){
	 return ((CVIMESLISInstrumentSetting*)pWnd)->OnCancelHMSInstrumentSetting();
} 
CVIMESLISInstrumentSetting::CVIMESLISInstrumentSetting(CWnd *pParent)
	:CGuiDialog(pParent)
{

	m_nDlgWidth = 795;
	m_nDlgHeight = 600;
	SetDefaultValues();
}
CVIMESLISInstrumentSetting::~CVIMESLISInstrumentSetting(){
}
void CVIMESLISInstrumentSetting::OnCreateComponents(){
	m_wndInstrumentSetting.Create(this, _T("Instrument Setting"), 5, 5, 785, 138);
	m_wndDataList.Create(this, _T("Data List"), 5, 143, 785, 573);
	m_wndInstrumentList.Create(this,10, 28, 215, 133); 
	m_wndIDLabel.Create(this, _T("ID"), 220, 28, 290, 50);
	m_wndID.Create(this,295, 28, 375, 50); 
	m_wndModelLabel.Create(this, _T("Model"), 380, 28, 450, 50);
	m_wndModel.Create(this,455, 28, 536, 50); 
	m_wndNameLabel.Create(this, _T("Name"), 541, 28, 627, 50);
	m_wndName.Create(this,632, 28, 782, 50);	
	m_wndPortLabel.Create(this, _T("Port"), 220, 55, 290, 77);
	m_wndPort.Create(this,295, 55, 375, 77); 
	m_wndBaudRateLabel.Create(this, _T("Baud Rate"), 380, 55, 450, 77);
	m_wndBaudRate.Create(this,455, 55, 536, 77); 
	m_wndDataBitsLabel.Create(this, _T("Data Bits"), 541, 55, 627, 77);
	m_wndDataBits.Create(this,632, 55, 712, 77); 
	m_wndParityLabel.Create(this, _T("Parity"), 220, 82, 290, 104);
	m_wndParity.Create(this,295, 82, 375, 104); 
	m_wndStopBitsLabel.Create(this, _T("Stop Bits"), 380, 82, 450, 104);
	m_wndStopBits.Create(this,455, 82, 536, 104); 
	m_wndFlowControlLabel.Create(this, _T("Flow Control"), 541, 82, 627, 104);
	m_wndFlowControl.Create(this,632, 82, 712, 104); 
	m_wndSendTypeLabel.Create(this, _T("Query Mode"), 220, 109, 290, 131);
	m_wndSendType.Create(this,295, 109, 375, 131); 
	m_wndProtocolLabel.Create(this, _T("Protocol"), 380, 109, 450, 131);
	m_wndProtocol.Create(this,455, 109, 536, 131); 
	m_wndTestGroupLabel.Create(this, _T("Test Group"), 541, 109, 627, 131);
	m_wndTestGroup.Create(this,632, 109, 781, 131); 
	m_wndList.Create(this,10, 166, 781, 568); 
	m_wndAdd.Create(this, _T("&Add"), 340, 578, 410, 600);
	m_wndEdit.Create(this, _T("&Edit"), 415, 578, 485, 600);
	m_wndDelete.Create(this, _T("Delete"), 490, 578, 560, 600);
	m_wndSave.Create(this, _T("&Save"), 565, 578, 635, 600);
	m_wndCancel.Create(this, _T("&Cancel"), 640, 578, 710, 600);
	m_wndClose.Create(this, _T("&Close"), 715, 578, 785, 600);

}
void CVIMESLISInstrumentSetting::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	SetMode(VM_NONE);
	m_wndID.SetReadOnly(true);
	m_wndName.SetLimitText(35);
	m_wndName.SetCheckValue(true);
	m_wndName.SetInitCap(true);
	m_wndModel.SetLimitText(15);
	m_wndModel.SetCheckValue(true);
	m_wndModel.ModifyStyle(0, ES_UPPERCASE);
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


	m_wndInstrumentList.InsertColumn(0, _T("ID"), CFMT_NUMBER, 40);
	m_wndInstrumentList.InsertColumn(1, _T("Name"), CFMT_TEXT, 140);
	m_wndPort.Format(1, 0, 6);
	m_wndPort.InsertColumn(0, _T("Description"), CFMT_TEXT, 70);
	m_wndBaudRate.Format(1, 0, 10);
	m_wndBaudRate.InsertColumn(0, _T("Description"), CFMT_TEXT, 70);
	m_wndDataBits.Format(1, 0, 4);
	m_wndDataBits.InsertColumn(0, _T("Description"), CFMT_TEXT, 70);

	m_wndParity.InsertColumn(0, _T("ID"), CFMT_TEXT, 30);
	m_wndParity.InsertColumn(1, _T("Description"), CFMT_TEXT, 70);
	m_wndStopBits.Format(1, 0, 3);
	m_wndStopBits.InsertColumn(0, _T("Description"), CFMT_TEXT, 70);
	
	m_wndFlowControl.InsertColumn(0, _T("ID"), CFMT_TEXT, 30);
	m_wndFlowControl.InsertColumn(1, _T("Description"), CFMT_TEXT, 70);

	m_wndSendType.Format(1, 0, 2);
	m_wndSendType.InsertColumn(0, _T("Description"), CFMT_TEXT, 100);
	m_wndTestGroup.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndTestGroup.InsertColumn(1, _T("Description"), CFMT_TEXT,250);
	m_wndProtocol.InsertColumn(0, _T("ID"), CFMT_NUMBER, 80);
	m_wndProtocol.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);
	m_wndProtocol.InsertColumn(2, _T("ResultRecord"), CFMT_TEXT, 0);
	
	m_wndList.InsertColumn(0, _T("Index"), CFMT_NUMBER, 40);
	m_wndList.InsertColumn(1, _T("Test ID"), CFMT_TEXT, 70);
	m_wndList.InsertColumn(2, _T("Code"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(3, _T("Code In"), CFMT_TEXT, 60);
	m_wndList.InsertColumn(4, _T("Name"), CFMT_TEXT, 120);
	m_wndList.InsertColumn(5, _T("Unit"), CFMT_TEXT|CFMT_CENTER, 60);
	m_wndList.InsertColumn(6, _T("Male Index"), CFMT_TEXT, 90);
	m_wndList.InsertColumn(7, _T("Female Index"), CFMT_TEXT, 90);
	m_wndList.InsertColumn(8, _T("Min Index"), CFMT_TEXT, 70);
	m_wndList.InsertColumn(9, _T("Max Index"), CFMT_TEXT, 70);
	m_wndList.InsertColumn(10, _T("Active"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(11, _T("Print Idx"), CFMT_TEXT, 70);
	m_wndList.InsertColumn(12, _T("Formula"), CFMT_TEXT, 120);
	

	m_lims_instrumentTbl.SetTableName(_T("lims_instrument"));
	m_lims_instrumentTbl.AddField(_T("limsi_id"), dfLong); 
	m_lims_instrumentTbl.AddField(_T("limsi_name"), dfText, 35); 
	m_lims_instrumentTbl.AddField(_T("limsi_model"), dfText, 15); 
	m_lims_instrumentTbl.AddField(_T("limsi_protocol"), dfText, 15); 
	m_lims_instrumentTbl.AddField(_T("limsi_ip"), dfText, 15); 
	m_lims_instrumentTbl.AddField(_T("limsi_port"), dfText, 7); 
	m_lims_instrumentTbl.AddField(_T("limsi_baudrate"), dfLong); 
	m_lims_instrumentTbl.AddField(_T("limsi_databits"), dfLong); 
	m_lims_instrumentTbl.AddField(_T("limsi_parity"), dfLong); 
	m_lims_instrumentTbl.AddField(_T("limsi_stopbits"), dfFloat); 
	m_lims_instrumentTbl.AddField(_T("limsi_flowcontrol"), dfLong); 
	m_lims_instrumentTbl.AddField(_T("limsi_sendtype"), dfLong); 
	m_lims_instrumentTbl.AddField(_T("limsi_groupid"), dfText, 7); 
/*

	m_wndList.SetEditLabel(1, GUI_COMBOBOX);
	m_wndList.SetEditLabel(2, GUI_TEXTCTRL);
	m_wndList.SetEditLabel(3, GUI_TEXTCTRL);
	m_wndList.SetEditLabel(4, GUI_TEXTCTRL);
	m_wndList.SetEditLabel(5, GUI_TEXTCTRL);
	m_wndList.SetEditLabel(6, GUI_TEXTCTRL);
	m_wndList.SetEditLabel(7, GUI_TEXTCTRL);
	m_wndList.SetEditLabel(8, GUI_TEXTCTRL);
	m_wndList.SetEditLabel(9, GUI_TEXTCTRL);
	m_wndList.SetEditLabel(10, GUI_NUMBERCTRL);

	CGuiComboBox *pCtrl = (CGuiComboBox *) m_wndList.GetEditControl(1);
	if(pCtrl)
	{
		pCtrl->Format(2, 0, 10);
		pCtrl->InsertColumn(0, _T("Test ID"), CFMT_LEFT, 70);
		pCtrl->InsertColumn(1, _T("Description"), CFMT_LEFT, 150);
	}

*/	
	
}
void CVIMESLISInstrumentSetting::OnSetWindowEvents(){
	m_wndInstrumentList.SetEvent(WE_SELCHANGE, _OnInstrumentListSelectChangeFnc);
	m_wndInstrumentList.SetEvent(WE_LOADDATA, _OnInstrumentListLoadDataFnc);
	m_wndInstrumentList.SetEvent(WE_DBLCLICK, _OnInstrumentListDblClickFnc);
	m_wndInstrumentList.SetWindowText(_T("Instrument List"));
	m_wndInstrumentList.AddEvent(1, _T("Set Active"), _OnInstrumentListSetActiveFnc);
//	m_wndInstrumentList.AddEvent(2, _T("Delete Instrument"), _OnInstrumentListDeleteItemFnc, 0, VK_DELETE, 0);
	//m_wndID.SetEvent(WE_CHANGE, _OnIDChangeFnc);
	//m_wndID.SetEvent(WE_SETFOCUS, _OnIDSetfocusFnc);
	//m_wndID.SetEvent(WE_KILLFOCUS, _OnIDKillfocusFnc);
	m_wndID.SetEvent(WE_CHECKVALUE, _OnIDCheckValueFnc);
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	//m_wndModel.SetEvent(WE_CHANGE, _OnModelChangeFnc);
	//m_wndModel.SetEvent(WE_SETFOCUS, _OnModelSetfocusFnc);
	//m_wndModel.SetEvent(WE_KILLFOCUS, _OnModelKillfocusFnc);
	m_wndModel.SetEvent(WE_CHECKVALUE, _OnModelCheckValueFnc);
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
	m_wndList.SetWindowText(_T("Data List"));
	m_wndList.AddEvent(1, _T("Insert Item"), _OnListInsertItemFnc, 0, VK_INSERT);
	m_wndList.AddEvent(2, _T("Delete Item"), _OnListDeleteItemFnc, 0, VK_DELETE);
	m_wndList.AddEvent(0, _T("-"));
	m_wndList.AddEvent(3, _T("Apply Index"), _OnListApplyItemFnc, 0, VK_F2);
	m_wndList.AddEvent(0, _T("-"));
	m_wndList.AddEvent(4, _T("Setup Formula"), _OnSetupFormulaFnc);

	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
/*	
	CGuiComboBox * pCtrl = (CGuiComboBox *) m_wndList.GetEditControl(1);
	if(pCtrl)
		pCtrl->SetEvent(WE_LOADDATA, _OnTestSelLoadDataFnc);
*/
	m_wndList.SetAllowDrag(true);

	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	OnInstrumentListLoadData();

}
void CVIMESLISInstrumentSetting::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndID.GetDlgCtrlID(), m_nID);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_Text(pDX, m_wndModel.GetDlgCtrlID(), m_szModel);
	DDX_TextEx(pDX, m_wndPort.GetDlgCtrlID(), m_szPortKey);
	DDX_TextEx(pDX, m_wndBaudRate.GetDlgCtrlID(), m_szBaudRateKey);
	DDX_TextEx(pDX, m_wndDataBits.GetDlgCtrlID(), m_szDataBitsKey);
	DDX_TextEx(pDX, m_wndParity.GetDlgCtrlID(), m_szParityKey);
	DDX_TextEx(pDX, m_wndStopBits.GetDlgCtrlID(), m_szStopBitsKey);
	DDX_TextEx(pDX, m_wndFlowControl.GetDlgCtrlID(), m_szFlowControlKey);
	DDX_TextEx(pDX, m_wndSendType.GetDlgCtrlID(), m_szSendTypeKey);
	DDX_TextEx(pDX, m_wndTestGroup.GetDlgCtrlID(), m_szTestGroupKey);
	DDX_TextEx(pDX, m_wndProtocol.GetDlgCtrlID(), m_szProtocolKey);

}
void CVIMESLISInstrumentSetting::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM lims_instrument WHERE limsi_id=%d"), m_nID);
	rs.ExecSQL(szSQL);
	m_wndList.DeleteAllItems();
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("limsi_id"), m_nID);
		rs.GetValue(_T("limsi_name"), m_szName);
		rs.GetValue(_T("limsi_model"), m_szModel);
		rs.GetValue(_T("limsi_protocol"), m_szProtocolKey);
		rs.GetValue(_T("limsi_ip"), m_szLocalIP);
		rs.GetValue(_T("limsi_port"), m_szPortKey);
		rs.GetValue(_T("limsi_baudrate"), m_szBaudRateKey);
		rs.GetValue(_T("limsi_databits"), m_szDataBitsKey);
		rs.GetValue(_T("limsi_parity"), m_szParityKey);
		int nStopbit;
		rs.GetValue(_T("limsi_stopbits"), nStopbit);
		switch(nStopbit){
		case 0:
			m_szStopBitsKey = _T("1");
			break;
		case 1:
			m_szStopBitsKey = _T("1.5");
			break;
		case 2:
			m_szStopBitsKey = _T("2");
			break;
		};

		rs.GetValue(_T("limsi_flowcontrol"), m_szFlowControlKey);
		rs.GetValue(_T("limsi_sendtype"), m_szSendTypeKey);
		rs.GetValue(_T("limsi_groupid"), m_szTestGroupKey);
		SetMode(VM_VIEW);
		OnListLoadData();		
	}
	else
	{
		SetMode(VM_NONE);
	}

}
void CVIMESLISInstrumentSetting::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_szLocalIP = pMF->GetLocalIP();
	if(GetMode() == VM_ADD){
		CString szSQL;
		CRecord rs(&pMF->m_db);
		szSQL.Format(_T(" SELECT Coalesce(MAX(limsi_id), 0)+1 FROM lims_instrument "));
		rs.ExecSQL(szSQL);
		m_nID = rs.GetIntValue();
	}
	m_lims_instrumentTbl.SetValue(_T("limsi_id"), m_nID);
	m_lims_instrumentTbl.SetValue(_T("limsi_name"), m_szName);
	m_lims_instrumentTbl.SetValue(_T("limsi_model"), m_szModel);
	m_lims_instrumentTbl.SetValue(_T("limsi_protocol"), m_szProtocolKey);
	m_lims_instrumentTbl.SetValue(_T("limsi_ip"), m_szLocalIP);
	m_lims_instrumentTbl.SetValue(_T("limsi_port"), m_szPortKey);
	m_lims_instrumentTbl.SetValue(_T("limsi_baudrate"), m_szBaudRateKey);
	m_lims_instrumentTbl.SetValue(_T("limsi_databits"), m_szDataBitsKey);
	m_lims_instrumentTbl.SetValue(_T("limsi_parity"), m_szParityKey);
	int nStopBits = m_wndStopBits.GetCurSel();
	m_lims_instrumentTbl.SetValue(_T("limsi_stopbits"), nStopBits);
	m_lims_instrumentTbl.SetValue(_T("limsi_flowcontrol"), m_szFlowControlKey);
	m_lims_instrumentTbl.SetValue(_T("limsi_sendtype"), m_szSendTypeKey);
	m_lims_instrumentTbl.SetValue(_T("limsi_groupid"), m_szTestGroupKey);
	m_lims_instrumentTbl.SetValue(_T("limsi_active"), _T("Y"));

}
void CVIMESLISInstrumentSetting::SetDefaultValues(){

	m_nID=0;
	m_szName.Empty();
	m_szModel.Empty();
	m_szProtocolKey.Empty();
	m_szPortKey.Empty();
	m_szBaudRateKey = _T("9600");
	m_szDataBitsKey = _T("8");
	m_szParityKey = _T("0");
	m_szStopBitsKey = _T("1");
	m_szFlowControlKey = _T("0");
	m_szSendTypeKey = _T("1");
	m_szTestGroupKey.Empty();
	m_szProtocolKey.Empty();
	m_szTestSelKey.Empty();


}
int CVIMESLISInstrumentSetting::SetMode(int nMode){ 
 		int nOldMode = GetMode(); 
 		CGuiDialog::SetMode(nMode); 
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
  		switch(nMode){ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 3, 4, 5,  -1); 
 			SetDefaultValues(); 
			m_wndModel.SetFocus();
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 3, 4, 5, -1); 
			m_wndModel.SetFocus();
 			break; 
 		case VM_VIEW: 
 			EnableControls(FALSE); 
 			EnableButtons(FALSE, 3, 4, 5, -1); 
 			break; 
 		case VM_NONE: 
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 0, 5, -1); 
 			SetDefaultValues(); 
 			break; 
 		}; 
		m_wndClose.EnableWindow(true);
 		UpdateData(FALSE); 
 		return nOldMode; 
 	} 


void CVIMESLISInstrumentSetting::OnInstrumentListDblClick(){
	
} 
void CVIMESLISInstrumentSetting::OnInstrumentListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(nNewItem < 0)
		return;
	m_nID = ToInt(m_wndInstrumentList.GetItemText(nNewItem, 0));
	GetDataToScreen();	
} 
int CVIMESLISInstrumentSetting::OnInstrumentListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	OnDeleteHMSInstrumentSetting();
	 return 0;
} 

int CVIMESLISInstrumentSetting::OnInstrumentListSetActive(){
	return 0;
} 
long CVIMESLISInstrumentSetting::OnInstrumentListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szName;
	m_wndInstrumentList.BeginLoad(); 
	int nCount = 0;

	szSQL.Format(_T("SELECT * FROM lims_instrument ORDER BY limsi_id"));
	nCount = rs.ExecSQL(szSQL);
	int nCurSel = 0;
	int nInstID;
	
	while(!rs.IsEOF()){ 
		rs.GetValue(_T("limsi_id"), nInstID);
		rs.GetValue(_T("limsi_model"), tmpStr);
		tmpStr.Trim();
		rs.GetValue(_T("limsi_model"), szName);

		m_wndInstrumentList.AddItems(
			rs.GetValue(_T("limsi_id")), 
			szName, 
			rs.GetValue(_T("limsi_port")), 
			NULL);
		for (int i =0; i < pMF->m_Instruments.GetCount(); i++)
		{
			if(nInstID == pMF->m_Instruments[i]){
				m_wndInstrumentList.SetItemBkColor(m_wndInstrumentList.GetItemCount()-1, RGB(200, 200, 255));
				nCurSel = m_wndInstrumentList.GetItemCount()-1;
			}
		}
		rs.MoveNext();
	}
	m_wndInstrumentList.EndLoad(); 
//	m_wndInstrumentList.SetCurSel(nCurSel);
	return nCount;
}
/*void CVIMESLISInstrumentSetting::OnIDChange(){
	
} */
/*void CVIMESLISInstrumentSetting::OnIDSetfocus(){
	
} */
/*void CVIMESLISInstrumentSetting::OnIDKillfocus(){
	
} */
int CVIMESLISInstrumentSetting::OnIDCheckValue(){
	return 0;
} 
/*void CVIMESLISInstrumentSetting::OnNameChange(){
	
} */
/*void CVIMESLISInstrumentSetting::OnNameSetfocus(){
	
} */
/*void CVIMESLISInstrumentSetting::OnNameKillfocus(){
	
} */
int CVIMESLISInstrumentSetting::OnNameCheckValue(){
	return 0;
} 
/*void CVIMESLISInstrumentSetting::OnModelChange(){
	
} */
/*void CVIMESLISInstrumentSetting::OnModelSetfocus(){
	
} */
/*void CVIMESLISInstrumentSetting::OnModelKillfocus(){
	
} */
int CVIMESLISInstrumentSetting::OnModelCheckValue(){
	return 0;
} 
void CVIMESLISInstrumentSetting::OnPortSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CVIMESLISInstrumentSetting::OnPortSelendok(){
	 
}
/*void CVIMESLISInstrumentSetting::OnPortSetfocus(){
	
}*/
/*void CVIMESLISInstrumentSetting::OnPortKillfocus(){
	
}*/

#include "Serial.h"
long CVIMESLISInstrumentSetting::OnPortLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	m_wndPort.DeleteAllItems(); 
	int nCount = 0;
	CString tmpStr;
	// Dump the list elements to the debug window.

	for (int i = 0; i < 6; i++)
	{
		tmpStr.Format(_T("COM%d"), i+1);
		m_wndPort.AddItems(tmpStr, NULL);
	}    


/*
	for (int i =0; i < 6; i++)
	{
		tmpStr.Format(_T("COM%d"), i+1);
		if(serial.CheckPort(tmpStr) == CSerialPort::EPortAvailable)
			
	}
*/
	return nCount;

}
/*void CVIMESLISInstrumentSetting::OnPortAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CVIMESLISInstrumentSetting::OnBaudRateSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CVIMESLISInstrumentSetting::OnBaudRateSelendok(){
	 
}
/*void CVIMESLISInstrumentSetting::OnBaudRateSetfocus(){
	
}*/
/*void CVIMESLISInstrumentSetting::OnBaudRateKillfocus(){
	
}*/
long CVIMESLISInstrumentSetting::OnBaudRateLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndBaudRate.DeleteAllItems(); 

	int nCount = 0;
	CString tmpStr;
	int baudrate[16] = {110, 300, 600, 1200, 2400, 4800, 9600, 14400, 19200, 28800, 38400, 56000, 57600, 115200, 128000, 256000};
	if(m_wndBaudRate.IsSearchKey() && !m_szBaudRateKey.IsEmpty()){
		m_wndBaudRate.AddItems(m_szBaudRateKey, NULL);
		return 1;
	}
	for (int i =0; i < 16; i++)
	{
		tmpStr.Format(_T("%d"), baudrate[i]);
		m_wndBaudRate.AddItems(tmpStr, NULL);
	}
	return 16;

}
/*void CVIMESLISInstrumentSetting::OnBaudRateAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CVIMESLISInstrumentSetting::OnDataBitsSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CVIMESLISInstrumentSetting::OnDataBitsSelendok(){
	 
}
/*void CVIMESLISInstrumentSetting::OnDataBitsSetfocus(){
	
}*/
/*void CVIMESLISInstrumentSetting::OnDataBitsKillfocus(){
	
}*/
long CVIMESLISInstrumentSetting::OnDataBitsLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString tmpStr;
	m_wndDataBits.DeleteAllItems(); 
	if(m_wndDataBits.IsSearchKey() && !m_szDataBitsKey.IsEmpty()){
		m_wndDataBits.AddItems(m_szDataBitsKey);
		return 1;
	}
	for (int i =4; i < 8; i++){
		tmpStr.Format(_T("%d"), i+1);
		m_wndDataBits.AddItems(tmpStr, NULL);

	}
	return 0;
}
/*void CVIMESLISInstrumentSetting::OnDataBitsAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CVIMESLISInstrumentSetting::OnParitySelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CVIMESLISInstrumentSetting::OnParitySelendok(){
	 
}
/*void CVIMESLISInstrumentSetting::OnParitySetfocus(){
	
}*/
/*void CVIMESLISInstrumentSetting::OnParityKillfocus(){
	
}*/
long CVIMESLISInstrumentSetting::OnParityLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndParity.DeleteAllItems();
	if(m_wndParity.IsSearchKey() && !m_szParityKey.IsEmpty()){
		if(m_szParityKey == _T("0"))
			m_wndParity.AddItems(_T("0"), _T("None"), NULL);
		else if(m_szParityKey == _T("1"))
			m_wndParity.AddItems(_T("2"), _T("Odd"), NULL);
		else if(m_szParityKey == _T("2"))
			m_wndParity.AddItems(_T("2"), _T("Even"), NULL);		
		else if(m_szParityKey == _T("3"))
			m_wndParity.AddItems(_T("3"), _T("Mark"), NULL);
		else if(m_szParityKey == _T("4"))
			m_wndParity.AddItems(_T("4"), _T("Space"), NULL);

		return 1;
	}
	m_wndParity.AddItems(_T("0"), _T("None"), NULL);
	m_wndParity.AddItems(_T("1"), _T("Even"), NULL);
	m_wndParity.AddItems(_T("2"), _T("Odd"), NULL);
	m_wndParity.AddItems(_T("3"), _T("Mark"), NULL);
	m_wndParity.AddItems(_T("4"), _T("Space"), NULL);
	return 0;
}
/*void CVIMESLISInstrumentSetting::OnParityAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CVIMESLISInstrumentSetting::OnStopBitsSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CVIMESLISInstrumentSetting::OnStopBitsSelendok(){
	 
}
/*void CVIMESLISInstrumentSetting::OnStopBitsSetfocus(){
	
}*/
/*void CVIMESLISInstrumentSetting::OnStopBitsKillfocus(){
	
}*/
long CVIMESLISInstrumentSetting::OnStopBitsLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndStopBits.DeleteAllItems(); 
	if(m_wndStopBits.IsSearchKey() && !m_szStopBitsKey.IsEmpty()){
		m_wndStopBits.AddItems(m_szStopBitsKey, NULL);
		return 1;
	}
	m_wndStopBits.AddItems(_T("1"), NULL);
	m_wndStopBits.AddItems(_T("1.5"), NULL);
	m_wndStopBits.AddItems(_T("2"), NULL);
	return 0;
}
/*void CVIMESLISInstrumentSetting::OnStopBitsAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CVIMESLISInstrumentSetting::OnFlowControlSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CVIMESLISInstrumentSetting::OnFlowControlSelendok(){
	 
}
/*void CVIMESLISInstrumentSetting::OnFlowControlSetfocus(){
	
}*/
/*void CVIMESLISInstrumentSetting::OnFlowControlKillfocus(){
	
}*/
long CVIMESLISInstrumentSetting::OnFlowControlLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndFlowControl.DeleteAllItems();
	if(m_wndFlowControl.IsSearchKey() && !m_szFlowControlKey.IsEmpty()){
		if(m_szFlowControlKey == _T("0"))
			m_wndFlowControl.AddItems(_T("0"), _T("None"), NULL);
		else if(m_szFlowControlKey == _T("1"))
			m_wndFlowControl.AddItems(_T("1"), _T("Software"), NULL);
		else if(m_szFlowControlKey == _T("2"))
			m_wndFlowControl.AddItems(_T("2"), _T("Hardware"), NULL);
		
		return 1;
	}
	m_wndFlowControl.AddItems(_T("0"), _T("None"), NULL);
	m_wndFlowControl.AddItems(_T("1"), _T("Software"), NULL);
	m_wndFlowControl.AddItems(_T("2"), _T("Hardware"), NULL);
	
	return 0;
}
/*void CVIMESLISInstrumentSetting::OnFlowControlAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CVIMESLISInstrumentSetting::OnSendTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CVIMESLISInstrumentSetting::OnSendTypeSelendok(){
	 
}
/*void CVIMESLISInstrumentSetting::OnSendTypeSetfocus(){
	
}*/
/*void CVIMESLISInstrumentSetting::OnSendTypeKillfocus(){
	
}*/
long CVIMESLISInstrumentSetting::OnSendTypeLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndSendType.DeleteAllItems(); 
	if(m_wndSendType.IsSearchKey() && !m_szSendTypeKey.IsEmpty()){
		m_wndSendType.AddItems(m_szSendTypeKey, NULL);
		return 1;
	}
	m_wndSendType.AddItems(_T("1"), _T("One way"), NULL);
	m_wndSendType.AddItems(_T("2"), _T("Two way"), NULL);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndSendType.IsSearchKey() && !m_szSendTypeKey.IsEmpty()){
	};
	m_wndSendType.DeleteAllItems(); 
	int nCount = 0;
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
/*void CVIMESLISInstrumentSetting::OnSendTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CVIMESLISInstrumentSetting::OnTestGroupSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CVIMESLISInstrumentSetting::OnTestGroupSelendok(){
	
	 
}
/*void CVIMESLISInstrumentSetting::OnTestGroupSetfocus(){
	
}*/
/*void CVIMESLISInstrumentSetting::OnTestGroupKillfocus(){
	
}*/
long CVIMESLISInstrumentSetting::OnTestGroupLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
#ifdef UNICODE
	if(m_wndTestGroup.IsSearchKey() && !m_szTestGroupKey.IsEmpty()){
		szWhere.Format(_T(" AND trim(hfg_id)=trim('%s') "), m_szTestGroupKey.Trim());
	};
	m_wndTestGroup.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT hfg_id as id, hfg_name as name FROM hms_feegroup WHERE substr(hfg_id, 1, 2)='B1' AND hfg_active='Y' AND hfg_level=2 %s ORDER BY hfg_id"), szWhere);
#else
	if(m_wndTestGroup.IsSearchKey() && !m_szTestGroupKey.IsEmpty()){
		szWhere.Format(_T(" AND limsg_id='%s' "), m_szTestGroupKey.Trim());
	};
	m_wndTestGroup.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT limsg_id as id, limsg_name as name FROM lims_group WHERE 0=0 %s ORDER BY limsg_id "), szWhere);

#endif
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndTestGroup.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), 
			NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CVIMESLISInstrumentSetting::OnTestGroupAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CVIMESLISInstrumentSetting::OnProtocolSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CVIMESLISInstrumentSetting::OnProtocolSelendok(){
	 
}
/*void CVIMESLISInstrumentSetting::OnProtocolSetfocus(){
	
}*/
/*void CVIMESLISInstrumentSetting::OnProtocolKillfocus(){
	
}*/
long CVIMESLISInstrumentSetting::OnProtocolLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(m_wndProtocol.IsSearchKey() && !m_szProtocolKey.IsEmpty()){
		
	};

	m_wndProtocol.AddItems(_T("4"), _T("AU"), NULL);
	m_wndProtocol.AddItems(_T("5"), _T("ADVIAD"), NULL);
	m_wndProtocol.AddItems(_T("6"), _T("CD"), NULL);
	m_wndProtocol.AddItems(_T("7"), _T("CELLDYN"), NULL);
	m_wndProtocol.AddItems(_T("8"), _T("HITACHI"), NULL);
	m_wndProtocol.AddItems(_T("9"), _T("MTX"), NULL);
	m_wndProtocol.AddItems(_T("10"), _T("NUCLEUS"), NULL);
	m_wndProtocol.AddItems(_T("11"), _T("SYSMEX"), NULL);
	m_wndProtocol.AddItems(_T("12"), _T("TEST1"), NULL);
	m_wndProtocol.AddItems(_T("13"), _T("TOSOH1"), NULL);
	m_wndProtocol.AddItems(_T("14"), _T("URISCAN"), NULL);
	m_wndProtocol.AddItems(_T("15"), _T("YNSTAR"), NULL);
	m_wndProtocol.AddItems(_T("16"), _T("ABXARGOS"), NULL);
	m_wndProtocol.AddItems(_T("17"), _T("CX"), NULL);
	m_wndProtocol.AddItems(_T("18"), _T("BC3200"), NULL);
	m_wndProtocol.AddItems(_T("19"), _T("ACL9000"), NULL);
	m_wndProtocol.AddItems(_T("20"), _T("IMMULITE"), NULL);
	m_wndProtocol.AddItems(_T("21"), _T("CLINITEK_ATLAS"), NULL);
	m_wndProtocol.AddItems(_T("22"), _T("CLINITEK_ADVANTUS"), NULL);

	return 20;
	/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndProtocol.IsSearchKey() && !m_szProtocolKey.IsEmpty()){
		szWhere.Format(_T(" WHERE limsp_id='%s' "), m_szProtocolKey);
	};
	m_wndProtocol.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT * FROM lims_protocol %s ORDER BY limsp_id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndProtocol.AddItems(
			rs.GetValue(_T("limsp_id")), 
			rs.GetValue(_T("limsp_name")), 
			rs.GetValue(_T("limsp_ror")), 
			NULL);
		rs.MoveNext();
	}
*/
//	return nCount;

}
/*void CVIMESLISInstrumentSetting::OnProtocolAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */


long CVIMESLISInstrumentSetting::OnTestSelLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	CGuiComboBox *pCtrl = (CGuiComboBox*) m_wndList.GetEditControl(1);

	if(pCtrl == NULL)
		return -1;

	if(pCtrl->IsSearchKey() && !m_szTestSelKey.IsEmpty()){
		szWhere.Format(_T(" AND hproc_id='%s' "), m_szTestSelKey);
	};

	pCtrl->DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT * FROM hms_procedures WHERE hproc_type='T' AND trim(hproc_testgrp)=trim('%s')  %s ORDER BY hproc_id "), m_szTestGroupKey.Trim(), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		pCtrl->AddItems(
			rs.GetValue(_T("hproc_id")), 
			rs.GetValue(_T("hproc_desc")), 
			NULL);
		rs.MoveNext();
	}
	return nCount;

}

void CVIMESLISInstrumentSetting::OnListDblClick(){
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0)
		return;

	CLIMSInputDataDialog dlg(this);
	dlg.m_nInstID = m_nID;
	dlg.m_szTestGroupKey = m_szTestGroupKey;
	dlg.m_szCode = m_wndList.GetItemText(nSel, 2);
	dlg.SetMode(VM_EDIT);
	
	if(dlg.DoModal() == IDOK){
		m_wndList.SetItemText(nSel, 1, dlg.m_szRefCodeKey);
		m_wndList.SetItemText(nSel, 2, dlg.m_szCode);
		m_wndList.SetItemText(nSel, 3, dlg.m_szCodeIn);
		m_wndList.SetItemText(nSel, 4, dlg.m_szName);
		m_wndList.SetItemText(nSel, 5, dlg.m_szUnit);
		m_wndList.SetItemText(nSel, 6, dlg.m_szMale);
		m_wndList.SetItemText(nSel, 7, dlg.m_szFemale);
		m_wndList.SetItemText(nSel, 8, dlg.m_szMax);
		m_wndList.SetItemText(nSel, 9, dlg.m_szMin);
		m_wndList.SetItemText(nSel, 10, dlg.m_bActive?_T("Y"):_T("N"));
		m_wndList.SetItemText(nSel, 11, dlg.m_bPrint?_T("Y"):_T("N"));		
	}
	
} 
void CVIMESLISInstrumentSetting::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	if(nNewItem >= 0){
		m_szTestSelKey = m_wndList.GetItemText(nNewItem, 1);
		((CGuiComboBox *)m_wndList.GetEditControl(1))->SetCurrent(1, m_szTestSelKey);
	}
*/
} 
int CVIMESLISInstrumentSetting::OnListApplyItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString tmpStr, szSQL;
	CString szCode;
	if(m_nID <= 0)
		return 0;

	pMF->BeginTransaction();
	for (int i =0; i < m_wndList.GetItemCount(); i++){
		szSQL.Format(_T("UPDATE lims_instrument_data SET limsid_index=%d WHERE limsid_instid=%d AND limsid_code='%s' "), 
			i+1, m_nID, m_wndList.GetItemText(i, 2));
////_msg(_T("%s"), szSQL);
		pMF->ExecSQL(szSQL);
	}

/*
	szSQL.Format(_T("DELETE FROM lims_instrument_data WHERE limsid_instrumentid=%d "), m_nID);
	pMF->ExecSQL(szSQL);
	for (int i =0; i < m_wndList.GetItemCount(); i++){
		szSQL.Format(_T("INSERT INTO lims_instrument_data( ") \
            _T(" limsid_instid, limsid_index, limsid_code, limsid_codein, limsid_testid, ") \
            _T(" limsid_name, limsid_unit, limsid_fnorm, limsid_mnorm, limsid_min, limsid_max, limsid_print, ") \
            _T(" limsid_active) ") \
		_T(" VALUES (%d, %d, '%s', '%s', '%s', ") \
            _T(" '%s', '%s', '%s', '%s', '%s', '%s', %d,  ") \
			_T(" 'Y' )"), m_nID, i+1, 
			m_wndList.GetItemText(i, 2), 
			m_wndList.GetItemText(i, 3), 
			m_wndList.GetItemText(i, 1), 
			m_wndList.GetItemText(i, 4), 
			m_wndList.GetItemText(i, 5), 
			m_wndList.GetItemText(i, 6), 
			m_wndList.GetItemText(i, 7), 
			m_wndList.GetItemText(i, 8), 
			m_wndList.GetItemText(i, 9), 
			ToInt(m_wndList.GetItemText(i, 10)));
_fmsg(_T("%s"), szSQL);
		pMF->ExecSQL(szSQL);
	}
*/
	pMF->Commit();
	OnListLoadData();
	 return 0;
} 

int CVIMESLISInstrumentSetting::OnListInsertItem(){
/*	
	if(m_nID <= 0)
		return -1;
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0)
		nSel = 0;
	m_wndList.InsertItems(nSel+1, _T(""), NULL);
	CString tmpStr;
	for (int i =0; i < m_wndList.GetItemCount(); i++){
		tmpStr.Format(_T("%d"), i+1);
		m_wndList.SetItemText(i, 0, tmpStr);
	}
*/
	UpdateData(true);
	CLIMSInputDataDialog dlg(this);
	dlg.m_nInstID = m_nID;
	dlg.m_szTestGroupKey = m_szTestGroupKey;
	dlg.SetMode(VM_ADD);
	dlg.DoModal();
	return 0;
}

int CVIMESLISInstrumentSetting::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0 )
		return 0;
	int retMsg = ShowMessageBox(_T("Do you want to delete item?(Y/N)"), MB_YESNO|MB_DEFBUTTON2);
	if(retMsg == IDNO)
		return 0;

	int nIndex = ToInt(m_wndList.GetItemText(nSel, 0));
	m_wndList.DeleteItem(nSel);
	CString szSQL;
	szSQL.Format(_T("DELETE FROM lims_instrument_data WHERE limsid_instid=%d and limsid_index=%d"), m_nID, nIndex);
	pMF->ExecSQL(szSQL);
	OnListLoadData();

/*
	CString tmpStr;
	for (int i =0; i < m_wndList.GetItemCount(); i++){
		tmpStr.Format(_T("%d"), i+1);
		m_wndList.SetItemText(i, 0, tmpStr);
	}
*/
	return 0;
}
long CVIMESLISInstrumentSetting::OnListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	UpdateData(true);
	m_wndList.BeginLoad(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT * FROM lims_instrument_data WHERE limsid_instid=%d ORDER BY limsid_index "), m_nID);
	nCount = rs.ExecSQL(szSQL);

	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("limsid_index")), 
			rs.GetValue(_T("limsid_testid")), 
			rs.GetValue(_T("limsid_code")), 
			rs.GetValue(_T("limsid_codein")), 
			rs.GetValue(_T("limsid_name")), 
			rs.GetValue(_T("limsid_unit")), 
			rs.GetValue(_T("limsid_mnorm")), 
			rs.GetValue(_T("limsid_fnorm")), 
			rs.GetValue(_T("limsid_min")), 
			rs.GetValue(_T("limsid_max")), 
			rs.GetValue(_T("limsid_active")), 
			rs.GetValue(_T("limsid_print")), 
			rs.GetValue(_T("limsid_formula")), 
			NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}
void CVIMESLISInstrumentSetting::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnAddHMSInstrumentSetting();	
} 
void CVIMESLISInstrumentSetting::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnEditHMSInstrumentSetting();
} 
void CVIMESLISInstrumentSetting::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnDeleteHMSInstrumentSetting();
} 
void CVIMESLISInstrumentSetting::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveHMSInstrumentSetting();
} 
void CVIMESLISInstrumentSetting::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancelHMSInstrumentSetting();
} 
void CVIMESLISInstrumentSetting::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CVIMESLISInstrumentSetting::OnAddHMSInstrumentSetting(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	m_wndList.DeleteAllItems();
	return 0; 
} 
int CVIMESLISInstrumentSetting::OnEditHMSInstrumentSetting(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 

 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0; 
} 
int CVIMESLISInstrumentSetting::OnDeleteHMSInstrumentSetting(){
	return 0;
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 

 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
 	szSQL.Format(_T("DELETE FROM  lims_instrument WHERE  limsi_id = %d"), m_nID ); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret >= 0){ 
		szSQL.Format(_T("DELETE FROM  lims_instrument_data  WHERE  limsid_instrumentid = %d"), m_nID ); 
		pMF->ExecSQL(szSQL);
		OnInstrumentListLoadData();
		m_wndList.DeleteAllItems();
 		SetMode(VM_NONE); 
 		OnCancelHMSInstrumentSetting(); 
 	}
	return 0;
 } 
int CVIMESLISInstrumentSetting::OnSaveHMSInstrumentSetting(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		szSQL = m_lims_instrumentTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE limsi_id=%d"), m_nID); 
 		szSQL = m_lims_instrumentTbl.GetUpdateSQL(_T("limsi_id")); 
 		szSQL += szWhere; 
 	} 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
/*
		if(GetMode() == VM_ADD){
			CString szResultRecord = m_wndProtocol.GetCurrent(2);
			CString szCode;
			for (int i =0; i < szResultRecord.GetLength(); i++){
				szCode.Format(_T("%d"), i+1);
				szSQL.Format(_T("INSERT INTO lims_instrument_data( ") \
					_T(" limsid_instrumentid, limsid_index, limsid_code, limsid_codein, limsid_active) ") \
				_T("VALUES (%d, %d, '%s', '%s', '%s') "), m_nID, i+1, szCode, szCode, _T("Y"));
				pMF->ExecSQL(szSQL);
			}
		}
*/
/*
		CDeviceInterface di(pMF);
		di.m_szPortName = m_szPortKey;
		di.m_dwBaudrate = ToInt(m_szBaudRateKey);
		di.m_nDataBits = ToInt(m_szDataBitsKey);
		di.m_nStopBits = m_wndStopBits.GetCurSel();
		di.m_nParity = ToInt(m_szParityKey);
		di.m_nFlowControl = ToInt(m_szFlowControlKey);
		di.m_szMachine = m_szName;
		di.SaveSettings();
*/
		OnInstrumentListLoadData();
 		SetMode(VM_VIEW);
		m_wndAdd.SetFocus();
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
}
int CVIMESLISInstrumentSetting::OnCancelHMSInstrumentSetting(){
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
int CVIMESLISInstrumentSetting::OnHMSInstrumentSettingListLoadData(){
	return 0;
}

void CVIMESLISInstrumentSetting::OnSetupFormula(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CString szSQL, szCode;
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0) return;
	szCode = m_wndList.GetItemText(nSel, 2);
	CLIMSFormulaSetupDialog dlg(this);
	dlg.m_szFormula = m_wndList.GetItemText(nSel, 12);
	if(dlg.DoModal() == IDOK){
		if(dlg.m_szFormula.IsEmpty())
			szSQL.Format(_T("UPDATE lims_instrument_data set limsid_calc='N', limsid_formula='' WHERE limsid_instid=%d and limsid_code='%s' "), m_nID, szCode);
		else
			szSQL.Format(_T("UPDATE lims_instrument_data set limsid_calc='Y', limsid_formula='%s' WHERE limsid_instid=%d and limsid_code='%s' "), dlg.m_szFormula, m_nID, szCode);
		pMF->ExecSQL(szSQL);
		OnListLoadData();
	}
}