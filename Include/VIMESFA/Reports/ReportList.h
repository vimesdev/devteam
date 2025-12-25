#ifndef ACCREPORTLIST_H
#define ACCREPORTLIST_H

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Copyright(C) Viet Nam Medical Software Joint Stock Company. 2005-2010. 			
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
//	Ban quyen cua Cong Ty Co Phan Phan MemY Te Viet Nam 2005-2010.
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
#include "CA_DetailedCashBalanceLedger.h"
#include "CA_CashBalanceLedger.h"
#include "CA_ReceiptJournal.h"
#include "CA_PaymentJournal.h"
#include "BA_BankDepositLedger.h"
#include "BA_BankCollationSheet.h"
#include "BA_ForeignCurrencyDepositLedger.h"
#include "BA_BankBalanceSheet.h"
#include "AP_Purchase.h"
#include "AP_PurchaseJournal.h"
#include "AP_OrderDetailbyDelivery.h"
#include "AP_POImplementationbyClerk.h"
#include "AP_POImplementationbyDelivery.h"
#include "AP_OrderImplementationbyItem.h"
#include "AP_POImplementationDetail.h"
#include "AP_OrderinDebt.h"
#include "AP_POJournal.h"
#include "AP_POJournal02.h"
#include "AP_PurchaseDetailbyOrder.h"
#include "AP_PurchaseSynthesisbyOrder.h"
#include "AP_PurchaseDetail.h"
#include "AP_PurchaseDetailbyClerk.h"
#include "AP_PurchaseDetailbyClerkSupplier.h"
#include "AP_PurchaseDetailbyItem.h"
#include "AP_PurchaseDetailbyItemClerk.h"
#include "AP_PurchaseDetailbyItemSupplier.h"
#include "AP_PurchaseDetailbySupplier.h"
#include "AP_PurchaseDetailbySupplierItem.h"
#include "AP_PurchaseJournal.h"
#include "AP_PurchaseJournalAdm.h"
#include "AP_PurchaseJournalofReturnedReductionGoods.h"
#include "AP_PurchaseSheet.h"
#include "AP_PurchaseSynthesisbyClerk.h"
#include "AP_PurchaseSynthesisbyClerkSupplier.h"
#include "AP_PurchaseSynthesisbyItem.h"
#include "AP_PurchaseSynthesisbyItemClerk.h"
#include "AP_PurchaseSynthesisbyItemSupplier.h"
#include "AP_PurchaseSynthesisbySupplier.h"
#include "AP_PurchaseSynthesisbySupplierItem.h"
#include "AP_PurchaseDiscountReturnReductionDetailbyClerkItem.h"
#include "AP_PurchaseDiscountReturnReductionSynthesisbyClerkItem.h"
#include "AP_PurchaseDiscountReturnReductionSynthesisbyItem.h"
#include "AP_PurchaseJournalofReduction.h"
#include "AP_ReductionGoodsbySupplierInvoice.h"
#include "AP_ReductionGoodsbySupplierItem.h"
#include "AP_ReductionPurchaseDetailbyClerkItem.h"
#include "AP_ReductionPurchaseDetailbyItem.h"
#include "AP_ReductionSynthesisbySupplierItem.h"
#include "AP_ReturnedGoodsbySupplierInvoice.h"
#include "AP_ReturnedGoodsDetailbyItem.h"
#include "AP_ReturnGoodsbyClerkItem.h"
#include "AP_ReturnSynthesisbySupplierItem.h"
#include "AP_PayableAgeDetail.h"
#include "AP_PayableDetail.h"
#include "AP_PayableDetailbyClerk.h"
#include "AP_PayableDetailbyForeignCurrency.h"
#include "AP_PayableDetailbyForeignCurrencyandItem.h"
#include "AP_PayableDetailbyInvoice.h"
#include "AP_PayableDetailbyItem.h"
#include "AP_PayableSynthesisbyClerk.h"
#include "AP_ArisingPayableBalanceSheet.h"
#include "AP_LiabilitySynthesis.h"
#include "AP_LiabilitySynthesisbyForeignCurrency.h"
#include "AP_LiabilitySynthesisbyGroup.h"
#include "AP_AgeDebtSynthesis.h"
#include "AP_DebtAgeAnalysisbySupplier.h"
#include "AP_GeneralLiabilityofSupplierbyAgeDebt.h"
#include "AP_GeneralLiabilityofSupplierbyOverdueDebt.h"
#include "AP_OverdueDebt.h"
#include "AP_OverdueDebtAgeAnalysisbySupplier.h"
#include "AP_UnpaidInvoice.h"
#include "AP_PurchaseJournalofReturn.h"

#include "AR_ARDetail.h"
#include "AR_ARDetailbyClerk.h"
#include "AR_ARDetailbyFC.h"
#include "AR_ARDetailbyInvoice.h"
#include "AR_ARDetailbyInvoiceItemTax.h"
#include "AR_ARDetailbyItem.h"
#include "AR_ArisingARBalance.h"
#include "AR_ARminutes.h"
#include "AR_ARSheet.h"
#include "AR_ARSynthesis.h"
#include "AR_ARSynthesisbyClerkCustomer.h"
#include "AR_ARSynthesisbyDA.h"
#include "AR_ARSynthesisbyFC.h"
#include "AR_ARSynthesisbyODA.h"
#include "AR_DebtAgeAnalysisbyCustomer.h"
#include "AR_DebtAgeDetail.h"
#include "AR_DebtAgeSynthesis.h"
#include "AR_DebtOrder.h"
#include "AR_OrderDetailbyCustomer.h"
#include "AR_SAOrderDetailbyDelivery.h"
#include "AR_OrderDetailbyItem.h"
#include "AR_OrderImplementationbyClerk.h"
#include "AR_OrderImplementationbyCustomer.h"
#include "AR_OrderImplementationbyDelivery.h"
#include "AR_OrderImplementationDetail.h"
#include "AR_OrderJournal.h"
#include "AR_OrderJournal02.h"
#include "AR_OrderStatistic.h"
#include "AR_OrderSynthesisbyClerk.h"
#include "AR_OrderSynthesisbyCustomer.h"
#include "AR_OrderSynthesisbyItem.h"
#include "AR_OverdueDebtAgeAnalysisbyCustomer.h"
#include "AR_PaymentSynthesis.h"
#include "AR_PaymentSynthesisbyClerkCustomer.h"
#include "AR_ReductionDetailbyClerkItem.h"
#include "AR_ReductionDetailbyCustomerItem.h"
#include "AR_ReductionDetailbyItem.h"
#include "AR_ReductionDetailbyItemCustomer.h"
#include "AR_ReductionJournal.h"
#include "AR_ReductionSynthesisbyClerk.h"
#include "AR_ReductionSynthesisbyCustomer.h"
#include "AR_ReductionSynthesisbyCustomerItem.h"
#include "AR_ReturnDetailbyClerkItem.h"
#include "AR_ReturnDetailbyCustomer.h"
#include "AR_ReturnDetailbyCustomerInvoice.h"
#include "AR_ReturnDetailbyCustomerItem.h"
#include "AR_ReturnDetailbyItem.h"
#include "AR_ReturnJournal.h"
#include "AR_ReturnReductionJournal.h"
#include "AR_ReturnReductionVoucher.h"
#include "AR_ReturnSynthesisbyClerk.h"
#include "AR_ReturnSynthesisbyCustomer.h"
#include "AR_ReturnSynthesisbyCustomer01.h"
#include "AR_ReturnSynthesisbyCustomerItem.h"
#include "AR_SaleDetail.h"
#include "AR_SaleDetailbyClerk.h"
#include "AR_SaleDetailbyClerkCustomer.h"
#include "AR_SaleDetailbyClerkItem.h"
#include "AR_SaleDetailbyCustomer.h"
#include "AR_SaleDetailbyCustomerItem.h"
#include "AR_SaleDetailbyItem.h"
#include "AR_SaleDetailbyItemClerk.h"
#include "AR_SaleDetailbyItemCustomer.h"
#include "AR_SaleDetailbyOrder.h"
#include "AR_SaleDetailbyStock.h"
#include "AR_SaleJournal.h"
#include "AR_SalenPrimePriceDiffDetail.h"
#include "AR_SaleSheet.h"
#include "AR_SaleStatisticbyOrder.h"
#include "AR_SaleSynthesisbyClerk.h"
#include "AR_SaleSynthesisbyClerkCustomer.h"
#include "AR_SaleSynthesisbyClerkItem.h"
#include "AR_SaleSynthesisbyCustomer.h"
#include "AR_SaleSynthesisbyCustomergrp.h"
#include "AR_SaleSynthesisbyCustomerItem.h"
#include "AR_SaleSynthesisbyCustomerItem01.h"
#include "AR_SaleSynthesisbyItem.h"
#include "AR_SaleSynthesisbyItemClerk.h"
#include "AR_SDRRDetailbyClerk.h"
#include "AR_SDRRDetailbyItem.h"
#include "AR_SDRRSynthesisbyClerk.h"
#include "AR_SAUnpaidInvoice.h"


class AFX_EXT_CLASS CReportList : public CGuiView{
protected:
public:
	CWnd*			m_pReport;
	CString			m_szReportName;

	CA_DetailedCashBalanceLedger	m_wndDetailedCash;
	CA_CashBalanceLedger			m_wndCashBalance;
	CA_ReceiptJournal				m_wndReceiptJournal;
	CA_PaymentJournal				m_wndPaymentJournal;
	BA_BankDepositLedger			m_wndBankDeposit;	
	BA_BankCollationSheet			m_wndBankCollation;
	BA_BankBalanceSheet				m_wndBankBalance;
	BA_ForeignCurrencyDepositLedger	m_wndForeignCurrencyDeposit;
	AP_Purchase					m_wndPurchase;
	AP_PurchaseJournal				m_wndPurchaseJournal;
	AP_OrderDetailbyDelivery		m_wndOrderDetailbyDelivery;
	AP_POImplementationbyClerk	m_wndPOImplementationbyClerk;
	AP_POImplementationbyDelivery	m_wndPOImplementationbyDelivery;
	AP_OrderImplementationbyItem	m_wndOrderImplementationbyItem;
	AP_POImplementationDetail	m_wndPOImplementaionDetail;
	AP_OrderinDebt					m_wndOrderinDebt;
	AP_POJournal				m_wndPOJournal;
	AP_POJournal02				m_wndPOJournal02;
	AP_PurchaseDetailbyOrder		m_wndPurchaseDetailbyOrder;
	AP_PurchaseSynthesisbyOrder	m_wndPurchaseSynthesisbyOrder;
	AP_PurchaseDetail				m_wndPurchaseDetail;
	AP_PurchaseDetailbyClerk		m_wndPurchaseDetailbyClerk;
	AP_PurchaseDetailbyClerkSupplier	m_wndPurchaseDetailbyClerkSupplier;
	AP_PurchaseDetailbyItem		m_wndPurchaseDetailbyItem;
	AP_PurchaseDetailbyItemClerk	m_wndPurchaseDetailbyItemClerk;
	AP_PurchaseDetailbyItemSupplier	m_wndPurchaseDetailbyItemSupplier;
	AP_PurchaseDetailbySupplier	m_wndPurchaseDetailbySupplier;
	AP_PurchaseDetailbySupplierItem	m_wndPurchaseDetailbySupplierItem;
	AP_PurchaseDiscountReturnReductionDetailbyClerkItem	m_wndPDRRDetailbyClerkItem;
	AP_PurchaseDiscountReturnReductionSynthesisbyClerkItem m_wndPDRRSynthesisbyClerkItem;
	AP_PurchaseDiscountReturnReductionSynthesisbyItem		m_wndPDRRSynthesisbyItem;
	AP_PurchaseJournalAdm			m_wndPurchaseJournalAdm;
	AP_PurchaseJournalofReduction	m_wndPurchaseJournalofReduction;
	AP_PurchaseJournalofReturn		m_wndPurchaseJournalofReturn;
	AP_PurchaseJournalofReturnedReductionGoods	m_wndPurchaseJournalofRR;
	AP_PurchaseSheet				m_wndPurchaseSheet;
	AP_PurchaseSynthesisbyClerk	m_wndPurchaseSynthesisbyClerk;
	AP_PurchaseSynthesisbyClerkSupplier	m_wndPurchaseSynthesisbyClerkSupplier;
	AP_PurchaseSynthesisbyItem		m_wndPurchaseSynthesisbyItem;
	AP_PurchaseSynthesisbyItemClerk	m_wndPurchaseSynthesisbyItemClerk;
	AP_PurchaseSynthesisbyItemSupplier	m_wndPurchaseSynthesisbyItemSupplier;
	AP_PurchaseSynthesisbySupplier	m_wndPurchaseSynthesisbySupplier;
	AP_PurchaseSynthesisbySupplierItem	m_wndPurchaseSynthesisbySupplierItem;
	AP_ReductionGoodsbySupplierInvoice	m_wndReductionbySupplierInvoice;
	AP_ReductionGoodsbySupplierItem	m_wndReductionbySupplierItem;
	AP_ReductionPurchaseDetailbyClerkItem	m_wndReductionPurchaseDetailbyClerkItem;
	AP_ReductionPurchaseDetailbyItem	m_wndReductionPurchaseDetailbyItem;
	AP_ReductionSynthesisbySupplierItem	m_wndReductionSynthesisbySupplierItem;
	AP_ReturnedGoodsbySupplierInvoice	m_wndReturnedGoodsbySupplierInvoice;
	AP_ReturnedGoodsDetailbyItem		m_wndReturnedGoodsDetailbyItem;
	AP_ReturnGoodsbyClerkItem			m_wndReturnGoodsbyClerkItem;
	AP_ReturnSynthesisbySupplierItem	m_wndReturnSynthesisbySupplierItem;
	AP_UnpaidInvoice				m_wndUnpaidInvoice;
	AP_PayableAgeDetail			m_wndPayableAgeDetail;
	AP_PayableDetail				m_wndPayableDetail;
	AP_PayableDetailbyClerk		m_wndPayableDetailbyClerk;
	AP_PayableDetailbyForeignCurrency	m_wndPayableDetailbyForeignCurrency;
	AP_PayableDetailbyForeignCurrencyandItem	m_wndPayableDetailbyForeignCurrencyItem;
	AP_PayableDetailbyInvoice		m_wndPayableDetailbyInvoice;
	AP_PayableDetailbyItem			m_wndPayableDetailbyItem;
	AP_PayableSynthesisbyClerk		m_wndPayableSynthesisbyClerk;
	AP_ArisingPayableBalanceSheet	m_wndArisingPayableBalanceSheet;
	AP_LiabilitySynthesis			m_wndLiabilitySynthesis;
	AP_LiabilitySynthesisbyForeignCurrency	m_wndLiabilitySynthesisbyForeignCurrency;
	AP_LiabilitySynthesisbyGroup	m_wndLiabilitySynthesisbyGroup;
	AP_AgeDebtSynthesis			m_wndAgeDebtSynthesis;
	AP_DebtAgeAnalysisbySupplier	m_wndDebtAgeAnalysisbySupplier;
	AP_GeneralLiabilityofSupplierbyAgeDebt	m_wndLiabilityofSupplierbyAgeDebt;
	AP_GeneralLiabilityofSupplierbyOverdueDebt	m_wndLiabilityofSupplierbyOverdueDebt;
	AP_OverdueDebt					m_wndOverdueDebt;
	AP_OverdueDebtAgeAnalysisbySupplier	m_wndOverdueDebtAgeAnalysisbySupplier;

	AR_ARDetail	m_wndARDetail;
	AR_ARDetailbyClerk	m_wndARDetailbyClerk;
	AR_ARDetailbyFC m_wndARDetailbyFC;
	AR_ARDetailbyInvoice m_wndARDetailbyInvoice;
	AR_ARDetailbyInvoiceItemTax m_wndARDetailbyInvoiceItemTax;
	AR_ARDetailbyItem	m_wndARDetailbyItem;
	AR_ArisingARBalance	m_wndArisingARBalance;
	AR_ARminutes		m_wndARminutes;
	AR_ARSheet		m_wndARSheet;
	AR_ARSynthesis	m_wndARSynthesis;
	AR_ARSynthesisbyClerkCustomer m_wndARSynthesisbyClerkCustomer;
	AR_ARSynthesisbyDA	m_wndARSynthesisbyDA;
	AR_ARSynthesisbyFC	m_wndARSynthesisbyFC;
	AR_ARSynthesisbyODA	m_wndARSynthesisbyODA;
	AR_DebtAgeAnalysisbyCustomer	m_wndDebtAgeAnalysisbyCustomer;
	AR_DebtAgeDetail	m_wndDebtAgeDetail;
	AR_DebtAgeSynthesis	m_wndDebtAgeSynthesis;
	AR_DebtOrder	m_wndDebtOrder;
	AR_OrderDetailbyCustomer	m_wndOrderDetailbyCustomer;
	AR_SAOrderDetailbyDelivery	m_wndSAOrderDetailbyDelivery;
	AR_OrderDetailbyItem		m_wndOrderDetailbyItem;
	AR_OrderImplementationbyClerk	m_wndOrderImplementationbyClerk;
	AR_OrderImplementationbyCustomer	m_wndOrderImplementationbyCustomer;
	AR_OrderImplementationbyDelivery	m_wndOrderImplementationbyDelivery;
	AR_OrderImplementationDetail	m_wndOrderImplementationDetail;
	AR_OrderJournal	m_wndOrderJournal;
	AR_OrderJournal02	m_wndOrderJournal02;
	AR_OrderStatistic	m_wndOrderStatistic;
	AR_OrderSynthesisbyClerk	m_wndOrderSynthesisbyClerk;
	AR_OrderSynthesisbyCustomer	m_wndOrderSynthesisbyCustomer;
	AR_OrderSynthesisbyItem		m_wndOrderSynthesisbyItem;
	AR_OverdueDebtAgeAnalysisbyCustomer	m_wndODAAnalysisbyCustomer;
	AR_PaymentSynthesis	m_wndPaymentSynthesis;
	AR_PaymentSynthesisbyClerkCustomer	m_wndPaymentSynthesisbyClerkCustomer;
	AR_ReductionDetailbyClerkItem	m_wndReductionDetailbyClerkItem;
	AR_ReductionDetailbyCustomerItem	m_wndReductionDetailbyCustomerItem;
	AR_ReductionDetailbyItem	m_wndReductionDetailbyItem;
	AR_ReductionDetailbyItemCustomer	m_wndReductionDetailbyItemCustomer;
	AR_ReductionJournal	m_wndReductionJournal;
	AR_ReductionSynthesisbyClerk	m_wndReductionSynthesisbyClerk;
	AR_ReductionSynthesisbyCustomer	m_wndReductionSynthesisbyCustomer;
	AR_ReductionSynthesisbyCustomerItem	m_wndReductionSynthesisbyCustomerItem;
	AR_ReturnDetailbyClerkItem	m_wndReturnDetailbyClerkItem;
	AR_ReturnDetailbyCustomer	m_wndReturnDetailbyCustomer;
	AR_ReturnDetailbyCustomerInvoice	m_wndReturnDetailbyCustomerInvoice;
	AR_ReturnDetailbyCustomerItem	m_wndReturnDetailbyCustomerItem;
	AR_ReturnDetailbyItem	m_wndReturnDetailbyItem;
	AR_ReturnJournal	m_wndReturnJournal;
	AR_ReturnReductionJournal	m_wndReturnReductionJournal;
	AR_ReturnReductionVoucher	m_wndReturnReductionVoucher;
	AR_ReturnSynthesisbyClerk	m_wndReturnSynthesisbyClerk;
	AR_ReturnSynthesisbyCustomer	m_wndReturnSynthesisbyCustomer;
	AR_ReturnSynthesisbyCustomer01	m_wndReturnSynthesisbyCustomer01;
	AR_ReturnSynthesisbyCustomerItem	m_wndReturnSynthesisbyCustomerItem;
	AR_SaleDetail	m_wndSaleDetail;
	AR_SaleDetailbyClerk	m_wndSaleDetailbyClerk;
	AR_SaleDetailbyClerkCustomer	m_wndSaleDetailbyClerkCustomer;
	AR_SaleDetailbyClerkItem	m_wndSaleDetailbyClerkItem;
	AR_SaleDetailbyCustomer	m_wndSaleDetailbyCustomer;
	AR_SaleDetailbyCustomerItem	m_wndSaleDetailbyCustomerItem;
	AR_SaleDetailbyItem	m_wndSaleDetailbyItem;
	AR_SaleDetailbyItemClerk	m_wndSaleDetailbyItemClerk;
	AR_SaleDetailbyItemCustomer	m_wndSaleDetailbyItemCustomer;
	AR_SaleDetailbyOrder	m_wndSaleDetailbyOrder;
	AR_SaleDetailbyStock	m_wndSaleDetailbyStock;
	AR_SaleJournal	m_wndSaleJournal;
	AR_SalenPrimePriceDiffDetail	m_wndSalenPrimePriceDiffDetail;
	AR_SaleSheet	m_wndSaleSheet;
	AR_SaleStatisticbyOrder	m_wndSaleStatisticbyOrder;
	AR_SaleSynthesisbyClerk	m_wndSaleSynthesisbyClerk;
	AR_SaleSynthesisbyClerkCustomer	m_wndSaleSynthesisbyClerkCustomer;
	AR_SaleSynthesisbyClerkItem m_wndSaleSynthesisbyClerkItem;
	AR_SaleSynthesisbyCustomer	m_wndSaleSynthesisbyCustomer;
	AR_SaleSynthesisbyCustomergrp	m_wndSaleSynthesisbyCustomergrp;
	AR_SaleSynthesisbyCustomerItem	m_wndSaleSynthesisbyCustomerItem;
	AR_SaleSynthesisbyCustomerItem01	m_wndSaleSynthesisbyCustomerItem01;
	AR_SaleSynthesisbyItem	m_wndSaleSynthesisbyItem;
	AR_SaleSynthesisbyItemClerk	m_wndSaleSynthesisbyItemClerk;
	AR_SDRRDetailbyClerk	m_wndSDRRDetailbyClerk;
	AR_SDRRDetailbyItem	m_wndSDRRDetailbyItem;
	AR_SDRRSynthesisbyClerk	m_wndSDRRSynthesisbyClerk;
	AR_SAUnpaidInvoice	m_wndSAUnpaidInvoice;
	CGuiListCtrl	m_wndRptList;
	CGuiLabel		m_wndSearchLabel;
	CGuiTextCtrl	m_wndSearch;
	CString	m_szSearch;
	CGuiGroupBox	m_wndReportParameters;
	long			OnRptListLoadData(); 
	void			OnRptListSelectChange(int nOldItem, int nNewItem); 
	void			OnRptListDblClick(); 
	int			OnRptListDeleteItem(); 
	//void			OnSearchChange(); 
	//void			OnSearchSetfocus(); 
	//void			OnSearchKillfocus(); 
	int			OnSearchCheckValue(); 
	void		SelectReport(CString szName);

	CReportList();
	~CReportList();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void SetDefaultValues();
	int SetMode(int nMode);
};
#endif
