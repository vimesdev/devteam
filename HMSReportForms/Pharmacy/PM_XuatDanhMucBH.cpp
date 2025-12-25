#include "stdafx.h"
#include "PM_XuatDanhMucBH.h"
#include "MainFrame_E10.h"
#include "ReportDocument.h"
static void _OnExcelSelectFnc(CWnd *pWnd){
	CPM_XuatDanhMucBH *pVw = (CPM_XuatDanhMucBH *)pWnd;
	pVw->OnExcelSelect();
} 
static int _OnAddPM_XuatDanhMucBHFnc(CWnd *pWnd){
	 return ((CPM_XuatDanhMucBH*)pWnd)->OnAddPM_XuatDanhMucBH();
} 
static int _OnEditPM_XuatDanhMucBHFnc(CWnd *pWnd){
	 return ((CPM_XuatDanhMucBH*)pWnd)->OnEditPM_XuatDanhMucBH();
} 
static int _OnDeletePM_XuatDanhMucBHFnc(CWnd *pWnd){
	 return ((CPM_XuatDanhMucBH*)pWnd)->OnDeletePM_XuatDanhMucBH();
} 
static int _OnSavePM_XuatDanhMucBHFnc(CWnd *pWnd){
	 return ((CPM_XuatDanhMucBH*)pWnd)->OnSavePM_XuatDanhMucBH();
} 
static int _OnCancelPM_XuatDanhMucBHFnc(CWnd *pWnd){
	 return ((CPM_XuatDanhMucBH*)pWnd)->OnCancelPM_XuatDanhMucBH();
} 
CPM_XuatDanhMucBH::CPM_XuatDanhMucBH(CWnd *pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CPM_XuatDanhMucBH::~CPM_XuatDanhMucBH(){
}
void CPM_XuatDanhMucBH::OnCreateComponents(){
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 405, 65);
	m_wndExcel.Create(this, _T("&Excel"), 10, 30, 90, 55);

}
void CPM_XuatDanhMucBH::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CPM_XuatDanhMucBH::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndExcel.SetEvent(WE_CLICK, _OnExcelSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddPM_XuatDanhMucBHFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditPM_XuatDanhMucBHFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeletePM_XuatDanhMucBHFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSavePM_XuatDanhMucBHFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelPM_XuatDanhMucBHFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CPM_XuatDanhMucBH::OnDoDataExchange(CDataExchange* pDX){

}
void CPM_XuatDanhMucBH::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CPM_XuatDanhMucBH::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CPM_XuatDanhMucBH::SetDefaultValues(){


}
int CPM_XuatDanhMucBH::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
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
void CPM_XuatDanhMucBH::OnExcelSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if(pMF->GetDepartmentID() == _T("KD"))
		{
			CRecord rs(&pMF->m_db);			CString szSQL, tmpStr, szTemp, szWhere;			UpdateData(TRUE);			BeginWaitCursor();			szWhere.Empty();			int nRow =0, nCol = 0, nIdx = 1;			CExcel xls;			xls.CreateSheet(1);			xls.SetWorksheet(0);			xls.SetColumnWidth(0, 6);			xls.SetColumnWidth(1, 8);			xls.SetColumnWidth(2, 25);			xls.SetColumnWidth(3, 6);			xls.SetColumnWidth(4, 8);			xls.SetColumnWidth(5, 10);			xls.SetColumnWidth(6, 30);			xls.SetColumnWidth(7, 12);			xls.SetColumnWidth(8, 12);			xls.SetColumnWidth(9, 8);			xls.SetColumnWidth(10, 10);			xls.SetColumnWidth(11, 10);			xls.SetColumnWidth(12, 10);			xls.SetColumnWidth(13, 10);			xls.SetColumnWidth(14, 15);			xls.SetColumnWidth(15, 12);			xls.SetColumnWidth(16, 15);			xls.SetColumnWidth(17, 15);			xls.SetColumnWidth(18, 10);			xls.SetColumnWidth(19, 10);			xls.SetColumnWidth(20, 6);			xls.SetColumnWidth(21, 6);			xls.SetColumnWidth(22, 6);			xls.SetCellText(0, 0, _T("STT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);			xls.SetCellText(1, 0, _T("M\x41_HO\x41T_\x43H\x41T"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);			xls.SetCellText(2, 0, _T("HO\x41T_\x43H\x41T"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);			xls.SetCellText(3, 0, _T("M\x41_\x44UONG_\x44UNG"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);			xls.SetCellText(4, 0, _T("\x44UONG_\x44UNG"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);			xls.SetCellText(5, 0, _T("H\x41M_LUONG"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);			xls.SetCellText(6, 0, _T("T\x45N_THUO\x43"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);			xls.SetCellText(7, 0, _T("SO_\x44\x41NG_KY"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);			xls.SetCellText(8, 0, _T("\x44ONG_GOI"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);			xls.SetCellText(9, 0, _T("\x44ON_VI_TINH"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);			xls.SetCellText(10, 0, _T("\x44ON_GI\x41"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);			xls.SetCellText(11, 0, _T("\x44ON_GI\x41_TT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);			xls.SetCellText(12, 0, _T("SO_LUONG"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);			xls.SetCellText(13, 0, _T("M\x41_\x43SK\x43\x42"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);			xls.SetCellText(14, 0, _T("H\x41NG_S\x58"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);			xls.SetCellText(15, 0, _T("NUO\x43_S\x58"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);			xls.SetCellText(16, 0, _T("NH\x41_TH\x41U"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);			xls.SetCellText(17, 0, _T("QUY\x45T_\x44INH"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);			xls.SetCellText(18, 0, _T("\x43ONG_\x42O"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);			xls.SetCellText(19, 0, _T("M\x41_THUO\x43_\x42V"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);			xls.SetCellText(20, 0, _T("LO\x41I_THUO\x43"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);			xls.SetCellText(21, 0, _T("LO\x41I_TH\x41U"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);			xls.SetCellText(22, 0, _T("NHOM_TH\x41U"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);			xls.SetMerge(0, 0, 0, 0);			szSQL.Format(_T(" SELECT * FROM m_product_extra_info ") \
				_T(" LEFT JOIN m_product_view") \
				_T(" ON( product_id = mpei_product_id)") \
				_T(" WHERE product_org_id = 'PM' ORDER BY mpei_stt"));			rs.ExecSQL(szSQL);			nRow = 1;			nCol = 0;			while(!rs.IsEOF()){				xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);				rs.GetValue(_T("mpei_ma_hoat_chat"), tmpStr);				xls.SetCellText(nCol+1, nRow, tmpStr, FMT_NUMBER1);				rs.GetValue(_T("mpei_hoat_chat"), tmpStr);				xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);				rs.GetValue(_T("mpei_ma_duong_dung"), tmpStr);				xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);				rs.GetValue(_T("mpei_duong_dung"), tmpStr);				xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT);				rs.GetValue(_T("mpei_ham_luong"), tmpStr);				xls.SetCellText(nCol+5, nRow, tmpStr, FMT_TEXT);				rs.GetValue(_T("mpei_ten_thuoc"), tmpStr);				xls.SetCellText(nCol+6, nRow, tmpStr, FMT_TEXT);				rs.GetValue(_T("mpei_so_dang_ky"), tmpStr);				xls.SetCellText(nCol+7, nRow, tmpStr, FMT_TEXT);				rs.GetValue(_T("mpei_dong_goi"), tmpStr);				xls.SetCellText(nCol+8, nRow, tmpStr, FMT_TEXT);				rs.GetValue(_T("mpei_don_vi_tinh"), tmpStr);				xls.SetCellText(nCol+9, nRow, tmpStr, FMT_TEXT);				rs.GetValue(_T("mpei_don_gia"), tmpStr);				xls.SetCellText(nCol+10, nRow, tmpStr, FMT_NUMBER1);				rs.GetValue(_T("mpei_don_gia_tt"), tmpStr);				xls.SetCellText(nCol+11, nRow, tmpStr, FMT_NUMBER1);				rs.GetValue(_T("mpei_so_luong"), tmpStr);				xls.SetCellText(nCol+12, nRow, tmpStr, FMT_NUMBER1);				rs.GetValue(_T("mpei_ma_cskcb"), tmpStr);				xls.SetCellText(nCol+13, nRow, tmpStr, FMT_INTEGER);				rs.GetValue(_T("mpei_hang_sx"), tmpStr);				xls.SetCellText(nCol+14, nRow, tmpStr, FMT_TEXT);				rs.GetValue(_T("mpei_nuoc_sx"), tmpStr);				xls.SetCellText(nCol+15, nRow, tmpStr, FMT_TEXT);				rs.GetValue(_T("mpei_nha_thau"), tmpStr);				xls.SetCellText(nCol+16, nRow, tmpStr, FMT_TEXT);				rs.GetValue(_T("mpei_quyet_dinh"), tmpStr);				xls.SetCellText(nCol+17, nRow, tmpStr, FMT_TEXT);				rs.GetValue(_T("mpei_cong_bo"), tmpStr);				xls.SetCellText(nCol+18, nRow, CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy), FMT_TEXT);				rs.GetValue(_T("mpei_ma_thuoc_bv"), tmpStr);				xls.SetCellText(nCol+19, nRow, tmpStr, FMT_TEXT);				rs.GetValue(_T("mpei_ma_loai"), tmpStr);				xls.SetCellText(nCol+20, nRow, tmpStr, FMT_NUMBER1);				rs.GetValue(_T("mpei_loai_thau"), tmpStr);				xls.SetCellText(nCol+21, nRow, tmpStr, FMT_NUMBER1);				rs.GetValue(_T("mpei_ma_nhom_vtyt"), tmpStr);				xls.SetCellText(nCol+22, nRow, tmpStr, FMT_TEXT);				nRow++;				rs.MoveNext();			}			EndWaitCursor();			xls.Save(_T("Exports\\BCSUDUNGDVKTBH_Thuoc.xls"));
		}
	if(pMF->GetDepartmentID() == _T("C10"))
		{
			CRecord rs(&pMF->m_db);			CString szSQL, tmpStr, szTemp, szWhere;			UpdateData(TRUE);			BeginWaitCursor();			szWhere.Empty();			int nRow =0, nCol = 0, nIdx = 1;			CExcel xls;			xls.CreateSheet(1);			xls.SetWorksheet(0);			xls.SetColumnWidth(0, 6);			xls.SetColumnWidth(1, 10);			xls.SetColumnWidth(2, 25);			xls.SetColumnWidth(3, 15);			xls.SetColumnWidth(4, 15);			xls.SetColumnWidth(5, 30);			xls.SetColumnWidth(6, 8);			xls.SetColumnWidth(7, 8);			xls.SetColumnWidth(8, 8);			xls.SetColumnWidth(9, 6);			xls.SetColumnWidth(10, 10);			xls.SetColumnWidth(11, 10);			xls.SetColumnWidth(12, 20);			xls.SetColumnWidth(13, 12);			xls.SetColumnWidth(14, 10);			xls.SetColumnWidth(15, 6);			xls.SetColumnWidth(16, 6);			xls.SetColumnWidth(17, 6);			xls.SetColumnWidth(18, 6);			xls.SetCellText(0, 0, _T("STT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);			xls.SetCellText(1, 0, _T("M\x41_NHOM_VTYT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);			xls.SetCellText(2, 0, _T("T\x45N_NHOM_VTYT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);			xls.SetCellText(3, 0, _T("M\x41_HI\x45U"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);			xls.SetCellText(4, 0, _T("M\x41_VTYT_\x42V"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);			xls.SetCellText(5, 0, _T("T\x45N_VTYT_\x42V"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);			xls.SetCellText(6, 0, _T("QUY_\x43\x41\x43H"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);			xls.SetCellText(7, 0, _T("NUO\x43_S\x58"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);			xls.SetCellText(8, 0, _T("H\x41NG_S\x58"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);			xls.SetCellText(9, 0, _T("\x44ON_VI_TINH"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);			xls.SetCellText(10, 0, _T("\x44ON_GI\x41"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);			xls.SetCellText(11, 0, _T("\x44ON_GI\x41_TT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);			xls.SetCellText(12, 0, _T("NH\x41_TH\x41U"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);			xls.SetCellText(13, 0, _T("QUY\x45T_\x44INH"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);			xls.SetCellText(14, 0, _T("\x43ONG_\x42O"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);			xls.SetCellText(15, 0, _T("\x44INH_MU\x43"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);			xls.SetCellText(16, 0, _T("SO_LUONG"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);			xls.SetCellText(17, 0, _T("M\x41_\x43SK\x43\x42"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);			xls.SetCellText(18, 0, _T("LO\x41I_TH\x41U"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);			xls.SetMerge(0, 0, 0, 0);			szSQL.Format(_T(" SELECT * FROM m_product_extra_info ") \
				_T(" LEFT JOIN m_product_view") \
				_T(" ON( product_id = mpei_product_id)") \
				_T(" WHERE product_org_id = 'MA' ORDER BY mpei_stt"));			rs.ExecSQL(szSQL);			nRow = 1;			nCol = 0;			while(!rs.IsEOF()){				xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);				rs.GetValue(_T("mpei_ma_nhom_vtyt"), tmpStr);				xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);				rs.GetValue(_T("mpei_ten_nhom_vtyt"), tmpStr);				xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);				rs.GetValue(_T("mpei_ma_hieu"), tmpStr);				xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);				rs.GetValue(_T("mpei_ma_thuoc_bv"), tmpStr);				xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT);				rs.GetValue(_T("mpei_ten_thuoc"), tmpStr);				xls.SetCellText(nCol+5, nRow, tmpStr, FMT_TEXT);				rs.GetValue(_T("mpei_dong_goi"), tmpStr);				xls.SetCellText(nCol+6, nRow, tmpStr, FMT_TEXT);				rs.GetValue(_T("mpei_nuoc_sx"), tmpStr);				xls.SetCellText(nCol+7, nRow, tmpStr, FMT_TEXT);				rs.GetValue(_T("mpei_hang_sx"), tmpStr);				xls.SetCellText(nCol+8, nRow, tmpStr, FMT_TEXT);				rs.GetValue(_T("mpei_don_vi_tinh"), tmpStr);				xls.SetCellText(nCol+9, nRow, tmpStr, FMT_TEXT);				rs.GetValue(_T("mpei_don_gia"), tmpStr);				xls.SetCellText(nCol+10, nRow, tmpStr, FMT_NUMBER1);				rs.GetValue(_T("mpei_don_gia_tt"), tmpStr);				xls.SetCellText(nCol+11, nRow, tmpStr, FMT_NUMBER1);				rs.GetValue(_T("mpei_nha_thau"), tmpStr);				xls.SetCellText(nCol+12, nRow, tmpStr, FMT_TEXT);				rs.GetValue(_T("mpei_quyet_dinh"), tmpStr);				xls.SetCellText(nCol+13, nRow, tmpStr, FMT_TEXT);				rs.GetValue(_T("mpei_cong_bo"), tmpStr);				xls.SetCellText(nCol+14, nRow, CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy), FMT_TEXT);				rs.GetValue(_T("mpei_dinh_muc"), tmpStr);				xls.SetCellText(nCol+15, nRow, tmpStr, FMT_NUMBER1);				rs.GetValue(_T("mpei_so_luong"), tmpStr);				xls.SetCellText(nCol+16, nRow, tmpStr, FMT_NUMBER1);				rs.GetValue(_T("mpei_ma_cskcb"), tmpStr);				xls.SetCellText(nCol+17, nRow, tmpStr, FMT_INTEGER);				rs.GetValue(_T("mpei_loai_thau"), tmpStr);				xls.SetCellText(nCol+18, nRow, tmpStr, FMT_NUMBER1);				nRow++;				rs.MoveNext();			}			EndWaitCursor();			xls.Save(_T("Exports\\BCSUDUNGDVKTBH_Vattu.xls"));	
		}

} 
int CPM_XuatDanhMucBH::OnAddPM_XuatDanhMucBH(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CPM_XuatDanhMucBH::OnEditPM_XuatDanhMucBH(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CPM_XuatDanhMucBH::OnDeletePM_XuatDanhMucBH(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	CString szSQL;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
 	szSQL.Format(_T("DELETE FROM  WHERE  AND") );
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
 		SetMode(VM_NONE);
 		OnCancelPM_XuatDanhMucBH();
 	}
	return 0;
}
int CPM_XuatDanhMucBH::OnSavePM_XuatDanhMucBH(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
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
 		//OnPM_XuatDanhMucBHListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CPM_XuatDanhMucBH::OnCancelPM_XuatDanhMucBH(){
 	if(GetMode() == VM_EDIT)
 	{
 		SetMode(VM_VIEW);
 	} 
 	else 
 	{
 		SetMode(VM_NONE);
 	} 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	return 0;
} 
int CPM_XuatDanhMucBH::OnPM_XuatDanhMucBHListLoadData(){
	return 0;
}
