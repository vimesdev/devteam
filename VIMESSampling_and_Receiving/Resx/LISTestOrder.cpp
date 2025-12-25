#include "LISTestOrder.h"
//#include "stdafx.h"
#include "MainFrm.h"
/*static int _OnDocumentNoChangeFnc(CWnd *pWnd){
	return ((CLISTestOrder *)pWnd)->OnDocumentNoChange();
} */
/*static int _OnDocumentNoSetfocusFnc(CWnd *pWnd){
	return ((CLISTestOrder *)pWnd)->OnDocumentNoKillfocus();} */ 
/*static int _OnDocumentNoKillfocusFnc(CWnd *pWnd){
	return ((CLISTestOrder *)pWnd)->OnDocumentNoKillfocus();
} */
static int _OnDocumentNoCheckValueFnc(CWnd *pWnd){
	return ((CLISTestOrder *)pWnd)->OnDocumentNoCheckValue();
} 
/*static int _OnOrderNoChangeFnc(CWnd *pWnd){
	return ((CLISTestOrder *)pWnd)->OnOrderNoChange();
} */
/*static int _OnOrderNoSetfocusFnc(CWnd *pWnd){
	return ((CLISTestOrder *)pWnd)->OnOrderNoKillfocus();} */ 
/*static int _OnOrderNoKillfocusFnc(CWnd *pWnd){
	return ((CLISTestOrder *)pWnd)->OnOrderNoKillfocus();
} */
static int _OnOrderNoCheckValueFnc(CWnd *pWnd){
	return ((CLISTestOrder *)pWnd)->OnOrderNoCheckValue();
} 
/*static int _OnOrderDateChangeFnc(CWnd *pWnd){
	return ((CLISTestOrder *)pWnd)->OnOrderDateChange();
} */
/*static int _OnOrderDateSetfocusFnc(CWnd *pWnd){
	return ((CLISTestOrder *)pWnd)->OnOrderDateKillfocus();} */ 
/*static int _OnOrderDateKillfocusFnc(CWnd *pWnd){
	return ((CLISTestOrder *)pWnd)->OnOrderDateKillfocus();
} */
static int _OnOrderDateCheckValueFnc(CWnd *pWnd){
	return ((CLISTestOrder *)pWnd)->OnOrderDateCheckValue();
} 
/*static int _OnDoctorChangeFnc(CWnd *pWnd){
	return ((CLISTestOrder *)pWnd)->OnDoctorChange();
} */
/*static int _OnDoctorSetfocusFnc(CWnd *pWnd){
	return ((CLISTestOrder *)pWnd)->OnDoctorKillfocus();} */ 
/*static int _OnDoctorKillfocusFnc(CWnd *pWnd){
	return ((CLISTestOrder *)pWnd)->OnDoctorKillfocus();
} */
static int _OnDoctorCheckValueFnc(CWnd *pWnd){
	return ((CLISTestOrder *)pWnd)->OnDoctorCheckValue();
} 
/*static int _OnFDeptChangeFnc(CWnd *pWnd){
	return ((CLISTestOrder *)pWnd)->OnFDeptChange();
} */
/*static int _OnFDeptSetfocusFnc(CWnd *pWnd){
	return ((CLISTestOrder *)pWnd)->OnFDeptKillfocus();} */ 
/*static int _OnFDeptKillfocusFnc(CWnd *pWnd){
	return ((CLISTestOrder *)pWnd)->OnFDeptKillfocus();
} */
static int _OnFDeptCheckValueFnc(CWnd *pWnd){
	return ((CLISTestOrder *)pWnd)->OnFDeptCheckValue();
} 
/*static int _OnFRoomChangeFnc(CWnd *pWnd){
	return ((CLISTestOrder *)pWnd)->OnFRoomChange();
} */
/*static int _OnFRoomSetfocusFnc(CWnd *pWnd){
	return ((CLISTestOrder *)pWnd)->OnFRoomKillfocus();} */ 
/*static int _OnFRoomKillfocusFnc(CWnd *pWnd){
	return ((CLISTestOrder *)pWnd)->OnFRoomKillfocus();
} */
static int _OnFRoomCheckValueFnc(CWnd *pWnd){
	return ((CLISTestOrder *)pWnd)->OnFRoomCheckValue();
} 
/*static int _OnPDeptChangeFnc(CWnd *pWnd){
	return ((CLISTestOrder *)pWnd)->OnPDeptChange();
} */
/*static int _OnPDeptSetfocusFnc(CWnd *pWnd){
	return ((CLISTestOrder *)pWnd)->OnPDeptKillfocus();} */ 
/*static int _OnPDeptKillfocusFnc(CWnd *pWnd){
	return ((CLISTestOrder *)pWnd)->OnPDeptKillfocus();
} */
static int _OnPDeptCheckValueFnc(CWnd *pWnd){
	return ((CLISTestOrder *)pWnd)->OnPDeptCheckValue();
} 
static int _OnPRoomSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	 return ((CLISTestOrder* )pWnd)->OnPRoomSelectChange(nOldItemSel, nNewItemSel);
} 
static int _OnPRoomSelendokFnc(CWnd *pWnd){
	 return ((CLISTestOrder *)pWnd)->OnPRoomSelendok();
}
/*static int _OnPRoomSetfocusFnc(CWnd *pWnd){
	 return ((CLISTestOrder *)pWnd)->OnPRoomKillfocus();
}*/
/*static int _OnPRoomKillfocusFnc(CWnd *pWnd){
	 return ((CLISTestOrder *)pWnd)->OnPRoomKillfocus();
}*/
static int _OnPRoomLoadDataFnc(CWnd *pWnd){
	 return ((CLISTestOrder *)pWnd)->OnPRoomLoadData();
}
/*static int _OnPRoomAddNewFnc(CWnd *pWnd){
	 return ((CLISTestOrder *)pWnd)->OnPRoomAddNew();
}*/
static int _OnPractitionerSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	 return ((CLISTestOrder* )pWnd)->OnPractitionerSelectChange(nOldItemSel, nNewItemSel);
} 
static int _OnPractitionerSelendokFnc(CWnd *pWnd){
	 return ((CLISTestOrder *)pWnd)->OnPractitionerSelendok();
}
/*static int _OnPractitionerSetfocusFnc(CWnd *pWnd){
	 return ((CLISTestOrder *)pWnd)->OnPractitionerKillfocus();
}*/
/*static int _OnPractitionerKillfocusFnc(CWnd *pWnd){
	 return ((CLISTestOrder *)pWnd)->OnPractitionerKillfocus();
}*/
static int _OnPractitionerLoadDataFnc(CWnd *pWnd){
	 return ((CLISTestOrder *)pWnd)->OnPractitionerLoadData();
}
/*static int _OnPractitionerAddNewFnc(CWnd *pWnd){
	 return ((CLISTestOrder *)pWnd)->OnPractitionerAddNew();
}*/
/*static int _OnPerformDateChangeFnc(CWnd *pWnd){
	return ((CLISTestOrder *)pWnd)->OnPerformDateChange();
} */
/*static int _OnPerformDateSetfocusFnc(CWnd *pWnd){
	return ((CLISTestOrder *)pWnd)->OnPerformDateKillfocus();} */ 
/*static int _OnPerformDateKillfocusFnc(CWnd *pWnd){
	return ((CLISTestOrder *)pWnd)->OnPerformDateKillfocus();
} */
static int _OnPerformDateCheckValueFnc(CWnd *pWnd){
	return ((CLISTestOrder *)pWnd)->OnPerformDateCheckValue();
} 
/*static int _OnStatusChangeFnc(CWnd *pWnd){
	return ((CLISTestOrder *)pWnd)->OnStatusChange();
} */
/*static int _OnStatusSetfocusFnc(CWnd *pWnd){
	return ((CLISTestOrder *)pWnd)->OnStatusKillfocus();} */ 
/*static int _OnStatusKillfocusFnc(CWnd *pWnd){
	return ((CLISTestOrder *)pWnd)->OnStatusKillfocus();
} */
static int _OnStatusCheckValueFnc(CWnd *pWnd){
	return ((CLISTestOrder *)pWnd)->OnStatusCheckValue();
} 
/*static int _OnResultChangeFnc(CWnd *pWnd){
	return ((CLISTestOrder *)pWnd)->OnResultChange();
} */
/*static int _OnResultSetfocusFnc(CWnd *pWnd){
	return ((CLISTestOrder *)pWnd)->OnResultKillfocus();} */ 
/*static int _OnResultKillfocusFnc(CWnd *pWnd){
	return ((CLISTestOrder *)pWnd)->OnResultKillfocus();
} */
static int _OnResultCheckValueFnc(CWnd *pWnd){
	return ((CLISTestOrder *)pWnd)->OnResultCheckValue();
} 
/*static int _OnDescChangeFnc(CWnd *pWnd){
	return ((CLISTestOrder *)pWnd)->OnDescChange();
} */
/*static int _OnDescSetfocusFnc(CWnd *pWnd){
	return ((CLISTestOrder *)pWnd)->OnDescKillfocus();} */ 
/*static int _OnDescKillfocusFnc(CWnd *pWnd){
	return ((CLISTestOrder *)pWnd)->OnDescKillfocus();
} */
static int _OnDescCheckValueFnc(CWnd *pWnd){
	return ((CLISTestOrder *)pWnd)->OnDescCheckValue();
} 
/*static int _OnRemarkChangeFnc(CWnd *pWnd){
	return ((CLISTestOrder *)pWnd)->OnRemarkChange();
} */
/*static int _OnRemarkSetfocusFnc(CWnd *pWnd){
	return ((CLISTestOrder *)pWnd)->OnRemarkKillfocus();} */ 
/*static int _OnRemarkKillfocusFnc(CWnd *pWnd){
	return ((CLISTestOrder *)pWnd)->OnRemarkKillfocus();
} */
static int _OnRemarkCheckValueFnc(CWnd *pWnd){
	return ((CLISTestOrder *)pWnd)->OnRemarkCheckValue();
} 
/*static int _OnObjectChangeFnc(CWnd *pWnd){
	return ((CLISTestOrder *)pWnd)->OnObjectChange();
} */
/*static int _OnObjectSetfocusFnc(CWnd *pWnd){
	return ((CLISTestOrder *)pWnd)->OnObjectKillfocus();} */ 
/*static int _OnObjectKillfocusFnc(CWnd *pWnd){
	return ((CLISTestOrder *)pWnd)->OnObjectKillfocus();
} */
static int _OnObjectCheckValueFnc(CWnd *pWnd){
	return ((CLISTestOrder *)pWnd)->OnObjectCheckValue();
} 
static int _OnTestListLoadDataFnc(CWnd *pWnd){
	 return ((CLISTestOrder*)pWnd)->OnTestListLoadData();
} 
static int _OnTestListDblClickFnc(CWnd *pWnd){
	 return ((CLISTestOrder*)pWnd)->OnTestListDblClick();
} 
static int _OnTestListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	 return ((CLISTestOrder*)pWnd)->OnTestListSelectChange(nOldItem, nNewItem);
} 
static int _OnTestListDeleteItemFnc(CWnd *pWnd){
	 return ((CLISTestOrder*)pWnd)->OnTestListDeleteItem();
} 
/*static int _OnTestNameChangeFnc(CWnd *pWnd){
	return ((CLISTestOrder *)pWnd)->OnTestNameChange();
} */
/*static int _OnTestNameSetfocusFnc(CWnd *pWnd){
	return ((CLISTestOrder *)pWnd)->OnTestNameKillfocus();} */ 
/*static int _OnTestNameKillfocusFnc(CWnd *pWnd){
	return ((CLISTestOrder *)pWnd)->OnTestNameKillfocus();
} */
static int _OnTestNameCheckValueFnc(CWnd *pWnd){
	return ((CLISTestOrder *)pWnd)->OnTestNameCheckValue();
} 
static int _OnUpdateSelectFnc(CWnd *pWnd){
	CLISTestOrder *pVw = (CLISTestOrder *)pWnd;
	return pVw->OnUpdateSelect();
} 
static int _OnSaveSelectFnc(CWnd *pWnd){
	CLISTestOrder *pVw = (CLISTestOrder *)pWnd;
	return pVw->OnSaveSelect();
} 
static int _OnCancelSelectFnc(CWnd *pWnd){
	CLISTestOrder *pVw = (CLISTestOrder *)pWnd;
	return pVw->OnCancelSelect();
} 
static int _OnPrintSelectFnc(CWnd *pWnd){
	CLISTestOrder *pVw = (CLISTestOrder *)pWnd;
	return pVw->OnPrintSelect();
} 
/*static int _OnCreatedByChangeFnc(CWnd *pWnd){
	return ((CLISTestOrder *)pWnd)->OnCreatedByChange();
} */
/*static int _OnCreatedBySetfocusFnc(CWnd *pWnd){
	return ((CLISTestOrder *)pWnd)->OnCreatedByKillfocus();} */ 
/*static int _OnCreatedByKillfocusFnc(CWnd *pWnd){
	return ((CLISTestOrder *)pWnd)->OnCreatedByKillfocus();
} */
static int _OnCreatedByCheckValueFnc(CWnd *pWnd){
	return ((CLISTestOrder *)pWnd)->OnCreatedByCheckValue();
} 
/*static int _OnUpdatedByChangeFnc(CWnd *pWnd){
	return ((CLISTestOrder *)pWnd)->OnUpdatedByChange();
} */
/*static int _OnUpdatedBySetfocusFnc(CWnd *pWnd){
	return ((CLISTestOrder *)pWnd)->OnUpdatedByKillfocus();} */ 
/*static int _OnUpdatedByKillfocusFnc(CWnd *pWnd){
	return ((CLISTestOrder *)pWnd)->OnUpdatedByKillfocus();
} */
static int _OnUpdatedByCheckValueFnc(CWnd *pWnd){
	return ((CLISTestOrder *)pWnd)->OnUpdatedByCheckValue();
} 
static int _OnAddLISTestOrderFnc(CWnd *pWnd){
	 return ((CLISTestOrder*)pWnd)->OnAddLISTestOrder();
} 
static int _OnEditLISTestOrderFnc(CWnd *pWnd){
	 return ((CLISTestOrder*)pWnd)->OnEditLISTestOrder();
} 
static int _OnDeleteLISTestOrderFnc(CWnd *pWnd){
	 return ((CLISTestOrder*)pWnd)->OnDeleteLISTestOrder();
} 
static int _OnSaveLISTestOrderFnc(CWnd *pWnd){
	 return ((CLISTestOrder*)pWnd)->OnSaveLISTestOrder();
} 
static int _OnCancelLISTestOrderFnc(CWnd *pWnd){
	 return ((CLISTestOrder*)pWnd)->OnCancelLISTestOrder();
} 
CLISTestOrder::CLISTestOrder(){

	m_nDlgWidth = 625;
	m_nDlgHeight = 455;
	SetDefaultValues();
}
CLISTestOrder::~CLISTestOrder(){
}
void CLISTestOrder::OnCreateComponents(){
	m_wndTestOrderInformation.Create(this, _T("Test Order Information"), 6, 5, 600, 399);
	m_wndDocumentNoLabel.Create(this, _T("Document No"), 7, 52, 81, 74);
	m_wndDocumentNo.Create(this,86, 52, 156, 74); 
	m_wndOrderNoLabel.Create(this, _T("Order No"), 7, 25, 81, 47);
	m_wndOrderNo.Create(this,86, 25, 156, 47); 
	m_wndOrderDateLabel.Create(this, _T("Order Date"), 7, 79, 81, 101);
	m_wndOrderDate.Create(this,86, 79, 186, 101); 
	m_wndDoctorLabel.Create(this, _T("Doctor"), 7, 106, 81, 128);
	m_wndDoctor.Create(this,86, 106, 321, 128); 
	m_wndFDeptLabel.Create(this, _T("fDept"), 7, 133, 81, 155);
	m_wndFDept.Create(this,86, 133, 321, 155); 
	m_wndFRoomLabel.Create(this, _T("fRoom"), 7, 160, 81, 182);
	m_wndFRoom.Create(this,86, 160, 321, 182); 
	m_wndPDeptLabel.Create(this, _T("pDept"), 7, 214, 81, 236);
	m_wndPDept.Create(this,86, 214, 321, 236); 
	m_wndPRoomLabel.Create(this, _T("pRoom"), 7, 241, 81, 263);
	m_wndPRoom.Create(this,86, 241, 321, 263); 
	m_wndPractitionerLabel.Create(this, _T("Practitioner"), 7, 268, 81, 290);
	m_wndPractitioner.Create(this,86, 268, 321, 290); 
	m_wndPerformDateLabel.Create(this, _T("Perform Date"), 7, 187, 81, 209);
	m_wndPerformDate.Create(this,86, 187, 186, 209); 
	m_wndStatusLabel.Create(this, _T("Status"), 7, 295, 81, 317);
	m_wndStatus.Create(this,86, 295, 321, 317); 
	m_wndResultLabel.Create(this, _T("Result"), 7, 322, 81, 344);
	m_wndResult.Create(this,86, 322, 321, 344); 
	m_wndDescLabel.Create(this, _T("Desc"), 7, 349, 81, 371);
	m_wndDesc.Create(this,86, 349, 321, 371); 
	m_wndRemarkLabel.Create(this, _T("Remark"), 7, 376, 81, 398);
	m_wndRemark.Create(this,86, 376, 321, 398); 
	m_wndObjectLabel.Create(this, _T("Object"), 190, 25, 251, 47);
	m_wndObject.Create(this,256, 25, 320, 47); 
	m_wndTestList.Create(this,325, 52, 596, 398); 
	m_wndTestNameLabel.Create(this, _T("Test Name"), 325, 25, 378, 47);
	m_wndTestName.Create(this,383, 25, 596, 47); 
	m_wndUpdate.Create(this, _T("&Update"), 381, 403, 451, 425);
	m_wndSave.Create(this, _T("&Save"), 456, 403, 526, 425);
	m_wndCancel.Create(this, _T("&Cancel"), 531, 403, 601, 425);
	m_wndPrint.Create(this, _T("&Print"), 6, 403, 76, 425);
	m_wndCreatedByLabel.Create(this, _T("Created By"), 190, 52, 251, 74);
	m_wndCreatedBy.Create(this,256, 52, 320, 74); 
	m_wndUpdatedByLabel.Create(this, _T("Updated By"), 191, 79, 252, 101);
	m_wndUpdatedBy.Create(this,257, 79, 321, 101); 

}
void CLISTestOrder::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndDocumentNo.SetCheckValue(true);
	m_wndOrderNo.SetCheckValue(true);
	m_wndOrderDate.SetMax(CDate(pMF->GetSysDateTime()));
	m_wndOrderDate.SetCheckValue(true);
	m_wndDoctor.SetLimitText(15);
	m_wndDoctor.SetCheckValue(true);
	m_wndFDept.SetLimitText(7);
	m_wndFDept.SetCheckValue(true);
	m_wndFRoom.SetCheckValue(true);
	m_wndPDept.SetLimitText(7);
	m_wndPDept.SetCheckValue(true);
	m_wndPRoom.SetCheckValue(true);
	m_wndPractitioner.SetCheckValue(true);
	m_wndPractitioner.LimitText(15);
	m_wndPerformDate.SetMax(CDate(pMF->GetSysDateTime()));
	m_wndPerformDate.SetCheckValue(true);
	m_wndStatus.SetLimitText(1);
	m_wndStatus.SetCheckValue(true);
	m_wndResult.SetLimitText(512);
	m_wndResult.SetCheckValue(true);
	m_wndDesc.SetLimitText(254);
	m_wndDesc.SetCheckValue(true);
	m_wndRemark.SetLimitText(81);
	m_wndRemark.SetCheckValue(true);
	m_wndObject.SetLimitText(35);
	m_wndObject.SetCheckValue(true);
	m_wndTestName.SetLimitText(35);
	m_wndTestName.SetCheckValue(true);
	m_wndCreatedBy.SetLimitText(35);
	m_wndCreatedBy.SetCheckValue(true);
	m_wndUpdatedBy.SetLimitText(35);
	m_wndUpdatedBy.SetCheckValue(true);






	m_wndTestList.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndTestList.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);
	m_wndTestList.InsertColumn(2, _T("Result"), CFMT_NUMBER, 50);
	m_wndTestList.InsertColumn(3, _T("Referance Range"), CFMT_TEXT, 100);
	m_hms_testorderTbl.SetTableName(_T("hms_testorder"));
	m_hms_testorderTbl.AddField(_T("hto_createdby"), dfText, 15); 
	m_hms_testorderTbl.AddField(_T("hto_createddate"), dfText, 4); 
	m_hms_testorderTbl.AddField(_T("hto_updatedby"), dfText, 15); 
	m_hms_testorderTbl.AddField(_T("hto_updateddate"), dfText, 4); 
	m_hms_testorderTbl.AddField(_T("hto_type"), dfText, 1); 
	m_hms_testorderTbl.AddField(_T("hto_patientno"), dfInteger); 
	m_hms_testorderTbl.AddField(_T("hto_docno"), dfInteger); 
	m_hms_testorderTbl.AddField(_T("hto_orderno"), dfInteger); 
	m_hms_testorderTbl.AddField(_T("hto_orderdate"), dfText, 4); 
	m_hms_testorderTbl.AddField(_T("hto_doctor"), dfText, 15); 
	m_hms_testorderTbl.AddField(_T("hto_fdeptid"), dfText, 7); 
	m_hms_testorderTbl.AddField(_T("hto_froomid"), dfInteger); 
	m_hms_testorderTbl.AddField(_T("hto_fbedid"), dfInteger); 
	m_hms_testorderTbl.AddField(_T("hto_freceptidx"), dfInteger); 
	m_hms_testorderTbl.AddField(_T("hto_pdeptid"), dfText, 7); 
	m_hms_testorderTbl.AddField(_T("hto_proomid"), dfInteger); 
	m_hms_testorderTbl.AddField(_T("hto_practitioner"), dfText, 15); 
	m_hms_testorderTbl.AddField(_T("hto_perfrmdate"), dfText, 4); 
	m_hms_testorderTbl.AddField(_T("hto_status"), dfText, 1); 
	m_hms_testorderTbl.AddField(_T("hto_payment"), dfText, 1); 
	m_hms_testorderTbl.AddField(_T("hto_hasfee"), dfText, 1); 
	m_hms_testorderTbl.AddField(_T("hto_result"), dfText, 512); 
	m_hms_testorderTbl.AddField(_T("hto_desc"), dfText, 254); 
	m_hms_testorderTbl.AddField(_T("hto_remark"), dfText, 81); 

}
void CLISTestOrder::OnSetWindowEvents(){
	//m_wndDocumentNo.SetEvent(WE_CHANGE, _OnDocumentNoChangeFnc);
	//m_wndDocumentNo.SetEvent(WE_SETFOCUS, _OnDocumentNoSetfocusFnc);
	//m_wndDocumentNo.SetEvent(WE_KILLFOCUS, _OnDocumentNoKillfocusFnc);
	m_wndDocumentNo.SetEvent(WE_CHECKVALUE, _OnDocumentNoCheckValueFnc);
	//m_wndOrderNo.SetEvent(WE_CHANGE, _OnOrderNoChangeFnc);
	//m_wndOrderNo.SetEvent(WE_SETFOCUS, _OnOrderNoSetfocusFnc);
	//m_wndOrderNo.SetEvent(WE_KILLFOCUS, _OnOrderNoKillfocusFnc);
	m_wndOrderNo.SetEvent(WE_CHECKVALUE, _OnOrderNoCheckValueFnc);
	//m_wndOrderDate.SetEvent(WE_CHANGE, _OnOrderDateChangeFnc);
	//m_wndOrderDate.SetEvent(WE_SETFOCUS, _OnOrderDateSetfocusFnc);
	//m_wndOrderDate.SetEvent(WE_KILLFOCUS, _OnOrderDateKillfocusFnc);
	m_wndOrderDate.SetEvent(WE_CHECKVALUE, _OnOrderDateCheckValueFnc);
	//m_wndDoctor.SetEvent(WE_CHANGE, _OnDoctorChangeFnc);
	//m_wndDoctor.SetEvent(WE_SETFOCUS, _OnDoctorSetfocusFnc);
	//m_wndDoctor.SetEvent(WE_KILLFOCUS, _OnDoctorKillfocusFnc);
	m_wndDoctor.SetEvent(WE_CHECKVALUE, _OnDoctorCheckValueFnc);
	//m_wndFDept.SetEvent(WE_CHANGE, _OnFDeptChangeFnc);
	//m_wndFDept.SetEvent(WE_SETFOCUS, _OnFDeptSetfocusFnc);
	//m_wndFDept.SetEvent(WE_KILLFOCUS, _OnFDeptKillfocusFnc);
	m_wndFDept.SetEvent(WE_CHECKVALUE, _OnFDeptCheckValueFnc);
	//m_wndFRoom.SetEvent(WE_CHANGE, _OnFRoomChangeFnc);
	//m_wndFRoom.SetEvent(WE_SETFOCUS, _OnFRoomSetfocusFnc);
	//m_wndFRoom.SetEvent(WE_KILLFOCUS, _OnFRoomKillfocusFnc);
	m_wndFRoom.SetEvent(WE_CHECKVALUE, _OnFRoomCheckValueFnc);
	//m_wndPDept.SetEvent(WE_CHANGE, _OnPDeptChangeFnc);
	//m_wndPDept.SetEvent(WE_SETFOCUS, _OnPDeptSetfocusFnc);
	//m_wndPDept.SetEvent(WE_KILLFOCUS, _OnPDeptKillfocusFnc);
	m_wndPDept.SetEvent(WE_CHECKVALUE, _OnPDeptCheckValueFnc);
	m_wndPRoom.SetEvent(WE_SELENDOK, _OnPRoomSelendokFnc);
	//m_wndPRoom.SetEvent(WE_SETFOCUS, _OnPRoomSetfocusFnc);
	//m_wndPRoom.SetEvent(WE_KILLFOCUS, _OnPRoomKillfocusFnc);
	m_wndPRoom.SetEvent(WE_SELCHANGE, _OnPRoomSelectChangeFnc);
	m_wndPRoom.SetEvent(WE_LOADDATA, _OnPRoomLoadDataFnc);
	//m_wndPRoom.SetEvent(WE_ADDNEW, _OnPRoomAddNewFnc);
	m_wndPractitioner.SetEvent(WE_SELENDOK, _OnPractitionerSelendokFnc);
	//m_wndPractitioner.SetEvent(WE_SETFOCUS, _OnPractitionerSetfocusFnc);
	//m_wndPractitioner.SetEvent(WE_KILLFOCUS, _OnPractitionerKillfocusFnc);
	m_wndPractitioner.SetEvent(WE_SELCHANGE, _OnPractitionerSelectChangeFnc);
	m_wndPractitioner.SetEvent(WE_LOADDATA, _OnPractitionerLoadDataFnc);
	//m_wndPractitioner.SetEvent(WE_ADDNEW, _OnPractitionerAddNewFnc);
	//m_wndPerformDate.SetEvent(WE_CHANGE, _OnPerformDateChangeFnc);
	//m_wndPerformDate.SetEvent(WE_SETFOCUS, _OnPerformDateSetfocusFnc);
	//m_wndPerformDate.SetEvent(WE_KILLFOCUS, _OnPerformDateKillfocusFnc);
	m_wndPerformDate.SetEvent(WE_CHECKVALUE, _OnPerformDateCheckValueFnc);
	//m_wndStatus.SetEvent(WE_CHANGE, _OnStatusChangeFnc);
	//m_wndStatus.SetEvent(WE_SETFOCUS, _OnStatusSetfocusFnc);
	//m_wndStatus.SetEvent(WE_KILLFOCUS, _OnStatusKillfocusFnc);
	m_wndStatus.SetEvent(WE_CHECKVALUE, _OnStatusCheckValueFnc);
	//m_wndResult.SetEvent(WE_CHANGE, _OnResultChangeFnc);
	//m_wndResult.SetEvent(WE_SETFOCUS, _OnResultSetfocusFnc);
	//m_wndResult.SetEvent(WE_KILLFOCUS, _OnResultKillfocusFnc);
	m_wndResult.SetEvent(WE_CHECKVALUE, _OnResultCheckValueFnc);
	//m_wndDesc.SetEvent(WE_CHANGE, _OnDescChangeFnc);
	//m_wndDesc.SetEvent(WE_SETFOCUS, _OnDescSetfocusFnc);
	//m_wndDesc.SetEvent(WE_KILLFOCUS, _OnDescKillfocusFnc);
	m_wndDesc.SetEvent(WE_CHECKVALUE, _OnDescCheckValueFnc);
	//m_wndRemark.SetEvent(WE_CHANGE, _OnRemarkChangeFnc);
	//m_wndRemark.SetEvent(WE_SETFOCUS, _OnRemarkSetfocusFnc);
	//m_wndRemark.SetEvent(WE_KILLFOCUS, _OnRemarkKillfocusFnc);
	m_wndRemark.SetEvent(WE_CHECKVALUE, _OnRemarkCheckValueFnc);
	//m_wndObject.SetEvent(WE_CHANGE, _OnObjectChangeFnc);
	//m_wndObject.SetEvent(WE_SETFOCUS, _OnObjectSetfocusFnc);
	//m_wndObject.SetEvent(WE_KILLFOCUS, _OnObjectKillfocusFnc);
	m_wndObject.SetEvent(WE_CHECKVALUE, _OnObjectCheckValueFnc);
	m_wndTestList.SetEvent(WE_SELCHANGE, _OnTestListSelectChangeFnc);
	m_wndTestList.SetEvent(WE_LOADDATA, _OnTestListLoadDataFnc);
	m_wndTestList.SetEvent(WE_DBLCLICK, _OnTestListDblClickFnc);
	m_wndTestList.AddEvent(1, _T("Delete"), _OnTestListDeleteItemFnc, 0, VK_DELETE, 0);
	//m_wndTestName.SetEvent(WE_CHANGE, _OnTestNameChangeFnc);
	//m_wndTestName.SetEvent(WE_SETFOCUS, _OnTestNameSetfocusFnc);
	//m_wndTestName.SetEvent(WE_KILLFOCUS, _OnTestNameKillfocusFnc);
	m_wndTestName.SetEvent(WE_CHECKVALUE, _OnTestNameCheckValueFnc);
	m_wndUpdate.SetEvent(WE_CLICK, _OnUpdateSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	//m_wndCreatedBy.SetEvent(WE_CHANGE, _OnCreatedByChangeFnc);
	//m_wndCreatedBy.SetEvent(WE_SETFOCUS, _OnCreatedBySetfocusFnc);
	//m_wndCreatedBy.SetEvent(WE_KILLFOCUS, _OnCreatedByKillfocusFnc);
	m_wndCreatedBy.SetEvent(WE_CHECKVALUE, _OnCreatedByCheckValueFnc);
	//m_wndUpdatedBy.SetEvent(WE_CHANGE, _OnUpdatedByChangeFnc);
	//m_wndUpdatedBy.SetEvent(WE_SETFOCUS, _OnUpdatedBySetfocusFnc);
	//m_wndUpdatedBy.SetEvent(WE_KILLFOCUS, _OnUpdatedByKillfocusFnc);
	m_wndUpdatedBy.SetEvent(WE_CHECKVALUE, _OnUpdatedByCheckValueFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddLISTestOrderFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditLISTestOrderFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteLISTestOrderFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveLISTestOrderFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelLISTestOrderFnc, 0, 'T', VK_CONTROL);

}
void CLISTestOrder::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndDocumentNo.GetDlgCtrlID(), m_nDocumentNo);
	DDX_Text(pDX, m_wndOrderNo.GetDlgCtrlID(), m_nOrderNo);
	DDX_TextEx(pDX, m_wndOrderDate.GetDlgCtrlID(), m_szOrderDate);
	DDX_Text(pDX, m_wndDoctor.GetDlgCtrlID(), m_szDoctor);
	DDX_Text(pDX, m_wndFDept.GetDlgCtrlID(), m_szFDept);
	DDX_Text(pDX, m_wndFRoom.GetDlgCtrlID(), m_nFRoom);
	DDX_Text(pDX, m_wndPDept.GetDlgCtrlID(), m_szPDept);
	DDX_TextEx(pDX, m_wndPRoom.GetDlgCtrlID(), m_szPRoomKey);
	DDX_TextEx(pDX, m_wndPractitioner.GetDlgCtrlID(), m_szPractitionerKey);
	DDX_TextEx(pDX, m_wndPerformDate.GetDlgCtrlID(), m_szPerformDate);
	DDX_Text(pDX, m_wndStatus.GetDlgCtrlID(), m_szStatus);
	DDX_Text(pDX, m_wndResult.GetDlgCtrlID(), m_szResult);
	DDX_Text(pDX, m_wndDesc.GetDlgCtrlID(), m_szDesc);
	DDX_Text(pDX, m_wndRemark.GetDlgCtrlID(), m_szRemark);
	DDX_Text(pDX, m_wndObject.GetDlgCtrlID(), m_szObject);
	DDX_Text(pDX, m_wndTestName.GetDlgCtrlID(), m_szTestName);
	DDX_Text(pDX, m_wndCreatedBy.GetDlgCtrlID(), m_szCreatedBy);
	DDX_Text(pDX, m_wndUpdatedBy.GetDlgCtrlID(), m_szUpdatedBy);

}
void CLISTestOrder::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CLISTestOrder::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_hms_testorderTbl.SetValue(_T("hto_docno"), m_nDocumentNo);
	m_hms_testorderTbl.SetValue(_T("hto_orderno"), m_nOrderNo);
	m_hms_testorderTbl.SetValue(_T("hto_orderdate"), m_szOrderDate);
	m_hms_testorderTbl.SetValue(_T("hto_doctor"), m_szDoctor);
	m_hms_testorderTbl.SetValue(_T("hto_fdeptid"), m_szFDept);
	m_hms_testorderTbl.SetValue(_T("hto_froomid"), m_nFRoom);
	m_hms_testorderTbl.SetValue(_T("hto_pdeptid"), m_szPDept);
	m_hms_testorderTbl.SetValue(_T("hto_proomid"), m_szPRoomKey);
	m_hms_testorderTbl.SetValue(_T("hto_practitioner"), m_szPractitionerKey);
	m_hms_testorderTbl.SetValue(_T("hto_perfrmdate"), m_szPerformDate);
	m_hms_testorderTbl.SetValue(_T("hto_status"), m_szStatus);
	m_hms_testorderTbl.SetValue(_T("hto_result"), m_szResult);
	m_hms_testorderTbl.SetValue(_T("hto_desc"), m_szDesc);
	m_hms_testorderTbl.SetValue(_T("hto_remark"), m_szRemark);

}
void CLISTestOrder::SetDefaultValues(){

	m_nDocumentNo=0;
	m_nOrderNo=0;
	m_szOrderDate.Empty();
	m_szDoctor.Empty();
	m_szFDept.Empty();
	m_nFRoom=0;
	m_szPDept.Empty();
	m_szPRoomKey.Empty();
	m_szPractitionerKey.Empty();
	m_szPerformDate.Empty();
	m_szStatus.Empty();
	m_szResult.Empty();
	m_szDesc.Empty();
	m_szRemark.Empty();
	m_szObject.Empty();
	m_szTestName.Empty();
	m_szCreatedBy.Empty();
	m_szUpdatedBy.Empty();

}
int CLISTestOrder::SetMode(int nMode){ 
 		int nOldMode = GetMode(); 
 		//CGuiView::SetMode(nMode); 
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
/*int CLISTestOrder::OnDocumentNoChange(){
	return 0;
} */
/*int CLISTestOrder::OnDocumentNoSetfocus(){
	return 0;
} */
/*int CLISTestOrder::OnDocumentNoKillfocus(){
	return 0;
} */
int CLISTestOrder::OnDocumentNoCheckValue(){
	return 0;
} 
/*int CLISTestOrder::OnOrderNoChange(){
	return 0;
} */
/*int CLISTestOrder::OnOrderNoSetfocus(){
	return 0;
} */
/*int CLISTestOrder::OnOrderNoKillfocus(){
	return 0;
} */
int CLISTestOrder::OnOrderNoCheckValue(){
	return 0;
} 
/*int CLISTestOrder::OnOrderDateChange(){
	return 0;
} */
/*int CLISTestOrder::OnOrderDateSetfocus(){
	return 0;
} */
/*int CLISTestOrder::OnOrderDateKillfocus(){
	return 0;
} */
int CLISTestOrder::OnOrderDateCheckValue(){
	return 0;
} 
/*int CLISTestOrder::OnDoctorChange(){
	return 0;
} */
/*int CLISTestOrder::OnDoctorSetfocus(){
	return 0;
} */
/*int CLISTestOrder::OnDoctorKillfocus(){
	return 0;
} */
int CLISTestOrder::OnDoctorCheckValue(){
	return 0;
} 
/*int CLISTestOrder::OnFDeptChange(){
	return 0;
} */
/*int CLISTestOrder::OnFDeptSetfocus(){
	return 0;
} */
/*int CLISTestOrder::OnFDeptKillfocus(){
	return 0;
} */
int CLISTestOrder::OnFDeptCheckValue(){
	return 0;
} 
/*int CLISTestOrder::OnFRoomChange(){
	return 0;
} */
/*int CLISTestOrder::OnFRoomSetfocus(){
	return 0;
} */
/*int CLISTestOrder::OnFRoomKillfocus(){
	return 0;
} */
int CLISTestOrder::OnFRoomCheckValue(){
	return 0;
} 
/*int CLISTestOrder::OnPDeptChange(){
	return 0;
} */
/*int CLISTestOrder::OnPDeptSetfocus(){
	return 0;
} */
/*int CLISTestOrder::OnPDeptKillfocus(){
	return 0;
} */
int CLISTestOrder::OnPDeptCheckValue(){
	return 0;
} 
int CLISTestOrder::OnPRoomSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CLISTestOrder::OnPRoomSelendok(){
	 return 0;
}
/*int CLISTestOrder::OnPRoomSetfocus(){
	 return 0;
}*/
/*int CLISTestOrder::OnPRoomKillfocus(){
	 return 0;
}*/
int CLISTestOrder::OnPRoomLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndPRoom.IsSearchKey()){
	};
	m_wndPRoom.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPRoom.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*int CLISTestOrder::OnPRoomAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} */
int CLISTestOrder::OnPractitionerSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CLISTestOrder::OnPractitionerSelendok(){
	 return 0;
}
/*int CLISTestOrder::OnPractitionerSetfocus(){
	 return 0;
}*/
/*int CLISTestOrder::OnPractitionerKillfocus(){
	 return 0;
}*/
int CLISTestOrder::OnPractitionerLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndPractitioner.IsSearchKey()){
	};
	m_wndPractitioner.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPractitioner.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*int CLISTestOrder::OnPractitionerAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} */
/*int CLISTestOrder::OnPerformDateChange(){
	return 0;
} */
/*int CLISTestOrder::OnPerformDateSetfocus(){
	return 0;
} */
/*int CLISTestOrder::OnPerformDateKillfocus(){
	return 0;
} */
int CLISTestOrder::OnPerformDateCheckValue(){
	return 0;
} 
/*int CLISTestOrder::OnStatusChange(){
	return 0;
} */
/*int CLISTestOrder::OnStatusSetfocus(){
	return 0;
} */
/*int CLISTestOrder::OnStatusKillfocus(){
	return 0;
} */
int CLISTestOrder::OnStatusCheckValue(){
	return 0;
} 
/*int CLISTestOrder::OnResultChange(){
	return 0;
} */
/*int CLISTestOrder::OnResultSetfocus(){
	return 0;
} */
/*int CLISTestOrder::OnResultKillfocus(){
	return 0;
} */
int CLISTestOrder::OnResultCheckValue(){
	return 0;
} 
/*int CLISTestOrder::OnDescChange(){
	return 0;
} */
/*int CLISTestOrder::OnDescSetfocus(){
	return 0;
} */
/*int CLISTestOrder::OnDescKillfocus(){
	return 0;
} */
int CLISTestOrder::OnDescCheckValue(){
	return 0;
} 
/*int CLISTestOrder::OnRemarkChange(){
	return 0;
} */
/*int CLISTestOrder::OnRemarkSetfocus(){
	return 0;
} */
/*int CLISTestOrder::OnRemarkKillfocus(){
	return 0;
} */
int CLISTestOrder::OnRemarkCheckValue(){
	return 0;
} 
/*int CLISTestOrder::OnObjectChange(){
	return 0;
} */
/*int CLISTestOrder::OnObjectSetfocus(){
	return 0;
} */
/*int CLISTestOrder::OnObjectKillfocus(){
	return 0;
} */
int CLISTestOrder::OnObjectCheckValue(){
	return 0;
} 
int CLISTestOrder::OnTestListDblClick(){
	 return 0;
} 
int CLISTestOrder::OnTestListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CLISTestOrder::OnTestListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CLISTestOrder::OnTestListLoadData(){
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
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Description")), 
			rs.GetValue(_T("Result")), 
			rs.GetValue(_T("ReferanceRange")), NULL);
		rs.MoveNext();
	}
	m_wndTestList.EndLoad(); 
	return nCount;
*/
	return 0;
}
/*int CLISTestOrder::OnTestNameChange(){
	return 0;
} */
/*int CLISTestOrder::OnTestNameSetfocus(){
	return 0;
} */
/*int CLISTestOrder::OnTestNameKillfocus(){
	return 0;
} */
int CLISTestOrder::OnTestNameCheckValue(){
	return 0;
} 
int CLISTestOrder::OnUpdateSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CLISTestOrder::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CLISTestOrder::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CLISTestOrder::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
/*int CLISTestOrder::OnCreatedByChange(){
	return 0;
} */
/*int CLISTestOrder::OnCreatedBySetfocus(){
	return 0;
} */
/*int CLISTestOrder::OnCreatedByKillfocus(){
	return 0;
} */
int CLISTestOrder::OnCreatedByCheckValue(){
	return 0;
} 
/*int CLISTestOrder::OnUpdatedByChange(){
	return 0;
} */
/*int CLISTestOrder::OnUpdatedBySetfocus(){
	return 0;
} */
/*int CLISTestOrder::OnUpdatedByKillfocus(){
	return 0;
} */
int CLISTestOrder::OnUpdatedByCheckValue(){
	return 0;
} 
int CLISTestOrder::OnAddLISTestOrder(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Add LISTestOrder"))) 
 		return -1; 
 	SetMode(VM_ADD);
return 0; 
 
} 
int CLISTestOrder::OnEditLISTestOrder(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Edit LISTestOrder"))) 
 		return -1; 
 	SetMode(VM_EDIT);
return 0;  
 
} 
int CLISTestOrder::OnDeleteLISTestOrder(){
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
 		OnCancelLISTestOrder(); 
 	}
return 0;
 } 
int CLISTestOrder::OnSaveLISTestOrder(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		szSQL = m_hms_testorderTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE")); 
 		szSQL = m_hms_testorderTbl.GetUpdateSQL(_T("createdby,createddate")); 
 		szSQL += szWhere; 
 	} 
 _fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		//OnLISTestOrderListLoadData(); 
 		SetMode(VM_VIEW); 
 		pMF->FinishWork(this); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CLISTestOrder::OnCancelLISTestOrder(){
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
int CLISTestOrder::OnLISTestOrderListLoadData(){
	return 0;
}
