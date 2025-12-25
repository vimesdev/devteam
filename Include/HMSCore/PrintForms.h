#ifndef ACCPRINTFORMS_H
#define ACCPRINTFORMS_H


class CPrintForms
{
	//Query ID
	//Cash: Phieu phan he Quy
	//Bank: Phieu phan he Ngan hang
	//Cash_Voucher: Chung ty Quy
	//Bank_Voucher: Chung tu Ngan hang
	//Invoice Type
	//R: Thu
	//P: Chi
	//C: Co
	//D: No
	//T: Chuyen tien noi bo
public:
	CString m_szType;
	CString m_szID;
	CString m_szFromDate;
	CString	m_szToDate;
	CPrintForms(void);
	~CPrintForms(void);
	//Gop cac truy van: phieu thu chi quy, chung tu thu chi quy
	CString GetQueryString(LPCTSTR szQueryID, LPCTSTR szInvoiceID);
	//In phieu thu, phieu chi
	void PrintCashSheet(CString szInvoiceNo, CString szInvoiceType);
	void PrintSheetList();
	//void PrintCashReceipts_15(CString szVoucherNo);
	//void PrintCashReceipts_48(CString szVoucherNo);

	void PrintBankReceipts(CString szVoucherNo, CString szVoucherType);
	//void PrintBankReceipts_15(CString szVoucherNo);
	//void PrintBankReceipts_48(CString szVoucherNo);
	//In chung tu cac loai
	void PrintVoucher(CString szVoucherNo, CString szVoucherType);
	void PrintBankVoucher(CString szVoucherNo, CString szVoucherType);
	void PrintPaymentOrder(CString szInvoiceNo);
	void PrintCreditNote(CString szNoteID, CString szVoucherType);
	void PrintIESheet(CString szOrderNo, CString szOrderType, CString szOrderDate);
	void PrintTestReport();
	void PrintPurchaseList();
	void PrintMaterialReport();
	void PrintMaterialRemain();
	void PrintDistribution();
	void PrintPurchaseOrder(long nOrderID);
	void PrintCheckinPurchaseOrder(long nOrderID);
	void PrintStorageMovementDialog(long nOrderID);
	void PrintDeliveryOrder(long nOrderID);
	void PrintDDO(long nOrderID);
	void SetReference(CString szSheetType, CString szSheetID, CString szFromDate, CString szToDate);

	//Cac ham in dung trong module duoc.
	void PMS_PrintDrugDelivery(long nOrderID, bool bPreview=false);

};


#endif
