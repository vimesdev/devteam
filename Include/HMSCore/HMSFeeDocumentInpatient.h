#ifndef HMSFeeDocumentInpatient_H
#define HMSFeeDocumentInpatient_H

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Copyright(C) Viet Nam Medical Software Join Stock Company. 2005-2010. 			
//	All rights reserved. 
//	This program is protected by Viet nam and international treaties.  
//	Unauthorized reproduction or distribution of this program, 
//	or any portion of it, may result in severe civil and criminal penalties, 
//	and will be prosecuted to the maximum extent possible under the law.
//	This file is a part of the GUI(Graphical User Interface) class library.
//	(c) 2006-2008 Hay Hoang Van, All rights reserved.
//	CONTACT INFORMATION:
//	Email  : hayhv@vimes.com.vn or hayhv@yahoo.com
//	Website: http://www.vimes.com.vn
/////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Ban quyen cua Cong Ty Co Phan Phan Mem Y Te Viet Nam 2005-2010.
//	Do Cuc Ban Quyen, Bo VHTT nuoc Cong hoa xa hoi chu nghia Viet Nam cap.
//	Chuong trinh phan mem nay duoc Luat phap Viet Nam va quoc te bao ho.
//	San xuat, su dung hoac phan phoi trai phep toan bo hoac mot phan cua phan men nay se
//	chiu cac hinh phat va hinh su hoac dan su, co the len den muc toi da dung theo Luat qui dinh.
//	File nay la mot phan cua thu vien lap trinh(GUI). Ban quyen cua Hoang Van Hay. 2006-2008
//	THONG TIN LIEN HE:
//	Email  : hayhv@vimes.com.vn hoac hayhv@yahoo.com
//	Website: http://www.vimes.com.vn
//////////////////////////////////////////////////////////////////////////////////////////////////////////
#include "GuiUtils.h"
#include "GuiView.h"
#include "DbField.h"

class AFX_EXT_CLASS CHMSFeeDocumentInpatient : public CGuiView
{
protected:
public:
	typedef struct tagFEE{
		CString szFeeType;
		CString szGroupID;
		CString szFeeID;
		CString szName;
		CString szUnit;
		int		nIdx;
		int		nQty;
		double  nPrice;
		double	nCost;
		double	nInsPaid;
		double	nPatpaid;
		double	nPatdebt;
		bool	bVisible;
	}FEE;
	CArray<FEE, FEE&>fees;
typedef struct tagRECEIPTINFO{
			CString deptid;
			CString admitdate;
			CString dischargedate;
			CString mainicd;
			CString maindisease;
}RECEIPTINFO;

	void	RefreshData();
	
	CGuiGroupBox	m_wndFeeInformation;
	CGridListView	m_wndFeeList;
	CGuiLabel		m_wndTotalCostLabel;
	CGuiNumberCtrl	m_wndTotalCost;
	CGuiLabel		m_wndTotalInsCostLabel;
	CGuiNumberCtrl	m_wndTotalInsCost;
	CGuiLabel		m_wndTotalDiscountLabel;
	CGuiNumberCtrl	m_wndTotalDiscount;
	
	CGuiLabel		m_wndTotalPatPaidLabel;
	CGuiNumberCtrl	m_wndTotalPatPaid;
	CGuiLabel		m_wndTotalDiffPaidLabel;
	CGuiNumberCtrl	m_wndTotalDiffPaid;
	CGuiLabel		m_wndTotalPayableLabel;
	CGuiNumberCtrl	m_wndTotalPayable;
	CGuiLabel		m_wndTotalDepositLabel;
	CGuiNumberCtrl	m_wndTotalDeposit;
	CGuiLabel		m_wndTotalPolicyLabel;
	CGuiNumberCtrl	m_wndTotalPolicy;
	CGuiLabel		m_wndSumABLabel;
	CGuiNumberCtrl	m_wndSumAB;
	CGuiLabel		m_wndFreeAmountLabel;
	CGuiCheckBox	m_wndAllDepartment;
	CGuiNumberCtrl	m_wndFreeAmount;
	CGuiLabel		m_wndPaymentLabel;
	CGuiNumberCtrl	m_wndPayment;
	CGuiLabel		m_wndStatus;
	CGuiCheckBox	m_wndIsPaid;
	CGuiCheckBox	m_wndInPackage;
	CGuiCheckBox	m_wndNguonngansach;
	CGuiTextCtrl	m_wndSearch;

	BOOL	m_bAllDepartment;
	double	m_nTotalCost;
	double	m_nTotalInsCost;
	double	m_nTotalDiscount;
	double	m_nTotalDiffPaid;
	double	m_nTotalPatPaid;
	double	m_nTotalPayable;
	double	m_nTotalFreeAmount;
	double	m_nTotalPolicy;
	double	m_nTotalDeposit;
	double	m_nTotalPayment;
	double	m_nSumAB;
	CString m_szFreeAmount;
	CString	m_szStatusDesc;
	CString	m_szSearch;
	BOOL	m_bIsPaid;
	BOOL	m_bInPackage;
	double  m_nExtInsPaid;
	BOOL	m_bNguonngansach;

	long			OnFeeListLoadData(); 
	void			OnFeeListSelectChange(int nOldItem, int nNewItem); 
	void			OnFeeListDblClick(); 
	int			OnFeeListDeleteItem(); 
	//void			OnCostChange(); 
	//void			OnCostSetfocus(); 
	//void			OnCostKillfocus(); 
	int			OnCostCheckValue(); 
	//void			OnTotalInsCostChange(); 
	//void			OnTotalInsCostSetfocus(); 
	//void			OnTotalInsCostKillfocus(); 
	int			OnTotalInsCostCheckValue(); 
	//void			OnTotalDiscountChange(); 
	//void			OnTotalDiscountSetfocus(); 
	//void			OnTotalDiscountKillfocus(); 
	int			OnTotalDiscountCheckValue(); 
	//void			OnTotalPatPaidChange(); 
	//void			OnTotalPatPaidSetfocus(); 
	//void			OnTotalPatPaidKillfocus(); 
	int			OnTotalPatPaidCheckValue(); 
	//void			OnTotalDiffPaidChange(); 
	//void			OnTotalDiffPaidSetfocus(); 
	//void			OnTotalDiffPaidKillfocus(); 
	int			OnTotalDiffPaidCheckValue(); 
	//void			OnTotalPayableChange(); 
	//void			OnTotalPayableSetfocus(); 
	//void			OnTotalPayableKillfocus(); 
	int			OnTotalPayableCheckValue(); 
	//void			OnTotalDepositChange(); 
	//void			OnTotalDepositSetfocus(); 
	//void			OnTotalDepositKillfocus(); 
	int			OnTotalDepositCheckValue(); 
	//void			OnTotalPolicyChange(); 
	//void			OnTotalPolicySetfocus(); 
	//void			OnTotalPolicyKillfocus(); 
	int			OnTotalPolicyCheckValue(); 
	//void			OnSumABChange(); 
	//void			OnSumABSetfocus(); 
	//void			OnSumABKillfocus(); 
	int			OnSumABCheckValue(); 
	void			OnAllDepartmentSelect(); 
	//void			OnFreeAmountChange(); 
	//void			OnFreeAmountSetfocus(); 
	//void			OnFreeAmountKillfocus(); 
	int			OnFreeAmountCheckValue(); 
	//void			OnPaymentChange(); 
	//void			OnPaymentSetfocus(); 
	//void			OnPaymentKillfocus(); 
	int			OnPaymentCheckValue(); 
	//void			OnUnpaidChange(); 
	//void			OnUnpaidSetfocus(); 
	//void			OnUnpaidKillfocus(); 
	int			OnUnpaidCheckValue(); 
	int			OnCheckAllDepartment();
	int			OnIsPaidSelect();
	int			OnInPackageSelect();
	int	        OnNguonngansachSelect();
	void			OnListSearchItem();
	int			OnSearchCheckValue();
	int			OnCreatePaymentQRRequest();
	CHMSFeeDocumentInpatient();
	~CHMSFeeDocumentInpatient();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSFeeDocumentInpatient(); 
	int OnEditHMSFeeDocumentInpatient(); 
	int OnDeleteHMSFeeDocumentInpatient(); 
	int OnSaveHMSFeeDocumentInpatient(); 
	int OnCancelHMSFeeDocumentInpatient(); 
	int OnConfirmPatientExpense(); 
	int OnHMSFeeDocumentInpatientListLoadData(); 
	void OnAddOtherFee();
	int OnPrintMaterialDetail();
	int OnPrintSummaryExaminationCost();
	int OnPrintSummaryDischargePayment();
	int OnDetailFeeFood();
	void OnFeeChangePaySourceCovid();
	void	OnCreateFees();
	void	OnModifyFeeItems();
	int		OnCreateDepositRequest();
	void	OnPrintSummaryDrugAndMaterial();
	void	OnPrintPhieuLocThanA14();
	int		OnPrintPhieuDTVLTL();
	int		OnPrintDepositRequest();
	int		OnCreateDiscountOrder();
	int OnFeeDepositDetail();
	int OnHCDetailPackage();
	void	OnRecaculateExamFee();
	void OnFeeChangePaySourceCovidEX();
	int			OnCreateRefundHolderRequest();

	void LoadFeeList(CGuiListCtrl* pList, long nDocumentNo, long nInvoiceNo,
		double& nTotalCost, double&  nTotalInsCost, double& nTotalFreeAmount, 
		double& nTotalDiffCost, double& nTotalPatPaid, double& nTotalPayable);

	void	OnResizeLayout();
	void	OnChangeFeeDrug();
	void	OnModifyOperationFee();
	void	OnViewOperationFee();
	void	OnCreatePackageDiscount();

	void	OnUpdateExtInsInfo();
	void	PrintAllServiceDischargeReceipt_IVF();
	void    PrintAllServiceDischargeReceipt_IVF_ByTreattime();
	void    OnPrintSummaryCostForFree();
	int	    OnSummaryPaymentByTreattime();
    void OnBankInvoiceInfo2();
	
};
#endif