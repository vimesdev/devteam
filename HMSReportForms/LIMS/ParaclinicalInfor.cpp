#include "stdafx.h"
#include "ParaclinicalInfor.h"
#include "ParaclinicalInformation.h"
#include "LIMSTestSetupButton.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
#include "Excel.h"

static void _OnGroupSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel)
{
	((CParaclinicalInfor* )pWnd)->OnGroupSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnGroupSelendokFnc(CWnd *pWnd){
	((CParaclinicalInfor *)pWnd)->OnGroupSelendok();
}
/*static void _OnGroupSetfocusFnc(CWnd *pWnd){
	((CParaclinicalInfor *)pWnd)->OnGroupKillfocus();
}*/
/*static void _OnGroupKillfocusFnc(CWnd *pWnd){
	((CParaclinicalInfor *)pWnd)->OnGroupKillfocus();
}*/
static long _OnGroupLoadDataFnc(CWnd *pWnd){
	return ((CParaclinicalInfor *)pWnd)->OnGroupLoadData();
}
/*static void _OnGroupAddNewFnc(CWnd *pWnd){
	((CParaclinicalInfor *)pWnd)->OnGroupAddNew();
}*/
/*static void _OnApplyDateChangeFnc(CWnd *pWnd){
	((CParaclinicalInfor *)pWnd)->OnApplyDateChange();
} */
/*static void _OnApplyDateSetfocusFnc(CWnd *pWnd){
	((CParaclinicalInfor *)pWnd)->OnApplyDateSetfocus();} */ 
/*static void _OnApplyDateKillfocusFnc(CWnd *pWnd){
	((CParaclinicalInfor *)pWnd)->OnApplyDateKillfocus();
} */
static int _OnApplyDateCheckValueFnc(CWnd *pWnd){
	return ((CParaclinicalInfor *)pWnd)->OnApplyDateCheckValue();
} 
/*static void _OnParaclinicalNameChangeFnc(CWnd *pWnd){
	((CParaclinicalInfor *)pWnd)->OnParaclinicalNameChange();
} */
/*static void _OnParaclinicalNameSetfocusFnc(CWnd *pWnd){
	((CParaclinicalInfor *)pWnd)->OnParaclinicalNameSetfocus();} */ 
/*static void _OnParaclinicalNameKillfocusFnc(CWnd *pWnd){
	((CParaclinicalInfor *)pWnd)->OnParaclinicalNameKillfocus();
} */
static int _OnParaclinicalNameCheckValueFnc(CWnd *pWnd){
	return ((CParaclinicalInfor *)pWnd)->OnParaclinicalNameCheckValue();
} 
/*static void _OnUnitChangeFnc(CWnd *pWnd){
	((CParaclinicalInfor *)pWnd)->OnUnitChange();
} */
/*static void _OnUnitSetfocusFnc(CWnd *pWnd){
	((CParaclinicalInfor *)pWnd)->OnUnitSetfocus();} */ 
/*static void _OnUnitKillfocusFnc(CWnd *pWnd){
	((CParaclinicalInfor *)pWnd)->OnUnitKillfocus();
} */
static int _OnUnitCheckValueFnc(CWnd *pWnd){
	return ((CParaclinicalInfor *)pWnd)->OnUnitCheckValue();
} 
/*static void _OnScaleChangeFnc(CWnd *pWnd){
	((CParaclinicalInfor *)pWnd)->OnScaleChange();
} */
/*static void _OnScaleSetfocusFnc(CWnd *pWnd){
	((CParaclinicalInfor *)pWnd)->OnScaleSetfocus();} */ 
/*static void _OnScaleKillfocusFnc(CWnd *pWnd){
	((CParaclinicalInfor *)pWnd)->OnScaleKillfocus();
} */
static int _OnScaleCheckValueFnc(CWnd *pWnd){
	return ((CParaclinicalInfor *)pWnd)->OnScaleCheckValue();
} 
/*static void _OnMaleIndexChangeFnc(CWnd *pWnd){
	((CParaclinicalInfor *)pWnd)->OnMaleIndexChange();
} */
/*static void _OnMaleIndexSetfocusFnc(CWnd *pWnd){
	((CParaclinicalInfor *)pWnd)->OnMaleIndexSetfocus();} */ 
/*static void _OnMaleIndexKillfocusFnc(CWnd *pWnd){
	((CParaclinicalInfor *)pWnd)->OnMaleIndexKillfocus();
} */
static int _OnMaleIndexCheckValueFnc(CWnd *pWnd){
	return ((CParaclinicalInfor *)pWnd)->OnMaleIndexCheckValue();
} 
/*static void _OnFemaleIndexChangeFnc(CWnd *pWnd){
	((CParaclinicalInfor *)pWnd)->OnFemaleIndexChange();
} */
/*static void _OnFemaleIndexSetfocusFnc(CWnd *pWnd){
	((CParaclinicalInfor *)pWnd)->OnFemaleIndexSetfocus();} */ 
/*static void _OnFemaleIndexKillfocusFnc(CWnd *pWnd){
	((CParaclinicalInfor *)pWnd)->OnFemaleIndexKillfocus();
} */
static int _OnFemaleIndexCheckValueFnc(CWnd *pWnd){
	return ((CParaclinicalInfor *)pWnd)->OnFemaleIndexCheckValue();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CParaclinicalInfor *pVw = (CParaclinicalInfor *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CParaclinicalInfor *pVw = (CParaclinicalInfor *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CParaclinicalInfor *pVw = (CParaclinicalInfor *)pWnd;
	pVw->OnCancelSelect();
}
static void _OnPrintBoldSelectFnc(CWnd *pWnd){
	 ((CParaclinicalInfor*)pWnd)->OnPrintBoldSelect();
}

static void _OnPrintBoldItalicSelectFnc(CWnd *pWnd)
{
	 ((CParaclinicalInfor*)pWnd)->OnPrintBoldItalicSelect();
}

static int _OnAddParaclinicalInforFnc(CWnd *pWnd){
	 return ((CParaclinicalInfor*)pWnd)->OnAddParaclinicalInfor();
} 
static int _OnEditParaclinicalInforFnc(CWnd *pWnd){
	 return ((CParaclinicalInfor*)pWnd)->OnEditParaclinicalInfor();
} 
static int _OnDeleteParaclinicalInforFnc(CWnd *pWnd){
	 return ((CParaclinicalInfor*)pWnd)->OnDeleteParaclinicalInfor();
} 
static int _OnSaveParaclinicalInforFnc(CWnd *pWnd){
	 return ((CParaclinicalInfor*)pWnd)->OnSaveParaclinicalInfor();
} 
static int _OnCancelParaclinicalInforFnc(CWnd *pWnd){
	 return ((CParaclinicalInfor*)pWnd)->OnCancelParaclinicalInfor();
} 
CParaclinicalInfor::CParaclinicalInfor(CWnd *pParent):
	CGuiDialog(pParent)
{
	m_nDlgWidth = 605;
	m_nDlgHeight = 213;
	SetDefaultValues();
}
CParaclinicalInfor::~CParaclinicalInfor(){
}
void CParaclinicalInfor::OnCreateComponents()
{
	/*m_wndParaclinicalInformation.Create(this, _T("Paraclinical Information"), 5, 5, 595, 167);
	m_wndGroupLabel.Create(this, _T("Group"), 9, 28, 103, 53);
	m_wndGroup.Create(this,106, 28, 391, 53); 
	m_wndApplyDateLabel.Create(this, _T("Apply Date"), 396, 28, 479, 53);
	m_wndApplyDate.Create(this,484, 28, 587, 53); 
	m_wndParaclinicalNameDetailLabel.Create(this, _T("Paraclinical Name"), 9, 58, 103, 104);
	m_wndParaclinicalNameDetail.Create(this,106, 58, 587, 104); 
	m_wndUnitLabel.Create(this, _T("Unit"), 9, 109, 103, 134);
	m_wndUnit.Create(this,106, 109, 297, 134); 
	m_wndScaleLabel.Create(this, _T("Scale"), 302, 109, 388, 134);
	m_wndScale.Create(this,393, 109, 587, 134); 
	m_wndFemaleIndexLabel.Create(this, _T("Female Index"), 302, 139, 388, 165);
	m_wndMaleIndex.Create(this,105, 139, 297, 165); 
	m_wndFemaleIndex.Create(this,393, 139, 587, 165); 
	m_wndMaleIndexLabel.Create(this, _T("Male Index"), 9, 139, 103, 165);
	//m_wndEdit.Create(this, _T("&Edit"), 349, 176, 424, 201);
	m_wndSave.Create(this, _T("&Save"), 429, 176, 509, 201);
	m_wndCancel.Create(this, _T("&Cancel"), 515, 176, 595, 201);
	m_wndPrintBold.Create(this, _T("Print Bold"), 9, 176, 103, 201);*/
	m_wndParaclinicalInformation.Create(this, _T("Paraclinical Information"), 5, 5, 595, 167);
	m_wndGroupLabel.Create(this, _T("Group"), 9, 28, 103, 53);
	m_wndGroup.Create(this,106, 28, 391, 53); 
	m_wndApplyDateLabel.Create(this, _T("Apply Date"), 396, 28, 479, 53);
	m_wndApplyDate.Create(this,484, 28, 587, 53); 
	m_wndParaclinicalNameDetailLabel.Create(this, _T("Paraclinical Name"), 9, 58, 103, 104);
	m_wndParaclinicalNameDetail.Create(this,106, 58, 587, 104); 
	m_wndUnitLabel.Create(this, _T("Unit"), 9, 109, 103, 134);
	m_wndUnit.Create(this,106, 109, 297, 134); 
	m_wndScaleLabel.Create(this, _T("Scale"), 302, 109, 388, 134);
	m_wndScale.Create(this,393, 109, 587, 134); 
	m_wndFemaleIndexLabel.Create(this, _T("Female Index"), 302, 139, 388, 165);
	m_wndMaleIndex.Create(this,105, 139, 297, 165); 
	m_wndFemaleIndex.Create(this,393, 139, 587, 165); 
	m_wndMaleIndexLabel.Create(this, _T("Male Index"), 9, 139, 103, 165);
	m_wndSave.Create(this, _T("&Save"), 429, 176, 509, 201);
	m_wndCancel.Create(this, _T("&Cancel"), 515, 176, 595, 201);
	m_wndPrintBold.Create(this, _T("Print Bold"), 9, 176, 103, 201);
	m_wndPrintBoldItalic.Create(this, _T("PrintBold and Italic"), 110, 176, 240, 201);

}
void CParaclinicalInfor::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	EnableControls(TRUE);
	//EnableButtons(TRUE, 0, -1);
	m_wndGroup.SetCheckValue(true);
	m_wndGroup.SetReadOnly(true);
	m_wndGroup.LimitText(16);
	m_wndGroup.SetTextColor(true);
	m_wndApplyDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndApplyDate.SetCheckValue(true);
	m_wndApplyDate.SetReadOnly(true);
	m_wndParaclinicalNameDetail.SetMultiLine(TRUE);
	m_wndParaclinicalNameDetail.SetLimitText(35);
	m_wndParaclinicalNameDetail.SetCheckValue(true);
	m_wndParaclinicalNameDetail.SetReadOnly(true);
	m_wndUnit.SetLimitText(1024);
	m_wndUnit.SetCheckValue(true);
	m_wndScale.SetLimitText(35);
	m_wndScale.SetCheckValue(true);
	m_wndMaleIndex.SetMultiLine(TRUE);
	m_wndMaleIndex.SetLimitText(35);
	m_wndMaleIndex.SetCheckValue(true);
	m_wndFemaleIndex.SetMultiLine(TRUE);
	m_wndFemaleIndex.SetLimitText(35);
	m_wndFemaleIndex.SetCheckValue(true);


	m_hms_fee_listTbl.SetTableName(_T("hms_fee_list"));
	m_hms_fee_listTbl.AddField(_T("hfl_print_bold"), dfText, 1);
	m_hms_fee_listTbl.AddField(_T("hfl_print_bold_italic"), dfText, 1);
	
}
void CParaclinicalInfor::OnSetWindowEvents(){
	m_wndGroup.SetEvent(WE_SELENDOK, _OnGroupSelendokFnc);
	//m_wndGroup.SetEvent(WE_SETFOCUS, _OnGroupSetfocusFnc);
	//m_wndGroup.SetEvent(WE_KILLFOCUS, _OnGroupKillfocusFnc);
	m_wndGroup.SetEvent(WE_SELCHANGE, _OnGroupSelectChangeFnc);
	m_wndGroup.SetEvent(WE_LOADDATA, _OnGroupLoadDataFnc);
	//m_wndGroup.SetEvent(WE_ADDNEW, _OnGroupAddNewFnc);
	//m_wndApplyDate.SetEvent(WE_CHANGE, _OnApplyDateChangeFnc);
	//m_wndApplyDate.SetEvent(WE_SETFOCUS, _OnApplyDateSetfocusFnc);
	//m_wndApplyDate.SetEvent(WE_KILLFOCUS, _OnApplyDateKillfocusFnc);
	m_wndApplyDate.SetEvent(WE_CHECKVALUE, _OnApplyDateCheckValueFnc);
	//m_wndParaclinicalName.SetEvent(WE_CHANGE, _OnParaclinicalNameChangeFnc);
	//m_wndParaclinicalName.SetEvent(WE_SETFOCUS, _OnParaclinicalNameSetfocusFnc);
	//m_wndParaclinicalName.SetEvent(WE_KILLFOCUS, _OnParaclinicalNameKillfocusFnc);
	m_wndParaclinicalNameDetail.SetEvent(WE_CHECKVALUE, _OnParaclinicalNameCheckValueFnc);
	//m_wndUnit.SetEvent(WE_CHANGE, _OnUnitChangeFnc);
	//m_wndUnit.SetEvent(WE_SETFOCUS, _OnUnitSetfocusFnc);
	//m_wndUnit.SetEvent(WE_KILLFOCUS, _OnUnitKillfocusFnc);
	m_wndUnit.SetEvent(WE_CHECKVALUE, _OnUnitCheckValueFnc);
	//m_wndScale.SetEvent(WE_CHANGE, _OnScaleChangeFnc);
	//m_wndScale.SetEvent(WE_SETFOCUS, _OnScaleSetfocusFnc);
	//m_wndScale.SetEvent(WE_KILLFOCUS, _OnScaleKillfocusFnc);
	m_wndScale.SetEvent(WE_CHECKVALUE, _OnScaleCheckValueFnc);
	//m_wndMaleIndex.SetEvent(WE_CHANGE, _OnMaleIndexChangeFnc);
	//m_wndMaleIndex.SetEvent(WE_SETFOCUS, _OnMaleIndexSetfocusFnc);
	//m_wndMaleIndex.SetEvent(WE_KILLFOCUS, _OnMaleIndexKillfocusFnc);
	m_wndMaleIndex.SetEvent(WE_CHECKVALUE, _OnMaleIndexCheckValueFnc);
	//m_wndFemaleIndex.SetEvent(WE_CHANGE, _OnFemaleIndexChangeFnc);
	//m_wndFemaleIndex.SetEvent(WE_SETFOCUS, _OnFemaleIndexSetfocusFnc);
	//m_wndFemaleIndex.SetEvent(WE_KILLFOCUS, _OnFemaleIndexKillfocusFnc);
	m_wndFemaleIndex.SetEvent(WE_CHECKVALUE, _OnFemaleIndexCheckValueFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndPrintBold.SetEvent(WE_CLICK, _OnPrintBoldSelectFnc);
	m_wndPrintBoldItalic.SetEvent(WE_CLICK, _OnPrintBoldItalicSelectFnc);
	/*AddEvent(1, _T("Add	Ctrl+A"), _OnAddParaclinicalInforFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditParaclinicalInforFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteParaclinicalInforFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveParaclinicalInforFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelParaclinicalInforFnc, 0, 'T', VK_CONTROL);*/
	GetDataToScreen();
}
void CParaclinicalInfor::OnDoDataExchange(CDataExchange* pDX){
	//DDX_TextEx(pDX, m_wndGroup.GetDlgCtrlID(), m_szGroupKey);
	DDX_Text(pDX, m_wndGroup.GetDlgCtrlID(), m_szGroupKey);
	DDX_TextEx(pDX, m_wndApplyDate.GetDlgCtrlID(), m_szApplyDate);
	DDX_Text(pDX, m_wndParaclinicalNameDetail.GetDlgCtrlID(), m_szParaclinicalNameDetail);
	DDX_Text(pDX, m_wndUnit.GetDlgCtrlID(), m_szUnit);
	DDX_Text(pDX, m_wndScale.GetDlgCtrlID(), m_nScale);
	DDX_Text(pDX, m_wndMaleIndex.GetDlgCtrlID(), m_szMaleIndex);
	DDX_Text(pDX, m_wndFemaleIndex.GetDlgCtrlID(), m_szFemaleIndex);
	DDX_Check(pDX, m_wndPrintBold.GetDlgCtrlID(), m_bPrintBold);
	DDX_Check(pDX, m_wndPrintBoldItalic.GetDlgCtrlID(), m_bPrintBoldItalic);
}
void CParaclinicalInfor::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL,tmpStr;
	szSQL.Format(_T(" select ") \
	_T(" hfl_groupid as Groupid,") \
	_T(" hfg_name as GroupName,") \
	_T(" hfl_applydate as ApplyDate,") \
	_T(" hfl_name2 as ParaclinicalName,") \
	_T(" hfl_unit as UnitName,") \
	_T(" hfl_scale as ScaleId,") \
	_T(" hfl_index1 as MaleIndex,") \
	_T(" hfl_index2 as FeMaleIndex,") \
	_T(" Hfl_Print_Bold as PrintBold,") \
	_T(" Hfl_Print_Bold_Italic as PrintBoldItalic") \
	_T(" from VIMES.Hms_Fee_List") \
	_T(" left join VIMES.Hms_Fee_Group") \
	_T(" on (Hfl_Groupid=hfg_id)") \
	_T(" where Hfl_Feeid='%s'"),m_szID); \
	 rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
	if (!rs.IsEOF())
	{
		rs.GetValue(_T("GroupName"), m_szGroupKey);		
		rs.GetValue(_T("ApplyDate"), m_szApplyDate);
		rs.GetValue(_T("ParaclinicalName"), m_szParaclinicalNameDetail);
		rs.GetValue(_T("UnitName"), m_szUnit);
		rs.GetValue(_T("ScaleId"), m_nScale);
		rs.GetValue(_T("MaleIndex"), m_szMaleIndex);
		rs.GetValue(_T("FeMaleIndex"), m_szFemaleIndex);
		rs.GetValue(_T("PrintBold"), tmpStr);
		if(tmpStr == _T("Y")) 
			 m_bPrintBold = true;
		else m_bPrintBold = false;

		rs.GetValue(_T("PrintBoldItalic"), tmpStr);
		if(tmpStr == _T("Y")) 
			 m_bPrintBoldItalic = true;
		else m_bPrintBoldItalic = false;

		SetMode(VM_VIEW);
	}
	else
		SetMode(VM_NONE);
}
void CParaclinicalInfor::GetScreenToData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_hms_fee_listTbl.SetValue(_T("hfl_print_bold"), m_bPrintBold?_T("Y"):_T("N"));
	m_hms_fee_listTbl.SetValue(_T("hfl_print_bold_italic"), m_bPrintBoldItalic?_T("Y"):_T("N"));
}
void CParaclinicalInfor::SetDefaultValues(){

	m_szGroupKey.Empty();
	m_szApplyDate.Empty();
	m_szParaclinicalNameDetail.Empty();
	m_szUnit.Empty();
	m_nScale=0;
	m_szMaleIndex.Empty();
	m_szFemaleIndex.Empty();
	m_bPrintBold=TRUE;
	m_bPrintBoldItalic=TRUE;

}
int CParaclinicalInfor::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiDialog::SetMode(nMode); 
 		CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
  		switch(nMode){ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 3, 4, -1); 
 			//SetDefaultValues(); 
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 1,2,3, -1); 
 			break; 
 		case VM_VIEW: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 1,2,3, -1); 
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
void CParaclinicalInfor::OnGroupSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CParaclinicalInfor::OnGroupSelendok(){
	 
}
/*void CParaclinicalInfor::OnGroupSetfocus(){
	
}*/
/*void CParaclinicalInfor::OnGroupKillfocus(){
	
}*/
long CParaclinicalInfor::OnGroupLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndGroup.IsSearchKey() && !m_szGroupKey.IsEmpty()){
	};
	m_wndGroup.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndGroup.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CParaclinicalInfor::OnGroupAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CParaclinicalInfor::OnApplyDateChange(){
	
} */
/*void CParaclinicalInfor::OnApplyDateSetfocus(){
	
} */
/*void CParaclinicalInfor::OnApplyDateKillfocus(){
	
} */
int CParaclinicalInfor::OnApplyDateCheckValue(){
	return 0;
} 
/*void CParaclinicalInfor::OnParaclinicalNameChange(){
	
} */
/*void CParaclinicalInfor::OnParaclinicalNameSetfocus(){
	
} */
/*void CParaclinicalInfor::OnParaclinicalNameKillfocus(){
	
} */
int CParaclinicalInfor::OnParaclinicalNameCheckValue(){
	return 0;
} 
/*void CParaclinicalInfor::OnUnitChange(){
	
} */
/*void CParaclinicalInfor::OnUnitSetfocus(){
	
} */
/*void CParaclinicalInfor::OnUnitKillfocus(){
	
} */
int CParaclinicalInfor::OnUnitCheckValue(){
	return 0;
} 
/*void CParaclinicalInfor::OnScaleChange(){
	
} */
/*void CParaclinicalInfor::OnScaleSetfocus(){
	
} */
/*void CParaclinicalInfor::OnScaleKillfocus(){
	
} */
int CParaclinicalInfor::OnScaleCheckValue()
{
	if (m_nScale<=0)
	return -1;
	else
		return 0;	
}

/*void CParaclinicalInfor::OnMaleIndexChange(){
	
} */
/*void CParaclinicalInfor::OnMaleIndexSetfocus(){
	
} */
/*void CParaclinicalInfor::OnMaleIndexKillfocus(){
	
} */
int CParaclinicalInfor::OnMaleIndexCheckValue(){
	return 0;
} 
/*void CParaclinicalInfor::OnFemaleIndexChange(){
	
} */
/*void CParaclinicalInfor::OnFemaleIndexSetfocus(){
	
} */
/*void CParaclinicalInfor::OnFemaleIndexKillfocus(){
	
} */
int CParaclinicalInfor::OnFemaleIndexCheckValue(){
	return 0;
} 
void CParaclinicalInfor::OnEditSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CParaclinicalInfor::OnSaveSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	UpdateData(TRUE);
	CString szSQL, szPrintBold, szPrintBoldItalic;
	if (m_bPrintBold)
		szPrintBold = _T("Y");
	else
		szPrintBold = _T("N");

	if (m_bPrintBoldItalic)
		szPrintBoldItalic = _T("Y");
	else
		szPrintBoldItalic = _T("N");

	szSQL.Format(_T("UPDATE hms_fee_list ") \
		_T(" SET hfl_unit='%s', ") \
		_T(" hfl_scale=%d, ") \
		_T(" hfl_index1='%s', ") \
		_T(" hfl_index2='%s', ") \
		_T(" hfl_print_bold='%s', ") \
		_T(" hfl_print_bold_italic='%s' ") \
		_T(" WHERE hfl_feeid='%s'"), m_szUnit, m_nScale, m_szMaleIndex, m_szFemaleIndex,szPrintBold,szPrintBoldItalic,m_szID);
	//rs.ExecSQL(szSQL);
	int ret = pMF->ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
	//_msg(_T("%s"), szPrintBold);
	OnOK();	
	//SetMode(VM_VIEW);
	//return ret;
} 
void CParaclinicalInfor::OnCancelSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnCancel();
} 
void CParaclinicalInfor::OnPrintBoldSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
void CParaclinicalInfor::OnPrintBoldItalicSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	
}

int CParaclinicalInfor::OnAddParaclinicalInfor(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CParaclinicalInfor::OnEditParaclinicalInfor(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CParaclinicalInfor::OnDeleteParaclinicalInfor(){
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
 		OnCancelParaclinicalInfor(); 
 	}
	return 0;
}
int CParaclinicalInfor::OnSaveParaclinicalInfor()
//{
// 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
// 		return -1; 
// 	if(!IsValidateData()) 
// 		return -1;
//
// 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
// 	CString szSQL; 
// 	if(GetMode() == VM_ADD)
//	{ 
// 		//szSQL = m_hms_fee_listTbl.GetInsertSQL(); 
// 	} 
// 	else if(GetMode() == VM_EDIT)
//	{ 
// 		CString szWhere; 
// 		szWhere.Format(_T(" WHERE")); 
// 		//szSQL = m_hms_fee_listTbl.GetUpdateSQL(_T("createdby,createddate")); 
// 		szSQL += szWhere; 
// 	} 
// _msg(_T("%s"), szSQL); 
// 	int ret = pMF->ExecSQL(szSQL); 
// 	if(ret > 0) 
// 	{ 
// 		//OnParaclinicalInforListLoadData(); 
// 		SetMode(VM_VIEW); 
// 	} 
// 	else 
// 	{ 
// 	} 
// 	return ret; 
// 	return 0; 
//}
{
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1;	
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		szSQL = m_hms_fee_listTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
		szSQL.Format(_T(" INSERT INTO hms_fee_list_edit SELECT * FROM hms_fee_list WHERE hfl_feeid='%s'"), m_szID);
		pMF->ExecSQL(szSQL);

		szWhere.Format(_T(" WHERE hfl_feeid='%s' "), m_szID); 
 		szSQL = m_hms_fee_listTbl.GetUpdateSQL(_T("hfl_feeid,hfl_createdby,hfl_createddate")); 
 		szSQL += szWhere; 		
 	} 
_flog(_T("%s"), szSQL);

 	int ret = pMF->ExecSQL(szSQL); 

 	if(ret > 0) 
 	{	
		 if(GetMode() == VM_EDIT)
		{
			CString szEvent, szDesc;
			szEvent.Format(_T("Edit"));
			szDesc.Format(_T("ID:%s, Name:%s"), m_szID, m_szParaclinicalNameDetail);
			pMF->SystemLog(szEvent, szDesc);
			OnOK();
		}
		else
		{
 			SetMode(VM_ADD); 
			m_wndParaclinicalNameDetail.SetFocus();
		}
		//if(m_wndOperationList) 
		//	m_wndOperationList->OnFeeListLoadData();

 	} 
 	else 
 	{ 
 	} 
 	return ret; 
}

int CParaclinicalInfor::OnCancelParaclinicalInfor(){
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
int CParaclinicalInfor::OnParaclinicalInforListLoadData()
{
	return 0;
}