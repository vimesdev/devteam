#include "HMSHospitals.h"
//#include "stdafx.h"
#include "MainFrm.h"
#include "HMSTransferHospitalSetup.h"

static void _OnHostpitalNameFnc(CWnd *pWnd){
	((CHMSHospitalListSetup* )pWnd)->OnHostpitallSearch();
}
static void _OnDistSearchSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSHospitalListSetup* )pWnd)->OnDistSearchSelectChange(nOldItemSel, nNewItemSel);
} 
static int _OnProvillSearchLoadDataFnc(CWnd *pWnd){
	 return ((CHMSHospitalListSetup*)pWnd)->OnSearchProvillLoadData();
} 
static int _OnProvillSearchSelectChangeFnc(CWnd *pWnd,int nOldItemSel, int nNewItemSel){
	 return ((CHMSHospitalListSetup*)pWnd)->OnProvillSelectChange(nOldItemSel, nNewItemSel);
}

static void _OnDistrictSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSHospitalListSetup* )pWnd)->OnDistrictSelectChange(nOldItemSel, nNewItemSel);
} 
static int _OnListLoadDataFnc(CWnd *pWnd){
	 return ((CHMSHospitalListSetup*)pWnd)->OnListLoadData();
} 
static int _OnListDblClickFnc(CWnd *pWnd){
	 return ((CHMSHospitalListSetup*)pWnd)->OnListDblClick();
} 

static int _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	 return ((CHMSHospitalListSetup*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSHospitalListSetup*)pWnd)->OnListDeleteItem();
} 
static int _OnDistSearchLoadDataFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	return ((CHMSHospitalListSetup*)pWnd)->OnSearchDistLoadData();
}

static long _OnDistrictLoadDataFnc(CWnd *pWnd){
	return ((CHMSHospitalListSetup *)pWnd)->OnDistLoadData();
}

/*static int _OnIDChangeFnc(CWnd *pWnd){
	return ((CHMSHospitalListSetup *)pWnd)->OnIDChange();
} */
/*static int _OnIDSetfocusFnc(CWnd *pWnd){
	return ((CHMSHospitalListSetup *)pWnd)->OnIDKillfocus();} */ 
/*static int _OnIDKillfocusFnc(CWnd *pWnd){
	return ((CHMSHospitalListSetup *)pWnd)->OnIDKillfocus();
} */
static int _OnIDCheckValueFnc(CWnd *pWnd){
	return ((CHMSHospitalListSetup *)pWnd)->OnIDCheckValue();
} 
/*static int _OnNameChangeFnc(CWnd *pWnd){
	return ((CHMSHospitalListSetup *)pWnd)->OnNameChange();
} */
/*static int _OnNameSetfocusFnc(CWnd *pWnd){
	return ((CHMSHospitalListSetup *)pWnd)->OnNameKillfocus();} */ 
/*static int _OnNameKillfocusFnc(CWnd *pWnd){
	return ((CHMSHospitalListSetup *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSHospitalListSetup *)pWnd)->OnNameCheckValue();
} 
static int _OnTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	 return ((CHMSHospitalListSetup* )pWnd)->OnTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static int _OnTypeSelendokFnc(CWnd *pWnd){
	 return ((CHMSHospitalListSetup *)pWnd)->OnTypeSelendok();
}
/*static int _OnTypeSetfocusFnc(CWnd *pWnd){
	 return ((CHMSHospitalListSetup *)pWnd)->OnTypeKillfocus();
}*/
/*static int _OnTypeKillfocusFnc(CWnd *pWnd){
	 return ((CHMSHospitalListSetup *)pWnd)->OnTypeKillfocus();
}*/
static int _OnTypeLoadDataFnc(CWnd *pWnd){
	 return ((CHMSHospitalListSetup *)pWnd)->OnTypeLoadData();
}
/*static int _OnTypeAddNewFnc(CWnd *pWnd){
	 return ((CHMSHospitalListSetup *)pWnd)->OnTypeAddNew();
}*/
static int _OnProvillSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	 return ((CHMSHospitalListSetup* )pWnd)->OnProvillSelectChange(nOldItemSel, nNewItemSel);
} 
static int _OnProvillSelendokFnc(CWnd *pWnd){
	 return ((CHMSHospitalListSetup *)pWnd)->OnProvillSelendok();
}
static int _OnProvillSearchSelendokFnc(CWnd *pWnd){
	 return ((CHMSHospitalListSetup *)pWnd)->OnProvillSearchSelendok();
}


static int _OnDistSearchSelendokFnc(CWnd *pWnd){
	 return ((CHMSHospitalListSetup *)pWnd)->OnDistSearchSelendok();
}


/*static int _OnProvillSetfocusFnc(CWnd *pWnd){
	 return ((CHMSHospitalListSetup *)pWnd)->OnProvillKillfocus();
}*/
/*static int _OnProvillKillfocusFnc(CWnd *pWnd){
	 return ((CHMSHospitalListSetup *)pWnd)->OnProvillKillfocus();
}*/
static int _OnProvillLoadDataFnc(CWnd *pWnd){
	 return ((CHMSHospitalListSetup *)pWnd)->OnProvillLoadData();
}
/*static int _OnProvillAddNewFnc(CWnd *pWnd){
	 return ((CHMSHospitalListSetup *)pWnd)->OnProvillAddNew();
}*/

/*static int _OnInsuranceCodeChangeFnc(CWnd *pWnd){
	return ((CHMSHospitalListSetup *)pWnd)->OnInsuranceCodeChange();
} */
/*static int _OnInsuranceCodeSetfocusFnc(CWnd *pWnd){
	return ((CHMSHospitalListSetup *)pWnd)->OnInsuranceCodeKillfocus();} */ 
/*static int _OnInsuranceCodeKillfocusFnc(CWnd *pWnd){
	return ((CHMSHospitalListSetup *)pWnd)->OnInsuranceCodeKillfocus();
} */
static int _OnInsuranceCodeCheckValueFnc(CWnd *pWnd){
	return ((CHMSHospitalListSetup *)pWnd)->OnInsuranceCodeCheckValue();
} 


static int _OnAddSelectFnc(CWnd *pWnd){
	CHMSHospitalListSetup *pVw = (CHMSHospitalListSetup *)pWnd;
	return pVw->OnAddSelect();
} 
static int _OnEditSelectFnc(CWnd *pWnd){
	CHMSHospitalListSetup *pVw = (CHMSHospitalListSetup *)pWnd;
	return pVw->OnEditSelect();
} 
static int _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSHospitalListSetup *pVw = (CHMSHospitalListSetup *)pWnd;
	return pVw->OnDeleteSelect();
} 
static int _OnSaveSelectFnc(CWnd *pWnd){
	CHMSHospitalListSetup *pVw = (CHMSHospitalListSetup *)pWnd;
	return pVw->OnSaveSelect();
} 
static int _OnCancelSelectFnc(CWnd *pWnd){
	CHMSHospitalListSetup *pVw = (CHMSHospitalListSetup *)pWnd;
	return pVw->OnCancelSelect();
} 
static int _OnAddHMSHospitalsFnc(CWnd *pWnd){
	 return ((CHMSHospitalListSetup*)pWnd)->OnAddHMSHospitals();
} 
static int _OnEditHMSHospitalsFnc(CWnd *pWnd){
	 return ((CHMSHospitalListSetup*)pWnd)->OnEditHMSHospitals();
} 
static int _OnDeleteHMSHospitalsFnc(CWnd *pWnd){
	 return ((CHMSHospitalListSetup*)pWnd)->OnDeleteHMSHospitals();
} 
static int _OnSaveHMSHospitalsFnc(CWnd *pWnd){
	 return ((CHMSHospitalListSetup*)pWnd)->OnSaveHMSHospitals();
} 
static int _OnCancelHMSHospitalsFnc(CWnd *pWnd){
	 return ((CHMSHospitalListSetup*)pWnd)->OnCancelHMSHospitals();
} 
static int _OnSetTransferHospitalFnc(CWnd *pWnd){
	((CHMSHospitalListSetup*)pWnd)->OnSetTransferHospital();
	return 0;
}
static int _OnListSetActiveFnc(CWnd *pWnd){
	((CHMSHospitalListSetup*)pWnd)->OnListSetActive();
	return 0;
}
CHMSHospitalListSetup::CHMSHospitalListSetup(){

	m_nDlgWidth = 815;
	m_nDlgHeight = 620;
	SetDefaultValues();
}
CHMSHospitalListSetup::~CHMSHospitalListSetup(){
}
void CHMSHospitalListSetup::OnCreateComponents(){
	m_wndFilter.Create(this, _T("Filter"), 5, 5, 805, 60);
	m_wndProvillSearchLabel.Create(this, _T("Provill"), 10, 30, 110, 55);
	m_wndProvillSearch.Create(this,115, 30, 275, 55); 
	m_wndDistSearchLabel.Create(this, _T("Dist"), 280, 30, 385, 55);
	m_wndDistSearch.Create(this,390, 30, 560, 55); 
	m_wndHostpitalNameLabel.Create(this, _T("Hostpital Name"), 565, 30, 650, 55);
	m_wndHospitalList.Create(this, _T("Hospital List"), 5, 65, 805, 590);
	m_wndHostpitalName.Create(this,655, 30, 800, 55); 
	m_wndList.Create(this,10, 90, 800, 525); 
	m_wndTypeLabel.Create(this, _T("Type"), 10, 530, 60, 555);
	m_wndType.Create(this,65, 530, 165, 555); 
	m_wndProvillLabel.Create(this, _T("Provill"), 170, 530, 270, 555);
	m_wndProvill.Create(this,275, 530, 470, 555); 
	m_wndDistrictLabel.Create(this, _T("Dist"), 475, 530, 580, 555);
	m_wndDistrict.Create(this,585, 530, 800, 555); 
	m_wndIDLabel.Create(this, _T("ID"), 10, 560, 60, 585);
	m_wndID.Create(this,65, 560, 165, 585); 
	m_wndNameLabel.Create(this, _T("Name"), 170, 559, 270, 584);
	m_wndName.Create(this,275, 560, 800, 585); 
	m_wndAdd.Create(this, _T("&Add"), 435, 595, 505, 620);
	m_wndEdit.Create(this, _T("&Edit"), 510, 595, 580, 620);
	m_wndDelete.Create(this, _T("&Delete"), 585, 595, 655, 620);
	m_wndSave.Create(this, _T("&Save"), 660, 595, 730, 620);
	m_wndCancel.Create(this, _T("&Cancel"), 736, 595, 806, 620);

}
void CHMSHospitalListSetup::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	SetMode(VM_NONE);	
	m_wndID.SetCheckValue(true);
	m_wndName.SetLimitText(81);
	m_wndName.SetCheckValue(true);
	m_wndType.SetCheckValue(true);
	m_wndProvill.SetCheckValue(true);	

	m_wndList.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);
	m_wndList.InsertColumn(2, _T("Provill"), CFMT_TEXT, 150);
	m_wndList.InsertColumn(3, _T("District"), CFMT_TEXT, 150);
	m_wndList.InsertColumn(4, _T("Type"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(5, _T("Active"), CFMT_TEXT, 100);

	m_wndType.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndType.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndProvill.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndProvill.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);


	m_wndProvillSearch.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndProvillSearch.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndDistSearch.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndDistSearch.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndDistrict.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndDistrict.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);

	m_hms_hospitalTbl.SetTableName(_T("hms_hospital"));
	m_hms_hospitalTbl.AddField(_T("hh_createdby"), dfText, 15); 
	m_hms_hospitalTbl.AddField(_T("hh_createddate"), dfDateTime, 4); 
	m_hms_hospitalTbl.AddField(_T("hh_updatedby"), dfText, 15); 
	m_hms_hospitalTbl.AddField(_T("hh_updateddate"), dfDateTime, 4); 
	m_hms_hospitalTbl.AddField(_T("hh_id"), dfText, 11); 
	m_hms_hospitalTbl.AddField(_T("hh_name"), dfText, 81); 
	m_hms_hospitalTbl.AddField(_T("hh_provid"), dfInteger); 
	m_hms_hospitalTbl.AddField(_T("hh_distid"), dfLong);
	m_hms_hospitalTbl.AddField(_T("hh_type"), dfInteger); 
	m_hms_hospitalTbl.AddField(_T("hh_code"), dfText); 

}
void CHMSHospitalListSetup::OnSetWindowEvents(){
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Set Transfer Hospital"), _OnSetTransferHospitalFnc);
	m_wndList.AddEvent(2, _T("Set Active"), _OnListSetActiveFnc);
	//m_wndID.SetEvent(WE_CHANGE, _OnIDChangeFnc);
	//m_wndID.SetEvent(WE_SETFOCUS, _OnIDSetfocusFnc);
	//m_wndID.SetEvent(WE_KILLFOCUS, _OnIDKillfocusFnc);
	m_wndID.SetEvent(WE_CHECKVALUE, _OnIDCheckValueFnc);
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	m_wndType.SetEvent(WE_SELENDOK, _OnTypeSelendokFnc);
	//m_wndType.SetEvent(WE_SETFOCUS, _OnTypeSetfocusFnc);
	//m_wndType.SetEvent(WE_KILLFOCUS, _OnTypeKillfocusFnc);
	m_wndType.SetEvent(WE_SELCHANGE, _OnTypeSelectChangeFnc);
	m_wndType.SetEvent(WE_LOADDATA, _OnTypeLoadDataFnc);
	//m_wndType.SetEvent(WE_ADDNEW, _OnTypeAddNewFnc);
	m_wndProvill.SetEvent(WE_SELENDOK, _OnProvillSelendokFnc);
	//m_wndProvill.SetEvent(WE_SETFOCUS, _OnProvillSetfocusFnc);
	//m_wndProvill.SetEvent(WE_KILLFOCUS, _OnProvillKillfocusFnc);
	m_wndProvill.SetEvent(WE_SELCHANGE, _OnProvillSelectChangeFnc);
	m_wndProvill.SetEvent(WE_LOADDATA, _OnProvillLoadDataFnc);
	//m_wndProvill.SetEvent(WE_ADDNEW, _OnProvillAddNewFnc);
	//m_wndInsuranceCode.SetEvent(WE_CHANGE, _OnInsuranceCodeChangeFnc);
	//m_wndInsuranceCode.SetEvent(WE_SETFOCUS, _OnInsuranceCodeSetfocusFnc);
	//m_wndInsuranceCode.SetEvent(WE_KILLFOCUS, _OnInsuranceCodeKillfocusFnc);
	
	m_wndProvillSearch.SetEvent(WE_LOADDATA, _OnProvillSearchLoadDataFnc);
	m_wndProvillSearch.SetEvent(WE_SELENDOK, _OnProvillSearchSelendokFnc);

	m_wndDistSearch.SetEvent(WE_LOADDATA, _OnDistSearchLoadDataFnc);
	m_wndDistSearch.SetEvent(WE_SELENDOK, _OnDistSearchSelendokFnc);
	m_wndHostpitalName.SetEvent(WE_CHECKVALUE, _OnHostpitalNameFnc);

	m_wndDistrict.SetEvent(WE_LOADDATA, _OnDistrictLoadDataFnc);



	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
/*
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSHospitalsFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSHospitalsFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSHospitalsFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSHospitalsFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSHospitalsFnc, 0, 'T', VK_CONTROL);
*/
	//OnHMSHospitalsListLoadData();
}
void CHMSHospitalListSetup::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndID.GetDlgCtrlID(), m_szID);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_TextEx(pDX, m_wndType.GetDlgCtrlID(), m_szTypeKey);
	DDX_TextEx(pDX, m_wndProvill.GetDlgCtrlID(), m_szProvillKey);
	DDX_TextEx(pDX, m_wndDistrict.GetDlgCtrlID(), m_szDist);
	DDX_TextEx(pDX, m_wndProvillSearch.GetDlgCtrlID(), m_szSearchProvillKey);
	DDX_TextEx(pDX, m_wndDistSearch.GetDlgCtrlID(), m_szSearchDistrit);
	DDX_Text(pDX, m_wndHostpitalName.GetDlgCtrlID(), m_szHostpitallSearch);
}
void CHMSHospitalListSetup::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CString szSQL, szID;
	CRecord rs(&pMF->m_db);
	szID = m_szID;
	SetDefaultValues();
	szSQL.Format(_T("SELECT * FROM hms_hospital WHERE trim(hh_id)=trim('%s') "), szID);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF()){
		rs.GetValue(_T("hh_id"), m_szID);
			m_szOldID = m_szID;
			rs.GetValue(_T("hh_name"), m_szName);
			rs.GetValue(_T("hh_provid"), m_szProvillKey);
			rs.GetValue(_T("hh_distid"), m_szDist);
			rs.GetValue(_T("hh_type"), m_szTypeKey);
			rs.GetValue(_T("hh_code"), m_szInsuranceCode);
			SetMode(VM_VIEW);
	}
	else
		SetMode(VM_NONE);
}
void CHMSHospitalListSetup::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	m_hms_hospitalTbl.SetValue(_T("hh_createdby"), pMF->GetCurrentUser());
	m_hms_hospitalTbl.SetValue(_T("hh_createddate"), pMF->GetSysDateTime());
	m_hms_hospitalTbl.SetValue(_T("hh_updatedby"), pMF->GetCurrentUser());
	m_hms_hospitalTbl.SetValue(_T("hh_updateddate"), pMF->GetSysDateTime());
	m_hms_hospitalTbl.SetValue(_T("hh_id"), m_szID);
	m_hms_hospitalTbl.SetValue(_T("hh_name"), m_szName);
	m_hms_hospitalTbl.SetValue(_T("hh_provid"), m_szProvillKey);
	m_hms_hospitalTbl.SetValue(_T("hh_distid"), m_szDist);
	m_hms_hospitalTbl.SetValue(_T("hh_type"), m_szTypeKey);
	m_hms_hospitalTbl.SetValue(_T("hh_code"), m_szID);

}
void CHMSHospitalListSetup::SetDefaultValues(){

	m_szID.Empty();
	m_szName.Empty();
	m_szTypeKey.Empty();
	m_szProvillKey.Empty();
	m_szDist.Empty();
	m_szInsuranceCode.Empty();

}
int CHMSHospitalListSetup::SetMode(int nMode){ 
 		int nOldMode = GetMode(); 
 		CGuiView::SetMode(nMode); 
 		CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
  		switch(nMode){ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 3, 4, -1); 
 			SetDefaultValues(); 			
			m_wndType.SetFocus();
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 3, 4, -1); 
		//	m_wndID.EnableWindow(false);
			m_wndName.SetFocus();
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
		m_wndProvillSearch.EnableWindow(true);
		m_wndDistSearch.EnableWindow(true);
		m_wndHostpitalName.EnableWindow(true);	
 		UpdateData(FALSE); 
 		return nOldMode; 
 	} 
int CHMSHospitalListSetup::OnListDblClick(){
	 return 0;
} 
int CHMSHospitalListSetup::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0)
		return -1;
	m_szID = m_wndList.GetItemText(nSel, 0);
	GetDataToScreen();
	 return 0;
} 
int CHMSHospitalListSetup::OnListDeleteItem(){
	OnDeleteHMSHospitals();
	return 0;
} 
int CHMSHospitalListSetup::OnListLoadData(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, tmpStr;
	szWhere.Empty();
	UpdateData(true);
	if (ToLong(m_szSearchProvillKey) > 0)
	{
		szWhere.Format(_T(" and hh_provid =%ld"), ToInt(m_szSearchProvillKey));

		if(ToLong(m_szSearchDistrit) >0 )
			szWhere.AppendFormat(_T(" and hh_distid =%ld"), ToInt(m_szSearchDistrit));

	}
	
	if (!m_szHostpitallSearch.IsEmpty())
	{
		szWhere.Format(_T(" and upper(hh_name) like(chr(37)||upper('%s')||chr(37))"), m_szHostpitallSearch);
	}
	
	m_wndList.BeginLoad(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT hh_id as id, hh_name as name, hh_isactive active, ") \
					_T("(SELECT sp_name FROM sys_prov WHERE sp_id=hh_provid) AS provill, ") \
					_T("(SELECT sd_name FROM sys_dist WHERE sd_id=hh_distid) AS dist, ") \
					_T("(SELECT ss_desc FROM sys_sel WHERE ss_id='hms_hospital_type' and ss_code=hh_type) as type ") \
					_T("FROM hms_hospital WHERE 0=0 %s ORDER BY hh_id "), szWhere);	;	
	nCount = rs.ExecSQL(szSQL);
_fmsg(_T("%s"), szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), 
			rs.GetValue(_T("provill")), 
			rs.GetValue(_T("dist")), 
			rs.GetValue(_T("type")),
			rs.GetValue(_T("active")), NULL);
		rs.MoveNext();
	}	
	m_wndList.EndLoad(); 
	return nCount;
}
/*int CHMSHospitalListSetup::OnIDChange(){
	return 0;
} */
/*int CHMSHospitalListSetup::OnIDSetfocus(){
	return 0;
} */
/*int CHMSHospitalListSetup::OnIDKillfocus(){
	return 0;
} */
int CHMSHospitalListSetup::OnIDCheckValue(){
	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szID;
	m_wndID.GetWindowText(tmpStr);
	if(GetMode() == VM_ADD)
	{
		szSQL.Format(_T("SELECT COUNT(*) FROM hms_hospital WHERE hh_id='%s' "), tmpStr);
		rs.ExecSQL(szSQL);
		if(rs.GetIntValue() > 0){
			m_wndID.SetToolTipMessage(_T("The id is existing in the database"));
			return -1;
		}
	}
	else if(GetMode() == VM_EDIT && m_szOldID != tmpStr){
		szSQL.Format(_T("SELECT COUNT(*) FROM hms_hospital WHERE hh_id='%s' "), tmpStr);
		rs.ExecSQL(szSQL);
		if(rs.GetIntValue() > 0){
			m_wndID.SetToolTipMessage(_T("The id is existing in the database"));
			return -1;
		}
	}
	
	return 0;
} 
/*int CHMSHospitalListSetup::OnNameChange(){
	return 0;
} */
/*int CHMSHospitalListSetup::OnNameSetfocus(){
	return 0;
} */
/*int CHMSHospitalListSetup::OnNameKillfocus(){
	return 0;
} */
int CHMSHospitalListSetup::OnNameCheckValue(){
	return 0;
} 
int CHMSHospitalListSetup::OnTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	 return 0;
} 
int CHMSHospitalListSetup::OnTypeSelendok(){
	 return 0;
}
/*int CHMSHospitalListSetup::OnTypeSetfocus(){
	 return 0;
}*/
/*int CHMSHospitalListSetup::OnTypeKillfocus(){
	 return 0;
}*/
int CHMSHospitalListSetup::OnTypeLoadData(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndType.IsSearchKey() && ToInt(m_szTypeKey) > 0){
		szWhere.Format(_T(" AND ss_code='%s' "), m_szTypeKey);
	};
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ss_id='hms_hospital_type' %s ORDER BY ss_code "), szWhere);
	m_wndType.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndType.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*int CHMSHospitalListSetup::OnTypeAddNew(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	 return 0;
} */
int CHMSHospitalListSetup::OnProvillSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	//OnListLoadData();
	 return 0;
} 
int CHMSHospitalListSetup::OnProvillSelendok(){
	 return 0;
}
/*int CHMSHospitalListSetup::OnProvillSetfocus(){
	 return 0;
}*/
/*int CHMSHospitalListSetup::OnProvillKillfocus(){
	 return 0;
}*/
int CHMSHospitalListSetup::OnProvillLoadData(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndProvill.IsSearchKey() && ToInt(m_szProvillKey) > 0){
		szWhere.Format(_T(" WHERE sp_id=%ld "), ToLong(m_szProvillKey));
	};
	szSQL.Format(_T("SELECT sp_id as id, sp_name as name FROM sys_prov %s ORDER BY sp_id "), szWhere);
	m_wndProvill.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndProvill.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}

int CHMSHospitalListSetup::OnProvillSearchSelendok(){
	OnListLoadData();
	 return 0;
}

int CHMSHospitalListSetup::OnDistSearchSelendok(){
	OnListLoadData();
	 return 0;
}

int CHMSHospitalListSetup::OnSearchProvillLoadData(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	
	if(m_wndProvillSearch.IsSearchKey() && ToInt(m_szSearchProvillKey) >0){	
			szWhere.Format(_T(" WHERE sp_id=%ld "), ToLong(m_szSearchProvillKey));		
	}
	szSQL.Format(_T("SELECT sp_id as id, sp_name as name FROM sys_prov %s ORDER BY sp_id "), szWhere);
	m_wndProvillSearch.DeleteAllItems(); 
	int nCount = 0;	
	nCount = rs.ExecSQL(szSQL);	
	while(!rs.IsEOF()){ 
		m_wndProvillSearch.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
int CHMSHospitalListSetup::OnSearchDistLoadData(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	UpdateData(true);	
	if(m_wndDistSearch.IsSearchKey() && ToInt(m_szSearchDistrit) > 0){		
			szWhere.Format(_T(" and sd_id=%ld "), ToLong(m_szSearchDistrit));			
	}
	szSQL.Format(_T("SELECT sd_id as id, sd_name as name FROM sys_dist WHERE sd_provid =%ld %s ORDER BY sd_id "), ToLong(m_szSearchProvillKey), szWhere);

	m_wndDistSearch.DeleteAllItems(); 
	int nCount = 0;	
	
	nCount = rs.ExecSQL(szSQL);	
	while(!rs.IsEOF()){ 
		m_wndDistSearch.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
int CHMSHospitalListSetup::OnDistLoadData(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	
	if(m_wndDistrict.IsSearchKey() && ToLong(m_szDist)> 0){
		szWhere.Format(_T(" and sd_id=%ld "), ToLong(m_szDist));
	};
	szSQL.Format(_T("SELECT sd_id as id, sd_name as name FROM sys_dist WHERE sd_provid =%ld %s ORDER BY sd_id "), ToLong(m_szProvillKey), szWhere);
	m_wndDistrict.DeleteAllItems(); 
	int nCount = 0;	
	
	nCount = rs.ExecSQL(szSQL);	
	while(!rs.IsEOF()){ 
		m_wndDistrict.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}



/*int CHMSHospitalListSetup::OnProvillAddNew(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	 return 0;
} */

/*int CHMSHospitalListSetup::OnInsuranceCodeChange(){
	return 0;
} */
/*int CHMSHospitalListSetup::OnInsuranceCodeSetfocus(){
	return 0;
} */
/*int CHMSHospitalListSetup::OnInsuranceCodeKillfocus(){
	return 0;
} */
int CHMSHospitalListSetup::OnInsuranceCodeCheckValue(){
	return 0;
} 


int CHMSHospitalListSetup::OnAddSelect(){
	OnAddHMSHospitals();
	 return 0;
} 
int CHMSHospitalListSetup::OnEditSelect(){
	OnEditHMSHospitals();
	 return 0;
} 
int CHMSHospitalListSetup::OnDeleteSelect(){
	OnDeleteHMSHospitals();
	 return 0;
} 
int CHMSHospitalListSetup::OnSaveSelect(){
	OnSaveHMSHospitals();
	 return 0;
} 
int CHMSHospitalListSetup::OnCancelSelect(){
	OnCancelHMSHospitals();
	 return 0;
} 

int CHMSHospitalListSetup::OnAddHMSHospitals(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	/*if(!pMF->SetStartWork(this,_T("Add HMSHospitals"))) 
 		return -1; */
 	SetMode(VM_ADD); 
	return 0;  
} 
int CHMSHospitalListSetup::OnEditHMSHospitals(){  
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);  
	return 0;  
 
} 
int CHMSHospitalListSetup::OnDeleteHMSHospitals(){ 
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();  	
	CString szSQL, tmpStr; 
	CRecord rs(&pMF->m_db);
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 	

 	szSQL.Format(_T("DELETE FROM  hms_hospital WHERE hh_id='%s' "), m_szID); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret >= 0){ 
 		SetMode(VM_NONE); 
 		OnCancelHMSHospitals(); 
		m_wndList.DeleteItem(m_wndList.GetCurSel());
 	} 
	return 0;
 } 
int CHMSHospitalListSetup::OnSaveHMSHospitals(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		szSQL = m_hms_hospitalTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE hh_id='%s' "), m_szOldID); 
 		szSQL = m_hms_hospitalTbl.GetUpdateSQL(_T("hh_createdby,hh_createddate")); 
 		szSQL += szWhere; 
 	} 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
		if(GetMode() == VM_EDIT){
			szSQL.Format(_T("UPDATE hms_doc SET hd_tohosid='%s' WHERE hd_tohosid='%s' "), m_szID, m_szOldID);
			pMF->ExecSQL(szSQL);
			szSQL.Format(_T("UPDATE hms_doc SET hd_transplaceid='%s' WHERE hd_transplaceid='%s' "), m_szID, m_szOldID);
			pMF->ExecSQL(szSQL);
			szSQL.Format(_T("UPDATE hms_card SET hc_regcode='%s' WHERE hc_regcode='%s' "), m_szID, m_szOldID);
			pMF->ExecSQL(szSQL);
			szSQL.Format(_T("UPDATE hms_clinical_record SET hcr_hospitalid='%s' WHERE hcr_hospitalid='%s' "), m_szID, m_szOldID);
			pMF->ExecSQL(szSQL);
			szSQL.Format(_T("UPDATE hms_clinical_record SET hcr_transhosid='%s' WHERE hcr_transhosid='%s' "), m_szID, m_szOldID);
			pMF->ExecSQL(szSQL);
		}
 		OnHMSHospitalsListLoadData(); 
 		SetMode(VM_VIEW); 
 		m_wndAdd.SetFocus();
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
}
int CHMSHospitalListSetup::OnCancelHMSHospitals(){
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
int CHMSHospitalListSetup::OnHMSHospitalsListLoadData(){
	OnListLoadData();
	return 0;
}

int CHMSHospitalListSetup::OnDistrictSelectChange(int nOldItemSel, int nNewItemSel){
	return 0;
}
int CHMSHospitalListSetup::OnDistSearchSelectChange(int nOldItemSel, int nNewItemSel){
	OnListLoadData();
	return 0;
}
void CHMSHospitalListSetup::OnHostpitallSearch(){	
	OnListLoadData();
}

void CHMSHospitalListSetup::Refresh(){
	static bool bLoaded = false;
	if(!bLoaded){
		OnListLoadData();
		bLoaded = true;
	}
}

void CHMSHospitalListSetup::OnSetTransferHospital(){
	CHMSTransferHospitalSetup dlg(&m_wndList);
	dlg.DoModal();
}

void CHMSHospitalListSetup::OnListSetActive(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	int nSel = m_wndList.GetCurSel();
	if (nSel < 0) return;
	CString szActive = m_wndList.GetItemText(nSel, 5);
	CString szSQL;
	szSQL.Format(_T("UPDATE hms_hospital SET hh_isactive = '%s' WHERE hh_id = '%s'"), szActive==_T("Y")?_T("N"):_T("Y"), m_szID);
	int nRet = pMF->ExecSQL(szSQL);
	if (nRet > 0) OnListLoadData();
}