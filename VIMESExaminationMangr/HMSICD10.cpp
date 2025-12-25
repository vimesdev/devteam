#include "HMSICD10.h"
//#include "stdafx.h"
#include "MainFrm.h"
//#include "HMSICD10Group.h"
static int _OnChapterFillterSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	 return ((CHMSICD10Setup* )pWnd)->OnChapterFillterSelectChange(nOldItemSel, nNewItemSel);
} 
static int _OnChapterFillterSelendokFnc(CWnd *pWnd){
	 return ((CHMSICD10Setup *)pWnd)->OnChapterFillterSelendok();
}
/*static int _OnChapterFillterSetfocusFnc(CWnd *pWnd){
	 return ((CHMSICD10Setup *)pWnd)->OnChapterFillterKillfocus();
}*/
/*static int _OnChapterFillterKillfocusFnc(CWnd *pWnd){
	 return ((CHMSICD10Setup *)pWnd)->OnChapterFillterKillfocus();
}*/
static int _OnChapterFillterLoadDataFnc(CWnd *pWnd){
	 return ((CHMSICD10Setup *)pWnd)->OnChapterFillterLoadData();
}
/*static int _OnChapterFillterAddNewFnc(CWnd *pWnd){
	 return ((CHMSICD10Setup *)pWnd)->OnChapterFillterAddNew();
}*/
/*static int _OnNameFillterChangeFnc(CWnd *pWnd){
	return ((CHMSICD10Setup *)pWnd)->OnNameFillterChange();
} */
/*static int _OnNameFillterSetfocusFnc(CWnd *pWnd){
	return ((CHMSICD10Setup *)pWnd)->OnNameFillterKillfocus();} */ 
/*static int _OnNameFillterKillfocusFnc(CWnd *pWnd){
	return ((CHMSICD10Setup *)pWnd)->OnNameFillterKillfocus();
} */
static int _OnNameFillterCheckValueFnc(CWnd *pWnd){
	return ((CHMSICD10Setup *)pWnd)->OnNameFillterCheckValue();
} 
static int _OnListLoadDataFnc(CWnd *pWnd){
	 return ((CHMSICD10Setup*)pWnd)->OnListLoadData();
} 
static int _OnListDblClickFnc(CWnd *pWnd){
	 return ((CHMSICD10Setup*)pWnd)->OnListDblClick();
} 
static int _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	 return ((CHMSICD10Setup*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSICD10Setup*)pWnd)->OnListDeleteItem();
} 
static int _OnChapterSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	 return ((CHMSICD10Setup* )pWnd)->OnChapterSelectChange(nOldItemSel, nNewItemSel);
} 
static int _OnChapterSelendokFnc(CWnd *pWnd){
	 return ((CHMSICD10Setup *)pWnd)->OnChapterSelendok();
}
/*static int _OnChapterSetfocusFnc(CWnd *pWnd){
	 return ((CHMSICD10Setup *)pWnd)->OnChapterKillfocus();
}*/
/*static int _OnChapterKillfocusFnc(CWnd *pWnd){
	 return ((CHMSICD10Setup *)pWnd)->OnChapterKillfocus();
}*/
static int _OnChapterLoadDataFnc(CWnd *pWnd){
	 return ((CHMSICD10Setup *)pWnd)->OnChapterLoadData();
}
/*static int _OnChapterAddNewFnc(CWnd *pWnd){
	 return ((CHMSICD10Setup *)pWnd)->OnChapterAddNew();
}*/
static int _OnGroupSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	 return ((CHMSICD10Setup* )pWnd)->OnGroupSelectChange(nOldItemSel, nNewItemSel);
} 
static int _OnGroupSelendokFnc(CWnd *pWnd){
	 return ((CHMSICD10Setup *)pWnd)->OnGroupSelendok();
}
/*static int _OnGroupSetfocusFnc(CWnd *pWnd){
	 return ((CHMSICD10Setup *)pWnd)->OnGroupKillfocus();
}*/
/*static int _OnGroupKillfocusFnc(CWnd *pWnd){
	 return ((CHMSICD10Setup *)pWnd)->OnGroupKillfocus();
}*/
static int _OnGroupLoadDataFnc(CWnd *pWnd){
	 return ((CHMSICD10Setup *)pWnd)->OnGroupLoadData();
}
/*static int _OnGroupAddNewFnc(CWnd *pWnd){
	 return ((CHMSICD10Setup *)pWnd)->OnGroupAddNew();
}*/
/*static int _OnIDChangeFnc(CWnd *pWnd){
	return ((CHMSICD10Setup *)pWnd)->OnIDChange();
} */
/*static int _OnIDSetfocusFnc(CWnd *pWnd){
	return ((CHMSICD10Setup *)pWnd)->OnIDKillfocus();} */ 
/*static int _OnIDKillfocusFnc(CWnd *pWnd){
	return ((CHMSICD10Setup *)pWnd)->OnIDKillfocus();
} */
static int _OnIDCheckValueFnc(CWnd *pWnd){
	return ((CHMSICD10Setup *)pWnd)->OnIDCheckValue();
} 
/*static int _OnNameChangeFnc(CWnd *pWnd){
	return ((CHMSICD10Setup *)pWnd)->OnNameChange();
} */
/*static int _OnNameSetfocusFnc(CWnd *pWnd){
	return ((CHMSICD10Setup *)pWnd)->OnNameKillfocus();} */ 
/*static int _OnNameKillfocusFnc(CWnd *pWnd){
	return ((CHMSICD10Setup *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSICD10Setup *)pWnd)->OnNameCheckValue();
} 
static int _OnAddSelectFnc(CWnd *pWnd){
	CHMSICD10Setup *pVw = (CHMSICD10Setup *)pWnd;
	return pVw->OnAddSelect();
} 
static int _OnEditSelectFnc(CWnd *pWnd){
	CHMSICD10Setup *pVw = (CHMSICD10Setup *)pWnd;
	return pVw->OnEditSelect();
} 
static int _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSICD10Setup *pVw = (CHMSICD10Setup *)pWnd;
	return pVw->OnDeleteSelect();
} 
static int _OnSaveSelectFnc(CWnd *pWnd){
	CHMSICD10Setup *pVw = (CHMSICD10Setup *)pWnd;
	return pVw->OnSaveSelect();
} 
static int _OnCancelSelectFnc(CWnd *pWnd){
	CHMSICD10Setup *pVw = (CHMSICD10Setup *)pWnd;
	return pVw->OnCancelSelect();
} 
static int _OnChapterButtonSelectFnc(CWnd *pWnd){
	CHMSICD10Setup *pVw = (CHMSICD10Setup *)pWnd;
	return pVw->OnChapterButtonSelect();
} 
static int _OnGroupButtonSelectFnc(CWnd *pWnd){
	CHMSICD10Setup *pVw = (CHMSICD10Setup *)pWnd;
	return pVw->OnGroupButtonSelect();
} 
static int _OnAddHMSICD10Fnc(CWnd *pWnd){
	 return ((CHMSICD10Setup*)pWnd)->OnAddHMSICD10();
} 
static int _OnEditHMSICD10Fnc(CWnd *pWnd){
	 return ((CHMSICD10Setup*)pWnd)->OnEditHMSICD10();
} 
static int _OnDeleteHMSICD10Fnc(CWnd *pWnd){
	 return ((CHMSICD10Setup*)pWnd)->OnDeleteHMSICD10();
} 
static int _OnSaveHMSICD10Fnc(CWnd *pWnd){
	 return ((CHMSICD10Setup*)pWnd)->OnSaveHMSICD10();
} 
static int _OnCancelHMSICD10Fnc(CWnd *pWnd){
	 return ((CHMSICD10Setup*)pWnd)->OnCancelHMSICD10();
} 
CHMSICD10Setup::CHMSICD10Setup(CWnd *pParent):CGuiDialog(pParent){

	m_nDlgWidth = 815;
	m_nDlgHeight = 630;
	SetDefaultValues();
}
CHMSICD10Setup::~CHMSICD10Setup(){
}
void CHMSICD10Setup::OnCreateComponents(){
	m_wndChapterFillterLabel.Create(this, _T("&Chapter Fillter"), 10, 30, 90, 55);
	m_wndChapterFillter.Create(this,95, 30, 325, 55); 
	m_wndNameFillterLabel.Create(this, _T("Name Fillter"), 330, 30, 410, 55);
	m_wndNameFillter.Create(this,415, 30, 800, 55); 
	m_wndList.Create(this,10, 60, 800, 525); 
	m_wndICDInformations.Create(this, _T("ICD10 Informations"), 5, 5, 805, 590);
	m_wndChapterLabel.Create(this, _T("Chapter"), 10, 530, 90, 555);
	m_wndChapter.Create(this,95, 530, 380, 555); 
	m_wndChapterButton.Create(this, _T("@"), 385, 530, 405, 555);
	m_wndGroupLabel.Create(this, _T("Group"), 410, 530, 490, 555);
	m_wndGroup.Create(this,495, 530, 775, 555); 
	m_wndGroupButton.Create(this, _T("@"), 780, 530, 800, 555);
	m_wndIDLabel.Create(this, _T("ID"), 10, 560, 90, 585);
	m_wndID.Create(this,95, 560, 205, 585); 
	m_wndNameLabel.Create(this, _T("Name"), 210, 560, 290, 585);
	m_wndName.Create(this,295, 560, 800, 585); 
	m_wndAdd.Create(this, _T("&Add"), 435, 595, 505, 620);
	m_wndEdit.Create(this, _T("&Edit"), 510, 595, 580, 620);
	m_wndDelete.Create(this, _T("&Delete"), 585, 595, 655, 620);
	m_wndSave.Create(this, _T("&Save"), 660, 595, 730, 620);
	m_wndCancel.Create(this, _T("&Cancel"), 735, 595, 805, 620);

}
void CHMSICD10Setup::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndChapterButton.ModifyStyle(WS_TABSTOP, 0);
	m_wndGroupButton.ModifyStyle(WS_TABSTOP, 0);

	m_wndChapterFillter.LimitText(81);
	m_wndNameFillter.SetLimitText(81);

	//m_wndChapter.SetCheckValue(true);
//	m_wndChapter.SetReadOnly(true);	
//	m_wndGroup.SetCheckValue(true);
	m_wndID.SetLimitText(13);
	m_wndID.SetCheckValue(true);
	m_wndID.ModifyStyle(0, ES_UPPERCASE);
	m_wndName.SetLimitText(254);
	m_wndName.SetCheckValue(true);

	m_wndChapterFillter.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndChapterFillter.InsertColumn(1, _T("Name"), CFMT_TEXT, 350);


	m_wndList.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(1, _T("Name"), CFMT_TEXT, 350);
	m_wndList.InsertColumn(2, _T("Chapter ID"), CFMT_TEXT, 200);
	m_wndList.InsertColumn(3, _T("Group ID"), CFMT_TEXT, 190);


	m_wndChapter.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndChapter.InsertColumn(1, _T("Name"), CFMT_TEXT, 350);


	m_wndGroup.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndGroup.InsertColumn(1, _T("Name"), CFMT_TEXT, 350);

	m_hms_icdextraTbl.SetTableName(_T("hms_icdextra"));
	m_hms_icdextraTbl.AddField(_T("hi_createdby"), dfText, 15); 
	m_hms_icdextraTbl.AddField(_T("hi_createddate"), dfDateTime); 
	m_hms_icdextraTbl.AddField(_T("hi_updatedby"), dfText, 15); 
	m_hms_icdextraTbl.AddField(_T("hi_updateddate"), dfDateTime); 
	m_hms_icdextraTbl.AddField(_T("hi_icd"), dfText, 13); 
	m_hms_icdextraTbl.AddField(_T("hi_groupid"), dfInteger); 
	m_hms_icdextraTbl.AddField(_T("hi_chapterid"), dfInteger); 
	m_hms_icdextraTbl.AddField(_T("hi_name"), dfText, 254); 

}
void CHMSICD10Setup::OnSetWindowEvents(){
	m_wndChapterFillter.SetEvent(WE_SELENDOK, _OnChapterFillterSelendokFnc);
	//m_wndChapterFillter.SetEvent(WE_SETFOCUS, _OnChapterFillterSetfocusFnc);
	//m_wndChapterFillter.SetEvent(WE_KILLFOCUS, _OnChapterFillterKillfocusFnc);
	m_wndChapterFillter.SetEvent(WE_SELCHANGE, _OnChapterFillterSelectChangeFnc);
	m_wndChapterFillter.SetEvent(WE_LOADDATA, _OnChapterFillterLoadDataFnc);
	//m_wndChapterFillter.SetEvent(WE_ADDNEW, _OnChapterFillterAddNewFnc);
	//m_wndNameFillter.SetEvent(WE_CHANGE, _OnNameFillterChangeFnc);
	//m_wndNameFillter.SetEvent(WE_SETFOCUS, _OnNameFillterSetfocusFnc);
	//m_wndNameFillter.SetEvent(WE_KILLFOCUS, _OnNameFillterKillfocusFnc);
	m_wndNameFillter.SetEvent(WE_CHECKVALUE, _OnNameFillterCheckValueFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndChapter.SetEvent(WE_SELENDOK, _OnChapterSelendokFnc);
	//m_wndChapter.SetEvent(WE_SETFOCUS, _OnChapterSetfocusFnc);
	//m_wndChapter.SetEvent(WE_KILLFOCUS, _OnChapterKillfocusFnc);
	m_wndChapter.SetEvent(WE_SELCHANGE, _OnChapterSelectChangeFnc);
	m_wndChapter.SetEvent(WE_LOADDATA, _OnChapterLoadDataFnc);
	//m_wndChapter.SetEvent(WE_ADDNEW, _OnChapterAddNewFnc);
	m_wndGroup.SetEvent(WE_SELENDOK, _OnGroupSelendokFnc);
	//m_wndGroup.SetEvent(WE_SETFOCUS, _OnGroupSetfocusFnc);
	//m_wndGroup.SetEvent(WE_KILLFOCUS, _OnGroupKillfocusFnc);
	m_wndGroup.SetEvent(WE_SELCHANGE, _OnGroupSelectChangeFnc);
	m_wndGroup.SetEvent(WE_LOADDATA, _OnGroupLoadDataFnc);
	//m_wndGroup.SetEvent(WE_ADDNEW, _OnGroupAddNewFnc);
	//m_wndID.SetEvent(WE_CHANGE, _OnIDChangeFnc);
	//m_wndID.SetEvent(WE_SETFOCUS, _OnIDSetfocusFnc);
	//m_wndID.SetEvent(WE_KILLFOCUS, _OnIDKillfocusFnc);
	m_wndID.SetEvent(WE_CHECKVALUE, _OnIDCheckValueFnc);
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndChapterButton.SetEvent(WE_CLICK, _OnChapterButtonSelectFnc);
	m_wndGroupButton.SetEvent(WE_CLICK, _OnGroupButtonSelectFnc);

	//load data when window initialized;
	//OnHMSICD10ListLoadData();
	SetMode(VM_NONE);
}
void CHMSICD10Setup::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndChapterFillter.GetDlgCtrlID(), m_szChapterFillterKey);
	DDX_Text(pDX, m_wndNameFillter.GetDlgCtrlID(), m_szNameFillter);
	DDX_TextEx(pDX, m_wndChapter.GetDlgCtrlID(), m_szChapterKey);
	DDX_TextEx(pDX, m_wndGroup.GetDlgCtrlID(), m_szGroupKey);
	DDX_Text(pDX, m_wndID.GetDlgCtrlID(), m_szID);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);

}
void CHMSICD10Setup::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szID;
	szID = m_szID;
	SetDefaultValues();
	SetMode(VM_NONE);
	if(!szID.IsEmpty())
	{
		szSQL.Format(_T("SELECT * FROM hms_icdextra WHERE hi_icd='%s' "), szID);
		rs.ExecSQL(szSQL);
		if(rs.GetRecordCount()){
			rs.GetValue(_T("hi_icd"), m_szID);
			rs.GetValue(_T("hi_groupid"), m_szGroupKey);
			rs.GetValue(_T("hi_chapterid"), m_szChapterKey);
			rs.GetValue(_T("hi_name"), m_szName);
			SetMode(VM_VIEW);
		}
	}
	UpdateData(false);

}
void CHMSICD10Setup::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	if(GetMode() == VM_ADD){
		m_hms_icdextraTbl.SetValue(_T("hi_createdby"), pMF->GetCurrentUser());
		m_hms_icdextraTbl.SetValue(_T("hi_createddate"), pMF->GetSysDateTime());
	}
	m_hms_icdextraTbl.SetValue(_T("hi_updatedby"), pMF->GetCurrentUser());
	m_hms_icdextraTbl.SetValue(_T("hi_updateddate"), pMF->GetSysDateTime());

	m_hms_icdextraTbl.SetValue(_T("hi_icd"), m_szID);
	m_hms_icdextraTbl.SetValue(_T("hi_groupid"), m_szGroupKey);
	m_hms_icdextraTbl.SetValue(_T("hi_chapterid"), m_szChapterKey);
	m_hms_icdextraTbl.SetValue(_T("hi_name"), m_szName);

}
void CHMSICD10Setup::SetDefaultValues(){

	m_szChapterFillterKey.Empty();
	m_szNameFillter.Empty();
	m_szChapterKey.Empty();
	m_szGroupKey.Empty();
	m_szID.Empty();
	m_szName.Empty();

}
int CHMSICD10Setup::SetMode(int nMode){ 
 		int nOldMode = GetMode(); 
 		CGuiDialog::SetMode(nMode); 
 		CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
		m_wndChapter.SetReadOnly(true);
  		switch(nMode){ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 3, 4, -1); 
			if(m_szGroupKey.IsEmpty())
				m_wndGroup.SetFocus();
			else
				m_wndID.SetFocus();
			m_szID.Empty();
			m_szName.Empty();
			
			UpdateData(false);
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 3, 4, -1); 
			m_wndID.EnableWindow(false);
			m_wndName.SetFocus();
 			break; 
 		case VM_VIEW: 
 			EnableControls(FALSE); 
 			EnableButtons(FALSE, 3, 4, -1); 
 			break; 
 		case VM_NONE: 
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 0, -1); 
 			SetDefaultValues(); 
 			break; 
 		}; 
		m_wndChapterFillter.EnableWindow(true);
		m_wndNameFillter.EnableWindow(true);
 		UpdateData(FALSE); 
 		return nOldMode; 
 	} 
int CHMSICD10Setup::OnChapterFillterSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSICD10Setup::OnChapterFillterSelendok(){
	
	OnListLoadData();
	 return 0;
}
/*int CHMSICD10Setup::OnChapterFillterSetfocus(){
	 return 0;
}*/
/*int CHMSICD10Setup::OnChapterFillterKillfocus(){
	 return 0;
}*/
int CHMSICD10Setup::OnChapterFillterLoadData(){
CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndChapter.IsSearchKey()){
		szWhere.Format(_T("WHERE hic_id=%ld"), ToLong(m_szChapterKey));
	};
	szSQL.Format(_T("SELECT hic_id as id, hic_name as name FROM hms_icdchapter %s ORDER BY hic_id "), szWhere);
	m_wndChapterFillter.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndChapterFillter.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*int CHMSICD10Setup::OnChapterFillterAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} */
/*int CHMSICD10Setup::OnNameFillterChange(){
	return 0;
} */
/*int CHMSICD10Setup::OnNameFillterSetfocus(){
	return 0;
} */
/*int CHMSICD10Setup::OnNameFillterKillfocus(){
	return 0;
} */
int CHMSICD10Setup::OnNameFillterCheckValue(){
	UpdateData(true);
	OnListLoadData();
	m_wndChapterFillter.SetFocus();
	return 0;
} 
int CHMSICD10Setup::OnListDblClick(){
	 return 0;
} 
int CHMSICD10Setup::OnListSelectChange(int nOldItem, int nNewItem){
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0) 
		return -1;
	m_szID = m_wndList.GetItemText(nSel, 0);
	GetDataToScreen();
	 return 0;
} 
int CHMSICD10Setup::OnListDeleteItem(){
	OnDeleteHMSICD10();
	 return 0;
} 
int CHMSICD10Setup::OnListLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	UpdateData(true);
	m_wndList.BeginLoad(); 
	int nCount = 0;

	szWhere.Empty();
	if(!m_szChapterFillterKey.IsEmpty())
		szWhere.Format(_T("WHERE hi_chapterid=%ld"), ToLong(m_szChapterFillterKey));

	if(!m_szNameFillter.IsEmpty()){
		if(!szWhere.IsEmpty())
			szWhere.AppendFormat(_T(" AND lower(hi_name) like(chr(37)||lower('%s')||chr(37)) "), m_szNameFillter);
		else
			szWhere.AppendFormat(_T(" WHERE lower(hi_name) like(chr(37)||lower('%s')||chr(37)) "), m_szNameFillter);

	}
	szSQL.Format(_T("SELECT hi_icd as id, hi_name as name, ") \
	_T("(SELECT hic_name as name FROM hms_icdchapter where hic_id=hi_chapterid) as chapterid, ") \
	_T(" (SELECT hig_name as name FROM hms_icdgroup WHERE hig_id=hi_groupid) as groupid ") \
	_T(" FROM hms_icdextra %s ORDER BY hi_icd "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), 
			rs.GetValue(_T("chapterid")), 
			rs.GetValue(_T("groupid")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;

}
int CHMSICD10Setup::OnChapterSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSICD10Setup::OnChapterSelendok(){
	 return 0;
}
/*int CHMSICD10Setup::OnChapterSetfocus(){
	 return 0;
}*/
/*int CHMSICD10Setup::OnChapterKillfocus(){
	 return 0;
}*/
int CHMSICD10Setup::OnChapterLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndChapter.IsSearchKey()){
		szWhere.Format(_T("WHERE hic_id=%d"), ToInt(m_szChapterKey));
	};
	szSQL.Format(_T("SELECT hic_id as id, hic_name as name FROM hms_icdchapter %s ORDER BY hic_id "), szWhere);
	m_wndChapter.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndChapter.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*int CHMSICD10Setup::OnChapterAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} */
int CHMSICD10Setup::OnGroupSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSICD10Setup::OnGroupSelendok(){
	 return 0;
}
/*int CHMSICD10Setup::OnGroupSetfocus(){
	 return 0;
}*/
/*int CHMSICD10Setup::OnGroupKillfocus(){
	 return 0;
}*/
int CHMSICD10Setup::OnGroupLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndGroup.IsSearchKey()){
		szWhere.Format(_T("WHERE hig_id=%ld "), ToLong(m_szGroupKey));
	};
	szSQL.Format(_T("SELECT hig_id as id, hig_name as name FROM hms_icdgroup %s ORDER BY hig_id "), szWhere);
	m_wndGroup.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndGroup.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*int CHMSICD10Setup::OnGroupAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} */
/*int CHMSICD10Setup::OnIDChange(){
	return 0;
} */
/*int CHMSICD10Setup::OnIDSetfocus(){
	return 0;
} */
/*int CHMSICD10Setup::OnIDKillfocus(){
	return 0;
} */
int CHMSICD10Setup::OnIDCheckValue(){
	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	if(GetMode() != VM_ADD)
		return 0;

	if(m_szID.IsEmpty())
		return -1;
	szSQL.Format(_T("SELECT COUNT(*) FROM hms_icdextra WHERE hi_icd='%s' "), m_szID);
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() > 0)
	{
		m_wndID.SetToolTipMessage(_T("The ID is existing in the database "));
		return -1;
	}
	return 0;
} 
/*int CHMSICD10Setup::OnNameChange(){
	return 0;
} */
/*int CHMSICD10Setup::OnNameSetfocus(){
	return 0;
} */
/*int CHMSICD10Setup::OnNameKillfocus(){
	return 0;
} */
int CHMSICD10Setup::OnNameCheckValue(){
	return 0;
} 
int CHMSICD10Setup::OnAddSelect(){
	OnAddHMSICD10();
	 return 0;
} 
int CHMSICD10Setup::OnEditSelect(){
	OnEditHMSICD10();
	 return 0;
} 
int CHMSICD10Setup::OnDeleteSelect(){
	OnDeleteHMSICD10();
	 return 0;
} 
int CHMSICD10Setup::OnSaveSelect(){
	OnSaveHMSICD10();
	 return 0;
} 
int CHMSICD10Setup::OnCancelSelect(){
	OnCancelHMSICD10();
	return 0;
} 
int CHMSICD10Setup::OnChapterButtonSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	
	 return 0;
} 

int CHMSICD10Setup::OnGroupButtonSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//CHMSICD10GroupSetup dlg(this);
	//if(dlg.DoModal() == IDOK){
	//	m_szGroupKey = ToString(dlg.m_nID);
	//	m_wndGroup.SetCurrent(0, m_szGroupKey);
	//}
	return 0;
} 
int CHMSICD10Setup::OnAddHMSICD10(){ 
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	SetMode(VM_ADD); 
	return 0; 
} 
int CHMSICD10Setup::OnEditHMSICD10(){ 
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	SetMode(VM_EDIT);  
	return 0; 
} 
int CHMSICD10Setup::OnDeleteHMSICD10(){ 
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
 	CString szSQL, tmpStr;
	tmpStr.Format(_T("This is items icd on active. Can not delete items ICD [%s]."), m_szID);

 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
	szSQL.Format(_T(" SELECT count(*) FROM hms_doc WHERE hd_icd='%s' "), m_szID);
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() > 0)
	{
		ShowMessageBox(tmpStr, MB_YESNO|MB_ICONWARNING|MB_OK); 
		return -1;
	}
	
 	szSQL.Format(_T("DELETE FROM  hms_icdextra WHERE  hi_icd='%s'  "), m_szID); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret >= 0){ 
 		SetMode(VM_NONE); 
 		OnCancelHMSICD10(); 
		m_wndList.DeleteItem(m_wndList.GetCurSel());
 	} 
	return 0;
} 
int CHMSICD10Setup::OnSaveHMSICD10(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		szSQL = m_hms_icdextraTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE hi_icd='%s' "), m_szID); 
 		szSQL = m_hms_icdextraTbl.GetUpdateSQL(_T("")); 
 		szSQL += szWhere; 
 	} 
 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		OnHMSICD10ListLoadData(); 
 		SetMode(VM_VIEW); 
		m_wndAdd.SetFocus();
 	} 
 	else 
 	{ 
 	} 
 	return ret; 

}
int CHMSICD10Setup::OnCancelHMSICD10(){
 	if(GetMode() == VM_EDIT) 
 	{ 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 		SetMode(VM_NONE); 
 	} 
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
 	 
 	return 0;
} 
int CHMSICD10Setup::OnHMSICD10ListLoadData(){
	OnListLoadData();
	return 0;
}

void CHMSICD10Setup::Refresh(){
	static bool bLoaded = false;
	if(!bLoaded){
		OnListLoadData();
		bLoaded = true;
	}
}