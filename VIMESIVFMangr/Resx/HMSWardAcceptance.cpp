#include "HMSWardAcceptance.h"
//#include "stdafx.h"
#include "MainFrm.h"
/*static void _OnInDateChangeFnc(CWnd *pWnd){
	((CHMSWardAcceptance *)pWnd)->OnInDateChange();
} */
/*static void _OnInDateSetfocusFnc(CWnd *pWnd){
	((CHMSWardAcceptance *)pWnd)->OnInDateSetfocus();} */ 
/*static void _OnInDateKillfocusFnc(CWnd *pWnd){
	((CHMSWardAcceptance *)pWnd)->OnInDateKillfocus();
} */
static int _OnInDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSWardAcceptance *)pWnd)->OnInDateCheckValue();
} 
static void _OnFromWardSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSWardAcceptance* )pWnd)->OnFromWardSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnFromWardSelendokFnc(CWnd *pWnd){
	((CHMSWardAcceptance *)pWnd)->OnFromWardSelendok();
}
/*static void _OnFromWardSetfocusFnc(CWnd *pWnd){
	((CHMSWardAcceptance *)pWnd)->OnFromWardKillfocus();
}*/
/*static void _OnFromWardKillfocusFnc(CWnd *pWnd){
	((CHMSWardAcceptance *)pWnd)->OnFromWardKillfocus();
}*/
static long _OnFromWardLoadDataFnc(CWnd *pWnd){
	return ((CHMSWardAcceptance *)pWnd)->OnFromWardLoadData();
}
/*static void _OnFromWardAddNewFnc(CWnd *pWnd){
	((CHMSWardAcceptance *)pWnd)->OnFromWardAddNew();
}*/
static void _OnExamineDiseaseSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSWardAcceptance* )pWnd)->OnExamineDiseaseSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnExamineDiseaseSelendokFnc(CWnd *pWnd){
	((CHMSWardAcceptance *)pWnd)->OnExamineDiseaseSelendok();
}
/*static void _OnExamineDiseaseSetfocusFnc(CWnd *pWnd){
	((CHMSWardAcceptance *)pWnd)->OnExamineDiseaseKillfocus();
}*/
/*static void _OnExamineDiseaseKillfocusFnc(CWnd *pWnd){
	((CHMSWardAcceptance *)pWnd)->OnExamineDiseaseKillfocus();
}*/
static long _OnExamineDiseaseLoadDataFnc(CWnd *pWnd){
	return ((CHMSWardAcceptance *)pWnd)->OnExamineDiseaseLoadData();
}
/*static void _OnExamineDiseaseAddNewFnc(CWnd *pWnd){
	((CHMSWardAcceptance *)pWnd)->OnExamineDiseaseAddNew();
}*/
static void _OnDepartmentDiseaseSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSWardAcceptance* )pWnd)->OnDepartmentDiseaseSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentDiseaseSelendokFnc(CWnd *pWnd){
	((CHMSWardAcceptance *)pWnd)->OnDepartmentDiseaseSelendok();
}
/*static void _OnDepartmentDiseaseSetfocusFnc(CWnd *pWnd){
	((CHMSWardAcceptance *)pWnd)->OnDepartmentDiseaseKillfocus();
}*/
/*static void _OnDepartmentDiseaseKillfocusFnc(CWnd *pWnd){
	((CHMSWardAcceptance *)pWnd)->OnDepartmentDiseaseKillfocus();
}*/
static long _OnDepartmentDiseaseLoadDataFnc(CWnd *pWnd){
	return ((CHMSWardAcceptance *)pWnd)->OnDepartmentDiseaseLoadData();
}
/*static void _OnDepartmentDiseaseAddNewFnc(CWnd *pWnd){
	((CHMSWardAcceptance *)pWnd)->OnDepartmentDiseaseAddNew();
}*/
static void _OnMainDiseaseSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSWardAcceptance* )pWnd)->OnMainDiseaseSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnMainDiseaseSelendokFnc(CWnd *pWnd){
	((CHMSWardAcceptance *)pWnd)->OnMainDiseaseSelendok();
}
/*static void _OnMainDiseaseSetfocusFnc(CWnd *pWnd){
	((CHMSWardAcceptance *)pWnd)->OnMainDiseaseKillfocus();
}*/
/*static void _OnMainDiseaseKillfocusFnc(CWnd *pWnd){
	((CHMSWardAcceptance *)pWnd)->OnMainDiseaseKillfocus();
}*/
static long _OnMainDiseaseLoadDataFnc(CWnd *pWnd){
	return ((CHMSWardAcceptance *)pWnd)->OnMainDiseaseLoadData();
}
/*static void _OnMainDiseaseAddNewFnc(CWnd *pWnd){
	((CHMSWardAcceptance *)pWnd)->OnMainDiseaseAddNew();
}*/
static void _OnDiseaseAccompaniedSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSWardAcceptance* )pWnd)->OnDiseaseAccompaniedSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDiseaseAccompaniedSelendokFnc(CWnd *pWnd){
	((CHMSWardAcceptance *)pWnd)->OnDiseaseAccompaniedSelendok();
}
/*static void _OnDiseaseAccompaniedSetfocusFnc(CWnd *pWnd){
	((CHMSWardAcceptance *)pWnd)->OnDiseaseAccompaniedKillfocus();
}*/
/*static void _OnDiseaseAccompaniedKillfocusFnc(CWnd *pWnd){
	((CHMSWardAcceptance *)pWnd)->OnDiseaseAccompaniedKillfocus();
}*/
static long _OnDiseaseAccompaniedLoadDataFnc(CWnd *pWnd){
	return ((CHMSWardAcceptance *)pWnd)->OnDiseaseAccompaniedLoadData();
}
/*static void _OnDiseaseAccompaniedAddNewFnc(CWnd *pWnd){
	((CHMSWardAcceptance *)pWnd)->OnDiseaseAccompaniedAddNew();
}*/
/*static void _OnRelationDiseaseChangeFnc(CWnd *pWnd){
	((CHMSWardAcceptance *)pWnd)->OnRelationDiseaseChange();
} */
/*static void _OnRelationDiseaseSetfocusFnc(CWnd *pWnd){
	((CHMSWardAcceptance *)pWnd)->OnRelationDiseaseSetfocus();} */ 
/*static void _OnRelationDiseaseKillfocusFnc(CWnd *pWnd){
	((CHMSWardAcceptance *)pWnd)->OnRelationDiseaseKillfocus();
} */
static int _OnRelationDiseaseCheckValueFnc(CWnd *pWnd){
	return ((CHMSWardAcceptance *)pWnd)->OnRelationDiseaseCheckValue();
} 
/*static void _OnReasonChangeFnc(CWnd *pWnd){
	((CHMSWardAcceptance *)pWnd)->OnReasonChange();
} */
/*static void _OnReasonSetfocusFnc(CWnd *pWnd){
	((CHMSWardAcceptance *)pWnd)->OnReasonSetfocus();} */ 
/*static void _OnReasonKillfocusFnc(CWnd *pWnd){
	((CHMSWardAcceptance *)pWnd)->OnReasonKillfocus();
} */
static int _OnReasonCheckValueFnc(CWnd *pWnd){
	return ((CHMSWardAcceptance *)pWnd)->OnReasonCheckValue();
} 
static void _OnUpdateSelectFnc(CWnd *pWnd){
	CHMSWardAcceptance *pVw = (CHMSWardAcceptance *)pWnd;
	pVw->OnUpdateSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSWardAcceptance *pVw = (CHMSWardAcceptance *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSWardAcceptance *pVw = (CHMSWardAcceptance *)pWnd;
	pVw->OnCancelSelect();
} 
/*static void _OnInWardNoChangeFnc(CWnd *pWnd){
	((CHMSWardAcceptance *)pWnd)->OnInWardNoChange();
} */
/*static void _OnInWardNoSetfocusFnc(CWnd *pWnd){
	((CHMSWardAcceptance *)pWnd)->OnInWardNoSetfocus();} */ 
/*static void _OnInWardNoKillfocusFnc(CWnd *pWnd){
	((CHMSWardAcceptance *)pWnd)->OnInWardNoKillfocus();
} */
static int _OnInWardNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSWardAcceptance *)pWnd)->OnInWardNoCheckValue();
} 
static void _OnIntroducePlaceSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSWardAcceptance* )pWnd)->OnIntroducePlaceSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnIntroducePlaceSelendokFnc(CWnd *pWnd){
	((CHMSWardAcceptance *)pWnd)->OnIntroducePlaceSelendok();
}
/*static void _OnIntroducePlaceSetfocusFnc(CWnd *pWnd){
	((CHMSWardAcceptance *)pWnd)->OnIntroducePlaceKillfocus();
}*/
/*static void _OnIntroducePlaceKillfocusFnc(CWnd *pWnd){
	((CHMSWardAcceptance *)pWnd)->OnIntroducePlaceKillfocus();
}*/
static long _OnIntroducePlaceLoadDataFnc(CWnd *pWnd){
	return ((CHMSWardAcceptance *)pWnd)->OnIntroducePlaceLoadData();
}
/*static void _OnIntroducePlaceAddNewFnc(CWnd *pWnd){
	((CHMSWardAcceptance *)pWnd)->OnIntroducePlaceAddNew();
}*/
/*static void _OnTotalTimeChangeFnc(CWnd *pWnd){
	((CHMSWardAcceptance *)pWnd)->OnTotalTimeChange();
} */
/*static void _OnTotalTimeSetfocusFnc(CWnd *pWnd){
	((CHMSWardAcceptance *)pWnd)->OnTotalTimeSetfocus();} */ 
/*static void _OnTotalTimeKillfocusFnc(CWnd *pWnd){
	((CHMSWardAcceptance *)pWnd)->OnTotalTimeKillfocus();
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

	m_nDlgWidth = 813;
	m_nDlgHeight = 513;
	SetDefaultValues();
}
CHMSWardAcceptance::~CHMSWardAcceptance(){
}
void CHMSWardAcceptance::OnCreateComponents(){
	m_wndInDateLabel.Create(this, _T("In Date"), 5, 6, 158, 31);
	m_wndInDate.Create(this,163, 6, 263, 31); 
	m_wndFromWardLabel.Create(this, _T("From Ward"), 354, 6, 407, 31);
	m_wndFromWard.Create(this,412, 6, 594, 31); 
	m_wndExamineDiseaseLabel.Create(this, _T("Examine Disease"), 5, 66, 158, 91);
	m_wndExamineDisease.Create(this,163, 66, 645, 91); 
	m_wndDepartmentDiseaseLabel.Create(this, _T("Department Disease"), 5, 96, 158, 121);
	m_wndDepartmentDisease.Create(this,164, 96, 646, 121); 
	m_wndMainDiseaseLabel.Create(this, _T("Main Disease"), 5, 126, 158, 151);
	m_wndMainDisease.Create(this,163, 126, 645, 151); 
	m_wndDiseaseAccompaniedLabel.Create(this, _T("Disease Accompanied"), 5, 156, 158, 181);
	m_wndDiseaseAccompanied.Create(this,163, 156, 645, 181); 
	m_wndRelationDiseaseLabel.Create(this, _T("Relation Disease"), 5, 186, 158, 211);
	m_wndRelationDisease.Create(this,163, 186, 645, 211); 
	m_wndReasonLabel.Create(this, _T("Reason"), 5, 216, 158, 241);
	m_wndReason.Create(this,163, 217, 645, 265); 
	m_wndUpdate.Create(this, _T("&Update"), 389, 269, 454, 294);
	m_wndSave.Create(this, _T("&Save"), 459, 269, 524, 294);
	m_wndCancel.Create(this, _T("&Cancel"), 529, 269, 594, 294);
	m_wndInWardNoLabel.Create(this, _T("InWard No"), 217, 6, 269, 31);
	m_wndInWardNo.Create(this,274, 6, 349, 31); 
	m_wndIntroducePlaceLabel.Create(this, _T("Introduce Place"), 5, 36, 158, 61);
	m_wndIntroducePlace.Create(this,163, 36, 263, 61); 
	m_wndTotalTimeLabel.Create(this, _T("Total Time"), 217, 36, 269, 61);
	m_wndTotalTime.Create(this,274, 36, 349, 61); 

}
void CHMSWardAcceptance::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndInDate.SetMax(CDateTime(pMF->GetSysDateTime()));
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
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

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
int CHMSWardAcceptance::SetMode(int nMode){ 
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
/*void CHMSWardAcceptance::OnInDateChange(){
	
} */
/*void CHMSWardAcceptance::OnInDateSetfocus(){
	
} */
/*void CHMSWardAcceptance::OnInDateKillfocus(){
	
} */
int CHMSWardAcceptance::OnInDateCheckValue(){
	return 0;
} 
void CHMSWardAcceptance::OnFromWardSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSWardAcceptance::OnFromWardSelendok(){
	 
}
/*void CHMSWardAcceptance::OnFromWardSetfocus(){
	
}*/
/*void CHMSWardAcceptance::OnFromWardKillfocus(){
	
}*/
long CHMSWardAcceptance::OnFromWardLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndFromWard.IsSearchKey() && !m_szFromWardKey.IsEmpty()){
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
/*void CHMSWardAcceptance::OnFromWardAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSWardAcceptance::OnExamineDiseaseSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSWardAcceptance::OnExamineDiseaseSelendok(){
	 
}
/*void CHMSWardAcceptance::OnExamineDiseaseSetfocus(){
	
}*/
/*void CHMSWardAcceptance::OnExamineDiseaseKillfocus(){
	
}*/
long CHMSWardAcceptance::OnExamineDiseaseLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndExamineDisease.IsSearchKey() && !m_szExamineDiseaseKey.IsEmpty()){
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
/*void CHMSWardAcceptance::OnExamineDiseaseAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSWardAcceptance::OnDepartmentDiseaseSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSWardAcceptance::OnDepartmentDiseaseSelendok(){
	 
}
/*void CHMSWardAcceptance::OnDepartmentDiseaseSetfocus(){
	
}*/
/*void CHMSWardAcceptance::OnDepartmentDiseaseKillfocus(){
	
}*/
long CHMSWardAcceptance::OnDepartmentDiseaseLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDepartmentDisease.IsSearchKey() && !m_szDepartmentDiseaseKey.IsEmpty()){
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
/*void CHMSWardAcceptance::OnDepartmentDiseaseAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSWardAcceptance::OnMainDiseaseSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSWardAcceptance::OnMainDiseaseSelendok(){
	 
}
/*void CHMSWardAcceptance::OnMainDiseaseSetfocus(){
	
}*/
/*void CHMSWardAcceptance::OnMainDiseaseKillfocus(){
	
}*/
long CHMSWardAcceptance::OnMainDiseaseLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndMainDisease.IsSearchKey() && !m_szMainDiseaseKey.IsEmpty()){
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
/*void CHMSWardAcceptance::OnMainDiseaseAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSWardAcceptance::OnDiseaseAccompaniedSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSWardAcceptance::OnDiseaseAccompaniedSelendok(){
	 
}
/*void CHMSWardAcceptance::OnDiseaseAccompaniedSetfocus(){
	
}*/
/*void CHMSWardAcceptance::OnDiseaseAccompaniedKillfocus(){
	
}*/
long CHMSWardAcceptance::OnDiseaseAccompaniedLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDiseaseAccompanied.IsSearchKey() && !m_szDiseaseAccompaniedKey.IsEmpty()){
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
/*void CHMSWardAcceptance::OnDiseaseAccompaniedAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSWardAcceptance::OnRelationDiseaseChange(){
	
} */
/*void CHMSWardAcceptance::OnRelationDiseaseSetfocus(){
	
} */
/*void CHMSWardAcceptance::OnRelationDiseaseKillfocus(){
	
} */
int CHMSWardAcceptance::OnRelationDiseaseCheckValue(){
	return 0;
} 
/*void CHMSWardAcceptance::OnReasonChange(){
	
} */
/*void CHMSWardAcceptance::OnReasonSetfocus(){
	
} */
/*void CHMSWardAcceptance::OnReasonKillfocus(){
	
} */
int CHMSWardAcceptance::OnReasonCheckValue(){
	return 0;
} 
void CHMSWardAcceptance::OnUpdateSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSWardAcceptance::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSWardAcceptance::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
/*void CHMSWardAcceptance::OnInWardNoChange(){
	
} */
/*void CHMSWardAcceptance::OnInWardNoSetfocus(){
	
} */
/*void CHMSWardAcceptance::OnInWardNoKillfocus(){
	
} */
int CHMSWardAcceptance::OnInWardNoCheckValue(){
	return 0;
} 
void CHMSWardAcceptance::OnIntroducePlaceSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSWardAcceptance::OnIntroducePlaceSelendok(){
	 
}
/*void CHMSWardAcceptance::OnIntroducePlaceSetfocus(){
	
}*/
/*void CHMSWardAcceptance::OnIntroducePlaceKillfocus(){
	
}*/
long CHMSWardAcceptance::OnIntroducePlaceLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndIntroducePlace.IsSearchKey() && !m_szIntroducePlaceKey.IsEmpty()){
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
/*void CHMSWardAcceptance::OnIntroducePlaceAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSWardAcceptance::OnTotalTimeChange(){
	
} */
/*void CHMSWardAcceptance::OnTotalTimeSetfocus(){
	
} */
/*void CHMSWardAcceptance::OnTotalTimeKillfocus(){
	
} */
int CHMSWardAcceptance::OnTotalTimeCheckValue(){
	return 0;
} 
int CHMSWardAcceptance::OnAddHMSWardAcceptance(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Add HMSWardAcceptance"))) 
 		return -1; 
 	SetMode(VM_ADD);
return 0; 
 
} 
int CHMSWardAcceptance::OnEditHMSWardAcceptance(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Edit HMSWardAcceptance"))) 
 		return -1; 
 	SetMode(VM_EDIT);
return 0;  
 
} 
int CHMSWardAcceptance::OnDeleteHMSWardAcceptance(){
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
 		OnCancelHMSWardAcceptance(); 
 	}
return 0;
 } 
int CHMSWardAcceptance::OnSaveHMSWardAcceptance(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		//7szSQL = m_tblTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE")); 
 		//szSQL = m_tblTbl.GetUpdateSQL(_T("createdby,createddate")); 
 		szSQL += szWhere; 
 	} 
 _fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		//OnHMSWardAcceptanceListLoadData(); 
 		SetMode(VM_VIEW); 
 		pMF->FinishWork(this); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSWardAcceptance::OnCancelHMSWardAcceptance(){
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
int CHMSWardAcceptance::OnHMSWardAcceptanceListLoadData(){
	return 0;
}
