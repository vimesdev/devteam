#include "SysSetUpSignatureDlg.h"
#include "MainFrm.h"
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CSysSetUpSignatureDlg*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CSysSetUpSignatureDlg*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CSysSetUpSignatureDlg*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CSysSetUpSignatureDlg*)pWnd)->OnListDeleteItem();
} 
/*static void _OnSearchChangeFnc(CWnd *pWnd){
	((CSysSetUpSignatureDlg *)pWnd)->OnSearchChange();
} */
/*static void _OnSearchSetfocusFnc(CWnd *pWnd){
	((CSysSetUpSignatureDlg *)pWnd)->OnSearchSetfocus();} */ 
/*static void _OnSearchKillfocusFnc(CWnd *pWnd){
	((CSysSetUpSignatureDlg *)pWnd)->OnSearchKillfocus();
} */
static int _OnSearchCheckValueFnc(CWnd *pWnd){
	return ((CSysSetUpSignatureDlg *)pWnd)->OnSearchCheckValue();
} 
static void _OnTypeSelectSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CSysSetUpSignatureDlg* )pWnd)->OnTypeSelectSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTypeSelectSelendokFnc(CWnd *pWnd){
	((CSysSetUpSignatureDlg *)pWnd)->OnTypeSelectSelendok();
}
/*static void _OnTypeSelectSetfocusFnc(CWnd *pWnd){
	((CSysSetUpSignatureDlg *)pWnd)->OnTypeSelectKillfocus();
}*/
/*static void _OnTypeSelectKillfocusFnc(CWnd *pWnd){
	((CSysSetUpSignatureDlg *)pWnd)->OnTypeSelectKillfocus();
}*/
static long _OnTypeSelectLoadDataFnc(CWnd *pWnd){
	return ((CSysSetUpSignatureDlg *)pWnd)->OnTypeSelectLoadData();
}
/*static void _OnTypeSelectAddNewFnc(CWnd *pWnd){
	((CSysSetUpSignatureDlg *)pWnd)->OnTypeSelectAddNew();
}*/
/*static void _OnFileNameChangeFnc(CWnd *pWnd){
	((CSysSetUpSignatureDlg *)pWnd)->OnFileNameChange();
} */
/*static void _OnFileNameSetfocusFnc(CWnd *pWnd){
	((CSysSetUpSignatureDlg *)pWnd)->OnFileNameSetfocus();} */ 
/*static void _OnFileNameKillfocusFnc(CWnd *pWnd){
	((CSysSetUpSignatureDlg *)pWnd)->OnFileNameKillfocus();
} */
static int _OnFileNameCheckValueFnc(CWnd *pWnd){
	return ((CSysSetUpSignatureDlg *)pWnd)->OnFileNameCheckValue();
} 
/*static void _OnTitleChangeFnc(CWnd *pWnd){
	((CSysSetUpSignatureDlg *)pWnd)->OnTitleChange();
} */
/*static void _OnTitleSetfocusFnc(CWnd *pWnd){
	((CSysSetUpSignatureDlg *)pWnd)->OnTitleSetfocus();} */ 
/*static void _OnTitleKillfocusFnc(CWnd *pWnd){
	((CSysSetUpSignatureDlg *)pWnd)->OnTitleKillfocus();
} */
static int _OnTitleCheckValueFnc(CWnd *pWnd){
	return ((CSysSetUpSignatureDlg *)pWnd)->OnTitleCheckValue();
} 
static void _OnTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CSysSetUpSignatureDlg* )pWnd)->OnTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTypeSelendokFnc(CWnd *pWnd){
	((CSysSetUpSignatureDlg *)pWnd)->OnTypeSelendok();
}
/*static void _OnTypeSetfocusFnc(CWnd *pWnd){
	((CSysSetUpSignatureDlg *)pWnd)->OnTypeKillfocus();
}*/
/*static void _OnTypeKillfocusFnc(CWnd *pWnd){
	((CSysSetUpSignatureDlg *)pWnd)->OnTypeKillfocus();
}*/
static long _OnTypeLoadDataFnc(CWnd *pWnd){
	return ((CSysSetUpSignatureDlg *)pWnd)->OnTypeLoadData();
}
/*static void _OnTypeAddNewFnc(CWnd *pWnd){
	((CSysSetUpSignatureDlg *)pWnd)->OnTypeAddNew();
}*/
/*static void _OnFormsChangeFnc(CWnd *pWnd){
	((CSysSetUpSignatureDlg *)pWnd)->OnFormsChange();
} */
/*static void _OnFormsSetfocusFnc(CWnd *pWnd){
	((CSysSetUpSignatureDlg *)pWnd)->OnFormsSetfocus();} */ 
/*static void _OnFormsKillfocusFnc(CWnd *pWnd){
	((CSysSetUpSignatureDlg *)pWnd)->OnFormsKillfocus();
} */
static int _OnFormsCheckValueFnc(CWnd *pWnd){
	return ((CSysSetUpSignatureDlg *)pWnd)->OnFormsCheckValue();
} 
/*static void _OnDocumentChangeFnc(CWnd *pWnd){
	((CSysSetUpSignatureDlg *)pWnd)->OnDocumentChange();
} */
/*static void _OnDocumentSetfocusFnc(CWnd *pWnd){
	((CSysSetUpSignatureDlg *)pWnd)->OnDocumentSetfocus();} */ 
/*static void _OnDocumentKillfocusFnc(CWnd *pWnd){
	((CSysSetUpSignatureDlg *)pWnd)->OnDocumentKillfocus();
} */
static int _OnDocumentCheckValueFnc(CWnd *pWnd){
	return ((CSysSetUpSignatureDlg *)pWnd)->OnDocumentCheckValue();
} 
/*static void _OnOrderChangeFnc(CWnd *pWnd){
	((CSysSetUpSignatureDlg *)pWnd)->OnOrderChange();
} */
/*static void _OnOrderSetfocusFnc(CWnd *pWnd){
	((CSysSetUpSignatureDlg *)pWnd)->OnOrderSetfocus();} */ 
/*static void _OnOrderKillfocusFnc(CWnd *pWnd){
	((CSysSetUpSignatureDlg *)pWnd)->OnOrderKillfocus();
} */
static int _OnOrderCheckValueFnc(CWnd *pWnd){
	return ((CSysSetUpSignatureDlg *)pWnd)->OnOrderCheckValue();
} 
/*static void _OnReferenceChangeFnc(CWnd *pWnd){
	((CSysSetUpSignatureDlg *)pWnd)->OnReferenceChange();
} */
/*static void _OnReferenceSetfocusFnc(CWnd *pWnd){
	((CSysSetUpSignatureDlg *)pWnd)->OnReferenceSetfocus();} */ 
/*static void _OnReferenceKillfocusFnc(CWnd *pWnd){
	((CSysSetUpSignatureDlg *)pWnd)->OnReferenceKillfocus();
} */
static int _OnReferenceCheckValueFnc(CWnd *pWnd){
	return ((CSysSetUpSignatureDlg *)pWnd)->OnReferenceCheckValue();
} 
static void _OnIsEMRSelectFnc(CWnd *pWnd){
	 ((CSysSetUpSignatureDlg*)pWnd)->OnIsEMRSelect();
}
static void _OnIsSignatureSelectFnc(CWnd *pWnd){
	 ((CSysSetUpSignatureDlg*)pWnd)->OnIsSignatureSelect();
}
static void _OnAddSelectFnc(CWnd *pWnd){
	CSysSetUpSignatureDlg *pVw = (CSysSetUpSignatureDlg *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CSysSetUpSignatureDlg *pVw = (CSysSetUpSignatureDlg *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CSysSetUpSignatureDlg *pVw = (CSysSetUpSignatureDlg *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CSysSetUpSignatureDlg *pVw = (CSysSetUpSignatureDlg *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CSysSetUpSignatureDlg *pVw = (CSysSetUpSignatureDlg *)pWnd;
	pVw->OnCancelSelect();
}
static void _OnAutoAddSelectFnc(CWnd *pWnd){
	CSysSetUpSignatureDlg *pVw = (CSysSetUpSignatureDlg *)pWnd;
	pVw->OnAutoAddSelect();
} 
static int _OnAddSysSetUpSignatureDlgFnc(CWnd *pWnd){
	 return ((CSysSetUpSignatureDlg*)pWnd)->OnAddSysSetUpSignatureDlg();
} 
static int _OnEditSysSetUpSignatureDlgFnc(CWnd *pWnd){
	 return ((CSysSetUpSignatureDlg*)pWnd)->OnEditSysSetUpSignatureDlg();
} 
static int _OnDeleteSysSetUpSignatureDlgFnc(CWnd *pWnd){
	 return ((CSysSetUpSignatureDlg*)pWnd)->OnDeleteSysSetUpSignatureDlg();
} 
static int _OnSaveSysSetUpSignatureDlgFnc(CWnd *pWnd){
	 return ((CSysSetUpSignatureDlg*)pWnd)->OnSaveSysSetUpSignatureDlg();
} 
static int _OnCancelSysSetUpSignatureDlgFnc(CWnd *pWnd){
	 return ((CSysSetUpSignatureDlg*)pWnd)->OnCancelSysSetUpSignatureDlg();
} 

static int _OnListSetIndexFnc(CWnd *pWnd){
	 return ((CSysSetUpSignatureDlg*)pWnd)->OnListSetIndex();
} 

CSysSetUpSignatureDlg::CSysSetUpSignatureDlg(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 915;
	m_nDlgHeight = 620;
	SetDefaultValues();
}
CSysSetUpSignatureDlg::~CSysSetUpSignatureDlg(){
}
void CSysSetUpSignatureDlg::OnCreateComponents(){
	m_wndList.Create(this,5, 65, 905, 460); 
	m_wndSearchLabel.Create(this, _T("Search"), 5, 5, 130, 30);
	m_wndSearch.Create(this,135, 5, 808, 30); 
	m_wndTypeSelectLabel.Create(this, _T("Type"), 5, 35, 130, 60);
	m_wndTypeSelect.Create(this,135, 35, 335, 60); 
	m_wndFileNameLabel.Create(this, _T("File Name"), 5, 465, 130, 490);
	m_wndFileName.Create(this,135, 465, 390, 490); 
	m_wndTitleLabel.Create(this, _T("Title"), 395, 465, 520, 490);
	m_wndTitle.Create(this,525, 465, 780, 490); 
	m_wndType.Create(this,135, 495, 390, 520); 
	m_wndFormsLabel.Create(this, _T("Forms"), 395, 495, 520, 520);
	m_wndForms.Create(this,525, 495, 780, 520); 
	m_wndDocumentLabel.Create(this, _T("Document#"), 5, 525, 130, 550);
	m_wndDocument.Create(this,135, 525, 390, 550); 
	m_wndOrderLabel.Create(this, _T("Order#"), 395, 525, 520, 550);
	m_wndOrder.Create(this,525, 525, 780, 550); 
	m_wndReferenceLabel.Create(this, _T("Reference#"), 5, 555, 130, 580);
	m_wndReference.Create(this,135, 555, 390, 580); 
	m_wndIsEMR.Create(this, _T("Is EMR"), 395, 555, 520, 580);
	m_wndIsSignature.Create(this, _T("IsSignature"), 525, 555, 622, 580);

	m_wndIsTransfer.Create(this, _T("Trình ký"), 630, 555, 750, 580);
	m_wndIsGenDocx.Create(this, _T("Gen Docx"), 755, 555, 835, 580);

	m_wndAdd.Create(this, _T("&Add"), 475, 585, 555, 610);
	m_wndEdit.Create(this, _T("&Edit"), 560, 585, 640, 610);
	m_wndDelete.Create(this, _T("&Delete"), 645, 585, 725, 610);
	m_wndSave.Create(this, _T("&Save"), 730, 585, 810, 610);
	m_wndCancel.Create(this, _T("&Cancel"), 815, 585, 895, 610);
	m_wndTypeLabel.Create(this, _T("Type"), 5, 495, 130, 520);
	
	m_wndAutoAdd.Create(this, _T("Auto Add"), 5, 585, 150, 610);
	

}
void CSysSetUpSignatureDlg::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndSearch.SetLimitText(35);
	//m_wndSearch.SetCheckValue(true);
	//m_wndTypeSelect.SetCheckValue(true);
	//m_wndTypeSelect.LimitText(35);
	m_wndFileName.SetLimitText(35);
	m_wndFileName.SetCheckValue(true);
	m_wndTitle.SetLimitText(35);
	m_wndTitle.SetCheckValue(true);
	m_wndType.SetCheckValue(true);
	m_wndType.LimitText(35);
	m_wndForms.SetLimitText(35);
	m_wndForms.SetCheckValue(true);
	m_wndDocument.SetLimitText(60);
	//m_wndDocument.SetCheckValue(true);
	m_wndOrder.SetLimitText(60);
	//m_wndOrder.SetCheckValue(true);
	//m_wndReference.SetLimitText(35);
	//m_wndReference.SetCheckValue(true);


	m_wndList.InsertColumn(0, _T("ID"), CFMT_TEXT, 0);
	m_wndList.InsertColumn(1, _T("Form_ID"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(2, _T("Form Name"), CFMT_TEXT, 200);
	m_wndList.InsertColumn(3, _T("Code"), CFMT_TEXT, 200);
	m_wndList.InsertColumn(4, _T("Description"), CFMT_TEXT, 200);
	m_wndList.InsertColumn(5, _T("Template_no"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(6, _T("file_type"), CFMT_TEXT, 50);

	m_wndList.SetAllowDrag(true);


	m_wndTypeSelect.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndTypeSelect.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndType.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndType.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_hms_signature_formTbl.SetTableName(_T("hms_signature_form"));

	m_hms_signature_formTbl.AddField(_T("p_userid"), dfText, 250); 
	m_hms_signature_formTbl.AddField(_T("p_code"), dfText, 250); 
	m_hms_signature_formTbl.AddField(_T("p_name"), dfText, 250);  
	m_hms_signature_formTbl.AddField(_T("p_desc"),dfText, 250); 
	m_hms_signature_formTbl.AddField(_T("p_template"), dfText, 250); 
	m_hms_signature_formTbl.AddField(_T("p_docno"), dfText, 250); 
	m_hms_signature_formTbl.AddField(_T("p_orderid"), dfText, 250); 
	m_hms_signature_formTbl.AddField(_T("p_reference"),dfText, 250); 
	m_hms_signature_formTbl.AddField(_T("p_type"), dfText, 250); 
	m_hms_signature_formTbl.AddField(_T("p_category"), dfText, 250); 
	m_hms_signature_formTbl.AddField(_T("p_filetype"), dfText, 250); 
	m_hms_signature_formTbl.AddField(_T("p_istransfer"), dfText, 1);
	m_hms_signature_formTbl.AddField(_T("p_isgendocx"), dfText, 1);
	m_hms_signature_formTbl.AddField(_T("p_isemr"), dfText, 1);
	m_hms_signature_formTbl.AddField(_T("p_issignature"), dfText, 1); 
	


}
void CSysSetUpSignatureDlg::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	//m_wndSearch.SetEvent(WE_CHANGE, _OnSearchChangeFnc);
	//m_wndSearch.SetEvent(WE_SETFOCUS, _OnSearchSetfocusFnc);
	//m_wndSearch.SetEvent(WE_KILLFOCUS, _OnSearchKillfocusFnc);
	m_wndSearch.SetEvent(WE_CHECKVALUE, _OnSearchCheckValueFnc);
	m_wndTypeSelect.SetEvent(WE_SELENDOK, _OnTypeSelectSelendokFnc);
	//m_wndTypeSelect.SetEvent(WE_SETFOCUS, _OnTypeSelectSetfocusFnc);
	//m_wndTypeSelect.SetEvent(WE_KILLFOCUS, _OnTypeSelectKillfocusFnc);
	m_wndTypeSelect.SetEvent(WE_SELCHANGE, _OnTypeSelectSelectChangeFnc);
	m_wndTypeSelect.SetEvent(WE_LOADDATA, _OnTypeSelectLoadDataFnc);
	//m_wndTypeSelect.SetEvent(WE_ADDNEW, _OnTypeSelectAddNewFnc);
	//m_wndFileName.SetEvent(WE_CHANGE, _OnFileNameChangeFnc);
	//m_wndFileName.SetEvent(WE_SETFOCUS, _OnFileNameSetfocusFnc);
	//m_wndFileName.SetEvent(WE_KILLFOCUS, _OnFileNameKillfocusFnc);
	m_wndFileName.SetEvent(WE_CHECKVALUE, _OnFileNameCheckValueFnc);
	//m_wndTitle.SetEvent(WE_CHANGE, _OnTitleChangeFnc);
	//m_wndTitle.SetEvent(WE_SETFOCUS, _OnTitleSetfocusFnc);
	//m_wndTitle.SetEvent(WE_KILLFOCUS, _OnTitleKillfocusFnc);
	m_wndTitle.SetEvent(WE_CHECKVALUE, _OnTitleCheckValueFnc);
	m_wndType.SetEvent(WE_SELENDOK, _OnTypeSelendokFnc);
	//m_wndType.SetEvent(WE_SETFOCUS, _OnTypeSetfocusFnc);
	//m_wndType.SetEvent(WE_KILLFOCUS, _OnTypeKillfocusFnc);
	m_wndType.SetEvent(WE_SELCHANGE, _OnTypeSelectChangeFnc);
	m_wndType.SetEvent(WE_LOADDATA, _OnTypeLoadDataFnc);
	//m_wndType.SetEvent(WE_ADDNEW, _OnTypeAddNewFnc);
	//m_wndForms.SetEvent(WE_CHANGE, _OnFormsChangeFnc);
	//m_wndForms.SetEvent(WE_SETFOCUS, _OnFormsSetfocusFnc);
	//m_wndForms.SetEvent(WE_KILLFOCUS, _OnFormsKillfocusFnc);
	m_wndForms.SetEvent(WE_CHECKVALUE, _OnFormsCheckValueFnc);
	//m_wndDocument.SetEvent(WE_CHANGE, _OnDocumentChangeFnc);
	//m_wndDocument.SetEvent(WE_SETFOCUS, _OnDocumentSetfocusFnc);
	//m_wndDocument.SetEvent(WE_KILLFOCUS, _OnDocumentKillfocusFnc);
	m_wndDocument.SetEvent(WE_CHECKVALUE, _OnDocumentCheckValueFnc);
	//m_wndOrder.SetEvent(WE_CHANGE, _OnOrderChangeFnc);
	//m_wndOrder.SetEvent(WE_SETFOCUS, _OnOrderSetfocusFnc);
	//m_wndOrder.SetEvent(WE_KILLFOCUS, _OnOrderKillfocusFnc);
	m_wndOrder.SetEvent(WE_CHECKVALUE, _OnOrderCheckValueFnc);
	//m_wndReference.SetEvent(WE_CHANGE, _OnReferenceChangeFnc);
	//m_wndReference.SetEvent(WE_SETFOCUS, _OnReferenceSetfocusFnc);
	//m_wndReference.SetEvent(WE_KILLFOCUS, _OnReferenceKillfocusFnc);
	m_wndReference.SetEvent(WE_CHECKVALUE, _OnReferenceCheckValueFnc);
	m_wndIsEMR.SetEvent(WE_CLICK, _OnIsEMRSelectFnc);
	m_wndIsSignature.SetEvent(WE_CLICK, _OnIsSignatureSelectFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);

	m_wndAutoAdd.SetEvent(WE_CLICK, _OnAutoAddSelectFnc);

	m_wndList.AddEvent(0, _T("-"));
	m_wndList.AddEvent(2, _T("Sắp sếp thứ tự"), _OnListSetIndexFnc);

	
	SetMode(VM_VIEW);
	OnListLoadData();

}
void CSysSetUpSignatureDlg::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndSearch.GetDlgCtrlID(), m_szSearch);
	DDX_TextEx(pDX, m_wndTypeSelect.GetDlgCtrlID(), m_szTypeSelectKey);
	DDX_Text(pDX, m_wndFileName.GetDlgCtrlID(), m_szFileName);
	DDX_Text(pDX, m_wndTitle.GetDlgCtrlID(), m_szTitle);
	DDX_TextEx(pDX, m_wndType.GetDlgCtrlID(), m_szTypeKey);
	DDX_Text(pDX, m_wndForms.GetDlgCtrlID(), m_szForms);
	DDX_Text(pDX, m_wndDocument.GetDlgCtrlID(), m_szDocument);
	DDX_Text(pDX, m_wndOrder.GetDlgCtrlID(), m_szOrder);
	DDX_Text(pDX, m_wndReference.GetDlgCtrlID(), m_szReference);
	DDX_Check(pDX, m_wndIsEMR.GetDlgCtrlID(), m_bIsEMR);
	DDX_Check(pDX, m_wndIsSignature.GetDlgCtrlID(), m_bIsSignature);
	DDX_Check(pDX, m_wndIsTransfer.GetDlgCtrlID(), m_bIsTransfer);
	DDX_Check(pDX, m_wndIsGenDocx.GetDlgCtrlID(), m_bIsGendocx);

}
void CSysSetUpSignatureDlg::UpdateJson(BOOL bSave){
	if(bSave)
	{		
	m_jData[_T("Search")] =  m_szSearch;
	m_jData[_T("TypeSelect")] =  m_szTypeSelectKey;
	m_jData[_T("FileName")] =  m_szFileName;
	m_jData[_T("Title")] =  m_szTitle;
	m_jData[_T("Type")] =  m_szTypeKey;
	m_jData[_T("Forms")] =  m_szForms;
	m_jData[_T("Document")] =  m_szDocument;
	m_jData[_T("Order")] =  m_szOrder;
	m_jData[_T("Reference")] =  m_szReference;
	m_jData[_T("IsEMR")] =  m_bIsEMR;
	m_jData[_T("IsSignature")] =  m_bIsSignature;
	}
	else
	{
			
	m_jData[_T("Search")].GetValue(m_szSearch);
	m_jData[_T("TypeSelect")].GetValue(m_szTypeSelectKey);
	m_jData[_T("FileName")].GetValue(m_szFileName);
	m_jData[_T("Title")].GetValue(m_szTitle);
	m_jData[_T("Type")].GetValue(m_szTypeKey);
	m_jData[_T("Forms")].GetValue(m_szForms);
	m_jData[_T("Document")].GetValue(m_szDocument);
	m_jData[_T("Order")].GetValue(m_szOrder);
	m_jData[_T("Reference")].GetValue(m_szReference);
	m_jData[_T("IsEMR")].GetValue(m_bIsEMR);
	m_jData[_T("IsSignature")].GetValue(m_bIsSignature);
	}

}
void CSysSetUpSignatureDlg::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL,tmpStr;
	
	szSQL.Format(_T("select code,description,type_id,template_no, docno, orderid,file_type,istransfer,isgendocx,reference, ") \
				_T(" hms_signature_form_id from hms_signature_form  where code='%s' "), m_szFileName);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("code"), m_szFileName);
		rs.GetValue(_T("description"), m_szTitle);
		rs.GetValue(_T("type_id"), m_szTypeKey);
		rs.GetValue(_T("template_no"), m_szForms);
		rs.GetValue(_T("docno"), m_szDocument);
		rs.GetValue(_T("orderid"), m_szOrder);
		rs.GetValue(_T("reference"), m_szReference);
		rs.GetValue(_T("istransfer"), tmpStr);
		if(tmpStr== _T("Y"))
			m_bIsTransfer= true;
		else
			m_bIsTransfer= false;

		rs.GetValue(_T("isgendocx"), tmpStr);
		if(tmpStr== _T("Y"))
			m_bIsGendocx= true;
		else
			m_bIsGendocx= false;


		rs.GetValue(_T("isemr"), tmpStr);
		if(tmpStr== _T("Y"))
			m_bIsEMR= true;
		else
			m_bIsEMR= false;



		rs.GetValue(_T("issignature"), tmpStr);
		if(tmpStr== _T("Y"))
			m_bIsSignature= true;
		else
			m_bIsSignature= false;
		
		SetMode(VM_VIEW);
	}


}
void CSysSetUpSignatureDlg::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_hms_signature_formTbl.SetValue(_T("p_userid"), pMF->GetCurrentUser()); 
	m_hms_signature_formTbl.SetValue(_T("p_code"),m_szFileName); 
	m_hms_signature_formTbl.SetValue(_T("p_name"), m_szFileName);  
	m_hms_signature_formTbl.SetValue(_T("p_desc"),m_szTitle); 
	m_hms_signature_formTbl.SetValue(_T("p_template"), m_szForms); 
	m_hms_signature_formTbl.SetValue(_T("p_docno"), m_szDocument); 
	m_hms_signature_formTbl.SetValue(_T("p_orderid"), m_szOrder); 
	m_hms_signature_formTbl.SetValue(_T("p_reference"),m_szReference); 
	m_hms_signature_formTbl.SetValue(_T("p_type"), m_szTypeKey); 
	m_hms_signature_formTbl.SetValue(_T("p_category"), _T("")); 
	if(GetMode()== VM_ADD)
		m_hms_signature_formTbl.SetValue(_T("p_filetype"), _T("HTML") ); 
	else
		m_hms_signature_formTbl.SetValue(_T("p_filetype"), _T("RPT") );
	CString tmpStr;
	if(m_bIsTransfer)
		tmpStr = _T("Y");
	else
		tmpStr = _T("N");

	m_hms_signature_formTbl.SetValue(_T("p_istransfer"), tmpStr); 

	if(m_bIsGendocx)
		tmpStr = _T("Y");
	else
		tmpStr = _T("N");

	m_hms_signature_formTbl.SetValue(_T("p_isgendocx"), tmpStr); 

	if(m_bIsEMR)
		tmpStr = _T("Y");
	else
		tmpStr = _T("N");

	m_hms_signature_formTbl.SetValue(_T("p_isemr"), tmpStr); 



	if(m_bIsSignature)
		tmpStr = _T("Y");
	else
		tmpStr = _T("N");

	m_hms_signature_formTbl.SetValue(_T("p_issignature"), tmpStr); 

	

}
void CSysSetUpSignatureDlg::SetDefaultValues(){

	m_szSearch.Empty();
	m_szTypeSelectKey.Empty();
	m_szFileName.Empty();
	m_szTitle.Empty();
	m_szTypeKey.Empty();
	m_szForms.Empty();
	m_szDocument.Empty();
	m_szOrder.Empty();
	m_szReference.Empty();
	m_bIsEMR=FALSE;
	m_bIsSignature=FALSE;
	m_bIsGendocx= FALSE;

}
int CSysSetUpSignatureDlg::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE,3, 4, -1);
 			SetDefaultValues();
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 3, 4, -1);
			m_wndFileName.EnableWindow(false);
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
		
		m_wndSearch.EnableWindow(true);
		m_wndTypeSelect.EnableWindow(true);

 		UpdateData(FALSE);
 		return nOldMode;
}
void CSysSetUpSignatureDlg::OnListDblClick(){
	
} 
void CSysSetUpSignatureDlg::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_szFileName= m_wndList.GetItemText(nNewItem, 1);
	GetDataToScreen();
	
} 
int CSysSetUpSignatureDlg::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CSysSetUpSignatureDlg::OnListLoadData(){

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL,szWhere;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	if(!m_szSearch.IsEmpty())
		szWhere.Format(_T(" AND ( lower(code) like lower('%s%s%s') or lower(description) like lower('%s%s%s') ) "), _T("%"), m_szSearch, _T("%"), _T("%"), m_szSearch, _T("%"));
	if(!m_szTypeSelectKey.IsEmpty())
		szWhere.AppendFormat(_T(" and type_id ='%s' "), m_szTypeSelectKey);
	szSQL.Format(_T("select code,description,type_id,template_no, docno, orderid,file_type, ") \
				_T(" hms_signature_form_id from hms_signature_form where 1=1 %s order by type_id,sort_index, code "),szWhere); 
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("hms_signature_form_id")), 
			rs.GetValue(_T("code")), 
			rs.GetValue(_T("description")), 
			rs.GetValue(_T("code")), 
			rs.GetValue(_T("description")), 
			rs.GetValue(_T("template_no")), 
			rs.GetValue(_T("file_type")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;

}
/*void CSysSetUpSignatureDlg::OnSearchChange(){
	
} */
/*void CSysSetUpSignatureDlg::OnSearchSetfocus(){
	
} */
/*void CSysSetUpSignatureDlg::OnSearchKillfocus(){
	
} */
int CSysSetUpSignatureDlg::OnSearchCheckValue(){
	OnListLoadData();
	return 0;
} 
void CSysSetUpSignatureDlg::OnTypeSelectSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CSysSetUpSignatureDlg::OnTypeSelectSelendok(){
	 
}
/*void CSysSetUpSignatureDlg::OnTypeSelectSetfocus(){
	
}*/
/*void CSysSetUpSignatureDlg::OnTypeSelectKillfocus(){
	
}*/
long CSysSetUpSignatureDlg::OnTypeSelectLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	return pMF->LoadSelectionList(&m_wndTypeSelect,_T("HMS_SIGNATURE_TYPE"),m_szTypeSelectKey );
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndTypeSelect.IsSearchKey() && !m_szTypeSelectKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szTypeSelectKey
};
	m_wndTypeSelect.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndTypeSelect.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CSysSetUpSignatureDlg::OnTypeSelectAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CSysSetUpSignatureDlg::OnFileNameChange(){
	
} */
/*void CSysSetUpSignatureDlg::OnFileNameSetfocus(){
	
} */
/*void CSysSetUpSignatureDlg::OnFileNameKillfocus(){
	
} */
int CSysSetUpSignatureDlg::OnFileNameCheckValue(){
	return 0;
} 
/*void CSysSetUpSignatureDlg::OnTitleChange(){
	
} */
/*void CSysSetUpSignatureDlg::OnTitleSetfocus(){
	
} */
/*void CSysSetUpSignatureDlg::OnTitleKillfocus(){
	
} */
int CSysSetUpSignatureDlg::OnTitleCheckValue(){
	return 0;
} 
void CSysSetUpSignatureDlg::OnTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CSysSetUpSignatureDlg::OnTypeSelendok(){
	 
}
/*void CSysSetUpSignatureDlg::OnTypeSetfocus(){
	
}*/
/*void CSysSetUpSignatureDlg::OnTypeKillfocus(){
	
}*/
long CSysSetUpSignatureDlg::OnTypeLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return pMF->LoadSelectionList(&m_wndType,_T("HMS_SIGNATURE_TYPE"),m_szTypeKey );
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndType.IsSearchKey() && !m_szTypeKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szTypeKey
};
	m_wndType.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndType.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CSysSetUpSignatureDlg::OnTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CSysSetUpSignatureDlg::OnFormsChange(){
	
} */
/*void CSysSetUpSignatureDlg::OnFormsSetfocus(){
	
} */
/*void CSysSetUpSignatureDlg::OnFormsKillfocus(){
	
} */
int CSysSetUpSignatureDlg::OnFormsCheckValue(){
	return 0;
} 
/*void CSysSetUpSignatureDlg::OnDocumentChange(){
	
} */
/*void CSysSetUpSignatureDlg::OnDocumentSetfocus(){
	
} */
/*void CSysSetUpSignatureDlg::OnDocumentKillfocus(){
	
} */
int CSysSetUpSignatureDlg::OnDocumentCheckValue(){
	return 0;
} 
/*void CSysSetUpSignatureDlg::OnOrderChange(){
	
} */
/*void CSysSetUpSignatureDlg::OnOrderSetfocus(){
	
} */
/*void CSysSetUpSignatureDlg::OnOrderKillfocus(){
	
} */
int CSysSetUpSignatureDlg::OnOrderCheckValue(){
	return 0;
} 
/*void CSysSetUpSignatureDlg::OnReferenceChange(){
	
} */
/*void CSysSetUpSignatureDlg::OnReferenceSetfocus(){
	
} */
/*void CSysSetUpSignatureDlg::OnReferenceKillfocus(){
	
} */
int CSysSetUpSignatureDlg::OnReferenceCheckValue(){
	return 0;
} 
	void CSysSetUpSignatureDlg::OnIsEMRSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CSysSetUpSignatureDlg::OnIsSignatureSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void CSysSetUpSignatureDlg::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	SetMode(VM_ADD);
} 
void CSysSetUpSignatureDlg::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	SetMode(VM_EDIT);
	
} 
void CSysSetUpSignatureDlg::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnDeleteSysSetUpSignatureDlg();
	
} 
void CSysSetUpSignatureDlg::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveSysSetUpSignatureDlg();
	
} 
void CSysSetUpSignatureDlg::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	SetMode(VM_NONE);
	
} 
void CSysSetUpSignatureDlg::OnAutoAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	// menu auto add cai gi nao

	CGuiMenu menu(this);
	CRect rect;
	int nPos;	
	menu.CreatePopupMenu();
	menu.AppendMenu(MF_BYPOSITION, 1, _T("Tự động add các mẫu biểu bệnh án"));
	menu.AppendMenu(MF_SEPARATOR, 0, _T("-"));
	menu.AppendMenu(MF_BYPOSITION, 2, _T("Tự động add các mẫu biểu chuyên môn HTML"));
	
	m_wndAutoAdd.GetWindowRect(&rect);
	nPos = menu.TrackPopupMenu(TPM_NONOTIFY|TPM_RETURNCMD|TPM_RIGHTALIGN|TPM_TOPALIGN, rect.right, rect.top, this);

	switch(nPos){
	case 1:
		OnAutoAddMAUBA();
		break;
	case 2:
		OnAutoAddMauHTMLCHUYENMON();
		break;
	};
	
}
void CSysSetUpSignatureDlg::OnAutoAddMAUBA()
{	
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL;
	CRecord rs(&pMF->m_db);
	szSQL.Format(_T("select hasl_name, hasl_htmlform from hms_admission_setup_line"));
	rs.ExecSQL(szSQL);
	CString szFileName,szForms,szTitle;
	while(!rs.IsEOF())
	{
		rs.GetValue(_T("hasl_htmlform"),szForms);
		szFileName.Format(_T("%s.HTML"),szForms);
		rs.GetValue(_T("hasl_name"),szTitle);
		
		
		
		m_hms_signature_formTbl.SetValue(_T("p_userid"), pMF->GetCurrentUser()); 
		m_hms_signature_formTbl.SetValue(_T("p_code"),szFileName); 
		m_hms_signature_formTbl.SetValue(_T("p_name"), szFileName);  
		m_hms_signature_formTbl.SetValue(_T("p_desc"),szTitle); 
		m_hms_signature_formTbl.SetValue(_T("p_template"), szForms); 
		m_hms_signature_formTbl.SetValue(_T("p_docno"), _T("ma_yte")); 
		m_hms_signature_formTbl.SetValue(_T("p_orderid"), _T("")); 
		m_hms_signature_formTbl.SetValue(_T("p_reference"),_T("")); 
		m_hms_signature_formTbl.SetValue(_T("p_type"), _T("01")); 
		m_hms_signature_formTbl.SetValue(_T("p_category"), _T("")); 
		m_hms_signature_formTbl.SetValue(_T("p_filetype"), _T("HTML") ); 

		m_hms_signature_formTbl.SetValue(_T("p_istransfer"), _T("N")); 

		szSQL.Format(_T("hms_signature_form_create(%s) "), m_hms_signature_formTbl.FormatSQL());
 		int ret = str2int(pMF->ExecDML(szSQL));

		rs.MoveNext();
	}

}
void CSysSetUpSignatureDlg::OnAutoAddMauHTMLCHUYENMON()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL;
	CRecord rs(&pMF->m_db);
	szSQL.Format(_T("select ss_code, ss_desc from sys_sel where  ss_id in ('SURGERY_SHEETS','TREATMENT_SHEETS','EXAM_SHEETS')"));
	rs.ExecSQL(szSQL);
	CString szFileName,szForms,szTitle;
	while(!rs.IsEOF())
	{
		rs.GetValue(_T("ss_code"),szForms);
		szFileName.Format(_T("%s.HTML"),szForms);
		rs.GetValue(_T("ss_desc"),szTitle);
		
		
		
		m_hms_signature_formTbl.SetValue(_T("p_userid"), pMF->GetCurrentUser()); 
		m_hms_signature_formTbl.SetValue(_T("p_code"),szFileName); 
		m_hms_signature_formTbl.SetValue(_T("p_name"), szFileName);  
		m_hms_signature_formTbl.SetValue(_T("p_desc"),szTitle); 
		m_hms_signature_formTbl.SetValue(_T("p_template"), szForms); 
		m_hms_signature_formTbl.SetValue(_T("p_docno"), _T("DOC_NO")); 
		m_hms_signature_formTbl.SetValue(_T("p_orderid"), _T("")); 
		m_hms_signature_formTbl.SetValue(_T("p_reference"),_T("")); 
		m_hms_signature_formTbl.SetValue(_T("p_type"), _T("06")); 
		m_hms_signature_formTbl.SetValue(_T("p_category"), _T("")); 
		m_hms_signature_formTbl.SetValue(_T("p_filetype"), _T("HTML") ); 

		m_hms_signature_formTbl.SetValue(_T("p_istransfer"), _T("N")); 

		szSQL.Format(_T("hms_signature_form_create(%s) "), m_hms_signature_formTbl.FormatSQL());
 		int ret = str2int(pMF->ExecDML(szSQL));

		rs.MoveNext();
	}
}
int CSysSetUpSignatureDlg::OnAddSysSetUpSignatureDlg(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CSysSetUpSignatureDlg::OnEditSysSetUpSignatureDlg(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CSysSetUpSignatureDlg::OnDeleteSysSetUpSignatureDlg(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;

	// kiem tra neu da tung ky roi thi ko cho xoa nua
	szSQL.Format(_T("select count(*) as qty from hms_signature  where status='S' and form_id ='%s'  "), m_szForms);
	CRecord rs(&pMF->m_db);
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() >0) 
	{
		ShowMessageBox(_T("Form đã có văn bản ký không thể xóa "));
		return -1;
	}
 	szSQL.Format(_T("DELETE FROM hms_signature_form WHERE code='%s' ") ,m_szFileName);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
 		SetMode(VM_NONE);
		OnListLoadData();
 		OnCancelSysSetUpSignatureDlg();
 	}
	return 0;
}
int CSysSetUpSignatureDlg::OnSaveSysSetUpSignatureDlg(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
 		szSQL.Format(_T("hms_signature_form_create(%s) "), m_hms_signature_formTbl.FormatSQL());
 	}
 	else if(GetMode() == VM_EDIT){
		szSQL.Format(_T("hms_signature_form_create(%s) "), m_hms_signature_formTbl.FormatSQL());
 	}
 _msg(_T("%s"), szSQL);
 	int ret = str2int(pMF->ExecDML(szSQL));
 	if(ret > 0)
 	{
 		//OnSysSetUpSignatureDlgListLoadData();
		OnListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CSysSetUpSignatureDlg::OnCancelSysSetUpSignatureDlg(){
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
int CSysSetUpSignatureDlg::OnSysSetUpSignatureDlgListLoadData(){
	return 0;
}
int CSysSetUpSignatureDlg::OnListSetIndex()
{
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	UpdateData(true);
	if(m_szTypeKey.IsEmpty())
	{
		_msg(_T("Chỉ có thể sắp xếp với 1 nhóm "));
		return -1;
	}
	CString szSQL, szID;
	for (int i =0; i < m_wndList.GetItemCount(); i++){
		szID = m_wndList.GetItemText(i, 0);
		szSQL.Format(_T("UPDATE hms_signature_form SET sort_index=%d WHERE hms_signature_form_id='%s'  "), i+1, szID);
		pMF->ExecSQL(szSQL);
	}
	return 0;
}