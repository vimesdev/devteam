#ifndef MAINFRAME_E10_H
#define MAINFRAME_E10_H
#include "HMSMainFrame.h"
#include "ReportDocument.h"
#include <typeinfo>
#include "HMSExt\HMSExtDef.h"

#define STR2BOOL(vstring, vbool) { if(vstring==_T("Y")) vbool = true; else vbool = FALSE;}
#define BOOL2STR(vbool, vstring) { if(vbool) vstring=_T("Y"); else vstring = _T("N"); }

#ifndef WM_REFRESH
#define WM_REFRESH	WM_USER+1000
#endif

class AFX_EXT_CLASS CMainFrame_E10 : public CHMSMainFrame
{
public:
	CMainFrame_E10(void);
	~CMainFrame_E10(void);
	bool	IsMultipleCurrency();

	CString	GetDepartmentName(CString szID);
	CString	GetUserName(CString szUserID);
	CString	GetZoneOfUser(CString szUserID);
	CString GetProductTypeName(CString szProductType);
	CString	GetCompanyName();
	CString	GetParentCompanyName();
	CString	GetDepartmentID();
	CString GetSelectionString(CString szID, CString szCode);
	int		LoadAccountList(CWnd* pWnd, CString szKey, CString szFilter=_T(""));
	int		LoadCurrencyList(CWnd* pWnd, CString szKey, CString szFilter=_T(""));
	int		LoadBankList(CWnd* pWnd, CString szKey, CString szFilter=_T(""));
	int		LoadBankAccountList(CWnd* pWnd, CString szKey, CString szFilter=_T(""));
	int		LoadPartnerTypeList(CWnd* pWnd, CString szKey, CString szFilter=_T(""));
	int		LoadPartnerCategoryList(CWnd* pWnd, CString szKey, CString szFilter=_T(""));
	int		LoadPartnerList(CWnd* pWnd, CString szKey, CString szFilter=_T(""), bool bLoadAll=false);
	int		LoadObjectList(CWnd* pWnd, CString szKey, CString szFilter=_T(""));
	int		LoadExpenseClassList(CWnd* pWnd, CString szKey, CString szFilter=_T(""));
	int		LoadTaxList(CWnd* pWnd, CString szKey, CString szFilter=_T(""));
	int		LoadTransportMethodList(CWnd* pWnd, CString szKey, CString szFilter=_T(""));
	int		LoadReasonList(CWnd* pWnd, CString szKey, CString szFilter=_T(""));
	int		LoadPaymentMethodList(CWnd* pWnd, CString szKey, CString szFilter=_T(""));
	int		LoadPaymentResourceList(CWnd* pWnd, CString szKey, CString szFilter=_T(""));
	int		LoadPaymentTermList(CWnd* pWnd, CString szKey, CString szFilter=_T(""));
	int		LoadDeliveryMethodList(CWnd* pWnd, CString szKey, CString szFilter=_T(""));
	int		LoadDeliveryTermList(CWnd* pWnd, CString szKey, CString szFilter=_T(""));
	int		LoadJobList(CWnd* pWnd, CString szKey, CString szFilter=_T(""));
	int		LoadUomList(CWnd* pWnd, CString szKey, CString szFilter=_T(""));
	int		LoadReportPeriodList(CWnd* pWnd, CString szKey, CString szFilter=_T(""));
	int		LoadGroupList(CWnd* pWnd, CString szKey, CString szFilter=_T(""));
	void	OnReportPeriodSelendok(CString* pFromDate, CString* pToDate, CString m_szReportPeriodKey);
	int		LoadPartnerIntoListCtrl(CWnd* pWnd, CString szFilter=_T(""));
	int		LoadDataPeriodList(CWnd* pWnd, CString szKey, CString szFilter=_T(""));
	int		LoadContractList(CWnd* pWnd, CString szKey, CString szFilter=_T(""));
	int		LoadContractPackageList(CWnd* pWnd, CString szKey, CString szFilter=_T(""));
	int		LoadInvoiceTypeList(CWnd* pWnd, CString szKey, CString szFilter=_T(""));
	int		LoadVoucherTypeList(CWnd* pWnd, CString szKey, CString szFilter=_T(""));
	int		LoadWarehouseList(CWnd* pWnd, CString szKey, CString szFilter=_T(""));
	int		LoadDepartmentList(CWnd* pWnd, CString szKey, CString szFilter=_T(""));
	int		LoadCountryList(CWnd* pWnd, CString szKey, CString szFilter=_T(""));
	int		LoadManufactureList(CWnd* pWnd, CString szKey, CString szFilter=_T(""));
	int		LoadExportTypeList(CWnd* pWnd, CString szKey, CString szFilter=_T(""));
	int		LoadSelectionList(CWnd* pWnd, CString szKey, CString szID, CString szFilter=_T(""));
	int		LoadTransactionTypeList(CWnd* pWnd, CString szKey, CString szFilter=_T(""));


	int		LoadProductTypeList(CWnd* pWnd, CString szKey, CString szFilter=_T(""));
	int		LoadProductCategoryList(CWnd* pWnd, CString szKey, CString szFilter=_T(""));
	int		LoadProductClassList(CWnd* pWnd, CString szKey, CString szFilter=_T(""));
	int		LoadProductList(CWnd* pWnd, CString szKey, CString szFilter=_T(""));
	int		LoadProductPackageList(CWnd* pWnd, CString szKey, CString szPackage, CString szFilter=_T(""));
	int		LoadProductItemList(CWnd* pWnd, CString szKey, CString szFilter=_T(""));
	int		LoadProductResourceList(CWnd* pWnd, CString szKey, CString szFilter=_T(""));
	int		LoadProductUomList(CWnd* pWnd, CString szKey, CString szFilter=_T(""));
	
	int		LoadUserList(CWnd* pWnd, CString szKey, CString szFilter=_T(""));
	int		LoadStorageCategoryList(CWnd* pWnd, CString szKey, CString szFilter=_T(""));
	int		LoadStorageZoneList(CWnd* pWnd, CString szKey, CString szFilter=_T(""));
	int		LoadStorageList(CWnd* pWnd, CString szKey, CString szFilter=_T(""));
	int		LoadResourceList(CWnd* pWnd, CString szKey, CString szFilter=_T(""));
	int		LoadStorageIntoListCtrl(CWnd *pWnd, CString szFilter=_T(""));

	int		LoadProductMaterialList(CWnd* pWnd, CString szKey, CString szFilter=_T(""));
	int		LoadProductAttributeList(CWnd* pWnd, CString szKey, CString szFilter=_T(""));
	int		LoadProductColorList(CWnd* pWnd, CString szKey, CString szFilter=_T(""));
	int		LoadProductGuaranteeList(CWnd* pWnd, CString szKey, CString szFilter=_T(""));

	void	GetTransactionInfo(long nTransactionID, CString &szCreatedBy, CString &szStatus);
	void	OnInitializes();	
	//Print to view report item name
	void PrintPureForm(CReport *rpt);
	void PrintPureForm(CString szPath);
	void	LoadReportDate(int nYear, int nMonth, CString& szFromDate, CString& szToDate);
	int	LoadReportPeriod(CWnd* pWnd, CString szKey, CString szFilter=_T(""));
	//Price Schema Function
	int	LoadExpenseType(CWnd* pWnd, CString szKey, CString szFilter=_T(""));
	long LoadProductItem(CWnd* pWnd, CString szKey, CString szFilter=_T(""));
	long PreInitData();

	vector<SProductItem> m_vtProductItem;	
	bool	CheckCoreVersion();
	//Machine setup
	int	LoadMachineTaskList(CWnd* pWnd, CString szFilter = _T(""));
	int	LoadFeeListView(CWnd* pWnd, CString szFilter = _T(""));
	CString GetCheckListView(CWnd* pWnd, int nColCheck, int nColGet = 0);
	int LoadFeeGroup(CWnd* pWnd, CString szKey, CString szFilter);
};

//#define Notice(sql){ _tprintf(_T("\r\n%s"), sql); _fmsg(_T("\r\n%s"), szSQL);}

#endif
