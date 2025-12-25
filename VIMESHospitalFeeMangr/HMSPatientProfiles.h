#ifndef HMSPATIENTPROFILES_H
#define HMSPATIENTPROFILES_H

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Copyright(C) Viet Nam Medical Software Join Stock Company. 2005-2010. 			
//	All rights reserved. 
//	This program is protected by Viet nam and international treaties.  
//	Unauthorized reproduction or distribution of this program, 
//	or any portion of it, may result in severe civil and criminal penalties, 
//	and will be prosecuted to the maximum extent possible under the law.
//	This file is a part of the GUI(Graphical User Interface) class library.
//	(c) 2006-2008 Hay Hoang Van, All rights reserved.
//	CONTACT INFORMATION:
//	Email  : hayhv@vimes.com.vn or hayhv@yahoo.com
//	Website: http://www.vimes.com.vn
/////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Ban quyen cua Cong Ty Co Phan Phan Mem Y Te Viet Nam 2005-2010.
//	Do Cuc Ban Quyen, Bo VHTT nuoc Cong hoa xa hoi chu nghia Viet Nam cap.
//	Chuong trinh phan mem nay duoc Luat phap Viet Nam va quoc te bao ho.
//	San xuat, su dung hoac phan phoi trai phep toan bo hoac mot phan cua phan men nay se
//	chiu cac hinh phat va hinh su hoac dan su, co the len den muc toi da dung theo Luat qui dinh.
//	File nay la mot phan cua thu vien lap trinh(GUI). Ban quyen cua Hoang Van Hay. 2006-2008
//	THONG TIN LIEN HE:
//	Email  : hayhv@vimes.com.vn hoac hayhv@yahoo.com
//	Website: http://www.vimes.com.vn
//////////////////////////////////////////////////////////////////////////////////////////////////////////
#include "GuiUtils.h"
#include "GuiView.h"
#include "DbField.h"
class CHMSPatientProfiles : public CGuiView{
protected:
	long	m_nInvoiceNo;
	bool	m_bInpatient;
	bool	m_bRankNotice;
	bool	m_bMultiInvoice;
	bool	m_bDepositRefundFlag;
	bool	m_bAllowDischaregPayment;
	int		m_nTreattime;
	CString	m_szIsExtIns;
public:
	CGuiGroupBox	m_wndPatientInformation;
	CGuiGroupBox	m_wndPaymentReceiptInformation;
	CGuiGroupBox	m_wndTreatmentInformation;
	CGuiGroupBox	m_wndGeneralCostInformation;
	CGuiLabel		m_wndDocumentNoLabel;
	CGuiNumberCtrl	m_wndDocumentNo;
	CGuiLabel		m_wndPIDLabel;
	CGuiNumberCtrl	m_wndPID;
	CGuiLabel		m_wndPatientNameLabel;
	CGuiTextCtrl	m_wndPatientName;
	CGuiLabel		m_wndAgeLabel;
	CGuiTextCtrl	m_wndAge;
	CGuiLabel		m_wndSexLabel;
	CGuiTextCtrl	m_wndSex;
	CGuiLabel		m_wndAddressLabel;
	CGuiTextCtrl	m_wndAddress;
	CGuiLabel		m_wndWorkingPlaceLabel;
	CGuiTextCtrl	m_wndWorkingPlace;
	CGuiLabel		m_wndObjectLabel;
	CGuiTextCtrl	m_wndObject;
	CGuiLabel		m_wndCardNoLabel;
	CGuiTextCtrl	m_wndCardNo;
	CGuiTextCtrl	m_wndCardCode;
	CGuiTextCtrl	m_wndCardDiscount;
	CGuiLabel		m_wndRegistrationDateLabel;
	CGuiDateCtrl	m_wndRegistrationDate;
	CGuiLabel		m_wndExpiryDateLabel;
	CGuiDateCtrl	m_wndExpiryDate;
	CGuiLabel		m_wndRegistrationPlaceLabel;
	CGuiTextCtrl	m_wndRegistrationPlace;
	CGuiListCtrl	m_wndTreatmentList;
	CGuiListCtrl	m_wndRoomList;
	CGridListView	m_wndInvoiceList;
	CGridListView	m_wndList;
	CGuiButton		m_wndPayment;
	CGuiButton		m_wndApproval;
	CGuiButton		m_wndPrint;
	CGuiCheckBox	m_wndInPackage;
	CGuiLabel		m_wndMobileLabel;
	CGuiTextCtrl	m_wndMobile;
	CGuiTextCtrl	m_wndIDNumber;


	CGuiLabel		m_wndTotalCostLabel;
	CGuiNumberCtrl	m_wndTotalCost;

	CGuiLabel		m_wndTotalInsCostLabel;
	CGuiNumberCtrl	m_wndTotalInsCost;

	CGuiLabel		m_wndTotalInsPaidLabel;
	CGuiNumberCtrl	m_wndTotalInsPaid;

	CGuiLabel		m_wndTotalPatPaidLabel;
	CGuiNumberCtrl	m_wndTotalPatPaid;

	CGuiLabel		m_wndTotalDiffPaidLabel;
	CGuiNumberCtrl	m_wndTotalDiffPaid;

	CGuiLabel		m_wndTotalPayableLabel;
	CGuiNumberCtrl	m_wndTotalPayable;

	CGuiLabel		m_wndTotalDepositLabel;
	CGuiNumberCtrl	m_wndTotalDeposit;

	CGuiLabel		m_wndTotalPolicyLabel;
	CGuiNumberCtrl	m_wndTotalPolicy;

	CGuiLabel		m_wndSumABLabel;
	CGuiNumberCtrl	m_wndSumAB;

	CGuiLabel		m_wndTotalDiscountLabel;
	CGuiNumberCtrl	m_wndTotalDiscount;

	CGuiLabel		m_wndTotalPaymentLabel;
	CGuiNumberCtrl	m_wndTotalPayment;

	CGuiLabel		m_wndStatusLabel;
	CGuiTextCtrl	m_wndStatus;
	CGuiLabel		m_wndNoteLabel;
	CGuiTextCtrl	m_wndNote;
	CGuiButton		m_wndNoteButton;
	CGuiLabel		m_wndDesc;
	CGuiButton		m_wndInsApprove;
	CGuiButton		m_wndPrescriptionApprove;

	CGuiButton		m_wndElectronic;
	CGuiButton		m_wndPaymentVoucher;
	CGuiButton		m_wndReceiptVoucher;

	CGuiTabCtrl		m_wndTab;

	long	m_nDocumentNo;
	long	m_nPID;
	CString	m_szPatientName;
	CString	m_szAge;
	CString	m_szSex;
	CString	m_szAddress;
	CString	m_szWorkingPlace;
	CString	m_szObjectDesc;
	CString	m_szCardNo;
	CString	m_szCardCode;
	CString	m_szCardDiscount;
	CString	m_szRegistrationDate;
	CString	m_szExpiryDate;
	CString	m_szRegistrationPlace;
	CString	m_szEmergency;
	CString	m_szApproveStatus;
	CString m_szDocStatus;
	CString m_szObjectID;
	CString	m_szMobile;
	CString	m_szIDNumber;
	CString m_szOrgID;

	int		m_nInsRate;
	double	m_nTotalCost;
	double	m_nTotalInsCost;
	double	m_nTotalInsPaid;

	double	m_nTotalDiffPaid;
	double	m_nTotalPatPaid;

	double	m_nTotalPayable;
	

	double	m_nTotalDeposit;
	double	m_nTotalPolicy;

	double	m_nSumAB;
	double	m_nTotalDiscount;
	double	m_nTotalPayment;
	double	m_nEatAmount;
	double	m_nOtherPaid;

	bool	m_bInsTreatment;
	bool    m_bPrintAppExam;

	CString	m_szInvoiceStatus;

	CString	m_szNote;
	CString m_szInfertility;
	CString m_szHealthExam;
	BOOL	m_bInPackage;
	long    m_neorderid;
	CDbfMap	m_hms_electronicTbl;
	CString  m_szInvUserID, m_szInvPassword;
	int			OnAutoPostPayment(int nLimit);
	int			OnAutoPostRefund(int nLimit);
	int			OnAutoPostDrug(int nLimit);

	//void			OnDocumentNoChange(); 
	//void			OnDocumentNoSetfocus(); 
	//void			OnDocumentNoKillfocus(); 
	int			OnDocumentNoCheckValue(); 
	//void			OnPIDChange(); 
	//void			OnPIDSetfocus(); 
	//void			OnPIDKillfocus(); 
	int			OnPIDCheckValue(); 
	//void			OnPatientNameChange(); 
	//void			OnPatientNameSetfocus(); 
	//void			OnPatientNameKillfocus(); 
	int			OnPatientNameCheckValue(); 
	//void			OnAgeChange(); 
	//void			OnAgeSetfocus(); 
	//void			OnAgeKillfocus(); 
	int			OnAgeCheckValue(); 
	//void			OnSexChange(); 
	//void			OnSexSetfocus(); 
	//void			OnSexKillfocus(); 
	int			OnSexCheckValue(); 
	//void			OnAddressChange(); 
	//void			OnAddressSetfocus(); 
	//void			OnAddressKillfocus(); 
	int			OnAddressCheckValue(); 
	//void			OnWorkingPlaceChange(); 
	//void			OnWorkingPlaceSetfocus(); 
	//void			OnWorkingPlaceKillfocus(); 
	int			OnWorkingPlaceCheckValue(); 
	//void			OnObjectChange(); 
	//void			OnObjectSetfocus(); 
	//void			OnObjectKillfocus(); 
	int			OnObjectCheckValue(); 
	//void			OnCardNoChange(); 
	//void			OnCardNoSetfocus(); 
	//void			OnCardNoKillfocus(); 
	int			OnCardNoCheckValue(); 
	//void			OnCardCodeChange(); 
	//void			OnCardCodeSetfocus(); 
	//void			OnCardCodeKillfocus(); 
	int			OnCardCodeCheckValue(); 
	//void			OnCardDiscountChange(); 
	//void			OnCardDiscountSetfocus(); 
	//void			OnCardDiscountKillfocus(); 
	int			OnCardDiscountCheckValue(); 
	//void			OnRegistrationDateChange(); 
	//void			OnRegistrationDateSetfocus(); 
	//void			OnRegistrationDateKillfocus(); 
	int			OnRegistrationDateCheckValue(); 
	//void			OnExpiryDateChange(); 
	//void			OnExpiryDateSetfocus(); 
	//void			OnExpiryDateKillfocus(); 
	int			OnExpiryDateCheckValue(); 
	//void			OnRegistrationPlaceChange(); 
	//void			OnRegistrationPlaceSetfocus(); 
	//void			OnRegistrationPlaceKillfocus(); 
	int			OnRegistrationPlaceCheckValue(); 
	long		OnTreatmentListLoadData();
	long		OnRoomListLoadData();
	void		OnTreatmentListSelectChange(int nOldItem, int nNewItem); 
	void		OnTreatmentListDblClick(); 
	int			OnTreatmentListDeleteItem(); 
	int			OnTreatmentListPrintExaminationCost();
	int			OnEditCardInformation();
	int			OnTerminateDocumentInformation();
	int			OnUpdateOver5YearsInformation();
	long		OnInvoiceListLoadData();
	int		    OnInvoiceListLoadDataDetail();
	void		OnInvoiceListSelectChange(int nOldItem, int nNewItem); 
	void		OnInvoiceListDblClick(); 
	int			OnInvoiceListDeleteItem(); 
	int			OnInvoiceListPrintReceipt(); 
	int			OnInvoiceListPrint(); 
	int			OnInvoiceListPrintGeneralExaminationCost();
	int			OnInvoiceListPrintGeneralExaminationCostA11();
	int			OnInvoiceListPrintInPackageCost();
	int			OnInvoiceListPrintDischargeReceipt(); 
	int			OnInvoiceListRefundDrugFee();
	int			OnEditInvoiceEletronicItem(); 
	int			OnUpdateMasterCardItem();
	int			OnUpdateHealthObject();

	long		OnListLoadData(); 
	void		OnLoadServiceList();
	void		OnLoadInsuranceList();
	void		OnLoadPolicyList();
	void		OnEletronic();

	void		OnListSelectChange(int nOldItem, int nNewItem); 
	void		OnListDblClick(); 
	int			OnListDeleteItem(); 
	int			OnListRecalc();
	int			OnListAddOtherFee();
	int			OnListDeleteOtherFee();
	void		OnPaymentSelect(); 
	void		OnApprovalSelect(); 
	void		OnPrintReceiptSelect(); 
	void		OnPrintPrescription();
	void		OnPrintHemaReceipt();
	void		OnPrintSummarizeExaminationSheet(bool bPreview=true);
	int			OnModifyItem();
	//Hàm cập nhật các mục phí bảo việt không thanh toán
	int			OnUpdateExtInsUnpaid();
	void		CreateRefundReceiptToSold();
	void		OnInsApproveSelect();
	void		OnPrescriptionApproveSelect();
	//void			OnStatusChange(); 
	//void			OnStatusSetfocus(); 
	//void			OnStatusKillfocus(); 
	int			OnStatusCheckValue(); 
	//void			OnNoteChange(); 
	//void			OnNoteSetfocus(); 
	//void			OnNoteKillfocus(); 
	int			OnNoteCheckValue(); 
	void		OnNoteSelect();
	void		OnInPackageSelect();
	int			OnViewRelative();

	CHMSPatientProfiles();
	~CHMSPatientProfiles();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	void CreateDepositReceipt();
	void CreateRefundReceipt();
	void CreateRemissionReceipt();
	void CreateRefundFeeReceipt();
	void OnReceipt();
	void OnPrintReceiptReceipt();
	int OnPrintTreatment();
	int CreateRefundInvoice();
	int OnKethucHS();
	void OnInvoiceListSelectCurrent(int nOldItem); 
	void OnBankInvoiceInfo();
	void OnBankInvoiceInfo2();
	void LoadData(long nDoc);

	void CreateList();
	CString	GetPaymentDepartments();
	void CreatePoliciesPayable();
	
	void RecalcAmount();
	void GetApproveInformation();
	void PrintSummaryCost();
	void	CreatePopupMenus();

	void	CreatePaymentVoucher();
	void	CreateOtherReceiptVoucher();
	void	OnPaymentVoucher();
	void	OnReceiptVoucher();
	bool	IsDischargePayment();
	
	void	GetInvoiceInformation();
	void	OnAutoPostSelect();
	int		OnCreateNewQrOnline();

	virtual BOOL PreTranslateMessage(MSG* pMsg);
	
	CString HaveAdiaphanousItem();
	void OnPrintAdiaphanousOrder();
	void OnWarning();
	void OnRecacDeposit();
	void OnResizeLayout();
	bool	CheckBeforeApprove();
	int		OnUpdateExtInsInfo();
	int     OnRollBackFeeRefund();
	int     OnChangePaymentMethod();
	int			OnInvoiceListRefundFee();
	int     OnChangeQrPaymentMethod();
	int     OnRollBackFeeRefund2();
	DECLARE_MESSAGE_MAP()
	afx_msg void OnTimer(UINT nIDEvent);
	afx_msg void OnSize(UINT nType, int cx, int cy);
};
#endif
