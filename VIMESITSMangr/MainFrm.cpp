// MainFrm.cpp : implementation of the CMainFrame class
//
#include "stdafx.h"
#include "MainFrm.h"
#include "GuiUtils.h"
#include "resource.h"
#include ".\mainfrm.h"
#include "DocPane.h"
#include "VIMESAssetManagr.h"
#include "HMSReportForms\HMSReportFormDialog.h"
#pragma comment(lib, "../Lib/HMSReportForms.lib" )


IMPLEMENT_DYNAMIC(CMainFrame, CGuiMainFrame)

BEGIN_MESSAGE_MAP(CMainFrame, CGuiMainFrame)
	ON_WM_CREATE()
	ON_COMMAND(ID_SETUP_CATEGORYLIST, OnSetupCategorylist)
	ON_COMMAND(ID_SETUP_MANUFACTURERLIST, OnSetupManufacturerlist)
	ON_COMMAND(ID_SETUP_ASSETTYPELIST, OnSetupAssettypelist)
	ON_COMMAND(ID_SETUP_VENDORLIST, OnSetupVendorlist)
	ON_COMMAND(ID_SETUP_EMPLOYEELIST, OnSetupEmployeelist)
	ON_COMMAND(ID_SETUP_DEPARTMENTLIST, OnSetupDepartmentlist)
	ON_COMMAND(ID_SETUP_CONDITIONOFFIXEDASSET, OnSetupConditionoffixedasset)
	ON_COMMAND(ID_SETUP_LISTSSETUP, OnSetupListssetup)
	ON_COMMAND(ID_SETUP_WAREHOUSESETUP, OnWarehouseSetup)
	ON_COMMAND(ID_REPORT, OnReportSelect)

END_MESSAGE_MAP()

// CMainFrame construction/destruction

CMainFrame::CMainFrame()
{
	SetLocalLang(1);
	m_szModuleID = _T("ITS");
    m_szSize = CSize(1024, 620);
	SetLayoutStyle(LAYOUT_DOCPANE);
	m_szVersion = _T("2.0");
	//m_bAutoMenuEnable = FALSE;
}

CMainFrame::~CMainFrame()
{
	
}


int CMainFrame::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CGuiMainFrame::OnCreate(lpCreateStruct) == -1)
		return -1;
	CString szLabel;
	TranslateString(_T("Information Technology Stationery"), szLabel);
	SetWindowText(szLabel);

	return 0;
}


void CMainFrame::OnCreateComponents(){
	CRect rect;
	GetClientRect(&rect);

	CDocPane *pDocPane = (CDocPane*) GetPane();
	CDocPane::CDocPaneInfo* obj=NULL;
	pDocPane->SetItemHeight(55);
	pDocPane->SetPaneStyle(DPS_LEFT|DPS_OUTLOOK);

	OnCreateMMComponents();
	pDocPane->RecalcLayout();
}


void CMainFrame::OnCreateMMComponents(){

	CDocPane *pDocPane = (CDocPane*) GetPane();
	CDocPane::CDocPaneInfo* obj=NULL;

	m_wndAsset.Create(GetPane());
	m_wndAsset.ShowWindow(SW_HIDE);
	m_wndAssetDetail.Create(GetPane());
	m_wndAssetDetail.ShowWindow(SW_HIDE);
	m_wndAssetType.Create(GetPane());
	m_wndAssetType.ShowWindow(SW_HIDE);
	m_wndAssetDepr.Create(pDocPane);
	m_wndAssetDepr.ShowWindow(SW_HIDE);

	m_wndMaintenance.Create(pDocPane);
	m_wndMaintenance.ShowWindow(SW_HIDE);
	m_wndAttach.Create(pDocPane);
	m_wndAttach.ShowWindow(SW_HIDE);
	m_wndUsageProcess.Create(pDocPane);
	m_wndUsageProcess.ShowWindow(SW_HIDE);
	//m_wndExtraInfo.Create(pDocPane);
	//m_wndExtraInfo.ShowWindow(SW_HIDE);
	m_wndAccessories.Create(pDocPane);
	m_wndAccessories.ShowWindow(SW_HIDE);
	m_wndInventory.Create(pDocPane);
	m_wndInventory.ShowWindow(SW_HIDE);
	
	m_wndTransfer.Create(pDocPane);
	m_wndTransfer.ShowWindow(SW_HIDE);
//Phieu nhap kho
	m_wndReceiptOrder.Create(pDocPane);
	m_wndReceiptOrder.ShowWindow(SW_HIDE);

//Dieu chuyen kho
	m_wndTransferList.m_szDocType = _T("EMO");
	m_wndTransferList.Create(pDocPane);
	m_wndTransferList.ShowWindow(SW_HIDE);
	
//Cap phap su dung
	m_wndAllocateList.m_szDocType = _T("EAO");
	m_wndAllocateList.Create(pDocPane);
	m_wndAllocateList.ShowWindow(SW_HIDE);
//Nhap tra lai
	m_wndReturnList.m_szDocType = _T("IRO");
	m_wndReturnList.Create(pDocPane);
	m_wndReturnList.ShowWindow(SW_HIDE);
///

//Nhap khac
	m_wndOtherImport.m_szDocType = _T("IOO");
	m_wndOtherImport.Create(pDocPane);
	m_wndOtherImport.ShowWindow(SW_HIDE);

//Xuat khac
	m_wndOtherExport.m_szDocType = _T("EOO");
	m_wndOtherExport.Create(pDocPane);
	m_wndOtherExport.ShowWindow(SW_HIDE);
////
	m_wndTransferToDept.Create(pDocPane);
	m_wndTransferToDept.ShowWindow(SW_HIDE);
	m_wndAllocateToDept.Create(pDocPane);
	m_wndAllocateToDept.ShowWindow(SW_HIDE);
	m_wndLiquidated.Create(pDocPane);
	m_wndLiquidated.ShowWindow(SW_HIDE);
	m_wndInvent.Create(pDocPane);
	m_wndInvent.ShowWindow(SW_HIDE);
	m_wndMR.Create(pDocPane);
	m_wndMR.ShowWindow(SW_HIDE);
	m_wndComponents.Create(pDocPane);
	m_wndComponents.ShowWindow(SW_HIDE);
	m_wndDepr.Create(pDocPane);
	m_wndDepr.ShowWindow(SW_HIDE);
	m_wndAdjustment.Create(pDocPane);
	m_wndAdjustment.ShowWindow(SW_HIDE);
	m_wndWarehouse.Create(pDocPane);
	m_wndWarehouse.ShowWindow(SW_HIDE);
	
	obj= pDocPane->AddPane(_T("Asset List"), _T("Suppliers management system"));
		if(obj){
			obj->AddCaption(_T("Nh\xF3m t\xE0i s\x1EA3n"));
			/*CRecord rs(&m_db);
			CString szSQL;
			szSQL.Format(_T("SELECT * FROM fam_assettype WHERE fast_org_id = '%s' ORDER BY fast_id"), GetModuleID());
			rs.ExecSQL(szSQL);
			while(!rs.IsEOF())
			{
				obj->Add(rs.GetValue(_T("fast_desc")), rs.GetValue(_T("fast_id")),&m_wndAsset);
				m_wndAsset.m_szAssetType = rs.GetValue(_T("fast_id"));
				rs.MoveNext();
			}*/
			obj->Add(_T("Asset List"), _T(""), &m_wndAsset);
			
			
		}
		
		obj = pDocPane->AddPane(_T("Warehouse"));
		if(obj){
			obj->AddCaption(_T("Functions"));
			obj->Add(_T("Warehouse receipt"), _T(""), &m_wndReceiptOrder);
			obj->Add(_T("Transfer"), _T(""), &m_wndTransferList);
			obj->Add(_T("Allocate"), _T(""), &m_wndAllocateList);
			obj->Add(_T("Return"), _T(""), &m_wndReturnList);
			obj->AddCaption(_T(" "));
			obj->Add(_T("Other Import"), _T(""), &m_wndOtherImport);
			obj->Add(_T("Other Export"), _T(""), &m_wndOtherExport);
			obj->AddCaption(_T(" "));
			obj->Add(_T("Inventoried"), _T(""), &m_wndInvent);
			obj->Add(_T("Maintenance and Repairs"), _T(""), &m_wndMR);
			obj->Add(_T("Components"), _T(""), &m_wndComponents);
			/*obj->Add(_T("Liquidated"), _T(""), &m_wndLiquidated);
			obj->Add(_T("Depreciation"), _T(""), &m_wndDepr);
			obj->Add(_T("Adjustment"), _T(""), &m_wndAdjustment)*/;
			obj->Add(_T("Warehouse Onhand"), _T(""), &m_wndWarehouse);
		}
	
		/*obj = pDocPane->AddPane(_T("Detail"));
		if(obj){
			obj->AddCaption(_T("Asset Tracking"));
			obj->Add(_T("Asset Tracking"), _T(""), &m_wndAssetDetail);
		}*/
}

void CMainFrame::OnSetupCategorylist()
{
	// TODO: Add your command handler code here
	CCategorySetupDialog dlg(this);
	dlg.DoModal();
}


void CMainFrame::OnSetupManufacturerlist()
{
	// TODO: Add your command handler code here
	CManufactureSetupDialog dlg(this);
	dlg.DoModal();
}

void CMainFrame::OnSetupAssettypelist()
{
	// TODO: Add your command handler code here
	CTypeSetupDialog dlg(this);
	dlg.DoModal();
}

void CMainFrame::OnSetupVendorlist()
{
	// TODO: Add your command handler code here
	CVendorSetupDialog dlg(this);
	dlg.DoModal();
}

void CMainFrame::OnSetupEmployeelist()
{
	// TODO: Add your command handler code here
	if (m_szStandAlone.Trim().MakeUpper() == _T("Y"))
	{
		CEmployeeSetupDialog dlg(this);
		dlg.DoModal();
	}
}

void CMainFrame::OnSetupConditionoffixedasset()
{
	// TODO: Add your command handler code here
	CConditionSetupDialog dlg(this);
	dlg.DoModal();
}

void CMainFrame::OnSetupDepartmentlist()
{
	// TODO: Add your command handler code here
	if (m_szStandAlone.Trim().MakeUpper() == _T("Y"))
	{
		CDepartmentSetupDialog dlg(this);
		dlg.DoModal();
	}
} 

void CMainFrame::OnWarehouseSetup()
{
	CFAMWarehouseSetup dlg(this);
	dlg.DoModal();
}
/*void CMainFrame::OnToolsUpdateaccumulateddepreciation()
{
	// TODO: Add your command handler code here
	CFAMUpdateAccumDeprDialog dlg(this);
	dlg.DoModal();
}*/

void CMainFrame::OnSetupListssetup()
{
	// TODO: Add your command handler code here
	CFAMListSetupDialog dlg(this);
	dlg.DoModal();
}
void CMainFrame::OnReportSelect()
{
	CHMSReportFormDialog dlg(this);
	dlg.DoModal();
}

void CMainFrame::ExecDMLEx(CString szSQL, long &resCode, CString &resDetail)
{
	CString szRet;
	szRet = ExecDML(szSQL);
	resCode = str2long(szRet);
	if(resCode < 0)
	{
		CRecord rs(&m_db);
		CString szSQL;
		szSQL.Format(_T("SELECT se_description FROM system_error WHERE se_code=%ld "), -1*resCode);
		rs.ExecSQL(szSQL);
		rs.GetValue(_T("se_description"), resDetail);
	}
}

long CMainFrame::LoadStdItemList(CWnd *pWnd, CString szKey, CString szFilter)
{
	CMainFrame *pMF = (CMainFrame*) this;
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	CGuiComboBox* pCB = (CGuiComboBox*) pWnd;

	szWhere.Empty();

	if(pCB->IsSearchKey() && !szKey.IsEmpty()){
		szWhere.Format(_T(" and sil_item_list_id='%s' "), szKey);
	}
	szWhere.AppendFormat(_T(" %s "), szFilter);

	pCB->DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT sil_item_list_id as item_id, sil_name as item_name, ") \
			_T(" STORAGE_GET_UOMNAME(sil_uom_id) as item_unit, ") \
			_T(" sil_purchaseprice as unitprice, sil_model as item_model, sil_type as item_type ") \
			_T(" FROM STORAGE_ITEM_LIST ") \
			_T(" WHERE sil_org_id='%s' %s ORDER BY sil_item_list_id "),  pMF->GetModuleID(), szWhere );
	
	_tprintf(_T("\r\nLoadItem: %s"), szSQL);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		pCB->AddItems(
			rs.GetValue(_T("item_id")),
			rs.GetValue(_T("item_name")),
			rs.GetValue(_T("item_model")),
			rs.GetValue(_T("item_unit")),
			rs.GetValue(_T("unitprice")),
			rs.GetValue(_T("item_type")), NULL);
		rs.MoveNext();
	}
	return nCount;

}


long CMainFrame::LoadItemList(CString szStorageID, CWnd *pWnd, CString szKey, CString szFilter, bool bCheckAvaiable)
{
	CMainFrame *pMF = (CMainFrame*) this;
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	CGuiComboBox* pCB = (CGuiComboBox*) pWnd;

	szWhere.Empty();

	if(pCB->IsSearchKey() && !szKey.IsEmpty()){
		szWhere.Format(_T(" and si_item_id='%s' "), szKey);
	}
	szWhere.AppendFormat(_T(" %s "), szFilter);
	szWhere.AppendFormat(_T(" sb_org_id='%s' "), GetModuleID());

	if(bCheckAvaiable)
	{
		szWhere.AppendFormat(_T(" and (sb_qtyonhand-sb_qtyordered-sb_qtypreordered) > 0 "));
	}

	pCB->DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T(" SELECT item_id, item_name, item_serial, item_model, item_unitprice, item_unit, item_qtyavaiable ") \
				_T(" FROM ") \
				_T(" (SELECT si_item_id                           AS item_id,") \
				_T("   si_name                                   AS item_name,") \
				_T("   si_serial                                   AS item_serial,") \
				_T("   si_model                                   AS item_model,") \
				_T("   si_unitprice                              AS item_unitprice,") \
				_T("   STORAGE_GET_UOMNAME(si_uom_id) AS item_unit,") \
				_T("   SUM(sb_qtyonhand-sb_qtyordered)           AS item_qtyavaiable") \
				_T(" FROM storage_bin") \
				_T(" LEFT JOIN storage_item") \

				_T(" ON(sb_item_id       = si_item_id)") \
				_T(" WHERE sb_storage_id ='%s'") \
				_T(" GROUP BY si_item_id,") \
				_T("   si_name, si_serial, si_model,") \
				_T("   si_unitprice,") \
				_T("   si_uom_id") \
				_T(" ORDER BY si_name ) WHERE item_qtyavaiable > 0") ,  szStorageID, szWhere );
	
	_tprintf(_T("\r\nLoadItem: %s"), szSQL);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		pCB->AddItems(
			rs.GetValue(_T("item_id")),
			rs.GetValue(_T("item_name")),
			rs.GetValue(_T("item_model")),
			rs.GetValue(_T("item_serial")),
			rs.GetValue(_T("item_unit")),
			rs.GetValue(_T("item_unitprice")),
			rs.GetValue(_T("item_qtyavaiable")), NULL);
		rs.MoveNext();
	}
	return nCount;

}


long CMainFrame::LoadStorageList(CWnd *pWnd, CString szKey, CString szFilter)
{
	CMainFrame *pMF = (CMainFrame*) this;
	UpdateData(TRUE);
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;

	CGuiComboBox* pCB = (CGuiComboBox*) pWnd;

	szWhere.Empty();

	if(pCB->IsSearchKey() && !szKey.IsEmpty()){
		szWhere.Format(_T(" and sl_storage_id='%s' "), szKey);
	}
	szWhere.AppendFormat(_T(" %s "), szFilter);
	pCB->DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT sl_storage_id as id, sl_name as name, COALESCE(sl_type,'GL') as storage_type ") \
		_T(" FROM storage_location ") \
		_T(" WHERE sl_org_id IN ('GL','%s')  %s ORDER BY sl_index, sl_storage_id "), GetModuleID(),szWhere);
	_tprintf(_T("\r\nLoadStorageList: %s"), szSQL);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		pCB->AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), 
			rs.GetValue(_T("storage_type")),
			NULL);
		rs.MoveNext();
	}
	return nCount;

}

long CMainFrame::LoadSourceList(CWnd *pWnd, CString szKey, CString szFilter)
{
	CMainFrame *pMF = (CMainFrame*) this;
	
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();

	CGuiComboBox* pCB = (CGuiComboBox*) pWnd;

	szWhere.Empty();

	if(pCB->IsSearchKey() && !szKey.IsEmpty())
	{
		szWhere.Format(_T(" AND fase_id='%s' "), szKey);
	}
	szWhere.AppendFormat(_T(" %s"), szFilter);

	pCB->DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fase_id AS id, fase_desc AS description ") \
		_T(" FROM fam_sources ") \
		_T(" WHERE 1=1 %s ORDER BY fase_id"), szWhere);
_tprintf(_T("%s"), szSQL);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF())
	{ 
		pCB->AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;

}

long CMainFrame::LoadItemList_Other(CString szStorageID, CWnd *pWnd, CString szKey, CString szFilter, bool bCheckAvaiable)
{
	CMainFrame *pMF = (CMainFrame*) this;
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	CGuiComboBox* pCB = (CGuiComboBox*) pWnd;
	szWhere.Empty();

	if(pCB->IsSearchKey() && !szKey.IsEmpty()){
		szWhere.Format(_T(" and si_item_id='%s' "), szKey);
	}
	szWhere.AppendFormat(_T(" %s "), szFilter);
	szWhere.AppendFormat(_T(" and sb_org_id='%s' "), GetModuleID());
	szWhere.AppendFormat(_T(" and sb_storage_id ='%s' "), szStorageID);

	if(bCheckAvaiable)
	{
		szWhere.AppendFormat(_T(" and (sb_qtyonhand-sb_qtyordered-sb_qtypreordered) > 0 "));
	}

	pCB->DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T(" SELECT si_item_id                           AS item_id,") \
				_T("   si_name                                   AS item_name,") \
				_T("   si_serial                                   AS item_serial,") \
				_T("   si_model                                   AS item_model,") \
				_T("   si_unitprice                              AS item_unitprice,") \
				_T("   STORAGE_GET_UOMNAME(si_uom_id) AS item_unit,") \
				_T("   SUM(sb_qtyonhand-sb_qtyordered)           AS item_qtyavaiable,") \
				_T("   sb_storage_id AS item_storage") \
				_T(" FROM storage_bin") \
				_T(" LEFT JOIN storage_item") \
				_T(" ON(sb_item_id       = si_item_id)") \
				_T(" WHERE sb_qtyonhand-sb_qtyordered > 0 %s") \
				_T(" GROUP BY si_item_id,") \
				_T("   si_name, si_serial, si_model,") \
				_T("   si_unitprice,") \
				_T("   si_uom_id, sb_storage_id") \
				_T(" ORDER BY si_name") , szWhere );
	
	_tprintf(_T("\r\nLoadItem: %s"), szSQL);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		pCB->AddItems(
			rs.GetValue(_T("item_id")),
			rs.GetValue(_T("item_name")),
			rs.GetValue(_T("item_model")),
			rs.GetValue(_T("item_serial")),
			rs.GetValue(_T("item_unit")),
			rs.GetValue(_T("item_unitprice")),
			rs.GetValue(_T("item_qtyavaiable")),
			rs.GetValue(_T("item_storage")), NULL);
		rs.MoveNext();
	}
	return nCount;

}


long CMainFrame::LoadStdItemListOther(CWnd *pWnd, CString szKey, CString szFilter)
{
	CMainFrame *pMF = (CMainFrame*) this;
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	CGuiComboBox* pCB = (CGuiComboBox*) pWnd;

	szWhere.Empty();

	if(pCB->IsSearchKey() && !szKey.IsEmpty()){
		szWhere.Format(_T(" and sil_item_list_id='%s' "), szKey);
	}
	szWhere.AppendFormat(_T(" %s "), szFilter);

	pCB->DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT distinct sil_item_list_id as item_id, sil_name as item_name, ") \
			_T(" STORAGE_GET_UOMNAME(sil_uom_id) as item_unit, ") \
			_T(" sil_purchaseprice as unitprice, sil_model as item_model, sil_type as item_type ") \
			_T(" FROM STORAGE_ITEM_LIST ") \
			_T(" LEFT JOIN STORAGE_ITEM ON (sil_item_list_id = si_item_list_id) ") \
			_T(" LEFT JOIN STORAGE_BIN ON (si_item_id = sb_item_id) ") \
			_T(" WHERE sil_org_id='%s' %s ORDER BY sil_item_list_id "),  pMF->GetModuleID(), szWhere);
	
	_tprintf(_T("\r\nLoadItemOther: %s"), szSQL);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		pCB->AddItems(
			rs.GetValue(_T("item_id")),
			rs.GetValue(_T("item_name")),
			rs.GetValue(_T("item_model")),
			rs.GetValue(_T("item_unit")),
			rs.GetValue(_T("unitprice")),
			rs.GetValue(_T("item_type")), NULL);
		rs.MoveNext();
	}
	return nCount;

}