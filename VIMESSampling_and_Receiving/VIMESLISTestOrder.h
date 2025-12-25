#ifndef TESTORDER_H
#define TESTORDER_H

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Copyright(C) Medical Informatics Technology and Equipment Join Stock Company. 2008-2010. 			
//	All rights reserved. 
//	This program is protected by Viet nam and international treaties.  
//	Unauthorized reproduction or distribution of this program, 
//	or any portion of it, may result in severe civil and criminal penalties, 
//	and will be prosecuted to the maximum extent possible under the law.
//	This file is a part of the GUI(Graphical User Interface) class library.
//	(c) 2006-2008 Hay Hoang Van, All rights reserved.
//	CONTACT INFORMATION:
//	Email  : hayhv@miteco.com.vn or hayhv@yahoo.com
//	Website: http://www.miteco.com.vn
/////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Ban quyen cua Cong Ty Co Phan Thiet Bi va Cong Nghe Tin Hoc Y Te MITECO 2008-2010.
//	Do Cuc Ban Quyen, Bo VHTT nuoc Cong hoa xa hoi chu nghia Viet Nam cap.
//	Chuong trinh phan mem nay duoc Luat phap Viet Nam va quoc te bao ho.
//	San xuat, su dung hoac phan phoi trai phep toan bo hoac mot phan cua phan men nay se
//	chiu cac hinh phat va hinh su hoac dan su, co the len den muc toi da dung theo Luat qui dinh.
//	File nay la mot phan cua thu vien lap trinh(GUI). Ban quyen cua Hoang Van Hay. 2006-2008
//	THONG TIN LIEN HE:
//	Email  : hayhv@miteco.com.vn hoac hayhv@yahoo.com
//	Website: http://www.miteco.com.vn
//////////////////////////////////////////////////////////////////////////////////////////////////////////
#include "GuiUtils.h"
#include "GuiView.h"
#include "DbField.h"
#include "DeviceInterface.h"


class CVIMESLISTestOrder : public CGuiView{
protected:
public:
	CArray<CDeviceInterface*, CDeviceInterface*> m_arrayPort;
	CDeviceInterface*	m_devinterface;

	CGuiGroupBox	m_wndOrderInformation;
	CGuiListCtrl	m_wndSpecimemList;
	CGuiButton		m_wndInputData;
	CGuiLabel		m_wndDocumentNoLabel;
	CGuiNumberCtrl	m_wndDocumentNo;
	CGuiLabel		m_wndOrderIDLabel;
	CGuiNumberCtrl	m_wndOrderID;
	CGuiLabel		m_wndInstPIDLabel;
	CGuiTextCtrl	m_wndInstPID;
	CGuiLabel		m_wndOrderDateLabel;
	CGuiDateTimeCtrl	m_wndOrderDate;
	CGuiLabel		m_wndDoctorLabel;
	CGuiTextCtrl	m_wndDoctor;
	CGuiLabel		m_wndObjectLabel;
	CGuiTextCtrl	m_wndObject;
	CGuiLabel		m_wndPaymentStateLabel;
	CGuiTextCtrl	m_wndPaymentState;
	CGuiLabel		m_wndPatientNameLabel;
	CGuiTextCtrl	m_wndPatientName;
	CGuiLabel		m_wndAgeLabel;
	CGuiTextCtrl	m_wndAge;
	CGuiLabel		m_wndAddressLabel;
	CGuiTextCtrl	m_wndAddress;
	CGuiButton		m_wndReadResult;
	CGuiButton		m_wndUpdate;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndViewResult;
	CGuiButton		m_wndPrint;
	long	m_nInstrumentID;
	long	m_nInstOrderID;
	long	m_nDocumentNo;
	long	m_nOrderID;
	long	m_nOID;
	CString	m_szInstPID;
	CString	m_szOrderDate;
	CString	m_szDoctor;
	CString	m_szObject;
	CString	m_szPaymentState;
	CString	m_szPatientName;
	CString	m_szAge;
	CString	m_szAddress;
	CString	m_szStatus;
	CString	m_szSex;
	BOOL	m_bPaidFlag;
	CDbfMap	m_hms_pcorderTbl;
	CDbfMap	m_lims_orderTbl;
	bool	m_bAllowLoad;
	void	LoadData(long nOrderID);
	long			OnSpecimemListLoadData(); 
	void			OnSpecimemListSelectChange(int nOldItem, int nNewItem); 
	void			OnSpecimemListDblClick(); 
	int			OnSpecimemListDeleteItem(); 
	//void			OnDocumentNoChange(); 
	//void			OnDocumentNoSetfocus(); 
	//void			OnDocumentNoKillfocus(); 
	int			OnDocumentNoCheckValue(); 
	//void			OnOrderIDChange(); 
	//void			OnOrderIDSetfocus(); 
	//void			OnOrderIDKillfocus(); 
	int			OnOrderIDCheckValue(); 
	//void			OnInstPIDChange(); 
	//void			OnInstPIDSetfocus(); 
	//void			OnInstPIDKillfocus(); 
	int			OnInstPIDCheckValue(); 
	//void			OnOrderDateChange(); 
	//void			OnOrderDateSetfocus(); 
	//void			OnOrderDateKillfocus(); 
	int			OnOrderDateCheckValue(); 
	//void			OnDoctorChange(); 
	//void			OnDoctorSetfocus(); 
	//void			OnDoctorKillfocus(); 
	int			OnDoctorCheckValue(); 
	//void			OnObjectChange(); 
	//void			OnObjectSetfocus(); 
	//void			OnObjectKillfocus(); 
	int			OnObjectCheckValue(); 
	//void			OnPaymentStateChange(); 
	//void			OnPaymentStateSetfocus(); 
	//void			OnPaymentStateKillfocus(); 
	int			OnPaymentStateCheckValue(); 
	//void			OnPatientNameChange(); 
	//void			OnPatientNameSetfocus(); 
	//void			OnPatientNameKillfocus(); 
	int			OnPatientNameCheckValue(); 
	//void			OnAgeChange(); 
	//void			OnAgeSetfocus(); 
	//void			OnAgeKillfocus(); 
	int			OnAgeCheckValue(); 
	//void			OnAddressChange(); 
	//void			OnAddressSetfocus(); 
	//void			OnAddressKillfocus(); 
	int			OnAddressCheckValue(); 
	void			OnReadResultSelect(); 
	void			OnUpdateSelect(); 
	void			OnSaveSelect(); 
	void			OnViewResultSelect(); 
	void			OnPrintSelect(); 
	void			OnConfigurationPort(); 
	
	CVIMESLISTestOrder();
	~CVIMESLISTestOrder();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddTestOrder(); 
	int OnEditTestOrder(); 
	int OnDeleteTestOrder(); 
	int OnSaveTestOrder(); 
	int OnCancelTestOrder(); 
	int OnTestOrderListLoadData(); 
	int OnViewTestOrderResult(); 
	bool	ConnectRS232();
	void	CreateWorkingOrder();

	DECLARE_MESSAGE_MAP()
	afx_msg void OnTimer(UINT nIDEvent);
	afx_msg void OnDestroy();
};
#endif
