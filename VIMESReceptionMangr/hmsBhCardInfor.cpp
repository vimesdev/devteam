#include "hmsBhCardInfor.h"
#include "MainFrm.h"
/*static void _OnInfoChangeFnc(CWnd *pWnd){
	((ChmsBhCardInfor *)pWnd)->OnInfoChange();
} */
/*static void _OnInfoSetfocusFnc(CWnd *pWnd){
	((ChmsBhCardInfor *)pWnd)->OnInfoSetfocus();} */ 
/*static void _OnInfoKillfocusFnc(CWnd *pWnd){
	((ChmsBhCardInfor *)pWnd)->OnInfoKillfocus();
} */
static int _OnInfoCheckValueFnc(CWnd *pWnd){
	return ((ChmsBhCardInfor *)pWnd)->OnInfoCheckValue();
} 
/*static void _OnCardnoChangeFnc(CWnd *pWnd){
	((ChmsBhCardInfor *)pWnd)->OnCardnoChange();
} */
/*static void _OnCardnoSetfocusFnc(CWnd *pWnd){
	((ChmsBhCardInfor *)pWnd)->OnCardnoSetfocus();} */ 
/*static void _OnCardnoKillfocusFnc(CWnd *pWnd){
	((ChmsBhCardInfor *)pWnd)->OnCardnoKillfocus();
} */
static int _OnCardnoCheckValueFnc(CWnd *pWnd){
	return ((ChmsBhCardInfor *)pWnd)->OnCardnoCheckValue();
} 
/*static void _OnPatientNameChangeFnc(CWnd *pWnd){
	((ChmsBhCardInfor *)pWnd)->OnPatientNameChange();
} */
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((ChmsBhCardInfor *)pWnd)->OnPatientNameSetfocus();} */ 
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((ChmsBhCardInfor *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((ChmsBhCardInfor *)pWnd)->OnPatientNameCheckValue();
} 
/*static void _OnbirthdateChangeFnc(CWnd *pWnd){
	((ChmsBhCardInfor *)pWnd)->OnbirthdateChange();
} */
/*static void _OnbirthdateSetfocusFnc(CWnd *pWnd){
	((ChmsBhCardInfor *)pWnd)->OnbirthdateSetfocus();} */ 
/*static void _OnbirthdateKillfocusFnc(CWnd *pWnd){
	((ChmsBhCardInfor *)pWnd)->OnbirthdateKillfocus();
} */
static int _OnbirthdateCheckValueFnc(CWnd *pWnd){
	return ((ChmsBhCardInfor *)pWnd)->OnbirthdateCheckValue();
} 
/*static void _OnSexChangeFnc(CWnd *pWnd){
	((ChmsBhCardInfor *)pWnd)->OnSexChange();
} */
/*static void _OnSexSetfocusFnc(CWnd *pWnd){
	((ChmsBhCardInfor *)pWnd)->OnSexSetfocus();} */ 
/*static void _OnSexKillfocusFnc(CWnd *pWnd){
	((ChmsBhCardInfor *)pWnd)->OnSexKillfocus();
} */
static int _OnSexCheckValueFnc(CWnd *pWnd){
	return ((ChmsBhCardInfor *)pWnd)->OnSexCheckValue();
} 
/*static void _OnAdressChangeFnc(CWnd *pWnd){
	((ChmsBhCardInfor *)pWnd)->OnAdressChange();
} */
/*static void _OnAdressSetfocusFnc(CWnd *pWnd){
	((ChmsBhCardInfor *)pWnd)->OnAdressSetfocus();} */ 
/*static void _OnAdressKillfocusFnc(CWnd *pWnd){
	((ChmsBhCardInfor *)pWnd)->OnAdressKillfocus();
} */
static int _OnAdressCheckValueFnc(CWnd *pWnd){
	return ((ChmsBhCardInfor *)pWnd)->OnAdressCheckValue();
} 
/*static void _Oncontrol_14ChangeFnc(CWnd *pWnd){
	((ChmsBhCardInfor *)pWnd)->Oncontrol_14Change();
} */
/*static void _Oncontrol_14SetfocusFnc(CWnd *pWnd){
	((ChmsBhCardInfor *)pWnd)->Oncontrol_14Setfocus();} */ 
/*static void _Oncontrol_14KillfocusFnc(CWnd *pWnd){
	((ChmsBhCardInfor *)pWnd)->Oncontrol_14Killfocus();
} */
static int _Oncontrol_14CheckValueFnc(CWnd *pWnd){
	return ((ChmsBhCardInfor *)pWnd)->Oncontrol_14CheckValue();
} 
/*static void _OnregdateChangeFnc(CWnd *pWnd){
	((ChmsBhCardInfor *)pWnd)->OnregdateChange();
} */
/*static void _OnregdateSetfocusFnc(CWnd *pWnd){
	((ChmsBhCardInfor *)pWnd)->OnregdateSetfocus();} */ 
/*static void _OnregdateKillfocusFnc(CWnd *pWnd){
	((ChmsBhCardInfor *)pWnd)->OnregdateKillfocus();
} */
static int _OnregdateCheckValueFnc(CWnd *pWnd){
	return ((ChmsBhCardInfor *)pWnd)->OnregdateCheckValue();
} 
/*static void _OnexpdateChangeFnc(CWnd *pWnd){
	((ChmsBhCardInfor *)pWnd)->OnexpdateChange();
} */
/*static void _OnexpdateSetfocusFnc(CWnd *pWnd){
	((ChmsBhCardInfor *)pWnd)->OnexpdateSetfocus();} */ 
/*static void _OnexpdateKillfocusFnc(CWnd *pWnd){
	((ChmsBhCardInfor *)pWnd)->OnexpdateKillfocus();
} */
static int _OnexpdateCheckValueFnc(CWnd *pWnd){
	return ((ChmsBhCardInfor *)pWnd)->OnexpdateCheckValue();
} 
/*static void _Onover5yearChangeFnc(CWnd *pWnd){
	((ChmsBhCardInfor *)pWnd)->Onover5yearChange();
} */
/*static void _Onover5yearSetfocusFnc(CWnd *pWnd){
	((ChmsBhCardInfor *)pWnd)->Onover5yearSetfocus();} */ 
/*static void _Onover5yearKillfocusFnc(CWnd *pWnd){
	((ChmsBhCardInfor *)pWnd)->Onover5yearKillfocus();
} */
static int _Onover5yearCheckValueFnc(CWnd *pWnd){
	return ((ChmsBhCardInfor *)pWnd)->Onover5yearCheckValue();
} 
static void _OnOKSelectFnc(CWnd *pWnd){
	ChmsBhCardInfor *pVw = (ChmsBhCardInfor *)pWnd;
	pVw->OnOKSelect();
} 
static int _OnAddhmsBhCardInforFnc(CWnd *pWnd){
	 return ((ChmsBhCardInfor*)pWnd)->OnAddhmsBhCardInfor();
} 
static int _OnEdithmsBhCardInforFnc(CWnd *pWnd){
	 return ((ChmsBhCardInfor*)pWnd)->OnEdithmsBhCardInfor();
} 
static int _OnDeletehmsBhCardInforFnc(CWnd *pWnd){
	 return ((ChmsBhCardInfor*)pWnd)->OnDeletehmsBhCardInfor();
} 
static int _OnSavehmsBhCardInforFnc(CWnd *pWnd){
	 return ((ChmsBhCardInfor*)pWnd)->OnSavehmsBhCardInfor();
} 
static int _OnCancelhmsBhCardInforFnc(CWnd *pWnd){
	 return ((ChmsBhCardInfor*)pWnd)->OnCancelhmsBhCardInfor();
} 
ChmsBhCardInfor::ChmsBhCardInfor(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 600;
	m_nDlgHeight = 245;
	SetDefaultValues();
}
ChmsBhCardInfor::~ChmsBhCardInfor(){
}
void ChmsBhCardInfor::OnCreateComponents(){
	m_wndCardInformation.Create(this, _T("Card Information"), 6, 4, 589, 204);
	m_wndInfoLabel.Create(this, _T("Info Error :"), 12, 29, 110, 54);
	m_wndInfo.Create(this,115, 29, 578, 54); 
	m_wndCardnoLabel.Create(this, _T("CardNo"), 13, 145, 111, 170);
	m_wndCardno.Create(this,116, 145, 372, 170); 
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 12, 58, 110, 83);
	m_wndPatientName.Create(this,115, 58, 578, 83); 
	m_wndBirthdateLabel.Create(this, _T("Birth date"), 12, 88, 110, 113);
	m_wndbirthdate.Create(this,115, 88, 229, 113); 
	m_wndSexlabel.Create(this, _T("Sex"), 377, 86, 457, 111);
	m_wndSex.Create(this,462, 86, 542, 111); 
	m_wndAdressLabel.Create(this, _T("Adress"), 12, 118, 110, 143);
	m_wndAdress.Create(this,115, 118, 578, 143); 
	m_wndKCBBDLABEL.Create(this, _T("KCBBD"), 382, 144, 462, 169);
	m_wndcontrol_14.Create(this,467, 144, 578, 169); 
	m_wndRegDateLabel.Create(this, _T("Reg Date"), 13, 175, 111, 200);
	m_wndregdate.Create(this,116, 175, 205, 200); 
	m_wndExpDate.Create(this, _T("ExpDate"), 211, 174, 280, 199);
	m_wndexpdate.Create(this,285, 174, 374, 199); 
	m_wndorver5yearLabel.Create(this, _T("orver 5 year"), 382, 172, 462, 197);
	m_wndover5year.Create(this,467, 172, 578, 197); 
	m_wndOK.Create(this, _T("OK"), 503, 211, 578, 236);

}
void ChmsBhCardInfor::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndInfo.SetLimitText(35);
	m_wndInfo.SetCheckValue(true);
	m_wndCardno.SetLimitText(35);
	m_wndCardno.SetCheckValue(true);
	m_wndPatientName.SetLimitText(35);
	m_wndPatientName.SetCheckValue(true);
	m_wndbirthdate.SetLimitText(35);
	m_wndbirthdate.SetCheckValue(true);
	m_wndSex.SetLimitText(35);
	m_wndSex.SetCheckValue(true);
	m_wndAdress.SetLimitText(35);
	m_wndAdress.SetCheckValue(true);
	m_wndcontrol_14.SetLimitText(35);
	m_wndcontrol_14.SetCheckValue(true);
	m_wndregdate.SetLimitText(35);
	m_wndregdate.SetCheckValue(true);
	m_wndexpdate.SetLimitText(35);
	m_wndexpdate.SetCheckValue(true);
	m_wndover5year.SetLimitText(35);
	m_wndover5year.SetCheckValue(true);
//	m_wndInfo.SetTextColor(255,255,0);

}
void ChmsBhCardInfor::OnSetWindowEvents(){
	//m_wndInfo.SetEvent(WE_CHANGE, _OnInfoChangeFnc);
	//m_wndInfo.SetEvent(WE_SETFOCUS, _OnInfoSetfocusFnc);
	//m_wndInfo.SetEvent(WE_KILLFOCUS, _OnInfoKillfocusFnc);
	m_wndInfo.SetEvent(WE_CHECKVALUE, _OnInfoCheckValueFnc);
	//m_wndCardno.SetEvent(WE_CHANGE, _OnCardnoChangeFnc);
	//m_wndCardno.SetEvent(WE_SETFOCUS, _OnCardnoSetfocusFnc);
	//m_wndCardno.SetEvent(WE_KILLFOCUS, _OnCardnoKillfocusFnc);
	m_wndCardno.SetEvent(WE_CHECKVALUE, _OnCardnoCheckValueFnc);
	//m_wndPatientName.SetEvent(WE_CHANGE, _OnPatientNameChangeFnc);
	//m_wndPatientName.SetEvent(WE_SETFOCUS, _OnPatientNameSetfocusFnc);
	//m_wndPatientName.SetEvent(WE_KILLFOCUS, _OnPatientNameKillfocusFnc);
	m_wndPatientName.SetEvent(WE_CHECKVALUE, _OnPatientNameCheckValueFnc);
	//m_wndbirthdate.SetEvent(WE_CHANGE, _OnbirthdateChangeFnc);
	//m_wndbirthdate.SetEvent(WE_SETFOCUS, _OnbirthdateSetfocusFnc);
	//m_wndbirthdate.SetEvent(WE_KILLFOCUS, _OnbirthdateKillfocusFnc);
	m_wndbirthdate.SetEvent(WE_CHECKVALUE, _OnbirthdateCheckValueFnc);
	//m_wndSex.SetEvent(WE_CHANGE, _OnSexChangeFnc);
	//m_wndSex.SetEvent(WE_SETFOCUS, _OnSexSetfocusFnc);
	//m_wndSex.SetEvent(WE_KILLFOCUS, _OnSexKillfocusFnc);
	m_wndSex.SetEvent(WE_CHECKVALUE, _OnSexCheckValueFnc);
	//m_wndAdress.SetEvent(WE_CHANGE, _OnAdressChangeFnc);
	//m_wndAdress.SetEvent(WE_SETFOCUS, _OnAdressSetfocusFnc);
	//m_wndAdress.SetEvent(WE_KILLFOCUS, _OnAdressKillfocusFnc);
	m_wndAdress.SetEvent(WE_CHECKVALUE, _OnAdressCheckValueFnc);
	//m_wndcontrol_14.SetEvent(WE_CHANGE, _Oncontrol_14ChangeFnc);
	//m_wndcontrol_14.SetEvent(WE_SETFOCUS, _Oncontrol_14SetfocusFnc);
	//m_wndcontrol_14.SetEvent(WE_KILLFOCUS, _Oncontrol_14KillfocusFnc);
	m_wndcontrol_14.SetEvent(WE_CHECKVALUE, _Oncontrol_14CheckValueFnc);
	//m_wndregdate.SetEvent(WE_CHANGE, _OnregdateChangeFnc);
	//m_wndregdate.SetEvent(WE_SETFOCUS, _OnregdateSetfocusFnc);
	//m_wndregdate.SetEvent(WE_KILLFOCUS, _OnregdateKillfocusFnc);
	m_wndregdate.SetEvent(WE_CHECKVALUE, _OnregdateCheckValueFnc);
	//m_wndexpdate.SetEvent(WE_CHANGE, _OnexpdateChangeFnc);
	//m_wndexpdate.SetEvent(WE_SETFOCUS, _OnexpdateSetfocusFnc);
	//m_wndexpdate.SetEvent(WE_KILLFOCUS, _OnexpdateKillfocusFnc);
	m_wndexpdate.SetEvent(WE_CHECKVALUE, _OnexpdateCheckValueFnc);
	//m_wndover5year.SetEvent(WE_CHANGE, _Onover5yearChangeFnc);
	//m_wndover5year.SetEvent(WE_SETFOCUS, _Onover5yearSetfocusFnc);
	//m_wndover5year.SetEvent(WE_KILLFOCUS, _Onover5yearKillfocusFnc);
	m_wndover5year.SetEvent(WE_CHECKVALUE, _Onover5yearCheckValueFnc);
	m_wndOK.SetEvent(WE_CLICK, _OnOKSelectFnc);
	SetMode(VM_ADD);
	GetDataToScreen();
	m_wndInfo.SetTextColor(RGB(255, 0, 0));	

}
void ChmsBhCardInfor::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndInfo.GetDlgCtrlID(), m_szInfo);
	DDX_Text(pDX, m_wndCardno.GetDlgCtrlID(), m_szCardno);
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);
	DDX_Text(pDX, m_wndbirthdate.GetDlgCtrlID(), m_szbirthdate);
	DDX_Text(pDX, m_wndSex.GetDlgCtrlID(), m_szSex);
	DDX_Text(pDX, m_wndAdress.GetDlgCtrlID(), m_szAdress);
	DDX_Text(pDX, m_wndcontrol_14.GetDlgCtrlID(), m_szcontrol_14);
	DDX_Text(pDX, m_wndregdate.GetDlgCtrlID(), m_szregdate);
	DDX_Text(pDX, m_wndexpdate.GetDlgCtrlID(), m_szexpdate);
	DDX_Text(pDX, m_wndover5year.GetDlgCtrlID(), m_szover5year);

}
void ChmsBhCardInfor::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	UpdateData(true);
	CString szSQL;
	szSQL.Format(_T("SELECT * from bh_cardinfo where mathe='%s' and docno=0 "), m_szCardno);
	//_msg(_T("%s"),szSQL);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("mathe"), m_szCardno);
		rs.GetValue(_T("hoten"), m_szPatientName);
		rs.GetValue(_T("ngaydk"), m_szregdate);
		rs.GetValue(_T("ngayhh"), m_szexpdate);
		rs.GetValue(_T("gioitinh"), m_szSex);
		rs.GetValue(_T("diachi"), m_szAdress);
		rs.GetValue(_T("kcbbd"), m_szcontrol_14);
		rs.GetValue(_T("du5nam"), m_szover5year);
		rs.GetValue(_T("ngaysinh"), m_szbirthdate);


	}
	UpdateData(false);

}
void ChmsBhCardInfor::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void ChmsBhCardInfor::SetDefaultValues(){

	m_szInfo.Empty();
	m_szCardno.Empty();
	m_szPatientName.Empty();
	m_szbirthdate.Empty();
	m_szSex.Empty();
	m_szAdress.Empty();
	m_szcontrol_14.Empty();
	m_szregdate.Empty();
	m_szexpdate.Empty();
	m_szover5year.Empty();

}
int ChmsBhCardInfor::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiDialog::SetMode(nMode); 
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
  		switch(nMode){ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 4, -1); 
 			//SetDefaultValues(); 
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
/*void ChmsBhCardInfor::OnInfoChange(){
	
} */
/*void ChmsBhCardInfor::OnInfoSetfocus(){
	
} */
/*void ChmsBhCardInfor::OnInfoKillfocus(){
	
} */
int ChmsBhCardInfor::OnInfoCheckValue(){
	return 0;
} 
/*void ChmsBhCardInfor::OnCardnoChange(){
	
} */
/*void ChmsBhCardInfor::OnCardnoSetfocus(){
	
} */
/*void ChmsBhCardInfor::OnCardnoKillfocus(){
	
} */
int ChmsBhCardInfor::OnCardnoCheckValue(){
	return 0;
} 
/*void ChmsBhCardInfor::OnPatientNameChange(){
	
} */
/*void ChmsBhCardInfor::OnPatientNameSetfocus(){
	
} */
/*void ChmsBhCardInfor::OnPatientNameKillfocus(){
	
} */
int ChmsBhCardInfor::OnPatientNameCheckValue(){
	return 0;
} 
/*void ChmsBhCardInfor::OnbirthdateChange(){
	
} */
/*void ChmsBhCardInfor::OnbirthdateSetfocus(){
	
} */
/*void ChmsBhCardInfor::OnbirthdateKillfocus(){
	
} */
int ChmsBhCardInfor::OnbirthdateCheckValue(){
	return 0;
} 
/*void ChmsBhCardInfor::OnSexChange(){
	
} */
/*void ChmsBhCardInfor::OnSexSetfocus(){
	
} */
/*void ChmsBhCardInfor::OnSexKillfocus(){
	
} */
int ChmsBhCardInfor::OnSexCheckValue(){
	return 0;
} 
/*void ChmsBhCardInfor::OnAdressChange(){
	
} */
/*void ChmsBhCardInfor::OnAdressSetfocus(){
	
} */
/*void ChmsBhCardInfor::OnAdressKillfocus(){
	
} */
int ChmsBhCardInfor::OnAdressCheckValue(){
	return 0;
} 
/*void ChmsBhCardInfor::Oncontrol_14Change(){
	
} */
/*void ChmsBhCardInfor::Oncontrol_14Setfocus(){
	
} */
/*void ChmsBhCardInfor::Oncontrol_14Killfocus(){
	
} */
int ChmsBhCardInfor::Oncontrol_14CheckValue(){
	return 0;
} 
/*void ChmsBhCardInfor::OnregdateChange(){
	
} */
/*void ChmsBhCardInfor::OnregdateSetfocus(){
	
} */
/*void ChmsBhCardInfor::OnregdateKillfocus(){
	
} */
int ChmsBhCardInfor::OnregdateCheckValue(){
	return 0;
} 
/*void ChmsBhCardInfor::OnexpdateChange(){
	
} */
/*void ChmsBhCardInfor::OnexpdateSetfocus(){
	
} */
/*void ChmsBhCardInfor::OnexpdateKillfocus(){
	
} */
int ChmsBhCardInfor::OnexpdateCheckValue(){
	return 0;
} 
/*void ChmsBhCardInfor::Onover5yearChange(){
	
} */
/*void ChmsBhCardInfor::Onover5yearSetfocus(){
	
} */
/*void ChmsBhCardInfor::Onover5yearKillfocus(){
	
} */
int ChmsBhCardInfor::Onover5yearCheckValue(){
	return 0;
} 
void ChmsBhCardInfor::OnOKSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();
	
} 
int ChmsBhCardInfor::OnAddhmsBhCardInfor(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int ChmsBhCardInfor::OnEdithmsBhCardInfor(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int ChmsBhCardInfor::OnDeletehmsBhCardInfor(){
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
 		OnCancelhmsBhCardInfor(); 
 	}
	return 0;
}
int ChmsBhCardInfor::OnSavehmsBhCardInfor(){
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
 		//OnhmsBhCardInforListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int ChmsBhCardInfor::OnCancelhmsBhCardInfor(){
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
int ChmsBhCardInfor::OnhmsBhCardInforListLoadData(){
	return 0;
}
