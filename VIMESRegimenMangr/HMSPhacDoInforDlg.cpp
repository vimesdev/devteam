#include "HMSPhacDoInforDlg.h"
#include "HMSMainFrame.h"
static void _OnCategorySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSPhacDoInforDlg* )pWnd)->OnCategorySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnCategorySelendokFnc(CWnd *pWnd){
	((CHMSPhacDoInforDlg *)pWnd)->OnCategorySelendok();
}
/*static void _OnCategorySetfocusFnc(CWnd *pWnd){
	((CHMSPhacDoInforDlg *)pWnd)->OnCategoryKillfocus();
}*/
/*static void _OnCategoryKillfocusFnc(CWnd *pWnd){
	((CHMSPhacDoInforDlg *)pWnd)->OnCategoryKillfocus();
}*/
static long _OnCategoryLoadDataFnc(CWnd *pWnd){
	return ((CHMSPhacDoInforDlg *)pWnd)->OnCategoryLoadData();
}
/*static void _OnCategoryAddNewFnc(CWnd *pWnd){
	((CHMSPhacDoInforDlg *)pWnd)->OnCategoryAddNew();
}*/
/*static void _OnTenPhacDoChangeFnc(CWnd *pWnd){
	((CHMSPhacDoInforDlg *)pWnd)->OnTenPhacDoChange();
} */
/*static void _OnTenPhacDoSetfocusFnc(CWnd *pWnd){
	((CHMSPhacDoInforDlg *)pWnd)->OnTenPhacDoSetfocus();} */ 
/*static void _OnTenPhacDoKillfocusFnc(CWnd *pWnd){
	((CHMSPhacDoInforDlg *)pWnd)->OnTenPhacDoKillfocus();
} */
static int _OnTenPhacDoCheckValueFnc(CWnd *pWnd){
	return ((CHMSPhacDoInforDlg *)pWnd)->OnTenPhacDoCheckValue();
} 
/*static void _OnNoteChangeFnc(CWnd *pWnd){
	((CHMSPhacDoInforDlg *)pWnd)->OnNoteChange();
} */
/*static void _OnNoteSetfocusFnc(CWnd *pWnd){
	((CHMSPhacDoInforDlg *)pWnd)->OnNoteSetfocus();} */ 
/*static void _OnNoteKillfocusFnc(CWnd *pWnd){
	((CHMSPhacDoInforDlg *)pWnd)->OnNoteKillfocus();
} */
static int _OnNoteCheckValueFnc(CWnd *pWnd){
	return ((CHMSPhacDoInforDlg *)pWnd)->OnNoteCheckValue();
} 
/*static void _OnNumberDaysChangeFnc(CWnd *pWnd){
	((CHMSPhacDoInforDlg *)pWnd)->OnNumberDaysChange();
} */
/*static void _OnNumberDaysSetfocusFnc(CWnd *pWnd){
	((CHMSPhacDoInforDlg *)pWnd)->OnNumberDaysSetfocus();} */ 
/*static void _OnNumberDaysKillfocusFnc(CWnd *pWnd){
	((CHMSPhacDoInforDlg *)pWnd)->OnNumberDaysKillfocus();
} */
static int _OnNumberDaysCheckValueFnc(CWnd *pWnd){
	return ((CHMSPhacDoInforDlg *)pWnd)->OnNumberDaysCheckValue();
} 
/*static void _OnVersionChangeFnc(CWnd *pWnd){
	((CHMSPhacDoInforDlg *)pWnd)->OnVersionChange();
} */
/*static void _OnVersionSetfocusFnc(CWnd *pWnd){
	((CHMSPhacDoInforDlg *)pWnd)->OnVersionSetfocus();} */ 
/*static void _OnVersionKillfocusFnc(CWnd *pWnd){
	((CHMSPhacDoInforDlg *)pWnd)->OnVersionKillfocus();
} */
static int _OnVersionCheckValueFnc(CWnd *pWnd){
	return ((CHMSPhacDoInforDlg *)pWnd)->OnVersionCheckValue();
} 
/*static void _OnApplyDateChangeFnc(CWnd *pWnd){
	((CHMSPhacDoInforDlg *)pWnd)->OnApplyDateChange();
} */
/*static void _OnApplyDateSetfocusFnc(CWnd *pWnd){
	((CHMSPhacDoInforDlg *)pWnd)->OnApplyDateSetfocus();} */ 
/*static void _OnApplyDateKillfocusFnc(CWnd *pWnd){
	((CHMSPhacDoInforDlg *)pWnd)->OnApplyDateKillfocus();
} */
static int _OnApplyDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSPhacDoInforDlg *)pWnd)->OnApplyDateCheckValue();
} 
static void _OnApplySelectFnc(CWnd *pWnd){
	CHMSPhacDoInforDlg *pVw = (CHMSPhacDoInforDlg *)pWnd;
	pVw->OnApplySelect();
} 
static void _OnCategoryLabelSelectFnc(CWnd *pWnd){
	CHMSPhacDoInforDlg *pVw = (CHMSPhacDoInforDlg *)pWnd;
	pVw->OnCategoryLabelSelect();
} 

static int _OnAddHMSPhacDoInforDlgFnc(CWnd *pWnd){
	 return ((CHMSPhacDoInforDlg*)pWnd)->OnAddHMSPhacDoInforDlg();
} 
static int _OnEditHMSPhacDoInforDlgFnc(CWnd *pWnd){
	 return ((CHMSPhacDoInforDlg*)pWnd)->OnEditHMSPhacDoInforDlg();
} 
static int _OnDeleteHMSPhacDoInforDlgFnc(CWnd *pWnd){
	 return ((CHMSPhacDoInforDlg*)pWnd)->OnDeleteHMSPhacDoInforDlg();
} 
static int _OnSaveHMSPhacDoInforDlgFnc(CWnd *pWnd){
	 return ((CHMSPhacDoInforDlg*)pWnd)->OnSaveHMSPhacDoInforDlg();
} 
static int _OnCancelHMSPhacDoInforDlgFnc(CWnd *pWnd){
	 return ((CHMSPhacDoInforDlg*)pWnd)->OnCancelHMSPhacDoInforDlg();
} 
static void _OnisActiveSelectFnc(CWnd *pWnd){
	 ((CHMSPhacDoInforDlg*)pWnd)->OnisActiveSelect();
}
CHMSPhacDoInforDlg::CHMSPhacDoInforDlg(CWnd *pParent, int nMode):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
	m_nMode= nMode;
}
CHMSPhacDoInforDlg::~CHMSPhacDoInforDlg(){
}
void CHMSPhacDoInforDlg::OnCreateComponents(){
	m_wndgrpPhacDoinfor.Create(this, _T("Thông tin phác đồ"), 5, 5, 605, 280);
	m_wndCategoryLabel.Create(this, _T("Category"), 10, 30, 145, 55);
	m_wndCategory.Create(this,150, 30, 599, 55); 
	m_wndPhacDoLabel.Create(this, _T("Tên phác đồ"), 10, 60, 145, 85);
	m_wndTenPhacDo.Create(this,150, 60, 600, 135, TRUE, FALSE, TRUE); 
	m_wndNoteLabel.Create(this, _T("Note"), 10, 140, 145, 165);
	m_wndNote.Create(this,150, 140, 600, 215, TRUE, FALSE, TRUE);
	m_wndNumberDaysLabel.Create(this, _T("Number Days"), 10, 220, 145, 245);
	m_wndNumberDays.Create(this,150, 220, 230, 245); 
	m_wndVersionLabel.Create(this, _T("Version"), 235, 220, 315, 245);
	m_wndVersion.Create(this,320, 220, 400, 245); 
	m_wndApplyDateLabel.Create(this, _T("Apply Date"), 405, 220, 485, 245);
	m_wndApplyDate.Create(this,490, 220, 600, 245); 
	m_wndStatusLabel.Create(this, _T("Status"), 10, 285, 248, 310);
	m_wndisActive.Create(this, _T("Is Active"), 405, 250, 600, 275);
	m_wndApply.Create(this, _T("Apply"), 520, 285, 600, 310);
	m_wndCategoryLabel.SetHyperlink(true);

}
void CHMSPhacDoInforDlg::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
//	m_wndCategory.SetCheckValue(true);
	m_wndCategory.LimitText(35);
	m_wndTenPhacDo.SetLimitText(1024);
	m_wndTenPhacDo.SetCheckValue(true);
	m_wndNote.SetLimitText(1024);
//	m_wndNote.SetCheckValue(true);
	m_wndNumberDays.SetLimitText(16);
	m_wndNumberDays.SetCheckValue(true);
	m_wndVersion.SetLimitText(35);
	m_wndVersion.SetCheckValue(true);
	//m_wndApplyDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndApplyDate.SetCheckValue(true);


	m_wndCategory.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndCategory.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CHMSPhacDoInforDlg::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndCategory.SetEvent(WE_SELENDOK, _OnCategorySelendokFnc);
	//m_wndCategory.SetEvent(WE_SETFOCUS, _OnCategorySetfocusFnc);
	//m_wndCategory.SetEvent(WE_KILLFOCUS, _OnCategoryKillfocusFnc);
	m_wndCategory.SetEvent(WE_SELCHANGE, _OnCategorySelectChangeFnc);
	m_wndCategory.SetEvent(WE_LOADDATA, _OnCategoryLoadDataFnc);
	//m_wndCategory.SetEvent(WE_ADDNEW, _OnCategoryAddNewFnc);
	//m_wndTenPhacDo.SetEvent(WE_CHANGE, _OnTenPhacDoChangeFnc);
	//m_wndTenPhacDo.SetEvent(WE_SETFOCUS, _OnTenPhacDoSetfocusFnc);
	//m_wndTenPhacDo.SetEvent(WE_KILLFOCUS, _OnTenPhacDoKillfocusFnc);
	m_wndTenPhacDo.SetEvent(WE_CHECKVALUE, _OnTenPhacDoCheckValueFnc);
	//m_wndNote.SetEvent(WE_CHANGE, _OnNoteChangeFnc);
	//m_wndNote.SetEvent(WE_SETFOCUS, _OnNoteSetfocusFnc);
	//m_wndNote.SetEvent(WE_KILLFOCUS, _OnNoteKillfocusFnc);
	m_wndNote.SetEvent(WE_CHECKVALUE, _OnNoteCheckValueFnc);
	//m_wndNumberDays.SetEvent(WE_CHANGE, _OnNumberDaysChangeFnc);
	//m_wndNumberDays.SetEvent(WE_SETFOCUS, _OnNumberDaysSetfocusFnc);
	//m_wndNumberDays.SetEvent(WE_KILLFOCUS, _OnNumberDaysKillfocusFnc);
	m_wndNumberDays.SetEvent(WE_CHECKVALUE, _OnNumberDaysCheckValueFnc);
	//m_wndVersion.SetEvent(WE_CHANGE, _OnVersionChangeFnc);
	//m_wndVersion.SetEvent(WE_SETFOCUS, _OnVersionSetfocusFnc);
	//m_wndVersion.SetEvent(WE_KILLFOCUS, _OnVersionKillfocusFnc);
	m_wndVersion.SetEvent(WE_CHECKVALUE, _OnVersionCheckValueFnc);
	//m_wndApplyDate.SetEvent(WE_CHANGE, _OnApplyDateChangeFnc);
	//m_wndApplyDate.SetEvent(WE_SETFOCUS, _OnApplyDateSetfocusFnc);
	//m_wndApplyDate.SetEvent(WE_KILLFOCUS, _OnApplyDateKillfocusFnc);
	m_wndApplyDate.SetEvent(WE_CHECKVALUE, _OnApplyDateCheckValueFnc);
	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
	m_wndCategoryLabel.SetEvent(WE_CLICK, _OnCategoryLabelSelectFnc);
	m_wndisActive.SetEvent(WE_CLICK, _OnisActiveSelectFnc);
	SetMode(m_nMode);

	if(m_nMode == VM_EDIT)
	{
		GetDataToScreen();
		m_wndStatusLabel.SetWindowText(_T("Bạn đang sửa phác đồ ...."));
	}
	else
		m_wndStatusLabel.SetWindowText(_T("Bạn đang thêm mới phác đồ ...."));
	m_wndStatusLabel.SetHyperlink(true);

}
void CHMSPhacDoInforDlg::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndCategory.GetDlgCtrlID(), m_szCategoryKey);
	DDX_Text(pDX, m_wndTenPhacDo.GetDlgCtrlID(), m_szTenPhacDo);
	DDX_Text(pDX, m_wndNote.GetDlgCtrlID(), m_szNote);
	DDX_Text(pDX, m_wndNumberDays.GetDlgCtrlID(), m_nNumberDays);
	DDX_Text(pDX, m_wndVersion.GetDlgCtrlID(), m_szVersion);
	DDX_TextEx(pDX, m_wndApplyDate.GetDlgCtrlID(), m_szApplyDate);

}
void CHMSPhacDoInforDlg::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Category")] =  m_szCategoryKey;
	m_jData[_T("TenPhacDo")] =  m_szTenPhacDo;
	m_jData[_T("Note")] =  m_szNote;
	m_jData[_T("NumberDays")] =  m_nNumberDays;
	m_jData[_T("Version")] =  m_szVersion;
	m_jData[_T("ApplyDate")] =  m_szApplyDate;
	}
	else
	{
			
	m_jData[_T("Category")].GetValue(m_szCategoryKey);
	m_jData[_T("TenPhacDo")].GetValue(m_szTenPhacDo);
	m_jData[_T("Note")].GetValue(m_szNote);
	m_jData[_T("NumberDays")].GetValue(m_nNumberDays);
	m_jData[_T("Version")].GetValue(m_szVersion);
	m_jData[_T("ApplyDate")].GetValue(m_szApplyDate);
	}

}
void CHMSPhacDoInforDlg::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL,tmpStr;
	szSQL.Format(_T("SELECT * FROM hms_phacdo where phacdo_id=%ld"), m_nID);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("ten_phacdo"), m_szTenPhacDo);
		rs.GetValue(_T("note"), m_szNote);
		rs.GetValue(_T("version"), m_szVersion);
		rs.GetValue(_T("category_id"), m_szCategoryKey);
		rs.GetValue(_T("apply_date"), m_szApplyDate);
		rs.GetValue(_T("so_ngay_dtri"), m_nNumberDays);
		rs.GetValue(_T("isactive"), tmpStr);
		if(tmpStr== _T("Y"))
			m_bisActive= true;
		else
			m_bisActive = false;
		
		UpdateData(false);
	}

}
void CHMSPhacDoInforDlg::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CHMSPhacDoInforDlg::SetDefaultValues(){

	m_szCategoryKey.Empty();
	m_szTenPhacDo.Empty();
	m_szNote.Empty();
	m_nNumberDays=0;
	m_szVersion.Empty();
	m_szApplyDate.Empty();
	m_bisActive=FALSE;

}
int CHMSPhacDoInforDlg::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 4, -1);
 			SetDefaultValues();
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 4, -1);
 			break;
 		case VM_VIEW: 
 			EnableControls(FALSE);
 			EnableButtons(FALSE, 0, 4, -1);
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
void CHMSPhacDoInforDlg::OnCategorySelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPhacDoInforDlg::OnCategorySelendok(){
	 
}
/*void CHMSPhacDoInforDlg::OnCategorySetfocus(){
	
}*/
/*void CHMSPhacDoInforDlg::OnCategoryKillfocus(){
	
}*/
long CHMSPhacDoInforDlg::OnCategoryLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndCategory.IsSearchKey() && !m_szCategoryKey.IsEmpty())
	 szWhere.Format(_T(" and id='%s' "), m_szCategoryKey);
	m_wndCategory.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT id as id, name as name FROM hms_phacdo_category WHERE 1=1 %s ORDER BY id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndCategory.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CHMSPhacDoInforDlg::OnCategoryAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSPhacDoInforDlg::OnTenPhacDoChange(){
	
} */
/*void CHMSPhacDoInforDlg::OnTenPhacDoSetfocus(){
	
} */
/*void CHMSPhacDoInforDlg::OnTenPhacDoKillfocus(){
	
} */
int CHMSPhacDoInforDlg::OnTenPhacDoCheckValue(){
	return 0;
} 
/*void CHMSPhacDoInforDlg::OnNoteChange(){
	
} */
/*void CHMSPhacDoInforDlg::OnNoteSetfocus(){
	
} */
/*void CHMSPhacDoInforDlg::OnNoteKillfocus(){
	
} */
int CHMSPhacDoInforDlg::OnNoteCheckValue(){
	return 0;
} 
/*void CHMSPhacDoInforDlg::OnNumberDaysChange(){
	
} */
/*void CHMSPhacDoInforDlg::OnNumberDaysSetfocus(){
	
} */
/*void CHMSPhacDoInforDlg::OnNumberDaysKillfocus(){
	
} */
int CHMSPhacDoInforDlg::OnNumberDaysCheckValue(){
	return 0;
} 
/*void CHMSPhacDoInforDlg::OnVersionChange(){
	
} */
/*void CHMSPhacDoInforDlg::OnVersionSetfocus(){
	
} */
/*void CHMSPhacDoInforDlg::OnVersionKillfocus(){
	
} */
int CHMSPhacDoInforDlg::OnVersionCheckValue(){
	return 0;
} 
/*void CHMSPhacDoInforDlg::OnApplyDateChange(){
	
} */
/*void CHMSPhacDoInforDlg::OnApplyDateSetfocus(){
	
} */
/*void CHMSPhacDoInforDlg::OnApplyDateKillfocus(){
	
} */
int CHMSPhacDoInforDlg::OnApplyDateCheckValue(){

	return 1;
}
void CHMSPhacDoInforDlg::OnApplySelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnSaveHMSPhacDoInforDlg();
	
} 
#include "VIMESGeneralSetupDialog.h"
void CHMSPhacDoInforDlg::OnCategoryLabelSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CVIMESGeneralSetupDialog dlg(this, _T("hms_phacdo_category"), _T("id"), _T("name"), false);
	dlg.DoModal();
	
} 
void CHMSPhacDoInforDlg::OnisActiveSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
int CHMSPhacDoInforDlg::OnAddHMSPhacDoInforDlg(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSPhacDoInforDlg::OnEditHMSPhacDoInforDlg(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSPhacDoInforDlg::OnDeleteHMSPhacDoInforDlg(){
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
 		OnCancelHMSPhacDoInforDlg();
 	}
	return 0;
}
int CHMSPhacDoInforDlg::OnSaveHMSPhacDoInforDlg(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
 	CString szSQL;
	CString szActive;
	szActive= _T("N");
	if(m_bisActive)
		szActive= _T("Y");

 	if(GetMode() == VM_ADD){
		
		szSQL.Format(_T("INSERT INTO hms_phacdo(  ") \
					_T("		createdby, updatedby, ten_phacdo,note,version,category_id,apply_date,so_ngay_dtri,isactive   ") \
					_T("		)   ") \
					_T(" VALUES ('%s', '%s', '%s', ") \
					_T("		'%s', '%s', '%s', to_date('%s', 'yyyy/mm/dd hh24:mi:ss'),%d,'%s') "),pMF->GetCurrentUser(),
						pMF->GetCurrentUser(), m_szTenPhacDo, m_szNote, 
						m_szVersion, m_szCategoryKey, m_szApplyDate, m_nNumberDays,szActive );
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
 		szSQL.Format(_T(" UPDATE hms_phacdo  ") \
						_T("	SET  updatedby='%s', updateddate=current_timestamp,") \
						_T("		ten_phacdo='%s', note='%s',so_ngay_dtri=%d,apply_date=to_date('%s', 'yyyy/mm/dd hh24:mi:ss'),category_id='%s',version='%s',isactive='%s'  ") \
						_T("	WHERE phacdo_id =%ld "), pMF->GetCurrentUser(), m_szTenPhacDo, m_szNote,
							m_nNumberDays, m_szApplyDate, m_szCategoryKey, m_szVersion,szActive,  m_nID );
 	}
 //_msg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
 		//OnHMSPhacDoInforDlgListLoadData();
 		//SetMode(VM_VIEW);
		OnOK();
 	}
 	else
 	{
 	}
 	return ret;
}
int CHMSPhacDoInforDlg::OnCancelHMSPhacDoInforDlg(){
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
int CHMSPhacDoInforDlg::OnHMSPhacDoInforDlgListLoadData(){
	return 0;
}
