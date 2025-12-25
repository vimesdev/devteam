#include "stdafx.h"
#include "SOMPregnancyButtonView.h"
#include "SOMPregnancyInformationView.h"
#include "SOMPregnancyViewDetail.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
#include "Excel.h"

static void _OnGroupSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel)
{
	((CSOMPregnancyViewDetail* )pWnd)->OnGroupSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnGroupSelendokFnc(CWnd *pWnd){
	((CSOMPregnancyViewDetail *)pWnd)->OnGroupSelendok();
}
/*static void _OnGroupSetfocusFnc(CWnd *pWnd){
	((CSOMPregnancyViewDetail *)pWnd)->OnGroupKillfocus();
}*/
/*static void _OnGroupKillfocusFnc(CWnd *pWnd){
	((CSOMPregnancyViewDetail *)pWnd)->OnGroupKillfocus();
}*/
static long _OnGroupLoadDataFnc(CWnd *pWnd){
	return ((CSOMPregnancyViewDetail *)pWnd)->OnGroupLoadData();
}
/*static void _OnGroupAddNewFnc(CWnd *pWnd){
	((CSOMPregnancyViewDetail *)pWnd)->OnGroupAddNew();
}*/
/*static void _OnApplyDateChangeFnc(CWnd *pWnd){
	((CSOMPregnancyViewDetail *)pWnd)->OnApplyDateChange();
} */
/*static void _OnApplyDateSetfocusFnc(CWnd *pWnd){
	((CSOMPregnancyViewDetail *)pWnd)->OnApplyDateSetfocus();} */ 
/*static void _OnApplyDateKillfocusFnc(CWnd *pWnd){
	((CSOMPregnancyViewDetail *)pWnd)->OnApplyDateKillfocus();
} */
static int _OnApplyDateCheckValueFnc(CWnd *pWnd){
	return ((CSOMPregnancyViewDetail *)pWnd)->OnApplyDateCheckValue();
} 
/*static void _OnParaclinicalNameChangeFnc(CWnd *pWnd){
	((CSOMPregnancyViewDetail *)pWnd)->OnParaclinicalNameChange();
} */
/*static void _OnParaclinicalNameSetfocusFnc(CWnd *pWnd){
	((CSOMPregnancyViewDetail *)pWnd)->OnParaclinicalNameSetfocus();} */ 
/*static void _OnParaclinicalNameKillfocusFnc(CWnd *pWnd){
	((CSOMPregnancyViewDetail *)pWnd)->OnParaclinicalNameKillfocus();
} */
static int _OnParaclinicalNameCheckValueFnc(CWnd *pWnd){
	return ((CSOMPregnancyViewDetail *)pWnd)->OnParaclinicalNameCheckValue();
} 
/*static void _OnUnitChangeFnc(CWnd *pWnd){
	((CSOMPregnancyViewDetail *)pWnd)->OnUnitChange();
} */
/*static void _OnUnitSetfocusFnc(CWnd *pWnd){
	((CSOMPregnancyViewDetail *)pWnd)->OnUnitSetfocus();} */ 
/*static void _OnUnitKillfocusFnc(CWnd *pWnd){
	((CSOMPregnancyViewDetail *)pWnd)->OnUnitKillfocus();
} */
static int _OnUnitCheckValueFnc(CWnd *pWnd){
	return ((CSOMPregnancyViewDetail *)pWnd)->OnUnitCheckValue();
} 
/*static void _OnScaleChangeFnc(CWnd *pWnd){
	((CSOMPregnancyViewDetail *)pWnd)->OnScaleChange();
} */
/*static void _OnScaleSetfocusFnc(CWnd *pWnd){
	((CSOMPregnancyViewDetail *)pWnd)->OnScaleSetfocus();} */ 
/*static void _OnScaleKillfocusFnc(CWnd *pWnd){
	((CSOMPregnancyViewDetail *)pWnd)->OnScaleKillfocus();
} */
static int _OnScaleCheckValueFnc(CWnd *pWnd){
	return ((CSOMPregnancyViewDetail *)pWnd)->OnScaleCheckValue();
} 
/*static void _OnMaleIndexChangeFnc(CWnd *pWnd){
	((CSOMPregnancyViewDetail *)pWnd)->OnMaleIndexChange();
} */
/*static void _OnMaleIndexSetfocusFnc(CWnd *pWnd){
	((CSOMPregnancyViewDetail *)pWnd)->OnMaleIndexSetfocus();} */ 
/*static void _OnMaleIndexKillfocusFnc(CWnd *pWnd){
	((CSOMPregnancyViewDetail *)pWnd)->OnMaleIndexKillfocus();
} */
static int _OnMaleIndexCheckValueFnc(CWnd *pWnd){
	return ((CSOMPregnancyViewDetail *)pWnd)->OnMaleIndexCheckValue();
} 
/*static void _OnFemaleIndexChangeFnc(CWnd *pWnd){
	((CSOMPregnancyViewDetail *)pWnd)->OnFemaleIndexChange();
} */
/*static void _OnFemaleIndexSetfocusFnc(CWnd *pWnd){
	((CSOMPregnancyViewDetail *)pWnd)->OnFemaleIndexSetfocus();} */ 
/*static void _OnFemaleIndexKillfocusFnc(CWnd *pWnd){
	((CSOMPregnancyViewDetail *)pWnd)->OnFemaleIndexKillfocus();
} */
static int _OnFemaleIndexCheckValueFnc(CWnd *pWnd){
	return ((CSOMPregnancyViewDetail *)pWnd)->OnFemaleIndexCheckValue();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CSOMPregnancyViewDetail *pVw = (CSOMPregnancyViewDetail *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CSOMPregnancyViewDetail *pVw = (CSOMPregnancyViewDetail *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CSOMPregnancyViewDetail *pVw = (CSOMPregnancyViewDetail *)pWnd;
	pVw->OnCancelSelect();
}
static void _OnPrintBoldSelectFnc(CWnd *pWnd){
	 ((CSOMPregnancyViewDetail*)pWnd)->OnPrintBoldSelect();
}
static int _OnAddParaclinicalInforFnc(CWnd *pWnd){
	 return ((CSOMPregnancyViewDetail*)pWnd)->OnAddParaclinicalInfor();
} 
static int _OnEditParaclinicalInforFnc(CWnd *pWnd){
	 return ((CSOMPregnancyViewDetail*)pWnd)->OnEditParaclinicalInfor();
} 
static int _OnDeleteParaclinicalInforFnc(CWnd *pWnd){
	 return ((CSOMPregnancyViewDetail*)pWnd)->OnDeleteParaclinicalInfor();
} 
static int _OnSaveParaclinicalInforFnc(CWnd *pWnd){
	 return ((CSOMPregnancyViewDetail*)pWnd)->OnSaveParaclinicalInfor();
} 
static int _OnCancelParaclinicalInforFnc(CWnd *pWnd){
	 return ((CSOMPregnancyViewDetail*)pWnd)->OnCancelParaclinicalInfor();
} 
CSOMPregnancyViewDetail::CSOMPregnancyViewDetail(CWnd *pParent):
	CGuiDialog(pParent)
{
	m_nDlgWidth = 605;
	m_nDlgHeight = 213;
	SetDefaultValues();
}
CSOMPregnancyViewDetail::~CSOMPregnancyViewDetail(){
}
void CSOMPregnancyViewDetail::OnCreateComponents(){
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
	//m_wndEdit.Create(this, _T("&Edit"), 349, 176, 424, 201);
	m_wndSave.Create(this, _T("&Save"), 429, 176, 509, 201);
	m_wndCancel.Create(this, _T("&Cancel"), 515, 176, 595, 201);
	m_wndPrintBold.Create(this, _T("Print Bold"), 9, 176, 103, 201);

}
void CSOMPregnancyViewDetail::OnInitializeComponents(){
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
	
}
void CSOMPregnancyViewDetail::OnSetWindowEvents(){
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
	/*AddEvent(1, _T("Add	Ctrl+A"), _OnAddParaclinicalInforFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditParaclinicalInforFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteParaclinicalInforFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveParaclinicalInforFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelParaclinicalInforFnc, 0, 'T', VK_CONTROL);*/
	GetDataToScreen();
}
void CSOMPregnancyViewDetail::OnDoDataExchange(CDataExchange* pDX){
	//DDX_TextEx(pDX, m_wndGroup.GetDlgCtrlID(), m_szGroupKey);
	DDX_Text(pDX, m_wndGroup.GetDlgCtrlID(), m_szGroupKey);
	DDX_TextEx(pDX, m_wndApplyDate.GetDlgCtrlID(), m_szApplyDate);
	DDX_Text(pDX, m_wndParaclinicalNameDetail.GetDlgCtrlID(), m_szParaclinicalNameDetail);
	DDX_Text(pDX, m_wndUnit.GetDlgCtrlID(), m_szUnit);
	DDX_Text(pDX, m_wndScale.GetDlgCtrlID(), m_nScale);
	DDX_Text(pDX, m_wndMaleIndex.GetDlgCtrlID(), m_szMaleIndex);
	DDX_Text(pDX, m_wndFemaleIndex.GetDlgCtrlID(), m_szFemaleIndex);
	DDX_Check(pDX, m_wndPrintBold.GetDlgCtrlID(), m_bPrintBold);
}
void CSOMPregnancyViewDetail::GetDataToScreen(){
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
	_T(" Hfl_Print_Bold as PrintBold") \
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

		SetMode(VM_VIEW);
	}
	else
		SetMode(VM_NONE);
}
void CSOMPregnancyViewDetail::GetScreenToData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_hms_fee_listTbl.SetValue(_T("hfl_print_bold"), m_bPrintBold?_T("Y"):_T("N"));
}
void CSOMPregnancyViewDetail::SetDefaultValues(){

	m_szGroupKey.Empty();
	m_szApplyDate.Empty();
	m_szParaclinicalNameDetail.Empty();
	m_szUnit.Empty();
	m_nScale=0;
	m_szMaleIndex.Empty();
	m_szFemaleIndex.Empty();
	m_bPrintBold=TRUE;

}
int CSOMPregnancyViewDetail::SetMode(int nMode){
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
void CSOMPregnancyViewDetail::OnGroupSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CSOMPregnancyViewDetail::OnGroupSelendok(){
	 
}
/*void CSOMPregnancyViewDetail::OnGroupSetfocus(){
	
}*/
/*void CSOMPregnancyViewDetail::OnGroupKillfocus(){
	
}*/
long CSOMPregnancyViewDetail::OnGroupLoadData(){
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
/*void CSOMPregnancyViewDetail::OnGroupAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CSOMPregnancyViewDetail::OnApplyDateChange(){
	
} */
/*void CSOMPregnancyViewDetail::OnApplyDateSetfocus(){
	
} */
/*void CSOMPregnancyViewDetail::OnApplyDateKillfocus(){
	
} */
int CSOMPregnancyViewDetail::OnApplyDateCheckValue(){
	return 0;
} 
/*void CSOMPregnancyViewDetail::OnParaclinicalNameChange(){
	
} */
/*void CSOMPregnancyViewDetail::OnParaclinicalNameSetfocus(){
	
} */
/*void CSOMPregnancyViewDetail::OnParaclinicalNameKillfocus(){
	
} */
int CSOMPregnancyViewDetail::OnParaclinicalNameCheckValue(){
	return 0;
} 
/*void CSOMPregnancyViewDetail::OnUnitChange(){
	
} */
/*void CSOMPregnancyViewDetail::OnUnitSetfocus(){
	
} */
/*void CSOMPregnancyViewDetail::OnUnitKillfocus(){
	
} */
int CSOMPregnancyViewDetail::OnUnitCheckValue(){
	return 0;
} 
/*void CSOMPregnancyViewDetail::OnScaleChange(){
	
} */
/*void CSOMPregnancyViewDetail::OnScaleSetfocus(){
	
} */
/*void CSOMPregnancyViewDetail::OnScaleKillfocus(){
	
} */
int CSOMPregnancyViewDetail::OnScaleCheckValue()
{
	if (m_nScale<=0)
	return -1;
	else
		return 0;	
}

/*void CSOMPregnancyViewDetail::OnMaleIndexChange(){
	
} */
/*void CSOMPregnancyViewDetail::OnMaleIndexSetfocus(){
	
} */
/*void CSOMPregnancyViewDetail::OnMaleIndexKillfocus(){
	
} */
int CSOMPregnancyViewDetail::OnMaleIndexCheckValue(){
	return 0;
} 
/*void CSOMPregnancyViewDetail::OnFemaleIndexChange(){
	
} */
/*void CSOMPregnancyViewDetail::OnFemaleIndexSetfocus(){
	
} */
/*void CSOMPregnancyViewDetail::OnFemaleIndexKillfocus(){
	
} */
int CSOMPregnancyViewDetail::OnFemaleIndexCheckValue(){
	return 0;
} 
void CSOMPregnancyViewDetail::OnEditSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CSOMPregnancyViewDetail::OnSaveSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	UpdateData(TRUE);
	CString szSQL, szPrintBold;
	if (m_bPrintBold)
		szPrintBold = _T("Y");
	else
		szPrintBold = _T("N");

	szSQL.Format(_T("UPDATE hms_fee_list ") \
		_T(" SET hfl_unit='%s', ") \
		_T(" hfl_scale=%d, ") \
		_T(" hfl_index1='%s', ") \
		_T(" hfl_index2='%s', ") \
		_T(" hfl_print_bold='%s' ") \
		_T(" WHERE hfl_feeid='%s'"), m_szUnit, m_nScale, m_szMaleIndex, m_szFemaleIndex,szPrintBold,m_szID);
	//rs.ExecSQL(szSQL);
	int ret = pMF->ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
	_msg(_T("%s"), szPrintBold);
	OnOK();	
	//SetMode(VM_VIEW);
	//return ret;
} 
void CSOMPregnancyViewDetail::OnCancelSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnCancel();
} 
void CSOMPregnancyViewDetail::OnPrintBoldSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
int CSOMPregnancyViewDetail::OnAddParaclinicalInfor(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CSOMPregnancyViewDetail::OnEditParaclinicalInfor(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CSOMPregnancyViewDetail::OnDeleteParaclinicalInfor(){
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
int CSOMPregnancyViewDetail::OnSaveParaclinicalInfor()
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

int CSOMPregnancyViewDetail::OnCancelParaclinicalInfor(){
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
int CSOMPregnancyViewDetail::OnParaclinicalInforListLoadData()
{
	return 0;
}