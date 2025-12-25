#include "HMSUpdateOver5YearInformation.h"
#include "MainFrm.h"
/*static void _OnDiscountChangeFnc(CWnd *pWnd){
	((CHMSUpdateOver5Year *)pWnd)->OnDiscountChange();
} */
/*static void _OnDiscountSetfocusFnc(CWnd *pWnd){
	((CHMSUpdateOver5Year *)pWnd)->OnDiscountSetfocus();} */ 
/*static void _OnDiscountKillfocusFnc(CWnd *pWnd){
	((CHMSUpdateOver5Year *)pWnd)->OnDiscountKillfocus();
} */
static int _OnDiscountCheckValueFnc(CWnd *pWnd){
	return ((CHMSUpdateOver5Year *)pWnd)->OnDiscountCheckValue();
} 
/*static void _OnOver5YearsChangeFnc(CWnd *pWnd){
	((CHMSUpdateOver5Year *)pWnd)->OnOver5YearsChange();
} */
/*static void _OnOver5YearsSetfocusFnc(CWnd *pWnd){
	((CHMSUpdateOver5Year *)pWnd)->OnOver5YearsSetfocus();} */ 
/*static void _OnOver5YearsKillfocusFnc(CWnd *pWnd){
	((CHMSUpdateOver5Year *)pWnd)->OnOver5YearsKillfocus();
} */
static int _OnOver5YearsCheckValueFnc(CWnd *pWnd){
	return ((CHMSUpdateOver5Year *)pWnd)->OnOver5YearsCheckValue();
} 
/*static void _OnOver5YearApplyDateChangeFnc(CWnd *pWnd){
	((CHMSUpdateOver5Year *)pWnd)->OnOver5YearApplyDateChange();
} */
/*static void _OnOver5YearApplyDateSetfocusFnc(CWnd *pWnd){
	((CHMSUpdateOver5Year *)pWnd)->OnOver5YearApplyDateSetfocus();} */ 
/*static void _OnOver5YearApplyDateKillfocusFnc(CWnd *pWnd){
	((CHMSUpdateOver5Year *)pWnd)->OnOver5YearApplyDateKillfocus();
} */
static int _OnOver5YearApplyDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSUpdateOver5Year *)pWnd)->OnOver5YearApplyDateCheckValue();
} 
/*static void _OnNoteChangeFnc(CWnd *pWnd){
	((CHMSUpdateOver5Year *)pWnd)->OnNoteChange();
} */
/*static void _OnNoteSetfocusFnc(CWnd *pWnd){
	((CHMSUpdateOver5Year *)pWnd)->OnNoteSetfocus();} */ 
/*static void _OnNoteKillfocusFnc(CWnd *pWnd){
	((CHMSUpdateOver5Year *)pWnd)->OnNoteKillfocus();
} */
static int _OnNoteCheckValueFnc(CWnd *pWnd){
	return ((CHMSUpdateOver5Year *)pWnd)->OnNoteCheckValue();
} 
static void _OnUpdateSelectFnc(CWnd *pWnd){
	CHMSUpdateOver5Year *pVw = (CHMSUpdateOver5Year *)pWnd;
	pVw->OnUpdateSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSUpdateOver5Year *pVw = (CHMSUpdateOver5Year *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSUpdateOver5Year *pVw = (CHMSUpdateOver5Year *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSUpdateOver5Year *pVw = (CHMSUpdateOver5Year *)pWnd;
	pVw->OnCloseSelect();
} 

static int _OnAddCHMSUpdateOver5YearFnc(CWnd *pWnd){
	 return ((CHMSUpdateOver5Year*)pWnd)->OnAddCHMSUpdateOver5Year();
} 
static int _OnEditCHMSUpdateOver5YearFnc(CWnd *pWnd){
	 return ((CHMSUpdateOver5Year*)pWnd)->OnEditCHMSUpdateOver5Year();
} 
static int _OnDeleteCHMSUpdateOver5YearFnc(CWnd *pWnd){
	 return ((CHMSUpdateOver5Year*)pWnd)->OnDeleteCHMSUpdateOver5Year();
} 
static int _OnSaveCHMSUpdateOver5YearFnc(CWnd *pWnd){
	 return ((CHMSUpdateOver5Year*)pWnd)->OnSaveCHMSUpdateOver5Year();
} 
static int _OnCancelCHMSUpdateOver5YearFnc(CWnd *pWnd){
	 return ((CHMSUpdateOver5Year*)pWnd)->OnCancelCHMSUpdateOver5Year();
}
static int _OnOver5YearDiscountApplyDateCheckValueFnc(CWnd *pWnd)
{
	return ((CHMSUpdateOver5Year *)pWnd)->OnOver5YearDiscountApplyDateCheckValue();
} 
CHMSUpdateOver5Year::CHMSUpdateOver5Year(CWnd *pParent):
	CGuiDialog(pParent)
	{

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CHMSUpdateOver5Year::~CHMSUpdateOver5Year()
{
}
void CHMSUpdateOver5Year::OnCreateComponents(){
	m_wndGroupBox.Create(this, _T("Update Over5Years Information"), 6, 5, 521, 250);
	m_wndDiscountLabel.Create(this, _T("Discount"), 10, 30, 110, 55);
	m_wndDiscount.Create(this,115, 30, 515, 55); 
	m_wndOver5YearsLabel.Create(this, _T("Over5Years"), 10, 59, 110, 84);
	m_wndOver5Years.Create(this,115, 59, 515, 84); 
	m_wndApplyDateLabel.Create(this, _T("ApplyDate"), 10, 89, 110, 114);
	m_wndOver5YearApplyDate.Create(this,115, 89, 515, 114); 
	m_wndDiscountApplyDateLabel.Create(this, _T("DiscountApplyDate"), 10, 118, 110, 143);
	m_wndOver5YearDiscountApplyDate.Create(this,115, 118, 515, 143); 
	m_wndNoteLabel.Create(this, _T("NoteLabel"), 10, 148, 110, 173);
	m_wndNote.Create(this,115, 148, 515, 247, true, false, true); 
	m_wndUpdate.Create(this, _T("&Update"), 180, 253, 260, 282);
	m_wndSave.Create(this, _T("&Save"), 265, 253, 345, 282);
	m_wndCancel.Create(this, _T("&Cancel"), 350, 253, 430, 282);
	m_wndClose.Create(this, _T("&Close"), 435, 253, 515, 282);
}
void CHMSUpdateOver5Year::OnInitializeComponents()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndDiscount.SetLimitText(1024);
	m_wndDiscount.SetReadOnly(false);
	m_wndOver5Years.SetLimitText(1024);
	m_wndOver5Years.SetReadOnly(false);
	m_wndOver5YearApplyDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndOver5YearApplyDate.SetReadOnly(false);
	m_wndOver5YearApplyDate.SetCheckValue(true);
	m_wndOver5YearDiscountApplyDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndOver5YearDiscountApplyDate.SetReadOnly(false);
	m_wndOver5YearDiscountApplyDate.SetCheckValue(true);
	m_wndNote.SetLimitText(128);
	m_wndNote.SetCheckValue(true);
	m_hms_docTbl.SetTableName(_T("hms_doc"));
	m_hms_docTbl.AddField(_T("HD_OVER5YEARAPPLYDATE"), dfDateTime);
	m_hms_docTbl.AddField(_T("HD_OVER5YEARDISCOUNTAPPLYDATE"), dfDateTime);	
	m_hms_docTbl.AddField(_T("HD_OVER5YEARNOTE"), dfText, 128);
}
void CHMSUpdateOver5Year::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndDiscount.SetEvent(WE_CHANGE, _OnDiscountChangeFnc);
	//m_wndDiscount.SetEvent(WE_SETFOCUS, _OnDiscountSetfocusFnc);
	//m_wndDiscount.SetEvent(WE_KILLFOCUS, _OnDiscountKillfocusFnc);
	m_wndDiscount.SetEvent(WE_CHECKVALUE, _OnDiscountCheckValueFnc);
	//m_wndOver5Years.SetEvent(WE_CHANGE, _OnOver5YearsChangeFnc);
	//m_wndOver5Years.SetEvent(WE_SETFOCUS, _OnOver5YearsSetfocusFnc);
	//m_wndOver5Years.SetEvent(WE_KILLFOCUS, _OnOver5YearsKillfocusFnc);
	m_wndOver5Years.SetEvent(WE_CHECKVALUE, _OnOver5YearsCheckValueFnc);
	//m_wndOver5YearApplyDate.SetEvent(WE_CHANGE, _OnOver5YearApplyDateChangeFnc);
	//m_wndOver5YearApplyDate.SetEvent(WE_SETFOCUS, _OnOver5YearApplyDateSetfocusFnc);
	//m_wndOver5YearApplyDate.SetEvent(WE_KILLFOCUS, _OnOver5YearApplyDateKillfocusFnc);
	m_wndOver5YearApplyDate.SetEvent(WE_CHECKVALUE, _OnOver5YearApplyDateCheckValueFnc);
	m_wndOver5YearDiscountApplyDate.SetEvent(WE_CHECKVALUE, _OnOver5YearDiscountApplyDateCheckValueFnc);
	//m_wndNote.SetEvent(WE_CHANGE, _OnNoteChangeFnc);
	//m_wndNote.SetEvent(WE_SETFOCUS, _OnNoteSetfocusFnc);
	//m_wndNote.SetEvent(WE_KILLFOCUS, _OnNoteKillfocusFnc);
	m_wndNote.SetEvent(WE_CHECKVALUE, _OnNoteCheckValueFnc);
	m_wndUpdate.SetEvent(WE_CLICK, _OnUpdateSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	GetDataToScreen();	

}
void CHMSUpdateOver5Year::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndDiscount.GetDlgCtrlID(), m_nDiscount);
	DDX_Text(pDX, m_wndOver5Years.GetDlgCtrlID(), m_szOver5Years);
	DDX_TextEx(pDX, m_wndOver5YearApplyDate.GetDlgCtrlID(), m_szOver5YearApplyDate);
	DDX_TextEx(pDX, m_wndOver5YearDiscountApplyDate.GetDlgCtrlID(), m_szOver5YearDiscountApplyDate);
	DDX_Text(pDX, m_wndNote.GetDlgCtrlID(), m_szNote);

}
void CHMSUpdateOver5Year::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Discount")] =  m_nDiscount;
	m_jData[_T("Over5Years")] =  m_szOver5Years;
	m_jData[_T("Over5YearApplyDate")] =  m_szOver5YearApplyDate;
	m_jData[_T("Note")] =  m_szNote;
	}
	else
	{
			
	m_jData[_T("Discount")].GetValue(m_nDiscount);
	m_jData[_T("Over5Years")].GetValue(m_szOver5Years);
	m_jData[_T("Over5YearApplyDate")].GetValue(m_szOver5YearApplyDate);
	m_jData[_T("Note")].GetValue(m_szNote);
	}

}
void CHMSUpdateOver5Year::GetDataToScreen()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T(" SELECT Hd_Disrate as discount,") \
	_T(" Hd_Over5year as over5year,") \
	_T(" hd_Over5yearApplyDate as ApplyDate,") \
	_T(" hd_Over5yearDiscountApplyDate as DiscountApplyDate,") \
	_T(" hd_Over5YearNote as Note") \
	_T(" from hms_doc where hd_docno=%ld"), pMF->m_nDocumentNo);
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"),szSQL);
		if(!rs.IsEOF())
		{
			rs.GetValue(_T("discount"), m_nDiscount);
			rs.GetValue(_T("over5year"), m_szOver5Years);
			rs.GetValue(_T("ApplyDate"), m_szOver5YearApplyDate);
			rs.GetValue(_T("DiscountApplyDate"), m_szOver5YearDiscountApplyDate);
			rs.GetValue(_T("Note"), m_szNote);			
		}
	SetMode(VM_VIEW);
}
void CHMSUpdateOver5Year::GetScreenToData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
	m_hms_docTbl.SetValue(_T("HD_OVER5YEARAPPLYDATE"), m_szOver5YearApplyDate);
	m_hms_docTbl.SetValue(_T("HD_OVER5YEARDISCOUNTAPPLYDATE"), m_szOver5YearDiscountApplyDate);	
	m_hms_docTbl.SetValue(_T("HD_OVER5YEARNOTE"), m_szNote);
}
void CHMSUpdateOver5Year::SetDefaultValues()
{

	m_nDiscount=0;
	m_szOver5Years.Empty();
	m_szOver5YearApplyDate.Empty();
	m_szOver5YearDiscountApplyDate.Empty();
	m_szNote.Empty();

}
int CHMSUpdateOver5Year::SetMode(int nMode)
{
 		int nOldMode = GetMode(); 
 		CGuiDialog::SetMode(nMode); 
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
  		switch(nMode){ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, -1); 
 			SetDefaultValues(); 
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 1, 2, -1); 
			m_wndOver5YearApplyDate.SetFocus();

			if(m_szOver5YearApplyDate.IsEmpty())
				m_szOver5YearApplyDate = pMF->GetSysDateTime();
			if(m_szOver5YearDiscountApplyDate.IsEmpty())
				m_szOver5YearDiscountApplyDate = pMF->GetSysDateTime();
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
/*void CHMSUpdateOver5Year::OnDiscountChange(){
	
} */
/*void CHMSUpdateOver5Year::OnDiscountSetfocus(){
	
} */
/*void CHMSUpdateOver5Year::OnDiscountKillfocus(){
	
} */
int CHMSUpdateOver5Year::OnDiscountCheckValue(){
	return 0;
} 
/*void CHMSUpdateOver5Year::OnOver5YearsChange(){
	
} */
/*void CHMSUpdateOver5Year::OnOver5YearsSetfocus(){
	
} */
/*void CHMSUpdateOver5Year::OnOver5YearsKillfocus(){
	
} */
int CHMSUpdateOver5Year::OnOver5YearsCheckValue(){
	return 0;
} 
/*void CHMSUpdateOver5Year::OnOver5YearApplyDateChange(){
	
} */
/*void CHMSUpdateOver5Year::OnOver5YearApplyDateSetfocus(){
	
} */
/*void CHMSUpdateOver5Year::OnOver5YearApplyDateKillfocus(){
	
} */
int CHMSUpdateOver5Year::OnOver5YearApplyDateCheckValue(){
	return 0;
}
int CHMSUpdateOver5Year::OnOver5YearDiscountApplyDateCheckValue()
{
	return 0;
} 
/*void CHMSUpdateOver5Year::OnNoteChange(){
	
} */
/*void CHMSUpdateOver5Year::OnNoteSetfocus(){
	
} */
/*void CHMSUpdateOver5Year::OnNoteKillfocus(){
	
} */
int CHMSUpdateOver5Year::OnNoteCheckValue(){
	return 0;
} 
void CHMSUpdateOver5Year::OnUpdateSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnEditCHMSUpdateOver5Year();	
} 
void CHMSUpdateOver5Year::OnSaveSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();	
	CRecord rs(&pMF->m_db);
	CString szSQL;
	OnSaveCHMSUpdateOver5Year();
	
} 
void CHMSUpdateOver5Year::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancelCHMSUpdateOver5Year();
	
} 
void CHMSUpdateOver5Year::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();	
}

int CHMSUpdateOver5Year::OnAddCHMSUpdateOver5Year(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSUpdateOver5Year::OnEditCHMSUpdateOver5Year()
{
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT count(*) FROM Hms_Clinical_Record WHERE hcr_docno =%ld AND Hcrf_Acceptedfee in ('P','Y')"), pMF->m_nDocumentNo);
		rs.ExecSQL(szSQL);		
		if(rs.GetIntValue() >0)
		{
		_msg(_T("Bệnh nhân đã được thanh toán, không thể cập nhật lại"));
		return -1;
		}
	/*szSQL.Format(_T("SELECT count(*) FROM Hms_doc WHERE hd_docno =%ld and HD_OVER5YEAR='Y'"), pMF->m_nDocumentNo);
		rs.ExecSQL(szSQL);		
		if(rs.GetIntValue() >0)
		{
		_msg(_T("Bệnh nhân đã được cập nhật thông tin 5 năm liên tục, không thể cập nhật lại"));
		return -1;
		}*/
	szSQL.Format(_T("SELECT count(*) FROM Hms_doc WHERE hd_docno =%ld AND HD_INSLINE='Y'"), pMF->m_nDocumentNo);
		rs.ExecSQL(szSQL);		
		if(rs.GetIntValue() >0)
		{
		_msg(_T("Bệnh nhân trái tuyến, không thể cập nhật lại"));
		return -1;
		}

 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSUpdateOver5Year::OnDeleteCHMSUpdateOver5Year()
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
 		OnCancelCHMSUpdateOver5Year();
 	}
	return 0;
}
int CHMSUpdateOver5Year::OnSaveCHMSUpdateOver5Year()
{
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
	CRecord rs(&pMF->m_db);
	UpdateData(true);
	pMF->BeginTransaction();
	{
	szSQL.Format(_T("UPDATE hms_doc SET Hd_Disrate =%d, Hd_Over5year ='%s', HD_OVER5YEARAPPLYDATE=cast_string2timestamp('%s'), HD_OVER5YEARDISCOUNTAPPLYDATE=cast_string2timestamp('%s'), HD_OVER5YEARNOTE='%s' WHERE hd_docno = %ld"),m_nDiscount, m_szOver5Years ,m_szOver5YearApplyDate, m_szOver5YearDiscountApplyDate, m_szNote,pMF->m_nDocumentNo);	
	//rs.ExecSQL(szSQL);
	int nRet = pMF->ExecSQL(szSQL);
			if (nRet > 0)
					{
						szSQL.Format(_T(" INSERT INTO HMS_UPDATE_5YERS_INS VALUES(%ld, %ld, '%s', '%s', '%s', TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS'), '%s') "), pMF->m_nDocumentNo,m_nDiscount, m_szOver5Years,m_szNote,  pMF->GetCurrentUser(), pMF->GetSysDateTime(), pMF->GetLocalIP());
						pMF->ExecSQL(szSQL);
					}
	}
	pMF->Commit();
	//_msg(_T("%s"), szSQL);
	GetDataToScreen();	
	SetMode(VM_VIEW);	
	return 0;	
}
int CHMSUpdateOver5Year::OnCancelCHMSUpdateOver5Year(){
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
int CHMSUpdateOver5Year::OnCHMSUpdateOver5YearListLoadData(){
	return 0;
}