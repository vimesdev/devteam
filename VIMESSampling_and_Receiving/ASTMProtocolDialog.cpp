#include "ASTMProtocolDialog.h"
//#include "stdafx.h"
#include "MainFrm.h"
/*static void _OnSampleDataChangeFnc(CWnd *pWnd){
	((CASTMProtocolDialog *)pWnd)->OnSampleDataChange();
} */
/*static void _OnSampleDataSetfocusFnc(CWnd *pWnd){
	((CASTMProtocolDialog *)pWnd)->OnSampleDataSetfocus();} */ 
/*static void _OnSampleDataKillfocusFnc(CWnd *pWnd){
	((CASTMProtocolDialog *)pWnd)->OnSampleDataKillfocus();
} */
static int _OnSampleDataCheckValueFnc(CWnd *pWnd){
	return ((CASTMProtocolDialog *)pWnd)->OnSampleDataCheckValue();
} 
static void _OnBrowseSelectFnc(CWnd *pWnd){
	CASTMProtocolDialog *pVw = (CASTMProtocolDialog *)pWnd;
	pVw->OnBrowseSelect();
} 
static void _OnParseSelectFnc(CWnd *pWnd){
	CASTMProtocolDialog *pVw = (CASTMProtocolDialog *)pWnd;
	pVw->OnParseSelect();
} 
static void _OnProtocolSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CASTMProtocolDialog* )pWnd)->OnProtocolSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnProtocolSelendokFnc(CWnd *pWnd){
	((CASTMProtocolDialog *)pWnd)->OnProtocolSelendok();
}
/*static void _OnProtocolSetfocusFnc(CWnd *pWnd){
	((CASTMProtocolDialog *)pWnd)->OnProtocolKillfocus();
}*/
/*static void _OnProtocolKillfocusFnc(CWnd *pWnd){
	((CASTMProtocolDialog *)pWnd)->OnProtocolKillfocus();
}*/
static long _OnProtocolLoadDataFnc(CWnd *pWnd){
	return ((CASTMProtocolDialog *)pWnd)->OnProtocolLoadData();
}
/*static void _OnProtocolAddNewFnc(CWnd *pWnd){
	((CASTMProtocolDialog *)pWnd)->OnProtocolAddNew();
}*/
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CASTMProtocolDialog *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CASTMProtocolDialog *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CASTMProtocolDialog *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CASTMProtocolDialog *)pWnd)->OnNameCheckValue();
} 
/*static void _OnSeperatorChangeFnc(CWnd *pWnd){
	((CASTMProtocolDialog *)pWnd)->OnSeperatorChange();
} */
/*static void _OnSeperatorSetfocusFnc(CWnd *pWnd){
	((CASTMProtocolDialog *)pWnd)->OnSeperatorSetfocus();} */ 
/*static void _OnSeperatorKillfocusFnc(CWnd *pWnd){
	((CASTMProtocolDialog *)pWnd)->OnSeperatorKillfocus();
} */
static int _OnSeperatorCheckValueFnc(CWnd *pWnd){
	return ((CASTMProtocolDialog *)pWnd)->OnSeperatorCheckValue();
} 
/*static void _OnHeaderRecordChangeFnc(CWnd *pWnd){
	((CASTMProtocolDialog *)pWnd)->OnHeaderRecordChange();
} */
/*static void _OnHeaderRecordSetfocusFnc(CWnd *pWnd){
	((CASTMProtocolDialog *)pWnd)->OnHeaderRecordSetfocus();} */ 
/*static void _OnHeaderRecordKillfocusFnc(CWnd *pWnd){
	((CASTMProtocolDialog *)pWnd)->OnHeaderRecordKillfocus();
} */
static int _OnHeaderRecordCheckValueFnc(CWnd *pWnd){
	return ((CASTMProtocolDialog *)pWnd)->OnHeaderRecordCheckValue();
} 
/*static void _OnPatientRecordChangeFnc(CWnd *pWnd){
	((CASTMProtocolDialog *)pWnd)->OnPatientRecordChange();
} */
/*static void _OnPatientRecordSetfocusFnc(CWnd *pWnd){
	((CASTMProtocolDialog *)pWnd)->OnPatientRecordSetfocus();} */ 
/*static void _OnPatientRecordKillfocusFnc(CWnd *pWnd){
	((CASTMProtocolDialog *)pWnd)->OnPatientRecordKillfocus();
} */
static int _OnPatientRecordCheckValueFnc(CWnd *pWnd){
	return ((CASTMProtocolDialog *)pWnd)->OnPatientRecordCheckValue();
} 
/*static void _OnOrderRecordChangeFnc(CWnd *pWnd){
	((CASTMProtocolDialog *)pWnd)->OnOrderRecordChange();
} */
/*static void _OnOrderRecordSetfocusFnc(CWnd *pWnd){
	((CASTMProtocolDialog *)pWnd)->OnOrderRecordSetfocus();} */ 
/*static void _OnOrderRecordKillfocusFnc(CWnd *pWnd){
	((CASTMProtocolDialog *)pWnd)->OnOrderRecordKillfocus();
} */
static int _OnOrderRecordCheckValueFnc(CWnd *pWnd){
	return ((CASTMProtocolDialog *)pWnd)->OnOrderRecordCheckValue();
} 
/*static void _OnResultRecordChangeFnc(CWnd *pWnd){
	((CASTMProtocolDialog *)pWnd)->OnResultRecordChange();
} */
/*static void _OnResultRecordSetfocusFnc(CWnd *pWnd){
	((CASTMProtocolDialog *)pWnd)->OnResultRecordSetfocus();} */ 
/*static void _OnResultRecordKillfocusFnc(CWnd *pWnd){
	((CASTMProtocolDialog *)pWnd)->OnResultRecordKillfocus();
} */
static int _OnResultRecordCheckValueFnc(CWnd *pWnd){
	return ((CASTMProtocolDialog *)pWnd)->OnResultRecordCheckValue();
} 
/*static void _OnQueryRecordChangeFnc(CWnd *pWnd){
	((CASTMProtocolDialog *)pWnd)->OnQueryRecordChange();
} */
/*static void _OnQueryRecordSetfocusFnc(CWnd *pWnd){
	((CASTMProtocolDialog *)pWnd)->OnQueryRecordSetfocus();} */ 
/*static void _OnQueryRecordKillfocusFnc(CWnd *pWnd){
	((CASTMProtocolDialog *)pWnd)->OnQueryRecordKillfocus();
} */
static int _OnQueryRecordCheckValueFnc(CWnd *pWnd){
	return ((CASTMProtocolDialog *)pWnd)->OnQueryRecordCheckValue();
} 
/*static void _OnTerminateRecordChangeFnc(CWnd *pWnd){
	((CASTMProtocolDialog *)pWnd)->OnTerminateRecordChange();
} */
/*static void _OnTerminateRecordSetfocusFnc(CWnd *pWnd){
	((CASTMProtocolDialog *)pWnd)->OnTerminateRecordSetfocus();} */ 
/*static void _OnTerminateRecordKillfocusFnc(CWnd *pWnd){
	((CASTMProtocolDialog *)pWnd)->OnTerminateRecordKillfocus();
} */
static int _OnTerminateRecordCheckValueFnc(CWnd *pWnd){
	return ((CASTMProtocolDialog *)pWnd)->OnTerminateRecordCheckValue();
} 
static long _OnFieldLoadDataFnc(CWnd *pWnd){
	return ((CASTMProtocolDialog*)pWnd)->OnFieldLoadData();
} 
static void _OnFieldDblClickFnc(CWnd *pWnd){
	((CASTMProtocolDialog*)pWnd)->OnFieldDblClick();
} 
static void _OnFieldSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CASTMProtocolDialog*)pWnd)->OnFieldSelectChange(nOldItem, nNewItem);
} 
static int _OnFieldDeleteItemFnc(CWnd *pWnd){
	 return ((CASTMProtocolDialog*)pWnd)->OnFieldDeleteItem();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CASTMProtocolDialog *pVw = (CASTMProtocolDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static int _OnAddASTMProtocolDialogFnc(CWnd *pWnd){
	 return ((CASTMProtocolDialog*)pWnd)->OnAddASTMProtocolDialog();
} 
static int _OnEditASTMProtocolDialogFnc(CWnd *pWnd){
	 return ((CASTMProtocolDialog*)pWnd)->OnEditASTMProtocolDialog();
} 
static int _OnDeleteASTMProtocolDialogFnc(CWnd *pWnd){
	 return ((CASTMProtocolDialog*)pWnd)->OnDeleteASTMProtocolDialog();
} 
static int _OnSaveASTMProtocolDialogFnc(CWnd *pWnd){
	 return ((CASTMProtocolDialog*)pWnd)->OnSaveASTMProtocolDialog();
} 
static int _OnCancelASTMProtocolDialogFnc(CWnd *pWnd){
	 return ((CASTMProtocolDialog*)pWnd)->OnCancelASTMProtocolDialog();
} 
CASTMProtocolDialog::CASTMProtocolDialog(CWnd *pParent):
	CGuiDialog(pParent)
{

	m_nDlgWidth = 805;
	m_nDlgHeight = 555;
	SetDefaultValues();
}
CASTMProtocolDialog::~CASTMProtocolDialog(){
}
void CASTMProtocolDialog::OnCreateComponents(){
	m_wndSampleDataLabel.Create(this, _T("Sample Data"), 5, 5, 105, 27);
	m_wndSampleData.Create(this,110, 5, 796, 149, TRUE, FALSE, TRUE); 
	m_wndBrowse.Create(this, _T("Browse"), 5, 31, 105, 53);
	m_wndParse.Create(this, _T("&Parse"), 5, 123, 105, 145);
	m_wndProtocoLabel.Create(this, _T("Protocol"), 5, 154, 105, 176);
	m_wndProtocol.Create(this,110, 154, 260, 176); 
	m_wndNameLabel.Create(this, _T("Name"), 265, 154, 335, 176);
	m_wndName.Create(this,340, 154, 490, 176); 
	m_wndSeperatorLabel.Create(this, _T("Seperator"), 495, 154, 565, 176);
	m_wndSeperator.Create(this,570, 154, 796, 176); 
	m_wndHeaderRecordLabel.Create(this, _T("Header Record"), 5, 181, 105, 203);
	m_wndHeaderRecord.Create(this,110, 181, 490, 203); 
	m_wndPatientRecordLabel.Create(this, _T("Patient Record"), 5, 208, 105, 230);
	m_wndPatientRecord.Create(this,110, 208, 490, 230); 
	m_wndOrderRecordLabel.Create(this, _T("Order Record"), 5, 235, 105, 257);
	m_wndOrderRecord.Create(this,110, 235, 490, 257); 
	m_wndResultRecordLabel.Create(this, _T("Result Record"), 5, 261, 105, 283);
	m_wndResultRecord.Create(this,110, 261, 490, 283); 
	m_wndQueryRecordLabel.Create(this, _T("Query Record"), 5, 288, 105, 310);
	m_wndQueryRecord.Create(this,110, 288, 490, 310); 
	m_wndTerminateLabel.Create(this, _T("Terminate"), 5, 315, 105, 337);
	m_wndTerminateRecord.Create(this,110, 315, 490, 337); 
	m_wndField.Create(this,495, 181, 796, 548); 
	m_wndSpecimenID.Create(this, _T("<SID>            : Specimen ID"), 110, 342, 490, 364);
	m_wndPIDPatientID.Create(this, _T("<PID>            : Patient ID"), 110, 369, 490, 391);
	m_wndSEQNOSequenceNo.Create(this, _T("<SEQNO>      : Sequence No"), 110, 396, 490, 418);
	m_wndRackNo.Create(this, _T("<RACKNO>    : Rack No"), 110, 423, 490, 445);
	m_wndCUPNOCupNo.Create(this, _T("<CUPNO>      : Cup No"), 110, 450, 490, 472);
	m_wndTESTIDTestID.Create(this, _T("<TESTID>      : Test ID"), 110, 477, 490, 499);
	m_wndCRLastFieldSentence.Create(this, _T("<CR>             : Last Field Sentence"), 110, 504, 490, 526);
	m_wndSave.Create(this, _T("&Save"), 5, 59, 105, 81);

}
void CASTMProtocolDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
//	m_wndSampleData.SetLimitText(4096);
	m_wndSampleData.SetCheckValue(true);
	m_wndProtocol.SetCheckValue(true);
	m_wndProtocol.LimitText(1024);
	m_wndName.SetLimitText(1024);
	m_wndName.SetCheckValue(true);
	m_wndSeperator.SetLimitText(1024);
	m_wndSeperator.SetCheckValue(true);
	m_wndHeaderRecord.SetLimitText(1024);
	m_wndHeaderRecord.SetCheckValue(true);
	m_wndPatientRecord.SetLimitText(1024);
	m_wndPatientRecord.SetCheckValue(true);
	m_wndOrderRecord.SetLimitText(1024);
	m_wndOrderRecord.SetCheckValue(true);
	m_wndResultRecord.SetLimitText(1024);
	m_wndResultRecord.SetCheckValue(true);
	m_wndQueryRecord.SetLimitText(1024);
	m_wndQueryRecord.SetCheckValue(true);
	m_wndTerminateRecord.SetLimitText(1024);
	m_wndTerminateRecord.SetCheckValue(true);


	m_wndProtocol.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndProtocol.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndField.InsertColumn(0, _T("Index"), CFMT_TEXT, 50);
	m_wndField.InsertColumn(1, _T("ID"), CFMT_TEXT, 50);
	m_wndField.InsertColumn(2, _T("Name"), CFMT_TEXT, 120);
	m_wndField.InsertColumn(3, _T("Length"), CFMT_NUMBER, 50);
	SetMode(VM_ADD);

}
void CASTMProtocolDialog::OnSetWindowEvents(){
	//m_wndSampleData.SetEvent(WE_CHANGE, _OnSampleDataChangeFnc);
	//m_wndSampleData.SetEvent(WE_SETFOCUS, _OnSampleDataSetfocusFnc);
	//m_wndSampleData.SetEvent(WE_KILLFOCUS, _OnSampleDataKillfocusFnc);
	m_wndSampleData.SetEvent(WE_CHECKVALUE, _OnSampleDataCheckValueFnc);
	m_wndBrowse.SetEvent(WE_CLICK, _OnBrowseSelectFnc);
	m_wndParse.SetEvent(WE_CLICK, _OnParseSelectFnc);
	m_wndProtocol.SetEvent(WE_SELENDOK, _OnProtocolSelendokFnc);
	//m_wndProtocol.SetEvent(WE_SETFOCUS, _OnProtocolSetfocusFnc);
	//m_wndProtocol.SetEvent(WE_KILLFOCUS, _OnProtocolKillfocusFnc);
	m_wndProtocol.SetEvent(WE_SELCHANGE, _OnProtocolSelectChangeFnc);
	m_wndProtocol.SetEvent(WE_LOADDATA, _OnProtocolLoadDataFnc);
	//m_wndProtocol.SetEvent(WE_ADDNEW, _OnProtocolAddNewFnc);
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	//m_wndSeperator.SetEvent(WE_CHANGE, _OnSeperatorChangeFnc);
	//m_wndSeperator.SetEvent(WE_SETFOCUS, _OnSeperatorSetfocusFnc);
	//m_wndSeperator.SetEvent(WE_KILLFOCUS, _OnSeperatorKillfocusFnc);
	m_wndSeperator.SetEvent(WE_CHECKVALUE, _OnSeperatorCheckValueFnc);
	//m_wndHeaderRecord.SetEvent(WE_CHANGE, _OnHeaderRecordChangeFnc);
	//m_wndHeaderRecord.SetEvent(WE_SETFOCUS, _OnHeaderRecordSetfocusFnc);
	//m_wndHeaderRecord.SetEvent(WE_KILLFOCUS, _OnHeaderRecordKillfocusFnc);
	m_wndHeaderRecord.SetEvent(WE_CHECKVALUE, _OnHeaderRecordCheckValueFnc);
	//m_wndPatientRecord.SetEvent(WE_CHANGE, _OnPatientRecordChangeFnc);
	//m_wndPatientRecord.SetEvent(WE_SETFOCUS, _OnPatientRecordSetfocusFnc);
	//m_wndPatientRecord.SetEvent(WE_KILLFOCUS, _OnPatientRecordKillfocusFnc);
	m_wndPatientRecord.SetEvent(WE_CHECKVALUE, _OnPatientRecordCheckValueFnc);
	//m_wndOrderRecord.SetEvent(WE_CHANGE, _OnOrderRecordChangeFnc);
	//m_wndOrderRecord.SetEvent(WE_SETFOCUS, _OnOrderRecordSetfocusFnc);
	//m_wndOrderRecord.SetEvent(WE_KILLFOCUS, _OnOrderRecordKillfocusFnc);
	m_wndOrderRecord.SetEvent(WE_CHECKVALUE, _OnOrderRecordCheckValueFnc);
	//m_wndResultRecord.SetEvent(WE_CHANGE, _OnResultRecordChangeFnc);
	//m_wndResultRecord.SetEvent(WE_SETFOCUS, _OnResultRecordSetfocusFnc);
	//m_wndResultRecord.SetEvent(WE_KILLFOCUS, _OnResultRecordKillfocusFnc);
	m_wndResultRecord.SetEvent(WE_CHECKVALUE, _OnResultRecordCheckValueFnc);
	//m_wndQueryRecord.SetEvent(WE_CHANGE, _OnQueryRecordChangeFnc);
	//m_wndQueryRecord.SetEvent(WE_SETFOCUS, _OnQueryRecordSetfocusFnc);
	//m_wndQueryRecord.SetEvent(WE_KILLFOCUS, _OnQueryRecordKillfocusFnc);
	m_wndQueryRecord.SetEvent(WE_CHECKVALUE, _OnQueryRecordCheckValueFnc);
	//m_wndTerminateRecord.SetEvent(WE_CHANGE, _OnTerminateRecordChangeFnc);
	//m_wndTerminateRecord.SetEvent(WE_SETFOCUS, _OnTerminateRecordSetfocusFnc);
	//m_wndTerminateRecord.SetEvent(WE_KILLFOCUS, _OnTerminateRecordKillfocusFnc);
	m_wndTerminateRecord.SetEvent(WE_CHECKVALUE, _OnTerminateRecordCheckValueFnc);
	m_wndField.SetEvent(WE_SELCHANGE, _OnFieldSelectChangeFnc);
	m_wndField.SetEvent(WE_LOADDATA, _OnFieldLoadDataFnc);
	m_wndField.SetEvent(WE_DBLCLICK, _OnFieldDblClickFnc);
	m_wndField.AddEvent(1, _T("Delete"), _OnFieldDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);

}
void CASTMProtocolDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndSampleData.GetDlgCtrlID(), m_szSampleData);
	DDX_TextEx(pDX, m_wndProtocol.GetDlgCtrlID(), m_szProtocolKey);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_Text(pDX, m_wndSeperator.GetDlgCtrlID(), m_szSeperator);
	DDX_Text(pDX, m_wndHeaderRecord.GetDlgCtrlID(), m_szHeaderRecord);
	DDX_Text(pDX, m_wndPatientRecord.GetDlgCtrlID(), m_szPatientRecord);
	DDX_Text(pDX, m_wndOrderRecord.GetDlgCtrlID(), m_szOrderRecord);
	DDX_Text(pDX, m_wndResultRecord.GetDlgCtrlID(), m_szResultRecord);
	DDX_Text(pDX, m_wndQueryRecord.GetDlgCtrlID(), m_szQueryRecord);
	DDX_Text(pDX, m_wndTerminateRecord.GetDlgCtrlID(), m_szTerminateRecord);

}
void CASTMProtocolDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CASTMProtocolDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CASTMProtocolDialog::SetDefaultValues(){

	m_szSampleData.Empty();
	m_szProtocolKey.Empty();
	m_szName.Empty();
	m_szSeperator.Empty();
	m_szHeaderRecord.Empty();
	m_szPatientRecord.Empty();
	m_szOrderRecord.Empty();
	m_szResultRecord.Empty();
	m_szQueryRecord.Empty();
	m_szTerminateRecord.Empty();

}
int CASTMProtocolDialog::SetMode(int nMode){ 
 		int nOldMode = GetMode(); 
 		CGuiDialog::SetMode(nMode); 
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
  		switch(nMode){ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(FALSE,  -1); 
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
/*void CASTMProtocolDialog::OnSampleDataChange(){
	
} */
/*void CASTMProtocolDialog::OnSampleDataSetfocus(){
	
} */
/*void CASTMProtocolDialog::OnSampleDataKillfocus(){
	
} */
int CASTMProtocolDialog::OnSampleDataCheckValue(){
	
	return 0;
} 
void CASTMProtocolDialog::OnBrowseSelect(){
	CFileDialog dlg(true);
	if(dlg.DoModal() == IDOK){
		CFile file;
		CString tmpStr;
		file.Open(dlg.GetPathName(), CFile::modeRead);
		file.Read(tmpStr.GetBufferSetLength(file.GetLength()), file.GetLength());
		m_szSampleData = tmpStr;
		tmpStr.ReleaseBuffer();
		UpdateData(false);
		file.Close();
	}
	
} 
void CASTMProtocolDialog::OnParseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	if(m_szProtocolKey == _T("1")){
		LPCTSTR pstr = m_szSampleData;
		m_szHeaderRecord.Empty();
		while(*pstr != NULL){
			if(_tcsncmp(pstr, _T("H|"), 2) == 0){
				m_szHeaderRecord.Empty();
				while(*pstr != NULL && *pstr != _T('\n')){
					m_szHeaderRecord += *pstr;
					*pstr++;
				}
			}
			if(_tcsncmp(pstr, _T("P|"), 2) == 0){
				m_szPatientRecord.Empty();
				while(*pstr != NULL && *pstr != _T('\n')){
					m_szPatientRecord += *pstr;
					*pstr++;
				}
			}
			if(_tcsncmp(pstr, _T("O|"), 2) == 0){
				m_szOrderRecord.Empty();
				while(*pstr != NULL && *pstr != _T('\n')){
					m_szOrderRecord += *pstr;
					*pstr++;
				}
			}
			if(_tcsncmp(pstr, _T("R|"), 2) == 0){
				m_szResultRecord.Empty();
				while(*pstr != NULL && *pstr != _T('\n')){
					m_szResultRecord += *pstr;
					*pstr++;
				}
			}
			if(_tcsncmp(pstr, _T("Q|"), 2) == 0){
				m_szQueryRecord.Empty();
				while(*pstr != NULL && *pstr != _T('\n')){
					m_szQueryRecord += *pstr;
					*pstr++;
				}
			}
			if(_tcsncmp(pstr, _T("L|1"), 3) == 0){
				m_szTerminateRecord.Empty();
				while(*pstr != NULL && *pstr != _T('\n')){
					m_szTerminateRecord += *pstr;
					*pstr++;
				}
			}

			*pstr++;
		}
		UpdateData(false);

	}
	if(m_szProtocolKey == _T("2")){

	}
	if(m_szProtocolKey == _T("3")){

	}

	
} 
void CASTMProtocolDialog::OnProtocolSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CASTMProtocolDialog::OnProtocolSelendok(){
	 
}
/*void CASTMProtocolDialog::OnProtocolSetfocus(){
	
}*/
/*void CASTMProtocolDialog::OnProtocolKillfocus(){
	
}*/
long CASTMProtocolDialog::OnProtocolLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndProtocol.AddItems(_T("1"), _T("ASTM"));
	m_wndProtocol.AddItems(_T("2"), _T("Field Seperator"));
	m_wndProtocol.AddItems(_T("3"), _T("Binary Field"));
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndProtocol.IsSearchKey() && !m_szProtocolKey.IsEmpty()){
	};
	m_wndProtocol.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndProtocol.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CASTMProtocolDialog::OnProtocolAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CASTMProtocolDialog::OnNameChange(){
	
} */
/*void CASTMProtocolDialog::OnNameSetfocus(){
	
} */
/*void CASTMProtocolDialog::OnNameKillfocus(){
	
} */
int CASTMProtocolDialog::OnNameCheckValue(){
	return 0;
} 
/*void CASTMProtocolDialog::OnSeperatorChange(){
	
} */
/*void CASTMProtocolDialog::OnSeperatorSetfocus(){
	
} */
/*void CASTMProtocolDialog::OnSeperatorKillfocus(){
	
} */
int CASTMProtocolDialog::OnSeperatorCheckValue(){
	return 0;
} 
/*void CASTMProtocolDialog::OnHeaderRecordChange(){
	
} */
/*void CASTMProtocolDialog::OnHeaderRecordSetfocus(){
	
} */
/*void CASTMProtocolDialog::OnHeaderRecordKillfocus(){
	
} */
int CASTMProtocolDialog::OnHeaderRecordCheckValue(){
	return 0;
} 
/*void CASTMProtocolDialog::OnPatientRecordChange(){
	
} */
/*void CASTMProtocolDialog::OnPatientRecordSetfocus(){
	
} */
/*void CASTMProtocolDialog::OnPatientRecordKillfocus(){
	
} */
int CASTMProtocolDialog::OnPatientRecordCheckValue(){
	return 0;
} 
/*void CASTMProtocolDialog::OnOrderRecordChange(){
	
} */
/*void CASTMProtocolDialog::OnOrderRecordSetfocus(){
	
} */
/*void CASTMProtocolDialog::OnOrderRecordKillfocus(){
	
} */
int CASTMProtocolDialog::OnOrderRecordCheckValue(){
	return 0;
} 
/*void CASTMProtocolDialog::OnResultRecordChange(){
	
} */
/*void CASTMProtocolDialog::OnResultRecordSetfocus(){
	
} */
/*void CASTMProtocolDialog::OnResultRecordKillfocus(){
	
} */
int CASTMProtocolDialog::OnResultRecordCheckValue(){
	return 0;
} 
/*void CASTMProtocolDialog::OnQueryRecordChange(){
	
} */
/*void CASTMProtocolDialog::OnQueryRecordSetfocus(){
	
} */
/*void CASTMProtocolDialog::OnQueryRecordKillfocus(){
	
} */
int CASTMProtocolDialog::OnQueryRecordCheckValue(){
	return 0;
} 
/*void CASTMProtocolDialog::OnTerminateRecordChange(){
	
} */
/*void CASTMProtocolDialog::OnTerminateRecordSetfocus(){
	
} */
/*void CASTMProtocolDialog::OnTerminateRecordKillfocus(){
	
} */
int CASTMProtocolDialog::OnTerminateRecordCheckValue(){
	return 0;
} 
void CASTMProtocolDialog::OnFieldDblClick(){
	
} 
void CASTMProtocolDialog::OnFieldSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CASTMProtocolDialog::OnFieldDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CASTMProtocolDialog::OnFieldLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndField.BeginLoad(); 
	m_wndField.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndField.AddItems(
			rs.GetValue(_T("Index")), 
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Name")), 
			rs.GetValue(_T("Length")), NULL);
		rs.MoveNext();
	}
	m_wndField.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CASTMProtocolDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CASTMProtocolDialog::OnAddASTMProtocolDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
return 0; 
 
} 
int CASTMProtocolDialog::OnEditASTMProtocolDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0; 
} 
int CASTMProtocolDialog::OnDeleteASTMProtocolDialog(){
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
 		OnCancelASTMProtocolDialog(); 
 	}
return 0;
 } 
int CASTMProtocolDialog::OnSaveASTMProtocolDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
		szSQL.Format(_T("INSERT INTO lims_protocol( \
            limsp_id, limsp_name, limsp_type, limsp_sof, limsp_eof, limsp_hor, limsp_por,  \
            limsp_oor, limsp_ror, limsp_qor, limsp_sep, limsp_tor, limsp_init, limsp_active) \
    VALUES ('%s', '%s', %d, '%s', '%s', '%s', '%s',  \
            '%s', '%s', '%s', '%s', '%s', '%s', '%s') "),
			m_szName, m_szName, ToInt(m_szProtocolKey), _T(""), _T(""), m_szHeaderRecord, m_szPatientRecord,
			m_szOrderRecord, m_szResultRecord, m_szQueryRecord, m_szSeperator, m_szTerminateRecord, m_szInitializeData, _T("Y"));
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE")); 
 //		szSQL = m_tblTbl.GetUpdateSQL(); 
 		szSQL += szWhere; 
 	} 
 _fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CASTMProtocolDialog::OnCancelASTMProtocolDialog(){
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
int CASTMProtocolDialog::OnASTMProtocolDialogListLoadData(){
	return 0;
}
