#ifndef FAMAINFRAME_H
#define FAMAINFRAME_H
#include "GuiMainFrame.h"

class AFX_EXT_CLASS CFAMainFrame :
	public CGuiMainFrame
{
public:
	CString	m_szCompanyName;
	CString	m_szDepartment;

	CFAMainFrame(void);
	~CFAMainFrame(void);
	int		LoadAccountList(CWnd* pWnd, CString szKey, CString szFilter=_T(""));
	int		LoadCurrencyList(CWnd* pWnd, CString szKey, CString szFilter=_T(""));
	int		LoadBankList(CWnd* pWnd, CString szKey, CString szFilter=_T(""));
	int		LoadBankAccountList(CWnd* pWnd, CString szKey, CString szFilter=_T(""));
	int		LoadPartnerTypeList(CWnd* pWnd, CString szKey, CString szFilter=_T(""));
	int		LoadPartnerCategoryList(CWnd* pWnd, CString szKey, CString szFilter=_T(""));
	int		LoadPartnerList(CWnd* pWnd, CString szKey, CString szFilter=_T(""));
	int		LoadExpenseClassList(CWnd* pWnd, CString szKey, CString szFilter=_T(""));
	int		LoadTaxList(CWnd* pWnd, CString szKey, CString szFilter=_T(""));
	int		LoadTransportMethodList(CWnd* pWnd, CString szKey, CString szFilter=_T(""));
	int		LoadReasonList(CWnd* pWnd, CString szKey, CString szFilter=_T(""));
	int		LoadPaymentTermList(CWnd* pWnd, CString szKey, CString szFilter=_T(""));
	int		LoadDeliveryMethodList(CWnd* pWnd, CString szKey, CString szFilter=_T(""));
	int		LoadDeliveryTermList(CWnd* pWnd, CString szKey, CString szFilter=_T(""));
	int		LoadJobList(CWnd* pWnd, CString szKey, CString szFilter=_T(""));
	int		LoadProductCategoryList(CWnd* pWnd, CString szKey, CString szFilter=_T(""));
	int		LoadProductList(CWnd* pWnd, CString szKey, CString szFilter=_T(""));
	int		LoadUOMList(CWnd* pWnd, CString szKey, CString szFilter=_T(""));
	int		LoadReportPeriodList(CWnd* pWnd, CString szKey, CString szFilter=_T(""));
	int		LoadGroupList(CWnd* pWnd, CString szKey, CString szFilter=_T(""));
	void	OnReportPeriodSelendok(CString* pFromDate, CString* pToDate, CString m_szReportPeriodKey);
	int		LoadPartnerIntoListCtrl(CWnd* pWnd, CString szFilter=_T(""));
	int		LoadDataPeriodList(CWnd* pWnd, CString szKey, CString szFilter=_T(""));
	int		LoadContractList(CWnd* pWnd, CString szKey, CString szFilter=_T(""));
	int		LoadInvoiceTypeList(CWnd* pWnd, CString szKey, CString szFilter=_T(""));
	int		LoadVoucherTypeList(CWnd* pWnd, CString szKey, CString szFilter=_T(""));

};

#endif
