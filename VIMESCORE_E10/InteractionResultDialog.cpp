#include "InteractionResultDialog.h"
#include "MainFrame_E10.h"
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CInteractionResultDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CInteractionResultDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CInteractionResultDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CInteractionResultDialog*)pWnd)->OnListDeleteItem();
} 
static int _OnAddInteractionResultDialogFnc(CWnd *pWnd){
	 return ((CInteractionResultDialog*)pWnd)->OnAddInteractionResultDialog();
} 
static int _OnEditInteractionResultDialogFnc(CWnd *pWnd){
	 return ((CInteractionResultDialog*)pWnd)->OnEditInteractionResultDialog();
} 
static int _OnDeleteInteractionResultDialogFnc(CWnd *pWnd){
	 return ((CInteractionResultDialog*)pWnd)->OnDeleteInteractionResultDialog();
} 
static int _OnSaveInteractionResultDialogFnc(CWnd *pWnd){
	 return ((CInteractionResultDialog*)pWnd)->OnSaveInteractionResultDialog();
} 
static int _OnCancelInteractionResultDialogFnc(CWnd *pWnd){
	 return ((CInteractionResultDialog*)pWnd)->OnCancelInteractionResultDialog();
} 
CInteractionResultDialog::CInteractionResultDialog(CWnd *pParent):
	CGuiDialog(pParent){
	m_szCaseID = _T("");
	m_nDlgWidth = 600;
	m_nDlgHeight = 225;
	SetDefaultValues();
}
CInteractionResultDialog::~CInteractionResultDialog(){
}
void CInteractionResultDialog::OnCreateComponents(){
	m_wndInteractionResult.Create(this, _T("Interaction Result"), 5, 5, 600, 225);
	m_wndList.Create(this,10, 30, 595, 220); 

}
void CInteractionResultDialog::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndList.InsertColumn(0, _T(""), CFMT_TEXT, 0);
	m_wndList.InsertColumn(1, _T("STT"), CFMT_TEXT, 40);
	m_wndList.InsertColumn(2, _T("Result"), CFMT_TEXT, 300);
	m_wndList.InsertColumn(3, _T("Name"), CFMT_TEXT, 150);
	m_wndList.InsertColumn(4, _T("Descr"), CFMT_TEXT, 240);

}
void CInteractionResultDialog::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	OnListLoadData();

}
void CInteractionResultDialog::OnDoDataExchange(CDataExchange* pDX){

}
void CInteractionResultDialog::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CInteractionResultDialog::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CInteractionResultDialog::SetDefaultValues(){


}
int CInteractionResultDialog::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
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
void CInteractionResultDialog::OnListDblClick(){
	
} 
void CInteractionResultDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
int CInteractionResultDialog::OnListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	 return 0;
} 
long CInteractionResultDialog::OnListLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szResult, tmpStr, tmpStr2, szOldID, szNewID, szLevel, szOldLevel, szOldDescr, szOldName, szNewName;
	int nIdx = 1, nItem = 0;
	szOldID.Empty();
	szNewID.Empty();
	//1596657
	szSQL.Format(_T(" SELECT hic_id id, hic_type lv, hic_name name, mp_product_class_id, hic_descr descr, listagg(to_char(mp_name), '| ') ") \
				 _T(" WITHIN GROUP (ORDER BY mp_name) str ") \
				 _T(" FROM hms_interaction_case, hms_interaction_line, m_product, hms_pharmaorderline ") \
				 _T(" WHERE mp_product_class_id = hil_item_id AND hpol_product_id = mp_product_id ") \
				 _T(" AND hpol_orderid IN (%d) AND hic_id = hil_caseid AND hic_id IN (%s)") \
				 _T(" GROUP BY hic_id, hic_type, mp_product_class_id, hic_descr, hic_name") \
				 _T(" ORDER BY hic_type, hic_name "), m_nOrderID, m_szCaseID);
	m_wndList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		rs.GetValue(_T("id"), szNewID);
		rs.GetValue(_T("lv"), szLevel);
		rs.GetValue(_T("name"), szNewName);
		_debug(_T("szLevel: %s"), szLevel);
		if (szOldID != szNewID)
		{
			_debug(_T("Result: %s"), szResult);
			if (!szResult.IsEmpty())
			{
				tmpStr = szResult;
				if (szOldLevel == _T("1"))
					tmpStr2 = _T("Nghi\xEAm tr\x1ECDng");
				else if (szOldLevel == _T("2"))
					tmpStr2 = _T("Trung \x62\xECnh");
				else if (szOldLevel == _T("3"))
					tmpStr2 = _T("Nh\x1EB9");
				szResult.Format(_T("%s t\x1B0\x1A1ng t\xE1\x63 \x1EDF m\x1EE9\x63 \x111\x1ED9 %s"), tmpStr, tmpStr2);
				tmpStr.Format(_T("%d"), nIdx++);
				nItem = m_wndList.AddItems(szOldID,
					tmpStr, 
					szResult, 
					szOldName,
					szOldDescr, NULL);
				szResult.Empty();
				if (szOldLevel == _T("1"))
					m_wndList.SetSubItemBkColor(nItem, 3, RGB(255, 0, 0));
				else if (szOldLevel == _T("2"))
					m_wndList.SetSubItemBkColor(nItem, 3, RGB(255, 255, 51));
				else if (szOldLevel == _T("3"))
					m_wndList.SetSubItemBkColor(nItem, 3, RGB(0, 255, 0));
			}
			szOldLevel = szLevel;
			szOldName = szNewName;
			szOldDescr = rs.GetValue(_T("descr"));
			szOldID = szNewID;	
		}
		//Thuoc A, Thuoc B
		if (!szResult.IsEmpty())
			szResult += _T(",");
		rs.GetValue(_T("str"), tmpStr2);
		if (tmpStr2.Find('|') != -1)
			tmpStr.Format(_T("(%s)"), tmpStr2);
		else
			tmpStr = tmpStr2;
		szResult.AppendFormat(_T("Thu\x1ED1\x63 %s"), tmpStr);
		rs.MoveNext();
		
	}
	if (!szResult.IsEmpty())
	{
		tmpStr = szResult;
		if (szOldLevel == _T("1"))
			tmpStr2 = _T("Nghi\xEAm tr\x1ECDng");
		else if (szOldLevel == _T("2"))
			tmpStr2 = _T("Trung \x62\xECnh");
		else if (szOldLevel == _T("3"))
			tmpStr2 = _T("Nh\x1EB9");
		szResult.Format(_T("%s t\x1B0\x1A1ng t\xE1\x63 \x1EDF m\x1EE9\x63 \x111\x1ED9 %s"), tmpStr, tmpStr2);
		tmpStr.Format(_T("%d"), nIdx++);
		nItem = m_wndList.AddItems(szOldID,
			tmpStr, 
			szResult, 
			szOldName,
			szOldDescr, NULL);
		szResult.Empty();
		if (szOldLevel == _T("1"))
			m_wndList.SetSubItemBkColor(nItem, 3, RGB(255, 0, 0));
		else if (szOldLevel == _T("2"))
			m_wndList.SetSubItemBkColor(nItem, 3, RGB(255, 255, 51));
		else if (szOldLevel == _T("3"))
			m_wndList.SetSubItemBkColor(nItem, 3, RGB(0, 255, 0));
	}
	m_wndList.EndLoad(); 
	return nCount;
}
int CInteractionResultDialog::OnAddInteractionResultDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CInteractionResultDialog::OnEditInteractionResultDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CInteractionResultDialog::OnDeleteInteractionResultDialog(){
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
 		OnCancelInteractionResultDialog();
 	}
	return 0;
}
int CInteractionResultDialog::OnSaveInteractionResultDialog(){
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
 		//OnInteractionResultDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CInteractionResultDialog::OnCancelInteractionResultDialog(){
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
int CInteractionResultDialog::OnInteractionResultDialogListLoadData(){
	return 0;
}
