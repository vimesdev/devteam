#include "HMSGetDiagnosticByDocno.h"
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






static void _OnBrowseSelectFnc(CWnd *pWnd){
	CHMSGetDiagnosticByDocno *pVw = (CHMSGetDiagnosticByDocno *)pWnd;
	pVw->OnBrowseSelect();
} 
/*static void _OnURLChangeFnc(CWnd *pWnd){
	((CHMSGetDiagnosticByDocno *)pWnd)->OnURLChange();
} */
/*static void _OnURLSetfocusFnc(CWnd *pWnd){
	((CHMSGetDiagnosticByDocno *)pWnd)->OnURLSetfocus();} */ 
/*static void _OnURLKillfocusFnc(CWnd *pWnd){
	((CHMSGetDiagnosticByDocno *)pWnd)->OnURLKillfocus();
} */
static int _OnURLCheckValueFnc(CWnd *pWnd){
	return ((CHMSGetDiagnosticByDocno *)pWnd)->OnURLCheckValue();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CHMSGetDiagnosticByDocno *pVw = (CHMSGetDiagnosticByDocno *)pWnd;
	pVw->OnPrintSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSGetDiagnosticByDocno*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSGetDiagnosticByDocno*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSGetDiagnosticByDocno*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSGetDiagnosticByDocno*)pWnd)->OnListDeleteItem();
} 
static int _OnAddHMSGetDiagnosticByDocnoFnc(CWnd *pWnd){
	 return ((CHMSGetDiagnosticByDocno*)pWnd)->OnAddHMSGetDiagnosticByDocno();
} 
static int _OnEditHMSGetDiagnosticByDocnoFnc(CWnd *pWnd){
	 return ((CHMSGetDiagnosticByDocno*)pWnd)->OnEditHMSGetDiagnosticByDocno();
} 
static int _OnDeleteHMSGetDiagnosticByDocnoFnc(CWnd *pWnd){
	 return ((CHMSGetDiagnosticByDocno*)pWnd)->OnDeleteHMSGetDiagnosticByDocno();
} 
static int _OnSaveHMSGetDiagnosticByDocnoFnc(CWnd *pWnd){
	 return ((CHMSGetDiagnosticByDocno*)pWnd)->OnSaveHMSGetDiagnosticByDocno();
} 
static int _OnCancelHMSGetDiagnosticByDocnoFnc(CWnd *pWnd){
	 return ((CHMSGetDiagnosticByDocno*)pWnd)->OnCancelHMSGetDiagnosticByDocno();
} 
CHMSGetDiagnosticByDocno::CHMSGetDiagnosticByDocno(CWnd *pParent): CGuiDialog(pParent)
{

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CHMSGetDiagnosticByDocno::~CHMSGetDiagnosticByDocno(){
}
void CHMSGetDiagnosticByDocno::OnCreateComponents(){
	m_wndListPatients.Create(this, _T("Patients List"), 5, 5, 510, 60);
	m_wndBrowse.Create(this, _T("&Browse"), 420, 30, 505, 55);
	m_wndURL.Create(this,10, 30, 415, 55);
	m_wndPrint.Create(this, _T("&Import"), 420, 530, 505, 555);
	m_wndList.Create(this,5, 65, 510, 525); 

}
void CHMSGetDiagnosticByDocno::OnInitializeComponents(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
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

	m_m_product_extra_infoTbl.SetTableName(_T("hms_doc_getdiagnostic"));
	m_m_product_extra_infoTbl.AddField(_T("hdg_docno"), dfLong); 
	
	AddRefColumn(_T("hdg_docno"), _T("SOHS")); 
	
}

void CHMSGetDiagnosticByDocno::AddRefColumn(CString szField, CString szColName)
{
	MapColumn mc;
	mc.szFieldName = szField;
	mc.szExcelColName = szColName;
	m_maps.Add(mc);
}
void CHMSGetDiagnosticByDocno::OnSetWindowEvents(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
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
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSGetDiagnosticByDocnoFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSGetDiagnosticByDocnoFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSGetDiagnosticByDocnoFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSGetDiagnosticByDocnoFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSGetDiagnosticByDocnoFnc, 0, 'T', VK_CONTROL);
*/
	SetMode(VM_NONE);
	::GetCurrentDirectory(MAX_PATH, m_szCurrentDir.GetBufferSetLength(MAX_PATH));
	m_szCurrentDir.ReleaseBuffer();
}
void CHMSGetDiagnosticByDocno::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndURL.GetDlgCtrlID(), m_szURL);

}
void CHMSGetDiagnosticByDocno::GetDataToScreen(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSGetDiagnosticByDocno::GetScreenToData(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();

}
void CHMSGetDiagnosticByDocno::SetDefaultValues(){

	m_szURL.Empty();

}
int CHMSGetDiagnosticByDocno::SetMode(int nMode){
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
		m_wndPrint.EnableWindow(TRUE);
 		UpdateData(FALSE);
 		return nOldMode;
}
void CHMSGetDiagnosticByDocno::OnBrowseSelect(){
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
/*void CHMSGetDiagnosticByDocno::OnURLChange(){
	
} */
/*void CHMSGetDiagnosticByDocno::OnURLSetfocus(){
	
} */
/*void CHMSGetDiagnosticByDocno::OnURLKillfocus(){
	
} */
int CHMSGetDiagnosticByDocno::OnURLCheckValue(){
	return 0;
} 
void CHMSGetDiagnosticByDocno::OnPrintSelect(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	CString szQuyetdinhId;
	CString szSodangkyId;
	CString tmpStr;
	szSQL.Format(_T("delete from hms_doc_getdiagnostic"));
	rs.ExecSQL(szSQL);
	for (int i = 1; i <= m_wndList.GetItemCount(); i++)
	{
		for (int j =0; j < m_maps.GetCount(); j++)
		{		
				MapColumn mc = m_maps[j];
				m_m_product_extra_infoTbl.SetValue(mc.szFieldName, m_wndList.GetItemText(i, j));
		}

			szSQL.Format(_T("%s"), m_m_product_extra_infoTbl.GetInsertSQL());
		pMF->ExecSQL(szSQL);
		
	}
	_msg(_T(" Import thanh cong "));

	szSQL.Format(_T(" select distinct ma_bn,") \
				_T("     (select LISTAGG( cast(he_prediagnostic as varchar2(2000)),',')  WITHIN GROUP (ORDER BY he_receptno)  as nt") \
				_T("             from  hms_exam where he_docno = ma_bn") \
				_T("             ) as chandoanbandau_pk,") \
				_T("     (select LISTAGG( cast(he_diagnostic as varchar2(2000)),',')  WITHIN GROUP (ORDER BY he_receptno)  as nt") \
				_T("             from  hms_exam where he_docno = ma_bn") \
				_T("             ) as kluan_pk,") \
				_T("       (select LISTAGG( cast(he_icd10 as varchar2(2000)),',')  WITHIN GROUP (ORDER BY he_receptno)  as nt") \
				_T("             from  hms_exam where he_docno = ma_bn") \
				_T("             ) as icd_allpk,") \
				_T("         hd_icd, hd_diagnostic, hd_reldisease, hd_conclusion,") \
				_T("         hcr_admiticd, hcr_admitdisease") \
				_T("         hcr_mainicd,") \
				_T("         hcr_maindisease,") \
				_T("         hms_get_benhkem(ma_bn)    ") \
				_T(" from thuoc_108") \
				_T(" left join hms_doc on (hd_docno = ma_bn)") \
				_T(" left join VIMES.HMS_CLINICAL_RECORD on (hcr_docno = ma_bn)") );
	rs.ExecSQL(szSQL);



	
} 
void CHMSGetDiagnosticByDocno::OnListDblClick(){
	CGuiMainFrame *pMF = (CGuiMainFrame *) AfxGetMainWnd();
	CReport rpt;
	CString tmpStr;
	UpdateData(true);
	if(!rpt.Init(_T("Reports/HMS/PRINTPAITIENT.RPT"),true))
	{
		return;
	};
	int nCell= m_wndList.GetCurSel();
	rpt.GetReportHeader()->SetValue(_T("PatientName"),m_wndList.GetItemText(nCell,1));
	rpt.GetReportHeader()->SetValue(_T("Adress"),m_wndList.GetItemText(nCell,2));
	rpt.PrintPreview();
	
} 
void CHMSGetDiagnosticByDocno::OnListSelectChange(int nOldItem, int nNewItem){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	
} 
int CHMSGetDiagnosticByDocno::OnListDeleteItem(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	 return 0;
} 

long CHMSGetDiagnosticByDocno::OnListLoadData(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
		CString szSQL;
	CRecord rs(&pMF->m_db);
	CString tmpStr,tmpStr1,tmpStr2,tmpStr3,tmpStr4,tmpStr5;
	CString tmpStr6,tmpStr7,tmpStr8,tmpStr9,tmpStr10,tmpStr11;
	CString tmpStr12,tmpStr13,tmpStr14,tmpStr15,tmpStr16,tmpStr17;
	tmpStr.Empty();


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
	
	_tprintf(_T("\r\niColumns: %d"), iColumns);
	int iColumn=0;
	for ( int iRow = 1; iRow <= rows; ++iRow )
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

int CHMSGetDiagnosticByDocno::IsMaped(int nCol)
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
int CHMSGetDiagnosticByDocno::OnAddHMSGetDiagnosticByDocno(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CGuiMainFrame *pMF = (CGuiMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSGetDiagnosticByDocno::OnEditHMSGetDiagnosticByDocno(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CGuiMainFrame *pMF = (CGuiMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSGetDiagnosticByDocno::OnDeleteHMSGetDiagnosticByDocno(){
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
 		OnCancelHMSGetDiagnosticByDocno();
 	}
	return 0;
}
int CHMSGetDiagnosticByDocno::OnSaveHMSGetDiagnosticByDocno(){
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
 		//OnHMSGetDiagnosticByDocnoListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSGetDiagnosticByDocno::OnCancelHMSGetDiagnosticByDocno(){
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
int CHMSGetDiagnosticByDocno::OnHMSGetDiagnosticByDocnoListLoadData(){
	return 0;
}
