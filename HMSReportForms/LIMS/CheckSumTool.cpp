#include "stdafx.h"
#include "CheckSumTool.h"
#include "HMSMainFrame.h"
#include "LIMSCheckSumButtonView.h"
#include "CheckSumTool.h"
#include "ReportDocument.h"


static void _OnCheckSumSelectFnc(CWnd *pWnd){
	CCheckSumTool *pVw = (CCheckSumTool *)pWnd;
	pVw->OnCheckSumSelect();
} 
/*static void _OnAsciiChangeFnc(CWnd *pWnd){
	((CCheckSumTool *)pWnd)->OnAsciiChange();
} */
/*static void _OnAsciiSetfocusFnc(CWnd *pWnd){
	((CCheckSumTool *)pWnd)->OnAsciiSetfocus();} */ 
/*static void _OnAsciiKillfocusFnc(CWnd *pWnd){
	((CCheckSumTool *)pWnd)->OnAsciiKillfocus();
} */
static int _OnAsciiCheckValueFnc(CWnd *pWnd){
	return ((CCheckSumTool *)pWnd)->OnAsciiCheckValue();
} 
/*static void _OnCheckSumValueChangeFnc(CWnd *pWnd){
	((CCheckSumTool *)pWnd)->OnCheckSumValueChange();
} */
/*static void _OnCheckSumValueSetfocusFnc(CWnd *pWnd){
	((CCheckSumTool *)pWnd)->OnCheckSumValueSetfocus();} */ 
/*static void _OnCheckSumValueKillfocusFnc(CWnd *pWnd){
	((CCheckSumTool *)pWnd)->OnCheckSumValueKillfocus();
} */
static int _OnCheckSumValueCheckValueFnc(CWnd *pWnd){
	return ((CCheckSumTool *)pWnd)->OnCheckSumValueCheckValue();
} 
static int _OnAddCheckSumToolFnc(CWnd *pWnd){
	 return ((CCheckSumTool*)pWnd)->OnAddCheckSumTool();
} 
static int _OnEditCheckSumToolFnc(CWnd *pWnd){
	 return ((CCheckSumTool*)pWnd)->OnEditCheckSumTool();
} 
static int _OnDeleteCheckSumToolFnc(CWnd *pWnd){
	 return ((CCheckSumTool*)pWnd)->OnDeleteCheckSumTool();
} 
static int _OnSaveCheckSumToolFnc(CWnd *pWnd){
	 return ((CCheckSumTool*)pWnd)->OnSaveCheckSumTool();
} 
static int _OnCancelCheckSumToolFnc(CWnd *pWnd){
	 return ((CCheckSumTool*)pWnd)->OnCancelCheckSumTool();
} 
CCheckSumTool::CCheckSumTool(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CCheckSumTool::~CCheckSumTool()
{
}
void CCheckSumTool::OnCreateComponents()
{
	m_wndCheckSumCondition.Create(this, _T("CheckSum Condition"), 7, 4, 736, 129);
	m_wndCheckSum.Create(this, _T("&CheckSum"), 636, 135, 736, 160);
	m_wndAsciiLabel.Create(this, _T("Ascii Label"), 12, 28, 139, 73);
	m_wndAscii.Create(this,144, 28, 732, 73); 
	m_wndHexaValueCSLabel.Create(this, _T("HexaValueCS Label"), 12, 80, 139, 125);
	m_wndCheckSumValue.Create(this,144, 80, 732, 125); 

}
void CCheckSumTool::OnInitializeComponents()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	EnableControls(TRUE);
	//m_wndAscii.SetLimitText(35);
	m_wndAscii.SetCheckValue(true);
	//m_wndCheckSumValue.SetLimitText(35);
	m_wndCheckSumValue.SetCheckValue(true);

}
void CCheckSumTool::OnSetWindowEvents()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndCheckSum.SetEvent(WE_CLICK, _OnCheckSumSelectFnc);
	//m_wndAscii.SetEvent(WE_CHANGE, _OnAsciiChangeFnc);
	//m_wndAscii.SetEvent(WE_SETFOCUS, _OnAsciiSetfocusFnc);
	//m_wndAscii.SetEvent(WE_KILLFOCUS, _OnAsciiKillfocusFnc);
	m_wndAscii.SetEvent(WE_CHECKVALUE, _OnAsciiCheckValueFnc);
	//m_wndCheckSumValue.SetEvent(WE_CHANGE, _OnCheckSumValueChangeFnc);
	//m_wndCheckSumValue.SetEvent(WE_SETFOCUS, _OnCheckSumValueSetfocusFnc);
	//m_wndCheckSumValue.SetEvent(WE_KILLFOCUS, _OnCheckSumValueKillfocusFnc);
	m_wndCheckSumValue.SetEvent(WE_CHECKVALUE, _OnCheckSumValueCheckValueFnc);
	SetMode(VM_NONE);

}
void CCheckSumTool::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndAscii.GetDlgCtrlID(), m_szAscii);
	DDX_Text(pDX, m_wndCheckSumValue.GetDlgCtrlID(), m_szCheckSumValue);

}
void CCheckSumTool::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Ascii")] =  m_szAscii;
	m_jData[_T("CheckSumValue")] =  m_szCheckSumValue;
	}
	else
	{
			
	m_jData[_T("Ascii")].GetValue(m_szAscii);
	m_jData[_T("CheckSumValue")].GetValue(m_szCheckSumValue);
	}

}
void CCheckSumTool::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CCheckSumTool::GetScreenToData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
}
void CCheckSumTool::SetDefaultValues(){

	m_szAscii.Empty();
	m_szCheckSumValue.Empty();

}
int CCheckSumTool::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode)
		{
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 3, 4, -1); 
 			//SetDefaultValues(); 
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 1,2,3, -1); 
 			break; 
 		case VM_VIEW: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 1,2,3, -1); 
 			break; 
 		case VM_NONE: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 6, -1); 
 			SetDefaultValues(); 
 			break; 
 		};
 		UpdateData(FALSE);
 		return nOldMode;
}
void CCheckSumTool::OnCheckSumSelect()
{
	UpdateData(TRUE);
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_szCheckSumValue = GetASTMCheckSumValue(m_szAscii);
	UpdateData(FALSE);
} 

CString CCheckSumTool::GetASTMCheckSumValue(CString m_szAscii)
{
    CString checksum = _T("00");

    int byteVal = 0;
    int sumOfChars = 0;
    bool complete = false;
    
    //take each byte in the string and add the values
    for (int idx = 0; idx < m_szAscii.GetLength(); idx++)
    {
        byteVal = (int)(m_szAscii[idx]);
        
        switch (byteVal)
        {
            case 0x02:
                sumOfChars = 0;
                break;
            case 0x03:
            case 0x23:
                sumOfChars += byteVal;
                complete = true;
                break;
            default:
                sumOfChars += byteVal;
                break;
        }

        if (complete)
            break;
    }

    if (sumOfChars > 0)
    {
        //hex value mod 256 is checksum, return as hex value in upper case
		checksum.Format(_T("%x"), sumOfChars % 100);
		checksum.MakeUpper();
    }
    
    //if checksum is only 1 char then prepend a 0
    return (CString)(checksum.GetLength() == 1 ? _T("0") + checksum : checksum);
	//_msg(_T("%s"),checksum);
}

/*void CCheckSumTool::OnAsciiChange(){
	
} */
/*void CCheckSumTool::OnAsciiSetfocus(){
	
} */
/*void CCheckSumTool::OnAsciiKillfocus(){
	
} */
int CCheckSumTool::OnAsciiCheckValue()
{
	return 0;
} 
/*void CCheckSumTool::OnCheckSumValueChange(){
	
} */
/*void CCheckSumTool::OnCheckSumValueSetfocus(){
	
} */
/*void CCheckSumTool::OnCheckSumValueKillfocus(){
	
} */
int CCheckSumTool::OnCheckSumValueCheckValue()
{
	return 0;
} 
int CCheckSumTool::OnAddCheckSumTool(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CCheckSumTool::OnEditCheckSumTool(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CCheckSumTool::OnDeleteCheckSumTool(){
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
 		OnCancelCheckSumTool();
 	}
	return 0;
}
int CCheckSumTool::OnSaveCheckSumTool(){
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
 		//OnCheckSumToolListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CCheckSumTool::OnCancelCheckSumTool(){
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
int CCheckSumTool::OnCheckSumToolListLoadData()
{
	return 0;
}

