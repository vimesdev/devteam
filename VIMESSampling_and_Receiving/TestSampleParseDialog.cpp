#include "TestSampleParseDialog.h"
//#include "stdafx.h"
#include "MainFrm.h"
static void _OnBrowseSelectFnc(CWnd *pWnd){
	CTestSampleParseDialog *pVw = (CTestSampleParseDialog *)pWnd;
	pVw->OnBrowseSelect();
} 
/*static void _OnSampleChangeFnc(CWnd *pWnd){
	((CTestSampleParseDialog *)pWnd)->OnSampleChange();
} */
/*static void _OnSampleSetfocusFnc(CWnd *pWnd){
	((CTestSampleParseDialog *)pWnd)->OnSampleSetfocus();} */ 
/*static void _OnSampleKillfocusFnc(CWnd *pWnd){
	((CTestSampleParseDialog *)pWnd)->OnSampleKillfocus();
} */
static int _OnSampleCheckValueFnc(CWnd *pWnd){
	return ((CTestSampleParseDialog *)pWnd)->OnSampleCheckValue();
} 
/*static void _OnBeginTransmissionChangeFnc(CWnd *pWnd){
	((CTestSampleParseDialog *)pWnd)->OnBeginTransmissionChange();
} */
/*static void _OnBeginTransmissionSetfocusFnc(CWnd *pWnd){
	((CTestSampleParseDialog *)pWnd)->OnBeginTransmissionSetfocus();} */ 
/*static void _OnBeginTransmissionKillfocusFnc(CWnd *pWnd){
	((CTestSampleParseDialog *)pWnd)->OnBeginTransmissionKillfocus();
} */
static int _OnBeginTransmissionCheckValueFnc(CWnd *pWnd){
	return ((CTestSampleParseDialog *)pWnd)->OnBeginTransmissionCheckValue();
} 
/*static void _OnEndTransmissionChangeFnc(CWnd *pWnd){
	((CTestSampleParseDialog *)pWnd)->OnEndTransmissionChange();
} */
/*static void _OnEndTransmissionSetfocusFnc(CWnd *pWnd){
	((CTestSampleParseDialog *)pWnd)->OnEndTransmissionSetfocus();} */ 
/*static void _OnEndTransmissionKillfocusFnc(CWnd *pWnd){
	((CTestSampleParseDialog *)pWnd)->OnEndTransmissionKillfocus();
} */
static int _OnEndTransmissionCheckValueFnc(CWnd *pWnd){
	return ((CTestSampleParseDialog *)pWnd)->OnEndTransmissionCheckValue();
} 
/*static void _OnStartOfTextChangeFnc(CWnd *pWnd){
	((CTestSampleParseDialog *)pWnd)->OnStartOfTextChange();
} */
/*static void _OnStartOfTextSetfocusFnc(CWnd *pWnd){
	((CTestSampleParseDialog *)pWnd)->OnStartOfTextSetfocus();} */ 
/*static void _OnStartOfTextKillfocusFnc(CWnd *pWnd){
	((CTestSampleParseDialog *)pWnd)->OnStartOfTextKillfocus();
} */
static int _OnStartOfTextCheckValueFnc(CWnd *pWnd){
	return ((CTestSampleParseDialog *)pWnd)->OnStartOfTextCheckValue();
} 
/*static void _OnEndOfTextChangeFnc(CWnd *pWnd){
	((CTestSampleParseDialog *)pWnd)->OnEndOfTextChange();
} */
/*static void _OnEndOfTextSetfocusFnc(CWnd *pWnd){
	((CTestSampleParseDialog *)pWnd)->OnEndOfTextSetfocus();} */ 
/*static void _OnEndOfTextKillfocusFnc(CWnd *pWnd){
	((CTestSampleParseDialog *)pWnd)->OnEndOfTextKillfocus();
} */
static int _OnEndOfTextCheckValueFnc(CWnd *pWnd){
	return ((CTestSampleParseDialog *)pWnd)->OnEndOfTextCheckValue();
} 
/*static void _OnSeperatorChangeFnc(CWnd *pWnd){
	((CTestSampleParseDialog *)pWnd)->OnSeperatorChange();
} */
/*static void _OnSeperatorSetfocusFnc(CWnd *pWnd){
	((CTestSampleParseDialog *)pWnd)->OnSeperatorSetfocus();} */ 
/*static void _OnSeperatorKillfocusFnc(CWnd *pWnd){
	((CTestSampleParseDialog *)pWnd)->OnSeperatorKillfocus();
} */
static int _OnSeperatorCheckValueFnc(CWnd *pWnd){
	return ((CTestSampleParseDialog *)pWnd)->OnSeperatorCheckValue();
} 
/*static void _OnLengthChangeFnc(CWnd *pWnd){
	((CTestSampleParseDialog *)pWnd)->OnLengthChange();
} */
/*static void _OnLengthSetfocusFnc(CWnd *pWnd){
	((CTestSampleParseDialog *)pWnd)->OnLengthSetfocus();} */ 
/*static void _OnLengthKillfocusFnc(CWnd *pWnd){
	((CTestSampleParseDialog *)pWnd)->OnLengthKillfocus();
} */
static int _OnLengthCheckValueFnc(CWnd *pWnd){
	return ((CTestSampleParseDialog *)pWnd)->OnLengthCheckValue();
} 
static void _OnParseSelectFnc(CWnd *pWnd){
	CTestSampleParseDialog *pVw = (CTestSampleParseDialog *)pWnd;
	pVw->OnParseSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CTestSampleParseDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CTestSampleParseDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CTestSampleParseDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CTestSampleParseDialog*)pWnd)->OnListDeleteItem();
} 
static int _OnAddTestSampleParseDialogFnc(CWnd *pWnd){
	 return ((CTestSampleParseDialog*)pWnd)->OnAddTestSampleParseDialog();
} 
static int _OnEditTestSampleParseDialogFnc(CWnd *pWnd){
	 return ((CTestSampleParseDialog*)pWnd)->OnEditTestSampleParseDialog();
} 
static int _OnDeleteTestSampleParseDialogFnc(CWnd *pWnd){
	 return ((CTestSampleParseDialog*)pWnd)->OnDeleteTestSampleParseDialog();
} 
static int _OnSaveTestSampleParseDialogFnc(CWnd *pWnd){
	 return ((CTestSampleParseDialog*)pWnd)->OnSaveTestSampleParseDialog();
} 
static int _OnCancelTestSampleParseDialogFnc(CWnd *pWnd){
	 return ((CTestSampleParseDialog*)pWnd)->OnCancelTestSampleParseDialog();
} 
CTestSampleParseDialog::CTestSampleParseDialog(CWnd *pParent):
	CGuiDialog(pParent)
{

	m_nDlgWidth = 805;
	m_nDlgHeight = 605;
	SetDefaultValues();
}
CTestSampleParseDialog::~CTestSampleParseDialog(){
}
void CTestSampleParseDialog::OnCreateComponents(){
	m_wndBrowse.Create(this, _T("&Browse"), 5, 31, 75, 53);
	m_wndSampleLabel.Create(this, _T("Sample"), 5, 5, 125, 27);
	m_wndSample.Create(this,130, 5, 780, 155, TRUE, FALSE, TRUE); 
	m_wndBeginTransmissionLabel.Create(this, _T("Begin Transmission"), 5, 162, 125, 184);
	m_wndBeginTransmission.Create(this,130, 162, 280, 184); 
	m_wndEndTransmissionLabel.Create(this, _T("End Transmission"), 286, 162, 406, 184);
	m_wndEndTransmission.Create(this,411, 162, 561, 184); 
	m_wndStartOfTextLabel.Create(this, _T("Start of text"), 5, 191, 125, 213);
	m_wndStartOfText.Create(this,130, 191, 280, 213); 
	m_wndEndOfTextLabel.Create(this, _T("End of Text"), 287, 188, 407, 210);
	m_wndEndOfText.Create(this,412, 188, 562, 210); 
	m_wndSeperatorLabel.Create(this, _T("Seperator"), 566, 162, 642, 184);
	m_wndSeperator.Create(this,647, 162, 779, 184); 
	m_wndLengthLabel.Create(this, _T("Length"), 5, 219, 125, 241);
	m_wndLength.Create(this,130, 219, 779, 241); 
	m_wndParse.Create(this, _T("&Parse"), 5, 137, 75, 159);
	m_wndList.Create(this,6, 247, 778, 574); 

}
void CTestSampleParseDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndSample.SetLimitText(35);
	m_wndSample.SetCheckValue(true);
	m_wndBeginTransmission.SetLimitText(35);
	m_wndBeginTransmission.SetCheckValue(true);
	m_wndEndTransmission.SetLimitText(35);
	m_wndEndTransmission.SetCheckValue(true);
	m_wndStartOfText.SetLimitText(35);
	m_wndStartOfText.SetCheckValue(true);
	m_wndEndOfText.SetLimitText(35);
	m_wndEndOfText.SetCheckValue(true);
	m_wndSeperator.SetLimitText(35);
	m_wndSeperator.SetCheckValue(true);
	m_wndLength.SetLimitText(35);
	m_wndLength.SetCheckValue(true);


	m_wndList.InsertColumn(0, _T("Index"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(1, _T("Field"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(2, _T("Value"), CFMT_TEXT, 200);
	m_wndList.InsertColumn(3, _T("Length"), CFMT_NUMBER, 70);
	SetMode(VM_ADD);

}
void CTestSampleParseDialog::OnSetWindowEvents(){
	m_wndBrowse.SetEvent(WE_CLICK, _OnBrowseSelectFnc);
	//m_wndSample.SetEvent(WE_CHANGE, _OnSampleChangeFnc);
	//m_wndSample.SetEvent(WE_SETFOCUS, _OnSampleSetfocusFnc);
	//m_wndSample.SetEvent(WE_KILLFOCUS, _OnSampleKillfocusFnc);
	m_wndSample.SetEvent(WE_CHECKVALUE, _OnSampleCheckValueFnc);
	//m_wndBeginTransmission.SetEvent(WE_CHANGE, _OnBeginTransmissionChangeFnc);
	//m_wndBeginTransmission.SetEvent(WE_SETFOCUS, _OnBeginTransmissionSetfocusFnc);
	//m_wndBeginTransmission.SetEvent(WE_KILLFOCUS, _OnBeginTransmissionKillfocusFnc);
	m_wndBeginTransmission.SetEvent(WE_CHECKVALUE, _OnBeginTransmissionCheckValueFnc);
	//m_wndEndTransmission.SetEvent(WE_CHANGE, _OnEndTransmissionChangeFnc);
	//m_wndEndTransmission.SetEvent(WE_SETFOCUS, _OnEndTransmissionSetfocusFnc);
	//m_wndEndTransmission.SetEvent(WE_KILLFOCUS, _OnEndTransmissionKillfocusFnc);
	m_wndEndTransmission.SetEvent(WE_CHECKVALUE, _OnEndTransmissionCheckValueFnc);
	//m_wndStartOfText.SetEvent(WE_CHANGE, _OnStartOfTextChangeFnc);
	//m_wndStartOfText.SetEvent(WE_SETFOCUS, _OnStartOfTextSetfocusFnc);
	//m_wndStartOfText.SetEvent(WE_KILLFOCUS, _OnStartOfTextKillfocusFnc);
	m_wndStartOfText.SetEvent(WE_CHECKVALUE, _OnStartOfTextCheckValueFnc);
	//m_wndEndOfText.SetEvent(WE_CHANGE, _OnEndOfTextChangeFnc);
	//m_wndEndOfText.SetEvent(WE_SETFOCUS, _OnEndOfTextSetfocusFnc);
	//m_wndEndOfText.SetEvent(WE_KILLFOCUS, _OnEndOfTextKillfocusFnc);
	m_wndEndOfText.SetEvent(WE_CHECKVALUE, _OnEndOfTextCheckValueFnc);
	//m_wndSeperator.SetEvent(WE_CHANGE, _OnSeperatorChangeFnc);
	//m_wndSeperator.SetEvent(WE_SETFOCUS, _OnSeperatorSetfocusFnc);
	//m_wndSeperator.SetEvent(WE_KILLFOCUS, _OnSeperatorKillfocusFnc);
	m_wndSeperator.SetEvent(WE_CHECKVALUE, _OnSeperatorCheckValueFnc);
	//m_wndLength.SetEvent(WE_CHANGE, _OnLengthChangeFnc);
	//m_wndLength.SetEvent(WE_SETFOCUS, _OnLengthSetfocusFnc);
	//m_wndLength.SetEvent(WE_KILLFOCUS, _OnLengthKillfocusFnc);
	m_wndLength.SetEvent(WE_CHECKVALUE, _OnLengthCheckValueFnc);
	m_wndParse.SetEvent(WE_CLICK, _OnParseSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);

}
void CTestSampleParseDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndSample.GetDlgCtrlID(), m_szSample);
	DDX_Text(pDX, m_wndBeginTransmission.GetDlgCtrlID(), m_szBeginTransmission);
	DDX_Text(pDX, m_wndEndTransmission.GetDlgCtrlID(), m_szEndTransmission);
	DDX_Text(pDX, m_wndStartOfText.GetDlgCtrlID(), m_szStartOfText);
	DDX_Text(pDX, m_wndEndOfText.GetDlgCtrlID(), m_szEndOfText);
	DDX_Text(pDX, m_wndSeperator.GetDlgCtrlID(), m_szSeperator);
	DDX_Text(pDX, m_wndLength.GetDlgCtrlID(), m_szLength);

}
void CTestSampleParseDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CTestSampleParseDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CTestSampleParseDialog::SetDefaultValues(){

	m_szSample.Empty();
	m_szBeginTransmission.Empty();
	m_szEndTransmission.Empty();
	m_szStartOfText.Empty();
	m_szEndOfText.Empty();
	m_szSeperator.Empty();
	m_szLength.Empty();

}
int CTestSampleParseDialog::SetMode(int nMode){ 
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
void CTestSampleParseDialog::OnBrowseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CFileDialog dlg(true);
	if(dlg.DoModal() == IDOK){
		CFile file;
		file.Open(dlg.GetPathName(), CFile::modeRead);
		CString tmpStr;
		file.Read(tmpStr.GetBufferSetLength(file.GetLength()), file.GetLength());
		tmpStr.ReleaseBuffer();
		m_szSample = tmpStr;
		UpdateData(false);
		file.Close();
	}
	
} 
/*void CTestSampleParseDialog::OnSampleChange(){
	
} */
/*void CTestSampleParseDialog::OnSampleSetfocus(){
	
} */
/*void CTestSampleParseDialog::OnSampleKillfocus(){
	
} */
int CTestSampleParseDialog::OnSampleCheckValue(){
	return 0;
} 
/*void CTestSampleParseDialog::OnBeginTransmissionChange(){
	
} */
/*void CTestSampleParseDialog::OnBeginTransmissionSetfocus(){
	
} */
/*void CTestSampleParseDialog::OnBeginTransmissionKillfocus(){
	
} */
int CTestSampleParseDialog::OnBeginTransmissionCheckValue(){
	UpdateData(true);
	CString tmpStr;
	tmpStr.Format(_T("\r\n%s"), m_szBeginTransmission);
	m_szSample.Replace(m_szBeginTransmission, tmpStr);
	UpdateData(false);
	return 0;
} 
/*void CTestSampleParseDialog::OnEndTransmissionChange(){
	
} */
/*void CTestSampleParseDialog::OnEndTransmissionSetfocus(){
	
} */
/*void CTestSampleParseDialog::OnEndTransmissionKillfocus(){
	
} */
int CTestSampleParseDialog::OnEndTransmissionCheckValue(){
	return 0;
} 
/*void CTestSampleParseDialog::OnStartOfTextChange(){
	
} */
/*void CTestSampleParseDialog::OnStartOfTextSetfocus(){
	
} */
/*void CTestSampleParseDialog::OnStartOfTextKillfocus(){
	
} */
int CTestSampleParseDialog::OnStartOfTextCheckValue(){
	return 0;
} 
/*void CTestSampleParseDialog::OnEndOfTextChange(){
	
} */
/*void CTestSampleParseDialog::OnEndOfTextSetfocus(){
	
} */
/*void CTestSampleParseDialog::OnEndOfTextKillfocus(){
	
} */
int CTestSampleParseDialog::OnEndOfTextCheckValue(){
	return 0;
} 
/*void CTestSampleParseDialog::OnSeperatorChange(){
	
} */
/*void CTestSampleParseDialog::OnSeperatorSetfocus(){
	
} */
/*void CTestSampleParseDialog::OnSeperatorKillfocus(){
	
} */
int CTestSampleParseDialog::OnSeperatorCheckValue(){
	return 0;
} 
/*void CTestSampleParseDialog::OnLengthChange(){
	
} */
/*void CTestSampleParseDialog::OnLengthSetfocus(){
	
} */
/*void CTestSampleParseDialog::OnLengthKillfocus(){
	
} */
int CTestSampleParseDialog::OnLengthCheckValue(){
	return 0;
} 


void CTestSampleParseDialog::OnParseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	int nLength;
	int n = 0, nIndex = 1;
	CString tmpStr, szLength, szIndex;
	if(m_szSeperator.IsEmpty()){
		
		m_wndList.BeginLoad();
		if(m_szLength.IsEmpty())
			return;
parse:
		while(n < m_szSample.GetLength()){
			if(m_szSample.Mid(n, m_szBeginTransmission.GetLength()) == m_szBeginTransmission){
				break;
			}
			n++;
		}

		for (int i =0; i < m_szLength.GetLength(); i+=2){
			nLength = ToInt(m_szLength.Mid(i, 2));
			tmpStr = m_szSample.Mid(n, nLength);
			szLength.Format(_T("%d"), nLength);
			szIndex.Format(_T("%d"), nIndex++);
			m_wndList.AddItems(szIndex, _T(""), tmpStr, szLength, NULL);
			n += nLength;
		}

		
		while(n < m_szSample.GetLength()){
			if(m_szSample.Mid(n, m_szEndTransmission.GetLength()) == m_szEndTransmission){
				goto parse;
			}
			nLength = ToInt(m_szLength.Mid(m_szLength.GetLength()-4, 2));
			tmpStr = m_szSample.Mid(n, nLength);
			szLength.Format(_T("%d"), nLength);
			szIndex.Format(_T("%d"), nIndex++);
			m_wndList.AddItems(szIndex, _T(""), tmpStr, szLength, NULL);
			n += nLength;
			nLength = ToInt(m_szLength.Mid(m_szLength.GetLength()-2, 2));
			tmpStr = m_szSample.Mid(n, nLength);
			szLength.Format(_T("%d"), nLength);
			szIndex.Format(_T("%d"), nIndex++);
			m_wndList.AddItems(szIndex, _T(""), tmpStr, szLength, NULL);
			n += nLength;			
		}

		m_wndList.EndLoad();
	}
	else
	{
		CStringArray fields;
		ParseResultFields(m_szSample, m_szSeperator, fields);
		for (int i =0; i < fields.GetCount(); i++){
			tmpStr = fields[i];
			szLength.Format(_T("%d"), tmpStr.GetLength());
			szIndex.Format(_T("%d"), nIndex++);
			m_wndList.AddItems(szIndex, _T(""), tmpStr, szLength, NULL);
		}

	}
	
} 
void CTestSampleParseDialog::OnListDblClick(){
	
} 
void CTestSampleParseDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CTestSampleParseDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CTestSampleParseDialog::OnListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	m_wndList.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("Index")), 
			rs.GetValue(_T("Field")), 
			rs.GetValue(_T("Value")), 
			rs.GetValue(_T("Length")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
*/
	return 0;
}
int CTestSampleParseDialog::OnAddTestSampleParseDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Add TestSampleParseDialog"))) 
 		return -1; 
 	SetMode(VM_ADD);
return 0; 
 
} 
int CTestSampleParseDialog::OnEditTestSampleParseDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Edit TestSampleParseDialog"))) 
 		return -1; 
 	SetMode(VM_EDIT);
return 0;  
 
} 
int CTestSampleParseDialog::OnDeleteTestSampleParseDialog(){
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
 		OnCancelTestSampleParseDialog(); 
 	}
return 0;
 } 
int CTestSampleParseDialog::OnSaveTestSampleParseDialog(){
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
 		//OnTestSampleParseDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 		pMF->FinishWork(this); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CTestSampleParseDialog::OnCancelTestSampleParseDialog(){
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
int CTestSampleParseDialog::OnTestSampleParseDialogListLoadData(){
	return 0;
}
