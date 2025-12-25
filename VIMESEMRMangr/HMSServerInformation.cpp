#include "HMSServerInformation.h"
#include "HMSMainFrame.h"
static long _OnTreatListLoadDataFnc(CWnd *pWnd){
	return ((CHMSServerInformation*)pWnd)->OnTreatListLoadData();
} 
static void _OnTreatListDblClickFnc(CWnd *pWnd){
	((CHMSServerInformation*)pWnd)->OnTreatListDblClick();
} 
static void _OnTreatListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSServerInformation*)pWnd)->OnTreatListSelectChange(nOldItem, nNewItem);
} 
static int _OnTreatListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSServerInformation*)pWnd)->OnTreatListDeleteItem();
} 
static int _OnAddHMSServerInformationFnc(CWnd *pWnd){
	 return ((CHMSServerInformation*)pWnd)->OnAddHMSServerInformation();
} 
static int _OnEditHMSServerInformationFnc(CWnd *pWnd){
	 return ((CHMSServerInformation*)pWnd)->OnEditHMSServerInformation();
} 
static int _OnDeleteHMSServerInformationFnc(CWnd *pWnd){
	 return ((CHMSServerInformation*)pWnd)->OnDeleteHMSServerInformation();
} 
static int _OnSaveHMSServerInformationFnc(CWnd *pWnd){
	 return ((CHMSServerInformation*)pWnd)->OnSaveHMSServerInformation();
} 
static int _OnCancelHMSServerInformationFnc(CWnd *pWnd){
	 return ((CHMSServerInformation*)pWnd)->OnCancelHMSServerInformation();
} 
CHMSServerInformation::CHMSServerInformation(){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CHMSServerInformation::~CHMSServerInformation(){
}
void CHMSServerInformation::OnCreateComponents(){
	m_wndPatientInfo.Create(WS_CHILD|WS_VISIBLE|WS_BORDER, CRect( 5, 5, 799, 480), this, 0);	
	CString szFile;
	szFile.Format(_T("./Reports/HMS/EMR_THONGTINMAYCHU.HTML"));
	m_wndPatientInfo.Load(szFile);

}
void CHMSServerInformation::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

	m_wndTreatList.InsertColumn(0, _T("Ngày vào"), CFMT_DATETIME, 150);
	m_wndTreatList.InsertColumn(1, _T("Hình thức vào"), CFMT_TEXT, 150);
	m_wndTreatList.InsertColumn(2, _T("Khoa"), CFMT_TEXT, 200);
	m_wndTreatList.InsertColumn(3, _T("Phòng"), CFMT_TEXT, 200);
	m_wndTreatList.InsertColumn(4, _T("Ngày ra"), CFMT_DATETIME, 150);
	m_wndTreatList.InsertColumn(5, _T("Xử trí"), CFMT_TEXT, 150);
	m_wndTreatList.InsertColumn(6, _T("Đích"), CFMT_TEXT, 150);
}
void CHMSServerInformation::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndTreatList.SetEvent(WE_SELCHANGE, _OnTreatListSelectChangeFnc);
	m_wndTreatList.SetEvent(WE_LOADDATA, _OnTreatListLoadDataFnc);
	m_wndTreatList.SetEvent(WE_DBLCLICK, _OnTreatListDblClickFnc);
	m_wndTreatList.AddEvent(1, _T("Delete"), _OnTreatListDeleteItemFnc, 0, VK_DELETE, 0);
	/*AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSServerInformationFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSServerInformationFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSServerInformationFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSServerInformationFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSServerInformationFnc, 0, 'T', VK_CONTROL);*/
	SetMode(VM_NONE);
	GetDataToScreen();

}
void CHMSServerInformation::OnDoDataExchange(CDataExchange* pDX){

}
void CHMSServerInformation::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	}
	else
	{
			
	}

}
#include "StringToken.h"
void CHMSServerInformation::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL,tmpStr;
	JSONVALUE js, j, j1;

	CString szFile;
	szFile.Format(_T("./Reports/HMS/EMR_THONGTINMAYCHU.HTML"));
	m_wndPatientInfo.Load(szFile);

	// Load thong tin phuc hoi chuc nang vao		
	szSQL.Format(_T(" SELECT *") \
	_T(" FROM sys_systeminformation"));

	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		std::string strHtml;
		utf8::ostream os;

		dom::element el = m_wndPatientInfo.Find(L"content");

		os << L"<tr height=\"25px\">";
		os << L"<td width=\"20\%\" align=\"center\" ><b>" << L"Tên thiết bị" << L"</b></td>";
		os << L"<td width=\"80\%\" align=\"center\" ><b>" << L"Chi tiết thiết bị" << L"</b></td>";		
		os << L"</tr>";

		while(!rs.IsEOF()){
			CString szName, szDescription, szData;		
			
			rs.GetValue(_T("ss_name"), szName);
			rs.GetValue(_T("ss_desc"), szData);

			szData.Replace(_T("["), _T(""));
			szData.Replace(_T("]"), _T(""));
			szData.Replace(_T("{"), _T(""));
			szData.Replace(_T("}"), _T(""));
			szData.Replace(_T("\""), _T(""));
			CStringToken tk(szData, _T(","));
			
			for (int i =0; i < tk.GetSize(); i++)
			{
				tk.GetAt(i,  tmpStr);
				_tprintf(_T("\r\n%d:%s\r\n"),i, tmpStr);

				szDescription.AppendFormat(_T("%s<br>"), tmpStr);
			}

			os << L"<tr>";
			os << L"<tr height=\"25px\">";
			os << L"<td width=\"20\%\" align=\"left\" style=\"font-size:56px; color:#800000\" #3>" << szName << L"</td>";
			os << L"<td width=\"80\%\" align=\"left\" style=\"font-size:40px; color:#00A2E8\" #3>" << szDescription << L"</td>";
			os << L"</tr>";

			rs.MoveNext();
		}


		el.set_html(os.data(), os.length());
		el.update();
		m_wndPatientInfo.RedrawWindow();
	}
	m_wndPatientInfo.UpdateData(true);

}
void CHMSServerInformation::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CHMSServerInformation::SetDefaultValues(){


}
int CHMSServerInformation::SetMode(int nMode){
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
void CHMSServerInformation::OnTreatListDblClick(){
	
} 
void CHMSServerInformation::OnTreatListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CHMSServerInformation::OnTreatListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSServerInformation::OnTreatListLoadData(){

	return 0;
}
int CHMSServerInformation::OnAddHMSServerInformation(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSServerInformation::OnEditHMSServerInformation(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSServerInformation::OnDeleteHMSServerInformation(){
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
 		OnCancelHMSServerInformation();
 	}
	return 0;
}
int CHMSServerInformation::OnSaveHMSServerInformation(){
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
 		//OnHMSServerInformationListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSServerInformation::OnCancelHMSServerInformation(){
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
int CHMSServerInformation::OnHMSServerInformationListLoadData(){
	return 0;
}
void CHMSServerInformation::RefeshData(long nDocno)
{
	m_nDocumentNo= nDocno;
	GetDataToScreen();
}