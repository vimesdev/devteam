#include "PhanHoiBenh.h"
#include "MainFrm.h"
/*static void _OnvaolucChangeFnc(CWnd *pWnd){
	((CPhanHoiBenh *)pWnd)->OnvaolucChange();
} */
/*static void _OnvaolucSetfocusFnc(CWnd *pWnd){
	((CPhanHoiBenh *)pWnd)->OnvaolucSetfocus();} */ 
/*static void _OnvaolucKillfocusFnc(CWnd *pWnd){
	((CPhanHoiBenh *)pWnd)->OnvaolucKillfocus();
} */
static int _OnvaolucCheckValueFnc(CWnd *pWnd){
	return ((CPhanHoiBenh *)pWnd)->OnvaolucCheckValue();
} 
/*static void _OnvaongayChangeFnc(CWnd *pWnd){
	((CPhanHoiBenh *)pWnd)->OnvaongayChange();
} */
/*static void _OnvaongaySetfocusFnc(CWnd *pWnd){
	((CPhanHoiBenh *)pWnd)->OnvaongaySetfocus();} */ 
/*static void _OnvaongayKillfocusFnc(CWnd *pWnd){
	((CPhanHoiBenh *)pWnd)->OnvaongayKillfocus();
} */
static int _OnvaongayCheckValueFnc(CWnd *pWnd){
	return ((CPhanHoiBenh *)pWnd)->OnvaongayCheckValue();
} 
/*static void _OnlidoChangeFnc(CWnd *pWnd){
	((CPhanHoiBenh *)pWnd)->OnlidoChange();
} */
/*static void _OnlidoSetfocusFnc(CWnd *pWnd){
	((CPhanHoiBenh *)pWnd)->OnlidoSetfocus();} */ 
/*static void _OnlidoKillfocusFnc(CWnd *pWnd){
	((CPhanHoiBenh *)pWnd)->OnlidoKillfocus();
} */
static int _OnlidoCheckValueFnc(CWnd *pWnd){
	return ((CPhanHoiBenh *)pWnd)->OnlidoCheckValue();
} 
/*static void _OnbenhsuChangeFnc(CWnd *pWnd){
	((CPhanHoiBenh *)pWnd)->OnbenhsuChange();
} */
/*static void _OnbenhsuSetfocusFnc(CWnd *pWnd){
	((CPhanHoiBenh *)pWnd)->OnbenhsuSetfocus();} */ 
/*static void _OnbenhsuKillfocusFnc(CWnd *pWnd){
	((CPhanHoiBenh *)pWnd)->OnbenhsuKillfocus();
} */
static int _OnbenhsuCheckValueFnc(CWnd *pWnd){
	return ((CPhanHoiBenh *)pWnd)->OnbenhsuCheckValue();
} 
/*static void _OnbthanChangeFnc(CWnd *pWnd){
	((CPhanHoiBenh *)pWnd)->OnbthanChange();
} */
/*static void _OnbthanSetfocusFnc(CWnd *pWnd){
	((CPhanHoiBenh *)pWnd)->OnbthanSetfocus();} */ 
/*static void _OnbthanKillfocusFnc(CWnd *pWnd){
	((CPhanHoiBenh *)pWnd)->OnbthanKillfocus();
} */
static int _OnbthanCheckValueFnc(CWnd *pWnd){
	return ((CPhanHoiBenh *)pWnd)->OnbthanCheckValue();
} 
/*static void _OngdinhChangeFnc(CWnd *pWnd){
	((CPhanHoiBenh *)pWnd)->OngdinhChange();
} */
/*static void _OngdinhSetfocusFnc(CWnd *pWnd){
	((CPhanHoiBenh *)pWnd)->OngdinhSetfocus();} */ 
/*static void _OngdinhKillfocusFnc(CWnd *pWnd){
	((CPhanHoiBenh *)pWnd)->OngdinhKillfocus();
} */
static int _OngdinhCheckValueFnc(CWnd *pWnd){
	return ((CPhanHoiBenh *)pWnd)->OngdinhCheckValue();
} 
static int _OnAddPhanHoiBenhFnc(CWnd *pWnd){
	 return ((CPhanHoiBenh*)pWnd)->OnAddPhanHoiBenh();
} 
static int _OnEditPhanHoiBenhFnc(CWnd *pWnd){
	 return ((CPhanHoiBenh*)pWnd)->OnEditPhanHoiBenh();
} 
static int _OnDeletePhanHoiBenhFnc(CWnd *pWnd){
	 return ((CPhanHoiBenh*)pWnd)->OnDeletePhanHoiBenh();
} 
static int _OnSavePhanHoiBenhFnc(CWnd *pWnd){
	 return ((CPhanHoiBenh*)pWnd)->OnSavePhanHoiBenh();
} 
static int _OnCancelPhanHoiBenhFnc(CWnd *pWnd){
	 return ((CPhanHoiBenh*)pWnd)->OnCancelPhanHoiBenh();
}

// CPhanHoiBenh::CPhanHoiBenh(){
// 
// }
// CPhanHoiBenh::CPhanHoiBenh(CWnd *pParent, int nMode, long nDocNo, CString szRecordNo){
// 	Init(pParent, nMode, nDocNo, szRecordNo);
// }
// CPhanHoiBenh::~CPhanHoiBenh(){
// }
// void CPhanHoiBenh::Init(CWnd *pParent, int nMode, long nDocNo, CString szRecordNo){
// 	_msg(_T("%d, %ld, %s"), nMode, nDocNo, szRecordNo);
// 	CGuiView::SetMode(nMode);
// 	m_nDocumentNo = nDocNo;
// 	m_szRecordNo = szRecordNo;
// 	m_nDlgWidth = 960;
// 	m_nDlgHeight = 600;
// 	SetDefaultValues();
// }

CPhanHoiBenh::CPhanHoiBenh(CWnd *pParent, int nMode, long nDocNo, CString szRecordNo){
	CGuiView::SetMode(nMode);
	m_nDocumentNo = nDocNo;
	m_szRecordNo = szRecordNo;
	m_nDlgWidth = 960;
	m_nDlgHeight = 600;
	SetDefaultValues();
}

CPhanHoiBenh::~CPhanHoiBenh(){
}

void CPhanHoiBenh::OnCreateComponents(){
	m_wndvaolucLabel.Create(this, _T("\x42\x1EC7nh \xE1n l\xE0m v\xE0o l\xFA\x63"), 5, 5, 165, 30);
	m_wndvaoluc.Create(this,175, 5, 325, 30); 
	m_wndvaongayLabel.Create(this, _T("V\xE0o ng\xE0y th\x1EE9"), 590, 5, 740, 30);
	m_wndvaongay.Create(this,745, 5, 825, 30); 
	m_wndvaongay2Label.Create(this, _T("\x63\x1EE7\x61 \x62\x1EC7nh"), 830, 5, 930, 30);
	m_wndlidoLabel.Create(this, _T("\x31. L\xFD \x64o v\xE0o vi\x1EC7n:"), 5, 35, 155, 60);
	m_wndlido.Create(this,5, 65, 930, 165, 1, 0, 1); 
	m_wndbenhsuLabel.Create(this, _T("\x32. \x42\x1EC7nh s\x1EED:"), 5, 170, 155, 195);
	m_wndbenhsu.Create(this,5, 200, 930, 350, 1, 0, 1); 
	m_wndtiensuLabel.Create(this, _T("\x33. Ti\x1EC1n s\x1EED:"), 5, 355, 155, 380);
	m_wndbtLabel.Create(this, _T("+ \x42\x1EA3n th\xE2n:"), 5, 385, 155, 410);
	m_wndbthan.Create(this,5, 415, 465, 515, 1, 0, 1); 
	m_wndgdLabel.Create(this, _T("+ Gi\x61 \x111\xECnh:"), 470, 385, 620, 410);
	m_wndgdinh.Create(this,470, 415, 930, 515, 1, 0, 1); 

}
void CPhanHoiBenh::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
// 	m_wndvaoluc.SetMax(CDateTime(pMF->GetSysDateTime()));
// 	m_wndvaoluc.SetCheckValue(true);
// 	m_wndvaongay.SetLimitText(35);
// 	m_wndvaongay.SetCheckValue(true);
// 	m_wndlido.SetLimitText(35);
// 	m_wndlido.SetCheckValue(true);
// 	m_wndbenhsu.SetLimitText(35);
// 	m_wndbenhsu.SetCheckValue(true);
// 	m_wndbthan.SetLimitText(35);
// 	m_wndbthan.SetCheckValue(true);
// 	m_wndgdinh.SetLimitText(35);
// 	m_wndgdinh.SetCheckValue(true);

}
void CPhanHoiBenh::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndvaoluc.SetEvent(WE_CHANGE, _OnvaolucChangeFnc);
	//m_wndvaoluc.SetEvent(WE_SETFOCUS, _OnvaolucSetfocusFnc);
	//m_wndvaoluc.SetEvent(WE_KILLFOCUS, _OnvaolucKillfocusFnc);
	m_wndvaoluc.SetEvent(WE_CHECKVALUE, _OnvaolucCheckValueFnc);
	//m_wndvaongay.SetEvent(WE_CHANGE, _OnvaongayChangeFnc);
	//m_wndvaongay.SetEvent(WE_SETFOCUS, _OnvaongaySetfocusFnc);
	//m_wndvaongay.SetEvent(WE_KILLFOCUS, _OnvaongayKillfocusFnc);
	m_wndvaongay.SetEvent(WE_CHECKVALUE, _OnvaongayCheckValueFnc);
	//m_wndlido.SetEvent(WE_CHANGE, _OnlidoChangeFnc);
	//m_wndlido.SetEvent(WE_SETFOCUS, _OnlidoSetfocusFnc);
	//m_wndlido.SetEvent(WE_KILLFOCUS, _OnlidoKillfocusFnc);
	m_wndlido.SetEvent(WE_CHECKVALUE, _OnlidoCheckValueFnc);
	//m_wndbenhsu.SetEvent(WE_CHANGE, _OnbenhsuChangeFnc);
	//m_wndbenhsu.SetEvent(WE_SETFOCUS, _OnbenhsuSetfocusFnc);
	//m_wndbenhsu.SetEvent(WE_KILLFOCUS, _OnbenhsuKillfocusFnc);
	m_wndbenhsu.SetEvent(WE_CHECKVALUE, _OnbenhsuCheckValueFnc);
	//m_wndbthan.SetEvent(WE_CHANGE, _OnbthanChangeFnc);
	//m_wndbthan.SetEvent(WE_SETFOCUS, _OnbthanSetfocusFnc);
	//m_wndbthan.SetEvent(WE_KILLFOCUS, _OnbthanKillfocusFnc);
	m_wndbthan.SetEvent(WE_CHECKVALUE, _OnbthanCheckValueFnc);
	//m_wndgdinh.SetEvent(WE_CHANGE, _OngdinhChangeFnc);
	//m_wndgdinh.SetEvent(WE_SETFOCUS, _OngdinhSetfocusFnc);
	//m_wndgdinh.SetEvent(WE_KILLFOCUS, _OngdinhKillfocusFnc);
	m_wndgdinh.SetEvent(WE_CHECKVALUE, _OngdinhCheckValueFnc);
	int nMode = GetMode();
	if(nMode == VM_VIEW || nMode == VM_EDIT)
		GetDataToScreen();
	SetMode(nMode);

}
void CPhanHoiBenh::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndvaoluc.GetDlgCtrlID(), m_szvaoluc);
	DDX_Text(pDX, m_wndvaongay.GetDlgCtrlID(), m_nvaongay);
	DDX_Text(pDX, m_wndlido.GetDlgCtrlID(), m_szlido);
	DDX_Text(pDX, m_wndbenhsu.GetDlgCtrlID(), m_szbenhsu);
	DDX_Text(pDX, m_wndbthan.GetDlgCtrlID(), m_szbthan);
	DDX_Text(pDX, m_wndgdinh.GetDlgCtrlID(), m_szgdinh);

}
void CPhanHoiBenh::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("vaoluc")] =  m_szvaoluc;
	m_jData[_T("vaongay")] =  m_nvaongay;
	m_jData[_T("ly_do_vao_vien")] =  m_szlido;
	m_jData[_T("benhsu")] =  m_szbenhsu;
	m_jData[_T("tien_su_ban_than")] =  m_szbthan;
	m_jData[_T("tien_su_gia_dinh")] =  m_szgdinh;
	}
	else
	{
			
	m_jData[_T("vaoluc")].GetValue(m_szvaoluc);
	m_jData[_T("vaongay")].GetValue(m_nvaongay);
	m_jData[_T("ly_do_vao_vien")].GetValue(m_szlido);
	m_jData[_T("benhsu")].GetValue(m_szbenhsu);
	m_jData[_T("tien_su_ban_than")].GetValue(m_szbthan);
	m_jData[_T("tien_su_gia_dinh")].GetValue(m_szgdinh);
	}

}
void CPhanHoiBenh::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szType, tmpStr, szData;
	int n = 0;

	szSQL.Format(_T("SELECT COUNT(*) AS solan FROM hms_doc_emr WHERE hde_docno=%ld and hde_name='%s' and hde_type='BENH_AN_HB'"), m_nDocumentNo, m_szRecordNo);
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("solan"), n);

	if(n > 0)
	{
		for (int i = 0; i < n; i++)
		{
			szSQL.Format(_T("SELECT to_char(hde_value) as hde_value FROM hms_doc_emr WHERE hde_docno=%ld and hde_name='%s' and hde_type='BENH_AN_HB' and hde_refidx = %d "), m_nDocumentNo, m_szRecordNo, i);
			rs.ExecSQL(szSQL);
			rs.GetValue(_T("hde_value"), tmpStr);
			szData.AppendFormat(_T("%s"), tmpStr);
		}
		m_jData.Parse(szData);
		UpdateJson(FALSE);
	}
	else
	{
		SetDefaultValues();
		m_szvaoluc = pMF->GetSysDateTime();
		m_wndvaongay.SetFocus();
	}

}
void CPhanHoiBenh::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateJson(TRUE);
}
void CPhanHoiBenh::SetDefaultValues(){

	m_szvaoluc.Empty();
	m_nvaongay=0;
	m_szlido.Empty();
	m_szbenhsu.Empty();
	m_szbthan.Empty();
	m_szgdinh.Empty();

}
int CPhanHoiBenh::SetMode(int nMode){
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
/*void CPhanHoiBenh::OnvaolucChange(){
	
} */
/*void CPhanHoiBenh::OnvaolucSetfocus(){
	
} */
/*void CPhanHoiBenh::OnvaolucKillfocus(){
	
} */
int CPhanHoiBenh::OnvaolucCheckValue(){
	return 0;
} 
/*void CPhanHoiBenh::OnvaongayChange(){
	
} */
/*void CPhanHoiBenh::OnvaongaySetfocus(){
	
} */
/*void CPhanHoiBenh::OnvaongayKillfocus(){
	
} */
int CPhanHoiBenh::OnvaongayCheckValue(){
	return 0;
} 
/*void CPhanHoiBenh::OnlidoChange(){
	
} */
/*void CPhanHoiBenh::OnlidoSetfocus(){
	
} */
/*void CPhanHoiBenh::OnlidoKillfocus(){
	
} */
int CPhanHoiBenh::OnlidoCheckValue(){
	return 0;
} 
/*void CPhanHoiBenh::OnbenhsuChange(){
	
} */
/*void CPhanHoiBenh::OnbenhsuSetfocus(){
	
} */
/*void CPhanHoiBenh::OnbenhsuKillfocus(){
	
} */
int CPhanHoiBenh::OnbenhsuCheckValue(){
	return 0;
} 
/*void CPhanHoiBenh::OnbthanChange(){
	
} */
/*void CPhanHoiBenh::OnbthanSetfocus(){
	
} */
/*void CPhanHoiBenh::OnbthanKillfocus(){
	
} */
int CPhanHoiBenh::OnbthanCheckValue(){
	return 0;
} 
/*void CPhanHoiBenh::OngdinhChange(){
	
} */
/*void CPhanHoiBenh::OngdinhSetfocus(){
	
} */
/*void CPhanHoiBenh::OngdinhKillfocus(){
	
} */
int CPhanHoiBenh::OngdinhCheckValue(){
	return 0;
} 
int CPhanHoiBenh::OnAddPhanHoiBenh(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CPhanHoiBenh::OnEditPhanHoiBenh(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CPhanHoiBenh::OnDeletePhanHoiBenh(){
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
 		OnCancelPhanHoiBenh();
 	}
	return 0;
}
int CPhanHoiBenh::OnSavePhanHoiBenh(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
		return -1;
	if(!IsValidateData())
		return -1;
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
	CString szSQL;
	CString szData, tmpStr;
	int ret = 0;
	m_jData.ToString(szData);
	int n =0;

	//szSQL.Format(_T("DELETE FROM hms_doc_emr WHERE hde_docno=%ld and hde_name='%s' and hde_type='BENH_AN_HB'"), m_nDocumentNo, m_szRecordNo);
	//pMF->ExecSQL(szSQL);
	
	CStringArray strList;
	pMF->String2Array(szData, &strList, 2000);
	for (int i =0; i < strList.GetCount();i++)
	{
		tmpStr = strList[i];

		szSQL.Format(_T("HMS_DOC_EMR_EX_CREATE('BENH_AN_HB', %ld, '%s', %d, %d, '%s', '%s', '%s') "),
			m_nDocumentNo, pMF->m_szDept, n++, 0, pMF->GetCurrentUser(), m_szRecordNo, tmpStr);
		ret = str2int(pMF->ExecDML(szSQL));
	}

/*
	for (;;)
	{
		szSQL.Format(_T("HMS_DOC_EMR_CREATE('BENH_AN', %ld, '%s', %d, %d, '%s', '%s', '%s') "),
			m_nDocumentNo, pMF->m_szDept, n++, 0, pMF->GetCurrentUser(), m_szRecordNo, tmpStr);
		ret = str2int(pMF->ExecDML(szSQL));
		_msg(_T("%d"), n++);
		if(tmpStr.GetLength()  < 2000)
			break;
		tmpStr = tmpStr.Mid(2000);
	}
*/

/*
	szSQL.Format(_T("HMS_DOC_EMR_CREATE('BENH_AN', %ld, '%s', %d, %d, '%s', '%s', '%s') "),
		m_nDocumentNo, pMF->m_szDept, 1, 0, pMF->GetCurrentUser(), m_szRecordNo, szData);

	int ret = str2int(pMF->ExecDML(szSQL));

	return ret;
*/

	return ret;

	return 0;
}
int CPhanHoiBenh::OnCancelPhanHoiBenh(){
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
int CPhanHoiBenh::OnPhanHoiBenhListLoadData(){
	return 0;
}
