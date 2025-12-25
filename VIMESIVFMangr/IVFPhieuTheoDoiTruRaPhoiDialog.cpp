#include "IVFPhieuTheoDoiTruRaPhoiDialog.h"
#include "MainFrm.h"
/*static void _OnNgayChocHutChangeFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiTruRaPhoiDialog *)pWnd)->OnNgayChocHutChange();
} */
/*static void _OnNgayChocHutSetfocusFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiTruRaPhoiDialog *)pWnd)->OnNgayChocHutSetfocus();} */ 
/*static void _OnNgayChocHutKillfocusFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiTruRaPhoiDialog *)pWnd)->OnNgayChocHutKillfocus();
} */
static int _OnNgayChocHutCheckValueFnc(CWnd *pWnd){
	return ((CIVFPhieuTheoDoiTruRaPhoiDialog *)pWnd)->OnNgayChocHutCheckValue();
} 
/*static void _OnSoPhoiTruChangeFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiTruRaPhoiDialog *)pWnd)->OnSoPhoiTruChange();
} */
/*static void _OnSoPhoiTruSetfocusFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiTruRaPhoiDialog *)pWnd)->OnSoPhoiTruSetfocus();} */ 
/*static void _OnSoPhoiTruKillfocusFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiTruRaPhoiDialog *)pWnd)->OnSoPhoiTruKillfocus();
} */
static int _OnSoPhoiTruCheckValueFnc(CWnd *pWnd){
	return ((CIVFPhieuTheoDoiTruRaPhoiDialog *)pWnd)->OnSoPhoiTruCheckValue();
} 
/*static void _OnNguoiTruChangeFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiTruRaPhoiDialog *)pWnd)->OnNguoiTruChange();
} */
/*static void _OnNguoiTruSetfocusFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiTruRaPhoiDialog *)pWnd)->OnNguoiTruSetfocus();} */ 
/*static void _OnNguoiTruKillfocusFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiTruRaPhoiDialog *)pWnd)->OnNguoiTruKillfocus();
} */
static int _OnNguoiTruCheckValueFnc(CWnd *pWnd){
	return ((CIVFPhieuTheoDoiTruRaPhoiDialog *)pWnd)->OnNguoiTruCheckValue();
} 
/*static void _OnThungChangeFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiTruRaPhoiDialog *)pWnd)->OnThungChange();
} */
/*static void _OnThungSetfocusFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiTruRaPhoiDialog *)pWnd)->OnThungSetfocus();} */ 
/*static void _OnThungKillfocusFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiTruRaPhoiDialog *)pWnd)->OnThungKillfocus();
} */
static int _OnThungCheckValueFnc(CWnd *pWnd){
	return ((CIVFPhieuTheoDoiTruRaPhoiDialog *)pWnd)->OnThungCheckValue();
} 
static void _OnCassette1LabelSelectFnc(CWnd *pWnd){
	 ((CIVFPhieuTheoDoiTruRaPhoiDialog*)pWnd)->OnCassette1LabelSelect();
}
/*static void _OnCassette1ChangeFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiTruRaPhoiDialog *)pWnd)->OnCassette1Change();
} */
/*static void _OnCassette1SetfocusFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiTruRaPhoiDialog *)pWnd)->OnCassette1Setfocus();} */ 
/*static void _OnCassette1KillfocusFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiTruRaPhoiDialog *)pWnd)->OnCassette1Killfocus();
} */
static int _OnCassette1CheckValueFnc(CWnd *pWnd){
	return ((CIVFPhieuTheoDoiTruRaPhoiDialog *)pWnd)->OnCassette1CheckValue();
} 
/*static void _OnTop1ChangeFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiTruRaPhoiDialog *)pWnd)->OnTop1Change();
} */
/*static void _OnTop1SetfocusFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiTruRaPhoiDialog *)pWnd)->OnTop1Setfocus();} */ 
/*static void _OnTop1KillfocusFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiTruRaPhoiDialog *)pWnd)->OnTop1Killfocus();
} */
static int _OnTop1CheckValueFnc(CWnd *pWnd){
	return ((CIVFPhieuTheoDoiTruRaPhoiDialog *)pWnd)->OnTop1CheckValue();
} 
/*static void _OnTop2ChangeFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiTruRaPhoiDialog *)pWnd)->OnTop2Change();
} */
/*static void _OnTop2SetfocusFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiTruRaPhoiDialog *)pWnd)->OnTop2Setfocus();} */ 
/*static void _OnTop2KillfocusFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiTruRaPhoiDialog *)pWnd)->OnTop2Killfocus();
} */
static int _OnTop2CheckValueFnc(CWnd *pWnd){
	return ((CIVFPhieuTheoDoiTruRaPhoiDialog *)pWnd)->OnTop2CheckValue();
} 
/*static void _OnTop3ChangeFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiTruRaPhoiDialog *)pWnd)->OnTop3Change();
} */
/*static void _OnTop3SetfocusFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiTruRaPhoiDialog *)pWnd)->OnTop3Setfocus();} */ 
/*static void _OnTop3KillfocusFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiTruRaPhoiDialog *)pWnd)->OnTop3Killfocus();
} */
static int _OnTop3CheckValueFnc(CWnd *pWnd){
	return ((CIVFPhieuTheoDoiTruRaPhoiDialog *)pWnd)->OnTop3CheckValue();
} 
static void _OnCassette2LabelSelectFnc(CWnd *pWnd){
	 ((CIVFPhieuTheoDoiTruRaPhoiDialog*)pWnd)->OnCassette2LabelSelect();
}
/*static void _OnCassette2ChangeFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiTruRaPhoiDialog *)pWnd)->OnCassette2Change();
} */
/*static void _OnCassette2SetfocusFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiTruRaPhoiDialog *)pWnd)->OnCassette2Setfocus();} */ 
/*static void _OnCassette2KillfocusFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiTruRaPhoiDialog *)pWnd)->OnCassette2Killfocus();
} */
static int _OnCassette2CheckValueFnc(CWnd *pWnd){
	return ((CIVFPhieuTheoDoiTruRaPhoiDialog *)pWnd)->OnCassette2CheckValue();
} 
/*static void _OnCassette2Top1ChangeFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiTruRaPhoiDialog *)pWnd)->OnCassette2Top1Change();
} */
/*static void _OnCassette2Top1SetfocusFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiTruRaPhoiDialog *)pWnd)->OnCassette2Top1Setfocus();} */ 
/*static void _OnCassette2Top1KillfocusFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiTruRaPhoiDialog *)pWnd)->OnCassette2Top1Killfocus();
} */
static int _OnCassette2Top1CheckValueFnc(CWnd *pWnd){
	return ((CIVFPhieuTheoDoiTruRaPhoiDialog *)pWnd)->OnCassette2Top1CheckValue();
} 
/*static void _OnCassette2Top2ChangeFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiTruRaPhoiDialog *)pWnd)->OnCassette2Top2Change();
} */
/*static void _OnCassette2Top2SetfocusFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiTruRaPhoiDialog *)pWnd)->OnCassette2Top2Setfocus();} */ 
/*static void _OnCassette2Top2KillfocusFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiTruRaPhoiDialog *)pWnd)->OnCassette2Top2Killfocus();
} */
static int _OnCassette2Top2CheckValueFnc(CWnd *pWnd){
	return ((CIVFPhieuTheoDoiTruRaPhoiDialog *)pWnd)->OnCassette2Top2CheckValue();
} 
/*static void _OnCassette2Top3ChangeFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiTruRaPhoiDialog *)pWnd)->OnCassette2Top3Change();
} */
/*static void _OnCassette2Top3SetfocusFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiTruRaPhoiDialog *)pWnd)->OnCassette2Top3Setfocus();} */ 
/*static void _OnCassette2Top3KillfocusFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiTruRaPhoiDialog *)pWnd)->OnCassette2Top3Killfocus();
} */
static int _OnCassette2Top3CheckValueFnc(CWnd *pWnd){
	return ((CIVFPhieuTheoDoiTruRaPhoiDialog *)pWnd)->OnCassette2Top3CheckValue();
} 
/*static void _OnGiaChangeFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiTruRaPhoiDialog *)pWnd)->OnGiaChange();
} */
/*static void _OnGiaSetfocusFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiTruRaPhoiDialog *)pWnd)->OnGiaSetfocus();} */ 
/*static void _OnGiaKillfocusFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiTruRaPhoiDialog *)pWnd)->OnGiaKillfocus();
} */
static int _OnGiaCheckValueFnc(CWnd *pWnd){
	return ((CIVFPhieuTheoDoiTruRaPhoiDialog *)pWnd)->OnGiaCheckValue();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CIVFPhieuTheoDoiTruRaPhoiDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CIVFPhieuTheoDoiTruRaPhoiDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CIVFPhieuTheoDoiTruRaPhoiDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CIVFPhieuTheoDoiTruRaPhoiDialog*)pWnd)->OnListDeleteItem();
} 
static void _OnUpdateSelectFnc(CWnd *pWnd){
	CIVFPhieuTheoDoiTruRaPhoiDialog *pVw = (CIVFPhieuTheoDoiTruRaPhoiDialog *)pWnd;
	pVw->OnUpdateSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CIVFPhieuTheoDoiTruRaPhoiDialog *pVw = (CIVFPhieuTheoDoiTruRaPhoiDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CIVFPhieuTheoDoiTruRaPhoiDialog *pVw = (CIVFPhieuTheoDoiTruRaPhoiDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CIVFPhieuTheoDoiTruRaPhoiDialog *pVw = (CIVFPhieuTheoDoiTruRaPhoiDialog *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CIVFPhieuTheoDoiTruRaPhoiDialog *pVw = (CIVFPhieuTheoDoiTruRaPhoiDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddIVFPhieuTheoDoiTruRaPhoiDialogFnc(CWnd *pWnd){
	 return ((CIVFPhieuTheoDoiTruRaPhoiDialog*)pWnd)->OnAddIVFPhieuTheoDoiTruRaPhoiDialog();
} 
static int _OnEditIVFPhieuTheoDoiTruRaPhoiDialogFnc(CWnd *pWnd){
	 return ((CIVFPhieuTheoDoiTruRaPhoiDialog*)pWnd)->OnEditIVFPhieuTheoDoiTruRaPhoiDialog();
} 
static int _OnDeleteIVFPhieuTheoDoiTruRaPhoiDialogFnc(CWnd *pWnd){
	 return ((CIVFPhieuTheoDoiTruRaPhoiDialog*)pWnd)->OnDeleteIVFPhieuTheoDoiTruRaPhoiDialog();
} 
static int _OnSaveIVFPhieuTheoDoiTruRaPhoiDialogFnc(CWnd *pWnd){
	 return ((CIVFPhieuTheoDoiTruRaPhoiDialog*)pWnd)->OnSaveIVFPhieuTheoDoiTruRaPhoiDialog();
} 
static int _OnCancelIVFPhieuTheoDoiTruRaPhoiDialogFnc(CWnd *pWnd){
	 return ((CIVFPhieuTheoDoiTruRaPhoiDialog*)pWnd)->OnCancelIVFPhieuTheoDoiTruRaPhoiDialog();
} 
CIVFPhieuTheoDoiTruRaPhoiDialog::CIVFPhieuTheoDoiTruRaPhoiDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 845;
	m_nDlgHeight = 644;
	SetDefaultValues();
}
CIVFPhieuTheoDoiTruRaPhoiDialog::~CIVFPhieuTheoDoiTruRaPhoiDialog(){
}
void CIVFPhieuTheoDoiTruRaPhoiDialog::OnCreateComponents(){
	m_wndNgayChocHutLabel.Create(this, _T("Ngày chọc hút"), 5, 5, 105, 30);
	m_wndNgayChocHut.Create(this,110, 5, 210, 30); 
	m_wndSoPhoiTruLabel.Create(this, _T("Số phôi trữ"), 215, 5, 315, 30);
	m_wndSoPhoiTru.Create(this,320, 5, 420, 30); 
	m_wndNguoiTruLabel.Create(this, _T("Người trữ"), 425, 5, 525, 30);
	m_wndNguoiTru.Create(this,530, 5, 840, 30); 
	m_wndThungLabel.Create(this, _T("THÙNG"), 110, 35, 210, 60);
	m_wndThung.Create(this,215, 35, 315, 60); 
	m_wndCassette1Label.Create(this, _T("Cassette1"), 5, 65, 105, 90);
	m_wndCassette1.Create(this,110, 65, 210, 90); 
	m_wndTop1Label.Create(this, _T("Top"), 215, 65, 315, 90);
	m_wndTop1.Create(this,320, 65, 420, 90); 
	m_wndTop2Label.Create(this, _T("Top"), 215, 95, 315, 120);
	m_wndTop2.Create(this,320, 95, 420, 120); 
	m_wndTop3Label.Create(this, _T("Top"), 215, 125, 315, 150);
	m_wndTop3.Create(this,320, 125, 420, 150); 
	m_wndCassette2Label.Create(this, _T("Cassette2"), 425, 65, 525, 90);
	m_wndCassette2.Create(this,530, 65, 630, 90); 
	m_wndCassette2Top1Label.Create(this, _T("Top"), 635, 65, 735, 90);
	m_wndCassette2Top1.Create(this,740, 65, 840, 90); 
	m_wndCassette2Top2Label.Create(this, _T("Top"), 635, 95, 735, 120);
	m_wndCassette2Top2.Create(this,740, 95, 840, 120); 
	m_wndCassette2Top3Label.Create(this, _T("Top"), 635, 125, 735, 150);
	m_wndCassette2Top3.Create(this,740, 125, 840, 150); 
	m_wndGiaLabel.Create(this, _T("GIÁ"), 320, 35, 420, 60);
	m_wndGia.Create(this,425, 35, 525, 60); 
	m_wndViTri.Create(this, _T("Vi tri"), 5, 35, 105, 60);
	m_wndList.Create(this,5, 155, 840, 571); 
	m_wndUpdate.Create(this, _T("&Update"), 420, 576, 500, 601);
	m_wndSave.Create(this, _T("&Save"), 505, 576, 585, 601);
	m_wndCancel.Create(this, _T("&Cancel"), 590, 576, 670, 601);
	m_wndPrint.Create(this, _T("&Print"), 675, 576, 755, 601);
	m_wndClose.Create(this, _T("&Close"), 760, 576, 840, 601);

}
void CIVFPhieuTheoDoiTruRaPhoiDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndNgayChocHut.SetMax(CDate(pMF->GetSysDate()));
	m_wndNgayChocHut.SetCheckValue(true);
	m_wndSoPhoiTru.SetLimitText(16);
	m_wndSoPhoiTru.SetCheckValue(true);
	m_wndNguoiTru.SetLimitText(35);
	m_wndNguoiTru.SetCheckValue(true);
	m_wndThung.SetLimitText(16);
	m_wndThung.SetCheckValue(true);
	m_wndCassette1.SetLimitText(16);
	m_wndCassette1.SetCheckValue(true);
	m_wndTop1.SetLimitText(35);
	m_wndTop1.SetCheckValue(true);
	m_wndTop2.SetLimitText(35);
	m_wndTop2.SetCheckValue(true);
	m_wndTop3.SetLimitText(35);
	m_wndTop3.SetCheckValue(true);
	m_wndCassette2.SetLimitText(16);
	m_wndCassette2.SetCheckValue(true);
	m_wndCassette2Top1.SetLimitText(35);
	m_wndCassette2Top1.SetCheckValue(true);
	m_wndCassette2Top2.SetLimitText(35);
	m_wndCassette2Top2.SetCheckValue(true);
	m_wndCassette2Top3.SetLimitText(35);
	m_wndCassette2Top3.SetCheckValue(true);
	m_wndGia.SetLimitText(16);
	m_wndGia.SetCheckValue(true);


	m_wndList.InsertColumn(0, _T("Diễn giải"), CFMT_TEXT, 150);
	m_wndList.InsertColumn(1, _T("Trữ phôi"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(2, _T("Rã phôi"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(3, _T("Nuôi cấy"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(4, _T("Nhận xét"), CFMT_TEXT, 300);

}
void CIVFPhieuTheoDoiTruRaPhoiDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndNgayChocHut.SetEvent(WE_CHANGE, _OnNgayChocHutChangeFnc);
	//m_wndNgayChocHut.SetEvent(WE_SETFOCUS, _OnNgayChocHutSetfocusFnc);
	//m_wndNgayChocHut.SetEvent(WE_KILLFOCUS, _OnNgayChocHutKillfocusFnc);
	m_wndNgayChocHut.SetEvent(WE_CHECKVALUE, _OnNgayChocHutCheckValueFnc);
	//m_wndSoPhoiTru.SetEvent(WE_CHANGE, _OnSoPhoiTruChangeFnc);
	//m_wndSoPhoiTru.SetEvent(WE_SETFOCUS, _OnSoPhoiTruSetfocusFnc);
	//m_wndSoPhoiTru.SetEvent(WE_KILLFOCUS, _OnSoPhoiTruKillfocusFnc);
	m_wndSoPhoiTru.SetEvent(WE_CHECKVALUE, _OnSoPhoiTruCheckValueFnc);
	//m_wndNguoiTru.SetEvent(WE_CHANGE, _OnNguoiTruChangeFnc);
	//m_wndNguoiTru.SetEvent(WE_SETFOCUS, _OnNguoiTruSetfocusFnc);
	//m_wndNguoiTru.SetEvent(WE_KILLFOCUS, _OnNguoiTruKillfocusFnc);
	m_wndNguoiTru.SetEvent(WE_CHECKVALUE, _OnNguoiTruCheckValueFnc);
	//m_wndThung.SetEvent(WE_CHANGE, _OnThungChangeFnc);
	//m_wndThung.SetEvent(WE_SETFOCUS, _OnThungSetfocusFnc);
	//m_wndThung.SetEvent(WE_KILLFOCUS, _OnThungKillfocusFnc);
	m_wndThung.SetEvent(WE_CHECKVALUE, _OnThungCheckValueFnc);
	m_wndCassette1Label.SetEvent(WE_CLICK, _OnCassette1LabelSelectFnc);
	//m_wndCassette1.SetEvent(WE_CHANGE, _OnCassette1ChangeFnc);
	//m_wndCassette1.SetEvent(WE_SETFOCUS, _OnCassette1SetfocusFnc);
	//m_wndCassette1.SetEvent(WE_KILLFOCUS, _OnCassette1KillfocusFnc);
	m_wndCassette1.SetEvent(WE_CHECKVALUE, _OnCassette1CheckValueFnc);
	//m_wndTop1.SetEvent(WE_CHANGE, _OnTop1ChangeFnc);
	//m_wndTop1.SetEvent(WE_SETFOCUS, _OnTop1SetfocusFnc);
	//m_wndTop1.SetEvent(WE_KILLFOCUS, _OnTop1KillfocusFnc);
	m_wndTop1.SetEvent(WE_CHECKVALUE, _OnTop1CheckValueFnc);
	//m_wndTop2.SetEvent(WE_CHANGE, _OnTop2ChangeFnc);
	//m_wndTop2.SetEvent(WE_SETFOCUS, _OnTop2SetfocusFnc);
	//m_wndTop2.SetEvent(WE_KILLFOCUS, _OnTop2KillfocusFnc);
	m_wndTop2.SetEvent(WE_CHECKVALUE, _OnTop2CheckValueFnc);
	//m_wndTop3.SetEvent(WE_CHANGE, _OnTop3ChangeFnc);
	//m_wndTop3.SetEvent(WE_SETFOCUS, _OnTop3SetfocusFnc);
	//m_wndTop3.SetEvent(WE_KILLFOCUS, _OnTop3KillfocusFnc);
	m_wndTop3.SetEvent(WE_CHECKVALUE, _OnTop3CheckValueFnc);
	m_wndCassette2Label.SetEvent(WE_CLICK, _OnCassette2LabelSelectFnc);
	//m_wndCassette2.SetEvent(WE_CHANGE, _OnCassette2ChangeFnc);
	//m_wndCassette2.SetEvent(WE_SETFOCUS, _OnCassette2SetfocusFnc);
	//m_wndCassette2.SetEvent(WE_KILLFOCUS, _OnCassette2KillfocusFnc);
	m_wndCassette2.SetEvent(WE_CHECKVALUE, _OnCassette2CheckValueFnc);
	//m_wndCassette2Top1.SetEvent(WE_CHANGE, _OnCassette2Top1ChangeFnc);
	//m_wndCassette2Top1.SetEvent(WE_SETFOCUS, _OnCassette2Top1SetfocusFnc);
	//m_wndCassette2Top1.SetEvent(WE_KILLFOCUS, _OnCassette2Top1KillfocusFnc);
	m_wndCassette2Top1.SetEvent(WE_CHECKVALUE, _OnCassette2Top1CheckValueFnc);
	//m_wndCassette2Top2.SetEvent(WE_CHANGE, _OnCassette2Top2ChangeFnc);
	//m_wndCassette2Top2.SetEvent(WE_SETFOCUS, _OnCassette2Top2SetfocusFnc);
	//m_wndCassette2Top2.SetEvent(WE_KILLFOCUS, _OnCassette2Top2KillfocusFnc);
	m_wndCassette2Top2.SetEvent(WE_CHECKVALUE, _OnCassette2Top2CheckValueFnc);
	//m_wndCassette2Top3.SetEvent(WE_CHANGE, _OnCassette2Top3ChangeFnc);
	//m_wndCassette2Top3.SetEvent(WE_SETFOCUS, _OnCassette2Top3SetfocusFnc);
	//m_wndCassette2Top3.SetEvent(WE_KILLFOCUS, _OnCassette2Top3KillfocusFnc);
	m_wndCassette2Top3.SetEvent(WE_CHECKVALUE, _OnCassette2Top3CheckValueFnc);
	//m_wndGia.SetEvent(WE_CHANGE, _OnGiaChangeFnc);
	//m_wndGia.SetEvent(WE_SETFOCUS, _OnGiaSetfocusFnc);
	//m_wndGia.SetEvent(WE_KILLFOCUS, _OnGiaKillfocusFnc);
	m_wndGia.SetEvent(WE_CHECKVALUE, _OnGiaCheckValueFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndUpdate.SetEvent(WE_CLICK, _OnUpdateSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_NONE);

}
void CIVFPhieuTheoDoiTruRaPhoiDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndNgayChocHut.GetDlgCtrlID(), m_szNgayChocHut);
	DDX_Text(pDX, m_wndSoPhoiTru.GetDlgCtrlID(), m_nSoPhoiTru);
	DDX_Text(pDX, m_wndNguoiTru.GetDlgCtrlID(), m_szNguoiTru);
	DDX_Text(pDX, m_wndThung.GetDlgCtrlID(), m_nThung);
	DDX_Check(pDX, m_wndCassette1Label.GetDlgCtrlID(), m_bCassette1Label);
	DDX_Text(pDX, m_wndCassette1.GetDlgCtrlID(), m_szCassette1);
	DDX_Text(pDX, m_wndTop1.GetDlgCtrlID(), m_szTop1);
	DDX_Text(pDX, m_wndTop2.GetDlgCtrlID(), m_szTop2);
	DDX_Text(pDX, m_wndTop3.GetDlgCtrlID(), m_szTop3);
	DDX_Check(pDX, m_wndCassette2Label.GetDlgCtrlID(), m_bCassette2Label);
	DDX_Text(pDX, m_wndCassette2.GetDlgCtrlID(), m_szCassette2);
	DDX_Text(pDX, m_wndCassette2Top1.GetDlgCtrlID(), m_szCassette2Top1);
	DDX_Text(pDX, m_wndCassette2Top2.GetDlgCtrlID(), m_szCassette2Top2);
	DDX_Text(pDX, m_wndCassette2Top3.GetDlgCtrlID(), m_szCassette2Top3);
	DDX_Text(pDX, m_wndGia.GetDlgCtrlID(), m_nGia);

}
void CIVFPhieuTheoDoiTruRaPhoiDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("NgayChocHut")] =  m_szNgayChocHut;
	m_jData[_T("SoPhoiTru")] =  m_nSoPhoiTru;
	m_jData[_T("NguoiTru")] =  m_szNguoiTru;
	m_jData[_T("Thung")] =  m_nThung;
	m_jData[_T("Cassette1Label")] =  m_bCassette1Label;
	m_jData[_T("Cassette1")] =  m_szCassette1;
	m_jData[_T("Top1")] =  m_szTop1;
	m_jData[_T("Top2")] =  m_szTop2;
	m_jData[_T("Top3")] =  m_szTop3;
	m_jData[_T("Cassette2Label")] =  m_bCassette2Label;
	m_jData[_T("Cassette2")] =  m_szCassette2;
	m_jData[_T("Cassette2Top1")] =  m_szCassette2Top1;
	m_jData[_T("Cassette2Top2")] =  m_szCassette2Top2;
	m_jData[_T("Cassette2Top3")] =  m_szCassette2Top3;
	m_jData[_T("Gia")] =  m_nGia;
	}
	else
	{
			
	m_jData[_T("NgayChocHut")].GetValue(m_szNgayChocHut);
	m_jData[_T("SoPhoiTru")].GetValue(m_nSoPhoiTru);
	m_jData[_T("NguoiTru")].GetValue(m_szNguoiTru);
	m_jData[_T("Thung")].GetValue(m_nThung);
	m_jData[_T("Cassette1Label")].GetValue(m_bCassette1Label);
	m_jData[_T("Cassette1")].GetValue(m_szCassette1);
	m_jData[_T("Top1")].GetValue(m_szTop1);
	m_jData[_T("Top2")].GetValue(m_szTop2);
	m_jData[_T("Top3")].GetValue(m_szTop3);
	m_jData[_T("Cassette2Label")].GetValue(m_bCassette2Label);
	m_jData[_T("Cassette2")].GetValue(m_szCassette2);
	m_jData[_T("Cassette2Top1")].GetValue(m_szCassette2Top1);
	m_jData[_T("Cassette2Top2")].GetValue(m_szCassette2Top2);
	m_jData[_T("Cassette2Top3")].GetValue(m_szCassette2Top3);
	m_jData[_T("Gia")].GetValue(m_nGia);
	}

}
void CIVFPhieuTheoDoiTruRaPhoiDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CIVFPhieuTheoDoiTruRaPhoiDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CIVFPhieuTheoDoiTruRaPhoiDialog::SetDefaultValues(){

	m_szNgayChocHut.Empty();
	m_nSoPhoiTru=0;
	m_szNguoiTru.Empty();
	m_nThung=0;
	m_bCassette1Label=FALSE;
	m_szCassette1.Empty();
	m_szTop1.Empty();
	m_szTop2.Empty();
	m_szTop3.Empty();
	m_bCassette2Label=FALSE;
	m_szCassette2.Empty();
	m_szCassette2Top1.Empty();
	m_szCassette2Top2.Empty();
	m_szCassette2Top3.Empty();
	m_nGia=0;

}
int CIVFPhieuTheoDoiTruRaPhoiDialog::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 3, 4, -1);
 			SetDefaultValues();
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 3, 4, -1);
 			break;
 		case VM_VIEW: 
 			EnableControls(FALSE);
 			EnableButtons(FALSE, 3, 4, -1);
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
/*void CIVFPhieuTheoDoiTruRaPhoiDialog::OnNgayChocHutChange(){
	
} */
/*void CIVFPhieuTheoDoiTruRaPhoiDialog::OnNgayChocHutSetfocus(){
	
} */
/*void CIVFPhieuTheoDoiTruRaPhoiDialog::OnNgayChocHutKillfocus(){
	
} */
int CIVFPhieuTheoDoiTruRaPhoiDialog::OnNgayChocHutCheckValue(){
	return 0;
} 
/*void CIVFPhieuTheoDoiTruRaPhoiDialog::OnSoPhoiTruChange(){
	
} */
/*void CIVFPhieuTheoDoiTruRaPhoiDialog::OnSoPhoiTruSetfocus(){
	
} */
/*void CIVFPhieuTheoDoiTruRaPhoiDialog::OnSoPhoiTruKillfocus(){
	
} */
int CIVFPhieuTheoDoiTruRaPhoiDialog::OnSoPhoiTruCheckValue(){
	return 0;
} 
/*void CIVFPhieuTheoDoiTruRaPhoiDialog::OnNguoiTruChange(){
	
} */
/*void CIVFPhieuTheoDoiTruRaPhoiDialog::OnNguoiTruSetfocus(){
	
} */
/*void CIVFPhieuTheoDoiTruRaPhoiDialog::OnNguoiTruKillfocus(){
	
} */
int CIVFPhieuTheoDoiTruRaPhoiDialog::OnNguoiTruCheckValue(){
	return 0;
} 
/*void CIVFPhieuTheoDoiTruRaPhoiDialog::OnThungChange(){
	
} */
/*void CIVFPhieuTheoDoiTruRaPhoiDialog::OnThungSetfocus(){
	
} */
/*void CIVFPhieuTheoDoiTruRaPhoiDialog::OnThungKillfocus(){
	
} */
int CIVFPhieuTheoDoiTruRaPhoiDialog::OnThungCheckValue(){
	return 0;
} 
	void CIVFPhieuTheoDoiTruRaPhoiDialog::OnCassette1LabelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
/*void CIVFPhieuTheoDoiTruRaPhoiDialog::OnCassette1Change(){
	
} */
/*void CIVFPhieuTheoDoiTruRaPhoiDialog::OnCassette1Setfocus(){
	
} */
/*void CIVFPhieuTheoDoiTruRaPhoiDialog::OnCassette1Killfocus(){
	
} */
int CIVFPhieuTheoDoiTruRaPhoiDialog::OnCassette1CheckValue(){
	return 0;
} 
/*void CIVFPhieuTheoDoiTruRaPhoiDialog::OnTop1Change(){
	
} */
/*void CIVFPhieuTheoDoiTruRaPhoiDialog::OnTop1Setfocus(){
	
} */
/*void CIVFPhieuTheoDoiTruRaPhoiDialog::OnTop1Killfocus(){
	
} */
int CIVFPhieuTheoDoiTruRaPhoiDialog::OnTop1CheckValue(){
	return 0;
} 
/*void CIVFPhieuTheoDoiTruRaPhoiDialog::OnTop2Change(){
	
} */
/*void CIVFPhieuTheoDoiTruRaPhoiDialog::OnTop2Setfocus(){
	
} */
/*void CIVFPhieuTheoDoiTruRaPhoiDialog::OnTop2Killfocus(){
	
} */
int CIVFPhieuTheoDoiTruRaPhoiDialog::OnTop2CheckValue(){
	return 0;
} 
/*void CIVFPhieuTheoDoiTruRaPhoiDialog::OnTop3Change(){
	
} */
/*void CIVFPhieuTheoDoiTruRaPhoiDialog::OnTop3Setfocus(){
	
} */
/*void CIVFPhieuTheoDoiTruRaPhoiDialog::OnTop3Killfocus(){
	
} */
int CIVFPhieuTheoDoiTruRaPhoiDialog::OnTop3CheckValue(){
	return 0;
} 
	void CIVFPhieuTheoDoiTruRaPhoiDialog::OnCassette2LabelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
/*void CIVFPhieuTheoDoiTruRaPhoiDialog::OnCassette2Change(){
	
} */
/*void CIVFPhieuTheoDoiTruRaPhoiDialog::OnCassette2Setfocus(){
	
} */
/*void CIVFPhieuTheoDoiTruRaPhoiDialog::OnCassette2Killfocus(){
	
} */
int CIVFPhieuTheoDoiTruRaPhoiDialog::OnCassette2CheckValue(){
	return 0;
} 
/*void CIVFPhieuTheoDoiTruRaPhoiDialog::OnCassette2Top1Change(){
	
} */
/*void CIVFPhieuTheoDoiTruRaPhoiDialog::OnCassette2Top1Setfocus(){
	
} */
/*void CIVFPhieuTheoDoiTruRaPhoiDialog::OnCassette2Top1Killfocus(){
	
} */
int CIVFPhieuTheoDoiTruRaPhoiDialog::OnCassette2Top1CheckValue(){
	return 0;
} 
/*void CIVFPhieuTheoDoiTruRaPhoiDialog::OnCassette2Top2Change(){
	
} */
/*void CIVFPhieuTheoDoiTruRaPhoiDialog::OnCassette2Top2Setfocus(){
	
} */
/*void CIVFPhieuTheoDoiTruRaPhoiDialog::OnCassette2Top2Killfocus(){
	
} */
int CIVFPhieuTheoDoiTruRaPhoiDialog::OnCassette2Top2CheckValue(){
	return 0;
} 
/*void CIVFPhieuTheoDoiTruRaPhoiDialog::OnCassette2Top3Change(){
	
} */
/*void CIVFPhieuTheoDoiTruRaPhoiDialog::OnCassette2Top3Setfocus(){
	
} */
/*void CIVFPhieuTheoDoiTruRaPhoiDialog::OnCassette2Top3Killfocus(){
	
} */
int CIVFPhieuTheoDoiTruRaPhoiDialog::OnCassette2Top3CheckValue(){
	return 0;
} 
/*void CIVFPhieuTheoDoiTruRaPhoiDialog::OnGiaChange(){
	
} */
/*void CIVFPhieuTheoDoiTruRaPhoiDialog::OnGiaSetfocus(){
	
} */
/*void CIVFPhieuTheoDoiTruRaPhoiDialog::OnGiaKillfocus(){
	
} */
int CIVFPhieuTheoDoiTruRaPhoiDialog::OnGiaCheckValue(){
	return 0;
} 
void CIVFPhieuTheoDoiTruRaPhoiDialog::OnListDblClick(){
	
} 
void CIVFPhieuTheoDoiTruRaPhoiDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CIVFPhieuTheoDoiTruRaPhoiDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CIVFPhieuTheoDoiTruRaPhoiDialog::OnListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("Diengiai")), 
			rs.GetValue(_T("Truphoi")), 
			rs.GetValue(_T("Raphoi")), 
			rs.GetValue(_T("Nuoicay")), 
			rs.GetValue(_T("Nhanxet")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CIVFPhieuTheoDoiTruRaPhoiDialog::OnUpdateSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFPhieuTheoDoiTruRaPhoiDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFPhieuTheoDoiTruRaPhoiDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFPhieuTheoDoiTruRaPhoiDialog::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFPhieuTheoDoiTruRaPhoiDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CIVFPhieuTheoDoiTruRaPhoiDialog::OnAddIVFPhieuTheoDoiTruRaPhoiDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CIVFPhieuTheoDoiTruRaPhoiDialog::OnEditIVFPhieuTheoDoiTruRaPhoiDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CIVFPhieuTheoDoiTruRaPhoiDialog::OnDeleteIVFPhieuTheoDoiTruRaPhoiDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
 	szSQL.Format(_T("DELETE FROM  WHERE  AND") );
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
 		SetMode(VM_NONE);
 		OnCancelIVFPhieuTheoDoiTruRaPhoiDialog();
 	}
	return 0;
}
int CIVFPhieuTheoDoiTruRaPhoiDialog::OnSaveIVFPhieuTheoDoiTruRaPhoiDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
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
 		//OnIVFPhieuTheoDoiTruRaPhoiDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CIVFPhieuTheoDoiTruRaPhoiDialog::OnCancelIVFPhieuTheoDoiTruRaPhoiDialog(){
 	if(GetMode() == VM_EDIT)
 	{
 		SetMode(VM_VIEW);
 	} 
 	else 
 	{
 		SetMode(VM_NONE);
 	} 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	return 0;
} 
int CIVFPhieuTheoDoiTruRaPhoiDialog::OnIVFPhieuTheoDoiTruRaPhoiDialogListLoadData(){
	return 0;
}
