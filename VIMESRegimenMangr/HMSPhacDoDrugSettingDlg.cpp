#include "HMSPhacDoDrugSettingDlg.h"
#include "HMSMainFrame.h"
static void _OnClassSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSPhacDoDrugSettingDlg* )pWnd)->OnClassSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnClassSelendokFnc(CWnd *pWnd){
	((CHMSPhacDoDrugSettingDlg *)pWnd)->OnClassSelendok();
}
/*static void _OnClassSetfocusFnc(CWnd *pWnd){
	((CHMSPhacDoDrugSettingDlg *)pWnd)->OnClassKillfocus();
}*/
/*static void _OnClassKillfocusFnc(CWnd *pWnd){
	((CHMSPhacDoDrugSettingDlg *)pWnd)->OnClassKillfocus();
}*/
static long _OnClassLoadDataFnc(CWnd *pWnd){
	return ((CHMSPhacDoDrugSettingDlg *)pWnd)->OnClassLoadData();
}
/*static void _OnClassAddNewFnc(CWnd *pWnd){
	((CHMSPhacDoDrugSettingDlg *)pWnd)->OnClassAddNew();
}*/
/*static void _OnUnitChangeFnc(CWnd *pWnd){
	((CHMSPhacDoDrugSettingDlg *)pWnd)->OnUnitChange();
} */
/*static void _OnUnitSetfocusFnc(CWnd *pWnd){
	((CHMSPhacDoDrugSettingDlg *)pWnd)->OnUnitSetfocus();} */ 
/*static void _OnUnitKillfocusFnc(CWnd *pWnd){
	((CHMSPhacDoDrugSettingDlg *)pWnd)->OnUnitKillfocus();
} */
static int _OnUnitCheckValueFnc(CWnd *pWnd){
	return ((CHMSPhacDoDrugSettingDlg *)pWnd)->OnUnitCheckValue();
} 
/*static void _OnContentChangeFnc(CWnd *pWnd){
	((CHMSPhacDoDrugSettingDlg *)pWnd)->OnContentChange();
} */
/*static void _OnContentSetfocusFnc(CWnd *pWnd){
	((CHMSPhacDoDrugSettingDlg *)pWnd)->OnContentSetfocus();} */ 
/*static void _OnContentKillfocusFnc(CWnd *pWnd){
	((CHMSPhacDoDrugSettingDlg *)pWnd)->OnContentKillfocus();
} */
static int _OnContentCheckValueFnc(CWnd *pWnd){
	return ((CHMSPhacDoDrugSettingDlg *)pWnd)->OnContentCheckValue();
} 
/*static void _OnVolumnChangeFnc(CWnd *pWnd){
	((CHMSPhacDoDrugSettingDlg *)pWnd)->OnVolumnChange();
} */
/*static void _OnVolumnSetfocusFnc(CWnd *pWnd){
	((CHMSPhacDoDrugSettingDlg *)pWnd)->OnVolumnSetfocus();} */ 
/*static void _OnVolumnKillfocusFnc(CWnd *pWnd){
	((CHMSPhacDoDrugSettingDlg *)pWnd)->OnVolumnKillfocus();
} */
static int _OnVolumnCheckValueFnc(CWnd *pWnd){
	return ((CHMSPhacDoDrugSettingDlg *)pWnd)->OnVolumnCheckValue();
} 
/*static void _OnDousageChangeFnc(CWnd *pWnd){
	((CHMSPhacDoDrugSettingDlg *)pWnd)->OnDousageChange();
} */
/*static void _OnDousageSetfocusFnc(CWnd *pWnd){
	((CHMSPhacDoDrugSettingDlg *)pWnd)->OnDousageSetfocus();} */ 
/*static void _OnDousageKillfocusFnc(CWnd *pWnd){
	((CHMSPhacDoDrugSettingDlg *)pWnd)->OnDousageKillfocus();
} */
static int _OnDousageCheckValueFnc(CWnd *pWnd){
	return ((CHMSPhacDoDrugSettingDlg *)pWnd)->OnDousageCheckValue();
} 
static void _OnDousageBtnSelectFnc(CWnd *pWnd){
	CHMSPhacDoDrugSettingDlg *pVw = (CHMSPhacDoDrugSettingDlg *)pWnd;
	pVw->OnDousageBtnSelect();
} 
/*static void _OnDrugListChangeFnc(CWnd *pWnd){
	((CHMSPhacDoDrugSettingDlg *)pWnd)->OnDrugListChange();
} */
/*static void _OnDrugListSetfocusFnc(CWnd *pWnd){
	((CHMSPhacDoDrugSettingDlg *)pWnd)->OnDrugListSetfocus();} */ 
/*static void _OnDrugListKillfocusFnc(CWnd *pWnd){
	((CHMSPhacDoDrugSettingDlg *)pWnd)->OnDrugListKillfocus();
} */
static int _OnDrugListCheckValueFnc(CWnd *pWnd){
	return ((CHMSPhacDoDrugSettingDlg *)pWnd)->OnDrugListCheckValue();
} 
static void _OnDrugListBtnSelectFnc(CWnd *pWnd){
	CHMSPhacDoDrugSettingDlg *pVw = (CHMSPhacDoDrugSettingDlg *)pWnd;
	pVw->OnDrugListBtnSelect();
} 
/*static void _OnUserManualChangeFnc(CWnd *pWnd){
	((CHMSPhacDoDrugSettingDlg *)pWnd)->OnUserManualChange();
} */
/*static void _OnUserManualSetfocusFnc(CWnd *pWnd){
	((CHMSPhacDoDrugSettingDlg *)pWnd)->OnUserManualSetfocus();} */ 
/*static void _OnUserManualKillfocusFnc(CWnd *pWnd){
	((CHMSPhacDoDrugSettingDlg *)pWnd)->OnUserManualKillfocus();
} */
static int _OnUserManualCheckValueFnc(CWnd *pWnd){
	return ((CHMSPhacDoDrugSettingDlg *)pWnd)->OnUserManualCheckValue();
} 
/*static void _OnInfusionChangeFnc(CWnd *pWnd){
	((CHMSPhacDoDrugSettingDlg *)pWnd)->OnInfusionChange();
} */
/*static void _OnInfusionSetfocusFnc(CWnd *pWnd){
	((CHMSPhacDoDrugSettingDlg *)pWnd)->OnInfusionSetfocus();} */ 
/*static void _OnInfusionKillfocusFnc(CWnd *pWnd){
	((CHMSPhacDoDrugSettingDlg *)pWnd)->OnInfusionKillfocus();
} */
static int _OnInfusionCheckValueFnc(CWnd *pWnd){
	return ((CHMSPhacDoDrugSettingDlg *)pWnd)->OnInfusionCheckValue();
} 
static void _OnInfutionBtnSelectFnc(CWnd *pWnd){
	CHMSPhacDoDrugSettingDlg *pVw = (CHMSPhacDoDrugSettingDlg *)pWnd;
	pVw->OnInfutionBtnSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSPhacDoDrugSettingDlg*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSPhacDoDrugSettingDlg*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSPhacDoDrugSettingDlg*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSPhacDoDrugSettingDlg*)pWnd)->OnListDeleteItem();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSPhacDoDrugSettingDlg *pVw = (CHMSPhacDoDrugSettingDlg *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CHMSPhacDoDrugSettingDlg *pVw = (CHMSPhacDoDrugSettingDlg *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSPhacDoDrugSettingDlg *pVw = (CHMSPhacDoDrugSettingDlg *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSPhacDoDrugSettingDlg *pVw = (CHMSPhacDoDrugSettingDlg *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSPhacDoDrugSettingDlg *pVw = (CHMSPhacDoDrugSettingDlg *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSPhacDoDrugSettingDlg *pVw = (CHMSPhacDoDrugSettingDlg *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSPhacDoDrugSettingDlgFnc(CWnd *pWnd){
	 return ((CHMSPhacDoDrugSettingDlg*)pWnd)->OnAddHMSPhacDoDrugSettingDlg();
} 
static int _OnEditHMSPhacDoDrugSettingDlgFnc(CWnd *pWnd){
	 return ((CHMSPhacDoDrugSettingDlg*)pWnd)->OnEditHMSPhacDoDrugSettingDlg();
} 
static int _OnDeleteHMSPhacDoDrugSettingDlgFnc(CWnd *pWnd){
	 return ((CHMSPhacDoDrugSettingDlg*)pWnd)->OnDeleteHMSPhacDoDrugSettingDlg();
} 
static int _OnSaveHMSPhacDoDrugSettingDlgFnc(CWnd *pWnd){
	 return ((CHMSPhacDoDrugSettingDlg*)pWnd)->OnSaveHMSPhacDoDrugSettingDlg();
} 
static int _OnCancelHMSPhacDoDrugSettingDlgFnc(CWnd *pWnd){
	 return ((CHMSPhacDoDrugSettingDlg*)pWnd)->OnCancelHMSPhacDoDrugSettingDlg();
} 
CHMSPhacDoDrugSettingDlg::CHMSPhacDoDrugSettingDlg(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CHMSPhacDoDrugSettingDlg::~CHMSPhacDoDrugSettingDlg(){
}
void CHMSPhacDoDrugSettingDlg::OnCreateComponents(){
	m_wndGrpClassInfor.Create(this, _T("Thông tin hoạt chất"), 5, 5, 655, 260);
	m_wndClassLabel.Create(this, _T("Hoạt chất"), 10, 32, 150, 57);
	m_wndClass.Create(this,155, 32, 650, 57); 
	m_wndUnitLabel.Create(this, _T("Unit"), 10, 61, 70, 86);
	m_wndUnit.Create(this,155, 60, 220, 85); 
	m_wndContentLabel.Create(this, _T("Hàm lượng/Nồng độ"), 223, 60, 363, 85);
	m_wndContent.Create(this,368, 60, 478, 85); 
	m_wndVolumnLabel.Create(this, _T("Thể tích"), 485, 60, 565, 85);
	m_wndVolumn.Create(this,570, 60, 650, 85); 
	m_wndDousageLabel.Create(this, _T("Liều dùng"), 10, 90, 150, 115);
	m_wndDousage.Create(this,155, 90, 621, 115); 
	m_wndDousageBtn.Create(this, _T("..."), 625, 90, 650, 115);
	m_wndDrugListLabel.Create(this, _T("Drug List"), 10, 120, 150, 145);
	m_wndDrugList.Create(this,155, 120, 620, 145); 
	m_wndDrugListBtn.Create(this, _T("..."), 625, 120, 650, 145);
	m_wndUsermanualLabel.Create(this, _T("Hướng dẫn sử dụng"), 10, 150, 150, 175);
	m_wndUserManual.Create(this,155, 150, 620, 225, TRUE, FALSE, TRUE);  
	m_wndInfusionLabel.Create(this, _T("Dịch truyền"), 10, 230, 150, 255);
	m_wndInfusion.Create(this,155, 230, 620, 255); 
	m_wndInfutionBtn.Create(this, _T("..."), 625, 230, 650, 255);
	m_wndList.Create(this,5, 295, 1005, 680); 
	m_wndAdd.Create(this, _T("&Add"), 235, 265, 315, 290);
	m_wndEdit.Create(this, _T("Edit"), 320, 265, 400, 290);
	m_wndDelete.Create(this, _T("Delete"), 405, 265, 485, 290);
	m_wndSave.Create(this, _T("Save"), 490, 265, 570, 290);
	m_wndCancel.Create(this, _T("Cancel"), 575, 265, 655, 290);
	m_wndClose.Create(this, _T("Close"), 925, 685, 1005, 710);

	m_wndDousageBtn.ModifyStyle(WS_TABSTOP, 0);
	m_wndDrugListBtn.ModifyStyle(WS_TABSTOP, 0);
	m_wndInfutionBtn.ModifyStyle(WS_TABSTOP, 0);

}
void CHMSPhacDoDrugSettingDlg::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndClass.SetCheckValue(true);
	m_wndClass.LimitText(35);
	m_wndUnit.SetLimitText(35);
	m_wndUnit.SetCheckValue(true);
	m_wndContent.SetLimitText(35);
//	m_wndContent.SetCheckValue(true);
	m_wndVolumn.SetLimitText(16);
	//m_wndVolumn.SetCheckValue(true);
	m_wndDousage.SetLimitText(2048);
	m_wndDousage.SetCheckValue(true);
	m_wndDrugList.SetLimitText(2048);
//	m_wndDrugList.SetCheckValue(true);
	m_wndUserManual.SetLimitText(2048);
	m_wndUserManual.SetCheckValue(true);
	m_wndInfusion.SetLimitText(2048);
	//m_wndInfusion.SetCheckValue(true);


	m_wndClass.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndClass.InsertColumn(1, _T("Name"), CFMT_TEXT, 300);


	m_wndList.InsertColumn(0, _T("IDX"), CFMT_TEXT, 0);
	m_wndList.InsertColumn(1, _T("STT"), CFMT_TEXT, 30);
	m_wndList.InsertColumn(2, _T("Mã hoạt chất"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(3, _T("Tên hoạt chất"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(4, _T("Hàm lượng/nồng độ"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(5, _T("Thể tích"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(6, _T("Liều dùng"), CFMT_TEXT, 200);
	m_wndList.InsertColumn(7, _T("Hướng dẫn sử dụng"), CFMT_TEXT, 400);
	m_wndList.InsertColumn(8, _T("Dịch truyền"), CFMT_TEXT, 300);

	

}
void CHMSPhacDoDrugSettingDlg::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndClass.SetEvent(WE_SELENDOK, _OnClassSelendokFnc);
	//m_wndClass.SetEvent(WE_SETFOCUS, _OnClassSetfocusFnc);
	//m_wndClass.SetEvent(WE_KILLFOCUS, _OnClassKillfocusFnc);
	m_wndClass.SetEvent(WE_SELCHANGE, _OnClassSelectChangeFnc);
	m_wndClass.SetEvent(WE_LOADDATA, _OnClassLoadDataFnc);
	//m_wndClass.SetEvent(WE_ADDNEW, _OnClassAddNewFnc);
	//m_wndUnit.SetEvent(WE_CHANGE, _OnUnitChangeFnc);
	//m_wndUnit.SetEvent(WE_SETFOCUS, _OnUnitSetfocusFnc);
	//m_wndUnit.SetEvent(WE_KILLFOCUS, _OnUnitKillfocusFnc);
	m_wndUnit.SetEvent(WE_CHECKVALUE, _OnUnitCheckValueFnc);
	//m_wndContent.SetEvent(WE_CHANGE, _OnContentChangeFnc);
	//m_wndContent.SetEvent(WE_SETFOCUS, _OnContentSetfocusFnc);
	//m_wndContent.SetEvent(WE_KILLFOCUS, _OnContentKillfocusFnc);
	m_wndContent.SetEvent(WE_CHECKVALUE, _OnContentCheckValueFnc);
	//m_wndVolumn.SetEvent(WE_CHANGE, _OnVolumnChangeFnc);
	//m_wndVolumn.SetEvent(WE_SETFOCUS, _OnVolumnSetfocusFnc);
	//m_wndVolumn.SetEvent(WE_KILLFOCUS, _OnVolumnKillfocusFnc);
	m_wndVolumn.SetEvent(WE_CHECKVALUE, _OnVolumnCheckValueFnc);
	//m_wndDousage.SetEvent(WE_CHANGE, _OnDousageChangeFnc);
	//m_wndDousage.SetEvent(WE_SETFOCUS, _OnDousageSetfocusFnc);
	//m_wndDousage.SetEvent(WE_KILLFOCUS, _OnDousageKillfocusFnc);
	m_wndDousage.SetEvent(WE_CHECKVALUE, _OnDousageCheckValueFnc);
	m_wndDousageBtn.SetEvent(WE_CLICK, _OnDousageBtnSelectFnc);
	//m_wndDrugList.SetEvent(WE_CHANGE, _OnDrugListChangeFnc);
	//m_wndDrugList.SetEvent(WE_SETFOCUS, _OnDrugListSetfocusFnc);
	//m_wndDrugList.SetEvent(WE_KILLFOCUS, _OnDrugListKillfocusFnc);
	m_wndDrugList.SetEvent(WE_CHECKVALUE, _OnDrugListCheckValueFnc);
	m_wndDrugListBtn.SetEvent(WE_CLICK, _OnDrugListBtnSelectFnc);
	//m_wndUserManual.SetEvent(WE_CHANGE, _OnUserManualChangeFnc);
	//m_wndUserManual.SetEvent(WE_SETFOCUS, _OnUserManualSetfocusFnc);
	//m_wndUserManual.SetEvent(WE_KILLFOCUS, _OnUserManualKillfocusFnc);
	m_wndUserManual.SetEvent(WE_CHECKVALUE, _OnUserManualCheckValueFnc);
	//m_wndInfusion.SetEvent(WE_CHANGE, _OnInfusionChangeFnc);
	//m_wndInfusion.SetEvent(WE_SETFOCUS, _OnInfusionSetfocusFnc);
	//m_wndInfusion.SetEvent(WE_KILLFOCUS, _OnInfusionKillfocusFnc);
	m_wndInfusion.SetEvent(WE_CHECKVALUE, _OnInfusionCheckValueFnc);
	m_wndInfutionBtn.SetEvent(WE_CLICK, _OnInfutionBtnSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_VIEW);
	OnListLoadData();

}
void CHMSPhacDoDrugSettingDlg::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndClass.GetDlgCtrlID(), m_szClassKey);
	DDX_Text(pDX, m_wndUnit.GetDlgCtrlID(), m_szUnit);
	DDX_Text(pDX, m_wndContent.GetDlgCtrlID(), m_szContent);
	DDX_Text(pDX, m_wndVolumn.GetDlgCtrlID(), m_nVolumn);
	DDX_Text(pDX, m_wndDousage.GetDlgCtrlID(), m_szDousage);
	DDX_Text(pDX, m_wndDrugList.GetDlgCtrlID(), m_szDrugList);
	DDX_Text(pDX, m_wndUserManual.GetDlgCtrlID(), m_szUserManual);
	DDX_Text(pDX, m_wndInfusion.GetDlgCtrlID(), m_szInfusion);

}
void CHMSPhacDoDrugSettingDlg::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Class")] =  m_szClassKey;
	m_jData[_T("Unit")] =  m_szUnit;
	m_jData[_T("Content")] =  m_szContent;
	m_jData[_T("Volumn")] =  m_nVolumn;
	m_jData[_T("Dousage")] =  m_szDousage;
	m_jData[_T("DrugList")] =  m_szDrugList;
	m_jData[_T("UserManual")] =  m_szUserManual;
	m_jData[_T("Infusion")] =  m_szInfusion;
	}
	else
	{
			
	m_jData[_T("Class")].GetValue(m_szClassKey);
	m_jData[_T("Unit")].GetValue(m_szUnit);
	m_jData[_T("Content")].GetValue(m_szContent);
	m_jData[_T("Volumn")].GetValue(m_nVolumn);
	m_jData[_T("Dousage")].GetValue(m_szDousage);
	m_jData[_T("DrugList")].GetValue(m_szDrugList);
	m_jData[_T("UserManual")].GetValue(m_szUserManual);
	m_jData[_T("Infusion")].GetValue(m_szInfusion);
	}

}
void CHMSPhacDoDrugSettingDlg::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;

	szSQL.Format(_T("select * from hms_phacdo_line ") \
				_T(" left join m_product_class on (  mpc_product_class_id = cast(itemid as integer) )  ") \
				_T("	where hms_phacdo_id =%ld and typeid ='DRU' and itemid ='%s' and idx=%ld "), m_nPhacDoID, m_szClassKey, m_nIdx);
	rs.ExecSQL(szSQL);
	int tmpInt =1;
	
	if(!rs.IsEOF()){ 
		
			rs.GetValue(_T("itemid"), m_szClassKey);
			rs.GetValue(_T("content"),m_szContent);
			rs.GetValue(_T("unit"),m_szUnit); 
			rs.GetValue(_T("volumn"),m_nVolumn); 
			rs.GetValue(_T("dousage"), m_szDousage); 
			rs.GetValue(_T("usemanual"),m_szUserManual); 
			rs.GetValue(_T("insusion"),m_szInfusion);
			rs.GetValue(_T("insusionname"),m_szInfusionName);
			rs.GetValue(_T("druglist"),m_szDrugList);
			rs.GetValue(_T("druglistname"),m_szDrugListName);
			UpdateData(false);
	}

}
void CHMSPhacDoDrugSettingDlg::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CHMSPhacDoDrugSettingDlg::SetDefaultValues(){

	m_szClassKey.Empty();
	m_szUnit.Empty();
	m_szContent.Empty();
	m_nVolumn=0;
	m_szDousage.Empty();
	m_szDrugList.Empty();
	m_szUserManual.Empty();
	m_szInfusion.Empty();
	m_nIdx=0;


}
int CHMSPhacDoDrugSettingDlg::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
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
			m_wndDousageBtn.EnableWindow(true);
			m_wndDrugListBtn.EnableWindow(true);
			m_wndInfutionBtn.EnableWindow(true);
 			break;
 		case VM_VIEW: 
 			EnableControls(FALSE);
 			EnableButtons(FALSE, 3, 4, -1);
			m_wndDousageBtn.EnableWindow(false);
			m_wndDrugListBtn.EnableWindow(false);
			m_wndInfutionBtn.EnableWindow(false);
 			break;
 		case VM_NONE: 
 			EnableControls(FALSE);
 			EnableButtons(TRUE, 0, 6, -1);
 			SetDefaultValues();
 			break;
 		};
		m_wndDrugList.EnableWindow(false);
		m_wndInfusion.EnableWindow(false);
 		UpdateData(FALSE);
 		return nOldMode;
}
void CHMSPhacDoDrugSettingDlg::OnClassSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPhacDoDrugSettingDlg::OnClassSelendok(){
	 
}
/*void CHMSPhacDoDrugSettingDlg::OnClassSetfocus(){
	
}*/
/*void CHMSPhacDoDrugSettingDlg::OnClassKillfocus(){
	
}*/
long CHMSPhacDoDrugSettingDlg::OnClassLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndClass.IsSearchKey() && !m_szClassKey.IsEmpty())
	 szWhere.Format(_T(" and mpc_product_class_id='%s' "), m_szClassKey);
	m_wndClass.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("select mpc_product_class_id as id , mpc_name as name   ") \
				_T("	from m_product_class   ") \
				_T("	where 1=1 %s  ") \
				_T("	and (select count(*) from m_product_classline where mpcl_refid =mpc_product_class_id) = 0 ORDER BY name "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndClass.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CHMSPhacDoDrugSettingDlg::OnClassAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSPhacDoDrugSettingDlg::OnUnitChange(){
	
} */
/*void CHMSPhacDoDrugSettingDlg::OnUnitSetfocus(){
	
} */
/*void CHMSPhacDoDrugSettingDlg::OnUnitKillfocus(){
	
} */
int CHMSPhacDoDrugSettingDlg::OnUnitCheckValue(){
	return 0;
} 
/*void CHMSPhacDoDrugSettingDlg::OnContentChange(){
	
} */
/*void CHMSPhacDoDrugSettingDlg::OnContentSetfocus(){
	
} */
/*void CHMSPhacDoDrugSettingDlg::OnContentKillfocus(){
	
} */
int CHMSPhacDoDrugSettingDlg::OnContentCheckValue(){
	return 0;
} 
/*void CHMSPhacDoDrugSettingDlg::OnVolumnChange(){
	
} */
/*void CHMSPhacDoDrugSettingDlg::OnVolumnSetfocus(){
	
} */
/*void CHMSPhacDoDrugSettingDlg::OnVolumnKillfocus(){
	
} */
int CHMSPhacDoDrugSettingDlg::OnVolumnCheckValue(){
	return 0;
} 
/*void CHMSPhacDoDrugSettingDlg::OnDousageChange(){
	
} */
/*void CHMSPhacDoDrugSettingDlg::OnDousageSetfocus(){
	
} */
/*void CHMSPhacDoDrugSettingDlg::OnDousageKillfocus(){
	
} */
int CHMSPhacDoDrugSettingDlg::OnDousageCheckValue(){
	return 0;
} 
void CHMSPhacDoDrugSettingDlg::OnDousageBtnSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
/*void CHMSPhacDoDrugSettingDlg::OnDrugListChange(){
	
} */
/*void CHMSPhacDoDrugSettingDlg::OnDrugListSetfocus(){
	
} */
/*void CHMSPhacDoDrugSettingDlg::OnDrugListKillfocus(){
	
} */
int CHMSPhacDoDrugSettingDlg::OnDrugListCheckValue(){
	return 0;
} 
void CHMSPhacDoDrugSettingDlg::OnDrugListBtnSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
/*void CHMSPhacDoDrugSettingDlg::OnUserManualChange(){
	
} */
/*void CHMSPhacDoDrugSettingDlg::OnUserManualSetfocus(){
	
} */
/*void CHMSPhacDoDrugSettingDlg::OnUserManualKillfocus(){
	
} */
int CHMSPhacDoDrugSettingDlg::OnUserManualCheckValue(){
	return 0;
} 
/*void CHMSPhacDoDrugSettingDlg::OnInfusionChange(){
	
} */
/*void CHMSPhacDoDrugSettingDlg::OnInfusionSetfocus(){
	
} */
/*void CHMSPhacDoDrugSettingDlg::OnInfusionKillfocus(){
	
} */
int CHMSPhacDoDrugSettingDlg::OnInfusionCheckValue(){
	return 0;
} 
void CHMSPhacDoDrugSettingDlg::OnInfutionBtnSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPhacDoDrugSettingDlg::OnListDblClick(){
	
} 
void CHMSPhacDoDrugSettingDlg::OnListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	if(nNewItem <0) return;
	m_szClassKey= m_wndList.GetItemText(nNewItem,2);
	m_nIdx= str2long(m_wndList.GetItemText(nNewItem,0));
	SetMode(VM_VIEW);
	GetDataToScreen();
	
} 
int CHMSPhacDoDrugSettingDlg::OnListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnDeleteHMSPhacDoDrugSettingDlg();
	 return 0;
} 
long CHMSPhacDoDrugSettingDlg::OnListLoadData(){

	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL,tmpStr,szWhere;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	if(m_nPhacDoLineID >0)
		szWhere.Format(_T(" and hms_phacdo_day_id=%ld "), m_nPhacDoLineID);
	szSQL.Format(_T("select * from hms_phacdo_line ") \
				_T(" left join m_product_class on (  mpc_product_class_id = cast(itemid as integer) )  ") \
				_T("	where hms_phacdo_id =%ld and typeid ='DRU' %s  "), m_nPhacDoID, szWhere);
	nCount = rs.ExecSQL(szSQL);
	int tmpInt =1;
	while(!rs.IsEOF()){ 
		tmpStr.Format(_T("%d"), tmpInt++);
		m_wndList.AddItems(
			rs.GetValue(_T("idx")), 
			tmpStr, 
			rs.GetValue(_T("itemid")), 
			rs.GetValue(_T("mpc_name")), 
			rs.GetValue(_T("content")), 
			rs.GetValue(_T("volumn")), 
			rs.GetValue(_T("dousage")), 
			rs.GetValue(_T("usemanual")), 
			rs.GetValue(_T("insusion")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;

}
void CHMSPhacDoDrugSettingDlg::OnAddSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnAddHMSPhacDoDrugSettingDlg();
	
} 
void CHMSPhacDoDrugSettingDlg::OnEditSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnEditHMSPhacDoDrugSettingDlg();
	
} 
void CHMSPhacDoDrugSettingDlg::OnDeleteSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnDeleteHMSPhacDoDrugSettingDlg();
	
} 
void CHMSPhacDoDrugSettingDlg::OnSaveSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnSaveHMSPhacDoDrugSettingDlg();
	
} 
void CHMSPhacDoDrugSettingDlg::OnCancelSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnCancelHMSPhacDoDrugSettingDlg();
} 
void CHMSPhacDoDrugSettingDlg::OnCloseSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CHMSPhacDoDrugSettingDlg::OnAddHMSPhacDoDrugSettingDlg(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSPhacDoDrugSettingDlg::OnEditHMSPhacDoDrugSettingDlg(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSPhacDoDrugSettingDlg::OnDeleteHMSPhacDoDrugSettingDlg(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
 	CString szSQL,szWhere;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
	if(m_nPhacDoLineID >0)
		szWhere.Format(_T(" and hms_phacdo_day_id=%ld "), m_nPhacDoLineID);
	szSQL.Format(_T("DELETE FROM  hms_phacdo_line WHERE hms_phacdo_id=%ld AND typeid='DRU' and itemid='%s' and idx=%ld %s "),m_nPhacDoID, m_szClassKey,m_nIdx, szWhere );
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
		OnListLoadData();
 		SetMode(VM_VIEW);
		
 	}
	return 0;
}
int CHMSPhacDoDrugSettingDlg::OnSaveHMSPhacDoDrugSettingDlg(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
 		szSQL.Format(_T("hms_phacdo_addline_drug(%ld,%ld,%ld,'%s','%s', '%s','%s', %ld,'%s','%s','%s','%s','%s','%s') "),
			m_nPhacDoID,m_nPhacDoLineID,m_nIdx, _T("DRU"), m_szClassKey,m_szUnit,m_szContent,m_nVolumn, m_szDousage, m_szDrugList, m_szDrugListName, m_szUserManual, m_szInfusion, m_szInfusionName );
		//	pMF->ExecDML(szSQL);
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
 		szSQL.Format(_T("hms_phacdo_addline_drug(%ld,%ld,%ld, '%s','%s', '%s','%s', %ld,'%s','%s','%s','%s','%s','%s') "),
			m_nPhacDoID,m_nPhacDoLineID,m_nIdx, _T("DRU"), m_szClassKey,m_szUnit,m_szContent,m_nVolumn, m_szDousage, m_szDrugList, m_szDrugListName, m_szUserManual, m_szInfusion, m_szInfusionName );
 	}
 _fmsg(_T("%s"), szSQL);
 	int ret = str2int(pMF->ExecDML(szSQL));
 	if(ret > 0)
 	{
 		//OnHMSPhacDoDrugSettingDlgListLoadData();
 		SetMode(VM_VIEW);
		OnListLoadData();
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSPhacDoDrugSettingDlg::OnCancelHMSPhacDoDrugSettingDlg(){
	SetMode(VM_VIEW);
 	/*if(GetMode() == VM_EDIT)
 	{
 		SetMode(VM_VIEW);
 	} 
 	else 
 	{
 		SetMode(VM_VIEW);
 	} */
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
 	return 0;
} 
int CHMSPhacDoDrugSettingDlg::OnHMSPhacDoDrugSettingDlgListLoadData(){
	return 0;
}
