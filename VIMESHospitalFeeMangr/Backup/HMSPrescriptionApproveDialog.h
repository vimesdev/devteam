#ifndef HMSPRESCRIPTIONAPPROVEDIALOG_H
#define HMSPRESCRIPTIONAPPROVEDIALOG_H

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Copyright © Viet Nam Medical Software Joint Stock Company. 2005-2012. 			
//	All rights reserved. 
//	This program is protected by Viet nam and international treaties.  
//	Unauthorized reproduction or distribution of this program, 
//	or any portion of it, may result in severe civil and criminal penalties, 
//	and will be prosecuted to the maximum extent possible under the law.
//	This file is a part of the GUI(Graphical User Interface) class library.
//	(c) 2006-2008 Hoang Van Hay, All rights reserved.
//	CONTACT INFORMATION:
//	Email  : hayhv@vimes.com.vn or hayhv@yahoo.com
//	Website: http://www.vimes.com.vn
/////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Ban quyen cua Cong Ty Co Phan Phan Mem Y Te Viet Nam 2005-2012.
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
#include "GuiDialog.h"
#include "DbField.h"
class CHMSPrescriptionApproveDialog : public CGuiDialog{
protected:
	long	m_nOrderID;
	long	m_nPatientNo;
	long	m_nDocumentNo;
	long	m_nTransaction_ID;
public:
	CGuiGroupBox	m_wndPrescriptionInformation;
	CGuiGroupBox	m_wndLines;	
	CGuiGroupBox	m_wndInformationPatpaid;
	CGuiListCtrl	m_wndList;
	CGuiListCtrl	m_wndLine;
	CGuiRadioButton	m_wndIssueType;
	CGuiRadioButton	m_wndReturnType;
	CGuiCheckBox	m_wndApprovedOrders;
	CGuiButton		m_wndApprove;
	CGuiButton		m_wndDiscard;
	CGuiButton		m_wndCancel;
	CGuiLabel		m_wndSheetNoLabel;
	CGuiTextCtrl	m_wndSheetNo;
	CGuiLabel		m_wndStorageLabel;
	CGuiComboBox	m_wndStorage;
	CGuiLabel		m_wndDocumentNoLabel;
	CGuiNumberCtrl	m_wndDocumentNo;
	CGuiLabel		m_wndPatientNameLabel;
	CGuiTextCtrl	m_wndPatientName;
	CGuiLabel		m_wndTotalCostLabel;
	CGuiNumberCtrl	m_wndTotalCost;
	CGuiLabel		m_wndDepositLabel;
	CGuiNumberCtrl	m_wndDeposit;
	CGuiLabel		m_wndTotalPayableLabel;
	CGuiNumberCtrl	m_wndTotalPayable;
	CGuiLabel		m_wndSoDuLabel;
	CGuiNumberCtrl	m_wndSoDu;
	int	m_nType;
	CDbfMap	m_hms_pharmaorderTbl;
	BOOL			m_bApprovedOrders;
	CString	m_szSheetNo;
	CString	m_szStorageKey;
	CString m_szTransactionID;

	CString	m_szPatientName;
	long	m_nTotalCost;
	long	m_nDeposit;
	long	m_nTotalPayable;
	long	m_nSoDu;



	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	long			OnLineLoadData(); 
	void			OnLineSelectChange(int nOldItem, int nNewItem); 
	void			OnLineDblClick(); 
	int			OnLineDeleteItem(); 
	void			OnIssueTypeSelect(); 
	void			OnReturnTypeSelect(); 
	void			OnApprovedOrdersSelect(); 
	void			OnApproveSelect(); 
	void			OnDiscardSelect(); 
	void			OnCancelSelect(); 
	//void			OnSheetNoChange(); 
	//void			OnSheetNoSetfocus(); 
	//void			OnSheetNoKillfocus(); 
	int			OnSheetNoCheckValue(); 
	void			OnStorageSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnStorageSelendok(); 
	//void			OnStorageSetfocus(); 
	//void			OnStorageKillfocus(); 
	long			OnStorageLoadData(); 
	//void			OnStorageAddNew(); 

	//void			OnDocumentNoChange(); 
	//void			OnDocumentNoSetfocus(); 
	//void			OnDocumentNoKillfocus(); 
	int			OnDocumentNoCheckValue(); 
	//void			OnPatientNameChange(); 
	//void			OnPatientNameSetfocus(); 
	//void			OnPatientNameKillfocus(); 
	int			OnPatientNameCheckValue(); 
	//void			OnTotalCostChange(); 
	//void			OnTotalCostSetfocus(); 
	//void			OnTotalCostKillfocus(); 
	int			OnTotalCostCheckValue(); 
	//void			OnDepositChange(); 
	//void			OnDepositSetfocus(); 
	//void			OnDepositKillfocus(); 
	int			OnDepositCheckValue(); 
	//void			OnTotalPayableChange(); 
	//void			OnTotalPayableSetfocus(); 
	//void			OnTotalPayableKillfocus(); 
	int			OnTotalPayableCheckValue(); 
	//void			OnSoDuChange(); 
	//void			OnSoDuSetfocus(); 
	//void			OnSoDuKillfocus(); 
	int			OnSoDuCheckValue(); 
	CHMSPrescriptionApproveDialog(CWnd *pParent);
	~CHMSPrescriptionApproveDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSPrescriptionApproveDialog(); 
	int OnEditHMSPrescriptionApproveDialog(); 
	int OnDeleteHMSPrescriptionApproveDialog(); 
	int OnSaveHMSPrescriptionApproveDialog(); 
	int OnCancelHMSPrescriptionApproveDialog(); 
	int OnHMSPrescriptionApproveDialogListLoadData();
	
	int OnListCheckAll();
	int OnListUncheckAll();
	void OnPrintGeneralApprovedInOrder();
	void OnPrintDetailedApprovedInOrder();
};
#endif
