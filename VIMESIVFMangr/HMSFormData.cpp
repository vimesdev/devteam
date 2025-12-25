#include "HMSFormData.h"
#include "MainFrm.h"
#include "StringToken.h"
#include "ReportDocument.h"
static void _OnFormSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSFormData* )pWnd)->OnFormSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnFormSelendokFnc(CWnd *pWnd){
	((CHMSFormData *)pWnd)->OnFormSelendok();
}
/*static void _OnFormSetfocusFnc(CWnd *pWnd){
	((CHMSFormData *)pWnd)->OnFormKillfocus();
}*/
/*static void _OnFormKillfocusFnc(CWnd *pWnd){
	((CHMSFormData *)pWnd)->OnFormKillfocus();
}*/
static long _OnFormLoadDataFnc(CWnd *pWnd){
	return ((CHMSFormData *)pWnd)->OnFormLoadData();
}
/*static void _OnFormAddNewFnc(CWnd *pWnd){
	((CHMSFormData *)pWnd)->OnFormAddNew();
}*/
/*static void _OnValueChangeFnc(CWnd *pWnd){
	((CHMSFormData *)pWnd)->OnValueChange();
} */
/*static void _OnValueSetfocusFnc(CWnd *pWnd){
	((CHMSFormData *)pWnd)->OnValueSetfocus();} */ 
/*static void _OnValueKillfocusFnc(CWnd *pWnd){
	((CHMSFormData *)pWnd)->OnValueKillfocus();
} */
static int _OnValueCheckValueFnc(CWnd *pWnd){
	return ((CHMSFormData *)pWnd)->OnValueCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSFormData *pVw = (CHMSFormData *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CHMSFormData *pVw = (CHMSFormData *)pWnd;
	pVw->OnPrintSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSFormData*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSFormData*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSFormData*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSFormData*)pWnd)->OnListDeleteItem();
} 
static int _OnListReloadFieldsFnc(CWnd *pWnd){
	 ((CHMSFormData*)pWnd)->OnReloadFields();
	 return 0;
} 
static int _OnAddHMSFormDataFnc(CWnd *pWnd){
	 return ((CHMSFormData*)pWnd)->OnAddHMSFormData();
} 
static int _OnEditHMSFormDataFnc(CWnd *pWnd){
	 return ((CHMSFormData*)pWnd)->OnEditHMSFormData();
} 
static int _OnDeleteHMSFormDataFnc(CWnd *pWnd){
	 return ((CHMSFormData*)pWnd)->OnDeleteHMSFormData();
} 
static int _OnSaveHMSFormDataFnc(CWnd *pWnd){
	 return ((CHMSFormData*)pWnd)->OnSaveHMSFormData();
} 
static int _OnCancelHMSFormDataFnc(CWnd *pWnd){
	 return ((CHMSFormData*)pWnd)->OnCancelHMSFormData();
} 
static void _OnTextCtrlChangeFnc(CWnd *pWnd){
	((CHMSFormData *)(pWnd->GetParent()))->OnTextCtrlChange();
}
CHMSFormData::CHMSFormData(CWnd *pParent):
	CGuiDialog(pParent){
	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
	m_nDocumentNo = 0;
}
CHMSFormData::~CHMSFormData(){
}
void CHMSFormData::OnCreateComponents(){
	m_wndFormData.Create(this, _T("Form Data"), 5, 5, 570, 385);
	m_wndFormLabel.Create(this, _T("Form"), 10, 30, 90, 55);
	m_wndForm.Create(this,95, 30, 360, 55); 
	m_wndValue.Create(this,365, 30, 565, 350, 0, 1, 1); 
	m_wndSave.Create(this, _T("&Save"), 365, 355, 465, 380);
	m_wndPrint.Create(this, _T("&Print"), 470, 355, 565, 380);
	m_wndList.Create(this,10, 60, 360, 380); 
	
}
void CHMSFormData::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndForm.SetCheckValue(true);
	m_wndForm.LimitText(35);
	m_wndValue.SetLimitText(1024);
	m_wndValue.SetCheckValue(true);

	m_wndForm.Format(1, 0);
	m_wndForm.InsertColumn(0, _T("Name"), CFMT_TEXT, 250);

	m_wndList.InsertColumn(0, _T("Field Name"), CFMT_TEXT, 0);
	m_wndList.InsertColumn(1, _T("Field Label"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(2, _T("Field Value"), CFMT_TEXT, 250);

}
void CHMSFormData::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndForm.SetEvent(WE_SELENDOK, _OnFormSelendokFnc);
	//m_wndForm.SetEvent(WE_SETFOCUS, _OnFormSetfocusFnc);
	//m_wndForm.SetEvent(WE_KILLFOCUS, _OnFormKillfocusFnc);
	m_wndForm.SetEvent(WE_SELCHANGE, _OnFormSelectChangeFnc);
	m_wndForm.SetEvent(WE_LOADDATA, _OnFormLoadDataFnc);
	//m_wndForm.SetEvent(WE_ADDNEW, _OnFormAddNewFnc);
	//m_wndValue.SetEvent(WE_CHANGE, _OnValueChangeFnc);
	//m_wndValue.SetEvent(WE_SETFOCUS, _OnValueSetfocusFnc);
	//m_wndValue.SetEvent(WE_KILLFOCUS, _OnValueKillfocusFnc);
	m_wndValue.SetEvent(WE_CHECKVALUE, _OnValueCheckValueFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	//m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndList.AddEvent(2, _T("Reload Fields"), _OnListReloadFieldsFnc);
	SetMode(VM_ADD);
	m_wndList.SetEditLabel(2, GUI_TEXTCTRL);
	CGuiTextCtrl *pTextCtrl = (CGuiTextCtrl*) m_wndList.GetEditControl(2);
	pTextCtrl->SetEvent(WE_CHANGE, _OnTextCtrlChangeFnc);
}
void CHMSFormData::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndForm.GetDlgCtrlID(), m_szFormKey);
	DDX_Text(pDX, m_wndValue.GetDlgCtrlID(), m_szValue);

}
void CHMSFormData::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Form")] =  m_szFormKey;
	m_jData[_T("Value")] =  m_szValue;
	}
	else
	{
			
	m_jData[_T("Form")].GetValue(m_szFormKey);
	m_jData[_T("Value")].GetValue(m_szValue);
	}

}
void CHMSFormData::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSFormData::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSFormData::SetDefaultValues(){

	m_szFormKey.Empty();
	m_szValue.Empty();

}
int CHMSFormData::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			//EnableControls(TRUE);
 			//EnableButtons(TRUE, 3, 4, -1);
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
void CHMSFormData::OnFormSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSFormData::OnFormSelendok(){
	UpdateData();
	OnListLoadData();
}
/*void CHMSFormData::OnFormSetfocus(){
	
}*/
/*void CHMSFormData::OnFormKillfocus(){
	
}*/
long CHMSFormData::OnFormLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndForm.IsSearchKey() && !m_szFormKey.IsEmpty()){
		szWhere.Format(_T(" and hfi_id='%s' "), m_szFormKey);
	}
	m_wndForm.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT hfi_id as name FROM hms_form_info WHERE 1=1 %s ORDER BY hfi_id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndForm.AddItems(
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSFormData::OnFormAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSFormData::OnValueChange(){
	
} */
/*void CHMSFormData::OnValueSetfocus(){
	
} */
/*void CHMSFormData::OnValueKillfocus(){
	
} */
int CHMSFormData::OnValueCheckValue(){
	return 0;
} 
void CHMSFormData::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData();
	CString szFields = ToConcatColumns();
	CString szSQL;
	szSQL.Format(_T("hms_form_data_add(%ld, '%s', '%s')"), m_nDocumentNo, m_szFormKey, szFields);
	int nRet = str2int(pMF->ExecDML(szSQL));
	if (nRet > 0){
		_msg(_T("Đã thêm dữ liệu mẫu %s"), m_szFormKey);
		//OnListLoadData();
		OnPrintSelect();
	}
} 
CString CHMSFormData::ToConcatColumns(){
	CString retStr;
	for (int i = 0; i < m_wndList.GetItemCount(); i++)
		for (int j = 0; j < m_wndList.GetColumnCount(); j++){
			if (j == 1) continue;
			if (j == 0 && i > 0) retStr += _T("|");
			if (j > 0) retStr+=_T("~");
			retStr += m_wndList.GetItemText(i, j);
		}
_tprintf(_T("\r\nretStr: %s"), retStr);
	return retStr;
}

void CHMSFormData::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CReport rpt;
	CString szReport, tmpStr;
	szReport.Format(_T("Reports\\HMS\\%s"), m_szFormKey);
	if (!rpt.Init(szReport)) return;
	CReportSection *rptHeader = rpt.GetReportHeader();
	if (!rptHeader){
		_tprintf(_T("Missing Header!"));
		return;
	}
	for (int i = 0; i < m_wndList.GetItemCount(); i++)
		rptHeader->SetValue(m_wndList.GetItemText(i, 0), m_wndList.GetItemText(i, 2));
	rpt.PrintPreview();
} 
void CHMSFormData::OnListDblClick(){
	
} 
void CHMSFormData::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData();
	m_wndValue.SetWindowText(m_wndList.GetItemText(nNewItem, 2));
} 
int CHMSFormData::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSFormData::OnListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CReport rpt;
	CReportSection *rptHeader = NULL;
	CReportItem* rptItem = NULL;
	CRecord rs(&pMF->m_db), prs(&pMF->m_db);
	CString szSQL, szReport, tmpStr, szName, szValue;
	szReport.Format(_T("Reports\\HMS\\%s"), m_szFormKey);
	rpt.Init(szReport);
	rptHeader = rpt.GetReportHeader();
	m_wndList.BeginLoad(); 
	int nCount = 0;
	bool bPrinted = true;
	szSQL.Format(_T("select hfd_field_values fields from hms_form_data where hfd_form_id = '%s' and hfd_docno = %ld"), m_szFormKey, m_nDocumentNo);
	rs.ExecSQL(szSQL);
	if (rs.GetRecordCount() <= 0){
		szSQL.Format(_T("select hfi_fields fields from hms_form_info where hfi_id = '%s'"), m_szFormKey);
		nCount = rs.ExecSQL(szSQL);
		bPrinted = false;
	}
	szSQL.Format(_T("select * from v_patient_info where so_ho_so = %ld"), m_nDocumentNo);
	prs.ExecSQL(szSQL);
	CStringToken tkFields(rs.GetStringValue(), _T("|"));
	if (!rs.IsEOF())
		for (int i = 0; i < tkFields.GetSize(); i++){
			tkFields.GetAt(i, tmpStr);
			CStringToken tkPair(tmpStr, _T("~"));
			szName.Empty();
			szValue.Empty();
			tkPair.GetAt(0, szName);
			tkPair.GetAt(1, szValue);
			tmpStr.Format(_T("%s_Label"), szName);
			rptItem = rptHeader->GetItem(tmpStr);
			if (rptItem) tmpStr = rptItem->GetText(); 
			m_wndList.AddItems(szName, tmpStr, bPrinted?szValue:prs.GetValue(szValue), NULL);
		}
	m_wndList.EndLoad(); 
	return nCount;
}

void CHMSFormData::OnReloadFields(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CReport rpt;
	CReportSection *rptHeader = NULL;
	CReportItem* rptItem = NULL;
	UpdateData();
	CRecord rs(&pMF->m_db), prs(&pMF->m_db);
	CString szSQL, tmpStr, szName, szValue, szReport;
	szSQL.Format(_T("select hfi_fields fields from hms_form_info where hfi_id = '%s'"), m_szFormKey);
	rs.ExecSQL(szSQL);
	szSQL.Format(_T("select * from v_patient_info where so_ho_so = %ld"), m_nDocumentNo);
	prs.ExecSQL(szSQL);
	CStringToken tkFields(rs.GetStringValue(), _T("|"));
	szReport.Format(_T("Reports\\HMS\\%s"), m_szFormKey);
	rpt.Init(szReport);
	rptHeader = rpt.GetReportHeader();
	for (int i = 0; i < tkFields.GetSize(); i++){
		tkFields.GetAt(i, tmpStr);
		CStringToken tkPair(tmpStr, _T("~"));
		szName.Empty();
		tkPair.GetAt(0, szName);
		tkPair.GetAt(1, szValue);
		rptItem = rptHeader->GetItem(tmpStr);
		if (rptItem) tmpStr = rptItem->GetText(); 
		if (!m_wndList.SetItemText(i, 0, szName)) m_wndList.AddItems(szName, tmpStr, prs.GetValue(szValue), NULL);
	}
	m_wndList.EndLoad();
}

int CHMSFormData::OnAddHMSFormData(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSFormData::OnEditHMSFormData(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSFormData::OnDeleteHMSFormData(){
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
 		OnCancelHMSFormData();
 	}
	return 0;
}
int CHMSFormData::OnSaveHMSFormData(){
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
 		//OnHMSFormDataListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSFormData::OnCancelHMSFormData(){
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
int CHMSFormData::OnHMSFormDataListLoadData(){
	return 0;
}

void CHMSFormData::OnTextCtrlChange(){
	CGuiTextCtrl *pTextCtrl = (CGuiTextCtrl*) GetFocus();
	CString tmpStr;
	pTextCtrl->GetWindowText(tmpStr);
	m_wndValue.SetWindowText(tmpStr);
}
