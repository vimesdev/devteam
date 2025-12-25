#include "HMSMachineInterface.h"
//#include "stdafx.h"
#include "MainFrm.h"
/*static void _OnIndexChangeFnc(CWnd *pWnd){
	((CHMSMachineInterface *)pWnd)->OnIndexChange();
} */
/*static void _OnIndexSetfocusFnc(CWnd *pWnd){
	((CHMSMachineInterface *)pWnd)->OnIndexSetfocus();} */ 
/*static void _OnIndexKillfocusFnc(CWnd *pWnd){
	((CHMSMachineInterface *)pWnd)->OnIndexKillfocus();
} */
static int _OnIndexCheckValueFnc(CWnd *pWnd){
	return ((CHMSMachineInterface *)pWnd)->OnIndexCheckValue();
} 
/*static void _OnDescriptionChangeFnc(CWnd *pWnd){
	((CHMSMachineInterface *)pWnd)->OnDescriptionChange();
} */
/*static void _OnDescriptionSetfocusFnc(CWnd *pWnd){
	((CHMSMachineInterface *)pWnd)->OnDescriptionSetfocus();} */ 
/*static void _OnDescriptionKillfocusFnc(CWnd *pWnd){
	((CHMSMachineInterface *)pWnd)->OnDescriptionKillfocus();
} */
static int _OnDescriptionCheckValueFnc(CWnd *pWnd){
	return ((CHMSMachineInterface *)pWnd)->OnDescriptionCheckValue();
} 
/*static void _OnPortConnectChangeFnc(CWnd *pWnd){
	((CHMSMachineInterface *)pWnd)->OnPortConnectChange();
} */
/*static void _OnPortConnectSetfocusFnc(CWnd *pWnd){
	((CHMSMachineInterface *)pWnd)->OnPortConnectSetfocus();} */ 
/*static void _OnPortConnectKillfocusFnc(CWnd *pWnd){
	((CHMSMachineInterface *)pWnd)->OnPortConnectKillfocus();
} */
static int _OnPortConnectCheckValueFnc(CWnd *pWnd){
	return ((CHMSMachineInterface *)pWnd)->OnPortConnectCheckValue();
} 
static void _OnTestTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSMachineInterface* )pWnd)->OnTestTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTestTypeSelendokFnc(CWnd *pWnd){
	((CHMSMachineInterface *)pWnd)->OnTestTypeSelendok();
}
/*static void _OnTestTypeSetfocusFnc(CWnd *pWnd){
	((CHMSMachineInterface *)pWnd)->OnTestTypeKillfocus();
}*/
/*static void _OnTestTypeKillfocusFnc(CWnd *pWnd){
	((CHMSMachineInterface *)pWnd)->OnTestTypeKillfocus();
}*/
static long _OnTestTypeLoadDataFnc(CWnd *pWnd){
	return ((CHMSMachineInterface *)pWnd)->OnTestTypeLoadData();
}
/*static void _OnTestTypeAddNewFnc(CWnd *pWnd){
	((CHMSMachineInterface *)pWnd)->OnTestTypeAddNew();
}*/
/*static void _OnBarcodeChangeFnc(CWnd *pWnd){
	((CHMSMachineInterface *)pWnd)->OnBarcodeChange();
} */
/*static void _OnBarcodeSetfocusFnc(CWnd *pWnd){
	((CHMSMachineInterface *)pWnd)->OnBarcodeSetfocus();} */ 
/*static void _OnBarcodeKillfocusFnc(CWnd *pWnd){
	((CHMSMachineInterface *)pWnd)->OnBarcodeKillfocus();
} */
static int _OnBarcodeCheckValueFnc(CWnd *pWnd){
	return ((CHMSMachineInterface *)pWnd)->OnBarcodeCheckValue();
} 
/*static void _OnSendTypeChangeFnc(CWnd *pWnd){
	((CHMSMachineInterface *)pWnd)->OnSendTypeChange();
} */
/*static void _OnSendTypeSetfocusFnc(CWnd *pWnd){
	((CHMSMachineInterface *)pWnd)->OnSendTypeSetfocus();} */ 
/*static void _OnSendTypeKillfocusFnc(CWnd *pWnd){
	((CHMSMachineInterface *)pWnd)->OnSendTypeKillfocus();
} */
static int _OnSendTypeCheckValueFnc(CWnd *pWnd){
	return ((CHMSMachineInterface *)pWnd)->OnSendTypeCheckValue();
} 
/*static void _OnHeaderRecordChangeFnc(CWnd *pWnd){
	((CHMSMachineInterface *)pWnd)->OnHeaderRecordChange();
} */
/*static void _OnHeaderRecordSetfocusFnc(CWnd *pWnd){
	((CHMSMachineInterface *)pWnd)->OnHeaderRecordSetfocus();} */ 
/*static void _OnHeaderRecordKillfocusFnc(CWnd *pWnd){
	((CHMSMachineInterface *)pWnd)->OnHeaderRecordKillfocus();
} */
static int _OnHeaderRecordCheckValueFnc(CWnd *pWnd){
	return ((CHMSMachineInterface *)pWnd)->OnHeaderRecordCheckValue();
} 
/*static void _OnPatientRecordChangeFnc(CWnd *pWnd){
	((CHMSMachineInterface *)pWnd)->OnPatientRecordChange();
} */
/*static void _OnPatientRecordSetfocusFnc(CWnd *pWnd){
	((CHMSMachineInterface *)pWnd)->OnPatientRecordSetfocus();} */ 
/*static void _OnPatientRecordKillfocusFnc(CWnd *pWnd){
	((CHMSMachineInterface *)pWnd)->OnPatientRecordKillfocus();
} */
static int _OnPatientRecordCheckValueFnc(CWnd *pWnd){
	return ((CHMSMachineInterface *)pWnd)->OnPatientRecordCheckValue();
} 
/*static void _OnOrderRecordChangeFnc(CWnd *pWnd){
	((CHMSMachineInterface *)pWnd)->OnOrderRecordChange();
} */
/*static void _OnOrderRecordSetfocusFnc(CWnd *pWnd){
	((CHMSMachineInterface *)pWnd)->OnOrderRecordSetfocus();} */ 
/*static void _OnOrderRecordKillfocusFnc(CWnd *pWnd){
	((CHMSMachineInterface *)pWnd)->OnOrderRecordKillfocus();
} */
static int _OnOrderRecordCheckValueFnc(CWnd *pWnd){
	return ((CHMSMachineInterface *)pWnd)->OnOrderRecordCheckValue();
} 
/*static void _OnExtendedResultRecordChangeFnc(CWnd *pWnd){
	((CHMSMachineInterface *)pWnd)->OnExtendedResultRecordChange();
} */
/*static void _OnExtendedResultRecordSetfocusFnc(CWnd *pWnd){
	((CHMSMachineInterface *)pWnd)->OnExtendedResultRecordSetfocus();} */ 
/*static void _OnExtendedResultRecordKillfocusFnc(CWnd *pWnd){
	((CHMSMachineInterface *)pWnd)->OnExtendedResultRecordKillfocus();
} */
static int _OnExtendedResultRecordCheckValueFnc(CWnd *pWnd){
	return ((CHMSMachineInterface *)pWnd)->OnExtendedResultRecordCheckValue();
} 
/*static void _OnResultRecordChangeFnc(CWnd *pWnd){
	((CHMSMachineInterface *)pWnd)->OnResultRecordChange();
} */
/*static void _OnResultRecordSetfocusFnc(CWnd *pWnd){
	((CHMSMachineInterface *)pWnd)->OnResultRecordSetfocus();} */ 
/*static void _OnResultRecordKillfocusFnc(CWnd *pWnd){
	((CHMSMachineInterface *)pWnd)->OnResultRecordKillfocus();
} */
static int _OnResultRecordCheckValueFnc(CWnd *pWnd){
	return ((CHMSMachineInterface *)pWnd)->OnResultRecordCheckValue();
} 
/*static void _OnCommentRecordChangeFnc(CWnd *pWnd){
	((CHMSMachineInterface *)pWnd)->OnCommentRecordChange();
} */
/*static void _OnCommentRecordSetfocusFnc(CWnd *pWnd){
	((CHMSMachineInterface *)pWnd)->OnCommentRecordSetfocus();} */ 
/*static void _OnCommentRecordKillfocusFnc(CWnd *pWnd){
	((CHMSMachineInterface *)pWnd)->OnCommentRecordKillfocus();
} */
static int _OnCommentRecordCheckValueFnc(CWnd *pWnd){
	return ((CHMSMachineInterface *)pWnd)->OnCommentRecordCheckValue();
} 
/*static void _OnTrailerRecordChangeFnc(CWnd *pWnd){
	((CHMSMachineInterface *)pWnd)->OnTrailerRecordChange();
} */
/*static void _OnTrailerRecordSetfocusFnc(CWnd *pWnd){
	((CHMSMachineInterface *)pWnd)->OnTrailerRecordSetfocus();} */ 
/*static void _OnTrailerRecordKillfocusFnc(CWnd *pWnd){
	((CHMSMachineInterface *)pWnd)->OnTrailerRecordKillfocus();
} */
static int _OnTrailerRecordCheckValueFnc(CWnd *pWnd){
	return ((CHMSMachineInterface *)pWnd)->OnTrailerRecordCheckValue();
} 
/*static void _OnFieldsSeperatorChangeFnc(CWnd *pWnd){
	((CHMSMachineInterface *)pWnd)->OnFieldsSeperatorChange();
} */
/*static void _OnFieldsSeperatorSetfocusFnc(CWnd *pWnd){
	((CHMSMachineInterface *)pWnd)->OnFieldsSeperatorSetfocus();} */ 
/*static void _OnFieldsSeperatorKillfocusFnc(CWnd *pWnd){
	((CHMSMachineInterface *)pWnd)->OnFieldsSeperatorKillfocus();
} */
static int _OnFieldsSeperatorCheckValueFnc(CWnd *pWnd){
	return ((CHMSMachineInterface *)pWnd)->OnFieldsSeperatorCheckValue();
} 
/*static void _OnOptionComponentSeperatorChangeFnc(CWnd *pWnd){
	((CHMSMachineInterface *)pWnd)->OnOptionComponentSeperatorChange();
} */
/*static void _OnOptionComponentSeperatorSetfocusFnc(CWnd *pWnd){
	((CHMSMachineInterface *)pWnd)->OnOptionComponentSeperatorSetfocus();} */ 
/*static void _OnOptionComponentSeperatorKillfocusFnc(CWnd *pWnd){
	((CHMSMachineInterface *)pWnd)->OnOptionComponentSeperatorKillfocus();
} */
static int _OnOptionComponentSeperatorCheckValueFnc(CWnd *pWnd){
	return ((CHMSMachineInterface *)pWnd)->OnOptionComponentSeperatorCheckValue();
} 
/*static void _OnUnuseRecordChangeFnc(CWnd *pWnd){
	((CHMSMachineInterface *)pWnd)->OnUnuseRecordChange();
} */
/*static void _OnUnuseRecordSetfocusFnc(CWnd *pWnd){
	((CHMSMachineInterface *)pWnd)->OnUnuseRecordSetfocus();} */ 
/*static void _OnUnuseRecordKillfocusFnc(CWnd *pWnd){
	((CHMSMachineInterface *)pWnd)->OnUnuseRecordKillfocus();
} */
static int _OnUnuseRecordCheckValueFnc(CWnd *pWnd){
	return ((CHMSMachineInterface *)pWnd)->OnUnuseRecordCheckValue();
} 
static void _OnActiveSelectFnc(CWnd *pWnd){
	 ((CHMSMachineInterface*)pWnd)->OnActiveSelect();
}
static int _OnAddHMSMachineInterfaceFnc(CWnd *pWnd){
	 return ((CHMSMachineInterface*)pWnd)->OnAddHMSMachineInterface();
} 
static int _OnEditHMSMachineInterfaceFnc(CWnd *pWnd){
	 return ((CHMSMachineInterface*)pWnd)->OnEditHMSMachineInterface();
} 
static int _OnDeleteHMSMachineInterfaceFnc(CWnd *pWnd){
	 return ((CHMSMachineInterface*)pWnd)->OnDeleteHMSMachineInterface();
} 
static int _OnSaveHMSMachineInterfaceFnc(CWnd *pWnd){
	 return ((CHMSMachineInterface*)pWnd)->OnSaveHMSMachineInterface();
} 
static int _OnCancelHMSMachineInterfaceFnc(CWnd *pWnd){
	 return ((CHMSMachineInterface*)pWnd)->OnCancelHMSMachineInterface();
} 
CHMSMachineInterface::CHMSMachineInterface(){

	m_nDlgWidth = 790;
	m_nDlgHeight = 676;
	SetDefaultValues();
}
CHMSMachineInterface::~CHMSMachineInterface(){
}
void CHMSMachineInterface::OnCreateComponents(){
	m_wndIndexLabel.Create(this, _T("Index"), 5, 5, 101, 27);
	m_wndIndex.Create(this,106, 5, 176, 27); 
	m_wndDescriptionLabel.Create(this, _T("Description"), 5, 32, 101, 54);
	m_wndDescription.Create(this,106, 32, 176, 54); 
	m_wndPortConnectLabel.Create(this, _T("Port Connect"), 5, 59, 101, 81);
	m_wndPortConnect.Create(this,106, 59, 176, 81); 
	m_wndTestTypeLabel.Create(this, _T("Test Type"), 5, 86, 101, 108);
	m_wndTestType.Create(this,106, 86, 176, 108); 
	m_wndBarcodeLabel.Create(this, _T("Barcode"), 5, 113, 101, 135);
	m_wndBarcode.Create(this,106, 113, 176, 135); 
	m_wndSendTypeLabel.Create(this, _T("Send Type"), 5, 140, 101, 162);
	m_wndSendType.Create(this,106, 140, 176, 162); 
	m_wndHeaderRecordLabel.Create(this, _T("Header Record"), 5, 167, 101, 189);
	m_wndHeaderRecord.Create(this,106, 167, 176, 189); 
	m_wndPatientRecordLabel.Create(this, _T("Patient Record"), 5, 194, 101, 216);
	m_wndPatientRecord.Create(this,106, 194, 176, 216); 
	m_wndOrderRecordLabel.Create(this, _T("Order Record"), 5, 221, 101, 243);
	m_wndOrderRecord.Create(this,106, 221, 176, 243); 
	m_wndExtendedResultRecord.Create(this,106, 248, 176, 270); 
	m_wndResultRecordLabel.Create(this, _T("Result Record"), 5, 275, 101, 297);
	m_wndResultRecord.Create(this,106, 275, 176, 297); 
	m_wndCommentRecordLabel.Create(this, _T("Comment Record"), 5, 302, 101, 324);
	m_wndCommentRecord.Create(this,106, 302, 176, 324); 
	m_wndTrailerRecordLabel.Create(this, _T("Trailer Record"), 5, 329, 101, 351);
	m_wndTrailerRecord.Create(this,106, 329, 176, 351); 
	m_wndFieldsSeperatorLabel.Create(this, _T("Fields Seperator"), 5, 356, 101, 378);
	m_wndFieldsSeperator.Create(this,106, 356, 176, 378); 
	m_wndOptionComponentSeperatorLabel.Create(this, _T("Option Component Seperator"), 5, 383, 161, 405);
	m_wndOptionComponentSeperator.Create(this,166, 383, 236, 405); 
	m_wndUnuseRecordLabel.Create(this, _T("Unuse Record"), 4, 418, 100, 440);
	m_wndUnuseRecord.Create(this,105, 418, 175, 440); 
	m_wndActive.Create(this, _T("Active"), 67, 444, 137, 466);
	m_wndExtendedResultRecordLabel.Create(this, _T("Extended Result Record"), 5, 248, 161, 270);

}
void CHMSMachineInterface::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndIndex.SetCheckValue(true);
	m_wndDescription.SetLimitText(81);
	m_wndDescription.SetCheckValue(true);
	m_wndPortConnect.SetLimitText(1);
	m_wndPortConnect.SetCheckValue(true);
	m_wndTestType.SetCheckValue(true);
	m_wndTestType.LimitText(5);
	m_wndBarcode.SetLimitText(15);
	m_wndBarcode.SetCheckValue(true);
	m_wndSendType.SetCheckValue(true);
	m_wndHeaderRecord.SetLimitText(5);
	m_wndHeaderRecord.SetCheckValue(true);
	m_wndPatientRecord.SetLimitText(5);
	m_wndPatientRecord.SetCheckValue(true);
	m_wndOrderRecord.SetLimitText(5);
	m_wndOrderRecord.SetCheckValue(true);
	m_wndExtendedResultRecord.SetLimitText(5);
	m_wndExtendedResultRecord.SetCheckValue(true);
	m_wndResultRecord.SetLimitText(5);
	m_wndResultRecord.SetCheckValue(true);
	m_wndCommentRecord.SetLimitText(5);
	m_wndCommentRecord.SetCheckValue(true);
	m_wndTrailerRecord.SetLimitText(5);
	m_wndTrailerRecord.SetCheckValue(true);
	m_wndFieldsSeperator.SetLimitText(5);
	m_wndFieldsSeperator.SetCheckValue(true);
	m_wndOptionComponentSeperator.SetLimitText(5);
	m_wndOptionComponentSeperator.SetCheckValue(true);
	m_wndUnuseRecord.SetLimitText(5);
	m_wndUnuseRecord.SetCheckValue(true);


	m_wndTestType.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndTestType.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);
	m_hms_machine_interfaceTbl.SetTableName(_T("hms_machine_interface"));
	m_hms_machine_interfaceTbl.AddField(_T("hmi_id"), dfLong); 
	m_hms_machine_interfaceTbl.AddField(_T("hmi_desc"), dfText, 81); 
	m_hms_machine_interfaceTbl.AddField(_T("hmi_porttype"), dfText, 1); 
	m_hms_machine_interfaceTbl.AddField(_T("hmi_testtype"), dfText, 5); 
	m_hms_machine_interfaceTbl.AddField(_T("hmi_barcode"), dfText, 15); 
	m_hms_machine_interfaceTbl.AddField(_T("hmi_sendtype"), dfLong); 
	m_hms_machine_interfaceTbl.AddField(_T("hmi_headerrecord"), dfText, 5); 
	m_hms_machine_interfaceTbl.AddField(_T("hmi_patientrecord"), dfText, 5); 
	m_hms_machine_interfaceTbl.AddField(_T("hmi_orderrecord"), dfText, 5); 
	m_hms_machine_interfaceTbl.AddField(_T("hmi_exresultrecord"), dfText, 5); 
	m_hms_machine_interfaceTbl.AddField(_T("hmi_resultrecord"), dfText, 5); 
	m_hms_machine_interfaceTbl.AddField(_T("hmi_commentrecord"), dfText, 5); 
	m_hms_machine_interfaceTbl.AddField(_T("hmi_trailerrecord"), dfText, 5); 
	m_hms_machine_interfaceTbl.AddField(_T("hmi_fieldseperator"), dfText, 5); 
	m_hms_machine_interfaceTbl.AddField(_T("hmi_optserperator"), dfText, 5); 
	m_hms_machine_interfaceTbl.AddField(_T("hmi_unuse"), dfText, 5); 
	m_hms_machine_interfaceTbl.AddField(_T("hmi_active"), dfText, 1); 

}
void CHMSMachineInterface::OnSetWindowEvents(){
	//m_wndIndex.SetEvent(WE_CHANGE, _OnIndexChangeFnc);
	//m_wndIndex.SetEvent(WE_SETFOCUS, _OnIndexSetfocusFnc);
	//m_wndIndex.SetEvent(WE_KILLFOCUS, _OnIndexKillfocusFnc);
	m_wndIndex.SetEvent(WE_CHECKVALUE, _OnIndexCheckValueFnc);
	//m_wndDescription.SetEvent(WE_CHANGE, _OnDescriptionChangeFnc);
	//m_wndDescription.SetEvent(WE_SETFOCUS, _OnDescriptionSetfocusFnc);
	//m_wndDescription.SetEvent(WE_KILLFOCUS, _OnDescriptionKillfocusFnc);
	m_wndDescription.SetEvent(WE_CHECKVALUE, _OnDescriptionCheckValueFnc);
	//m_wndPortConnect.SetEvent(WE_CHANGE, _OnPortConnectChangeFnc);
	//m_wndPortConnect.SetEvent(WE_SETFOCUS, _OnPortConnectSetfocusFnc);
	//m_wndPortConnect.SetEvent(WE_KILLFOCUS, _OnPortConnectKillfocusFnc);
	m_wndPortConnect.SetEvent(WE_CHECKVALUE, _OnPortConnectCheckValueFnc);
	m_wndTestType.SetEvent(WE_SELENDOK, _OnTestTypeSelendokFnc);
	//m_wndTestType.SetEvent(WE_SETFOCUS, _OnTestTypeSetfocusFnc);
	//m_wndTestType.SetEvent(WE_KILLFOCUS, _OnTestTypeKillfocusFnc);
	m_wndTestType.SetEvent(WE_SELCHANGE, _OnTestTypeSelectChangeFnc);
	m_wndTestType.SetEvent(WE_LOADDATA, _OnTestTypeLoadDataFnc);
	//m_wndTestType.SetEvent(WE_ADDNEW, _OnTestTypeAddNewFnc);
	//m_wndBarcode.SetEvent(WE_CHANGE, _OnBarcodeChangeFnc);
	//m_wndBarcode.SetEvent(WE_SETFOCUS, _OnBarcodeSetfocusFnc);
	//m_wndBarcode.SetEvent(WE_KILLFOCUS, _OnBarcodeKillfocusFnc);
	m_wndBarcode.SetEvent(WE_CHECKVALUE, _OnBarcodeCheckValueFnc);
	//m_wndSendType.SetEvent(WE_CHANGE, _OnSendTypeChangeFnc);
	//m_wndSendType.SetEvent(WE_SETFOCUS, _OnSendTypeSetfocusFnc);
	//m_wndSendType.SetEvent(WE_KILLFOCUS, _OnSendTypeKillfocusFnc);
	m_wndSendType.SetEvent(WE_CHECKVALUE, _OnSendTypeCheckValueFnc);
	//m_wndHeaderRecord.SetEvent(WE_CHANGE, _OnHeaderRecordChangeFnc);
	//m_wndHeaderRecord.SetEvent(WE_SETFOCUS, _OnHeaderRecordSetfocusFnc);
	//m_wndHeaderRecord.SetEvent(WE_KILLFOCUS, _OnHeaderRecordKillfocusFnc);
	m_wndHeaderRecord.SetEvent(WE_CHECKVALUE, _OnHeaderRecordCheckValueFnc);
	//m_wndPatientRecord.SetEvent(WE_CHANGE, _OnPatientRecordChangeFnc);
	//m_wndPatientRecord.SetEvent(WE_SETFOCUS, _OnPatientRecordSetfocusFnc);
	//m_wndPatientRecord.SetEvent(WE_KILLFOCUS, _OnPatientRecordKillfocusFnc);
	m_wndPatientRecord.SetEvent(WE_CHECKVALUE, _OnPatientRecordCheckValueFnc);
	//m_wndOrderRecord.SetEvent(WE_CHANGE, _OnOrderRecordChangeFnc);
	//m_wndOrderRecord.SetEvent(WE_SETFOCUS, _OnOrderRecordSetfocusFnc);
	//m_wndOrderRecord.SetEvent(WE_KILLFOCUS, _OnOrderRecordKillfocusFnc);
	m_wndOrderRecord.SetEvent(WE_CHECKVALUE, _OnOrderRecordCheckValueFnc);
	//m_wndExtendedResultRecord.SetEvent(WE_CHANGE, _OnExtendedResultRecordChangeFnc);
	//m_wndExtendedResultRecord.SetEvent(WE_SETFOCUS, _OnExtendedResultRecordSetfocusFnc);
	//m_wndExtendedResultRecord.SetEvent(WE_KILLFOCUS, _OnExtendedResultRecordKillfocusFnc);
	m_wndExtendedResultRecord.SetEvent(WE_CHECKVALUE, _OnExtendedResultRecordCheckValueFnc);
	//m_wndResultRecord.SetEvent(WE_CHANGE, _OnResultRecordChangeFnc);
	//m_wndResultRecord.SetEvent(WE_SETFOCUS, _OnResultRecordSetfocusFnc);
	//m_wndResultRecord.SetEvent(WE_KILLFOCUS, _OnResultRecordKillfocusFnc);
	m_wndResultRecord.SetEvent(WE_CHECKVALUE, _OnResultRecordCheckValueFnc);
	//m_wndCommentRecord.SetEvent(WE_CHANGE, _OnCommentRecordChangeFnc);
	//m_wndCommentRecord.SetEvent(WE_SETFOCUS, _OnCommentRecordSetfocusFnc);
	//m_wndCommentRecord.SetEvent(WE_KILLFOCUS, _OnCommentRecordKillfocusFnc);
	m_wndCommentRecord.SetEvent(WE_CHECKVALUE, _OnCommentRecordCheckValueFnc);
	//m_wndTrailerRecord.SetEvent(WE_CHANGE, _OnTrailerRecordChangeFnc);
	//m_wndTrailerRecord.SetEvent(WE_SETFOCUS, _OnTrailerRecordSetfocusFnc);
	//m_wndTrailerRecord.SetEvent(WE_KILLFOCUS, _OnTrailerRecordKillfocusFnc);
	m_wndTrailerRecord.SetEvent(WE_CHECKVALUE, _OnTrailerRecordCheckValueFnc);
	//m_wndFieldsSeperator.SetEvent(WE_CHANGE, _OnFieldsSeperatorChangeFnc);
	//m_wndFieldsSeperator.SetEvent(WE_SETFOCUS, _OnFieldsSeperatorSetfocusFnc);
	//m_wndFieldsSeperator.SetEvent(WE_KILLFOCUS, _OnFieldsSeperatorKillfocusFnc);
	m_wndFieldsSeperator.SetEvent(WE_CHECKVALUE, _OnFieldsSeperatorCheckValueFnc);
	//m_wndOptionComponentSeperator.SetEvent(WE_CHANGE, _OnOptionComponentSeperatorChangeFnc);
	//m_wndOptionComponentSeperator.SetEvent(WE_SETFOCUS, _OnOptionComponentSeperatorSetfocusFnc);
	//m_wndOptionComponentSeperator.SetEvent(WE_KILLFOCUS, _OnOptionComponentSeperatorKillfocusFnc);
	m_wndOptionComponentSeperator.SetEvent(WE_CHECKVALUE, _OnOptionComponentSeperatorCheckValueFnc);
	//m_wndUnuseRecord.SetEvent(WE_CHANGE, _OnUnuseRecordChangeFnc);
	//m_wndUnuseRecord.SetEvent(WE_SETFOCUS, _OnUnuseRecordSetfocusFnc);
	//m_wndUnuseRecord.SetEvent(WE_KILLFOCUS, _OnUnuseRecordKillfocusFnc);
	m_wndUnuseRecord.SetEvent(WE_CHECKVALUE, _OnUnuseRecordCheckValueFnc);
	m_wndActive.SetEvent(WE_CLICK, _OnActiveSelectFnc);

}
void CHMSMachineInterface::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndIndex.GetDlgCtrlID(), m_nIndex);
	DDX_Text(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescription);
	DDX_Text(pDX, m_wndPortConnect.GetDlgCtrlID(), m_szPortConnect);
	DDX_TextEx(pDX, m_wndTestType.GetDlgCtrlID(), m_szTestTypeKey);
	DDX_Text(pDX, m_wndBarcode.GetDlgCtrlID(), m_szBarcode);
	DDX_Text(pDX, m_wndSendType.GetDlgCtrlID(), m_nSendType);
	DDX_Text(pDX, m_wndHeaderRecord.GetDlgCtrlID(), m_szHeaderRecord);
	DDX_Text(pDX, m_wndPatientRecord.GetDlgCtrlID(), m_szPatientRecord);
	DDX_Text(pDX, m_wndOrderRecord.GetDlgCtrlID(), m_szOrderRecord);
	DDX_Text(pDX, m_wndExtendedResultRecord.GetDlgCtrlID(), m_szExtendedResultRecord);
	DDX_Text(pDX, m_wndResultRecord.GetDlgCtrlID(), m_szResultRecord);
	DDX_Text(pDX, m_wndCommentRecord.GetDlgCtrlID(), m_szCommentRecord);
	DDX_Text(pDX, m_wndTrailerRecord.GetDlgCtrlID(), m_szTrailerRecord);
	DDX_Text(pDX, m_wndFieldsSeperator.GetDlgCtrlID(), m_szFieldsSeperator);
	DDX_Text(pDX, m_wndOptionComponentSeperator.GetDlgCtrlID(), m_szOptionComponentSeperator);
	DDX_Text(pDX, m_wndUnuseRecord.GetDlgCtrlID(), m_szUnuseRecord);
	DDX_Check(pDX, m_wndActive.GetDlgCtrlID(), m_bActive);

}
void CHMSMachineInterface::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("hmi_id"), m_nIndex);
	rs.GetValue(_T("hmi_desc"), m_szDescription);
	rs.GetValue(_T("hmi_porttype"), m_szPortConnect);
	rs.GetValue(_T("hmi_testtype"), m_szTestTypeKey);
	rs.GetValue(_T("hmi_barcode"), m_szBarcode);
	rs.GetValue(_T("hmi_sendtype"), m_nSendType);
	rs.GetValue(_T("hmi_headerrecord"), m_szHeaderRecord);
	rs.GetValue(_T("hmi_patientrecord"), m_szPatientRecord);
	rs.GetValue(_T("hmi_orderrecord"), m_szOrderRecord);
	rs.GetValue(_T("hmi_exresultrecord"), m_szExtendedResultRecord);
	rs.GetValue(_T("hmi_resultrecord"), m_szResultRecord);
	rs.GetValue(_T("hmi_commentrecord"), m_szCommentRecord);
	rs.GetValue(_T("hmi_trailerrecord"), m_szTrailerRecord);
	rs.GetValue(_T("hmi_fieldseperator"), m_szFieldsSeperator);
	rs.GetValue(_T("hmi_optserperator"), m_szOptionComponentSeperator);
	rs.GetValue(_T("hmi_unuse"), m_szUnuseRecord);
	rs.GetValue(_T("hmi_active"), m_bActive);

}
void CHMSMachineInterface::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_hms_machine_interfaceTbl.SetValue(_T("hmi_id"), m_nIndex);
	m_hms_machine_interfaceTbl.SetValue(_T("hmi_desc"), m_szDescription);
	m_hms_machine_interfaceTbl.SetValue(_T("hmi_porttype"), m_szPortConnect);
	m_hms_machine_interfaceTbl.SetValue(_T("hmi_testtype"), m_szTestTypeKey);
	m_hms_machine_interfaceTbl.SetValue(_T("hmi_barcode"), m_szBarcode);
	m_hms_machine_interfaceTbl.SetValue(_T("hmi_sendtype"), m_nSendType);
	m_hms_machine_interfaceTbl.SetValue(_T("hmi_headerrecord"), m_szHeaderRecord);
	m_hms_machine_interfaceTbl.SetValue(_T("hmi_patientrecord"), m_szPatientRecord);
	m_hms_machine_interfaceTbl.SetValue(_T("hmi_orderrecord"), m_szOrderRecord);
	m_hms_machine_interfaceTbl.SetValue(_T("hmi_exresultrecord"), m_szExtendedResultRecord);
	m_hms_machine_interfaceTbl.SetValue(_T("hmi_resultrecord"), m_szResultRecord);
	m_hms_machine_interfaceTbl.SetValue(_T("hmi_commentrecord"), m_szCommentRecord);
	m_hms_machine_interfaceTbl.SetValue(_T("hmi_trailerrecord"), m_szTrailerRecord);
	m_hms_machine_interfaceTbl.SetValue(_T("hmi_fieldseperator"), m_szFieldsSeperator);
	m_hms_machine_interfaceTbl.SetValue(_T("hmi_optserperator"), m_szOptionComponentSeperator);
	m_hms_machine_interfaceTbl.SetValue(_T("hmi_unuse"), m_szUnuseRecord);
	m_hms_machine_interfaceTbl.SetValue(_T("hmi_active"), m_bActive);

}
void CHMSMachineInterface::SetDefaultValues(){

	m_nIndex=0;
	m_szDescription.Empty();
	m_szPortConnect.Empty();
	m_szTestTypeKey.Empty();
	m_szBarcode.Empty();
	m_nSendType=0;
	m_szHeaderRecord.Empty();
	m_szPatientRecord.Empty();
	m_szOrderRecord.Empty();
	m_szExtendedResultRecord.Empty();
	m_szResultRecord.Empty();
	m_szCommentRecord.Empty();
	m_szTrailerRecord.Empty();
	m_szFieldsSeperator.Empty();
	m_szOptionComponentSeperator.Empty();
	m_szUnuseRecord.Empty();
	m_bActive=FALSE;

}
int CHMSMachineInterface::SetMode(int nMode){ 
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
/*void CHMSMachineInterface::OnIndexChange(){
	
} */
/*void CHMSMachineInterface::OnIndexSetfocus(){
	
} */
/*void CHMSMachineInterface::OnIndexKillfocus(){
	
} */
int CHMSMachineInterface::OnIndexCheckValue(){
	return 0;
} 
/*void CHMSMachineInterface::OnDescriptionChange(){
	
} */
/*void CHMSMachineInterface::OnDescriptionSetfocus(){
	
} */
/*void CHMSMachineInterface::OnDescriptionKillfocus(){
	
} */
int CHMSMachineInterface::OnDescriptionCheckValue(){
	return 0;
} 
/*void CHMSMachineInterface::OnPortConnectChange(){
	
} */
/*void CHMSMachineInterface::OnPortConnectSetfocus(){
	
} */
/*void CHMSMachineInterface::OnPortConnectKillfocus(){
	
} */
int CHMSMachineInterface::OnPortConnectCheckValue(){
	return 0;
} 
void CHMSMachineInterface::OnTestTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSMachineInterface::OnTestTypeSelendok(){
	 
}
/*void CHMSMachineInterface::OnTestTypeSetfocus(){
	
}*/
/*void CHMSMachineInterface::OnTestTypeKillfocus(){
	
}*/
long CHMSMachineInterface::OnTestTypeLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndTestType.IsSearchKey() && !m_szTestTypeKey.IsEmpty()){
	};
	m_wndTestType.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndTestType.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSMachineInterface::OnTestTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSMachineInterface::OnBarcodeChange(){
	
} */
/*void CHMSMachineInterface::OnBarcodeSetfocus(){
	
} */
/*void CHMSMachineInterface::OnBarcodeKillfocus(){
	
} */
int CHMSMachineInterface::OnBarcodeCheckValue(){
	return 0;
} 
/*void CHMSMachineInterface::OnSendTypeChange(){
	
} */
/*void CHMSMachineInterface::OnSendTypeSetfocus(){
	
} */
/*void CHMSMachineInterface::OnSendTypeKillfocus(){
	
} */
int CHMSMachineInterface::OnSendTypeCheckValue(){
	return 0;
} 
/*void CHMSMachineInterface::OnHeaderRecordChange(){
	
} */
/*void CHMSMachineInterface::OnHeaderRecordSetfocus(){
	
} */
/*void CHMSMachineInterface::OnHeaderRecordKillfocus(){
	
} */
int CHMSMachineInterface::OnHeaderRecordCheckValue(){
	return 0;
} 
/*void CHMSMachineInterface::OnPatientRecordChange(){
	
} */
/*void CHMSMachineInterface::OnPatientRecordSetfocus(){
	
} */
/*void CHMSMachineInterface::OnPatientRecordKillfocus(){
	
} */
int CHMSMachineInterface::OnPatientRecordCheckValue(){
	return 0;
} 
/*void CHMSMachineInterface::OnOrderRecordChange(){
	
} */
/*void CHMSMachineInterface::OnOrderRecordSetfocus(){
	
} */
/*void CHMSMachineInterface::OnOrderRecordKillfocus(){
	
} */
int CHMSMachineInterface::OnOrderRecordCheckValue(){
	return 0;
} 
/*void CHMSMachineInterface::OnExtendedResultRecordChange(){
	
} */
/*void CHMSMachineInterface::OnExtendedResultRecordSetfocus(){
	
} */
/*void CHMSMachineInterface::OnExtendedResultRecordKillfocus(){
	
} */
int CHMSMachineInterface::OnExtendedResultRecordCheckValue(){
	return 0;
} 
/*void CHMSMachineInterface::OnResultRecordChange(){
	
} */
/*void CHMSMachineInterface::OnResultRecordSetfocus(){
	
} */
/*void CHMSMachineInterface::OnResultRecordKillfocus(){
	
} */
int CHMSMachineInterface::OnResultRecordCheckValue(){
	return 0;
} 
/*void CHMSMachineInterface::OnCommentRecordChange(){
	
} */
/*void CHMSMachineInterface::OnCommentRecordSetfocus(){
	
} */
/*void CHMSMachineInterface::OnCommentRecordKillfocus(){
	
} */
int CHMSMachineInterface::OnCommentRecordCheckValue(){
	return 0;
} 
/*void CHMSMachineInterface::OnTrailerRecordChange(){
	
} */
/*void CHMSMachineInterface::OnTrailerRecordSetfocus(){
	
} */
/*void CHMSMachineInterface::OnTrailerRecordKillfocus(){
	
} */
int CHMSMachineInterface::OnTrailerRecordCheckValue(){
	return 0;
} 
/*void CHMSMachineInterface::OnFieldsSeperatorChange(){
	
} */
/*void CHMSMachineInterface::OnFieldsSeperatorSetfocus(){
	
} */
/*void CHMSMachineInterface::OnFieldsSeperatorKillfocus(){
	
} */
int CHMSMachineInterface::OnFieldsSeperatorCheckValue(){
	return 0;
} 
/*void CHMSMachineInterface::OnOptionComponentSeperatorChange(){
	
} */
/*void CHMSMachineInterface::OnOptionComponentSeperatorSetfocus(){
	
} */
/*void CHMSMachineInterface::OnOptionComponentSeperatorKillfocus(){
	
} */
int CHMSMachineInterface::OnOptionComponentSeperatorCheckValue(){
	return 0;
} 
/*void CHMSMachineInterface::OnUnuseRecordChange(){
	
} */
/*void CHMSMachineInterface::OnUnuseRecordSetfocus(){
	
} */
/*void CHMSMachineInterface::OnUnuseRecordKillfocus(){
	
} */
int CHMSMachineInterface::OnUnuseRecordCheckValue(){
	return 0;
} 
	void CHMSMachineInterface::OnActiveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
int CHMSMachineInterface::OnAddHMSMachineInterface(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Add HMSMachineInterface"))) 
 		return -1; 
 	SetMode(VM_ADD);
return 0; 
 
} 
int CHMSMachineInterface::OnEditHMSMachineInterface(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Edit HMSMachineInterface"))) 
 		return -1; 
 	SetMode(VM_EDIT);
return 0;  
 
} 
int CHMSMachineInterface::OnDeleteHMSMachineInterface(){
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
 		OnCancelHMSMachineInterface(); 
 	}
return 0;
 } 
int CHMSMachineInterface::OnSaveHMSMachineInterface(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		//7szSQL = m_hms_machine_interfaceTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE")); 
 		//szSQL = m_hms_machine_interfaceTbl.GetUpdateSQL(_T("createdby,createddate")); 
 		szSQL += szWhere; 
 	} 
 _fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		//OnHMSMachineInterfaceListLoadData(); 
 		SetMode(VM_VIEW); 
 		pMF->FinishWork(this); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSMachineInterface::OnCancelHMSMachineInterface(){
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
int CHMSMachineInterface::OnHMSMachineInterfaceListLoadData(){
	return 0;
}
