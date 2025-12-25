#include "HMSAdviseOrderDialog.h"
#include "GuiMainFrame.h"
#include "HMSAdviseChatMessage.h"
#include "HMSAdviseColistinApproveDialog.h"
#include "LayoutUtils.h"

static void _OnExchangeMessageSelectFnc(CWnd *pWnd){
	CHMSAdviseOrderDialog *pVw = (CHMSAdviseOrderDialog *)pWnd;
	pVw->OnExchangeMessageSelect();
} 
static void _OnShowPrescriptionSelectFnc(CWnd *pWnd){
	 ((CHMSAdviseOrderDialog*)pWnd)->OnShowPrescriptionSelect();
}
static void _OnUpdateSelectFnc(CWnd *pWnd){
	CHMSAdviseOrderDialog *pVw = (CHMSAdviseOrderDialog *)pWnd;
	pVw->OnUpdateSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSAdviseOrderDialog *pVw = (CHMSAdviseOrderDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSAdviseOrderDialog *pVw = (CHMSAdviseOrderDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CHMSAdviseOrderDialog *pVw = (CHMSAdviseOrderDialog *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnConfirmSelectFnc(CWnd *pWnd){
	CHMSAdviseOrderDialog *pVw = (CHMSAdviseOrderDialog *)pWnd;
	pVw->OnConfirmSelect();
} 
static void _OnDisconfirmSelectFnc(CWnd *pWnd){
	CHMSAdviseOrderDialog *pVw = (CHMSAdviseOrderDialog *)pWnd;
	pVw->OnDisconfirmSelect();
} 
static void _OnAdviseSelectFnc(CWnd *pWnd){
	CHMSAdviseOrderDialog *pVw = (CHMSAdviseOrderDialog *)pWnd;
	pVw->OnAdviseSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSAdviseOrderDialog *pVw = (CHMSAdviseOrderDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSAdviseOrderDialogFnc(CWnd *pWnd){
	 return ((CHMSAdviseOrderDialog*)pWnd)->OnAddHMSAdviseOrderDialog();
} 
static int _OnEditHMSAdviseOrderDialogFnc(CWnd *pWnd){
	 return ((CHMSAdviseOrderDialog*)pWnd)->OnEditHMSAdviseOrderDialog();
} 
static int _OnDeleteHMSAdviseOrderDialogFnc(CWnd *pWnd){
	 return ((CHMSAdviseOrderDialog*)pWnd)->OnDeleteHMSAdviseOrderDialog();
} 
static int _OnSaveHMSAdviseOrderDialogFnc(CWnd *pWnd){
	 return ((CHMSAdviseOrderDialog*)pWnd)->OnSaveHMSAdviseOrderDialog();
} 
static int _OnCancelHMSAdviseOrderDialogFnc(CWnd *pWnd){
	 return ((CHMSAdviseOrderDialog*)pWnd)->OnCancelHMSAdviseOrderDialog();
} 
CHMSAdviseOrderDialog::CHMSAdviseOrderDialog(CWnd *pParent, int nMode, long nOrderId):
	CGuiDialog(pParent), m_nOrderId(nOrderId) {
		CGuiDialog::SetMode(nMode);
	m_nDlgWidth = 965;
	m_nDlgHeight = 685;
	SetDefaultValues();
}
CHMSAdviseOrderDialog::~CHMSAdviseOrderDialog(){
}
void CHMSAdviseOrderDialog::OnCreateComponents(){
	m_wndForm.Create(this, 5, 5, 960, 645);
	m_wndExchangeMessage.Create(this, _T("Exchange Message"), 5, 650, 140, 675);
	m_wndShowPrescription.Create(this, _T("Show Prescription"), 145, 650, 277, 675);
	m_wndUpdate.Create(this, _T("&Update"), 282, 650, 362, 675);
	m_wndSave.Create(this, _T("&Save"), 367, 650, 447, 675);
	m_wndCancel.Create(this, _T("&Cancel"), 452, 650, 532, 675);
	m_wndPrint.Create(this, _T("&Print"), 537, 650, 617, 675);
	m_wndConfirm.Create(this, _T("&Confirm"), 622, 650, 702, 675);
	m_wndDisconfirm.Create(this, _T("&Disconfirm"), 707, 650, 787, 675);
	m_wndAdvise.Create(this, _T("&Advise"), 792, 650, 872, 675);
	m_wndClose.Create(this, _T("&Close"), 877, 650, 957, 675);

}
void CHMSAdviseOrderDialog::OnInitializeComponents(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();

}
void CHMSAdviseOrderDialog::OnSetWindowEvents(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	m_wndExchangeMessage.SetEvent(WE_CLICK, _OnExchangeMessageSelectFnc);
	m_wndShowPrescription.SetEvent(WE_CLICK, _OnShowPrescriptionSelectFnc);
	m_wndUpdate.SetEvent(WE_CLICK, _OnUpdateSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndConfirm.SetEvent(WE_CLICK, _OnConfirmSelectFnc);
	m_wndDisconfirm.SetEvent(WE_CLICK, _OnDisconfirmSelectFnc);
	m_wndAdvise.SetEvent(WE_CLICK, _OnAdviseSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	if(m_szType == _T("COLISTIN"))
	{
		m_wndForm.SetTableName(_T("HMS_ADVISE_COLISTIN"));
		m_wndForm.m_szWhere.Format(_T(" AND orderid=%ld"), m_nOrderId);
		m_wndForm.m_fKey.m_nOrderId = m_nOrderId;
		m_wndForm.Load(_T(".\\REPORTS\\HMS\\PHIEUCHIDINH_COLISTIN.HTML"));
	}
	m_wndExchangeMessage.ModifyStyle(WS_TABSTOP, 0);

	if(pMF->GetModuleID() == _T("PM"))
	{
		m_wndUpdate.ShowWindow(SW_HIDE);
		m_wndSave.ShowWindow(SW_HIDE);
		m_wndCancel.ShowWindow(SW_HIDE);
		m_wndConfirm.ShowWindow(SW_HIDE);
		m_wndDisconfirm.ShowWindow(SW_HIDE);
	}
	else
	{
		m_wndAdvise.ShowWindow(SW_HIDE);
	}
	int nMode = GetMode();
	if(nMode == VM_EDIT || nMode == VM_VIEW)
		GetDataToScreen();
	SetMode(VM_VIEW);

}
void CHMSAdviseOrderDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Check(pDX, m_wndShowPrescription.GetDlgCtrlID(), m_bShowPrescription);

}
void CHMSAdviseOrderDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("ShowPrescription")] =  m_bShowPrescription;
	}
	else
	{
			
	m_jData[_T("ShowPrescription")].GetValue(m_bShowPrescription);
	}

}
void CHMSAdviseOrderDialog::GetDataToScreen(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
_tprintf(_T("\r\nOrderID=%ld"), m_nOrderId);	
	if(m_nOrderId <= 0)
	{
		szSQL.Format(_T("HMS_ADVISE_ORDER_CREATE('%s', '%s', '%s', %d, %d, %ld, %ld, '%s')"),
				pMF->GetCurrentUser(),
				m_wndForm.m_fKey.m_szDeptID,
				m_wndForm.m_fKey.m_szRecordNo,
				m_wndForm.m_fKey.m_nRefIdx,
				m_wndForm.m_fKey.m_nTreatTime,
				m_wndForm.m_fKey.m_nPatientNo,
				m_wndForm.m_fKey.m_nDocumentNo,
				m_wndForm.m_szType);

		m_nOrderId = str2long(pMF->ExecDML(szSQL));
		m_wndForm.m_fKey.m_nOrderId = m_nOrderId;
		_tprintf(_T("\r\n%ld: %s"), m_nOrderId, szSQL);
			
	}
	m_wndForm.m_szWhere.Format(_T(" AND orderid=%ld"), m_nOrderId);
	szSQL.Format(_T("SELECT %s FROM %s WHERE docno=%ld and orderid=%ld"),
				m_wndForm.m_szFieldKey, m_wndForm.m_szTableName, m_wndForm.m_fKey.m_nDocumentNo, m_nOrderId);
_tprintf(_T("\r\n%s"), szSQL);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(m_wndForm.m_szFieldKey, m_wndForm.m_szUID);
		_tprintf(_T("\r\n%s: %s"), m_wndForm.m_szFieldKey, m_wndForm.m_szUID);
	}
	
	m_wndForm.GetData();

}
void CHMSAdviseOrderDialog::GetScreenToData(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();

}
void CHMSAdviseOrderDialog::SetDefaultValues(){

	m_bShowPrescription=FALSE;

}
int CHMSAdviseOrderDialog::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CGuiMainFrame *pMF = (CGuiMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 1, 2, -1);
			m_wndForm.EnableControls(true);
 			SetDefaultValues();
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 1,2, -1);
			m_wndForm.EnableControls(true);
 			break;
 		case VM_VIEW: 
 			EnableControls(FALSE);
			m_wndForm.EnableControls(false);
 			EnableButtons(TRUE, 0, 3, 4, 5, 6,  -1);

 			break;
 		case VM_NONE: 
 			EnableControls(FALSE);
 			EnableButtons(TRUE, 0, 6, -1);
 			SetDefaultValues();
 			break;
 		};
		m_wndClose.EnableWindow(true);
		GetOrderStatus();
		if(nMode == VM_VIEW)
		{
			if(m_szStatus == _T("O"))
			{
				m_wndConfirm.EnableWindow(TRUE);
				m_wndDisconfirm.EnableWindow(FALSE);
				
			}
			else
			{
				m_wndConfirm.EnableWindow(FALSE);
				m_wndDisconfirm.EnableWindow(TRUE);
			}
			if(pMF->GetModuleID() == _T("PM") && (m_szStatus == _T("S")||m_szStatus == _T("A")))
			{
				m_wndAdvise.EnableWindow(TRUE);
			}
			else
			{
				m_wndAdvise.EnableWindow(FALSE);
			}
		}
        
        m_wndForm.EnableControl(L"RECORDNO", false);
        m_wndForm.EnableControl(L"PATIENT_NAME", false);
        m_wndForm.EnableControl(L"GENDER", false);
        m_wndForm.EnableControl(L"DEPTID1", false);
        m_wndForm.EnableControl(L"AGE", false);
 		UpdateData(FALSE);
 		return nOldMode;
}
void CHMSAdviseOrderDialog::OnExchangeMessageSelect(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	CHMSAdviseChatMessage dlg(this, m_nOrderId);
	dlg.DoModal();
} 

void CHMSAdviseOrderDialog::OnShowPrescriptionSelect(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	_tprintf(_T("\r\nShow=%ld"), m_bShowPrescription);
	
	m_wndForm.ShowPrescription(m_bShowPrescription, m_szOrderDate);
}
void CHMSAdviseOrderDialog::OnUpdateSelect(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	m_szStatus = GetOrderStatus();
	if(m_szStatus != _T("O"))
	{
		CString szMsg;
		szMsg.Format(_T("Trạng thái phiếu [%s] không cho phép cập nhật thông tin"), m_szStatus);
		ShowMessageBox(szMsg);
		return;
	}
	SetMode(VM_EDIT);
} 
void CHMSAdviseOrderDialog::OnSaveSelect(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	OnSaveHMSAdviseOrderDialog();
} 
void CHMSAdviseOrderDialog::OnCancelSelect(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	OnCancelHMSAdviseOrderDialog();
} 
void CHMSAdviseOrderDialog::OnPrintSelect(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	//m_wndForm.OnFilePrint();
	//Trường hợp in file khac
	m_wndForm.PrintFromFile(_T(".\\REPORTS\\HMS\\PHIEUCHIDINH_COLISTIN_PRINT.HTML"));
} 
void CHMSAdviseOrderDialog::OnConfirmSelect(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	CString szSQL;
	int ret = ShowMessageBox(_T("Xác nhận gửi yêu cầu"), MB_YESNO);
	if(ret == IDNO)
		return;

	szSQL.Format(_T("HMS_ADVISE_ORDER_SEND(%ld, '%s') "), m_wndForm.m_fKey.m_nOrderId, pMF->GetCurrentUser());
	 ret = str2int(pMF->ExecDML(szSQL));
	if(ret <= 0)
	{
		_tprintf(_T("\r\n%s"), szSQL);
		ShowMessageBox(_T("Không xác nhận được"));
	}
	GetOrderStatus();
	if(m_szStatus == _T("S"))
	{
		m_wndConfirm.EnableWindow(FALSE);
		m_wndDisconfirm.EnableWindow(TRUE);
	}
} 
void CHMSAdviseOrderDialog::OnDisconfirmSelect(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	CString szSQL;

	int ret = ShowMessageBox(_T("Xác nhận hủy yêu cầu"), MB_YESNO);
	if(ret == IDNO)
		return;

	szSQL.Format(_T("HMS_ADVISE_ORDER_DISCONFIRM(%ld, '%s') "), m_wndForm.m_fKey.m_nOrderId, pMF->GetCurrentUser());
	ret = str2int(pMF->ExecDML(szSQL));
	if(ret <= 0)
	{
		_tprintf(_T("\r\n%s"), szSQL);
		ShowMessageBox(_T("Không bỏ xác nhận được"));
	}
	GetOrderStatus();
	if(m_szStatus == _T("O"))
	{
		m_wndConfirm.EnableWindow(TRUE);
		m_wndDisconfirm.EnableWindow(FALSE);
	}
} 
void CHMSAdviseOrderDialog::OnAdviseSelect(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	CString szSQL;
	szSQL.Format(_T("hms_advise_order_bfapprove(%ld, '%s')"), m_nOrderId, pMF->GetCurrentUser());
	int ret = str2int(pMF->ExecDML(szSQL));
	if(ret < 0)
	{
		ShowMessageBox(_T("Không cho phép cập nhật dữ liệu"));
		return;
	}
	CHMSAdviseColistinApproveDialog dlg(this, m_nOrderId);
	if(dlg.DoModal() == IDOK)
	{
		m_wndForm.GetData();
	}
} 
void CHMSAdviseOrderDialog::OnCloseSelect(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();	
} 
int CHMSAdviseOrderDialog::OnAddHMSAdviseOrderDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CGuiMainFrame *pMF = (CGuiMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSAdviseOrderDialog::OnEditHMSAdviseOrderDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CGuiMainFrame *pMF = (CGuiMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSAdviseOrderDialog::OnDeleteHMSAdviseOrderDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CGuiMainFrame *pMF = (CGuiMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
 	szSQL.Format(_T("DELETE FROM  WHERE  AND") );
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
 		SetMode(VM_NONE);
 		OnCancelHMSAdviseOrderDialog();
 	}
	return 0;
}
int CHMSAdviseOrderDialog::OnSaveHMSAdviseOrderDialog(){
	CGuiMainFrame *pMF = (CGuiMainFrame *)AfxGetMainWnd();
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
	CLayoutUtils util;
	if (util.check_empty(m_wndForm.GetSafeHwnd()) < 0)
	{
		ShowMessageBox(_T("Nhập đủ dữ liệu vào các trường bắt buộc!"));
		return -1;
	}
	if(m_nOrderId <= 0)
	{
		CString szSQL;
		szSQL.Format(_T("HMS_ADVISE_ORDER_CREATE('%s', '%s', '%s', %d, %d, %ld, %ld, '%s')"),
			pMF->GetCurrentUser(),
			m_wndForm.m_fKey.m_szDeptID,
			m_wndForm.m_fKey.m_szRecordNo,
			m_wndForm.m_fKey.m_nRefIdx,
			m_wndForm.m_fKey.m_nTreatTime,
			m_wndForm.m_fKey.m_nPatientNo,
			m_wndForm.m_fKey.m_nDocumentNo,
			m_wndForm.m_szType);

		m_nOrderId = str2long(pMF->ExecDML(szSQL));
		m_wndForm.m_fKey.m_nOrderId = m_nOrderId;

		
		szSQL.Format(_T("SELECT %s FROM %s WHERE docno=%ld and orderid=%ld"),
			m_wndForm.m_szFieldKey, m_wndForm.m_szTableName, m_wndForm.m_fKey.m_nDocumentNo, m_wndForm.m_fKey.m_nOrderId);
		CRecord rs(&pMF->m_db);
		rs.ExecSQL(szSQL);
		if(!rs.IsEOF())
		{
			rs.GetValue(m_wndForm.m_szFieldKey, m_wndForm.m_szUID);
		}

	}
	if(!m_wndForm.PostData())
	{
		ShowMessageBox(_T("Có lỗi xảy ra khi lưu dữ liệu"));
		return -1;
	}

	CString szSQL;
	if(GetMode() == VM_ADD)
	{
		szSQL.Format(_T("SELECT %s FROM %s WHERE docno=%ld and orderid=%ld"),
			m_wndForm.m_szFieldKey, m_wndForm.m_szTableName, m_wndForm.m_fKey.m_nDocumentNo, m_wndForm.m_fKey.m_nOrderId);
		CRecord rs(&pMF->m_db);
		rs.ExecSQL(szSQL);
		if(!rs.IsEOF())
		{
			rs.GetValue(m_wndForm.m_szFieldKey, m_wndForm.m_szUID);
		}
	}
	if(m_wndForm.m_szUID.IsEmpty())
	{
	
		szSQL.Format(_T("SELECT %s FROM %s WHERE docno=%ld and orderid=%ld"),
			m_wndForm.m_szFieldKey, m_wndForm.m_szTableName, m_wndForm.m_fKey.m_nDocumentNo, m_nOrderId);
		CRecord rs(&pMF->m_db);
		rs.ExecSQL(szSQL);
		if(!rs.IsEOF())
		{
			rs.GetValue(m_wndForm.m_szFieldKey, m_wndForm.m_szUID);
		}
	}
	SetMode(VM_VIEW);
 	return 0;
}
int CHMSAdviseOrderDialog::OnCancelHMSAdviseOrderDialog(){
 	if(GetMode() == VM_EDIT)
 	{
 		SetMode(VM_VIEW);
 	} 
 	else 
 	{
 		SetMode(VM_NONE);
 	} 
 	CGuiMainFrame *pMF = (CGuiMainFrame *)AfxGetMainWnd();
 	return 0;
} 
int CHMSAdviseOrderDialog::OnHMSAdviseOrderDialogListLoadData(){
	return 0;
}

BOOL CHMSAdviseOrderDialog::PreTranslateMessage(MSG* pMsg)
{
	// TODO: Add your specialized code here and/or call the base class

	return CDialog::PreTranslateMessage(pMsg);
}


CString CHMSAdviseOrderDialog::GetOrderStatus()
{
	CGuiMainFrame *pMF = (CGuiMainFrame *)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT status, order_date FROM hms_advise_order WHERE order_id=%ld "), m_nOrderId);
	rs.ExecSQL(szSQL);
	CString szStatus;
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("status"), szStatus);
		rs.GetValue(_T("order_date"), m_szOrderDate);
	}
	m_szStatus = szStatus;
	return szStatus;
}