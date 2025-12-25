#include "ImportInsuranceListDialog.h"
#include "MainFrame_E10.h"
#include "Excel.h"
#include "ReportDocument.h"


#define Uses_MSO2015

#pragma warning(disable:4146)
#pragma message("Import MSO.DLL")

#import "..\\Lib\\mso.dll"  \
		rename("RGB","MSORGB")
#import "..\\Lib\\VBE6EXT.OLB" \
		raw_interfaces_only, \
		rename("Reference",		"ignorethis"), \
		rename("VBE",			"testVBE")

#ifdef Uses_MSO2015

#import "..\\Lib\\excel.exe" \
		exclude("IFont", "IPicture") \
		rename("VBE",			"testVBE") \
		rename("FindText",		"ExcelFindText") \
		rename("NoPrompt",		"ExcelNoPrompt") \
		rename("CopyFile",		"ExcelCopyFile") \
		rename("ReplaceText",	"ExcelReplaceText") \
		rename("RGB",			"ExcelRGB") \
		rename("DialogBox",		"ExcelDialogBox") 	\
		no_auto_exclude

#endif

#ifdef Uses_MSO2014
#import "C:\\Program Files (x86)\\Microsoft Office\\Office14\\excel.exe" \
		exclude("IFont", "IPicture") \
		rename("VBE",			"testVBE") \
		rename("FindText",		"ExcelFindText") \
		rename("NoPrompt",		"ExcelNoPrompt") \
		rename("CopyFile",		"ExcelCopyFile") \
		rename("ReplaceText",	"ExcelReplaceText") \
		rename("RGB",			"ExcelRGB") \
		rename("DialogBox",		"ExcelDialogBox") 	\
		no_auto_exclude
#endif

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
#endif
#ifdef Uses_MSO97
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


using namespace VBIDE;
using namespace Office;

#pragma warning(default:4146)



int test(LPCTSTR lpszFile) 
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
	Excel::RangePtr pRange = pSheet->GetRange( _bstr_t( _T("A1") ), _bstr_t( _T("Z1" ) ) );
	


	if ( pRange == NULL )
	{
		_tprintf( _T("Failed to get header cell range( A1:iv )!") );
		return 0;
	}

	int	iColumns = 0;

	for ( int iColumn = 1; iColumn < 26; ++iColumn )
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
	

	int iColumn=0;
	for ( int iRow = 1; ; ++iRow )
	{
		for (  iColumn = 1; iColumn <= iColumns; ++iColumn )
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
	CImportInsuranceListDialog *pVw = (CImportInsuranceListDialog *)pWnd;
	pVw->OnBrowseSelect();
} 
/*static void _OnURLChangeFnc(CWnd *pWnd){
	((CImportInsuranceListDialog *)pWnd)->OnURLChange();
} */
/*static void _OnURLSetfocusFnc(CWnd *pWnd){
	((CImportInsuranceListDialog *)pWnd)->OnURLSetfocus();} */ 
/*static void _OnURLKillfocusFnc(CWnd *pWnd){
	((CImportInsuranceListDialog *)pWnd)->OnURLKillfocus();
} */
static int _OnURLCheckValueFnc(CWnd *pWnd){
	return ((CImportInsuranceListDialog *)pWnd)->OnURLCheckValue();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CImportInsuranceListDialog *pVw = (CImportInsuranceListDialog *)pWnd;
	pVw->OnPrintSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CImportInsuranceListDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CImportInsuranceListDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CImportInsuranceListDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CImportInsuranceListDialog*)pWnd)->OnListDeleteItem();
} 
static int _OnAddImportInsuranceListDialogFnc(CWnd *pWnd){
	 return ((CImportInsuranceListDialog*)pWnd)->OnAddImportInsuranceListDialog();
} 
static int _OnEditImportInsuranceListDialogFnc(CWnd *pWnd){
	 return ((CImportInsuranceListDialog*)pWnd)->OnEditImportInsuranceListDialog();
} 
static int _OnDeleteImportInsuranceListDialogFnc(CWnd *pWnd){
	 return ((CImportInsuranceListDialog*)pWnd)->OnDeleteImportInsuranceListDialog();
} 
static int _OnSaveImportInsuranceListDialogFnc(CWnd *pWnd){
	 return ((CImportInsuranceListDialog*)pWnd)->OnSaveImportInsuranceListDialog();
} 
static int _OnCancelImportInsuranceListDialogFnc(CWnd *pWnd){
	 return ((CImportInsuranceListDialog*)pWnd)->OnCancelImportInsuranceListDialog();
} 
CImportInsuranceListDialog::CImportInsuranceListDialog(CWnd *pParent): CGuiDialog(pParent)
{

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CImportInsuranceListDialog::~CImportInsuranceListDialog(){
}
void CImportInsuranceListDialog::OnCreateComponents(){
	m_wndListPatients.Create(this, _T("Patients List"), 5, 5, 510, 60);
	m_wndBrowse.Create(this, _T("&Browse"), 420, 30, 505, 55);
	m_wndURL.Create(this,10, 30, 415, 55);
	m_wndPrint.Create(this, _T("&Print"), 420, 530, 505, 555);
	m_wndList.Create(this,5, 65, 510, 525); 

}
void CImportInsuranceListDialog::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndURL.SetLimitText(1024);
	m_wndURL.SetCheckValue(true);

/*
	m_wndList.InsertColumn(0, _T("STT"), CFMT_TEXT, 30);
	m_wndList.InsertColumn(1, _T("STT TT"), CFMT_TEXT, 30);
	m_wndList.InsertColumn(2, _T("M\xE3 TT"), CFMT_TEXT, 30);
	m_wndList.InsertColumn(3, _T("M\xE3 \x44VKT"), CFMT_TEXT, 150);
	m_wndList.InsertColumn(4, _T("M\xE3 Kho\x61"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(5, _T("T\xEAn \x64\x1ECB\x63h v\x1EE5"), CFMT_TEXT, 200);
	m_wndList.InsertColumn(6, _T("Unit"), CFMT_TEXT, 70);
	m_wndList.InsertColumn(7, _T("GroupID"), CFMT_TEXT, 100);

	m_wndList.InsertColumn(8, _T("Gi\xE1 \x44V"), CFMT_TEXT, 70);
	m_wndList.InsertColumn(9, _T("Gi\xE1 \x42H"), CFMT_TEXT, 70);

	m_wndList.InsertColumn(10, _T("Gi\xE1 \x43h\xEDnh s\xE1\x63h"), CFMT_TEXT, 70);
	m_wndList.InsertColumn(11, _T("Gi\xE1 Y\xEAu \x63\x1EA7u"), CFMT_TEXT, 70);
	
	m_wndList.InsertColumn(12, _T("\x42H tr\x1EA3"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(13, _T("\x43h\xEDnh s\xE1\x63h tr\x1EA3"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(14, _T("Tr\x1EA3 \x63h\xEAnh"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(15, _T("K\x1EF9 thu\x1EADt \x63\x61o"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(16, _T("Status"), CFMT_TEXT, 50);
*/	


	m_m_product_extra_infoTbl.AddField(_T("MPEI_PRODUCT_ID"), dfLong); 
	m_m_product_extra_infoTbl.AddField(_T("MPEI_STT"), dfLong); 
	m_m_product_extra_infoTbl.AddField(_T("MPEI_MA_HOAT_CHAT"), dfText, 254); 
	m_m_product_extra_infoTbl.AddField(_T("MPEI_HOAT_CHAT"), dfText, 512); 
	m_m_product_extra_infoTbl.AddField(_T("MPEI_MA_DUONG_DUNG"), dfText, 254); 
	m_m_product_extra_infoTbl.AddField(_T("MPEI_DUONG_DUNG"), dfText, 254); 
	m_m_product_extra_infoTbl.AddField(_T("MPEI_HAM_LUONG"), dfText, 254); 
	m_m_product_extra_infoTbl.AddField(_T("MPEI_TEN_THUOC"), dfText, 254); 
	m_m_product_extra_infoTbl.AddField(_T("MPEI_MA_LOAI"), dfText, 254); 
	m_m_product_extra_infoTbl.AddField(_T("MPEI_SO_DANG_KY"), dfText, 254); 
	m_m_product_extra_infoTbl.AddField(_T("MPEI_DONG_GOI"), dfText, 254); 
	m_m_product_extra_infoTbl.AddField(_T("MPEI_DON_VI_TINH"), dfText, 254); 
	m_m_product_extra_infoTbl.AddField(_T("MPEI_DON_GIA"), dfLong); 
	m_m_product_extra_infoTbl.AddField(_T("MPEI_DON_GIA_TT"), dfLong); 
	m_m_product_extra_infoTbl.AddField(_T("MPEI_SO_LUONG"), dfLong); 
	m_m_product_extra_infoTbl.AddField(_T("MPEI_MA_CSKCB"), dfText, 254); 
	m_m_product_extra_infoTbl.AddField(_T("MPEI_HANG_SX"), dfText, 254); 
	m_m_product_extra_infoTbl.AddField(_T("MPEI_NUOC_SX"), dfText, 254); 
	m_m_product_extra_infoTbl.AddField(_T("MPEI_NHA_THAU"), dfText, 254); 
	m_m_product_extra_infoTbl.AddField(_T("MPEI_QUYET_DINH"), dfText, 254); 
	m_m_product_extra_infoTbl.AddField(_T("MPEI_CONG_BO"), dfDate); 
	m_m_product_extra_infoTbl.AddField(_T("MPEI_MA_THUOC_BV"), dfText, 254); 
	m_m_product_extra_infoTbl.AddField(_T("MPEI_MA_NHOM_VTYT"), dfText, 254); 
	m_m_product_extra_infoTbl.AddField(_T("MPEI_TEN_NHOM_VTYT"), dfText, 254); 
	m_m_product_extra_infoTbl.AddField(_T("MPEI_MA_HIEU"), dfText, 254); 
	m_m_product_extra_infoTbl.AddField(_T("MPEI_DINH_MUC"), dfLong); 
	m_m_product_extra_infoTbl.AddField(_T("MPEI_LOAI_THAU"), dfLong); 
//	m_m_product_extra_infoTbl.AddField(_T("MPEI_ID"), dfLong); 

	
	AddRefColumn(_T("MPEI_STT"), _T("STT")); 
	AddRefColumn(_T("MPEI_MA_HOAT_CHAT"), _T("MA_AX")); 
	AddRefColumn(_T("MPEI_HOAT_CHAT"), _T("HOAT_CHAT")); 

	AddRefColumn(_T("MPEI_MA_DUONG_DUNG"), _T("MA_DUONG_DUNG")); 
	AddRefColumn(_T("MPEI_DUONG_DUNG"),_T("DUONG_DUNG")); 
	AddRefColumn(_T("MPEI_HAM_LUONG"), _T("HAM_LUONG")); 
	AddRefColumn(_T("MPEI_TEN_THUOC"), _T("TEN_THUOC")); 
	//AddRefColumn(_T("MPEI_MA_LOAI"), dfText, 254); 
	AddRefColumn(_T("MPEI_SO_DANG_KY"), _T("SO_DANG_KY")); 
	AddRefColumn(_T("MPEI_DONG_GOI"), _T("DONG_GOI")); 
	AddRefColumn(_T("MPEI_DON_VI_TINH"), _T("DON_VI_TINH")); 
	AddRefColumn(_T("MPEI_DON_GIA"), _T("DON_GIA")); 
	AddRefColumn(_T("MPEI_DON_GIA_TT"), _T("DON_GIA_TT")); 
	AddRefColumn(_T("MPEI_SO_LUONG"), _T("SO_LUONG")); 
	AddRefColumn(_T("MPEI_MA_CSKCB"), _T("MA_CSKCB")); 
	AddRefColumn(_T("MPEI_HANG_SX"), _T("HANG_SX")); 
	AddRefColumn(_T("MPEI_NUOC_SX"), _T("NUOC_SX")); 
	AddRefColumn(_T("MPEI_NHA_THAU"), _T("NHA_THAU")); 
	AddRefColumn(_T("MPEI_QUYET_DINH"), _T("QUYET_DINH")); 
	AddRefColumn(_T("MPEI_CONG_BO"), _T("CONG_BO")); 
	//AddRefColumn(_T("MPEI_MA_THUOC_BV"), dfText, 254); 
	//AddRefColumn(_T("MPEI_MA_NHOM_VTYT"), dfText, 254); 
	//AddRefColumn(_T("MPEI_TEN_NHOM_VTYT"), dfText, 254); 
	//AddRefColumn(_T("MPEI_MA_HIEU"), dfText, 254); 
	//AddRefColumn(_T("MPEI_DINH_MUC"), dfLong); 
	//AddRefColumn(_T("MPEI_LOAI_THAU"), dfLong); 
	//AddRefColumn(_T("MPEI_ID"), dfLong); 


}

void CImportInsuranceListDialog::AddRefColumn(CString szField, CString szColName)
{
	MapColumn mc;
	mc.szFieldName = szField;
	mc.szExcelColName = szColName;
	m_maps.Add(mc);
}
void CImportInsuranceListDialog::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndBrowse.SetEvent(WE_CLICK, _OnBrowseSelectFnc);
	//m_wndURL.SetEvent(WE_CHANGE, _OnURLChangeFnc);
	//m_wndURL.SetEvent(WE_SETFOCUS, _OnURLSetfocusFnc);
	//m_wndURL.SetEvent(WE_KILLFOCUS, _OnURLKillfocusFnc);
	m_wndURL.SetEvent(WE_CHECKVALUE, _OnURLCheckValueFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
/*
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddImportInsuranceListDialogFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditImportInsuranceListDialogFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteImportInsuranceListDialogFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveImportInsuranceListDialogFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelImportInsuranceListDialogFnc, 0, 'T', VK_CONTROL);
*/
	SetMode(VM_NONE);
	::GetCurrentDirectory(MAX_PATH, m_szCurrentDir.GetBufferSetLength(MAX_PATH));
	m_szCurrentDir.ReleaseBuffer();
}
void CImportInsuranceListDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndURL.GetDlgCtrlID(), m_szURL);

}
void CImportInsuranceListDialog::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CImportInsuranceListDialog::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CImportInsuranceListDialog::SetDefaultValues(){

	m_szURL.Empty();

}
int CImportInsuranceListDialog::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
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
		m_wndPrint.EnableWindow(TRUE);
 		UpdateData(FALSE);
 		return nOldMode;
}
void CImportInsuranceListDialog::OnBrowseSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
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
/*void CImportInsuranceListDialog::OnURLChange(){
	
} */
/*void CImportInsuranceListDialog::OnURLSetfocus(){
	
} */
/*void CImportInsuranceListDialog::OnURLKillfocus(){
	
} */
int CImportInsuranceListDialog::OnURLCheckValue(){
	return 0;
} 
void CImportInsuranceListDialog::OnPrintSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	CString szQuyetdinhId;
	CString szSodangkyId;
	for (int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		for (int j =0; j < m_maps.GetCount(); j++)
		{
			MapColumn mc = m_maps[j];
			m_m_product_extra_infoTbl.SetValue(mc.szFieldName, m_wndList.GetItemText(i, j));
		}
		szQuyetdinhId = m_wndList.GetItemText(i, m_nQuyetdinhIdx);
		szSodangkyId = m_wndList.GetItemText(i, m_nSodangkyIdx);

		szSQL.Format(_T("SELECT count(*) FROM m_m_product_extra_info WHERE MPEI_QUYET_DINH='%s' and MPEI_SO_DANG_KY='%s'"), szQuyetdinhId, szSodangkyId);
		rs.ExecSQL(szSQL);
		if(rs.GetIntValue() > 0)
		{
			szSQL.Format(_T("%s"), m_m_product_extra_infoTbl.GetUpdateSQL(_T("MPEI_QUYET_DINH,MPEI_SO_DANG_KY")));
			szSQL.AppendFormat(_T(" WHERE MPEI_QUYET_DINH='%s' and MPEI_SO_DANG_KY='%s' "), szQuyetdinhId, szSodangkyId);
		}
		else
			szSQL.Format(_T("%s"), m_m_product_extra_infoTbl.GetInsertSQL());
		pMF->ExecSQL(szSQL);
		_msg(_T("%s"), szSQL);
		if(i > 10)
			break;
	}
	
} 
void CImportInsuranceListDialog::OnListDblClick(){
	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
	CReport rpt;
	CString tmpStr;
	UpdateData(true);
	if(!rpt.Init(_T("Reports/HMS/BANGTOTNGHIEP.RPT"),true))
	{
		return;
	};
	int nCell= m_wndList.GetCurSel();
	rpt.GetReportHeader()->SetValue(_T("PatientName"),m_wndList.GetItemText(nCell,1));
	rpt.GetReportHeader()->SetValue(_T("Adress"),m_wndList.GetItemText(nCell,2));
	rpt.PrintPreview();
	
} 
void CImportInsuranceListDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
int CImportInsuranceListDialog::OnListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	 return 0;
} 

CString szFile;
HANDLE hThread;  

unsigned __stdcall SecondThreadFunc( void* pArguments )  
{  
	CImportInsuranceListDialog* pDlg = (CImportInsuranceListDialog*) pArguments;
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

	pBook =  pApplication->Workbooks->Open((LPCTSTR)szFile, 
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
	WaitForSingleObject( hThread, INFINITE ); 
	CloseHandle( hThread );  
    return 0;  
}   

long CImportInsuranceListDialog::OnListLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
		CString szSQL;
	CRecord rs(&pMF->m_db);
	CString tmpStr,tmpStr1,tmpStr2,tmpStr3,tmpStr4,tmpStr5;
	CString tmpStr6,tmpStr7,tmpStr8,tmpStr9,tmpStr10,tmpStr11;
	CString tmpStr12,tmpStr13,tmpStr14,tmpStr15,tmpStr16,tmpStr17;
	tmpStr.Empty();

	
	szSQL.Format(_T("SELECT * FROM m_product_extra_info WHERE rownum <=1 "));
	rs.ExecSQL(szSQL);

	m_nQuyetdinhIdx = 0;
	m_nSodangkyIdx = 0;
	if(!rs.IsEOF())
	{
		m_wndList.DeleteAllColumns();
		for(int i =0; i < m_maps.GetCount(); i++)
		{
			MapColumn mc  = m_maps.GetAt(i);
			if(mc.szFieldName == _T("MPEI_Quyetdinh"))
			{
				m_nQuyetdinhIdx = i;
			}
			if(mc.szFieldName == _T("MPEI_sodangky"))
			{
				m_nSodangkyIdx = i;
			}
			m_wndList.InsertColumn(i, mc.szExcelColName, CFMT_TEXT, 100);
		}
	}
	
    m_wndList.DeleteAllItems();
	m_wndList.BeginLoad(); 
	int rows, cols;


//	rows = xls.GetTotalRows();
//	cols = xls.GetTotalColumns();
	/*
	for(int i =0; i < m_maps.GetCount(); i++)
	{
		MapColumn mc  = m_maps.GetAt(i);
		for(int j =0; j < cols; j++)
		{
			CString szName = xls.ReadString(0, j);
			
			if(szName == mc.szExcelColName)
			{
				mc.xlsColumn= j;
				m_maps.SetAt(i, mc);
				_tprintf(_T("\r\n%d:%s"), j, szName);
			}
		}
	}
*/

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
	Excel::RangePtr pRange = pSheet->GetRange( _bstr_t( _T("A1") ), _bstr_t( _T("Z1" ) ) );
	


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

	for ( int iColumn = 1; iColumn < cols; ++iColumn )
	{
		_variant_t	vItem = pRange->Item[ 1 ][ iColumn ];
		_bstr_t		bstrText( vItem );

		if ( bstrText.length( ) == 0 )
			break;
		std::wstring str = bstrText;
		for (int i=0; i < m_maps.GetCount(); i++)
		{
			MapColumn mc  = m_maps.GetAt(i);
			if(mc.szExcelColName == str.c_str())
			{
				mc.xlsColumn = iColumn;
				m_maps.SetAt(i, mc);
				break;
			}

		}
		iColumns ++;
		
		
	}
	

	int iColumn=0;
	for ( int iRow = 1; iRow < rows; ++iRow )
	{
		int nItem = m_wndList.AddItems(_T(""), NULL);
		for (int j =0; j < m_maps.GetCount(); j++)
		{
			MapColumn mc = m_maps[j];
			_variant_t	vItem = pRange->Item[ iRow  ][ mc.xlsColumn ];
//Here i am getting values.
			
			_bstr_t		bstrText( vItem );

			if ( bstrText.length( ) != 0 )
			{
			//	std::wstring str = bstrText;
				m_wndList.SetItemText(nItem, j, (LPCTSTR)bstrText);
			}

		}
_tprintf(_T("\r\n%d"), iRow);
	
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

	return 0;
}

int CImportInsuranceListDialog::IsMaped(int nCol)
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
int CImportInsuranceListDialog::OnAddImportInsuranceListDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CImportInsuranceListDialog::OnEditImportInsuranceListDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CImportInsuranceListDialog::OnDeleteImportInsuranceListDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	CString szSQL;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
 	szSQL.Format(_T("DELETE FROM  WHERE  AND") );
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
 		SetMode(VM_NONE);
 		OnCancelImportInsuranceListDialog();
 	}
	return 0;
}
int CImportInsuranceListDialog::OnSaveImportInsuranceListDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
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
 		//OnImportInsuranceListDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CImportInsuranceListDialog::OnCancelImportInsuranceListDialog(){
 	if(GetMode() == VM_EDIT)
 	{
 		SetMode(VM_VIEW);
 	} 
 	else 
 	{
 		SetMode(VM_NONE);
 	} 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	return 0;
} 
int CImportInsuranceListDialog::OnImportInsuranceListDialogListLoadData(){
	return 0;
}
