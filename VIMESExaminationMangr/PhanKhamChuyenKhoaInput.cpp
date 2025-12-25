#include "PhanKhamChuyenKhoaInput.h"
//#include "stdafx.h"
#include "MainFrm.h"
#include "StringToken.h"
#include "ReportDocument.h"

 
static int _OnAddCPhanKhamChuyenKhoaInputFnc(CWnd *pWnd){
	 return ((CPhanKhamChuyenKhoaInput*)pWnd)->OnAddCPhanKhamChuyenKhoaInput();
} 
static int _OnEditCPhanKhamChuyenKhoaInputFnc(CWnd *pWnd){
	 return ((CPhanKhamChuyenKhoaInput*)pWnd)->OnEditCPhanKhamChuyenKhoaInput();
} 
static int _OnDeleteCPhanKhamChuyenKhoaInputFnc(CWnd *pWnd){
	 return ((CPhanKhamChuyenKhoaInput*)pWnd)->OnDeleteCPhanKhamChuyenKhoaInput();
} 
static int _OnSaveCPhanKhamChuyenKhoaInputFnc(CWnd *pWnd){
	 return ((CPhanKhamChuyenKhoaInput*)pWnd)->OnSaveCPhanKhamChuyenKhoaInput();
} 
static int _OnCancelCPhanKhamChuyenKhoaInputFnc(CWnd *pWnd){
	 return ((CPhanKhamChuyenKhoaInput*)pWnd)->OnCancelCPhanKhamChuyenKhoaInput();
} 
CPhanKhamChuyenKhoaInput::CPhanKhamChuyenKhoaInput(CString szForm, long nDocumentNo)
{
	m_nDlgWidth = 580;
	m_nDlgHeight = 800;
	m_pWndFocus = NULL;
	//SetDefaultValues();
	m_bCreated = false;
	m_bInited = false;
	m_szFormID = szForm;
	m_nDocumentNo = nDocumentNo;
}
CPhanKhamChuyenKhoaInput::~CPhanKhamChuyenKhoaInput(){
	
}

void CPhanKhamChuyenKhoaInput::OnCreateComponents()
{

	if(m_bCreated)
		return;
	m_bCreated = true;
	CString szSQL;
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	szSQL.Format(_T("SELECT * FROM hms_pacs_layout  WHERE hpl_id='%s' ORDER BY hpl_index"), m_szFormID);

	rs.ExecSQL(szSQL);
	CString tmpStr;
	int nType = -1;
	int nMaxWidth=0, nMaxHeight=0;
	m_pWndFocus = NULL;
	int x=0, y=0;
	while(!rs.IsEOF())
	{
		ControlProp cp;
		rs.GetValue(_T("hpl_type"), cp.nTypeCtrl);
		rs.GetValue(_T("hpl_xpos"), cp.nX);
		rs.GetValue(_T("hpl_ypos"), cp.nY);
		rs.GetValue(_T("hpl_width"), cp.nWidth);
		rs.GetValue(_T("hpl_height"), cp.nHeight);
		rs.GetValue(_T("hpl_caption"), cp.szCaption);
		rs.GetValue(_T("hpl_name"), cp.szName);
		rs.GetValue(_T("hpl_values"), cp.arrayString);
		rs.GetValue(_T("hpl_multiline"), cp.nMultiline);
		rs.GetValue(_T("hpl_defval"), cp.szDefValue);
		
		if(cp.nTypeCtrl == GUI_GROUPBOX)
		{
			CGuiGroupBox *pWnd = new CGuiGroupBox();
			pWnd->Create(this, cp.szCaption, cp.nX, cp.nY, cp.nX+cp.nWidth, cp.nY+cp.nHeight);
			cp.pWnd = pWnd;
		}
		if(cp.nTypeCtrl == GUI_LABEL)
		{
			CGuiLabel *pWnd = new CGuiLabel();
			pWnd->Create(this, cp.szCaption, cp.nX, cp.nY, cp.nX+cp.nWidth, cp.nY+cp.nHeight);
			//pWnd->ModifyStyle(SS_CENTERIMAGE|SS_LEFTNOWORDWRAP);
			cp.pWnd = pWnd;
		}
		if(cp.nTypeCtrl == GUI_CHECKBOX)
		{
			CGuiCheckBox *pWnd = new CGuiCheckBox();
			pWnd->Create(this, cp.szCaption, cp.nX, cp.nY, cp.nX+cp.nWidth, cp.nY+cp.nHeight);
			cp.pWnd = pWnd;
		}
		if(cp.nTypeCtrl == GUI_RADIOBUTTON)
		{
			CGuiRadioButton *pWnd = new CGuiRadioButton();
			pWnd->Create(this, cp.szCaption, cp.nX, cp.nY, cp.nX+cp.nWidth, cp.nY+cp.nHeight);
			cp.pWnd = pWnd;
		}
		if(cp.nTypeCtrl == GUI_TEXTCTRL)
		{
			CGuiTextCtrl *pWnd = new CGuiTextCtrl();
			pWnd->Create(this, cp.nX, cp.nY, cp.nX+cp.nWidth, cp.nY+cp.nHeight, TRUE, FALSE, cp.nMultiline==0?false:true);
			pWnd->SetWindowText(cp.szDefValue);
			pWnd->SetLimitText(2048);
			cp.pWnd = pWnd;
		}
		if(cp.nTypeCtrl == GUI_COMBOBOX)
		{
			CGuiComboBox *pWnd = new CGuiComboBox();
			pWnd->Create(this,  cp.nX, cp.nY, cp.nX+cp.nWidth, cp.nY+cp.nHeight);
			pWnd->Format(1, 0, 10);
			pWnd->InsertColumn(0, _T("Description"), CFMT_TEXT, cp.nWidth);
			CStringToken token(cp.arrayString, _T(","));
			for (int i =0; i < token.GetSize(); i++){
				token.GetAt(i, tmpStr);
				pWnd->AddItems(tmpStr, NULL);
			}

			pWnd->SetWindowText(cp.szDefValue);
			pWnd->SetCheckValue(true);
			cp.pWnd = pWnd;
		}
		nMaxHeight = max(nMaxHeight, cp.nY+cp.nHeight);
		aControls.Add(cp);
		if(m_pWndFocus== NULL)
		{
			m_pWndFocus = cp.pWnd;
		}
		rs.MoveNext();
	}
	m_nDlgHeight = nMaxHeight+10;
	
	SetScrollSizes(MM_TEXT, CSize(m_nDlgWidth, m_nDlgHeight));

}
void CPhanKhamChuyenKhoaInput::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	SetMode(VM_EDIT);
	GetDataToScreen();
}
void CPhanKhamChuyenKhoaInput::OnSetWindowEvents()
{
	if(m_bInited)
		return;
	m_bInited = true;
	
	GetDataToScreen();
	SetMode(GetMode());
}
void CPhanKhamChuyenKhoaInput::OnDoDataExchange(CDataExchange* pDX)
{
}
void CPhanKhamChuyenKhoaInput::GetDataToScreen(){

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szType, tmpStr, szData;
	int n = 0;

	CString szWhere;

	szSQL.Format(_T("SELECT hde_name, to_char(hde_value) as hde_value FROM hms_doc_emr WHERE hde_docno=%ld and hde_type='BENH_AN_CHUYEN_KHOA'  ORDER BY hde_refidx"), m_nDocumentNo, szWhere);
	rs.ExecSQL(szSQL);
	szData.Empty();
	while(!rs.IsEOF())
	{
		rs.GetValue(_T("hde_value"), tmpStr);
		szData.AppendFormat(_T("%s"), tmpStr);
		rs.MoveNext();
	}
	m_jData.Parse(szData);
	for (int j =0; j < aControls.GetCount(); j++)
	{
		ControlProp cp = aControls[j];
		aControls.SetAt(j, cp);
		m_jData[cp.szName].GetValue(cp.szValue);
		if(cp.nTypeCtrl == GUI_TEXTCTRL || cp.nTypeCtrl == GUI_COMBOBOX)
		{
			cp.pWnd->SetWindowText(cp.szValue);
		}
		if(cp.nTypeCtrl == GUI_CHECKBOX)
		{
			HWND hWndCtrl = cp.pWnd->GetSafeHwnd();
			int value = 0;
			if(cp.szValue == _T("Y"))
				value = 1;
			::SendMessage(hWndCtrl, BM_SETCHECK, (WPARAM)value, 0L);
		}
		if(cp.nTypeCtrl == GUI_RADIOBUTTON)
		{
			// walk all children in group
			int value = -1;
			int iButton = 0;
			HWND hWndCtrl = cp.pWnd->GetSafeHwnd();
			do
			{
				if (::SendMessage(hWndCtrl, WM_GETDLGCODE, 0, 0L) & DLGC_RADIOBUTTON)
				{
					// select button
					::SendMessage(hWndCtrl, BM_SETCHECK, (iButton == value), 0L);
					iButton++;
				}
				hWndCtrl = ::GetWindow(hWndCtrl, GW_HWNDNEXT);

			} while (hWndCtrl != NULL &&
				!(GetWindowLong(hWndCtrl, GWL_STYLE) & WS_GROUP));

		}
	}	

}
void CPhanKhamChuyenKhoaInput::GetScreenToData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	for (int i =0; i < aControls.GetCount(); i++)
	{
		ControlProp cp = aControls[i];
		cp.szValue.Empty();
		if(cp.nTypeCtrl == GUI_TEXTCTRL || cp.nTypeCtrl == GUI_COMBOBOX || cp.nTypeCtrl == GUI_NUMBERCTRL)
		{
			cp.pWnd->GetWindowText(cp.szValue);
			aControls.SetAt(i, cp);
		}
		if(cp.nTypeCtrl == GUI_CHECKBOX)
		{
			HWND hWndCtrl = cp.pWnd->GetSafeHwnd();
			int value = (int)::SendMessage(hWndCtrl, BM_GETCHECK, 0, 0L);
			cp.szValue = _T("N");
			if(value > 0)
				cp.szValue = _T("Y");
			aControls.SetAt(i, cp);
		}

		if(cp.nTypeCtrl == GUI_RADIOBUTTON)
		{
			// walk all children in group
			int iButton = 0;
			int value = -1;
			HWND hWndCtrl = cp.pWnd->GetSafeHwnd();
			do
			{
				if (::SendMessage(hWndCtrl, WM_GETDLGCODE, 0, 0L) & DLGC_RADIOBUTTON)
				{
					// control in group is a radio button
					if (::SendMessage(hWndCtrl, BM_GETCHECK, 0, 0L) != 0)
					{
						value = iButton;
					}
					iButton++;
				}
				hWndCtrl = ::GetWindow(hWndCtrl, GW_HWNDNEXT);

			} while (hWndCtrl != NULL &&
				!(GetWindowLong(hWndCtrl, GWL_STYLE) & WS_GROUP));

			cp.szValue.Format(_T("%d"), value);
			aControls.SetAt(i, cp);
		}

	}


	m_jData.Clear();
	for (int i =0; i < aControls.GetCount(); i++)
	{
		ControlProp cp = aControls[i];
		//if(!cp.szValue.IsEmpty())
		if(cp.nTypeCtrl == GUI_LABEL || cp.nTypeCtrl == GUI_GROUPBOX)
			continue;
	//	_tprintf(_T("\r\n%s"), cp.szName);
		{
			m_jData[cp.szName] =  cp.szValue;
		}
	}

}
void CPhanKhamChuyenKhoaInput::SetDefaultValues(){


}
int CPhanKhamChuyenKhoaInput::SetMode(int nMode)
{ 
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
 			EnableButtons(TRUE, 1, 2, -1); 
			if(m_pWndFocus)	m_pWndFocus->SetFocus();
 			break; 
 		case VM_VIEW: 
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 0, 3, -1); 
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


int CPhanKhamChuyenKhoaInput::OnAddCPhanKhamChuyenKhoaInput(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
} 
int CPhanKhamChuyenKhoaInput::OnEditCPhanKhamChuyenKhoaInput(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
	SetFocus();
 	SetMode(VM_EDIT);
	return 0;
 
} 
int CPhanKhamChuyenKhoaInput::OnDeleteCPhanKhamChuyenKhoaInput()
{
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
 		OnCancelCPhanKhamChuyenKhoaInput(); 
 	}
	return 0;
 } 
int CPhanKhamChuyenKhoaInput::OnSaveCPhanKhamChuyenKhoaInput()
{
	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
		return -1;
	if(!IsValidateData())
		return -1;
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
	CString szSQL;
	CString szData;
	int ret = 0;
	m_jData.ToString(szData);
	int n =0;
	CString tmpStr;
	tmpStr = szData;

	//szSQL.Format(_T("DELETE FROM hms_doc_emr WHERE hde_docno=%ld and hde_name='%s' and hde_type='BENH_AN_CHUYEN_KHOA'"), m_nDocumentNo, m_szFormID);
	//pMF->ExecSQL(szSQL);

	CStringArray strList;
	pMF->String2Array(szData, &strList, 2000);
	for (int i =0; i < strList.GetCount();i++)
	{
		tmpStr = strList[i];
		szSQL.Format(_T("HMS_DOC_EMR_EX_CREATE('BENH_AN_CHUYEN_KHOA', %ld, '%s', %d, %d, '%s', '%s', '%s') "),
			m_nDocumentNo, pMF->m_szDept, n++, 0, pMF->GetCurrentUser(), m_szFormID, tmpStr);
		ret = str2int(pMF->ExecDML(szSQL));
	}
	return 0;

}
int CPhanKhamChuyenKhoaInput::OnCancelCPhanKhamChuyenKhoaInput(){
	SetMode(VM_VIEW); 
 	return 0;
} 
int CPhanKhamChuyenKhoaInput::OnCPhanKhamChuyenKhoaInputListLoadData(){
	return 0;
}
BEGIN_MESSAGE_MAP(CPhanKhamChuyenKhoaInput, CGuiView)
	ON_WM_DESTROY()
	ON_WM_CREATE()
END_MESSAGE_MAP()

void CPhanKhamChuyenKhoaInput::OnDestroy()
{
	CGuiView::OnDestroy();
	aControls.RemoveAll();
//	delete this;
/*
	for (int i = aControls.GetCount()-1; i >=0 ; i--){
		ControlProp wndctrl = aControls[i];
		if(wndctrl.szName != _T("Save") && 
			wndctrl.szName != _T("Print") &&
			wndctrl.szName != _T("Cancel"))
		delete wndctrl.pWnd;
	}
*/
	

}

int CPhanKhamChuyenKhoaInput::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	
	if (CGuiView::OnCreate(lpCreateStruct) == -1)
		return -1;
	//ModifyStyle(0, WS_MINIMIZEBOX);
	return 0;
}


BOOL CPhanKhamChuyenKhoaInput::PreTranslateMessage(MSG* pMsg)
{
	if(pMsg->message == WM_KEYDOWN ){
		
	}

	return CGuiView::PreTranslateMessage(pMsg);
}
