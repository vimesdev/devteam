#include "HMSInsuranceCardSettingDialog.h"
#include "HMSCardViewDialog.h"
#include "HMSChangeObjectDialog.h"
#include "MainFrm.h"
/*static void _OnApplyDateChangeFnc(CWnd *pWnd){
	((CHMSInsuranceCardSettingDialog *)pWnd)->OnApplyDateChange();
} */
/*static void _OnApplyDateSetfocusFnc(CWnd *pWnd){
	((CHMSInsuranceCardSettingDialog *)pWnd)->OnApplyDateSetfocus();} */ 
/*static void _OnApplyDateKillfocusFnc(CWnd *pWnd){
	((CHMSInsuranceCardSettingDialog *)pWnd)->OnApplyDateKillfocus();
} */
static int _OnApplyDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSInsuranceCardSettingDialog *)pWnd)->OnApplyDateCheckValue();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSInsuranceCardSettingDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSInsuranceCardSettingDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSInsuranceCardSettingDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
}

static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSInsuranceCardSettingDialog*)pWnd)->OnListDeleteItem();
}

static int _OnListApplyCalcCostFnc(CWnd *pWnd){
	 return ((CHMSInsuranceCardSettingDialog*)pWnd)->OnListApplyCalcCost();
}
static int _OnListCancelCalcCostFnc(CWnd *pWnd){
	 return ((CHMSInsuranceCardSettingDialog*)pWnd)->OnListCancelCalcCost();
}
static void _OnChangeObjectSelectFnc(CWnd *pWnd){
	CHMSInsuranceCardSettingDialog *pVw = (CHMSInsuranceCardSettingDialog *)pWnd;
	pVw->OnChangeObjectSelect();
}
static void _OnChangePatientNoSelectFnc(CWnd *pWnd){
	CHMSInsuranceCardSettingDialog *pVw = (CHMSInsuranceCardSettingDialog *)pWnd;
	pVw->OnChangePatientNoSelect();
}
static void _OnAddCardSelectFnc(CWnd *pWnd){
	CHMSInsuranceCardSettingDialog *pVw = (CHMSInsuranceCardSettingDialog *)pWnd;
	pVw->OnAddCardSelect();
} 
static void _OnEditCardSelectFnc(CWnd *pWnd){
	CHMSInsuranceCardSettingDialog *pVw = (CHMSInsuranceCardSettingDialog *)pWnd;
	pVw->OnEditCardSelect();
} 
static void _OnApplySelectFnc(CWnd *pWnd){
	CHMSInsuranceCardSettingDialog *pVw = (CHMSInsuranceCardSettingDialog *)pWnd;
	pVw->OnApplySelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSInsuranceCardSettingDialog *pVw = (CHMSInsuranceCardSettingDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSInsuranceCardSettingDialogFnc(CWnd *pWnd){
	 return ((CHMSInsuranceCardSettingDialog*)pWnd)->OnAddHMSInsuranceCardSettingDialog();
} 
static int _OnEditHMSInsuranceCardSettingDialogFnc(CWnd *pWnd){
	 return ((CHMSInsuranceCardSettingDialog*)pWnd)->OnEditHMSInsuranceCardSettingDialog();
} 
static int _OnDeleteHMSInsuranceCardSettingDialogFnc(CWnd *pWnd){
	 return ((CHMSInsuranceCardSettingDialog*)pWnd)->OnDeleteHMSInsuranceCardSettingDialog();
} 
static int _OnSaveHMSInsuranceCardSettingDialogFnc(CWnd *pWnd){
	 return ((CHMSInsuranceCardSettingDialog*)pWnd)->OnSaveHMSInsuranceCardSettingDialog();
} 
static int _OnCancelHMSInsuranceCardSettingDialogFnc(CWnd *pWnd){
	 return ((CHMSInsuranceCardSettingDialog*)pWnd)->OnCancelHMSInsuranceCardSettingDialog();
} 
CHMSInsuranceCardSettingDialog::CHMSInsuranceCardSettingDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 610;
	m_nDlgHeight = 245;
	SetDefaultValues();
}
CHMSInsuranceCardSettingDialog::~CHMSInsuranceCardSettingDialog(){
}
void CHMSInsuranceCardSettingDialog::OnCreateComponents(){
	m_wndInsuranceCardInformation.Create(this, _T("Insurance Card Information"), 5, 5, 805, 535);
	m_wndApplyDateLabel.Create(this, _T("Apply Date"), 10, 30, 150, 55);
	m_wndApplyDate.Create(this,155, 30, 245, 55); 
	m_wndActive.Create(this, _T("Active"), 560, 30, 710, 55);
	m_wndList.Create(this,10, 60, 800, 500); 
	m_wndAddCard.Create(this, _T("&Add Card"), 595, 505, 695, 530);
	m_wndEditCard.Create(this, _T("&Cập nhật BHYT"), 490, 505, 590, 530);
	m_wndApply.Create(this, _T("&Apply"), 715, 30, 800, 55);
	m_wndClose.Create(this, _T("&Close"), 700, 505, 800, 530);
	m_wndChangeObject.Create(this, _T("&Change Object"), 385, 505, 485, 530);
	m_wndChangePatientNo.Create(this, _T("Change Patient No"), 10, 505, 210, 530);
	m_wndChangePatientNo.EnableWindow(true);

}
void CHMSInsuranceCardSettingDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	m_wndApplyDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndApplyDate.SetCheckValue(true);
	m_wndChangePatientNo.ModifyStyle(WS_TABSTOP, 0);

	m_wndList.InsertColumn(0, _T("Index"), CFMT_NUMBER, 80);
	m_wndList.InsertColumn(1, _T("Date"), CFMT_DATE, 85);
	m_wndList.InsertColumn(2, _T("Card No"), CFMT_TEXT, 180);
	m_wndList.InsertColumn(3, _T("%"), CFMT_NUMBER, 40);
	m_wndList.InsertColumn(4, _T("Reg Date"), CFMT_DATE, 85);
	m_wndList.InsertColumn(5, _T("Exp Date"), CFMT_DATE, 85);
	m_wndList.InsertColumn(6, _T("Off Line"), CFMT_TEXT|CFMT_CENTER, 80);
	m_wndList.InsertColumn(7, _T("Active"), CFMT_TEXT|CFMT_CENTER, 80);

		//hms_card: Thong tin the cua benh nhan
	m_hms_cardTbl.SetTableName(_T("hms_card"));
	m_hms_cardTbl.AddField(_T("hc_createdby"), dfText, 15); 
	m_hms_cardTbl.AddField(_T("hc_createddate"), dfDateTime); 
	m_hms_cardTbl.AddField(_T("hc_updatedby"), dfText, 15); 
	m_hms_cardTbl.AddField(_T("hc_patientno"), dfLong); 
	m_hms_cardTbl.AddField(_T("hc_cardno"), dfText, 25); 
	m_hms_cardTbl.AddField(_T("hc_idx"), dfInteger); 
	m_hms_cardTbl.AddField(_T("hc_regdate"), dfDate); 
	m_hms_cardTbl.AddField(_T("hc_expdate"), dfDate); 
	m_hms_cardTbl.AddField(_T("hc_regcode"), dfText, 11); 
	m_hms_cardTbl.AddField(_T("hc_company"), dfText, 254); 
	m_hms_cardTbl.AddField(_T("hc_code"), dfText, 3); 
	m_hms_cardTbl.AddField(_T("hc_discount"), dfInteger); 	
	m_hms_cardTbl.AddField(_T("hc_active"), dfText, 1);
	m_hms_cardTbl.AddField(_T("hc_groupid"), dfInteger);



}
void CHMSInsuranceCardSettingDialog::OnSetWindowEvents(){
	//m_wndApplyDate.SetEvent(WE_CHANGE, _OnApplyDateChangeFnc);
	//m_wndApplyDate.SetEvent(WE_SETFOCUS, _OnApplyDateSetfocusFnc);
	//m_wndApplyDate.SetEvent(WE_KILLFOCUS, _OnApplyDateKillfocusFnc);
	m_wndApplyDate.SetEvent(WE_CHECKVALUE, _OnApplyDateCheckValueFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
/*
	m_wndList.SetWindowText(_T("Insurance Card Entry"));
	m_wndList.AddEvent(1, _T("Apply calculate for before cost"), _OnListApplyCalcCostFnc);
	m_wndList.AddEvent(0, _T("-"), NULL);
	m_wndList.AddEvent(2, _T("Cancel calculate for before cost"), _OnListCancelCalcCostFnc);
	m_wndList.AddEvent(0, _T("-"), NULL);
	m_wndList.AddEvent(3, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
*/
	m_wndAddCard.SetEvent(WE_CLICK, _OnAddCardSelectFnc);
	m_wndEditCard.SetEvent(WE_CLICK, _OnEditCardSelectFnc);
	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndChangeObject.SetEvent(WE_CLICK, _OnChangeObjectSelectFnc);
	m_wndChangePatientNo.SetEvent(WE_CLICK, _OnChangePatientNoSelectFnc);

	SetMode(VM_EDIT);
	OnListLoadData();
	m_wndList.SetFocus();
	m_wndAddCard.ShowWindow(SW_HIDE);
}
void CHMSInsuranceCardSettingDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndApplyDate.GetDlgCtrlID(), m_szApplyDate);
	//DDX_Check(pDX, m_wndOffLine.GetDlgCtrlID(), m_bOffLine);
	DDX_Check(pDX, m_wndActive.GetDlgCtrlID(), m_bActive);
}
void CHMSInsuranceCardSettingDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSInsuranceCardSettingDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSInsuranceCardSettingDialog::SetDefaultValues(){

	m_szApplyDate.Empty();
	m_bActive = true;

}
int CHMSInsuranceCardSettingDialog::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiDialog::SetMode(nMode); 
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
 			EnableButtons(TRUE, 0, 1, 2, 3, 4, -1); 
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
		
		/*if(!pMF->CheckPermission(_T("01.16")))
		{
			m_wndActive.EnableWindow(false);
		}*/
		m_wndChangePatientNo.EnableWindow(false);
 		UpdateData(FALSE); 
 		return nOldMode; 
}
/*void CHMSInsuranceCardSettingDialog::OnApplyDateChange(){
	
} */
/*void CHMSInsuranceCardSettingDialog::OnApplyDateSetfocus(){
	
} */
/*void CHMSInsuranceCardSettingDialog::OnApplyDateKillfocus(){
	
} */
int CHMSInsuranceCardSettingDialog::OnApplyDateCheckValue(){
	return 0;
} 
void CHMSInsuranceCardSettingDialog::OnListDblClick(){
	
} 
void CHMSInsuranceCardSettingDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString m_szActive;
	int nSel = m_wndList.GetCurSel();

	m_szActive = m_wndList.GetItemText(nSel, 7);
	m_szCardNo = m_wndList.GetItemText(nSel, 2);
	m_nIdx = ToInt(m_wndList.GetItemText(nSel, 0));

	m_bActive = false;
	
	if(m_szActive == _T("Y"))
		m_bActive = true;
	
	UpdateData(false);
} 
int CHMSInsuranceCardSettingDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSInsuranceCardSettingDialog::OnListLoadData(){

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	
	int nCount = 0;
	szSQL.Format(_T("SELECT hc_cardno as cardno, trunc_date(hd_admitdate) as admitdate,") \
		_T("case when hxc_disrate > 0 then hxc_disrate when hd_disrate > 0 then hd_disrate else hc_discount end as discount, ") \
		_T("hc_regdate as regdate, hc_expdate as expdate, hc_idx as idx, ") \
		_T("hc_active as active, ") \
		_T("case when hxc_insline='Y' then 'Y' when hd_insline ='Y' then 'Y' else 'N' end as offlines ") \
		_T("FROM hms_card ") \
		_T("LEFT JOIN hms_doc ON(hd_patientno=hc_patientno and hd_cardidx=hc_idx) ") \
		_T("LEFT JOIN hms_xcard ON(hxc_patientno=hc_patientno and hxc_cardidx=hc_idx) ") \
		_T("WHERE hc_patientno=%ld ") \
		_T("ORDER BY hc_idx DESC"), m_nPatientNo);

	//_fmsg(_T("%s"), szSQL);

	CString szActive;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		rs.GetValue(_T("active"), szActive);
		
		int nItem = m_wndList.AddItems(
			rs.GetValue(_T("idx")), 
			rs.GetValue(_T("admitdate")),
			rs.GetValue(_T("CardNo")), 
			rs.GetValue(_T("Discount")), 
			rs.GetValue(_T("RegDate")), 
			rs.GetValue(_T("ExpDate")), 
			rs.GetValue(_T("OffLines")),
			szActive, NULL);
		
		
		if(szActive==_T("Y")){			
			m_wndList.SetItemTextColor(nItem, RGB(0, 0, 255), FALSE);
		}
		rs.MoveNext();
	}	
	m_wndList.EndLoad();

	m_wndList.SetCurSel(m_wndList.GetItemCount() -1);
	return nCount;

}


int CHMSInsuranceCardSettingDialog::OnListApplyCalcCost(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
}


int CHMSInsuranceCardSettingDialog::OnListCancelCalcCost(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
}
void CHMSInsuranceCardSettingDialog::OnChangeObjectSelect()
{
	
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(!pMF->IsActiveDocument())
	{
		ShowMessageBox(_T("Hố sơ đã kết thúc. Không cho phép sửa đổi"));
		return;
	}
	CHMSChangeObjectDialog dlg(this);
	dlg.m_szObjectCurrentKey = pMF->m_szObject;
	//dlg.m_szObjectType = pMF->m_szObjectS;
	dlg.SetMode(VM_EDIT);
	if(dlg.DoModal()==IDOK){		
		pMF->m_wndPatientDocument.GetDataToScreen();
		OnListLoadData();
	}	
}
#include "HMSPatientNoChangeDialog.h"
void CHMSInsuranceCardSettingDialog::OnChangePatientNoSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(!pMF->IsActiveDocument())
	{
		ShowMessageBox(_T("Hố sơ đã kết thúc. Không cho phép sửa đổi"));
		return;
	}
	CHMSPatientNoChangeDialog dlg(this);
	dlg.DoModal();
}
void CHMSInsuranceCardSettingDialog::OnAddCardSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	if(!pMF->IsActiveDocument())
	{
		ShowMessageBox(_T("Hố sơ đã kết thúc. Không cho phép sửa đổi"));
		return;
	}

	CString szSQL, szCardNo;
	int nIndex = 0;
	CRecord rs(&pMF->m_db);
	szCardNo = m_wndList.GetItemText(0, 2);
	nIndex = ToInt(m_wndList.GetItemText(0, 0)); 
	CHMSCardViewDialog dlg(pMF, VM_ADD);
	dlg.m_nPatientNo = m_nPatientNo;
	dlg.m_szObjectType = pMF->m_szObject;
	dlg.m_nIndex = nIndex;
	dlg.m_szCardNo = szCardNo;
	dlg.SetMode(VM_ADD);
	dlg.DoModal();
} 
void CHMSInsuranceCardSettingDialog::OnEditCardSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();	
	CString szSQL, szCardNo;
	int nIndex = 0;
	CRecord rs(&pMF->m_db);

	if(!pMF->IsActiveDocument())
	{
		ShowMessageBox(_T("Hồ sơ đã kết thúc. Không cho phép sửa đổi"));
		return;
	}


	szCardNo = m_wndList.GetItemText(0, 2);
	nIndex = ToInt(m_wndList.GetItemText(0, 0)); 
	CHMSCardViewDialog dlg(pMF, VM_EDIT);
	dlg.m_nPatientNo = m_nPatientNo;
	dlg.m_nIndex = nIndex;
	dlg.m_szObjectType = pMF->m_szObject;
	dlg.m_szCardNo = szCardNo;
	if(dlg.DoModal() == IDOK)
	{
		OnListLoadData();
	}
} 
void CHMSInsuranceCardSettingDialog::OnApplySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szRegDate, szExpDate, szCardNo;
	
	if(!pMF->IsActiveDocument())
	{
		ShowMessageBox(_T("Hố sơ đã kết thúc. Không cho phép sửa đổi"));
		return;
	}

	if(!IsValidateData())
		return;

	int nDiscount;
	int nSel = m_wndList.GetCurSel();
	
	if(pMF->m_wndPatientDocument.m_szCardNo.IsEmpty())
		return ;

	szCardNo = m_wndList.GetItemText(0, 1);

	if(nSel < 0) 
	{
		ShowMessageBox(_T("Áp dụng thành công!"), MB_OK| MB_ICONASTERISK);
		return;
	}
	

	UpdateData(true);
	

	int nCardIdx = str2int(m_wndList.GetItemText(nSel, 0));
	szSQL.Format(_T("SELECT hc_cardno, hc_regdate, hc_expdate, hc_discount FROM hms_card WHERE hc_patientno=%ld and hc_idx=%d"), m_nPatientNo, nCardIdx);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF()){
		rs.GetValue(_T("hc_regdate"), szRegDate);
		rs.GetValue(_T("hc_expdate"), szExpDate);
		rs.GetValue(_T("hc_discount"), nDiscount);
		rs.GetValue(_T("hc_cardno"), szCardNo);

		CString szOffLine = _T("N");
		if(m_bOffLine && pMF->m_nInsOffLinePayment > 0)
		{
			nDiscount = pMF->m_nInsOffLinePayment;
			szOffLine = _T("Y");
		}
		
		CString szActive = _T("N");
		if(m_bActive){
			szActive = _T("Y");
		}

		if(CompareDate(szRegDate, m_szApplyDate) > 0)
		{
			ShowMessage(148, MB_OK);
			return;
		}
		if(CompareDate(szExpDate, m_szApplyDate) < 0)
		{
			ShowMessage(149, MB_OK);
			//return;
		}
		szSQL.Format(_T("UPDATE hms_doc SET hd_insregdate=to_date('%s', 'yyyy/mm/dd hh24:mi:ss'), hd_disrate=%d, hd_cardidx=%d, hd_cardno='%s', hd_insline='%s' WHERE hd_docno=%ld"),
			m_szApplyDate, nDiscount, nCardIdx, szCardNo, szOffLine, m_nDocumentNo);
		int ret = pMF->ExecSQL(szSQL);
		if(ret >= 0)
		{
			szSQL.Format(_T("SELECT count(*) FROM hms_xcard WHERE hxc_docno=%ld and hxc_cardidx=%d"), m_nDocumentNo, nCardIdx);
			rs.ExecSQL(szSQL);
			if(rs.GetIntValue() > 0)
			{
				szSQL.Format(_T("DELETE FROM hms_xcard WHERE hxc_docno=%ld and hxc_cardidx=%d"), m_nDocumentNo, nCardIdx);
				pMF->ExecSQL(szSQL);
				szSQL.Format(_T("UPDATE hms_doc SET hd_hasxcard='N' WHERE hd_docno=%ld"), m_nDocumentNo);
				pMF->ExecSQL(szSQL);

			}

			//Xoa cac the khong dung den
			if(m_wndList.GetItemCount() > 1)
			{
				for (int i =0; i < m_wndList.GetItemCount(); i++){
					nCardIdx = str2int(m_wndList.GetItemText(i, 0));
					if(i != nSel){
						szSQL.Format(_T("SELECT count(*) ")\
						_T("FROM hms_doc ") \
						_T("WHERE hd_patientno=%ld and hd_cardidx=%d "), m_nPatientNo, nCardIdx);

						rs.ExecSQL(szSQL);
						if(rs.GetIntValue() <= 0){
							//Kiem tra neu the khong duoc su dung trong hms_xcard thi xoa di
							szSQL.Format(_T("SELECT count(*) FROM hms_xcard WHERE hxc_patientno=%ld and hxc_cardidx=%d"), m_nPatientNo, nCardIdx);
							rs.ExecSQL(szSQL);
							if(rs.GetIntValue() <= 0){
								szSQL.Format(_T("DELETE FROM hms_card WHERE hc_patientno=%ld and hc_idx=%d"), m_nPatientNo, nCardIdx);
								pMF->ExecSQL(szSQL);
								m_wndList.DeleteItem(i);
							}
							
						}
					}
				}
			}
			
			CString m_szStatus;
			szSQL.Format(_T("SELECT max(hc_idx) FROM hms_card WHERE hc_patientno=%ld"), m_nPatientNo);
			rs.ExecSQL(szSQL);
			int nMaxCardIdx = rs.GetIntValue();
			
			if(m_bActive)
				m_szStatus = _T("Y");
			else
				m_szStatus = _T("N");

			
			szSQL.Format(_T("UPDATE hms_card SET hc_active='N' WHERE hc_patientno=%ld "), m_nPatientNo);
			pMF->ExecSQL(szSQL);

			szSQL.Format(_T("UPDATE hms_card SET hc_active='%s' WHERE hc_patientno=%ld and hc_cardno='%s' and hc_idx=%d "), szActive,m_nPatientNo, szCardNo, m_nIdx);
			pMF->ExecSQL(szSQL);
			OnListLoadData();
			ShowMessage(37, MB_OK| MB_ICONMASK);
		}
	}
} 
void CHMSInsuranceCardSettingDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CHMSInsuranceCardSettingDialog::OnAddHMSInsuranceCardSettingDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSInsuranceCardSettingDialog::OnEditHMSInsuranceCardSettingDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSInsuranceCardSettingDialog::OnDeleteHMSInsuranceCardSettingDialog(){
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
 		OnCancelHMSInsuranceCardSettingDialog(); 
 	}
	return 0;
}
int CHMSInsuranceCardSettingDialog::OnSaveHMSInsuranceCardSettingDialog(){
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
 		//OnHMSInsuranceCardSettingDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSInsuranceCardSettingDialog::OnCancelHMSInsuranceCardSettingDialog(){
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
int CHMSInsuranceCardSettingDialog::OnHMSInsuranceCardSettingDialogListLoadData(){
	return 0;
}
