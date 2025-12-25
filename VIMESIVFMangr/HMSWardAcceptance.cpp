#include "HMSWardAcceptance.h"
//#include "stdafx.h"
#include "MainFrm.h"
/*static int _OnInDateChangeFnc(CWnd *pWnd){
	return ((CHMSWardAcceptance *)pWnd)->OnInDateChange();
} */
/*static int _OnInDateSetfocusFnc(CWnd *pWnd){
	return ((CHMSWardAcceptance *)pWnd)->OnInDateKillfocus();} */ 
/*static int _OnInDateKillfocusFnc(CWnd *pWnd){
	return ((CHMSWardAcceptance *)pWnd)->OnInDateKillfocus();
} */
static int _OnInDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSWardAcceptance *)pWnd)->OnInDateCheckValue();
} 
static int _OnFromWardSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	 return ((CHMSWardAcceptance* )pWnd)->OnFromWardSelectChange(nOldItemSel, nNewItemSel);
} 
static int _OnFromWardSelendokFnc(CWnd *pWnd){
	 return ((CHMSWardAcceptance *)pWnd)->OnFromWardSelendok();
}
/*static int _OnFromWardSetfocusFnc(CWnd *pWnd){
	 return ((CHMSWardAcceptance *)pWnd)->OnFromWardKillfocus();
}*/
/*static int _OnFromWardKillfocusFnc(CWnd *pWnd){
	 return ((CHMSWardAcceptance *)pWnd)->OnFromWardKillfocus();
}*/
static int _OnFromWardLoadDataFnc(CWnd *pWnd){
	 return ((CHMSWardAcceptance *)pWnd)->OnFromWardLoadData();
}
/*static int _OnFromWardAddNewFnc(CWnd *pWnd){
	 return ((CHMSWardAcceptance *)pWnd)->OnFromWardAddNew();
}*/
static int _OnExamineDiseaseSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	 return ((CHMSWardAcceptance* )pWnd)->OnExamineDiseaseSelectChange(nOldItemSel, nNewItemSel);
} 
static int _OnExamineDiseaseSelendokFnc(CWnd *pWnd){
	 return ((CHMSWardAcceptance *)pWnd)->OnExamineDiseaseSelendok();
}
/*static int _OnExamineDiseaseSetfocusFnc(CWnd *pWnd){
	 return ((CHMSWardAcceptance *)pWnd)->OnExamineDiseaseKillfocus();
}*/
/*static int _OnExamineDiseaseKillfocusFnc(CWnd *pWnd){
	 return ((CHMSWardAcceptance *)pWnd)->OnExamineDiseaseKillfocus();
}*/
static int _OnExamineDiseaseLoadDataFnc(CWnd *pWnd){
	 return ((CHMSWardAcceptance *)pWnd)->OnExamineDiseaseLoadData();
}
/*static int _OnExamineDiseaseAddNewFnc(CWnd *pWnd){
	 return ((CHMSWardAcceptance *)pWnd)->OnExamineDiseaseAddNew();
}*/
static int _OnDepartmentDiseaseSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	 return ((CHMSWardAcceptance* )pWnd)->OnDepartmentDiseaseSelectChange(nOldItemSel, nNewItemSel);
} 
static int _OnDepartmentDiseaseSelendokFnc(CWnd *pWnd){
	 return ((CHMSWardAcceptance *)pWnd)->OnDepartmentDiseaseSelendok();
}
/*static int _OnDepartmentDiseaseSetfocusFnc(CWnd *pWnd){
	 return ((CHMSWardAcceptance *)pWnd)->OnDepartmentDiseaseKillfocus();
}*/
/*static int _OnDepartmentDiseaseKillfocusFnc(CWnd *pWnd){
	 return ((CHMSWardAcceptance *)pWnd)->OnDepartmentDiseaseKillfocus();
}*/
static int _OnDepartmentDiseaseLoadDataFnc(CWnd *pWnd){
	 return ((CHMSWardAcceptance *)pWnd)->OnDepartmentDiseaseLoadData();
}
/*static int _OnDepartmentDiseaseAddNewFnc(CWnd *pWnd){
	 return ((CHMSWardAcceptance *)pWnd)->OnDepartmentDiseaseAddNew();
}*/
static int _OnMainDiseaseSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	 return ((CHMSWardAcceptance* )pWnd)->OnMainDiseaseSelectChange(nOldItemSel, nNewItemSel);
} 
static int _OnMainDiseaseSelendokFnc(CWnd *pWnd){
	 return ((CHMSWardAcceptance *)pWnd)->OnMainDiseaseSelendok();
}
/*static int _OnMainDiseaseSetfocusFnc(CWnd *pWnd){
	 return ((CHMSWardAcceptance *)pWnd)->OnMainDiseaseKillfocus();
}*/
/*static int _OnMainDiseaseKillfocusFnc(CWnd *pWnd){
	 return ((CHMSWardAcceptance *)pWnd)->OnMainDiseaseKillfocus();
}*/
static int _OnMainDiseaseLoadDataFnc(CWnd *pWnd){
	 return ((CHMSWardAcceptance *)pWnd)->OnMainDiseaseLoadData();
}
/*static int _OnMainDiseaseAddNewFnc(CWnd *pWnd){
	 return ((CHMSWardAcceptance *)pWnd)->OnMainDiseaseAddNew();
}*/
static int _OnDiseaseAccompaniedSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	 return ((CHMSWardAcceptance* )pWnd)->OnDiseaseAccompaniedSelectChange(nOldItemSel, nNewItemSel);
} 
static int _OnDiseaseAccompaniedSelendokFnc(CWnd *pWnd){
	 return ((CHMSWardAcceptance *)pWnd)->OnDiseaseAccompaniedSelendok();
}
/*static int _OnDiseaseAccompaniedSetfocusFnc(CWnd *pWnd){
	 return ((CHMSWardAcceptance *)pWnd)->OnDiseaseAccompaniedKillfocus();
}*/
/*static int _OnDiseaseAccompaniedKillfocusFnc(CWnd *pWnd){
	 return ((CHMSWardAcceptance *)pWnd)->OnDiseaseAccompaniedKillfocus();
}*/
static int _OnDiseaseAccompaniedLoadDataFnc(CWnd *pWnd){
	 return ((CHMSWardAcceptance *)pWnd)->OnDiseaseAccompaniedLoadData();
}
/*static int _OnDiseaseAccompaniedAddNewFnc(CWnd *pWnd){
	 return ((CHMSWardAcceptance *)pWnd)->OnDiseaseAccompaniedAddNew();
}*/
/*static int _OnRelationDiseaseChangeFnc(CWnd *pWnd){
	return ((CHMSWardAcceptance *)pWnd)->OnRelationDiseaseChange();
} */
/*static int _OnRelationDiseaseSetfocusFnc(CWnd *pWnd){
	return ((CHMSWardAcceptance *)pWnd)->OnRelationDiseaseKillfocus();} */ 
/*static int _OnRelationDiseaseKillfocusFnc(CWnd *pWnd){
	return ((CHMSWardAcceptance *)pWnd)->OnRelationDiseaseKillfocus();
} */
static int _OnRelationDiseaseCheckValueFnc(CWnd *pWnd){
	return ((CHMSWardAcceptance *)pWnd)->OnRelationDiseaseCheckValue();
} 
/*static int _OnReasonChangeFnc(CWnd *pWnd){
	return ((CHMSWardAcceptance *)pWnd)->OnReasonChange();
} */
/*static int _OnReasonSetfocusFnc(CWnd *pWnd){
	return ((CHMSWardAcceptance *)pWnd)->OnReasonKillfocus();} */ 
/*static int _OnReasonKillfocusFnc(CWnd *pWnd){
	return ((CHMSWardAcceptance *)pWnd)->OnReasonKillfocus();
} */
static int _OnReasonCheckValueFnc(CWnd *pWnd){
	return ((CHMSWardAcceptance *)pWnd)->OnReasonCheckValue();
} 
static int _OnUpdateSelectFnc(CWnd *pWnd){
	CHMSWardAcceptance *pVw = (CHMSWardAcceptance *)pWnd;
	return pVw->OnUpdateSelect();
} 
static int _OnSaveSelectFnc(CWnd *pWnd){
	CHMSWardAcceptance *pVw = (CHMSWardAcceptance *)pWnd;
	return pVw->OnSaveSelect();
} 
static int _OnCancelSelectFnc(CWnd *pWnd){
	CHMSWardAcceptance *pVw = (CHMSWardAcceptance *)pWnd;
	return pVw->OnCancelSelect();
} 
/*static int _OnInWardNoChangeFnc(CWnd *pWnd){
	return ((CHMSWardAcceptance *)pWnd)->OnInWardNoChange();
} */
/*static int _OnInWardNoSetfocusFnc(CWnd *pWnd){
	return ((CHMSWardAcceptance *)pWnd)->OnInWardNoKillfocus();} */ 
/*static int _OnInWardNoKillfocusFnc(CWnd *pWnd){
	return ((CHMSWardAcceptance *)pWnd)->OnInWardNoKillfocus();
} */
static int _OnInWardNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSWardAcceptance *)pWnd)->OnInWardNoCheckValue();
} 
static int _OnIntroducePlaceSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	 return ((CHMSWardAcceptance* )pWnd)->OnIntroducePlaceSelectChange(nOldItemSel, nNewItemSel);
} 
static int _OnIntroducePlaceSelendokFnc(CWnd *pWnd){
	 return ((CHMSWardAcceptance *)pWnd)->OnIntroducePlaceSelendok();
}
/*static int _OnIntroducePlaceSetfocusFnc(CWnd *pWnd){
	 return ((CHMSWardAcceptance *)pWnd)->OnIntroducePlaceKillfocus();
}*/
/*static int _OnIntroducePlaceKillfocusFnc(CWnd *pWnd){
	 return ((CHMSWardAcceptance *)pWnd)->OnIntroducePlaceKillfocus();
}*/
static int _OnIntroducePlaceLoadDataFnc(CWnd *pWnd){
	 return ((CHMSWardAcceptance *)pWnd)->OnIntroducePlaceLoadData();
}
/*static int _OnIntroducePlaceAddNewFnc(CWnd *pWnd){
	 return ((CHMSWardAcceptance *)pWnd)->OnIntroducePlaceAddNew();
}*/
/*static int _OnTotalTimeChangeFnc(CWnd *pWnd){
	return ((CHMSWardAcceptance *)pWnd)->OnTotalTimeChange();
} */
/*static int _OnTotalTimeSetfocusFnc(CWnd *pWnd){
	return ((CHMSWardAcceptance *)pWnd)->OnTotalTimeKillfocus();} */ 
/*static int _OnTotalTimeKillfocusFnc(CWnd *pWnd){
	return ((CHMSWardAcceptance *)pWnd)->OnTotalTimeKillfocus();
} */
static int _OnTotalTimeCheckValueFnc(CWnd *pWnd){
	return ((CHMSWardAcceptance *)pWnd)->OnTotalTimeCheckValue();
} 
static int _OnAddHMSWardAcceptanceFnc(CWnd *pWnd){
	 return ((CHMSWardAcceptance*)pWnd)->OnAddHMSWardAcceptance();
} 
static int _OnEditHMSWardAcceptanceFnc(CWnd *pWnd){
	 return ((CHMSWardAcceptance*)pWnd)->OnEditHMSWardAcceptance();
} 
static int _OnDeleteHMSWardAcceptanceFnc(CWnd *pWnd){
	 return ((CHMSWardAcceptance*)pWnd)->OnDeleteHMSWardAcceptance();
} 
static int _OnSaveHMSWardAcceptanceFnc(CWnd *pWnd){
	 return ((CHMSWardAcceptance*)pWnd)->OnSaveHMSWardAcceptance();
} 
static int _OnCancelHMSWardAcceptanceFnc(CWnd *pWnd){
	 return ((CHMSWardAcceptance*)pWnd)->OnCancelHMSWardAcceptance();
} 
CHMSWardAcceptance::CHMSWardAcceptance(){

	m_nDlgWidth = 600;
	m_nDlgHeight = 400;
	SetDefaultValues();
}
CHMSWardAcceptance::~CHMSWardAcceptance(){
}
void CHMSWardAcceptance::OnCreateComponents(){
	m_wndInDateLabel.Create(this, _T("In Date"), 5, 6, 107, 26);
	m_wndInDate.Create(this,112, 6, 212, 26); 
	m_wndFromWardLabel.Create(this, _T("From Ward"), 354, 6, 407, 26);
	m_wndFromWard.Create(this,412, 6, 594, 26); 
	m_wndExamineDiseaseLabel.Create(this, _T("Examine Disease"), 5, 56, 107, 76);
	m_wndExamineDisease.Create(this,112, 56, 594, 76); 
	m_wndDepartmentDiseaseLabel.Create(this, _T("Department Disease"), 5, 81, 107, 101);
	m_wndDepartmentDisease.Create(this,112, 81, 594, 101); 
	m_wndMainDiseaseLabel.Create(this, _T("Main Disease"), 5, 106, 107, 126);
	m_wndMainDisease.Create(this,112, 106, 594, 126); 
	m_wndDiseaseAccompaniedLabel.Create(this, _T("Disease Accompanied"), 5, 131, 107, 151);
	m_wndDiseaseAccompanied.Create(this,112, 131, 594, 151); 
	m_wndRelationDiseaseLabel.Create(this, _T("Relation Disease"), 5, 156, 107, 176);
	m_wndRelationDisease.Create(this,112, 156, 594, 176); 
	m_wndReasonLabel.Create(this, _T("Reason"), 5, 181, 107, 201);
	m_wndReason.Create(this,112, 181, 594, 229); 
	m_wndUpdate.Create(this, _T("&Update"), 389, 234, 454, 256);
	m_wndSave.Create(this, _T("&Save"), 459, 234, 524, 256);
	m_wndCancel.Create(this, _T("&Cancel"), 529, 234, 594, 256);
	m_wndInWardNoLabel.Create(this, _T("InWard No"), 217, 6, 269, 26);
	m_wndInWardNo.Create(this,274, 6, 349, 26); 
	m_wndIntroducePlaceLabel.Create(this, _T("Introduce Place"), 5, 31, 107, 51);
	m_wndIntroducePlace.Create(this,112, 31, 212, 51); 
	m_wndTotalTimeLabel.Create(this, _T("Total Time"), 217, 31, 269, 51);
	m_wndTotalTime.Create(this,274, 31, 349, 51); 

}
void CHMSWardAcceptance::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
//	m_wndInDate.SetMax(CDate(pMF->GetSysDateTime()));
	m_wndInDate.SetCheckValue(true);
	m_wndFromWard.SetCheckValue(true);
	m_wndFromWard.LimitText(1024);
	m_wndExamineDisease.SetCheckValue(true);
	m_wndExamineDisease.LimitText(1024);
	m_wndDepartmentDisease.SetCheckValue(true);
	m_wndDepartmentDisease.LimitText(1024);
	m_wndMainDisease.SetCheckValue(true);
	m_wndMainDisease.LimitText(1024);
	m_wndDiseaseAccompanied.SetCheckValue(true);
	m_wndDiseaseAccompanied.LimitText(1024);
	m_wndRelationDisease.SetLimitText(1024);
	m_wndRelationDisease.SetCheckValue(true);
	m_wndReason.SetLimitText(1024);
	m_wndReason.SetCheckValue(true);
	m_wndInWardNo.SetLimitText(1024);
	m_wndInWardNo.SetCheckValue(true);
	m_wndIntroducePlace.SetCheckValue(true);
	m_wndIntroducePlace.LimitText(1024);
	m_wndTotalTime.SetLimitText(1024);
	m_wndTotalTime.SetCheckValue(true);


	m_wndFromWard.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndFromWard.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndExamineDisease.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndExamineDisease.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndDepartmentDisease.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndDepartmentDisease.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndMainDisease.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndMainDisease.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndDiseaseAccompanied.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndDiseaseAccompanied.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndIntroducePlace.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndIntroducePlace.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CHMSWardAcceptance::OnSetWindowEvents(){
	//m_wndInDate.SetEvent(WE_CHANGE, _OnInDateChangeFnc);
	//m_wndInDate.SetEvent(WE_SETFOCUS, _OnInDateSetfocusFnc);
	//m_wndInDate.SetEvent(WE_KILLFOCUS, _OnInDateKillfocusFnc);
	m_wndInDate.SetEvent(WE_CHECKVALUE, _OnInDateCheckValueFnc);
	m_wndFromWard.SetEvent(WE_SELENDOK, _OnFromWardSelendokFnc);
	//m_wndFromWard.SetEvent(WE_SETFOCUS, _OnFromWardSetfocusFnc);
	//m_wndFromWard.SetEvent(WE_KILLFOCUS, _OnFromWardKillfocusFnc);
	m_wndFromWard.SetEvent(WE_SELCHANGE, _OnFromWardSelectChangeFnc);
	m_wndFromWard.SetEvent(WE_LOADDATA, _OnFromWardLoadDataFnc);
	//m_wndFromWard.SetEvent(WE_ADDNEW, _OnFromWardAddNewFnc);
	m_wndExamineDisease.SetEvent(WE_SELENDOK, _OnExamineDiseaseSelendokFnc);
	//m_wndExamineDisease.SetEvent(WE_SETFOCUS, _OnExamineDiseaseSetfocusFnc);
	//m_wndExamineDisease.SetEvent(WE_KILLFOCUS, _OnExamineDiseaseKillfocusFnc);
	m_wndExamineDisease.SetEvent(WE_SELCHANGE, _OnExamineDiseaseSelectChangeFnc);
	m_wndExamineDisease.SetEvent(WE_LOADDATA, _OnExamineDiseaseLoadDataFnc);
	//m_wndExamineDisease.SetEvent(WE_ADDNEW, _OnExamineDiseaseAddNewFnc);
	m_wndDepartmentDisease.SetEvent(WE_SELENDOK, _OnDepartmentDiseaseSelendokFnc);
	//m_wndDepartmentDisease.SetEvent(WE_SETFOCUS, _OnDepartmentDiseaseSetfocusFnc);
	//m_wndDepartmentDisease.SetEvent(WE_KILLFOCUS, _OnDepartmentDiseaseKillfocusFnc);
	m_wndDepartmentDisease.SetEvent(WE_SELCHANGE, _OnDepartmentDiseaseSelectChangeFnc);
	m_wndDepartmentDisease.SetEvent(WE_LOADDATA, _OnDepartmentDiseaseLoadDataFnc);
	//m_wndDepartmentDisease.SetEvent(WE_ADDNEW, _OnDepartmentDiseaseAddNewFnc);
	m_wndMainDisease.SetEvent(WE_SELENDOK, _OnMainDiseaseSelendokFnc);
	//m_wndMainDisease.SetEvent(WE_SETFOCUS, _OnMainDiseaseSetfocusFnc);
	//m_wndMainDisease.SetEvent(WE_KILLFOCUS, _OnMainDiseaseKillfocusFnc);
	m_wndMainDisease.SetEvent(WE_SELCHANGE, _OnMainDiseaseSelectChangeFnc);
	m_wndMainDisease.SetEvent(WE_LOADDATA, _OnMainDiseaseLoadDataFnc);
	//m_wndMainDisease.SetEvent(WE_ADDNEW, _OnMainDiseaseAddNewFnc);
	m_wndDiseaseAccompanied.SetEvent(WE_SELENDOK, _OnDiseaseAccompaniedSelendokFnc);
	//m_wndDiseaseAccompanied.SetEvent(WE_SETFOCUS, _OnDiseaseAccompaniedSetfocusFnc);
	//m_wndDiseaseAccompanied.SetEvent(WE_KILLFOCUS, _OnDiseaseAccompaniedKillfocusFnc);
	m_wndDiseaseAccompanied.SetEvent(WE_SELCHANGE, _OnDiseaseAccompaniedSelectChangeFnc);
	m_wndDiseaseAccompanied.SetEvent(WE_LOADDATA, _OnDiseaseAccompaniedLoadDataFnc);
	//m_wndDiseaseAccompanied.SetEvent(WE_ADDNEW, _OnDiseaseAccompaniedAddNewFnc);
	//m_wndRelationDisease.SetEvent(WE_CHANGE, _OnRelationDiseaseChangeFnc);
	//m_wndRelationDisease.SetEvent(WE_SETFOCUS, _OnRelationDiseaseSetfocusFnc);
	//m_wndRelationDisease.SetEvent(WE_KILLFOCUS, _OnRelationDiseaseKillfocusFnc);
	m_wndRelationDisease.SetEvent(WE_CHECKVALUE, _OnRelationDiseaseCheckValueFnc);
	//m_wndReason.SetEvent(WE_CHANGE, _OnReasonChangeFnc);
	//m_wndReason.SetEvent(WE_SETFOCUS, _OnReasonSetfocusFnc);
	//m_wndReason.SetEvent(WE_KILLFOCUS, _OnReasonKillfocusFnc);
	m_wndReason.SetEvent(WE_CHECKVALUE, _OnReasonCheckValueFnc);
	m_wndUpdate.SetEvent(WE_CLICK, _OnUpdateSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	//m_wndInWardNo.SetEvent(WE_CHANGE, _OnInWardNoChangeFnc);
	//m_wndInWardNo.SetEvent(WE_SETFOCUS, _OnInWardNoSetfocusFnc);
	//m_wndInWardNo.SetEvent(WE_KILLFOCUS, _OnInWardNoKillfocusFnc);
	m_wndInWardNo.SetEvent(WE_CHECKVALUE, _OnInWardNoCheckValueFnc);
	m_wndIntroducePlace.SetEvent(WE_SELENDOK, _OnIntroducePlaceSelendokFnc);
	//m_wndIntroducePlace.SetEvent(WE_SETFOCUS, _OnIntroducePlaceSetfocusFnc);
	//m_wndIntroducePlace.SetEvent(WE_KILLFOCUS, _OnIntroducePlaceKillfocusFnc);
	m_wndIntroducePlace.SetEvent(WE_SELCHANGE, _OnIntroducePlaceSelectChangeFnc);
	m_wndIntroducePlace.SetEvent(WE_LOADDATA, _OnIntroducePlaceLoadDataFnc);
	//m_wndIntroducePlace.SetEvent(WE_ADDNEW, _OnIntroducePlaceAddNewFnc);
	//m_wndTotalTime.SetEvent(WE_CHANGE, _OnTotalTimeChangeFnc);
	//m_wndTotalTime.SetEvent(WE_SETFOCUS, _OnTotalTimeSetfocusFnc);
	//m_wndTotalTime.SetEvent(WE_KILLFOCUS, _OnTotalTimeKillfocusFnc);
	m_wndTotalTime.SetEvent(WE_CHECKVALUE, _OnTotalTimeCheckValueFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSWardAcceptanceFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSWardAcceptanceFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSWardAcceptanceFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSWardAcceptanceFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSWardAcceptanceFnc, 0, 'T', VK_CONTROL);

}
void CHMSWardAcceptance::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndInDate.GetDlgCtrlID(), m_szInDate);
	DDX_TextEx(pDX, m_wndFromWard.GetDlgCtrlID(), m_szFromWardKey);
	DDX_TextEx(pDX, m_wndExamineDisease.GetDlgCtrlID(), m_szExamineDiseaseKey);
	DDX_TextEx(pDX, m_wndDepartmentDisease.GetDlgCtrlID(), m_szDepartmentDiseaseKey);
	DDX_TextEx(pDX, m_wndMainDisease.GetDlgCtrlID(), m_szMainDiseaseKey);
	DDX_TextEx(pDX, m_wndDiseaseAccompanied.GetDlgCtrlID(), m_szDiseaseAccompaniedKey);
	DDX_Text(pDX, m_wndRelationDisease.GetDlgCtrlID(), m_szRelationDisease);
	DDX_Text(pDX, m_wndReason.GetDlgCtrlID(), m_szReason);
	DDX_Text(pDX, m_wndInWardNo.GetDlgCtrlID(), m_nInWardNo);
	DDX_TextEx(pDX, m_wndIntroducePlace.GetDlgCtrlID(), m_szIntroducePlaceKey);
	DDX_Text(pDX, m_wndTotalTime.GetDlgCtrlID(), m_nTotalTime);

}
void CHMSWardAcceptance::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSWardAcceptance::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSWardAcceptance::SetDefaultValues(){

	m_szInDate.Empty();
	m_szFromWardKey.Empty();
	m_szExamineDiseaseKey.Empty();
	m_szDepartmentDiseaseKey.Empty();
	m_szMainDiseaseKey.Empty();
	m_szDiseaseAccompaniedKey.Empty();
	m_szRelationDisease.Empty();
	m_szReason.Empty();
	m_nInWardNo=0;
	m_szIntroducePlaceKey.Empty();
	m_nTotalTime=0;

}
/*int CHMSWardAcceptance::OnInDateChange(){
	return 0;
} */
/*int CHMSWardAcceptance::OnInDateSetfocus(){
	return 0;
} */
/*int CHMSWardAcceptance::OnInDateKillfocus(){
	return 0;
} */
int CHMSWardAcceptance::OnInDateCheckValue(){
	return 0;
} 
int CHMSWardAcceptance::OnFromWardSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSWardAcceptance::OnFromWardSelendok(){
	 return 0;
}
/*int CHMSWardAcceptance::OnFromWardSetfocus(){
	 return 0;
}*/
/*int CHMSWardAcceptance::OnFromWardKillfocus(){
	 return 0;
}*/
int CHMSWardAcceptance::OnFromWardLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndFromWard.IsSearchKey()){
	};
	m_wndFromWard.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndFromWard.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*int CHMSWardAcceptance::OnFromWardAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} */
int CHMSWardAcceptance::OnExamineDiseaseSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSWardAcceptance::OnExamineDiseaseSelendok(){
	 return 0;
}
/*int CHMSWardAcceptance::OnExamineDiseaseSetfocus(){
	 return 0;
}*/
/*int CHMSWardAcceptance::OnExamineDiseaseKillfocus(){
	 return 0;
}*/
int CHMSWardAcceptance::OnExamineDiseaseLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndExamineDisease.IsSearchKey()){
	};
	m_wndExamineDisease.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndExamineDisease.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*int CHMSWardAcceptance::OnExamineDiseaseAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} */
int CHMSWardAcceptance::OnDepartmentDiseaseSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSWardAcceptance::OnDepartmentDiseaseSelendok(){
	 return 0;
}
/*int CHMSWardAcceptance::OnDepartmentDiseaseSetfocus(){
	 return 0;
}*/
/*int CHMSWardAcceptance::OnDepartmentDiseaseKillfocus(){
	 return 0;
}*/
int CHMSWardAcceptance::OnDepartmentDiseaseLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDepartmentDisease.IsSearchKey()){
	};
	m_wndDepartmentDisease.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDepartmentDisease.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*int CHMSWardAcceptance::OnDepartmentDiseaseAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} */
int CHMSWardAcceptance::OnMainDiseaseSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSWardAcceptance::OnMainDiseaseSelendok(){
	 return 0;
}
/*int CHMSWardAcceptance::OnMainDiseaseSetfocus(){
	 return 0;
}*/
/*int CHMSWardAcceptance::OnMainDiseaseKillfocus(){
	 return 0;
}*/
int CHMSWardAcceptance::OnMainDiseaseLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndMainDisease.IsSearchKey()){
	};
	m_wndMainDisease.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndMainDisease.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*int CHMSWardAcceptance::OnMainDiseaseAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} */
int CHMSWardAcceptance::OnDiseaseAccompaniedSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSWardAcceptance::OnDiseaseAccompaniedSelendok(){
	 return 0;
}
/*int CHMSWardAcceptance::OnDiseaseAccompaniedSetfocus(){
	 return 0;
}*/
/*int CHMSWardAcceptance::OnDiseaseAccompaniedKillfocus(){
	 return 0;
}*/
int CHMSWardAcceptance::OnDiseaseAccompaniedLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDiseaseAccompanied.IsSearchKey()){
	};
	m_wndDiseaseAccompanied.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDiseaseAccompanied.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*int CHMSWardAcceptance::OnDiseaseAccompaniedAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} */
/*int CHMSWardAcceptance::OnRelationDiseaseChange(){
	return 0;
} */
/*int CHMSWardAcceptance::OnRelationDiseaseSetfocus(){
	return 0;
} */
/*int CHMSWardAcceptance::OnRelationDiseaseKillfocus(){
	return 0;
} */
int CHMSWardAcceptance::OnRelationDiseaseCheckValue(){
	return 0;
} 
/*int CHMSWardAcceptance::OnReasonChange(){
	return 0;
} */
/*int CHMSWardAcceptance::OnReasonSetfocus(){
	return 0;
} */
/*int CHMSWardAcceptance::OnReasonKillfocus(){
	return 0;
} */
int CHMSWardAcceptance::OnReasonCheckValue(){
	return 0;
} 
int CHMSWardAcceptance::OnUpdateSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSWardAcceptance::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSWardAcceptance::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
/*int CHMSWardAcceptance::OnInWardNoChange(){
	return 0;
} */
/*int CHMSWardAcceptance::OnInWardNoSetfocus(){
	return 0;
} */
/*int CHMSWardAcceptance::OnInWardNoKillfocus(){
	return 0;
} */
int CHMSWardAcceptance::OnInWardNoCheckValue(){
	return 0;
} 
int CHMSWardAcceptance::OnIntroducePlaceSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSWardAcceptance::OnIntroducePlaceSelendok(){
	 return 0;
}
/*int CHMSWardAcceptance::OnIntroducePlaceSetfocus(){
	 return 0;
}*/
/*int CHMSWardAcceptance::OnIntroducePlaceKillfocus(){
	 return 0;
}*/
int CHMSWardAcceptance::OnIntroducePlaceLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndIntroducePlace.IsSearchKey()){
	};
	m_wndIntroducePlace.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndIntroducePlace.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*int CHMSWardAcceptance::OnIntroducePlaceAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} */
/*int CHMSWardAcceptance::OnTotalTimeChange(){
	return 0;
} */
/*int CHMSWardAcceptance::OnTotalTimeSetfocus(){
	return 0;
} */
/*int CHMSWardAcceptance::OnTotalTimeKillfocus(){
	return 0;
} */
int CHMSWardAcceptance::OnTotalTimeCheckValue(){
	return 0;
} 
int CHMSWardAcceptance::OnAddHMSWardAcceptance(){ /* 
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Add HMSWardAcceptance"))) 
 		return -1; 
 	SetDefaultValues(); 
 	EnableControls(TRUE); 
 	EnableButtons(FALSE, 0, 1, 2, -1); 
 	UpdateData(FALSE); 
 	SetMode(VM_ADD); */ return 0; 
 
} 
int CHMSWardAcceptance::OnEditHMSWardAcceptance(){ /* 
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Edit HMSWardAcceptance"))) 
 		return -1; 
 	EnableControls(TRUE); 
 	EnableButtons(FALSE, 0, 1, 2, -1); 
 	SetMode(VM_EDIT); */ return 0;  
 
} 
int CHMSWardAcceptance::OnDeleteHMSWardAcceptance(){ /* 
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
 	szSQL.Format(_T("DELETE FROM  WHERE  AND 
 "), ); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret >= 0){ 
 		SetMode(VM_NONE); 
 		OnCancelHMSWardAcceptance(); 
 		OnHMSWardAcceptanceLoadData(); 
 	} */ return 0;
 } 
int CHMSWardAcceptance::OnSaveHMSWardAcceptance(){ /* 
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		szSQL = m_VIMES_msgTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE 
 "), ); 
 		szSQL = m_VIMES_msgTbl.GetUpdateSQL(); 
 		szSQL += szWhere; 
 	} 
 //_fmsg(_T("HMSWardAcceptance"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		EnableControls(FALSE); 
 		On?O?kListLoadData(); 
 		EnableButtons(FALSE, 3, 4, -1); 
 		SetMode(VM_VIEW); 
 		pMF->FinishWork(this); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	*/ 	return 0; 
}
int CHMSWardAcceptance::OnCancelHMSWardAcceptance(){ /* 
 	EnableControls(FALSE); 
 	if(GetMode() == VM_EDIT) 
 	{ 
 		SetMode(VM_VIEW); 
 		EnableButtons(FALSE, 3, 4, -1); 
 	} 
 	else 
 	{ 
 		SetDefaultValues(); 
 		SetMode(VM_NONE); 
 		UpdateData(FALSE); 
 		EnableButtons(FALSE, 1, 2, 3, 4, -1); 
 	} 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	pMF->FinishWork(this); 
 	*/ 
 	return 0;
} 
