#ifndef HMSMAINFRAME_H
#define HMSMAINFRAME_H

#include "guimainframe.h"
#include "GuiComboBox.h"
#include "Dbmap.h"
#include "ReportDocument.h"
#include "GuiListCtrl.h"
#include <vector>
#include "Atm.h"
#include "GridListView.h"
#include "PipeService.h"




//Khi goi mot benh nhan vao cac bien nay se duoc gan gia tri trong class CHMSExamine
//va duoc dung chung cho tat ca cac class vi the ta moi khai bao bien toan cuc
//ma benh nhan
#define COLOR_SEND RGB(200, 200, 230)
#define	COLOR_TERMINATE RGB(0, 128, 128)
#define COLOR_ACCEPT	RGB(0, 128, 255)

#define WM_REFRESH	WM_USER+100


typedef struct tagHMSUSERINFO{
  CString	su_groupid;
  CString	su_name;
  CString	su_password;
  CString	su_deptid;
  int		su_roomid;
  CString	su_hms_xdept;
  CString	su_hms_xdepts;
  CString	su_hms_xroom;
  CString	su_hms_xroom2;
  CString	su_hms_xobject;
  CString	su_hms_rmmodule;
  CString	su_hms_emmodule;
  CString	su_hms_tmmodule;
  CString	su_hms_usmodule;
  CString	su_hms_pamodule;
  CString	su_hms_esmodule;
  CString	su_hms_hfmodule;
  CString	su_hms_pmmodule;
  CString	su_hms_opmodule;
  CString	su_hms_crmodule;
  CString	su_hms_mmmodule;
  CString	su_hms_mamodule;
  CString	su_hms_sysmodule;
  CString	su_hms_labmodule;
  CString	su_hms_wmmodule;
  CString	su_signature;
  CString	su_signatureid;
  CString	su_position;

} HMSUSERINFO;

typedef struct tagCOMPANYINFO{
	CString	sc_id;
	CString sc_name;
	CString	sc_pname;
	CString	sc_address;
	CString	sc_phone;
	CString	sc_website;
	CString sc_email;
	CString	sc_type;
	int		sc_provid;
	int		sc_distid;
	int		sc_hospital_route;
	
} COMPANYINFO;

typedef struct tagICD10INFO{
	CString szICD;
	CString szName;
	CString szLowerName;
} ICD10INFO;
typedef struct tagADDRESSINFO{
	CString szID;
	CString szName;
	CString szWrd;
	CString szLowerName;
} ADDRESSINFO;

typedef struct tagHOSPITALINFO{
	CString szID;
	CString szName;
	CString szLowerName;
} HOSPITALINFO;

typedef struct tagOPERATIONLIST{
	CString szID;
	CString szName;
	CString szLowerName;
	CString szServPrice;
	CString szInsPrice;
	CString szPolPrice;
	CString szReqPrice;
	CString szApplyDate;
	CString szHitech;
	CString szInsPaid;
	CString szPolPaid;
	CString szGroupType;
	CString szGroupName;
	CString szModality;
	CString szOptRef;
	CString szServPricePrev;
	CString szInsPricePrev;
	CString szPolPricePrev;
} OPERATIONLIST;

typedef struct tagFEEITEMS{
	CString	szGroupID;
	CString szID;
	CString szName;
	CString szUnit;
    CString szStatus;
    CString szFeeType;
    CString szDisrate;
    CString szPayrate;
	float	nQuantity;
	double	nPrice;
	double	nInsPrice;
	double  nCost;
    double	nInsCost;
	double  nInsPaid;
	double	nDiscount;
	double  nDiffPaid;
	double	nPatPaid;
	double	nPatDebt;
	double	nUnpaid;
	double	nCopayment;
	bool	bVisible;
    double nFreeAmount;
	tagFEEITEMS()
	{
		szGroupID.Empty();
		szID.Empty();
		szName.Empty();
		szUnit.Empty();
        szStatus.Empty();
        szFeeType.Empty();
		nQuantity=0;
		nPrice=0;
		nInsPrice=0;
		nCost=0;
        nInsCost = 0;
		nInsPaid=0;
		nDiscount=0;
		nDiffPaid=0;
		nPatPaid=0;
		nPatDebt=0;
		nUnpaid=0;
		nCopayment=0;
		szDisrate.Empty();
		szPayrate.Empty();
	}
}FEEITEMS;

typedef FEEITEMS FEEITEM;

#define FORMAT_DATE(szData, fmt, date) szData.Format(fmt,date.Mid(8,2),date.Mid(5,2),date.Left(4));


class CWebView2View;
extern UINT CMD_EMRVIEWER;

class AFX_EXT_CLASS CHMSMainFrame : public CGuiMainFrame
{
protected:
	BOOL m_bActivated;
	vector<ICD10INFO>	m_icd10;
	vector<ADDRESSINFO> m_address;
	vector<HOSPITALINFO> m_hospital;
	vector<OPERATIONLIST> m_optList;
	
	HANDLE m_hThread;
    HANDLE m_hPipeThread;

	//Table hms_patientTbl: Thong tin benh nhan
	CDbfMap	m_hms_patientTbl;
	//Table hms_doc: Thong tin ho so benh nhan
	CDbfMap	m_hms_docTbl;
	//Table hms_examdocTbl: Thong tin ho so kham benh cua benh nhan
	CDbfMap	m_hms_examdocTbl;
	//Bang luu thong tin the khi goi check tu cong BH
	CDbfMap	m_hms_cardInfoTbl;
	//Table hms_cardTbl: Thong tin the BHYT
	CDbfMap	m_hms_cardTbl;
	//Table hms_examTbl: Thong tin cac phieu kham
	CDbfMap	m_hms_examTbl;
	CDbfMap	m_hms_operationTbl;

	bool	m_bAllowLoadICD10;
	bool	m_bAllowLoadAddress;
	bool	m_bAllowLoadHospital;
	bool	m_bAllowLoadOperation;
	bool	m_bHasReplicationPostgreSQL;	
	bool	m_bHasPOS;
	
	CString	m_szCommPOS;

public:
	//Khai bao cac bien dung trong cong BH
	CString		m_szInsURL;
	CString		m_szInsUserID;
	CString		m_szInsPassword;
	CString		m_szInsTokenID;
	CString		m_szInsAccessToken;
	CString m_szAutoPrint;
	CString	m_szAutoPayment;
	CString	m_szInsRegDate;
	CString	m_szInsExpDate;
	CString	m_szAllowInputDate;
	CString	m_szSerialNo;
	CString	m_szRecvDate;
	CString	m_szPrintHemaReceipt;
	CString	m_szCurrentDir;
	bool	m_bIsAutoCheckCard;
	CString m_szInsuranceWebService;
	CString m_szIPWebSevice;
	CString m_szIpTPH;

	long	m_nRecvNo;
	int		m_nInsOffLinePayment;

	/// <summary>
	/// 
	/// </summary>

	BOOL		m_bSmartCard;
	ATM*		m_atm;
	

	CDb			m_pgDb;

	bool		m_bPrintSummarize;
	bool		m_bIsDoctor;

	COMPANYINFO	m_CompanyInfo;
	HMSUSERINFO	m_UserInfo;
	CString		m_szStoragePerm;
	CString		m_szInsuranceMethod2015;
	

//Ma benh nhan
	long	m_nPatientNo;
	//Ma ho so kham
	long	m_nDocumentNo;
//Ma khoa
	CString	m_szDept;
	CString	m_szStorages;
//Trang thai phieu kham
	CString	m_szStatus;
	CString	m_szExamStatus;
	CString	m_szDoctor;
//Ma phong kham
	int		m_nRoomID;
//Ma giuong
	int		m_nBedID;
//Ma tham chieu. Module kham benh: receptidx, Module noi tru: ma vao khoa
	int		m_nRefIndex;
//Dot dieu tri cua bac si
	long	m_nTreatIdx;
//So phieu kham
	int		m_nReceptNo;
//User lam viec tai tang nao
	int		m_nFloor;

//	Tham so hien thi Column phi (0: Phi chinh sach, phi yeu cau; 1: Phi chinh sach; 2: Phi yeu cau)
	int		m_nPriceColumnShow;
	int		m_nWidthPolPrice;
	int		m_nWidthRePrice ;
	int		m_nPrescriptionTotalAmount;
//Ma doi tuong benh nha
	CString	m_szObject; //1, 2, 3, 4, 5 , 6 ,7, 8, 9,...
//Loai doi tuong benh nhan
	CString m_szObjectType; //S:Dich vu, I,C: Bao hiem, D, P: chinh sach ...
//Ngay kham, ngay vao khoa dieu tri
	CString	m_szAdmitDate;
	CString	m_szEntryDate;
	CString m_szDischargeDate;
	CString	m_szDiagnostic;
//Tham so kiem tra thu phi kham, phi CLS (BN dich vu phong kham). Thi moi duoc nhap ket qua
	CString m_szFreePaymentCostExam; 
// Ten file PACS hien thoi
	CString	m_szCurrentFileNamePACS;

	CString	m_szUserGroup;
	bool	m_bConfirm;
	bool   m_bSignature;

	//Tham so cho phep nhap so phieu (HTxxxx, TTxxxxx) bang tay hay tu dong.
	bool	m_bSheetReatOnly;

	HBITMAP m_hBitmap;

	CString	m_szInPatient;
	CString	m_szOutpatient;
	CString	m_szOutLine;
	CString	m_szEmergency;

	//Cho phep huy cac yeu cau khi da gui o phieu linh
	CString	m_szAllowCancelDailyOrder;
	//Cho phep huy cac yeu cau khi da gui o phieu linh thuoc tu truc
	CString	m_szAllowCancelCabinetOrder;
	//Cho phep huy cac yeu cau khi da gui o don thuoc
	CString	m_szAllowCancelPrescriptionOrder;
	CString	m_szViewTotalInsPaid;
	CString	m_szDrugOrderByName;
	CString	m_szReturnOrderPrintDetail;
	CString	m_szDiscountPrintReport;
	CString m_szUrlBank;
	//Kho mac dinh kke don thuoc
	CString DEFAULT_STORAGE_ID;
	//Kho hang du tru vat tu ky thuat cao
	CString		m_szPlannedWarehouseId;
	//Kho hang ky gui
	CString		m_szConsignationWarehouseId;

	int		m_nTreatTime;
	int		m_nCancerTime;
	bool	m_bIsReq;
	bool	m_bIsDocumentReadOnly;
	CString m_szPatientName;

	CString	m_szNotification;

	//Cac bien dung de dinh nghia khoa kham TYC, va khoa dieu tri PTTYC
	CStringArray	m_arTYC;
	CStringArray	m_arPTTYC;
	CString			m_szTYCDepts;
	CString			m_szPTTYCDepts;

	//Khu kham va dieu tri
	CString			m_szZone;
	// check neu la khoa loai TYC
	bool		IsTYC();
	// check neu la khoa loai PTTYC
	bool		IsPTTYC();

	CString m_szuse_viettin_bank_qr;
    CString m_viettin_bank_qr_address;

//DICOM CONFIG
	CString	m_szServerAddress;
	CString	m_szServerAETitle;
	CString	m_szClientAETitle;
	CString m_szServerAddressPACS;
	int		m_nServerPort;
	int		m_nClientPort;
	BOOL	m_bIVFSwitch;

//Merge from E10 dll
	CString			m_szCompanyName;
	CString			m_szDepartment;
	CString			m_szDefaultCurrency;
	CString			m_szDepartmentPerm;
	CString			m_szDeptID;
	CString			m_szOriginModuleID;
	bool			m_bMultipleCurrency;
	
	CGuiButton		m_wndSignPending;
	CWebView2View*	m_pWebView;
    PipeService*	m_pPipe;

	

	CHMSMainFrame(void);
	virtual ~CHMSMainFrame(void);
	//Kiem tra ho so dang dieu tri hay da ket thuc.
	virtual bool	IsActiveDocument();
	//Kiem tra benh nhan dieu tri noi tru
	virtual bool	IsInPatient();
	//Kiem tra benh nhan dieu tri ngoai tru
	virtual bool	IsOutPatient();
	

	virtual bool	IsPaymentFee(CString szType, long nIdx){ return true;};
	virtual CString	GetDocumentStatus();
	virtual int		CreateFees(CString szType);
	virtual void	OnInitializes();
	virtual void	OnInitData();
			void	PreInitData();
	CString			GetDepartmentID();
	CDbfMap* GetCardInfoTbl() { return &m_hms_cardInfoTbl; }

	CString	ToCurrency(long lValue);
	CString	ToCurrency(double dValue);
	CString	ToCurrency(LPCTSTR lpszValue);
	CString	GetParam(LPCTSTR lpszName);
	
	long	GetTotalDepositAmount(long nDocumentNo, CString szClass);
	//long	CheckDepositAmount(long nDocumentNo, CString szClass);
	long	CheckPrescriptionTotalAomunt(long nDocumentNo, long nOrderID);
	void	AddMenuItemReport(int nID, LPCTSTR szName, void (*_menuCmd)(CWnd *pWnd)=NULL);

	virtual int LoadProvillList(CGuiComboBox *pWnd, CString szKey, CString szFilter = _T(""));
	virtual int LoadDistrictList(CGuiComboBox *pWnd, CString szProvillID, CString szKey);
    virtual int LoadVillageList(CGuiComboBox *pWnd, CString szProvillID,CString szDistrictID, CString szKey, CString szFilter = _T(""));
	virtual int LoadAddressList(CGuiComboBox *pWnd, CString szKey, bool bNew=false);
	virtual int LoadSexList(CGuiComboBox *pWnd, CString szKey);
	virtual int LoadNationList(CGuiComboBox *pWnd, CString szKey);
	virtual int LoadOccupationList(CGuiComboBox *pWnd, CString szKey);
	virtual int LoadRankList(CGuiComboBox *pWnd, CString szKey);
	virtual int LoadPositionList(CGuiComboBox *pWnd, CString szKey);
	virtual int LoadObjectList(CGuiComboBox *pWnd, CString szKey);
	virtual int LoadPatientStateList(CGuiComboBox *pWnd, CString szKey);
	virtual int LoadExamtypeList(CGuiComboBox *pWnd, CString szKey, CString szFilter=_T(""));
	virtual int LoadExamRoomList(CGuiComboBox *pWnd, CString szKey);
	virtual int LoadDoctorList(CGuiComboBox* pWnd, CString szKey, CString szDept=_T(""), CString szFilter=_T(""));
	virtual int LoadDepartment(CGuiComboBox* pWnd, CString szDepartmentKey, CString szFilter=_T(""));
	virtual int LoadICD(CGuiComboBox* pWnd, CString szKey, CString szExcept=_T(""));
	virtual int LoadOperationList(CGuiComboBox* pWnd, CString szKey, CString szObjectType, CString szAdmitDate);
	virtual int LoadOperationListEx(CGuiComboBox* pWnd, CString szKey, CString szObjectType, CString szAdmitDate, CString szFilter =_T(""));
	virtual int LoadSelectionList(CGuiComboBox* pWnd,CString szSelectionID,  CString szKey, CString szFilter=_T(""));
	virtual int LoadHospitalList(CGuiComboBox* pWnd, CString szKey);
	int		LoadStockList(CWnd *pWnd, CString szKey, CString szFilter=_T(""));
	virtual int LoadProductItemList(CGuiComboBox *pWnd, CString szKey, CString szFilter=_T(""));
	int		LoadStorageList(CWnd* pWnd, CString szKey, CString szFilter=_T(""));
	int		LoadManufactureList(CWnd* pWnd, CString szKey, CString szFilter=_T(""));
	int		LoadTransactionTypeList(CWnd* pWnd, CString szKey, CString szFilter=_T(""));
	int		LoadUserList(CWnd* pWnd, CString szKey, CString szFilter=_T(""));
	int		LoadProductTypeList(CWnd* pWnd, CString szKey, CString szFilter=_T(""));
	int		LoadProductCategoryList(CWnd* pWnd, CString szKey, CString szFilter=_T(""));

	int		LoadCountryList(CWnd *pWnd, CString szKey, CString szFilter=_T(""));
	int		LoadUserListEx(CWnd* pWnd, CString szKey, CString szFilter=_T(""));
	int		LoadDrugIndication(CWnd* pWnd, CString szKey, CString szFilter=_T(""));

	CString	GetAgeString(CString szBirthDate);
	CString	GetSelectionString(CString szID, CString szCode);
	CString	GetProvinceString(CString szID);
	CString	GetDistrictString(CString szID);
	CString	GetVillageString(CString szID);
	CString	GetAddressString(CString szID);
	CString GetObjectType();
	CString	GetObjectString(CString szObjectID);
	CString	GetDoctorName(CString szDoctorID);
	CString	GetStatusString(CString szStatus, CString szTranslateString=_T(""));
	CString	GetCurrentDepartmentID();
	CString	GetCurrentDepartmentName();
	int		GetCurrentRoomID();
	CString	GetCurrentRoomName();
	CString	GetUserGroup();
	CString	GetDiagnostic(LPCTSTR lpszICD);
	CString	GetDepartmentName(LPCTSTR lpszDept);
	CString	GetStorageName(int nStockID);
	
	CString	GetRoomName(CString szDeptID, int nRoomID);
	CString GetBedName(CString szDeptID, int nRoomID, int nBedIdx);
	CString	GetHealthServiceName();
	CString	GetHospitalName();
	CString	GetHospitalID();


	int		GetObjectID();
	HBITMAP GetSignatureImage(LPCTSTR lpszUserID);
	HBITMAP GetPACSImage(LPCTSTR lpszNameFile);

	int		GetTreatTime();
	//Check neu la benh nhan trai tuyen.
	bool	IsOutLine();

	//In phieu du tru va phieu linh thuoc.
	void	PrintDeliveryOrder(long nOID);
	void	OnPrintDelivery(long nOID, LPCTSTR lpszDate, LPCTSTR lpszDoctor);


//Ham in cac phieu xet nghiem, xquan, sieu am, dien tim, dien nao ...
	void	PrintParaclinicalOrder(long nOrderID, CString szGroup,CString szItemID=_T(""), bool bPreview=false, bool bDirect=false);

	void	PrintTestOrderX(long nOrderID, bool bPreview=false, bool bDirect=false);
	void	PrintPACSOrderX(long nOrderID, CString szItemID = _T(""), bool bPreview=false, bool bDirect=false, bool bDownload=false);
	void	PrintTestResultX(long nOrderID, bool bPreview=false, bool bDirect=false);
	//Dùng 2 hàm này cho mục đích in rpt khám sức khỏe, in hàng loạt cho nhanh
	void	PrintTestOrderX2(long nOrderID, bool bPreview=false, bool bDirect=false);
	void	PrintPACSOrderX2(long nOrderID, CString szItemID = _T(""), bool bPreview=false, bool bDirect=false, bool bDownload=false);
	
	void	PrintTestResult_KSD(long nOrderID, CString szItemID = _T(""), bool bPreview=false, bool bDirect=false);
	void	PrintPACSResultX(long nOrderID, CString szItemID = _T(""), bool bPreview=false, bool bDirect=false, bool bDownload=false);
	
	void	PrintTestOrder(long nOrderID, bool bPreview=false, bool bDirect=false);
	void	PrintPACSOrder(long nOrderID, CString szItemID = _T(""), bool bPreview=false, bool bDirect=false);
	void	PrintPACSOrder(CReport* rpt, long nDocumentNo, int& nIndex);
	//Ham In don thuoc
	void	PrintPrescription(long nOrderID, bool bPreview=false, bool bDirect=false, int nNumberPage=1, bool bInPatient=false);
	void	PrintPrescriptionin(long nOrderID, bool bPreview=false, bool bDirect=false, int nNumberPage=1);
	//Hàm in phiếu công khai thuốc phòng khám
	void	PrintPrescription2(long nOrderID, bool bPreview=false, bool bDirect=false, int nNumberPage=1, bool bInPatient=false);
	//Ham in phieu phat thuoc
	void	PrintDrugDelivery(long nOrderID, bool bPreview=false, bool bDirect=false, int nNumberPage=1);
	void	PrintDrugDelivery_GNHT(long nOrderID, bool bPreview=false, bool bDirect=false, int nNumberPage=1);
	void	PrintDrugDelivery(CString szOrderID, bool bPreview=false, bool bDirect=false, int nNumberPage=1);
	void	PrintDrugDeliveryin(long nOrderID, bool bPreview=false, bool bDirect=false, int nNumberPage=1);
	void	PrintDrugDelivery_N(long nOrderID, bool bPreview=false, bool bDirect=false);

	// Ket noi ngan hang
	long	OnBankGenQRpay(long nOrderID, long nDocumentNo, CString szMID, CString szTID, CString szBillNumber, CString szDescription, CString szDeptID, CString szUserID, CString szType, long nAmount);
	void	PrintQRCodeSheet(long nDocumentNo, long nKey, CString szType);
	void	PrintDrugDelivery_B(long nOrderID, bool bPreview = false, bool bDirect = false, int nNumberPage = 1);
	void	PrintDrugDelivery_GNHT_B(long nOrderID, bool bPreview = false, bool bDirect = false, int nNumberPage = 1);
	//Hàm hủy hiệu lực qronline
	//int		OnDeleteQrCode(long nDocumentNo, long nInvoiceNo);
	int		OnDeleteQrCode(long nDocumentNo, long nInvoiceNo, long nKey = 0, CString sztype = _T(""));
	//Ham in phieu linh thuoc
	void	PrintDrugOrder(long nOID);
	//Ham in phieu kham benh vao vien
	void	PrintAdmissionSheet(long nDocumentNo);
	//Ham in phieu chuyen vien
	// nDocumentNo : So ho so, nRefIdx: So vao khoa
	void	PrintHospitalTransferSheet(long nDocumentNo, int nRefIdx);
	void	PrintHospitalTransferSheet_V2(long nDocumentNo, int nRefIdx);
	//Ham in phieu ra vien
	// nDocumentNo : So ho so, nRefIdx: So vao khoa
	void	PrintDischargeSheet(long nDocumentNo, int nRefIdx);
	void	PrintDischargeSheetOut(long nDocumentNo, int nRefIdx);
	void	PrintReturnDrugOrder(CString szSheetID);
	// In bang ke vat tu tieu hao cho benh nhan BHYT
	void	OnPrintMaterialDetail(int nDocumentNo);
	void	PrintDepartmentDeliveryOrder(LPCTSTR szID);

	void	OnPrintExaminationSheet(int nDocumentNo, bool bPrintPrescription=true, bool bPreview=true, bool bDirect=true, bool bRequest = false);
	void	OnPrintExaminationSheet2(int nDocumentNo, bool bPrintPrescription=true, bool bPreview=true, bool bDirect=true);
	HBITMAP	DownloadImage(long nDocumentNo, long nOrderID, CString szItemID,  int nWidth, int nHeight, int nColumn, int nRow);
	CString	DownloadDicomFile(long nDocumentNo, long nOrderID, CString szItemID);

	//int		SyncPatientInformation(long nDocumentNo);
	virtual void OnLoadSystemData(LPCTSTR lpszName, LPCTSTR lpszData);
	void OnReadNumberSpeaking(int nReceptNo, int nRoomID, bool flg);
	void ReadFileWAV(CString szFileName);
	
	virtual bool	CheckDepositAmount(long nDocument, CString szItem, float nQty, CString szIsMaterial=_T("N"), int nStorage_ID=0);
	void	LoadFeeList(CGuiListCtrl* pList, long nDocumentNo, long nInvoiceNo,
		double& nTotalCost, double&  nTotalInsCost, double& nTotalDiscount, 
		double& nTotalDiffCost, double& nTotalCopayment, double& nTotalPatPaid, 
		CString szFilter=_T(""), long nInsInvoice=0, bool bCancel=false, bool bInPackage=false);
	//
	void	LoadFeeList_v3(CGridListView* pList, long nDocumentNo, long nInvoiceNo,
		double& nTotalCost, double&  nTotalInsCost, double& nTotalDiscount, 
		double& nTotalDiffCost, double& nTotalCopayment, double& nTotalPatPaid, 
		CString szFilter=_T(""), long nInsInvoice=0, bool bCancel=false, bool bInPackage=false);

	void	LoadFeeListFromInvoices(CGuiListCtrl* pList, long nDocumentNo, CArray<long,long&>& arInvoices,
		double& nTotalCost, double&  nTotalInsCost, double& nTotalDiscount, 
		double& nTotalDiffCost, double& nTotalCopayment, double& nTotalPatPaid, 
		CString szFilter=_T(""), long nInsInvoice=0, bool bCancel=false, bool bInPackage=false);
	
	void	LoadFeeListFromInvoices_v3(CGridListView* pList, long nDocumentNo, CArray<long,long&>& arInvoices,
		double& nTotalCost, double&  nTotalInsCost, double& nTotalDiscount, 
		double& nTotalDiffCost, double& nTotalCopayment, double& nTotalPatPaid, 
		CString szFilter=_T(""), long nInsInvoice=0, bool bCancel=false, bool bInPackage=false);

	bool	HasPOS();
	CString	GetCommPOS();
	bool	IsReq();
	bool	IsDocumentReadOnly();
	CString	GetAdmitDate();
	int		LogRowChange(CString szSourceTable, CString szEvent, long nKeyValue, CString szUpdateSql, CString szUserId, CString szExceptCol);
	CString GetAllowedDrugLevel();
	void MakeColorbyRank(CGuiListCtrl* pList, long nDocNo, int nRow, int nColumn);

	virtual void OnSmartCardConnected(CString szCardId);
	virtual void OnSmartCardDisconnected();
	virtual void OnInitSmartCard();
	virtual void OnSmartCardConfig();
	virtual bool IsSmartCard();
	virtual CString GetCardId();
	CString	m_szCancer;
	bool	IsCancerPatient();
	bool	IsRequireUsage(CString szProductId);
	void	PrintGuideExam(long nContractId, long nDocumentNo);
	//Ham nay thay the ky tu ' sang ''
	CString EscapeQuote(CString szString);
	void String2Array(CString szData, CStringArray* strList, int nSize);
	// ham lay loai kcb : noi tru ngoai tru , hay kb
	int GetLoaiKCB(long nDocumentNo, int nTreattime =0);
	//Hàm luu các thông tin v? h? so b?nh án và m?u bi?u EMR
	bool SaveEMRData(CString szType, CString szName, long nDocNo, 
		CString szDeptId, long nRefIdx,int nRoomId,long nOptIdx,CString szData);
	//Ham lay du lieu benh anh trong hms_doc_emr
	bool GetEMRData(long nDocNo, int nTreatTime, CString szType, CString szName, CString szFilter, CString& szData);
	CString GetErrorMessage();

	void UpdateObject(long nPatientNo, long nDocNo, int nOldObject, CString szOldCardNo, int nNewObject, CString szNewCardNo);

	int		LoadContractList(CWnd* pWnd, CString szKey, CString szFilter=_T(""));
	int		LoadPartnerList(CWnd* pWnd, CString szKey, CString szFilter=_T(""), bool bLoadAll=false);
	int		LoadProductList(CWnd* pWnd, CString szKey, CString szFilter=_T(""));
	int		LoadResourceList(CWnd* pWnd, CString szKey, CString szFilter=_T(""));
	int		LoadTaxList(CWnd* pWnd, CString szKey, CString szFilter=_T(""));

	int		LoadBankList(CWnd* pWnd, CString szKey, CString szFilter=_T(""));
	int		LoadBankAccountList(CWnd* pWnd, CString szKey, CString szFilter=_T(""));
	int		LoadPartnerTypeList(CWnd* pWnd, CString szKey, CString szFilter=_T(""));
	int		LoadUomList(CWnd* pWnd, CString szKey, CString szFilter=_T(""));
	int		LoadPayOrderList(CWnd* pWnd, CString szKey, CString szFilter=_T(""));

	//Hàm download file từ server node
	//Cách gọi hàm:
	//	pMF->NetDownloadFile(_T("http://14.177.232.29:8000/api/download?filename=abc");
	// szUlr:		link gọi đến server node
	// szFileName:	Tên file lưu trong thư mục ./DATA của thư mục hiện tại
	bool	NetDownloadFile(CString szUrl, CString szFileName);

	//Hàm in file pdf
	//Cách gọi hàm:
	//	pMF->PrintPdf(_T("demo.pdf"));	//demo.pdf nằm trong thư mục Bin/Data của bộ chạy
	// szFile: Tên file lưu trên máy trạm. nếu tên file không truyền vào sẽ mặc định tại thư mục data/printer.pdf
	bool	PrintPdf(CString szFile);
	
	//Hàm Download và in file pdf
	//Cách gọi hàm:
	//	pMF->DownlaodAndPrintPdf(_T("abc&sohoso=22000111"), _T("demo.pdf"));	//demo.pdf nằm trong thư mục Bin/Data của bộ chạy
	// szFile: Tên file lưu trên máy trạm. nếu tên file không truyền vào sẽ mặc định tại thư mục data/printer.pdf
	bool	DownloadAndPrintPdf(CString szLink, CString szFile=_T("printer.pdf"));

	//Hàm Download và in file docx
	//Cách gọi hàm:
	//	pMF->DownlaodAndPrintDocx(_T("abc&sohoso=22000111"));
	// szFile: Tên file lưu trên máy trạm. nếu tên file không truyền vào sẽ mặc định tại thư mục data/printer.docx
	bool	DownloadAndPrintDocX(CString szLink, bool bPreview=false);
	bool	CheckCoreVersion();
	void	HideSplash();
	
	//Ten ham: LauchWeb (Goi ung ung dung tu web)
	//Tham so: 
	//	szLink: Cac tham so truyen vaof
	//	szContentType: Header Type
	//	szReponse: Chuoi du lieu tra ve
	//	szError: Chuoi loi tra ve
	//Cach goi:
	// CString szResponse, szError
	// //szLink = _T("pacsresult&docno=24000001&orderid=27676027&itemid=B320010389"),
	// LauchWeb(szLink, _T("Content-Type: application/json"), szResponse, szError);
	bool	LaunchWeb(CString szLink, CString szContentType = _T("Content-Type: application/pdf"), CString* szResponse=NULL, CString* szError=NULL);
	

	CString CreatDateTimesTypeJSon(CString szTimes);
	bool	GetFileMedical(long nDocno, CString szType, CString szArrayDocno = _T(""));

	
	bool	GetFileSignAndExecOpen(long nDocno, long nOrderID, CString szItemID = _T(""));
	bool	OnPostGenDocX(CReport* rpt, CString szID, long nDocumentNo, long nOrderID, CString szRPTName, CString szItemID, CString szArrOrder = _T(""), bool bPreview = true,  bool bDirect=false);
    bool	PostAndGenDocX(CString szID, long nDocumentNo,long nOrderID, CString szItemID, CString szSignatureID);
	bool	isValidPhoneNumber(const CString& input);
	bool	isValidIdCardNumber(const CString& input);
	bool	SaveCardInfo(CDbfMap* tbl);
	bool	CheckInsCardInfo(CString szCardNo, CString szName, CString szBirthDate, std::string& strResponse);
	int		ParseCard(CString szObject, CString szCardNo, CString& szRetCode, int& nInsDiscount, int& nGroupID);
	CString	GetAdmitDateTimes();
	bool	pCompareDateTimes(CString szDate1, CString szDate2);
	long	LoadNurseList(CGuiComboBox* pWnd, CString szKey, CString szDept = _T(""), CString szFilter = _T(""));
	CString	GetConfigValue(CString szConfig);
    

	virtual CString GetSignatureUnikey(CReportPrinter *pPrinter, CString szFormID, CString szSignID, long nDocmentNo, long nOrderId, CString szCode);
    CString GetSignID(CString szForm, CString szSignID, long nDocumentNo, long nOrderId, CString szCode);
    void OnPrintMTransaction(CString szOrderNo, long nTransactionID, bool bPrintGop, bool bPreview);
	void OnPrintReturnMTransaction(CString szOrderNo, long nTransactionID, bool bPrintGop, bool bPreview);
	long	OnBankGenQRpay_vtb(long nOrderID,long nDocumentNo,CString szMID, CString szTID, CString szBillNumber, CString szDescription, CString szDeptID, CString szUserID, CString szType, long nAmount);



	void	StartPipeService(LPCTSTR lpszNamed);
    void	ViewEMRSignature();
    void	ViewSignaturePending();

protected:
	virtual BOOL PreTranslateMessage(MSG* pMsg);

	virtual BOOL OnCommand(WPARAM wParam, LPARAM lParam);
	virtual BOOL OnWndMsg(UINT message, WPARAM wParam, LPARAM lParam, LRESULT* pResult);
	virtual BOOL OnCmdMsg(UINT nID, int nCode, void* pExtra, AFX_CMDHANDLERINFO* pHandlerInfo);
	afx_msg void OnUpdateUIState(UINT /*nAction*/, UINT /*nUIElement*/);
	afx_msg void OnInitMenu(CMenu* pMenu);
	afx_msg void OnDestroy();
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnTimer(UINT nIDEvent);

	DECLARE_MESSAGE_MAP()

public:
    afx_msg void OnSize(UINT nType, int cx, int cy);
};

#define Notice(sql){ _tprintf(_T("\r\n%s"), (LPCTSTR)  sql); _fmsg(_T("\r\n%s"), szSQL);}

AFX_EXT_CLASS  CString ToCurrency(CString src);
AFX_EXT_CLASS int GetEncoderClsid(const WCHAR* format, CLSID* pClsid);
AFX_EXT_CLASS void ResizeControl(CWnd* pSelf, CWnd* pCtrl, int nNewSize);




#endif
