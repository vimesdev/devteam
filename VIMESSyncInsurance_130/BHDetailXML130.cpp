#include "BHDetailXML130.h"
#include "HMSMainFrame.h"

static long _OnListFeeLoadDataFnc(CWnd * pWnd) {
	return ((CBHDetailXML130 * ) pWnd) -> OnListFeeLoadData();
} 
static void _OnListFeeDblClickFnc(CWnd * pWnd) {
	((CBHDetailXML130 * ) pWnd) -> OnListFeeDblClick();
} 
static void _OnListFeeSelectChangeFnc(CWnd * pWnd, int nOldItem, int nNewItem) {
	((CBHDetailXML130 * ) pWnd) -> OnListFeeSelectChange(nOldItem, nNewItem);
} 
static int _OnListFeeDeleteItemFnc(CWnd * pWnd) {
	return ((CBHDetailXML130 * ) pWnd) -> OnListFeeDeleteItem();
} 
static void _OnLoadSelectFnc(CWnd * pWnd) {
	CBHDetailXML130 * pVw = (CBHDetailXML130 * ) pWnd;
	pVw -> OnLoadSelect();
} 
static void _OnCheckSelectFnc(CWnd * pWnd) {
	CBHDetailXML130 * pVw = (CBHDetailXML130 * ) pWnd;
	pVw -> OnCheckSelect();
} 
static int _OnAddBHDetailXML130Fnc(CWnd * pWnd) {
	return ((CBHDetailXML130 * ) pWnd) -> OnAddBHDetailXML130();
} 
static int _OnEditBHDetailXML130Fnc(CWnd * pWnd) {
	return ((CBHDetailXML130 * ) pWnd) -> OnEditBHDetailXML130();
} 
static int _OnDeleteBHDetailXML130Fnc(CWnd * pWnd) {
	return ((CBHDetailXML130 * ) pWnd) -> OnDeleteBHDetailXML130();
} 
static int _OnSaveBHDetailXML130Fnc(CWnd * pWnd) {
	return ((CBHDetailXML130 * ) pWnd) -> OnSaveBHDetailXML130();
} 
static int _OnCancelBHDetailXML130Fnc(CWnd * pWnd) {
	return ((CBHDetailXML130 * ) pWnd) -> OnCancelBHDetailXML130();
} 
static long _OnTreeViewLoadDataFnc(CWnd * pWnd) {
	return ((CBHDetailXML130 * ) pWnd) -> OnTreeViewLoadData();
} 
static void _OnTreeViewDblClickFnc(CWnd * pWnd) {
	((CBHDetailXML130 * ) pWnd) -> OnTreeViewDblClick();
} 
static void _OnTreeViewSelectChangeFnc(CWnd * pWnd, int nOldItem, int nNewItem) {
	((CBHDetailXML130 * ) pWnd) -> OnTreeViewSelectChange(nOldItem, nNewItem);
} 
static int _OnTreeViewDeleteItemFnc(CWnd * pWnd) {
	return ((CBHDetailXML130 * ) pWnd) -> OnTreeViewDeleteItem();
} 
static void _OnGroupTreeSelChangeFnc(CWnd * pWnd, HTREEITEM oldhItem, HTREEITEM newhItem) {
	((CBHDetailXML130 * ) pWnd -> GetParent()) -> OnGroupTreeSelChange(oldhItem, newhItem);
} 

static void _OnColSelendokFnc(CWnd * pWnd) {
	return ((CBHDetailXML130 * ) pWnd) ->OnColSelenok();
}

static long _OnColLoadDataFnc(CWnd * pWnd) {
	return ((CBHDetailXML130 * ) pWnd) ->OnColLoadData();
}
CBHDetailXML130::CBHDetailXML130(CWnd * pParent):
CGuiDialog(pParent) {

	m_nDlgWidth = 1010;
	m_nDlgHeight = 760;
	SetDefaultValues();
}
CBHDetailXML130::~CBHDetailXML130() {}
void CBHDetailXML130::OnCreateComponents() {
	m_wndListFee.Create(this, 235, 5, 1015, 550);
	m_wndTreeView.Create(WS_VISIBLE | WS_TABSTOP | WS_CHILD | WS_BORDER | TVS_HASBUTTONS | TVS_LINESATROOT | TVS_HASLINES | TVS_DISABLEDRAGDROP | TVS_TRACKSELECT | TVS_SHOWSELALWAYS | TVS_SINGLEEXPAND,
		CRect(5, 5, 230, 520), this, 0x1221);
	m_wndColLabel.Create(this, _T("Column"), 5, 525, 80, 550);
	m_wndCol.Create(this, 85, 525, 230, 550);
	m_wndLoad.Create(this, _T("Load"), 5, 555, 95, 580);
	m_wndCheck.Create(this, _T("Check"), 115, 555, 235, 580);

}
void CBHDetailXML130::OnInitializeComponents() {
	CHMSMainFrame * pMF = (CHMSMainFrame * ) AfxGetMainWnd();
	m_wndCol.InsertColumn(0, _T(""), CFMT_NUMBER, 50);
	m_wndCol.InsertColumn(1, _T("Name"), CFMT_TEXT, 140);

}
void CBHDetailXML130::OnSetWindowEvents() {
	CHMSMainFrame * pMF = (CHMSMainFrame * ) AfxGetMainWnd();
	m_wndListFee.SetEvent(WE_SELCHANGE, _OnListFeeSelectChangeFnc);
	m_wndListFee.SetEvent(WE_LOADDATA, _OnListFeeLoadDataFnc);
	m_wndListFee.SetEvent(WE_DBLCLICK, _OnListFeeDblClickFnc);
	m_wndListFee.AddEvent(1, _T("Delete"), _OnListFeeDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndLoad.SetEvent(WE_CLICK, _OnLoadSelectFnc);
	m_wndCheck.SetEvent(WE_CLICK, _OnCheckSelectFnc);
	m_wndTreeView.SetSelChangeCallback(_OnGroupTreeSelChangeFnc);
	m_wndCol.SetEvent(WE_SELENDOK, _OnColSelendokFnc);
	m_wndCol.SetEvent(WE_LOADDATA, _OnColLoadDataFnc);
	EnableControls();
	OnTreeViewLoadData();

}
void CBHDetailXML130::OnDoDataExchange(CDataExchange * pDX) {

}
void CBHDetailXML130::UpdateJson(BOOL bSave) {
	if (bSave) {
			
	} else {
			
	}

}
void CBHDetailXML130::GetDataToScreen() {
	CHMSMainFrame * pMF = (CHMSMainFrame * ) AfxGetMainWnd();
	CRecord rs( & pMF -> m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CBHDetailXML130::GetScreenToData() {
	CHMSMainFrame * pMF = (CHMSMainFrame * ) AfxGetMainWnd();

}
void CBHDetailXML130::SetDefaultValues() {

}
int CBHDetailXML130::SetMode(int nMode) {
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
	CHMSMainFrame * pMF = (CHMSMainFrame * ) AfxGetMainWnd();
 		CString szSQL;
	CRecord rs( & pMF -> m_db);
	switch (nMode) {
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
void CBHDetailXML130::OnListFeeDblClick() {
	
} 
void CBHDetailXML130::OnListFeeSelectChange(int nOldItem, int nNewItem) {
	CHMSMainFrame * pMF = (CHMSMainFrame * ) AfxGetMainWnd();
	
} 
int CBHDetailXML130::OnListFeeDeleteItem() {
	CHMSMainFrame * pMF = (CHMSMainFrame * ) AfxGetMainWnd();
	 return 0;
} 
long CBHDetailXML130::OnListFeeLoadData() {

	CHMSMainFrame * pMF = (CHMSMainFrame * ) AfxGetMainWnd();
	CRecord rs( & pMF -> m_db);
	CString szSQL;
	m_wndListFee.DeleteAllColumns();
	_fmsg(_T("222 : %s"), m_szXMLTable);
	szSQL.Format(
		_T(" select * from %s   ") \
				_T("	where ma_lk='%s' ") \
		_T("	order by stt ")
		, m_szXMLTable, m_szXMLTable==_T("bh_xml_0")?m_szMaLK.Left(8):m_szMaLK);

	m_wndListFee.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	_fmsg(_T("111 : %s"), szSQL);
	int nType = 0, nItem = 0;
	CString szFieldName;
	
	if (!rs.IsEOF()) {
		for (int i = 0; i < rs.GetFieldCount(); i++) {
			szFieldName = rs.GetFieldName(i);
			nType = rs.GetFieldType(i);
			if (nType == 256)
				m_wndListFee.InsertColumn(i, szFieldName, FMT_TEXT, 100);
			else if (nType == 2048)
				m_wndListFee.InsertColumn(i, szFieldName, FMT_DATE, 100);
			else
				m_wndListFee.InsertColumn(i, szFieldName, FMT_NUMBER1, 100);
		}
		
	}
	while (!rs.IsEOF()) {
		nItem = m_wndListFee.AddItems(_T(""), NULL);

		for (int i = 0; i < rs.GetFieldCount(); i++)
			m_wndListFee.SetItemText(nItem, i, rs.GetValue(rs.GetFieldName(i)));
		
		rs.MoveNext();
	}
	m_wndListFee.EndLoad(); 
	return nCount;

}
void CBHDetailXML130::OnLoadSelect() {
	CHMSMainFrame * pMF = (CHMSMainFrame * ) AfxGetMainWnd();
	
} 
void CBHDetailXML130::OnCheckSelect() {
	CHMSMainFrame * pMF = (CHMSMainFrame * ) AfxGetMainWnd();
	
} 
int CBHDetailXML130::OnAddBHDetailXML130() {
	if (GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
	CHMSMainFrame * pMF = (CHMSMainFrame * ) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CBHDetailXML130::OnEditBHDetailXML130() {
	if (GetMode() != VM_VIEW)
 		return -1;
	CHMSMainFrame * pMF = (CHMSMainFrame * ) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CBHDetailXML130::OnDeleteBHDetailXML130() {
	if (GetMode() != VM_VIEW)
 		return -1;
	CHMSMainFrame * pMF = (CHMSMainFrame * ) AfxGetMainWnd();
 	CString szSQL;
	if (ShowMessage(1, MB_YESNO | MB_ICONQUESTION | MB_DEFBUTTON2) == IDNO)
 		return -1;
	szSQL.Format(_T("DELETE FROM  WHERE  AND"));
	int ret = pMF -> ExecSQL(szSQL);
	if (ret >= 0) {
 		SetMode(VM_NONE);
 		OnCancelBHDetailXML130();
 	}
	return 0;
}
int CBHDetailXML130::OnSaveBHDetailXML130() {
	if (GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
	if (!IsValidateData())
 		return -1;
	CHMSMainFrame * pMF = (CHMSMainFrame * ) AfxGetMainWnd();
 	CString szSQL;
	if (GetMode() == VM_ADD) {
 		//szSQL = m_tblTbl.GetInsertSQL();
	} else if (GetMode() == VM_EDIT) {
 		CString szWhere;
 		szWhere.Format(_T(" WHERE"));
 		//szSQL = m_tblTbl.GetUpdateSQL(_T("createdby,createddate"));
 		szSQL += szWhere;
 	}
 _fmsg(_T("%s"), szSQL);
	int ret = pMF -> ExecSQL(szSQL);
	if (ret > 0) {
 		//OnBHDetailXML130ListLoadData();
 		SetMode(VM_VIEW);
	} else {}
 	return ret;
 	return 0;
}
int CBHDetailXML130::OnCancelBHDetailXML130() {
	if (GetMode() == VM_EDIT) {
 		SetMode(VM_VIEW);
	} else {
 		SetMode(VM_NONE);
 	} 
	CHMSMainFrame * pMF = (CHMSMainFrame * ) AfxGetMainWnd();
 	return 0;
} 
int CBHDetailXML130::OnBHDetailXML130ListLoadData() {
	return 0;
}

void CBHDetailXML130::OnGroupTreeSelChange(HTREEITEM oldhItem, HTREEITEM newhItem) {
	if (!newhItem)
		return;
	CHMSMainFrame * pMF = (CHMSMainFrame * ) AfxGetMainWnd();
	CRecord rs( & pMF -> m_db);
	m_szXMLTable = m_wndTreeView.GetItemID(newhItem);

	if (!m_szXMLTable.IsEmpty()) {
		OnListFeeLoadData();
		OnColLoadData();
	}


}

void CBHDetailXML130::OnTreeViewDblClick() {
	
} 
void CBHDetailXML130::OnTreeViewSelectChange(int nOldItem, int nNewItem) {
	CHMSMainFrame * pMF = (CHMSMainFrame * ) AfxGetMainWnd();
	
} 
int CBHDetailXML130::OnTreeViewDeleteItem() {
	CHMSMainFrame * pMF = (CHMSMainFrame * ) AfxGetMainWnd();
	 return 0;
} 
long CBHDetailXML130::OnTreeViewLoadData() {
	CHMSMainFrame * pMF = (CHMSMainFrame * ) AfxGetMainWnd();
	CRecord rs( & pMF -> m_db);
	CRecord rsc( & pMF -> m_db);
	CString szSQL, szWhere, szStatus;
	
	int nCount = 0;
	szWhere.Empty();	
	UpdateData(true);	
	//pMF->m_nDocumentNo=21197968;

	CString szID, szOldID = _T("1"), szName, szTypeID, szNameOLD;
	HTREEITEM tvi[6], hRoot, hItem, oldhItem = NULL;
	int nMaxLevel;

	m_wndTreeView.DeleteAllItems();
	
	tvi[0] = TVI_ROOT;
	m_wndTreeView.SetItemHeight(22);
	int i = 0;

	CString tmpStr, szTemp, szItemID;
	int nScore;
	//bool bCheck = false;
			szSQL.Format(_T("select ss_code as id,ss_desc as name  from sys_sel where ss_id='hms_table_130xml' order by ss_index "));
			_fmsg(_T("%s"), szSQL);
			rsc.ExecSQL(szSQL);
			
			CString szDate;
	nCount = 0;
			hRoot = m_wndTreeView.InsertItem(_T("Danh sách XML"), TVI_ROOT);	
	while (!rsc.IsEOF()) {

		rsc.GetValue(_T("id"), szName);

		szNameOLD = szName;
				rsc.GetValue(_T("id"), szID);
				rsc.GetValue(_T("name"), tmpStr);
				szName = tmpStr;
				
				hItem = m_wndTreeView.InsertItem(szName, hRoot);
				m_wndTreeView.SetItemState(hItem, TVIS_STATEIMAGEMASK, 0);
				m_wndTreeView.SetItemID(hItem, szID);
				
				nCount++;
				
				rsc.MoveNext();
			}	

			
			m_wndTreeView.ExpandItem(TVI_ROOT, TVE_EXPAND);
			m_wndTreeView.SetLineColor(RGB(255, 0, 0));
	//m_wndGroupTree.ExpandItem(TVI_ROOT, TVE_EXPAND);
	
	return nCount;
}

long CBHDetailXML130::OnColLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	int nCount = 0, nIdx = 1;
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndCol.DeleteAllItems();
	szSQL.Format(_T("select * from %s where 0=1"), m_szXMLTable);
	nCount = rs.ExecSQL(szSQL);
	if (nCount >= 0)
	{
		for (int i = 0; i < rs.GetFieldCount(); i++)
		{
			m_wndCol.AddItems(
				int2str(nIdx++),
				rs.GetFieldName(i),
				NULL);
		}
		
	}
	return nCount;
}

void CBHDetailXML130::OnColSelenok()
{
	long nWidth = 0;
	int nColId = str2int(m_wndCol.GetCurrent(0));
	for (int i = 0; i < nColId - 1; i++)
	{
		nWidth += m_wndListFee.GetColumnWidth(i);
	}
	OnListFeeLoadData();
	//m_wndListFee.Scroll(CSize(nWidth, 0));
}