#include "stdafx.h"
#include "RPTITSRealAbilityM2.h"
#include "HMSMainFrame.h"
#include "Excel.h"
#include "ReportDocument.h"
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CRPTITSRealAbilityM2* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CRPTITSRealAbilityM2 *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CRPTITSRealAbilityM2 *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CRPTITSRealAbilityM2 *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CRPTITSRealAbilityM2 *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CRPTITSRealAbilityM2 *)pWnd)->OnDepartmentAddNew();
}*/
static void _OnExportSelectFnc(CWnd *pWnd){
	CRPTITSRealAbilityM2 *pVw = (CRPTITSRealAbilityM2 *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CRPTITSRealAbilityM2 *pVw = (CRPTITSRealAbilityM2 *)pWnd;
	pVw->OnPrintSelect();
} 
static int _OnAddRPTITSRealAbilityM2Fnc(CWnd *pWnd){
	 return ((CRPTITSRealAbilityM2*)pWnd)->OnAddRPTITSRealAbilityM2();
} 
static int _OnEditRPTITSRealAbilityM2Fnc(CWnd *pWnd){
	 return ((CRPTITSRealAbilityM2*)pWnd)->OnEditRPTITSRealAbilityM2();
} 
static int _OnDeleteRPTITSRealAbilityM2Fnc(CWnd *pWnd){
	 return ((CRPTITSRealAbilityM2*)pWnd)->OnDeleteRPTITSRealAbilityM2();
} 
static int _OnSaveRPTITSRealAbilityM2Fnc(CWnd *pWnd){
	 return ((CRPTITSRealAbilityM2*)pWnd)->OnSaveRPTITSRealAbilityM2();
} 
static int _OnCancelRPTITSRealAbilityM2Fnc(CWnd *pWnd){
	 return ((CRPTITSRealAbilityM2*)pWnd)->OnCancelRPTITSRealAbilityM2();
} 
CRPTITSRealAbilityM2::CRPTITSRealAbilityM2(CWnd *pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CRPTITSRealAbilityM2::~CRPTITSRealAbilityM2(){
}
void CRPTITSRealAbilityM2::OnCreateComponents(){
	m_wndReportParameters.Create(this, _T("Report Parameters"), 5, 5, 430, 60);
	m_wndDepartmentLabel.Create(this, _T("Department"), 10, 30, 110, 55);
	m_wndDepartment.Create(this,115, 30, 425, 55); 
	m_wndExport.Create(this, _T("&Export"), 350, 65, 430, 90);
	m_wndPrint.Create(this, _T("Print"), 265, 65, 345, 90);

}
void CRPTITSRealAbilityM2::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(1024);



}
void CRPTITSRealAbilityM2::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndDepartment.SetEvent(WE_SELENDOK, _OnDepartmentSelendokFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	//m_wndDepartment.SetEvent(WE_ADDNEW, _OnDepartmentAddNewFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	

}
void CRPTITSRealAbilityM2::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);

}
void CRPTITSRealAbilityM2::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CRPTITSRealAbilityM2::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CRPTITSRealAbilityM2::SetDefaultValues(){

	m_szDepartmentKey.Empty();

}
int CRPTITSRealAbilityM2::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
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
void CRPTITSRealAbilityM2::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CRPTITSRealAbilityM2::OnDepartmentSelendok(){
	 
}
/*void CRPTITSRealAbilityM2::OnDepartmentSetfocus(){
	
}*/
/*void CRPTITSRealAbilityM2::OnDepartmentKillfocus(){
	
}*/
long CRPTITSRealAbilityM2::OnDepartmentLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDepartment.IsSearchKey() && !m_szDepartmentKey.IsEmpty()){
	 szWhere.Format(_T(" and sd_id='%s' "), m_szDepartmentKey);
	}
	m_wndDepartment.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT sd_id as id, sd_name as name FROM sys_dept WHERE 1=1 %s ORDER BY id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDepartment.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CRPTITSRealAbilityM2::OnDepartmentAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CRPTITSRealAbilityM2::OnExportSelect(){	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szWhere;
	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();
	int nRow =0, nCol = 0;
	CExcel xls;
	xls.CreateSheet(1);
	xls.SetWorksheet(0);

	xls.SetColumnWidth(0, 8);
	xls.SetColumnWidth(1, 17);
	xls.SetColumnWidth(2, 8);
	xls.SetColumnWidth(3, 8);
	xls.SetColumnWidth(4, 8);
	xls.SetColumnWidth(5, 8);
	xls.SetColumnWidth(6, 8);
	xls.SetColumnWidth(7, 31);
	xls.SetColumnWidth(8, 8);
	xls.SetColumnWidth(9, 8);
	xls.SetColumnWidth(10, 8);
	xls.SetColumnWidth(11, 8);
	xls.SetColumnWidth(12, 8);
	xls.SetColumnWidth(13, 8);
	xls.SetColumnWidth(14, 8);
	xls.SetColumnWidth(15, 8);
	xls.SetCellText(0, 2, _T("TH\x1EF0\x43 L\x1EF0\x43 TR\x41NG \x42\x1ECA \x43NTT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(0, 3, _T("STT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(0, 5, _T("\x31"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(1, 0, _T("\x42\x1ED8 QU\x1ED0\x43 PH\xD2NG"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(1, 1, _T("\x42\x1EC6NH VI\x1EC6N TRUNG \x1AF\x1A0NG QU\xC2N \x110\x1ED8I \x31\x30\x38"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(1, 3, _T("T\xEAn tr\x61ng \x62\x1ECB"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(1, 5, _T("\x32"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(2, 3, _T("H\xE3ng / n\x1B0\x1EDB\x63 S\x58"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(2, 5, _T("\x33"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(3, 3, _T("K\xFD hi\x1EC7u"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(3, 5, _T("\x34"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(4, 3, _T("S\x1ED1 m\xE1y"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(4, 5, _T("\x35"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(5, 3, _T("S\x1ED1 qu\x1EA3n l\xFD"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(5, 5, _T("\x36"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(6, 3, _T("\x110\x1A1n gi\xE1"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(6, 5, _T("\x37"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(7, 3, _T("Th\xF4ng s\x1ED1 k\x1EF9 thu\x1EADt"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(7, 5, _T("\x38"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(8, 3, _T("N\x103m S\x44"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(8, 5, _T("\x39"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(9, 3, _T("H\x1EC7 \x111i\x1EC1u h\xE0nh"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(9, 5, _T("\x31\x30"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(10, 0, _T("M\x1EABu \x30\x32/KK-T\x42\x43NTT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(10, 3, _T("\x43\x1EA5p \x43L"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(10, 5, _T("\x31\x31"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(11, 3, _T("M\x1EE5\x63 \x111\xED\x63h S\x44"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(11, 5, _T("\x31\x32"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(12, 3, _T("N\x1A1i S\x44"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(12, 5, _T("\x31\x33"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);

	xls.SetMerge(0, 0, 0, 0);
	xls.SetMerge(2, 2, 0, 12);
	xls.SetMerge(3, 4, 0, 0);
	xls.SetMerge(0, 0, 1, 3);
	xls.SetMerge(1, 1, 1, 3);
	xls.SetMerge(3, 4, 1, 1);
	xls.SetMerge(3, 4, 2, 2);
	xls.SetMerge(3, 4, 3, 3);
	xls.SetMerge(3, 4, 4, 4);
	xls.SetMerge(3, 4, 5, 5);
	xls.SetMerge(3, 4, 6, 6);
	xls.SetMerge(3, 4, 8, 8);
	xls.SetMerge(3, 4, 9, 9);
	xls.SetMerge(0, 0, 10, 12);
	xls.SetMerge(3, 4, 10, 10);
	xls.SetMerge(3, 4, 11, 11);
	xls.SetMerge(3, 4, 12, 12);	szSQL.Format(_T(" SELECT si_name, ") \
				_T("        sil_mfgid, ") \
				_T("        si_model, ") \
				_T("        si_serial, ") \
				_T("        si_amount, ") \
				_T("        si_item_id, TO_NCHAR(thongso) as tskt,") \
				_T("        mucdich, ") \
				_T("        capcl ") \
				_T(" FROM   (SELECT si_name, ") \
				_T("                sil_mfgid, ") \
				_T("                si_model, ") \
				_T("                si_serial, ") \
				_T("                si_amount, ") \
				_T("                si_item_id,") \
				_T("                TO_CHAR((select LISTAGG(thongso, ' ') WITHIN GROUP (ORDER BY thongso) AS thongso ") \
				_T("				FROM ") \
				_T("				(select trim(faa_type||': '||faa_speed||', '||faa_datasize) as thongso, faa_assetno from fam_attach_accessories ) ") \
				_T("				where faa_assetno = si_item_list_id)) as thongso, ") \
				_T("                ''                                                       AS namsd, ") \
				_T("                (SELECT To_char(Max(fil_qtylevel)) ") \
				_T("                 FROM   fam_invent_line ") \
				_T("                 WHERE  fil_assetno = si_item_id ") \
				_T("                        AND fil_idx = (SELECT Max(fil_idx) ") \
				_T("                                       FROM   fam_invent_line ") \
				_T("                                       WHERE  fil_assetno = si_item_id)) AS capcl, ") \
				_T("                si_intent                                                AS mucdich, ") \
				_T("                ''                                                       AS noisd ") \
				_T("         FROM   fam_invent_line ") \
				_T("                LEFT JOIN storage_item ") \
				_T("                       ON( si_item_id = fil_assetno ) ") \
				_T("                LEFT JOIN storage_item_list ") \
				_T("                       ON ( sil_item_list_id = si_item_list_id ) ") \
				_T("         WHERE  si_org_id = 'ITS' ") \
				_T("         UNION ALL ") \
				_T("         SELECT si_name, ") \
				_T("                sil_mfgid, ") \
				_T("                si_model, ") \
				_T("                si_serial, ") \
				_T("                si_amount, ") \
				_T("                si_item_id,") \
				_T("                TO_CHAR((select LISTAGG(thongso, ' ') WITHIN GROUP (ORDER BY thongso) AS thongso ") \
				_T("				FROM ") \
				_T("				(select trim(faa_type||': '||faa_speed||', '||faa_datasize) as thongso, faa_assetno from fam_attach_accessories ) ") \
				_T("				where faa_assetno = si_item_list_id)) as thongso, ") \
				_T("                ''                                         AS namsd, ") \
				_T("                '1'                                        AS capcl, ") \
				_T("                si_intent                                  AS mucdich, ") \
				_T("                ''                                         AS noisd ") \
				_T("         FROM   storage_bin ") \
				_T("                LEFT JOIN storage_item ") \
				_T("                       ON( si_item_id = sb_item_id ) ") \
				_T("                LEFT JOIN storage_item_list ") \
				_T("                       ON ( sil_item_list_id = si_item_list_id ) ") \
				_T("         WHERE  sb_org_id = 'ITS' ") \
				_T("                AND sb_item_id NOT IN (SELECT fil_assetno ") \
				_T("                                       FROM   fam_invent_line)) ") \
				_T(" GROUP  BY si_name, ") \
				_T("           sil_mfgid, ") \
				_T("           si_model, ") \
				_T("           si_serial, ") \
				_T("           si_amount, si_item_id,") \
				_T("           thongso, mucdich, capcl ") \
				_T(" ORDER  BY si_name "));	_fmsg(_T("%s"), szSQL);	rs.ExecSQL(szSQL);	nRow = 7;	nCol = 0;	int nCount = 1;	while(!rs.IsEOF()){	tmpStr.Format(_T("%d"), nCount);	xls.SetCellText(nCol+0, nRow, tmpStr, FMT_TEXT);	rs.GetValue(_T("si_name"), tmpStr);	xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);	rs.GetValue(_T("si_mfgid"), tmpStr);	xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);	rs.GetValue(_T("si_model"), tmpStr);	xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);	rs.GetValue(_T("si_serial"), tmpStr);	xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT);	rs.GetValue(_T("si_item_id"), tmpStr);	xls.SetCellText(nCol+5, nRow, tmpStr, FMT_TEXT);	rs.GetValue(_T("si_amount"), tmpStr);	xls.SetCellText(nCol+6, nRow, tmpStr, FMT_TEXT);	rs.GetValue(_T("tskt"), tmpStr);	xls.SetCellText(nCol+7, nRow, tmpStr, FMT_TEXT);	rs.GetValue(_T(""), tmpStr);	xls.SetCellText(nCol+8, nRow, tmpStr, FMT_TEXT);	rs.GetValue(_T(""), tmpStr);	xls.SetCellText(nCol+9, nRow, tmpStr, FMT_TEXT);	rs.GetValue(_T("capcl"), tmpStr);	xls.SetCellText(nCol+10, nRow, tmpStr, FMT_TEXT);	rs.GetValue(_T("mucdich"), tmpStr);	xls.SetCellText(nCol+11, nRow, tmpStr, FMT_TEXT);	rs.GetValue(_T(""), tmpStr);	xls.SetCellText(nCol+12, nRow, tmpStr, FMT_TEXT);	nRow++;	rs.MoveNext();	nCount++;	}	EndWaitCursor();	xls.Save(_T("Exports\\thuclucm2.xls"));
	
} 
void CRPTITSRealAbilityM2::OnPrintSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CRPTITSRealAbilityM2::OnAddRPTITSRealAbilityM2(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CRPTITSRealAbilityM2::OnEditRPTITSRealAbilityM2(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CRPTITSRealAbilityM2::OnDeleteRPTITSRealAbilityM2(){
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
 		OnCancelRPTITSRealAbilityM2();
 	}
	return 0;
}
int CRPTITSRealAbilityM2::OnSaveRPTITSRealAbilityM2(){
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
 		//OnRPTITSRealAbilityM2ListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CRPTITSRealAbilityM2::OnCancelRPTITSRealAbilityM2(){
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
int CRPTITSRealAbilityM2::OnRPTITSRealAbilityM2ListLoadData(){
	return 0;
}
