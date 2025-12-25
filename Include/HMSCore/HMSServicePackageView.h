#ifndef HMSSERVICEPACKAGEVIEW_H
#define HMSSERVICEPACKAGEVIEW_H

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
#include "GuiView.h"
#include "DbField.h"
#include "GridListView.h"
class CHMSServicePackageView : public CGuiView
{

protected:
	long	m_nPackageId;
	long	m_nBatchId;
	CString m_szStatus;
	CString	m_szCreatedBy;
	CString m_szSubGroup;
	CString m_szSubItem;
	long	m_nOrderId;
	long	m_nOrderLineId;
	CString	m_szDeptId;
	CString		m_szInforOld;
	CString		m_szInforNew;
public:
	
	CGuiGroupBox	m_wndPackageInformation;
	CGuiLabel		m_wndRelativeLabel;
	CGuiComboBox	m_wndRelative;
	CGuiLabel		m_wndCardNumberLabel;
	CGuiComboBox	m_wndCardNumber;
	CGuiLabel		m_wndPackageLabel;
	CGuiComboBox	m_wndPackage;
	CGuiLabel		m_wndBeginDateLabel;
	CGuiDateTimeCtrl	m_wndBeginDate;
	CGuiLabel		m_wndEndDateLabel;
	CGuiDateTimeCtrl	m_wndEndDate;
	CGuiLabel		m_wndOrderQtyLabel;
	CGuiNumberCtrl	m_wndOrderQty;
	CGuiLabel		m_wndQuantityLabel;
	CGuiNumberCtrl	m_wndQuantity;
	CGuiButton		m_wndBedDiagram;
	CGuiTextCtrl	m_wndBed;
	CGuiLabel		m_wndDescriptionLabel;
	CGuiTextCtrl	m_wndDescription;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndPrint;

	CGuiButton		m_wndConfirm;
	CGuiButton		m_wndTerminate;
	CGuiCheckBox	m_wndDetail;

	CGridListView	m_wndList;
	CString	m_szRelativeKey;
	CString	m_szCardNumberKey;
	CString	m_szPackageKey;
	CString	m_szBeginDate;
	CString	m_szEndDate;
	float	m_nOrderQty;
	float	m_nQuantity;
	CString	m_szBed;
	CString	m_szDescription;
	BOOL	m_bDetail;
	void			OnRelativeSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnRelativeSelendok(); 
	//void			OnRelativeSetfocus(); 
	//void			OnRelativeKillfocus(); 
	long			OnRelativeLoadData(); 
	//void			OnRelativeAddNew(); 
	void			OnCardNumberSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnCardNumberSelendok(); 
	//void			OnCardNumberSetfocus(); 
	//void			OnCardNumberKillfocus(); 
	long			OnCardNumberLoadData(); 
	//void			OnCardNumberAddNew(); 
	void			OnPackageSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnPackageSelendok(); 
	//void			OnPackageSetfocus(); 
	//void			OnPackageKillfocus(); 
	long			OnPackageLoadData(); 
	//void			OnPackageAddNew(); 
	//void			OnBeginDateChange(); 
	//void			OnBeginDateSetfocus(); 
	//void			OnBeginDateKillfocus(); 
	int			OnBeginDateCheckValue(); 
	//void			OnEndDateChange(); 
	//void			OnEndDateSetfocus(); 
	//void			OnEndDateKillfocus(); 
	int			OnEndDateCheckValue(); 
	
	//void			OnOrderQtyChange(); 
	//void			OnOrderQtySetfocus(); 
	//void			OnOrderQtyKillfocus(); 
	int			OnOrderQtyCheckValue(); 

	//void			OnQuantityChange(); 
	//void			OnQuantitySetfocus(); 
	//void			OnQuantityKillfocus(); 
	int			OnQuantityCheckValue(); 
	void			OnBedDiagramSelect(); 
	//void			OnBedChange(); 
	//void			OnBedSetfocus(); 
	//void			OnBedKillfocus(); 
	int			OnBedCheckValue(); 
	//void			OnDescriptionChange(); 
	//void			OnDescriptionSetfocus(); 
	//void			OnDescriptionKillfocus(); 
	int			OnDescriptionCheckValue(); 
	void			OnAddSelect(); 
	void			OnEditSelect(); 
	void			OnDeleteSelect(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	void			OnPrintSelect(); 
	void			OnConfirmSelect(); 
	void			OnTerminateSelect();
	void			OnDetailSelect();

	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListAddItem(); 
	int			OnListEditItem(); 
	int			OnListDeleteItem(); 
	int			OnListConfirmItem(); 
	int			OnListDisconfirmItem(); 
	int			OnListDiscountItem();
	int			OnListTerminateTakecareItem();
	int			OnListAddMaterialInpackage();
	int			OnPhieuAnMienPhi();
	int			OnHCDetailPackage();
	int			OnCancelPackageFnc();

	CHMSServicePackageView();
	~CHMSServicePackageView();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSServicePackageView(); 
	int OnEditHMSServicePackageView(); 
	int OnDeleteHMSServicePackageView(); 
	int OnSaveHMSServicePackageView(); 
	int OnCancelHMSServicePackageView(); 
	int OnHMSServicePackageViewListLoadData(); 
	bool OnCheckPackage();
	int OnCheckRoomID();
};
#endif
