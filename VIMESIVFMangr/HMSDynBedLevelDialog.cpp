#include "HMSDynBedLevelDialog.h"
#include "MainFrm.h"
static void _OnLevel1SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSDynBedLevelDialog* )pWnd)->OnLevel1SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnLevel1SelendokFnc(CWnd *pWnd){
	((CHMSDynBedLevelDialog *)pWnd)->OnLevel1Selendok();
}
/*static void _OnLevel1SetfocusFnc(CWnd *pWnd){
	((CHMSDynBedLevelDialog *)pWnd)->OnLevel1Killfocus();
}*/
/*static void _OnLevel1KillfocusFnc(CWnd *pWnd){
	((CHMSDynBedLevelDialog *)pWnd)->OnLevel1Killfocus();
}*/
static long _OnLevel1LoadDataFnc(CWnd *pWnd){
	return ((CHMSDynBedLevelDialog *)pWnd)->OnLevel1LoadData();
}
/*static void _OnLevel1AddNewFnc(CWnd *pWnd){
	((CHMSDynBedLevelDialog *)pWnd)->OnLevel1AddNew();
}*/
/*static void _OnDays1ChangeFnc(CWnd *pWnd){
	((CHMSDynBedLevelDialog *)pWnd)->OnDays1Change();
} */
/*static void _OnDays1SetfocusFnc(CWnd *pWnd){
	((CHMSDynBedLevelDialog *)pWnd)->OnDays1Setfocus();} */ 
/*static void _OnDays1KillfocusFnc(CWnd *pWnd){
	((CHMSDynBedLevelDialog *)pWnd)->OnDays1Killfocus();
} */
static int _OnDays1CheckValueFnc(CWnd *pWnd){
	return ((CHMSDynBedLevelDialog *)pWnd)->OnDays1CheckValue();
} 
static void _OnPayrate1SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSDynBedLevelDialog* )pWnd)->OnPayrate1SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPayrate1SelendokFnc(CWnd *pWnd){
	((CHMSDynBedLevelDialog *)pWnd)->OnPayrate1Selendok();
}
/*static void _OnPayrate1SetfocusFnc(CWnd *pWnd){
	((CHMSDynBedLevelDialog *)pWnd)->OnPayrate1Killfocus();
}*/
/*static void _OnPayrate1KillfocusFnc(CWnd *pWnd){
	((CHMSDynBedLevelDialog *)pWnd)->OnPayrate1Killfocus();
}*/
static long _OnPayrate1LoadDataFnc(CWnd *pWnd){
	return ((CHMSDynBedLevelDialog *)pWnd)->OnPayrate1LoadData();
}
/*static void _OnPayrate1AddNewFnc(CWnd *pWnd){
	((CHMSDynBedLevelDialog *)pWnd)->OnPayrate1AddNew();
}*/
static void _OnLevel2SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSDynBedLevelDialog* )pWnd)->OnLevel2SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnLevel2SelendokFnc(CWnd *pWnd){
	((CHMSDynBedLevelDialog *)pWnd)->OnLevel2Selendok();
}
/*static void _OnLevel2SetfocusFnc(CWnd *pWnd){
	((CHMSDynBedLevelDialog *)pWnd)->OnLevel2Killfocus();
}*/
/*static void _OnLevel2KillfocusFnc(CWnd *pWnd){
	((CHMSDynBedLevelDialog *)pWnd)->OnLevel2Killfocus();
}*/
static long _OnLevel2LoadDataFnc(CWnd *pWnd){
	return ((CHMSDynBedLevelDialog *)pWnd)->OnLevel2LoadData();
}
/*static void _OnLevel2AddNewFnc(CWnd *pWnd){
	((CHMSDynBedLevelDialog *)pWnd)->OnLevel2AddNew();
}*/
/*static void _OnDays2ChangeFnc(CWnd *pWnd){
	((CHMSDynBedLevelDialog *)pWnd)->OnDays2Change();
} */
/*static void _OnDays2SetfocusFnc(CWnd *pWnd){
	((CHMSDynBedLevelDialog *)pWnd)->OnDays2Setfocus();} */ 
/*static void _OnDays2KillfocusFnc(CWnd *pWnd){
	((CHMSDynBedLevelDialog *)pWnd)->OnDays2Killfocus();
} */
static int _OnDays2CheckValueFnc(CWnd *pWnd){
	return ((CHMSDynBedLevelDialog *)pWnd)->OnDays2CheckValue();
} 
static void _OnPayrate2SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSDynBedLevelDialog* )pWnd)->OnPayrate2SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPayrate2SelendokFnc(CWnd *pWnd){
	((CHMSDynBedLevelDialog *)pWnd)->OnPayrate2Selendok();
}
/*static void _OnPayrate2SetfocusFnc(CWnd *pWnd){
	((CHMSDynBedLevelDialog *)pWnd)->OnPayrate2Killfocus();
}*/
/*static void _OnPayrate2KillfocusFnc(CWnd *pWnd){
	((CHMSDynBedLevelDialog *)pWnd)->OnPayrate2Killfocus();
}*/
static long _OnPayrate2LoadDataFnc(CWnd *pWnd){
	return ((CHMSDynBedLevelDialog *)pWnd)->OnPayrate2LoadData();
}
/*static void _OnPayrate2AddNewFnc(CWnd *pWnd){
	((CHMSDynBedLevelDialog *)pWnd)->OnPayrate2AddNew();
}*/
static void _OnLevel3SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSDynBedLevelDialog* )pWnd)->OnLevel3SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnLevel3SelendokFnc(CWnd *pWnd){
	((CHMSDynBedLevelDialog *)pWnd)->OnLevel3Selendok();
}
/*static void _OnLevel3SetfocusFnc(CWnd *pWnd){
	((CHMSDynBedLevelDialog *)pWnd)->OnLevel3Killfocus();
}*/
/*static void _OnLevel3KillfocusFnc(CWnd *pWnd){
	((CHMSDynBedLevelDialog *)pWnd)->OnLevel3Killfocus();
}*/
static long _OnLevel3LoadDataFnc(CWnd *pWnd){
	return ((CHMSDynBedLevelDialog *)pWnd)->OnLevel3LoadData();
}
/*static void _OnLevel3AddNewFnc(CWnd *pWnd){
	((CHMSDynBedLevelDialog *)pWnd)->OnLevel3AddNew();
}*/
/*static void _OnDays3ChangeFnc(CWnd *pWnd){
	((CHMSDynBedLevelDialog *)pWnd)->OnDays3Change();
} */
/*static void _OnDays3SetfocusFnc(CWnd *pWnd){
	((CHMSDynBedLevelDialog *)pWnd)->OnDays3Setfocus();} */ 
/*static void _OnDays3KillfocusFnc(CWnd *pWnd){
	((CHMSDynBedLevelDialog *)pWnd)->OnDays3Killfocus();
} */
static int _OnDays3CheckValueFnc(CWnd *pWnd){
	return ((CHMSDynBedLevelDialog *)pWnd)->OnDays3CheckValue();
} 
static void _OnPayrate3SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSDynBedLevelDialog* )pWnd)->OnPayrate3SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPayrate3SelendokFnc(CWnd *pWnd){
	((CHMSDynBedLevelDialog *)pWnd)->OnPayrate3Selendok();
}
/*static void _OnPayrate3SetfocusFnc(CWnd *pWnd){
	((CHMSDynBedLevelDialog *)pWnd)->OnPayrate3Killfocus();
}*/
/*static void _OnPayrate3KillfocusFnc(CWnd *pWnd){
	((CHMSDynBedLevelDialog *)pWnd)->OnPayrate3Killfocus();
}*/
static long _OnPayrate3LoadDataFnc(CWnd *pWnd){
	return ((CHMSDynBedLevelDialog *)pWnd)->OnPayrate3LoadData();
}
/*static void _OnPayrate3AddNewFnc(CWnd *pWnd){
	((CHMSDynBedLevelDialog *)pWnd)->OnPayrate3AddNew();
}*/
static void _OnLevel4SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSDynBedLevelDialog* )pWnd)->OnLevel4SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnLevel4SelendokFnc(CWnd *pWnd){
	((CHMSDynBedLevelDialog *)pWnd)->OnLevel4Selendok();
}
/*static void _OnLevel4SetfocusFnc(CWnd *pWnd){
	((CHMSDynBedLevelDialog *)pWnd)->OnLevel4Killfocus();
}*/
/*static void _OnLevel4KillfocusFnc(CWnd *pWnd){
	((CHMSDynBedLevelDialog *)pWnd)->OnLevel4Killfocus();
}*/
static long _OnLevel4LoadDataFnc(CWnd *pWnd){
	return ((CHMSDynBedLevelDialog *)pWnd)->OnLevel4LoadData();
}
/*static void _OnLevel4AddNewFnc(CWnd *pWnd){
	((CHMSDynBedLevelDialog *)pWnd)->OnLevel4AddNew();
}*/
/*static void _OnDays4ChangeFnc(CWnd *pWnd){
	((CHMSDynBedLevelDialog *)pWnd)->OnDays4Change();
} */
/*static void _OnDays4SetfocusFnc(CWnd *pWnd){
	((CHMSDynBedLevelDialog *)pWnd)->OnDays4Setfocus();} */ 
/*static void _OnDays4KillfocusFnc(CWnd *pWnd){
	((CHMSDynBedLevelDialog *)pWnd)->OnDays4Killfocus();
} */
static int _OnDays4CheckValueFnc(CWnd *pWnd){
	return ((CHMSDynBedLevelDialog *)pWnd)->OnDays4CheckValue();
} 
static void _OnPayrate4SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSDynBedLevelDialog* )pWnd)->OnPayrate4SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPayrate4SelendokFnc(CWnd *pWnd){
	((CHMSDynBedLevelDialog *)pWnd)->OnPayrate4Selendok();
}
/*static void _OnPayrate4SetfocusFnc(CWnd *pWnd){
	((CHMSDynBedLevelDialog *)pWnd)->OnPayrate4Killfocus();
}*/
/*static void _OnPayrate4KillfocusFnc(CWnd *pWnd){
	((CHMSDynBedLevelDialog *)pWnd)->OnPayrate4Killfocus();
}*/
static long _OnPayrate4LoadDataFnc(CWnd *pWnd){
	return ((CHMSDynBedLevelDialog *)pWnd)->OnPayrate4LoadData();
}
/*static void _OnPayrate4AddNewFnc(CWnd *pWnd){
	((CHMSDynBedLevelDialog *)pWnd)->OnPayrate4AddNew();
}*/
static void _OnLevel5SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSDynBedLevelDialog* )pWnd)->OnLevel5SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnLevel5SelendokFnc(CWnd *pWnd){
	((CHMSDynBedLevelDialog *)pWnd)->OnLevel5Selendok();
}
/*static void _OnLevel5SetfocusFnc(CWnd *pWnd){
	((CHMSDynBedLevelDialog *)pWnd)->OnLevel5Killfocus();
}*/
/*static void _OnLevel5KillfocusFnc(CWnd *pWnd){
	((CHMSDynBedLevelDialog *)pWnd)->OnLevel5Killfocus();
}*/
static long _OnLevel5LoadDataFnc(CWnd *pWnd){
	return ((CHMSDynBedLevelDialog *)pWnd)->OnLevel5LoadData();
}
/*static void _OnLevel5AddNewFnc(CWnd *pWnd){
	((CHMSDynBedLevelDialog *)pWnd)->OnLevel5AddNew();
}*/
/*static void _OnDays5ChangeFnc(CWnd *pWnd){
	((CHMSDynBedLevelDialog *)pWnd)->OnDays5Change();
} */
/*static void _OnDays5SetfocusFnc(CWnd *pWnd){
	((CHMSDynBedLevelDialog *)pWnd)->OnDays5Setfocus();} */ 
/*static void _OnDays5KillfocusFnc(CWnd *pWnd){
	((CHMSDynBedLevelDialog *)pWnd)->OnDays5Killfocus();
} */
static int _OnDays5CheckValueFnc(CWnd *pWnd){
	return ((CHMSDynBedLevelDialog *)pWnd)->OnDays5CheckValue();
} 
static void _OnPayrate5SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSDynBedLevelDialog* )pWnd)->OnPayrate5SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPayrate5SelendokFnc(CWnd *pWnd){
	((CHMSDynBedLevelDialog *)pWnd)->OnPayrate5Selendok();
}
/*static void _OnPayrate5SetfocusFnc(CWnd *pWnd){
	((CHMSDynBedLevelDialog *)pWnd)->OnPayrate5Killfocus();
}*/
/*static void _OnPayrate5KillfocusFnc(CWnd *pWnd){
	((CHMSDynBedLevelDialog *)pWnd)->OnPayrate5Killfocus();
}*/
static long _OnPayrate5LoadDataFnc(CWnd *pWnd){
	return ((CHMSDynBedLevelDialog *)pWnd)->OnPayrate5LoadData();
}
/*static void _OnPayrate5AddNewFnc(CWnd *pWnd){
	((CHMSDynBedLevelDialog *)pWnd)->OnPayrate5AddNew();
}*/
static void _OnApplySelectFnc(CWnd *pWnd){
	CHMSDynBedLevelDialog *pVw = (CHMSDynBedLevelDialog *)pWnd;
	pVw->OnApplySelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSDynBedLevelDialog *pVw = (CHMSDynBedLevelDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSDynBedLevelDialogFnc(CWnd *pWnd){
	 return ((CHMSDynBedLevelDialog*)pWnd)->OnAddHMSDynBedLevelDialog();
} 
static int _OnEditHMSDynBedLevelDialogFnc(CWnd *pWnd){
	 return ((CHMSDynBedLevelDialog*)pWnd)->OnEditHMSDynBedLevelDialog();
} 
static int _OnDeleteHMSDynBedLevelDialogFnc(CWnd *pWnd){
	 return ((CHMSDynBedLevelDialog*)pWnd)->OnDeleteHMSDynBedLevelDialog();
} 
static int _OnSaveHMSDynBedLevelDialogFnc(CWnd *pWnd){
	 return ((CHMSDynBedLevelDialog*)pWnd)->OnSaveHMSDynBedLevelDialog();
} 
static int _OnCancelHMSDynBedLevelDialogFnc(CWnd *pWnd){
	 return ((CHMSDynBedLevelDialog*)pWnd)->OnCancelHMSDynBedLevelDialog();
} 
CHMSDynBedLevelDialog::CHMSDynBedLevelDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 415;
	m_nDlgHeight = 220;
	SetDefaultValues();
	
}
CHMSDynBedLevelDialog::~CHMSDynBedLevelDialog(){
}
void CHMSDynBedLevelDialog::OnCreateComponents(){
	m_wndBedInformation.Create(this, _T("Bed Information"), 5, 5, 690, 180);
	m_wndLevel1Label.Create(this, _T("Level 1"), 10, 30, 90, 55);
	m_wndLevel1.Create(this,95, 30, 415, 55); 
	m_wndDays1Label.Create(this, _T("Days"), 420, 30, 500, 55);
	m_wndDays1.Create(this,505, 30, 540, 55); 
	m_wndBedInformation.Create(this, _T("Bed Information"), 5, 5, 690, 180);
	m_wndPayrate1Label.Create(this, _T("Payrate"), 545, 30, 625, 55);
	m_wndPayrate1.Create(this,630, 30, 685, 55); 
	m_wndLevel2Label.Create(this, _T("Level 2"), 10, 60, 90, 85);
	m_wndLevel2.Create(this,95, 60, 415, 85); 
	m_wndDays2Label.Create(this, _T("Days"), 420, 60, 500, 85);
	m_wndDays2.Create(this,505, 60, 540, 85); 
	m_wndPayrate2Label.Create(this, _T("Payrate"), 545, 60, 625, 85);
	m_wndPayrate2.Create(this,630, 60, 685, 85); 
	m_wndLevel3Label.Create(this, _T("Level 3"), 10, 90, 90, 115);
	m_wndLevel3.Create(this,95, 90, 415, 115); 
	m_wndDays3Label.Create(this, _T("Days"), 420, 90, 500, 115);
	m_wndDays3.Create(this,505, 90, 540, 115); 
	m_wndPayrate3Label.Create(this, _T("Payrate"), 545, 90, 625, 115);
	m_wndPayrate3.Create(this,630, 90, 685, 115); 
	m_wndLevel4Label.Create(this, _T("Level 4"), 10, 120, 90, 145);
	m_wndLevel4.Create(this,95, 120, 415, 145); 
	m_wndDays4Label.Create(this, _T("Days"), 420, 120, 500, 145);
	m_wndDays4.Create(this,505, 120, 540, 145); 
	m_wndPayrate4Label.Create(this, _T("Payrate"), 545, 120, 625, 145);
	m_wndPayrate4.Create(this,630, 120, 685, 145); 
	m_wndLevel5Label.Create(this, _T("Level 5"), 10, 150, 90, 175);
	m_wndLevel5.Create(this,95, 150, 415, 175); 
	m_wndDays5Label.Create(this, _T("Days"), 420, 150, 500, 175);
	m_wndDays5.Create(this,505, 150, 540, 175); 
	m_wndPayrate5Label.Create(this, _T("Payrate"), 545, 150, 625, 175);
	m_wndPayrate5.Create(this,630, 150, 685, 175); 
	m_wndApply.Create(this, _T("&Apply"), 525, 185, 605, 210);
	m_wndClose.Create(this, _T("&Close"), 610, 185, 690, 210);

}
void CHMSDynBedLevelDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndLevel1.SetCheckValue(true);
	m_wndLevel1.LimitText(35);
	m_wndDays1.SetLimitText(5);
	m_wndDays1.SetCheckValue(true);
	m_wndDays1.SetNumberDecimal(1);
	m_wndPayrate1.SetCheckValue(true);
	m_wndPayrate1.LimitText(35);
	m_wndLevel2.SetCheckValue(true);
	m_wndLevel2.LimitText(35);
	m_wndDays2.SetLimitText(5);
	m_wndDays2.SetCheckValue(true);
	m_wndDays2.SetNumberDecimal(1);
	m_wndPayrate2.SetCheckValue(true);
	m_wndPayrate2.LimitText(35);
	m_wndLevel3.SetCheckValue(true);
	m_wndLevel3.LimitText(35);
	m_wndDays3.SetLimitText(5);
	m_wndDays3.SetCheckValue(true);
	m_wndDays3.SetNumberDecimal(1);
	m_wndPayrate3.SetCheckValue(true);
	m_wndPayrate3.LimitText(35);
	m_wndLevel4.SetCheckValue(true);
	m_wndLevel4.LimitText(35);
	m_wndDays4.SetLimitText(5);
	m_wndDays4.SetCheckValue(true);
	m_wndDays4.SetNumberDecimal(1);
	m_wndPayrate4.SetCheckValue(true);
	m_wndPayrate4.LimitText(35);
	m_wndLevel5.SetCheckValue(true);
	m_wndLevel5.LimitText(35);
	m_wndDays5.SetLimitText(5);
	m_wndDays5.SetCheckValue(true);
	m_wndDays5.SetNumberDecimal(1);
	m_wndPayrate5.SetCheckValue(true);
	m_wndPayrate5.LimitText(35);

	m_wndLevel1.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndLevel1.InsertColumn(1, _T("Description"), CFMT_TEXT, 300);
	m_wndLevel1.InsertColumn(2, _T("Service Price"), CFMT_MONEY, 90);
	m_wndLevel1.InsertColumn(3, _T("Insurance Price"), CFMT_MONEY, 90);
	m_wndLevel1.InsertColumn(4, _T("Policy Price"), CFMT_MONEY, 90);
	m_wndLevel1.InsertColumn(5, _T("Require Price"), CFMT_MONEY, 90);
	m_wndLevel1.InsertColumn(6, _T(""), CFMT_TEXT, 0);//reqpaid


	m_wndLevel2.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndLevel2.InsertColumn(1, _T("Description"), CFMT_TEXT, 300);
	m_wndLevel2.InsertColumn(2, _T("Service Price"), CFMT_MONEY, 90);
	m_wndLevel2.InsertColumn(3, _T("Insurance Price"), CFMT_MONEY, 90);
	m_wndLevel2.InsertColumn(4, _T("Policy Price"), CFMT_MONEY, 90);
	m_wndLevel2.InsertColumn(5, _T("Require Price"), CFMT_MONEY, 90);
	m_wndLevel2.InsertColumn(6, _T(""), CFMT_TEXT, 0);//reqpaid


	m_wndLevel3.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndLevel3.InsertColumn(1, _T("Description"), CFMT_TEXT, 300);
	m_wndLevel3.InsertColumn(2, _T("Service Price"), CFMT_MONEY, 90);
	m_wndLevel3.InsertColumn(3, _T("Insurance Price"), CFMT_MONEY, 90);
	m_wndLevel3.InsertColumn(4, _T("Policy Price"), CFMT_MONEY, 90);
	m_wndLevel3.InsertColumn(5, _T("Require Price"), CFMT_MONEY, 90);
	m_wndLevel3.InsertColumn(6, _T(""), CFMT_TEXT, 0);//reqpaid


	m_wndLevel4.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndLevel4.InsertColumn(1, _T("Description"), CFMT_TEXT, 300);
	m_wndLevel4.InsertColumn(2, _T("Service Price"), CFMT_MONEY, 90);
	m_wndLevel4.InsertColumn(3, _T("Insurance Price"), CFMT_MONEY, 90);
	m_wndLevel4.InsertColumn(4, _T("Policy Price"), CFMT_MONEY, 90);
	m_wndLevel4.InsertColumn(5, _T("Require Price"), CFMT_MONEY, 90);
	m_wndLevel4.InsertColumn(6, _T(""), CFMT_TEXT, 0);//reqpaid


	m_wndLevel5.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndLevel5.InsertColumn(1, _T("Description"), CFMT_TEXT, 300);
	m_wndLevel5.InsertColumn(2, _T("Service Price"), CFMT_MONEY, 90);
	m_wndLevel5.InsertColumn(3, _T("Insurance Price"), CFMT_MONEY, 90);
	m_wndLevel5.InsertColumn(4, _T("Policy Price"), CFMT_MONEY, 90);
	m_wndLevel5.InsertColumn(5, _T("Require Price"), CFMT_MONEY, 90);
	m_wndLevel5.InsertColumn(6, _T(""), CFMT_TEXT, 0);//reqpaid


	m_wndPayrate1.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndPayrate1.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);
	m_wndPayrate1.Format(2, 0);



	m_wndPayrate2.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndPayrate2.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);
	m_wndPayrate2.Format(2, 0);



	m_wndPayrate3.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndPayrate3.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);
	m_wndPayrate3.Format(2, 0);



	m_wndPayrate4.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndPayrate4.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);
	m_wndPayrate4.Format(2, 0);



	m_wndPayrate5.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndPayrate5.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);
	m_wndPayrate5.Format(2, 0);

	m_hms_bed_itemsTbl.SetTableName(_T("hms_bed_items"));
	m_hms_bed_itemsTbl.AddField(_T("hbi_createdby"), dfText, 15); 
	m_hms_bed_itemsTbl.AddField(_T("hbi_createddate"), dfDateTime); 
	m_hms_bed_itemsTbl.AddField(_T("hbi_updatedby"), dfText, 15); 
	m_hms_bed_itemsTbl.AddField(_T("hbi_updateddate"), dfDateTime); 
	m_hms_bed_itemsTbl.AddField(_T("hbi_deptid"), dfText, 7); 
	m_hms_bed_itemsTbl.AddField(_T("hbi_roomid"), dfLong); 
	m_hms_bed_itemsTbl.AddField(_T("hbi_patientno"), dfLong); 
	m_hms_bed_itemsTbl.AddField(_T("hbi_docno"), dfLong); 
	m_hms_bed_itemsTbl.AddField(_T("hbi_refidx"), dfLong); 
	m_hms_bed_itemsTbl.AddField(_T("hbi_priceid"), dfLong); 
	m_hms_bed_itemsTbl.AddField(_T("hbi_idx"), dfLong); 
	m_hms_bed_itemsTbl.AddField(_T("hbi_date"), dfDate); 
	m_hms_bed_itemsTbl.AddField(_T("hbi_qty"), dfFloat); 
	m_hms_bed_itemsTbl.AddField(_T("hfe_group"), dfText, 7); 
	m_hms_bed_itemsTbl.AddField(_T("hfe_invoiceno"), dfLong); 
	m_hms_bed_itemsTbl.AddField(_T("hfe_insinvoice"), dfLong); 
	m_hms_bed_itemsTbl.AddField(_T("hfe_status"), dfText, 1); 
	m_hms_bed_itemsTbl.AddField(_T("hfe_iaccept"), dfText, 1); 
	m_hms_bed_itemsTbl.AddField(_T("hfe_unitprice"), dfDouble); 
	m_hms_bed_itemsTbl.AddField(_T("hfe_cost"), dfDouble); 
	m_hms_bed_itemsTbl.AddField(_T("hfe_difcost"), dfDouble); 
	m_hms_bed_itemsTbl.AddField(_T("hfe_discount"), dfDouble); 
	m_hms_bed_itemsTbl.AddField(_T("hfe_patdebt"), dfDouble); 
	m_hms_bed_itemsTbl.AddField(_T("hfe_patpaid"), dfDouble); 
	m_hms_bed_itemsTbl.AddField(_T("hfe_difpaid"), dfDouble); 
	m_hms_bed_itemsTbl.AddField(_T("hbi_payrate"), dfInteger); 
	m_hms_bed_itemsTbl.AddField(_T("hbi_reqpaid"), dfText, 1); 

}
void CHMSDynBedLevelDialog::OnSetWindowEvents(){
	m_wndLevel1.SetEvent(WE_SELENDOK, _OnLevel1SelendokFnc);
	//m_wndLevel1.SetEvent(WE_SETFOCUS, _OnLevel1SetfocusFnc);
	//m_wndLevel1.SetEvent(WE_KILLFOCUS, _OnLevel1KillfocusFnc);
	m_wndLevel1.SetEvent(WE_SELCHANGE, _OnLevel1SelectChangeFnc);
	m_wndLevel1.SetEvent(WE_LOADDATA, _OnLevel1LoadDataFnc);
	//m_wndLevel1.SetEvent(WE_ADDNEW, _OnLevel1AddNewFnc);
	//m_wndDays1.SetEvent(WE_CHANGE, _OnDays1ChangeFnc);
	//m_wndDays1.SetEvent(WE_SETFOCUS, _OnDays1SetfocusFnc);
	//m_wndDays1.SetEvent(WE_KILLFOCUS, _OnDays1KillfocusFnc);
	m_wndDays1.SetEvent(WE_CHECKVALUE, _OnDays1CheckValueFnc);
	m_wndPayrate1.SetEvent(WE_SELENDOK, _OnPayrate1SelendokFnc);
	//m_wndPayrate1.SetEvent(WE_SETFOCUS, _OnPayrate1SetfocusFnc);
	//m_wndPayrate1.SetEvent(WE_KILLFOCUS, _OnPayrate1KillfocusFnc);
	m_wndPayrate1.SetEvent(WE_SELCHANGE, _OnPayrate1SelectChangeFnc);
	m_wndPayrate1.SetEvent(WE_LOADDATA, _OnPayrate1LoadDataFnc);
	//m_wndPayrate1.SetEvent(WE_ADDNEW, _OnPayrate1AddNewFnc);
	m_wndLevel2.SetEvent(WE_SELENDOK, _OnLevel2SelendokFnc);
	//m_wndLevel2.SetEvent(WE_SETFOCUS, _OnLevel2SetfocusFnc);
	//m_wndLevel2.SetEvent(WE_KILLFOCUS, _OnLevel2KillfocusFnc);
	m_wndLevel2.SetEvent(WE_SELCHANGE, _OnLevel2SelectChangeFnc);
	m_wndLevel2.SetEvent(WE_LOADDATA, _OnLevel2LoadDataFnc);
	//m_wndLevel2.SetEvent(WE_ADDNEW, _OnLevel2AddNewFnc);
	//m_wndDays2.SetEvent(WE_CHANGE, _OnDays2ChangeFnc);
	//m_wndDays2.SetEvent(WE_SETFOCUS, _OnDays2SetfocusFnc);
	//m_wndDays2.SetEvent(WE_KILLFOCUS, _OnDays2KillfocusFnc);
	m_wndDays2.SetEvent(WE_CHECKVALUE, _OnDays2CheckValueFnc);
	m_wndPayrate2.SetEvent(WE_SELENDOK, _OnPayrate2SelendokFnc);
	//m_wndPayrate2.SetEvent(WE_SETFOCUS, _OnPayrate2SetfocusFnc);
	//m_wndPayrate2.SetEvent(WE_KILLFOCUS, _OnPayrate2KillfocusFnc);
	m_wndPayrate2.SetEvent(WE_SELCHANGE, _OnPayrate2SelectChangeFnc);
	m_wndPayrate2.SetEvent(WE_LOADDATA, _OnPayrate2LoadDataFnc);
	//m_wndPayrate2.SetEvent(WE_ADDNEW, _OnPayrate2AddNewFnc);
	m_wndLevel3.SetEvent(WE_SELENDOK, _OnLevel3SelendokFnc);
	//m_wndLevel3.SetEvent(WE_SETFOCUS, _OnLevel3SetfocusFnc);
	//m_wndLevel3.SetEvent(WE_KILLFOCUS, _OnLevel3KillfocusFnc);
	m_wndLevel3.SetEvent(WE_SELCHANGE, _OnLevel3SelectChangeFnc);
	m_wndLevel3.SetEvent(WE_LOADDATA, _OnLevel3LoadDataFnc);
	//m_wndLevel3.SetEvent(WE_ADDNEW, _OnLevel3AddNewFnc);
	//m_wndDays3.SetEvent(WE_CHANGE, _OnDays3ChangeFnc);
	//m_wndDays3.SetEvent(WE_SETFOCUS, _OnDays3SetfocusFnc);
	//m_wndDays3.SetEvent(WE_KILLFOCUS, _OnDays3KillfocusFnc);
	m_wndDays3.SetEvent(WE_CHECKVALUE, _OnDays3CheckValueFnc);
	m_wndPayrate3.SetEvent(WE_SELENDOK, _OnPayrate3SelendokFnc);
	//m_wndPayrate3.SetEvent(WE_SETFOCUS, _OnPayrate3SetfocusFnc);
	//m_wndPayrate3.SetEvent(WE_KILLFOCUS, _OnPayrate3KillfocusFnc);
	m_wndPayrate3.SetEvent(WE_SELCHANGE, _OnPayrate3SelectChangeFnc);
	m_wndPayrate3.SetEvent(WE_LOADDATA, _OnPayrate3LoadDataFnc);
	//m_wndPayrate3.SetEvent(WE_ADDNEW, _OnPayrate3AddNewFnc);
	m_wndLevel4.SetEvent(WE_SELENDOK, _OnLevel4SelendokFnc);
	//m_wndLevel4.SetEvent(WE_SETFOCUS, _OnLevel4SetfocusFnc);
	//m_wndLevel4.SetEvent(WE_KILLFOCUS, _OnLevel4KillfocusFnc);
	m_wndLevel4.SetEvent(WE_SELCHANGE, _OnLevel4SelectChangeFnc);
	m_wndLevel4.SetEvent(WE_LOADDATA, _OnLevel4LoadDataFnc);
	//m_wndLevel4.SetEvent(WE_ADDNEW, _OnLevel4AddNewFnc);
	//m_wndDays4.SetEvent(WE_CHANGE, _OnDays4ChangeFnc);
	//m_wndDays4.SetEvent(WE_SETFOCUS, _OnDays4SetfocusFnc);
	//m_wndDays4.SetEvent(WE_KILLFOCUS, _OnDays4KillfocusFnc);
	m_wndDays4.SetEvent(WE_CHECKVALUE, _OnDays4CheckValueFnc);
	m_wndPayrate4.SetEvent(WE_SELENDOK, _OnPayrate4SelendokFnc);
	//m_wndPayrate4.SetEvent(WE_SETFOCUS, _OnPayrate4SetfocusFnc);
	//m_wndPayrate4.SetEvent(WE_KILLFOCUS, _OnPayrate4KillfocusFnc);
	m_wndPayrate4.SetEvent(WE_SELCHANGE, _OnPayrate4SelectChangeFnc);
	m_wndPayrate4.SetEvent(WE_LOADDATA, _OnPayrate4LoadDataFnc);
	//m_wndPayrate4.SetEvent(WE_ADDNEW, _OnPayrate4AddNewFnc);
	m_wndLevel5.SetEvent(WE_SELENDOK, _OnLevel5SelendokFnc);
	//m_wndLevel5.SetEvent(WE_SETFOCUS, _OnLevel5SetfocusFnc);
	//m_wndLevel5.SetEvent(WE_KILLFOCUS, _OnLevel5KillfocusFnc);
	m_wndLevel5.SetEvent(WE_SELCHANGE, _OnLevel5SelectChangeFnc);
	m_wndLevel5.SetEvent(WE_LOADDATA, _OnLevel5LoadDataFnc);
	//m_wndLevel5.SetEvent(WE_ADDNEW, _OnLevel5AddNewFnc);
	//m_wndDays5.SetEvent(WE_CHANGE, _OnDays5ChangeFnc);
	//m_wndDays5.SetEvent(WE_SETFOCUS, _OnDays5SetfocusFnc);
	//m_wndDays5.SetEvent(WE_KILLFOCUS, _OnDays5KillfocusFnc);
	m_wndDays5.SetEvent(WE_CHECKVALUE, _OnDays5CheckValueFnc);
	m_wndPayrate5.SetEvent(WE_SELENDOK, _OnPayrate5SelendokFnc);
	//m_wndPayrate5.SetEvent(WE_SETFOCUS, _OnPayrate5SetfocusFnc);
	//m_wndPayrate5.SetEvent(WE_KILLFOCUS, _OnPayrate5KillfocusFnc);
	m_wndPayrate5.SetEvent(WE_SELCHANGE, _OnPayrate5SelectChangeFnc);
	m_wndPayrate5.SetEvent(WE_LOADDATA, _OnPayrate5LoadDataFnc);
	//m_wndPayrate5.SetEvent(WE_ADDNEW, _OnPayrate5AddNewFnc);
	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_ADD);
	GetDataToScreen();
}
void CHMSDynBedLevelDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndLevel1.GetDlgCtrlID(), m_szLevel1Key);
	DDX_Text(pDX, m_wndDays1.GetDlgCtrlID(), m_nDays1);
	DDX_TextEx(pDX, m_wndPayrate1.GetDlgCtrlID(), m_szPayrate1Key);
	DDX_TextEx(pDX, m_wndLevel2.GetDlgCtrlID(), m_szLevel2Key);
	DDX_Text(pDX, m_wndDays2.GetDlgCtrlID(), m_nDays2);
	DDX_TextEx(pDX, m_wndPayrate2.GetDlgCtrlID(), m_szPayrate2Key);
	DDX_TextEx(pDX, m_wndLevel3.GetDlgCtrlID(), m_szLevel3Key);
	DDX_Text(pDX, m_wndDays3.GetDlgCtrlID(), m_nDays3);
	DDX_TextEx(pDX, m_wndPayrate3.GetDlgCtrlID(), m_szPayrate3Key);
	DDX_TextEx(pDX, m_wndLevel4.GetDlgCtrlID(), m_szLevel4Key);
	DDX_Text(pDX, m_wndDays4.GetDlgCtrlID(), m_nDays4);
	DDX_TextEx(pDX, m_wndPayrate4.GetDlgCtrlID(), m_szPayrate4Key);
	DDX_TextEx(pDX, m_wndLevel5.GetDlgCtrlID(), m_szLevel5Key);
	DDX_Text(pDX, m_wndDays5.GetDlgCtrlID(), m_nDays5);
	DDX_TextEx(pDX, m_wndPayrate5.GetDlgCtrlID(), m_szPayrate5Key);

}

void CHMSDynBedLevelDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	int nIndex=0;
	szSQL.Format(_T("SELECT * FROM hms_bed_items WHERE hbi_deptid='%s' and hbi_docno=%ld and hbi_refidx=%d ORDER BY hbi_refidx, hbi_idx"), m_szDeptID, pMF->m_nDocumentNo, m_nID);
	rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){
		nIndex++;
		if(nIndex == 1){
			rs.GetValue(_T("hbi_priceid"), m_szLevel1Key);
			rs.GetValue(_T("hbi_qty"), m_nDays1);
			rs.GetValue(_T("hbi_payrate"), m_szPayrate1Key);
		}
		if(nIndex == 2){
			rs.GetValue(_T("hbi_priceid"), m_szLevel2Key);
			rs.GetValue(_T("hbi_qty"), m_nDays2);
			rs.GetValue(_T("hbi_payrate"), m_szPayrate2Key);
		}
		if(nIndex == 3){
			rs.GetValue(_T("hbi_priceid"), m_szLevel3Key);
			rs.GetValue(_T("hbi_qty"), m_nDays3);
			rs.GetValue(_T("hbi_payrate"), m_szPayrate3Key);
		}
		if(nIndex == 4){
			rs.GetValue(_T("hbi_priceid"), m_szLevel4Key);
			rs.GetValue(_T("hbi_qty"), m_nDays4);
			rs.GetValue(_T("hbi_payrate"), m_szPayrate4Key);
		}
		if(nIndex == 5){
			rs.GetValue(_T("hbi_priceid"), m_szLevel5Key);
			rs.GetValue(_T("hbi_qty"), m_nDays5);
			rs.GetValue(_T("hbi_payrate"), m_szPayrate5Key);
		}
		rs.MoveNext();
	}
	UpdateData(false);
}
void CHMSDynBedLevelDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_hms_bed_itemsTbl.SetValue(_T("hbi_createdby"), pMF->GetCurrentUser());
	m_hms_bed_itemsTbl.SetValue(_T("hbi_createddate"), pMF->GetSysDateTime());
	m_hms_bed_itemsTbl.SetValue(_T("hbi_updatedby"), pMF->GetCurrentUser());
	m_hms_bed_itemsTbl.SetValue(_T("hbi_updateddate"), pMF->GetSysDateTime());

	m_hms_bed_itemsTbl.SetValue(_T("hbi_deptid"), m_szDeptID); 
	m_hms_bed_itemsTbl.SetValue(_T("hbi_roomid"), m_nRoomID); 
	m_hms_bed_itemsTbl.SetValue(_T("hbi_patientno"), pMF->m_nPatientNo); 
	m_hms_bed_itemsTbl.SetValue(_T("hbi_docno"), pMF->m_nDocumentNo); 
	m_hms_bed_itemsTbl.SetValue(_T("hbi_refidx"), m_nID);
	m_hms_bed_itemsTbl.SetValue(_T("hfe_group"), _T("C0000"));


}
void CHMSDynBedLevelDialog::SetDefaultValues(){

	m_szLevel1Key.Empty();
	m_nDays1=0;
	m_szPayrate1Key = _T("100");
	m_szLevel2Key.Empty();
	m_nDays2=0;
	m_szPayrate2Key = _T("100");
	m_szLevel3Key.Empty();
	m_nDays3=0;
	m_szPayrate3Key= _T("100");
	m_szLevel4Key.Empty();
	m_nDays4=0;
	m_szPayrate4Key = _T("100");
	m_szLevel5Key.Empty();
	m_nDays5=0;
	m_szPayrate5Key = _T("100");
	m_bRequestOption = FALSE;

}
int CHMSDynBedLevelDialog::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiDialog::SetMode(nMode); 
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
  		switch(nMode){ 
 		case VM_ADD: 
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 0, 1, -1); 
 			SetDefaultValues(); 
			m_wndLevel1.EnableWindow(true);
			m_wndDays1.EnableWindow(true);
			m_wndPayrate1.EnableWindow(true);
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
void CHMSDynBedLevelDialog::OnLevel1SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDynBedLevelDialog::OnLevel1Selendok(){
	 
}
/*void CHMSDynBedLevelDialog::OnLevel1Setfocus(){
	
}*/
/*void CHMSDynBedLevelDialog::OnLevel1Killfocus(){
	
}*/
long CHMSDynBedLevelDialog::OnLevel1LoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndLevel1.IsSearchKey() && ToInt(m_szLevel1Key) > 0){
		szWhere.Format(_T(" and hdbl_idx=%d "), ToInt(m_szLevel1Key));
	};
	m_wndLevel1.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT * FROM hms_dynbedlist WHERE hdbl_deptid='%s' and hdbl_active='Y'  %s ORDER BY hdbl_idx "), pMF->m_szDept, szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndLevel1.AddItems(
			rs.GetValue(_T("hdbl_idx")), 
			rs.GetValue(_T("hdbl_name")), 
			rs.GetValue(_T("hdbl_servprice")), 
			rs.GetValue(_T("hdbl_insprice")), 
			rs.GetValue(_T("hdbl_polprice")), 
			rs.GetValue(_T("hdbl_reqprice")), 
			rs.GetValue(_T("hdbl_reqpaid")),
			NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CHMSDynBedLevelDialog::OnLevel1AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSDynBedLevelDialog::OnDays1Change(){
	
} */
/*void CHMSDynBedLevelDialog::OnDays1Setfocus(){
	
} */
/*void CHMSDynBedLevelDialog::OnDays1Killfocus(){
	
} */
int CHMSDynBedLevelDialog::OnDays1CheckValue(){
	UpdateData(true);
	if(m_nDays1 < m_nTreatmentDays){
		m_wndLevel2.EnableWindow(true);
		m_wndDays2.EnableWindow(true);
		m_wndPayrate2.EnableWindow(true);
	}
	else
	{
		m_nDays1 = m_nTreatmentDays;
		m_wndLevel2.EnableWindow(false);
		m_wndDays2.EnableWindow(false);
		m_wndPayrate2.EnableWindow(false);
		m_nDays2 = m_nDays3 = m_nDays4 = m_nDays5 = 0;
		m_wndLevel2.SetCurSel(-1);
		m_wndLevel3.SetCurSel(-1);
		m_wndLevel4.SetCurSel(-1);
		m_wndLevel5.SetCurSel(-1);
	}
	UpdateData(false);
	return 0;
} 
void CHMSDynBedLevelDialog::OnPayrate1SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDynBedLevelDialog::OnPayrate1Selendok(){
	 
}
/*void CHMSDynBedLevelDialog::OnPayrate1Setfocus(){
	
}*/
/*void CHMSDynBedLevelDialog::OnPayrate1Killfocus(){
	
}*/
long CHMSDynBedLevelDialog::OnPayrate1LoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return pMF->LoadSelectionList(&m_wndPayrate1, _T("HMS_INS_PAYMENT_RATIO"), m_szPayrate1Key);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndPayrate1.IsSearchKey() && !m_szPayrate1Key.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szPayrate1Key
};
	m_wndPayrate1.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPayrate1.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSDynBedLevelDialog::OnPayrate1AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSDynBedLevelDialog::OnLevel2SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDynBedLevelDialog::OnLevel2Selendok(){
	 
}
/*void CHMSDynBedLevelDialog::OnLevel2Setfocus(){
	
}*/
/*void CHMSDynBedLevelDialog::OnLevel2Killfocus(){
	
}*/
long CHMSDynBedLevelDialog::OnLevel2LoadData(){
		CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndLevel2.IsSearchKey() && ToInt(m_szLevel2Key) > 0){
		szWhere.Format(_T(" and hdbl_idx=%d "), ToInt(m_szLevel2Key));
	};
	m_wndLevel2.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT * FROM hms_dynbedlist WHERE hdbl_deptid='%s' and hdbl_active='Y' %s ORDER BY hdbl_idx "), pMF->m_szDept, szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndLevel2.AddItems(
			rs.GetValue(_T("hdbl_idx")), 
			rs.GetValue(_T("hdbl_name")), 
			rs.GetValue(_T("hdbl_servprice")), 
			rs.GetValue(_T("hdbl_insprice")), 
			rs.GetValue(_T("hdbl_polprice")), 
			rs.GetValue(_T("hdbl_reqprice")),
			rs.GetValue(_T("hdbl_reqpaid")),
			NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSDynBedLevelDialog::OnLevel2AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSDynBedLevelDialog::OnDays2Change(){
	
} */
/*void CHMSDynBedLevelDialog::OnDays2Setfocus(){
	
} */
/*void CHMSDynBedLevelDialog::OnDays2Killfocus(){
	
} */
int CHMSDynBedLevelDialog::OnDays2CheckValue(){
	UpdateData(true);
	if(m_nDays1+m_nDays2 < m_nTreatmentDays){
		m_wndLevel3.EnableWindow(true);
		m_wndDays3.EnableWindow(true);
		m_wndPayrate3.EnableWindow(true);
	}
	else
	{
		m_nDays2 = m_nTreatmentDays - m_nDays1;
		m_wndLevel3.EnableWindow(false);
		m_wndDays3.EnableWindow(false);
		m_wndPayrate3.EnableWindow(true);
		m_nDays3 = m_nDays4 = m_nDays5 = 0;
		m_wndLevel3.SetCurSel(-1);
		m_wndLevel4.SetCurSel(-1);
		m_wndLevel5.SetCurSel(-1);

	}
	UpdateData(false);
	return 0;
} 
void CHMSDynBedLevelDialog::OnPayrate2SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDynBedLevelDialog::OnPayrate2Selendok(){
	 
}
/*void CHMSDynBedLevelDialog::OnPayrate2Setfocus(){
	
}*/
/*void CHMSDynBedLevelDialog::OnPayrate2Killfocus(){
	
}*/
long CHMSDynBedLevelDialog::OnPayrate2LoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return pMF->LoadSelectionList(&m_wndPayrate2, _T("HMS_INS_PAYMENT_RATIO"), m_szPayrate2Key);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndPayrate2.IsSearchKey() && !m_szPayrate2Key.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szPayrate2Key
};
	m_wndPayrate2.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPayrate2.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSDynBedLevelDialog::OnPayrate2AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSDynBedLevelDialog::OnLevel3SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDynBedLevelDialog::OnLevel3Selendok(){
	 
}
/*void CHMSDynBedLevelDialog::OnLevel3Setfocus(){
	
}*/
/*void CHMSDynBedLevelDialog::OnLevel3Killfocus(){
	
}*/
long CHMSDynBedLevelDialog::OnLevel3LoadData(){
		CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndLevel3.IsSearchKey() && ToInt(m_szLevel3Key) > 0){
		szWhere.Format(_T(" and hdbl_idx=%d "), ToInt(m_szLevel3Key));
	};
	m_wndLevel3.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT * FROM hms_dynbedlist WHERE hdbl_deptid='%s' and hdbl_active='Y' %s ORDER BY hdbl_idx "), pMF->m_szDept, szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndLevel3.AddItems(
			rs.GetValue(_T("hdbl_idx")), 
			rs.GetValue(_T("hdbl_name")), 
			rs.GetValue(_T("hdbl_servprice")), 
			rs.GetValue(_T("hdbl_insprice")), 
			rs.GetValue(_T("hdbl_polprice")), 
			rs.GetValue(_T("hdbl_reqprice")),
			rs.GetValue(_T("hdbl_reqpaid")),
			NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSDynBedLevelDialog::OnLevel3AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSDynBedLevelDialog::OnDays3Change(){
	
} */
/*void CHMSDynBedLevelDialog::OnDays3Setfocus(){
	
} */
/*void CHMSDynBedLevelDialog::OnDays3Killfocus(){
	
} */
int CHMSDynBedLevelDialog::OnDays3CheckValue(){
	UpdateData(true);
	if(m_nDays1+m_nDays2+m_nDays3 < m_nTreatmentDays){
		m_wndLevel4.EnableWindow(true);
		m_wndDays4.EnableWindow(true);
		m_wndPayrate4.EnableWindow(true);
	}
	else
	{
		m_nDays3 = m_nTreatmentDays -  m_nDays1-m_nDays2;
		m_wndLevel4.EnableWindow(false);
		m_wndDays4.EnableWindow(false);
		m_wndPayrate4.EnableWindow(true);
		m_nDays4 = m_nDays5 = 0;
		m_wndLevel4.SetCurSel(-1);
		m_wndLevel5.SetCurSel(-1);

	}
	UpdateData(false);
	return 0;
} 
void CHMSDynBedLevelDialog::OnPayrate3SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDynBedLevelDialog::OnPayrate3Selendok(){
	 
}
/*void CHMSDynBedLevelDialog::OnPayrate3Setfocus(){
	
}*/
/*void CHMSDynBedLevelDialog::OnPayrate3Killfocus(){
	
}*/
long CHMSDynBedLevelDialog::OnPayrate3LoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return pMF->LoadSelectionList(&m_wndPayrate3, _T("HMS_INS_PAYMENT_RATIO"), m_szPayrate3Key);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndPayrate3.IsSearchKey() && !m_szPayrate3Key.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szPayrate3Key
};
	m_wndPayrate3.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPayrate3.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSDynBedLevelDialog::OnPayrate3AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSDynBedLevelDialog::OnLevel4SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDynBedLevelDialog::OnLevel4Selendok(){
	 
}
/*void CHMSDynBedLevelDialog::OnLevel4Setfocus(){
	
}*/
/*void CHMSDynBedLevelDialog::OnLevel4Killfocus(){
	
}*/
long CHMSDynBedLevelDialog::OnLevel4LoadData(){
		CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndLevel4.IsSearchKey() && ToInt(m_szLevel4Key) > 0){
		szWhere.Format(_T(" and hdbl_idx=%d "), ToInt(m_szLevel4Key));
	};
	m_wndLevel4.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT * FROM hms_dynbedlist WHERE hdbl_deptid='%s' and hdbl_active='Y' %s ORDER BY hdbl_idx "), pMF->m_szDept, szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndLevel4.AddItems(
			rs.GetValue(_T("hdbl_idx")), 
			rs.GetValue(_T("hdbl_name")), 
			rs.GetValue(_T("hdbl_servprice")), 
			rs.GetValue(_T("hdbl_insprice")), 
			rs.GetValue(_T("hdbl_polprice")), 
			rs.GetValue(_T("hdbl_reqprice")), 
			rs.GetValue(_T("hdbl_reqpaid")),
			NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSDynBedLevelDialog::OnLevel4AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSDynBedLevelDialog::OnDays4Change(){
	
} */
/*void CHMSDynBedLevelDialog::OnDays4Setfocus(){
	
} */
/*void CHMSDynBedLevelDialog::OnDays4Killfocus(){
	
} */
int CHMSDynBedLevelDialog::OnDays4CheckValue(){
	UpdateData(true);
	if(m_nDays1+m_nDays2+m_nDays3+m_nDays4 < m_nTreatmentDays){
		m_wndLevel5.EnableWindow(true);
		m_wndDays5.EnableWindow(true);
		m_wndPayrate5.EnableWindow(true);
	}
	else
	{
		m_nDays4 = m_nTreatmentDays - m_nDays1-m_nDays2-m_nDays3;
		m_wndLevel5.EnableWindow(false);
		m_wndDays5.EnableWindow(false);
		m_wndPayrate5.EnableWindow(true);
		m_nDays5 = 0;
		m_wndLevel5.SetCurSel(-1);

	}
	UpdateData(false);
	return 0;
} 
void CHMSDynBedLevelDialog::OnPayrate4SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDynBedLevelDialog::OnPayrate4Selendok(){
	 
}
/*void CHMSDynBedLevelDialog::OnPayrate4Setfocus(){
	
}*/
/*void CHMSDynBedLevelDialog::OnPayrate4Killfocus(){
	
}*/
long CHMSDynBedLevelDialog::OnPayrate4LoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return pMF->LoadSelectionList(&m_wndPayrate4, _T("HMS_INS_PAYMENT_RATIO"), m_szPayrate4Key);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndPayrate4.IsSearchKey() && !m_szPayrate4Key.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szPayrate4Key
};
	m_wndPayrate4.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPayrate4.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSDynBedLevelDialog::OnPayrate4AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSDynBedLevelDialog::OnLevel5SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDynBedLevelDialog::OnLevel5Selendok(){
	UpdateData(true);
	m_nDays5 = m_nTreatmentDays - m_nDays1-m_nDays2-m_nDays3-m_nDays4;
	UpdateData(false);
	m_wndDays5.EnableWindow(false);
}
/*void CHMSDynBedLevelDialog::OnLevel5Setfocus(){
	
}*/
/*void CHMSDynBedLevelDialog::OnLevel5Killfocus(){
	
}*/
long CHMSDynBedLevelDialog::OnLevel5LoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndLevel5.IsSearchKey() && ToInt(m_szLevel5Key) > 0){
		szWhere.Format(_T(" and hdbl_idx=%d "), ToInt(m_szLevel5Key));
	};
	m_wndLevel5.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT * FROM hms_dynbedlist WHERE hdbl_deptid='%s' and hdbl_active='Y' %s ORDER BY hdbl_idx "), pMF->m_szDept, szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndLevel5.AddItems(
			rs.GetValue(_T("hdbl_idx")), 
			rs.GetValue(_T("hdbl_name")), 
			rs.GetValue(_T("hdbl_servprice")), 
			rs.GetValue(_T("hdbl_insprice")), 
			rs.GetValue(_T("hdbl_polprice")), 
			rs.GetValue(_T("hdbl_reqprice")), 
			rs.GetValue(_T("hdbl_reqpaid")),
			NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSDynBedLevelDialog::OnLevel5AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSDynBedLevelDialog::OnDays5Change(){
	
} */
/*void CHMSDynBedLevelDialog::OnDays5Setfocus(){
	
} */
/*void CHMSDynBedLevelDialog::OnDays5Killfocus(){
	
} */
int CHMSDynBedLevelDialog::OnDays5CheckValue(){
	UpdateData(true);
	if(m_nDays1+m_nDays2+m_nDays3+m_nDays4+m_nDays5 != m_nTreatmentDays)
		return -1;
	return 0;
} 

void CHMSDynBedLevelDialog::OnPayrate5SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDynBedLevelDialog::OnPayrate5Selendok(){
	 
}
/*void CHMSDynBedLevelDialog::OnPayrate5Setfocus(){
	
}*/
/*void CHMSDynBedLevelDialog::OnPayrate5Killfocus(){
	
}*/
long CHMSDynBedLevelDialog::OnPayrate5LoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return pMF->LoadSelectionList(&m_wndPayrate5, _T("HMS_INS_PAYMENT_RATIO"), m_szPayrate5Key);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndPayrate5.IsSearchKey() && !m_szPayrate5Key.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szPayrate5Key
};
	m_wndPayrate5.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPayrate5.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSDynBedLevelDialog::OnPayrate5AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */


void CHMSDynBedLevelDialog::OnApplySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	CDate dte;

	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return; 
 	if(!IsValidateData()) 
 		return; 

	CString szBeginDate = m_szFromDate.Left(10);
	CString szTime = m_szFromDate.Mid(11);
	dte.ParseDate(szBeginDate);
	CString szDate;	
	if(szTime.IsEmpty())
		szTime = _T(" 12:00");

	int nIndex;
	pMF->BeginTransaction();
	//Xoa tat ca cac giuong dong cu
	szSQL.Format(_T("DELETE FROM hms_bed_items WHERE hbi_docno=%ld and hbi_refidx=%d"), pMF->m_nDocumentNo, m_nID);
	pMF->ExecSQL(szSQL);
	if(m_nDays1 > 0){
		szSQL.Format(_T("SELECT coalesce(max(hbi_idx), 0)+1 FROM hms_bed_items WHERE hbi_docno=%ld "), pMF->m_nDocumentNo);
		rs.ExecSQL(szSQL);
		nIndex = rs.GetIntValue();
		m_hms_bed_itemsTbl.SetValue(_T("hbi_idx"), nIndex); 
		m_hms_bed_itemsTbl.SetValue(_T("hbi_priceid"), m_szLevel1Key); 
		szDate.Format(_T("%s %s"), dte.GetDate(), szTime);
		m_hms_bed_itemsTbl.SetValue(_T("hbi_date"), szDate); 
		m_hms_bed_itemsTbl.SetValue(_T("hbi_qty"), m_nDays1); 
		m_hms_bed_itemsTbl.SetValue(_T("hfe_status"), _T("O"));
		m_hms_bed_itemsTbl.SetValue(_T("hbi_payrate"), m_szPayrate1Key);
		m_hms_bed_itemsTbl.SetValue(_T("hbi_reqpaid"), m_bRequestOption?_T("Y"):_T("N"));
		szSQL = m_hms_bed_itemsTbl.GetInsertSQL();
		pMF->ExecSQL(szSQL);
		dte += m_nDays1;
	}	

	if(m_nDays2 > 0){
		szSQL.Format(_T("SELECT coalesce(max(hbi_idx), 0)+1 FROM hms_bed_items WHERE hbi_docno=%ld "), pMF->m_nDocumentNo);
		rs.ExecSQL(szSQL);
		nIndex = rs.GetIntValue();
		m_hms_bed_itemsTbl.SetValue(_T("hbi_idx"), nIndex); 
		m_hms_bed_itemsTbl.SetValue(_T("hbi_priceid"), m_szLevel2Key); 
		szDate.Format(_T("%s %s"), dte.GetDate(), szTime);
		m_hms_bed_itemsTbl.SetValue(_T("hbi_date"), szDate); 
		m_hms_bed_itemsTbl.SetValue(_T("hbi_qty"), m_nDays2); 
		m_hms_bed_itemsTbl.SetValue(_T("hfe_status"), _T("O"));
		m_hms_bed_itemsTbl.SetValue(_T("hbi_payrate"), m_szPayrate2Key);
		m_hms_bed_itemsTbl.SetValue(_T("hbi_reqpaid"), m_bRequestOption?_T("Y"):_T("N"));
		szSQL = m_hms_bed_itemsTbl.GetInsertSQL();
		pMF->ExecSQL(szSQL);
		dte += m_nDays2;
	}	
	if(m_nDays3 > 0){
		szSQL.Format(_T("SELECT coalesce(max(hbi_idx), 0)+1 FROM hms_bed_items WHERE hbi_docno=%ld "), pMF->m_nDocumentNo);
		rs.ExecSQL(szSQL);
		nIndex = rs.GetIntValue();
		m_hms_bed_itemsTbl.SetValue(_T("hbi_idx"), nIndex); 
		m_hms_bed_itemsTbl.SetValue(_T("hbi_priceid"), m_szLevel3Key); 
		szDate.Format(_T("%s %s"), dte.GetDate(), szTime);
		m_hms_bed_itemsTbl.SetValue(_T("hbi_date"), szDate); 
		m_hms_bed_itemsTbl.SetValue(_T("hbi_qty"), m_nDays3); 
		m_hms_bed_itemsTbl.SetValue(_T("hfe_status"), _T("O"));
		m_hms_bed_itemsTbl.SetValue(_T("hbi_payrate"), m_szPayrate3Key);
		m_hms_bed_itemsTbl.SetValue(_T("hbi_reqpaid"), m_bRequestOption?_T("Y"):_T("N"));
		szSQL = m_hms_bed_itemsTbl.GetInsertSQL();
		pMF->ExecSQL(szSQL);
		dte += m_nDays3;
	}	

	if(m_nDays4 > 0){
		szSQL.Format(_T("SELECT coalesce(max(hbi_idx), 0)+1 FROM hms_bed_items WHERE hbi_docno=%ld "), pMF->m_nDocumentNo);
		rs.ExecSQL(szSQL);
		nIndex = rs.GetIntValue();
		m_hms_bed_itemsTbl.SetValue(_T("hbi_idx"), nIndex); 
		m_hms_bed_itemsTbl.SetValue(_T("hbi_priceid"), m_szLevel4Key); 
		szDate.Format(_T("%s %s"), dte.GetDate(), szTime);
		m_hms_bed_itemsTbl.SetValue(_T("hbi_date"), szDate); 
		m_hms_bed_itemsTbl.SetValue(_T("hbi_qty"), m_nDays4); 
		m_hms_bed_itemsTbl.SetValue(_T("hfe_status"), _T("O"));
		m_hms_bed_itemsTbl.SetValue(_T("hbi_payrate"), m_szPayrate4Key);
		m_hms_bed_itemsTbl.SetValue(_T("hbi_reqpaid"), m_bRequestOption?_T("Y"):_T("N"));
		szSQL = m_hms_bed_itemsTbl.GetInsertSQL();
		pMF->ExecSQL(szSQL);
		dte += m_nDays4;
	}	

	if(m_nDays5 > 0){
		szSQL.Format(_T("SELECT coalesce(max(hbi_idx), 0)+1 FROM hms_bed_items WHERE hbi_docno=%ld "), pMF->m_nDocumentNo);
		rs.ExecSQL(szSQL);
		nIndex = rs.GetIntValue();
		m_hms_bed_itemsTbl.SetValue(_T("hbi_idx"), nIndex); 
		m_hms_bed_itemsTbl.SetValue(_T("hbi_priceid"), m_szLevel5Key); 
		szDate.Format(_T("%s %s"), dte.GetDate(), szTime);
		m_hms_bed_itemsTbl.SetValue(_T("hbi_date"), szDate); 
		m_hms_bed_itemsTbl.SetValue(_T("hbi_qty"), m_nDays5); 
		m_hms_bed_itemsTbl.SetValue(_T("hfe_status"), _T("O"));
		m_hms_bed_itemsTbl.SetValue(_T("hbi_payrate"), m_szPayrate5Key);
		m_hms_bed_itemsTbl.SetValue(_T("hbi_reqpaid"), m_bRequestOption?_T("Y"):_T("N"));
		szSQL = m_hms_bed_itemsTbl.GetInsertSQL();
		pMF->ExecSQL(szSQL);
		dte += m_nDays5;
	}	
	szSQL.Format(_T("UPDATE hms_bed SET hb_dynprice='Y', hb_payrate=100 WHERE hb_docno=%ld and hb_idx=%d and hb_status='T' "), pMF->m_nDocumentNo, m_nID);
	pMF->ExecSQL(szSQL);
//_fmsg(_T("%s"), szSQL);
	pMF->Commit();
	CGuiDialog::OnOK();
} 
void CHMSDynBedLevelDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CHMSDynBedLevelDialog::OnAddHMSDynBedLevelDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSDynBedLevelDialog::OnEditHMSDynBedLevelDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSDynBedLevelDialog::OnDeleteHMSDynBedLevelDialog(){
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
 		OnCancelHMSDynBedLevelDialog(); 
 	}
	return 0;
}
int CHMSDynBedLevelDialog::OnSaveHMSDynBedLevelDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		//szSQL = m_hms_bed_itemsTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE")); 
 		//szSQL = m_hms_bed_itemsTbl.GetUpdateSQL(_T("createdby,createddate")); 
 		szSQL += szWhere; 
 	} 
 //_fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		//OnHMSDynBedLevelDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSDynBedLevelDialog::OnCancelHMSDynBedLevelDialog(){
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
int CHMSDynBedLevelDialog::OnHMSDynBedLevelDialogListLoadData(){
	return 0;
}
