#ifndef HMSFEEMANAGER_H
#define HMSFEEMANAGER_H

#include "GuiView.h"
#include "DbField.h"
#include <vector>

class AFX_EXT_CLASS CHMSFeeManager
{
public:
	float	m_version;
	bool	m_HasInsAllInOne;
	bool	m_FilterInsuranceFee;
	CString m_szIsExtIns;
	struct CFeeItem{
		CFeeItem(){
			m_szItemID.Empty();
			m_szFeeType.Empty();
			m_szType.Empty();
			m_szID.Empty();
			m_szItemID.Empty();
			m_szName.Empty();
			m_szUnit.Empty();
			m_szGroup.Empty();
			m_nQty = 0;
			m_nUnitPrice = 0;
			m_nInsPrice = 0;
			m_nCost = 0;
			m_nInsCost = 0;
			m_nDiscount = 0;
			m_nDiffCost = 0;
			m_nCoPayment = 0;
			m_nPatPaid = 0;
			m_szPayrate = _T("100");
			m_szInsRate = _T("");
			m_szExtInsPaid = _T("N");
			m_szNguonTT.Empty();
			m_nOtherPaid = 0;
			
		}
		

		CString m_szFeeType;
		CString	m_szType;
		CString m_szGroup;
		CString m_szID;
		CString	m_szItemID;
		CString	m_szName;
		CString	m_szUnit;
		CString m_szPayrate;
		CString m_szInsRate;
		CString m_szExtInsPaid;
		CString m_szNguonTT;
		float	m_nQty;
		double	m_nUnitPrice;
		double	m_nInsPrice;
		double	m_nCost;
		double	m_nInsCost;
		double	m_nDiscount;
		double	m_nDiffCost;
		double	m_nCoPayment;
		double	m_nPatPaid;
		double  m_nOtherPaid;
	};

	long	m_nDocumentNo;
	long	m_nInvoiceNo;
	CString	m_szSQL;
	CString	m_szFilter;
	bool	m_bCancel;
	int		m_nDisrate;
	
	double	m_nTotalCost;
	double	m_nTotalInsCost;
	double	m_nTotalDiscount;
	double	m_nTotalDiffCost;
	double	m_nTotalCopayment;
	double	m_nTotalPatPaid;
	double	m_nTotalDeposit;
	double	m_nTotalFree;
	double	m_nTotalTaitro;
	double	m_nTotalBQP;
	double	m_nTotalBHYTBQP;
	double	m_nTotalKhac;
	double	m_nTotalPayment;
	double	m_nTotalRefund;
	double	m_nTotalExtInsPaid;
	double	m_nTotalOtherPaid;

	double	m_insTotalCost;
	double	m_insTotalInsCost;
	double	m_insTotalDiscount;
	double	m_insTotalDiffCost;
	double	m_insTotalCopayment;
	double	m_insTotalPatPaid;
	//double  m_insTotalOtherPaid;

	double	m_servTotalCost;
	double	m_servTotalInsCost;
	double	m_servTotalDiscount;
	double	m_servTotalDiffCost;
	double	m_servTotalCopayment;
	double	m_servTotalPatPaid;


	long	m_nCardIdx;
	long	m_nxCardIdx;
	CString m_szCardNo;
	CString m_szCardNoEx;
	int		m_nDisrate2;

	CString m_szRegDate;
	CString m_szExpDate;
	CString m_szRegDateEx;
	CString m_szExpDateEx;

	CArray<CFeeItem,CFeeItem>	m_arInsFees;
	CArray<CFeeItem,CFeeItem>	m_arServFees;
	int		m_nPrintReceiptNumberPage;


	CHMSFeeManager(long nDocumentNo, bool bCancel = false);
	~CHMSFeeManager(void);
	void	SetDefaultValues();
	int		LoadData(long nInvoiceNo, CString szFilter=_T(""), bool bPrinter = false, bool bInPackage=false);
	int		LoadDataFromInvoices(CArray<long,long&> &invoices, CString szFilter=_T(""), bool bPrinter = false, bool bInPackage=false);

	int		LoadData_v1(long nInvoiceNo, CString szFilter=_T(""), bool bPrinter = false, bool bInPackage=false);
	int		LoadDataFromInvoices_v1(CArray<long,long&> &invoices, CString szFilter=_T(""), bool bPrinter = false, bool bInPackage=false);
	int		LoadData_v2(long nInvoiceNo, CString szFilter=_T(""), bool bPrinter = false, bool bInPackage=false);

	int		LoadDataFromInvoices_v2(CArray<long,long&> &invoices, CString szFilter=_T(""), bool bPrinter = false, bool bInPackage=false);
	int		LoadDataFromInvoices_v3(CArray<long,long&> &invoices, CString szFilter=_T(""), bool bPrinter = false, bool bInPackage=false);
	int		LoadInsInvoice(long nInvoiceNo, CString szFilter=_T(""), bool bPrinter = false, bool bInPackage=false);
	int		LoadInsInvoice_covid(long nInvoiceNo, CString szFilter=_T(""), bool bPrinter = false, bool bInPackage=false);


	//Nap chi phi theo bang ke moi
	int		LoadData_v3(std::vector<long> invoices, CString szFilter=_T(""), bool bPrinter = false, bool bInPackage=false);
	int		LoadInsData_v3(std::vector<double>& values, std::vector<long> invoices, CString szFilter=_T(""), bool bPrinter = false, bool bInPackage=false);
	int		LoadServData_v3(std::vector<double>& values, std::vector<long> invoices, CString szFilter=_T(""), bool bPrinter = false, bool bInPackage=false);
	int		LoadHitechData_v3(std::vector<double>& values, long nCardIdx, int nIndex, std::vector<long> invoices, CString szFilter=_T(""), bool bPrinter = false, bool bInPackage=false);
	int		LoadHitechAllInOne_v3(std::vector<double>& values, long nCardIdx, int nIndex, std::vector<long> invoices, CString szFilter=_T(""), bool bPrinter = false, bool bInPackage=false);

	void	PrintDischargePayment(long nInvoiceNo, bool bExam=false);
	//Ham in phieu thanh toan BHYT
	void	PrintInsDischargePayment(long nInvoiceNo, bool bExam=false);
	void	PrintInsuranceDischargePayment();
	void	PrintInsuranceDischargePayment_V3();
	
	//Hàm in bảng kê chi tiết phí
	void	PrintGeneralExaminationCost(long nInvoiceNo, bool bPreview=true);
	
	void	PrintSummaryInsuranceDischargePayment();
	//Thêm phơi bệnh nhân covid
	void	PrintSummaryInsuranceDischargePayment_covid();
	//Thêm phần in phiếu yêu cầu thanh toán dịch vụ kết nối với bank
	void	PrintInvoice_bank(long nInvoiceNo, bool bPreview, bool bDirect, int nPrintCount);
	void	PrintServiceDischargePayment();
	void	PrintPolicyDischargePayment();
	int		LoadList(CGuiListCtrl* pList);
	//Load du lieu vien phi vao gridlistview
	int		LoadList_v3(CGridListView* pList);
	void	OnRecalcKDrug(int nInList, double nCost, double& nDiffCost, double& nCoPayment, int nDisRate);

	void	AddItem(CString szObjectType, CFeeItem item);
};

#endif
