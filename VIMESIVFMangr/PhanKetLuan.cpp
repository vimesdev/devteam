#include "PhanKetLuan.h"
#include "MainFrm.h"
/*static void _OnbenhanChangeFnc(CWnd *pWnd){
	((CPhanKetLuan *)pWnd)->OnbenhanChange();
} */
/*static void _OnbenhanSetfocusFnc(CWnd *pWnd){
	((CPhanKetLuan *)pWnd)->OnbenhanSetfocus();} */ 
/*static void _OnbenhanKillfocusFnc(CWnd *pWnd){
	((CPhanKetLuan *)pWnd)->OnbenhanKillfocus();
} */
static int _OnbenhanCheckValueFnc(CWnd *pWnd){
	return ((CPhanKetLuan *)pWnd)->OnbenhanCheckValue();
} 
/*static void _OncdsbChangeFnc(CWnd *pWnd){
	((CPhanKetLuan *)pWnd)->OncdsbChange();
} */
/*static void _OncdsbSetfocusFnc(CWnd *pWnd){
	((CPhanKetLuan *)pWnd)->OncdsbSetfocus();} */ 
/*static void _OncdsbKillfocusFnc(CWnd *pWnd){
	((CPhanKetLuan *)pWnd)->OncdsbKillfocus();
} */
static int _OncdsbCheckValueFnc(CWnd *pWnd){
	return ((CPhanKetLuan *)pWnd)->OncdsbCheckValue();
} 
/*static void _OncdpbChangeFnc(CWnd *pWnd){
	((CPhanKetLuan *)pWnd)->OncdpbChange();
} */
/*static void _OncdpbSetfocusFnc(CWnd *pWnd){
	((CPhanKetLuan *)pWnd)->OncdpbSetfocus();} */ 
/*static void _OncdpbKillfocusFnc(CWnd *pWnd){
	((CPhanKetLuan *)pWnd)->OncdpbKillfocus();
} */
static int _OncdpbCheckValueFnc(CWnd *pWnd){
	return ((CPhanKetLuan *)pWnd)->OncdpbCheckValue();
} 
/*static void _OncdxdChangeFnc(CWnd *pWnd){
	((CPhanKetLuan *)pWnd)->OncdxdChange();
} */
/*static void _OncdxdSetfocusFnc(CWnd *pWnd){
	((CPhanKetLuan *)pWnd)->OncdxdSetfocus();} */ 
/*static void _OncdxdKillfocusFnc(CWnd *pWnd){
	((CPhanKetLuan *)pWnd)->OncdxdKillfocus();
} */
static int _OncdxdCheckValueFnc(CWnd *pWnd){
	return ((CPhanKetLuan *)pWnd)->OncdxdCheckValue();
} 
/*static void _OnkhxnChangeFnc(CWnd *pWnd){
	((CPhanKetLuan *)pWnd)->OnkhxnChange();
} */
/*static void _OnkhxnSetfocusFnc(CWnd *pWnd){
	((CPhanKetLuan *)pWnd)->OnkhxnSetfocus();} */ 
/*static void _OnkhxnKillfocusFnc(CWnd *pWnd){
	((CPhanKetLuan *)pWnd)->OnkhxnKillfocus();
} */
static int _OnkhxnCheckValueFnc(CWnd *pWnd){
	return ((CPhanKetLuan *)pWnd)->OnkhxnCheckValue();
} 
/*static void _OnkhdtChangeFnc(CWnd *pWnd){
	((CPhanKetLuan *)pWnd)->OnkhdtChange();
} */
/*static void _OnkhdtSetfocusFnc(CWnd *pWnd){
	((CPhanKetLuan *)pWnd)->OnkhdtSetfocus();} */ 
/*static void _OnkhdtKillfocusFnc(CWnd *pWnd){
	((CPhanKetLuan *)pWnd)->OnkhdtKillfocus();
} */
static int _OnkhdtCheckValueFnc(CWnd *pWnd){
	return ((CPhanKetLuan *)pWnd)->OnkhdtCheckValue();
} 
/*static void _OntluongChangeFnc(CWnd *pWnd){
	((CPhanKetLuan *)pWnd)->OntluongChange();
} */
/*static void _OntluongSetfocusFnc(CWnd *pWnd){
	((CPhanKetLuan *)pWnd)->OntluongSetfocus();} */ 
/*static void _OntluongKillfocusFnc(CWnd *pWnd){
	((CPhanKetLuan *)pWnd)->OntluongKillfocus();
} */
static int _OntluongCheckValueFnc(CWnd *pWnd){
	return ((CPhanKetLuan *)pWnd)->OntluongCheckValue();
} 
static int _OnAddPhanKetLuanFnc(CWnd *pWnd){
	 return ((CPhanKetLuan*)pWnd)->OnAddPhanKetLuan();
} 
static int _OnEditPhanKetLuanFnc(CWnd *pWnd){
	 return ((CPhanKetLuan*)pWnd)->OnEditPhanKetLuan();
} 
static int _OnDeletePhanKetLuanFnc(CWnd *pWnd){
	 return ((CPhanKetLuan*)pWnd)->OnDeletePhanKetLuan();
} 
static int _OnSavePhanKetLuanFnc(CWnd *pWnd){
	 return ((CPhanKetLuan*)pWnd)->OnSavePhanKetLuan();
} 
static int _OnCancelPhanKetLuanFnc(CWnd *pWnd){
	 return ((CPhanKetLuan*)pWnd)->OnCancelPhanKetLuan();
} 

// CPhanKetLuan::CPhanKetLuan(){
// 
// }
// CPhanKetLuan::CPhanKetLuan(CWnd *pParent, int nMode, long nDocNo, CString szRecordNo){
// 
// }
// CPhanKetLuan::~CPhanKetLuan(){
// }
// void CPhanKetLuan::Init(CWnd *pParent, int nMode, long nDocNo, CString szRecordNo){
// 	CGuiView::SetMode(nMode);
// 	m_nDocumentNo = nDocNo;
// 	m_szRecordNo = szRecordNo;
// 	m_nDlgWidth = 960;
// 	m_nDlgHeight = 600;
// 	SetDefaultValues();
// }

CPhanKetLuan::CPhanKetLuan(){
	
	m_szType = _T("BENH_AN_KL");
}

CPhanKetLuan::~CPhanKetLuan(){
}


void CPhanKetLuan::Init(int nMode, long nDocNo, CString szRecordNo, int nHtrIdx, int nCancerTime, int nTreatTime)
{
	CGuiView::SetMode(nMode);
	m_nDocumentNo = nDocNo;
	m_szRecordNo = szRecordNo;
	m_nHtrIdx = nHtrIdx;
	m_nCancerTime = nCancerTime;
	m_nTreatTime = nTreatTime;
	m_nDlgWidth = 960;
	m_nDlgHeight = 600;
	SetDefaultValues();
}
void CPhanKetLuan::OnCreateComponents(){
	m_wndbenhanLabel.Create(this, _T("1. Tóm tắt bệnh án:"), 5, 5, 155, 30);
	m_wndbenhan.Create(this,5, 31, 930, 231, 1, 0, 1); 
	m_wndchandoanLabel.Create(this, _T("2. Chẩn đoán:"), 5, 232, 155, 257);
	m_wndcdsbLabel.Create(this, _T("Chẩn đoán sơ bộ:"), 5, 258, 155, 283);
	m_wndcdsb.Create(this,5, 284, 465, 359, 1, 0, 1); 
	m_wndcdpbLabel.Create(this, _T("Chẩn đoán phân biệt:"), 5, 360, 155, 385);
	m_wndcdpb.Create(this,5, 386, 465, 461, 1, 0, 1); 
	m_wndcdxdLabel.Create(this, _T("Chẩn đoán xác định:"), 5, 462, 155, 487);
	m_wndcdxd.Create(this,5, 488, 465, 563, 1, 0, 1); 
	m_wndkhxnLabel.Create(this, _T("3. Kế hoạch xét nghiệm:"), 470, 258, 620, 283);
	m_wndkhxn.Create(this,470, 284, 930, 359, 1, 0, 1); 
	m_wndkhdtLabel.Create(this, _T("4. Kế hoạch điều trị:"), 470, 360, 620, 385);
	m_wndkhdt.Create(this,470, 386, 930, 461, 1, 0, 1); 
	m_wndtluongLabel.Create(this, _T("5. Tiên lượng:"), 470, 462, 620, 487);
	m_wndtluong.Create(this,470, 488, 930, 563, 1, 0, 1); 

}
void CPhanKetLuan::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
// 	m_wndbenhan.SetLimitText(35);
// 	m_wndbenhan.SetCheckValue(true);
// 	m_wndcdsb.SetLimitText(35);
// 	m_wndcdsb.SetCheckValue(true);
// 	m_wndcdpb.SetLimitText(35);
// 	m_wndcdpb.SetCheckValue(true);
// 	m_wndcdxd.SetLimitText(35);
// 	m_wndcdxd.SetCheckValue(true);
// 	m_wndkhxn.SetLimitText(35);
// 	m_wndkhxn.SetCheckValue(true);
// 	m_wndkhdt.SetLimitText(35);
// 	m_wndkhdt.SetCheckValue(true);
// 	m_wndtluong.SetLimitText(35);
// 	m_wndtluong.SetCheckValue(true);

}
void CPhanKetLuan::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndbenhan.SetEvent(WE_CHANGE, _OnbenhanChangeFnc);
	//m_wndbenhan.SetEvent(WE_SETFOCUS, _OnbenhanSetfocusFnc);
	//m_wndbenhan.SetEvent(WE_KILLFOCUS, _OnbenhanKillfocusFnc);
	m_wndbenhan.SetEvent(WE_CHECKVALUE, _OnbenhanCheckValueFnc);
	//m_wndcdsb.SetEvent(WE_CHANGE, _OncdsbChangeFnc);
	//m_wndcdsb.SetEvent(WE_SETFOCUS, _OncdsbSetfocusFnc);
	//m_wndcdsb.SetEvent(WE_KILLFOCUS, _OncdsbKillfocusFnc);
	m_wndcdsb.SetEvent(WE_CHECKVALUE, _OncdsbCheckValueFnc);
	//m_wndcdpb.SetEvent(WE_CHANGE, _OncdpbChangeFnc);
	//m_wndcdpb.SetEvent(WE_SETFOCUS, _OncdpbSetfocusFnc);
	//m_wndcdpb.SetEvent(WE_KILLFOCUS, _OncdpbKillfocusFnc);
	m_wndcdpb.SetEvent(WE_CHECKVALUE, _OncdpbCheckValueFnc);
	//m_wndcdxd.SetEvent(WE_CHANGE, _OncdxdChangeFnc);
	//m_wndcdxd.SetEvent(WE_SETFOCUS, _OncdxdSetfocusFnc);
	//m_wndcdxd.SetEvent(WE_KILLFOCUS, _OncdxdKillfocusFnc);
	m_wndcdxd.SetEvent(WE_CHECKVALUE, _OncdxdCheckValueFnc);
	//m_wndkhxn.SetEvent(WE_CHANGE, _OnkhxnChangeFnc);
	//m_wndkhxn.SetEvent(WE_SETFOCUS, _OnkhxnSetfocusFnc);
	//m_wndkhxn.SetEvent(WE_KILLFOCUS, _OnkhxnKillfocusFnc);
	m_wndkhxn.SetEvent(WE_CHECKVALUE, _OnkhxnCheckValueFnc);
	//m_wndkhdt.SetEvent(WE_CHANGE, _OnkhdtChangeFnc);
	//m_wndkhdt.SetEvent(WE_SETFOCUS, _OnkhdtSetfocusFnc);
	//m_wndkhdt.SetEvent(WE_KILLFOCUS, _OnkhdtKillfocusFnc);
	m_wndkhdt.SetEvent(WE_CHECKVALUE, _OnkhdtCheckValueFnc);
	//m_wndtluong.SetEvent(WE_CHANGE, _OntluongChangeFnc);
	//m_wndtluong.SetEvent(WE_SETFOCUS, _OntluongSetfocusFnc);
	//m_wndtluong.SetEvent(WE_KILLFOCUS, _OntluongKillfocusFnc);
	m_wndtluong.SetEvent(WE_CHECKVALUE, _OntluongCheckValueFnc);
	int nMode = GetMode();
	if(nMode == VM_VIEW || nMode == VM_EDIT)
		GetDataToScreen();
	SetMode(nMode);

}
void CPhanKetLuan::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndbenhan.GetDlgCtrlID(), m_szbenhan);
	DDX_Text(pDX, m_wndcdsb.GetDlgCtrlID(), m_szcdsb);
	DDX_Text(pDX, m_wndcdpb.GetDlgCtrlID(), m_szcdpb);
	DDX_Text(pDX, m_wndcdxd.GetDlgCtrlID(), m_szcdxd);
	DDX_Text(pDX, m_wndkhxn.GetDlgCtrlID(), m_szkhxn);
	DDX_Text(pDX, m_wndkhdt.GetDlgCtrlID(), m_szkhdt);
	DDX_Text(pDX, m_wndtluong.GetDlgCtrlID(), m_sztluong);

}
void CPhanKetLuan::UpdateJson(BOOL bSave){
	if(bSave)
	{
		UpdateData(TRUE);
		m_jData[_T("cancertime")] =  m_nCancerTime;
		m_jData[_T("benhan")] =  m_szbenhan;
		m_jData[_T("chan_doan_so_bo")] =  m_szcdsb;
		m_jData[_T("chan_doan_phan_biet")] =  m_szcdpb;
		m_jData[_T("chan_doan_xac_dinh")] =  m_szcdxd;
		m_jData[_T("ke_hoach_xet_nghiem")] =  m_szkhxn;
		m_jData[_T("ke_hoach_dieu_tri")] =  m_szkhdt;
		m_jData[_T("tien_luong")] =  m_sztluong;
	}
	else
	{
		m_jData[_T("cancertime")].GetValue(m_nCancerTime);
		m_jData[_T("benhan")].GetValue(m_szbenhan);
		m_jData[_T("chan_doan_so_bo")].GetValue(m_szcdsb);
		m_jData[_T("chan_doan_phan_biet")].GetValue(m_szcdpb);
		m_jData[_T("chan_doan_xac_dinh")].GetValue(m_szcdxd);
		m_jData[_T("ke_hoach_xet_nghiem")].GetValue(m_szkhxn);
		m_jData[_T("ke_hoach_dieu_tri")].GetValue(m_szkhdt);
		m_jData[_T("tien_luong")].GetValue(m_sztluong);
		UpdateData(FALSE);
	}

}
void CPhanKetLuan::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szData;
	int n = 0;
	CString szFilter;

	szFilter.Empty();

	bool res = pMF->GetEMRData(m_nDocumentNo, m_nTreatTime,  m_szType, m_szRecordNo, szFilter, szData);
	if(res)
	{
		m_jData.Parse(szData);
		UpdateJson(FALSE);
	}
	else
	{
		szSQL.Format(_T("SELECT COUNT(*) AS solan FROM hms_doc_emr WHERE hde_docno=%ld and hde_name in ('%s', 'BANGT') ") \
			_T(" and hde_type='BENH_AN_KL'  and hde_treattime= %d "), m_nDocumentNo, m_szRecordNo, m_nTreatTime);
		rs.ExecSQL(szSQL);
		rs.GetValue(_T("solan"), n);

		if(n > 0)
		{
			for (int i = 0; i < n; i++)
			{
				szSQL.Format(_T("SELECT to_char(hde_value) as hde_value FROM hms_doc_emr WHERE hde_docno=%ld and hde_name in ('%s', 'BANGT') ") \
					_T(" and hde_type='BENH_AN_KL' and hde_refidx = %d "), m_nDocumentNo, m_szRecordNo, i);
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
			m_wndbenhan.SetFocus();
		}
	}
}
void CPhanKetLuan::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateJson(TRUE);
}
void CPhanKetLuan::SetDefaultValues(){

	m_szbenhan.Empty();
	m_szcdsb.Empty();
	m_szcdpb.Empty();
	m_szcdxd.Empty();
	m_szkhxn.Empty();
	m_szkhdt.Empty();
	m_sztluong.Empty();

}
int CPhanKetLuan::SetMode(int nMode){
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
/*void CPhanKetLuan::OnbenhanChange(){
	
} */
/*void CPhanKetLuan::OnbenhanSetfocus(){
	
} */
/*void CPhanKetLuan::OnbenhanKillfocus(){
	
} */
int CPhanKetLuan::OnbenhanCheckValue(){
	return 0;
} 
/*void CPhanKetLuan::OncdsbChange(){
	
} */
/*void CPhanKetLuan::OncdsbSetfocus(){
	
} */
/*void CPhanKetLuan::OncdsbKillfocus(){
	
} */
int CPhanKetLuan::OncdsbCheckValue(){
	return 0;
} 
/*void CPhanKetLuan::OncdpbChange(){
	
} */
/*void CPhanKetLuan::OncdpbSetfocus(){
	
} */
/*void CPhanKetLuan::OncdpbKillfocus(){
	
} */
int CPhanKetLuan::OncdpbCheckValue(){
	return 0;
} 
/*void CPhanKetLuan::OncdxdChange(){
	
} */
/*void CPhanKetLuan::OncdxdSetfocus(){
	
} */
/*void CPhanKetLuan::OncdxdKillfocus(){
	
} */
int CPhanKetLuan::OncdxdCheckValue(){
	return 0;
} 
/*void CPhanKetLuan::OnkhxnChange(){
	
} */
/*void CPhanKetLuan::OnkhxnSetfocus(){
	
} */
/*void CPhanKetLuan::OnkhxnKillfocus(){
	
} */
int CPhanKetLuan::OnkhxnCheckValue(){
	return 0;
} 
/*void CPhanKetLuan::OnkhdtChange(){
	
} */
/*void CPhanKetLuan::OnkhdtSetfocus(){
	
} */
/*void CPhanKetLuan::OnkhdtKillfocus(){
	
} */
int CPhanKetLuan::OnkhdtCheckValue(){
	return 0;
} 
/*void CPhanKetLuan::OntluongChange(){
	
} */
/*void CPhanKetLuan::OntluongSetfocus(){
	
} */
/*void CPhanKetLuan::OntluongKillfocus(){
	
} */
int CPhanKetLuan::OntluongCheckValue(){
	return 0;
} 
int CPhanKetLuan::OnAddPhanKetLuan(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CPhanKetLuan::OnEditPhanKetLuan(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CPhanKetLuan::OnDeletePhanKetLuan(){
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
 		OnCancelPhanKetLuan();
 	}
	return 0;
}
int CPhanKetLuan::OnSavePhanKetLuan(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
		return -1;
	if(!IsValidateData())
		return -1;
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
	CString szSQL;
	CString szData;
	int ret = 0;
	m_jData.ToString(szData);
	int n =0;
	CString tmpStr;
	tmpStr = szData;
	//Thay function hms_doc_emr_create = function SaveEMRData
	bool res = pMF->SaveEMRData(m_szType, m_szRecordNo, m_nDocumentNo, pMF->m_szDept, pMF->m_nRefIndex, 0,  0, szData);
	if(!res)
		return -1;
	res = 1;

	/*
	pMF->BeginTransaction();
	szSQL.Format(_T("DELETE FROM hms_doc_emr WHERE hde_docno=%ld and hde_name='%s' and hde_type='BENH_AN_KL' AND hde_htridx = %d "), m_nDocumentNo, m_szRecordNo, m_nHtrIdx);
	pMF->ExecSQL(szSQL);

	CStringArray strList;
	pMF->String2Array(szData, &strList, 2000);
	for (int i =0; i < strList.GetCount();i++)
	{
		tmpStr = strList[i];
		tmpStr.Replace(_T("'"), _T("''"));
		szSQL.Format(_T("HMS_DOC_EMR_CREATE('BENH_AN_KL', %ld, '%s', %d, %d, '%s', '%s', '%s', %d, %d) "),
			m_nDocumentNo, pMF->m_szDept, n++, 0, pMF->GetCurrentUser(), m_szRecordNo, tmpStr, 0, m_nHtrIdx);
		ret = str2int(pMF->ExecDML(szSQL));
		if(ret < 0)
		{
			pMF->Rollback();
			return -1;
		}
		
	}
	pMF->Commit();
	*/
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
int CPhanKetLuan::OnCancelPhanKetLuan(){
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
int CPhanKetLuan::OnPhanKetLuanListLoadData(){
	return 0;
}

void CPhanKetLuan::Refresh(int nTreatTime)
{
	m_nTreatTime = nTreatTime;
	GetDataToScreen();
	SetMode(VM_VIEW);
}