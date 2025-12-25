#include "stdafx.h"
#include "BCSUDUNGDVKTBH.h"
#include "MainFrm.h"
#include "ReportDocument.h"
static void _OnOperationSelectFnc(CWnd *pWnd){
	((CBCSUDUNGDVKTBH*)pWnd)->OnOperationSelect();
}
static void _OnParaclinicalSelectFnc(CWnd *pWnd){
	((CBCSUDUNGDVKTBH*)pWnd)->OnParaclinicalSelect();
}
static void _OnAllSelectFnc(CWnd *pWnd){
	((CBCSUDUNGDVKTBH*)pWnd)->OnAllSelect();
}
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CBCSUDUNGDVKTBH *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CBCSUDUNGDVKTBH *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CBCSUDUNGDVKTBH *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CBCSUDUNGDVKTBH *)pWnd)->OnNameCheckValue();
} 
static void _OnOperationGroupSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CBCSUDUNGDVKTBH* )pWnd)->OnOperationGroupSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnOperationGroupSelendokFnc(CWnd *pWnd){
	((CBCSUDUNGDVKTBH *)pWnd)->OnOperationGroupSelendok();
}
/*static void _OnOperationGroupSetfocusFnc(CWnd *pWnd){
	((CBCSUDUNGDVKTBH *)pWnd)->OnOperationGroupKillfocus();
}*/
/*static void _OnOperationGroupKillfocusFnc(CWnd *pWnd){
	((CBCSUDUNGDVKTBH *)pWnd)->OnOperationGroupKillfocus();
}*/
static long _OnOperationGroupLoadDataFnc(CWnd *pWnd){
	return ((CBCSUDUNGDVKTBH *)pWnd)->OnOperationGroupLoadData();
}
/*static void _OnOperationGroupAddNewFnc(CWnd *pWnd){
	((CBCSUDUNGDVKTBH *)pWnd)->OnOperationGroupAddNew();
}*/
static void _OnParaclinicalGroupSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CBCSUDUNGDVKTBH* )pWnd)->OnParaclinicalGroupSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnParaclinicalGroupSelendokFnc(CWnd *pWnd){
	((CBCSUDUNGDVKTBH *)pWnd)->OnParaclinicalGroupSelendok();
}
/*static void _OnParaclinicalGroupSetfocusFnc(CWnd *pWnd){
	((CBCSUDUNGDVKTBH *)pWnd)->OnParaclinicalGroupKillfocus();
}*/
/*static void _OnParaclinicalGroupKillfocusFnc(CWnd *pWnd){
	((CBCSUDUNGDVKTBH *)pWnd)->OnParaclinicalGroupKillfocus();
}*/
static long _OnParaclinicalGroupLoadDataFnc(CWnd *pWnd){
	return ((CBCSUDUNGDVKTBH *)pWnd)->OnParaclinicalGroupLoadData();
}
/*static void _OnParaclinicalGroupAddNewFnc(CWnd *pWnd){
	((CBCSUDUNGDVKTBH *)pWnd)->OnParaclinicalGroupAddNew();
}*/
static void _OnExportSelectFnc(CWnd *pWnd){
	CBCSUDUNGDVKTBH *pVw = (CBCSUDUNGDVKTBH *)pWnd;
	pVw->OnExportSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CBCSUDUNGDVKTBH*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CBCSUDUNGDVKTBH*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CBCSUDUNGDVKTBH*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CBCSUDUNGDVKTBH*)pWnd)->OnListDeleteItem();
} 
static int _OnAddBCSUDUNGDVKTBHFnc(CWnd *pWnd){
	 return ((CBCSUDUNGDVKTBH*)pWnd)->OnAddBCSUDUNGDVKTBH();
} 
static int _OnEditBCSUDUNGDVKTBHFnc(CWnd *pWnd){
	 return ((CBCSUDUNGDVKTBH*)pWnd)->OnEditBCSUDUNGDVKTBH();
} 
static int _OnDeleteBCSUDUNGDVKTBHFnc(CWnd *pWnd){
	 return ((CBCSUDUNGDVKTBH*)pWnd)->OnDeleteBCSUDUNGDVKTBH();
} 
static int _OnSaveBCSUDUNGDVKTBHFnc(CWnd *pWnd){
	 return ((CBCSUDUNGDVKTBH*)pWnd)->OnSaveBCSUDUNGDVKTBH();
} 
static int _OnCancelBCSUDUNGDVKTBHFnc(CWnd *pWnd){
	 return ((CBCSUDUNGDVKTBH*)pWnd)->OnCancelBCSUDUNGDVKTBH();
} 
CBCSUDUNGDVKTBH::CBCSUDUNGDVKTBH(){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CBCSUDUNGDVKTBH::~CBCSUDUNGDVKTBH(){
}
void CBCSUDUNGDVKTBH::OnCreateComponents(){
	m_wndReportCondition.Create(this, _T("Report Condition"), 7, 5, 867, 565);
	m_wndOperation.Create(this, _T("Operation Group"), 10, 30, 130, 55);
	m_wndParaclinical.Create(this, _T("Paraclinical Group"), 430, 30, 550, 55);
	m_wndAll.Create(this, _T("All"), 780, 30, 860, 55);
	m_wndOperationGroupLabel.Create(this, _T("Operation Group"), 10, 60, 90, 85);
	m_wndOperationGroup.Create(this,95, 60, 425, 85); 
	m_wndParaclinicalGroupLabel.Create(this, _T("Paraclinical Group"), 430, 60, 510, 85);
	m_wndParaclinicalGroup.Create(this,515, 60, 860, 85); 
	m_wndNameLabel.Create(this, _T("Name"), 10, 90, 90, 115);
	m_wndName.Create(this,95, 90, 860, 115); 
	m_wndList.Create(this,10, 120, 860, 560); 
	m_wndExport.Create(this, _T("&Export"), 779, 570, 859, 595);

}
void CBCSUDUNGDVKTBH::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
// 	m_wndName.SetLimitText(1024);
// 	m_wndName.SetCheckValue(true);
// 	m_wndOperationGroup.SetCheckValue(true);
// 	m_wndOperationGroup.LimitText(1024);
// 	m_wndParaclinicalGroup.SetCheckValue(true);
// 	m_wndParaclinicalGroup.LimitText(1024);

	m_wndOperationGroup.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndOperationGroup.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

	m_wndParaclinicalGroup.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndParaclinicalGroup.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

	m_wndList.InsertColumn(0, _T("ma_dvkt"), CFMT_TEXT, 120);
	m_wndList.InsertColumn(1, _T("ten_dvkt"), CFMT_TEXT, 400);
	m_wndList.InsertColumn(2, _T("ma_gia"), CFMT_TEXT, 120);
	m_wndList.InsertColumn(3, _T("don_gia"), CFMT_NUMBER, 80);
	m_wndList.InsertColumn(4, _T("quyet_dinh"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(5, _T("cong_bo"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(6, _T("ma_cosokcb"), CFMT_TEXT, 100);

}
void CBCSUDUNGDVKTBH::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndOperation.SetEvent(WE_CLICK, _OnOperationSelectFnc);
	m_wndParaclinical.SetEvent(WE_CLICK, _OnParaclinicalSelectFnc);
	m_wndAll.SetEvent(WE_CLICK, _OnAllSelectFnc);
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	m_wndOperationGroup.SetEvent(WE_SELENDOK, _OnOperationGroupSelendokFnc);
	//m_wndOperationGroup.SetEvent(WE_SETFOCUS, _OnOperationGroupSetfocusFnc);
	//m_wndOperationGroup.SetEvent(WE_KILLFOCUS, _OnOperationGroupKillfocusFnc);
	m_wndOperationGroup.SetEvent(WE_SELCHANGE, _OnOperationGroupSelectChangeFnc);
	m_wndOperationGroup.SetEvent(WE_LOADDATA, _OnOperationGroupLoadDataFnc);
	//m_wndOperationGroup.SetEvent(WE_ADDNEW, _OnOperationGroupAddNewFnc);
	m_wndParaclinicalGroup.SetEvent(WE_SELENDOK, _OnParaclinicalGroupSelendokFnc);
	//m_wndParaclinicalGroup.SetEvent(WE_SETFOCUS, _OnParaclinicalGroupSetfocusFnc);
	//m_wndParaclinicalGroup.SetEvent(WE_KILLFOCUS, _OnParaclinicalGroupKillfocusFnc);
	m_wndParaclinicalGroup.SetEvent(WE_SELCHANGE, _OnParaclinicalGroupSelectChangeFnc);
	m_wndParaclinicalGroup.SetEvent(WE_LOADDATA, _OnParaclinicalGroupLoadDataFnc);
	//m_wndParaclinicalGroup.SetEvent(WE_ADDNEW, _OnParaclinicalGroupAddNewFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddBCSUDUNGDVKTBHFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditBCSUDUNGDVKTBHFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteBCSUDUNGDVKTBHFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveBCSUDUNGDVKTBHFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelBCSUDUNGDVKTBHFnc, 0, 'T', VK_CONTROL);
	UpdateData(false);
	OnListLoadData();

}
void CBCSUDUNGDVKTBH::OnDoDataExchange(CDataExchange* pDX){
	DDX_Radio(pDX, m_wndOperation.GetDlgCtrlID(), m_nOperation);
	DDX_Radio(pDX, m_wndParaclinical.GetDlgCtrlID(), m_nParaclinical);
	DDX_Radio(pDX, m_wndAll.GetDlgCtrlID(), m_nAll);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_TextEx(pDX, m_wndOperationGroup.GetDlgCtrlID(), m_szOperationGroupKey);
	DDX_TextEx(pDX, m_wndParaclinicalGroup.GetDlgCtrlID(), m_szParaclinicalGroupKey);

}
void CBCSUDUNGDVKTBH::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CBCSUDUNGDVKTBH::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CBCSUDUNGDVKTBH::SetDefaultValues(){

	m_nOperation=1;
	m_nParaclinical=1;
	m_nAll=0;
	m_szName.Empty();
	m_szOperationGroupKey.Empty();
	m_szParaclinicalGroupKey.Empty();

}
int CBCSUDUNGDVKTBH::SetMode(int nMode){
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
void CBCSUDUNGDVKTBH::OnAllSelect(){
	UpdateData(TRUE);
	m_wndOperationGroup.DeleteAllItems(); 
	m_wndParaclinicalGroup.DeleteAllItems(); 
	OnListLoadData();
}
void CBCSUDUNGDVKTBH::OnOperationSelect(){
	UpdateData(TRUE);
	m_wndOperationGroup.DeleteAllItems(); 
	m_wndParaclinicalGroup.DeleteAllItems(); 
	OnListLoadData();
}
void CBCSUDUNGDVKTBH::OnParaclinicalSelect(){
	UpdateData(TRUE);
	m_wndOperationGroup.DeleteAllItems(); 
	m_wndParaclinicalGroup.DeleteAllItems(); 
	OnListLoadData();
}
/*void CBCSUDUNGDVKTBH::OnNameChange(){
	
} */
/*void CBCSUDUNGDVKTBH::OnNameSetfocus(){
	
} */
/*void CBCSUDUNGDVKTBH::OnNameKillfocus(){
	
} */
int CBCSUDUNGDVKTBH::OnNameCheckValue(){
	OnListLoadData();
	return 1;
} 
void CBCSUDUNGDVKTBH::OnOperationGroupSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CBCSUDUNGDVKTBH::OnOperationGroupSelendok(){
	UpdateData(TRUE);
	m_wndParaclinicalGroup.DeleteAllItems(); 
	OnListLoadData();
}
/*void CBCSUDUNGDVKTBH::OnOperationGroupSetfocus(){
	
}*/
/*void CBCSUDUNGDVKTBH::OnOperationGroupKillfocus(){
	
}*/
long CBCSUDUNGDVKTBH::OnOperationGroupLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndOperationGroup.IsSearchKey() && !m_szOperationGroupKey.IsEmpty()){
		szWhere.Format(_T(" and hfg_id='%s' "), m_szOperationGroupKey);
	};
	m_wndOperationGroup.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT hfg_id AS id, hfg_name AS name FROM hms_fee_group WHERE substr(hfg_id,1,2) in('B4','B5') ") \
		_T("AND hfg_active='Y' %s ORDER BY hfg_index, hfg_id"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndOperationGroup.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CBCSUDUNGDVKTBH::OnOperationGroupAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CBCSUDUNGDVKTBH::OnParaclinicalGroupSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CBCSUDUNGDVKTBH::OnParaclinicalGroupSelendok(){
	UpdateData(TRUE);
	m_wndOperationGroup.DeleteAllItems(); 
	OnListLoadData();
}
/*void CBCSUDUNGDVKTBH::OnParaclinicalGroupSetfocus(){
	
}*/
/*void CBCSUDUNGDVKTBH::OnParaclinicalGroupKillfocus(){
	
}*/
long CBCSUDUNGDVKTBH::OnParaclinicalGroupLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndParaclinicalGroup.IsSearchKey() && !m_szParaclinicalGroupKey.IsEmpty()){
		szWhere.Format(_T(" and hfg_id='%s' "), m_szParaclinicalGroupKey);
	};
	m_wndParaclinicalGroup.DeleteAllItems();
	int nCount = 0;
	szSQL.Format(_T("SELECT hfg_id AS id, hfg_name AS name FROM hms_fee_group WHERE substr(hfg_id, 1, 2) IN('B1','B2','B3')") \
		_T("AND hfg_active='Y' %s ORDER BY hfg_index, hfg_id"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndParaclinicalGroup.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CBCSUDUNGDVKTBH::OnParaclinicalGroupAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CBCSUDUNGDVKTBH::OnExportSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString tmpStr;
	CGuiMenu menu(this);
	menu.CreatePopupMenu();
	TranslateString(_T("Export \x64\x1ECB\x63h v\x1EE5 k\x1EF9 thu\x1EADt"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 1, tmpStr);
	menu.AppendMenu(MF_SEPARATOR);
	TranslateString(_T("Export thu\x1ED1\x63"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 2, tmpStr);
	menu.AppendMenu(MF_SEPARATOR);
	TranslateString(_T("Export v\x1EADt t\x1B0"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 3, tmpStr);
	CRect rect;
	m_wndExport.GetWindowRect(&rect);
	int nPos = menu.TrackPopupMenu(TPM_RETURNCMD|TPM_RIGHTALIGN|TPM_BOTTOMALIGN|TPM_NONOTIFY, rect.right, rect.top, this);
	switch (nPos)
	{
	case 1:
		OnExport1();
		break;
	case 2:
		OnExport2();
		break;
	case 3:
		OnExport3();
		break;
	}
} 
void CBCSUDUNGDVKTBH::OnExport1(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();	CRecord rs(&pMF->m_db);	CString szSQL, tmpStr, szTemp, szWhere;	UpdateData(TRUE);	BeginWaitCursor();	szWhere.Empty();	int nRow =0, nCol = 0, nIdx = 1;	CExcel xls;	xls.CreateSheet(1);	xls.SetWorksheet(0);	xls.SetColumnWidth(0, 8);	xls.SetColumnWidth(1, 15);	xls.SetColumnWidth(2, 17);	xls.SetColumnWidth(3, 14);	xls.SetColumnWidth(4, 17);	xls.SetColumnWidth(5, 17);	xls.SetColumnWidth(6, 17);	xls.SetColumnWidth(7, 23);	xls.SetCellText(0, 0, _T("STT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(1, 0, _T("MA_DVKT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(2, 0, _T("TEN_DVKT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(3, 0, _T("MA_GIA"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(4, 0, _T("DON_GIA"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(5, 0, _T("QUYET_DINH"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(6, 0, _T("CONG_BO"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(7, 0, _T("MA_COSOKCB"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetMerge(0, 0, 0, 0);	szSQL = GetQueryString();	rs.ExecSQL(szSQL);	nRow = 1;	nCol = 0;	while(!rs.IsEOF()){		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_TEXT);		rs.GetValue(_T("ma_dvkt"), tmpStr);		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("ten_dvkt"), tmpStr);		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("ma_gia"), tmpStr);		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("don_gia"), tmpStr);		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_NUMBER1);		rs.GetValue(_T("quyet_dinh"), tmpStr);		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("cong_bo"), tmpStr);		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("ma_cosokcb"), tmpStr);		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_TEXT);		nRow++;		rs.MoveNext();	}	EndWaitCursor();	xls.Save(_T("Exports\\BCSUDUNGDVKTBH.xls"));	
} 
void CBCSUDUNGDVKTBH::OnExport2(){	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();	CRecord rs(&pMF->m_db);	CString szSQL, tmpStr, szTemp, szWhere;	UpdateData(TRUE);	BeginWaitCursor();	szWhere.Empty();	int nRow =0, nCol = 0, nIdx = 1;	CExcel xls;	xls.CreateSheet(1);	xls.SetWorksheet(0);	xls.SetColumnWidth(0, 6);	xls.SetColumnWidth(1, 8);	xls.SetColumnWidth(2, 25);	xls.SetColumnWidth(3, 6);	xls.SetColumnWidth(4, 8);	xls.SetColumnWidth(5, 10);	xls.SetColumnWidth(6, 30);	xls.SetColumnWidth(7, 12);	xls.SetColumnWidth(8, 12);	xls.SetColumnWidth(9, 8);	xls.SetColumnWidth(10, 10);	xls.SetColumnWidth(11, 10);	xls.SetColumnWidth(12, 10);	xls.SetColumnWidth(13, 10);	xls.SetColumnWidth(14, 15);	xls.SetColumnWidth(15, 12);	xls.SetColumnWidth(16, 15);	xls.SetColumnWidth(17, 15);	xls.SetColumnWidth(18, 10);	xls.SetColumnWidth(19, 10);	xls.SetColumnWidth(20, 6);	xls.SetColumnWidth(21, 6);	xls.SetColumnWidth(22, 6);	xls.SetCellText(0, 0, _T("STT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(1, 0, _T("M\x41_HO\x41T_\x43H\x41T"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(2, 0, _T("HO\x41T_\x43H\x41T"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(3, 0, _T("M\x41_\x44UONG_\x44UNG"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(4, 0, _T("\x44UONG_\x44UNG"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(5, 0, _T("H\x41M_LUONG"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(6, 0, _T("T\x45N_THUO\x43"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(7, 0, _T("SO_\x44\x41NG_KY"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(8, 0, _T("\x44ONG_GOI"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(9, 0, _T("\x44ON_VI_TINH"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(10, 0, _T("\x44ON_GI\x41"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(11, 0, _T("\x44ON_GI\x41_TT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(12, 0, _T("SO_LUONG"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(13, 0, _T("M\x41_\x43SK\x43\x42"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(14, 0, _T("H\x41NG_S\x58"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(15, 0, _T("NUO\x43_S\x58"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(16, 0, _T("NH\x41_TH\x41U"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(17, 0, _T("QUY\x45T_\x44INH"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(18, 0, _T("\x43ONG_\x42O"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(19, 0, _T("M\x41_THUO\x43_\x42V"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(20, 0, _T("LO\x41I_THUO\x43"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(21, 0, _T("LO\x41I_TH\x41U"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(22, 0, _T("NHOM_TH\x41U"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetMerge(0, 0, 0, 0);	szSQL.Format(_T(" SELECT * FROM m_product_extra_info ") \
		_T(" LEFT JOIN m_product_view") \
		_T(" ON( product_id = mpei_product_id)") \
		_T(" WHERE product_org_id = 'PM' ORDER BY mpei_stt"));	rs.ExecSQL(szSQL);	nRow = 1;	nCol = 0;	while(!rs.IsEOF()){		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);		rs.GetValue(_T("mpei_ma_hoat_chat"), tmpStr);		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_NUMBER1);		rs.GetValue(_T("mpei_hoat_chat"), tmpStr);		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("mpei_ma_duong_dung"), tmpStr);		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("mpei_duong_dung"), tmpStr);		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("mpei_ham_luong"), tmpStr);		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("mpei_ten_thuoc"), tmpStr);		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("mpei_so_dang_ky"), tmpStr);		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("mpei_dong_goi"), tmpStr);		xls.SetCellText(nCol+8, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("mpei_don_vi_tinh"), tmpStr);		xls.SetCellText(nCol+9, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("mpei_don_gia"), tmpStr);		xls.SetCellText(nCol+10, nRow, tmpStr, FMT_NUMBER1);		rs.GetValue(_T("mpei_don_gia_tt"), tmpStr);		xls.SetCellText(nCol+11, nRow, tmpStr, FMT_NUMBER1);		rs.GetValue(_T("mpei_so_luong"), tmpStr);		xls.SetCellText(nCol+12, nRow, tmpStr, FMT_NUMBER1);		rs.GetValue(_T("mpei_ma_cskcb"), tmpStr);		xls.SetCellText(nCol+13, nRow, tmpStr, FMT_INTEGER);		rs.GetValue(_T("mpei_hang_sx"), tmpStr);		xls.SetCellText(nCol+14, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("mpei_nuoc_sx"), tmpStr);		xls.SetCellText(nCol+15, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("mpei_nha_thau"), tmpStr);		xls.SetCellText(nCol+16, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("mpei_quyet_dinh"), tmpStr);		xls.SetCellText(nCol+17, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("mpei_cong_bo"), tmpStr);		xls.SetCellText(nCol+18, nRow, CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy), FMT_TEXT);		rs.GetValue(_T("mpei_ma_thuoc_bv"), tmpStr);		xls.SetCellText(nCol+19, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("mpei_ma_loai"), tmpStr);		xls.SetCellText(nCol+20, nRow, tmpStr, FMT_NUMBER1);		rs.GetValue(_T("mpei_loai_thau"), tmpStr);		xls.SetCellText(nCol+21, nRow, tmpStr, FMT_NUMBER1);		rs.GetValue(_T("mpei_ma_nhom_vtyt"), tmpStr);		xls.SetCellText(nCol+22, nRow, tmpStr, FMT_TEXT);		nRow++;		rs.MoveNext();	}	EndWaitCursor();	xls.Save(_T("Exports\\BCSUDUNGDVKTBH_Thuoc.xls"));
} 
void CBCSUDUNGDVKTBH::OnExport3(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();	CRecord rs(&pMF->m_db);	CString szSQL, tmpStr, szTemp, szWhere;	UpdateData(TRUE);	BeginWaitCursor();	szWhere.Empty();	int nRow =0, nCol = 0, nIdx = 1;	CExcel xls;	xls.CreateSheet(1);	xls.SetWorksheet(0);	xls.SetColumnWidth(0, 6);	xls.SetColumnWidth(1, 10);	xls.SetColumnWidth(2, 25);	xls.SetColumnWidth(3, 15);	xls.SetColumnWidth(4, 15);	xls.SetColumnWidth(5, 30);	xls.SetColumnWidth(6, 8);	xls.SetColumnWidth(7, 8);	xls.SetColumnWidth(8, 8);	xls.SetColumnWidth(9, 6);	xls.SetColumnWidth(10, 10);	xls.SetColumnWidth(11, 10);	xls.SetColumnWidth(12, 20);	xls.SetColumnWidth(13, 12);	xls.SetColumnWidth(14, 10);	xls.SetColumnWidth(15, 6);	xls.SetColumnWidth(16, 6);	xls.SetColumnWidth(17, 6);	xls.SetColumnWidth(18, 6);	xls.SetCellText(0, 0, _T("STT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(1, 0, _T("M\x41_NHOM_VTYT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(2, 0, _T("T\x45N_NHOM_VTYT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(3, 0, _T("M\x41_HI\x45U"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(4, 0, _T("M\x41_VTYT_\x42V"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(5, 0, _T("T\x45N_VTYT_\x42V"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(6, 0, _T("QUY_\x43\x41\x43H"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(7, 0, _T("NUO\x43_S\x58"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(8, 0, _T("H\x41NG_S\x58"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(9, 0, _T("\x44ON_VI_TINH"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(10, 0, _T("\x44ON_GI\x41"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(11, 0, _T("\x44ON_GI\x41_TT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(12, 0, _T("NH\x41_TH\x41U"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(13, 0, _T("QUY\x45T_\x44INH"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(14, 0, _T("\x43ONG_\x42O"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(15, 0, _T("\x44INH_MU\x43"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(16, 0, _T("SO_LUONG"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(17, 0, _T("M\x41_\x43SK\x43\x42"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(18, 0, _T("LO\x41I_TH\x41U"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetMerge(0, 0, 0, 0);	szSQL.Format(_T(" SELECT * FROM m_product_extra_info ") \
		_T(" LEFT JOIN m_product_view") \
		_T(" ON( product_id = mpei_product_id)") \
		_T(" WHERE product_org_id = 'MA' ORDER BY mpei_stt"));	rs.ExecSQL(szSQL);	nRow = 1;	nCol = 0;	while(!rs.IsEOF()){		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);		rs.GetValue(_T("mpei_ma_nhom_vtyt"), tmpStr);		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("mpei_ten_nhom_vtyt"), tmpStr);		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("mpei_ma_hieu"), tmpStr);		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("mpei_ma_thuoc_bv"), tmpStr);		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("mpei_ten_thuoc"), tmpStr);		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("mpei_dong_goi"), tmpStr);		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("mpei_nuoc_sx"), tmpStr);		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("mpei_hang_sx"), tmpStr);		xls.SetCellText(nCol+8, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("mpei_don_vi_tinh"), tmpStr);		xls.SetCellText(nCol+9, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("mpei_don_gia"), tmpStr);		xls.SetCellText(nCol+10, nRow, tmpStr, FMT_NUMBER1);		rs.GetValue(_T("mpei_don_gia_tt"), tmpStr);		xls.SetCellText(nCol+11, nRow, tmpStr, FMT_NUMBER1);		rs.GetValue(_T("mpei_nha_thau"), tmpStr);		xls.SetCellText(nCol+12, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("mpei_quyet_dinh"), tmpStr);		xls.SetCellText(nCol+13, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("mpei_cong_bo"), tmpStr);		xls.SetCellText(nCol+14, nRow, CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy), FMT_TEXT);		rs.GetValue(_T("mpei_dinh_muc"), tmpStr);		xls.SetCellText(nCol+15, nRow, tmpStr, FMT_NUMBER1);		rs.GetValue(_T("mpei_so_luong"), tmpStr);		xls.SetCellText(nCol+16, nRow, tmpStr, FMT_NUMBER1);		rs.GetValue(_T("mpei_ma_cskcb"), tmpStr);		xls.SetCellText(nCol+17, nRow, tmpStr, FMT_INTEGER);		rs.GetValue(_T("mpei_loai_thau"), tmpStr);		xls.SetCellText(nCol+18, nRow, tmpStr, FMT_NUMBER1);		nRow++;		rs.MoveNext();	}	EndWaitCursor();	xls.Save(_T("Exports\\BCSUDUNGDVKTBH_Vattu.xls"));	
} 
void CBCSUDUNGDVKTBH::OnListDblClick(){
	
} 
void CBCSUDUNGDVKTBH::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CBCSUDUNGDVKTBH::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CBCSUDUNGDVKTBH::OnListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	UpdateData(true);

	m_wndList.BeginLoad(); 
	int nCount = 0;

	szSQL = GetQueryString();

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("ma_dvkt")), 
			rs.GetValue(_T("ten_dvkt")), 
			rs.GetValue(_T("ma_gia")), 
			rs.GetValue(_T("don_gia")),
			rs.GetValue(_T("quyet_dinh")),
			rs.GetValue(_T("cong_bo")),
			rs.GetValue(_T("ma_cosokcb")),
			NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}
int CBCSUDUNGDVKTBH::OnAddBCSUDUNGDVKTBH(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CBCSUDUNGDVKTBH::OnEditBCSUDUNGDVKTBH(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CBCSUDUNGDVKTBH::OnDeleteBCSUDUNGDVKTBH(){
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
 		OnCancelBCSUDUNGDVKTBH();
 	}
	return 0;
}
int CBCSUDUNGDVKTBH::OnSaveBCSUDUNGDVKTBH(){
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
 		//OnBCSUDUNGDVKTBHListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CBCSUDUNGDVKTBH::OnCancelBCSUDUNGDVKTBH(){
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
int CBCSUDUNGDVKTBH::OnBCSUDUNGDVKTBHListLoadData(){
	return 0;
}
CString CBCSUDUNGDVKTBH::GetQueryString(){
	CMainFrame *pMF = (CMainFrame*)AfxGetMainWnd();
	CString szSQL, szWhere;

	if(m_nOperation == 0)
		{
			if(!m_szOperationGroupKey.IsEmpty())
			{
				szWhere.AppendFormat(_T(" AND hfl_groupid = '%s'"), m_szOperationGroupKey);
			}
			if(!m_szParaclinicalGroupKey.IsEmpty())
			{
				szWhere.AppendFormat(_T(" AND 1 = 0"));
			}
			szWhere.AppendFormat(_T(" AND substr(hfl_groupid, 1, 2) IN('B4','B5')"));
		}
	if(m_nParaclinical == 0)
		{
			if(!m_szOperationGroupKey.IsEmpty())
			{
				szWhere.AppendFormat(_T(" AND 1 = 0"));
			}
			if(!m_szParaclinicalGroupKey.IsEmpty())
			{
				szWhere.AppendFormat(_T(" AND hfl_groupid = '%s'"), m_szParaclinicalGroupKey);
			}
			szWhere.AppendFormat(_T(" AND substr(hfl_groupid, 1, 2) IN('B1','B2','B3')"));
		}
	if(m_nAll == 0)
		{
			if(!m_szOperationGroupKey.IsEmpty())
			{
				szWhere.AppendFormat(_T(" AND hfl_groupid = '%s'"), m_szOperationGroupKey);
			}

			if(!m_szParaclinicalGroupKey.IsEmpty())
			{
				szWhere.AppendFormat(_T(" AND hfl_groupid = '%s'"), m_szParaclinicalGroupKey);
			}
		}

	if(!m_szName.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND lower(hfl_name) like(lower('%s%s%s')) "), _T("%"), m_szName, _T("%"));
	}


	szSQL.Format(_T(" SELECT") \
		_T(" hcm_map_id as ma_dvkt,") \
		_T(" hfl_name as ten_dvkt,") \
		_T(" hcm_id_37 as ma_gia,") \
		_T(" hfl_insprice as don_gia,") \
		_T(" '\x34\x33\x32/Q\xD0-QY' as quyet_dinh,") \
		_T(" '20150324' as cong_bo,") \
		_T(" '01014' as ma_cosokcb") \
		_T(" FROM") \
		_T(" hms_circular_map") \
		_T(" LEFT JOIN hms_fee_list") \
		_T(" ON(hfl_feeid = hcm_fee_id)") \
		_T(" WHERE hfl_active = 'Y'") \
		_T(" AND hfl_inspaid = 'Y' AND hfl_applydate = TO_TIMESTAMP('2016/03/01', 'YYYY-MM-DD') %s ORDER BY hcm_map_id, hfl_name"), szWhere);

	return szSQL;
}
