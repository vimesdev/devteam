#include "ProductSyncImportDialog.h"
#include "GuiMainFrame.h"
#include <fstream>

#define Uses_MSO2015

#pragma warning(disable:4146)

#ifdef Uses_MSO2015
#pragma message("Import MSO.DLL")
#import "..\\lib\\mso.dll"  \
		rename("RGB","MSORGB")

using namespace Office;

#import "..\\lib\\VBE6EXT.OLB" \
		raw_interfaces_only, \
		rename("Reference",		"ignorethis"), \
		rename("VBE",			"testVBE")
using namespace VBIDE;
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

void WriteUnicodetoFile(const char* myFile,  wstring& ws){
	std::ofstream outFile(myFile, std::ios::out | std::ios::binary | std::ios::app);
	outFile.write((char *) ws.c_str(), ws.length() * sizeof(wchar_t));
	outFile.close();
}
static int _OnListDownloadItemFnc(CWnd *pWnd){
	 return ((CProductSyncImportDialog*)pWnd)->OnListDownloadItem();
}
static int _OnListImportItemFnc(CWnd *pWnd){
	 return ((CProductSyncImportDialog*)pWnd)->OnListImportItem();
}

static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CProductSyncImportDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CProductSyncImportDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CProductSyncImportDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CProductSyncImportDialog*)pWnd)->OnListDeleteItem();
} 
/*static void _OnIDChangeFnc(CWnd *pWnd){
	((CProductSyncImportDialog *)pWnd)->OnIDChange();
} */
/*static void _OnIDSetfocusFnc(CWnd *pWnd){
	((CProductSyncImportDialog *)pWnd)->OnIDSetfocus();} */ 
/*static void _OnIDKillfocusFnc(CWnd *pWnd){
	((CProductSyncImportDialog *)pWnd)->OnIDKillfocus();
} */
static int _OnIDCheckValueFnc(CWnd *pWnd){
	return ((CProductSyncImportDialog *)pWnd)->OnIDCheckValue();
} 
/*static void _OnDescriptionChangeFnc(CWnd *pWnd){
	((CProductSyncImportDialog *)pWnd)->OnDescriptionChange();
} */
/*static void _OnDescriptionSetfocusFnc(CWnd *pWnd){
	((CProductSyncImportDialog *)pWnd)->OnDescriptionSetfocus();} */ 
/*static void _OnDescriptionKillfocusFnc(CWnd *pWnd){
	((CProductSyncImportDialog *)pWnd)->OnDescriptionKillfocus();
} */
static int _OnDescriptionCheckValueFnc(CWnd *pWnd){
	return ((CProductSyncImportDialog *)pWnd)->OnDescriptionCheckValue();
} 
/*static void _OnXLSFileChangeFnc(CWnd *pWnd){
	((CProductSyncImportDialog *)pWnd)->OnXLSFileChange();
} */
/*static void _OnXLSFileSetfocusFnc(CWnd *pWnd){
	((CProductSyncImportDialog *)pWnd)->OnXLSFileSetfocus();} */ 
/*static void _OnXLSFileKillfocusFnc(CWnd *pWnd){
	((CProductSyncImportDialog *)pWnd)->OnXLSFileKillfocus();
} */
static int _OnXLSFileCheckValueFnc(CWnd *pWnd){
	return ((CProductSyncImportDialog *)pWnd)->OnXLSFileCheckValue();
} 
static void _OnBrowseSelectFnc(CWnd *pWnd){
	CProductSyncImportDialog *pVw = (CProductSyncImportDialog *)pWnd;
	pVw->OnBrowseSelect();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CProductSyncImportDialog *pVw = (CProductSyncImportDialog *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CProductSyncImportDialog *pVw = (CProductSyncImportDialog *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CProductSyncImportDialog *pVw = (CProductSyncImportDialog *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CProductSyncImportDialog *pVw = (CProductSyncImportDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CProductSyncImportDialog *pVw = (CProductSyncImportDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CProductSyncImportDialog *pVw = (CProductSyncImportDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddProductSyncImportDialogFnc(CWnd *pWnd){
	 return ((CProductSyncImportDialog*)pWnd)->OnAddProductSyncImportDialog();
} 
static int _OnEditProductSyncImportDialogFnc(CWnd *pWnd){
	 return ((CProductSyncImportDialog*)pWnd)->OnEditProductSyncImportDialog();
} 
static int _OnDeleteProductSyncImportDialogFnc(CWnd *pWnd){
	 return ((CProductSyncImportDialog*)pWnd)->OnDeleteProductSyncImportDialog();
} 
static int _OnSaveProductSyncImportDialogFnc(CWnd *pWnd){
	 return ((CProductSyncImportDialog*)pWnd)->OnSaveProductSyncImportDialog();
} 
static int _OnCancelProductSyncImportDialogFnc(CWnd *pWnd){
	 return ((CProductSyncImportDialog*)pWnd)->OnCancelProductSyncImportDialog();
} 
CProductSyncImportDialog::CProductSyncImportDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 525;
	m_nDlgHeight = 405;
	SetDefaultValues();
	m_szID.Empty();
}
CProductSyncImportDialog::~CProductSyncImportDialog(){
}
void CProductSyncImportDialog::OnCreateComponents(){
	m_wndList.Create(this,5, 5, 510, 275); 
	m_wndIDLabel.Create(this, _T("ID"), 5, 280, 85, 305);
	m_wndID.Create(this,90, 280, 240, 305); 
	m_wndDescriptionLabel.Create(this, _T("Description"), 5, 310, 85, 335);
	m_wndDescription.Create(this,90, 310, 510, 335); 
	m_wndXLSFileLabel.Create(this, _T("XLS File"), 5, 340, 85, 365);
	m_wndXLSFile.Create(this,90, 340, 480, 365); 
	m_wndBrowse.Create(this, _T("..."), 485, 340, 510, 365);
	m_wndAdd.Create(this, _T("&Add"), 5, 370, 85, 395);
	m_wndEdit.Create(this, _T("&Edit"), 90, 370, 170, 395);
	m_wndDelete.Create(this, _T("&Delete"), 175, 370, 255, 395);
	m_wndSave.Create(this, _T("&Save"), 260, 370, 340, 395);
	m_wndCancel.Create(this, _T("&Cancel"), 345, 370, 425, 395);
	m_wndClose.Create(this, _T("&Close"), 430, 370, 510, 395);

}
void CProductSyncImportDialog::OnInitializeComponents(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	m_wndID.SetLimitText(35);
	m_wndID.SetCheckValue(true);
	m_wndDescription.SetLimitText(35);
	m_wndDescription.SetCheckValue(true);
	m_wndXLSFile.SetLimitText(35);
	m_wndXLSFile.SetReadOnly(true);
	m_wndBrowse.ModifyStyle(WS_TABSTOP, 0);
	m_wndID.SetReadOnly(true);

	m_wndList.InsertColumn(0, _T("Id"), CFMT_TEXT, 150);
	m_wndList.InsertColumn(1, _T("Date"), CFMT_DATETIME, 125);
	m_wndList.InsertColumn(2, _T("Description"), CFMT_TEXT, 254);
	m_wndList.InsertColumn(3, _T("File XLS"), CFMT_TEXT, 150);


	m_tbl.AddField(_T("uid"), dfText, 15);
	m_tbl.AddField(_T("org_id"), dfText, 3);
	m_tbl.AddField(_T("userid_id"), dfText, 3);
	m_tbl.AddField(_T("description"), dfText, 254);
	m_tbl.AddField(_T("file_name"), dfText, 254);
	
	m_product_import_tbl.SetTableName(_T("m_product_import"));
	m_product_import_tbl.AddField(_T("M_PRODUCT_IMPORT_UID"), dfText, 15); 
	m_product_import_tbl.AddField(_T("ORG_ID"), dfText, 15); 
	m_product_import_tbl.AddField(_T("STT"), dfInteger); 
	m_product_import_tbl.AddField(_T("MA_NHOM_VTYT"), dfText,12); 
	m_product_import_tbl.AddField(_T("TEN_NHOM_VTYT"), dfText, 254); 
	m_product_import_tbl.AddField(_T("MA_HIEU"), dfText, 32); 
	m_product_import_tbl.AddField(_T("MA_VTYT_BV"), dfText, 32); 
	m_product_import_tbl.AddField(_T("TEN_VTYT_BV"), dfText, 254); 
	m_product_import_tbl.AddField(_T("TEN_THUONG_MAI"), dfText, 254); 
	m_product_import_tbl.AddField(_T("QUY_CACH"), dfText, 128); 
	m_product_import_tbl.AddField(_T("NUOC_SX"), dfText, 52); 
	m_product_import_tbl.AddField(_T("HANG_SX"), dfText, 254); 
	m_product_import_tbl.AddField(_T("don_vi_tinh"), dfText, 20);
	m_product_import_tbl.AddField(_T("don_gia"), dfLong); 
	m_product_import_tbl.AddField(_T("don_gia_dv"), dfLong); 
	m_product_import_tbl.AddField(_T("don_gia_tt"), dfLong); 
	m_product_import_tbl.AddField(_T("nha_thau"), dfText,254);
	m_product_import_tbl.AddField(_T("quyet_dinh"), dfText,20); 
	m_product_import_tbl.AddField(_T("cong_bo"), dfDate); 
	m_product_import_tbl.AddField(_T("dinh_muc"), dfText, 1); 
	m_product_import_tbl.AddField(_T("so_luong"), dfLong); 
	m_product_import_tbl.AddField(_T("ma_cskcb"), dfText, 5); 
	m_product_import_tbl.AddField(_T("loai_thau"), dfText, 2); 
	m_product_import_tbl.AddField(_T("nhom_thau"), dfText,5); 
	m_product_import_tbl.AddField(_T("goi_thau"), dfText, 5);
	m_product_import_tbl.AddField(_T("so_hop_dong"), dfText, 24); 
	m_product_import_tbl.AddField(_T("loai_hang"), dfText, 15); 
	m_product_import_tbl.AddField(_T("stent"), dfText, 1); 
	m_product_import_tbl.AddField(_T("tran_bh_tt"), dfText, 1); 
	
	//Thêm thuộc tính quy đổi
	m_product_import_tbl.AddField(_T("SO_LUONG_QUYDOI"), dfInteger);
	m_product_import_tbl.AddField(_T("DON_VI_QUYDOI"),dfText, 20);
	m_product_import_tbl.AddField(_T("MA_VTYT_PM"), dfText, 20);
	m_maps.RemoveAll();
	AddRefColumn(_T("STT"), _T("STT"), 40); 
	AddRefColumn(_T("MA_NHOM_VTYT"), _T("MA_NHOM_VTYT")); 
	AddRefColumn(_T("TEN_NHOM_VTYT"), _T("TEN_NHOM_VTYT"), 300); 
	AddRefColumn(_T("MA_HIEU"), _T("MA_HIEU")); 
	AddRefColumn(_T("MA_VTYT_BV"),_T("MA_VTYT_BV")); 
	AddRefColumn(_T("TEN_VTYT_BV"), _T("TEN_VTYT_BV"), 300); 
	AddRefColumn(_T("TEN_THUONG_MAI"), _T("TEN_THUONG_MAI"), 300); 
	AddRefColumn(_T("QUY_CACH"), _T("QUY_CACH")); 
	AddRefColumn(_T("NUOC_SX"), _T("NUOC_SX")); 
	AddRefColumn(_T("HANG_SX"), _T("HANG_SX"), 150); 
	AddRefColumn(_T("DON_VI_TINH"), _T("DON_VI_TINH"));
	AddRefColumn(_T("DON_GIA"), _T("DON_GIA")); 
	AddRefColumn(_T("DON_GIA_DV"), _T("DON_GIA_DV")); 
	AddRefColumn(_T("DON_GIA_TT"), _T("DON_GIA_TT")); 
	AddRefColumn(_T("NHA_THAU"), _T("NHA_THAU"), 200); 
	AddRefColumn(_T("QUYET_DINH"), _T("QUYET_DINH")); 
	AddRefColumn(_T("CONG_BO"), _T("CONG_BO")); 
	AddRefColumn(_T("DINH_MUC"), _T("DINH_MUC")); 
	AddRefColumn(_T("SO_LUONG"), _T("SO_LUONG"));
	AddRefColumn(_T("MA_CSKCB"), _T("MA_CSKCB"));
	AddRefColumn(_T("LOAI_THAU"), _T("LOAI_THAU"));
	AddRefColumn(_T("NHOM_THAU"), _T("NHOM_THAU"));
	AddRefColumn(_T("GOI_THAU"), _T("GOI_THAU"));
	AddRefColumn(_T("SO_HOP_DONG"), _T("HOP_DONG"));
	//AddRefColumn(_T("is_active"), _T("is_active"));
	AddRefColumn(_T("LOAI_HANG"), _T("LOAI_HANG"));
	AddRefColumn(_T("STENT"), _T("STENT"));
	AddRefColumn(_T("TRAN_BH_TT"), _T("TRAN_BH_TT"));
	//Thêm thuộc tính quy đổi
	AddRefColumn(_T("SO_LUONG_QUYDOI"), _T("SO_LUONG_QUYDOI"));
	AddRefColumn(_T("DON_VI_QUYDOI"), _T("DON_VI_QUYDOI"));
	AddRefColumn(_T("MA_VTYT_PM"), _T("MA_VTYT_PM"));

}
void CProductSyncImportDialog::AddRefColumn(CString szField, CString szColName, int nWidth)
{
	MapColumn mc;
	mc.szFieldName = szField;
	mc.szExcelColName = szColName;
	mc.nWidth = nWidth;
	m_maps.Add(mc);
	
}

void CProductSyncImportDialog::OnSetWindowEvents(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Download xls"), _OnListDownloadItemFnc);
	m_wndList.AddEvent(0, _T("-"));
	m_wndList.AddEvent(2, _T("Import"), _OnListImportItemFnc);
	
	//m_wndID.SetEvent(WE_CHANGE, _OnIDChangeFnc);
	//m_wndID.SetEvent(WE_SETFOCUS, _OnIDSetfocusFnc);
	//m_wndID.SetEvent(WE_KILLFOCUS, _OnIDKillfocusFnc);
	m_wndID.SetEvent(WE_CHECKVALUE, _OnIDCheckValueFnc);
	//m_wndDescription.SetEvent(WE_CHANGE, _OnDescriptionChangeFnc);
	//m_wndDescription.SetEvent(WE_SETFOCUS, _OnDescriptionSetfocusFnc);
	//m_wndDescription.SetEvent(WE_KILLFOCUS, _OnDescriptionKillfocusFnc);
	m_wndDescription.SetEvent(WE_CHECKVALUE, _OnDescriptionCheckValueFnc);
	//m_wndXLSFile.SetEvent(WE_CHANGE, _OnXLSFileChangeFnc);
	//m_wndXLSFile.SetEvent(WE_SETFOCUS, _OnXLSFileSetfocusFnc);
	//m_wndXLSFile.SetEvent(WE_KILLFOCUS, _OnXLSFileKillfocusFnc);
	m_wndXLSFile.SetEvent(WE_CHECKVALUE, _OnXLSFileCheckValueFnc);
	m_wndBrowse.SetEvent(WE_CLICK, _OnBrowseSelectFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);

	OnListLoadData();
	SetMode(VM_NONE);

}
void CProductSyncImportDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndID.GetDlgCtrlID(), m_szID);
	DDX_Text(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescription);
	DDX_Text(pDX, m_wndXLSFile.GetDlgCtrlID(), m_szXLSFile);

}
void CProductSyncImportDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("ID")] =  m_szID;
	m_jData[_T("Description")] =  m_szDescription;
	m_jData[_T("XLSFile")] =  m_szXLSFile;
	}
	else
	{
			
	m_jData[_T("ID")].GetValue(m_szID);
	m_jData[_T("Description")].GetValue(m_szDescription);
	m_jData[_T("XLSFile")].GetValue(m_szXLSFile);
	}

}
void CProductSyncImportDialog::GetDataToScreen(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM m_product_import_order WHERE m_product_import_order_id='%s' "), m_szID);
	rs.ExecSQL(szSQL);
	SetDefaultValues();
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("description"), m_szDescription);
		rs.GetValue(_T("file_name"), m_szXLSFile);
	}
	SetMode(VM_VIEW);
	

}
void CProductSyncImportDialog::GetScreenToData(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	m_tbl.SetValue(_T("uid"), m_szID);
	m_tbl.SetValue(_T("org_id"), pMF->GetModuleID());
	m_tbl.SetValue(_T("userid_id"), pMF->GetCurrentUser());
	m_tbl.SetValue(_T("order_date"), pMF->GetSysDate());
	m_tbl.SetValue(_T("description"), m_szDescription);
	m_tbl.SetValue(_T("file_name"), m_szXLSFile);
	
}
void CProductSyncImportDialog::SetDefaultValues(){

	
	m_szDescription.Empty();
	m_szXLSFile.Empty();

}
int CProductSyncImportDialog::SetMode(int nMode){
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
			m_wndID.SetFocus();
			szSQL.Format(_T("AD_GETNEXTVAL('M_PRODUCT_IMPORT_ID_ASQ','N','DM')"));
			m_szID = pMF->ExecDML(szSQL);

 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 3, 4, -1);
			m_wndDescription.SetFocus();
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
		m_wndClose.EnableWindow(TRUE);
 		return nOldMode;
}


int CProductSyncImportDialog::OnListDownloadItem(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	CString szName;
	szName.Format(_T("IMP_%s"), m_szID);
	_tprintf(_T("\nszName: %s|m_szXLSFile: %s\n"), szName, m_szXLSFile);
	pMF->lo_export(szName, m_szXLSFile);
	return 0;
}

int CProductSyncImportDialog::OnListImportItem(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	pMF->BeginWaitCursor();
	
	OnImportToTable();
	CString szName;
	szName.Format(_T("IMP_%s"), m_szID);
	pMF->lo_import(szName, m_szXLSFile);
	pMF->EndWaitCursor();
	return 0;
}


void CProductSyncImportDialog::OnListDblClick(){
	int nSel = m_wndList.GetCurSel();
	if(nSel >= 0)
	{
		m_szID = m_wndList.GetItemText(nSel, 0);
		CGuiDialog::OnOK();
	}
} 
void CProductSyncImportDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	if(nNewItem < 0)
		return;
	m_szID = m_wndList.GetItemText(nNewItem, 0);
	GetDataToScreen();
} 
int CProductSyncImportDialog::OnListDeleteItem(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CProductSyncImportDialog::OnListLoadData(){

	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT * FROM m_product_import_order WHERE org_id='%s' ORDER BY m_product_import_order_id "), pMF->GetModuleID());

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("m_product_import_order_id")), 
			rs.GetValue(_T("order_date")), 
			rs.GetValue(_T("Description")), 
			rs.GetValue(_T("file_name")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;

	return 0;
}
/*void CProductSyncImportDialog::OnIDChange(){
	
} */
/*void CProductSyncImportDialog::OnIDSetfocus(){
	
} */
/*void CProductSyncImportDialog::OnIDKillfocus(){
	
} */
int CProductSyncImportDialog::OnIDCheckValue(){
	if(GetMode() == VM_ADD)
	{
		CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
		CString szSQL;
		szSQL.Format(_T("SELECT count(*) ") \
			_T("FROM m_product_import_order ") \
			_T("WHERE m_product_import_order_id='%s' "), m_szID);
		int ret = pMF->ExecSQL(szSQL);
		if(ret > 0)
		{
			m_wndID.SetToolTipMessage(_T("Mã đã được sử dụng"));
			return -1;
		}
	}
	return 0;
} 
/*void CProductSyncImportDialog::OnDescriptionChange(){
	
} */
/*void CProductSyncImportDialog::OnDescriptionSetfocus(){
	
} */
/*void CProductSyncImportDialog::OnDescriptionKillfocus(){
	
} */
int CProductSyncImportDialog::OnDescriptionCheckValue(){
	return 0;
} 
/*void CProductSyncImportDialog::OnXLSFileChange(){
	
} */
/*void CProductSyncImportDialog::OnXLSFileSetfocus(){
	
} */
/*void CProductSyncImportDialog::OnXLSFileKillfocus(){
	
} */
int CProductSyncImportDialog::OnXLSFileCheckValue(){
	return 0;
} 
void CProductSyncImportDialog::OnBrowseSelect(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	int nMode = GetMode();
	if(nMode != VM_ADD && nMode != VM_EDIT)
		return;
	UpdateData(true);
	CFile f;
	CString strFilter =(_T("Excel Files (*.xls,*.xlsx)|*.xls;*.xlsx"));
	CFileDialog dlg(TRUE, _T(".xls"), NULL, 0, strFilter);
	if( dlg.DoModal() == IDOK )
	{
		m_szXLSFile.Format(_T("%s\\Data\\%s"), pMF->GetCurrentDirectory(), dlg.GetFileName());
		::CopyFile(dlg.GetPathName(), m_szXLSFile, FALSE);
	}
	
	UpdateData(false);
} 
void CProductSyncImportDialog::OnAddSelect(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	OnAddProductSyncImportDialog();
} 
void CProductSyncImportDialog::OnEditSelect(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	OnEditProductSyncImportDialog();
} 
void CProductSyncImportDialog::OnDeleteSelect(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	OnDeleteProductSyncImportDialog();
} 
void CProductSyncImportDialog::OnCancelSelect(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	OnCancelProductSyncImportDialog();
} 
void CProductSyncImportDialog::OnSaveSelect(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	OnSaveProductSyncImportDialog();
} 
void CProductSyncImportDialog::OnCloseSelect(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CProductSyncImportDialog::OnAddProductSyncImportDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CGuiMainFrame *pMF = (CGuiMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CProductSyncImportDialog::OnEditProductSyncImportDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CGuiMainFrame *pMF = (CGuiMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CProductSyncImportDialog::OnDeleteProductSyncImportDialog(){
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
 		OnCancelProductSyncImportDialog();
 	}
	return 0;
}
int CProductSyncImportDialog::OnSaveProductSyncImportDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
_tprintf(_T("\r\nSave"));
	if(m_szXLSFile.IsEmpty())
	{
		ShowMessageBox(_T("Yêu cầu chọn file xls"));
		return -1;
	}
 	if(!IsValidateData())
 		return -1;
 	CGuiMainFrame *pMF = (CGuiMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	
	
	
	szSQL.Format(_T("M_PRODUCT_IMPORT_ORDER_CREATE(%s)"), m_tbl.FormatSQL());
 _tprintf(_T("%s"), szSQL);
 	int ret = str2int(pMF->ExecDML(szSQL));
 	if(ret > 0)
 	{
 		if(GetMode() == VM_ADD)
		{
			CString szName;
			szName.Format(_T("IMP_%s"), m_szID);
			pMF->lo_import(szName, m_szXLSFile);
			
		}
 		SetMode(VM_VIEW);
		OnListLoadData();
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CProductSyncImportDialog::OnCancelProductSyncImportDialog(){
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
int CProductSyncImportDialog::OnProductSyncImportDialogListLoadData(){
	return 0;
}


int CProductSyncImportDialog::OnImportToTable()
{
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	CString tmpStr,tmpStr1,tmpStr2,tmpStr3,tmpStr4,tmpStr5;
	CString tmpStr6,tmpStr7,tmpStr8,tmpStr9,tmpStr10,tmpStr11;
	CString tmpStr12,tmpStr13,tmpStr14,tmpStr15,tmpStr16,tmpStr17;
	tmpStr.Empty();

	
	int rows, cols;

	Excel::_ApplicationPtr pApplication;

	//if ( FAILED( pApplication.CreateInstance( _T("Excel.Application") ) ) )
	//{
	//	_tprintf( _T("\r\nFailed to initialize Excel::_Application!") );
	//	return 0;
	//}
	pApplication.CreateInstance( _T("Excel.Application") );
_tprintf(_T("\r\nInit excel"));
	if (pApplication == NULL)
	{
		_tprintf( _T("\r\nFailed to initialize Excel::_Application!") );
		return 0;
	}
	_variant_t  varOption( (long) DISP_E_PARAMNOTFOUND, VT_ERROR );
	Excel::WorkbooksPtr pWorkbooks = pApplication->Workbooks;
	if (pWorkbooks == NULL)
	{
		_tprintf(_T("\r\nNull workbooks"));
		return 0;
	}
	Excel::_WorkbookPtr pBook = pWorkbooks->Open((LPCTSTR)m_szXLSFile, 
									varOption, varOption, varOption, varOption, 
									varOption, varOption, varOption, varOption, 
									varOption, varOption, varOption, varOption );

_tprintf(_T("\r\nOpen Workbook"));	
	if(pBook == NULL)
	{
		_tprintf(_T("\r\nNull workbook"));
		return 0;
	}
	Excel::_WorksheetPtr pSheet = pBook->Sheets->Item[ 1 ];
_tprintf(_T("\r\nOpen sheet"));		


	// Load the column headers.
	Excel::RangePtr pRange = pSheet->GetRange( _bstr_t( _T("A1") ), _bstr_t( _T("AA1" ) ) );
_tprintf(_T("\r\nGet Range"));		


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
_tprintf(_T("\r\nrows: %d| cols: %d"), rows, cols);
	for ( int iColumn = 1; iColumn <= cols; iColumn++ )
	{
		_variant_t	vItem = pRange->Item[ 1 ][ iColumn ];
		_bstr_t		bstrText( vItem );

		if ( bstrText.length( ) == 0 )
			break;
		std::wstring str = bstrText;
		_tprintf(_T("\r\n %s"),str.c_str());
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
	//_tprintf(_T("\r\niColumns: %d"), iColumns);
	int iColumn=0, nCount = 0, nRet = 0;
	CString szSQL;
	m_product_import_tbl.SetValue(_T("M_PRODUCT_IMPORT_UID"), m_szID);
	m_product_import_tbl.SetValue(_T("ORG_ID"), pMF->GetModuleID());
	for ( int iRow = 2; iRow <= rows; iRow++ )
	{
		for (int j =0; j < m_maps.GetCount(); j++)
		{
			MapColumn mc = m_maps[j];
			_variant_t	vItem;
			if (mc.xlsColumn > 0 && mc.xlsColumn <= cols)
			{
				
				vItem = pRange->Item[ iRow ][ mc.xlsColumn ];
				_bstr_t		bstrText( vItem );

				std::wstring str = bstrText;
				tmpStr = str.c_str();
				if (mc.szExcelColName == _T("CONG_BO"))
				{
					tmpStr.Format(_T("%s/%s/%s"), tmpStr.Left(4), tmpStr.Mid(4, 2), tmpStr.Mid(6,2));
					_tprintf(_T("\ntmpStr: %s"), tmpStr);
				}
				m_product_import_tbl.SetValue(mc.szFieldName, tmpStr);
				//TH dữ liệu ngày tháng
			}
			
		}
		szSQL = m_product_import_tbl.GetInsertSQL();
		//_msg(_T("%s"),szSQL);
		nRet = pMF->ExecSQL(szSQL);
		if (nRet < 0)
		{
			/*
			std::wstring ws(szSQL);
			WriteUnicodetoFile("test.txt", ws);
			WriteUnicodetoFile("test.txt", std::wstring(L"\n"));
			*/
		}
		else
		{
			nCount += nRet;
		}
	
	}

	pBook->Close( VARIANT_FALSE );

	pApplication->Quit( );

	szSQL.Format(_T("UPDATE M_PRODUCT_IMPORT_ORDER SET updatedby='%s', updateddate=systimestamp WHERE m_product_import_order_id='%s' "), m_szID);
	pMF->ExecSQL(szSQL);
	
	//_msg(_T(" Import thanh cong "));
	_msg(_T("Nhập thành công %d mục hàng"), nCount);
	return 0;
}