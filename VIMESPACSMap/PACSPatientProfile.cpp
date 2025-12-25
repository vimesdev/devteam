#include "PACSPatientProfile.h"
#include "MainFrm.h"
#include ".\pacspatientprofile.h"
#include "StringToken.h"
#include "Afxsock.h"
#include <atlenc.h>
#include <fstream>      // std::fstream
#include <afxinet.h>


class CommTCP: public CSocket
{
public:
	CWnd*	m_pParent;
	CommTCP(CWnd* pWnd){ m_pParent = pWnd;}
	~CommTCP(){}
	void OnReceive(int nErrorCode){
		char buf[2048];
	  	int byte=Receive(buf,2048);
	  	buf[byte]='\0';
		printf("\r\nRECV: %s", buf);
		if(m_pParent) 
		{
			((CPACSPatientProfile*)m_pParent)->OnReceive(buf, byte);
		}
		CSocket::OnReceive(nErrorCode);
	}

};

static CSocket* _socket = NULL;





/*static void _OnDocumentNoChangeFnc(CWnd *pWnd){
	((CPACSPatientProfile *)pWnd)->OnDocumentNoChange();
} */
static void _OnDocumentNoSetfocusFnc(CWnd *pWnd){
	((CPACSPatientProfile *)pWnd)->OnDocumentNoSetfocus();
}
/*static void _OnDocumentNoKillfocusFnc(CWnd *pWnd){
	((CPACSPatientProfile *)pWnd)->OnDocumentNoKillfocus();
} */
static int _OnDocumentNoCheckValueFnc(CWnd *pWnd){
	return ((CPACSPatientProfile *)pWnd)->OnDocumentNoCheckValue();
} 
/*static void _OnBarcodeChangeFnc(CWnd *pWnd){
	((CPACSPatientProfile *)pWnd)->OnBarcodeChange();
} */
/*static void _OnBarcodeSetfocusFnc(CWnd *pWnd){
	((CPACSPatientProfile *)pWnd)->OnBarcodeSetfocus();} */ 
/*static void _OnBarcodeKillfocusFnc(CWnd *pWnd){
	((CPACSPatientProfile *)pWnd)->OnBarcodeKillfocus();
} */
static int _OnBarcodeCheckValueFnc(CWnd *pWnd){
	return ((CPACSPatientProfile *)pWnd)->OnBarcodeCheckValue();
} 
/*static void _OnPatientNameChangeFnc(CWnd *pWnd){
	((CPACSPatientProfile *)pWnd)->OnPatientNameChange();
} */
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CPACSPatientProfile *)pWnd)->OnPatientNameSetfocus();} */ 
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((CPACSPatientProfile *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((CPACSPatientProfile *)pWnd)->OnPatientNameCheckValue();
} 
/*static void _OnAgeChangeFnc(CWnd *pWnd){
	((CPACSPatientProfile *)pWnd)->OnAgeChange();
} */
/*static void _OnAgeSetfocusFnc(CWnd *pWnd){
	((CPACSPatientProfile *)pWnd)->OnAgeSetfocus();} */ 
/*static void _OnAgeKillfocusFnc(CWnd *pWnd){
	((CPACSPatientProfile *)pWnd)->OnAgeKillfocus();
} */
static int _OnAgeCheckValueFnc(CWnd *pWnd){
	return ((CPACSPatientProfile *)pWnd)->OnAgeCheckValue();
} 
static void _OnSexSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPACSPatientProfile* )pWnd)->OnSexSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSexSelendokFnc(CWnd *pWnd){
	((CPACSPatientProfile *)pWnd)->OnSexSelendok();
}
/*static void _OnSexSetfocusFnc(CWnd *pWnd){
	((CPACSPatientProfile *)pWnd)->OnSexKillfocus();
}*/
/*static void _OnSexKillfocusFnc(CWnd *pWnd){
	((CPACSPatientProfile *)pWnd)->OnSexKillfocus();
}*/
static long _OnSexLoadDataFnc(CWnd *pWnd){
	return ((CPACSPatientProfile *)pWnd)->OnSexLoadData();
}
/*static void _OnSexAddNewFnc(CWnd *pWnd){
	((CPACSPatientProfile *)pWnd)->OnSexAddNew();
}*/
/*static void _OnAddressChangeFnc(CWnd *pWnd){
	((CPACSPatientProfile *)pWnd)->OnAddressChange();
} */
/*static void _OnAddressSetfocusFnc(CWnd *pWnd){
	((CPACSPatientProfile *)pWnd)->OnAddressSetfocus();} */ 
/*static void _OnAddressKillfocusFnc(CWnd *pWnd){
	((CPACSPatientProfile *)pWnd)->OnAddressKillfocus();
} */
static int _OnAddressCheckValueFnc(CWnd *pWnd){
	return ((CPACSPatientProfile *)pWnd)->OnAddressCheckValue();
} 
/*static void _OnDiagnosticChangeFnc(CWnd *pWnd){
	((CPACSPatientProfile *)pWnd)->OnDiagnosticChange();
} */
/*static void _OnDiagnosticSetfocusFnc(CWnd *pWnd){
	((CPACSPatientProfile *)pWnd)->OnDiagnosticSetfocus();} */ 
/*static void _OnDiagnosticKillfocusFnc(CWnd *pWnd){
	((CPACSPatientProfile *)pWnd)->OnDiagnosticKillfocus();
} */
static int _OnDiagnosticCheckValueFnc(CWnd *pWnd){
	return ((CPACSPatientProfile *)pWnd)->OnDiagnosticCheckValue();
} 
/*static void _OnOrderDateChangeFnc(CWnd *pWnd){
	((CPACSPatientProfile *)pWnd)->OnOrderDateChange();
} */
/*static void _OnOrderDateSetfocusFnc(CWnd *pWnd){
	((CPACSPatientProfile *)pWnd)->OnOrderDateSetfocus();} */ 
/*static void _OnOrderDateKillfocusFnc(CWnd *pWnd){
	((CPACSPatientProfile *)pWnd)->OnOrderDateKillfocus();
} */
static int _OnOrderDateCheckValueFnc(CWnd *pWnd){
	return ((CPACSPatientProfile *)pWnd)->OnOrderDateCheckValue();
} 
static void _OnDoctorSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPACSPatientProfile* )pWnd)->OnDoctorSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDoctorSelendokFnc(CWnd *pWnd){
	((CPACSPatientProfile *)pWnd)->OnDoctorSelendok();
}
/*static void _OnDoctorSetfocusFnc(CWnd *pWnd){
	((CPACSPatientProfile *)pWnd)->OnDoctorKillfocus();
}*/
/*static void _OnDoctorKillfocusFnc(CWnd *pWnd){
	((CPACSPatientProfile *)pWnd)->OnDoctorKillfocus();
}*/
static long _OnDoctorLoadDataFnc(CWnd *pWnd){
	return ((CPACSPatientProfile *)pWnd)->OnDoctorLoadData();
}
/*static void _OnDoctorAddNewFnc(CWnd *pWnd){
	((CPACSPatientProfile *)pWnd)->OnDoctorAddNew();
}*/
/*static void _OnDepartmentChangeFnc(CWnd *pWnd){
	((CPACSPatientProfile *)pWnd)->OnDepartmentChange();
} */
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CPACSPatientProfile *)pWnd)->OnDepartmentSetfocus();} */ 
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CPACSPatientProfile *)pWnd)->OnDepartmentKillfocus();
} */
static int _OnDepartmentCheckValueFnc(CWnd *pWnd){
	return ((CPACSPatientProfile *)pWnd)->OnDepartmentCheckValue();
} 
/*static void _OnRoomChangeFnc(CWnd *pWnd){
	((CPACSPatientProfile *)pWnd)->OnRoomChange();
} */
/*static void _OnRoomSetfocusFnc(CWnd *pWnd){
	((CPACSPatientProfile *)pWnd)->OnRoomSetfocus();} */ 
/*static void _OnRoomKillfocusFnc(CWnd *pWnd){
	((CPACSPatientProfile *)pWnd)->OnRoomKillfocus();
} */
static int _OnRoomCheckValueFnc(CWnd *pWnd){
	return ((CPACSPatientProfile *)pWnd)->OnRoomCheckValue();
} 
static void _OnObjectSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPACSPatientProfile* )pWnd)->OnObjectSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnObjectSelendokFnc(CWnd *pWnd){
	((CPACSPatientProfile *)pWnd)->OnObjectSelendok();
}
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CPACSPatientProfile *)pWnd)->OnObjectKillfocus();
}*/
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CPACSPatientProfile *)pWnd)->OnObjectKillfocus();
}*/
static long _OnObjectLoadDataFnc(CWnd *pWnd){
	return ((CPACSPatientProfile *)pWnd)->OnObjectLoadData();
}
/*static void _OnObjectAddNewFnc(CWnd *pWnd){
	((CPACSPatientProfile *)pWnd)->OnObjectAddNew();
}*/
static void _OnEmergencySelectFnc(CWnd *pWnd){
	 ((CPACSPatientProfile*)pWnd)->OnEmergencySelect();
}

static void _OnDrugSelendokFnc(CWnd *pWnd){
	return ((CPACSPatientProfile*)pWnd)->OnDrugSelendok();
}
static long _OnDrugLoadDataFnc(CWnd *pWnd){
	return ((CPACSPatientProfile*)pWnd)->OnDrugLoadDta();
}


static void _OnPerformRoomSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPACSPatientProfile* )pWnd)->OnPerformRoomSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPerformRoomSelendokFnc(CWnd *pWnd){
	((CPACSPatientProfile *)pWnd)->OnPerformRoomSelendok();
}
/*static void _OnPerformRoomSetfocusFnc(CWnd *pWnd){
	((CPACSPatientProfile *)pWnd)->OnPerformRoomKillfocus();
}*/
/*static void _OnPerformRoomKillfocusFnc(CWnd *pWnd){
	((CPACSPatientProfile *)pWnd)->OnPerformRoomKillfocus();
}*/
static long _OnPerformRoomLoadDataFnc(CWnd *pWnd){
	return ((CPACSPatientProfile *)pWnd)->OnPerformRoomLoadData();
}
/*static void _OnPerformRoomAddNewFnc(CWnd *pWnd){
	((CPACSPatientProfile *)pWnd)->OnPerformRoomAddNew();
}*/
static long _OnOrderListLoadDataFnc(CWnd *pWnd){
	return ((CPACSPatientProfile*)pWnd)->OnOrderListLoadData();
} 
static void _OnOrderListDblClickFnc(CWnd *pWnd){
	((CPACSPatientProfile*)pWnd)->OnOrderListDblClick();
} 
static void _OnOrderListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CPACSPatientProfile*)pWnd)->OnOrderListSelectChange(nOldItem, nNewItem);
} 
static int _OnOrderListDeleteItemFnc(CWnd *pWnd){
	 return ((CPACSPatientProfile*)pWnd)->OnOrderListDeleteItem();
}


static long _OnAssignedListLoadDataFnc(CWnd *pWnd){
	return ((CPACSPatientProfile*)pWnd)->OnAssignedListLoadData();
} 
static void _OnAssignedListDblClickFnc(CWnd *pWnd){
	((CPACSPatientProfile*)pWnd)->OnAssignedListDblClick();
} 
static void _OnAssignedListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CPACSPatientProfile*)pWnd)->OnAssignedListSelectChange(nOldItem, nNewItem);
} 
static int _OnAssignedListDeleteItemFnc(CWnd *pWnd){
	 return ((CPACSPatientProfile*)pWnd)->OnAssignedListDeleteItem();
}


static void _OnTabSelectChangeFnc(CWnd *pWnd, int nOld, int nNew){
	((CPACSPatientProfile*)pWnd)->OnTabSelectChange(nOld, nNew);
} 
static void _OnAddMaterialSelectFnc(CWnd *pWnd){
	CPACSPatientProfile *pVw = (CPACSPatientProfile *)pWnd;
	pVw->OnAddMaterialSelect();
}
static void _OnUpdateSelectFnc(CWnd *pWnd){
	CPACSPatientProfile *pVw = (CPACSPatientProfile *)pWnd;
	pVw->OnUpdateSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CPACSPatientProfile *pVw = (CPACSPatientProfile *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CPACSPatientProfile *pVw = (CPACSPatientProfile *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CPACSPatientProfile *pVw = (CPACSPatientProfile *)pWnd;
	pVw->OnPrintSelect();
} 


static void _OnInputFormSelectFnc(CWnd *pWnd){
	CPACSPatientProfile *pVw = (CPACSPatientProfile *)pWnd;
	pVw->OnInputFormSelect();
} 

static void _OnCaptureSelectFnc(CWnd *pWnd){
	CPACSPatientProfile *pVw = (CPACSPatientProfile *)pWnd;
	pVw->OnCaptureSelect();
} 
static long _OnInformationRoomListLoadDataFnc(CWnd *pWnd){
	return ((CPACSPatientProfile*)pWnd)->OnInformationRoomListLoadData();
} 
static void _OnInformationRoomListDblClickFnc(CWnd *pWnd){
	((CPACSPatientProfile*)pWnd)->OnInformationRoomListDblClick();
} 
static void _OnInformationRoomListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CPACSPatientProfile*)pWnd)->OnInformationRoomListSelectChange(nOldItem, nNewItem);
} 
static int _OnInformationRoomListDeleteItemFnc(CWnd *pWnd){
	 return ((CPACSPatientProfile*)pWnd)->OnInformationRoomListDeleteItem();
} 
static int _OnAddPACSPatientProfileFnc(CWnd *pWnd){
	 return ((CPACSPatientProfile*)pWnd)->OnAddPACSPatientProfile();
} 
static int _OnEditPACSPatientProfileFnc(CWnd *pWnd){
	 return ((CPACSPatientProfile*)pWnd)->OnEditPACSPatientProfile();
} 
static int _OnDeletePACSPatientProfileFnc(CWnd *pWnd){
	 return ((CPACSPatientProfile*)pWnd)->OnDeletePACSPatientProfile();
} 
static int _OnSavePACSPatientProfileFnc(CWnd *pWnd){
	 return ((CPACSPatientProfile*)pWnd)->OnSavePACSPatientProfile();
} 
static int _OnCancelPACSPatientProfileFnc(CWnd *pWnd){
	 return ((CPACSPatientProfile*)pWnd)->OnCancelPACSPatientProfile();
} 


static int _OnChangeOrderTestFnc(CWnd *pWnd){
	((CPACSPatientProfile*)pWnd)->OnChangeOrderTestSelect();
	return 0;
}
static int _OnDeleteOrderFnc(CWnd *pWnd){
	((CPACSPatientProfile*)pWnd)->OnDeleteOrder();
	return 0;
}

static int _OnCaptureImageFnc(CWnd *pWnd){
	((CPACSPatientProfile*)pWnd)->OnCaptureSelect();
	return 0;
} 
static int _OnDownloadImageFnc(CWnd *pWnd){
	((CPACSPatientProfile*)pWnd)->DownloadImage();
	return 0;
} 


static int _OnImportImageFnc(CWnd *pWnd){
	((CPACSPatientProfile*)pWnd)->ImportImage();
	return 0;
}

static int _OnRefreshListFnc(CWnd *pWnd){
	return ((CPACSPatientProfile*)pWnd)->OnOrderListLoadData();
} 

CPACSPatientProfile::CPACSPatientProfile(){

	m_nDlgWidth = 1020;
	m_nDlgHeight = 655;
	SetDefaultValues();
	//m_wndResult = NULL;
	//m_hDicomThread = NULL;
	m_szCheckEnterMaterialOfParaclinical = _T("N");

	_socket = new CommTCP(this);

	if( AfxSocketInit() == FALSE)
	{ 
	  		AfxMessageBox(_T("Failed to Initialize Sockets"));
			return; 
	}




}
CPACSPatientProfile::~CPACSPatientProfile(){
	//if(m_wndResult) delete m_wndResult;
	
	
}
void CPACSPatientProfile::OnCreateComponents(){
	m_wndPatientProfile.Create(this, _T("Patient Profile"), 5, 5, 390, 300);
	m_wndInformationRoomGroup.Create(this, _T("Order List"), 395, 5, 1000, 300);
	m_wndOrderGroup.Create(this, _T("Information Room"), 5, 305, 1000, 610);
	m_wndDocumentNoLabel.Create(this, _T("DocumentNo"), 10, 30, 110, 55);
	m_wndDocumentNo.Create(this,115, 30, 200, 55);
	
	m_wndBarcodeLabel.Create(this, _T("Barcode"), 205, 30, 290, 55);
	m_wndBarcode.Create(this,295, 30, 385, 55); 
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 10, 60, 110, 85);
	m_wndPatientName.Create(this,115, 60, 385, 85); 
	m_wndAgeLabel.Create(this, _T("Age"), 10, 90, 110, 115);
	m_wndAge.Create(this,115, 90, 200, 115); 
	m_wndSexLabel.Create(this, _T("Sex"), 205, 90, 290, 115);
	m_wndSex.Create(this,295, 90, 385, 115); 
	m_wndAddressLabel.Create(this, _T("Address"), 10, 120, 110, 145);
	m_wndAddress.Create(this,115, 120, 385, 145); 
	m_wndDiagnosticLabel.Create(this, _T("Diagnostic"), 10, 150, 110, 175);
	m_wndDiagnostic.Create(this,115, 150, 385, 175); 
	m_wndOrderDateLabel.Create(this, _T("Order Date"), 10, 180, 110, 205);
	m_wndOrderDate.Create(this,115, 180, 200, 205); 
	m_wndDoctorLabel.Create(this, _T("Doctor"), 205, 180, 250, 205);
	m_wndDoctor.Create(this,255, 180, 385, 205); 
	m_wndDepartmentLabel.Create(this, _T("Department"), 10, 210, 110, 235);
	m_wndDepartment.Create(this,115, 210, 200, 235); 
	m_wndRoomLabel.Create(this, _T("Room"), 205, 210, 250, 235);
	m_wndRoom.Create(this,255, 210, 385, 235); 
	m_wndObjectLabel.Create(this, _T("Object"), 10, 240, 110, 265);
	m_wndObject.Create(this,115, 240, 385, 265);	
	m_wndPerformRoomLabel.Create(this, _T("Perform Room"), 9, 270, 109, 295);
	m_wndPerformRoom.Create(this,114, 270, 384, 295); 
	
	/*m_wndUpdate.Create(this, _T("&Update"), 585, 625, 675, 650);
	m_wndSave.Create(this, _T("&Save"), 680, 625, 770, 650);
	m_wndCancel.Create(this, _T("&Cancel"), 775, 625, 865, 650);*/

	m_wndInformationRoomList.Create(this, 10, 330, 535, 605);
	m_wndOrderList.Create(this, 540, 330, 995, 605);
	m_wndAssignedList.Create(this, 400, 30, 995, 295);


	m_wndAddMaterial.Create(this, _T("Add &Material"), 10, 625, 130, 650);
	m_wndSave.Create(this, _T("&Apply"), 760, 625, 865, 650);
	m_wndPrint.Create(this, _T("&Print"), 870, 625, 1000, 650);	

	

		

}
void CPACSPatientProfile::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();


	m_wndDocumentNo.SetCheckValue(true);
	m_wndBarcode.SetLimitText(35);
	m_wndBarcode.SetCheckValue(true);
	m_wndPatientName.SetLimitText(65);
	m_wndPatientName.SetCheckValue(true);
	m_wndPatientName.SetTextColor(RGB(0, 0, 255));
	
	m_wndPatientName.SetInitCap(true);
	m_wndAge.SetLimitText(15);
	m_wndAge.SetCheckValue(true);
	m_wndSex.SetCheckValue(true);
	m_wndSex.LimitText(1);
	m_wndAddress.SetLimitText(254);
	//m_wndAddress.SetCheckValue(true);
	m_wndDiagnostic.SetLimitText(254);
	//m_wndDiagnostic.SetCheckValue(true);
	m_wndOrderDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndOrderDate.SetCheckValue(true);
	m_wndDoctor.SetCheckValue(true);
	m_wndDoctor.LimitText(15);
	m_wndDepartment.SetCheckValue(true);
	m_wndRoom.SetLimitText(1024);
	m_wndRoom.SetCheckValue(true);
	m_wndObject.SetCheckValue(true);
	m_wndObject.LimitText(1024);
	m_wndPerformRoom.SetCheckValue(true);
	m_wndPerformRoom.LimitText(1024);

	//m_wndInformationRoomList.OnSetFont(GetFaceSize()+10, TRUE);
	
	m_wndAddMaterial.ModifyStyle(WS_TABSTOP, 0);
    m_wndBarcode.SetReadOnly(true);
	m_wndPerformRoom.SetCheckValue(true);

	
	m_wndSex.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndSex.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndDoctor.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDoctor.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);

/*
	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDepartment.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndRoom.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndRoom.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);
*/	



	m_wndObject.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndObject.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);	
//	m_wndOrderList.GetHeaderControl()->SetItemHeight(2);
//	m_wndOrderList.ModifyStyle(0, LVS_NOSORTHEADER);

	
	m_wndOrderList.InsertColumn(0, _T("Order ID"), CFMT_TEXT, 80);
	m_wndOrderList.InsertColumn(1, _T(""), CFMT_TEXT, 0); //orderline
	m_wndOrderList.InsertColumn(2, _T("Desc"), CFMT_TEXT, 370);
	m_wndOrderList.InsertColumn(3, _T(""), CFMT_TEXT, 0); //group
	
	m_wndAssignedList.InsertColumn(0, _T("Order ID"), CFMT_TEXT, 70);
	m_wndAssignedList.InsertColumn(1, _T("Description"), CFMT_TEXT, 180);
	m_wndAssignedList.InsertColumn(2, _T("Room"), CFMT_TEXT, 140);
	m_wndAssignedList.InsertColumn(3, _T("Issue No"), CFMT_TEXT|CFMT_CENTER, 60);
	m_wndAssignedList.InsertColumn(4, _T("Ticket Qty"), CFMT_NUMBER, 70);
	m_wndAssignedList.InsertColumn(5, _T("Status"), CFMT_TEXT|CFMT_CENTER, 70);
	m_wndAssignedList.InsertColumn(6, _T("deptid"), CFMT_TEXT, 0);
	m_wndAssignedList.InsertColumn(7, _T("roomid"), CFMT_TEXT, 0);
	m_wndAssignedList.InsertColumn(8, _T("Chi tiết phiếu"), CFMT_TEXT, 70); //orderline
	m_wndAssignedList.InsertColumn(9, _T(""), CFMT_TEXT, 0); //itemid
 

	m_wndInformationRoomList.InsertColumn(0, _T("ID"), CFMT_NUMBER|CFMT_CENTER, 50);
	m_wndInformationRoomList.InsertColumn(1, _T("Room"), CFMT_TEXT, 300);
	m_wndInformationRoomList.InsertColumn(2, _T("Issued"), CFMT_NUMBER, 80);	
	m_wndInformationRoomList.InsertColumn(3, _T("Performed"), CFMT_NUMBER, 90);	
	m_wndInformationRoomList.InsertColumn(4, _T(""), CFMT_TEXT, 0);	//deptid
	m_wndInformationRoomList.InsertColumn(5, _T(""), CFMT_TEXT, 0);	//groups

	
	m_PACS_patientTbl.SetTableName(_T("PACS_patient"));
	m_PACS_patientTbl.AddField(_T("pacsp_createdby"), dfText, 15); 
	m_PACS_patientTbl.AddField(_T("pacsp_createddate"), dfDateTime); 
	m_PACS_patientTbl.AddField(_T("pacsp_updatedby"), dfText, 15); 
	m_PACS_patientTbl.AddField(_T("pacsp_updateddate"), dfDateTime); 
	m_PACS_patientTbl.AddField(_T("pacsp_docno"), dfLong); 
	m_PACS_patientTbl.AddField(_T("pacsp_object"), dfLong); 
	m_PACS_patientTbl.AddField(_T("pacsp_emergcy"), dfText, 1); 
	m_PACS_patientTbl.AddField(_T("pacsp_pid"), dfText, 15); 
	m_PACS_patientTbl.AddField(_T("pacsp_pname"), dfText, 65); 
	m_PACS_patientTbl.AddField(_T("pacsp_birthdate"), dfDate); 
	m_PACS_patientTbl.AddField(_T("pacsp_age"), dfText, 15); 
	m_PACS_patientTbl.AddField(_T("pacsp_sex"), dfText, 1); 
	m_PACS_patientTbl.AddField(_T("pacsp_address"), dfText, 254); 
	m_PACS_patientTbl.AddField(_T("pacsp_phone"), dfText, 13); 
	m_PACS_patientTbl.AddField(_T("pacsp_occupation"), dfLong); 
	m_PACS_patientTbl.AddField(_T("pacsp_diagnostic"), dfText, 254); 
	m_PACS_patientTbl.AddField(_T("pacsp_icd10"), dfText, 13); 
	m_PACS_patientTbl.AddField(_T("pacsp_doctorid"), dfText, 15); 
	m_PACS_patientTbl.AddField(_T("pacsp_orderdate"), dfDateTime); 
	m_PACS_patientTbl.AddField(_T("pacsp_orderdept"), dfText, 7); 
	m_PACS_patientTbl.AddField(_T("pacsp_orderroom"), dfLong); 
	m_PACS_patientTbl.AddField(_T("pacsp_performdate"), dfDateTime); 
	m_PACS_patientTbl.AddField(_T("pacsp_performdept"), dfText, 7); 
	m_PACS_patientTbl.AddField(_T("pacsp_performroom"), dfLong); 
	m_PACS_patientTbl.AddField(_T("pacsp_performerid"), dfText, 15); 
	m_szDate = m_szOrderDate = m_szPerformDate = pMF->GetSysDate();

	CString szSQL;
	szSQL.Format(_T("SELECT hc_checkentermaterial_pacs, hc_pacs_host FROM hms_config WHERE rownum < 2"));
	CRecord rs(&pMF->m_db);
	rs.ExecSQL(szSQL);
	m_szPacsHost.Empty();
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("hc_checkentermaterial_pacs"), m_szCheckEnterMaterialOfParaclinical);
		rs.GetValue(_T("hc_pacs_host"), m_szPacsHost);
	}
	SetMode(VM_NONE);
	OnInformationRoomListLoadData();

	
	


}
void CPACSPatientProfile::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndDocumentNo.SetEvent(WE_CHANGE, _OnDocumentNoChangeFnc);
	m_wndDocumentNo.SetEvent(WE_SETFOCUS, _OnDocumentNoSetfocusFnc);
	//m_wndDocumentNo.SetEvent(WE_KILLFOCUS, _OnDocumentNoKillfocusFnc);
	m_wndDocumentNo.SetEvent(WE_CHECKVALUE, _OnDocumentNoCheckValueFnc);
	//m_wndBarcode.SetEvent(WE_CHANGE, _OnBarcodeChangeFnc);
	//m_wndBarcode.SetEvent(WE_SETFOCUS, _OnBarcodeSetfocusFnc);
	//m_wndBarcode.SetEvent(WE_KILLFOCUS, _OnBarcodeKillfocusFnc);
	m_wndBarcode.SetEvent(WE_CHECKVALUE, _OnBarcodeCheckValueFnc);
	//m_wndPatientName.SetEvent(WE_CHANGE, _OnPatientNameChangeFnc);
	//m_wndPatientName.SetEvent(WE_SETFOCUS, _OnPatientNameSetfocusFnc);
	//m_wndPatientName.SetEvent(WE_KILLFOCUS, _OnPatientNameKillfocusFnc);
	m_wndPatientName.SetEvent(WE_CHECKVALUE, _OnPatientNameCheckValueFnc);
	//m_wndAge.SetEvent(WE_CHANGE, _OnAgeChangeFnc);
	//m_wndAge.SetEvent(WE_SETFOCUS, _OnAgeSetfocusFnc);
	//m_wndAge.SetEvent(WE_KILLFOCUS, _OnAgeKillfocusFnc);
	m_wndAge.SetEvent(WE_CHECKVALUE, _OnAgeCheckValueFnc);
	m_wndSex.SetEvent(WE_SELENDOK, _OnSexSelendokFnc);
	//m_wndSex.SetEvent(WE_SETFOCUS, _OnSexSetfocusFnc);
	//m_wndSex.SetEvent(WE_KILLFOCUS, _OnSexKillfocusFnc);
	m_wndSex.SetEvent(WE_SELCHANGE, _OnSexSelectChangeFnc);
	m_wndSex.SetEvent(WE_LOADDATA, _OnSexLoadDataFnc);
	//m_wndSex.SetEvent(WE_ADDNEW, _OnSexAddNewFnc);
	//m_wndAddress.SetEvent(WE_CHANGE, _OnAddressChangeFnc);
	//m_wndAddress.SetEvent(WE_SETFOCUS, _OnAddressSetfocusFnc);
	//m_wndAddress.SetEvent(WE_KILLFOCUS, _OnAddressKillfocusFnc);
	m_wndAddress.SetEvent(WE_CHECKVALUE, _OnAddressCheckValueFnc);
	//m_wndDiagnostic.SetEvent(WE_CHANGE, _OnDiagnosticChangeFnc);
	//m_wndDiagnostic.SetEvent(WE_SETFOCUS, _OnDiagnosticSetfocusFnc);
	//m_wndDiagnostic.SetEvent(WE_KILLFOCUS, _OnDiagnosticKillfocusFnc);
	m_wndDiagnostic.SetEvent(WE_CHECKVALUE, _OnDiagnosticCheckValueFnc);
	//m_wndOrderDate.SetEvent(WE_CHANGE, _OnOrderDateChangeFnc);
	//m_wndOrderDate.SetEvent(WE_SETFOCUS, _OnOrderDateSetfocusFnc);
	//m_wndOrderDate.SetEvent(WE_KILLFOCUS, _OnOrderDateKillfocusFnc);
	m_wndOrderDate.SetEvent(WE_CHECKVALUE, _OnOrderDateCheckValueFnc);
	m_wndDoctor.SetEvent(WE_SELENDOK, _OnDoctorSelendokFnc);
	//m_wndDoctor.SetEvent(WE_SETFOCUS, _OnDoctorSetfocusFnc);
	//m_wndDoctor.SetEvent(WE_KILLFOCUS, _OnDoctorKillfocusFnc);
	m_wndDoctor.SetEvent(WE_SELCHANGE, _OnDoctorSelectChangeFnc);
	m_wndDoctor.SetEvent(WE_LOADDATA, _OnDoctorLoadDataFnc);
	//m_wndDoctor.SetEvent(WE_ADDNEW, _OnDoctorAddNewFnc);
	//m_wndDepartment.SetEvent(WE_CHANGE, _OnDepartmentChangeFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_CHECKVALUE, _OnDepartmentCheckValueFnc);
	//m_wndRoom.SetEvent(WE_CHANGE, _OnRoomChangeFnc);
	//m_wndRoom.SetEvent(WE_SETFOCUS, _OnRoomSetfocusFnc);
	//m_wndRoom.SetEvent(WE_KILLFOCUS, _OnRoomKillfocusFnc);
	m_wndRoom.SetEvent(WE_CHECKVALUE, _OnRoomCheckValueFnc);
	m_wndObject.SetEvent(WE_SELENDOK, _OnObjectSelendokFnc);
	//m_wndObject.SetEvent(WE_SETFOCUS, _OnObjectSetfocusFnc);
	//m_wndObject.SetEvent(WE_KILLFOCUS, _OnObjectKillfocusFnc);
	m_wndObject.SetEvent(WE_SELCHANGE, _OnObjectSelectChangeFnc);
	m_wndObject.SetEvent(WE_LOADDATA, _OnObjectLoadDataFnc);
	//m_wndObject.SetEvent(WE_ADDNEW, _OnObjectAddNewFnc);
	m_wndEmergency.SetEvent(WE_CLICK, _OnEmergencySelectFnc);
	m_wndPerformRoom.SetEvent(WE_SELENDOK, _OnPerformRoomSelendokFnc);
	//m_wndPerformRoom.SetEvent(WE_SETFOCUS, _OnPerformRoomSetfocusFnc);
	//m_wndPerformRoom.SetEvent(WE_KILLFOCUS, _OnPerformRoomKillfocusFnc);
	m_wndPerformRoom.SetEvent(WE_SELCHANGE, _OnPerformRoomSelectChangeFnc);
	m_wndPerformRoom.SetEvent(WE_LOADDATA, _OnPerformRoomLoadDataFnc);
	//m_wndPerformRoom.SetEvent(WE_ADDNEW, _OnPerformRoomAddNewFnc);
	m_wndOrderList.SetEvent(WE_SELCHANGE, _OnOrderListSelectChangeFnc);
	m_wndOrderList.SetEvent(WE_LOADDATA, _OnOrderListLoadDataFnc);
	m_wndOrderList.SetEvent(WE_DBLCLICK, _OnOrderListDblClickFnc);
	
	m_wndAssignedList.SetEvent(WE_SELCHANGE, _OnAssignedListSelectChangeFnc);
	m_wndAssignedList.SetEvent(WE_LOADDATA, _OnAssignedListLoadDataFnc);
	m_wndAssignedList.SetEvent(WE_DBLCLICK, _OnAssignedListDblClickFnc);
	
	m_wndAssignedList.AddEvent(1, _T("Delete"), _OnAssignedListDeleteItemFnc);

	
	

	m_wndAddMaterial.SetEvent(WE_CLICK, _OnAddMaterialSelectFnc);

	CGuiNumberCtrl *pCtrl = NULL;
	CGuiComboBox *pCtrlBox = NULL;
	CString tmpStr;
	//Combo Duty Doctor
/*
	pCtrlBox = (CGuiComboBox*) m_wndOrderList.GetEditControl(1);
	if (pCtrlBox)
	{
		pCtrlBox->InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
		pCtrlBox->InsertColumn(1, _T("Room Name"), CFMT_TEXT|CFMT_LEFT, 350);
		pCtrlBox->InsertColumn(2, _T("Dept"), CFMT_TEXT, 70);
		//Set event
		pCtrlBox->SetEvent(WE_LOADDATA, _OnInformationRoomListLoadDataFnc);
		pCtrlBox->SetEvent(WE_SELENDOK, _OnInformationRoomListSelendokFnc);
	}
*/
	
	m_wndTab.SetEvent(WE_SELCHANGE, _OnTabSelectChangeFnc);
	m_wndUpdate.SetEvent(WE_CLICK, _OnUpdateSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndInputForm.SetEvent(WE_CLICK, _OnInputFormSelectFnc);
	m_wndCapture.SetEvent(WE_CLICK, _OnCaptureSelectFnc);
	
	m_wndInformationRoomList.SetEvent(WE_SELCHANGE, _OnInformationRoomListSelectChangeFnc);
	m_wndInformationRoomList.SetEvent(WE_LOADDATA, _OnInformationRoomListLoadDataFnc);
	m_wndInformationRoomList.SetEvent(WE_DBLCLICK, _OnInformationRoomListDblClickFnc);
//	m_wndInformationRoomList.AddEvent(1, _T("Delete"), _OnInformationRoomListDeleteItemFnc, 0, VK_DELETE, 0);
	//m_wndAddMaterial.SetEvent(WE_CLICK, _OnAddMaterialSelectFnc);


	//AddLayoutControl(&m_wndPatientProfile, WS_RESIZEX|WS_RESIZEY, 100, 50, 100, 120);
	//AddLayoutControl(&m_wndTab, WS_RESIZEX|WS_RESIZEY, 100, 100, 100, 100);
	//AddLayoutControl(&m_wndView, WS_RESIZEX|WS_RESIZEY, 100, 100, 100, 100);	
	//AddLayoutControl(&m_wndOrderList, WS_REPOSY|WS_RESIZEY, 100, 0, 100, 50);
	//AddLayoutControl(&m_wndImage, WS_REPOSY|WS_RESIZEY, 100, 50, 100, 50);
	//AddLayoutControl(&m_wndUpdate, WS_REPOSY, 100, 100, 100, 100);
	//AddLayoutControl(&m_wndSave, WS_REPOSY, 100, 100, 100, 100);
	//AddLayoutControl(&m_wndCancel, WS_REPOSY, 100, 100, 100, 100);
	//AddLayoutControl(&m_wndPrint, WS_REPOSY, 100, 100, 100, 100);
	//AddLayoutControl(&m_wndInputForm, WS_REPOSY, 100, 100, 100, 100);
	//AddLayoutControl(&m_wndCapture, WS_REPOSY, 100, 100, 100, 100);
	//m_wndTab.SetAutoColumnSize(true);

/*
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddPACSPatientProfileFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditPACSPatientProfileFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeletePACSPatientProfileFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSavePACSPatientProfileFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelPACSPatientProfileFnc, 0, 'T', VK_CONTROL);
*/
	

	SetWindowFont(&m_wndDocumentNo, GetFaceName(), GetFaceSize()+2, TRUE);
	m_wndDocumentNo.SetTextColor(RGB(255, 0, 0));
	SetWindowFont(&m_wndPatientName, GetFaceName(), GetFaceSize()+2, TRUE);
	m_wndPatientName.SetTextColor(RGB(0, 0, 255));
	SetWindowFont(&m_wndInformationRoomList, GetFaceName(), GetFaceSize()+2, TRUE);


	SetWindowFont(&m_wndPerformRoom, GetFaceName(), GetFaceSize()+2, TRUE);
	m_wndPerformRoom.SetTextColor(RGB(0, 0, 255));

	SetMode(VM_NONE);
}
void CPACSPatientProfile::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndDocumentNo.GetDlgCtrlID(), m_nDocumentNo);
	DDX_Text(pDX, m_wndBarcode.GetDlgCtrlID(), m_nBarcode);
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);
	DDX_Text(pDX, m_wndAge.GetDlgCtrlID(), m_szAge);
	DDX_TextEx(pDX, m_wndSex.GetDlgCtrlID(), m_szSexKey);
	DDX_Text(pDX, m_wndAddress.GetDlgCtrlID(), m_szAddress);
	DDX_Text(pDX, m_wndDiagnostic.GetDlgCtrlID(), m_szDiagnostic);
	DDX_TextEx(pDX, m_wndOrderDate.GetDlgCtrlID(), m_szOrderDate);
	DDX_TextEx(pDX, m_wndDoctor.GetDlgCtrlID(), m_szDoctorKey);
	DDX_Text(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_Text(pDX, m_wndRoom.GetDlgCtrlID(), m_szRoomKey);
	DDX_TextEx(pDX, m_wndObject.GetDlgCtrlID(), m_szObjectKey);
	//DDX_Check(pDX, m_wndEmergency.GetDlgCtrlID(), m_bEmergency);
	DDX_Text(pDX, m_wndPerformRoom.GetDlgCtrlID(), m_szPerformRoomKey);

}
void CPACSPatientProfile::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();

	if(m_nOrderID > 0)
		szWhere.Format(_T(" and hpc_orderid=%ld"), m_nOrderID);

	szSQL.Format(_T(" SELECT 	hpc_groupid as groupid, hpc_orderid as orderid,") \
		_T(" 	hd_patientno as patientno,") \
		_T(" 	hd_docno as docno,") \
		_T(" 	trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
		_T(" 	hms_getage(trunc(hd_admitdate), hp_birthdate) as age,") \
		_T(" 	TO_CHAR(hp_birthdate,'YYYYMMDD') as birthdate,") \
		_T(" 	hp_sex as sex,") \
		_T(" 	hd_object as objectid,") \
		_T(" 	hms_getaddress(hp_provid,hp_distid,hp_villid) as address,") \
		_T(" 	hd_diagnostic as diagnostic,") \
		_T(" 	trunc(hpc_orderdate) as orderdate,") \
		_T(" 	hpc_doctor as doctor,") \
		_T(" 	hpc_deptid as deptid,") \
		_T(" 	hpc_roomid as roomid,") \
		_T(" 	trunc(hpc_performdate) as performdate,") \
		_T(" 	hpc_practitioner as perfromby, ") \
		_T(" 	hpc_instid as instid, ") \
		_T(" 	hpc_class as depttype, ") \
		_T(" 	hpc_status as status, ") \
		_T(" 	hpc_emergency as emergency, hd_isinpatient  ") \
		_T(" FROM hms_patient") \
		_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
		_T(" LEFT JOIN hms_pacsorder ON(hpc_docno=hd_docno)") \
		_T(" WHERE hpc_docno=%ld %s "), m_nDocumentNo, szWhere);


//_fmsg(_T("%s"), szSQL);
	rs.ExecSQL(szSQL);
	if(rs.IsEOF()){	
		return;
	}
	SetDefaultValues();

	if(!rs.IsEOF())
	{
		rs.GetValue(_T("docno"), m_nDocumentNo);
		rs.GetValue(_T("groupid"), m_szGroup);		
		
		pMF->m_nDocumentNo = m_nDocumentNo;
		rs.GetValue(_T("patientno"), pMF->m_nPatientNo);
		pMF->m_nRefIndex= m_nOrderID;

		rs.GetValue(_T("instid"), m_nBarcode);
		rs.GetValue(_T("objectid"), m_szObjectKey);
		rs.GetValue(_T("pname"), m_szPatientName);
		rs.GetValue(_T("age"), m_szAge);
		rs.GetValue(_T("birthdate"), m_szBirthDate);
		rs.GetValue(_T("sex"), m_szSexKey);
		rs.GetValue(_T("address"), m_szAddress);
		rs.GetValue(_T("diagnostic"), m_szDiagnostic);
		rs.GetValue(_T("doctor"), m_szDoctorKey);
		rs.GetValue(_T("orderdate"), m_szOrderDate);
		pMF->m_szOrderDate = m_szOrderDate;
		rs.GetValue(_T("deptid"), m_szDepartmentKey);

		rs.GetValue(_T("roomid"), m_szRoomKey);
		rs.GetValue(_T("performdate"), m_szPerformDate);
		rs.GetValue(_T("PerformedBy"), m_szPerformedBy);
		rs.GetValue(_T("emergency"), m_bEmergency);
		rs.GetValue(_T("status"), m_szStatus);
		rs.GetValue(_T("depttype"), m_szDepartmentType);
		pMF->m_szID = ToString(m_nDocumentNo);
		
		CString tmpStr;
		rs.GetValue(_T("hd_isinpatient"), tmpStr);
		if(tmpStr == _T("Y"))
			m_bInpatient = true;
		else
			m_bInpatient = false;
		
		SetMode(VM_VIEW);		

		pMF->m_szObject = m_szObjectKey;		
		OnOrderListLoadData();
		OnAssignedListLoadData();
	}
	else
	{
		SetMode(VM_NONE);
		//m_wndOrderList.DeleteAllItems();
	}

	

}
void CPACSPatientProfile::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_PACS_patientTbl.SetValue(_T("pacsp_createdby"), pMF->GetCurrentUser());
	m_PACS_patientTbl.SetValue(_T("pacsp_createddate"), pMF->GetSysDateTime());
	m_PACS_patientTbl.SetValue(_T("pacsp_updatedby"), pMF->GetCurrentUser());
	m_PACS_patientTbl.SetValue(_T("pacsp_updateddate"), pMF->GetSysDateTime());
	m_PACS_patientTbl.SetValue(_T("pacsp_docno"), m_nDocumentNo);
	m_PACS_patientTbl.SetValue(_T("pacsp_object"), m_szObjectKey);
	m_PACS_patientTbl.SetValue(_T("pacsp_emergcy"), m_bEmergency);
	m_PACS_patientTbl.SetValue(_T("pacsp_pname"), m_szPatientName);
	m_PACS_patientTbl.SetValue(_T("pacsp_age"), m_szAge);
	m_PACS_patientTbl.SetValue(_T("pacsp_sex"), m_szSexKey);
	m_PACS_patientTbl.SetValue(_T("pacsp_address"), m_szAddress);
	m_PACS_patientTbl.SetValue(_T("pacsp_diagnostic"), m_szDiagnostic);
	m_PACS_patientTbl.SetValue(_T("pacsp_doctorid"), m_szDoctorKey);
	m_PACS_patientTbl.SetValue(_T("pacsp_orderdate"), m_szOrderDate);
	m_PACS_patientTbl.SetValue(_T("pacsp_orderdept"), m_szDepartmentKey);
	m_PACS_patientTbl.SetValue(_T("pacsp_orderroom"), m_szRoomKey);
	m_PACS_patientTbl.SetValue(_T("pacsp_performdate"), m_szPerformDate);
	m_PACS_patientTbl.SetValue(_T("pacsp_performerid"), m_szPerformedBy);

}
void CPACSPatientProfile::SetDefaultValues(){

	m_nDocumentNo=0;
	m_nBarcode = 0;
	m_szPatientName.Empty();
	m_szAge.Empty();
	m_szSexKey.Empty();
	m_szAddress.Empty();
	m_szDiagnostic.Empty();
	m_szOrderDate.Empty();
	m_szDoctorKey.Empty();
	m_szDepartmentKey.Empty();
	m_szRoomKey.Empty();
	m_szObjectKey.Empty();
	m_bEmergency=FALSE;
	m_bInpatient = false;
	m_szPerformRoomKey.Empty();
	m_szDeptSelected.Empty();
	m_szRoomSelected.Empty();
	m_szOrderLineMaped.Empty();

}
int CPACSPatientProfile::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiView::SetMode(nMode); 
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
  		switch(nMode){ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 3, 4, -1); 
			m_wndDocumentNo.EnableWindow(false);
			m_wndBarcode.EnableWindow(false);
			//m_wndPatientName.SetFocus();
			SetDefaultValues();  			
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 3, 4, -1); 
			m_wndDocumentNo.EnableWindow(false);
			m_wndBarcode.EnableWindow(false);
			//m_wndPatientName.SetFocus();
 			break; 
 		case VM_VIEW: 
 			EnableControls(FALSE); 
 			EnableButtons(FALSE, 3, 4, -1); 
			m_wndDocumentNo.EnableWindow(true);
			//m_wndBarcode.EnableWindow(true);

 			break; 
 		case VM_NONE: 
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 0, 6, 5, -1);
			m_wndDocumentNo.EnableWindow(true);
			//m_wndBarcode.EnableWindow(true);
 			SetDefaultValues(); 
 			break; 
 		}; 
				
		//m_wndPerformRoom.EnableWindow(false);
		
		//m_wndAddMaterial.EnableWindow(TRUE);
		UpdateData(FALSE); 
 		return nOldMode; 
}
/*void CPACSPatientProfile::OnDocumentNoChange(){
	
} */
void CPACSPatientProfile::OnDocumentNoSetfocus(){
	m_wndDocumentNo.SetSel(0, m_wndDocumentNo.GetWindowTextLength());
}
/*void CPACSPatientProfile::OnDocumentNoKillfocus(){
	
} */
int CPACSPatientProfile::OnDocumentNoCheckValue(){
	UpdateData(TRUE);
	m_nOrderID = 0;
	if(IsRequestApply())
	{
		ShowMessageBox(_T("\x110\x61ng t\x1ED3n t\x1EA1i phi\x1EBFu \x111\x1B0\x1EE3\x63 \x63h\x1ECDn nh\x1B0ng \x63h\x1B0\x61 \xE1p \x64\x1EE5ng. Y\xEAu \x63\x1EA7u \xE1p \x64\x1EE5ng ho\x1EB7\x63 h\x1EE7y phi\x1EBFu"));
		return -1;
	}
	GetDataToScreen();	
	return 0;
} 
/*void CPACSPatientProfile::OnBarcodeChange(){
	
} */
/*void CPACSPatientProfile::OnBarcodeSetfocus(){
	
} */
/*void CPACSPatientProfile::OnBarcodeKillfocus(){
	
} */
int CPACSPatientProfile::OnBarcodeCheckValue(){
	UpdateData(TRUE);
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;

	/*if (m_szDepartmentType.Trim().IsEmpty())
	{
		return -1;
	}

	szSQL.Format(_T("SELECT count(*) FROM hms_pacsorder WHERE hpc_sid=%ld AND trunc(hpc_performdate)=trunc(current_date) "), m_nBarcode);
		rs.ExecSQL(szSQL);
		if(rs.GetIntValue() > 0)
		{
			m_wndBarcode.SetToolTipMessage(_T("This code is using by other patient."));
			return -1;
		}

		szSQL.Format(_T("UPDATE hms_pacsorder SET hpc_sid=%ld WHERE hpc_orderid=%ld AND hpc_status='S' "), m_nBarcode, m_nOrderID);
		pMF->ExecSQL(szSQL);
		szSQL.Format(_T("UPDATE hms_pacsorder SET hpc_sid=%ld WHERE hpc_docno=%ld AND hpc_status='S' AND hpc_sid<=0 "), m_nBarcode, m_nBarcode, m_nDocumentNo);
		pMF->ExecSQL(szSQL);*/
	return 0;
} 
/*void CPACSPatientProfile::OnPatientNameChange(){
	
} */
/*void CPACSPatientProfile::OnPatientNameSetfocus(){
	
} */
/*void CPACSPatientProfile::OnPatientNameKillfocus(){
	
} */
int CPACSPatientProfile::OnPatientNameCheckValue(){
	return 0;
} 
/*void CPACSPatientProfile::OnAgeChange(){
	
} */
/*void CPACSPatientProfile::OnAgeSetfocus(){
	
} */
/*void CPACSPatientProfile::OnAgeKillfocus(){
	
} */
int CPACSPatientProfile::OnAgeCheckValue(){
	return 0;
} 
void CPACSPatientProfile::OnSexSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPACSPatientProfile::OnSexSelendok(){
	 
}
/*void CPACSPatientProfile::OnSexSetfocus(){
	
}*/
/*void CPACSPatientProfile::OnSexKillfocus(){
	
}*/
long CPACSPatientProfile::OnSexLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndSex.IsSearchKey() && !m_szSexKey.IsEmpty()){
		szWhere.Format(_T(" AND ss_code='%s' "), m_szSexKey);
	};
	m_wndSex.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel where ss_id='sys_sex' %s ORDER BY ss_code"), szWhere);	
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndSex.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CPACSPatientProfile::OnSexAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CPACSPatientProfile::OnAddressChange(){
	
} */
/*void CPACSPatientProfile::OnAddressSetfocus(){
	
} */
/*void CPACSPatientProfile::OnAddressKillfocus(){
	
} */
int CPACSPatientProfile::OnAddressCheckValue(){
	return 0;
} 
/*void CPACSPatientProfile::OnDiagnosticChange(){
	
} */
/*void CPACSPatientProfile::OnDiagnosticSetfocus(){
	
} */
/*void CPACSPatientProfile::OnDiagnosticKillfocus(){
	
} */
int CPACSPatientProfile::OnDiagnosticCheckValue(){
	return 0;
} 
/*void CPACSPatientProfile::OnOrderDateChange(){
	
} */
/*void CPACSPatientProfile::OnOrderDateSetfocus(){
	
} */
/*void CPACSPatientProfile::OnOrderDateKillfocus(){
	
} */
int CPACSPatientProfile::OnOrderDateCheckValue(){
	return 0;
} 
void CPACSPatientProfile::OnDoctorSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPACSPatientProfile::OnDoctorSelendok(){
	 
}
/*void CPACSPatientProfile::OnDoctorSetfocus(){
	
}*/
/*void CPACSPatientProfile::OnDoctorKillfocus(){
	
}*/
long CPACSPatientProfile::OnDoctorLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDoctor.IsSearchKey() && !m_szDoctorKey.IsEmpty()){
		szWhere.Format(_T(" WHERE lower(su_userid)=lower('%s') "), m_szDoctorKey);
	}

	m_wndDoctor.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT su_userid as id, su_name as name FROM sys_user %s ORDER BY su_userid"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDoctor.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CPACSPatientProfile::OnDoctorAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CPACSPatientProfile::OnDepartmentChange(){
	
} */
/*void CPACSPatientProfile::OnDepartmentSetfocus(){
	
} */
/*void CPACSPatientProfile::OnDepartmentKillfocus(){
	
} */
int CPACSPatientProfile::OnDepartmentCheckValue(){
	return 0;
} 


void CPACSPatientProfile::OnDrugSelendok(){
	CGuiComboBox *pCtrlBox = (CGuiComboBox*) (GetFocus()->GetParent());
	CString tmpStr;
	tmpStr = pCtrlBox->GetCurrent(0);
	_debug(_T("%s"), tmpStr);
}

long CPACSPatientProfile::OnDrugLoadDta(){	
	return 0;
}


/*void CPACSPatientProfile::OnRoomChange(){
	
} */
/*void CPACSPatientProfile::OnRoomSetfocus(){
	
} */
/*void CPACSPatientProfile::OnRoomKillfocus(){
	
} */
int CPACSPatientProfile::OnRoomCheckValue(){
	return 0;
} 

void CPACSPatientProfile::OnPerformRoomSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPACSPatientProfile::OnPerformRoomSelendok(){
	 
}
/*void CPACSPatientProfile::OnPerformRoomSetfocus(){
	
}*/
/*void CPACSPatientProfile::OnPerformRoomKillfocus(){
	
}*/


long CPACSPatientProfile::OnPerformRoomLoadData(){
	
	return 0;

}
/*void CPACSPatientProfile::OnPerformRoomAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */


void CPACSPatientProfile::OnObjectSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPACSPatientProfile::OnObjectSelendok(){
	 
}
/*void CPACSPatientProfile::OnObjectSetfocus(){
	
}*/
/*void CPACSPatientProfile::OnObjectKillfocus(){
	
}*/
long CPACSPatientProfile::OnObjectLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndObject.IsSearchKey() && !m_szObjectKey.IsEmpty()){
		szWhere.Format(_T(" WHERE ho_id='%s' "), m_szObjectKey);
	};
	m_wndObject.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ho_id as id, ho_desc as name FROM hms_object %s ORDER BY ho_id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndObject.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), 
			NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CPACSPatientProfile::OnObjectAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CPACSPatientProfile::OnEmergencySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}



void CPACSPatientProfile::OnAddNewOrder(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	CString szOrderDept;
	CString szInPatient;

	CString szDept = pMF->m_szDept;

	szSQL.Format(_T("SELECT hd_isinpatient, hd_admitdept FROM hms_doc WHERE hd_docno=%ld"),
		m_nDocumentNo);
	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
		return;
	rs.GetValue(_T("hd_isinpatient"), szInPatient);
	rs.GetValue(_T("hd_admitdept"), szOrderDept);
	if(szInPatient == _T("Y"))
	{
		szSQL.Format(_T("SELECT hcr_dischargedept FROM hms_clinical_record WHERE hcr_docno=%ld"),
		m_nDocumentNo);
		rs.ExecSQL(szSQL);
		if(!rs.IsEOF()){
			rs.GetValue(_T("hcr_dischargedept"), szOrderDept);
		}
	}
	pMF->m_szDept = szOrderDept;
	pMF->m_szDept = szDept;
}


void CPACSPatientProfile::OnDeleteOrder(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL; 

	/*int nSel = m_wndOrderList.GetCurSel();
	if(nSel < 0) return;
	long nOrderID = str2long(m_wndOrderList.GetItemText(nSel, 0));
	CString szType = m_wndOrderList.GetItemText(nSel, 12);

	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return; 

	if(szType == _T("T"))
		szSQL.Format(_T("HMS_TESTORDER_DELETE(%ld,'%s') "), nOrderID, pMF->GetCurrentUser() ); 
	else
		szSQL.Format(_T("HMS_PACSORDER_DELETE(%ld,'%s') "), nOrderID, pMF->GetCurrentUser() ); 

 	int ret = str2int(pMF->ExecDML(szSQL));

 	if(ret >= 0){ 
 		OnOrderListLoadData();
		m_wndOrderList.SetCurSel(nSel);
 	}*/


}

void CPACSPatientProfile::OnOrderListDblClick()
{
	int nSel = m_wndOrderList.GetCurSel();
	if(nSel < 0) 
		return;
	UpdateData(TRUE);
	if(m_szPerformRoomKey.IsEmpty())
	{
		ShowMessageBox(_T("Y\xEAu \x63\x1EA7u \x63h\x1ECDn ph\xF2ng th\x1EF1\x63 hi\x1EC7n"));
		return;
	}

	m_szGroupID = m_wndOrderList.GetItemText(nSel, 3);
	if(m_szGroupSelected.Find(m_szGroupID) == -1)
	{
		ShowMessageBox(_T("Nh\xF3m \x63\x1EADn l\xE2m s\xE0ng \x63h\x1B0\x61 \x111\x1B0\x1EE3\x63 thi\x1EBFt l\x1EADp trong ph\xF2ng n\xE0y"));
		return;

	}

	long nOID = str2long(m_wndOrderList.GetItemText(nSel, 0));
	long nOrderLine = str2long(m_wndOrderList.GetItemText(nSel, 1));
	int ret = AddOrder(m_szDeptSelected, m_szRoomSelected, nOID, nOrderLine);
	if(ret > 0)
	{
		m_wndOrderList.DeleteItem(nSel);
		OnAssignedListLoadData();
	}
}
void CPACSPatientProfile::OnOrderListSelectChange(int nOldItem, int nNewItem)
{
	
} 
int CPACSPatientProfile::OnOrderListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CPACSPatientProfile::OnOrderListLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CRecord rs2(&pMF->m_db);
	CString szSQL, tmpStr, normindex, szWhere, szRoomID, szRoomName, szDeptID, szItemID;
	int nItem = 0, instid=0, nRoomID;
	m_wndOrderList.BeginLoad(); 
	m_wndOrderList.DeleteAllItems(); 
	int nCount = 0;
	CString szStatus;

	szWhere.AppendFormat(_T(" and hpc_groupid in(select sup_permid from sys_userperm where sup_userid='%s' ) "), pMF->GetCurrentUser());
	//szWhere.AppendFormat(_T(" and (substr(hpc_groupid, 1,2) in('B2','B3') or substr(hpc_groupid, 1, 3) IN('B1E','B1F')) "));


	szSQL.Format(_T(" SELECT hpc_groupid, hpc_orderid as orderid, trunc_date(hpc_orderdate) as orderdate, hpc_deptid as orderdept, hpc_status, hpc_createdby as createdby, ") \
			_T("	hpcl_itemid as itemid, hpcl_practitioner as practitioner, trunc_date(hpcl_date) as performeddate, ") \
			_T("	hpcl_orderlineid as orderlineid, ") \
			_T(" 	hfl_name as name, ") \
			_T(" 	hfl_unit as unit, ") \
			_T(" 	hfl_numimg as numimg , ") \
			_T("	hpcl_receptno as receptno, ") \
			_T("	hpcl_proomid, hpcl_perform_deptid, ") \
			_T("	hpcl_statusmap as statusline, ") \
			_T(" 	hpcl_result as formid ") \
			_T(" FROM hms_pacsorder") \
			_T(" LEFT JOIN hms_pacsorderline ON(hpc_orderid=hpcl_orderid)") \
			_T(" LEFT JOIN hms_fee_list ON(hfl_feeid=hpcl_itemid) ") \
			_T(" WHERE hpc_docno=%ld and hpc_status not in('O','T','C') and length(hpcl_itemid) > 0 %s ") \
			_T(" and hpcl_statusmap='O' ") \
			_T(" and hpcl_status not in('C','T') ") \
			_T(" ORDER BY hpc_groupid,hpc_orderid, hfl_line "), m_nDocumentNo, szWhere);
	//_fmsg(_T("%s"), szSQL);

		rs.ExecSQL(szSQL);
		nItem = 1;
		while(!rs.IsEOF())
		{		
			rs.GetValue(_T("hpc_status"), szStatus);
			rs.GetValue(_T("itemid"), szItemID);
			rs.GetValue(_T("hpcl_perform_deptid"), szDeptID);
			rs.GetValue(_T("hpcl_proomid"), nRoomID);			
			szRoomID.Format(_T("%d"), nRoomID);
			szRoomName = pMF->GetRoomName(szDeptID, nRoomID);
		
			int nItem = m_wndOrderList.AddItems(
					rs.GetValue(_T("orderid")),
					rs.GetValue(_T("orderlineid")),
					rs.GetValue(_T("name")),
					rs.GetValue(_T("hpc_groupid")),
					NULL);
			
			rs.MoveNext();
		}

	
	m_wndOrderList.EndLoad(); 
	
	m_wndOrderList.SetCurSel(0);
	return nCount;
}







void CPACSPatientProfile::OnAssignedListDblClick(){
	
}
void CPACSPatientProfile::OnAssignedListSelectChange(int nOldItem, int nNewItem)
{
	if(nNewItem < 0)
		return;
	long nOrderLine = str2long(m_wndAssignedList.GetItemText(nNewItem, 8));
	m_szOrderLineMaped.Format(_T("%ld"), nOrderLine);	
} 
int CPACSPatientProfile::OnAssignedListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	int nSel = m_wndAssignedList.GetCurSel();
	if(nSel < 0) 
	return 0;
	long nOID = str2long(m_wndAssignedList.GetItemText(nSel, 0));
	long nOrderLine = str2long(m_wndAssignedList.GetItemText(nSel, 8));
	int ret = RemoveOrder(nOID, nOrderLine);
	if(ret > 0)
	{
		m_wndAssignedList.DeleteItem(nSel);
		OnOrderListLoadData();
		OnAssignedListLoadData();
	}
	return 0;
} 
long CPACSPatientProfile::OnAssignedListLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CRecord rs2(&pMF->m_db);
	CString szSQL, tmpStr, normindex, szWhere, szRoomID, szRoomName, szDeptID, szItemID;
	int nItem = 0, instid=0, nRoomID;
	m_wndAssignedList.BeginLoad(); 
	m_wndAssignedList.DeleteAllItems(); 
	int nCount = 0;
	CString szStatus;

	szWhere.AppendFormat(_T(" and hpc_groupid in(select sup_permid from sys_userperm where sup_userid='%s' ) "), pMF->GetCurrentUser());
	//szWhere.AppendFormat(_T(" and (substr(hpc_groupid, 1,2) in('B2','B3') or substr(hpc_groupid, 1, 3) IN('B1E','B1F')) "));


	szSQL.Format(_T(" SELECT hpc_groupid, hpc_orderid as orderid, trunc_date(hpc_orderdate) as orderdate, hpc_deptid as orderdept, hpc_status, hpc_createdby as createdby, ") \
			_T("	hpcl_itemid as itemid, hpcl_practitioner as practitioner, trunc_date(hpcl_date) as performeddate, ") \
			_T("	hpcl_orderlineid as orderlineid, ") \
			_T(" 	hfl_name as name, ") \
			_T(" 	hfl_unit as unit, ") \
			_T(" 	hfl_numimg as ticket_qty , ") \
			_T("	hpcl_receptno as issueno, ") \
			_T("	hpcl_proomid, hpcl_perform_deptid, ") \
			_T("	hpcl_statusmap as statusline, ") \
			_T(" 	hpcl_result as formid ") \
			_T(" FROM hms_pacsorder") \
			_T(" LEFT JOIN hms_pacsorderline ON(hpc_orderid=hpcl_orderid)") \
			_T(" LEFT JOIN hms_fee_list ON(hfl_feeid=hpcl_itemid) ") \
			_T(" WHERE hpc_docno=%ld and hpc_status not in('O','T') and length(hpcl_itemid) > 0 %s ") \
			_T(" and hpcl_statusmap in('S','P') ") \
			_T(" ORDER BY hpc_groupid,hpc_orderid, hfl_line "), m_nDocumentNo, szWhere);
	

		rs.ExecSQL(szSQL);
		//_msg(_T("%s"), szSQL);
		nItem = 1;
		CString szIssueNo;
		while(!rs.IsEOF())
		{		
			rs.GetValue(_T("statusline"), szStatus);
			rs.GetValue(_T("itemid"), szItemID);
			rs.GetValue(_T("hpcl_perform_deptid"), szDeptID);
			rs.GetValue(_T("hpcl_proomid"), nRoomID);	
			rs.GetValue(_T("issueno"), szIssueNo);
			if(szIssueNo == _T("0") || szStatus == _T("S"))
			{
				szIssueNo.Empty();
			}


			szRoomID.Format(_T("%d"), nRoomID);
			szRoomName = pMF->GetRoomName(szDeptID, nRoomID);
		
			int nItem = m_wndAssignedList.AddItems(
					rs.GetValue(_T("orderid")),
					rs.GetValue(_T("name")),
					szRoomName,
					szIssueNo,
					rs.GetValue(_T("ticket_qty")),
					rs.GetValue(_T("statusline")),
					szDeptID,
					ToString(nRoomID),
					rs.GetValue(_T("orderlineid")),
					szItemID,
					NULL);
			

			if(szStatus == _T("S")){
				m_wndAssignedList.SetItemBkColor(nItem,  RGB(0, 128, 192));
				m_wndAssignedList.SetItemTextColor(nItem, RGB(255, 255, 255));
			}
			rs.MoveNext();
		}

	
	m_wndAssignedList.EndLoad(); 
	return nCount;
}




void CPACSPatientProfile::OnTabSelectChange(int nOld, int nNew){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UINT nShow=SW_SHOW;
	if(nNew == 0)
	{
		nShow = SW_SHOW;
		
	}
	if(nNew == 1)
	{
		nShow = SW_HIDE;
	}
	m_wndUpdate.ShowWindow(nShow);
	m_wndSave.ShowWindow(nShow);
	m_wndCancel.ShowWindow(nShow);
	m_wndPrint.ShowWindow(nShow);
	m_wndInputForm.ShowWindow(nShow);
	m_wndCapture.ShowWindow(nShow);

} 
void CPACSPatientProfile::OnUpdateSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL, szObjectType, szPayment, tmpStr;
	double nTotalAmount=0;
	//SetMode(VM_EDIT);
	
} 
void CPACSPatientProfile::OnSaveSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL, szItemID, szName, szDeptID, szStatusLine;
	
	long nOrderId, nOrderLine, nRoomId;
	
	pMF->BeginTransaction();

	int nCount  =0;
	m_szOrderLineMaped.Empty();
	for(int i =0; i < m_wndAssignedList.GetItemCount(); i++)
	{
		nOrderId = str2long(m_wndAssignedList.GetItemText(i, 0));
		nOrderLine = str2long(m_wndAssignedList.GetItemText(i, 8));
		szItemID = m_wndAssignedList.GetItemText(i, 9);
		szStatusLine = m_wndAssignedList.GetItemText(i, 5);
		szDeptID = m_wndAssignedList.GetItemText(i, 6);
		nRoomId = str2int(m_wndAssignedList.GetItemText(i, 7));
		if(szStatusLine == _T("S"))
		{
			szSQL.Format(_T("HMS_PACSMAP_ISSUENO(%ld, %ld, %ld, '%s', %d,'%s') "), 
				m_nDocumentNo, nOrderId, nOrderLine, szDeptID, nRoomId, szItemID);
_tprintf(_T("\r\n%s"), szSQL);
			int ret = str2int(pMF->ExecDML(szSQL));
			if(ret > 0)
			{
				nCount++;
				if(!m_szOrderLineMaped.IsEmpty())
					m_szOrderLineMaped.AppendFormat(_T(","));
				m_szOrderLineMaped.AppendFormat(_T("%ld"), nOrderLine);
			}
		}
	}
	
	pMF->Commit();

	if(nCount > 0)
	{
		OnAssignedListLoadData();
		OnInformationRoomListLoadData();
		OnPrintSelect();
		m_wndDocumentNo.SetFocus();
	}

	return;
	long nRoomID, nOrderID, nOrderlineID, nRecordCount =0;	
	m_arItems.RemoveAll();
/*
	for(int i = 0; i < m_wndOrderList.GetItemCount(); i++)
	{	
		nRoomID = ToInt(m_wndOrderList.GetItemText(i, 12));
		if(m_wndOrderList.GetCheck(i))
		{
			if(m_wndOrderList.GetItemText(i, 1).GetLength() > 0 && nRoomID > 0)
			{
				szItemID = m_wndOrderList.GetItemText(i, 8);
				nOrderID = ToLong(m_wndOrderList.GetItemText(i, 0));
				szName = m_wndOrderList.GetItemText(i, 2);
				nOrderlineID = ToLong(m_wndOrderList.GetItemText(i, 10));		
				nRoomID = ToInt(m_wndOrderList.GetItemText(i, 12));
				szDeptID = m_wndOrderList.GetItemText(i, 15);
				szSQL.Format(_T(" HMS_PCMSVIEW_UPDATE(%ld, %ld, %d, '%s', %d, '%s')"), m_nDocumentNo, nOrderID, nOrderlineID, szDeptID, ToString(nRoomID), szItemID);
				//_msg(_T("%s"), szSQL);
				int ret = str2int(pMF->ExecDML(szSQL));
				if(ret > 0)
				{
					nRecordCount ++;
				}
				else if(ret == -1)
				{
					m_arItems.Add(szName);
				}
				//Post to pacs worklist
				szPID.Format(_T("%ld"), m_nDocumentNo);
				PostPACSWorklist(szPID, m_szPatientName, m_szBirthDate, m_szSexKey, nOrderlineID, ToString(nRoomID), szName);

				
			}
		}
	}

	CString szMsg, tmpStr;
	if(m_arItems.GetCount() > 0){		
		for(int i = 0; i < m_arItems.GetCount(); i++){
			szMsg.AppendFormat(_T("\r\n%s"), m_arItems.GetAt(i));
		}
		tmpStr.Format(_T("\x43\xF3 [%\x64] m\x1EE5\x63 kh\xF4ng th\x1EF1\x63 hi\x1EC7n \x111\x1B0\x1EE3\x63. \x42\x1EC7nh nh\xE2n \x63h\x1B0\x61 \x111\xF3ng ph\xED.\r\n %s"), m_arItems.GetCount(), szMsg);
		ShowMessageBox(tmpStr, MB_OK|MB_ICONERROR);
	}
	_tprintf(_T("\r\nRecordCount:%d"), nRecordCount);
	if(nRecordCount > 0)
	{		

		OnOrderListLoadData();
		OnInformationRoomListLoadData();
		OnPrintSelect();
	}
*/
	m_wndDocumentNo.SetFocus();
} 
void CPACSPatientProfile::OnCancelSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
} 
void CPACSPatientProfile::OnPrintSelect()
{

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();	
	CReport rpt;
	CString szFile, szSQL;
	CString tmpStr, szItemID, szOrderlineID, szName, szDate, szRoomID;
	CString szReportName, szWhere, szTitleName;
	int nReceptNo;
	CRecord rs(&pMF->m_db);
	bool bFound = FALSE;
	m_arItems.RemoveAll();
	szReportName = _T("Reports\\HMS\\PACS_RECEPT.RPT");

	if(!rpt.Init(szReportName))
	{
		CString szMsg;
		szMsg.Format(_T("Cant not load file [%s] "), szReportName);
		ShowMessageBox(szMsg, MB_OK);
		return;
	}
	
	
	CReportSection* rptDetail = NULL;
/*
	for(int i=0; i < m_wndOrderList.GetItemCount(); i++){
		szItemID = m_wndOrderList.GetItemText(i, 10);			
		szRoomID = m_wndOrderList.GetItemText(i, 12);
		nReceptNo = ToInt(m_wndOrderList.GetItemText(i, 13));

        if(m_wndOrderList.GetCheck(i) && !szRoomID.IsEmpty() && nReceptNo > 0)
		{
			bFound = FALSE;
			for(int j=0; j< m_arItems.GetCount(); j++){
				if(m_arItems.GetAt(j) == szRoomID)
				{					
					_tprintf(_T("\r\nFound:%s, %s, %d"), m_arItems.GetAt(j), szRoomID, m_arItems.GetCount());
					bFound = TRUE;
					break;
				}				
			}

			m_arItems.Add(szRoomID);
			if(!bFound)
			{
				if(!szOrderlineID.IsEmpty())
					szOrderlineID += _T(",");
				
				szOrderlineID.AppendFormat(_T("%s"), szItemID);
			}			
		}	

	}
*/	
	
	if(m_szOrderLineMaped.IsEmpty())
		return ;
	
	szSQL.Format(_T(" SELECT DISTINCT hpcl_perform_deptid, upper(trim(hfg_name)) as groupname,") \
	_T("   HMS_GETROOMNAME(hpcl_perform_deptid, hpcl_proomid) as roomname,") \
	_T("   HMS_GETROOMNAME_ADD(hpcl_perform_deptid, hpcl_proomid) as roomnameadd,") \
	_T("   hpcl_proomid,") \
	_T("   hpcl_receptno") \
	_T(" FROM hms_pacsorderline") \
	_T(" LEFT JOIN hms_pacsorder ON (hpcl_docno = hpc_docno AND hpcl_orderid = hpc_orderid)") \
	_T(" LEFT JOIN hms_fee_group ON (hpc_groupid = hfg_id)") \
	_T(" WHERE hpcl_docno        = %ld") \
	_T(" AND hpcl_orderlineid   IN(%s) ") \
	_T(" ORDER BY hpcl_perform_deptid, hpcl_proomid, hpcl_receptno"), m_nDocumentNo,  m_szOrderLineMaped);

	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);

	while(!rs.IsEOF())
	{
		if(rptDetail){
			rptDetail->SetPageBreak();
		}

		rptDetail = rpt.AddDetail();		
		tmpStr.Empty();
		StringUpper(pMF->m_CompanyInfo.sc_pname, tmpStr);
		rptDetail->SetValue(_T("HealthService"), tmpStr);			
		StringUpper(pMF->m_CompanyInfo.sc_name, tmpStr);
		rptDetail->SetValue(_T("HOSPITALNAME"), tmpStr);
		
		rs.GetValue(_T("groupname"), szTitleName);
		tmpStr.Format(_T("PHIẾU %s"), szTitleName);		
		rptDetail->SetValue(_T("GroupName"), tmpStr);


		tmpStr.Format(_T("%ld"), m_nDocumentNo);
		rptDetail->SetValue(_T("DocumentNo"), tmpStr);
		rs.GetValue(_T("hpcl_proomid"), tmpStr);		
		rptDetail->SetValue(_T("RoomName"), rs.GetValue(_T("roomname")));
		rptDetail->SetValue(_T("Address"), rs.GetValue(_T("roomnameadd")));
		rs.GetValue(_T("hpcl_proomid"), tmpStr);
		rptDetail->SetValue(_T("RoomID"), tmpStr);
		rs.GetValue(_T("hpcl_receptno"), tmpStr);
		rptDetail->SetValue(_T("ReceptNo"), tmpStr);
		tmpStr = pMF->GetSysDateTime();
		szDate.Format(rptDetail->GetValue(_T("PrintDate")),tmpStr.Mid(11, 5), tmpStr.Mid(8, 2), tmpStr.Mid(5, 2), tmpStr.Left(4));
		rptDetail->SetValue(_T("PrintDate"), szDate);
		rs.MoveNext();
	}
	/*if (pMF->CheckPermission(_T("PACS.1.1")))
		{
			return;
		}*/
	rpt.Print(true);
	
	/*szSQL.Format(_T(" select count(*) from sys_sel") \
	_T(" where ss_id='hms_unprint_user'") \
	_T(" and ss_code='%s'"), pMF->GetCurrentUser());

	rs.ExecSQL(szSQL);
	_msg(_T("%s"), szSQL);
	if(rs.GetIntValue() >0)
	{
		return;
	}
	else
	{	*/
	//rpt.Print(true);
	//rpt.PrintPreview;
	//_msg(_T("%s"), szSQL);
	//}
	//rpt.PrintPreview();
	
} 


void CPACSPatientProfile::OnInputFormSelect(){
	
	
} 

void CPACSPatientProfile::OnChangeOrderTestSelect(){
	
}


void CPACSPatientProfile::OnAddMaterialSelect()
{
	return ;
	//CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//CRecord rs(&pMF->m_db);
	//CString szSQL, szDate, tmpStr, szItemID;

	//int nSel = m_wndOrderList.GetCurSel();
	//if(nSel < 0) return;

	//UpdateData(true);
	//
	////m_nRoomID = ToInt(m_szPerformRoomKey);

	//if(m_nRoomID <=0){
	//	ShowMessageBox(_T("Ph\x1EA3i \x63h\x1ECDn ph\xF2ng l\xE0m vi\x1EC7\x63"), MB_OK);
	//	m_wndPerformRoom.SetFocus();
	//	return;
	//}

	//m_nOrderID = str2long(m_wndOrderList.GetItemText(nSel, 0));
	//szItemID = m_wndOrderList.GetItemText(nSel, 8);
	//CHMSOperationMaterialDialog dlg(this, 390, 0);
	//dlg.SetAutoCenter(false);
	//
	//dlg.m_szOperationName = m_wndOrderList.GetItemText(nSel, 2);	

	//if(CompareDateTime(m_szPerformDate, pMF->GetSysDateTime()) > 0)
	//	szDate = m_szPerformDate;
	//else
	//	szDate = pMF->GetSysDateTime();

	//dlg.m_szOrderDate = szDate;
	//dlg.m_szFeeID = szItemID;
	//dlg.m_nRefIndex = m_nOrderID;
	//dlg.m_szCreatedBy = pMF->GetCurrentUser();
	//dlg.m_szOrderDept = pMF->m_szDept;
	//dlg.m_szType = _T("P");	
	//dlg.m_nRoomID = m_nRoomID;
	//dlg.m_szStorageKey = _T("140");
	//
	////dlg.SetMode(VM_NONE);
	//if(dlg.DoModal() == IDOK)
	//{

	//}
} 

void CPACSPatientProfile::OnCaptureSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szParam;
	CString szPath;	

	if(m_nOrderID <= 0 || m_szItemID.IsEmpty())
		return;

	pMF->SetActivePane(2);
}


void CPACSPatientProfile::OnInformationRoomListDblClick(){
	
} 
void CPACSPatientProfile::OnInformationRoomListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(nNewItem < 0)
		return;
	m_szPerformRoomKey = m_wndInformationRoomList.GetItemText(nNewItem, 1);
	m_szRoomSelected = m_wndInformationRoomList.GetItemText(nNewItem, 0);
	m_szDeptSelected = m_wndInformationRoomList.GetItemText(nNewItem, 4);
	m_szGroupSelected = m_wndInformationRoomList.GetItemText(nNewItem, 5);
	UpdateData(FALSE);

} 
int CPACSPatientProfile::OnInformationRoomListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CPACSPatientProfile::OnInformationRoomListLoadData(){

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szUsage, tmpStr, szStatus;
	long nOldOID=0, nNewOID;
	int nItem;
	double nTotalAmount = 0;
	int nCount = 0;

	m_wndInformationRoomList.BeginLoad(); 
	/*
	if(pMF->m_szDept == _T("TYC"))
	{
			szSQL.Format(_T(" SELECT hrl_id, hrl_name as name, sum(reg) as reg, sum(examed) as examed, sum(reg-examed) as remain") \
					_T(" FROM ") \
					_T(" ( ") \
					_T(" SELECT") \
					_T(" 	hpv_deptid,") \
					_T(" 	hpv_roomid,") \
					_T(" 	hpv_receptreg as reg,") \
					_T(" 	hpv_examed as examed") \
					_T(" FROM") \
					_T(" 	hms_pacsview") \
					_T(" WHERE trunc_date(hpv_examtime) = trunc_date(sysdate) ") \
					_T(" )  Tbl") \
					_T(" LEFT JOIN hms_roomlist ON(hrl_deptid=hpv_deptid AND hrl_id=hpv_roomid)") \
					_T(" WHERE hrl_id > 0 AND hrl_section='HA' and NVL(hrl_isreq,'N')='Y' ") \
					_T(" GROUP BY hpv_deptid, hpv_roomid, hrl_id, hrl_name") \
					_T(" ORDER BY hpv_deptid, hpv_roomid"), pMF->m_szDept );

	}
	else
	{

		szSQL.Format(_T(" SELECT hrl_id, hrl_name as name, sum(reg) as reg, sum(examed) as examed, sum(reg-examed) as remain") \
					_T(" FROM ") \
					_T(" ( ") \
					_T(" SELECT") \
					_T(" 	hpv_deptid,") \
					_T(" 	hpv_roomid,") \
					_T(" 	hpv_receptreg as reg,") \
					_T(" 	hpv_examed as examed") \
					_T(" FROM") \
					_T(" 	hms_pacsview") \
					_T(" WHERE trunc_date(hpv_examtime) = trunc_date(sysdate) ") \
					_T(" )  Tbl") \
					_T(" LEFT JOIN hms_roomlist ON(hrl_deptid=hpv_deptid AND hrl_id=hpv_roomid)") \
					_T(" WHERE hrl_id > 0 AND trim(hpv_deptid)='%s' ") \
					_T(" GROUP BY hpv_deptid, hpv_roomid, hrl_id, hrl_name") \
					_T(" ORDER BY hpv_deptid, hpv_roomid"), pMF->m_szDept );
	
	}

	*/

	szSQL.Format(_T(" SELECT hpc_deptid                 AS deptid,") \
_T("   hpc_roomid                      AS roomid,") \
_T("   '['||hpc_deptid||'] '||hrl_name                        AS room_name,") \
_T(" hpc_groups as groups, ") \
_T("   SUM(COALESCE(hpv_receptreg, 0)) AS reg,") \
_T("   SUM(COALESCE(hpv_examed, 0))    AS examed") \
_T(" FROM hms_pacsmap_config") \
_T(" LEFT JOIN hms_pacsview") \
_T(" ON(hpv_deptid  = hpc_deptid") \
_T(" AND hpv_roomid = hpc_roomid)") \
_T(" LEFT JOIN hms_roomlist") \
_T(" ON(hrl_deptid    = hpc_deptid") \
_T(" AND hrl_id       = hpc_roomid)") \
_T(" WHERE hpc_userid = '%s'") \
_T(" GROUP BY hpc_deptid,") \
_T("   hpc_roomid,") \
_T("   hrl_name, hpc_groups ") \
_T(" ORDER BY hpc_deptid,") \
_T("   hpc_roomid"), pMF->GetCurrentUser());

_fmsg(_T("%s"), szSQL);
	
	CString szIndex, szConLai;
	int nIndex = 0, nReg= 0, nExamed=0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){
		nReg += ToInt(rs.GetValue(_T("reg")));
		nExamed += ToInt(rs.GetValue(_T("examed")));
		m_wndInformationRoomList.AddItems(
					rs.GetValue(_T("roomid")), 
					rs.GetValue(_T("room_name")), 
					rs.GetValue(_T("reg")), 
					rs.GetValue(_T("examed")),
					rs.GetValue(_T("deptid")),
					rs.GetValue(_T("groups")),
					NULL);
		rs.MoveNext();
	}
	m_wndInformationRoomList.EndLoad(); 
	return 0;
}

int CPACSPatientProfile::OnAddPACSPatientProfile(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CPACSPatientProfile::OnEditPACSPatientProfile(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CPACSPatientProfile::OnDeletePACSPatientProfile(){
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
 		OnCancelPACSPatientProfile(); 
 	}
	return 0;
}
int CPACSPatientProfile::OnSavePACSPatientProfile(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		//szSQL = m_lims_orderTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE")); 
 		//szSQL = m_lims_orderTbl.GetUpdateSQL(_T("createdby,createddate")); 
 		szSQL += szWhere; 
 	} 
 _fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		//OnPACSPatientProfileListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
}
int CPACSPatientProfile::OnCancelPACSPatientProfile(){
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
int CPACSPatientProfile::OnPACSPatientProfileListLoadData(){
	return 0;
}


void CPACSPatientProfile::GetCurrentStatus()
{
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL;

	szSQL.Format(_T("SELECT hpcl_statusmap as status, hpc_groupid as groupid FROM hms_pacsorder LEFT JOIN hms_pacsorderline ON(hpcl_orderid=hpc_orderid) WHERE hpc_orderid=%ld and hpcl_itemid='%s'"), m_nOrderID, m_szItemID);

	rs.ExecSQL(szSQL);
	if(!rs.IsEOF()){
		rs.GetValue(_T("status"), m_szStatus);
		rs.GetValue(_T("groupid"), m_szGroup);
	}

	if(m_szStatus != _T("S") && m_szStatus != _T("T"))
	{
			m_wndUpdate.EnableWindow(false);
	}
}
BOOL CPACSPatientProfile::AddImage(CString szFileName)
{	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CString szFileNameAdd;
	if(pMF->m_szID.IsEmpty())
		return FALSE;		
	
	pMF->m_szFileName.Format(_T("%s.jpg"), pMF->m_szID);
	szFileNameAdd.Format(_T("%s\\Images\\%s"), pMF->szPath, pMF->m_szFileName);
	CopyFile(szFileName, szFileNameAdd, FALSE);	

	if(pMF->UploadFile(pMF->m_szFileName, szFileName))
	{			
		//m_wndImage.SaveFile(szFileNameAdd);		
		return TRUE;
	}

	return FALSE;
}
BOOL CPACSPatientProfile::RemoveImage(CString szFileName)
{	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	if(pMF->m_szID.IsEmpty())
		return FALSE;	
	
	pMF->m_szFileName.Format(_T("%s"),pMF->m_szID);
	pMF->UnlinkFile(pMF->m_szFileName);
	return TRUE;
}

BOOL CPACSPatientProfile::DownloadImage()
{	
	
	return FALSE;
}

BOOL CPACSPatientProfile::PreTranslateMessage(MSG* pMsg)
{	
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	return CGuiView::PreTranslateMessage(pMsg);
}
BEGIN_MESSAGE_MAP(CPACSPatientProfile, CGuiView)
	ON_WM_DESTROY()
END_MESSAGE_MAP()

void CPACSPatientProfile::OnDestroy()
{
	_socket->Close();
	AfxSocketTerm();
	delete _socket;
}
void CPACSPatientProfile::RefreshFormID(CString szFormID){
	int nSel = m_wndOrderList.GetCurSel();
	if(nSel < 0)
		return;
	m_wndOrderList.SetItemText(nSel, 5, szFormID);
}

BOOL CPACSPatientProfile::ImportImage(){
	CString szPath;
	GetFolder(szPath, _T("Directory"));
	
	return TRUE;
}

void CPACSPatientProfile::PreMakeDir(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szTemp, tmpStr;
	CString szPathName;
	szTemp.Format(_T("DATA\\PACS\\%ld\\%ld"), m_nDocumentNo, m_nOrderID);
	szPathName.Format(_T("%s"), pMF->GetCurrentDirectory());
	CStringToken tk(szTemp, _T("\\"));
	for (int i = 0; i < tk.GetSize(); i++)
	{
		tk.GetAt(i, tmpStr);
		szPathName.AppendFormat(_T("\\%s"), tmpStr);
		_tmkdir(szPathName);
	}
}

void CPACSPatientProfile::GetOrderInformation(long nOrderID, CString szItemID){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();
	m_szDescription.Empty();
	m_szPerformedBy.Empty();
	m_szStatusDesc.Empty();

	if(m_nOrderID <= 0)
	{
		UpdateData(FALSE);
		return;
	}

	szSQL.Format(_T(" SELECT hpcl_orderid,") \
_T("   hpcl_itemid,") \
_T("   hfl_name as description,") \
_T("   hpcl_statusmap as orderstatus,") \
_T("   hpcl_proomid as performed_roomid,") \
_T("   get_username(hpcl_practitioner) AS performedby") \
_T(" FROM hms_pacsorderline") \
_T(" LEFT JOIN hms_fee_list") \
_T(" ON hpcl_itemid    =hfl_feeid") \
_T(" WHERE hpcl_orderid=%ld ") \
_T(" AND hpcl_itemid   ='%s'"), nOrderID, szItemID);

	rs.ExecSQL(szSQL);
	if(rs.IsEOF()){	
		UpdateData(FALSE);
		return;
	}

	if(!rs.IsEOF())
	{
		rs.GetValue(_T("description"), m_szDescription);
		rs.GetValue(_T("orderstatus"), m_szStatusLine);
		//rs.GetValue(_T("performed_roomid"), m_szPerformRoomKey);
		rs.GetValue(_T("performedby"), m_szPerformedBy);
	}
	UpdateData(FALSE);	
}


void CPACSPatientProfile::LoadData(long nDocumentNo)
{
	m_wndOrderList.DeleteAllItems();
	m_nDocumentNo = nDocumentNo;
	m_nOrderID = 0;	
	GetDataToScreen();
	//OnOrderListLoadData();
}



bool CPACSPatientProfile::PostPACSWorklist(
	CString szPID, CString szPatientName, CString szBirthDate, CString szSex, long nOrderLine,
	CString szRoomName,
	CString szItemName)
{

	return true;
	if(m_szPacsHost.IsEmpty())
		return false;

	CString tmpStr;
	CString szFile, szPath;
	szPath.Format(_T("C:\\Program Files (x86)\\Google\\Chrome\\Application\\"));
	szFile.Format(_T("chrome.exe"));

	tmpStr.Format(_T("\"http://10.0.12.240:8080/jivexmobile/?user=qa&password=qa&mode=query&patientsID=2343YC6\""));
	ShellExecute(0, _T("open"), szFile, tmpStr, szPath, SW_SHOW);
_tprintf(_T("\r\n%s"), tmpStr);
	return true;


	AfxGetApp()->BeginWaitCursor();

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szMessage;
	CString szFirstName, szMidName, szLastName;

	UnMarkString(szPatientName, tmpStr.GetBufferSetLength(m_szPatientName.GetLength()));
	tmpStr.ReleaseBuffer();
	CString szName;
	UnMarkString(szItemName, szName.GetBufferSetLength(szItemName.GetLength()));
	szName.ReleaseBuffer();

	SplitName(tmpStr, szLastName, szMidName, szFirstName);
	szMessage.Format(_T("\vMSH|^~\\&|HL7WORKLIST|0|EXTERNAL||%s||EXT^X01||P|2.3|||AL|NE|VN||VN\rEXT|%s^%s^%s|%s|%s|%s||%ld|%s|%s|||||^"), 
		pMF->GetSysDateTime(), 
		szLastName, szMidName, szFirstName,
		szBirthDate,
		szSex,
		szPID,
		nOrderLine,
		szRoomName,
		szName);
	szMessage.AppendFormat(_T("%c\r"), 0x1C);
	
	char buf[4096];
	::WideCharToMultiByte(CP_ACP, 0, szMessage, szMessage.GetLength(), buf, 4096, '\0', 0);
printf("\r\n%s", buf);

	
	if(_socket->Create()==FALSE)
	{
		AfxMessageBox(_T("Failed to Create Socket"));
		return false;
	}

	CString szHost;
	int nPort;
	int nPos;
	
	nPos = m_szPacsHost.Find(_T(":"));
	if(nPos > 0)
	{
		szHost = m_szPacsHost.Mid(0, nPos);
		nPort = str2long(m_szPacsHost.Mid(nPos+1, m_szPacsHost.GetLength()));
	}
	else
	{
		szHost = m_szPacsHost;
		nPort = 3373;
	}
	_tprintf(_T("\r\nHost=%s: port=%d"), szHost, nPort);
	BOOL ret = _socket->Connect(szHost, (UINT)nPort);
		if(!ret)
		{
	_tprintf(_T("\r\nCannot connect to server"));
			return false;
		}
	

	int byte = _socket->Send(buf, strlen(buf));
	_tprintf(_T("\r\nSend byte: %d"), byte);
	char buff[2096];
	memset(buff, '\0', 2048);
	int nRead = _socket->Receive(buff, 2096);
	printf("\r\nACK: %d: %s\r\n", nRead, buff);
	Sleep(300);
	
	_socket->ShutDown(1);
	_socket->Close();
	AfxGetApp()->EndWaitCursor();

	Sleep(200);
	return true;
}

void CPACSPatientProfile::OnReceive(char * buffer, int len)
{
	printf("\r\nReceived: %s", buffer);
}

#include "HMSReceptMapDialog.h"

void CPACSPatientProfile::OnMapRoom()
{
	CHMSReceptMapDialog dlg(this);
	dlg.m_nDocumentNo = m_nDocumentNo;
	dlg.m_szGroupID = m_szGroupID;
	if(dlg.DoModal())
	{

	}
}

int  CPACSPatientProfile::AddOrder(CString szDept, CString szRoom, long nOrderID, long nOrderLine)
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL;
	szSQL.Format(_T("HMS_PACSMAP_CHECKPAYMENT(%ld, %ld, %ld) "), m_nDocumentNo, nOrderID, nOrderLine);
	int ret = str2int(pMF->ExecDML(szSQL));
	if(ret < 0)
	{
		ShowMessageBox(_T("\x42\x1EC7nh nh\xE2n \x63h\x1B0\x61 \x111\xF3ng ti\x1EC1n ho\x1EB7\x63 s\x1ED1 ti\x1EC1n t\x1EA1m g\x1EEDi kh\xF4ng \x111\x1EE7"));
		return -1;
	}

	szSQL.Format(_T("UPDATE hms_pacsorderline ") \
		_T(" SET hpcl_perform_deptid='%s', hpcl_proomid=%ld, hpcl_statusmap='S' ") \
		_T(" WHERE hpcl_orderid=%ld and hpcl_orderlineid=%ld and hpcl_status not in('C','T') "),
		szDept, str2int(szRoom), nOrderID, nOrderLine);
	ret = pMF->ExecSQL(szSQL);
	return ret;
}


int  CPACSPatientProfile::RemoveOrder(long nOrderID, long nOrderLine)
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL;

/*
	szSQL.Format(_T("UPDATE hms_pacsorderline ") \
		_T(" SET hpcl_perform_deptid='', hpcl_proomid=0, hpcl_statusmap='O' ") \
		_T(" WHERE hpcl_orderid=%ld and hpcl_orderlineid=%ld and hpcl_statusmap='S' "),
		nOrderID, nOrderLine);
*/
	szSQL.Format(_T("HMS_PACSMAP_UNSELECT(%ld, %ld,'%s') "), nOrderID, nOrderLine, pMF->GetCurrentUser());

	int ret = str2int(pMF->ExecDML(szSQL));
	//_msg(_T("%s"), szSQL);
	return ret;	

}

bool CPACSPatientProfile::IsRequestApply()
{
	CString szStatus;
	for (int i =0; i < m_wndAssignedList.GetItemCount(); i++)
	{
		szStatus = m_wndAssignedList.GetItemText(i, 5);
		if(szStatus == _T("S"))
		{
			return true;
		}

	}
	return false;
}