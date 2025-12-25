#include "HMSTreatmentDialog.h"
#include "HMSTreatmentDiseaseTrackingDialog.h"
#include "HMSTreatmentPrescriptionDialog.h"
#include "MainFrm.h"


static void _OnMonthSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSTreatmentDialog* )pWnd)->OnMonthSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnMonthSelendokFnc(CWnd *pWnd){
	((CHMSTreatmentDialog *)pWnd)->OnMonthSelendok();
}
/*static void _OnMonthSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentDialog *)pWnd)->OnMonthKillfocus();
}*/
/*static void _OnMonthKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentDialog *)pWnd)->OnMonthKillfocus();
}*/
static long _OnMonthLoadDataFnc(CWnd *pWnd){
	return ((CHMSTreatmentDialog *)pWnd)->OnMonthLoadData();
}
/*static void _OnMonthAddNewFnc(CWnd *pWnd){
	((CHMSTreatmentDialog *)pWnd)->OnMonthAddNew();
}*/
static long _OnTreatListLoadDataFnc(CWnd *pWnd){
	return ((CHMSTreatmentDialog*)pWnd)->OnTreatListLoadData();
} 
static void _OnTreatListDblClickFnc(CWnd *pWnd){
	((CHMSTreatmentDialog*)pWnd)->OnTreatListDblClick();
} 
static void _OnTreatListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSTreatmentDialog*)pWnd)->OnTreatListSelectChange(nOldItem, nNewItem);
} 
static int _OnTreatListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSTreatmentDialog*)pWnd)->OnTreatListDeleteItem();
} 
static long _OnDateListLoadDataFnc(CWnd *pWnd){
	return ((CHMSTreatmentDialog*)pWnd)->OnDateListLoadData();
} 
static void _OnDateListDblClickFnc(CWnd *pWnd){
	((CHMSTreatmentDialog*)pWnd)->OnDateListDblClick();
} 
static void _OnDateListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSTreatmentDialog*)pWnd)->OnDateListSelectChange(nOldItem, nNewItem);
} 
static int _OnDateListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSTreatmentDialog*)pWnd)->OnDateListDeleteItem();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSTreatmentDialog *pVw = (CHMSTreatmentDialog *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CHMSTreatmentDialog *pVw = (CHMSTreatmentDialog *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSTreatmentDialog *pVw = (CHMSTreatmentDialog *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CHMSTreatmentDialog *pVw = (CHMSTreatmentDialog *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSTreatmentDialog *pVw = (CHMSTreatmentDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSTreatmentDialogFnc(CWnd *pWnd){
	 return ((CHMSTreatmentDialog*)pWnd)->OnAddHMSTreatmentDialog();
} 
static int _OnEditHMSTreatmentDialogFnc(CWnd *pWnd){
	 return ((CHMSTreatmentDialog*)pWnd)->OnEditHMSTreatmentDialog();
} 
static int _OnDeleteHMSTreatmentDialogFnc(CWnd *pWnd){
	 return ((CHMSTreatmentDialog*)pWnd)->OnDeleteHMSTreatmentDialog();
} 
static int _OnSaveHMSTreatmentDialogFnc(CWnd *pWnd){
	 return ((CHMSTreatmentDialog*)pWnd)->OnSaveHMSTreatmentDialog();
} 
static int _OnCancelHMSTreatmentDialogFnc(CWnd *pWnd){
	 return ((CHMSTreatmentDialog*)pWnd)->OnCancelHMSTreatmentDialog();
} 
CHMSTreatmentDialog::CHMSTreatmentDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 965;
	m_nDlgHeight = 605;
	SetDefaultValues();
}
CHMSTreatmentDialog::~CHMSTreatmentDialog(){
}
void CHMSTreatmentDialog::OnCreateComponents(){
	m_wndTreatmentInformation.Create(this, _T("Treatment Information"), 195, 5, 960, 570);
	m_wndMonthLabel.Create(this, _T("Month"), 7, 5, 87, 30);
	m_wndMonth.Create(this,92, 5, 190, 30); 

	m_wndTreatList.Create(this,200, 35, 955, 565); 
	m_wndDateList.Create(this,5, 35, 190, 597); 
	m_wndAdd.Create(this, _T("&Add"), 195, 575, 275, 600);
	m_wndEdit.Create(this, _T("&Edit"), 280, 575, 360, 600);
	m_wndDelete.Create(this, _T("&Delete"), 365, 575, 445, 600);
	m_wndPrint.Create(this, _T("&Print"), 450, 575, 530, 600);
	m_wndClose.Create(this, _T("Close"), 880, 575, 960, 600);
	
}
void CHMSTreatmentDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndMonth.SetCheckValue(true);
	m_wndMonth.LimitText(35);


	m_wndMonth.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndMonth.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndTreatList.InsertColumn(0, _T("BANG THEO DOI DIEU TRI"), CFMT_TEXT, 500);
/*
	m_wndTreatList.InsertColumn(1, _T("Disease tracking"), CFMT_TEXT, 270);
	m_wndTreatList.InsertColumn(2, _T("Treatment"), CFMT_TEXT, 300);
	m_wndTreatList.InsertColumn(3, _T("Diet"), CFMT_TEXT, 50);
*/

	m_wndDateList.InsertColumn(0, _T("Index"), CFMT_NUMBER, 40);
	m_wndDateList.InsertColumn(1, _T("Date"), CFMT_DATETIME, 120);


}
void CHMSTreatmentDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndMonth.SetEvent(WE_SELENDOK, _OnMonthSelendokFnc);
	//m_wndMonth.SetEvent(WE_SETFOCUS, _OnMonthSetfocusFnc);
	//m_wndMonth.SetEvent(WE_KILLFOCUS, _OnMonthKillfocusFnc);
	m_wndMonth.SetEvent(WE_SELCHANGE, _OnMonthSelectChangeFnc);
	m_wndMonth.SetEvent(WE_LOADDATA, _OnMonthLoadDataFnc);
	//m_wndMonth.SetEvent(WE_ADDNEW, _OnMonthAddNewFnc);
	m_wndTreatList.SetEvent(WE_SELCHANGE, _OnTreatListSelectChangeFnc);
	m_wndTreatList.SetEvent(WE_LOADDATA, _OnTreatListLoadDataFnc);
	m_wndTreatList.SetEvent(WE_DBLCLICK, _OnTreatListDblClickFnc);
	m_wndTreatList.AddEvent(1, _T("Delete"), _OnTreatListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndDateList.SetEvent(WE_SELCHANGE, _OnDateListSelectChangeFnc);
	m_wndDateList.SetEvent(WE_LOADDATA, _OnDateListLoadDataFnc);
	m_wndDateList.SetEvent(WE_DBLCLICK, _OnDateListDblClickFnc);
	m_wndDateList.AddEvent(1, _T("Delete"), _OnDateListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	
	SetMode(VM_VIEW);
	OnDateListLoadData();
	OnTreatListLoadData();

}
void CHMSTreatmentDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndMonth.GetDlgCtrlID(), m_szMonthKey);

}
void CHMSTreatmentDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSTreatmentDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSTreatmentDialog::SetDefaultValues(){

	m_szMonthKey.Empty();

}
int CHMSTreatmentDialog::SetMode(int nMode){
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
void CHMSTreatmentDialog::OnMonthSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSTreatmentDialog::OnMonthSelendok(){
	 
}
/*void CHMSTreatmentDialog::OnMonthSetfocus(){
	
}*/
/*void CHMSTreatmentDialog::OnMonthKillfocus(){
	
}*/
long CHMSTreatmentDialog::OnMonthLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndMonth.IsSearchKey() && !m_szMonthKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szMonthKey
};
	m_wndMonth.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndMonth.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSTreatmentDialog::OnMonthAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSTreatmentDialog::OnTreatListDblClick(){
	
} 
void CHMSTreatmentDialog::OnTreatListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSTreatmentDialog::OnTreatListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSTreatmentDialog::OnTreatListLoadData(){
CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	CString szDate, szDiseaseTracking, szTreatment, szDiet;
	CString tmpStr;
	szDate = pMF->GetSysDateTime();
	szDiseaseTracking = _T("Nhap thong tin theo doi dieu tri");
	szTreatment = _T("Sinh hoa\r\nHuyethoc\r\nVisinh\r\n----------\r\nVitamin A");	
	szDiet = _T("Tu ngay 08/08");

	m_wndTreatList.BeginLoad();
	CGridListItem* o = new CGridListItem();
	CGridCell* cell = new CGridCell();
	o->Add(_T("Pulse"), 100);
	o->Add(_T("Disease Tracking"), 200);
	o->Add(_T("Diet"), 100);
	m_wndTreatList.Add(o);
	o = new CGridListItem();
	o->SetState(ODS_DISABLED);
	//CGridListItem* o1 = new CGridListItem(RGB(72,209,204), COLOR_WHITE);
	CGridListItem* o1 = new CGridListItem();
	o1->m_clrBackground = RGB(72,209,204);
	o1->m_clrText = COLOR_WHITE;
	o1->Add(_T("<b>Prescription</b>"), 200, CELLTYPE_HTML);
	cell->AddRow(o1);
	//CGridListItem* o2 = new CGridListItem(RGB(0, 192,200), COLOR_WHITE);
	CGridListItem* o2 = new CGridListItem();
	o1->m_clrBackground = RGB(0,192,200);
	o1->m_clrText = COLOR_WHITE;
	o2->Add(_T("Idx"), 100);
	o2->Add(_T("Desc"), 200);
	o2->Add(_T("Unit"), 100);
	o2->Add(_T("Qty"), 100);
	cell->AddRow(o2);
	o->Add(cell);
	m_wndTreatList.Add(o);
	
	o2 = new CGridListItem();
	o2->Add(_T("1"), 100);
	o2->Add(_T("vitamin"), 200);
	o2->Add(_T("vien"), 100);
	o2->Add(_T("10"), 100);
	m_wndTreatList.Add(o2);
	o2 = new CGridListItem();
	o2 = new CGridListItem();
	o2->Add(_T("2"), 100);
	o2->Add(_T("vitamin D"), 200);
	o2->Add(_T("vien"), 100);
	o2->Add(_T("10"), 100);
	m_wndTreatList.Add(o2);
	o2 = new CGridListItem();
	o2 = new CGridListItem();
	o2->Add(_T("1"), 100);
	o2->Add(_T("vitamin"), 200);
	o2->Add(_T("vien"), 100);
	o2->Add(_T("10"), 100);
	m_wndTreatList.Add(o2);
	
	o = new CGridListItem();
	o->Add(_T("Para-clinical"), 200);
	o->SetState(ODS_DISABLED);
	m_wndTreatList.Add(o);
	m_wndTreatList.AddItems(_T("Name1"));
	m_wndTreatList.AddItems(_T("Name2"));
	m_wndTreatList.AddItems(_T("Name3"));



	o = new CGridListItem();
	o->Add(_T("Surgury"), 200);
	o->SetState(ODS_DISABLED);
	m_wndTreatList.Add(o);

	m_wndTreatList.EndLoad();
	
	return 0;
}
void CHMSTreatmentDialog::OnDateListDblClick(){
	
} 
void CHMSTreatmentDialog::OnDateListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSTreatmentDialog::OnDateListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSTreatmentDialog::OnDateListLoadData(){
	
	m_wndDateList.BeginLoad(); 
	int nCount = 0;
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString tmpStr, szDate;
	for (int i =0; i < 10; i++)
	{
		tmpStr.Format(_T("%d"), i+1);
		szDate.Format(_T("%s"), pMF->GetSysDateTime());
		m_wndDateList.AddItems(
			tmpStr, szDate, NULL);

	}
	
	m_wndDateList.EndLoad(); 


/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndDateList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDateList.AddItems(
			rs.GetValue(_T("Index")), 
			rs.GetValue(_T("Date")), NULL);
		rs.MoveNext();
	}
	m_wndDateList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CHMSTreatmentDialog::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CHMSTreatmentDiseaseTrackingDialog dlg(this, VM_ADD);
	if(dlg.DoModal() == IDOK)
	{
		
	}
} 
void CHMSTreatmentDialog::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CHMSTreatmentPrescriptionDialog dlg(this);
	if(dlg.DoModal() == IDOK)
	{

	}
} 
void CHMSTreatmentDialog::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSTreatmentDialog::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSTreatmentDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSTreatmentDialog::OnAddHMSTreatmentDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSTreatmentDialog::OnEditHMSTreatmentDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSTreatmentDialog::OnDeleteHMSTreatmentDialog(){
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
 		OnCancelHMSTreatmentDialog();
 	}
	return 0;
}
int CHMSTreatmentDialog::OnSaveHMSTreatmentDialog(){
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
 		//OnHMSTreatmentDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSTreatmentDialog::OnCancelHMSTreatmentDialog(){
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
int CHMSTreatmentDialog::OnHMSTreatmentDialogListLoadData(){
	return 0;
}
