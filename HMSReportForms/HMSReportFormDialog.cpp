#include "stdafx.h"
#include "HMSMainFrame.h"
#include "HMSReportFormDialog.h"

//Khai bao cac file header report o day
#include "./GLUnapprovedItemList.h"

//Reception
#include "./Reception/RMRegistrationPatientListReport.h"
#include "./Reception/RMGeneralExaminationInformationReport.h"
#include "./Reception/RMGeneralExaminationFeeReport.h"
#include "./Reception/RMTransferPatientStatistic.h"
#include "./Reception/RPTTotalResultHealthStaff.h"
#include "./Reception/RPTTotalDataHealthStaff.h"
#include "./Reception/RPTDataHealthStaffFilter.h"
#include "./Reception/RPTTotalHealthStaff.h"
#include "./Reception/RMTestActivities.h"
#include "./Reception/RMDetailTransferPatientStatistic.h"
#include "./Reception/RMBaocaotiemvaccinetheodonvi.h"
#include "./Reception/RMQuansonhanvien108ksk.h"
#include "./Reception/RMGeneralExaminationFeeReport_V2.h"
#include "./Reception/RMThongtintiepdonTTTM.h"
#include "./Reception/RMGeneralExaminationInformationC11AReport.h"
//VPM
#include "./VPM/VPMTotalVisitorReport.h"
#include "./VPM/VPMBaocaotonghop1.h"
#include "./VPM/VPMBaocaotonghop2.h"
#include "./VPM/VPMBaocaochitiet1.h"
#include "./VPM/VPMBaocaochitiet2.h"
#include "./VPM/VPMTongKetCaLamViec.h"
#include "./VPM/VPMLichHTCS.h"
#include "./VPM/VPMChiTietLichHTCS.h"
#include "./VPM/VPMDetailVisitorReport.h"
#include "./VPM/DanhSachLuuTru.h"
#include "./VPM/CTXHDanhSach_DangDieuTri.h"
#include "./VPM/VPM_THONGKENGUOINHAOLAI.h"
//Examination
#include "./Examination/EMParaclinicCompletionState.h"
#include "./Examination/HMSUseDrugCabinet.h"
#include "./Examination/EMThongkethuocbaohiem_5251.h"
#include "./Examination/EMThongkemabenhphongkham.h"
#include "./Examination/RPTEmployeeExam.h"
#include "./Examination/EMExamInterval.h"
#include "./Examination/EMInheritanceCenterIncome.h"
#include "./Examination/EMChiTietKetQuaKhamBenh.h"
#include "./Examination/EMBaohiemBaoViet.h"
#include "./Examination/EMParaclinicPatientList.h"
#include "./Examination/EMAgeDiseaseStatisticsReport.h"
#include "./Examination/EMBaoCaoTongHopThangTheoPK.h"
#include "./Examination/EMBCHangThangKhoaKhamC1_1.h"
#include "./Examination/EMDanhsachBNVaoVien.h"
#include "./Examination/EMDrugDeliveryListReport.h"
#include "./Examination/EMExaminationActivitiesReport.h"
#include "./Examination/EMExaminationListReport.h"
#include "./Examination/EMExaminationTreatmentActReport.h"
#include "./Examination/EMGeneralExaminationReportDialog.h"
#include "./Examination/EMInwardListReport.h"
#include "./Examination/EMInwardStatisticForDepartmentReport.h"
#include "./Examination/EMInwardStatisticReport.h"
#include "./Examination/EMObjectDiseaseStatisticsReport.h"
#include "./Examination/EMStatisticsGeneralPatientReport.h"
#include "./Examination/EMStatisticsMajorDiseasesReport.h"
#include "./Examination/EMWeekSynthesisReport.h"
#include "./Examination/EMExamListReportC13.h"
#include "./Examination/EMQtyAtExam.h"
#include "./Examination/EMSoluongkhamcacngaytrongtuan.h"
#include "./Examination/EMSoluongbenhnhankhamchuyenkhoa.h"
#include "./Examination/EMKythuatlamtaikhoaC12.h"
#include "./Examination/EMTestIncome.h"
#include "./Examination/EMTestnParaRatebyRoom.h"
#include "./Examination/EMAdmitRatebyRoom.h"
#include "./Examination/EMPatientRatebyWardType.h"
#include "./Examination/EMPatientStatbyObj.h"
#include "./Examination/EMTestIncomeAverage.h"
#include "./Examination/EMOrderRate.h"
#include "./Examination/EMMonthlyDrugIncome.h"
#include "./Examination/EMExpensiveOrder.h"
#include "./Examination/EMRexamPatient.h"
#include "./Examination/EMStatisticsMajorDiseasesReportC12.h"
#include "./Examination/EMDanhSachBenhNhanVaoVien.h"
#include "./Examination/EMObject11DiseaseStatisticsReport.h"
#include "./Examination/EMTestMoneybyPatient.h"                                                                                            
#include "./Examination/EMGeneralSoldierExamination.h"
#include "./Examination/EMDiseasebyMachine.h"
#include "./Examination/EMOperationFosteringList.h"
#include "./Examination/FMInsuranceFeeLossReportByDept.h"
#include "./Examination/EMQuanTrungTamDiTruyen.h"
#include "./Examination/EMDanhsachnguoigioithieu_TYC.h"
#include "./Examination/EMNangsuatphauthuatvien_TYC.h"
#include "./Examination/EMThongtinkhambenhTTTM.h"
#include "./Examination/HEICDListReport.h"
#include "./Examination/DuLieuBaoCaoKhoaHoc.h"
#include "./Examination/EMDanhsachBNdoHA.h"
#include "./Examination/EMBCHangThangKhoaKhamC1_1_V2.h"

//#include "./Examination/EMXTimeAverage.h"
#include "./Examination/EMServiceDrugTrack.h"
#include "./Examination/EMPatientStatbyLocation.h"
#include "./Examination/EMRoomReceptbyUser.h"
#include "./Examination/EMGeneralTestIncome.h"
#include "./Examination/EMInsuranceDrugAmount.h"
#include "./Examination/EMGeneralInsuranceExpense.h"
#include "./Examination/EMR99MoneySynthesis.h"
#include "./Examination/EMDepartmentUsageinDetail.h"
#include "./Examination/EMPrescriptionListReport.h"
#include "./Examination/EMCabinetUsage.h"
#include "./Examination/EMPatientStatbyRoom.h"
#include "./Examination/EMExpensiveOrderDetail.h"
#include "./Examination/EMTotalTestIncomeHightech.h"
#include "./Examination/EMExambySuggestion.h"
#include "./Examination/EMOperationFosteringListC12.h"
#include "./Examination/EMCTMRIStat.h"
#include "./Examination/EMPrescriptionListReportDialog.h"
#include "./Examination/EMOperationList.h"
#include "./Examination/EMDrugListByCompany.h"
#include "./Examination/EMPatientStatbyRoom2.h"
#include "./Examination/EMTestnParaRatebyRoom2.h"
#include "./Examination/EMDrugAmountbyDoctor.h"
#include "./Examination/EMIncomebyRoom.h"
#include "./Examination/EMDrugUsage.h"
#include "./Examination/EMExamMoveB10.h"
#include "./Examination/EMSODPaidExtra.h"
#include "./Examination/EMParaclinicIncomebyItem.h"
#include "./Examination/EMToothB10.h"
#include "./Examination/EMCuredToothB10.h"
#include "./Examination/EMCuredToothDetailB10.h"
#include "./Examination/SODMonthlyStatistics.h"
#include "./Examination/EMSODRewardInCalculation.h"

#include "./Examination/EMMilitaryPatientList.h"
#include "./Examination/EMBaocaocanboC1_3.h"
#include "./Examination/EMRoom51ReportByDoctor.h"
#include "./Examination/EMDiseasebyMachinePTTYC.h"
#include "./Examination/EMOperationFosteringListPTTYC.h"
#include "./Examination/EMThuThuatPhongLaserPTTYC.h"
#include "./Examination/EMDSBNHenKhamLai.h"
#include "./Examination/EMThongkebenhnhan.h"
#include "./Examination/EMDrugUsageDesc.h"
#include "./Examination/EMDetailOperationEquipment.h"
#include "./Examination/EMBCHangThangKhoaKhamAB.h"
#include "./Examination/EMParaclinicIncomebyItemAB.h"
#include "./Examination/EMTongHopKetQuaKhamBenh.h"
#include "./Examination/EMTaiChinhKhamSucKhoe.h"
#include "./Examination/EMExaminationListReport2.h"
#include "./Examination/EMDanhSachBenhNhanChuyenKhamTuTYC.h"
#include "./Examination/EMOperationListEX.h"
#include "./Examination/EM_Tonghopphieukhambenh.h"
#include "./Examination/DanhsachbenhnhanxetnghiemC12.h"
#include "./Examination/EMChiTietCLSchuathuchien_KSK.h"
#include "./Examination/TonghopketquaCLS.h"
#include "./Examination/EMSuDungDVKT_BenhnhanKSK.h"
#include "./Examination/EMSuDungDVKT_Theophong_TheogoiKSK.h"
#include "./Examination/EMExamnumberbypivot.h"
#include "./Examination/EMDrugAmountbyDoctorOrderbydesc.h"
#include "./Examination/EMBCHangThangKhoaKhamC1_1_chitiet.h"
#include "./Examination/EMThongtindieutrilaser.h"
#include "./Examination/EMDieutrilaserthammy.h"
#include "./Examination/EMThuthuattyc.h"
#include "./Examination/EMTaiChinhKhamSucKhoe_V2.h"
#include "./Examination/EMThongketkhamC11BCLC.h"
#include "./Examination/EMThuthuatnoisoityc.h"
#include "./Examination/EMDiseasebyMachineTTTM.h"
#include "./Examination/EMThongtinthuoctreoC13.h"
#include "./Examination/EMA11GeneralPatientStatistics.h"

//Fee
#include "./HospitalFee/FMTotalIncomeinsdiff.h"
#include "./HospitalFee/FMIncomePackageSummaryEX1.h"
#include "./HospitalFee/FMDOANHTHUKHAMSUCKHOE.h"
#include "./HospitalFee/FMOpenFeePatient.h"
#include "./HospitalFee/FMTempMoneyReport.h"
#include "./HospitalFee/FMServiceMedicalIncomingOutgoingReport.h"
#include "./HospitalFee/FMBookEntriesRegisterTableReport.h"
#include "./HospitalFee/FMDanhsachBNNopTien_VP.h"
#include "./HospitalFee/FMDanhSachHoaDonThuPhi.h"
#include "./HospitalFee/FMUnpaidAdvancePatientListReport.h"
#include "./HospitalFee/FMNotPayDischargeTempPatientListReport.h"
#include "./HospitalFee/FMPayMoneyPatientListReport.h"
#include "./HospitalFee/FMRationStrengthGeneralByDayReport.h"
#include "./HospitalFee/FMPaidPatientList.h"
#include "./HospitalFee/FMGeneralCollectbyDepartment.h"
#include "./HospitalFee/FMTestPatientList.h"
#include "./HospitalFee/FMRefundPatientList.h"
#include "./HospitalFee/FMCollectDetailbyItem.h"
#include "./HospitalFee/FMGeneralReportbyClerk.h"
#include "./HospitalFee/FMRefundbyDepartment.h"
#include "./HospitalFee/FMRefundDetailbyItem.h"
#include "./HospitalFee/FMAdvancePaymentList.h"
#include "./HospitalFee/FMGeneralCostInsuraceReport25aDialog.h"
#include "./HospitalFee/FMSudungthuocBHYT20a.h"
#include "./HospitalFee/FMInsuranceReport21a.h"
#include "./HospitalFee/FMInsuranceReport19a.h"
#include "./HospitalFee/FMInsuranceCost79A.h"
#include "./HospitalFee/FMGeneralInsuranceCost79ATH.h"
#include "./HospitalFee/FMOutpatientCostSynthesisbyDay.h"
#include "./HospitalFee/FMOutpatientCostSynthesisbyLine.h"
#include "./HospitalFee/FMOutpatientCostSynthesisbyDept.h"
#include "./HospitalFee/FMWeeklyReport.h"
#include "./HospitalFee/FMInsuranceFeeLossReport.h"
#include "./HospitalFee/FMDetailInsurance21aReport.h"
#include "./HospitalFee/FMFeeInvoiceCancelReport.h"
#include "./HospitalFee/FMDepositPatientList.h"
#include "./HospitalFee/FMDischargeDepositUnpaidReport.h"
#include "./HospitalFee/FMConditionDepositPatientList.h"
#include "./HospitalFee/FMGeneralServiceTreatmentCost.h"
#include "./HospitalFee/FMExpenseInsuranceTreatmentCost.h"
#include "./HospitalFee/FMReceiveInsuranceTreatmentCost.h"
#include "./HospitalFee/FMInsuranceCost80A.h"
#include "./HospitalFee/FMGeneralInsuranceCost80ATH.h"
#include "./HospitalFee/FMInsuranceTreatmentCostByDept.h"
#include "./HospitalFee/FMServiceTreatmentCostByStaff.h"
#include "./HospitalFee/FMServiceTreatmentCostByDay.h"
#include "./HospitalFee/FMFoodUnpaidPatientList.h"
#include "./HospitalFee/FMGeneralRationFeeByDay.h"
#include "./HospitalFee/FMFoodSummaryByDay.h"
#include "./HospitalFee/FMDetailCollectFeeByItem.h"
#include "./HospitalFee/FMSpendDetailbyItem_2017.h"
#include "./HospitalFee/FMUnlockPatientList.h"
#include "./HospitalFee/FMProcessedPrescriptionList.h"
#include "./HospitalFee/FMProcessedPatientList.h"
#include "./HospitalFee/FMUnpaidAdvancePatientList.h"
#include "./HospitalFee/FMUndischargedAdvancePatientList.h"
#include "./HospitalFee/FMPaidTreatmentCostSummary.h"
#include "./HospitalFee/FMServiceIncomeList.h"
#include "./HospitalFee/FMServiceOutlayList.h"
#include "./HospitalFee/FMUnlockedMoneytakerList.h"
#include "./HospitalFee/FMPostedReceiptVoucherList.h"
#include "./HospitalFee/FMPostedPaymentVoucherList.h"
#include "./HospitalFee/FMInsuranceIncomeList.h"
#include "./HospitalFee/FMInsuranceOutlayList.h"
#include "./HospitalFee/FMGeneralInsuranceIncomeList.h"
#include "./HospitalFee/FMGeneralInsuranceOutlayList.h"
#include "./HospitalFee/FMR99PaidPatientList.h"
#include "./HospitalFee/FMInsuranceReport21a1.h"
#include "./HospitalFee/FMUndischargedFoodSummary.h"
#include "./HospitalFee/FMFoodSummaryByLevel.h"
#include "./Examination/EMExamedPatientWithoutFee.h"
#include "./HospitalFee/FMInsurancePatientTechDetail.h"
#include "./HospitalFee/FMOutpatientInsuranceCost20A.h"
#include "./HospitalFee/FMOutpatientInsuranceReport21a1.h"
#include "./HospitalFee/FMOutpatientInsuranceCost80A.h"
#include "./HospitalFee/FMPaidPatientListR5x.h"
#include "./HospitalFee/FMTempSendPatientList.h"
#include "./HospitalFee/FMTempSendPatientListByDay.h"
#include "./HospitalFee/FMTempSendUnPaidPatientList.h"
#include "./HospitalFee/FMTempSendUnPaidPatientListByDay.h"
#include "./HospitalFee/FMTempSendNoOutPatientList.h"
#include "./HospitalFee/FMTempSendNoOutPatientListByDay.h"
#include "./HospitalFee/FMDepositUnpaidOutedPatientList.h"
#include "./HospitalFee/FMDepositUnpaidOutedPatientListByDay.h"
#include "./HospitalFee/FMAdmitedPatientList.h"
#include "./HospitalFee/FMAdmitedPatientListByDay.h"
#include "./HospitalFee/FMDischargedPatientList.h"
#include "./HospitalFee/FMDischargedPatientListByDay.h"
#include "./HospitalFee/FMDischargedPatientList.h"
#include "./HospitalFee/FMDischargedPaidPatientList.h"
#include "./HospitalFee/FMDischargedPaidPatientListByDay.h"
#include "./HospitalFee/FMDischargedUnpaidPatientList.h"
#include "./HospitalFee/FMDischargedUnpaidPatientListByDay.h"
#include "./HospitalFee/FMLyingPatientList.h"
#include "./HospitalFee/FMStatisticPaidPatientList.h"
#include "./HospitalFee/FMStatisticPaidPatientList2.h"
//#include "./HospitalFee/FMExamStatistic.h"
#include "./HospitalFee/FMSudungthuocA11.h"
#include "./HospitalFee/FMSudungthuocBHYT20a_Y2015.h"
#include "./HospitalFee/FMInsuranceReport21a1_Y2015.h"
#include "./HospitalFee/FMFeeCancelPatientList.h"
#include "./HospitalFee/FMPaidDischargedInsPatient.h"
#include "./HospitalFee/FMApprovedDischargedInsPatient.h"
#include "./HospitalFee/FMSudungvattuBHYT19_Y2015.h"
#include "./HospitalFee/FMServiceIncomeList2.h"
#include "./HospitalFee/FMServiceOutlayList2.h"
#include "./HospitalFee/FMPostedPaymentVoucherList2.h"
#include "./HospitalFee/FMPostedReceiptVoucherList2.h"
#include "./HospitalFee/FMExamedFeePatientRoom50.h"
#include "./HospitalFee/FMInsuranceDepositList.h"
#include "./HospitalFee/FMInsurancePostedReceiptVoucherList.h"
#include "./HospitalFee/FMInsurancePostedPaymentVoucherList.h"
#include "./HospitalFee/FMPolicyDepositList.h"
#include "./HospitalFee/FMPolicyDischargeList.h"
#include "./HospitalFee/CA_CashBook.h"
#include "./HospitalFee/FMPolicyPaidDischargeList.h"
#include "./HospitalFee/FMPolicyPostedPaymentList.h"
#include "./HospitalFee/FMPolicyPostedReceiptList.h"
#include "./HospitalFee/FMPolicyTreatmentCost.h"
#include "./HospitalFee/FMPolicyAdmitanceList.h"
#include "./HospitalFee/FMPolicyPostedPaymentListbyDay.h"
#include "./HospitalFee/FMPolicyPostedReceiptListbyDay.h"
#include "./HospitalFee/FMExportSheetList.h"
#include "./HospitalFee/FMCollectDetailbyItem_.h"
#include "./HospitalFee/FMServiceIncomeList_v2.h"
#include "./HospitalFee/FMPatientStatbyRoom2.h"
#include "./HospitalFee/FMInsUnpaidPatientFoodList.h"
#include "./HospitalFee/FMInsDepositUnPaidPatientList.h"
#include "./HospitalFee/FMSupplierPaymentList.h"
#include "./HospitalFee/FMSupplierPaymentList2.h"

#include "./HospitalFee/FMInsurancePostedReceiptVoucherListRG.h"
#include "./HospitalFee/FMInsurancePostedPaymentVoucherListRG.h"
#include "./HospitalFee/FMInsuranceDiffPayment.h"
#include "./HospitalFee/FMInsuranceReceiptSummary.h"
#include "./HospitalFee/FMInsurancePaidSummary.h"
#include "./HospitalFee/FMPolicyUnpaidDepositList.h"
#include "./HospitalFee/FMPolicyFoodFee.h"
#include "./HospitalFee/FMServicePaidSummary.h"
#include "./HospitalFee/FMInsuranceCost79A_OStt.h"
#include "./HospitalFee/FMServicePaidSummarybyDept.h"
#include "./HospitalFee/FMServicePaidSummarybyDept_tyc.h"
#include "./HospitalFee/FMServiceRefundSummarybyDept.h"
#include "./HospitalFee/FMDiscountList.h"
#include "./HospitalFee/FMFoodOrderByDay.h"
#include "./HospitalFee/FMUnpaidPatientFoodList.h"
#include "./HospitalFee/FMServiceRefundList.h"
#include "./HospitalFee/FMServiceIncomeOutlay.h"
//#include "./HospitalFee/FMInsuranceIncomeOutlay.h"
#include "./HospitalFee/FMFoodOrderByDaySummary.h"
#include "./HospitalFee/FMSpendDetailByItem.h"
#include "./HospitalFee/FMCashLockedOutsideFund.h"
#include "./HospitalFee/FMCashNotLocked.h"
#include "./HospitalFee/FMFeeFoodList.h"
#include "./HospitalFee/FMSudungthuocBHYT20a_Y2015New.h"

#include "./HospitalFee/FMSudungvattuBHYT19_Y2015_917.h"
#include "./HospitalFee/FMSudungthuocBHYT20a_Y2015_917.h"
#include "./HospitalFee/FMInsuranceReport21a1_Y2015_917.h"
#include "./HospitalFee/FMInsuranceCost79A_917.h"
#include "./HospitalFee/FMInsuranceCost80A_917.h"

#include "./HospitalFee/FMDanhSachBenhNhanMienGiam.h"
#include "./HospitalFee/FMServiceIncomeList3.h"
#include "./HospitalFee/FMServiceRefundByDept.h"
#include "./HospitalFee/FMServiceIncomeOutlayWithFree.h"
#include "./HospitalFee/FMExportFeeListButton.h"
#include "./HospitalFee/FMCollectDetailbyItem_2017.h"
#include "./HospitalFee/FMDanhSachThuChiBenhNhan.h"
#include "./HospitalFee/FMDoiXuat.h"
#include "./HospitalFee/FMInsuranceIncomeOutlay.h"
#include "./HospitalFee/FMSOMFoodPaidSummary.h"
#include "./HospitalFee/FMSOMOtherFee.h"
#include "./HospitalFee/FMInsuranceIncomeListSOM.h"
#include "./HospitalFee/FMInsurancePostedReceiptVoucherListSOM.h"
#include "./HospitalFee/FMInsurancePostedReceiptVoucherListRGSOM.h"
#include "./HospitalFee/FMInsuranceOutlayListSOM.h"
#include "./HospitalFee/FMInsurancePostedPaymentVoucherListSOM.h"
#include "./HospitalFee/FMInsurancePostedPaymentVoucherListRGSOM.h"
#include "./HospitalFee/FMInsuranceDepositListCancel.h"
#include "./HospitalFee/FMSOMBedPaidSummary.h"
#include "./HospitalFee/FMSolderInsuranceIncomeOutlay.h"
#include "./HospitalFee/FMDepositListByOtherObject.h"
#include "./HospitalFee/FMOutpatientInsuranceReport19A.h"
#include "./HospitalFee/FMOutpatientInsuranceReport19A_TrangBi.h"
#include "./HospitalFee/FMInsurancePaidSummarybyDept.h"
#include "./HospitalFee/FMInsCollectDetailbyItem_2017.h"
#include "./HospitalFee/FMReturnPackagePatientList.h"
#include "./HospitalFee/FMIncomePackagePatientList.h"
#include "./HospitalFee/FMProcessedPatientListEX.h"
#include "./HospitalFee/FMIncomePackagePatientListDetail.h"
#include "./HospitalFee/FMIncomePackageSummary.h"
#include "./HospitalFee/FMReturnPackageSummary.h"
#include "./HospitalFee/FMIncomePackageSummaryByDept.h"
#include "./HospitalFee/FMReturnPackageSummaryByDept.h"
#include "./HospitalFee/FMTotalIncomeByDoctorAB.h"
#include "./HospitalFee/FMTotalRefundByDoctorAB.h"
#include "./HospitalFee/FMTotalIncomeByFeeTypeAB.h"
#include "./HospitalFee/FMTotalRefundByFeeTypeAB.h"
#include "./HospitalFee/FMTotalIncomeByFeeTypeAllHospital.h"
#include "./HospitalFee/FMInsurancePaidSummarybyDeptByDate.h"
#include "./HospitalFee/FMBaoanhaucan_dacapan.h"
#include "./HospitalFee/FMTongHopThuQuaNganHang.h"
#include "./HospitalFee/FMChiTietThuQuaNganHang.h"
#include "./HospitalFee/FMBaoanhaucan_dathanhtoan.h"
#include "./HospitalFee/FMSOMFoodPaidSummary1.h"
#include "./HospitalFee/FMDanhSachLinhTienBoiDuongPTTT.h"
#include "./HospitalFee/FMKetQuaHoatDongThuChiPhauThuThuat.h"
#include "./HospitalFee/FMSOMI131PaidSummary.h"
#include "./HospitalFee/FMSOMI131BedPaidSummary.h"

#include "./HospitalFee/HFFoodHCKTReport.h"
#include "./HospitalFee/HFNTTTotalFood.h"
#include "./HospitalFee/FMThongKeChiPhiBHXHBQP.h"
#include "./HospitalFee/FMTotalIncomeByDoctor_UT.h"
#include "./HospitalFee/FMIncomePackageSummaryByDeptForIns.h"
#include "./HospitalFee/FMProcessedPrescriptionListEX.h"
#include "./HospitalFee/FMIncomePackageSummaryEX.h"
#include "./HospitalFee/FMReturnPackageSummaryEX.h"
#include "./HospitalFee/FMServicePaidSummarybyDeptEX.h"
#include "./HospitalFee/FMDoanhThu_dichvuTYC_TrongVien.h"
#include "./HospitalFee/FMFeeCancelPatientListEX.h"
#include "./HospitalFee/FMNTTObjectFood.h"
#include "./HospitalFee/FMHMSFoodReportHCKT.h"
#include "./HospitalFee/FMFoodPolicyPostedReceiptList.h"
#include "./HospitalFee/FMPolicyPostedReceiptVoucherList.h"
#include "./HospitalFee/FMPolicyPostedPaymentVoucherList.h"
#include "./HospitalFee/FMPolicyPaidSummarybyDept.h"
#include "./HospitalFee/FMPolicyCollectDetailbyItem_2017.h"
#include "./HospitalFee/FMPatientStatbyObjAllHospital.h"
#include "./HospitalFee/FMExaminationC12ListReport.h"
#include "./HospitalFee/FMPolicyTreatmentCostA11.h"
#include "./HospitalFee/FMCheckATMList.h"
#include "./HospitalFee/FMRefundbyDepartmentEX.h"
#include "./HospitalFee/FMInsurancePaidSummarybyDeptEX.h"
#include "./HospitalFee/FMTonghopuserthutienchuakhoaso.h"
#include "./HospitalFee/FMInsurancePaidSummarybyDeptEXA11.h"
#include "./HospitalFee/FMDeleteFeePatientList.h"
#include "./HospitalFee/FMSUDUNG_THUOC_VATTU_THEOKHOA.h"
#include "./HospitalFee/FMSUDUNG_THUOC_VATTU_THEOKHOA_DARAVIEN_DATHANHTOAN.h"
#include "./HospitalFee/FMDanhmuchopdong.h"
#include "./HospitalFee/FMEInvoicePostFailReport.h"
#include "./HospitalFee/FMFeeLossByObjectReport.h"
#include "./HospitalFee/FMTestCovid19ByObjectReport.h"
#include "./HospitalFee/FMTestCovid19nguoinha.h"
#include "./HospitalFee/FMDanhsachtralaixncovid.h"
#include "./HospitalFee/FMTestCovid19nguoinha_dathanhtoan.h"
#include "./HospitalFee/FMTheodoithuoc_vattu_dikem_dichvu_tralai.h"
#include "./HospitalFee/FMTestCovid19ByObjectReport_Version1.h"
#include "./HospitalFee/FMFeeLossByObjectReport_Ver1.h"
#include "./HospitalFee/FMDoanhthuphongkhamC11.h"
#include "./HospitalFee/FMDetailPurchaseOrder.h"
#include "./HospitalFee/FMExportSheetListForInsurance.h"
#include "./HospitalFee/FMDanhsachbnvaovien_ravien_thanhtoan.h"
#include "./HospitalFee/FMExportSheetListFromStocktoCabinet.h"
#include "./HospitalFee/FMObjectFood.h"
#include "./HospitalFee/FMCollectDetailbyItem_2022.h"
#include "./HospitalFee/FMFeeLossByObjectReport_Ver2.h"
#include "./HospitalFee/FMBangkechitiettienan.h"
#include "./HospitalFee/FMBaocaoTCN.h"
#include "./HospitalFee/FMBaocaoLechtiendaycongBH.h"
#include "./HospitalFee/FMInsuranceCost79_80AIN_80AOUT.h"
#include "./HospitalFee/FMDanhSachPhoiThanhToan.h"
#include "./HospitalFee/HMSInsuraceReportDialog.h"
#include "./HospitalFee/FMTotalIncome108Hospital.h"
#include "./HospitalFee/FMBangkechitiettienan_nn.h"
#include "./HospitalFee/FMDischargedUnpaidPatientListByDayV2.h"
#include "./HospitalFee/FMInsurancePostedReceiptVoucherList_2024.h"
#include "./HospitalFee/FMInsurancePostedPaymentVoucherList_2024.h"
#include "./HospitalFee/FMServicePaidSummarybyDept_2024.h"
#include "./HospitalFee/FMHealthExamByPackageFee.h"
#include "./HospitalFee/FMChiTietTheoDanhMuc_2024.h"
#include "./HospitalFee/FMChiTietChiTheoDanhMuc_2024.h"
#include "./HospitalFee/FMDoanhThuHauCan_2024.h"

//PM
#include "./Pharmacy/PMTreatmentDays.h"
#include "./Pharmacy/PMSlowCirculation.h"
#include "./Pharmacy/PMChiTietSuDungTheoNhom.h"
#include "./Pharmacy/PMCurrentroomReport.h"
#include "./Pharmacy/PMBaoCaoKiemKeKho.h"
#include "./Pharmacy/PMBangKePhieuNhap.h"
#include "./Pharmacy/PMBangGiaBanThuoc.h"
#include "./Pharmacy/PMBangKeChiTietNoPhaiThu.h"
#include "./Pharmacy/PMBangKeChiTietNoPhaiTra.h"
#include "./Pharmacy/PMBangKeNoPhaiThu.h"
#include "./Pharmacy/PMBangKeNoPhaiTra.h"
#include "./Pharmacy/PMPurchaseOrderReportDialog.h"
#include "./Pharmacy/PMDonthuoctonghop.h"
#include "./Pharmacy/PMPrescriptionListReportDialog.h"
#include "./Pharmacy/PMReportConditionDialog.h"
#include "./Pharmacy/PMPurchaseOrderReportDialog.h"
#include "./Pharmacy/PMSummaryImportExportInstockForStocksReportDialog.h"
#include "./Pharmacy/PMBaocaoxuatthuocchokhoatheodoituong.h"
#include "./Pharmacy/PMStockCardReportDialog.h"
#include "./Pharmacy/PMSC11AidPrescriptionList.h"
//#include "./Pharmacy/PMBaocaosudungthuochuongthan.h"
#include "./Pharmacy/PMSExportSheetList.h"
#include "./Pharmacy/PMSServiceDrugUseofOutpatient.h"
#include "./Pharmacy/PMSServiceDrugUseofInpatient.h"
#include "./Pharmacy/PMSDrugDetailBook.h"
#include "./Pharmacy/DrugLevelPermissionRpt.h"
#include "./Pharmacy/PMSDietPatientList.h"
#include "./Pharmacy/PMSGeneralDepartmentUsage.h"
#include "./Pharmacy/PMSDepartmentUsageinDetail.h"
#include "./Pharmacy/PMSImportSheetList.h"
#include "./Pharmacy/PMSGeneralStockExport.h"
#include "./Pharmacy/PMSSupplierPaymentList.h"
#include "./Pharmacy/PMVoucherList.h"
#include "./Pharmacy/PMPaidSupplierList.h"
#include "./Pharmacy/PMDrugListwithoutInvoice.h"
#include "./Pharmacy/DepartmentReturnList.h"
#include "./Pharmacy/MAMaterialUsage.h"
#include "./Pharmacy/MAMaterialUsageByDischargeDept.h"
#include "./Pharmacy/PMSInwardExportSheetList.h"
#include "./Pharmacy/PMSUnpaidOrderList.h"
#include "./Pharmacy/MAMaterialFinalAccount.h"
#include "./Pharmacy/MAMaterialUsagebyDrug.h"
#include "./Pharmacy/PMServiceDrugUsageDetail.h"
#include "./Pharmacy/PMReportConditionForm.h"
#include "./Pharmacy/PMSExportSheetListForInsurance.h"
#include "./Pharmacy/PMSExportSheetList_V2.h"
#include "./Pharmacy/MAConsignmentPatientList.h"
#include "./Pharmacy/MAConsignmentProductList.h"
#include "./Pharmacy/MAMaterialUsagebyOriginDept.h"
#include "./Pharmacy/PMMaterialUsagebyOriginDept.h"
#include "./Pharmacy/PMSGeneralStockImport.h"
#include "./Pharmacy/PMSProductSupplyPlan.h"
#include "./Pharmacy/PMSoldierDrugUsage.h"
#include "./Pharmacy/PMImportExportInstockbyCategory.h"
#include "./Pharmacy/PMDetailPurchaseOrder.h"
#include "./Pharmacy/PMLiabilitiesTrack.h"
#include "./Pharmacy/PMSDepartmentUsageinDetail_108Old.h"
#include "./Pharmacy/PMSGeneralDepartmentUsage_108Old.h"
#include "./Pharmacy/MAInwardExportSheetList.h"
#include "./Pharmacy/MALiabilitiesTrack.h"
#include "./Pharmacy/MASUnpaidOrderList.h"
#include "./Pharmacy/MASGeneralStockExport.h"
#include "./Pharmacy/MASInwardExportSheetList.h"
#include "./Pharmacy/MASDepartmentUsageinDetail.h"
#include "./Pharmacy/MAMaterialRunningLow.h"
#include "./Pharmacy/PMSDepartmentUsageinDetail3_108Old.h"
#include "./Pharmacy/PMSoldierDrugUsage2.h"
#include "./Pharmacy/MASSupplierPaymentList2.h"
#include "./Pharmacy/MASImportSheetList.h"
#include "./Pharmacy/MASProductSupplyPlan.h"
#include "./Pharmacy/MASExportSheetListForInsurance.h"
#include "./Pharmacy/PMSDepartmentUsageinDetail_Dongy.h"
#include "./Pharmacy/PMServiceDrugUsageDetail_Dongy.h"
#include "./Pharmacy/MASGeneralStockImport.h"
#include "./Pharmacy/MAReportConditionDialog.h"
#include "./Pharmacy/MADebtMaterialReport.h"
#include "./Pharmacy/MADetailHightechMaterial.h"
#include "./Pharmacy/MAReportConditionForm.h"
#include "./Pharmacy/PMSudungthuocBHYT20a.h"
#include "./Pharmacy/PMInsuranceCost80A.h"
#include "./Pharmacy/MADetailHightechMaterial2.h"
#include "./Pharmacy/PMBaocaosudungthuochuongthan.h"
#include "./Pharmacy/PMBaocaoluuchuyenthuoc.h"
#include "./Pharmacy/PMReportConditionDialog_Dongy.h"
#include "./Pharmacy/PMServiceDrugUsageDetail_DongY2.h"
#include "./Pharmacy/PMInsuranceDrugUsage.h"
#include "./Pharmacy/PMWeeklyDrugUsageDetail.h"
#include "./Pharmacy/MAMaterialUsageTrack.h"
#include "./Pharmacy/PMDSBNravien.h"
#include "./Pharmacy/MAPaymentForCompany.h"
#include "./Pharmacy/PMConfirmLiabilities.h"
#include "./Pharmacy/MASDepartmentUsageinDetail_108Old.h"
#include "./Pharmacy/MAMaterialFinalAccount2.h"
#include "./Pharmacy/PMCompareImportandPayment.h"
#include "./Pharmacy/MASSupplierPaymentList.h"
#include "./Pharmacy/MAPaidSupplierList.h"
#include "./Pharmacy/MABaocaoxuatvattuchokhoatheodoituong.h"
#include "./Pharmacy/PMPrescriptionList.h"
#include "./Pharmacy/PMUseAntibiotic.h"
#include "./Pharmacy/MAMaterialFinalAccount3.h"
#include "./Pharmacy/PMSoldierDrugUsage3.h"
#include "./Pharmacy/PMReturnList.h"
#include "./Pharmacy/MAConsignmentProductList2.h"
#include "./Pharmacy/PM_XuatDanhMucBH.h"
#include "./Pharmacy/MATotalRevenueList.h"
#include "./Pharmacy/PMDrugUnpaidList.h"
#include "./Pharmacy/PMMoveStorageList.h"
#include "./Pharmacy/MAMaterialPayment.h"
#include "./Pharmacy/PMDrugEndExpDate.h"
#include "./Pharmacy/PMSoldierDrugUsageOld.h"
#include "./Pharmacy/PMSInwardExportSheetList2.h"
#include "./Pharmacy/PMPrescriptionListReportDialog2.h"
#include "./Pharmacy/PMSProductSupplyPlan2.h"
#include "./Pharmacy/PMSThuocBHChuaMap.h"
#include "./Pharmacy/MADetailHightechMaterial3.h"
#include "./Pharmacy/PMCongGiamDinhNoiBoVIMES.h"
#include "./Pharmacy/MACongGiamDinhNoiBoVIMES.h"
#include "./Pharmacy/MAThuocBHChuaMap.h"
#include "./Pharmacy/PMBaocaothuoc.h"
#include "./Pharmacy/PMBaocaothuoc2.h"
#include "./Pharmacy/PMConfirmLiabilities2.h"
#include "./PMLiquidateContract.h"
#include "./Pharmacy/PMMaterialFinalAccount.h"
#include "./Pharmacy/PMSUseDrugCabinet.h"
#include "./Pharmacy/PMSImportPaymentSheetList.h"
#include "./Pharmacy/PMSDanhSachTuongTacThuoc.h"
#include "./Pharmacy/MASImportSheetListEX.h"
#include "./Pharmacy/MASSupplierPaymentListEX.h"
#include "./Pharmacy/MAHangVuotThau.h"
#include "./Pharmacy/PMClassWarningList.h"
#include "./Pharmacy/FMPolicyPaidSummarybyC9Dept.h"
#include "./Pharmacy/PMSoldierDrugUsageA11.h"
#include "./Pharmacy/ProductView.h"
#include "./Pharmacy/PMSBaocaochisoloccauthan.h"
#include "./Pharmacy/MABangketratiencaccongty.h"
#include "./Pharmacy/MAExportingConsignedMaterials.h"
#include "./Pharmacy/MA_BCVTTuTrucB5.h"

//LIMS
#include "./LAB/LIMSTestStaticsbyObject.h"
#include "./LIMS/LIMSPatientList.h"
#include "./LIMS/LIMSPatientList_V2.h"
#include "./LIMS/LISTestActivities.h"
#include "./LIMS/LIMSBaoCaoTongHopKhoaGPB.h"
//#include "./LIMS/LIMSTestReportByMachine.h"
#include "./LIMS/LIMSTestReport.h"
#include "./LIMS/LIMSTestReportButton.h"
#include "./LIMS/BloodBankListServicex.h"
#include "./LIMS/LIMSTestReportByMachine.h"
#include "./LIMS/LIMSTestReportByMachine_ex.h"
#include "./LIMS/LIMSStatisticPaidPatientList2.h"
#include "./LIMS/StatisticOutPatientListCTMRI.h"
#include "./LIMS/LIMSTestSetupButton.h"
#include "./LIMS/LIMSTestReportByMachineNotInSOM.h"
//#include "./LIMS/LIMSRunningCleanup.h"
#include "./LIMS/LIMSQuanLyChatLuongCLS.h"
#include "./LIMS/LIMSInwardListReport.h"
#include "./LIMS/LIMSTestPatientList.h"
#include "./LIMS/LIMSTestSetupButtonView.h"
#include "./LIMS/LIMSCheckSumButtonView.h"
#include "./LIMS/BloodMauLuuKetQuaNhomMau.h"
#include "./LIMS/LIMSTestMoneybyPatient.h"
#include "./LIMS/LIMSTestCovid19nguoinha.h"
#include "./LIMS/BloodBankListServicex_update1.h"
#include "./LIMS/LISC2ARecomSurgeryExport.h"

//PACS
#include ".\PACS\PACSReportOrderList.h"
#include "./PACS/PACSEndoscopyListReport.h"
#include "./PACS/PACSFunctionalProbeListReport.h"
#include "./PACS/PACSGeneralPatientByObjectReport.h"
#include "./PACS/PACSPatientListByResultReport.h"
#include "./PACS/PACSImageActivities.h"
#include "./PACS/PACSImageFosteringList.h"
#include "./PACS/PACSXRayStatistic.h"
#include "./PACS/PACSPatientListUseContrast.h"
#include "./PACS/PACSInPatientUseChemistry.h"
#include "./PACS/PACSOutPatientUseChemistry.h"
#include "./PACS/PACSSettlementChemistryMaterial.h"
#include "./PACS/PACSFunctionalProbeListSumeryReport.h"
#include "./PACS/PACSWaitingReport.h"
#include "./PACS/LIMSStatisticPaidPatientList.h"
#include "./PACS/PACSTotalReport.h"
#include "./PACS/PACSQtyPerformDialog.h"
#include "./PACS/PACSPerformNotMeterial.h"
#include "./PACS/PACSBOIDUONGPTTT.h"
#include "./PACS/PACSMaterialBalancesheet.h"
#include "./PACS/PACSTotalReportC8D.h"
#include "./PACS/PACSPathologyReport.h"
#include "./PACS/PACSOperationList.h"
#include "./PACS/PACSPatientListByResultReport2.h"
#include "./PACS/HMSC8DReportDrugAndMaterial.h"
#include "./PACS/PACSListPatientByAge.h"
#include "./PACS/PACS_Ngiencuukhoahoc_Xray_C8.h"
#include "./PACS/PACSPatientList.h"
#include "./PACS/PACSExportByDept.h"
#include "./PACS/PACSFunctionalProbeListReportC8C.h"
#include "./PACS/PACSGeneralPatientByObjectReportC8C.h"
#include "./PACS/PACSPatientListByResultReportC8C.h"
#include "./PACS/PACSBOIDUONGPTTTC8C.h"
#include "./PACS/PACSFunctionalProbeListSumeryReportC8C.h"
#include "./PACS/PACSWaitingReportC8C.h"
#include "./PACS/PACSQtyPerformDialogC8C.h"
#include "./PACS/PACSDanhsachBNchidinhPACS.h"
#include "./PACS/PACSThuthuatthang.h"
#include "./PACS/PACSDanhsachBNchidinhPACS_V2.h"
#include "./PACS/PACSOperationList_V2.h"
//TM
#include "./Treatment/TMGeneralExaminationInformationReport.h"
#include "./Treatment/AdmitPatientBook.h"
#include "./Treatment/TMTreatmentActivity.h"
#include "./Treatment/TMIOTransbookreport.h"
#include "./Treatment/TMTreatmentActivitybyDept.h"
#include "./Treatment/TMDetailIOTransbookReport.h"
#include "./Treatment/TMOperationFosteringList.h"
#include "./Treatment/TMDepartmentUsageinDetail.h"
#include "./Treatment/ArmyReportsDept.h"
#include "./Treatment/TMReportsDeptPatientList.h"
#include "./Treatment/TMPatientListDischarge.h"
#include "./Treatment/TMMaterialFinalAccount.h"
#include "./Treatment/TMTotalPatientListDischarge.h"
#include "./Treatment/TMTotalPatientListDischargeByDept.h"
#include "./Treatment/TMDepartmentUsageinDetailNew.h"
#include "./Treatment/TMPatientListAdmitKTM.h"
#include "./Treatment/TMPatientListEmergencyKTM.h"
#include "./Treatment/TMOperationList.h"
#include "./Treatment/TMArmyReportsDeptKTM.h"
#include "./Treatment/TMPatientListVLTL.h"
#include "./Treatment/ArmyReportsDept2.h"
#include "./Treatment/TMHoatdongcanlamsang.h"
#include "./Treatment/TMSudungthuoctutruc.h"
#include "./Treatment/TMOperationList2.h"
#include "./Treatment/TMTinhhinhthudung.h"
#include "./Treatment/TMThuchienchitieu.h"
#include "./Treatment/TMBctheodoiravaovien.h"
#include "./Treatment/TMOperationBook.h"
#include "./Treatment/RPTTreatmentAppointment.h"
#include "./Treatment/TMPatientListUseBracelet.h"
#include "./Treatment/TMSuDungDVKT.h"
#include "./Treatment/TMICD10.h"
#include "./Treatment/TM_TTTIEMTRUYEN.h"
#include "./Treatment/TMPatientListDischargeForCancerPatient.h"
#include "./Treatment/TMOperationListB10.h"
#include "./Treatment/TMMaughinhanungthu.h"
#include "./Treatment/TMDrugOnhand.h"
#include "./Treatment/TMDSbenhnhandtngoaitrutulan2.h"
#include "./Treatment/TMFallSlipperyRPT.h"
#include "./Treatment/TMDSbenhnhanA1dientim.h"
#include "./Treatment/TMDSbenhnhantheomabenh.h"
#include "./Treatment/TMDSbenhnhanchuyenkhamchuyenkhoa.h"
#include "./Treatment/TMDSbenhnhantheomabenhV2.h"
#include "./Treatment/TMDanhSachNNOLaiPB.h"
//#include "./Treatment/TMGeneralHealth.h"
#include "./Treatment/TMGeneralExaminationInformationReport.h"
#include "./Treatment/TMEndoscopyListReport.h"
#include "./Treatment/TMProcStatsReportB10.h"
#include "./Treatment/TMPatientCareAllLevel.h"
#include "./Treatment/TMDischargePatientAndCareL1.h"
#include "./Treatment/TMTotalVisitorStayin.h"


//BloodBank
#include "./BB/BloodBankListService.h"
#include "./BB/BloodBankListServicePosted.h"
#include "./BB/BloodBankListServiceUnPaid.h"
#include "./BB/BloodBankUseReportWeek.h"
#include "./BB/ReceiptListBloodBank.h"
#include "./BB/BBUnapprovedBloodBankListReportDialog.h"
#include "./BB/CBloodBankReceiptReport.h"
#include "./BB/BloodBankDetailExportReport.h"
#include "./BB/BLOODTestActivities.h"
#include "./BB/BBStockCardReportDialog.h"
#include "./BB/BBExportList.h"
#include "./BB/BBOnHandList.h"
#include "./BB/BBOtherExportList.h"
#include "./BB/BloodBankListServicePostedEX.h"
//#include "./BB/BloodBankDetailExportReportEX.h"

//SRM nghien cuu khoa hoc
#include "./SRM/SRMThuthapthongtinCLS.h"
#include "./SRM/SRMThuthapthongtinPTTT.h"
#include "./SRM/SRMThuthapthongtinsudungthuoc.h"
#include "./SRM/SRMThongkecacbenhthuonggap.h"
#include "./SRM/SRMThongkecacmatbenhtuvongcaonhat.h"
#include "./SRM/SRMThuthapthongtinkhambenh.h"
#include "./SRM/SRMThuthapthongtindieutribenhnhan.h"
#include "./SRM/SRMThuthapthongtinvaovien.h"
#include "./SRM/SRMThuthapthongtinravien.h"
#include "./SRM/SRMThuthapthongtinchuyenvien.h"
#include "./SRM/SRMQuanlythongtinluuluungBNkham.h"
#include "./SRM/SRMThuthapthongtintheomaICD.h"
#include "./SRM/SRMThuthapthongtinbenhtattheovungmien.h"
#include "./SRM/SRMBienbankiemphieu.h"
#include "./SRM/SRMBaocaohoanthien.h"
#include "./SRM/SRMBienbandanhgiacapcoso.h"
#include "./SRM/SRMPhieudanhgiacapcoso.h"
#include "./SRM/SRMPhieunhanxetcapcoso.h"
#include "./SRM/SRMDanhsachtacgiathuchien.h"
#include "./SRM/SRMDanhgiatochucthuchien.h"

//FAM Tai san trang thiet bi co dinh
#include "./FAM/RPTAllocationDepreciation.h"
#include "./FAM/RPTAssetCardStatisticList.h"
#include "./FAM/RPTAssetDetailStatisticList.h"
#include "./FAM/RPTAssetGeneralInfo.h"
#include "./FAM/RPTAssetStatisticList.h"
#include "./FAM/RPTBaoCaoChiTietTBYT.h"
#include "./FAM/RPTBaoCaoTongHopTBYT.h"
#include "./FAM/RPTFAMAssetInventoryDialog.h"
#include "./FAM/RptMachineInventoryRecord.h"
#include "./FAM/RPTStatisticMedicalDevices.h"
#include "./FAM/RPTTransferToDept.h"
#include "./FAM/RPTFAMAssetInventoryM2.h"

//ITS Tai san cong nghe thong tin van phong pham
#include "./ITS/RPTITSAssetInventory.h"
#include "./ITS/RPTITSRealAbility.h"
#include "./ITS/RPTITSRealAbilityM2.h"
//Patient Record
#include "./PR/PRThongkehosoluutruchomuon.h"

//Nutrition bao an
#include "./NT/NTTTotalFood.h"
#include "./NT/NTTObjectFood.h"
#include "./NT/NTTArmyFood.h"
#include "./NT/NTTTotalFoodEvening.h"
#include "./NT/NTTTotalFoodAt10.h"
#include "./NT/NTTTotalMilk.h"
#include "./NT/HMSFoodReportHCKT.h"
#include "./NT/TonghopQuansoBaosua.h"
#include "./NT/NTTTotalFoodQty.h"
#include "./NT/NTTTotalFoodQtyHCKT.h"
#include "./NT/TonghopQuansoBaoannguoinha.h"
#include "./NT/TonghopQuansoBaoanpttyc.h"


//TMr quan ly cong viec
#include "./TMR/SYS_TaskManagerReport.h"

//SOM PTTYC
#include "./SOM/HMSNurseModeRPT.h"
#include "./SOM/SOMThongKeTienChiTraChoKhoaPTV.h"
#include "./SOM/SOMThongKeTienChiTraChoPTV.h"
#include "./SOM/SOMThongKeTienChiTraChoThuHutBN.h"
#include "./SOM/SOMReportConditionDialog.h"
#include "./SOM/SOMPregnancyButtonView.h"
#include "./SOM/SOMMenuList.h"
#include "./SOM/SOMBCSOLUONGPTTT.h"
#include "./SOM/SOMBCSOLUONGPTTTEX.h"
#include "./SOM/SOMDANHSACHBNCHUATINHCONG.h"

// VPM
#include "./VPM/VPMTotalVisitorReport.h"
#include "./VPM/VPMChitietgoidichvu.h"
#include "./VPM/CFMServicePackageIncomeList.h"
#include "./VPM/VPMCanhbaogoisaphethan.h"
#include "./VPM/VPMTheodoicapnhatgoidichvu.h"

//HC = Nhóm hậu cần
#include "./HC/HCReportConditionDialog.h"
#include "./HC/HCBaocaoxuatvattuchokhoatheodoituong.h"
#include "./HC/HCSExportSheetListForInsurance.h"
#include "./HC/HCPurchaseOrderReportDialog.h"
#include "./HC/HCSGeneralStockImport.h"
#include "./HC/HCDepartmentReturnList.h"
#include "./HC/CHCExportByDept.h"
#include "./HC/HCExportByDeptC12.h"
#include "./HC/HCExportByDeptKHTH.h"
#include "./HC/HCDanhSachBNPhauthuatTYC.h"
//IVF = Nhóm báo cáo IVF
#include "./IVF/IVFReportConditionDialog.h"
#include "./IVF/IVFGeneralStockExport.h"
#include "./IVF/IVF_Doanhthutheokhoa.h"
#include "./IVF/IVFPrescriptionListReportDialog.h"
#include "./IVF/TMSuDungDVKT_IVF.h"
#include "./IVF/IVFStorageView_v2_Report.h"
#include "./IVF/IVFStorageTrack.h"
//GLS = Nhóm báo cáo doanh thu kính mắt
#include "./GLS/GLSDOANHTHUBANHANG.h"
#include "./GLS/GLSBAOCAOTONKHO.h"

//#include "ReportBase.h"
static int _OnReportGroupSelectChangeFnc(CWnd *pWnd, int nOld, int nNew)
{
	return ((CHMSReportFormDialog*)(pWnd->GetParent()))->OnReportGroupSelectChange(nOld, nNew);
}

static int _OnSearchCheckValueFnc(CWnd *pWnd)
{
	return ((CHMSReportFormDialog*)pWnd)->OnSearchCheckValue();
}
CHMSReportFormDialog::CHMSReportFormDialog()
{	
	m_nDlgWidth = 960;
	m_nDlgHeight = 650;
	//nIndex = 0;
}
CHMSReportFormDialog::CHMSReportFormDialog(CWnd *pParent)
{
	CGuiMainFrame* pMF = (CGuiMainFrame*) AfxGetMainWnd();
	CString szSQL;
	szSQL.Format(_T("ALTER SESSION SET OPTIMIZER_INDEX_COST_ADJ = 10"));
	pMF->ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
	m_nDlgWidth = 960;
	m_nDlgHeight = 650;
	//nIndex = 0;
	/*
	AfxOleGetMessageFilter()->EnableBusyDialog(FALSE);
	AfxOleGetMessageFilter()->EnableNotRespondingDialog(FALSE);
	*/
}
CHMSReportFormDialog::~CHMSReportFormDialog(){
	CGuiMainFrame* pMF = (CGuiMainFrame*) AfxGetMainWnd();
	CString szSQL;
	szSQL.Format(_T("ALTER SESSION SET OPTIMIZER_INDEX_COST_ADJ = 100"));
	pMF->ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
	m_arrPane.RemoveAll();
	/*
	AfxOleGetMessageFilter()->EnableBusyDialog(TRUE);
	AfxOleGetMessageFilter()->EnableNotRespondingDialog(TRUE);
	*/
}
void CHMSReportFormDialog::OnCreateComponents()
{
	//CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//pMF->PrintDischargeSheet(15479309, 0);
	//CReportBase rptBase;
	m_wndReportGroup.Create(this, CRect(5, 5, 925, 620)); 
	m_wndSearch.Create(this, 5, 625, 285, 650); 
	CListPane* pane = m_wndReportGroup.GetSubPane();
	pane->SetFontSize(9);
	//m_wndSearch.ShowWindow(SW_HIDE);
//	m_wndReportGroup.SetAutoCenter(false);
	//m_wndReportImage.Create(_T("Image"), WS_CHILD|WS_VISIBLE|SS_BITMAP|SS_CENTERIMAGE|WS_BORDER, CRect(5, 405, 955, 625), this);
	//m_wndReportImage.ShowWindow(SW_HIDE);
}
void CHMSReportFormDialog::OnInitializeComponents()
{
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	m_szModuleID = pMF->GetModuleID();
	if (pMF->GetModuleID() == _T("C12") || pMF->GetModuleID() == _T("DD") 
		|| pMF->GetModuleID() == _T("CTXH") || pMF->GetModuleID() == _T("PĐD") || pMF->GetModuleID() == _T("KHTH") || pMF->GetModuleID() == _T("PCNMT")
		|| pMF->GetModuleID() == _T("QLTN"))
	{
		m_szModuleID = _T("HC");
	}
	//m_szHospitalID = _T("BVNINHBINH");
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	//Module tiep don
	if (m_szModuleID == _T("PM") || m_szModuleID == _T("WM") || m_szModuleID == _T("MA") || m_szModuleID == _T("LIMS") || m_szModuleID == _T("TM") || m_szModuleID == _T("VPM")
		|| m_szModuleID == _T("BB") || m_szModuleID == _T("SSM") || m_szModuleID == _T("PR") || m_szModuleID == _T("NM") || m_szModuleID == _T("TMR") || m_szModuleID == _T("SOM") || m_szModuleID == _T("VPM"))
		m_wndReportGroup.SetPaneWidth(340);
	else if (m_szModuleID == _T("EM") || m_szModuleID == _T("HC") || m_szModuleID == _T("IVF") || m_szModuleID == _T("PCNMT") || m_szModuleID == _T("GLS") || m_szModuleID == _T("KHTH") || m_szModuleID == _T("QLTN"))
		m_wndReportGroup.SetPaneWidth(340);
	else
		m_wndReportGroup.SetPaneWidth(420);
}

void CHMSReportFormDialog::OnDoDataExchange(CDataExchange * pDX)
{
	DDX_Text(pDX, m_wndSearch.GetDlgCtrlID(), m_szSearch);
}


void CHMSReportFormDialog::OnSetWindowEvents()
{	
	InitReportGroup();
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	if(pMF->GetModuleID() == _T("FM"))
	{
		m_wndReportGroup.SetSingleMode(false);
	}
	else
	{
		m_wndReportGroup.SetSingleMode(true);
		if (m_wndReportGroup.m_pCurrentPane == nullptr)
			return;
		CopyPane(&(m_wndReportGroup.m_pCurrentPane->m_arrayPanes), &m_arrPane);
	}
	m_wndReportGroup.RecalcLayout();
	m_wndSearch.SetEvent(WE_CHECKVALUE, _OnSearchCheckValueFnc);
	m_wndReportGroup.GetPane()->SetCallback(_OnReportGroupSelectChangeFnc);
	EnableControls();
}	

int CHMSReportFormDialog::OnReportGroupSelectChange(int nOld, int nNew)
{ 
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	if (nNew < 0)
		return -1;
	_tprintf(_T("\nnNew: %d|nOld: %d"), nNew, nOld);
	//CDocPane::CDocPaneInfo * pi = NULL;
	//pi = (CDocPane::CDocPaneInfo*) m_wndReportGroup.m_arrayPanes.GetAt(nNew);
	//CopyPane(&(pi->m_arrayPanes), &m_arrPane);
	return m_wndReportGroup.OnMainListPaneItemChange(nOld, nNew);
} 

void CHMSReportFormDialog::InitReportGroup()
{	
	//Kiem tra goi trong module nao
	if (m_szModuleID == _T("RM"))
	{
		CreateReceptionReports();
	}
	if (m_szModuleID == _T("VPM"))
	{
		CreateVPMReports();
	}
	if (m_szModuleID == _T("EM"))
	{
		CreateExaminationReports();
	}
	if (m_szModuleID == _T("TM"))
	{
		CreateTreatmentReports();
	}
	if (m_szModuleID == _T("FM"))
	{
		CreateHospitalFeeReports();
		//CreateDynamicReport();
	}
	if (m_szModuleID == _T("PM") || m_szModuleID == _T("WM"))
	{
		CreatePMSReports();
	} 
	if (m_szModuleID == _T("MA"))
	{
		CreateMAReports();
	}
	if (m_szModuleID == _T("LIMS"))
	{
		CreateLIMSReports();
	}
	if (m_szModuleID == _T("PACS"))
	{
		CreatePACSReports();
	}
	if (m_szModuleID == _T("IPA"))
	{
		CreateIPAReports();
	}
	if (m_szModuleID == _T("BB"))
	{
		CreateBBReports();
	}
	if (m_szModuleID == _T("SRM"))
	{
		CreateSSMReports();
	}
	if (m_szModuleID == _T("PR"))
	{
		CreatePRReports();
	}
	if (m_szModuleID == _T("FAM"))
	{
		CreateFAMReports();
	}
	if (m_szModuleID == _T("ITS"))
	{
		CreateITSReports();
	}
	if (m_szModuleID == _T("NM"))
	{
		CreateNMReports();
	}
	if (m_szModuleID == _T("TMR"))
	{
		CreateTMRReports();
	}
	if (m_szModuleID == _T("SOM"))
	{
		CreateSOMReports();
	}

	if (m_szModuleID == _T("HC") || m_szModuleID == _T("PCNMT") || m_szModuleID == _T("CTXH") || m_szModuleID == _T("KHTH") || m_szModuleID == _T("KHTH"))
	{
		CreateHCReports();
	}

	if (m_szModuleID == _T("IVF"))
	{
		CreateIVFReports();
	}
	if (m_szModuleID == _T("GLS"))
	{
		CreateGLSReports();
	}
}
void CHMSReportFormDialog::CreatePMSReports()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CGuiView * newReport = NULL;
	CString tmpStr, szTemp;
	tmpStr.Empty();
	szTemp.Empty();
	CDocPane::CDocPaneInfo *obj = m_wndReportGroup.AddPane(_T("Report"));
	if (obj)
	{
		TranslateString(_T("General Report Group"), szTemp);
		tmpStr.Format(_T("A. %s"), szTemp);
		obj->AddCaption(tmpStr);

		newReport = new CPMSStockCardReportDialog(&m_wndReportGroup, 1);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Stock Card"), szTemp);
		tmpStr.Format(_T("1. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CPMSStockCardReportDialog(&m_wndReportGroup, 3);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Stock Card 2"), szTemp);
		tmpStr.Format(_T("1.1 %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);


		newReport = new CPMSStockCardReportDialog(&m_wndReportGroup, 6);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Stock Card 3"), szTemp);
		tmpStr.Format(_T("1.2 %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		//newReport = new CPMSReportConditionDialog(&m_wndReportGroup, 5);
		////newReport->Create(&m_wndReportGroup);
		////newReport->OnInitDialog();
		//TranslateString(_T("Bien ban kiem ke kho"), szTemp);
		//tmpStr.Format(_T("2. %s"), szTemp);
		//obj->Add(tmpStr, _T(""), newReport);

		newReport = new CPMReportConditionForm(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Bien ban kiem ke kho"), szTemp);
		tmpStr.Format(_T("2. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CPMSDrugDetailBook(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Item Detail Book"), szTemp);
		tmpStr.Format(_T("3. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		//newReport = new CPMSStockCardReportDialog(&m_wndReportGroup, 2);
		////newReport->Create(&m_wndReportGroup);
		////newReport->OnInitDialog();
		//TranslateString(_T("Thống kê yêu cầu thuốc chưa duyệt"), szTemp);
		//tmpStr.Format(_T("4. %s"), szTemp);
		//obj->Add(tmpStr, _T(""), newReport);

		newReport = new CGLUnapprovedItemList(&m_wndReportGroup, 2);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Unapproved Item List"), szTemp);
		tmpStr.Format(_T("4. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CPMSStockCardReportDialog(&m_wndReportGroup, 4);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Unapproved Item List 2"), szTemp);
		tmpStr.Format(_T("4.1 %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		/*newReport = new CPMCurrentroomReport(&m_wndReportGroup);
		TranslateString(_T("Báo cáo thuốc bệnh nhân theo buồng "), szTemp);
		tmpStr.Format(_T("4.2 %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);*/
		newReport = new CDanhSachTuongTacThuoc(&m_wndReportGroup);
		TranslateString(_T("Danh sách thuốc tương tác"), szTemp);
		tmpStr.Format(_T("5. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);	

		newReport = new CPMClassWarningList();
		TranslateString(_T("Danh sách cảnh báo hoạt chất"), szTemp);
		tmpStr.Format(_T("5.1 %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CPMClasschisoloccauthan(&m_wndReportGroup);
		TranslateString(_T("Báo cáo chỉ số lọc cầu thận"), szTemp);
		tmpStr.Format(_T("5.2 %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		// Nhom bc nhap kho
		TranslateString(_T("Import Drug Report Group"), szTemp);
		tmpStr.Format(_T("B. %s"), szTemp);
		obj->AddCaption(tmpStr);
		newReport = new CPMSPurchaseOrderReportDialog(&m_wndReportGroup, 1);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("General Purchase Order"), szTemp);
		tmpStr.Format(_T("5. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CPMSGeneralStockImport(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("General Stock Import"), szTemp);
		tmpStr.Format(_T("5.1- %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CPMSPurchaseOrderReportDialog(&m_wndReportGroup, 2);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Tong hop phieu nhap kho theo nha cung cap"), szTemp);
		tmpStr.Format(_T("6. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CPMSPurchaseOrderReportDialog(&m_wndReportGroup, 3);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Detail Purchase Order"), szTemp);
		tmpStr.Format(_T("7. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CPMDetailPurchaseOrder(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Detail Purchase Order 2"), szTemp);
		tmpStr.Format(_T("7.1 %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CPMSPurchaseOrderReportDialog(&m_wndReportGroup, 4);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Purchase Order Control Record"), szTemp);
		tmpStr.Format(_T("8. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CPMSPurchaseOrderReportDialog(&m_wndReportGroup, 5);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Item Import Statistic"), szTemp);
		tmpStr.Format(_T("9. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CPMDrugListwithoutInvoice(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Drug List without Invoice"), szTemp);
		tmpStr.Format(_T("10. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		//Nhap xuat kiem ke thuoc
		TranslateString(_T("Group for import - export and inventory reports"), szTemp);
		tmpStr.Format(_T("C. %s"), szTemp);
		obj->AddCaption(tmpStr);

		newReport = new CPMSReportConditionDialog(&m_wndReportGroup, 3);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("General Import Export Instock For Money Report"), szTemp);
		tmpStr.Format(_T("11. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);


		newReport = new CPMSReportConditionDialog(&m_wndReportGroup, 6);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("General Import Export Instock For Money Report"), szTemp);
		tmpStr.Format(_T("11.2 %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);
		
		newReport = new CPMSProductSupplyPlan(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Product Supply Plan"), szTemp);
		tmpStr.Format(_T("11.1 %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);


		newReport = new CPMSReportConditionDialog(&m_wndReportGroup, 3);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("General Import Export Instock For Money Report"), szTemp);
		tmpStr.Format(_T("11. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CPMSProductSupplyPlan2(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Product Supply Plan"), szTemp);
		tmpStr.Format(_T("11.2 %s 2"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CPMSReportConditionDialog_Dongy(&m_wndReportGroup, 3);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("General Import Export Instock For Money Report (Dong y"), szTemp);
		tmpStr.Format(_T("11.2 %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CrptBaocaoxuatthuocchokhoatheodoituong(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("General export to department"), szTemp);
		tmpStr.Format(_T("12. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CPMSSummaryImportExportInstockForStocksReportDialog(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Summary of import-export-instock for multi-stock report"), szTemp);
		tmpStr.Format(_T("13. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CPMImportExportInstockbyCategory(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Import Export Instock by Category"), szTemp);
		tmpStr.Format(_T("13.1 %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CDepartmentReturnList(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Department Return List"), szTemp);
		tmpStr.Format(_T("14. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		// Nhom bc su dung thuoc
		TranslateString(_T("Item Use Report Group"), szTemp);
		tmpStr.Format(_T("D. %s"), szTemp);
		obj->AddCaption(tmpStr);
		
		newReport = new CPMSPrescriptionListReportDialog(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Prescription List Report"), szTemp);
		tmpStr.Format(_T("15. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CPMPrescriptionListReportDialog2(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Prescription List Report"), szTemp);
		tmpStr.Format(_T("15.1. %s 2"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new rptDonthuoctonghop(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Don thuoc tong hop"), szTemp);
		tmpStr.Format(_T("16. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CPMSExportSheetList(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Export Sheet List"), szTemp);
		tmpStr.Format(_T("17. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CPMSExportSheetListForInsurance(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Bảng kê phiếu xuất"), szTemp);
		tmpStr.Format(_T("17.1 %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CPMSExportSheetList_V2();
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Export Sheet List"), szTemp);
		tmpStr.Format(_T("17.2 %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CPMSInwardExportSheetList(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Inward Export Sheet List"), szTemp);
		tmpStr.Format(_T("18. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CPMSInwardExportSheetList2(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Inward Export Sheet List"), szTemp);
		tmpStr.Format(_T("18.1 %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		

		newReport = new CPMSServiceDrugUseofOutpatient(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Service Drug Use of Outpatient"), szTemp);
		tmpStr.Format(_T("19. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CPMSServiceDrugUseofInpatient(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Service Drug Use of Inpatient"), szTemp);
		tmpStr.Format(_T("19.1 %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CPMInsuranceDrugUsage(&m_wndReportGroup);
		TranslateString(_T("Insurance Drug Use"), szTemp);
		tmpStr.Format(_T("19.2 %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		//20A BHYT Vien Phi
		newReport = new CFMSudungthuocBHYT20a(&m_wndReportGroup);
		////newReport->Create(&m_wndReportGroup);
		////newReport->OnInitDialog();
		TranslateString(_T("Drug by quarter of a year"), szTemp);
		tmpStr.Format(_T("20. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CPMSC11AidPrescriptionList(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("C1.1 Aid Prescription List"), szTemp);
		tmpStr.Format(_T("21- %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);	
		
		if (pMF->GetCurrentUser() == _T("duoc"))
		{
			newReport = new CDrugLevelPermissionRpt(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Drug Level Permission"), szTemp);
			tmpStr.Format(_T("21- %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);	
		}

/*			newReport = new CPMSDietPatientList(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Diet Patient List"), szTemp);
		tmpStr.Format(_T("20- %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);*/	

		newReport = new CPMSGeneralDepartmentUsage(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("General Department Usage"), szTemp);
		tmpStr.Format(_T("22- %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);	

		newReport = new CPMSGeneralDepartmentUsage_108Old(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("General Department Usage 2"), szTemp);
		tmpStr.Format(_T("22.1- %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);	

		newReport = new CPMSDepartmentUsageinDetail(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Department Usage in Detail"), szTemp);
		tmpStr.Format(_T("23- %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CPMSDepartmentUsageinDetail_108Old(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Department Usage in Detail 2"), szTemp);
		tmpStr.Format(_T("23.1- %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CTMDepartmentUsageinDetailNew(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Department Usage in Detail New"), szTemp);
		tmpStr.Format(_T("23.2 %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CPMSDepartmentUsageinDetail_Dongy(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Department Usage in Detail (Dong y)"), szTemp);
		tmpStr.Format(_T("23.3- %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CPMSImportSheetList(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Import Sheet List"), szTemp);
		tmpStr.Format(_T("24- %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CPMSImportPaymentSheetList(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Import Sheet List"), szTemp);
		tmpStr.Format(_T("24-1 %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);	


		newReport = new CPMSGeneralStockExport(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("General Stock Export"), szTemp);
		tmpStr.Format(_T("25- %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CPMSoldierDrugUsage(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Soldier Drug Usage"), szTemp);
		tmpStr.Format(_T("25.2- %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CPMSoldierDrugUsageOld(&m_wndReportGroup);		
		TranslateString(_T("Soldier Drug Usage"), szTemp);
		tmpStr.Format(_T("25.2.1- %s Old"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CPMSoldierDrugUsageA11(&m_wndReportGroup);		
		TranslateString(_T("Báo cáo quyết toán thuốc A11"), szTemp);
		tmpStr.Format(_T("25.2.2- %s Old"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CPMSoldierDrugUsage2(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Soldier Drug Usage 2"), szTemp);
		tmpStr.Format(_T("25.3- %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);


		newReport = new CFMPolicyPaidSummaryByC9Dept(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Báo cáo quyết toán (tài chính)"), szTemp);
		tmpStr.Format(_T("25.3.1- %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CPMSoldierDrugUsage3(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Báo cáo quyết toán thuốc bộ đội 3"), szTemp);
		tmpStr.Format(_T("25.4- %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CPMSSupplierPaymentList(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Supplier Payment List"), szTemp);
		tmpStr.Format(_T("26- %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CPMVoucherList(&m_wndReportGroup, 1);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Voucher List"), szTemp);
		tmpStr.Format(_T("27- %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CPMPaidSupplierList(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Paid Supplier List"), szTemp);
		tmpStr.Format(_T("28- %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CPMSUnpaidOrderList(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Unpaid Order List"), szTemp);
		tmpStr.Format(_T("29- %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CPMLiabilitiesTrack(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Bảng kê theo dõi công nợ"), szTemp);
		tmpStr.Format(_T("29.1- %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CPMConfirmLiabilities(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Confirm Liabilities"), szTemp);
		tmpStr.Format(_T("29.2- %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CPMLiquidateContract(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		tmpStr.Format(_T("29.3- Biên bản thanh lý hợp đồng"));
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CPMServiceDrugUsageDetail(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Service Drug Usage Detail"), szTemp);
		tmpStr.Format(_T("30- %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CPMServiceDrugUsageDetail_Dongy(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Service Drug Usage Detail (Dong y)"), szTemp);
		tmpStr.Format(_T("30.1- %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CPMServiceDrugUsageDetail_DongY2(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Service Drug Usage Detail (Dong y2)"), szTemp);
		tmpStr.Format(_T("30.2- %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CPMMaterialUsagebyOriginDept(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Drug Usage by Origin Dept"), szTemp);
		tmpStr.Format(_T("31- %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		//80A BHYT Vien Phi
		newReport = new CPMInsuranceCost80A(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("General Treatment Cost 80A Report (80a - BHYT)"), szTemp);
		tmpStr.Format(_T("32- %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		//BC de demo cho ben kiem thu

// 		newReport = new CPMSReportConditionDialog(&m_wndReportGroup, 7);
// 		//newReport->Create(&m_wndReportGroup);
// 		//newReport->OnInitDialog();
// 		TranslateString(_T("Thống kê danh sách thuốc hết hạn"), szTemp);
// 		tmpStr.Format(_T("33- %s"), szTemp);
// 		obj->Add(tmpStr, _T(""), newReport);


// 		newReport = new CPMBaocaoluuchuyenthuoc(&m_wndReportGroup);
// 		//newReport->Create(&m_wndReportGroup);
// 		//newReport->OnInitDialog();
// 		TranslateString(_T("Thống kê thuốc lưu chuyển"), szTemp);
// 		tmpStr.Format(_T("34- %s"), szTemp);
// 		obj->Add(tmpStr, _T(""), newReport);


// 		newReport = new CPMBaocaosudungthuochuongthan(&m_wndReportGroup);
// 		//newReport->Create(&m_wndReportGroup);
// 		//newReport->OnInitDialog();
// 		TranslateString(_T("Thống kê sử dụng thuốc gây nghiện – hướng thần"), szTemp);
// 		tmpStr.Format(_T("35- %s"), szTemp);
// 		obj->Add(tmpStr, _T(""), newReport);


		newReport = new CPMWeeklyDrugUsageDetail(&m_wndReportGroup);
		TranslateString(_T("Weekly Drug Usage Detail"), szTemp);
		tmpStr.Format(_T("36- %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CPMDSBNravien(&m_wndReportGroup);
		TranslateString(_T("Total Patient List Discharge"), szTemp);
		tmpStr.Format(_T("37- %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CPMCompareImportandPayment(&m_wndReportGroup);
		TranslateString(_T("Compare Import and Payment"), szTemp);
		tmpStr.Format(_T("38- %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CPMPrescriptionList(&m_wndReportGroup);
		TranslateString(_T("Báo cáo đối chiếu thuốc cảm quang"), szTemp);
		tmpStr.Format(_T("39- %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CPMUseAntibiotic(&m_wndReportGroup);
		TranslateString(_T("Báo cáo sử dụng kháng sinh dự phòng"), szTemp);
		tmpStr.Format(_T("40- %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CPMReturnList(&m_wndReportGroup);
		TranslateString(_T("Bảng kê chứng từ hoàn trả nhà cung cấp"), szTemp);
		tmpStr.Format(_T("41- %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CPM_XuatDanhMucBH(&m_wndReportGroup);
		TranslateString(_T("Xuất danh mục bảo hiểm"), szTemp);
		tmpStr.Format(_T("42- %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CPMDrugUnpaidList(&m_wndReportGroup);
		TranslateString(_T("Thống kê số lượng thuốc khoa dược"), szTemp);
		tmpStr.Format(_T("43- %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CPMMoveStorageList(&m_wndReportGroup);
		TranslateString(_T("Báo cáo điều chuyển kho"), szTemp);
		tmpStr.Format(_T("44- %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CPMDrugEndExpDate(&m_wndReportGroup);
		TranslateString(_T("Danh sách thuốc hết hạn"), szTemp);
		tmpStr.Format(_T("45- %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CPMSThuocBHChuaMap(&m_wndReportGroup);
		TranslateString(_T("Danh sách thuốc BH chưa MAP"), szTemp);
		tmpStr.Format(_T("46- %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CPMCongGiamDinhNoiBoVIMES(&m_wndReportGroup);
		TranslateString(_T("Cổng giám định nội bộ  VIMES"), szTemp);
		tmpStr.Format(_T("47- %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CPMMaterialFinalAccount(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		tmpStr.Format(_T("48- Bảng thanh quyết toán thuốc - hóa chất cho xét nghiệm"));
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CMAMaterialFinalAccount3(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		tmpStr.Format(_T("49- Bảng thanh quyết toán thuốc - hóa chất"));
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CPMSUseDrugCabinet(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		tmpStr.Format(_T("50- Bảng kê sử dụng tại tủ trực"));
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CPMChiTietSuDungTheoNhom();
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		tmpStr.Format(_T("51- Chi tiết sử dụng theo nhóm"));
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CLIMSTestReportByMachine(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Test Report By Machine"), szTemp);
		tmpStr.Format(_T("52- %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CPMSlowCirculation();
		//newReport->OnInitDialog();
		obj->Add(_T("53- Báo cáo thuốc chậm luân chuyển"), _T(""), newReport);

		TranslateString(_T("Nhóm báo cáo thuốc ung thư"), szTemp);
		tmpStr.Format(_T("E. %s"), szTemp);
		obj->AddCaption(tmpStr);

		newReport = new CPMBaocaothuoc(&m_wndReportGroup);
		TranslateString(_T("Báo cáo thuốc (chi tiết)"), szTemp);
		tmpStr.Format(_T("1- %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CPMBaocaothuoc2(&m_wndReportGroup);
		TranslateString(_T("Báo cáo thuốc (tổng hợp)"), szTemp);
		tmpStr.Format(_T("2- %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);


		TranslateString(_T("Nhóm báo cáo tồn thuốc tại khoa điều trị"), szTemp);
		tmpStr.Format(_T("F. %s"), szTemp);
		obj->AddCaption(tmpStr);


		newReport = new CTMDrugOnhand(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		tmpStr.Format(_T("1- Tồn thuốc, VTTH tại khoa"));
		obj->Add(tmpStr, _T(""), newReport);

		obj->AddCaption(_T("G. Nhóm khác"));
		newReport = new CPMTreatmentDays();
		obj->Add(_T("1. Số ngày giường điều trị"), _T(""), newReport);

		newReport = new CProductView();
		obj->Add(_T("2. Danh mục hàng"), _T(""), newReport);
	}
	//duyet bc
	/*
	_tprintf(_T("\nPane count: %d|obj count: %d"), obj->m_arrayPanes.GetCount(), obj->GetCount());
	_tprintf(_T("\nParent Pane count: %d"), m_wndReportGroup.m_arrayPanes.GetCount());
	obj->m_arrayPanes.RemoveAll();
	m_wndReportGroup.AddPane(_T("1"));
	m_wndReportGroup.AddPane(_T("2"));
	_tprintf(_T("\nParent Pane count: %d"), m_wndReportGroup.m_arrayPanes.GetCount());
	_tprintf(_T("\nPane count: %d|obj count: %d"), obj->m_arrayPanes.GetCount(), obj->GetCount());
	*/
	/*
	CPtrArray arrOriginPane;
	CDocPane::CDocPaneInfo * pi = NULL;
	int i = 0;
	do
	{
		pi = (CDocPane::CDocPaneInfo*) obj->m_arrayPanes.GetAt(i);
		tmpStr = pi->m_szCaption;
		if (tmpStr.MakeLower().Find(_T("tủ")) == -1)
		{
			obj->m_arrayPanes.RemoveAt(i);
		}
		else
		{
			i++;
		}
	}
	while (i < obj->m_arrayPanes.GetCount());
	*/
	//for (int i = 0; i < arrOriginPane.GetCount(); i++)
	//{
	//	pi = (CDocPane::CDocPaneInfo *) arrOriginPane.GetAt(i);
	//	if (pi->m_pWnd == NULL)
	//	{
	//		obj->AddCaption(pi->m_szCaption);
	//	}
	//	else
	//	{
	//		obj->Add(pi->m_szCaption, pi->m_szDescription, pi->m_pWnd);
	//	}
	//}
}

void CHMSReportFormDialog::CreateMAReports()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CGuiView * newReport = NULL;
	CString tmpStr, szTemp;
	tmpStr.Empty();
	szTemp.Empty();
	CDocPane::CDocPaneInfo *obj = m_wndReportGroup.AddPane(_T("Report"));
	if (obj)
	{
		TranslateString(_T("General Report Group"), szTemp);
		tmpStr.Format(_T("A. %s"), szTemp);
		obj->AddCaption(tmpStr);

		newReport = new CPMSStockCardReportDialog(&m_wndReportGroup, 1);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Stock Card"), szTemp);
		tmpStr.Format(_T("1. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CPMSStockCardReportDialog(&m_wndReportGroup, 3);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Stock Card 2"), szTemp);
		tmpStr.Format(_T("1.1 %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		//newReport = new CPMSReportConditionDialog(&m_wndReportGroup, 5);
		////newReport->Create(&m_wndReportGroup);
		////newReport->OnInitDialog();
		//TranslateString(_T("Bien ban kiem ke kho"), szTemp);
		//tmpStr.Format(_T("2. %s"), szTemp);
		//obj->Add(tmpStr, _T(""), newReport);

		newReport = new CMAReportConditionForm(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Bien ban kiem ke kho"), szTemp);
		tmpStr.Format(_T("2. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CPMSDrugDetailBook(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Item Detail Book"), szTemp);
		tmpStr.Format(_T("3. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		//BC KT dong tu ngay 12/9
// 		newReport = new CPMSStockCardReportDialog(&m_wndReportGroup, 2);
// 		//newReport->Create(&m_wndReportGroup);
// 		//newReport->OnInitDialog();
// 		TranslateString(_T("Thống kê yêu cầu vật tư chưa duyệt"), szTemp);
// 		tmpStr.Format(_T("4. %s"), szTemp);
// 		obj->Add(tmpStr, _T(""), newReport);


 		newReport = new CPMSStockCardReportDialog(&m_wndReportGroup, 4);
 		//newReport->Create(&m_wndReportGroup);
 		//newReport->OnInitDialog();
 		TranslateString(_T("Unapproved Item List 2"), szTemp);
 		tmpStr.Format(_T("4.1 %s"), szTemp);
 		obj->Add(tmpStr, _T(""), newReport);


		// Nhom bc nhap kho
		TranslateString(_T("Import Drug Report Group"), szTemp);
		tmpStr.Format(_T("B. %s"), szTemp);
		obj->AddCaption(tmpStr);
		newReport = new CPMSPurchaseOrderReportDialog(&m_wndReportGroup, 1);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("General Purchase Order"), szTemp);
		tmpStr.Format(_T("5. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CMASGeneralStockImport(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("General Stock Import"), szTemp);
		tmpStr.Format(_T("5.1- %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CMAExportingConsignedMaterials(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Exporting Consigned Materials"), szTemp);
		tmpStr.Format(_T("5.2- %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CPMSPurchaseOrderReportDialog(&m_wndReportGroup, 2);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Tong hop phieu nhap kho theo nha cung cap"), szTemp);
		tmpStr.Format(_T("6. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CPMSPurchaseOrderReportDialog(&m_wndReportGroup, 3);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Detail Purchase Order"), szTemp);
		tmpStr.Format(_T("7. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CPMDetailPurchaseOrder(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Detail Purchase Order 2"), szTemp);
		tmpStr.Format(_T("7.1 %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CPMSPurchaseOrderReportDialog(&m_wndReportGroup, 4);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Purchase Order Control Record"), szTemp);
		tmpStr.Format(_T("8. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CPMSPurchaseOrderReportDialog(&m_wndReportGroup, 5);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Item Import Statistic"), szTemp);
		tmpStr.Format(_T("9. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CPMDrugListwithoutInvoice(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Drug List without Invoice"), szTemp);
		tmpStr.Format(_T("10. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		//Nhap xuat kiem ke thuoc
		TranslateString(_T("Group for import - export and inventory reports"), szTemp);
		tmpStr.Format(_T("C. %s"), szTemp);
		obj->AddCaption(tmpStr);

		newReport = new CMASReportConditionDialog(&m_wndReportGroup, 3);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("General Import Export Instock For Money Report"), szTemp);
		tmpStr.Format(_T("11. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);
		
		newReport = new CMASProductSupplyPlan(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Product Supply Plan"), szTemp);
		tmpStr.Format(_T("11.1 %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CMABaocaoxuatvattuchokhoatheodoituong(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("General export to department"), szTemp);
		tmpStr.Format(_T("12. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CPMSSummaryImportExportInstockForStocksReportDialog(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Summary of import-export-instock for multi-stock report"), szTemp);
		tmpStr.Format(_T("13. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);


		newReport = new CPMImportExportInstockbyCategory(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Import Export Instock by Category"), szTemp);
		tmpStr.Format(_T("13.1 %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CDepartmentReturnList(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Department Return List"), szTemp);
		tmpStr.Format(_T("14. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		// Nhom bc su dung thuoc
		TranslateString(_T("Item Use Report Group"), szTemp);
		tmpStr.Format(_T("D. %s"), szTemp);
		obj->AddCaption(tmpStr);
		
		newReport = new CMASExportSheetListForInsurance(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Export Sheet List"), szTemp);
		tmpStr.Format(_T("15. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CMASInwardExportSheetList(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Inward Export Sheet List"), szTemp);
		tmpStr.Format(_T("15.1 %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CMAInwardExportSheetList(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Inward Export Sheet List 1"), szTemp);
		tmpStr.Format(_T("15.2 %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);
		
		newReport = new CPMSGeneralDepartmentUsage(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("General Department Usage"), szTemp);
		tmpStr.Format(_T("16- %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);	

		newReport = new CMASDepartmentUsageinDetail(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Department Usage in Detail"), szTemp);
		tmpStr.Format(_T("17- %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);	

		newReport = new CMASImportSheetList(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Import Sheet List"), szTemp);
		tmpStr.Format(_T("18- %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);	

		newReport = new CMASGeneralStockExport(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("General Stock Export"), szTemp);
		tmpStr.Format(_T("19- %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CMASSupplierPaymentList(&m_wndReportGroup);		
		TranslateString(_T("Supplier Payment List"), szTemp);
		tmpStr.Format(_T("20- %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CMASSupplierPaymentList2(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Supplier Payment List 2"), szTemp);
		tmpStr.Format(_T("20.1- %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CPMSUnpaidOrderList(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Unpaid Order List"), szTemp);
		tmpStr.Format(_T("20.2- %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CMABangketratiencaccongty(&m_wndReportGroup);		
		TranslateString(_T("Báo cáo trả tiền công ty hàng tháng (2023)"), szTemp);
		tmpStr.Format(_T("20.3- %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CPMVoucherList(&m_wndReportGroup, 2);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Voucher List"), szTemp);
		tmpStr.Format(_T("21- %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CMAPaidSupplierList(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Paid Supplier List"), szTemp);
		tmpStr.Format(_T("22- %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CMASUnpaidOrderList(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Unpaid Order List"), szTemp);
		tmpStr.Format(_T("22.1- %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CMALiabilitiesTrack(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Liabilities Track"), szTemp);
		tmpStr.Format(_T("22.2- %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CMAPaymentForCompany(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Payment For Company"), szTemp);
		tmpStr.Format(_T("22.3- %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);


	
		newReport = new CMAMaterialUsage(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Material Usage"), szTemp);
		tmpStr.Format(_T("23- %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CMAMaterialUsagebyOriginDept(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Material Usage by Origin Dept"), szTemp);
		tmpStr.Format(_T("23.1- %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CMAMaterialUsageByDischargeDept(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Material Usage By Dept"), szTemp);
		tmpStr.Format(_T("23-2 %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		
// 		newReport = new CMASDepartmentUsageinDetail_108Old(&m_wndReportGroup);
// 		//newReport->Create(&m_wndReportGroup);
// 		//newReport->OnInitDialog();
// 		TranslateString(_T("Department Usage in Detail 2"), szTemp);
// 		tmpStr.Format(_T("23.2- %s"), szTemp);
// 		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CMAMaterialFinalAccount(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Material Final Account"), szTemp);
		tmpStr.Format(_T("24- %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CMAMaterialFinalAccount2(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Material Final Account 2"), szTemp);
		tmpStr.Format(_T("24.1- %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CMAMaterialFinalAccount3(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Material Final Account"), szTemp);
		tmpStr.Format(_T("24.2- %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CMAMaterialUsagebyDrug(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Material Usage by Drug"), szTemp);
		tmpStr.Format(_T("25- %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CMAConsignmentPatientList(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Consignment Patient List"), szTemp);
		tmpStr.Format(_T("26- %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CMAConsignmentProductList(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Consignment Product List"), szTemp);
		tmpStr.Format(_T("27- %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CMAConsignmentProductList2(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Báo cáo hàng ký gửi chưa có hóa đơn"), szTemp);
		tmpStr.Format(_T("27.1- %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CMAMaterialRunningLow(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Material Running Low"), szTemp);
		tmpStr.Format(_T("28- %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CMADebtMaterialReport(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Debt Material Report"), szTemp);
		tmpStr.Format(_T("29- %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CMADetailHightechMaterial(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Detail Hightech Material"), szTemp);
		tmpStr.Format(_T("30- %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CMADetailHightechMaterial2(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Detail Hightech Material 2"), szTemp);
		tmpStr.Format(_T("31- %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CMADetailHightechMaterial3(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Detail Hightech Material 3"), szTemp);
		tmpStr.Format(_T("32- %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		//BC demo cho ben kiem thu
// 		newReport = new CPMSReportConditionDialog(&m_wndReportGroup, 7);
// 		//newReport->Create(&m_wndReportGroup);
// 		//newReport->OnInitDialog();
// 		TranslateString(_T("Thống kê danh sách vật tư – văn phòng phẩm hết hạn"), szTemp);
// 		tmpStr.Format(_T("32- %s"), szTemp);
// 		obj->Add(tmpStr, _T(""), newReport);


// 		newReport = new CPMBaocaoluuchuyenthuoc(&m_wndReportGroup);
// 		//newReport->Create(&m_wndReportGroup);
// 		//newReport->OnInitDialog();
// 		TranslateString(_T("Thống kê lưu chuyển vật tư – văn phòng phẩm"), szTemp);
// 		tmpStr.Format(_T("33- %s"), szTemp);
// 		obj->Add(tmpStr, _T(""), newReport);


		newReport = new CMAMaterialUsageTrack(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Tình hình sử dụng vật tư y tế DVYT"), szTemp);
		tmpStr.Format(_T("34- %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CPM_XuatDanhMucBH(&m_wndReportGroup);
		TranslateString(_T("Xuất danh mục bảo hiểm"), szTemp);
		tmpStr.Format(_T("35- %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CMATotalRevenueList(&m_wndReportGroup);
		TranslateString(_T("Bảng tổng hợp doanh thu"), szTemp);
		tmpStr.Format(_T("36- %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CMAMaterialPayment(&m_wndReportGroup);
		TranslateString(_T("Thanh toán VTTH cho các công ty"), szTemp);
		tmpStr.Format(_T("37- %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CMACongGiamDinhNoiBoVIMES(&m_wndReportGroup);
		TranslateString(_T("Cổng giám định nội bộ VIMES"), szTemp);
		tmpStr.Format(_T("38- %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CMAThuocBHChuaMap(&m_wndReportGroup);
		TranslateString(_T("Danh sách vật tư bảo hiểm chưa map"), szTemp);
		tmpStr.Format(_T("39- %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CFMOutpatientInsuranceReport19A_TrangBi(&m_wndReportGroup);
		TranslateString(_T("Báo cáo DVKT bệnh nhân BH ngoại trú trong khoa - mẫu 19A"), szTemp);
		tmpStr.Format(_T("40- %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CMA_BCVTTuTrucB5(&m_wndReportGroup);
        TranslateString(_T("Báo cáo Vật tư tủ trực B5"),szTemp);
        tmpStr.Format(_T("41- %s"), szTemp);
        obj->Add(tmpStr, _T(""), newReport);

		TranslateString(_T("NHÓM BÁO CÁO CÔNG NỢ"), szTemp);
		tmpStr.Format(_T("E. %s"), szTemp);
		obj->AddCaption(tmpStr);
		
		newReport = new CMASImportSheetListEX(&m_wndReportGroup);		
		TranslateString(_T("Bảng kê phiếu nhập kho"), szTemp);
		tmpStr.Format(_T("1- %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CMASSupplierPaymentListEX(&m_wndReportGroup);		
		TranslateString(_T("Bảng kê thanh toán nợ các công ty"), szTemp);
		tmpStr.Format(_T("2- %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);
		
		newReport = new CMAHangVuotThau();		
		TranslateString(_T("Thống kê hàng vượt thầu"), szTemp);
		tmpStr.Format(_T("3- %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

	}
}

void CHMSReportFormDialog::CreateReceptionReports()
{
	CGuiView *newReport = NULL;
	CString tmpStr, szTemp;
	tmpStr.Empty();
	szTemp.Empty();
	CDocPane::CDocPaneInfo *obj = m_wndReportGroup.AddPane(_T("Report"));
	//1st
	if (obj)
	{
		newReport = new CRMRegistrationPatientListReport(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Registration Patient List"), szTemp);
		tmpStr.Format(_T("1. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CRMBaocaotiemvaccinetheodonvi(&m_wndReportGroup);		
		TranslateString(_T("Báo cáo tiêm Vaccine theo đơn vị"), szTemp);
		tmpStr.Format(_T("1.1 %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		//2nd
		newReport = new CRMGeneralExaminationInformationReport(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("General Examination Information Report"), szTemp);
		tmpStr.Format(_T("2. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);
		//3rd
		newReport = new CRMGeneralExaminationFeeReport(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("General Examination Fee Report"), szTemp);
		tmpStr.Format(_T("3. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CRMTransferPatientStatistic(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Transfer Patient Statistic"), szTemp);
		tmpStr.Format(_T("4. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CRMDetailTransferPatientStatistic(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Chi tiết bệnh nhân chuyển tuyến lên viện"), szTemp);
		tmpStr.Format(_T("4.1 %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CFMExamedFeePatientRoom50(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Examed Fee Patient Room 50"), szTemp);
		tmpStr.Format(_T("5. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CRPTTotalResultHealthStaff(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Total Result Health Staff"), szTemp);
		tmpStr.Format(_T("6. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CRPTTotalDataHealthStaff(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Total Data Health Staff"), szTemp);
		tmpStr.Format(_T("7. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		/*newReport = new CRPTTotalDataHealthStaff(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Total Data Health Staff"), szTemp);
		tmpStr.Format(_T("7. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);*/
		newReport = new CRPTDataHealthStaffFilter(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Data Health Staff Filter"), szTemp);
		tmpStr.Format(_T("8. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CRPTTotalHealthStaff(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Total Health Staff"), szTemp);
		tmpStr.Format(_T("9. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CRMTestActivities(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Test Activities"), szTemp);
		tmpStr.Format(_T("10. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CRMQuansonhanvien108ksk(&m_wndReportGroup);		
		TranslateString(_T("Báo cáo quân số nhân viên 108 khám sức khỏe"), szTemp);
		tmpStr.Format(_T("11. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CRMGeneralExaminationFeeReport_V2(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Báo cáo doanh thu C13"), szTemp);
		tmpStr.Format(_T("12. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		//2nd
		newReport = new CRMThongtintiepdonTTTM(&m_wndReportGroup);
		TranslateString(_T("Báo cáo tiếp đón trung tâm thẩm mỹ"), szTemp);
		tmpStr.Format(_T("13. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CRMGeneralExaminationInformationC11AReport(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(L"Báo cáo tổng hợp thông tin khám bệnh C1.1-A", szTemp);
		tmpStr.Format(_T("14. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);
	}
}
void CHMSReportFormDialog::CreateVPMReports()
{
	CGuiView *newReport = NULL;
	CString tmpStr, szTemp;
	tmpStr.Empty();
	szTemp.Empty();
	CDocPane::CDocPaneInfo *obj = m_wndReportGroup.AddPane(_T("Report"));
	//1st
	if (obj)
	{
		newReport = new CVPMTotalVisitorReport(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Báo cáo chi tiết người nhà đến thăm BN"), szTemp);
		tmpStr.Format(_T("1. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);
		//2nd
		
		newReport = new CVPMChitietgoidichvu(&m_wndReportGroup);
		TranslateString(_T("Báo cáo tình hình chi tiết sử dụng gói dịch vụ"), szTemp);
		tmpStr.Format(_T("2. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);
		
		newReport = new CCFMServicePackageIncomeList(&m_wndReportGroup);
		TranslateString(_T("Doanh thu gói dịch vụ"), szTemp);
		tmpStr.Format(_T("3. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CVPMBaocaotonghop1(&m_wndReportGroup);
		TranslateString(_T("Báo cáo tổng hợp 1"), szTemp);
		tmpStr.Format(_T("4. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CVPMBaocaotonghop2(&m_wndReportGroup);
		TranslateString(_T("Báo cáo tổng hợp 2"), szTemp);
		tmpStr.Format(_T("5. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CVPMBaocaochitiet1(&m_wndReportGroup);
		TranslateString(_T("Báo cáo chi tiết 1"), szTemp);
		tmpStr.Format(_T("6. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CVPMBaocaochitiet2(&m_wndReportGroup);
		TranslateString(_T("Báo cáo chi tiết 2"), szTemp);
		tmpStr.Format(_T("7. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CVPMCanhbaogoisaphethan(&m_wndReportGroup);
		TranslateString(_T("Báo cáo cảnh báo gói sắp hết hạn"), szTemp);
		tmpStr.Format(_T("8. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CVPMTheodoicapnhatgoidichvu(&m_wndReportGroup);
		TranslateString(_T("Báo cáo theo dõi cập nhật thẻ"), szTemp);
		tmpStr.Format(_T("9. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CVPMTongKetCaLamViec(&m_wndReportGroup);
		TranslateString(_T("Báo cáo tổng kết ca làm việc"), szTemp);
		tmpStr.Format(_T("10. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CVPMLichHTCS(&m_wndReportGroup);
		TranslateString(_T("Báo cáo HTCS"), szTemp);
		tmpStr.Format(_T("11. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CVPMChiTietLichHTCS(&m_wndReportGroup);
		TranslateString(_T("Báo cáo HTCS chi tiết theo BN"), szTemp);
		tmpStr.Format(_T("12. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);


		newReport = new CVPMDetailVisitorReport(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Báo cáo sử dụng thẻ khách, thẻ ngoại trú"), szTemp);
		tmpStr.Format(_T("13. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CDanhSachLuuTru(&m_wndReportGroup);
		TranslateString(_T("Danh sách nhà lưu trú"), szTemp);
		tmpStr.Format(_T("14. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CDanhSachDieuTri(&m_wndReportGroup);
		TranslateString(_T("Danh sách Bệnh nhân đang điều trị"), szTemp);
		tmpStr.Format(_T("15. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);


		newReport = new CThongKeNguoiNhaOLai(&m_wndReportGroup);
		TranslateString(_T("Danh sách người nhà ở lại phòng bệnh"), szTemp);
		tmpStr.Format(_T("16. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);
	}
}



void CHMSReportFormDialog::CreateExaminationReports()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CGuiView *newReport = NULL;
	CString tmpStr, szTemp;
	tmpStr.Empty();
	szTemp.Empty();
	CDocPane* pDocPane = &m_wndReportGroup;
	CDocPane::CDocPaneInfo* obj=NULL;

	obj = pDocPane->AddPane(_T("Report"));
	/*if (obj){
		AddNew_(obj, _T("CEMPatientStatbyObj"));
		AddNew_(obj, _T("CEMPatientRatebyWardType"));
		AddNew_(obj, _T("CEMAdmitRatebyRoom"));
		AddNew_(obj, _T("Test"));
	}*/
	//return;
	//ở đây
	
	if (obj)
	{		
		if ((pMF->GetCurrentDepartmentID() == _T("C1.1")) ||
            (pMF->GetCurrentDepartmentID() == _T("KHTH")) ||
            (pMF->GetCurrentDepartmentID() == _T("TTTVDT")) ||
            (pMF->GetCurrentDepartmentID() == _T("AB")) ||
            (pMF->GetCurrentDepartmentID() == _T("TTHTSS") ||
             (pMF->GetCurrentDepartmentID() == _T("TYC")) ||
             (pMF->GetCurrentDepartmentID() == _T("KB_A11")) ))
		{
			if (pMF->GetCurrentUser() == _T("bvtan") || pMF->GetCurrentUser() == _T("ltthaityc") || pMF->GetCurrentUser() == _T("lhtruong"))
			{
				//11 new rpts
				tmpStr.Format(_T("New Report for C1.1 Statistic"));
				obj->AddCaption(tmpStr);

				newReport = new CEMPatientStatbyObj(&m_wndReportGroup);
				//newReport->Create(&m_wndReportGroup);
				//newReport->OnInitDialog();
				TranslateString(_T("Patient Stat by Obj"), szTemp);
				tmpStr.Format(_T("1. %s"), szTemp);
				obj->Add(tmpStr, _T(""), newReport);
				
				newReport = new CEMPatientRatebyWardType(&m_wndReportGroup);
				//newReport->Create(&m_wndReportGroup);
				//newReport->OnInitDialog();
				TranslateString(_T("Patient Rate by Ward Type"), szTemp);
				tmpStr.Format(_T("2. %s"), szTemp);
				obj->Add(tmpStr, _T(""), newReport);

				newReport = new CEMAdmitRatebyRoom(&m_wndReportGroup);
				//newReport->Create(&m_wndReportGroup);
				//newReport->OnInitDialog();
				TranslateString(_T("Admit Rate by Room"), szTemp);
				tmpStr.Format(_T("3. %s"), szTemp);
				obj->Add(tmpStr, _T(""), newReport);

				newReport = new CEMTestnParaRatebyRoom(&m_wndReportGroup);
				//newReport->Create(&m_wndReportGroup);
				//newReport->OnInitDialog();
				TranslateString(_T("Test n Para Rate by Room"), szTemp);
				tmpStr.Format(_T("4. %s"), szTemp);
				obj->Add(tmpStr, _T(""), newReport);

				newReport = new CEMTestIncome(&m_wndReportGroup);
				//newReport->Create(&m_wndReportGroup);
				//newReport->OnInitDialog();
				TranslateString(_T("Test Income"), szTemp);
				tmpStr.Format(_T("5. %s"), szTemp);
				obj->Add(tmpStr, _T(""), newReport);

				newReport = new CEMTestIncomeAverage(&m_wndReportGroup);
				//newReport->Create(&m_wndReportGroup);
				//newReport->OnInitDialog();
				TranslateString(_T("Test Income Average"), szTemp);
				tmpStr.Format(_T("6. %s"), szTemp);
				obj->Add(tmpStr, _T(""), newReport);

				newReport = new CEMGeneralTestIncome(&m_wndReportGroup);
				//newReport->Create(&m_wndReportGroup);
				//newReport->OnInitDialog();
				TranslateString(_T("General Test Income"), szTemp);
				tmpStr.Format(_T("6.1 %s"), szTemp);
				obj->Add(tmpStr, _T(""), newReport);
				
				newReport = new CEMTotalTestIncomeHightech(&m_wndReportGroup);
				//newReport->Create(&m_wndReportGroup);
				//newReport->OnInitDialog();
				TranslateString(_T("Total Test Income Hightech"), szTemp);
				tmpStr.Format(_T("6.2 %s"), szTemp);
				obj->Add(tmpStr, _T(""), newReport);

				newReport = new CEMOrderRate(&m_wndReportGroup);
				//newReport->Create(&m_wndReportGroup);
				//newReport->OnInitDialog();
				TranslateString(_T("Order Rate"), szTemp);
				tmpStr.Format(_T("7. %s"), szTemp);
				obj->Add(tmpStr, _T(""), newReport);

				newReport = new CEMMonthlyDrugIncome(&m_wndReportGroup);
				//newReport->Create(&m_wndReportGroup);
				//newReport->OnInitDialog();
				TranslateString(_T("Monthly Drug Income"), szTemp);
				tmpStr.Format(_T("8. %s"), szTemp);
				obj->Add(tmpStr, _T(""), newReport);

				newReport = new CEMInsuranceDrugAmount(&m_wndReportGroup);
				//newReport->Create(&m_wndReportGroup);
				//newReport->OnInitDialog();
				TranslateString(_T("Insurance Drug Amount"), szTemp);
				tmpStr.Format(_T("8.1 %s"), szTemp);
				obj->Add(tmpStr, _T(""), newReport);

				newReport = new CEMExpensiveOrder(&m_wndReportGroup);
				//newReport->Create(&m_wndReportGroup);
				//newReport->OnInitDialog();
				TranslateString(_T("Expensive Order"), szTemp);
				tmpStr.Format(_T("9. %s"), szTemp);
				obj->Add(tmpStr, _T(""), newReport);

				newReport = new CEMRexamPatient(&m_wndReportGroup);
				//newReport->Create(&m_wndReportGroup);
				//newReport->OnInitDialog();
				TranslateString(_T("Re-exam patient"), szTemp);
				tmpStr.Format(_T("10. %s"), szTemp);
				obj->Add(tmpStr, _T(""), newReport);
				
				newReport = new CEMTestMoneybyPatient(&m_wndReportGroup);
				//newReport->Create(&m_wndReportGroup);
				//newReport->OnInitDialog();
				TranslateString(_T("Test Money by Patient"), szTemp);
				tmpStr.Format(_T("11. %s"), szTemp);
				obj->Add(tmpStr, _T(""), newReport);

				newReport = new CEMServiceDrugTrack(&m_wndReportGroup);
				//newReport->Create(&m_wndReportGroup);
				//newReport->OnInitDialog();
				TranslateString(_T("Service Drug Track"), szTemp);
				tmpStr.Format(_T("12. %s"), szTemp);
				obj->Add(tmpStr, _T(""), newReport);

				newReport = new CEMPatientStatbyLocation(&m_wndReportGroup);
				//newReport->Create(&m_wndReportGroup);
				//newReport->OnInitDialog();
				TranslateString(_T("Patient Stat by Location"), szTemp);
				tmpStr.Format(_T("13. %s"), szTemp);
				obj->Add(tmpStr, _T(""), newReport);

				newReport = new CEMRoomReceptbyUser(&m_wndReportGroup);
				//newReport->Create(&m_wndReportGroup);
				//newReport->OnInitDialog();
				TranslateString(_T("Room Recept by User"), szTemp);
				tmpStr.Format(_T("14. %s"), szTemp);
				obj->Add(tmpStr, _T(""), newReport);

				newReport = new CEMGeneralInsuranceExpense(&m_wndReportGroup);
				//newReport->Create(&m_wndReportGroup);
				//newReport->OnInitDialog();
				TranslateString(_T("General Insurance Expense"), szTemp);
				tmpStr.Format(_T("15. %s"), szTemp);
				obj->Add(tmpStr, _T(""), newReport);

				newReport = new CEMPatientStatbyRoom(&m_wndReportGroup);
				//newReport->Create(&m_wndReportGroup);
				//newReport->OnInitDialog();
				TranslateString(_T("Patient Stat by Room"), szTemp);
				tmpStr.Format(_T("16. %s"), szTemp);
				obj->Add(tmpStr, _T(""), newReport);

				newReport = new CEMExpensiveOrderDetail(&m_wndReportGroup);
				//newReport->Create(&m_wndReportGroup);
				//newReport->OnInitDialog();
				TranslateString(_T("Expensive Order Detail"), szTemp);
				tmpStr.Format(_T("17. %s"), szTemp);
				obj->Add(tmpStr, _T(""), newReport);

				//newReport = new CEMDrugListByCompany(&m_wndReportGroup);
				//newReport->Create(&m_wndReportGroup);
				//newReport->OnInitDialog();
				//TranslateString(_T("Drug List By Company"), szTemp);
				//tmpStr.Format(_T("18. %s"), szTemp);
				//obj->Add(tmpStr, _T(""), newReport);

				

			}
			tmpStr.Format(_T("Báo cáo khu C1.1"));
			obj->AddCaption(tmpStr);
			//1st
			newReport = new CEMInwardStatisticReport(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Inward Statistics Report"), szTemp);
			tmpStr.Format(_T("1. %s"), szTemp);
			obj->Add(tmpStr, _T(""),  newReport);
			//2nd
			newReport = new CEMInwardStatisticForDepartmentReport(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Inward Statistic for Department Report"), szTemp);
			tmpStr.Format(_T("2. %s"), szTemp);
			obj->Add(tmpStr, _T(""),  newReport);
			//3rd
			newReport = new CEMExaminationListReport(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Examination List"), szTemp);
			tmpStr.Format(_T("3. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);
			//3.1
			newReport = new CEMExamListReportC13(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Examination List C1.3"), szTemp);
			tmpStr.Format(_T("3.1. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);
			//4th
			newReport = new CEMInwardListReport(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Admission Patient List"), szTemp);
			tmpStr.Format(_T("4. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);
			//5th
			newReport = new CEMStatisticsGeneralPatientReport(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Statistics General Patient Report"), szTemp);
			tmpStr.Format(_T("5. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);
			//6th
			newReport = new CEMDrugDeliveryListReport(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Drug Delivery List Report"), szTemp);
			tmpStr.Format(_T("6. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);
			//7th
			newReport = new CEMStatisticsMajorDiseasesReport(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Statistics Major Disease Report"), szTemp);
			tmpStr.Format(_T("7. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);
			//8th
			newReport = new CEMObjectDiseaseStatisticsReport(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Object Disease Statistics Report"), szTemp);
			tmpStr.Format(_T("8. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);
			//9th
			newReport = new CEMAgeDiseaseStatisticsReport(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Age Disease Statistics Report"), szTemp);
			tmpStr.Format(_T("9. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);
			//10th
			newReport = new CEMExaminationTreatmentActReport(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Examination Treatment Act Report"), szTemp);
			tmpStr.Format(_T("10. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);
			//11th
			newReport = new CEMGeneralReportC1_1(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("General Monthly Report by Department"), szTemp);
			tmpStr.Format(_T("11. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CSODMonthlyStatistics(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Service On Demand Monthly Statistics"), szTemp);
			tmpStr.Format(_T("12. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);
			//12th
			//newReport = new CEMWeekSynthesisReport(&m_wndReportGroup);
			////newReport->Create(&m_wndReportGroup);
			////newReport->OnInitDialog();
			//TranslateString(_T("Weekly Synthesis Report"), szTemp);
			//tmpStr.Format(_T("12. %s"), szTemp);
			//obj->Add(tmpStr, _T(""), newReport);
			//13th
			newReport = new CRptBCHangThangKhoaKhamC1_1(&m_wndReportGroup);			
			TranslateString(_T("C1 Monthly Report"), szTemp);
			tmpStr.Format(_T("13. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			//newReport = new CEMExamnumberbypivot();
			//obj->Add(_T("13.1 C1 Monthly Report"), _T(""), newReport);
			newReport = new CRptBCHangThangKhoaKhamC1_1_Chitiet(&m_wndReportGroup);			
			TranslateString(_T("Báo cáo tháng khoa khám bệnh - chi tiết theo ngày"), szTemp);
			tmpStr.Format(_T("13.1 %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			//newReport = new CEMExamnumberbypivot();
			//obj->Add(_T("13.1 C1 Monthly Report"), _T(""), newReport);
			newReport = new CRptBCHangThangKhoaKhamC1_1_V2(&m_wndReportGroup);			
			TranslateString(_T("Báo cáo tháng khoa khám bệnh"), szTemp);
			tmpStr.Format(_T("13.2 %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);



			//14th
			newReport = new CEMGeneralSoldierExamination(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("General Soldier Examination"), szTemp);
			tmpStr.Format(_T("14. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			/*if (pMF->GetCurrentDepartmentID() == _T("C15"))
			{*/
				//15th
				newReport = new CEMDiseasebyMachine(&m_wndReportGroup);
				//newReport->Create(&m_wndReportGroup);
				//newReport->OnInitDialog();
				TranslateString(_T("Disease by Machine Report"), szTemp);
				tmpStr.Format(_T("15. %s"), szTemp);
				obj->Add(tmpStr, _T(""), newReport);

				newReport = new CEMOperationFosteringList(&m_wndReportGroup);
				//newReport->Create(&m_wndReportGroup);
				//newReport->OnInitDialog();
				TranslateString(_T("Operation Fostering List"), szTemp);
				tmpStr.Format(_T("16. %s"), szTemp);
				obj->Add(tmpStr, _T(""), newReport);

				newReport = new CEMR99MoneySynthesis(&m_wndReportGroup);
				//newReport->Create(&m_wndReportGroup);
				//newReport->OnInitDialog();
				TranslateString(_T("Required Room Money Synthesis"), szTemp);
				tmpStr.Format(_T("17. %s"), szTemp);
				obj->Add(tmpStr, _T(""), newReport);

				newReport = new CEMOperationList(&m_wndReportGroup);
				//newReport->Create(&m_wndReportGroup);
				//newReport->OnInitDialog();
				TranslateString(_T("B10 TTTC"), szTemp);
				tmpStr.Format(_T("18. %s"), szTemp);
				obj->Add(tmpStr, _T(""), newReport);

				newReport = new CEMExamMoveB10(&m_wndReportGroup);
				//newReport->Create(&m_wndReportGroup);
				//newReport->OnInitDialog();
				TranslateString(_T("B10 BC BN theo yêu cầu"), szTemp);
				tmpStr.Format(_T("19. %s"), szTemp);
				obj->Add(tmpStr, _T(""), newReport);

				newReport = new CEMToothB10(&m_wndReportGroup);
				//newReport->Create(&m_wndReportGroup);
				//newReport->OnInitDialog();
				TranslateString(_T("B10 BC số liệu"), szTemp);
				tmpStr.Format(_T("20. %s"), szTemp);
				obj->Add(tmpStr, _T(""), newReport);

				newReport = new CEMCuredToothB10(&m_wndReportGroup);
				//newReport->Create(&m_wndReportGroup);
				//newReport->OnInitDialog();
				TranslateString(_T("B10 BC nội dung khám"), szTemp);
				tmpStr.Format(_T("21. %s"), szTemp);
				obj->Add(tmpStr, _T(""), newReport);

				newReport = new CEMCuredToothDetailB10(&m_wndReportGroup);
				//newReport->Create(&m_wndReportGroup);
				//newReport->OnInitDialog();
				TranslateString(_T("B10 BC nội dung khám chi tiết"), szTemp);
				tmpStr.Format(_T("22. %s"), szTemp);
				obj->Add(tmpStr, _T(""), newReport);

				newReport = new CTMOperationList(&m_wndReportGroup);
				//newReport->Create(&m_wndReportGroup);
				//newReport->OnInitDialog();
				TranslateString(_T("Bồi dưỡng PTTT"), szTemp);
				tmpStr.Format(_T("23. %s"), szTemp);
				obj->Add(tmpStr, _T(""), newReport);

				newReport = new CTMOperationListB10(&m_wndReportGroup);
				//newReport->Create(&m_wndReportGroup);
				//newReport->OnInitDialog();
				TranslateString(_T("Bồi dưỡng PTTT Khoa B10"), szTemp);
				tmpStr.Format(_T("23.1 %s"), szTemp);
				obj->Add(tmpStr, _T(""), newReport);		
				
				newReport = new CTMSuDungDVKT(&m_wndReportGroup);
				newReport->Create(&m_wndReportGroup);
				//newReport->OnInitDialog();
				TranslateString(_T("Sử dụng DVKT"), szTemp);
				tmpStr.Format(_T("24. %s"), szTemp);
				obj->Add(tmpStr, _T(""), newReport);

				newReport = new CEMDrugAmountbyDoctor(&m_wndReportGroup);
				TranslateString(_T("Drug Amount by Doctor"), szTemp);
				tmpStr.Format(_T("11. %s"), szTemp);
				obj->Add(tmpStr, _T(""), newReport);

				newReport = new CEMIncomebyRoom(&m_wndReportGroup);
				TranslateString(_T("Income by Room"), szTemp);
				tmpStr.Format(_T("12. %s"), szTemp);
				obj->Add(tmpStr, _T(""), newReport);

				newReport = new CEMDrugUsage(&m_wndReportGroup);
				TranslateString(_T("Drug Usage"), szTemp);
				tmpStr.Format(_T("13. %s"), szTemp);
				obj->Add(tmpStr, _T(""), newReport);

				/*newReport = new CEMDrugUsageDesc(&m_wndReportGroup);
				TranslateString(_T("Drug Usage Desc"), szTemp);
				tmpStr.Format(_T("13.1. %s"), szTemp);
				obj->Add(tmpStr, _T(""), newReport);*/

				newReport = new CEMPatientStatbyRoom2(&m_wndReportGroup);
				//newReport->Create(&m_wndReportGroup);
				//newReport->OnInitDialog();
				TranslateString(_T("Patient Stat by Room 2"), szTemp);
				tmpStr.Format(_T("14. %s"), szTemp);
				obj->Add(tmpStr, _T(""), newReport);

				newReport = new CEMTestnParaRatebyRoom2(&m_wndReportGroup);
				//newReport->Create(&m_wndReportGroup);
				//newReport->OnInitDialog();
				TranslateString(_T("Test n Para Rate by Room 2"), szTemp);
				tmpStr.Format(_T("15. %s"), szTemp);
				obj->Add(tmpStr, _T(""), newReport);

				newReport = new CEEMRoom51ReportByDoctor(&m_wndReportGroup);
				//newReport->Create(&m_wndReportGroup);
				//newReport->OnInitDialog();
				TranslateString(_T("Room 51 Report By Doctor"), szTemp);
				tmpStr.Format(_T("16. %s"), szTemp);
				obj->Add(tmpStr, _T(""), newReport);
				
				newReport = new CEMParaclinicPatientList(&m_wndReportGroup);
				//newReport->Create(&m_wndReportGroup);
				//newReport->OnInitDialog();
				TranslateString(_T("Paraclinic Patient List"), szTemp);
				tmpStr.Format(_T("17. %s"), szTemp);
				obj->Add(tmpStr, _T(""), newReport);

				newReport = new CEMThongkebenhnhan(&m_wndReportGroup);
				//newReport->Create(&m_wndReportGroup);
				//newReport->OnInitDialog();
				TranslateString(_T("Thống kê luồng bệnh nhân chuyển phòng khám"), szTemp);
				tmpStr.Format(_T("18. %s"), szTemp);
				obj->Add(tmpStr, _T(""), newReport);
				
				newReport = new CEMOperationListEX(&m_wndReportGroup);
				//newReport->Create(&m_wndReportGroup);
				//newReport->OnInitDialog();
				TranslateString(_T("Bồi dưỡng PTTT Phòng khám"), szTemp);
				tmpStr.Format(_T("19. %s"), szTemp);
				obj->Add(tmpStr, _T(""), newReport);


				newReport = new CEMTonghopphieukhambenh(&m_wndReportGroup);
				//newReport->Create(&m_wndReportGroup);
				//newReport->OnInitDialog();
				TranslateString(_T("Tổng hợp theo phiếu khám bệnh"), szTemp);
				tmpStr.Format(_T("20. %s"), szTemp);
				obj->Add(tmpStr, _T(""), newReport);


				newReport = new CFMPatientStatbyRoom2(&m_wndReportGroup);
				//newReport->Create(&m_wndReportGroup);
				//newReport->OnInitDialog();
				TranslateString(_T("THỐNG KÊ SỐ LƯỢNG BỆNH NHÂN KHÁM"), szTemp);
				tmpStr.Format(_T("21. %s"), szTemp);
				obj->Add(tmpStr, _T(""), newReport);

				newReport = new CEMParaclinicCompletionState();
				obj->Add(_T("22. Thực trạng hoàn thành xét nghiệm"), _T(""), newReport);
			//}
		}
		if ((pMF->GetCurrentDepartmentID() == _T("C1.2")) || (pMF->GetCurrentDepartmentID() == _T("KHTH")))
		{
			tmpStr.Format(_T("Báo cáo khu C1.2"));
			obj->AddCaption(tmpStr);

			newReport = new CEMStatisticsGeneralPatientReport(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Statistics General Patient Report"), szTemp);
			tmpStr.Format(_T("1. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			if (pMF->GetCurrentUser() == L"hanhdunga11")
			{
				newReport = new CEMA11GeneralPatientStatistics(&m_wndReportGroup);
				//newReport->Create(&m_wndReportGroup);
				//newReport->OnInitDialog();
				TranslateString(_T("Statistics General Patient Report"), szTemp);
				tmpStr.Format(_T("1.1 %s A11"), szTemp);
				obj->Add(tmpStr, _T(""), newReport);
			}
			

			newReport = new CEMExaminationListReport(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Examination List"), szTemp);
			tmpStr.Format(_T("2. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CEMExaminationListReport2(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Examination List"), szTemp);
			tmpStr.Format(_T("2. %s 2"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);
			
			newReport = new CEMDanhSachBenhNhanVaoVien(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			szTemp = _T("Danh Sách Bệnh Nhân Vào Viện");
			tmpStr.Format(_T("3. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CEMDrugDeliveryListReport(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Drug Delivery List Report"), szTemp);
			tmpStr.Format(_T("4. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);
		
			newReport = new CEMWeekSynthesisReport(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Weekly Synthesis Report"), szTemp);
			tmpStr.Format(_T("5. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CEMStatisticsMajorDiseasesReport(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Statistics Major Disease Report"), szTemp);
			tmpStr.Format(_T("6. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			// benh tat theo nhom

			newReport = new CEMStatisticsMajorDiseasesReportC12(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Thống kê bệnh nhân theo nhóm mã bệnh"), szTemp);
			tmpStr.Format(_T("7. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);


			newReport = new CEMObjectDiseaseStatisticsReport(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Object Disease Statistics Report"), szTemp);
			tmpStr.Format(_T("8. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CEMObject11DiseaseStatisticsReport(&m_wndReportGroup); 
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("11 nhóm mặt bệnh chính"), szTemp);
			tmpStr.Format(_T("9. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);


			newReport = new CEMExaminationTreatmentActReport(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Examination Treatment Act Report"), szTemp);
			tmpStr.Format(_T("10. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CEMQtyAtExam(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Số lượng khám tại các phòng"), szTemp);
			tmpStr.Format(_T("11. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CEMSoluongkhamcacngaytrongtuan(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			tmpStr.Format(_T("12. Số lượng khám các ngày trong tuần"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CEMSoluongbenhnhankhamchuyenkhoa(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			tmpStr.Format(_T("13.Số lượng bệnh nhân khám chuyên khoa"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CEMKythuatlamtaikhoaC12(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			tmpStr.Format(_T("14. Kỹ thuật làm tại khoa"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);


			newReport = new CEMAgeDiseaseStatisticsReport(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			tmpStr.Format(_T("15. Thống kê theo mặt bệnh - độ tuổi"));
			obj->Add(tmpStr, _T(""), newReport);
		
			newReport = new CEMOperationFosteringListC12(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Operation Fostering List"), szTemp);
			tmpStr.Format(_T("16. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CEMSPrescriptionListReportDialog(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Prescription List Report"), szTemp);
			tmpStr.Format(_T("17 %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);
			
			//bc lay tu C1.1 bvtan sang
			newReport = new CEMAdmitRatebyRoom(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Admit Rate by Room"), szTemp);
			tmpStr.Format(_T("18. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);
			
			newReport = new CEMTestnParaRatebyRoom(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Test n Para Rate by Room"), szTemp);
			tmpStr.Format(_T("19. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);
			
			newReport = new CEMTestIncome(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Test Income"), szTemp);
			tmpStr.Format(_T("20. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);
			
			newReport = new CEMOrderRate(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Order Rate"), szTemp);
			tmpStr.Format(_T("21. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);
			
			newReport = new CEMInsuranceDrugAmount(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Insurance Drug Amount"), szTemp);
			tmpStr.Format(_T("22 %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);
			
			newReport = new CEMExpensiveOrder(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Expensive Order"), szTemp);
			tmpStr.Format(_T("23. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);
			
			newReport = new CEMGeneralInsuranceExpense(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("General Insurance Expense"), szTemp);
			tmpStr.Format(_T("24. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);
			
			newReport = new CEMPatientStatbyRoom(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Patient Stat by Room"), szTemp);
			tmpStr.Format(_T("25. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CEMExpensiveOrderDetail(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Expensive Order Detail"), szTemp);
			tmpStr.Format(_T("26. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CEMMilitaryPatientList(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Military Patient List"), szTemp);
			tmpStr.Format(_T("27. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CTMSuDungDVKT(&m_wndReportGroup);
			newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Sử dụng DVKT"), szTemp);
			tmpStr.Format(_T("28. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CEMDrugUsageDesc(&m_wndReportGroup);
			newReport->Create(&m_wndReportGroup);
			newReport->OnInitDialog();
			TranslateString(_T("Báo cáo sử dụng thuốc nhiều"), szTemp);
			tmpStr.Format(_T("29. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CDanhsachbenhnhanxetnghiemC12(&m_wndReportGroup);
			newReport->Create(&m_wndReportGroup);
			newReport->OnInitDialog();
			TranslateString(_T("Danh sách bệnh nhân làm xét nghiệm C12"), szTemp);
			tmpStr.Format(_T("30. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMExaminationC12ListReport(&m_wndReportGroup);			
			TranslateString(_T("Thống kê bệnh nhân khám tại C12"), szTemp);
			tmpStr.Format(_T("31. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CHEICDListReport(&m_wndReportGroup);
			TranslateString(_T("Thống kê ICD C12"), szTemp);
			tmpStr.Format(_T("32. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

		}

		if ((pMF->GetCurrentDepartmentID() == _T("C1.3")) || (pMF->GetCurrentDepartmentID() == _T("KHTH")))
		{
			tmpStr.Format(_T("Báo cáo khu C1.3"));
			obj->AddCaption(tmpStr);

			newReport = new CEMExamListReportC13(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Examination List C1.3"), szTemp);
			tmpStr.Format(_T("1. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);


			newReport = new CEMInwardStatisticForDepartmentReport(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Inward Statistic for Department Report"), szTemp);
			tmpStr.Format(_T("2. %s"), szTemp);
			obj->Add(tmpStr, _T(""),  newReport);

			newReport = new CEMStatisticsMajorDiseasesReport(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Statistics Major Disease Report"), szTemp);
			tmpStr.Format(_T("3. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CEMObjectDiseaseStatisticsReport(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Object Disease Statistics Report"), szTemp);
			tmpStr.Format(_T("4. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CEMExaminationTreatmentActReport(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Examination Treatment Act Report"), szTemp);
			tmpStr.Format(_T("5. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CEMCabinetUsage(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Prescription List Report"), szTemp);
			tmpStr.Format(_T("6. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

// 			newReport = new CTMDepartmentUsageinDetailNew(&m_wndReportGroup);
// 			//newReport->Create(&m_wndReportGroup);
// 			//newReport->OnInitDialog();
// 			TranslateString(_T("Department Usage in Detail New"), szTemp);
// 			tmpStr.Format(_T("7 %s"), szTemp);
// 			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CEMDepartmentUsageinDetail(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Department Usage in Detail"), szTemp);
			tmpStr.Format(_T("7. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);
			
			newReport = new CEMExambySuggestion(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Exam by Suggestion"), szTemp);
			tmpStr.Format(_T("8. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CEMCTMRIStat(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("CT-MRI Stat"), szTemp);
			tmpStr.Format(_T("9. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CEMExaminationListReport(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Examination List"), szTemp);
			tmpStr.Format(_T("10. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CTMOperationList(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Bồi dưỡng PTTT"), szTemp);
			tmpStr.Format(_T("11. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);
			
			newReport = new CEMBaocaocanboC1_3(&m_wndReportGroup);
			obj->Add(_T("12. Báo cáo cán bộ C1.3"), _T(""), newReport);

			newReport = new CTMSuDungDVKT(&m_wndReportGroup);
			newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Sử dụng DVKT"), szTemp);
			tmpStr.Format(_T("13. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);
			
		}
		_tprintf(_T("Dept: %s| User: %s"), pMF->GetCurrentDepartmentID(), pMF->GetCurrentUser());

		if (pMF->GetCurrentDepartmentID() == _T("TYC") || pMF->GetCurrentDepartmentID() == _T("C1.1") || pMF->GetCurrentDepartmentID() == _T("TTTVDT") || pMF->GetCurrentDepartmentID() == _T("KSK"))
		{
			
			if (pMF->GetCurrentUser() == _T("ltthaityc") || pMF->GetCurrentUser() == _T("bvtan") || pMF->GetCurrentUser() == _T("bvtan3pttyc"))
			{
				tmpStr.Format(_T("New Report for TYC Statistic"));
				obj->AddCaption(tmpStr);

				newReport = new CEMDrugListByCompany(&m_wndReportGroup);
				//newReport->Create(&m_wndReportGroup);
				//newReport->OnInitDialog();
				TranslateString(_T("Drug List By Company"), szTemp);
				tmpStr.Format(_T("1. %s"), szTemp);
				obj->Add(tmpStr, _T(""), newReport);

				newReport = new CEMSODPaidExtra(&m_wndReportGroup);
				TranslateString(_T("SOD Paid Extra"), szTemp);
				tmpStr.Format(_T("2. %s"), szTemp);
				obj->Add(tmpStr, _T(""), newReport);

				newReport = new CEMParaclinicIncomebyItem(&m_wndReportGroup);
				TranslateString(_T("Paraclinic Income by Item"), szTemp);
				tmpStr.Format(_T("3. %s"), szTemp);
				obj->Add(tmpStr, _T(""), newReport);

				newReport = new CEMSODRewardInCalculation(&m_wndReportGroup);
				TranslateString(_T("SOD Reward In Calculation"), szTemp);
				tmpStr.Format(_T("4. %s"), szTemp);
				obj->Add(tmpStr, _T(""), newReport);

// 				newReport = new CSOMThongKeTienChiTraChoKhoaPTV(&m_wndReportGroup);
// 				//newReport->Create(&m_wndReportGroup);
// 				//newReport->OnInitDialog();
// 				TranslateString(_T("Thống kê tiền chi trả cho khoa quản lý phẫu thuật viên"), szTemp);
// 				tmpStr.Format(_T("5. %s"), szTemp);
// 				obj->Add(tmpStr, _T(""), newReport);
// 
// 				newReport = new CSOMThongKeTienChiTraChoPTV(&m_wndReportGroup);
// 				//newReport->Create(&m_wndReportGroup);
// 				//newReport->OnInitDialog();
// 				TranslateString(_T("Thống kê tiền chi trả cho phẫu thuật viên"), szTemp);
// 				tmpStr.Format(_T("6. %s"), szTemp);
// 				obj->Add(tmpStr, _T(""), newReport);
// 
// 				newReport = new CSOMThongKeTienChiTraChoThuHutBN(&m_wndReportGroup);
// 				//newReport->Create(&m_wndReportGroup);
// 				//newReport->OnInitDialog();
// 				TranslateString(_T("Thống kê tiền chi trả cho thu hút bệnh nhân"), szTemp);
// 				tmpStr.Format(_T("7. %s"), szTemp);
// 				obj->Add(tmpStr, _T(""), newReport);

				newReport = new CFMCollectDetailByItem_2017(&m_wndReportGroup);
				//newReport->Create(&m_wndReportGroup);
				//newReport->OnInitDialog();
				TranslateString(_T("Thống kê tiền chi trả cho phẫu thuật viên"), szTemp);
				tmpStr.Format(_T("5. %s"), szTemp);
				obj->Add(tmpStr, _T(""), newReport);

				newReport = new CEMDrugAmountbyDoctorOrderbydesc(&m_wndReportGroup);				
				TranslateString(_T("Báo cáo sử dụng thuốc theo bác sĩ - new 2022"), szTemp);
				tmpStr.Format(_T("6. %s"), szTemp);
				obj->Add(tmpStr, _T(""), newReport);

			}
			tmpStr.Format(_T("Báo cáo khu C1.4"));
			obj->AddCaption(tmpStr);

			newReport = new CSOMPregnancyButtonView(&m_wndReportGroup);		
			TranslateString(_T("THỐNG KÊ BỆNH NHÂN ĐĂNG KÝ MỔ ĐẺ"), szTemp);
			tmpStr.Format(_T("---- %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CEMDrugAmountbyDoctor(&m_wndReportGroup);
			TranslateString(_T("Drug Amount by Doctor"), szTemp);
			tmpStr.Format(_T("1. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CEMIncomebyRoom(&m_wndReportGroup);
			TranslateString(_T("Income by Room"), szTemp);
			tmpStr.Format(_T("2. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CEMDrugUsage(&m_wndReportGroup);
			TranslateString(_T("Drug Usage"), szTemp);
			tmpStr.Format(_T("3. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CEMPatientStatbyRoom2(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Patient Stat by Room 2"), szTemp);
			tmpStr.Format(_T("4. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CEMTestnParaRatebyRoom2(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Test n Para Rate by Room 2"), szTemp);
			tmpStr.Format(_T("5. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CTMSuDungDVKT(&m_wndReportGroup);
			newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Sử dụng DVKT"), szTemp);
			tmpStr.Format(_T("6. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CEMTongHopKetQuaKhamBenh(&m_wndReportGroup);
			newReport->Create(&m_wndReportGroup);
			newReport->OnInitDialog();
			TranslateString(_T("Tổng hợp kết quả khám bệnh (KSK)"), szTemp);
			tmpStr.Format(_T("7. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CEMTaiChinhKhamSucKhoe(&m_wndReportGroup);
			newReport->Create(&m_wndReportGroup);
			newReport->OnInitDialog();
			TranslateString(_T("Báo cáo tài chính khám bệnh"), szTemp);
			tmpStr.Format(_T("8. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CEMTaiChinhKhamSucKhoe_V2(&m_wndReportGroup);
			newReport->Create(&m_wndReportGroup);
			newReport->OnInitDialog();
			TranslateString(_T("Báo cáo tài chính khám bệnh (tổng hợp)"), szTemp);
			tmpStr.Format(_T("8.1 %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CEMDanhSachBenhNhanChuyenKhamTuTYC(&m_wndReportGroup);
			newReport->Create(&m_wndReportGroup);
			newReport->OnInitDialog();
			TranslateString(_T("Danh sách bệnh nhân chuyển khám từ TYC"), szTemp);
			tmpStr.Format(_T("9. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CEMBaohiemBaoViet(&m_wndReportGroup);
			newReport->Create(&m_wndReportGroup);
			newReport->OnInitDialog();
			TranslateString(_T("Danh sách bệnh nhân bảo hiểm Bảo Việt"), szTemp);
			tmpStr.Format(_T("10. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CEMChiTietKetQuaKhamBenh(&m_wndReportGroup);
			newReport->Create(&m_wndReportGroup);
			newReport->OnInitDialog();
			TranslateString(_T("Chi tiết kết quả khám bệnh (KSK)"), szTemp);
			tmpStr.Format(_T("11. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CEMChiTietCLSchuathuchien_KSK(&m_wndReportGroup);
			newReport->Create(&m_wndReportGroup);
			newReport->OnInitDialog();
			TranslateString(_T("Chi tiết bệnh nhân chưa thực hiện CLS (KSK)"), szTemp);
			tmpStr.Format(_T("12. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CEMInheritanceCenterIncome();
			newReport->Create(&m_wndReportGroup);
			obj->Add(_T("13. Doanh thu trung tâm di truyền"), _T(""), newReport);

			newReport = new CHMSTonghopketquacls();
			newReport->Create(&m_wndReportGroup);
			obj->Add(_T("14. Chi tiết kết quả CLS bệnh nhân khám & điều trị"), _T(""), newReport);
			
			newReport = new CEMSuDungDVKT_BenhnhanKSK(&m_wndReportGroup);
			newReport->Create(&m_wndReportGroup);
			newReport->OnInitDialog();
			TranslateString(_T("Kết quả thực hiện DVKT khám sức khỏe định kỳ"), szTemp);
			tmpStr.Format(_T("15. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CEMSuDungDVKT_Theophong_TheogoiKSK(&m_wndReportGroup);
			newReport->Create(&m_wndReportGroup);
			newReport->OnInitDialog();
			TranslateString(_T("Thống kê DVKT theo phòng & hợp đồng khám"), szTemp);
			tmpStr.Format(_T("16. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);	

			if(pMF->m_szUser == "hvlinh")
			{
				newReport = new CDuLieuBaoCaoKhoaHoc();
				newReport->Create(&m_wndReportGroup);
				newReport->OnInitDialog();
				TranslateString(_T("Dữ liệu báo cáo khoa học"), szTemp);
				tmpStr.Format(_T("17. %s"), szTemp);
				obj->Add(tmpStr, _T(""), newReport);
			}

		}

		if (pMF->GetCurrentDepartmentID() == _T("TYC") || pMF->GetCurrentDepartmentID() == _T("PTTYC") || pMF->GetCurrentDepartmentID() == _T("TTTM") || pMF->GetCurrentDepartmentID() == _T("TMNT"))
		{

			tmpStr.Format(_T("Báo cáo khu PTTYC"));
			obj->AddCaption(tmpStr);

			newReport = new CEMDiseasebyMachinePTTYC(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Disease by Machine Report"), szTemp);
			tmpStr.Format(_T("1. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CEMOperationFosteringListPTTYC(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Operation Fostering List"), szTemp);
			tmpStr.Format(_T("2. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CEMThuThuatPhongLaserPTTYC(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Thủ thuật của phòng Laser"), szTemp);
			tmpStr.Format(_T("3. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CEMDSBNHenKhamLai(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Danh sách bệnh nhân hẹn khám lại"), szTemp);
			tmpStr.Format(_T("4. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CEMDanhsachnguoigioithieuTYC(&m_wndReportGroup);	
			TranslateString(_T("Danh sách người giới thiệu TYC"), szTemp);
			tmpStr.Format(_T("5. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CEMNangsuatphauthuatvienTYC(&m_wndReportGroup);	
			TranslateString(_T("Báo cáo năng suất lao động của PTV khu PTTYC"), szTemp);
			tmpStr.Format(_T("6. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CEMThongtindieutrilaserTYC(&m_wndReportGroup);	
			TranslateString(_T("Thông tin điều trị laser"), szTemp);
			tmpStr.Format(_T("7. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

		}
		if (pMF->GetCurrentDepartmentID() == _T("KHTH") || pMF->GetCurrentDepartmentID() == _T("AB") 
			|| (pMF->GetCurrentDepartmentID() == _T("TTTVDT")))
		{
			
			tmpStr.Format(_T("Báo cáo khu AB"));
			obj->AddCaption(tmpStr);
			newReport = new CRptBCHangThangKhoaKhamAB(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Báo cáo hàng tháng khu AB"), szTemp);
			tmpStr.Format(_T("1. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CEMParaclinicIncomebyItemAB(&m_wndReportGroup);
			TranslateString(_T("Báo cáo doanh thu CLS khu AB"), szTemp);
			tmpStr.Format(_T("2. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);
		}
		tmpStr.Format(_T("Báo cáo chung khoa khám bệnh"));
		obj->AddCaption(tmpStr);
		newReport = new CFMInsuranceFeeLossReportByDept(&m_wndReportGroup);	
		TranslateString(_T("Insurance Fee Loss Report"), szTemp);
		tmpStr.Format(_T("1 %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);
		_tprintf(_T("\r\ndbg 11"));

		newReport = new CEMQuanSoTrungTamDiTruyen(&m_wndReportGroup);	
		TranslateString(_T("Báo cáo quân số trung tâm di truyền"), szTemp);
		tmpStr.Format(_T("2 %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CEMExamInterval();
		obj->Add(_T("3. Báo cáo thời gian khám bệnh"), _T(""), newReport);

		newReport = new CRPTEmployeeExam();
		tmpStr.Format(_T("4. Danh sách KSK nhân viên"));
		obj->Add(tmpStr, _T(""), newReport);

		if (pMF->GetCurrentDepartmentID() == _T("C1.3"))
		{
			if (pMF->CheckPermission(_T("10.30")))
			{
				newReport = new CHMSUseDrugCabinet(&m_wndReportGroup);
				tmpStr.Format(_T("5. Báo cáo sử dụng thuốc tủ trực"));
				obj->Add(tmpStr, _T(""), newReport);
			}
		}

		newReport = new CEMDieutrilaserthammy();
		tmpStr.Format(_T("6. Số liệu điều trị laser thẩm mỹ"));
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new EMThuthuattyc();
		tmpStr.Format(_T("7. Số liệu thủ thuật phòng khám TYC"));
		obj->Add(tmpStr, _T(""), newReport);		

		newReport = new EMThuthuatnoisoityc();
		tmpStr.Format(_T("7.1 Số liệu thủ thuật nội soi TYC"));
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CEMThongkethuoctt5251(&m_wndReportGroup);				
		TranslateString(_T("8. Báo cáo số liệu theo thông tư 5251 - BH"), szTemp);
		tmpStr.Format(_T("%s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CEMThongkemabenhphongkham(&m_wndReportGroup);				
		TranslateString(_T("9. Báo cáo số liệu mã bệnh theo phòng khám / khu khám"), szTemp);
		tmpStr.Format(_T("%s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CEMPatientStatbyLocation(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Patient Stat by Location"), szTemp);
		tmpStr.Format(_T("10. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CEMThongkekhamc11bclc(&m_wndReportGroup);				
		TranslateString(_T("11. Báo cáo số liệu khám khu CLC"), szTemp);
		tmpStr.Format(_T("%s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CRptBCHangThangKhoaKhamC1_1(&m_wndReportGroup);			
		szTemp.Format(_T("Báo cáo hàng tháng khoa khám (%s)"), pMF->GetCurrentDepartmentID());
		tmpStr.Format(_T("12. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CEMDiseasebyMachineTTTM(&m_wndReportGroup);			
		TranslateString(_T("Báo cáo mặt bệnh theo máy TTTM"), szTemp);
		tmpStr.Format(_T("13. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);


		newReport = new CEMThongtinkhambenhTTTM(&m_wndReportGroup);			
		TranslateString(_T("Báo cáo khám bệnh TTTM"), szTemp);
		tmpStr.Format(_T("14. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CEMThongtinthuoctreoC13(&m_wndReportGroup);
		TranslateString(_T("Báo cáo thuốc treo C1.3"), szTemp);
		tmpStr.Format(_T("15. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CEMDanhsachBNdoHA(&m_wndReportGroup);
        // newReport->Create(&m_wndReportGroup);
        // newReport->OnInitDialog();
        TranslateString(_T("Danh sách bệnh nhân đã đo huyết áp"), szTemp);
        tmpStr.Format(_T("16. %s"), szTemp);
        obj->Add(tmpStr, _T(""), newReport);
	}
}
void CHMSReportFormDialog::CreateTreatmentReports()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
	CGuiView *newReport = NULL;
	CString tmpStr, szTemp;
	tmpStr.Empty();
	szTemp.Empty();
	CDocPane::CDocPaneInfo *obj = m_wndReportGroup.AddPane(_T("Report"));
	
	if (obj)
	{
		newReport = new CVPMTotalVisitorReport(&m_wndReportGroup);		
		TranslateString(_T("Báo cáo chi tiết người nhà đến thăm BN"), szTemp);
		tmpStr.Format(_T("1. %s theo khoa"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CAdmitPatientBook(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Admit Patient Book"), szTemp);
		tmpStr.Format(_T("2. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CTMPatientListAdmitKTM(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Patient List Admit KTM"), szTemp);
		tmpStr.Format(_T("2.1 %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CTMPatientListEmergencyKTM(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Patient List Emergency KTM"), szTemp);
		tmpStr.Format(_T("2.2 %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CTMArmyReportsDeptKTM(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Army Reports Dept KTM"), szTemp);
		tmpStr.Format(_T("2.3 %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CTMTreatmentActivity(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Treatment Activity"), szTemp);
		tmpStr.Format(_T("3. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CTMTreatmentActivitybyDept(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Treatment Activity by Dept"), szTemp);
		tmpStr.Format(_T("4. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);
 
		newReport = new CTMIOTransbookreport(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("In Out Transfer Patient Book"), szTemp);
		tmpStr.Format(_T("5. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CTMDetailIOTransbookreport(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Detail In Out Transfer Patient Book"), szTemp);
		tmpStr.Format(_T("6. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CPMSDepartmentUsageinDetail_108Old(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Department Usage in Detail 2"), szTemp);
		tmpStr.Format(_T("7. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CTMDepartmentUsageinDetailNew(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Department Usage in Detail New"), szTemp);
		tmpStr.Format(_T("7.1 %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CTMOperationFosteringList(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Operation Fostering List"), szTemp);
		tmpStr.Format(_T("8. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CArmyReportsDept(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Báo cáo quân số"), szTemp);
		tmpStr.Format(_T("9. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CTMReportsDeptPatientList(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Danh sách bệnh nhân đang điều trị"), szTemp);
		tmpStr.Format(_T("10. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CTMPatientListDischarge(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Sổ ra viện"), szTemp);
		tmpStr.Format(_T("11. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		if (pMF->GetCurrentDepartmentID() == _T("A6-C"))
		{
		newReport = new CTMPatientListDischargeForCancerPatient(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Số ra viện kèm kết quả giải phẫu bệnh"), szTemp);
		tmpStr.Format(_T("11.1 %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);
		}

		newReport = new CTMMaterialFinalAccount(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Material Final Account"), szTemp);
		tmpStr.Format(_T("12. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CTMTotalPatientListDischarge(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Total Patient List Discharge"), szTemp);
		tmpStr.Format(_T("13. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CTMTotalPatientListDischargeByDept(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Total Patient List Discharge by Dept"), szTemp);
		tmpStr.Format(_T("13.1 %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);
		
		newReport = new CTMOperationList(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Bồi dưỡng PTTT"), szTemp);
		tmpStr.Format(_T("14 %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		if (pMF->GetCurrentDepartmentID() == _T("B10"))
		{		
			newReport = new CTMOperationListB10(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Bồi dưỡng PTTT Khoa B10"), szTemp);
			tmpStr.Format(_T("14.1 %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CTMProcStatsReportB10(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Báo cáo thống kê PTTT, CLS đã thực hiện B10"), szTemp);
			tmpStr.Format(_T("14.2 %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);
		}
// 		newReport = new CEMOperationList(&m_wndReportGroup);
// 		//newReport->Create(&m_wndReportGroup);
// 		//newReport->OnInitDialog();
// 		TranslateString(_T("Operation List B10"), szTemp);
// 		tmpStr.Format(_T("15. %s"), szTemp);
// 		obj->Add(tmpStr, _T(""), newReport);

		/*newReport = new CHMSInOutPatientTrack(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("In Out Patient Track"), szTemp);
		tmpStr.Format(_T("11. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);*/

		newReport = new CTMPatientListVLTL(&m_wndReportGroup);
		newReport->Create(&m_wndReportGroup);
		newReport->OnInitDialog();
		TranslateString(_T("Patient List VLTL"), szTemp);
		tmpStr.Format(_T("15. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CTMTinhhinhthudung(&m_wndReportGroup);
		newReport->Create(&m_wndReportGroup);
		newReport->OnInitDialog();
		TranslateString(_T("Tình hình thu dung"), szTemp);
		tmpStr.Format(_T("16. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CTMThuchienchitieu(&m_wndReportGroup);
		newReport->Create(&m_wndReportGroup);
		newReport->OnInitDialog();
		TranslateString(_T("Thực hiện chỉ tiêu"), szTemp);
		tmpStr.Format(_T("17. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CTMBctheodoiravaovien(&m_wndReportGroup);
		newReport->Create(&m_wndReportGroup);
		newReport->OnInitDialog();
		TranslateString(_T("Theo dõi ra vào viện"), szTemp);
		tmpStr.Format(_T("18. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		//Bao cao de demo ben kiem thu dong tu ngay 12/9
// 		newReport = new CTMOperationList2(&m_wndReportGroup);
// 		newReport->Create(&m_wndReportGroup);
// 		newReport->OnInitDialog();
// 		TranslateString(_T("Thống kê danh sách bệnh nhân PTTT"), szTemp);
// 		tmpStr.Format(_T("KT. %s"), szTemp);
// 		obj->Add(tmpStr, _T(""), newReport);

// 		newReport = new CArmyReportsDept2(&m_wndReportGroup);
// 		newReport->Create(&m_wndReportGroup);
// 		newReport->OnInitDialog();
// 		TranslateString(_T("Báo cáo hoạt động theo ngày"), szTemp);
// 		tmpStr.Format(_T("KT. %s"), szTemp);
// 		obj->Add(tmpStr, _T(""), newReport);

// 		newReport = new CTMHoatdongcanlamsang(&m_wndReportGroup);
// 		newReport->Create(&m_wndReportGroup);
// 		newReport->OnInitDialog();
// 		TranslateString(_T("Hoạt động cận lâm sàng theo khoa"), szTemp);
// 		tmpStr.Format(_T("KT. %s"), szTemp);
// 		obj->Add(tmpStr, _T(""), newReport);

// 		newReport = new CTMSudungthuoctutruc(&m_wndReportGroup);
// 		newReport->Create(&m_wndReportGroup);
// 		newReport->OnInitDialog();
// 		TranslateString(_T("Báo cáo sử dụng thuốc tủ trực"), szTemp);
// 		tmpStr.Format(_T("KT. %s"), szTemp);
// 		obj->Add(tmpStr, _T(""), newReport);

// 		newReport = new CFMOutpatientInsuranceCost80A(&m_wndReportGroup);
// 		////newReport->Create(&m_wndReportGroup);
// 		////newReport->OnInitDialog();
// 		TranslateString(_T("Outpatient Insurance Cost 80A"), szTemp);
// 		tmpStr.Format(_T("KT. %s"), szTemp);
// 		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CRPTTreatmentAppointment(&m_wndReportGroup);
		newReport->Create(&m_wndReportGroup);
		newReport->OnInitDialog();
		TranslateString(_T("Hẹn bệnh nhân K giáp"), szTemp);
		tmpStr.Format(_T("19 - A20. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CFMInsurancePaidSummaryByDeptEX(&m_wndReportGroup);
		TranslateString(_T("Tổng hợp chi phí BN tồn, theo khoa thực hiện, theo đối tượng"), szTemp);
		tmpStr.Format(_T("20. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CFMServiceRefundSummaryByDept(&m_wndReportGroup);
		TranslateString(_T("General Service Treatment Refund Fee By Dept Report"), szTemp);
		tmpStr.Format(_T("21. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CTMPatientListUseBracelet(&m_wndReportGroup);
		newReport->Create(&m_wndReportGroup);
		newReport->OnInitDialog();
		TranslateString(_T("Danh sách bệnh nhân sử dụng vòng đeo tay"), szTemp);
		tmpStr.Format(_T("22. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CTMSuDungDVKT(&m_wndReportGroup);
		newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Sử dụng DVKT"), szTemp);
		tmpStr.Format(_T("23. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CrptDetailOperationEquipment(&m_wndReportGroup);
		newReport->Create(&m_wndReportGroup);
		newReport->OnInitDialog();
		TranslateString(_T("Tổng hợp chi tiết thuốc - VTTH làm PTTT"), szTemp);
		tmpStr.Format(_T("24. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CPMCurrentroomReport(&m_wndReportGroup);
		newReport->Create(&m_wndReportGroup);
		newReport->OnInitDialog();
		TranslateString(_T("Báo cáo thuốc bệnh nhân theo buồng"), szTemp);
		tmpStr.Format(_T("25. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CVPMBaocaotonghop1(&m_wndReportGroup);
		TranslateString(_T("Báo cáo tổng hợp 1"), szTemp);
		tmpStr.Format(_T("26. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CVPMBaocaotonghop2(&m_wndReportGroup);
		TranslateString(_T("Báo cáo tổng hợp 2"), szTemp);
		tmpStr.Format(_T("27. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CVPMBaocaochitiet1(&m_wndReportGroup);
		TranslateString(_T("Báo cáo chi tiết 1"), szTemp);
		tmpStr.Format(_T("28. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CVPMBaocaochitiet2(&m_wndReportGroup);
		TranslateString(_T("Báo cáo chi tiết 2"), szTemp);
		tmpStr.Format(_T("29. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CVPMChitietgoidichvu(&m_wndReportGroup);
		TranslateString(_T("Báo cáo tình hình chi tiết sử dụng gói dịch vụ"), szTemp);
		tmpStr.Format(_T("30. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CVPMCanhbaogoisaphethan(&m_wndReportGroup);
		TranslateString(_T("Báo cáo cảnh báo gói sắp hết hạn"), szTemp);
		tmpStr.Format(_T("31. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CTMICD10Report(&m_wndReportGroup);
		tmpStr.Format(_T("32. Danh sách bệnh nhân theo mã ICD"));
		obj->Add(tmpStr, _T(""), newReport);


		newReport = new CTM_TTTIEMTRUYEN(&m_wndReportGroup);
		tmpStr.Format(_T("33. Báo cáo danh sách bệnh nhân tiêm - truyền - máu"));
		obj->Add(tmpStr, _T(""), newReport);


		newReport = new CTMMaughinhanungthu(&m_wndReportGroup);		
		TranslateString(_T("Mẫu ghi nhận bệnh nhân ung thư"), szTemp);
		tmpStr.Format(_T("34. %s theo khoa"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);


		newReport = new CTMDSbenhnhandtngoaitrutulan2(&m_wndReportGroup);		
		TranslateString(_T("Danh sách BN điều trị ngoại trú từ lần 2"), szTemp);
		tmpStr.Format(_T("35. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CLIMSTestCovid19NguoinhaReport(&m_wndReportGroup);		
		TranslateString(_T("Danh sách BN người nhà yêu cầu xét nghiệm"), szTemp);
		tmpStr.Format(_T("36. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

 		newReport = new CTMOperationBook();
 		TranslateString(_T("Sổ ghi chép mổ"), szTemp);
 		tmpStr.Format(_T("37. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CTMFallSlipperyRPT();
 		TranslateString(_T("Thống kê số liệu trượt ngã"), szTemp);
 		tmpStr.Format(_T("38. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);
		
		if (pMF->GetCurrentDepartmentID() == _T("A1-A") || pMF->GetCurrentDepartmentID() == _T("A1-C"))
		{
		newReport = new CTMDSbenhnhana1dientim(&m_wndReportGroup);		
		TranslateString(_T("Danh sách BN khoa A1 làm điện tim thường"), szTemp);
		tmpStr.Format(_T("39. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);
		}
		newReport = new CTMDSbenhnhantheomabenh(&m_wndReportGroup);		
		TranslateString(_T("Danh sách BN theo mã bệnh ICD"), szTemp);
		tmpStr.Format(_T("40. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CTMDSbenhnhanchuyenkhamchuyenkhoa(&m_wndReportGroup);		
		TranslateString(_T("Danh sách BN chuyển đến khám chuyên khoa"), szTemp);
		tmpStr.Format(_T("41. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		/*newReport = new CTMGeneralHealth();		
		szTemp.Format(_T("Báo cáo sức khỏe cấp tướng"));
		tmpStr.Format(_T("42. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);*/

		newReport = new CTMDSbenhnhantheomabenhV2(&m_wndReportGroup);		
		TranslateString(_T("Danh sách BN ung thư gan"), szTemp);
		tmpStr.Format(_T("42. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CTMDanhSachNNOLaiPB(&m_wndReportGroup);		
		TranslateString(_T("Thống kê danh sách người nhà ở lại phòng bệnh"), szTemp);
		tmpStr.Format(_T("43. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CTMTotalVisitorStayin(&m_wndReportGroup);
		TranslateString(_T("Báo cáo tổng người nhà ở lại toàn bệnh viện"), szTemp);
		tmpStr.Format(_T("43.1 %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		//if (pMF->GetCurrentDepartmentID() == _T("B9"))
		//{
		//	newReport = new CRMGeneralExaminationInformationReport(&m_wndReportGroup);
		//	//newReport->Create(&m_wndReportGroup);
		//	//newReport->OnInitDialog();
		//	TranslateString(_T("General Examination Information Report"), szTemp);
		//	tmpStr.Format(_T("44. %s"), szTemp);
		//	obj->Add(tmpStr, _T(""), newReport);
		//}

		newReport = new CTMGeneralExaminationInformationReport(&m_wndReportGroup);
		TranslateString(_T("General Examination Information Report"), szTemp);
		tmpStr.Format(_T("45. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);


		newReport = new CTMEndoscopyListReport(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Endoscopy List Report"), szTemp);
		tmpStr.Format(_T("46. %s (Khoa B9)"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CTMDischargePatientAndCareL1(&m_wndReportGroup);
		TranslateString(_T("Báo cáo thu dung, chăm sóc cấp 1"), szTemp);
		tmpStr.Format(_T("47. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CTMPatientCareAllLevel(&m_wndReportGroup);
		TranslateString(_T("Báo cáo chăm sóc các cấp"), szTemp);
		tmpStr.Format(_T("48. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);
	}
}

void CHMSReportFormDialog::CreateHospitalFeeReports()
{
	CGuiView *newReport = NULL;
	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
	CString tmpStr, szTemp;

	tmpStr.Empty();
	szTemp.Empty();
	CDocPane::CDocPaneInfo *obj = NULL;
	//Phan nhom bao cao chung
	obj = m_wndReportGroup.AddPane(_T("A.GENERAL_REPORTS"));
	if (!pMF->CheckPermission(_T("15.12")))
	{
			newReport = new CRptDanhSachHoaDonThuPhi(&m_wndReportGroup);
			newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Charged Invoice List"), szTemp);
			tmpStr.Format(_T("1. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMGeneralReportbyClerk(&m_wndReportGroup);
			newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("General Report by Clerk"), szTemp);
			tmpStr.Format(_T("2. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMPaidPatientList(&m_wndReportGroup);
			newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Paid Patient List"), szTemp);
			tmpStr.Format(_T("3. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMR99PaidPatientList(&m_wndReportGroup);
			newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("R99 Paid Patient List"), szTemp);
			tmpStr.Format(_T("3.1 %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMPaidPatientListR5x(&m_wndReportGroup);
			newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Paid Patient List R5x"), szTemp);
			tmpStr.Format(_T("3.2 %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMGeneralCollectbyDepartment(&m_wndReportGroup);
			newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("General Collect by Department"), szTemp);
			tmpStr.Format(_T("4. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMCollectDetailbyItem(&m_wndReportGroup);
			newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Collect Detail by Item"), szTemp);
			tmpStr.Format(_T("5. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMCollectDetailByItem_(&m_wndReportGroup);
			newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Collect Detail by Item 1"), szTemp);
			tmpStr.Format(_T("5.1 %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMCollectDetailByItem_2017(&m_wndReportGroup);
			newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Collect Detail by Item 2017"), szTemp);
			tmpStr.Format(_T("5.1.1 %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMChiTietTheoDanhMuc_2024(&m_wndReportGroup);
			newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("CHI TIẾT THEO DANH MỤC ***2024**"), szTemp);
			tmpStr.Format(_T("5.1.1.1 %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMCollectDetailByItem_2022(&m_wndReportGroup);
			newReport->Create(&m_wndReportGroup);			
			TranslateString(_T("Chi tiết theo danh mục đối chiếu với trung tâm XN"), szTemp);
			tmpStr.Format(_T("5.1.2 %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CSOMThongKeTienChiTraChoPTV(&m_wndReportGroup);
			newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Bao cao chi tra lai tien"), szTemp);
			tmpStr.Format(_T("5.1.3 %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMSpendDetailByItem(&m_wndReportGroup);
			newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Spend Detail by Item"), szTemp);
			tmpStr.Format(_T("5.2 %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMSpendDetailByItem_2017(&m_wndReportGroup);
			TranslateString(_T("Spend Detail by Item 2017"), szTemp);
			tmpStr.Format(_T("5.2.1 %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMChiTietChiTheoDanhMuc_2024(&m_wndReportGroup);
			TranslateString(_T("CHI TIẾT CHI THEO DANH MỤC ***2024***"), szTemp);
			tmpStr.Format(_T("5.2.2 %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMTestPatientList(&m_wndReportGroup);
			newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Test Patient List"), szTemp);
			tmpStr.Format(_T("6. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			/*newReport = new CFMDetailCollectFeeByItem(&m_wndReportGroup);
			newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Detail Collect Fee By Item"), szTemp);
			tmpStr.Format(_T("7. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);*/

			/*newReport = new CFMFeeInvoiceCancelReport(&m_wndReportGroup);
			newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Fee Invoice Cancel List Report"), szTemp);
			tmpStr.Format(_T("7. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);*/

			newReport = new CFMFoodUnpaidPatientList(&m_wndReportGroup);
			newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Food Unpaid Patient List"), szTemp);
			tmpStr.Format(_T("8. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMGeneralRationFeeByDay(&m_wndReportGroup);
			newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("General Ration Fee By Day"), szTemp);
			tmpStr.Format(_T("9. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMFoodSummaryByDay(&m_wndReportGroup);
			newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Food Summary By Day"), szTemp);
			tmpStr.Format(_T("10. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMFoodOrderByDaySummary(&m_wndReportGroup);
			newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Food Order By Day Summary"), szTemp);
			tmpStr.Format(_T("11. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);
			
			if (pMF->GetCurrentUser() == _T("nkan") ||
				pMF->GetCurrentUser() == _T("admin"))
			{
				newReport = new CFMUnlockPatientList(&m_wndReportGroup);
				newReport->Create(&m_wndReportGroup);
				//newReport->OnInitDialog();
				TranslateString(_T("Unlock Patient List Report"), szTemp);
				tmpStr.Format(_T("11.1 %s"), szTemp);
				obj->Add(tmpStr, _T(""), newReport);

				newReport = new CFMUnlockedMoneytakerList(&m_wndReportGroup);
				//newReport->Create(&m_wndReportGroup);
				//newReport->OnInitDialog();
				TranslateString(_T("Unlocked Money-taker List"), szTemp);
				tmpStr.Format(_T("11.2 %s"), szTemp);
				obj->Add(tmpStr, _T(""), newReport);
			}
			newReport = new CFMTonghopuserthutienchuakhoaso();
			newReport->Create(&m_wndReportGroup);			
			TranslateString(_T("Danh sách user thu tiền chưa datasummary (dùng cho A11)"), szTemp);
			tmpStr.Format(_T("11.3 %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);
			
			newReport = new CFMUndischargedFoodSummary(&m_wndReportGroup);
			newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Undischarged Food Summary"), szTemp);
			tmpStr.Format(_T("12. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMFoodSummaryByLevel(&m_wndReportGroup);
			newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Food Summary by Level"), szTemp);
			tmpStr.Format(_T("13. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			//So quy tien mat
			newReport = new CCA_CashBook(&m_wndReportGroup);
			newReport->Create(&m_wndReportGroup);			
			TranslateString(_T("Sổ quỹ tiền mặt"), szTemp);
			tmpStr.Format(_T("14. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);


			newReport = new CFMCheckATMList();
			newReport->Create(&m_wndReportGroup);			
			TranslateString(_T("Kiểm soát số liệu ATM / CK"), szTemp);
			tmpStr.Format(_T("14.1 %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMExportSheetList(&m_wndReportGroup);
			newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Export Sheet List"), szTemp);
			tmpStr.Format(_T("15. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMPatientStatbyRoom2(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Patient Stat by Room 2"), szTemp);
			tmpStr.Format(_T("16. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMFeeFoodList(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Fee Food List"), szTemp);
			tmpStr.Format(_T("17. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMOpenFeePatient();
			TranslateString(_T("Open Fee Patient"), szTemp);
			tmpStr.Format(_T("18. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMPatientStatbyObjAllHospital(&m_wndReportGroup);			
			TranslateString(_T("Thống kê bệnh nhân khám và điều trị toàn viện"), szTemp);
			tmpStr.Format(_T("19. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);


			newReport = new CFMExaminationC12ListReport(&m_wndReportGroup);			
			TranslateString(_T("Thống kê bệnh nhân khám tại C12"), szTemp);
			tmpStr.Format(_T("20. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMDanhsachbnvaovienravienthanhtoan(&m_wndReportGroup);			
			TranslateString(_T("Danh sách BN vào viện - ra viện - thanh toán"), szTemp);
			tmpStr.Format(_T("21. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);


			newReport = new CFMDanhsachphoithanhtoan(&m_wndReportGroup);			
			TranslateString(_T("Danh sách phơi thanh toán"), szTemp);
			tmpStr.Format(_T("22. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMTotalIncomeinsdiff(&m_wndReportGroup);
			TranslateString(_T("Thống kê thuốc, vật tư ngoài danh mục"), szTemp);
			tmpStr.Format(_T("23 %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CEMThongkekhamc11bclc(&m_wndReportGroup);
			TranslateString(_T("Thống kê khám khu CLC"), szTemp);
			tmpStr.Format(_T("24 %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);
}

	//Nhom bao cao tam ung, hoan ung
		obj = m_wndReportGroup.AddPane(_T("B.DEPOSIT_REFUND_REPORTS"));
			newReport = new CFMAdvancePaymentList(&m_wndReportGroup);
			//////newReport->Create(&m_wndReportGroup);
			//////newReport->OnInitDialog();
			TranslateString(_T("Advance Payment List"), szTemp);
			tmpStr.Format(_T("1. %s %s"), szTemp, _T("(Mẫu 1)"));
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMDepositPatientList(&m_wndReportGroup);
			////newReport->Create(&m_wndReportGroup);
			////newReport->OnInitDialog();
			TranslateString(_T("Deposit Patient List Report"), szTemp);
			tmpStr.Format(_T("   1.1 %s %s"), szTemp, _T("(Mẫu 2)"));
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMInsuranceDepositList(&m_wndReportGroup);
			////newReport->Create(&m_wndReportGroup);
			////newReport->OnInitDialog();
			TranslateString(_T("Insurance Deposit List"), szTemp);
			//tmpStr.Format(_T("   1.1 %s %s"), szTemp, _T("(Mẫu 2)"));
			tmpStr = szTemp;
			//obj->Add(tmpStr, _T(""), newReport);
			
			newReport = new CFMRefundPatientList(&m_wndReportGroup);
			////newReport->Create(&m_wndReportGroup);
			////newReport->OnInitDialog();
			TranslateString(_T("Refund Patient List"), szTemp);
			tmpStr.Format(_T("2. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMRefundbyDepartment(&m_wndReportGroup);
			////newReport->Create(&m_wndReportGroup);
			////newReport->OnInitDialog();
			TranslateString(_T("Refund by Department"), szTemp);
			tmpStr.Format(_T("3. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			//newReport = new CFMRefundDetailbyItem(&m_wndReportGroup);
			//////newReport->Create(&m_wndReportGroup);
			//////newReport->OnInitDialog();
			//TranslateString(_T("Refund Detail by Item"), szTemp);
			//tmpStr.Format(_T("9. %s"), szTemp);
			//obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMDischargeDepositUnpaidReport(&m_wndReportGroup);
			////newReport->Create(&m_wndReportGroup);
			////newReport->OnInitDialog();
			TranslateString(_T("Discharge Deposit Unpaid Report"), szTemp);
			tmpStr.Format(_T("4. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			//newReport = new CFMConditionDepositPatientList(&m_wndReportGroup);
			//////newReport->Create(&m_wndReportGroup);
			//////newReport->OnInitDialog();
			//TranslateString(_T("Inpatient Deposit List Report"), szTemp);
			//tmpStr.Format(_T("5. %s"), szTemp);
			//obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMUnpaidAdvancePatientList(&m_wndReportGroup);
			////newReport->Create(&m_wndReportGroup);
			////newReport->OnInitDialog();
			TranslateString(_T("Unpaid Advance Patient List"), szTemp);
			tmpStr.Format(_T("5. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMUndischargedAdvancePatientList(&m_wndReportGroup);
			////newReport->Create(&m_wndReportGroup);
			////newReport->OnInitDialog();
			TranslateString(_T("Undischarged Advance Patient List"), szTemp);
			tmpStr.Format(_T("6. %s"), szTemp);
			//obj->Add(tmpStr, _T(""), newReport);

			//newReport = new CFMPaidTreatmentCostSummary(&m_wndReportGroup);
			//////newReport->Create(&m_wndReportGroup);
			//////newReport->OnInitDialog();
			//TranslateString(_T("Paid Treatment Cost Summary"), szTemp);
			//tmpStr.Format(_T("8. %s"), szTemp);
			//obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMRefundbyDepartmentEX(&m_wndReportGroup);
			////newReport->Create(&m_wndReportGroup);
			////newReport->OnInitDialog();
			TranslateString(_T("Báo cáo chi trả tạm gửi BN trong viện, thanh toán tại TYC"), szTemp);
			tmpStr.Format(_T("7. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);


	//Nhom bao cao doi tuong dich vu
_tprintf(_T("\r\ndbg 1"));
	obj = m_wndReportGroup.AddPane(_T("C.SERVICE_OBJECT_REPORTS"));
	TranslateString(_T("Outpatient"), szTemp);
	tmpStr.Format(_T("I. %s"), szTemp);
	obj->AddCaption(tmpStr);
	TranslateString(_T("Inpatient"), szTemp);
	tmpStr.Format(_T("II. %s"), szTemp);
	obj->AddCaption(tmpStr);
			newReport = new CFMGeneralServiceTreatmentCost(&m_wndReportGroup);
			////newReport->Create(&m_wndReportGroup);
			////newReport->OnInitDialog();
			TranslateString(_T("General Service Treatment Cost Report"), szTemp);
			tmpStr.Format(_T("1. %s"), szTemp);
			//obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMServicePaidSummary(&m_wndReportGroup);
			TranslateString(_T("General Service Treatment Cost Report 1"), szTemp);
			tmpStr.Format(_T("1.1 %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMServicePaidSummaryByDept(&m_wndReportGroup);
			TranslateString(_T("General Service Treatment Cost By Dept Report"), szTemp);
			tmpStr.Format(_T("1.2 %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);
			
			newReport = new CFMInsurancePaidSummaryByDeptEX(&m_wndReportGroup);
			TranslateString(_T("TỔNG HỢP CHI PHÍ BN TỒN - THEO KHOA THỰC HIỆN (THEO ĐỐI TƯỢNG)"), szTemp);
			tmpStr.Format(_T("1.2.1 %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMServicePaidSummaryByDept_2024(&m_wndReportGroup);
			TranslateString(_T("TỔNG HỢP THEO KHOA - TẤT CẢ ĐỐI TƯỢNG - ***2024***"), szTemp);
			tmpStr.Format(_T("1.2.2 %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMServiceRefundSummaryByDept(&m_wndReportGroup);
			TranslateString(_T("BẢNG TỔNG HỢP CHI PHÍ BỆNH NHÂN CHI TRẢ LẠI"), szTemp);
			tmpStr.Format(_T("1.3 %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);			

			newReport = new CFMServicePaidSummaryByDept_tyc(&m_wndReportGroup);
			TranslateString(_T("\x42\x1EA2NG \x43HI PH\xCD \x42\x1ED2I \x44\x1AF\x1EE0NG PH\x1EAAU THU\x1EACT - TH\x1EE6 THU\x1EACT"), szTemp);
			tmpStr.Format(_T("1.5 %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMSOMFoodPaidSummary(&m_wndReportGroup);
			TranslateString(_T("TH\x1ED0NG K\xCA TI\x1EC0N \x102N TH\x45O Y\xCAU \x43\x1EA6U"), szTemp);
			tmpStr.Format(_T("1.6 %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMSOMOtherFee(&m_wndReportGroup);
			TranslateString(_T("TH\x1ED0NG K\xCA TI\x1EC0N KH\xC1M \x43HUY\xCAN KHO\x41 - H\x1ED8I \x43H\x1EA8N"), szTemp);
			tmpStr.Format(_T("1.7 %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMSOMBedPaidSummary(&m_wndReportGroup);
			TranslateString(_T("THỐNG KÊ TIỀN GIƯỜNG KHU YÊU CẦU"), szTemp);
			tmpStr.Format(_T("1.8 %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMSOMI131PaidSummary(&m_wndReportGroup);
			TranslateString(_T("THỐNG KÊ TIỀN CÔNG I131"), szTemp);
			tmpStr.Format(_T("1.9 %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMSOMI131BedPaidSummary(&m_wndReportGroup);
			TranslateString(_T("THỐNG KÊ TIỀN GIƯỜNG KHU ĐIỀU TRỊ PHÓNG XẠ"), szTemp);
			tmpStr.Format(_T("1.10 %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMHealthExamByPackageFee(&m_wndReportGroup);
			TranslateString(_T("Danh sách bệnh nhân khám sức khỏe theo hợp đồng"), szTemp);
			tmpStr.Format(_T("1.11 %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);
			//newReport = new CFMServiceTreatmentCostByDay(&m_wndReportGroup);
			//////newReport->Create(&m_wndReportGroup);
			//////newReport->OnInitDialog();
			//TranslateString(_T("General Service Treatment Cost By Day"), szTemp);
			//tmpStr.Format(_T("2. %s"), szTemp);
			//obj->Add(tmpStr, _T(""), newReport);

			//newReport = new CFMServiceTreatmentCostByStaff(&m_wndReportGroup);
			//////newReport->Create(&m_wndReportGroup);
			//////newReport->OnInitDialog();
			//TranslateString(_T("General Service Treatment Cost By Staff"), szTemp);
			//tmpStr.Format(_T("3. %s"), szTemp);
			//obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMServiceIncomeList(&m_wndReportGroup);
			////newReport->Create(&m_wndReportGroup);
			////newReport->OnInitDialog();
			TranslateString(_T("Service Income List"), szTemp);
			tmpStr.Format(_T("2. %s"), szTemp);
			//obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMServiceIncomeList2(&m_wndReportGroup);
			////newReport->Create(&m_wndReportGroup);
			////newReport->OnInitDialog();
			TranslateString(_T("Service Income List 2"), szTemp);
			tmpStr.Format(_T("2.1 %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);
		
			newReport = new CFMServiceIncomeList_v2(&m_wndReportGroup);
			////newReport->Create(&m_wndReportGroup);
			////newReport->OnInitDialog();
			TranslateString(_T("Service Income List v2"), szTemp);
			tmpStr.Format(_T("2.2 %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMServiceOutlayList(&m_wndReportGroup);
			////newReport->Create(&m_wndReportGroup);
			////newReport->OnInitDialog();
			TranslateString(_T("Service Outlay List"), szTemp);
			tmpStr.Format(_T("3. %s"), szTemp);
			//obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMServiceOutlayList2(&m_wndReportGroup);
			////newReport->Create(&m_wndReportGroup);
			////newReport->OnInitDialog();
			TranslateString(_T("Service Outlay List 2"), szTemp);
			tmpStr.Format(_T("3.1 %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);
_tprintf(_T("\r\ndbg 2"));
			/*newReport = new CFMUnlockedMoneytakerList(&m_wndReportGroup);
			////newReport->Create(&m_wndReportGroup);
			////newReport->OnInitDialog();
			TranslateString(_T("Unlocked Money-taker List"), szTemp);
			tmpStr.Format(_T("4. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);*/

			newReport = new CFMPostedReceiptVoucherList(&m_wndReportGroup);
			////newReport->Create(&m_wndReportGroup);
			////newReport->OnInitDialog();
			TranslateString(_T("Posted Receipt Voucher List"), szTemp);
			tmpStr.Format(_T("4. %s"), szTemp);
			//obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMPostedReceiptVoucherList2(&m_wndReportGroup);
			////newReport->Create(&m_wndReportGroup);
			////newReport->OnInitDialog();
			TranslateString(_T("Posted Receipt Voucher List 2"), szTemp);
			tmpStr.Format(_T("4.1 %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

_tprintf(_T("\r\ndbg 3"));
			newReport = new CFMPostedPaymentVoucherList(&m_wndReportGroup);
			////newReport->Create(&m_wndReportGroup);
			////newReport->OnInitDialog();
			TranslateString(_T("Posted Payment Voucher List"), szTemp);
			tmpStr.Format(_T("5. %s"), szTemp);
			//obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMPostedPaymentVoucherList2(&m_wndReportGroup);
			////newReport->Create(&m_wndReportGroup);
			////newReport->OnInitDialog();
			TranslateString(_T("Posted Payment Voucher List 2"), szTemp);
			tmpStr.Format(_T("5.1 %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMTempSendPatientList(&m_wndReportGroup);
			////newReport->Create(&m_wndReportGroup);
			////newReport->OnInitDialog();
			TranslateString(_T("Temp Send Patient List By Dept"), szTemp);
			tmpStr.Format(_T("6. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMTempSendPatientListByDay(&m_wndReportGroup);
			////newReport->Create(&m_wndReportGroup);
			////newReport->OnInitDialog();
			TranslateString(_T("Temp Send Patient List By Day"), szTemp);
			tmpStr.Format(_T("6.1. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

_tprintf(_T("\r\ndbg 4"));

			newReport = new CFMTempSendUnPaidPatientList(&m_wndReportGroup);
			////newReport->Create(&m_wndReportGroup);
			////newReport->OnInitDialog();
			TranslateString(_T("Temp Send Unpaid Patient List"), szTemp);
			tmpStr.Format(_T("7. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMTempSendUnPaidPatientListByDay(&m_wndReportGroup);
			////newReport->Create(&m_wndReportGroup);
			////newReport->OnInitDialog();
			TranslateString(_T("Temp Send Unpaid Patient List By Day"), szTemp);
			tmpStr.Format(_T("7.1. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMTempSendNoOutPatientList(&m_wndReportGroup);
			////newReport->Create(&m_wndReportGroup);
			////newReport->OnInitDialog();
			TranslateString(_T("Temp Send No Out Patient List"), szTemp);
			tmpStr.Format(_T("8. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMTempSendNoOutPatientListByDay(&m_wndReportGroup);
			////newReport->Create(&m_wndReportGroup);
			////newReport->OnInitDialog();
			TranslateString(_T("Temp Send No Out Patient List By Day"), szTemp);
			tmpStr.Format(_T("8.1. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMDepositUnpaidOutedPatientList(&m_wndReportGroup);
			////newReport->Create(&m_wndReportGroup);
			////newReport->OnInitDialog();
			TranslateString(_T("Deposit Unpaid Outed Patient List"), szTemp);
			tmpStr.Format(_T("9. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMDepositUnpaidOutedPatientListByDay(&m_wndReportGroup);
			////newReport->Create(&m_wndReportGroup);
			////newReport->OnInitDialog();
			TranslateString(_T("Deposit Unpaid Outed Patient List By Day"), szTemp);
			tmpStr.Format(_T("9.1. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

_tprintf(_T("\r\ndbg 4.1"));
			newReport = new CFMLyingPatientList(&m_wndReportGroup);
			////newReport->Create(&m_wndReportGroup);
			////newReport->OnInitDialog();
			TranslateString(_T("Lying Patient List"), szTemp);
			tmpStr.Format(_T("10. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);
_tprintf(_T("\r\ndbg 4.2"));
			newReport = new CFMAdmitedPatientList(&m_wndReportGroup);
			////newReport->Create(&m_wndReportGroup);
			////newReport->OnInitDialog();
			TranslateString(_T("Admited Patient List"), szTemp);
			tmpStr.Format(_T("11. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);
_tprintf(_T("\r\ndbg 4.3"));
			newReport = new CFMAdmitedPatientListByDay(&m_wndReportGroup);
			////newReport->Create(&m_wndReportGroup);
			////newReport->OnInitDialog();
			TranslateString(_T("Admited Patient List By Day"), szTemp);
			tmpStr.Format(_T("11.1. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);
_tprintf(_T("\r\ndbg 4.4"));
			newReport = new CFMDischargedPatientList(&m_wndReportGroup);
			////newReport->Create(&m_wndReportGroup);
			////newReport->OnInitDialog();
			TranslateString(_T("Discharged Patient List"), szTemp);
			tmpStr.Format(_T("12. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);
_tprintf(_T("\r\ndbg 4.5"));

			newReport = new CFMDischargedPatientListByDay(&m_wndReportGroup);
			////newReport->Create(&m_wndReportGroup);
			////newReport->OnInitDialog();
			TranslateString(_T("Discharged Patient List By Day"), szTemp);
			tmpStr.Format(_T("12.1. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);
_tprintf(_T("\r\ndbg 4.6"));
			newReport = new CFMDischargedPaidPatientList(&m_wndReportGroup);
			////newReport->Create(&m_wndReportGroup);
			////newReport->OnInitDialog();
			TranslateString(_T("Discharged Paid Patient List"), szTemp);
			tmpStr.Format(_T("13. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

_tprintf(_T("\r\ndbg 5"));

			newReport = new CFMDischargedPaidPatientListByDay(&m_wndReportGroup);
			////newReport->Create(&m_wndReportGroup);
			////newReport->OnInitDialog();
			TranslateString(_T("Discharged Paid Patient List By Day"), szTemp);
			tmpStr.Format(_T("13.1. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMDischargedUnpaidPatientList(&m_wndReportGroup);
			////newReport->Create(&m_wndReportGroup);
			////newReport->OnInitDialog();
			TranslateString(_T("Discharged UnPaid Patient List"), szTemp);
			tmpStr.Format(_T("14. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);


_tprintf(_T("\r\ndbg 6"));

			newReport = new CFMDischargedUnpaidPatientListByDay(&m_wndReportGroup);
			////newReport->Create(&m_wndReportGroup);
			////newReport->OnInitDialog();
			TranslateString(_T("Discharged UnPaid Patient List By Day"), szTemp);
			tmpStr.Format(_T("14.1. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMDischargedUnpaidPatientListByDayV2(&m_wndReportGroup);
			////newReport->Create(&m_wndReportGroup);
			////newReport->OnInitDialog();
			TranslateString(_T("Danh sách BN kết thúc ra viện nhưng không xác nhận phơi TT"), szTemp);
			tmpStr.Format(_T("14.2. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMStatisticPaidPatientList2(&m_wndReportGroup);
			////newReport->Create(&m_wndReportGroup);
			////newReport->OnInitDialog();
			TranslateString(_T("Statistic Paid Patient List"), szTemp);
			tmpStr.Format(_T("15. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			//Danh sach benh nhan mien giam
			newReport = new CFMDANHSACHMIENGIAM(&m_wndReportGroup);
			TranslateString(_T("Danh sách bệnh nhân miễn giảm"), szTemp);
			tmpStr.Format(_T("16. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMDiscountList(&m_wndReportGroup);
			TranslateString(_T("Dicount List"), szTemp);
			tmpStr.Format(_T("16.1. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMFoodOrderByDay(&m_wndReportGroup);
			TranslateString(_T("Food Order By Day"), szTemp);
			tmpStr.Format(_T("17. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CHFFoodHCKTReport(&m_wndReportGroup);
			TranslateString(_T("Báo cáo Tổng hợp quân số ăn gói dịch vụ"), szTemp);
			tmpStr.Format(_T("17.1 %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);			

			newReport = new CFMUnpaidPatientFoodList(&m_wndReportGroup);
			TranslateString(_T("Unpaid Patient Food List"), szTemp);
			tmpStr.Format(_T("18. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMServiceRefundList(&m_wndReportGroup);
			TranslateString(_T("Service Refund List"), szTemp);
			tmpStr.Format(_T("19. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMServiceIncomeOutlay(&m_wndReportGroup);
			TranslateString(_T("Service Income Outlay"), szTemp);
			tmpStr.Format(_T("20. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			/*newReport = new CFMServiceIncomeOutlayWithFree(&m_wndReportGroup);
			TranslateString(_T("Service Income Outlay With Free"), szTemp);
			tmpStr.Format(_T("20.1 %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);*/

			newReport = new CFMServiceRefundByDept(&m_wndReportGroup);
			TranslateString(_T("Service Refund By Dept"), szTemp);
			tmpStr.Format(_T("20.2 %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);
			newReport = new CFMCashLockedOutsideFund(&m_wndReportGroup);
			TranslateString(_T("Cash Locked Outside Fund"), szTemp);
			tmpStr.Format(_T("21. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			if (pMF->GetCurrentUser() == _T("nkan") 
				||	pMF->GetCurrentUser() == _T("nttnga1")
				|| pMF->GetCurrentUser() == _T("nttngabh")
				||pMF->GetCurrentUser() == _T("nttngaptc")
				||pMF->GetCurrentUser() == _T("hathuy")
				||pMF->GetCurrentUser() == _T("hathuybh"))
			{

			newReport = new CFMCashNotLocked(&m_wndReportGroup);
			TranslateString(_T("Cash Not Locked"), szTemp);
			tmpStr.Format(_T("22. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);
			}

			newReport = new CFMServiceIncomeList3(&m_wndReportGroup);
			TranslateString(_T("Service Income List 3"), szTemp);
			tmpStr.Format(_T("23. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMExportFeeListButton(&m_wndReportGroup);
			TranslateString(_T("Export Fee List without Pdept"), szTemp);
			tmpStr.Format(_T("24. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMDepositListByOtherObject(&m_wndReportGroup);			
			TranslateString(_T("DANH SÁCH BỆNH NHÂN TẠM GỬI Ở HỘ KHÁC"), szTemp);
			tmpStr.Format(_T("25. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMDeleteFeePatientList(&m_wndReportGroup);			
			TranslateString(_T("DANH SÁCH BỆNH NHÂN CHƯA THANH TOÁN (KSK)"), szTemp);
			tmpStr.Format(_T("26. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);


			TranslateString(_T("DOANH THU GÓI DỊCH VỤ"), szTemp);
	tmpStr.Format(_T("II. %s"), szTemp);
	obj->AddCaption(tmpStr);

			newReport = new CFMReturnPackagePatientList(&m_wndReportGroup);			
			TranslateString(_T("DANH SÁCH BỆNH NHÂN CHI TRẢ LẠI GÓI DỊCH VỤ CHI TIẾT"), szTemp);
			tmpStr.Format(_T("26. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMReturnPackageSummary(&m_wndReportGroup);			
			TranslateString(_T("BÁO CÁO CHI TỔNG HỢP THEO GÓI TOÀN VIỆN"), szTemp);
			tmpStr.Format(_T("27. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);


			newReport = new CFMReturnPackageSummaryEX(&m_wndReportGroup);			
			TranslateString(_T("BÁO CÁO CHI TỔNG HỢP GÓI NHÀ LƯU TRÚ"), szTemp);
			tmpStr.Format(_T("27.1 %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);


			newReport = new CFMReturnPackageSummaryByDept(&m_wndReportGroup);			
			TranslateString(_T("BÁO CÁO CHI TỔNG HỢP THEO GÓI THEO KHOA"), szTemp);
			tmpStr.Format(_T("28. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMIncomePackagePatientList(&m_wndReportGroup);			
			TranslateString(_T("DANH SÁCH BỆNH NHÂN THU GÓI DỊCH VỤ"), szTemp);
			tmpStr.Format(_T("29. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMIncomePackagePatientListDetail(&m_wndReportGroup);			
			TranslateString(_T("DANH SÁCH BỆNH NHÂN THU GÓI DỊCH VỤ CHI TIẾT"), szTemp);
			tmpStr.Format(_T("30. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMIncomePackageSummary(&m_wndReportGroup);			
			TranslateString(_T("BÁO CÁO THU TỔNG HỢP THEO GÓI TOÀN VIỆN"), szTemp);
			tmpStr.Format(_T("31. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMIncomePackageSummaryEX(&m_wndReportGroup);			
			TranslateString(_T("BÁO CÁO THU TỔNG HỢP NHÀ LƯU TRÚ"), szTemp);
			tmpStr.Format(_T("31.1 %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMIncomePackageSummaryEX1(&m_wndReportGroup);			
			TranslateString(_T("BÁO CÁO THU TỔNG HỢP NGƯỜI NHÀ Ở LẠI"), szTemp);
			tmpStr.Format(_T("31.2 %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMIncomePackageSummaryByDept(&m_wndReportGroup);			
			TranslateString(_T("BÁO CÁO THU TỔNG HỢP THEO GÓI THEO KHOA"), szTemp);
			tmpStr.Format(_T("32. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);	

			newReport = new CEMIncomebyRoom(&m_wndReportGroup);
			TranslateString(_T("Income by Room"), szTemp);
			tmpStr.Format(_T("33. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);			

			newReport = new CEMPatientStatbyRoom2(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Patient Stat by Room 2"), szTemp);
			tmpStr.Format(_T("34. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMServicePaidSummaryByDeptEX(&m_wndReportGroup);			
			TranslateString(_T("BÁO CÁO DOANH THU HẬU CẦN"), szTemp);
			tmpStr.Format(_T("35. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMDoanhThuHauCan_2024(&m_wndReportGroup);			
			TranslateString(_T("BÁO CÁO DOANH THU HẬU CẦN ***2024***"), szTemp);
			tmpStr.Format(_T("35.1 %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMDoanhThudicvuTYCTrongVien(&m_wndReportGroup);			
			TranslateString(_T("DANH SÁCH BỆNH NHÂN SỬ DỤNG DỊCH VỤ TYC TRONG VIỆN"), szTemp);
			tmpStr.Format(_T("36. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMDoanhThuKhamSucKhoe(&m_wndReportGroup);
			////newReport->Create(&m_wndReportGroup);
			////newReport->OnInitDialog();
			TranslateString(_T("Doanh thu KSK theo công ty"), szTemp);
			tmpStr.Format(_T("37. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);


			newReport = new CEMTaiChinhKhamSucKhoe(&m_wndReportGroup);
			newReport->Create(&m_wndReportGroup);
			newReport->OnInitDialog();
			TranslateString(_T("Báo cáo tài chính khám bệnh"), szTemp);
			tmpStr.Format(_T("38. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);
			
			TranslateString(_T("BÁO CÁO DOANH THU THEO KHOA"), szTemp);
			tmpStr.Format(_T("III. %s"), szTemp);
			obj->AddCaption(tmpStr);

			newReport = new CFMTotalInComeByDoctorAB(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("BẢNG TỔNG HỢP DOANH THU THEO BÁC SĨ - KHU AB"), szTemp);
			tmpStr.Format(_T("35. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMTotalRefundByDoctorAB(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("BẢNG TỔNG HỢP CHI THEO BÁC SĨ - KHU AB"), szTemp);
			tmpStr.Format(_T("36. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMTotalInComeByFeeTypeAB(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("BẢNG TỔNG HỢP DOANH THU BỆNH NHÂN - KHU AB"), szTemp);
			tmpStr.Format(_T("37. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMTotalRefundByFeeTypeAB(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("BẢNG TỔNG HỢP CHI TRẢ BỆNH NHÂN - KHU AB"), szTemp);
			tmpStr.Format(_T("38. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMTotalInComeByDoctorUT(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("BẢNG TỔNG HỢP DOANH THU PHÒNG KHÁM UNG THƯ"), szTemp);
			tmpStr.Format(_T("39. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMTotalInComeByDoctorUT(&m_wndReportGroup);			
			TranslateString(_T("BẢNG TỔNG HỢP DOANH THU PHÒNG KHÁM UNG THƯ"), szTemp);
			tmpStr.Format(_T("40. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMDoanhthuphongkhamC11(&m_wndReportGroup);			
			TranslateString(_T("DOANH THU PHÒNG KHÁM C11"), szTemp);
			tmpStr.Format(_T("41. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			TranslateString(_T("BÁO CÁO TOÀN VIỆN"), szTemp);
			tmpStr.Format(_T("IV. %s"), szTemp);
			obj->AddCaption(tmpStr);

			newReport = new CFMTotalInComeByFeeTypeAllHospital(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("BẢNG TỔNG HỢP DOANH THU BỆNH NHÂN - TOÀN VIỆN"), szTemp);
			tmpStr.Format(_T("41. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMDanhSachLinhTienBoiDuongPTTT(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("DANH SÁCH CÁC KHOA LĨNH TIỀN BỒI DƯỠNG PHẪU THỦ THUẬT"), szTemp);
			tmpStr.Format(_T("42. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMKetQuaHoatDongThuChiPhauThuThuat(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("KẾT QUẢ HOẠT ĐỘNG THU - CHI PHẪU THỦ THUẬT"), szTemp);
			tmpStr.Format(_T("43. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CTMOperationList(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Bồi dưỡng PTTT"), szTemp);
			tmpStr.Format(_T("44 %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);


			TranslateString(_T("BÁO CÁO TIỀN ĂN HẬU CẦN"), szTemp);

			tmpStr.Format(_T("V. %s"), szTemp);
			obj->AddCaption(tmpStr);
			newReport = new CFMBaoanhaucan_dacapan(&m_wndReportGroup);			
			TranslateString(_T("Danh sách bệnh nhân đã cấp ăn hậu cần"), szTemp);
			tmpStr.Format(_T("45. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CHFNTTTotalFood(&m_wndReportGroup);			
			TranslateString(_T("TỔNG HỢP QUÂN SỐ ĂN HẬU CẦN"), szTemp);
			tmpStr.Format(_T("46. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);


			newReport = new CFMNTTObjectFood(&m_wndReportGroup);			
			TranslateString(_T("PHÂN TÍCH ĐỐI TƯỢNG (2020)"), szTemp);
			tmpStr.Format(_T("47. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMHMSFoodReportHCKT(&m_wndReportGroup);			
			TranslateString(_T("Báo ăn hậu cần"), szTemp);
			tmpStr.Format(_T("48. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);


			TranslateString(_T("NHÓM BÁO CÁO CÔNG NỢ"), szTemp);

			tmpStr.Format(_T("VI. %s"), szTemp);
			obj->AddCaption(tmpStr);
			
			newReport = new CFMDanhmuchopdong(&m_wndReportGroup);			
			TranslateString(_T("DANH SÁCH HỢP ĐỒNG THEO NĂM"), szTemp);
			tmpStr.Format(_T("1. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);			

			newReport = new CFMSupplierPaymentList(&m_wndReportGroup);		
			TranslateString(_T("Supplier Payment List"), szTemp);
			tmpStr.Format(_T("2- %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMSupplierPaymentList2(&m_wndReportGroup);			
			TranslateString(_T("Supplier Payment List 2"), szTemp);
			tmpStr.Format(_T("3- %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);


			TranslateString(_T("BÁO CÁO KHOA C16"), szTemp);

			tmpStr.Format(_T("VII. %s"), szTemp);
			obj->AddCaption(tmpStr);

			newReport = new CBBOnHandList(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Báo cáo theo dõi máu tồn kho"), szTemp);
			tmpStr.Format(_T("1. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);
			
			newReport = new CBBExportList(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Báo cáo theo dõi máu xuất hàng ngày"), szTemp);
			tmpStr.Format(_T("2. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);
			
			newReport = new CBloodBankListServicePostedEX(&m_wndReportGroup);
			newReport->Create(&m_wndReportGroup);
			newReport->OnInitDialog();
			TranslateString(_T("Báo cáo doanh thu tiền máu dịch vụ đối soát với tài chính"), szTemp);
			tmpStr.Format(_T("3 %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);


_tprintf(_T("\r\ndbg 7"));

	//Nhom bao cao doi tuong BHYT
	obj = m_wndReportGroup.AddPane(_T("D.INSURANCE_OBJECT_REPORTS"));
	/////////////////////////////////
	TranslateString(_T("General"), szTemp);
	tmpStr.Format(_T("I. %s"), szTemp);
	obj->AddCaption(tmpStr);
			newReport = new CFMInsuranceDepositList(&m_wndReportGroup);
			////newReport->Create(&m_wndReportGroup);
			////newReport->OnInitDialog();
			TranslateString(_T("Insurance Deposit List"), szTemp);
			//tmpStr.Format(_T("   1.1 %s %s"), szTemp, _T("(Mẫu 2)"));
			tmpStr.Format(_T("1. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			if (pMF->GetCurrentUser() == _T("hathuy") || pMF->GetCurrentUser() == _T("hathuybh"))
			{
			newReport = new CFMInsuranceDepositListCancel(&m_wndReportGroup);			
			TranslateString(_T("DANH SÁCH PHIẾU TẠM GỬI BỊ HỦY"), szTemp);			
			tmpStr.Format(_T("1.1 %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);
			}

			newReport = new CFMUndischargedAdvancePatientList(&m_wndReportGroup);
			////newReport->Create(&m_wndReportGroup);
			////newReport->OnInitDialog();
			TranslateString(_T("Undischarged Advance Patient List"), szTemp);
			tmpStr.Format(_T("2. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMSolderInsuranceIncomeOutlay(&m_wndReportGroup);
			TranslateString(_T("BÁO CÁO THU CHI BHYT ĐỐI TƯỢNG QUÂN"), szTemp);
			tmpStr.Format(_T("3 %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMInsUnpaidPatientFoodList(&m_wndReportGroup);
			TranslateString(_T("Danh sách BN bảo hiểm ăn chưa thanh toán"), szTemp);
			tmpStr.Format(_T("4. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);
			
			newReport = new CFMInsDepositUnPaidPatientList(&m_wndReportGroup);
			TranslateString(_T("Danh sách bệnh nhân tạm gửi bảo hiểm chưa thanh toán"), szTemp);
			tmpStr.Format(_T("5. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);
	///////////////////////////
	TranslateString(_T("Outpatient"), szTemp);
	tmpStr.Format(_T("II. %s"), szTemp);
	obj->AddCaption(tmpStr);
	newReport = new CFMOutpatientInsuranceCost20A(&m_wndReportGroup);
	////newReport->Create(&m_wndReportGroup);
	////newReport->OnInitDialog();
	TranslateString(_T("--Báo cáo thuốc BN-BH ngoại trú trong khoa - mẫu 20A"), szTemp);
	tmpStr.Format(_T("1. %s ***"), szTemp);
	obj->Add(tmpStr, _T(""), newReport);

	newReport = new CFMOutpatientInsuranceCost80A(&m_wndReportGroup);
	////newReport->Create(&m_wndReportGroup);
	////newReport->OnInitDialog();
	TranslateString(_T("--Báo cáo BN-BH ngoại trú trong khoa - mẫu 80A (A6-A...)"), szTemp);
	tmpStr.Format(_T("2. %s ***"), szTemp);
	obj->Add(tmpStr, _T(""), newReport);

	newReport = new CFMOutpatientInsuranceReport21a1(&m_wndReportGroup);
	////newReport->Create(&m_wndReportGroup);
	////newReport->OnInitDialog();
	TranslateString(_T("--Báo cáo DVKT BN-BH ngoại trú trong khoa - mẫu 21A"), szTemp);
	tmpStr.Format(_T("3. %s ***"), szTemp);
	obj->Add(tmpStr, _T(""), newReport);

	newReport = new CFMOutpatientInsuranceReport19A(&m_wndReportGroup);
	////newReport->Create(&m_wndReportGroup);
	////newReport->OnInitDialog();
	TranslateString(_T("--Báo cáo DVKT BN-BH ngoại trú trong khoa - mẫu 19A"), szTemp);
	tmpStr.Format(_T("3.1 %s ***"), szTemp);
	obj->Add(tmpStr, _T(""), newReport);

	newReport = new CFMSudungthuocBHYT20a(&m_wndReportGroup);
	////newReport->Create(&m_wndReportGroup);
	////newReport->OnInitDialog();
	TranslateString(_T("Drug by quarter of a year"), szTemp);
	tmpStr.Format(_T("4. %s ***"), szTemp);
	obj->Add(tmpStr, _T(""), newReport);

	newReport = new CFMSudungthuocBHYT20a_Y2015(&m_wndReportGroup);
	////newReport->Create(&m_wndReportGroup);
	////newReport->OnInitDialog();
	TranslateString(_T("Drug by quarter of a year 2015"), szTemp);
		tmpStr.Format(_T("4.1 %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

 		newReport = new CFMSudungthuocBHYT20a_Y2015New(&m_wndReportGroup);
	// 		////newReport->Create(&m_wndReportGroup);
	// 		////newReport->OnInitDialog();
 		TranslateString(_T("Drug by quarter of a year 2015 New"), szTemp);
 		tmpStr.Format(_T("4.2 %s"), szTemp);
 		obj->Add(tmpStr, _T(""), newReport);
// Báo cáo này dành cho chị Thu làm cho khu A11. Mục đích lấy tất tần tật cả bệnh nhân dịch vụ cả bệnh nhân BH
	 	newReport = new CFMSudungthuocA11(&m_wndReportGroup);
	// 		////newReport->Create(&m_wndReportGroup);
	// 		////newReport->OnInitDialog();
 		TranslateString(_T("Bảng kê sử dụng thuốc A11"), szTemp);
 		tmpStr.Format(_T("4.3 %s"), szTemp);
 		obj->Add(tmpStr, _T(""), newReport);




	newReport = new CFMInsuranceReport21a(&m_wndReportGroup);
	////newReport->Create(&m_wndReportGroup);
	////newReport->OnInitDialog();
	TranslateString(_T("General statistics and technical services for patients using medical insurance"), szTemp);
	tmpStr.Format(_T("2. %s"), szTemp);
	//obj->Add(tmpStr, _T(""), newReport);
	_tprintf(_T("\r\ndbg 8"));
	newReport = new CFMInsuranceReport21a1(&m_wndReportGroup);		
	TranslateString(_T("General statistics and technical services for patients using medical insurance"), szTemp);
	tmpStr.Format(_T("5. %s ***"), szTemp);
	obj->Add(tmpStr, _T(""), newReport);

	newReport = new CFMInsuranceReport19a(&m_wndReportGroup);		
	TranslateString(_T("Báo cáo sử dụng vật tư 19A"), szTemp);
	tmpStr.Format(_T("5.1 %s ***"), szTemp);
	obj->Add(tmpStr, _T(""), newReport);

	newReport = new CFMInsuranceReport21a1_Y2015(&m_wndReportGroup);
	////newReport->Create(&m_wndReportGroup);
	////newReport->OnInitDialog();
	TranslateString(_T("General statistics and technical services for patients using medical insurance 2015"), szTemp);
	tmpStr.Format(_T("2.2 %s"), szTemp);
	//obj->Add(tmpStr, _T(""), newReport);
	_tprintf(_T("\r\ndbg 9"));
	//newReport = new CFMDetailInsurance21aReport(&m_wndReportGroup);
	//////newReport->Create(&m_wndReportGroup);
	//////newReport->OnInitDialog();
	//TranslateString(_T("Detail Insurance Fee 21A Report"), szTemp);
	//tmpStr.Format(_T("2.2 %s"), szTemp);
	//obj->Add(tmpStr, _T(""), newReport);

	newReport = new CFMInsuranceCost79A(&m_wndReportGroup);	
	TranslateString(_T("General Examination Cost 79A Report (79a - BHYT)"), szTemp);
	tmpStr.Format(_T("6. %s ***"), szTemp);
	obj->Add(tmpStr, _T(""), newReport);

	newReport = new CFMGeneralInsuranceCost79ATH(&m_wndReportGroup);
	////newReport->Create(&m_wndReportGroup);
	////newReport->OnInitDialog();
	TranslateString(_T("79A TH - BHYT"), szTemp);
	tmpStr.Format(_T("7. %s"), szTemp);
	obj->Add(tmpStr, _T(""), newReport);

	newReport = new CFMInsuranceCost80A(&m_wndReportGroup);	
	TranslateString(_T("General Treatment Cost 80A Report (80a - BHYT)"), szTemp);
	tmpStr.Format(_T("8. %s ***"), szTemp);
	obj->Add(tmpStr, _T(""), newReport);
	_tprintf(_T("\r\ndbg 10"));

	newReport = new CFMInsuranceCost79_80A(&m_wndReportGroup);	
	TranslateString(_T("Báo cáo so sánh với số liệu trên cổng BHYT (79 - 80A)"), szTemp);
	tmpStr.Format(_T("8.1 %s ***"), szTemp);
	obj->Add(tmpStr, _T(""), newReport);

	newReport = new CFMGeneralInsuranceCost80ATH(&m_wndReportGroup);
	////newReport->Create(&m_wndReportGroup);
	////newReport->OnInitDialog();
	TranslateString(_T("80A TH - BHYT"), szTemp);
	tmpStr.Format(_T("9. %s"), szTemp);
	obj->Add(tmpStr, _T(""), newReport);

	newReport = new CFMWeeklyReport(&m_wndReportGroup);
	////newReport->Create(&m_wndReportGroup);
	////newReport->OnInitDialog();
	TranslateString(_T("Weekly Hospital Fee Report"), szTemp);
	tmpStr.Format(_T("10. %s"), szTemp);
	obj->Add(tmpStr, _T(""), newReport);

	newReport = new CFMInsuranceFeeLossReport(&m_wndReportGroup);
	////newReport->Create(&m_wndReportGroup);
	////newReport->OnInitDialog();
	TranslateString(_T("Insurance Fee Loss Report"), szTemp);
	tmpStr.Format(_T("11. %s"), szTemp);
	obj->Add(tmpStr, _T(""), newReport);
	_tprintf(_T("\r\ndbg 11"));

	newReport = new CFMFeeLossByObjectReport(&m_wndReportGroup);	
	TranslateString(_T("Báo cáo thất thu bệnh nhân phòng khám"), szTemp);
	tmpStr.Format(_T("11.1 %s"), szTemp);
	obj->Add(tmpStr, _T(""), newReport);
	_tprintf(_T("\r\ndbg 11"));

	newReport = new CFMFeeLossByObjectReportVer1(&m_wndReportGroup);	
	TranslateString(_T("Báo cáo thực thất thu bệnh nhân phòng khám"), szTemp);
	tmpStr.Format(_T("11.2 %s"), szTemp);
	obj->Add(tmpStr, _T(""), newReport);
	_tprintf(_T("\r\ndbg 11"));

	newReport = new CFMFeeLossByObjectReportVer2(&m_wndReportGroup);	
	TranslateString(_T("Báo cáo thực thất thu bệnh nhân phòng khám - thuốc, vật tư"), szTemp);
	tmpStr.Format(_T("11.3 %s"), szTemp);
	obj->Add(tmpStr, _T(""), newReport);
	_tprintf(_T("\r\ndbg 11"));

	newReport = new CFMTestCovid19NguoinhaReport(&m_wndReportGroup);
	////newReport->Create(&m_wndReportGroup);
	////newReport->OnInitDialog();
	TranslateString(_T("Báo cáo chưa thu phí xét nghiệm covid 19 người nhà"), szTemp);
	tmpStr.Format(_T("11.4 %s"), szTemp);
	obj->Add(tmpStr, _T(""), newReport);
	_tprintf(_T("\r\ndbg 11"));

	newReport = new CFMDanhsachtralaixncovid(&m_wndReportGroup);	
	TranslateString(_T("Báo cáo danh sách trả lại tiền xn covid"), szTemp);
	tmpStr.Format(_T("11.5 %s"), szTemp);
	obj->Add(tmpStr, _T(""), newReport);
	_tprintf(_T("\r\ndbg 11"));

	newReport = new CFMDanhsachthuoc_vattu_dikem_dichvu_tralai(&m_wndReportGroup);	
	TranslateString(_T("Báo cáo sử dụng thuốc - vât tư đi kèm dịch vụ đã trả lại"), szTemp);
	tmpStr.Format(_T("11.6 %s"), szTemp);
	obj->Add(tmpStr, _T(""), newReport);
	_tprintf(_T("\r\ndbg 11"));

	newReport = new CFMOutpatientCostSynthesisbyDay(&m_wndReportGroup);
	////newReport->Create(&m_wndReportGroup);
	////newReport->OnInitDialog();
	TranslateString(_T("Outpatient Cost Synthesis by Day"), szTemp);
	tmpStr.Format(_T("9. %s"), szTemp);
	//obj->Add(tmpStr, _T(""), newReport);

	newReport = new CFMOutpatientCostSynthesisbyLine(&m_wndReportGroup);
	////newReport->Create(&m_wndReportGroup);
	////newReport->OnInitDialog();
	TranslateString(_T("Outpatient Cost Synthesis by Line"), szTemp);
	tmpStr.Format(_T("10. %s"), szTemp);
	//obj->Add(tmpStr, _T(""), newReport);

	newReport = new CFMOutpatientCostSynthesisbyDept(&m_wndReportGroup);
	////newReport->Create(&m_wndReportGroup);
	////newReport->OnInitDialog();
	TranslateString(_T("Outpatient Cost Synthesis by Dept"), szTemp);
	tmpStr.Format(_T("11. %s"), szTemp);
	//obj->Add(tmpStr, _T(""), newReport);
	_tprintf(_T("\r\ndbg 12"));
	newReport = new CFMInsuranceTreatmentCostByDept(&m_wndReportGroup);
	////newReport->Create(&m_wndReportGroup);
	////newReport->OnInitDialog();
	TranslateString(_T("Inpatient Cost Synthesis By Dept"), szTemp);
	tmpStr.Format(_T("12. %s"), szTemp);
	//obj->Add(tmpStr, _T(""), newReport);

	newReport = new CFMInsurancePatientTechDetail(&m_wndReportGroup);
	////newReport->Create(&m_wndReportGroup);
	////newReport->OnInitDialog();
	TranslateString(_T("Insurance Patient Tech Detail"), szTemp);
	tmpStr.Format(_T("13. %s"), szTemp);
	//obj->Add(tmpStr, _T(""), newReport);

	newReport = new CFMPaidDischargedInsPatient(&m_wndReportGroup);
	////newReport->Create(&m_wndReportGroup);
	////newReport->OnInitDialog();
	TranslateString(_T("Paid Discharged Insurance Patient"), szTemp);
	tmpStr.Format(_T("12. %s"), szTemp);
	obj->Add(tmpStr, _T(""), newReport);
	_tprintf(_T("\r\ndbg 13"));
	newReport = new CFMApprovedDischargedInsPatient(&m_wndReportGroup);
	////newReport->Create(&m_wndReportGroup);
	////newReport->OnInitDialog();
	TranslateString(_T("Approved Discharged Insurance Patient"), szTemp);
	tmpStr.Format(_T("13. %s"), szTemp);
	obj->Add(tmpStr, _T(""), newReport);

	newReport = new CFMSudungvattuBHYT19_Y2015(&m_wndReportGroup);
	////newReport->Create(&m_wndReportGroup);
	////newReport->OnInitDialog();
	TranslateString(_T("Insurance Material Usage"), szTemp);
	tmpStr.Format(_T("14. %s"), szTemp);
	obj->Add(tmpStr, _T(""), newReport);

_tprintf(_T("\r\ndbg 14"));
	TranslateString(_T("Inpatient"), szTemp);
	tmpStr.Format(_T("III. %s"), szTemp);
	obj->AddCaption(tmpStr);
			//Bảo hiểm Điều trị nội trú
			newReport = new CFMReceiveInsuranceTreatmentCost(&m_wndReportGroup);
			////newReport->Create(&m_wndReportGroup);
			////newReport->OnInitDialog();
			TranslateString(_T("Receive Insurance Treatment Cost Report"), szTemp);
			tmpStr.Format(_T("1. %s"), szTemp);
			//obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMExpenseInsuranceTreatmentCost(&m_wndReportGroup);
			////newReport->Create(&m_wndReportGroup);
			////newReport->OnInitDialog();
			TranslateString(_T("Expense Insurance Treatment Cost Report"), szTemp);
			tmpStr.Format(_T("2. %s"), szTemp);
			//obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMInsuranceIncomeList(&m_wndReportGroup);
			////newReport->Create(&m_wndReportGroup);
			////newReport->OnInitDialog();
			TranslateString(_T("BẢNG KÊ THANH TOÁN THU BỆNH NHÂN BẢO HIỂM"), szTemp);
			tmpStr.Format(_T("1. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMInsuranceIncomeListSOM(&m_wndReportGroup);
			////newReport->Create(&m_wndReportGroup);
			////newReport->OnInitDialog();
			TranslateString(_T("Insurance Income List SOM"), szTemp);
			tmpStr.Format(_T("1.1 %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMInsurancePostedReceiptVoucherList(&m_wndReportGroup);			
			TranslateString(_T("Insurance Posted Receipt Voucher List"), szTemp);
			tmpStr.Format(_T("2 %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMInsurancePostedReceiptVoucherListSOM(&m_wndReportGroup);
			////newReport->Create(&m_wndReportGroup);
			////newReport->OnInitDialog();
			TranslateString(_T("Insurance Posted Receipt Voucher List SOM"), szTemp);
			tmpStr.Format(_T("2.2 %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMInsurancePostedReceiptVoucherList_2024(&m_wndReportGroup);
			TranslateString(_T("BẢNG KÊ THU THEO ĐỐI TƯỢNG ***2024*** "), szTemp);
			tmpStr.Format(_T("2.3 %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMInsurancePostedReceiptVoucherListRG(&m_wndReportGroup);
			TranslateString(_T("Insurance Posted Receipt Voucher List (RG)"), szTemp);
			tmpStr.Format(_T("3 %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMInsurancePostedReceiptVoucherListRGSOM(&m_wndReportGroup);
			TranslateString(_T("Insurance Posted Receipt Voucher List (RG) SOM"), szTemp);
			tmpStr.Format(_T("3.1 %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMInsuranceOutlayList(&m_wndReportGroup);
			////newReport->Create(&m_wndReportGroup);
			////newReport->OnInitDialog();
			TranslateString(_T("BẢNG KÊ THANH TOÁN CHI BỆNH NHÂN BẢO HIỂM"), szTemp);
			tmpStr.Format(_T("4. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMInsuranceOutlayListSOM(&m_wndReportGroup);
			////newReport->Create(&m_wndReportGroup);
			////newReport->OnInitDialog();
			TranslateString(_T("BẢNG KÊ THANH TOÁN CHI BỆNH NHÂN BẢO HIỂM YÊU CẦU"), szTemp);
			tmpStr.Format(_T("4.1 %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMInsurancePostedPaymentVoucherList(&m_wndReportGroup);
			////newReport->Create(&m_wndReportGroup);
			////newReport->OnInitDialog();
			TranslateString(_T("Insurance Posted Payment Voucher List"), szTemp);
			tmpStr.Format(_T("5 %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMInsurancePostedPaymentVoucherListSOM(&m_wndReportGroup);
			////newReport->Create(&m_wndReportGroup);
			////newReport->OnInitDialog();
			TranslateString(_T("BẢNG KÊ CHỨNG TỪ GHI SỔ CHI BẢO HIỂM THEO YÊU CẦU"), szTemp);
			tmpStr.Format(_T("5.1 %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMInsurancePostedPaymentVoucherList_2024(&m_wndReportGroup);
			TranslateString(_T("BẢNG KÊ CHI THEO ĐỐI TƯỢNG ***2024*** "), szTemp);
			tmpStr.Format(_T("5.2 %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMInsurancePostedPaymentVoucherListRG(&m_wndReportGroup);
			TranslateString(_T("Insurance Posted Payment Voucher List (RG)"), szTemp);
			tmpStr.Format(_T("6 %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);
			
			newReport = new CFMInsurancePostedPaymentVoucherListRGSOM(&m_wndReportGroup);
			TranslateString(_T("BẢNG KÊ TỔNG HỢP CHỨNG TỪ GHI SỔ CHI BẢO HIỂM THEO YÊU CẦU"), szTemp);
			tmpStr.Format(_T("6.1 %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

_tprintf(_T("\r\ndbg 15"));			

			newReport = new CFMGeneralInsuranceIncomeList(&m_wndReportGroup);
			////newReport->Create(&m_wndReportGroup);
			////newReport->OnInitDialog();
			TranslateString(_T("General Insurance Income List"), szTemp);
			tmpStr.Format(_T("5. %s"), szTemp);
			//obj->Add(tmpStr, _T(""), newReport);
_tprintf(_T("\r\ndbg 15.1"));	
			newReport = new CFMGeneralInsuranceOutlayList(&m_wndReportGroup);
			////newReport->Create(&m_wndReportGroup);
			////newReport->OnInitDialog();
			TranslateString(_T("General Insurance Outlay List"), szTemp);
			tmpStr.Format(_T("6. %s"), szTemp);
			//obj->Add(tmpStr, _T(""), newReport);
_tprintf(_T("\r\ndbg 15.2"));	

			//Bao cao tong hop thu chenh 
			newReport = new CFMInsuranceDiffPayment(&m_wndReportGroup);
			////newReport->Create(&m_wndReportGroup);
			////newReport->OnInitDialog();
			TranslateString(_T("Insurance Diff Payment List"), szTemp);
			tmpStr.Format(_T("7. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);
_tprintf(_T("\r\ndbg 15.3"));	
			//Bao cao tong hop thu BHYT
  			newReport = new CFMInsuranceReceiptSummary(&m_wndReportGroup);
  			////newReport->Create(&m_wndReportGroup);
  			////newReport->OnInitDialog();
  			TranslateString(_T("Insurance Receipt Summary"), szTemp);
  			tmpStr.Format(_T("8. %s"), szTemp);
  			obj->Add(tmpStr, _T(""), newReport);

			//Phan tich tong hop phan BHYT thanh toan
  			newReport = new CFMInsurancePaidSummary(&m_wndReportGroup);
  			////newReport->Create(&m_wndReportGroup);
  			////newReport->OnInitDialog();
  			TranslateString(_T("Insurance Paid Summary"), szTemp);
  			tmpStr.Format(_T("9. %s"), szTemp);
  			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMInsurancePaidSummaryByDept(&m_wndReportGroup);
			TranslateString(_T("TỔNG HỢP CHI PHÍ BỆNH NHÂN BẢO HIỂM - THEO KHOA THỰC HIỆN"), szTemp);
			tmpStr.Format(_T("10. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMInsurancePaidSummaryByDeptEX(&m_wndReportGroup);
			TranslateString(_T("TỔNG HỢP CHI PHÍ BỆNH NHÂN TỒN - THEO KHOA THỰC HIỆN"), szTemp);
			tmpStr.Format(_T("10.1 %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMTestCovid19ByObjectReport(&m_wndReportGroup);
			TranslateString(_T("TỔNG HỢP XÉT NGHIỆM COVID 19 - (CHỌN NGUỒN)"), szTemp);
			tmpStr.Format(_T("10.2 %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMTestCovid19ByObjectReport_Ver1(&m_wndReportGroup);
			TranslateString(_T("TỔNG HỢP XÉT NGHIỆM COVID 19 - (KHÔNG CHỌN NGUỒN)"), szTemp);
			tmpStr.Format(_T("10.2.1 %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMTestCovid19Nguoinha_dathanhtoanReport(&m_wndReportGroup);
			TranslateString(_T("TỔNG HỢP XÉT NGHIỆM COVID 19 NGƯỜI NHÀ - ĐÃ THANH TOÁN"), szTemp);
			tmpStr.Format(_T("10.3 %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMInsurancePaidSummaryByDeptEXA11(&m_wndReportGroup);
			TranslateString(_T("Báo cáo sử dụng thuốc A11"), szTemp);
			tmpStr.Format(_T("10.2 %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			//newReport = new CFMInsurancePaidSummaryByDeptByDate(&m_wndReportGroup);
			//TranslateString(_T("TỔNG HỢP CHI PHÍ BỆNH NHÂN BẢO HIỂM - THEO KHOA THỰC HIỆN"), szTemp);
			//tmpStr.Format(_T("10.1 %s"), szTemp);
			//obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMTotalIncome108Hospital(&m_wndReportGroup);
			TranslateString(_T("TỔNG THU TOÀN VIỆN 108 - THEO KHOA THỰC HIỆN"), szTemp);
			tmpStr.Format(_T("10.5 %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMInsuranceIncomeOutlay(&m_wndReportGroup);
			TranslateString(_T("BÁO CÁO THU CHI BHYT THEO KHOA THỰC HIỆN"), szTemp);
			tmpStr.Format(_T("11. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMInsCollectDetailByItem_2017(&m_wndReportGroup);
			TranslateString(_T("CHI TIẾT THEO DANH MỤC BHYT THEO KHOA THỰC HIỆN"), szTemp);
			tmpStr.Format(_T("12. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMThongKeChiPhiBHXHBQP(&m_wndReportGroup);
			TranslateString(_T("Thống kê chi phí BHXH Bộ quốc phòng"), szTemp);
			tmpStr.Format(_T("13. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMIncomePackageSummaryByDeptForIns(&m_wndReportGroup);			
			TranslateString(_T("BÁO CÁO THU TỔNG HỢP THEO GÓI THEO KHOA"), szTemp);
			tmpStr.Format(_T("14. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMSUDUNGTHUOCVATTUTHEOKHOA(&m_wndReportGroup);			
			TranslateString(_T("BÁO CÁO SỬ DỤNG VẬT TƯ THEO KHOA"), szTemp);
			tmpStr.Format(_T("15. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMSUDUNGTHUOCVATTUTHEOKHOA_DARAVIEN_DATHANHTOAN(&m_wndReportGroup);			
			TranslateString(_T("BÁO CÁO SỬ DỤNG VẬT TƯ THEO KHOA - ĐÃ RA VIỆN - ĐÃ TT"), szTemp);
			tmpStr.Format(_T("16. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMBangkechitiettienan();
			newReport->Create(&m_wndReportGroup);			
			TranslateString(_T("Bảng kê tổng hợp chi tiết tiền ăn"), szTemp);
			tmpStr.Format(_T("17 %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);


			newReport = new CFMBangkechitiettienannn();
			newReport->Create(&m_wndReportGroup);			
			TranslateString(_T("Bảng kê tổng hợp chi tiết tiền ăn người nhà"), szTemp);
			tmpStr.Format(_T("17.1 %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);


			newReport = new CFMBaocaoTPCN();
			newReport->Create(&m_wndReportGroup);			
			TranslateString(_T("Báo cáo thực phẩm chức năng"), szTemp);
			tmpStr.Format(_T("18 %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMBaocaoLechtiendaycongBH();
			newReport->Create(&m_wndReportGroup);			
			TranslateString(_T("Báo cáo lệch tiền đẩy cổng bảo hiểm"), szTemp);
			tmpStr.Format(_T("19 %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			
			newReport = new CFMFeeCancelPatientListEX(&m_wndReportGroup);			
			TranslateString(_T("Báo cáo hủy phơi thanh toán "), szTemp);
			tmpStr.Format(_T("20 %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

	TranslateString(_T("Others"), szTemp);
	tmpStr.Format(_T("IV. %s"), szTemp);
	obj->AddCaption(tmpStr);

			//Danh sach benh nhan bi khoi phuc ho so
			newReport = new CFMInsuranceCost79A_OStt(&m_wndReportGroup);
			////newReport->Create(&m_wndReportGroup);
			////newReport->OnInitDialog();
			TranslateString(_T("Insurance Cost 79A O Stt"), szTemp);
			tmpStr.Format(_T("1. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMProcessedPatientList(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Processed Patient List"), szTemp);
			tmpStr.Format(_T("2. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);


			newReport = new CFMProcessedPatientListEX(&m_wndReportGroup);			
			TranslateString(_T("Danh sách BN bảo hiểm sử dụng thuốc dịch vụ"), szTemp);
			tmpStr.Format(_T("3. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

	tmpStr.Format(_T("V. Nhóm báo cáo chuyển lên cổng bảo hiểm"));
	obj->AddCaption(tmpStr);

			newReport = new CFMSudungvattuBHYT19_Y2015_917(&m_wndReportGroup);
			////newReport->Create(&m_wndReportGroup);
			////newReport->OnInitDialog();
			TranslateString(_T("Sử dụng vật tư BHYT 19"), szTemp);
			tmpStr.Format(_T("1. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMSudungthuocBHYT20a_Y2015_917(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Sử dụng thuốc BHYT 20"), szTemp);
			tmpStr.Format(_T("2. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMInsuranceReport21a1_Y2015_917(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Dịch vụ kỹ thuật BHYT 21"), szTemp);
			tmpStr.Format(_T("3. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMInsuranceCost79A_917(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Ngoại trú BHYT 79"), szTemp);
			tmpStr.Format(_T("4. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMInsuranceCost80A_917(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Nội trú BHYT 80"), szTemp);
			tmpStr.Format(_T("5. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

_tprintf(_T("\r\ndbg 16"));
	//Nhom bao cao doi tuong bo doi, chinh sach
	obj = m_wndReportGroup.AddPane(_T("E.SOLDER_OBJECT_REPORTS"));
	TranslateString(_T("Outpatient"), szTemp);
	tmpStr.Format(_T("I. %s"), szTemp);
	obj->AddCaption(tmpStr);
	TranslateString(_T("Inpatient"), szTemp);
	tmpStr.Format(_T("II. %s"), szTemp);
	obj->AddCaption(tmpStr);
			newReport = new CFMPolicyDepositList(&m_wndReportGroup);
			////newReport->Create(&m_wndReportGroup);
			////newReport->OnInitDialog();
			TranslateString(_T("Policy Deposit List"), szTemp);
			tmpStr.Format(_T("1.4 %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMPolicyUnpaidDepositList(&m_wndReportGroup);
			TranslateString(_T("Policy Unpaid Deposit List"), szTemp);
			tmpStr.Format(_T(" %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMPolicyDischargeList(&m_wndReportGroup);
			////newReport->Create(&m_wndReportGroup);
			////newReport->OnInitDialog();
			TranslateString(_T("Policy Discharge List"), szTemp);
			tmpStr.Format(_T(". %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMPolicyPaidDischargeList(&m_wndReportGroup);
			////newReport->Create(&m_wndReportGroup);
			////newReport->OnInitDialog();
			TranslateString(_T("Policy Paid Discharge List"), szTemp);
			tmpStr.Format(_T(". %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMPolicyPostedReceiptList(&m_wndReportGroup);
			////newReport->Create(&m_wndReportGroup);
			////newReport->OnInitDialog();
			TranslateString(_T("Policy Posted Receipt List"), szTemp);
			tmpStr.Format(_T(". %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMPolicyPostedReceiptListbyDay(&m_wndReportGroup);
			////newReport->Create(&m_wndReportGroup);
			////newReport->OnInitDialog();
			TranslateString(_T("Policy Posted Receipt List by Day"), szTemp);
			tmpStr.Format(_T(". %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMPolicyPostedPaymentList(&m_wndReportGroup);
			////newReport->Create(&m_wndReportGroup);
			////newReport->OnInitDialog();
			TranslateString(_T("Policy Posted Payment List"), szTemp);
			tmpStr.Format(_T(". %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMPolicyPostedPaymentListbyDay(&m_wndReportGroup);
			////newReport->Create(&m_wndReportGroup);
			////newReport->OnInitDialog();
			TranslateString(_T("Policy Posted Payment List by Day"), szTemp);
			tmpStr.Format(_T(". %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMPolicyTreatmentCost(&m_wndReportGroup);
			////newReport->Create(&m_wndReportGroup);
			////newReport->OnInitDialog();
			TranslateString(_T("Policy Treatment Cost"), szTemp);
			tmpStr.Format(_T(". %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMPolicyAdmitanceList(&m_wndReportGroup);			
			TranslateString(_T("Policy Admitance List"), szTemp);
			tmpStr.Format(_T(". %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMPolicyFoodFee(&m_wndReportGroup);
			TranslateString(_T("Policy Food Fee"), szTemp);
			tmpStr.Format(_T(". %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMFoodPolicyPostedReceiptList(&m_wndReportGroup);
			TranslateString(_T("Danh sách bệnh nhân quân, bạn được miễn tiền ăn"), szTemp);
			tmpStr.Format(_T("P9:%s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

	TranslateString(_T("Others"), szTemp);
	tmpStr.Format(_T("II. %s"), szTemp);
	obj->AddCaption(tmpStr);
			newReport = new CFMPolicyPostedReceiptVoucherList(&m_wndReportGroup);
			TranslateString(_T("Bảng kê thu quân - chính sách"), szTemp);
			tmpStr.Format(_T("1 %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);
			
			newReport = new CFMPolicyPostedPaymentVoucherList(&m_wndReportGroup);
			////newReport->Create(&m_wndReportGroup);
			////newReport->OnInitDialog();
			TranslateString(_T("Bảng kê chi quân - chính sách"), szTemp);
			tmpStr.Format(_T("2 %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMPolicyPaidSummaryByDept(&m_wndReportGroup);
			TranslateString(_T("TỔNG HỢP CHI PHÍ QUÂN - CS - THEO KHOA THỰC HIỆN"), szTemp);
			tmpStr.Format(_T("3. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMPolicyCollectDetailByItem_2017(&m_wndReportGroup);
			TranslateString(_T("CHI TIẾT THEO DANH MỤC QUÂN - CHÍNH SÁCH THEO KHOA THỰC HIỆN"), szTemp);
			tmpStr.Format(_T("4. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMPolicyTreatmentCostA11(&m_wndReportGroup);
			TranslateString(_T("Bảng kê chi phí bệnh nhân bộ đội - chính sách A11"), szTemp);
			tmpStr.Format(_T("5. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);
			

_tprintf(_T("\r\ndbg 17"));	
	
	//Nhom bao cao khac
	obj = m_wndReportGroup.AddPane(_T("F.OTHER_REPORTS"));

		TranslateString(_T("Chung"), szTemp);
		tmpStr.Format(_T("I. %s"), szTemp);
		obj->AddCaption(tmpStr);	

		newReport = new CEMWeekSynthesisReport(&m_wndReportGroup);
		////newReport->Create(&m_wndReportGroup);
		////newReport->OnInitDialog();
		TranslateString(_T("Weekly Synthesis Report"), szTemp);
		tmpStr.Format(_T("1. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);
		
		newReport = new CEMExamedPatientWithoutFee(&m_wndReportGroup);
		////newReport->Create(&m_wndReportGroup);
		////newReport->OnInitDialog();
		TranslateString(_T("Examed Patient Without Fee"), szTemp);
		tmpStr.Format(_T("2. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CFMFeeCancelPatientList(&m_wndReportGroup);
		////newReport->Create(&m_wndReportGroup);
		////newReport->OnInitDialog();
		TranslateString(_T("Fee Cancel Patient List"), szTemp);
		tmpStr.Format(_T("3. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CFMFeeCancelPatientListEX(&m_wndReportGroup);
		////newReport->Create(&m_wndReportGroup);
		////newReport->OnInitDialog();
		TranslateString(_T("Báo cáo hủy phơi thanh toán "), szTemp);
		tmpStr.Format(_T("3.1 %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CFMExamedFeePatientRoom50(&m_wndReportGroup);
		////newReport->Create(&m_wndReportGroup);
		////newReport->OnInitDialog();
		TranslateString(_T("Examed Fee Patient Room 50"), szTemp);
		tmpStr.Format(_T("4. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CFMDanhSachThuChiBenhNhan(&m_wndReportGroup);
		////newReport->Create(&m_wndReportGroup);
		////newReport->OnInitDialog();
		TranslateString(_T("Danh sách thu chi bệnh nhân"), szTemp);
		tmpStr.Format(_T("5. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);		

		newReport = new CFMTongHopThuQuaNganHang(&m_wndReportGroup);
		////newReport->Create(&m_wndReportGroup);
		////newReport->OnInitDialog();
		TranslateString(_T("Báo cáo tổng hợp thu qua ngân hàng"), szTemp);
		tmpStr.Format(_T("6. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CFMChiTietThuQuaNganHang(&m_wndReportGroup);
		////newReport->Create(&m_wndReportGroup);
		////newReport->OnInitDialog();
		TranslateString(_T("Báo cáo chi tiết thu qua ngân hàng"), szTemp);
		tmpStr.Format(_T("7. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);		

		TranslateString(_T("Hóa đơn điện tử"), szTemp);
		tmpStr.Format(_T("II. %s"), szTemp);
		obj->AddCaption(tmpStr);

		newReport = new CFMDoiXuat(&m_wndReportGroup);		
		TranslateString(_T("Danh sách đối xuất hóa đơn điện tử"), szTemp);
		tmpStr.Format(_T("1. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CFMEinvoicepostfailReport(&m_wndReportGroup);		
		TranslateString(_T("Danh sách hóa đơn điện tử chưa Post - đã post"), szTemp);
		tmpStr.Format(_T("2. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);
		_tprintf(_T("\r\ndbg 11"));

		newReport = new CEMBaohiemBaoViet(&m_wndReportGroup);
		newReport->Create(&m_wndReportGroup);
		newReport->OnInitDialog();
		TranslateString(_T("Danh sách bệnh nhân bảo hiểm Bảo Việt"), szTemp);
		tmpStr.Format(_T("3. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);


		obj = m_wndReportGroup.AddPane(_T("G.NHÓM BÁO CÁO CÔNG NỢ"));

		newReport = new CFMDetailPurchaseOrder(&m_wndReportGroup);		
		TranslateString(_T("Bảng kê chi tiết nhập kho"), szTemp);
		tmpStr.Format(_T("1. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CFMExportSheetListForInsurance(&m_wndReportGroup);		
		TranslateString(_T("Bảng kê phiếu xuất trang bị"), szTemp);
		tmpStr.Format(_T("2. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CFMExportSheetListFromStocktoCabinet(&m_wndReportGroup);		
		TranslateString(_T("Bảng kê phiếu xuất từ kho đến tủ trực"), szTemp);
		tmpStr.Format(_T("3. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CFMExportSheetListFromStocktoCabinet(&m_wndReportGroup);		
		TranslateString(_T("Doanh thu khối cận lâm sàng (new 2022)"), szTemp);
		tmpStr.Format(_T("4. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		//newReport = new CFMObjectFood(&m_wndReportGroup);		
		//TranslateString(_T("Phân tích tiền ăn theo đối tượng"), szTemp);
		//tmpStr.Format(_T("4. %s"), szTemp);
		//obj->Add(tmpStr, _T(""), newReport);
_tprintf(_T("\nitem count: %d"), obj->GetCount());			
return;

	if (obj)
	{

		if (!pMF->CheckPermission(_T("15.12")))
		{
			TranslateString(_T("General Report Group"), szTemp);
			tmpStr.Format(_T("A. %s"), szTemp);
			obj->AddCaption(tmpStr);

			newReport = new CRptDanhSachHoaDonThuPhi(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Charged Invoice List"), szTemp);
			tmpStr.Format(_T("1. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMGeneralReportbyClerk(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("General Report by Clerk"), szTemp);
			tmpStr.Format(_T("2. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMPaidPatientList(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Paid Patient List"), szTemp);
			tmpStr.Format(_T("3. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMR99PaidPatientList(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("R99 Paid Patient List"), szTemp);
			tmpStr.Format(_T("3.1 %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMPaidPatientListR5x(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Paid Patient List R5x"), szTemp);
			tmpStr.Format(_T("3.2 %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMGeneralCollectbyDepartment(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("General Collect by Department"), szTemp);
			tmpStr.Format(_T("4. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMCollectDetailbyItem(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Collect Detail by Item"), szTemp);
			tmpStr.Format(_T("5. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMTestPatientList(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Test Patient List"), szTemp);
			tmpStr.Format(_T("6. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			/*newReport = new CFMDetailCollectFeeByItem(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Detail Collect Fee By Item"), szTemp);
			tmpStr.Format(_T("7. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);*/

			/*newReport = new CFMFeeInvoiceCancelReport(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Fee Invoice Cancel List Report"), szTemp);
			tmpStr.Format(_T("7. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);*/


			newReport = new CFMFoodUnpaidPatientList(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Food Unpaid Patient List"), szTemp);
			tmpStr.Format(_T("8. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);


			newReport = new CFMGeneralRationFeeByDay(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("General Ration Fee By Day"), szTemp);
			tmpStr.Format(_T("9. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);


			newReport = new CFMFoodSummaryByDay(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Food Summary By Day"), szTemp);
			tmpStr.Format(_T("10. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			
			if (pMF->GetCurrentUser() == _T("nkan") ||
				pMF->GetCurrentUser() == _T("admin"))
			{
				newReport = new CFMUnlockPatientList(&m_wndReportGroup);
				//newReport->Create(&m_wndReportGroup);
				//newReport->OnInitDialog();
				TranslateString(_T("Unlock Patient List Report"), szTemp);
				tmpStr.Format(_T("11. %s"), szTemp);
				obj->Add(tmpStr, _T(""), newReport);
			}

			
			newReport = new CFMUndischargedFoodSummary(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Undischarged Food Summary"), szTemp);
			tmpStr.Format(_T("12. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMFoodSummaryByLevel(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Food Summary by Level"), szTemp);
			tmpStr.Format(_T("13. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			//So quy tien mat
			newReport = new CCA_CashBook(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Sổ quỹ tiền mặt"), szTemp);
			tmpStr.Format(_T("14. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);


			TranslateString(_T("Advance - Refund Report Group"), szTemp);
			tmpStr.Format(_T("B. %s"), szTemp);
			obj->AddCaption(tmpStr);

			newReport = new CFMAdvancePaymentList(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Advance Payment List"), szTemp);
			tmpStr.Format(_T("1. %s %s"), szTemp, _T("(Mẫu 1)"));
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMDepositPatientList(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Deposit Patient List Report"), szTemp);
			tmpStr.Format(_T("   1.1 %s %s"), szTemp, _T("(Mẫu 2)"));
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMInsuranceDepositList(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Insurance Deposit List"), szTemp);
			//tmpStr.Format(_T("   1.1 %s %s"), szTemp, _T("(Mẫu 2)"));
			tmpStr = szTemp;
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMPolicyDepositList(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Policy Deposit List"), szTemp);
			tmpStr.Format(_T("1.4 %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMPolicyDischargeList(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Policy Discharge List"), szTemp);
			tmpStr.Format(_T(". %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMPolicyPaidDischargeList(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Policy Paid Discharge List"), szTemp);
			tmpStr.Format(_T(". %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMPolicyPostedReceiptList(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Policy Posted Receipt List"), szTemp);
			tmpStr.Format(_T(". %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMPolicyPostedPaymentList(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Policy Posted Payment List"), szTemp);
			tmpStr.Format(_T(". %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMPolicyTreatmentCost(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Policy Treatment Cost"), szTemp);
			tmpStr.Format(_T(". %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMPolicyAdmitanceList(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Policy Admitance List"), szTemp);
			tmpStr.Format(_T(". %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMRefundPatientList(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Refund Patient List"), szTemp);
			tmpStr.Format(_T("2. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMRefundbyDepartment(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Refund by Department"), szTemp);
			tmpStr.Format(_T("3. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			//newReport = new CFMRefundDetailbyItem(&m_wndReportGroup);
			////newReport->Create(&m_wndReportGroup);
			////newReport->OnInitDialog();
			//TranslateString(_T("Refund Detail by Item"), szTemp);
			//tmpStr.Format(_T("9. %s"), szTemp);
			//obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMDischargeDepositUnpaidReport(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Discharge Deposit Unpaid Report"), szTemp);
			tmpStr.Format(_T("4. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);


			//newReport = new CFMConditionDepositPatientList(&m_wndReportGroup);
			////newReport->Create(&m_wndReportGroup);
			////newReport->OnInitDialog();
			//TranslateString(_T("Inpatient Deposit List Report"), szTemp);
			//tmpStr.Format(_T("5. %s"), szTemp);
			//obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMUnpaidAdvancePatientList(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Unpaid Advance Patient List"), szTemp);
			tmpStr.Format(_T("5. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMUndischargedAdvancePatientList(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Undischarged Advance Patient List"), szTemp);
			tmpStr.Format(_T("6. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			//newReport = new CFMPaidTreatmentCostSummary(&m_wndReportGroup);
			////newReport->Create(&m_wndReportGroup);
			////newReport->OnInitDialog();
			//TranslateString(_T("Paid Treatment Cost Summary"), szTemp);
			//tmpStr.Format(_T("8. %s"), szTemp);
			//obj->Add(tmpStr, _T(""), newReport);

			TranslateString(_T("Nhóm báo cáo chi phí bệnh nhân dịch vụ nội trú"), szTemp);
			tmpStr.Format(_T("C. %s"), szTemp);
			obj->AddCaption(tmpStr);

			newReport = new CFMGeneralServiceTreatmentCost(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("General Service Treatment Cost Report"), szTemp);
			tmpStr.Format(_T("1. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			//newReport = new CFMServiceTreatmentCostByDay(&m_wndReportGroup);
			////newReport->Create(&m_wndReportGroup);
			////newReport->OnInitDialog();
			//TranslateString(_T("General Service Treatment Cost By Day"), szTemp);
			//tmpStr.Format(_T("2. %s"), szTemp);
			//obj->Add(tmpStr, _T(""), newReport);

			//newReport = new CFMServiceTreatmentCostByStaff(&m_wndReportGroup);
			////newReport->Create(&m_wndReportGroup);
			////newReport->OnInitDialog();
			//TranslateString(_T("General Service Treatment Cost By Staff"), szTemp);
			//tmpStr.Format(_T("3. %s"), szTemp);
			//obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMServiceIncomeList(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Service Income List"), szTemp);
			tmpStr.Format(_T("2. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMServiceIncomeList2(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Service Income List 2"), szTemp);
			tmpStr.Format(_T("2.1 %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMServiceOutlayList(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Service Outlay List"), szTemp);
			tmpStr.Format(_T("3. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMServiceOutlayList2(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Service Outlay List 2"), szTemp);
			tmpStr.Format(_T("3.1 %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMUnlockedMoneytakerList(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Unlocked Money-taker List"), szTemp);
			tmpStr.Format(_T("4. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);


			newReport = new CFMPostedReceiptVoucherList(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Posted Receipt Voucher List"), szTemp);
			tmpStr.Format(_T("5. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMPostedReceiptVoucherList2(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Posted Receipt Voucher List 2"), szTemp);
			tmpStr.Format(_T("5.1 %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);


			newReport = new CFMPostedPaymentVoucherList(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Posted Payment Voucher List"), szTemp);
			tmpStr.Format(_T("6. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMPostedPaymentVoucherList2(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Posted Payment Voucher List 2"), szTemp);
			tmpStr.Format(_T("6.1 %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMTempSendPatientList(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Temp Send Patient List By Dept"), szTemp);
			tmpStr.Format(_T("7. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMTempSendPatientListByDay(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Temp Send Patient List By Day"), szTemp);
			tmpStr.Format(_T("7.1. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMTempSendUnPaidPatientList(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Temp Send Unpaid Patient List"), szTemp);
			tmpStr.Format(_T("8. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMTempSendUnPaidPatientListByDay(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Temp Send Unpaid Patient List By Day"), szTemp);
			tmpStr.Format(_T("8.1. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMTempSendNoOutPatientList(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Temp Send No Out Patient List"), szTemp);
			tmpStr.Format(_T("9. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMTempSendNoOutPatientListByDay(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Temp Send No Out Patient List By Day"), szTemp);
			tmpStr.Format(_T("9.1. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMDepositUnpaidOutedPatientList(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Deposit Unpaid Outed Patient List"), szTemp);
			tmpStr.Format(_T("10. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMDepositUnpaidOutedPatientListByDay(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Deposit Unpaid Outed Patient List By Day"), szTemp);
			tmpStr.Format(_T("10.1. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMLyingPatientList(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Lying Patient List"), szTemp);
			tmpStr.Format(_T("11. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMAdmitedPatientList(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Admited Patient List"), szTemp);
			tmpStr.Format(_T("12. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMAdmitedPatientListByDay(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Admited Patient List By Day"), szTemp);
			tmpStr.Format(_T("12.1. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMDischargedPatientList(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Discharged Patient List"), szTemp);
			tmpStr.Format(_T("13. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMDischargedPatientListByDay(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Discharged Patient List By Day"), szTemp);
			tmpStr.Format(_T("13.1. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMDischargedPaidPatientList(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Discharged Paid Patient List"), szTemp);
			tmpStr.Format(_T("14. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMDischargedPaidPatientListByDay(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Discharged Paid Patient List By Day"), szTemp);
			tmpStr.Format(_T("14.1. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMDischargedUnpaidPatientList(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Discharged UnPaid Patient List"), szTemp);
			tmpStr.Format(_T("15. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMDischargedUnpaidPatientListByDay(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Discharged UnPaid Patient List By Day"), szTemp);
			tmpStr.Format(_T("15.1. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMStatisticPaidPatientList2(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Statistic Paid Patient List"), szTemp);
			tmpStr.Format(_T("16. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			TranslateString(_T("Nhóm báo cáo chi phí bệnh nhân BĐ â CS â BH nội trú"), szTemp);
			tmpStr.Format(_T("D. %s"), szTemp);
			obj->AddCaption(tmpStr);

			newReport = new CFMReceiveInsuranceTreatmentCost(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Receive Insurance Treatment Cost Report"), szTemp);
			tmpStr.Format(_T("1. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMExpenseInsuranceTreatmentCost(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Expense Insurance Treatment Cost Report"), szTemp);
			tmpStr.Format(_T("2. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMInsuranceIncomeList(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Insurance Income List"), szTemp);
			tmpStr.Format(_T("3. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMInsurancePostedReceiptVoucherList(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Insurance Posted Receipt Voucher List"), szTemp);
			tmpStr.Format(_T("3.1 %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMInsuranceOutlayList(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Insurance Outlay List"), szTemp);
			tmpStr.Format(_T("4. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);
			newReport = new CFMInsurancePostedPaymentVoucherList(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Insurance Posted Payment Voucher List"), szTemp);
			tmpStr.Format(_T("4.1 %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			

			newReport = new CFMGeneralInsuranceIncomeList(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("General Insurance Income List"), szTemp);
			tmpStr.Format(_T("5. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CFMGeneralInsuranceOutlayList(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("General Insurance Outlay List"), szTemp);
			tmpStr.Format(_T("6. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);


			newReport = new CFMInsuranceDiffPayment(&m_wndReportGroup);
			//newReport->Create(&m_wndReportGroup);
			//newReport->OnInitDialog();
			TranslateString(_T("Insurance Diff Payment List"), szTemp);
			tmpStr.Format(_T("7. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);


		}
		
		
		TranslateString(_T("Outpatient Report Group"), szTemp);
		tmpStr.Format(_T("E. %s"), szTemp);
		obj->AddCaption(tmpStr);
		
		newReport = new CFMOutpatientInsuranceCost20A(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Outpatient Insurance Cost 20A"), szTemp);
		tmpStr.Format(_T("1. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CFMOutpatientInsuranceCost80A(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Outpatient Insurance Cost 80A"), szTemp);
		tmpStr.Format(_T("2. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CFMOutpatientInsuranceReport21a1(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Outpatient Insurance Cost 21A1"), szTemp);
		tmpStr.Format(_T("3. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		TranslateString(_T("Nhóm báo cáo chi phí BHYT"), szTemp);
		tmpStr.Format(_T("F. %s"), szTemp);
		obj->AddCaption(tmpStr);

		newReport = new CFMSudungthuocBHYT20a(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Drug by quarter of a year"), szTemp);
		tmpStr.Format(_T("1. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CFMSudungthuocBHYT20a_Y2015(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Drug by quarter of a year 2015"), szTemp);
		tmpStr.Format(_T("1.1 %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CFMInsuranceReport21a(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("General statistics and technical services for patients using medical insurance"), szTemp);
		tmpStr.Format(_T("2. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CFMInsuranceReport21a1(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("General statistics and technical services for patients using medical insurance"), szTemp);
		tmpStr.Format(_T("2.1 %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CFMInsuranceReport21a1_Y2015(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("General statistics and technical services for patients using medical insurance 2015"), szTemp);
		tmpStr.Format(_T("2.2 %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		//newReport = new CFMDetailInsurance21aReport(&m_wndReportGroup);
		////newReport->Create(&m_wndReportGroup);
		////newReport->OnInitDialog();
		//TranslateString(_T("Detail Insurance Fee 21A Report"), szTemp);
		//tmpStr.Format(_T("2.2 %s"), szTemp);
		//obj->Add(tmpStr, _T(""), newReport);

		newReport = new CFMInsuranceCost79A(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("General Examination Cost 79A Report (79a - BHYT)"), szTemp);
		tmpStr.Format(_T("3. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CFMGeneralInsuranceCost79ATH(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("79A TH - BHYT"), szTemp);
		tmpStr.Format(_T("4. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CFMInsuranceCost80A(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("General Treatment Cost 80A Report (80a - BHYT)"), szTemp);
		tmpStr.Format(_T("5. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CFMGeneralInsuranceCost80ATH(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("80A TH - BHYT"), szTemp);
		tmpStr.Format(_T("6. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CFMWeeklyReport(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Weekly Hospital Fee Report"), szTemp);
		tmpStr.Format(_T("7. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CFMInsuranceFeeLossReport(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Insurance Fee Loss Report"), szTemp);
		tmpStr.Format(_T("8. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CFMOutpatientCostSynthesisbyDay(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Outpatient Cost Synthesis by Day"), szTemp);
		tmpStr.Format(_T("9. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CFMOutpatientCostSynthesisbyLine(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Outpatient Cost Synthesis by Line"), szTemp);
		tmpStr.Format(_T("10. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CFMOutpatientCostSynthesisbyDept(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Outpatient Cost Synthesis by Dept"), szTemp);
		tmpStr.Format(_T("11. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CFMInsuranceTreatmentCostByDept(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Inpatient Cost Synthesis By Dept"), szTemp);
		tmpStr.Format(_T("12. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CFMInsurancePatientTechDetail(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Insurance Patient Tech Detail"), szTemp);
		tmpStr.Format(_T("13. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CFMPaidDischargedInsPatient(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Paid Discharged Insurance Patient"), szTemp);
		tmpStr.Format(_T("14. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CFMApprovedDischargedInsPatient(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Approved Discharged Insurance Patient"), szTemp);
		tmpStr.Format(_T("15. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CFMSudungvattuBHYT19_Y2015(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Insurance Material Usage"), szTemp);
		tmpStr.Format(_T("16. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		TranslateString(_T("Expanded Report Group"), tmpStr);
		obj->AddCaption(tmpStr);

		//newReport = new CEMGeneralReportC1_1(&m_wndReportGroup);
		////newReport->Create(&m_wndReportGroup);
		////newReport->OnInitDialog();
		//TranslateString(_T("General Monthly Report by Department"), szTemp);
		//tmpStr.Format(_T("1. %s"), szTemp);
		//obj->Add(tmpStr, _T(""), newReport);

		newReport = new CEMWeekSynthesisReport(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Weekly Synthesis Report"), szTemp);
		tmpStr.Format(_T("1. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);
		
		newReport = new CEMExamedPatientWithoutFee(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Examed Patient Without Fee"), szTemp);
		tmpStr.Format(_T("2. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CFMFeeCancelPatientList(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Fee Cancel Patient List"), szTemp);
		tmpStr.Format(_T("3. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CFMExamedFeePatientRoom50(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Examed Fee Patient Room 50"), szTemp);
		tmpStr.Format(_T("4. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);
	}
	//Preset position
	/*CListPane *subPane = m_wndReportGroup.GetSubPane();
	CListBox *subList = DYNAMIC_DOWNCAST(CListBox, subPane);

	if (subList)
	{
		subList->GetText(0, tmpStr);
		_debug(_T("tmpStr: %s|caption:%s"), tmpStr, obj->m_szCaption);
		subList->SetCurSel(2);
		_debug(_T("sub:%d| obj: %d|cursel:%d"), subList->GetCount(), obj->GetCount(), obj->m_nCurSel);
		obj->m_nCurSel = 3;
		subList->SetFocus();
	}
	else
		_debug(_T("NULL subPane"));*/

}

void CHMSReportFormDialog::CreateLIMSReports()
{
	CHMSMainFrame* pMF = (CHMSMainFrame*)AfxGetMainWnd();
	CGuiView *newReport = NULL;
	CString tmpStr, szTemp;
	tmpStr.Empty();
	szTemp.Empty();
	CDocPane::CDocPaneInfo *obj = m_wndReportGroup.AddPane(_T("Report"));
	if (obj)
	{
		newReport = new CLIMSTestReportButton(&m_wndReportGroup);
		newReport->Create(&m_wndReportGroup);
		newReport->OnInitDialog();
		TranslateString(_T("Quick Test Report By Machine"), szTemp);
		tmpStr.Format(_T("1. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);
		
		newReport = new CLIMSTestPatientList(&m_wndReportGroup);
		newReport->Create(&m_wndReportGroup);
		newReport->OnInitDialog();
		TranslateString(_T("DANH SÁCH BỆNH NHÂN THỰC HIỆN XÉT NGHIỆM"), szTemp);
		tmpStr.Format(_T("1.1 %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CLIMSPatientList(&m_wndReportGroup);
		newReport->Create(&m_wndReportGroup);
		newReport->OnInitDialog();
		TranslateString(_T("Paraclinical Patient List"), szTemp);
		tmpStr.Format(_T("2. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);	

		newReport = new CLISTestActitivities(&m_wndReportGroup);
		newReport->Create(&m_wndReportGroup);
		newReport->OnInitDialog();
		TranslateString(_T("Test Activities"), szTemp);
		tmpStr.Format(_T("3. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CBloodBankListServicex(&m_wndReportGroup);
		newReport->Create(&m_wndReportGroup);
		newReport->OnInitDialog();
		TranslateString(_T("Blood Bank List Service"), szTemp);
		tmpStr.Format(_T("4. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CBloodBankListServicex_update1(&m_wndReportGroup);
		newReport->Create(&m_wndReportGroup);
		newReport->OnInitDialog();
		TranslateString(_T("Blood Bank List Service"), szTemp);
		tmpStr.Format(_T("4.1 %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CLIMSTestReportByMachine(&m_wndReportGroup);
		newReport->Create(&m_wndReportGroup);
		newReport->OnInitDialog();
		TranslateString(_T("Test Report By Machine"), szTemp);
		tmpStr.Format(_T("5. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CLIMSTestReportByMachine_ex(&m_wndReportGroup);
		newReport->Create(&m_wndReportGroup);
		newReport->OnInitDialog();
		TranslateString(_T("Báo cáo hóa chất theo máy"), szTemp);
		tmpStr.Format(_T("5.1 %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CLIMSTestReportByMachineNotInSOM(&m_wndReportGroup);
		newReport->Create(&m_wndReportGroup);
		newReport->OnInitDialog();
		TranslateString(_T("Báo cáo xét nghiệm không thực hiện tại TYC"), szTemp);
		tmpStr.Format(_T("5.2 %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);


		newReport = new CLIMSStatisticPaidPatientList2(&m_wndReportGroup);
		newReport->Create(&m_wndReportGroup);
		newReport->OnInitDialog();
		TranslateString(_T("Paraclinical Income Report"), szTemp);
		tmpStr.Format(_T("6. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CLIMSTestSetupButton(&m_wndReportGroup);
		newReport->Create(&m_wndReportGroup);
		newReport->OnInitDialog();
		TranslateString(_T("Paraclinical Setup Parameter"), szTemp);
		tmpStr.Format(_T("7. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CLIMSTestSetupButtonView(&m_wndReportGroup);
		newReport->Create(&m_wndReportGroup);
		newReport->OnInitDialog();
		TranslateString(_T("Kiểm tra thời gian thực hiện"), szTemp);
		tmpStr.Format(_T("8. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CLIMSCheckSumButtonView(&m_wndReportGroup);
		newReport->Create(&m_wndReportGroup);
		newReport->OnInitDialog();
		TranslateString(_T("CheckSum Converter"), szTemp);
		tmpStr.Format(_T("8.1 %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CBloodMauLuuKetQuaNhomMau(&m_wndReportGroup);
		newReport->Create(&m_wndReportGroup);
		newReport->OnInitDialog();
		TranslateString(_T("Mẫu lưu kết quả nhóm máu"), szTemp);
		tmpStr.Format(_T("9. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CLIMSInwardListReport(&m_wndReportGroup);
		newReport->Create(&m_wndReportGroup);
		newReport->OnInitDialog();
		tmpStr.Format(_T("10. Danh sách bệnh nhân vào viện có CLS"));
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CTMMaterialFinalAccount(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Material Final Account"), szTemp);
		tmpStr.Format(_T("11. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CLIMSTestMoneybyPatient(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Báo cáo thực hiện theo khoa"), szTemp);
		tmpStr.Format(_T("12. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);


		newReport = new CLIMSTestCovid19NguoinhaReport(&m_wndReportGroup);		
		TranslateString(_T("Danh sách bệnh nhân người nhà yêu cầu xét nghiệm"), szTemp);
		tmpStr.Format(_T("13. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CTMSuDungDVKT(this);
		tmpStr = _T("14. Sử dụng DVKT");
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CLIMSPatientList_V2(&m_wndReportGroup);
		newReport->Create(&m_wndReportGroup);
		newReport->OnInitDialog();
		TranslateString(_T("Danh sách xét nghiệm giải phẫu bệnh"), szTemp);
		tmpStr.Format(_T("15. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CLIMSBaoCaoTongHopKhoaGPB(&m_wndReportGroup);
		newReport->Create(&m_wndReportGroup);
		newReport->OnInitDialog();
		TranslateString(_T("Báo cáo tổng hợp khoa GPB"), szTemp);
		tmpStr.Format(_T("16. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		if (pMF->GetDepartmentID() == _T("C2"))
		{
			newReport = new CLISC2ARecomSurgeryExport(&m_wndReportGroup);
			newReport->Create(&m_wndReportGroup);
			newReport->OnInitDialog();
			TranslateString(_T("Danh sách đề nghị PTTT khoa C2-A"), szTemp);
			tmpStr.Format(_T("17. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);
		}

	}
}

void CHMSReportFormDialog::CreatePACSReports()
{
    CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CGuiView *newReport = NULL;
	CString tmpStr, szTemp;
	tmpStr.Empty();
	szTemp.Empty();
	CDocPane::CDocPaneInfo *obj = m_wndReportGroup.AddPane(_T("Report"));

	if (obj)
	{
		TranslateString(_T("General Report Group"), szTemp);
		tmpStr.Format(_T("A. %s"), szTemp);
		obj->AddCaption(tmpStr);

		newReport = new CPACSReportOrderList();
		tmpStr.Format(_T("0. Danh sách bệnh nhân được chỉ định CĐHA"));
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CPACSEndoscopyListReport(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Endoscopy List Report"), szTemp);
		tmpStr.Format(_T("1. %s (Khoa A3)"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CPACSFunctionalProbeListReport(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Paraclinical Patient List Report"), szTemp);
		tmpStr.Format(_T("2. %s (Khoa C7)"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);


		newReport = new CPACSFunctionalProbeListReportC8C(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Paraclinical Patient List Report"), szTemp);
		tmpStr.Format(_T("2.1 %s (Khoa C8C)"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CPACSGeneralPatientByObjectReport(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("General Patient By Object Report"), szTemp);
		tmpStr.Format(_T("3. %s "), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CPACSGeneralPatientByObjectReportC8C(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("General Patient By Object Report"), szTemp);
		tmpStr.Format(_T("3.1 %s (Khoa C8C)"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CPACSPatientListByResultReport(&m_wndReportGroup);		
		TranslateString(_T("Patient List By Result Report"), szTemp);
		tmpStr.Format(_T("4. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CPACSPatientListByResultReport2(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Patient List By Result Report"), szTemp);
		tmpStr.Format(_T("4.1 %s 2"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CPACSPatientListByResultReportC8C(&m_wndReportGroup);		
		TranslateString(_T("Báo cáo thống kê danh sách bệnh nhân làm CLS theo kết quả (khoa C8-C)"), szTemp);
		tmpStr.Format(_T("4.2 %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CPACSImageActitivities(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Image Activities"), szTemp);
		tmpStr.Format(_T("5. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CPACSBOIDUONGPTTT(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Image Fostering List"), szTemp);
		tmpStr.Format(_T("6. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CPACSBOIDUONGPTTTC8C(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Danh sách bồi dưỡng PTTT (C8-C)"), szTemp);
		tmpStr.Format(_T("6.1 %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CPACSXRayStatistic(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("XRay Statistics"), szTemp);
		tmpStr.Format(_T("7. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CPACSPatientListUseContrast(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Patient List Use Contrast"), szTemp);
		tmpStr.Format(_T("8. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CPACSInPatientUseChemistry(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("In Patient Use Chemistry"), szTemp);
		tmpStr.Format(_T("9. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CPACSOutPatientUseChemistry(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Out Patient Use Chemistry"), szTemp);
		tmpStr.Format(_T("10. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CPACSSettlementChemistryMaterial(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Settlement Chemistry Material"), szTemp);
		tmpStr.Format(_T("11. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CTMMaterialFinalAccount(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Material Final Account"), szTemp);
		tmpStr.Format(_T("12. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CPACSFunctionalProbeListSumeryReport(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Function Probe List Summary"), szTemp);
		tmpStr.Format(_T("13. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);


		newReport = new CPACSFunctionalProbeListSumeryReportC8C(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Tổng hợp kết quả làm việc C8-C"), szTemp);
		tmpStr.Format(_T("13.1 %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CPACSWaitingReport(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Waiting Report"), szTemp);
		tmpStr.Format(_T("14. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);


		newReport = new CPACSWaitingReportC8C(&m_wndReportGroup);		
		TranslateString(_T("Báo cáo danh sách chờ làm CLS khoa C8-C"), szTemp);
		tmpStr.Format(_T("14.1 %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CLIMSStatisticPaidPatientList(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Revenue of paraclinical report"), szTemp);
		tmpStr.Format(_T("15. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CPACSQtyPerformDialog(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Qty Perform"), szTemp);
		tmpStr.Format(_T("16. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CPACSQtyPerformDialogC8C(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Báo cáo tổng hợp số lượng C8-C"), szTemp);
		tmpStr.Format(_T("16.1 %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CPACSTotalReport(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Total Report"), szTemp);
		tmpStr.Format(_T("17. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CPACSPerformNotMeterial(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Performed Not Meterial"), szTemp);
		tmpStr.Format(_T("18. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CPACSMaterialBalancesheet(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Material Balancesheet"), szTemp);
		tmpStr.Format(_T("19. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CPACSTotalReportC8D(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Total Report C8-D"), szTemp);
		tmpStr.Format(_T("20. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CPACSPathologyReport(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Pathology Report"), szTemp);
		tmpStr.Format(_T("21. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CPACSOperationList(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Operation List"), szTemp);
		tmpStr.Format(_T("22. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CPACSOperationList_V2(&m_wndReportGroup);
        // newReport->Create(&m_wndReportGroup);
        // newReport->OnInitDialog();
        TranslateString(_T("Danh sách PTTT C8A"), szTemp);
        tmpStr.Format(_T("22.1 %s"), szTemp);
        obj->Add(tmpStr, _T(""), newReport);

		if (pMF->GetDepartmentID() == _T("A3-C"))
		{
            newReport = new CTMOperationList(&m_wndReportGroup);
            // newReport->Create(&m_wndReportGroup);
            // newReport->OnInitDialog();
            TranslateString(_T("Danh sách PTTT A3-C"), szTemp);
            tmpStr.Format(_T("22.2 %s"), szTemp);
            obj->Add(tmpStr, _T(""), newReport);
		}
            

		newReport = new CPMPrescriptionList(&m_wndReportGroup);
		TranslateString(_T("Báo cáo đối chiếu thuốc cảm quang"), szTemp);
		tmpStr.Format(_T("23- %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CHMSC8DReportDrugAndMaterial(&m_wndReportGroup);
		TranslateString(_T("Báo cáo sử dụng thuốc - vật tư (C8-D) "), szTemp);
		tmpStr.Format(_T("24- %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CPACSListByAge(&m_wndReportGroup);
		TranslateString(_T("Danh sách bệnh nhân theo độ tuổi"), szTemp);
		tmpStr.Format(_T("25 - %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CPACSNghiencuukhoahocC8(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();

		TranslateString(_T("Báo cáo tổng hợp số liệu_C8_X quang"), szTemp);
		tmpStr.Format(_T("26. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CPACSPatientList(&m_wndReportGroup);
		TranslateString(_T("Sổ theo dõi C8 (các chỉ định và thuốc men vật tư) "), szTemp);
		tmpStr.Format(_T("27. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CPACSExportByDept(&m_wndReportGroup);
		TranslateString(_T("Báo cáo sử dụng hóa chất phiếu PX (C5)"), szTemp);
		tmpStr.Format(_T("28. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CPACSDanhsachbnchidinhPACS(&m_wndReportGroup);
		TranslateString(_T("Báo cáo danh sách BN chỉ định PACS"), szTemp);
		tmpStr.Format(_T("29. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CPACSThuthatthang();
		TranslateString(_T("Bảng tổng hợp thủ thuật tháng"), szTemp);
		tmpStr.Format(_T("30. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);


		newReport = new CPACSDanhsachbnchidinhPACS_V2(&m_wndReportGroup);
		TranslateString(_T("Báo cáo danh sách BN chỉ định can thiệp"), szTemp);
		tmpStr.Format(_T("31. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);
	}
}
void CHMSReportFormDialog::CreateIPAReports()
{
	CGuiView *newReport = NULL;
	CString tmpStr, szTemp;
	tmpStr.Empty();
	szTemp.Empty();
	CDocPane::CDocPaneInfo *obj = m_wndReportGroup.AddPane(_T("Report"));

	if (obj)
	{
		newReport = new CFMProcessedPrescriptionList(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Processed Prescription List"), szTemp);
		tmpStr.Format(_T("1. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CFMProcessedPatientList(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Processed Patient List"), szTemp);
		tmpStr.Format(_T("2. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);


		newReport = new CFMProcessedPrescriptionListEX(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Danh sách duyệt thuốc thực phẩm chức năng"), szTemp);
		tmpStr.Format(_T("3. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);
	}
	

}
void CHMSReportFormDialog::CreateBBReports(){
	CGuiView *newReport = NULL;
	CString tmpStr, szTemp;
	tmpStr.Empty();
	szTemp.Empty();
	CDocPane::CDocPaneInfo *obj = m_wndReportGroup.AddPane(_T("Report"));

	if (obj)
	{
		newReport = new CBBStockCardReportDialog(&m_wndReportGroup, 1);
		newReport->Create(&m_wndReportGroup);
		newReport->OnInitDialog();
		TranslateString(_T("Stock Card"), szTemp);
		tmpStr.Format(_T("1. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CBloodBankListService(&m_wndReportGroup);
		newReport->Create(&m_wndReportGroup);
		newReport->OnInitDialog();
		TranslateString(_T("Blood Bank List Service"), szTemp);
		tmpStr.Format(_T("2. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CBloodBankListServicePosted(&m_wndReportGroup);
		newReport->Create(&m_wndReportGroup);
		newReport->OnInitDialog();
		TranslateString(_T("Blood Bank List Service posted"), szTemp);
		tmpStr.Format(_T("3. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CBloodBankListServicePostedEX(&m_wndReportGroup);
		newReport->Create(&m_wndReportGroup);
		newReport->OnInitDialog();
		TranslateString(_T("Báo cáo doanh thu tiền máu dịch vụ đối soát với tài chính"), szTemp);
		tmpStr.Format(_T("3.1 %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CBloodBankListServiceUnPaid(&m_wndReportGroup);
		newReport->Create(&m_wndReportGroup);
		newReport->OnInitDialog();
		TranslateString(_T("Blood Bank List Service UnPaid"), szTemp);
		tmpStr.Format(_T("4. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CReceiptListBloodBank(&m_wndReportGroup);
		newReport->Create(&m_wndReportGroup);
		newReport->OnInitDialog();
		TranslateString(_T("Receipt List BloodBank"), szTemp);
		tmpStr.Format(_T("5. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CBloodBankUseReportWeek(&m_wndReportGroup);
		newReport->Create(&m_wndReportGroup);
		newReport->OnInitDialog();
		TranslateString(_T("BloodBank Use Report Week"), szTemp);
		tmpStr.Format(_T("6. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CBBUnapprovedBloodBankListReportDialog(&m_wndReportGroup, 2);
		newReport->Create(&m_wndReportGroup);
		newReport->OnInitDialog();
		TranslateString(_T("Danh sách máu yêu cầu chưa duyệt"), szTemp);
		tmpStr.Format(_T("7. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CBloodBankReceiptReport(&m_wndReportGroup);
		newReport->Create(&m_wndReportGroup);
		newReport->OnInitDialog();
		TranslateString(_T("Báo cáo nhập xuất tồn chế phẩm máu"), szTemp);
		tmpStr.Format(_T("8. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CBloodBankDetailExportReport(&m_wndReportGroup);
		newReport->Create(&m_wndReportGroup);
		newReport->OnInitDialog();
		TranslateString(_T("Báo cáo chi tiết xuất cho các khoa chế phẩm máu"), szTemp);
		tmpStr.Format(_T("9. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		/*newReport = new CBloodBankDetailExportReportEX(&m_wndReportGroup);
		newReport->Create(&m_wndReportGroup);
		newReport->OnInitDialog();
		TranslateString(_T("(New)Báo cáo chi tiết xuất cho các khoa chế phẩm máu"), szTemp);
		tmpStr.Format(_T("9.1 %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);*/

		newReport = new CBLOODTestActitivities(&m_wndReportGroup);
		newReport->Create(&m_wndReportGroup);
		newReport->OnInitDialog();
		TranslateString(_T("GelCard Patient List"), szTemp);
		tmpStr.Format(_T("10. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CBBExportList(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Báo cáo theo dõi máu xuất hàng ngày"), szTemp);
		tmpStr.Format(_T("11. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CBBOnHandList(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Báo cáo theo dõi máu tồn kho"), szTemp);
		tmpStr.Format(_T("12. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CBBOtherExportList(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Báo cáo theo dõi xuất khác"), szTemp);
		tmpStr.Format(_T("13. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);
	}

}
void CHMSReportFormDialog::CreateSSMReports()
{
	CGuiView *newReport = NULL;
	CString tmpStr, szTemp;
	tmpStr.Empty();
	szTemp.Empty();
	CDocPane::CDocPaneInfo *obj = m_wndReportGroup.AddPane(_T("Report"));
	
	if (obj)
	{
		newReport = new CSRMThuthapthongtinkhambenh(&m_wndReportGroup);
		newReport->Create(&m_wndReportGroup);
		newReport->OnInitDialog();
		TranslateString(_T("Thu thập thông tin khám bệnh"), szTemp);
		tmpStr.Format(_T("1. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CSRMThuthapthongtinCLS(&m_wndReportGroup);
		newReport->Create(&m_wndReportGroup);
		newReport->OnInitDialog();
		TranslateString(_T("Thu thập thông tin cận lâm sàng"), szTemp);
		tmpStr.Format(_T("2. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CSRMThuthapthongtinPTTT(&m_wndReportGroup);
		newReport->Create(&m_wndReportGroup);
		newReport->OnInitDialog();
		TranslateString(_T("Thu thập thông tin PTTT"), szTemp);
		tmpStr.Format(_T("3. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CSRMThuthapthongtinsudungthuoc(&m_wndReportGroup);
		newReport->Create(&m_wndReportGroup);
		newReport->OnInitDialog();
		TranslateString(_T("Thu thập thông tin sử dụng thuốc"), szTemp);
		tmpStr.Format(_T("4. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CSRMThuthapthongtindieutribenhnhan(&m_wndReportGroup);
		newReport->Create(&m_wndReportGroup);
		newReport->OnInitDialog();
		TranslateString(_T("Thu thập thông tin điều trị bệnh nhân"), szTemp);
		tmpStr.Format(_T("5. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CSRMThuthapthongtinvaovien(&m_wndReportGroup);
		newReport->Create(&m_wndReportGroup);
		newReport->OnInitDialog();
		TranslateString(_T("Thu thập thông tin vào viện"), szTemp);
		tmpStr.Format(_T("6. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CSRMThuthapthongtinravien(&m_wndReportGroup);
		newReport->Create(&m_wndReportGroup);
		newReport->OnInitDialog();
		TranslateString(_T("Thu thập thông tin ra viện"), szTemp);
		tmpStr.Format(_T("7. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CSRMThuthapthongtinchuyenvien(&m_wndReportGroup);
		newReport->Create(&m_wndReportGroup);
		newReport->OnInitDialog();
		TranslateString(_T("Thu thập thông tin chuyển viện"), szTemp);
		tmpStr.Format(_T("8. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CSRMQuanlythongtinluuluungBNkham(&m_wndReportGroup);
		newReport->Create(&m_wndReportGroup);
		newReport->OnInitDialog();
		TranslateString(_T("Quản lý thông tin lưu lượng bệnh nhân khám"), szTemp);
		tmpStr.Format(_T("9. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CSRMThuthapthongtintheomaICD(&m_wndReportGroup);
		newReport->Create(&m_wndReportGroup);
		newReport->OnInitDialog();
		TranslateString(_T("Thu thập thông tin bệnh tật theo mã ICD"), szTemp);
		tmpStr.Format(_T("10. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CSRMThuthapthongtinbenhtattheovungmien(&m_wndReportGroup);
		newReport->Create(&m_wndReportGroup);
		newReport->OnInitDialog();
		TranslateString(_T("Thu thập thông tin bệnh tật theo vùng miền"), szTemp);
		tmpStr.Format(_T("11. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CSRMThuthapthongtinbenhtattheovungmien(&m_wndReportGroup);
		newReport->Create(&m_wndReportGroup);
		newReport->OnInitDialog();
		TranslateString(_T("Thu thập thông tin bệnh tật theo giới tính, độ tuổi, dân tộc"), szTemp);
		tmpStr.Format(_T("12. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CSRMThuthapthongtinbenhtattheovungmien(&m_wndReportGroup);
		newReport->Create(&m_wndReportGroup);
		newReport->OnInitDialog();
		TranslateString(_T("Thu thập thông tin bệnh tật theo mùa"), szTemp);
		tmpStr.Format(_T("13. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CSRMThongkecacbenhthuonggap(&m_wndReportGroup);
		newReport->Create(&m_wndReportGroup);
		newReport->OnInitDialog();
		TranslateString(_T("Thống kê các bệnh thường gặp"), szTemp);
		tmpStr.Format(_T("14. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CSRMThongkecacmatbenhtuvongcaonhat(&m_wndReportGroup);
		newReport->Create(&m_wndReportGroup);
		newReport->OnInitDialog();
		TranslateString(_T("Thống kê các mặt bệnh tử vong cao nhất"), szTemp);
		tmpStr.Format(_T("15. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CSRMBienbankiemphieu(&m_wndReportGroup);
		newReport->Create(&m_wndReportGroup);
		newReport->OnInitDialog();
		TranslateString(_T("Biên bản kiểm phiếu"), szTemp);
		tmpStr.Format(_T("16. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CSRMBaocaohoanthien(&m_wndReportGroup);
		newReport->Create(&m_wndReportGroup);
		newReport->OnInitDialog();
		TranslateString(_T("Báo cáo hoàn thiện đề tài"), szTemp);
		tmpStr.Format(_T("17. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CSRMBienbandanhgiacapcoso(&m_wndReportGroup);
		newReport->Create(&m_wndReportGroup);
		newReport->OnInitDialog();
		TranslateString(_T("Biên bản đánh giá cấp cơ sở"), szTemp);
		tmpStr.Format(_T("18. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CSRMPhieudanhgiacapcoso(&m_wndReportGroup);
		newReport->Create(&m_wndReportGroup);
		newReport->OnInitDialog();
		TranslateString(_T("Phiếu đánh giá cấp cơ sở"), szTemp);
		tmpStr.Format(_T("19. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CSRMPhieunhanxetcapcoso(&m_wndReportGroup);
		newReport->Create(&m_wndReportGroup);
		newReport->OnInitDialog();
		TranslateString(_T("Phiếu nhận xét cấp cơ sở"), szTemp);
		tmpStr.Format(_T("20. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CSRMDanhgiatochucthuchien(&m_wndReportGroup);
		newReport->Create(&m_wndReportGroup);
		newReport->OnInitDialog();
		TranslateString(_T("Đánh giá tổ chức thực hiện đề tài"), szTemp);
		tmpStr.Format(_T("21. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CSRMDanhsachtacgiathuchien(&m_wndReportGroup);
		newReport->Create(&m_wndReportGroup);
		newReport->OnInitDialog();
		TranslateString(_T("Danh sách tác giả thực hiện đề tài"), szTemp);
		tmpStr.Format(_T("22. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);
	}
}


void CHMSReportFormDialog::CreateFAMReports()
{
	CGuiView *newReport = NULL;
	CString tmpStr, szTemp;
	tmpStr.Empty();
	szTemp.Empty();
	CDocPane::CDocPaneInfo *obj = m_wndReportGroup.AddPane(_T("Report"));
	
	if (obj)
	{
		newReport = new CRPTFAMAssetInventoryDialog(&m_wndReportGroup);
		newReport->Create(&m_wndReportGroup);
		newReport->OnInitDialog();
		TranslateString(_T("Danh mục kiểm kê tài sản"), szTemp);
		tmpStr.Format(_T("1. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CRptMachineInventoryRecord(&m_wndReportGroup);
		newReport->Create(&m_wndReportGroup);
		newReport->OnInitDialog();
		TranslateString(_T("Biên bản kiểm kê máy"), szTemp);
		tmpStr.Format(_T("2. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CRPTStatisticMedicalDevices(&m_wndReportGroup);
		newReport->Create(&m_wndReportGroup);
		newReport->OnInitDialog();
		TranslateString(_T("Thống kê trang thiết bị tài sản y tế"), szTemp);
		tmpStr.Format(_T("3. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CRPTTransferToDept(&m_wndReportGroup);
		newReport->Create(&m_wndReportGroup);
		newReport->OnInitDialog();
		TranslateString(_T("Danh sách phiếu lưu chuyển tài sản các khoa"), szTemp);
		tmpStr.Format(_T("4. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CRPTAssetGeneralInfo(&m_wndReportGroup);
		newReport->Create(&m_wndReportGroup);
		newReport->OnInitDialog();
		TranslateString(_T("Tổng hợp thông tin tài sản cổ định"), szTemp);
		tmpStr.Format(_T("5. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CRPTAllocationDepreciation(&m_wndReportGroup);
		newReport->Create(&m_wndReportGroup);
		newReport->OnInitDialog();
		TranslateString(_T("Bảng phân bổ khấu hao"), szTemp);
		tmpStr.Format(_T("6. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CRPTAssetStatisticList(&m_wndReportGroup);
		newReport->Create(&m_wndReportGroup);
		newReport->OnInitDialog();
		TranslateString(_T("Thống kê danh mục tài sản cố định"), szTemp);
		tmpStr.Format(_T("7. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CRPTAssetCardStatisticList(&m_wndReportGroup);
		newReport->Create(&m_wndReportGroup);
		newReport->OnInitDialog();
		TranslateString(_T("Thống kê thẻ tài sản cố định"), szTemp);
		tmpStr.Format(_T("8. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CRPTAssetDetailStatisticList(&m_wndReportGroup);
		newReport->Create(&m_wndReportGroup);
		newReport->OnInitDialog();
		TranslateString(_T("Thống kê chi tiết tài sản cố định"), szTemp);
		tmpStr.Format(_T("9. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CRPTBaoCaoTongHopTBYT(&m_wndReportGroup);
		newReport->Create(&m_wndReportGroup);
		newReport->OnInitDialog();
		TranslateString(_T("Tổng hợp trang thiết bị y tế"), szTemp);
		tmpStr.Format(_T("10. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CRPTBaoCaoChiTietTBYT(&m_wndReportGroup);
		newReport->Create(&m_wndReportGroup);
		newReport->OnInitDialog();
		TranslateString(_T("Chi tiết trang thiết bị y tế"), szTemp);
		tmpStr.Format(_T("11. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CRPTFAMAssetInventoryM2(&m_wndReportGroup);
		newReport->Create(&m_wndReportGroup);
		newReport->OnInitDialog();
		TranslateString(_T("Danh mục kiểm kê thiết bị, doanh dụng cụ, vật tư quân y (mẫu 1)"), szTemp);
		tmpStr.Format(_T("12. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);
	}
}

void CHMSReportFormDialog::CreateITSReports()
{
	CGuiView *newReport = NULL;
	CString tmpStr, szTemp;
	tmpStr.Empty();
	szTemp.Empty();
	CDocPane::CDocPaneInfo *obj = m_wndReportGroup.AddPane(_T("Report"));
	
	if (obj)
	{
		newReport = new CRPTITSAssetInventory(&m_wndReportGroup);
		newReport->Create(&m_wndReportGroup);
		newReport->OnInitDialog();
		TranslateString(_T("Bảng tổng hợp kiểm kê trang thiết bị CNTT"), szTemp);
		tmpStr.Format(_T("1. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CRPTITSRealAbility(&m_wndReportGroup);
		newReport->Create(&m_wndReportGroup);
		newReport->OnInitDialog();
		TranslateString(_T("Thực lực trang bị CNTT"), szTemp);
		tmpStr.Format(_T("2. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CRPTITSRealAbilityM2(&m_wndReportGroup);
		newReport->Create(&m_wndReportGroup);
		newReport->OnInitDialog();
		TranslateString(_T("Thực lực trang bị CNTT (Mẫu 2)"), szTemp);
		tmpStr.Format(_T("3. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

	}
}

void CHMSReportFormDialog::CreatePRReports()
{
	CGuiView *newReport = NULL;
	CString tmpStr, szTemp;
	tmpStr.Empty();
	szTemp.Empty();
	CDocPane::CDocPaneInfo *obj = m_wndReportGroup.AddPane(_T("Report"));

	if (obj)
	{
		newReport = new CPRThongkehosoluutruchomuon(&m_wndReportGroup);
		newReport->Create(&m_wndReportGroup);
		newReport->OnInitDialog();
		TranslateString(_T("Thống kê hồ sơ lưu trữ cho mượn"), szTemp);
		tmpStr.Format(_T("1. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

	}
}

void CHMSReportFormDialog::CreateNMReports()
{
	CGuiView *newReport = NULL;
	CString tmpStr, szTemp;
	tmpStr.Empty();
	szTemp.Empty();
	CDocPane::CDocPaneInfo *obj = m_wndReportGroup.AddPane(_T("Report"));

	if (obj)
	{
		newReport = new CNTTTotalFood(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("TỔNG HỢP QUÂN SỐ ĂN"), szTemp);
		tmpStr.Format(_T("1. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CNTTObjectFood(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("PHÂN TÍCH ĐỐI TƯỢNG"), szTemp);
		tmpStr.Format(_T("2. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CNTTArmyFood(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("QUÂN SỐ ĂN TRONG NGÀY"), szTemp);
		tmpStr.Format(_T("3. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CNTTTotalFoodEvening(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("TỔNG HỢP QUÂN SỐ ĂN VÀO VIỆN TRƯA"), szTemp);
		tmpStr.Format(_T("4. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CNTTTotalFoodAt10(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("TỔNG HỢP QUÂN SỐ ĂN LÚC 10H00"), szTemp);
		tmpStr.Format(_T("5. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CNTTTotalMilk(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("TỔNG HỢP QUÂN SỐ ĂN SỮA"), szTemp);
		tmpStr.Format(_T("6. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CHMSFoodReportHCKT(&m_wndReportGroup);		
		TranslateString(_T("BÁO ĂN HẬU CẦN"), szTemp);
		tmpStr.Format(_T("7. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CHFFoodHCKTReport(&m_wndReportGroup);
		TranslateString(_T("Báo cáo Tổng hợp quân số ăn gói dịch vụ"), szTemp);
		tmpStr.Format(_T("8 %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CTonghopQuansoBaosua(&m_wndReportGroup);
		TranslateString(_T("Tổng hợp quân số báo sữa"), szTemp);
		tmpStr.Format(_T("9 %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CNTTTotalFoodQty(&m_wndReportGroup);
		TranslateString(_T("TỔNG HỢP QUÂN SỐ BẾP ĂN - 2022"), szTemp);
		tmpStr.Format(_T("10. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CNTTTotalFoodQtyHCKT(&m_wndReportGroup);
		TranslateString(_T("TỔNG HỢP QUÂN SỐ ĂN TỰ NGUYỆN - 2022"), szTemp);
		tmpStr.Format(_T("11. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CTonghopQuansoBaoannguoinha(&m_wndReportGroup);
		TranslateString(_T("Tổng hợp quân số báo ăn người nhà"), szTemp);
		tmpStr.Format(_T("12 %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);


		newReport = new CTonghopQuansoBaoanpttyc(&m_wndReportGroup);
		TranslateString(_T("Tổng hợp quân số báo ăn PTTYC"), szTemp);
		tmpStr.Format(_T("13 %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

	}
}

void CHMSReportFormDialog::CreateTMRReports()
{
	CGuiView *newReport = NULL;
	CString tmpStr, szTemp;
	tmpStr.Empty();
	szTemp.Empty();
	CDocPane::CDocPaneInfo *obj = m_wndReportGroup.AddPane(_T("Report"));

	if (obj)
	{
		newReport = new CSYS_TaskManagerReport(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Task Manager Report"), szTemp);
		tmpStr.Format(_T("1. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

	}
}

void CHMSReportFormDialog::CreateSOMReports()
{
	CGuiView *newReport = NULL;
	CString tmpStr, szTemp;
	tmpStr.Empty();
	szTemp.Empty();
	CDocPane::CDocPaneInfo *obj = m_wndReportGroup.AddPane(_T("Report"));
	
	if (obj)
	{
		newReport = new CSOMPregnancyButtonView(&m_wndReportGroup);		
		TranslateString(_T("THỐNG KÊ BỆNH NHÂN ĐĂNG KÝ MỔ ĐẺ"), szTemp);
		tmpStr.Format(_T("---- %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CAdmitPatientBook(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Admit Patient Book"), szTemp);
		tmpStr.Format(_T("1. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);
 
		newReport = new CTMIOTransbookreport(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("In Out Transfer Patient Book"), szTemp);
		tmpStr.Format(_T("2. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CTMDetailIOTransbookreport(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Detail In Out Transfer Patient Book"), szTemp);
		tmpStr.Format(_T("3. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CArmyReportsDept(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Báo cáo quân số"), szTemp);
		tmpStr.Format(_T("4. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CTMDepartmentUsageinDetail(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Department Usage in Detail"), szTemp);
		tmpStr.Format(_T("5. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CTMDepartmentUsageinDetailNew(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Department Usage in Detail New"), szTemp);
		tmpStr.Format(_T("5.1 %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CMASDepartmentUsageinDetail(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Department Usage in Detail"), szTemp);
		tmpStr.Format(_T("5.2- %s "), szTemp);
		obj->Add(tmpStr, _T(""), newReport);	

		newReport = new CTMPatientListDischarge(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Sổ ra viện"), szTemp);
		tmpStr.Format(_T("6. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);
		
		newReport = new CTMOperationList(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Bồi dưỡng PTTT"), szTemp);
		tmpStr.Format(_T("7. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CTMTotalPatientListDischarge(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Total Patient List Discharge"), szTemp);
		tmpStr.Format(_T("8. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CSOMReportConditionDialog(&m_wndReportGroup, 3);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("General Import Export Instock For Money Report"), szTemp);
		tmpStr.Format(_T("9. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);


		newReport = new CSOMMenuList(&m_wndReportGroup);		
		TranslateString(_T("DANH MỤC MENU PHỤC VỤ"), szTemp);
		tmpStr.Format(_T("10. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);


		newReport = new CSOMBCSOLUONGPTTYC();
		newReport->Create(&m_wndReportGroup);			
		TranslateString(_T("Thống kê số lượng PTTT tại khoa"), szTemp);
		tmpStr.Format(_T("11 %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);


		newReport = new CSOMBCSOLUONGPTTYCEX();
		newReport->Create(&m_wndReportGroup);			
		TranslateString(_T("Bảng so sánh giá TYC so với giá BH"), szTemp);
		tmpStr.Format(_T("12 %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CTM_TTTIEMTRUYEN(&m_wndReportGroup);
		tmpStr.Format(_T("13. Báo cáo danh sách bệnh nhân tiêm - truyền - máu"));
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CHMSNurseModeRPT();		
		tmpStr.Format(_T("14. Chế độ hộ lý"));
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CSOMDANHSACHBNCHUATINHCONG();		
		tmpStr.Format(_T("15. Báo cáo phẫu thuật chưa tính công - PTTYC"));
		obj->Add(tmpStr, _T(""), newReport);

	}
}

void CHMSReportFormDialog::AddNew(CDocPane::CDocPaneInfo *pDocPaneInfo, CString szName){
	CGuiView *pView = NULL;
	CMap<CString, LPCTSTR, CGuiView*, CGuiView*> map_class;
	map_class[_T("CEMPatientRatebyWardType")] = new CEMPatientRatebyWardType(&m_wndReportGroup);
	map_class[_T("CEMPatientStatbyObj")] = new CEMPatientStatbyObj(&m_wndReportGroup);
	map_class[_T("CEMAdmitRatebyRoom")] = new CEMAdmitRatebyRoom(&m_wndReportGroup);
	if (pDocPaneInfo)
	{
		//newReport = new CPRThongkehosoluutruchomuon(&m_wndReportGroup);
		map_class.Lookup(szName, pView);
		if (pView)
		{
			pView->Create(&m_wndReportGroup);
			pView->OnInitDialog();
			//TranslateString(_T("Thống kê hồ sơ lưu trữ cho mượn"), szTemp);
			//tmpStr.Format(_T("1. %s"), szTemp);
			pDocPaneInfo->Add(szName, _T(""), pView);
		}
		else
			pDocPaneInfo->Add(szName, _T(""), NULL);

	}
}

void CHMSReportFormDialog::CreateHCReports()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CGuiView * newReport = NULL;
	CString tmpStr, szTemp;
	tmpStr.Empty();
	szTemp.Empty();
	CDocPane::CDocPaneInfo *obj = m_wndReportGroup.AddPane(_T("Report"));
	if (obj)
	{
		TranslateString(_T("Nhóm báo cáo chung"), szTemp);
		tmpStr.Format(_T("A. %s"), szTemp);
		obj->AddCaption(tmpStr);

		newReport = new CPMSStockCardReportDialog(&m_wndReportGroup, 1);		
		TranslateString(_T("Stock Card"), szTemp);
		tmpStr.Format(_T("1. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CPMSStockCardReportDialog(&m_wndReportGroup, 4);		
		TranslateString(_T("Danh mục hàng chưa duyệt"), szTemp);
		tmpStr.Format(_T("2 %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);
		
		TranslateString(_T("Nhóm báo cáo nhập"), szTemp);
		tmpStr.Format(_T("B. %s"), szTemp);
		obj->AddCaption(tmpStr);

		newReport = new CHCSPurchaseOrderReportDialog(&m_wndReportGroup, 3);		
		TranslateString(_T("Tổng hợp nhập kho"), szTemp);
		tmpStr.Format(_T("1. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);		
		
		newReport = new CHCSPurchaseOrderReportDialog(&m_wndReportGroup, 1);		
		TranslateString(_T("Bảng kê phiếu nhập"), szTemp);
		tmpStr.Format(_T("2. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);
		
		TranslateString(_T("Nhóm báo cáo xuất"), szTemp);
		tmpStr.Format(_T("C. %s"), szTemp);
		obj->AddCaption(tmpStr);
		newReport = new CHCBaocaoxuatvattuchokhoatheodoituong(&m_wndReportGroup);		
		TranslateString(_T("Tổng hợp xuất kho"), szTemp);
		tmpStr.Format(_T("1. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CHCSExportSheetListForInsurance(&m_wndReportGroup);		
		TranslateString(_T("Bảng kê phiếu xuất"), szTemp);
		tmpStr.Format(_T("2. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CExportByDept(&m_wndReportGroup);		
		TranslateString(_T("Báo cáo tổng hợp xuất theo khu / khoa"), szTemp);
		tmpStr.Format(_T("3. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CExportByDeptC12(&m_wndReportGroup);		
		TranslateString(_T("Bảng kê phiếu xuất C12"), szTemp);
		tmpStr.Format(_T("4. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CExportByDeptKHTH(&m_wndReportGroup);		
		TranslateString(_T("Bảng kê phiếu xuất KHTH"), szTemp);
		tmpStr.Format(_T("5. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);
		
		TranslateString(_T("Nhóm báo cáo nhập - xuất - tồn kho"), szTemp);
		tmpStr.Format(_T("D. %s"), szTemp);
		obj->AddCaption(tmpStr);

		newReport = new CHCReportConditionDialog(&m_wndReportGroup, 3);		
		TranslateString(_T("Báo cáo nhập - xuất - tồn kho"), szTemp);
		tmpStr.Format(_T("1. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		TranslateString(_T("Nhóm báo cáo trả lại"), szTemp);
		tmpStr.Format(_T("E. %s"), szTemp);
		obj->AddCaption(tmpStr);

		newReport = new CHCDepartmentReturnList(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Department Return List"), szTemp);
		tmpStr.Format(_T("1. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		TranslateString(_T("Nhóm báo cáo phẫu thuật - thủ thuật"), szTemp);
		tmpStr.Format(_T("F. %s"), szTemp);
		obj->AddCaption(tmpStr);
		
		if (pMF->GetModuleID() == _T("C12"))
		{
		newReport = new CHCDanhsachBenhnhanPhauthuatTYC(&m_wndReportGroup);		
		TranslateString(_T("Danh sách phẫu thuật theo yêu cầu"), szTemp);
		tmpStr.Format(_T("1. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);
		}

	}
}
void CHMSReportFormDialog::CreateIVFReports()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CGuiView * newReport = NULL;
	CString tmpStr, szTemp;
	tmpStr.Empty();
	szTemp.Empty();
	CDocPane::CDocPaneInfo *obj = m_wndReportGroup.AddPane(_T("BÁO CÁO TRUNG TÂM HỖ TRỢ SINH SẢN"));
	if (obj)
	{
		TranslateString(_T("Nhóm báo cáo chung"), szTemp);
		tmpStr.Format(_T("A. %s"), szTemp);
		obj->AddCaption(tmpStr);

		newReport = new CIVFStorageView_v2_Report(&m_wndReportGroup);
		TranslateString(_T("Báo cáo kho trữ phôi, tinh trùng cận hết hạn"), szTemp);
		tmpStr.Format(_T("1. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CIVFStorageTrack();
		TranslateString(_T("Báo cáo theo dõi trữ, rã phôi"), szTemp);
		tmpStr.Format(_T("2. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);
		
		TranslateString(_T("Nhóm báo cáo quyết toán thuốc - vật tư"), szTemp);
		tmpStr.Format(_T("B. %s"), szTemp);
		obj->AddCaption(tmpStr);
				
		newReport = new CIVFReportConditionDialog(&m_wndReportGroup, 3);		
		TranslateString(_T("Báo cáo nhập - xuất - tồn kho"), szTemp);
		tmpStr.Format(_T("1. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);		

		newReport = new CIVFGeneralStockExport(&m_wndReportGroup);		
		TranslateString(_T("Báo cáo chi tiết sử dụng"), szTemp);
		tmpStr.Format(_T("2. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new IVFPrescriptionListReportDialog(&m_wndReportGroup);		
		TranslateString(_T("Bảng kê đơn thuốc IVF"), szTemp);
		tmpStr.Format(_T("3. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);


		newReport = new CTMOperationList(&m_wndReportGroup);
		//newReport->Create(&m_wndReportGroup);
		//newReport->OnInitDialog();
		TranslateString(_T("Bồi dưỡng PTTT"), szTemp);
		tmpStr.Format(_T("4. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);


		TranslateString(_T("Nhóm báo cáo doanh thu"), szTemp);
		tmpStr.Format(_T("C. %s"), szTemp);
		obj->AddCaption(tmpStr);

		if (pMF->GetCurrentUser() == _T("ntmo_ivf") && pMF->GetCurrentDepartmentID() == _T("TTDTHM"))
		{
			newReport = new CIVFDoanhthutheokhoa(&m_wndReportGroup);
			TranslateString(_T("Doanh thu TTHTSS"), szTemp);
			tmpStr.Format(_T("1 %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);

			newReport = new CTMSuDungDVKTIVF(&m_wndReportGroup);
			newReport->Create(&m_wndReportGroup);
			newReport->OnInitDialog();
			TranslateString(_T("Sử dụng DVKT Trung tâm điều trị hiếm muộn"), szTemp);
			tmpStr.Format(_T("2. %s"), szTemp);
			obj->Add(tmpStr, _T(""), newReport);
		}
		TranslateString(_T("Nhóm báo cáo nghiên cứu khoa học"), szTemp);
		tmpStr.Format(_T("D. %s"), szTemp);
		obj->AddCaption(tmpStr);
	}
}
void CHMSReportFormDialog::CreateGLSReports()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CGuiView * newReport = NULL;
	CString tmpStr, szTemp;
	tmpStr.Empty();
	szTemp.Empty();
	CDocPane::CDocPaneInfo *obj = m_wndReportGroup.AddPane(_T("BÁO CÁO TRUNG TÂM KÍNH MẮT"));
	if (obj)
	{
		TranslateString(_T("Nhóm báo cáo chung"), szTemp);
		tmpStr.Format(_T("A. %s"), szTemp);
		obj->AddCaption(tmpStr);

		newReport = new CPMSStockCardReportDialog(&m_wndReportGroup, 1);		
		TranslateString(_T("Stock Card"), szTemp);
		tmpStr.Format(_T("1. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CDoanhThuBanHang(&m_wndReportGroup);		
		TranslateString(_T("Doanh thu bán hàng"), szTemp);
		tmpStr.Format(_T("2. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CBaocaotonkhokinhmat(&m_wndReportGroup);		
		TranslateString(_T("Báo cáo tồn kho kính mắt"), szTemp);
		tmpStr.Format(_T("3. %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);
	}
}

int CHMSReportFormDialog::OnSearchCheckValue()
{
	CGuiMainFrame* pMF = (CGuiMainFrame*) AfxGetMainWnd();
	UpdateData();
	int nCount = 0;
	if (m_wndReportGroup.m_pCurrentPane == NULL)
	{
		return 0;
	}
	nCount = CopyPane(&(m_wndReportGroup.m_pCurrentPane->m_arrayPanes), &m_arrPane);
//_tprintf(_T("\nCopyPane: %d"), nCount);
	nCount = SearchPane(&m_arrPane, m_szSearch);
//_tprintf(_T("\nSearchPane: %d"), nCount);
	nCount = PopulatePane();
//_tprintf(_T("\nPopulatePane: %d"), nCount);	
	m_wndReportGroup.RecalcLayout();
	return 0;
}

int CHMSReportFormDialog::CopyPane(CPtrArray* pSrc, CPtrArray* pDest)
{
	int nCount = 0, nRet = 0;
	//_tprintf(_T("\nSrc item count: %d"), pSrc->GetCount());
	if (pSrc == NULL)
	{
		return nRet;
	}
	if (pDest->GetCount() > 0)
	{
		pDest->RemoveAll();
	}
	if (pSrc->GetCount() <= 0)
	{
		return nRet;
	}
	for (int i = 0; i < pSrc->GetCount(); i++)
	{
		nCount = pDest->Add(pSrc->GetAt(i));
		if (nCount >= 0)
		{
			nRet++;
		}
	}
	return nRet;
}

int CHMSReportFormDialog::SearchPane(CPtrArray* pArr, CString szSearch)
{
	int nRet = 0;
	if (pArr == NULL)
	{
		return 0;
	}
	if (szSearch.IsEmpty())
	{
		return nRet;
	}
	if (pArr->GetCount() <= 0)
	{
		return 0;
	}
	CDocPane::CDocPaneInfo * pi = NULL;
	CString tmpStr;
	int i = 0;
	szSearch.MakeLower();
	do
	{
		pi = (CDocPane::CDocPaneInfo*) pArr->GetAt(i);
		tmpStr = pi->m_szCaption;
		if (pi->m_pWnd == NULL)
		{
			i++;
			continue;
		}
		if (tmpStr.MakeLower().Find(szSearch) == -1)
		{
			pArr->RemoveAt(i);
		}
		else
		{
			i++;
			nRet++;
		}
	}
	while (i < pArr->GetCount());
	return nRet;
}

int CHMSReportFormDialog::PopulatePane()
{
	//Manual populate pane
	int nCount = 0;
	CListPane* pSubPane = m_wndReportGroup.GetSubPane();
	pSubPane->DeleteAll();
	CDocPane::CDocPaneInfo *pi = NULL;
	for (int i = 0; i < m_arrPane.GetCount(); i++)
	{
		pi = (CDocPane::CDocPaneInfo *) m_arrPane.GetAt(i);
		if (pi->m_pWnd == NULL)
		{
			pSubPane->AddCaption(pi->m_szCaption);
		}
		else
		{
			pSubPane->Add(pi->m_szCaption, pi->m_szDescription, pi->m_pWnd);
		}
		nCount++;
	}
	if (nCount == 0)
	{
		pSubPane->AddCaption(_T(""));
	}
	return nCount;
}