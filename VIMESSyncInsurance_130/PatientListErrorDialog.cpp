#include "PatientListErrorDialog.h"
#include "MainFrm.h"
static long _OnListPatientLoadDataFnc(CWnd *pWnd){
	return ((CPatientListErrorDialog*)pWnd)->OnListPatientLoadData();
} 
static void _OnListPatientDblClickFnc(CWnd *pWnd){
	((CPatientListErrorDialog*)pWnd)->OnListPatientDblClick();
} 
static void _OnListPatientSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CPatientListErrorDialog*)pWnd)->OnListPatientSelectChange(nOldItem, nNewItem);
} 
static int _OnListPatientDeleteItemFnc(CWnd *pWnd){
	 return ((CPatientListErrorDialog*)pWnd)->OnListPatientDeleteItem();
} 
static void _OnUpdateSelectFnc(CWnd *pWnd){
	CPatientListErrorDialog *pVw = (CPatientListErrorDialog *)pWnd;
	pVw->OnUpdateSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CPatientListErrorDialog *pVw = (CPatientListErrorDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddPatientListErrorDialogFnc(CWnd *pWnd){
	 return ((CPatientListErrorDialog*)pWnd)->OnAddPatientListErrorDialog();
} 
static int _OnEditPatientListErrorDialogFnc(CWnd *pWnd){
	 return ((CPatientListErrorDialog*)pWnd)->OnEditPatientListErrorDialog();
} 
static int _OnDeletePatientListErrorDialogFnc(CWnd *pWnd){
	 return ((CPatientListErrorDialog*)pWnd)->OnDeletePatientListErrorDialog();
} 
static int _OnSavePatientListErrorDialogFnc(CWnd *pWnd){
	 return ((CPatientListErrorDialog*)pWnd)->OnSavePatientListErrorDialog();
} 
static int _OnCancelPatientListErrorDialogFnc(CWnd *pWnd){
	 return ((CPatientListErrorDialog*)pWnd)->OnCancelPatientListErrorDialog();
} 
CPatientListErrorDialog::CPatientListErrorDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 750;
	m_nDlgHeight = 430;
	SetDefaultValues();
}
CPatientListErrorDialog::~CPatientListErrorDialog(){
}
void CPatientListErrorDialog::OnCreateComponents(){
	m_wndPatientList.Create(this, _T("Patient List Error"), 5, 5, 740, 390);
	m_wndListPatient.Create(this,10, 30, 735, 385); 
	m_wndUpdate.Create(this, _T("&Update"), 532, 397, 623, 422);
	m_wndClose.Create(this, _T("&Close"), 633, 396, 724, 421);

}
void CPatientListErrorDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();


	m_wndListPatient.InsertColumn(0, _T("STT"), CFMT_NUMBER, 40);
	m_wndListPatient.InsertColumn(1, _T("ma_lk"), CFMT_TEXT, 100);
	m_wndListPatient.InsertColumn(2, _T("Patient Name"), CFMT_TEXT, 150);
	m_wndListPatient.InsertColumn(3, _T("Desc"), CFMT_TEXT, 150);
	m_wndListPatient.InsertColumn(4, _T("Col1"), CFMT_TEXT, 100);
	m_wndListPatient.InsertColumn(5, _T("Col2"), CFMT_TEXT, 100);
	m_wndListPatient.InsertColumn(6, _T("Type"), CFMT_TEXT, 10);

}
void CPatientListErrorDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndListPatient.SetEvent(WE_SELCHANGE, _OnListPatientSelectChangeFnc);
	m_wndListPatient.SetEvent(WE_LOADDATA, _OnListPatientLoadDataFnc);
	m_wndListPatient.SetEvent(WE_DBLCLICK, _OnListPatientDblClickFnc);
	m_wndListPatient.AddEvent(1, _T("Delete"), _OnListPatientDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndUpdate.SetEvent(WE_CLICK, _OnUpdateSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_ADD);
	OnListPatientLoadData();

}
void CPatientListErrorDialog::OnDoDataExchange(CDataExchange* pDX){

}
void CPatientListErrorDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CPatientListErrorDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CPatientListErrorDialog::SetDefaultValues(){


}
int CPatientListErrorDialog::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, -1);
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
void CPatientListErrorDialog::OnListPatientDblClick(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	int nSel = m_wndListPatient.GetCurSel();
	if(nSel < 0)
		return ;
	long nDocno=ToLong(m_wndListPatient.GetItemText(nSel,1).Left(8));
	pMF->m_wndSysInsuranceView.m_nDocno=nDocno;
	
	CDialog::OnOK();

	
	return ;
	
} 
void CPatientListErrorDialog::OnListPatientSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CPatientListErrorDialog::OnListPatientDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CPatientListErrorDialog::OnListPatientLoadData(){

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL,tmpStr;
	m_wndListPatient.BeginLoad(); 
	int nCount = 0;
	int nIndex=1;
	szSQL.Format(_T("SELECT VIMES.get_patientname( substr(bed_ma_lk,1,8)) as pname, ") \
				_T("	BH_ERROR_DETAIL.BED_MA_LK as ma_lk, ") \
				_T("	BH_ERROR_DETAIL.BED_TYPE as ttype, ") \
				_T("	BH_ERROR_DETAIL.BED_COL1 as Col1, ") \
				_T("	BH_ERROR_DETAIL.BED_COL2 as Col2,	 ") \
				_T("	BH_ERROR_DETAIL.BED_DESC as tdesc ") \
				_T("		FROM BH_ERROR_DETAIL"));
	_fmsg(_T("%s"),szSQL);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF())
	{ 
		tmpStr.Format(_T("%d"),nIndex++);
		m_wndListPatient.AddItems(
			tmpStr, 
			rs.GetValue(_T("ma_lk")), 
			rs.GetValue(_T("pname")), 
			rs.GetValue(_T("tdesc")), 
			rs.GetValue(_T("Col1")), 
			rs.GetValue(_T("Col2")), 
			rs.GetValue(_T("ttype")), 
			NULL);
		rs.MoveNext();
	}
	m_wndListPatient.EndLoad(); 
	return nCount;

}
void CPatientListErrorDialog::OnUpdateSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPatientListErrorDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CPatientListErrorDialog::OnAddPatientListErrorDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CPatientListErrorDialog::OnEditPatientListErrorDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CPatientListErrorDialog::OnDeletePatientListErrorDialog(){
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
 		OnCancelPatientListErrorDialog();
 	}
	return 0;
}
int CPatientListErrorDialog::OnSavePatientListErrorDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
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
 		//OnPatientListErrorDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CPatientListErrorDialog::OnCancelPatientListErrorDialog(){
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
int CPatientListErrorDialog::OnPatientListErrorDialogListLoadData(){
	return 0;
}
