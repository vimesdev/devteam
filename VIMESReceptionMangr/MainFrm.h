#ifndef HMSRECEPTIONMAINFRAME_H
#define HMSRECEPTIONMAINFRAME_H


#include "HMSMainFrame.h"
#include "HMSRegistration.h"
#include "HMSExaminationQueue.h"
#include "HMSParaclinicalOrder.h"
#include "ATMCustomerList.h"
#include "HMSOnlineListView.h"


typedef struct tagPatientInfor{
		CString	MAKCB;
		CString	HOTEN;
		CString NAMSINH;
		CString GIOITINH;
		CString SOTHE;
		CString NGAYGIOVAO;
		CString NGAYGIORA;
		CString DIACHI;
		CString MABENHVIEN;	
		CString TENBENHVIEN;	
		CString TENBENH;	
		CString MABENH;	
		CString TRANGTHAI;
		CString KQDIEUTRI;

}PATIENT;




//int GetEncoderClsid(const WCHAR* format, CLSID* pClsid);


class CMainFrame : public CHMSMainFrame
{
	DECLARE_DYNAMIC(CMainFrame)
public:
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
	double	m_nDepositAmount;
	CString m_szDeptName;
	CString m_szUseCurrentDept;
	BOOL	m_IsC11;
	BOOL	m_IsC12;
	BOOL	m_IsC13;
	BOOL    m_bUseCCCDMachine;

	
	CHMSRegistration			m_wndRegistration;
	CHMSExaminationQueue	m_wndExaminationQueue;
    CHMSOnlineListView		m_wndOnlineListView;
	CHMSParaclinicalOrder	m_wndParaclinicalOrder;

	CArray<PATIENT, PATIENT&> Patient;
	PATIENT patientInfo;
	
	CATMCustomerList		m_wndCustomerList;
	
	//CPACSImageCapture		m_wndImageCapture;	
	

	bool	m_bParaclinical;

	CMainFrame();
	virtual ~CMainFrame();
	int		ParseCard(CString szObject, CString szCardNo, CString& szCode, int& nDiscount, int& nGroupID);
	long	GetLastRecvNo();
	bool	IsTreatmentTerminate(int nDocno, CString& szOutpatient);
	int	IsPatientInsuranceDaily(CString m_szCardNo);
	void	GetSerialInformation();
	void	PrintReceipt(long nInvoiceNo, bool bPreview);
	void	GetAutoCheckCardIns();
	BOOL	PreTranslateMessage(MSG* pMsg);
    void	OnTabSelectChange(int nOld, int nNew);


protected: 
	void OnInitializes();
	
	void OnSmartCardConnected(CString szCardId);
	void OnSmartCardDisconnect();
    
    
    // Generated message map functions
protected:
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnFileChangepassword();
	afx_msg void OnChangeDepartment();	
	afx_msg void OnCommandFunctionaltest();
	afx_msg void OnCommandChangepatientno();
	afx_msg void OnCommandIgnorehospitaltransferredinformations();
	afx_msg void OnFileReports32792();
	afx_msg void OnCommandUploadfile();
	afx_msg void OnDestroy();
	afx_msg void OnClose();
	afx_msg void OnCommandSearchinformationpatient();
	afx_msg void OnCommandSetuphostpital();
	afx_msg void OnCommandSetdefaultdoctor();
	afx_msg void OnCommandAddparaclinicalgroup();
	afx_msg void OnCommandSetupwifi();
	afx_msg void OnCommandSetupExamRoom();

	afx_msg void OnSettingsSmartCard();

	afx_msg void OnCommandBirthpackageregistration();
	afx_msg void OnAutoCheckCardSelect();
	afx_msg void OnCommandSetupCompany();
	afx_msg void OnCommandVaccineCovid19();
	afx_msg void OnCommandUseCCCDMachine();
	
	int ApplyInsuranceData(CString szCardNo, JSONVALUE& jData);
protected:
	virtual BOOL OnCommand(WPARAM wParam, LPARAM lParam);
public:
	afx_msg void OnMenu32817();
	afx_msg void OnSize(UINT nType, int cx, int cy);
    afx_msg void OnTimer(UINT_PTR nIDEvent);
};


#endif