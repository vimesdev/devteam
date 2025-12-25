#include ".\pacspatientprofile.h"
#include "Tlhelp32.h"
#include "afxinet.h"
#include <gdiplus.h>
#include "Guiutils.h"

#import "..\Lib\MSO.DLL" \
		rename("RGB","MSORGB")
using namespace Office;
#import "..\Lib\VBE6EXT.OLB" \
		raw_interfaces_only, \
		rename("Reference",		"ignorethis"), \
		rename("VBE",			"testVBE")
using namespace VBIDE;
#import "..\Lib\MSWORD.OLB" \
		rename("ExitWindows", "_ExitWindows") \
		rename("FindText", "_FindText") \
		rename("VBE",			"testVBE")
#include "PacsDetailLineInfo.h"
#include "MainFrm.h"


static void _OnPrintToWordSelectFnc(CWnd *pWnd){
	CPacsDetailLineInfo *pVw = (CPacsDetailLineInfo *)pWnd;
	pVw->OnPrintToWordSelect();
} 
static int _OnAddPacsDetailLineInfoFnc(CWnd *pWnd){
	 return ((CPacsDetailLineInfo*)pWnd)->OnAddPacsDetailLineInfo();
} 
static int _OnEditPacsDetailLineInfoFnc(CWnd *pWnd){
	 return ((CPacsDetailLineInfo*)pWnd)->OnEditPacsDetailLineInfo();
} 
static int _OnDeletePacsDetailLineInfoFnc(CWnd *pWnd){
	 return ((CPacsDetailLineInfo*)pWnd)->OnDeletePacsDetailLineInfo();
} 
static int _OnSavePacsDetailLineInfoFnc(CWnd *pWnd){
	 return ((CPacsDetailLineInfo*)pWnd)->OnSavePacsDetailLineInfo();
} 
static int _OnCancelPacsDetailLineInfoFnc(CWnd *pWnd){
	 return ((CPacsDetailLineInfo*)pWnd)->OnCancelPacsDetailLineInfo();
} 
CPacsDetailLineInfo::CPacsDetailLineInfo(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CPacsDetailLineInfo::~CPacsDetailLineInfo(){
}
void CPacsDetailLineInfo::OnCreateComponents()
{
	m_wndPacsLineInfo.Create(this, _T("XXX"), 5, 6, 425, 61);
	m_wndPacsLineInfo.SetWindowText(m_szItemName);
	m_wndPrintToWord.Create(this, _T("&PrintToWord"), 326, 31, 420, 56);
}
void CPacsDetailLineInfo::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CPacsDetailLineInfo::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndPrintToWord.SetEvent(WE_CLICK, _OnPrintToWordSelectFnc);
	SetMode(VM_NONE);

}
void CPacsDetailLineInfo::OnDoDataExchange(CDataExchange* pDX){

}
void CPacsDetailLineInfo::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	}
	else
	{
			
	}

}
void CPacsDetailLineInfo::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CPacsDetailLineInfo::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CPacsDetailLineInfo::SetDefaultValues(){


}
int CPacsDetailLineInfo::SetMode(int nMode){
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
void CPacsDetailLineInfo::OnPrintToWordSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	PrintbyWord();
	
} 
int CPacsDetailLineInfo::OnAddPacsDetailLineInfo(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CPacsDetailLineInfo::OnEditPacsDetailLineInfo(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CPacsDetailLineInfo::OnDeletePacsDetailLineInfo(){
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
 		OnCancelPacsDetailLineInfo();
 	}
	return 0;
}
int CPacsDetailLineInfo::OnSavePacsDetailLineInfo(){
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
 		//OnPacsDetailLineInfoListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CPacsDetailLineInfo::OnCancelPacsDetailLineInfo(){
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
int CPacsDetailLineInfo::OnPacsDetailLineInfoListLoadData(){
	return 0;
}
void CPacsDetailLineInfo::PrintbyWord()
{
	if (!m_bComInit)
	{
		return;
	}
	CMainFrame* pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T(" SELECT hd_patientno AS patientno,") \
				_T("   hd_docno          AS docno,") \
				_T("    (SELECT hpr_desc") \
				_T("   FROM hms_pacs_result") \
				_T("   WHERE hpcl_docno = hpr_docno") \
				_T("   AND hpcl_orderid = hpr_orderid") \
				_T("   AND hpcl_itemid  = hpr_itemid") \
				_T("   AND hpr_name     ='6'") \
				_T("   ) AS maso,") \
				_T("   trim(hp_surname") \
				_T("   ||' '") \
				_T("   ||hp_midname") \
				_T("   ||' '") \
				_T("   ||hp_firstname)                                                         AS pname,") \
				_T("   hpc_deptid                                                              AS dept,") \
				_T("   (SELECT ho_desc FROM hms_object WHERE ho_id=hd_object") \
				_T("   )             AS objectname,  ") \
				_T("   CAST(TO_CHAR(hp_birthdate, 'YYYY') AS INTEGER)                          AS birthyear,") \
				_T("   sys_sel_getname('sys_sex', hp_sex)                                      AS sex,") \
				_T(" get_syssel_desc('sys_occupation', hp_occupation) as job, ") \
				_T("   (SELECT hpr_desc") \
				_T("   FROM hms_pacs_result") \
				_T("   WHERE hpcl_docno = hpr_docno") \
				_T("   AND hpcl_orderid = hpr_orderid") \
				_T("   AND hpcl_itemid  = hpr_itemid") \
				_T("   AND hpr_name     ='1'") \
				_T("   ) AS benhpham,") \
				_T("   trim(hd_diagnostic)  ||'['||trim(hd_icd)||']' AS diagnostic,") \
				_T("   'Ngày '||to_char(current_date, 'dd')||' Tháng '||to_char(current_date, 'mm')||' Năm '||to_char(current_date, 'yyyy') as printdate") \
				_T(" FROM hms_patient") \
				_T(" LEFT JOIN hms_doc") \
				_T(" ON(hd_patientno=hp_patientno)") \
				_T(" LEFT JOIN HMS_PACSORDER ON (hpc_docno=hd_docno)") \
				_T(" LEFT JOIN hms_pacsorderline") \
				_T(" ON ( hpc_orderid = hpcl_orderid )") \
				_T(" LEFT JOIN hms_pacs_result") \
				_T(" ON (hpcl_docno   = hpr_docno") \
				_T(" AND hpcl_orderid = hpr_orderid") \
				_T(" AND hpcl_itemid  = hpr_itemid") \
				_T(" AND hpr_name     = 'Conclusion')") \
				_T(" WHERE HPCL_ORDERLINEID=%ld"), m_nOrderLineID);
				
	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data"));
		return;
	}
try
{
	Word::_ApplicationPtr pApp;
	if (FAILED(pApp.GetActiveObject(_T("Word.Application"))))
	{
		if ( FAILED( pApp.CreateInstance( _T("Word.Application") ) ) )
		{	
			_tprintf(_T("\nFail to create instance\n"));
			return;
		}	
	}
	pApp->Visible = VARIANT_FALSE;
	_variant_t vt, vtr, vtc = 0;
	TCHAR dir[MAX_PATH];
	GetCurrentDirectory(MAX_PATH, dir);
	CString str(dir), tmpStr, strVal;
	str += _T("\\Words");
	vt = (LPCTSTR) str;
	if (FAILED(pApp->ChangeFileOpenDirectory(_bstr_t(vt))))
	{
		_tprintf(_T("\nFail to change directory\n"));
		return;
	}
	Word::DocumentsPtr pDocs = pApp->Documents;
	Word::_DocumentPtr pDoc;
	vt = _T("MauyeucauXNhoamomiendich_prv.docx");
	for (int i = 1; i <= pDocs->Count; i++)
	{
		_variant_t vt(i);
		pDoc = pDocs->Item(&VARIANT(vt));
		if (pDoc->Name == _bstr_t("MauyeucauXNhoamomiendich_prv.docx"))
		{
			_tprintf(_T("\nFound preview\n"));
			pDoc->Close();
			break;
		}
	}
	vt = _T("MauyeucauXNhoamomiendich.docx");
	bool bFound = false;
	for (int i = 1; i <= pDocs->Count; i++)
	{
		_variant_t vt(i);
		pDoc = pDocs->Item(&VARIANT(vt));
		if (pDoc->Name == _bstr_t("MauyeucauXNhoamomiendich.docx"))
		{
			_tprintf(_T("\nFound\n"));
			pDoc->Activate();
			bFound = true;
		}
	}
	if (!bFound)
	{
		if (pDocs->Open(&VARIANT(vt)) == NULL)
		{
			_tprintf(_T("\nFail to open document\n"));
			return;
		}
	}
	pDoc = pApp->GetActiveDocument();
	vt = _T("MauyeucauXNhoamomiendich_prv.docx");
	pDoc->SaveAs2(&VARIANT(vt));
	Word::ContentControlsPtr pControls = pDoc->GetContentControls();
	_bstr_t bt;
	std::wstring wstr;
	bool bCR = false, bLF = false;
	Word::RangePtr pRange;
	for (int i = 0; i < pControls->GetCount(); i++)
	{
		_variant_t vt(i+1);
		Word::ContentControlPtr pControl = pControls->Item(&VARIANT(vt));
		bt = pControl->GetTitle();
		wstr = (wchar_t*) bt;
		str = wstr.c_str();
		strVal = rs.GetValue(str);
		pRange = pControl->Range;
		pRange->Text = _bstr_t(LPCTSTR(strVal));
	}
	
	//pDoc->PrintPreview();
	//Word::WindowPtr pWnd = pApp->GetActiveWindow();
	//Word::ViewPtr pView = pWnd->GetView();
	//pView->Zoom->Percentage = 100;
	pApp->Visible = VARIANT_TRUE;
}
catch(_com_error& err)
{
	_tprintf(_T("\nerr:%s| code: %u\n"), err.ErrorMessage(), err.Error());
}
catch (...)
{
	_tprintf(_T("\nUnknown err\n"));
}
	return;
}