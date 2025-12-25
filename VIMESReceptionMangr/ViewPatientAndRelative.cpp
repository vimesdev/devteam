#include "ViewPatientAndRelative.h"
#include "HMSMainFrame.h"
static long _OnPatientListLoadDataFnc(CWnd *pWnd){
	return ((CViewPatientAndRelative*)pWnd)->OnPatientListLoadData();
} 
static void _OnPatientListDblClickFnc(CWnd *pWnd){
	((CViewPatientAndRelative*)pWnd)->OnPatientListDblClick();
} 
static void _OnPatientListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CViewPatientAndRelative*)pWnd)->OnPatientListSelectChange(nOldItem, nNewItem);
} 
static int _OnPatientListDeleteItemFnc(CWnd *pWnd){
	 return ((CViewPatientAndRelative*)pWnd)->OnPatientListDeleteItem();
} 
static long _OnRelativeListLoadDataFnc(CWnd *pWnd){
	return ((CViewPatientAndRelative*)pWnd)->OnRelativeListLoadData();
} 
static void _OnRelativeListDblClickFnc(CWnd *pWnd){
	((CViewPatientAndRelative*)pWnd)->OnRelativeListDblClick();
} 
static void _OnRelativeListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CViewPatientAndRelative*)pWnd)->OnRelativeListSelectChange(nOldItem, nNewItem);
} 
static int _OnRelativeListDeleteItemFnc(CWnd *pWnd){
	 return ((CViewPatientAndRelative*)pWnd)->OnRelativeListDeleteItem();
} 
static void _OnOKSelectFnc(CWnd *pWnd){
	CViewPatientAndRelative *pVw = (CViewPatientAndRelative *)pWnd;
	pVw->OnOKSelect();

} 
static int _OnAddViewPatientAndRelativeFnc(CWnd *pWnd){
	 return ((CViewPatientAndRelative*)pWnd)->OnAddViewPatientAndRelative();
} 
static int _OnEditViewPatientAndRelativeFnc(CWnd *pWnd){
	 return ((CViewPatientAndRelative*)pWnd)->OnEditViewPatientAndRelative();
} 
static int _OnDeleteViewPatientAndRelativeFnc(CWnd *pWnd){
	 return ((CViewPatientAndRelative*)pWnd)->OnDeleteViewPatientAndRelative();
} 
static int _OnSaveViewPatientAndRelativeFnc(CWnd *pWnd){
	 return ((CViewPatientAndRelative*)pWnd)->OnSaveViewPatientAndRelative();
} 
static int _OnCancelViewPatientAndRelativeFnc(CWnd *pWnd){
	 return ((CViewPatientAndRelative*)pWnd)->OnCancelViewPatientAndRelative();
} 
CViewPatientAndRelative::CViewPatientAndRelative(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CViewPatientAndRelative::~CViewPatientAndRelative()
{
}
void CViewPatientAndRelative::OnCreateComponents()
{
	m_wndThongtinbenhnhan.Create(this, _T("THÔNG TIN NGƯỜI NHÀ"), 5, 5, 759, 154);
	m_wndThongtinnguoinha.Create(this, _T("THÔNG TIN BỆNH NHÂN"), 5, 161, 759, 329);
	m_wndPatientList.Create(this,11, 29, 754, 148); 
	m_wndRelativeList.Create(this,11, 186, 754, 324); 
	m_wndOK.Create(this, _T("&OK"), 674, 335, 754, 360);

}
void CViewPatientAndRelative::OnInitializeComponents()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

	m_wndPatientList.InsertColumn(0, _T("Số hồ sơ"), CFMT_NUMBER, 70);
	m_wndPatientList.InsertColumn(1, _T("Họ và tên"), CFMT_TEXT, 200);
	m_wndPatientList.InsertColumn(2, _T("Năm sinh"), CFMT_TEXT, 50);
	m_wndPatientList.InsertColumn(3, _T("Giới"), CFMT_TEXT, 50);
	m_wndPatientList.InsertColumn(4, _T("Địa chỉ"), CFMT_TEXT, 200);
	m_wndPatientList.InsertColumn(5, _T("Khoa ĐT"), CFMT_TEXT, 80);
	m_wndPatientList.InsertColumn(6, _T("Số ĐT"), CFMT_TEXT, 100);

	m_wndRelativeList.InsertColumn(0, _T("Số hồ sơ"), CFMT_NUMBER, 70);
	m_wndRelativeList.InsertColumn(1, _T("Họ và tên"), CFMT_TEXT, 200);
	m_wndRelativeList.InsertColumn(2, _T("Năm sinh"), CFMT_TEXT, 50);
	m_wndRelativeList.InsertColumn(3, _T("Giới"), CFMT_TEXT, 50);
	m_wndRelativeList.InsertColumn(4, _T("Địa chỉ"), CFMT_TEXT, 200);
	m_wndRelativeList.InsertColumn(5, _T("Khoa ĐT"), CFMT_TEXT, 80);	
	m_wndRelativeList.InsertColumn(6, _T("Số ĐT"), CFMT_TEXT, 100);


}
void CViewPatientAndRelative::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndPatientList.SetEvent(WE_SELCHANGE, _OnPatientListSelectChangeFnc);
	m_wndPatientList.SetEvent(WE_LOADDATA, _OnPatientListLoadDataFnc);
	m_wndPatientList.SetEvent(WE_DBLCLICK, _OnPatientListDblClickFnc);
	m_wndPatientList.AddEvent(1, _T("Delete"), _OnPatientListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndRelativeList.SetEvent(WE_SELCHANGE, _OnRelativeListSelectChangeFnc);
	m_wndRelativeList.SetEvent(WE_LOADDATA, _OnRelativeListLoadDataFnc);
	m_wndRelativeList.SetEvent(WE_DBLCLICK, _OnRelativeListDblClickFnc);
	m_wndRelativeList.AddEvent(1, _T("Delete"), _OnRelativeListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndOK.SetEvent(WE_CLICK, _OnOKSelectFnc);
	OnPatientListLoadData();
	OnRelativeListLoadData();
	SetMode(VM_NONE);

}
void CViewPatientAndRelative::OnDoDataExchange(CDataExchange* pDX){

}
void CViewPatientAndRelative::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	}
	else
	{
			
	}

}
void CViewPatientAndRelative::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CViewPatientAndRelative::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CViewPatientAndRelative::SetDefaultValues(){


}
int CViewPatientAndRelative::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
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
void CViewPatientAndRelative::OnPatientListDblClick(){
	
} 
void CViewPatientAndRelative::OnPatientListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CViewPatientAndRelative::OnPatientListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CViewPatientAndRelative::OnPatientListLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szActive;
	m_wndPatientList.BeginLoad(); 
	m_wndPatientList.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T(" SELECT DISTINCT hd_docno AS docno,") \
				_T("   hd_patientno           AS patientno,") \
				_T(" hcr_admitdate as admitdate, ") \
				_T("   CASE") \
				_T("     WHEN htr_deptid IS NOT NULL") \
				_T("     THEN HMS_GET_LASTDEPT(hd_docno) ELSE HD_ENDDEPT") \
				_T("   END AS deptid,") \
				_T("   trim( hp_surname") \
				_T("   ||' '") \
				_T("   ||hp_midname") \
				_T("   ||' '") \
				_T("   ||hp_firstname)                                 AS pname,") \
				_T("   TO_CHAR(hp_birthdate, 'YYYY')                   AS yob,") \
				_T("   hms_getsex(hp_sex)                              AS gender,") \
				_T("   hms_getaddress(nvl(hd_provid, hp_provid), nvl(hd_distid, hp_distid), nvl(hd_villid, hp_villid)) AS address,") \
				_T("   hd_telephone") \
				_T("   ||','") \
				_T("   ||hd_contacttel AS phone") \
				_T(" FROM hms_patient") \
				_T(" LEFT JOIN hms_doc") \
				_T(" ON(hd_patientno = hp_patientno)") \
				_T(" LEFT JOIN hms_clinical_record") \
				_T(" ON(hcr_docno = hd_docno)") \
				_T(" LEFT JOIN hms_treatment_record") \
				_T(" ON(hcr_docno  = htr_docno)") \
				_T(" WHERE hd_docno=%ld") \
				_T(" ORDER BY pname"), pMF->m_nDocumentNo);

				nCount = rs.ExecSQL(szSQL);

				while(!rs.IsEOF())
	{ 
		int nItem = m_wndPatientList.AddItems
			(
			rs.GetValue(_T("docno")), 
			rs.GetValue(_T("pname")),
			rs.GetValue(_T("yob")),
			rs.GetValue(_T("gender")),
			rs.GetValue(_T("address")),
			rs.GetValue(_T("deptid")),
			rs.GetValue(_T("phone")),NULL);
		
		rs.MoveNext();
	}
	m_wndPatientList.EndLoad();					
	return 0;
}
void CViewPatientAndRelative::OnRelativeListDblClick(){
	
} 
void CViewPatientAndRelative::OnRelativeListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CViewPatientAndRelative::OnRelativeListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CViewPatientAndRelative::OnRelativeListLoadData()
{
CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szActive;
	m_wndRelativeList.BeginLoad(); 
	m_wndRelativeList.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T(" select RE_RELATIVENO as docno,") \
				_T(" HMS_GET_LASTDEPT(RE_RELATIVENO) as deptid,") \
				_T("  trim( hp_surname") \
				_T("   ||' '") \
				_T("   ||hp_midname") \
				_T("   ||' '") \
				_T("   ||hp_firstname)                                 AS pname,") \
				_T("   TO_CHAR(hp_birthdate, 'YYYY')                   AS yob,") \
				_T("   hms_getsex(hp_sex)                              AS gender,") \
				_T("   hms_getaddress(nvl(hd_provid, hp_provid), nvl(hd_distid, hp_distid), nvl(hd_villid, hp_villid)) AS address,") \
				_T("    hd_telephone") \
				_T("   ||','") \
				_T("   ||hd_contacttel AS phone") \
				_T(" from RM_RELATIVE_INFOR") \
				_T(" left join hms_doc ON (RE_RELATIVENO=hd_docno)") \
				_T(" left join hms_patient ON (HD_PATIENTNO=HP_PATIENTNO)") \
				_T(" where RE_PATIENTNO=%ld"), pMF->m_nDocumentNo);

				nCount = rs.ExecSQL(szSQL);
				//_msg(_T("%s"), szSQL);

				while(!rs.IsEOF())
	{ 
		int nItem = m_wndRelativeList.AddItems
			(
			rs.GetValue(_T("docno")), 
			rs.GetValue(_T("pname")),
			rs.GetValue(_T("yob")),
			rs.GetValue(_T("gender")),
			rs.GetValue(_T("address")),
			rs.GetValue(_T("deptid")),
			rs.GetValue(_T("phone")),NULL);
		
		rs.MoveNext();
	}
	m_wndRelativeList.EndLoad();					
	return 0;
}
void CViewPatientAndRelative::OnOKSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CViewPatientAndRelative::OnAddViewPatientAndRelative(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CViewPatientAndRelative::OnEditViewPatientAndRelative(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CViewPatientAndRelative::OnDeleteViewPatientAndRelative(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
 	szSQL.Format(_T("DELETE FROM  WHERE  AND") );
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
 		SetMode(VM_NONE);
 		OnCancelViewPatientAndRelative();
 	}
	return 0;
}
int CViewPatientAndRelative::OnSaveViewPatientAndRelative(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
 		//szSQL = m_tblTbl.GetInsertSQL();
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
 		//OnViewPatientAndRelativeListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CViewPatientAndRelative::OnCancelViewPatientAndRelative(){
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
int CViewPatientAndRelative::OnViewPatientAndRelativeListLoadData(){
	return 0;
}
