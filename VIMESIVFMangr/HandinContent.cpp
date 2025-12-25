#include "HandinContent.h"
#include "HMSMainFrame.h"
/*static void _OnDocumentNoChangeFnc(CWnd *pWnd){
	((CHandinContent *)pWnd)->OnDocumentNoChange();
} */
/*static void _OnDocumentNoSetfocusFnc(CWnd *pWnd){
	((CHandinContent *)pWnd)->OnDocumentNoSetfocus();} */ 
/*static void _OnDocumentNoKillfocusFnc(CWnd *pWnd){
	((CHandinContent *)pWnd)->OnDocumentNoKillfocus();
} */
static int _OnDocumentNoCheckValueFnc(CWnd *pWnd){
	return ((CHandinContent *)pWnd)->OnDocumentNoCheckValue();
} 
/*static void _OnOutDateChangeFnc(CWnd *pWnd){
	((CHandinContent *)pWnd)->OnOutDateChange();
} */
/*static void _OnOutDateSetfocusFnc(CWnd *pWnd){
	((CHandinContent *)pWnd)->OnOutDateSetfocus();} */ 
/*static void _OnOutDateKillfocusFnc(CWnd *pWnd){
	((CHandinContent *)pWnd)->OnOutDateKillfocus();
} */
static int _OnOutDateCheckValueFnc(CWnd *pWnd){
	return ((CHandinContent *)pWnd)->OnOutDateCheckValue();
} 
static void _OnClinicalRecordSelectFnc(CWnd *pWnd){
	 ((CHandinContent*)pWnd)->OnClinicalRecordSelect();
}
static void _OnDischargeSheetSelectFnc(CWnd *pWnd){
	 ((CHandinContent*)pWnd)->OnDischargeSheetSelect();
}
static void _OnPaymentSheetSelectFnc(CWnd *pWnd){
	 ((CHandinContent*)pWnd)->OnPaymentSheetSelect();
}
static void _OnAddnewcardSelectFnc(CWnd *pWnd){
	 ((CHandinContent*)pWnd)->OnAddnewcardSelect();
}
static void _OnIDCardSelectFnc(CWnd *pWnd){
	 ((CHandinContent*)pWnd)->OnIDCardSelect();
}
static void _OnOthersSheetSelectFnc(CWnd *pWnd){
	 ((CHandinContent*)pWnd)->OnOthersSheetSelect();
}
static void _OnSeverseDiseaseSelectFnc(CWnd *pWnd){
	((CHandinContent*)pWnd)->OnSeverseDiseaseSelect();
}
static void _OnZviettelCoSelectFnc(CWnd *pWnd){
	((CHandinContent*)pWnd)->OnZviettelCoSelect();
}
/*static void _OnOtherNoteChangeFnc(CWnd *pWnd){
	((CHandinContent *)pWnd)->OnOtherNoteChange();
} */
/*static void _OnOtherNoteSetfocusFnc(CWnd *pWnd){
	((CHandinContent *)pWnd)->OnOtherNoteSetfocus();} */ 
/*static void _OnOtherNoteKillfocusFnc(CWnd *pWnd){
	((CHandinContent *)pWnd)->OnOtherNoteKillfocus();
} */
static int _OnOtherNoteCheckValueFnc(CWnd *pWnd){
	return ((CHandinContent *)pWnd)->OnOtherNoteCheckValue();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CHandinContent *pVw = (CHandinContent *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CHandinContent *pVw = (CHandinContent *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHandinContent *pVw = (CHandinContent *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHandinContent *pVw = (CHandinContent *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddHandinContentFnc(CWnd *pWnd){
	 return ((CHandinContent*)pWnd)->OnAddHandinContent();
} 
static int _OnEditHandinContentFnc(CWnd *pWnd){
	 return ((CHandinContent*)pWnd)->OnEditHandinContent();
} 
static int _OnDeleteHandinContentFnc(CWnd *pWnd){
	 return ((CHandinContent*)pWnd)->OnDeleteHandinContent();
} 
static int _OnSaveHandinContentFnc(CWnd *pWnd){
	 return ((CHandinContent*)pWnd)->OnSaveHandinContent();
} 
static int _OnCancelHandinContentFnc(CWnd *pWnd){
	 return ((CHandinContent*)pWnd)->OnCancelHandinContent();
} 
CHandinContent::CHandinContent(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CHandinContent::~CHandinContent(){
}
void CHandinContent::OnCreateComponents(){
	m_wndHandinContent.Create(this, _T("Handin Content"), 1, 1, 561, 276);
	m_wndDocumentNoLabel.Create(this, _T("Document No"), 5, 27, 85, 52);
	m_wndDocumentNo.Create(this,90, 27, 210, 52); 
	m_wndOutDateLabel.Create(this, _T("Out Date"), 340, 27, 420, 52);
	m_wndOutDate.Create(this,425, 27, 545, 52); 
	m_wndClinicalRecord.Create(this, _T("Clinical Record"), 5, 60, 210, 85);
	m_wndDischargeSheet.Create(this, _T("Discharge Sheet"), 340, 60, 545, 85);
	m_wndPaymentSheet.Create(this, _T("Payment Sheet"), 5, 100, 210, 125);
	m_wndAddnewcard.Create(this, _T("Add new card"), 340, 100, 545, 125);
	m_wndIDCard.Create(this, _T("ID Card"), 5, 140, 210, 165);
	m_wndOthersSheet.Create(this, _T("Others Sheet"), 340, 140, 545, 165);
	m_wndSeverseDisease.Create(this, _T("Severse Disease"), 5, 180, 210, 205);
	m_wndZviettelCo.Create(this, _T("Zviettel Co"), 340, 180, 545, 205);
	m_wndOtherNote.Create(this,5, 220, 550, 270); 
	m_wndAdd.Create(this, _T("&Add"), 216, 285, 296, 310);
	m_wndEdit.Create(this, _T("&Edit"), 300, 285, 380, 310);
	m_wndSave.Create(this, _T("&Save"), 385, 285, 465, 310);
	m_wndCancel.Create(this, _T("&Cancel"), 470, 285, 550, 310);

}
void CHandinContent::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndDocumentNo.SetLimitText(35);
	m_wndDocumentNo.SetCheckValue(true);
	m_wndOutDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndOutDate.SetCheckValue(true);
	m_wndOtherNote.SetMultiLine(TRUE);
	m_wndOtherNote.SetLimitText(35);
	//m_wndOtherNote.SetCheckValue(true);
	m_wndDocumentNo.SetReadOnly(true);
	m_wndOutDate.SetReadOnly(true);

	m_hms_handin_contentTbl.SetTableName(_T("hms_handin_content"));
	m_hms_handin_contentTbl.AddField(_T("HHC_CREATEDDATE"), dfDateTime); 
	m_hms_handin_contentTbl.AddField(_T("HHC_CREATEDBY"), dfText, 35); 
	m_hms_handin_contentTbl.AddField(_T("HHC_UPDATEDATE"), dfDateTime); 
	m_hms_handin_contentTbl.AddField(_T("HHC_UPDATEDBY"), dfText, 35); 
	m_hms_handin_contentTbl.AddField(_T("HHC_DATE"), dfDateTime); 
	m_hms_handin_contentTbl.AddField(_T("HHC_DOCNO"), dfLong); 
	m_hms_handin_contentTbl.AddField(_T("HHC_RECORD"), dfText, 1); 
	m_hms_handin_contentTbl.AddField(_T("HHC_DISCHARGEDSHEET"), dfText, 1); 
	m_hms_handin_contentTbl.AddField(_T("HHC_PAYMENTSHEET"), dfText, 1); 
	m_hms_handin_contentTbl.AddField(_T("HHC_INSCARD"), dfText, 1); 
	m_hms_handin_contentTbl.AddField(_T("HHC_IDCARD"), dfText, 1); 
	m_hms_handin_contentTbl.AddField(_T("HHC_OTHERS"), dfText, 1); 
	m_hms_handin_contentTbl.AddField(_T("HHC_DESC"), dfText, 128);

	m_hms_docTbl.SetTableName(_T("hms_doc"));
	m_hms_docTbl.AddField(_T("HD_SEVERSE_DISEASE"), dfText, 1); 
	m_hms_docTbl.AddField(_T("HD_ZVIETTEL_CO"), dfText, 1); 

}
void CHandinContent::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//m_wndDocumentNo.SetEvent(WE_CHANGE, _OnDocumentNoChangeFnc);
	//m_wndDocumentNo.SetEvent(WE_SETFOCUS, _OnDocumentNoSetfocusFnc);
	//m_wndDocumentNo.SetEvent(WE_KILLFOCUS, _OnDocumentNoKillfocusFnc);
	m_wndDocumentNo.SetEvent(WE_CHECKVALUE, _OnDocumentNoCheckValueFnc);
	//m_wndOutDate.SetEvent(WE_CHANGE, _OnOutDateChangeFnc);
	//m_wndOutDate.SetEvent(WE_SETFOCUS, _OnOutDateSetfocusFnc);
	//m_wndOutDate.SetEvent(WE_KILLFOCUS, _OnOutDateKillfocusFnc);
	m_wndOutDate.SetEvent(WE_CHECKVALUE, _OnOutDateCheckValueFnc);
	m_wndClinicalRecord.SetEvent(WE_CLICK, _OnClinicalRecordSelectFnc);
	m_wndDischargeSheet.SetEvent(WE_CLICK, _OnDischargeSheetSelectFnc);
	m_wndPaymentSheet.SetEvent(WE_CLICK, _OnPaymentSheetSelectFnc);
	m_wndAddnewcard.SetEvent(WE_CLICK, _OnAddnewcardSelectFnc);
	m_wndIDCard.SetEvent(WE_CLICK, _OnIDCardSelectFnc);
	m_wndOthersSheet.SetEvent(WE_CLICK, _OnOthersSheetSelectFnc);
	m_wndSeverseDisease.SetEvent(WE_CLICK, _OnSeverseDiseaseSelectFnc);
	m_wndZviettelCo.SetEvent(WE_CLICK, _OnZviettelCoSelectFnc);
	//m_wndOtherNote.SetEvent(WE_CHANGE, _OnOtherNoteChangeFnc);
	//m_wndOtherNote.SetEvent(WE_SETFOCUS, _OnOtherNoteSetfocusFnc);
	//m_wndOtherNote.SetEvent(WE_KILLFOCUS, _OnOtherNoteKillfocusFnc);
	m_wndOtherNote.SetEvent(WE_CHECKVALUE, _OnOtherNoteCheckValueFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	//SetMode(VM_NONE);
	GetDataToScreen();

}
void CHandinContent::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndDocumentNo.GetDlgCtrlID(), m_szDocumentNo);
	DDX_TextEx(pDX, m_wndOutDate.GetDlgCtrlID(), m_szOutDate);
	DDX_Check(pDX, m_wndClinicalRecord.GetDlgCtrlID(), m_bClinicalRecord);
	DDX_Check(pDX, m_wndDischargeSheet.GetDlgCtrlID(), m_bDischargeSheet);
	DDX_Check(pDX, m_wndPaymentSheet.GetDlgCtrlID(), m_bPaymentSheet);
	DDX_Check(pDX, m_wndAddnewcard.GetDlgCtrlID(), m_bAddnewcard);
	DDX_Check(pDX, m_wndIDCard.GetDlgCtrlID(), m_bIDCard);
	DDX_Check(pDX, m_wndOthersSheet.GetDlgCtrlID(), m_bOthersSheet);
	DDX_Check(pDX, m_wndSeverseDisease.GetDlgCtrlID(), m_bSeverseDisease);
	DDX_Check(pDX, m_wndZviettelCo.GetDlgCtrlID(), m_bZviettelCo);
	DDX_Text(pDX, m_wndOtherNote.GetDlgCtrlID(), m_szOtherNote);

}
void CHandinContent::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr;
	szSQL.Format(_T("SELECT * FROM hms_handin_content LEFT JOIN hms_doc ON(hd_docno = hhc_docno) WHERE hhc_docno = '%s' "), m_szDocumentNo);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF()){
		rs.GetValue(_T("hhc_date"), m_szOutDate);
		rs.GetValue(_T("hhc_record"), tmpStr);
		m_bClinicalRecord = false;
		if(tmpStr == _T("Y"))
			m_bClinicalRecord = true;

		rs.GetValue(_T("hhc_dischargedsheet"), tmpStr);
		m_bDischargeSheet = false;
		if(tmpStr == _T("Y"))
			m_bDischargeSheet = true;

		rs.GetValue(_T("hhc_paymentsheet"), tmpStr);
		m_bPaymentSheet = false;
		if(tmpStr == _T("Y"))
			m_bPaymentSheet = true;

		rs.GetValue(_T("hhc_inscard"), tmpStr);
		m_bAddnewcard = false;
		if(tmpStr == _T("Y"))
			m_bAddnewcard = true;

		rs.GetValue(_T("hhc_idcard"), tmpStr);
		m_bIDCard = false;
		if(tmpStr == _T("Y"))
			m_bIDCard = true;
		
		rs.GetValue(_T("hhc_others"), tmpStr);
		m_bOthersSheet = false;
		if(tmpStr == _T("Y"))
			m_bOthersSheet = true;

		rs.GetValue(_T("hd_severse_disease"), tmpStr);
		m_bSeverseDisease = false;
		if(tmpStr == _T("Y"))
			m_bSeverseDisease = true;

		rs.GetValue(_T("hd_zviettel_co"), tmpStr);
		m_bZviettelCo = false;
		if(tmpStr == _T("Y"))
			m_bZviettelCo = true;

		rs.GetValue(_T("hhc_desc"), m_szOtherNote);
		SetMode(VM_VIEW);
	}
	else
		SetMode(VM_NONE);

}
void CHandinContent::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_hms_handin_contentTbl.SetValue(_T("hhc_createddate"), pMF->GetSysDateTime());
	m_hms_handin_contentTbl.SetValue(_T("hhc_createdby"), pMF->GetCurrentUser());
	m_hms_handin_contentTbl.SetValue(_T("hhc_updatedate"), pMF->GetSysDateTime());
	m_hms_handin_contentTbl.SetValue(_T("hhc_updatedby"), pMF->GetCurrentUser());
	m_hms_handin_contentTbl.SetValue(_T("hhc_date"), m_szOutDate);
	m_hms_handin_contentTbl.SetValue(_T("hhc_docno"), m_szDocumentNo);
	CString tmpStr;
	tmpStr = _T("N");
	if(m_bClinicalRecord) tmpStr = _T("Y");
	m_hms_handin_contentTbl.SetValue(_T("hhc_record"), tmpStr);
	tmpStr = _T("N");
	if(m_bDischargeSheet) tmpStr = _T("Y");
	m_hms_handin_contentTbl.SetValue(_T("hhc_dischargedsheet"), tmpStr);
	tmpStr = _T("N");
	if(m_bPaymentSheet) tmpStr = _T("Y");
	m_hms_handin_contentTbl.SetValue(_T("hhc_paymentsheet"), tmpStr);
	tmpStr = _T("N");
	if(m_bAddnewcard) tmpStr = _T("Y");
	m_hms_handin_contentTbl.SetValue(_T("hhc_inscard"), tmpStr);
	tmpStr = _T("N");
	if(m_bIDCard) tmpStr = _T("Y");
	m_hms_handin_contentTbl.SetValue(_T("hhc_idcard"), tmpStr);
	tmpStr = _T("N");
	if(m_bOthersSheet) tmpStr = _T("Y");
	m_hms_handin_contentTbl.SetValue(_T("hhc_others"), tmpStr);
	tmpStr = _T("N");
	if(m_bSeverseDisease) tmpStr = _T("Y");
	m_hms_docTbl.SetValue(_T("hd_severse_disease"), tmpStr);
	tmpStr = _T("N");
	if(m_bZviettelCo) tmpStr = _T("Y");
	m_hms_docTbl.SetValue(_T("hd_zviettel_co"), tmpStr);
	m_hms_handin_contentTbl.SetValue(_T("hhc_desc"), m_szOtherNote);

}
void CHandinContent::SetDefaultValues(){

	//m_szDocumentNo.Empty();
	//m_szOutDate.Empty();
	m_bClinicalRecord=FALSE;
	m_bDischargeSheet=FALSE;
	m_bPaymentSheet=FALSE;
	m_bAddnewcard=FALSE;
	m_bIDCard=FALSE;
	m_bOthersSheet=FALSE;
	m_bSeverseDisease=FALSE;
	m_bZviettelCo=FALSE;
	m_szOtherNote.Empty();

}
int CHandinContent::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 2, 3, -1);
			m_wndOtherNote.EnableWindow(FALSE);
 			SetDefaultValues();
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 2, 3, -1);
			if(m_bOthersSheet == 'N')
				m_wndOtherNote.EnableWindow(FALSE);
 			break;
 		case VM_VIEW: 
 			EnableControls(FALSE);
 			EnableButtons(FALSE, 2, 3, -1);
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
/*void CHandinContent::OnDocumentNoChange(){
	
} */
/*void CHandinContent::OnDocumentNoSetfocus(){
	
} */
/*void CHandinContent::OnDocumentNoKillfocus(){
	
} */
int CHandinContent::OnDocumentNoCheckValue(){
	return 0;
} 
/*void CHandinContent::OnOutDateChange(){
	
} */
/*void CHandinContent::OnOutDateSetfocus(){
	
} */
/*void CHandinContent::OnOutDateKillfocus(){
	
} */
int CHandinContent::OnOutDateCheckValue(){
	return 0;
} 
	void CHandinContent::OnClinicalRecordSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
	void CHandinContent::OnDischargeSheetSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
	void CHandinContent::OnPaymentSheetSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
	void CHandinContent::OnAddnewcardSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
	void CHandinContent::OnIDCardSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
	void CHandinContent::OnOthersSheetSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	if(m_bOthersSheet)
		m_bOthersSheet = false;
	else
		m_bOthersSheet = true;
	m_wndOtherNote.EnableWindow(m_bOthersSheet);
}
	void CHandinContent::OnSeverseDiseaseSelect(){
		CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
	void CHandinContent::OnZviettelCoSelect(){
		CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
/*void CHandinContent::OnOtherNoteChange(){
	
} */
/*void CHandinContent::OnOtherNoteSetfocus(){
	
} */
/*void CHandinContent::OnOtherNoteKillfocus(){
	
} */
int CHandinContent::OnOtherNoteCheckValue(){
	return 0;
} 
void CHandinContent::OnAddSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnAddHandinContent();
} 
void CHandinContent::OnEditSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnEditHandinContent();
} 
void CHandinContent::OnSaveSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnSaveHandinContent();
} 
void CHandinContent::OnCancelSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnCancelHandinContent();
} 
int CHandinContent::OnAddHandinContent(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHandinContent::OnEditHandinContent(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHandinContent::OnDeleteHandinContent(){
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
 		OnCancelHandinContent();
 	}
	return 0;
}
int CHandinContent::OnSaveHandinContent(){
	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
		return -1;
	if(!IsValidateData())
		return -1;
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CString szSQL;
	if(GetMode() == VM_ADD){
		CString szWhere;	
		szSQL = m_hms_handin_contentTbl.GetInsertSQL();
		pMF->ExecSQL(szSQL);
		szWhere.Format(_T(" WHERE hd_docno='%s'"), m_szDocumentNo);
		szSQL = m_hms_docTbl.GetUpdateSQL();
		szSQL += szWhere;
		pMF->ExecSQL(szSQL);
	}
	else if(GetMode() == VM_EDIT){
		CString szWhere;
		szWhere.Format(_T(" WHERE hhc_docno='%s'"), m_szDocumentNo);
		szSQL = m_hms_handin_contentTbl.GetUpdateSQL(_T("hhc_createddate,hhc_createdby, hhc_docno"));
		szSQL += szWhere;
		pMF->ExecSQL(szSQL);
		szWhere.Format(_T(" WHERE hd_docno='%s'"), m_szDocumentNo);
		szSQL = m_hms_docTbl.GetUpdateSQL();
		szSQL += szWhere;
		pMF->ExecSQL(szSQL);
	}
	_fmsg(_T("%s"), szSQL);
	int ret = pMF->ExecSQL(szSQL);
	if(ret > 0)
	{
		//OnHandinContentListLoadData();
		SetMode(VM_VIEW);
	}
	else
	{
	}
	return ret;
	return 0;
}
int CHandinContent::OnCancelHandinContent(){
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
int CHandinContent::OnHandinContentListLoadData(){
	return 0;
}
