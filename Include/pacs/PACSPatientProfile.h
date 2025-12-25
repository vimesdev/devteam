#ifndef PACSPATIENTPROFILE_H
#define PACSPATIENTPROFILE_H

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
#include "PACSInputResult.h"
//#include "PACSImageCapture.h"
#include "HMSParaclinicalOrder.h"


class CPACSView: public CScrollView{
public:
	CPACSView(){};
	~CPACSView(){};
	virtual void OnDraw(CDC *pDC){}
};

class CPACSPatientProfile : public CGuiView{
protected:
	HANDLE	m_hDicomThread;
	int		m_nImageCount;
	int		m_nImageCurrent;
	CStringArray m_strFile;
	bool	m_bInpatient;
	
public:
	CGuiGroupBox	m_wndPatientProfile;
	CGuiLabel		m_wndDocumentNoLabel;
	CGuiNumberCtrl	m_wndDocumentNo;
	CGuiLabel		m_wndBarcodeLabel;
	CGuiTextCtrl	m_wndBarcode;
	CGuiLabel		m_wndPatientNameLabel;
	CGuiTextCtrl	m_wndPatientName;
	CGuiLabel		m_wndAgeLabel;
	CGuiTextCtrl	m_wndAge;
	CGuiLabel		m_wndSexLabel;
	CGuiComboBox	m_wndSex;
	CGuiLabel		m_wndAddressLabel;
	CGuiTextCtrl	m_wndAddress;
	CGuiLabel		m_wndDiagnosticLabel;
	CGuiTextCtrl	m_wndDiagnostic;
	CGuiLabel		m_wndOrderDateLabel;
	CGuiDateCtrl	m_wndOrderDate;
	CGuiLabel		m_wndDoctorLabel;
	CGuiComboBox	m_wndDoctor;
	CGuiLabel		m_wndDepartmentLabel;
	CGuiTextCtrl	m_wndDepartment;
	CGuiLabel		m_wndRoomLabel;
	CGuiTextCtrl	m_wndRoom;
	CGuiLabel		m_wndObjectLabel;
	CGuiComboBox	m_wndObject;
	CGuiCheckBox	m_wndEmergency;
	CGuiLabel		m_wndPerformRoomLabel;
	CGuiComboBox	m_wndPerformRoom;
	CGuiListCtrl	m_wndOrderList;
	CGuiTabCtrl	m_wndTab;

	CGuiButton		m_wndUpdate;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndPrint;
	CGuiButton		m_wndInputForm;

	CGuiButton		m_wndCapture;
	CGuiListCtrl	m_wndMaterialList;
	CGuiButton		m_wndAddMaterial;
	CPACSView		m_wndView;
	CHMSParaclinicalOrder	m_wndParaclinicalOrder;


	CPACSInputResult*	m_wndResult;
	long	m_nDocumentNo;
	long	m_nBarcode;
	CString	m_szPatientName;
	CString	m_szAge;
	CString	m_szSexKey;
	CString	m_szAddress;
	CString	m_szDiagnostic;
	CString	m_szOrderDate;
	CString	m_szDoctorKey;
	CString	m_szDepartmentKey;
	CString	m_szRoomKey;
	CString m_szPerformRoomKey;
	CString	m_szPerformDate;
	CString	m_szObjectKey;
	CString m_szStatusLine;
	BOOL	m_bEmergency;
	CString	m_szDate;
	CString	m_szSearchName;
	CString	m_szCurrentFormID;
	CString m_szDescription;
	CString	m_szStatusDesc;
	CString	m_szPerformedBy;
	
	
	long	m_nOrderID;
	long	m_nOrderlineID;
	CString	m_szStatus;
	CString	m_szDepartmentType;
	CString	m_szItemID;
	CString	m_szCheckEnterMaterialOfParaclinical;
	CString	m_szGroup;
	CString m_szUploadFileName;
	CString	m_szImportFileName;

	CDbfMap	m_PACS_patientTbl;
	CDbfMap	m_PACS_orderTbl;
	//void			OnDocumentNoChange(); 
	//void			OnDocumentNoSetfocus(); 
	//void			OnDocumentNoKillfocus(); 
	int			OnDocumentNoCheckValue(); 
	//void			OnBarcodeChange(); 
	//void			OnBarcodeSetfocus(); 
	//void			OnBarcodeKillfocus(); 
	int			OnBarcodeCheckValue(); 
	//void			OnPatientNameChange(); 
	//void			OnPatientNameSetfocus(); 
	//void			OnPatientNameKillfocus(); 
	int			OnPatientNameCheckValue(); 
	//void			OnAgeChange(); 
	//void			OnAgeSetfocus(); 
	//void			OnAgeKillfocus(); 
	int			OnAgeCheckValue(); 
	void			OnSexSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnSexSelendok(); 
	//void			OnSexSetfocus(); 
	//void			OnSexKillfocus(); 
	long			OnSexLoadData(); 
	void			OnSexAddNew(); 
	//void			OnAddressChange(); 
	//void			OnAddressSetfocus(); 
	//void			OnAddressKillfocus(); 
	int			OnAddressCheckValue(); 
	//void			OnDiagnosticChange(); 
	//void			OnDiagnosticSetfocus(); 
	//void			OnDiagnosticKillfocus(); 
	int			OnDiagnosticCheckValue(); 
	//void			OnOrderDateChange(); 
	//void			OnOrderDateSetfocus(); 
	//void			OnOrderDateKillfocus(); 
	int			OnOrderDateCheckValue(); 
	void			OnDoctorSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDoctorSelendok(); 
	//void			OnDoctorSetfocus(); 
	//void			OnDoctorKillfocus(); 
	long			OnDoctorLoadData(); 
	//void			OnDoctorAddNew(); 
	//void			OnDepartmentChange(); 
	//void			OnDepartmentSetfocus(); 
	//void			OnDepartmentKillfocus(); 
	int			OnDepartmentCheckValue(); 
	//void			OnRoomChange(); 
	//void			OnRoomSetfocus(); 
	//void			OnRoomKillfocus(); 
	int			OnRoomCheckValue(); 
	void			OnObjectSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnObjectSelendok(); 
	//void			OnObjectSetfocus(); 
	//void			OnObjectKillfocus(); 
	long			OnObjectLoadData(); 
	void			OnObjectAddNew(); 
	void			OnEmergencySelect(); 
	void			OnPerformRoomSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnPerformRoomSelendok(); 
	//void			OnPerformRoomSetfocus(); 
	//void			OnPerformRoomKillfocus(); 
	long			OnPerformRoomLoadData(); 
	//void			OnPerformRoomAddNew(); 
	long			OnOrderListLoadData(); 
	void			OnOrderListSelectChange(int nOldItem, int nNewItem); 
	void			OnOrderListDblClick(); 
	int			OnOrderListDeleteItem(); 
	void			OnTabSelectChange(int nOld, int nNew); 
	void			OnUpdateSelect(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	void			OnPrintSelect(); 
	void			OnInputFormSelect();
	void			OnCaptureSelect(); 
	long			OnMaterialListLoadData(); 
	void			OnMaterialListSelectChange(int nOldItem, int nNewItem); 
	void			OnMaterialListDblClick(); 
	int			OnMaterialListDeleteItem(); 
	void			OnAddMaterialSelect(); 

	void		GetCurrentStatus();
	void		SetFileName( const CString& FileName, BOOL bRedraw=FALSE); 
	BOOL	AddImage(CString szFileName);
	BOOL	RemoveImage(CString szFileName);
	BOOL	DownloadImage();
	BOOL	ImportImage();
	void	RefreshFormID(CString szFormID);
	
	void	PreMakeDir();
	void	OnAddNewOrder();
	void	OnDeleteOrder();
	
	void	GetOrderInformation(long nOrderID, CString szItemID);
	void	LoadData(long nDocumentNo);

	CPACSPatientProfile();
	~CPACSPatientProfile();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddPACSPatientProfile(); 
	int OnEditPACSPatientProfile(); 
	int OnDeletePACSPatientProfile(); 
	int OnSavePACSPatientProfile(); 
	int OnCancelPACSPatientProfile(); 
	int OnPACSPatientProfileListLoadData(); 
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	DECLARE_MESSAGE_MAP()
	afx_msg void OnDestroy();
};
#endif
