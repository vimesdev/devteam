#include "stdafx.h"
#include "PMLiquidateContract.h"
#include "GuiMainFrame.h"
#include "ReportDocument.h"
#include "Excel.h"
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
static void _OnPackageSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPMLiquidateContract* )pWnd)->OnPackageSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPackageSelendokFnc(CWnd *pWnd){
	((CPMLiquidateContract *)pWnd)->OnPackageSelendok();
}
/*static void _OnPackageSetfocusFnc(CWnd *pWnd){
	((CPMLiquidateContract *)pWnd)->OnPackageKillfocus();
}*/
/*static void _OnPackageKillfocusFnc(CWnd *pWnd){
	((CPMLiquidateContract *)pWnd)->OnPackageKillfocus();
}*/
static long _OnPackageLoadDataFnc(CWnd *pWnd){
	return ((CPMLiquidateContract *)pWnd)->OnPackageLoadData();
}
/*static void _OnPackageAddNewFnc(CWnd *pWnd){
	((CPMLiquidateContract *)pWnd)->OnPackageAddNew();
}*/
static void _OnYearSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPMLiquidateContract* )pWnd)->OnYearSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnYearSelendokFnc(CWnd *pWnd){
	((CPMLiquidateContract *)pWnd)->OnYearSelendok();
}
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CPMLiquidateContract *)pWnd)->OnYearKillfocus();
}*/
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CPMLiquidateContract *)pWnd)->OnYearKillfocus();
}*/
static long _OnYearLoadDataFnc(CWnd *pWnd){
	return ((CPMLiquidateContract *)pWnd)->OnYearLoadData();
}
/*static void _OnYearAddNewFnc(CWnd *pWnd){
	((CPMLiquidateContract *)pWnd)->OnYearAddNew();
}*/
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CPMLiquidateContract*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CPMLiquidateContract*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CPMLiquidateContract*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CPMLiquidateContract*)pWnd)->OnListDeleteItem();
} 
static void _OnPartnerSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPMLiquidateContract* )pWnd)->OnPartnerSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPartnerSelendokFnc(CWnd *pWnd){
	((CPMLiquidateContract *)pWnd)->OnPartnerSelendok();
}
/*static void _OnPartnerSetfocusFnc(CWnd *pWnd){
	((CPMLiquidateContract *)pWnd)->OnPartnerKillfocus();
}*/
/*static void _OnPartnerKillfocusFnc(CWnd *pWnd){
	((CPMLiquidateContract *)pWnd)->OnPartnerKillfocus();
}*/
static long _OnPartnerLoadDataFnc(CWnd *pWnd){
	return ((CPMLiquidateContract *)pWnd)->OnPartnerLoadData();
}
/*static void _OnPartnerAddNewFnc(CWnd *pWnd){
	((CPMLiquidateContract *)pWnd)->OnPartnerAddNew();
}*/
static void _OnPrintSelectFnc(CWnd *pWnd){
	CPMLiquidateContract *pVw = (CPMLiquidateContract *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CPMLiquidateContract *pVw = (CPMLiquidateContract *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnStorageSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPMLiquidateContract* )pWnd)->OnStorageSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStorageSelendokFnc(CWnd *pWnd){
	((CPMLiquidateContract *)pWnd)->OnStorageSelendok();
}
/*static void _OnStorageSetfocusFnc(CWnd *pWnd){
	((CPMLiquidateContract *)pWnd)->OnStorageKillfocus();
}*/
/*static void _OnStorageKillfocusFnc(CWnd *pWnd){
	((CPMLiquidateContract *)pWnd)->OnStorageKillfocus();
}*/
static long _OnStorageLoadDataFnc(CWnd *pWnd){
	return ((CPMLiquidateContract *)pWnd)->OnStorageLoadData();
}
/*static void _OnStorageAddNewFnc(CWnd *pWnd){
	((CPMLiquidateContract *)pWnd)->OnStorageAddNew();
}*/
static int _OnAddPMLiquidateContractFnc(CWnd *pWnd){
	 return ((CPMLiquidateContract*)pWnd)->OnAddPMLiquidateContract();
} 
static int _OnEditPMLiquidateContractFnc(CWnd *pWnd){
	 return ((CPMLiquidateContract*)pWnd)->OnEditPMLiquidateContract();
} 
static int _OnDeletePMLiquidateContractFnc(CWnd *pWnd){
	 return ((CPMLiquidateContract*)pWnd)->OnDeletePMLiquidateContract();
} 
static int _OnSavePMLiquidateContractFnc(CWnd *pWnd){
	 return ((CPMLiquidateContract*)pWnd)->OnSavePMLiquidateContract();
} 
static int _OnCancelPMLiquidateContractFnc(CWnd *pWnd){
	 return ((CPMLiquidateContract*)pWnd)->OnCancelPMLiquidateContract();
} 
CPMLiquidateContract::CPMLiquidateContract(CWnd *pParent){

	m_nDlgWidth = 580;
	m_nDlgHeight = 465;
	SetDefaultValues();

	m_bComInit = false;
	HRESULT r = CoInitializeEx(NULL, COINIT_APARTMENTTHREADED);
	if (FAILED(r))
	{
	}
	else
	{
		m_bComInit = true;	
	}

}
CPMLiquidateContract::~CPMLiquidateContract(){
	if (m_bComInit)
	{
		CoUninitialize();
	}
}
void CPMLiquidateContract::OnCreateComponents(){
	m_wndInforMationReport.Create(this, _T("Information Report"), 5, 5, 590, 425);
	m_wndContractpackageLabel.Create(this, _T("Contract Package"), 245, 30, 380, 55);
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 145, 55);
	m_wndYear.Create(this,150, 30, 240, 55); 
	m_wndPackage.Create(this,385, 30, 585, 55); 
	m_wndPartnerLabel.Create(this, _T("Partner"), 10, 60, 145, 85);
	m_wndPartner.Create(this,150, 60, 585, 85);
	m_wndStorageNameLbale.Create(this, _T("Storage Name"), 10, 90, 145, 115);
	m_wndStorage.Create(this,150, 90, 585, 115); 
	m_wndPrint.Create(this, _T("&Print"), 420, 431, 500, 456);
	m_wndExport.Create(this, _T("&Export"), 505, 431, 585, 456);
	m_wndList.Create(this,10, 120, 585, 420); 

}
void CPMLiquidateContract::OnInitializeComponents(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	m_wndPackage.SetCheckValue(true);
	m_wndPackage.LimitText(35);
	m_wndYear.SetCheckValue(true);
	m_wndYear.LimitText(35);
	m_wndPartner.SetCheckValue(true);
	m_wndPartner.LimitText(35);
	m_wndStorage.SetCheckValue(true);
	m_wndStorage.LimitText(35);


	m_wndPackage.InsertColumn(0, _T("ID"), CFMT_TEXT, 0);
	m_wndPackage.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);
	m_wndPackage.InsertColumn(2, _T("Date"), CFMT_DATE, 200);


	m_wndYear.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndYear.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);



	m_wndPartner.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndPartner.InsertColumn(1, _T("Name"), CFMT_TEXT, 350);


	m_wndStorage.InsertColumn(0, _T("ID"), CFMT_TEXT, 60);
	m_wndStorage.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);
	m_wndStorage.SetCheckBox(true);

	m_wndList.InsertColumn(0, _T("Contract Name"), CFMT_TEXT, 500);
	m_wndList.SetCheckBox(true);

}
void CPMLiquidateContract::OnSetWindowEvents(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	m_wndPackage.SetEvent(WE_SELENDOK, _OnPackageSelendokFnc);
	//m_wndPackage.SetEvent(WE_SETFOCUS, _OnPackageSetfocusFnc);
	//m_wndPackage.SetEvent(WE_KILLFOCUS, _OnPackageKillfocusFnc);
	m_wndPackage.SetEvent(WE_SELCHANGE, _OnPackageSelectChangeFnc);
	m_wndPackage.SetEvent(WE_LOADDATA, _OnPackageLoadDataFnc);
	//m_wndPackage.SetEvent(WE_ADDNEW, _OnPackageAddNewFnc);
	m_wndYear.SetEvent(WE_SELENDOK, _OnYearSelendokFnc);
	//m_wndYear.SetEvent(WE_SETFOCUS, _OnYearSetfocusFnc);
	//m_wndYear.SetEvent(WE_KILLFOCUS, _OnYearKillfocusFnc);
	m_wndYear.SetEvent(WE_SELCHANGE, _OnYearSelectChangeFnc);
	m_wndYear.SetEvent(WE_LOADDATA, _OnYearLoadDataFnc);
	//m_wndYear.SetEvent(WE_ADDNEW, _OnYearAddNewFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndPartner.SetEvent(WE_SELENDOK, _OnPartnerSelendokFnc);
	//m_wndPartner.SetEvent(WE_SETFOCUS, _OnPartnerSetfocusFnc);
	//m_wndPartner.SetEvent(WE_KILLFOCUS, _OnPartnerKillfocusFnc);
	m_wndPartner.SetEvent(WE_SELCHANGE, _OnPartnerSelectChangeFnc);
	m_wndPartner.SetEvent(WE_LOADDATA, _OnPartnerLoadDataFnc);
	//m_wndPartner.SetEvent(WE_ADDNEW, _OnPartnerAddNewFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndStorage.SetEvent(WE_SELENDOK, _OnStorageSelendokFnc);
	//m_wndStorage.SetEvent(WE_SETFOCUS, _OnStorageSetfocusFnc);
	//m_wndStorage.SetEvent(WE_KILLFOCUS, _OnStorageKillfocusFnc);
	m_wndStorage.SetEvent(WE_SELCHANGE, _OnStorageSelectChangeFnc);
	m_wndStorage.SetEvent(WE_LOADDATA, _OnStorageLoadDataFnc);
	//m_wndStorage.SetEvent(WE_ADDNEW, _OnStorageAddNewFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddPMLiquidateContractFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditPMLiquidateContractFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeletePMLiquidateContractFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSavePMLiquidateContractFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelPMLiquidateContractFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_ADD);

}
void CPMLiquidateContract::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndPackage.GetDlgCtrlID(), m_szPackageKey);
	DDX_TextEx(pDX, m_wndYear.GetDlgCtrlID(), m_szYearKey);
	DDX_TextEx(pDX, m_wndPartner.GetDlgCtrlID(), m_szPartnerKey);
	DDX_TextEx(pDX, m_wndStorage.GetDlgCtrlID(), m_szStorageKey);

}
void CPMLiquidateContract::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Package")] =  m_szPackageKey;
	m_jData[_T("Year")] =  m_szYearKey;
	m_jData[_T("Partner")] =  m_szPartnerKey;
	m_jData[_T("Storage")] =  m_szStorageKey;
	}
	else
	{
			
	m_jData[_T("Package")].GetValue(m_szPackageKey);
	m_jData[_T("Year")].GetValue(m_szYearKey);
	m_jData[_T("Partner")].GetValue(m_szPartnerKey);
	m_jData[_T("Storage")].GetValue(m_szStorageKey);
	}

}
void CPMLiquidateContract::GetDataToScreen(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CPMLiquidateContract::GetScreenToData(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();

}
void CPMLiquidateContract::SetDefaultValues(){

	m_szPackageKey.Empty();
	m_szYearKey.Empty();
	m_szPartnerKey.Empty();
	m_szStorageKey.Empty();

}
int CPMLiquidateContract::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
 		CGuiMainFrame *pMF = (CGuiMainFrame *) AfxGetMainWnd();
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
void CPMLiquidateContract::OnPackageSelectChange(int nOldItemSel, int nNewItemSel){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	
} 
void CPMLiquidateContract::OnPackageSelendok(){
	//OnListLoadData();
	 
}
/*void CPMLiquidateContract::OnPackageSetfocus(){
	
}*/
/*void CPMLiquidateContract::OnPackageKillfocus(){
	
}*/
long CPMLiquidateContract::OnPackageLoadData(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndPackage.IsSearchKey() && !m_szPackageKey.IsEmpty()){
	 szWhere.Format(_T(" and adcp_contract_package_id='%s' "), m_szPackageKey);
	}
	if(!m_szYearKey.IsEmpty())
		szWhere.AppendFormat(_T(" and adcp_year ='%s' "), m_szYearKey);

	m_wndPackage.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT adcp_contract_package_id as id, adcp_date as name FROM ad_contract_package WHERE 1=1  %s ORDER BY id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPackage.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("id")),
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CPMLiquidateContract::OnPackageAddNew(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	
} */
void CPMLiquidateContract::OnYearSelectChange(int nOldItemSel, int nNewItemSel){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	
} 
void CPMLiquidateContract::OnYearSelendok(){
	 
}
/*void CPMLiquidateContract::OnYearSetfocus(){
	
}*/
/*void CPMLiquidateContract::OnYearKillfocus(){
	
}*/
long CPMLiquidateContract::OnYearLoadData(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();

	m_wndYear.DeleteAllItems(); 
	int nCount = 0;
	CString tmpStr;
	for (int i=2017; i < 2025; i++)
	{
		tmpStr.Format(_T("Năm %d"), i);
		m_wndYear.AddItems(
			int2str(i), 
			tmpStr, NULL);
	}
	return nCount;

}
/*void CPMLiquidateContract::OnYearAddNew(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	
} */
void CPMLiquidateContract::OnListDblClick(){
	
} 
void CPMLiquidateContract::OnListSelectChange(int nOldItem, int nNewItem){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	
} 
int CPMLiquidateContract::OnListDeleteItem(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CPMLiquidateContract::OnListLoadData(){

	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	UpdateData(true);

	CString szSQL, szWhere;


	szSQL.Format(_T("select distinct mpei_so_hop_dong  ") \
				_T("		from VIMES.purchase_order  ") \
				_T("	left join VIMES.purchase_orderline on (pol_purchase_order_id = po_purchase_order_id) ") \
				_T("	left join m_product_item on (pol_product_item_id = mpi_product_item_id) ") \
				_T("	left join m_product_extra_info on (mpei_id = MPI_PRODUCTEXTRA_ID) ") \
				_T("	where  po_partner_id= '%s' and mpei_quyet_dinh = '%s'  AND NVL(po_saleperson_id, 'P') = 'P'  ") ,m_szPartnerKey, m_szPackageKey);
	m_wndList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
		rs.GetValue(_T("mpei_so_hop_dong")),NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;

}
void CPMLiquidateContract::OnPartnerSelectChange(int nOldItemSel, int nNewItemSel){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	
} 
void CPMLiquidateContract::OnPartnerSelendok(){
	OnListLoadData();
	 
}
/*void CPMLiquidateContract::OnPartnerSetfocus(){
	
}*/
/*void CPMLiquidateContract::OnPartnerKillfocus(){
	
}*/
long CPMLiquidateContract::OnPartnerLoadData(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	//return pMF->LoadPartnerList(&m_wndPartner, m_szPartnerKey);
	return 0;
}
/*void CPMLiquidateContract::OnPartnerAddNew(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	
} */
void CPMLiquidateContract::OnPrintSelect(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	
} 
void CPMLiquidateContract::OnExportSelect(){
	/*Export v2*/
	return OnExport();
	if (!m_bComInit)
	{
		return;
	}
	CGuiMainFrame* pMF = (CGuiMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	float nCost=0, nTotalCost=0, nTotalUnpaid=0, nTotalPaid =0;
	szSQL.Format(_T("select  ") \
					_T("	'%s' as Contract_No, '%s' as HD_NO,'%s' as HD_No1, ") \
					_T("	(select to_char(adcp_date,'DD-MM-YYYY') from VIMES.ad_contract_package where adcp_contract_package_id='%s') as contract_date, ") \
					_T("	adp_name as Nha_cc, ") \
					_T("		adp_address as Adress, ") \
					_T("		adp_telephone as Phone, ") \
					_T("		adp_email as Email, ") \
					_T("		adp_bankaccount as Acount_ID, ") \
					_T("		adp_citas_code as TaxID, ") \
					_T("	'' as Nguoi_dd, ") \
					_T("	'' as chuc_vu ") \
					_T("	from VIMES.ad_partner  ") \
					_T("	where adp_partner_id='%s' "), m_szPackageKey, m_wndList.GetItemText(0,0),m_wndList.GetItemText(0,0),m_szPackageKey, m_szPartnerKey);
	
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
		vt = _T("BienBanThanhLyHopDong_prv.docx");
		for (int i = 1; i <= pDocs->Count; i++)
		{
			_variant_t vt(i);
			pDoc = pDocs->Item(&VARIANT(vt));
			if (pDoc->Name == _bstr_t("BienBanThanhLyHopDong_prv.docx"))
			{
				_tprintf(_T("\nFound preview\n"));
				pDoc->Close();
				break;
			}
		}
		vt = _T("BienBanThanhLyHopDong.docx");
		bool bFound = false;
		for (int i = 1; i <= pDocs->Count; i++)
		{
			_variant_t vt(i);
			pDoc = pDocs->Item(&VARIANT(vt));
			if (pDoc->Name == _bstr_t("BienBanThanhLyHopDong.docx"))
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
		vt = _T("BienBanThanhLyHopDong_prv.docx");
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
			if(strVal.IsEmpty() || strVal == _T(""))
				continue;

			if(str == _T("contract_date"))
				strVal.Format(_T("ngày %s tháng %s năm %s "), strVal.Left(2),strVal.Mid(3,2),strVal.Mid(6,4));
			pRange = pControl->Range;
			pRange->Text = _bstr_t(LPCTSTR(strVal));
		}


		szSQL.Format(_T("select sum(mpei_so_luong*mpei_don_gia) as TotalContract  ") \
					_T(" from m_product_extra_info ") \
					_T("	where  nvl(mpei_quyet_dinh,'xx') ='%s'   ") \
					_T("	and nvl(mpei_so_hop_dong,'xx') ='%s' "), 
						m_szPackageKey, m_wndList.GetItemText(0,0));
							
		rs.ExecSQL(szSQL);
		if(!rs.IsEOF())
		{
			for (int i = 0; i < pControls->GetCount(); i++)
			{
				_variant_t vt(i+1);
				Word::ContentControlPtr pControl = pControls->Item(&VARIANT(vt));
				bt = pControl->GetTitle();
				wstr = (wchar_t*) bt;
				str = wstr.c_str();
				
				if(str == _T("TotalContract"))
				{
					rs.GetValue(str,nCost);
					FormatCurrency(nCost, tmpStr);
					strVal = tmpStr;
					pRange = pControl->Range;
					pRange->Text = _bstr_t(LPCTSTR(strVal));
				}
			}
		}


			szSQL.Format(_T("select sum(pol_qtydelivery * mpi_taxprice) as TotalThucHien ") \
						_T("	from  purchase_order  ") \
						_T("	left join purchase_orderline on (po_purchase_order_id = pol_purchase_order_id) ") \
						_T("	left join m_product_item on (mpi_product_item_id = pol_product_item_id) ") \
						_T("	left join m_product_extra_info on (mpi_productextra_id= mpei_id  ) ") \
						_T("	where po_partner_id='%s'  ") \
						_T("	and nvl(mpei_quyet_dinh,'xx') ='%s'   ") \
						_T("	and nvl(mpei_so_hop_dong,'') ='%s' "), 
						m_szPartnerKey,m_szPackageKey, m_wndList.GetItemText(0,0));
							
		rs.ExecSQL(szSQL);
		if(!rs.IsEOF())
		{
			for (int i = 0; i < pControls->GetCount(); i++)
			{
				_variant_t vt(i+1);
				Word::ContentControlPtr pControl = pControls->Item(&VARIANT(vt));
				bt = pControl->GetTitle();
				wstr = (wchar_t*) bt;
				str = wstr.c_str();
				strVal = rs.GetValue(str);
				if(str == _T("TotalThucHien"))
				{
					rs.GetValue(str,nCost);
					FormatCurrency(nCost, tmpStr);
					strVal = tmpStr;
					nTotalCost=nCost;
					pRange = pControl->Range;
					pRange->Text = _bstr_t(LPCTSTR(strVal));
				}
			}
		}
		szSQL.Format(_T("select mp_name as product_name, sum(pol_qtydelivery) as qty, mpi_taxprice as tax_price") \
					_T("	from  purchase_order  ") \
					_T("	left join purchase_orderline on (po_purchase_order_id = pol_purchase_order_id) ") \
					_T("	left join m_product_item on (mpi_product_item_id = pol_product_item_id) ") \
					_T("	LEFT JOIN m_product ON (mp_product_id= mpi_product_id) ") \
					_T("	left join m_product_extra_info on (mpi_productextra_id= mpei_id  ) ") \
					_T("	where po_partner_id='%s'  ") \
					_T("	and nvl(mpei_quyet_dinh,'xx') ='%s'   ") \
					_T("	and nvl(mpei_so_hop_dong,'') ='%s'  ") \
					_T("	group by mp_name,mpi_taxprice ") \
					_T("	order by mp_name "),m_szPartnerKey, m_szPackageKey, m_wndList.GetItemText(0,0));
		rs.ExecSQL(szSQL);
		tmpStr.Empty();
		/*
		while(!rs.IsEOF())
		{
			if(!tmpStr.IsEmpty())
				tmpStr.AppendFormat(_T(""));
			tmpStr.AppendFormat(_T(" %s  sl:%s đơn giá: %s "), rs.GetValue(_T("product_name")), rs.GetValue(_T("qty")),rs.GetValue(_T("tax_price")));
			rs.MoveNext();

		}
		if(!tmpStr.IsEmpty())
		{
			for (int i = 0; i < pControls->GetCount(); i++)
			{
				_variant_t vt(i+1);
				Word::ContentControlPtr pControl = pControls->Item(&VARIANT(vt));
				bt = pControl->GetTitle();
				wstr = (wchar_t*) bt;
				str = wstr.c_str();
				if(str == _T("ListSubItems"))
				{
					pRange = pControl->Range;
					pRange->Text = _bstr_t(LPCTSTR(tmpStr));
				}
			}
		}
		*/
		if (!rs.IsEOF())
		{
			Word::TablePtr pTable = pDoc->Tables->Item(1);
			pTable->Cell(1, 1)->Range->Text = _bstr_t(_T("Tên"));
			pTable->Cell(1, 2)->Range->Text = _bstr_t(_T("Số lượng"));
			pTable->Cell(1, 3)->Range->Text = _bstr_t(_T("Đơn giá"));
			int nRow = 1, nCol = 1;
			while (!rs.IsEOF())
			{
				nCol = 1;
				pTable->Rows->Add();
				nRow++;
				pTable->Cell(nRow, nCol++)->Range->Text = _bstr_t(LPCTSTR(rs.GetValue(_T("product_name"))));
				pTable->Cell(nRow, nCol++)->Range->Text = _bstr_t(LPCTSTR(rs.GetValue(_T("qty"))));
				pTable->Cell(nRow, nCol++)->Range->Text = _bstr_t(LPCTSTR(rs.GetValue(_T("tax_price"))));
				rs.MoveNext();
			}
		}

		szSQL.Format(_T("select sum(pol_qtydelivery * mpi_taxprice) as TotalHasPayment ") \
						_T("	from  purchase_order  ") \
						_T("	left join purchase_orderline on (po_purchase_order_id = pol_purchase_order_id) ") \
						_T("	left join m_product_item on (mpi_product_item_id = pol_product_item_id) ") \
						_T("	left join m_product_extra_info on (mpi_productextra_id= mpei_id  ) ") \
						_T("	where po_partner_id='%s'  ") \
						_T("	and nvl(mpei_quyet_dinh,'xx') ='%s'   ") \
						_T("	and nvl(mpei_so_hop_dong,'') ='%s' and   nvl(po_payment,'N')='Y' "), 
						m_szPartnerKey,m_szPackageKey, m_wndList.GetItemText(0,0));
							
		rs.ExecSQL(szSQL);
		if(!rs.IsEOF())
		{
			for (int i = 0; i < pControls->GetCount(); i++)
			{
				_variant_t vt(i+1);
				Word::ContentControlPtr pControl = pControls->Item(&VARIANT(vt));
				bt = pControl->GetTitle();
				wstr = (wchar_t*) bt;
				str = wstr.c_str();
				strVal = rs.GetValue(str);
				if(str == _T("TotalHasPayment"))
				{
					rs.GetValue(str,nCost);
					FormatCurrency(nCost, tmpStr);
					strVal = tmpStr;
					nTotalPaid=nCost;
					nTotalUnpaid= nTotalCost- nTotalPaid;
					pRange = pControl->Range;
					pRange->Text = _bstr_t(LPCTSTR(strVal));
				}

				
			}
		}
		
		for (int i = 0; i < pControls->GetCount(); i++)
			{
				_variant_t vt(i+1);
				Word::ContentControlPtr pControl = pControls->Item(&VARIANT(vt));
				bt = pControl->GetTitle();
				wstr = (wchar_t*) bt;
				str = wstr.c_str();
				strVal = rs.GetValue(str);

				if(str == _T("TotalUnPaid"))
				{

					FormatCurrency(nTotalUnpaid, tmpStr);
					strVal = tmpStr;
					pRange = pControl->Range;
					pRange->Text = _bstr_t(LPCTSTR(strVal));
				}
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

void CPMLiquidateContract::OnExport()
{
	if (!m_bComInit)
	{
		return;
	}
	CGuiMainFrame* pMF = (CGuiMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	float nCost=0, nTotalCost=0, nTotalUnpaid=0, nTotalPaid =0;
	szSQL.Format(_T("select  ") \
				_T("	'%s' as Contract_No, '%s' as HD_NO,'%s' as HD_No1, ") \
				_T("	(select to_char(adcp_date,'DD-MM-YYYY') from VIMES.ad_contract_package ") \
				_T("		where adcp_contract_package_id='%s') as contract_date, ") \
				_T("	adp_name as Nha_cc, ") \
				_T("		adp_address as Adress, ") \
				_T("		adp_telephone as Phone, ") \
				_T("		adp_email as Email, ") \
				_T("		adp_bankaccount as Acount_ID, ") \
				_T("		adp_citas_code as TaxID, ") \
				_T("	'' as Nguoi_dd, ") \
				_T("	'' as chuc_vu ") \
				_T("	from VIMES.ad_partner  ") \
				_T("	where adp_partner_id='%s' ")
				, m_szPackageKey, m_wndList.GetItemText(0,0),m_wndList.GetItemText(0,0)
				, m_szPackageKey, m_szPartnerKey);
	
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
		vt = _T("BienBanThanhLyHopDong_prv.docx");
		for (int i = 1; i <= pDocs->Count; i++)
		{
			_variant_t vt(i);
			pDoc = pDocs->Item(&VARIANT(vt));
			if (pDoc->Name == _bstr_t("BienBanThanhLyHopDong_prv.docx"))
			{
				_tprintf(_T("\nFound preview\n"));
				pDoc->Close();
				break;
			}
		}
		vt = _T("BienBanThanhLyHopDong.docx");
		bool bFound = false;
		for (int i = 1; i <= pDocs->Count; i++)
		{
			_variant_t vt(i);
			pDoc = pDocs->Item(&VARIANT(vt));
			if (pDoc->Name == _bstr_t("BienBanThanhLyHopDong.docx"))
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
		vt = _T("BienBanThanhLyHopDong_prv.docx");
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
			if(strVal.IsEmpty() || strVal == _T(""))
				continue;

			if(str == _T("contract_date"))
				strVal.Format(_T("ngày %s tháng %s năm %s "), strVal.Left(2),strVal.Mid(3,2),strVal.Mid(6,4));
			pRange = pControl->Range;
			pRange->Text = _bstr_t(LPCTSTR(strVal));
		}
		/*Contract payment info*/
		szSQL.Format(_T(" SELECT    adc_amount AS TotalContract,") \
		_T("           adcl_imported_amount AS TotalThucHien,") \
		_T("           adcl_paid_amount AS TotalHasPayment,") \
		_T("           adcl_unpaid_amount AS TotalUnPaid") \
		_T(" FROM      ad_contract_liquidation") \
		_T(" left join ad_contract ON ( adc_contract_id = adcl_contract_id )") \
		_T(" WHERE     adcl_order_id = %s"), m_wndList.GetItemText(0, 0));
					
		rs.ExecSQL(szSQL);
		if(!rs.IsEOF())
		{
			for (int i = 0; i < pControls->GetCount(); i++)
			{
				_variant_t vt(i+1);
				Word::ContentControlPtr pControl = pControls->Item(&VARIANT(vt));
				bt = pControl->GetTitle();
				wstr = (wchar_t*) bt;
				str = wstr.c_str();
				strVal = rs.GetValue(str);
				if(strVal.IsEmpty() || strVal == _T(""))
					continue;
				pRange = pControl->Range;
				pRange->Text = _bstr_t(LPCTSTR(strVal));
			}
		}
		szSQL.Format(_T("select mp_name as product_name, sum(pol_qtydelivery) as qty, mpi_taxprice as tax_price") \
					_T("	from  purchase_order  ") \
					_T("	left join purchase_orderline on (po_purchase_order_id = pol_purchase_order_id) ") \
					_T("	left join m_product_item on (mpi_product_item_id = pol_product_item_id) ") \
					_T("	LEFT JOIN m_product ON (mp_product_id= mpi_product_id) ") \
					_T("	left join m_product_extra_info on (mpi_productextra_id= mpei_id  ) ") \
					_T("	where po_status = 'A' and po_partner_id='%s'  ") \
					_T("	and nvl(mpei_quyet_dinh,'xx') ='%s'   ") \
					_T("	and nvl(mpei_so_hop_dong,'') ='%s'  ") \
					_T("	group by mp_name,mpi_taxprice ") \
					_T("	order by mp_name "),m_szPartnerKey, m_szPackageKey, m_wndList.GetItemText(0,0));
		rs.ExecSQL(szSQL);
		tmpStr.Empty();
		if (!rs.IsEOF())
		{
			Word::TablePtr pTable = pDoc->Tables->Item(1);
			pTable->Cell(1, 1)->Range->Text = _bstr_t(_T("Tên"));
			pTable->Cell(1, 2)->Range->Text = _bstr_t(_T("Số lượng"));
			pTable->Cell(1, 3)->Range->Text = _bstr_t(_T("Đơn giá"));
			int nRow = 1, nCol = 1;
			while (!rs.IsEOF())
			{
				nCol = 1;
				pTable->Rows->Add();
				nRow++;
				pTable->Cell(nRow, nCol++)->Range->Text = _bstr_t(LPCTSTR(rs.GetValue(_T("product_name"))));
				pTable->Cell(nRow, nCol++)->Range->Text = _bstr_t(LPCTSTR(rs.GetValue(_T("qty"))));
				pTable->Cell(nRow, nCol++)->Range->Text = _bstr_t(LPCTSTR(rs.GetValue(_T("tax_price"))));
				rs.MoveNext();
			}
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

void CPMLiquidateContract::OnStorageSelectChange(int nOldItemSel, int nNewItemSel){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	
} 
void CPMLiquidateContract::OnStorageSelendok(){
	 
}
/*void CPMLiquidateContract::OnStorageSetfocus(){
	
}*/
/*void CPMLiquidateContract::OnStorageKillfocus(){
	
}*/
long CPMLiquidateContract::OnStorageLoadData(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	//return pMF->LoadStorageList(&m_wndStorage, m_szStorageKey);
	return 0;
}
/*void CPMLiquidateContract::OnStorageAddNew(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	
} */
int CPMLiquidateContract::OnAddPMLiquidateContract(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CGuiMainFrame *pMF = (CGuiMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CPMLiquidateContract::OnEditPMLiquidateContract(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CGuiMainFrame *pMF = (CGuiMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CPMLiquidateContract::OnDeletePMLiquidateContract(){
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
 		OnCancelPMLiquidateContract();
 	}
	return 0;
}
int CPMLiquidateContract::OnSavePMLiquidateContract(){
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
 		//OnPMLiquidateContractListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CPMLiquidateContract::OnCancelPMLiquidateContract(){
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
int CPMLiquidateContract::OnPMLiquidateContractListLoadData(){
	return 0;
}
