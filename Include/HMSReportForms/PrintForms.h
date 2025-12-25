#ifndef ACCPRINTFORMS_H
#define ACCPRINTFORMS_H

#include "ReportDocument.h"
#include "Excel.h"
class AFX_EXT_CLASS CPrintForms
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

protected:
	CString m_szReportName;
public:
	CString m_szType;
	CString m_szID;
	CString m_szFromDate;
	CString	m_szToDate;

	CString	m_szDepartment_ID;

	CPrintForms(void);
	~CPrintForms(void);
	CString	GetDoctorName(CString szDoctor);
	CString	GetDoctorDepartment(CString szDoctor);
	CString GetNameUser(CString UserName, CString LastName = _T(""));

	//Gop cac truy van: phieu thu chi quy, chung tu thu chi quy
	CString GetQueryString(CString szQueryID, CString szInvoiceID);
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
	//Ham in bien ban kiem nha PNK
	void PrintCheckinPurchaseOrder(long nOrderID);
	//HAM IN PHIEU DIEU CHUYEN KHO
	void PrintStorageMovementOrder(long nOrderID);
	//HAM IN PHIEU XUAT KHO(cho tu truc)
	void PrintStorageExportOrder(long nOrderID);
	//HAM IN PHIEU XUAT KHO (Hang ky gui)
	void PrintStorageExportOrder2(long nOrderID, bool bPreview = false, bool bDirect = false);
	//HAM IN PHIEU TRA LAI THUOC
	void PrintDRO(long nOrderID, CString szFilter = _T(""), CString szDepttype = _T(""));
	//HAM IN PHIEU TRA LAI NHA CUNG CAP
	void PrintPurchaseReturnOrder(long nOrderID, CString szFilter = _T(""));
	void SetReference(CString szSheetType, CString szSheetID, CString szFromDate, CString szToDate);

	//Cac ham in dung trong module duoc.
	void PMS_PrintDrugDelivery(long nOrderID, bool bPreview = false, bool bDirect = false);
	//Ham in phieu tra thuoc:(tu don ngoai tru, don ban le)
	void PrintDrugReturn(long nOrderID);
	//Ham in cac loai phieu xuat khac
	void PrintCompositeExportSheet(long nSheetID);
	//Ham in phieu xuat kho chuan chung(tru tu truc)
	void PrintDepartmentExportSheet(long nSheetID, CString szFilter = _T(""));
	// In danh sach benh nhan dung thuoc
	void OnPrintDailyViewDetail(LPCTSTR lpszOrderNo, LPCTSTR lpszDate, LPCTSTR lpszTransactionString,
		long nProduct_ID, long nProductItem_ID, LPCTSTR lpszOrderType, int nStorage_ID, CString szOrgID = _T("TM"));
	void OnPrintProcessedPrescription(LPCTSTR lpszFilter);
	void OnPrintCabinetReturnOrder(long nOrderID);
	//Ham in phieu linh thuoc.
	void PrintDDO2(long nOrderID, bool bEnablePrint = true);
	void PrintDDO2_v2(long nOrderID, bool bEnablePrint = true);
	void PrintDDO2X(CString szOrderID, bool bEnablePrint = true);
	void PrintDDO(long nOrderID);
	void PrintOldDDO2(long nOrderID);
	void PrintServiceDepartmentDelivery(long nOrderID);
	void PrintDeliveryOrder(long nOID);
	void PrintDDO2_ATDEPT(long nOrderID, bool bEnablePrint = true);
	void PrintDDO2_ATDEPT_SUB(long nOrderID, bool bEnablePrint = true);

	void PrintDrugDeliveryin(long nOrderID, bool bPreview = false, bool bDirect = false, int nNumberPage = 1);
	void PrintDrugDeliveryin_GN(long nOrderID, bool bPreview = false, bool bDirect = false, int nNumberPage = 1);
	void PrintDrugDeliveryin_HT(long nOrderID, bool bPreview = false, bool bDirect = false, int nNumberPage = 1);
	void OnPrintDelivery(long nOID, LPCTSTR lpszDate, LPCTSTR lpszDoctor);
	CString GetReportName();
	BOOL	CheckCardExpire(long nDocumentNo, long nRefIdx);
	//CAC HAM IN CHO MODULE TIEP DON
	void RM_Print();
	void RM_PrintCardInfo(long nPatientNo);
	//CAC HAM IN CHO MODULE KHAM BENH
	void EM_Print();
	void EM_OnPrintActivityTreatment(long nOrder_id);
	void EM_OnPrintPhysicalTreatment(long nOrder_id);
	void EM_PrintCabinetUsage(long nTransactionID);
	void EM_OnPrintLaserReceiptList(long nDocNo, LPCTSTR lpszDoctor);
	void EM_OnPrintPointedNote(long nDocNo, CString szFilter = _T(""));
	void EM_OnPrintRehabilitation(long nDocNo, CString m_szItemIDS, CString szOptIDXS, CString szFilters);
	void EM_OnPrintAppointmentList(CString szFromDate, CString szToDate);
	void EM_OnPrintRehabilitationCertify(long nDocNo, CString szEndDate);
	void EM_OnPrintEmergencyReceipt(long m_nDocNo, long m_nReceptIdx);
	void EM_OnPrintDetailOperation(long nDocNo);
	//CAC HAM IN CHO MODULE NOI TRU
	void TM_Print();
	void TM_DepositRequestForm(long nDocNo, CString szDeptID, long nAmount = 0);
	//Ham in danh sach BN tra thuoc
	void TM_PrintDrugReturnPatientList(long nOrderID);
	//Ham in chi phi PTTT noi tru
	void TM_PrintInSurgeryPayment(long nSOrderID, long nDocumentNo, CString szDeptID);
	//Ham in chi phi PTTT ngoai tru
	void EM_PrintSurgeryPayment(long nSOrderID, long nDocumentNo, CString szDeptID);
	//Ham in chi phi PTTT KTC
	void PrintOperationHitechMaterial(long nDocumentNo, long nOperationIdx);
	//void TM_PrintDrugCabinetUsed(CString szFromDate, CString szToDate);
	void TM_PrintDailyValuableMaterial(long nDocNo, long nOpIdx);

	void TM_OnPrintAppointmentSheet(long nDocNo, CString szDeptId, bool bPreview = true, bool bDirect = false, CString szAppointmentDate = _T(""));
	void TM_OnPrintAppointmentSheet_V2(long nDocNo, CString szDeptId, bool bPreview = true, bool bDirect = false, CString szAppointmentDate = _T(""));
	void TM_OnPrintOperationMinutes(long nOrderID);
	void TM_OnPrintOperationIVF(long nOrderID);
	void TM_OnPrintOperationSheet(long nOrderID);
	void TM_OnPrintOperationRM(long nOrderID, bool bPreview = true, bool bDirect = false);
	void TM_OnPrintOutpatientTreatmentbyBicarbonat(long nDocNo, int nRefIdx);
    void PrintSurgeryPayment(long nSOrderID, long nDocumentNo, CString szDeptID);

	void TM_OnPrintRadioactiveTreatmentFee(long nDocNo);
	//test BASS
	void TM_OnPrintGiveBirthRecord(long nPatientNo, long nDocno);
	//Phieu yeu cau XN GPB dang dung
	void TM_OnPrintAssignPathology(long nOrderID);
	//Phieu yeu cau XN GPB moi
	void TM_OnPrintAssignPathologyEX(long nOrderlineID);
	//Phiếu yêu cầu XN GPB tế bào moi
	void TM_OnPrintAssignPathologywithcell(long nOrderlineID);
	//Phiếu yêu cầu XN GPB sinh thiết cắt lạnh
	void TM_OnPrintAssignPathologycoldcut(long nOrderlineID);
	//Don thuoc sac
	void TM_OnPrintDecoctionPrescription(long nDocNo, long nBatchID);
	//Benh trinh dieu tri ho ly
	void TM_OnPrintBenhTrinhDieuTriHoLy(long nDocNo, long nRefIdx, bool isPrintActive = false);
	//Phieu truyen dich su dung cong khai thuoc
	void TM_OnPrintPhieuTDSDCongKhaiThuoc(long nBatchID, long nDocNo, CString szDate, long nTreatIdx = 0);
	void TM_OnPrintPhieuTDSDCongKhaiThuocEX(long nBatchID, long nDocNo, CString szDate, long nTreatIdx = 0);
	//Phieu cham soc dieu tri
	void TM_OnPrintPhieuChamSoc(long nDocNo, long nRefIdx, bool isPrintOne = false);
	//Phieu cham soc kham benh
	void EM_OnPrintPhieuChamSoc(long nDocNo, long nRefIdx);
	//In phi?u linh thu?c kèm tên b?nh nhân c?a khoa A3-A
	void TM_OnPrintDailyDrugEx(long nDocNo, long nOID, CString szOrderDate);

	//Don hoa tri lieu 1
	void TM_OnPrintDonHoaTriLieu1(long nDocNo, long nRefIdx);
	//Phieu dieu che
	void TM_OnPrintPhieuDieuChe(long nDocNo, long nRefIdx);
	//Don hoa tri lieu 2
	void TM_OnPrintDonHoaTriLieu2(long nDocNo, long nRefIdx);
	//Mau so 3
	void TM_OnPrintPhieuSo3(long nDocNo, long nRefIdx);
	//Hàm in phiếu lĩnh máu
	void OnPrintPhieuLinhMau(long nOrderID);
	//Hàm in phiếu yêu cầu trả lại dịch vụ
	void OnPrintPhieuYeuCauTraLaiDichVu(long nDocNo, long nInvoiceNo);
	//Hàm in giấy đăng ký thông tin hoàn ứng
	void OnPrintPhieuDangKyHoanUng(long nDocNo, long nIdx);

	//CAC HAM IN CHO MODULE VIEN PHI
	void FM_Print();
	//Ham in cac phieu duyet IPA
	void FM_PrintGeneralApprovedInOrder(long nTransactionID, bool bPreview = true);
	//Ham in chi tiet thuoc 1 BN trong phieu
	void FM_PrintDetailedApprovedInOrder(long nDocno, long nTransactionID, bool bPreview = true);
	//Ham in chi tiet thuoc trong phieu
	void FM_PrintDetailedApprovedInOrderbyDrug(long nTransactionID);
	//Ham in chi tiet tien thu theo danh muc
	void FM_PrintCollectDetailbyItem(long nCashID);
	void FM_PrintCollectDetailbyItem_(long nCashID);
	void FM_PrintSpendDetailbyItem(long nCashID);
	//Ham in phieu thanh toan ra vien
	void	FM_PrintDischargePaymentInvoice(long nDocumentNo, long nInvoiceNo);
	//Ham In phieu thanh toan ra vien (Doi tuong dich vu)
	void	FM_PrintServiceDischargePaymentInvoice(long nDocumentNo, long nInvoiceNo);
	//In phieu thanh toan ra vien (Doi tuong bao hiem)
	void	FM_PrintInsuranceDischargePaymentInvoice(long nDocumentNo, long nInvoiceNo);
	//In phieu thanh toan ra vien (Doi tuong bo doi chinh sach)
	void	FM_PrintPolicyDischargePaymentInvoice(long nDocumentNo, long nInvoiceNo);
	//In tat ca cac phieu da thanh toan
	void	FM_PrintAllServiceDischargePayment(long nDocumentNo);
	void	FM_OnPrintServiceIncomeList(CString szReceiptIDStr);
	void	FM_OnPrintServiceOutlayList(CString szPaymentIDStr);
	//

	void	FM_OnPrintServiceIncomeList2(CString szReceiptIDStr);
	void	FM_OnPrintServiceOutlayList2(CString szPaymentIDStr);
	//Phieu thu, chi BHYT
	void	FM_OnPrintInsuranceIncomeList2(CString szReceiptIDStr);
	void	FM_OnPrintInsuranceOutlayList2(CString szPaymentIDStr);
	//Phieu thu, chi QUan
	void	FM_OnPrintPolicyIncomeList2(CString szReceiptIDStr);
	void	FM_OnPrintPolicyOutlayList2(CString szPaymentIDStr);
	//Phieu yeu cau tam gui
	void    FM_OnPrintDepositRequest(long nDocumentNo, long nMoney);
	//CAC HAM IN CHO MODULE DUOC
	void PM_Print();
	void PM_PrintDrugDeliveryOrder(long nOrderID);
	void PM_PrintDrugIssueOrder(long nOrderID);
	void PM_PrintOldCabinetSheet(long nOrderID);
	void PM_PrintCabinetSheet(long nOrderID);
	void PM_PrintExportCabinetSheet(long nOrderID);
	void PM_PrintPurchaseInvoice(long nOrderID, CString szSearch);
	//Hàm in bảng xác định khối lượng công việc hoàn thành, phần công nợ//
	void MA_PrintPurchaseInvoice_Approve(long nOrderID, CString szSearch);
	void PM_PrintPurchaseInvoiceEx(long nOrderID);
	void PM_PrintOtherImport(long nOrderID);
	//Ham in danh sach BN su dung 1 thuoc, vat tu trong phieu bo sung
	void PM_PrintCabinetUsageDetail(LPCTSTR lpszOrderNo, LPCTSTR lpszDate, LPCTSTR lpszTransactionString,
		long nProduct_id, LPCTSTR lpszOrderType, int nStorage_ID, CString szOrgID = _T("TM"));
	//CAC HAM IN CHO MODULE VAT TU TRANG BI
	void MM_Print();
	//CAC HAM IN CHO MODULE PACS
	void PACS_Print();
	//CAC HAM IN CHO MODULE LIMS
	void LIMS_Print();
	//CAC HAM IN CHO MODULE BB
	void BB_PrintExport(long nDocumentNo, long nOrderID);
	void BB_PrintOtherExport(long nOrderID);

	//**********************************************
	//	Ham in nhat trinh va cong khai thuoc, vat tu
	//	nDocumentNo: So ho so benh nhan
	//	szPrintType = PM: In thuoc, MA: In vat tu, GL: In ca thuoc va vat tu.
	//***********************************************
	void	PM_PrintDailyMaterialAndDrugsOfPatient(long nDocumentNo, CString szPrintType = _T("PM"),
		CString szTransactionIDS = _T(""));
	void	PM_PrintDailyMaterialAndDrugsOfPatient_revised(long nDocumentNo, CString szPrintType = _T("PM"),
		CString szTransactionIDS = _T(""));
	//Ham in phieu xuat kho (don ban le)
	void E10_PrintSaleExport(long nOID);
	//Ham in phieu nhap kho (tra don thuoc + tra don ban le)
	void E10_PrintSaleImport(long nOID);
	//Ham in phieu nhap kho (tra tu khoa)
	void E10_PrintReturnImport(long nOID);

	//Ham in phieu nhap/xuat kho cho phieu dieu chinh
	void E10_PrintAdjustmentImport(long nOrderId);
	void E10_PrintAdjustmentExport(long nOrderId);

	//Ham in thong ke thuoc su dung noi tru
	void HMS_InwardDrugUsage(long nDocNo);
	void HMS_InwardDrugUsage(long nDocNo, int nRefIdx);

	//Ham in phieu yeu cau va ket qua xet nghiem , cdha
	void PrintTestOrder(long nOrderID, bool bPreview, bool bDirect);
	void PrintTestResult(long nOrderID, bool bPreview, bool bDirect);
	void PrintTestOrderX(long nOrderID, bool bPreview, bool bDirect);
	void PrintTestResultX(long nOrderID, bool bPreview, bool bDirect);
	void PrintPACSOrder(long nOrderID, CString szItemID, bool bPreview, bool bDirect);
	void PrintPACSResult(long nOrderID, CString szItemID, bool bPreview, bool bDirect);
	void PrintPACSOrderX(long nOrderID, CString szItemID, bool bPreview, bool bDirect, bool bDownload);
	void PrintPACSResultX(long nOrderID, CString szItemID, bool bPreview, bool bDirect, bool bDownload);
	void PM_OnPrintCROwoPatient(long nTransactionID);
	//enum eError {ERROR_SYNTAX = -3};
	//enum eQueryResult {QR_NODATA = -1, QR_SYNTAXERR = -2};
	void OnPrintFooterUser(CReportSection* rptFooter, CString szFieldEx = _T(""), CString szFieldSkip = _T(""));
	void E10_TrackItem(long nInvoiceNo, long nItemID);

	void PrintMedicalFile(CStringArray& info, bool bPreview);
	void PrintMedicalFile_Page2(long docno, CString szDept, bool bPreview, int nHtrIdx, CString szForm);
	void PrintMedicalFileEx(CStringArray& info, bool bPreview);
	void PrintMedicalFile_Cancer_2(CStringArray& info, bool bPreview);
	void PrintStorageExportOrder_v2(long nOrderID);
	void PrintSysDateTime(CReport* pRpt);
	void PrintDynamicField(CReportSection* pSect, CRecord* pRs);
	void PrintDynamicDetail(CReport* pRpt, CRecord* pRs);
	void InGiayBaoTu(long nDocumentNo);
	//In phieu dang ky dich vu theo yeu cau(Noi tru va dang ky tham kham)
	//Neu truyen vao orderid thi se in theo orderid
	void PrintServicePackage(long nDocumentNo, long nBatchId, bool printCamket = true, long nOrderId = 0, long nInvoiceNo = 0, CString szPrintBarCode = _T("N"));

	// Ham in kham suc khoe ong ty
	void PrintHealthVote(long nDocumentNo, bool bPreview, bool bDirect);

	// Ham in phoi dich vu tron goi
	void PrintTreatPackage(long nDocumentNo, long nPackageID);
	void LIMS_PrintUnapprovalOrder(long nOrderID);
	void InVongDeoTay(bool bNewborn = false);
	void PrintHMSAppointmentScheduleSheet(long nDocumentNo, long nOrderId);
	CString	FormatPrintDate(bool bHaveTime = false);
	void PARA_PrintDrugDelivery(long nOrderID, bool bPreview = false, bool bDirect = false);
	void InVienPhiTienMat(CString szClerk, CString szPaymentMethod, CString szFromDate, CString szToDate);
	void InVienPhiQR(CString szClerk, CString szPaymentMethod, CString szFromDate, CString szToDate);
};
#endif