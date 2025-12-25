#ifndef HMSPatientFoodOrderEntryEX_H
#define HMSPatientFoodOrderEntryEX_H

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
#include "DbField.h"
#include "GuiDialog.h"

class CHMSPatientFoodOrderEntryEX : public CGuiDialog
{

protected:
	bool	m_bAddOrder;
	long	m_nID[5];
	long	m_nPatientNo;
	long	m_nDocumentNo;
	CString	m_szDept;
	int		m_nRoomID;
	int		m_nBedID;
	int		m_nRefIndex;
	int		m_nType;
	CString m_szSkipName2;
	CString m_szFastFoodIDS;
	CString m_szFastFoodIDS_A16;
public:
	BOOL	m_bHaucan;
	CWnd*	m_pWndOrder;
	long	m_nOID;
	BOOL	m_bIsVipA;
	CString	m_szBatchNo;
	CString	m_szStorages;
	CString m_szFeeIDS;
	

	CString	m_szDoctor;	
	CString	m_szCurrentOrderDate;
	CString m_szObjectID;
	CGuiGroupBox m_wndInformation;
	CGuiCheckBox	m_wndMultipleDay;
	CGuiNumberCtrl	m_wndDays;
	CGuiLabel		m_wndPatientNameLabel;
	CGuiComboBox	m_wndPatientName;
	CGuiLabel		m_wndDocumentNoLabel;
	CGuiTextCtrl	m_wndDocumentNo;

	CGuiLabel		m_wndOrderDateLabel;
	CGuiDateCtrl	m_wndOrderDate;	
	
	CGuiLabel		m_wndNameLabel;
	CGuiComboBox	m_wndName;
	CGuiLabel		m_wndQtyLabel;
	CGuiNumberCtrl	m_wndQty;
	CGuiLabel		m_wndName1Label;
	CGuiComboBox	m_wndName1;
	CGuiLabel		m_wndQty1Label;
	CGuiNumberCtrl	m_wndQty1;
	CGuiLabel		m_wndName2Label;
	CGuiComboBox	m_wndName2;		
	CGuiLabel		m_wndQty2Label;
	CGuiNumberCtrl	m_wndQty2;
	CGuiCheckBox	m_wndLevel;
	CGuiLabel		m_wndBreakfastRelativeLabel;
	CGuiComboBox	m_wndBreakfastRelative;
	CGuiLabel		m_wndQty3Label;
	CGuiNumberCtrl	m_wndQty3;
	CGuiLabel		m_wndNoteLabel;
	CGuiTextCtrl	m_wndNote;

	CGuiButton		m_wndSave;
	CGuiButton		m_wndClose;


	BOOL	m_bMultipleDay;
	CString	m_szOrderDate;

	int		m_nLevel;
	int		m_nDays;	
	int		m_nQty;
	int		m_nQty1;
	int		m_nQty2;
	int		m_nQty3;

	CString	m_szPatientNameKey;
	CString	m_szNameKey;	
	CString	m_szName1Key;
	CString	m_szName2Key;

	CString	m_szNameOldKey;	
	CString	m_szNameOld1Key;
	CString	m_szNameOld2Key;
	CString	m_szBreakfastRelativeKey;
	CString	m_szNote;


	
	
	
	CDbfMap	m_hms_feefodorderTbl;
	CDbfMap	m_hms_feefodorderlineTbl;
	void			OnStorageSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnStorageSelendok(); 
	//void			OnStorageSetfocus(); 
	//void			OnStorageKillfocus(); 
	long			OnStorageLoadData(); 
	//void			OnStorageAddNew(); 
	void			OnMultipleDaySelect(); 
	void			OnDaysChange(); 
	//void			OnDaysSetfocus(); 
	//void			OnDaysKillfocus(); 
	int			OnDaysCheckValue(); 
	void			OnOrderDateChange(); 
	//void			OnOrderDateSetfocus(); 
	//void			OnOrderDateKillfocus(); 
	int			OnOrderDateCheckValue(); 
	void			OnPatientNameSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnPatientNameSelendok(); 
	//void			OnPatientNameSetfocus(); 
	//void			OnPatientNameKillfocus(); 
	long			OnPatientNameLoadData(); 
	void			OnPatientNameAddNew(); 
	//void			OnDocumentNoChange(); 
	//void			OnDocumentNoSetfocus(); 
	//void			OnDocumentNoKillfocus(); 
	int			OnDocumentNoCheckValue(); 
	void			OnNameSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnNameSelendok(); 
	//void			OnNameSetfocus(); 
	//void			OnNameKillfocus(); 
	long			OnNameLoadData(); 
	//void			OnNameAddNew(); 

	void			OnName2SelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnName2Selendok(); 
	//void			OnName2Setfocus(); 
	//void			OnName2Killfocus(); 
	long			OnName2LoadData(); 
	//void			OnName2AddNew(); 
	void			OnName1SelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnName1Selendok(); 
	//void			OnName1Setfocus(); 
	//void			OnName1Killfocus(); 
	long			OnName1LoadData(); 
	//void			OnName1AddNew(); 
	//void			OnQtyChange(); 
	//void			OnQtySetfocus(); 
	//void			OnQtyKillfocus(); 
	int			OnQtyCheckValue(); 
	//void			OnQty2Change(); 
	//void			OnQty2Setfocus(); 
	//void			OnQty2Killfocus(); 
	int			OnQty2CheckValue(); 
	

	void			OnBreakfastRelativeSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnBreakfastRelativeSelendok(); 
	//void			OnBreakfastRelativeSetfocus(); 
	//void			OnBreakfastRelativeKillfocus(); 
	long			OnBreakfastRelativeLoadData(); 
	//void			OnBreakfastRelativeAddNew(); 
	//void			OnQty3Change(); 
	//void			OnQty3Setfocus(); 
	//void			OnQty3Killfocus(); 
	int			OnQty3CheckValue(); 
	//void			OnNoteChange(); 
	//void			OnNoteSetfocus(); 
	//void			OnNoteKillfocus(); 
	int			OnNoteCheckValue(); 
	int			OnNameCheckValue(); 
	int			OnName1CheckValue(); 
	int			OnName2CheckValue(); 
	

	void			OnSaveSelect(); 
	void			OnCloseSelect(); 
	CHMSPatientFoodOrderEntryEX(CWnd *pParent, int nMode, int nType=0);

	~CHMSPatientFoodOrderEntryEX();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSPatientFoodOrderEntry(); 
	int OnEditHMSPatientFoodOrderEntry(); 
	int OnDeleteHMSPatientFoodOrderEntry(); 
	int OnSaveHMSPatientFoodOrderEntry(); 
	int OnCancelHMSPatientFoodOrderEntry(); 
	int OnHMSPatientFoodOrderEntryListLoadData(); 
	BOOL PreTranslateMessage(MSG* pMsg);
};
#endif