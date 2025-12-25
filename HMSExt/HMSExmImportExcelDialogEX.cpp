#include "HMSExmImportExcelDialogEx.h"
#include "GuiMainFrame.h"
#include "Excel.h"
#include "ReportDocument.h"


#define Uses_MSO2015

#pragma warning(disable:4146)

#ifdef Uses_MSO2015
#pragma message("Import MSO.DLL")

//#import "C:\\Program Files\\Common Files\\Microsoft Shared\\OFFICE15\\mso.dll"  \
//		rename("RGB","MSORGB")
#import "..\\lib\\mso.dll"  \
		rename("RGB","MSORGB")

using namespace Office;

//#import "C:\\Program Files (x86)\\Common Files\\Microsoft Shared\\VBA\\VBA6\\VBE6EXT.OLB" \
//		raw_interfaces_only, \
//		rename("Reference",		"ignorethis"), \
//		rename("VBE",			"testVBE")

#import "..\\lib\\VBE6EXT.OLB" \
		raw_interfaces_only, \
		rename("Reference",		"ignorethis"), \
		rename("VBE",			"testVBE")


using namespace VBIDE;

//#import "C:\\Program Files\\Microsoft Office\\OFFICE15\\excel.exe" \
//		exclude("IFont", "IPicture") \
//		rename("VBE",			"testVBE") \
//		rename("FindText",		"ExcelFindText") \
//		rename("NoPrompt",		"ExcelNoPrompt") \
//		rename("CopyFile",		"ExcelCopyFile") \
//		rename("ReplaceText",	"ExcelReplaceText") \
//		rename("RGB",			"ExcelRGB") \
//		rename("DialogBox",		"ExcelDialogBox") 	\
//		no_auto_exclude
		

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


#else
#ifdef Uses_MSO2000
// for MS Office 2000
#import "C:\Program Files\Microsoft Office\Office\MSO9.DLL"
#import "C:\Program Files\Common Files\Microsoft Shared\VBA\VBA6\VBE6EXT.OLB"
#import "C:\Program Files\Microsoft Office\Office\MSWORD9.OLB" \
	rename("ExitWindows","_ExitWindows")
#import "C:\Program Files\Microsoft Office\Office\EXCEL9.OLB" \
	rename("DialogBox","_DialogBox") \
	rename("RGB","_RGB") \
	exclude("IFont","IPicture")
//#import "C:\Program Files\Common Files\Microsoft Shared\DAO\DAO360.DLL" \
//	rename("EOF","EndOfFile") rename("BOF","BegOfFile")
//#import "C:\Program Files\Microsoft Office\Office\MSACC9.OLB"
#else
// for MS Office 97
#import "C:\Program Files\Microsoft Office\Office\MSO97.DLL"
#import "C:\Program Files\Common Files\Microsoft Shared\VBA\VBEEXT1.OLB"
#import "C:\Program Files\Microsoft Office\Office\MSWORD8.OLB" \
	rename("ExitWindows","_ExitWindows")
#import "C:\Program Files\Microsoft Office\Office\EXCEL8.OLB" \
	rename("DialogBox","_DialogBox") \
	rename("RGB","_RGB") \
	exclude("IFont","IPicture")
//#import "C:\Program Files\Common Files\Microsoft Shared\DAO\DAO350.DLL" \
//	rename("EOF","EndOfFile") rename("BOF","BegOfFile")
//#import "C:\Program Files\Microsoft Office\Office\MSACC8.OLB"
#endif
#endif
#pragma warning(default:4146)




int testEX(LPCTSTR lpszFile) 
{
// Initialize COM Runtime Libraries. 
	//CoInitialize(NULL); 
	Excel::_ApplicationPtr pApplication;

	if ( FAILED( pApplication.CreateInstance( _T("Excel.Application") ) ) )
	{
		_tprintf( _T("\r\nFailed to initialize Excel::_Application!") );
		return 0;
	}
_tprintf(_T("\r\nInit excel"));

	_variant_t  varOption( (long) DISP_E_PARAMNOTFOUND, VT_ERROR );

	Excel::_WorkbookPtr pBook;

	pBook =  pApplication->Workbooks->Open(lpszFile, 
									varOption, varOption, varOption, varOption, 
									varOption, varOption, varOption, varOption, 
									varOption, varOption, varOption, varOption );
	if(pBook == NULL)
		return 0;
	Excel::_WorksheetPtr pSheet = pBook->Sheets->Item[ 1 ];
	


	// Load the column headers.
	Excel::RangePtr pRange = pSheet->GetRange( _bstr_t( _T("A1") ), _bstr_t( _T("AI1" ) ) );
	


	if ( pRange == NULL )
	{
		_tprintf( _T("Failed to get header cell range( A1:iv )!") );
		return 0;
	}

	int	iColumns = 0;

	for ( int iColumn = 1; iColumn < 50; ++iColumn )
	{
		_variant_t	vItem = pRange->Item[ 1 ][ iColumn ];
		_bstr_t		bstrText( vItem );

		if ( bstrText.length( ) == 0 )
			break;

//		m_list.InsertColumn(iColumns++,bstrText,LVCFMT_LEFT,170 );
		iColumns ++;
		std::string str = bstrText;
		printf("\r\n%s", str.c_str());
	}

	// Load the rows (up to the first blank one).
	pRange = pSheet->GetRange( _bstr_t( _T("A1") ), _bstr_t( _T("Z16384" ) ) );
	


	for ( int iRow = 1; ; ++iRow )
	{
		for (int   iColumn = 1; iColumn <= iColumns; ++iColumn )
		{
			_variant_t	vItem = pRange->Item[ iRow  ][ iColumn ];
//Here i am getting values.
			
			_bstr_t		bstrText( vItem );

			if ( bstrText.length( ) == 0 )
				break;
		std::wstring str = bstrText;
AfxMessageBox(str.c_str(), 0, 0);
		}

		if(iRow > 2)
			break;
_tprintf(_T("\r\n"));
	}

	pBook->Close( VARIANT_FALSE );

	pApplication->Quit( );

	//CoUninitialize(); 
   return 0;
}



static void _OnBrowseSelectFnc(CWnd *pWnd){
	CHMSExmImportExcelDialogEx *pVw = (CHMSExmImportExcelDialogEx *)pWnd;
	pVw->OnBrowseSelect();
} 
/*static void _OnURLChangeFnc(CWnd *pWnd){
	((CHMSExmImportExcelDialogEx *)pWnd)->OnURLChange();
} */
/*static void _OnURLSetfocusFnc(CWnd *pWnd){
	((CHMSExmImportExcelDialogEx *)pWnd)->OnURLSetfocus();} */ 
/*static void _OnURLKillfocusFnc(CWnd *pWnd){
	((CHMSExmImportExcelDialogEx *)pWnd)->OnURLKillfocus();
} */
static int _OnURLCheckValueFnc(CWnd *pWnd){
	return ((CHMSExmImportExcelDialogEx *)pWnd)->OnURLCheckValue();
} 
static void _OnApplySelectFnc(CWnd *pWnd){
	CHMSExmImportExcelDialogEx *pVw = (CHMSExmImportExcelDialogEx *)pWnd;
	pVw->OnApplySelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSExmImportExcelDialogEx*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSExmImportExcelDialogEx*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSExmImportExcelDialogEx*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSExmImportExcelDialogEx*)pWnd)->OnListDeleteItem();
} 
static int _OnAddHMSExmImportExcelDialogFnc(CWnd *pWnd){
	 return ((CHMSExmImportExcelDialogEx*)pWnd)->OnAddHMSExmImportExcelDialog();
} 
static int _OnEditHMSExmImportExcelDialogFnc(CWnd *pWnd){
	 return ((CHMSExmImportExcelDialogEx*)pWnd)->OnEditHMSExmImportExcelDialog();
} 
static int _OnDeleteHMSExmImportExcelDialogFnc(CWnd *pWnd){
	 return ((CHMSExmImportExcelDialogEx*)pWnd)->OnDeleteHMSExmImportExcelDialog();
} 
static int _OnSaveHMSExmImportExcelDialogFnc(CWnd *pWnd){
	 return ((CHMSExmImportExcelDialogEx*)pWnd)->OnSaveHMSExmImportExcelDialog();
} 
static int _OnCancelHMSExmImportExcelDialogFnc(CWnd *pWnd){
	 return ((CHMSExmImportExcelDialogEx*)pWnd)->OnCancelHMSExmImportExcelDialog();
} 
CHMSExmImportExcelDialogEx::CHMSExmImportExcelDialogEx(CWnd *pParent): CGuiDialog(pParent)
{
	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CHMSExmImportExcelDialogEx::~CHMSExmImportExcelDialogEx()
{
}
void CHMSExmImportExcelDialogEx::OnCreateComponents(){
	m_wndSearchInformation.Create(this, _T("Search Information"), 5, 5, 955, 60);
	m_wndBrowse.Create(this, _T("&Browse"), 420, 30, 505, 55);
	m_wndURL.Create(this,10, 30, 415, 55); 
	m_wndApply.Create(this, _T("&Apply"), 875, 575, 960, 600);
	m_wndList.Create(this,5, 65, 955, 570); 
}
void CHMSExmImportExcelDialogEx::OnInitializeComponents(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	m_wndURL.SetLimitText(1024);
	m_wndURL.SetCheckValue(true);
	
	m_emplTbl.AddField(_T("p_contract_id"), dfLong);
    m_emplTbl.AddField(_T("p_company_id"), dfLong);
    m_emplTbl.AddField(_T("p_id"), dfText, 15);
    m_emplTbl.AddField(_T("p_surname"), dfText, 15);
    m_emplTbl.AddField(_T("p_midname"), dfText, 45);
    m_emplTbl.AddField(_T("p_firstname"), dfText, 15);
    m_emplTbl.AddField(_T("p_birthdate"), dfDate);
    m_emplTbl.AddField(_T("p_gender"), dfText, 1);
    m_emplTbl.AddField(_T("p_dept"), dfText, 254); //Khoa làm việc nhân viên//
    m_emplTbl.AddField(_T("p_position"), dfText, 254); //Chức vụ nhân viên//
    m_emplTbl.AddField(_T("p_note"), dfText, 254);
	m_emplTbl.AddField(_T("p_owner"), dfText, 254);
	m_emplTbl.AddField(_T("p_rank"), dfText, 3); //Cấp bậc nhân viên// 
	//Thêm các cột sau phục vụ khám sức khỏe nhân viên bệnh viện
	

	//AddRefColumn(0, _T("HEE_EMPLOYEE_ID"), _T("ID")); 
	AddRefColumn(0, _T("HEE_ID"), _T("MANV")); 
	AddRefColumn(1, _T("HEE_NAME"), _T("HOVATEN")); 
	AddRefColumn(2, _T("HEE_BIRTHDATE"), _T("NGAYSINH")); 
	AddRefColumn(3, _T("HEE_SEX"), _T("GIOITINH")); 
	AddRefColumn(4, _T("HEE_DEPT"), _T("BOPHAN")); //Khoa làm việc nhân viên//
	AddRefColumn(5, _T("HEE_POSITION"), _T("CHUCVU")); //Chức vụ nhân viên//
	AddRefColumn(6, _T("HEE_NOTE"), _T("GHICHU"));
	AddRefColumn(8, _T("HEE_OWNER"), _T("BANTHAN"));
	AddRefColumn(9, _T("HEE_RANK"), _T("CAPBAC")); //Cấp bậc nhân viên// 


	m_wndList.InsertColumn(0, _T("STT"), CFMT_TEXT, 50);
	for(int i =0; i < m_maps.GetCount(); i++)
	{
		MapColumn mc  = m_maps.GetAt(i);
		m_wndList.InsertColumn(i, mc.szExcelColName, CFMT_TEXT, 100);
	}
	m_wndList.SetCheckBox(true);
}

void CHMSExmImportExcelDialogEx::AddRefColumn(int nIndex, CString szField, CString szColName)
{
	MapColumn mc;
	mc.xlsColumn = nIndex;
	mc.szFieldName = szField;
	mc.szExcelColName = szColName;
	m_maps.Add(mc);
}
void CHMSExmImportExcelDialogEx::OnSetWindowEvents(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	m_wndBrowse.SetEvent(WE_CLICK, _OnBrowseSelectFnc);
	//m_wndURL.SetEvent(WE_CHANGE, _OnURLChangeFnc);
	//m_wndURL.SetEvent(WE_SETFOCUS, _OnURLSetfocusFnc);
	//m_wndURL.SetEvent(WE_KILLFOCUS, _OnURLKillfocusFnc);
	m_wndURL.SetEvent(WE_CHECKVALUE, _OnURLCheckValueFnc);
	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
/*
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSExmImportExcelDialogFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSExmImportExcelDialogFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSExmImportExcelDialogFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSExmImportExcelDialogFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSExmImportExcelDialogFnc, 0, 'T', VK_CONTROL);
*/
	SetMode(VM_NONE);
	::GetCurrentDirectory(MAX_PATH, m_szCurrentDir.GetBufferSetLength(MAX_PATH));
	m_szCurrentDir.ReleaseBuffer();
}
void CHMSExmImportExcelDialogEx::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndURL.GetDlgCtrlID(), m_szURL);

}
void CHMSExmImportExcelDialogEx::GetDataToScreen(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSExmImportExcelDialogEx::GetScreenToData(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();

}
void CHMSExmImportExcelDialogEx::SetDefaultValues(){

	m_szURL.Empty();

}
int CHMSExmImportExcelDialogEx::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CGuiMainFrame *pMF = (CGuiMainFrame *) AfxGetMainWnd();
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
		m_wndApply.EnableWindow(TRUE);
 		UpdateData(FALSE);
 		return nOldMode;
}
void CHMSExmImportExcelDialogEx::OnBrowseSelect(){
	CGuiMainFrame *pMF = (CGuiMainFrame *) AfxGetMainWnd();
	CFile f;
	CString strFilter =(_T("Excel Files (*.xls)|*.xls"));
	CFileDialog FileDlg(TRUE, _T(".xls"), NULL, 0, strFilter);
	if( FileDlg.DoModal() == IDOK )
	{
		CString filePath;
		filePath = FileDlg.GetPathName();
		m_szURL.Format(_T("%s"), filePath);
		OnListLoadData();
	}
	
	::SetCurrentDirectory(m_szCurrentDir);

	
	
} 
/*void CHMSExmImportExcelDialogEx::OnURLChange(){
	
} */
/*void CHMSExmImportExcelDialogEx::OnURLSetfocus(){
	
} */
/*void CHMSExmImportExcelDialogEx::OnURLKillfocus(){
	
} */
int CHMSExmImportExcelDialogEx::OnURLCheckValue(){
	return 0;
} 
void CHMSExmImportExcelDialogEx::OnApplySelect(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	CString szQuyetdinhId;
	CString szSodangkyId;
	CString tmpStr,  szFirstName, szMidName, szSurName;
	m_emplTbl.SetValue(_T("p_contract_id"), m_nContractId);
	m_emplTbl.SetValue(_T("p_company_id"), m_nCompanyId);
	
	std::vector<int> items;
	std::vector<int>::iterator it;

	for (int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		tmpStr = m_wndList.GetItemText(i, 1);
		m_emplTbl.SetValue(_T("p_id"), tmpStr);
		tmpStr = m_wndList.GetItemText(i, 2);
		SplitName(tmpStr, szSurName, szMidName, szFirstName);
		m_emplTbl.SetValue(_T("p_surname"), szSurName);
		m_emplTbl.SetValue(_T("p_midname"), szMidName);
		m_emplTbl.SetValue(_T("p_firstname"), szFirstName);
		tmpStr = m_wndList.GetItemText(i, 3);
_tprintf(_T("\r\n%s"), tmpStr);
m_emplTbl.SetValue(_T("p_birthdate"), CDate::Convert(tmpStr, ddmmyyyy, yyyymmdd));
		tmpStr = m_wndList.GetItemText(i, 4);
		m_emplTbl.SetValue(_T("p_gender"), tmpStr);
		tmpStr = m_wndList.GetItemText(i, 5);
		m_emplTbl.SetValue(_T("p_dept"), tmpStr);
		tmpStr = m_wndList.GetItemText(i, 6);
		m_emplTbl.SetValue(_T("p_position"), tmpStr);
		tmpStr = m_wndList.GetItemText(i, 7);
		m_emplTbl.SetValue(_T("p_note"), tmpStr);
		tmpStr = m_wndList.GetItemText(i, 8);
		m_emplTbl.SetValue(_T("p_owner"), tmpStr);

		tmpStr = m_wndList.GetItemText(i, 9);
		m_emplTbl.SetValue(_T("p_rank"), tmpStr);
		
		if (pMF->GetProp(L"current_department_id") == _T("TYC"))
		{
		szSQL.Format(_T("HMS_EXM_EMPLOYEE_IMPORTXLS(%s) "), m_emplTbl.FormatSQL());
		}
		else
		szSQL.Format(_T("HMS_EXM_EMPLOYEE_IMPORTXLSEX(%s) "), m_emplTbl.FormatSQL());

		int ret = str2int(pMF->ExecDML(szSQL));
		_tprintf(_T("\r\n%d:%s"), ret, szSQL);
		if(ret > 0)
		{
			items.push_back(i);
		}
	}
	for (it = items.begin(); it != items.end(); it++)
	{
		int n = *it;
		m_wndList.DeleteItem(n);
	}
	m_wndList.RedrawWindow();
	
} 
void CHMSExmImportExcelDialogEx::OnListDblClick(){
	CGuiMainFrame *pMF = (CGuiMainFrame *) AfxGetMainWnd();
	
} 
void CHMSExmImportExcelDialogEx::OnListSelectChange(int nOldItem, int nNewItem){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	
} 
int CHMSExmImportExcelDialogEx::OnListDeleteItem(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	 return 0;
} 




unsigned __stdcall SecondThreadExFunc( void* pArguments )  
{  
	CHMSExmImportExcelDialogEx* pDlg = (CHMSExmImportExcelDialogEx*) pArguments;
	CGuiListCtrl* pList = (CGuiListCtrl*) &pDlg->m_wndList;
	// Initialize COM Runtime Libraries. 
	CoInitialize(NULL); 
	Excel::_ApplicationPtr pApplication;

	if ( FAILED( pApplication.CreateInstance( _T("Excel.Application") ) ) )
	{
		_tprintf( _T("\r\nFailed to initialize Excel::_Application!") );
		return 0;
	}
	

_tprintf(_T("\r\nInit excel"));

	_variant_t  varOption( (long) DISP_E_PARAMNOTFOUND, VT_ERROR );

	Excel::_WorkbookPtr pBook;

	pBook =  pApplication->Workbooks->Open((LPCTSTR)pDlg->m_szFile, 
									varOption, varOption, varOption, varOption, 
									varOption, varOption, varOption, varOption, 
									varOption, varOption, varOption, varOption );
	if(pBook == NULL)
		return 0;
	Excel::_WorksheetPtr pSheet = pBook->Sheets->Item[ 1 ];
	


	// Load the column headers.
	Excel::RangePtr pRange = pSheet->GetRange( _bstr_t( _T("A1") ), _bstr_t( _T("Z1" ) ) );
	


	if ( pRange == NULL )
	{
		_tprintf( _T("Failed to get header cell range( A1:iv )!") );
		return 0;
	}

	int	iColumns = 0;

		// Load the rows (up to the first blank one).
	pRange = pSheet->GetUsedRange();

	int rows = pRange->Rows->Count;
	int cols = pRange->Columns->Count;
	pList->BeginLoad();
	for ( int iColumn = 1; iColumn < cols; ++iColumn )
	{
		_variant_t	vItem = pRange->Item[ 1 ][ iColumn ];
		_bstr_t		bstrText( vItem );

		if ( bstrText.length( ) == 0 )
			break;
		std::wstring str = bstrText;
		for (int i=0; i < pDlg->m_maps.GetCount(); i++)
		{
			MapColumn mc  = pDlg->m_maps.GetAt(i);
			if(mc.szExcelColName == str.c_str())
			{
				mc.xlsColumn = iColumn;
				pDlg->m_maps.SetAt(i, mc);
				break;
			}

		}
		iColumns ++;
		
		
	}	

	int iColumn=0;
	for ( int iRow = 1; iRow < rows; ++iRow )
	{
		int nItem = pList->AddItems(_T(""), NULL);
		for (int j =0; j < pDlg->m_maps.GetCount(); j++)
		{
			MapColumn mc = pDlg->m_maps[j];
			_variant_t	vItem = pRange->Item[ iRow  ][ mc.xlsColumn ];
//Here i am getting values.
			
			_bstr_t		bstrText( vItem );

			if ( bstrText.length( ) != 0 )
			{
				std::wstring str = bstrText;
				pList->SetItemText(nItem, j, str.c_str());
			}

		}
_tprintf(_T("\r\n%d"), iRow);
		//if(iRow < 50)
		{
			pList->EndLoad();
		}
	}

	//pList->EndLoad();
	pBook->Close( VARIANT_FALSE );

	pApplication->Quit( );
	CoUninitialize(); 
    _endthreadex( 0 );  
	WaitForSingleObject( pDlg->m_hThread, INFINITE ); 
	CloseHandle( pDlg->m_hThread);  
    return 0;  
}   

long CHMSExmImportExcelDialogEx::OnListLoadData(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
		CString szSQL;
	CRecord rs(&pMF->m_db);
	CString tmpStr,tmpStr1,tmpStr2,tmpStr3,tmpStr4,tmpStr5;
	CString tmpStr6,tmpStr7,tmpStr8,tmpStr9,tmpStr10,tmpStr11;
	CString tmpStr12,tmpStr13,tmpStr14,tmpStr15,tmpStr16,tmpStr17;
	tmpStr.Empty();

	
	m_wndList.DeleteAllColumns();
	m_wndList.InsertColumn(0, _T("STT"), CFMT_TEXT, 40);
	for(int i =0; i < m_maps.GetCount(); i++)
	{
		MapColumn mc  = m_maps.GetAt(i);
		m_wndList.InsertColumn(i+1, mc.szExcelColName, CFMT_TEXT, 100);
	}

    m_wndList.DeleteAllItems();
	m_wndList.BeginLoad(); 
	int rows, cols;


	// Initialize COM Runtime Libraries. 
	//CoInitialize(NULL); 
	Excel::_ApplicationPtr pApplication;

	if ( FAILED( pApplication.CreateInstance( _T("Excel.Application") ) ) )
	{
		_tprintf( _T("\r\nFailed to initialize Excel::_Application!") );
		return 0;
	}
_tprintf(_T("\r\nInit excel"));

	_variant_t  varOption( (long) DISP_E_PARAMNOTFOUND, VT_ERROR );

	Excel::_WorkbookPtr pBook;

	pBook =  pApplication->Workbooks->Open((LPCTSTR)m_szURL, 
									varOption, varOption, varOption, varOption, 
									varOption, varOption, varOption, varOption, 
									varOption, varOption, varOption, varOption );
	if(pBook == NULL)
		return 0;
	Excel::_WorksheetPtr pSheet = pBook->Sheets->Item[ 1 ];
	


	// Load the column headers.
	Excel::RangePtr pRange = pSheet->GetRange( _bstr_t( _T("A1") ), _bstr_t( _T("AA1" ) ) );
	


	if ( pRange == NULL )
	{
		_tprintf( _T("Failed to get header cell range( A1:iv )!") );
		return 0;
	}

	int	iColumns = 0;

		// Load the rows (up to the first blank one).
	pRange = pSheet->GetUsedRange();
	rows = pRange->Rows->Count;
	cols = pRange->Columns->Count;
	//excel duoc tinh tu 1 tro di 
	for ( int iColumn = 1; iColumn < cols; ++iColumn )
	{
		_variant_t	vItem = pRange->Item[ 1 ][ iColumn ];
		_bstr_t		bstrText( vItem );

		if ( bstrText.length( ) == 0 )
			break;
		std::wstring str = bstrText;
		
		for (int i= 0; i < m_maps.GetCount(); i++)
		{
			MapColumn mc  = m_maps.GetAt(i);
			if(mc.szExcelColName.CompareNoCase(str.c_str())==0 || mc.szFieldName.CompareNoCase(str.c_str())==0)
			{
				mc.xlsColumn = iColumn;
				m_maps.SetAt(i, mc);
				_tprintf(_T("\r\n%s:%d"), str.c_str(), mc.xlsColumn);
				break;
			}

		}
		
		iColumns ++;
		
		
	}
	
	
	int iColumn=0;
	for ( int iRow = 2; iRow <= rows; ++iRow )
	{
		tmpStr.Format(_T("%d"), iRow-1);
		int nItem = m_wndList.AddItems(tmpStr, NULL);
		for (int j =0; j < m_maps.GetCount(); j++)
		{
			MapColumn mc = m_maps[j];
			
			if(mc.xlsColumn >=0 )
			{
				
				_variant_t	vItem = pRange->Item[ iRow  ][ mc.xlsColumn ];
	//Here i am getting values.
		
				_bstr_t		bstrText( vItem );

				if ( bstrText.length( ) != 0 )
				{
				//	std::wstring str = bstrText;
					m_wndList.SetItemText(nItem, mc.xlsColumn, (LPCTSTR)bstrText);
				}
				
			}

		}

	
	}

	pBook->Close( VARIANT_FALSE );

	pApplication->Quit( );

	//CoUninitialize(); 
/*
	for(int j =0; j < cols; j++)
	{
		tmpStr = xls.ReadString(0, j);
		for (int i=0; i < m_maps.GetCount(); i++)
		{
			MapColumn mc  = m_maps.GetAt(i);
			if(mc.szExcelColName == tmpStr)
			{
				mc.xlsColumn = j;
				m_maps.SetAt(i, mc);
				break;
			}

		}

	//	_msg(_T("%s"), tmpStr);
	}
*/
	//for (int i = 1; i < 10; i++)
	//{
	//	int nItem = m_wndList.AddItems(_T(""), NULL);
	//	for (int j =0; j < cols; j++)
	//	{
	//		int k = IsMaped(j);
	//		if(k >=0)
	//		{
	//			//tmpStr = xls.ReadString(i, j);
	//			
	//			m_wndList.SetItemText(nItem, k, tmpStr);

	//		}
	//	}
	//}
	m_wndList.EndLoad(); 
	CString szEmplId;
	szSQL.Format(_T("SELECT hee_id FROM hms_exm_employee WHERE hee_company_id=%ld "),m_nCompanyId);

	rs.ExecSQL(szSQL);
	while(!rs.IsEOF())
	{
		rs.GetValue(_T("hee_id"), szEmplId);
_tprintf(_T("\r\n%s"), tmpStr);
		for (int i =0; i < m_wndList.GetItemCount(); i++)
		{
			CString szId = m_wndList.GetItemText(i, 1);
			if(szId == szEmplId)
			{
				m_wndList.SetCheck(i, TRUE);
				break;
			}
		}
		rs.MoveNext();
	}
	return 0;
}

int CHMSExmImportExcelDialogEx::IsMaped(int nCol)
{
	for (int i =0; i < m_maps.GetCount(); i++)
	{
		MapColumn mc = m_maps[i];
		if(mc.xlsColumn == nCol)
		{
			return i;
		}
	}
	return -1;
}
int CHMSExmImportExcelDialogEx::OnAddHMSExmImportExcelDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CGuiMainFrame *pMF = (CGuiMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSExmImportExcelDialogEx::OnEditHMSExmImportExcelDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CGuiMainFrame *pMF = (CGuiMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSExmImportExcelDialogEx::OnDeleteHMSExmImportExcelDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CGuiMainFrame *pMF = (CGuiMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
 	szSQL.Format(_T("DELETE FROM  WHERE  AND") );
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
 		SetMode(VM_NONE);
 		OnCancelHMSExmImportExcelDialog();
 	}
	return 0;
}
int CHMSExmImportExcelDialogEx::OnSaveHMSExmImportExcelDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CGuiMainFrame *pMF = (CGuiMainFrame *)AfxGetMainWnd();
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
 		//OnHMSExmImportExcelDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSExmImportExcelDialogEx::OnCancelHMSExmImportExcelDialog(){
 	if(GetMode() == VM_EDIT)
 	{
 		SetMode(VM_VIEW);
 	} 
 	else 
 	{
 		SetMode(VM_NONE);
 	} 
 	CGuiMainFrame *pMF = (CGuiMainFrame *)AfxGetMainWnd();
 	return 0;
} 
int CHMSExmImportExcelDialogEx::OnHMSExmImportExcelDialogListLoadData(){
	return 0;
}
