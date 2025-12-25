#include "ImportListDocument.h"
#include "MainFrm.h"
#include "StringToken.h"

#import "..\\lib\\mso.dll"  \
	rename("RGB","MSORGB")

#import "..\\lib\\VBE6EXT.OLB" \
	raw_interfaces_only, \
	rename("Reference",		"ignorethis"), \
	rename("VBE",			"testVBE")

#import "..\\lib\\excel.exe" \
	exclude("IFont", "IPicture") \
	rename("VBE",			"testVBE") \
	rename("FindText",		"ExcelFindText") \
	rename("NoPrompt",		"ExcelNoPrompt") \
	rename("CopyFile",		"ExcelCopyFile") \
	rename("ReplaceText",	"ExcelReplaceText") \
	rename("RGB",			"ExcelRGB") \
	rename("DialogBox",		"ExcelDialogBox") 	\
	no_auto_exclude

#import "..\\Lib\\MSWORD.OLB" \
	rename("VBE",			"testVBE") \
	rename("ExitWindows", "WordExitWindows")

using namespace Excel;

/*static void _OnImputChangeFnc(CWnd *pWnd){
	((CImportListDocument *)pWnd)->OnImputChange();
} */
/*static void _OnImputSetfocusFnc(CWnd *pWnd){
	((CImportListDocument *)pWnd)->OnImputSetfocus();} */ 
/*static void _OnImputKillfocusFnc(CWnd *pWnd){
	((CImportListDocument *)pWnd)->OnImputKillfocus();
} */
static int _OnImputCheckValueFnc(CWnd *pWnd){
	return ((CImportListDocument *)pWnd)->OnImputCheckValue();
} 
static void _OnFormatSelectFnc(CWnd *pWnd){
	CImportListDocument *pVw = (CImportListDocument *)pWnd;
	pVw->OnFormatSelect();
} 
static void _OnApplySelectFnc(CWnd *pWnd){
	CImportListDocument *pVw = (CImportListDocument *)pWnd;
	pVw->OnApplySelect();
} 

static void _OnImportTmpSelectFnc(CWnd *pWnd){
	CImportListDocument *pVw = (CImportListDocument *)pWnd;
	pVw->OnImportTmpSelect();
} 
static int _OnAddImportListDocumentFnc(CWnd *pWnd){
	 return ((CImportListDocument*)pWnd)->OnAddImportListDocument();
} 
static int _OnEditImportListDocumentFnc(CWnd *pWnd){
	 return ((CImportListDocument*)pWnd)->OnEditImportListDocument();
} 
static int _OnDeleteImportListDocumentFnc(CWnd *pWnd){
	 return ((CImportListDocument*)pWnd)->OnDeleteImportListDocument();
} 
static int _OnSaveImportListDocumentFnc(CWnd *pWnd){
	 return ((CImportListDocument*)pWnd)->OnSaveImportListDocument();
} 
static int _OnCancelImportListDocumentFnc(CWnd *pWnd){
	 return ((CImportListDocument*)pWnd)->OnCancelImportListDocument();
} 
CImportListDocument::CImportListDocument(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 825;
	m_nDlgHeight = 605;
	SetDefaultValues();
}
CImportListDocument::~CImportListDocument(){
}
void CImportListDocument::OnCreateComponents(){
	m_wndListDoc.Create(this, _T("List Doc"), 5, 5, 85, 30);
	m_wndImput.Create(this,90, 5, 690, 605, TRUE, FALSE, TRUE); 
	m_wndFormat.Create(this, _T("Format"), 694, 7, 769, 32);
	m_wndApply.Create(this, _T("&Apply"), 694, 37, 769, 62);
	m_wndImportTmp.Create(this, _T("&Import"), 694, 65, 769, 90);

}
void CImportListDocument::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndImput.SetMultiLine(TRUE);
	m_wndImput.SetLimitText(102400);
	m_wndImput.SetCheckValue(true);

}
void CImportListDocument::OnSetWindowEvents(){
	//m_wndImput.SetEvent(WE_CHANGE, _OnImputChangeFnc);
	//m_wndImput.SetEvent(WE_SETFOCUS, _OnImputSetfocusFnc);
	//m_wndImput.SetEvent(WE_KILLFOCUS, _OnImputKillfocusFnc);
	m_wndImput.SetEvent(WE_CHECKVALUE, _OnImputCheckValueFnc);
	m_wndFormat.SetEvent(WE_CLICK, _OnFormatSelectFnc);
	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
	m_wndImportTmp.SetEvent(WE_CLICK, _OnImportTmpSelectFnc);

	EnableControls();
}
void CImportListDocument::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndImput.GetDlgCtrlID(), m_szImput);

}
void CImportListDocument::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CImportListDocument::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CImportListDocument::SetDefaultValues(){

	m_szImput.Empty();

}
int CImportListDocument::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiDialog::SetMode(nMode); 
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
 			EnableButtons(TRUE, 0, 1, -1); 
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
/*void CImportListDocument::OnImputChange(){
	
} */
/*void CImportListDocument::OnImputSetfocus(){
	
} */
/*void CImportListDocument::OnImputKillfocus(){
	
} */
int CImportListDocument::OnImputCheckValue(){
	return 0;
} 
void CImportListDocument::OnFormatSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szInput, szStr, tmpStr, szFormat;
	UpdateData(true);
	szInput = m_szImput;
	CStringToken st(szInput, _T("\r\n"));
	for(int i = 0; i < st.GetSize(); i++){
		st.GetAt(i, tmpStr);
		if(!szStr.IsEmpty())
			szFormat =_T(",");
		//_tprintf(_T("\r\n%d, %s"), i, tmpStr);
		szStr.AppendFormat(_T("%s'%s'"), szFormat, tmpStr);
	}
	
	m_szImput = szStr;
	UpdateData(false);

	
} 
void CImportListDocument::OnApplySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnOK();
} 
int CImportListDocument::OnAddImportListDocument(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CImportListDocument::OnEditImportListDocument(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CImportListDocument::OnDeleteImportListDocument(){
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
 		OnCancelImportListDocument(); 
 	}
	return 0;
}
int CImportListDocument::OnSaveImportListDocument(){
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
 		//OnImportListDocumentListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CImportListDocument::OnCancelImportListDocument(){
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
int CImportListDocument::OnImportListDocumentListLoadData(){
	return 0;
}

void CImportListDocument::OnImportTmpSelect()
{
	CFileDialog dlg(TRUE);
	CString szFilePath;
	if (dlg.DoModal() == IDOK)
	{
		szFilePath = dlg.GetPathName();
		OnImportTmp(szFilePath, _T("BH_IMPORT_FROM_TABLE"));
	}
}

int CImportListDocument::OnImportTmp(CString szFilePath, CString szTableName)
{
	CMainFrame * pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szColName;
	int rows, cols;
	long nRet = 0;
	Excel::_ApplicationPtr pApplication;	
	std::wstring str;
	m_TCols mCols;
	CDbfMap dbm;
	pApplication.CreateInstance( _T("Excel.Application") );
	if (pApplication == NULL)
	{
		_tprintf( _T("\r\nFailed to initialize Excel::_Application!") );
		return 0;
	}
	Excel::WorkbooksPtr pWorkbooks = pApplication->Workbooks;
	if (pWorkbooks == NULL)
	{
		_tprintf(_T("\r\nNull workbooks"));
		return 0;
	}
	Excel::_WorkbookPtr pBook = pWorkbooks->Open((LPCTSTR) szFilePath);
	if(pBook == NULL)
	{
		_tprintf(_T("\r\nNull book"));
		return 0;
	}
	Excel::_WorksheetPtr pSheet = pBook->Sheets->Item[ 1 ];
	Excel::RangePtr pRange = pSheet->GetUsedRange();
	rows = pRange->Rows->Count;
	cols = pRange->Columns->Count;

	/* Map file structure*/
	szSQL.Format(_T("select * from %s where rownum <=0"), szTableName);
	nRet = rs.ExecSQL(szSQL);
	//if (!rs.IsEOF())
	if (nRet >=0)
	{
		for (int i = 0; i < rs.GetFieldCount(); i++)
		{
			szColName = rs.GetFieldName(i);
			for ( int iColumn = 1; iColumn <= cols; iColumn++ )
			{
				_variant_t	vItem = pRange->Item[ 1 ][ iColumn ];
				_bstr_t		bstrText( vItem );
				str = bstrText;
				if (szColName == str.c_str())
				{
					mCols[szColName] = iColumn;
					continue;
				}
			}
		}		
	}
	
	/*Insert*/
	szSQL.Format(_T("DELETE FROM %s"), szTableName);
	rs.ExecSQL(szSQL);
	dbm.SetTableName(szTableName);
	m_TCols::CPair *pCurVal;
	nRet = 0;
	for ( int iRow = 2; iRow <= rows; iRow++ )
	{
		pCurVal = mCols.PGetFirstAssoc();
		while (pCurVal)
		{
			_variant_t	vItem = pRange->Item[ iRow ][ pCurVal->value];
			_bstr_t		bstrText( vItem );
			str = bstrText;
			dbm.AddField(pCurVal->key, dfText, 2000);
			dbm.SetValue(pCurVal->key, str.c_str());
			pCurVal = mCols.PGetNextAssoc(pCurVal);
		}
		szSQL = dbm.GetInsertSQL();
		nRet += pMF->ExecSQL(szSQL);
	}
	if (nRet > 0)
	{
		CString szMsg;
		szMsg.Format(_T("Ðã import thành công %ld mã!"), nRet);
		ShowMessageBox(szMsg);
	}

	/*
	for ( int iRow = 1; iRow <= rows; iRow++ )
	{
		for ( int iColumn = 1; iColumn <= cols; iColumn++ )
		{
			_variant_t	vItem = pRange->Item[ iRow ][ iColumn ];
			_bstr_t		bstrText( vItem );
			str = bstrText;
			_tprintf(_T("\nrow:%d-col:%d-value:%s"),iRow, iColumn, str.c_str());
		}
	}
	*/
	pBook->Close( VARIANT_FALSE );
	pApplication->Quit( );
	return 0;
}