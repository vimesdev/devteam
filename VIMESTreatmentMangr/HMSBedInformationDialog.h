#ifndef HMSBedInformationDialogDIALOG_H
#define HMSBedInformationDialogDIALOG_H

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
#include "GuiDialog.h"
#include "DbField.h"
#include "HTMLayoutCtrl.h"

class CHMSBedInformationDialog : public CGuiDialog
{
protected:
public:
	void	RefreshData();
	CGuiGroupBox	m_wndBedInformation;
	CGuiLabel		m_wndAdmitDateLabel;
	CGuiDateTimeCtrl	m_wndAdmitDate;
	CGuiLabel		m_wndOutDateLabel;
	CGuiDateTimeCtrl	m_wndOutDate;
	CGuiLabel		m_wndDayOfTreatLabel;
	CGuiNumberCtrl	m_wndDayOfTreat;
	CGuiLabel		m_wndRoomLabel;
	CGuiComboBox	m_wndRoom;

	CGuiLabel		m_wndBedLabel;
	CGuiComboBox	m_wndBed;
	CGuiLabel		m_wndPriceBedLabel;
	CGuiComboBox	m_wndPriceBed;
	CGuiLabel		m_wndDoctorLabel;
	CGuiComboBox	m_wndDoctor;
	CGuiComboBox	m_wndNurse;
	CGuiLabel		m_wndNurseLabel;
	CGuiLabel		m_wndServicePriceLabel;
	CGuiTextCtrl	m_wndServicePrice;
	CGuiLabel		m_wndInsurancePriceLabel;
	CGuiTextCtrl	m_wndInsurancePrice;
	CGuiLabel		m_wndPolicyPriceLabel;
	CGuiTextCtrl	m_wndPolicyPrice;
	CGuiLabel		m_wndRequestPriceLabel;
	CGuiTextCtrl	m_wndRequestPrice;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	
	
	CString	m_szAdmitDate;
	CString	m_szOutDate;
	float	m_nDayOfTreat;
	CString	m_szRoomKey;
	CString	m_szBedKey;
	CString m_szPriceBedKey;
	BOOL	m_bRequestOption;
	CString	m_szDoctorKey;
	CString	m_szNurseKey;
	CString	m_szStatus;
	CString	m_szServicePrice;
	CString	m_szInsurancePrice;
	CString	m_szPolicyPrice;
	CString	m_szRequestPrice;

	CString	m_szDeptID;
	CString m_szCurrentDeptID;
	int		m_nRoomID;
	int		m_nBedIdx;
	int		m_nBedRefIndex;
	CString	m_szDynPrice;
	BOOL	m_bByTreatTime;

	CDbfMap	m_hms_bedTbl;
	CDbfMap	m_hms_bed_itemsTbl;
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	int			OnListApplyDynamicPrice(); 
	int			OnListUnusedDynamicPrice(); 
	int			OnListAddNewBed();
	int			OnListEditBed();
	int			OnListDeleteBed();
	//void			OnAdmitDateChange(); 
	//void			OnAdmitDateSetfocus(); 
	//void			OnAdmitDateKillfocus(); 
	int			OnAdmitDateCheckValue(); 
	//void			OnOutDateChange(); 
	//void			OnOutDateSetfocus(); 
	void			OnOutDateKillfocus(); 
	int			OnOutDateCheckValue(); 
	//void			OnDayOfTreatChange(); 
	//void			OnDayOfTreatSetfocus(); 
	void			OnDayOfTreatKillfocus(); 
	int			OnDayOfTreatCheckValue(); 
	void			OnRoomSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnRoomSelendok(); 
	//void			OnRoomSetfocus(); 
	//void			OnRoomKillfocus(); 
	long			OnRoomLoadData(); 
	void			OnRoomAddNew(); 
	void			OnBedSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnBedSelendok(); 
	//void			OnBedSetfocus(); 
	//void			OnBedKillfocus(); 
	long			OnBedLoadData(); 
	void			OnBedAddNew();

	void			OnPriceBedSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnPriceBedSelendok(); 

	long			OnPriceBedLoadData(); 
	//void			OnPriceBedAddNew(); 


	void			OnRequestOptionSelect(); 
	void			OnDoctorSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDoctorSelendok(); 
	//void			OnDoctorSetfocus(); 
	//void			OnDoctorKillfocus(); 
	long			OnDoctorLoadData(); 
	void			OnDoctorAddNew(); 
	void			OnNurseSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnNurseSelendok(); 
	//void			OnNurseSetfocus(); 
	//void			OnNurseKillfocus(); 
	long			OnNurseLoadData(); 
	void			OnNurseAddNew(); 
	//void			OnServicePriceChange(); 
	//void			OnServicePriceSetfocus(); 
	//void			OnServicePriceKillfocus(); 
	int			OnServicePriceCheckValue(); 
	//void			OnInsurancePriceChange(); 
	//void			OnInsurancePriceSetfocus(); 
	//void			OnInsurancePriceKillfocus(); 
	int			OnInsurancePriceCheckValue(); 
	//void			OnPolicyPriceChange(); 
	//void			OnPolicyPriceSetfocus(); 
	//void			OnPolicyPriceKillfocus(); 
	int			OnPolicyPriceCheckValue(); 
	//void			OnRequestPriceChange(); 
	//void			OnRequestPriceSetfocus(); 
	//void			OnRequestPriceKillfocus(); 
	int			OnRequestPriceCheckValue(); 
	void			OnBedDiagramSelect(); 
	void			OnAddSelect(); 
	void			OnTerminateSelect(); 
	void			OnDeleteSelect(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect();
	void			OnByTreatTimeSelect();
	int				OnDynamicBedInformationView();
	CHMSBedInformationDialog(CWnd* pParent, int nMode);
	~CHMSBedInformationDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSBedInformationDialog(); 
	int OnEditHMSBedInformationDialog(); 
	int OnDeleteHMSBedInformationDialog(); 
	int OnSaveHMSBedInformationDialog(); 
	int OnCancelHMSBedInformationDialog(); 
	int OnHMSBedInformationDialogListLoadData(); 
	void OnResizeLayout();
};
#endif
