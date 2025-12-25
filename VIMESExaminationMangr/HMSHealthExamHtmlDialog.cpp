#include "HMSHealthExamHtmlDialog.h"
#include "HMSMainFrame.h"
#include "resource.h"
#include <sstream>

static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSHealthExamHtmlDialog* )pWnd)->OnListSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnListSelendokFnc(CWnd *pWnd){
	((CHMSHealthExamHtmlDialog *)pWnd)->OnListSelendok();
}
/*static void _OnListSetfocusFnc(CWnd *pWnd){
	((CHMSHealthExamHtmlDialog *)pWnd)->OnListKillfocus();
}*/
/*static void _OnListKillfocusFnc(CWnd *pWnd){
	((CHMSHealthExamHtmlDialog *)pWnd)->OnListKillfocus();
}*/
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSHealthExamHtmlDialog *)pWnd)->OnListLoadData();
}



static void _OnRelDiseaseSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSHealthExamHtmlDialog* )pWnd)->OnRelDiseaseSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnRelDiseaseSelendokFnc(CWnd *pWnd){
	((CHMSHealthExamHtmlDialog *)pWnd)->OnRelDiseaseSelendok();
}
/*static void _OnRelDiseaseSetfocusFnc(CWnd *pWnd){
	((CHMSHealthExamHtmlDialog *)pWnd)->OnRelDiseaseKillfocus();
}*/
/*static void _OnRelDiseaseKillfocusFnc(CWnd *pWnd){
	((CHMSHealthExamHtmlDialog *)pWnd)->OnRelDiseaseKillfocus();
}*/

static void _OnRelDiseaseCheckValueFnc(CWnd *pWnd){
	((CHMSHealthExamHtmlDialog *)pWnd)->OnRelDiseaseCheckValue();
}

static long _OnRelDiseaseLoadDataFnc(CWnd *pWnd){
	return ((CHMSHealthExamHtmlDialog *)pWnd)->OnRelDiseaseLoadData();
}

static void _OnSettingSelectFnc(CWnd *pWnd){
	CHMSHealthExamHtmlDialog *pVw = (CHMSHealthExamHtmlDialog *)pWnd;
	pVw->OnSettingSelect();
} 


static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSHealthExamHtmlDialog *pVw = (CHMSHealthExamHtmlDialog *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnUpdateSelectFnc(CWnd *pWnd){
	CHMSHealthExamHtmlDialog *pVw = (CHMSHealthExamHtmlDialog *)pWnd;
	pVw->OnUpdateSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSHealthExamHtmlDialog *pVw = (CHMSHealthExamHtmlDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSHealthExamHtmlDialog *pVw = (CHMSHealthExamHtmlDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CHMSHealthExamHtmlDialog *pVw = (CHMSHealthExamHtmlDialog *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSHealthExamHtmlDialog *pVw = (CHMSHealthExamHtmlDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSHealthExamHtmlDialogFnc(CWnd *pWnd){
	 return ((CHMSHealthExamHtmlDialog*)pWnd)->OnAddHMSHealthExamHtmlDialog();
} 
static int _OnEditHMSHealthExamHtmlDialogFnc(CWnd *pWnd){
	 return ((CHMSHealthExamHtmlDialog*)pWnd)->OnEditHMSHealthExamHtmlDialog();
} 
static int _OnDeleteHMSHealthExamHtmlDialogFnc(CWnd *pWnd){
	 return ((CHMSHealthExamHtmlDialog*)pWnd)->OnDeleteHMSHealthExamHtmlDialog();
} 
static int _OnSaveHMSHealthExamHtmlDialogFnc(CWnd *pWnd){
	 return ((CHMSHealthExamHtmlDialog*)pWnd)->OnSaveHMSHealthExamHtmlDialog();
} 
static int _OnCancelHMSHealthExamHtmlDialogFnc(CWnd *pWnd){
	 return ((CHMSHealthExamHtmlDialog*)pWnd)->OnCancelHMSHealthExamHtmlDialog();
} 
CHMSHealthExamHtmlDialog::CHMSHealthExamHtmlDialog(CWnd *pParent, CString szType):
	CGuiDialog(pParent){
	
	m_nDlgWidth = 900;
	m_nDlgHeight = 605;
	SetDefaultValues();
	m_szType = _T("KSK_CHUNG");
	m_nOptIdx = 0;
}
CHMSHealthExamHtmlDialog::~CHMSHealthExamHtmlDialog(){
}
void CHMSHealthExamHtmlDialog::OnCreateComponents(){
	m_wndList.Create(this,5, 5, 175, 545); 
	m_wndHtml.Create(WS_CHILD|WS_VISIBLE|WS_BORDER, CRect(180, 5, 995, 545), this, 0); 
	m_wndRelDiseaseLabel.Create(this, _T("Bệnh kèm theo"), 70, 550, 165, 575);
	m_wndRelDisease.Create(this,180, 550, 994, 600, TRUE, FALSE, TRUE); 
	m_wndSetting.Create(this, _T("Setting"), 5, 605, 95, 635);
	m_wndAdd.Create(this, _T("&Add para-clinical"), 405, 605, 525, 635);
	m_wndUpdate.Create(this, _T("&Update"), 530, 605, 620, 635);
	m_wndSave.Create(this, _T("&Save"), 625, 605, 715, 635);
	m_wndCancel.Create(this, _T("&Cancel"), 720, 605, 810, 635);
	m_wndPrint.Create(this, _T("&Print"), 815, 605, 905, 635);
	m_wndClose.Create(this, _T("&Close"), 910, 605, 1000, 635);


}
void CHMSHealthExamHtmlDialog::OnInitializeComponents(){
	
	ModifyStyle(DS_MODALFRAME, WS_CAPTION|WS_MINIMIZEBOX|WS_MAXIMIZEBOX|WS_SYSMENU|WS_DLGFRAME);

	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndList.InsertColumn(0, _T("ID"), CFMT_TEXT, 0);
	m_wndList.InsertColumn(1, _T("Kiểu khám"), CFMT_TEXT, 165);
	m_wndList.InsertColumn(2, _T(""), CFMT_TEXT, 0);//type

	//m_wndRelDisease.InsertColumn(0, _T("ID"), CFMT_TEXT, 40);
	//m_wndRelDisease.InsertColumn(1, _T("Order Date"), CFMT_DATETIME, 140);//type

	m_wndSetting.ModifyStyle(WS_TABSTOP, 0);
	m_wndAdd.ModifyStyle(WS_TABSTOP, 0);
}
void CHMSHealthExamHtmlDialog::OnSetWindowEvents(){
	
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
	

	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr;
	m_wndSetting.SetEvent(WE_CLICK, _OnSettingSelectFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndUpdate.SetEvent(WE_CLICK, _OnUpdateSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);

	
	CString szFile;
	szFile.Format(_T("./Reports/HMS/%s.HTML"), m_szType);
	m_wndHtml.Load(szFile);

	m_nDocumentNo = pMF->m_nDocumentNo;
	szSQL.Format(_T("HMS_EXM_TESTREF_ITEM_CREATE(%ld)"), m_nDocumentNo);
	pMF->ExecDML(szSQL);

	GetDataToScreen();
	
	m_wndHtml.EnableControls(FALSE);	
	//m_wndList.SetEvent(WE_SEL, _OnListSelendokFnc);
	//m_wndList.SetEvent(WE_SETFOCUS, _OnListSetfocusFnc);
	//m_wndList.SetEvent(WE_KILLFOCUS, _OnListKillfocusFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	//m_wndList.SetEvent(WE_ADDNEW, _OnListAddNewFnc);

	m_wndRelDisease.SetEvent(WE_SELCHANGE, _OnRelDiseaseSelectChangeFnc);
	m_wndRelDisease.SetEvent(WE_SELENDOK, _OnRelDiseaseSelendokFnc);
	m_wndRelDisease.SetEvent(WE_LOADDATA, _OnRelDiseaseLoadDataFnc);
	m_wndRelDisease.SetEvent(WE_CHECKVALUE, _OnRelDiseaseCheckValueFnc);

	OnListLoadData();


	AddLayoutControl(&m_wndHtml, WS_RESIZEX|WS_RESIZEY, 0, 0, 100, 100);
	AddLayoutControl(&m_wndUpdate, WS_REPOSY, 0, 100, 0, 0);
	AddLayoutControl(&m_wndSave, WS_REPOSY, 0, 100, 0, 0);
	AddLayoutControl(&m_wndCancel, WS_REPOSY, 0, 100, 0, 0);
	AddLayoutControl(&m_wndPrint, WS_REPOSY, 0, 100, 0, 0);
	AddLayoutControl(&m_wndClose, WS_REPOSY, 0, 100, 0, 0);

	
}
void CHMSHealthExamHtmlDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndRelDisease.GetDlgCtrlID(), m_szRelDisease);
}
void CHMSHealthExamHtmlDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	}
	else
	{
			
	}

}
void CHMSHealthExamHtmlDialog::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szDate, szTemp;
	m_nDocumentNo = pMF->m_nDocumentNo;
	m_szDeptID = pMF->GetDepartmentID();
	m_nRefIndex = pMF->m_nRefIndex;
	m_nRoomID = pMF->m_nRoomID;
	
	//m_nDocumentNo = 17001023;
	m_wndHtml.m_szType = m_szType;
	m_wndHtml.m_nDocumentNo = m_nDocumentNo;
	m_wndHtml.m_szDeptID = m_szDeptID;
	m_wndHtml.m_nRefIndex = m_nRefIndex;
	m_wndHtml.m_nRoomID = m_nRoomID;
	m_wndHtml.m_nOptIdx = 0;
	//if(!m_wndHtml.LoadData())
	{
		LoadBasicInfo();
	}
//	CString szSQL;
	szSQL.Format(_T("SELECT hd_reldisease FROM hms_doc WHERE hd_docno=%ld"), m_nDocumentNo);
//	CRecord rs(&pMF->m_db);
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("hd_reldisease"), m_szRelDisease);

	SetMode(VM_VIEW);
}
void CHMSHealthExamHtmlDialog::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CHMSHealthExamHtmlDialog::SetDefaultValues(){
	m_szRelDisease.Empty();
}
int CHMSHealthExamHtmlDialog::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 1,2, -1);
 			SetDefaultValues();
			m_szRelDisease.Empty();
			m_wndRelDisease.EnableWindow(FALSE);
			m_wndHtml.EnableControls(TRUE);
			if(m_szType == _T("TYC_CAMKETMO") || m_szType == _T("TYC_TUNGUYENDIEUTRI"))
			{
				
			}
			else
			{
				m_wndHtml.EnableControl(_T("PATIENT_NAME"), false);
				m_wndHtml.EnableControl(_T("YOB"), false);
				m_wndHtml.EnableControl(_T("GENDER"), false);
				m_wndHtml.EnableControl(_T("MALE"), false);
				m_wndHtml.EnableControl(_T("FEMALE"), false);
				m_wndHtml.EnableControl(_T("ETHNIC"), false);
				m_wndHtml.EnableControl(_T("NATION"), false);
				m_wndHtml.EnableControl(_T("CARD_ID"), false);
				//m_wndHtml.EnableControl(_T("PHONE"), false);
				m_wndHtml.EnableControl(_T("INS_CARD_NO"), false);
				//m_wndHtml.EnableControl(_T("WORK_PLACE"), false);
				//m_wndHtml.EnableControl(_T("ADDRESS"), false);
				m_wndHtml.EnableControl(_T("PATIENT_NO"), false);
				m_wndHtml.EnableControl(_T("DOC_NO"), false);
				m_wndHtml.EnableControl(_T("RANK"), false);
				m_wndHtml.EnableControl(_T("POSITION"), false);
				//m_wndHtml.EnableControl(_T("ORG_ADDRESS"), false);
				m_wndHtml.EnableControl(_T("OBJECT"), false);
			}

 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 1, 2, -1);
			m_wndHtml.EnableControls(TRUE);
			if(m_szType == _T("TYC_CAMKETMO") || m_szType == _T("TYC_TUNGUYENDIEUTRI"))
			{
				
			}
			else
			{
				m_wndHtml.EnableControl(_T("PATIENT_NAME"), false);
				m_wndHtml.EnableControl(_T("YOB"), false);
				m_wndHtml.EnableControl(_T("GENDER"), false);
				m_wndHtml.EnableControl(_T("MALE"), false);
				m_wndHtml.EnableControl(_T("FEMALE"), false);
				m_wndHtml.EnableControl(_T("ETHNIC"), false);
				m_wndHtml.EnableControl(_T("NATION"), false);
				m_wndHtml.EnableControl(_T("CARD_ID"), false);
				//m_wndHtml.EnableControl(_T("PHONE"), false);
				m_wndHtml.EnableControl(_T("INS_CARD_NO"), false);
				//m_wndHtml.EnableControl(_T("WORK_PLACE"), false);
				//m_wndHtml.EnableControl(_T("ADDRESS"), false);
				m_wndHtml.EnableControl(_T("PATIENT_NO"), false);
				m_wndHtml.EnableControl(_T("DOC_NO"), false);
				m_wndHtml.EnableControl(_T("RANK"), false);
				m_wndHtml.EnableControl(_T("POSITION"), false);
				//m_wndHtml.EnableControl(_T("ORG_ADDRESS"), false);
				m_wndHtml.EnableControl(_T("OBJECT"), false);
				m_wndHtml.EnableControl(_T("BENH_LQ"), false);
			}
			if(m_szType == _T("KSK_CHANDOANTONGQUAT"))
			{
				CString szValue;
				m_wndHtml.GetValue(_T("CDTONGQUAT"), szValue);
				_tprintf(_T("\nszValue: %s\n"), szValue);
				if(szValue.IsEmpty())
				{
					szSQL.Format(_T("SELECT hd_conclusion FROM hms_doc WHERE hd_docno=%ld"), m_nDocumentNo);
					rs.ExecSQL(szSQL);
					rs.GetValue(_T("hd_conclusion"), szValue);
					m_wndHtml.SetValue(_T("CDTONGQUAT"), szValue);
				}
			}
 			break;
 		case VM_VIEW: 
 			EnableControls(FALSE);
 			EnableButtons(FALSE, 1, 2, -1);
			m_wndHtml.EnableControls(FALSE);
			m_wndHtml.UpdateData(true);
 			break;
 		case VM_NONE: 
 			EnableControls(FALSE);
 			EnableButtons(TRUE, 0, -1);
 			SetDefaultValues();
 			break;
 		};
		m_wndClose.EnableWindow(TRUE);
		m_wndAdd.ShowWindow(SW_HIDE);
 		UpdateData(FALSE);
 		return nOldMode;
}


void CHMSHealthExamHtmlDialog::OnListSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	if(nNewItemSel < 0)
		return;
	int nMode = GetMode();
	pMF->BeginWaitCursor();
	if(nMode ==  VM_EDIT)
	{
 		if(!IsValidateData())
 			return;
		m_wndHtml.m_nOptIdx = 0;
		int retMsg = ShowMessageBox(_T("Thông tin khám chưa được lưu. Bạn có muốn lưu không?(Y/N)"), MB_YESNOCANCEL);
		if(retMsg == IDYES)
		{
			if(!m_wndHtml.SaveData(m_nDocumentNo, false))
				ShowMessageBox(_T("Không lưu được thông tin khám"));
		}
	}
 	CString szFile;
	m_szType = m_wndList.GetItemText(nNewItemSel, 0);
	szFile.Format(_T("./Reports/HMS/%s.HTML"), m_szType);
	m_wndHtml.Load(szFile);
	GetDataToScreen();
	m_nOptIdx = 0;
	SetMode(nMode);
	pMF->EndWaitCursor();

} 
void CHMSHealthExamHtmlDialog::OnListSelendok(){
	UpdateData();
 	CString szFile;
//	szFile.Format(_T("./Reports/HMS/%s.HTML"), m_wndList.GetCurrent(1));
	m_wndHtml.m_nOptIdx = 0;
	m_wndHtml.Load(szFile);
	GetDataToScreen();
	m_wndHtml.EnableControls(FALSE);	
}
/*void CHMSHealthExamHtmlDialog::OnListSetfocus(){
	
}*/
/*void CHMSHealthExamHtmlDialog::OnListKillfocus(){
	
}*/
long CHMSHealthExamHtmlDialog::OnListLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
//	return pMF->LoadSelectionList(&m_wndList, _T("Html_Sheet"), m_szListKey);

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szId;
	m_wndList.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ss_id='HMS_HEALTHEXAM_SHEETS' %s ORDER BY ss_index, id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		rs.GetValue(_T("id"), szId);
		int nItem = m_wndList.AddItems(
			szId, 
			rs.GetValue(_T("name")),
			_T("I"),
			NULL);
		if(szId == _T("KSK_KHAMCACBOPHAN") || szId == _T("KSK_CHANDOANBOPHAN") || szId == _T("KSK_CHANDOANTONGQUAT"))
		{
			m_wndList.SetItemBkColor(nItem, RGB(0, 128, 192));
			m_wndList.SetItemTextColor(nItem, COLOR_WHITE);
		}
		rs.MoveNext();
	}

	return nCount;

	return 0;
}
/*void CHMSHealthExamHtmlDialog::OnListAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */ 






void CHMSHealthExamHtmlDialog::OnRelDiseaseSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	if(nNewItemSel < 0)
		return;
	

} 
void CHMSHealthExamHtmlDialog::OnRelDiseaseSelendok(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	pMF->BeginWaitCursor();
	UpdateData();
 	CString szFile;
	szFile.Format(_T("./Reports/HMS/%s.HTML"), m_szType);
	m_wndHtml.m_nOptIdx = 0;
	m_wndHtml.Load(szFile);
	GetDataToScreen();
	m_wndHtml.EnableControls(FALSE);	
	pMF->EndWaitCursor();
}
/*void CHMSHealthExamHtmlDialog::OnRelDiseaseSetfocus(){
	
}*/
/*void CHMSHealthExamHtmlDialog::OnRelDiseaseKillfocus(){
	
}*/
long CHMSHealthExamHtmlDialog::OnRelDiseaseLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

	return 0;
}
/*void CHMSHealthExamHtmlDialog::OnRelDiseaseAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */ 


void CHMSHealthExamHtmlDialog::OnRelDiseaseCheckValue(){
	m_wndHtml.SetValue(_T("BENH_LQ"), m_szRelDisease);
}

#include "HMSExmTestSettingDialog.h"
void CHMSHealthExamHtmlDialog::OnSettingSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	if(!pMF->CheckPermission(_T("KSK.01")))
	{
		ShowMessageBox(_T("Permission denied"));
		return;
	}
	CHMSExmTestSettingDialog dlg(this);
	dlg.DoModal();
}


void CHMSHealthExamHtmlDialog::OnAddSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	SetMode(VM_ADD);
	
}

void CHMSHealthExamHtmlDialog::OnUpdateSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	SetMode(VM_EDIT);
}



void CHMSHealthExamHtmlDialog::OnSaveSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return;
 	if(!IsValidateData())
 		return;
	m_wndHtml.m_nOptIdx = 0;

	CString szSQL;
	szSQL.Format(_T("UPDATE hms_doc SET hd_reldisease = '%s' WHERE hd_docno = %ld "), m_szRelDisease, m_nDocumentNo);
	pMF->ExecSQL(szSQL);
	
	
	if(m_szType != _T("KSK_CHANDOANBOPHAN") && m_szType != _T("KSK_KHAMCACBOPHAN"))
			{

				dom::element root = m_wndHtml.GetRootElement();
			CDbfMap emrTbl;
			emrTbl.AddField(_T("hde_type"), dfText, 20);
			emrTbl.AddField(_T("hde_docno"), dfLong);
			emrTbl.AddField(_T("hde_deptid"), dfText, 10);
			emrTbl.AddField(_T("hde_refidx"), dfLong);
			emrTbl.AddField(_T("hde_roomid"), dfInteger);
			emrTbl.AddField(_T("hde_userid"), dfText, 20);
			emrTbl.AddField(_T("hde_name"), dfText, 20);
			emrTbl.AddField(_T("hde_value"), dfText, 2000);
			emrTbl.AddField(_T("hde_optidx"), dfLong);

			emrTbl.SetValue(_T("hde_type"), m_szType);
			emrTbl.SetValue(_T("hde_docno"), m_nDocumentNo);
			emrTbl.SetValue(_T("hde_deptid"), m_szDeptID);
			_tprintf(_T("\nm_nRefIndex: %ld\n"),  m_nRefIndex);
			emrTbl.SetValue(_T("hde_refidx"), m_nRefIndex);
			emrTbl.SetValue(_T("hde_roomid"), m_nRoomID);
			emrTbl.SetValue(_T("hde_optidx"), m_nOptIdx);
			
			emrTbl.SetValue(_T("hde_userid"), pMF->GetCurrentUser());

			htmlayout::named_values values;
			if(htmlayout::get_values(root, values ))
			{
				std::wstring s;
				for ( htmlayout::named_values::const_iterator it = values.begin(); it != values.end() ; ++it )
				{
					s += (*it).first;
					s += L"=";
					s += (*it).second.to_string();
					s += L"\n";

					std::wstring name = (*it).first;
					std::wstring value =(*it).second.to_string();
				_tprintf(_T("\r\n%s"), name.c_str()); 
					dom::element t = root.find_first("[name='%S']",name.c_str()); 
					if( !t.get_style_attribute("behavior") )
						continue;
					set_value(t, (*it).second);
					t.set_attribute("value", value.c_str());
					const wchar_t* disabled = t.get_attribute("disabled");
					
					if(disabled != NULL)
						continue;

					CString szType;
					szType.Format(_T("%s"), name.c_str());
					if (value.length() > 0  && (szType.Left(5) == _T("KHAM_") || szType.Left(8) == _T("KETLUAN_")))
					{
						if(szType.Left(5) == _T("KHAM_"))
						{
							emrTbl.SetValue(_T("hde_type"), _T("KSK_KHAMCACBOPHAN"));
						}
						if(szType.Left(8) == _T("KETLUAN_"))
						{
							emrTbl.SetValue(_T("hde_type"), _T("KSK_CHANDOANBOPHAN"));
						}
						emrTbl.SetValue(_T("hde_name"), name.c_str());
						emrTbl.SetValue(_T("hde_value"), value.c_str());
							szSQL.Format(_T("HMS_DOC_EMR_CREATE(%s) "), emrTbl.FormatSQL());
							_tprintf(_T("\r\nSQL:%s"), szSQL);
							pMF->ExecDML(szSQL);
					}

				}

			}
		}
	
	if(m_wndHtml.SaveData(m_nDocumentNo, false))
	{
		if(m_szType == _T("KSK_CHANDOANBOPHAN") || m_szType == _T("KSK_KHAMCACBOPHAN"))
		{
			dom::element root = m_wndHtml.GetRootElement();
		
		
			CDbfMap emrTbl;
			emrTbl.AddField(_T("hde_type"), dfText, 20);
			emrTbl.AddField(_T("hde_docno"), dfLong);
			emrTbl.AddField(_T("hde_deptid"), dfText, 10);
			emrTbl.AddField(_T("hde_refidx"), dfLong);
			emrTbl.AddField(_T("hde_roomid"), dfInteger);
			emrTbl.AddField(_T("hde_userid"), dfText, 20);
			emrTbl.AddField(_T("hde_name"), dfText, 20);
			emrTbl.AddField(_T("hde_value"), dfText, 2000);
			emrTbl.AddField(_T("hde_optidx"), dfLong);

			emrTbl.SetValue(_T("hde_type"), m_szType);
			emrTbl.SetValue(_T("hde_docno"), m_nDocumentNo);
			emrTbl.SetValue(_T("hde_deptid"), m_szDeptID);
			emrTbl.SetValue(_T("hde_refidx"), m_nRefIndex);
			emrTbl.SetValue(_T("hde_roomid"), m_nRoomID);
			emrTbl.SetValue(_T("hde_optidx"), m_nOptIdx);
			
			emrTbl.SetValue(_T("hde_userid"), pMF->GetCurrentUser());

			htmlayout::named_values values;
			if(htmlayout::get_values(root, values ))
			{
				std::wstring s;
				for ( htmlayout::named_values::const_iterator it = values.begin(); it != values.end() ; ++it )
				{
					s += (*it).first;
					s += L"=";
					s += (*it).second.to_string();
					s += L"\n";

					std::wstring name = (*it).first;
					std::wstring value =(*it).second.to_string();
					_tprintf(_T("\r\nType:%s"), name.c_str()); 
					dom::element t = root.find_first("[name='%S']",name.c_str()); 
					if( !t.get_style_attribute("behavior") )
						continue;
					set_value(t, (*it).second);
					t.set_attribute("value", value.c_str());
					const wchar_t* disabled = t.get_attribute("disabled");
					
					if(disabled != NULL)
						continue;

					if (value.length() > 0 )
					{
						CString szType;
						szType.Format(_T("%s"), name.c_str());
						szType.Replace(_T("KETLUAN_"), _T(""));
						szType.Replace(_T("KHAM_"), _T(""));
		_tprintf(_T("\r\n%s"), szType);
						emrTbl.SetValue(_T("hde_type"), szType);

						emrTbl.SetValue(_T("hde_name"), name.c_str());
						emrTbl.SetValue(_T("hde_value"), value.c_str());
							szSQL.Format(_T("HMS_DOC_EMR_CREATE(%s) "), emrTbl.FormatSQL());
					_tprintf(_T("\r\n%s"), szSQL);
							pMF->ExecDML(szSQL);
					}

				}
		     
			}
			
	
		}
		SetMode(VM_VIEW);
	}
	
} 
void CHMSHealthExamHtmlDialog::OnCancelSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnCancelHMSHealthExamHtmlDialog();
} 
void CHMSHealthExamHtmlDialog::OnPrintSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szFile;
	m_wndHtml.OnFilePrint();
} 
void CHMSHealthExamHtmlDialog::OnCloseSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnCancel();
} 
int CHMSHealthExamHtmlDialog::OnAddHMSHealthExamHtmlDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSHealthExamHtmlDialog::OnEditHMSHealthExamHtmlDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSHealthExamHtmlDialog::OnDeleteHMSHealthExamHtmlDialog(){
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
 		OnCancelHMSHealthExamHtmlDialog();
 	}
	return 0;
}
int CHMSHealthExamHtmlDialog::OnSaveHMSHealthExamHtmlDialog(){
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
 		//OnHMSHealthExamHtmlDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSHealthExamHtmlDialog::OnCancelHMSHealthExamHtmlDialog(){
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
int CHMSHealthExamHtmlDialog::OnHMSHealthExamHtmlDialogListLoadData(){
	return 0;
}

BOOL CHMSHealthExamHtmlDialog::PreTranslateMessage(MSG* pMsg)
{
	// TODO: Add your specialized code here and/or call the base class

	if(pMsg->hwnd == m_wndHtml.GetSafeHwnd())
	{
		return m_wndHtml.PreTranslateMessage(pMsg);
	}
	
	return CGuiDialog::PreTranslateMessage(pMsg);
}
void CHMSHealthExamHtmlDialog::LoadBasicInfo(){
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CRecord rs2(&pMF->m_db);
	CString szSQL, tmpStr, szDate, szTemp, szType = m_szType, szWhere;
	m_nOptIdx = 0;
	{

		

		szTemp = pMF->GetSysDate();
		szDate.Format(_T("Hà Nội, ngày %s tháng %s năm %s"), szTemp.Right(2), szTemp.Mid(5,2), szTemp.Left(4));
		m_wndHtml.SetValue(_T("NGAY_KY"), szDate);
		LoadDiagnostic();
		LoadDeptRoomBed();
		LoadClinicalRecord();

		szSQL.Format(_T("SELECT hd_docno as sohoso, hd_patientno as mabenhnhan, hp_surname||' '||hp_midname||' '||hp_firstname as pname, ") \
			_T(" sys_sel_getname('sys_sex', hp_sex) as gender, hp_sex, extract(year from hp_birthdate) as yob, ") \
			_T(" (select ss_desc from sys_sel where ss_id = 'hms_rank' and ss_code = hp_rank) as rank, ") \
			_T(" (select ss_desc from sys_sel where ss_id = 'hms_position' and ss_code = hp_position) as position, ") \
			_T(" get_objectname(hd_object) as object, hms_getaddress(nvl(hd_provid, hp_provid), nvl(hd_distid, hp_distid), nvl(hd_villid, hp_villid)) as quequan,") \
			_T(" sys_sel_getname('sys_ethnic', cast(hp_ethnic as nvarchar2(25))) as ethnic, hp_workplace as noilamviec,") \
			_T(" (select adc_name from ad_country where adc_country_id = hp_nationality) as pnation, hp_sin as cmt, hd_contacttel as phone, hd_cardno as theBH, ") \
			_T(" hms_getaddress(nvl(hd_provid, hp_provid), nvl(hd_distid, hp_distid), nvl(hd_villid, hp_villid)) as diachi, ") \
			_T(" (SELECT ss_desc FROM sys_sel WHERE ss_id = 'sys_occupation' AND ss_code = hp_occupation) AS occupation, ") \
			_T(" hd_admitdate AS admitdate, ") \
			_T(" hd_enddate AS enddate, hd_reldisease ") \
			_T(" FROM hms_patient , hms_doc ") \
			_T(" WHERE hd_patientno = hp_patientno and hd_docno = %ld "), m_nDocumentNo);
		
					
	_tprintf(_T("\r\n%s"), szSQL);

		rs.ExecSQL(szSQL);

		if(!rs.IsEOF())
		{
			rs.GetValue(_T("pname"), tmpStr);
			m_wndHtml.SetValue(_T("PATIENT_NAME"), tmpStr);

			rs.GetValue(_T("yob"), tmpStr);
			m_wndHtml.SetValue(_T("YOB"), tmpStr);

			rs.GetValue(_T("gender"), tmpStr);
			m_wndHtml.SetValue(_T("GENDER"), tmpStr);

			rs.GetValue(_T("hp_sex"), tmpStr);
			if(tmpStr == _T("M"))
				m_wndHtml.SetValue(_T("MALE"), _T("X"));
			else
				m_wndHtml.SetValue(_T("FEMALE"), _T("X"));
			if(tmpStr == _T("M"))
			{
				htmlayout::dom::element root = m_wndHtml.GetRootElement();
				htmlayout::dom::element el = root.find_first("[name='%S']", L"KHAM_SAN");
				el.set_html((const unsigned char*)"", 0);
				
			}

			rs.GetValue(_T("ethnic"), tmpStr);
			m_wndHtml.SetValue(_T("ETHNIC"), tmpStr);

			rs.GetValue(_T("pnation"), tmpStr);
			m_wndHtml.SetValue(_T("NATION"), tmpStr);

			rs.GetValue(_T("cmt"), tmpStr);
			m_wndHtml.SetValue(_T("CARD_ID"), tmpStr);

			rs.GetValue(_T("phone"), tmpStr);
			m_wndHtml.SetValue(_T("PHONE"), tmpStr);

			rs.GetValue(_T("theBH"), tmpStr);
			m_wndHtml.SetValue(_T("INS_CARD_NO"), tmpStr);

			rs.GetValue(_T("noilamviec"), tmpStr);
			m_wndHtml.SetValue(_T("WORK_PLACE"), tmpStr);

			rs.GetValue(_T("diachi"), tmpStr);
			m_wndHtml.SetValue(_T("ADDRESS"), tmpStr);

			rs.GetValue(_T("mabenhnhan"), tmpStr);
			m_wndHtml.SetValue(_T("PATIENT_NO"), tmpStr);

			rs.GetValue(_T("sohoso"), tmpStr);
			m_wndHtml.SetValue(_T("DOC_NO"), tmpStr);

			rs.GetValue(_T("rank"), tmpStr);
			m_wndHtml.SetValue(_T("RANK"), tmpStr);

			rs.GetValue(_T("position"), tmpStr);
			m_wndHtml.SetValue(_T("POSITION"), tmpStr);

			rs.GetValue(_T("quequan"), tmpStr);
			m_wndHtml.SetValue(_T("QUE_QUAN"), tmpStr);
			m_wndHtml.SetValue(_T("ORG_ADDRESS"), tmpStr);

			rs.GetValue(_T("object"), tmpStr);
			m_wndHtml.SetValue(_T("OBJECT"), tmpStr);
			m_wndHtml.SetValue(_T("Treatment_dept"), pMF->GetCurrentDepartmentName());

			rs.GetValue(_T("DOCTOR_NAME"), tmpStr);
			m_wndHtml.SetValue(_T("DOCTOR_NAME"), tmpStr);

			rs.GetValue(_T("occupation"), tmpStr);
			m_wndHtml.SetValue(_T("OCCUPATION"), tmpStr);

			rs.GetValue(_T("noilamviec"), tmpStr);
			m_wndHtml.SetValue(_T("WORK_PLACE"), tmpStr);

			rs.GetValue(_T("admitdate"), tmpStr);
			m_wndHtml.SetValue(_T("ADMIT_DATE"), CDateTime::Convert(tmpStr,yyyymmdd | hhmmss, ddmmyyyy | hhmmss));

			rs.GetValue(_T("enddate"), tmpStr);
			m_wndHtml.SetValue(_T("END_DATE"), CDateTime::Convert(tmpStr,yyyymmdd | hhmmss, ddmmyyyy | hhmmss));

			rs.GetValue(_T("hd_reldisease"), tmpStr);
			m_wndHtml.SetValue(_T("BENH_LQ"), tmpStr);
			rs.GetValue(_T("pkg_exam"), tmpStr);
			m_wndHtml.SetValue(_T("GOI_KHAM"), tmpStr);

			
		}
	}

	szSQL.Format(_T(" SELECT ss_desc as pkg_exam") \
_T(" FROM hms_exm_contract,") \
_T("   sys_sel,") \
_T("   hms_exm_employee") \
_T(" WHERE ss_id        ='HMS_EXM_CONTRACT_TYPE'") \
_T(" AND ss_code        =hec_type") \
_T(" AND hec_contract_id = hee_contract_id") \
_T(" and hee_docno = %ld"), pMF->m_nDocumentNo);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("pkg_exam"), tmpStr);
		m_wndHtml.SetValue(_T("GOI_KHAM"), tmpStr);
	} 
	if (m_szType == _T("KSK_CHANDOANTONGQUAT"))
	{
		szWhere.Format(_T(" AND hde_refidx = %d"), m_nRefIndex);
	}
	szSQL.Format(_T("SELECT * FROM hms_doc_emr_view WHERE hde_docno =%ld and hde_type='%s' and hde_optidx = %ld %s ORDER BY hde_date desc"), pMF->m_nDocumentNo, m_szType, m_nOptIdx, szWhere);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		CString szName, szValue;
		while(!rs.IsEOF())
		{
			rs.GetValue(_T("hde_name"), szName);
			rs.GetValue(_T("hde_value"), szValue);
			m_wndHtml.SetValue(szName, szValue);
			rs.MoveNext();
		}
	}

	LoadTests();
	LoadChandoanbophan();
	LoadChandoantongquat();
	LoadKiemtrasuckhoedinhky();
	LoadKetquaRFA();

	m_wndHtml.UpdateData(true);

}

void CHMSHealthExamHtmlDialog::LoadDiagnostic()
{
	return;
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT htr_maindisease, htr_recordno FROM hms_treatment_record where htr_docno=%ld and htr_idx=%ld"),
		m_nDocumentNo, pMF->m_nRefIndex);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		//rs.GetValue(_T("ho_diagnostic"), m_szDiagnostic);
		CString tmpStr;
		rs.GetValue(_T("htr_maindisease"), tmpStr);
		m_wndHtml.SetValue(_T("DIAGNOSTIC"), tmpStr);
		//m_wndHtml.SetValue(_T("CHAN_DOAN"), tmpStr);
		rs.GetValue(_T("htr_recordno"), tmpStr);
		m_wndHtml.SetValue(_T("RECORDNO"), tmpStr);
		//m_wndHtml.UpdateData(true);
	}
}

void CHMSHealthExamHtmlDialog::LoadDeptRoomBed()
{
	return;
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szDynPrice;
	int nCount = 0;
	int nCurSel = 0;
	int nItem;
	szSQL.Format(_T(" SELECT hb_deptid,") \
				_T("   hb_idx,") \
				_T("   hb_refidx,") \
				_T("   hb_admitdate,") \
				_T("   hb_enddate,") \
				_T("   hb_bedid,") \
				_T("   hb_roomid,") \
				_T("   hb_status,") \
				_T("   hb_doctor,") \
				_T("   hb_dynprice,") \
				_T("   hrl_name AS roomname,") \
				_T("   hbl_name AS bedname") \
				_T(" FROM hms_bed") \
				_T(" LEFT JOIN hms_roomlist") \
				_T(" ON(hrl_deptid = hb_deptid") \
				_T(" AND hrl_id    = hb_roomid)") \
				_T(" LEFT JOIN hms_bedlist") \
				_T(" ON(hbl_deptid  = hb_deptid") \
				_T(" AND hbl_roomid = hb_roomid") \
				_T(" AND hbl_id     = hb_bedid)") \
				_T(" WHERE hb_docno =%ld AND hb_idx = (select max(hb_idx) from hms_bed where hb_docno =%ld)") \
				_T(" ORDER BY hb_idx"), pMF->m_nDocumentNo, pMF->m_nDocumentNo);	
	rs.ExecSQL(szSQL);

	if(!rs.IsEOF())
	{
		m_wndHtml.SetValue(_T("DEPT"), rs.GetValue(_T("hb_deptid")));
		m_wndHtml.SetValue(_T("ROOM"), rs.GetValue(_T("hb_roomid")));
		m_wndHtml.SetValue(_T("BED"), rs.GetValue(_T("hb_bedid")));
	}
}



void CHMSHealthExamHtmlDialog::LoadClinicalRecord()
{
	return;
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szData;
	JSONVALUE jData;

	//Phần hỏi bệnh
	szSQL.Format(_T("SELECT to_char(hde_value) as hde_value FROM hms_doc_emr WHERE hde_docno=%ld and hde_type IN('BENH_AN_HB') ORDER BY hde_type, hde_refidx "), pMF->m_nDocumentNo);
	rs.ExecSQL(szSQL);
	szData.Empty();

	while(!rs.IsEOF())
	{
		rs.GetValue(_T("hde_value"), szData);
		rs.MoveNext();
	}

	if(!szData.IsEmpty())
	{
		jData.Clear();
		jData.Parse(szData);
		tmpStr.Empty();

		jData[_T("ly_do_vao_vien")].GetValue(tmpStr);
		m_wndHtml.SetValue(_T("ly_do_vao_vien"), tmpStr);
	}



	//Phần khám bệnh
	szSQL.Format(_T("SELECT to_char(hde_value) as hde_value FROM hms_doc_emr WHERE hde_docno=%ld and hde_type IN('BENH_AN_KB') ORDER BY hde_type, hde_refidx "), pMF->m_nDocumentNo);
	rs.ExecSQL(szSQL);
	szData.Empty();

	while(!rs.IsEOF())
	{
		rs.GetValue(_T("hde_value"), szData);
		rs.MoveNext();
	}

	if(!szData.IsEmpty())
	{
		jData.Clear();
		jData.Parse(szData);
		tmpStr.Empty();

	}



	//Phần kết luận
	szSQL.Format(_T("SELECT to_char(hde_value) as hde_value FROM hms_doc_emr WHERE hde_docno=%ld and hde_type IN('BENH_AN_KL') ORDER BY hde_type, hde_refidx "), pMF->m_nDocumentNo);
	rs.ExecSQL(szSQL);
	szData.Empty();

	while(!rs.IsEOF())
	{
		rs.GetValue(_T("hde_value"), szData);
		rs.MoveNext();
	}

	if(!szData.IsEmpty())
	{
		jData.Clear();
		jData.Parse(szData);
		tmpStr.Empty();

		jData[_T("chan_doan_xac_dinh")].GetValue(tmpStr);
		m_wndHtml.SetValue(_T("chan_doan_xac_dinh"), tmpStr);
	}

}



void CHMSHealthExamHtmlDialog::LoadTests()
{

	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr;
	
	if(m_szType == _T("KSK_CHANDOANBOPHAN") 
		|| m_szType == _T("KSK_CHANDOANTONGQUAT") 
		|| m_szType == _T("KSK_KETQUARFA")
		|| m_szType == _T("KSK_KIEMTRASUCKHOEDINHKY") )
		return;

	

	//Load Test
	szSQL.Format(_T(" SELECT hfl_groupid AS groupid,") \
_T("   hfg_name         AS groupname,") \
_T("   hpcl_itemid      AS itemid,") \
_T("   hfl_name         AS test_name,") \
_T("   hpcl_result      AS test_result,") \
_T("   hfl_index1       AS findex,") \
_T("   hfl_index2       AS mindex,") \
_T("   hpcl_note        AS test_note") \
_T(" FROM hms_testorder,") \
_T("   hms_testorderline,") \
_T("   hms_exm_testref_item,") \
_T("   hms_fee_list,") \
_T("   hms_fee_group") \
_T(" WHERE hpcl_docno = %ld and typeid='%s' ") \
_T(" AND hpc_orderid  = hpcl_orderid") \
_T(" AND hpc_groupid  = hfg_id") \
_T(" AND hpcl_itemid  = itemid and hpcl_docno = docno ") \
_T(" AND hfl_feeid    = hpcl_itemid") \
_T(" ORDER BY hfl_groupid,") \
_T("   hpcl_orderlineid"), m_nDocumentNo, m_szType);

	//_msg(_T("%s"), szSQL);
	rs.ExecSQL(szSQL);

	utf8::ostream os;
	CString szName, szResult;

	os.clear();
	bool bHasTest = false;
	if(!rs.IsEOF())
	{
		bHasTest = true;
	}
	CString szLine;
	int nIndex = 1, nLine=0;
	CString szOldGroup, szNewGroup, szString;
	szLine.Format(L"<td class=\"{col}\" >{name}</td>");
	while(!rs.IsEOF())
	{
		
		rs.GetValue(_T("groupid"),  szNewGroup);
		if(szNewGroup != szOldGroup)
		{
			szOldGroup = szNewGroup;
			os << L"<tr class=\"row_span\">";
			rs.GetValue(_T("groupname"), szName);
			tmpStr.Format(_T("<td class =\"colspan\" colspan=\"5\"><b>%d. %s</b></td>"), nIndex++, szName);
			os << tmpStr;
			os << L"</tr>";
			nLine = 0;
		}
		
		os << L"<tr class=\"row\">";
		//Stt
		szString = szLine;
		tmpStr.Format(_T("%d"), ++nLine);
		szString.Replace(_T("{name}"), tmpStr);
		szString.Replace(_T("{col}"), L"col1");
		os << szString;

		//Ten xet nghiem
		szString = szLine;
		rs.GetValue(_T("test_name"), tmpStr);
		szString.Replace(_T("{name}"), tmpStr);
		szString.Replace(_T("{col}"), L"col2");
		os << szString;
		//Ket qua
		szString = szLine;
		rs.GetValue(_T("test_result"), tmpStr);
		szString.Replace(_T("{name}"), tmpStr);
		szString.Replace(_T("{col}"), L"col2");
		os << szString;
		//Chi so bt
		szString = szLine;
		rs.GetValue(_T("findex"), tmpStr);
		szString.Replace(_T("{name}"), tmpStr);
		szString.Replace(_T("{col}"), L"col4");
		os << szString;
		//Ghi chu
		szString = szLine;
		rs.GetValue(_T("test_note"), tmpStr);
		szString.Replace(_T("{name}"), tmpStr);
		szString.Replace(_T("{col}"), L"col5");
		os << szString;
		os << L"</tr>";
		
		rs.MoveNext();
	}

	htmlayout::dom::element root = m_wndHtml.GetRootElement();
	htmlayout::dom::element el;
	htmlayout::dom::element eltest = root.find_first("[name='%S']", L"tests");
	htmlayout::dom::element elpacs = root.find_first("[name='%S']", L"pacs");

	if(bHasTest)
	{
		el = eltest.find_first("tbody");
		el.set_html(os.data(), os.length());
		os.clear();
	}
	else
	{
		os.clear();
		eltest.set_html(os.data(), os.length());
	}
	
	
	//Load PACS 

	//Load Test
	szSQL.Format(_T(" SELECT hfl_groupid AS groupid,") \
_T("   hfg_name         AS groupname,") \
_T("   hpcl_itemid      AS itemid,") \
_T("   hfl_name         AS item_name,") \
_T("   CASE") \
_T("     WHEN hpcl_conclusion IS NULL") \
_T("     THEN") \
_T("       (SELECT DISTINCT hpr_desc") \
_T("       FROM hms_pacs_result") \
_T("       WHERE hpr_docno = hpcl_docno") \
_T("       AND hpr_orderid =hpcl_orderid") \
_T("       AND hpr_itemid  = hpcl_itemid") \
_T("       AND hpr_name    ='Conclusion'") \
_T("       AND rownum     <= 1") \
_T("       )") \
_T("     ELSE hpcl_conclusion") \
_T("   END AS result") \
_T(" FROM hms_pacsorder,") \
_T("   hms_pacsorderline,") \
_T("   hms_exm_testref_item,") \
_T("   hms_fee_list,") \
_T("   hms_fee_group") \
_T(" WHERE hpcl_docno = %ld") \
_T(" AND typeid       ='%s'") \
_T(" AND hpc_orderid  = hpcl_orderid") \
_T(" AND hpc_groupid  = hfg_id") \
_T(" AND hpcl_itemid  = itemid and hpcl_docno = docno ") \
_T(" AND hfl_feeid    = hpcl_itemid") \
_T(" ORDER BY hfl_groupid,") \
_T("   hpcl_orderlineid") , m_nDocumentNo, m_szType);

	rs.ExecSQL(szSQL);


	os.clear();
	bool bHasPACS = false;
	if(!rs.IsEOF())
	{
		bHasPACS = true;
	}
	
	while(!rs.IsEOF())
	{
		rs.GetValue(_T("groupid"),  szNewGroup);
		if(szNewGroup != szOldGroup)
		{
			szOldGroup = szNewGroup;
		}
		rs.GetValue(_T("item_name"), szName);
		tmpStr.Format(_T("<b>%d. %s</b>"), nIndex++, szName);
		os << tmpStr;
		rs.GetValue(_T("result"), szResult);
		
		tmpStr.Format(_T("<div><b>   Kết quả:</b>%s</div>"), szResult);
		os << tmpStr;
		rs.MoveNext();
	}


	if(bHasPACS)
	{
		elpacs.set_html(os.data(), os.length());
		os.clear();
	}
	else
	{
		os.clear();
		elpacs.set_html(os.data(), os.length());

	}
}

void CHMSHealthExamHtmlDialog::LoadChandoanbophan()
{

}

void CHMSHealthExamHtmlDialog::LoadChandoantongquat()
{
	if(m_szType != _T("KSK_CHANDOANTONGQUAT"))
		return;


}

void CHMSHealthExamHtmlDialog::LoadKiemtrasuckhoedinhky()
{

}

void CHMSHealthExamHtmlDialog::LoadKetquaRFA()
{

}