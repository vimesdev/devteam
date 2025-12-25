#include "ViewRelativeInformation.h"
#include "HMSMainFrame.h"
static long _OnPatientListLoadDataFnc(CWnd *pWnd){
	return ((CViewRelativeInformation*)pWnd)->OnPatientListLoadData();
} 
static void _OnPatientListDblClickFnc(CWnd *pWnd){
	((CViewRelativeInformation*)pWnd)->OnPatientListDblClick();
} 
static void _OnPatientListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CViewRelativeInformation*)pWnd)->OnPatientListSelectChange(nOldItem, nNewItem);
} 
static int _OnPatientListDeleteItemFnc(CWnd *pWnd){
	 return ((CViewRelativeInformation*)pWnd)->OnPatientListDeleteItem();
} 
static long _OnRelativeListLoadDataFnc(CWnd *pWnd){
	return ((CViewRelativeInformation*)pWnd)->OnRelativeListLoadData();
} 
static void _OnRelativeListDblClickFnc(CWnd *pWnd){
	((CViewRelativeInformation*)pWnd)->OnRelativeListDblClick();
} 
static void _OnRelativeListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CViewRelativeInformation*)pWnd)->OnRelativeListSelectChange(nOldItem, nNewItem);
} 
static int _OnRelativeListDeleteItemFnc(CWnd *pWnd){
	 return ((CViewRelativeInformation*)pWnd)->OnRelativeListDeleteItem();
} 
static void _OnXemphieukhamSelectFnc(CWnd *pWnd){
	CViewRelativeInformation *pVw = (CViewRelativeInformation *)pWnd;
	pVw->OnXemphieukhamSelect();
} 
static int _OnAddViewRelativeInformationFnc(CWnd *pWnd){
	 return ((CViewRelativeInformation*)pWnd)->OnAddViewRelativeInformation();
} 
static int _OnEditViewRelativeInformationFnc(CWnd *pWnd){
	 return ((CViewRelativeInformation*)pWnd)->OnEditViewRelativeInformation();
} 
static int _OnDeleteViewRelativeInformationFnc(CWnd *pWnd){
	 return ((CViewRelativeInformation*)pWnd)->OnDeleteViewRelativeInformation();
} 
static int _OnSaveViewRelativeInformationFnc(CWnd *pWnd){
	 return ((CViewRelativeInformation*)pWnd)->OnSaveViewRelativeInformation();
} 
static int _OnCancelViewRelativeInformationFnc(CWnd *pWnd){
	 return ((CViewRelativeInformation*)pWnd)->OnCancelViewRelativeInformation();
} 
CViewRelativeInformation::CViewRelativeInformation(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CViewRelativeInformation::~CViewRelativeInformation()
{
}
void CViewRelativeInformation::OnCreateComponents(){
	m_wndThongtinbenhnhan.Create(this, _T("THÔNG TIN BỆNH NHÂN"), 5, 5, 879, 125);
	m_wndThongtinnguoinha.Create(this, _T("THÔNG TIN NGƯỜI NHÀ"), 5, 132, 879, 343);
	m_wndPatientList.Create(this,11, 29, 874, 121); 
	m_wndRelativeList.Create(this,11, 157, 874, 338); 
	m_wndXemphieukham.Create(this, _T("Xem phiếu khám"), 742, 349, 874, 374);

}
void CViewRelativeInformation::OnInitializeComponents()
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
	m_wndRelativeList.InsertColumn(5, _T("T/G khám"), CFMT_TEXT, 150);	
	m_wndRelativeList.InsertColumn(6, _T("Số ĐT"), CFMT_TEXT, 200);

}
void CViewRelativeInformation::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndPatientList.SetEvent(WE_SELCHANGE, _OnPatientListSelectChangeFnc);
	m_wndPatientList.SetEvent(WE_LOADDATA, _OnPatientListLoadDataFnc);
	m_wndPatientList.SetEvent(WE_DBLCLICK, _OnPatientListDblClickFnc);
	m_wndPatientList.AddEvent(1, _T("Delete"), _OnPatientListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndRelativeList.SetEvent(WE_SELCHANGE, _OnRelativeListSelectChangeFnc);
	m_wndRelativeList.SetEvent(WE_LOADDATA, _OnRelativeListLoadDataFnc);
	m_wndRelativeList.SetEvent(WE_DBLCLICK, _OnRelativeListDblClickFnc);
	m_wndRelativeList.AddEvent(1, _T("Delete"), _OnRelativeListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndXemphieukham.SetEvent(WE_CLICK, _OnXemphieukhamSelectFnc);
	OnPatientListLoadData();
	OnRelativeListLoadData();
	SetMode(VM_NONE);

}
void CViewRelativeInformation::OnDoDataExchange(CDataExchange* pDX){

}
void CViewRelativeInformation::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	}
	else
	{
			
	}

}
void CViewRelativeInformation::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CViewRelativeInformation::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CViewRelativeInformation::SetDefaultValues(){


}
int CViewRelativeInformation::SetMode(int nMode){
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
void CViewRelativeInformation::OnPatientListDblClick(){
	
} 
void CViewRelativeInformation::OnPatientListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CViewRelativeInformation::OnPatientListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CViewRelativeInformation::OnPatientListLoadData()
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
void CViewRelativeInformation::OnRelativeListDblClick(){
	
} 
void CViewRelativeInformation::OnRelativeListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
		if (nNewItem < 0)
		return;
	m_nDocno = ToLong(m_wndRelativeList.GetItemText(nNewItem, 0));
	
} 
int CViewRelativeInformation::OnRelativeListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CViewRelativeInformation::OnRelativeListLoadData()
{
CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szActive;
	m_wndRelativeList.BeginLoad(); 
	m_wndRelativeList.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T(" select RE_PATIENTNO as docno,") \
				_T(" to_char(hd_admitdate, 'DD/MM/YYYY HH24:MI:SS') AS admitdate,") \
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
				_T(" left join hms_doc ON (RE_PATIENTNO=hd_docno)") \
				_T(" left join hms_patient ON (HD_PATIENTNO=HP_PATIENTNO)") \
				_T(" where RE_RELATIVENO=%ld  AND hd_docno>0 AND RE_RELATIVENO <> RE_PATIENTNO ORDER BY hd_admitdate"), pMF->m_nDocumentNo);

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
			rs.GetValue(_T("admitdate")),
			rs.GetValue(_T("phone")),NULL);
		
		rs.MoveNext();
	}
	m_wndRelativeList.EndLoad();					
	return 0;
}
void CViewRelativeInformation::OnXemphieukhamSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	pMF->OnPrintExaminationSheet(m_nDocno);
	
} 
int CViewRelativeInformation::OnAddViewRelativeInformation(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CViewRelativeInformation::OnEditViewRelativeInformation(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CViewRelativeInformation::OnDeleteViewRelativeInformation(){
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
 		OnCancelViewRelativeInformation();
 	}
	return 0;
}
int CViewRelativeInformation::OnSaveViewRelativeInformation(){
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
 		//OnViewRelativeInformationListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CViewRelativeInformation::OnCancelViewRelativeInformation(){
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
int CViewRelativeInformation::OnViewRelativeInformationListLoadData(){
	return 0;
}
