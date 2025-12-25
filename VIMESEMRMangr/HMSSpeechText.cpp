#include "HMSSpeechText.h"
#include "MainFrm.h"
/*static void _OnNoteChangeFnc(CWnd *pWnd){
	((CHMSSpeechText *)pWnd)->OnNoteChange();
} */
/*static void _OnNoteSetfocusFnc(CWnd *pWnd){
	((CHMSSpeechText *)pWnd)->OnNoteSetfocus();} */ 
/*static void _OnNoteKillfocusFnc(CWnd *pWnd){
	((CHMSSpeechText *)pWnd)->OnNoteKillfocus();
} */
static int _OnNoteCheckValueFnc(CWnd *pWnd){
	return ((CHMSSpeechText *)pWnd)->OnNoteCheckValue();
} 
static void _OnSpeechRecognitionSelectFnc(CWnd *pWnd){
	CHMSSpeechText *pVw = (CHMSSpeechText *)pWnd;
	pVw->OnSpeechRecognitionSelect();
} 
static int _OnAddCHMSSpeechTextFnc(CWnd *pWnd){
	 return ((CHMSSpeechText*)pWnd)->OnAddCHMSSpeechText();
} 
static int _OnEditCHMSSpeechTextFnc(CWnd *pWnd){
	 return ((CHMSSpeechText*)pWnd)->OnEditCHMSSpeechText();
} 
static int _OnDeleteCHMSSpeechTextFnc(CWnd *pWnd){
	 return ((CHMSSpeechText*)pWnd)->OnDeleteCHMSSpeechText();
} 
static int _OnSaveCHMSSpeechTextFnc(CWnd *pWnd){
	 return ((CHMSSpeechText*)pWnd)->OnSaveCHMSSpeechText();
} 
static int _OnCancelCHMSSpeechTextFnc(CWnd *pWnd){
	 return ((CHMSSpeechText*)pWnd)->OnCancelCHMSSpeechText();
} 
CHMSSpeechText::CHMSSpeechText(){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CHMSSpeechText::~CHMSSpeechText(){
}
void CHMSSpeechText::OnCreateComponents(){
	m_wndNoteLabel.Create(this, _T("Note"), 9, 6, 244, 31);
	m_wndNote.Create(this,10, 34, 996, 390, TRUE, FALSE, TRUE); 
	m_wndSpeechRecognition.Create(this, _T("Speech"), 403, 403, 540, 428);

}
void CHMSSpeechText::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndNote.SetMultiLine(TRUE);
	m_wndNote.SetLimitText(1024);
	m_wndNote.SetCheckValue(true);

}
void CHMSSpeechText::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndNote.SetEvent(WE_CHANGE, _OnNoteChangeFnc);
	//m_wndNote.SetEvent(WE_SETFOCUS, _OnNoteSetfocusFnc);
	//m_wndNote.SetEvent(WE_KILLFOCUS, _OnNoteKillfocusFnc);
	m_wndNote.SetEvent(WE_CHECKVALUE, _OnNoteCheckValueFnc);
	m_wndSpeechRecognition.SetEvent(WE_CLICK, _OnSpeechRecognitionSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddCHMSSpeechTextFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditCHMSSpeechTextFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteCHMSSpeechTextFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveCHMSSpeechTextFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelCHMSSpeechTextFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_EDIT);

}
void CHMSSpeechText::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndNote.GetDlgCtrlID(), m_szNote);

}
void CHMSSpeechText::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Note")] =  m_szNote;
	}
	else
	{
			
	m_jData[_T("Note")].GetValue(m_szNote);
	}

}
void CHMSSpeechText::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSSpeechText::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSSpeechText::SetDefaultValues(){

	m_szNote.Empty();

}
int CHMSSpeechText::SetMode(int nMode){
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
 			EnableButtons(TRUE, 0, 4, -1);
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
/*void CHMSSpeechText::OnNoteChange(){
	
} */
/*void CHMSSpeechText::OnNoteSetfocus(){
	
} */
/*void CHMSSpeechText::OnNoteKillfocus(){
	
} */
int CHMSSpeechText::OnNoteCheckValue(){
	return 0;
} 

#include "stdafx.h"
//#include "sapi.h"
//#include <sphelper.h>
void CHMSSpeechText::OnSpeechRecognitionSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

    //ISpRecognizer* pRecognizer = NULL;
    //ISpRecoContext* pRecoContext = NULL;
    //ISpRecoGrammar* pGrammar = NULL;
    //HRESULT hr = S_OK;

    //hr = ::CoInitialize(NULL);
    //if (SUCCEEDED(hr))
    //{
    //    hr = CoCreateInstance(CLSID_SpInprocRecognizer, NULL, CLSCTX_INPROC_SERVER, IID_ISpRecognizer, (void**)&pRecognizer);
    //}

    //if (SUCCEEDED(hr))
    //{
    //    hr = pRecognizer->CreateRecoContext(&pRecoContext);
    //}

    //if (SUCCEEDED(hr))
    //{
    //    hr = pRecoContext->CreateGrammar(1, &pGrammar);
    //}

    //if (SUCCEEDED(hr))
    //{
    //    hr = pGrammar->LoadCmdFromFile(L"YourGrammarFile.xml", SPLO_STATIC);
    //}

    //if (SUCCEEDED(hr))
    //{
    //    hr = pGrammar->SetRuleIdState(0, SPRS_ACTIVE);
    //}

    //if (SUCCEEDED(hr))
    //{
    //    hr = pRecoContext->SetInterest(SPFEI(SPEI_RECOGNITION), SPFEI(SPEI_RECOGNITION));
    //}

    //if (SUCCEEDED(hr))
    //{
    //    CSpEvent event;
    //    hr = event.SetGUID(SPEI_RECOGNITION);

    //    if (SUCCEEDED(hr))
    //    {
    //        while (true)
    //        {
    //            hr = event.GetFrom(pRecoContext);
    //            if (hr == S_OK)
    //            {
    //                CComPtr<ISpRecoResult> pResult;
    //                hr = event.RecoResult(&pResult);
    //                if (SUCCEEDED(hr))
    //                {
    //                    CComBSTR bstrText;
    //                    hr = pResult->GetText(SP_GETWHOLEPHRASE, SP_GETWHOLEPHRASE, TRUE, &bstrText, NULL);
    //                    if (SUCCEEDED(hr))
    //                    {
    //                        CString strText(bstrText);
    //                        // Do something with the recognized text here
    //                    }
    //                }
    //            }
    //        }
    //    }
    //}

    //if (pGrammar)
    //{
    //    pGrammar->Release();
    //    pGrammar = NULL;
    //}

    //if (pRecoContext)
    //{
    //    pRecoContext->Release();
    //    pRecoContext = NULL;
    //}

    //if (pRecognizer)
    //{
    //    pRecognizer->Release();
    //    pRecognizer = NULL;
    //}
} 
int CHMSSpeechText::OnAddCHMSSpeechText(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSSpeechText::OnEditCHMSSpeechText(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSSpeechText::OnDeleteCHMSSpeechText(){
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
 		OnCancelCHMSSpeechText();
 	}
	return 0;
}
int CHMSSpeechText::OnSaveCHMSSpeechText(){
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
 		//OnCHMSSpeechTextListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSSpeechText::OnCancelCHMSSpeechText(){
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
int CHMSSpeechText::OnCHMSSpeechTextListLoadData(){
	return 0;
}
