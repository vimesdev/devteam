#include "TMBenhAn.h"
#include "MainFrm.h"
#include "HMSReportForms/PrintForms.h"

/*static void _OnvaolucChangeFnc(CWnd *pWnd){
	((CTMBenhAn *)pWnd)->OnvaolucChange();
} */
/*static void _OnvaolucSetfocusFnc(CWnd *pWnd){
	((CTMBenhAn *)pWnd)->OnvaolucSetfocus();} */ 
/*static void _OnvaolucKillfocusFnc(CWnd *pWnd){
	((CTMBenhAn *)pWnd)->OnvaolucKillfocus();
} */
static int _OnvaolucCheckValueFnc(CWnd *pWnd){
	return ((CTMBenhAn *)pWnd)->OnvaolucCheckValue();
} 
/*static void _OnvaongayChangeFnc(CWnd *pWnd){
	((CTMBenhAn *)pWnd)->OnvaongayChange();
} */
/*static void _OnvaongaySetfocusFnc(CWnd *pWnd){
	((CTMBenhAn *)pWnd)->OnvaongaySetfocus();} */ 
/*static void _OnvaongayKillfocusFnc(CWnd *pWnd){
	((CTMBenhAn *)pWnd)->OnvaongayKillfocus();
} */
static int _OnvaongayCheckValueFnc(CWnd *pWnd){
	return ((CTMBenhAn *)pWnd)->OnvaongayCheckValue();
} 
/*static void _OnlidoChangeFnc(CWnd *pWnd){
	((CTMBenhAn *)pWnd)->OnlidoChange();
} */
/*static void _OnlidoSetfocusFnc(CWnd *pWnd){
	((CTMBenhAn *)pWnd)->OnlidoSetfocus();} */ 
/*static void _OnlidoKillfocusFnc(CWnd *pWnd){
	((CTMBenhAn *)pWnd)->OnlidoKillfocus();
} */
static int _OnlidoCheckValueFnc(CWnd *pWnd){
	return ((CTMBenhAn *)pWnd)->OnlidoCheckValue();
} 
/*static void _OnbenhsuChangeFnc(CWnd *pWnd){
	((CTMBenhAn *)pWnd)->OnbenhsuChange();
} */
/*static void _OnbenhsuSetfocusFnc(CWnd *pWnd){
	((CTMBenhAn *)pWnd)->OnbenhsuSetfocus();} */ 
/*static void _OnbenhsuKillfocusFnc(CWnd *pWnd){
	((CTMBenhAn *)pWnd)->OnbenhsuKillfocus();
} */
static int _OnbenhsuCheckValueFnc(CWnd *pWnd){
	return ((CTMBenhAn *)pWnd)->OnbenhsuCheckValue();
} 
/*static void _OnbthanChangeFnc(CWnd *pWnd){
	((CTMBenhAn *)pWnd)->OnbthanChange();
} */
/*static void _OnbthanSetfocusFnc(CWnd *pWnd){
	((CTMBenhAn *)pWnd)->OnbthanSetfocus();} */ 
/*static void _OnbthanKillfocusFnc(CWnd *pWnd){
	((CTMBenhAn *)pWnd)->OnbthanKillfocus();
} */
static int _OnbthanCheckValueFnc(CWnd *pWnd){
	return ((CTMBenhAn *)pWnd)->OnbthanCheckValue();
} 
/*static void _OngdinhChangeFnc(CWnd *pWnd){
	((CTMBenhAn *)pWnd)->OngdinhChange();
} */
/*static void _OngdinhSetfocusFnc(CWnd *pWnd){
	((CTMBenhAn *)pWnd)->OngdinhSetfocus();} */ 
/*static void _OngdinhKillfocusFnc(CWnd *pWnd){
	((CTMBenhAn *)pWnd)->OngdinhKillfocus();
} */
static int _OngdinhCheckValueFnc(CWnd *pWnd){
	return ((CTMBenhAn *)pWnd)->OngdinhCheckValue();
} 
/*static void _OntthanChangeFnc(CWnd *pWnd){
	((CTMBenhAn *)pWnd)->OntthanChange();
} */
/*static void _OntthanSetfocusFnc(CWnd *pWnd){
	((CTMBenhAn *)pWnd)->OntthanSetfocus();} */ 
/*static void _OntthanKillfocusFnc(CWnd *pWnd){
	((CTMBenhAn *)pWnd)->OntthanKillfocus();
} */
static int _OntthanCheckValueFnc(CWnd *pWnd){
	return ((CTMBenhAn *)pWnd)->OntthanCheckValue();
} 
/*static void _OnmachChangeFnc(CWnd *pWnd){
	((CTMBenhAn *)pWnd)->OnmachChange();
} */
/*static void _OnmachSetfocusFnc(CWnd *pWnd){
	((CTMBenhAn *)pWnd)->OnmachSetfocus();} */ 
/*static void _OnmachKillfocusFnc(CWnd *pWnd){
	((CTMBenhAn *)pWnd)->OnmachKillfocus();
} */
static int _OnmachCheckValueFnc(CWnd *pWnd){
	return ((CTMBenhAn *)pWnd)->OnmachCheckValue();
} 
/*static void _OnndoChangeFnc(CWnd *pWnd){
	((CTMBenhAn *)pWnd)->OnndoChange();
} */
/*static void _OnndoSetfocusFnc(CWnd *pWnd){
	((CTMBenhAn *)pWnd)->OnndoSetfocus();} */ 
/*static void _OnndoKillfocusFnc(CWnd *pWnd){
	((CTMBenhAn *)pWnd)->OnndoKillfocus();
} */
static int _OnndoCheckValueFnc(CWnd *pWnd){
	return ((CTMBenhAn *)pWnd)->OnndoCheckValue();
} 
/*static void _OnhapChangeFnc(CWnd *pWnd){
	((CTMBenhAn *)pWnd)->OnhapChange();
} */
/*static void _OnhapSetfocusFnc(CWnd *pWnd){
	((CTMBenhAn *)pWnd)->OnhapSetfocus();} */ 
/*static void _OnhapKillfocusFnc(CWnd *pWnd){
	((CTMBenhAn *)pWnd)->OnhapKillfocus();
} */
static int _OnhapCheckValueFnc(CWnd *pWnd){
	return ((CTMBenhAn *)pWnd)->OnhapCheckValue();
} 
/*static void _OnnthoChangeFnc(CWnd *pWnd){
	((CTMBenhAn *)pWnd)->OnnthoChange();
} */
/*static void _OnnthoSetfocusFnc(CWnd *pWnd){
	((CTMBenhAn *)pWnd)->OnnthoSetfocus();} */ 
/*static void _OnnthoKillfocusFnc(CWnd *pWnd){
	((CTMBenhAn *)pWnd)->OnnthoKillfocus();
} */
static int _OnnthoCheckValueFnc(CWnd *pWnd){
	return ((CTMBenhAn *)pWnd)->OnnthoCheckValue();
} 
/*static void _OnccaoChangeFnc(CWnd *pWnd){
	((CTMBenhAn *)pWnd)->OnccaoChange();
} */
/*static void _OnccaoSetfocusFnc(CWnd *pWnd){
	((CTMBenhAn *)pWnd)->OnccaoSetfocus();} */ 
/*static void _OnccaoKillfocusFnc(CWnd *pWnd){
	((CTMBenhAn *)pWnd)->OnccaoKillfocus();
} */
static int _OnccaoCheckValueFnc(CWnd *pWnd){
	return ((CTMBenhAn *)pWnd)->OnccaoCheckValue();
} 
/*static void _OncnangChangeFnc(CWnd *pWnd){
	((CTMBenhAn *)pWnd)->OncnangChange();
} */
/*static void _OncnangSetfocusFnc(CWnd *pWnd){
	((CTMBenhAn *)pWnd)->OncnangSetfocus();} */ 
/*static void _OncnangKillfocusFnc(CWnd *pWnd){
	((CTMBenhAn *)pWnd)->OncnangKillfocus();
} */
static int _OncnangCheckValueFnc(CWnd *pWnd){
	return ((CTMBenhAn *)pWnd)->OncnangCheckValue();
} 
/*static void _OnthoanChangeFnc(CWnd *pWnd){
	((CTMBenhAn *)pWnd)->OnthoanChange();
} */
/*static void _OnthoanSetfocusFnc(CWnd *pWnd){
	((CTMBenhAn *)pWnd)->OnthoanSetfocus();} */ 
/*static void _OnthoanKillfocusFnc(CWnd *pWnd){
	((CTMBenhAn *)pWnd)->OnthoanKillfocus();
} */
static int _OnthoanCheckValueFnc(CWnd *pWnd){
	return ((CTMBenhAn *)pWnd)->OnthoanCheckValue();
} 
/*static void _OnhhapChangeFnc(CWnd *pWnd){
	((CTMBenhAn *)pWnd)->OnhhapChange();
} */
/*static void _OnhhapSetfocusFnc(CWnd *pWnd){
	((CTMBenhAn *)pWnd)->OnhhapSetfocus();} */ 
/*static void _OnhhapKillfocusFnc(CWnd *pWnd){
	((CTMBenhAn *)pWnd)->OnhhapKillfocus();
} */
static int _OnhhapCheckValueFnc(CWnd *pWnd){
	return ((CTMBenhAn *)pWnd)->OnhhapCheckValue();
} 
/*static void _OnthoaChangeFnc(CWnd *pWnd){
	((CTMBenhAn *)pWnd)->OnthoaChange();
} */
/*static void _OnthoaSetfocusFnc(CWnd *pWnd){
	((CTMBenhAn *)pWnd)->OnthoaSetfocus();} */ 
/*static void _OnthoaKillfocusFnc(CWnd *pWnd){
	((CTMBenhAn *)pWnd)->OnthoaKillfocus();
} */
static int _OnthoaCheckValueFnc(CWnd *pWnd){
	return ((CTMBenhAn *)pWnd)->OnthoaCheckValue();
} 
/*static void _OntnieuChangeFnc(CWnd *pWnd){
	((CTMBenhAn *)pWnd)->OntnieuChange();
} */
/*static void _OntnieuSetfocusFnc(CWnd *pWnd){
	((CTMBenhAn *)pWnd)->OntnieuSetfocus();} */ 
/*static void _OntnieuKillfocusFnc(CWnd *pWnd){
	((CTMBenhAn *)pWnd)->OntnieuKillfocus();
} */
static int _OntnieuCheckValueFnc(CWnd *pWnd){
	return ((CTMBenhAn *)pWnd)->OntnieuCheckValue();
} 
/*static void _OnttkinhChangeFnc(CWnd *pWnd){
	((CTMBenhAn *)pWnd)->OnttkinhChange();
} */
/*static void _OnttkinhSetfocusFnc(CWnd *pWnd){
	((CTMBenhAn *)pWnd)->OnttkinhSetfocus();} */ 
/*static void _OnttkinhKillfocusFnc(CWnd *pWnd){
	((CTMBenhAn *)pWnd)->OnttkinhKillfocus();
} */
static int _OnttkinhCheckValueFnc(CWnd *pWnd){
	return ((CTMBenhAn *)pWnd)->OnttkinhCheckValue();
} 
/*static void _OncxkhopChangeFnc(CWnd *pWnd){
	((CTMBenhAn *)pWnd)->OncxkhopChange();
} */
/*static void _OncxkhopSetfocusFnc(CWnd *pWnd){
	((CTMBenhAn *)pWnd)->OncxkhopSetfocus();} */ 
/*static void _OncxkhopKillfocusFnc(CWnd *pWnd){
	((CTMBenhAn *)pWnd)->OncxkhopKillfocus();
} */
static int _OncxkhopCheckValueFnc(CWnd *pWnd){
	return ((CTMBenhAn *)pWnd)->OncxkhopCheckValue();
} 
/*static void _OnckkhacChangeFnc(CWnd *pWnd){
	((CTMBenhAn *)pWnd)->OnckkhacChange();
} */
/*static void _OnckkhacSetfocusFnc(CWnd *pWnd){
	((CTMBenhAn *)pWnd)->OnckkhacSetfocus();} */ 
/*static void _OnckkhacKillfocusFnc(CWnd *pWnd){
	((CTMBenhAn *)pWnd)->OnckkhacKillfocus();
} */
static int _OnckkhacCheckValueFnc(CWnd *pWnd){
	return ((CTMBenhAn *)pWnd)->OnckkhacCheckValue();
} 
/*static void _OnblkhacChangeFnc(CWnd *pWnd){
	((CTMBenhAn *)pWnd)->OnblkhacChange();
} */
/*static void _OnblkhacSetfocusFnc(CWnd *pWnd){
	((CTMBenhAn *)pWnd)->OnblkhacSetfocus();} */ 
/*static void _OnblkhacKillfocusFnc(CWnd *pWnd){
	((CTMBenhAn *)pWnd)->OnblkhacKillfocus();
} */
static int _OnblkhacCheckValueFnc(CWnd *pWnd){
	return ((CTMBenhAn *)pWnd)->OnblkhacCheckValue();
} 
/*static void _OnxnghiemChangeFnc(CWnd *pWnd){
	((CTMBenhAn *)pWnd)->OnxnghiemChange();
} */
/*static void _OnxnghiemSetfocusFnc(CWnd *pWnd){
	((CTMBenhAn *)pWnd)->OnxnghiemSetfocus();} */ 
/*static void _OnxnghiemKillfocusFnc(CWnd *pWnd){
	((CTMBenhAn *)pWnd)->OnxnghiemKillfocus();
} */
static int _OnxnghiemCheckValueFnc(CWnd *pWnd){
	return ((CTMBenhAn *)pWnd)->OnxnghiemCheckValue();
} 
/*static void _OnbenhanChangeFnc(CWnd *pWnd){
	((CTMBenhAn *)pWnd)->OnbenhanChange();
} */
/*static void _OnbenhanSetfocusFnc(CWnd *pWnd){
	((CTMBenhAn *)pWnd)->OnbenhanSetfocus();} */ 
/*static void _OnbenhanKillfocusFnc(CWnd *pWnd){
	((CTMBenhAn *)pWnd)->OnbenhanKillfocus();
} */
static int _OnbenhanCheckValueFnc(CWnd *pWnd){
	return ((CTMBenhAn *)pWnd)->OnbenhanCheckValue();
} 
/*static void _OncdsbChangeFnc(CWnd *pWnd){
	((CTMBenhAn *)pWnd)->OncdsbChange();
} */
/*static void _OncdsbSetfocusFnc(CWnd *pWnd){
	((CTMBenhAn *)pWnd)->OncdsbSetfocus();} */ 
/*static void _OncdsbKillfocusFnc(CWnd *pWnd){
	((CTMBenhAn *)pWnd)->OncdsbKillfocus();
} */
static int _OncdsbCheckValueFnc(CWnd *pWnd){
	return ((CTMBenhAn *)pWnd)->OncdsbCheckValue();
} 
/*static void _OncdpbChangeFnc(CWnd *pWnd){
	((CTMBenhAn *)pWnd)->OncdpbChange();
} */
/*static void _OncdpbSetfocusFnc(CWnd *pWnd){
	((CTMBenhAn *)pWnd)->OncdpbSetfocus();} */ 
/*static void _OncdpbKillfocusFnc(CWnd *pWnd){
	((CTMBenhAn *)pWnd)->OncdpbKillfocus();
} */
static int _OncdpbCheckValueFnc(CWnd *pWnd){
	return ((CTMBenhAn *)pWnd)->OncdpbCheckValue();
} 
/*static void _OncdxdChangeFnc(CWnd *pWnd){
	((CTMBenhAn *)pWnd)->OncdxdChange();
} */
/*static void _OncdxdSetfocusFnc(CWnd *pWnd){
	((CTMBenhAn *)pWnd)->OncdxdSetfocus();} */ 
/*static void _OncdxdKillfocusFnc(CWnd *pWnd){
	((CTMBenhAn *)pWnd)->OncdxdKillfocus();
} */
static int _OncdxdCheckValueFnc(CWnd *pWnd){
	return ((CTMBenhAn *)pWnd)->OncdxdCheckValue();
} 
/*static void _OnkhxnChangeFnc(CWnd *pWnd){
	((CTMBenhAn *)pWnd)->OnkhxnChange();
} */
/*static void _OnkhxnSetfocusFnc(CWnd *pWnd){
	((CTMBenhAn *)pWnd)->OnkhxnSetfocus();} */ 
/*static void _OnkhxnKillfocusFnc(CWnd *pWnd){
	((CTMBenhAn *)pWnd)->OnkhxnKillfocus();
} */
static int _OnkhxnCheckValueFnc(CWnd *pWnd){
	return ((CTMBenhAn *)pWnd)->OnkhxnCheckValue();
} 
/*static void _OnkhdtChangeFnc(CWnd *pWnd){
	((CTMBenhAn *)pWnd)->OnkhdtChange();
} */
/*static void _OnkhdtSetfocusFnc(CWnd *pWnd){
	((CTMBenhAn *)pWnd)->OnkhdtSetfocus();} */ 
/*static void _OnkhdtKillfocusFnc(CWnd *pWnd){
	((CTMBenhAn *)pWnd)->OnkhdtKillfocus();
} */
static int _OnkhdtCheckValueFnc(CWnd *pWnd){
	return ((CTMBenhAn *)pWnd)->OnkhdtCheckValue();
} 
/*static void _OntluongChangeFnc(CWnd *pWnd){
	((CTMBenhAn *)pWnd)->OntluongChange();
} */
/*static void _OntluongSetfocusFnc(CWnd *pWnd){
	((CTMBenhAn *)pWnd)->OntluongSetfocus();} */ 
/*static void _OntluongKillfocusFnc(CWnd *pWnd){
	((CTMBenhAn *)pWnd)->OntluongKillfocus();
} */
static int _OntluongCheckValueFnc(CWnd *pWnd){
	return ((CTMBenhAn *)pWnd)->OntluongCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CTMBenhAn *pVw = (CTMBenhAn *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CTMBenhAn *pVw = (CTMBenhAn *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CTMBenhAn *pVw = (CTMBenhAn *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddTMBenhAnFnc(CWnd *pWnd){
	 return ((CTMBenhAn*)pWnd)->OnAddTMBenhAn();
} 
static int _OnEditTMBenhAnFnc(CWnd *pWnd){
	 return ((CTMBenhAn*)pWnd)->OnEditTMBenhAn();
} 
static int _OnDeleteTMBenhAnFnc(CWnd *pWnd){
	 return ((CTMBenhAn*)pWnd)->OnDeleteTMBenhAn();
} 
static int _OnSaveTMBenhAnFnc(CWnd *pWnd){
	 return ((CTMBenhAn*)pWnd)->OnSaveTMBenhAn();
} 
static int _OnCancelTMBenhAnFnc(CWnd *pWnd){
	 return ((CTMBenhAn*)pWnd)->OnCancelTMBenhAn();
} 
CTMBenhAn::CTMBenhAn(CWnd *pParent, int nMode, long nDocNo, CString szRecordNo)
{
	CGuiView::SetMode(nMode);
	m_nDocumentNo = nDocNo;
	m_szRecordNo = szRecordNo;
	m_nDlgWidth = 720;
	m_nDlgHeight = 600;
	SetDefaultValues();
}
CTMBenhAn::~CTMBenhAn(){
}
void CTMBenhAn::OnCreateComponents(){
	m_wndAllInformation.Create(this, _T("All Information"), 5, 5, 705, 25);
	m_wndphanhoibenhLabel.Create(this, _T("I. Phan hoi benh:"), 10, 30, 700, 50);
	m_wndphankhambenhLabel.Create(this, _T("II. Pham kham benh:"), 10, 535, 700, 555);
	m_wndphanketluanLabel.Create(this, _T("III. Phan ket luan:"), 10, 1580, 700, 1600);
	m_wndvaolucLabel.Create(this, _T("Benh an lam vao luc"), 15, 55, 175, 80);
	m_wndvaoluc.Create(this,180, 55, 330, 80); 
	m_wndvaongayLabel.Create(this, _T("Vao ngay thu"), 355, 55, 505, 80);
	m_wndvaongay.Create(this,510, 55, 590, 80); 
	m_wndvaongay2Label.Create(this, _T("cua benh"), 595, 55, 695, 80);
	m_wndlidoLabel.Create(this, _T("1. Ly do vao vien:"), 15, 85, 165, 110);
	m_wndlido.Create(this,15, 115, 695, 165, TRUE, FALSE, TRUE); 
	m_wndbenhsuLabel.Create(this, _T("2. Benh su:"), 15, 170, 165, 195);
	m_wndbenhsu.Create(this,15, 200, 695, 325, 1, 0, 1); 
	m_wndtiensuLabel.Create(this, _T("3. Tien su:"), 15, 330, 165, 355);
	m_wndbtLabel.Create(this, _T("+ Ban than:"), 15, 360, 165, 385);
	m_wndbthan.Create(this,15, 390, 695, 440, 1, 0, 1); 
	m_wndgdLabel.Create(this, _T("+ Gia dinh:"), 15, 445, 165, 470);
	m_wndgdinh.Create(this,15, 475, 695, 525, 1, 0, 1); 
	m_wndtthanLabel.Create(this, _T("1. Toan than:"), 15, 560, 165, 585);
	m_wndtthan.Create(this,15, 590, 695, 690, 1, 0, 1); 
	m_wndmachLabel.Create(this, _T("Mach"), 15, 695, 115, 720);
	m_wndmach.Create(this,120, 695, 220, 720); 
	m_wndndoLabel.Create(this, _T("Nhiet do"), 250, 695, 350, 720);
	m_wndndo.Create(this,355, 695, 455, 720); 
	m_wndhapLabel.Create(this, _T("Huyet ap"), 490, 695, 590, 720);
	m_wndhap.Create(this,595, 695, 695, 720); 
	m_wndnthoLabel.Create(this, _T("Nhip tho"), 15, 725, 115, 750);
	m_wndntho.Create(this,120, 725, 220, 750); 
	m_wndccaoLabel.Create(this, _T("Chieu cao"), 250, 725, 350, 750);
	m_wndccao.Create(this,355, 725, 455, 750); 
	m_wndcnangLabel.Create(this, _T("Can nang"), 490, 725, 590, 750);
	m_wndcnang.Create(this,595, 725, 695, 750); 
	m_wndcaccoquanLabel.Create(this, _T("2. Cac co quan:"), 15, 755, 165, 780);
	m_wndthoanLabel.Create(this, _T("+ Tuan hoan"), 15, 785, 165, 810);
	m_wndthoan.Create(this,15, 815, 695, 865, 1, 0, 1); 
	m_wndhhapLabel.Create(this, _T("+ Ho hap"), 15, 870, 165, 895);
	m_wndhhap.Create(this,15, 900, 695, 950, 1, 0, 1); 
	m_wndthoaLabel.Create(this, _T("+ Tieu hoa"), 15, 955, 165, 980);
	m_wndthoa.Create(this,15, 985, 695, 1035, 1, 0, 1); 
	m_wndtnieuLabel.Create(this, _T("+ Tiet nieu sinh duc"), 15, 1040, 165, 1065);
	m_wndtnieu.Create(this,15, 1070, 695, 1120, 1, 0, 1); 
	m_wndttkinhLabel.Create(this, _T("+ Tam - Than kinh"), 15, 1125, 165, 1150);
	m_wndttkinh.Create(this,15, 1155, 695, 1205, 1, 0, 1); 
	m_wndcxkhopLabel.Create(this, _T("+ Co xuong khop"), 15, 1210, 165, 1235);
	m_wndcxkhop.Create(this,15, 1240, 695, 1290, 1, 0, 1); 
	m_wndckkhacLabel.Create(this, _T("+ Cac khoa khac"), 15, 1295, 165, 1320);
	m_wndckkhac.Create(this,15, 1325, 695, 1375, 1, 0, 1); 
	m_wndblkhacLabel.Create(this, _T("+ Cac benh ly khac"), 15, 1380, 165, 1405);
	m_wndblkhac.Create(this,15, 1410, 695, 1460, 1, 0, 1); 
	m_wndxndalamLabel.Create(this, _T("3. Cac xet nghiem da lam:"), 15, 1465, 215, 1490);
	m_wndxnghiem.Create(this,15, 1495, 695, 1570, 1, 0, 1); 
	m_wndbenhanLabel.Create(this, _T("1. Tom tat benh an:"), 15, 1605, 165, 1630);
	m_wndbenhan.Create(this,15, 1635, 695, 1835, 1, 0, 1); 
	m_wndchandoanLabel.Create(this, _T("2. Chan doan:"), 15, 1840, 165, 1865);
	m_wndcdsbLabel.Create(this, _T("CD so bo:"), 15, 1870, 165, 1895);
	m_wndcdsb.Create(this,15, 1905, 695, 1980, 1, 0, 1); 
	m_wndcdpbLabel.Create(this, _T("CD phan biet"), 15, 1985, 165, 2010);
	m_wndcdpb.Create(this,15, 2015, 695, 2090, 1, 0, 1); 
	m_wndcdxdLabel.Create(this, _T("CD xac dinh"), 15, 2095, 165, 2120);
	m_wndcdxd.Create(this,15, 2125, 695, 2200, 1, 0, 1); 
	m_wndkhxnLabel.Create(this, _T("3. KH xet nghiem"), 15, 2205, 165, 2230);
	m_wndkhxn.Create(this,15, 2235, 695, 2310, 1, 0, 1); 
	m_wndkhdtLabel.Create(this, _T("4. KH dieu tri:"), 15, 2315, 165, 2340);
	m_wndkhdt.Create(this,15, 2345, 695, 2420, 1, 0, 1); 
	m_wndtluongLabel.Create(this, _T("5. Tien luong:"), 15, 2425, 165, 2450);
	m_wndtluong.Create(this,15, 2455, 695, 2530, 1, 0, 1); 


}
void CTMBenhAn::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
// 	m_wndvaoluc.SetMax(CDateTime(pMF->GetSysDateTime()));
// 	m_wndvaoluc.SetCheckValue(true);
// 	m_wndvaongay.SetLimitText(35);
// 	m_wndvaongay.SetCheckValue(true);
// 	m_wndlido.SetLimitText(35);
// 	m_wndlido.SetCheckValue(true);
// 	m_wndbenhsu.SetLimitText(35);
// 	m_wndbenhsu.SetCheckValue(true);
// 	m_wndbthan.SetLimitText(35);
// 	m_wndbthan.SetCheckValue(true);
// 	m_wndgdinh.SetLimitText(35);
// 	m_wndgdinh.SetCheckValue(true);
// 	m_wndtthan.SetLimitText(35);
// 	m_wndtthan.SetCheckValue(true);
// 	m_wndmach.SetLimitText(35);
// 	m_wndmach.SetCheckValue(true);
// 	m_wndndo.SetLimitText(35);
// 	m_wndndo.SetCheckValue(true);
// 	m_wndhap.SetLimitText(35);
// 	m_wndhap.SetCheckValue(true);
// 	m_wndntho.SetLimitText(35);
// 	m_wndntho.SetCheckValue(true);
// 	m_wndccao.SetLimitText(35);
// 	m_wndccao.SetCheckValue(true);
// 	m_wndcnang.SetLimitText(35);
// 	m_wndcnang.SetCheckValue(true);
// 	m_wndthoan.SetLimitText(35);
// 	m_wndthoan.SetCheckValue(true);
// 	m_wndhhap.SetLimitText(35);
// 	m_wndhhap.SetCheckValue(true);
// 	m_wndthoa.SetLimitText(35);
// 	m_wndthoa.SetCheckValue(true);
// 	m_wndtnieu.SetLimitText(35);
// 	m_wndtnieu.SetCheckValue(true);
// 	m_wndttkinh.SetLimitText(35);
// 	m_wndttkinh.SetCheckValue(true);
// 	m_wndcxkhop.SetLimitText(35);
// 	m_wndcxkhop.SetCheckValue(true);
// 	m_wndckkhac.SetLimitText(35);
// 	m_wndckkhac.SetCheckValue(true);
// 	m_wndblkhac.SetLimitText(35);
// 	m_wndblkhac.SetCheckValue(true);
// 	m_wndxnghiem.SetLimitText(35);
// 	m_wndxnghiem.SetCheckValue(true);
// 	m_wndbenhan.SetLimitText(35);
// 	m_wndbenhan.SetCheckValue(true);
// 	m_wndcdsb.SetLimitText(35);
// 	m_wndcdsb.SetCheckValue(true);
// 	m_wndcdpb.SetLimitText(35);
// 	m_wndcdpb.SetCheckValue(true);
// 	m_wndcdxd.SetLimitText(35);
// 	m_wndcdxd.SetCheckValue(true);
// 	m_wndkhxn.SetLimitText(35);
// 	m_wndkhxn.SetCheckValue(true);
// 	m_wndkhdt.SetLimitText(35);
// 	m_wndkhdt.SetCheckValue(true);
// 	m_wndtluong.SetLimitText(35);
// 	m_wndtluong.SetCheckValue(true);

}
void CTMBenhAn::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndvaoluc.SetEvent(WE_CHANGE, _OnvaolucChangeFnc);
	//m_wndvaoluc.SetEvent(WE_SETFOCUS, _OnvaolucSetfocusFnc);
	//m_wndvaoluc.SetEvent(WE_KILLFOCUS, _OnvaolucKillfocusFnc);
	m_wndvaoluc.SetEvent(WE_CHECKVALUE, _OnvaolucCheckValueFnc);
	//m_wndvaongay.SetEvent(WE_CHANGE, _OnvaongayChangeFnc);
	//m_wndvaongay.SetEvent(WE_SETFOCUS, _OnvaongaySetfocusFnc);
	//m_wndvaongay.SetEvent(WE_KILLFOCUS, _OnvaongayKillfocusFnc);
	m_wndvaongay.SetEvent(WE_CHECKVALUE, _OnvaongayCheckValueFnc);
	//m_wndlido.SetEvent(WE_CHANGE, _OnlidoChangeFnc);
	//m_wndlido.SetEvent(WE_SETFOCUS, _OnlidoSetfocusFnc);
	//m_wndlido.SetEvent(WE_KILLFOCUS, _OnlidoKillfocusFnc);
	m_wndlido.SetEvent(WE_CHECKVALUE, _OnlidoCheckValueFnc);
	//m_wndbenhsu.SetEvent(WE_CHANGE, _OnbenhsuChangeFnc);
	//m_wndbenhsu.SetEvent(WE_SETFOCUS, _OnbenhsuSetfocusFnc);
	//m_wndbenhsu.SetEvent(WE_KILLFOCUS, _OnbenhsuKillfocusFnc);
	m_wndbenhsu.SetEvent(WE_CHECKVALUE, _OnbenhsuCheckValueFnc);
	//m_wndbthan.SetEvent(WE_CHANGE, _OnbthanChangeFnc);
	//m_wndbthan.SetEvent(WE_SETFOCUS, _OnbthanSetfocusFnc);
	//m_wndbthan.SetEvent(WE_KILLFOCUS, _OnbthanKillfocusFnc);
	m_wndbthan.SetEvent(WE_CHECKVALUE, _OnbthanCheckValueFnc);
	//m_wndgdinh.SetEvent(WE_CHANGE, _OngdinhChangeFnc);
	//m_wndgdinh.SetEvent(WE_SETFOCUS, _OngdinhSetfocusFnc);
	//m_wndgdinh.SetEvent(WE_KILLFOCUS, _OngdinhKillfocusFnc);
	m_wndgdinh.SetEvent(WE_CHECKVALUE, _OngdinhCheckValueFnc);
	//m_wndtthan.SetEvent(WE_CHANGE, _OntthanChangeFnc);
	//m_wndtthan.SetEvent(WE_SETFOCUS, _OntthanSetfocusFnc);
	//m_wndtthan.SetEvent(WE_KILLFOCUS, _OntthanKillfocusFnc);
	m_wndtthan.SetEvent(WE_CHECKVALUE, _OntthanCheckValueFnc);
	//m_wndmach.SetEvent(WE_CHANGE, _OnmachChangeFnc);
	//m_wndmach.SetEvent(WE_SETFOCUS, _OnmachSetfocusFnc);
	//m_wndmach.SetEvent(WE_KILLFOCUS, _OnmachKillfocusFnc);
	m_wndmach.SetEvent(WE_CHECKVALUE, _OnmachCheckValueFnc);
	//m_wndndo.SetEvent(WE_CHANGE, _OnndoChangeFnc);
	//m_wndndo.SetEvent(WE_SETFOCUS, _OnndoSetfocusFnc);
	//m_wndndo.SetEvent(WE_KILLFOCUS, _OnndoKillfocusFnc);
	m_wndndo.SetEvent(WE_CHECKVALUE, _OnndoCheckValueFnc);
	//m_wndhap.SetEvent(WE_CHANGE, _OnhapChangeFnc);
	//m_wndhap.SetEvent(WE_SETFOCUS, _OnhapSetfocusFnc);
	//m_wndhap.SetEvent(WE_KILLFOCUS, _OnhapKillfocusFnc);
	m_wndhap.SetEvent(WE_CHECKVALUE, _OnhapCheckValueFnc);
	//m_wndntho.SetEvent(WE_CHANGE, _OnnthoChangeFnc);
	//m_wndntho.SetEvent(WE_SETFOCUS, _OnnthoSetfocusFnc);
	//m_wndntho.SetEvent(WE_KILLFOCUS, _OnnthoKillfocusFnc);
	m_wndntho.SetEvent(WE_CHECKVALUE, _OnnthoCheckValueFnc);
	//m_wndccao.SetEvent(WE_CHANGE, _OnccaoChangeFnc);
	//m_wndccao.SetEvent(WE_SETFOCUS, _OnccaoSetfocusFnc);
	//m_wndccao.SetEvent(WE_KILLFOCUS, _OnccaoKillfocusFnc);
	m_wndccao.SetEvent(WE_CHECKVALUE, _OnccaoCheckValueFnc);
	//m_wndcnang.SetEvent(WE_CHANGE, _OncnangChangeFnc);
	//m_wndcnang.SetEvent(WE_SETFOCUS, _OncnangSetfocusFnc);
	//m_wndcnang.SetEvent(WE_KILLFOCUS, _OncnangKillfocusFnc);
	m_wndcnang.SetEvent(WE_CHECKVALUE, _OncnangCheckValueFnc);
	//m_wndthoan.SetEvent(WE_CHANGE, _OnthoanChangeFnc);
	//m_wndthoan.SetEvent(WE_SETFOCUS, _OnthoanSetfocusFnc);
	//m_wndthoan.SetEvent(WE_KILLFOCUS, _OnthoanKillfocusFnc);
	m_wndthoan.SetEvent(WE_CHECKVALUE, _OnthoanCheckValueFnc);
	//m_wndhhap.SetEvent(WE_CHANGE, _OnhhapChangeFnc);
	//m_wndhhap.SetEvent(WE_SETFOCUS, _OnhhapSetfocusFnc);
	//m_wndhhap.SetEvent(WE_KILLFOCUS, _OnhhapKillfocusFnc);
	m_wndhhap.SetEvent(WE_CHECKVALUE, _OnhhapCheckValueFnc);
	//m_wndthoa.SetEvent(WE_CHANGE, _OnthoaChangeFnc);
	//m_wndthoa.SetEvent(WE_SETFOCUS, _OnthoaSetfocusFnc);
	//m_wndthoa.SetEvent(WE_KILLFOCUS, _OnthoaKillfocusFnc);
	m_wndthoa.SetEvent(WE_CHECKVALUE, _OnthoaCheckValueFnc);
	//m_wndtnieu.SetEvent(WE_CHANGE, _OntnieuChangeFnc);
	//m_wndtnieu.SetEvent(WE_SETFOCUS, _OntnieuSetfocusFnc);
	//m_wndtnieu.SetEvent(WE_KILLFOCUS, _OntnieuKillfocusFnc);
	m_wndtnieu.SetEvent(WE_CHECKVALUE, _OntnieuCheckValueFnc);
	//m_wndttkinh.SetEvent(WE_CHANGE, _OnttkinhChangeFnc);
	//m_wndttkinh.SetEvent(WE_SETFOCUS, _OnttkinhSetfocusFnc);
	//m_wndttkinh.SetEvent(WE_KILLFOCUS, _OnttkinhKillfocusFnc);
	m_wndttkinh.SetEvent(WE_CHECKVALUE, _OnttkinhCheckValueFnc);
	//m_wndcxkhop.SetEvent(WE_CHANGE, _OncxkhopChangeFnc);
	//m_wndcxkhop.SetEvent(WE_SETFOCUS, _OncxkhopSetfocusFnc);
	//m_wndcxkhop.SetEvent(WE_KILLFOCUS, _OncxkhopKillfocusFnc);
	m_wndcxkhop.SetEvent(WE_CHECKVALUE, _OncxkhopCheckValueFnc);
	//m_wndckkhac.SetEvent(WE_CHANGE, _OnckkhacChangeFnc);
	//m_wndckkhac.SetEvent(WE_SETFOCUS, _OnckkhacSetfocusFnc);
	//m_wndckkhac.SetEvent(WE_KILLFOCUS, _OnckkhacKillfocusFnc);
	m_wndckkhac.SetEvent(WE_CHECKVALUE, _OnckkhacCheckValueFnc);
	//m_wndblkhac.SetEvent(WE_CHANGE, _OnblkhacChangeFnc);
	//m_wndblkhac.SetEvent(WE_SETFOCUS, _OnblkhacSetfocusFnc);
	//m_wndblkhac.SetEvent(WE_KILLFOCUS, _OnblkhacKillfocusFnc);
	m_wndblkhac.SetEvent(WE_CHECKVALUE, _OnblkhacCheckValueFnc);
	//m_wndxnghiem.SetEvent(WE_CHANGE, _OnxnghiemChangeFnc);
	//m_wndxnghiem.SetEvent(WE_SETFOCUS, _OnxnghiemSetfocusFnc);
	//m_wndxnghiem.SetEvent(WE_KILLFOCUS, _OnxnghiemKillfocusFnc);
	m_wndxnghiem.SetEvent(WE_CHECKVALUE, _OnxnghiemCheckValueFnc);
	//m_wndbenhan.SetEvent(WE_CHANGE, _OnbenhanChangeFnc);
	//m_wndbenhan.SetEvent(WE_SETFOCUS, _OnbenhanSetfocusFnc);
	//m_wndbenhan.SetEvent(WE_KILLFOCUS, _OnbenhanKillfocusFnc);
	m_wndbenhan.SetEvent(WE_CHECKVALUE, _OnbenhanCheckValueFnc);
	//m_wndcdsb.SetEvent(WE_CHANGE, _OncdsbChangeFnc);
	//m_wndcdsb.SetEvent(WE_SETFOCUS, _OncdsbSetfocusFnc);
	//m_wndcdsb.SetEvent(WE_KILLFOCUS, _OncdsbKillfocusFnc);
	m_wndcdsb.SetEvent(WE_CHECKVALUE, _OncdsbCheckValueFnc);
	//m_wndcdpb.SetEvent(WE_CHANGE, _OncdpbChangeFnc);
	//m_wndcdpb.SetEvent(WE_SETFOCUS, _OncdpbSetfocusFnc);
	//m_wndcdpb.SetEvent(WE_KILLFOCUS, _OncdpbKillfocusFnc);
	m_wndcdpb.SetEvent(WE_CHECKVALUE, _OncdpbCheckValueFnc);
	//m_wndcdxd.SetEvent(WE_CHANGE, _OncdxdChangeFnc);
	//m_wndcdxd.SetEvent(WE_SETFOCUS, _OncdxdSetfocusFnc);
	//m_wndcdxd.SetEvent(WE_KILLFOCUS, _OncdxdKillfocusFnc);
	m_wndcdxd.SetEvent(WE_CHECKVALUE, _OncdxdCheckValueFnc);
	//m_wndkhxn.SetEvent(WE_CHANGE, _OnkhxnChangeFnc);
	//m_wndkhxn.SetEvent(WE_SETFOCUS, _OnkhxnSetfocusFnc);
	//m_wndkhxn.SetEvent(WE_KILLFOCUS, _OnkhxnKillfocusFnc);
	m_wndkhxn.SetEvent(WE_CHECKVALUE, _OnkhxnCheckValueFnc);
	//m_wndkhdt.SetEvent(WE_CHANGE, _OnkhdtChangeFnc);
	//m_wndkhdt.SetEvent(WE_SETFOCUS, _OnkhdtSetfocusFnc);
	//m_wndkhdt.SetEvent(WE_KILLFOCUS, _OnkhdtKillfocusFnc);
	m_wndkhdt.SetEvent(WE_CHECKVALUE, _OnkhdtCheckValueFnc);
	//m_wndtluong.SetEvent(WE_CHANGE, _OntluongChangeFnc);
	//m_wndtluong.SetEvent(WE_SETFOCUS, _OntluongSetfocusFnc);
	//m_wndtluong.SetEvent(WE_KILLFOCUS, _OntluongKillfocusFnc);
	m_wndtluong.SetEvent(WE_CHECKVALUE, _OntluongCheckValueFnc);
	int nMode = GetMode();
	if(nMode == VM_VIEW || nMode == VM_EDIT)
		GetDataToScreen();
	SetMode(nMode);

	SetScrollSizes(MM_TEXT, CSize(700, 2550));
}
void CTMBenhAn::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndvaoluc.GetDlgCtrlID(), m_szvaoluc);
	DDX_Text(pDX, m_wndvaongay.GetDlgCtrlID(), m_nvaongay);
	DDX_Text(pDX, m_wndlido.GetDlgCtrlID(), m_szlido);
	DDX_Text(pDX, m_wndbenhsu.GetDlgCtrlID(), m_szbenhsu);
	DDX_Text(pDX, m_wndbthan.GetDlgCtrlID(), m_szbthan);
	DDX_Text(pDX, m_wndgdinh.GetDlgCtrlID(), m_szgdinh);
	DDX_Text(pDX, m_wndtthan.GetDlgCtrlID(), m_sztthan);
	DDX_Text(pDX, m_wndmach.GetDlgCtrlID(), m_szmach);
	DDX_Text(pDX, m_wndndo.GetDlgCtrlID(), m_szndo);
	DDX_Text(pDX, m_wndhap.GetDlgCtrlID(), m_szhap);
	DDX_Text(pDX, m_wndntho.GetDlgCtrlID(), m_szntho);
	DDX_Text(pDX, m_wndccao.GetDlgCtrlID(), m_szccao);
	DDX_Text(pDX, m_wndcnang.GetDlgCtrlID(), m_szcnang);
	DDX_Text(pDX, m_wndthoan.GetDlgCtrlID(), m_szthoan);
	DDX_Text(pDX, m_wndhhap.GetDlgCtrlID(), m_szhhap);
	DDX_Text(pDX, m_wndthoa.GetDlgCtrlID(), m_szthoa);
	DDX_Text(pDX, m_wndtnieu.GetDlgCtrlID(), m_sztnieu);
	DDX_Text(pDX, m_wndttkinh.GetDlgCtrlID(), m_szttkinh);
	DDX_Text(pDX, m_wndcxkhop.GetDlgCtrlID(), m_szcxkhop);
	DDX_Text(pDX, m_wndckkhac.GetDlgCtrlID(), m_szckkhac);
	DDX_Text(pDX, m_wndblkhac.GetDlgCtrlID(), m_szblkhac);
	DDX_Text(pDX, m_wndxnghiem.GetDlgCtrlID(), m_szxnghiem);
	DDX_Text(pDX, m_wndbenhan.GetDlgCtrlID(), m_szbenhan);
	DDX_Text(pDX, m_wndcdsb.GetDlgCtrlID(), m_szcdsb);
	DDX_Text(pDX, m_wndcdpb.GetDlgCtrlID(), m_szcdpb);
	DDX_Text(pDX, m_wndcdxd.GetDlgCtrlID(), m_szcdxd);
	DDX_Text(pDX, m_wndkhxn.GetDlgCtrlID(), m_szkhxn);
	DDX_Text(pDX, m_wndkhdt.GetDlgCtrlID(), m_szkhdt);
	DDX_Text(pDX, m_wndtluong.GetDlgCtrlID(), m_sztluong);

}
void CTMBenhAn::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("vaoluc")] =  m_szvaoluc;
	m_jData[_T("vaongay")] =  m_nvaongay;
	m_jData[_T("lido")] =  m_szlido;
	m_jData[_T("benhsu")] =  m_szbenhsu;
	m_jData[_T("bthan")] =  m_szbthan;
	m_jData[_T("gdinh")] =  m_szgdinh;
	m_jData[_T("tthan")] =  m_sztthan;
	m_jData[_T("mach")] =  m_szmach;
	m_jData[_T("ndo")] =  m_szndo;
	m_jData[_T("hap")] =  m_szhap;
	m_jData[_T("ntho")] =  m_szntho;
	m_jData[_T("ccao")] =  m_szccao;
	m_jData[_T("cnang")] =  m_szcnang;
	m_jData[_T("thoan")] =  m_szthoan;
	m_jData[_T("hhap")] =  m_szhhap;
	m_jData[_T("thoa")] =  m_szthoa;
	m_jData[_T("tnieu")] =  m_sztnieu;
	m_jData[_T("ttkinh")] =  m_szttkinh;
	m_jData[_T("cxkhop")] =  m_szcxkhop;
	m_jData[_T("ckkhac")] =  m_szckkhac;
	m_jData[_T("blkhac")] =  m_szblkhac;
	m_jData[_T("xnghiem")] =  m_szxnghiem;
	m_jData[_T("benhan")] =  m_szbenhan;
	m_jData[_T("cdsb")] =  m_szcdsb;
	m_jData[_T("cdpb")] =  m_szcdpb;
	m_jData[_T("cdxd")] =  m_szcdxd;
	m_jData[_T("khxn")] =  m_szkhxn;
	m_jData[_T("khdt")] =  m_szkhdt;
	m_jData[_T("tluong")] =  m_sztluong;
	}
	else
	{
			
	m_jData[_T("vaoluc")].GetValue(m_szvaoluc);
	m_jData[_T("vaongay")].GetValue(m_nvaongay);
	m_jData[_T("lido")].GetValue(m_szlido);
	m_jData[_T("benhsu")].GetValue(m_szbenhsu);
	m_jData[_T("bthan")].GetValue(m_szbthan);
	m_jData[_T("gdinh")].GetValue(m_szgdinh);
	m_jData[_T("tthan")].GetValue(m_sztthan);
	m_jData[_T("mach")].GetValue(m_szmach);
	m_jData[_T("ndo")].GetValue(m_szndo);
	m_jData[_T("hap")].GetValue(m_szhap);
	m_jData[_T("ntho")].GetValue(m_szntho);
	m_jData[_T("ccao")].GetValue(m_szccao);
	m_jData[_T("cnang")].GetValue(m_szcnang);
	m_jData[_T("thoan")].GetValue(m_szthoan);
	m_jData[_T("hhap")].GetValue(m_szhhap);
	m_jData[_T("thoa")].GetValue(m_szthoa);
	m_jData[_T("tnieu")].GetValue(m_sztnieu);
	m_jData[_T("ttkinh")].GetValue(m_szttkinh);
	m_jData[_T("cxkhop")].GetValue(m_szcxkhop);
	m_jData[_T("ckkhac")].GetValue(m_szckkhac);
	m_jData[_T("blkhac")].GetValue(m_szblkhac);
	m_jData[_T("xnghiem")].GetValue(m_szxnghiem);
	m_jData[_T("benhan")].GetValue(m_szbenhan);
	m_jData[_T("cdsb")].GetValue(m_szcdsb);
	m_jData[_T("cdpb")].GetValue(m_szcdpb);
	m_jData[_T("cdxd")].GetValue(m_szcdxd);
	m_jData[_T("khxn")].GetValue(m_szkhxn);
	m_jData[_T("khdt")].GetValue(m_szkhdt);
	m_jData[_T("tluong")].GetValue(m_sztluong);
	}

}
void CTMBenhAn::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szType, tmpStr, szData;
	int n = 0;

	szSQL.Format(_T("SELECT COUNT(*) AS solan FROM hms_doc_emr WHERE hde_docno=%ld and hde_name='%s' and hde_type='BENH_AN'"), m_nDocumentNo, m_szRecordNo);
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("solan"), n);

	if(n > 0)
	{
		for (int i = 0; i < n; i++)
		{
			szSQL.Format(_T("SELECT to_char(hde_value) as hde_value FROM hms_doc_emr WHERE hde_docno=%ld and hde_name='%s' and hde_type='BENH_AN' and hde_refidx = %d "), m_nDocumentNo, m_szRecordNo, i);
			rs.ExecSQL(szSQL);
			rs.GetValue(_T("hde_value"), tmpStr);
			szData.AppendFormat(_T("%s"), tmpStr);
		}
		m_jData.Parse(szData);
		UpdateJson(FALSE);
	}
	else
	{
		SetDefaultValues();
		m_szvaoluc = pMF->GetSysDateTime();
		m_wndvaongay.SetFocus();
	}

}
void CTMBenhAn::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateJson(TRUE);
}
void CTMBenhAn::SetDefaultValues(){

	m_nvaongay = 0;
	m_szlido.Empty();
	m_szbenhsu.Empty();
	m_szbthan.Empty();
	m_szgdinh.Empty();
	m_sztthan.Empty();
	m_szmach.Empty();
	m_szndo.Empty();
	m_szhap.Empty();
	m_szntho.Empty();
	m_szccao.Empty();
	m_szcnang.Empty();
	m_szthoan.Empty();
	m_szhhap.Empty();
	m_szthoa.Empty();
	m_sztnieu.Empty();
	m_szttkinh.Empty();
	m_szcxkhop.Empty();
	m_szckkhac.Empty();
	m_szblkhac.Empty();
	m_szxnghiem.Empty();
	m_szbenhan.Empty();
	m_szcdsb.Empty();
	m_szcdpb.Empty();
	m_szcdxd.Empty();
	m_szkhxn.Empty();
	m_szkhdt.Empty();
	m_sztluong.Empty();

}
int CTMBenhAn::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
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
 			EnableButtons(TRUE, 0, 1, 2, 3, 4, -1);
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
/*void CTMBenhAn::OnvaolucChange(){
	
} */
/*void CTMBenhAn::OnvaolucSetfocus(){
	
} */
/*void CTMBenhAn::OnvaolucKillfocus(){
	
} */
int CTMBenhAn::OnvaolucCheckValue(){
	return 0;
} 
/*void CTMBenhAn::OnvaongayChange(){
	
} */
/*void CTMBenhAn::OnvaongaySetfocus(){
	
} */
/*void CTMBenhAn::OnvaongayKillfocus(){
	
} */
int CTMBenhAn::OnvaongayCheckValue(){
	return 0;
} 
/*void CTMBenhAn::OnlidoChange(){
	
} */
/*void CTMBenhAn::OnlidoSetfocus(){
	
} */
/*void CTMBenhAn::OnlidoKillfocus(){
	
} */
int CTMBenhAn::OnlidoCheckValue(){
	return 0;
} 
/*void CTMBenhAn::OnbenhsuChange(){
	
} */
/*void CTMBenhAn::OnbenhsuSetfocus(){
	
} */
/*void CTMBenhAn::OnbenhsuKillfocus(){
	
} */
int CTMBenhAn::OnbenhsuCheckValue(){
	return 0;
} 
/*void CTMBenhAn::OnbthanChange(){
	
} */
/*void CTMBenhAn::OnbthanSetfocus(){
	
} */
/*void CTMBenhAn::OnbthanKillfocus(){
	
} */
int CTMBenhAn::OnbthanCheckValue(){
	return 0;
} 
/*void CTMBenhAn::OngdinhChange(){
	
} */
/*void CTMBenhAn::OngdinhSetfocus(){
	
} */
/*void CTMBenhAn::OngdinhKillfocus(){
	
} */
int CTMBenhAn::OngdinhCheckValue(){
	return 0;
} 
/*void CTMBenhAn::OntthanChange(){
	
} */
/*void CTMBenhAn::OntthanSetfocus(){
	
} */
/*void CTMBenhAn::OntthanKillfocus(){
	
} */
int CTMBenhAn::OntthanCheckValue(){
	return 0;
} 
/*void CTMBenhAn::OnmachChange(){
	
} */
/*void CTMBenhAn::OnmachSetfocus(){
	
} */
/*void CTMBenhAn::OnmachKillfocus(){
	
} */
int CTMBenhAn::OnmachCheckValue(){
	return 0;
} 
/*void CTMBenhAn::OnndoChange(){
	
} */
/*void CTMBenhAn::OnndoSetfocus(){
	
} */
/*void CTMBenhAn::OnndoKillfocus(){
	
} */
int CTMBenhAn::OnndoCheckValue(){
	return 0;
} 
/*void CTMBenhAn::OnhapChange(){
	
} */
/*void CTMBenhAn::OnhapSetfocus(){
	
} */
/*void CTMBenhAn::OnhapKillfocus(){
	
} */
int CTMBenhAn::OnhapCheckValue(){
	return 0;
} 
/*void CTMBenhAn::OnnthoChange(){
	
} */
/*void CTMBenhAn::OnnthoSetfocus(){
	
} */
/*void CTMBenhAn::OnnthoKillfocus(){
	
} */
int CTMBenhAn::OnnthoCheckValue(){
	return 0;
} 
/*void CTMBenhAn::OnccaoChange(){
	
} */
/*void CTMBenhAn::OnccaoSetfocus(){
	
} */
/*void CTMBenhAn::OnccaoKillfocus(){
	
} */
int CTMBenhAn::OnccaoCheckValue(){
	return 0;
} 
/*void CTMBenhAn::OncnangChange(){
	
} */
/*void CTMBenhAn::OncnangSetfocus(){
	
} */
/*void CTMBenhAn::OncnangKillfocus(){
	
} */
int CTMBenhAn::OncnangCheckValue(){
	return 0;
} 
/*void CTMBenhAn::OnthoanChange(){
	
} */
/*void CTMBenhAn::OnthoanSetfocus(){
	
} */
/*void CTMBenhAn::OnthoanKillfocus(){
	
} */
int CTMBenhAn::OnthoanCheckValue(){
	return 0;
} 
/*void CTMBenhAn::OnhhapChange(){
	
} */
/*void CTMBenhAn::OnhhapSetfocus(){
	
} */
/*void CTMBenhAn::OnhhapKillfocus(){
	
} */
int CTMBenhAn::OnhhapCheckValue(){
	return 0;
} 
/*void CTMBenhAn::OnthoaChange(){
	
} */
/*void CTMBenhAn::OnthoaSetfocus(){
	
} */
/*void CTMBenhAn::OnthoaKillfocus(){
	
} */
int CTMBenhAn::OnthoaCheckValue(){
	return 0;
} 
/*void CTMBenhAn::OntnieuChange(){
	
} */
/*void CTMBenhAn::OntnieuSetfocus(){
	
} */
/*void CTMBenhAn::OntnieuKillfocus(){
	
} */
int CTMBenhAn::OntnieuCheckValue(){
	return 0;
} 
/*void CTMBenhAn::OnttkinhChange(){
	
} */
/*void CTMBenhAn::OnttkinhSetfocus(){
	
} */
/*void CTMBenhAn::OnttkinhKillfocus(){
	
} */
int CTMBenhAn::OnttkinhCheckValue(){
	return 0;
} 
/*void CTMBenhAn::OncxkhopChange(){
	
} */
/*void CTMBenhAn::OncxkhopSetfocus(){
	
} */
/*void CTMBenhAn::OncxkhopKillfocus(){
	
} */
int CTMBenhAn::OncxkhopCheckValue(){
	return 0;
} 
/*void CTMBenhAn::OnckkhacChange(){
	
} */
/*void CTMBenhAn::OnckkhacSetfocus(){
	
} */
/*void CTMBenhAn::OnckkhacKillfocus(){
	
} */
int CTMBenhAn::OnckkhacCheckValue(){
	return 0;
} 
/*void CTMBenhAn::OnblkhacChange(){
	
} */
/*void CTMBenhAn::OnblkhacSetfocus(){
	
} */
/*void CTMBenhAn::OnblkhacKillfocus(){
	
} */
int CTMBenhAn::OnblkhacCheckValue(){
	return 0;
} 
/*void CTMBenhAn::OnxnghiemChange(){
	
} */
/*void CTMBenhAn::OnxnghiemSetfocus(){
	
} */
/*void CTMBenhAn::OnxnghiemKillfocus(){
	
} */
int CTMBenhAn::OnxnghiemCheckValue(){
	return 0;
} 
/*void CTMBenhAn::OnbenhanChange(){
	
} */
/*void CTMBenhAn::OnbenhanSetfocus(){
	
} */
/*void CTMBenhAn::OnbenhanKillfocus(){
	
} */
int CTMBenhAn::OnbenhanCheckValue(){
	return 0;
} 
/*void CTMBenhAn::OncdsbChange(){
	
} */
/*void CTMBenhAn::OncdsbSetfocus(){
	
} */
/*void CTMBenhAn::OncdsbKillfocus(){
	
} */
int CTMBenhAn::OncdsbCheckValue(){
	return 0;
} 
/*void CTMBenhAn::OncdpbChange(){
	
} */
/*void CTMBenhAn::OncdpbSetfocus(){
	
} */
/*void CTMBenhAn::OncdpbKillfocus(){
	
} */
int CTMBenhAn::OncdpbCheckValue(){
	return 0;
} 
/*void CTMBenhAn::OncdxdChange(){
	
} */
/*void CTMBenhAn::OncdxdSetfocus(){
	
} */
/*void CTMBenhAn::OncdxdKillfocus(){
	
} */
int CTMBenhAn::OncdxdCheckValue(){
	return 0;
} 
/*void CTMBenhAn::OnkhxnChange(){
	
} */
/*void CTMBenhAn::OnkhxnSetfocus(){
	
} */
/*void CTMBenhAn::OnkhxnKillfocus(){
	
} */
int CTMBenhAn::OnkhxnCheckValue(){
	return 0;
} 
/*void CTMBenhAn::OnkhdtChange(){
	
} */
/*void CTMBenhAn::OnkhdtSetfocus(){
	
} */
/*void CTMBenhAn::OnkhdtKillfocus(){
	
} */
int CTMBenhAn::OnkhdtCheckValue(){
	return 0;
} 
/*void CTMBenhAn::OntluongChange(){
	
} */
/*void CTMBenhAn::OntluongSetfocus(){
	
} */
/*void CTMBenhAn::OntluongKillfocus(){
	
} */
int CTMBenhAn::OntluongCheckValue(){
	return 0;
} 
void CTMBenhAn::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(OnSaveTMBenhAn() > 0)
		MessageBox(_T("Data Saved"));
} 


void CTMBenhAn::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	

	CReport rpt;
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CReportSection *rptHeader = NULL, *rptDetail = NULL, *rptFooter = NULL, *rptGroupHeader = NULL;
	CString szSQL, tmpStr, szDate, szWhere, szDoctorDept, szSubSelect;
	int nIdx = 1;

	if (!rpt.Init(_T("Reports\\HMS\\TM_BENHAN.RPT")))
		return;

	rptHeader = rpt.GetReportHeader();

	rptGroupHeader = rpt.AddDetail(rpt.GetGroupHeader(1));
	tmpStr.Format(rptGroupHeader->GetValue(_T("1")), m_szvaoluc.Mid(11, 5), m_szvaoluc.Mid(8, 2), m_szvaoluc.Mid(5, 2), m_szvaoluc.Left(4));
	rptGroupHeader->SetValue(_T("1"), tmpStr);
	rptGroupHeader->SetValue(_T("2"), m_szlido);
	tmpStr.Format(rptGroupHeader->GetValue(_T("3")), m_nvaongay);
	rptGroupHeader->SetValue(_T("3"), tmpStr);

	rptGroupHeader = rpt.AddDetail(rpt.GetGroupHeader(2));
	rptGroupHeader->SetValue(_T("4"), m_szbenhsu);

	rptGroupHeader = rpt.AddDetail(rpt.GetGroupHeader(3));
	rptGroupHeader->SetValue(_T("5"), m_szbthan);

	rptGroupHeader = rpt.AddDetail(rpt.GetGroupHeader(4));
	rptGroupHeader->SetValue(_T("6"), m_szgdinh);

	rptGroupHeader = rpt.AddDetail(rpt.GetGroupHeader(5));
	rptGroupHeader->SetValue(_T("7"), m_sztthan);
	rptGroupHeader->SetValue(_T("8"), m_szmach);
	rptGroupHeader->SetValue(_T("9"), m_szndo);
	rptGroupHeader->SetValue(_T("10"), m_szhap);
	rptGroupHeader->SetValue(_T("11"), m_szntho);
	rptGroupHeader->SetValue(_T("12"), m_szccao);
	rptGroupHeader->SetValue(_T("13"), m_szcnang);

	rptGroupHeader = rpt.AddDetail(rpt.GetGroupHeader(6));
	rptGroupHeader->SetValue(_T("14"), m_szthoan);

	rptGroupHeader = rpt.AddDetail(rpt.GetGroupHeader(7));
	rptGroupHeader->SetValue(_T("15"), m_szhhap);

	rptGroupHeader = rpt.AddDetail(rpt.GetGroupHeader(8));
	rptGroupHeader->SetValue(_T("16"), m_szthoa);

	rptGroupHeader = rpt.AddDetail(rpt.GetGroupHeader(9));
	rptGroupHeader->SetValue(_T("17"), m_sztnieu);

	rptGroupHeader = rpt.AddDetail(rpt.GetGroupHeader(10));
	rptGroupHeader->SetValue(_T("18"), m_szttkinh);

	rptGroupHeader = rpt.AddDetail(rpt.GetGroupHeader(11));
	rptGroupHeader->SetValue(_T("19"), m_szcxkhop);

	rptGroupHeader = rpt.AddDetail(rpt.GetGroupHeader(12));
	rptGroupHeader->SetValue(_T("20"), m_szckkhac);

	rptGroupHeader = rpt.AddDetail(rpt.GetGroupHeader(13));
	rptGroupHeader->SetValue(_T("21"), m_szblkhac);

	rptGroupHeader = rpt.AddDetail(rpt.GetGroupHeader(14));
	rptGroupHeader->SetValue(_T("22"), m_szxnghiem);

	rptGroupHeader = rpt.AddDetail(rpt.GetGroupHeader(15));
	rptGroupHeader->SetValue(_T("23"), m_szbenhan);

	rptGroupHeader = rpt.AddDetail(rpt.GetGroupHeader(16));
	rptGroupHeader->SetValue(_T("24"), m_szcdsb);

	rptGroupHeader = rpt.AddDetail(rpt.GetGroupHeader(17));
	rptGroupHeader->SetValue(_T("25"), m_szcdpb);

	rptGroupHeader = rpt.AddDetail(rpt.GetGroupHeader(18));
	rptGroupHeader->SetValue(_T("26"), m_szcdxd);

	rptGroupHeader = rpt.AddDetail(rpt.GetGroupHeader(19));
	rptGroupHeader->SetValue(_T("27"), m_szkhxn);

	rptGroupHeader = rpt.AddDetail(rpt.GetGroupHeader(20));
	rptGroupHeader->SetValue(_T("28"), m_szkhdt);

	rptGroupHeader = rpt.AddDetail(rpt.GetGroupHeader(21));
	rptGroupHeader->SetValue(_T("29"), m_sztluong);

	rptDetail = rpt.AddDetail();
	rptFooter = rpt.GetReportFooter();
	EndWaitCursor();
	rpt.PrintPreview();

} 
void CTMBenhAn::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
//	CGuiDialog::OnCancel();
} 
int CTMBenhAn::OnAddTMBenhAn(){
	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
		return -1;
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	SetMode(VM_ADD);
	return 0;
}
int CTMBenhAn::OnEditTMBenhAn(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CTMBenhAn::OnDeleteTMBenhAn(){
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
 		OnCancelTMBenhAn();
 	}
	return 0;
}
int CTMBenhAn::OnSaveTMBenhAn(){
	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
		return -1;
	if(!IsValidateData())
		return -1;
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
	CString szSQL;
	CString szData;
	int ret = 0;
	m_jData.ToString(szData);
	int n =0;
	CString tmpStr;
	tmpStr = szData;

	pMF->BeginTransaction();

	szSQL.Format(_T("DELETE FROM hms_doc_emr WHERE hde_docno=%ld and hde_name='%s' and hde_type='BENH_AN'"), m_nDocumentNo, m_szRecordNo);
	pMF->ExecSQL(szSQL);

	CStringArray strList;
	pMF->String2Array(szData, &strList, 2000);
	for (int i =0; i < strList.GetCount();i++)
	{
		tmpStr = strList[i];
		tmpStr.Replace(_T("'"), _T("''"));
		szSQL.Format(_T("HMS_DOC_EMR_CREATE('BENH_AN', %ld, '%s', %d, %d, '%s', '%s', '%s') "),
			m_nDocumentNo, pMF->m_szDept, n++, 0, pMF->GetCurrentUser(), m_szRecordNo, tmpStr);
		ret = str2int(pMF->ExecDML(szSQL));
		if(ret < 0)
		{
			pMF->Rollback();
			return -1;
		}

	}
	pMF->Commit();

/*
	for (;;)
	{
		szSQL.Format(_T("HMS_DOC_EMR_CREATE('BENH_AN', %ld, '%s', %d, %d, '%s', '%s', '%s') "),
			m_nDocumentNo, pMF->m_szDept, n++, 0, pMF->GetCurrentUser(), m_szRecordNo, tmpStr);
		ret = str2int(pMF->ExecDML(szSQL));
		_msg(_T("%d"), n++);
		if(tmpStr.GetLength()  < 2000)
			break;
		tmpStr = tmpStr.Mid(2000);
	}
*/

/*
	szSQL.Format(_T("HMS_DOC_EMR_CREATE('BENH_AN', %ld, '%s', %d, %d, '%s', '%s', '%s') "),
		m_nDocumentNo, pMF->m_szDept, 1, 0, pMF->GetCurrentUser(), m_szRecordNo, szData);

	int ret = str2int(pMF->ExecDML(szSQL));

	return ret;
*/

	return ret;

	return 0;
}
int CTMBenhAn::OnCancelTMBenhAn(){
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
int CTMBenhAn::OnTMBenhAnListLoadData(){
	return 0;
}
