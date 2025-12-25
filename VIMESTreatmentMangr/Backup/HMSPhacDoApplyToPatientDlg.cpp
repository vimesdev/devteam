#include "HMSPhacDoApplyToPatientDlg.h"
#include "HMSMainFrame.h"
static void _OnICD10SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSPhacDoApplyToPatientDlg* )pWnd)->OnICD10SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnICD10SelendokFnc(CWnd *pWnd){
	((CHMSPhacDoApplyToPatientDlg *)pWnd)->OnICD10Selendok();
}
/*static void _OnICD10SetfocusFnc(CWnd *pWnd){
	((CHMSPhacDoApplyToPatientDlg *)pWnd)->OnICD10Killfocus();
}*/
/*static void _OnICD10KillfocusFnc(CWnd *pWnd){
	((CHMSPhacDoApplyToPatientDlg *)pWnd)->OnICD10Killfocus();
}*/
static long _OnICD10LoadDataFnc(CWnd *pWnd){
	return ((CHMSPhacDoApplyToPatientDlg *)pWnd)->OnICD10LoadData();
}
/*static void _OnICD10AddNewFnc(CWnd *pWnd){
	((CHMSPhacDoApplyToPatientDlg *)pWnd)->OnICD10AddNew();
}*/
static void _OnPhacDoSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSPhacDoApplyToPatientDlg* )pWnd)->OnPhacDoSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPhacDoSelendokFnc(CWnd *pWnd){
	((CHMSPhacDoApplyToPatientDlg *)pWnd)->OnPhacDoSelendok();
}
/*static void _OnPhacDoSetfocusFnc(CWnd *pWnd){
	((CHMSPhacDoApplyToPatientDlg *)pWnd)->OnPhacDoKillfocus();
}*/
/*static void _OnPhacDoKillfocusFnc(CWnd *pWnd){
	((CHMSPhacDoApplyToPatientDlg *)pWnd)->OnPhacDoKillfocus();
}*/
static long _OnPhacDoLoadDataFnc(CWnd *pWnd){
	return ((CHMSPhacDoApplyToPatientDlg *)pWnd)->OnPhacDoLoadData();
}
/*static void _OnPhacDoAddNewFnc(CWnd *pWnd){
	((CHMSPhacDoApplyToPatientDlg *)pWnd)->OnPhacDoAddNew();
}*/
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSPhacDoApplyToPatientDlg*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSPhacDoApplyToPatientDlg*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSPhacDoApplyToPatientDlg*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSPhacDoApplyToPatientDlg*)pWnd)->OnListDeleteItem();
} 
static void _OnApplySelectFnc(CWnd *pWnd){
	CHMSPhacDoApplyToPatientDlg *pVw = (CHMSPhacDoApplyToPatientDlg *)pWnd;
	pVw->OnApplySelect();
} 
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CHMSPhacDoApplyToPatientDlg *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CHMSPhacDoApplyToPatientDlg *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CHMSPhacDoApplyToPatientDlg *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSPhacDoApplyToPatientDlg *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CHMSPhacDoApplyToPatientDlg *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CHMSPhacDoApplyToPatientDlg *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CHMSPhacDoApplyToPatientDlg *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSPhacDoApplyToPatientDlg *)pWnd)->OnToDateCheckValue();
} 
static void _OnUsePhacDoSelectFnc(CWnd *pWnd){
	CHMSPhacDoApplyToPatientDlg *pVw = (CHMSPhacDoApplyToPatientDlg *)pWnd;
	pVw->OnUsePhacDoSelect();
} 
/*static void _OnNoteChangeFnc(CWnd *pWnd){
	((CHMSPhacDoApplyToPatientDlg *)pWnd)->OnNoteChange();
} */
/*static void _OnNoteSetfocusFnc(CWnd *pWnd){
	((CHMSPhacDoApplyToPatientDlg *)pWnd)->OnNoteSetfocus();} */ 
/*static void _OnNoteKillfocusFnc(CWnd *pWnd){
	((CHMSPhacDoApplyToPatientDlg *)pWnd)->OnNoteKillfocus();
} */
static int _OnNoteCheckValueFnc(CWnd *pWnd){
	return ((CHMSPhacDoApplyToPatientDlg *)pWnd)->OnNoteCheckValue();
} 
/*static void _OnHuongXuTriChangeFnc(CWnd *pWnd){
	((CHMSPhacDoApplyToPatientDlg *)pWnd)->OnHuongXuTriChange();
} */
/*static void _OnHuongXuTriSetfocusFnc(CWnd *pWnd){
	((CHMSPhacDoApplyToPatientDlg *)pWnd)->OnHuongXuTriSetfocus();} */ 
/*static void _OnHuongXuTriKillfocusFnc(CWnd *pWnd){
	((CHMSPhacDoApplyToPatientDlg *)pWnd)->OnHuongXuTriKillfocus();
} */
static int _OnHuongXuTriCheckValueFnc(CWnd *pWnd){
	return ((CHMSPhacDoApplyToPatientDlg *)pWnd)->OnHuongXuTriCheckValue();
} 
static void _OnCheDoAnSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSPhacDoApplyToPatientDlg* )pWnd)->OnCheDoAnSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnCheDoAnSelendokFnc(CWnd *pWnd){
	((CHMSPhacDoApplyToPatientDlg *)pWnd)->OnCheDoAnSelendok();
}
/*static void _OnCheDoAnSetfocusFnc(CWnd *pWnd){
	((CHMSPhacDoApplyToPatientDlg *)pWnd)->OnCheDoAnKillfocus();
}*/
/*static void _OnCheDoAnKillfocusFnc(CWnd *pWnd){
	((CHMSPhacDoApplyToPatientDlg *)pWnd)->OnCheDoAnKillfocus();
}*/
static long _OnCheDoAnLoadDataFnc(CWnd *pWnd){
	return ((CHMSPhacDoApplyToPatientDlg *)pWnd)->OnCheDoAnLoadData();
}
/*static void _OnCheDoAnAddNewFnc(CWnd *pWnd){
	((CHMSPhacDoApplyToPatientDlg *)pWnd)->OnCheDoAnAddNew();
}*/
/*static void _OnCheDoChamSocChangeFnc(CWnd *pWnd){
	((CHMSPhacDoApplyToPatientDlg *)pWnd)->OnCheDoChamSocChange();
} */
/*static void _OnCheDoChamSocSetfocusFnc(CWnd *pWnd){
	((CHMSPhacDoApplyToPatientDlg *)pWnd)->OnCheDoChamSocSetfocus();} */ 
/*static void _OnCheDoChamSocKillfocusFnc(CWnd *pWnd){
	((CHMSPhacDoApplyToPatientDlg *)pWnd)->OnCheDoChamSocKillfocus();
} */
static int _OnCheDoChamSocCheckValueFnc(CWnd *pWnd){
	return ((CHMSPhacDoApplyToPatientDlg *)pWnd)->OnCheDoChamSocCheckValue();
} 
static void _OnTreatDaySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSPhacDoApplyToPatientDlg* )pWnd)->OnTreatDaySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTreatDaySelendokFnc(CWnd *pWnd){
	((CHMSPhacDoApplyToPatientDlg *)pWnd)->OnTreatDaySelendok();
}
/*static void _OnTreatDaySetfocusFnc(CWnd *pWnd){
	((CHMSPhacDoApplyToPatientDlg *)pWnd)->OnTreatDayKillfocus();
}*/
/*static void _OnTreatDayKillfocusFnc(CWnd *pWnd){
	((CHMSPhacDoApplyToPatientDlg *)pWnd)->OnTreatDayKillfocus();
}*/
static long _OnTreatDayLoadDataFnc(CWnd *pWnd){
	return ((CHMSPhacDoApplyToPatientDlg *)pWnd)->OnTreatDayLoadData();
}
/*static void _OnTreatDayAddNewFnc(CWnd *pWnd){
	((CHMSPhacDoApplyToPatientDlg *)pWnd)->OnTreatDayAddNew();
}*/
static void _OnAddExamSheetSelectFnc(CWnd *pWnd){
	 ((CHMSPhacDoApplyToPatientDlg*)pWnd)->OnAddExamSheetSelect();
}
/*static void _OnTimeChangeFnc(CWnd *pWnd){
	((CHMSPhacDoApplyToPatientDlg *)pWnd)->OnTimeChange();
} */
/*static void _OnTimeSetfocusFnc(CWnd *pWnd){
	((CHMSPhacDoApplyToPatientDlg *)pWnd)->OnTimeSetfocus();} */ 
/*static void _OnTimeKillfocusFnc(CWnd *pWnd){
	((CHMSPhacDoApplyToPatientDlg *)pWnd)->OnTimeKillfocus();
} */
static int _OnTimeCheckValueFnc(CWnd *pWnd){
	return ((CHMSPhacDoApplyToPatientDlg *)pWnd)->OnTimeCheckValue();
} 
static long _OnApplyListLoadDataFnc(CWnd *pWnd){
	return ((CHMSPhacDoApplyToPatientDlg*)pWnd)->OnApplyListLoadData();
} 
static void _OnApplyListDblClickFnc(CWnd *pWnd){
	((CHMSPhacDoApplyToPatientDlg*)pWnd)->OnApplyListDblClick();
} 
static void _OnApplyListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSPhacDoApplyToPatientDlg*)pWnd)->OnApplyListSelectChange(nOldItem, nNewItem);
} 
static int _OnApplyListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSPhacDoApplyToPatientDlg*)pWnd)->OnApplyListDeleteItem();
} 
static void _OnEvaluationSelectFnc(CWnd *pWnd){
	CHMSPhacDoApplyToPatientDlg *pVw = (CHMSPhacDoApplyToPatientDlg *)pWnd;
	pVw->OnEvaluationSelect();
} 
static int _OnAddHMSPhacDoApplyToPatientDlgFnc(CWnd *pWnd){
	 return ((CHMSPhacDoApplyToPatientDlg*)pWnd)->OnAddHMSPhacDoApplyToPatientDlg();
} 
static int _OnEditHMSPhacDoApplyToPatientDlgFnc(CWnd *pWnd){
	 return ((CHMSPhacDoApplyToPatientDlg*)pWnd)->OnEditHMSPhacDoApplyToPatientDlg();
} 
static int _OnDeleteHMSPhacDoApplyToPatientDlgFnc(CWnd *pWnd){
	 return ((CHMSPhacDoApplyToPatientDlg*)pWnd)->OnDeleteHMSPhacDoApplyToPatientDlg();
} 
static int _OnSaveHMSPhacDoApplyToPatientDlgFnc(CWnd *pWnd){
	 return ((CHMSPhacDoApplyToPatientDlg*)pWnd)->OnSaveHMSPhacDoApplyToPatientDlg();
} 
static int _OnCancelHMSPhacDoApplyToPatientDlgFnc(CWnd *pWnd){
	 return ((CHMSPhacDoApplyToPatientDlg*)pWnd)->OnCancelHMSPhacDoApplyToPatientDlg();
} 
CHMSPhacDoApplyToPatientDlg::CHMSPhacDoApplyToPatientDlg(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 765;
	SetDefaultValues();
}
CHMSPhacDoApplyToPatientDlg::~CHMSPhacDoApplyToPatientDlg(){
}
void CHMSPhacDoApplyToPatientDlg::OnCreateComponents(){
	m_wndPhacDoInFor.Create(this, _T("Thông tin phác đồ"), 5, 5, 635, 115);
	m_wndThongTinApdung.Create(this, _T("Áp dụng phác đồ"), 5, 120, 1015, 740);
	m_wndPhacDoApplyInfor.Create(this, _T("Thông tin phác đồ áp dụng"), 640, 5, 1020, 115);
	m_wndICD10Label.Create(this, _T("ICD10"), 10, 30, 90, 55);
	m_wndICD10.Create(this,95, 30, 270, 55); 
	m_wndPhacDoLabel.Create(this, _T("Phác đồ"), 275, 30, 355, 55);
	m_wndPhacDo.Create(this,360, 30, 630, 55); 
	m_wndList.Create(this,10, 355, 1010, 735); 
	m_wndApply.Create(this, _T("Áp dụng"), 930, 145, 1010, 170);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 90, 85);
	m_wndFromDate.Create(this,95, 60, 220, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 225, 60, 305, 85);
	m_wndToDate.Create(this,310, 60, 435, 85); 
	m_wndUsePhacDo.Create(this, _T("Sử dụng PĐ"), 440, 60, 525, 85);
	m_wndNoteLabel.Create(this, _T("Note"), 10, 175, 500, 200);
	m_wndNote.Create(this,10, 205, 500, 255); 
	m_wndHuongXuTriLabel.Create(this, _T("Hướng xử trí"), 10, 260, 500, 285);
	m_wndHuongXuTri.Create(this,10, 290, 500, 350); 
	m_wndCheDoAnLabel.Create(this, _T("Chế độ ăn"), 520, 175, 1010, 200);
	m_wndCheDoAn.Create(this,522, 205, 1012, 230); 
	m_wndCheDoChamSocLabel.Create(this, _T("Chế độ chăm sóc"), 525, 260, 1009, 285);
	m_wndCheDoChamSoc.Create(this,525, 290, 1010, 350); 
	m_wndTreatDayLabel.Create(this, _T("Ngày điều trị"), 10, 145, 125, 170);
	m_wndTreatDay.Create(this,130, 145, 230, 170); 
	m_wndAddExamSheet.Create(this, _T("Thêm phiếu khám"), 235, 145, 430, 170);
	m_wndTimeLabel.Create(this, _T("Time"), 435, 145, 515, 170);
	m_wndTime.Create(this,520, 145, 695, 170); 
	m_wndApplyList.Create(this,645, 30, 1015, 110); 
	m_wndEvaluation.Create(this, _T("Đánh giá KQ"), 530, 60, 630, 85);

}
void CHMSPhacDoApplyToPatientDlg::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
//	m_wndICD10.SetCheckValue(true);
	m_wndICD10.LimitText(1024);
	m_wndPhacDo.SetCheckValue(true);
	m_wndPhacDo.LimitText(1024);
//	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
//	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
//	m_wndToDate.SetCheckValue(true);
	m_wndNote.SetLimitText(254);
//	m_wndNote.SetCheckValue(true);
	m_wndHuongXuTri.SetLimitText(35);
//	m_wndHuongXuTri.SetCheckValue(true);
//	m_wndCheDoAn.SetCheckValue(true);
	m_wndCheDoAn.LimitText(35);
	m_wndCheDoChamSoc.SetLimitText(254);
	//m_wndCheDoChamSoc.SetCheckValue(true);
//	m_wndTreatDay.SetCheckValue(true);
//	m_wndTreatDay.LimitText(35);
//	m_wndTime.SetMax(CDateTime(pMF->GetSysDateTime()));
//	m_wndTime.SetCheckValue(true);


	m_wndCheDoAn.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndCheDoAn.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndTreatDay.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndTreatDay.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndApplyList.InsertColumn(0, _T("Phác đồ"), CFMT_TEXT, 0);
	m_wndApplyList.InsertColumn(1, _T("Mã phác đồ"), CFMT_TEXT, 0);
	m_wndApplyList.InsertColumn(2, _T("Phác đồ"), CFMT_TEXT, 100);
	m_wndApplyList.InsertColumn(3, _T("Createdby"), CFMT_TEXT, 0);
	m_wndApplyList.InsertColumn(4, _T("FromDate"), CFMT_DATE, 100);
	m_wndApplyList.InsertColumn(5, _T("ToDate"), CFMT_DATE, 100);



	m_wndICD10.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndICD10.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndPhacDo.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndPhacDo.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);
	m_wndPhacDo.InsertColumn(2, _T("Note"), CFMT_TEXT, 300);
	m_wndPhacDo.InsertColumn(3, _T("Số ngày ĐT"), CFMT_TEXT, 100);



	m_wndList.InsertColumn(0, _T("TYPE"), CFMT_TEXT, 20);
	m_wndList.InsertColumn(1, _T("ITEM"), CFMT_TEXT, 0);
	m_wndList.InsertColumn(2, _T("Desc"), CFMT_TEXT, 300);
	m_wndList.InsertColumn(3, _T("Số lượng"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(4, _T("Đơn vị"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(5, _T("Liều dùng"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(6, _T("Cách sử dụng"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(7, _T("Hàm lượng/NĐ"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(8, _T("Thể tích"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(9, _T("Mã thuốc"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(10, _T("Tên thuốc"), CFMT_TEXT, 200);
	m_wndList.InsertColumn(11, _T("Số lượng"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(12, _T("Kho"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(13, _T("Đường dùng"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(14, _T("Cách sử dụng"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(15, _T("Tốc độ tryền"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(16, _T("Insurance Unpaid"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(17, _T("Not daily order"), CFMT_TEXT, 100);
	m_wndList.SetCheckBox(true);

	m_hms_ipharmaorderTbl.SetTableName(_T("hms_ipharmaorder"));
	m_hms_ipharmaorderTbl.AddField(_T("hpo_org_id"), dfText, 3); 
	m_hms_ipharmaorderTbl.AddField(_T("hpo_user_id"), dfText, 15); 
	m_hms_ipharmaorderTbl.AddField(_T("hpo_storage_id"), dfLong); 
	m_hms_ipharmaorderTbl.AddField(_T("hpo_patientno"), dfLong); 
	m_hms_ipharmaorderTbl.AddField(_T("hpo_docno"), dfLong); 
	m_hms_ipharmaorderTbl.AddField(_T("hpo_deptid"), dfText, 7); 
	m_hms_ipharmaorderTbl.AddField(_T("hpo_refidx"), dfInteger); 
	m_hms_ipharmaorderTbl.AddField(_T("hpo_roomid"), dfInteger); 
	m_hms_ipharmaorderTbl.AddField(_T("hpo_bedid"), dfInteger); 
	m_hms_ipharmaorderTbl.AddField(_T("hpo_treatidx"), dfLong); 
	m_hms_ipharmaorderTbl.AddField(_T("hpo_ordertype"), dfText, 3); 
	m_hms_ipharmaorderTbl.AddField(_T("hpo_orderdate"), dfDateTime); 
	m_hms_ipharmaorderTbl.AddField(_T("hpo_doctor"), dfText, 15); 
	m_hms_ipharmaorderTbl.AddField(_T("hpo_objecttype"), dfText, 1); 
	m_hms_ipharmaorderTbl.AddField(_T("hpo_objectid"), dfInteger); 
	m_hms_ipharmaorderTbl.AddField(_T("hpol_product_id"), dfLong); 
	m_hms_ipharmaorderTbl.AddField(_T("hpol_qtyorder"), dfFloat); 
	m_hms_ipharmaorderTbl.AddField(_T("hpol_speed"), dfText, 32); 
	m_hms_ipharmaorderTbl.AddField(_T("hpol_usage"), dfText, 128);
	m_hms_ipharmaorderTbl.AddField(_T("hpol_hoursqty"), dfFloat); 
	m_hms_ipharmaorderTbl.AddField(_T("hpol_pointoxy"), dfText,2);
	m_hms_ipharmaorderTbl.AddField(_T("hpol_indication"), dfInteger);
	m_hms_ipharmaorderTbl.AddField(_T("hpol_inspaid"), dfText,1);
	m_hms_ipharmaorderTbl.AddField(_T("hpo_outpatient_order"), dfText,1);


	m_hms_phacdo_apply.SetTableName(_T("hms_phacdo_apply"));
	m_hms_phacdo_apply.AddField(_T("createdby"), dfText, 15); 
	m_hms_phacdo_apply.AddField(_T("createdate"), dfDateTime);
	m_hms_phacdo_apply.AddField(_T("docno"), dfLong); 
	m_hms_phacdo_apply.AddField(_T("phacdo_apply_id"), dfLong); 
	m_hms_phacdo_apply.AddField(_T("hms_phacdo_id"), dfLong); 
	m_hms_phacdo_apply.AddField(_T("from_date"), dfDate);
	m_hms_phacdo_apply.AddField(_T("to_date"), dfDate);
	m_hms_phacdo_apply.AddField(_T("status"), dfText, 1);
	m_hms_phacdo_apply.AddField(_T("updatedby"), dfText, 15); 
	m_hms_phacdo_apply.AddField(_T("updateddate"), dfDateTime);
	m_hms_phacdo_apply.AddField(_T("ket_qua"), dfText, 254); 
	m_hms_phacdo_apply.AddField(_T("ket_qua_id"), dfText,5 );


}
void CHMSPhacDoApplyToPatientDlg::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndICD10.SetEvent(WE_SELENDOK, _OnICD10SelendokFnc);
	//m_wndICD10.SetEvent(WE_SETFOCUS, _OnICD10SetfocusFnc);
	//m_wndICD10.SetEvent(WE_KILLFOCUS, _OnICD10KillfocusFnc);
	m_wndICD10.SetEvent(WE_SELCHANGE, _OnICD10SelectChangeFnc);
	m_wndICD10.SetEvent(WE_LOADDATA, _OnICD10LoadDataFnc);
	//m_wndICD10.SetEvent(WE_ADDNEW, _OnICD10AddNewFnc);
	m_wndPhacDo.SetEvent(WE_SELENDOK, _OnPhacDoSelendokFnc);
	//m_wndPhacDo.SetEvent(WE_SETFOCUS, _OnPhacDoSetfocusFnc);
	//m_wndPhacDo.SetEvent(WE_KILLFOCUS, _OnPhacDoKillfocusFnc);
	m_wndPhacDo.SetEvent(WE_SELCHANGE, _OnPhacDoSelectChangeFnc);
	m_wndPhacDo.SetEvent(WE_LOADDATA, _OnPhacDoLoadDataFnc);
	//m_wndPhacDo.SetEvent(WE_ADDNEW, _OnPhacDoAddNewFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndUsePhacDo.SetEvent(WE_CLICK, _OnUsePhacDoSelectFnc);
	//m_wndNote.SetEvent(WE_CHANGE, _OnNoteChangeFnc);
	//m_wndNote.SetEvent(WE_SETFOCUS, _OnNoteSetfocusFnc);
	//m_wndNote.SetEvent(WE_KILLFOCUS, _OnNoteKillfocusFnc);
	m_wndNote.SetEvent(WE_CHECKVALUE, _OnNoteCheckValueFnc);
	//m_wndHuongXuTri.SetEvent(WE_CHANGE, _OnHuongXuTriChangeFnc);
	//m_wndHuongXuTri.SetEvent(WE_SETFOCUS, _OnHuongXuTriSetfocusFnc);
	//m_wndHuongXuTri.SetEvent(WE_KILLFOCUS, _OnHuongXuTriKillfocusFnc);
	m_wndHuongXuTri.SetEvent(WE_CHECKVALUE, _OnHuongXuTriCheckValueFnc);
	m_wndCheDoAn.SetEvent(WE_SELENDOK, _OnCheDoAnSelendokFnc);
	//m_wndCheDoAn.SetEvent(WE_SETFOCUS, _OnCheDoAnSetfocusFnc);
	//m_wndCheDoAn.SetEvent(WE_KILLFOCUS, _OnCheDoAnKillfocusFnc);
	m_wndCheDoAn.SetEvent(WE_SELCHANGE, _OnCheDoAnSelectChangeFnc);
	m_wndCheDoAn.SetEvent(WE_LOADDATA, _OnCheDoAnLoadDataFnc);
	//m_wndCheDoAn.SetEvent(WE_ADDNEW, _OnCheDoAnAddNewFnc);
	//m_wndCheDoChamSoc.SetEvent(WE_CHANGE, _OnCheDoChamSocChangeFnc);
	//m_wndCheDoChamSoc.SetEvent(WE_SETFOCUS, _OnCheDoChamSocSetfocusFnc);
	//m_wndCheDoChamSoc.SetEvent(WE_KILLFOCUS, _OnCheDoChamSocKillfocusFnc);
	m_wndCheDoChamSoc.SetEvent(WE_CHECKVALUE, _OnCheDoChamSocCheckValueFnc);
	m_wndTreatDay.SetEvent(WE_SELENDOK, _OnTreatDaySelendokFnc);
	//m_wndTreatDay.SetEvent(WE_SETFOCUS, _OnTreatDaySetfocusFnc);
	//m_wndTreatDay.SetEvent(WE_KILLFOCUS, _OnTreatDayKillfocusFnc);
	m_wndTreatDay.SetEvent(WE_SELCHANGE, _OnTreatDaySelectChangeFnc);
	m_wndTreatDay.SetEvent(WE_LOADDATA, _OnTreatDayLoadDataFnc);
	//m_wndTreatDay.SetEvent(WE_ADDNEW, _OnTreatDayAddNewFnc);
	m_wndAddExamSheet.SetEvent(WE_CLICK, _OnAddExamSheetSelectFnc);
	//m_wndTime.SetEvent(WE_CHANGE, _OnTimeChangeFnc);
	//m_wndTime.SetEvent(WE_SETFOCUS, _OnTimeSetfocusFnc);
	//m_wndTime.SetEvent(WE_KILLFOCUS, _OnTimeKillfocusFnc);
	m_wndTime.SetEvent(WE_CHECKVALUE, _OnTimeCheckValueFnc);
	m_wndApplyList.SetEvent(WE_SELCHANGE, _OnApplyListSelectChangeFnc);
	m_wndApplyList.SetEvent(WE_LOADDATA, _OnApplyListLoadDataFnc);
	m_wndApplyList.SetEvent(WE_DBLCLICK, _OnApplyListDblClickFnc);
	m_wndApplyList.AddEvent(1, _T("Delete"), _OnApplyListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndEvaluation.SetEvent(WE_CLICK, _OnEvaluationSelectFnc);
	
	SetMode(VM_ADD);
	OnApplyListLoadData();

}
void CHMSPhacDoApplyToPatientDlg::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndICD10.GetDlgCtrlID(), m_szICD10Key);
	DDX_TextEx(pDX, m_wndPhacDo.GetDlgCtrlID(), m_szPhacDoKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Text(pDX, m_wndNote.GetDlgCtrlID(), m_szNote);
	DDX_Text(pDX, m_wndHuongXuTri.GetDlgCtrlID(), m_szHuongXuTri);
	DDX_TextEx(pDX, m_wndCheDoAn.GetDlgCtrlID(), m_szCheDoAnKey);
	DDX_Text(pDX, m_wndCheDoChamSoc.GetDlgCtrlID(), m_szCheDoChamSoc);
	DDX_TextEx(pDX, m_wndTreatDay.GetDlgCtrlID(), m_szTreatDayKey);
	DDX_Check(pDX, m_wndAddExamSheet.GetDlgCtrlID(), m_bAddExamSheet);
	DDX_TextEx(pDX, m_wndTime.GetDlgCtrlID(), m_szTime);

}
void CHMSPhacDoApplyToPatientDlg::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("ICD10")] =  m_szICD10Key;
	m_jData[_T("PhacDo")] =  m_szPhacDoKey;
	m_jData[_T("FromDate")] =  m_szFromDate;
	m_jData[_T("ToDate")] =  m_szToDate;
	m_jData[_T("Note")] =  m_szNote;
	m_jData[_T("HuongXuTri")] =  m_szHuongXuTri;
	m_jData[_T("CheDoAn")] =  m_szCheDoAnKey;
	m_jData[_T("CheDoChamSoc")] =  m_szCheDoChamSoc;
	m_jData[_T("TreatDay")] =  m_szTreatDayKey;
	m_jData[_T("AddExamSheet")] =  m_bAddExamSheet;
	m_jData[_T("Time")] =  m_szTime;
	}
	else
	{
			
	m_jData[_T("ICD10")].GetValue(m_szICD10Key);
	m_jData[_T("PhacDo")].GetValue(m_szPhacDoKey);
	m_jData[_T("FromDate")].GetValue(m_szFromDate);
	m_jData[_T("ToDate")].GetValue(m_szToDate);
	m_jData[_T("Note")].GetValue(m_szNote);
	m_jData[_T("HuongXuTri")].GetValue(m_szHuongXuTri);
	m_jData[_T("CheDoAn")].GetValue(m_szCheDoAnKey);
	m_jData[_T("CheDoChamSoc")].GetValue(m_szCheDoChamSoc);
	m_jData[_T("TreatDay")].GetValue(m_szTreatDayKey);
	m_jData[_T("AddExamSheet")].GetValue(m_bAddExamSheet);
	m_jData[_T("Time")].GetValue(m_szTime);
	}

}
void CHMSPhacDoApplyToPatientDlg::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
	
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM hms_phacdo_apply where phacdo_apply_id=%ld "), m_nPhacDoApplyID);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("hms_phacdo_id"), m_szPhacDoKey);
		rs.GetValue(_T("from_date"), m_szFromDate);
		rs.GetValue(_T("to_date"), m_szToDate);	
	}
	else
	{
		m_szFromDate= pMF->GetSysDate();
		m_szToDate= pMF->GetSysDate();
	}
	UpdateData(false);

}
void CHMSPhacDoApplyToPatientDlg::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);

	m_hms_phacdo_apply.SetValue(_T("createdby"), pMF->GetCurrentUser() ); 
	m_hms_phacdo_apply.SetValue(_T("createdate"), pMF->GetSysDateTime());
	m_hms_phacdo_apply.SetValue(_T("docno"), pMF->m_nDocumentNo); 

	
	m_hms_phacdo_apply.SetValue(_T("phacdo_apply_id"), m_nPhacDoApplyID); 
	m_hms_phacdo_apply.SetValue(_T("hms_phacdo_id"), m_szPhacDoKey); 
	m_hms_phacdo_apply.SetValue(_T("from_date"), m_szFromDate);
	m_hms_phacdo_apply.SetValue(_T("to_date"), m_szToDate);
	m_hms_phacdo_apply.SetValue(_T("status"), _T("O"));
	m_hms_phacdo_apply.SetValue(_T("updatedby"), pMF->GetCurrentUser()); 
	m_hms_phacdo_apply.SetValue(_T("updateddate"), pMF->GetSysDateTime());
	//m_hms_phacdo_apply.SetValue(_T("ket_qua"), ); 
	//m_hms_phacdo_apply.SetValue(_T("ket_qua_id"), dfText,5 );
	

}
void CHMSPhacDoApplyToPatientDlg::SetDefaultValues(){

	m_szICD10Key.Empty();
	m_szPhacDoKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szNote.Empty();
	m_szHuongXuTri.Empty();
	m_szCheDoAnKey.Empty();
	m_szCheDoChamSoc.Empty();
	m_szTreatDayKey.Empty();
	m_bAddExamSheet=FALSE;
	m_szTime.Empty();
	m_nPhacDoApplyID=0;

}
int CHMSPhacDoApplyToPatientDlg::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1,2, -1);
 			SetDefaultValues();
			m_szFromDate= pMF->GetSysDate();
			m_szToDate= pMF->GetSysDate();
			m_szTime= pMF->GetSysDateTime();	
			m_wndTime.EnableWindow(false);
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 3, 4, -1);
 			break;
 		case VM_VIEW: 
 			EnableControls(FALSE);
 			EnableButtons(FALSE, 0, 1, -1);
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
void CHMSPhacDoApplyToPatientDlg::OnICD10SelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPhacDoApplyToPatientDlg::OnICD10Selendok(){
	 
}
/*void CHMSPhacDoApplyToPatientDlg::OnICD10Setfocus(){
	
}*/
/*void CHMSPhacDoApplyToPatientDlg::OnICD10Killfocus(){
	
}*/
long CHMSPhacDoApplyToPatientDlg::OnICD10LoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	return pMF->LoadICD(&m_wndICD10, m_szICD10Key);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndICD10.IsSearchKey() && !m_szICD10Key.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szICD10Key
};
	m_wndICD10.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndICD10.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSPhacDoApplyToPatientDlg::OnICD10AddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CHMSPhacDoApplyToPatientDlg::OnPhacDoSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPhacDoApplyToPatientDlg::OnPhacDoSelendok(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnTreatDayLoadData();
	// load ngay bat dau va ngay ket thuc theo so ngay tren phac do
	return;
	CRecord rs(&pMF->m_db);
	int nSoNgayDtri=0;
	nSoNgayDtri= str2int(m_wndPhacDo.GetCurrent(3));
	if(nSoNgayDtri>0)
	{
		CString szSQL,tmpStr;
		szSQL.Format(_T("SELECT date('%s') + %d"),m_szFromDate, nSoNgayDtri);
		rs.ExecSQL(szSQL);
		m_szToDate = rs.GetStringValue();
		//tmpStr = CDate::Convert(m_szToDate,yyyymmdd,ddmmyyyy );

	//	m_wndToDate.SetWindowText(tmpStr);

	}

	 
}
/*void CHMSPhacDoApplyToPatientDlg::OnPhacDoSetfocus(){
	
}*/
/*void CHMSPhacDoApplyToPatientDlg::OnPhacDoKillfocus(){
	
}*/
long CHMSPhacDoApplyToPatientDlg::OnPhacDoLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL,szWhere;
	m_wndPhacDo.DeleteAllItems(); 
	int nCount = 0;
	UpdateData(true);
	//if(!m_szICD10Key.IsEmpty())
	//	szWhere.AppendFormat(_T(" AND lower(ten_phacdo) LIKE chr(37)||lower('%s')||chr(37)"), m_szSearch);
	if(!m_szICD10Key.IsEmpty())
		szWhere.Format(_T(" and phacdo_id in (select distinct hms_phacdo_id from hms_phacdo_line   where typeid='ICD' and itemid='%s' ) "),m_szICD10Key );
	szSQL.Format(_T("select * from hms_phacdo where 1=1 %s order by ten_phacdo "),szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPhacDo.AddItems(
			rs.GetValue(_T("phacdo_id")),
			rs.GetValue(_T("ten_phacdo")),
			rs.GetValue(_T("note")),
			rs.GetValue(_T("so_ngay_dtri")),
			NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSPhacDoApplyToPatientDlg::OnPhacDoAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
#include "HMSPhacDoPrescriptionPopup.h"	
void CHMSPhacDoApplyToPatientDlg::OnListDblClick(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	int nSel = m_wndList.GetCurSel();
	if(nSel <0) return;
	CRect rc;
	m_wndList.GetWindowRect(&rc);
	CString szType ;
	szType = m_wndList.GetItemText(nSel,0);
	if(szType==_T("DRU"))
	{
		CHMSPhacDoPrescriptionPopup dlg(this,VM_ADD, rc.left-5, rc.top);
		dlg.m_nClassID= str2long(m_wndList.GetItemText(nSel,1));
		if(dlg.DoModal() == IDOK)
		{
			// neu ok thì add vào list để add sau
			if( str2long(dlg.m_szNameKey) >0)
			{			
					m_wndList.SetItemText(nSel,9, dlg.m_szNameKey);
					m_wndList.SetItemText(nSel,10, dlg.m_wndName.GetCurrent(1));
					CString tmpStr;
					tmpStr.Format(_T("%0.2f"),dlg.m_nQty);
					m_wndList.SetItemText(nSel,11,tmpStr);
					m_wndList.SetItemText(nSel,12, dlg.m_szStorageKey);
					m_wndList.SetItemText(nSel,13, dlg.m_szIndicationKey);
					m_wndList.SetItemText(nSel,14, dlg.m_szUsage);
					m_wndList.SetItemText(nSel,15, dlg.m_szSpeed);
					m_wndList.SetItemText(nSel,16, dlg.m_bInsuranceUnpaid?_T("N"):_T("Y"));
					m_wndList.SetItemText(nSel,17, dlg.m_bNotDailyOrder?_T("Y"):_T("N"));
					m_wndList.SetCheck(nSel);
			}

		}
	}	
} 
void CHMSPhacDoApplyToPatientDlg::OnListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CHMSPhacDoApplyToPatientDlg::OnListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSPhacDoApplyToPatientDlg::OnListLoadData(){

	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	
	int nCount = 0;
	szSQL.Format(_T("select typeid, itemid, soluong, hfl_name as description   , hfl_groupid as groupid, hfg_index, hfg_type_id, hfg_name ") \
				_T("		from hms_phacdo_line   ") \
				_T("		left join hms_fee_list on (hfl_feeid = itemid and typeid='CLS')  ") \
				_T("		left join hms_fee_group on (hfg_id = hfl_groupid) ") \
				_T("		where typeid in ('CLS')  and hms_phacdo_id='%s' and hms_phacdo_day_id='%s'  ") \
				_T("		order by hfg_type_id, groupid ") , m_szPhacDoKey, m_szTreatDayKey);
	nCount = rs.ExecSQL(szSQL);

	if(!rs.IsEOF())
	{
		m_wndList.AddItems(
			rs.GetValue(_T("*")),
			rs.GetValue(_T("")),
			_T("Chỉ định cận lâm sàng"),
			_T(""),
			_T(""),
			_T(""),NULL
			);
	}
	while(!rs.IsEOF()){ 
		//hfg_name
		int nIndex = m_wndList.AddItems(
			rs.GetValue(_T("typeid")),
			rs.GetValue(_T("itemid")),
			rs.GetValue(_T("description")),
			rs.GetValue(_T("soluong")),
			rs.GetValue(_T("groupid")),NULL
			);
		m_wndList.SetCheck(nIndex,true);
		rs.MoveNext();
	}

	szSQL.Format(_T("select typeid, itemid, soluong, mpc_name as description , dousage,unit, usemanual,volumn,content ") \
				_T("		from hms_phacdo_line   ") \
				_T("		left join m_product_class on (typeid='DRU' and mpc_product_class_id = cast(itemid as integer)  )   ") \
				_T("		where typeid in ('DRU')  and hms_phacdo_id='%s'  ") \
				_T("		 ") , m_szPhacDoKey);
	nCount = rs.ExecSQL(szSQL);

	
	if(!rs.IsEOF())
	{
		m_wndList.AddItems(
			rs.GetValue(_T("*")),
			rs.GetValue(_T("")),
			_T("Chỉ định thuốc"),
			_T(""),
			_T(""),
			_T(""),NULL
			);
	}

	while(!rs.IsEOF()){ 
		//hfg_name
		m_wndList.AddItems(
			rs.GetValue(_T("typeid")),
			rs.GetValue(_T("itemid")),
			rs.GetValue(_T("description")),
			_T(""),
			rs.GetValue(_T("unit")),
			rs.GetValue(_T("dousage")),
			rs.GetValue(_T("usemanual")),
			rs.GetValue(_T("volumn")),
			rs.GetValue(_T("content")),
			NULL
			);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;

}
void CHMSPhacDoApplyToPatientDlg::OnApplySelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CRecord rs2(&pMF->m_db);
	CString szSQL; 
	if(!m_bAddExamSheet)
	{
		// neu ko add phieu kham thi kiem tra phieu kham cu xem da khoa chua neu khoa roi thi ko add nua va thong bao ra
		szSQL.Format(_T(" SELECT hsie_locked ") \
					_T("	FROM hms_siexam ") \
					_T("	WHERE hsie_docno = %ld ") \
					_T("	AND hsie_idx     =%ld "),pMF->m_nDocumentNo,  m_nTreatIdx);
		rs2.ExecSQL(szSQL);
		if(rs2.GetValue(_T("hsie_locked"))== _T("Y"))
		{
			ShowMessageBox(_T("Phiếu đang khóa ko thể thêm được "));
			return;
		}
	}
	// neu nhu kick vao nut them to phieu dieu tri thi goi ham them phieu dieu tri truoc roi gan treatidx
	if(m_bAddExamSheet)
	{
		CDbfMap m_hms_siexamTbl;
		m_hms_siexamTbl.SetTableName(_T("hms_siexam"));
		m_hms_siexamTbl.AddField(_T("hsie_createdby"), dfText, 15); 
		m_hms_siexamTbl.AddField(_T("hsie_patientno"), dfLong); 
		m_hms_siexamTbl.AddField(_T("hsie_docno"), dfLong); 
		m_hms_siexamTbl.AddField(_T("hsie_deptid"), dfText, 7); 
		m_hms_siexamTbl.AddField(_T("hsie_refidx"), dfInteger);	
		m_hms_siexamTbl.AddField(_T("hsie_roomid"), dfInteger); 
		m_hms_siexamTbl.AddField(_T("hsie_bedid"), dfInteger); 
		m_hms_siexamTbl.AddField(_T("hsie_treatidx"), dfLong); 
		m_hms_siexamTbl.AddField(_T("hsie_date"), dfDateTime); 
		m_hms_siexamTbl.AddField(_T("hsie_doctor"), dfText, 15); 
		m_hms_siexamTbl.AddField(_T("hsie_nurse"), dfText, 15); 
		m_hms_siexamTbl.AddField(_T("hsie_desc"), dfText, 1024); 
		m_hms_siexamTbl.AddField(_T("hsie_para_res"), dfText, 1024);
		m_hms_siexamTbl.AddField(_T("hsie_dael"), dfText, 1024); 
		m_hms_siexamTbl.AddField(_T("hsie_diet"), dfText, 128); 
		m_hms_siexamTbl.AddField(_T("hsie_nurseassistance"), dfText, 254); 
		m_hms_siexamTbl.AddField(_T("hsie_pulse"), dfInteger); 
		m_hms_siexamTbl.AddField(_T("hsie_temperature"), dfDouble); 
		m_hms_siexamTbl.AddField(_T("hsie_bloodpressure"), dfInteger); 
		m_hms_siexamTbl.AddField(_T("hsie_bloodpressurex"), dfInteger); 
		m_hms_siexamTbl.AddField(_T("hsie_breathinterval"),dfInteger);
		m_hms_siexamTbl.AddField(_T("hsie_deannote"),dfText, 1);
		m_hms_siexamTbl.AddField(_T("hsie_type"),dfText, 3);
		m_hms_siexamTbl.AddField(_T("hsie_diagnosis_identify"),dfText, 254);
		m_hms_siexamTbl.AddField(_T("hsie_next_plan"),dfText, 254);

		
		m_hms_siexamTbl.SetValue(_T("hsie_createdby"), pMF->GetCurrentUser());
		m_hms_siexamTbl.SetValue(_T("hsie_createddate"), pMF->GetSysDateTime());
		m_hms_siexamTbl.SetValue(_T("hsie_patientno"), pMF->m_nPatientNo);
		m_hms_siexamTbl.SetValue(_T("hsie_docno"), pMF->m_nDocumentNo);
		m_hms_siexamTbl.SetValue(_T("hsie_doctor"), pMF->GetCurrentUser());
		m_hms_siexamTbl.SetValue(_T("hsie_deptid"), pMF->m_szDept);
		m_hms_siexamTbl.SetValue(_T("hsie_roomid"), pMF->GetCurrentRoomID());
		m_hms_siexamTbl.SetValue(_T("hsie_bedid"), pMF->m_nBedID);
		m_hms_siexamTbl.SetValue(_T("hsie_refidx"), pMF->m_nRefIndex);
		
		szSQL.Format(_T(" NEXTVAL('HMS_SIEXAM_HSIE_IDX_ASQ')"));		
		m_nTreatIdx = str2long(pMF->ExecDML(szSQL));		
		m_hms_siexamTbl.SetValue(_T("hsie_treatidx"), m_nTreatIdx);

		m_szOrderDate= m_szTime;
		m_hms_siexamTbl.SetValue(_T("hsie_date"), m_szTime);
	//	m_hms_siexamTbl.SetValue(_T("hsie_pulse"), m_nPulse);
//		m_hms_siexamTbl.SetValue(_T("hsie_desc"), m_szDiseaseTracking);
//		m_hms_siexamTbl.SetValue(_T("hsie_para_res"), m_szParaclinicRes);
		//m_hms_siexamTbl.SetValue(_T("hsie_temperature"), m_nTemperature);

		//m_hms_siexamTbl.SetValue(_T("hsie_bloodpressure"), m_nBloodPressure);
		//m_hms_siexamTbl.SetValue(_T("hsie_bloodpressurex"), m_nBloodPressureHight);
		//m_hms_siexamTbl.SetValue(_T("hsie_breathinterval"), m_nBreathingRate);
	//	m_hms_siexamTbl.SetValue(_T("hsie_weight"), 0);
	//	m_hms_siexamTbl.SetValue(_T("hsie_height"), 0);
		m_hms_siexamTbl.SetValue(_T("hsie_diet"), m_szCheDoAnKey);
		m_hms_siexamTbl.SetValue(_T("hsie_nurseassistance"), m_szCheDoChamSoc);

	
	//	m_hms_siexamTbl.SetValue(_T("hsie_deannote"), tmpStr);
		m_hms_siexamTbl.SetValue(_T("hsie_type"), _T("DT"));
		m_hms_siexamTbl.SetValue(_T("hsie_diagnosis_identify"), m_szNote);
		m_hms_siexamTbl.SetValue(_T("hsie_next_plan"), m_szHuongXuTri);

		
		szSQL.Format(_T("HMS_SIEXAM_UPDATE(%s) "), m_hms_siexamTbl.FormatSQL());
	 
 		int ret = str2int(pMF->ExecDML(szSQL));


	}
	// kiem tra cac item nao dc tich o dau thi add vao to dieu tri
	// add CLS vao thoi
	int nCountCLS=0;
	CDbfMap dbf;
	dbf.AddField(_T("createdby"), dfText, 15);
	dbf.AddField(_T("deptid"), dfText, 7);
	dbf.AddField(_T("refidx"), dfInteger);
	dbf.AddField(_T("roomid"), dfInteger);
	dbf.AddField(_T("bedid"), dfInteger);
	dbf.AddField(_T("patientno"), dfLong);
	dbf.AddField(_T("docno"), dfLong);
	dbf.AddField(_T("orderdate"), dfDateTime);
	dbf.AddField(_T("doctor"), dfText, 15);
	dbf.AddField(_T("groupid"), dfText, 15);
	dbf.AddField(_T("status"), dfText, 1);
	dbf.AddField(_T("moduleid"), dfText, 100);
	dbf.AddField(_T("treatidx"), dfLong);
	CString szGroup,tmpStr,szID,szOldGroup,szOrders;

	dbf.SetValue(_T("createdby"), pMF->GetCurrentUser());
	dbf.SetValue(_T("deptid"), pMF->m_szDept);
	dbf.SetValue(_T("refidx"), pMF->m_nRefIndex);
	dbf.SetValue(_T("roomid"), pMF->m_nRoomID);
	dbf.SetValue(_T("bedid"), pMF->m_nBedID);
	dbf.SetValue(_T("patientno"), pMF->m_nPatientNo);
	dbf.SetValue(_T("docno"), pMF->m_nDocumentNo);
	dbf.SetValue(_T("orderdate"), m_szOrderDate);
	dbf.SetValue(_T("doctor"), pMF->GetCurrentUser());
	dbf.SetValue(_T("groupid"), szGroup);
	dbf.SetValue(_T("status"), _T("O"));
	dbf.SetValue(_T("moduleid"), pMF->GetModuleID());
	dbf.SetValue(_T("treatidx"), m_nTreatIdx);
	long nOrderID=0;
	for (int i =0; i < m_wndList.GetItemCount(); i++)
	{
		CString szType;
		szType= m_wndList.GetItemText(i,0);
		if(!m_wndList.GetCheck(i))
			continue;
		if(szType != _T("CLS"))
			continue;
		szGroup = m_wndList.GetItemText(i, 4);
		if(!szGroup.IsEmpty() && szGroup != szOldGroup && szGroup.Left(1) == _T("B") )
		{
			szOldGroup = szGroup;
			
			dbf.SetValue(_T("groupid"), szGroup);
			
			szSQL.Format(_T("hms_paraclinic_add(%s) "), dbf.FormatSQL());
			if(!szSQL.IsEmpty())
			{
				CString szData = pMF->ExecDML(szSQL);
				nOrderID = str2long(szData);
				//order.groupid=szGroup;
				//order.orderid=nOrderID;
			//	orderInfo.Add(order);
			}			

		//	continue;
		}
		
		szOrders.Format(_T("-1"));
		if(nOrderID > 0)
		{			

			float nQty;
			tmpStr = m_wndList.GetItemText(i, 0);
			if(tmpStr != _T("*"))
			{
				CRecord rss(&pMF->m_db);
				CString szSubID, szGrp;
				CString szSubItem = m_wndList.GetItemText(i, 6);
				//nQty = str2float(m_wndList.GetItemText(i, 11));
				nQty=1;
				szID = m_wndList.GetItemText(i, 1);
				szGrp = szGroup;
				szSQL.Format(_T("hms_paraclinic_addline(%ld, %ld, '%s', '%s', '%s', %0.2f)"), pMF->m_nDocumentNo, nOrderID, szID, szGrp, pMF->GetModuleID(), nQty);
				//_msg(_T("%s"),szSQL);
				pMF->ExecDML(szSQL);
			}
		}
	}	


	

	//add thuốc
	int nCount =0;
	for(int i=0; i < m_wndList.GetItemCount() ; i++)
	{
		CString szType;
		szType= m_wndList.GetItemText(i,0);
		if(!m_wndList.GetCheck(i))
			continue;
		if(szType != _T("DRU"))
			continue;
		if(str2long( m_wndList.GetItemText(i,9)) <=0)
			continue;
		if(str2long( m_wndList.GetItemText(i,12)) <=0)
			continue;
		
		m_hms_ipharmaorderTbl.SetValue(_T("hpo_org_id"), pMF->GetModuleID());
		m_hms_ipharmaorderTbl.SetValue(_T("hpo_orderdate"), m_szOrderDate);
		m_hms_ipharmaorderTbl.SetValue(_T("hpo_storage_id"),  m_wndList.GetItemText(i,12));
		m_hms_ipharmaorderTbl.SetValue(_T("hpo_user_id"), pMF->GetCurrentUser());
		m_hms_ipharmaorderTbl.SetValue(_T("hpo_patientno"), pMF->m_nPatientNo);
		m_hms_ipharmaorderTbl.SetValue(_T("hpo_docno"), pMF->m_nDocumentNo);
		m_hms_ipharmaorderTbl.SetValue(_T("hpo_deptid"), pMF->m_szDept);
		m_hms_ipharmaorderTbl.SetValue(_T("hpo_roomid"), pMF->m_nRoomID);
		m_hms_ipharmaorderTbl.SetValue(_T("hpo_bedid"), pMF->m_nBedID);
		m_hms_ipharmaorderTbl.SetValue(_T("hpo_refidx"), pMF->m_nRefIndex);
		m_hms_ipharmaorderTbl.SetValue(_T("hpo_treatidx"), m_nTreatIdx);
		m_hms_ipharmaorderTbl.SetValue(_T("hpo_doctor"), pMF->GetCurrentUser());
		m_hms_ipharmaorderTbl.SetValue(_T("hpo_orderstatus"), _T("O"));
		m_hms_ipharmaorderTbl.SetValue(_T("hpo_ordertype"), _T("P"));
		m_hms_ipharmaorderTbl.SetValue(_T("hpo_objecttype"), pMF->GetObjectType());
		m_hms_ipharmaorderTbl.SetValue(_T("hpo_objectid"), pMF->GetObjectID());
		m_hms_ipharmaorderTbl.SetValue(_T("hpol_product_id"),str2long( m_wndList.GetItemText(i,9)));
		
		
		m_hms_ipharmaorderTbl.SetValue(_T("hpol_qtyorder"), str2float( m_wndList.GetItemText(i,11)));
		m_hms_ipharmaorderTbl.SetValue(_T("hpol_speed"), m_wndList.GetItemText(i,15));
		m_hms_ipharmaorderTbl.SetValue(_T("hpol_usage"), m_wndList.GetItemText(i,14));
		m_hms_ipharmaorderTbl.SetValue(_T("hpol_hoursqty"),0 ); 
		m_hms_ipharmaorderTbl.SetValue(_T("hpol_pointoxy"), _T(""));
		m_hms_ipharmaorderTbl.SetValue(_T("hpol_indication"), str2int(m_wndList.GetItemText(i,13)));
		m_hms_ipharmaorderTbl.SetValue(_T("hpol_inspaid"), m_wndList.GetItemText(i,16));
		m_hms_ipharmaorderTbl.SetValue(_T("hpo_outpatient_order"),  m_wndList.GetItemText(i,17));
		
		CString szSQL;
		szSQL.Format(_T("HMS_IPHARMAORDER_CREATELINE_V5(%s) "), m_hms_ipharmaorderTbl.FormatSQL());
		_tprintf(_T("\r\n %s"),szSQL);

		long m_nOrderID = str2long(pMF->ExecDML(szSQL));
		if (m_nOrderID > 0)
		{
			nCount++;
		}
	}
	// Khi xong hết rồi thì add  vào id và day_id
	szSQL.Format(_T("Update hms_siexam set hsie_phacdo_id=%d , hsie_phacdo_day_id=%d  where hsie_idx= %ld "),str2int(m_szPhacDoKey),m_nTreatDay_ID, m_nTreatIdx);
	pMF->ExecSQL(szSQL);
	OnOK();

	
} 

/*void CHMSPhacDoApplyToPatientDlg::OnFromDateChange(){
	
} */
/*void CHMSPhacDoApplyToPatientDlg::OnFromDateSetfocus(){
	
} */
/*void CHMSPhacDoApplyToPatientDlg::OnFromDateKillfocus(){
	
} */
int CHMSPhacDoApplyToPatientDlg::OnFromDateCheckValue(){
	return 0;
} 
/*void CHMSPhacDoApplyToPatientDlg::OnToDateChange(){
	
} */
/*void CHMSPhacDoApplyToPatientDlg::OnToDateSetfocus(){
	
} */
/*void CHMSPhacDoApplyToPatientDlg::OnToDateKillfocus(){
	
} */
int CHMSPhacDoApplyToPatientDlg::OnToDateCheckValue(){
	return 0;
} 
void CHMSPhacDoApplyToPatientDlg::OnUsePhacDoSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	if(!IsValidateData())
 		return;
	CString szSQL,szWhere;

	// kiem tra xem phac do nay neu da dc ap dung rồi thì thay vi goi insert thi goi update
	
	szSQL.Format(_T("select * from hms_phacdo_apply where docno =%ld and hms_phacdo_id= '%s' limit 1 "), pMF->m_nDocumentNo, m_szPhacDoKey) ;
	CRecord rs(&pMF->m_db);
	rs.ExecSQL(szSQL);
	
	if(rs.GetRecordCount() >0 )
	{
		rs.GetValue(_T("phacdo_apply_id"),m_nPhacDoApplyID);
		m_hms_phacdo_apply.SetValue(_T("phacdo_apply_id"),m_nPhacDoApplyID);

		szWhere.Format(_T(" where docno =%ld and phacdo_apply_id=%ld "), pMF->m_nDocumentNo, m_nPhacDoApplyID);
		szSQL= m_hms_phacdo_apply.GetUpdateSQL(_T("docno,phacdo_apply_id,createdby,createdate")) ;
		szSQL += szWhere;
	}
	else
	{
		szSQL.Format(_T("select nextval('hms_phacdo_apply_phacdo_apply_id_seq') as apply_id "));
		CRecord rs(&pMF->m_db);
		rs.ExecSQL(szSQL);
		rs.GetValue(_T("apply_id"),m_nPhacDoApplyID);
		m_hms_phacdo_apply.SetValue(_T("phacdo_apply_id"),m_nPhacDoApplyID);
	
		szSQL= m_hms_phacdo_apply.GetInsertSQL();
		
	}
	int nRet = pMF->ExecSQL(szSQL);
		if(nRet >0)
			OnApplyListLoadData();
	
	
} 
/*void CHMSPhacDoApplyToPatientDlg::OnNoteChange(){
	
} */
/*void CHMSPhacDoApplyToPatientDlg::OnNoteSetfocus(){
	
} */
/*void CHMSPhacDoApplyToPatientDlg::OnNoteKillfocus(){
	
} */
int CHMSPhacDoApplyToPatientDlg::OnNoteCheckValue(){
	return 0;
} 
/*void CHMSPhacDoApplyToPatientDlg::OnHuongXuTriChange(){
	
} */
/*void CHMSPhacDoApplyToPatientDlg::OnHuongXuTriSetfocus(){
	
} */
/*void CHMSPhacDoApplyToPatientDlg::OnHuongXuTriKillfocus(){
	
} */
int CHMSPhacDoApplyToPatientDlg::OnHuongXuTriCheckValue(){
	return 0;
} 
void CHMSPhacDoApplyToPatientDlg::OnCheDoAnSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPhacDoApplyToPatientDlg::OnCheDoAnSelendok(){
	 
}
/*void CHMSPhacDoApplyToPatientDlg::OnCheDoAnSetfocus(){
	
}*/
/*void CHMSPhacDoApplyToPatientDlg::OnCheDoAnKillfocus(){
	
}*/
long CHMSPhacDoApplyToPatientDlg::OnCheDoAnLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	return pMF->LoadSelectionList(&m_wndCheDoAn, _T("HMS_DIET_MODE"), m_szCheDoAnKey);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndCheDoAn.IsSearchKey() && !m_szCheDoAnKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szCheDoAnKey
};
	m_wndCheDoAn.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndCheDoAn.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSPhacDoApplyToPatientDlg::OnCheDoAnAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSPhacDoApplyToPatientDlg::OnCheDoChamSocChange(){
	
} */
/*void CHMSPhacDoApplyToPatientDlg::OnCheDoChamSocSetfocus(){
	
} */
/*void CHMSPhacDoApplyToPatientDlg::OnCheDoChamSocKillfocus(){
	
} */
int CHMSPhacDoApplyToPatientDlg::OnCheDoChamSocCheckValue(){
	return 0;
} 
void CHMSPhacDoApplyToPatientDlg::OnTreatDaySelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPhacDoApplyToPatientDlg::OnTreatDaySelendok(){
	//load danh sách ra
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	// lay thong tin cua phieu ra nua
	m_nTreatDay_ID= str2long(m_wndTreatDay.GetCurrent(0));
	CString szSQL;
	szSQL.Format(_T("select * from hms_phacdo_treatment_day where treatment_day_id=%ld "), m_nTreatDay_ID);
	CRecord rs(&pMF->m_db);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("note"),m_szNote);
		rs.GetValue(_T("huong_xu_tri"),m_szHuongXuTri);
		rs.GetValue(_T("che_do_an"),m_szCheDoAnKey);
		rs.GetValue(_T("che_do_chamsoc"),m_szCheDoChamSoc);
		OnListLoadData();
		UpdateData(false);
	}
}
/*void CHMSPhacDoApplyToPatientDlg::OnTreatDaySetfocus(){
	
}*/
/*void CHMSPhacDoApplyToPatientDlg::OnTreatDayKillfocus(){
	
}*/
long CHMSPhacDoApplyToPatientDlg::OnTreatDayLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
//	if(m_wndTreatDay.IsSearchKey() && !m_szTreatDayKey.IsEmpty())
	//	 szWhere.Format(_T(" and treatment_day_id= %ld "), str2long(m_szTreatDayKey));
	m_wndTreatDay.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT * from hms_phacdo_treatment_day where 1=1 and phacdo_id= %s order by number_day "), m_szPhacDoKey);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndTreatDay.AddItems(
			rs.GetValue(_T("treatment_day_id")), 
			rs.GetValue(_T("number_day")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CHMSPhacDoApplyToPatientDlg::OnTreatDayAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
	void CHMSPhacDoApplyToPatientDlg::OnAddExamSheetSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_bAddExamSheet= !m_bAddExamSheet;
	m_wndTime.EnableWindow(m_bAddExamSheet);
}
/*void CHMSPhacDoApplyToPatientDlg::OnTimeChange(){
	
} */
/*void CHMSPhacDoApplyToPatientDlg::OnTimeSetfocus(){
	
} */
/*void CHMSPhacDoApplyToPatientDlg::OnTimeKillfocus(){
	
} */
int CHMSPhacDoApplyToPatientDlg::OnTimeCheckValue(){
	return 0;
} 
void CHMSPhacDoApplyToPatientDlg::OnApplyListDblClick(){
	
} 
void CHMSPhacDoApplyToPatientDlg::OnApplyListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	if(nNewItem<0) return;
	m_nPhacDoApplyID= str2long(m_wndApplyList.GetItemText(nNewItem , 0));
	GetDataToScreen();

} 
int CHMSPhacDoApplyToPatientDlg::OnApplyListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSPhacDoApplyToPatientDlg::OnApplyListLoadData(){

	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndApplyList.BeginLoad(); 
	int nCount = 0;
	szSQL.Format(_T("select * from hms_phacdo_apply ") \
				_T(" left join hms_phacdo on (phacdo_id= hms_phacdo_id) ") \
				_T(" where docno =%ld "),pMF->m_nDocumentNo);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndApplyList.AddItems(
			rs.GetValue(_T("phacdo_apply_id")),
			rs.GetValue(_T("hms_phacdo_id")),
			rs.GetValue(_T("ten_phacdo")),
			rs.GetValue(_T("createdby")),
			rs.GetValue(_T("from_date")), 
			rs.GetValue(_T("to_date")), NULL);
		rs.MoveNext();
	}
	m_wndApplyList.EndLoad(); 
	return nCount;
}
#include "HMSPhacDoDanhGiaDlg.h"
void CHMSPhacDoApplyToPatientDlg::OnEvaluationSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	// Đánh giá kết quả
	if(m_nPhacDoApplyID <=0)
		return;
	CHMSPhacDoDanhGiaDlg dlg(this);
	dlg.m_nDocumentNo=pMF->m_nDocumentNo;
	dlg.m_nPhacDoApplyID = m_nPhacDoApplyID;
	dlg.DoModal();	
} 

int CHMSPhacDoApplyToPatientDlg::OnAddHMSPhacDoApplyToPatientDlg(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSPhacDoApplyToPatientDlg::OnEditHMSPhacDoApplyToPatientDlg(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSPhacDoApplyToPatientDlg::OnDeleteHMSPhacDoApplyToPatientDlg(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
 	szSQL.Format(_T("DELETE FROM  WHERE  AND") );
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
 		SetMode(VM_NONE);
 		OnCancelHMSPhacDoApplyToPatientDlg();
 	}
	return 0;
}
int CHMSPhacDoApplyToPatientDlg::OnSaveHMSPhacDoApplyToPatientDlg(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
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
 		//OnHMSPhacDoApplyToPatientDlgListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSPhacDoApplyToPatientDlg::OnCancelHMSPhacDoApplyToPatientDlg(){
 	if(GetMode() == VM_EDIT)
 	{
 		SetMode(VM_VIEW);
 	} 
 	else 
 	{
 		SetMode(VM_NONE);
 	} 
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
 	return 0;
} 
int CHMSPhacDoApplyToPatientDlg::OnHMSPhacDoApplyToPatientDlgListLoadData(){
	return 0;
}