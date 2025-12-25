#include "HMSTreatmentTrackingDialog.h"
#include "HMSTreatmentTrackingDiseaseDialog.h"
#include "HMSTreatmentPrescriptionPopup.h"
#include "HMSTreatmentPrescriptionPopupEx.h"
#include "HMSOperationScheduleDetailDialog.h"
#include "MainFrm.h"
#include "StringToken.h"
#include "HMSReasonDialog.h"
#include "HMSCancerPrescriptionPrepareDialog.h"
#include "HMSMainFrame.h"
#include "IVFAppointmentDialog.h"
#include "HMSArrangeDrugLine.h"
#include "IVFAppointmentDialog2.h"

static void _OnMonthSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSTreatmentTrackingDialog* )pWnd)->OnMonthSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnMonthSelendokFnc(CWnd *pWnd){
	((CHMSTreatmentTrackingDialog *)pWnd)->OnMonthSelendok();
}
/*static void _OnMonthSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentTrackingDialog *)pWnd)->OnMonthKillfocus();
}*/
/*static void _OnMonthKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentTrackingDialog *)pWnd)->OnMonthKillfocus();
}*/
static long _OnMonthLoadDataFnc(CWnd *pWnd){
	return ((CHMSTreatmentTrackingDialog *)pWnd)->OnMonthLoadData();
}
/*static void _OnMonthAddNewFnc(CWnd *pWnd){
	((CHMSTreatmentTrackingDialog *)pWnd)->OnMonthAddNew();
}*/
static long _OnTreatListLoadDataFnc(CWnd *pWnd){
	return ((CHMSTreatmentTrackingDialog*)pWnd)->OnTreatListLoadData();
} 
static void _OnTreatListDblClickFnc(CWnd *pWnd){
	((CHMSTreatmentTrackingDialog*)pWnd)->OnTreatListDblClick();
} 
static void _OnTreatListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSTreatmentTrackingDialog*)pWnd)->OnTreatListSelectChange(nOldItem, nNewItem);
} 


static int _OnTreatListUpdateDiseaseItemFnc(CWnd *pWnd){
	 return ((CHMSTreatmentTrackingDialog*)pWnd)->OnTreatListUpdateDiseaseItem();
}

static int _OnTreatListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSTreatmentTrackingDialog*)pWnd)->OnTreatListDeleteItem();
}


static int _OnTreatListSmartPrescriptionItemFnc(CWnd *pWnd){
	 return ((CHMSTreatmentTrackingDialog*)pWnd)->OnTreatListSmartPrescriptionItem();
}

static int _OnTreatListDrugOrderCopyItemFnc(CWnd *pWnd){
	 return ((CHMSTreatmentTrackingDialog*)pWnd)->OnTreatListDrugOrderCopyItem();
}

static int _OnTreatListCancerOrderItemFnc(CWnd *pWnd){
	 return ((CHMSTreatmentTrackingDialog*)pWnd)->OnTreatListCancerOrderItem();
}

static int _OnTreatListExternalOrderItemFnc(CWnd *pWnd){
	 return ((CHMSTreatmentTrackingDialog*)pWnd)->OnTreatListExternalOrderItem();
}


static int _OnTreatListDrugOrderAdviceItemFnc(CWnd *pWnd){
	 return ((CHMSTreatmentTrackingDialog*)pWnd)->OnTreatListDrugOrderAdviceItem();
}
static int _OnTreatListPrintPrescriptionFnc(CWnd *pWnd){
	 return ((CHMSTreatmentTrackingDialog*)pWnd)->OnTreatListPrintPrescription();
}
static int _OnTreatListEditPrescriptionQtyFnc(CWnd *pWnd){
	 return ((CHMSTreatmentTrackingDialog*)pWnd)->OnTreatListEditPrescriptionQty();
}
static int _OnTreatListArrangePrescriptionFnc(CWnd *pWnd){
	 return ((CHMSTreatmentTrackingDialog*)pWnd)->OnTreatListArrangePrescription();
}
static int _OnTreatListNoteOfDeanItemFnc(CWnd *pWnd){
	 return ((CHMSTreatmentTrackingDialog*)pWnd)->OnTreatListNoteOfDeanItem();
}

static long _OnDateListLoadDataFnc(CWnd *pWnd){
	return ((CHMSTreatmentTrackingDialog*)pWnd)->OnDateListLoadData();
} 
static void _OnDateListDblClickFnc(CWnd *pWnd){
	((CHMSTreatmentTrackingDialog*)pWnd)->OnDateListDblClick();
} 
static void _OnDateListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSTreatmentTrackingDialog*)pWnd)->OnDateListSelectChange(nOldItem, nNewItem);
} 
static int _OnDateListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSTreatmentTrackingDialog*)pWnd)->OnDateListDeleteItem();
}

static int _OnDateListConfirmItemFnc(CWnd *pWnd){
	 return ((CHMSTreatmentTrackingDialog*)pWnd)->OnDateListConfirmItem();
}


static int _OnDateListDisconfirmItemFnc(CWnd *pWnd){
	 return ((CHMSTreatmentTrackingDialog*)pWnd)->OnDateListDisconfirmItem();
}



static void _OnDiseaseSelectFnc(CWnd *pWnd){
	CHMSTreatmentTrackingDialog *pVw = (CHMSTreatmentTrackingDialog *)pWnd;
	pVw->OnDiseaseSelect();
} 
static void _OnPrescriptionSelectFnc(CWnd *pWnd){
	CHMSTreatmentTrackingDialog *pVw = (CHMSTreatmentTrackingDialog *)pWnd;
	pVw->OnPrescriptionSelect();
} 
static void _OnParaclinicSelectFnc(CWnd *pWnd){
	CHMSTreatmentTrackingDialog *pVw = (CHMSTreatmentTrackingDialog *)pWnd;
	pVw->OnParaclinicSelect();
} 

static void _OnSurgeryOperationSelectFnc(CWnd *pWnd){
	CHMSTreatmentTrackingDialog *pVw = (CHMSTreatmentTrackingDialog *)pWnd;
	pVw->OnSurgeryOperationSelect();
} 

static void _OnPrintSelectFnc(CWnd *pWnd){
	CHMSTreatmentTrackingDialog *pVw = (CHMSTreatmentTrackingDialog *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSTreatmentTrackingDialog *pVw = (CHMSTreatmentTrackingDialog *)pWnd;
	pVw->OnCloseSelect();
}

static void _OnLockSelectFnc(CWnd *pWnd){
	CHMSTreatmentTrackingDialog *pVw = (CHMSTreatmentTrackingDialog *)pWnd;
	pVw->OnLockSelect();
}

static void _OnUnLockSelectFnc(CWnd *pWnd){
	CHMSTreatmentTrackingDialog *pVw = (CHMSTreatmentTrackingDialog *)pWnd;
	pVw->OnUnLockSelect();
}

static int _OnShowHistoryFnc(CWnd *pWnd){
	return ((CHMSTreatmentTrackingDialog*)pWnd)->OnShowHistory();
}

static int _OnAddHMSTreatmentTrackingDialogFnc(CWnd *pWnd){
	 return ((CHMSTreatmentTrackingDialog*)pWnd)->OnAddHMSTreatmentTrackingDialog();
} 
static int _OnEditHMSTreatmentTrackingDialogFnc(CWnd *pWnd){
	 return ((CHMSTreatmentTrackingDialog*)pWnd)->OnEditHMSTreatmentTrackingDialog();
} 
static int _OnDeleteHMSTreatmentTrackingDialogFnc(CWnd *pWnd){
	 return ((CHMSTreatmentTrackingDialog*)pWnd)->OnDeleteHMSTreatmentTrackingDialog();
} 
static int _OnSaveHMSTreatmentTrackingDialogFnc(CWnd *pWnd){
	 return ((CHMSTreatmentTrackingDialog*)pWnd)->OnSaveHMSTreatmentTrackingDialog();
} 
static int _OnCancelHMSTreatmentTrackingDialogFnc(CWnd *pWnd){
	 return ((CHMSTreatmentTrackingDialog*)pWnd)->OnCancelHMSTreatmentTrackingDialog();
} 
CHMSTreatmentTrackingDialog::CHMSTreatmentTrackingDialog(CWnd *pParent, int nMode, long nDocumentNo):
	CGuiDialog(pParent){
		CGuiDialog::SetMode(nMode);
	m_nDlgWidth = 965;
	m_nDlgHeight = 605;
	SetDefaultValues();
	m_nDocumentNo = nDocumentNo;
	m_bRefreshTreat = true;
	m_wndPopup = new CHMSTreatmentPrescriptionPopup(this);
	m_wndPopupEx = new CHMSTreatmentPrescriptionPopupEx(this);

}
CHMSTreatmentTrackingDialog::~CHMSTreatmentTrackingDialog(){
}
void CHMSTreatmentTrackingDialog::OnCreateComponents(){
	m_wndTreatmentInformation.Create(this, _T("Treatment Information"), 195, 5, 1000, 600);
	m_wndMonthLabel.Create(this, _T("Month"), 7, 5, 87, 30);
	m_wndMonth.Create(this,92, 5, 190, 30); 

	m_wndTreatList.Create(this,200, 35, 995, 595); 
	m_wndDateList.Create(this,5, 35, 190, 595); 

	m_wndDisease.Create(this, _T("&Disease Tracking"), 195, 605, 275, 630);
	m_wndPrescription.Create(this, _T("&Prescription"), 280, 605, 360, 630);
	m_wndParaclinic.Create(this, _T("&Para-clinic"), 365, 605, 445, 630);
	m_wndSurgeryOpt.Create(this, _T("&Surgery-opt"), 450, 605, 530, 630);

	m_wndPrint.Create(this, _T("&Print"), 605, 605, 685, 630);
	m_wndClose.Create(this, _T("Close"), 880, 605, 960, 603);
	m_wndLock.Create(this, _T("&Confirm"), 5, 605, 90, 630);
	m_wndUnLock.Create(this, _T("&Disconfirm"), 95, 605, 190, 630);

	m_wndPopup->Create(this);
	m_wndPopup->ShowWindow(SW_HIDE);
	m_wndPopupEx->Create(this);
	m_wndPopupEx->ShowWindow(SW_HIDE);

	
}
void CHMSTreatmentTrackingDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndMonth.SetCheckValue(true);
	m_wndMonth.LimitText(35);


	m_wndMonth.InsertColumn(0, _T("Month"), CFMT_TEXT, 150);
	m_wndMonth.Format(1, 0);


	m_wndTreatList.InsertColumn(0, _T("BỆNH TRÌNH ĐIỀU TRỊ"), CFMT_TEXT|CFMT_CENTER, 755);
/*
	m_wndTreatList.InsertColumn(1, _T("Disease tracking"), CFMT_TEXT, 270);
	m_wndTreatList.InsertColumn(2, _T("Treatment"), CFMT_TEXT, 300);
	m_wndTreatList.InsertColumn(3, _T("Diet"), CFMT_TEXT, 50);
*/

	m_wndDateList.InsertColumn(0, _T("Số phiếu"), CFMT_NUMBER, 70);
	m_wndDateList.InsertColumn(1, _T("Ngày giờ"), CFMT_DATETIME|CFMT_CENTER, 110);
	m_wndDateList.InsertColumn(2, _T(""), CFMT_TEXT, 0);//idx
	m_wndDateList.InsertColumn(3, _T(""), CFMT_TEXT, 0);//idx
	m_wndDateList.InsertColumn(4,  _T(""), CFMT_TEXT, 0);//created


}
void CHMSTreatmentTrackingDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndMonth.SetEvent(WE_SELENDOK, _OnMonthSelendokFnc);
	//m_wndMonth.SetEvent(WE_SETFOCUS, _OnMonthSetfocusFnc);
	//m_wndMonth.SetEvent(WE_KILLFOCUS, _OnMonthKillfocusFnc);
	m_wndMonth.SetEvent(WE_SELCHANGE, _OnMonthSelectChangeFnc);
	m_wndMonth.SetEvent(WE_LOADDATA, _OnMonthLoadDataFnc);
	//m_wndMonth.SetEvent(WE_ADDNEW, _OnMonthDiseaseNewFnc);
	m_wndTreatList.SetEvent(WE_SELCHANGE, _OnTreatListSelectChangeFnc);
	m_wndTreatList.SetEvent(WE_LOADDATA, _OnTreatListLoadDataFnc);
	m_wndTreatList.SetEvent(WE_DBLCLICK, _OnTreatListDblClickFnc);

	m_wndTreatList.AddEvent(1, _T("Cập nhật bệnh trình"), _OnTreatListUpdateDiseaseItemFnc);
	m_wndTreatList.AddEvent(2, _T("Delete"), _OnTreatListDeleteItemFnc);
	m_wndTreatList.AddEvent(0, _T("-"), NULL);

	m_wndTreatList.AddEvent(3, _T("Đơn thuốc mẫu"), _OnTreatListSmartPrescriptionItemFnc);
	m_wndTreatList.AddEvent(0, _T("-"), NULL);

	m_wndTreatList.AddEvent(4, _T("Sao chép đơn thuốc"), _OnTreatListDrugOrderCopyItemFnc);
	m_wndTreatList.AddEvent(0, _T("-"), NULL);
	m_wndTreatList.AddEvent(5, _T("Đơn thuốc ngoài(Thuốc không có trong kho)"), _OnTreatListExternalOrderItemFnc);
	
	m_wndTreatList.AddEvent(0, _T("-"), NULL);
	m_wndTreatList.AddEvent(6, _T("Đơn thuốc ung thư"), _OnTreatListCancerOrderItemFnc);

	m_wndTreatList.AddEvent(0, _T("-"), NULL);
	m_wndTreatList.AddEvent(7, _T("Mệnh lệnh điều trị"), _OnTreatListDrugOrderAdviceItemFnc);

	m_wndTreatList.AddEvent(0, _T("-"), NULL);
	m_wndTreatList.AddEvent(8, _T("In đơn thuốc"), _OnTreatListPrintPrescriptionFnc);

	m_wndTreatList.AddEvent(0, _T("-"), NULL);
	m_wndTreatList.AddEvent(9, _T("Sửa số lượng thuốc"), _OnTreatListEditPrescriptionQtyFnc);
	m_wndTreatList.AddEvent(0, _T("-"), NULL);
	m_wndTreatList.AddEvent(10, _T("Sắp xếp thứ tự thuốc"), _OnTreatListArrangePrescriptionFnc);
//	m_wndTreatList.AddEvent(0, _T("-"), NULL);
//	m_wndTreatList.AddEvent(4, _T("Chủ nhiệm khoa điểm bệnh"), _OnTreatListNoteOfDeanItemFnc);

	m_wndDateList.SetEvent(WE_SELCHANGE, _OnDateListSelectChangeFnc);
	m_wndDateList.SetEvent(WE_LOADDATA, _OnDateListLoadDataFnc);
	m_wndDateList.SetEvent(WE_DBLCLICK, _OnDateListDblClickFnc);
	
	m_wndDateList.AddEvent(1, _T("Confirm"), _OnDateListConfirmItemFnc);
	m_wndDateList.AddEvent(0, _T("-"), NULL);
	m_wndDateList.AddEvent(2, _T("Disconfirm"), _OnDateListDisconfirmItemFnc);
	m_wndDateList.AddEvent(0, _T("-"), NULL);
	m_wndDateList.AddEvent(3, _T("Delete"), _OnDateListDeleteItemFnc);
	m_wndDateList.AddEvent(0, _T("-"), NULL);
	m_wndDateList.AddEvent(4, _T("Show History"), _OnShowHistoryFnc, 0, 0, 0);

	m_wndDisease.SetEvent(WE_CLICK, _OnDiseaseSelectFnc);
	m_wndPrescription.SetEvent(WE_CLICK, _OnPrescriptionSelectFnc);
	m_wndParaclinic.SetEvent(WE_CLICK, _OnParaclinicSelectFnc);
	m_wndSurgeryOpt.SetEvent(WE_CLICK, _OnSurgeryOperationSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndLock.SetEvent(WE_CLICK, _OnLockSelectFnc);
	m_wndUnLock.SetEvent(WE_CLICK, _OnUnLockSelectFnc);
	int nMode = GetMode();


	SetMode(nMode);
	OnDateListLoadData();
//	OnTreatListLoadData();
	m_wndPrescription.EnableWindow(FALSE);
	m_wndParaclinic.EnableWindow(FALSE);
	m_wndSurgeryOpt.EnableWindow(FALSE);
	
	m_wndMonth.EnableWindow(TRUE);

}
void CHMSTreatmentTrackingDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndMonth.GetDlgCtrlID(), m_szMonthKey);

}
void CHMSTreatmentTrackingDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSTreatmentTrackingDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSTreatmentTrackingDialog::SetDefaultValues(){

	m_szMonthKey.Empty();

}
int CHMSTreatmentTrackingDialog::SetMode(int nMode){
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
 			EnableButtons(TRUE, 3, 4, -1);
 			break;
 		case VM_VIEW: 
 			EnableControls(FALSE);
 			EnableButtons(FALSE, -1);
 			break;
 		case VM_NONE: 
 			EnableControls(FALSE);
 			EnableButtons(TRUE, 0, 6, -1);
 			SetDefaultValues();
 			break;
 		};
 		UpdateData(FALSE);
		m_wndClose.EnableWindow(TRUE);
 		return nOldMode;
}
void CHMSTreatmentTrackingDialog::OnMonthSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSTreatmentTrackingDialog::OnMonthSelendok(){
	UpdateData(TRUE);
	OnDateListLoadData();
}
/*void CHMSTreatmentTrackingDialog::OnMonthSetfocus(){
	
}*/
/*void CHMSTreatmentTrackingDialog::OnMonthKillfocus(){
	
}*/
long CHMSTreatmentTrackingDialog::OnMonthLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;

	
	///
	if(m_wndMonth.IsSearchKey() && !m_szMonthKey.IsEmpty()){
		szWhere.Format(_T(" and month='%s' "), m_szMonthKey);
	};

	szSQL.Format(_T(" SELECT *") \
_T(" FROM") \
_T("   ( SELECT DISTINCT to_char(hsie_date,'MM/YYYY') AS MONTH") \
_T("   FROM hms_siexam") \
_T("   WHERE hsie_docno = %ld") \
_T("   ) tbl") \
_T(" WHERE 1=1 %s ORDER BY month ") , m_nDocumentNo, szWhere);


	m_wndMonth.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	m_wndMonth.AddItems(_T("Tất cả"), NULL);
	while(!rs.IsEOF()){ 
		m_wndMonth.AddItems(
			rs.GetValue(_T("month")), 
			NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CHMSTreatmentTrackingDialog::OnMonthAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSTreatmentTrackingDialog::OnTreatListDblClick(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	int nDateSel = m_wndDateList.GetCurSel();
	int nSel  = m_wndTreatList.GetCurSel();
	if(nSel < 0) return;
	CString szKey = m_wndTreatList.GetItemKey(nSel);

	
	CString szTreatDate = m_wndDateList.GetItemText(nDateSel, 1);
	int nMode = VM_EDIT;
	if(IsLocked())
		nMode = VM_VIEW;
	COleDateTime dte1, dte2;
	dte1.ParseDateTime(szTreatDate);
	dte2.ParseDateTime(pMF->GetSysDateTime());
	if(dte1 >= dte2 )
		nMode = VM_EDIT;

	//if(m_szCreatedBy != pMF->GetCurrentUser())
	if(m_szCreatedBy != pMF->GetCurrentUser() && pMF->m_UserInfo.su_groupid != _T("A") && !pMF->CheckPermission(_T("admin.TM.100.1")))
	{
		nMode = VM_VIEW;
	}

	if(szKey.Left(2) == _T("E|"))
	{
		long nUID = str2long(m_wndTreatList.GetItemText(nSel, 2));
		

		CHMSTreatmentTrackingDiseaseDialog dlg(this, nMode, m_nDocumentNo, m_nTreatIdx);
		
		if(dlg.DoModal() == IDOK)
		{
			m_bRefreshTreat = false;
			OnDateListLoadData();
			for (int i =0; i < m_wndDateList.GetItemCount(); i++)
			{
				long nIdx = str2long(m_wndDateList.GetItemText(i, 0));
				if(nIdx == m_nTreatIdx)
				{
					m_wndDateList.SetCurSel(i);
					break;
				}
			}
			OnTreatListLoadData();
			m_bRefreshTreat = true;
		}
	}

	if(szKey.Left(2) == _T("O|"))
	{
		long nOptIdx = str2long(szKey.Mid(2));

		CHMSOperationScheduleDetailDialog dlg(this, VM_VIEW);
		dlg.m_nOperationID = nOptIdx;
		dlg.m_nTreatIdx = m_nTreatIdx;
		dlg.m_nDocumentNo = m_nDocumentNo;
		dlg.m_nPatientNo = pMF->m_nPatientNo;
		
		if(dlg.DoModal() == IDOK)
		{
			int nSel = m_wndDateList.GetCurSel();
			OnDateListLoadData();
			m_wndDateList.SetCurSel(nSel);

		}
	}
	if(szKey.Left(2) == _T("D|"))
	{
		long nOrderId, nProductId;
		CStringToken tk(szKey, _T("|"));
		if(tk.GetSize() >= 2)
		{
			tk.GetAt(1, nOrderId);
			tk.GetAt(2, nProductId);
			_tprintf(_T("\r\n%ld:%d"), nOrderId, nProductId);
			
			if(!IsLocked())
				OnPrescriptionEdit(nOrderId, nProductId);
			else
			{
				//int nSel = m_wndTreatList.GetCurSel();
				//if(nSel < 0) return;
				//CString szBatchID = m_wndTreatList.GetItemText(nSel, 5);
				//_tprintf(_T("\r\nszBatchID: %s"), szBatchID);
				//if(!szBatchID.IsEmpty()){
				//	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
				//	pMF->m_wndDailyDrugOrder.m_szOrderNo = szBatchID;
				//	pMF->m_wndDailyDrugOrder.OnOrderNoCheckValue();
				//	pMF->SetActivePane(2);
				//}
			}
		}
	}

	if(szKey.Left(2) == _T("X|"))
	{
		long nIdx;
		CStringToken tk(szKey, _T("|"));
		if(tk.GetSize() >= 1)
		{
			tk.GetAt(1, nIdx);
			if(!IsLocked() && pMF->IsActiveDocument())
			{
				CRect rc;
				m_wndTreatmentInformation.GetWindowRect(&rc);
				/*
				CHMSTreatmentPrescriptionPopupEx dlg(this, VM_EDIT, rc.left-5, rc.top);
				dlg.m_nTreatIdx = m_nTreatIdx;
				dlg.m_nIdx = nIdx;
				if(dlg.DoModal() == IDOK)
				{

				}
				*/
				m_wndPopupEx->SetMode(VM_EDIT);
				m_wndPopupEx->m_nTreatIdx = m_nTreatIdx;
				m_wndPopupEx->m_nIdx = nIdx;
				m_wndPopupEx->m_pParentOwner = this;
				m_wndPopupEx->ShowPopup(&m_wndTreatList);

			}
		}
	}
	if (szKey.Left(3) == _T("DA|") || szKey.Left(3) == _T("XA|"))
	{
		long nID = 0;
		CString szType;
		CStringToken tk(szKey, _T("|"));
		tk.GetAt(1, nID);
		tk.GetAt(2, szType);
		if (szType == _T("D"))
		{
			CIVFAppointmentDialog dlg(this);
			dlg.m_nDocumentNo = m_nDocumentNo;
			dlg.m_nIdx = nID;
			dlg.SetMode(VM_VIEW);
			dlg.DoModal();
		}
		if (szType == _T("T"))
		{
			CIVFAppointmentDialog2 dlg(this);
			dlg.m_nDocumentNo = m_nDocumentNo;
			dlg.m_nIdx = nID;
			dlg.SetMode(VM_VIEW);
			dlg.DoModal();
		}
		OnTreatListLoadData();
	}
} 


void CHMSTreatmentTrackingDialog::OnTreatListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szKey = m_wndTreatList.GetItemKey(nNewItem);
	if (szKey.Left(2) == _T("D|") || szKey.Left(2) == _T("X|"))
	{
		m_wndTreatList.SetMenuState(10, TRUE);
	}
	else
	{
		m_wndTreatList.SetMenuState(10, FALSE);
	}
} 

int CHMSTreatmentTrackingDialog::OnTreatListUpdateDiseaseItem(){
	OnTreatListDblClick();
	return 0;
}
int CHMSTreatmentTrackingDialog::OnTreatListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	int nSel = m_wndTreatList.GetCurSel();
	if(nSel < 0)
		return 0;
	CString tmpStr;
	CString szSQL, szIId;
	long nOrderId, nProductId, nLineIdx = 0;
	long nOrderLine;

	CString szKey = m_wndTreatList.GetItemKey(nSel);
	CStringToken tk(szKey, _T("|"));
	tk.GetAt(0, tmpStr);

	if(IsLocked())
	{
		ShowMessageBox(_T("Phiếu đã được xác nhận. Không cho phép xóa đề mục"));
		return 0;
	}


	if(pMF->GetCurrentUser() != m_szCreatedBy)
	{
		CString tmpStr;
		tmpStr.Format(_T("Phiếu được tạo bởi [%s] không cho phép xóa"), m_szCreatedBy);
		ShowMessageBox(tmpStr);
		return -1;
	}

	if(!pMF->IsActiveDocument())
	{
		if(tmpStr == _T("D"))
		{
			tk.GetAt(1, nOrderId);
			tk.GetAt(2, nProductId);
			tk.GetAt(3, szIId);
			szSQL.Format(_T("SELECT hpo_orderstatus FROM hms_ipharmaorder WHERE hpo_docno = %ld and hpo_orderid=%ld"),
				m_nDocumentNo, nOrderId);
			CRecord rs(&pMF->m_db);
			rs.ExecSQL(szSQL);
			if(rs.IsEOF())
			{
				return 0;
			}
			CString szStatus;
			rs.GetValue(_T("hpo_orderstatus"), szStatus);
			if(szStatus != _T("O"))
			{
				ShowMessageBox(_T("Không cho phép xóa đơn thuốc ở trạng thái <> 'O' "));
				return 0;
			}
			int ret = ShowMessageBox(_T("Bạn có chắc chắn muốn xóa thuốc đã chọn không?"), MB_YESNO);
			if(ret == IDNO)
				return 0;

			/*szSQL.Format(_T(" HMS_IPHARMAORDER_DELLINE_V5(%ld, %ld, '%s') "),
				nOrderId, nProductId, pMF->GetCurrentUser());*/
			szSQL.Format(_T(" HMS_IPHARMAORDER_DELLINE_V6_2(%ld, %ld, '%s', '%s') "),
				nOrderId, nProductId, pMF->GetCurrentUser(), szIId);
	
			ret = str2int(pMF->ExecDML(szSQL));
			if(ret <= 0)
			{
				if(ret == -100)
					ShowMessageBox(_T("Không thể xóa được thuốc, vật tư. \r\n Thuốc kê ở phác đồ điều trị ung thư, phải vào trong phác đồ để xóa"));
				else
					ShowMessageBox(_T("Không thể xóa được thuốc, vật tư."));
			}
			else
			{
				OnTreatListLoadData();
			}
		}
		else
			ShowMessageBox(_T("Hồ sơ đã đóng. Không cho phép xóa"));
		return 0;
	}


	
	if(tmpStr == _T("E"))
	{
		int ret = ShowMessageBox(_T("Bạn có chắc chắn muốn xóa phiếu đã chọn không?"), MB_YESNO);
		if(ret == IDNO)
			return 0;
		szSQL.Format(_T("HMS_SIEXAM_DELETE(%ld, %ld, '%s') "),m_nDocumentNo,m_nTreatIdx, pMF->GetCurrentUser());
		ret = str2int(pMF->ExecDML(szSQL));
		if(ret <= 0)
		{
			if(ret < -1)
			{
				ShowMessageBox(_T("Phiếu đã được thêm cận lâm sàng, PTTT hoặc thuốc, Không cho phép xóa"));
			}
			else
				ShowMessageBox(_T("Không xóa được phiếu điều trị"));
		}
		OnTreatListLoadData();
		return 0;
	}
	if(tmpStr == _T("D"))
	{
		tk.GetAt(1, nOrderId);
		tk.GetAt(2, nProductId);
		tk.GetAt(3, szIId);
		int ret = ShowMessageBox(_T("Bạn có chắc chắn muốn xóa thuốc đã chọn không?"), MB_YESNO);
		if(ret == IDNO)
			return 0;

		/*szSQL.Format(_T(" HMS_IPHARMAORDER_DELLINE_V5(%ld, %ld, '%s') "),
			nOrderId, nProductId, pMF->GetCurrentUser());*/
		szSQL.Format(_T(" HMS_IPHARMAORDER_DELLINE_V6_2(%ld, %ld, '%s', '%s') "),
			nOrderId, nProductId, pMF->GetCurrentUser(), szIId);
		ret = str2int(pMF->ExecDML(szSQL));
		if(ret <= 0)
		{
			if(ret == -100)
				ShowMessageBox(_T("Không thể xóa được thuốc, vật tư. \r\n Thuốc kê ở phác đồ điều trị ung thư, phải vào trong phác đồ để xóa"));
			else
				ShowMessageBox(_T("Không thể xóa được thuốc, vật tư."));
		}
		else
		{
			OnTreatListLoadData();
		}
	}
	if(tmpStr == _T("X"))
	{
		tk.GetAt(1, nLineIdx);
		int ret = ShowMessageBox(_T("Bạn có chắc chắn muốn xóa thuốc đã chọn không?"), MB_YESNO);
		if(ret == IDNO)
			return 0;

		szSQL.Format(_T(" delete from hms_prescription where hp_idx = %ld "), nLineIdx);
		ret = pMF->ExecSQL(szSQL);
		if(ret <= 0)
		{
			ShowMessageBox(_T("Không thể xóa được thuốc, vật tư."));
		}
		else
		{
			OnTreatListLoadData();
		}
	}
	if(tmpStr == _T("T") || tmpStr == _T("P"))
	{
		if(tk.GetSize() < 2)
			return 0;

		CString szItemId;
		tk.GetAt(1, nOrderId);
		tk.GetAt(2, nOrderLine);
		tk.GetAt(3, szItemId);

		int ret = ShowMessageBox(_T("Bạn có chắc chắn muốn hủy mục đã chọn không?"), MB_YESNO);
		if(ret == IDNO)
			return 0;


		szSQL.Format(_T("HMS_PARACLINIC_CANCELITEM(%ld, '%s', '%s') "), 
			nOrderId, szItemId, pMF->GetCurrentUser());
		 ret = str2int(pMF->ExecDML(szSQL));
		if(ret > 0)
		{
			OnTreatListLoadData();
		}
		
	}
	if (tmpStr == _T("DA") || tmpStr == _T("XA"))
	{
		tk.GetAt(1, nLineIdx);
		int ret = ShowMessageBox(_T("Bạn có chắc chắn lịch hẹn đã chọn không?"), MB_YESNO);
		if(ret == IDNO)
			return 0;

		szSQL.Format(_T(" delete from ivf_appointment where ivf_appointment_id = %ld "), nLineIdx);
		ret = pMF->ExecSQL(szSQL);
		if(ret <= 0)
		{
			ShowMessageBox(_T("Không thể xóa được lịch hẹn!"));
		}
		else
		{
			OnTreatListLoadData();
		}
	}
	return 0;
} 


#define COLOR_CAPTION RGB(64,128,192)
#define COLOR_GROUP RGB(225, 225, 225)
#define COLOR_GROUP1 RGB(192,192,255)
#define COLOR_GROUP2 RGB(192,192,255)

long CHMSTreatmentTrackingDialog::OnTreatListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CRecord rsl(&pMF->m_db);
	CString szSQL;
	int nSel = m_wndDateList.GetCurSel();
	if(nSel < 0)
		return 0;
	

	CString szPulse, szTemperature, szDiseaseTracking, szTreatment, szDiet;
	CString tmpStr;
	int nItem=0;
	long nOID;
	int nIndex = 0;
	m_wndTreatList.BeginLoad();
	
	CGridListItem* o = new CGridListItem();
	CGridListItem* o2 = NULL;
	CGridCell* cell = new CGridCell();
	
	

	szSQL.Format(_T("SELECT hsie_deptid as deptid, TO_CHAR(hsie_date, 'HH24:MI DD/MM/YYYY') as order_date, ") \
		_T(" get_username(hsie_doctor) as doctor,  hsie_pulse as pulse, hsie_temperature as temperature, ") \
		_T(" hsie_desc, hsie_diagnosis_identify, hsie_next_plan, hsie_diet, hsie_nurseassistance, hsie_para_res as para_res, hsie_deannote as deannote, ") \
		_T(" HSIE_BLOODPRESSURE, HSIE_BLOODPRESSUREX, HSIE_BREATHINTERVAL  ") \
		_T(" FROM hms_siexam WHERE hsie_docno=%ld and hsie_idx=%ld and hsie_type='DT' "),
		m_nDocumentNo, m_nTreatIdx);
	rs.ExecSQL(szSQL);

	CGridListItem* oh = new CGridListItem(COLOR_GROUP, RGB(0, 128, 192));
	oh->Add(_T("Mạch,Nhiệt độ"), 100);
	oh->Add(_T("Diễn biến của bệnh và kết quả cận lâm sàng"), 520);
	oh->Add(_T("Chế độ ăn và hộ lý"), 150);
	cell->AddRow(oh);
	
	CString szDoctor;
	CString szParaclinicalResult;
	CString szBreathInterval;
	int nBloodPreL;
	int nBloodPreH;
	CString szDesc, szData;

	if(!rs.IsEOF())
	{
/*
		rs.GetValue(_T("pulse"), szPulse);
		rs.GetValue(_T("temperature"), szTemperature);
		rs.GetValue(_T("HSIE_BLOODPRESSURE"), nBloodPreL);
		rs.GetValue(_T("HSIE_BLOODPRESSUREX"), nBloodPreH);
		rs.GetValue(_T("HSIE_BREATHINTERVAL"), szBreathInterval);
		rs.GetValue(_T("disease_tracking"), szDiseaseTracking);
		rs.GetValue(_T("diet"), szDiet);
		rs.GetValue(_T("doctor"), szDoctor);
		rs.GetValue(_T("para_res"), szParaclinicalResult);
		rs.GetValue(_T("deannote"), m_szNoteOfDean);
		
		CGridListItem* o1 = new CGridListItem();

		tmpStr.Empty();
		if(!szPulse.IsEmpty() && szPulse != _T("0"))
		{
			tmpStr.AppendFormat(_T("Mạch: %s"), szPulse);
		}
		if(!szTemperature.IsEmpty() && szTemperature != _T("0"))
		{
			if(!tmpStr.IsEmpty()) tmpStr.AppendFormat(_T("\r\n"));
			tmpStr.AppendFormat(_T("Nhiệt độ: %s"), szTemperature);
		}
		if(nBloodPreL > 0 && nBloodPreH > 0){
			if(!tmpStr.IsEmpty()) tmpStr.AppendFormat(_T("\r\n"));
			tmpStr.AppendFormat(_T("Huyết áp:%d/%d"), nBloodPreL, nBloodPreH);
		}
		if(!szBreathInterval.IsEmpty() && szBreathInterval != _T("0"))
		{
			if(!tmpStr.IsEmpty()) tmpStr.AppendFormat(_T("\r\n"));
			tmpStr.AppendFormat(_T("Nhịp thở: %s"), szBreathInterval);
		}

		o1->Add(tmpStr, 100, CELLTYPE_STRING, DT_LEFT|DT_WORDBREAK);
		if(!szParaclinicalResult.IsEmpty())
		{
			szDiseaseTracking.Replace(_T("\r\n"), _T("<br>"));
			szParaclinicalResult.Replace(_T("\r\n"), _T("<br>"));
			tmpStr.Format(_T("%s<br><b>Kết quả cận lâm sàng</b><br><i>%s</i>"),
			szDiseaseTracking, szParaclinicalResult);
			o1->Add(tmpStr, 520, CELLTYPE_HTML, DT_LEFT|DT_WORDBREAK);
		}
		else
		{
			o1->Add(szDiseaseTracking, 520, CELLTYPE_STRING, DT_LEFT|DT_WORDBREAK);
		}
		o1->Add(szDiet, 100, CELLTYPE_STRING, DT_LEFT|DT_WORDBREAK);
		cell->AddRow(o1);
		//Bac si
		o1 = new CGridListItem();
		o1->Add(_T("Bác sĩ"), 100);
		tmpStr.Format(_T("<b>%s</b>"), szDoctor);
		o1->Add(tmpStr, 200, CELLTYPE_HTML, DT_LEFT|DT_WORDBREAK);
		if(m_szNoteOfDean.IsEmpty())
		{

		}
		cell->AddRow(o1);
*/

		rs.GetValue(_T("hsie_desc"), szDesc);
		rs.GetValue(_T("hsie_diagnosis_identify"), tmpStr);
		if(!tmpStr.IsEmpty())
		{
			szDesc.AppendFormat(_T("\r\nNhận định chẩn đoán: %s"), tmpStr);
		}

		rs.GetValue(_T("hsie_next_plan"), tmpStr);
		if(!tmpStr.IsEmpty())
		{
			szDesc.AppendFormat(_T("\r\nKế hoạch tiếp theo: %s"), tmpStr);
		}

		//if(!szDesc.IsEmpty())
		{
			//o = new CGridListItem();
			o2 = new CGridListItem(RGB(230, 230, 230), RGB(0, 128, 192));
			rs.GetValue(_T("deptid"), szData);
			tmpStr.Format(_T("Khoa: %s"), szData);
			o2->Add(tmpStr, 200);
			rs.GetValue(_T("order_date"), szData);
			tmpStr.Format(_T("Ngày: %s"), szData);
			o2->Add(tmpStr, 150);

			rs.GetValue(_T("doctor"), szData);
			tmpStr.Format(_T("Bác sĩ: %s"), szData);
			o2->Add(tmpStr, 500);
			cell = new CGridCell();
			cell->AddRow(o2);
			
			int pulse, bloodpreL, bloodpreH, breathInterval;
			float temperature;
			CString szDiet, szNurseAssistance;

			rs.GetValue(_T("pulse"), pulse);
			rs.GetValue(_T("temperature"), temperature);
			rs.GetValue(_T("HSIE_BLOODPRESSURE"), bloodpreL);
			rs.GetValue(_T("HSIE_BLOODPRESSUREX"), bloodpreH);
			rs.GetValue(_T("HSIE_BREATHINTERVAL"), breathInterval);
			rs.GetValue(_T("para_res"), szData);
			rs.GetValue(_T("hsie_diet"), szDiet);
			tmpStr = pMF->GetSelectionString(_T("HMS_DIET_MODE"), szDiet);
			if(!szDiet.IsEmpty() && IsDigit(szDiet))
			{
				szDiet = pMF->GetSelectionString(_T("HMS_DIET_MODE"), szDiet);
			}
			rs.GetValue(_T("hsie_nurseassistance"), szNurseAssistance);
		
			CString szFuncs;
			szFuncs.Empty();
			if(pulse > 0)
			{
				szFuncs.AppendFormat(_T("  M: %d;"), pulse);
			}
			if(temperature > 0)
			{
				szFuncs.AppendFormat(_T("  T<sup>o</sup>: %.1f<sup>o</sup>;"), temperature);
			}
			
			if(bloodpreL+bloodpreH > 0)
			{

				szFuncs.AppendFormat(_T("  HA: %d/%d;"), bloodpreL, bloodpreH);
			}
			if(breathInterval > 0)
			{
				szFuncs.AppendFormat(_T("  NT: %d"), breathInterval);
			}
			
			if(!szFuncs.IsEmpty())
			{
				tmpStr.Format(_T("<b><i>Chức năng sống</i></b><br>  %s<br><b><i>Diễn biến</i></b><br>%s"), szFuncs, szDesc);
			}
			else
				tmpStr.Format(_T("<b><i>Diễn biến</i></b><br>%s"),szDesc);

			if(!szData.IsEmpty())
			{
				tmpStr.AppendFormat(_T("<br><b><i>Kết quả cận lâm sàng</i></b><br><i>%s</i>"),szData);
			}
			if(!szDiet.IsEmpty() || !szNurseAssistance.IsEmpty())
			{
				if(!szDiet.IsEmpty() && IsDigit(szDiet))
				{
					szDiet = pMF->GetSelectionString(_T("HMS_DIET_MODE"), szDiet);
				}

				if(!szNurseAssistance.IsEmpty())
				{
					if(!szDiet.IsEmpty())
						szDiet.AppendFormat(_T("<br>"));
					if(IsDigit(szNurseAssistance))
					{
						szNurseAssistance = pMF->GetSelectionString(_T("HMS_CHEDOHOLY"), szNurseAssistance);
					}
					
					szDiet.AppendFormat(_T("%s"), szNurseAssistance);
				}
				tmpStr.AppendFormat(_T("<br><b><i>Chế độ ăn và hộ lý</i></b><br>%s"), szDiet);
			}
			tmpStr.Replace(_T("\r\n"), _T("<br>"));
			o2 = new CGridListItem();
			o2->Add(tmpStr, 755, CELLTYPE_HTML, DT_LEFT|DT_WORDBREAK);
			cell->AddRow(o2);

		//	o->Add(cell);
		//	m_wndTreatList.Add(o);
		}

	}

	if(cell) o->Add(cell);
	nItem = m_wndTreatList.Add(o);
	m_wndTreatList.SetItemKey(nItem, _T("E|"));

	//Load thong tin thuoc	
	LoadDrugList();
	
	LoadDrugListEx();
	//Xet nghiem
	szSQL.Format(_T(" SELECT hpc_orderid,") \
				_T("   hpc_groupid,") \
				_T("   hfg_name as hpc_groupname, hpc_type ") \
				_T(" FROM ( SELECT hpc_docno, hpc_orderid, hpc_groupid, hpc_treatidx, 'T' AS hpc_type FROM hms_testorder ") \
				_T(" UNION ALL ") \
				_T(" SELECT hpc_docno, hpc_orderid, hpc_groupid, hpc_treatidx, 'P' AS hpc_type FROM hms_pacsorder ) ") \
				_T("   ,hms_fee_group") \
				_T(" WHERE hpc_docno  = %ld ") \
				_T(" AND hpc_treatidx = %ld ") \
				_T(" AND hpc_groupid  = hfg_id") \
				_T(" ORDER BY hfg_index2,") \
				_T("   hfg_index"), m_nDocumentNo, m_nTreatIdx);
	
	rs.ExecSQL(szSQL);

	if(!rs.IsEOF())
	{
		cell = new CGridCell();
		o2 = new CGridListItem(COLOR_CAPTION, COLOR_WHITE);
		o2->Add(_T("CẬN LÂM SÀNG"), 755);
		o2->SetState(ODS_DISABLED);
		cell->AddRow(o2);
		
		//Add line(Stt, ten xet nghiem, don vi, so luong, ket qua, ghi chu)
		o2 = new CGridListItem(COLOR_GROUP, RGB(0, 128, 192));
		o2->Add(_T("Stt"), 40, CELLTYPE_STRING, DT_CENTER);
		o2->Add(_T("Tên xét nghiệm"), 250, CELLTYPE_STRING, DT_CENTER);
		o2->Add(_T("Đơn vị"), 80, CELLTYPE_STRING, DT_CENTER);
		o2->Add(_T("Số lượng"), 65, CELLTYPE_STRING, DT_CENTER);
		o2->Add(_T("Kết quả"), 100, CELLTYPE_STRING, DT_CENTER);
		o2->Add(_T("Chỉ số BT"), 100, CELLTYPE_STRING, DT_CENTER);
		o2->Add(_T("Ghi chú"), 120, CELLTYPE_STRING, DT_CENTER);
		cell->AddRow(o2);

		o = new CGridListItem();
		o->Add(cell);
		m_wndTreatList.Add(o);

	}

	CString szGroupName;
	CString szType;
	
	nIndex = 1;	
	while(!rs.IsEOF())
	{
		rs.GetValue(_T("hpc_orderid"), nOID);
		rs.GetValue(_T("hpc_groupname"), szGroupName);
		rs.GetValue(_T("hpc_type"), szType);
		if(szType == _T("T"))
		{
			szSQL.Format(_T(" SELECT hpcl_orderlineid AS orderline_id,") \
			_T("   hpcl_itemid           AS itemid,") \
			_T("   hfl_name              AS testname,") \
			_T("   hfl_unit              AS unit,") \
			_T("   hpcl_qty              AS qty,") \
			_T("   hpcl_result           AS testresult,") \
			_T("   hfl_index1           AS normindex,") \
			_T("   hpcl_note             AS testnote") \
			_T(" FROM hms_testorderline,") \
			_T("   hms_fee_list") \
			_T(" WHERE hpcl_orderid = %ld and hpcl_status <> 'C' ") \
			_T(" AND hfl_feeid      = hpcl_itemid") \
			_T(" ORDER BY hpcl_orderlineid"), nOID);
			rsl.ExecSQL(szSQL);
			if(rsl.GetRecordCount() > 0)
			{
				o2 = new CGridListItem(COLOR_GROUP1, RGB(0, 128, 255));
				tmpStr.Format(_T("*"));
				o2->Add(tmpStr, 40);
				o2->Add(szGroupName, 250);

				cell = new CGridCell();
				cell->AddRow(o2);

				o = new CGridListItem();
				o->Add(cell);
				m_wndTreatList.Add(o);

			}
			while(!rsl.IsEOF())
			{
				cell = new CGridCell();
				o2 = new CGridListItem();
				tmpStr.Format(_T("%d"), nIndex++);
				o2->Add(tmpStr, 40, CELLTYPE_STRING, DT_CENTER);
				rsl.GetValue(_T("testname"), tmpStr);
				o2->Add(tmpStr, 250, CELLTYPE_STRING, DT_LEFT|DT_WORDBREAK);
				rsl.GetValue(_T("unit"), tmpStr);
				o2->Add(tmpStr, 80);
				rsl.GetValue(_T("qty"), tmpStr);
				o2->Add(tmpStr, 65, CELLTYPE_STRING, DT_RIGHT);
				rsl.GetValue(_T("testresult"), tmpStr);
				o2->Add(tmpStr, 100);
				rsl.GetValue(_T("normindex"), tmpStr);
				o2->Add(tmpStr, 100);
				rsl.GetValue(_T("testnote"), tmpStr);
				o2->Add(tmpStr, 120);
				cell->AddRow(o2);

				o = new CGridListItem();
				o->Add(cell);
				int nItem = m_wndTreatList.Add(o);

				long nOrderLine;
				CString szItemId;
				rsl.GetValue(_T("itemid"), szItemId);
				rsl.GetValue(_T("orderline_id"), nOrderLine);
				tmpStr.Format(_T("T|%ld|%ld|%s"), nOID, nOrderLine, szItemId);
				m_wndTreatList.SetItemKey(nItem, tmpStr);


				rsl.MoveNext();
			}
		}
		else
		{

			szSQL.Format(_T(" SELECT hpcl_orderlineid AS orderline_id,") \
			_T("   hpcl_itemid           AS itemid,") \
			_T("   hfl_name              AS testname,") \
			_T("   hfl_unit              AS unit,") \
			_T("   hpcl_qty              AS qty,") \
			_T("   hpcl_result           AS testresult,") \
			_T("   hfl_index1           AS normindex,") \
			_T("   hpcl_note             AS testnote") \
			_T(" FROM hms_pacsorderline,") \
			_T("   hms_fee_list") \
			_T(" WHERE hpcl_orderid = %ld and hpcl_status <> 'C' ") \
			_T(" AND hfl_feeid      = hpcl_itemid") \
			_T(" ORDER BY hpcl_orderlineid"), nOID);
			rsl.ExecSQL(szSQL);
			if(rsl.GetRecordCount() > 0)
			{
				o2 = new CGridListItem(COLOR_GROUP1, RGB(0, 128, 255));
				tmpStr.Format(_T("*"));
				o2->Add(tmpStr, 40);
				o2->Add(szGroupName, 250);

				cell = new CGridCell();
				cell->AddRow(o2);

				o = new CGridListItem();
				o->Add(cell);
				m_wndTreatList.Add(o);

			}
			while(!rsl.IsEOF())
			{
				cell = new CGridCell();
				o2 = new CGridListItem();
				tmpStr.Format(_T("%d"), nIndex++);
				o2->Add(tmpStr, 40, CELLTYPE_STRING, DT_CENTER);
				rsl.GetValue(_T("testname"), tmpStr);
				o2->Add(tmpStr, 250, CELLTYPE_STRING, DT_LEFT|DT_WORDBREAK);
				rsl.GetValue(_T("unit"), tmpStr);
				o2->Add(tmpStr, 80);
				rsl.GetValue(_T("qty"), tmpStr);
				o2->Add(tmpStr, 65, CELLTYPE_STRING, DT_RIGHT);
				rsl.GetValue(_T("testresult"), tmpStr);
				o2->Add(tmpStr, 120);
				cell->AddRow(o2);

				o = new CGridListItem();
				o->Add(cell);
				int nItem = m_wndTreatList.Add(o);

				long nOrderLine;
				CString szItemId;
				rsl.GetValue(_T("itemid"), szItemId);
				rsl.GetValue(_T("orderline_id"), nOrderLine);
				tmpStr.Format(_T("T|%ld|%ld|%s"), nOID, nOrderLine, szItemId);
				m_wndTreatList.SetItemKey(nItem, tmpStr);


				rsl.MoveNext();
			}


		}


		rs.MoveNext();
	}


/*
	//Chuan doan hinh anh
	szSQL.Format(_T(" SELECT hpc_orderid,") \
				_T("   hpc_groupid,") \
				_T("   hfg_name as hpc_groupname ") \
				_T(" FROM hms_pacsorder,") \
				_T("   hms_fee_group") \
				_T(" WHERE hpc_docno  = %ld ") \
				_T(" AND hpc_treatidx = %ld ") \
				_T(" AND hpc_groupid  = hfg_id") \
				_T(" ORDER BY hfg_index2,") \
				_T("   hfg_index"), m_nDocumentNo, m_nTreatIdx);
	
	rs.ExecSQL(szSQL);
	
	
	while(!rs.IsEOF())
	{
		rs.GetValue(_T("hpc_orderid"), nOID);
		rs.GetValue(_T("hpc_groupname"), szGroupName);

		o2 = new CGridListItem(COLOR_GROUP1, COLOR_WHITE);
		tmpStr.Format(_T("*"));
		o2->Add(tmpStr, 40);
		o2->Add(szGroupName, 300);

		cell = new CGridCell();
		cell->AddRow(o2);

		o = new CGridListItem();
		o->Add(cell);
		m_wndTreatList.Add(o);

		szSQL.Format(_T(" SELECT hpcl_orderlineid AS orderline_id,") \
		_T("   hpcl_itemid           AS itemid,") \
		_T("   hfl_name              AS testname,") \
		_T("   hfl_unit              AS unit,") \
		_T("   hpcl_qty              AS qty,") \
		_T("   hpcl_result           AS testresult,") \
		_T("   hfl_index1           AS normindex,") \
		_T("   hpcl_note             AS testnote") \
		_T(" FROM hms_pacsorderline,") \
		_T("   hms_fee_list") \
		_T(" WHERE hpcl_orderid = %ld") \
		_T(" AND hfl_feeid      = hpcl_itemid") \
		_T(" ORDER BY hpcl_orderlineid"), nOID);
		rsl.ExecSQL(szSQL);
		while(!rsl.IsEOF())
		{
			cell = new CGridCell();
			o2 = new CGridListItem();
			tmpStr.Format(_T("%d"), nIndex++);
			o2->Add(tmpStr, 40, CELLTYPE_STRING, DT_CENTER);
			rsl.GetValue(_T("testname"), tmpStr);
			o2->Add(tmpStr, 300, CELLTYPE_STRING, DT_LEFT|DT_WORDBREAK);
			rsl.GetValue(_T("unit"), tmpStr);
			o2->Add(tmpStr, 80);
			rsl.GetValue(_T("qty"), tmpStr);
			o2->Add(tmpStr, 70, CELLTYPE_STRING, DT_RIGHT);
			rsl.GetValue(_T("testresult"), tmpStr);
			o2->Add(tmpStr, 200);
			cell->AddRow(o2);

			o = new CGridListItem();
			o->Add(cell);
			m_wndTreatList.Add(o);

			rsl.MoveNext();
		}


		rs.MoveNext();
	}


*/

	

	szSQL.Format(_T("SELECT hfl_groupid, ho_idx, ho_orderdate, ho_status, ho_itemid, hfl_name as ho_name, ho_deptid,ho_createdby, ho_hitech, ho_note ") \
		_T("FROM hms_operation ") \
		_T("LEFT JOIN hms_fee_list ON(ho_itemid=hfl_feeid) ") \
		_T("WHERE ho_docno=%ld and ho_treatidx=%ld ") \
		_T("AND ((hfl_servprice+hfl_insprice+hfl_polprice + hfl_reqprice) > 0 OR hms_fee_list.hfl_opt_ref ='Y')  ") \
		_T("ORDER BY ho_idx "), m_nDocumentNo, m_nTreatIdx);
	//_fmsg(_T("%s"), szSQL);
	rs.ExecSQL(szSQL);
	if(rs.GetRecordCount() > 0)
	{

		//Load PTTT
		cell = new CGridCell();
		o2 = new CGridListItem(COLOR_CAPTION, COLOR_WHITE);
		o2->Add(_T("PHẪU THUẬT, THỦ THUẬT"), 250);
		o2->SetState(ODS_DISABLED);
		cell->AddRow(o2);
		o = new CGridListItem();
		o->Add(cell);
		m_wndTreatList.Add(o);

	}
	
	CString szName;
	CString szNote;
	CString szStatus;
	CString szOrderId;
	nIndex = 1;
	while(!rs.IsEOF()){ 
		rs.GetValue(_T("ho_idx"), szOrderId);
		rs.GetValue(_T("hfl_groupid"), szType);
		rs.GetValue(_T("ho_status"), szStatus);
		rs.GetValue(_T("ho_name"), szName);
		rs.GetValue(_T("ho_note"), szNote);
		if(!szNote.IsEmpty())
		{
			szName.AppendFormat(_T(" %s"), szNote);
		}
		cell = new CGridCell();
		o2 = new CGridListItem();
		tmpStr.Format(_T("%d"), nIndex++);
		o2->Add(tmpStr, 40,  CELLTYPE_STRING, DT_CENTER);
		o2->Add(szName, 595, CELLTYPE_STRING, DT_LEFT|DT_WORDBREAK);
		o2->Add(szNote, 120);
		cell->AddRow(o2);
		o = new CGridListItem();
		o->Add(cell);
		int nItem = m_wndTreatList.Add(o);
		tmpStr.Format(_T("O|%s"), szOrderId);
		m_wndTreatList.SetItemKey(nItem, tmpStr);
		rs.MoveNext();
	}

	m_wndTreatList.EndLoad();
	return 0;
}
void CHMSTreatmentTrackingDialog::OnDateListDblClick(){
	
} 
void CHMSTreatmentTrackingDialog::OnDateListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndPrescription.EnableWindow(FALSE);
	m_wndSurgeryOpt.EnableWindow(FALSE);
	m_wndParaclinic.EnableWindow(FALSE);
	
	m_wndPopup->ClosePopup();
	m_wndPopupEx->ClosePopup();

	if(nNewItem < 0)
	{
		return;
	}
	m_nTreatIdx = str2long(m_wndDateList.GetItemText(nNewItem, 0));
	CString szLocked = m_wndDateList.GetItemText(nNewItem, 3);
	m_szCreatedBy = m_wndDateList.GetItemText(nNewItem, 4);

	//if(nNewItem != nOldItem)
	{
		OnTreatListLoadData();
		
		CString szDate = m_wndDateList.GetItemText(nNewItem, 1);
		m_szDate = szDate;

		CDate dte, sysDte;
		dte.ParseDate(szDate.Left(10), yyyymmdd);
		sysDte.ParseDate(pMF->GetSysDate());
		sysDte -=15;
		if(dte >= sysDte)
		{
			m_wndPrescription.EnableWindow(TRUE);
			m_wndSurgeryOpt.EnableWindow(TRUE);
			m_wndParaclinic.EnableWindow(TRUE);
		}
	}
	if(szLocked == _T("Y"))
	{
		m_wndLock.EnableWindow(FALSE);
		m_wndUnLock.EnableWindow(TRUE);
		m_wndPrescription.EnableWindow(FALSE);
		m_wndParaclinic.EnableWindow(FALSE);
		m_wndSurgeryOpt.EnableWindow(FALSE);
	}
	else
	{
		m_wndLock.EnableWindow(TRUE);
		m_wndUnLock.EnableWindow(FALSE);
		m_wndPrescription.EnableWindow(TRUE);
		m_wndParaclinic.EnableWindow(TRUE);
		m_wndSurgeryOpt.EnableWindow(TRUE);
		
	}

	
} 

int CHMSTreatmentTrackingDialog::OnDateListConfirmItem(){
	OnLockSelect();
	return 0;
}

int CHMSTreatmentTrackingDialog::OnDateListDisconfirmItem(){
	OnUnLockSelect();
	return 0;
}

int CHMSTreatmentTrackingDialog::OnDateListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	int nSel = m_wndDateList.GetCurSel();
	if(nSel < 0)
		return 0;
	CString tmpStr;
	CString szSQL;

	if(IsLocked())
	{
		ShowMessageBox(_T("Phiếu đã được khóa. Không cho phép xóa đề mục"));
		return 0;
	}

	if(!pMF->IsActiveDocument())
	{
		ShowMessageBox(_T("Hồ sơ đã đóng. Không cho phép thêm"));
		return 0;
	}

	if(m_szCreatedBy != pMF->GetCurrentUser())
	{
		ShowMessageBox(_T("Phiếu được tạo bởi người khác. Không thể thực hiện được"));
		return 0;
	}


	int ret = ShowMessageBox(_T("Bạn có chắc chắn muốn xóa phiếu đã chọn không?"), MB_YESNO);
	if(ret == IDNO)
		return 0;
	szSQL.Format(_T("HMS_SIEXAM_DELETE(%ld, %ld, '%s') "),m_nDocumentNo,m_nTreatIdx, pMF->GetCurrentUser());
	ret = str2int(pMF->ExecDML(szSQL));
	if(ret <= 0)
	{
			if(ret < -1)
			{
				ShowMessageBox(_T("Phiếu đã được thêm cận lâm sàng, PTTT hoặc thuốc, Không cho phép xóa"));
			}
			else
				ShowMessageBox(_T("Không xóa được phiếu điều trị"));
		return 0;
	}
	OnDateListLoadData();
	m_wndTreatList.DeleteAllItems();
	 return 0;
} 
long CHMSTreatmentTrackingDialog::OnDateListLoadData(){
	
	
	int nCount = 0;
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	CString tmpStr, szDate, szWhere;
	szWhere.Empty();
	if(m_szMonthKey == _T("Tất cả"))
	{
	}
	else if(!m_szMonthKey.IsEmpty())
	{
		szWhere.Format(_T(" and TO_CHAR(hsie_date, 'MM/YYYY')='%s'"), m_szMonthKey);
	}
	if(pMF->IsOutPatient() || pMF->IsCancerPatient())
	{
		szWhere.AppendFormat(_T(" and (hsie_treattime=0 or hsie_treattime=%d) "), pMF->GetTreatTime());
	}
	
	szWhere.AppendFormat(_T(" and hsie_type='DT' "));
	szSQL.Format(_T("SELECT hsie_refidx as treat_idx, ") \
				_T("	hsie_idx as treat_uid, ") \
				_T("	TO_CHAR(hsie_date, 'YYYY-MM-DD HH24:MI') as treat_date, ") \
				_T("	hsie_locked as islocked, ") \
				_T("	hsie_createdby as createdby ") \
				_T(" FROM hms_siexam ") \
				_T(" WHERE hsie_docno = %ld  %s  ") \
				_T(" ORDER BY hsie_date, hsie_idx "), m_nDocumentNo, szWhere);

	m_wndDateList.BeginLoad(); 
	rs.ExecSQL(szSQL);
	int nIndex = 1;
	CString szLocked;
	while(!rs.IsEOF())
	{
		tmpStr.Format(_T("%d"), nIndex++);
		rs.GetValue(_T("islocked"), szLocked);
		int nItem = m_wndDateList.AddItems(
			rs.GetValue(_T("treat_uid")), 
			rs.GetValue(_T("treat_date")), 
			rs.GetValue(_T("treat_uid")), 
			rs.GetValue(_T("islocked")), 
			rs.GetValue(_T("createdby")), 
			NULL);

		if(szLocked == _T("Y"))
		{
			m_wndDateList.SetItemBkColor(nItem, RGB(200, 200, 200));
		}
		rs.MoveNext();
	}
		
	m_wndDateList.EndLoad(); 

	if(m_bRefreshTreat)
	{
		int nItem = m_wndDateList.GetItemCount()-1;
		m_nTreatIdx = str2long(m_wndDateList.GetItemText(nItem, 0));
		m_szCreatedBy = m_wndDateList.GetItemText(nItem, 4);
		
		m_wndDateList.SetCurSel(nItem);
		
		OnTreatListLoadData();
	}
	
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndDateList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDateList.AddItems(
			rs.GetValue(_T("Index")), 
			rs.GetValue(_T("Date")), NULL);
		rs.MoveNext();
	}
	m_wndDateList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CHMSTreatmentTrackingDialog::OnDiseaseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
	if(!pMF->IsActiveDocument())
	{
		ShowMessageBox(_T("Hồ sơ đã đóng. Không cho phép thêm"));
		return;
	}

	
	CHMSTreatmentTrackingDiseaseDialog dlg(this, VM_ADD, m_nDocumentNo);
	if(dlg.DoModal() == IDOK)
	{
		OnDateListLoadData();
		int nSel = m_wndDateList.GetCurSel();
		OnDateListSelectChange(0, nSel);
	}
} 
void CHMSTreatmentTrackingDialog::OnPrescriptionSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL;
	long ret = 10;
	//Nếu user đăng nhập vào không phải là bác sĩ thì không cho chỉ định dịch vụ: #1481
	szSQL.Format(_T("HMS_GET_DOC_INFOR('%s') "), pMF->GetCurrentUser());
    ret = str2long(pMF->ExecDML(szSQL));
	if (ret <=0)
	{
		ShowMessageBox(_T("Chỉ tài khoản của bác sĩ mới được phép chỉ định dịch vụ, vui lòng liên hệ phòng KHTH để được giải đáp!"),MB_ICONERROR);
		return;
	}

	int nSel = m_wndDateList.GetCurSel();
	if(nSel < 0)
		return;

	if(IsLocked())
	{
		ShowMessageBox(_T("Phiếu đã được khóa. Không thao tác được với trạng thái hiện thời"));
		return;
	}


	if(!pMF->IsActiveDocument())
	{
		ShowMessageBox(_T("Hồ sơ đã đóng. Không cho phép thêm"));
		return;
	}

	if(m_szCreatedBy != pMF->GetCurrentUser())
	{
		ShowMessageBox(_T("Phiếu được tạo bởi người khác. Không thể thực hiện được"));
		return;
	}

	CRect rc;
	m_wndTreatmentInformation.GetWindowRect(&rc);
	/*
	CHMSTreatmentPrescriptionPopup dlg(this, VM_ADD, rc.left-5, rc.top);
	dlg.m_nTreatIdx = m_nTreatIdx;
	dlg.m_szTreatDate = m_wndDateList.GetItemText(nSel, 1);
	//newPopup->ShowPopup(&m_wndTreatList, 0);

	

	if(dlg.DoModal() == IDOK)
	{

	}
	*/
	//CHMSTreatmentPrescriptionPopup dlg(this, VM_ADD, rc.left-5, rc.top);
	m_wndPopupEx->ClosePopup();
	m_wndPopup->SetMode(VM_ADD);
	m_wndPopup->m_nTreatIdx = m_nTreatIdx;
	m_wndPopup->m_szTreatDate = m_wndDateList.GetItemText(nSel, 1);
	m_wndPopup->m_pParentOwner = this;
	m_wndPopup->ShowPopup(&m_wndTreatList);
		
}


void CHMSTreatmentTrackingDialog::OnPrescriptionEdit(long nOrderId, long nProductId){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	int nSel = m_wndDateList.GetCurSel();
	if(nSel < 0)
		return;
	if(IsLocked())
	{
		ShowMessageBox(_T("Phiếu đã được khóa. Không thao tác được với trạng thái hiện thời"));
		return;
	}


	if(!pMF->IsActiveDocument())
	{
		ShowMessageBox(_T("Hồ sơ đã đóng. Không cho phép thêm"));
		return;
	}
/*
	CHMSTreatmentPrescriptionPopup* newPopup = new CHMSTreatmentPrescriptionPopup(this, VM_EDIT);
	newPopup->m_nTreatIdx = m_nTreatIdx;
	newPopup->m_szTreatDate = CDate::Convert(m_wndDateList.GetItemText(nSel, 1), ddmmyyyy, yyyymmdd);
	newPopup->m_nOrderID = nOrderId;
	newPopup->m_szNameKey.Format(_T("%ld"), nProductId);
	newPopup->ShowPopup(&m_wndTreatList, 0);
*/	
	CRect rc;
	m_wndTreatmentInformation.GetWindowRect(&rc);
	/*
	CHMSTreatmentPrescriptionPopup dlg(this, VM_EDIT, rc.left-5, rc.top);
	dlg.m_nTreatIdx = m_nTreatIdx;
	dlg.m_szTreatDate = m_wndDateList.GetItemText(nSel, 1);
	dlg.m_nOrderID = nOrderId;
	dlg.m_nProductId = nProductId;

	if(dlg.DoModal() == IDOK)
	{

	}
	*/
	m_wndPopup->SetMode(VM_EDIT);
	m_wndPopup->m_nTreatIdx = m_nTreatIdx;
	m_wndPopup->m_szTreatDate = m_wndDateList.GetItemText(nSel, 1);
	m_wndPopup->m_nOrderID = nOrderId;
	m_wndPopup->m_nProductId = nProductId;
	m_wndPopup->m_pParentOwner = this;
	m_wndPopup->ShowPopup(&m_wndTreatList);
}

#include "HMSParaclinicalDialog.h"
#include ".\hmstreatmenttrackingdialog.h"

void CHMSTreatmentTrackingDialog::OnParaclinicSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL;
	long ret = 10;
	//Nếu user đăng nhập vào không phải là bác sĩ thì không cho chỉ định dịch vụ: #1481
	szSQL.Format(_T("HMS_GET_DOC_INFOR('%s') "), pMF->GetCurrentUser());
	ret = str2long(pMF->ExecDML(szSQL));
	if (ret <=0)
	{
		ShowMessageBox(_T("Chỉ tài khoản của bác sĩ mới được phép chỉ định dịch vụ, vui lòng liên hệ phòng KHTH để được giải đáp!"),MB_ICONERROR);
		return;
	}

	int nSel = m_wndDateList.GetCurSel();
	if(nSel < 0)
		return;

	if(IsLocked())
	{
		ShowMessageBox(_T("Phiếu đã được khóa. Không thao tác được với trạng thái hiện thời"));
		return;
	}

	
	if(!pMF->IsActiveDocument())
	{
		ShowMessageBox(_T("Hồ sơ đã đóng. Không cho phép thêm"));
		return;
	}

	if(m_szCreatedBy != pMF->GetCurrentUser())
	{
		ShowMessageBox(_T("Phiếu được tạo bởi người khác. Không thể thực hiện được"));
		return;
	}
	CHMSParaclinicalDialog dlg(this);
	dlg.m_nTreatIdx = m_nTreatIdx;
	CString tmpStr = m_wndDateList.GetItemText(nSel, 1);
	CDate dte;
	dte.ParseDate(tmpStr, yyyymmdd|hhmmss);
	dlg.m_szOrderDate.Format(_T("%s %s"), dte.GetDate(), tmpStr.Right(5));
	if(dlg.DoModal() == IDOK)
	{
		OnTreatListLoadData();
		
	}
}


void CHMSTreatmentTrackingDialog::OnSurgeryOperationSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL;
	long ret = 10;
	//Nếu user đăng nhập vào không phải là bác sĩ thì không cho chỉ định dịch vụ: #1481
	szSQL.Format(_T("HMS_GET_DOC_INFOR('%s') "), pMF->GetCurrentUser());
	ret = str2long(pMF->ExecDML(szSQL));
	if (ret <=0)
	{
		ShowMessageBox(_T("Chỉ tài khoản của bác sĩ mới được phép chỉ định dịch vụ, vui lòng liên hệ phòng KHTH để được giải đáp!"),MB_ICONERROR);
		return;
	}	

	if(IsLocked())
	{
		ShowMessageBox(_T("Phiếu đã được khóa. Không thao tác được với trạng thái hiện thời"));
		return;
	}

	
	if(!pMF->IsActiveDocument())
	{
		ShowMessageBox(_T("Hồ sơ đã đóng. Không cho phép thêm"));
		return;
	}

	if(m_szCreatedBy != pMF->GetCurrentUser())
	{
		ShowMessageBox(_T("Phiếu được tạo bởi người khác. Không thể thực hiện được"));
		return;
	}

	CHMSOperationScheduleDetailDialog dlg(this, VM_ADD);
	dlg.m_nPatientNo = pMF->m_nPatientNo;
	dlg.m_nDocumentNo = m_nDocumentNo;
	dlg.m_nTreatIdx = m_nTreatIdx;
//	_msg(_T("Call dialog: %ld: %ld"), m_nDocumentNo, m_nTreatIdx);
	if(dlg.DoModal() == IDOK)
	{
		
	}
	OnTreatListLoadData();
	m_wndTreatList.EnsureVisible(m_wndTreatList.GetItemCount()-1);

}

#include "HMSReportForms/PrintForms.h"

void CHMSTreatmentTrackingDialog::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	
	CPrintForms printer;
	
	CGuiMenu menu(this);
	menu.CreatePopupMenu();
	menu.AppendMenu(MF_BYPOSITION, 1, _T("In bệnh trình điều trị"));
	menu.AppendMenu(MF_BYPOSITION, 2, _T("In phiếu truyền dịch, sử dụng thuốc"));
	menu.AppendMenu(MF_BYPOSITION, 3, _T("In phiếu yêu cầu cận lâm sàng"));
	
	//menu.AppendMenu(MF_BYPOSITION, 4, _T("In"));
	//menu.AppendMenu(MF_BYPOSITION, 5, _T("Print Material Remain"));
	//menu.AppendMenu(MF_BYPOSITION, 6, _T("Print Distribution"));
	CPoint pt;
	CRect rect;
	m_wndPrint.GetWindowRect(&rect);
	pt.x = rect.left;
	pt.y = rect.top-2;
	int ret = menu.TrackPopupMenu(TPM_NONOTIFY|TPM_RETURNCMD|TPM_BOTTOMALIGN|TPM_RIGHTBUTTON,pt.x,pt.y, this);
	switch (ret){
	case 1:
		if(!IsLocked())
		{
			ShowMessageBox(_T("Yêu cầu xác nhận phiếu trước khi in.\r\nViệc xác nhận để đảm bảo các phiếu sẽ được khóa lại và không cho phép sửa đổi dữ liệu"));
			return;

		}
		printer.TM_OnPrintBenhTrinhDieuTriHoLy(m_nDocumentNo, m_nTreatIdx);
		break;
	case 2:
		printer.TM_OnPrintPhieuTDSDCongKhaiThuoc(0, m_nDocumentNo, m_szDate.Left(10), m_nTreatIdx);
		break;
	case 3:
		OnPrintParaclinicOrder();
		break;
	
	case 4:
		break;
	case 5:
		break;
	}


	
} 
void CHMSTreatmentTrackingDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CHMSTreatmentTrackingDialog::OnAddHMSTreatmentTrackingDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSTreatmentTrackingDialog::OnEditHMSTreatmentTrackingDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSTreatmentTrackingDialog::OnDeleteHMSTreatmentTrackingDialog(){
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
 		OnCancelHMSTreatmentTrackingDialog();
 	}
	return 0;
}
int CHMSTreatmentTrackingDialog::OnSaveHMSTreatmentTrackingDialog(){
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
 		//OnHMSTreatmentTrackingDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSTreatmentTrackingDialog::OnCancelHMSTreatmentTrackingDialog(){
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
int CHMSTreatmentTrackingDialog::OnHMSTreatmentTrackingDialogListLoadData(){
	return 0;
}

BOOL CHMSTreatmentTrackingDialog::OnCommand(WPARAM wParam, LPARAM lParam)
{
	// TODO: Add your specialized code here and/or call the base class
	UINT nCmd = (UINT) wParam;
	if(nCmd == CMD_REFRESHDATA)
	{
		LoadDrugList();
	}
	return CGuiDialog::OnCommand(wParam, lParam);
}


void CHMSTreatmentTrackingDialog::LoadDrugList()
{
	CMainFrame* pMF = (CMainFrame*) AfxGetMainWnd();
	CString szKey;
	int n = 0;
	
	for (int i = m_wndTreatList.GetItemCount()-1; i >=0; i--)
	{
		szKey = m_wndTreatList.GetItemKey(i);
		if(szKey.Left(2) == _T("D|") || szKey.Left(3) == _T("DA|"))
		{
			m_wndTreatList.DeleteItem(i);
			n = i;
		}
	}

	CString szSQL;
	szSQL.Format(_T(" SELECT hpo_storage_id            AS storage_id,hpo_outpatient_order as outorder, ") \
_T("   hpol_orderid                   AS order_id, TO_CHAR(hpo_orderdate,'DD/MM/YYYY HH24:MI') as order_date, ") \
_T(" hpo_doctype, ") \
_T(" hpo_orderstatus as status, ") \
_T("   hpol_product_id                AS product_id,") \
_T("   hpol_line                      AS lineidx,") \
_T("   mp_name                        AS drugname,") \
_T("   get_uomname(mp_product_uom_id) AS unit,") \
_T("   SUM(hpol_qtyorder)             AS qty,") \
_T("   SUM(hpol_qtyissue)             AS qtyissue,") \
_T("   hpou_dousage||' '||NVL(hpou_speed, '') as dousage, get_username(hpo_doctor) as doctor, ") \
_T("   case when hpo_transaction_id > 0 then (select mt_orderno from m_transaction where mt_transaction_id = hpo_transaction_id) else cast('' as nvarchar2(15)) end as order_no, hpou_indication_id  as iid ") \
_T(" FROM hms_ipharmaorder") \
_T(" LEFT JOIN hms_ipharmaorderline") \
_T(" ON(hpol_docno=hpo_docno and hpol_orderid=hpo_orderid)") \
_T(" LEFT JOIN hms_ipharmaorder_usage") \
_T(" ON(hpou_orderid     = hpol_orderid") \
_T(" AND hpou_product_id = hpol_product_id)") \
_T(" LEFT JOIN m_product") \
_T(" ON(hpol_product_id = mp_product_id)") \
_T(" WHERE hpo_docno    =%ld ") \
_T(" AND hpo_treatidx   =%ld ") \
_T(" GROUP BY hpo_storage_id,") \
_T("   hpol_orderid,hpo_orderdate, hpo_doctype, ") \
_T("   hpo_orderstatus,") \
_T("   hpol_product_id,") \
_T("   mp_name,") \
_T("   hpol_line,") \
_T("   mp_product_uom_id,") \
_T("   hpou_dousage, hpou_speed, hpo_doctor, hpo_transaction_id, hpou_indication_id,hpo_outpatient_order") \
_T(" ORDER BY hpo_storage_id, hpol_orderid, hpol_line,") \
_T("   mp_name"), m_nDocumentNo, m_nTreatIdx);


	CRecord rsl(&pMF->m_db);
	CRecord rsx(&pMF->m_db);

	rsl.ExecSQL(szSQL);
//_fmsg(_T("%s"), szSQL);
_tprintf(_T("\r\n%s"), szSQL);
	CString tmpStr;
	int nIndex = 1;
	long nOrderId, nProductId;
	int nStorageId, nOldStorageId=0;
	int nItem;
	CGridListItem *o;
	CGridListItem *o1=NULL;
	CGridListItem* o2;
	CGridCell*	cell;


	if(n <= 1)
		n = 1;

	if(rsl.GetRecordCount() > 0)
	{

		szSQL.Format(_T("select hsie_drug_advice from hms_siexam ") \
		_T("where hsie_docno=%ld and hsie_idx=%ld and hsie_type='DT'"), m_nDocumentNo,m_nTreatIdx);
	CRecord rs(&pMF->m_db);
	rs.ExecSQL(szSQL);
	m_szDrugAdvice.Empty();
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("hsie_drug_advice"), m_szDrugAdvice);
	}
	if(!m_szDrugAdvice.IsEmpty())
	{
		
		o = new CGridListItem();
		cell = new CGridCell();
		o2 = new CGridListItem();
		o2->Add(m_szDrugAdvice, 755, CELLTYPE_STRING, DT_LEFT|DT_WORDBREAK);
		cell->AddRow(o2);
		o->Add(cell);
		//nItem = m_wndTreatList.Insert(n, o);
		nItem = m_wndTreatList.Add(o);
		tmpStr.Format(_T("D|"));
		m_wndTreatList.SetItemKey(nItem, tmpStr);

	}
	n++;
		o = new CGridListItem();
		o->SetState(ODS_DISABLED);
		cell = new CGridCell();

		CGridListItem* o1 = new CGridListItem(COLOR_CAPTION, COLOR_WHITE);
		
		o1->Add(_T("<b>ĐƠN THUỐC</b>"), 800, CELLTYPE_HTML);
		cell->AddRow(o1);
		o2 = new CGridListItem(COLOR_GROUP, RGB(0, 128, 192));
		o2->Add(_T("Stt"), 40, CELLTYPE_STRING, DT_CENTER|DT_HEADER);
		o2->Add(_T("Tên thuốc/ hàm lượng"), 250, CELLTYPE_STRING, DT_CENTER|DT_HEADER);
		o2->Add(_T("Đơn vị"), 80, CELLTYPE_STRING, DT_CENTER|DT_HEADER);
		o2->Add(_T("Số lượng"), 65, CELLTYPE_STRING, DT_CENTER|DT_HEADER);
		o2->Add(_T("SL cấp"), 65, CELLTYPE_STRING, DT_CENTER|DT_HEADER);
		o2->Add(_T("Dự trù"), 80, CELLTYPE_STRING, DT_CENTER|DT_HEADER);
		o2->Add(_T("Đường dùng"), 175, CELLTYPE_STRING, DT_CENTER|DT_HEADER);
		cell->AddRow(o2);
		o->Add(cell);
		//nItem = m_wndTreatList.Insert(n, o);
		nItem = m_wndTreatList.Add(o);
		tmpStr.Format(_T("D|"));
		m_wndTreatList.SetItemKey(nItem, tmpStr);
		n++;
	}
	
	CString szStatus, szOrderDate, szDoctor, szIId, szDocType,szOutOrder;
	long nOldOrderId = 0;
	while(!rsl.IsEOF())
	{
		rsl.GetValue(_T("order_id"), nOrderId);
		rsl.GetValue(_T("order_date"), szOrderDate);
		rsl.GetValue(_T("product_id"), nProductId);
		rsl.GetValue(_T("storage_id"), nStorageId);
		rsl.GetValue(_T("status"), szStatus);
		rsl.GetValue(_T("doctor"), szDoctor);
		rsl.GetValue(_T("hpo_doctype"), szDocType);
		rsl.GetValue(_T("outorder"), szOutOrder);
		rsl.GetValue(_T("iid"), szIId);
		
		if(nStorageId != nOldStorageId || nOldOrderId != nOrderId)
		{
			if (nOldOrderId > 0)
			{
				szSQL.Format(_T("select ivf_appointment_id as id, note as ghi_chu from ivf_appointment where orderid = %ld order by ivf_appointment_id"), nOldOrderId);
				rsx.ExecSQL(szSQL);
				tmpStr.Empty();
				while (!rsx.IsEOF())
				{
					o = new CGridListItem();
					o->Add(_T("+"), 40, CELLTYPE_STRING, DT_CENTER);
					rsx.GetValue(_T("ghi_chu"), tmpStr);
					o->Add(tmpStr, 755, CELLTYPE_STRING,DT_LEFT|DT_WORDBREAK);
					nItem = m_wndTreatList.Add(o);
					tmpStr.Format(_T("DA|%s"), rsx.GetValue(_T("id")));
					m_wndTreatList.SetItemKey(nItem, tmpStr);
					n++;
					rsx.MoveNext();
				}
			}
			szSQL.Format(_T("SELECT msl_name FROM  m_storagelist WHERE msl_storage_id=%d"), nStorageId);
			rsx.ExecSQL(szSQL);
			rsx.GetValue(_T("msl_name"), tmpStr);
			o = new CGridListItem();
			o->SetState(ODS_DISABLED);
			o->Add(_T("*"), 40, CELLTYPE_STRING, DT_CENTER);
			tmpStr.AppendFormat(_T("; Số phiếu[%ld]; Ngày giờ tạo [%s] Trạng thái [%s] Bác sỹ [%s]"), nOrderId, szOrderDate, szStatus, szDoctor);
			if(szDocType == _T("CPO"))
			{
				tmpStr.AppendFormat(_T(" (Pha chế)"));
			}
			if(szOutOrder == _T("Y"))
			{
				tmpStr.AppendFormat(_T(" (Đơn ra về)"));
			}
			
			o->Add(tmpStr, 755, CELLTYPE_STRING,DT_LEFT|DT_WORDBREAK);
			//nItem = m_wndTreatList.Insert(n, o);
			nItem = m_wndTreatList.Add(o);
			tmpStr.Format(_T("D|"));
			m_wndTreatList.SetItemKey(nItem, tmpStr);
			n++;

			nOldStorageId = nStorageId;
			nOldOrderId = nOrderId;
			
		}
		o = new CGridListItem();
		cell = new CGridCell();
		o2 = new CGridListItem();

		
		tmpStr.Format(_T("%d"), nIndex++);
		o2->Add(tmpStr, 40, CELLTYPE_STRING, DT_RIGHT|DT_VCENTER|DT_SINGLELINE);
		rsl.GetValue(_T("drugname"), tmpStr);
		o2->Add(tmpStr, 250, CELLTYPE_STRING, DT_LEFT|DT_WORDBREAK);
		rsl.GetValue(_T("unit"), tmpStr);
		o2->Add(tmpStr, 80, CELLTYPE_STRING, DT_LEFT|DT_VCENTER|DT_SINGLELINE);
		rsl.GetValue(_T("qty"), tmpStr);
		o2->Add(tmpStr, 65, CELLTYPE_STRING, DT_RIGHT|DT_VCENTER|DT_SINGLELINE);
		rsl.GetValue(_T("qtyissue"), tmpStr);
		o2->Add(tmpStr, 65, CELLTYPE_STRING, DT_RIGHT|DT_VCENTER|DT_SINGLELINE);
		rsl.GetValue(_T("order_no"), tmpStr);
		o2->Add(tmpStr, 80, CELLTYPE_STRING, DT_RIGHT|DT_VCENTER|DT_SINGLELINE);
		rsl.GetValue(_T("dousage"), tmpStr);
		o2->Add(tmpStr, 175, CELLTYPE_STRING, DT_LEFT|DT_WORDBREAK);
		cell->AddRow(o2);
		o->Add(cell);
		
		//nItem = m_wndTreatList.Insert(n, o);
		nItem = m_wndTreatList.Add(o);
		tmpStr.Format(_T("D|%ld|%ld|%s"), nOrderId, nProductId, szIId);
		m_wndTreatList.SetItemKey(nItem, tmpStr);

		n++;

		rsl.MoveNext();
	}
	if (nOldOrderId > 0)
	{
		szSQL.Format(_T("select ivf_appointment_id as id, note as ghi_chu, ") \
					_T("	categoryid") \
					_T(" from ivf_appointment ") \
					_T(" where orderid = %ld ") \
					_T(" order by ivf_appointment_id"), nOldOrderId);
		rsx.ExecSQL(szSQL);
		tmpStr.Empty();
		while (!rsx.IsEOF())
		{
			o = new CGridListItem();
			o->Add(_T("+"), 40, CELLTYPE_STRING, DT_CENTER);
			rsx.GetValue(_T("ghi_chu"), tmpStr);
			o->Add(tmpStr, 755, CELLTYPE_STRING,DT_LEFT|DT_WORDBREAK);
			nItem = m_wndTreatList.Add(o);
			tmpStr.Format(_T("DA|%s|%s"), rsx.GetValue(_T("id")), rsx.GetValue(_T("categoryid")));
			m_wndTreatList.SetItemKey(nItem, tmpStr);
			n++;
			rsx.MoveNext();
		}
	}	
	if(n >= 0 && n < m_wndTreatList.GetItemCount())
		m_wndTreatList.EnsureVisible(n-1);
	else
		m_wndTreatList.EnsureVisible(m_wndTreatList.GetItemCount()-1);


	
}

void CHMSTreatmentTrackingDialog::LoadDrugListEx(){
	CMainFrame* pMF = (CMainFrame*) AfxGetMainWnd();
	CString szKey;
	int n = 0;
	for (int i = m_wndTreatList.GetItemCount()-1; i >=0; i--)
	{
		szKey = m_wndTreatList.GetItemKey(i);
		if(szKey.Left(2) == _T("X|") || szKey.Left(3) == _T("XA|"))
		{
			m_wndTreatList.DeleteItem(i);
			n = i;
		}
	}
	CString szSQL;
	szSQL.Format(_T(" SELECT 0            AS storage_id,") \
_T("   hp_receptidx                   AS order_id,") \
_T("   NULL as status, ") \
_T("   0 AS product_id,") \
_T("   hp_idx AS lineidx,") \
_T("   hp_drugname                        AS drugname,") \
_T("   hp_unit AS unit,") \
_T("   hp_quantity            AS qty,") \
_T("   hp_usage as dousage ") \
_T(" FROM hms_prescription") \
_T(" WHERE hp_docno    =%ld ") \
_T(" AND hp_receptidx   =%ld ") \
_T(" ORDER BY hp_receptidx, hp_line"), m_nDocumentNo, m_nTreatIdx);


	CRecord rsl(&pMF->m_db);
	CRecord rsx(&pMF->m_db);
	int nRet = rsl.ExecSQL(szSQL);

	CString tmpStr;
	int nIndex = 1;
	long nOrderId, nProductId, nLineIdx = 0;
	int nStorageId, nOldStorageId=0;
	int nItem;
	CGridListItem *o;
	CGridListItem *o1=NULL;
	CGridListItem* o2;
	CGridCell*	cell;


	if(n <= 1)
		n = 1;

	if(rsl.GetRecordCount() > 0)
	{

		o = new CGridListItem();
		o->SetState(ODS_DISABLED);
		cell = new CGridCell();

		CGridListItem* o1 = new CGridListItem(COLOR_CAPTION, COLOR_WHITE);
		
		o1->Add(_T("<b>ĐƠN THUỐC MUA NGOÀI</b>"), 200, CELLTYPE_HTML);
		cell->AddRow(o1);
		o2 = new CGridListItem(COLOR_GROUP, RGB(0, 128, 192));
		o2->Add(_T("Stt"), 40, CELLTYPE_STRING, DT_CENTER);
		o2->Add(_T("Tên thuốc/ hàm lượng"), 250, CELLTYPE_STRING, DT_CENTER);
		o2->Add(_T("Đơn vị"), 80, CELLTYPE_STRING, DT_CENTER);
		o2->Add(_T("Số lượng"), 65, CELLTYPE_STRING, DT_CENTER);
		o2->Add(_T("SL cấp"), 65, CELLTYPE_STRING, DT_CENTER);
		o2->Add(_T("Đường dùng"), 175, CELLTYPE_STRING, DT_CENTER);
		cell->AddRow(o2);
		o->Add(cell);
		//nItem = m_wndTreatList.Insert(n, o);
		nItem = m_wndTreatList.Add(o);
		tmpStr.Format(_T("X|"));
		m_wndTreatList.SetItemKey(nItem, tmpStr);
		n++;
	}
	
	CString szStatus;
	while(!rsl.IsEOF())
	{
		rsl.GetValue(_T("order_id"), nOrderId);
		rsl.GetValue(_T("product_id"), nProductId);
		rsl.GetValue(_T("storage_id"), nStorageId);
		rsl.GetValue(_T("status"), szStatus);
		rsl.GetValue(_T("lineidx"), nLineIdx);

		o = new CGridListItem();
		cell = new CGridCell();
		o2 = new CGridListItem();

		
		tmpStr.Format(_T("%d"), nIndex++);
		o2->Add(tmpStr, 40, CELLTYPE_STRING, DT_CENTER|DT_VCENTER|DT_SINGLELINE);
		rsl.GetValue(_T("drugname"), tmpStr);
		o2->Add(tmpStr, 250, CELLTYPE_STRING, DT_LEFT|DT_WORDBREAK);
		rsl.GetValue(_T("unit"), tmpStr);
		o2->Add(tmpStr, 80, CELLTYPE_STRING, DT_CENTER|DT_VCENTER|DT_SINGLELINE);
		rsl.GetValue(_T("qty"), tmpStr);
		o2->Add(tmpStr, 65, CELLTYPE_STRING, DT_RIGHT|DT_VCENTER|DT_SINGLELINE);
		rsl.GetValue(_T("qty"), tmpStr);
		o2->Add(tmpStr, 65, CELLTYPE_STRING, DT_RIGHT|DT_VCENTER|DT_SINGLELINE);
		rsl.GetValue(_T("dousage"), tmpStr);
		o2->Add(tmpStr, 175, CELLTYPE_STRING, DT_LEFT|DT_WORDBREAK);
		cell->AddRow(o2);
		o->Add(cell);
		
		//nItem = m_wndTreatList.Insert(n, o);
		nItem = m_wndTreatList.Add(o);
		tmpStr.Format(_T("X|%ld"), nLineIdx);
		m_wndTreatList.SetItemKey(nItem, tmpStr);
		n++;

		rsl.MoveNext();
	}
	if (nOrderId > 0)
	{
		szSQL.Format(_T("select ivf_appointment_id as id, note as ghi_chu, ") \
					_T("	categoryid") \
					_T(" from ivf_appointment ") \
					_T(" where orderid = %ld ") \
					_T(" order by ivf_appointment_id"), nOrderId);
		rsx.ExecSQL(szSQL);
		tmpStr.Empty();
		while (!rsx.IsEOF())
		{
			o = new CGridListItem();
			o->Add(_T("+"), 40, CELLTYPE_STRING, DT_CENTER);
			rsx.GetValue(_T("ghi_chu"), tmpStr);
			o->Add(tmpStr, 755, CELLTYPE_STRING,DT_LEFT|DT_WORDBREAK);
			nItem = m_wndTreatList.Add(o);
			tmpStr.Format(_T("XA|%s|%s"), rsx.GetValue(_T("id")), rsx.GetValue(_T("categoryid")));
			m_wndTreatList.SetItemKey(nItem, tmpStr);
			n++;
			rsx.MoveNext();
		}
	}	
	if(n >= 0 && n < m_wndTreatList.GetItemCount())
		m_wndTreatList.EnsureVisible(n-1);
	else
		m_wndTreatList.EnsureVisible(m_wndTreatList.GetItemCount()-1);



}

#include "HMSSmartPrescriptionDialog.h"

int CHMSTreatmentTrackingDialog::OnTreatListSmartPrescriptionItem(){
	CMainFrame* pMF = (CMainFrame*) AfxGetMainWnd();
	CDate dte, curDte;
	dte.ParseDate(m_szDate.Left(10), yyyymmdd);
	curDte.ParseDate(pMF->GetSysDate());

	if(dte < curDte)
		return 0;

	if(IsLocked())
	{
		ShowMessageBox(_T("Phiếu đã được khóa. Không thao tác được với trạng thái hiện thời"));
		return 0;
	}

	if(!pMF->IsActiveDocument())
		return 0;

	
	CHMSSmartPrescriptionDialog dlg(pMF);
	dlg.m_nTreatIdx = m_nTreatIdx;
	dlg.m_szOrderDate = m_szDate;
	if(dlg.DoModal() == IDOK){
		LoadDrugList();
	}
	return 0;
	
}



#include "HMSTreatmentDrugCopyDialog.h"
int CHMSTreatmentTrackingDialog::OnTreatListDrugOrderCopyItem(){
	CMainFrame* pMF = (CMainFrame*) AfxGetMainWnd();
	CDate dte, curDte;
	dte.ParseDate(m_szDate.Left(10), yyyymmdd);
	curDte.ParseDate(pMF->GetSysDate());

	if(dte < curDte)
		return 0;

	if(IsLocked())
	{
		ShowMessageBox(_T("Phiếu đã được khóa. Không thao tác được với trạng thái hiện thời"));
		return 0;
	}


	CHMSTreatmentDrugCopyDialog dlg(this);
	dlg.m_nDocumentNo = m_nDocumentNo;
	dlg.m_nTreatIdx = m_nTreatIdx;
	dlg.m_szOrderDate = m_szDate.Left(10);
	if(dlg.DoModal() == IDOK)
	{
		OnTreatListLoadData();
	}
	return 0;
}


int CHMSTreatmentTrackingDialog::OnTreatListCancerOrderItem(){
	CMainFrame* pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;

	szSQL.Format(_T("SELECT HCR_CANCER FROM HMS_CLINICAL_RECORD WHERE hcr_docno = %ld "), m_nDocumentNo);
	rs.ExecSQL(szSQL);
	if(rs.GetStringValue() != _T("Y"))
	{
		ShowMessageBox(_T("Không phải bệnh nhân ung thư. Không được thao tác !"));
		return -1;
	}

	int nSel = m_wndDateList.GetCurSel();
	if(nSel < 0 || m_nTreatIdx <=0 )
	{
		ShowMessageBox(_T("Yêu cầu chọn đơn điều trị"));
		return 0;
	}
	
	
	CHMSCancerPrescriptionPrepareDialog dlg(this, VM_VIEW);
	dlg.m_nDocumentNo = m_nDocumentNo;
	dlg.m_nTreatIdx = m_nTreatIdx;
	dlg.m_szDoctorKey = pMF->GetCurrentUser();
	dlg.m_bLocked = IsLocked();
	if(dlg.DoModal() == IDOK)
	{

	}
	OnTreatListLoadData();
	return 0;
}


int CHMSTreatmentTrackingDialog::OnTreatListExternalOrderItem(){

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	int nSel = m_wndDateList.GetCurSel();
	if(nSel < 0)
		return 0;

	if(IsLocked())
	{
		ShowMessageBox(_T("Phiếu đã được khóa. Không thao tác được với trạng thái hiện thời"));
		return 0;
	}


	if(!pMF->IsActiveDocument())
	{
		ShowMessageBox(_T("Hồ sơ đã đóng. Không cho phép thêm"));
		return 0;
	}

	CRect rc;
	m_wndTreatmentInformation.GetWindowRect(&rc);
/*	
	CHMSTreatmentPrescriptionPopupEx dlg(this, VM_ADD, rc.left-5, rc.top);
	dlg.m_nTreatIdx = m_nTreatIdx;
	dlg.m_szTreatDate = m_wndDateList.GetItemText(nSel, 1);
	//newPopup->ShowPopup(&m_wndTreatList, 0);

	

	if(dlg.DoModal() == IDOK)
	{

	}
*/
	m_wndPopup->ClosePopup();
	m_wndPopupEx->SetMode(VM_ADD);
	m_wndPopupEx->m_nTreatIdx = m_nTreatIdx;
	//m_wndPopupEx->m_nIdx = nIdx;
	m_wndPopupEx->m_szTreatDate = m_wndDateList.GetItemText(nSel, 1);
	m_wndPopupEx->m_pParentOwner = this;
	m_wndPopupEx->ShowPopup(&m_wndTreatList);
	return 0;
}

int CHMSTreatmentTrackingDialog::OnTreatListDrugOrderAdviceItem(){
	CMainFrame* pMF = (CMainFrame*) AfxGetMainWnd();
	
	CHMSReasonDialog dlg(this, _T("Mệnh lệnh điều trị"));
	dlg.m_szReason = m_szDrugAdvice;
	if(dlg.DoModal() != IDOK)
		return 0;
	CString szSQL;
	szSQL.Format(_T("UPDATE hms_siexam SET hsie_drug_advice='%s' WHERE hsie_docno=%ld and hsie_idx=%ld and hsie_type='DT'"),
		dlg.m_szReason, m_nDocumentNo, m_nTreatIdx);
	int ret = pMF->ExecSQL(szSQL);
	if(ret > 0)
		OnTreatListLoadData();
	return 0;
}

int CHMSTreatmentTrackingDialog::OnTreatListPrintPrescription(){
	CMainFrame* pMF = (CMainFrame*) AfxGetMainWnd();
	CHMSMainFrame *pMF1 = (CHMSMainFrame *)AfxGetMainWnd();
	int nSel = m_wndTreatList.GetCurSel();
	if(nSel < 0)
		return 0;
	CString tmpStr;
	CString szSQL, szIId;
	long nOrderid=0;
 
	CString szKey = m_wndTreatList.GetItemKey(nSel);
	CStringToken tk(szKey, _T("|"));
	tk.GetAt(0, tmpStr);

	if(!IsLocked())
	{
		ShowMessageBox(_T("Bạn cần xác nhận phiếu trước khi in"));
		return 0;
	}
	tk.GetAt(1, nOrderid);
	if(tmpStr == _T("D"))
	{
		pMF1->PrintPrescriptionin(nOrderid,true);
		pMF1->PrintDrugDeliveryin(nOrderid, true);
	}
	if (tmpStr == _T("X"))
	{
		PrintExPrescription(m_nTreatIdx);
	}
	return 0;
}


int CHMSTreatmentTrackingDialog::OnTreatListNoteOfDeanItem(){
	CMainFrame* pMF = (CMainFrame*) AfxGetMainWnd();
	CHMSReasonDialog dlg(this, _T("Ghi chú"));
	dlg.m_szReason = m_szNoteOfDean;
	if(dlg.DoModal() != IDOK)
		return 0;
	CString szSQL;

	szSQL.Format(_T("UPDATE hms_siexam SET hsie_deannote='%s' ") \
		_T("WHERE hsie_docno=%ld and hsie_idx=%ld and hsie_type='DT' "),
		dlg.m_szReason, m_nDocumentNo, m_nTreatIdx);
	int ret = pMF->ExecSQL(szSQL);
	if(ret > 0)
		OnTreatListLoadData();
	return 0;
}
BOOL CHMSTreatmentTrackingDialog::PreTranslateMessage(MSG* pMsg)
{
	// TODO: Add your specialized code here and/or call the base class
	if(pMsg->message == WM_COMMAND)
	{
		int nCmd = (int) pMsg->wParam;
_tprintf(_T("\r\nWindow Message"));
		if(nCmd == CMD_REFRESHDATA)
		{
		//	RefreshDrugs();
		}

	}
	return CGuiDialog::PreTranslateMessage(pMsg);
}


void CHMSTreatmentTrackingDialog::OnLockSelect()
{
	int nSel = m_wndDateList.GetCurSel();
	if(nSel < 0)
		return;

	CMainFrame* pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL;
	CRecord rs(&pMF->m_db);

	if(pMF->GetCurrentUser() != m_szCreatedBy)
	{
		CString tmpStr;
		tmpStr.Format(_T("Phiếu được tạo bởi [%s] không cho phép xác nhận"), m_szCreatedBy);
		ShowMessageBox(tmpStr);
		return;
	}

	/*if(!pMF->CheckPermission(_T("20.05")))
	{
		ShowMessageBox(_T("Permission denied"));
		return;
	}*/

	szSQL.Format(_T("SELECT COUNT(*) FROM hms_cancer_order WHERE hco_docno = %ld AND hco_treatidx = %ld AND hco_status = 'O'"), m_nDocumentNo, m_nTreatIdx);
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() > 0)
	{
		ShowMessageBox(_T("Đang tồn tại đơn thuốc ung thư chưa gửi xác nhận. Không thể xác nhận phiếu"), MB_ICONERROR|MB_OK);
		return;
	}

	szSQL.Format(_T("HMS_SIEXAM_LOCK(%ld,%ld, '%s') "), m_nDocumentNo, m_nTreatIdx, pMF->GetCurrentUser());
	int ret = str2int(pMF->ExecDML(szSQL));
	if(ret <= 0)
	{
		ShowMessageBox(_T("Không xác nhận được"));
		return;
	}
	nSel = m_wndDateList.GetCurSel();
	OnDateListLoadData();
	ShowMessageBox(_T("Phiếu đã được xác nhận"));
	m_wndDateList.SetCurSel(nSel);
	OnDateListSelectChange(-1, nSel);
	
}



void CHMSTreatmentTrackingDialog::OnUnLockSelect()
{
	CMainFrame* pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL;

	int nSel = m_wndDateList.GetCurSel();
	if(nSel < 0)
		return;

	if(pMF->GetCurrentUser() != m_szCreatedBy)
	{
		CString tmpStr;
		tmpStr.Format(_T("Phiếu được tạo bởi [%s] không cho phép bỏ xác nhận"), m_szCreatedBy);
		ShowMessageBox(tmpStr);
		return;
	}


	CHMSReasonDialog dlg(this);
	if(dlg.DoModal() != IDOK)
		return;
	CString szReason = dlg.m_szReason;

	szSQL.Format(_T("HMS_SIEXAM_UNLOCK(%ld,%ld, '%s', '%s') "), m_nDocumentNo, m_nTreatIdx, pMF->GetCurrentUser(), szReason);
	int ret = str2int(pMF->ExecDML(szSQL));
	if(ret <= 0)
	{
		ShowMessageBox(_T("Không bỏ được xác nhận"));
		return;
	}
	
	

	nSel = m_wndDateList.GetCurSel();
	OnDateListLoadData();
	m_wndDateList.SetCurSel(nSel);
	OnDateListSelectChange(-1, nSel);

	ShowMessageBox(_T("Phiếu đã được bỏ xác nhận.Mọi sự thay đổi dữ liệu sẽ được lưu vào hệ thống để theo dõi"));
}



bool CHMSTreatmentTrackingDialog::IsLocked()
{
	CMainFrame* pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL, szLocked;
	CRecord rs(&pMF->m_db);
	szSQL.Format(_T("SELECT hsie_locked FROM hms_siexam WHERE hsie_docno=%ld and hsie_idx=%ld "), m_nDocumentNo, m_nTreatIdx);
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("hsie_locked"), szLocked);
	if(szLocked == _T("Y"))
		return true;
	return false;
}

void CHMSTreatmentTrackingDialog::OnPrintParaclinicOrder()
{
	CMainFrame* pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL;
	CRecord rs(&pMF->m_db);
	szSQL.Format(_T(" SELECT hpc_type,") \
_T("   hpc_orderid") \
_T(" FROM") \
_T("   (SELECT hpc_docno,") \
_T("     hpc_treatidx,") \
_T("     hpc_orderid,") \
_T("     'T' AS hpc_type") \
_T("   FROM hms_testorder") \
_T("   UNION ALL") \
_T("   SELECT hpc_docno,") \
_T("     hpc_treatidx,") \
_T("     hpc_orderid,") \
_T("     'P' AS hpc_type") \
_T("   FROM hms_pacsorder") \
_T("   )") \
_T(" WHERE hpc_docno = %ld") \
_T(" AND hpc_treatidx=%ld") \
_T(" ORDER BY hpc_type DESC,") \
_T("   hpc_orderid"), m_nDocumentNo, m_nTreatIdx);
	rs.ExecSQL(szSQL);
	long nOID;
	CString szType;

	CPrintForms printer;
	

	while(!rs.IsEOF())
	{
		rs.GetValue(_T("hpc_type"), szType);
		rs.GetValue(_T("hpc_orderid"), nOID);
		if(szType == _T("T"))
		{
			printer.PrintTestOrder(nOID, true, false);
		}
		else
		{
			printer.PrintPACSOrder(nOID, _T(""), true, false);
		}
		rs.MoveNext();
	}

}

long CHMSTreatmentTrackingDialog::OnShowHistory(){
	CMainFrame* pMF = (CMainFrame*) AfxGetMainWnd();

	CRecord rs(&pMF->m_db);
	CRecord rs2(&pMF->m_db);
	CString szSQL, szSQL2, szTemp, szDesc, szPara, szPulse, szTemperature, szDiet, szHeight, szWeight;
	int nSel = m_wndDateList.GetCurSel();
	if(nSel < 0)
		return 0;

	m_wndTreatList.BeginLoad();
	m_wndTreatList.DeleteAllItems();
	
	CGridListItem* o = new CGridListItem();
	CGridListItem* o2 = NULL;
	CGridListItem* o3 = NULL;
	CGridCell* cell = new CGridCell();

	CGridListItem* head1 = new CGridListItem(COLOR_GROUP, RGB(0, 128, 192));
	head1->Add(_T("Thời gian"), 90);
	head1->Add(_T("Người cập nhật"), 120);
	head1->Add(_T("Thông tin cũ"), 450);
	head1->Add(_T("Lý do"), 100);
	cell->AddRow(head1);
	o->Add(cell);
	m_wndTreatList.Add(o);

	szSQL.Format(_T("SELECT to_char(hsie_date, 'DD/MM/YYYY HH24:MI') as orderdate, hsie_desc,hsie_para_res,hsie_pulse,hsie_temperature,hsie_weight,hsie_height,hsie_diet, ") \
				_T("       hsie_locked, to_char(hsie_updateddate, 'dd/mm/yyyy hh24:mi:ss') as updateddate, ") \
				_T("       GET_USERNAME(hsie_updatedby) AS updatedby, ") \
				_T("       hcr_reason, hcr_type, hsie_idx ") \
				_T("FROM   hms_siexam_hist ") \
				_T("       LEFT JOIN hms_cancel_reason ") \
				_T("              ON ( hcr_refno = hsie_idx ") \
				_T("                   AND hcr_docno = hsie_docno ) ") \
				_T("WHERE  hsie_docno = %ld ") \
				_T("       AND hsie_idx = %d ORDER BY hsie_updateddate"), m_nDocumentNo, m_nTreatIdx);
	_fmsg(_T("%s"), szSQL);
	rs.ExecSQL(szSQL);
	CString szDate;
	while(!rs.IsEOF())
	{
		rs.GetValue(_T("orderdate"), szDate);
		rs.GetValue(_T("hsie_desc"), szDesc);
		rs.GetValue(_T("hsie_para_res"), szPara);
		rs.GetValue(_T("hsie_pulse"), szPulse);
		rs.GetValue(_T("hsie_temperature"), szTemperature);
		rs.GetValue(_T("hsie_weight"), szWeight);
		rs.GetValue(_T("hsie_height"), szHeight);
		rs.GetValue(_T("hsie_diet"), szDiet);
		szTemp.Format(_T("<b>Ngày: %s</b>\r\n"), szDate);
		if(szPara.IsEmpty())
		{
			if(!szDiet.IsEmpty() && IsDigit(szDiet))
			{
				szDiet = pMF->GetSelectionString(_T("HMS_DIET_MODE"), szDiet);
			}

			szTemp.AppendFormat(_T("%s<br/><b>Nhịp tim: </b>%s <b>Nhiệt độ: </b>%s <br/><b>Chiều cao: </b>%s <b>Cân nặng: </b>%s <br/><b>Chế độ ăn: </b><br/>%s"), szDesc, szPulse, szTemperature, szHeight, szWeight, szDiet);
		}
		else
		{
			szTemp.AppendFormat(_T("%s<br/><b>Kết quả cận lâm sàng:</b><br/>%s<br/><b>Nhịp tim: </b>%s <b>Nhiệt độ: </b>%s <br/><b>Chiều cao: </b>%s <b>Cân nặng: </b>%s <br/><b>Chế độ ăn: </b><br/>%s"), szDesc, szPara, szPulse, szTemperature, szHeight, szWeight, szDiet);
		}

		o2 = new CGridListItem();
		o2->Add(rs.GetValue(_T("updateddate")), 90,CELLTYPE_STRING, DT_CENTER|DT_WORDBREAK);
		o2->Add(rs.GetValue(_T("updatedby")), 120,CELLTYPE_STRING, DT_LEFT);
		o2->Add(szTemp, 450,CELLTYPE_HTML, DT_LEFT|DT_WORDBREAK);
		o2->Add(rs.GetValue(_T("hcr_reason")), 100,CELLTYPE_STRING, DT_LEFT|DT_WORDBREAK);
		
		cell = new CGridCell();
		cell->AddRow(o2);

		o = new CGridListItem();
		o->Add(cell);
		m_wndTreatList.Add(o);

		rs.MoveNext();
	}

	szSQL2.Format(_T("SELECT Trim('%s: ' ") \
				_T("            || Get_username(hcr_createdby) ") \
				_T("            || Chr(13) ") \
				_T("            || '%s: ' ") \
				_T("            || To_char(hcr_createddate, 'dd/mm/yyyy hh24:mi:ss') ") \
				_T("            || Chr(13) ") \
				_T("            || '%s: ' ") \
				_T("            || hcr_reason) AS thongtinthaydoi ") \
				_T("FROM   hms_cancel_reason ") \
				_T("WHERE  hcr_docno = %ld ") \
				_T("       AND hcr_refno = %d ORDER BY hcr_createddate"), _T("Người sửa"), _T("Ngày sửa"), _T("Lý do"), m_nDocumentNo, m_nTreatIdx);
	rs2.ExecSQL(szSQL2);

	CGridListItem* head2 = new CGridListItem(COLOR_GROUP, RGB(0, 128, 192));
	head2->Add(_T("Khóa/Mở khóa"), 100);
	cell = new CGridCell();
	cell->AddRow(head2);
	o = new CGridListItem();
	o->Add(cell);
	m_wndTreatList.Add(o);

	while(!rs2.IsEOF())
	{
		o3 = new CGridListItem();
		o3->Add(rs2.GetValue(_T("thongtinthaydoi")), 100,CELLTYPE_STRING, DT_LEFT|DT_WORDBREAK);
		cell = new CGridCell();
		cell->AddRow(o3);

		o = new CGridListItem();
		o->Add(cell);
		m_wndTreatList.Add(o);

		rs2.MoveNext();
	}
	m_wndTreatList.EndLoad();

	return 0;
}

int CHMSTreatmentTrackingDialog::OnTreatListEditPrescriptionQty()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	int nSel = m_wndDateList.GetCurSel();
	if(nSel < 0)
		return 0;

	if(IsLocked())
	{
		ShowMessageBox(_T("Phiếu đã được khóa. Không thao tác được với trạng thái hiện thời"));
		return -1;
	}


	if(!pMF->IsActiveDocument())
	{
		ShowMessageBox(_T("Hồ sơ đã đóng. Không cho phép thêm"));
		return -2;
	}
	CString szTreatDate = m_wndDateList.GetItemText(nSel, 1);
	nSel  = m_wndTreatList.GetCurSel();
	if(nSel < 0) return 0;
	CString szKey = m_wndTreatList.GetItemKey(nSel);
	if(szKey.Left(2) != _T("D|"))
	{
		return 0;
	}

	long nOrderId, nProductId;
	CStringToken tk(szKey, _T("|"));
	if(tk.GetSize() >= 2)
	{
		tk.GetAt(1, nOrderId);
		tk.GetAt(2, nProductId);
		_tprintf(_T("\r\n%ld:%d"), nOrderId, nProductId);
		
		if(IsLocked())
		{
			return 0;
		}
		CRect rc;
		m_wndTreatmentInformation.GetWindowRect(&rc);
		/*
		CHMSTreatmentPrescriptionPopup dlg(this, VM_EDIT, rc.left-5, rc.top);
		dlg.m_nTreatIdx = m_nTreatIdx;
		dlg.m_szTreatDate = szTreatDate;
		dlg.m_nOrderID = nOrderId;
		dlg.m_nProductId = nProductId;
		dlg.m_bEditQty = true;
		if(dlg.DoModal() == IDOK)
		{
			
		}
		*/
		m_wndPopup->SetMode(VM_EDIT);
		m_wndPopup->m_nTreatIdx = m_nTreatIdx;
		m_wndPopup->m_szTreatDate = szTreatDate;
		m_wndPopup->m_nOrderID = nOrderId;
		m_wndPopup->m_nProductId = nProductId;
		m_wndPopup->m_bEditQty = true;
		m_wndPopup->m_pParentOwner = this;
		m_wndPopup->ShowPopup(&m_wndTreatList);

	}
	return 0;
}

void CHMSTreatmentTrackingDialog::Refresh()
{
	AfxGetApp()->BeginWaitCursor();
	OnTreatListLoadData();
	AfxGetApp()->EndWaitCursor();
}

void CHMSTreatmentTrackingDialog::RefreshDrugs()
{
	AfxGetApp()->BeginWaitCursor();
	m_wndTreatList.DeleteAllItems();
	LoadDrugList();
	LoadDrugListEx();
_tprintf(_T("\r\nREFRESH DRUG LIST"));
	m_wndTreatList.Invalidate(FALSE);
	AfxGetApp()->EndWaitCursor();
	
}

void CHMSTreatmentTrackingDialog::PrintExPrescription(long nOrderId, bool bPreview, bool bDirect)
{
	CMainFrame* pMF = (CMainFrame*) AfxGetMainWnd();
	CReport rpt;
	CString tmpStr;
	//m_nTreatTime = 0;
	if(!rpt.Init(_T("Reports/HMS/PMS_PRESCRIPTIONIN.RPT"), false, false) )
		return;
	//Report Header
	
//_msg(_T("ok"));

	CString szSQL, szUsage, szObjectType, szACCEPTEDFEE;
	CRecord rs(&pMF->m_db);
	CRecord rs2(&pMF->m_db);
	long nDocumentNo;	
	int nRefIndex, nPrinted;
	double dblTotalAmount=0;
	

	szSQL.Format(_T("SELECT    hd_patientno AS patientno,") \
	_T("          hd_docno AS docno,") \
	_T("          Trim(hp_surname") \
	_T("               ||' '") \
	_T("               ||hp_midname") \
	_T("               ||' '") \
	_T("               ||hp_firstname) AS pname,") \
	_T("          To_char(hp_birthdate, 'YYYY') AS birthyear,") \
	_T("          hms_getagebydoc(hd_docno, %d) as age,") \
	_T("          hp_sex AS sexid,") \
	_T("          Sys_sel_getname('sys_sex', hp_sex) AS sex,") \
	_T("          Sys_sel_getname('hms_rank', hp_rank) AS rank,") \
	_T("          hp_occupation AS occupationid,") \
	_T("          nvl(hd_dtladdr, hp_dtladdr) as detailaddress,") \
	_T("          hms_getaddress(nvl(hd_provid, hp_provid), nvl(hd_distid, hp_distid), nvl(hd_villid, hp_villid)) AS address,") \
	_T("          hp_workplaceid AS workplaceid,") \
	_T("          hp_workplace AS workplace,") \
	_T("          hd_object AS objectid,") \
	_T("          ho_desc AS objectname,") \
	_T("          ho_type AS objectType,") \
	_T("          hd_cardno AS cardno,") \
	_T("          hd_cardidx AS cardidx,") \
	_T("          hd_reldisease AS relationdisease,") \
	_T("          Trunc_date(hd_admitdate) AS examdate,") \
	_T("          HDF_ACCEPTEDFEE,") \
	_T("          hd_status,") \
	_T("          hc_regdate AS regdate,") \
	_T("          hc_expdate AS expdate,") \
	_T("          pp.hp_createddate AS orderdate,") \
	_T("          pp.hp_createdby AS doctor,") \
	_T("          hsie_deptid AS deptid") \
	_T(" FROM      hms_prescription pp") \
	_T(" LEFT JOIN hms_doc ON( hd_docno = hp_docno )") \
	_T(" LEFT JOIN hms_patient ON( hp_patientno = hd_patientno )") \
	_T(" LEFT JOIN hms_object ON( ho_id = hd_object )") \
	_T(" LEFT JOIN hms_card ON( hc_patientno = hd_patientno AND hc_idx = hd_cardidx )") \
	_T(" LEFT JOIN hms_siexam ON ( hsie_idx = hp_receptidx )") \
	_T(" WHERE     hp_receptidx = %ld"), pMF->m_nTreatTime, nOrderId);


	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
	if(rs.IsEOF())
	{
		ShowMessageBox(_T("No Data"));
		return;
	}

	tmpStr.Empty();
	StringUpper(pMF->m_CompanyInfo.sc_pname, tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HealthService"), tmpStr);
	StringUpper(pMF->m_CompanyInfo.sc_name, tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HospitalName"), tmpStr);
	rs.GetValue(_T("deptid"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Department"), pMF->GetDepartmentName(tmpStr));

	rs.GetValue(_T("docno"), nDocumentNo);
	tmpStr.Format(_T("%ld"), nDocumentNo);
	rpt.GetReportHeader()->SetValue(_T("DocumentNo"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Barcode[128A]"),tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Barcode[128B]"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Barcode[128C]"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Barcode[39]"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Barcode[93]"), tmpStr);

	tmpStr.Format(_T("%ld"), nOrderId);
	rpt.GetReportHeader()->SetValue(_T("OrderID"), tmpStr);

	CString szPatientName;
	rs.GetValue(_T("pname"), szPatientName);
	rpt.GetReportHeader()->SetValue(_T("PATIENTNAME"), szPatientName);
	rs.GetValue(_T("age"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Age"), tmpStr);
	
	rs.GetValue(_T("birthyear"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("YearOfBirth"), tmpStr);

	rs.GetValue(_T("sex"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Sex"), tmpStr);
	rs.GetValue(_T("address"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Address"), tmpStr);
	

	rs.GetValue(_T("rank"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Rank"), tmpStr);

	rs.GetValue(_T("workplace"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Workplace"), tmpStr);
	rs.GetValue(_T("objectname"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Object"), tmpStr);
	rs.GetValue(_T("cardno"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("CardNo"), tmpStr);
	
	rs.GetValue(_T("examdate"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("ExamDate"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
	
	rs.GetValue(_T("ObjectType"), szObjectType);
	rs.GetValue(_T("Printed"), nPrinted);
	rs.GetValue(_T("HDF_ACCEPTEDFEE"), szACCEPTEDFEE);	
	rs.GetValue(_T("refidx"), nRefIndex);
	rs.GetValue(_T("roomid"), pMF->m_nRoomID);
	tmpStr.Format(_T("%d"), pMF->m_nRoomID);
	rpt.GetReportHeader()->SetValue(_T("RoomID"), tmpStr);	
	rs.GetValue(_T("depttype"), tmpStr);	
	tmpStr.Trim();

	szSQL.Format(_T("SELECT he_icd10 as icd ,he_diagnostic as Diagnostic FROM hms_exam WHERE he_docno=%ld AND he_roomid=%d"), nDocumentNo, pMF->m_nRoomID);	
	rs2.ExecSQL(szSQL);
	if(!rs2.IsEOF())
	{
		rpt.GetReportHeader()->SetValue(_T("Diagnostic"), rs2.GetValue(_T("Diagnostic")));			
	}
	else
	{
		tmpStr.Empty();
		rpt.GetReportHeader()->SetValue(_T("Diagnostic"), tmpStr);
	}
	rs.GetValue(_T("relationdisease"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("relationdisease"), tmpStr);

	
	//Page Header
	//Report Detail
	CReportSection* rptDetail = rpt.GetDetail(0); 
	int nItem=1;
	CRecord rsu(&pMF->m_db);
	CString szItemId;


	szSQL.Format(_T("SELECT    hp_drugname AS hpol_productname,") \
	_T("          hp_unit AS hpol_productuom,") \
	_T("          hp_usage AS hpol_usage,") \
	_T("          SUM(hp_quantity) AS hpol_qtyorder") \
	_T(" FROM      hms_prescription") \
	_T(" WHERE     hp_receptidx = %ld") \
	_T(" GROUP BY hp_drugname, hp_unit, hp_usage, hp_line") \
	_T(" ORDER     BY hp_line, hp_drugname"), nOrderId);


	rs2.ExecSQL(szSQL);
	while(!rs2.IsEOF()){ 
		rptDetail = rpt.AddDetail();
		rs2.GetValue(_T("hpol_product_id"), szItemId);
		double money;
		rs2.GetValue(_T("hpol_amount"), money);
		dblTotalAmount += money;
		tmpStr.Format(_T("%d"), nItem++);
		rptDetail->SetValue(_T("1"), tmpStr);
		rs2.GetValue(_T("hpol_productname"), tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);
		rs2.GetValue(_T("hpol_productuom"), tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);
		rs2.GetValue(_T("hpol_qtyorder"), tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);
		rs2.GetValue(_T("hpol_usage"), szUsage);
		if(!szUsage.IsEmpty())
		{
			CReportSection *grp = rpt.GetGroupHeader(1);
			rptDetail = rpt.AddDetail(grp);
			rptDetail->SetValue(_T("Indication"), szUsage);
		}
		rs2.MoveNext();
	}

	//Page Footer
	//Report Footer
	tmpStr.Format(_T("%d"), nItem-1);
	rpt.GetReportFooter()->SetValue(_T("TotalItem"), tmpStr);
	MoneyToString(ToString(dblTotalAmount), tmpStr);
	rpt.GetReportFooter()->SetValue(_T("TotalAmount"), tmpStr);
	rs.GetValue(_T("advice"), tmpStr);
	rpt.GetReportFooter()->SetValue(_T("Advice"), tmpStr);
	CString szDate;
	//rs.GetValue(_T("orderdate"), tmpStr);
	tmpStr = pMF->GetSysDateTime();
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), tmpStr.Mid(11,5), tmpStr.Mid(8, 2), tmpStr.Mid(5, 2), tmpStr.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
	
	rpt.GetReportFooter()->SetValue(_T("PatientSign"), szPatientName);

	rs.GetValue(_T("doctor"), tmpStr);
	rpt.GetReportFooter()->SetValue(_T("DoctorName"), pMF->GetDoctorName(tmpStr));
	CReportItem *img = rpt.GetReportFooter()->GetItem(_T("Signature"));
	if(img)
	{
		HBITMAP hbmp = pMF->GetSignatureImage(tmpStr);
		if(hbmp) img->SetHBITMAP(hbmp);
		img->SetFixedHeight(false);
	}
	

	CString szStatus;
	rs.GetValue(_T("hd_status"), szStatus);
	szSQL.Format(_T("select note as ghi_chu from ivf_appointment where orderid = %ld"), nOrderId);
	rs2.ExecSQL(szSQL);
	tmpStr.Empty();
	while (!rs2.IsEOF())
	{
		if (!tmpStr.IsEmpty())
		{
			tmpStr += _T("\n");
		}
		tmpStr.AppendFormat(_T("%s"), rs2.GetValue(_T("ghi_chu")));
		rs2.MoveNext();
	}
	rpt.GetReportFooter()->SetValue(_T("lich_hen"), tmpStr);
	if(bPreview)
		rpt.PrintPreview();
	else
	{
		rpt.Print(bDirect);		
	}
	
}

int CHMSTreatmentTrackingDialog::OnTreatListArrangePrescription()
{
	CStringToken tk(m_wndTreatList.GetItemKey(m_wndTreatList.GetCurSel()), _T("|"));
	long nOrderID = 0;
	CString szType;
	tk.GetAt(1, nOrderID);
	tk.GetAt(0, szType);
	_tprintf(_T("\nnOrderID: %ld| szType: %s\n"), nOrderID, szType);
	CHMSArrangeDrugLine dlg(this, nOrderID, szType);
	if (dlg.DoModal() == IDOK)
	{
		OnTreatListLoadData();
	}
	return 0;
}