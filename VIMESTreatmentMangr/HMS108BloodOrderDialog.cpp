#include "HMS108BloodOrderDialog.h"
#include "HMSMainFrame.h"
#include "HMS108BloodSheetDialog.h"

static long _BloodSheetListLoadDataFnc(CWnd *pWnd){
	return ((CHMS108BloodOrderDialog*)pWnd)->BloodSheetListLoadData();
} 
static void _BloodSheetListDblClickFnc(CWnd *pWnd){
	((CHMS108BloodOrderDialog*)pWnd)->BloodSheetListDblClick();
} 
static void _BloodSheetListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMS108BloodOrderDialog*)pWnd)->BloodSheetListSelectChange(nOldItem, nNewItem);
}
static int _BloodSheetListAddItemFnc(CWnd *pWnd){
	 return ((CHMS108BloodOrderDialog*)pWnd)->BloodSheetListAddItem();
}
static int _BloodSheetListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMS108BloodOrderDialog*)pWnd)->BloodSheetListDeleteItem();
}

static int _BloodSheetListConfirmItemFnc(CWnd *pWnd){
	 return ((CHMS108BloodOrderDialog*)pWnd)->BloodSheetListConfirmItem();
} 

static int _BloodSheetListDisConfirmItemFnc(CWnd *pWnd){
	 return ((CHMS108BloodOrderDialog*)pWnd)->BloodSheetListDisConfirmItem();
}

static int _BloodSheetListPrintItemFnc(CWnd *pWnd)
{
	 return ((CHMS108BloodOrderDialog*)pWnd)->BloodSheetListPrintItem();
}

static long _OnItemListLoadDataFnc(CWnd *pWnd){
	return ((CHMS108BloodOrderDialog*)pWnd)->OnItemListLoadData();
} 
static void _OnItemListDblClickFnc(CWnd *pWnd){
	((CHMS108BloodOrderDialog*)pWnd)->OnItemListDblClick();
} 
static void _OnItemListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMS108BloodOrderDialog*)pWnd)->OnItemListSelectChange(nOldItem, nNewItem);
} 
static int _OnItemListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMS108BloodOrderDialog*)pWnd)->OnItemListDeleteItem();
}

static int _OnItemListEditItemFnc(CWnd *pWnd){
	 return ((CHMS108BloodOrderDialog*)pWnd)->OnItemListEditItem();
} 


static void _OnGroupSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMS108BloodOrderDialog* )pWnd)->OnGroupSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnGroupSelendokFnc(CWnd *pWnd){
	((CHMS108BloodOrderDialog *)pWnd)->OnGroupSelendok();
}
/*static void _OnGroupSetfocusFnc(CWnd *pWnd){
	((CHMS108BloodOrderDialog *)pWnd)->OnGroupKillfocus();
}*/
/*static void _OnGroupKillfocusFnc(CWnd *pWnd){
	((CHMS108BloodOrderDialog *)pWnd)->OnGroupKillfocus();
}*/
static long _OnGroupLoadDataFnc(CWnd *pWnd){
	return ((CHMS108BloodOrderDialog *)pWnd)->OnGroupLoadData();
}
/*static void _OnGroupAddNewFnc(CWnd *pWnd){
	((CHMS108BloodOrderDialog *)pWnd)->OnGroupAddNew();
}*/
static void _OnNameSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMS108BloodOrderDialog* )pWnd)->OnNameSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnNameSelendokFnc(CWnd *pWnd){
	((CHMS108BloodOrderDialog *)pWnd)->OnNameSelendok();
}
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CHMS108BloodOrderDialog *)pWnd)->OnNameKillfocus();
}*/
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CHMS108BloodOrderDialog *)pWnd)->OnNameKillfocus();
}*/
static long _OnNameLoadDataFnc(CWnd *pWnd){
	return ((CHMS108BloodOrderDialog *)pWnd)->OnNameLoadData();
}
/*static void _OnNameAddNewFnc(CWnd *pWnd){
	((CHMS108BloodOrderDialog *)pWnd)->OnNameAddNew();
}*/
/*static void _OnQtyChangeFnc(CWnd *pWnd){
	((CHMS108BloodOrderDialog *)pWnd)->OnQtyChange();
} */
/*static void _OnQtySetfocusFnc(CWnd *pWnd){
	((CHMS108BloodOrderDialog *)pWnd)->OnQtySetfocus();} */ 
/*static void _OnQtyKillfocusFnc(CWnd *pWnd){
	((CHMS108BloodOrderDialog *)pWnd)->OnQtyKillfocus();
} */
static int _OnQtyCheckValueFnc(CWnd *pWnd){
	return ((CHMS108BloodOrderDialog *)pWnd)->OnQtyCheckValue();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMS108BloodOrderDialog *pVw = (CHMS108BloodOrderDialog *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CHMS108BloodOrderDialog *pVw = (CHMS108BloodOrderDialog *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMS108BloodOrderDialog *pVw = (CHMS108BloodOrderDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMS108BloodOrderDialog *pVw = (CHMS108BloodOrderDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMS108BloodOrderDialog *pVw = (CHMS108BloodOrderDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAdd108BloodOrderDialogFnc(CWnd *pWnd){
	 return ((CHMS108BloodOrderDialog*)pWnd)->OnAdd108BloodOrderDialog();
} 
static int _OnEdit108BloodOrderDialogFnc(CWnd *pWnd){
	 return ((CHMS108BloodOrderDialog*)pWnd)->OnEdit108BloodOrderDialog();
} 
static int _OnDelete108BloodOrderDialogFnc(CWnd *pWnd){
	 return ((CHMS108BloodOrderDialog*)pWnd)->OnDelete108BloodOrderDialog();
} 
static int _OnSave108BloodOrderDialogFnc(CWnd *pWnd){
	 return ((CHMS108BloodOrderDialog*)pWnd)->OnSave108BloodOrderDialog();
} 
static int _OnCancel108BloodOrderDialogFnc(CWnd *pWnd){
	 return ((CHMS108BloodOrderDialog*)pWnd)->OnCancel108BloodOrderDialog();
}
static int _OnDocnoCheckValueFnc(CWnd *pWnd){
	return ((CHMS108BloodOrderDialog *)pWnd)->OnDocnoCheckValue();
}
static long _OnPatientNameLoadDataFnc(CWnd *pWnd){
	return ((CHMS108BloodOrderDialog *)pWnd)->OnPatientNameLoadData();
}
static int _OnYOBCheckValueFnc(CWnd *pWnd){
	return ((CHMS108BloodOrderDialog *)pWnd)->OnYOBCheckValue();
} 

static int _OnSexCheckValueFnc(CWnd *pWnd){
	return ((CHMS108BloodOrderDialog *)pWnd)->OnSexCheckValue();
} 
static int _OnObjectNameCheckValueFnc(CWnd *pWnd){
	return ((CHMS108BloodOrderDialog *)pWnd)->OnObjectNameCheckValue();
} 
static int _OnDiagnosticCheckValueFnc(CWnd *pWnd){
	return ((CHMS108BloodOrderDialog *)pWnd)->OnDiagnosticCheckValue();
}
//static long _OnNhomMauLoadDataFnc(CWnd *pWnd){
//	return ((CHMS108BloodOrderDialog *)pWnd)->OnNhomMauLoadData();
//}
static long _OnChePhamLoadDataFnc(CWnd *pWnd){
	return ((CHMS108BloodOrderDialog *)pWnd)->OnChePhamLoadData();
}
static int _OnSoluongCheckValueFnc(CWnd *pWnd){
	return ((CHMS108BloodOrderDialog *)pWnd)->OnSoluongCheckValue();
}
static int _OnNgaySuDungCheckValueFnc(CWnd *pWnd){
	return ((CHMS108BloodOrderDialog *)pWnd)->OnNgaySuDungCheckValue();
} 
static int _OnGhiChuCheckValueFnc(CWnd *pWnd){
	return ((CHMS108BloodOrderDialog *)pWnd)->OnGhiChuCheckValue();
}

static int _OnNhomMauCheckValueFnc(CWnd *pWnd){
	return ((CHMS108BloodOrderDialog *)pWnd)->OnNhomMauCheckValue();
}

static void _OnPatientNameSelendokFnc(CWnd *pWnd)
{
	((CHMS108BloodOrderDialog *)pWnd)->OnPatientNameSelendok();
}

static int _OnFromDateCheckValueFnc(CWnd *pWnd)
{
	return ((CHMS108BloodOrderDialog *)pWnd)->OnFromDateCheckValue();
}

static int _OnToDateCheckValueFnc(CWnd *pWnd)
{
	return ((CHMS108BloodOrderDialog *)pWnd)->OnToDateCheckValue();
} 

static void _OnSearchSelectFnc(CWnd *pWnd){
	CHMS108BloodOrderDialog *pVw = (CHMS108BloodOrderDialog *)pWnd;
	pVw->OnSearchSelect();
}

static void _OnPrintSelectFnc(CWnd *pWnd)
{
	CHMS108BloodOrderDialog *pVw = (CHMS108BloodOrderDialog *)pWnd;
	pVw->OnPrintSelect();
} 


CHMS108BloodOrderDialog::CHMS108BloodOrderDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 645;
	m_nDlgHeight = 485;
	SetDefaultValues();	
	//m_nOrderID = 0;
	m_szPatientNameKey.Empty();
	
}
CHMS108BloodOrderDialog::~CHMS108BloodOrderDialog(){
}
void CHMS108BloodOrderDialog::OnCreateComponents()
{
	m_wndItemList.Create(this,300, 30, 1019, 467); 
	m_wndDocnoLabel.Create(this, _T("Số HS"), 301, 471, 381, 496);
	m_wndDocno.Create(this,386, 471, 466, 496); 
	m_wndPatNameLabel.Create(this, _T("Họ tên"), 471, 471, 551, 496);
	m_wndBloodSheetList.Create(this, _T("Phiếu dự trù máu"), 11, 7, 1023, 684);
	m_wndPatientName.Create(this,556, 471, 840, 496); 
	m_wndYobLabel.Create(this, _T("Năm sinh"), 845, 471, 925, 496);
	m_wndYOB.Create(this,930, 471, 1018, 496); 
	m_wndSexLabel.Create(this, _T("Giới"), 301, 500, 381, 525);
	m_wndSex.Create(this,386, 500, 466, 525); 
	m_wndObjectNameLabel.Create(this, _T("Đối tượng"), 471, 500, 551, 525);
	m_wndObjectName.Create(this,556, 500, 1018, 525); 
	m_wndDiagnosticLabel.Create(this, _T("Chẩn đoán"), 301, 530, 381, 555);
	m_wndDiagnostic.Create(this,386, 530, 1018, 589, 1, 0, 1); 
	m_wndNhommauLabel.Create(this, _T("Nhóm máu"), 301, 594, 381, 619);
	m_wndNhomMau.Create(this,386, 594, 551, 619); 
	m_wndChephamLabel.Create(this, _T("CP máu"), 556, 594, 636, 619);
	m_wndChePham.Create(this,641, 594, 840, 619); 
	m_wndSoluongLabel.Create(this, _T("Số lượng"), 845, 594, 925, 619);
	m_wndSoluong.Create(this,930, 594, 1018, 619); 
	m_wndNgaydungLabel.Create(this, _T("Ngày SD"), 301, 623, 381, 648);
	m_wndNgaySuDung.Create(this,386, 623, 551, 648); 
	m_wndGhiChuLabel.Create(this, _T("Ghi chú"), 556, 623, 636, 648);
	m_wndGhiChu.Create(this,641, 623, 1018, 648); 
	m_wndBloodOrderSheetList.Create(this,12, 30, 296, 649);

	m_wndAdd.Create(this, _T("&Add"), 502, 655, 582, 680);
	m_wndDelete.Create(this, _T("&Delete"), 587, 655, 667, 680);
	m_wndSave.Create(this, _T("&Save"), 672, 655, 752, 680);
	m_wndCancel.Create(this, _T("&Cancel"), 757, 655, 837, 680);
	m_wndPrint.Create(this, _T("&Print"), 842, 655, 922, 680);
	m_wndClose.Create(this, _T("&Close"), 938, 655, 1018, 680);	

	m_wndFromDateLabel.Create(this, _T("From Date"), 17, 655, 97, 680);
	m_wndFromDate.Create(this,102, 655, 182, 680); 
	m_wndToDateLabel.Create(this, _T("To Date"), 181, 655, 261, 680);
	m_wndToDate.Create(this,266, 655, 346, 680); 
	m_wndSearch.Create(this, _T("@"), 351, 655, 387, 680);

	m_wndGroupLabel.Create(this, _T(""), 0, 0, 0, 0);
	m_wndGroupLabel.ShowWindow(SW_HIDE);
	m_wndGroupLabel.EnableWindow(FALSE);
	m_wndGroup.Create(this, 0, 0, 0, 0);
	m_wndGroup.ShowWindow(SW_HIDE);
	m_wndGroup.EnableWindow(FALSE);
	m_wndNameLabel.Create(this, _T(""), 0, 0, 0, 0);
	m_wndNameLabel.ShowWindow(SW_HIDE);
	m_wndNameLabel.EnableWindow(FALSE);
	m_wndName.Create(this, 0, 0, 0, 0);
	m_wndName.ShowWindow(SW_HIDE);
	m_wndName.EnableWindow(FALSE);
	m_wndQtyLabel.Create(this, _T(""), 0, 0, 0, 0);
	m_wndQtyLabel.ShowWindow(SW_HIDE);
	m_wndQtyLabel.EnableWindow(FALSE);
	m_wndQty.Create(this, 0, 0, 0, 0);
	m_wndQty.ShowWindow(SW_HIDE);
	m_wndQty.EnableWindow(FALSE);
	
}
void CHMS108BloodOrderDialog::OnInitializeComponents()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

	//m_wndGroup.SetCheckValue(true);
	m_wndGroup.LimitText(35);
	//m_wndName.SetCheckValue(true);
	m_wndName.LimitText(35);
	m_wndQty.SetLimitText(3);
	//m_wndQty.SetCheckValue(true);

	m_wndDocno.SetLimitText(10);
	m_wndDocno.SetCheckValue(true);
	m_wndPatientName.SetCheckValue(true);
	m_wndPatientName.LimitText(35);
	m_wndYOB.SetLimitText(35);
	m_wndYOB.SetCheckValue(true);
	m_wndSex.SetLimitText(35);
	m_wndSex.SetCheckValue(true);
	m_wndObjectName.SetLimitText(35);
	m_wndObjectName.SetCheckValue(true);
	m_wndDiagnostic.SetLimitText(35);
	m_wndDiagnostic.SetCheckValue(true);
	m_wndNhomMau.SetCheckValue(true);
	m_wndNhomMau.LimitText(35);
	m_wndChePham.SetCheckValue(true);
	m_wndChePham.LimitText(35);
	m_wndSoluong.SetLimitText(16);
	m_wndSoluong.SetCheckValue(true);
	m_wndSoluong.SetNumberDecimal(1);
	//m_wndNgaySuDung.SetMax(CDate(pMF->GetSysDate()));
	//m_wndNgaySuDung.SetCheckValue(true);
	m_wndGhiChu.SetLimitText(35);
	m_wndGhiChu.SetCheckValue(true);

	m_wndItemList.InsertColumn(0, _T("STT"), CFMT_NUMBER | CFMT_CENTER, 40);
	m_wndItemList.InsertColumn(1, _T("OrderLineID"), CFMT_NUMBER, 0);
	m_wndItemList.InsertColumn(2, _T("Hồ sơ"), CFMT_NUMBER, 80);
	m_wndItemList.InsertColumn(3, _T("Họ và tên"), CFMT_TEXT, 120);
	m_wndItemList.InsertColumn(4, _T("Năm sinh"), CFMT_TEXT, 60);
	m_wndItemList.InsertColumn(5, _T("Đối tượng"), CFMT_TEXT, 80);
	m_wndItemList.InsertColumn(6, _T("Chẩn đoán"), CFMT_TEXT, 120);
	m_wndItemList.InsertColumn(7, _T("Nhóm máu"), CFMT_TEXT, 80);
	m_wndItemList.InsertColumn(8, _T("CP máu"), CFMT_TEXT, 120);
	m_wndItemList.InsertColumn(9, _T("Số lượng"), CFMT_TEXT, 40);
	m_wndItemList.InsertColumn(10, _T("Ngày sử dụng"), CFMT_TEXT, 80);
	m_wndItemList.InsertColumn(11, _T("Ghi chú"), CFMT_TEXT, 128);
	m_wndItemList.InsertColumn(12, _T("Ghi chú C16"), CFMT_TEXT, 128);


	m_wndGroup.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndGroup.InsertColumn(1, _T("Description"), CFMT_TEXT, 450);

	//m_wndNhomMau.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	//m_wndNhomMau.InsertColumn(1, _T("Name"), CFMT_TEXT, 350);


	m_wndChePham.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndChePham.InsertColumn(1, _T("Name"), CFMT_TEXT, 450);


	m_wndBloodOrderSheetList.InsertColumn(0, _T("Số phiếu"), CFMT_NUMBER | CFMT_CENTER, 50);
	m_wndBloodOrderSheetList.InsertColumn(1, _T("Nội dung"), CFMT_TEXT, 150);
	m_wndBloodOrderSheetList.InsertColumn(2, _T("Thời gian"), CFMT_TEXT, 80);
	m_wndBloodOrderSheetList.InsertColumn(3, _T("Người tạo"), CFMT_TEXT, 50);
	m_wndBloodOrderSheetList.InsertColumn(4, _T("Trạng thái"), CFMT_TEXT, 50);

	m_wndPatientName.InsertColumn(0, _T("Hồ sơ"), CFMT_TEXT, 80);
	m_wndPatientName.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);
	m_wndPatientName.InsertColumn(2, _T("Năm sinh"), CFMT_TEXT, 80);
	m_wndPatientName.InsertColumn(3, _T("Giới tính"), CFMT_TEXT, 80);
	m_wndPatientName.InsertColumn(4, _T("Đối tượng"), CFMT_TEXT, 80);
	m_wndPatientName.InsertColumn(5, _T("Phone"), CFMT_TEXT, 0);
	m_wndPatientName.InsertColumn(6, _T("Địa chỉ"), CFMT_TEXT, 0);
	m_wndPatientName.InsertColumn(7, _T("Chẩn đoán"), CFMT_TEXT, 0);
	m_wndPatientName.InsertColumn(8, _T("Nhóm máu"), CFMT_TEXT, 0);


	m_wndName.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndName.InsertColumn(1, _T("Description"), CFMT_TEXT, 400);
	m_wndName.InsertColumn(2, _T("Serv Price"), CFMT_MONEY, 85);
	m_wndName.InsertColumn(3, _T("Ins Price"), CFMT_MONEY, 85);
	m_wndName.InsertColumn(4, _T("Apply Date"), CFMT_DATE, 85);

	m_hms_bloodorder_lineTbl.SetTableName(_T("HMS_BLOOD_ORDER_LINE"));

	m_hms_bloodorder_lineTbl.AddField(_T("BLSL_ORDERID_REF"), dfLong);
	m_hms_bloodorder_lineTbl.AddField(_T("BLSL_ORDERLINEID"), dfLong);
	m_hms_bloodorder_lineTbl.AddField(_T("BLSL_CREATEDBY"), dfText, 15);
	
	m_hms_bloodorder_lineTbl.AddField(_T("BLSL_CREATEDATE"), dfText, 15);
	m_hms_bloodorder_lineTbl.AddField(_T("BLSL_UPDATEDBY"), dfText, 15);
	m_hms_bloodorder_lineTbl.AddField(_T("BLSL_DOCNO"), dfLong);
	m_hms_bloodorder_lineTbl.AddField(_T("BLSL_UPDATEDDATE"), dfText, 15);
	m_hms_bloodorder_lineTbl.AddField(_T("BLSL_DIAGNOSTIC"), dfText, 254);
	m_hms_bloodorder_lineTbl.AddField(_T("BLSL_DEPTID"), dfText, 12);
	m_hms_bloodorder_lineTbl.AddField(_T("BLSL_TREATTIME"), dfInteger);
	m_hms_bloodorder_lineTbl.AddField(_T("BLSL_NHOMMAU"), dfText, 5);
	m_hms_bloodorder_lineTbl.AddField(_T("BLSL_CHEPHAM"), dfText, 12);
	m_hms_bloodorder_lineTbl.AddField(_T("BLSL_SOLUONG"), dfFloat);
	m_hms_bloodorder_lineTbl.AddField(_T("BLSL_ORDERDATE"),dfText, 15);
	m_hms_bloodorder_lineTbl.AddField(_T("BLSL_COMMENT"),dfText, 254);
	m_hms_bloodorder_lineTbl.AddField(_T("BLSL_STATUS"), dfText, 1);


}
void CHMS108BloodOrderDialog::OnSetWindowEvents()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndBloodOrderSheetList.SetEvent(WE_SELCHANGE, _BloodSheetListSelectChangeFnc);
	m_wndBloodOrderSheetList.SetEvent(WE_LOADDATA, _BloodSheetListLoadDataFnc);
	m_wndBloodOrderSheetList.SetEvent(WE_DBLCLICK, _BloodSheetListDblClickFnc);
	m_wndBloodOrderSheetList.SetWindowText(_T("Danh sách phiếu"));
	m_wndBloodOrderSheetList.AddEvent(1, _T("Thêm mới phiếu"), _BloodSheetListAddItemFnc);

	m_wndBloodOrderSheetList.AddEvent(0, _T("-"), NULL);
	m_wndBloodOrderSheetList.AddEvent(2, _T("Xác nhận (để in)"), _BloodSheetListConfirmItemFnc);

	m_wndBloodOrderSheetList.AddEvent(0, _T("-"), NULL);
	m_wndBloodOrderSheetList.AddEvent(3, _T("Bỏ xác nhận"), _BloodSheetListDisConfirmItemFnc);

	m_wndBloodOrderSheetList.AddEvent(0, _T("-"), NULL);
	m_wndBloodOrderSheetList.AddEvent(4, _T("Xóa phiếu"), _BloodSheetListDeleteItemFnc);

	m_wndBloodOrderSheetList.AddEvent(0, _T("-"), NULL);	
	m_wndBloodOrderSheetList.AddEvent(5, _T("In phiếu"), _BloodSheetListPrintItemFnc);

	m_wndItemList.SetEvent(WE_SELCHANGE, _OnItemListSelectChangeFnc);
	m_wndItemList.SetEvent(WE_LOADDATA, _OnItemListLoadDataFnc);
	m_wndItemList.SetEvent(WE_DBLCLICK, _OnItemListDblClickFnc);
	
	m_wndItemList.SetWindowText(_T("Items"));
	m_wndItemList.AddEvent(1, _T("Sửa bệnh nhân"), _OnItemListEditItemFnc);
	m_wndItemList.AddEvent(0, _T("-"), NULL);	
	m_wndItemList.AddEvent(2, _T("Xóa bệnh nhân"), _OnItemListDeleteItemFnc);
	
	m_wndGroup.SetEvent(WE_SELENDOK, _OnGroupSelendokFnc);
	//m_wndGroup.SetEvent(WE_SETFOCUS, _OnGroupSetfocusFnc);
	//m_wndGroup.SetEvent(WE_KILLFOCUS, _OnGroupKillfocusFnc);
	m_wndGroup.SetEvent(WE_SELCHANGE, _OnGroupSelectChangeFnc);
	m_wndGroup.SetEvent(WE_LOADDATA, _OnGroupLoadDataFnc);
	//m_wndGroup.SetEvent(WE_ADDNEW, _OnGroupAddNewFnc);
	m_wndName.SetEvent(WE_SELENDOK, _OnNameSelendokFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_SELCHANGE, _OnNameSelectChangeFnc);
	m_wndName.SetEvent(WE_LOADDATA, _OnNameLoadDataFnc);
	//m_wndName.SetEvent(WE_ADDNEW, _OnNameAddNewFnc);
	//m_wndQty.SetEvent(WE_CHANGE, _OnQtyChangeFnc);
	//m_wndQty.SetEvent(WE_SETFOCUS, _OnQtySetfocusFnc);
	//m_wndQty.SetEvent(WE_KILLFOCUS, _OnQtyKillfocusFnc);
	m_wndDocno.SetEvent(WE_CHECKVALUE, _OnDocnoCheckValueFnc);
	m_wndPatientName.SetEvent(WE_LOADDATA, _OnPatientNameLoadDataFnc);
	m_wndYOB.SetEvent(WE_CHECKVALUE, _OnYOBCheckValueFnc);
	m_wndSex.SetEvent(WE_CHECKVALUE, _OnSexCheckValueFnc);
	m_wndObjectName.SetEvent(WE_CHECKVALUE, _OnObjectNameCheckValueFnc);
	m_wndDiagnostic.SetEvent(WE_CHECKVALUE, _OnDiagnosticCheckValueFnc);
	m_wndNhomMau.SetEvent(WE_CHECKVALUE, _OnNhomMauCheckValueFnc);
	m_wndChePham.SetEvent(WE_LOADDATA, _OnChePhamLoadDataFnc);
	m_wndSoluong.SetEvent(WE_CHECKVALUE, _OnSoluongCheckValueFnc);
	m_wndNgaySuDung.SetEvent(WE_CHECKVALUE, _OnNgaySuDungCheckValueFnc);
	m_wndGhiChu.SetEvent(WE_CHECKVALUE, _OnGhiChuCheckValueFnc);
	m_wndPatientName.SetEvent(WE_SELENDOK, _OnPatientNameSelendokFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndSearch.SetEvent(WE_CLICK, _OnSearchSelectFnc);

	m_wndQty.SetEvent(WE_CHECKVALUE, _OnQtyCheckValueFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	SetMode(VM_VIEW);
	BloodSheetListLoadData();
}
void CHMS108BloodOrderDialog::OnDoDataExchange(CDataExchange* pDX)
{
	DDX_TextEx(pDX, m_wndGroup.GetDlgCtrlID(), m_szGroupKey);
	DDX_TextEx(pDX, m_wndName.GetDlgCtrlID(), m_szNameKey);
	DDX_Text(pDX, m_wndQty.GetDlgCtrlID(), m_nQty);
	DDX_Text(pDX, m_wndDocno.GetDlgCtrlID(), m_nDocno);
	DDX_TextEx(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientNameKey);
	DDX_Text(pDX, m_wndYOB.GetDlgCtrlID(), m_szYOB);
	DDX_Text(pDX, m_wndSex.GetDlgCtrlID(), m_szSex);
	DDX_Text(pDX, m_wndObjectName.GetDlgCtrlID(), m_szObjectName);
	DDX_Text(pDX, m_wndDiagnostic.GetDlgCtrlID(), m_szDiagnostic);
	DDX_Text(pDX, m_wndNhomMau.GetDlgCtrlID(), m_szNhomMau);	
	DDX_TextEx(pDX, m_wndChePham.GetDlgCtrlID(), m_szChePhamKey);
	DDX_Text(pDX, m_wndSoluong.GetDlgCtrlID(), m_nSoluong);
	DDX_TextEx(pDX, m_wndNgaySuDung.GetDlgCtrlID(), m_szNgaySuDung);
	DDX_Text(pDX, m_wndGhiChu.GetDlgCtrlID(), m_szGhiChu);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
}

void CHMS108BloodOrderDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Docno")] =  m_nDocno;
	m_jData[_T("PatientName")] =  m_szPatientNameKey;
	m_jData[_T("YOB")] =  m_szYOB;
	m_jData[_T("Sex")] =  m_szSex;
	m_jData[_T("ObjectName")] =  m_szObjectName;
	m_jData[_T("Diagnostic")] =  m_szDiagnostic;
	m_jData[_T("NhomMau")] =  m_szNhomMau;
	m_jData[_T("ChePham")] =  m_szChePhamKey;
	m_jData[_T("Soluong")] =  m_nSoluong;
	m_jData[_T("NgaySuDung")] =  m_szNgaySuDung;
	m_jData[_T("GhiChu")] =  m_szGhiChu;
	m_jData[_T("FromDate")] =  m_szFromDate;
	m_jData[_T("ToDate")] =  m_szToDate;
	}
	else
	{
			
	m_jData[_T("Docno")].GetValue(m_nDocno);
	m_jData[_T("PatientName")].GetValue(m_szPatientNameKey);
	m_jData[_T("YOB")].GetValue(m_szYOB);
	m_jData[_T("Sex")].GetValue(m_szSex);
	m_jData[_T("ObjectName")].GetValue(m_szObjectName);
	m_jData[_T("Diagnostic")].GetValue(m_szDiagnostic);
	m_jData[_T("NhomMau")].GetValue(m_szNhomMau);
	m_jData[_T("ChePham")].GetValue(m_szChePhamKey);
	m_jData[_T("Soluong")].GetValue(m_nSoluong);
	m_jData[_T("NgaySuDung")].GetValue(m_szNgaySuDung);
	m_jData[_T("GhiChu")].GetValue(m_szGhiChu);
	m_jData[_T("FromDate")].GetValue(m_szFromDate);
	m_jData[_T("ToDate")].GetValue(m_szToDate);
	}

}
void CHMS108BloodOrderDialog::GetDataToScreen()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;

	szSQL.Format(_T(" SELECT ") \
				_T(" BLSL_DOCNO as docno,") \
				_T(" hd_docno     AS patname,") \
				_T(" Extract(year FROM hp_birthdate) yob,") \
				_T(" HMS_GETSEX(hp_sex)                            AS sex,") \
				_T(" get_objectname(hd_object) objname,") \
				_T(" trim(BLSL_DIAGNOSTIC) as diagnostic,") \
				_T(" BLSL_NHOMMAU as nhommau,") \
				_T(" trim(BLSL_CHEPHAM) as macpmau,") \
				_T(" BLSL_SOLUONG as soluong,") \
				_T(" BLSL_ORDERDATE as ngaysudung,") \
				_T(" trim(BLSL_COMMENT) as ghichu ") \
				_T(" FROM hms_blood_order_line ") \
				_T(" LEFT JOIN hms_doc ON (BLSL_DOCNO = hd_docno)") \
				_T(" LEFT JOIN hms_patient ON (hd_patientno = hp_patientno)") \
				_T(" LEFT JOIN m_product ON (BLSL_CHEPHAM = mp_product_id)") \
				_T(" WHERE BLSL_DOCNO=%ld") \
				_T(" AND BLSL_ORDERLINEID=%ld") \
				_T(" ORDER BY hd_docno,BLSL_ORDERLINEID"), m_nDocno, m_nOrderLineID);
	rs.ExecSQL(szSQL);
	
	if (!rs.IsEOF())
	{
		rs.GetValue(_T("docno"), m_nDocno);
		rs.GetValue(_T("patname"), m_szPatientNameKey);		
		rs.GetValue(_T("yob"), m_szYOB);
		rs.GetValue(_T("sex"), m_szSex);
		rs.GetValue(_T("objname"), m_szObjectName);
		rs.GetValue(_T("diagnostic"), m_szDiagnostic);
		rs.GetValue(_T("nhommau"), m_szNhomMau);
		rs.GetValue(_T("macpmau"), m_szChePhamKey);
		rs.GetValue(_T("soluong"), m_nSoluong);
		rs.GetValue(_T("ngaysudung"), m_szNgaySuDung);
		rs.GetValue(_T("ghichu"), m_szGhiChu);
	}


}
void CHMS108BloodOrderDialog::GetScreenToData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
	m_hms_bloodorder_lineTbl.SetValue(_T("BLSL_ORDERID_REF"), m_nOrderID);
	
	m_hms_bloodorder_lineTbl.SetValue(_T("BLSL_CREATEDBY"), pMF->GetCurrentUser());
	
	m_hms_bloodorder_lineTbl.SetValue(_T("BLSL_CREATEDATE"), pMF->GetSysDateTime());
	m_hms_bloodorder_lineTbl.SetValue(_T("BLSL_UPDATEDBY"), pMF->GetCurrentUser());
	m_hms_bloodorder_lineTbl.SetValue(_T("BLSL_DOCNO"), m_nDocno);
	
	m_hms_bloodorder_lineTbl.SetValue(_T("BLSL_DIAGNOSTIC"), m_szDiagnostic);
	m_hms_bloodorder_lineTbl.SetValue(_T("BLSL_DEPTID"),  pMF->GetCurrentDepartmentID());
	m_hms_bloodorder_lineTbl.SetValue(_T("BLSL_TREATTIME"), pMF->GetTreatTime());
	m_hms_bloodorder_lineTbl.SetValue(_T("BLSL_NHOMMAU"),m_szNhomMau);
	m_hms_bloodorder_lineTbl.SetValue(_T("BLSL_CHEPHAM"), m_szChePhamKey);
	m_hms_bloodorder_lineTbl.SetValue(_T("BLSL_SOLUONG"), m_nSoluong);
	m_hms_bloodorder_lineTbl.SetValue(_T("BLSL_ORDERDATE"), m_szNgaySuDung);
	m_hms_bloodorder_lineTbl.SetValue(_T("BLSL_COMMENT"),m_szGhiChu);
	

}
void CHMS108BloodOrderDialog::SetDefaultValues()
{
	m_szNameKey.Empty();
	m_nQty = 1;
	m_nDocno=0;
	
	m_szPatientNameKey.Empty();
	m_szYOB.Empty();
	m_szSex.Empty();
	m_szObjectName.Empty();
	m_szDiagnostic.Empty();
	m_szNhomMau.Empty();
	m_szChePhamKey.Empty();
	m_nSoluong=0;
	//m_szNgaySuDung.Empty();
	m_szGhiChu.Empty();
	

}
int CHMS108BloodOrderDialog::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiDialog::SetMode(nMode); 
 		CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
  		switch(nMode)
		{ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 2, 3, 4, -1);
			m_szNgaySuDung = pMF->GetSysDate();
 			SetDefaultValues();
 			break; 
 		case VM_EDIT:
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 2, 3, 4, -1);
			m_wndPatientName.EnableWindow(false);

 			break;
 		case VM_VIEW: 
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 0, 4, -1);
 			break; 
 		case VM_NONE: 
 			EnableControls(FALSE);
 			EnableButtons(TRUE, 10, 4, -1);
 			SetDefaultValues();
 			break;
 		};
		m_wndDocno.EnableWindow(false);
		m_wndYOB.EnableWindow(false);
		m_wndSex.EnableWindow(false);
		m_wndObjectName.EnableWindow(false);
		m_wndSearch.EnableWindow(true);
		m_wndFromDate.EnableWindow(true);
		m_wndToDate.EnableWindow(true);
		m_wndPrint.EnableWindow(false);
 		UpdateData(FALSE); 
 		return nOldMode; 
}
void CHMS108BloodOrderDialog::BloodSheetListDblClick()
{	
}

int CHMS108BloodOrderDialog::OnFromDateCheckValue(){
	return 0;
} 
int CHMS108BloodOrderDialog::OnToDateCheckValue(){
	return 0;
}

void CHMS108BloodOrderDialog::OnSearchSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE); 
	BloodSheetListLoadData();	
} 

int CHMS108BloodOrderDialog::OnDocnoCheckValue()
{
	return 0;
} 

long CHMS108BloodOrderDialog::OnPatientNameLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndPatientName.IsSearchKey() && str2long(m_szPatientNameKey) > 0)
	{
		szWhere.Format(_T(" AND hd_docno=%d "), str2long(m_szPatientNameKey));
	};
	m_wndPatientName.DeleteAllItems(); 
	
	int nCount = 0;
		szSQL.Format(_T(" SELECT distinct(hd_docno) AS docno,") \
		_T("   trim(hp_surname") \
		_T("   ||' '") \
		_T("   ||hp_midname") \
		_T("   ||' '") \
		_T("   ||hp_firstname)                               AS pname,") \
		_T("   extract(YEAR FROM hp_birthdate)               AS yob,") \
		_T("   HMS_GETSEX(hp_sex)                            AS sex,") \
		_T("   HMS_GetObjectName(hd_object)                  AS objectname,") \
		_T("   hd_telephone                                  AS phone,") \
		_T("   hms_getaddress(hp_provid,hp_distid,hp_villid) AS address,") \
		_T("   COALESCE(hcr_maindisease, htr_maindisease)    AS maindisease,") \
		_T("   GET_PATIENT_BLOOD_GROUP(hd_docno)			 AS nhommau") \
		_T(" FROM hms_patient") \
		_T(" LEFT JOIN hms_doc ON (hp_patientno = hd_patientno)") \
		_T(" LEFT JOIN hms_clinical_record ON (hd_docno = hcr_docno)") \
		_T(" LEFT JOIN hms_treatment_record ON (hd_docno = htr_docno)") \
		_T(" LEFT JOIN HMS_TREAT_MOVEMENT") \
		_T(" ON(htr_docno          =htm_docno") \
		_T(" AND htr_idx           =htm_refidx") \
		_T(" AND htm_status        ='O')") \
		_T(" WHERE (htr_deptid     ='%s'") \
		_T(" OR (htr_ctdeptid      ='%s'") \
		_T(" AND htr_combinedtreat ='Y')") \
		_T(" OR (HTM_PERFORM_DEPTID='%s'") \
		_T(" AND htm_status        ='O'))") \
		_T(" AND htr_status        ='I'") \
		_T(" %s") \
		_T(" ORDER BY pname, docno"), pMF->m_szDept, pMF->m_szDept, pMF->m_szDept, szWhere);

//_msg(_T("%s"), szSQL);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF())
	{ 
		m_wndPatientName.AddItems(
			rs.GetValue(_T("docno")), 
			rs.GetValue(_T("pname")), 
			rs.GetValue(_T("yob")), 
			rs.GetValue(_T("sex")),
			rs.GetValue(_T("objectname")),
			rs.GetValue(_T("phone")),
			rs.GetValue(_T("address")),
			rs.GetValue(_T("maindisease")),
			rs.GetValue(_T("nhommau")),
			NULL);
		rs.MoveNext();
	}
	return nCount;
}


void CHMS108BloodOrderDialog::OnPatientNameSelendok()
{
	UpdateData(true);
	m_nDocno = str2long(m_wndPatientName.GetCurrent(0));
	m_szYOB = m_wndPatientName.GetCurrent(2);
	m_szSex = m_wndPatientName.GetCurrent(3);
	m_szObjectName = m_wndPatientName.GetCurrent(4);	
	m_szDiagnostic = m_wndPatientName.GetCurrent(7);
	m_szNhomMau = m_wndPatientName.GetCurrent(8);
	m_wndNhomMau.SetFocus();
	UpdateData(false);
}

int CHMS108BloodOrderDialog::OnYOBCheckValue()
{
	return 0;
}
int CHMS108BloodOrderDialog::OnSexCheckValue()
{
	return 0;
}
int CHMS108BloodOrderDialog::OnObjectNameCheckValue(){
	return 0;
}

int CHMS108BloodOrderDialog::OnDiagnosticCheckValue(){
	return 0;
} 
//long CHMS108BloodOrderDialog::OnNhomMauLoadData()
//{
//	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
//	CRecord rs(&pMF->m_db);
//	CString szSQL, szWhere;
//	if(m_wndNhomMau.IsSearchKey() && !m_szNhomMau.IsEmpty()){
//	 szWhere.Format(_T(" and mbt_id='%s' "), m_szNhomMau);
//	};
//	m_wndNhomMau.DeleteAllItems(); 
//	int nCount = 0;
//	szSQL.Format(_T("SELECT mbt_id as id, mbt_name as name ") \
//		_T("FROM m_blood_type WHERE mbt_isactive='Y' %s ORDER BY id "), szWhere);
//	nCount = rs.ExecSQL(szSQL);
//	while(!rs.IsEOF()){ 
//		m_wndNhomMau.AddItems(
//			rs.GetValue(_T("id")), 
//			rs.GetValue(_T("name")), NULL);
//		rs.MoveNext();
//	}
//	return nCount;
//
//	return 0;
//}

long CHMS108BloodOrderDialog::OnChePhamLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndChePham.IsSearchKey() && !m_szChePhamKey.IsEmpty()){
		szWhere.Format(_T(" and mp_product_id='%s' "), m_szChePhamKey);
	};
	m_wndChePham.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT mp_product_id as id, mp_name as name, mp_outside as outside, cast(ss_vndesc as int) AS limitno, ss_desc as groupid ") \
		_T("FROM m_product LEFT JOIN sys_sel ON (ss_code=mp_product_id and ss_id='hms_blood_checkvalue') WHERE mp_org_id='BB' and mp_isactive='Y' %s ORDER BY id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndChePham.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")),
			rs.GetValue(_T("outside")),
			rs.GetValue(_T("limitno")),
			rs.GetValue(_T("groupid")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
int CHMS108BloodOrderDialog::OnSoluongCheckValue(){
	return 0;
}
int CHMS108BloodOrderDialog::OnNgaySuDungCheckValue(){
	return 0;
}

int CHMS108BloodOrderDialog::OnGhiChuCheckValue(){
	return 0;
}

int CHMS108BloodOrderDialog::OnNhomMauCheckValue()
{
	CHMSMainFrame* pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_szNhomMau.Trim();
	if(m_szNhomMau.IsEmpty())
		return -1;
	
	return 0;
}

void CHMS108BloodOrderDialog::BloodSheetListSelectChange(int nOldItem, int nNewItem)
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	
	if(nNewItem >= 0)
	{
		m_nOrderID = str2long(m_wndBloodOrderSheetList.GetItemText(nNewItem, 0));
		m_szSheetStatus = m_wndBloodOrderSheetList.GetItemText(nNewItem, 4);
		
		OnItemListLoadData();	

		if (m_szSheetStatus == _T("O"))
		{
			SetMode(VM_VIEW);
			m_wndBloodOrderSheetList.SetMenuState(4, TRUE);
			m_wndBloodOrderSheetList.SetMenuState(5, FALSE);
			m_wndItemList.SetMenuState(1, TRUE);
			m_wndItemList.SetMenuState(2, TRUE);
		}
		else
		{
			SetMode(VM_NONE);
			m_wndBloodOrderSheetList.SetMenuState(4, FALSE);
			m_wndBloodOrderSheetList.SetMenuState(5, TRUE);
			m_wndItemList.SetMenuState(1, FALSE);
			m_wndItemList.SetMenuState(2, FALSE);
			m_wndPrint.EnableWindow(true);
		}
	}

}

int CHMS108BloodOrderDialog::BloodSheetListAddItem()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CHMS108BloodOrderSheetDialog dlg(this);
	dlg.SetMode(VM_ADD);
	if(dlg.DoModal() == IDOK)
	{
		BloodSheetListLoadData();
	}
	 return 0;
}
int CHMS108BloodOrderDialog::BloodSheetListDeleteItem()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	int nSel = m_wndBloodOrderSheetList.GetCurSel();
	if (nSel < 0)
		return -1;
	CString szSQL;
	
	 szSQL.Format(_T("HMS_BLOOD_ORDER_DELETE_SHEET(%ld)"), m_nOrderID);		
	int ret = str2long(pMF->ExecDML(szSQL));

 	if(ret > 0)
	{ 
 		BloodSheetListLoadData();		
 	}

	/*if (m_wndBloodOrderSheetList.GetItemCount() > 0)
			m_wndBloodOrderSheetList.SetCurSel(m_wndBloodOrderSheetList.GetItemCount() - 1);
	else
	{
		ShowMessageBox(_T("Error when executing"), MB_ICONERROR | MB_OK);		
	}*/
	return 0;
}

int CHMS108BloodOrderDialog::BloodSheetListConfirmItem()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	int nSel = m_wndBloodOrderSheetList.GetCurSel();
	if (nSel < 0)
		return -1;
	CString szSQL;
	
	szSQL.Format(_T("HMS_BLOOD_ORDER_CONFIRM_SHEET(%ld, '%s')"), m_nOrderID, pMF->GetCurrentUser());		
	int ret = str2long(pMF->ExecDML(szSQL));

 	if(ret > 0)
	{ 
 		BloodSheetListLoadData();		
 	}	
	return 0;
}


int CHMS108BloodOrderDialog::BloodSheetListDisConfirmItem()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	int nSel = m_wndBloodOrderSheetList.GetCurSel();
	if (nSel < 0)
		return -1;
	CString szSQL;
	
	 szSQL.Format(_T("HMS_BLOOD_ORDER_DISCF_SHEET(%ld, '%s')"), m_nOrderID, pMF->GetCurrentUser());			
	int ret = str2long(pMF->ExecDML(szSQL));

 	if(ret > 0)
	{ 
 		BloodSheetListLoadData();		
 	}	
	return 0;
} 


long CHMS108BloodOrderDialog::BloodSheetListLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szSheetStatus;
	m_wndBloodOrderSheetList.BeginLoad(); 
	int nCount = 0;	

	szSQL.Format(_T(" SELECT bls_orderid as sophieu,") \
				_T(" bls_content as noidung,") \
				_T(" to_char(BLS_CREATEDATE, 'DD/MM/YYYY') as thoigian,") \
				_T(" bls_who_create as nguoitao,") \
				_T(" NVL(bls_status, 'X') as trangthai") \
				_T(" FROM HMS_BLOOD_ORDER_SHEET") \
				_T(" WHERE 1=1") \
				_T(" AND BLS_CREATEDATE between TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') and TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
				_T(" AND bls_order_dept ='%s' ORDER BY bls_orderid DESC "), m_szFromDate, m_szToDate, pMF->GetCurrentDepartmentID());

	nCount = rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
	while(!rs.IsEOF())
	{ 
		rs.GetValue(_T("trangthai"), szSheetStatus);
		int nItem = m_wndBloodOrderSheetList.AddItems(
			rs.GetValue(_T("sophieu")), 
			rs.GetValue(_T("noidung")),
			rs.GetValue(_T("thoigian")), 
			rs.GetValue(_T("nguoitao")),
			rs.GetValue(_T("trangthai")), NULL);

		if (szSheetStatus == _T("S"))
		{
			m_wndBloodOrderSheetList.SetSubItemBkColor(nItem, 0, RGB(0, 255, 127), FALSE);
			m_wndBloodOrderSheetList.SetSubItemTextColor(nItem, 0, RGB(0, 0, 0), FALSE);

			m_wndBloodOrderSheetList.SetSubItemBkColor(nItem, 1, RGB(0, 255, 127), FALSE);
			m_wndBloodOrderSheetList.SetSubItemTextColor(nItem, 1, RGB(0, 0, 0), FALSE);

			m_wndBloodOrderSheetList.SetSubItemBkColor(nItem, 2, RGB(0, 255, 127), FALSE);
			m_wndBloodOrderSheetList.SetSubItemTextColor(nItem, 2, RGB(0, 0, 0), FALSE);

			m_wndBloodOrderSheetList.SetSubItemBkColor(nItem, 4, RGB(0, 255, 127), FALSE);
			m_wndBloodOrderSheetList.SetSubItemTextColor(nItem, 4, RGB(0, 0, 0), FALSE);
		}
	

		rs.MoveNext();
	}
	m_wndBloodOrderSheetList.EndLoad(); 
	return nCount;
}
void CHMS108BloodOrderDialog::OnItemListDblClick()
{	
} 
void CHMS108BloodOrderDialog::OnItemListSelectChange(int nOldItem, int nNewItem)
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	
	if (nNewItem < 0)
		return;
	SetMode(VM_NONE); 
	m_nOrderLineID = ToLong(m_wndItemList.GetItemText(nNewItem, 1));
	m_nDocno = ToLong(m_wndItemList.GetItemText(nNewItem, 2));
	m_szPatname = m_wndItemList.GetItemText(nNewItem, 3);
	GetDataToScreen();
	
	//Nếu phiếu trạng thái 'O' thì cho xóa
	szSQL.Format(_T("HMS_BLOOD_ORDER_CHECK_DELETE('%ld')"), m_nOrderID);		
	int ret = str2long(pMF->ExecDML(szSQL));
	if (ret > 0)
			{
				m_wndDelete.EnableWindow(TRUE);
			}
		else
			{
				m_wndDelete.EnableWindow(FALSE);
				SetMode(VM_VIEW);
			}

	
	
	if (m_szSheetStatus != _T("O"))
	{
			m_wndAdd.EnableWindow(FALSE);
			m_wndPrint.EnableWindow(TRUE);
	}
	
	UpdateData(FALSE);
} 

int CHMS108BloodOrderDialog::OnItemListDeleteItem()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnDelete108BloodOrderDialog();
	return 0;
} 
long CHMS108BloodOrderDialog::OnItemListLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CRecord rs2(&pMF->m_db);
	CString szSQL, tmpStr, szghichuc16;
	//m_wndItemList.DeleteAllItems();
	m_wndItemList.BeginLoad(); 
	
	int nCount = 0;

				szSQL.Format(_T(" SELECT ") \
				_T(" BLSL_DOCNO as docno,") \
				_T(" BLSL_ORDERLINEID as OrderLineID,") \
				_T(" Get_patientname(hd_docno)     AS patname,") \
				_T(" Extract(year FROM hp_birthdate) yob,") \
				_T(" get_objectname(hd_object) objname,") \
				_T(" trim(BLSL_DIAGNOSTIC) as diagnostic,") \
				_T(" BLSL_NHOMMAU as nhommau,") \
				_T(" trim(mp_name) as macpmau,") \
				_T(" BLSL_SOLUONG as soluong,") \
				_T(" to_char(BLSL_ORDERDATE, 'DD/MM/YYYY') as ngaysudung,") \
				_T(" trim(BLSL_COMMENT) as ghichu, ") \
				_T(" trim(BLSL_COMMENT_C16) as ghichuc16 ") \
				_T(" FROM hms_blood_order_line ") \
				_T(" LEFT JOIN hms_doc ON (BLSL_DOCNO = hd_docno)") \
				_T(" LEFT JOIN hms_patient ON (hd_patientno = hp_patientno)") \
				_T(" LEFT JOIN m_product ON (BLSL_CHEPHAM = mp_product_id)") \
				_T(" WHERE BLSL_ORDERID_REF=%ld") \
				_T(" AND mp_org_id='BB'") \
				_T(" AND mp_isactive='Y'") \
				_T(" ORDER BY BLSL_ORDERLINEID DESC"), m_nOrderID);	
	
	int nIndex=0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF())
	{ 
		
		nIndex++;		
		tmpStr.Format(_T("%d"), nIndex);
		rs.GetValue(_T("ghichuc16"), szghichuc16);
		int nItem = m_wndItemList.AddItems(
			tmpStr,
			rs.GetValue(_T("OrderLineID")), 
			rs.GetValue(_T("docno")), 
			rs.GetValue(_T("patname")), 
			rs.GetValue(_T("yob")), 
			rs.GetValue(_T("objname")), 
			rs.GetValue(_T("diagnostic")), 
			rs.GetValue(_T("nhommau")), 
			rs.GetValue(_T("macpmau")),
			rs.GetValue(_T("soluong")), 
			rs.GetValue(_T("ngaysudung")), 
			rs.GetValue(_T("ghichu")),
			szghichuc16,
			NULL);
		if (!szghichuc16.IsEmpty())
		{
			m_wndItemList.SetSubItemBkColor(nItem, 3, RGB(255, 140, 0), FALSE);
			m_wndItemList.SetSubItemTextColor(nItem, 3, RGB(0, 0, 0), FALSE);
			
			m_wndItemList.SetSubItemBkColor(nItem, 12, RGB(255, 140, 0), FALSE);
			m_wndItemList.SetSubItemTextColor(nItem, 12, RGB(0, 0, 0), FALSE);
		
		}
		rs.MoveNext();
	}
	m_wndItemList.EndLoad(); 
	return nCount;

}
void CHMS108BloodOrderDialog::OnGroupSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CHMS108BloodOrderDialog::OnGroupSelendok(){
	 
}
/*void CHMS108BloodOrderDialog::OnGroupSetfocus(){
	
}*/
/*void CHMS108BloodOrderDialog::OnGroupKillfocus(){
	
}*/
long CHMS108BloodOrderDialog::OnGroupLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();

	if(m_wndGroup.IsSearchKey() && !m_szGroupKey.IsEmpty())
	{
		szWhere.Format(_T(" and hfg_id='%s' "), m_szGroupKey);
	}
	m_wndGroup.DeleteAllItems(); 
	int nCount = 0;

	szSQL.Format(_T("SELECT hfg_id as id, hfg_name as name FROM hms_fee_group ") \
		_T("WHERE substr(hfg_id, 1, 2) IN('B1','B2','B3') AND hfg_active ='Y'  %s ORDER BY hfg_id "), szWhere);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndGroup.AddItems(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CHMS108BloodOrderDialog::OnGroupAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */

void CHMS108BloodOrderDialog::OnNameSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CHMS108BloodOrderDialog::OnNameSelendok(){
	 
}
/*void CHMS108BloodOrderDialog::OnNameSetfocus(){
	
}*/
/*void CHMS108BloodOrderDialog::OnNameKillfocus(){
	
}*/
long CHMS108BloodOrderDialog::OnNameLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	UpdateData(true);

	if(m_wndName.IsSearchKey() && !m_szNameKey.IsEmpty())
	{
		szWhere.Format(_T(" and hfl_feeid='%s' "), m_szNameKey);
	}
	m_wndName.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT hfl_feeid as id, ")\
		         _T("hfl_name as name, ")\
				 _T("hfl_servprice as servprice, ")\
				 _T("hfl_insprice as insprice,  ") \
				 _T(" TO_CHAR(hfl_applydate, 'DD/MM/YYYY') as applydate ") \
				 _T("FROM hms_fee_list ")\
				 _T("WHERE hfl_active = 'Y' and hfl_subgroup<>'Y' and (length(hfl_subitem) <= 1 or hfl_subitem is null) and hfl_groupid='%s' and hfl_feeid not in(select htp_itemid from hms_testprofile where htp_profileid='%s') ")\
				 _T("%s ORDER BY hfl_feeid"), 
				 m_szGroupKey, m_szProfileID, szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF())
	{ 
		m_wndName.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), 
			rs.GetValue(_T("servprice")), 
			rs.GetValue(_T("insprice")), 
			rs.GetValue(_T("applydate")), 
			NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CHMS108BloodOrderDialog::OnNameAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */

/*void CHMS108BloodOrderDialog::OnQtyChange(){
	
} */
/*void CHMS108BloodOrderDialog::OnQtySetfocus(){
	
} */
/*void CHMS108BloodOrderDialog::OnQtyKillfocus(){
	
} */
int CHMS108BloodOrderDialog::OnQtyCheckValue(){
	if(m_nQty < 0 )
		return -1;
	return 0;
} 
void CHMS108BloodOrderDialog::OnAddSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnAdd108BloodOrderDialog();
} 
void CHMS108BloodOrderDialog::OnDeleteSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnDelete108BloodOrderDialog();
} 
void CHMS108BloodOrderDialog::OnSaveSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnSave108BloodOrderDialog();
} 
void CHMS108BloodOrderDialog::OnCancelSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnCancel108BloodOrderDialog();
} 
void CHMS108BloodOrderDialog::OnCloseSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();

} 
int CHMS108BloodOrderDialog::OnAdd108BloodOrderDialog()
{
	if(m_nOrderID <= 0)
		return -1;

	if (m_szSheetStatus != _T("O"))
		return -1;

 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 

 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	m_wndPatientName.SetFocus();
	return 0; 
}
int CHMS108BloodOrderDialog::OnEdit108BloodOrderDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMS108BloodOrderDialog::OnDelete108BloodOrderDialog()
{
 	/*if(GetMode() != VM_VIEW) 
	{
 		return -1;
	}*/
	if (!m_wndDelete.IsWindowEnabled())
		return -1;

 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	int nSel;

	nSel = m_wndItemList.GetCurSel();
	if (nSel < 0)
		return -1;

	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
	
	szSQL.Format(_T("HMS_BLOOD_ORDER_DELETE_LINE(%ld, %ld, %ld)"), m_nOrderID, m_nDocno, m_nOrderLineID);		
	int ret = str2long(pMF->ExecDML(szSQL));

 	if(ret >= 0)
	{ 
 		OnItemListLoadData();
		GetDataToScreen(); 
		SetMode(VM_NONE);
 	}
	return 0;
}
int CHMS108BloodOrderDialog::OnSave108BloodOrderDialog()
{
	
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 

 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
 	CString szSQL;

 	if(GetMode() == VM_EDIT)
	{ 
 		int vcount = 0;
		szSQL.Format(_T("HMS_BLOOD_ORDER_LINE_EDIT(%ld, %ld, %ld, '%s', '%s', '%s', %.2f, '%s', '%s')"),
			m_nOrderID, m_nOrderLineID, m_nDocno, m_szDiagnostic, m_szNhomMau, m_szChePhamKey, m_nSoluong,
			m_szNgaySuDung, m_szGhiChu);
		_tprintf(_T("%s"), szSQL);		
		vcount = str2long(pMF->ExecDML(szSQL));
		if (vcount > 0)		
		OnItemListLoadData();
		GetDataToScreen();
		SetMode(VM_VIEW);
 	}

 	else if(GetMode() == VM_ADD)
	{ 
 		
		szSQL.Format(_T("HMS_BLOOD_ORDER_LINE_CREATE(%s) "), m_hms_bloodorder_lineTbl.FormatSQL());
		_tprintf(_T("%s"), szSQL);  
 		m_nOrderLineID = str2long(pMF->ExecDML(szSQL));
		if(m_nOrderLineID > 0) 
 		
		{ 
 		OnItemListLoadData();
		m_szPatientNameKey.Empty();
		SetMode(VM_ADD);
		m_wndPatientName.SetFocus();
 		} 

 	} 	
 	
 	else 
 	{ 

 	} 
 	return m_nOrderLineID; 
 	return 0; 
}
int CHMS108BloodOrderDialog::OnCancel108BloodOrderDialog()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;

	szSQL.Format(_T("SELECT Count(*) FROM sys_sel ")\
				_T("WHERE ss_id='hms_testprofile' ")\
				_T("AND ss_code='%s' AND ss_default='%s'"),
				m_szProfileID, pMF->GetCurrentUser());
	rs.ExecSQL(szSQL);

 	if(rs.GetIntValue() > 0) 
 	{ 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 		SetMode(VM_NONE); 
 	} 
 	
 	return 0;
} 
int CHMS108BloodOrderDialog::On108BloodOrderDialogListLoadData(){
	return 0;
}

int CHMS108BloodOrderDialog::BloodSheetListPrintItem()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CReport rpt;
	CRecord rs(&pMF->m_db);
	CRecord rsl(&pMF->m_db);
	int nSel = m_wndBloodOrderSheetList.GetCurSel();
	if (nSel < 0)
		return -1;
	CString szSQL, szDeptID, tmpStr, szDate, tmpStr2;
	long nOrderID = 0;

	if (!rpt.Init(_T("Reports/HMS/PMS_DUTRUMAU_LANDSCAPE.RPT")))
			return 0;
	
	//Thông in ở Report Header
	 	szSQL.Format(_T(" SELECT bls_orderid as OrderID,") \
				_T(" sd_name as Department, BLS_CREATEDATE as orderdate") \
				_T(" FROM HMS_BLOOD_ORDER_SHEET LEFT JOIN sys_dept ON (bls_order_dept = sd_id)") \
				_T(" WHERE 1=1") \
				_T(" AND bls_orderid =%ld and bls_order_dept = '%s'"), m_nOrderID, pMF->GetCurrentDepartmentID());

	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
	rs.GetValue(_T("Department"), szDeptID);
	rpt.GetReportHeader()->SetValue(_T("Department"), szDeptID);	
	
	rs.GetValue(_T("OrderID"), nOrderID);
	rpt.GetReportHeader()->SetValue(_T("OrderID"), nOrderID);

	rs.GetValue(_T("orderdate"), tmpStr);
	tmpStr2 = rpt.GetReportFooter()->GetValue(_T("PrintDate"));
	szDate.Format(tmpStr2, tmpStr.Mid(8, 2), tmpStr.Mid(5, 2), tmpStr.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);


	//Thông tin ở Detail
	szSQL.Format(_T(" SELECT ") \
				_T(" BLSL_DOCNO as docno,") \
				_T(" BLSL_ORDERLINEID as OrderLineID,") \
				_T(" Get_patientname(hd_docno)     AS patname,") \
				_T(" Extract(year FROM hp_birthdate) yob,") \
				_T(" get_objectname(hd_object) objname,") \
				_T(" trim(BLSL_DIAGNOSTIC) as diagnostic,") \
				_T(" BLSL_NHOMMAU as nhommau,") \
				_T(" trim(mp_name) as macpmau,") \
				_T(" BLSL_SOLUONG as soluong,") \
				_T(" to_char(BLSL_ORDERDATE, 'DD/MM/YYYY') as ngaysudung,") \
				_T(" trim(BLSL_COMMENT) as ghichu ") \
				_T(" FROM hms_blood_order_line ") \
				_T(" LEFT JOIN hms_doc ON (BLSL_DOCNO = hd_docno)") \
				_T(" LEFT JOIN hms_patient ON (hd_patientno = hp_patientno)") \
				_T(" LEFT JOIN m_product ON (BLSL_CHEPHAM = mp_product_id)") \
				_T(" WHERE BLSL_ORDERID_REF=%ld") \
				_T(" ORDER BY BLSL_ORDERLINEID DESC"), m_nOrderID);

	rsl.ExecSQL(szSQL);
	CReportSection* rptDetail = NULL;
	int nItem = 1;
	
	while(!rsl.IsEOF())
	{
		rptDetail = rpt.AddDetail();
		tmpStr.Format(_T("%d"), nItem++);
		rptDetail->SetValue(_T("1"), tmpStr);

		rsl.GetValue(_T("docno"), tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);

		rsl.GetValue(_T("patname"), tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);

		rsl.GetValue(_T("yob"), tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);

		rsl.GetValue(_T("objname"), tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);

		rsl.GetValue(_T("diagnostic"), tmpStr);
		rptDetail->SetValue(_T("6"), tmpStr);

		rsl.GetValue(_T("nhommau"), tmpStr);
		rptDetail->SetValue(_T("7"), tmpStr);

		rsl.GetValue(_T("macpmau"), tmpStr);
		rptDetail->SetValue(_T("8"), tmpStr);

		rsl.GetValue(_T("soluong"), tmpStr);
		rptDetail->SetValue(_T("9"), tmpStr);

		rsl.GetValue(_T("ngaysudung"), tmpStr);
		rptDetail->SetValue(_T("10"), tmpStr);

		rsl.GetValue(_T("ghichu"), tmpStr);
		rptDetail->SetValue(_T("11"), tmpStr);

		rsl.MoveNext();
	}

	rpt.PrintPreview();
	return 0;
}

void CHMS108BloodOrderDialog::OnPrintSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	BloodSheetListPrintItem();
}

int CHMS108BloodOrderDialog::OnItemListEditItem()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}